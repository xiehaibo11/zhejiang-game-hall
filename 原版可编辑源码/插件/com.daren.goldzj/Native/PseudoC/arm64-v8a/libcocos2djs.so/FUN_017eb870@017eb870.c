
void FUN_017eb870(long param_1,char *param_2,char *param_3)

{
  char cVar1;
  long lVar2;
  undefined1 local_40;
  int local_3f;
  int iStack_3b;
  undefined4 uStack_37;
  undefined4 uStack_33;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*param_2 == '\x01') {
    FUN_017ec5ac(param_1,param_2[4],param_3,*(undefined4 *)(param_3 + 8));
  }
  else if (*param_2 == '\0') {
    cVar1 = *param_3;
    if (cVar1 == '\x02') {
      local_3f = *(int *)(param_3 + 4);
      if (param_3[1] == '\x01') {
        iStack_3b = 0;
        local_40 = 1;
      }
      else {
        iStack_3b = local_3f >> 0x1f;
        local_40 = 2;
      }
      uStack_33 = 0;
      uStack_37 = 0;
      v8::internal::wasm::LiftoffAssembler::Spill
                (*(LiftoffAssembler **)(param_1 + 0x350),*(undefined4 *)(param_2 + 8),&local_40);
    }
    else if (cVar1 == '\x01') {
      v8::internal::wasm::LiftoffAssembler::Spill
                (*(LiftoffAssembler **)(param_1 + 0x350),*(undefined4 *)(param_2 + 8),param_3[4],
                 param_3[1]);
    }
    else if (cVar1 == '\0') {
      if (*(int *)(param_3 + 8) != *(int *)(param_2 + 8)) {
        v8::internal::wasm::LiftoffAssembler::MoveStackValue
                  (*(LiftoffAssembler **)(param_1 + 0x350),*(int *)(param_2 + 8),
                   *(int *)(param_3 + 8),param_3[1]);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

