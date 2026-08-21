
/* v8::internal::wasm::StreamingDecoder::Finish() */

void __thiscall v8::internal::wasm::StreamingDecoder::Finish(StreamingDecoder *this)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *local_b0;
  ulong uStack_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 local_90;
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
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)this;
  if (plVar2 != (long *)0x0) {
    if (*(long *)(this + 0x90) != 0) {
      uVar4 = *(undefined8 *)(this + 0x70);
      lVar5 = (long)(*(int *)(this + 0x78) - (int)uVar4);
      uVar3 = (**(code **)(*plVar2 + 0x50))
                        (plVar2,*(undefined8 *)(this + 0x88),*(long *)(this + 0x90),uVar4,lVar5);
      if ((uVar3 & 1) != 0) goto LAB_015fc578;
      *(undefined8 *)(this + 0x88) = 0;
      *(undefined8 *)(this + 0x90) = 0;
      OnBytesReceived(this,uVar4,lVar5);
    }
    uVar3 = (**(code **)(**(long **)(this + 8) + 0x28))();
    if ((uVar3 & 1) == 0) {
      local_70 = operator_new(0x20);
      builtin_strncpy(local_70,"unexpected end of stream",0x19);
      local_80 = 0x21;
      local_88[0] = *(int *)(this + 0x2c) + -1;
      uStack_98 = 0;
      uStack_97 = 0;
      local_a0 = 0;
      uStack_9f = 0;
      local_90 = 0;
      local_68 = 0;
      local_7f = 0;
      uStack_78 = 0x18;
      uStack_77 = 0;
      uStack_61 = 0;
      uStack_60 = 0;
      plVar2 = *(long **)this;
      if (plVar2 == (long *)0x0) {
        *(undefined8 *)this = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x40))(plVar2,local_88);
        plVar2 = *(long **)this;
        *(undefined8 *)this = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if ((local_80 & 1) == 0) goto LAB_015fc578;
      }
      operator_delete(local_70);
    }
    else {
      uVar3 = *(ulong *)(this + 0x30);
      if (uVar3 == 0) {
        local_b0 = (undefined8 *)0x0;
      }
      else {
        local_b0 = operator_new__(uVar3);
      }
      *local_b0 = 0x16d736100;
      plVar2 = *(long **)(this + 0x18);
      if (*(long **)(this + 0x10) != plVar2) {
        puVar6 = local_b0 + 1;
        plVar7 = *(long **)(this + 0x10);
        do {
          memcpy(puVar6,*(void **)(*plVar7 + 0x10),*(size_t *)(*plVar7 + 0x18));
          plVar8 = plVar7 + 2;
          puVar6 = (undefined8 *)((long)puVar6 + *(long *)(*plVar7 + 0x18));
          plVar7 = plVar8;
        } while (plVar2 != plVar8);
      }
      uStack_a8 = uVar3;
      (**(code **)(**(long **)this + 0x38))(*(long **)this,&local_b0);
      puVar6 = local_b0;
      local_b0 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        operator_delete__(puVar6);
      }
    }
  }
LAB_015fc578:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

