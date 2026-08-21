
/* p2t::SweepContext::RemoveNode(p2t::Node*) */

void __thiscall p2t::SweepContext::RemoveNode(SweepContext *this,Node *param_1)

{
  if (param_1 != (Node *)0x0) {
    operator_delete(param_1);
    return;
  }
                    /* try { // try from 0102cd60 to 0112cd63 has its CatchHandler @ 0102cd84 */
  return;
}

