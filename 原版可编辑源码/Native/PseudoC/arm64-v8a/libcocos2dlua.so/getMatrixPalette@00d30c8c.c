
/* cocos2d::MeshSkin::getMatrixPalette() */

undefined8 __thiscall cocos2d::MeshSkin::getMatrixPalette(MeshSkin *this)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong *puVar5;
  Mat4 *pMVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong *puVar11;
  undefined8 *puVar10;
  
  if (*(long *)(this + 0x68) == 0) {
    lVar7 = *(long *)(this + 0x30) - *(long *)(this + 0x28);
    uVar1 = (lVar7 >> 3) + (lVar7 >> 2);
    uVar2 = uVar1 * 0x10 | 8;
    if (uVar1 >> 0x3c != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    puVar5 = operator_new__(uVar2,(nothrow_t *)&std::nothrow);
    if (puVar5 == (ulong *)0x0) {
      puVar11 = (ulong *)0x0;
    }
    else {
      puVar11 = puVar5 + 1;
      *puVar5 = uVar1;
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
          Vec4::Vec4((Vec4 *)((long)puVar5 + lVar8 + 8));
          lVar8 = lVar8 + 0x10;
        } while ((lVar7 >> 3) * 0x30 - lVar8 != 0);
      }
    }
    *(ulong **)(this + 0x68) = puVar11;
  }
  if (((DAT_017874e0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_017874e0), iVar4 != 0)) {
    Mat4::Mat4((Mat4 *)&DAT_017874a0);
    __cxa_atexit(Mat4::~Mat4,&DAT_017874a0,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_017874e0);
  }
  puVar3 = *(undefined8 **)(this + 0x30);
  if (*(undefined8 **)(this + 0x28) != puVar3) {
    lVar7 = 0;
    lVar8 = 0x10;
    puVar9 = *(undefined8 **)(this + 0x28);
    do {
      puVar10 = puVar9 + 1;
      pMVar6 = (Mat4 *)Bone3D::getWorldMat((Bone3D *)*puVar9);
      Mat4::multiply(pMVar6,(Mat4 *)(*(long *)(this + 0x40) + lVar7),(Mat4 *)&DAT_017874a0);
      Vec4::set((Vec4 *)(*(long *)(this + 0x68) + lVar8 + -0x10),DAT_017874a0,DAT_017874b0,
                DAT_017874c0,DAT_017874d0);
      Vec4::set((Vec4 *)(*(long *)(this + 0x68) + lVar8),DAT_017874a4,DAT_017874b4,DAT_017874c4,
                DAT_017874d4);
      Vec4::set((Vec4 *)(*(long *)(this + 0x68) + lVar8 + 0x10),DAT_017874a8,DAT_017874b8,
                DAT_017874c8,DAT_017874d8);
      lVar7 = lVar7 + 0x40;
      lVar8 = lVar8 + 0x30;
      puVar9 = puVar10;
    } while (puVar3 != puVar10);
  }
  return *(undefined8 *)(this + 0x68);
}

