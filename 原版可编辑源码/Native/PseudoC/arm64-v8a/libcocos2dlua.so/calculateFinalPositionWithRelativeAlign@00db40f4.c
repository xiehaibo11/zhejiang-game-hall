
/* cocos2d::ui::RelativeLayoutManager::calculateFinalPositionWithRelativeAlign() */

void __thiscall
cocos2d::ui::RelativeLayoutManager::calculateFinalPositionWithRelativeAlign
          (RelativeLayoutManager *this)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  LayoutParameter *this_00;
  Margin *pMVar4;
  undefined8 uVar5;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = (**(code **)(**(long **)(this + 0x48) + 0x5f8))();
  if (lVar3 == 0) {
    this_00 = (LayoutParameter *)0x0;
  }
  else {
    this_00 = (LayoutParameter *)
              __dynamic_cast(lVar3,&LayoutParameter::typeinfo,&RelativeLayoutParameter::typeinfo,0);
  }
  pMVar4 = (Margin *)LayoutParameter::getMargin(this_00);
  Margin::Margin((Margin *)&local_48,pMVar4);
  uVar2 = RelativeLayoutParameter::getAlign((RelativeLayoutParameter *)this_00);
  switch(uVar2) {
  case 0:
  case 1:
  case 0x10:
  case 0x13:
    local_48 = (float)*(undefined8 *)(this + 0x50) + local_48;
    fStack_44 = (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) - fStack_44;
    goto LAB_00db41b4;
  case 2:
  case 0x14:
                    /* try { // try from 00db41fc to 00eb4203 has its CatchHandler @ 00db4344 */
    fStack_44 = *(float *)(this + 0x54) - fStack_44;
    goto LAB_00db423c;
  case 3:
  case 0xd:
  case 0x15:
    uVar5 = NEON_rev64(CONCAT44(local_40,fStack_44),4);
    *(ulong *)(this + 0x50) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) -
                  (float)((ulong)uVar5 >> 0x20),(float)*(undefined8 *)(this + 0x50) - (float)uVar5);
    break;
  case 4:
  case 0x11:
    *(float *)(this + 0x50) = local_48 + *(float *)(this + 0x50);
    break;
  case 6:
  case 0xe:
    *(float *)(this + 0x50) = *(float *)(this + 0x50) - local_40;
    break;
  case 7:
  case 10:
  case 0x12:
    *(ulong *)(this + 0x50) =
         CONCAT44(fStack_3c + (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20),
                  local_48 + (float)*(undefined8 *)(this + 0x50));
    break;
  case 8:
  case 0xb:
    fStack_44 = fStack_3c + *(float *)(this + 0x54);
LAB_00db423c:
    *(float *)(this + 0x54) = fStack_44;
    break;
  case 9:
  case 0xc:
  case 0xf:
    local_48 = (float)*(undefined8 *)(this + 0x50) - local_40;
    fStack_44 = (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) + fStack_3c;
LAB_00db41b4:
    *(ulong *)(this + 0x50) = CONCAT44(fStack_44,local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00db425c to 00eb4263 has its CatchHandler @ 00db4348 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00db4264 to 00eb439b has its CatchHandler @ 00db4004 */
  __stack_chk_fail();
}

