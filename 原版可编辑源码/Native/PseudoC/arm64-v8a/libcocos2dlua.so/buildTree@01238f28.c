
/* btQuantizedBvh::buildTree(int, int) */

void __thiscall btQuantizedBvh::buildTree(btQuantizedBvh *this,int param_1,int param_2)

{
  ushort *puVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  btQuantizedBvh bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulong uStack_68;
  
  iVar3 = *(int *)(this + 0x3c);
  if (param_2 - param_1 == 1) {
    if (this[0x40] == (btQuantizedBvh)0x0) {
      puVar4 = (undefined8 *)(*(long *)(this + 0x58) + (long)param_1 * 0x40);
      uVar14 = puVar4[6];
      puVar5 = (undefined8 *)(*(long *)(this + 0x78) + (long)iVar3 * 0x40);
      puVar5[7] = puVar4[7];
      puVar5[6] = uVar14;
      uVar14 = puVar4[4];
      puVar5[5] = puVar4[5];
      puVar5[4] = uVar14;
      uVar14 = puVar4[2];
      puVar5[3] = puVar4[3];
      puVar5[2] = uVar14;
      uVar14 = *puVar4;
      puVar5[1] = puVar4[1];
      *puVar5 = uVar14;
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(this + 0x98) + (long)param_1 * 0x10);
      uVar14 = *puVar4;
      puVar5 = (undefined8 *)(*(long *)(this + 0xb8) + (long)iVar3 * 0x10);
      puVar5[1] = puVar4[1];
      *puVar5 = uVar14;
    }
    *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
  }
  else {
    iVar7 = calcSplittingAxis(this,param_1,param_2);
    iVar7 = sortAndCalcSplittingIndex(this,param_1,param_2,iVar7);
    lVar11 = (long)*(int *)(this + 0x3c);
    if (this[0x40] == (btQuantizedBvh)0x0) {
      uVar14 = *(undefined8 *)(this + 0x18);
      puVar4 = (undefined8 *)(*(long *)(this + 0x78) + lVar11 * 0x40);
      puVar4[1] = *(undefined8 *)(this + 0x20);
      *puVar4 = uVar14;
    }
    else {
      fVar15 = *(float *)(this + 0x1c);
      fVar6 = *(float *)(this + 0xc);
      fVar19 = *(float *)(this + 0x20);
      fVar20 = *(float *)(this + 0x10);
      fVar16 = *(float *)(this + 0x2c);
      fVar21 = *(float *)(this + 0x30);
      puVar1 = (ushort *)(*(long *)(this + 0xb8) + lVar11 * 0x10);
      *puVar1 = (ushort)(int)((*(float *)(this + 0x18) - *(float *)(this + 8)) *
                             *(float *)(this + 0x28)) & 0xfffe;
      puVar1[1] = (ushort)(int)((fVar15 - fVar6) * fVar16) & 0xfffe;
      puVar1[2] = (ushort)(int)((fVar19 - fVar20) * fVar21) & 0xfffe;
    }
    if (this[0x40] == (btQuantizedBvh)0x0) {
      uVar14 = *(undefined8 *)(this + 8);
      lVar2 = *(long *)(this + 0x78) + (long)*(int *)(this + 0x3c) * 0x40;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(this + 0x10);
      *(undefined8 *)(lVar2 + 0x10) = uVar14;
    }
    else {
      fVar16 = *(float *)(this + 0xc);
      fVar19 = *(float *)(this + 0x2c);
      fVar6 = *(float *)(this + 0x10);
      fVar15 = *(float *)(this + 0x30);
      lVar2 = *(long *)(this + 0xb8) + (long)*(int *)(this + 0x3c) * 0x10;
      *(ushort *)(lVar2 + 6) =
           (ushort)(int)((*(float *)(this + 8) - *(float *)(this + 8)) * *(float *)(this + 0x28) +
                        1.0) | 1;
      *(ushort *)(lVar2 + 8) = (ushort)(int)((fVar16 - fVar16) * fVar19 + 1.0) | 1;
      *(ushort *)(lVar2 + 10) = (ushort)(int)((fVar6 - fVar6) * fVar15 + 1.0) | 1;
    }
    iVar8 = *(int *)(this + 0x3c);
    iVar10 = param_2 - param_1;
    if (iVar10 != 0 && param_1 <= param_2) {
      uVar12 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
      uVar13 = -(ulong)((uint)param_1 >> 0x1f) & 0xffffffc000000000 | (ulong)(uint)param_1 << 6;
      do {
        if (this[0x40] == (btQuantizedBvh)0x0) {
          puVar4 = (undefined8 *)(*(long *)(this + 0x58) + uVar13);
          uStack_68 = puVar4[1];
          local_70 = *puVar4;
          lVar2 = *(long *)(this + 0x58) + uVar12 * 4;
          local_80 = *(float *)(lVar2 + 0x10);
          fStack_7c = *(float *)(lVar2 + 0x14);
          local_78 = *(float *)(lVar2 + 0x18);
          uVar17 = (undefined2)*(undefined4 *)(lVar2 + 0x1c);
          uVar18 = (undefined2)((uint)*(undefined4 *)(lVar2 + 0x1c) >> 0x10);
        }
        else {
          puVar1 = (ushort *)(*(long *)(this + 0x98) + uVar12);
          fVar6 = (float)NEON_ucvtf((uint)*puVar1);
          fVar15 = (float)NEON_ucvtf((uint)puVar1[1]);
          fVar16 = (float)NEON_ucvtf((uint)puVar1[2]);
          local_70 = CONCAT44(fVar15 / *(float *)(this + 0x2c) + *(float *)(this + 0xc),
                              fVar6 / *(float *)(this + 0x28) + *(float *)(this + 8));
          uStack_68 = (ulong)(uint)(fVar16 / *(float *)(this + 0x30) + *(float *)(this + 0x10));
          lVar2 = *(long *)(this + 0x98) + uVar12;
          fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 6));
          fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
          fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
          local_80 = fVar6 / *(float *)(this + 0x28) + *(float *)(this + 8);
          fStack_7c = fVar15 / *(float *)(this + 0x2c) + *(float *)(this + 0xc);
          local_78 = fVar16 / *(float *)(this + 0x30) + *(float *)(this + 0x10);
          uVar17 = 0;
          uVar18 = 0;
        }
        uStack_74 = CONCAT22(uVar18,uVar17);
        mergeInternalNodeAabb(this,iVar8,(btVector3 *)&local_70,(btVector3 *)&local_80);
        iVar8 = *(int *)(this + 0x3c);
        uVar12 = uVar12 + 0x10;
        iVar10 = iVar10 + -1;
        uVar13 = uVar13 + 0x40;
      } while (iVar10 != 0);
    }
    *(int *)(this + 0x3c) = iVar8 + 1;
    buildTree(this,param_1,iVar7);
    iVar10 = *(int *)(this + 0x3c);
    buildTree(this,iVar7,param_2);
    bVar9 = this[0x40];
    iVar3 = *(int *)(this + 0x3c) - iVar3;
    if ((bVar9 != (btQuantizedBvh)0x0) && (0x80 < iVar3)) {
      updateSubtreeHeaders(this,iVar8 + 1,iVar10);
      bVar9 = this[0x40];
    }
    if (bVar9 == (btQuantizedBvh)0x0) {
      *(int *)(*(long *)(this + 0x78) + lVar11 * 0x40 + 0x20) = iVar3;
    }
    else {
      *(int *)(*(long *)(this + 0xb8) + lVar11 * 0x10 + 0xc) = -iVar3;
    }
  }
  return;
}

