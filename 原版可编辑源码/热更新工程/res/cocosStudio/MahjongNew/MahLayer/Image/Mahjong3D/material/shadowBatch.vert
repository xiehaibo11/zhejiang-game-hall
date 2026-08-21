
attribute vec4 a_position;
attribute vec2 a_texCoord;
attribute vec3 a_normal;
attribute float a_id;
attribute vec4 a_alpha;
uniform mat4 u_models[30];

#ifdef GL_ES
varying mediump vec2 v_textureCoord;
#else
varying vec2 v_textureCoord;
#endif
varying vec4 v_alpha;
void main(void)
{
    int index = int(a_id);
	v_alpha=a_alpha;
    v_textureCoord = a_texCoord;
    v_textureCoord.y = 1.0 - v_textureCoord.y;
    gl_Position = CC_PMatrix * u_models[index] * a_position;
}
