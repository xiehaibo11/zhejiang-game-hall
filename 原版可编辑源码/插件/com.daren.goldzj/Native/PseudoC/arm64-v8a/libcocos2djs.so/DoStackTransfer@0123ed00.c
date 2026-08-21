
/* v8::internal::wasm::ThreadImpl::DoStackTransfer(unsigned int, unsigned long) */

void __thiscall
v8::internal::wasm::ThreadImpl::DoStackTransfer(ThreadImpl *this,uint param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(this + 0x18);
  lVar6 = (*(long *)(this + 0x28) - lVar4) * -0xf0f0f0f0f0f0f0f;
  lVar7 = lVar6 - (ulong)param_1;
  if ((param_2 != 0) && (param_1 != param_2)) {
    lVar6 = lVar6 - param_2;
    memmove((void *)(lVar4 + lVar7 * 0x11),(void *)(lVar4 + lVar6 * 0x11),param_2 * 0x11);
    if ((int)param_2 != 0) {
      uVar2 = **(ulong **)(this + 0x30) & 0xffffffff00000000 |
              (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3);
      lVar4 = uVar2 + 7;
      Heap::MoveRange((Heap *)(*(long *)(this + 8) + 0x8850),uVar2,lVar4 + ((int)lVar7 << 2),
                      lVar4 + ((int)lVar6 << 2),param_2 & 0xffffffff,4);
    }
  }
  lVar4 = *(long *)(this + 0x18);
  iVar5 = ((int)*(undefined8 *)(this + 0x28) - (int)lVar4) * -0xf0f0f0f;
  iVar3 = (int)(lVar7 + param_2);
  if (0 < iVar5 - iVar3) {
    lVar4 = (long)iVar5 - (long)iVar3;
    iVar3 = iVar3 << 2;
    uVar1 = *(uint *)(**(ulong **)(this + 0x30) + 3);
    uVar2 = **(ulong **)(this + 0x30) & 0xffffffff00000000;
    do {
      lVar4 = lVar4 + -1;
      *(undefined4 *)((uVar2 | uVar1) + 7 + (long)iVar3) = *(undefined4 *)(uVar2 + 0xa8);
      iVar3 = iVar3 + 4;
    } while (lVar4 != 0);
    lVar4 = *(long *)(this + 0x18);
  }
  *(ulong *)(this + 0x28) = lVar4 + (lVar7 + param_2) * 0x11;
  return;
}

