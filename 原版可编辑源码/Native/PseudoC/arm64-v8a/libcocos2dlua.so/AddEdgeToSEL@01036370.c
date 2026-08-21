
/* ClipperLib::Clipper::AddEdgeToSEL(ClipperLib::TEdge*) */

void __thiscall ClipperLib::Clipper::AddEdgeToSEL(Clipper *this,TEdge *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x90);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x88) = lVar1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(TEdge **)(lVar1 + 0x90) = param_1;
    *(TEdge **)(this + 0x90) = param_1;
    return;
  }
  *(TEdge **)(this + 0x90) = param_1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}

