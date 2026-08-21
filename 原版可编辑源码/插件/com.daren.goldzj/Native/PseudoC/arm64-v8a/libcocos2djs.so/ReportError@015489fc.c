
/* v8::internal::RegExpParser::ReportError(v8::internal::Vector<char const>) */

undefined8
v8::internal::RegExpParser::ReportError(undefined8 *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 local_30;
  long lStack_28;
  
  if (*(char *)((long)param_1 + 0x51) == '\0') {
    *(undefined1 *)((long)param_1 + 0x51) = 1;
    lStack_28 = (long)param_3;
    local_30 = param_2;
    lVar1 = Factory::NewStringFromOneByte(*param_1,&local_30,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    *(long *)param_1[2] = lVar1;
    *(undefined4 *)(param_1 + 7) = 0x200000;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1[6] + 0x24);
  }
  return 0;
}

