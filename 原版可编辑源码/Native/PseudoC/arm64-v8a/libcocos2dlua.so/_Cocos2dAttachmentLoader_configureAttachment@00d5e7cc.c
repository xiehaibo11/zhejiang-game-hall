
/* _Cocos2dAttachmentLoader_configureAttachment(spAttachmentLoader*, spAttachment*) */

void _Cocos2dAttachmentLoader_configureAttachment(spAttachmentLoader *param_1,spAttachment *param_2)

{
  AttachmentVertices *pAVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  
  *(spAttachmentLoader **)(param_2 + 0x18) = param_1;
  if (*(int *)(param_2 + 8) == 2) {
    lVar5 = *(long *)(param_2 + 0x48);
    pAVar1 = operator_new(0x18);
    spine::AttachmentVertices::AttachmentVertices
              (pAVar1,*(Texture2D **)(*(long *)(lVar5 + 0x58) + 0x28),*(int *)(param_2 + 0x40) >> 1,
               *(ushort **)(param_2 + 0xa0),*(int *)(param_2 + 0x98));
    if (0 < *(int *)(param_2 + 0x40)) {
      uVar2 = (ulong)((*(int *)(param_2 + 0x40) - 1U >> 1) + 1);
      puVar3 = (undefined4 *)(**(long **)(pAVar1 + 0x10) + 0x14);
      puVar4 = (undefined4 *)(*(long *)(param_2 + 0x90) + 4);
      do {
        uVar2 = uVar2 - 1;
        puVar3[-1] = puVar4[-1];
        *puVar3 = *puVar4;
        puVar3 = puVar3 + 6;
        puVar4 = puVar4 + 2;
      } while (uVar2 != 0);
    }
    *(AttachmentVertices **)(param_2 + 0x48) = pAVar1;
  }
  else if (*(int *)(param_2 + 8) == 0) {
    lVar5 = *(long *)(param_2 + 0x58);
    pAVar1 = operator_new(0x18);
    spine::AttachmentVertices::AttachmentVertices
              (pAVar1,*(Texture2D **)(*(long *)(lVar5 + 0x58) + 0x28),4,(ushort *)&DAT_01777080,6);
    lVar5 = **(long **)(pAVar1 + 0x10);
    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)(lVar5 + 0x44) = *(undefined4 *)(param_2 + 0xac);
    *(undefined4 *)(lVar5 + 0x58) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)(lVar5 + 0x5c) = *(undefined4 *)(param_2 + 0xb4);
    *(AttachmentVertices **)(param_2 + 0x58) = pAVar1;
  }
  return;
}

