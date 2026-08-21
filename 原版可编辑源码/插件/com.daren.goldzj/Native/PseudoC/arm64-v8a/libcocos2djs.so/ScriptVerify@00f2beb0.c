
/* v8::internal::Script::ScriptVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::Script::ScriptVerify(Script *this,Isolate *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  TorqueGeneratedClassVerifiers::ScriptVerify(*(undefined8 *)this);
  uVar5 = *(ulong *)this;
  iVar3 = 0;
  lVar4 = 0;
  uVar6 = uVar5 & 0xffffffff00000000;
  uVar1 = *(uint *)(uVar5 + 0x17) & 0xfffffffe;
  if (uVar1 != 6) goto LAB_00f2bf08;
  do {
    uVar7 = *(ulong *)(uVar6 + 0x420);
    while( true ) {
      if (*(int *)(uVar7 + 3) >> 1 <= lVar4) {
        return;
      }
      if (uVar1 == 6) {
        uVar7 = *(ulong *)(uVar6 + 0x420);
      }
      else {
        uVar7 = uVar6 | *(uint *)(uVar5 + 0x2b);
      }
      uVar2 = *(uint *)(uVar7 + (long)iVar3 + 7);
      if (((uVar2 != 3) && ((uVar2 & 3) != 3)) &&
         (((uVar2 & 3) != 1 || (uVar2 != *(uint *)(param_1 + 0xa0))))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "maybe_object->IsWeak() || maybe_object->IsCleared() || (maybe_object->GetHeapObjectIfStrong(&heap_object) && heap_object.IsUndefined(isolate))"
                );
      }
      lVar4 = lVar4 + 1;
      iVar3 = iVar3 + 4;
      if (uVar1 == 6) break;
LAB_00f2bf08:
      uVar7 = uVar6 | *(uint *)(uVar5 + 0x2b);
    }
  } while( true );
}

