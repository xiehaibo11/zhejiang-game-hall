
/* v8::internal::wasm::StreamingDecoder::DecodeSectionLength::NextWithValue(v8::internal::wasm::StreamingDecoder*)
    */

void v8::internal::wasm::StreamingDecoder::DecodeSectionLength::NextWithValue
               (StreamingDecoder *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long *in_x1;
  undefined8 *in_x8;
  int iVar7;
  undefined *puVar8;
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
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_1 + 0x20))();
  lVar3 = CreateNewBuffer();
  if (*(long *)(param_1 + 0x28) == 0) {
    if (param_1[0x38] == (StreamingDecoder)0xa) {
      local_70 = operator_new(0x20);
      builtin_strncpy(local_70,"code section cannot have size 0",0x20);
      local_80 = 0x21;
      local_88[0] = *(int *)((long)in_x1 + 0x2c) + -1;
      local_68 = 0;
      local_7f = 0;
      uStack_78 = 0x1f;
      uStack_77 = 0;
      uStack_61 = 0;
      uStack_60 = 0;
      plVar5 = (long *)*in_x1;
      if (plVar5 == (long *)0x0) {
        *in_x1 = 0;
      }
      else {
        (**(code **)(*plVar5 + 0x40))(plVar5,local_88);
        plVar5 = (long *)*in_x1;
        *in_x1 = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      *in_x8 = 0;
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      goto LAB_015fd0cc;
    }
    plVar5 = (long *)*in_x1;
    if (plVar5 != (long *)0x0) {
      iVar7 = (int)*(long *)(lVar3 + 0x20);
      uVar6 = (**(code **)(*plVar5 + 0x18))
                        (plVar5,**(undefined1 **)(lVar3 + 0x10),
                         *(undefined1 **)(lVar3 + 0x10) + *(long *)(lVar3 + 0x20),
                         (long)(*(int *)(lVar3 + 0x18) - iVar7),*(int *)(lVar3 + 8) + iVar7);
      if ((uVar6 & 1) == 0) {
        plVar5 = (long *)*in_x1;
        *in_x1 = 0;
        if (plVar5 == (long *)0x0) goto LAB_015fd17c;
        (**(code **)(*plVar5 + 8))();
      }
      if (*in_x1 != 0) {
        puVar4 = operator_new(0x18);
        uVar1 = *(undefined4 *)((long)in_x1 + 0x2c);
        *(undefined1 *)(puVar4 + 2) = 0;
        *(undefined4 *)((long)puVar4 + 0x14) = uVar1;
        *puVar4 = &PTR__DecodingState_01cca0c8;
        puVar4[1] = 0;
        goto LAB_015fd0c8;
      }
    }
LAB_015fd17c:
    *in_x8 = 0;
  }
  else {
    if (param_1[0x38] != (StreamingDecoder)0xa) {
      puVar4 = operator_new(0x18);
      puVar8 = &DecodeSectionPayload::vtable;
      puVar4[2] = lVar3;
    }
    else {
      puVar4 = operator_new(0x40);
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar8 = &DecodeNumberOfFunctions::vtable;
      puVar4[7] = lVar3;
      puVar4[3] = 1000000;
      puVar4[4] = "functions count";
    }
    *puVar4 = puVar8 + 0x10;
    puVar4[1] = 0;
LAB_015fd0c8:
    *in_x8 = puVar4;
  }
LAB_015fd0cc:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

