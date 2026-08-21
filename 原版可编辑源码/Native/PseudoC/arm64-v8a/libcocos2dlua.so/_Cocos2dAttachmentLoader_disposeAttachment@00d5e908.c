
/* _Cocos2dAttachmentLoader_disposeAttachment(spAttachmentLoader*, spAttachment*) */

spAttachmentLoader *
_Cocos2dAttachmentLoader_disposeAttachment(spAttachmentLoader *param_1,spAttachment *param_2)

{
  long *plVar1;
  spAttachmentLoader *psVar2;
  
  if (*(int *)(param_2 + 8) == 2) {
    plVar1 = *(long **)(param_2 + 0x48);
  }
  else {
    if (*(int *)(param_2 + 8) != 0) {
      return param_1;
    }
    plVar1 = *(long **)(param_2 + 0x58);
  }
  if (plVar1 == (long *)0x0) {
    return (spAttachmentLoader *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00d5e928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  psVar2 = (spAttachmentLoader *)(**(code **)(*plVar1 + 8))();
  return psVar2;
}

