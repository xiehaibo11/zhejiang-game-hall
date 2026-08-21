
/* v8::internal::CompilationStatistics::PhaseStats::PhaseStats(v8::internal::CompilationStatistics::PhaseStats
   const&) */

void __thiscall
v8::internal::CompilationStatistics::PhaseStats::PhaseStats(PhaseStats *this,PhaseStats *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  PhaseStats *pPVar3;
  PhaseStats *pPVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)param_1;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 0x18) = uVar8;
  *(undefined8 *)(this + 0x10) = uVar7;
  pPVar3 = this + 0x20;
  *(undefined8 *)pPVar3 = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if (((byte)param_1[0x20] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x28) = uVar7;
    *(undefined8 *)pPVar3 = uVar1;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x28);
    if (0xffffffffffffffef < uVar5) goto LAB_014ea2d0;
    pvVar2 = *(void **)(param_1 + 0x30);
    if (uVar5 < 0x17) {
      pPVar4 = this + 0x21;
      *pPVar3 = SUB41((int)uVar5 << 1,0);
      if (uVar5 != 0) goto LAB_014ea218;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pPVar4 = operator_new(uVar6);
      *(ulong *)(this + 0x28) = uVar5;
      *(PhaseStats **)(this + 0x30) = pPVar4;
      *(ulong *)(this + 0x20) = uVar6 | 1;
LAB_014ea218:
      memcpy(pPVar4,pvVar2,uVar5);
    }
    pPVar4[uVar5] = (PhaseStats)0x0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  pPVar3 = this + 0x40;
  *(undefined8 *)pPVar3 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = uVar1;
  if (((byte)param_1[0x40] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(this + 0x48) = uVar7;
    *(undefined8 *)pPVar3 = uVar1;
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x48);
  if (0xffffffffffffffef < uVar5) {
LAB_014ea2d0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar2 = *(void **)(param_1 + 0x50);
  if (uVar5 < 0x17) {
    pPVar4 = this + 0x41;
    *pPVar3 = SUB41((int)uVar5 << 1,0);
    if (uVar5 == 0) goto LAB_014ea2b8;
  }
  else {
    uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pPVar4 = operator_new(uVar6);
    *(ulong *)(this + 0x48) = uVar5;
    *(PhaseStats **)(this + 0x50) = pPVar4;
    *(ulong *)(this + 0x40) = uVar6 | 1;
  }
  memcpy(pPVar4,pvVar2,uVar5);
LAB_014ea2b8:
  pPVar4[uVar5] = (PhaseStats)0x0;
  return;
}

