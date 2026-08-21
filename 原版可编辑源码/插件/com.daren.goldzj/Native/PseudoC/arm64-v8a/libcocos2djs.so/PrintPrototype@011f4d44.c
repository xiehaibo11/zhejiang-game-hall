
/* v8::internal::StringStream::PrintPrototype(v8::internal::JSFunction, v8::internal::Object) */

void __thiscall
v8::internal::StringStream::PrintPrototype(StringStream *this,ulong param_2,Isolate *param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  Isolate *pIVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  Isolate *pIVar10;
  Isolate *pIVar11;
  ulong uVar12;
  Isolate *local_90;
  Isolate *local_88;
  Isolate *local_80;
  Isolate *local_78;
  undefined8 local_70;
  undefined4 local_68;
  char local_64;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pIVar10 = (Isolate *)(param_2 & 0xffffffff00000000);
  uVar12 = (ulong)pIVar10 | (ulong)*(uint *)(param_2 + 0xb);
  uVar9 = *(uint *)(uVar12 + 7);
  pIVar11 = (Isolate *)((ulong)pIVar10 | (ulong)uVar9);
  local_88 = param_3;
  if (((uVar9 & 1) == 0) ||
     (*(short *)(((ulong)pIVar10 | 7) + (ulong)*(uint *)(pIVar11 + -1)) != 0x83)) {
    if (uVar9 != 0) goto joined_r0x011f4dd0;
LAB_011f4e14:
    pIVar11 = *(Isolate **)(pIVar10 + 200);
    if (((ulong)local_88 & 1) == 0) goto LAB_011f4e20;
LAB_011f4ec8:
    iVar8 = (int)local_88;
    if ((((iVar8 != *(int *)(pIVar10 + 0xb0)) && (iVar8 != *(int *)(pIVar10 + 0xa0))) &&
        (iVar8 != *(int *)(pIVar10 + 0xa8))) &&
       (*(short *)(((ulong)local_88 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_88 + -1)) !=
        0xa9)) goto LAB_011f4e20;
    PrintName(this,pIVar11);
  }
  else {
    local_80 = pIVar11;
    uVar3 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_80);
    if ((uVar3 & 1) == 0) goto LAB_011f4e14;
    uVar9 = *(uint *)(uVar12 + 7);
    pIVar11 = (Isolate *)((ulong)pIVar10 | (ulong)uVar9);
joined_r0x011f4dd0:
    if (((uVar9 & 1) != 0) &&
       (*(short *)(((ulong)pIVar10 | 7) + (ulong)*(uint *)(pIVar11 + -1)) == 0x83)) {
      local_80 = pIVar11;
      uVar12 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_80);
      if ((uVar12 & 1) == 0) goto LAB_011f4e14;
      local_80 = pIVar11;
      pIVar11 = (Isolate *)ScopeInfo::FunctionName((ScopeInfo *)&local_80);
    }
    if (((ulong)local_88 & 1) != 0) goto LAB_011f4ec8;
