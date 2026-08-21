
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessContextAccess(v8::internal::compiler::Hints
   const&, int, int,
   v8::internal::compiler::SerializerForBackgroundCompilation::ContextProcessingMode,
   v8::internal::compiler::Hints*) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessContextAccess
          (SerializerForBackgroundCompilation *this,undefined8 *param_1,undefined4 param_2,
          uint param_3,int param_5,Hints *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  ulong local_90;
  undefined1 local_88 [16];
  char local_78 [8];
  ObjectRef aOStack_70 [16];
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar4;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        uVar5 = *(ulong *)*puVar7;
        if (((uVar5 & 1) != 0) &&
           (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) - 0x88 < 10)
           ) {
          ObjectRef::ObjectRef((ObjectRef *)local_88,*(undefined8 *)this,(ulong *)*puVar7,0);
          uVar5 = ObjectRef::IsContext((ObjectRef *)local_88);
          if ((uVar5 & 1) == 0) goto LAB_012c8ec8;
          local_90 = (long)(int)param_3;
          auVar8 = ContextRef::previous((ContextRef *)local_88,&local_90,1);
          local_88 = auVar8;
          if ((param_5 != 0) && (local_90 == 0)) {
            ContextRef::get(local_78,local_88,param_2,1);
            if ((param_6 != (Hints *)0x0) && (local_78[0] != '\0')) {
              uVar2 = ObjectRef::object(aOStack_70);
              lVar3 = *(long *)(this + 0x20);
              if (lVar3 == 0) {
                lVar3 = ZoneStats::NewEmptyZone
                                  (*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
                *(long *)(this + 0x20) = lVar3;
              }
              Hints::AddConstant(param_6,uVar2,lVar3);
            }
          }
        }
        puVar7 = (undefined8 *)puVar7[1];
      } while (puVar7 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)*param_1;
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
    }
    puVar6 = (uint *)puVar4[3];
    if (puVar6 != (uint *)0x0) {
      do {
        uVar1 = *puVar6;
        if (uVar1 <= param_3) {
          ObjectRef::ObjectRef
                    ((ObjectRef *)local_88,*(undefined8 *)this,*(undefined8 *)(puVar6 + 2),0);
          uVar5 = ObjectRef::IsContext((ObjectRef *)local_88);
          if ((uVar5 & 1) == 0) {
LAB_012c8ec8:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsContext()");
          }
          local_90 = (ulong)(param_3 - uVar1);
          auVar8 = ContextRef::previous((ContextRef *)local_88,&local_90,1);
          local_88 = auVar8;
          if ((param_5 != 0) && (local_90 == 0)) {
            ContextRef::get(local_78,local_88,param_2,1);
            if ((param_6 != (Hints *)0x0) && (local_78[0] != '\0')) {
              uVar2 = ObjectRef::object(aOStack_70);
              lVar3 = *(long *)(this + 0x20);
              if (lVar3 == 0) {
                lVar3 = ZoneStats::NewEmptyZone
                                  (*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
                *(long *)(this + 0x20) = lVar3;
              }
              Hints::AddConstant(param_6,uVar2,lVar3);
            }
          }
        }
        puVar6 = *(uint **)(puVar6 + 4);
      } while (puVar6 != (uint *)0x0);
    }
  }
  return;
}

