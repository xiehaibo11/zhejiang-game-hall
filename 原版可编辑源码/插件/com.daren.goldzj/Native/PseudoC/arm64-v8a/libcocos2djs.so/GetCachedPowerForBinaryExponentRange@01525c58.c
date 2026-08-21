
/* v8::internal::PowersOfTenCache::GetCachedPowerForBinaryExponentRange(int, int,
   v8::internal::DiyFp*, int*) */

void v8::internal::PowersOfTenCache::GetCachedPowerForBinaryExponentRange
               (int param_1,int param_2,DiyFp *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = (int)((double)(param_1 + 0x3f) * 0.30102999566398114);
  iVar2 = iVar4 + 0x15b;
  iVar4 = iVar4 + 0x162;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  lVar1 = (long)(iVar4 >> 3) * 0x10;
  uVar5 = *(undefined8 *)(&DAT_01a4a118 + lVar1);
  sVar3 = *(short *)(&DAT_01a4a120 + lVar1);
  *param_4 = (int)*(short *)(&DAT_01a4a122 + lVar1);
  *(undefined8 *)param_3 = uVar5;
  *(int *)(param_3 + 8) = (int)sVar3;
  return;
}

