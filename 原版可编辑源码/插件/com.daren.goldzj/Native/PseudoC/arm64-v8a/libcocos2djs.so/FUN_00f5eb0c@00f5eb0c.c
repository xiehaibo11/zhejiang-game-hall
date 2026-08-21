
long * FUN_00f5eb0c(Isolate *param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ParseInfo aPStack_178 [112];
  AstValueFactory *local_108;
  FunctionLiteral *local_d0;
  ulong local_98 [10];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00f5f0f0(param_1,param_3);
  if ((uVar5 & 1) != 0) {
    v8::internal::ParseInfo::ParseInfo(aPStack_178,param_1,*(undefined8 *)(param_3 + 0x18));
    uVar5 = v8::internal::parsing::ParseAny(aPStack_178,*(undefined8 *)(param_3 + 0x18),param_1,0);
    if ((uVar5 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
    }
    else {
      v8::internal::AstValueFactory::Internalize(local_108,param_1);
      uVar7 = **(ulong **)(param_3 + 0x18) & 0xffffffff00000000;
      uVar5 = uVar7 | *(uint *)(**(ulong **)(param_3 + 0x18) + 0xf);
      if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x5b) {
        uVar5 = uVar7 | *(uint *)(uVar5 + 0xb);
      }
      if (((uVar5 & 1) == 0) || ((int)uVar5 != *(int *)((uVar5 & 0xffffffff00000000) + 0xa0))) {
        local_98[0] = uVar5;
        bVar3 = v8::internal::Script::IsUserJavaScript((Script *)local_98);
      }
      else {
        bVar3 = 0;
      }
      v8::internal::CallPrinter::CallPrinter((CallPrinter *)local_98,param_1,(bool)(bVar3 & 1));
      plVar6 = (long *)v8::internal::CallPrinter::Print
                                 ((CallPrinter *)local_98,local_d0,*(int *)(param_3 + 8));
      uVar4 = v8::internal::CallPrinter::GetErrorHint((CallPrinter *)local_98);
      *param_4 = uVar4;
      iVar1 = *(int *)(*plVar6 + 7);
      v8::internal::CallPrinter::~CallPrinter((CallPrinter *)local_98);
      if (0 < iVar1) {
        v8::internal::ParseInfo::~ParseInfo(aPStack_178);
        goto LAB_00f5ec50;
      }
    }
    v8::internal::ParseInfo::~ParseInfo(aPStack_178);
  }
  plVar6 = (long *)FUN_00f5f34c(param_1,param_2);
LAB_00f5ec50:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

