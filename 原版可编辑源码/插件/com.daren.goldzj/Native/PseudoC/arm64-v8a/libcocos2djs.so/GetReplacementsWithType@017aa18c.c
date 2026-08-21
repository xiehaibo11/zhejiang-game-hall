
/* v8::internal::compiler::SimdScalarLowering::GetReplacementsWithType(v8::internal::compiler::Node*,
   v8::internal::compiler::SimdScalarLowering::SimdType) */

Node ** __thiscall
v8::internal::compiler::SimdScalarLowering::GetReplacementsWithType
          (SimdScalarLowering *this,long param_1,byte param_3)

{
  undefined8 *puVar1;
  char cVar2;
  Zone *this_00;
  Node **ppNVar3;
  ulong uVar4;
  Node **ppNVar5;
  
  puVar1 = (undefined8 *)
           (*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10);
  ppNVar5 = (Node **)*puVar1;
  ppNVar3 = ppNVar5;
  if (*(byte *)(puVar1 + 1) != param_3) {
    if ((param_3 & 0xfd) == 0) {
      uVar4 = 0x10;
    }
    else if ((param_3 | 2) == 3) {
      uVar4 = 0x20;
    }
    else if (param_3 == 4) {
      uVar4 = 0x40;
    }
    else {
      if (param_3 != 5) goto switchD_017aa260_caseD_2;
      uVar4 = 0x80;
    }
    this_00 = *(Zone **)**(undefined8 **)this;
    ppNVar3 = *(Node ***)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)ppNVar3) < uVar4) {
      ppNVar3 = (Node **)Zone::NewExpand(this_00,uVar4);
    }
    else {
      *(ulong *)(this_00 + 0x10) = (long)ppNVar3 + uVar4;
    }
    switch(param_3) {
    case 1:
      cVar2 = *(char *)(*(long *)(this + 0x60) +
                        ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8);
      if (cVar2 != '\x03') {
        if (cVar2 == '\x04') goto LAB_017aa388;
        goto switchD_017aa260_caseD_2;
      }
      Int32ToFloat32(this,ppNVar5,ppNVar3);
      break;
    default:
switchD_017aa260_caseD_2:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 3:
      cVar2 = *(char *)(*(long *)(this + 0x60) +
                        ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8);
      if (cVar2 == '\x05') {
        SmallerIntToInt32<signed_char>(this,ppNVar5,ppNVar3);
      }
      else if (cVar2 == '\x04') {
        SmallerIntToInt32<short>(this,ppNVar5,ppNVar3);
      }
      else {
        if (cVar2 != '\x01') goto switchD_017aa260_caseD_2;
        Float32ToInt32(this,ppNVar5,ppNVar3);
      }
      break;
    case 4:
      cVar2 = *(char *)(*(long *)(this + 0x60) +
                        ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8);
      if (cVar2 != '\x03') {
        if (cVar2 == '\x01') goto LAB_017aa388;
        goto switchD_017aa260_caseD_2;
      }
      Int32ToSmallerInt<short>(this,ppNVar5,ppNVar3);
      break;
    case 5:
      if (*(char *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 +
                   8) != '\x03') {
LAB_017aa388:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unimplemented code");
      }
      Int32ToSmallerInt<signed_char>(this,ppNVar5,ppNVar3);
    }
  }
  return ppNVar3;
}

