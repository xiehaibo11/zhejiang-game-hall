
/* v8::internal::StringBuilder::AddFormattedList(char const*, std::__va_list) */

void __thiscall
v8::internal::StringBuilder::AddFormattedList
          (StringBuilder *this,undefined8 param_1,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_3[1];
  local_40 = *param_3;
  uStack_28 = param_3[3];
  uStack_30 = param_3[2];
  iVar2 = base::OS::VSNPrintF(*(long *)this + (long)*(int *)(this + 0x10),
                              *(int *)(this + 8) - *(int *)(this + 0x10),param_1,&local_40);
  iVar1 = *(int *)(this + 8);
  iVar3 = iVar1;
  if ((-1 < iVar2) &&
     (iVar3 = *(int *)(this + 0x10) + iVar2, iVar1 - *(int *)(this + 0x10) <= iVar2)) {
    iVar3 = iVar1;
  }
  *(int *)(this + 0x10) = iVar3;
  return;
}

