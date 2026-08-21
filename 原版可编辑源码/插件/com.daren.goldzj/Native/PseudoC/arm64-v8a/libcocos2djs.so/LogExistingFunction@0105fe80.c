
/* v8::internal::ExistingCodeLogger::LogExistingFunction(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::AbstractCode>,
   v8::internal::CodeEventListener::LogEventsAndTags) */

void __thiscall
v8::internal::ExistingCodeLogger::LogExistingFunction
          (ExistingCodeLogger *this,ulong *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  Mutex *this_00;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong local_68;
  
  uVar12 = *param_2;
  uVar9 = uVar12 & 0xffffffff00000000;
  uVar15 = uVar9 | *(uint *)(uVar12 + 0xf);
  uVar11 = uVar9 | 7;
  uVar13 = uVar15;
  if (*(short *)(uVar11 + *(uint *)(uVar15 - 1)) == 0x5b) {
    uVar13 = uVar9 | *(uint *)(uVar15 + 0xb);
  }
  if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x65) {
    if (*(short *)(uVar11 + *(uint *)(uVar15 - 1)) == 0x5b) {
      uVar15 = uVar9 | *(uint *)(uVar15 + 0xb);
    }
    pIVar6 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar15;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar15);
    }
    local_68 = *param_2;
    uVar3 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_68);
    iVar4 = Script::GetLineNumber(puVar7,uVar3);
    local_68 = *param_2;
    iVar1 = iVar4 + 1;
    uVar3 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_68);
    iVar5 = Script::GetColumnNumber(puVar7,uVar3);
    uVar13 = *puVar7;
    iVar5 = iVar5 + 1;
    if (((*(uint *)(uVar13 + 7) & 1) == 0) ||
       (uVar9 = uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 7),
       0x3f < *(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)))) {
      plVar10 = *(long **)(this + 8);
      if (plVar10 != (long *)0x0) {
        if (*(uint *)(uVar13 + 0x17) < 2) {
          if (param_4 == 0xb) {
            param_4 = 0x13;
          }
          else if (param_4 == 0x11) {
            param_4 = 0x15;
          }
          else if (param_4 == 0xf) {
            param_4 = 0x14;
          }
        }
        (**(code **)(*plVar10 + 0x28))
                  (plVar10,param_4,*param_3,*param_2,*(undefined8 *)(*(long *)this + 200),iVar1,
                   iVar5);
        return;
      }
      lVar17 = *(long *)(*(long *)this + 0xb6d8);
      if (*(uint *)(uVar13 + 0x17) < 2) {
        if (param_4 == 0xb) {
          param_4 = 0x13;
        }
        else if (param_4 == 0x11) {
          param_4 = 0x15;
        }
        else if (param_4 == 0xf) {
          param_4 = 0x14;
        }
      }
      uVar14 = *param_3;
      uVar13 = *param_2;
      uVar16 = *(undefined8 *)(*(long *)this + 200);
      this_00 = (Mutex *)(lVar17 + 0x28);
      base::Mutex::Lock(this_00);
      for (plVar10 = *(long **)(lVar17 + 0x10); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10)
      {
        (**(code **)(*(long *)plVar10[2] + 0x28))
                  ((long *)plVar10[2],param_4,uVar14,uVar13,uVar16,iVar1,iVar5);
      }
    }
    else {
      pIVar6 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(pIVar6 + 0x95a0);
        if (puVar8 == *(ulong **)(pIVar6 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar6);
        }
        *(ulong **)(pIVar6 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar9;
        plVar10 = *(long **)(this + 8);
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar9);
        plVar10 = *(long **)(this + 8);
      }
      if (iVar4 < 0) {
        if (plVar10 != (long *)0x0) {
          uVar3 = 0x15;
          if (1 < *(uint *)(*puVar7 + 0x17)) {
            uVar3 = 0x11;
          }
          (**(code **)(*plVar10 + 0x20))(plVar10,uVar3,*param_3,*param_2,*puVar8);
          return;
        }
        uVar14 = *param_3;
        lVar17 = *(long *)(*(long *)this + 0xb6d8);
        uVar13 = *param_2;
        uVar9 = *puVar8;
        this_00 = (Mutex *)(lVar17 + 0x28);
        uVar3 = 0x15;
        if (1 < *(uint *)(*puVar7 + 0x17)) {
          uVar3 = 0x11;
        }
        base::Mutex::Lock(this_00);
        for (plVar10 = *(long **)(lVar17 + 0x10); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10
            ) {
          (**(code **)(*(long *)plVar10[2] + 0x20))((long *)plVar10[2],uVar3,uVar14,uVar13,uVar9);
        }
      }
      else {
        if (plVar10 != (long *)0x0) {
          if (*(uint *)(*puVar7 + 0x17) < 2) {
            if (param_4 == 0xb) {
              param_4 = 0x13;
            }
            else if (param_4 == 0x11) {
              param_4 = 0x15;
            }
            else if (param_4 == 0xf) {
              param_4 = 0x14;
            }
          }
          (**(code **)(*plVar10 + 0x28))(plVar10,param_4,*param_3,*param_2,*puVar8,iVar1,iVar5);
          return;
        }
        lVar17 = *(long *)(*(long *)this + 0xb6d8);
        if (*(uint *)(*puVar7 + 0x17) < 2) {
          if (param_4 == 0xb) {
            param_4 = 0x13;
          }
          else if (param_4 == 0x11) {
            param_4 = 0x15;
          }
          else if (param_4 == 0xf) {
            param_4 = 0x14;
          }
        }
        uVar14 = *param_3;
        uVar13 = *param_2;
        uVar9 = *puVar8;
        this_00 = (Mutex *)(lVar17 + 0x28);
        base::Mutex::Lock(this_00);
        for (plVar10 = *(long **)(lVar17 + 0x10); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10
            ) {
          (**(code **)(*(long *)plVar10[2] + 0x28))
                    ((long *)plVar10[2],param_4,uVar14,uVar13,uVar9,iVar1,iVar5);
        }
      }
    }
  }
  else {
    if ((*(uint *)(uVar12 + 3) & 1) == 0) {
      return;
    }
    if (*(short *)(uVar11 + *(uint *)((uVar9 | *(uint *)(uVar12 + 3)) - 1)) != 0x4e) {
      return;
    }
    uVar13 = *param_2 & 0xffffffff00000000;
    uVar2 = *(uint *)((uVar13 | *(uint *)(*param_2 + 3)) + 0x17);
    if (((uVar2 & 1) != 0) && (uVar2 == *(uint *)(*(long *)this + 0xa0))) {
      return;
    }
    uVar2 = *(uint *)((uVar13 | uVar2) + 3);
    if (uVar2 == 0) {
      uVar14 = 0;
      plVar10 = *(long **)(this + 8);
    }
    else {
      uVar14 = *(undefined8 *)((uVar13 | uVar2) + 3);
      plVar10 = *(long **)(this + 8);
    }
    if (plVar10 != (long *)0x0) {
      local_68 = *param_2;
      uVar16 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_68);
      (**(code **)(*plVar10 + 0x38))(plVar10,uVar16,uVar14);
      return;
    }
    local_68 = *param_2;
    lVar17 = *(long *)(*(long *)this + 0xb6d8);
    uVar16 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_68);
    this_00 = (Mutex *)(lVar17 + 0x28);
    base::Mutex::Lock(this_00);
    for (plVar10 = *(long **)(lVar17 + 0x10); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      (**(code **)(*(long *)plVar10[2] + 0x38))((long *)plVar10[2],uVar16,uVar14);
    }
  }
  base::Mutex::Unlock(this_00);
  return;
}

