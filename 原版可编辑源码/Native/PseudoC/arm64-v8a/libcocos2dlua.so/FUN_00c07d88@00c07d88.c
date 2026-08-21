
void FUN_00c07d88(long param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  
  if (param_2 != 0xffffffff) {
    cVar3 = (char)param_4;
    lVar8 = *(long *)(param_1 + 0x48);
    do {
      lVar2 = (ulong)param_2 * 8;
      puVar9 = (uint *)(lVar8 + lVar2);
      uVar1 = *(uint *)(lVar8 + lVar2);
      uVar4 = (uVar1 >> 0x10) - 0x8000;
      if (uVar4 != 0xffffffff) {
        uVar4 = ((uVar1 >> 0x10) - 0x7fff) + param_2;
      }
      if (param_2 == 0) {
        uVar10 = uVar1 & 0xff;
        puVar11 = puVar9;
        uVar5 = uVar1;
        if (uVar10 - 0xc < 2) goto LAB_00c07e48;
LAB_00c07e00:
        if ((uVar5 >> 8 & 0xff) == 0xff) {
          if (param_4 == 0xff) {
            *puVar11 = uVar1 & 0xff00 | 0x80000058;
          }
          else {
            *(char *)((long)puVar11 + 1) = cVar3;
            if (param_4 < *(byte *)((long)puVar11 + 9)) {
              lVar8 = *(long *)(param_1 + 0x48);
              puVar9 = (uint *)(lVar8 + lVar2);
            }
            else {
              *(char *)((long)puVar11 + 9) = cVar3 + '\x01';
              lVar8 = *(long *)(param_1 + 0x48);
              puVar9 = (uint *)(lVar8 + lVar2);
            }
          }
          goto LAB_00c07e8c;
        }
        param_2 = (param_5 + 0x7fff) - param_2;
        uVar7 = *(undefined8 *)(param_1 + 8);
      }
      else {
        lVar6 = (ulong)(param_2 - 1) * 8;
        puVar11 = (uint *)(lVar8 + lVar6);
        uVar5 = *(uint *)(lVar8 + lVar6);
        uVar10 = uVar5 & 0xff;
        if (1 < uVar10 - 0xc) goto LAB_00c07e00;
LAB_00c07e48:
        if ((param_4 == 0xff) || (param_4 == uVar5 >> 0x10)) {
          *(undefined1 *)((long)puVar11 + 1) = 0;
          *(char *)puVar11 = (char)uVar10 + '\x02';
          lVar8 = *(long *)(param_1 + 0x48);
          puVar9 = (uint *)(lVar8 + lVar2);
        }
        else {
          *(char *)((long)puVar11 + 1) = cVar3;
          lVar8 = *(long *)(param_1 + 0x48);
          puVar9 = (uint *)(lVar8 + lVar2);
        }
LAB_00c07e8c:
        param_2 = (param_3 + 0x7fff) - param_2;
        uVar7 = *(undefined8 *)(param_1 + 8);
      }
      if (0xffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00c07bc4(uVar7,0x91a);
      }
      *(short *)((long)puVar9 + 2) = (short)param_2;
      param_2 = uVar4;
    } while (uVar4 != 0xffffffff);
  }
  return;
}

