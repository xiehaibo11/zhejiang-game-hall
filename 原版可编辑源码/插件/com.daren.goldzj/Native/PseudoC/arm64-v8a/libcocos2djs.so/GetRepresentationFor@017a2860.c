
/* v8::internal::compiler::RepresentationChanger::GetRepresentationFor(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::compiler::Type, v8::internal::compiler::Node*,
   v8::internal::compiler::UseInfo) */

undefined8 __thiscall
v8::internal::compiler::RepresentationChanger::GetRepresentationFor
          (RepresentationChanger *this,undefined8 param_1,char param_3,long param_4,
          undefined8 param_5,char *param_6)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = tpidr_el0;
  lVar2 = *(long *)(lVar3 + 0x28);
  if (param_3 == '\0') {
    if (param_4 == 1) goto LAB_017a28d8;
    param_1 = TypeError(this,param_1,0,param_4,*param_6);
    goto switchD_017a28b8_caseD_0;
  }
  if ((param_3 == '\x04') && (param_6[0xc] != '\0')) {
    cVar1 = *param_6;
  }
  else {
LAB_017a28d8:
    cVar1 = *param_6;
    if ((cVar1 == param_3) || (((byte)(param_3 - 2U) < 3 && ((byte)(cVar1 - 2U) < 3))))
    goto switchD_017a28b8_caseD_0;
  }
  switch(cVar1) {
  case '\0':
  case '\r':
    break;
  case '\x01':
    param_1 = GetBitRepresentationFor();
    goto LAB_017a2994;
  case '\x02':
  case '\x03':
  case '\x04':
    param_1 = GetWord32RepresentationFor();
    break;
  case '\x05':
    param_1 = GetWord64RepresentationFor();
    break;
  case '\x06':
    param_1 = GetTaggedSignedRepresentationFor();
    break;
  case '\a':
    param_1 = GetTaggedPointerRepresentationFor();
    break;
  case '\b':
    param_1 = GetTaggedRepresentationFor();
    goto LAB_017a2994;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case '\v':
    param_1 = GetFloat32RepresentationFor();
LAB_017a2994:
    lVar3 = *(long *)(lVar3 + 0x28);
    goto joined_r0x017a29a0;
  case '\f':
    param_1 = GetFloat64RepresentationFor();
  }
switchD_017a28b8_caseD_0:
  lVar3 = *(long *)(lVar3 + 0x28);
joined_r0x017a29a0:
  if (lVar3 == lVar2) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

