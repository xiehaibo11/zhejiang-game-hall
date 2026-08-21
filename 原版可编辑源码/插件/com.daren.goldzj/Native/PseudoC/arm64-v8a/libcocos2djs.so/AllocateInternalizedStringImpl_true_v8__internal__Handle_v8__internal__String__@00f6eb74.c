
/* v8::internal::Handle<v8::internal::String>
   v8::internal::Factory::AllocateInternalizedStringImpl<true,
   v8::internal::Handle<v8::internal::String> >(v8::internal::Handle<v8::internal::String>, int,
   unsigned int) */

ulong * __thiscall
v8::internal::Factory::
AllocateInternalizedStringImpl<true,v8::internal::Handle<v8::internal::String>>
          (Factory *this,undefined8 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(this + 0x108);
  uVar4 = 4;
  if (*(char *)(*(long *)(this + 0x8970) + 0xe8) != '\0') {
    uVar4 = 1;
  }
  uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath
                    ((Heap *)(this + 0x8850),param_3 + 0xfU & 0xfffffffc,uVar4,1,0);
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
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
    uVar2 = *puVar3;
  }
  *(int *)(uVar2 + 7) = param_3;
  *(undefined4 *)(*puVar3 + 3) = param_4;
  String::WriteToFlat<unsigned_char>(*param_2,*puVar3 + 0xb,0,param_3);
  return puVar3;
}

