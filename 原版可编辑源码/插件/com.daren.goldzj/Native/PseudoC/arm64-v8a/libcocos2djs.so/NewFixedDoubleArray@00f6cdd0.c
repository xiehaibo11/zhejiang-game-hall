
/* v8::internal::Factory::NewFixedDoubleArray(int) */

Factory * __thiscall v8::internal::Factory::NewFixedDoubleArray(Factory *this,int param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  Factory *pFVar3;
  
  if (param_1 == 0) {
    pFVar3 = this + 0x168;
  }
  else {
    if (0x3fffffe < (uint)param_1) {
                    /* WARNING: Subroutine does not return */
      Heap::FatalProcessOutOfMemory((Heap *)(this + 0x8850),"invalid array length");
    }
    uVar1 = *(undefined4 *)(this + 0x1e8);
    uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),param_1 * 8 + 8,0,1,1);
    *(undefined4 *)(uVar2 - 1) = uVar1;
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pFVar3 = *(Factory **)(this + 0x95a0);
      if (pFVar3 == *(Factory **)(this + 0x95a8)) {
        pFVar3 = (Factory *)HandleScope::Extend((Isolate *)this);
      }
      *(Factory **)(this + 0x95a0) = pFVar3 + 8;
      *(ulong *)pFVar3 = uVar2;
    }
    else {
      pFVar3 = (Factory *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
      uVar2 = *(ulong *)pFVar3;
    }
    *(int *)(uVar2 + 3) = param_1 << 1;
  }
  return pFVar3;
}

