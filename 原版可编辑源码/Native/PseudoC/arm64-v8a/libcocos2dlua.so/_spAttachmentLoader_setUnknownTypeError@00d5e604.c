
void _spAttachmentLoader_setUnknownTypeError(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d5e668(auStack_38,param_2,param_3,param_2 & 0xffffffff);
  _spAttachmentLoader_setError(param_1,"Unknown attachment type: ",auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

