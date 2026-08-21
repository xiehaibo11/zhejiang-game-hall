
/* cocos2d::RenderTexture::compileShader(unsigned int&, unsigned int, char const*) const */

void __thiscall
cocos2d::RenderTexture::compileShader(RenderTexture *this,uint *param_1,uint param_2,char *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int local_34;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_3;
  uVar2 = glCreateShader(param_2);
  *param_1 = (uint)uVar2;
  glShaderSource(uVar2,1,&local_30,0);
  glCompileShader(*param_1);
  local_34 = 0;
  glGetShaderiv(*param_1,0x8b81,&local_34);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_34 == 1);
}

