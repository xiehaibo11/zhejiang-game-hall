
int FUN_0107a994(long param_1,void *param_2,size_t param_3)

{
  short sVar1;
  int iVar2;
  uint local_34;
  
  iVar2 = FT_Stream_Seek(param_1,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  sVar1 = FT_Stream_ReadUShort(param_1,&local_34);
                    /* try { // try from 0107a9d8 to 0117a9db has its CatchHandler @ 0107aa78 */
  if (local_34 != 0) {
    return local_34;
  }
                    /* try { // try from 0107a9f8 to 0117aaeb has its CatchHandler @ 0107a8e4 */
  if ((ushort)(sVar1 + 0x7fffU) < 2) {
    FT_Stream_ReadULongLE(param_1,&local_34);
    if (local_34 != 0) {
      return local_34;
    }
    if (sVar1 == -0x7fff) goto LAB_0107aa40;
  }
  iVar2 = FT_Stream_Seek(param_1,0);
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_0107aa40:
  iVar2 = FT_Stream_EnterFrame(param_1,param_3);
  if (iVar2 == 0) {
    iVar2 = memcmp(*(void **)(param_1 + 0x40),param_2,param_3);
    iVar2 = (uint)(iVar2 != 0) << 1;
    FT_Stream_ExitFrame(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107a9d8 with catch @ 0107aa78
                        */
  }
                    /* try { // try from 0107a9e8 to 0117a9f7 has its CatchHandler @ 0107aa7c */
  return iVar2;
}

