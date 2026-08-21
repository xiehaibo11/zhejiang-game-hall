
/* fairygui::GGraph::~GGraph() */

void __thiscall fairygui::GGraph::~GGraph(GGraph *this)

{
  ~GGraph(this);
  operator_delete(this);
  return;
}

