
/* v8::internal::wasm::ThreadImpl::InitLocals(v8::internal::wasm::InterpreterCode*) */

void __thiscall
v8::internal::wasm::ThreadImpl::InitLocals(ThreadImpl *this,InterpreterCode *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined1 local_90;
  StackValue local_80;
  undefined7 uStack_7f;
  byte bStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined1 **)(param_1 + 0x10);
  puVar1 = *(undefined1 **)(param_1 + 0x18);
  if (puVar4 != puVar1) {
    do {
      switch(*puVar4) {
      case 1:
        local_80 = (StackValue)0x1;
        break;
      case 2:
        local_80 = (StackValue)0x2;
        break;
      case 3:
        local_80 = (StackValue)0x3;
        break;
      case 4:
        local_80 = (StackValue)0x4;
        break;
      case 5:
        local_80 = (StackValue)0x5;
        break;
      case 6:
      case 7:
      case 9:
        local_80 = (StackValue)0x6;
        uStack_77 = 0;
        uStack_70 = 0;
        uStack_7f = (undefined7)(*(long *)(this + 8) + 0xb0);
        bStack_78 = (byte)((ulong)(*(long *)(this + 8) + 0xb0) >> 0x38);
        uStack_b8 = (ulong)bStack_78;
        local_c0 = CONCAT71(uStack_7f,6);
        goto LAB_01213fac;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      *(undefined8 *)((ulong)&local_80 | 1) = 0;
      ((undefined8 *)((ulong)&local_80 | 1))[1] = 0;
      uStack_b8 = CONCAT71(uStack_77,bStack_78);
      local_c0 = CONCAT71(uStack_7f,local_80);
LAB_01213fac:
      uStack_98 = uStack_b8;
      local_a0 = local_c0;
      local_90 = uStack_70;
      StackValue::StackValue
                (&local_80,&local_a0,this,
                 (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
      puVar3 = *(undefined8 **)(this + 0x28);
      puVar4 = puVar4 + 1;
      *(long *)(this + 0x28) = (long)puVar3 + 0x11;
      *(undefined1 *)(puVar3 + 2) = uStack_70;
      puVar3[1] = CONCAT71(uStack_77,bStack_78);
      *puVar3 = CONCAT71(uStack_7f,local_80);
    } while (puVar1 != puVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(param_1 + 8));
}

