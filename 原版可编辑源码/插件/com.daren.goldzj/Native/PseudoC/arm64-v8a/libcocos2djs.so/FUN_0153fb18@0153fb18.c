
undefined8
FUN_0153fb18(long param_1,long param_2,uint param_3,undefined8 param_4,uint param_5,uint param_6,
            uint param_7)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  ushort uVar10;
  undefined8 local_78;
  uint local_70 [4];
  
  uVar9 = (ulong)(param_3 & 0xff);
  lVar6 = param_1 + uVar9 * 8;
  plVar8 = *(long **)(param_2 + 0x28);
  cVar2 = *(char *)(param_2 + 0x30);
  uVar5 = param_3 & 0xffff;
  if (*(uint *)(lVar6 + 0x9e18) == uVar5) {
    iVar1 = *(int *)(lVar6 + 0x9e1c);
    if (iVar1 != 0) {
      local_70[0] = iVar1 + uVar5;
      uVar4 = 1;
      goto joined_r0x0153fc20;
    }
  }
  else {
    local_78 = CONCAT71(local_78._1_7_,1);
    uVar4 = unibrow::Ecma262UnCanonicalize::Convert(uVar5,0,local_70,(bool *)&local_78);
    if (local_78._0_1_ == false) {
      if (uVar4 != 0) goto joined_r0x0153fc20;
    }
    else {
      if (uVar4 == 1) {
        *(ulong *)(param_1 + uVar9 * 8 + 0x9e18) =
             (ulong)param_3 & 0xffff | (ulong)(local_70[0] - uVar5) << 0x20;
        goto joined_r0x0153fc20;
      }
      *(ulong *)(param_1 + uVar9 * 8 + 0x9e18) = (ulong)param_3 & 0xffff;
    }
  }
  local_70[0] = uVar5;
  uVar4 = 1;
joined_r0x0153fc20:
  if (cVar2 != '\0') {
    if ((int)uVar4 < 1) {
      return 0;
    }
    uVar9 = (ulong)uVar4;
    puVar7 = local_70;
    uVar4 = 0;
    do {
      if (*puVar7 < 0x100) {
        local_70[(int)uVar4] = *puVar7;
        uVar4 = uVar4 + 1;
      }
      uVar9 = uVar9 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar9 != 0);
  }
  if (1 < (int)uVar4) {
    if ((param_7 & 1) == 0) {
      v8::internal::RegExpMacroAssembler::LoadCurrentCharacter
                ((int)plVar8,(Label *)(ulong)param_5,SUB81(param_4,0),param_6 & 1,1);
    }
    local_78 = 0;
    if (uVar4 == 2) {
      uVar5 = 0xff;
      if (cVar2 == '\0') {
        uVar5 = 0xffffffff;
      }
      uVar4 = local_70[1] ^ local_70[0];
      if ((uVar4 & uVar4 - 1 & 0xffff) == 0) {
        (**(code **)(*plVar8 + 0x98))(plVar8,local_70[0] & 0xffff,(uVar5 ^ uVar4) & 0xffff,param_4);
        return 1;
      }
      uVar3 = local_70[1] - local_70[0];
      uVar4 = uVar3 & 0xffff;
      if ((uVar4 <= (local_70[0] & 0xffff)) &&
         (uVar10 = NEON_uaddlv((ulong)CONCAT11(POPCOUNT((char)(uVar4 >> 8)),POPCOUNT((char)uVar4)),1
                              ), uVar10 < 2)) {
        (**(code **)(*plVar8 + 0xa0))(plVar8,local_70[0] - uVar3,uVar3,uVar3 ^ uVar5,param_4);
        return 1;
      }
      (**(code **)(*plVar8 + 0x48))(plVar8,local_70[0],&local_78);
      lVar6 = *plVar8;
      local_70[2] = local_70[1];
    }
    else {
      if (uVar4 == 4) {
        (**(code **)(*plVar8 + 0x48))(plVar8,local_70[3],&local_78);
      }
      else if (uVar4 != 3) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      (**(code **)(*plVar8 + 0x48))(plVar8,local_70[0],&local_78);
      (**(code **)(*plVar8 + 0x48))(plVar8,local_70[1],&local_78);
      lVar6 = *plVar8;
    }
    (**(code **)(lVar6 + 0x90))(plVar8,local_70[2],param_4);
    (**(code **)(*plVar8 + 0x40))(plVar8,&local_78);
    return 1;
  }
  return 0;
}

