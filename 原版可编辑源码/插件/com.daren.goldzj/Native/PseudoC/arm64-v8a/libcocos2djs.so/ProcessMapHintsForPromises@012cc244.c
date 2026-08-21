
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessMapHintsForPromises(v8::internal::compiler::Hints
   const&) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessMapHintsForPromises
          (SerializerForBackgroundCompilation *this,Hints *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ObjectRef aOStack_60 [16];
  
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar3;
    if (puVar5 != (undefined8 *)0x0) {
      do {
        uVar4 = *(ulong *)*puVar5;
        if (((uVar4 & 1) != 0) &&
           (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x42d)) {
          uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1);
          pIVar1 = (Isolate *)**(undefined8 **)this;
          if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar2 = *(ulong **)(pIVar1 + 0x95a0);
            if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
              puVar2 = (ulong *)HandleScope::Extend(pIVar1);
            }
            *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
            *puVar2 = uVar4;
          }
          else {
            puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
          }
          ObjectRef::ObjectRef(aOStack_60,*(undefined8 *)this,puVar2,0);
          uVar4 = ObjectRef::IsMap(aOStack_60);
          if ((uVar4 & 1) == 0) goto LAB_012cc398;
          MapRef::SerializePrototype((MapRef *)aOStack_60);
        }
        puVar5 = (undefined8 *)puVar5[1];
      } while (puVar5 != (undefined8 *)0x0);
      puVar3 = *(undefined8 **)param_1;
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
    }
    for (puVar3 = (undefined8 *)puVar3[1]; puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[1]) {
      if (*(short *)(*(long *)*puVar3 + 7) == 0x42d) {
        ObjectRef::ObjectRef(aOStack_60,*(undefined8 *)this,(long *)*puVar3,0);
        uVar4 = ObjectRef::IsMap(aOStack_60);
        if ((uVar4 & 1) == 0) {
LAB_012cc398:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMap()");
        }
        MapRef::SerializePrototype((MapRef *)aOStack_60);
      }
    }
  }
  return;
}

