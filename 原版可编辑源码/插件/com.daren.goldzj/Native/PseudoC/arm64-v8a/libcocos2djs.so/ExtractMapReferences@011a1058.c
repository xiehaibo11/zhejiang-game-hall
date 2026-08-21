
/* v8::internal::V8HeapExplorer::ExtractMapReferences(v8::internal::HeapEntry*, v8::internal::Map)
    */

void __thiscall
v8::internal::V8HeapExplorer::ExtractMapReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*(uint *)(param_3 + 0x23);
  uVar4 = param_3 & 0xffffffff00000000;
  uVar3 = uVar4 | uVar2;
  if ((*(uint *)(param_3 + 0x23) == 3) || ((uVar2 & 3) != 3)) {
    if ((uVar2 & 3) == 1) {
      if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x98) {
        if ((0xa9 < *(ushort *)(param_3 + 7)) && (*(int *)(uVar3 + 7) != 0)) {
          TagObject(this,uVar4 | *(uint *)(uVar3 + 7),"(prototype transitions)");
        }
        TagObject(this,uVar3,"(transition array)");
        pcVar1 = "transitions";
      }
      else if (*(ushort *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76 < 0xf) {
        TagObject(this,uVar3,"(transition)");
        pcVar1 = "transition";
      }
      else {
        if ((*(uint *)(param_3 + 0xb) >> 0x14 & 1) == 0) goto LAB_011a1164;
        pcVar1 = "prototype_info";
        TagObject(this,uVar3,"prototype_info");
      }
      SetInternalReference(this,param_1,pcVar1,uVar3,0x24);
    }
  }
  else {
    SetWeakReference(this,param_1,"transition",uVar4 | uVar2 & 0xfffffffffffffffd,0x24);
  }
LAB_011a1164:
  uVar2 = uVar4 | *(uint *)(param_3 + 0x17);
  TagObject(this,uVar2,"(map descriptors)");
  SetInternalReference(this,param_1,"descriptors",uVar2,0x18);
  SetInternalReference(this,param_1,"prototype",uVar4 | *(uint *)(param_3 + 0xf),0x10);
  uVar2 = uVar4 | *(uint *)(param_3 + 0x13);
  if (*(ushort *)(param_3 + 7) - 0x88 < 10) {
    TagObject(this,uVar2,"(native context)");
    pcVar1 = "native_context";
    goto LAB_011a1264;
  }
  if ((*(uint *)(param_3 + 0x13) & 1) != 0) {
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0xa2) {
      TagObject(this,uVar2,"(back pointer)");
      pcVar1 = "back_pointer";
      goto LAB_011a1264;
    }
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x4e) {
      TagObject(this,uVar2,"(constructor function data)");
      pcVar1 = "constructor_function_data";
      goto LAB_011a1264;
    }
  }
  pcVar1 = "constructor";
LAB_011a1264:
  SetInternalReference(this,param_1,pcVar1,uVar2,0x14);
  TagObject(this,uVar4 | *(uint *)(param_3 + 0x1b),"(dependent code)");
  SetInternalReference(this,param_1,"dependent_code",uVar4 | *(uint *)(param_3 + 0x1b),0x1c);
  return;
}

