
/* v8::internal::wasm::StreamingDecoder::DecodeFunctionLength::NextWithValue(v8::internal::wasm::StreamingDecoder*)
    */

void v8::internal::wasm::StreamingDecoder::DecodeFunctionLength::NextWithValue
               (StreamingDecoder *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  void *__src;
  long *plVar4;
  undefined8 *puVar5;
  long *in_x1;
  undefined8 *in_x8;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_d8;
  int local_88 [2];
  byte local_80;
  undefined7 local_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  char *local_70;
  undefined7 local_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)(param_1 + 0x40);
  if ((ulong)(*(long *)(*(long *)(param_1 + 0x38) + 0x18) - lVar9) < *(ulong *)(param_1 + 0x30)) {
    local_70 = operator_new(0x20);
    builtin_strncpy(local_70,"read past code section end",0x1b);
    uStack_78 = 0x1a;
    local_88[0] = *(int *)((long)in_x1 + 0x2c) + -1;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    __src = (void *)(**(code **)(*(long *)param_1 + 0x20))();
    memcpy((void *)(lVar7 + lVar9),__src,*(size_t *)(param_1 + 0x30));
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) {
      local_70 = operator_new(0x20);
      builtin_strncpy(local_70,"invalid function length (0)",0x1c);
      uStack_78 = 0x1b;
      local_88[0] = *(int *)((long)in_x1 + 0x2c) + -1;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x30);
      lVar1 = *(long *)(param_1 + 0x38);
      lVar8 = *(long *)(param_1 + 0x40);
      if ((ulong)(lVar7 + lVar8 + lVar9) <= *(ulong *)(lVar1 + 0x18)) {
        uVar2 = *(undefined4 *)((long)in_x1 + 0x2c);
        puVar5 = operator_new(0x38);
        uVar6 = *(undefined8 *)(param_1 + 0x48);
        puVar5[2] = lVar1;
        puVar5[3] = lVar7 + lVar8;
        *(undefined4 *)(puVar5 + 6) = uVar2;
        puVar5[4] = lVar9;
        puVar5[5] = uVar6;
        *puVar5 = &PTR__DecodingState_01cca220;
        puVar5[1] = 0;
        *in_x8 = puVar5;
        goto LAB_015fd954;
      }
      local_70 = operator_new(0x20);
      uStack_d8 = 0x1d;
      builtin_strncpy(local_70,"not enough code section bytes",0x1e);
      local_88[0] = *(int *)((long)in_x1 + 0x2c) + -1;
      uStack_78 = uStack_d8;
    }
  }
  uStack_77 = 0;
  local_80 = 0x21;
  local_68 = 0;
  local_7f = 0;
  uStack_61 = 0;
  uStack_60 = 0;
  plVar4 = (long *)*in_x1;
  if (plVar4 == (long *)0x0) {
    *in_x1 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x40))(plVar4,local_88);
    plVar4 = (long *)*in_x1;
    *in_x1 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  *in_x8 = 0;
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
LAB_015fd954:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

