
/* cocos2d::IndexBuffer::init(cocos2d::IndexBuffer::IndexType, int, unsigned int, int) */

undefined8 __thiscall
cocos2d::IndexBuffer::init
          (IndexBuffer *this,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  long lVar1;
  undefined1 auVar2 [16];
  void *__s;
  void *__s_00;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if (param_3 < 1) {
    uVar4 = 0;
  }
  else {
    uVar8 = (ulong)(int)param_5;
    uVar5 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
    if (uVar8 >> 0x3e != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    *(uint *)(this + 0x30) = param_5;
    __s = operator_new__(uVar5);
    memset(__s,0,uVar5);
    *(void **)(this + 0x28) = __s;
    __s_00 = operator_new__(uVar5);
    memset(__s_00,0,uVar5);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    *(void **)(this + 0x38) = __s_00;
    uVar7 = (uVar8 + (long)(int)param_5 * 2) * 8;
    uVar5 = uVar7 + 8;
    if (SUB168(auVar2 * ZEXT816(0x18),8) != 0 || 0xfffffffffffffff7 < uVar7) {
      uVar5 = 0xffffffffffffffff;
    }
    puVar3 = operator_new__(uVar5);
    *puVar3 = uVar8;
    if (param_5 != 0) {
      memset(puVar3 + 1,0,((uVar7 - 0x18) / 0x18) * 0x18 + 0x18);
    }
    *(ulong **)(this + 0x48) = puVar3 + 1;
    *(undefined4 *)(this + 0x34) = param_2;
    *(undefined4 *)(this + 0x50) = param_4;
    glGenBuffers(param_5,__s);
    if (0 < (int)param_5) {
      lVar6 = 0;
      uVar5 = 0;
      do {
        lVar9 = uVar5 * 4;
        *(int *)(*(long *)(this + 0x38) + lVar9) = param_3;
        glBindBuffer(0x8893,*(undefined4 *)(*(long *)(this + 0x28) + lVar9));
        lVar1 = 2;
        if (*(int *)(this + 0x34) != 0) {
          lVar1 = 4;
        }
        glBufferData(0x8893,lVar1 * *(int *)(*(long *)(this + 0x38) + lVar9),0,
                     *(undefined4 *)(this + 0x50));
        glBindBuffer(0x8893,0);
        if (_enableShadowCopy != '\0') {
          this_00 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)
                    (*(long *)(this + 0x48) + lVar6);
          lVar1 = 2;
          if (*(int *)(this + 0x34) != 0) {
            lVar1 = 4;
          }
          uVar8 = lVar1 * *(int *)(*(long *)(this + 0x38) + uVar5 * 4);
          uVar7 = *(long *)(this_00 + 8) - *(long *)this_00;
          if (uVar7 < uVar8) {
            std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                      (this_00,uVar8 - uVar7);
          }
          else if (uVar8 < uVar7) {
            *(ulong *)(this_00 + 8) = *(long *)this_00 + uVar8;
          }
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x18;
      } while (param_5 != uVar5);
    }
    uVar4 = 1;
  }
  return uVar4;
}

