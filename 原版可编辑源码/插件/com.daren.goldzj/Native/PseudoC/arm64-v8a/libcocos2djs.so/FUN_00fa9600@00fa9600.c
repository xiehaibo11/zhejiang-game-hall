
void FUN_00fa9600(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  if (0 < *(int *)(param_1 + 0x2b0)) {
    lVar3 = 0;
    do {
      lVar4 = *(long *)(param_1 + lVar3 * 0x50 + 8);
      lVar5 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          uVar9 = *(ulong *)(lVar4 + 0x10 + uVar6 * 8);
          uVar10 = uVar9 & 0xfffffffffffc0000;
          uVar7 = (uint)*(undefined8 *)(uVar10 + 8);
          if ((uVar7 >> 3 & 1) == 0) {
            if (((uVar7 >> 4 & 1) != 0) || ((*(byte *)(uVar10 + 10) >> 1 & 1) != 0)) {
              if ((*(uint *)(*(long *)(uVar10 + 0x108) + (uVar9 - uVar10 >> 7 & 0x1ffffff) * 4) >>
                   (ulong)((uint)(uVar9 - uVar10 >> 2) & 0x1f) & 1) == 0) goto LAB_00fa9668;
              goto LAB_00fa96ec;
            }
            if (*(int *)(uVar9 - 1) != param_2) goto LAB_00fa96ec;
LAB_00fa9668:
            lVar8 = 0;
          }
          else {
            if ((*(uint *)(uVar9 - 1) & 1) != 0) goto LAB_00fa9668;
            uVar9 = (uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 - 1)) + 1;
LAB_00fa96ec:
            *(ulong *)(lVar4 + lVar5 * 8 + 0x10) = uVar9;
            lVar8 = 1;
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar8 + lVar5;
        } while (uVar6 < *(ulong *)(lVar4 + 8));
      }
      *(long *)(lVar4 + 8) = lVar5;
      lVar4 = *(long *)(param_1 + lVar3 * 0x50);
      lVar5 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          uVar9 = *(ulong *)(lVar4 + 0x10 + uVar6 * 8);
          uVar10 = uVar9 & 0xfffffffffffc0000;
          uVar7 = (uint)*(undefined8 *)(uVar10 + 8);
          if ((uVar7 >> 3 & 1) == 0) {
            if (((uVar7 >> 4 & 1) != 0) || ((*(byte *)(uVar10 + 10) >> 1 & 1) != 0)) {
              if ((*(uint *)(*(long *)(uVar10 + 0x108) + (uVar9 - uVar10 >> 7 & 0x1ffffff) * 4) >>
                   (ulong)((uint)(uVar9 - uVar10 >> 2) & 0x1f) & 1) == 0) goto LAB_00fa971c;
              goto LAB_00fa97a0;
            }
            if (*(int *)(uVar9 - 1) != param_2) goto LAB_00fa97a0;
LAB_00fa971c:
            lVar8 = 0;
          }
          else {
            if ((*(uint *)(uVar9 - 1) & 1) != 0) goto LAB_00fa971c;
            uVar9 = (uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 - 1)) + 1;
LAB_00fa97a0:
            *(ulong *)(lVar4 + lVar5 * 8 + 0x10) = uVar9;
            lVar8 = 1;
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar8 + lVar5;
        } while (uVar6 < *(ulong *)(lVar4 + 8));
      }
      *(long *)(lVar4 + 8) = lVar5;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x2b0));
  }
  v8::base::Mutex::Lock((Mutex *)(param_1 + 0x280));
  puVar1 = *(undefined8 **)(param_1 + 0x2a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    puVar2 = puVar1;
    if (puVar1[1] != 0) goto LAB_00fa97f4;
LAB_00fa9894:
    puVar1[1] = 0;
    puVar2 = puVar1;
LAB_00fa9898:
    puVar1 = (undefined8 *)(param_1 + 0x2a8);
    if (puVar11 != (undefined8 *)0x0) {
      puVar1 = puVar11;
    }
    *puVar1 = *puVar2;
    puVar1 = (undefined8 *)*puVar2;
    operator_delete(puVar2);
    if (puVar1 != (void *)0x0) {
      do {
        puVar2 = puVar1;
        if (puVar1[1] == 0) goto LAB_00fa9894;
LAB_00fa97f4:
        lVar3 = 0;
        uVar6 = 0;
        do {
          uVar9 = puVar2[uVar6 + 2];
          uVar10 = uVar9 & 0xfffffffffffc0000;
          uVar7 = (uint)*(undefined8 *)(uVar10 + 8);
          if ((uVar7 >> 3 & 1) == 0) {
            if (((uVar7 >> 4 & 1) != 0) || ((*(byte *)(uVar10 + 10) >> 1 & 1) != 0)) {
              if ((*(uint *)(*(long *)(uVar10 + 0x108) + (uVar9 - uVar10 >> 7 & 0x1ffffff) * 4) >>
                   (ulong)((uint)(uVar9 - uVar10 >> 2) & 0x1f) & 1) == 0) goto LAB_00fa9800;
              goto LAB_00fa9888;
            }
            if (*(int *)(uVar9 - 1) != param_2) goto LAB_00fa9888;
LAB_00fa9800:
            lVar5 = 0;
          }
          else {
            if ((*(uint *)(uVar9 - 1) & 1) != 0) goto LAB_00fa9800;
            uVar9 = (uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 - 1)) + 1;
LAB_00fa9888:
            puVar2[lVar3 + 2] = uVar9;
            lVar5 = 1;
          }
          uVar6 = uVar6 + 1;
          lVar3 = lVar5 + lVar3;
        } while (uVar6 < (ulong)puVar2[1]);
        puVar2[1] = lVar3;
        if (lVar3 == 0) goto LAB_00fa9898;
        puVar1 = (undefined8 *)*puVar2;
        puVar11 = puVar2;
        if (puVar1 == (void *)0x0) break;
      } while( true );
    }
  }
  v8::base::Mutex::Unlock((Mutex *)(param_1 + 0x280));
  return;
}

