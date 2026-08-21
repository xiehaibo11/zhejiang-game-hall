
/* _Cocos2dAttachmentLoader_dispose(spAttachmentLoader*) */

void _Cocos2dAttachmentLoader_dispose(spAttachmentLoader *param_1)

{
  spAttachmentLoader_dispose(*(undefined8 *)(param_1 + 0x18));
  _spAttachmentLoader_deinit(param_1);
  return;
}

