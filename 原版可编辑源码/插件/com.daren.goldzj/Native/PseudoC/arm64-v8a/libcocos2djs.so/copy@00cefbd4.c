
/* spine::RegionAttachment::copy() */

RegionAttachment * __thiscall spine::RegionAttachment::copy(RegionAttachment *this)

{
  RegionAttachment *this_00;
  String *pSVar1;
  long *plVar2;
  void *__dest;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  
  this_00 = SpineObject::operator_new
                      (0xf8,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/RegionAttachment.cpp"
                       ,0x11f);
  pSVar1 = (String *)Attachment::getName((Attachment *)this);
  RegionAttachment(this_00,pSVar1);
  uVar9 = *(undefined8 *)(this + 0x5c);
  *(undefined8 *)(this_00 + 100) = *(undefined8 *)(this + 100);
  *(undefined8 *)(this_00 + 0x5c) = uVar9;
  *(undefined4 *)(this_00 + 0x6c) = *(undefined4 *)(this + 0x6c);
  *(undefined4 *)(this_00 + 0x70) = *(undefined4 *)(this + 0x70);
  lVar8 = *(long *)(this + 0x30);
  if (((*(code **)(this_00 + 0x38) != (code *)0x0) && (*(long *)(this_00 + 0x30) != 0)) &&
     (*(long *)(this_00 + 0x30) != lVar8)) {
    (**(code **)(this_00 + 0x38))();
  }
  *(long *)(this_00 + 0x30) = lVar8;
  *(undefined8 *)(this_00 + 0x38) = 0;
  if (this != this_00) {
    lVar8 = *(long *)(this_00 + 200);
    if (lVar8 != 0) {
      plVar2 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar2 + 0x28))
                (plVar2,lVar8,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0x7a);
    }
    if (*(long *)(this + 200) == 0) {
      *(undefined8 *)(this_00 + 0xc0) = 0;
      *(undefined8 *)(this_00 + 200) = 0;
    }
    else {
      *(undefined8 *)(this_00 + 0xc0) = *(undefined8 *)(this + 0xc0);
      lVar8 = *(long *)(this + 0xc0);
      plVar2 = (long *)SpineExtension::getInstance();
      __dest = (void *)(**(code **)(*plVar2 + 0x18))
                                 (plVar2,lVar8 + 1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x81);
      *(void **)(this_00 + 200) = __dest;
      memcpy(__dest,*(void **)(this + 200),*(long *)(this + 0xc0) + 1);
    }
  }
  *(undefined4 *)(this_00 + 0x50) = *(undefined4 *)(this + 0x50);
  uVar9 = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this_00 + 0x48) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(this_00 + 0x40) = uVar9;
  *(undefined4 *)(this_00 + 0x54) = *(undefined4 *)(this + 0x54);
  uVar11 = *(undefined4 *)(this + 0x58);
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined4 *)(this_00 + 0x58) = uVar11;
  uVar10 = *(ulong *)(this + 0xa0);
  if (*(ulong *)(this_00 + 0xa8) < uVar10) {
    uVar9 = *(undefined8 *)(this_00 + 0xb0);
    *(ulong *)(this_00 + 0xa8) = uVar10;
    plVar2 = (long *)SpineExtension::getInstance();
    uVar9 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,uVar9,uVar10 << 2,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(this_00 + 0xb0) = uVar9;
    uVar10 = *(ulong *)(this + 0xa0);
  }
  if (uVar10 != 0) {
    uVar10 = 0;
    uVar4 = *(ulong *)(this_00 + 0xa0);
    do {
      lVar8 = *(long *)(this + 0xb0);
      if (uVar4 == *(ulong *)(this_00 + 0xa8)) {
        uVar3 = (uint)((float)uVar4 * 1.75);
        uVar11 = *(undefined4 *)(lVar8 + uVar10 * 4);
        uVar9 = *(undefined8 *)(this_00 + 0xb0);
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        *(long *)(this_00 + 0xa8) = (long)(int)uVar3;
        plVar2 = (long *)SpineExtension::getInstance();
        lVar8 = (**(code **)(*plVar2 + 0x20))
                          (plVar2,uVar9,
                           -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar6 = *(long *)(this_00 + 0xa0);
        *(long *)(this_00 + 0xb0) = lVar8;
        uVar5 = lVar6 + 1;
        *(ulong *)(this_00 + 0xa0) = uVar5;
        puVar7 = (undefined4 *)(lVar8 + lVar6 * 4);
      }
      else {
        uVar5 = uVar4 + 1;
        *(ulong *)(this_00 + 0xa0) = uVar5;
        uVar11 = *(undefined4 *)(lVar8 + uVar10 * 4);
        puVar7 = (undefined4 *)(*(long *)(this_00 + 0xb0) + uVar4 * 4);
      }
      *puVar7 = uVar11;
      uVar10 = uVar10 + 1;
      uVar4 = uVar5;
    } while (uVar10 < *(ulong *)(this + 0xa0));
  }
  *(undefined8 *)(this_00 + 0x80) = 0;
  uVar10 = *(ulong *)(this + 0x80);
  if (*(ulong *)(this_00 + 0x88) < uVar10) {
    uVar9 = *(undefined8 *)(this_00 + 0x90);
    *(ulong *)(this_00 + 0x88) = uVar10;
    plVar2 = (long *)SpineExtension::getInstance();
    uVar9 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,uVar9,uVar10 << 2,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(this_00 + 0x90) = uVar9;
    uVar10 = *(ulong *)(this + 0x80);
  }
  if (uVar10 != 0) {
    uVar10 = 0;
    uVar4 = *(ulong *)(this_00 + 0x80);
    do {
      lVar8 = *(long *)(this + 0x90);
      if (uVar4 == *(ulong *)(this_00 + 0x88)) {
        uVar3 = (uint)((float)uVar4 * 1.75);
        uVar11 = *(undefined4 *)(lVar8 + uVar10 * 4);
        uVar9 = *(undefined8 *)(this_00 + 0x90);
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        *(long *)(this_00 + 0x88) = (long)(int)uVar3;
        plVar2 = (long *)SpineExtension::getInstance();
        lVar8 = (**(code **)(*plVar2 + 0x20))
                          (plVar2,uVar9,
                           -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar6 = *(long *)(this_00 + 0x80);
        *(long *)(this_00 + 0x90) = lVar8;
        uVar5 = lVar6 + 1;
        *(ulong *)(this_00 + 0x80) = uVar5;
        puVar7 = (undefined4 *)(lVar8 + lVar6 * 4);
      }
      else {
        uVar5 = uVar4 + 1;
        *(ulong *)(this_00 + 0x80) = uVar5;
        uVar11 = *(undefined4 *)(lVar8 + uVar10 * 4);
        puVar7 = (undefined4 *)(*(long *)(this_00 + 0x90) + uVar4 * 4);
      }
      *puVar7 = uVar11;
      uVar10 = uVar10 + 1;
      uVar4 = uVar5;
    } while (uVar10 < *(ulong *)(this + 0x80));
  }
  uVar9 = *(undefined8 *)(this + 0xe8);
  *(undefined8 *)(this_00 + 0xf0) = *(undefined8 *)(this + 0xf0);
  *(undefined8 *)(this_00 + 0xe8) = uVar9;
  uVar11 = MathUtil::clamp((float)uVar9,0.0,1.0);
  *(undefined4 *)(this_00 + 0xe8) = uVar11;
  uVar11 = MathUtil::clamp(*(float *)(this_00 + 0xec),0.0,1.0);
  *(undefined4 *)(this_00 + 0xec) = uVar11;
  uVar11 = MathUtil::clamp(*(float *)(this_00 + 0xf0),0.0,1.0);
  *(undefined4 *)(this_00 + 0xf0) = uVar11;
  uVar11 = MathUtil::clamp(*(float *)(this_00 + 0xf4),0.0,1.0);
  *(undefined4 *)(this_00 + 0xf4) = uVar11;
  return this_00;
}

