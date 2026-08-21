
void FUN_010b33b4(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar1 = (byte *)*param_1;
  do {
    if (((byte *)param_1[2] <= pbVar1) || (bVar3 = *pbVar1, 0x25 < bVar3)) goto LAB_010b3434;
    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar3 != 0x25) {
LAB_010b3434:
        *param_1 = pbVar1;
        return;
      }
      bVar3 = 0x25;
      while (((pbVar2 = pbVar1 + 1, bVar3 != 10 && (bVar3 != 0xd)) &&
             (pbVar1 = pbVar2, pbVar2 < (byte *)param_1[2]))) {
        bVar3 = *pbVar2;
      }
    }
    pbVar1 = pbVar1 + 1;
  } while( true );
}

