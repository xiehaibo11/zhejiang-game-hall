
/* v8::internal::CodeStatistics::CollectCodeStatistics(v8::internal::PagedSpace*,
   v8::internal::Isolate*) */

void v8::internal::CodeStatistics::CollectCodeStatistics(PagedSpace *param_1,Isolate *param_2)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  PagedSpaceObjectIterator aPStack_60 [8];
  uint *local_58;
  uint *local_50;
  long local_40;
  ulong local_8;
  
  PagedSpaceObjectIterator::PagedSpaceObjectIterator(aPStack_60,(Heap *)(param_2 + 0x8850),param_1);
  do {
    puVar3 = local_50;
    if (local_58 != local_50) {
      do {
        while ((local_58 != *(uint **)(local_40 + 0x68) ||
               (puVar4 = *(uint **)(local_40 + 0x70), local_58 == puVar4))) {
          local_8 = (long)local_58 + 1;
          iVar1 = HeapObject::SizeFromMap
                            ((HeapObject *)&local_8,local_8 & 0xffffffff00000000 | (ulong)*local_58)
          ;
          local_58 = (uint *)((long)local_58 + (long)iVar1);
          if ((*(ushort *)((local_8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_8 - 1)) | 1)
              != 0xa1) {
            iVar1 = (int)local_8;
            if (iVar1 != 0) {
joined_r0x014f09b4:
              if (iVar1 == 0) {
                return;
              }
              RecordCodeAndMetadataStatistics(local_8,param_2);
              do {
                puVar3 = local_50;
                if (local_58 != local_50) {
                  do {
                    while ((local_58 != *(uint **)(local_40 + 0x68) ||
                           (puVar4 = *(uint **)(local_40 + 0x70), local_58 == puVar4))) {
                      local_8 = (long)local_58 + 1;
                      iVar1 = HeapObject::SizeFromMap
                                        ((HeapObject *)&local_8,
                                         local_8 & 0xffffffff00000000 | (ulong)*local_58);
                      local_58 = (uint *)((long)local_58 + (long)iVar1);
                      if ((*(ushort *)
                            ((local_8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_8 - 1)) | 1
                          ) != 0xa1) {
                        iVar1 = (int)local_8;
                        if (iVar1 != 0) goto joined_r0x014f09b4;
                        goto LAB_014f09d0;
                      }
                      puVar3 = local_50;
                      if (local_58 == local_50) goto LAB_014f09d0;
                    }
                    local_58 = puVar4;
                  } while (puVar4 != puVar3);
                }
LAB_014f09d0:
                uVar2 = PagedSpaceObjectIterator::AdvanceToNextPage(aPStack_60);
                if ((uVar2 & 1) == 0) {
                  return;
                }
              } while( true );
            }
            goto LAB_014f0914;
          }
          puVar3 = local_50;
          if (local_58 == local_50) goto LAB_014f0914;
        }
        local_58 = puVar4;
      } while (puVar4 != puVar3);
    }
LAB_014f0914:
    uVar2 = PagedSpaceObjectIterator::AdvanceToNextPage(aPStack_60);
    if ((uVar2 & 1) == 0) {
      return;
    }
  } while( true );
}

