
/* cocos2d::Image::saveImageToPNG(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) */

void __thiscall cocos2d::Image::saveImageToPNG(Image *this,basic_string *param_1,bool param_2)

{
  undefined1 *puVar1;
  char *__filename;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  FILE *__stream;
  ulong uVar9;
  __jmp_buf_tag *__env;
  undefined8 uVar10;
  long lVar11;
  void *__ptr;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulong local_78 [2];
  char *local_68;
  long local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  plVar8 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar8 + 0x118))(local_78,plVar8,param_1);
  __filename = (char *)((ulong)local_78 | 1);
  if ((local_78[0] & 1) != 0) {
    __filename = local_68;
  }
  __stream = fopen(__filename,"wb");
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (__stream != (FILE *)0x0) {
    uVar9 = png_create_write_struct(&DAT_01447da8,0,0,0);
    local_78[0] = uVar9;
    if (uVar9 == 0) {
      fclose(__stream);
      goto LAB_00f8009c;
    }
    local_60 = png_create_info_struct();
    if (local_60 == 0) {
      fclose(__stream);
      plVar8 = (long *)0x0;
    }
    else {
      __env = (__jmp_buf_tag *)png_set_longjmp_fn(uVar9,longjmp,0x100);
      iVar7 = setjmp(__env);
      if (iVar7 == 0) {
        png_init_io(local_78[0],__stream);
        if (!param_2) {
          lVar11 = Texture2D::getPixelFormatInfoMap();
          plVar8 = *(long **)(lVar11 + 8);
          if (plVar8 != (long *)0x0) {
            do {
              while (*(int *)((long)plVar8 + 0x1c) <= *(int *)(this + 0x48)) {
                if (*(int *)(this + 0x48) <= *(int *)((long)plVar8 + 0x1c)) {
                  if (plVar8 != (long *)0x0) {
                    if (*(char *)((long)plVar8 + 0x31) == '\0') goto LAB_00f8013c;
                    uVar2 = *(undefined4 *)(this + 0x38);
                    uVar4 = *(undefined4 *)(this + 0x3c);
                    uVar10 = 6;
                    goto LAB_00f80150;
                  }
                  goto LAB_00f801c0;
                }
                plVar8 = (long *)plVar8[1];
                if (plVar8 == (long *)0x0) goto LAB_00f801c0;
              }
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
LAB_00f801c0:
                    /* WARNING: Subroutine does not return */
          FUN_007d44e0("map::at:  key not found");
        }
LAB_00f8013c:
        uVar2 = *(undefined4 *)(this + 0x38);
        uVar4 = *(undefined4 *)(this + 0x3c);
        uVar10 = 2;
LAB_00f80150:
        png_set_IHDR(local_78[0],local_60,uVar2,uVar4,8,uVar10,0,0,0);
        png_write_info(local_78[0],local_60);
        png_set_packing(local_78[0]);
        __ptr = malloc((long)*(int *)(this + 0x3c) << 3);
        if (__ptr != (void *)0x0) {
          lVar11 = Texture2D::getPixelFormatInfoMap();
          plVar8 = *(long **)(lVar11 + 8);
          if (plVar8 == (long *)0x0) goto LAB_00f801c0;
LAB_00f801a4:
          if (*(int *)(this + 0x48) < *(int *)((long)plVar8 + 0x1c)) {
            plVar8 = (long *)*plVar8;
joined_r0x00f801a0:
            if (plVar8 == (long *)0x0) goto LAB_00f801c0;
            goto LAB_00f801a4;
          }
          if (*(int *)((long)plVar8 + 0x1c) < *(int *)(this + 0x48)) {
            plVar8 = (long *)plVar8[1];
            goto joined_r0x00f801a0;
          }
          if (plVar8 == (long *)0x0) goto LAB_00f801c0;
          if (*(char *)((long)plVar8 + 0x31) == '\0') {
            uVar3 = *(uint *)(this + 0x3c);
            uVar9 = (ulong)(int)uVar3;
            if ((int)uVar3 < 1) goto LAB_00f803fc;
            lVar11 = *(long *)(this + 0x28);
            iVar7 = *(int *)(this + 0x38);
            if (uVar3 < 4) {
              uVar13 = 0;
              goto LAB_00f80358;
            }
            iVar17 = 0;
            iVar18 = 1;
            uVar13 = uVar9 & 0xfffffffffffffffc;
            plVar8 = (long *)((long)__ptr + 0x10);
            uVar14 = uVar13;
            do {
              iVar21 = iVar17 * 3;
              iVar22 = iVar18 * 3;
              iVar19 = iVar17 * 3;
              iVar20 = iVar18 * 3;
              uVar14 = uVar14 - 4;
              iVar17 = iVar17 + 4;
              iVar18 = iVar18 + 4;
              plVar8[-1] = lVar11 + iVar22 * iVar7;
              plVar8[-2] = lVar11 + iVar21 * iVar7;
              plVar8[1] = lVar11 + (iVar20 + 6) * iVar7;
              *plVar8 = lVar11 + (iVar19 + 6) * iVar7;
              plVar8 = plVar8 + 4;
            } while (uVar14 != 0);
            if (uVar13 != uVar9) {
LAB_00f80358:
              iVar17 = iVar7 * (int)uVar13 * 3;
              do {
                *(long *)((long)__ptr + uVar13 * 8) = lVar11 + iVar17;
                uVar13 = uVar13 + 1;
                iVar17 = iVar17 + iVar7 * 3;
              } while ((long)uVar13 < (long)uVar9);
            }
          }
          else {
            if (param_2) {
              uVar3 = *(uint *)(this + 0x38);
              uVar5 = *(uint *)(this + 0x3c);
              uVar9 = (ulong)uVar5;
              iVar7 = uVar3 * 3;
              pvVar12 = malloc((long)(int)(iVar7 * uVar5));
              if (pvVar12 == (void *)0x0) {
                fclose(__stream);
                png_destroy_write_struct(local_78,&local_60);
                free(__ptr);
                goto LAB_00f8009c;
              }
              if (0 < (int)uVar5) {
                iVar17 = 0;
                uVar13 = 0;
                puVar15 = (undefined1 *)((long)pvVar12 + 2);
                do {
                  lVar11 = (long)iVar17;
                  uVar14 = (ulong)uVar3;
                  puVar16 = puVar15;
                  if (0 < (int)uVar3) {
                    do {
                      uVar14 = uVar14 - 1;
                      puVar1 = (undefined1 *)(*(long *)(this + 0x28) + lVar11);
                      lVar11 = lVar11 + 4;
                      puVar16[-2] = *puVar1;
                      puVar16[-1] = puVar1[1];
                      *puVar16 = puVar1[2];
                      puVar16 = puVar16 + 3;
                    } while (uVar14 != 0);
                  }
                  uVar13 = uVar13 + 1;
                  iVar17 = iVar17 + uVar3 * 4;
                  puVar15 = puVar15 + (long)(int)uVar3 * 3;
                } while (uVar13 != uVar9);
                if (0 < (int)uVar5) {
                  if (uVar5 < 4) {
                    uVar14 = 0;
                  }
                  else {
                    iVar17 = 0;
                    iVar18 = 1;
                    uVar14 = uVar9 & 0xfffffffc;
                    plVar8 = (long *)((long)__ptr + 0x10);
                    uVar13 = uVar14;
                    do {
                      iVar19 = iVar17 + 2;
                      iVar20 = iVar18 + 2;
                      iVar21 = iVar7 * iVar17;
                      iVar22 = iVar7 * iVar18;
                      iVar17 = iVar17 + 4;
                      iVar18 = iVar18 + 4;
                      uVar13 = uVar13 - 4;
                      plVar8[-1] = (long)pvVar12 + (long)iVar22;
                      plVar8[-2] = (long)pvVar12 + (long)iVar21;
                      plVar8[1] = (long)pvVar12 + (long)(iVar7 * iVar20);
                      *plVar8 = (long)pvVar12 + (long)(iVar7 * iVar19);
                      plVar8 = plVar8 + 4;
                    } while (uVar13 != 0);
                    if (uVar14 == uVar9) goto LAB_00f80488;
                  }
                  iVar7 = uVar3 * (int)uVar14 * 3;
                  lVar11 = uVar9 - uVar14;
                  plVar8 = (long *)((long)__ptr + uVar14 * 8);
                  do {
                    lVar11 = lVar11 + -1;
                    *plVar8 = (long)pvVar12 + (long)iVar7;
                    iVar7 = iVar7 + uVar3 * 3;
                    plVar8 = plVar8 + 1;
                  } while (lVar11 != 0);
                }
              }
LAB_00f80488:
              png_write_image(local_78[0],__ptr);
              free(__ptr);
              __ptr = pvVar12;
              goto LAB_00f804a0;
            }
            uVar3 = *(uint *)(this + 0x3c);
            uVar9 = (ulong)(int)uVar3;
            if ((int)uVar3 < 1) goto LAB_00f803fc;
            lVar11 = *(long *)(this + 0x28);
            iVar7 = *(int *)(this + 0x38);
            if (uVar3 < 4) {
              uVar13 = 0;
              goto LAB_00f803d8;
            }
            iVar17 = 0;
            iVar18 = 1;
            uVar13 = uVar9 & 0xfffffffffffffffc;
            plVar8 = (long *)((long)__ptr + 0x10);
            uVar14 = uVar13;
            do {
              iVar19 = iVar17 * 4;
              iVar20 = iVar18 * 4;
              iVar17 = iVar17 + 4;
              iVar18 = iVar18 + 4;
              uVar14 = uVar14 - 4;
              plVar8[-1] = lVar11 + iVar20 * iVar7;
              plVar8[-2] = lVar11 + iVar19 * iVar7;
              plVar8[1] = lVar11 + (iVar20 + 8) * iVar7;
              *plVar8 = lVar11 + (iVar19 + 8) * iVar7;
              plVar8 = plVar8 + 4;
            } while (uVar14 != 0);
            if (uVar13 != uVar9) {
LAB_00f803d8:
              iVar17 = iVar7 * (int)uVar13 * 4;
              do {
                *(long *)((long)__ptr + uVar13 * 8) = lVar11 + iVar17;
                uVar13 = uVar13 + 1;
                iVar17 = iVar17 + iVar7 * 4;
              } while ((long)uVar13 < (long)uVar9);
            }
          }
LAB_00f803fc:
          png_write_image(local_78[0],__ptr);
LAB_00f804a0:
          free(__ptr);
          png_write_end(local_78[0],local_60);
          png_destroy_write_struct(local_78,&local_60);
          fclose(__stream);
          uVar10 = 1;
          goto LAB_00f800a0;
        }
      }
      fclose(__stream);
      plVar8 = &local_60;
    }
    png_destroy_write_struct(local_78,plVar8);
  }
LAB_00f8009c:
  uVar10 = 0;
LAB_00f800a0:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

