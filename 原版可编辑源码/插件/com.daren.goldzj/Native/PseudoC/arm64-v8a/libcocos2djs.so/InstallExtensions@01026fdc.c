
/* v8::internal::Bootstrapper::InstallExtensions(v8::internal::Handle<v8::internal::Context>,
   v8::ExtensionConfiguration*) */

bool __thiscall
v8::internal::Bootstrapper::InstallExtensions
          (Bootstrapper *this,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 extraout_x1;
  bool bVar2;
  SaveAndSwitchContext aSStack_38 [24];
  
  if (*(char *)(*(long *)this + 0xb6b8) == '\0') {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    SaveAndSwitchContext::SaveAndSwitchContext(aSStack_38,*(long *)this,*param_2);
    uVar1 = Genesis::InstallExtensions(*(undefined8 *)this,extraout_x1,param_3);
    bVar2 = (uVar1 & 1) != 0;
    if (bVar2) {
      Genesis::InstallSpecialObjects(*(undefined8 *)this);
    }
    SaveContext::~SaveContext((SaveContext *)aSStack_38);
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

