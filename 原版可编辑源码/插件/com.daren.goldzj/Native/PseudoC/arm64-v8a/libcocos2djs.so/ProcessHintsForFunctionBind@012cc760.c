
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessHintsForFunctionBind(v8::internal::compiler::Hints
   const&) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessHintsForFunctionBind
          (SerializerForBackgroundCompilation *this,Hints *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  
  puVar2 = *(undefined8 **)param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar2;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        uVar3 = *(ulong *)*puVar4;
        if (((uVar3 & 1) != 0) &&
           (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x439)) {
          ObjectRef::ObjectRef((ObjectRef *)&local_50,*(undefined8 *)this,(ulong *)*puVar4,0);
          uVar3 = ObjectRef::IsJSFunction((ObjectRef *)&local_50);
          if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsJSFunction()");
          }
          JSFunctionRef::Serialize((JSFunctionRef *)&local_50);
          auVar5 = HeapObjectRef::map((HeapObjectRef *)&local_50);
          local_40 = auVar5;
          MapRef::SerializePrototype((MapRef *)local_40);
          iVar1 = MapRef::NumberOfOwnDescriptors((MapRef *)local_40);
          if (1 < iVar1) {
            MapRef::SerializeOwnDescriptor((MapRef *)local_40,0);
            MapRef::SerializeOwnDescriptor((MapRef *)local_40,1);
          }
        }
        puVar4 = (undefined8 *)puVar4[1];
      } while (puVar4 != (undefined8 *)0x0);
      puVar2 = *(undefined8 **)param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    for (puVar2 = (undefined8 *)puVar2[1]; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)puVar2[1]) {
      if (*(short *)(*(long *)*puVar2 + 7) == 0x439) {
        ObjectRef::ObjectRef((ObjectRef *)&local_50,*(undefined8 *)this,(long *)*puVar2,0);
        uVar3 = ObjectRef::IsMap((ObjectRef *)&local_50);
        if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMap()");
        }
        local_40._0_8_ = local_50;
        local_40._8_8_ = uStack_48;
        MapRef::SerializePrototype((MapRef *)local_40);
        iVar1 = MapRef::NumberOfOwnDescriptors((MapRef *)local_40);
        if (1 < iVar1) {
          MapRef::SerializeOwnDescriptor((MapRef *)local_40,0);
          MapRef::SerializeOwnDescriptor((MapRef *)local_40,1);
        }
      }
    }
  }
  return;
}

