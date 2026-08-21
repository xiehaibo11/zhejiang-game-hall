
/* fairygui::Relations::onOwnerSizeChanged(float, float, bool) */

void __thiscall
fairygui::Relations::onOwnerSizeChanged(Relations *this,float param_1,float param_2,bool param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 != *(undefined8 **)(this + 0x18)) {
    do {
      puVar2 = puVar1 + 1;
      RelationItem::applyOnSelfSizeChanged((RelationItem *)*puVar1,param_1,param_2,param_3);
      puVar1 = puVar2;
    } while (puVar2 != *(undefined8 **)(this + 0x18));
  }
                    /* try { // try from 00a915f0 to 00b91693 has its CatchHandler @ 00a915f0
                       catch() { ... } // from try @ 00a915f0 with catch @ 00a915f0
                       catch() { ... } // from try @ 00a917dc with catch @ 00a915f0
                       catch() { ... } // from try @ 00a918b4 with catch @ 00a915f0
                       catch() { ... } // from try @ 00a91968 with catch @ 00a915f0 */
  return;
}

