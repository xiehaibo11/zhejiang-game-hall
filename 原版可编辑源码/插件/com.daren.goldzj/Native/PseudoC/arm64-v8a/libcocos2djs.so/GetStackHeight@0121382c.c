
/* v8::internal::wasm::InterpretedFrame::GetStackHeight() const */

int __thiscall v8::internal::wasm::InterpretedFrame::GetStackHeight(InterpretedFrame *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = *(long *)this;
  lVar2 = (long)*(int *)(this + 8);
  lVar1 = *(long *)(lVar6 + 0x38);
  if (lVar2 + 1 == (*(long *)(lVar6 + 0x40) - lVar1 >> 3) * -0x5555555555555555) {
    iVar5 = ((int)*(undefined8 *)(lVar6 + 0x28) - (int)*(undefined8 *)(lVar6 + 0x18)) * -0xf0f0f0f;
  }
  else {
    iVar5 = (int)*(undefined8 *)(lVar1 + lVar2 * 0x18 + 0x28);
  }
  plVar3 = (long *)(lVar1 + lVar2 * 0x18);
  puVar4 = (undefined8 *)*plVar3;
  return (iVar5 - (int)plVar3[2]) +
         (*(int *)(puVar4 + 2) - (*(int *)(puVar4 + 3) + *(int *)(*(long *)*puVar4 + 8)));
}

