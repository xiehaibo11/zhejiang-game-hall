
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >& std::__ndk1::getline<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(std::__ndk1::basic_istream<char,
   std::__ndk1::char_traits<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, char) */

basic_istream *
std::__ndk1::getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
          (basic_istream *param_1,basic_string *param_2,char param_3)

{
  byte *pbVar1;
  basic_string bVar2;
  uint uVar3;
  long *plVar4;
  basic_istream *this;
  ulong uVar5;
  long lVar6;
  basic_string *pbVar7;
  long lVar8;
  ulong uVar9;
  
                    /* try { // try from 00915790 to 00a15797 has its CatchHandler @ 009157d4 */
                    /* try { // try from 00915798 to 00a157ef has its CatchHandler @ 009156f4 */
  lVar6 = *(long *)param_1;
  this = param_1 + *(long *)(lVar6 + -0x18);
  if (*(uint *)(this + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + 0x88));
      lVar6 = *(long *)param_1;
                    /* catch() { ... } // from try @ 00915790 with catch @ 009157d4 */
      if (*(int *)(param_1 + *(long *)(lVar6 + -0x18) + 0x20) != 0) {
        return param_1;
      }
    }
    if (((byte)*param_2 & 1) == 0) {
      *(undefined2 *)param_2 = 0;
                    /* try { // try from 009157f0 to 00a1583f has its CatchHandler @ 009157f0
                       catch() { ... } // from try @ 009157f0 with catch @ 009157f0
                       catch() { ... } // from try @ 009158c8 with catch @ 009157f0
                       catch() { ... } // from try @ 00915904 with catch @ 009157f0 */
    }
    else {
      **(undefined1 **)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
    }
    lVar8 = 0;
    do {
      plVar4 = *(long **)(param_1 + *(long *)(lVar6 + -0x18) + 0x28);
      pbVar1 = (byte *)plVar4[3];
      if (pbVar1 == (byte *)plVar4[4]) {
                    /* try { // try from 00915840 to 00a158c7 has its CatchHandler @ 00915944 */
        uVar3 = (**(code **)(*plVar4 + 0x50))();
        if (uVar3 == 0xffffffff) {
                    /* try { // try from 00915904 to 00a1595f has its CatchHandler @ 009157f0 */
          uVar3 = 6;
          if (lVar8 != 0) {
            uVar3 = 2;
          }
          goto LAB_00915914;
        }
      }
      else {
        plVar4[3] = (long)(pbVar1 + 1);
        uVar3 = (uint)*pbVar1;
      }
      if ((uVar3 & 0xff) == (uint)(byte)param_3) {
        uVar3 = 0;
        goto LAB_00915914;
      }
      bVar2 = *param_2;
      if (((byte)bVar2 & 1) == 0) {
        uVar9 = (ulong)((byte)bVar2 >> 1);
        uVar5 = 0x16;
        if (uVar9 == 0x16) goto LAB_009158a0;
LAB_0091587c:
        if (((byte)bVar2 & 1) != 0) goto LAB_00915880;
LAB_009158c4:
                    /* try { // try from 009158c8 to 00a158ef has its CatchHandler @ 009157f0 */
        *param_2 = (basic_string)((char)uVar9 * '\x02' + '\x02');
        pbVar7 = param_2 + 1;
      }
      else {
        uVar9 = *(ulong *)(param_2 + 8);
        uVar5 = (*(ulong *)param_2 & 0xfffffffffffffffe) - 1;
        if (uVar9 != uVar5) goto LAB_0091587c;
LAB_009158a0:
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__grow_by
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )param_2,uVar5,1,uVar5,uVar5,0,0);
        if (((byte)*param_2 & 1) == 0) goto LAB_009158c4;
LAB_00915880:
        *(ulong *)(param_2 + 8) = uVar9 + 1;
        pbVar7 = *(basic_string **)(param_2 + 0x10);
      }
      pbVar7[uVar9] = SUB41(uVar3,0);
      (pbVar7 + uVar9)[1] = (basic_string)0x0;
                    /* try { // try from 009158f0 to 00a15903 has its CatchHandler @ 00915944 */
      if ((((byte)*param_2 & 1) != 0) && (*(long *)(param_2 + 8) == -0x11)) goto code_r0x009158f4;
      lVar6 = *(long *)param_1;
      lVar8 = lVar8 + -1;
    } while( true );
  }
  uVar3 = *(uint *)(this + 0x20) | 4;
LAB_00915928:
  ios_base::clear((ios_base *)this,uVar3);
                    /* catch() { ... } // from try @ 00915840 with catch @ 00915944
                       catch() { ... } // from try @ 009158f0 with catch @ 00915944 */
  return param_1;
code_r0x009158f4:
  uVar3 = 4;
LAB_00915914:
  this = param_1 + *(long *)(*(long *)param_1 + -0x18);
  uVar3 = *(uint *)(this + 0x20) | uVar3;
  goto LAB_00915928;
}

