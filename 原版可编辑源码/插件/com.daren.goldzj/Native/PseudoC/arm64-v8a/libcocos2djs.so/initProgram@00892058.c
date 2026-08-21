
/* cocos2d::RenderTexture::initProgram() */

void __thiscall cocos2d::RenderTexture::initProgram(RenderTexture *this)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int local_44;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 
  "\n#ifdef GL_ES\n    precision highp float;\n#endif\n    attribute vec2 a_position;\n    attribute vec2 a_texCoord;\n    varying vec2 v_texCoord;\n    void main()\n    {\n        gl_Position = vec4(a_position, 0, 1);\n        v_texCoord = a_texCoord;\n    }\n    "
  ;
  uVar4 = glCreateShader(0x8b31);
  uVar6 = uVar4 & 0xffffffff;
  glShaderSource(uVar4,1,&local_40,0);
  glCompileShader(uVar6);
  local_44 = 0;
  glGetShaderiv(uVar6,0x8b81,&local_44);
  bVar2 = false;
  if (local_44 != 1) goto LAB_008921e8;
  local_40 = 
  "\n#ifdef GL_ES\n    precision highp float;\n#endif\n    varying vec2 v_texCoord;\n    uniform sampler2D u_texture;\n    void main()\n    {\n        gl_FragColor = texture2D(u_texture, v_texCoord);\n    }\n    "
  ;
  uVar4 = glCreateShader(0x8b30);
  uVar7 = uVar4 & 0xffffffff;
  glShaderSource(uVar4,1,&local_40,0);
  glCompileShader(uVar7);
  local_44 = 0;
  glGetShaderiv(uVar7,0x8b81,&local_44);
  if (local_44 == 1) {
    uVar5 = glCreateProgram();
    *(int *)(this + 0x20) = (int)uVar5;
    if ((int)uVar5 == 0) {
      glDeleteShader(uVar6);
      uVar6 = uVar7;
      goto LAB_008921e0;
    }
    glAttachShader(uVar5,uVar6);
    glAttachShader(*(undefined4 *)(this + 0x20),uVar7);
    glLinkProgram(*(undefined4 *)(this + 0x20));
    glDeleteShader(uVar6);
    glDeleteShader(uVar7);
    local_40 = (char *)((ulong)local_40 & 0xffffffff00000000);
    glGetProgramiv(*(undefined4 *)(this + 0x20),0x8b82,&local_40);
    if ((int)local_40 == 0) {
      glDeleteProgram(*(undefined4 *)(this + 0x20));
      bVar2 = false;
      *(undefined4 *)(this + 0x20) = 0;
      goto LAB_008921e8;
    }
    iVar3 = glGetAttribLocation(*(undefined4 *)(this + 0x20),"a_position");
    *(int *)(this + 0x24) = iVar3;
    if (iVar3 != -1) {
      iVar3 = glGetAttribLocation(*(undefined4 *)(this + 0x20),"a_texCoord");
      *(int *)(this + 0x28) = iVar3;
      if (iVar3 != -1) {
        iVar3 = glGetUniformLocation(*(undefined4 *)(this + 0x20),"u_texture");
        bVar2 = iVar3 != -1;
        *(int *)(this + 0x2c) = iVar3;
        goto LAB_008921e8;
      }
    }
  }
  else {
LAB_008921e0:
    glDeleteShader(uVar6);
  }
  bVar2 = false;
LAB_008921e8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}

