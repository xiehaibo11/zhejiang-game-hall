
/* void std::__ndk1::vector<v8::internal::compiler::PropertyAccessInfo,
   v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>
   >::__push_back_slow_path<v8::internal::compiler::PropertyAccessInfo
   const&>(v8::internal::compiler::PropertyAccessInfo const&) */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
::__push_back_slow_path<v8::internal::compiler::PropertyAccessInfo_const&>
          (vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
           *this,PropertyAccessInfo *param_1)

{
  ulong uVar1;
  PropertyAccessInfo *pPVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  Zone *this_00;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  PropertyAccessInfo *this_01;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar10 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar10 * -0xf0f0f0f0f0f0f0f + 1;
  if (0xf0f0f0 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar7 = lVar6 * -0x1e1e1e1e1e1e1e1e;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x787877 < (ulong)(lVar6 * -0xf0f0f0f0f0f0f0f)) {
    uVar1 = 0xf0f0f0;
  }
  if (uVar1 == 0) {
    lVar6 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar7 = uVar1 * 0x88;
    lVar6 = *(long *)(this_00 + 0x10);
    if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar6) ||
        uVar7 - (*(long *)(this_00 + 0x18) - lVar6) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar6 + uVar7;
    }
    else {
      lVar6 = v8::internal::Zone::NewExpand(this_00,uVar7);
    }
  }
  this_01 = (PropertyAccessInfo *)(lVar6 + lVar10 * 8);
  v8::internal::compiler::PropertyAccessInfo::PropertyAccessInfo(this_01,param_1);
  lVar10 = *(long *)this;
  lVar4 = *(long *)(this + 8);
  pPVar2 = this_01 + 0x88;
  lVar8 = lVar10;
  if (lVar4 != lVar10) {
    lVar8 = 0;
    do {
      lVar3 = lVar4 + lVar8;
      uVar5 = *(undefined4 *)(lVar3 + -0x88);
      *(undefined8 *)(this_01 + lVar8 + -0x78) = 0;
      *(undefined8 *)(this_01 + lVar8 + -0x70) = 0;
      *(undefined8 *)(this_01 + lVar8 + -0x80) = 0;
      *(undefined4 *)(this_01 + lVar8 + -0x88) = uVar5;
      lVar9 = lVar8 + -0x88;
      *(undefined8 *)(this_01 + lVar8 + -0x68) = *(undefined8 *)(lVar3 + -0x68);
      *(undefined8 *)(this_01 + lVar8 + -0x80) = *(undefined8 *)(lVar3 + -0x80);
      *(undefined8 *)(this_01 + lVar8 + -0x78) = *(undefined8 *)(lVar3 + -0x78);
      *(undefined8 *)(this_01 + lVar8 + -0x70) = *(undefined8 *)(lVar3 + -0x70);
      *(undefined8 *)(lVar3 + -0x80) = 0;
      *(undefined8 *)(lVar3 + -0x78) = 0;
      *(undefined8 *)(lVar3 + -0x70) = 0;
      *(undefined8 *)(this_01 + lVar8 + -0x60) = 0;
      *(undefined8 *)(this_01 + lVar8 + -0x58) = 0;
      *(undefined8 *)(this_01 + lVar8 + -0x50) = 0;
      *(undefined8 *)(this_01 + lVar8 + -0x48) = *(undefined8 *)(lVar3 + -0x48);
      *(undefined8 *)(this_01 + lVar8 + -0x60) = *(undefined8 *)(lVar3 + -0x60);
      *(undefined8 *)(this_01 + lVar8 + -0x58) = *(undefined8 *)(lVar3 + -0x58);
      *(undefined8 *)(this_01 + lVar8 + -0x50) = *(undefined8 *)(lVar3 + -0x50);
      uVar11 = *(undefined8 *)(lVar3 + -0x20);
      uVar13 = *(undefined8 *)(lVar3 + -8);
      uVar12 = *(undefined8 *)(lVar3 + -0x10);
      uVar15 = *(undefined8 *)(lVar3 + -0x38);
      uVar14 = *(undefined8 *)(lVar3 + -0x40);
      uVar17 = *(undefined8 *)(lVar3 + -0x28);
      uVar16 = *(undefined8 *)(lVar3 + -0x30);
      *(undefined8 *)(lVar3 + -0x60) = 0;
      *(undefined8 *)(lVar3 + -0x58) = 0;
      *(undefined8 *)(lVar3 + -0x50) = 0;
      *(undefined8 *)(this_01 + lVar8 + -0x18) = *(undefined8 *)(lVar3 + -0x18);
      *(undefined8 *)(this_01 + lVar8 + -0x20) = uVar11;
      *(undefined8 *)(this_01 + lVar8 + -8) = uVar13;
      *(undefined8 *)(this_01 + lVar8 + -0x10) = uVar12;
      *(undefined8 *)(this_01 + lVar8 + -0x38) = uVar15;
      *(undefined8 *)(this_01 + lVar8 + -0x40) = uVar14;
      *(undefined8 *)(this_01 + lVar8 + -0x28) = uVar17;
      *(undefined8 *)(this_01 + lVar8 + -0x30) = uVar16;
      lVar8 = lVar9;
    } while (lVar10 - lVar4 != lVar9);
    lVar10 = *(long *)this;
    this_01 = this_01 + lVar9;
    lVar8 = *(long *)(this + 8);
  }
  *(PropertyAccessInfo **)this = this_01;
  *(PropertyAccessInfo **)(this + 8) = pPVar2;
  *(ulong *)(this + 0x10) = lVar6 + uVar1 * 0x88;
  while (lVar6 = lVar8, lVar6 != lVar10) {
    if (*(long *)(lVar6 + -0x60) != 0) {
      *(long *)(lVar6 + -0x58) = *(long *)(lVar6 + -0x60);
    }
    lVar8 = lVar6 + -0x88;
    if (*(long *)(lVar6 + -0x80) != 0) {
      *(long *)(lVar6 + -0x78) = *(long *)(lVar6 + -0x80);
    }
  }
  return;
}

