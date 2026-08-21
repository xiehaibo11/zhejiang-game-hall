
void FUN_016955fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  ulong uVar2;
  Zone *pZVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  MapRef local_70 [16];
  ObjectRef local_60 [16];
  undefined1 local_50 [16];
  
  local_50._0_8_ = param_2;
  local_50._8_8_ = param_3;
  local_60 = (ObjectRef  [16])v8::internal::compiler::MapRef::prototype((MapRef *)local_50);
  uVar2 = v8::internal::compiler::ObjectRef::IsJSObject(local_60);
  if ((uVar2 & 1) != 0) {
    do {
      auVar6 = v8::internal::compiler::HeapObjectRef::map((HeapObjectRef *)local_60);
      local_50 = auVar6;
      uVar2 = v8::internal::compiler::MapRef::CanTransition((MapRef *)local_50);
      if ((uVar2 & 1) != 0) {
        pZVar3 = (Zone *)*param_1;
        puVar4 = *(undefined8 **)(pZVar3 + 0x10);
        if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar4) < 0x18) {
          puVar4 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar3,0x18);
        }
        else {
          *(undefined8 **)(pZVar3 + 0x10) = puVar4 + 3;
        }
        *puVar4 = &PTR_IsValid_01cccc78;
        *(undefined1 (*) [16])(puVar4 + 1) = local_50;
        if (puVar4 != (undefined8 *)0x0) {
          pZVar3 = (Zone *)param_1[3];
          puVar5 = *(undefined8 **)(pZVar3 + 0x10);
          if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar5) < 0x10) {
            puVar5 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar3,0x10);
          }
          else {
            *(undefined8 **)(pZVar3 + 0x10) = puVar5 + 2;
          }
          puVar5[1] = puVar4;
          *puVar5 = param_1[2];
          param_1[2] = puVar5;
        }
      }
      if (*param_4 != '\0') {
        uVar2 = v8::internal::compiler::ObjectRef::equals(local_60,(ObjectRef *)(param_4 + 8));
        if ((uVar2 & 1) != 0) {
          return;
        }
      }
      auVar6 = v8::internal::compiler::MapRef::prototype((MapRef *)local_50);
      local_60 = (ObjectRef  [16])auVar6;
      uVar2 = v8::internal::compiler::ObjectRef::IsJSObject(local_60);
    } while ((uVar2 & 1) != 0);
  }
  local_70 = (MapRef  [16])v8::internal::compiler::HeapObjectRef::map((HeapObjectRef *)local_60);
  cVar1 = v8::internal::compiler::MapRef::oddball_type(local_70);
  if (cVar1 == '\x03') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","proto.map().oddball_type() == OddballType::kNull");
}

