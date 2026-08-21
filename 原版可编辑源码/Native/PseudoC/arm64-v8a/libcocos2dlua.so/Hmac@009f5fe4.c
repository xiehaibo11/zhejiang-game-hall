
/* universe::network::Encryption::Hmac(unsigned char const*, unsigned long, unsigned char const*,
   unsigned int, unsigned char*, unsigned int*) */

void __thiscall
universe::network::Encryption::Hmac
          (Encryption *this,uchar *param_1,ulong param_2,uchar *param_3,uint param_4,uchar *param_5,
          uint *param_6)

{
  EVP_MD *evp_md;
  
  evp_md = EVP_sha1();
  HMAC(evp_md,param_3,param_4,param_1,param_2,param_5,param_6);
  return;
}

