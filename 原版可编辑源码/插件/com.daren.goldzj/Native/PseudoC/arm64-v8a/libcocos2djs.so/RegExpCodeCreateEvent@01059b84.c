
/* v8::internal::CodeEventLogger::RegExpCodeCreateEvent(v8::internal::AbstractCode,
   v8::internal::String) */

void __thiscall
v8::internal::CodeEventLogger::RegExpCodeCreateEvent
          (CodeEventLogger *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  void *local_58;
  int local_4c;
  undefined8 local_48;
  
  piVar5 = *(int **)(this + 0x10);
  *piVar5 = 0;
  iVar4 = __strlen_chk("RegExp",7);
  iVar2 = 0x200 - *piVar5;
  if (iVar2 <= iVar4) {
    iVar4 = iVar2;
  }
  MemCopy((void *)((long)piVar5 + (long)*piVar5 + 4),"RegExp",(long)iVar4);
  lVar1 = (long)iVar4 + (long)*piVar5;
  iVar4 = (int)lVar1;
  *piVar5 = iVar4;
  if (iVar4 < 0x200) {
    *piVar5 = iVar4 + 1;
    *(undefined1 *)((long)piVar5 + lVar1 + 4) = 0x3a;
  }
  piVar5 = *(int **)(this + 0x10);
  local_48 = param_3;
  if ((int)param_3 != 0) {
    local_4c = 0;
    String::ToCString(&local_58,&local_48,1,0,&local_4c);
    iVar2 = 0x200 - *piVar5;
    iVar4 = local_4c;
    if (iVar2 <= local_4c) {
      iVar4 = iVar2;
    }
    MemCopy((void *)((long)piVar5 + (long)*piVar5 + 4),local_58,(long)iVar4);
    pvVar3 = local_58;
    *piVar5 = iVar4 + *piVar5;
    local_58 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    piVar5 = *(int **)(this + 0x10);
  }
  (**(code **)(*(long *)this + 0x90))(this,param_2,0,piVar5 + 1,*piVar5);
  return;
}

