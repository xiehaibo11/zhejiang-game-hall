
/* v8::internal::RegExpMacroAssembler::CaseInsensitiveCompareUC16(unsigned long, unsigned long,
   unsigned long, v8::internal::Isolate*) */

undefined4
v8::internal::RegExpMacroAssembler::CaseInsensitiveCompareUC16
          (ulong param_1,ulong param_2,ulong param_3,Isolate *param_4)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint local_60;
  uint local_5c;
  bool local_58 [4];
  bool local_54 [4];
  
  uVar10 = param_3 >> 1;
  do {
    if (uVar10 == 0) {
      return 1;
    }
    uVar2 = *(ushort *)param_1;
    uVar9 = (ulong)uVar2;
    uVar3 = *(ushort *)param_2;
    uVar7 = (ulong)uVar3;
    if ((uint)uVar2 != (uint)uVar3) {
      uVar8 = (uint)uVar2;
      local_5c = uVar8;
      if (*(uint *)(param_4 + (ulong)(byte)uVar2 * 8 + 0xae18) == uVar8) {
        if (*(int *)(param_4 + (ulong)(byte)uVar2 * 8 + 0xae1c) != 0) {
          local_5c = *(int *)(param_4 + (ulong)(byte)uVar2 * 8 + 0xae1c) + (uint)uVar2;
          uVar9 = (ulong)local_5c;
        }
        uVar8 = (uint)uVar9;
        if (uVar8 != uVar3) {
LAB_01547e98:
          uVar6 = (uint)uVar3;
          local_60 = uVar6;
          if (*(uint *)(param_4 + (ulong)(byte)uVar3 * 8 + 0xae18) == uVar6) {
            local_5c = uVar8;
            if (*(int *)(param_4 + (ulong)(byte)uVar3 * 8 + 0xae1c) != 0) {
              local_60 = *(int *)(param_4 + (ulong)(byte)uVar3 * 8 + 0xae1c) + (uint)uVar3;
              if (uVar8 != local_60) {
                return 0;
              }
              goto LAB_01547df0;
            }
          }
          else {
            local_58[0] = true;
            iVar4 = unibrow::Ecma262Canonicalize::Convert(uVar6,0,&local_60,local_58);
            if (local_58[0] != false) {
              if (iVar4 == 1) {
                lVar1 = (uVar7 & 0xff) << 3;
                uVar7 = uVar7 | (ulong)(local_60 - uVar6) << 0x20;
              }
              else {
                lVar1 = (uVar7 & 0xff) * 8;
              }
              *(ulong *)(param_4 + lVar1 + 0xae18) = uVar7;
            }
            uVar7 = (ulong)local_60;
          }
          if (local_5c != (uint)uVar7) {
            return 0;
          }
        }
      }
      else {
        local_54[0] = true;
        iVar4 = unibrow::Ecma262Canonicalize::Convert(uVar8,0,&local_5c,local_54);
        if (local_54[0] != false) {
          uVar5 = uVar9 & 0xff;
          if (iVar4 == 1) {
            uVar9 = uVar9 | (ulong)(local_5c - uVar8) << 0x20;
          }
          *(ulong *)(param_4 + uVar5 * 8 + 0xae18) = uVar9;
        }
        uVar8 = local_5c;
        if (local_5c != uVar3) goto LAB_01547e98;
      }
    }
LAB_01547df0:
    uVar10 = uVar10 - 1;
    param_2 = param_2 + 2;
    param_1 = param_1 + 2;
  } while( true );
}

