
/* std::__ndk1::vector<v8::internal::compiler::ControlEquivalence::NodeData*,
   v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
::__append(vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
           *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  Zone *this_00;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *__s;
  
  puVar4 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 3)) {
    do {
      *puVar4 = 0;
      param_1 = param_1 - 1;
      puVar4 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar4;
    } while (param_1 != 0);
    return;
  }
  lVar9 = (long)puVar4 - *(long *)this >> 3;
  uVar1 = lVar9 + param_1;
  if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this;
  uVar7 = lVar5 >> 2;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x7fffffe < (ulong)(lVar5 >> 3)) {
    uVar1 = 0xfffffff;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar7 = uVar1 * 8;
    lVar5 = *(long *)(this_00 + 0x10);
    if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar5) ||
        uVar7 - (*(long *)(this_00 + 0x18) - lVar5) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar5 + uVar7;
    }
    else {
      lVar5 = v8::internal::Zone::NewExpand(this_00,uVar7);
    }
  }
  __s = (undefined8 *)(lVar5 + lVar9 * 8);
  memset(__s,0,param_1 << 3);
  puVar4 = __s;
  if (1 < param_1) {
    uVar6 = param_1 & 0xfffffffffffffffe;
    puVar4 = __s + uVar6;
    uVar7 = uVar6;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
    bVar3 = uVar6 == param_1;
    param_1 = param_1 - uVar6;
    if (bVar3) goto LAB_012ba994;
  }
  do {
    param_1 = param_1 - 1;
    puVar4 = puVar4 + 1;
  } while (param_1 != 0);
LAB_012ba994:
  puVar2 = *(undefined8 **)this;
  puVar8 = *(undefined8 **)(this + 8);
  while (puVar8 != puVar2) {
    puVar8 = puVar8 + -1;
    __s = __s + -1;
    *__s = *puVar8;
  }
  *(undefined8 **)this = __s;
  *(undefined8 **)(this + 8) = puVar4;
  *(ulong *)(this + 0x10) = lVar5 + uVar1 * 8;
  return;
}

