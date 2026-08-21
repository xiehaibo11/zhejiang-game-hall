
/* dragonBones::BinaryDataParser::_parseBinaryTimeline(dragonBones::TimelineType, unsigned int,
   dragonBones::TimelineData*) */

TimelineData * __thiscall
dragonBones::BinaryDataParser::_parseBinaryTimeline
          (BinaryDataParser *this,undefined4 param_2,int param_3,TimelineData *param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this_00;
  ulong uVar10;
  ulong uVar11;
  
  if (param_4 == (TimelineData *)0x0) {
                    /* try { // try from 00d895c0 to 00e89627 has its CatchHandler @ 00d895c0
                       catch() { ... } // from try @ 00d895c0 with catch @ 00d895c0
                       catch() { ... } // from try @ 00d89e18 with catch @ 00d895c0
                       catch() { ... } // from try @ 00d8a3ac with catch @ 00d895c0 */
    param_4 = BaseObject::borrowObject<dragonBones::TimelineData>();
  }
  *(undefined4 *)(param_4 + 0x10) = param_2;
  *(int *)(param_4 + 0x14) = param_3;
  *(TimelineData **)(this + 0x60) = param_4;
  uVar3 = *(ushort *)(*(long *)(this + 0x278) + (ulong)(param_3 + 2) * 2);
  uVar10 = (ulong)uVar3;
  if (uVar10 == 1) {
    *(undefined4 *)(param_4 + 0x18) = 0xffffffff;
  }
  else {
    lVar4 = *(long *)(this + 0x28);
    this_00 = (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(lVar4 + 0x48);
    lVar5 = *(long *)this_00;
    uVar1 = *(int *)(*(long *)(this + 0x58) + 0x1c) + 1;
    uVar11 = *(long *)(lVar4 + 0x50) - lVar5;
    uVar7 = (long)uVar11 >> 2;
    uVar6 = (ulong)(uVar1 + (int)uVar7);
    *(int *)(param_4 + 0x18) = (int)uVar7;
    if (uVar7 < uVar6) {
                    /* try { // try from 00d89628 to 00e89633 has its CatchHandler @ 00d8a3e8 */
      std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
                (this_00,uVar6 - uVar7);
    }
    else if (uVar7 != uVar6) {
                    /* try { // try from 00d8963c to 00e89643 has its CatchHandler @ 00d8a3e0 */
      *(ulong *)(lVar4 + 0x50) = lVar5 + uVar6 * 4;
    }
                    /* try { // try from 00d89644 to 00e8964b has its CatchHandler @ 00d8a3dc */
    if (uVar1 != 0) {
      lVar4 = *(long *)this_00;
                    /* try { // try from 00d8964c to 00e89653 has its CatchHandler @ 00d8a3d8 */
      lVar8 = 0;
                    /* try { // try from 00d89654 to 00e8965b has its CatchHandler @ 00d8a3d4 */
      lVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      if (uVar10 != 0) goto LAB_00d896ac;
      while( true ) {
        *(int *)(lVar4 + (uVar11 >> 2 & 0xffffffff) * 4 + uVar7 * 4) = (int)uVar6 + -1;
        uVar7 = uVar7 + 1;
        if (uVar1 == uVar7) break;
        if (uVar6 < uVar10) {
LAB_00d896ac:
                    /* try { // try from 00d896b4 to 00e896c3 has its CatchHandler @ 00d8a49c */
          if ((ulong)(lVar8 + lVar5) <= uVar7) {
                    /* try { // try from 00d896c8 to 00e896d7 has its CatchHandler @ 00d8a4c8 */
            lVar8 = uVar6 + (*(int *)(param_4 + 0x14) + 5);
            iVar2 = *(int *)(*(long *)(this + 0x58) + 0x18);
            lVar5 = (long)*(short *)(*(long *)(this + 0x270) +
                                    (ulong)(iVar2 + (uint)*(ushort *)
                                                           (*(long *)(this + 0x278) + lVar8 * 2)) *
                                    2);
            if (uVar6 == uVar3 - 1) {
              uVar9 = (ulong)*(uint *)(*(long *)(this + 0x58) + 0x1c);
            }
            else {
              uVar9 = (ulong)*(short *)(*(long *)(this + 0x270) +
                                       (ulong)(iVar2 + (uint)*(ushort *)
                                                              (*(long *)(this + 0x278) + lVar8 * 2 +
                                                              2)) * 2);
            }
            lVar8 = uVar9 - lVar5;
            uVar6 = uVar6 + 1;
          }
        }
      }
    }
  }
  *(undefined8 *)(this + 0x60) = 0;
  return param_4;
}

