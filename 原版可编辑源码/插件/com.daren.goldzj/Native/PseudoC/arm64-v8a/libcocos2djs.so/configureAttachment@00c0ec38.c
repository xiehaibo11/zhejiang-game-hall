
/* spine::Cocos2dAtlasAttachmentLoader::configureAttachment(spine::Attachment*) */

void __thiscall
spine::Cocos2dAtlasAttachmentLoader::configureAttachment
          (Cocos2dAtlasAttachmentLoader *this,Attachment *param_1)

{
  RTTI *pRVar1;
  ulong uVar2;
  AttachmentVertices *pAVar3;
  long lVar4;
  long lVar5;
  Attachment *pAVar6;
  Texture2D *pTVar7;
  ulong uVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  
  pRVar1 = (RTTI *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
  uVar2 = RTTI::isExactly(pRVar1,(RTTI *)RegionAttachment::rtti);
  if ((uVar2 & 1) == 0) {
    pRVar1 = (RTTI *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
    uVar2 = RTTI::isExactly(pRVar1,(RTTI *)MeshAttachment::rtti);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x88);
    pAVar3 = operator_new(0x18);
    pTVar7 = *(Texture2D **)(*(long *)(lVar4 + 8) + 0x10);
    uVar2 = VertexAttachment::getWorldVerticesLength((VertexAttachment *)param_1);
    lVar4 = MeshAttachment::getTriangles((MeshAttachment *)param_1);
    puVar9 = *(ushort **)(lVar4 + 0x18);
    lVar4 = MeshAttachment::getTriangles((MeshAttachment *)param_1);
    AttachmentVertices::AttachmentVertices
              (pAVar3,pTVar7,(int)(uVar2 >> 1),puVar9,*(int *)(lVar4 + 8));
    lVar4 = **(long **)(pAVar3 + 0x10);
    uVar2 = VertexAttachment::getWorldVerticesLength((VertexAttachment *)param_1);
    if (uVar2 != 0) {
      uVar8 = 0;
      puVar10 = (undefined4 *)(lVar4 + 0xc);
      do {
        lVar4 = MeshAttachment::getUVs((MeshAttachment *)param_1);
        lVar5 = uVar8 * 4;
        puVar10[-1] = *(undefined4 *)(*(long *)(lVar4 + 0x18) + lVar5);
        lVar4 = MeshAttachment::getUVs((MeshAttachment *)param_1);
        uVar8 = uVar8 + 2;
        *puVar10 = *(undefined4 *)(*(long *)(lVar4 + 0x18) + lVar5 + 4);
        puVar10 = puVar10 + 5;
      } while (uVar8 < uVar2);
    }
    pAVar6 = param_1 + 0x90;
    if (((*(code **)pAVar6 != (code *)0x0) &&
        (*(AttachmentVertices **)(param_1 + 0x88) != (AttachmentVertices *)0x0)) &&
       (*(AttachmentVertices **)(param_1 + 0x88) != pAVar3)) {
      (**(code **)pAVar6)();
    }
    *(AttachmentVertices **)(param_1 + 0x88) = pAVar3;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x30);
    pAVar3 = operator_new(0x18);
    AttachmentVertices::AttachmentVertices
              (pAVar3,*(Texture2D **)(*(long *)(lVar4 + 8) + 0x10),4,(ushort *)&DAT_01d289d0,6);
    lVar5 = **(long **)(pAVar3 + 0x10);
    lVar4 = RegionAttachment::getUVs((RegionAttachment *)param_1);
    *(undefined4 *)(lVar5 + 8) = **(undefined4 **)(lVar4 + 0x18);
    lVar4 = RegionAttachment::getUVs((RegionAttachment *)param_1);
    *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 4);
    lVar4 = RegionAttachment::getUVs((RegionAttachment *)param_1);
    *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 8);
    lVar4 = RegionAttachment::getUVs((RegionAttachment *)param_1);
    *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0xc);
    lVar4 = RegionAttachment::getUVs((RegionAttachment *)param_1);
    *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x10);
    lVar4 = RegionAttachment::getUVs((RegionAttachment *)param_1);
    *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x14);
    lVar4 = RegionAttachment::getUVs((RegionAttachment *)param_1);
    *(undefined4 *)(lVar5 + 0x44) = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x18);
    lVar4 = RegionAttachment::getUVs((RegionAttachment *)param_1);
    *(undefined4 *)(lVar5 + 0x48) = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x1c);
    pAVar6 = param_1 + 0x38;
    if (((*(code **)pAVar6 != (code *)0x0) &&
        (*(AttachmentVertices **)(param_1 + 0x30) != (AttachmentVertices *)0x0)) &&
       (*(AttachmentVertices **)(param_1 + 0x30) != pAVar3)) {
      (**(code **)pAVar6)();
    }
    *(AttachmentVertices **)(param_1 + 0x30) = pAVar3;
  }
  *(code **)pAVar6 = FUN_00c0f2c4;
  return;
}

