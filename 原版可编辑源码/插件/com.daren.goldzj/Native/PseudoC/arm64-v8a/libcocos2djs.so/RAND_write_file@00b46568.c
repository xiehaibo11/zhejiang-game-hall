
int RAND_write_file(char *file)

{
  int iVar1;
  uint uVar2;
  FILE *__s;
  size_t sVar3;
  stat asStack_4b0 [8];
  
  iVar1 = stat(file,asStack_4b0);
  if ((iVar1 == -1) || (((uint)asStack_4b0[0].st_nlink & 0xb000 | 0x4000) != 0x6000)) {
    iVar1 = open(file,0x41,0x180);
    if (((iVar1 == -1) || (__s = fdopen(iVar1,"wb"), __s == (FILE *)0x0)) &&
       (__s = openssl_fopen(file,"wb"), __s == (FILE *)0x0)) {
      return 0;
    }
    chmod(file,0x180);
    iVar1 = RAND_bytes((uchar *)(asStack_4b0[0].__unused + 1),0x400);
    sVar3 = fwrite(asStack_4b0[0].__unused + 1,1,0x400,__s);
    uVar2 = (uint)sVar3 & ((int)(uint)sVar3 >> 0x1f ^ 0xffffffffU);
    fclose(__s);
    OPENSSL_cleanse(asStack_4b0[0].__unused + 1,0x400);
    if (iVar1 < 1) {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

