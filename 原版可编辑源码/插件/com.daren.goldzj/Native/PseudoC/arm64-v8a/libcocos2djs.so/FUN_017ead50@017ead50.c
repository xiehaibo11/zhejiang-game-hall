
void FUN_017ead50(long param_1,char *param_2,undefined8 *param_3,uint param_4,byte param_5,
                 uint param_6,uint param_7,ulong param_8)

{
  long lVar1;
  ulong *puVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulong uVar12;
  undefined2 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  byte *local_88;
  byte *local_80;
  byte *local_78;
  byte local_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_78 = (byte *)&local_68;
  local_88 = local_70;
  local_80 = local_70;
  if (param_4 != 0) {
    pcVar11 = param_2 + (ulong)param_4 * 0xc;
    do {
      cVar3 = *param_2;
      if (((cVar3 == '\0' & param_5) == 0) && (cVar3 != '\x02' || ((param_6 ^ 1) & 1) != 0)) {
        pbVar7 = local_88;
        if (cVar3 == '\x01') {
          bVar4 = param_2[4];
          bVar6 = (*(ulong *)(param_1 + 0x78) >> ((ulong)bVar4 & 0x3f) & 1) != 0;
          uVar8 = (uint)bVar4;
          if (bVar6) {
            uVar8 = 0;
          }
          uVar12 = (ulong)uVar8;
          if (bVar6 && ((param_7 ^ 1) & 1) == 0) {
joined_r0x017eae64:
            for (; pbVar7 != local_80; pbVar7 = pbVar7 + 2) {
              if (*pbVar7 == bVar4) {
                uVar12 = (ulong)pbVar7[1];
                goto joined_r0x017eaee0;
              }
            }
            goto LAB_017eae9c;
          }
          if (bVar6) goto LAB_017eae9c;
joined_r0x017eaee0:
          if ((param_7 & 1) != 0) {
            bVar4 = param_2[4];
            for (pbVar7 = local_88; pbVar7 != local_80; pbVar7 = pbVar7 + 2) {
              if (*pbVar7 == bVar4) goto LAB_017eaf34;
            }
            if (local_80 == local_78) {
              local_80 = (byte *)v8::base::SmallVector<v8::internal::wasm::LiftoffRegister,8ul>::
                                 Grow((SmallVector<v8::internal::wasm::LiftoffRegister,8ul> *)
                                      &local_88);
            }
            pbVar7 = local_80 + 1;
            *local_80 = bVar4;
            if (pbVar7 == local_78) {
              local_80 = pbVar7;
              pbVar7 = (byte *)v8::base::SmallVector<v8::internal::wasm::LiftoffRegister,8ul>::Grow
                                         ((SmallVector<v8::internal::wasm::LiftoffRegister,8ul> *)
                                          &local_88);
            }
            local_80 = pbVar7 + 1;
            *pbVar7 = (byte)uVar12;
          }
LAB_017eaf34:
          lVar1 = param_1 + uVar12 * 4;
          *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) | 1L << (uVar12 & 0x3f);
          *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
          cVar3 = param_2[1];
          uVar9 = *(undefined4 *)(param_2 + 8);
          *(undefined1 *)param_3 = 1;
          *(char *)((long)param_3 + 1) = cVar3;
          *(byte *)((long)param_3 + 4) = (byte)uVar12;
          *(undefined2 *)((long)param_3 + 2) = local_94;
          *(undefined1 *)((long)param_3 + 7) = local_90._2_1_;
          *(undefined2 *)((long)param_3 + 5) = (undefined2)local_90;
        }
        else {
          if ((param_7 & 1) != 0) {
            bVar4 = param_2[4];
            goto joined_r0x017eae64;
          }
LAB_017eae9c:
          bVar4 = param_2[1];
          uVar8 = bVar4 - 1;
          puVar2 = &DAT_01a634d8;
          if ((0x1010000U >> (ulong)((uVar8 & 3) << 3) & 0xff) != 1 || 3 < (uVar8 & 0xff)) {
            puVar2 = &DAT_01a634d0;
          }
          uVar12 = *puVar2 & ~param_8 & (*(ulong *)(param_1 + 0x78) ^ 0xffffffffffffffff);
          if (uVar12 != 0) {
            uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
            goto joined_r0x017eaee0;
          }
          uVar9 = *(undefined4 *)(param_2 + 8);
          *(undefined1 *)param_3 = 0;
          *(byte *)((long)param_3 + 1) = bVar4;
          *(undefined2 *)((long)param_3 + 6) = local_8c;
          *(undefined4 *)((long)param_3 + 2) = local_90;
        }
        *(undefined4 *)(param_3 + 1) = uVar9;
      }
      else {
        uVar10 = *(undefined8 *)param_2;
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 8);
        *param_3 = uVar10;
      }
      param_2 = param_2 + 0xc;
      param_3 = (undefined8 *)((long)param_3 + 0xc);
    } while (param_2 < pcVar11);
    if (local_88 != local_70) {
      free(local_88);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

