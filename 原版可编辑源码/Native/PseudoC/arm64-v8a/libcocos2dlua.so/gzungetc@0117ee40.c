
int gzungetc(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  if (((param_2 != (uint *)0x0) && (param_2[6] == 0x1c4f)) &&
     ((param_2[0x1b] == 0 || (param_2[0x1b] == 0xfffffffb)))) {
    if (param_2[0x1a] != 0) {
      lVar7 = *(long *)(param_2 + 0x18);
      param_2[0x1a] = 0;
      for (; lVar7 != 0; lVar7 = lVar7 - uVar6) {
        while( true ) {
          uVar5 = *param_2;
          if (uVar5 != 0) break;
          if ((param_2[0x14] != 0) && (param_2[0x20] == 0)) goto LAB_0117eee4;
          iVar2 = FUN_0117ea3c(param_2);
          if (iVar2 == -1) {
            return -1;
          }
        }
        uVar1 = (uint)lVar7;
        if ((long)(ulong)uVar5 <= lVar7) {
          uVar1 = uVar5;
        }
        uVar6 = (ulong)uVar1;
        *param_2 = uVar5 - uVar1;
        *(ulong *)(param_2 + 2) = *(long *)(param_2 + 2) + uVar6;
        *(ulong *)(param_2 + 4) = *(long *)(param_2 + 4) + uVar6;
      }
    }
LAB_0117eee4:
    if (-1 < param_1) {
      uVar5 = *param_2;
      if (uVar5 == 0) {
        *param_2 = 1;
        puVar4 = (undefined1 *)(*(long *)(param_2 + 0xe) + (ulong)(param_2[10] << 1));
        *(undefined1 **)(param_2 + 2) = puVar4 + -1;
      }
      else {
        if (uVar5 == param_2[10] * 2) {
          FUN_0117e474(param_2,0xfffffffd,"out of room to push characters");
          return -1;
        }
        puVar3 = *(undefined1 **)(param_2 + 2);
        puVar4 = puVar3;
        if (puVar3 == *(undefined1 **)(param_2 + 0xe)) {
          puVar4 = puVar3 + param_2[10] * 2;
          puVar3 = puVar3 + uVar5;
          do {
            puVar3 = puVar3 + -1;
            puVar4 = puVar4 + -1;
            *puVar4 = *puVar3;
          } while (*(undefined1 **)(param_2 + 0xe) < puVar3);
          uVar5 = *param_2;
          *(undefined1 **)(param_2 + 2) = puVar4;
        }
        *param_2 = uVar5 + 1;
        *(undefined1 **)(param_2 + 2) = puVar4 + -1;
      }
      puVar4[-1] = (char)param_1;
      param_2[0x15] = 0;
      *(long *)(param_2 + 4) = *(long *)(param_2 + 4) + -1;
      return param_1;
    }
  }
  return -1;
}

