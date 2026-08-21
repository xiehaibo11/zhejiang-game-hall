
uint FUN_0153f8d4(long param_1,long param_2,uint param_3,undefined8 param_4,uint param_5,
                 uint param_6,uint param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  uint local_74 [4];
  bool local_64 [4];
  
  uVar9 = (ulong)(param_3 & 0xff);
  lVar1 = param_1 + uVar9 * 8;
  plVar7 = *(long **)(param_2 + 0x28);
  cVar4 = *(char *)(param_2 + 0x30);
  uVar2 = param_3 & 0xffff;
  if (*(uint *)(lVar1 + 0x9e18) == uVar2) {
    iVar3 = *(int *)(lVar1 + 0x9e1c);
    if (iVar3 == 0) goto LAB_0153fa04;
    local_74[0] = iVar3 + uVar2;
    uVar5 = 1;
  }
  else {
    local_64[0] = true;
    uVar5 = unibrow::Ecma262UnCanonicalize::Convert(uVar2,0,local_74,local_64);
    if (local_64[0] == false) {
      if (uVar5 == 0) goto LAB_0153fa04;
    }
    else if (uVar5 == 1) {
      *(ulong *)(param_1 + uVar9 * 8 + 0x9e18) =
           (ulong)param_3 & 0xffff | (ulong)(local_74[0] - uVar2) << 0x20;
    }
    else {
      *(ulong *)(param_1 + uVar9 * 8 + 0x9e18) = (ulong)param_3 & 0xffff;
LAB_0153fa04:
      local_74[0] = uVar2;
      uVar5 = 1;
    }
  }
  if (cVar4 != '\0') {
    if ((int)uVar5 < 1) {
      uVar8 = 0;
      goto LAB_0153fa7c;
    }
    uVar9 = (ulong)uVar5;
    puVar6 = local_74;
    uVar8 = 0;
    do {
      uVar5 = uVar8;
      if (*puVar6 < 0x100) {
        uVar5 = uVar8 + 1;
        local_74[(int)uVar8] = *puVar6;
      }
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + 1;
      uVar8 = uVar5;
    } while (uVar9 != 0);
  }
  uVar8 = 0;
  if (((param_3 & 0xffff) < 0x100 || cVar4 == '\0') && (uVar5 == 1)) {
    if ((param_7 & 1) == 0) {
      v8::internal::RegExpMacroAssembler::LoadCurrentCharacter
                ((int)plVar7,(Label *)(ulong)param_5,SUB81(param_4,0),param_6 & 1,1);
      uVar8 = param_6;
    }
    else {
      uVar8 = 0;
    }
    (**(code **)(*plVar7 + 0x90))(plVar7,uVar2,param_4);
  }
LAB_0153fa7c:
  return uVar8 & 1;
}

