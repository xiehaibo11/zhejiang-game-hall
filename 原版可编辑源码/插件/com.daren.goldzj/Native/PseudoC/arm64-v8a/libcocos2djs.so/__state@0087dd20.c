
/* std::__ndk1::__state<char>::__state(std::__ndk1::__state<char> const&) */

void __thiscall std::__ndk1::__state<char>::__state(__state<char> *this,__state *param_1)

{
  ulong uVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined8 *)this = uVar4;
  *(undefined8 *)(this + 0x18) = uVar7;
  *(undefined8 *)(this + 0x10) = uVar6;
  *(undefined8 *)(this + 0x20) = 0;
  uVar1 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
  if (uVar1 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar1 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    pvVar2 = operator_new(uVar1);
    *(void **)(this + 0x20) = pvVar2;
    *(void **)(this + 0x28) = pvVar2;
    *(void **)(this + 0x30) = (void *)((long)pvVar2 + ((long)uVar1 >> 3) * 8);
    sVar3 = *(long *)(param_1 + 0x28) - (long)*(void **)(param_1 + 0x20);
    if (0 < (long)sVar3) {
      memcpy(pvVar2,*(void **)(param_1 + 0x20),sVar3);
      *(void **)(this + 0x28) = (void *)((long)pvVar2 + (sVar3 / 0x18) * 0x18);
    }
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  uVar1 = *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38);
  if (uVar1 != 0) {
    if ((ulong)((long)uVar1 >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    pvVar2 = operator_new(uVar1);
    *(void **)(this + 0x38) = pvVar2;
    *(void **)(this + 0x40) = pvVar2;
    *(void **)(this + 0x48) = (void *)((long)pvVar2 + ((long)uVar1 >> 4) * 0x10);
    sVar3 = *(long *)(param_1 + 0x40) - (long)*(void **)(param_1 + 0x38);
    if (0 < (long)sVar3) {
      memcpy(pvVar2,*(void **)(param_1 + 0x38),sVar3);
      *(size_t *)(this + 0x40) = (long)pvVar2 + sVar3;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x55) = *(undefined8 *)(param_1 + 0x55);
  *(undefined8 *)(this + 0x50) = uVar4;
  return;
}

