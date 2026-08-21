
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessHintsForRegExpTest(v8::internal::compiler::Hints
   const&) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessHintsForRegExpTest
          (SerializerForBackgroundCompilation *this,Hints *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [40];
  long local_180;
  long local_178;
  undefined1 auStack_120 [24];
  ObjectRef aOStack_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8 [10];
  long local_c0;
  long local_b8;
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar3;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        puVar5 = (ulong *)*puVar6;
        uVar4 = *puVar5;
        if (((uVar4 & 1) != 0) &&
           (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x42e)) {
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
          ObjectRef::ObjectRef((ObjectRef *)&local_f8,*(undefined8 *)this,puVar2,0);
          uVar4 = ObjectRef::IsMap((ObjectRef *)&local_f8);
          if ((uVar4 & 1) == 0) goto LAB_012cc598;
          ProcessMapForRegExpTest(local_e8,this,local_f8,uStack_f0);
          if ((local_e8[0] == 3) && (local_90 == 0)) {
            ObjectRef::ObjectRef(aOStack_108,*(undefined8 *)this,puVar5,0);
            uVar4 = ObjectRef::IsJSObject(aOStack_108);
            if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","IsJSObject()");
            }
            JSObjectRef::GetOwnDataProperty(auStack_120,aOStack_108,local_80,local_88,1);
          }
          if (local_c0 != 0) {
            local_b8 = local_c0;
          }
        }
        puVar6 = (undefined8 *)puVar6[1];
      } while (puVar6 != (undefined8 *)0x0);
      puVar3 = *(undefined8 **)param_1;
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
    }
    for (puVar3 = (undefined8 *)puVar3[1]; puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[1]) {
      if (*(short *)(*(long *)*puVar3 + 7) == 0x42e) {
        ObjectRef::ObjectRef((ObjectRef *)&local_1b8,*(undefined8 *)this,(long *)*puVar3,0);
        uVar4 = ObjectRef::IsMap((ObjectRef *)&local_1b8);
        if ((uVar4 & 1) == 0) {
LAB_012cc598:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMap()");
        }
        ProcessMapForRegExpTest(auStack_1a8,this,local_1b8,uStack_1b0);
        if (local_180 != 0) {
          local_178 = local_180;
        }
      }
    }
  }
  return;
}

