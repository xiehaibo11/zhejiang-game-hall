
void FUN_00a17a7c(long param_1,ushort *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined *puVar11;
  ushort *puVar12;
  undefined2 local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x44);
  cVar7 = (char)param_3;
  if (param_3 < 0x80) {
    local_4c = CONCAT11(local_4c._1_1_,cVar7);
    if (cVar7 < '\0') {
      if ((param_3 == 0x5c) || (param_3 == 0x7e)) goto LAB_00a17b80;
LAB_00a17b30:
      cVar7 = (char)param_3;
      local_4c = CONCAT11(local_4c._1_1_,cVar7);
LAB_00a17b64:
      uVar8 = 4;
      if (uVar1 == 1) {
        uVar8 = 1;
      }
      uVar6 = (ulong)uVar8;
      if (uVar6 <= param_4) {
        if (uVar1 != 1) {
          *param_2 = 0x281b;
          *(undefined1 *)(param_2 + 1) = 0x4a;
          param_2 = (ushort *)((long)param_2 + 3);
        }
        *(char *)param_2 = cVar7;
        uVar9 = 1;
LAB_00a17c18:
        *(undefined4 *)(param_1 + 0x44) = uVar9;
        goto LAB_00a17d60;
      }
    }
    else {
      uVar8 = 4;
      if (uVar1 == 0) {
        uVar8 = 1;
      }
      uVar6 = (ulong)uVar8;
      if (uVar6 <= param_4) {
        if (uVar1 != 0) {
          *param_2 = 0x281b;
          *(undefined1 *)(param_2 + 1) = 0x42;
          param_2 = (ushort *)((long)param_2 + 3);
        }
        *(char *)param_2 = cVar7;
        *(undefined4 *)(param_1 + 0x44) = 0;
        goto LAB_00a17d60;
      }
    }
LAB_00a17b78:
    uVar6 = 0xfffffffe;
  }
  else {
    if (param_3 == 0xa5) {
      cVar7 = '\\';
      local_4c = CONCAT11(local_4c._1_1_,0x5c);
      goto LAB_00a17b64;
    }
    if (param_3 == 0x203e) {
      param_3 = 0x7e;
      goto LAB_00a17b30;
    }
    if (param_3 - 0xff61 < 0x3f) {
      cVar7 = cVar7 + '@';
      local_4c = CONCAT11(local_4c._1_1_,cVar7);
      if (-1 < cVar7) goto LAB_00a17b64;
    }
LAB_00a17b80:
    iVar5 = FUN_00a153d0(param_1,&local_4c,param_3,2);
    if (iVar5 != -1) {
      if (iVar5 != 2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((-1 < (char)local_4c) && (-1 < (short)local_4c)) {
        uVar8 = uVar1;
        if (uVar1 != 2) {
          uVar8 = 5;
        }
        uVar6 = (ulong)uVar8;
        if (param_4 < uVar6) goto LAB_00a17b78;
        if (uVar1 != 2) {
          *param_2 = 0x241b;
          *(undefined1 *)(param_2 + 1) = 0x42;
          param_2 = (ushort *)((long)param_2 + 3);
        }
        *(char *)param_2 = (char)local_4c;
        *(undefined1 *)((long)param_2 + 1) = local_4c._1_1_;
        uVar9 = 2;
        goto LAB_00a17c18;
      }
    }
    if (param_3 < 0x460) {
      uVar8 = param_3 >> 4;
      puVar11 = &DAT_0130e75a;
LAB_00a17ca4:
      uVar3 = 1 << (ulong)(param_3 & 0xf);
      uVar10 = (uint)*(ushort *)((long)(puVar11 + (ulong)uVar8 * 4) + 2);
      if ((uVar3 & uVar10) != 0) {
        uVar10 = uVar10 & uVar3 - 1;
        uVar10 = (uVar10 >> 1 & 0x55555555) + (uVar10 & 0x55555555);
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
        uVar10 = (uVar10 >> 4 & 0xffffff0f) + (uVar10 & 0xf0f0f0f);
        uVar2 = *(ushort *)
                 (&DAT_0130fd02 +
                 ((ulong)*(ushort *)(puVar11 + (ulong)uVar8 * 4) +
                 (ulong)((uVar10 & 0xf) + (uVar10 >> 8))) * 2);
        local_4c = uVar2 >> 8 | uVar2 << 8;
        if (((ushort)(uVar2 | uVar2 >> 8) >> 7 & 1) == 0) {
          uVar8 = 2;
          if (uVar1 != 3) {
            uVar8 = 6;
          }
          uVar6 = (ulong)uVar8;
          if (uVar6 <= param_4) {
            puVar12 = param_2;
            if (uVar1 != 3) {
              puVar12 = param_2 + 2;
              param_2[0] = 0x241b;
              param_2[1] = 0x4428;
            }
            *puVar12 = local_4c;
            uVar9 = 3;
            goto LAB_00a17c18;
          }
          goto LAB_00a17b78;
        }
      }
    }
    else {
      if (param_3 - 0x2100 < 0x30) {
        uVar8 = (param_3 >> 4) - 0x210;
        puVar11 = &UNK_0130e872;
        goto LAB_00a17ca4;
      }
      if (param_3 - 0x4e00 >> 4 < 0x51b) {
        uVar8 = (param_3 >> 4) - 0x4e0;
        puVar11 = &UNK_0130e87e;
        goto LAB_00a17ca4;
      }
      if (param_3 - 0xff00 < 0x60) {
        uVar8 = (param_3 >> 4) - 0xff0;
        puVar11 = &DAT_0130fcea;
        goto LAB_00a17ca4;
      }
    }
    uVar6 = 0xffffffff;
  }
LAB_00a17d60:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

