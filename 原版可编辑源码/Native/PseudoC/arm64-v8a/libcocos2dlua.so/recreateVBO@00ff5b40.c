
/* cocos2d::IndexBuffer::recreateVBO(int) */

void __thiscall cocos2d::IndexBuffer::recreateVBO(IndexBuffer *this,int param_1)

{
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  int iVar1;
  undefined1 auVar2 [16];
  void *pvVar3;
  void *__s;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  
  iVar1 = *(int *)(this + 0x30);
  if (iVar1 < param_1) {
    if (iVar1 < 1) {
      uVar9 = 1000;
    }
    else {
      uVar9 = **(undefined4 **)(this + 0x38);
    }
    glDeleteBuffers(iVar1,*(undefined8 *)(this + 0x28));
    if (*(void **)(this + 0x28) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x28));
      if (*(void **)(this + 0x38) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x38));
      }
      lVar7 = *(long *)(this + 0x48);
      if (lVar7 != 0) {
        lVar5 = *(long *)(lVar7 + -8);
        if (lVar5 != 0) {
          lVar5 = lVar5 * 0x18;
          do {
            pvVar3 = *(void **)(lVar7 + lVar5 + -0x18);
            if (pvVar3 != (void *)0x0) {
              *(void **)(lVar7 + lVar5 + -0x10) = pvVar3;
              operator_delete(pvVar3);
            }
            lVar5 = lVar5 + -0x18;
          } while (lVar5 != 0);
        }
        operator_delete__((long *)(lVar7 + -8));
      }
      *(undefined8 *)(this + 0x28) = 0;
    }
    uVar10 = (ulong)param_1;
    uVar6 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_1 << 2;
    if (uVar10 >> 0x3e != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    *(int *)(this + 0x30) = param_1;
    pvVar3 = operator_new__(uVar6);
    memset(pvVar3,0,uVar6);
    *(void **)(this + 0x28) = pvVar3;
    __s = operator_new__(uVar6);
    memset(__s,0,uVar6);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    *(void **)(this + 0x38) = __s;
    uVar8 = (uVar10 + (long)param_1 * 2) * 8;
    uVar6 = uVar8 + 8;
    if (SUB168(auVar2 * ZEXT816(0x18),8) != 0 || 0xfffffffffffffff7 < uVar8) {
      uVar6 = 0xffffffffffffffff;
    }
    puVar4 = operator_new__(uVar6);
    *puVar4 = uVar10;
    if (param_1 != 0) {
      memset(puVar4 + 1,0,((uVar8 - 0x18) / 0x18) * 0x18 + 0x18);
    }
    *(ulong **)(this + 0x48) = puVar4 + 1;
    glGenBuffers(param_1,pvVar3);
    if (0 < param_1) {
      lVar7 = 0;
      uVar6 = 0;
      do {
        lVar11 = uVar6 * 4;
        *(undefined4 *)(*(long *)(this + 0x38) + lVar11) = uVar9;
        glBindBuffer(0x8893,*(undefined4 *)(*(long *)(this + 0x28) + lVar11));
        lVar5 = 2;
        if (*(int *)(this + 0x34) != 0) {
          lVar5 = 4;
        }
        glBufferData(0x8893,lVar5 * *(int *)(*(long *)(this + 0x38) + lVar11),0,
                     *(undefined4 *)(this + 0x50));
        glBindBuffer(0x8893,0);
        if (_enableShadowCopy != '\0') {
          this_00 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)
                    (*(long *)(this + 0x48) + lVar7);
          lVar5 = 2;
          if (*(int *)(this + 0x34) != 0) {
            lVar5 = 4;
          }
          uVar10 = lVar5 * *(int *)(*(long *)(this + 0x38) + uVar6 * 4);
          uVar8 = *(long *)(this_00 + 8) - *(long *)this_00;
          if (uVar8 < uVar10) {
            std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                      (this_00,uVar10 - uVar8);
          }
          else if (uVar10 < uVar8) {
            *(ulong *)(this_00 + 8) = *(long *)this_00 + uVar10;
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x18;
      } while ((uint)param_1 != uVar6);
    }
  }
  return;
}

