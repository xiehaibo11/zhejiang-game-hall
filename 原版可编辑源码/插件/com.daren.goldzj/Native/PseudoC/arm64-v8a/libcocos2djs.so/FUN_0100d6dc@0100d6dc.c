
void FUN_0100d6dc(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long local_28;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 != 0) {
    uVar8 = 0;
    do {
      local_28 = *(long *)(param_1 + uVar8 * 8 + 0x10);
      uVar1 = *(uint *)(local_28 + 0xf);
      if ((int)uVar1 >> 1 != 0) {
        lVar7 = 0;
        iVar9 = 0xc;
        while( true ) {
          puVar5 = (uint *)(local_28 + iVar9 + 7);
          uVar3 = *puVar5;
          uVar4 = (ulong)puVar5 & 0xffffffff00000000 | (ulong)uVar3;
          uVar6 = *(ulong *)(((ulong)puVar5 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000
                             ) + 8);
          if ((((uint)uVar6 >> 3 & 1) == 0) || ((*(uint *)(uVar4 - 1) & 1) == 0)) {
            uVar2 = *(uint *)(uVar4 - 1);
            if ((uVar6 & 8) != 0) {
              uVar3 = 0;
            }
            if ((uVar2 & 1) == 0) {
              uVar3 = uVar2 + 1;
            }
            *puVar5 = uVar3;
          }
          else {
            v8::internal::
            ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
            ::RemoveEntry((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                           *)&local_28,lVar7);
          }
          if (((long)((ulong)uVar1 << 0x20) >> 0x21) + -1 == lVar7) break;
          lVar7 = lVar7 + 1;
          iVar9 = iVar9 + 8;
        }
        uVar4 = *(ulong *)(param_1 + 8);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  return;
}

