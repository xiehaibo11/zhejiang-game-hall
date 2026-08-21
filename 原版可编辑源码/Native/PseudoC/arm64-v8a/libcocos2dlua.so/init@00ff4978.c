
/* cocos2d::VertexBuffer::init(int, int, unsigned int, int) */

undefined8 __thiscall
cocos2d::VertexBuffer::init(VertexBuffer *this,int param_1,int param_2,uint param_3,int param_4)

{
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  undefined1 auVar1 [16];
  undefined8 uVar2;
  void *__s;
  void *__s_00;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar7 = (ulong)param_4;
    uVar4 = -(ulong)((uint)param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_4 << 2;
    if (uVar7 >> 0x3e != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    *(int *)(this + 0x38) = param_4;
    __s = operator_new__(uVar4);
    memset(__s,0,uVar4);
    *(void **)(this + 0x30) = __s;
    __s_00 = operator_new__(uVar4);
    memset(__s_00,0,uVar4);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar7;
    *(void **)(this + 0x40) = __s_00;
    uVar6 = (uVar7 + (long)param_4 * 2) * 8;
    uVar4 = uVar6 + 8;
    if (SUB168(auVar1 * ZEXT816(0x18),8) != 0 || 0xfffffffffffffff7 < uVar6) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar3 = operator_new__(uVar4);
    *puVar3 = uVar7;
    if (param_4 != 0) {
      memset(puVar3 + 1,0,((uVar6 - 0x18) / 0x18) * 0x18 + 0x18);
    }
    *(ulong **)(this + 0x48) = puVar3 + 1;
    *(int *)(this + 0x3c) = param_1;
    *(uint *)(this + 0x50) = param_3;
    glGenBuffers(param_4,__s);
    if (0 < param_4) {
      lVar5 = 0;
      uVar4 = 0;
      uVar7 = (ulong)(param_2 * param_1);
      do {
        *(int *)(*(long *)(this + 0x40) + uVar4 * 4) = param_2;
        if (_enableShadowCopy != '\0') {
          this_00 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)
                    (*(long *)(this + 0x48) + lVar5);
          uVar6 = *(long *)(this_00 + 8) - *(long *)this_00;
          if (uVar6 < uVar7) {
            std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                      (this_00,uVar7 - uVar6);
          }
          else if (uVar7 < uVar6) {
            *(ulong *)(this_00 + 8) = *(long *)this_00 + uVar7;
          }
        }
        glBindBuffer(0x8892,*(undefined4 *)(*(long *)(this + 0x30) + uVar4 * 4));
        glBufferData(0x8892,(long)*(int *)(*(long *)(this + 0x40) + uVar4 * 4) *
                            (long)*(int *)(this + 0x3c),0,*(undefined4 *)(this + 0x50));
        glBindBuffer(0x8892,0);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x18;
      } while ((uint)param_4 != uVar4);
    }
    uVar2 = 1;
  }
  return uVar2;
}

