
/* fairygui::GComboBox::~GComboBox() */

void __thiscall fairygui::GComboBox::~GComboBox(GComboBox *this)

{
                    /* try { // try from 00a6e574 to 00b6e58b has its CatchHandler @ 00a6e95c */
  ~GComboBox(this);
                    /* try { // try from 00a6e590 to 00b6e59f has its CatchHandler @ 00a6e924 */
  operator_delete(this);
  return;
}

