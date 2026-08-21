
/* universe::UnzipTask::decrypt(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall universe::UnzipTask::decrypt(UnzipTask *this,basic_string *param_1)

{
  UnzipTask UVar1;
  long lVar2;
  long *plVar3;
  uchar *__ptr;
  void *__ptr_00;
  FILE *__s;
  size_t sVar4;
  char *pcVar5;
  basic_string *__filename;
  undefined4 uVar6;
  uint local_54;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009f20fc to 00af2123 has its CatchHandler @ 009f2198 */
  plVar3 = (long *)TanGaoXiong::getInstance();
  __ptr = (uchar *)(**(code **)(*plVar3 + 0x10))(plVar3,this + 0x20,&local_50);
  uVar6 = 0;
  if ((__ptr == (uchar *)0x0) || (local_50 == 0)) goto LAB_009f21d8;
                    /* try { // try from 009f2124 to 00af217b has its CatchHandler @ 009f20ac */
  UVar1 = this[0x68];
  if (((byte)UVar1 & 1) == 0) {
    if ((byte)UVar1 >> 1 != 0) goto LAB_009f213c;
LAB_009f2150:
    pcVar5 = "1234567890ABCDEF";
  }
  else {
    if (*(long *)(this + 0x70) == 0) goto LAB_009f2150;
LAB_009f213c:
    if (((byte)UVar1 & 1) == 0) {
      pcVar5 = (char *)(this + 0x69);
    }
    else {
      pcVar5 = *(char **)(this + 0x78);
    }
  }
  local_54 = 0;
  __ptr_00 = (void *)un_xxtea_decrypt(__ptr,(uint)local_50,(uchar *)pcVar5,0x10,&local_54);
  __filename = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 009f217c to 00af218f has its CatchHandler @ 009f2198 */
  if (((byte)*param_1 & 1) == 0) {
    __filename = param_1 + 1;
  }
                    /* try { // try from 009f2190 to 00af21b3 has its CatchHandler @ 009f20ac */
  __s = fopen((char *)__filename,"wb");
  if (__s == (FILE *)0x0) {
LAB_009f21c4:
    uVar6 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 009f20fc with catch @ 009f2198
                       catch() { ... } // from try @ 009f217c with catch @ 009f2198 */
    uVar6 = 1;
    sVar4 = fwrite(__ptr_00,1,(ulong)local_54,__s);
    fclose(__s);
    if (sVar4 == 0) goto LAB_009f21c4;
  }
  free(__ptr);
  free(__ptr_00);
LAB_009f21d8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

