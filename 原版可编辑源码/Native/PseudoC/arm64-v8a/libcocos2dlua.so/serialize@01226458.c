
/* btConvexHullShape::serialize(void*, btSerializer*) const */

char * __thiscall
btConvexHullShape::serialize(btConvexHullShape *this,void *param_1,btSerializer *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  
  btCollisionShape::serialize((btCollisionShape *)this,param_1,param_2);
  *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)((long)param_1 + 0x28) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)((long)param_1 + 0x18) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)((long)param_1 + 0x30) = *(undefined4 *)(this + 0x38);
  uVar1 = *(uint *)(this + 0x74);
  uVar10 = (ulong)uVar1;
  *(uint *)((long)param_1 + 0x48) = uVar1;
  if (uVar1 == 0) {
    *(undefined8 *)((long)param_1 + 0x38) = 0;
    *(undefined8 *)((long)param_1 + 0x40) = 0;
    goto LAB_012265b8;
  }
  uVar2 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x80));
  *(undefined8 *)((long)param_1 + 0x38) = uVar2;
  *(undefined8 *)((long)param_1 + 0x40) = 0;
  lVar3 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x10,uVar10);
  if ((int)uVar1 < 1) {
    puVar4 = *(undefined4 **)(this + 0x80);
  }
  else {
    puVar8 = *(undefined4 **)(lVar3 + 8);
    puVar4 = *(undefined4 **)(this + 0x80);
    if (uVar1 < 8) {
LAB_01226540:
      lVar5 = 0;
    }
    else {
      lVar5 = uVar10 - (uVar1 & 7);
      if (lVar5 != 0) {
        if ((puVar8 < puVar4 + uVar10 * 4) && (puVar4 < puVar8 + uVar10 * 4)) goto LAB_01226540;
        puVar6 = puVar8 + 0x10;
        puVar9 = puVar4 + 0x10;
        lVar7 = lVar5;
        do {
          uVar14 = puVar9[-0xf];
          uVar18 = puVar9[-0xe];
          uVar22 = puVar9[-0xd];
          uVar11 = puVar9[-0xc];
          uVar15 = puVar9[-0xb];
          uVar19 = puVar9[-10];
          uVar23 = puVar9[-9];
          uVar12 = puVar9[-8];
          uVar16 = puVar9[-7];
          uVar20 = puVar9[-6];
          uVar24 = puVar9[-5];
          uVar13 = puVar9[-4];
          uVar17 = puVar9[-3];
          uVar21 = puVar9[-2];
          uVar25 = puVar9[-1];
          uVar26 = *puVar9;
          uVar30 = puVar9[1];
          uVar34 = puVar9[2];
          uVar38 = puVar9[3];
          uVar27 = puVar9[4];
          uVar31 = puVar9[5];
          uVar35 = puVar9[6];
          uVar39 = puVar9[7];
          uVar28 = puVar9[8];
          uVar32 = puVar9[9];
          uVar36 = puVar9[10];
          uVar40 = puVar9[0xb];
          uVar29 = puVar9[0xc];
          uVar33 = puVar9[0xd];
          uVar37 = puVar9[0xe];
          uVar41 = puVar9[0xf];
          lVar7 = lVar7 + -8;
          puVar6[-0x10] = puVar9[-0x10];
          puVar6[-0xf] = uVar14;
          puVar6[-0xe] = uVar18;
          puVar6[-0xd] = uVar22;
          puVar6[-0xc] = uVar11;
          puVar6[-0xb] = uVar15;
          puVar6[-10] = uVar19;
          puVar6[-9] = uVar23;
          puVar6[-8] = uVar12;
          puVar6[-7] = uVar16;
          puVar6[-6] = uVar20;
          puVar6[-5] = uVar24;
          puVar6[-4] = uVar13;
          puVar6[-3] = uVar17;
          puVar6[-2] = uVar21;
          puVar6[-1] = uVar25;
          *puVar6 = uVar26;
          puVar6[1] = uVar30;
          puVar6[2] = uVar34;
          puVar6[3] = uVar38;
          puVar6[4] = uVar27;
          puVar6[5] = uVar31;
          puVar6[6] = uVar35;
          puVar6[7] = uVar39;
          puVar6[8] = uVar28;
          puVar6[9] = uVar32;
          puVar6[10] = uVar36;
          puVar6[0xb] = uVar40;
          puVar6[0xc] = uVar29;
          puVar6[0xd] = uVar33;
          puVar6[0xe] = uVar37;
          puVar6[0xf] = uVar41;
          puVar6 = puVar6 + 0x20;
          puVar9 = puVar9 + 0x20;
        } while (lVar7 != 0);
        puVar8 = puVar8 + lVar5 * 4;
        if ((uVar1 & 7) == 0) goto LAB_01226594;
      }
    }
    lVar7 = uVar10 - lVar5;
    puVar6 = puVar4 + lVar5 * 4 + 2;
    do {
      lVar7 = lVar7 + -1;
      *puVar8 = puVar6[-2];
      puVar8[1] = puVar6[-1];
      puVar8[2] = *puVar6;
      puVar9 = puVar6 + 1;
      puVar6 = puVar6 + 4;
      puVar8[3] = *puVar9;
      puVar8 = puVar8 + 4;
    } while (lVar7 != 0);
  }
LAB_01226594:
  (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar3,"btVector3FloatData",0x59415241,puVar4);
LAB_012265b8:
  return "btConvexHullShapeData";
}

