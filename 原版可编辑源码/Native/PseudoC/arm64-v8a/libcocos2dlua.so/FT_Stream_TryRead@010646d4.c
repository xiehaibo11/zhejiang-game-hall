
size_t FT_Stream_TryRead(long *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1] - uVar1;
  if ((ulong)param_1[1] < uVar1 || uVar2 == 0) {
    param_3 = 0;
                    /* catch() { ... } // from try @ 010649c0 with catch @ 01064720
                       catch() { ... } // from try @ 01064ae8 with catch @ 01064720
                       catch() { ... } // from try @ 01064c08 with catch @ 01064720 */
  }
  else {
    if ((code *)param_1[5] == (code *)0x0) {
      if (uVar2 <= param_3) {
        param_3 = uVar2;
      }
      memcpy(param_2,(void *)(*param_1 + uVar1),param_3);
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010646bc with catch @ 01064704
                        */
      param_3 = (*(code *)param_1[5])(param_1,uVar1,param_2,param_3);
    }
    param_1[2] = param_1[2] + param_3;
  }
  return param_3;
}

