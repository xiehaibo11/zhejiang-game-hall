
/* dtNavMeshQuery::appendVertex(float const*, unsigned char, unsigned int, float*, unsigned char*,
   unsigned int*, int*, int) const */

undefined4 __thiscall
dtNavMeshQuery::appendVertex
          (dtNavMeshQuery *this,float *param_1,uchar param_2,uint param_3,float *param_4,
          uchar *param_5,uint *param_6,int *param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  iVar4 = *param_7;
  if (iVar4 < 1) {
    fVar6 = *param_1;
  }
  else {
    if (((dtVequal(float_const*,float_const*)::thr & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&dtVequal(float_const*,float_const*)::thr), iVar3 != 0)) {
      dtVequal(float_const*,float_const*)::thr = 3.7252903e-09;
      __cxa_guard_release(&dtVequal(float_const*,float_const*)::thr);
    }
    fVar6 = *param_1;
    uVar10 = *(undefined8 *)(param_4 + (iVar4 * 3 + -3) + 1);
    fVar7 = fVar6 - param_4[iVar4 * 3 + -3];
    fVar8 = (float)*(undefined8 *)(param_1 + 1) - (float)uVar10;
    fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20) - (float)((ulong)uVar10 >> 0x20);
    if (fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9 < dtVequal(float_const*,float_const*)::thr) {
      if (param_5 != (uchar *)0x0) {
        param_5[(long)*param_7 + -1] = param_2;
      }
      if (param_6 != (uint *)0x0) {
        param_6[(long)*param_7 + -1] = param_3;
      }
      return 0x20000000;
    }
    iVar4 = *param_7;
  }
  pfVar5 = param_4 + (long)iVar4 * 3;
  *pfVar5 = fVar6;
  pfVar5[1] = param_1[1];
  pfVar5[2] = param_1[2];
  if (param_5 != (uchar *)0x0) {
    param_5[iVar4] = param_2;
  }
  if (param_6 != (uint *)0x0) {
    param_6[*param_7] = param_3;
  }
  iVar4 = *param_7 + 1;
  uVar1 = 0x40000000;
  if (param_8 <= iVar4) {
    uVar1 = 0x40000010;
  }
  uVar2 = 0x20000000;
  if (param_8 <= iVar4 || param_2 == '\x02') {
    uVar2 = uVar1;
  }
  *param_7 = iVar4;
  return uVar2;
}

