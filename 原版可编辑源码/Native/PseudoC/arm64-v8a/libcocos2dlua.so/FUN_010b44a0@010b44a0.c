
void FUN_010b44a0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar1 = (byte *)param_1[2];
  pbVar2 = (byte *)*param_1;
  do {
    if ((pbVar1 <= pbVar2) || (bVar4 = *pbVar2, 0x25 < bVar4)) goto LAB_010b452c;
    if ((1L << ((ulong)bVar4 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar4 != 0x25) {
LAB_010b452c:
        *param_1 = pbVar2;
        FUN_010b9e40(param_1,pbVar1,param_2,param_3,param_4);
        return;
      }
      bVar4 = 0x25;
      while (((pbVar3 = pbVar2 + 1, bVar4 != 10 && (bVar4 != 0xd)) &&
             (pbVar2 = pbVar3, pbVar3 < pbVar1))) {
        bVar4 = *pbVar3;
      }
    }
    pbVar2 = pbVar2 + 1;
  } while( true );
}

