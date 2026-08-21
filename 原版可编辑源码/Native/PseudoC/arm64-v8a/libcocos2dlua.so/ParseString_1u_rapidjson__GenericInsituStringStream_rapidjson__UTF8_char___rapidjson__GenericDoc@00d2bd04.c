
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseString<1u,
   rapidjson::GenericInsituStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericInsituStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, bool) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseString<1u,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericInsituStringStream *param_1,GenericDocument *param_2,bool param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong __size;
  int iVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  byte bVar12;
  void *__ptr;
  int *piVar13;
  byte *local_80;
  byte *pbStack_78;
  long local_70;
  GenericInsituStringStream *pGStack_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_70 = *(long *)(param_1 + 0x10);
  pbVar1 = (byte *)(*(long *)param_1 + 1);
  local_80 = pbVar1;
  pbStack_78 = pbVar1;
  pGStack_68 = param_1;
LAB_00d2bd68:
  do {
    while (bVar12 = *local_80, bVar12 != 0x5c) {
      if (bVar12 == 0x22) {
        local_80 = local_80 + 1;
        pbVar2 = pbStack_78 + 1;
        *pbStack_78 = 0;
        pbStack_78 = pbVar2;
        if (*(int *)(this + 0x30) == 0) {
          pbStack_78._0_4_ = (int)pbVar2;
          piVar13 = *(int **)(param_2 + 0x40);
          piVar4 = *(int **)(param_2 + 0x48);
          iVar3 = ~(uint)pbVar1 + (int)pbStack_78;
          if (param_3) {
            if (piVar4 < piVar13 + 6) {
              __ptr = *(void **)(param_2 + 0x38);
              if (__ptr == (void *)0x0) {
                if (*(long *)(param_2 + 0x28) == 0) {
                  pvVar8 = operator_new(1);
LAB_00d2c048:
                  *(void **)(param_2 + 0x28) = pvVar8;
                  *(void **)(param_2 + 0x30) = pvVar8;
                }
                goto LAB_00d2c04c;
              }
LAB_00d2c028:
              uVar9 = (long)piVar4 +
                      (((ulong)((long)piVar4 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
LAB_00d2c050:
              __size = ((long)piVar13 - (long)__ptr) + 0x18;
              if (__size <= uVar9) {
                __size = uVar9;
              }
              if (__size == 0) {
                free(__ptr);
                pvVar8 = (void *)0x0;
              }
              else {
                pvVar8 = realloc(__ptr,__size);
              }
              piVar13 = (int *)((long)pvVar8 + ((long)piVar13 - (long)__ptr));
              *(void **)(param_2 + 0x38) = pvVar8;
              *(int **)(param_2 + 0x40) = piVar13;
              *(ulong *)(param_2 + 0x48) = (long)pvVar8 + __size;
            }
          }
          else if (piVar4 < piVar13 + 6) {
            __ptr = *(void **)(param_2 + 0x38);
            if (__ptr != (void *)0x0) goto LAB_00d2c028;
            if (*(long *)(param_2 + 0x28) == 0) {
              pvVar8 = operator_new(1);
              goto LAB_00d2c048;
            }
LAB_00d2c04c:
            uVar9 = *(ulong *)(param_2 + 0x50);
            goto LAB_00d2c050;
          }
          *(int **)(param_2 + 0x40) = piVar13 + 6;
          *(byte **)(piVar13 + 2) = pbVar1;
          piVar13[4] = 0;
          piVar13[5] = 0x4050000;
          piVar13[0] = 0;
          piVar13[1] = 0;
          *piVar13 = iVar3;
        }
        goto LAB_00d2bfe4;
      }
      if (bVar12 < 0x20) {
        uVar9 = (long)local_80 - local_70;
        if (bVar12 == 0) {
          uVar10 = 0xb;
        }
        else {
          uVar10 = 10;
        }
        *(undefined4 *)(this + 0x30) = uVar10;
LAB_00d2bfe0:
        *(ulong *)(this + 0x38) = uVar9;
LAB_00d2bfe4:
        *(long *)(pGStack_68 + 0x10) = local_70;
        *(byte **)(pGStack_68 + 8) = pbStack_78;
        *(byte **)pGStack_68 = local_80;
        if (*(long *)(lVar5 + 0x28) == local_58) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      *pbStack_78 = *local_80;
      local_80 = local_80 + 1;
      pbStack_78 = pbStack_78 + 1;
    }
    pbVar2 = local_80 + 1;
    if (ParseStringToStream<1u,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>>(rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>&,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>&)
        ::escape[*pbVar2] != 0) {
      local_80 = local_80 + 2;
      *pbStack_78 = ParseStringToStream<1u,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>>(rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>&,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>&)
                    ::escape[*pbVar2];
      pbStack_78 = pbStack_78 + 1;
      goto LAB_00d2bd68;
    }
    uVar9 = (long)local_80 - local_70;
    if (*pbVar2 != 0x75) {
      *(undefined4 *)(this + 0x30) = 10;
      *(ulong *)(this + 0x38) = uVar9;
      local_80 = local_80 + 1;
      goto LAB_00d2bfe4;
    }
    local_80 = local_80 + 2;
    uVar6 = ParseHex4<rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>>
                      (this,(GenericInsituStringStream *)&local_80,uVar9);
    if (*(int *)(this + 0x30) != 0) goto LAB_00d2bfe4;
    pbVar2 = pbStack_78;
    if (uVar6 >> 10 == 0x36) {
      pbVar2 = local_80;
      if ((*local_80 == 0x5c) && (pbVar2 = local_80 + 1, local_80[1] == 0x75)) {
        local_80 = local_80 + 2;
        uVar7 = ParseHex4<rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>>
                          (this,(GenericInsituStringStream *)&local_80,uVar9);
        if (*(int *)(this + 0x30) != 0) goto LAB_00d2bfe4;
        pbVar2 = local_80;
        if (uVar7 >> 10 == 0x37) {
          uVar6 = (uVar7 - 0xdc00 | uVar6 * 0x400 + 0xfca00000) + 0x10000;
          pbVar2 = pbStack_78;
          goto joined_r0x00d2bea0;
        }
      }
      local_80 = pbVar2;
      *(undefined4 *)(this + 0x30) = 9;
      goto LAB_00d2bfe0;
    }
joined_r0x00d2bea0:
    if (uVar6 < 0x80) {
      *pbVar2 = (byte)uVar6;
      pbStack_78 = pbVar2 + 1;
    }
    else {
      if (uVar6 < 0x800) {
        pbStack_78 = pbVar2 + 1;
        *pbVar2 = (byte)(uVar6 >> 6) | 0xc0;
      }
      else {
        if (uVar6 >> 0x10 == 0) {
          bVar12 = (byte)(uVar6 >> 0xc) | 0xe0;
          pbVar11 = pbVar2;
        }
        else {
          pbVar11 = pbVar2 + 1;
          *pbVar2 = (byte)(uVar6 >> 0x12) | 0xf0;
          bVar12 = (byte)(uVar6 >> 0xc) & 0x3f | 0x80;
        }
        *pbVar11 = bVar12;
        pbStack_78 = pbVar11 + 2;
        pbVar11[1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
      }
      *pbStack_78 = (byte)uVar6 & 0x3f | 0x80;
      pbStack_78 = pbStack_78 + 1;
    }
  } while( true );
}

