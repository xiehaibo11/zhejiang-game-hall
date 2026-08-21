
/* v8::internal::CompareFirstCharCaseIndependent(unibrow::Mapping<unibrow::Ecma262Canonicalize,
   256>*, v8::internal::RegExpTree* const*, v8::internal::RegExpTree* const*) */

int v8::internal::CompareFirstCharCaseIndependent
              (Mapping *param_1,RegExpTree **param_2,RegExpTree **param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint local_34;
  bool local_18 [4];
  bool local_14 [4];
  
  lVar4 = (**(code **)(*(long *)*param_2 + 0x98))(*param_2);
  lVar5 = (**(code **)(*(long *)*param_3 + 0x98))(*param_3);
  uVar1 = **(ushort **)(lVar4 + 8);
  uVar6 = (ulong)uVar1;
  uVar2 = **(ushort **)(lVar5 + 8);
  uVar8 = (ulong)uVar2;
  if (uVar1 == uVar2) {
    iVar3 = 0;
  }
  else {
    if ((0x60 < uVar1) || (0x60 < uVar2)) {
      if (*(uint *)(param_1 + (ulong)(byte)uVar1 * 8) == (uint)uVar1) {
        iVar3 = *(int *)(param_1 + (ulong)(byte)uVar1 * 8 + 4);
        if (iVar3 != 0) {
          local_34 = iVar3 + (uint)uVar1;
          uVar6 = (ulong)local_34;
        }
      }
      else {
        local_14[0] = true;
        iVar3 = unibrow::Ecma262Canonicalize::Convert((uint)uVar1,0,&local_34,local_14);
        if (local_14[0] == false) {
          if (iVar3 == 1) {
            uVar6 = (ulong)local_34;
          }
        }
        else if (iVar3 == 1) {
          *(ulong *)(param_1 + (uVar6 & 0xff) * 8) = uVar6 | (ulong)(local_34 - uVar1) << 0x20;
          uVar6 = (ulong)local_34;
        }
        else {
          *(ulong *)(param_1 + (uVar6 & 0xff) * 8) = uVar6;
        }
      }
      uVar7 = (uint)uVar2;
      if (*(uint *)(param_1 + (ulong)(byte)uVar2 * 8) == uVar7) {
        iVar3 = *(int *)(param_1 + (ulong)(byte)uVar2 * 8 + 4);
        if (iVar3 != 0) {
          uVar8 = (ulong)(iVar3 + (uint)uVar2);
        }
      }
      else {
        local_18[0] = true;
        iVar3 = unibrow::Ecma262Canonicalize::Convert(uVar7,0,&local_34,local_18);
        if (local_18[0] == false) {
          if (iVar3 == 1) {
            uVar8 = (ulong)local_34;
          }
        }
        else if (iVar3 == 1) {
          *(ulong *)(param_1 + (uVar8 & 0xff) * 8) = uVar8 | (ulong)(local_34 - uVar7) << 0x20;
          uVar8 = (ulong)local_34;
        }
        else {
          *(ulong *)(param_1 + (uVar8 & 0xff) * 8) = uVar8;
        }
      }
    }
    iVar3 = (int)uVar6 - (int)uVar8;
  }
  return iVar3;
}

