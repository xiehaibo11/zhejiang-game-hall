
/* spine::PathConstraintSpacingTimeline::~PathConstraintSpacingTimeline() */

void __thiscall
spine::PathConstraintSpacingTimeline::~PathConstraintSpacingTimeline
          (PathConstraintSpacingTimeline *this)

{
  void *extraout_x1;
  
  PathConstraintPositionTimeline::~PathConstraintPositionTimeline
            ((PathConstraintPositionTimeline *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

