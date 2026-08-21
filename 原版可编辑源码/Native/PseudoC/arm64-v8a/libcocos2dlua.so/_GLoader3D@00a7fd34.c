
/* fairygui::GLoader3D::~GLoader3D() */

void __thiscall fairygui::GLoader3D::~GLoader3D(GLoader3D *this)

{
                    /* try { // try from 00a7fd38 to 00b7fd6b has its CatchHandler @ 00a7fc40 */
  ~GLoader3D(this);
  operator_delete(this);
  return;
}