LAB_011f4e20:
    if (*(int *)(pIVar10 + 0x2bc8) == 0) {
      PrintName(this,pIVar11);
      goto LAB_011f50e0;
    }
    if ((((ulong)local_88 & 1) == 0) ||
       (*(ushort *)(((ulong)local_88 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_88 + -1)) <
        0xaa)) {
      uVar12 = Object::GetPrototypeChainRootMap((Object *)&local_88,pIVar10);
      local_88 = (Isolate *)(uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0xf));
    }
    local_70 = 0;
    local_68 = 0;
    local_64 = '\0';
    local_60 = 0;
    local_80 = pIVar10;
    local_78 = local_88;
    while (*(short *)(((ulong)local_78 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_78 + -1))
           != 0xa9) {
      local_90 = local_78;
      pIVar4 = (Isolate *)JSObject::SlowReverseLookup((JSObject *)&local_90,param_2);
      if (((ulong)pIVar4 & 1) == 0) {
        bVar7 = true;
        if (((ulong)pIVar11 & 1) == 0) {
LAB_011f5114:
          bVar7 = true;
        }
        else {
LAB_011f5124:
          uVar12 = (ulong)pIVar11 & 0xffffffff00000000 | 7;
          if ((((0x3f < *(ushort *)(uVar12 + *(uint *)(pIVar11 + -1))) || (bVar7)) ||
              (uVar3 = (ulong)pIVar4 & 0xffffffff00000000 | 7,
              0x3f < *(ushort *)(uVar3 + *(uint *)(pIVar4 + -1)))) ||
             ((local_90 = pIVar11, (int)pIVar4 != (int)pIVar11 &&
              (((*(ushort *)(uVar12 + *(uint *)(pIVar11 + -1)) < 0x20 &&
                (*(ushort *)(uVar3 + *(uint *)(pIVar4 + -1)) < 0x20)) ||
               (uVar3 = String::SlowEquals((String *)&local_90,pIVar4), (uVar3 & 1) == 0)))))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          bVar7 = bVar2;
          if ((*(ushort *)(uVar12 + *(uint *)(pIVar11 + -1)) < 0x40) &&
             (bVar7 = false, *(int *)(pIVar11 + 7) != 0)) {
            bVar7 = bVar2;
          }
        }
        goto LAB_011f4f1c;
      }
      if ((int)pIVar4 != *(int *)(pIVar10 + 0xa0)) {
        bVar7 = false;
        if (((ulong)pIVar11 & 1) == 0) goto LAB_011f5114;
        goto LAB_011f5124;
      }
      PrototypeIterator::Advance((PrototypeIterator *)&local_80);
      if (local_64 != '\0') break;
    }
    pIVar4 = pIVar11;
    bVar7 = false;
LAB_011f4f1c:
    PrintName(this,pIVar4);
    if (!bVar7) goto LAB_011f50e0;
  }
  uVar5 = __strlen_chk("(aka ",6);
  Add(this,"(aka ",uVar5,0,0);
  uVar12 = (ulong)pIVar10 | (ulong)*(uint *)(param_2 + 0xb);
  uVar9 = *(uint *)(uVar12 + 7);
  pIVar11 = (Isolate *)((ulong)pIVar10 | (ulong)uVar9);
  if (((uVar9 & 1) == 0) ||
     (*(short *)(((ulong)pIVar10 | 7) + (ulong)*(uint *)(pIVar11 + -1)) != 0x83)) {
    if (uVar9 != 0) goto joined_r0x011f4fac;
LAB_011f4fe8:
    pIVar11 = *(Isolate **)(pIVar10 + 200);
  }
  else {
    local_80 = pIVar11;
    uVar3 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_80);
    if ((uVar3 & 1) == 0) goto LAB_011f4fe8;
    uVar9 = *(uint *)(uVar12 + 7);
    pIVar11 = (Isolate *)((ulong)pIVar10 | (ulong)uVar9);
joined_r0x011f4fac:
    if (((uVar9 & 1) != 0) &&
       (*(short *)(((ulong)pIVar10 | 7) + (ulong)*(uint *)(pIVar11 + -1)) == 0x83)) {
      local_80 = pIVar11;
      uVar12 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_80);
      if ((uVar12 & 1) == 0) goto LAB_011f4fe8;
      local_80 = pIVar11;
      pIVar11 = (Isolate *)ScopeInfo::FunctionName((ScopeInfo *)&local_80);
    }
  }
  PrintName(this,pIVar11);
  iVar8 = *(int *)(this + 0xc);
  uVar9 = *(uint *)(this + 0x10);
  if (iVar8 - uVar9 != 1) {
    if (uVar9 == iVar8 - 2U) {
      local_80 = (Isolate *)CONCAT44(local_80._4_4_,iVar8);
      lVar6 = (**(code **)(**(long **)this + 0x18))(*(long **)this,&local_80);
      uVar9 = *(uint *)(this + 0xc);
      if ((uint)local_80 <= uVar9) {
        *(uint *)(this + 0x10) = uVar9 - 1;
        *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(uVar9 - 5)) = 0x2e;
        *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 3)) = 0x2e;
        *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 2)) = 0x2e;
        *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 1)) = 10;
        *(undefined1 *)(*(long *)(this + 0x18) + (ulong)*(uint *)(this + 0x10)) = 0;
        goto LAB_011f50e0;
      }
      uVar9 = *(uint *)(this + 0x10);
      *(uint *)(this + 0xc) = (uint)local_80;
      *(long *)(this + 0x18) = lVar6;
    }
    else {
      lVar6 = *(long *)(this + 0x18);
    }
    *(undefined1 *)(lVar6 + (ulong)uVar9) = 0x29;
    *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) + 1)) = 0;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  }
LAB_011f50e0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

