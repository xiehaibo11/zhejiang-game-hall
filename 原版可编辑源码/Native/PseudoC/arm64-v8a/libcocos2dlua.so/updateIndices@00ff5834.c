
/* cocos2d::IndexBuffer::updateIndices(unsigned char const*, int, int) */

undefined8 __thiscall
cocos2d::IndexBuffer::updateIndices(IndexBuffer *this,uchar *param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  iVar4 = 2;
  if (*(int *)(this + 0x34) != 0) {
    iVar4 = 4;
  }
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = param_2 / iVar4;
  }
  uVar5 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_3 << 2;
  *(int *)(*(long *)(this + 0x38) + uVar5) = iVar2;
  glBindBuffer(0x8893,*(undefined4 *)(*(long *)(this + 0x28) + uVar5));
  glBufferData(0x8893,(long)param_2,param_1,*(undefined4 *)(this + 0x50));
  glBindBuffer(0x8893,0);
  if (_enableShadowCopy != '\0') {
    lVar3 = *(long *)(this + 0x48);
    lVar7 = (long)param_3;
    this_00 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(lVar3 + lVar7 * 0x18);
    lVar1 = 2;
    if (*(int *)(this + 0x34) != 0) {
      lVar1 = 4;
    }
    uVar5 = lVar1 * *(int *)(*(long *)(this + 0x38) + lVar7 * 4);
    uVar6 = *(long *)(this_00 + 8) - *(long *)this_00;
    if (uVar6 < uVar5) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                (this_00,uVar5 - uVar6);
      lVar3 = *(long *)(this + 0x48);
    }
    else if (uVar6 != uVar5) {
      *(ulong *)(this_00 + 8) = *(long *)this_00 + uVar5;
    }
    memcpy(*(void **)(lVar3 + lVar7 * 0x18),param_1,(long)param_2);
  }
  return 1;
}

