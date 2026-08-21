
/* cocos2d::MeshInfo::getRandomPositionAndNormal(unsigned long) */

void cocos2d::MeshInfo::getRandomPositionAndNormal(ulong param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long in_x1;
  Vec3 *in_x8;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_e8;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined1 local_a0 [8];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  long local_48;
  
  lVar2 = tpidr_el0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e36bb4 with catch @ 00e36bf0
                        */
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined8 *)(*(long *)param_1 + in_x1 * 0x7c);
  uStack_a8 = puVar4[5];
  uStack_98 = puVar4[7];
  local_a0 = (undefined1  [8])puVar4[6];
  local_c0 = puVar4[2];
  fStack_b0 = (float)puVar4[4];
  fStack_ac = (float)((ulong)puVar4[4] >> 0x20);
  uStack_c8 = (undefined4)puVar4[1];
  uStack_c4 = (undefined4)((ulong)puVar4[1] >> 0x20);
  local_d0 = (undefined4)*puVar4;
  uStack_cc = (undefined4)((ulong)*puVar4 >> 0x20);
  local_b8 = (float)puVar4[3];
  local_b4 = (float)((ulong)puVar4[3] >> 0x20);
  uStack_5c = *(undefined8 *)((long)puVar4 + 0x74);
  uStack_78 = puVar4[0xb];
  local_80 = puVar4[10];
  uStack_70 = puVar4[0xc];
  auStack_88 = (undefined1  [8])puVar4[9];
  local_90 = puVar4[8];
                    /* try { // try from 00e36c2c to 00f36c2f has its CatchHandler @ 00e36c30 */
  uStack_60 = (undefined4)((ulong)*(undefined8 *)((long)puVar4 + 0x6c) >> 0x20);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e36c2c with catch @ 00e36c30
                        */
  uStack_68 = (undefined4)puVar4[0xd];
  local_64 = (undefined4)((ulong)puVar4[0xd] >> 0x20);
                    /* try { // try from 00e36c34 to 00f36c37 has its CatchHandler @ 00e36c40 */
                    /* try { // try from 00e36c38 to 00f36c43 has its CatchHandler @ 00e36b38 */
  Vec3::Vec3(in_x8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e36c34 with catch @ 00e36c40
                        */
  Vec3::Vec3(in_x8 + 0xc);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 3) {
    iVar3 = rand();
    fVar8 = (float)iVar3 * 4.656613e-10;
    iVar3 = rand();
    fVar5 = (float)iVar3 * 4.656613e-10;
    fVar7 = 1.0 - fVar5;
    if (fVar8 + fVar5 <= 1.0) {
      fVar7 = fVar5;
    }
    fVar6 = 1.0 - fVar8;
    if (fVar8 + fVar5 <= 1.0) {
      fVar6 = fVar8;
    }
    fVar5 = (1.0 - fVar6) - fVar7;
    *(ulong *)in_x8 =
         CONCAT44((float)((ulong)local_c0 >> 0x20) * fVar6 + fStack_b0 * fVar7 +
                  (float)((ulong)uStack_a8 >> 0x20) * fVar5,
                  (float)local_c0 * fVar6 + local_b4 * fVar7 + (float)uStack_a8 * fVar5);
    *(float *)(in_x8 + 8) = local_b8 * fVar6 + fVar7 * fStack_ac + fVar5 * (float)local_a0._0_4_;
    *(ulong *)(in_x8 + 0xc) = CONCAT44(uStack_c8,uStack_cc);
    *(undefined4 *)(in_x8 + 0x14) = uStack_c4;
  }
  else {
    if (uVar1 == 3) {
      iVar3 = rand();
      fVar7 = (float)iVar3 * 4.656613e-10 * 3.0;
      Vec3::Vec3((Vec3 *)&local_e8);
      Vec3::Vec3((Vec3 *)&uStack_dc);
      if (1.0 <= fVar7) {
        if (2.0 <= fVar7) {
          local_e8 = uStack_a8;
          puVar4 = (undefined8 *)(auStack_88 + 4);
          fStack_e0 = (float)local_a0._0_4_;
        }
        else {
          local_e8 = CONCAT44(fStack_b0,local_b4);
          fStack_e0 = fStack_ac;
          puVar4 = &local_90;
        }
      }
      else {
        local_e8 = local_c0;
        fStack_e0 = local_b8;
        puVar4 = (undefined8 *)(local_a0 + 4);
      }
      uStack_d4 = *(undefined4 *)(puVar4 + 1);
      uStack_dc = (undefined4)*puVar4;
      uStack_d8 = (undefined4)((ulong)*puVar4 >> 0x20);
    }
    else {
      if (uVar1 != 4) goto LAB_00e36ddc;
      PUTriangle::getRandomEdgePositionAndNormal();
    }
    *(ulong *)(in_x8 + 0x10) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(in_x8 + 8) = CONCAT44(uStack_dc,fStack_e0);
    *(undefined8 *)in_x8 = local_e8;
  }
LAB_00e36ddc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

