
void png_set_unknown_chunk_location(long param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
                    /* try { // try from 010d4d04 to 011d4d0f has its CatchHandler @ 010d51d0 */
                    /* try { // try from 010d4d10 to 011d4d7b has its CatchHandler @ 010d4230 */
  if ((((param_1 != 0) && (param_2 != 0)) && (-1 < param_3)) &&
     (param_3 < *(int *)(param_2 + 0x128))) {
    if ((param_4 & 0xb) == 0) {
                    /* try { // try from 010d4d7c to 011d4d87 has its CatchHandler @ 010d51cc */
      png_app_error(param_1,"invalid unknown chunk location");
      uVar1 = 8;
                    /* try { // try from 010d4d88 to 011d4deb has its CatchHandler @ 010d4230 */
      if ((param_4 & 4) == 0) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_4 & 0xb;
    }
    if (uVar1 == 0) {
      if (*(char *)(param_1 + 0x165) < '\0') {
LAB_010d4d64:
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"invalid location in png_set_unknown_chunks");
      }
      png_app_warning(param_1,"png_set_unknown_chunks now expects a valid location");
      uVar1 = *(uint *)(param_1 + 0x164) & 0xb;
      if (uVar1 == 0) goto LAB_010d4d64;
    }
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 & -uVar2 ^ uVar2;
    } while (uVar2 != (uVar2 & -uVar2));
    *(char *)(*(long *)(param_2 + 0x120) + (long)param_3 * 0x20 + 0x18) = (char)uVar2;
  }
  return;
}

