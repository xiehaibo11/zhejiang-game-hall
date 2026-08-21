
/* v8::internal::AnalyzeRegExp(v8::internal::Isolate*, bool, v8::internal::RegExpNode*) */

char * v8::internal::AnalyzeRegExp(Isolate *param_1,bool param_2,RegExpNode *param_3)

{
  ulong uVar1;
  undefined **local_40;
  Isolate *pIStack_38;
  undefined1 local_30;
  char *local_28;
  
  local_40 = &PTR__NodeVisitor_01cc8968;
  local_28 = (char *)0x0;
  pIStack_38 = param_1;
  local_30 = param_2;
  uVar1 = GetCurrentStackPosition();
  if (uVar1 < *(ulong *)(param_1 + 0x58)) {
    local_28 = "Stack overflow";
  }
  else if (((byte)param_3[0x19] & 3) == 0) {
    param_3[0x19] = (RegExpNode)((byte)param_3[0x19] | 1);
    (**(code **)(*(long *)param_3 + 0x10))(param_3,&local_40);
    param_3[0x19] = (RegExpNode)((byte)param_3[0x19] & 0xfc | 2);
  }
  else {
    local_28 = (char *)0x0;
  }
  return local_28;
}

