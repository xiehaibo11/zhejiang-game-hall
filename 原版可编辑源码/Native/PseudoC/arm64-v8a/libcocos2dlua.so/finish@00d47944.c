
/* cocos2d::Terrain::Chunk::finish() */

void __thiscall cocos2d::Terrain::Chunk::finish(Chunk *this)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  glGenBuffers(1,this + 0x18);
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x18));
  glBufferData(0x8892,*(long *)(this + 8) - *(long *)this,*(long *)this,0x88e0);
  glBindBuffer(0x8892,0);
  puVar1 = *(undefined4 **)this;
  local_58 = *puVar1;
  fVar9 = (float)puVar1[1];
  uStack_54 = puVar1[2];
  fVar8 = fVar9;
  uStack_4c = uStack_54;
  local_50 = local_58;
  if (*(long *)(this + 8) - (long)puVar1 != 0) {
    uVar4 = *(long *)(this + 8) - (long)puVar1 >> 5;
    uVar5 = 1;
    puVar3 = puVar1;
    while (puVar6 = puVar3, uVar5 < uVar4) {
      puVar3 = puVar6 + 8;
      uVar5 = uVar5 + 1;
      if ((float)puVar6[9] < fVar9) {
        fVar9 = (float)puVar6[9];
        uStack_4c = puVar6[10];
        local_50 = *puVar3;
      }
    }
    uVar5 = 1;
    while (puVar3 = puVar1, uVar5 < uVar4) {
      puVar1 = puVar3 + 8;
      uVar5 = uVar5 + 1;
      if (fVar8 < (float)puVar3[9]) {
        local_58 = *puVar1;
        uStack_54 = puVar3[10];
        fVar8 = (float)puVar3[9];
      }
    }
  }
  fVar7 = (float)Vec2::distance((Vec2 *)&local_50,(Vec2 *)&local_58);
  *(float *)(this + 0xf8) = (fVar8 - fVar9) / fVar7;
  fVar8 = (float)(1 << (ulong)(*(uint *)(this + 0xa0) & 0x1f));
                    /* try { // try from 00d47aa0 to 00e47aa7 has its CatchHandler @ 00d47d80 */
  fVar9 = *(float *)(*(long *)(this + 0xe8) + 0x80530) / fVar8;
  fVar8 = *(float *)(*(long *)(this + 0xe8) + 0x80534) / fVar8;
                    /* try { // try from 00d47aa8 to 00e47c03 has its CatchHandler @ 00d47a4c */
  std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::reserve
            ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0x28),
             (long)(int)(fVar9 * 6.0 + fVar8 * 6.0 + (fVar9 + 1.0) * (fVar8 + 1.0) * 6.0));
  fVar8 = (float)(1 << (ulong)(*(uint *)(this + 0xa0) & 0x1f));
  fVar9 = *(float *)(*(long *)(this + 0xe8) + 0x80530) / fVar8;
  fVar8 = *(float *)(*(long *)(this + 0xe8) + 0x80534) / fVar8;
  std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::reserve
            ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0x40),
             (long)(int)(fVar9 * 6.0 + fVar8 * 6.0 + (fVar9 + 1.0) * (fVar8 + 1.0) * 6.0));
  fVar8 = (float)(1 << (ulong)(*(uint *)(this + 0xa0) & 0x1f));
  fVar9 = *(float *)(*(long *)(this + 0xe8) + 0x80530) / fVar8;
  fVar8 = *(float *)(*(long *)(this + 0xe8) + 0x80534) / fVar8;
  std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::reserve
            ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0x58),
             (long)(int)(fVar9 * 6.0 + fVar8 * 6.0 + (fVar9 + 1.0) * (fVar8 + 1.0) * 6.0));
  fVar8 = (float)(1 << (ulong)(*(uint *)(this + 0xa0) & 0x1f));
  fVar9 = *(float *)(*(long *)(this + 0xe8) + 0x80530) / fVar8;
  fVar8 = *(float *)(*(long *)(this + 0xe8) + 0x80534) / fVar8;
  std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::reserve
            ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0x70),
             (long)(int)(fVar9 * 6.0 + fVar8 * 6.0 + (fVar9 + 1.0) * (fVar8 + 1.0) * 6.0));
  *(undefined4 *)(this + 0xa4) = 0xffffffff;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

