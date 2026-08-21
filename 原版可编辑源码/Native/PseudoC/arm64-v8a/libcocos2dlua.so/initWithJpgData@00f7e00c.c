
/* cocos2d::Image::initWithJpgData(unsigned char const*, long) */

undefined4 __thiscall cocos2d::Image::initWithJpgData(Image *this,uchar *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong __size;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  void *local_4a0;
  code *local_498 [21];
  __jmp_buf_tag _Stack_3f0;
  undefined8 local_2f0 [7];
  int local_2b4;
  undefined4 local_2b0;
  int local_268;
  uint local_264;
  int local_25c;
  uint local_248;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_4a0 = (void *)0x0;
  local_2f0[0] = jpeg_std_error(local_498);
  local_498[0] = FUN_00f7f11c;
  iVar5 = setjmp(&_Stack_3f0);
  if (iVar5 == 0) {
    jpeg_CreateDecompress(local_2f0,0x5a,0x298);
    jpeg_mem_src(local_2f0,param_1,param_2);
    jpeg_read_header(local_2f0,1);
    if (local_2b4 == 1) {
      uVar7 = 6;
    }
    else {
      local_2b0 = 2;
      uVar7 = 3;
    }
    *(undefined4 *)(this + 0x48) = uVar7;
    jpeg_start_decompress(local_2f0);
    iVar8 = local_25c;
    uVar3 = local_264;
    iVar5 = local_268;
    *(int *)(this + 0x38) = local_268;
    *(uint *)(this + 0x3c) = local_264;
    __size = (ulong)(local_264 * local_268 * local_25c);
    *(ulong *)(this + 0x30) = __size;
    pvVar6 = malloc(__size);
    *(void **)(this + 0x28) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
      goto LAB_00f7e078;
    }
    if (local_248 < uVar3) {
      uVar7 = 1;
      local_4a0 = pvVar6;
      jpeg_read_scanlines(local_2f0,&local_4a0,1);
      if (local_248 < local_264) {
        lVar9 = 0;
        uVar7 = 1;
        do {
          iVar4 = local_25c;
          iVar2 = local_268;
          lVar9 = lVar9 + (ulong)(uint)(iVar8 * iVar5);
          local_4a0 = (void *)(*(long *)(this + 0x28) + lVar9);
          jpeg_read_scanlines(local_2f0,&local_4a0,1);
          iVar5 = iVar2;
          iVar8 = iVar4;
        } while (local_248 < local_264);
      }
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 0;
  }
  jpeg_destroy_decompress(local_2f0);
LAB_00f7e078:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

