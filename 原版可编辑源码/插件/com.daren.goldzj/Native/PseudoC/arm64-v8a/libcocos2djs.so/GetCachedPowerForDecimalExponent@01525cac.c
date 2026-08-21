
/* v8::internal::PowersOfTenCache::GetCachedPowerForDecimalExponent(int, v8::internal::DiyFp*, int*)
    */

void v8::internal::PowersOfTenCache::GetCachedPowerForDecimalExponent
               (int param_1,DiyFp *param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  
  iVar2 = param_1 + 0x163;
  if (-1 < param_1 + 0x15c) {
    iVar2 = param_1 + 0x15c;
  }
  lVar1 = (long)(iVar2 >> 3) * 0x10;
  sVar3 = *(short *)(&DAT_01a4a110 + lVar1);
  sVar4 = *(short *)(&DAT_01a4a112 + lVar1);
  *(undefined8 *)param_2 = *(undefined8 *)(&DAT_01a4a108 + lVar1);
  *(int *)(param_2 + 8) = (int)sVar3;
  *param_3 = (int)sVar4;
  return;
}

