
/* dragonBones::SlotDislayTimelineState::~SlotDislayTimelineState() */

void __thiscall
dragonBones::SlotDislayTimelineState::~SlotDislayTimelineState(SlotDislayTimelineState *this)

{
                    /* try { // try from 00d7b10c to 00e7b113 has its CatchHandler @ 00d7b934 */
  *(undefined ***)this = &PTR__SlotDislayTimelineState_016d6530;
  SlotTimelineState::_onClear((SlotTimelineState *)this);
                    /* try { // try from 00d7b138 to 00e7b13f has its CatchHandler @ 00d7b930 */
  operator_delete(this);
  return;
}

