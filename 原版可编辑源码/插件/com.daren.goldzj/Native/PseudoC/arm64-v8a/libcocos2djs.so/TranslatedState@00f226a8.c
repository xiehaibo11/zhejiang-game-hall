
/* v8::internal::TranslatedState::TranslatedState(v8::internal::JavaScriptFrame const*) */

void __thiscall
v8::internal::TranslatedState::TranslatedState(TranslatedState *this,JavaScriptFrame *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_5c;
  ulong local_58;
  int local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  local_5c = -1;
  uVar3 = OptimizedFrame::GetDeoptimizationData((OptimizedFrame *)param_1,&local_5c);
  local_58 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 7);
  local_50 = *(int *)(uVar3 + 7 + (long)(local_5c * 0xc + 0x28)) >> 1;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(uint *)(uVar3 + 0xf);
  uVar4 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
  Init(this,uVar5,uVar6,&local_58,uVar3 & 0xffffffff00000000 | (ulong)uVar1,0,0,
       *(undefined2 *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x15));
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

