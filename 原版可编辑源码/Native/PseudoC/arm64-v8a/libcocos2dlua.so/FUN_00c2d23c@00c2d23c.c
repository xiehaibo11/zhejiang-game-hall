
void FUN_00c2d23c(long param_1,ulong param_2,byte *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  lVar5 = 0;
  if (param_2 < uVar7) {
    bVar1 = *param_3;
    lVar5 = 0;
    do {
      bVar3 = *(byte *)(param_2 + lVar5);
      uVar4 = (uint)bVar3;
      if (bVar1 != 0x2e) {
        if (bVar1 == 0x5b) {
          uVar4 = FUN_00c2caec(uVar4,param_3,param_4 + -1);
        }
        else if (bVar1 == 0x25) {
          bVar2 = param_3[1];
          if ((bVar2 & 0xc0) == 0x40) {
            if ((&DAT_01411ac0)[(ulong)bVar2 & 0x1f] == 0) {
              if (bVar2 == 0x7a) goto LAB_00c2d360;
              if (bVar2 != 0x5a) goto LAB_00c2d324;
              uVar4 = (uint)(bVar3 != 0);
            }
            else {
              uVar4 = (uint)(byte)((&DAT_01411ac0)[(ulong)bVar2 & 0x1f] & (&DAT_01410f61)[bVar3]);
              if ((bVar2 >> 5 & 1) == 0) {
LAB_00c2d360:
                uVar4 = (uint)(uVar4 == 0);
              }
            }
          }
          else {
LAB_00c2d324:
            uVar4 = (uint)(bVar3 == bVar2);
          }
        }
        else {
          uVar4 = (uint)(bVar3 == bVar1);
        }
        if (uVar4 == 0) break;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != uVar7 - param_2);
  }
  lVar5 = param_2 + lVar5;
  do {
    lVar6 = lVar5 + -1;
    lVar5 = FUN_00c2cc0c(param_1,lVar5,param_4 + 1);
    if (lVar5 != 0) {
      return;
    }
    lVar5 = lVar6;
  } while (lVar6 != param_2 - 1);
  return;
}

