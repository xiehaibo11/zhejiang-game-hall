
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessMapForRegExpTest(v8::internal::compiler::MapRef)
    */

void v8::internal::compiler::SerializerForBackgroundCompilation::ProcessMapForRegExpTest
               (int *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined1 auStack_78 [24];
  ObjectRef aOStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar2 = (long *)*param_2;
  ObjectRef::ObjectRef((ObjectRef *)&local_50,plVar2,*plVar2 + 0x6a0,0);
  uVar1 = ObjectRef::IsName((ObjectRef *)&local_50);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsName()");
  }
  JSHeapBroker::GetPropertyAccessInfo
            (param_1,plVar2,param_3,param_4,local_50,uStack_48,0,param_2[1],1);
  if ((*param_1 == 3) && (*(long *)(param_1 + 0x16) != 0)) {
    ObjectRef::ObjectRef(aOStack_60,*param_2,*(long *)(param_1 + 0x16),0);
    uVar1 = ObjectRef::IsJSObject(aOStack_60);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    JSObjectRef::GetOwnDataProperty
              (auStack_78,aOStack_60,(char)param_1[0x1a],*(undefined8 *)(param_1 + 0x18),1);
  }
  return;
}

