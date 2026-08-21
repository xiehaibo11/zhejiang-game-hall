
/* fairygui::ScrollPane::onRollOver(fairygui::EventContext*) */

void fairygui::ScrollPane::onRollOver(EventContext *param_1)

{
                    /* try { // try from 00a93308 to 00b93363 has its CatchHandler @ 00a93408 */
  param_1[0xc4] = (EventContext)0x1;
  updateScrollBarVisible((ScrollPane *)param_1);
  return;
}

