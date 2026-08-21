
/* v8::base::OS::SignalCodeMovingGC() */

int v8::base::OS::SignalCodeMovingGC(void)

{
  int iVar1;
  ulong uVar2;
  char *__filename;
  FILE *__stream;
  void *pvVar3;
  undefined8 uVar4;
  
  uVar2 = sysconf(0x27);
  __filename = (char *)GetGCFakeMMapFile();
  __stream = fopen(__filename,"w+");
  if (__stream == (FILE *)0x0) {
    uVar4 = GetGCFakeMMapFile();
    PrintError("Failed to open %s\n",uVar4);
                    /* WARNING: Subroutine does not return */
    Abort();
  }
  pvVar3 = (void *)GetRandomMmapAddr();
  iVar1 = fileno(__stream);
  pvVar3 = mmap(pvVar3,uVar2,5,2,iVar1,0);
  uVar2 = Free(pvVar3,uVar2);
  if ((uVar2 & 1) != 0) {
    iVar1 = fclose(__stream);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","Free(addr, size)");
}

