
/* tinyxml2::StrPair::SetStr(char const*, int) */

void __thiscall tinyxml2::StrPair::SetStr(StrPair *this,char *param_1,int param_2)

{
  size_t sVar1;
  void *__dest;
  
  if ((((byte)this[1] >> 1 & 1) != 0) && (*(void **)(this + 8) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 8));
  }
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  sVar1 = strlen(param_1);
  __dest = operator_new__(sVar1 + 1);
  *(void **)(this + 8) = __dest;
  memcpy(__dest,param_1,sVar1 + 1);
                    /* catch() { ... } // from try @ 01020a5c with catch @ 01020bd8 */
  *(size_t *)(this + 0x10) = (long)__dest + sVar1;
  *(uint *)this = param_2 | 0x200;
                    /* catch() { ... } // from try @ 01020ce8 with catch @ 01020bf4 */
  return;
}

