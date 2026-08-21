
/* v8::base::OS::MemoryMappedFile::create(char const*, unsigned long, void*) */

undefined8 * v8::base::OS::MemoryMappedFile::create(char *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  __s = fopen(param_1,"w+");
  if (__s == (FILE *)0x0) {
    return (undefined8 *)0x0;
  }
  if (param_2 == 0) {
    puVar3 = operator_new(0x20);
    puVar3[2] = 0;
    puVar3[3] = 0;
LAB_01477378:
    *puVar3 = &PTR__PosixMemoryMappedFile_01cc3f88;
    puVar3[1] = __s;
  }
  else {
    sVar2 = fwrite(param_3,1,param_2,__s);
    if ((sVar2 == param_2) && (iVar1 = ferror(__s), iVar1 == 0)) {
      pvVar4 = (void *)GetRandomMmapAddr();
      iVar1 = fileno(__s);
      pvVar4 = mmap(pvVar4,param_2,3,1,iVar1,0);
      if (pvVar4 != (void *)0xffffffffffffffff) {
        puVar3 = operator_new(0x20);
        puVar3[2] = pvVar4;
        puVar3[3] = param_2;
        goto LAB_01477378;
      }
    }
    fclose(__s);
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}

