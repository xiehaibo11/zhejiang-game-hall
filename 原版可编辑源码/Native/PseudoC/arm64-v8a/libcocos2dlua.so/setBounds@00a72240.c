
/* fairygui::GComponent::setBounds(float, float, float, float) */

void __thiscall
fairygui::GComponent::setBounds
          (GComponent *this,float param_1,float param_2,float param_3,float param_4)

{
  this[600] = (GComponent)0x0;
  if (*(ScrollPane **)(this + 0x230) != (ScrollPane *)0x0) {
                    /* try { // try from 00a72250 to 00b72337 has its CatchHandler @ 00a72250
                       catch() { ... } // from try @ 00a72250 with catch @ 00a72250
                       catch() { ... } // from try @ 00a723b8 with catch @ 00a72250 */
    ScrollPane::setContentSize
              (*(ScrollPane **)(this + 0x230),(float)(int)(param_1 + param_3),
               (float)(int)(param_2 + param_4));
    return;
  }
  return;
}

