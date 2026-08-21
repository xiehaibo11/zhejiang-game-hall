
void BIO_set_cipher(BIO *b,EVP_CIPHER *c,uchar *k,uchar *i,int enc)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  uchar *puVar4;
  uchar *puVar5;
  ulong uVar6;
  long in_x5;
  undefined1 auVar7 [12];
  
  uVar6 = (ulong)(uint)enc;
  puVar4 = k;
  puVar5 = i;
  auVar7 = BIO_get_data();
  if ((auVar7._0_8_ != 0) &&
     ((pcVar2 = (code *)BIO_get_callback(b,auVar7._8_4_,(char *)puVar4,(int)puVar5,uVar6,in_x5),
      pcVar2 == (code *)0x0 || (lVar3 = (*pcVar2)(b,6,c,4,(long)enc,0), 0 < lVar3)))) {
    BIO_set_init(b,1);
    iVar1 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(auVar7._0_8_ + 0x18),c,(ENGINE *)0x0,k,i,enc);
    if ((iVar1 != 0) && (pcVar2 != (code *)0x0)) {
      (*pcVar2)(b,6,c,4,(long)enc,1);
    }
  }
  return;
}

