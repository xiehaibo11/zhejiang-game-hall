
void spAttachmentLoader_createAttachment
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  _spFree((void *)*param_1);
  _spFree((void *)param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00d5e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1[2])(param_1,param_2,param_3,param_4,param_5);
  return;
}

