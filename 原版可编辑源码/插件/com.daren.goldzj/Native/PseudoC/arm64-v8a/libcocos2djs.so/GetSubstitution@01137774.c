
/* v8::internal::String::GetSubstitution(v8::internal::Isolate*, v8::internal::String::Match*,
   v8::internal::Handle<v8::internal::String>, int) */

ulong * v8::internal::String::GetSubstitution
                  (Factory *param_1,long *param_2,long *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  int iVar14;
  IncrementalStringBuilder aIStack_98 [8];
  int local_90;
  int local_88;
  int local_84;
  long *local_78;
  uint local_70;
  int local_6c;
  ulong local_68;
  
  iVar1 = *(int *)(*param_3 + 7);
  iVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  puVar7 = (ulong *)Flatten(param_1,param_3,0);
  uVar8 = Factory::LookupSingleCharacterStringFromCode(param_1,0x24);
  iVar5 = IndexOf(param_1,puVar7,uVar8,param_4);
  if (-1 < iVar5) {
    IncrementalStringBuilder::IncrementalStringBuilder(aIStack_98,(Isolate *)param_1);
    if (iVar5 != 0) {
      puVar9 = puVar7;
      if (*(int *)(*puVar7 + 7) != iVar5) {
        puVar9 = (ulong *)Factory::NewProperSubString(param_1,puVar7,0,iVar5);
      }
      IncrementalStringBuilder::AppendString(aIStack_98,puVar9);
    }
    while (iVar14 = iVar5 + 1, iVar14 < iVar1) {
      local_68 = *puVar7;
      local_70 = (uint)*(ushort *)
                        ((local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1)) + 7);
      local_6c = iVar14;
      uVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                        (&local_70,&local_68,&local_6c);
      switch(uVar3) {
      case 0x24:
        lVar12 = (long)local_84;
        local_84 = local_84 + 1;
        if (local_90 == 0) {
          *(undefined1 *)(*local_78 + lVar12 + 0xb) = 0x24;
        }
        else {
          *(undefined2 *)(*local_78 + lVar12 * 2 + 0xb) = 0x24;
        }
        if (local_84 == local_88) {
          IncrementalStringBuilder::Extend(aIStack_98);
        }
        goto LAB_01137ac0;
      default:
        goto switchD_011378b4_caseD_25;
      case 0x26:
        pcVar13 = *(code **)*param_2;
        break;
      case 0x27:
        pcVar13 = *(code **)(*param_2 + 0x10);
        break;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        iVar6 = uVar3 - 0x30;
        if (iVar5 + 2 < iVar1) {
          local_68 = *puVar7;
          local_70 = (uint)*(ushort *)
                            ((local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1)) + 7);
          local_6c = iVar5 + 2;
          uVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                            (&local_70,&local_68,&local_6c);
          if (9 < (ushort)(uVar3 - 0x30)) goto LAB_01137970;
          iVar2 = iVar6 * 10 + (uint)uVar3 + -0x30;
          iVar5 = 1;
          if (iVar2 < iVar4) {
            iVar5 = 2;
            iVar6 = iVar2;
          }
        }
        else {
LAB_01137970:
          iVar5 = 1;
        }
        if ((iVar6 == 0) || (iVar4 <= iVar6)) goto switchD_011378b4_caseD_25;
        lVar12 = (**(code **)(*param_2 + 0x28))(param_2,iVar6,&local_68);
        if (lVar12 == 0) {
          return (ulong *)0x0;
        }
        if ((char)local_68 != '\0') {
          IncrementalStringBuilder::AppendString(aIStack_98,lVar12);
        }
        iVar14 = iVar5 + iVar14;
        goto LAB_01137ac4;
      case 0x3c:
        uVar10 = (**(code **)(*param_2 + 0x20))(param_2);
        if ((uVar10 & 1) != 0) {
          uVar11 = Factory::LookupSingleCharacterStringFromCode(param_1,0x3e);
          iVar6 = IndexOf(param_1,puVar7,uVar11,iVar5 + 2);
          if (iVar6 != -1) {
            uVar11 = Factory::NewProperSubString(param_1,puVar7,iVar5 + 2,iVar6);
            lVar12 = (**(code **)(*param_2 + 0x30))(param_2,uVar11,&local_68);
            if (lVar12 == 0) {
              return (ulong *)0x0;
            }
            if ((int)local_68 == 2) {
              IncrementalStringBuilder::AppendString(aIStack_98,lVar12);
            }
            iVar14 = iVar6 + 1;
            goto LAB_01137ac4;
          }
        }
        goto switchD_011378b4_caseD_25;
      case 0x60:
        pcVar13 = *(code **)(*param_2 + 8);
      }
      uVar11 = (*pcVar13)(param_2);
      IncrementalStringBuilder::AppendString(aIStack_98,uVar11);
LAB_01137ac0:
      iVar14 = iVar5 + 2;
LAB_01137ac4:
      iVar5 = IndexOf(param_1,puVar7,uVar8,iVar14);
      if (iVar5 < 0) {
        if (iVar14 < iVar1) {
          uVar8 = Factory::NewProperSubString(param_1,puVar7,iVar14,iVar1);
          IncrementalStringBuilder::AppendString(aIStack_98,uVar8);
        }
        goto LAB_01137ba8;
      }
      if (iVar14 < iVar5) {
        uVar11 = Factory::NewProperSubString(param_1,puVar7,iVar14,iVar5);
        IncrementalStringBuilder::AppendString(aIStack_98,uVar11);
      }
    }
    lVar12 = (long)local_84;
    local_84 = local_84 + 1;
    if (local_90 == 0) {
      *(undefined1 *)(*local_78 + lVar12 + 0xb) = 0x24;
    }
    else {
      *(undefined2 *)(*local_78 + lVar12 * 2 + 0xb) = 0x24;
    }
    if (local_84 == local_88) {
      IncrementalStringBuilder::Extend(aIStack_98);
    }
LAB_01137ba8:
    puVar7 = (ulong *)IncrementalStringBuilder::Finish(aIStack_98);
  }
  return puVar7;
switchD_011378b4_caseD_25:
  lVar12 = (long)local_84;
  local_84 = local_84 + 1;
  if (local_90 == 0) {
    *(undefined1 *)(*local_78 + lVar12 + 0xb) = 0x24;
  }
  else {
    *(undefined2 *)(*local_78 + lVar12 * 2 + 0xb) = 0x24;
  }
  if (local_84 == local_88) {
    IncrementalStringBuilder::Extend(aIStack_98);
  }
  goto LAB_01137ac4;
}

