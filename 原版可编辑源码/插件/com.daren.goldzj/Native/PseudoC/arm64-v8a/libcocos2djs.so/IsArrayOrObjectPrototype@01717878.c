
/* v8::internal::compiler::JSHeapBroker::IsArrayOrObjectPrototype(v8::internal::compiler::JSObjectRef
   const&) const */

ulong __thiscall
v8::internal::compiler::JSHeapBroker::IsArrayOrObjectPrototype
          (JSHeapBroker *this,JSObjectRef *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  if (*(int *)(this + 0x70) == 0) {
    uVar2 = Isolate::IsInAnyContext(*(Isolate **)this,*(undefined8 *)**(undefined8 **)param_1,0x38);
    if ((uVar2 & 1) == 0) {
      uVar2 = Isolate::IsInAnyContext
                        (*(Isolate **)this,*(undefined8 *)**(undefined8 **)param_1,0x3f);
      return uVar2;
    }
    uVar2 = 1;
  }
  else {
    if (*(long *)(this + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!array_and_object_prototypes_.empty()");
    }
    uVar8 = **(ulong **)param_1;
    uVar2 = base::hash_value(uVar8);
    uVar3 = *(ulong *)(this + 0x40);
    if (uVar3 == 0) {
LAB_0171797c:
      plVar6 = (long *)0x0;
    }
    else {
      uVar10 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar3 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar3
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar3
                                                                                        ))))))));
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
      if ((uVar11 & 0xffffffff) < 2) {
        uVar4 = uVar3 - 1 & uVar2;
      }
      else {
        uVar4 = uVar2;
        if (uVar3 <= uVar2) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          uVar4 = uVar2 - uVar4 * uVar3;
        }
      }
      plVar5 = *(long **)(*(long *)(this + 0x38) + uVar4 * 8);
      plVar6 = (long *)0x0;
      if ((plVar5 != (long *)0x0) && (plVar6 = (long *)*plVar5, plVar6 != (long *)0x0)) {
        do {
          uVar7 = plVar6[1];
          if (uVar2 == uVar7) {
            if (plVar6[2] == uVar8) break;
          }
          else {
            if ((uVar11 & 0xffffffff) < 2) {
              uVar7 = uVar7 & uVar3 - 1;
            }
            else if (uVar3 <= uVar7) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar7 / uVar3;
              }
              uVar7 = uVar7 - uVar1 * uVar3;
            }
            if (uVar7 != uVar4) goto LAB_0171797c;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
    uVar2 = (ulong)(plVar6 != (long *)0x0);
  }
  return uVar2;
}

