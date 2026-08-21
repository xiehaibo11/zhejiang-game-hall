
/* fairygui::FUISprite::updateBar() */

void __thiscall fairygui::FUISprite::updateBar(FUISprite *this)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Vec3 aVStack_a8 [8];
  float local_a0;
  long local_98;
  
                    /* try { // try from 00aaabb4 to 00baac0f has its CatchHandler @ 00aaaab8 */
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00aaab08 with catch @ 00aaabf4
                       catch() { ... } // from try @ 00aaaba0 with catch @ 00aaabf4 */
  if (*(int *)(this + 0x530) == 1) {
    if ((*(uint *)(this + 0x534) | 2) == 2) {
      fVar13 = *(float *)(this + 0x538);
      fVar11 = 1.0;
LAB_00aaaca4:
      fVar8 = 0.0;
      fVar14 = 0.0;
      pvVar6 = *(void **)(this + 0x560);
      goto joined_r0x00aaac80;
    }
    fVar14 = 0.0;
    fVar8 = 1.0 - *(float *)(this + 0x538);
  }
  else {
    if ((*(uint *)(this + 0x534) | 2) != 2) {
      fVar11 = *(float *)(this + 0x538);
      fVar13 = 1.0;
      goto LAB_00aaaca4;
    }
    fVar8 = 0.0;
    fVar14 = 1.0 - *(float *)(this + 0x538);
  }
  fVar11 = 1.0;
  fVar13 = 1.0;
  pvVar6 = *(void **)(this + 0x560);
joined_r0x00aaac80:
  if (pvVar6 == (void *)0x0) {
    *(undefined4 *)(this + 0x540) = 4;
    pvVar6 = malloc(0x60);
    *(void **)(this + 0x560) = pvVar6;
    pvVar2 = malloc(0xc);
    *(void **)(this + 0x568) = pvVar2;
  }
  fVar12 = *(float *)(this + 0x494);
  fVar9 = *(float *)(this + 0x47c);
  fVar7 = fVar8;
  fVar10 = fVar11;
  if (this[0x418] == (FUISprite)0x0) {
    fVar7 = fVar11;
    fVar10 = fVar8;
  }
  *(float *)((long)pvVar6 + 0x10) =
       *(float *)(this + 0x490) * fVar10 + *(float *)(this + 0x478) * (1.0 - fVar10);
  *(float *)((long)pvVar6 + 0x14) = fVar12 * fVar7 + fVar9 * (1.0 - fVar7);
  cocos2d::Vec3::Vec3(aVStack_a8,0.0,0.0,0.0);
  fVar7 = *(float *)(this + 0x468);
  fVar10 = *(float *)(this + 0x46c);
  fVar9 = *(float *)(this + 0x480);
  fVar12 = *(float *)(this + 0x484);
  pfVar4 = *(float **)(this + 0x560);
  pfVar4[2] = local_a0;
  *pfVar4 = (1.0 - fVar8) * fVar7 + fVar8 * fVar9;
  pfVar4[1] = (1.0 - fVar11) * fVar10 + fVar11 * fVar12;
  fVar12 = *(float *)(this + 0x494);
  fVar9 = *(float *)(this + 0x47c);
  fVar7 = fVar8;
  fVar10 = fVar14;
  if (this[0x418] == (FUISprite)0x0) {
    fVar7 = fVar14;
    fVar10 = fVar8;
  }
  lVar5 = *(long *)(this + 0x560);
  *(float *)(lVar5 + 0x28) =
       *(float *)(this + 0x490) * fVar10 + *(float *)(this + 0x478) * (1.0 - fVar10);
  *(float *)(lVar5 + 0x2c) = fVar12 * fVar7 + fVar9 * (1.0 - fVar7);
  cocos2d::Vec3::Vec3(aVStack_a8,0.0,0.0,0.0);
  fVar7 = *(float *)(this + 0x468);
  fVar10 = *(float *)(this + 0x46c);
  fVar9 = *(float *)(this + 0x480);
  fVar12 = *(float *)(this + 0x484);
  lVar5 = *(long *)(this + 0x560);
  *(float *)(lVar5 + 0x20) = local_a0;
  *(float *)(lVar5 + 0x18) = (1.0 - fVar8) * fVar7 + fVar8 * fVar9;
  *(float *)(lVar5 + 0x1c) = (1.0 - fVar14) * fVar10 + fVar14 * fVar12;
  fVar9 = *(float *)(this + 0x494);
  fVar10 = *(float *)(this + 0x47c);
  fVar8 = fVar13;
  fVar7 = fVar11;
  if (this[0x418] == (FUISprite)0x0) {
    fVar8 = fVar11;
    fVar7 = fVar13;
  }
  lVar5 = *(long *)(this + 0x560);
  *(float *)(lVar5 + 0x40) =
       *(float *)(this + 0x490) * fVar7 + *(float *)(this + 0x478) * (1.0 - fVar7);
  *(float *)(lVar5 + 0x44) = fVar9 * fVar8 + fVar10 * (1.0 - fVar8);
  cocos2d::Vec3::Vec3(aVStack_a8,0.0,0.0,0.0);
  fVar8 = *(float *)(this + 0x468);
  fVar7 = *(float *)(this + 0x46c);
  fVar10 = *(float *)(this + 0x480);
  fVar9 = *(float *)(this + 0x484);
  lVar5 = *(long *)(this + 0x560);
  *(float *)(lVar5 + 0x38) = local_a0;
  *(float *)(lVar5 + 0x30) = (1.0 - fVar13) * fVar8 + fVar13 * fVar10;
  *(float *)(lVar5 + 0x34) = (1.0 - fVar11) * fVar7 + fVar11 * fVar9;
  fVar7 = *(float *)(this + 0x47c);
  fVar10 = *(float *)(this + 0x494);
  fVar8 = fVar13;
  fVar11 = fVar14;
  if (this[0x418] == (FUISprite)0x0) {
    fVar8 = fVar14;
    fVar11 = fVar13;
  }
  lVar5 = *(long *)(this + 0x560);
  *(float *)(lVar5 + 0x58) =
       *(float *)(this + 0x490) * fVar11 + *(float *)(this + 0x478) * (1.0 - fVar11);
  *(float *)(lVar5 + 0x5c) = fVar10 * fVar8 + fVar7 * (1.0 - fVar8);
  cocos2d::Vec3::Vec3(aVStack_a8,0.0,0.0,0.0);
  fVar8 = *(float *)(this + 0x468);
  fVar11 = *(float *)(this + 0x46c);
  fVar7 = *(float *)(this + 0x480);
  fVar10 = *(float *)(this + 0x484);
  lVar5 = *(long *)(this + 0x560);
  *(float *)(lVar5 + 0x50) = local_a0;
  *(float *)(lVar5 + 0x48) = (1.0 - fVar13) * fVar8 + fVar13 * fVar7;
  *(float *)(lVar5 + 0x4c) = (1.0 - fVar14) * fVar11 + fVar14 * fVar10;
  puVar3 = *(undefined8 **)(this + 0x568);
  *puVar3 = 0x2000200010000;
  *(undefined4 *)(puVar3 + 1) = 0x30001;
  *(undefined8 **)(this + 0x550) = puVar3;
  *(undefined8 *)(this + 0x548) = *(undefined8 *)(this + 0x560);
  *(undefined8 *)(this + 0x558) = 0x600000004;
  (**(code **)(*(long *)this + 0x528))(this);
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

