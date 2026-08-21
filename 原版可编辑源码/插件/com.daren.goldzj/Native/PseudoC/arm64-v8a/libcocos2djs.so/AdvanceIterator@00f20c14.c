
/* v8::internal::TranslatedFrame::AdvanceIterator(std::__ndk1::__deque_iterator<v8::internal::TranslatedValue,
   v8::internal::TranslatedValue*, v8::internal::TranslatedValue&, v8::internal::TranslatedValue**,
   long, 128l>*) */

void v8::internal::TranslatedFrame::AdvanceIterator(__deque_iterator *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  pcVar1 = *(char **)(param_1 + 8);
  iVar2 = 1;
  do {
    if (*pcVar1 == '\b') {
      iVar3 = *(int *)(pcVar1 + 0x1c);
    }
    else {
      iVar3 = 0;
    }
    plVar4 = *(long **)param_1;
    pcVar1 = pcVar1 + 0x20;
    *(char **)(param_1 + 8) = pcVar1;
    iVar2 = iVar2 + -1 + iVar3;
    if ((long)pcVar1 - *plVar4 == 0x1000) {
      *(long **)param_1 = plVar4 + 1;
      pcVar1 = (char *)plVar4[1];
      *(char **)(param_1 + 8) = pcVar1;
    }
  } while (0 < iVar2);
  return;
}

