
/* void std::__ndk1::vector<v8::internal::compiler::ElementAccessInfo,
   v8::internal::ZoneAllocator<v8::internal::compiler::ElementAccessInfo>
   >::__push_back_slow_path<v8::internal::compiler::ElementAccessInfo
   const&>(v8::internal::compiler::ElementAccessInfo const&) */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::ElementAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::ElementAccessInfo>>
::__push_back_slow_path<v8::internal::compiler::ElementAccessInfo_const&>
          (vector<v8::internal::compiler::ElementAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::ElementAccessInfo>>
           *this,ElementAccessInfo *param_1)

{
  undefined *puVar1;
  ElementAccessInfo *pEVar2;
  long lVar3;
  long lVar4;
  ElementAccessInfo EVar5;
  ulong uVar6;
  Zone *this_00;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ElementAccessInfo *this_01;
  
  lVar11 = *(long *)(this + 8) - *(long *)this >> 3;
  puVar1 = (undefined *)(lVar11 * -0x71c71c71c71c71c7 + 1);
  if (&UNK_01c71c72 <= puVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
  puVar10 = (undefined *)(lVar7 * 0x1c71c71c71c71c72);
  if (puVar1 <= puVar10) {
    puVar1 = puVar10;
  }
  if (0xe38e37 < (ulong)(lVar7 * -0x71c71c71c71c71c7)) {
    puVar1 = &UNK_01c71c71;
  }
  if (puVar1 == (undefined *)0x0) {
    lVar7 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar6 = (long)puVar1 * 0x48;
    lVar7 = *(long *)(this_00 + 0x10);
    if (uVar6 < (ulong)(*(long *)(this_00 + 0x18) - lVar7) ||
        uVar6 - (*(long *)(this_00 + 0x18) - lVar7) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar7 + uVar6;
    }
    else {
      lVar7 = v8::internal::Zone::NewExpand(this_00,uVar6);
    }
  }
  this_01 = (ElementAccessInfo *)(lVar7 + lVar11 * 8);
  v8::internal::compiler::ElementAccessInfo::ElementAccessInfo(this_01,param_1);
  lVar11 = *(long *)this;
  lVar4 = *(long *)(this + 8);
  pEVar2 = this_01 + 0x48;
  lVar8 = lVar11;
  if (lVar4 != lVar11) {
    lVar8 = 0;
    do {
      lVar3 = lVar4 + lVar8;
      EVar5 = *(ElementAccessInfo *)(lVar3 + -0x48);
      *(undefined8 *)(this_01 + lVar8 + -0x38) = 0;
      *(undefined8 *)(this_01 + lVar8 + -0x30) = 0;
      *(undefined8 *)(this_01 + lVar8 + -0x40) = 0;
      this_01[lVar8 + -0x48] = EVar5;
      lVar9 = lVar8 + -0x48;
      *(undefined8 *)(this_01 + lVar8 + -0x28) = *(undefined8 *)(lVar3 + -0x28);
      *(undefined8 *)(this_01 + lVar8 + -0x40) = *(undefined8 *)(lVar3 + -0x40);
      *(undefined8 *)(this_01 + lVar8 + -0x38) = *(undefined8 *)(lVar3 + -0x38);
      *(undefined8 *)(this_01 + lVar8 + -0x30) = *(undefined8 *)(lVar3 + -0x30);
      *(undefined8 *)(lVar3 + -0x40) = 0;
      *(undefined8 *)(lVar3 + -0x38) = 0;
      *(undefined8 *)(lVar3 + -0x30) = 0;
      *(undefined8 *)(this_01 + lVar8 + -0x20) = 0;
      *(undefined8 *)(this_01 + lVar8 + -0x18) = 0;
      *(undefined8 *)(this_01 + lVar8 + -0x10) = 0;
      *(undefined8 *)(this_01 + lVar8 + -8) = *(undefined8 *)(lVar3 + -8);
      *(undefined8 *)(this_01 + lVar8 + -0x20) = *(undefined8 *)(lVar3 + -0x20);
      *(undefined8 *)(this_01 + lVar8 + -0x18) = *(undefined8 *)(lVar3 + -0x18);
      *(undefined8 *)(this_01 + lVar8 + -0x10) = *(undefined8 *)(lVar3 + -0x10);
      *(undefined8 *)(lVar3 + -0x20) = 0;
      *(undefined8 *)(lVar3 + -0x18) = 0;
      *(undefined8 *)(lVar3 + -0x10) = 0;
      lVar8 = lVar9;
    } while (lVar11 - lVar4 != lVar9);
    lVar11 = *(long *)this;
    this_01 = this_01 + lVar9;
    lVar8 = *(long *)(this + 8);
  }
  *(ElementAccessInfo **)this = this_01;
  *(ElementAccessInfo **)(this + 8) = pEVar2;
  *(long *)(this + 0x10) = lVar7 + (long)puVar1 * 0x48;
  while (lVar7 = lVar8, lVar7 != lVar11) {
    if (*(long *)(lVar7 + -0x20) != 0) {
      *(long *)(lVar7 + -0x18) = *(long *)(lVar7 + -0x20);
    }
    lVar8 = lVar7 + -0x48;
    if (*(long *)(lVar7 + -0x40) != 0) {
      *(long *)(lVar7 + -0x38) = *(long *)(lVar7 + -0x40);
    }
  }
  return;
}

