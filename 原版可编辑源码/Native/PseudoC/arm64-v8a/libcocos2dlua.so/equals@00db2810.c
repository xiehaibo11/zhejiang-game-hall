
/* cocos2d::ui::Margin::equals(cocos2d::ui::Margin const&) const */

bool __thiscall cocos2d::ui::Margin::equals(Margin *this,Margin *param_1)

{
                    /* catch() { ... } // from try @ 00db269c with catch @ 00db282c */
  if (((*(float *)this == *(float *)param_1) && (*(float *)(this + 4) == *(float *)(param_1 + 4)))
     && (*(float *)(this + 8) == *(float *)(param_1 + 8))) {
                    /* catch() { ... } // from try @ 00db273c with catch @ 00db2848 */
    return *(float *)(this + 0xc) == *(float *)(param_1 + 0xc);
  }
  return false;
}

