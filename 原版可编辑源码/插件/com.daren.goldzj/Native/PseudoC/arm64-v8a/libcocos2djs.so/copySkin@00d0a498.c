
/* spine::Skin::copySkin(spine::Skin*) */

void __thiscall spine::Skin::copySkin(Skin *this,Skin *param_1)

{
  long *plVar1;
  RTTI *this_00;
  Attachment *pAVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined8 uVar13;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar11 = 0;
    uVar4 = *(ulong *)(this + 0x50);
    do {
      lVar6 = *(long *)(param_1 + 0x60);
      if (uVar4 != 0) {
        uVar8 = 0;
        do {
          uVar10 = uVar4;
          if (*(long *)(*(long *)(this + 0x60) + uVar8 * 8) == *(long *)(lVar6 + uVar11 * 8))
          goto LAB_00d0a58c;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar4);
      }
      if (uVar4 == *(ulong *)(this + 0x58)) {
        uVar3 = (uint)((float)uVar4 * 1.75);
        uVar13 = *(undefined8 *)(lVar6 + uVar11 * 8);
        uVar9 = *(undefined8 *)(this + 0x60);
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        *(long *)(this + 0x58) = (long)(int)uVar3;
        plVar1 = (long *)SpineExtension::getInstance();
        lVar6 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,uVar9,
                           -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this + 0x50);
        *(long *)(this + 0x60) = lVar6;
        uVar10 = lVar7 + 1;
        *(ulong *)(this + 0x50) = uVar10;
        puVar5 = (undefined8 *)(lVar6 + lVar7 * 8);
      }
      else {
        uVar10 = uVar4 + 1;
        *(ulong *)(this + 0x50) = uVar10;
        uVar13 = *(undefined8 *)(lVar6 + uVar11 * 8);
        puVar5 = (undefined8 *)(*(long *)(this + 0x60) + uVar4 * 8);
      }
      *puVar5 = uVar13;
LAB_00d0a58c:
      uVar11 = uVar11 + 1;
      uVar4 = uVar10;
    } while (uVar11 < *(ulong *)(param_1 + 0x50));
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar11 = 0;
    do {
      uVar4 = *(ulong *)(this + 0x70);
      lVar6 = *(long *)(param_1 + 0x80);
      if (uVar4 != 0) {
        uVar8 = 0;
        do {
          if (*(long *)(*(long *)(this + 0x80) + uVar8 * 8) == *(long *)(lVar6 + uVar11 * 8))
          goto LAB_00d0a668;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar4);
      }
      if (uVar4 == *(ulong *)(this + 0x78)) {
        uVar3 = (uint)((float)uVar4 * 1.75);
        uVar13 = *(undefined8 *)(lVar6 + uVar11 * 8);
        uVar9 = *(undefined8 *)(this + 0x80);
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        *(long *)(this + 0x78) = (long)(int)uVar3;
        plVar1 = (long *)SpineExtension::getInstance();
        lVar6 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,uVar9,
                           -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this + 0x70);
        *(long *)(this + 0x80) = lVar6;
        *(long *)(this + 0x70) = lVar7 + 1;
        puVar5 = (undefined8 *)(lVar6 + lVar7 * 8);
      }
      else {
        *(ulong *)(this + 0x70) = uVar4 + 1;
        uVar13 = *(undefined8 *)(lVar6 + uVar11 * 8);
        puVar5 = (undefined8 *)(*(long *)(this + 0x80) + uVar4 * 8);
      }
      *puVar5 = uVar13;
LAB_00d0a668:
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ulong *)(param_1 + 0x70));
  }
  uVar11 = *(ulong *)(param_1 + 0x30);
  if (uVar11 != 0) {
    uVar8 = 0;
    uVar4 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_1 + 0x40) + uVar4 * 0x20 + 0x18);
      while ((ulong)plVar1[-2] <= uVar8) {
        uVar4 = uVar4 + 1;
        uVar8 = 0;
        plVar1 = plVar1 + 4;
        if (uVar11 <= uVar4) {
          return;
        }
      }
      puVar12 = (ulong *)(*plVar1 + uVar8 * 0x28);
      uVar8 = uVar8 + 1;
      this_00 = (RTTI *)(**(code **)(*(long *)puVar12[4] + 0x10))();
      uVar11 = RTTI::isExactly(this_00,(RTTI *)MeshAttachment::rtti);
      uVar10 = *puVar12;
      if ((uVar11 & 1) == 0) {
        pAVar2 = (Attachment *)(**(code **)(*(long *)puVar12[4] + 0x18))();
      }
      else {
        pAVar2 = (Attachment *)MeshAttachment::newLinkedMesh((MeshAttachment *)puVar12[4]);
      }
      AttachmentMap::put((AttachmentMap *)(this + 0x20),uVar10,(String *)(puVar12 + 1),pAVar2);
      uVar11 = *(ulong *)(param_1 + 0x30);
    } while (uVar4 < uVar11);
  }
  return;
}

