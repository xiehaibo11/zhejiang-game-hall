
/* cocos2d::Image::initWithJpgData(unsigned char const*, long) */

void __thiscall cocos2d::Image::initWithJpgData(Image *this,uchar *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong __size;
  void *pvVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  void *local_490;
  code *local_488 [21];
  __jmp_buf_tag _Stack_3e0;
  undefined8 local_2e0 [7];
  int local_2a4;
  undefined4 local_2a0;
  int local_258;
  uint local_254;
  int local_24c;
  uint local_238;
  long local_48;
  
                    /* try { // try from 00996dd0 to 00a96ecf has its CatchHandler @ 00996b78 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_490 = (void *)0x0;
  local_2e0[0] = jpeg_std_error(local_488);
  local_488[0] = FUN_00997d0c;
  iVar5 = setjmp(&_Stack_3e0);
  if (iVar5 == 0) {
    jpeg_CreateDecompress(local_2e0,0x5a,0x298);
                    /* catch() { ... } // from try @ 00996c4c with catch @ 00996e44
                       catch() { ... } // from try @ 00996d38 with catch @ 00996e44 */
                    /* catch() { ... } // from try @ 00996c38 with catch @ 00996e48
                       catch() { ... } // from try @ 00996cf0 with catch @ 00996e48 */
    jpeg_mem_src(local_2e0,param_1,param_2);
    jpeg_read_header(local_2e0,1);
                    /* catch() { ... } // from try @ 00996bf8 with catch @ 00996e60 */
    if (local_2a4 == 1) {
                    /* catch() { ... } // from try @ 00996bec with catch @ 00996e64 */
      uVar8 = 6;
                    /* catch() { ... } // from try @ 00996bcc with catch @ 00996e68 */
    }
    else {
      local_2a0 = 2;
      uVar8 = 3;
    }
                    /* catch() { ... } // from try @ 00996c04 with catch @ 00996e78
                       catch() { ... } // from try @ 00996c84 with catch @ 00996e78
                       catch() { ... } // from try @ 00996d94 with catch @ 00996e78 */
    *(undefined4 *)(this + 0x2c) = uVar8;
    jpeg_start_decompress(local_2e0);
    iVar9 = local_24c;
    uVar3 = local_254;
    iVar5 = local_258;
    this[0x134] = (Image)0x0;
    *(int *)(this + 0x20) = local_258;
    *(uint *)(this + 0x24) = local_254;
    __size = (ulong)(local_254 * local_258 * local_24c);
    *(ulong *)(this + 0x18) = __size;
    pvVar7 = malloc(__size);
    *(void **)(this + 0x10) = pvVar7;
    uVar6 = 0;
    if (pvVar7 != (void *)0x0) {
      if (local_238 < uVar3) {
        local_490 = pvVar7;
        jpeg_read_scanlines(local_2e0,&local_490,1);
                    /* try { // try from 00996ed0 to 00a96f27 has its CatchHandler @ 00996ed0
                       catch() { ... } // from try @ 00996ed0 with catch @ 00996ed0
                       catch() { ... } // from try @ 0099721c with catch @ 00996ed0 */
        if (local_238 < local_254) {
          lVar10 = 0;
          do {
            iVar4 = local_24c;
            iVar2 = local_258;
            lVar10 = lVar10 + (ulong)(uint)(iVar9 * iVar5);
            local_490 = (void *)(*(long *)(this + 0x10) + lVar10);
            jpeg_read_scanlines(local_2e0,&local_490,1);
            iVar5 = iVar2;
            iVar9 = iVar4;
          } while (local_238 < local_254);
        }
      }
      jpeg_destroy_decompress(local_2e0);
                    /* try { // try from 00996f28 to 00a96f3f has its CatchHandler @ 009972ac */
      uVar6 = 1;
    }
  }
  else {
    jpeg_destroy_decompress(local_2e0);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00996f48 to 00a96f53 has its CatchHandler @ 009972a8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00996f54 to 00a96f5f has its CatchHandler @ 009972a4 */
  __stack_chk_fail(uVar6);
}

