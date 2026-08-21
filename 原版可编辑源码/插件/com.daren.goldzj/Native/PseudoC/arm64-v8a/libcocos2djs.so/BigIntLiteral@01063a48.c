
/* v8::internal::BigIntLiteral(v8::internal::Isolate*, char const*) */

void v8::internal::BigIntLiteral(Isolate *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  undefined **local_80;
  Isolate *pIStack_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_2);
  local_70 = 0;
  local_60 = 0;
  local_58 = (undefined4)sVar2;
  uStack_54 = 2;
  local_4c = 0;
  local_50 = 0x100;
  local_48 = 0;
  local_80 = &PTR__StringToIntHelper_01cb24e0;
  local_4e = 1;
  local_40 = 1;
  pIStack_78 = param_1;
  pcStack_68 = param_2;
  StringToBigIntHelper::GetResult((StringToBigIntHelper *)&local_80);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

