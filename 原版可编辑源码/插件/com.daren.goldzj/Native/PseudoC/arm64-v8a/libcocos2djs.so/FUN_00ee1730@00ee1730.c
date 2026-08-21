
undefined8
FUN_00ee1730(ParseInfo *param_1,Isolate *param_2,undefined8 param_3,undefined8 param_4,long *param_5
            )

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  
  v8::internal::DeclarationScope::AllocateScopeInfos(param_1,param_2);
  iVar2 = FUN_00ee6e98(param_4,param_3,param_2);
  do {
    if (iVar2 != 0) {
      return 0;
    }
    do {
      param_5 = (long *)*param_5;
      if (param_5 == (long *)0x0) {
        if (*(long *)(param_1 + 0xd8) != 0) {
          v8::internal::PendingCompilationErrorHandler::ReportWarnings
                    ((PendingCompilationErrorHandler *)(param_1 + 0xb0),param_2,
                     *(undefined8 *)(param_1 + 0x50));
        }
        return 1;
      }
      puVar3 = (ulong *)v8::internal::Compiler::GetSharedFunctionInfo
                                  (*(undefined8 *)(*(long *)(param_5[1] + 0x28) + 0x10),
                                   *(undefined8 *)(param_1 + 0x50),param_2);
      uVar1 = *(uint *)(*puVar3 + 3);
    } while ((uVar1 != 0x84) &&
            (((uVar1 & 1) == 0 ||
             (uVar4 = *puVar3 & 0xffffffff00000000,
             1 < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar1) - 1)) - 0x95))));
    iVar2 = FUN_00ee6e98(param_5[1],puVar3,param_2);
  } while( true );
}

