
/* universe::network::Encryption::encrypt(unsigned char const*, unsigned char*, unsigned long,
   unsigned char const*, int*) */

void __thiscall
universe::network::Encryption::encrypt
          (Encryption *this,uchar *param_1,uchar *param_2,ulong param_3,uchar *param_4,int *param_5)

{
  uchar *puVar1;
  long lVar2;
  AES_KEY AStack_158;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar1 = &DAT_012f560c;
  if (param_4 != (uchar *)0x0) {
    puVar1 = param_4;
  }
  if (param_5 == (int *)0x0) {
    param_5 = (int *)(this + 0x28);
    *param_5 = 0;
  }
  uStack_58 = *(undefined8 *)(puVar1 + 8);
  local_60 = *(undefined8 *)puVar1;
  AES_set_encrypt_key((uchar *)this,*(int *)(this + 0x20) << 3,&AStack_158);
  AES_cfb128_encrypt(param_1,param_2,param_3,&AStack_158,(uchar *)&local_60,param_5,1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

