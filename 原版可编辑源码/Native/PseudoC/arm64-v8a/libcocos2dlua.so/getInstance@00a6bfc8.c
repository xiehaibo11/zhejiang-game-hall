
/* fairygui::DragDropManager::getInstance() */

DragDropManager * fairygui::DragDropManager::getInstance(void)

{
  DragDropManager *this;
  
  if (_inst == (DragDropManager *)0x0) {
    this = operator_new(0x18);
    DragDropManager(this);
    _inst = this;
  }
  return _inst;
}

