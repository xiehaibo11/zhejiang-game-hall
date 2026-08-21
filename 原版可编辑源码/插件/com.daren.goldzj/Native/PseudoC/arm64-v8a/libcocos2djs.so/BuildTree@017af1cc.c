
/* WARNING: Removing unreachable block (ram,0x017af318) */
/* v8::internal::compiler::StateValuesCache::BuildTree(unsigned long*,
   v8::internal::compiler::Node**, unsigned long, v8::internal::BitVector const*, int, unsigned
   long) */

undefined8 __thiscall
v8::internal::compiler::StateValuesCache::BuildTree
          (StateValuesCache *this,ulong *param_1,Node **param_2,ulong param_3,BitVector *param_4,
          int param_5,ulong param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  BitVector *pBVar9;
  long lVar10;
  vector<std::__ndk1::array<v8::internal::compiler::Node*,8ul>,v8::internal::ZoneAllocator<std::__ndk1::array<v8::internal::compiler::Node*,8ul>>>
  *this_00;
  ulong uVar11;
  
  this_00 = (vector<std::__ndk1::array<v8::internal::compiler::Node*,8ul>,v8::internal::ZoneAllocator<std::__ndk1::array<v8::internal::compiler::Node*,8ul>>>
             *)(this + 0x20);
  lVar10 = *(long *)this_00;
  uVar7 = *(long *)(this + 0x28) - lVar10 >> 6;
  if (uVar7 <= param_6) {
    uVar5 = param_6 + 1;
    if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
      if (uVar5 < uVar7) {
        *(ulong *)(this + 0x28) = lVar10 + uVar5 * 0x40;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::array<v8::internal::compiler::Node*,8ul>,v8::internal::ZoneAllocator<std::__ndk1::array<v8::internal::compiler::Node*,8ul>>>
      ::__append(this_00,uVar5 - uVar7);
      lVar10 = *(long *)this_00;
    }
  }
  uVar7 = *param_1;
  puVar2 = (undefined8 *)(lVar10 + param_6 * 0x40);
  if (param_6 == 0) {
    uVar5 = 0;
    if (param_3 <= uVar7) {
      uVar6 = 0;
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      uVar6 = 0;
      while (uVar8 < 0x1f) {
        if (param_4 == (BitVector *)0x0) {
LAB_017af33c:
          uVar6 = 1 << (ulong)((uint)uVar8 & 0x1f) | uVar6;
          *(Node **)(lVar10 + uVar5 * 8) = param_2[uVar7];
          uVar7 = *param_1;
          uVar5 = uVar5 + 1;
        }
        else {
          uVar1 = (int)uVar7 + param_5;
          pBVar9 = param_4 + 8;
          if (*(int *)(param_4 + 4) != 1) {
            uVar3 = uVar1 + 0x3f;
            if (-1 < (int)uVar1) {
              uVar3 = uVar1;
            }
            pBVar9 = (BitVector *)(*(long *)(param_4 + 8) + (long)((int)uVar3 >> 6) * 8);
          }
          if ((*(ulong *)pBVar9 >> ((ulong)uVar1 & 0x3f) & 1) != 0) goto LAB_017af33c;
        }
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + 1;
        *param_1 = uVar7;
        if ((param_3 <= uVar7) || (7 < uVar5)) break;
      }
    }
    uVar6 = 1 << (ulong)((uint)uVar8 & 0x1f) | uVar6;
  }
  else if (param_3 <= uVar7) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar11 = 8;
    uVar8 = 0;
    do {
      if (param_3 - uVar7 < uVar11) {
        uVar6 = 0;
        uVar5 = uVar8;
        uVar11 = uVar8;
        if (uVar8 < 8) goto LAB_017af44c;
        goto LAB_017af488;
      }
      uVar4 = BuildTree(this,param_1,param_2,param_3,param_4,param_5,param_6 - 1);
      uVar5 = uVar8 + 1;
      *(undefined8 *)(lVar10 + param_6 * 0x40 + uVar8 * 8) = uVar4;
      if (7 < uVar5) break;
      uVar7 = *param_1;
      uVar11 = uVar11 - 1;
      uVar8 = uVar5;
    } while (uVar7 < param_3);
    if (uVar5 == 1) {
      return *puVar2;
    }
    uVar6 = 0;
  }
LAB_017af4ac:
  uVar4 = GetValuesNodeFromCache(this,puVar2,uVar5,uVar6);
  return uVar4;
LAB_017af44c:
  if (0x1e < uVar11) goto LAB_017af488;
  if (param_4 == (BitVector *)0x0) {
LAB_017af414:
    *(Node **)(lVar10 + param_6 * 0x40 + uVar5 * 8) = param_2[uVar7];
    uVar7 = *param_1;
    uVar5 = uVar5 + 1;
    uVar6 = 1 << (ulong)((uint)uVar11 & 0x1f) | uVar6;
  }
  else {
    uVar1 = (int)uVar7 + param_5;
    pBVar9 = param_4 + 8;
    if (*(int *)(param_4 + 4) != 1) {
      uVar3 = uVar1 + 0x3f;
      if (-1 < (int)uVar1) {
        uVar3 = uVar1;
      }
      pBVar9 = (BitVector *)(*(long *)(param_4 + 8) + (long)((int)uVar3 >> 6) * 8);
    }
    if ((*(ulong *)pBVar9 >> ((ulong)uVar1 & 0x3f) & 1) != 0) goto LAB_017af414;
  }
  uVar7 = uVar7 + 1;
  uVar11 = uVar11 + 1;
  *param_1 = uVar7;
  if ((param_3 <= uVar7) || (7 < uVar5)) goto LAB_017af488;
  goto LAB_017af44c;
LAB_017af488:
  uVar6 = uVar6 | -1 << (ulong)((uint)uVar8 & 0x1f) ^ 0xffffffffU |
          1 << (ulong)((uint)uVar11 & 0x1f);
  goto LAB_017af4ac;
}

