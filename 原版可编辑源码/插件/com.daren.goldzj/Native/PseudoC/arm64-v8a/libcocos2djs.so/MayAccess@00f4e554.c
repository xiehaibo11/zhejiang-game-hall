
/* v8::internal::Isolate::MayAccess(v8::internal::Handle<v8::internal::Context>,
   v8::internal::Handle<v8::internal::JSObject>) */

uint __thiscall v8::internal::Isolate::MayAccess(Isolate *this,undefined8 *param_2,ulong *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  Logger *this_00;
  code *pcVar8;
  undefined8 local_48;
  
  if (*(int *)(*(long *)(this + 0x9508) + 8) == 0) {
    uVar7 = *param_3;
    uVar6 = uVar7 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar6 + *(uint *)(uVar7 - 1)) == 0xab) {
      uVar4 = *(uint *)(uVar7 + 0xb);
      if (((uVar4 & 1) == 0) ||
         (uVar7 = uVar7 & 0xffffffff00000000 | (ulong)uVar4,
         9 < *(ushort *)(uVar6 + *(uint *)(uVar7 - 1)) - 0x88)) {
        uVar4 = 0;
        goto LAB_00f4e588;
      }
      local_48 = *param_2;
      uVar6 = Context::global_object((Context *)&local_48);
      if ((uVar4 == *(uint *)(uVar6 + 0xb)) ||
         (*(int *)(uVar7 + 0x27b) ==
          *(int *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xb)) + 0x27b)))
      goto LAB_00f4e584;
    }
    uVar1 = *(undefined8 *)(this + 0x95a0);
    lVar2 = *(long *)(this + 0x95a8);
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
    uVar6 = AccessCheckInfo::Get(this,param_3);
    if ((int)uVar6 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(uint *)(uVar6 + 3) == 0) {
        pcVar8 = (code *)0x0;
      }
      else {
        pcVar8 = *(code **)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 3)) + 3);
      }
      uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xf);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(this + 0x95a0);
        if (puVar5 == *(ulong **)(this + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)(this + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar6;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
      }
      this_00 = *(Logger **)(this + 0x9558);
      uVar6 = Logger::is_logging(this_00);
      if ((uVar6 & 1) != 0) {
        Logger::ApiSecurityCheck(this_00);
      }
      uVar3 = *(undefined4 *)(this + 0x2c60);
      *(undefined4 *)(this + 0x2c60) = 6;
      uVar4 = (*pcVar8)(param_2,param_3,puVar5);
      *(undefined4 *)(this + 0x2c60) = uVar3;
    }
    *(undefined8 *)(this + 0x95a0) = uVar1;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar2) {
      *(long *)(this + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(this);
    }
  }
  else {
LAB_00f4e584:
    uVar4 = 1;
  }
LAB_00f4e588:
  return uVar4 & 1;
}

