
/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::seekoff(long long,
   std::__ndk1::ios_base::seekdir, unsigned int) */

undefined1  [16]
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::seekoff
          (long *param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  __off_t _Var3;
  long lVar4;
  undefined1 auVar5 [16];
  
                    /* catch() { ... } // from try @ 00a5ac60 with catch @ 00a5ace0 */
  if ((long *)param_1[0x10] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a5ad9c to 00b5ae03 has its CatchHandler @ 00a5acfc */
    FUN_00a5b54c();
  }
                    /* try { // try from 00a5acfc to 00b5ad43 has its CatchHandler @ 00a5acfc
                       catch() { ... } // from try @ 00a5acfc with catch @ 00a5acfc
                       catch() { ... } // from try @ 00a5ad9c with catch @ 00a5acfc */
  iVar1 = (**(code **)(*(long *)param_1[0x10] + 0x30))();
  if ((param_1[0xf] != 0) && ((param_2 == 0 || (0 < iVar1)))) {
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    lVar4 = 0;
    _Var3 = -1;
                    /* try { // try from 00a5ad44 to 00b5ad4b has its CatchHandler @ 00a5ade0 */
    if ((iVar2 != 0) || (2 < param_3)) goto LAB_00a5ad74;
    _Var3 = iVar1 * param_2;
    if (iVar1 < 1) {
      _Var3 = 0;
    }
                    /* try { // try from 00a5ad60 to 00b5ad7b has its CatchHandler @ 00a5ade8 */
    iVar1 = fseeko((FILE *)param_1[0xf],_Var3,param_3);
    if (iVar1 == 0) {
                    /* try { // try from 00a5ad8c to 00b5ad9b has its CatchHandler @ 00a5addc */
      _Var3 = ftello((FILE *)param_1[0xf]);
      lVar4 = param_1[0x11];
      goto LAB_00a5ad74;
    }
  }
  lVar4 = 0;
  _Var3 = -1;
LAB_00a5ad74:
  auVar5._8_8_ = _Var3;
  auVar5._0_8_ = lVar4;
  return auVar5;
}

