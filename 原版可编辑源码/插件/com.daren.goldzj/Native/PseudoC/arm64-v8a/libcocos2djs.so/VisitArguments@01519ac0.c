
/* v8::internal::interpreter::BytecodeGenerator::VisitArguments(v8::internal::ZoneList<v8::internal::Expression*>
   const*, v8::internal::interpreter::RegisterList*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitArguments
          (BytecodeGenerator *this,ZoneList *param_1,RegisterList *param_2)

{
  long lVar1;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar1 = 0;
    do {
      VisitAndPushIntoRegisterList(this,*(Expression **)(*(long *)param_1 + lVar1 * 8),param_2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xc));
  }
  return;
}

