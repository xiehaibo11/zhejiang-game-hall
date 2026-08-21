
/* p2t::SweepContext::CreateAdvancingFront(std::__ndk1::vector<p2t::Node*,
   std::__ndk1::allocator<p2t::Node*> > const&) */

void p2t::SweepContext::CreateAdvancingFront(vector *param_1)

{
  long lVar1;
  Triangle *this;
  long *plVar2;
  Node *pNVar3;
  Node *pNVar4;
  AdvancingFront *this_00;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
                    /* catch() { ... } // from try @ 0102cc30 with catch @ 0102cc40 */
  this = operator_new(0x40);
  Triangle::Triangle(this,(Point *)**(undefined8 **)(param_1 + 0x80),*(Point **)(param_1 + 0xa8),
                     *(Point **)(param_1 + 0xa0));
  plVar2 = operator_new(0x18);
  plVar2[1] = (long)(param_1 + 0x68);
  plVar2[2] = (long)this;
  lVar5 = *(long *)(param_1 + 0x68);
  *plVar2 = lVar5;
  *(long **)(lVar5 + 8) = plVar2;
                    /* try { // try from 0102cc84 to 0112cc87 has its CatchHandler @ 0102cca0 */
  *(long **)(param_1 + 0x68) = plVar2;
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  pNVar3 = operator_new(0x28);
  puVar6 = *(undefined8 **)(this + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0102cc84 with catch @ 0102cca0
                        */
  *(undefined8 *)(pNVar3 + 0x10) = 0;
  *(undefined8 *)(pNVar3 + 0x18) = 0;
  *(undefined8 **)pNVar3 = puVar6;
  *(Triangle **)(pNVar3 + 8) = this;
  *(undefined8 *)(pNVar3 + 0x20) = *puVar6;
  *(Node **)(param_1 + 0xb0) = pNVar3;
  puVar6 = operator_new(0x28);
  puVar7 = *(undefined8 **)(this + 8);
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = puVar7;
  puVar6[1] = this;
  puVar6[4] = *puVar7;
  *(undefined8 **)(param_1 + 0xb8) = puVar6;
  pNVar4 = operator_new(0x28);
  puVar6 = *(undefined8 **)(this + 0x18);
  *(undefined8 *)(pNVar4 + 0x10) = 0;
  *(undefined8 *)(pNVar4 + 0x18) = 0;
  *(undefined8 **)pNVar4 = puVar6;
  *(undefined8 *)(pNVar4 + 8) = 0;
                    /* try { // try from 0102ccf4 to 0112ccf7 has its CatchHandler @ 0102cd14 */
  *(undefined8 *)(pNVar4 + 0x20) = *puVar6;
  *(Node **)(param_1 + 0xc0) = pNVar4;
  this_00 = operator_new(0x18);
  AdvancingFront::AdvancingFront(this_00,pNVar3,pNVar4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0102ccf4 with catch @ 0102cd14
                        */
  lVar5 = *(long *)(param_1 + 0xb0);
  lVar1 = *(long *)(param_1 + 0xb8);
  *(AdvancingFront **)(param_1 + 0x98) = this_00;
  *(long *)(lVar5 + 0x10) = lVar1;
  lVar8 = *(long *)(param_1 + 0xc0);
  *(long *)(lVar1 + 0x10) = lVar8;
  *(long *)(lVar1 + 0x18) = lVar5;
  *(long *)(lVar8 + 0x18) = lVar1;
  return;
}

