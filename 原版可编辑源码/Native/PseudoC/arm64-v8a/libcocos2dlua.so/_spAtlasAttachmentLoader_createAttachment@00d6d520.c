
long _spAtlasAttachmentLoader_createAttachment
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  switch(param_3) {
  case 0:
    lVar2 = spAtlas_findRegion(*(undefined8 *)(param_1 + 0x18),param_5);
    if (lVar2 != 0) {
      lVar1 = spRegionAttachment_create(param_4);
      *(long *)(lVar1 + 0x58) = lVar2;
      spRegionAttachment_setUVs
                (*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                 *(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),lVar1,
                 *(undefined4 *)(lVar2 + 0x3c));
      *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(lVar2 + 0x10);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x30);
      return lVar1;
    }
    break;
  case 1:
                    /* try { // try from 00d6d660 to 00e6d663 has its CatchHandler @ 00d6d744 */
    lVar2 = spBoundingBoxAttachment_create(param_4);
    return lVar2;
  case 2:
  case 3:
    lVar2 = spAtlas_findRegion(*(undefined8 *)(param_1 + 0x18),param_5);
    if (lVar2 != 0) {
      lVar1 = spMeshAttachment_create(param_4);
      *(long *)(lVar1 + 0x48) = lVar2;
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar1 + 0x68) = uVar3;
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar2 + 0x3c);
      *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(lVar2 + 0x28);
      *(undefined4 *)(lVar1 + 0x54) = *(undefined4 *)(lVar2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x58) = *(undefined4 *)(lVar2 + 0x10);
      *(undefined4 *)(lVar1 + 0x5c) = *(undefined4 *)(lVar2 + 0x14);
      *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(lVar2 + 0x30);
      *(undefined4 *)(lVar1 + 100) = *(undefined4 *)(lVar2 + 0x34);
      return lVar1;
    }
    break;
  case 4:
    lVar2 = spPathAttachment_create(param_4);
    return lVar2;
  case 5:
    lVar2 = spPointAttachment_create(param_4);
    return lVar2;
  case 6:
                    /* try { // try from 00d6d6a0 to 00e6d6a3 has its CatchHandler @ 00d6d730 */
    lVar2 = spClippingAttachment_create(param_4);
    return lVar2;
  default:
    _spAttachmentLoader_setUnknownTypeError(param_1,param_3);
    return 0;
  }
  _spAttachmentLoader_setError(param_1,"Region not found: ",param_5);
  return 0;
}

