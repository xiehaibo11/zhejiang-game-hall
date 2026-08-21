
/* universe::network::Encryption::Md5(unsigned char const*, unsigned long, unsigned char*) */

void __thiscall
universe::network::Encryption::Md5(Encryption *this,uchar *param_1,ulong param_2,uchar *param_3)

{
  long lVar1;
  int iVar2;
  MD5_CTX MStack_98;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  MD5_Init(&MStack_98);
  MD5_Update(&MStack_98,param_1,param_2);
  iVar2 = MD5_Final(param_3,&MStack_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

