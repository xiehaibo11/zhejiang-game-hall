
/* v8::internal::compiler::SerializerForBackgroundCompilation::Environment::Environment(v8::internal::Zone*,
   v8::internal::compiler::CompilationSubject) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::Environment::Environment
          (Environment *this,Zone *param_1,VirtualClosure *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  Hints *this_00;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)param_3;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)this = uVar10;
  *(undefined8 *)(this + 0x10) = uVar4;
  uVar7 = **(ulong **)this;
  uVar5 = uVar7 & 0xffffffff00000000;
  uVar9 = uVar5 | *(uint *)(uVar7 + 0xf);
  uVar8 = uVar5 | 7;
  if ((*(short *)(uVar8 + *(uint *)(uVar9 - 1)) == 0x5b) &&
     (*(short *)(uVar8 + *(uint *)((uVar5 | *(uint *)(uVar9 + 0x13)) - 1)) == 0x86)) {
    uVar6 = *(uint *)(uVar9 + 0xf);
  }
  else {
    uVar6 = *(uint *)(uVar7 + 3);
    if (((uVar6 & 1) == 0) || (*(short *)(uVar8 + *(uint *)((uVar5 | uVar6) - 1)) != 0x86)) {
      uVar6 = *(uint *)((uVar5 | *(uint *)(uVar7 + 3)) + 3);
    }
    else {
      uVar6 = *(uint *)(uVar7 + 3);
    }
  }
  *(int *)(this + 0x18) = *(int *)((uVar5 | uVar6) + 0x17) >> 3;
  uVar7 = **(ulong **)this;
  uVar5 = uVar7 & 0xffffffff00000000;
  uVar9 = uVar5 | *(uint *)(uVar7 + 0xf);
  uVar8 = uVar5 | 7;
  if ((*(short *)(uVar8 + *(uint *)(uVar9 - 1)) == 0x5b) &&
     (*(short *)(uVar8 + *(uint *)((uVar5 | *(uint *)(uVar9 + 0x13)) - 1)) == 0x86)) {
    uVar6 = *(uint *)(uVar9 + 0xf);
  }
  else {
    uVar6 = *(uint *)(uVar7 + 3);
    if (((uVar6 & 1) == 0) || (*(short *)(uVar8 + *(uint *)((uVar5 | uVar6) - 1)) != 0x86)) {
      uVar6 = *(uint *)((uVar5 | *(uint *)(uVar7 + 3)) + 3);
    }
    else {
      uVar6 = *(uint *)(uVar7 + 3);
    }
  }
  iVar2 = *(int *)((uVar5 | uVar6) + 0x13);
  this_00 = (Hints *)(this + 0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(this + 0x1c) = iVar1 >> 3;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  iVar1 = (iVar1 >> 3) + *(int *)(this + 0x18) + 1;
  *(Zone **)(this + 0x48) = param_1;
  if (iVar1 != 0) {
    uVar5 = (ulong)iVar1;
    if ((uVar5 >> 0x1c & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = uVar5 * 8;
    if (uVar7 < (ulong)(*(long *)(param_1 + 0x18) - (long)puVar3) ||
        uVar7 - (*(long *)(param_1 + 0x18) - (long)puVar3) == 0) {
      *(undefined8 **)(param_1 + 0x10) = puVar3 + uVar5;
    }
    else {
      puVar3 = (undefined8 *)Zone::NewExpand(param_1,uVar7);
    }
    *(undefined8 **)(this + 0x30) = puVar3;
    *(undefined8 **)(this + 0x38) = puVar3;
    *(undefined8 **)(this + 0x40) = puVar3 + uVar5;
    do {
      *puVar3 = 0;
      uVar5 = uVar5 - 1;
      puVar3 = (undefined8 *)(*(long *)(this + 0x38) + 8);
      *(undefined8 **)(this + 0x38) = puVar3;
    } while (uVar5 != 0);
  }
  if (*(long *)(param_3 + 0x18) == 0) {
    Hints::AddVirtualClosure(this_00,param_3,param_1);
  }
  else {
    Hints::AddConstant(this_00,*(long *)(param_3 + 0x18),param_1);
  }
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_3 + 0x10);
  return;
}

