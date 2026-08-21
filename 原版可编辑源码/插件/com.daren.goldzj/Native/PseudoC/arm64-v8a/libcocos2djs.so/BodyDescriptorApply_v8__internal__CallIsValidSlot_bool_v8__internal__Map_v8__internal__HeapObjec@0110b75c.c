
/* bool v8::internal::BodyDescriptorApply<v8::internal::CallIsValidSlot, bool, v8::internal::Map,
   v8::internal::HeapObject, int, int>(v8::internal::InstanceType, v8::internal::Map,
   v8::internal::HeapObject, int, int) */

bool v8::internal::
     BodyDescriptorApply<v8::internal::CallIsValidSlot,bool,v8::internal::Map,v8::internal::HeapObject,int,int>
               (ushort param_1,long param_2,long param_3,uint param_4)

{
  ushort *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = (uint)param_1;
  if (uVar6 < 0x40) {
    switch(param_1 & 7) {
    case 0:
    case 2:
      return false;
    case 1:
    case 3:
      param_4 = param_4 - 0xc;
      goto LAB_0110b7a4;
    default:
      goto switchD_0110b79c_caseD_4;
    case 5:
      goto switchD_0110b79c_caseD_5;
    }
  }
  bVar4 = false;
  switch(uVar6) {
  case 0x40:
    goto switchD_0110b79c_caseD_5;
  case 0x41:
  case 0x42:
  case 0x46:
  case 0x85:
  case 0x87:
  case 0x9e:
  case 0xa0:
  case 0xa1:
    break;
  case 0x43:
    param_4 = param_4 - 0xc;
    goto LAB_0110b964;
  case 0x44:
    bVar4 = param_4 - 4 < 0x14;
    bVar3 = param_4 - 0x18 < 0x30;
    goto LAB_0110ba8c;
  case 0x45:
    bVar4 = param_4 - 4 < 0x14;
    bVar3 = param_4 - 0x1c < 8;
    goto LAB_0110ba8c;
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
    if (param_1 == 0x70) goto switchD_0110b7dc_caseD_9c;
    if ((param_1 == 100) || (param_1 != 0x74)) goto switchD_0110b7dc_caseD_4c;
    bVar2 = SBORROW4(param_4,0x17);
    bVar4 = (int)(param_4 - 0x17) < 0;
    bVar3 = param_4 == 0x17;
    goto LAB_0110b838;
  case 0x4c:
  case 0x4d:
  case 0x59:
  case 0x97:
  case 0x98:
  case 0xa7:
  case 0xa8:
switchD_0110b7dc_caseD_4c:
    bVar2 = SBORROW4(param_4,3);
    bVar4 = (int)(param_4 - 3) < 0;
    bVar3 = param_4 == 3;
    goto LAB_0110b838;
  case 0x55:
    if (0xb < param_4 - 4) {
      return param_4 == 0x18 && *(char *)(param_2 + 3) == '\a';
    }
    goto switchD_0110b7dc_caseD_9a;
  case 0x5d:
  case 0x96:
  case 0x99:
    bVar4 = (param_4 & 0xfffffffc) == 4;
    break;
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x90:
  case 0x91:
  case 0xa4:
    bVar2 = SBORROW4(param_4,7);
    bVar4 = (int)(param_4 - 7) < 0;
    bVar3 = param_4 == 7;
    goto LAB_0110b838;
  case 0x86:
    bVar4 = param_4 - 8 < 9;
    break;
  case 0x8f:
    bVar4 = (int)param_4 < 0x424;
    break;
  case 0x92:
    if ((int)param_4 < 8) goto LAB_0110b810;
    uVar6 = (uint)*(byte *)(param_3 + 5) << 4 | 8;
    bVar2 = SBORROW4(uVar6,param_4);
    bVar4 = (int)(uVar6 - param_4) < 0;
    bVar3 = uVar6 == param_4;
    goto LAB_0110b838;
  case 0x93:
    if ((int)param_4 < 8) goto LAB_0110b810;
    uVar6 = (uint)*(byte *)(param_3 + 5) * 8 + 8;
LAB_0110b9dc:
    bVar2 = SBORROW4(uVar6,param_4);
    bVar4 = (int)(uVar6 - param_4) < 0;
    bVar3 = uVar6 == param_4;
    goto LAB_0110b838;
  case 0x94:
    if (0xb < (int)param_4) {
      uVar6 = (uint)*(byte *)(param_3 + 9) * 0x18 + 0xc;
      goto LAB_0110b9dc;
    }
    goto LAB_0110b810;
  case 0x95:
    bVar4 = (param_4 & 0xfffffffc) == 4 || (param_4 & 0xfffffffc) == 0x10;
    break;
  case 0x9a:
    goto switchD_0110b7dc_caseD_9a;
  case 0x9b:
    param_4 = param_4 - 4;
LAB_0110b7a4:
    return param_4 < 8;
  case 0x9c:
switchD_0110b7dc_caseD_9c:
    bVar2 = SBORROW4(param_4,0xb);
    bVar4 = (int)(param_4 - 0xb) < 0;
    bVar3 = param_4 == 0xb;
    goto LAB_0110b838;
  case 0x9d:
    bVar4 = (int)param_4 < 8;
    bVar3 = (param_4 & 7) == 0;
LAB_0110ba8c:
    bVar4 = (bool)(bVar4 | bVar3);
    break;
  case 0x9f:
    if ((param_4 < 0xd) && ((1 << (ulong)(param_4 & 0x1f) & 0x1110U) != 0)) {
      return true;
    }
    bVar2 = SBORROW4(param_4,0x1f);
    bVar4 = (int)(param_4 - 0x1f) < 0;
    bVar3 = param_4 == 0x1f;
LAB_0110b838:
    bVar4 = !bVar3 && bVar4 == bVar2;
    break;
  case 0xa2:
    bVar4 = param_4 - 0x10 < 0x18;
    break;
  case 0xa3:
    bVar4 = (int)(*(int *)(param_3 + 3) + 0xfU & 0xfffffffc) <= (int)param_4;
    break;
  case 0xa5:
  case 0xa6:
    param_4 = param_4 - 4;
LAB_0110b964:
    bVar4 = param_4 < 0x10;
    break;
  case 0xa9:
    bVar4 = param_4 - 4 < 0xc;
    break;
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0x410:
  case 0x411:
  case 0x412:
  case 0x413:
  case 0x414:
  case 0x415:
  case 0x416:
  case 0x417:
  case 0x418:
  case 0x419:
  case 0x41c:
  case 0x41d:
  case 0x420:
  case 0x421:
  case 0x422:
  case 0x423:
  case 0x425:
  case 0x426:
  case 0x427:
  case 0x428:
  case 0x429:
  case 0x42a:
  case 0x42b:
  case 0x42c:
  case 0x42d:
  case 0x42e:
  case 0x42f:
  case 0x430:
  case 0x432:
  case 0x433:
  case 0x435:
  case 0x436:
  case 0x437:
  case 0x438:
  case 0x439:
    if (3 < (int)param_4) goto switchD_0110b7dc_caseD_41e;
    goto LAB_0110b810;
  default:
    PrintF("Unknown type: %d\n",(ulong)uVar6);
switchD_0110b79c_caseD_4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x41a:
    if (0xf < (int)param_4) {
      if ((int)param_4 < 0x28) goto LAB_0110b810;
      goto switchD_0110b7dc_caseD_41e;
    }
    goto switchD_0110b7dc_caseD_9a;
  case 0x41b:
    if ((int)param_4 < 0x10) {
      return true;
    }
    if (param_4 == 0x30) {
      return true;
    }
    if (0x33 < (int)param_4) goto switchD_0110b7dc_caseD_41e;
LAB_0110b810:
    bVar4 = false;
    break;
  case 0x41e:
  case 0x41f:
  case 0x431:
    goto switchD_0110b7dc_caseD_41e;
  case 0x424:
    if (0xb < (int)param_4) {
      if ((int)param_4 < 0x20) goto LAB_0110b810;
      goto switchD_0110b7dc_caseD_41e;
    }
switchD_0110b7dc_caseD_9a:
    bVar4 = true;
    break;
  case 0x434:
    if ((int)param_4 < 0x10) {
      uVar8 = 0xf;
      puVar7 = &WasmInstanceObject::kTaggedFieldOffsets;
      do {
        uVar9 = uVar8 >> 1;
        puVar1 = puVar7 + uVar9 + 1;
        uVar8 = uVar8 + ~uVar9;
        if ((param_4 & 0xffff) <= (uint)puVar7[uVar9]) {
          puVar1 = puVar7;
          uVar8 = uVar9;
        }
        puVar7 = puVar1;
      } while (uVar8 != 0);
      if ((puVar1 != (ushort *)&DAT_019f0a14) && ((uint)*puVar1 <= (param_4 & 0xffff)))
      goto switchD_0110b7dc_caseD_9a;
    }
switchD_0110b7dc_caseD_41e:
    if (*(short *)(param_2 + 7) == 0x421) {
      iVar5 = 0xc;
    }
    else {
      iVar5 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
    }
    bVar4 = true;
    if ((iVar5 <= (int)param_4) && ((int)param_4 < (int)((uint)*(byte *)(param_2 + 4) * 4))) {
      bVar4 = (param_4 - iVar5 & 7) == 0;
    }
  }
  return bVar4;
switchD_0110b79c_caseD_5:
  return (param_4 & 0xfffffffc) == 0xc;
}

