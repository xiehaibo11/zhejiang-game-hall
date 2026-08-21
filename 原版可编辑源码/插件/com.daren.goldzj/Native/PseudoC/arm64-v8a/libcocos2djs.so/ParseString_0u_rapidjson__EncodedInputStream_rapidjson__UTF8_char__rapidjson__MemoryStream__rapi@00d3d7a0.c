
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseString<0u, rapidjson::EncodedInputStream<rapidjson::UTF8<char>,
   rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, bool) */

void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
     ParseString<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
               (EncodedInputStream *param_1,GenericDocument *param_2,bool param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  EncodedInputStream *pEVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  byte bVar18;
  void *pvVar19;
  byte *pbVar20;
  char *pcVar21;
  undefined1 *puVar22;
  EncodedInputStream *local_78;
  uint local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)param_2;
  pbVar17 = (byte *)plVar9[2];
  if ((byte *)*plVar9 != pbVar17) {
    *plVar9 = (long)((byte *)*plVar9 + 1);
  }
  local_70 = 0;
  pbVar15 = (byte *)*plVar9;
  local_78 = param_1;
  if (pbVar15 != pbVar17) {
    do {
      pEVar4 = local_78;
      bVar18 = *pbVar15;
      if (bVar18 == 0x5c) {
        lVar11 = *plVar9;
        pbVar20 = pbVar15 + 1;
        *plVar9 = (long)pbVar20;
        if (pbVar20 == pbVar17) {
          bVar18 = 0;
        }
        else {
          bVar18 = *pbVar20;
          cVar2 = (&ParseStringToStream<0u,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::StackStream<char>>(rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>&,rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::StackStream<char>&)
                    ::escape)[bVar18];
          if (cVar2 != '\0') {
            if (pbVar20 != pbVar17) {
              *plVar9 = (long)(pbVar15 + 2);
            }
            pcVar21 = *(char **)(local_78 + 0x18);
            pcVar10 = *(char **)(local_78 + 0x20);
            pcVar16 = pcVar21 + 1;
            if (pcVar10 < pcVar16) {
              pvVar19 = *(void **)(local_78 + 0x10);
              if (pvVar19 == (void *)0x0) {
                if (*(long *)local_78 == 0) {
                  pvVar7 = operator_new(1);
                  *(void **)pEVar4 = pvVar7;
                  *(void **)(pEVar4 + 8) = pvVar7;
                }
                pcVar10 = *(char **)(pEVar4 + 0x28);
              }
              else {
                pcVar10 = pcVar10 + (((ulong)(pcVar10 + (1 - (long)pvVar19)) >> 1) - (long)pvVar19);
              }
              lVar11 = (long)pcVar21 - (long)pvVar19;
              if (pcVar10 < (char *)(lVar11 + 1U)) {
                pcVar10 = (char *)(lVar11 + 1);
              }
              if (pcVar10 == (char *)0x0) {
                free(pvVar19);
                pvVar19 = (void *)0x0;
              }
              else {
                pvVar19 = realloc(pvVar19,(size_t)pcVar10);
              }
              pcVar21 = (char *)((long)pvVar19 + lVar11);
              *(char **)(pEVar4 + 0x20) = (char *)((long)pvVar19 + (long)pcVar10);
              pcVar16 = pcVar21 + 1;
              *(void **)(pEVar4 + 0x10) = pvVar19;
              *(char **)(pEVar4 + 0x18) = pcVar21;
            }
            *(char **)(pEVar4 + 0x18) = pcVar16;
            *pcVar21 = cVar2;
            goto LAB_00d3d858;
          }
        }
        uVar8 = lVar11 - plVar9[1];
        if (bVar18 != 0x75) {
          *(undefined4 *)(param_1 + 0x30) = 10;
          *(ulong *)(param_1 + 0x38) = uVar8;
          goto LAB_00d3dbbc;
        }
        if (pbVar20 != pbVar17) {
          *plVar9 = (long)(pbVar15 + 2);
        }
        uVar5 = ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>>
                          ((GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>
                            *)param_1,(EncodedInputStream *)param_2,uVar8);
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_00d3dbbc;
        if (uVar5 >> 10 == 0x36) {
          plVar9 = *(long **)param_2;
          pcVar16 = (char *)*plVar9;
          if ((pcVar16 != (char *)plVar9[2]) && (*pcVar16 == '\\')) {
            pcVar10 = pcVar16 + 1;
            *plVar9 = (long)pcVar10;
            if ((pcVar10 != (char *)plVar9[2]) && (*pcVar10 == 'u')) {
              *plVar9 = (long)(pcVar16 + 2);
              uVar6 = ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>>
                                ((GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>
                                  *)param_1,(EncodedInputStream *)param_2,uVar8);
              if (*(int *)(param_1 + 0x30) != 0) goto LAB_00d3dbbc;
              if (uVar6 >> 10 == 0x37) {
                uVar5 = (uVar6 - 0xdc00 | uVar5 * 0x400 + 0xfca00000) + 0x10000;
                goto LAB_00d3d9c8;
              }
            }
          }
          *(undefined4 *)(param_1 + 0x30) = 9;
          *(ulong *)(param_1 + 0x38) = uVar8;
          goto LAB_00d3dbbc;
        }
LAB_00d3d9c8:
        UTF8<char>::
        Encode<rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::StackStream<char>>
                  ((StackStream *)&local_78,uVar5);
      }
      else {
        if (bVar18 == 0x22) {
          *plVar9 = (long)(pbVar15 + 1);
          puVar22 = *(undefined1 **)(local_78 + 0x18);
          puVar13 = *(undefined1 **)(local_78 + 0x20);
          puVar12 = puVar22 + 1;
          if (puVar13 < puVar12) {
            pvVar19 = *(void **)(local_78 + 0x10);
            if (pvVar19 == (void *)0x0) {
              if (*(long *)local_78 == 0) {
                pvVar7 = operator_new(1);
                *(void **)pEVar4 = pvVar7;
                *(void **)(pEVar4 + 8) = pvVar7;
              }
              puVar13 = *(undefined1 **)(pEVar4 + 0x28);
            }
            else {
              puVar13 = puVar13 + (((ulong)(puVar13 + (1 - (long)pvVar19)) >> 1) - (long)pvVar19);
            }
            lVar11 = (long)puVar22 - (long)pvVar19;
            if (puVar13 < (undefined1 *)(lVar11 + 1)) {
              puVar13 = (undefined1 *)(lVar11 + 1);
            }
            if (puVar13 == (undefined1 *)0x0) {
              free(pvVar19);
              pvVar19 = (void *)0x0;
            }
            else {
              pvVar19 = realloc(pvVar19,(size_t)puVar13);
            }
            puVar22 = (undefined1 *)((long)pvVar19 + lVar11);
            *(undefined1 **)(pEVar4 + 0x20) = (undefined1 *)((long)pvVar19 + (long)puVar13);
            puVar12 = puVar22 + 1;
            *(void **)(pEVar4 + 0x10) = pvVar19;
            *(undefined1 **)(pEVar4 + 0x18) = puVar22;
          }
          uVar5 = local_70;
          *(undefined1 **)(pEVar4 + 0x18) = puVar12;
          *puVar22 = 0;
          local_70 = local_70 + 1;
          if (*(int *)(param_1 + 0x30) == 0) {
            lVar11 = *(long *)(local_78 + 0x18);
            *(char **)(local_78 + 0x18) = (char *)(lVar11 - (ulong)local_70);
            uVar8 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                    ::String((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                              *)(ulong)param_3,(char *)(lVar11 - (ulong)local_70),uVar5,true);
            if ((uVar8 & 1) == 0) {
              lVar11 = **(long **)param_2;
              lVar1 = (*(long **)param_2)[1];
              *(undefined4 *)(param_1 + 0x30) = 0x10;
              *(long *)(param_1 + 0x38) = lVar11 - lVar1;
            }
          }
          goto LAB_00d3dbbc;
        }
        if (bVar18 < 0x20) {
          lVar11 = *plVar9 - plVar9[1];
          if (bVar18 == 0) goto LAB_00d3dbb0;
          uVar14 = 10;
          goto LAB_00d3dbb4;
        }
        *plVar9 = (long)(pbVar15 + 1);
        bVar18 = *pbVar15;
        pbVar20 = *(byte **)(local_78 + 0x18);
        pbVar15 = *(byte **)(local_78 + 0x20);
        pbVar17 = pbVar20 + 1;
        if (pbVar15 < pbVar17) {
          pvVar19 = *(void **)(local_78 + 0x10);
          if (pvVar19 == (void *)0x0) {
            if (*(long *)local_78 == 0) {
              pvVar7 = operator_new(1);
              *(void **)pEVar4 = pvVar7;
              *(void **)(pEVar4 + 8) = pvVar7;
            }
            pbVar15 = *(byte **)(pEVar4 + 0x28);
          }
          else {
            pbVar15 = pbVar15 + (((ulong)(pbVar15 + (1 - (long)pvVar19)) >> 1) - (long)pvVar19);
          }
          lVar11 = (long)pbVar20 - (long)pvVar19;
          if (pbVar15 < (byte *)(lVar11 + 1U)) {
            pbVar15 = (byte *)(lVar11 + 1);
          }
          if (pbVar15 == (byte *)0x0) {
            free(pvVar19);
            pvVar19 = (void *)0x0;
          }
          else {
            pvVar19 = realloc(pvVar19,(size_t)pbVar15);
          }
          pbVar20 = (byte *)((long)pvVar19 + lVar11);
          *(void **)(pEVar4 + 0x10) = pvVar19;
          *(byte **)(pEVar4 + 0x18) = pbVar20;
          *(byte **)(pEVar4 + 0x20) = (byte *)((long)pvVar19 + (long)pbVar15);
          pbVar17 = pbVar20 + 1;
        }
        *(byte **)(pEVar4 + 0x18) = pbVar17;
        *pbVar20 = bVar18;
LAB_00d3d858:
        local_70 = local_70 + 1;
      }
      plVar9 = *(long **)param_2;
      pbVar15 = (byte *)*plVar9;
      pbVar17 = (byte *)plVar9[2];
    } while (pbVar15 != pbVar17);
  }
  lVar11 = *plVar9 - plVar9[1];
LAB_00d3dbb0:
  uVar14 = 0xb;
LAB_00d3dbb4:
  *(undefined4 *)(param_1 + 0x30) = uVar14;
  *(long *)(param_1 + 0x38) = lVar11;
LAB_00d3dbbc:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

