
/* p2t::Sweep::NewFrontTriangle(p2t::SweepContext&, p2t::Point&, p2t::Node&) */

void __thiscall
p2t::Sweep::NewFrontTriangle(Sweep *this,SweepContext *param_1,Point *param_2,Node *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  Triangle *this_00;
  ulong uVar3;
  Node *local_50;
  long local_48;
  
                    /* try { // try from 0102e61c to 0112e67f has its CatchHandler @ 0102e540 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = operator_new(0x40);
                    /* catch() { ... } // from try @ 0102e5e8 with catch @ 0102e640 */
  Triangle::Triangle(this_00,param_2,*(Point **)param_3,(Point *)**(undefined8 **)(param_3 + 0x10));
                    /* catch() { ... } // from try @ 0102e5f0 with catch @ 0102e660 */
  Triangle::MarkNeighbor(this_00,*(Triangle **)(param_3 + 8));
                    /* catch() { ... } // from try @ 0102e570 with catch @ 0102e664 */
  SweepContext::AddToMap(param_1,this_00);
  local_50 = operator_new(0x28);
  *(Point **)local_50 = param_2;
  *(undefined8 *)(local_50 + 8) = 0;
  *(undefined8 *)(local_50 + 0x10) = 0;
  *(undefined8 *)(local_50 + 0x18) = 0;
                    /* catch() { ... } // from try @ 0102e6ac with catch @ 0102e680 */
  *(undefined8 *)(local_50 + 0x20) = *(undefined8 *)param_2;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 == *(undefined8 **)(this + 0x10)) {
                    /* try { // try from 0102e6a4 to 0112e6ab has its CatchHandler @ 0102e710 */
                    /* try { // try from 0102e6ac to 0112e72b has its CatchHandler @ 0102e680 */
    std::__ndk1::vector<p2t::Node*,std::__ndk1::allocator<p2t::Node*>>::
    __push_back_slow_path<p2t::Node*const&>
              ((vector<p2t::Node*,std::__ndk1::allocator<p2t::Node*>> *)this,&local_50);
  }
  else {
    *puVar1 = local_50;
    *(undefined8 **)(this + 8) = puVar1 + 1;
  }
  *(undefined8 *)(local_50 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  *(Node **)(local_50 + 0x18) = param_3;
  *(Node **)(*(long *)(param_3 + 0x10) + 0x18) = local_50;
  *(Node **)(param_3 + 0x10) = local_50;
  uVar3 = Legalize(this,param_1,this_00);
  if ((uVar3 & 1) == 0) {
    SweepContext::MapTriangleToNodes(param_1,this_00);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 0102e6a4 with catch @ 0102e710 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50);
}

