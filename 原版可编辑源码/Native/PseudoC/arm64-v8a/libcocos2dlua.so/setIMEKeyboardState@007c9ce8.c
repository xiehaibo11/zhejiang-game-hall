
/* cocos2d::GLViewImpl::setIMEKeyboardState(bool) */

void __thiscall cocos2d::GLViewImpl::setIMEKeyboardState(GLViewImpl *this,bool param_1)

{
  long lVar1;
  basic_string local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined6 uStack_46;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1) {
    local_30 = operator_new(0x30);
    builtin_strncpy(local_30,"org.cocos2dx.lib.Cocos2dxGLSurfaceView",0x27);
    local_58 = (basic_string)0x1e;
    uStack_4f = 0x6472616f627965;
    uStack_48 = 0;
    uStack_57 = 0x454d496e65706f;
    uStack_50 = 0x4b;
  }
  else {
    local_30 = operator_new(0x30);
    builtin_strncpy(local_30,"org.cocos2dx.lib.Cocos2dxGLSurfaceView",0x27);
    local_58 = (basic_string)0x20;
    uStack_4f = 0x72616f6279654b;
    uStack_48 = 100;
    uStack_57 = 0x4d4965736f6c63;
    uStack_50 = 0x45;
  }
  uStack_47 = 0;
  local_40[1] = 0x26;
  local_40[0] = 0x31;
  uStack_46 = 0;
  JniHelper::callStaticVoidMethod<>((basic_string *)local_40,&local_58);
  if (((byte)local_58 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_46,CONCAT11(uStack_47,uStack_48)));
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

