
/* JSB_SocketIODelegate::onClose(cocos2d::network::SIOClient*) */

void __thiscall JSB_SocketIODelegate::onClose(JSB_SocketIODelegate *this,SIOClient *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong local_68 [2];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
  local_50[0] = 0x14;
  local_40 = (void *)0x0;
  local_50[9] = 99;
  local_50[10] = 0x74;
  local_50[1] = 100;
  local_50[2] = 0x69;
  local_50[3] = 0x73;
  local_50[4] = 99;
  local_50[5] = 0x6f;
  local_50[6] = 0x6e;
  local_50[7] = 0x6e;
  local_50[8] = 0x65;
  local_50[0xb] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (void *)0x0;
  (**(code **)(*(long *)this + 0x30))(this,param_1,local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  lVar3 = se::NativePtrToObjectMap::find(param_1);
  lVar4 = se::NativePtrToObjectMap::end();
  if (lVar3 != lVar4) {
    se::Object::unroot(*(Object **)(lVar3 + 0x18));
  }
  iVar2 = cocos2d::Ref::getReferenceCount((Ref *)this);
  if (iVar2 == 1) {
    cocos2d::Ref::autorelease((Ref *)this);
  }
  else {
    cocos2d::Ref::release((Ref *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00992b88 to 00a92bdf has its CatchHandler @ 00992b88
                       catch() { ... } // from try @ 00992b88 with catch @ 00992b88
                       catch() { ... } // from try @ 00992e14 with catch @ 00992b88 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

