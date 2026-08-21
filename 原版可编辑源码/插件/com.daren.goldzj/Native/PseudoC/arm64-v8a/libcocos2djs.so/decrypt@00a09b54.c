
/* universe::UnzipTask::decrypt(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall universe::UnzipTask::decrypt(UnzipTask *this,basic_string *param_1)

{
  UnzipTask UVar1;
  long lVar2;
  long *plVar3;
  uchar *__ptr;
  undefined8 uVar4;
  void *__ptr_00;
  FILE *__s;
  size_t sVar5;
  char *pcVar6;
  basic_string *__filename;
  uint local_54;
  long local_50;
  long local_48;
  
                    /* try { // try from 00a09b5c to 00b09b5f has its CatchHandler @ 00a09ee8 */
                    /* try { // try from 00a09b60 to 00b09baf has its CatchHandler @ 00a09b14 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)CustomFileManager::getInstance();
  __ptr = (uchar *)(**(code **)(*plVar3 + 0x10))(plVar3,this + 0x20,&local_50);
  uVar4 = 0;
  if ((__ptr == (uchar *)0x0) || (local_50 == 0)) goto LAB_00a09c70;
                    /* try { // try from 00a09bb0 to 00b09bb7 has its CatchHandler @ 00a09f0c */
  UVar1 = this[0x68];
  if (((byte)UVar1 & 1) == 0) {
    if ((byte)UVar1 >> 1 != 0) goto LAB_00a09bc0;
LAB_00a09bd4:
    pcVar6 = "1234567890ABCDEF";
  }
  else {
    if (*(long *)(this + 0x70) == 0) goto LAB_00a09bd4;
LAB_00a09bc0:
    if (((byte)UVar1 & 1) == 0) {
      pcVar6 = (char *)(this + 0x69);
    }
    else {
      pcVar6 = *(char **)(this + 0x78);
    }
  }
  local_54 = 0;
  __ptr_00 = (void *)un_xxtea_decrypt(__ptr,(uint)local_50,(uchar *)pcVar6,0x10,&local_54);
  __filename = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __filename = param_1 + 1;
  }
  __s = fopen((char *)__filename,"wb");
  if (__s != (FILE *)0x0) {
    sVar5 = fwrite(__ptr_00,1,(ulong)local_54,__s);
                    /* try { // try from 00a09c34 to 00b09c47 has its CatchHandler @ 00a09f34 */
    fclose(__s);
    if (sVar5 != 0) {
      free(__ptr);
                    /* try { // try from 00a09c50 to 00b09c5f has its CatchHandler @ 00a09efc */
      free(__ptr_00);
      uVar4 = 1;
      goto LAB_00a09c70;
    }
  }
  free(__ptr);
  free(__ptr_00);
  uVar4 = 0;
LAB_00a09c70:
                    /* try { // try from 00a09c78 to 00b09c9b has its CatchHandler @ 00a09f58 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

