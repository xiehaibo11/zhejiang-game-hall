
/* v8::internal::CodeStatistics::RecordCodeAndMetadataStatistics(v8::internal::HeapObject,
   v8::internal::Isolate*) */

void v8::internal::CodeStatistics::RecordCodeAndMetadataStatistics(ulong param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong local_48;
  
  uVar8 = param_1 & 0xffffffff00000000;
  uVar6 = uVar8 | 7;
  if (*(short *)(uVar6 + *(uint *)(param_1 - 1)) == 0x65) {
    if ((((*(uint *)(param_1 + 3) & 1) != 0) &&
        (local_48 = uVar8 | *(uint *)(param_1 + 3),
        *(ushort *)(uVar6 + *(uint *)(local_48 - 1)) < 0x40)) &&
       ((*(ushort *)(uVar6 + *(uint *)(local_48 - 1)) & 7) == 2)) {
      iVar4 = *(int *)(param_2 + 0xb7f8);
      iVar3 = ExternalString::ExternalPayloadSize((ExternalString *)&local_48);
      *(int *)(param_2 + 0xb7f8) = iVar3 + iVar4;
    }
  }
  else {
    puVar7 = (uint *)(param_1 - 1);
    if ((*(short *)(uVar6 + *puVar7) == 0x86) || (*(short *)(uVar6 + *puVar7) == 0x9a)) {
      if (*(short *)(uVar6 + *puVar7) == 0x9a) {
        iVar3 = *(int *)(param_1 + 0x13);
        if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
          uVar5 = (long)(iVar3 + 0x47) & 0xfffffffffffffff8;
          iVar3 = (int)uVar5 + *(int *)((long)puVar7 + uVar5) + -0x38;
        }
        iVar1 = *(int *)((uVar8 | *(uint *)(param_1 + 3)) + 3);
        local_48 = uVar8 | *(uint *)(param_1 + 7);
        iVar4 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar8 | *(uint *)(local_48 - 1));
        iVar4 = ((iVar1 >> 1) + 0xbU & 0xfffffffc) + ((iVar3 + 3U & 0xfffffffc) + 0x5f & 0xffffffe0)
                + iVar4;
      }
      else {
        iVar4 = *(int *)(param_1 + 3);
        local_48 = uVar8 | *(uint *)(param_1 + 7);
        iVar3 = HeapObject::SizeFromMap((HeapObject *)&local_48,uVar8 | *(uint *)(local_48 - 1));
        uVar2 = *(uint *)(param_1 + 0xf);
        iVar4 = iVar3 + ((iVar4 >> 1) + 0x25U & 0xfffffffc) +
                ((*(int *)((uVar8 | *(uint *)(param_1 + 0xb)) + 3) >> 1) + 0xbU & 0xfffffffc);
        if (((uVar2 & 1) == 0) ||
           ((uVar2 != *(uint *)(uVar8 + 0xa0) && (uVar2 != *(uint *)(uVar8 + 0x180))))) {
          uVar5 = uVar8 | uVar2;
          if (((uVar2 & 1) == 0) || (*(short *)(uVar6 + *(uint *)(uVar5 - 1)) != 0x85)) {
            if (uVar2 == *(uint *)(uVar8 + 0x180)) {
              uVar5 = *(ulong *)(uVar8 + 0x3c0);
            }
            else {
              uVar5 = uVar8 | *(uint *)(uVar5 + 3);
            }
          }
          iVar4 = ((*(int *)(uVar5 + 3) >> 1) + 0xbU & 0xfffffffc) + iVar4;
        }
      }
      if (*(short *)(uVar6 + *puVar7) == 0x9a) {
        *(int *)(param_2 + 0xb7f0) = *(int *)(param_2 + 0xb7f0) + iVar4;
      }
      else {
        *(int *)(param_2 + 0xb7f4) = *(int *)(param_2 + 0xb7f4) + iVar4;
      }
    }
  }
  return;
}

