
/* fairygui::FastSplitter::getKeyValuePair(char*, long, char*, long) */

void __thiscall
fairygui::FastSplitter::getKeyValuePair
          (FastSplitter *this,char *param_1,long param_2,char *param_3,long param_4)

{
  long lVar1;
  void *pvVar2;
  void *__s;
  size_t sVar3;
  
  sVar3 = *(size_t *)(this + 0x10);
  if (sVar3 == 0) {
    *param_1 = '\0';
  }
  else {
    __s = *(void **)this;
                    /* catch() { ... } // from try @ 00ab72ac with catch @ 00ab7508 */
                    /* catch() { ... } // from try @ 00ab729c with catch @ 00ab750c */
                    /* catch() { ... } // from try @ 00ab7284 with catch @ 00ab7510 */
                    /* catch() { ... } // from try @ 00ab7458 with catch @ 00ab7514 */
    pvVar2 = memchr(__s,0x3d,sVar3);
    if (pvVar2 == (void *)0x0) {
      if (param_4 <= (long)sVar3) {
        sVar3 = param_4 - 1;
      }
      memcpy(param_1,__s,sVar3);
      param_1[sVar3] = '\0';
    }
    else {
                    /* catch() { ... } // from try @ 00ab7418 with catch @ 00ab7524 */
      sVar3 = (long)pvVar2 - (long)__s;
      if (param_2 <= (long)pvVar2 - (long)__s) {
        sVar3 = param_2 - 1;
      }
                    /* catch() { ... } // from try @ 00ab72e8 with catch @ 00ab7530 */
      memcpy(param_1,__s,sVar3);
                    /* catch() { ... } // from try @ 00ab73f4 with catch @ 00ab7540 */
      param_1[sVar3] = '\0';
                    /* catch() { ... } // from try @ 00ab72fc with catch @ 00ab7544 */
      lVar1 = (*(long *)this - (long)pvVar2) + *(long *)(this + 0x10);
      if (lVar1 <= param_4) {
        param_4 = lVar1;
      }
      memcpy(param_3,(void *)((long)pvVar2 + 1),param_4 - 1U);
      param_3 = param_3 + (param_4 - 1U);
    }
  }
  *param_3 = '\0';
  return;
}

