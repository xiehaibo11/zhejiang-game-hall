
/* cocos2d::Image::saveImageToJPG(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Image::saveImageToJPG(Image *this,basic_string *param_1)

{
  undefined1 *puVar1;
  char *__filename;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  FILE *__stream;
  long lVar7;
  void *__ptr;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  int iVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong local_360 [2];
  char *local_350;
  undefined1 auStack_348 [168];
  undefined8 local_2a0 [6];
  undefined8 local_270;
  undefined8 local_268;
  uint local_148;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_2a0[0] = jpeg_std_error(auStack_348);
  jpeg_CreateCompress(local_2a0,0x5a,0x248);
  plVar6 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar6 + 0x118))(local_360,plVar6,param_1);
  __filename = (char *)((ulong)local_360 | 1);
  if ((local_360[0] & 1) != 0) {
    __filename = local_350;
  }
  __stream = fopen(__filename,"wb");
  if ((local_360[0] & 1) != 0) {
    operator_delete(local_350);
  }
  if (__stream != (FILE *)0x0) {
    jpeg_stdio_dest(local_2a0,__stream);
    local_270 = *(undefined8 *)(this + 0x38);
    local_268 = 0x200000003;
    jpeg_set_defaults(local_2a0);
    jpeg_set_quality(local_2a0,0x5a,1);
    jpeg_start_compress(local_2a0,1);
    iVar4 = *(int *)(this + 0x38);
    lVar7 = Texture2D::getPixelFormatInfoMap();
    plVar6 = *(long **)(lVar7 + 8);
    if (plVar6 == (long *)0x0) {
LAB_00f805f8:
                    /* WARNING: Subroutine does not return */
      FUN_007d44e0("map::at:  key not found");
    }
LAB_00f805dc:
    do {
      if (*(int *)(this + 0x48) < *(int *)((long)plVar6 + 0x1c)) goto LAB_00f805d4;
      if (*(int *)(this + 0x48) <= *(int *)((long)plVar6 + 0x1c)) {
        if (plVar6 != (long *)0x0) {
          if (*(char *)((long)plVar6 + 0x31) == '\0') goto LAB_00f80708;
          uVar2 = *(uint *)(this + 0x38);
          uVar3 = *(uint *)(this + 0x3c);
          __ptr = malloc((long)(int)(uVar2 * uVar3 * 3));
          if (__ptr != (void *)0x0) {
            if (0 < (int)uVar3) {
              iVar11 = 0;
              uVar9 = 0;
              puVar10 = (undefined1 *)((long)__ptr + 2);
              do {
                lVar7 = (long)iVar11;
                uVar12 = (ulong)uVar2;
                puVar13 = puVar10;
                if (0 < (int)uVar2) {
                  do {
                    uVar12 = uVar12 - 1;
                    puVar1 = (undefined1 *)(*(long *)(this + 0x28) + lVar7);
                    lVar7 = lVar7 + 4;
                    puVar13[-2] = *puVar1;
                    puVar13[-1] = puVar1[1];
                    *puVar13 = puVar1[2];
                    puVar13 = puVar13 + 3;
                  } while (uVar12 != 0);
                }
                uVar9 = uVar9 + 1;
                iVar11 = iVar11 + uVar2 * 4;
                puVar10 = puVar10 + (long)(int)uVar2 * 3;
              } while (uVar9 != uVar3);
            }
            while (local_148 < local_270._4_4_) {
              local_360[0] = (long)__ptr + (ulong)(local_148 * iVar4 * 3);
              jpeg_write_scanlines(local_2a0,local_360,1);
            }
            free(__ptr);
            goto LAB_00f80718;
          }
          jpeg_finish_compress(local_2a0);
          jpeg_destroy_compress(local_2a0);
          fclose(__stream);
          goto LAB_00f80750;
        }
        break;
      }
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != (long *)0x0);
    goto LAB_00f805f8;
  }
LAB_00f80750:
  uVar8 = 0;
LAB_00f80754:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
LAB_00f805d4:
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) goto LAB_00f805f8;
  goto LAB_00f805dc;
LAB_00f80708:
  while (local_148 < local_270._4_4_) {
    local_360[0] = *(long *)(this + 0x28) + (ulong)(local_148 * iVar4 * 3);
    jpeg_write_scanlines(local_2a0,local_360,1);
  }
LAB_00f80718:
  jpeg_finish_compress(local_2a0);
  fclose(__stream);
  jpeg_destroy_compress(local_2a0);
  uVar8 = 1;
  goto LAB_00f80754;
}

