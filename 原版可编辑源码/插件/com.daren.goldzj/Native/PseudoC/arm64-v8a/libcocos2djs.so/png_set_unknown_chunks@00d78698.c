
void png_set_unknown_chunks(long param_1,long param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  void *__dest;
  uint uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  
  if ((((param_3 != (undefined4 *)0x0) && (param_1 != 0)) && (param_2 != 0)) && (0 < param_4)) {
    lVar5 = png_realloc_array(param_1,*(undefined8 *)(param_2 + 0x120),
                              *(undefined4 *)(param_2 + 0x128),param_4,0x20);
    if (lVar5 == 0) {
      png_chunk_report(param_1,"too many unknown chunks",1);
      return;
    }
    png_free(param_1,*(undefined8 *)(param_2 + 0x120));
    *(long *)(param_2 + 0x120) = lVar5;
    *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) | 0x200;
    if (0 < param_4) {
      puVar8 = (undefined4 *)(lVar5 + (long)*(int *)(param_2 + 0x128) * 0x20);
      do {
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(param_3 + 1);
        uVar3 = *param_3;
        *(undefined1 *)(puVar8 + 1) = 0;
        *puVar8 = uVar3;
        uVar2 = *(byte *)(param_3 + 6) & 0xb;
        if ((*(byte *)(param_3 + 6) & 0xb) == 0) {
          if (*(char *)(param_1 + 0x165) < '\0') {
LAB_00d78834:
                    /* WARNING: Subroutine does not return */
            png_error(param_1,"invalid location in png_set_unknown_chunks");
          }
          png_app_warning(param_1,"png_set_unknown_chunks now expects a valid location");
          uVar2 = *(uint *)(param_1 + 0x164) & 0xb;
          if (uVar2 == 0) goto LAB_00d78834;
        }
        do {
          uVar6 = uVar2;
          uVar2 = uVar6 & -uVar6 ^ uVar6;
        } while (uVar6 != (uVar6 & -uVar6));
        *(char *)(puVar8 + 6) = (char)uVar6;
        if (*(long *)(param_3 + 4) == 0) {
          uVar7 = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
LAB_00d787c0:
          iVar4 = *(int *)(param_2 + 0x128);
          *(undefined8 *)(puVar8 + 4) = uVar7;
          puVar8 = puVar8 + 8;
          *(int *)(param_2 + 0x128) = iVar4 + 1;
        }
        else {
          __dest = (void *)png_malloc_base(param_1);
          *(void **)(puVar8 + 2) = __dest;
          if (__dest != (void *)0x0) {
            memcpy(__dest,*(void **)(param_3 + 2),*(size_t *)(param_3 + 4));
            uVar7 = *(undefined8 *)(param_3 + 4);
            goto LAB_00d787c0;
          }
          png_chunk_report(param_1,"unknown chunk: out of memory",1);
        }
        iVar4 = param_4 + -1;
        param_3 = param_3 + 8;
        bVar1 = 0 < param_4;
        param_4 = iVar4;
      } while (iVar4 != 0 && bVar1);
    }
  }
  return;
}

