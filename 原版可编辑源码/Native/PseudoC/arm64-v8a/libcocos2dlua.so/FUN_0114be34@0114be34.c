
void FUN_0114be34(byte *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  
  bVar2 = *param_1;
  bVar3 = param_1[-(long)param_2];
  iVar1 = ((uint)bVar2 - (uint)bVar3) * 3 +
          (int)(char)(&DAT_01498d40)[(ulong)param_1[(long)param_2 * -2] - (ulong)param_1[param_2]];
  cVar4 = (&DAT_014991ad)[iVar1 + 4 >> 3];
  param_1[-(long)param_2] =
       (&DAT_0149931d)[(long)(char)(&DAT_014991ad)[iVar1 + 3 >> 3] + (ulong)bVar3];
  *param_1 = (&DAT_0149931d)[(ulong)bVar2 - (long)cVar4];
  return;
}

