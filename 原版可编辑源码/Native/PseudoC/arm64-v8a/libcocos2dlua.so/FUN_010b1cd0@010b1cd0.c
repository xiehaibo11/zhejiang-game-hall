
/* WARNING: Type propagation algorithm not settling */

uint FUN_010b1cd0(undefined8 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  char local_28;
  char local_27;
  char local_26;
  byte local_25;
  uint local_24;
  
  local_24 = FT_Stream_Seek(param_1,0);
  if ((local_24 == 0) && (local_24 = FT_Stream_Read(param_1,&local_28,4), local_24 == 0)) {
                    /* try { // try from 010b1d18 to 011b1d23 has its CatchHandler @ 010b1e70 */
                    /* try { // try from 010b1d2c to 011b1d33 has its CatchHandler @ 010b1e78 */
                    /* try { // try from 010b1d34 to 011b1e17 has its CatchHandler @ 010b1bbc */
    if ((local_28 == '\x1f') && (((local_27 == -0x75 && (local_26 == '\b')) && (local_25 < 0x20))))
    {
      local_24 = FT_Stream_Skip(param_1,6);
      if ((local_25 >> 2 & 1) != 0) {
        uVar2 = FT_Stream_ReadUShortLE(param_1,&local_24);
        if (local_24 != 0) {
          return local_24;
        }
        iVar3 = FT_Stream_Skip(param_1,uVar2);
        if (iVar3 != 0) {
          return iVar3;
        }
        local_24 = 0;
      }
      if ((local_25 >> 3 & 1) != 0) {
        do {
          cVar1 = FT_Stream_ReadChar(param_1,&local_24);
          iVar3 = 3;
          if (cVar1 != '\0') {
            iVar3 = 0;
          }
          if (local_24 != 0) {
            iVar3 = 2;
          }
        } while (iVar3 == 0);
        if (iVar3 != 3) {
          return local_24;
        }
      }
      if ((local_25 >> 4 & 1) != 0) {
        do {
          cVar1 = FT_Stream_ReadChar(param_1,&local_24);
          iVar3 = 5;
          if (cVar1 != '\0') {
            iVar3 = 0;
          }
                    /* try { // try from 010b1e18 to 011b1e23 has its CatchHandler @ 010b1e98 */
          if (local_24 != 0) {
            iVar3 = 2;
          }
        } while (iVar3 == 0);
        if (iVar3 != 5) {
          return local_24;
        }
      }
      if ((local_25 >> 1 & 1) != 0) {
                    /* try { // try from 010b1e34 to 011b1ebf has its CatchHandler @ 010b1bbc */
        local_24 = FT_Stream_Skip(param_1,2);
      }
    }
    else {
      local_24 = 3;
    }
  }
  return local_24;
}

