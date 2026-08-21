
/* v8::internal::TranslatedState::VerifyMaterializedObjects() */

void __thiscall v8::internal::TranslatedState::VerifyMaterializedObjects(TranslatedState *this)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_38;
  
  uVar4 = *(ulong *)(this + 0x58);
  if ((int)uVar4 < 1) {
    return;
  }
  if (uVar4 != 0) {
    uVar5 = uVar4 & 0xffffffff;
    uVar9 = 0;
    do {
      uVar7 = uVar9 + *(long *)(this + 0x50);
      piVar1 = (int *)(*(long *)(*(long *)(this + 0x38) + (uVar7 >> 6 & 0x3fffffffffffff8)) +
                      (uVar7 & 0x1ff) * 8);
      lVar6 = *(long *)this + (long)*piVar1 * 0x58;
      uVar7 = *(long *)(lVar6 + 0x48) + (long)piVar1[1];
      lVar6 = *(long *)(*(long *)(lVar6 + 0x30) + (uVar7 >> 4 & 0xffffffffffffff8));
      uVar7 = uVar7 & 0x7f;
      pcVar2 = (char *)(lVar6 + uVar7 * 0x20);
      if (*pcVar2 == '\b') {
        if (uVar4 <= (ulong)(long)*(int *)(pcVar2 + 0x18)) break;
        uVar4 = *(long *)(this + 0x50) + (long)*(int *)(pcVar2 + 0x18);
        piVar1 = (int *)(*(long *)(*(long *)(this + 0x38) + (uVar4 >> 6 & 0x3fffffffffffff8)) +
                        (uVar4 & 0x1ff) * 8);
        lVar8 = *(long *)this + (long)*piVar1 * 0x58;
        uVar4 = *(long *)(lVar8 + 0x48) + (long)piVar1[1];
        if (pcVar2 != (char *)(*(long *)(*(long *)(lVar8 + 0x30) + (uVar4 >> 4 & 0xffffffffffffff8))
                              + (uVar4 & 0x7f) * 0x20)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","slot == GetValueByObjectIndex(slot->object_index())");
        }
        lVar6 = lVar6 + uVar7 * 0x20;
        cVar3 = *(char *)(lVar6 + 1);
        if (cVar3 == '\x02') {
          local_38 = **(undefined8 **)(lVar6 + 0x10);
          Object::ObjectVerify((Object *)&local_38,*(Isolate **)(this + 0x18));
        }
        else if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "slot->materialization_state() == TranslatedValue::kUninitialized");
        }
      }
      if (uVar5 - 1 == uVar9) {
        return;
      }
      uVar4 = *(ulong *)(this + 0x58);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","static_cast<size_t>(object_index) < object_positions_.size()");
}

