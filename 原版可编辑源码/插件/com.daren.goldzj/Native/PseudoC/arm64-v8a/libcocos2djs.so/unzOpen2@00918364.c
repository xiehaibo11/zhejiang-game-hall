
/* cocos2d::unzOpen2(char const*, cocos2d::zlib_filefunc_def_s*) */

void cocos2d::unzOpen2(char *param_1,zlib_filefunc_def_s *param_2)

{
  long lVar1;
  zlib_filefunc64_32_def_s *pzVar2;
  zlib_filefunc64_32_def_s azStack_80 [88];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pzVar2 = (zlib_filefunc64_32_def_s *)(undefined1 *)0x0;
  if (param_2 != (zlib_filefunc_def_s *)0x0) {
    fill_zlib_filefunc64_32_def_from_filefunc32(azStack_80,param_2);
    pzVar2 = azStack_80;
  }
  FUN_009183c4(param_1,pzVar2,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

