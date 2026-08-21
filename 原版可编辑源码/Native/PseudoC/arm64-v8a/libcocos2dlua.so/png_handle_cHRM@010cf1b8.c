
void png_handle_cHRM(long param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  long local_38;
  
                    /* try { // try from 010cf1cc to 011cf1d7 has its CatchHandler @ 010cf300 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) == 0) {
    if (param_3 == 0x20) {
                    /* try { // try from 010cf21c to 011cf283 has its CatchHandler @ 010cf304 */
      png_read_data(param_1,&local_58,0x20);
      png_calculate_crc(param_1,&local_58,0x20);
      iVar4 = png_crc_finish(param_1,0);
      if (iVar4 != 0) goto LAB_010cf3d8;
                    /* try { // try from 010cf284 to 011cf31f has its CatchHandler @ 010cf0e4 */
      uVar2 = (local_58 & 0xff00ff00) >> 8 | (local_58 & 0xff00ff) << 8;
      local_60 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((int)local_60 < 0) {
        local_60 = 0xffffffff;
      }
      local_70 = (uint)local_48 << 0x18 | (uint)local_47 << 0x10 | (uint)local_46 << 8 |
                 (uint)local_45;
      local_6c = (uint)local_44 << 0x18 | (uint)local_43 << 0x10 | (uint)local_42 << 8 |
                 (uint)local_41;
      local_68 = (uint)local_40 << 0x18 | (uint)local_3f << 0x10 | (uint)local_3e << 8 |
                 (uint)local_3d;
      uStack_64 = (uint)local_3c << 0x18 | (uint)local_3b << 0x10 | (uint)local_3a << 8 |
                  (uint)local_39;
                    /* catch() { ... } // from try @ 010cf140 with catch @ 010cf2fc */
                    /* catch() { ... } // from try @ 010cf1cc with catch @ 010cf300 */
                    /* catch() { ... } // from try @ 010cf1b0 with catch @ 010cf304
                       catch() { ... } // from try @ 010cf21c with catch @ 010cf304 */
      uVar2 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      local_5c = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar2 = (uStack_50 & 0xff00ff00) >> 8 | (uStack_50 & 0xff00ff) << 8;
      local_78 = uVar2 >> 0x10 | uVar2 << 0x10;
      uStack_74 = (uint)local_4c << 0x18 | (uint)local_4b << 0x10 | (uint)local_4a << 8 |
                  (uint)local_49;
      if ((int)local_5c < 0) {
        local_5c = 0xffffffff;
      }
      if ((int)local_78 < 0) {
        local_78 = 0xffffffff;
      }
                    /* try { // try from 010cf320 to 011cf3eb has its CatchHandler @ 010cf320
                       catch() { ... } // from try @ 010cf320 with catch @ 010cf320
                       catch() { ... } // from try @ 010cf4fc with catch @ 010cf320 */
      if ((int)uStack_74 < 0) {
        uStack_74 = 0xffffffff;
      }
      if ((int)local_70 < 0) {
        local_70 = 0xffffffff;
      }
      if ((int)local_6c < 0) {
        local_6c = 0xffffffff;
      }
      if ((int)local_68 < 0) {
        local_68 = 0xffffffff;
      }
      if ((int)uStack_64 < 0) {
        uStack_64 = 0xffffffff;
      }
      if (((((char)(local_3c | local_4c | local_48 | local_44 | local_40) < '\0') ||
           (local_60 == 0xffffffff)) || (local_5c == 0xffffffff)) || (local_78 == 0xffffffff)) {
        pcVar5 = "invalid values";
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0x55a);
        if ((short)uVar1 < 0) goto LAB_010cf3d8;
        if ((uVar1 >> 4 & 1) == 0) {
          *(ushort *)(param_1 + 0x55a) = uVar1 | 0x10;
          png_colorspace_set_chromaticities(param_1,param_1 + 0x510,&local_78,1);
          png_colorspace_sync(param_1,param_2);
          goto LAB_010cf3d8;
        }
        *(ushort *)(param_1 + 0x55a) = uVar1 | 0x8000;
        png_colorspace_sync(param_1,param_2);
        pcVar5 = "duplicate";
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      pcVar5 = "invalid";
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar5 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar5);
LAB_010cf3d8:
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 010cf3ec to 011cf3ff has its CatchHandler @ 010cf578 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 010cf438 to 011cf443 has its CatchHandler @ 010cf574 */
  __stack_chk_fail();
}

