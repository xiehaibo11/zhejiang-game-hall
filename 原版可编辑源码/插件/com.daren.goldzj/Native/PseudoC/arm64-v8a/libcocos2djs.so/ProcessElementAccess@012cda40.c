
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessElementAccess(v8::internal::compiler::Hints
   const&, v8::internal::compiler::Hints const&, v8::internal::compiler::ElementAccessFeedback
   const&, v8::internal::compiler::AccessMode) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessElementAccess
          (SerializerForBackgroundCompilation *this,undefined8 *param_1,undefined8 *param_2,
          ElementAccessFeedback *param_3,int param_5)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 local_b0 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ObjectRef aOStack_70 [16];
  ObjectRef aOStack_60 [16];
  
  puVar5 = (undefined8 *)ElementAccessFeedback::transition_groups(param_3);
  plVar1 = (long *)*puVar5;
  plVar2 = (long *)puVar5[1];
  while( true ) {
    if (plVar1 == plVar2) break;
    puVar7 = (undefined8 *)plVar1[1];
    for (puVar5 = (undefined8 *)*plVar1; puVar5 != puVar7; puVar5 = puVar5 + 1) {
      ObjectRef::ObjectRef((ObjectRef *)local_88,*(undefined8 *)this,*puVar5,0);
      uVar6 = ObjectRef::IsMap((ObjectRef *)local_88);
      if ((uVar6 & 1) == 0) goto LAB_012cdc7c;
      if (param_5 == 3) {
LAB_012cdab0:
        MapRef::SerializeForElementLoad((MapRef *)local_88);
      }
      else if (param_5 == 1) {
        MapRef::SerializeForElementStore((MapRef *)local_88);
      }
      else if (param_5 == 0) goto LAB_012cdab0;
    }
    plVar1 = plVar1 + 4;
  }
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar5;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        ObjectRef::ObjectRef(aOStack_60,*(undefined8 *)this,*puVar7,1);
        uVar6 = ObjectRef::IsHeapObject(aOStack_60);
        if ((uVar6 & 1) != 0) {
          auVar8 = ObjectRef::AsHeapObject(aOStack_60);
          local_b0 = auVar8;
          auVar8 = HeapObjectRef::map((HeapObjectRef *)local_b0);
          local_88 = auVar8;
          MapRef::SerializeRootMap((MapRef *)local_88);
        }
        uVar6 = ObjectRef::IsJSTypedArray(aOStack_60);
        if ((uVar6 & 1) != 0) {
          auVar8 = ObjectRef::AsJSTypedArray(aOStack_60);
          local_88 = auVar8;
          JSTypedArrayRef::Serialize((JSTypedArrayRef *)local_88);
        }
        if (((param_5 == 3) || (param_5 == 0)) && ((long *)*param_2 != (long *)0x0)) {
          for (puVar5 = *(undefined8 **)*param_2; puVar5 != (undefined8 *)0x0;
              puVar5 = (undefined8 *)puVar5[1]) {
            ObjectRef::ObjectRef(aOStack_70,*(undefined8 *)this,*puVar5,1);
            uVar6 = ObjectRef::IsSmi(aOStack_70);
            if ((uVar6 & 1) != 0) {
              iVar3 = ObjectRef::AsSmi(aOStack_70);
              if (-1 < iVar3) {
                uVar4 = ObjectRef::AsSmi(aOStack_70);
                ObjectRef::GetOwnConstantElement(local_88,aOStack_60,uVar4,1);
                if (local_88[0] == (MapRef)0x0) {
                  uVar6 = ObjectRef::IsJSArray(aOStack_60);
                  if ((uVar6 & 1) != 0) {
                    auVar8 = ObjectRef::AsJSArray(aOStack_60);
                    local_98 = auVar8;
                    uVar4 = ObjectRef::AsSmi(aOStack_70);
                    JSArrayRef::GetOwnCowElement(local_b0,local_98,uVar4,1);
                  }
                }
              }
            }
          }
        }
        puVar7 = (undefined8 *)puVar7[1];
      } while (puVar7 != (undefined8 *)0x0);
      puVar5 = (undefined8 *)*param_1;
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
    }
    for (puVar5 = (undefined8 *)puVar5[1]; puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[1]) {
      ObjectRef::ObjectRef((ObjectRef *)local_88,*(undefined8 *)this,*puVar5,0);
      uVar6 = ObjectRef::IsMap((ObjectRef *)local_88);
      if ((uVar6 & 1) == 0) {
LAB_012cdc7c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      MapRef::SerializeRootMap((MapRef *)local_88);
    }
  }
  return;
}

