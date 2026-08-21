
/* v8::internal::Map::CopyForPreventExtensions(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::PropertyAttributes,
   v8::internal::Handle<v8::internal::Symbol>, char const*, bool) */

void v8::internal::Map::CopyForPreventExtensions
               (Isolate *param_1,ulong *param_2,int param_3,undefined8 param_4,undefined8 param_5,
               ulong param_6)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  char cVar8;
  char cVar9;
  ulong uVar10;
  
  uVar10 = *param_2;
  uVar1 = *(uint *)(uVar10 + 0xb);
  uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(param_1 + 0x95a0);
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar10;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
  }
  uVar5 = DescriptorArray::CopyUpToAddAttributes(param_1,puVar4,uVar1 >> 10 & 0x3ff,param_3,0);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x95a0);
    if (puVar6 == *(undefined8 **)(param_1 + 0x95a8)) {
      puVar6 = (undefined8 *)HandleScope::Extend(param_1);
    }
    *(undefined8 **)(param_1 + 0x95a0) = puVar6 + 1;
    *puVar6 = 0;
  }
  else {
    puVar6 = (undefined8 *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
  }
  plVar7 = (long *)CopyReplaceDescriptors
                             (param_1,param_2,uVar5,puVar6,
                              *(int *)(*(long *)(param_1 + 0x9508) + 8) != 0,param_4,param_5,2);
  *(uint *)(*plVar7 + 0xb) = *(uint *)(*plVar7 + 0xb) & 0xf7ffffff;
  bVar2 = *(byte *)(*param_2 + 10) >> 3;
  if ((byte)(bVar2 - 0x11) < 0xb) {
    return;
  }
  cVar8 = '\x10';
  if (1 < (byte)(bVar2 - 0xf)) {
    cVar8 = '\f';
  }
  cVar9 = cVar8;
  if ((param_6 & 1) != 0) goto switchD_010f01a8_caseD_4;
  switch(bVar2) {
  case 2:
    cVar8 = '\n';
    if (param_3 != 5) {
      cVar8 = '\x06';
    }
    bVar3 = param_3 == 4;
    cVar9 = '\b';
    break;
  case 3:
    cVar8 = '\v';
    if (param_3 != 5) {
      cVar8 = '\a';
    }
    bVar3 = param_3 == 4;
    cVar9 = '\t';
    break;
  default:
    goto switchD_010f01a8_caseD_4;
  case 6:
    if (param_3 == 4) {
      cVar9 = '\b';
    }
    else if (param_3 == 5) {
      cVar9 = '\n';
    }
    goto switchD_010f01a8_caseD_4;
  case 7:
    if (param_3 == 4) {
      cVar9 = '\t';
    }
    else if (param_3 == 5) {
      cVar9 = '\v';
    }
    goto switchD_010f01a8_caseD_4;
  case 8:
    bVar3 = param_3 == 5;
    cVar9 = '\n';
    break;
  case 9:
    bVar3 = param_3 == 5;
    cVar9 = '\v';
  }
  if (!bVar3) {
    cVar9 = cVar8;
  }
switchD_010f01a8_caseD_4:
  *(byte *)(*plVar7 + 10) = *(byte *)(*plVar7 + 10) & 7 | cVar9 << 3;
  return;
}

