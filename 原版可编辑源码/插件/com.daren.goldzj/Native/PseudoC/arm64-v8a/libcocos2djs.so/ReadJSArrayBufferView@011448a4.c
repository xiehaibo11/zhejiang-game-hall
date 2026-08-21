
/* v8::internal::ValueDeserializer::ReadJSArrayBufferView(v8::internal::Handle<v8::internal::JSArrayBuffer>)
    */

undefined8 __thiscall
v8::internal::ValueDeserializer::ReadJSArrayBufferView(ValueDeserializer *this,long *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  
  pbVar13 = *(byte **)(this + 0x10);
  pbVar1 = *(byte **)(this + 0x18);
  uVar3 = *(uint *)(*param_2 + 0xb);
  uVar12 = 0;
  uVar9 = 0;
  do {
    if (pbVar1 <= pbVar13) {
      return 0;
    }
    bVar4 = *pbVar13;
    if (uVar9 < 8) {
      uVar12 = uVar12 | (bVar4 & 0x7f) << (ulong)(uVar9 & 0x1f);
      uVar9 = uVar9 + 7;
    }
    pbVar13 = pbVar13 + 1;
    *(byte **)(this + 0x10) = pbVar13;
  } while ((char)bVar4 < '\0');
  uVar10 = 0;
  uVar9 = 0;
  do {
    if (pbVar1 <= pbVar13) {
      return 0;
    }
    bVar4 = *pbVar13;
    if (uVar9 < 0x20) {
      uVar10 = (bVar4 & 0x7f) << (ulong)(uVar9 & 0x1f) | uVar10;
      uVar9 = uVar9 + 7;
    }
    pbVar13 = pbVar13 + 1;
    *(byte **)(this + 0x10) = pbVar13;
  } while ((char)bVar4 < '\0');
  uVar11 = 0;
  uVar9 = 0;
  do {
    if (pbVar1 <= pbVar13) {
      return 0;
    }
    bVar4 = *pbVar13;
    if (uVar9 < 0x20) {
      uVar11 = (bVar4 & 0x7f) << (ulong)(uVar9 & 0x1f) | uVar11;
      uVar9 = uVar9 + 7;
    }
    pbVar13 = pbVar13 + 1;
    *(byte **)(this + 0x10) = pbVar13;
  } while ((char)bVar4 < '\0');
  if (uVar3 < uVar10) {
    return 0;
  }
  if (uVar3 - uVar10 < uVar11) {
    return 0;
  }
  iVar2 = *(int *)(this + 0x24);
  *(int *)(this + 0x24) = iVar2 + 1;
  uVar7 = 2;
  uVar9 = 1;
  switch(uVar12 & 0xff) {
  case 0x3f:
    uVar7 = Factory::NewJSDataView(*(Factory **)this,param_2,uVar10,uVar11);
    goto LAB_01144a98;
  default:
    goto switchD_011449cc_caseD_40;
  case 0x42:
    break;
  case 0x43:
    uVar7 = 9;
    uVar9 = 1;
    break;
  case 0x44:
    uVar7 = 6;
    uVar9 = 4;
    break;
  case 0x46:
    uVar9 = 8;
    uVar7 = 8;
    break;
  case 0x51:
    uVar7 = 0xb;
    goto LAB_01144a44;
  case 0x57:
    uVar7 = 4;
    goto LAB_01144a50;
  case 0x62:
    uVar9 = 1;
    uVar7 = 1;
    break;
  case 100:
    uVar7 = 5;
    uVar9 = 4;
    break;
  case 0x66:
    uVar7 = 7;
    uVar9 = 4;
    break;
  case 0x71:
    uVar7 = 10;
LAB_01144a44:
    uVar9 = 8;
    break;
  case 0x77:
    uVar7 = 3;
LAB_01144a50:
    uVar9 = 2;
  }
  uVar3 = 0;
  if (uVar9 != 0) {
    uVar3 = uVar10 / uVar9;
  }
  if (uVar10 == uVar3 * uVar9) {
    uVar3 = 0;
    if (uVar9 != 0) {
      uVar3 = uVar11 / uVar9;
    }
    if (uVar11 == uVar3 * uVar9) {
      uVar7 = Factory::NewJSTypedArray(*(Factory **)this,uVar7,param_2,uVar10,uVar3);
LAB_01144a98:
      puVar5 = (ulong *)FixedArray::SetAndGrow
                                  (*(undefined8 *)this,*(undefined8 *)(this + 0x30),iVar2,uVar7);
      puVar8 = *(ulong **)(this + 0x30);
      if (puVar5 == puVar8) {
        return uVar7;
      }
      if (((puVar5 != (ulong *)0x0) && (puVar8 != (ulong *)0x0)) && (*puVar5 == *puVar8)) {
        return uVar7;
      }
      GlobalHandles::Destroy(puVar8);
      uVar6 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar5);
      *(undefined8 *)(this + 0x30) = uVar6;
      return uVar7;
    }
  }
switchD_011449cc_caseD_40:
  return 0;
}

