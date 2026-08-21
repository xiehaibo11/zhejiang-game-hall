
/* v8::internal::JSReceiver::GetDataProperty(v8::internal::LookupIterator*) */

long v8::internal::JSReceiver::GetDataProperty(LookupIterator *param_1)

{
  ulong uVar1;
  long lVar2;
  
  do {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0:
      if ((*(int *)(*(long *)(param_1 + 0x18) + 0x2bc8) == 0) ||
         (uVar1 = LookupIterator::HasAccess(param_1), (uVar1 & 1) == 0))
      goto switchD_010c9ad4_caseD_3;
    default:
      LookupIterator::Next(param_1);
      break;
    case 1:
    case 4:
      lVar2 = *(long *)(param_1 + 0x18);
LAB_010c9b14:
      return lVar2 + 0xa0;
    case 2:
    case 7:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 3:
    case 5:
switchD_010c9ad4_caseD_3:
      lVar2 = *(long *)(param_1 + 0x18);
      param_1[8] = (LookupIterator)0x0;
      *(undefined4 *)(param_1 + 4) = 4;
      goto LAB_010c9b14;
    case 6:
      lVar2 = LookupIterator::GetDataValue();
      return lVar2;
    }
  } while( true );
}

