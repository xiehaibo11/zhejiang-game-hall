
/* spine::PathAttachment::copy() */

VertexAttachment * __thiscall spine::PathAttachment::copy(PathAttachment *this)

{
  VertexAttachment *this_00;
  String *pSVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  
  this_00 = SpineObject::operator_new
                      (0xa8,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/PathAttachment.cpp"
                       ,0x40);
  pSVar1 = (String *)Attachment::getName((Attachment *)this);
  VertexAttachment::VertexAttachment(this_00,pSVar1);
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined2 *)(this_00 + 0xa0) = 0;
  *(undefined ***)this_00 = &PTR__PathAttachment_01c8ef68;
  *(undefined ***)(this_00 + 0x80) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this_00 + 0x88) = 0;
  VertexAttachment::copyTo((VertexAttachment *)this,this_00);
  *(undefined8 *)(this_00 + 0x88) = 0;
  uVar10 = *(ulong *)(this + 0x88);
  if (*(ulong *)(this_00 + 0x90) < uVar10) {
    uVar9 = *(undefined8 *)(this_00 + 0x98);
    *(ulong *)(this_00 + 0x90) = uVar10;
    plVar2 = (long *)SpineExtension::getInstance();
    uVar9 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,uVar9,uVar10 << 2,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(this_00 + 0x98) = uVar9;
    uVar10 = *(ulong *)(this + 0x88);
  }
  if (uVar10 != 0) {
    uVar10 = 0;
    uVar4 = *(ulong *)(this_00 + 0x88);
    do {
      lVar6 = *(long *)(this + 0x98);
      if (uVar4 == *(ulong *)(this_00 + 0x90)) {
        uVar3 = (uint)((float)uVar4 * 1.75);
        uVar11 = *(undefined4 *)(lVar6 + uVar10 * 4);
        uVar9 = *(undefined8 *)(this_00 + 0x98);
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        *(long *)(this_00 + 0x90) = (long)(int)uVar3;
        plVar2 = (long *)SpineExtension::getInstance();
        lVar6 = (**(code **)(*plVar2 + 0x20))
                          (plVar2,uVar9,
                           -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this_00 + 0x88);
        *(long *)(this_00 + 0x98) = lVar6;
        uVar5 = lVar7 + 1;
        *(ulong *)(this_00 + 0x88) = uVar5;
        puVar8 = (undefined4 *)(lVar6 + lVar7 * 4);
      }
      else {
        uVar5 = uVar4 + 1;
        *(ulong *)(this_00 + 0x88) = uVar5;
        uVar11 = *(undefined4 *)(lVar6 + uVar10 * 4);
        puVar8 = (undefined4 *)(*(long *)(this_00 + 0x98) + uVar4 * 4);
      }
      *puVar8 = uVar11;
      uVar10 = uVar10 + 1;
      uVar4 = uVar5;
    } while (uVar10 < *(ulong *)(this + 0x88));
  }
  *(PathAttachment *)(this_00 + 0xa0) = this[0xa0];
  *(PathAttachment *)(this_00 + 0xa1) = this[0xa1];
  return this_00;
}

