
/* p2t::Sweep::Fill(p2t::SweepContext&, p2t::Node&) */

void __thiscall p2t::Sweep::Fill(Sweep *this,SweepContext *param_1,Node *param_2)

{
  long lVar1;
  Triangle *this_00;
  ulong uVar2;
  
                    /* catch() { ... } // from try @ 0102e75c with catch @ 0102e72c */
  this_00 = operator_new(0x40);
                    /* try { // try from 0102e754 to 0112e75b has its CatchHandler @ 0102e7c4 */
                    /* try { // try from 0102e75c to 0112e7df has its CatchHandler @ 0102e72c */
  Triangle::Triangle(this_00,(Point *)**(undefined8 **)(param_2 + 0x18),*(Point **)param_2,
                     (Point *)**(undefined8 **)(param_2 + 0x10));
  Triangle::MarkNeighbor(this_00,*(Triangle **)(*(long *)(param_2 + 0x18) + 8));
  Triangle::MarkNeighbor(this_00,*(Triangle **)(param_2 + 8));
  SweepContext::AddToMap(param_1,this_00);
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(long *)(*(long *)(param_2 + 0x10) + 0x18) = lVar1;
  uVar2 = Legalize(this,param_1,this_00);
  if ((uVar2 & 1) != 0) {
    return;
  }
                    /* catch() { ... } // from try @ 0102e754 with catch @ 0102e7c4 */
  SweepContext::MapTriangleToNodes(param_1,this_00);
  return;
}

