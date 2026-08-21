
void FUN_00def98c(byte *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  
  bVar2 = *param_1;
  bVar3 = param_1[-(long)param_2];
  iVar1 = ((uint)bVar2 - (uint)bVar3) * 3 +
          (int)(char)(&DAT_01970180)[(ulong)param_1[(long)param_2 * -2] - (ulong)param_1[param_2]];
  cVar4 = (&DAT_019705ed)[iVar1 + 4 >> 3];
  param_1[-(long)param_2] =
       (&DAT_0197075d)[(long)(char)(&DAT_019705ed)[iVar1 + 3 >> 3] + (ulong)bVar3];
  *param_1 = (&DAT_0197075d)[(ulong)bVar2 - (long)cVar4];
  return;
}

