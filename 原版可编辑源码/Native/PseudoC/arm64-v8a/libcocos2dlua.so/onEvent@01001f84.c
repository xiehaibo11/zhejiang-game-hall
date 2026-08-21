
/* cocos2d::EventListenerPhysicsContact::onEvent(cocos2d::EventCustom*) */

void __thiscall
cocos2d::EventListenerPhysicsContact::onEvent
          (EventListenerPhysicsContact *this,EventCustom *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (EventCustom *)0x0) ||
     (lVar3 = __dynamic_cast(param_1,&EventCustom::typeinfo,&PhysicsContact::typeinfo,0), lVar3 == 0
     )) goto switchD_01001ff8_default;
  switch(*(undefined4 *)(lVar3 + 0x70)) {
  case 1:
    if ((*(long *)(this + 0xf0) == 0) ||
       (uVar4 = (**(code **)(*(long *)this + 0x20))
                          (this,*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68)),
       (uVar4 & 1) == 0)) goto LAB_01002118;
    PhysicsContact::generateContactData();
    plVar5 = *(long **)(this + 0xf0);
    if (plVar5 == (long *)0x0) {
LAB_01002148:
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    bVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,lVar3);
LAB_01002110:
    bVar2 = bVar2 & 1;
    goto LAB_0100211c;
  case 2:
    if ((*(long *)(this + 0x120) != 0) &&
       (uVar4 = (**(code **)(*(long *)this + 0x20))
                          (this,*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68)),
       (uVar4 & 1) != 0)) {
      local_40 = *(undefined8 *)(lVar3 + 0x80);
      PhysicsContact::generateContactData();
      plVar5 = *(long **)(this + 0x120);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
                    /* try { // try from 0100210c to 0110217b has its CatchHandler @ 01002250 */
      bVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,lVar3,&local_40);
      goto LAB_01002110;
    }
LAB_01002118:
    bVar2 = 1;
LAB_0100211c:
    *(byte *)(lVar3 + 0x75) = bVar2;
    break;
  case 3:
    if ((*(long *)(this + 0x150) != 0) &&
       (uVar4 = (**(code **)(*(long *)this + 0x20))
                          (this,*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68)),
       (uVar4 & 1) != 0)) {
      local_40 = *(undefined8 *)(lVar3 + 0x80);
      plVar5 = *(long **)(this + 0x150);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar5 + 0x30))(plVar5,lVar3,&local_40);
    }
    break;
  case 4:
    if ((*(long *)(this + 0x180) != 0) &&
       (uVar4 = (**(code **)(*(long *)this + 0x20))
                          (this,*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68)),
       (uVar4 & 1) != 0)) {
      plVar5 = *(long **)(this + 0x180);
      if (plVar5 == (long *)0x0) goto LAB_01002148;
                    /* try { // try from 010020bc to 01102107 has its CatchHandler @ 01002254 */
      (**(code **)(*plVar5 + 0x30))(plVar5,lVar3);
    }
  }
switchD_01001ff8_default:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

