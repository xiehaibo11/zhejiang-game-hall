
/* v8::internal::NativeRegExpMacroAssembler::Match(v8::internal::Handle<v8::internal::JSRegExp>,
   v8::internal::Handle<v8::internal::String>, int*, int, int, v8::internal::Isolate*) */

void v8::internal::NativeRegExpMacroAssembler::Match
               (undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined4 param_4,int param_5
               ,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined1 auStack_58 [8];
  
  uVar5 = *param_2;
  iVar2 = *(int *)(uVar5 + 7);
  uVar7 = uVar5 & 0xffffffff00000000;
  if ((*(ushort *)((uVar7 | *(uint *)(uVar5 - 1)) + 7) & 7) == 1) {
    iVar6 = 0;
    uVar5 = uVar7 | *(uint *)(uVar5 + 0xb);
  }
  else if ((*(ushort *)((uVar7 | *(uint *)(uVar5 - 1)) + 7) & 7) == 3) {
    piVar1 = (int *)(uVar5 + 0xf);
    uVar5 = uVar7 | *(uint *)(uVar5 + 0xb);
    iVar6 = *piVar1 >> 1;
  }
  else {
    iVar6 = 0;
  }
  uVar7 = uVar5 & 0xffffffff00000000;
  if ((*(ushort *)((uVar7 | *(uint *)(uVar5 - 1)) + 7) & 7) == 5) {
    uVar5 = uVar7 | *(uint *)(uVar5 + 0xb);
  }
  uVar3 = *(ushort *)((uVar7 | 7) + (ulong)*(uint *)(uVar5 - 1));
  lVar4 = StringCharacterPosition(uVar5,iVar6 + param_5,auStack_58);
  Execute(*param_2,param_5,lVar4,lVar4 + (iVar2 - param_5 << (ulong)((uVar3 >> 3 ^ 0xffffffff) & 1))
          ,param_3,param_4,param_6,*param_1);
  return;
}

