
/* cocos2d::ui::ListView::remedyVerticalLayoutParameter(cocos2d::ui::LinearLayoutParameter*, long)
    */

void __thiscall
cocos2d::ui::ListView::remedyVerticalLayoutParameter
          (ListView *this,LinearLayoutParameter *param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Margin aMStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(this + 0x8d0) < 3) {
    LinearLayoutParameter::setGravity
              (param_1,*(undefined4 *)(&DAT_0141dfc0 + (long)(int)*(uint *)(this + 0x8d0) * 4));
  }
  if (param_2 == 0) {
    fVar2 = *(float *)(this + 0x8e0);
    fVar3 = *(float *)(this + 0x8e4);
  }
  else {
    if ((*(long *)(this + 0x8c0) - *(long *)(this + 0x8b8) >> 3) + -1 == param_2) {
      fVar2 = *(float *)(this + 0x8e0);
      fVar3 = *(float *)(this + 0x8dc);
      fVar4 = *(float *)(this + 0x8e8);
      fVar5 = *(float *)(this + 0x8ec);
      goto LAB_00db5a28;
    }
    fVar2 = *(float *)(this + 0x8e0);
    fVar3 = *(float *)(this + 0x8dc);
  }
  fVar4 = *(float *)(this + 0x8e8);
  fVar5 = 0.0;
LAB_00db5a28:
  Margin::Margin(aMStack_48,fVar2,fVar3,fVar4,fVar5);
  LayoutParameter::setMargin((LayoutParameter *)param_1,aMStack_48);
                    /* try { // try from 00db5a38 to 00eb5ac7 has its CatchHandler @ 00db5a38
                       catch(type#1 @ 00000000) { ... } // from try @ 00db5a38 with catch @ 00db5a38
                       catch(type#1 @ 00000000) { ... } // from try @ 00db5b9c with catch @ 00db5a38
                       catch(type#1 @ 00000000) { ... } // from try @ 00db5c84 with catch @ 00db5a38
                        */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

