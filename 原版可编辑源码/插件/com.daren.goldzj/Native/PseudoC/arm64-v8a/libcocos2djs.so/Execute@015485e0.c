
/* v8::internal::NativeRegExpMacroAssembler::Execute(v8::internal::String, int, unsigned char
   const*, unsigned char const*, int*, int, v8::internal::Isolate*, v8::internal::JSRegExp) */

int v8::internal::NativeRegExpMacroAssembler::Execute
              (ulong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined4 param_6,Isolate *param_7,undefined8 param_8)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long local_60;
  undefined8 local_58;
  
  local_58 = param_8;
  RegExpStackScope::RegExpStackScope((RegExpStackScope *)&local_60,param_7);
  uVar6 = *(undefined8 *)(local_60 + 0x208);
  uVar5 = param_1;
  do {
    uVar1 = *(ushort *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 7);
    if ((uVar1 & 9) == 0) {
      bVar4 = false;
LAB_01548670:
      lVar3 = JSRegExp::Code((JSRegExp *)&local_58,bVar4);
      iVar2 = (*(code *)(lVar3 + 0x3f))
                        (param_1,param_2,param_3,param_4,param_5,param_6,uVar6,0,param_7,local_58);
      if (((iVar2 == -1) && ((*(ulong *)(param_7 + 0x2bd8) & 1) != 0)) &&
         ((int)*(ulong *)(param_7 + 0x2bd8) == *(int *)(param_7 + 0xa8))) {
        Isolate::StackOverflow(param_7);
      }
      RegExpStackScope::~RegExpStackScope((RegExpStackScope *)&local_60);
      return iVar2;
    }
    if ((uVar1 & 9) == 8) {
      bVar4 = true;
      goto LAB_01548670;
    }
    uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
  } while( true );
}

