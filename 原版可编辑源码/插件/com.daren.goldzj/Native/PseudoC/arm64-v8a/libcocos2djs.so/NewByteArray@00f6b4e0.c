
/* v8::internal::Factory::NewByteArray(int, v8::internal::AllocationType) */

ulong * __thiscall v8::internal::Factory::NewByteArray(Factory *this,uint param_1,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (0x1ffffff4 < param_1) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory((Heap *)(this + 0x8850),"invalid array length");
  }
  uVar9 = *(undefined8 *)(this + 0xd8);
  uVar2 = param_1 + 0xb & 0xfffffffc;
  uVar7 = (ulong)uVar2;
  if (((param_3 & 0xff) == 0) && ((int)uVar2 < 0x20001)) {
    lVar8 = *(long *)(this + 0x8938);
    lVar4 = *(long *)(lVar8 + 0x68);
    if ((uVar7 <= (ulong)(*(long *)(lVar8 + 0x70) - lVar4)) &&
       ((FLAG_inline_new != '\0' && (FLAG_gc_interval == 0)))) {
      uVar5 = lVar4 + 1;
      *(long *)(lVar8 + 0x68) = lVar4 + (int)uVar2;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar4,uVar7,1,1);
      goto LAB_00f6b5bc;
    }
  }
  uVar5 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar7,param_3,1,0);
LAB_00f6b5bc:
  *(int *)(uVar5 - 1) = (int)uVar9;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(this + 0x95a0);
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
    uVar5 = *puVar6;
  }
  *(uint *)(uVar5 + 3) = param_1 << 1;
  iVar3 = *(int *)(*puVar6 + 3) >> 1;
  iVar1 = iVar3 + 8;
  memset((void *)(*puVar6 + (long)iVar1 + -1),0,(long)(int)((iVar3 + 0xbU & 0xfffffffc) - iVar1));
  return puVar6;
}

