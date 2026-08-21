
/* v8::Extension::Extension(char const*, char const*, int, char const**, int) */

void __thiscall
v8::Extension::Extension
          (Extension *this,char *param_1,char *param_2,int param_3,char **param_4,int param_5)

{
  size_t sVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__Extension_01c98268;
  *(char **)(this + 8) = param_1;
  if (param_5 < 0) {
    if (param_2 == (char *)0x0) {
      param_5 = 0;
    }
    else {
      sVar1 = strlen(param_2);
      param_5 = (int)sVar1;
    }
  }
  *(int *)(this + 0x20) = param_3;
  *(char ***)(this + 0x28) = param_4;
  *(long *)(this + 0x10) = (long)param_5;
  this[0x30] = (Extension)0x0;
  puVar2 = operator_new(0x18);
  puVar2[1] = param_2;
  puVar2[2] = (long)param_5;
  *puVar2 = &PTR__ExternalStringResourceBase_01c98408;
  *(undefined8 **)(this + 0x18) = puVar2;
  if ((param_2 == (char *)0x0) && (param_5 != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","source != nullptr || source_length_ == 0");
  }
  return;
}

