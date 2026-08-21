
/* btQuantizedBvh::swapLeafNodes(int, int) */

void __thiscall btQuantizedBvh::swapLeafNodes(btQuantizedBvh *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  if (this[0x40] == (btQuantizedBvh)0x0) {
    uVar6 = -(ulong)((uint)param_2 >> 0x1f) & 0xffffffc000000000 | (ulong)(uint)param_2 << 6;
    puVar1 = (undefined8 *)(*(long *)(this + 0x58) + (long)param_1 * 0x40);
    uVar13 = puVar1[7];
    uVar8 = puVar1[6];
    puVar2 = (undefined8 *)(*(long *)(this + 0x58) + uVar6);
    uVar14 = puVar1[5];
    uVar9 = puVar1[4];
    uVar15 = puVar1[3];
    uVar12 = puVar1[2];
    uVar16 = puVar1[1];
    uVar10 = *puVar1;
    uVar11 = puVar2[6];
    puVar1[7] = puVar2[7];
    puVar1[6] = uVar11;
    uVar11 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar11;
    uVar11 = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[2] = uVar11;
    uVar11 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
    puVar1 = (undefined8 *)(*(long *)(this + 0x58) + uVar6);
    puVar1[7] = uVar13;
    puVar1[6] = uVar8;
    puVar1[5] = uVar14;
    puVar1[4] = uVar9;
    puVar1[3] = uVar15;
    puVar1[2] = uVar12;
    puVar1[1] = uVar16;
    *puVar1 = uVar10;
  }
  else {
    lVar5 = *(long *)(this + 0x98);
    uVar6 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
    uVar7 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_2 << 4;
    puVar1 = (undefined8 *)(lVar5 + uVar6);
    uVar12 = puVar1[1];
    uVar8 = *puVar1;
    puVar1 = (undefined8 *)(lVar5 + uVar7);
    uVar9 = *puVar1;
    puVar2 = (undefined8 *)(lVar5 + uVar6);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar9;
    puVar1 = (undefined8 *)(*(long *)(this + 0x98) + uVar7);
    puVar1[1] = uVar12;
    *puVar1 = uVar8;
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

