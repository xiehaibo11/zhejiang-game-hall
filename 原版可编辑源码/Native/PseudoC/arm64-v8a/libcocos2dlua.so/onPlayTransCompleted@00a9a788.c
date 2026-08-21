
/* fairygui::Transition::onPlayTransCompleted(fairygui::TransitionItem*) */

void fairygui::Transition::onPlayTransCompleted(TransitionItem *param_1)

{
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  checkAllComplete((Transition *)param_1);
  return;
}

