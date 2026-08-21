
/* v8::internal::GCTracer::Event::TypeName(bool) const */

char * __thiscall v8::internal::GCTracer::Event::TypeName(Event *this,bool param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  switch(*(undefined4 *)this) {
  case 0:
    pcVar1 = "Scavenge";
    pcVar2 = "s";
    break;
  case 1:
  case 2:
    pcVar1 = "Mark-sweep";
    pcVar2 = "ms";
    break;
  case 3:
    pcVar1 = "Minor Mark-Compact";
    pcVar2 = "mmc";
    break;
  case 4:
    pcVar1 = "Start";
    pcVar2 = "st";
    break;
  default:
    return "Unknown Event Type";
  }
  if (!param_1) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

