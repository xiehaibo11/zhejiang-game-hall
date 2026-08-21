
void FT_List_Find(long *param_1,long param_2)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    for (lVar1 = *param_1; (lVar1 != 0 && (*(long *)(lVar1 + 0x10) != param_2));
        lVar1 = *(long *)(lVar1 + 8)) {
                    /* try { // try from 0105df94 to 0115e027 has its CatchHandler @ 0105de38 */
    }
  }
  return;
}

