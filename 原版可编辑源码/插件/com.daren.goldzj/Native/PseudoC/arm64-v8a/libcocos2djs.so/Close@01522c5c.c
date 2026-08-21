
/* v8::internal::Log::Close() */

FILE * __thiscall v8::internal::Log::Close(Log *this)

{
  int iVar1;
  void *pvVar2;
  FILE *__stream;
  
  __stream = *(FILE **)(this + 8);
  if ((__stream != (FILE *)0x0) && (iVar1 = strcmp(FLAG_logfile,"&"), iVar1 != 0)) {
    fclose(__stream);
    __stream = (FILE *)0x0;
  }
  pvVar2 = *(void **)(this + 0x120);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  *this = (Log)0x0;
  return __stream;
}

