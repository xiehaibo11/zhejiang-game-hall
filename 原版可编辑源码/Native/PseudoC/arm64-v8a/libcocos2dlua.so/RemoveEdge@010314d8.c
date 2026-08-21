
/* ClipperLib::RemoveEdge(ClipperLib::TEdge*) */

long ClipperLib::RemoveEdge(TEdge *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_1 + 0x60);
  lVar2 = *(long *)(param_1 + 0x60);
  *(long *)(lVar2 + 0x68) = lVar1;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return lVar2;
}

