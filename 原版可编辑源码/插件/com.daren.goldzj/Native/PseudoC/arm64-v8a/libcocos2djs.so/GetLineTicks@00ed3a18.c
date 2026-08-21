
/* v8::CpuProfileNode::GetLineTicks(v8::CpuProfileNode::LineTick*, unsigned int) const */

void v8::CpuProfileNode::GetLineTicks(LineTick *param_1,uint param_2)

{
  uint in_w2;
  
  internal::ProfileNode::GetLineTicks((ProfileNode *)param_1,(LineTick *)(ulong)param_2,in_w2);
  return;
}

