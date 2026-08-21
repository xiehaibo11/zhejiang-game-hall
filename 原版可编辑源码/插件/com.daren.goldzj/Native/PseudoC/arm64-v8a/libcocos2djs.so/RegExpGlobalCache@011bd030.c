
/* v8::internal::RegExpGlobalCache::RegExpGlobalCache(v8::internal::Handle<v8::internal::JSRegExp>,
   v8::internal::Handle<v8::internal::String>, v8::internal::Isolate*) */

void __thiscall
v8::internal::RegExpGlobalCache::RegExpGlobalCache
          (RegExpGlobalCache *this,undefined8 *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_38;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 **)(this + 0x20) = param_2;
  *(undefined8 *)(this + 0x28) = param_3;
  *(long *)(this + 0x30) = param_4;
  local_38 = *param_2;
  uVar2 = JSRegExp::ShouldProduceBytecode((JSRegExp *)&local_38);
  uVar5 = **(ulong **)(this + 0x20);
  uVar1 = *(uint *)(uVar5 + 0xb);
  uVar5 = uVar5 & 0xffffffff00000000;
  if ((((uVar1 & 1) == 0) || (uVar1 != *(uint *)(uVar5 + 0xa0))) &&
     ((*(uint *)((uVar5 | uVar1) + 7) & 0xfffffffe) == 2)) {
    *(undefined4 *)(this + 0xc) = 2;
    uVar1 = 0x80;
    uVar6 = 2;
  }
  else {
    uVar1 = RegExp::IrregexpPrepare
                      (*(undefined8 *)(this + 0x30),*(ulong **)(this + 0x20),
                       *(undefined8 *)(this + 0x28));
    *(uint *)(this + 0xc) = uVar1;
    if ((int)uVar1 < 0) {
      *(undefined4 *)this = 0xffffffff;
      return;
    }
    uVar6 = uVar1;
    if ((uVar2 & 1) != 0) {
      uVar7 = 1;
      *(uint *)(this + 0x18) = uVar1;
      goto LAB_011bd0fc;
    }
    if ((int)uVar1 < 0x81) {
      uVar1 = 0x80;
    }
  }
  *(uint *)(this + 0x18) = uVar1;
  uVar7 = 0;
  if (uVar6 != 0) {
    uVar7 = uVar1 / uVar6;
  }
LAB_011bd0fc:
  *(uint *)(this + 4) = uVar7;
  if ((int)uVar1 < 0x81) {
    pvVar3 = (void *)(param_4 + 0xb82c);
  }
  else {
    pvVar3 = operator_new__((ulong)uVar1 << 2,(nothrow_t *)&std::nothrow);
    if (pvVar3 == (void *)0x0) {
      plVar4 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar4 + 0x18))();
      pvVar3 = operator_new__((ulong)uVar1 << 2,(nothrow_t *)&std::nothrow);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
      uVar7 = *(uint *)(this + 4);
      uVar6 = *(uint *)(this + 0xc);
    }
  }
  *(uint *)(this + 8) = uVar7 - 1;
  uVar6 = uVar6 * (uVar7 - 1);
  *(void **)(this + 0x10) = pvVar3;
  *(uint *)this = uVar7;
  *(undefined8 *)((long)pvVar3 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2))
       = 0xffffffff;
  return;
}

