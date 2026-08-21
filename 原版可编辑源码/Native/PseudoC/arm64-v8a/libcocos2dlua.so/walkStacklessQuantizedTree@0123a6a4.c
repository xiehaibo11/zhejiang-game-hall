
/* btQuantizedBvh::walkStacklessQuantizedTree(btNodeOverlapCallback*, unsigned short*, unsigned
   short*, int, int) const */

void __thiscall
btQuantizedBvh::walkStacklessQuantizedTree
          (btQuantizedBvh *this,btNodeOverlapCallback *param_1,ushort *param_2,ushort *param_3,
          int param_4,int param_5)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  int iVar15;
  ushort *puVar16;
  
  if (param_4 < param_5) {
    iVar15 = 0;
    puVar16 = (ushort *)(*(long *)(this + 0xb8) + (long)param_4 * 0x10);
    do {
      while( true ) {
        uVar3 = *param_2;
        uVar4 = puVar16[3];
        uVar5 = *param_3;
        uVar6 = *puVar16;
        uVar7 = param_2[2];
        uVar8 = puVar16[5];
        uVar9 = param_3[2];
        uVar10 = puVar16[2];
        uVar11 = param_2[1];
        uVar12 = puVar16[4];
        uVar13 = param_3[1];
        uVar14 = puVar16[1];
        uVar2 = *(uint *)(puVar16 + 6);
        if ((-1 < (int)uVar2) &&
           (((((uVar4 >= uVar3 && uVar5 >= uVar6) && uVar8 >= uVar7) && uVar9 >= uVar10) &&
            uVar12 >= uVar11) && uVar13 >= uVar14)) {
          (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar2 >> 0x15,uVar2 & 0x1fffff);
        }
        iVar15 = iVar15 + 1;
        if ((((((uVar4 < uVar3 || uVar5 < uVar6) || uVar8 < uVar7) || uVar9 < uVar10) ||
             uVar12 < uVar11) || uVar13 < uVar14) && (int)uVar2 < 0) break;
        puVar16 = puVar16 + 8;
        param_4 = param_4 + 1;
        if (param_5 <= param_4) goto LAB_0123a7cc;
      }
      puVar1 = puVar16 + 6;
      puVar16 = puVar16 + (long)-*(int *)puVar1 * 8;
      param_4 = param_4 - *(int *)puVar1;
    } while (param_4 < param_5);
  }
  else {
    iVar15 = 0;
  }
LAB_0123a7cc:
  if (maxIterations < iVar15) {
    maxIterations = iVar15;
  }
  return;
}

