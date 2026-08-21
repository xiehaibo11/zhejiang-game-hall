
/* v8::internal::DoubleToAscii(double, v8::internal::DtoaMode, int, v8::internal::Vector<char>,
   int*, int*, int*) */

void __thiscall
v8::internal::DoubleToAscii
          (internal *param_1,internal *this,int param_3,undefined2 *param_4,undefined8 param_5,
          undefined4 *param_6,int *param_7,undefined4 *param_8)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((long)param_1 < 0) {
    *param_6 = 1;
    param_1 = (internal *)-(double)param_1;
  }
  else {
    *param_6 = 0;
  }
  if ((double)param_1 == 0.0) {
    *param_4 = 0x30;
    *param_7 = 1;
    *param_8 = 1;
  }
  else {
    iVar1 = (int)this;
    if ((iVar1 == 2) && (param_3 == 0)) {
      *(undefined1 *)param_4 = 0;
      *param_7 = 0;
    }
    else {
      if (iVar1 == 0) {
        uVar2 = FastDtoa(param_1,this,0,param_4,param_5,param_7,param_8);
        uVar3 = 0;
        if ((uVar2 & 1) != 0) {
          return;
        }
      }
      else if (iVar1 == 2) {
        uVar2 = FastDtoa(param_1,1,param_3,param_4,param_5,param_7,param_8);
        if ((uVar2 & 1) != 0) {
          return;
        }
        uVar3 = 2;
      }
      else {
        if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar2 = FastFixedDtoa(param_1,param_3,param_4,param_5,param_7,param_8);
        if ((uVar2 & 1) != 0) {
          return;
        }
        uVar3 = 1;
      }
      BignumDtoa(param_1,uVar3,param_3,param_4,param_5,param_7,param_8);
      *(undefined1 *)((long)param_4 + (long)*param_7) = 0;
    }
  }
  return;
}

