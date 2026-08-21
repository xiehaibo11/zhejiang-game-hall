
/* v8::internal::compiler::TopLevelLiveRange::Splinter(v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::LifetimePosition, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::TopLevelLiveRange::Splinter
          (TopLevelLiveRange *this,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  TopLevelLiveRange *pTVar5;
  long *plVar6;
  undefined4 local_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  undefined4 *puStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 *local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puStack_e0 = &local_100;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_68 = 0;
  local_fc = *(uint *)(this + 4) & 0x1fe000 | 0x8001000;
  local_a8 = 0xffffffffffffffff;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0x7fffffff;
  local_78 = 0;
  local_60 = 0;
  iVar1 = *(int *)(*(long *)(this + 8) + 4);
  local_70 = puStack_e0;
  lVar3 = LiveRange::DetachAt((LiveRange *)this,param_2,&local_100,param_4,1);
  if (param_3 < iVar1) {
    uStack_15c = *(uint *)(this + 4) & 0x1fe000 | 0x8001000;
    local_108 = 0xffffffff;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    local_110 = 0;
    local_160 = 0x7fffffff;
    lVar4 = LiveRange::DetachAt((LiveRange *)&local_100,param_3,&local_160,param_4,0);
    *(undefined8 *)(this + 0x28) = uStack_138;
    *(undefined8 *)(*(long *)(this + 8) + 8) = local_150;
    pTVar5 = this + 0x18;
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 8) = local_158;
    if (*(long *)pTVar5 != 0) {
      *(long *)(this + 0x48) = lVar3;
      if (lVar3 == 0) goto LAB_01656b2c;
      pTVar5 = (TopLevelLiveRange *)(lVar3 + 0x10);
    }
    *(undefined8 *)pTVar5 = local_148;
  }
  else {
    lVar4 = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
LAB_01656b2c:
  plVar6 = (long *)(*(long *)(this + 0x98) + 0x10);
  if (*plVar6 != 0) {
    plVar6 = (long *)(*(long *)(*(long *)(this + 0x98) + 8) + 8);
  }
  *plVar6 = local_f0;
  *(undefined8 *)(*(long *)(this + 0x98) + 8) = local_f8;
  plVar6 = (long *)(*(long *)(this + 0x98) + 0x18);
  if (*plVar6 != 0) {
    plVar6 = (long *)(*(long *)(*(long *)(this + 0x98) + 0x88) + 0x10);
  }
  *plVar6 = local_e8;
  lVar3 = *(long *)(this + 0x98);
  if (lVar4 == 0) {
    if ((*(long *)(lVar3 + 0x18) != 0) && (*(long *)(lVar3 + 0x88) == 0)) {
      *(long *)(lVar3 + 0x88) = *(long *)(lVar3 + 0x18);
      lVar3 = *(long *)(*(long *)(this + 0x98) + 0x18);
      if (lVar3 != 0) {
        *(long *)(*(long *)(this + 0x98) + 0x88) = lVar3;
        for (lVar3 = *(long *)(lVar3 + 0x10); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
          *(long *)(*(long *)(this + 0x98) + 0x88) = lVar3;
        }
      }
    }
  }
  else {
    *(long *)(lVar3 + 0x88) = lVar4;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

