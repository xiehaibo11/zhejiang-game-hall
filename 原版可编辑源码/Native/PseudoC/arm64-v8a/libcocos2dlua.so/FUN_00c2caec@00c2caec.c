
bool FUN_00c2caec(uint param_1,ulong param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  
  bVar3 = *(char *)(param_2 + 1) == '^';
  if (bVar3) {
    param_2 = param_2 + 1;
  }
  bVar3 = !bVar3;
  do {
    while( true ) {
      while( true ) {
        uVar2 = param_2;
        if (param_3 <= uVar2 + 1) {
          return !bVar3;
        }
        bVar1 = *(byte *)(uVar2 + 1);
        if (bVar1 == 0x25) break;
        if ((*(char *)(uVar2 + 2) == '-') && (param_2 = uVar2 + 3, param_2 < param_3)) {
          if ((bVar1 == param_1 || (int)(uint)bVar1 < (int)param_1) &&
             ((int)param_1 <= (int)(uint)*(byte *)(uVar2 + 3))) {
            return bVar3;
          }
        }
        else {
          param_2 = uVar2 + 1;
          if (bVar1 == param_1) {
            return bVar3;
          }
        }
      }
      bVar1 = *(byte *)(uVar2 + 2);
      param_2 = uVar2 + 2;
      if ((bVar1 & 0xc0) == 0x40) break;
LAB_00c2cb64:
      bVar4 = param_1 == bVar1;
LAB_00c2cb6c:
      if (bVar4 != 0) {
        return bVar3;
      }
    }
    if ((&DAT_01411ac0)[(ulong)bVar1 & 0x1f] == 0) {
      if (bVar1 == 0x7a) {
        if (param_1 == 0) {
          return bVar3;
        }
      }
      else {
        if (bVar1 != 0x5a) goto LAB_00c2cb64;
        if (param_1 != 0) {
          return bVar3;
        }
      }
    }
    else {
      bVar4 = (&DAT_01411ac0)[(ulong)bVar1 & 0x1f] & (&DAT_01410f61)[(int)param_1];
      if ((bVar1 >> 5 & 1) != 0) goto LAB_00c2cb6c;
      if (bVar4 == 0) {
        return bVar3;
      }
    }
  } while( true );
}

