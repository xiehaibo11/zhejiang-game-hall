
/* std::__ndk1::vector<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame,
   v8::internal::ZoneAllocator<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame,v8::internal::ZoneAllocator<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame>>
::__append(vector<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame,v8::internal::ZoneAllocator<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *__s;
  bool bVar2;
  Zone *this_00;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar3 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 4)) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      param_1 = param_1 - 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + 0x10);
      *(undefined8 **)(this + 8) = puVar3;
    } while (param_1 != 0);
    return;
  }
  lVar9 = (long)puVar3 - *(long *)this >> 4;
  uVar1 = lVar9 + param_1;
  if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this;
  uVar7 = lVar5 >> 3;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x3fffffe < (ulong)(lVar5 >> 4)) {
    uVar1 = 0x7ffffff;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar7 = uVar1 * 0x10;
    lVar5 = *(long *)(this_00 + 0x10);
    if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar5) ||
        uVar7 - (*(long *)(this_00 + 0x18) - lVar5) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar5 + uVar7;
    }
    else {
      lVar5 = v8::internal::Zone::NewExpand(this_00,uVar7);
    }
  }
  __s = (void *)(lVar5 + lVar9 * 0x10);
  memset(__s,0,param_1 << 4);
  pvVar4 = __s;
  if (1 < param_1) {
    uVar6 = param_1 & 0xfffffffffffffffe;
    pvVar4 = (void *)((long)__s + uVar6 * 0x10);
    uVar7 = uVar6;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
    bVar2 = uVar6 == param_1;
    param_1 = param_1 - uVar6;
    if (bVar2) goto LAB_012b7750;
  }
  do {
    param_1 = param_1 - 1;
    pvVar4 = (void *)((long)pvVar4 + 0x10);
  } while (param_1 != 0);
LAB_012b7750:
  lVar9 = *(long *)this;
  for (lVar8 = *(long *)(this + 8); lVar8 != lVar9; lVar8 = lVar8 + -0x10) {
    uVar10 = *(undefined8 *)(lVar8 + -0x10);
    *(undefined8 *)((long)__s + -8) = *(undefined8 *)(lVar8 + -8);
    *(undefined8 *)((long)__s + -0x10) = uVar10;
    __s = (void *)((long)__s + -0x10);
  }
  *(void **)this = __s;
  *(void **)(this + 8) = pvVar4;
  *(ulong *)(this + 0x10) = lVar5 + uVar1 * 0x10;
  return;
}

