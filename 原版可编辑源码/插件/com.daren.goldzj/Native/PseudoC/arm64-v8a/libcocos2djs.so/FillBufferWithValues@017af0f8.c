
/* v8::internal::compiler::StateValuesCache::FillBufferWithValues(std::__ndk1::array<v8::internal::compiler::Node*,
   8ul>*, unsigned long*, unsigned long*, v8::internal::compiler::Node**, unsigned long,
   v8::internal::BitVector const*, int) */

uint __thiscall
v8::internal::compiler::StateValuesCache::FillBufferWithValues
          (StateValuesCache *this,array *param_1,ulong *param_2,ulong *param_3,Node **param_4,
          ulong param_5,BitVector *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  Node *pNVar6;
  ulong uVar7;
  BitVector *pBVar8;
  
  uVar5 = *param_3;
  uVar3 = *param_2;
  if ((uVar5 < param_5) && (uVar3 < 8)) {
    uVar4 = 0;
    uVar7 = uVar3;
    do {
      if (param_6 == (BitVector *)0x0) {
LAB_017af170:
        pNVar6 = param_4[uVar5];
        *param_2 = uVar7 + 1;
        *(Node **)(param_1 + uVar7 * 8) = pNVar6;
        uVar5 = *param_3;
        uVar4 = 1 << (ulong)((uint)uVar3 & 0x1f) | uVar4;
      }
      else {
        uVar1 = (int)uVar5 + param_7;
        pBVar8 = param_6 + 8;
        if (*(int *)(param_6 + 4) != 1) {
          uVar2 = uVar1 + 0x3f;
          if (-1 < (int)uVar1) {
            uVar2 = uVar1;
          }
          pBVar8 = (BitVector *)(*(long *)(param_6 + 8) + (long)((int)uVar2 >> 6) * 8);
        }
        if ((*(ulong *)pBVar8 >> ((ulong)uVar1 & 0x3f) & 1) != 0) goto LAB_017af170;
      }
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 + 1;
      *param_3 = uVar5;
    } while (((uVar5 < param_5) && (uVar3 < 0x1f)) && (uVar7 = *param_2, uVar7 < 8));
  }
  else {
    uVar4 = 0;
  }
  return 1 << (ulong)((uint)uVar3 & 0x1f) | uVar4;
}

