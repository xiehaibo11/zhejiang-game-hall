
/* v8::internal::Accessors::FunctionPrototypeGetter(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void v8::internal::Accessors::FunctionPrototypeGetter(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  CanonicalHandleScope *this;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  Isolate *pIVar10;
  ulong *puVar11;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pIVar10 = *(Isolate **)(*param_2 + 0x10);
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(pIVar10 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x84);
  }
  uVar2 = *(undefined8 *)(pIVar10 + 0x95a0);
  lVar3 = *(long *)(pIVar10 + 0x95a8);
  *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + 1;
  puVar11 = (ulong *)(*param_2 + 8);
  uVar7 = *puVar11;
  uVar6 = uVar7 & 0xffffffff00000000;
  uVar9 = uVar6 | 9;
  puVar8 = (uint *)(uVar7 - 1);
  if ((((*(byte *)(uVar9 + *(uint *)(uVar7 - 1)) & 1) == 0) &&
      (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar6 + *(uint *)(uVar7 + 0x1b) + -1)) != 0xa2)) &&
     (*(uint *)(uVar7 + 0x1b) == *(uint *)(uVar6 + 0xa8))) {
    uVar5 = Factory::NewFunctionPrototype((Factory *)pIVar10,puVar11);
    JSFunction::SetPrototype(puVar11,uVar5);
    uVar7 = *puVar11;
    uVar6 = uVar7 & 0xffffffff00000000;
    puVar8 = (uint *)(uVar7 - 1);
    uVar9 = uVar6 | 9;
  }
  if ((*(byte *)(uVar9 + *(uint *)(uVar7 - 1)) & 1) == 0) {
    uVar7 = uVar6 | *(uint *)(uVar7 + 0x1b);
    if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0xa2) {
      uVar7 = uVar6 | *(uint *)(uVar7 + 0xf);
      this = *(CanonicalHandleScope **)(pIVar10 + 0x95b8);
      goto joined_r0x00eda46c;
    }
  }
  else {
    uVar4 = *(uint *)((uVar6 | 0x13) + (ulong)*puVar8);
    uVar7 = uVar6 | uVar4;
    if ((uVar4 & 1) != 0) {
      do {
        if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa2) break;
        puVar8 = (uint *)(uVar7 + 0x13);
        uVar7 = uVar6 | *puVar8;
      } while ((*puVar8 & 1) != 0);
    }
  }
  this = *(CanonicalHandleScope **)(pIVar10 + 0x95b8);
joined_r0x00eda46c:
  if (this == (CanonicalHandleScope *)0x0) {
    puVar11 = *(ulong **)(pIVar10 + 0x95a0);
    if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
      puVar11 = (ulong *)HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
    *puVar11 = uVar7;
  }
  else {
    puVar11 = (ulong *)CanonicalHandleScope::Lookup(this,uVar7);
  }
  puVar1 = (ulong *)(*param_2 + 0x18);
  if (puVar11 != (ulong *)0x0) {
    puVar1 = puVar11;
  }
  *(ulong *)(*param_2 + 0x20) = *puVar1;
  *(undefined8 *)(pIVar10 + 0x95a0) = uVar2;
  *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + -1;
  if (*(long *)(pIVar10 + 0x95a8) != lVar3) {
    *(long *)(pIVar10 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(pIVar10);
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return;
}

