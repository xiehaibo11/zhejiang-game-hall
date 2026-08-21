
/* v8::internal::compiler::ControlEquivalence::DetermineParticipation(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::ControlEquivalence::DetermineParticipation
          (ControlEquivalence *this,Node *param_1)

{
  int iVar1;
  ulong uVar2;
  Node *pNVar3;
  long *plVar4;
  long *plVar5;
  Node *pNVar6;
  ulong uVar7;
  long *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  ulong local_60;
  long local_58;
  undefined8 local_50;
  long *local_48;
  
  local_70 = *(undefined8 *)this;
  local_60 = 0;
  local_58 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = (long *)0x0;
  local_78 = 0;
  local_80 = (undefined8 *)0x0;
  local_68 = 0;
  local_48 = (long *)0x0;
  local_50 = local_70;
  DetermineParticipationEnqueue(this,(ZoneQueue *)&local_90,param_1);
  while (local_58 != 0) {
    local_58 = local_58 + -1;
    pNVar6 = *(Node **)(*(long *)((long)puStack_88 + (local_60 >> 6 & 0x3fffffffffffff8)) +
                       (local_60 & 0x1ff) * 8);
    uVar2 = local_60 + 1;
    if (0x3ff < local_60 + 1) {
      plVar4 = (long *)*puStack_88;
      if ((local_48 == (long *)0x0) || ((ulong)local_48[1] < 0x201)) {
        plVar4[1] = 0x200;
        *plVar4 = (long)local_48;
        local_48 = plVar4;
      }
      puStack_88 = puStack_88 + 1;
      uVar2 = local_60 - 0x1ff;
    }
    local_60 = uVar2;
    iVar1 = NodeProperties::PastControlIndex(pNVar6);
    uVar2 = NodeProperties::PastEffectIndex(pNVar6);
    if ((int)uVar2 < iVar1) {
      uVar7 = -(uVar2 >> 0x1f & 1) & 0xfffffff800000000 | (uVar2 & 0xffffffff) << 3;
      iVar1 = iVar1 - (int)uVar2;
      do {
        pNVar3 = pNVar6 + 0x20;
        if ((~*(uint *)(pNVar6 + 0x14) & 0xf000000) == 0) {
          pNVar3 = (Node *)(*(long *)(pNVar6 + 0x20) + 0x10);
        }
        DetermineParticipationEnqueue(this,(ZoneQueue *)&local_90,*(Node **)(pNVar3 + uVar7));
        iVar1 = iVar1 + -1;
        uVar7 = uVar7 + 8;
      } while (iVar1 != 0);
    }
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)&local_90);
  if (puStack_88 == local_80) {
LAB_01697e1c:
    if (((local_90 != (long *)0x0) && (0xf < (ulong)(local_78 - (long)local_90))) &&
       ((uVar2 = local_78 - (long)local_90 >> 3, local_68 == 0 ||
        (*(ulong *)(local_68 + 8) <= uVar2)))) {
      local_90[1] = uVar2;
      *local_90 = local_68;
    }
    return;
  }
  plVar5 = (long *)*puStack_88;
  plVar4 = local_48;
  if (local_48 != (long *)0x0) goto LAB_01697dec;
  do {
    plVar4 = plVar5;
    plVar4[1] = 0x200;
    *plVar4 = (long)local_48;
    local_48 = plVar4;
    do {
      puStack_88 = puStack_88 + 1;
      if (local_80 == puStack_88) goto LAB_01697e1c;
      plVar5 = (long *)*puStack_88;
      if (plVar4 == (long *)0x0) break;
LAB_01697dec:
    } while (0x200 < (ulong)plVar4[1]);
  } while( true );
}

