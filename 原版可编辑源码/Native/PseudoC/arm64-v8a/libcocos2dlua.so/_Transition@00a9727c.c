
/* fairygui::Transition::~Transition() */

void __thiscall fairygui::Transition::~Transition(Transition *this)

{
  ~Transition(this);
  operator_delete(this);
  return;
}

