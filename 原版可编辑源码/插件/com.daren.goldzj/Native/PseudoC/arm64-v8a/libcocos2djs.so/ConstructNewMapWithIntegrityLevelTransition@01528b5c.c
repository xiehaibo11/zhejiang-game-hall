
/* v8::internal::MapUpdater::ConstructNewMapWithIntegrityLevelTransition() */

undefined8 __thiscall
v8::internal::MapUpdater::ConstructNewMapWithIntegrityLevelTransition(MapUpdater *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_50;
  long *plStack_48;
  long local_40;
  ulong local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plStack_48 = *(long **)(this + 0x20);
  local_50 = *(long *)this;
  local_40 = *plStack_48;
  local_38 = (ulong)*(uint *)(local_40 + 0x23) + local_50;
  if (((local_38 & 1) == 0) || ((int)local_38 == 3)) {
    local_30 = 1;
  }
  else if ((local_38 & 3) == 1) {
    uVar2 = local_38 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar2 + *(uint *)(local_38 - 1)) == 0x98) {
      local_30 = 4;
    }
    else if (*(short *)(uVar2 + *(uint *)(local_38 - 1)) == 100) {
      local_30 = 0;
    }
    else {
      local_30 = 2;
    }
  }
  else {
    if ((local_38 & 3) != 3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_30 = 3;
  }
  uVar2 = TransitionsAccessor::CanHaveMoreTransitions((TransitionsAccessor *)&local_50);
  if ((uVar2 & 1) == 0) {
    uVar3 = Map::Normalize(*(undefined8 *)this,*(undefined8 *)(this + 8),this[0x54],0,
                           "Normalize_CantHaveMoreTransitions");
  }
  else {
    uVar3 = Map::CopyForPreventExtensions
                      (*(undefined8 *)this,*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x38)
                       ,*(undefined8 *)(this + 0x40),"CopyForPreventExtensions",
                       (*(byte *)(**(long **)(this + 8) + 10) & 0xf8) == 0x60);
  }
  *(undefined8 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x50) = 4;
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 4;
}

