
/* cocos2d::Device::getSafeAreaEdge() */

void __thiscall cocos2d::Device::getSafeAreaEdge(Device *this)

{
  long lVar1;
  float *pfVar2;
  Vec4 *in_x8;
  basic_string local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined4 local_5f;
  undefined3 uStack_5b;
  void *local_58;
  ulong local_50 [2];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = operator_new(0x20);
  local_50[1] = 0x1f;
  local_50[0] = 0x21;
  uStack_5b = 0;
  local_68 = (basic_string)0x16;
  local_5f = 0x616572;
  builtin_strncpy(local_40,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  local_58 = (void *)0x0;
  uStack_67 = 0x65666153746567;
  uStack_60 = 0x41;
  pfVar2 = JniHelper::callStaticFloatArrayMethod<>((basic_string *)local_50,&local_68);
  if (((byte)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  Vec4::Vec4(in_x8,*pfVar2,pfVar2[1],pfVar2[2],pfVar2[3]);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

