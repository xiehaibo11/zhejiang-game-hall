
/* fairygui::GGraph::~GGraph() */

void __thiscall fairygui::GGraph::~GGraph(GGraph *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__GGraph_016a5840;
  if (*(void **)(this + 0x200) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x200));
  }
  puVar2 = *(undefined8 **)(this + 0x208);
  *(undefined8 *)(this + 0x200) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
  }
  puVar2 = *(undefined8 **)(this + 0x220);
  *(undefined8 *)(this + 0x208) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
  }
  *(undefined8 *)(this + 0x220) = 0;
  GObject::~GObject((GObject *)this);
  return;
}

