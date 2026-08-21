
/* cocos2d::ActionFloat::reverse() const */

undefined8 __thiscall cocos2d::ActionFloat::reverse(ActionFloat *this)

{
  long lVar1;
  ActionFloat *pAVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  local_60 = alStack_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = *(undefined4 *)(this + 0x4c);
  pAVar2 = *(ActionFloat **)(this + 0x90);
  uVar6 = *(undefined4 *)(this + 0x58);
  uVar7 = *(undefined4 *)(this + 0x5c);
  if (pAVar2 == (ActionFloat *)0x0) {
    local_60 = (long *)0x0;
                    /* try { // try from 00ee53fc to 00fe5457 has its CatchHandler @ 00ee53fc
                       catch() { ... } // from try @ 00ee53fc with catch @ 00ee53fc
                       catch() { ... } // from try @ 00ee5544 with catch @ 00ee53fc */
  }
  else if (this + 0x70 == pAVar2) {
    (**(code **)(*(long *)pAVar2 + 0x18))(pAVar2,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pAVar2 + 0x10))();
  }
  uVar3 = create(uVar5,uVar7,uVar6,alStack_80);
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00ee545c;
    pcVar4 = *(code **)(*local_60 + 0x28);
  }
                    /* try { // try from 00ee5458 to 00fe5543 has its CatchHandler @ 00ee5580 */
  (*pcVar4)();
LAB_00ee545c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

