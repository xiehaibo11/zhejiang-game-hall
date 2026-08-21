
/* universe::Translated::processFiles() */

void __thiscall universe::Translated::processFiles(Translated *this)

{
  char *__filename;
  long lVar1;
  basic_string *this_00;
  ulong uVar2;
  FILE *pFVar3;
  int iVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [16];
  void *local_c0;
  basic_string local_b8 [16];
  char *local_a8;
  basic_string local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (basic_string *)TanGaoXiong::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_88,this_00 + 8);
                    /* catch() { ... } // from try @ 009e0828 with catch @ 009e0884 */
                    /* catch() { ... } // from try @ 009e07d0 with catch @ 009e0888 */
  FUN_007c1fb0(local_a0,local_88,&DAT_012f2e8a);
  uVar2 = TanGaoXiong::isDirectoryExist(this_00);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 009e08a4 to 00ae092b has its CatchHandler @ 009e08a4
                       catch() { ... } // from try @ 009e08a4 with catch @ 009e08a4
                       catch() { ... } // from try @ 009e0998 with catch @ 009e08a4 */
    local_58 = 0;
    uStack_50 = 0;
    local_70 = 0;
    uStack_68 = 0;
    do {
      FUN_009e0b5c(&local_70);
      FUN_007c1fb0(local_b8,local_a0,&local_70);
      uVar2 = TanGaoXiong::isFileExist((TanGaoXiong *)this_00,local_b8);
      if ((uVar2 & 1) != 0) {
        TanGaoXiong::removeFile(this_00);
      }
      if (((byte)local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      iVar4 = 6;
      while (iVar4 != 7) {
        iVar4 = iVar4 + -1;
        FUN_009e0b5c(&local_58);
                    /* try { // try from 009e092c to 00ae094b has its CatchHandler @ 009e09e4 */
        FUN_007c1fb0(local_b8,local_a0,&local_58);
        uVar2 = TanGaoXiong::isFileExist((TanGaoXiong *)this_00,local_b8);
        if (((byte)local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
        if ((uVar2 & 1) != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_b8,(char *)&local_58);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_d0,(char *)&local_70);
          TanGaoXiong::renameFile((TanGaoXiong *)this_00,local_a0,local_b8,(basic_string *)local_d0)
          ;
                    /* try { // try from 009e0984 to 00ae0997 has its CatchHandler @ 009e09e0 */
          if (((byte)local_d0[0] & 1) != 0) {
            operator_delete(local_c0);
          }
                    /* try { // try from 009e0998 to 00ae09ff has its CatchHandler @ 009e08a4 */
          if (((byte)local_b8[0] & 1) != 0) {
            operator_delete(local_a8);
          }
        }
        uStack_68 = uStack_50;
        local_70 = local_58;
        if (iVar4 == 0) goto LAB_009e09c8;
      }
    } while( true );
  }
  (**(code **)(*(long *)this_00 + 0x30))(this_00,local_a0);
LAB_009e09c8:
  Device::setSkipBackupToPath(local_a0);
                    /* catch() { ... } // from try @ 009e0984 with catch @ 009e09e0 */
                    /* catch() { ... } // from try @ 009e092c with catch @ 009e09e4 */
  FUN_007c1fb0(local_b8,local_a0,&DAT_012f2e9a);
  __filename = (char *)((ulong)local_b8 | 1);
  if (((byte)local_b8[0] & 1) != 0) {
    __filename = local_a8;
  }
  pFVar3 = fopen(__filename,"w");
  *(FILE **)this = pFVar3;
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

