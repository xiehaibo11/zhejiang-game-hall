
/* v8::internal::Factory::NewFeedbackMetadata(int, int, v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::NewFeedbackMetadata
          (Factory *this,int param_1,undefined4 param_2,uint param_4)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    uVar5 = 0xc;
  }
  else {
    uVar5 = ((param_1 + -1) / 6) * 4 + 0x10;
  }
  uVar6 = *(undefined8 *)(this + 0x1b0);
  if (((param_4 & 0xff) == 0) && ((int)uVar5 < 0x20001)) {
    lVar4 = *(long *)(this + 0x8938);
    lVar1 = *(long *)(lVar4 + 0x68);
    if (((ulong)uVar5 <= (ulong)(*(long *)(lVar4 + 0x70) - lVar1)) &&
       ((FLAG_inline_new != '\0' && (FLAG_gc_interval == 0)))) {
      uVar2 = lVar1 + 1;
      *(long *)(lVar4 + 0x68) = lVar1 + (int)uVar5;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,uVar5,1,1);
      goto LAB_00f6cfe0;
    }
  }
  uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar5,param_4,1,0);
LAB_00f6cfe0:
  *(int *)(uVar2 - 1) = (int)uVar6;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
    uVar2 = *puVar3;
  }
  *(int *)(uVar2 + 3) = param_1;
  *(undefined4 *)(*puVar3 + 7) = param_2;
  memset((void *)(*puVar3 + 0xb),0,(long)(int)(uVar5 - 0xc));
  return puVar3;
}

