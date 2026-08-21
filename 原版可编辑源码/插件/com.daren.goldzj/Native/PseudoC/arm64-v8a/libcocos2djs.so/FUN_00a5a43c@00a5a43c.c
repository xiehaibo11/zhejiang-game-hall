
void FUN_00a5a43c(long *param_1,byte *param_2,uint param_3)

{
  ios_base *this;
  int iVar1;
  FILE *__stream;
  char *__modes;
  byte *__filename;
  
  *(undefined8 *)(param_1 + 0x16) = 0x1c6e630;
  *param_1 = 0x1c6e608;
  std::__ndk1::ios_base::init
            ((ios_base *)(param_1 + 0x16),
             (basic_filebuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 1));
                    /* try { // try from 00a5a488 to 00b5a49f has its CatchHandler @ 00a5a608 */
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *param_1 = (long)&PTR__basic_ofstream_01c6e5b8;
  param_1[0x16] = (long)&PTR__basic_ofstream_01c6e5e0;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 1));
                    /* try { // try from 00a5a4b4 to 00b5a4c7 has its CatchHandler @ 00a5a604 */
  __filename = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __filename = param_2 + 1;
  }
                    /* try { // try from 00a5a4c8 to 00b5a4d7 has its CatchHandler @ 00a5a5d8 */
  if (param_1[0x10] == 0) {
                    /* try { // try from 00a5a4f8 to 00b5a507 has its CatchHandler @ 00a5a5ec */
                    /* try { // try from 00a5a508 to 00b5a50f has its CatchHandler @ 00a5a5d4 */
                    /* try { // try from 00a5a510 to 00b5a53f has its CatchHandler @ 00a5a5dc */
    __modes = "w";
    switch(param_3 & 0xfffffffd | 0x10) {
    case 0x10:
    case 0x30:
      break;
    case 0x11:
      __modes = "a";
                    /* try { // try from 00a5a540 to 00b5a657 has its CatchHandler @ 00a5a438 */
      break;
    default:
      goto switchD_00a5a528_caseD_12;
    case 0x14:
    case 0x34:
      __modes = "wb";
      break;
    case 0x15:
      __modes = "ab";
      break;
    case 0x18:
      __modes = "r+";
      break;
    case 0x19:
      __modes = "a+";
      break;
    case 0x1c:
      __modes = "r+b";
      break;
    case 0x1d:
      __modes = "a+b";
      break;
    case 0x38:
      __modes = "w+";
      break;
    case 0x3c:
      __modes = "w+b";
    }
    __stream = fopen((char *)__filename,__modes);
    param_1[0x10] = (long)__stream;
    if (__stream != (FILE *)0x0) {
      *(uint *)(param_1 + 0x14) = param_3 | 0x10;
      if ((param_3 >> 1 & 1) == 0) {
        return;
      }
      iVar1 = fseek(__stream,0,2);
      if (iVar1 == 0) {
        return;
      }
                    /* catch() { ... } // from try @ 00a5a4f0 with catch @ 00a5a5bc */
      fclose((FILE *)param_1[0x10]);
      param_1[0x10] = 0;
    }
  }
switchD_00a5a528_caseD_12:
  this = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
  std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 4);
                    /* try { // try from 00a5a4f0 to 00b5a4f7 has its CatchHandler @ 00a5a5bc */
  return;
}

