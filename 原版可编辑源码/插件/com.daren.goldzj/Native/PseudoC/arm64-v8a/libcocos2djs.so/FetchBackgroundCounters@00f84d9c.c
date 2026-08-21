
/* v8::internal::GCTracer::FetchBackgroundCounters(int, int, int, int) */

void __thiscall
v8::internal::GCTracer::FetchBackgroundCounters
          (GCTracer *this,int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  GCTracer *pGVar5;
  long lVar6;
  GCTracer *pGVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  base::Mutex::Lock((Mutex *)(this + 0x1130));
  if (param_4 < param_3) goto LAB_00f84e74;
  uVar1 = (param_4 - param_3) + 1;
  uVar2 = (ulong)uVar1;
  lVar4 = (long)param_1;
  lVar6 = (long)param_3;
  if (uVar1 < 4) {
LAB_00f84e34:
    uVar8 = 0;
  }
  else {
    if ((this + lVar4 * 8 + 0x80 < this + lVar6 * 8 + uVar2 * 8 + 0x1158) &&
       (this + lVar6 * 8 + 0x1158 < this + lVar4 * 8 + uVar2 * 8 + 0x80)) goto LAB_00f84e34;
    uVar8 = uVar2 & 0xfffffffc;
    pGVar7 = this + lVar6 * 8 + 0x1168;
    pGVar5 = this + lVar4 * 8 + 0x90;
    uVar9 = uVar8;
    do {
      dVar10 = *(double *)(pGVar7 + -0x10);
      dVar12 = *(double *)(pGVar7 + 8);
      dVar11 = *(double *)pGVar7;
      uVar9 = uVar9 - 4;
      *(double *)(pGVar5 + -8) = *(double *)(pGVar7 + -8) + *(double *)(pGVar5 + -8);
      *(double *)(pGVar5 + -0x10) = dVar10 + *(double *)(pGVar5 + -0x10);
      *(double *)(pGVar5 + 8) = dVar12 + *(double *)(pGVar5 + 8);
      *(double *)pGVar5 = dVar11 + *(double *)pGVar5;
      *(undefined8 *)(pGVar7 + -8) = 0;
      *(undefined8 *)(pGVar7 + -0x10) = 0;
      *(undefined8 *)(pGVar7 + 8) = 0;
      *(undefined8 *)pGVar7 = 0;
      pGVar7 = pGVar7 + 0x20;
      pGVar5 = pGVar5 + 0x20;
    } while (uVar9 != 0);
    if (uVar8 == uVar2) goto LAB_00f84e74;
  }
  lVar3 = uVar2 - uVar8;
  pGVar5 = this + (uVar8 + lVar6) * 8 + 0x1158;
  pGVar7 = this + (uVar8 + lVar4) * 8 + 0x80;
  do {
    lVar3 = lVar3 + -1;
    *(double *)pGVar7 = *(double *)pGVar5 + *(double *)pGVar7;
    *(undefined8 *)pGVar5 = 0;
    pGVar5 = pGVar5 + 8;
    pGVar7 = pGVar7 + 8;
  } while (lVar3 != 0);
LAB_00f84e74:
  base::Mutex::Unlock((Mutex *)(this + 0x1130));
  return;
}

