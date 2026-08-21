
/* universe::LiPeiLei::GB_18030_2000_TO_UTF8(char const*) */

void __thiscall universe::LiPeiLei::GB_18030_2000_TO_UTF8(LiPeiLei *this,char *param_1)

{
  char *__s;
  long lVar1;
  long lVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_880 [16];
  char *local_870;
  char *local_868;
  undefined8 local_860;
  char *local_858;
  size_t sStack_850;
  char acStack_848 [2048];
  long local_48;
  
                    /* try { // try from 009de7e8 to 00ade7ff has its CatchHandler @ 009de8c8 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009de804 to 00ade82f has its CatchHandler @ 009de8c4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_880,(char *)this);
  __s = (char *)((ulong)local_880 | 1);
  if (((byte)local_880[0] & 1) != 0) {
    __s = local_870;
  }
  sStack_850 = strlen(__s);
  local_858 = acStack_848;
                    /* try { // try from 009de830 to 00ade857 has its CatchHandler @ 009de798 */
  local_860 = 0x800;
  lVar2 = libiconv_open("utf-8",&DAT_012f2dc7);
  if (lVar2 != 0) {
    local_868 = __s;
                    /* try { // try from 009de858 to 00ade86b has its CatchHandler @ 009de8c8 */
    memset(acStack_848,0,0x800);
    lVar3 = libiconv(lVar2,&local_868,&sStack_850,&local_858,&local_860);
    libiconv_close(lVar2);
    if (lVar3 != -1) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(in_x8,acStack_848);
      goto joined_r0x009de8e0;
    }
  }
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
joined_r0x009de8e0:
  if (((byte)local_880[0] & 1) != 0) {
                    /* try { // try from 009de8a8 to 00ade8af has its CatchHandler @ 009de8c4 */
    operator_delete(local_870);
  }
                    /* try { // try from 009de8b0 to 00ade8e3 has its CatchHandler @ 009de798 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 009de804 with catch @ 009de8c4
                       catch() { ... } // from try @ 009de8a8 with catch @ 009de8c4 */
                    /* catch() { ... } // from try @ 009de7e8 with catch @ 009de8c8
                       catch() { ... } // from try @ 009de858 with catch @ 009de8c8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

