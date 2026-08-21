
/* v8::base::OS::MemoryMappedFile::open(char const*, v8::base::OS::MemoryMappedFile::FileMode) */

undefined8 * v8::base::OS::MemoryMappedFile::open(char *param_1,int param_2)

{
  char *__modes;
  int iVar1;
  int __fd;
  FILE *__stream;
  size_t __len;
  void *pvVar2;
  undefined8 *puVar3;
  int __flags;
  
  __modes = "r";
  if (param_2 != 0) {
    __modes = "r+";
  }
  __stream = fopen(param_1,__modes);
  if (__stream == (FILE *)0x0) {
    return (undefined8 *)0x0;
  }
  iVar1 = fseek(__stream,0,2);
  if (iVar1 == 0) {
    __len = ftell(__stream);
    if (__len == 0) {
      puVar3 = operator_new(0x20);
      puVar3[2] = 0;
      puVar3[3] = 0;
LAB_014772e0:
      *puVar3 = &PTR__PosixMemoryMappedFile_01cc3f88;
      puVar3[1] = __stream;
      return puVar3;
    }
    if (0 < (long)__len) {
      iVar1 = 3;
      if (param_2 != 1) {
        iVar1 = 1;
      }
      __flags = 1;
      if (param_2 != 1) {
        __flags = 2;
      }
      pvVar2 = (void *)GetRandomMmapAddr();
      __fd = fileno(__stream);
      pvVar2 = mmap(pvVar2,__len,iVar1,__flags,__fd,0);
      if (pvVar2 != (void *)0xffffffffffffffff) {
        puVar3 = operator_new(0x20);
        puVar3[2] = pvVar2;
        puVar3[3] = __len;
        goto LAB_014772e0;
      }
    }
  }
  fclose(__stream);
  return (undefined8 *)0x0;
}

