
/* v8::debug::GeneratorObject::SuspendedLocation() */

undefined1  [16] __thiscall v8::debug::GeneratorObject::SuspendedLocation(GeneratorObject *this)

{
  undefined4 uVar1;
  CanonicalHandleScope *pCVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  Isolate *pIVar7;
  undefined1 auVar8 [16];
  undefined8 local_58;
  ulong local_50 [2];
  
  uVar6 = *(ulong *)this;
  if (-1 < *(int *)(uVar6 + 0x1f)) {
    pIVar7 = (Isolate *)(uVar6 & 0xffffffff00000000);
    uVar6 = (ulong)pIVar7 |
            (ulong)*(uint *)(((ulong)pIVar7 |
                             (ulong)*(uint *)(((ulong)pIVar7 | (ulong)*(uint *)(uVar6 + 0xb)) + 0xb)
                             ) + 0xf);
    if (*(short *)(((ulong)pIVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x5b) {
      uVar6 = (ulong)pIVar7 | (ulong)*(uint *)(uVar6 + 0xb);
    }
    if (((uVar6 & 1) == 0) ||
       (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x65)) {
      local_50[0] = 0xffffffff00000000;
      uVar5 = 1;
      uVar6 = 0xffffffff;
    }
    else {
      pCVar2 = *(CanonicalHandleScope **)(pIVar7 + 0x95b8);
      if (pCVar2 == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar7 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
          puVar3 = (ulong *)internal::HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar6;
      }
      else {
        puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar2,uVar6);
      }
      local_50[0] = 0xffffffffffffffff;
      local_50[1] = 0xffffffffffffffff;
      uVar6 = *(ulong *)this & 0xffffffff00000000;
      pCVar2 = *(CanonicalHandleScope **)(pIVar7 + 0x95b8);
      uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)this + 0xb)) + 0xb);
      if (pCVar2 == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar7 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar7 + 0x95a8)) {
          puVar4 = (ulong *)internal::HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar6;
      }
      else {
        puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar2,uVar6);
      }
      internal::SharedFunctionInfo::EnsureSourcePositionsAvailable(pIVar7,puVar4);
      local_58 = *(undefined8 *)this;
      uVar1 = internal::JSGeneratorObject::source_position((JSGeneratorObject *)&local_58);
      internal::Script::GetPositionInfo(puVar3,uVar1,local_50,1);
      uVar6 = local_50[0] & 0xffffffff;
      uVar5 = 0;
      local_50[0] = local_50[0] & 0xffffffff00000000;
    }
    auVar8._0_8_ = local_50[0] | uVar6;
    auVar8._8_8_ = uVar5;
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","obj->is_suspended()");
}

