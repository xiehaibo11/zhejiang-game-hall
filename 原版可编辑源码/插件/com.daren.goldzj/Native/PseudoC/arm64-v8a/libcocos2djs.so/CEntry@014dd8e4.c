
/* v8::internal::CodeFactory::CEntry(v8::internal::Isolate*, int, v8::internal::SaveFPRegsMode,
   v8::internal::ArgvMode, bool) */

void v8::internal::CodeFactory::CEntry
               (long param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  
  bVar2 = param_2 != 1;
  bVar3 = param_3 != 0;
  if (((bVar2 || bVar3) || param_4 != 0) || ((param_5 & 1) != 0)) {
    uVar1 = param_5 ^ 1;
    if ((uVar1 & 1) == 0 && ((!bVar2 && !bVar3) && param_4 == 0)) {
      iVar4 = 0x276;
    }
    else if (((bVar2 || bVar3) || param_4 != 1) || ((param_5 & 1) != 0)) {
      if (((param_2 != 1 || param_3 != 1) || param_4 != 0) || ((param_5 & 1) != 0)) {
        if ((uVar1 & 1) == 0 && ((param_2 == 1 && param_3 == 1) && param_4 == 0)) {
          iVar4 = 0x279;
        }
        else {
          bVar2 = param_3 != 0;
          bVar3 = param_2 != 2;
          if (((bVar3 || bVar2) || param_4 != 0) || ((param_5 & 1) != 0)) {
            if ((uVar1 & 1) == 0 && ((!bVar3 && !bVar2) && param_4 == 0)) {
              iVar4 = 0x27b;
            }
            else if (((bVar3 || bVar2) || param_4 != 1) || ((param_5 & 1) != 0)) {
              bVar2 = (param_2 != 2 || param_3 != 1) || param_4 != 0;
              if ((bVar2) || ((param_5 & 1) != 0)) {
                if ((uVar1 & 1) != 0 || bVar2) {
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("unreachable code");
                }
                iVar4 = 0x27e;
              }
              else {
                iVar4 = 0x27d;
              }
            }
            else {
              iVar4 = 0x27c;
            }
          }
          else {
            iVar4 = 0x27a;
          }
        }
      }
      else {
        iVar4 = 0x278;
      }
    }
    else {
      iVar4 = 0x277;
    }
  }
  else {
    iVar4 = 0x275;
  }
  Builtins::builtin_handle((Builtins *)(param_1 + 0x9e00),iVar4);
  return;
}

