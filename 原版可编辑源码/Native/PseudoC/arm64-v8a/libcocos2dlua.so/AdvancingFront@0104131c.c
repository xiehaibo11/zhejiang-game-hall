
/* p2t::AdvancingFront::AdvancingFront(p2t::Node&, p2t::Node&) */

void __thiscall
p2t::AdvancingFront::AdvancingFront(AdvancingFront *this,Node *param_1,Node *param_2)

{
  *(Node **)this = param_1;
  *(Node **)(this + 8) = param_2;
  *(Node **)(this + 0x10) = param_1;
  return;
}

