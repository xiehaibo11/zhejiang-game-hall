
/* fairygui::GPath::createSplineSegment() */

void __thiscall fairygui::GPath::createSplineSegment(GPath *this)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 local_68;
  float fStack_64;
  int iStack_60;
  uint uStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar6 = (int)(DAT_01782bc0 - DAT_01782bb8 >> 2) * -0x55555555;
  std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::insert
            ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)&DAT_01782bb8,
             DAT_01782bb8,DAT_01782bb8);
  lVar4 = ((long)iVar6 + (long)iVar6 * 2) * 4;
  FUN_00abfb8c(&DAT_01782bb8,DAT_01782bb8 + lVar4);
  FUN_00abfb8c(&DAT_01782bb8,DAT_01782bb8 + lVar4);
  lVar5 = DAT_01782bc0;
  local_68 = 0;
  uVar1 = iVar6 + 3;
                    /* try { // try from 00abfd68 to 00bbfddb has its CatchHandler @ 00abfd68
                       catch() { ... } // from try @ 00abfd68 with catch @ 00abfd68
                       catch() { ... } // from try @ 00abfde8 with catch @ 00abfd68 */
  iStack_60 = (int)((ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18)) >> 2) * -0x55555555;
  uStack_5c = uVar1;
  for (lVar4 = DAT_01782bb8; lVar4 != lVar5; lVar4 = lVar4 + 0xc) {
    FUN_00abfb8c(this + 0x18,lVar4);
  }
  fStack_64 = 0.0;
  fVar8 = fStack_64;
  if (1 < (int)uVar1) {
    lVar4 = 0;
    fVar8 = 0.0;
    lVar5 = (ulong)uVar1 - 1;
    do {
      fVar7 = (float)cocos2d::Vec3::distance
                               ((Vec3 *)(DAT_01782bb8 + lVar4),(Vec3 *)(DAT_01782bb8 + lVar4) + 0xc)
      ;
      fVar8 = fVar7 + fVar8;
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0xc;
    } while (lVar5 != 0);
  }
  fStack_64 = fVar8;
                    /* try { // try from 00abfddc to 00bbfde7 has its CatchHandler @ 00abfe1c */
  puVar2 = *(undefined8 **)(this + 8);
                    /* try { // try from 00abfde8 to 00bbfe2f has its CatchHandler @ 00abfd68 */
  *(float *)(this + 0x30) = fStack_64 + *(float *)(this + 0x30);
  if (puVar2 == *(undefined8 **)(this + 0x10)) {
    std::__ndk1::vector<fairygui::GPath::Segment,std::__ndk1::allocator<fairygui::GPath::Segment>>::
    __push_back_slow_path<fairygui::GPath::Segment_const&>
              ((vector<fairygui::GPath::Segment,std::__ndk1::allocator<fairygui::GPath::Segment>> *)
               this,(Segment *)&local_68);
  }
  else {
    puVar2[1] = CONCAT44(uStack_5c,iStack_60);
    *puVar2 = CONCAT44(fStack_64,local_68);
    *(undefined8 **)(this + 8) = puVar2 + 2;
  }
  DAT_01782bc0 = DAT_01782bb8;
                    /* catch() { ... } // from try @ 00abfddc with catch @ 00abfe1c */
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00abfe30 to 00bbfe7f has its CatchHandler @ 00abfe30
                       catch() { ... } // from try @ 00abfe30 with catch @ 00abfe30
                       catch() { ... } // from try @ 00abfee4 with catch @ 00abfe30
                       catch() { ... } // from try @ 00abff20 with catch @ 00abfe30 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

