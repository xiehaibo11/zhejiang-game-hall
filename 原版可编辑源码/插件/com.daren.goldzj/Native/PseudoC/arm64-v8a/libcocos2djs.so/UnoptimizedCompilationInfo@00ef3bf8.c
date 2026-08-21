
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::UnoptimizedCompilationInfo::UnoptimizedCompilationInfo(v8::internal::Zone*,
   v8::internal::ParseInfo*, v8::internal::FunctionLiteral*) */

void __thiscall
v8::internal::UnoptimizedCompilationInfo::UnoptimizedCompilationInfo
          (UnoptimizedCompilationInfo *this,Zone *param_1,ParseInfo *param_2,
          FunctionLiteral *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  *(undefined4 *)this = 0;
  *(Zone **)(this + 8) = param_1;
  *(Zone **)(this + 0x50) = param_1;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar3) < 0x10) {
    puVar3 = (undefined1 *)Zone::NewExpand(param_1,0x10);
  }
  else {
    *(undefined1 **)(param_1 + 0x10) = puVar3 + 0x10;
  }
  puVar1 = *(undefined1 **)(this + 0x38);
  puVar4 = *(undefined1 **)(this + 0x40);
  puVar5 = puVar3;
  while (puVar4 != puVar1) {
    puVar4 = puVar4 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *puVar4;
  }
  *(undefined1 **)(this + 0x38) = puVar5;
  *(undefined1 **)(this + 0x40) = puVar3;
  *(undefined1 **)(this + 0x48) = puVar3 + 0x10;
  *(FunctionLiteral **)(this + 0x10) = param_3;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 0x98);
  uVar2 = *(uint *)(param_2 + 8);
  if ((uVar2 >> 2 & 1) != 0) {
    *(uint *)this = *(uint *)this | 1;
    uVar2 = *(uint *)(param_2 + 8);
  }
  if ((uVar2 >> 9 & 1) != 0) {
    *(uint *)this = *(uint *)this | 2;
    uVar2 = *(uint *)(param_2 + 8);
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    *(uint *)this = *(uint *)this | 4;
    uVar2 = *(uint *)(param_2 + 8);
  }
  if ((uVar2 >> 0x1b & 1) != 0) {
    *(uint *)this = *(uint *)this | 8;
  }
  return;
}

