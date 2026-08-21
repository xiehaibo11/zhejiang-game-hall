
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCheckContextExtensions(int) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCheckContextExtensions
          (SerializerForBackgroundCompilation *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  ObjectRef aOStack_40 [16];
  
  puVar2 = *(undefined8 **)(this + 0x28);
  if (0 < param_1) {
    iVar3 = 0;
    do {
      ProcessContextAccess(this,puVar2 + 5,2,iVar3,1,0);
      iVar3 = iVar3 + 1;
    } while (param_1 != iVar3);
    puVar2 = *(undefined8 **)(this + 0x28);
  }
  ObjectRef::ObjectRef(aOStack_40,*(undefined8 *)this,*puVar2,0);
  uVar1 = ObjectRef::IsSharedFunctionInfo(aOStack_40);
  if ((uVar1 & 1) != 0) {
    SharedFunctionInfoRef::SerializeScopeInfoChain((SharedFunctionInfoRef *)aOStack_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
}

