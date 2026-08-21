
/* v8::internal::compiler::NamedAccessFeedback::NamedAccessFeedback(v8::internal::compiler::NameRef
   const&, v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map> > const&,
   v8::internal::FeedbackSlotKind) */

void __thiscall
v8::internal::compiler::NamedAccessFeedback::NamedAccessFeedback
          (NamedAccessFeedback *this,undefined8 *param_1,long *param_2,undefined4 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  Zone *this_00;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  *(undefined4 *)this = 9;
  *(undefined4 *)(this + 4) = param_4;
  uVar5 = *param_1;
  *(undefined8 *)(this + 0x10) = param_1[1];
  *(undefined8 *)(this + 8) = uVar5;
  this_00 = (Zone *)param_2[3];
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Zone **)(this + 0x30) = this_00;
  uVar2 = param_2[1] - *param_2;
  if (uVar2 != 0) {
    if ((ulong)((long)uVar2 >> 3) >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar3 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < uVar2) {
      puVar3 = (undefined8 *)Zone::NewExpand(this_00,uVar2);
    }
    else {
      *(ulong *)(this_00 + 0x10) = (long)puVar3 + uVar2;
    }
    *(undefined8 **)(this + 0x18) = puVar3;
    *(undefined8 **)(this + 0x20) = puVar3;
    *(undefined8 **)(this + 0x28) = puVar3 + ((long)uVar2 >> 3);
    puVar1 = (undefined8 *)param_2[1];
    for (puVar4 = (undefined8 *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      *puVar3 = *puVar4;
      puVar3 = (undefined8 *)(*(long *)(this + 0x20) + 8);
      *(undefined8 **)(this + 0x20) = puVar3;
    }
  }
  return;
}

