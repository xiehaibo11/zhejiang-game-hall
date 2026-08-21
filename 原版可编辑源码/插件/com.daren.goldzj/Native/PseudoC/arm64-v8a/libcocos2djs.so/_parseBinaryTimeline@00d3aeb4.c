
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
  
  if (param_4 == (TimelineData *)0x0) {
    param_4 = BaseObject::borrowObject<dragonBones::TimelineData>();
  }
  *(undefined4 *)(param_4 + 0x10) = param_2;
  *(int *)(param_4 + 0x14) = param_3;
  *(TimelineData **)(this + 0x60) = param_4;
  uVar3 = *(ushort *)(*(long *)(this + 0x278) + (ulong)(param_3 + 2) * 2);
  if ((ulong)uVar3 == 1) {
    *(undefined4 *)(param_4 + 0x18) = 0xffffffff;
  }
  else {
    lVar4 = *(long *)(this + 0x28);
    this_00 = (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(lVar4 + 0x48);
    lVar5 = *(long *)this_00;
    uVar1 = *(int *)(*(long *)(this + 0x58) + 0x1c) + 1;
    uVar10 = *(long *)(lVar4 + 0x50) - lVar5;
    uVar7 = (long)uVar10 >> 2;
    uVar6 = (ulong)(uVar1 + (int)uVar7);
    *(int *)(param_4 + 0x18) = (int)uVar7;
    if (uVar7 < uVar6) {
      std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
                (this_00,uVar6 - uVar7);
    }
    else if (uVar7 != uVar6) {
      *(ulong *)(lVar4 + 0x50) = lVar5 + uVar6 * 4;
    }
    if (uVar1 != 0) {
      lVar4 = *(long *)this_00;
      lVar8 = 0;
      lVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      do {
        if ((uVar6 < uVar3) && ((ulong)(lVar8 + lVar5) <= uVar7)) {
          lVar8 = uVar6 + (*(int *)(param_4 + 0x14) + 5);
          iVar2 = *(int *)(*(long *)(this + 0x58) + 0x18);
          lVar5 = (long)*(short *)(*(long *)(this + 0x270) +
                                  (ulong)(iVar2 + (uint)*(ushort *)
                                                         (*(long *)(this + 0x278) + lVar8 * 2)) * 2)
          ;
          if (uVar6 == uVar3 - 1) {
            uVar9 = (ulong)*(uint *)(*(long *)(this + 0x58) + 0x1c);
          }
          else {
            uVar9 = (ulong)*(short *)(*(long *)(this + 0x270) +
                                     (ulong)(iVar2 + (uint)*(ushort *)
                                                            (*(long *)(this + 0x278) + lVar8 * 2 + 2
                                                            )) * 2);
          }
          lVar8 = uVar9 - lVar5;
          uVar6 = uVar6 + 1;
        }
        *(int *)(lVar4 + (uVar10 >> 2 & 0xffffffff) * 4 + uVar7 * 4) = (int)uVar6 + -1;
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
  }
  *(undefined8 *)(this + 0x60) = 0;
  return param_4;
}

