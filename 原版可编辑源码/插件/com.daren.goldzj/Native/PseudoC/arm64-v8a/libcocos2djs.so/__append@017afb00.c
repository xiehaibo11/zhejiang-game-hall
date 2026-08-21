
/* std::__ndk1::vector<std::__ndk1::array<v8::internal::compiler::Node*, 8ul>,
   v8::internal::ZoneAllocator<std::__ndk1::array<v8::internal::compiler::Node*, 8ul> >
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::array<v8::internal::compiler::Node*,8ul>,v8::internal::ZoneAllocator<std::__ndk1::array<v8::internal::compiler::Node*,8ul>>>
::__append(vector<std::__ndk1::array<v8::internal::compiler::Node*,8ul>,v8::internal::ZoneAllocator<std::__ndk1::array<v8::internal::compiler::Node*,8ul>>>
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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar3 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 6)) {
    do {
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      param_1 = param_1 - 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + 0x40);
      *(undefined8 **)(this + 8) = puVar3;
    } while (param_1 != 0);
    return;
  }
  lVar9 = (long)puVar3 - *(long *)this >> 6;
  uVar1 = lVar9 + param_1;
  if (uVar1 >> 0x19 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this;
  uVar7 = lVar5 >> 5;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0xfffffe < (ulong)(lVar5 >> 6)) {
    uVar1 = 0x1ffffff;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar7 = uVar1 * 0x40;
    lVar5 = *(long *)(this_00 + 0x10);
    if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar5) ||
        uVar7 - (*(long *)(this_00 + 0x18) - lVar5) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar5 + uVar7;
    }
    else {
      lVar5 = v8::internal::Zone::NewExpand(this_00,uVar7);
    }
  }
  __s = (void *)(lVar5 + lVar9 * 0x40);
  memset(__s,0,param_1 << 6);
  pvVar4 = __s;
  if (1 < param_1) {
    uVar6 = param_1 & 0xfffffffffffffffe;
    pvVar4 = (void *)((long)__s + uVar6 * 0x40);
    uVar7 = uVar6;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
    bVar2 = uVar6 == param_1;
    param_1 = param_1 - uVar6;
    if (bVar2) goto LAB_017afc08;
  }
  do {
    param_1 = param_1 - 1;
    pvVar4 = (void *)((long)pvVar4 + 0x40);
  } while (param_1 != 0);
LAB_017afc08:
  lVar9 = *(long *)this;
  for (lVar8 = *(long *)(this + 8); lVar8 != lVar9; lVar8 = lVar8 + -0x40) {
    uVar11 = *(undefined8 *)(lVar8 + -0x38);
    uVar10 = *(undefined8 *)(lVar8 + -0x40);
    uVar13 = *(undefined8 *)(lVar8 + -0x28);
    uVar12 = *(undefined8 *)(lVar8 + -0x30);
    uVar14 = *(undefined8 *)(lVar8 + -0x20);
    uVar16 = *(undefined8 *)(lVar8 + -8);
    uVar15 = *(undefined8 *)(lVar8 + -0x10);
    *(undefined8 *)((long)__s + -0x18) = *(undefined8 *)(lVar8 + -0x18);
    *(undefined8 *)((long)__s + -0x20) = uVar14;
    *(undefined8 *)((long)__s + -8) = uVar16;
    *(undefined8 *)((long)__s + -0x10) = uVar15;
    *(undefined8 *)((long)__s + -0x38) = uVar11;
    *(undefined8 *)((long)__s + -0x40) = uVar10;
    *(undefined8 *)((long)__s + -0x28) = uVar13;
    *(undefined8 *)((long)__s + -0x30) = uVar12;
    __s = (void *)((long)__s + -0x40);
  }
  *(void **)this = __s;
  *(void **)(this + 8) = pvVar4;
  *(ulong *)(this + 0x10) = lVar5 + uVar1 * 0x40;
  return;
}

