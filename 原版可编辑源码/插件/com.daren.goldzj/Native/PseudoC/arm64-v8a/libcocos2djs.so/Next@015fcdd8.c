
/* v8::internal::wasm::StreamingDecoder::DecodeSectionID::Next(v8::internal::wasm::StreamingDecoder*)
    */

void v8::internal::wasm::StreamingDecoder::DecodeSectionID::Next(StreamingDecoder *param_1)

{
  undefined4 uVar1;
  StreamingDecoder SVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *in_x1;
  undefined8 *in_x8;
  int local_68 [2];
  byte local_60;
  undefined7 local_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  char *local_50;
  undefined7 local_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1[0x10] == (StreamingDecoder)0xa) {
    if ((char)in_x1[5] != '\0') {
      local_50 = operator_new(0x30);
      builtin_strncpy(local_50,"code section can only appear once",0x22);
      local_60 = 0x31;
      local_68[0] = *(int *)((long)in_x1 + 0x2c) + -1;
      local_48 = 0;
      local_5f = 0;
      uStack_58 = 0x21;
      uStack_57 = 0;
      uStack_41 = 0;
      uStack_40 = 0;
      plVar4 = (long *)*in_x1;
      if (plVar4 == (long *)0x0) {
        *in_x1 = 0;
      }
      else {
        (**(code **)(*plVar4 + 0x40))(plVar4,local_68);
        plVar4 = (long *)*in_x1;
        *in_x1 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      *in_x8 = 0;
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      goto LAB_015fcf08;
    }
    *(undefined1 *)(in_x1 + 5) = 1;
  }
  puVar5 = operator_new(0x40);
  SVar2 = param_1[0x10];
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[3] = 0x40000000;
  puVar5[4] = "section length";
  *(StreamingDecoder *)(puVar5 + 7) = SVar2;
  *(undefined4 *)((long)puVar5 + 0x3c) = uVar1;
  *in_x8 = puVar5;
  *puVar5 = &PTR__DecodingState_01cca108;
  puVar5[1] = 0;
LAB_015fcf08:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

