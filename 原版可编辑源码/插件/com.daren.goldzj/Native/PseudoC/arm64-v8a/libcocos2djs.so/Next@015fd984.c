
/* v8::internal::wasm::StreamingDecoder::DecodeFunctionBody::Next(v8::internal::wasm::StreamingDecoder*)
    */

void v8::internal::wasm::StreamingDecoder::DecodeFunctionBody::Next(StreamingDecoder *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *in_x1;
  undefined8 *in_x8;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [12];
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
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  auVar10 = (**(code **)(*(long *)param_1 + 0x20))();
  plVar5 = (long *)*in_x1;
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x28))
                      (plVar5,auVar10._0_8_,(long)auVar10._8_4_,*(undefined4 *)(param_1 + 0x30));
    if ((uVar6 & 1) == 0) {
      plVar5 = (long *)*in_x1;
      *in_x1 = 0;
      if (plVar5 == (long *)0x0) goto LAB_015fda60;
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = (long *)*in_x1;
    if (plVar5 != (long *)0x0) {
      lVar1 = *(long *)(param_1 + 0x18);
      lVar2 = *(long *)(param_1 + 0x20);
      lVar9 = *(long *)(param_1 + 0x28);
      if (lVar9 == 0) {
        if (lVar2 + lVar1 != *(long *)(*(long *)(param_1 + 0x10) + 0x18)) {
          local_70 = operator_new(0x30);
          builtin_strncpy(local_70,"not all code section bytes were used",0x25);
          local_80 = 0x31;
          local_88[0] = *(int *)((long)in_x1 + 0x2c) + -1;
          local_68 = 0;
          local_7f = 0;
          uStack_78 = 0x24;
          uStack_77 = 0;
          uStack_61 = 0;
          uStack_60 = 0;
          (**(code **)(*plVar5 + 0x40))(plVar5,local_88);
          plVar5 = (long *)*in_x1;
          *in_x1 = 0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 8))();
          }
          *in_x8 = 0;
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          goto LAB_015fdaa0;
        }
        uVar3 = *(undefined4 *)((long)in_x1 + 0x2c);
        puVar7 = operator_new(0x18);
        *(undefined1 *)(puVar7 + 2) = 0;
        *(undefined4 *)((long)puVar7 + 0x14) = uVar3;
        *puVar7 = &PTR__DecodingState_01cca0c8;
        puVar7[1] = 0;
      }
      else {
        puVar7 = operator_new(0x50);
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[3] = 0x74cbb1;
        puVar7[4] = "body size";
        puVar7[8] = lVar2 + lVar1;
        puVar7[9] = lVar9 + -1;
        puVar7[7] = uVar8;
        *puVar7 = &PTR__DecodingState_01cca1d8;
        puVar7[1] = 0;
      }
      *in_x8 = puVar7;
      goto LAB_015fdaa0;
    }
  }
LAB_015fda60:
  *in_x8 = 0;
LAB_015fdaa0:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

