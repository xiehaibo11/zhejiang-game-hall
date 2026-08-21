
/* v8::internal::CreateElementDictionary(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSObject>) */

long v8::internal::CreateElementDictionary(long param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  
  uVar2 = *param_2;
  uVar4 = uVar2 & 0xffffffff00000000;
  uVar3 = uVar4 | 10;
  if ((byte)((*(byte *)(uVar3 + *(uint *)(uVar2 - 1)) >> 3) - 0x11) < 0xb) {
    return 0;
  }
  if ((*(byte *)(uVar3 + *(uint *)(uVar2 - 1)) & 0xf8) == 0x60) {
    return 0;
  }
  if ((*(byte *)(uVar3 + *(uint *)(uVar2 - 1)) & 0xf8) == 0x80) {
    return 0;
  }
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x423) {
    puVar5 = (uint *)(uVar2 + 0xb);
  }
  else {
    puVar5 = (uint *)((uVar4 | *(uint *)(uVar2 + 7)) + 3);
  }
  if (*puVar5 < 2) {
    return param_1 + 1000;
  }
                    /* WARNING: Could not recover jumptable at 0x010d8070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(**(long **)(ElementsAccessor::elements_accessors_ +
                                  ((ulong)*(byte *)(uVar3 + *(uint *)(uVar2 - 1)) & 0xf8)) + 0xb0))
                    ();
  return lVar1;
}

