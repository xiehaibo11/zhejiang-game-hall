
/* v8::internal::Factory::AllocateRawOneByteInternalizedString(int, unsigned int) */

void __thiscall
v8::internal::Factory::AllocateRawOneByteInternalizedString(Factory *this,int param_1,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined4 uVar4;
  
  if (param_1 < 0xffffff1) {
    uVar1 = *(undefined4 *)(this + 0x108);
    uVar4 = 4;
    if (*(char *)(*(long *)(this + 0x8970) + 0xe8) != '\0') {
      uVar4 = 1;
    }
    uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath
                      ((Heap *)(this + 0x8850),param_1 + 0xfU & 0xfffffffc,uVar4,1,0);
    *(undefined4 *)(uVar2 - 1) = uVar1;
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(this + 0x95a0);
      if (puVar3 == *(ulong **)(this + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)(this + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar2;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
      uVar2 = *puVar3;
    }
    *(int *)(uVar2 + 7) = param_1;
    *(uint *)(*puVar3 + 3) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","String::kMaxLength >= length");
}

