
/* cocos2d::middleware::Texture2D::setTexParameters(cocos2d::middleware::Texture2D::_TexParams
   const&) */

void __thiscall
cocos2d::middleware::Texture2D::setTexParameters(Texture2D *this,_TexParams *param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    uStack_2c = *(undefined4 *)(this + 0x14);
    local_30 = *(undefined4 *)param_1;
    uStack_34 = *(undefined4 *)(param_1 + 4);
    local_38 = *(undefined4 *)(param_1 + 8);
    local_3c = *(undefined4 *)(param_1 + 0xc);
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_2c,&local_30,&uStack_34,&local_38,&local_3c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

