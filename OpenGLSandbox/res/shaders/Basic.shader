#shader vertex

#version 330 core



layout(location = 0) in vec4 position;

layout(location = 1) in vec2 texCoord;

uniform mat4 model;
uniform mat4 proj;
uniform mat4 view;

out vec2 v_TexCoord;



void main()

{

	gl_Position = proj * view * model * position;

	v_TexCoord = texCoord;

};



#shader fragment

#version 330 core



layout(location = 0) out vec4 color;



in vec2 v_TexCoord;



uniform vec4 u_Color;

uniform sampler2D u_Texture;



void main()

{

	vec4 texColor = texture(u_Texture, v_TexCoord);

	color = texColor * u_Color;

};
