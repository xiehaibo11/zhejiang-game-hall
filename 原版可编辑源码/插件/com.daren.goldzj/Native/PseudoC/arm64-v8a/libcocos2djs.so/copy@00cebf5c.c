
/* spine::MeshAttachment::copy() */

VertexAttachment * __thiscall spine::MeshAttachment::copy(MeshAttachment *this)

{
  undefined2 uVar1;
  float fVar2;
  undefined4 uVar3;
  VertexAttachment *this_00;
  String *pSVar4;
  long lVar5;
  long *plVar6;
  void *__dest;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  
  if (*(long *)(this + 0xb0) == 0) {
    this_00 = SpineObject::operator_new
                        (400,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/MeshAttachment.cpp"
                         ,0x12a);
    pSVar4 = (String *)Attachment::getName((Attachment *)this);
    VertexAttachment::VertexAttachment(this_00,pSVar4);
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined8 *)(this_00 + 0x88) = 0;
    *(undefined ***)this_00 = &PTR__MeshAttachment_01c8eee0;
    *(undefined ***)(this_00 + 0x80) = &PTR__MeshAttachment_01c8ef10;
    *(undefined ***)(this_00 + 0x138) = &PTR__String_01c67868;
    *(undefined8 *)(this_00 + 0xb0) = 0;
    *(undefined8 *)(this_00 + 0xa8) = 0;
    *(undefined8 *)(this_00 + 0xa0) = 0;
    *(undefined8 *)(this_00 + 0x98) = 0;
    *(undefined8 *)(this_00 + 0x148) = 0;
    *(undefined8 *)(this_00 + 0x140) = 0;
    *(undefined8 *)(this_00 + 0x158) = 0;
    *(undefined8 *)(this_00 + 0x150) = 0;
    auVar15 = NEON_fmov(0x3f800000,4);
    *(long *)(this_00 + 0x178) = auVar15._8_8_;
    *(long *)(this_00 + 0x170) = auVar15._0_8_;
    *(undefined8 *)(this_00 + 200) = 0;
    *(undefined8 *)(this_00 + 0xd0) = 0;
    *(undefined8 *)(this_00 + 0xe8) = 0;
    *(undefined8 *)(this_00 + 0xf0) = 0;
    *(undefined8 *)(this_00 + 0x108) = 0;
    *(undefined8 *)(this_00 + 0x110) = 0;
    *(undefined8 *)(this_00 + 0x128) = 0;
    *(undefined8 *)(this_00 + 0x130) = 0;
    *(undefined ***)(this_00 + 0xb8) = &PTR__Vector_01c8d048;
    *(undefined8 *)(this_00 + 0xc0) = 0;
    *(undefined ***)(this_00 + 0xd8) = &PTR__Vector_01c8d048;
    *(undefined8 *)(this_00 + 0xe0) = 0;
    *(undefined ***)(this_00 + 0xf8) = &PTR__Vector_01c8d128;
    *(undefined8 *)(this_00 + 0x100) = 0;
    *(undefined ***)(this_00 + 0x118) = &PTR__Vector_01c8d128;
    *(undefined8 *)(this_00 + 0x120) = 0;
    *(undefined8 *)(this_00 + 0x160) = 0;
    *(undefined ***)(this_00 + 0x168) = &PTR__SpineObject_01c8eb68;
    uVar14 = MathUtil::clamp(1.0,0.0,1.0);
    *(undefined4 *)(this_00 + 0x170) = uVar14;
    uVar14 = MathUtil::clamp(*(float *)(this_00 + 0x174),0.0,1.0);
    *(undefined4 *)(this_00 + 0x174) = uVar14;
    uVar14 = MathUtil::clamp(*(float *)(this_00 + 0x178),0.0,1.0);
    *(undefined4 *)(this_00 + 0x178) = uVar14;
    uVar14 = MathUtil::clamp(*(float *)(this_00 + 0x17c),0.0,1.0);
    *(undefined4 *)(this_00 + 0x17c) = uVar14;
    *(undefined4 *)(this_00 + 0x180) = 0;
    this_00[0x184] = (VertexAttachment)0x0;
    *(undefined4 *)(this_00 + 0x188) = 0;
    lVar13 = *(long *)(this + 0x88);
    if (((*(code **)(this_00 + 0x90) != (code *)0x0) &&
        (lVar5 = *(long *)(this_00 + 0x88), lVar5 != 0)) && (lVar5 != lVar13)) {
      (**(code **)(this_00 + 0x90))();
    }
    *(long *)(this_00 + 0x88) = lVar13;
    *(undefined8 *)(this_00 + 0x90) = 0;
    uVar11 = *(undefined8 *)(this + 0x150);
    *(undefined8 *)(this_00 + 0x158) = *(undefined8 *)(this + 0x158);
    *(undefined8 *)(this_00 + 0x150) = uVar11;
    *(MeshAttachment *)(this_00 + 0x184) = this[0x184];
    *(undefined4 *)(this_00 + 0x188) = *(undefined4 *)(this + 0x188);
    uVar11 = *(undefined8 *)(this + 0x98);
    *(undefined8 *)(this_00 + 0xa0) = *(undefined8 *)(this + 0xa0);
    *(undefined8 *)(this_00 + 0x98) = uVar11;
    *(undefined4 *)(this_00 + 0xa8) = *(undefined4 *)(this + 0xa8);
    *(undefined4 *)(this_00 + 0xac) = *(undefined4 *)(this + 0xac);
    if (this + 0x138 != (MeshAttachment *)(this_00 + 0x138)) {
      lVar13 = *(long *)(this_00 + 0x148);
      if (lVar13 != 0) {
        plVar6 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar6 + 0x28))
                  (plVar6,lVar13,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0x7a);
      }
      if (*(long *)(this + 0x148) == 0) {
        *(undefined8 *)(this_00 + 0x140) = 0;
        *(undefined8 *)(this_00 + 0x148) = 0;
      }
      else {
        *(undefined8 *)(this_00 + 0x140) = *(undefined8 *)(this + 0x140);
        lVar13 = *(long *)(this + 0x140);
        plVar6 = (long *)SpineExtension::getInstance();
        __dest = (void *)(**(code **)(*plVar6 + 0x18))
                                   (plVar6,lVar13 + 1,
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                    ,0x81);
        *(void **)(this_00 + 0x148) = __dest;
        memcpy(__dest,*(void **)(this + 0x148),*(long *)(this + 0x140) + 1);
      }
    }
    fVar2 = *(float *)(this + 0x170);
    uVar14 = *(undefined4 *)(this + 0x174);
    uVar3 = *(undefined4 *)(this + 0x17c);
    *(undefined4 *)(this_00 + 0x178) = *(undefined4 *)(this + 0x178);
    *(undefined4 *)(this_00 + 0x17c) = uVar3;
    *(float *)(this_00 + 0x170) = fVar2;
    *(undefined4 *)(this_00 + 0x174) = uVar14;
    uVar14 = MathUtil::clamp(fVar2,0.0,1.0);
    *(undefined4 *)(this_00 + 0x170) = uVar14;
    uVar14 = MathUtil::clamp(*(float *)(this_00 + 0x174),0.0,1.0);
    *(undefined4 *)(this_00 + 0x174) = uVar14;
    uVar14 = MathUtil::clamp(*(float *)(this_00 + 0x178),0.0,1.0);
    *(undefined4 *)(this_00 + 0x178) = uVar14;
    uVar14 = MathUtil::clamp(*(float *)(this_00 + 0x17c),0.0,1.0);
    *(undefined4 *)(this_00 + 0x17c) = uVar14;
    VertexAttachment::copyTo((VertexAttachment *)this,this_00);
    *(undefined8 *)(this_00 + 0xe0) = 0;
    uVar12 = *(ulong *)(this + 0xe0);
    if (*(ulong *)(this_00 + 0xe8) < uVar12) {
      uVar11 = *(undefined8 *)(this_00 + 0xf0);
      *(ulong *)(this_00 + 0xe8) = uVar12;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar11 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar11,uVar12 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(this_00 + 0xf0) = uVar11;
      uVar12 = *(ulong *)(this + 0xe0);
    }
    if (uVar12 != 0) {
      uVar12 = 0;
      uVar8 = *(ulong *)(this_00 + 0xe0);
      do {
        lVar13 = *(long *)(this + 0xf0);
        if (uVar8 == *(ulong *)(this_00 + 0xe8)) {
          uVar7 = (uint)((float)uVar8 * 1.75);
          uVar14 = *(undefined4 *)(lVar13 + uVar12 * 4);
          uVar11 = *(undefined8 *)(this_00 + 0xf0);
          if (uVar7 < 9) {
            uVar7 = 8;
          }
          *(long *)(this_00 + 0xe8) = (long)(int)uVar7;
          plVar6 = (long *)SpineExtension::getInstance();
          lVar13 = (**(code **)(*plVar6 + 0x20))
                             (plVar6,uVar11,
                              -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar5 = *(long *)(this_00 + 0xe0);
          *(long *)(this_00 + 0xf0) = lVar13;
          uVar9 = lVar5 + 1;
          *(ulong *)(this_00 + 0xe0) = uVar9;
          puVar10 = (undefined4 *)(lVar13 + lVar5 * 4);
        }
        else {
          uVar9 = uVar8 + 1;
          *(ulong *)(this_00 + 0xe0) = uVar9;
          uVar14 = *(undefined4 *)(lVar13 + uVar12 * 4);
          puVar10 = (undefined4 *)(*(long *)(this_00 + 0xf0) + uVar8 * 4);
        }
        *puVar10 = uVar14;
        uVar12 = uVar12 + 1;
        uVar8 = uVar9;
      } while (uVar12 < *(ulong *)(this + 0xe0));
    }
    *(undefined8 *)(this_00 + 0xc0) = 0;
    uVar12 = *(ulong *)(this + 0xc0);
    if (*(ulong *)(this_00 + 200) < uVar12) {
      uVar11 = *(undefined8 *)(this_00 + 0xd0);
      *(ulong *)(this_00 + 200) = uVar12;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar11 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar11,uVar12 << 2,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(this_00 + 0xd0) = uVar11;
      uVar12 = *(ulong *)(this + 0xc0);
    }
    if (uVar12 != 0) {
      uVar12 = 0;
      uVar8 = *(ulong *)(this_00 + 0xc0);
      do {
        lVar13 = *(long *)(this + 0xd0);
        if (uVar8 == *(ulong *)(this_00 + 200)) {
          uVar7 = (uint)((float)uVar8 * 1.75);
          uVar14 = *(undefined4 *)(lVar13 + uVar12 * 4);
          uVar11 = *(undefined8 *)(this_00 + 0xd0);
          if (uVar7 < 9) {
            uVar7 = 8;
          }
          *(long *)(this_00 + 200) = (long)(int)uVar7;
          plVar6 = (long *)SpineExtension::getInstance();
          lVar13 = (**(code **)(*plVar6 + 0x20))
                             (plVar6,uVar11,
                              -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar5 = *(long *)(this_00 + 0xc0);
          *(long *)(this_00 + 0xd0) = lVar13;
          uVar9 = lVar5 + 1;
          *(ulong *)(this_00 + 0xc0) = uVar9;
          puVar10 = (undefined4 *)(lVar13 + lVar5 * 4);
        }
        else {
          uVar9 = uVar8 + 1;
          *(ulong *)(this_00 + 0xc0) = uVar9;
          uVar14 = *(undefined4 *)(lVar13 + uVar12 * 4);
          puVar10 = (undefined4 *)(*(long *)(this_00 + 0xd0) + uVar8 * 4);
        }
        *puVar10 = uVar14;
        uVar12 = uVar12 + 1;
        uVar8 = uVar9;
      } while (uVar12 < *(ulong *)(this + 0xc0));
    }
    *(undefined8 *)(this_00 + 0x100) = 0;
    uVar12 = *(ulong *)(this + 0x100);
    if (*(ulong *)(this_00 + 0x108) < uVar12) {
      uVar11 = *(undefined8 *)(this_00 + 0x110);
      *(ulong *)(this_00 + 0x108) = uVar12;
      plVar6 = (long *)SpineExtension::getInstance();
      uVar11 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,uVar11,uVar12 << 1,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0x5e);
      *(undefined8 *)(this_00 + 0x110) = uVar11;
      uVar12 = *(ulong *)(this + 0x100);
    }
    if (uVar12 != 0) {
      uVar12 = 0;
      uVar8 = *(ulong *)(this_00 + 0x100);
      do {
        lVar13 = *(long *)(this + 0x110);
        if (uVar8 == *(ulong *)(this_00 + 0x108)) {
          uVar7 = (uint)((float)uVar8 * 1.75);
          uVar1 = *(undefined2 *)(lVar13 + uVar12 * 2);
          uVar11 = *(undefined8 *)(this_00 + 0x110);
          if (uVar7 < 9) {
            uVar7 = 8;
          }
          *(long *)(this_00 + 0x108) = (long)(int)uVar7;
          plVar6 = (long *)SpineExtension::getInstance();
          lVar13 = (**(code **)(*plVar6 + 0x20))
                             (plVar6,uVar11,
                              -(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar7 << 1,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                              ,0x6a);
          lVar5 = *(long *)(this_00 + 0x100);
          *(long *)(this_00 + 0x110) = lVar13;
          uVar9 = lVar5 + 1;
          *(ulong *)(this_00 + 0x100) = uVar9;
          *(undefined2 *)(lVar13 + lVar5 * 2) = uVar1;
        }
        else {
          uVar9 = uVar8 + 1;
          *(ulong *)(this_00 + 0x100) = uVar9;
          *(undefined2 *)(*(long *)(this_00 + 0x110) + uVar8 * 2) =
               *(undefined2 *)(lVar13 + uVar12 * 2);
        }
        uVar12 = uVar12 + 1;
        uVar8 = uVar9;
      } while (uVar12 < *(ulong *)(this + 0x100));
    }
    uVar14 = *(undefined4 *)(this + 0x180);
    *(undefined8 *)(this_00 + 0x120) = 0;
    *(undefined4 *)(this_00 + 0x180) = uVar14;
    *(undefined8 *)(this_00 + 0x160) = *(undefined8 *)(this + 0x160);
  }
  else {
    this_00 = (VertexAttachment *)newLinkedMesh(this);
  }
  return this_00;
}

