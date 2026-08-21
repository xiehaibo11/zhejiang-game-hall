
/* v8::internal::FrameWriter::DebugPrintOutputObject(v8::internal::Object, unsigned int, char
   const*) */

void __thiscall
v8::internal::FrameWriter::DebugPrintOutputObject
          (FrameWriter *this,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong local_18;
  
  if (*(long **)(this + 0x10) != (long *)0x0) {
    local_18 = param_2;
    PrintF(*(__sFILE **)(**(long **)(this + 0x10) + 0x90),"    0x%012lx: [top + %3d] <- ",
           *(long *)(*(long *)(this + 8) + 0x210) + (param_3 & 0xffffffff),param_3 & 0xffffffff);
    if ((param_2 & 1) == 0) {
      PrintF("0x%012lx <Smi %d>",param_2,(ulong)(uint)((int)param_2 >> 1));
    }
    else {
      Object::ShortPrint((Object *)&local_18,*(__sFILE **)(**(long **)(this + 0x10) + 0x90));
    }
    PrintF(*(__sFILE **)(**(long **)(this + 0x10) + 0x90)," ;  %s",param_4);
  }
  return;
}

