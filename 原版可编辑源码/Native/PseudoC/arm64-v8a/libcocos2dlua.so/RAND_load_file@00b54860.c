
int RAND_load_file(char *file,long max_bytes)

{
  int iVar1;
  FILE *__stream;
  size_t sVar2;
  size_t __n;
  long lVar3;
  int iVar4;
  stat asStack_4d0 [8];
  
  if (file == (char *)0x0) {
    return 0;
  }
  if (max_bytes == 0) {
    return 0;
  }
  __stream = openssl_fopen(file,"rb");
  if (__stream == (FILE *)0x0) {
    return 0;
  }
  memset(asStack_4d0,0,0x80);
  iVar1 = fileno(__stream);
  iVar1 = fstat(iVar1,asStack_4d0);
  if (iVar1 < 0) {
    iVar1 = 0;
    goto LAB_00b549c0;
  }
  RAND_add(asStack_4d0,0x80,0.0);
  lVar3 = max_bytes;
  if (((uint)asStack_4d0[0].st_nlink & 0xb000 | 0x4000) == 0x6000) {
    setbuf(__stream,(char *)0x0);
    lVar3 = 0x800;
    if (max_bytes != -1) {
      lVar3 = max_bytes;
    }
  }
  iVar1 = 0;
  do {
    __n = (size_t)(int)lVar3;
    if (0x3fe < lVar3 - 1U) {
      __n = 0x400;
    }
    sVar2 = fread(asStack_4d0[0].__unused + 1,1,__n,__stream);
    iVar4 = (int)sVar2;
    if (lVar3 < 1) goto joined_r0x00b5497c;
    if (iVar4 < 1) break;
    RAND_add(asStack_4d0[0].__unused + 1,iVar4,(double)iVar4);
    lVar3 = lVar3 - __n;
    iVar1 = iVar1 + iVar4;
  } while (0 < lVar3);
LAB_00b549b4:
  OPENSSL_cleanse(asStack_4d0[0].__unused + 1,0x400);
LAB_00b549c0:
  fclose(__stream);
  return iVar1;
joined_r0x00b5497c:
  while (0 < iVar4) {
    iVar4 = (int)sVar2;
    RAND_add(asStack_4d0[0].__unused + 1,iVar4,(double)iVar4);
    iVar1 = iVar1 + iVar4;
    sVar2 = fread(asStack_4d0[0].__unused + 1,1,__n,__stream);
    iVar4 = (int)sVar2;
  }
  goto LAB_00b549b4;
}

