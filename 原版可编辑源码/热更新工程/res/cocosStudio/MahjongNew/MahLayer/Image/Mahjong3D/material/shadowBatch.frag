#ifdef GL_ES
    varying mediump vec2 v_textureCoord;
#else
    varying vec2 v_textureCoord;
#endif
varying vec4 v_alpha;
void main(void)
{  
    gl_FragColor = texture2D(CC_Texture0, v_textureCoord) * v_alpha;
}

