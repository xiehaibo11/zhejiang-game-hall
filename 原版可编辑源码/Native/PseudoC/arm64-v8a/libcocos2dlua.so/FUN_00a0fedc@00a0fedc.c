
int FUN_00a0fedc(long param_1,uint *param_2,long param_3,ulong param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  if (param_4 < 2) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    iVar3 = -1;
    do {
      if (uVar4 == 0) {
        uVar1 = CONCAT11(*(undefined1 *)(param_3 + lVar5),*(undefined1 *)(param_3 + lVar5 + 1));
      }
      else {
        uVar1 = CONCAT11(*(undefined1 *)(param_3 + lVar5 + 1),*(undefined1 *)(param_3 + lVar5));
      }
      uVar2 = (uint)uVar1;
      if (uVar2 != 0xfeff) {
        if (uVar2 != 0xfffe) {
          if ((uVar2 & 0xfc00) == 0xdc00) goto LAB_00a0ff68;
          if ((uVar2 & 0xfc00) != 0xd800) {
            iVar3 = (int)lVar5 + 2;
            *param_2 = uVar2;
            goto LAB_00a0ff68;
          }
          if (3 < param_4) {
            param_3 = param_3 + lVar5;
            if (uVar4 == 0) {
              uVar1 = CONCAT11(*(undefined1 *)(param_3 + 2),*(undefined1 *)(param_3 + 3));
            }
            else {
              uVar1 = CONCAT11(*(undefined1 *)(param_3 + 3),*(undefined1 *)(param_3 + 2));
            }
            if (uVar1 >> 10 == 0x37) {
              *param_2 = (uint)uVar1 + uVar2 * 0x400 + 0xfca02400;
              iVar3 = (int)lVar5 + 4;
            }
            goto LAB_00a0ff68;
          }
          break;
        }
        uVar4 = uVar4 ^ 1;
      }
      param_4 = param_4 - 2;
      lVar5 = lVar5 + 2;
    } while ((1 < param_4) && (iVar3 = iVar3 + -4, (uint)lVar5 < 0x3fffffff));
  }
  iVar3 = (int)lVar5 * -2 + -2;
LAB_00a0ff68:
  *(uint *)(param_1 + 0x28) = uVar4;
  return iVar3;
}

