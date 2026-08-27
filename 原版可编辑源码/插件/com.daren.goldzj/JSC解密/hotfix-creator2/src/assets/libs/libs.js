window.fgui = {};

window.fairygui = window.fgui;

window.__extends = this && this.__extends || function() {
var t = function(e, i) {
return (t = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(t, e) {
t.__proto__ = e;
} || function(t, e) {
for (var i in e) e.hasOwnProperty(i) && (t[i] = e[i]);
})(e, i);
};
return function(e, i) {
t(e, i);
function n() {
this.constructor = e;
}
e.prototype = null === i ? Object.create(i) : (n.prototype = i.prototype, new n());
};
}();

(function(t) {
var e = function() {
function e() {}
e.prototype.createObject = function(e, i) {
if (this._node) throw "Already running";
var n = t.UIPackage.getByName(e);
if (!n) throw new Error("package not found: " + e);
var o = n.getItemByName(i);
if (!o) throw new Error("resource not found: " + i);
this.internalCreateObject(o);
};
e.prototype.createObjectFromURL = function(e) {
if (this._node) throw "Already running";
var i = t.UIPackage.getItemByURL(e);
if (!i) throw new Error("resource not found: " + e);
this.internalCreateObject(i);
};
e.prototype.cancel = function() {
if (this._node) {
this._node.destroy();
this._node = null;
}
};
e.prototype.internalCreateObject = function(t) {
this._node = new cc.Node("[AsyncCreating:" + t.name + "]");
this._node.parent = cc.director.getScene();
this._node.on("#", this.completed, this);
this._node.addComponent(i).init(t);
};
e.prototype.completed = function(t) {
this.cancel();
this.callback && this.callback(t);
};
return e;
}();
t.AsyncOperation = e;
var i = function(e) {
__extends(i, e);
function i() {
var t = e.call(this) || this;
t._itemList = [];
t._objectPool = [];
return t;
}
i.prototype.init = function(t) {
this._itemList.length = 0;
this._objectPool.length = 0;
var e = {
pi: t,
type: t.objectType
};
e.childCount = this.collectComponentChildren(t);
this._itemList.push(e);
this._index = 0;
};
i.prototype.onDestroy = function() {
this._itemList.length = 0;
var t = this._objectPool.length;
if (t > 0) {
for (var e = 0; e < t; e++) this._objectPool[e].dispose();
this._objectPool.length = 0;
}
};
i.prototype.collectComponentChildren = function(e) {
var i, n, o, r, s, a, l = e.rawData;
l.seek(0, 2);
var h = l.readShort();
for (o = 0; o < h; o++) {
r = l.readShort();
s = l.position;
l.seek(s, 0);
var c = l.readByte(), u = l.readS(), p = l.readS();
l.position = s;
if (null != u) {
i = {
pi: n = null != (a = null != p ? t.UIPackage.getById(p) : e.owner) ? a.getItemById(u) : null,
type: c
};
n && n.type == t.PackageItemType.Component && (i.childCount = this.collectComponentChildren(n));
} else {
i = {
type: c
};
c != t.ObjectType.List && c != t.ObjectType.GListLayout || (i.listItemCount = this.collectListChildren(l));
}
this._itemList.push(i);
l.position = s + r;
}
return h;
};
i.prototype.collectListChildren = function(e) {
e.seek(e.position, 8);
var i, n, o, r, s, a = 0, l = e.readS(), h = e.readShort();
for (i = 0; i < h; i++) {
n = e.readShort();
n += e.position;
null == (o = e.readS()) && (o = l);
if (o && (r = t.UIPackage.getItemByURL(o))) {
s = {
pi: r,
type: r.objectType
};
r.type == t.PackageItemType.Component && (s.childCount = this.collectComponentChildren(r));
this._itemList.push(s);
a++;
}
e.position = n;
}
return a;
};
i.prototype.update = function() {
for (var e, i, n, o, r = t.ToolSet.getTime(), s = t.UIConfig.frameTimeForAsyncUIConstruction, a = this._itemList.length; this._index < a; ) {
if ((i = this._itemList[this._index]).pi) {
e = t.UIObjectFactory.newObject(i.pi);
this._objectPool.push(e);
t.UIPackage._constructing++;
if (i.pi.type == t.PackageItemType.Component) {
n = this._objectPool.length - i.childCount - 1;
e.constructFromResource2(this._objectPool, n);
this._objectPool.splice(n, i.childCount);
} else e.constructFromResource();
t.UIPackage._constructing--;
} else {
e = t.UIObjectFactory.newObject(i.type);
this._objectPool.push(e);
if (i.type == t.ObjectType.List && i.listItemCount > 0) {
n = this._objectPool.length - i.listItemCount - 1;
for (o = 0; o < i.listItemCount; o++) e.itemPool.returnObject(this._objectPool[o + n]);
this._objectPool.splice(n, i.listItemCount);
}
}
this._index++;
if (this._index % 5 == 0 && t.ToolSet.getTime() - r >= s) return;
}
var l = this._objectPool[0];
this._itemList.length = 0;
this._objectPool.length = 0;
this.node.emit("#", l);
};
return i;
}(cc.Component);
})(fgui || (fgui = {}));

(function(t) {
var e = 0, i = function(i) {
__extends(n, i);
function n() {
var t = i.call(this) || this;
t._pageIds = [];
t._pageNames = [];
t._selectedIndex = -1;
t._previousIndex = -1;
return t;
}
n.prototype.dispose = function() {};
Object.defineProperty(n.prototype, "selectedIndex", {
get: function() {
return this._selectedIndex;
},
set: function(e) {
if (this._selectedIndex != e) {
if (e > this._pageIds.length - 1) throw "index out of bounds: " + e;
this.changing = !0;
this._previousIndex = this._selectedIndex;
this._selectedIndex = e;
this.parent.applyController(this);
this.emit(t.Event.STATUS_CHANGED, this);
this.changing = !1;
}
},
enumerable: !1,
configurable: !0
});
n.prototype.onChanged = function(e, i) {
this.on(t.Event.STATUS_CHANGED, e, i);
};
n.prototype.offChanged = function(e, i) {
this.off(t.Event.STATUS_CHANGED, e, i);
};
n.prototype.setSelectedIndex = function(t) {
if (this._selectedIndex != t) {
if (t > this._pageIds.length - 1) throw "index out of bounds: " + t;
this.changing = !0;
this._previousIndex = this._selectedIndex;
this._selectedIndex = t;
this.parent.applyController(this);
this.changing = !1;
}
};
Object.defineProperty(n.prototype, "previsousIndex", {
get: function() {
return this._previousIndex;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "selectedPage", {
get: function() {
return -1 == this._selectedIndex ? null : this._pageNames[this._selectedIndex];
},
set: function(t) {
var e = this._pageNames.indexOf(t);
-1 == e && (e = 0);
this.selectedIndex = e;
},
enumerable: !1,
configurable: !0
});
n.prototype.setSelectedPage = function(t) {
var e = this._pageNames.indexOf(t);
-1 == e && (e = 0);
this.setSelectedIndex(e);
};
Object.defineProperty(n.prototype, "previousPage", {
get: function() {
return -1 == this._previousIndex ? null : this._pageNames[this._previousIndex];
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "pageCount", {
get: function() {
return this._pageIds.length;
},
enumerable: !1,
configurable: !0
});
n.prototype.getPageName = function(t) {
return this._pageNames[t];
};
n.prototype.addPage = function(t) {
void 0 === t && (t = "");
this.addPageAt(t, this._pageIds.length);
};
n.prototype.addPageAt = function(t, i) {
var n = "" + e++;
if (i == this._pageIds.length) {
this._pageIds.push(n);
this._pageNames.push(t);
} else {
this._pageIds.splice(i, 0, n);
this._pageNames.splice(i, 0, t);
}
};
n.prototype.removePage = function(t) {
var e = this._pageNames.indexOf(t);
if (-1 != e) {
this._pageIds.splice(e, 1);
this._pageNames.splice(e, 1);
this._selectedIndex >= this._pageIds.length ? this.selectedIndex = this._selectedIndex - 1 : this.parent.applyController(this);
}
};
n.prototype.removePageAt = function(t) {
this._pageIds.splice(t, 1);
this._pageNames.splice(t, 1);
this._selectedIndex >= this._pageIds.length ? this.selectedIndex = this._selectedIndex - 1 : this.parent.applyController(this);
};
n.prototype.clearPages = function() {
this._pageIds.length = 0;
this._pageNames.length = 0;
-1 != this._selectedIndex ? this.selectedIndex = -1 : this.parent.applyController(this);
};
n.prototype.hasPage = function(t) {
return -1 != this._pageNames.indexOf(t);
};
n.prototype.getPageIndexById = function(t) {
return this._pageIds.indexOf(t);
};
n.prototype.getPageIdByName = function(t) {
var e = this._pageNames.indexOf(t);
return -1 != e ? this._pageIds[e] : null;
};
n.prototype.getPageNameById = function(t) {
var e = this._pageIds.indexOf(t);
return -1 != e ? this._pageNames[e] : null;
};
n.prototype.getPageId = function(t) {
return this._pageIds[t];
};
Object.defineProperty(n.prototype, "selectedPageId", {
get: function() {
return -1 == this._selectedIndex ? null : this._pageIds[this._selectedIndex];
},
set: function(t) {
var e = this._pageIds.indexOf(t);
this.selectedIndex = e;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "oppositePageId", {
set: function(t) {
this._pageIds.indexOf(t) > 0 ? this.selectedIndex = 0 : this._pageIds.length > 1 && (this.selectedIndex = 1);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "previousPageId", {
get: function() {
return -1 == this._previousIndex ? null : this._pageIds[this._previousIndex];
},
enumerable: !1,
configurable: !0
});
n.prototype.runActions = function() {
if (this._actions) for (var t = this._actions.length, e = 0; e < t; e++) this._actions[e].run(this, this.previousPageId, this.selectedPageId);
};
n.prototype.setup = function(e) {
var i, n, o = e.position;
e.seek(o, 0);
this.name = e.readS();
e.readBool() && (this.autoRadioGroupDepth = !0);
e.seek(o, 1);
var r = e.readShort();
for (i = 0; i < r; i++) {
this._pageIds.push(e.readS());
this._pageNames.push(e.readS());
}
var s = 0;
if (e.version >= 2) switch (e.readByte()) {
case 1:
s = e.readShort();
break;

case 2:
-1 == (s = this._pageNames.indexOf(t.UIPackage.branch)) && (s = 0);
break;

case 3:
-1 == (s = this._pageNames.indexOf(t.UIPackage.getVar(e.readS()))) && (s = 0);
}
e.seek(o, 2);
if ((r = e.readShort()) > 0) {
this._actions || (this._actions = []);
for (i = 0; i < r; i++) {
n = e.readShort();
n += e.position;
var a = t.ControllerAction.createAction(e.readByte());
a.setup(e);
this._actions.push(a);
e.position = n;
}
}
this.parent && this._pageIds.length > 0 ? this._selectedIndex = s : this._selectedIndex = -1;
};
return n;
}(cc.EventTarget);
t.Controller = i;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e() {
this._agent = new t.GLoader();
this._agent.draggable = !0;
this._agent.touchable = !1;
this._agent.setSize(100, 100);
this._agent.setPivot(.5, .5, !0);
this._agent.align = t.AlignType.Center;
this._agent.verticalAlign = t.VertAlignType.Middle;
this._agent.sortingOrder = 1e6;
this._agent.on(t.Event.DRAG_END, this.onDragEnd, this);
}
Object.defineProperty(e, "inst", {
get: function() {
e._inst || (e._inst = new e());
return e._inst;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "dragAgent", {
get: function() {
return this._agent;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "dragging", {
get: function() {
return null != this._agent.parent;
},
enumerable: !1,
configurable: !0
});
e.prototype.startDrag = function(e, i, n, o) {
if (!this._agent.parent) {
this._sourceData = n;
this._agent.url = i;
t.GRoot.inst.addChild(this._agent);
var r = t.GRoot.inst.getTouchPosition(o);
r = t.GRoot.inst.globalToLocal(r.x, r.y);
this._agent.setPosition(r.x, r.y);
this._agent.startDrag(o);
}
};
e.prototype.cancel = function() {
if (this._agent.parent) {
this._agent.stopDrag();
t.GRoot.inst.removeChild(this._agent);
this._sourceData = null;
}
};
e.prototype.onDragEnd = function() {
if (this._agent.parent) {
t.GRoot.inst.removeChild(this._agent);
var e = this._sourceData;
this._sourceData = null;
for (var i = t.GRoot.inst.touchTarget; i; ) {
if (i.node.hasEventListener(t.Event.DROP)) {
i.requestFocus();
i.node.emit(t.Event.DROP, i, e);
return;
}
i = i.parent;
}
}
};
return e;
}();
t.DragDropManager = e;
})(fgui || (fgui = {}));

(function(t) {
(function(t) {
t[t.Common = 0] = "Common";
t[t.Check = 1] = "Check";
t[t.Radio = 2] = "Radio";
})(t.ButtonMode || (t.ButtonMode = {}));
(function(t) {
t[t.None = 0] = "None";
t[t.Both = 1] = "Both";
t[t.Height = 2] = "Height";
t[t.Shrink = 3] = "Shrink";
})(t.AutoSizeType || (t.AutoSizeType = {}));
(function(t) {
t[t.Left = 0] = "Left";
t[t.Center = 1] = "Center";
t[t.Right = 2] = "Right";
})(t.AlignType || (t.AlignType = {}));
(function(t) {
t[t.Top = 0] = "Top";
t[t.Middle = 1] = "Middle";
t[t.Bottom = 2] = "Bottom";
})(t.VertAlignType || (t.VertAlignType = {}));
(function(t) {
t[t.None = 0] = "None";
t[t.Scale = 1] = "Scale";
t[t.ScaleMatchHeight = 2] = "ScaleMatchHeight";
t[t.ScaleMatchWidth = 3] = "ScaleMatchWidth";
t[t.ScaleFree = 4] = "ScaleFree";
t[t.ScaleNoBorder = 5] = "ScaleNoBorder";
})(t.LoaderFillType || (t.LoaderFillType = {}));
(function(t) {
t[t.SingleColumn = 0] = "SingleColumn";
t[t.SingleRow = 1] = "SingleRow";
t[t.FlowHorizontal = 2] = "FlowHorizontal";
t[t.FlowVertical = 3] = "FlowVertical";
t[t.Pagination = 4] = "Pagination";
})(t.ListLayoutType || (t.ListLayoutType = {}));
(function(t) {
t[t.Single = 0] = "Single";
t[t.Multiple = 1] = "Multiple";
t[t.Multiple_SingleClick = 2] = "Multiple_SingleClick";
t[t.None = 3] = "None";
})(t.ListSelectionMode || (t.ListSelectionMode = {}));
(function(t) {
t[t.Visible = 0] = "Visible";
t[t.Hidden = 1] = "Hidden";
t[t.Scroll = 2] = "Scroll";
})(t.OverflowType || (t.OverflowType = {}));
(function(t) {
t[t.Image = 0] = "Image";
t[t.MovieClip = 1] = "MovieClip";
t[t.Sound = 2] = "Sound";
t[t.Component = 3] = "Component";
t[t.Atlas = 4] = "Atlas";
t[t.Font = 5] = "Font";
t[t.Swf = 6] = "Swf";
t[t.Misc = 7] = "Misc";
t[t.Unknown = 8] = "Unknown";
t[t.Spine = 9] = "Spine";
t[t.DragonBones = 10] = "DragonBones";
})(t.PackageItemType || (t.PackageItemType = {}));
(function(t) {
t[t.Image = 0] = "Image";
t[t.MovieClip = 1] = "MovieClip";
t[t.Swf = 2] = "Swf";
t[t.Graph = 3] = "Graph";
t[t.Loader = 4] = "Loader";
t[t.Group = 5] = "Group";
t[t.Text = 6] = "Text";
t[t.RichText = 7] = "RichText";
t[t.InputText = 8] = "InputText";
t[t.Component = 9] = "Component";
t[t.List = 10] = "List";
t[t.Label = 11] = "Label";
t[t.Button = 12] = "Button";
t[t.ComboBox = 13] = "ComboBox";
t[t.ProgressBar = 14] = "ProgressBar";
t[t.Slider = 15] = "Slider";
t[t.ScrollBar = 16] = "ScrollBar";
t[t.Tree = 17] = "Tree";
t[t.Loader3D = 18] = "Loader3D";
t[t.GListLayout = 19] = "GListLayout";
})(t.ObjectType || (t.ObjectType = {}));
(function(t) {
t[t.Percent = 0] = "Percent";
t[t.ValueAndMax = 1] = "ValueAndMax";
t[t.Value = 2] = "Value";
t[t.Max = 3] = "Max";
})(t.ProgressTitleType || (t.ProgressTitleType = {}));
(function(t) {
t[t.Default = 0] = "Default";
t[t.Visible = 1] = "Visible";
t[t.Auto = 2] = "Auto";
t[t.Hidden = 3] = "Hidden";
})(t.ScrollBarDisplayType || (t.ScrollBarDisplayType = {}));
(function(t) {
t[t.Horizontal = 0] = "Horizontal";
t[t.Vertical = 1] = "Vertical";
t[t.Both = 2] = "Both";
})(t.ScrollType || (t.ScrollType = {}));
(function(t) {
t[t.None = 0] = "None";
t[t.Horizontal = 1] = "Horizontal";
t[t.Vertical = 2] = "Vertical";
t[t.Both = 3] = "Both";
})(t.FlipType || (t.FlipType = {}));
(function(t) {
t[t.Ascent = 0] = "Ascent";
t[t.Descent = 1] = "Descent";
t[t.Arch = 2] = "Arch";
})(t.ChildrenRenderOrder || (t.ChildrenRenderOrder = {}));
(function(t) {
t[t.None = 0] = "None";
t[t.Horizontal = 1] = "Horizontal";
t[t.Vertical = 2] = "Vertical";
})(t.GroupLayoutType || (t.GroupLayoutType = {}));
(function(t) {
t[t.Auto = 0] = "Auto";
t[t.Up = 1] = "Up";
t[t.Down = 2] = "Down";
})(t.PopupDirection || (t.PopupDirection = {}));
(function(t) {
t[t.Left_Left = 0] = "Left_Left";
t[t.Left_Center = 1] = "Left_Center";
t[t.Left_Right = 2] = "Left_Right";
t[t.Center_Center = 3] = "Center_Center";
t[t.Right_Left = 4] = "Right_Left";
t[t.Right_Center = 5] = "Right_Center";
t[t.Right_Right = 6] = "Right_Right";
t[t.Top_Top = 7] = "Top_Top";
t[t.Top_Middle = 8] = "Top_Middle";
t[t.Top_Bottom = 9] = "Top_Bottom";
t[t.Middle_Middle = 10] = "Middle_Middle";
t[t.Bottom_Top = 11] = "Bottom_Top";
t[t.Bottom_Middle = 12] = "Bottom_Middle";
t[t.Bottom_Bottom = 13] = "Bottom_Bottom";
t[t.Width = 14] = "Width";
t[t.Height = 15] = "Height";
t[t.LeftExt_Left = 16] = "LeftExt_Left";
t[t.LeftExt_Right = 17] = "LeftExt_Right";
t[t.RightExt_Left = 18] = "RightExt_Left";
t[t.RightExt_Right = 19] = "RightExt_Right";
t[t.TopExt_Top = 20] = "TopExt_Top";
t[t.TopExt_Bottom = 21] = "TopExt_Bottom";
t[t.BottomExt_Top = 22] = "BottomExt_Top";
t[t.BottomExt_Bottom = 23] = "BottomExt_Bottom";
t[t.Size = 24] = "Size";
})(t.RelationType || (t.RelationType = {}));
(function(t) {
t[t.None = 0] = "None";
t[t.Horizontal = 1] = "Horizontal";
t[t.Vertical = 2] = "Vertical";
t[t.Radial90 = 3] = "Radial90";
t[t.Radial180 = 4] = "Radial180";
t[t.Radial360 = 5] = "Radial360";
})(t.FillMethod || (t.FillMethod = {}));
(function(t) {
t[t.Top = 0] = "Top";
t[t.Bottom = 1] = "Bottom";
t[t.Left = 2] = "Left";
t[t.Right = 3] = "Right";
})(t.FillOrigin || (t.FillOrigin = {}));
(function(t) {
t[t.Text = 0] = "Text";
t[t.Icon = 1] = "Icon";
t[t.Color = 2] = "Color";
t[t.OutlineColor = 3] = "OutlineColor";
t[t.Playing = 4] = "Playing";
t[t.Frame = 5] = "Frame";
t[t.DeltaTime = 6] = "DeltaTime";
t[t.TimeScale = 7] = "TimeScale";
t[t.FontSize = 8] = "FontSize";
t[t.Selected = 9] = "Selected";
})(t.ObjectPropID || (t.ObjectPropID = {}));
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e() {
this._x = 0;
this._y = 0;
this._alpha = 1;
this._visible = !0;
this._touchable = !0;
this._skewX = 0;
this._skewY = 0;
this._sortingOrder = 0;
this._internalVisible = !0;
this.sourceWidth = 0;
this.sourceHeight = 0;
this.initWidth = 0;
this.initHeight = 0;
this.minWidth = 0;
this.minHeight = 0;
this.maxWidth = 0;
this.maxHeight = 0;
this._width = 0;
this._height = 0;
this._rawWidth = 0;
this._rawHeight = 0;
this._sizePercentInGroup = 0;
this._node = new cc.Node();
if (-1 == e._defaultGroupIndex) {
e._defaultGroupIndex = 0;
for (var i = cc.game.groupList, n = i.length, o = 0; o < n; o++) if (i[o].toLowerCase() == t.UIConfig.defaultUIGroup.toLowerCase()) {
e._defaultGroupIndex = o;
break;
}
}
this._node.$gobj = this;
this._node.groupIndex = e._defaultGroupIndex;
this._node.setAnchorPoint(0, 1);
this._node.on(cc.Node.EventType.ANCHOR_CHANGED, this.handleAnchorChanged, this);
this._id = this._node.uuid;
this._name = "";
this._relations = new t.Relations(this);
this._gears = new Array(10);
this._blendMode = t.BlendMode.Normal;
this._partner = this._node.addComponent(l);
}
Object.defineProperty(e.prototype, "id", {
get: function() {
return this._id;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "name", {
get: function() {
return this._name;
},
set: function(t) {
this._name = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "x", {
get: function() {
return this._x;
},
set: function(t) {
this.setPosition(t, this._y);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "y", {
get: function() {
return this._y;
},
set: function(t) {
this.setPosition(this._x, t);
},
enumerable: !1,
configurable: !0
});
e.prototype.getPosition = function() {
return cc.v2(this._x, this._y);
};
e.prototype.setPosition = function(n, r) {
if (this._x != n || this._y != r) {
var s = n - this._x, a = r - this._y;
this._x = n;
this._y = r;
this.handlePositionChanged();
this instanceof t.GGroup && this.moveChildren(s, a);
this.updateGear(1);
if (this._parent && !(this._parent instanceof t.GList || this._parent instanceof t.GListLayout)) {
this._parent.setBoundsChangedFlag();
this._group && this._group.setBoundsChangedFlag(!0);
this._node.emit(t.Event.XY_CHANGED, this);
}
e.draggingObject != this || i || this.localToGlobalRect(0, 0, this._width, this._height, o);
}
};
Object.defineProperty(e.prototype, "xMin", {
get: function() {
return this._pivotAsAnchor ? this._x - this._width * this.node.anchorX : this._x;
},
set: function(t) {
this._pivotAsAnchor ? this.setPosition(t + this._width * this.node.anchorX, this._y) : this.setPosition(t, this._y);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "yMin", {
get: function() {
return this._pivotAsAnchor ? this._y - this._height * (1 - this.node.anchorY) : this._y;
},
set: function(t) {
this._pivotAsAnchor ? this.setPosition(this._x, t + this._height * (1 - this.node.anchorY)) : this.setPosition(this._x, t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "pixelSnapping", {
get: function() {
return this._pixelSnapping;
},
set: function(t) {
if (this._pixelSnapping != t) {
this._pixelSnapping = t;
this.handlePositionChanged();
}
},
enumerable: !1,
configurable: !0
});
e.prototype.center = function(e) {
var i;
i = this._parent ? this.parent : this.root;
this.setPosition((i.width - this._width) / 2, (i.height - this._height) / 2);
if (e) {
this.addRelation(i, t.RelationType.Center_Center);
this.addRelation(i, t.RelationType.Middle_Middle);
}
};
Object.defineProperty(e.prototype, "width", {
get: function() {
this.ensureSizeCorrect();
this._relations.sizeDirty && this._relations.ensureRelationsSizeCorrect();
return this._width;
},
set: function(t) {
this.setSize(t, this._rawHeight);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "height", {
get: function() {
this.ensureSizeCorrect();
this._relations.sizeDirty && this._relations.ensureRelationsSizeCorrect();
return this._height;
},
set: function(t) {
this.setSize(this._rawWidth, t);
},
enumerable: !1,
configurable: !0
});
e.prototype.setSize = function(e, i, n) {
if (cc.isValid(this._node, !0) && (this._rawWidth != e || this._rawHeight != i)) {
this._rawWidth = e;
this._rawHeight = i;
e < this.minWidth && (e = this.minWidth);
i < this.minHeight && (i = this.minHeight);
this.maxWidth > 0 && e > this.maxWidth && (e = this.maxWidth);
this.maxHeight > 0 && i > this.maxHeight && (i = this.maxHeight);
var o = e - this._width, r = i - this._height;
this._width = e;
this._height = i;
this.handleSizeChanged();
0 == this.node.anchorX && 1 == this.node.anchorY || this._pivotAsAnchor || n ? this.handlePositionChanged() : this.setPosition(this.x - this.node.anchorX * o, this.y - (1 - this.node.anchorY) * r);
this instanceof t.GGroup && this.resizeChildren(o, r);
this.updateGear(2);
if (this._parent) {
this._relations.onOwnerSizeChanged(o, r, this._pivotAsAnchor || !n);
this._parent.setBoundsChangedFlag();
this._group && this._group.setBoundsChangedFlag();
}
this._node.emit(t.Event.SIZE_CHANGED, this);
}
};
e.prototype.makeFullScreen = function() {
this.setSize(t.GRoot.inst.width, t.GRoot.inst.height);
};
e.prototype.ensureSizeCorrect = function() {};
Object.defineProperty(e.prototype, "actualWidth", {
get: function() {
return this.width * Math.abs(this._node.scaleX);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "actualHeight", {
get: function() {
return this.height * Math.abs(this._node.scaleY);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "scaleX", {
get: function() {
return this._node.scaleX;
},
set: function(t) {
this.setScale(t, this._node.scaleY);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "scaleY", {
get: function() {
return this._node.scaleY;
},
set: function(t) {
this.setScale(this._node.scaleX, t);
},
enumerable: !1,
configurable: !0
});
e.prototype.setScale = function(t, e) {
if (this._node.scaleX != t || this._node.scaleY != e) {
this._node.setScale(t, e);
this.updateGear(2);
}
};
Object.defineProperty(e.prototype, "skewX", {
get: function() {
return this._skewX;
},
set: function(t) {
this.setSkew(t, this._skewY);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "skewY", {
get: function() {
return this._skewY;
},
set: function(t) {
this.setSkew(this._skewX, t);
},
enumerable: !1,
configurable: !0
});
e.prototype.setSkew = function(t, e) {
if (this._skewX != t || this._skewY != e) {
this._skewX = t;
this._skewY = e;
this._node.skewX = t;
this._node.skewY = e;
}
};
Object.defineProperty(e.prototype, "pivotX", {
get: function() {
return this.node.anchorX;
},
set: function(t) {
this.node.anchorX = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "pivotY", {
get: function() {
return 1 - this.node.anchorY;
},
set: function(t) {
this.node.anchorY = 1 - t;
},
enumerable: !1,
configurable: !0
});
e.prototype.setPivot = function(t, e, i) {
if (this.node.anchorX != t || this.node.anchorY != 1 - e) {
this._pivotAsAnchor = i;
this.node.setAnchorPoint(t, 1 - e);
} else if (this._pivotAsAnchor != i) {
this._pivotAsAnchor = i;
this.handlePositionChanged();
}
};
Object.defineProperty(e.prototype, "pivotAsAnchor", {
get: function() {
return this._pivotAsAnchor;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "touchable", {
get: function() {
return this._touchable;
},
set: function(t) {
if (this._touchable != t) {
this._touchable = t;
this.updateGear(3);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "grayed", {
get: function() {
return this._grayed;
},
set: function(t) {
if (this._grayed != t) {
this._grayed = t;
this.handleGrayedChanged();
this.updateGear(3);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "enabled", {
get: function() {
return !this._grayed && this._touchable;
},
set: function(t) {
this.grayed = !t;
this.touchable = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "rotation", {
get: function() {
return -this._node.angle;
},
set: function(t) {
t = -t;
if (this._node.angle != t) {
this._node.angle = t;
this.updateGear(3);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "alpha", {
get: function() {
return this._alpha;
},
set: function(e) {
if (this._alpha != e) {
this._alpha = e;
this._node.opacity = 255 * this._alpha;
this instanceof t.GGroup && this.handleAlphaChanged();
this.updateGear(3);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "active", {
get: function() {
return this._visible;
},
set: function(t) {
this.visible = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "visible", {
get: function() {
return this._visible;
},
set: function(t) {
if (this._visible != t) {
this._visible = t;
this.handleVisibleChanged();
this._group && this._group.excludeInvisibles && this._group.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "_finalVisible", {
get: function() {
return this._visible && this._internalVisible && (!this._group || this._group._finalVisible);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "internalVisible3", {
get: function() {
return this._visible && this._internalVisible;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "sortingOrder", {
get: function() {
return this._sortingOrder;
},
set: function(t) {
t < 0 && (t = 0);
if (this._sortingOrder != t) {
var e = this._sortingOrder;
this._sortingOrder = t;
this._parent && this._parent.childSortingOrderChanged(this, e, this._sortingOrder);
}
},
enumerable: !1,
configurable: !0
});
e.prototype.requestFocus = function() {};
Object.defineProperty(e.prototype, "tooltips", {
get: function() {
return this._tooltips;
},
set: function(e) {
if (this._tooltips) {
this._node.off(t.Event.ROLL_OVER, this.onRollOver, this);
this._node.off(t.Event.ROLL_OUT, this.onRollOut, this);
}
this._tooltips = e;
if (this._tooltips) {
this._node.on(t.Event.ROLL_OVER, this.onRollOver, this);
this._node.on(t.Event.ROLL_OUT, this.onRollOut, this);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "blendMode", {
get: function() {
return this._blendMode;
},
set: function(e) {
if (this._blendMode != e) {
this._blendMode = e;
t.BlendModeUtils.apply(this._node, e);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "onStage", {
get: function() {
return this._node && this._node.activeInHierarchy;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "resourceURL", {
get: function() {
return this.packageItem ? "ui://" + this.packageItem.owner.id + this.packageItem.id : null;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "group", {
get: function() {
return this._group;
},
set: function(t) {
if (this._group != t) {
this._group && this._group.setBoundsChangedFlag();
this._group = t;
this._group && this._group.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
e.prototype.getGear = function(e) {
var i = this._gears[e];
i || (this._gears[e] = i = t.GearBase.create(this, e));
return i;
};
e.prototype.updateGear = function(t) {
if (!this._underConstruct && !this._gearLocked) {
var e = this._gears[t];
e && e.controller && e.updateState();
}
};
e.prototype.checkGearController = function(t, e) {
return this._gears[t] && this._gears[t].controller == e;
};
e.prototype.updateGearFromRelations = function(t, e, i) {
this._gears[t] && this._gears[t].updateFromRelations(e, i);
};
e.prototype.addDisplayLock = function() {
var t = this._gears[0];
if (t && t.controller) {
var e = t.addLock();
this.checkGearDisplay();
return e;
}
return 0;
};
e.prototype.releaseDisplayLock = function(t) {
var e = this._gears[0];
if (e && e.controller) {
e.releaseLock(t);
this.checkGearDisplay();
}
};
e.prototype.checkGearDisplay = function() {
if (!this._handlingController) {
var t = null == this._gears[0] || this._gears[0].connected;
this._gears[8] && (t = this._gears[8].evaluate(t));
if (t != this._internalVisible) {
this._internalVisible = t;
this.handleVisibleChanged();
this._group && this._group.excludeInvisibles && this._group.setBoundsChangedFlag();
}
}
};
Object.defineProperty(e.prototype, "gearXY", {
get: function() {
return this.getGear(1);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "gearSize", {
get: function() {
return this.getGear(2);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "gearLook", {
get: function() {
return this.getGear(3);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "relations", {
get: function() {
return this._relations;
},
enumerable: !1,
configurable: !0
});
e.prototype.addRelation = function(t, e, i) {
this._relations.add(t, e, i);
};
e.prototype.removeRelation = function(t, e) {
this._relations.remove(t, e);
};
Object.defineProperty(e.prototype, "node", {
get: function() {
return this._node;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "parent", {
get: function() {
return this._parent;
},
enumerable: !1,
configurable: !0
});
e.prototype.removeFromParent = function() {
this._parent && this._parent.removeChild(this);
};
e.prototype.findParent = function() {
if (this._parent) return this._parent;
for (var t = this._node.parent; t; ) {
var e = t.$gobj;
if (e) return e;
t = t.parent;
}
return null;
};
Object.defineProperty(e.prototype, "root", {
get: function() {
if (this instanceof t.GRoot) return this;
for (var e = this._parent; e; ) {
if (e instanceof t.GRoot) return e;
e = e.parent;
}
return t.GRoot.inst;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asCom", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asButton", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asLabel", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asProgress", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asTextField", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asRichTextField", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asTextInput", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asLoader", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asList", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asTree", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asGraph", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asGroup", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asSlider", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asComboBox", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asImage", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "asMovieClip", {
get: function() {
return this;
},
enumerable: !1,
configurable: !0
});
e.cast = function(t) {
return t.$gobj;
};
Object.defineProperty(e.prototype, "text", {
get: function() {
return null;
},
set: function() {},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "icon", {
get: function() {
return null;
},
set: function() {},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "treeNode", {
get: function() {
return this._treeNode;
},
enumerable: !1,
configurable: !0
});
e.prototype.dispose = function() {
var t = this._node;
if (cc.isValid(this._node, !0)) {
this.removeFromParent();
this._relations.dispose();
t.destroy();
for (var e = 0; e < 10; e++) {
var i = this._gears[e];
i && i.dispose();
}
}
};
e.prototype.onLoad = function() {};
e.prototype.onEnable = function() {};
e.prototype.onDisable = function() {};
e.prototype.onUpdate = function() {};
e.prototype.onDestroy = function() {
this._relations.dispose();
for (var t = 0; t < 10; t++) {
const e = this._gears[t];
e && e.dispose();
}
if (this._transitions) {
const e = this._transitions.length;
for (t = 0; t < e; ++t) this._transitions[t].dispose();
}
if (this._controllers) {
const e = this._controllers.length;
for (t = 0; t < e; ++t) this._controllers[t].dispose();
}
this._scrollPane && this._scrollPane.destroy();
};
e.prototype.onClick = function(e, i) {
this._node.on(t.Event.CLICK, e, i);
};
e.prototype.onceClick = function(e, i) {
this._node.once(t.Event.CLICK, e, i);
};
e.prototype.offClick = function(e, i) {
this._node.off(t.Event.CLICK, e, i);
};
e.prototype.clearClick = function() {
this._node.off(t.Event.CLICK);
};
e.prototype.hasClickListener = function() {
return this._node.hasEventListener(t.Event.CLICK);
};
e.prototype.on = function(e, i, n) {
e != t.Event.DISPLAY && e != t.Event.UNDISPLAY || (this._partner._emitDisplayEvents = !0);
this._node.on(e, i, n);
};
e.prototype.once = function(e, i, n) {
e != t.Event.DISPLAY && e != t.Event.UNDISPLAY || (this._partner._emitDisplayEvents = !0);
this._node.once(e, i, n);
};
e.prototype.off = function(t, e, i) {
this._node.off(t, e, i);
};
Object.defineProperty(e.prototype, "draggable", {
get: function() {
return this._draggable;
},
set: function(t) {
if (this._draggable != t) {
this._draggable = t;
this.initDrag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "dragBounds", {
get: function() {
return this._dragBounds;
},
set: function(t) {
this._dragBounds = t;
},
enumerable: !1,
configurable: !0
});
e.prototype.startDrag = function(t) {
this._node.activeInHierarchy && this.dragBegin(t);
};
e.prototype.stopDrag = function() {
this.dragEnd();
};
Object.defineProperty(e.prototype, "dragging", {
get: function() {
return e.draggingObject == this;
},
enumerable: !1,
configurable: !0
});
e.prototype.localToGlobal = function(e, i, n) {
e = e || 0;
i = i || 0;
(n = n || new cc.Vec2()).x = e;
n.y = i;
n.y = -n.y;
if (!this._pivotAsAnchor) {
n.x -= this.node.anchorX * this._width;
n.y += (1 - this.node.anchorY) * this._height;
}
this._node.convertToWorldSpaceAR(n, n);
n.y = t.GRoot.inst.height - n.y;
return n;
};
e.prototype.globalToLocal = function(e, i, n) {
e = e || 0;
i = i || 0;
(n = n || new cc.Vec2()).x = e;
n.y = t.GRoot.inst.height - i;
this._node.convertToNodeSpaceAR(n, n);
if (!this._pivotAsAnchor) {
n.x += this._node.anchorX * this._width;
n.y -= (1 - this._node.anchorY) * this._height;
}
n.y = -n.y;
return n;
};
e.prototype.localToGlobalRect = function(t, e, i, n, o) {
t = t || 0;
e = e || 0;
i = i || 0;
n = n || 0;
o = o || new cc.Rect();
var r = this.localToGlobal(t, e);
o.x = r.x;
o.y = r.y;
r = this.localToGlobal(t + i, e + n, r);
o.xMax = r.x;
o.yMax = r.y;
return o;
};
e.prototype.globalToLocalRect = function(t, e, i, n, o) {
t = t || 0;
e = e || 0;
i = i || 0;
n = n || 0;
o = o || new cc.Rect();
var r = this.globalToLocal(t, e);
o.x = r.x;
o.y = r.y;
r = this.globalToLocal(t + i, e + n, r);
o.xMax = r.x;
o.yMax = r.y;
return o;
};
e.prototype.handleControllerChanged = function(t) {
this._handlingController = !0;
for (var e = 0; e < 10; e++) {
var i = this._gears[e];
i && i.controller == t && i.apply();
}
this._handlingController = !1;
this.checkGearDisplay();
};
e.prototype.handleAnchorChanged = function() {
this.handlePositionChanged();
};
e.prototype.handlePositionChanged = function() {
var t = this._x, e = -this._y;
if (!this._pivotAsAnchor) {
t += this.node.anchorX * this._width;
e -= (1 - this.node.anchorY) * this._height;
}
if (this._pixelSnapping) {
t = Math.round(t);
e = Math.round(e);
}
this._node.setPosition(t, e);
};
e.prototype.handleSizeChanged = function() {
this && cc.isValid(this._node) && this._node.setContentSize(this._width, this._height);
};
e.prototype.handleGrayedChanged = function() {};
e.prototype.handleVisibleChanged = function() {
this._node.active = this._finalVisible;
this instanceof t.GGroup && this.handleVisibleChanged();
this._parent && this._parent.setBoundsChangedFlag();
};
e.prototype.hitTest = function(e, i, n) {
null == i && (i = !0);
if (i && (this._touchDisabled || !this._touchable || !this._node.activeInHierarchy)) return null;
this._hitTestPt || (this._hitTestPt = new cc.Vec2());
this.globalToLocal(e.x, e.y, this._hitTestPt);
if (this._pivotAsAnchor) {
this._hitTestPt.x += this.node.anchorX * this._width;
this._hitTestPt.y += (1 - this.node.anchorY) * this._height;
}
return this instanceof t.GSlider || t.GRoot.inst.getIsButton(this) || this instanceof t.GComboBox || this instanceof t.GList ? this._hitTest(this._hitTestPt, e) : this._hitTest(this._hitTestPt, e, n);
};
e.prototype._hitTest = function(t) {
return t.x >= 0 && t.y >= 0 && t.x < this._width && t.y < this._height ? this : null;
};
e.prototype.getProp = function(e) {
switch (e) {
case t.ObjectPropID.Text:
return this.text;

case t.ObjectPropID.Icon:
return this.icon;

case t.ObjectPropID.Color:
case t.ObjectPropID.OutlineColor:
return null;

case t.ObjectPropID.Playing:
return !1;

case t.ObjectPropID.Frame:
case t.ObjectPropID.DeltaTime:
return 0;

case t.ObjectPropID.TimeScale:
return 1;

case t.ObjectPropID.FontSize:
return 0;

case t.ObjectPropID.Selected:
return !1;

default:
return;
}
};
e.prototype.setProp = function(e, i) {
switch (e) {
case t.ObjectPropID.Text:
this.text = i;
break;

case t.ObjectPropID.Icon:
this.icon = i;
}
};
e.prototype.constructFromResource = function() {};
e.prototype.setup_beforeAdd = function(t, e) {
t.seek(e, 0);
t.skip(5);
var i, n;
this._id = t.readS();
this._name = t.readS();
i = t.readInt();
n = t.readInt();
this.setPosition(i, n);
if (t.readBool()) {
this.initWidth = t.readInt();
this.initHeight = t.readInt();
this.setSize(this.initWidth, this.initHeight, !0);
}
if (t.readBool()) {
this.minWidth = t.readInt();
this.maxWidth = t.readInt();
this.minHeight = t.readInt();
this.maxHeight = t.readInt();
}
if (t.readBool()) {
i = t.readFloat();
n = t.readFloat();
this.setScale(i, n);
}
if (t.readBool()) {
i = t.readFloat();
n = t.readFloat();
this.setSkew(i, n);
}
if (t.readBool()) {
i = t.readFloat();
n = t.readFloat();
this.setPivot(i, n, t.readBool());
}
1 != (i = t.readFloat()) && (this.alpha = i);
0 != (i = t.readFloat()) && (this.rotation = i);
t.readBool() || (this.visible = !1);
t.readBool() || (this.touchable = !1);
t.readBool() && (this.grayed = !0);
this.blendMode = t.readByte();
t.readByte();
var o = t.readS();
null != o && (this.data = o);
};
e.prototype.setup_afterAdd = function(t, e) {
t.seek(e, 1);
var i = t.readS();
null != i && (this.tooltips = i);
var n = t.readShort();
n >= 0 && (this.group = this.parent.getChildAt(n));
t.seek(e, 2);
for (var o = t.readShort(), r = 0; r < o; r++) {
var s = t.readShort();
s += t.position;
this.getGear(t.readByte()).setup(t);
t.position = s;
}
};
e.prototype.onRollOver = function() {
this.root.showTooltips(this.tooltips);
};
e.prototype.onRollOut = function() {
this.root.hideTooltips();
};
e.prototype.initDrag = function() {
if (this._draggable) {
this.on(t.Event.TOUCH_BEGIN, this.onTouchBegin_0, this);
this.on(t.Event.TOUCH_MOVE, this.onTouchMove_0, this);
this.on(t.Event.TOUCH_END, this.onTouchEnd_0, this);
} else {
this.off(t.Event.TOUCH_BEGIN, this.onTouchBegin_0, this);
this.off(t.Event.TOUCH_MOVE, this.onTouchMove_0, this);
this.off(t.Event.TOUCH_END, this.onTouchEnd_0, this);
}
};
e.prototype.dragBegin = function(i) {
if (e.draggingObject) {
var r = e.draggingObject;
r.stopDrag();
e.draggingObject = null;
r._node.emit(t.Event.DRAG_END);
}
null == i && (i = t.GRoot.inst.inputProcessor.getAllTouches()[0]);
n.set(t.GRoot.inst.getTouchPosition(i));
this.localToGlobalRect(0, 0, this._width, this._height, o);
e.draggingObject = this;
this._dragTesting = !0;
t.GRoot.inst.inputProcessor.addTouchMonitor(i, this);
this.on(t.Event.TOUCH_MOVE, this.onTouchMove_0, this);
this.on(t.Event.TOUCH_END, this.onTouchEnd_0, this);
};
e.prototype.dragEnd = function() {
if (e.draggingObject == this) {
this._dragTesting = !1;
e.draggingObject = null;
}
a = !1;
};
e.prototype.onTouchBegin_0 = function(t) {
null == this._dragStartPos && (this._dragStartPos = new cc.Vec2());
this._dragStartPos.set(t.pos);
this._dragTesting = !0;
t.captureTouch();
};
e.prototype.onTouchMove_0 = function(l) {
if (e.draggingObject != this && this._draggable && this._dragTesting) {
var h = t.UIConfig.touchDragSensitivity;
if (this._dragStartPos && Math.abs(this._dragStartPos.x - l.pos.x) < h && Math.abs(this._dragStartPos.y - l.pos.y) < h) return;
this._dragTesting = !1;
a = !0;
this._node.emit(t.Event.DRAG_START, l);
a && this.dragBegin(l.touchId);
}
if (e.draggingObject == this) {
var c = l.pos.x - n.x + o.x, u = l.pos.y - n.y + o.y;
if (this._dragBounds) {
var p = t.GRoot.inst.localToGlobalRect(this._dragBounds.x, this._dragBounds.y, this._dragBounds.width, this._dragBounds.height, s);
c < p.x ? c = p.x : c + o.width > p.xMax && (c = p.xMax - o.width) < p.x && (c = p.x);
u < p.y ? u = p.y : u + o.height > p.yMax && (u = p.yMax - o.height) < p.y && (u = p.y);
}
i = !0;
var d = this.parent.globalToLocal(c, u, r);
this.setPosition(Math.round(d.x), Math.round(d.y));
i = !1;
this._node.emit(t.Event.DRAG_MOVE, l);
}
};
e.prototype.onTouchEnd_0 = function(i) {
if (e.draggingObject == this) {
e.draggingObject = null;
this._node.emit(t.Event.DRAG_END, i);
}
};
e._defaultGroupIndex = -1;
return e;
}();
t.GObject = e;
var i, n = new cc.Vec2(), o = new cc.Rect(), r = new cc.Vec2(), s = new cc.Rect(), a = !1, l = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._emitDisplayEvents = !1;
return t;
}
i.prototype.callLater = function(t, e) {
cc.director.getScheduler().isScheduled(t, this) || this.scheduleOnce(t, e);
};
i.prototype.onClickLink = function(e, i) {
this.node.emit(t.Event.LINK, i, e);
};
i.prototype.onLoad = function() {
this.node.$gobj.onLoad();
};
i.prototype.onEnable = function() {
this.node.$gobj.onEnable();
this._emitDisplayEvents && this.node.emit(t.Event.DISPLAY);
};
i.prototype.onDisable = function() {
this.node.$gobj.onDisable();
this._emitDisplayEvents && this.node.emit(t.Event.UNDISPLAY);
};
i.prototype.update = function(t) {
this.node.$gobj.onUpdate(t);
};
i.prototype.onDestroy = function() {
this.node.$gobj.onDestroy();
};
return i;
}(cc.Component);
t.GObjectPartner = l;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var i = e.call(this) || this;
i._sortingChildCount = 0;
i._childrenRenderOrder = t.ChildrenRenderOrder.Ascent;
i._apexIndex = 0;
i._node.name = "GComponent";
i._children = [];
i._controllers = [];
i._transitions = [];
i._margin = new t.Margin();
i._alignOffset = new cc.Vec2();
i._container = new cc.Node("Container");
i._container.setAnchorPoint(0, 1);
i._node.addChild(i._container);
return i;
}
n.prototype.dispose = function() {
var t, i;
i = this._transitions.length;
for (t = 0; t < i; ++t) this._transitions[t].dispose();
i = this._controllers.length;
for (t = 0; t < i; ++t) this._controllers[t].dispose();
this._scrollPane && this._scrollPane.destroy();
for (t = (i = this._children.length) - 1; t >= 0; --t) {
var n = this._children[t];
n._parent = null;
n.dispose();
}
this._boundsChanged = !1;
e.prototype.dispose.call(this);
};
Object.defineProperty(n.prototype, "displayListContainer", {
get: function() {
return this._container;
},
enumerable: !1,
configurable: !0
});
n.prototype.addChild = function(t) {
this.addChildAt(t, this._children.length);
return t;
};
n.prototype.addChildAt = function(t, e) {
if (!t) throw "child is null";
var i = this._children.length;
if (e >= 0 && e <= i) {
if (t.parent == this) this.setChildIndex(t, e); else {
t.removeFromParent();
t._parent = this;
var n = this._children.length;
if (0 != t.sortingOrder) {
this._sortingChildCount++;
e = this.getInsertPosForSortingChild(t);
} else this._sortingChildCount > 0 && e > n - this._sortingChildCount && (e = n - this._sortingChildCount);
e == n ? this._children.push(t) : this._children.splice(e, 0, t);
this.onChildAdd(t, e);
this.setBoundsChangedFlag();
}
return t;
}
throw "Invalid child index";
};
n.prototype.getInsertPosForSortingChild = function(t) {
var e = this._children.length, i = 0;
for (i = 0; i < e; i++) {
var n = this._children[i];
if (n != t && t.sortingOrder < n.sortingOrder) break;
}
return i;
};
n.prototype.removeChild = function(t, e) {
var i = this._children.indexOf(t);
if (-1 != i) {
this.removeChildAt(i, e);
t._isAddEvented && (t._isAddEvented = !1);
}
return t;
};
n.prototype.removeChildAt = function(e, i) {
if (e >= 0 && e < this.numChildren) {
var n = this._children[e];
n._parent = null;
0 != n.sortingOrder && this._sortingChildCount--;
this._children.splice(e, 1);
n.group = null;
this._container.removeChild(n.node);
this._childrenRenderOrder == t.ChildrenRenderOrder.Arch && this._partner.callLater(this.buildNativeDisplayList);
i ? n.dispose() : n.node.parent = null;
this.setBoundsChangedFlag();
return n;
}
throw "Invalid child index";
};
n.prototype.removeChildren = function(t, e, i) {
null == t && (t = 0);
null == e && (e = -1);
(e < 0 || e >= this.numChildren) && (e = this.numChildren - 1);
for (var n = t; n <= e; ++n) this.removeChildAt(t, i);
};
n.prototype.getChildAt = function(t) {
if (t >= 0 && t < this.numChildren) return this._children[t];
throw "Invalid child index";
};
n.prototype.getChild = function(t) {
for (var e = this._children.length, i = 0; i < e; ++i) if (this._children[i].name == t) return this._children[i];
return null;
};
n.prototype.getChildByPath = function(t) {
for (var e, i = t.split("."), o = i.length, r = this, s = 0; s < o && (e = r.getChild(i[s])); ++s) if (s != o - 1) {
if (!(e instanceof n)) {
e = null;
break;
}
r = e;
}
return e;
};
n.prototype.getVisibleChild = function(t) {
for (var e = this._children.length, i = 0; i < e; ++i) {
var n = this._children[i];
if (n._finalVisible && n.name == t) return n;
}
return null;
};
n.prototype.getChildInGroup = function(t, e) {
for (var i = this._children.length, n = 0; n < i; ++n) {
var o = this._children[n];
if (o.group == e && o.name == t) return o;
}
return null;
};
n.prototype.getChildById = function(t) {
for (var e = this._children.length, i = 0; i < e; ++i) if (this._children[i]._id == t) return this._children[i];
return null;
};
n.prototype.getChildIndex = function(t) {
return this._children.indexOf(t);
};
n.prototype.setChildIndex = function(t, e) {
var i = this._children.indexOf(t);
if (-1 == i) throw "Not a child of this container";
if (0 == t.sortingOrder) {
var n = this._children.length;
this._sortingChildCount > 0 && e > n - this._sortingChildCount - 1 && (e = n - this._sortingChildCount - 1);
this._setChildIndex(t, i, e);
}
};
n.prototype.setChildIndexBefore = function(t, e) {
var i = this._children.indexOf(t);
if (-1 == i) throw "Not a child of this container";
if (0 != t.sortingOrder) return i;
var n = this._children.length;
this._sortingChildCount > 0 && e > n - this._sortingChildCount - 1 && (e = n - this._sortingChildCount - 1);
return i < e ? this._setChildIndex(t, i, e - 1) : this._setChildIndex(t, i, e);
};
n.prototype._setChildIndex = function(e, i, n) {
var o = this._children.length;
n > o && (n = o);
if (i == n) return i;
this._children.splice(i, 1);
this._children.splice(n, 0, e);
this._childrenRenderOrder == t.ChildrenRenderOrder.Ascent ? e.node.setSiblingIndex(n) : this._childrenRenderOrder == t.ChildrenRenderOrder.Descent ? e.node.setSiblingIndex(o - n) : this._partner.callLater(this.buildNativeDisplayList);
this.setBoundsChangedFlag();
return n;
};
n.prototype.swapChildren = function(t, e) {
var i = this._children.indexOf(t), n = this._children.indexOf(e);
if (-1 == i || -1 == n) throw "Not a child of this container";
this.swapChildrenAt(i, n);
};
n.prototype.swapChildrenAt = function(t, e) {
var i = this._children[t], n = this._children[e];
this.setChildIndex(i, e);
this.setChildIndex(n, t);
};
Object.defineProperty(n.prototype, "numChildren", {
get: function() {
return this._children.length;
},
enumerable: !1,
configurable: !0
});
n.prototype.isAncestorOf = function(t) {
if (null == t) return !1;
for (var e = t.parent; e; ) {
if (e == this) return !0;
e = e.parent;
}
return !1;
};
n.prototype.addController = function(t) {
this._controllers.push(t);
t.parent = this;
this.applyController(t);
};
n.prototype.getControllerAt = function(t) {
return this._controllers[t];
};
n.prototype.getController = function(t) {
for (var e = this._controllers.length, i = 0; i < e; ++i) {
var n = this._controllers[i];
if (n.name == t) return n;
}
return null;
};
n.prototype.removeController = function(t) {
var e = this._controllers.indexOf(t);
if (-1 == e) throw "controller not exists";
t.parent = null;
this._controllers.splice(e, 1);
for (var i = this._children.length, n = 0; n < i; n++) this._children[n].handleControllerChanged(t);
};
Object.defineProperty(n.prototype, "controllers", {
get: function() {
return this._controllers;
},
enumerable: !1,
configurable: !0
});
n.prototype.onChildAdd = function(e, i) {
e.node.parent = this._container;
e.node.active = e._finalVisible;
if (!this._buildingDisplayList) {
var n = this._children.length;
this._childrenRenderOrder == t.ChildrenRenderOrder.Ascent ? e.node.setSiblingIndex(i) : this._childrenRenderOrder == t.ChildrenRenderOrder.Descent ? e.node.setSiblingIndex(n - i) : this._partner.callLater(this.buildNativeDisplayList);
}
};
n.prototype.buildNativeDisplayList = function(e) {
if (isNaN(e)) {
var i = this._children.length;
if (0 != i) switch (this._childrenRenderOrder) {
case t.ChildrenRenderOrder.Ascent:
for (var n = 0, o = 0; o < i; o++) this._children[o].node.setSiblingIndex(n++);
break;

case t.ChildrenRenderOrder.Descent:
for (n = 0, o = i - 1; o >= 0; o--) this._children[o].node.setSiblingIndex(n++);
break;

case t.ChildrenRenderOrder.Arch:
for (n = 0, o = 0; o < this._apexIndex; o++) this._children[o].node.setSiblingIndex(n++);
for (o = i - 1; o >= this._apexIndex; o--) this._children[o].node.setSiblingIndex(n++);
}
} else this.node.$gobj.buildNativeDisplayList();
};
n.prototype.applyController = function(t) {
this._applyingController = t;
for (var e = this._children.length, i = 0; i < e; i++) this._children[i].handleControllerChanged(t);
this._applyingController = null;
t.runActions();
};
n.prototype.applyAllControllers = function() {
for (var t = this._controllers.length, e = 0; e < t; ++e) this.applyController(this._controllers[e]);
};
n.prototype.adjustRadioGroupDepth = function(e, i) {
var n, o, r = this._children.length, s = -1, a = -1;
for (n = 0; n < r; n++) (o = this._children[n]) == e ? s = n : t.GRoot.inst.getIsButton(o) && o.relatedController == i && n > a && (a = n);
if (s < a) {
this._applyingController && this._children[a].handleControllerChanged(this._applyingController);
this.swapChildrenAt(s, a);
}
};
n.prototype.getTransitionAt = function(t) {
return this._transitions[t];
};
n.prototype.getTransition = function(t) {
for (var e = this._transitions.length, i = 0; i < e; ++i) {
var n = this._transitions[i];
if (n.name == t) return n;
}
return null;
};
n.prototype.isChildInView = function(t) {
return this._rectMask ? t.x + t.width >= 0 && t.x <= this.width && t.y + t.height >= 0 && t.y <= this.height : !this._scrollPane || this._scrollPane.isChildInView(t);
};
n.prototype.getFirstChildInView = function() {
for (var t = this._children.length, e = 0; e < t; ++e) {
var i = this._children[e];
if (this.isChildInView(i)) return e;
}
return -1;
};
Object.defineProperty(n.prototype, "scrollPane", {
get: function() {
return this._scrollPane;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "opaque", {
get: function() {
return this._opaque;
},
set: function(t) {
this._opaque = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "margin", {
get: function() {
return this._margin;
},
set: function(t) {
this._margin.copy(t);
this.handleSizeChanged();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "childrenRenderOrder", {
get: function() {
return this._childrenRenderOrder;
},
set: function(t) {
if (this._childrenRenderOrder != t) {
this._childrenRenderOrder = t;
this.buildNativeDisplayList();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "apexIndex", {
get: function() {
return this._apexIndex;
},
set: function(e) {
if (this._apexIndex != e) {
this._apexIndex = e;
this._childrenRenderOrder == t.ChildrenRenderOrder.Arch && this.buildNativeDisplayList();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "mask", {
get: function() {
return this._maskContent;
},
set: function(t) {
this.setMask(t, !1);
},
enumerable: !1,
configurable: !0
});
n.prototype.setMask = function(e, i) {
if (this._maskContent) {
this._maskContent.node.off(cc.Node.EventType.POSITION_CHANGED, this.onMaskContentChanged, this);
this._maskContent.node.off(cc.Node.EventType.SIZE_CHANGED, this.onMaskContentChanged, this);
this._maskContent.node.off(cc.Node.EventType.SCALE_CHANGED, this.onMaskContentChanged, this);
this._maskContent.node.off(cc.Node.EventType.ANCHOR_CHANGED, this.onMaskContentChanged, this);
this._maskContent.visible = !0;
}
this._maskContent = e;
if (this._maskContent) {
if (!(e instanceof t.GImage || e instanceof t.GGraph)) return;
if (!this._customMask) {
var n = new cc.Node("Mask");
n.parent = this._node;
this._scrollPane ? this._container.parent.parent = n : this._container.parent = n;
this._customMask = n.addComponent(cc.Mask);
}
e.visible = !1;
e.node.on(cc.Node.EventType.POSITION_CHANGED, this.onMaskContentChanged, this);
e.node.on(cc.Node.EventType.SIZE_CHANGED, this.onMaskContentChanged, this);
e.node.on(cc.Node.EventType.SCALE_CHANGED, this.onMaskContentChanged, this);
e.node.on(cc.Node.EventType.ANCHOR_CHANGED, this.onMaskContentChanged, this);
this._customMask.inverted = i;
this._node.activeInHierarchy ? this.onMaskReady() : this.on(t.Event.DISPLAY, this.onMaskReady, this);
this.onMaskContentChanged();
this._scrollPane ? this._scrollPane.adjustMaskContainer() : this._container.setPosition(0, 0);
} else if (this._customMask) {
this._scrollPane ? this._container.parent.parent = this._node : this._container.parent = this._node;
this._customMask.node.destroy();
this._customMask = null;
this._scrollPane ? this._scrollPane.adjustMaskContainer() : this._container.setPosition(this._pivotCorrectX, this._pivotCorrectY);
}
};
n.prototype.onMaskReady = function() {
this.off(t.Event.DISPLAY, this.onMaskReady, this);
if (this._maskContent instanceof t.GImage) {
this._customMask.type = cc.Mask.Type.IMAGE_STENCIL;
this._customMask.alphaThreshold = 1e-4;
this._customMask.spriteFrame = this._maskContent._content.spriteFrame;
} else this._maskContent instanceof t.GGraph && (2 == this._maskContent.type ? this._customMask.type = cc.Mask.Type.ELLIPSE : this._customMask.type = cc.Mask.Type.RECT);
};
n.prototype.onMaskContentChanged = function() {
var t = this._customMask.node, e = this._maskContent.node, i = e.width * e.scaleX, n = e.height * e.scaleY;
t.setContentSize(i, n);
var o = e.x - e.anchorX * i, r = e.y - e.anchorY * n;
t.setAnchorPoint(-o / t.width, -r / t.height);
t.setPosition(this._pivotCorrectX, this._pivotCorrectY);
};
Object.defineProperty(n.prototype, "_pivotCorrectX", {
get: function() {
return -this.pivotX * this._width + this._margin.left;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "_pivotCorrectY", {
get: function() {
return this.pivotY * this._height - this._margin.top;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "baseUserData", {
get: function() {
var t = this.packageItem.rawData;
t.seek(0, 4);
return t.readS();
},
enumerable: !1,
configurable: !0
});
n.prototype.setupScroll = function(e) {
this._scrollPane = this._node.addComponent(t.ScrollPane);
this._scrollPane.setup(e);
};
n.prototype.setupOverflow = function(e) {
e == t.OverflowType.Hidden && (this._rectMask = this._container.addComponent(cc.Mask));
this._margin.isNone || this.handleSizeChanged();
};
n.prototype.handleAnchorChanged = function() {
e.prototype.handleAnchorChanged.call(this);
this._customMask ? this._customMask.node.setPosition(this._pivotCorrectX, this._pivotCorrectY) : this._scrollPane ? this._scrollPane.adjustMaskContainer() : this._container.setPosition(this._pivotCorrectX + this._alignOffset.x, this._pivotCorrectY - this._alignOffset.y);
};
n.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this._customMask ? this._customMask.node.setPosition(this._pivotCorrectX, this._pivotCorrectY) : this._scrollPane || this._container.setPosition(this._pivotCorrectX, this._pivotCorrectY);
this._scrollPane ? this._scrollPane.onOwnerSizeChanged() : this._container.setContentSize(this.viewWidth, this.viewHeight);
};
n.prototype.handleGrayedChanged = function() {
var t = this.getController("grayed");
if (t) t.selectedIndex = this.grayed ? 1 : 0; else for (var e = this.grayed, i = this._children.length, n = 0; n < i; ++n) this._children[n].grayed = e;
};
n.prototype.handleControllerChanged = function(t) {
e.prototype.handleControllerChanged.call(this, t);
this._scrollPane && this._scrollPane.handleControllerChanged(t);
};
n.prototype._hitTest = function(e, n, o) {
if (this._customMask) {
i.set(n);
i.y = t.GRoot.inst.height - n.y;
if (!this._customMask._hitTest(i)) return null;
}
if (this.hitArea) {
if (!this.hitArea.hitTest(e, n)) return null;
} else if (this._rectMask) {
i.set(e);
i.x += this._container.x;
i.y += this._container.y;
var r = this._container.getContentSize();
if (i.x < 0 || i.y < 0 || i.x >= r.width || i.y >= r.height) return null;
}
if (this._scrollPane) {
var s = this._scrollPane.hitTest(e, n);
if (!s) return null;
if (s != this) return s;
}
for (var a = null, l = this._children.length - 1; l >= 0; l--) {
var h = this._children[l];
if (this._maskContent != h && !h._touchDisabled && (a = h.hitTest(n, void 0, !this._scrollPane && o))) break;
}
!o && !a && this._opaque && (this.hitArea || e.x >= 0 && e.y >= 0 && e.x < this._width && e.y < this._height) && (a = this);
return a;
};
n.prototype.setBoundsChangedFlag = function() {
if ((this._scrollPane || this._trackBounds) && !this._boundsChanged) {
this._boundsChanged = !0;
this._partner.callLater(this.refresh);
}
};
n.prototype.refresh = function(t) {
if (isNaN(t)) {
if (this._boundsChanged) {
var e = this._children.length;
if (e > 0) for (var i = 0; i < e; i++) this._children[i].ensureSizeCorrect();
this.updateBounds();
}
} else this.node.$gobj.refresh();
};
n.prototype.ensureBoundsCorrect = function() {
var t = this._children.length;
if (t > 0) for (var e = 0; e < t; e++) this._children[e].ensureSizeCorrect();
this._boundsChanged && this.updateBounds();
};
n.prototype.updateBounds = function() {
var t = 0, e = 0, i = 0, n = 0, o = this._children.length;
if (o > 0) {
t = Number.POSITIVE_INFINITY, e = Number.POSITIVE_INFINITY;
var r = Number.NEGATIVE_INFINITY, s = Number.NEGATIVE_INFINITY, a = 0, l = 0;
for (l = 0; l < o; l++) {
var h = this._children[l];
(a = h.x) < t && (t = a);
(a = h.y) < e && (e = a);
(a = h.x + h.actualWidth) > r && (r = a);
(a = h.y + h.actualHeight) > s && (s = a);
}
i = r - t;
n = s - e;
}
this.setBounds(t, e, i, n);
};
n.prototype.setBounds = function(t, e, i, n) {
void 0 === n && (n = 0);
this._boundsChanged = !1;
this._scrollPane && this._scrollPane.setContentSize(Math.round(t + i), Math.round(e + n));
};
Object.defineProperty(n.prototype, "viewWidth", {
get: function() {
return this._scrollPane ? this._scrollPane.viewWidth : this.width - this._margin.left - this._margin.right;
},
set: function(t) {
this._scrollPane ? this._scrollPane.viewWidth = t : this.width = t + this._margin.left + this._margin.right;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "viewHeight", {
get: function() {
return this._scrollPane ? this._scrollPane.viewHeight : this.height - this._margin.top - this._margin.bottom;
},
set: function(t) {
this._scrollPane ? this._scrollPane.viewHeight = t : this.height = t + this._margin.top + this._margin.bottom;
},
enumerable: !1,
configurable: !0
});
n.prototype.getSnappingPosition = function(t, e, i) {
i || (i = new cc.Vec2());
var n = this._children.length;
if (0 == n) {
i.x = 0;
i.y = 0;
return i;
}
this.ensureBoundsCorrect();
var o = null, r = null, s = 0;
if (0 != e) {
for (;s < n; s++) if (e < (o = this._children[s]).y) {
if (0 == s) {
e = 0;
break;
}
e = e < (r = this._children[s - 1]).y + r.actualHeight / 2 ? r.y : o.y;
break;
}
s == n && (e = o.y);
}
if (0 != t) {
s > 0 && s--;
for (;s < n; s++) if (t < (o = this._children[s]).x) {
if (0 == s) {
t = 0;
break;
}
t = t < (r = this._children[s - 1]).x + r.actualWidth / 2 ? r.x : o.x;
break;
}
s == n && (t = o.x);
}
i.x = t;
i.y = e;
return i;
};
n.prototype.childSortingOrderChanged = function(t, e, i) {
void 0 === i && (i = 0);
if (0 == i) {
this._sortingChildCount--;
this.setChildIndex(t, this._children.length);
} else {
0 == e && this._sortingChildCount++;
var n = this._children.indexOf(t), o = this.getInsertPosForSortingChild(t);
n < o ? this._setChildIndex(t, n, o - 1) : this._setChildIndex(t, n, o);
}
};
n.prototype.constructFromResource = function() {
this.constructFromResource2(null, 0);
};
n.prototype.constructFromResource2 = function(e, i) {
var n, o, r, s, a, l, h, c, u = this.packageItem.getBranch();
if (!u.decoded) {
u.decoded = !0;
t.TranslationHelper.translateComponent(u);
}
var p = u.rawData;
p.seek(0, 0);
this._underConstruct = !0;
this.sourceWidth = p.readInt();
this.sourceHeight = p.readInt();
this.initWidth = this.sourceWidth;
this.initHeight = this.sourceHeight;
this.setSize(this.sourceWidth, this.sourceHeight);
if (p.readBool()) {
this.minWidth = p.readInt();
this.maxWidth = p.readInt();
this.minHeight = p.readInt();
this.maxHeight = p.readInt();
}
if (p.readBool()) {
a = p.readFloat();
l = p.readFloat();
this.setPivot(a, l, p.readBool());
}
if (p.readBool()) {
this._margin.top = p.readInt();
this._margin.bottom = p.readInt();
this._margin.left = p.readInt();
this._margin.right = p.readInt();
}
var d = p.readByte();
if (d == t.OverflowType.Scroll) {
var f = p.position;
p.seek(0, 7);
this.setupScroll(p);
p.position = f;
} else this.setupOverflow(d);
p.readBool() && p.skip(8);
this._buildingDisplayList = !0;
p.seek(0, 1);
var _, g = p.readShort();
for (n = 0; n < g; n++) {
s = p.readShort();
s += p.position;
var y = new t.Controller();
this._controllers.push(y);
y.parent = this;
y.setup(p);
p.position = s;
}
p.seek(0, 2);
var m = p.readShort();
for (n = 0; n < m; n++) {
o = p.readShort();
r = p.position;
if (e) _ = e[i + n]; else {
p.seek(r, 0);
var v = p.readByte(), b = p.readS(), w = p.readS(), S = null;
if (null != b) {
var I;
S = (I = null != w ? t.UIPackage.getById(w) : u.owner) ? I.getItemById(b) : null;
}
if (S) (_ = t.UIObjectFactory.newObject(S)).constructFromResource(); else {
if (v == t.ObjectType.List) {
p.seek(r, 0);
p.skip(5);
p.position += 12;
p.readBool() && (p.position += 8);
p.readBool() && (p.position += 16);
p.readBool() && (p.position += 8);
p.readBool() && (p.position += 8);
p.readBool() && (p.position += 9);
p.position += 8;
p.position += 1;
p.position += 1;
p.position += 1;
p.position += 1;
p.position += 1;
var C = p.readS();
C && C.includes('"isCustomType":"1"') && (v = t.ObjectType.GListLayout);
}
_ = t.UIObjectFactory.newObject(v);
}
}
_._underConstruct = !0;
_.setup_beforeAdd(p, r);
_._parent = this;
_.node.parent = this._container;
this._children.push(_);
p.position = r + o;
}
p.seek(0, 3);
this.relations.setup(p, !0);
p.seek(0, 2);
p.skip(2);
for (n = 0; n < m; n++) {
s = p.readShort();
s += p.position;
p.seek(p.position, 3);
this._children[n].relations.setup(p, !1);
p.position = s;
}
p.seek(0, 2);
p.skip(2);
for (n = 0; n < m; n++) {
s = p.readShort();
s += p.position;
(_ = this._children[n]).setup_afterAdd(p, p.position);
_._underConstruct = !1;
p.position = s;
}
p.seek(0, 4);
p.skip(2);
this.opaque = p.readBool();
var P = p.readShort();
-1 != P && this.setMask(this.getChildAt(P), p.readBool());
var x = p.readS();
h = p.readInt();
c = p.readInt();
null != x ? (S = u.owner.getItemById(x)) && S.hitTestData && (this.hitArea = new t.PixelHitTest(S.hitTestData, h, c)) : 0 != h && -1 != c && (this.hitArea = new t.ChildHitArea(this.getChildAt(c)));
p.seek(0, 5);
var k = p.readShort();
for (n = 0; n < k; n++) {
s = p.readShort();
s += p.position;
var T = new t.Transition(this);
T.setup(p);
this._transitions.push(T);
p.position = s;
}
this.applyAllControllers();
this._buildingDisplayList = !1;
this._underConstruct = !1;
this.buildNativeDisplayList();
this.setBoundsChangedFlag();
u.objectType != t.ObjectType.Component && this.constructExtension(p);
this.onConstruct();
};
n.prototype.constructExtension = function() {};
n.prototype.onConstruct = function() {};
n.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
t.seek(i, 4);
var n = t.readShort();
-1 != n && this._scrollPane && (this._scrollPane.pageController = this._parent.getControllerAt(n));
for (var o = t.readShort(), r = 0; r < o; r++) {
var s = this.getController(t.readS()), a = t.readS();
s && (s.selectedPageId = a);
}
if (t.version >= 2) {
o = t.readShort();
for (r = 0; r < o; r++) {
var l = t.readS(), h = t.readShort(), c = t.readS(), u = this.getChildByPath(l);
u && u.setProp(h, c);
}
}
};
n.prototype.onEnable = function() {
for (var t = this._transitions.length, e = 0; e < t; ++e) this._transitions[e].onEnable();
};
n.prototype.onDisable = function() {
for (var t = this._transitions.length, e = 0; e < t; ++e) this._transitions[e].onDisable();
};
return n;
}(t.GObject);
t.GComponent = e;
var i = new cc.Vec2();
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._node.name = "GButton";
i._mode = t.ButtonMode.Common;
i._title = "";
i._icon = "";
i._sound = t.UIConfig.buttonSound;
i._soundVolumeScale = 1;
i._changeStateOnClick = !0;
i._downEffect = 0;
i._downEffectValue = .8;
return i;
}
Object.defineProperty(i.prototype, "icon", {
get: function() {
return this._icon;
},
set: function(t) {
this._icon = t;
t = this._selected && this._selectedIcon ? this._selectedIcon : this._icon;
this._iconObject && (this._iconObject.icon = t);
this.updateGear(7);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selectedIcon", {
get: function() {
return this._selectedIcon;
},
set: function(t) {
this._selectedIcon = t;
t = this._selected && this._selectedIcon ? this._selectedIcon : this._icon;
this._iconObject && (this._iconObject.icon = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "title", {
get: function() {
return this._title;
},
set: function(t) {
this._title = t;
this._titleObject && (this._titleObject.visible = !!t, this._titleObject.text = this._selected && this._selectedTitle ? this._selectedTitle : this._title);
this.updateGear(6);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "text", {
get: function() {
return this.title;
},
set: function(t) {
this.title = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selectedTitle", {
get: function() {
return this._selectedTitle;
},
set: function(t) {
this._selectedTitle = t;
this._titleObject && (this._titleObject.visible = !!t, this._titleObject.text = this._selected && this._selectedTitle ? this._selectedTitle : this._title);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "titleColor", {
get: function() {
var t = this.getTextField();
return t ? t.color : cc.Color.BLACK;
},
set: function(t) {
var e = this.getTextField();
e && (e.color = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "titleFontSize", {
get: function() {
var t = this.getTextField();
return t ? t.fontSize : 0;
},
set: function(t) {
var e = this.getTextField();
e && (e.fontSize = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "sound", {
get: function() {
return this._sound;
},
set: function(t) {
this._sound = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "soundVolumeScale", {
get: function() {
return this._soundVolumeScale;
},
set: function(t) {
this._soundVolumeScale = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selected", {
get: function() {
return this._selected;
},
set: function(e) {
if (this._mode != t.ButtonMode.Common && this._selected != e) {
this._selected = e;
this.setCurrentState();
this._selectedTitle && this._titleObject && (this._titleObject.text = this._selected ? this._selectedTitle : this._title);
if (this._selectedIcon) {
var i = this._selected ? this._selectedIcon : this._icon;
this._iconObject && (this._iconObject.icon = i);
}
if (this._relatedController && this._parent && !this._parent._buildingDisplayList) if (this._selected) {
this._relatedController.selectedPageId = this._relatedPageId;
this._relatedController.autoRadioGroupDepth && this._parent.adjustRadioGroupDepth(this, this._relatedController);
} else this._mode == t.ButtonMode.Check && this._relatedController.selectedPageId == this._relatedPageId && (this._relatedController.oppositePageId = this._relatedPageId);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "mode", {
get: function() {
return this._mode;
},
set: function(e) {
if (this._mode != e) {
e == t.ButtonMode.Common && (this.selected = !1);
this._mode = e;
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "relatedController", {
get: function() {
return this._relatedController;
},
set: function(t) {
this._relatedController = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "relatedPageId", {
get: function() {
return this._relatedPageId;
},
set: function(t) {
this._relatedPageId = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "changeStateOnClick", {
get: function() {
return this._changeStateOnClick;
},
set: function(t) {
this._changeStateOnClick = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "linkedPopup", {
get: function() {
return this._linkedPopup;
},
set: function(t) {
this._linkedPopup = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.getTextField = function() {
return this._titleObject instanceof t.GTextField ? this._titleObject : this._titleObject instanceof t.GLabel || this._titleObject instanceof i ? this._titleObject.getTextField() : null;
};
i.prototype.fireClick = function() {
t.GRoot.inst.inputProcessor.simulateClick(this);
};
i.prototype.setState = function(e) {
this._buttonController && (this._buttonController.selectedPage = e);
if (1 == this._downEffect) {
var n = this.numChildren;
if (e == i.DOWN || e == i.SELECTED_OVER || e == i.SELECTED_DISABLED) {
this._downColor || (this._downColor = new cc.Color());
var o = 255 * this._downEffectValue;
this._downColor.r = this._downColor.g = this._downColor.b = o;
for (var r = 0; r < n; r++) null == (s = this.getChildAt(r)).color || s instanceof t.GTextField || (s.color = this._downColor);
} else for (r = 0; r < n; r++) {
var s;
null == (s = this.getChildAt(r)).color || s instanceof t.GTextField || (s.color = cc.Color.WHITE);
}
} else if (2 == this._downEffect) if (e == i.DOWN || e == i.SELECTED_OVER || e == i.SELECTED_DISABLED) {
if (!this._downScaled) {
this._downScaled = !0;
this.setScale(this.scaleX * this._downEffectValue, this.scaleY * this._downEffectValue);
}
} else if (this._downScaled) {
this._downScaled = !1;
this.setScale(this.scaleX / this._downEffectValue, this.scaleY / this._downEffectValue);
}
};
i.prototype.setCurrentState = function() {
this.grayed && this._buttonController && this._buttonController.hasPage(i.DISABLED) ? this._selected ? this.setState(i.SELECTED_DISABLED) : this.setState(i.DISABLED) : this._selected ? this.setState(this._over ? i.SELECTED_OVER : i.DOWN) : this.setState(this._over ? i.OVER : i.UP);
};
i.prototype.handleControllerChanged = function(t) {
e.prototype.handleControllerChanged.call(this, t);
this._relatedController == t && (this.selected = this._relatedPageId == t.selectedPageId);
};
i.prototype.handleGrayedChanged = function() {
this._buttonController && this._buttonController.hasPage(i.DISABLED) ? this.grayed ? this._selected && this._buttonController.hasPage(i.SELECTED_DISABLED) ? this.setState(i.SELECTED_DISABLED) : this.setState(i.DISABLED) : this._selected ? this.setState(i.DOWN) : this.setState(i.UP) : e.prototype.handleGrayedChanged.call(this);
};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.titleColor;

case t.ObjectPropID.OutlineColor:
var n = this.getTextField();
return n ? n.strokeColor : 0;

case t.ObjectPropID.FontSize:
return this.titleFontSize;

case t.ObjectPropID.Selected:
return this.selected;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.titleColor = n;
break;

case t.ObjectPropID.OutlineColor:
var o = this.getTextField();
o && (o.strokeColor = n);
break;

case t.ObjectPropID.FontSize:
this.titleFontSize = n;
break;

case t.ObjectPropID.Selected:
this.selected = n;
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.constructExtension = function(e) {
e.seek(0, 6);
this._mode = e.readByte();
var n = e.readS();
n && (this._sound = n);
this._soundVolumeScale = e.readFloat();
this._downEffect = e.readByte();
this._downEffectValue = e.readFloat();
2 == this._downEffect && this.setPivot(.5, .5, this.pivotAsAnchor);
this._buttonController = this.getController("button");
this._titleObject = this.getChild("title");
this._iconObject = this.getChild("icon");
this._titleObject && (this._title = this._titleObject.text);
this._iconObject && (this._icon = this._iconObject.icon);
this._mode == t.ButtonMode.Common && this.setState(i.UP);
this._node.on(t.Event.TOUCH_BEGIN, this.onTouchBegin_1, this);
this._node.on(t.Event.TOUCH_END, this.onTouchEnd_1, this);
this._node.on(t.Event.ROLL_OVER, this.onRollOver_1, this);
this._node.on(t.Event.ROLL_OUT, this.onRollOut_1, this);
this._node.on(t.Event.CLICK, this.onClick_1, this);
};
i.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
if (t.seek(i, 6) && t.readByte() == this.packageItem.objectType) {
var n, o;
null != (n = t.readS()) && (this.title = n);
null != (n = t.readS()) && (this.selectedTitle = n);
null != (n = t.readS()) && (this.icon = n);
null != (n = t.readS()) && (this.selectedIcon = n);
t.readBool() && (this.titleColor = t.readColor());
0 != (o = t.readInt()) && (this.titleFontSize = o);
(o = t.readShort()) >= 0 && (this._relatedController = this.parent.getControllerAt(o));
this._relatedPageId = t.readS();
null != (n = t.readS()) && (this._sound = n);
t.readBool() && (this._soundVolumeScale = t.readFloat());
this.selected = t.readBool();
}
};
i.prototype.onRollOver_1 = function() {
if (this._buttonController && this._buttonController.hasPage(i.OVER)) {
this._over = !0;
this._down || this.grayed && this._buttonController.hasPage(i.DISABLED) || this.setState(this._selected ? i.SELECTED_OVER : i.OVER);
}
};
i.prototype.onRollOut_1 = function() {
if (this._buttonController && this._buttonController.hasPage(i.OVER)) {
this._over = !1;
this._down || this.grayed && this._buttonController.hasPage(i.DISABLED) || this.setState(this._selected ? i.DOWN : i.UP);
}
};
i.prototype.onTouchBegin_1 = function(e) {
if (e.button == cc.Event.EventMouse.BUTTON_LEFT) {
this._down = !0;
e.captureTouch();
this._mode == t.ButtonMode.Common && (this.grayed && this._buttonController && this._buttonController.hasPage(i.DISABLED) ? this.setState(i.SELECTED_DISABLED) : this.setState(i.DOWN));
this._linkedPopup && (this._linkedPopup instanceof t.Window ? this._linkedPopup.toggleStatus() : this.root.togglePopup(this._linkedPopup, this));
}
};
i.prototype.onTouchEnd_1 = function(e) {
if (e.button == cc.Event.EventMouse.BUTTON_LEFT && this._down) {
this._down = !1;
if (null == this._node) return;
this._mode == t.ButtonMode.Common ? this.grayed && this._buttonController && this._buttonController.hasPage(i.DISABLED) ? this.setState(i.DISABLED) : this._over ? this.setState(i.OVER) : this.setState(i.UP) : this._over || null == this._buttonController || this._buttonController.selectedPage != i.OVER && this._buttonController.selectedPage != i.SELECTED_OVER || this.setCurrentState();
}
};
i.prototype.onClick_1 = function() {
if (this._sound) {
var e = t.UIPackage.getItemByURL(this._sound);
if (e) {
var i = e.owner.getItemAsset(e);
i && t.GRoot.inst.playOneShotSound(i, this._soundVolumeScale);
}
}
if (this._mode == t.ButtonMode.Check) {
if (this._changeStateOnClick) {
this.selected = !this._selected;
this._node.emit(t.Event.STATUS_CHANGED, this);
}
} else if (this._mode == t.ButtonMode.Radio) {
if (this._changeStateOnClick && !this._selected) {
this.selected = !0;
this._node.emit(t.Event.STATUS_CHANGED, this);
}
} else this._relatedController && (this._relatedController.selectedPageId = this._relatedPageId);
};
i.UP = "up";
i.DOWN = "down";
i.OVER = "over";
i.SELECTED_OVER = "selectedOver";
i.DISABLED = "disabled";
i.SELECTED_DISABLED = "selectedDisabled";
return i;
}(t.GComponent);
t.GButton = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._visibleItemCount = 0;
i._selectedIndex = 0;
i._popupDirection = t.PopupDirection.Auto;
i._isVirtualList = !1;
i._isNotAutoWidth = !1;
i._node.name = "GComboBox";
i._visibleItemCount = t.UIConfig.defaultComboBoxVisibleItemCount;
i._itemsUpdated = !0;
i._selectedIndex = -1;
i._items = [];
i._values = [];
return i;
}
Object.defineProperty(i.prototype, "dropdownWidth", {
set: function(t) {
this.dropdown.width = t;
this._list.ensureBoundsCorrect();
this._isNotAutoWidth = !0;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "text", {
get: function() {
return this._titleObject ? this._titleObject.text : null;
},
set: function(t) {
this._titleObject && (this._titleObject.text = t);
this.updateGear(6);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "icon", {
get: function() {
return this._iconObject ? this._iconObject.icon : null;
},
set: function(t) {
this._iconObject && (this._iconObject.icon = t);
this.updateGear(7);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "titleColor", {
get: function() {
var t = this.getTextField();
return t ? t.color : cc.Color.BLACK;
},
set: function(t) {
var e = this.getTextField();
e && (e.color = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "titleFontSize", {
get: function() {
var t = this.getTextField();
return t ? t.fontSize : 0;
},
set: function(t) {
var e = this.getTextField();
e && (e.fontSize = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "visibleItemCount", {
get: function() {
return this._visibleItemCount;
},
set: function(t) {
this._visibleItemCount = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "popupDirection", {
get: function() {
return this._popupDirection;
},
set: function(t) {
this._popupDirection = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "items", {
get: function() {
return this._items;
},
set: function(t) {
t ? this._items = t.concat() : this._items.length = 0;
if (this._items.length > 0) {
this._selectedIndex >= this._items.length ? this._selectedIndex = this._items.length - 1 : -1 == this._selectedIndex && (this._selectedIndex = 0);
this.text = this._items[this._selectedIndex];
this._icons && this._selectedIndex < this._icons.length && (this.icon = this._icons[this._selectedIndex]);
} else {
this.text = "";
this._icons && (this.icon = null);
this._selectedIndex = -1;
}
this._itemsUpdated = !0;
this.setVirtualList();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "icons", {
get: function() {
return this._icons;
},
set: function(t) {
this._icons = t;
this._icons && -1 != this._selectedIndex && this._selectedIndex < this._icons.length && (this.icon = this._icons[this._selectedIndex]);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "values", {
get: function() {
return this._values;
},
set: function(t) {
t ? this._values = t.concat() : this._values.length = 0;
this.setVirtualList();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selectedIndex", {
get: function() {
return this._selectedIndex;
},
set: function(t) {
if (this._selectedIndex != t) {
this._selectedIndex = t;
if (this._selectedIndex >= 0 && this._selectedIndex < this._items.length) {
this.text = this._items[this._selectedIndex];
this._icons && this._selectedIndex < this._icons.length && (this.icon = this._icons[this._selectedIndex]);
} else {
this.text = "";
this._icons && (this.icon = null);
}
this.updateSelectionController();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "value", {
get: function() {
return this._values[this._selectedIndex];
},
set: function(t) {
var e = this._values.indexOf(t);
-1 == e && null == t && (e = this._values.indexOf(""));
this.selectedIndex = e;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selectionController", {
get: function() {
return this._selectionController;
},
set: function(t) {
this._selectionController = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.getTextField = function() {
return this._titleObject instanceof t.GTextField ? this._titleObject : this._titleObject instanceof t.GLabel || this._titleObject instanceof t.GButton ? this._titleObject.getTextField() : null;
};
i.prototype.setState = function(t) {
this._buttonController && (this._buttonController.selectedPage = t);
};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.titleColor;

case t.ObjectPropID.OutlineColor:
var n = this.getTextField();
return n ? n.strokeColor : 0;

case t.ObjectPropID.FontSize:
return (n = this.getTextField()) ? n.fontSize : 0;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.titleColor = n;
break;

case t.ObjectPropID.OutlineColor:
var o = this.getTextField();
o && (o.strokeColor = n);
break;

case t.ObjectPropID.FontSize:
(o = this.getTextField()) && (o.fontSize = n);
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.constructExtension = function(e) {
var i;
this._buttonController = this.getController("button");
this._titleObject = this.getChild("title");
this._iconObject = this.getChild("icon");
if (i = e.readS()) {
var n = t.UIPackage.createObjectFromURL(i);
if (!(n instanceof t.GComponent)) {
console.error("下拉框必须为元件");
return;
}
this.dropdown = n;
this.dropdown.name = "this.dropdown";
this._list = this.dropdown.getChild("list");
if (null == this._list) {
console.error(this.resourceURL + ": 下拉框的弹出元件里必须包含名为list的列表");
return;
}
this._list.itemRenderer = this._itemRender.bind(this);
this._list.on(t.Event.CLICK_ITEM, this.onClickItem, this);
this._list.addRelation(this.dropdown, t.RelationType.Width);
this._list.removeRelation(this.dropdown, t.RelationType.Height);
this.dropdown.addRelation(this._list, t.RelationType.Height);
this.dropdown.removeRelation(this._list, t.RelationType.Width);
this.dropdown.on(t.Event.UNDISPLAY, this.onPopupClosed, this);
}
this._node.on(t.Event.TOUCH_BEGIN, this.onTouchBegin_1, this);
this._node.on(t.Event.TOUCH_END, this.onTouchEnd_1, this);
this._node.on(t.Event.ROLL_OVER, this.onRollOver_1, this);
this._node.on(t.Event.ROLL_OUT, this.onRollOut_1, this);
};
i.prototype.setVirtualList = function() {
if (!this._isVirtualList) {
var t = this._items.length > 10 || this._values.length > 10;
this._isVirtualList = t;
t && this._list.setVirtual();
}
};
i.prototype._itemRender = function(t, e) {
e.name = t < this._values.length ? this._values[t] : "";
e.text = this._items[t];
e.icon = this._icons && t < this._icons.length ? this._icons[t] : null;
};
i.prototype.handleControllerChanged = function(t) {
e.prototype.handleControllerChanged.call(this, t);
this._selectionController == t && (this.selectedIndex = t.selectedIndex);
};
i.prototype.updateSelectionController = function() {
if (this._selectionController && !this._selectionController.changing && this._selectedIndex < this._selectionController.pageCount) {
var t = this._selectionController;
this._selectionController = null;
t.selectedIndex = this._selectedIndex;
this._selectionController = t;
}
};
i.prototype.dispose = function() {
if (this.dropdown) {
this.dropdown.dispose();
this.dropdown = null;
}
e.prototype.dispose.call(this);
};
i.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
if (t.seek(i, 6) && t.readByte() == this.packageItem.objectType) {
var n, o, r, s, a = t.readShort();
for (n = 0; n < a; n++) {
r = t.readShort();
r += t.position;
this._items[n] = t.readS();
this._values[n] = t.readS();
if (null != (s = t.readS())) {
null == this._icons && (this._icons = new Array());
this._icons[n] = s;
}
t.position = r;
}
if (null != (s = t.readS())) {
this.text = s;
this._selectedIndex = this._items.indexOf(s);
} else if (this._items.length > 0) {
this._selectedIndex = 0;
this.text = this._items[0];
} else this._selectedIndex = -1;
null != (s = t.readS()) && (this.icon = s);
t.readBool() && (this.titleColor = t.readColor());
(o = t.readInt()) > 0 && (this._visibleItemCount = o);
this._popupDirection = t.readByte();
(o = t.readShort()) >= 0 && (this._selectionController = this.parent.getControllerAt(o));
}
};
i.prototype.showDropdown = function() {
if (this._itemsUpdated) {
this._itemsUpdated = !1;
var e = this._items.length;
this._list.numItems = e;
this._list.resizeToFit(this._visibleItemCount);
}
this._list.selectedIndex = -1;
this._isNotAutoWidth || (this.dropdown.width = this.width);
this._list.ensureBoundsCorrect();
this.root.togglePopup(this.dropdown, this, this._popupDirection);
if (this._isNotAutoWidth) {
var i = this.dropdown.x - (this.dropdown.width - this.width) / 2;
i < 20 ? i = 20 : this.dropdown.x + this.dropdown.width > this.root.width - 20 && (i = this.root.width - this.dropdown.width - 20);
this.dropdown.x = i;
}
this.dropdown.parent && this.setState(t.GButton.DOWN);
};
i.prototype.onPopupClosed = function() {
this._over ? this.setState(t.GButton.OVER) : this.setState(t.GButton.UP);
};
i.prototype.onClickItem = function(t) {
var e = this, i = this._list.getChildIndex(t);
this._isVirtualList && (i = this._list.childIndexToItemIndex(i));
this._partner.callLater(function() {
e.onClickItem2(i);
}, .1);
};
i.prototype.onClickItem2 = function(e) {
this.dropdown.parent instanceof t.GRoot && this.dropdown.parent.hidePopup();
this._selectedIndex = -1;
this.selectedIndex = e;
this._node.emit(t.Event.STATUS_CHANGED, this);
};
i.prototype.onRollOver_1 = function() {
this._over = !0;
this._down || this.dropdown && this.dropdown.parent || this.setState(t.GButton.OVER);
};
i.prototype.onRollOut_1 = function() {
this._over = !1;
this._down || this.dropdown && this.dropdown.parent || this.setState(t.GButton.UP);
};
i.prototype.onTouchBegin_1 = function(e) {
if (e.button == cc.Event.EventMouse.BUTTON_LEFT && !(e.initiator instanceof t.GTextInput && e.initiator.editable)) {
this._down = !0;
e.captureTouch();
this.dropdown && this.showDropdown();
}
};
i.prototype.onTouchEnd_1 = function(e) {
if (e.button == cc.Event.EventMouse.BUTTON_LEFT && this._down) {
this._down = !1;
this.dropdown && !this.dropdown.parent && (this._over ? this.setState(t.GButton.OVER) : this.setState(t.GButton.UP));
}
};
return i;
}(t.GComponent);
t.GComboBox = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = e.call(this) || this;
t._type = 0;
t._lineSize = 0;
t._node.name = "GGraph";
t._lineSize = 1;
t._lineColor = new cc.Color();
t._fillColor = new cc.Color(255, 255, 255, 255);
t._content = t._node.addComponent(cc.Graphics);
return t;
}
i.prototype.drawRect = function(t, e, i, n) {
this._type = 1;
this._lineSize = t;
this._lineColor.set(e);
this._fillColor.set(i);
this._cornerRadius = n;
this.updateGraph();
};
i.prototype.drawEllipse = function(t, e, i) {
this._type = 2;
this._lineSize = t;
this._lineColor.set(e);
this._fillColor.set(i);
this.updateGraph();
};
i.prototype.drawRegularPolygon = function(t, e, i, n, o, r) {
this._type = 4;
this._lineSize = t;
this._lineColor.set(e);
this._fillColor.set(i);
this._sides = n;
this._startAngle = o || 0;
this._distances = r;
this.updateGraph();
};
i.prototype.drawPolygon = function(t, e, i, n) {
this._type = 3;
this._lineSize = t;
this._lineColor.set(e);
this._fillColor.set(i);
this._polygonPoints = n;
this.updateGraph();
};
Object.defineProperty(i.prototype, "distances", {
get: function() {
return this._distances;
},
set: function(t) {
this._distances = t;
3 == this._type && this.updateGraph();
},
enumerable: !1,
configurable: !0
});
i.prototype.clearGraphics = function() {
this._type = 0;
if (this._hasContent) {
this._content.clear();
this._hasContent = !1;
}
};
Object.defineProperty(i.prototype, "type", {
get: function() {
return this._type;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "color", {
get: function() {
return this._fillColor;
},
set: function(t) {
this._fillColor.set(t);
0 != this._type && this.updateGraph();
},
enumerable: !1,
configurable: !0
});
i.prototype.updateGraph = function() {
var t = this._content;
if (this._hasContent) {
this._hasContent = !1;
t.clear();
}
var e = this._width, i = this._height;
if (0 != e && 0 != i) {
var n = -this.pivotX * this._width, o = this.pivotY * this._height, r = this._lineSize / 2;
t.lineWidth = this._lineSize;
t.strokeColor = this._lineColor;
t.fillColor = this._fillColor;
if (1 == this._type) this._cornerRadius ? t.roundRect(n + r, -i + o + r, e - this._lineSize, i - this._lineSize, this._cornerRadius[0]) : t.rect(n + r, -i + o + r, e - this._lineSize, i - this._lineSize); else if (2 == this._type) t.ellipse(e / 2 + n, -i / 2 + o, e / 2 - r, i / 2 - r); else if (3 == this._type) this.drawPath(t, this._polygonPoints, n, o); else if (4 == this._type) {
this._polygonPoints || (this._polygonPoints = []);
var s = Math.min(e, i) / 2 - r;
this._polygonPoints.length = 0;
for (var a, l = cc.misc.degreesToRadians(this._startAngle), h = 2 * Math.PI / this._sides, c = 0; c < this._sides; c++) {
if (this._distances) {
a = this._distances[c];
isNaN(a) && (a = 1);
} else a = 1;
var u = s + s * a * Math.cos(l), p = s + s * a * Math.sin(l);
this._polygonPoints.push(u, p);
l += h;
}
this.drawPath(t, this._polygonPoints, n, o);
}
0 != r && t.stroke();
0 != this._fillColor.a && t.fill();
this._hasContent = !0;
}
};
i.prototype.drawPath = function(t, e, i, n) {
var o = e.length;
t.moveTo(e[0] + i, -e[1] + n);
for (var r = 2; r < o; r += 2) t.lineTo(e[r] + i, -e[r + 1] + n);
t.lineTo(e[0] + i, -e[1] + n);
};
i.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
0 != this._type && this.updateGraph();
};
i.prototype.handleAnchorChanged = function() {
e.prototype.handleAnchorChanged.call(this);
0 != this._type && this.updateGraph();
};
i.prototype.getProp = function(i) {
return i == t.ObjectPropID.Color ? this.color : e.prototype.getProp.call(this, i);
};
i.prototype.setProp = function(i, n) {
i == t.ObjectPropID.Color ? this.color = n : e.prototype.setProp.call(this, i, n);
};
i.prototype._hitTest = function(t) {
if (t.x >= 0 && t.y >= 0 && t.x < this._width && t.y < this._height) {
if (3 == this._type) {
var e = this._polygonPoints, i = e.length / 2, n = void 0, o = i - 1, r = !1;
this._width, this._height;
for (n = 0; n < i; ++n) {
var s = e[2 * n], a = e[2 * n + 1], l = e[2 * o], h = e[2 * o + 1];
(a < t.y && h >= t.y || h < t.y && a >= t.y) && (s <= t.x || l <= t.x) && s + (t.y - a) / (h - a) * (l - s) < t.x && (r = !r);
o = n;
}
return r ? this : null;
}
return this;
}
return null;
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
this._type = t.readByte();
if (0 != this._type) {
var n, o;
this._lineSize = t.readInt();
this._lineColor.set(t.readColor(!0));
this._fillColor.set(t.readColor(!0));
if (t.readBool()) {
this._cornerRadius = new Array(4);
for (n = 0; n < 4; n++) this._cornerRadius[n] = t.readFloat();
}
if (3 == this._type) {
o = t.readShort();
this._polygonPoints = [];
this._polygonPoints.length = o;
for (n = 0; n < o; n++) this._polygonPoints[n] = t.readFloat();
} else if (4 == this._type) {
this._sides = t.readShort();
this._startAngle = t.readFloat();
if ((o = t.readShort()) > 0) {
this._distances = [];
for (n = 0; n < o; n++) this._distances[n] = t.readFloat();
}
}
this.updateGraph();
}
};
return i;
}(t.GObject);
t.GGraph = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = e.call(this) || this;
t._layout = 0;
t._lineGap = 0;
t._columnGap = 0;
t._mainGridIndex = -1;
t._mainGridMinSize = 50;
t._mainChildIndex = -1;
t._totalSize = 0;
t._numChildren = 0;
t._updating = 0;
t._node.name = "GGroup";
t._touchDisabled = !0;
return t;
}
i.prototype.dispose = function() {
this._boundsChanged = !1;
e.prototype.dispose.call(this);
};
Object.defineProperty(i.prototype, "layout", {
get: function() {
return this._layout;
},
set: function(t) {
if (this._layout != t) {
this._layout = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "lineGap", {
get: function() {
return this._lineGap;
},
set: function(t) {
if (this._lineGap != t) {
this._lineGap = t;
this.setBoundsChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "columnGap", {
get: function() {
return this._columnGap;
},
set: function(t) {
if (this._columnGap != t) {
this._columnGap = t;
this.setBoundsChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "excludeInvisibles", {
get: function() {
return this._excludeInvisibles;
},
set: function(t) {
if (this._excludeInvisibles != t) {
this._excludeInvisibles = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "autoSizeDisabled", {
get: function() {
return this._autoSizeDisabled;
},
set: function(t) {
this._autoSizeDisabled = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "mainGridMinSize", {
get: function() {
return this._mainGridMinSize;
},
set: function(t) {
if (this._mainGridMinSize != t) {
this._mainGridMinSize = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "mainGridIndex", {
get: function() {
return this._mainGridIndex;
},
set: function(t) {
if (this._mainGridIndex != t) {
this._mainGridIndex = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
i.prototype.setBoundsChangedFlag = function(e) {
void 0 === e && (e = !1);
if (0 == this._updating && this._parent) {
e || (this._percentReady = !1);
if (!this._boundsChanged) {
this._boundsChanged = !0;
this._layout != t.GroupLayoutType.None && this._partner.callLater(this._ensureBoundsCorrect);
}
}
};
i.prototype._ensureBoundsCorrect = function() {
this.node.$gobj.ensureBoundsCorrect();
};
i.prototype.ensureSizeCorrect = function() {
if (null != this._parent && this._boundsChanged && 0 != this._layout) {
this._boundsChanged = !1;
if (this._autoSizeDisabled) this.resizeChildren(0, 0); else {
this.handleLayout();
this.updateBounds();
}
}
};
i.prototype.ensureBoundsCorrect = function() {
if (null != this._parent && this._boundsChanged) {
this._boundsChanged = !1;
if (0 == this._layout) this.updateBounds(); else if (this._autoSizeDisabled) this.resizeChildren(0, 0); else {
this.handleLayout();
this.updateBounds();
}
}
};
i.prototype.updateBounds = function() {
this._partner.unschedule(this._ensureBoundsCorrect);
var t, e, i, n = this._parent.numChildren, o = Number.POSITIVE_INFINITY, r = Number.POSITIVE_INFINITY, s = Number.NEGATIVE_INFINITY, a = Number.NEGATIVE_INFINITY, l = !0;
for (t = 0; t < n; t++) if ((e = this._parent.getChildAt(t)).group == this && (!this._excludeInvisibles || e.internalVisible3)) {
(i = e.xMin) < o && (o = i);
(i = e.yMin) < r && (r = i);
(i = e.xMin + e.width) > s && (s = i);
(i = e.yMin + e.height) > a && (a = i);
l = !1;
}
var h = 0, c = 0;
if (!l) {
this._updating |= 1;
this.setPosition(o, r);
this._updating &= 2;
h = s - o;
c = a - r;
}
if (0 == (2 & this._updating)) {
this._updating |= 2;
this.setSize(h, c);
this._updating &= 1;
} else {
this._updating &= 1;
this.resizeChildren(this._width - h, this._height - c);
}
};
i.prototype.handleLayout = function() {
this._updating |= 1;
var e, i, n;
if (this._layout == t.GroupLayoutType.Horizontal) {
var o = this.x;
n = this._parent.numChildren;
for (i = 0; i < n; i++) if ((e = this._parent.getChildAt(i)).group == this && (!this._excludeInvisibles || e.internalVisible3)) {
e.xMin = o;
0 != e.width && (o += e.width + this._columnGap);
}
} else if (this._layout == t.GroupLayoutType.Vertical) {
var r = this.y;
n = this._parent.numChildren;
for (i = 0; i < n; i++) if ((e = this._parent.getChildAt(i)).group == this && (!this._excludeInvisibles || e.internalVisible3)) {
e.yMin = r;
0 != e.height && (r += e.height + this._lineGap);
}
}
this._updating &= 2;
};
i.prototype.moveChildren = function(t, e) {
if (0 == (1 & this._updating) && null != this._parent) {
this._updating |= 1;
var i, n, o = this._parent.numChildren;
for (i = 0; i < o; i++) (n = this._parent.getChildAt(i)).group == this && n.setPosition(n.x + t, n.y + e);
this._updating &= 2;
}
};
i.prototype.resizeChildren = function(e, i) {
if (this._layout != t.GroupLayoutType.None && 0 == (2 & this._updating) && null != this._parent) {
this._updating |= 2;
if (this._boundsChanged) {
this._boundsChanged = !1;
if (!this._autoSizeDisabled) {
this.updateBounds();
return;
}
}
var n, o, r = this._parent.numChildren;
if (!this._percentReady) {
this._percentReady = !0;
this._numChildren = 0;
this._totalSize = 0;
this._mainChildIndex = -1;
var s = 0;
for (n = 0; n < r; n++) if ((o = this._parent.getChildAt(n)).group == this) {
if (!this._excludeInvisibles || o.internalVisible3) {
s == this._mainGridIndex && (this._mainChildIndex = n);
this._numChildren++;
1 == this._layout ? this._totalSize += o.width : this._totalSize += o.height;
}
s++;
}
if (-1 != this._mainChildIndex) if (1 == this._layout) {
o = this._parent.getChildAt(this._mainChildIndex);
this._totalSize += this._mainGridMinSize - o.width;
o._sizePercentInGroup = this._mainGridMinSize / this._totalSize;
} else {
o = this._parent.getChildAt(this._mainChildIndex);
this._totalSize += this._mainGridMinSize - o.height;
o._sizePercentInGroup = this._mainGridMinSize / this._totalSize;
}
for (n = 0; n < r; n++) (o = this._parent.getChildAt(n)).group == this && n != this._mainChildIndex && (this._totalSize > 0 ? o._sizePercentInGroup = (1 == this._layout ? o.width : o.height) / this._totalSize : o._sizePercentInGroup = 0);
}
var a = 0, l = 1, h = !1;
if (1 == this._layout) {
a = this.width - (this._numChildren - 1) * this._columnGap;
if (-1 != this._mainChildIndex && a >= this._totalSize) {
(o = this._parent.getChildAt(this._mainChildIndex)).setSize(a - (this._totalSize - this._mainGridMinSize), o._rawHeight + i, !0);
a -= o.width;
l -= o._sizePercentInGroup;
h = !0;
}
var c = this.x;
for (n = 0; n < r; n++) if ((o = this._parent.getChildAt(n)).group == this) if (!this._excludeInvisibles || o.internalVisible3) {
if (!h || n != this._mainChildIndex) {
o.setSize(Math.round(o._sizePercentInGroup / l * a), o._rawHeight + i, !0);
l -= o._sizePercentInGroup;
a -= o.width;
}
o.xMin = c;
0 != o.width && (c += o.width + this._columnGap);
} else o.setSize(o._rawWidth, o._rawHeight + i, !0);
} else {
a = this.height - (this._numChildren - 1) * this._lineGap;
if (-1 != this._mainChildIndex && a >= this._totalSize) {
(o = this._parent.getChildAt(this._mainChildIndex)).setSize(o._rawWidth + e, a - (this._totalSize - this._mainGridMinSize), !0);
a -= o.height;
l -= o._sizePercentInGroup;
h = !0;
}
var u = this.y;
for (n = 0; n < r; n++) if ((o = this._parent.getChildAt(n)).group == this) if (!this._excludeInvisibles || o.internalVisible3) {
if (!h || n != this._mainChildIndex) {
o.setSize(o._rawWidth + e, Math.round(o._sizePercentInGroup / l * a), !0);
l -= o._sizePercentInGroup;
a -= o.height;
}
o.yMin = u;
0 != o.height && (u += o.height + this._lineGap);
} else o.setSize(o._rawWidth + e, o._rawHeight, !0);
}
this._updating &= 1;
}
};
i.prototype.handleAlphaChanged = function() {
if (!this._underConstruct) for (var t = this._parent.numChildren, e = 0; e < t; e++) {
var i = this._parent.getChildAt(e);
i.group == this && (i.alpha = this.alpha);
}
};
i.prototype.handleVisibleChanged = function() {
if (this._parent) for (var t = this._parent.numChildren, e = 0; e < t; e++) {
var i = this._parent.getChildAt(e);
i.group == this && i.handleVisibleChanged();
}
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
this._layout = t.readByte();
this._lineGap = t.readInt();
this._columnGap = t.readInt();
if (t.version >= 2) {
this._excludeInvisibles = t.readBool();
this._autoSizeDisabled = t.readBool();
this._mainGridIndex = t.readShort();
}
};
i.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
this.visible || this.handleVisibleChanged();
};
return i;
}(t.GObject);
t.GGroup = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._node.name = "GImage";
i._touchDisabled = !0;
i._content = i._node.addComponent(t.Image);
i._content.sizeMode = cc.Sprite.SizeMode.CUSTOM;
i._content.trim = !1;
return i;
}
Object.defineProperty(i.prototype, "color", {
get: function() {
return this._node.color;
},
set: function(t) {
this._node.color = t;
this.updateGear(4);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "flip", {
get: function() {
return this._content.flip;
},
set: function(t) {
this._content.flip = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillMethod", {
get: function() {
return this._content.fillMethod;
},
set: function(t) {
this._content.fillMethod = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillOrigin", {
get: function() {
return this._content.fillOrigin;
},
set: function(t) {
this._content.fillOrigin = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillClockwise", {
get: function() {
return this._content.fillClockwise;
},
set: function(t) {
this._content.fillClockwise = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillAmount", {
get: function() {
return this._content.fillAmount;
},
set: function(t) {
this._content.fillAmount = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.constructFromResource = function() {
var t = this.packageItem.getBranch();
this.sourceWidth = t.width;
this.sourceHeight = t.height;
this.initWidth = this.sourceWidth;
this.initHeight = this.sourceHeight;
this.setSize(this.sourceWidth, this.sourceHeight);
(t = t.getHighResolution()).load();
t.scale9Grid ? this._content.type = cc.Sprite.Type.SLICED : t.scaleByTile && (this._content.type = cc.Sprite.Type.TILED);
this._content.spriteFrame = t.asset;
};
i.prototype.handleGrayedChanged = function() {
this._content.grayed = this._grayed;
};
i.prototype.getProp = function(i) {
return i == t.ObjectPropID.Color ? this.color : e.prototype.getProp.call(this, i);
};
i.prototype.setProp = function(i, n) {
i == t.ObjectPropID.Color ? this.color = n : e.prototype.setProp.call(this, i, n);
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
t.readBool() && (this.color = t.readColor());
this._content.flip = t.readByte();
this._content.fillMethod = t.readByte();
if (0 != this._content.fillMethod) {
this._content.fillOrigin = t.readByte();
this._content.fillClockwise = t.readBool();
this._content.fillAmount = t.readFloat();
}
};
return i;
}(t.GObject);
t.GImage = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = e.call(this) || this;
t._node.name = "GLabel";
return t;
}
Object.defineProperty(i.prototype, "icon", {
get: function() {
if (this._iconObject) return this._iconObject.icon;
},
set: function(t) {
this._iconObject && (this._iconObject.icon = t);
this.updateGear(7);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "title", {
get: function() {
return this._titleObject ? this._titleObject.text : null;
},
set: function(t) {
this._titleObject && (this._titleObject.text = t);
this.updateGear(6);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "text", {
get: function() {
return this.title;
},
set: function(t) {
this.title = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "titleColor", {
get: function() {
var t = this.getTextField();
return t ? t.color : cc.Color.WHITE;
},
set: function(t) {
var e = this.getTextField();
e && (e.color = t);
this.updateGear(4);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "titleFontSize", {
get: function() {
var t = this.getTextField();
return t ? t.fontSize : 0;
},
set: function(t) {
var e = this.getTextField();
e && (e.fontSize = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "editable", {
get: function() {
return !!(this._titleObject && this._titleObject instanceof t.GTextInput) && this._titleObject.editable;
},
set: function(e) {
this._titleObject && this._titleObject instanceof t.GTextInput && (this._titleObject.editable = e);
},
enumerable: !1,
configurable: !0
});
i.prototype.getTextField = function() {
return this._titleObject instanceof t.GTextField ? this._titleObject : this._titleObject instanceof i || t.GRoot.inst.getIsButton(this._titleObject) ? this._titleObject.getTextField() : null;
};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.titleColor;

case t.ObjectPropID.OutlineColor:
var n = this.getTextField();
return n ? n.strokeColor : 0;

case t.ObjectPropID.FontSize:
return this.titleFontSize;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.titleColor = n;
break;

case t.ObjectPropID.OutlineColor:
var o = this.getTextField();
o && (o.strokeColor = n);
break;

case t.ObjectPropID.FontSize:
this.titleFontSize = n;
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.constructExtension = function() {
this._titleObject = this.getChild("title");
this._iconObject = this.getChild("icon");
};
i.prototype.setup_afterAdd = function(i, n) {
e.prototype.setup_afterAdd.call(this, i, n);
if (i.seek(n, 6) && i.readByte() == this.packageItem.objectType) {
var o;
null != (o = i.readS()) && (this.title = o);
null != (o = i.readS()) && (this.icon = o);
i.readBool() && (this.titleColor = i.readColor());
var r = i.readInt();
0 != r && (this.titleFontSize = r);
if (i.readBool()) {
var s = this.getTextField();
if (s instanceof t.GTextInput) {
null != (o = i.readS()) && (s.promptText = o);
null != (o = i.readS()) && (s.restrict = o);
0 != (r = i.readInt()) && (s.maxLength = r);
r = i.readInt();
i.readBool() && (s.password = !0);
} else i.skip(13);
}
}
};
return i;
}(t.GComponent);
t.GLabel = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var i = e.call(this) || this;
i.scrollItemToViewOnClick = !0;
i.foldInvisibleItems = !1;
i._lineCount = 0;
i._columnCount = 0;
i._lineGap = 0;
i._columnGap = 0;
i._lastSelectedIndex = 0;
i._numItems = 0;
i._realNumItems = 0;
i._firstIndex = 0;
i._curLineItemCount = 0;
i._curLineItemCount2 = 0;
i._virtualListChanged = 0;
i.itemInfoVer = 0;
i._node.name = "GList";
i._trackBounds = !0;
i._pool = new t.GObjectPool();
i._layout = t.ListLayoutType.SingleColumn;
i._autoResizeItem = !0;
i._lastSelectedIndex = -1;
i._selectionMode = t.ListSelectionMode.Single;
i.opaque = !0;
i._align = t.AlignType.Left;
i._verticalAlign = t.VertAlignType.Top;
return i;
}
n.prototype.dispose = function() {
this._partner.unschedule(this._refreshVirtualList);
this._pool.clear();
e.prototype.dispose.call(this);
};
Object.defineProperty(n.prototype, "layout", {
get: function() {
return this._layout;
},
set: function(t) {
if (this._layout != t) {
this._layout = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "lineCount", {
get: function() {
return this._lineCount;
},
set: function(t) {
if (this._lineCount != t) {
this._lineCount = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "columnCount", {
get: function() {
return this._columnCount;
},
set: function(t) {
if (this._columnCount != t) {
this._columnCount = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "lineGap", {
get: function() {
return this._lineGap;
},
set: function(t) {
if (this._lineGap != t) {
this._lineGap = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "columnGap", {
get: function() {
return this._columnGap;
},
set: function(t) {
if (this._columnGap != t) {
this._columnGap = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "align", {
get: function() {
return this._align;
},
set: function(t) {
if (this._align != t) {
this._align = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "verticalAlign", {
get: function() {
return this._verticalAlign;
},
set: function(t) {
if (this._verticalAlign != t) {
this._verticalAlign = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "virtualItemSize", {
get: function() {
return this._itemSize;
},
set: function(t) {
if (this._virtual) {
null == this._itemSize && (this._itemSize = new cc.Size(0, 0));
this._itemSize.width = t.width;
this._itemSize.height = t.height;
this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "defaultItem", {
get: function() {
return this._defaultItem;
},
set: function(e) {
this._defaultItem = t.UIPackage.normalizeURL(e);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "autoResizeItem", {
get: function() {
return this._autoResizeItem;
},
set: function(t) {
if (this._autoResizeItem != t) {
this._autoResizeItem = t;
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "selectionMode", {
get: function() {
return this._selectionMode;
},
set: function(t) {
this._selectionMode = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "selectionController", {
get: function() {
return this._selectionController;
},
set: function(t) {
this._selectionController = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "itemPool", {
get: function() {
return this._pool;
},
enumerable: !1,
configurable: !0
});
n.prototype.getFromPool = function(t) {
t || (t = this._defaultItem);
var e = this._pool.getObject(t);
e && (e.visible = !0);
return e;
};
n.prototype.returnToPool = function(t) {
this._pool.returnObject(t);
};
n.prototype.addChildAt = function(i, n) {
e.prototype.addChildAt.call(this, i, n);
if (t.GRoot.inst.getIsButton(i)) {
i.selected = !1;
i.changeStateOnClick = !1;
}
i.on(t.Event.CLICK, this.onClickItem, this);
return i;
};
n.prototype.addItem = function(e) {
e || (e = this._defaultItem);
return this.addChild(t.UIPackage.createObjectFromURL(e));
};
n.prototype.addItemFromPool = function(t) {
return this.addChild(this.getFromPool(t));
};
n.prototype.removeChildAt = function(i, n) {
var o = e.prototype.removeChildAt.call(this, i, n);
n || o.off(t.Event.CLICK, this.onClickItem, this);
return o;
};
n.prototype.removeChildToPoolAt = function(t) {
var i = e.prototype.removeChildAt.call(this, t);
this.returnToPool(i);
};
n.prototype.removeChildToPool = function(t) {
e.prototype.removeChild.call(this, t);
this.returnToPool(t);
};
n.prototype.removeChildrenToPool = function(t, e) {
null == t && (t = 0);
null == e && (e = -1);
(e < 0 || e >= this._children.length) && (e = this._children.length - 1);
for (var i = t; i <= e; ++i) this.removeChildToPoolAt(t);
};
Object.defineProperty(n.prototype, "selectedIndex", {
get: function() {
var e;
if (this._virtual) for (e = 0; e < this._realNumItems; e++) {
var i = this._virtualItems[e];
if (t.GRoot.inst.getIsButton(i.obj) && i.obj.selected || !i.obj && i.selected) return this._loop ? e % this._numItems : e;
} else {
var n = this._children.length;
for (e = 0; e < n; e++) {
var o = this._children[e];
if (t.GRoot.inst.getIsButton(o) && o.selected) return e;
}
}
return -1;
},
set: function(e) {
if (e >= 0 && e < this.numItems) {
this._selectionMode != t.ListSelectionMode.Single && this.clearSelection();
this.addSelection(e);
} else this.clearSelection();
},
enumerable: !1,
configurable: !0
});
n.prototype.getSelection = function(e) {
e || (e = new Array());
var i;
if (this._virtual) for (i = 0; i < this._realNumItems; i++) {
var n = this._virtualItems[i];
if (t.GRoot.inst.getIsButton(n.obj) && n.obj.selected || !n.obj && n.selected) {
var o = i;
if (this._loop) {
o = i % this._numItems;
if (-1 != e.indexOf(o)) continue;
}
e.push(o);
}
} else {
var r = this._children.length;
for (i = 0; i < r; i++) {
var s = this._children[i];
t.GRoot.inst.getIsButton(s) && s.selected && e.push(i);
}
}
return e;
};
n.prototype.addSelection = function(e, i) {
if (this._selectionMode != t.ListSelectionMode.None) {
this.checkVirtualList();
this._selectionMode == t.ListSelectionMode.Single && this.clearSelection();
i && this.scrollToView(e);
this._lastSelectedIndex = e;
var n;
if (this._virtual) {
var o = this._virtualItems[e];
o.obj && (n = o.obj);
o.selected = !0;
} else n = this.getChildAt(e);
if (t.GRoot.inst.getIsButton(n) && !n.selected) {
n.selected = !0;
this.updateSelectionController(e);
}
}
};
n.prototype.removeSelection = function(e) {
if (this._selectionMode != t.ListSelectionMode.None) {
var i;
if (this._virtual) {
var n = this._virtualItems[e];
n.obj && (i = n.obj);
n.selected = !1;
} else i = this.getChildAt(e);
t.GRoot.inst.getIsButton(i) && (i.selected = !1);
}
};
n.prototype.clearSelection = function() {
var e;
if (this._virtual) for (e = 0; e < this._realNumItems; e++) {
var i = this._virtualItems[e];
t.GRoot.inst.getIsButton(i.obj) && (i.obj.selected = !1);
i.selected = !1;
} else {
var n = this._children.length;
for (e = 0; e < n; e++) {
var o = this._children[e];
t.GRoot.inst.getIsButton(o) && (o.selected = !1);
}
}
};
n.prototype.clearSelectionExcept = function(e) {
var i;
if (this._virtual) for (i = 0; i < this._realNumItems; i++) {
var n = this._virtualItems[i];
if (n.obj != e) {
t.GRoot.inst.getIsButton(n.obj) && (n.obj.selected = !1);
n.selected = !1;
}
} else {
var o = this._children.length;
for (i = 0; i < o; i++) {
var r = this._children[i];
t.GRoot.inst.getIsButton(r) && r != e && (r.selected = !1);
}
}
};
n.prototype.selectAll = function() {
this.checkVirtualList();
var e, i = -1;
if (this._virtual) for (e = 0; e < this._realNumItems; e++) {
var n = this._virtualItems[e];
if (t.GRoot.inst.getIsButton(n.obj) && !n.obj.selected) {
n.obj.selected = !0;
i = e;
}
n.selected = !0;
} else {
var o = this._children.length;
for (e = 0; e < o; e++) {
var r = this._children[e];
if (t.GRoot.inst.getIsButton(r) && !r.selected) {
r.selected = !0;
i = e;
}
}
}
-1 != i && this.updateSelectionController(i);
};
n.prototype.selectNone = function() {
this.clearSelection();
};
n.prototype.selectReverse = function() {
this.checkVirtualList();
var e, i = -1;
if (this._virtual) for (e = 0; e < this._realNumItems; e++) {
var n = this._virtualItems[e];
if (t.GRoot.inst.getIsButton(n.obj)) {
n.obj.selected = !n.obj.selected;
n.obj.selected && (i = e);
}
n.selected = !n.selected;
} else {
var o = this._children.length;
for (e = 0; e < o; e++) {
var r = this._children[e];
if (t.GRoot.inst.getIsButton(r)) {
r.selected = !r.selected;
r.selected && (i = e);
}
}
}
-1 != i && this.updateSelectionController(i);
};
n.prototype.handleArrowKey = function(e) {
var i = this.selectedIndex;
if (-1 != i) switch (e) {
case 1:
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowVertical) {
if (--i >= 0) {
this.clearSelection();
this.addSelection(i, !0);
}
} else if (this._layout == t.ListLayoutType.FlowHorizontal || this._layout == t.ListLayoutType.Pagination) {
for (var n = this._children[i], o = 0, r = i - 1; r >= 0; r--) {
var s = this._children[r];
if (s.y != n.y) {
n = s;
break;
}
o++;
}
for (;r >= 0; r--) if ((s = this._children[r]).y != n.y) {
this.clearSelection();
this.addSelection(r + o + 1, !0);
break;
}
}
break;

case 3:
if (this._layout == t.ListLayoutType.SingleRow || this._layout == t.ListLayoutType.FlowHorizontal || this._layout == t.ListLayoutType.Pagination) {
if (++i < this._children.length) {
this.clearSelection();
this.addSelection(i, !0);
}
} else if (this._layout == t.ListLayoutType.FlowVertical) {
n = this._children[i];
o = 0;
var a = this._children.length;
for (r = i + 1; r < a; r++) {
if ((s = this._children[r]).x != n.x) {
n = s;
break;
}
o++;
}
for (;r < a; r++) if ((s = this._children[r]).x != n.x) {
this.clearSelection();
this.addSelection(r - o - 1, !0);
break;
}
}
break;

case 5:
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowVertical) {
if (++i < this._children.length) {
this.clearSelection();
this.addSelection(i, !0);
}
} else if (this._layout == t.ListLayoutType.FlowHorizontal || this._layout == t.ListLayoutType.Pagination) {
n = this._children[i];
o = 0;
a = this._children.length;
for (r = i + 1; r < a; r++) {
if ((s = this._children[r]).y != n.y) {
n = s;
break;
}
o++;
}
for (;r < a; r++) if ((s = this._children[r]).y != n.y) {
this.clearSelection();
this.addSelection(r - o - 1, !0);
break;
}
}
break;

case 7:
if (this._layout == t.ListLayoutType.SingleRow || this._layout == t.ListLayoutType.FlowHorizontal || this._layout == t.ListLayoutType.Pagination) {
if (--i >= 0) {
this.clearSelection();
this.addSelection(i, !0);
}
} else if (this._layout == t.ListLayoutType.FlowVertical) {
n = this._children[i];
o = 0;
for (r = i - 1; r >= 0; r--) {
if ((s = this._children[r]).x != n.x) {
n = s;
break;
}
o++;
}
for (;r >= 0; r--) if ((s = this._children[r]).x != n.x) {
this.clearSelection();
this.addSelection(r + o + 1, !0);
break;
}
}
}
};
n.prototype.onClickItem = function(e) {
if (!this._scrollPane || !this._scrollPane.isDragged) {
var i = t.GObject.cast(e.currentTarget);
this.setSelectionOnEvent(i, e);
this._scrollPane && this.scrollItemToViewOnClick && this._scrollPane.scrollToView(i, !0);
this.dispatchItemEvent(i, e);
i.data && this._node.emit(t.Event.CLICK_EVENT_THROW_POLARIS, i.data, i);
}
};
n.prototype.dispatchItemEvent = function(e, i) {
this._node.emit(t.Event.CLICK_ITEM, e, i);
};
n.prototype.setSelectionOnEvent = function(e, i) {
if (t.GRoot.inst.getIsButton(e) && this._selectionMode != t.ListSelectionMode.None) {
var n = !1, o = this.childIndexToItemIndex(this.getChildIndex(e));
if (this._selectionMode == t.ListSelectionMode.Single) {
if (!e.selected) {
this.clearSelectionExcept(e);
e.selected = !0;
}
} else if (i.isShiftDown) {
if (!e.selected) if (-1 != this._lastSelectedIndex) {
var r, s = Math.min(this._lastSelectedIndex, o), a = Math.max(this._lastSelectedIndex, o);
a = Math.min(a, this.numItems - 1);
if (this._virtual) for (r = s; r <= a; r++) {
var l = this._virtualItems[r];
t.GRoot.inst.getIsButton(l.obj) && (l.obj.selected = !0);
l.selected = !0;
} else for (r = s; r <= a; r++) {
var h = this.getChildAt(r);
t.GRoot.inst.getIsButton(h) && (h.selected = !0);
}
n = !0;
} else e.selected = !0;
} else if (i.isCtrlDown || this._selectionMode == t.ListSelectionMode.Multiple_SingleClick) e.selected = !e.selected; else if (e.selected) this.clearSelectionExcept(e); else {
this.clearSelectionExcept(e);
e.selected = !0;
}
n || (this._lastSelectedIndex = o);
e.selected && this.updateSelectionController(o);
}
};
n.prototype.resizeToFit = function(e, i) {
void 0 === e && (e = Number.POSITIVE_INFINITY);
void 0 === i && (i = 0);
this.ensureBoundsCorrect();
var n = this.numItems;
e > n && (e = n);
if (this._virtual) {
var o = Math.ceil(e / this._curLineItemCount);
this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal ? this.viewHeight = o * this._itemSize.height + Math.max(0, o - 1) * this._lineGap : this.viewWidth = o * this._itemSize.width + Math.max(0, o - 1) * this._columnGap;
} else if (0 == e) this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal ? this.viewHeight = i : this.viewWidth = i; else {
for (var r = e - 1, s = null; r >= 0; ) {
s = this.getChildAt(r);
if (!this.foldInvisibleItems || s.visible) break;
r--;
}
if (r < 0) this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal ? this.viewHeight = i : this.viewWidth = i; else {
var a = 0;
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal) {
(a = s.y + s.height) < i && (a = i);
this.viewHeight = a;
} else {
(a = s.x + s.width) < i && (a = i);
this.viewWidth = a;
}
}
}
};
n.prototype.getMaxItemWidth = function() {
for (var t = this._children.length, e = 0, i = 0; i < t; i++) {
var n = this.getChildAt(i);
n.width > e && (e = n.width);
}
return e;
};
n.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this.setBoundsChangedFlag();
this._virtual && this.setVirtualListChangedFlag(!0);
};
n.prototype.handleControllerChanged = function(t) {
e.prototype.handleControllerChanged.call(this, t);
this._selectionController == t && (this.selectedIndex = t.selectedIndex);
};
n.prototype.updateSelectionController = function(t) {
if (this._selectionController && !this._selectionController.changing && t < this._selectionController.pageCount) {
var e = this._selectionController;
this._selectionController = null;
e.selectedIndex = t;
this._selectionController = e;
}
};
n.prototype.getSnappingPosition = function(n, o, r) {
if (this._virtual) {
r = r || new cc.Vec2();
var s, a;
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal) {
s = o;
i = o;
a = this.getIndexOnPos1(!1);
o = i;
a < this._virtualItems.length && s - o > this._virtualItems[a].height / 2 && a < this._realNumItems && (o += this._virtualItems[a].height + this._lineGap);
} else if (this._layout == t.ListLayoutType.SingleRow || this._layout == t.ListLayoutType.FlowVertical) {
s = n;
i = n;
a = this.getIndexOnPos2(!1);
n = i;
a < this._virtualItems.length && s - n > this._virtualItems[a].width / 2 && a < this._realNumItems && (n += this._virtualItems[a].width + this._columnGap);
} else {
s = n;
i = n;
a = this.getIndexOnPos3(!1);
n = i;
a < this._virtualItems.length && s - n > this._virtualItems[a].width / 2 && a < this._realNumItems && (n += this._virtualItems[a].width + this._columnGap);
}
r.x = n;
r.y = o;
return r;
}
return e.prototype.getSnappingPosition.call(this, n, o, r);
};
n.prototype.scrollToView = function(e, i, n) {
if (this._virtual) {
if (0 == this._numItems) return;
this.checkVirtualList();
if (e >= this._virtualItems.length) throw "Invalid child index: " + e + ">" + this._virtualItems.length;
this._loop && (e = Math.floor(this._firstIndex / this._numItems) * this._numItems + e);
var o, r, s = this._virtualItems[e], a = 0;
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal) {
for (r = this._curLineItemCount - 1; r < e; r += this._curLineItemCount) a += this._virtualItems[r].height + this._lineGap;
o = new cc.Rect(0, a, this._itemSize.width, s.height);
} else if (this._layout == t.ListLayoutType.SingleRow || this._layout == t.ListLayoutType.FlowVertical) {
for (r = this._curLineItemCount - 1; r < e; r += this._curLineItemCount) a += this._virtualItems[r].width + this._columnGap;
o = new cc.Rect(a, 0, s.width, this._itemSize.height);
} else {
var l = e / (this._curLineItemCount * this._curLineItemCount2);
o = new cc.Rect(l * this.viewWidth + e % this._curLineItemCount * (s.width + this._columnGap), e / this._curLineItemCount % this._curLineItemCount2 * (s.height + this._lineGap), s.width, s.height);
}
this._scrollPane && this._scrollPane.scrollToView(o, i, n);
} else {
var h = this.getChildAt(e);
h && (this._scrollPane ? this._scrollPane.scrollToView(h, i, n) : this.parent && this.parent.scrollPane && this.parent.scrollPane.scrollToView(h, i, n));
}
};
n.prototype.getFirstChildInView = function() {
return this.childIndexToItemIndex(e.prototype.getFirstChildInView.call(this));
};
n.prototype.childIndexToItemIndex = function(e) {
if (!this._virtual) return e;
if (this._layout == t.ListLayoutType.Pagination) {
for (var i = this._firstIndex; i < this._realNumItems; i++) if (this._virtualItems[i].obj && --e < 0) return i;
return e;
}
e += this._firstIndex;
this._loop && this._numItems > 0 && (e %= this._numItems);
return e;
};
n.prototype.itemIndexToChildIndex = function(e) {
if (!this._virtual) return e;
if (this._layout == t.ListLayoutType.Pagination) return this.getChildIndex(this._virtualItems[e].obj);
if (this._loop && this._numItems > 0) {
var i = this._firstIndex % this._numItems;
e >= i ? e -= i : e = this._numItems - i + e;
} else e -= this._firstIndex;
return e;
};
n.prototype.setVirtual = function() {
this._setVirtual(!1);
};
n.prototype.setVirtualAndLoop = function() {
this._setVirtual(!0);
};
n.prototype._setVirtual = function(e) {
if (!this._virtual) {
if (!this._scrollPane) throw "Virtual list must be scrollable!";
if (e) {
if (this._layout == t.ListLayoutType.FlowHorizontal || this._layout == t.ListLayoutType.FlowVertical) throw "Loop list is not supported for FlowHorizontal or FlowVertical layout!";
this._scrollPane.bouncebackEffect = !1;
}
this._virtual = !0;
this._loop = e;
this._virtualItems = new Array();
this.removeChildrenToPool();
if (null == this._itemSize) {
this._itemSize = new cc.Size(0, 0);
var i = this.getFromPool(null);
if (!i) throw "Virtual List must have a default list item resource.";
this._itemSize.width = i.width;
this._itemSize.height = i.height;
this.returnToPool(i);
}
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal) {
this._scrollPane.scrollStep = this._itemSize.height;
this._loop && (this._scrollPane._loop = 2);
} else {
this._scrollPane.scrollStep = this._itemSize.width;
this._loop && (this._scrollPane._loop = 1);
}
this._node.on(t.Event.SCROLL, this.__scrolled, this);
this.setVirtualListChangedFlag(!0);
}
};
Object.defineProperty(n.prototype, "numItems", {
get: function() {
return this._virtual ? this._numItems : this._children.length;
},
set: function(t) {
if (this._virtual) {
if (null == this.itemRenderer) throw "Set itemRenderer first!";
this._numItems = t;
this._loop ? this._realNumItems = 6 * this._numItems : this._realNumItems = this._numItems;
var e = this._virtualItems.length;
if (this._realNumItems > e) for (o = e; o < this._realNumItems; o++) {
var i = {
width: this._itemSize.width,
height: this._itemSize.height,
updateFlag: 0
};
this._virtualItems.push(i);
} else for (o = this._realNumItems; o < e; o++) this._virtualItems[o].selected = !1;
0 != this._virtualListChanged && this._partner.unschedule(this._refreshVirtualList);
this._refreshVirtualList();
} else {
var n = this._children.length;
if (t > n) for (var o = n; o < t; o++) null == this.itemProvider ? this.addItemFromPool() : this.addItemFromPool(this.itemProvider(o)); else this.removeChildrenToPool(t, n);
if (null != this.itemRenderer) for (o = 0; o < t; o++) this.itemRenderer(o, this.getChildAt(o));
}
},
enumerable: !1,
configurable: !0
});
n.prototype.refreshVirtualList = function() {
this.setVirtualListChangedFlag(!1);
};
n.prototype.checkVirtualList = function() {
if (0 != this._virtualListChanged) {
this._refreshVirtualList();
this._partner.unschedule(this._refreshVirtualList);
}
};
n.prototype.setVirtualListChangedFlag = function(t) {
t ? this._virtualListChanged = 2 : 0 == this._virtualListChanged && (this._virtualListChanged = 1);
this._partner.callLater(this._refreshVirtualList);
};
n.prototype._refreshVirtualList = function(e) {
if (isNaN(e)) {
var i = 2 == this._virtualListChanged;
this._virtualListChanged = 0;
this._eventLocked = !0;
if (i) if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.SingleRow) this._curLineItemCount = 1; else if (this._layout == t.ListLayoutType.FlowHorizontal) if (this._columnCount > 0) this._curLineItemCount = this._columnCount; else {
this._curLineItemCount = Math.floor((this._scrollPane.viewWidth + this._columnGap) / (this._itemSize.width + this._columnGap));
this._curLineItemCount <= 0 && (this._curLineItemCount = 1);
} else if (this._layout == t.ListLayoutType.FlowVertical) if (this._lineCount > 0) this._curLineItemCount = this._lineCount; else {
this._curLineItemCount = Math.floor((this._scrollPane.viewHeight + this._lineGap) / (this._itemSize.height + this._lineGap));
this._curLineItemCount <= 0 && (this._curLineItemCount = 1);
} else {
if (this._columnCount > 0) this._curLineItemCount = this._columnCount; else {
this._curLineItemCount = Math.floor((this._scrollPane.viewWidth + this._columnGap) / (this._itemSize.width + this._columnGap));
this._curLineItemCount <= 0 && (this._curLineItemCount = 1);
}
if (this._lineCount > 0) this._curLineItemCount2 = this._lineCount; else {
this._curLineItemCount2 = Math.floor((this._scrollPane.viewHeight + this._lineGap) / (this._itemSize.height + this._lineGap));
this._curLineItemCount2 <= 0 && (this._curLineItemCount2 = 1);
}
}
var n = 0, o = 0;
if (this._realNumItems > 0) {
var r, s = Math.ceil(this._realNumItems / this._curLineItemCount) * this._curLineItemCount, a = Math.min(this._curLineItemCount, this._realNumItems);
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal) {
for (r = 0; r < s; r += this._curLineItemCount) n += this._virtualItems[r].height + this._lineGap;
n > 0 && (n -= this._lineGap);
if (this._autoResizeItem) o = this._scrollPane.viewWidth; else {
for (r = 0; r < a; r++) o += this._virtualItems[r].width + this._columnGap;
o > 0 && (o -= this._columnGap);
}
} else if (this._layout == t.ListLayoutType.SingleRow || this._layout == t.ListLayoutType.FlowVertical) {
for (r = 0; r < s; r += this._curLineItemCount) o += this._virtualItems[r].width + this._columnGap;
o > 0 && (o -= this._columnGap);
if (this._autoResizeItem) n = this._scrollPane.viewHeight; else {
for (r = 0; r < a; r++) n += this._virtualItems[r].height + this._lineGap;
n > 0 && (n -= this._lineGap);
}
} else {
o = Math.ceil(s / (this._curLineItemCount * this._curLineItemCount2)) * this.viewWidth;
n = this.viewHeight;
}
}
this.handleAlign(o, n);
this._scrollPane.setContentSize(o, n);
this._eventLocked = !1;
this.handleScroll(!0);
} else this.node.$gobj._refreshVirtualList();
};
n.prototype.__scrolled = function() {
this.handleScroll(!1);
};
n.prototype.getIndexOnPos1 = function(t) {
if (this._realNumItems < this._curLineItemCount) {
i = 0;
return 0;
}
var e, n, o;
if (this.numChildren > 0 && !t) {
if ((n = this.getChildAt(0).y) > i) {
for (e = this._firstIndex - this._curLineItemCount; e >= 0; e -= this._curLineItemCount) if ((n -= this._virtualItems[e].height + this._lineGap) <= i) {
i = n;
return e;
}
i = 0;
return 0;
}
for (e = this._firstIndex; e < this._realNumItems; e += this._curLineItemCount) {
if ((o = n + this._virtualItems[e].height + this._lineGap) > i) {
i = n;
return e;
}
n = o;
}
i = n;
return this._realNumItems - this._curLineItemCount;
}
n = 0;
for (e = 0; e < this._realNumItems; e += this._curLineItemCount) {
if ((o = n + this._virtualItems[e].height + this._lineGap) > i) {
i = n;
return e;
}
n = o;
}
i = n;
return this._realNumItems - this._curLineItemCount;
};
n.prototype.getIndexOnPos2 = function(t) {
if (this._realNumItems < this._curLineItemCount) {
i = 0;
return 0;
}
var e, n, o;
if (this.numChildren > 0 && !t) {
if ((n = this.getChildAt(0).x) > i) {
for (e = this._firstIndex - this._curLineItemCount; e >= 0; e -= this._curLineItemCount) if ((n -= this._virtualItems[e].width + this._columnGap) <= i) {
i = n;
return e;
}
i = 0;
return 0;
}
for (e = this._firstIndex; e < this._realNumItems; e += this._curLineItemCount) {
if ((o = n + this._virtualItems[e].width + this._columnGap) > i) {
i = n;
return e;
}
n = o;
}
i = n;
return this._realNumItems - this._curLineItemCount;
}
n = 0;
for (e = 0; e < this._realNumItems; e += this._curLineItemCount) {
if ((o = n + this._virtualItems[e].width + this._columnGap) > i) {
i = n;
return e;
}
n = o;
}
i = n;
return this._realNumItems - this._curLineItemCount;
};
n.prototype.getIndexOnPos3 = function() {
if (this._realNumItems < this._curLineItemCount) {
i = 0;
return 0;
}
var t, e, n = this.viewWidth, o = Math.floor(i / n), r = o * this._curLineItemCount * this._curLineItemCount2, s = o * n;
for (t = 0; t < this._curLineItemCount; t++) {
if ((e = s + this._virtualItems[r + t].width + this._columnGap) > i) {
i = s;
return r + t;
}
s = e;
}
i = s;
return r + this._curLineItemCount - 1;
};
n.prototype.handleScroll = function(e) {
if (!this._eventLocked) {
if (this._layout == t.ListLayoutType.SingleColumn || this._layout == t.ListLayoutType.FlowHorizontal) {
for (var i = 0; this.handleScroll1(e); ) {
e = !1;
if (++i > 20) {
console.log("FairyGUI: list will never be filled as the item renderer function always returns a different size.");
break;
}
}
this.handleArchOrder1();
} else if (this._layout == t.ListLayoutType.SingleRow || this._layout == t.ListLayoutType.FlowVertical) {
i = 0;
for (;this.handleScroll2(e); ) {
e = !1;
if (++i > 20) {
console.log("FairyGUI: list will never be filled as the item renderer function always returns a different size.");
break;
}
}
this.handleArchOrder2();
} else this.handleScroll3(e);
this._boundsChanged = !1;
}
};
n.prototype.handleScroll1 = function(e) {
var n = this._scrollPane.scrollingPosY, o = n + this._scrollPane.viewHeight, r = o == this._scrollPane.contentHeight;
i = n;
var s = this.getIndexOnPos1(e);
n = i;
if (s == this._firstIndex && !e) return !1;
var a = this._firstIndex;
this._firstIndex = s;
var l, h, c, u, p, d = s, f = a > s, _ = this.numChildren, g = a + _ - 1, y = f ? g : a, m = 0, v = n, b = 0, w = 0, S = this._defaultItem, I = (this._scrollPane.viewWidth - this._columnGap * (this._curLineItemCount - 1)) / this._curLineItemCount;
this.itemInfoVer++;
for (;d < this._realNumItems && (r || v < o); ) {
if (!(h = this._virtualItems[d]).obj || e) {
if (null != this.itemProvider) {
null == (S = this.itemProvider(d % this._numItems)) && (S = this._defaultItem);
S = t.UIPackage.normalizeURL(S);
}
if (h.obj && h.obj.resourceURL != S) {
t.GRoot.inst.getIsButton(h.obj) && (h.selected = h.obj.selected);
this.removeChildToPool(h.obj);
h.obj = null;
}
}
if (h.obj) l = e; else {
if (f) {
for (p = y; p >= a; p--) if ((c = this._virtualItems[p]).obj && c.updateFlag != this.itemInfoVer && c.obj.resourceURL == S) {
t.GRoot.inst.getIsButton(c.obj) && (c.selected = c.obj.selected);
h.obj = c.obj;
c.obj = null;
p == y && y--;
break;
}
} else for (p = y; p <= g; p++) if ((c = this._virtualItems[p]).obj && c.updateFlag != this.itemInfoVer && c.obj.resourceURL == S) {
t.GRoot.inst.getIsButton(c.obj) && (c.selected = c.obj.selected);
h.obj = c.obj;
c.obj = null;
p == y && y++;
break;
}
if (h.obj) this.setChildIndex(h.obj, f ? d - s : this.numChildren); else {
h.obj = this._pool.getObject(S);
f ? this.addChildAt(h.obj, d - s) : this.addChild(h.obj);
}
t.GRoot.inst.getIsButton(h.obj) && (h.obj.selected = h.selected);
l = !0;
}
if (l) {
this._autoResizeItem && (this._layout == t.ListLayoutType.SingleColumn || this._columnCount > 0) && h.obj.setSize(I, h.obj.height, !0);
this.itemRenderer(d % this._numItems, h.obj);
if (d % this._curLineItemCount == 0) {
b += Math.ceil(h.obj.height) - h.height;
d == s && a > s && (w = Math.ceil(h.obj.height) - h.height);
}
h.width = Math.ceil(h.obj.width);
h.height = Math.ceil(h.obj.height);
}
h.updateFlag = this.itemInfoVer;
h.obj.setPosition(m, v);
d == s && (o += h.height);
m += h.width + this._columnGap;
if (d % this._curLineItemCount == this._curLineItemCount - 1) {
m = 0;
v += h.height + this._lineGap;
}
d++;
}
for (u = 0; u < _; u++) if ((h = this._virtualItems[a + u]).updateFlag != this.itemInfoVer && h.obj) {
t.GRoot.inst.getIsButton(h.obj) && (h.selected = h.obj.selected);
this.removeChildToPool(h.obj);
h.obj = null;
}
_ = this._children.length;
for (u = 0; u < _; u++) {
var C = this._virtualItems[s + u].obj;
this._children[u] != C && this.setChildIndex(C, u);
}
0 == b && 0 == w || this._scrollPane.changeContentSizeOnScrolling(0, b, 0, w);
return d > 0 && this.numChildren > 0 && this._container.y <= 0 && this.getChildAt(0).y > -this._container.y;
};
n.prototype.handleScroll2 = function(e) {
var n = this._scrollPane.scrollingPosX, o = n + this._scrollPane.viewWidth, r = n == this._scrollPane.contentWidth;
i = n;
var s = this.getIndexOnPos2(e);
n = i;
if (s == this._firstIndex && !e) return !1;
var a = this._firstIndex;
this._firstIndex = s;
var l, h, c, u, p, d = s, f = a > s, _ = this.numChildren, g = a + _ - 1, y = f ? g : a, m = n, v = 0, b = 0, w = 0, S = this._defaultItem, I = (this._scrollPane.viewHeight - this._lineGap * (this._curLineItemCount - 1)) / this._curLineItemCount;
this.itemInfoVer++;
for (;d < this._realNumItems && (r || m < o); ) {
if (!(h = this._virtualItems[d]).obj || e) {
if (null != this.itemProvider) {
null == (S = this.itemProvider(d % this._numItems)) && (S = this._defaultItem);
S = t.UIPackage.normalizeURL(S);
}
if (h.obj && h.obj.resourceURL != S) {
t.GRoot.inst.getIsButton(h.obj) && (h.selected = h.obj.selected);
this.removeChildToPool(h.obj);
h.obj = null;
}
}
if (h.obj) l = e; else {
if (f) {
for (p = y; p >= a; p--) if ((c = this._virtualItems[p]).obj && c.updateFlag != this.itemInfoVer && c.obj.resourceURL == S) {
t.GRoot.inst.getIsButton(c.obj) && (c.selected = c.obj.selected);
h.obj = c.obj;
c.obj = null;
p == y && y--;
break;
}
} else for (p = y; p <= g; p++) if ((c = this._virtualItems[p]).obj && c.updateFlag != this.itemInfoVer && c.obj.resourceURL == S) {
t.GRoot.inst.getIsButton(c.obj) && (c.selected = c.obj.selected);
h.obj = c.obj;
c.obj = null;
p == y && y++;
break;
}
if (h.obj) this.setChildIndex(h.obj, f ? d - s : this.numChildren); else {
h.obj = this._pool.getObject(S);
f ? this.addChildAt(h.obj, d - s) : this.addChild(h.obj);
}
t.GRoot.inst.getIsButton(h.obj) && (h.obj.selected = h.selected);
l = !0;
}
if (l) {
this._autoResizeItem && (this._layout == t.ListLayoutType.SingleRow || this._lineCount > 0) && h.obj.setSize(h.obj.width, I, !0);
this.itemRenderer(d % this._numItems, h.obj);
if (d % this._curLineItemCount == 0) {
b += Math.ceil(h.obj.width) - h.width;
d == s && a > s && (w = Math.ceil(h.obj.width) - h.width);
}
h.width = Math.ceil(h.obj.width);
h.height = Math.ceil(h.obj.height);
}
h.updateFlag = this.itemInfoVer;
h.obj.setPosition(m, v);
d == s && (o += h.width);
v += h.height + this._lineGap;
if (d % this._curLineItemCount == this._curLineItemCount - 1) {
v = 0;
m += h.width + this._columnGap;
}
d++;
}
for (u = 0; u < _; u++) if ((h = this._virtualItems[a + u]).updateFlag != this.itemInfoVer && h.obj) {
t.GRoot.inst.getIsButton(h.obj) && (h.selected = h.obj.selected);
this.removeChildToPool(h.obj);
h.obj = null;
}
_ = this._children.length;
for (u = 0; u < _; u++) {
var C = this._virtualItems[s + u].obj;
this._children[u] != C && this.setChildIndex(C, u);
}
0 == b && 0 == w || this._scrollPane.changeContentSizeOnScrolling(b, 0, w, 0);
return d > 0 && this.numChildren > 0 && this._container.x <= 0 && this.getChildAt(0).x > -this._container.x;
};
n.prototype.handleScroll3 = function(e) {
var n = this._scrollPane.scrollingPosX;
i = n;
var o = this.getIndexOnPos3(e);
n = i;
if (o != this._firstIndex || e) {
var r = this._firstIndex;
this._firstIndex = o;
var s, a, l, h, c, u = r, p = this._virtualItems.length, d = this._curLineItemCount * this._curLineItemCount2, f = o % this._curLineItemCount, _ = this.viewWidth, g = Math.floor(o / d) * d, y = g + 2 * d, m = this._defaultItem, v = (this._scrollPane.viewWidth - this._columnGap * (this._curLineItemCount - 1)) / this._curLineItemCount, b = (this._scrollPane.viewHeight - this._lineGap * (this._curLineItemCount2 - 1)) / this._curLineItemCount2;
this.itemInfoVer++;
for (a = g; a < y; a++) if (!(a >= this._realNumItems)) {
c = a % this._curLineItemCount;
if (a - g < d) {
if (c < f) continue;
} else if (c > f) continue;
(l = this._virtualItems[a]).updateFlag = this.itemInfoVer;
}
var w = null, S = 0;
for (a = g; a < y; a++) if (!(a >= this._realNumItems) && (l = this._virtualItems[a]).updateFlag == this.itemInfoVer) {
if (l.obj) {
s = e;
S = -1;
w = l.obj;
} else {
for (;u < p; ) {
if ((h = this._virtualItems[u]).obj && h.updateFlag != this.itemInfoVer) {
t.GRoot.inst.getIsButton(h.obj) && (h.selected = h.obj.selected);
l.obj = h.obj;
h.obj = null;
break;
}
u++;
}
-1 == S && (S = this.getChildIndex(w) + 1);
if (l.obj) S = this.setChildIndexBefore(l.obj, S); else {
if (null != this.itemProvider) {
null == (m = this.itemProvider(a % this._numItems)) && (m = this._defaultItem);
m = t.UIPackage.normalizeURL(m);
}
l.obj = this._pool.getObject(m);
this.addChildAt(l.obj, S);
}
S++;
t.GRoot.inst.getIsButton(l.obj) && (l.obj.selected = l.selected);
s = !0;
}
if (s) {
this._autoResizeItem && (this._curLineItemCount == this._columnCount && this._curLineItemCount2 == this._lineCount ? l.obj.setSize(v, b, !0) : this._curLineItemCount == this._columnCount ? l.obj.setSize(v, l.obj.height, !0) : this._curLineItemCount2 == this._lineCount && l.obj.setSize(l.obj.width, b, !0));
this.itemRenderer(a % this._numItems, l.obj);
l.width = Math.ceil(l.obj.width);
l.height = Math.ceil(l.obj.height);
}
}
var I = g / d * _, C = I, P = 0, x = 0;
for (a = g; a < y; a++) if (!(a >= this._realNumItems)) {
(l = this._virtualItems[a]).updateFlag == this.itemInfoVer && l.obj.setPosition(C, P);
l.height > x && (x = l.height);
if (a % this._curLineItemCount == this._curLineItemCount - 1) {
C = I;
P += x + this._lineGap;
x = 0;
if (a == g + d - 1) {
C = I += _;
P = 0;
}
} else C += l.width + this._columnGap;
}
for (a = u; a < p; a++) if ((l = this._virtualItems[a]).updateFlag != this.itemInfoVer && l.obj) {
t.GRoot.inst.getIsButton(l.obj) && (l.selected = l.obj.selected);
this.removeChildToPool(l.obj);
l.obj = null;
}
}
};
n.prototype.handleArchOrder1 = function() {
if (this._childrenRenderOrder == t.ChildrenRenderOrder.Arch) {
for (var e = this._scrollPane.posY + this.viewHeight / 2, i = Number.POSITIVE_INFINITY, n = 0, o = 0, r = this.numChildren, s = 0; s < r; s++) {
var a = this.getChildAt(s);
if ((!this.foldInvisibleItems || a.visible) && (n = Math.abs(e - a.y - a.height / 2)) < i) {
i = n;
o = s;
}
}
this.apexIndex = o;
}
};
n.prototype.handleArchOrder2 = function() {
if (this._childrenRenderOrder == t.ChildrenRenderOrder.Arch) {
for (var e = this._scrollPane.posX + this.viewWidth / 2, i = Number.POSITIVE_INFINITY, n = 0, o = 0, r = this.numChildren, s = 0; s < r; s++) {
var a = this.getChildAt(s);
if ((!this.foldInvisibleItems || a.visible) && (n = Math.abs(e - a.x - a.width / 2)) < i) {
i = n;
o = s;
}
}
this.apexIndex = o;
}
};
n.prototype.handleAlign = function(e, i) {
var n = 0, o = 0;
i < this.viewHeight && (this._verticalAlign == t.VertAlignType.Middle ? o = Math.floor((this.viewHeight - i) / 2) : this._verticalAlign == t.VertAlignType.Bottom && (o = this.viewHeight - i));
e < this.viewWidth && (this._align == t.AlignType.Center ? n = Math.floor((this.viewWidth - e) / 2) : this._align == t.AlignType.Right && (n = this.viewWidth - e));
if (n != this._alignOffset.x || o != this._alignOffset.y) {
this._alignOffset.x = n;
this._alignOffset.y = o;
this._scrollPane ? this._scrollPane.adjustMaskContainer() : this._container.setPosition(this._pivotCorrectX + this._alignOffset.x, this._pivotCorrectY - this._alignOffset.y);
}
};
n.prototype.updateBounds = function() {
if (!this._virtual) {
var e, i, n = 0, o = 0, r = 0, s = 0, a = 0, l = 0, h = 0, c = 0, u = 0, p = this._children.length, d = this.viewWidth, f = this.viewHeight, _ = 0, g = 0, y = 0;
if (this._layout == t.ListLayoutType.SingleColumn) {
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
0 != o && (o += this._lineGap);
i.y = o;
this._autoResizeItem && i.setSize(d, i.height, !0);
o += Math.ceil(i.height);
i.width > r && (r = i.width);
}
}
if ((l = o) <= f && this._autoResizeItem && this._scrollPane && this._scrollPane._displayInDemand && this._scrollPane.vtScrollBar) {
d += this._scrollPane.vtScrollBar.width;
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
i.setSize(d, i.height, !0);
i.width > r && (r = i.width);
}
}
}
a = Math.ceil(r);
} else if (this._layout == t.ListLayoutType.SingleRow) {
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
0 != n && (n += this._columnGap);
i.x = n;
this._autoResizeItem && i.setSize(i.width, f, !0);
n += Math.ceil(i.width);
i.height > s && (s = i.height);
}
}
if ((a = n) <= d && this._autoResizeItem && this._scrollPane && this._scrollPane._displayInDemand && this._scrollPane.hzScrollBar) {
f += this._scrollPane.hzScrollBar.height;
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
i.setSize(i.width, f, !0);
i.height > s && (s = i.height);
}
}
}
l = Math.ceil(s);
} else if (this._layout == t.ListLayoutType.FlowHorizontal) if (this._autoResizeItem && this._columnCount > 0) {
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
_ += i.sourceWidth;
if (++h == this._columnCount || e == p - 1) {
y = (d - _ - (h - 1) * this._columnGap) / _;
n = 0;
for (h = g; h <= e; h++) {
i = this.getChildAt(h);
if (!this.foldInvisibleItems || i.visible) {
i.setPosition(n, o);
if (h < e) {
i.setSize(i.sourceWidth + Math.round(i.sourceWidth * y), i.height, !0);
n += Math.ceil(i.width) + this._columnGap;
} else i.setSize(d - n, i.height, !0);
i.height > s && (s = i.height);
}
}
o += Math.ceil(s) + this._lineGap;
s = 0;
h = 0;
g = e + 1;
_ = 0;
}
}
}
l = o + Math.ceil(s);
a = d;
} else {
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
0 != n && (n += this._columnGap);
if (0 != this._columnCount && h >= this._columnCount || 0 == this._columnCount && n + i.width > d && 0 != s) {
n = 0;
o += Math.ceil(s) + this._lineGap;
s = 0;
h = 0;
}
i.setPosition(n, o);
(n += Math.ceil(i.width)) > r && (r = n);
i.height > s && (s = i.height);
h++;
}
}
l = o + Math.ceil(s);
a = Math.ceil(r);
} else if (this._layout == t.ListLayoutType.FlowVertical) if (this._autoResizeItem && this._lineCount > 0) {
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
_ += i.sourceHeight;
if (++h == this._lineCount || e == p - 1) {
y = (f - _ - (h - 1) * this._lineGap) / _;
o = 0;
for (h = g; h <= e; h++) {
i = this.getChildAt(h);
if (!this.foldInvisibleItems || i.visible) {
i.setPosition(n, o);
if (h < e) {
i.setSize(i.width, i.sourceHeight + Math.round(i.sourceHeight * y), !0);
o += Math.ceil(i.height) + this._lineGap;
} else i.setSize(i.width, f - o, !0);
i.width > r && (r = i.width);
}
}
n += Math.ceil(r) + this._columnGap;
r = 0;
h = 0;
g = e + 1;
_ = 0;
}
}
}
a = n + Math.ceil(r);
l = f;
} else {
for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
0 != o && (o += this._lineGap);
if (0 != this._lineCount && h >= this._lineCount || 0 == this._lineCount && o + i.height > f && 0 != r) {
o = 0;
n += Math.ceil(r) + this._columnGap;
r = 0;
h = 0;
}
i.setPosition(n, o);
(o += Math.ceil(i.height)) > s && (s = o);
i.width > r && (r = i.width);
h++;
}
}
a = n + Math.ceil(r);
l = Math.ceil(s);
} else {
var m;
this._autoResizeItem && this._lineCount > 0 && (m = Math.floor((f - (this._lineCount - 1) * this._lineGap) / this._lineCount));
if (this._autoResizeItem && this._columnCount > 0) for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
if (0 == h && (0 != this._lineCount && u >= this._lineCount || 0 == this._lineCount && o + (this._lineCount > 0 ? m : i.height) > f)) {
c++;
o = 0;
u = 0;
}
_ += i.sourceWidth;
if (++h == this._columnCount || e == p - 1) {
y = (d - _ - (h - 1) * this._columnGap) / _;
n = 0;
for (h = g; h <= e; h++) {
i = this.getChildAt(h);
if (!this.foldInvisibleItems || i.visible) {
i.setPosition(c * d + n, o);
if (h < e) {
i.setSize(i.sourceWidth + Math.round(i.sourceWidth * y), this._lineCount > 0 ? m : i.height, !0);
n += Math.ceil(i.width) + this._columnGap;
} else i.setSize(d - n, this._lineCount > 0 ? m : i.height, !0);
i.height > s && (s = i.height);
}
}
o += Math.ceil(s) + this._lineGap;
s = 0;
h = 0;
g = e + 1;
_ = 0;
u++;
}
}
} else for (e = 0; e < p; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
0 != n && (n += this._columnGap);
this._autoResizeItem && this._lineCount > 0 && i.setSize(i.width, m, !0);
if (0 != this._columnCount && h >= this._columnCount || 0 == this._columnCount && n + i.width > d && 0 != s) {
n = 0;
o += Math.ceil(s) + this._lineGap;
s = 0;
h = 0;
u++;
if (0 != this._lineCount && u >= this._lineCount || 0 == this._lineCount && o + i.height > f && 0 != r) {
c++;
o = 0;
u = 0;
}
}
i.setPosition(c * d + n, o);
(n += Math.ceil(i.width)) > r && (r = n);
i.height > s && (s = i.height);
h++;
}
}
l = c > 0 ? f : o + Math.ceil(s);
a = (c + 1) * d;
}
this.handleAlign(a, l);
this.setBounds(0, 0, a, l);
}
};
n.prototype.setup_beforeAdd = function(i, n) {
e.prototype.setup_beforeAdd.call(this, i, n);
i.seek(n, 5);
this._layout = i.readByte();
this._selectionMode = i.readByte();
this._align = i.readByte();
this._verticalAlign = i.readByte();
this._lineGap = i.readShort();
this._columnGap = i.readShort();
this._lineCount = i.readShort();
this._columnCount = i.readShort();
this._autoResizeItem = i.readBool();
this._childrenRenderOrder = i.readByte();
this._apexIndex = i.readShort();
if (i.readBool()) {
this._margin.top = i.readInt();
this._margin.bottom = i.readInt();
this._margin.left = i.readInt();
this._margin.right = i.readInt();
}
var o = i.readByte();
if (o == t.OverflowType.Scroll) {
var r = i.position;
i.seek(n, 7);
this.setupScroll(i);
i.position = r;
} else this.setupOverflow(o);
i.readBool() && i.skip(8);
if (i.version >= 2) {
this.scrollItemToViewOnClick = i.readBool();
this.foldInvisibleItems = i.readBool();
}
i.seek(n, 8);
this._defaultItem = i.readS();
this.readItems(i);
};
n.prototype.readItems = function(t) {
var e, i, n, o;
e = t.readShort();
for (i = 0; i < e; i++) {
n = t.readShort();
n += t.position;
if (null != (o = t.readS()) || (o = this._defaultItem)) {
var r = this.getFromPool(o);
if (r) {
this.addChild(r);
this.setupItem(t, r);
}
t.position = n;
} else t.position = n;
}
};
n.prototype.setupItem = function(e, i) {
var n, o, r;
null != (n = e.readS()) && (i.text = n);
null != (n = e.readS()) && t.GRoot.inst.getIsButton(i) && (i.selectedTitle = n);
null != (n = e.readS()) && (i.icon = n);
null != (n = e.readS()) && t.GRoot.inst.getIsButton(i) && (i.selectedIcon = n);
null != (n = e.readS()) && (i.name = n);
if (i instanceof t.GComponent) {
o = e.readShort();
for (r = 0; r < o; r++) {
var s = i.getController(e.readS());
n = e.readS();
s && (s.selectedPageId = n);
}
if (e.version >= 2) {
o = e.readShort();
for (r = 0; r < o; r++) {
var a = e.readS(), l = e.readShort(), h = e.readS(), c = i.getChildByPath(a);
c && c.setProp(l, h);
}
}
}
};
n.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
t.seek(i, 6);
var n = t.readShort();
-1 != n && (this._selectionController = this.parent.getControllerAt(n));
};
return n;
}(t.GComponent);
t.GList = e;
var i = 0;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i.foldInvisibleItems = !1;
i._lineCount = 0;
i._columnCount = 0;
i._lineGap = 0;
i._columnGap = 0;
i._isNeedUpdateBounds = !0;
i._lastSelectedIndex = 0;
i._node.name = "GListLayout";
i._trackBounds = !0;
i._layout = t.ListLayoutType.SingleColumn;
i._autoResizeItem = !0;
i._lastSelectedIndex = -1;
i._selectionMode = t.ListSelectionMode.Single;
i.opaque = !0;
i._align = t.AlignType.Left;
i._verticalAlign = t.VertAlignType.Top;
return i;
}
Object.defineProperty(i, "pool", {
get: function() {
this._pool || (this._pool = new t.GObjectPool());
return this._pool;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "_isRecoverAdd", {
get: function() {
return this._layout == t.ListLayoutType.SingleRow && this._align == t.AlignType.Right || this._layout == t.ListLayoutType.SingleColumn && this._verticalAlign == t.VertAlignType.Bottom;
},
enumerable: !1,
configurable: !0
});
i.prototype.dispose = function() {
e.prototype.dispose.call(this);
};
Object.defineProperty(i.prototype, "layout", {
get: function() {
return this._layout;
},
set: function(e) {
if (e != t.ListLayoutType.SingleColumn && e != t.ListLayoutType.SingleRow) throw 'GListLayout layout type is only "单行横排" or "单行竖排"';
if (this._layout != e) {
this._layout = e;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "lineCount", {
get: function() {
return this._lineCount;
},
set: function(t) {
if (this._lineCount != t) {
this._lineCount = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "columnCount", {
get: function() {
return this._columnCount;
},
set: function(t) {
if (this._columnCount != t) {
this._columnCount = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "lineGap", {
get: function() {
return this._lineGap;
},
set: function(t) {
if (this._lineGap != t) {
this._lineGap = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "columnGap", {
get: function() {
return this._columnGap;
},
set: function(t) {
if (this._columnGap != t) {
this._columnGap = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "align", {
get: function() {
return this._align;
},
set: function(t) {
if (this._align != t) {
this._align = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "verticalAlign", {
get: function() {
return this._verticalAlign;
},
set: function(t) {
if (this._verticalAlign != t) {
this._verticalAlign = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "defaultItem", {
get: function() {
return this._defaultItem;
},
set: function(e) {
this._defaultItem = t.UIPackage.normalizeURL(e);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "autoResizeItem", {
get: function() {
return this._autoResizeItem;
},
set: function(t) {
if (this._autoResizeItem != t) {
this._autoResizeItem = t;
this.setBoundsChangedFlag();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selectionMode", {
get: function() {
return this._selectionMode;
},
set: function(t) {
this._selectionMode = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "selectionController", {
get: function() {
return this._selectionController;
},
set: function(t) {
this._selectionController = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "itemPool", {
get: function() {
return i.pool;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "isNowUpdate", {
get: function() {
return this._isNowUpdate && this.isReverse;
},
set: function(t) {
this._isNowUpdate = t;
this._isNeedUpdateBounds = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.getFromPool = function(t) {
t || (t = this._defaultItem);
var e = i.pool.getObject(t);
e && (e.visible = !0);
return e;
};
i.prototype.returnToPool = function(t) {
t.setPosition(0, 0);
i.pool.returnObject(t);
};
i.prototype.addChild = function(t) {
this.addChildAt(t, this._children.length);
return t;
};
i.prototype.addChildAt = function(i, n) {
this._isNeedUpdateBounds && (this._boundsChanged = !0);
e.prototype.addChildAt.call(this, i, this._isRecoverAdd ? this._children.length - n : n);
this._isNeedUpdateBounds && this.updateBounds();
if (t.GRoot.inst.getIsButton(i)) {
i.selected = !1;
i.changeStateOnClick = !1;
}
i.on(t.Event.CLICK, this.onClickItem, this);
return i;
};
i.prototype.addItem = function(e) {
e || (e = this._defaultItem);
return this.addChild(t.UIPackage.createObjectFromURL(e));
};
i.prototype.addItemFromPool = function(t) {
return this.addChild(this.getFromPool(t));
};
i.prototype.removeChildAt = function(i, n) {
this._isNowUpdate && (this._boundsChanged = !0);
var o = e.prototype.removeChildAt.call(this, i, n);
this._isNowUpdate && this.updateBounds();
n || o.off(t.Event.CLICK, this.onClickItem, this);
return o;
};
i.prototype.removeChildToPoolAt = function(t) {
this._isNowUpdate && (this._boundsChanged = !0);
var i = e.prototype.removeChildAt.call(this, t);
this._isNowUpdate && this.updateBounds();
this.returnToPool(i);
};
i.prototype.removeChildToPool = function(t) {
this._isNowUpdate && (this._boundsChanged = !0);
e.prototype.removeChild.call(this, t);
this._isNowUpdate && this.updateBounds();
this.returnToPool(t);
};
i.prototype.removeChildrenToPool = function(t, e) {
null == t && (t = 0);
null == e && (e = -1);
(e < 0 || e >= this._children.length) && (e = this._children.length - 1);
this._isNeedUpdateBounds = !1;
this._isNowUpdate && (this._boundsChanged = !0);
for (var i = t; i <= e; ++i) this.removeChildToPoolAt(t);
this._isNowUpdate && this.updateBounds();
this._isNeedUpdateBounds = this._isNowUpdate;
};
Object.defineProperty(i.prototype, "selectedIndex", {
get: function() {
var e, i = this._children.length;
for (e = 0; e < i; e++) {
var n = this._children[e];
if (t.GRoot.inst.getIsButton(n) && n.selected) return e;
}
return -1;
},
set: function(e) {
if (e >= 0 && e < this.numItems) {
this._selectionMode != t.ListSelectionMode.Single && this.clearSelection();
this.addSelection(e);
} else this.clearSelection();
},
enumerable: !1,
configurable: !0
});
i.prototype.getSelection = function(e) {
e || (e = new Array());
var i, n = this._children.length;
for (i = 0; i < n; i++) {
var o = this._children[i];
t.GRoot.inst.getIsButton(o) && o.selected && e.push(i);
}
return e;
};
i.prototype.addSelection = function(e) {
if (this._selectionMode != t.ListSelectionMode.None) {
this._selectionMode == t.ListSelectionMode.Single && this.clearSelection();
this._lastSelectedIndex = e;
var i;
i = this.getChildAt(e);
if (t.GRoot.inst.getIsButton(i) && !i.selected) {
i.selected = !0;
this.updateSelectionController(e);
}
}
};
i.prototype.removeSelection = function(e) {
if (this._selectionMode != t.ListSelectionMode.None) {
var i;
i = this.getChildAt(e);
t.GRoot.inst.getIsButton(i) && (i.selected = !1);
}
};
i.prototype.clearSelection = function() {
var e, i = this._children.length;
for (e = 0; e < i; e++) {
var n = this._children[e];
t.GRoot.inst.getIsButton(n) && (n.selected = !1);
}
};
i.prototype.clearSelectionExcept = function(e) {
var i, n = this._children.length;
for (i = 0; i < n; i++) {
var o = this._children[i];
t.GRoot.inst.getIsButton(o) && o != e && (o.selected = !1);
}
};
i.prototype.selectAll = function() {
var e, i = -1, n = this._children.length;
for (e = 0; e < n; e++) {
var o = this._children[e];
if (t.GRoot.inst.getIsButton(o) && !o.selected) {
o.selected = !0;
i = e;
}
}
-1 != i && this.updateSelectionController(i);
};
i.prototype.selectNone = function() {
this.clearSelection();
};
i.prototype.selectReverse = function() {
var e, i = -1, n = this._children.length;
for (e = 0; e < n; e++) {
var o = this._children[e];
if (t.GRoot.inst.getIsButton(o)) {
o.selected = !o.selected;
o.selected && (i = e);
}
}
-1 != i && this.updateSelectionController(i);
};
i.prototype.handleArrowKey = function(e) {
var i = this.selectedIndex;
if (-1 != i) switch (e) {
case 1:
if (this._layout == t.ListLayoutType.SingleColumn && --i >= 0) {
this.clearSelection();
this.addSelection(i);
}
break;

case 3:
if (this._layout == t.ListLayoutType.SingleRow && ++i < this._children.length) {
this.clearSelection();
this.addSelection(i);
}
break;

case 5:
if (this._layout == t.ListLayoutType.SingleColumn && ++i < this._children.length) {
this.clearSelection();
this.addSelection(i);
}
break;

case 7:
if (this._layout == t.ListLayoutType.SingleRow && --i >= 0) {
this.clearSelection();
this.addSelection(i);
}
}
};
i.prototype.onClickItem = function(e) {
var i = t.GObject.cast(e.currentTarget);
this.setSelectionOnEvent(i, e);
this.dispatchItemEvent(i, e);
};
i.prototype.dispatchItemEvent = function(e, i) {
this._node.emit(t.Event.CLICK_ITEM, e, i);
};
i.prototype.setSelectionOnEvent = function(e, i) {
if (t.GRoot.inst.getIsButton(l) && this._selectionMode != t.ListSelectionMode.None) {
var n = !1, o = this.childIndexToItemIndex(this.getChildIndex(e));
if (this._selectionMode == t.ListSelectionMode.Single) {
if (!e.selected) {
this.clearSelectionExcept(e);
e.selected = !0;
}
} else if (i.isShiftDown) {
if (!e.selected) if (-1 != this._lastSelectedIndex) {
var r, s = Math.min(this._lastSelectedIndex, o), a = Math.max(this._lastSelectedIndex, o);
a = Math.min(a, this.numItems - 1);
for (r = s; r <= a; r++) {
var l = this.getChildAt(r);
t.GRoot.inst.getIsButton(l) && (l.selected = !0);
}
n = !0;
} else e.selected = !0;
} else if (i.isCtrlDown || this._selectionMode == t.ListSelectionMode.Multiple_SingleClick) e.selected = !e.selected; else if (e.selected) this.clearSelectionExcept(e); else {
this.clearSelectionExcept(e);
e.selected = !0;
}
n || (this._lastSelectedIndex = o);
e.selected && this.updateSelectionController(o);
}
};
i.prototype.resizeToFit = function(e, i) {
void 0 === e && (e = Number.POSITIVE_INFINITY);
void 0 === i && (i = 0);
this.ensureBoundsCorrect();
var n = this.numItems;
e > n && (e = n);
if (0 == e) this._layout == t.ListLayoutType.SingleColumn ? this.viewHeight = i : this.viewWidth = i; else {
for (var o = e - 1, r = null; o >= 0; ) {
r = this.getChildAt(o);
if (!this.foldInvisibleItems || r.visible) break;
o--;
}
if (o < 0) this._layout == t.ListLayoutType.SingleColumn ? this.viewHeight = i : this.viewWidth = i; else {
var s = 0;
if (this._layout == t.ListLayoutType.SingleColumn) {
(s = r.y + r.height) < i && (s = i);
this.viewHeight = s;
} else {
(s = r.x + r.width) < i && (s = i);
this.viewWidth = s;
}
}
}
};
i.prototype.getMaxItemWidth = function() {
for (var t = this._children.length, e = 0, i = 0; i < t; i++) {
var n = this.getChildAt(i);
n.width > e && (e = n.width);
}
return e;
};
i.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this.setBoundsChangedFlag();
};
i.prototype.handleControllerChanged = function(t) {
e.prototype.handleControllerChanged.call(this, t);
this._selectionController == t && (this.selectedIndex = t.selectedIndex);
};
i.prototype.updateSelectionController = function(t) {
if (this._selectionController && !this._selectionController.changing && t < this._selectionController.pageCount) {
var e = this._selectionController;
this._selectionController = null;
e.selectedIndex = t;
this._selectionController = e;
}
};
i.prototype.getSnappingPosition = function(t, i, n) {
return e.prototype.getSnappingPosition.call(this, t, i, n);
};
i.prototype.getFirstChildInView = function() {
return this.childIndexToItemIndex(e.prototype.getFirstChildInView.call(this));
};
i.prototype.childIndexToItemIndex = function(t) {
return t;
};
i.prototype.itemIndexToChildIndex = function(t) {
return t;
};
Object.defineProperty(i.prototype, "numItems", {
get: function() {
return this._children.length;
},
set: function(e) {
var i = this._children.length;
this._layout == t.ListLayoutType.SingleRow && e > this._columnCount && this._columnCount > 0 ? e = this._columnCount : this._layout == t.ListLayoutType.SingleColumn && e > this._lineCount && this._lineCount > 0 && (e = this._lineCount);
if (e > i) {
this._isNeedUpdateBounds = !1;
this._isNowUpdate && (this._boundsChanged = !0);
for (var n = i; n < e; n++) null == this.itemProvider ? this.addItemFromPool() : this.addItemFromPool(this.itemProvider(n));
this._isNowUpdate && this.updateBounds();
this._isNeedUpdateBounds = this._isNowUpdate;
} else {
this._isNeedUpdateBounds = !1;
this._isNowUpdate && (this._boundsChanged = !0);
this.removeChildrenToPool(e, i);
this._isNowUpdate && this.updateBounds();
this._isNeedUpdateBounds = this._isNowUpdate;
}
if (null != this.itemRenderer) for (n = 0; n < e; n++) this.itemRenderer(n, this.getChildAt(n));
this.isReverse && this._partner.callLater(this.reverseCall.bind(this));
},
enumerable: !1,
configurable: !0
});
i.prototype.reverseCall = function() {
this.updateBounds();
for (var t = 0; t < this._children.length >> 1; t++) {
var e = this._children[t], i = this._children[this._children.length - t - 1];
if (e != i) {
var n = e.getPosition();
e.setPosition(i.x, i.y);
i.setPosition(n.x, n.y);
}
}
};
i.prototype.handleAlign = function(e, i) {
var n = 0, o = 0;
this._verticalAlign == t.VertAlignType.Middle ? o = Math.floor((this.viewHeight - i) / 2) : this._verticalAlign == t.VertAlignType.Bottom && (o = this.viewHeight - i);
this._align == t.AlignType.Center ? n = Math.floor((this.viewWidth - e) / 2) : this._align == t.AlignType.Right && (n = this.viewWidth - e);
if (n != this._alignOffset.x || o != this._alignOffset.y) {
this._alignOffset.x = n;
this._alignOffset.y = o;
this._container.setPosition(this._pivotCorrectX + this._alignOffset.x, this._pivotCorrectY - this._alignOffset.y);
}
};
i.prototype.updateBounds = function() {
var e, i, n = 0, o = 0, r = 0, s = 0, a = 0, l = 0, h = 0, c = this._children.length, u = this.viewWidth, p = this.viewHeight, d = 0;
if (this._layout == t.ListLayoutType.SingleRow) {
if (this._columnCount < c && this._columnCount > 0) {
this.removeChildrenToPool(this._columnCount);
c = this._columnCount;
}
if (this._autoResizeItem && this._columnCount > 0) {
for (e = 0; e < c; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
i.sourceWidth;
if (++h == this._columnCount || e == c - 1) {
this._columnGap;
n = 0;
for (h = d; h <= e; h++) {
i = this.getChildAt(h);
if (!this.foldInvisibleItems || i.visible) {
i.x = n;
i.height > s && (s = i.height);
}
}
o += Math.ceil(s) + this._lineGap;
s = 0;
h = 0;
d = e + 1;
0;
}
}
}
l = o + Math.ceil(s);
a = u;
} else {
for (e = 0; e < c; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
0 != n && (n += this._columnGap);
i.x = n;
(n += Math.ceil(i.width)) > r && (r = n);
i.height > s && (s = i.height);
h++;
}
}
l = o + Math.ceil(s);
a = Math.ceil(r);
}
} else if (this._layout == t.ListLayoutType.SingleColumn) {
if (this._lineCount < c && this._lineCount > 0) {
this.removeChildrenToPool(this._lineCount);
c = this._lineCount;
}
if (this._autoResizeItem && this._lineCount > 0) {
for (e = 0; e < c; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
i.sourceHeight;
if (++h == this._lineCount || e == c - 1) {
this._lineGap;
o = 0;
for (h = d; h <= e; h++) {
i = this.getChildAt(h);
if (!this.foldInvisibleItems || i.visible) {
i.y = o;
i.width > r && (r = i.width);
}
}
n += Math.ceil(r) + this._columnGap + i.x;
r = 0;
h = 0;
d = e + 1;
0;
}
}
}
a = n + Math.ceil(r);
l = p;
} else {
for (e = 0; e < c; e++) {
i = this.getChildAt(e);
if (!this.foldInvisibleItems || i.visible) {
0 != o && (o += this._lineGap);
i.y = o;
(o += Math.ceil(i.height)) > s && (s = o);
i.width > r && (r = i.width);
h++;
}
}
a = n + Math.ceil(r);
l = Math.ceil(s);
}
}
this.handleAlign(a, l);
this.setBounds(0, 0, a, l);
};
i.prototype.setup_beforeAdd = function(i, n) {
e.prototype.setup_beforeAdd.call(this, i, n);
i.seek(n, 5);
this._layout = i.readByte();
if (this._layout != t.ListLayoutType.SingleColumn && this._layout != t.ListLayoutType.SingleRow) throw 'GListLayout layout type is only "单行横排" or "单行竖排"';
this._selectionMode = i.readByte();
this._align = i.readByte();
this._verticalAlign = i.readByte();
this._lineGap = i.readShort();
this._columnGap = i.readShort();
this._autoResizeItem = i.readBool();
this._childrenRenderOrder = i.readByte();
this._apexIndex = i.readShort();
i.readBool() && i.skip(8);
i.version >= 2 && (this.foldInvisibleItems = i.readBool());
i.seek(n, 8);
this._defaultItem = i.readS();
this.readItems(i);
};
i.prototype.readItems = function(t) {
var e, i, n, o;
e = t.readShort();
for (i = 0; i < e; i++) {
n = t.readShort();
n += t.position;
if (null != (o = t.readS()) || (o = this._defaultItem)) {
var r = this.getFromPool(o);
if (r) {
this.addChild(r);
this.setupItem(t, r);
}
t.position = n;
} else t.position = n;
}
};
i.prototype.setupItem = function(e, i) {
var n, o, r;
null != (n = e.readS()) && (i.text = n);
null != (n = e.readS()) && t.GRoot.inst.getIsButton(i) && (i.selectedTitle = n);
null != (n = e.readS()) && (i.icon = n);
null != (n = e.readS()) && t.GRoot.inst.getIsButton(i) && (i.selectedIcon = n);
null != (n = e.readS()) && (i.name = n);
if (i instanceof t.GComponent) {
o = e.readShort();
for (r = 0; r < o; r++) {
var s = i.getController(e.readS());
n = e.readS();
s && (s.selectedPageId = n);
}
if (e.version >= 2) {
o = e.readShort();
for (r = 0; r < o; r++) {
var a = e.readS(), l = e.readShort(), h = e.readS(), c = i.getChildByPath(a);
c && c.setProp(l, h);
}
}
}
};
i.prototype.setup_afterAdd = function(i, n) {
var o, r, s;
e.prototype.setup_afterAdd.call(this, i, n);
i.seek(n, 6);
var a = i.readShort();
-1 != a && (this._selectionController = this.parent.getControllerAt(a));
if (this.data) {
var l = JSON.parse(this.data);
this._lineCount = +(null !== (o = l.rowCount) && void 0 !== o ? o : 0);
this._columnCount = +(null !== (r = l.colCount) && void 0 !== r ? r : 0);
this.isNowUpdate = !(null === (s = l.isNowUpdate) || void 0 === s || !s);
this.isReverse = 1 == l.isReverse;
this.data = "";
}
this._layout == t.ListLayoutType.SingleColumn ? this._columnCount = 1 : this._layout == t.ListLayoutType.SingleRow && (this._lineCount = 1);
};
return i;
}(t.GComponent);
t.GListLayout = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e() {
this._count = 0;
this._pool = {};
}
e.prototype.clear = function() {
for (var t in this._pool) for (var e = this._pool[t], i = e.length, n = 0; n < i; n++) e[n].dispose();
this._pool = {};
this._count = 0;
};
Object.defineProperty(e.prototype, "count", {
get: function() {
return this._count;
},
enumerable: !1,
configurable: !0
});
e.prototype.getObject = function(e) {
if (null == (e = t.UIPackage.normalizeURL(e))) return null;
var i = this._pool[e];
if (i && i.length) {
this._count--;
return i.shift();
}
return t.UIPackage.createObjectFromURL(e);
};
e.prototype.returnObject = function(t) {
var e = t.resourceURL;
if (e) {
var i = this._pool[e];
if (null == i) {
i = new Array();
this._pool[e] = i;
}
this._count++;
i.push(t);
}
};
return e;
}();
t.GObjectPool = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._frame = 0;
i._node.name = "GLoader";
i._playing = !0;
i._url = "";
i._fill = t.LoaderFillType.None;
i._align = t.AlignType.Left;
i._verticalAlign = t.VertAlignType.Top;
i._showErrorSign = !0;
i._color = new cc.Color(255, 255, 255, 255);
i._container = new cc.Node("Image");
i._container.setAnchorPoint(0, 1);
i._node.addChild(i._container);
i._content = i._container.addComponent(t.MovieClip);
i._content.sizeMode = cc.Sprite.SizeMode.CUSTOM;
i._content.trim = !1;
i._content.setPlaySettings();
return i;
}
i.prototype.dispose = function() {
null == this._contentItem && this._content.spriteFrame && this.freeExternal(this._content.spriteFrame);
this._content2 && this._content2.dispose();
e.prototype.dispose.call(this);
};
Object.defineProperty(i.prototype, "url", {
get: function() {
return this._url;
},
set: function(t) {
if (this._url != t) {
this._url = t;
this.loadContent();
this.updateGear(7);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "icon", {
get: function() {
return this._url;
},
set: function(t) {
this.url = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "align", {
get: function() {
return this._align;
},
set: function(t) {
if (this._align != t) {
this._align = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "verticalAlign", {
get: function() {
return this._verticalAlign;
},
set: function(t) {
if (this._verticalAlign != t) {
this._verticalAlign = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fill", {
get: function() {
return this._fill;
},
set: function(t) {
if (this._fill != t) {
this._fill = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "shrinkOnly", {
get: function() {
return this._shrinkOnly;
},
set: function(t) {
if (this._shrinkOnly != t) {
this._shrinkOnly = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "autoSize", {
get: function() {
return this._autoSize;
},
set: function(t) {
if (this._autoSize != t) {
this._autoSize = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "playing", {
get: function() {
return this._playing;
},
set: function(e) {
if (this._playing != e) {
this._playing = e;
this._content instanceof t.MovieClip && (this._content.playing = e);
this.updateGear(5);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "frame", {
get: function() {
return this._frame;
},
set: function(e) {
if (this._frame != e) {
this._frame = e;
this._content instanceof t.MovieClip && (this._content.frame = e);
this.updateGear(5);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "color", {
get: function() {
return this._color;
},
set: function(t) {
this._color.set(t);
this.updateGear(4);
this._container.color = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillMethod", {
get: function() {
return this._content.fillMethod;
},
set: function(t) {
this._content.fillMethod = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillOrigin", {
get: function() {
return this._content.fillOrigin;
},
set: function(t) {
this._content.fillOrigin = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillClockwise", {
get: function() {
return this._content.fillClockwise;
},
set: function(t) {
this._content.fillClockwise = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillAmount", {
get: function() {
return this._content.fillAmount;
},
set: function(t) {
this._content.fillAmount = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "showErrorSign", {
get: function() {
return this._showErrorSign;
},
set: function(t) {
this._showErrorSign = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "component", {
get: function() {
return this._content2;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "texture", {
get: function() {
return this._content.spriteFrame;
},
set: function(t) {
this.url = null;
this._content.spriteFrame = t;
this._content.type = cc.Sprite.Type.SIMPLE;
if (null != t) {
this.sourceWidth = t.getRect().width;
this.sourceHeight = t.getRect().height;
} else this.sourceWidth = this.sourceHeight = 0;
this.updateLayout();
},
enumerable: !1,
configurable: !0
});
i.prototype.loadContent = function() {
this.clearContent();
this._url && (t.ToolSet.startsWith(this._url, "ui://") ? this.loadFromPackage(this._url) : this.loadExternal());
};
i.prototype.loadFromPackage = function(e) {
this._contentItem = t.UIPackage.getItemByURL(e);
if (this._contentItem) {
this._contentItem = this._contentItem.getBranch();
this.sourceWidth = this._contentItem.width;
this.sourceHeight = this._contentItem.height;
this._contentItem = this._contentItem.getHighResolution();
this._contentItem.load();
this._autoSize && this.setSize(this.sourceWidth, this.sourceHeight);
if (this._contentItem.type == t.PackageItemType.Image) if (this._contentItem.asset) {
this._content.spriteFrame = this._contentItem.asset;
0 == this._content.fillMethod && (this._contentItem.scale9Grid ? this._content.type = cc.Sprite.Type.SLICED : this._contentItem.scaleByTile ? this._content.type = cc.Sprite.Type.TILED : this._content.type = cc.Sprite.Type.SIMPLE);
this.updateLayout();
} else this.setErrorState(); else if (this._contentItem.type == t.PackageItemType.MovieClip) {
this._content.interval = this._contentItem.interval;
this._content.swing = this._contentItem.swing;
this._content.repeatDelay = this._contentItem.repeatDelay;
this._content.frames = this._contentItem.frames;
this.updateLayout();
} else if (this._contentItem.type == t.PackageItemType.Component) {
var i = t.UIPackage.createObjectFromURL(e);
if (i) if (i instanceof t.GComponent) {
this._content2 = i;
this._container.addChild(this._content2.node);
this.updateLayout();
} else {
i.dispose();
this.setErrorState();
} else this.setErrorState();
} else this.setErrorState();
} else this.setErrorState();
};
i.prototype.loadExternal = function() {
var e = this, i = this.url, n = function(t, n) {
if (e._url == i && cc.isValid(e._node)) {
t && console.warn(t);
n instanceof cc.SpriteFrame ? e.onExternalLoadSuccess(n) : n instanceof cc.Texture2D && e.onExternalLoadSuccess(new cc.SpriteFrame(n));
}
};
t.ToolSet.startsWith(this._url, "http://") || t.ToolSet.startsWith(this._url, "https://") || t.ToolSet.startsWith(this._url, "/") ? cc.assetManager.loadRemote(this._url, {
ext: ".png"
}, n) : cc.assetManager.getBundle("common").load(this._url, cc.Asset, n);
};
i.prototype.freeExternal = function() {};
i.prototype.onExternalLoadSuccess = function(t) {
this._content.spriteFrame = t;
this._content.type = cc.Sprite.Type.SIMPLE;
this.sourceWidth = t.getRect().width;
this.sourceHeight = t.getRect().height;
this._autoSize && this.setSize(this.sourceWidth, this.sourceHeight);
this.updateLayout();
};
i.prototype.onExternalLoadFailed = function() {
this.setErrorState();
};
i.prototype.setErrorState = function() {
if (this._showErrorSign) {
null == this._errorSign && null != t.UIConfig.loaderErrorSign && (this._errorSign = i._errorSignPool.getObject(t.UIConfig.loaderErrorSign));
if (this._errorSign) {
this._errorSign.setSize(this.width, this.height);
this._container.addChild(this._errorSign.node);
}
}
};
i.prototype.clearErrorState = function() {
if (this._errorSign) {
this._container.removeChild(this._errorSign.node);
i._errorSignPool.returnObject(this._errorSign);
this._errorSign = null;
}
};
i.prototype.updateLayout = function() {
if (null != this._content2 || null != this._content) {
var e = this.sourceWidth, i = this.sourceHeight, n = -this.pivotX * this._width, o = this.pivotY * this._height;
if (this._autoSize) {
this._updatingLayout = !0;
0 == e && (e = 50);
0 == i && (i = 30);
this.setSize(e, i);
this._updatingLayout = !1;
this._container.setContentSize(this._width, this._height);
this._container.setPosition(n, o);
if (this._content2) {
this._content2.setPosition(n + this._width * this.pivotX, o - this._height * this.pivotY);
this._content2.setScale(1, 1);
}
if (e == this._width && i == this._height) return;
}
var r, s, a = 1, l = 1;
if (this._fill != t.LoaderFillType.None) {
a = this.width / this.sourceWidth;
l = this.height / this.sourceHeight;
if (1 != a || 1 != l) {
this._fill == t.LoaderFillType.ScaleMatchHeight ? a = l : this._fill == t.LoaderFillType.ScaleMatchWidth ? l = a : this._fill == t.LoaderFillType.Scale ? a > l ? a = l : l = a : this._fill == t.LoaderFillType.ScaleNoBorder && (a > l ? l = a : a = l);
if (this._shrinkOnly) {
a > 1 && (a = 1);
l > 1 && (l = 1);
}
e = this.sourceWidth * a;
i = this.sourceHeight * l;
}
}
this._container.setContentSize(e, i);
if (this._content2) {
this._content2.setPosition(n + this._width * this.pivotX, o - this._height * this.pivotY);
this._content2.setScale(a, l);
}
r = this._align == t.AlignType.Left ? 0 : this._align == t.AlignType.Center ? Math.floor((this._width - e) / 2) : this._width - e;
s = -(s = this._verticalAlign == t.VertAlignType.Top ? 0 : this._verticalAlign == t.VertAlignType.Middle ? Math.floor((this._height - i) / 2) : this._height - i);
this._container.setPosition(n + r, o + s);
} else if (this._autoSize) {
this._updatingLayout = !0;
this.setSize(50, 30);
this._updatingLayout = !1;
}
};
i.prototype.clearContent = function() {
this.clearErrorState();
if (!this._contentItem) {
var t = this._content.spriteFrame;
t && this.freeExternal(t);
}
if (this._content2) {
this._container.removeChild(this._content2.node);
this._content2.dispose();
this._content2 = null;
}
this._content.frames = null;
this._content.spriteFrame = null;
this._contentItem = null;
};
i.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this._updatingLayout || this.updateLayout();
};
i.prototype.handleAnchorChanged = function() {
e.prototype.handleAnchorChanged.call(this);
this._updatingLayout || this.updateLayout();
};
i.prototype.handleGrayedChanged = function() {
this._content.grayed = this._grayed;
};
i.prototype._hitTest = function(t, e) {
if (this._content2) {
var i = this._content2.hitTest(e);
if (i) return i;
}
return t.x >= 0 && t.y >= 0 && t.x < this._width && t.y < this._height ? this : null;
};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.color;

case t.ObjectPropID.Playing:
return this.playing;

case t.ObjectPropID.Frame:
return this.frame;

case t.ObjectPropID.TimeScale:
return this._content.timeScale;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.color = n;
break;

case t.ObjectPropID.Playing:
this.playing = n;
break;

case t.ObjectPropID.Frame:
this.frame = n;
break;

case t.ObjectPropID.TimeScale:
this._content.timeScale = n;
break;

case t.ObjectPropID.DeltaTime:
this._content.advance(n);
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
this._url = t.readS();
this._align = t.readByte();
this._verticalAlign = t.readByte();
this._fill = t.readByte();
this._shrinkOnly = t.readBool();
this._autoSize = t.readBool();
this._showErrorSign = t.readBool();
this._playing = t.readBool();
this._frame = t.readInt();
t.readBool() && (this.color = t.readColor());
this._content.fillMethod = t.readByte();
if (0 != this._content.fillMethod) {
this._content.fillOrigin = t.readByte();
this._content.fillClockwise = t.readBool();
this._content.fillAmount = t.readFloat();
}
this._url && this.loadContent();
};
i._errorSignPool = new t.GObjectPool();
return i;
}(t.GObject);
t.GLoader = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._frame = 0;
i._node.name = "GLoader3D";
i._playing = !0;
i._url = "";
i._fill = t.LoaderFillType.None;
i._align = t.AlignType.Left;
i._verticalAlign = t.VertAlignType.Top;
i._color = new cc.Color(255, 255, 255, 255);
i._container = new cc.Node("Wrapper");
i._container.setAnchorPoint(0, 1);
i._node.addChild(i._container);
return i;
}
i.prototype.dispose = function() {
e.prototype.dispose.call(this);
};
Object.defineProperty(i.prototype, "url", {
get: function() {
return this._url;
},
set: function(t) {
if (this._url != t) {
this._url = t;
this.loadContent();
this.updateGear(7);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "icon", {
get: function() {
return this._url;
},
set: function(t) {
this.url = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "align", {
get: function() {
return this._align;
},
set: function(t) {
if (this._align != t) {
this._align = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "verticalAlign", {
get: function() {
return this._verticalAlign;
},
set: function(t) {
if (this._verticalAlign != t) {
this._verticalAlign = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fill", {
get: function() {
return this._fill;
},
set: function(t) {
if (this._fill != t) {
this._fill = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "shrinkOnly", {
get: function() {
return this._shrinkOnly;
},
set: function(t) {
if (this._shrinkOnly != t) {
this._shrinkOnly = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "autoSize", {
get: function() {
return this._autoSize;
},
set: function(t) {
if (this._autoSize != t) {
this._autoSize = t;
this.updateLayout();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "playing", {
get: function() {
return this._playing;
},
set: function(t) {
if (this._playing != t) {
this._playing = t;
this.updateGear(5);
this.onChange();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "frame", {
get: function() {
return this._frame;
},
set: function(t) {
if (this._frame != t) {
this._frame = t;
this.updateGear(5);
this.onChange();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "animationName", {
get: function() {
return this._animationName;
},
set: function(t) {
if (this._animationName != t) {
this._animationName = t;
this.onChange();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "skinName", {
get: function() {
return this._skinName;
},
set: function(t) {
if (this._skinName != t) {
this._skinName = t;
this.onChange();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "loop", {
get: function() {
return this._loop;
},
set: function(t) {
if (this._loop != t) {
this._loop = t;
this.onChange();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "color", {
get: function() {
return this._color;
},
set: function(t) {
this._color.set(t);
this.updateGear(4);
this._content && (this._content.node.color = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "content", {
get: function() {
return this._content;
},
enumerable: !1,
configurable: !0
});
i.prototype.loadContent = function() {
this.clearContent();
this._url && (t.ToolSet.startsWith(this._url, "ui://") ? this.loadFromPackage(this._url) : this.loadExternal());
};
i.prototype.loadFromPackage = function(e) {
this._contentItem = t.UIPackage.getItemByURL(e);
if (this._contentItem) {
this._contentItem = this._contentItem.getBranch();
this.sourceWidth = this._contentItem.width;
this.sourceHeight = this._contentItem.height;
this._contentItem = this._contentItem.getHighResolution();
this._autoSize && this.setSize(this.sourceWidth, this.sourceHeight);
this._contentItem.type != t.PackageItemType.Spine && this._contentItem.type != t.PackageItemType.DragonBones || this._contentItem.owner.getItemAssetAsync(this._contentItem, this.onLoaded.bind(this));
}
};
i.prototype.onLoaded = function(e, i) {
if (this._contentItem == i) {
e && console.warn(e);
this._contentItem.asset && (this._contentItem.type == t.PackageItemType.Spine ? this.setSpine(this._contentItem.asset, this._contentItem.skeletonAnchor) : this._contentItem.type == t.PackageItemType.DragonBones && this.setDragonBones(this._contentItem.asset, this._contentItem.atlasAsset, this._contentItem.skeletonAnchor));
}
};
i.prototype.setSpine = function(t, e, i) {
if (cc.isValid(this._container)) {
this.url = null;
this.clearContent();
var n = new cc.Node();
n.color = this._color;
this._container.addChild(n);
n.setPosition(e.x, -e.y);
this._content = n.addComponent(sp.Skeleton);
this._content.premultipliedAlpha = i;
this._content.skeletonData = t;
this.onChangeSpine();
this.updateLayout();
}
};
i.prototype.setDragonBones = function(t, e, i, n) {
if (cc.isValid(this._container)) {
this.url = null;
this.clearContent();
var o = new cc.Node();
o.color = this._color;
this._container.addChild(o);
o.setPosition(i.x, -i.y);
this._content = o.addComponent(dragonBones.ArmatureDisplay);
this._content.premultipliedAlpha = n;
this._content.dragonAsset = t;
this._content.dragonAtlasAsset = e;
var r = t.init(dragonBones.CCFactory.getInstance(), e._uuid), s = this._content._factory.getDragonBonesData(r);
this._content.armatureName = s.armatureNames[0];
this.onChangeDragonBones();
this.updateLayout();
this._node.emit("content_inited");
}
};
i.prototype.onChange = function() {
this.onChangeSpine();
this.onChangeDragonBones();
};
i.prototype.onChangeSpine = function() {
if ("sp" in window && this._content instanceof sp.Skeleton) {
if (this._animationName) {
var e = this._content.getCurrent(0);
if (!e || e.animation.name != this._animationName || e.isComplete() && !e.loop) {
this._content.defaultAnimation = this._animationName;
e = this._content.setAnimation(0, this._animationName, this._loop);
}
if (this._playing) this._content.paused = !1; else {
this._content.paused = !0;
e.trackTime = t.ToolSet.lerp(0, e.animationEnd - e.animationStart, this._frame / 100);
}
} else this._content.clearTrack(0);
var i = this._skinName || this._content.skeletonData.getRuntimeData().skins[0].name;
this._content._skeleton.skin != i && this._content.setSkin(i);
this._node.emit("content_inited");
}
};
i.prototype.onChangeDragonBones = function() {
"dragonBones" in window && this._content instanceof dragonBones.ArmatureDisplay && (this._animationName ? this._playing ? this._content.playAnimation(this._animationName, this._loop ? 0 : 1) : this._content.armature().animation.gotoAndStopByFrame(this._animationName, this._frame) : this._content.armature().animation.reset());
};
i.prototype.loadExternal = function() {
t.ToolSet.startsWith(this._url, "http://") || t.ToolSet.startsWith(this._url, "https://") || t.ToolSet.startsWith(this._url, "/") ? cc.assetManager.loadRemote(this._url, sp.SkeletonData, this.onLoaded2.bind(this)) : cc.assetManager.getBundle("common").load(this._url, sp.SkeletonData, this.onLoaded2.bind(this));
};
i.prototype.onLoaded2 = function(t) {
this._url && cc.isValid(this._node) && t && console.warn(t);
};
i.prototype.updateLayout = function() {
var e = this.sourceWidth, i = this.sourceHeight, n = -this.pivotX * this._width, o = this.pivotY * this._height;
if (this._autoSize) {
this._updatingLayout = !0;
0 == e && (e = 50);
0 == i && (i = 30);
this.setSize(e, i);
this._updatingLayout = !1;
if (e == this._width && i == this._height) {
this._container.setScale(1, 1);
this._container.setPosition(n, o);
return;
}
}
var r, s, a = 1, l = 1;
if (this._fill != t.LoaderFillType.None) {
a = this.width / this.sourceWidth;
l = this.height / this.sourceHeight;
if (1 != a || 1 != l) {
this._fill == t.LoaderFillType.ScaleMatchHeight ? a = l : this._fill == t.LoaderFillType.ScaleMatchWidth ? l = a : this._fill == t.LoaderFillType.Scale ? a > l ? a = l : l = a : this._fill == t.LoaderFillType.ScaleNoBorder && (a > l ? l = a : a = l);
if (this._shrinkOnly) {
a > 1 && (a = 1);
l > 1 && (l = 1);
}
e = this.sourceWidth * a;
i = this.sourceHeight * l;
}
}
this._container.setScale(a, l);
r = this._align == t.AlignType.Left ? 0 : this._align == t.AlignType.Center ? Math.floor((this._width - e) / 2) : this._width - e;
s = -(s = this._verticalAlign == t.VertAlignType.Top ? 0 : this._verticalAlign == t.VertAlignType.Middle ? Math.floor((this._height - i) / 2) : this._height - i);
this._container.setPosition(n + r, o + s);
};
i.prototype.clearContent = function() {
this._contentItem = null;
if (this._content) {
this._content.node.destroy();
this._content = null;
}
};
i.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this._updatingLayout || this.updateLayout();
};
i.prototype.handleAnchorChanged = function() {
e.prototype.handleAnchorChanged.call(this);
this._updatingLayout || this.updateLayout();
};
i.prototype.handleGrayedChanged = function() {};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.color;

case t.ObjectPropID.Playing:
return this.playing;

case t.ObjectPropID.Frame:
return this.frame;

case t.ObjectPropID.TimeScale:
return 1;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.color = n;
break;

case t.ObjectPropID.Playing:
this.playing = n;
break;

case t.ObjectPropID.Frame:
this.frame = n;
break;

case t.ObjectPropID.TimeScale:
case t.ObjectPropID.DeltaTime:
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
this._url = t.readS();
this._align = t.readByte();
this._verticalAlign = t.readByte();
this._fill = t.readByte();
this._shrinkOnly = t.readBool();
this._autoSize = t.readBool();
this._animationName = t.readS();
this._skinName = t.readS();
this._playing = t.readBool();
this._frame = t.readInt();
this._loop = t.readBool();
t.readBool() && (this.color = t.readColor());
this._url && this.loadContent();
};
return i;
}(t.GObject);
t.GLoader3D = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._node.name = "GMovieClip";
i._touchDisabled = !0;
i._content = i._node.addComponent(t.MovieClip);
i._content.sizeMode = cc.Sprite.SizeMode.CUSTOM;
i._content.trim = !1;
i._content.setPlaySettings();
return i;
}
Object.defineProperty(i.prototype, "color", {
get: function() {
return this._node.color;
},
set: function(t) {
this._node.color = t;
this.updateGear(4);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "playing", {
get: function() {
return this._content.playing;
},
set: function(t) {
if (this._content.playing != t) {
this._content.playing = t;
this.updateGear(5);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "frame", {
get: function() {
return this._content.frame;
},
set: function(t) {
if (this._content.frame != t) {
this._content.frame = t;
this.updateGear(5);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "timeScale", {
get: function() {
return this._content.timeScale;
},
set: function(t) {
this._content.timeScale = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.rewind = function() {
this._content.rewind();
};
i.prototype.syncStatus = function(t) {
this._content.syncStatus(t._content);
};
i.prototype.advance = function(t) {
this._content.advance(t);
};
i.prototype.setPlaySettings = function(t, e, i, n, o, r) {
this._content.setPlaySettings(t, e, i, n, o, r);
};
i.prototype.handleGrayedChanged = function() {
this._content.grayed = this._grayed;
};
i.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this._content.sizeMode = cc.Sprite.SizeMode.CUSTOM;
};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.color;

case t.ObjectPropID.Playing:
return this.playing;

case t.ObjectPropID.Frame:
return this.frame;

case t.ObjectPropID.TimeScale:
return this.timeScale;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.color = n;
break;

case t.ObjectPropID.Playing:
this.playing = n;
break;

case t.ObjectPropID.Frame:
this.frame = n;
break;

case t.ObjectPropID.TimeScale:
this.timeScale = n;
break;

case t.ObjectPropID.DeltaTime:
this.advance(n);
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.constructFromResource = function() {
var t = this.packageItem.getBranch();
this.sourceWidth = t.width;
this.sourceHeight = t.height;
this.initWidth = this.sourceWidth;
this.initHeight = this.sourceHeight;
this.setSize(this.sourceWidth, this.sourceHeight);
(t = t.getHighResolution()).load();
this._content.interval = t.interval;
this._content.swing = t.swing;
this._content.repeatDelay = t.repeatDelay;
this._content.frames = t.frames;
this._content.smoothing = t.smoothing;
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
t.readBool() && (this.color = t.readColor());
t.readByte();
this._content.frame = t.readInt();
this._content.playing = t.readBool();
};
return i;
}(t.GObject);
t.GMovieClip = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._min = 0;
i._max = 0;
i._value = 0;
i._barMaxWidth = 0;
i._barMaxHeight = 0;
i._barMaxWidthDelta = 0;
i._barMaxHeightDelta = 0;
i._barStartX = 0;
i._barStartY = 0;
i._node.name = "GProgressBar";
i._titleType = t.ProgressTitleType.Percent;
i._value = 50;
i._max = 100;
return i;
}
Object.defineProperty(i.prototype, "titleType", {
get: function() {
return this._titleType;
},
set: function(t) {
if (this._titleType != t) {
this._titleType = t;
this.update(this._value);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "min", {
get: function() {
return this._min;
},
set: function(t) {
if (this._min != t) {
this._min = t;
this.update(this._value);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "max", {
get: function() {
return this._max;
},
set: function(t) {
if (this._max != t) {
this._max = t;
this.update(this._value);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "value", {
get: function() {
return this._value;
},
set: function(e) {
if (this._value != e) {
t.GTween.kill(this, !1, this.update);
this._value = e;
this.update(e);
}
},
enumerable: !1,
configurable: !0
});
i.prototype.tweenValue = function(e, i) {
var n, o = t.GTween.getTween(this, this.update);
if (o) {
n = o.value.x;
o.kill();
} else n = this._value;
this._value = e;
return t.GTween.to(n, this._value, i).setTarget(this, this.update).setEase(t.EaseType.Linear);
};
i.prototype.update = function(e) {
var i = t.ToolSet.clamp01((e - this._min) / (this._max - this._min));
if (this._titleObject) switch (this._titleType) {
case t.ProgressTitleType.Percent:
this._titleObject.text = Math.floor(100 * i) + "%";
break;

case t.ProgressTitleType.ValueAndMax:
this._titleObject.text = Math.floor(e) + "/" + Math.floor(this._max);
break;

case t.ProgressTitleType.Value:
this._titleObject.text = "" + Math.floor(e);
break;

case t.ProgressTitleType.Max:
this._titleObject.text = "" + Math.floor(this._max);
}
var n = this.width - this._barMaxWidthDelta, o = this.height - this._barMaxHeightDelta;
if (this._reverse) {
if (this._barObjectH && !this.setFillAmount(this._barObjectH, 1 - i)) {
this._barObjectH.width = Math.round(n * i);
this._barObjectH.x = this._barStartX + (n - this._barObjectH.width);
}
if (this._barObjectV && !this.setFillAmount(this._barObjectV, 1 - i)) {
this._barObjectV.height = Math.round(o * i);
this._barObjectV.y = this._barStartY + (o - this._barObjectV.height);
}
} else {
this._barObjectH && (this.setFillAmount(this._barObjectH, i) || (this._barObjectH.width = Math.round(n * i)));
this._barObjectV && (this.setFillAmount(this._barObjectV, i) || (this._barObjectV.height = Math.round(o * i)));
}
this._aniObject && this._aniObject.setProp(t.ObjectPropID.Frame, Math.floor(100 * i));
};
i.prototype.setFillAmount = function(e, i) {
if ((e instanceof t.GImage || e instanceof t.GLoader) && e.fillMethod != t.FillMethod.None) {
e.fillAmount = i;
return !0;
}
return !1;
};
i.prototype.constructExtension = function(t) {
t.seek(0, 6);
this._titleType = t.readByte();
this._reverse = t.readBool();
this._titleObject = this.getChild("title");
this._barObjectH = this.getChild("bar");
this._barObjectV = this.getChild("bar_v");
this._aniObject = this.getChild("ani");
if (this._barObjectH) {
this._barMaxWidth = this._barObjectH.width;
this._barMaxWidthDelta = this.width - this._barMaxWidth;
this._barStartX = this._barObjectH.x;
}
if (this._barObjectV) {
this._barMaxHeight = this._barObjectV.height;
this._barMaxHeightDelta = this.height - this._barMaxHeight;
this._barStartY = this._barObjectV.y;
}
};
i.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this._barObjectH && (this._barMaxWidth = this.width - this._barMaxWidthDelta);
this._barObjectV && (this._barMaxHeight = this.height - this._barMaxHeightDelta);
this._underConstruct || this.update(this._value);
};
i.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
if (t.seek(i, 6)) if (t.readByte() == this.packageItem.objectType) {
this._value = t.readInt();
this._max = t.readInt();
t.version >= 2 && (this._min = t.readInt());
this.update(this._value);
} else this.update(this._value); else this.update(this._value);
};
return i;
}(t.GComponent);
t.GProgressBar = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = e.call(this) || this;
t._fontSize = 0;
t._leading = 0;
t._node.name = "GTextField";
t._touchDisabled = !0;
t._text = "";
t._color = new cc.Color(255, 255, 255, 255);
t.createRenderer();
t.fontSize = 12;
t.leading = 3;
t.singleLine = !1;
t._sizeDirty = !1;
t._node.on(cc.Node.EventType.SIZE_CHANGED, t.onLabelSizeChanged, t);
return t;
}
i.prototype.createRenderer = function() {
this._label = this._node.addComponent(cc.Label);
this._label.cacheMode = 0;
this.autoSize = t.AutoSizeType.Both;
};
Object.defineProperty(i.prototype, "text", {
get: function() {
return this._text;
},
set: function(t) {
this._text = t;
null == this._text && (this._text = "");
this.updateGear(6);
this.markSizeChanged();
this.updateText();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "font", {
get: function() {
return this._font;
},
set: function(e) {
if (this._font != e || !e) {
this._font = e;
this.markSizeChanged();
var i = e || t.UIConfig.defaultFont;
if (t.ToolSet.startsWith(i, "ui://")) {
var n = t.UIPackage.getItemByURL(i);
i = n ? n.owner.getItemAsset(n) : t.UIConfig.defaultFont;
}
this._realFont = i;
this.updateFont();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fontSize", {
get: function() {
return this._fontSize;
},
set: function(t) {
if (!(t < 0) && this._fontSize != t) {
this._fontSize = t;
this.markSizeChanged();
this.updateFontSize();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "color", {
get: function() {
return this._color;
},
set: function(t) {
this._color.set(t);
this.updateGear(4);
this.updateFontColor();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "align", {
get: function() {
return this._label ? this._label.horizontalAlign : 0;
},
set: function(t) {
this._label && (this._label.horizontalAlign = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "verticalAlign", {
get: function() {
return this._label ? this._label.verticalAlign : 0;
},
set: function(t) {
this._label && (this._label.verticalAlign = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "leading", {
get: function() {
return this._leading;
},
set: function(t) {
if (this._leading != t) {
this._leading = t;
this.markSizeChanged();
this.updateFontSize();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "letterSpacing", {
get: function() {
return this._label ? this._label.spacingX : 0;
},
set: function(t) {
if (this._label && this._label.spacingX != t) {
this.markSizeChanged();
this._label.spacingX = t;
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "underline", {
get: function() {
return !!this._label && this._label.enableUnderline;
},
set: function(t) {
this._label && (this._label.enableUnderline = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "bold", {
get: function() {
return !!this._label && this._label.enableBold;
},
set: function(t) {
this._label && (this._label.enableBold = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "italic", {
get: function() {
return !!this._label && this._label.enableItalic;
},
set: function(t) {
this._label && (this._label.enableItalic = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "singleLine", {
get: function() {
return !!this._label && !this._label.enableWrapText;
},
set: function(t) {
this._label && (this._label.enableWrapText = !t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "stroke", {
get: function() {
return this._outline && this._outline.enabled ? this._outline.width : 0;
},
set: function(t) {
if (0 == t) this._outline && (this._outline.enabled = !1); else {
if (this._outline) this._outline.enabled = !0; else {
this._outline = this._node.addComponent(cc.LabelOutline);
this.updateStrokeColor();
}
this._outline.width = t;
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "strokeColor", {
get: function() {
return this._strokeColor;
},
set: function(t) {
this._strokeColor || (this._strokeColor = new cc.Color());
this._strokeColor.set(t);
this.updateGear(4);
this.updateStrokeColor();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "shadowOffset", {
get: function() {
return this._shadowOffset;
},
set: function(t) {
this._shadowOffset || (this._shadowOffset = new cc.Vec2());
this._shadowOffset.set(t);
if (0 != this._shadowOffset.x || 0 != this._shadowOffset.y) {
if (this._shadow) this._shadow.enabled = !0; else {
this._shadow = this._node.addComponent(cc.LabelShadow);
this.updateShadowColor();
}
this._shadow.offset.x = t.x;
this._shadow.offset.y = -t.y;
} else this._shadow && (this._shadow.enabled = !1);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "shadowColor", {
get: function() {
return this._shadowColor;
},
set: function(t) {
this._shadowColor || (this._shadowColor = new cc.Color());
this._shadowColor.set(t);
this.updateShadowColor();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "ubbEnabled", {
get: function() {
return this._ubbEnabled;
},
set: function(t) {
if (this._ubbEnabled != t) {
this._ubbEnabled = t;
this.markSizeChanged();
this.updateText();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "autoSize", {
get: function() {
return this._autoSize;
},
set: function(t) {
if (this._autoSize != t) {
this._autoSize = t;
this.markSizeChanged();
this.updateOverflow();
}
},
enumerable: !1,
configurable: !0
});
i.prototype.parseTemplate = function(t) {
for (var e, i, n, o, r = 0, s = ""; -1 != (e = t.indexOf("{", r)); ) if (e > 0 && 92 == t.charCodeAt(e - 1)) {
s += t.substring(r, e - 1);
s += "{";
r = e + 1;
} else {
s += t.substring(r, e);
r = e;
if (-1 == (e = t.indexOf("}", r))) break;
if (e != r + 1) {
-1 != (i = (n = t.substring(r + 1, e)).indexOf("=")) ? s += null == (o = this._templateVars[n.substring(0, i)]) ? n.substring(i + 1) : o : null != (o = this._templateVars[n]) && (s += o);
r = e + 1;
} else {
s += t.substr(r, 2);
r = e + 1;
}
}
r < t.length && (s += t.substr(r));
return s;
};
Object.defineProperty(i.prototype, "templateVars", {
get: function() {
return this._templateVars;
},
set: function(t) {
if (null != this._templateVars || null != t) {
this._templateVars = t;
this.flushVars();
}
},
enumerable: !1,
configurable: !0
});
i.prototype.setVar = function(t, e) {
this._templateVars || (this._templateVars = {});
this._templateVars[t] = e;
return this;
};
i.prototype.flushVars = function() {
this.markSizeChanged();
this.updateText();
};
Object.defineProperty(i.prototype, "textWidth", {
get: function() {
this.ensureSizeCorrect();
return this._node.width;
},
enumerable: !1,
configurable: !0
});
i.prototype.ensureSizeCorrect = function() {
if (this._sizeDirty) {
this._label._forceUpdateRenderData ? this._label._forceUpdateRenderData() : this._label._updateRenderData(!0);
this._sizeDirty = !1;
}
};
i.prototype.updateText = function() {
var e = this._text;
this._templateVars && (e = this.parseTemplate(e));
this._ubbEnabled && (e = t.UBBParser.inst.parse(e, !0));
this._label.string = e;
};
i.prototype.assignFont = function(e, i) {
if (i instanceof cc.Font) e.font = i; else {
var n = t.getFontByName(i);
if (n) e.font = n; else {
e.fontFamily = i;
e.useSystemFont = !0;
}
}
};
i.prototype.assignFontColor = function(e, i) {
var n = e.font;
n instanceof cc.BitmapFont && !n._fntConfig.canTint && (i = cc.Color.WHITE);
this._grayed && (i = t.ToolSet.toGrayed(i));
e.node.color = i;
};
i.prototype.updateFont = function() {
this.assignFont(this._label, this._realFont);
};
i.prototype.updateFontColor = function() {
this.assignFontColor(this._label, this._color);
};
i.prototype.updateStrokeColor = function() {
if (this._outline) {
this._strokeColor || (this._strokeColor = new cc.Color());
this._grayed ? this._outline.color = t.ToolSet.toGrayed(this._strokeColor) : this._outline.color = this._strokeColor;
}
};
i.prototype.updateShadowColor = function() {
if (this._shadow) {
this._shadowColor || (this._shadowColor = new cc.Color());
this._grayed ? this._shadow.color = t.ToolSet.toGrayed(this._shadowColor) : this._shadow.color = this._shadowColor;
}
};
i.prototype.updateFontSize = function() {
var t = this._label.font;
if (t instanceof cc.BitmapFont) {
var e = t._fntConfig;
e.resizable ? this._label.fontSize = this._fontSize : this._label.fontSize = e.fontSize;
this._label.lineHeight = e.fontSize + (this._leading + 4) * e.fontSize / this._label.fontSize;
} else {
this._label.fontSize = this._fontSize;
this._label.lineHeight = this._fontSize + this._leading;
}
};
i.prototype.updateOverflow = function() {
if (this._autoSize == t.AutoSizeType.Both) this._label.overflow = cc.Label.Overflow.NONE; else if (this._autoSize == t.AutoSizeType.Height) {
this._label.overflow = cc.Label.Overflow.RESIZE_HEIGHT;
this._node.width = this._width;
} else if (this._autoSize == t.AutoSizeType.Shrink) {
this._label.overflow = cc.Label.Overflow.SHRINK;
this._node.setContentSize(this._width, this._height);
} else {
this._label.overflow = cc.Label.Overflow.CLAMP;
this._node.setContentSize(this._width, this._height);
}
};
i.prototype.markSizeChanged = function() {
if (!(this._underConstruct || this._autoSize != t.AutoSizeType.Both && this._autoSize != t.AutoSizeType.Height || this._sizeDirty)) {
this._node.emit(t.Event.SIZE_DELAY_CHANGE, this);
this._sizeDirty = !0;
}
};
i.prototype.onLabelSizeChanged = function() {
this._sizeDirty = !1;
if (!this._underConstruct && (this._autoSize == t.AutoSizeType.Both || this._autoSize == t.AutoSizeType.Height)) {
this._updatingSize = !0;
this.setSize(this._node.width, this._node.height);
this._updatingSize = !1;
}
};
i.prototype.handleSizeChanged = function() {
this._updatingSize || (this._autoSize == t.AutoSizeType.None || this._autoSize == t.AutoSizeType.Shrink ? this._node.setContentSize(this._width, this._height) : this._autoSize == t.AutoSizeType.Height && (this._node.width = this._width));
};
i.prototype.handleGrayedChanged = function() {
this.updateFontColor();
this.updateStrokeColor();
};
i.prototype.getProp = function(i) {
switch (i) {
case t.ObjectPropID.Color:
return this.color;

case t.ObjectPropID.OutlineColor:
return this.strokeColor;

case t.ObjectPropID.FontSize:
return this.fontSize;

default:
return e.prototype.getProp.call(this, i);
}
};
i.prototype.setProp = function(i, n) {
switch (i) {
case t.ObjectPropID.Color:
this.color = n;
break;

case t.ObjectPropID.OutlineColor:
this.strokeColor = n;
break;

case t.ObjectPropID.FontSize:
this.fontSize = n;
break;

default:
e.prototype.setProp.call(this, i, n);
}
};
i.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 5);
this.font = t.readS();
this.fontSize = t.readShort();
this.color = t.readColor();
this.align = t.readByte();
this.verticalAlign = t.readByte();
this.leading = t.readShort();
this.letterSpacing = t.readShort();
this._ubbEnabled = t.readBool();
this.autoSize = t.readByte();
this.underline = t.readBool();
this.italic = t.readBool();
this.bold = t.readBool();
this.singleLine = t.readBool();
if (t.readBool()) {
this.strokeColor = t.readColor();
this.stroke = t.readFloat();
}
if (t.readBool()) {
this.shadowColor = t.readColor();
var n = t.readFloat(), o = t.readFloat();
this.shadowOffset = new cc.Vec2(n, o);
}
t.readBool() && (this._templateVars = {});
};
i.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
t.seek(i, 6);
var n = t.readS();
null != n && (this.text = n);
const o = this.data, r = "cacheMode";
if (o && o.includes(r)) {
const t = o.split(",");
for (let e of t) {
const t = e.split("=");
t[0] == r && (this._label.cacheMode = +t[1]);
}
o != r + "=0" && o != r + "=1" && o != r + "=2" || (this.data = "");
}
};
return i;
}(t.GObject);
t.GTextField = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.getSpriteFrame = function(i) {
var n = t.UIPackage.getItemByURL(i);
if (n) {
n.load();
if (n.type == t.PackageItemType.Image) return n.asset;
if (n.type == t.PackageItemType.MovieClip) return n.frames[0].texture;
}
return e.prototype.getSpriteFrame.call(this, i);
};
return i;
}(cc.SpriteAtlas);
t.RichTextImageAtlas = e;
var i = new e(), n = function(e) {
__extends(n, e);
function n() {
var i = e.call(this) || this;
i._node.name = "GRichTextField";
i._touchDisabled = !1;
i.linkUnderline = t.UIConfig.linkUnderline;
return i;
}
n.prototype.createRenderer = function() {
this._richText = this._node.addComponent(cc.RichText);
this._richText.handleTouchEvent = !1;
this.autoSize = t.AutoSizeType.None;
this._richText.imageAtlas = i;
};
Object.defineProperty(n.prototype, "align", {
get: function() {
return this._richText.horizontalAlign;
},
set: function(t) {
this._richText.horizontalAlign = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "underline", {
get: function() {
return this._underline;
},
set: function(t) {
if (this._underline != t) {
this._underline = t;
this.updateText();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "bold", {
get: function() {
return this._bold;
},
set: function(t) {
if (this._bold != t) {
this._bold = t;
this.updateText();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "italic", {
get: function() {
return this._italics;
},
set: function(t) {
if (this._italics != t) {
this._italics = t;
this.updateText();
}
},
enumerable: !1,
configurable: !0
});
n.prototype.markSizeChanged = function() {};
n.prototype.updateText = function() {
var e = this._text;
this._templateVars && (e = this.parseTemplate(e));
if (this._ubbEnabled) {
t.UBBParser.inst.linkUnderline = this.linkUnderline;
t.UBBParser.inst.linkColor = this.linkColor;
e = t.UBBParser.inst.parse(e);
}
this._bold && (e = "<b>" + e + "</b>");
this._italics && (e = "<i>" + e + "</i>");
this._underline && (e = "<u>" + e + "</u>");
var i = this._color;
this._grayed && (i = t.ToolSet.toGrayed(i));
e = "<color=" + i.toHEX("#rrggbb") + ">" + e + "</color>";
if (this._autoSize == t.AutoSizeType.Both) {
0 != this._richText.maxWidth && (this._richText.maxWidth = 0);
this._richText.string = e;
0 != this.maxWidth && this._node.width > this.maxWidth && (this._richText.maxWidth = this.maxWidth);
} else this._richText.string = e;
};
n.prototype.updateFont = function() {
this.assignFont(this._richText, this._realFont);
};
n.prototype.updateFontColor = function() {
this.assignFontColor(this._richText, this._color);
};
n.prototype.updateFontSize = function() {
var t = this._fontSize, e = this._richText.font;
e instanceof cc.BitmapFont && (e._fntConfig.resizable || (t = e._fntConfig.fontSize));
this._richText.fontSize = t;
this._richText.lineHeight = t + 2 * this._leading;
};
n.prototype.updateOverflow = function() {
this._autoSize == t.AutoSizeType.Both ? this._richText.maxWidth = 0 : this._richText.maxWidth = this._width;
};
n.prototype.handleSizeChanged = function() {
this._updatingSize || this._autoSize != t.AutoSizeType.Both && (this._richText.maxWidth = this._width);
};
return n;
}(t.GTextField);
t.GRichTextField = n;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._node.name = "GRoot";
i.opaque = !1;
i._volumeScale = 1;
i._popupStack = new Array();
i._justClosedPopups = new Array();
i._modalLayer = new t.GGraph();
i._modalLayer.setSize(i.width, i.height);
i._modalLayer.drawRect(0, cc.Color.TRANSPARENT, t.UIConfig.modalLayerColor);
i._modalLayer.addRelation(i, t.RelationType.Size);
i._thisOnResized = i.onWinResize.bind(i);
i._inputProcessor = i.node.addComponent(t.InputProcessor);
i._inputProcessor._captureCallback = i.onTouchBegin_1;
return i;
}
Object.defineProperty(i, "inst", {
get: function() {
if (!i._inst) throw "Call GRoot.create first!";
return i._inst;
},
enumerable: !1,
configurable: !0
});
i.create = function() {
i._inst = new i();
i._inst.node.parent = cc.director.getScene().getChildByName("Canvas");
return i._inst;
};
i.prototype.onDestroy = function() {
this == i._inst && (i._inst = null);
};
i.prototype.getIsButton = function(e) {
return null != e && "object" == typeof e && (e instanceof t.GButton || null != e.packageItem && e.packageItem.objectType == t.ObjectType.Button);
};
i.prototype.getTouchPosition = function(t) {
return this._inputProcessor.getTouchPosition(t);
};
Object.defineProperty(i.prototype, "touchTarget", {
get: function() {
return this._inputProcessor.getTouchTarget();
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "inputProcessor", {
get: function() {
return this._inputProcessor;
},
enumerable: !1,
configurable: !0
});
i.prototype.showWindow = function(t) {
this.addChild(t);
t.requestFocus();
t.x > this.width ? t.x = this.width - t.width : t.x + t.width < 0 && (t.x = 0);
t.y > this.height ? t.y = this.height - t.height : t.y + t.height < 0 && (t.y = 0);
this.adjustModalLayer();
};
i.prototype.hideWindow = function(t) {
t.hide();
};
i.prototype.hideWindowImmediately = function(t) {
t.parent == this && this.removeChild(t);
this.adjustModalLayer();
};
i.prototype.bringToFront = function(e) {
var i, n = this.numChildren;
i = this._modalLayer.parent && !e.modal ? this.getChildIndex(this._modalLayer) - 1 : n - 1;
for (;i >= 0; i--) {
var o = this.getChildAt(i);
if (o == e) return;
if (o instanceof t.Window) break;
}
i >= 0 && this.setChildIndex(e, i);
};
i.prototype.showModalWait = function(e) {
if (null != t.UIConfig.globalModalWaiting) {
null == this._modalWaitPane && (this._modalWaitPane = t.UIPackage.createObjectFromURL(t.UIConfig.globalModalWaiting));
this._modalWaitPane.setSize(this.width, this.height);
this._modalWaitPane.addRelation(this, t.RelationType.Size);
this.addChild(this._modalWaitPane);
this._modalWaitPane.text = e;
}
};
i.prototype.closeModalWait = function() {
this._modalWaitPane && this._modalWaitPane.parent && this.removeChild(this._modalWaitPane);
};
i.prototype.closeAllExceptModals = function() {
for (var e = this._children.slice(), i = e.length, n = 0; n < i; n++) {
var o = e[n];
o instanceof t.Window && !o.modal && o.hide();
}
};
i.prototype.closeAllWindows = function() {
for (var e = this._children.slice(), i = e.length, n = 0; n < i; n++) {
var o = e[n];
o instanceof t.Window && o.hide();
}
};
i.prototype.getTopWindow = function() {
for (var e = this.numChildren - 1; e >= 0; e--) {
var i = this.getChildAt(e);
if (i instanceof t.Window) return i;
}
return null;
};
Object.defineProperty(i.prototype, "modalLayer", {
get: function() {
return this._modalLayer;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "hasModalWindow", {
get: function() {
return null != this._modalLayer.parent;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "modalWaiting", {
get: function() {
return this._modalWaitPane && this._modalWaitPane.node.activeInHierarchy;
},
enumerable: !1,
configurable: !0
});
i.prototype.getPopupPosition = function(e, i, n, o) {
var r = o || new cc.Vec2(), s = 0, a = 0;
if (i) {
r = i.localToGlobal();
var l = i.localToGlobal(i.width, i.height);
s = l.x - r.x;
a = l.y - r.y;
} else {
r = this.getTouchPosition();
r = this.globalToLocal(r.x, r.y);
}
var h = e.width * (1 - e.pivotX), c = e.height * (1 - e.pivotY);
r.x + h > this.width && (r.x = r.x + s - h);
r.y += a;
if ((void 0 === n || n === t.PopupDirection.Auto) && r.y + c > this.height || !1 === n || n === t.PopupDirection.Up) {
r.y = r.y - a - c - 1;
if (r.y < 0) {
r.y = 0;
r.x += s / 2;
}
}
return r;
};
i.prototype._addClick = function(t, e) {
var n = !1;
t.node.off(cc.Node.EventType.TOUCH_START);
t.node.off(cc.Node.EventType.TOUCH_CANCEL);
t.node.off(cc.Node.EventType.TOUCH_END);
t.node.on(cc.Node.EventType.TOUCH_START, t => {
n = !0;
t.stopPropagation();
i.inst.inputProcessor.touchBeginHandler(t);
}, t);
t.node.on(cc.Node.EventType.TOUCH_CANCEL, t => {
n = !1;
t.stopPropagation();
i.inst.inputProcessor.touchEndHandler(t);
}, t);
t.node.on(cc.Node.EventType.TOUCH_END, t => {
if (n) {
n = !1;
t.stopPropagation();
i.inst.inputProcessor.touchEndHandler(t);
e(t);
}
}, t);
};
i.prototype.showPopup = function(t, e, i) {
t.getChild("KW_BG") && this._addClick(t, t => {
t.stopPropagation();
});
if (this._popupStack.length > 0) {
var n = this._popupStack.indexOf(t);
if (-1 != n) for (var o = this._popupStack.length - 1; o >= n; o--) this.removeChild(this._popupStack.pop());
}
this._popupStack.push(t);
if (e) for (var r = e; r; ) {
if (r.parent == this) {
t.sortingOrder < r.sortingOrder && (t.sortingOrder = r.sortingOrder);
break;
}
r = r.parent;
}
this.addChild(t);
this.adjustModalLayer();
var s = this.getPopupPosition(t, e, i);
t.setPosition(s.x, s.y);
};
i.prototype.togglePopup = function(t, e, i) {
-1 == this._justClosedPopups.indexOf(t) && this.showPopup(t, e, i);
};
i.prototype.hidePopup = function(t) {
if (t) {
var e = this._popupStack.indexOf(t);
if (-1 != e) for (var i = this._popupStack.length - 1; i >= e; i--) this.closePopup(this._popupStack.pop());
} else {
for (i = this._popupStack.length - 1; i >= 0; i--) this.closePopup(this._popupStack[i]);
this._popupStack.length = 0;
}
};
Object.defineProperty(i.prototype, "hasAnyPopup", {
get: function() {
return 0 != this._popupStack.length;
},
enumerable: !1,
configurable: !0
});
i.prototype.closePopup = function(e) {
e.parent && (e instanceof t.Window ? e.hide() : this.removeChild(e));
};
i.prototype.showTooltips = function(e) {
if (null == this._defaultTooltipWin) {
var i = t.UIConfig.tooltipsWin;
if (!i) {
console.error("UIConfig.tooltipsWin not defined");
return;
}
this._defaultTooltipWin = t.UIPackage.createObjectFromURL(i);
}
this._defaultTooltipWin.text = e;
this.showTooltipsWin(this._defaultTooltipWin);
};
i.prototype.showTooltipsWin = function(t) {
this.hideTooltips();
this._tooltipWin = t;
var e = this.getTouchPosition();
e.x += 10;
e.y += 20;
this.globalToLocal(e.x, e.y, e);
if (e.x + this._tooltipWin.width > this.width) {
e.x = e.x - this._tooltipWin.width - 1;
e.x < 0 && (e.x = 10);
}
if (e.y + this._tooltipWin.height > this.height) {
e.y = e.y - this._tooltipWin.height - 1;
e.y < 0 && (e.y = 10);
}
this._tooltipWin.setPosition(e.x, e.y);
this.addChild(this._tooltipWin);
};
i.prototype.hideTooltips = function() {
if (this._tooltipWin) {
this._tooltipWin.parent && this.removeChild(this._tooltipWin);
this._tooltipWin = null;
}
};
Object.defineProperty(i.prototype, "volumeScale", {
get: function() {
return this._volumeScale;
},
set: function(t) {
this._volumeScale = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.playOneShotSound = function(e, i) {
void 0 === i && (i = 1);
cc.audioEngine.play(e, !1, this._volumeScale * i * t.UIConfig.buttonSoundVolumeScale);
};
i.prototype.adjustModalLayer = function() {
var e = this.numChildren;
this._modalWaitPane && this._modalWaitPane.parent && this.setChildIndex(this._modalWaitPane, e - 1);
for (var i = e - 1; i >= 0; i--) {
var n = this.getChildAt(i);
if (n instanceof t.Window && n.modal) {
null == this._modalLayer.parent ? this.addChildAt(this._modalLayer, i) : this.setChildIndexBefore(this._modalLayer, i);
return;
}
}
this._modalLayer.parent && this.removeChild(this._modalLayer);
};
i.prototype.onTouchBegin_1 = function(t) {
this._tooltipWin && this.hideTooltips();
this._justClosedPopups.length = 0;
if (this._popupStack.length > 0) {
for (var e = t.initiator; e && e != this; ) {
var i = this._popupStack.indexOf(e);
if (-1 != i) {
for (var n = this._popupStack.length - 1; n > i; n--) {
var o = this._popupStack.pop();
this.closePopup(o);
this._justClosedPopups.push(o);
}
return;
}
e = e.findParent();
}
for (n = this._popupStack.length - 1; n >= 0; n--) {
o = this._popupStack[n];
this.closePopup(o);
this._justClosedPopups.push(o);
}
this._popupStack.length = 0;
}
};
i.prototype.onWinResize = function() {
if (this && cc.isValid(this._node, !0)) {
var t = cc.view.getCanvasSize();
t.width /= cc.view.getScaleX();
t.height /= cc.view.getScaleY();
this.setSize(t.width, t.height);
var e = cc.view.getViewportRect().origin;
e.x = e.x / cc.view.getScaleX();
e.y = e.y / cc.view.getScaleY();
this._node.setPosition(-e.x - this._width / 2, this._height / 2 - e.y);
this.updateContentScaleLevel();
}
};
i.prototype.updateSize = function() {
this.onWinResize();
};
i.prototype.handlePositionChanged = function() {};
i.prototype.updateContentScaleLevel = function() {
var t = Math.max(cc.view.getScaleX(), cc.view.getScaleY());
i.contentScaleLevel = t >= 3.5 ? 3 : t >= 2.5 ? 2 : t >= 1.5 ? 1 : 0;
};
i.contentScaleLevel = 0;
return i;
}(t.GComponent);
t.GRoot = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var t = e.call(this) || this;
t._node.name = "GScrollBar";
t._dragOffset = new cc.Vec2();
t._scrollPerc = 0;
return t;
}
n.prototype.setScrollPane = function(t, e) {
this._target = t;
this._vertical = e;
};
n.prototype.setDisplayPerc = function(t) {
if (this._vertical) {
this._fixedGripSize || (this._grip.height = Math.floor(t * this._bar.height));
this._grip.y = this._bar.y + (this._bar.height - this._grip.height) * this._scrollPerc;
} else {
this._fixedGripSize || (this._grip.width = Math.floor(t * this._bar.width));
this._grip.x = this._bar.x + (this._bar.width - this._grip.width) * this._scrollPerc;
}
this._grip.visible = 0 != t && 1 != t;
};
n.prototype.setScrollPerc = function(t) {
this._scrollPerc = t;
this._vertical ? this._grip.y = this._bar.y + (this._bar.height - this._grip.height) * this._scrollPerc : this._grip.x = this._bar.x + (this._bar.width - this._grip.width) * this._scrollPerc;
};
Object.defineProperty(n.prototype, "minSize", {
get: function() {
return this._vertical ? (this._arrowButton1 ? this._arrowButton1.height : 0) + (this._arrowButton2 ? this._arrowButton2.height : 0) : (this._arrowButton1 ? this._arrowButton1.width : 0) + (this._arrowButton2 ? this._arrowButton2.width : 0);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "gripDragging", {
get: function() {
return this._gripDragging;
},
enumerable: !1,
configurable: !0
});
n.prototype.constructExtension = function(e) {
e.seek(0, 6);
this._fixedGripSize = e.readBool();
this._grip = this.getChild("grip");
if (this._grip) {
this._bar = this.getChild("bar");
if (this._bar) {
this._arrowButton1 = this.getChild("arrow1");
this._arrowButton2 = this.getChild("arrow2");
this._grip.on(t.Event.TOUCH_BEGIN, this.onGripTouchDown, this);
this._grip.on(t.Event.TOUCH_MOVE, this.onGripTouchMove, this);
this._grip.on(t.Event.TOUCH_END, this.onGripTouchEnd, this);
this._arrowButton1 && this._arrowButton1.on(t.Event.TOUCH_BEGIN, this.onClickArrow1, this);
this._arrowButton2 && this._arrowButton2.on(t.Event.TOUCH_BEGIN, this.onClickArrow2, this);
this.on(t.Event.TOUCH_BEGIN, this.onBarTouchBegin, this);
} else console.error("需要定义bar");
} else console.error("需要定义grip");
};
n.prototype.onGripTouchDown = function(t) {
t.stopPropagation();
t.captureTouch();
this._gripDragging = !0;
this._target.updateScrollBarVisible();
this.globalToLocal(t.pos.x, t.pos.y, this._dragOffset);
this._dragOffset.x -= this._grip.x;
this._dragOffset.y -= this._grip.y;
};
n.prototype.onGripTouchMove = function(t) {
if (this.onStage) {
var e = this.globalToLocal(t.pos.x, t.pos.y, i);
if (this._vertical) {
var n = e.y - this._dragOffset.y;
this._target.setPercY((n - this._bar.y) / (this._bar.height - this._grip.height), !1);
} else {
var o = e.x - this._dragOffset.x;
this._target.setPercX((o - this._bar.x) / (this._bar.width - this._grip.width), !1);
}
}
};
n.prototype.onGripTouchEnd = function() {
if (this.onStage) {
this._gripDragging = !1;
this._target.updateScrollBarVisible();
}
};
n.prototype.onClickArrow1 = function(t) {
t.stopPropagation();
this._vertical ? this._target.scrollUp() : this._target.scrollLeft();
};
n.prototype.onClickArrow2 = function(t) {
t.stopPropagation();
this._vertical ? this._target.scrollDown() : this._target.scrollRight();
};
n.prototype.onBarTouchBegin = function(t) {
var e = this._grip.globalToLocal(t.pos.x, t.pos.y, i);
this._vertical ? e.y < 0 ? this._target.scrollUp(4) : this._target.scrollDown(4) : e.x < 0 ? this._target.scrollLeft(4) : this._target.scrollRight(4);
};
return n;
}(t.GComponent);
t.GScrollBar = e;
var i = new cc.Vec2();
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var i = e.call(this) || this;
i._min = 0;
i._max = 0;
i._value = 0;
i._barMaxWidth = 0;
i._barMaxHeight = 0;
i._barMaxWidthDelta = 0;
i._barMaxHeightDelta = 0;
i._clickPercent = 0;
i._barStartX = 0;
i._barStartY = 0;
i.changeOnClick = !0;
i.canDrag = !0;
i._node.name = "GSlider";
i._titleType = t.ProgressTitleType.Percent;
i._value = 50;
i._max = 100;
i._clickPos = new cc.Vec2();
return i;
}
Object.defineProperty(n.prototype, "titleType", {
get: function() {
return this._titleType;
},
set: function(t) {
this._titleType = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "wholeNumbers", {
get: function() {
return this._wholeNumbers;
},
set: function(t) {
if (this._wholeNumbers != t) {
this._wholeNumbers = t;
this.update();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "min", {
get: function() {
return this._min;
},
set: function(t) {
if (this._min != t) {
this._min = t;
this.update();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "max", {
get: function() {
return this._max;
},
set: function(t) {
if (this._max != t) {
this._max = t;
this.update();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "value", {
get: function() {
return this._value;
},
set: function(t) {
if (this._value != t) {
this._value = t;
this.update();
}
},
enumerable: !1,
configurable: !0
});
n.prototype.update = function() {
this.updateWithPercent((this._value - this._min) / (this._max - this._min));
};
n.prototype.updateWithPercent = function(e, i) {
e = t.ToolSet.clamp01(e);
if (i) {
var n = t.ToolSet.clamp(this._min + (this._max - this._min) * e, this._min, this._max);
if (this._wholeNumbers) {
n = Math.round(n);
e = t.ToolSet.clamp01((n - this._min) / (this._max - this._min));
}
if (n != this._value) {
this._value = n;
this._node.emit(t.Event.STATUS_CHANGED, this);
}
}
if (this._titleObject) switch (this._titleType) {
case t.ProgressTitleType.Percent:
this._titleObject.text = Math.floor(100 * e) + "%";
break;

case t.ProgressTitleType.ValueAndMax:
this._titleObject.text = this._value + "/" + this._max;
break;

case t.ProgressTitleType.Value:
this._titleObject.text = "" + this._value;
break;

case t.ProgressTitleType.Max:
this._titleObject.text = "" + this._max;
}
var o = this.width - this._barMaxWidthDelta, r = this.height - this._barMaxHeightDelta;
if (this._reverse) {
if (this._barObjectH) {
this._barObjectH.width = Math.round(o * e);
this._barObjectH.x = this._barStartX + (o - this._barObjectH.width);
}
if (this._barObjectV) {
this._barObjectV.height = Math.round(r * e);
this._barObjectV.y = this._barStartY + (r - this._barObjectV.height);
}
} else {
this._barObjectH && (this._barObjectH.width = Math.round(o * e));
this._barObjectV && (this._barObjectV.height = Math.round(r * e));
}
};
n.prototype.constructExtension = function(e) {
e.seek(0, 6);
this._titleType = e.readByte();
this._reverse = e.readBool();
if (e.version >= 2) {
this._wholeNumbers = e.readBool();
this.changeOnClick = e.readBool();
}
this._titleObject = this.getChild("title");
this._barObjectH = this.getChild("bar");
this._barObjectV = this.getChild("bar_v");
this._gripObject = this.getChild("grip");
if (this._barObjectH) {
this._barMaxWidth = this._barObjectH.width;
this._barMaxWidthDelta = this.width - this._barMaxWidth;
this._barStartX = this._barObjectH.x;
}
if (this._barObjectV) {
this._barMaxHeight = this._barObjectV.height;
this._barMaxHeightDelta = this.height - this._barMaxHeight;
this._barStartY = this._barObjectV.y;
}
if (this._gripObject) {
this._gripObject.on(t.Event.TOUCH_BEGIN, this.onGripTouchBegin, this);
this._gripObject.on(t.Event.TOUCH_MOVE, this.onGripTouchMove, this);
}
this._node.on(t.Event.TOUCH_BEGIN, this.onBarTouchBegin, this);
};
n.prototype.handleSizeChanged = function() {
e.prototype.handleSizeChanged.call(this);
this._barObjectH && (this._barMaxWidth = this.width - this._barMaxWidthDelta);
this._barObjectV && (this._barMaxHeight = this.height - this._barMaxHeightDelta);
this._underConstruct || this.update();
};
n.prototype.setup_afterAdd = function(t, i) {
e.prototype.setup_afterAdd.call(this, t, i);
if (t.seek(i, 6)) if (t.readByte() == this.packageItem.objectType) {
this._value = t.readInt();
this._max = t.readInt();
t.version >= 2 && (this._min = t.readInt());
this.update();
} else this.update(); else this.update();
};
n.prototype.onGripTouchBegin = function(e) {
this.canDrag = !0;
e.stopPropagation();
e.captureTouch();
this._clickPos = this.globalToLocal(e.pos.x, e.pos.y);
this._clickPercent = t.ToolSet.clamp01((this._value - this._min) / (this._max - this._min));
};
n.prototype.onGripTouchMove = function(t) {
if (this.canDrag) {
var e, n = this.globalToLocal(t.pos.x, t.pos.y, i), o = n.x - this._clickPos.x, r = n.y - this._clickPos.y;
if (this._reverse) {
o = -o;
r = -r;
}
e = this._barObjectH ? this._clickPercent + o / this._barMaxWidth : this._clickPercent + r / this._barMaxHeight;
this.updateWithPercent(e, !0);
}
};
n.prototype.onBarTouchBegin = function(e) {
if (this.changeOnClick) {
var n = this._gripObject.globalToLocal(e.pos.x, e.pos.y, i), o = t.ToolSet.clamp01((this._value - this._min) / (this._max - this._min)), r = 0;
null != this._barObjectH && (r = (n.x - this._gripObject.width / 2) / this._barMaxWidth);
null != this._barObjectV && (r = (n.y - this._gripObject.height / 2) / this._barMaxHeight);
this._reverse ? o -= r : o += r;
this.updateWithPercent(o, !0);
}
};
return n;
}(t.GComponent);
t.GSlider = e;
var i = new cc.Vec2();
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var t = e.call(this) || this;
t._node.name = "GTextInput";
t._touchDisabled = !1;
return t;
}
n.prototype.createRenderer = function() {
this._editBox = this._node.addComponent(i);
this._editBox.maxLength = -1;
this._editBox._updateTextLabel();
this._node.on("text-changed", this.onTextChanged, this);
this.on(t.Event.TOUCH_END, this.onTouchEnd1, this);
this.autoSize = t.AutoSizeType.None;
};
Object.defineProperty(n.prototype, "editable", {
get: function() {
return this._editBox.enabled;
},
set: function(t) {
this._editBox.enabled = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "maxLength", {
get: function() {
return this._editBox.maxLength;
},
set: function(t) {
0 == t && (t = -1);
this._editBox.maxLength = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "promptText", {
get: function() {
return this._promptText;
},
set: function(e) {
this._promptText = e;
var i = !this._editBox.placeholderLabel;
this._editBox._updatePlaceholderLabel();
i && this.assignFont(this._editBox.placeholderLabel, this._realFont);
this._editBox.placeholderLabel.string = t.UBBParser.inst.parse(this._promptText, !0);
if (t.UBBParser.inst.lastColor) {
var n = this._editBox.placeholderLabel.node.color;
n || (n = new cc.Color());
n.fromHEX(t.UBBParser.inst.lastColor);
this.assignFontColor(this._editBox.placeholderLabel, n);
} else this.assignFontColor(this._editBox.placeholderLabel, this._color);
t.UBBParser.inst.lastSize ? this._editBox.placeholderLabel.fontSize = parseInt(t.UBBParser.inst.lastSize) : this._editBox.placeholderLabel.fontSize = this._fontSize;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "restrict", {
get: function() {
return this._restrict;
},
set: function(t) {
this._restrict = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "password", {
get: function() {
return this._editBox.inputFlag == cc.EditBox.InputFlag.PASSWORD;
},
set: function(t) {
this._editBox.inputFlag = t ? cc.EditBox.InputFlag.PASSWORD : cc.EditBox.InputFlag.DEFAULT;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "align", {
get: function() {
return this._editBox.textLabel.horizontalAlign;
},
set: function(t) {
this._editBox.textLabel.horizontalAlign = t;
this._editBox.placeholderLabel && (this._editBox.placeholderLabel.horizontalAlign = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "verticalAlign", {
get: function() {
return this._editBox.textLabel.verticalAlign;
},
set: function(t) {
this._editBox.textLabel.verticalAlign = t;
this._editBox.placeholderLabel && (this._editBox.placeholderLabel.verticalAlign = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "singleLine", {
get: function() {
return this._editBox.inputMode != cc.EditBox.InputMode.ANY;
},
set: function(t) {
this._editBox.inputMode = t ? cc.EditBox.InputMode.SINGLE_LINE : cc.EditBox.InputMode.ANY;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "inputMode", {
get: function() {
return this._editBox.inputMode;
},
set: function(t) {
const e = [ cc.EditBox.InputMode.ANY, cc.EditBox.InputMode.ANY, cc.EditBox.InputMode.ANY, cc.EditBox.InputMode.URL, cc.EditBox.InputMode.NUMERIC, cc.EditBox.InputMode.PHONE_NUMBER, cc.EditBox.InputMode.EMAIL_ADDR ];
this._editBox.inputMode = e[t] || cc.EditBox.InputMode.ANY;
},
enumerable: !1,
configurable: !0
});
n.prototype.requestFocus = function() {
this._editBox.focus();
};
n.prototype.markSizeChanged = function() {
if (!(this._underConstruct || this._autoSize != t.AutoSizeType.Both && this._autoSize != t.AutoSizeType.Height || this._sizeDirty)) {
this._node.emit(t.Event.SIZE_DELAY_CHANGE, this);
this._sizeDirty = !0;
}
};
n.prototype.updateText = function() {
var e = this._text;
this._templateVars && (e = this.parseTemplate(e));
this._ubbEnabled && (e = t.UBBParser.inst.parse(t.ToolSet.encodeHTML(e), !0));
this._editBox.string = e;
};
n.prototype.updateFont = function() {
this.assignFont(this._editBox.textLabel, this._realFont);
this._editBox.placeholderLabel && this.assignFont(this._editBox.placeholderLabel, this._realFont);
};
n.prototype.updateFontColor = function() {
this.assignFontColor(this._editBox.textLabel, this._color);
};
n.prototype.updateFontSize = function() {
this._editBox.textLabel.fontSize = this._fontSize;
this._editBox.textLabel.lineHeight = this._fontSize + this._leading;
this._editBox.placeholderLabel && (this._editBox.placeholderLabel.fontSize = this._editBox.textLabel.fontSize);
};
n.prototype.updateOverflow = function() {
if (this._autoSize == t.AutoSizeType.Both) this._editBox.textLabel.overflow = cc.Label.Overflow.NONE; else if (this._autoSize == t.AutoSizeType.Height) {
this._editBox.textLabel.overflow = cc.Label.Overflow.RESIZE_HEIGHT;
this._node.width = this._width;
} else if (this._autoSize == t.AutoSizeType.Shrink) {
this._editBox.textLabel.overflow = cc.Label.Overflow.SHRINK;
this._node.setContentSize(this._width, this._height);
} else {
this._editBox.textLabel.overflow = cc.Label.Overflow.CLAMP;
this._node.setContentSize(this._width, this._height);
}
};
n.prototype.onTextChanged = function() {
var t = this._editBox;
if (this._restrict) {
var e = new RegExp(this._restrict);
let i = "";
for (let n = 0; n < t.string.length; n++) e.test(t.string.charAt(n)) && (i += t.string.charAt(n));
t.string = i;
}
this._text = t.string;
};
n.prototype.onTouchEnd1 = function(e) {
const {x: i, y: n} = t.GRoot.inst.touchStartPos, o = this.globalToLocal(i, n);
o.x < -1 || o.y < -1 || o.x > this.width + 1 || o.y > this.height + 1 || this._editBox.openKeyboard(e.touch);
};
n.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 4);
var n = t.readS();
null != n && (this.promptText = n);
null != (n = t.readS()) && (this.restrict = n);
var o = t.readInt();
0 != o && (this.maxLength = o);
0 != (o = t.readInt()) && (this.inputMode = o);
t.readBool() && (this.password = !0);
if (this._editBox.placeholderLabel) {
var r = this._editBox.textLabel.horizontalAlign;
this._editBox.placeholderLabel.horizontalAlign = r;
var s = this._editBox.textLabel.verticalAlign;
this._editBox.placeholderLabel.verticalAlign = s;
}
this.updateOverflow();
};
return n;
}(t.GTextField);
t.GTextInput = e;
var i = function(t) {
__extends(e, t);
function e() {
return null !== t && t.apply(this, arguments) || this;
}
e.prototype._registerEvent = function() {};
e.prototype._syncSize = function() {
var t = this.node.getContentSize();
this._impl.setSize(t.width, t.height);
this.textLabel && this.textLabel.node.setContentSize(t.width, t.height);
this.placeholderLabel && this.placeholderLabel.node.setContentSize(t.width, t.height);
};
e.prototype.openKeyboard = function() {
var t = this._impl;
t && t.beginEditing();
};
return e;
}(cc.EditBox);
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var i = e.call(this) || this;
i._indent = 15;
i._rootNode = new t.GTreeNode(!0);
i._rootNode._setTree(i);
i._rootNode.expanded = !0;
return i;
}
Object.defineProperty(n.prototype, "rootNode", {
get: function() {
return this._rootNode;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "indent", {
get: function() {
return this._indent;
},
set: function(t) {
this._indent = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "clickToExpand", {
get: function() {
return this._clickToExpand;
},
set: function(t) {
this._clickToExpand = t;
},
enumerable: !1,
configurable: !0
});
n.prototype.getSelectedNode = function() {
return -1 != this.selectedIndex ? this.getChildAt(this.selectedIndex)._treeNode : null;
};
n.prototype.getSelectedNodes = function(t) {
t || (t = new Array());
i.length = 0;
e.prototype.getSelection.call(this, i);
for (var n = i.length, o = new Array(), r = 0; r < n; r++) {
var s = this.getChildAt(i[r])._treeNode;
o.push(s);
}
return o;
};
n.prototype.selectNode = function(t, e) {
for (var i = t.parent; i && i != this._rootNode; ) {
i.expanded = !0;
i = i.parent;
}
t._cell && this.addSelection(this.getChildIndex(t._cell), e);
};
n.prototype.unselectNode = function(t) {
t._cell && this.removeSelection(this.getChildIndex(t._cell));
};
n.prototype.expandAll = function(t) {
t || (t = this._rootNode);
t.expanded = !0;
for (var e = t.numChildren, i = 0; i < e; i++) {
var n = t.getChildAt(i);
n.isFolder && this.expandAll(n);
}
};
n.prototype.collapseAll = function(t) {
t || (t = this._rootNode);
t != this._rootNode && (t.expanded = !1);
for (var e = t.numChildren, i = 0; i < e; i++) {
var n = t.getChildAt(i);
n.isFolder && this.collapseAll(n);
}
};
n.prototype.createCell = function(e) {
var i = this.getFromPool(e._resURL);
if (!(i instanceof t.GComponent)) throw new Error("cannot create tree node object.");
i._treeNode = e;
e._cell = i;
var n, o = i.getChild("indent");
o && (o.width = (e.level - 1) * this._indent);
if (n = i.getController("expanded")) {
n.on(t.Event.STATUS_CHANGED, this.__expandedStateChanged, this);
n.selectedIndex = e.expanded ? 1 : 0;
}
(n = i.getController("leaf")) && (n.selectedIndex = e.isFolder ? 0 : 1);
e.isFolder && e._cell.on(t.Event.TOUCH_BEGIN, this.__cellMouseDown, this);
this.treeNodeRender && this.treeNodeRender(e, i);
};
n.prototype._afterInserted = function(t) {
t._cell || this.createCell(t);
var e = this.getInsertIndexForNode(t);
this.addChildAt(t._cell, e);
this.treeNodeRender && this.treeNodeRender(t, t._cell);
t.isFolder && t.expanded && this.checkChildren(t, e);
};
n.prototype.getInsertIndexForNode = function(t) {
var e = t.getPrevSibling();
null == e && (e = t.parent);
for (var i = this.getChildIndex(e._cell) + 1, n = t.level, o = this.numChildren, r = i; r < o && !(this.getChildAt(r)._treeNode.level <= n); r++) i++;
return i;
};
n.prototype._afterRemoved = function(t) {
this.removeNode(t);
};
n.prototype._afterExpanded = function(t) {
if (t != this._rootNode) {
null != this.treeNodeWillExpand && this.treeNodeWillExpand(t, !0);
if (null != t._cell) {
this.treeNodeRender && this.treeNodeRender(t, t._cell);
var e = t._cell.getController("expanded");
e && (e.selectedIndex = 1);
t._cell.parent && this.checkChildren(t, this.getChildIndex(t._cell));
}
} else this.checkChildren(this._rootNode, 0);
};
n.prototype._afterCollapsed = function(t) {
if (t != this._rootNode) {
this.treeNodeWillExpand && this.treeNodeWillExpand(t, !1);
if (null != t._cell) {
this.treeNodeRender && this.treeNodeRender(t, t._cell);
var e = t._cell.getController("expanded");
e && (e.selectedIndex = 0);
t._cell.parent && this.hideFolderNode(t);
}
} else this.checkChildren(this._rootNode, 0);
};
n.prototype._afterMoved = function(t) {
var e, i = this.getChildIndex(t._cell);
e = t.isFolder ? this.getFolderEndIndex(i, t.level) : i + 1;
var n, o, r = this.getInsertIndexForNode(t), s = e - i;
if (r < i) for (n = 0; n < s; n++) {
o = this.getChildAt(i + n);
this.setChildIndex(o, r + n);
} else for (n = 0; n < s; n++) {
o = this.getChildAt(i);
this.setChildIndex(o, r);
}
};
n.prototype.getFolderEndIndex = function(t, e) {
for (var i = this.numChildren, n = t + 1; n < i; n++) if (this.getChildAt(n)._treeNode.level <= e) return n;
return i;
};
n.prototype.checkChildren = function(t, e) {
for (var i = t.numChildren, n = 0; n < i; n++) {
e++;
var o = t.getChildAt(n);
null == o._cell && this.createCell(o);
o._cell.parent || this.addChildAt(o._cell, e);
o.isFolder && o.expanded && (e = this.checkChildren(o, e));
}
return e;
};
n.prototype.hideFolderNode = function(t) {
for (var e = t.numChildren, i = 0; i < e; i++) {
var n = t.getChildAt(i);
n._cell && this.removeChild(n._cell);
n.isFolder && n.expanded && this.hideFolderNode(n);
}
};
n.prototype.removeNode = function(t) {
if (t._cell) {
t._cell.parent && this.removeChild(t._cell);
this.returnToPool(t._cell);
t._cell._treeNode = null;
t._cell = null;
}
if (t.isFolder) for (var e = t.numChildren, i = 0; i < e; i++) {
var n = t.getChildAt(i);
this.removeNode(n);
}
};
n.prototype.__cellMouseDown = function(e) {
var i = t.GObject.cast(e.currentTarget)._treeNode;
this._expandedStatusInEvt = i.expanded;
};
n.prototype.__expandedStateChanged = function(t) {
t.parent._treeNode.expanded = 1 == t.selectedIndex;
};
n.prototype.dispatchItemEvent = function(t, i) {
if (0 != this._clickToExpand) {
var n = t._treeNode;
n && this._expandedStatusInEvt == n.expanded && (2 == this._clickToExpand || (n.expanded = !n.expanded));
}
e.prototype.dispatchItemEvent.call(this, t, i);
};
n.prototype.setup_beforeAdd = function(t, i) {
e.prototype.setup_beforeAdd.call(this, t, i);
t.seek(i, 9);
this._indent = t.readInt();
this._clickToExpand = t.readByte();
};
n.prototype.readItems = function(e) {
var i, n, o, r, s, a, l, h = 0;
i = e.readShort();
for (n = 0; n < i; n++) {
o = e.readShort();
o += e.position;
if (null != (r = e.readS()) || (r = this.defaultItem)) {
s = e.readBool();
l = e.readByte();
var c = new t.GTreeNode(s, r);
c.expanded = !0;
if (0 == n) this._rootNode.addChild(c); else if (l > h) a.addChild(c); else if (l < h) {
for (var u = l; u <= h; u++) a = a.parent;
a.addChild(c);
} else a.parent.addChild(c);
a = c;
h = l;
this.setupItem(e, c.cell);
e.position = o;
} else e.position = o;
}
};
return n;
}(t.GList);
t.GTree = e;
var i = new Array();
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function t(t, e) {
this._level = 0;
this._resURL = e;
t && (this._children = new Array());
}
Object.defineProperty(t.prototype, "expanded", {
get: function() {
return this._expanded;
},
set: function(t) {
if (null != this._children && this._expanded != t) {
this._expanded = t;
this._tree && (this._expanded ? this._tree._afterExpanded(this) : this._tree._afterCollapsed(this));
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "isFolder", {
get: function() {
return null != this._children;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "parent", {
get: function() {
return this._parent;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "text", {
get: function() {
return this._cell ? this._cell.text : null;
},
set: function(t) {
this._cell && (this._cell.text = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "icon", {
get: function() {
return this._cell ? this._cell.icon : null;
},
set: function(t) {
this._cell && (this._cell.icon = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "cell", {
get: function() {
return this._cell;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "level", {
get: function() {
return this._level;
},
enumerable: !1,
configurable: !0
});
t.prototype._setLevel = function(t) {
this._level = t;
};
t.prototype.addChild = function(t) {
this.addChildAt(t, this._children.length);
return t;
};
t.prototype.addChildAt = function(t, e) {
if (!t) throw new Error("child is null");
var i = this._children.length;
if (e >= 0 && e <= i) {
if (t._parent == this) this.setChildIndex(t, e); else {
t._parent && t._parent.removeChild(t);
e == this._children.length ? this._children.push(t) : this._children.splice(e, 0, t);
t._parent = this;
t._level = this._level + 1;
t._setTree(this._tree);
(this._tree && this == this._tree.rootNode || this._cell && this._cell.parent && this._expanded) && this._tree._afterInserted(t);
}
return t;
}
throw new RangeError("Invalid child index");
};
t.prototype.removeChild = function(t) {
var e = this._children.indexOf(t);
-1 != e && this.removeChildAt(e);
return t;
};
t.prototype.removeChildAt = function(t) {
if (t >= 0 && t < this.numChildren) {
var e = this._children[t];
this._children.splice(t, 1);
e._parent = null;
if (this._tree) {
e._setTree(null);
this._tree._afterRemoved(e);
}
return e;
}
throw "Invalid child index";
};
t.prototype.removeChildren = function(t, e) {
t = t || 0;
null == e && (e = -1);
(e < 0 || e >= this.numChildren) && (e = this.numChildren - 1);
for (var i = t; i <= e; ++i) this.removeChildAt(t);
};
t.prototype.getChildAt = function(t) {
if (t >= 0 && t < this.numChildren) return this._children[t];
throw "Invalid child index";
};
t.prototype.getChildIndex = function(t) {
return this._children.indexOf(t);
};
t.prototype.getPrevSibling = function() {
if (null == this._parent) return null;
var t = this._parent._children.indexOf(this);
return t <= 0 ? null : this._parent._children[t - 1];
};
t.prototype.getNextSibling = function() {
if (null == this._parent) return null;
var t = this._parent._children.indexOf(this);
return t < 0 || t >= this._parent._children.length - 1 ? null : this._parent._children[t + 1];
};
t.prototype.setChildIndex = function(t, e) {
var i = this._children.indexOf(t);
if (-1 == i) throw "Not a child of this container";
var n = this._children.length;
e < 0 ? e = 0 : e > n && (e = n);
if (i != e) {
this._children.splice(i, 1);
this._children.splice(e, 0, t);
(this._tree && this == this._tree.rootNode || this._cell && this._cell.parent && this._expanded) && this._tree._afterMoved(t);
}
};
t.prototype.swapChildren = function(t, e) {
var i = this._children.indexOf(t), n = this._children.indexOf(e);
if (-1 == i || -1 == n) throw "Not a child of this container";
this.swapChildrenAt(i, n);
};
t.prototype.swapChildrenAt = function(t, e) {
var i = this._children[t], n = this._children[e];
this.setChildIndex(i, e);
this.setChildIndex(n, t);
};
Object.defineProperty(t.prototype, "numChildren", {
get: function() {
return this._children.length;
},
enumerable: !1,
configurable: !0
});
t.prototype.expandToRoot = function() {
for (var t = this; t; ) {
t.expanded = !0;
t = t.parent;
}
};
Object.defineProperty(t.prototype, "tree", {
get: function() {
return this._tree;
},
enumerable: !1,
configurable: !0
});
t.prototype._setTree = function(t) {
this._tree = t;
this._tree && this._tree.treeNodeWillExpand && this._expanded && this._tree.treeNodeWillExpand(this, !0);
if (this._children) for (var e = this._children.length, i = 0; i < e; i++) {
var n = this._children[i];
n._level = this._level + 1;
n._setTree(t);
}
};
return t;
}();
t.GTreeNode = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function t() {
this.left = 0;
this.right = 0;
this.top = 0;
this.bottom = 0;
}
t.prototype.copy = function(t) {
this.top = t.top;
this.bottom = t.bottom;
this.left = t.left;
this.right = t.right;
};
t.prototype.isNone = function() {
return 0 == this.left && 0 == this.right && 0 == this.top && 0 == this.bottom;
};
return t;
}();
t.Margin = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e() {
this.width = 0;
this.height = 0;
}
e.prototype.load = function() {
return this.owner.getItemAsset(this);
};
e.prototype.getBranch = function() {
if (this.branches && -1 != this.owner._branchIndex) {
var t = this.branches[this.owner._branchIndex];
if (t) return this.owner.getItemById(t);
}
return this;
};
e.prototype.getHighResolution = function() {
if (this.highResolution && t.GRoot.contentScaleLevel > 0) {
var e = this.highResolution[t.GRoot.contentScaleLevel - 1];
if (e) return this.owner.getItemById(e);
}
return this;
};
e.prototype.toString = function() {
return this.name;
};
return e;
}();
t.PackageItem = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e(e) {
if (!e && !(e = t.UIConfig.popupMenu)) throw "UIConfig.popupMenu not defined";
this._contentPane = t.UIPackage.createObjectFromURL(e);
this._contentPane.on(t.Event.DISPLAY, this.onDisplay, this);
this._list = this._contentPane.getChild("list");
this._list.removeChildrenToPool();
this._list.addRelation(this._contentPane, t.RelationType.Width);
this._list.removeRelation(this._contentPane, t.RelationType.Height);
this._contentPane.addRelation(this._list, t.RelationType.Height);
this._list.on(t.Event.CLICK_ITEM, this.onClickItem, this);
}
e.prototype.dispose = function() {
this._contentPane.dispose();
};
e.prototype.addItem = function(t, e) {
var i = this._list.addItemFromPool();
i.title = t;
i.data = e;
i.grayed = !1;
var n = i.getController("checked");
n && (n.selectedIndex = 0);
return i;
};
e.prototype.addItemAt = function(t, e, i) {
var n = this._list.getFromPool();
this._list.addChildAt(n, e);
n.title = t;
n.data = i;
n.grayed = !1;
var o = n.getController("checked");
o && (o.selectedIndex = 0);
return n;
};
e.prototype.addSeperator = function() {
if (null == t.UIConfig.popupMenu_seperator) throw "UIConfig.popupMenu_seperator not defined";
this.list.addItemFromPool(t.UIConfig.popupMenu_seperator);
};
e.prototype.getItemName = function(t) {
return this._list.getChildAt(t).name;
};
e.prototype.setItemText = function(t, e) {
this._list.getChild(t).title = e;
};
e.prototype.setItemVisible = function(t, e) {
var i = this._list.getChild(t);
if (i.visible != e) {
i.visible = e;
this._list.setBoundsChangedFlag();
}
};
e.prototype.setItemGrayed = function(t, e) {
this._list.getChild(t).grayed = e;
};
e.prototype.setItemCheckable = function(t, e) {
var i = this._list.getChild(t).getController("checked");
i && (e ? 0 == i.selectedIndex && (i.selectedIndex = 1) : i.selectedIndex = 0);
};
e.prototype.setItemChecked = function(t, e) {
var i = this._list.getChild(t).getController("checked");
i && (i.selectedIndex = e ? 2 : 1);
};
e.prototype.isItemChecked = function(t) {
var e = this._list.getChild(t).getController("checked");
return !!e && 2 == e.selectedIndex;
};
e.prototype.removeItem = function(t) {
var e = this._list.getChild(t);
if (e) {
var i = this._list.getChildIndex(e);
this._list.removeChildToPoolAt(i);
return !0;
}
return !1;
};
e.prototype.clearItems = function() {
this._list.removeChildrenToPool();
};
Object.defineProperty(e.prototype, "itemCount", {
get: function() {
return this._list.numChildren;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "contentPane", {
get: function() {
return this._contentPane;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "list", {
get: function() {
return this._list;
},
enumerable: !1,
configurable: !0
});
e.prototype.show = function(e, i) {
void 0 === e && (e = null);
(null != e ? e.root : t.GRoot.inst).showPopup(this.contentPane, e instanceof t.GRoot ? null : e, i);
};
e.prototype.onClickItem = function(t, e) {
var i = this;
this._list._partner.callLater(function() {
i.onClickItem2(t, e);
}, .1);
};
e.prototype.onClickItem2 = function(e, i) {
if (t.GRoot.inst.getIsButton(e)) if (e.grayed) this._list.selectedIndex = -1; else {
var n = e.getController("checked");
n && 0 != n.selectedIndex && (1 == n.selectedIndex ? n.selectedIndex = 2 : n.selectedIndex = 1);
this._contentPane.parent.hidePopup(this.contentPane);
e.data instanceof Function && e.data(e, i);
}
};
e.prototype.onDisplay = function() {
this._list.selectedIndex = -1;
this._list.resizeToFit(1e5, 10);
};
return e;
}();
t.PopupMenu = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e(t) {
this._owner = t;
this._defs = new Array();
}
Object.defineProperty(e.prototype, "owner", {
get: function() {
return this._owner;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "target", {
get: function() {
return this._target;
},
set: function(t) {
if (this._target != t) {
this._target && this.releaseRefTarget(this._target);
this._target = t;
this._target && this.addRefTarget(this._target);
}
},
enumerable: !1,
configurable: !0
});
e.prototype.add = function(e, i) {
if (e != t.RelationType.Size) {
for (var n = this._defs.length, o = 0; o < n; o++) if (this._defs[o].type == e) return;
this.internalAdd(e, i);
} else {
this.add(t.RelationType.Width, i);
this.add(t.RelationType.Height, i);
}
};
e.prototype.internalAdd = function(e, n) {
if (e != t.RelationType.Size) {
var o = new i();
o.percent = n;
o.type = e;
o.axis = e <= t.RelationType.Right_Right || e == t.RelationType.Width || e >= t.RelationType.LeftExt_Left && e <= t.RelationType.RightExt_Right ? 0 : 1;
this._defs.push(o);
} else {
this.internalAdd(t.RelationType.Width, n);
this.internalAdd(t.RelationType.Height, n);
}
};
e.prototype.remove = function(e) {
if (e != t.RelationType.Size) {
for (var i = this._defs.length, n = 0; n < i; n++) if (this._defs[n].type == e) {
this._defs.splice(n, 1);
break;
}
} else {
this.remove(t.RelationType.Width);
this.remove(t.RelationType.Height);
}
};
e.prototype.copyFrom = function(t) {
this.target = t.target;
this._defs.length = 0;
for (var e = t._defs.length, n = 0; n < e; n++) {
var o = t._defs[n], r = new i();
r.copyFrom(o);
this._defs.push(r);
}
};
e.prototype.dispose = function() {
if (this._target) {
this.releaseRefTarget(this._target);
this._target = null;
}
};
Object.defineProperty(e.prototype, "isEmpty", {
get: function() {
return 0 == this._defs.length;
},
enumerable: !1,
configurable: !0
});
e.prototype.applyOnSelfResized = function(e, i, n) {
for (var o = this._owner.x, r = this._owner.y, s = this._defs.length, a = 0; a < s; a++) switch (this._defs[a].type) {
case t.RelationType.Center_Center:
this._owner.x -= (.5 - (n ? this._owner.pivotX : 0)) * e;
break;

case t.RelationType.Right_Center:
case t.RelationType.Right_Left:
case t.RelationType.Right_Right:
this._owner.x -= (1 - (n ? this._owner.pivotX : 0)) * e;
break;

case t.RelationType.Middle_Middle:
this._owner.y -= (.5 - (n ? this._owner.pivotY : 0)) * i;
break;

case t.RelationType.Bottom_Middle:
case t.RelationType.Bottom_Top:
case t.RelationType.Bottom_Bottom:
this._owner.y -= (1 - (n ? this._owner.pivotY : 0)) * i;
}
if (o != this._owner.x || r != this._owner.y) {
o = this._owner.x - o;
r = this._owner.y - r;
this._owner.updateGearFromRelations(1, o, r);
if (this._owner.parent) {
var l = this._owner.parent._transitions.length;
if (l > 0) for (a = 0; a < l; ++a) this._owner.parent._transitions[a].updateFromRelations(this._owner.id, o, r);
}
}
};
e.prototype.applyOnXYChanged = function(e, i, n) {
var o;
switch (e.type) {
case t.RelationType.Left_Left:
case t.RelationType.Left_Center:
case t.RelationType.Left_Right:
case t.RelationType.Center_Center:
case t.RelationType.Right_Left:
case t.RelationType.Right_Center:
case t.RelationType.Right_Right:
this._owner.x += i;
break;

case t.RelationType.Top_Top:
case t.RelationType.Top_Middle:
case t.RelationType.Top_Bottom:
case t.RelationType.Middle_Middle:
case t.RelationType.Bottom_Top:
case t.RelationType.Bottom_Middle:
case t.RelationType.Bottom_Bottom:
this._owner.y += n;
break;

case t.RelationType.Width:
case t.RelationType.Height:
break;

case t.RelationType.LeftExt_Left:
case t.RelationType.LeftExt_Right:
if (this._owner != this._target.parent) {
o = this._owner.xMin;
this._owner.width = this._owner._rawWidth - i;
this._owner.xMin = o + i;
} else this._owner.width = this._owner._rawWidth - i;
break;

case t.RelationType.RightExt_Left:
case t.RelationType.RightExt_Right:
if (this._owner != this._target.parent) {
o = this._owner.xMin;
this._owner.width = this._owner._rawWidth + i;
this._owner.xMin = o;
} else this._owner.width = this._owner._rawWidth + i;
break;

case t.RelationType.TopExt_Top:
case t.RelationType.TopExt_Bottom:
if (this._owner != this._target.parent) {
o = this._owner.yMin;
this._owner.height = this._owner._rawHeight - n;
this._owner.yMin = o + n;
} else this._owner.height = this._owner._rawHeight - n;
break;

case t.RelationType.BottomExt_Top:
case t.RelationType.BottomExt_Bottom:
if (this._owner != this._target.parent) {
o = this._owner.yMin;
this._owner.height = this._owner._rawHeight + n;
this._owner.yMin = o;
} else this._owner.height = this._owner._rawHeight + n;
}
};
e.prototype.applyOnSizeChanged = function(e) {
var i, n, o = 0, r = 0, s = 0;
if (0 == e.axis) {
if (this._target != this._owner.parent) {
o = this._target.x;
this._target.pivotAsAnchor && (r = this._target.pivotX);
}
e.percent ? 0 != this._targetWidth && (s = this._target._width / this._targetWidth) : s = this._target._width - this._targetWidth;
} else {
if (this._target != this._owner.parent) {
o = this._target.y;
this._target.pivotAsAnchor && (r = this._target.pivotY);
}
e.percent ? 0 != this._targetHeight && (s = this._target._height / this._targetHeight) : s = this._target._height - this._targetHeight;
}
switch (e.type) {
case t.RelationType.Left_Left:
e.percent ? this._owner.xMin = o + (this._owner.xMin - o) * s : 0 != r && (this._owner.x += s * -r);
break;

case t.RelationType.Left_Center:
e.percent ? this._owner.xMin = o + (this._owner.xMin - o) * s : this._owner.x += s * (.5 - r);
break;

case t.RelationType.Left_Right:
e.percent ? this._owner.xMin = o + (this._owner.xMin - o) * s : this._owner.x += s * (1 - r);
break;

case t.RelationType.Center_Center:
e.percent ? this._owner.xMin = o + (this._owner.xMin + .5 * this._owner._rawWidth - o) * s - .5 * this._owner._rawWidth : this._owner.x += s * (.5 - r);
break;

case t.RelationType.Right_Left:
e.percent ? this._owner.xMin = o + (this._owner.xMin + this._owner._rawWidth - o) * s - this._owner._rawWidth : 0 != r && (this._owner.x += s * -r);
break;

case t.RelationType.Right_Center:
e.percent ? this._owner.xMin = o + (this._owner.xMin + this._owner._rawWidth - o) * s - this._owner._rawWidth : this._owner.x += s * (.5 - r);
break;

case t.RelationType.Right_Right:
e.percent ? this._owner.xMin = o + (this._owner.xMin + this._owner._rawWidth - o) * s - this._owner._rawWidth : this._owner.x += s * (1 - r);
break;

case t.RelationType.Top_Top:
e.percent ? this._owner.yMin = o + (this._owner.yMin - o) * s : 0 != r && (this._owner.y += s * -r);
break;

case t.RelationType.Top_Middle:
e.percent ? this._owner.yMin = o + (this._owner.yMin - o) * s : this._owner.y += s * (.5 - r);
break;

case t.RelationType.Top_Bottom:
e.percent ? this._owner.yMin = o + (this._owner.yMin - o) * s : this._owner.y += s * (1 - r);
break;

case t.RelationType.Middle_Middle:
e.percent ? this._owner.yMin = o + (this._owner.yMin + .5 * this._owner._rawHeight - o) * s - .5 * this._owner._rawHeight : this._owner.y += s * (.5 - r);
break;

case t.RelationType.Bottom_Top:
e.percent ? this._owner.yMin = o + (this._owner.yMin + this._owner._rawHeight - o) * s - this._owner._rawHeight : 0 != r && (this._owner.y += s * -r);
break;

case t.RelationType.Bottom_Middle:
e.percent ? this._owner.yMin = o + (this._owner.yMin + this._owner._rawHeight - o) * s - this._owner._rawHeight : this._owner.y += s * (.5 - r);
break;

case t.RelationType.Bottom_Bottom:
e.percent ? this._owner.yMin = o + (this._owner.yMin + this._owner._rawHeight - o) * s - this._owner._rawHeight : this._owner.y += s * (1 - r);
break;

case t.RelationType.Width:
i = this._owner._underConstruct && this._owner == this._target.parent ? this._owner.sourceWidth - this._target.initWidth : this._owner._rawWidth - this._targetWidth;
e.percent && (i *= s);
if (this._target == this._owner.parent) if (this._owner.pivotAsAnchor) {
n = this._owner.xMin;
this._owner.setSize(this._target._width + i, this._owner._rawHeight, !0);
this._owner.xMin = n;
} else this._owner.setSize(this._target._width + i, this._owner._rawHeight, !0); else this._owner.width = this._target._width + i;
break;

case t.RelationType.Height:
i = this._owner._underConstruct && this._owner == this._target.parent ? this._owner.sourceHeight - this._target.initHeight : this._owner._rawHeight - this._targetHeight;
e.percent && (i *= s);
if (this._target == this._owner.parent) if (this._owner.pivotAsAnchor) {
n = this._owner.yMin;
this._owner.setSize(this._owner._rawWidth, this._target._height + i, !0);
this._owner.yMin = n;
} else this._owner.setSize(this._owner._rawWidth, this._target._height + i, !0); else this._owner.height = this._target._height + i;
break;

case t.RelationType.LeftExt_Left:
n = this._owner.xMin;
i = e.percent ? o + (n - o) * s - n : s * -r;
this._owner.width = this._owner._rawWidth - i;
this._owner.xMin = n + i;
break;

case t.RelationType.LeftExt_Right:
n = this._owner.xMin;
i = e.percent ? o + (n - o) * s - n : s * (1 - r);
this._owner.width = this._owner._rawWidth - i;
this._owner.xMin = n + i;
break;

case t.RelationType.RightExt_Left:
n = this._owner.xMin;
i = e.percent ? o + (n + this._owner._rawWidth - o) * s - (n + this._owner._rawWidth) : s * -r;
this._owner.width = this._owner._rawWidth + i;
this._owner.xMin = n;
break;

case t.RelationType.RightExt_Right:
n = this._owner.xMin;
if (e.percent) if (this._owner == this._target.parent) this._owner._underConstruct ? this._owner.width = o + this._target._width - this._target._width * r + (this._owner.sourceWidth - o - this._target.initWidth + this._target.initWidth * r) * s : this._owner.width = o + (this._owner._rawWidth - o) * s; else {
i = o + (n + this._owner._rawWidth - o) * s - (n + this._owner._rawWidth);
this._owner.width = this._owner._rawWidth + i;
this._owner.xMin = n;
} else if (this._owner == this._target.parent) this._owner._underConstruct ? this._owner.width = this._owner.sourceWidth + (this._target._width - this._target.initWidth) * (1 - r) : this._owner.width = this._owner._rawWidth + s * (1 - r); else {
i = s * (1 - r);
this._owner.width = this._owner._rawWidth + i;
this._owner.xMin = n;
}
break;

case t.RelationType.TopExt_Top:
n = this._owner.yMin;
i = e.percent ? o + (n - o) * s - n : s * -r;
this._owner.height = this._owner._rawHeight - i;
this._owner.yMin = n + i;
break;

case t.RelationType.TopExt_Bottom:
n = this._owner.yMin;
i = e.percent ? o + (n - o) * s - n : s * (1 - r);
this._owner.height = this._owner._rawHeight - i;
this._owner.yMin = n + i;
break;

case t.RelationType.BottomExt_Top:
n = this._owner.yMin;
i = e.percent ? o + (n + this._owner._rawHeight - o) * s - (n + this._owner._rawHeight) : s * -r;
this._owner.height = this._owner._rawHeight + i;
this._owner.yMin = n;
break;

case t.RelationType.BottomExt_Bottom:
n = this._owner.yMin;
if (e.percent) if (this._owner == this._target.parent) this._owner._underConstruct ? this._owner.height = o + this._target._height - this._target._height * r + (this._owner.sourceHeight - o - this._target.initHeight + this._target.initHeight * r) * s : this._owner.height = o + (this._owner._rawHeight - o) * s; else {
i = o + (n + this._owner._rawHeight - o) * s - (n + this._owner._rawHeight);
this._owner.height = this._owner._rawHeight + i;
this._owner.yMin = n;
} else if (this._owner == this._target.parent) this._owner._underConstruct ? this._owner.height = this._owner.sourceHeight + (this._target._height - this._target.initHeight) * (1 - r) : this._owner.height = this._owner._rawHeight + s * (1 - r); else {
i = s * (1 - r);
this._owner.height = this._owner._rawHeight + i;
this._owner.yMin = n;
}
}
};
e.prototype.addRefTarget = function(e) {
e != this._owner.parent && e.on(t.Event.XY_CHANGED, this.__targetXYChanged, this);
e.on(t.Event.SIZE_CHANGED, this.__targetSizeChanged, this);
e.on(t.Event.SIZE_DELAY_CHANGE, this.__targetSizeWillChange, this);
this._targetX = this._target.x;
this._targetY = this._target.y;
this._targetWidth = this._target._width;
this._targetHeight = this._target._height;
};
e.prototype.releaseRefTarget = function(e) {
if (e.node) {
e.off(t.Event.XY_CHANGED, this.__targetXYChanged, this);
e.off(t.Event.SIZE_CHANGED, this.__targetSizeChanged, this);
e.off(t.Event.SIZE_DELAY_CHANGE, this.__targetSizeWillChange, this);
}
};
e.prototype.__targetXYChanged = function() {
if (null != this._owner.relations.handling || null != this._owner.group && this._owner.group._updating) {
this._targetX = this._target.x;
this._targetY = this._target.y;
} else {
this._owner.relations.handling = this._target;
for (var t = this._owner.x, e = this._owner.y, i = this._target.x - this._targetX, n = this._target.y - this._targetY, o = this._defs.length, r = 0; r < o; r++) {
var s = this._defs[r];
this.applyOnXYChanged(s, i, n);
}
this._targetX = this._target.x;
this._targetY = this._target.y;
if (t != this._owner.x || e != this._owner.y) {
t = this._owner.x - t;
e = this._owner.y - e;
this._owner.updateGearFromRelations(1, t, e);
if (this._owner.parent) {
var a = this._owner.parent._transitions.length;
if (a > 0) for (r = 0; r < a; ++r) this._owner.parent._transitions[r].updateFromRelations(this._owner.id, t, e);
}
}
this._owner.relations.handling = null;
}
};
e.prototype.__targetSizeChanged = function() {
if (null == this._owner.relations.handling) {
this._owner.relations.handling = this._target;
for (var t = this._owner.x, e = this._owner.y, i = this._owner._rawWidth, n = this._owner._rawHeight, o = this._defs.length, r = 0; r < o; r++) {
var s = this._defs[r];
this.applyOnSizeChanged(s);
}
this._targetWidth = this._target._width;
this._targetHeight = this._target._height;
if (t != this._owner.x || e != this._owner.y) {
t = this._owner.x - t;
e = this._owner.y - e;
this._owner.updateGearFromRelations(1, t, e);
if (this._owner.parent) {
var a = this._owner.parent._transitions.length;
if (a > 0) for (r = 0; r < a; ++r) this._owner.parent._transitions[r].updateFromRelations(this._owner.id, t, e);
}
}
if (i != this._owner._rawWidth || n != this._owner._rawHeight) {
i = this._owner._rawWidth - i;
n = this._owner._rawHeight - n;
this._owner.updateGearFromRelations(2, i, n);
}
this._owner.relations.handling = null;
}
};
e.prototype.__targetSizeWillChange = function() {
this._owner.relations.sizeDirty = !0;
};
return e;
}();
t.RelationItem = e;
var i = function() {
function t() {}
t.prototype.copyFrom = function(t) {
this.percent = t.percent;
this.type = t.type;
this.axis = t.axis;
};
return t;
}();
t.RelationDef = i;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e(t) {
this._owner = t;
this._items = new Array();
}
e.prototype.add = function(e, i, n) {
for (var o = this._items.length, r = 0; r < o; r++) {
var s = this._items[r];
if (s.target == e) {
s.add(i, n);
return;
}
}
var a = new t.RelationItem(this._owner);
a.target = e;
a.add(i, n);
this._items.push(a);
};
e.prototype.remove = function(t, e) {
e = e || 0;
for (var i = this._items.length, n = 0; n < i; ) {
var o = this._items[n];
if (o.target == t) {
o.remove(e);
if (o.isEmpty) {
o.dispose();
this._items.splice(n, 1);
i--;
} else n++;
} else n++;
}
};
e.prototype.contains = function(t) {
for (var e = this._items.length, i = 0; i < e; i++) if (this._items[i].target == t) return !0;
return !1;
};
e.prototype.clearFor = function(t) {
for (var e = this._items.length, i = 0; i < e; ) {
var n = this._items[i];
if (n.target == t) {
n.dispose();
this._items.splice(i, 1);
e--;
} else i++;
}
};
e.prototype.clearAll = function() {
for (var t = this._items.length, e = 0; e < t; e++) this._items[e].dispose();
this._items.length = 0;
};
e.prototype.copyFrom = function(e) {
this.clearAll();
for (var i = e._items, n = i.length, o = 0; o < n; o++) {
var r = i[o], s = new t.RelationItem(this._owner);
s.copyFrom(r);
this._items.push(s);
}
};
e.prototype.dispose = function() {
this.clearAll();
};
e.prototype.onOwnerSizeChanged = function(t, e, i) {
if (0 != this._items.length) for (var n = this._items.length, o = 0; o < n; o++) this._items[o].applyOnSelfResized(t, e, i);
};
e.prototype.ensureRelationsSizeCorrect = function() {
if (0 != this._items.length) {
this.sizeDirty = !1;
for (var t = this._items.length, e = 0; e < t; e++) this._items[e].target.ensureSizeCorrect();
}
};
Object.defineProperty(e.prototype, "empty", {
get: function() {
return 0 == this._items.length;
},
enumerable: !1,
configurable: !0
});
e.prototype.setup = function(e, i) {
for (var n, o = e.readByte(), r = 0; r < o; r++) {
var s = e.readShort();
n = -1 == s ? this._owner.parent : i ? this._owner.getChildAt(s) : this._owner.parent.getChildAt(s);
var a = new t.RelationItem(this._owner);
a.target = n;
this._items.push(a);
for (var l = e.readByte(), h = 0; h < l; h++) {
var c = e.readByte(), u = e.readBool();
a.internalAdd(c, u);
}
}
};
return e;
}();
t.Relations = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(c, e);
function c() {
var t = null !== e && e.apply(this, arguments) || this;
t._aniFlag = 0;
return t;
}
c.prototype.setup = function(e) {
var i = this._owner = this.node.$gobj;
this._maskContainer = new cc.Node("ScrollPane");
this._maskContainer.setAnchorPoint(0, 1);
this._maskContainer.parent = i.node;
this._container = i._container;
this._container.parent = this._maskContainer;
this._scrollBarMargin = new t.Margin();
this._mouseWheelEnabled = !0;
this._xPos = 0;
this._yPos = 0;
this._aniFlag = 0;
this._tweening = 0;
this._footerLockedSize = 0;
this._headerLockedSize = 0;
this._viewSize = new cc.Vec2();
this._contentSize = new cc.Vec2();
this._pageSize = new cc.Vec2(1, 1);
this._overlapSize = new cc.Vec2();
this._tweenTime = new cc.Vec2();
this._tweenStart = new cc.Vec2();
this._tweenDuration = new cc.Vec2();
this._tweenChange = new cc.Vec2();
this._velocity = new cc.Vec2();
this._containerPos = new cc.Vec2();
this._beginTouchPos = new cc.Vec2();
this._lastTouchPos = new cc.Vec2();
this._lastTouchGlobalPos = new cc.Vec2();
this._scrollStep = t.UIConfig.defaultScrollStep;
this._mouseWheelStep = 2 * this._scrollStep;
this._decelerationRate = t.UIConfig.defaultScrollDecelerationRate;
this._snappingPolicy = 0;
i.on(t.Event.TOUCH_BEGIN, this.onTouchBegin, this);
i.on(t.Event.TOUCH_MOVE, this.onTouchMove, this);
i.on(t.Event.TOUCH_END, this.onTouchEnd, this);
i.on(t.Event.MOUSE_WHEEL, this.onMouseWheel, this);
this._scrollType = e.readByte();
var n = e.readByte(), o = e.readInt();
if (e.readBool()) {
this._scrollBarMargin.top = e.readInt();
this._scrollBarMargin.bottom = e.readInt();
this._scrollBarMargin.left = e.readInt();
this._scrollBarMargin.right = e.readInt();
}
var r = e.readS(), s = e.readS(), a = e.readS(), l = e.readS();
0 != (1 & o) && (this._displayOnLeft = !0);
0 != (2 & o) && (this._snapToItem = !0);
0 != (4 & o) && (this._displayInDemand = !0);
0 != (8 & o) && (this._pageMode = !0);
this._touchEffect = !!(16 & o) || !(32 & o) && t.UIConfig.defaultScrollTouchEffect;
this._bouncebackEffect = !!(64 & o) || !(128 & o) && t.UIConfig.defaultScrollBounceEffect;
0 != (256 & o) && (this._inertiaDisabled = !0);
0 == (512 & o) && this._maskContainer.addComponent(cc.Mask);
0 != (1024 & o) && (this._floating = !0);
0 != (2048 & o) && (this._dontClipMargin = !0);
n == t.ScrollBarDisplayType.Default && (n = t.UIConfig.defaultScrollBarDisplay);
if (n != t.ScrollBarDisplayType.Hidden) {
if ((this._scrollType == t.ScrollType.Both || this._scrollType == t.ScrollType.Vertical) && (h = r || t.UIConfig.verticalScrollBar)) {
this._vtScrollBar = t.UIPackage.createObjectFromURL(h);
if (!this._vtScrollBar) throw "cannot create scrollbar from " + h;
this._vtScrollBar.setScrollPane(this, !0);
this._vtScrollBar.node.parent = i.node;
}
if (this._scrollType == t.ScrollType.Both || this._scrollType == t.ScrollType.Horizontal) {
var h;
if (h = s || t.UIConfig.horizontalScrollBar) {
this._hzScrollBar = t.UIPackage.createObjectFromURL(h);
if (!this._hzScrollBar) throw "cannot create scrollbar from " + h;
this._hzScrollBar.setScrollPane(this, !1);
this._hzScrollBar.node.parent = i.node;
}
}
n == t.ScrollBarDisplayType.Auto && (this._scrollBarDisplayAuto = !0);
if (this._scrollBarDisplayAuto) {
this._vtScrollBar && (this._vtScrollBar.node.active = !1);
this._hzScrollBar && (this._hzScrollBar.node.active = !1);
i.on(t.Event.ROLL_OVER, this.onRollOver, this);
i.on(t.Event.ROLL_OUT, this.onRollOut, this);
}
}
if (a) {
this._header = t.UIPackage.createObjectFromURL(a);
if (null == this._header) throw "cannot create scrollPane header from " + a;
this._maskContainer.insertChild(this._header.node, 0);
}
if (l) {
this._footer = t.UIPackage.createObjectFromURL(l);
if (null == this._footer) throw "cannot create scrollPane footer from " + l;
this._maskContainer.insertChild(this._footer.node, 0);
}
this._refreshBarAxis = this._scrollType == t.ScrollType.Both || this._scrollType == t.ScrollType.Vertical ? "y" : "x";
this.setSize(i.width, i.height);
};
c.prototype.onDestroy = function() {
delete this._pageController;
this._hzScrollBar && this._hzScrollBar.dispose();
this._vtScrollBar && this._vtScrollBar.dispose();
this._header && this._header.dispose();
this._footer && this._footer.dispose();
};
c.prototype.hitTest = function(t, e) {
var i;
return this._vtScrollBar && (i = this._vtScrollBar.hitTest(e)) ? i : this._hzScrollBar && (i = this._hzScrollBar.hitTest(e)) ? i : this._header && this._header.node.activeInHierarchy && (i = this._header.hitTest(e)) ? i : this._footer && this._footer.node.activeInHierarchy && (i = this._footer.hitTest(e)) ? i : t.x >= this._owner.margin.left && t.y >= this._owner.margin.top && t.x < this._owner.margin.left + this._viewSize.x && t.y < this._owner.margin.top + this._viewSize.y ? this._owner : null;
};
Object.defineProperty(c.prototype, "owner", {
get: function() {
return this._owner;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "hzScrollBar", {
get: function() {
return this._hzScrollBar;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "vtScrollBar", {
get: function() {
return this._vtScrollBar;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "header", {
get: function() {
return this._header;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "footer", {
get: function() {
return this._footer;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "bouncebackEffect", {
get: function() {
return this._bouncebackEffect;
},
set: function(t) {
this._bouncebackEffect = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "touchEffect", {
get: function() {
return this._touchEffect;
},
set: function(t) {
this._touchEffect = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "scrollStep", {
get: function() {
return this._scrollStep;
},
set: function(e) {
this._scrollStep = e;
0 == this._scrollStep && (this._scrollStep = t.UIConfig.defaultScrollStep);
this._mouseWheelStep = 2 * this._scrollStep;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "decelerationRate", {
get: function() {
return this._decelerationRate;
},
set: function(t) {
this._decelerationRate = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "snapToItem", {
get: function() {
return this._snapToItem;
},
set: function(t) {
this._snapToItem = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "snappingPolicy", {
get: function() {
return this._snappingPolicy;
},
set: function(t) {
this._snappingPolicy = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "mouseWheelEnabled", {
get: function() {
return this._mouseWheelEnabled;
},
set: function(t) {
this._mouseWheelEnabled = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "isDragged", {
get: function() {
return this._dragged;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "tweening", {
get: function() {
return this._tweening;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "percX", {
get: function() {
return 0 == this._overlapSize.x ? 0 : this._xPos / this._overlapSize.x;
},
set: function(t) {
this.setPercX(t, !1);
},
enumerable: !1,
configurable: !0
});
c.prototype.setPercX = function(e, i) {
this._owner.ensureBoundsCorrect();
this.setPosX(this._overlapSize.x * t.ToolSet.clamp01(e), i);
};
Object.defineProperty(c.prototype, "percY", {
get: function() {
return 0 == this._overlapSize.y ? 0 : this._yPos / this._overlapSize.y;
},
set: function(t) {
this.setPercY(t, !1);
},
enumerable: !1,
configurable: !0
});
c.prototype.setPercY = function(e, i) {
this._owner.ensureBoundsCorrect();
this.setPosY(this._overlapSize.y * t.ToolSet.clamp01(e), i);
};
Object.defineProperty(c.prototype, "posX", {
get: function() {
return this._xPos;
},
set: function(t) {
this.setPosX(t, !1);
},
enumerable: !1,
configurable: !0
});
c.prototype.setPosX = function(e, i) {
this._owner.ensureBoundsCorrect();
1 == this._loop && (e = this.loopCheckingNewPos(e, "x"));
if ((e = t.ToolSet.clamp(e, 0, this._overlapSize.x)) != this._xPos) {
this._xPos = e;
this.posChanged(i);
}
};
Object.defineProperty(c.prototype, "posY", {
get: function() {
return this._yPos;
},
set: function(t) {
this.setPosY(t, !1);
},
enumerable: !1,
configurable: !0
});
c.prototype.setPosY = function(e, i) {
this._owner.ensureBoundsCorrect();
1 == this._loop && (e = this.loopCheckingNewPos(e, "y"));
if ((e = t.ToolSet.clamp(e, 0, this._overlapSize.y)) != this._yPos) {
this._yPos = e;
this.posChanged(i);
}
};
Object.defineProperty(c.prototype, "contentWidth", {
get: function() {
return this._contentSize.x;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "contentHeight", {
get: function() {
return this._contentSize.y;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "viewWidth", {
get: function() {
return this._viewSize.x;
},
set: function(t) {
t = t + this._owner.margin.left + this._owner.margin.right;
this._vtScrollBar && !this._floating && (t += this._vtScrollBar.width);
this._owner.width = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "viewHeight", {
get: function() {
return this._viewSize.y;
},
set: function(t) {
t = t + this._owner.margin.top + this._owner.margin.bottom;
this._hzScrollBar && !this._floating && (t += this._hzScrollBar.height);
this._owner.height = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "currentPageX", {
get: function() {
if (!this._pageMode) return 0;
var t = Math.floor(this._xPos / this._pageSize.x);
this._xPos - t * this._pageSize.x > .5 * this._pageSize.x && t++;
return t;
},
set: function(t) {
this.setCurrentPageX(t, !1);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "currentPageY", {
get: function() {
if (!this._pageMode) return 0;
var t = Math.floor(this._yPos / this._pageSize.y);
this._yPos - t * this._pageSize.y > .5 * this._pageSize.y && t++;
return t;
},
set: function(t) {
this.setCurrentPageY(t, !1);
},
enumerable: !1,
configurable: !0
});
c.prototype.setCurrentPageX = function(t, e) {
if (this._pageMode) {
this._owner.ensureBoundsCorrect();
this._overlapSize.x > 0 && this.setPosX(t * this._pageSize.x, e);
}
};
c.prototype.setCurrentPageY = function(t, e) {
if (this._pageMode) {
this._owner.ensureBoundsCorrect();
this._overlapSize.y > 0 && this.setPosY(t * this._pageSize.y, e);
}
};
Object.defineProperty(c.prototype, "isBottomMost", {
get: function() {
return this._yPos == this._overlapSize.y || 0 == this._overlapSize.y;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "isRightMost", {
get: function() {
return this._xPos == this._overlapSize.x || 0 == this._overlapSize.x;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "pageController", {
get: function() {
return this._pageController;
},
set: function(t) {
this._pageController = t;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "scrollingPosX", {
get: function() {
return t.ToolSet.clamp(-this._container.x, 0, this._overlapSize.x);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "scrollingPosY", {
get: function() {
return t.ToolSet.clamp(- -this._container.y, 0, this._overlapSize.y);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(c.prototype, "touchDragSensitivity", {
get: function() {
if (null != this._touchDragSensitivity) return this._touchDragSensitivity;
this._touchDragSensitivity = t.UIConfig.touchDragSensitivity;
return this._touchDragSensitivity;
},
set: function(t) {
this._touchDragSensitivity = t;
},
enumerable: !1,
configurable: !0
});
c.prototype.scrollTop = function(t) {
this.setPercY(0, t);
};
c.prototype.scrollBottom = function(t) {
this.setPercY(1, t);
};
c.prototype.scrollUp = function(t, e) {
null == t && (t = 1);
this._pageMode ? this.setPosY(this._yPos - this._pageSize.y * t, e) : this.setPosY(this._yPos - this._scrollStep * t, e);
};
c.prototype.scrollDown = function(t, e) {
null == t && (t = 1);
this._pageMode ? this.setPosY(this._yPos + this._pageSize.y * t, e) : this.setPosY(this._yPos + this._scrollStep * t, e);
};
c.prototype.scrollLeft = function(t, e) {
null == t && (t = 1);
this._pageMode ? this.setPosX(this._xPos - this._pageSize.x * t, e) : this.setPosX(this._xPos - this._scrollStep * t, e);
};
c.prototype.scrollRight = function(t, e) {
null == t && (t = 1);
this._pageMode ? this.setPosX(this._xPos + this._pageSize.x * t, e) : this.setPosX(this._xPos + this._scrollStep * t, e);
};
c.prototype.scrollToView = function(e, i, n) {
this._owner.ensureBoundsCorrect();
this._needRefresh && this.refresh();
var o;
if (e instanceof t.GObject) if (e.parent != this._owner) {
e.parent.localToGlobalRect(e.x, e.y, e.width, e.height, a);
o = this._owner.globalToLocalRect(a.x, a.y, a.width, a.height, a);
} else {
(o = a).x = e.x;
o.y = e.y;
o.width = e.width;
o.height = e.height;
} else o = e;
if (this._overlapSize.y > 0) {
var r = this._yPos + this._viewSize.y;
n || o.y <= this._yPos || o.height >= this._viewSize.y ? this._pageMode ? this.setPosY(Math.floor(o.y / this._pageSize.y) * this._pageSize.y, i) : this.setPosY(o.y, i) : o.y + o.height > r && (this._pageMode ? this.setPosY(Math.floor(o.y / this._pageSize.y) * this._pageSize.y, i) : o.height <= this._viewSize.y / 2 ? this.setPosY(o.y + 2 * o.height - this._viewSize.y, i) : this.setPosY(o.y + o.height - this._viewSize.y, i));
}
if (this._overlapSize.x > 0) {
var s = this._xPos + this._viewSize.x;
n || o.x <= this._xPos || o.width >= this._viewSize.x ? this._pageMode ? this.setPosX(Math.floor(o.x / this._pageSize.x) * this._pageSize.x, i) : this.setPosX(o.x, i) : o.x + o.width > s && (this._pageMode ? this.setPosX(Math.floor(o.x / this._pageSize.x) * this._pageSize.x, i) : o.width <= this._viewSize.x / 2 ? this.setPosX(o.x + 2 * o.width - this._viewSize.x, i) : this.setPosX(o.x + o.width - this._viewSize.x, i));
}
!i && this._needRefresh && this.refresh();
};
c.prototype.isChildInView = function(t) {
if (this._overlapSize.y > 0) {
var e = t.y + -this._container.y;
if (e < -t.height || e > this._viewSize.y) return !1;
}
return !(this._overlapSize.x > 0 && ((e = t.x + this._container.x) < -t.width || e > this._viewSize.x));
};
c.prototype.cancelDragging = function() {
c.draggingPane == this && (c.draggingPane = null);
i = 0;
this._dragged = !1;
};
c.prototype.lockHeader = function(t) {
if (this._headerLockedSize != t) {
var e = this._container.x, i = -this._container.y, n = "x" == this._refreshBarAxis ? e : i;
this._headerLockedSize = t;
if (!this._refreshEventDispatching && n >= 0) {
this._tweenStart.x = e;
this._tweenStart.y = i;
this._tweenChange.set(cc.Vec2.ZERO);
this._tweenChange[this._refreshBarAxis] = this._headerLockedSize - this._tweenStart[this._refreshBarAxis];
this._tweenDuration.x = this._tweenDuration.y = o;
this.startTween(2);
}
}
};
c.prototype.lockFooter = function(t) {
if (this._footerLockedSize != t) {
var e = this._container.x, i = -this._container.y, n = "x" == this._refreshBarAxis ? e : i;
this._footerLockedSize = t;
if (!this._refreshEventDispatching && n <= -this._overlapSize[this._refreshBarAxis]) {
this._tweenStart.x = e;
this._tweenStart.y = i;
this._tweenChange.set(cc.Vec2.ZERO);
var r = this._overlapSize[this._refreshBarAxis];
0 == r ? r = Math.max(this._contentSize[this._refreshBarAxis] + this._footerLockedSize - this._viewSize[this._refreshBarAxis], 0) : r += this._footerLockedSize;
this._tweenChange[this._refreshBarAxis] = -r - this._tweenStart[this._refreshBarAxis];
this._tweenDuration.x = this._tweenDuration.y = o;
this.startTween(2);
}
}
};
c.prototype.onOwnerSizeChanged = function() {
this.setSize(this._owner.width, this._owner.height);
this.posChanged(!1);
};
c.prototype.handleControllerChanged = function(e) {
this._pageController == e && (this._scrollType == t.ScrollType.Horizontal ? this.setCurrentPageX(e.selectedIndex, !0) : this.setCurrentPageY(e.selectedIndex, !0));
};
c.prototype.updatePageController = function() {
if (this._pageController && !this._pageController.changing) {
var e;
if ((e = this._scrollType == t.ScrollType.Horizontal ? this.currentPageX : this.currentPageY) < this._pageController.pageCount) {
var i = this._pageController;
this._pageController = null;
i.selectedIndex = e;
this._pageController = i;
}
}
};
c.prototype.adjustMaskContainer = function() {
var t = 0;
this._displayOnLeft && this._vtScrollBar && !this._floating && (t = this._vtScrollBar.width);
var e = this._owner;
this._dontClipMargin ? this._maskContainer.setAnchorPoint((e.margin.left + e._alignOffset.x) / e.width, 1 - (e.margin.top + e._alignOffset.y) / e.height) : this._maskContainer.setAnchorPoint(e._alignOffset.x / this._viewSize.x, 1 - e._alignOffset.y / this._viewSize.y);
e._customMask ? this._maskContainer.setPosition(t + e._alignOffset.x, -e._alignOffset.y) : this._maskContainer.setPosition(e._pivotCorrectX + t + e._alignOffset.x, e._pivotCorrectY - e._alignOffset.y);
};
c.prototype.setSize = function(t, e) {
if (cc.isValid(this.node, !0)) {
if (this._hzScrollBar) {
this._hzScrollBar.y = e - this._hzScrollBar.height;
if (this._vtScrollBar) {
this._hzScrollBar.width = t - this._vtScrollBar.width - this._scrollBarMargin.left - this._scrollBarMargin.right;
this._displayOnLeft ? this._hzScrollBar.x = this._scrollBarMargin.left + this._vtScrollBar.width : this._hzScrollBar.x = this._scrollBarMargin.left;
} else {
this._hzScrollBar.width = t - this._scrollBarMargin.left - this._scrollBarMargin.right;
this._hzScrollBar.x = this._scrollBarMargin.left;
}
}
if (this._vtScrollBar) {
this._displayOnLeft || (this._vtScrollBar.x = t - this._vtScrollBar.width);
this._hzScrollBar ? this._vtScrollBar.height = e - this._hzScrollBar.height - this._scrollBarMargin.top - this._scrollBarMargin.bottom : this._vtScrollBar.height = e - this._scrollBarMargin.top - this._scrollBarMargin.bottom;
this._vtScrollBar.y = this._scrollBarMargin.top;
}
this._viewSize.x = t;
this._viewSize.y = e;
this._hzScrollBar && !this._floating && (this._viewSize.y -= this._hzScrollBar.height);
this._vtScrollBar && !this._floating && (this._viewSize.x -= this._vtScrollBar.width);
this._viewSize.x -= this._owner.margin.left + this._owner.margin.right;
this._viewSize.y -= this._owner.margin.top + this._owner.margin.bottom;
this._viewSize.x = Math.max(1, this._viewSize.x);
this._viewSize.y = Math.max(1, this._viewSize.y);
this._pageSize.x = this._viewSize.x;
this._pageSize.y = this._viewSize.y;
this.adjustMaskContainer();
this.handleSizeChanged();
}
};
c.prototype.setContentSize = function(t, e) {
if (this._contentSize.x != t || this._contentSize.y != e) {
this._contentSize.x = t;
this._contentSize.y = e;
this.handleSizeChanged();
this._snapToItem && 0 != this._snappingPolicy && 0 == this._xPos && 0 == this._yPos && this.posChanged(!1);
}
};
c.prototype.changeContentSizeOnScrolling = function(t, e, i, n) {
var o = this._xPos == this._overlapSize.x, r = this._yPos == this._overlapSize.y;
this._contentSize.x += t;
this._contentSize.y += e;
this.handleSizeChanged();
if (1 == this._tweening) {
if (0 != t && o && this._tweenChange.x < 0) {
this._xPos = this._overlapSize.x;
this._tweenChange.x = -this._xPos - this._tweenStart.x;
}
if (0 != e && r && this._tweenChange.y < 0) {
this._yPos = this._overlapSize.y;
this._tweenChange.y = -this._yPos - this._tweenStart.y;
}
} else if (2 == this._tweening) {
if (0 != i) {
this._container.x -= i;
this._tweenStart.x -= i;
this._xPos = -this._container.x;
}
if (0 != n) {
this._container.y += n;
this._tweenStart.y -= n;
this._yPos = - -this._container.y;
}
} else if (this._dragged) {
if (0 != i) {
this._container.x -= i;
this._containerPos.x -= i;
this._xPos = -this._container.x;
}
if (0 != n) {
this._container.y += n;
this._containerPos.y -= n;
this._yPos = - -this._container.y;
}
} else {
if (0 != t && o) {
this._xPos = this._overlapSize.x;
this._container.x = -this._xPos;
}
if (0 != e && r) {
this._yPos = this._overlapSize.y;
this._container.y = this._yPos;
}
}
this._pageMode && this.updatePageController();
};
c.prototype.handleSizeChanged = function() {
if (this._displayInDemand) {
this._vScrollNone = this._contentSize.y <= this._viewSize.y;
this._hScrollNone = this._contentSize.x <= this._viewSize.x;
}
this._vtScrollBar && (0 == this._contentSize.y ? this._vtScrollBar.setDisplayPerc(0) : this._vtScrollBar.setDisplayPerc(Math.min(1, this._viewSize.y / this._contentSize.y)));
this._hzScrollBar && (0 == this._contentSize.x ? this._hzScrollBar.setDisplayPerc(0) : this._hzScrollBar.setDisplayPerc(Math.min(1, this._viewSize.x / this._contentSize.x)));
this.updateScrollBarVisible();
var e = this._viewSize.x, i = this._viewSize.y;
this._vScrollNone && this._vtScrollBar && (e += this._vtScrollBar.width);
this._hScrollNone && this._hzScrollBar && (i += this._hzScrollBar.height);
if (this._dontClipMargin) {
e += this._owner.margin.left + this._owner.margin.right;
i += this._owner.margin.top + this._owner.margin.bottom;
}
this._maskContainer.setContentSize(e, i);
this._vtScrollBar && this._vtScrollBar.handlePositionChanged();
this._hzScrollBar && this._hzScrollBar.handlePositionChanged();
this._header && this._header.handlePositionChanged();
this._footer && this._footer.handlePositionChanged();
this._scrollType == t.ScrollType.Horizontal || this._scrollType == t.ScrollType.Both ? this._overlapSize.x = Math.ceil(Math.max(0, this._contentSize.x - this._viewSize.x)) : this._overlapSize.x = 0;
this._scrollType == t.ScrollType.Vertical || this._scrollType == t.ScrollType.Both ? this._overlapSize.y = Math.ceil(Math.max(0, this._contentSize.y - this._viewSize.y)) : this._overlapSize.y = 0;
this._xPos = t.ToolSet.clamp(this._xPos, 0, this._overlapSize.x);
this._yPos = t.ToolSet.clamp(this._yPos, 0, this._overlapSize.y);
var n = this._overlapSize[this._refreshBarAxis];
0 == n ? n = Math.max(this._contentSize[this._refreshBarAxis] + this._footerLockedSize - this._viewSize[this._refreshBarAxis], 0) : n += this._footerLockedSize;
"x" == this._refreshBarAxis ? this._container.setPosition(t.ToolSet.clamp(this._container.x, -n, this._headerLockedSize), -t.ToolSet.clamp(-this._container.y, -this._overlapSize.y, 0)) : this._container.setPosition(t.ToolSet.clamp(this._container.x, -this._overlapSize.x, 0), -t.ToolSet.clamp(-this._container.y, -n, this._headerLockedSize));
this._header && ("x" == this._refreshBarAxis ? this._header.height = this._viewSize.y : this._header.width = this._viewSize.x);
this._footer && ("y" == this._refreshBarAxis ? this._footer.height = this._viewSize.y : this._footer.width = this._viewSize.x);
this.updateScrollBarPos();
this._pageMode && this.updatePageController();
};
c.prototype.posChanged = function(t) {
0 == this._aniFlag ? this._aniFlag = t ? 1 : -1 : 1 != this._aniFlag || t || (this._aniFlag = -1);
this._needRefresh = !0;
cc.director.getScheduler().isScheduled(this.refresh, this) || this.scheduleOnce(this.refresh);
};
c.prototype.refresh = function() {
this._needRefresh = !1;
this.unschedule(this.refresh);
if (this._pageMode || this._snapToItem) {
l.x = -this._xPos;
l.y = -this._yPos;
this.alignPosition(l, !1);
this._xPos = -l.x;
this._yPos = -l.y;
}
this.refresh2();
this._owner.node.emit(t.Event.SCROLL, this._owner);
if (this._needRefresh) {
this._needRefresh = !1;
this.unschedule(this.refresh);
this.refresh2();
}
this.updateScrollBarPos();
this._aniFlag = 0;
};
c.prototype.refresh2 = function() {
if (1 != this._aniFlag || this._dragged) {
0 != this._tweening && this.killTween();
this._container.setPosition(Math.floor(-this._xPos), -Math.floor(-this._yPos));
this.loopCheckingCurrent();
} else {
var t, e;
if (this._overlapSize.x > 0) t = -Math.floor(this._xPos); else {
0 != this._container.x && (this._container.x = 0);
t = 0;
}
if (this._overlapSize.y > 0) e = -Math.floor(this._yPos); else {
0 != this._container.y && (this._container.y = 0);
e = 0;
}
if (t != this._container.x || e != -this._container.y) {
this._tweenDuration.x = this._tweenDuration.y = n;
this._tweenStart.x = this._container.x;
this._tweenStart.y = -this._container.y;
this._tweenChange.x = t - this._tweenStart.x;
this._tweenChange.y = e - this._tweenStart.y;
this.startTween(1);
} else 0 != this._tweening && this.killTween();
}
this._pageMode && this.updatePageController();
};
c.prototype.onTouchBegin = function(e) {
if (this._touchEffect) {
e.captureTouch();
if (0 != this._tweening) {
this.killTween();
t.GRoot.inst.inputProcessor.cancelClick(e.touchId);
this._dragged = !0;
} else this._dragged = !1;
var i = this._owner.globalToLocal(e.pos.x, e.pos.y, s);
this._containerPos.x = this._container.x;
this._containerPos.y = -this._container.y;
this._beginTouchPos.set(i);
this._lastTouchPos.set(i);
this._lastTouchGlobalPos.set(e.pos);
this._isHoldAreaDone = !1;
this._velocity.set(cc.Vec2.ZERO);
this._velocityScale = 1;
this._lastMoveTime = t.ToolSet.getTime();
}
};
c.prototype.onTouchMove = function(e) {
if (cc.isValid(this._owner.node) && this._touchEffect && !(t.GObject.draggingObject && t.GObject.draggingObject.onStage || c.draggingPane && c.draggingPane != this && c.draggingPane._owner && c.draggingPane._owner.onStage)) {
var n, o, a, l = this._owner.globalToLocal(e.pos.x, e.pos.y, s), h = t.UIConfig.touchScrollSensitivity;
if (this._scrollType == t.ScrollType.Vertical) {
if (!this._isHoldAreaDone) {
i |= 1;
if ((n = Math.abs(this._beginTouchPos.y - l.y)) < h) return;
if (0 != (2 & i) && n < Math.abs(this._beginTouchPos.x - l.x)) return;
}
o = !0;
} else if (this._scrollType == t.ScrollType.Horizontal) {
if (!this._isHoldAreaDone) {
i |= 2;
if ((n = Math.abs(this._beginTouchPos.x - l.x)) < h) return;
if (0 != (1 & i) && n < Math.abs(this._beginTouchPos.y - l.y)) return;
}
a = !0;
} else {
i = 3;
if (!this._isHoldAreaDone && (n = Math.abs(this._beginTouchPos.y - l.y)) < h && (n = Math.abs(this._beginTouchPos.x - l.x)) < h) return;
o = a = !0;
}
var u = Math.floor(this._containerPos.x + l.x - this._beginTouchPos.x), p = Math.floor(this._containerPos.y + l.y - this._beginTouchPos.y);
o && (p > 0 ? this._bouncebackEffect ? this._header && 0 != this._header.maxHeight ? this._container.y = -Math.floor(Math.min(.5 * p, this._header.maxHeight)) : this._container.y = -Math.floor(Math.min(.5 * p, this._viewSize.y * r)) : this._container.y = 0 : p < -this._overlapSize.y ? this._bouncebackEffect ? this._footer && this._footer.maxHeight > 0 ? this._container.y = -Math.floor(Math.max(.5 * (p + this._overlapSize.y), -this._footer.maxHeight) - this._overlapSize.y) : this._container.y = -Math.floor(Math.max(.5 * (p + this._overlapSize.y), -this._viewSize.y * r) - this._overlapSize.y) : this._container.y = this._overlapSize.y : this._container.y = -p);
a && (u > 0 ? this._bouncebackEffect ? this._header && 0 != this._header.maxWidth ? this._container.x = Math.floor(Math.min(.5 * u, this._header.maxWidth)) : this._container.x = Math.floor(Math.min(.5 * u, this._viewSize.x * r)) : this._container.x = 0 : u < 0 - this._overlapSize.x ? this._bouncebackEffect ? this._footer && this._footer.maxWidth > 0 ? this._container.x = Math.floor(Math.max(.5 * (u + this._overlapSize.x), -this._footer.maxWidth) - this._overlapSize.x) : this._container.x = Math.floor(Math.max(.5 * (u + this._overlapSize.x), -this._viewSize.x * r) - this._overlapSize.x) : this._container.x = -this._overlapSize.x : this._container.x = u);
var d = t.ToolSet.getTime(), f = Math.max(d - this._lastMoveTime, 1 / 60), _ = l.x - this._lastTouchPos.x, g = l.y - this._lastTouchPos.y;
a || (_ = 0);
o || (g = 0);
if (0 != f) {
var y = 60 * f - 1;
if (y > 1) {
var m = Math.pow(.833, y);
this._velocity.x = this._velocity.x * m;
this._velocity.y = this._velocity.y * m;
}
this._velocity.x = t.ToolSet.lerp(this._velocity.x, 60 * _ / 60 / f, 10 * f);
this._velocity.y = t.ToolSet.lerp(this._velocity.y, 60 * g / 60 / f, 10 * f);
}
var v = this._lastTouchGlobalPos.x - e.pos.x, b = this._lastTouchGlobalPos.y - e.pos.y;
0 != _ ? this._velocityScale = Math.abs(v / _) : 0 != g && (this._velocityScale = Math.abs(b / g));
this._lastTouchPos.set(l);
this._lastTouchGlobalPos.x = e.pos.x;
this._lastTouchGlobalPos.y = e.pos.y;
this._lastMoveTime = d;
this._overlapSize.x > 0 && (this._xPos = t.ToolSet.clamp(-this._container.x, 0, this._overlapSize.x));
this._overlapSize.y > 0 && (this._yPos = t.ToolSet.clamp(- -this._container.y, 0, this._overlapSize.y));
if (0 != this._loop) {
u = this._container.x;
p = -this._container.y;
if (this.loopCheckingCurrent()) {
this._containerPos.x += this._container.x - u;
this._containerPos.y += -this._container.y - p;
}
}
c.draggingPane = this;
this._isHoldAreaDone = !0;
this._dragged = !0;
this.updateScrollBarPos();
this.updateScrollBarVisible();
this._pageMode && this.updatePageController();
this._owner.node.emit(t.Event.SCROLL), this._owner;
t.GRoot.inst.isScrolled = !0;
}
};
c.prototype.onTouchEnd = function() {
t.GRoot.inst.isScrolled = !0;
c.draggingPane == this && (c.draggingPane = null);
i = 0;
if (this._dragged && this._touchEffect && this._owner.node.activeInHierarchy) {
this._dragged = !1;
this._tweenStart.x = this._container.x;
this._tweenStart.y = -this._container.y;
l.set(this._tweenStart);
var e = !1;
if (this._container.x > 0) {
l.x = 0;
e = !0;
} else if (this._container.x < -this._overlapSize.x) {
l.x = -this._overlapSize.x;
e = !0;
}
if (-this._container.y > 0) {
l.y = 0;
e = !0;
} else if (-this._container.y < -this._overlapSize.y) {
l.y = -this._overlapSize.y;
e = !0;
}
if (e) {
var n = this.touchDragSensitivity;
this._tweenChange.x = l.x - this._tweenStart.x;
this._tweenChange.y = l.y - this._tweenStart.y;
if (this._tweenChange.x < -n || this._tweenChange.y < -n) {
this._refreshEventDispatching = !0;
this._owner.node.emit(t.Event.PULL_DOWN_RELEASE), this._owner;
this._refreshEventDispatching = !1;
} else if (this._tweenChange.x > n || this._tweenChange.y > n) {
this._refreshEventDispatching = !0;
this._owner.node.emit(t.Event.PULL_UP_RELEASE, this._owner);
this._refreshEventDispatching = !1;
}
if (this._headerLockedSize > 0 && 0 == l[this._refreshBarAxis]) {
l[this._refreshBarAxis] = this._headerLockedSize;
this._tweenChange.x = l.x - this._tweenStart.x;
this._tweenChange.y = l.y - this._tweenStart.y;
} else if (this._footerLockedSize > 0 && l[this._refreshBarAxis] == -this._overlapSize[this._refreshBarAxis]) {
var r = this._overlapSize[this._refreshBarAxis];
0 == r ? r = Math.max(this._contentSize[this._refreshBarAxis] + this._footerLockedSize - this._viewSize[this._refreshBarAxis], 0) : r += this._footerLockedSize;
l[this._refreshBarAxis] = -r;
this._tweenChange.x = l.x - this._tweenStart.x;
this._tweenChange.y = l.y - this._tweenStart.y;
}
this._tweenDuration.x = this._tweenDuration.y = o;
} else {
if (this._inertiaDisabled) this._tweenDuration.x = this._tweenDuration.y = o; else {
var s = 60 * (t.ToolSet.getTime() - this._lastMoveTime) - 1;
if (s > 1) {
var a = Math.pow(.833, s);
this._velocity.x = this._velocity.x * a;
this._velocity.y = this._velocity.y * a;
}
this.updateTargetAndDuration(this._tweenStart, l);
}
h.x = l.x - this._tweenStart.x;
h.y = l.y - this._tweenStart.y;
this.loopCheckingTarget(l);
(this._pageMode || this._snapToItem) && this.alignPosition(l, !0);
this._tweenChange.x = l.x - this._tweenStart.x;
this._tweenChange.y = l.y - this._tweenStart.y;
if (0 == this._tweenChange.x && 0 == this._tweenChange.y) {
this.updateScrollBarVisible();
return;
}
if (this._pageMode || this._snapToItem) {
this.fixDuration("x", h.x);
this.fixDuration("y", h.y);
}
}
this.startTween(2);
} else this._dragged = !1;
};
c.prototype.onRollOver = function() {
this._hover = !0;
this.updateScrollBarVisible();
};
c.prototype.onRollOut = function() {
this._hover = !1;
this.updateScrollBarVisible();
};
c.prototype.onMouseWheel = function(t) {
if (this._mouseWheelEnabled) {
var e = t.mouseWheelDelta > 0 ? -1 : 1;
this._overlapSize.x > 0 && 0 == this._overlapSize.y ? this._pageMode ? this.setPosX(this._xPos + this._pageSize.x * e, !1) : this.setPosX(this._xPos + this._mouseWheelStep * e, !1) : this._pageMode ? this.setPosY(this._yPos + this._pageSize.y * e, !1) : this.setPosY(this._yPos + this._mouseWheelStep * e, !1);
}
};
c.prototype.updateScrollBarPos = function() {
this._vtScrollBar && this._vtScrollBar.setScrollPerc(0 == this._overlapSize.y ? 0 : t.ToolSet.clamp(this._container.y, 0, this._overlapSize.y) / this._overlapSize.y);
this._hzScrollBar && this._hzScrollBar.setScrollPerc(0 == this._overlapSize.x ? 0 : t.ToolSet.clamp(-this._container.x, 0, this._overlapSize.x) / this._overlapSize.x);
this.checkRefreshBar();
};
c.prototype.updateScrollBarVisible = function() {
this._vtScrollBar && (this._viewSize.y <= this._vtScrollBar.minSize || this._vScrollNone ? this._vtScrollBar.node.active = !1 : this.updateScrollBarVisible2(this._vtScrollBar));
this._hzScrollBar && (this._viewSize.x <= this._hzScrollBar.minSize || this._hScrollNone ? this._hzScrollBar.node.active = !1 : this.updateScrollBarVisible2(this._hzScrollBar));
};
c.prototype.updateScrollBarVisible2 = function(e) {
this._scrollBarDisplayAuto && t.GTween.kill(e, !1, "alpha");
if (!this._scrollBarDisplayAuto || this._hover || 0 != this._tweening || this._dragged || e.gripDragging) {
e.alpha = 1;
e.node.active = !0;
} else e.node.active && t.GTween.to(1, 0, .5).setDelay(.5).onComplete(this.__barTweenComplete, this).setTarget(e, "alpha");
};
c.prototype.__barTweenComplete = function(t) {
var e = t.target;
e.alpha = 1;
e.node.active = !1;
};
c.prototype.getLoopPartSize = function(t, e) {
return (this._contentSize[e] + ("x" == e ? this._owner.columnGap : this._owner.lineGap)) / t;
};
c.prototype.loopCheckingCurrent = function() {
var t = !1;
if (1 == this._loop && this._overlapSize.x > 0) {
if (this._xPos < .001) {
this._xPos += this.getLoopPartSize(2, "x");
t = !0;
} else if (this._xPos >= this._overlapSize.x) {
this._xPos -= this.getLoopPartSize(2, "x");
t = !0;
}
} else if (2 == this._loop && this._overlapSize.y > 0) if (this._yPos < .001) {
this._yPos += this.getLoopPartSize(2, "y");
t = !0;
} else if (this._yPos >= this._overlapSize.y) {
this._yPos -= this.getLoopPartSize(2, "y");
t = !0;
}
t && this._container.setPosition(Math.floor(-this._xPos), -Math.floor(-this._yPos));
return t;
};
c.prototype.loopCheckingTarget = function(t) {
1 == this._loop && this.loopCheckingTarget2(t, "x");
2 == this._loop && this.loopCheckingTarget2(t, "y");
};
c.prototype.loopCheckingTarget2 = function(t, e) {
var i, n;
if (t[e] > 0) {
i = this.getLoopPartSize(2, e);
if ((n = this._tweenStart[e] - i) <= 0 && n >= -this._overlapSize[e]) {
t[e] -= i;
this._tweenStart[e] = n;
}
} else if (t[e] < -this._overlapSize[e]) {
i = this.getLoopPartSize(2, e);
if ((n = this._tweenStart[e] + i) <= 0 && n >= -this._overlapSize[e]) {
t[e] += i;
this._tweenStart[e] = n;
}
}
};
c.prototype.loopCheckingNewPos = function(e, i) {
if (0 == this._overlapSize[i]) return e;
var n, o = "x" == i ? this._xPos : this._yPos, r = !1;
if (e < .001) {
if ((e += this.getLoopPartSize(2, i)) > o) {
n = this.getLoopPartSize(6, i);
n = Math.ceil((e - o) / n) * n;
o = t.ToolSet.clamp(o + n, 0, this._overlapSize[i]);
r = !0;
}
} else if (e >= this._overlapSize[i] && (e -= this.getLoopPartSize(2, i)) < o) {
n = this.getLoopPartSize(6, i);
n = Math.ceil((o - e) / n) * n;
o = t.ToolSet.clamp(o - n, 0, this._overlapSize[i]);
r = !0;
}
r && ("x" == i ? this._container.x = -Math.floor(o) : this._container.y = Math.floor(o));
return e;
};
c.prototype.alignPosition = function(t, e) {
var i = 0, n = 0;
if (1 == this._snappingPolicy) {
if (this._owner.numChildren > 0) {
var o = this._owner.getChildAt(0);
i = Math.floor(.5 * this._viewSize.x - .5 * o.width);
n = Math.floor(.5 * this._viewSize.y - .5 * o.height);
}
} else if (2 == this._snappingPolicy && this._owner.numChildren > 0) {
o = this._owner.getChildAt(0);
i = Math.floor(this._viewSize.x - o.width);
n = Math.floor(this._viewSize.y - o.height);
}
t.x -= i;
t.y -= n;
if (this._pageMode) {
t.x = this.alignByPage(t.x, "x", e);
t.y = this.alignByPage(t.y, "y", e);
} else if (this._snapToItem) {
var r = this._owner.getSnappingPosition(-t.x, -t.y, s);
t.x < 0 && t.x > -this._overlapSize.x && (t.x = -r.x);
t.y < 0 && t.y > -this._overlapSize.y && (t.y = -r.y);
}
t.x += i;
t.y += n;
};
c.prototype.alignByPage = function(t, e, i) {
var n;
if (t > 0) n = 0; else if (t < -this._overlapSize[e]) n = Math.ceil(this._contentSize[e] / this._pageSize[e]) - 1; else {
n = Math.floor(-t / this._pageSize[e]);
var o = i ? t - this._containerPos[e] : t - ("x" == e ? this._container.x : -this._container.y), r = Math.min(this._pageSize[e], this._contentSize[e] - (n + 1) * this._pageSize[e]), s = -t - n * this._pageSize[e];
Math.abs(o) > this._pageSize[e] ? s > .5 * r && n++ : s > r * (o < 0 ? .3 : .7) && n++;
(t = -n * this._pageSize[e]) < -this._overlapSize[e] && (t = -this._overlapSize[e]);
}
if (i) {
var a, l = this._tweenStart[e];
a = l > 0 ? 0 : l < -this._overlapSize[e] ? Math.ceil(this._contentSize[e] / this._pageSize[e]) - 1 : Math.floor(-l / this._pageSize[e]);
var h = Math.floor(-this._containerPos[e] / this._pageSize[e]);
Math.abs(n - h) > 1 && Math.abs(a - h) <= 1 && (t = -(n = n > h ? h + 1 : h - 1) * this._pageSize[e]);
}
return t;
};
c.prototype.updateTargetAndDuration = function(t, e) {
e.x = this.updateTargetAndDuration2(t.x, "x");
e.y = this.updateTargetAndDuration2(t.y, "y");
};
c.prototype.updateTargetAndDuration2 = function(t, e) {
var i = this._velocity[e], n = 0;
if (t > 0) t = 0; else if (t < -this._overlapSize[e]) t = -this._overlapSize[e]; else {
var r = cc.sys.isMobile, s = Math.abs(i) * this._velocityScale;
r && (s *= 1136 / Math.max(cc.winSize.width, cc.winSize.height));
var a = 0;
this._pageMode || !r ? s > 500 && (a = Math.pow((s - 500) / 500, 2)) : s > 1e3 && (a = Math.pow((s - 1e3) / 1e3, 2));
if (0 != a) {
a > 1 && (a = 1);
s *= a;
i *= a;
this._velocity[e] = i;
n = Math.log(60 / s) / Math.log(this._decelerationRate) / 60;
t += Math.floor(i * n * .4);
}
}
n < o && (n = o);
this._tweenDuration[e] = n;
return t;
};
c.prototype.fixDuration = function(t, e) {
if (!(0 == this._tweenChange[t] || Math.abs(this._tweenChange[t]) >= Math.abs(e))) {
var i = Math.abs(this._tweenChange[t] / e) * this._tweenDuration[t];
i < o && (i = o);
this._tweenDuration[t] = i;
}
};
c.prototype.startTween = function(t) {
this._tweenTime.set(cc.Vec2.ZERO);
this._tweening = t;
this.updateScrollBarVisible();
};
c.prototype.killTween = function() {
if (1 == this._tweening) {
this._container.setPosition(this._tweenStart.x + this._tweenChange.x, -(this._tweenStart.y + this._tweenChange.y));
this._owner.node.emit(t.Event.SCROLL, this._owner);
}
this._tweening = 0;
this.updateScrollBarVisible();
this._owner.node.emit(t.Event.SCROLL_END, this._owner);
};
c.prototype.checkRefreshBar = function() {
if (null != this._header || null != this._footer) {
var t = "x" == this._refreshBarAxis ? this._container.x : -this._container.y;
if (this._header) if (t > 0) {
this._header.node.active = !0;
var e = s;
e.x = this._header.width;
e.y = this._header.height;
e[this._refreshBarAxis] = t;
this._header.setSize(e.x, e.y);
} else this._header.node.active = !1;
if (this._footer) {
var i = this._overlapSize[this._refreshBarAxis];
if (t < -i || 0 == i && this._footerLockedSize > 0) {
this._footer.node.active = !0;
(e = s).x = this._footer.x;
e.y = this._footer.y;
e[this._refreshBarAxis] = i > 0 ? t + this._contentSize[this._refreshBarAxis] : Math.max(Math.min(t + this._viewSize[this._refreshBarAxis], this._viewSize[this._refreshBarAxis] - this._footerLockedSize), this._viewSize[this._refreshBarAxis] - this._contentSize[this._refreshBarAxis]);
this._footer.setPosition(e.x, e.y);
e.x = this._footer.width;
e.y = this._footer.height;
e[this._refreshBarAxis] = i > 0 ? -i - t : this._viewSize[this._refreshBarAxis] - this._footer[this._refreshBarAxis];
this._footer.setSize(e.x, e.y);
} else this._footer.node.active = !1;
}
}
};
c.prototype.update = function(e) {
if (0 != this._tweening) {
var i = this.runTween("x", e), n = this.runTween("y", e);
this._container.setPosition(i, -n);
if (2 == this._tweening) {
this._overlapSize.x > 0 && (this._xPos = t.ToolSet.clamp(-i, 0, this._overlapSize.x));
this._overlapSize.y > 0 && (this._yPos = t.ToolSet.clamp(-n, 0, this._overlapSize.y));
this._pageMode && this.updatePageController();
}
if (0 == this._tweenChange.x && 0 == this._tweenChange.y) {
this._tweening = 0;
this.loopCheckingCurrent();
this.updateScrollBarPos();
this.updateScrollBarVisible();
this._owner.node.emit(t.Event.SCROLL, this._owner);
this._owner.node.emit(t.Event.SCROLL_END, this._owner);
} else {
this.updateScrollBarPos();
this._owner.node.emit(t.Event.SCROLL, this._owner);
}
return !0;
}
};
c.prototype.runTween = function(t, e) {
var i, n;
if (0 != this._tweenChange[t]) {
this._tweenTime[t] += e;
if (this._tweenTime[t] >= this._tweenDuration[t]) {
i = this._tweenStart[t] + this._tweenChange[t];
this._tweenChange[t] = 0;
} else {
var r = (n = (n = this._tweenTime[t]) / this._tweenDuration[t] - 1) * n * n + 1;
i = this._tweenStart[t] + Math.floor(this._tweenChange[t] * r);
}
var s = 0, a = -this._overlapSize[t];
this._headerLockedSize > 0 && this._refreshBarAxis == t && (s = this._headerLockedSize);
if (this._footerLockedSize > 0 && this._refreshBarAxis == t) {
var l = this._overlapSize[this._refreshBarAxis];
0 == l ? l = Math.max(this._contentSize[this._refreshBarAxis] + this._footerLockedSize - this._viewSize[this._refreshBarAxis], 0) : l += this._footerLockedSize;
a = -l;
}
if (2 == this._tweening && this._bouncebackEffect) {
if (i > 20 + s && this._tweenChange[t] > 0 || i > s && 0 == this._tweenChange[t]) {
this._tweenTime[t] = 0;
this._tweenDuration[t] = o;
this._tweenChange[t] = -i + s;
this._tweenStart[t] = i;
} else if (i < a - 20 && this._tweenChange[t] < 0 || i < a && 0 == this._tweenChange[t]) {
this._tweenTime[t] = 0;
this._tweenDuration[t] = o;
this._tweenChange[t] = a - i;
this._tweenStart[t] = i;
}
} else if (i > s) {
i = s;
this._tweenChange[t] = 0;
} else if (i < a) {
i = a;
this._tweenChange[t] = 0;
}
} else i = "x" == t ? this._container.x : -this._container.y;
return i;
};
return c;
}(cc.Component);
t.ScrollPane = e;
var i = 0, n = .5, o = .3, r = .5, s = new cc.Vec2(), a = new cc.Rect(), l = new cc.Vec2(), h = new cc.Vec2();
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e(t) {
this._ownerBaseX = 0;
this._ownerBaseY = 0;
this._totalTimes = 0;
this._totalTasks = 0;
this._options = 0;
this._totalDuration = 0;
this._autoPlayTimes = 1;
this._autoPlayDelay = 0;
this._timeScale = 1;
this._startTime = 0;
this._endTime = 0;
this._owner = t;
this._items = new Array();
}
e.prototype.play = function(t, e, i, n, o) {
this._play(t, e, i, n, o, !1);
};
e.prototype.playReverse = function(t, e, i) {
this._play(t, e, i, 0, -1, !0);
};
e.prototype.changePlayTimes = function(t) {
this._totalTimes = t;
};
e.prototype.setAutoPlay = function(t, e, i) {
null == e && (e = -1);
null == i && (i = 0);
if (this._autoPlay != t) {
this._autoPlay = t;
this._autoPlayTimes = e;
this._autoPlayDelay = i;
this._autoPlay ? this._owner.onStage && this.play(null, this._autoPlayTimes, this._autoPlayDelay) : this._owner.onStage || this.stop(!1, !0);
}
};
e.prototype._play = function(e, n, o, r, s, a) {
null == n && (n = 1);
null == o && (o = 0);
null == r && (r = 0);
null == s && (s = -1);
this.stop(!0, !0);
this._totalTimes = n;
this._reversed = a;
this._startTime = r;
this._endTime = s;
this._playing = !0;
this._paused = !1;
this._onComplete = e;
for (var l = this._items.length, h = 0; h < l; h++) {
var c = this._items[h];
null == c.target ? c.targetId ? c.target = this._owner.getChildById(c.targetId) : c.target = this._owner : c.target != this._owner && c.target.parent != this._owner && (c.target = null);
if (c.target && c.type == i.Transition) {
var u = c.target.getTransition(c.value.transName);
u == this && (u = null);
if (u) if (0 == c.value.playTimes) {
var p;
for (p = h - 1; p >= 0; p--) {
var d = this._items[p];
if (d.type == i.Transition && d.value.trans == u) {
d.value.stopTime = c.time - d.time;
break;
}
}
p < 0 ? c.value.stopTime = 0 : u = null;
} else c.value.stopTime = -1;
c.value.trans = u;
}
}
0 == o ? this.onDelayedPlay() : t.GTween.delayedCall(o).setTarget(this).onComplete(this.onDelayedPlay, this);
};
e.prototype.stop = function(e, i) {
null == e && (e = !0);
if (this._playing) {
this._playing = !1;
this._totalTasks = 0;
this._totalTimes = 0;
var n = this._onComplete;
this._onComplete = null;
t.GTween.kill(this);
var o = this._items.length;
if (this._reversed) for (var r = o - 1; r >= 0; r--) {
var s = this._items[r];
null != s.target && this.stopItem(s, e);
} else for (r = 0; r < o; r++) null != (s = this._items[r]).target && this.stopItem(s, e);
i && null != n && n();
}
};
e.prototype.stopItem = function(t, e) {
if (0 != t.displayLockToken) {
t.target.releaseDisplayLock(t.displayLockToken);
t.displayLockToken = 0;
}
if (t.tweener) {
t.tweener.kill(e);
t.tweener = null;
if (t.type == i.Shake && !e) {
t.target._gearLocked = !0;
t.target.setPosition(t.target.x - t.value.lastOffsetX, t.target.y - t.value.lastOffsetY);
t.target._gearLocked = !1;
}
}
if (t.type == i.Transition) {
var n = t.value.trans;
n && n.stop(e, !1);
}
};
e.prototype.setPaused = function(e) {
if (this._playing && this._paused != e) {
this._paused = e;
var n = t.GTween.getTween(this);
n && n.setPaused(e);
for (var o = this._items.length, r = 0; r < o; r++) {
var s = this._items[r];
if (null != s.target) {
if (s.type == i.Transition) s.value.trans && s.value.trans.setPaused(e); else if (s.type == i.Animation) if (e) {
s.value.flag = s.target.getProp(t.ObjectPropID.Playing);
s.target.setProp(t.ObjectPropID.Playing, !1);
} else s.target.setProp(t.ObjectPropID.Playing, s.value.flag);
s.tweener && s.tweener.setPaused(e);
}
}
}
};
e.prototype.dispose = function() {
this._playing && t.GTween.kill(this);
for (var e = this._items.length, i = 0; i < e; i++) {
var n = this._items[i];
if (n.tweener) {
n.tweener.kill();
n.tweener = null;
}
n.target = null;
n.hook = null;
n.tweenConfig && (n.tweenConfig.endHook = null);
}
this._items.length = 0;
this._playing = !1;
this._onComplete = null;
};
Object.defineProperty(e.prototype, "playing", {
get: function() {
return this._playing;
},
enumerable: !1,
configurable: !0
});
e.prototype.setValue = function(t) {
for (var e = [], n = 1; n < arguments.length; n++) e[n - 1] = arguments[n];
for (var o, r = this._items.length, s = 0; s < r; s++) {
var a = this._items[s];
if (a.label == t) o = a.tweenConfig ? a.tweenConfig.startValue : a.value; else {
if (!a.tweenConfig || a.tweenConfig.endLabel != t) continue;
o = a.tweenConfig.endValue;
}
switch (a.type) {
case i.XY:
case i.Size:
case i.Pivot:
case i.Scale:
case i.Skew:
o.b1 = !0;
o.b2 = !0;
o.f1 = parseFloat(e[0]);
o.f2 = parseFloat(e[1]);
break;

case i.Alpha:
case i.Rotation:
case i.Color:
o.f1 = parseFloat(e[0]);
break;

case i.Animation:
o.frame = parseInt(e[0]);
e.length > 1 && (o.playing = e[1]);
break;

case i.Visible:
o.visible = e[0];
break;

case i.Sound:
o.sound = e[0];
e.length > 1 && (o.volume = parseFloat(e[1]));
break;

case i.Transition:
o.transName = e[0];
e.length > 1 && (o.playTimes = parseInt(e[1]));
break;

case i.Shake:
o.amplitude = parseFloat(e[0]);
e.length > 1 && (o.duration = parseFloat(e[1]));
break;

case i.ColorFilter:
o.f1 = parseFloat(e[0]);
o.f2 = parseFloat(e[1]);
o.f3 = parseFloat(e[2]);
o.f4 = parseFloat(e[3]);
break;

case i.Text:
case i.Icon:
o.text = e[0];
}
}
};
e.prototype.setHook = function(t, e) {
for (var i = this._items.length, n = 0; n < i; n++) {
var o = this._items[n];
if (o.label == t) {
o.hook = e;
break;
}
if (o.tweenConfig && o.tweenConfig.endLabel == t) {
o.tweenConfig.endHook = e;
break;
}
}
};
e.prototype.clearHooks = function() {
for (var t = this._items.length, e = 0; e < t; e++) {
var i = this._items[e];
i.hook = null;
i.tweenConfig && (i.tweenConfig.endHook = null);
}
};
e.prototype.setTarget = function(t, e) {
for (var i = this._items.length, n = 0; n < i; n++) {
var o = this._items[n];
if (o.label == t) {
o.targetId = e.id;
o.target = null;
}
}
};
e.prototype.setDuration = function(t, e) {
for (var i = this._items.length, n = 0; n < i; n++) {
var o = this._items[n];
o.tweenConfig && o.label == t && (o.tweenConfig.duration = e);
}
};
e.prototype.getLabelTime = function(t) {
for (var e = this._items.length, i = 0; i < e; i++) {
var n = this._items[i];
if (n.label == t) return n.time;
if (n.tweenConfig && n.tweenConfig.endLabel == t) return n.time + n.tweenConfig.duration;
}
return Number.NaN;
};
Object.defineProperty(e.prototype, "timeScale", {
get: function() {
return this._timeScale;
},
set: function(e) {
if (this._timeScale != e) {
this._timeScale = e;
if (this._playing) for (var n = this._items.length, o = 0; o < n; o++) {
var r = this._items[o];
r.tweener ? r.tweener.setTimeScale(e) : r.type == i.Transition ? r.value.trans && (r.value.trans.timeScale = e) : r.type == i.Animation && r.target && r.target.setProp(t.ObjectPropID.TimeScale, e);
}
}
},
enumerable: !1,
configurable: !0
});
e.prototype.updateFromRelations = function(t, e, n) {
var o = this._items.length;
if (0 != o) for (var r = 0; r < o; r++) {
var s = this._items[r];
if (s.type == i.XY && s.targetId == t) if (s.tweenConfig) {
s.tweenConfig.startValue.f1 += e;
s.tweenConfig.startValue.f2 += n;
s.tweenConfig.endValue.f1 += e;
s.tweenConfig.endValue.f2 += n;
} else {
s.value.f1 += e;
s.value.f2 += n;
}
}
};
e.prototype.onEnable = function() {
this._autoPlay && !this._playing && this.play(null, this._autoPlayTimes, this._autoPlayDelay);
};
e.prototype.onDisable = function() {
0 == (this._options & o) && this.stop(0 != (this._options & r), !1);
};
e.prototype.onDelayedPlay = function() {
this.internalPlay();
this._playing = this._totalTasks > 0;
if (this._playing) {
if (0 != (this._options & n)) for (var t = this._items.length, e = 0; e < t; e++) {
var i = this._items[e];
i.target && i.target != this._owner && (i.displayLockToken = i.target.addDisplayLock());
}
} else if (null != this._onComplete) {
var o = this._onComplete;
this._onComplete = null;
o();
}
};
e.prototype.internalPlay = function() {
this._ownerBaseX = this._owner.x;
this._ownerBaseY = this._owner.y;
this._totalTasks = 1;
var t, e, n = this._items.length, o = !1;
if (this._reversed) for (e = n - 1; e >= 0; e--) null != (t = this._items[e]).target && this.playItem(t); else for (e = 0; e < n; e++) if (null != (t = this._items[e]).target) if (t.type == i.Animation && 0 != this._startTime && t.time <= this._startTime) {
o = !0;
t.value.flag = !1;
} else this.playItem(t);
o && this.skipAnimations();
this._totalTasks--;
};
e.prototype.playItem = function(e) {
var n;
if (e.tweenConfig) {
n = this._reversed ? this._totalDuration - e.time - e.tweenConfig.duration : e.time;
if (-1 == this._endTime || n <= this._endTime) {
var o, r;
if (this._reversed) {
o = e.tweenConfig.endValue;
r = e.tweenConfig.startValue;
} else {
o = e.tweenConfig.startValue;
r = e.tweenConfig.endValue;
}
e.value.b1 = o.b1 || r.b1;
e.value.b2 = o.b2 || r.b2;
switch (e.type) {
case i.XY:
case i.Size:
case i.Scale:
case i.Skew:
e.tweener = t.GTween.to2(o.f1, o.f2, r.f1, r.f2, e.tweenConfig.duration);
break;

case i.Alpha:
case i.Rotation:
e.tweener = t.GTween.to(o.f1, r.f1, e.tweenConfig.duration);
break;

case i.Color:
e.tweener = t.GTween.toColor(o.f1, r.f1, e.tweenConfig.duration);
break;

case i.ColorFilter:
e.tweener = t.GTween.to4(o.f1, o.f2, o.f3, o.f4, r.f1, r.f2, r.f3, r.f4, e.tweenConfig.duration);
}
e.tweener.setDelay(n).setEase(e.tweenConfig.easeType).setRepeat(e.tweenConfig.repeat, e.tweenConfig.yoyo).setTimeScale(this._timeScale).setTarget(e).onStart(this.onTweenStart, this).onUpdate(this.onTweenUpdate, this).onComplete(this.onTweenComplete, this);
this._endTime >= 0 && e.tweener.setBreakpoint(this._endTime - n);
this._totalTasks++;
}
} else if (e.type == i.Shake) {
n = this._reversed ? this._totalDuration - e.time - e.value.duration : e.time;
e.value.offsetX = e.value.offsetY = 0;
e.value.lastOffsetX = e.value.lastOffsetY = 0;
e.tweener = t.GTween.shake(0, 0, e.value.amplitude, e.value.duration).setDelay(n).setTimeScale(this._timeScale).setTarget(e).onUpdate(this.onTweenUpdate, this).onComplete(this.onTweenComplete, this);
this._endTime >= 0 && e.tweener.setBreakpoint(this._endTime - e.time);
this._totalTasks++;
} else if ((n = this._reversed ? this._totalDuration - e.time : e.time) <= this._startTime) {
this.applyValue(e);
this.callHook(e, !1);
} else if (-1 == this._endTime || n <= this._endTime) {
this._totalTasks++;
e.tweener = t.GTween.delayedCall(n).setTimeScale(this._timeScale).setTarget(e).onComplete(this.onDelayedPlayItem, this);
}
e.tweener && e.tweener.seek(this._startTime);
};
e.prototype.skipAnimations = function() {
for (var e, n, o, r, s, a, l = this._items.length, h = 0; h < l; h++) if (!((a = this._items[h]).type != i.Animation || a.time > this._startTime || (r = a.value).flag)) {
e = (s = a.target).getProp(t.ObjectPropID.Frame);
n = s.getProp(t.ObjectPropID.Playing) ? 0 : -1;
o = 0;
for (var c = h; c < l; c++) if (!((a = this._items[c]).type != i.Animation || a.target != s || a.time > this._startTime)) {
(r = a.value).flag = !0;
if (-1 != r.frame) {
e = r.frame;
n = r.playing ? a.time : -1;
o = 0;
} else if (r.playing) n < 0 && (n = a.time); else {
n >= 0 && (o += a.time - n);
n = -1;
}
this.callHook(a, !1);
}
n >= 0 && (o += this._startTime - n);
s.setProp(t.ObjectPropID.Playing, n >= 0);
s.setProp(t.ObjectPropID.Frame, e);
o > 0 && s.setProp(t.ObjectPropID.DeltaTime, o);
}
};
e.prototype.onDelayedPlayItem = function(t) {
var e = t.target;
e.tweener = null;
this._totalTasks--;
this.applyValue(e);
this.callHook(e, !1);
this.checkAllComplete();
};
e.prototype.onTweenStart = function(t) {
var e = t.target;
if (e.type == i.XY || e.type == i.Size) {
var n, o;
if (this._reversed) {
n = e.tweenConfig.endValue;
o = e.tweenConfig.startValue;
} else {
n = e.tweenConfig.startValue;
o = e.tweenConfig.endValue;
}
if (e.type == i.XY) if (e.target != this._owner) {
n.b1 ? n.b3 && (t.startValue.x = n.f1 * this._owner.width) : t.startValue.x = e.target.x;
n.b2 ? n.b3 && (t.startValue.y = n.f2 * this._owner.height) : t.startValue.y = e.target.y;
o.b1 ? o.b3 && (t.endValue.x = o.f1 * this._owner.width) : t.endValue.x = t.startValue.x;
o.b2 ? o.b3 && (t.endValue.y = o.f2 * this._owner.height) : t.endValue.y = t.startValue.y;
} else {
n.b1 || (t.startValue.x = e.target.x - this._ownerBaseX);
n.b2 || (t.startValue.y = e.target.y - this._ownerBaseY);
o.b1 || (t.endValue.x = t.startValue.x);
o.b2 || (t.endValue.y = t.startValue.y);
} else {
n.b1 || (t.startValue.x = e.target.width);
n.b2 || (t.startValue.y = e.target.height);
o.b1 || (t.endValue.x = t.startValue.x);
o.b2 || (t.endValue.y = t.startValue.y);
}
if (e.tweenConfig.path) {
e.value.b1 = e.value.b2 = !0;
t.setPath(e.tweenConfig.path);
}
}
this.callHook(e, !1);
};
e.prototype.onTweenUpdate = function(t) {
var e = t.target;
switch (e.type) {
case i.XY:
case i.Size:
case i.Scale:
case i.Skew:
e.value.f1 = t.value.x;
e.value.f2 = t.value.y;
if (e.tweenConfig.path) {
e.value.f1 += t.startValue.x;
e.value.f2 += t.startValue.y;
}
break;

case i.Alpha:
case i.Rotation:
e.value.f1 = t.value.x;
break;

case i.Color:
e.value.f1 = t.value.color;
break;

case i.ColorFilter:
e.value.f1 = t.value.x;
e.value.f2 = t.value.y;
e.value.f3 = t.value.z;
e.value.f4 = t.value.w;
break;

case i.Shake:
e.value.offsetX = t.deltaValue.x;
e.value.offsetY = t.deltaValue.y;
}
this.applyValue(e);
};
e.prototype.onTweenComplete = function(t) {
var e = t.target;
e.tweener = null;
this._totalTasks--;
t.allCompleted && this.callHook(e, !0);
this.checkAllComplete();
};
e.prototype.onPlayTransCompleted = function() {
this._totalTasks--;
this.checkAllComplete();
};
e.prototype.callHook = function(t, e) {
e ? t.tweenConfig && null != t.tweenConfig.endHook && t.tweenConfig.endHook(t.label) : t.time >= this._startTime && null != t.hook && t.hook(t.label);
};
e.prototype.checkAllComplete = function() {
if (this._playing && 0 == this._totalTasks) if (this._totalTimes < 0) {
this.internalPlay();
0 == this._totalTasks && t.GTween.delayedCall(0).setTarget(this).onComplete(this.checkAllComplete, this);
} else {
this._totalTimes--;
if (this._totalTimes > 0) {
this.internalPlay();
0 == this._totalTasks && t.GTween.delayedCall(0).setTarget(this).onComplete(this.checkAllComplete, this);
} else {
this._playing = !1;
for (var e = this._items.length, i = 0; i < e; i++) {
var n = this._items[i];
if (n.target && 0 != n.displayLockToken) {
n.target.releaseDisplayLock(n.displayLockToken);
n.displayLockToken = 0;
}
}
if (null != this._onComplete) {
var o = this._onComplete;
this._onComplete = null;
o();
}
}
}
};
e.prototype.applyValue = function(e) {
e.target._gearLocked = !0;
var n = e.value;
switch (e.type) {
case i.XY:
e.target == this._owner ? n.b1 && n.b2 ? e.target.setPosition(n.f1 + this._ownerBaseX, n.f2 + this._ownerBaseY) : n.b1 ? e.target.x = n.f1 + this._ownerBaseX : e.target.y = n.f2 + this._ownerBaseY : n.b3 ? n.b1 && n.b2 ? e.target.setPosition(n.f1 * this._owner.width, n.f2 * this._owner.height) : n.b1 ? e.target.x = n.f1 * this._owner.width : n.b2 && (e.target.y = n.f2 * this._owner.height) : n.b1 && n.b2 ? e.target.setPosition(n.f1, n.f2) : n.b1 ? e.target.x = n.f1 : n.b2 && (e.target.y = n.f2);
break;

case i.Size:
n.b1 || (n.f1 = e.target.width);
n.b2 || (n.f2 = e.target.height);
e.target.setSize(n.f1, n.f2);
break;

case i.Pivot:
e.target.setPivot(n.f1, n.f2, e.target.pivotAsAnchor);
break;

case i.Alpha:
e.target.alpha = n.f1;
break;

case i.Rotation:
e.target.rotation = n.f1;
break;

case i.Scale:
e.target.setScale(n.f1, n.f2);
break;

case i.Skew:
e.target.setSkew(n.f1, n.f2);
break;

case i.Color:
var o = e.target.getProp(t.ObjectPropID.Color);
if (o instanceof cc.Color) {
var r = Math.floor(n.f1);
o.setR(r >> 16 & 255).setG(r >> 8 & 255).setB(255 & r);
e.target.setProp(t.ObjectPropID.Color, o);
}
break;

case i.Animation:
n.frame >= 0 && e.target.setProp(t.ObjectPropID.Frame, n.frame);
e.target.setProp(t.ObjectPropID.Playing, n.playing);
e.target.setProp(t.ObjectPropID.TimeScale, this._timeScale);
break;

case i.Visible:
e.target.visible = n.visible;
break;

case i.Transition:
if (this._playing) {
var s = n.trans;
if (s) {
this._totalTasks++;
var a = this._startTime > e.time ? this._startTime - e.time : 0, l = this._endTime >= 0 ? this._endTime - e.time : -1;
n.stopTime >= 0 && (l < 0 || l > n.stopTime) && (l = n.stopTime);
s.timeScale = this._timeScale;
s._play(function() {
this.onPlayTransCompleted(e);
}.bind(this), n.playTimes, 0, a, l, this._reversed);
}
}
break;

case i.Sound:
if (this._playing && e.time >= this._startTime) {
if (null == n.audioClip) {
var h = t.UIPackage.getItemByURL(n.sound);
h && (n.audioClip = h.owner.getItemAsset(h));
}
n.audioClip && t.GRoot.inst.playOneShotSound(n.audioClip, n.volume);
}
break;

case i.Shake:
e.target.setPosition(e.target.x - n.lastOffsetX + n.offsetX, e.target.y - n.lastOffsetY + n.offsetY);
n.lastOffsetX = n.offsetX;
n.lastOffsetY = n.offsetY;
break;

case i.ColorFilter:
break;

case i.Text:
e.target.text = n.text;
break;

case i.Icon:
e.target.icon = n.text;
}
e.target._gearLocked = !1;
};
e.prototype.setup = function(e) {
this.name = e.readS();
this._options = e.readInt();
this._autoPlay = e.readBool();
this._autoPlayTimes = e.readInt();
this._autoPlayDelay = e.readFloat();
for (var i = e.readShort(), n = 0; n < i; n++) {
var o = e.readShort(), r = e.position;
e.seek(r, 0);
var l = new s(e.readByte());
this._items[n] = l;
l.time = e.readFloat();
var h = e.readShort();
l.targetId = h < 0 ? "" : this._owner.getChildAt(h).id;
l.label = e.readS();
if (e.readBool()) {
e.seek(r, 1);
l.tweenConfig = new a();
l.tweenConfig.duration = e.readFloat();
l.time + l.tweenConfig.duration > this._totalDuration && (this._totalDuration = l.time + l.tweenConfig.duration);
l.tweenConfig.easeType = e.readByte();
l.tweenConfig.repeat = e.readInt();
l.tweenConfig.yoyo = e.readBool();
l.tweenConfig.endLabel = e.readS();
e.seek(r, 2);
this.decodeValue(l, e, l.tweenConfig.startValue);
e.seek(r, 3);
this.decodeValue(l, e, l.tweenConfig.endValue);
if (e.version >= 2) {
var c = e.readInt();
if (c > 0) {
l.tweenConfig.path = new t.GPath();
for (var u = new Array(), p = 0; p < c; p++) {
var d = e.readByte();
switch (d) {
case t.CurveType.Bezier:
u.push(t.GPathPoint.newBezierPoint(e.readFloat(), e.readFloat(), e.readFloat(), e.readFloat()));
break;

case t.CurveType.CubicBezier:
u.push(t.GPathPoint.newCubicBezierPoint(e.readFloat(), e.readFloat(), e.readFloat(), e.readFloat(), e.readFloat(), e.readFloat()));
break;

default:
u.push(t.GPathPoint.newPoint(e.readFloat(), e.readFloat(), d));
}
}
l.tweenConfig.path.create(u);
}
}
} else {
l.time > this._totalDuration && (this._totalDuration = l.time);
e.seek(r, 2);
this.decodeValue(l, e, l.value);
}
e.position = r + o;
}
};
e.prototype.decodeValue = function(t, e, n) {
switch (t.type) {
case i.XY:
case i.Size:
case i.Pivot:
case i.Skew:
n.b1 = e.readBool();
n.b2 = e.readBool();
n.f1 = e.readFloat();
n.f2 = e.readFloat();
e.version >= 2 && t.type == i.XY && (n.b3 = e.readBool());
break;

case i.Alpha:
case i.Rotation:
n.f1 = e.readFloat();
break;

case i.Scale:
n.f1 = e.readFloat();
n.f2 = e.readFloat();
break;

case i.Color:
var o = e.readColor();
n.f1 = (o.getR() << 16) + (o.getG() << 8) + o.getB();
break;

case i.Animation:
n.playing = e.readBool();
n.frame = e.readInt();
break;

case i.Visible:
n.visible = e.readBool();
break;

case i.Sound:
n.sound = e.readS();
n.volume = e.readFloat();
break;

case i.Transition:
n.transName = e.readS();
n.playTimes = e.readInt();
break;

case i.Shake:
n.amplitude = e.readFloat();
n.duration = e.readFloat();
break;

case i.ColorFilter:
n.f1 = e.readFloat();
n.f2 = e.readFloat();
n.f3 = e.readFloat();
n.f4 = e.readFloat();
break;

case i.Text:
case i.Icon:
n.text = e.readS();
}
};
return e;
}();
t.Transition = e;
var i, n = 1, o = 2, r = 4;
(function(t) {
t[t.XY = 0] = "XY";
t[t.Size = 1] = "Size";
t[t.Scale = 2] = "Scale";
t[t.Pivot = 3] = "Pivot";
t[t.Alpha = 4] = "Alpha";
t[t.Rotation = 5] = "Rotation";
t[t.Color = 6] = "Color";
t[t.Animation = 7] = "Animation";
t[t.Visible = 8] = "Visible";
t[t.Sound = 9] = "Sound";
t[t.Transition = 10] = "Transition";
t[t.Shake = 11] = "Shake";
t[t.ColorFilter = 12] = "ColorFilter";
t[t.Skew = 13] = "Skew";
t[t.Text = 14] = "Text";
t[t.Icon = 15] = "Icon";
t[t.Unknown = 16] = "Unknown";
})(i || (i = {}));
var s = function(t) {
this.type = t;
this.value = {};
this.displayLockToken = 0;
}, a = function() {
this.easeType = t.EaseType.QuadOut;
this.startValue = {
b1: !0,
b2: !0
};
this.endValue = {
b1: !0,
b2: !0
};
};
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e() {}
e.loadFromXML = function(t) {
var i = {};
e.strings = i;
for (var n = new cc.SAXParser().parse(t).documentElement.childNodes, o = n.length, r = 0; r < o; r++) {
var s = n[r];
if ("string" == s.tagName) {
var a = s.getAttribute("name"), l = s.childNodes.length > 0 ? s.firstChild.nodeValue : "", h = a.indexOf("-");
if (-1 == h) continue;
var c = a.substr(0, h), u = a.substr(h + 1), p = i[c];
if (!p) {
p = {};
i[c] = p;
}
p[u] = l;
}
}
};
e.translateComponent = function(i) {
if (null != e.strings) {
var n = e.strings[i.owner.id + i.id];
if (null != n) {
var o, r, s, a, l, h, c, u, p, d = i.rawData;
d.seek(0, 2);
var f = d.readShort();
for (l = 0; l < f; l++) {
c = d.readShort();
u = d.position;
d.seek(u, 0);
var _ = d.readByte(), g = _;
d.skip(4);
o = d.readS();
g == t.ObjectType.Component && d.seek(u, 6) && (g = d.readByte());
d.seek(u, 1);
null != (r = n[o + "-tips"]) && d.writeS(r);
d.seek(u, 2);
var y = d.readShort();
for (h = 0; h < y; h++) {
s = d.readShort();
s += d.position;
if (6 == d.readByte()) {
d.skip(2);
p = d.readShort();
for (v = 0; v < p; v++) null != d.readS() && (null != (r = n[o + "-texts_" + v]) ? d.writeS(r) : d.skip(2));
d.readBool() && null != (r = n[o + "-texts_def"]) && d.writeS(r);
}
if (_ == t.ObjectType.Component && d.version >= 2) {
d.seek(u, 4);
d.skip(2);
d.skip(4 * d.readShort());
for (var m = d.readShort(), v = 0; v < m; v++) {
var b = d.readS();
0 == d.readShort() && null != (r = n[o + "-cp-" + b]) ? d.writeS(r) : d.skip(2);
}
}
d.position = s;
}
switch (g) {
case t.ObjectType.Text:
case t.ObjectType.RichText:
case t.ObjectType.InputText:
if (null != (r = n[o])) {
d.seek(u, 6);
d.writeS(r);
}
if (null != (r = n[o + "-prompt"])) {
d.seek(u, 4);
d.writeS(r);
}
break;

case t.ObjectType.List:
case t.ObjectType.GListLayout:
case t.ObjectType.Tree:
d.seek(u, 8);
d.skip(2);
a = d.readShort();
for (h = 0; h < a; h++) {
s = d.readShort();
s += d.position;
d.skip(2);
g == t.ObjectType.Tree && d.skip(2);
null != (r = n[o + "-" + h]) ? d.writeS(r) : d.skip(2);
null != (r = n[o + "-" + h + "-0"]) ? d.writeS(r) : d.skip(2);
if (d.version >= 2) {
d.skip(6);
d.skip(4 * d.readUshort());
for (m = d.readUshort(), v = 0; v < m; v++) {
b = d.readS();
0 == d.readUshort() && null != (r = n[o + "-" + h + "-" + b]) ? d.writeS(r) : d.skip(2);
}
}
d.position = s;
}
break;

case t.ObjectType.Label:
if (d.seek(u, 6) && d.readByte() == g) {
null != (r = n[o]) ? d.writeS(r) : d.skip(2);
d.skip(2);
d.readBool() && d.skip(4);
d.skip(4);
d.readBool() && null != (r = n[o + "-prompt"]) && d.writeS(r);
}
break;

case t.ObjectType.Button:
if (d.seek(u, 6) && d.readByte() == g) {
null != (r = n[o]) ? d.writeS(r) : d.skip(2);
null != (r = n[o + "-0"]) && d.writeS(r);
}
break;

case t.ObjectType.ComboBox:
if (d.seek(u, 6) && d.readByte() == g) {
a = d.readShort();
for (h = 0; h < a; h++) {
s = d.readShort();
s += d.position;
null != (r = n[o + "-" + h]) && d.writeS(r);
d.position = s;
}
null != (r = n[o]) && d.writeS(r);
}
}
d.position = u + c;
}
}
}
};
return e;
}();
t.TranslationHelper = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e() {}
e.defaultFont = "Arial";
e.modalLayerColor = new cc.Color(51, 51, 51, 51);
e.buttonSoundVolumeScale = 1;
e.defaultScrollStep = 25;
e.defaultScrollDecelerationRate = .967;
e.defaultScrollBarDisplay = t.ScrollBarDisplayType.Visible;
e.defaultScrollTouchEffect = !0;
e.defaultScrollBounceEffect = !0;
e.defaultComboBoxVisibleItemCount = 10;
e.touchScrollSensitivity = 20;
e.touchDragSensitivity = 10;
e.clickDragSensitivity = 2;
e.bringWindowToFrontOnClick = !0;
e.frameTimeForAsyncUIConstruction = .002;
e.linkUnderline = !0;
e.defaultUIGroup = "UI";
return e;
}();
t.UIConfig = e;
t.addLoadHandler = function() {};
var i = {};
t.registerFont = function(t, e) {
e instanceof cc.Font ? i[t] = e : i[t] = cc.loader.getRes(t, cc.Font);
};
t.getFontByName = function(t) {
return i[t];
};
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e() {}
e.setExtension = function(i, n) {
if (null == i) throw new Error("Invaild url: " + i);
var o = t.UIPackage.getItemByURL(i);
o && (o.extensionType = n);
e.extensions[i] = n;
};
e.setLoaderExtension = function(t) {
e.loaderType = t;
};
e.resolveExtension = function(t) {
var i = e.extensions["ui://" + t.owner.id + t.id];
i || (i = e.extensions["ui://" + t.owner.name + "/" + t.name]);
i && (t.extensionType = i);
};
e.newObject = function(i, n) {
var o;
e.counter++;
if ("number" == typeof i) switch (i) {
case t.ObjectType.Image:
return new t.GImage();

case t.ObjectType.MovieClip:
return new t.GMovieClip();

case t.ObjectType.Component:
return new t.GComponent();

case t.ObjectType.Text:
return new t.GTextField();

case t.ObjectType.RichText:
return new t.GRichTextField();

case t.ObjectType.InputText:
return new t.GTextInput();

case t.ObjectType.Group:
return new t.GGroup();

case t.ObjectType.List:
return new t.GList();

case t.ObjectType.Graph:
return new t.GGraph();

case t.ObjectType.Loader:
return e.loaderType ? new e.loaderType() : new t.GLoader();

case t.ObjectType.Button:
return new t.GButton();

case t.ObjectType.Label:
return new t.GLabel();

case t.ObjectType.ProgressBar:
return new t.GProgressBar();

case t.ObjectType.Slider:
return new t.GSlider();

case t.ObjectType.ScrollBar:
return new t.GScrollBar();

case t.ObjectType.ComboBox:
return new t.GComboBox();

case t.ObjectType.Tree:
return new t.GTree();

case t.ObjectType.Loader3D:
return new t.GLoader3D();

case t.ObjectType.GListLayout:
return new t.GListLayout();

default:
return null;
} else (o = i.type == t.PackageItemType.Component ? n ? new n() : i.extensionType ? new i.extensionType() : e.newObject(i.objectType) : e.newObject(i.objectType)) && (o.packageItem = i);
return o;
};
e.counter = 0;
e.extensions = {};
return e;
}();
t.UIObjectFactory = e;
})(fgui || (fgui = {}));

(function(t) {
var e, i = function() {
function e() {
this._items = [];
this._itemsById = {};
this._itemsByName = {};
this._sprites = {};
this._dependencies = [];
this._branches = [];
this._branchIndex = -1;
}
Object.defineProperty(e, "branch", {
get: function() {
return e._branch;
},
set: function(t) {
e._branch = t;
for (var i in e._instById) {
var n = e._instById[i];
n._branches && (n._branchIndex = n._branches.indexOf(t));
}
},
enumerable: !1,
configurable: !0
});
e.getVar = function(t) {
return e._vars[t];
};
e.setVar = function(t, i) {
e._vars[t] = i;
};
e.getById = function(t) {
return e._instById[t];
};
e.getByName = function(t) {
return e._instByName[t];
};
e.getByPath = function(t) {
for (var i of Object.keys(e._instByName)) if (e._instByName[i]._path == t) return e._instByName[i];
return null;
};
e.addPackage = function() {
cc.error("fgui addPackage not function");
};
e.loadPackage = function() {
for (var i, o, r, s, a = [], l = 0; l < arguments.length; l++) a[l] = arguments[l];
if (a[0] instanceof cc.AssetManager.Bundle) {
s = a[0];
i = a[1];
if (a.length > 3) {
"boolean" == typeof a[4] && a[4];
o = a[2];
r = a[3];
} else r = a[2];
} else {
i = a[0];
if (a.length > 2) {
o = a[1];
r = a[2];
} else r = a[1];
}
s.load(i, cc.BufferAsset, function(a, l) {
if (a) null != r && r(a, null); else {
var h = new e();
h._bundle = s;
h.loadPackage(new t.ByteBuffer(l._buffer), i);
for (var c = h._items.length, u = [], p = [], d = [], f = 0; f < c; f++) {
var _ = h._items[f];
if (_.type == t.PackageItemType.Atlas || _.type == t.PackageItemType.Sound) {
var g = n[_.type];
u.push(_.file);
p.push(g);
d.push(_);
}
}
var y, m = u.length, v = 0, b = function(t) {
++v;
o && o(v, m);
t && (y = t);
if (v >= m) {
e._instById[h.id] = h;
e._instByName[h.name] = h;
h._path && (e._instById[h._path] = h);
null != r && r(y, h);
}
};
m > 0 ? u.forEach(function(t, e) {
const i = p[e];
s.load(t, i, b);
}) : b();
}
});
};
e.loadPackageArray = function(t, i, n) {
var o = {
total: 10 * t.length,
finish: 0
}, r = function(e, i) {
for (var o in t) if (!t[o].isFinish) return;
null != n && n(!e, i);
};
t.forEach(t => {
e._loadPackageOne(t, o, i, r, !1);
});
};
e._loadPackageOne = function(i, o, r, s, a) {
const {bundleName: l, path: h, bundleOptions: c} = i, u = l => {
l.load(h, cc.BufferAsset, (c, u) => {
if (c) {
console.warn("loadPackageOne error:" + c);
a = !0;
i.isFinish = !0;
null != s && s(!a, h);
} else {
++o.finish;
r && r(o.finish, o.total);
var p = {}, d = new e();
d._bundle = l;
d.loadPackage(new t.ByteBuffer(u._buffer), h);
var f = [], _ = [], g = [];
for (let e in d._itemsById) {
var y = d._itemsById[e];
if (y.type == t.PackageItemType.Atlas || y.type == t.PackageItemType.Sound) {
var m = n[y.type];
f.push(y.file);
_.push(m);
g.push(y);
}
}
var v = f.length, b = 0, w = function() {
if (++b == v) {
p = null;
e._instById[d.id] = d;
e._instByName[d.name] = d;
if (null != s) {
i.isFinish = !0;
s(!a, h);
}
}
}, S = function(t, e, i) {
p || (p = {});
p[i.info.path] || (p[i.info.path] = 0);
o.finish += Math.floor(9 / v * (t - p[i.info.path]) / e * 1e3) / 1e3;
p[i.info.path] = t;
r && r(o.finish, o.total);
};
v > 0 ? f.forEach(function(t, e) {
const i = _[e];
l.load(t, i, S, w);
}) : function() {
o.finish += Math.floor(9 / v * 1e3) / 1e3;
r && r(o.finish, o.total);
void 0;
w();
}();
}
});
}, p = cc.assetManager.getBundle(l);
p ? u(p) : cc.assetManager.loadBundle(l, c, (t, e) => {
t ? console.warn("loadBundle error:" + t) : u(e);
});
};
e.removePackage = function(t) {
var i = e._instById[t];
i || (i = e._instByName[t]);
if (!i) throw "No package found: " + t;
i.dispose();
delete e._instById[i.id];
delete e._instByName[i.name];
i._path && delete e._instById[i._path];
};
e.createObject = function(t, i, n) {
var o = e.getByName(t);
return o ? o.createObject(i, n) : null;
};
e.createObjectFromURL = function(t, i) {
var n = e.getItemByURL(t);
return n ? n.owner.internalCreateObject(n, i) : null;
};
e.getItemURL = function(t, i) {
var n = e.getByName(t);
if (!n) return null;
var o = n._itemsByName[i];
return o ? "ui://" + n.id + o.id : null;
};
e.getItemByURL = function(t) {
var i = t.indexOf("//");
if (-1 == i) return null;
var n = t.indexOf("/", i + 2);
if (-1 == n) {
if (t.length > 13) {
var o = t.substr(5, 8), r = e.getById(o);
if (null != r) {
var s = t.substr(13);
return r.getItemById(s);
}
}
} else {
var a = t.substr(i + 2, n - i - 2);
if (null != (r = e.getByName(a))) {
var l = t.substr(n + 1);
return r.getItemByName(l);
}
}
return null;
};
e.normalizeURL = function(t) {
if (null == t) return null;
var i = t.indexOf("//");
if (-1 == i) return null;
var n = t.indexOf("/", i + 2);
if (-1 == n) return t;
var o = t.substr(i + 2, n - i - 2), r = t.substr(n + 1);
return e.getItemURL(o, r);
};
e.setStringsSource = function(e) {
t.TranslationHelper.loadFromXML(e);
};
e.prototype.loadPackage = function(i, n) {
if (1179080009 != i.readUint()) throw "FairyGUI: old package format found in '" + n + "'";
this._path = n;
i.version = i.readInt();
var o = i.version >= 2;
i.readBool();
this._id = i.readString();
this._name = i.readString();
i.skip(20);
var r, s, a, l, h, c = i.position;
i.seek(c, 4);
r = i.readInt();
var u, p = new Array(r);
i.stringTable = p;
for (s = 0; s < r; s++) p[s] = i.readString();
if (i.seek(c, 5)) {
r = i.readInt();
for (s = 0; s < r; s++) {
var d = i.readUshort(), f = i.readInt();
p[d] = i.readString(f);
}
}
i.seek(c, 0);
r = i.readShort();
for (s = 0; s < r; s++) this._dependencies.push({
id: i.readS(),
name: i.readS()
});
if (o) {
if ((r = i.readShort()) > 0) {
this._branches = i.readSArray(r);
e._branch && (this._branchIndex = this._branches.indexOf(e._branch));
}
h = r > 0;
}
i.seek(c, 1);
var _ = n.lastIndexOf("/"), g = -1 == _ ? "" : n.substr(0, _ + 1);
n += "_";
r = i.readShort();
for (s = 0; s < r; s++) {
a = i.readInt();
a += i.position;
(u = new t.PackageItem()).owner = this;
u.type = i.readByte();
u.id = i.readS();
u.name = i.readS();
i.readS();
u.file = i.readS();
i.readBool();
u.width = i.readInt();
u.height = i.readInt();
switch (u.type) {
case t.PackageItemType.Image:
u.objectType = t.ObjectType.Image;
var y = i.readByte();
if (1 == y) {
u.scale9Grid = new cc.Rect();
u.scale9Grid.x = i.readInt();
u.scale9Grid.y = i.readInt();
u.scale9Grid.width = i.readInt();
u.scale9Grid.height = i.readInt();
u.tileGridIndice = i.readInt();
} else 2 == y && (u.scaleByTile = !0);
u.smoothing = i.readBool();
break;

case t.PackageItemType.MovieClip:
u.smoothing = i.readBool();
u.objectType = t.ObjectType.MovieClip;
u.rawData = i.readBuffer();
break;

case t.PackageItemType.Font:
u.rawData = i.readBuffer();
break;

case t.PackageItemType.Component:
var m = i.readByte();
u.objectType = m > 0 ? m : t.ObjectType.Component;
u.rawData = i.readBuffer();
t.UIObjectFactory.resolveExtension(u);
break;

case t.PackageItemType.Atlas:
case t.PackageItemType.Sound:
case t.PackageItemType.Misc:
u.file = n + cc.path.mainFileName(u.file);
break;

case t.PackageItemType.Spine:
case t.PackageItemType.DragonBones:
u.file = g + cc.path.mainFileName(u.file);
u.skeletonAnchor = new cc.Vec2();
u.skeletonAnchor.x = i.readFloat();
u.skeletonAnchor.y = i.readFloat();
}
if (o) {
(l = i.readS()) && (u.name = l + "/" + u.name);
var v = i.readUbyte();
v > 0 && (h ? u.branches = i.readSArray(v) : this._itemsById[i.readS()] = u);
var b = i.readUbyte();
b > 0 && (u.highResolution = i.readSArray(b));
}
this._items.push(u);
this._itemsById[u.id] = u;
null != u.name && (this._itemsByName[u.name] = u);
i.position = a;
}
i.seek(c, 2);
r = i.readShort();
for (s = 0; s < r; s++) {
a = i.readShort();
a += i.position;
var w = i.readS();
u = this._itemsById[i.readS()];
var S = new cc.Rect();
S.x = i.readInt();
S.y = i.readInt();
S.width = i.readInt();
S.height = i.readInt();
var I = {
atlas: u,
rect: S,
offset: new cc.Vec2(),
originalSize: new cc.Size(0, 0)
};
I.rotated = i.readBool();
if (o && i.readBool()) {
I.offset.x = i.readInt();
I.offset.y = i.readInt();
I.originalSize.width = i.readInt();
I.originalSize.height = i.readInt();
} else {
I.originalSize.width = I.rect.width;
I.originalSize.height = I.rect.height;
}
this._sprites[w] = I;
i.position = a;
}
if (i.seek(c, 3)) {
r = i.readShort();
for (s = 0; s < r; s++) {
a = i.readInt();
a += i.position;
(u = this._itemsById[i.readS()]) && u.type == t.PackageItemType.Image && (u.hitTestData = new t.PixelHitTestData(i));
i.position = a;
}
}
};
e.prototype.dispose = function() {
for (var t = this._items.length, e = 0; e < t; e++) {
var i = this._items[e];
i.asset && cc.assetManager.releaseAsset(i.asset);
}
};
Object.defineProperty(e.prototype, "id", {
get: function() {
return this._id;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "name", {
get: function() {
return this._name;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "path", {
get: function() {
return this._path;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "dependencies", {
get: function() {
return this._dependencies;
},
enumerable: !1,
configurable: !0
});
e.prototype.createObject = function(t, e) {
var i = this._itemsByName[t];
return i ? this.internalCreateObject(i, e) : null;
};
e.prototype.internalCreateObject = function(i, n) {
var o = t.UIObjectFactory.newObject(i, n);
if (null == o) return null;
e._constructing++;
o.constructFromResource();
e._constructing--;
return o;
};
e.prototype.getItemById = function(t) {
return this._itemsById[t];
};
e.prototype.getItemByName = function(t) {
return this._itemsByName[t];
};
e.prototype.getItemAssetByName = function(t) {
var e = this._itemsByName[t];
if (null == e) throw "Resource not found -" + t;
return this.getItemAsset(e);
};
e.prototype.getItemAsset = function(e) {
switch (e.type) {
case t.PackageItemType.Image:
if (!e.decoded) {
e.decoded = !0;
var i = this._sprites[e.id];
if (i) {
var o = this.getItemAsset(i.atlas);
if (o) {
var r = new cc.SpriteFrame(o, i.rect, i.rotated, new cc.Vec2(i.offset.x - (i.originalSize.width - i.rect.width) / 2, -(i.offset.y - (i.originalSize.height - i.rect.height) / 2)), i.originalSize);
if (e.scale9Grid) {
r.insetLeft = e.scale9Grid.x;
r.insetTop = e.scale9Grid.y;
r.insetRight = e.width - e.scale9Grid.xMax;
r.insetBottom = e.height - e.scale9Grid.yMax;
}
e.asset = r;
}
}
}
break;

case t.PackageItemType.Atlas:
case t.PackageItemType.Sound:
if (!e.decoded) {
e.decoded = !0;
e.asset = this._bundle.get(e.file, n[e.type]);
e.asset || console.log("Resource '" + e.file + "' not found");
}
break;

case t.PackageItemType.Font:
if (!e.decoded) {
e.decoded = !0;
this.loadFont(e);
}
break;

case t.PackageItemType.MovieClip:
if (!e.decoded) {
e.decoded = !0;
this.loadMovieClip(e);
}
}
return e.asset;
};
e.prototype.getItemAssetAsync = function(e, i) {
if (e.decoded) i(null, e); else if (e.loading) e.loading.push(i); else switch (e.type) {
case t.PackageItemType.Spine:
e.loading = [ i ];
this.loadSpine(e);
break;

case t.PackageItemType.DragonBones:
e.loading = [ i ];
this.loadDragonBones(e);
break;

default:
this.getItemAsset(e);
i(null, e);
}
};
e.prototype.loadAllAssets = function() {
for (var t = this._items.length, e = 0; e < t; e++) {
var i = this._items[e];
this.getItemAsset(i);
}
};
e.prototype.loadMovieClip = function(t) {
var e = t.rawData;
e.seek(0, 0);
t.interval = e.readInt() / 1e3;
t.swing = e.readBool();
t.repeatDelay = e.readInt() / 1e3;
e.seek(0, 1);
var i, n, o = e.readShort();
t.frames = Array(o);
for (var r = 0; r < o; r++) {
var s = e.readShort();
s += e.position;
var a = new cc.Rect();
a.x = e.readInt();
a.y = e.readInt();
a.width = e.readInt();
a.height = e.readInt();
var l = {
rect: a,
addDelay: e.readInt() / 1e3
};
if (null != (i = e.readS()) && null != (n = this._sprites[i])) {
var h = this.getItemAsset(n.atlas);
if (h) {
t.width, l.rect.width;
l.texture = new cc.SpriteFrame(h, n.rect, n.rotated, new cc.Vec2(l.rect.x - (t.width - l.rect.width) / 2, -(l.rect.y - (t.height - l.rect.height) / 2)), new cc.Size(t.width, t.height));
}
}
t.frames[r] = l;
e.position = s;
}
};
e.prototype.loadFont = function(t) {
var e = new cc.LabelAtlas();
t.asset = e;
e._fntConfig = {
commonHeight: 0,
fontSize: 0,
kerningDict: {},
fontDefDictionary: {}
};
var i = e._fntConfig.fontDefDictionary, n = t.rawData;
n.seek(0, 0);
var o = n.readBool(), r = n.readBool(), s = n.readBool();
n.readBool();
var a, l, h = n.readInt(), c = n.readInt(), u = n.readInt(), p = this._sprites[t.id];
p && (a = this.getItemAsset(p.atlas));
n.seek(0, 1);
for (var d = n.readInt(), f = 0; f < d; f++) {
var _ = n.readShort();
_ += n.position;
l = {};
i[n.readUshort()] = l;
var g = new cc.Rect();
l.rect = g;
var y = n.readS();
g.x = n.readInt();
g.y = n.readInt();
l.xOffset = n.readInt();
l.yOffset = n.readInt();
g.width = n.readInt();
g.height = n.readInt();
l.xAdvance = n.readInt();
l.channel = n.readByte();
1 == l.channel ? l.channel = 3 : 2 == l.channel ? l.channel = 2 : 3 == l.channel && (l.channel = 1);
if (o) {
g.x += p.rect.x;
g.y += p.rect.y;
} else {
var m = this._sprites[y];
if (m) {
g.set(m.rect);
l.xOffset += m.offset.x;
l.yOffset += m.offset.y;
0 == h && (h = m.originalSize.height);
if (!a) {
m.atlas.load();
a = m.atlas.asset;
}
}
0 == l.xAdvance && (l.xAdvance = 0 == c ? l.xOffset + l.rect.width : c);
}
n.position = _;
}
e.fontSize = h;
e._fntConfig.fontSize = h;
e._fntConfig.commonHeight = 0 == u ? h : u;
e._fntConfig.resizable = s;
e._fntConfig.canTint = r;
var v = new cc.SpriteFrame();
v.setTexture(a);
e.spriteFrame = v;
e.onLoad();
};
e.prototype.loadSpine = function(t) {
this._bundle.load(t.file, sp.SkeletonData, function(e, i) {
t.decoded = !0;
t.asset = i;
var n = t.loading;
delete t.loading;
n.forEach(function(i) {
return i(e, t);
});
});
};
e.prototype.loadDragonBones = function(t) {
var e = this;
this._bundle.load(t.file, dragonBones.DragonBonesAsset, function(i, n) {
if (i) {
t.decoded = !0;
var o = t.loading;
delete t.loading;
o.forEach(function(e) {
return e(i, t);
});
} else {
t.asset = n;
var r = t.file.replace("_ske", "_tex"), s = r.lastIndexOf(".");
-1 != s && (r = r.substr(0, s + 1) + "json");
e._bundle.load(r, dragonBones.DragonBonesAtlasAsset, function(e, i) {
t.decoded = !0;
t.atlasAsset = i;
var n = t.loading;
delete t.loading;
n.forEach(function(i) {
return i(e, t);
});
});
}
});
};
e._constructing = 0;
e._instById = {};
e._instByName = {};
e._branch = "";
e._vars = {};
return e;
}();
t.UIPackage = i;
var n = ((e = {})[t.PackageItemType.Atlas] = cc.Texture2D, e[t.PackageItemType.Sound] = cc.AudioClip, 
e);
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._requestingCmd = 0;
i._uiSources = new Array();
i.bringToFontOnClick = t.UIConfig.bringWindowToFrontOnClick;
i._node.on(t.Event.TOUCH_BEGIN, i.onTouchBegin_1, i, !0);
return i;
}
i.prototype.addUISource = function(t) {
this._uiSources.push(t);
};
Object.defineProperty(i.prototype, "contentPane", {
get: function() {
return this._contentPane;
},
set: function(e) {
if (this._contentPane != e) {
this._contentPane && this.removeChild(this._contentPane);
this._contentPane = e;
if (this._contentPane) {
this.addChild(this._contentPane);
this.setSize(this._contentPane.width, this._contentPane.height);
this._contentPane.addRelation(this, t.RelationType.Size);
this._frame = this._contentPane.getChild("frame");
if (this._frame) {
this.closeButton = this._frame.getChild("closeButton");
this.dragArea = this._frame.getChild("dragArea");
this.contentArea = this._frame.getChild("contentArea");
}
}
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "frame", {
get: function() {
return this._frame;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "closeButton", {
get: function() {
return this._closeButton;
},
set: function(t) {
this._closeButton && this._closeButton.offClick(this.closeEventHandler, this);
this._closeButton = t;
this._closeButton && this._closeButton.onClick(this.closeEventHandler, this);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "dragArea", {
get: function() {
return this._dragArea;
},
set: function(e) {
if (this._dragArea != e) {
if (this._dragArea) {
this._dragArea.draggable = !1;
this._dragArea.off(t.Event.DRAG_START, this.onDragStart_1, this);
}
this._dragArea = e;
if (this._dragArea) {
this._dragArea.draggable = !0;
this._dragArea.on(t.Event.DRAG_START, this.onDragStart_1, this);
}
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "contentArea", {
get: function() {
return this._contentArea;
},
set: function(t) {
this._contentArea = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.show = function() {
t.GRoot.inst.showWindow(this);
};
i.prototype.showOn = function(t) {
t.showWindow(this);
};
i.prototype.hide = function() {
this.isShowing && this.doHideAnimation();
};
i.prototype.hideImmediately = function() {
var e = this.parent instanceof t.GRoot ? this.parent : null;
e || (e = t.GRoot.inst);
e.hideWindowImmediately(this);
};
i.prototype.centerOn = function(e, i) {
this.setPosition(Math.round((e.width - this.width) / 2), Math.round((e.height - this.height) / 2));
if (i) {
this.addRelation(e, t.RelationType.Center_Center);
this.addRelation(e, t.RelationType.Middle_Middle);
}
};
i.prototype.toggleStatus = function() {
this.isTop ? this.hide() : this.show();
};
Object.defineProperty(i.prototype, "isShowing", {
get: function() {
return null != this.parent;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "isTop", {
get: function() {
return this.parent && this.parent.getChildIndex(this) == this.parent.numChildren - 1;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "modal", {
get: function() {
return this._modal;
},
set: function(t) {
this._modal = t;
},
enumerable: !1,
configurable: !0
});
i.prototype.bringToFront = function() {
this.root.bringToFront(this);
};
i.prototype.showModalWait = function(e) {
null != e && (this._requestingCmd = e);
if (t.UIConfig.windowModalWaiting) {
this._modalWaitPane || (this._modalWaitPane = t.UIPackage.createObjectFromURL(t.UIConfig.windowModalWaiting));
this.layoutModalWaitPane();
this.addChild(this._modalWaitPane);
}
};
i.prototype.layoutModalWaitPane = function() {
if (this._contentArea) {
var t = this._frame.localToGlobal();
t = this.globalToLocal(t.x, t.y, t);
this._modalWaitPane.setPosition(t.x + this._contentArea.x, t.y + this._contentArea.y);
this._modalWaitPane.setSize(this._contentArea.width, this._contentArea.height);
} else this._modalWaitPane.setSize(this.width, this.height);
};
i.prototype.closeModalWait = function(t) {
if (null != t && this._requestingCmd != t) return !1;
this._requestingCmd = 0;
this._modalWaitPane && this._modalWaitPane.parent && this.removeChild(this._modalWaitPane);
return !0;
};
Object.defineProperty(i.prototype, "modalWaiting", {
get: function() {
return this._modalWaitPane && null != this._modalWaitPane.parent;
},
enumerable: !1,
configurable: !0
});
i.prototype.init = function() {
if (!this._inited && !this._loading) if (this._uiSources.length > 0) {
this._loading = !1;
for (var t = this._uiSources.length, e = 0; e < t; e++) {
var i = this._uiSources[e];
if (!i.loaded) {
i.load(this.__uiLoadComplete, this);
this._loading = !0;
}
}
this._loading || this._init();
} else this._init();
};
i.prototype.onInit = function() {};
i.prototype.onShown = function() {};
i.prototype.onHide = function() {};
i.prototype.doShowAnimation = function() {
this.onShown();
};
i.prototype.doHideAnimation = function() {
this.hideImmediately();
};
i.prototype.__uiLoadComplete = function() {
for (var t = this._uiSources.length, e = 0; e < t; e++) if (!this._uiSources[e].loaded) return;
this._loading = !1;
this._init();
};
i.prototype._init = function() {
this._inited = !0;
this.onInit();
this.isShowing && this.doShowAnimation();
};
i.prototype.dispose = function() {
this.parent && this.hideImmediately();
e.prototype.dispose.call(this);
};
i.prototype.closeEventHandler = function() {
this.hide();
};
i.prototype.onEnable = function() {
e.prototype.onEnable.call(this);
this._inited ? this.doShowAnimation() : this.init();
};
i.prototype.onDisable = function() {
e.prototype.onDisable.call(this);
this.closeModalWait();
this.onHide();
};
i.prototype.onTouchBegin_1 = function() {
this.isShowing && this.bringToFontOnClick && this.bringToFront();
};
i.prototype.onDragStart_1 = function(e) {
t.GObject.cast(e.currentTarget).stopDrag();
this.startDrag(e.touchId);
};
return i;
}(t.GComponent);
t.Window = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e() {}
e.createAction = function(e) {
switch (e) {
case 0:
return new t.PlayTransitionAction();

case 1:
return new t.ChangePageAction();
}
return null;
};
e.prototype.run = function(t, e, i) {
null != this.fromPage && 0 != this.fromPage.length && -1 == this.fromPage.indexOf(e) || null != this.toPage && 0 != this.toPage.length && -1 == this.toPage.indexOf(i) ? this.leave(t) : this.enter(t);
};
e.prototype.enter = function() {};
e.prototype.leave = function() {};
e.prototype.setup = function(t) {
var e, i;
e = t.readShort();
this.fromPage = [];
for (i = 0; i < e; i++) this.fromPage[i] = t.readS();
e = t.readShort();
this.toPage = [];
for (i = 0; i < e; i++) this.toPage[i] = t.readS();
};
return e;
}();
t.ControllerAction = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
return e.call(this) || this;
}
i.prototype.enter = function(e) {
if (this.controllerName) {
var i;
if (this.objectId) {
var n = e.parent.getChildById(this.objectId);
if (!(n instanceof t.GComponent)) return;
i = n;
} else i = e.parent;
if (i) {
var o = i.getController(this.controllerName);
o && o != e && !o.changing && ("~1" == this.targetPage ? e.selectedIndex < o.pageCount && (o.selectedIndex = e.selectedIndex) : "~2" == this.targetPage ? o.selectedPage = e.selectedPage : o.selectedPageId = this.targetPage);
}
}
};
i.prototype.setup = function(t) {
e.prototype.setup.call(this, t);
this.objectId = t.readS();
this.controllerName = t.readS();
this.targetPage = t.readS();
};
return i;
}(t.ControllerAction);
t.ChangePageAction = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
var e = t.call(this) || this;
e.playTimes = 1;
e.delay = 0;
e.stopOnExit = !1;
return e;
}
e.prototype.enter = function(t) {
var e = t.parent.getTransition(this.transitionName);
if (e) {
this._currentTransition && this._currentTransition.playing ? e.changePlayTimes(this.playTimes) : e.play(null, this.playTimes, this.delay);
this._currentTransition = e;
}
};
e.prototype.leave = function() {
if (this.stopOnExit && this._currentTransition) {
this._currentTransition.stop();
this._currentTransition = null;
}
};
e.prototype.setup = function(e) {
t.prototype.setup.call(this, e);
this.transitionName = e.readS();
this.playTimes = e.readInt();
this.delay = e.readFloat();
this.stopOnExit = e.readBool();
};
return e;
}(t.ControllerAction);
t.PlayTransitionAction = e;
})(fgui || (fgui = {}));

(function(t) {
(function(t) {
t[t.Normal = 0] = "Normal";
t[t.None = 1] = "None";
t[t.Add = 2] = "Add";
t[t.Multiply = 3] = "Multiply";
t[t.Screen = 4] = "Screen";
t[t.Erase = 5] = "Erase";
t[t.Mask = 6] = "Mask";
t[t.Below = 7] = "Below";
t[t.Off = 8] = "Off";
t[t.Custom1 = 9] = "Custom1";
t[t.Custom2 = 10] = "Custom2";
t[t.Custom3 = 11] = "Custom3";
})(t.BlendMode || (t.BlendMode = {}));
var e = function() {
function t() {}
t.apply = function(t, e) {
var n = i[e];
t.getComponentsInChildren(cc.RenderComponent).forEach(function(t) {
t.srcBlendFactor = n[0];
t.dstBlendFactor = n[1];
});
};
t.override = function(t, e, n) {
i[t][0] = e;
i[t][1] = n;
};
return t;
}();
t.BlendModeUtils = e;
var i = [ [ cc.macro.SRC_ALPHA, cc.macro.ONE_MINUS_SRC_ALPHA ], [ cc.macro.ONE, cc.macro.ONE ], [ cc.macro.SRC_ALPHA, cc.macro.ONE ], [ cc.macro.DST_COLOR, cc.macro.ONE_MINUS_SRC_ALPHA ], [ cc.macro.ONE, cc.macro.ONE_MINUS_SRC_COLOR ], [ cc.macro.ZERO, cc.macro.ONE_MINUS_SRC_ALPHA ], [ cc.macro.ZERO, cc.macro.SRC_ALPHA ], [ cc.macro.ONE_MINUS_DST_ALPHA, cc.macro.DST_ALPHA ], [ cc.macro.ONE, cc.macro.ZERO ], [ cc.macro.SRC_ALPHA, cc.macro.ONE_MINUS_SRC_ALPHA ], [ cc.macro.SRC_ALPHA, cc.macro.ONE_MINUS_SRC_ALPHA ], [ cc.macro.SRC_ALPHA, cc.macro.ONE_MINUS_SRC_ALPHA ] ];
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = e.call(this) || this;
i._flip = t.FlipType.None;
i._fillMethod = t.FillMethod.None;
i._fillOrigin = t.FillOrigin.Left;
i._fillAmount = 0;
return i;
}
Object.defineProperty(i.prototype, "flip", {
get: function() {
return this._flip;
},
set: function(e) {
if (this._flip != e) {
this._flip = e;
var i = 1, n = 1;
this._flip != t.FlipType.Horizontal && this._flip != t.FlipType.Both || (i = -1);
this._flip != t.FlipType.Vertical && this._flip != t.FlipType.Both || (n = -1);
1 == i && 1 == n || this.node.setAnchorPoint(.5, .5);
this.node.setScale(i, n);
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillMethod", {
get: function() {
return this._fillMethod;
},
set: function(t) {
if (this._fillMethod != t) {
this._fillMethod = t;
if (0 != this._fillMethod) {
this.type = cc.Sprite.Type.FILLED;
this._fillMethod <= 3 ? this.fillType = this._fillMethod - 1 : this.fillType = cc.Sprite.FillType.RADIAL;
this.fillCenter = new cc.Vec2(.5, .5);
this.setupFill();
} else this.type = cc.Sprite.Type.SIMPLE;
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillOrigin", {
get: function() {
return this._fillOrigin;
},
set: function(t) {
if (this._fillOrigin != t) {
this._fillOrigin = t;
0 != this._fillMethod && this.setupFill();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillClockwise", {
get: function() {
return this._fillClockwise;
},
set: function(t) {
if (this._fillClockwise != t) {
this._fillClockwise = t;
0 != this._fillMethod && this.setupFill();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "fillAmount", {
get: function() {
return this._fillAmount;
},
set: function(t) {
if (this._fillAmount != t) {
this._fillAmount = t;
0 != this._fillMethod && (this._fillClockwise ? this.fillRange = -this._fillAmount : this.fillRange = this._fillAmount);
}
},
enumerable: !1,
configurable: !0
});
i.prototype.setupFill = function() {
if (this._fillMethod == t.FillMethod.Horizontal) {
this._fillClockwise = this._fillOrigin == t.FillOrigin.Right || this._fillOrigin == t.FillOrigin.Bottom;
this.fillStart = this._fillClockwise ? 1 : 0;
} else if (this._fillMethod == t.FillMethod.Vertical) {
this._fillClockwise = this._fillOrigin == t.FillOrigin.Left || this._fillOrigin == t.FillOrigin.Top;
this.fillStart = this._fillClockwise ? 1 : 0;
} else switch (this._fillOrigin) {
case t.FillOrigin.Right:
this.fillOrigin = 0;
break;

case t.FillOrigin.Top:
this.fillStart = .25;
break;

case t.FillOrigin.Left:
this.fillStart = .5;
break;

case t.FillOrigin.Bottom:
this.fillStart = .75;
}
};
Object.defineProperty(i.prototype, "grayed", {
get: function() {
return this._grayed;
},
set: function(t) {
if (this._grayed != t) {
this._grayed = t;
var e;
if (t) {
(e = this._graySpriteMaterial) || (e = cc.Material.getBuiltinMaterial("2d-gray-sprite"));
e = this._graySpriteMaterial = cc.MaterialVariant.create(e, this);
} else {
(e = this._spriteMaterial) || (e = cc.Material.getBuiltinMaterial("2d-sprite", this));
e = this._spriteMaterial = cc.MaterialVariant.create(e, this);
}
this.setMaterial(0, e);
}
},
enumerable: !1,
configurable: !0
});
return i;
}(cc.Sprite);
t.Image = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(t) {
__extends(e, t);
function e() {
var e = t.call(this) || this;
e.interval = 0;
e.repeatDelay = 0;
e.timeScale = 1;
e._playing = !0;
e._frameCount = 0;
e._frame = 0;
e._start = 0;
e._end = 0;
e._times = 0;
e._endAt = 0;
e._status = 0;
e._smoothing = !0;
e._frameElapsed = 0;
e._reversed = !1;
e._repeatedCount = 0;
return e;
}
Object.defineProperty(e.prototype, "frames", {
get: function() {
return this._frames;
},
set: function(t) {
this._frames = t;
if (this._frames) {
this._frameCount = this._frames.length;
(-1 == this._end || this._end > this._frameCount - 1) && (this._end = this._frameCount - 1);
(-1 == this._endAt || this._endAt > this._frameCount - 1) && (this._endAt = this._frameCount - 1);
(this._frame < 0 || this._frame > this._frameCount - 1) && (this._frame = this._frameCount - 1);
this.type = cc.Sprite.Type.SIMPLE;
this.drawFrame();
this._frameElapsed = 0;
this._repeatedCount = 0;
this._reversed = !1;
} else this._frameCount = 0;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "frameCount", {
get: function() {
return this._frameCount;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "frame", {
get: function() {
return this._frame;
},
set: function(t) {
if (this._frame != t) {
this._frames && t >= this._frameCount && (t = this._frameCount - 1);
this._frame = t;
this._frameElapsed = 0;
this.drawFrame();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "playing", {
get: function() {
return this._playing;
},
set: function(t) {
this._playing != t && (this._playing = t);
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "smoothing", {
get: function() {
return this._smoothing;
},
set: function(t) {
this._smoothing = t;
},
enumerable: !1,
configurable: !0
});
e.prototype.rewind = function() {
this._frame = 0;
this._frameElapsed = 0;
this._reversed = !1;
this._repeatedCount = 0;
this.drawFrame();
};
e.prototype.syncStatus = function(t) {
this._frame = t._frame;
this._frameElapsed = t._frameElapsed;
this._reversed = t._reversed;
this._repeatedCount = t._repeatedCount;
this.drawFrame();
};
e.prototype.advance = function(t) {
for (var e = this._frame, i = this._reversed, n = t; ;) {
var o = this.interval + this._frames[this._frame].addDelay;
0 == this._frame && this._repeatedCount > 0 && (o += this.repeatDelay);
if (t < o) {
this._frameElapsed = 0;
break;
}
t -= o;
if (this.swing) if (this._reversed) {
this._frame--;
if (this._frame <= 0) {
this._frame = 0;
this._repeatedCount++;
this._reversed = !this._reversed;
}
} else {
this._frame++;
if (this._frame > this._frameCount - 1) {
this._frame = Math.max(0, this._frameCount - 2);
this._repeatedCount++;
this._reversed = !this._reversed;
}
} else {
this._frame++;
if (this._frame > this._frameCount - 1) {
this._frame = 0;
this._repeatedCount++;
}
}
if (this._frame == e && this._reversed == i) {
var r = n - t;
t -= Math.floor(t / r) * r;
}
}
this.drawFrame();
};
e.prototype.setPlaySettings = function(t, e, i, n, o, r) {
null == t && (t = 0);
null == e && (e = -1);
null == i && (i = 0);
null == n && (n = -1);
this._start = t;
this._end = e;
(-1 == this._end || this._end > this._frameCount - 1) && (this._end = this._frameCount - 1);
this._times = i;
this._endAt = n;
-1 == this._endAt && (this._endAt = this._end);
this._status = 0;
this._callback = o;
this._callbackObj = r;
this.frame = t;
};
e.prototype.update = function(t) {
if (this._playing && 0 != this._frameCount && 3 != this._status) {
1 != this.timeScale && (t *= this.timeScale);
this._frameElapsed += t;
var e = this.interval + this._frames[this._frame].addDelay;
0 == this._frame && this._repeatedCount > 0 && (e += this.repeatDelay);
if (!(this._frameElapsed < e)) {
this._frameElapsed -= e;
this._frameElapsed > this.interval && (this._frameElapsed = this.interval);
if (this.swing) if (this._reversed) {
this._frame--;
if (this._frame <= 0) {
this._frame = 0;
this._repeatedCount++;
this._reversed = !this._reversed;
}
} else {
this._frame++;
if (this._frame > this._frameCount - 1) {
this._frame = Math.max(0, this._frameCount - 2);
this._repeatedCount++;
this._reversed = !this._reversed;
}
} else {
this._frame++;
if (this._frame > this._frameCount - 1) {
this._frame = 0;
this._repeatedCount++;
}
}
if (1 == this._status) {
this._frame = this._start;
this._frameElapsed = 0;
this._status = 0;
} else if (2 == this._status) {
this._frame = this._endAt;
this._frameElapsed = 0;
this._status = 3;
if (null != this._callback) {
var i = this._callback, n = this._callbackObj;
this._callback = null;
this._callbackObj = null;
i.call(n);
}
} else if (this._frame == this._end) if (this._times > 0) {
this._times--;
0 == this._times ? this._status = 2 : this._status = 1;
} else 0 != this._start && (this._status = 1);
this.drawFrame();
}
}
};
e.prototype.drawFrame = function() {
if (this._frameCount > 0 && this._frame < this._frames.length) {
var t = this._frames[this._frame];
this.spriteFrame = t.texture;
}
};
return e;
}(t.Image);
t.MovieClip = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(n, e);
function n(t, i) {
var n = e.call(this, t, i) || this;
n.pos = new cc.Vec2();
n.touchId = 0;
n.clickCount = 0;
n.button = 0;
n.keyModifiers = 0;
n.mouseWheelDelta = 0;
return n;
}
Object.defineProperty(n.prototype, "isShiftDown", {
get: function() {
return !1;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(n.prototype, "isCtrlDown", {
get: function() {
return !1;
},
enumerable: !1,
configurable: !0
});
n.prototype.captureTouch = function() {
var e = t.GObject.cast(this.currentTarget);
e && this._processor.addTouchMonitor(this.touchId, e);
};
n._borrow = function(t, e) {
var o;
if (i.length) {
(o = i.pop()).type = t;
o.bubbles = e;
} else o = new n(t, e);
return o;
};
n._return = function(t) {
t.initiator = null;
t.touch = null;
t.unuse();
i.push(t);
};
n.TOUCH_BEGIN = "fui_touch_begin";
n.TOUCH_MOVE = "fui_touch_move";
n.TOUCH_END = "fui_touch_end";
n.CLICK = "fui_click";
n.ROLL_OVER = "fui_roll_over";
n.ROLL_OUT = "fui_roll_out";
n.MOUSE_WHEEL = "fui_mouse_wheel";
n.DISPLAY = "fui_display";
n.UNDISPLAY = "fui_undisplay";
n.GEAR_STOP = "fui_gear_stop";
n.LINK = "fui_text_link";
n.Submit = "editing-return";
n.TEXT_CHANGE = "text-changed";
n.STATUS_CHANGED = "fui_status_changed";
n.XY_CHANGED = "fui_xy_changed";
n.SIZE_CHANGED = "fui_size_changed";
n.SIZE_DELAY_CHANGE = "fui_size_delay_change";
n.DRAG_START = "fui_drag_start";
n.DRAG_MOVE = "fui_drag_move";
n.DRAG_END = "fui_drag_end";
n.DROP = "fui_drop";
n.SCROLL = "fui_scroll";
n.SCROLL_END = "fui_scroll_end";
n.PULL_DOWN_RELEASE = "fui_pull_down_release";
n.PULL_UP_RELEASE = "fui_pull_up_release";
n.CLICK_ITEM = "fui_click_item";
n.CLICK_EVENT_THROW_POLARIS = "fui_click_event_throw_polaris";
return n;
}(cc.Event);
t.Event = e;
var i = new Array();
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function t(t, e, i) {
this._data = t;
this.offsetX = null == e ? 0 : e;
this.offsetY = null == i ? 0 : i;
this.scaleX = 1;
this.scaleY = 1;
}
t.prototype.hitTest = function(t) {
var e = Math.floor((t.x / this.scaleX - this.offsetX) * this._data.scale), i = Math.floor((t.y / this.scaleY - this.offsetY) * this._data.scale);
if (e < 0 || i < 0 || e >= this._data.pixelWidth) return !1;
var n = i * this._data.pixelWidth + e, o = Math.floor(n / 8), r = n % 8;
return o >= 0 && o < this._data.pixels.length && 1 == (this._data.pixels[o] >> r & 1);
};
return t;
}();
t.PixelHitTest = e;
t.PixelHitTestData = function(t) {
t.readInt();
this.pixelWidth = t.readInt();
this.scale = 1 / t.readByte();
this.pixels = t.readBuffer().data;
};
var i = function() {
function t(t) {
this._child = t;
}
t.prototype.hitTest = function(t, e) {
return null != this._child.hitTest(e, !1);
};
return t;
}();
t.ChildHitArea = i;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(n, e);
function n() {
var t = e.call(this) || this;
t._touches = new Array();
t._rollOutChain = new Array();
t._rollOverChain = new Array();
t._touchPos = new cc.Vec2();
return t;
}
n.prototype.onLoad = function() {
this._owner = this.node.$gobj;
};
n.prototype.onEnable = function() {
var t = this.node;
t.on(cc.Node.EventType.TOUCH_START, this.touchBeginHandler, this);
t.on(cc.Node.EventType.TOUCH_MOVE, this.touchMoveHandler, this);
t.on(cc.Node.EventType.TOUCH_END, this.touchEndHandler, this);
t.on(cc.Node.EventType.TOUCH_CANCEL, this.touchCancelHandler, this);
t.on(cc.Node.EventType.MOUSE_DOWN, this.mouseDownHandler, this);
t.on(cc.Node.EventType.MOUSE_MOVE, this.mouseMoveHandler, this);
t.on(cc.Node.EventType.MOUSE_UP, this.mouseUpHandler, this);
t.on(cc.Node.EventType.MOUSE_WHEEL, this.mouseWheelHandler, this);
this._touchListener = this.node._touchListener;
};
n.prototype.onDisable = function() {
var t = this.node;
t.off(cc.Node.EventType.TOUCH_START, this.touchBeginHandler, this);
t.off(cc.Node.EventType.TOUCH_MOVE, this.touchMoveHandler, this);
t.off(cc.Node.EventType.TOUCH_END, this.touchEndHandler, this);
t.off(cc.Node.EventType.TOUCH_CANCEL, this.touchCancelHandler, this);
t.off(cc.Node.EventType.MOUSE_DOWN, this.mouseDownHandler, this);
t.off(cc.Node.EventType.MOUSE_MOVE, this.mouseMoveHandler, this);
t.off(cc.Node.EventType.MOUSE_UP, this.mouseUpHandler, this);
t.off(cc.Node.EventType.MOUSE_WHEEL, this.mouseWheelHandler, this);
this._touchListener = null;
};
n.prototype.getAllTouches = function(t) {
t = t || new Array();
for (var e = this._touches.length, i = 0; i < e; i++) {
var n = this._touches[i];
-1 != n.touchId && t.push(n.touchId);
}
return t;
};
n.prototype.getTouchPosition = function(t) {
void 0 === t && (t = -1);
for (var e = this._touches.length, i = 0; i < e; i++) {
var n = this._touches[i];
if (-1 != n.touchId && (-1 == t || n.touchId == t)) return n.pos;
}
return cc.Vec2.ZERO;
};
n.prototype.getTouchTarget = function() {
for (var t = this._touches.length, e = 0; e < t; e++) {
var i = this._touches[e];
if (-1 != i.touchId) return i.target;
}
return null;
};
n.prototype.addTouchMonitor = function(t, e) {
var i = this.getInfo(t, !1);
i && -1 == i.touchMonitors.indexOf(e) && i.touchMonitors.push(e);
};
n.prototype.removeTouchMonitor = function(t) {
for (var e = this._touches.length, i = 0; i < e; i++) {
var n = this._touches[i], o = n.touchMonitors.indexOf(t);
-1 != o && n.touchMonitors.splice(o, 1);
}
};
n.prototype.cancelClick = function(t) {
var e = this.getInfo(t, !1);
e && (e.clickCancelled = !0);
};
n.prototype.simulateClick = function(e) {
var i;
(i = t.Event._borrow(t.Event.TOUCH_BEGIN, !0)).initiator = e;
i.pos.set(e.localToGlobal());
i.touchId = 0;
i.clickCount = 1;
i.button = 0;
i._processor = this;
this._captureCallback && this._captureCallback.call(this._owner, i);
e.node.dispatchEvent(i);
i.unuse();
i.type = t.Event.TOUCH_END;
i.bubbles = !0;
e.node.dispatchEvent(i);
i.unuse();
i.type = t.Event.CLICK;
i.bubbles = !0;
e.node.dispatchEvent(i);
t.Event._return(i);
};
n.prototype.touchBeginHandler = function(e) {
t.GRoot.inst.isScrolled = !1;
var i = this.updateInfo(e.getID(), e.getLocation(), e);
t.GRoot.inst.touchStartPos = {
x: i.pos.x,
y: i.pos.y
};
this._touchListener.setSwallowTouches(i.target != this._owner);
this.setBegin(i);
var n = this.getEvent(i, i.target, t.Event.TOUCH_BEGIN, !0);
this._captureCallback && this._captureCallback.call(this._owner, n);
i.target.node.dispatchEvent(n);
this.handleRollOver(i, i.target);
return !0;
};
n.prototype.touchMoveHandler = function(e) {
var i = this.updateInfo(e.getID(), e.getLocation(), e);
this.handleRollOver(i, i.target);
if (i.began) {
for (var n = this.getEvent(i, i.target, t.Event.TOUCH_MOVE, !1), o = !1, r = i.touchMonitors.length, s = 0; s < r; s++) {
var a = i.touchMonitors[s];
if (null != a.node && a.node.activeInHierarchy) {
n.unuse();
n.type = t.Event.TOUCH_MOVE;
a.node.dispatchEvent(n);
a == this._owner && (o = !0);
}
}
if (!o && this.node) {
n.unuse();
n.type = t.Event.TOUCH_MOVE;
this.node.dispatchEvent(n);
}
t.Event._return(n);
}
};
n.prototype.touchEndHandler = function(e) {
var i = this.updateInfo(e.getID(), e.getLocation(), e);
t.GRoot.inst.touchEndPos = {
x: i.pos.x,
y: i.pos.y
};
this.setEnd(i);
for (var n = this.getEvent(i, i.target, t.Event.TOUCH_END, !1), o = i.touchMonitors.length, r = 0; r < o; r++) {
var s = i.touchMonitors[r];
if (s != i.target && null != s.node && s.node.activeInHierarchy && !(s instanceof t.GComponent && s.isAncestorOf(i.target))) {
n.unuse();
n.type = t.Event.TOUCH_END;
s.node.dispatchEvent(n);
}
}
i.touchMonitors.length = 0;
if (i.target && i.target.node) {
i.target instanceof t.GRichTextField && i.target.node.getComponent(cc.RichText)._onTouchEnded(n);
n.unuse();
n.type = t.Event.TOUCH_END;
n.bubbles = !0;
i.target.node.dispatchEvent(n);
}
t.Event._return(n);
i.target = this.clickTest(i);
if (i.target) {
n = this.getEvent(i, i.target, t.Event.CLICK, !0);
i.target.node.dispatchEvent(n);
t.Event._return(n);
}
cc.sys.isMobile ? this.handleRollOver(i, null) : this.handleRollOver(i, i.target);
i.target = null;
i.touchId = -1;
i.button = -1;
};
n.prototype.touchCancelHandler = function(e) {
for (var i = this.updateInfo(e.getID(), e.getLocation(), e), n = this.getEvent(i, i.target, t.Event.TOUCH_END, !1), o = i.touchMonitors.length, r = 0; r < o; r++) {
var s = i.touchMonitors[r];
if (s != i.target && null != s.node && s.node.activeInHierarchy && !(s instanceof t.GComponent && s.isAncestorOf(i.target))) {
n.initiator = s;
s.node.dispatchEvent(n);
}
}
i.touchMonitors.length = 0;
if (i.target && i.target.node) {
n.bubbles = !0;
i.target.node.dispatchEvent(n);
}
t.Event._return(n);
this.handleRollOver(i, null);
i.target = null;
i.touchId = -1;
i.button = -1;
};
n.prototype.mouseDownHandler = function(t) {
this.getInfo(0, !0).button = t.getButton();
};
n.prototype.mouseUpHandler = function(t) {
this.getInfo(0, !0).button = t.getButton();
};
n.prototype.mouseMoveHandler = function(e) {
var i = this.getInfo(0, !1);
if (!(i && Math.abs(i.pos.x - e.getLocationX()) < 1 && Math.abs(i.pos.y - (t.GRoot.inst.height - e.getLocationY())) < 1)) {
i = this.updateInfo(0, e.getLocation());
this.handleRollOver(i, i.target);
if (i.began) {
for (var n = this.getEvent(i, i.target, t.Event.TOUCH_MOVE, !1), o = !1, r = i.touchMonitors.length, s = 0; s < r; s++) {
var a = i.touchMonitors[s];
if (null != a.node && a.node.activeInHierarchy) {
n.initiator = a;
a.node.dispatchEvent(n);
a == this._owner && (o = !0);
}
}
if (!o && this.node) {
n.initiator = this._owner;
this.node.dispatchEvent(n);
t.Event._return(n);
}
t.Event._return(n);
}
}
};
n.prototype.mouseWheelHandler = function(e) {
var i = this.updateInfo(0, e.getLocation());
i.mouseWheelDelta = Math.max(e.getScrollX(), e.getScrollY());
var n = this.getEvent(i, i.target, t.Event.MOUSE_WHEEL, !0);
i.target.node.dispatchEvent(n);
t.Event._return(n);
};
n.prototype.updateInfo = function(e, i, n) {
var o, r = cc.Camera.findCamera(this.node);
r ? r.getScreenToWorldPoint(i, this._touchPos) : this._touchPos.set(i);
this._touchPos.y = t.GRoot.inst.height - this._touchPos.y;
(o = n && n.target ? this._owner.hitTest(this._touchPos, void 0, !0) || t.GObject.cast(n.target) : this._owner.hitTest(this._touchPos)) || (o = this._owner);
var s = this.getInfo(e);
s.target = o;
s.pos.set(this._touchPos);
s.button = cc.Event.EventMouse.BUTTON_LEFT;
s.touch = n;
return s;
};
n.prototype.getInfo = function(t, e) {
void 0 === e && (e = !0);
for (var n = null, o = this._touches.length, r = 0; r < o; r++) {
var s = this._touches[r];
if (s.touchId == t) return s;
-1 == s.touchId && (n = s);
}
if (!n) {
if (!e) return null;
n = new i();
this._touches.push(n);
}
n.touchId = t;
return n;
};
n.prototype.setBegin = function(t) {
t.began = !0;
t.clickCancelled = !1;
t.downPos.set(t.pos);
t.downTargets.length = 0;
for (var e = t.target; e; ) {
t.downTargets.push(e);
e = e.findParent();
}
};
n.prototype.setEnd = function(e) {
e.began = !1;
var i = t.ToolSet.getTime();
i - e.lastClickTime < .45 ? 2 == e.clickCount ? e.clickCount = 1 : e.clickCount++ : e.clickCount = 1;
e.lastClickTime = i;
};
n.prototype.clickTest = function(t) {
if (0 == t.downTargets.length || t.clickCancelled || Math.abs(t.pos.x - t.downPos.x) > 50 || Math.abs(t.pos.y - t.downPos.y) > 50) return null;
var e = t.downTargets[0];
if (e && e.node && e.node.activeInHierarchy) return e;
e = t.target;
for (;e && (-1 == t.downTargets.indexOf(e) || !e.node || !e.node.activeInHierarchy); ) e = e.findParent();
return e;
};
n.prototype.handleRollOver = function(e, i) {
if (e.lastRollOver != i) {
for (var n = e.lastRollOver; n && n.node; ) {
this._rollOutChain.push(n);
n = n.findParent();
}
n = i;
for (;n && n.node; ) {
if (-1 != (r = this._rollOutChain.indexOf(n))) {
this._rollOutChain.length = r;
break;
}
this._rollOverChain.push(n);
n = n.findParent();
}
e.lastRollOver = i;
for (var o = this._rollOutChain.length, r = 0; r < o; r++) if ((n = this._rollOutChain[r]).node && n.node.activeInHierarchy) {
var s = this.getEvent(e, n, t.Event.ROLL_OUT, !1);
n.node.dispatchEvent(s);
t.Event._return(s);
}
o = this._rollOverChain.length;
for (r = 0; r < o; r++) if ((n = this._rollOverChain[r]).node && n.node.activeInHierarchy) {
s = this.getEvent(e, n, t.Event.ROLL_OVER, !1);
n.node.dispatchEvent(s);
t.Event._return(s);
}
this._rollOutChain.length = 0;
this._rollOverChain.length = 0;
}
};
n.prototype.getEvent = function(e, i, n, o) {
var r = t.Event._borrow(n, o);
r.initiator = i;
r.touch = e.touch;
r.pos.set(e.pos);
r.touchId = e.touch ? e.touch.getID() : 0;
r.clickCount = e.clickCount;
r.button = e.button;
r.mouseWheelDelta = e.mouseWheelDelta;
r._processor = this;
return r;
};
return n;
}(cc.Component);
t.InputProcessor = e;
var i = function() {
this.pos = new cc.Vec2();
this.touchId = 0;
this.clickCount = 0;
this.mouseWheelDelta = 0;
this.button = -1;
this.downPos = new cc.Vec2();
this.began = !1;
this.clickCancelled = !1;
this.lastClickTime = 0;
this.downTargets = new Array();
this.touchMonitors = new Array();
};
})(fgui || (fgui = {}));

(function(t) {
var e, i = function() {
function i(t) {
this._owner = t;
}
i.create = function(i, n) {
e || (e = [ t.GearDisplay, t.GearXY, t.GearSize, t.GearLook, t.GearColor, t.GearAnimation, t.GearText, t.GearIcon, t.GearDisplay2, t.GearFontSize ]);
return new e[n](i);
};
i.prototype.dispose = function() {
if (this._tweenConfig && this._tweenConfig._tweener) {
this._tweenConfig._tweener.kill();
this._tweenConfig._tweener = null;
}
};
Object.defineProperty(i.prototype, "controller", {
get: function() {
return this._controller;
},
set: function(t) {
if (t != this._controller) {
this._controller = t;
this._controller && this.init();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "tweenConfig", {
get: function() {
this._tweenConfig || (this._tweenConfig = new n());
return this._tweenConfig;
},
enumerable: !1,
configurable: !0
});
i.prototype.setup = function(e) {
this._controller = this._owner.parent.getControllerAt(e.readShort());
this.init();
var i, o, r = e.readShort();
if (this instanceof t.GearDisplay) this.pages = e.readSArray(r); else if (this instanceof t.GearDisplay2) this.pages = e.readSArray(r); else {
for (i = 0; i < r; i++) null != (o = e.readS()) && this.addStatus(o, e);
e.readBool() && this.addStatus(null, e);
}
if (e.readBool()) {
this._tweenConfig = new n();
this._tweenConfig.easeType = e.readByte();
this._tweenConfig.duration = e.readFloat();
this._tweenConfig.delay = e.readFloat();
}
if (e.version >= 2) if (this instanceof t.GearXY) {
if (e.readBool()) {
this.positionsInPercent = !0;
for (i = 0; i < r; i++) null != (o = e.readS()) && this.addExtStatus(o, e);
e.readBool() && this.addExtStatus(null, e);
}
} else this instanceof t.GearDisplay2 && (this.condition = e.readByte());
};
i.prototype.updateFromRelations = function() {};
i.prototype.addStatus = function() {};
i.prototype.init = function() {};
i.prototype.apply = function() {};
i.prototype.updateState = function() {};
return i;
}();
t.GearBase = i;
var n = function() {
this.tween = !0;
this.easeType = t.EaseType.QuadOut;
this.duration = .3;
this.delay = 0;
};
t.GearTweenConfig = n;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
return e.call(this, t) || this;
}
i.prototype.init = function() {
this._default = {
playing: this._owner.getProp(t.ObjectPropID.Playing),
frame: this._owner.getProp(t.ObjectPropID.Frame)
};
this._storage = {};
};
i.prototype.addStatus = function(t, e) {
var i;
null == t ? i = this._default : this._storage[t] = i = {};
i.playing = e.readBool();
i.frame = e.readInt();
};
i.prototype.apply = function() {
this._owner._gearLocked = !0;
var e = this._storage[this._controller.selectedPageId];
e || (e = this._default);
this._owner.setProp(t.ObjectPropID.Playing, e.playing);
this._owner.setProp(t.ObjectPropID.Frame, e.frame);
this._owner._gearLocked = !1;
};
i.prototype.updateState = function() {
var e = this._storage[this._controller.selectedPageId];
e || (this._storage[this._controller.selectedPageId] = e = {});
e.playing = this._owner.getProp(t.ObjectPropID.Playing);
e.frame = this._owner.getProp(t.ObjectPropID.Frame);
};
return i;
}(t.GearBase);
t.GearAnimation = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
return e.call(this, t) || this;
}
i.prototype.init = function() {
this._default = {
color: this._owner.getProp(t.ObjectPropID.Color),
strokeColor: this._owner.getProp(t.ObjectPropID.OutlineColor)
};
this._storage = {};
};
i.prototype.addStatus = function(t, e) {
var i;
null == t ? i = this._default : this._storage[t] = i = {};
i.color = e.readColor();
i.strokeColor = e.readColor();
};
i.prototype.apply = function() {
this._owner._gearLocked = !0;
var e = this._storage[this._controller.selectedPageId];
e || (e = this._default);
this._owner.setProp(t.ObjectPropID.Color, e.color);
this._owner.setProp(t.ObjectPropID.OutlineColor, e.strokeColor);
this._owner._gearLocked = !1;
};
i.prototype.updateState = function() {
var e = this._storage[this._controller.selectedPageId];
e || (this._storage[this._controller.selectedPageId] = e = {});
e.color = this._owner.getProp(t.ObjectPropID.Color);
e.strokeColor = this._owner.getProp(t.ObjectPropID.OutlineColor);
};
return i;
}(t.GearBase);
t.GearColor = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(t) {
__extends(e, t);
function e(e) {
var i = t.call(this, e) || this;
i._displayLockToken = 1;
i._visible = 0;
return i;
}
e.prototype.init = function() {
this.pages = null;
};
e.prototype.apply = function() {
this._displayLockToken++;
0 == this._displayLockToken && (this._displayLockToken = 1);
null == this.pages || 0 == this.pages.length || -1 != this.pages.indexOf(this._controller.selectedPageId) ? this._visible = 1 : this._visible = 0;
};
e.prototype.addLock = function() {
this._visible++;
return this._displayLockToken;
};
e.prototype.releaseLock = function(t) {
t == this._displayLockToken && this._visible--;
};
Object.defineProperty(e.prototype, "connected", {
get: function() {
return null == this._controller || this._visible > 0;
},
enumerable: !1,
configurable: !0
});
return e;
}(t.GearBase);
t.GearDisplay = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(t) {
__extends(e, t);
function e(e) {
var i = t.call(this, e) || this;
i._visible = 0;
return i;
}
e.prototype.init = function() {
this.pages = null;
};
e.prototype.apply = function() {
null == this.pages || 0 == this.pages.length || -1 != this.pages.indexOf(this._controller.selectedPageId) ? this._visible = 1 : this._visible = 0;
};
e.prototype.evaluate = function(t) {
var e = null == this._controller || this._visible > 0;
return 0 == this.condition ? e && t : e || t;
};
return e;
}(t.GearBase);
t.GearDisplay2 = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
var i = e.call(this, t) || this;
i._default = 0;
return i;
}
i.prototype.init = function() {
this._default = this._owner.getProp(t.ObjectPropID.FontSize);
this._storage = {};
};
i.prototype.addStatus = function(t, e) {
null == t ? this._default = e.readInt() : this._storage[t] = e.readInt();
};
i.prototype.apply = function() {
this._owner._gearLocked = !0;
var e = this._storage[this._controller.selectedPageId];
null != e ? this._owner.setProp(t.ObjectPropID.FontSize, e) : this._owner.setProp(t.ObjectPropID.FontSize, this._default);
this._owner._gearLocked = !1;
};
i.prototype.updateState = function() {
this._storage[this._controller.selectedPageId] = this._owner.getProp(t.ObjectPropID.FontSize);
};
return i;
}(t.GearBase);
t.GearFontSize = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(t) {
__extends(e, t);
function e(e) {
return t.call(this, e) || this;
}
e.prototype.init = function() {
this._default = this._owner.icon;
this._storage = {};
};
e.prototype.addStatus = function(t, e) {
null == t ? this._default = e.readS() : this._storage[t] = e.readS();
};
e.prototype.apply = function() {
this._owner._gearLocked = !0;
var t = this._storage[this._controller.selectedPageId];
this._owner.icon = void 0 !== t ? t : this._default;
this._owner._gearLocked = !1;
};
e.prototype.updateState = function() {
this._storage[this._controller.selectedPageId] = this._owner.icon;
};
return e;
}(t.GearBase);
t.GearIcon = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
return e.call(this, t) || this;
}
i.prototype.init = function() {
this._default = {
alpha: this._owner.alpha,
rotation: this._owner.rotation,
grayed: this._owner.grayed,
touchable: this._owner.touchable
};
this._storage = {};
};
i.prototype.addStatus = function(t, e) {
var i;
null == t ? i = this._default : this._storage[t] = i = {};
i.alpha = e.readFloat();
i.rotation = e.readFloat();
i.grayed = e.readBool();
i.touchable = e.readBool();
};
i.prototype.apply = function() {
var e = this._storage[this._controller.selectedPageId];
e || (e = this._default);
if (this._tweenConfig && this._tweenConfig.tween && !t.UIPackage._constructing && !t.GearBase.disableAllTweenEffect) {
this._owner._gearLocked = !0;
this._owner.grayed = e.grayed;
this._owner.touchable = e.touchable;
this._owner._gearLocked = !1;
if (this._tweenConfig._tweener) {
if (this._tweenConfig._tweener.endValue.x == e.alpha && this._tweenConfig._tweener.endValue.y == e.rotation) return;
this._tweenConfig._tweener.kill(!0);
this._tweenConfig._tweener = null;
}
var i = e.alpha != this._owner.alpha, n = e.rotation != this._owner.rotation;
if (i || n) {
this._owner.checkGearController(0, this._controller) && (this._tweenConfig._displayLockToken = this._owner.addDisplayLock());
this._tweenConfig._tweener = t.GTween.to2(this._owner.alpha, this._owner.rotation, e.alpha, e.rotation, this._tweenConfig.duration).setDelay(this._tweenConfig.delay).setEase(this._tweenConfig.easeType).setUserData((i ? 1 : 0) + (n ? 2 : 0)).setTarget(this).onUpdate(this.__tweenUpdate, this).onComplete(this.__tweenComplete, this);
}
} else {
this._owner._gearLocked = !0;
this._owner.grayed = e.grayed;
this._owner.touchable = e.touchable;
this._owner.alpha = e.alpha;
this._owner.rotation = e.rotation;
this._owner._gearLocked = !1;
}
};
i.prototype.__tweenUpdate = function(t) {
var e = t.userData;
this._owner._gearLocked = !0;
0 != (1 & e) && (this._owner.alpha = t.value.x);
0 != (2 & e) && (this._owner.rotation = t.value.y);
this._owner._gearLocked = !1;
};
i.prototype.__tweenComplete = function() {
if (0 != this._tweenConfig._displayLockToken) {
this._owner.releaseDisplayLock(this._tweenConfig._displayLockToken);
this._tweenConfig._displayLockToken = 0;
}
this._tweenConfig._tweener = null;
};
i.prototype.updateState = function() {
var t = this._storage[this._controller.selectedPageId];
t || (this._storage[this._controller.selectedPageId] = t = {});
t.alpha = this._owner.alpha;
t.rotation = this._owner.rotation;
t.grayed = this._owner.grayed;
t.touchable = this._owner.touchable;
};
return i;
}(t.GearBase);
t.GearLook = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
return e.call(this, t) || this;
}
i.prototype.init = function() {
this._default = {
width: this._owner.width,
height: this._owner.height,
scaleX: this._owner.scaleX,
scaleY: this._owner.scaleY
};
this._storage = {};
};
i.prototype.addStatus = function(t, e) {
var i;
null == t ? i = this._default : this._storage[t] = i = {};
i.width = e.readInt();
i.height = e.readInt();
i.scaleX = e.readFloat();
i.scaleY = e.readFloat();
};
i.prototype.apply = function() {
var e = this._storage[this._controller.selectedPageId];
e || (e = this._default);
if (this._tweenConfig && this._tweenConfig.tween && !t.UIPackage._constructing && !t.GearBase.disableAllTweenEffect) {
if (this._tweenConfig._tweener) {
if (this._tweenConfig._tweener.endValue.x == e.width && this._tweenConfig._tweener.endValue.y == e.height && this._tweenConfig._tweener.endValue.z == e.scaleX && this._tweenConfig._tweener.endValue.w == e.scaleY) return;
this._tweenConfig._tweener.kill(!0);
this._tweenConfig._tweener = null;
}
var i = e.width != this._owner.width || e.height != this._owner.height, n = e.scaleX != this._owner.scaleX || e.scaleY != this._owner.scaleY;
if (i || n) {
this._owner.checkGearController(0, this._controller) && (this._tweenConfig._displayLockToken = this._owner.addDisplayLock());
this._tweenConfig._tweener = t.GTween.to4(this._owner.width, this._owner.height, this._owner.scaleX, this._owner.scaleY, e.width, e.height, e.scaleX, e.scaleY, this._tweenConfig.duration).setDelay(this._tweenConfig.delay).setEase(this._tweenConfig.easeType).setUserData((i ? 1 : 0) + (n ? 2 : 0)).setTarget(this).onUpdate(this.__tweenUpdate, this).onComplete(this.__tweenComplete, this);
}
} else {
this._owner._gearLocked = !0;
this._owner.setSize(e.width, e.height, this._owner.gearXY.controller == this._controller);
this._owner.setScale(e.scaleX, e.scaleY);
this._owner._gearLocked = !1;
}
};
i.prototype.__tweenUpdate = function(t) {
var e = t.userData;
this._owner._gearLocked = !0;
0 != (1 & e) && this._owner.setSize(t.value.x, t.value.y, this._owner.checkGearController(1, this._controller));
0 != (2 & e) && this._owner.setScale(t.value.z, t.value.w);
this._owner._gearLocked = !1;
};
i.prototype.__tweenComplete = function() {
if (0 != this._tweenConfig._displayLockToken) {
this._owner.releaseDisplayLock(this._tweenConfig._displayLockToken);
this._tweenConfig._displayLockToken = 0;
}
this._tweenConfig._tweener = null;
};
i.prototype.updateState = function() {
var t = this._storage[this._controller.selectedPageId];
t || (this._storage[this._controller.selectedPageId] = t = {});
t.width = this._owner.width;
t.height = this._owner.height;
t.scaleX = this._owner.scaleX;
t.scaleY = this._owner.scaleY;
};
i.prototype.updateFromRelations = function(t, e) {
if (null != this._controller && null != this._storage) {
for (var i in this._storage) {
var n = this._storage[i];
n.width += t;
n.height += e;
}
this._default.width += t;
this._default.height += e;
this.updateState();
}
};
return i;
}(t.GearBase);
t.GearSize = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(t) {
__extends(e, t);
function e(e) {
return t.call(this, e) || this;
}
e.prototype.init = function() {
this._default = this._owner.text;
this._storage = {};
};
e.prototype.addStatus = function(t, e) {
null == t ? this._default = e.readS() : this._storage[t] = e.readS();
};
e.prototype.apply = function() {
this._owner._gearLocked = !0;
var t = this._storage[this._controller.selectedPageId];
this._owner.text = void 0 !== t ? t : this._default;
this._owner._gearLocked = !1;
};
e.prototype.updateState = function() {
this._storage[this._controller.selectedPageId] = this._owner.text;
};
return e;
}(t.GearBase);
t.GearText = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
return e.call(this, t) || this;
}
i.prototype.init = function() {
this._default = {
x: this._owner.x,
y: this._owner.y,
px: this._owner.x / this._owner.parent.width,
py: this._owner.y / this._owner.parent.height
};
this._storage = {};
};
i.prototype.addStatus = function(t, e) {
var i;
null == t ? i = this._default : this._storage[t] = i = {};
i.x = e.readInt();
i.y = e.readInt();
};
i.prototype.addExtStatus = function(t, e) {
var i;
(i = null == t ? this._default : this._storage[t]).px = e.readFloat();
i.py = e.readFloat();
};
i.prototype.apply = function() {
var e, i, n = this._storage[this._controller.selectedPageId];
n || (n = this._default);
if (this.positionsInPercent && this._owner.parent) {
e = n.px * this._owner.parent.width;
i = n.py * this._owner.parent.height;
} else {
e = n.x;
i = n.y;
}
if (this._tweenConfig && this._tweenConfig.tween && !t.UIPackage._constructing && !t.GearBase.disableAllTweenEffect) {
if (this._tweenConfig._tweener) {
if (this._tweenConfig._tweener.endValue.x == e && this._tweenConfig._tweener.endValue.y == i) return;
this._tweenConfig._tweener.kill(!0);
this._tweenConfig._tweener = null;
}
var o = this._owner.x, r = this._owner.y;
if (o != e || r != i) {
this._owner.checkGearController(0, this._controller) && (this._tweenConfig._displayLockToken = this._owner.addDisplayLock());
this._tweenConfig._tweener = t.GTween.to2(o, r, e, i, this._tweenConfig.duration).setDelay(this._tweenConfig.delay).setEase(this._tweenConfig.easeType).setTarget(this).onUpdate(this.__tweenUpdate, this).onComplete(this.__tweenComplete, this);
}
} else {
this._owner._gearLocked = !0;
this._owner.setPosition(e, i);
this._owner._gearLocked = !1;
}
};
i.prototype.__tweenUpdate = function(t) {
this._owner._gearLocked = !0;
this._owner.setPosition(t.value.x, t.value.y);
this._owner._gearLocked = !1;
};
i.prototype.__tweenComplete = function() {
if (0 != this._tweenConfig._displayLockToken) {
this._owner.releaseDisplayLock(this._tweenConfig._displayLockToken);
this._tweenConfig._displayLockToken = 0;
}
this._tweenConfig._tweener = null;
};
i.prototype.updateState = function() {
var t = this._storage[this._controller.selectedPageId];
t || (this._storage[this._controller.selectedPageId] = t = {});
t.x = this._owner.x;
t.y = this._owner.y;
t.px = this._owner.x / this._owner.parent.width;
t.py = this._owner.y / this._owner.parent.height;
};
i.prototype.updateFromRelations = function(t, e) {
if (null != this._controller && null != this._storage && !this.positionsInPercent) {
for (var i in this._storage) {
var n = this._storage[i];
n.x += t;
n.y += e;
}
this._default.x += t;
this._default.y += e;
this.updateState();
}
};
return i;
}(t.GearBase);
t.GearXY = e;
})(fgui || (fgui = {}));

(function(t) {
var e = .5 * Math.PI, i = 2 * Math.PI;
t.evaluateEase = function(s, a, l, h, c) {
switch (s) {
case t.EaseType.Linear:
return a / l;

case t.EaseType.SineIn:
return 1 - Math.cos(a / l * e);

case t.EaseType.SineOut:
return Math.sin(a / l * e);

case t.EaseType.SineInOut:
return -.5 * (Math.cos(Math.PI * a / l) - 1);

case t.EaseType.QuadIn:
return (a /= l) * a;

case t.EaseType.QuadOut:
return -(a /= l) * (a - 2);

case t.EaseType.QuadInOut:
return (a /= .5 * l) < 1 ? .5 * a * a : -.5 * (--a * (a - 2) - 1);

case t.EaseType.CubicIn:
return (a /= l) * a * a;

case t.EaseType.CubicOut:
return (a = a / l - 1) * a * a + 1;

case t.EaseType.CubicInOut:
return (a /= .5 * l) < 1 ? .5 * a * a * a : .5 * ((a -= 2) * a * a + 2);

case t.EaseType.QuartIn:
return (a /= l) * a * a * a;

case t.EaseType.QuartOut:
return -((a = a / l - 1) * a * a * a - 1);

case t.EaseType.QuartInOut:
return (a /= .5 * l) < 1 ? .5 * a * a * a * a : -.5 * ((a -= 2) * a * a * a - 2);

case t.EaseType.QuintIn:
return (a /= l) * a * a * a * a;

case t.EaseType.QuintOut:
return (a = a / l - 1) * a * a * a * a + 1;

case t.EaseType.QuintInOut:
return (a /= .5 * l) < 1 ? .5 * a * a * a * a * a : .5 * ((a -= 2) * a * a * a * a + 2);

case t.EaseType.ExpoIn:
return 0 == a ? 0 : Math.pow(2, 10 * (a / l - 1));

case t.EaseType.ExpoOut:
return a == l ? 1 : 1 - Math.pow(2, -10 * a / l);

case t.EaseType.ExpoInOut:
return 0 == a ? 0 : a == l ? 1 : (a /= .5 * l) < 1 ? .5 * Math.pow(2, 10 * (a - 1)) : .5 * (2 - Math.pow(2, -10 * --a));

case t.EaseType.CircIn:
return -(Math.sqrt(1 - (a /= l) * a) - 1);

case t.EaseType.CircOut:
return Math.sqrt(1 - (a = a / l - 1) * a);

case t.EaseType.CircInOut:
return (a /= .5 * l) < 1 ? -.5 * (Math.sqrt(1 - a * a) - 1) : .5 * (Math.sqrt(1 - (a -= 2) * a) + 1);

case t.EaseType.ElasticIn:
var u;
if (0 == a) return 0;
if (1 == (a /= l)) return 1;
0 == c && (c = .3 * l);
if (h < 1) {
h = 1;
u = c / 4;
} else u = c / i * Math.asin(1 / h);
return -h * Math.pow(2, 10 * (a -= 1)) * Math.sin((a * l - u) * i / c);

case t.EaseType.ElasticOut:
var p;
if (0 == a) return 0;
if (1 == (a /= l)) return 1;
0 == c && (c = .3 * l);
if (h < 1) {
h = 1;
p = c / 4;
} else p = c / i * Math.asin(1 / h);
return h * Math.pow(2, -10 * a) * Math.sin((a * l - p) * i / c) + 1;

case t.EaseType.ElasticInOut:
var d;
if (0 == a) return 0;
if (2 == (a /= .5 * l)) return 1;
0 == c && (c = .3 * 1.5 * l);
if (h < 1) {
h = 1;
d = c / 4;
} else d = c / i * Math.asin(1 / h);
return a < 1 ? h * Math.pow(2, 10 * (a -= 1)) * Math.sin((a * l - d) * i / c) * -.5 : h * Math.pow(2, -10 * (a -= 1)) * Math.sin((a * l - d) * i / c) * .5 + 1;

case t.EaseType.BackIn:
return (a /= l) * a * ((h + 1) * a - h);

case t.EaseType.BackOut:
return (a = a / l - 1) * a * ((h + 1) * a + h) + 1;

case t.EaseType.BackInOut:
return (a /= .5 * l) < 1 ? a * a * ((1 + (h *= 1.525)) * a - h) * .5 : .5 * ((a -= 2) * a * ((1 + (h *= 1.525)) * a + h) + 2);

case t.EaseType.BounceIn:
return n(a, l);

case t.EaseType.BounceOut:
return o(a, l);

case t.EaseType.BounceInOut:
return r(a, l);

default:
return -(a /= l) * (a - 2);
}
};
function n(t, e) {
return 1 - o(e - t, e);
}
function o(t, e) {
return (t /= e) < 1 / 2.75 ? 7.5625 * t * t : t < 2 / 2.75 ? 7.5625 * (t -= 1.5 / 2.75) * t + .75 : t < 2.5 / 2.75 ? 7.5625 * (t -= 2.25 / 2.75) * t + .9375 : 7.5625 * (t -= 2.625 / 2.75) * t + .984375;
}
function r(t, e) {
return t < .5 * e ? .5 * n(2 * t, e) : .5 * o(2 * t - e, e) + .5;
}
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function t() {}
t.Linear = 0;
t.SineIn = 1;
t.SineOut = 2;
t.SineInOut = 3;
t.QuadIn = 4;
t.QuadOut = 5;
t.QuadInOut = 6;
t.CubicIn = 7;
t.CubicOut = 8;
t.CubicInOut = 9;
t.QuartIn = 10;
t.QuartOut = 11;
t.QuartInOut = 12;
t.QuintIn = 13;
t.QuintOut = 14;
t.QuintInOut = 15;
t.ExpoIn = 16;
t.ExpoOut = 17;
t.ExpoInOut = 18;
t.CircIn = 19;
t.CircOut = 20;
t.CircInOut = 21;
t.ElasticIn = 22;
t.ElasticOut = 23;
t.ElasticInOut = 24;
t.BackIn = 25;
t.BackOut = 26;
t.BackInOut = 27;
t.BounceIn = 28;
t.BounceOut = 29;
t.BounceInOut = 30;
t.Custom = 31;
return t;
}();
t.EaseType = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e() {
this._segments = new Array();
this._points = new Array();
}
Object.defineProperty(e.prototype, "length", {
get: function() {
return this._fullLength;
},
enumerable: !1,
configurable: !0
});
e.prototype.create = function(e, n, o, r) {
var s;
if (Array.isArray(e)) s = e; else {
(s = new Array()).push(e);
s.push(n);
o && s.push(o);
r && s.push(r);
}
this._segments.length = 0;
this._points.length = 0;
this._fullLength = 0;
var a = s.length;
if (0 != a) {
var l = i;
l.length = 0;
var h = s[0];
h.curveType == t.CurveType.CRSpline && l.push(new cc.Vec2(h.x, h.y));
for (var c = 1; c < a; c++) {
var u = s[c];
if (h.curveType != t.CurveType.CRSpline) {
var p = {};
p.type = h.curveType;
p.ptStart = this._points.length;
if (h.curveType == t.CurveType.Straight) {
p.ptCount = 2;
this._points.push(new cc.Vec2(h.x, h.y));
this._points.push(new cc.Vec2(u.x, u.y));
} else if (h.curveType == t.CurveType.Bezier) {
p.ptCount = 3;
this._points.push(new cc.Vec2(h.x, h.y));
this._points.push(new cc.Vec2(u.x, u.y));
this._points.push(new cc.Vec2(h.control1_x, h.control1_y));
} else if (h.curveType == t.CurveType.CubicBezier) {
p.ptCount = 4;
this._points.push(new cc.Vec2(h.x, h.y));
this._points.push(new cc.Vec2(u.x, u.y));
this._points.push(new cc.Vec2(h.control1_x, h.control1_y));
this._points.push(new cc.Vec2(h.control2_x, h.control2_y));
}
p.length = t.ToolSet.distance(h.x, h.y, u.x, u.y);
this._fullLength += p.length;
this._segments.push(p);
}
if (u.curveType != t.CurveType.CRSpline) {
if (l.length > 0) {
l.push(new cc.Vec2(u.x, u.y));
this.createSplineSegment();
}
} else l.push(new cc.Vec2(u.x, u.y));
h = u;
}
l.length > 1 && this.createSplineSegment();
}
};
e.prototype.createSplineSegment = function() {
var e = i, n = e.length;
e.splice(0, 0, e[0]);
e.push(e[n]);
e.push(e[n]);
n += 3;
var o = {};
o.type = t.CurveType.CRSpline;
o.ptStart = this._points.length;
o.ptCount = n;
this._points = this._points.concat(e);
o.length = 0;
for (var r = 1; r < n; r++) o.length += t.ToolSet.distance(e[r - 1].x, e[r - 1].y, e[r].x, e[r].y);
this._fullLength += o.length;
this._segments.push(o);
e.length = 0;
};
e.prototype.clear = function() {
this._segments.length = 0;
this._points.length = 0;
};
e.prototype.getPointAt = function(e, i) {
i ? i.x = i.y = 0 : i = new cc.Vec2();
e = t.ToolSet.clamp01(e);
var n, o = this._segments.length;
if (0 == o) return i;
if (1 == e) {
if ((n = this._segments[o - 1]).type == t.CurveType.Straight) {
i.x = t.ToolSet.lerp(this._points[n.ptStart].x, this._points[n.ptStart + 1].x, e);
i.y = t.ToolSet.lerp(this._points[n.ptStart].y, this._points[n.ptStart + 1].y, e);
return i;
}
return n.type == t.CurveType.Bezier || n.type == t.CurveType.CubicBezier ? this.onBezierCurve(n.ptStart, n.ptCount, e, i) : this.onCRSplineCurve(n.ptStart, n.ptCount, e, i);
}
for (var r = e * this._fullLength, s = 0; s < o; s++) if ((r -= (n = this._segments[s]).length) < 0) {
e = 1 + r / n.length;
if (n.type == t.CurveType.Straight) {
i.x = t.ToolSet.lerp(this._points[n.ptStart].x, this._points[n.ptStart + 1].x, e);
i.y = t.ToolSet.lerp(this._points[n.ptStart].y, this._points[n.ptStart + 1].y, e);
} else i = n.type == t.CurveType.Bezier || n.type == t.CurveType.CubicBezier ? this.onBezierCurve(n.ptStart, n.ptCount, e, i) : this.onCRSplineCurve(n.ptStart, n.ptCount, e, i);
break;
}
return i;
};
Object.defineProperty(e.prototype, "segmentCount", {
get: function() {
return this._segments.length;
},
enumerable: !1,
configurable: !0
});
e.prototype.getAnchorsInSegment = function(t, e) {
null == e && (e = new Array());
for (var i = this._segments[t], n = 0; n < i.ptCount; n++) e.push(new cc.Vec2(this._points[i.ptStart + n].x, this._points[i.ptStart + n].y));
return e;
};
e.prototype.getPointsInSegment = function(e, i, n, o, r, s) {
null == o && (o = new Array());
s && !isNaN(s) || (s = .1);
r && r.push(i);
var a = this._segments[e];
if (a.type == t.CurveType.Straight) {
o.push(new cc.Vec2(t.ToolSet.lerp(this._points[a.ptStart].x, this._points[a.ptStart + 1].x, i), t.ToolSet.lerp(this._points[a.ptStart].y, this._points[a.ptStart + 1].y, i)));
o.push(new cc.Vec2(t.ToolSet.lerp(this._points[a.ptStart].x, this._points[a.ptStart + 1].x, n), t.ToolSet.lerp(this._points[a.ptStart].y, this._points[a.ptStart + 1].y, n)));
} else {
var l;
l = a.type == t.CurveType.Bezier || a.type == t.CurveType.CubicBezier ? this.onBezierCurve : this.onCRSplineCurve;
o.push(l.call(this, a.ptStart, a.ptCount, i, new cc.Vec2()));
for (var h = Math.min(a.length * s, 50), c = 0; c <= h; c++) {
var u = c / h;
if (u > i && u < n) {
o.push(l.call(this, a.ptStart, a.ptCount, u, new cc.Vec2()));
null != r && r.push(u);
}
}
o.push(l.call(this, a.ptStart, a.ptCount, n, new cc.Vec2()));
}
null != r && r.push(n);
return o;
};
e.prototype.getAllPoints = function(t, e, i) {
null == t && (t = new Array());
i && !isNaN(i) || (i = .1);
for (var n = this._segments.length, o = 0; o < n; o++) this.getPointsInSegment(o, 0, 1, t, e, i);
return t;
};
e.prototype.onCRSplineCurve = function(e, i, n, o) {
var r = Math.floor(n * (i - 4)) + e, s = this._points[r].x, a = this._points[r].y, l = this._points[r + 1].x, h = this._points[r + 1].y, c = this._points[r + 2].x, u = this._points[r + 2].y, p = this._points[r + 3].x, d = this._points[r + 3].y, f = 1 == n ? 1 : t.ToolSet.repeat(n * (i - 4), 1), _ = ((2 - f) * f - 1) * f * .5, g = .5 * ((3 * f - 5) * f * f + 2), y = ((-3 * f + 4) * f + 1) * f * .5, m = (f - 1) * f * f * .5;
o.x = s * _ + l * g + c * y + p * m;
o.y = a * _ + h * g + u * y + d * m;
return o;
};
e.prototype.onBezierCurve = function(t, e, i, n) {
var o = 1 - i, r = this._points[t].x, s = this._points[t].y, a = this._points[t + 1].x, l = this._points[t + 1].y, h = this._points[t + 2].x, c = this._points[t + 2].y;
if (4 == e) {
var u = this._points[t + 3].x, p = this._points[t + 3].y;
n.x = o * o * o * r + 3 * o * o * i * h + 3 * o * i * i * u + i * i * i * a;
n.y = o * o * o * s + 3 * o * o * i * c + 3 * o * i * i * p + i * i * i * l;
} else {
n.x = o * o * r + 2 * o * i * h + i * i * a;
n.y = o * o * s + 2 * o * i * c + i * i * l;
}
return n;
};
return e;
}();
t.GPath = e;
var i = new Array();
})(fgui || (fgui = {}));

(function(t) {
var e;
(function(t) {
t[t.CRSpline = 0] = "CRSpline";
t[t.Bezier = 1] = "Bezier";
t[t.CubicBezier = 2] = "CubicBezier";
t[t.Straight = 3] = "Straight";
})(e = t.CurveType || (t.CurveType = {}));
var i = function() {
function t() {
this.x = 0;
this.y = 0;
this.control1_x = 0;
this.control1_y = 0;
this.control2_x = 0;
this.control2_y = 0;
this.curveType = 0;
}
t.newPoint = function(e, i, n) {
void 0 === e && (e = 0);
void 0 === i && (i = 0);
void 0 === n && (n = 0);
var o = new t();
o.x = e;
o.y = i;
o.control1_x = 0;
o.control1_y = 0;
o.control2_x = 0;
o.control2_y = 0;
o.curveType = n;
return o;
};
t.newBezierPoint = function(i, n, o, r) {
void 0 === i && (i = 0);
void 0 === n && (n = 0);
void 0 === o && (o = 0);
void 0 === r && (r = 0);
var s = new t();
s.x = i;
s.y = n;
s.control1_x = o;
s.control1_y = r;
s.control2_x = 0;
s.control2_y = 0;
s.curveType = e.Bezier;
return s;
};
t.newCubicBezierPoint = function(i, n, o, r, s, a) {
void 0 === i && (i = 0);
void 0 === n && (n = 0);
void 0 === o && (o = 0);
void 0 === r && (r = 0);
void 0 === s && (s = 0);
void 0 === a && (a = 0);
var l = new t();
l.x = i;
l.y = n;
l.control1_x = o;
l.control1_y = r;
l.control2_x = s;
l.control2_y = a;
l.curveType = e.CubicBezier;
return l;
};
t.prototype.clone = function() {
var e = new t();
e.x = this.x;
e.y = this.y;
e.control1_x = this.control1_x;
e.control1_y = this.control1_y;
e.control2_x = this.control2_x;
e.control2_y = this.control2_y;
e.curveType = this.curveType;
return e;
};
return t;
}();
t.GPathPoint = i;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e() {}
e.to = function(e, i, n) {
return t.TweenManager.createTween()._to(e, i, n);
};
e.to2 = function(e, i, n, o, r) {
return t.TweenManager.createTween()._to2(e, i, n, o, r);
};
e.to3 = function(e, i, n, o, r, s, a) {
return t.TweenManager.createTween()._to3(e, i, n, o, r, s, a);
};
e.to4 = function(e, i, n, o, r, s, a, l, h) {
return t.TweenManager.createTween()._to4(e, i, n, o, r, s, a, l, h);
};
e.toColor = function(e, i, n) {
return t.TweenManager.createTween()._toColor(e, i, n);
};
e.delayedCall = function(e) {
return t.TweenManager.createTween().setDelay(e);
};
e.shake = function(e, i, n, o) {
return t.TweenManager.createTween()._shake(e, i, n, o);
};
e.isTweening = function(e, i) {
return t.TweenManager.isTweening(e, i);
};
e.kill = function(e, i, n) {
t.TweenManager.killTweens(e, i, n);
};
e.getTween = function(e, i) {
return t.TweenManager.getTween(e, i);
};
e.catchCallbackExceptions = !0;
return e;
}();
t.GTween = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function e() {
this._startValue = new t.TweenValue();
this._endValue = new t.TweenValue();
this._value = new t.TweenValue();
this._deltaValue = new t.TweenValue();
this._reset();
}
e.prototype.setDelay = function(t) {
this._delay = t;
return this;
};
Object.defineProperty(e.prototype, "delay", {
get: function() {
return this._delay;
},
enumerable: !1,
configurable: !0
});
e.prototype.setDuration = function(t) {
this._duration = t;
return this;
};
Object.defineProperty(e.prototype, "duration", {
get: function() {
return this._duration;
},
enumerable: !1,
configurable: !0
});
e.prototype.setBreakpoint = function(t) {
this._breakpoint = t;
return this;
};
e.prototype.setEase = function(t) {
this._easeType = t;
return this;
};
e.prototype.setEasePeriod = function(t) {
this._easePeriod = t;
return this;
};
e.prototype.setEaseOvershootOrAmplitude = function(t) {
this._easeOvershootOrAmplitude = t;
return this;
};
e.prototype.setRepeat = function(t, e) {
this._repeat = t;
this._yoyo = e;
return this;
};
Object.defineProperty(e.prototype, "repeat", {
get: function() {
return this._repeat;
},
enumerable: !1,
configurable: !0
});
e.prototype.setTimeScale = function(t) {
this._timeScale = t;
return this;
};
e.prototype.setSnapping = function(t) {
this._snapping = t;
return this;
};
e.prototype.setTarget = function(e, i) {
this._target = e;
this._propType = i;
e instanceof t.GObject ? this._node = e.node : e instanceof cc.Node && (this._node = e);
return this;
};
Object.defineProperty(e.prototype, "target", {
get: function() {
return this._target;
},
enumerable: !1,
configurable: !0
});
e.prototype.setPath = function(t) {
this._path = t;
return this;
};
e.prototype.setUserData = function(t) {
this._userData = t;
return this;
};
Object.defineProperty(e.prototype, "userData", {
get: function() {
return this._userData;
},
enumerable: !1,
configurable: !0
});
e.prototype.onUpdate = function(t, e) {
this._onUpdate = t;
this._onUpdateCaller = e;
return this;
};
e.prototype.onStart = function(t, e) {
this._onStart = t;
this._onStartCaller = e;
return this;
};
e.prototype.onComplete = function(t, e) {
this._onComplete = t;
this._onCompleteCaller = e;
return this;
};
Object.defineProperty(e.prototype, "startValue", {
get: function() {
return this._startValue;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "endValue", {
get: function() {
return this._endValue;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "value", {
get: function() {
return this._value;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "deltaValue", {
get: function() {
return this._deltaValue;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "normalizedTime", {
get: function() {
return this._normalizedTime;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "completed", {
get: function() {
return 0 != this._ended;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(e.prototype, "allCompleted", {
get: function() {
return 1 == this._ended;
},
enumerable: !1,
configurable: !0
});
e.prototype.setPaused = function(t) {
this._paused = t;
return this;
};
e.prototype.seek = function(t) {
if (!this._killed) {
this._elapsedTime = t;
if (this._elapsedTime < this._delay) {
if (!this._started) return;
this._elapsedTime = this._delay;
}
this.update();
}
};
e.prototype.kill = function(t) {
if (!this._killed) {
if (t) {
if (0 == this._ended) {
this._breakpoint >= 0 ? this._elapsedTime = this._delay + this._breakpoint : this._repeat >= 0 ? this._elapsedTime = this._delay + this._duration * (this._repeat + 1) : this._elapsedTime = this._delay + 2 * this._duration;
this.update();
}
this.callCompleteCallback();
}
this._killed = !0;
}
};
e.prototype._to = function(t, e, i) {
this._valueSize = 1;
this._startValue.x = t;
this._endValue.x = e;
this._duration = i;
return this;
};
e.prototype._to2 = function(t, e, i, n, o) {
this._valueSize = 2;
this._startValue.x = t;
this._endValue.x = i;
this._startValue.y = e;
this._endValue.y = n;
this._duration = o;
return this;
};
e.prototype._to3 = function(t, e, i, n, o, r, s) {
this._valueSize = 3;
this._startValue.x = t;
this._endValue.x = n;
this._startValue.y = e;
this._endValue.y = o;
this._startValue.z = i;
this._endValue.z = r;
this._duration = s;
return this;
};
e.prototype._to4 = function(t, e, i, n, o, r, s, a, l) {
this._valueSize = 4;
this._startValue.x = t;
this._endValue.x = o;
this._startValue.y = e;
this._endValue.y = r;
this._startValue.z = i;
this._endValue.z = s;
this._startValue.w = n;
this._endValue.w = a;
this._duration = l;
return this;
};
e.prototype._toColor = function(t, e, i) {
this._valueSize = 5;
this._startValue.color = t;
this._endValue.color = e;
this._duration = i;
return this;
};
e.prototype._shake = function(t, e, i, n) {
this._valueSize = 6;
this._startValue.x = t;
this._startValue.y = e;
this._startValue.w = i;
this._duration = n;
return this;
};
e.prototype._init = function() {
this._delay = 0;
this._duration = 0;
this._breakpoint = -1;
this._easeType = t.EaseType.QuadOut;
this._timeScale = 1;
this._easePeriod = 0;
this._easeOvershootOrAmplitude = 1.70158;
this._snapping = !1;
this._repeat = 0;
this._yoyo = !1;
this._valueSize = 0;
this._started = !1;
this._paused = !1;
this._killed = !1;
this._elapsedTime = 0;
this._normalizedTime = 0;
this._ended = 0;
};
e.prototype._reset = function() {
this._target = null;
this._propType = null;
this._userData = null;
this._node = null;
this._path = null;
this._onStart = this._onUpdate = this._onComplete = null;
this._onStartCaller = this._onUpdateCaller = this._onCompleteCaller = null;
};
e.prototype._update = function(t) {
if (!this._node || cc.isValid(this._node)) {
1 != this._timeScale && (t *= this._timeScale);
if (0 != t) if (0 == this._ended) {
this._elapsedTime += t;
this.update();
if (0 != this._ended && !this._killed) {
this.callCompleteCallback();
this._killed = !0;
}
} else {
this.callCompleteCallback();
this._killed = !0;
}
} else this._killed = !0;
};
e.prototype.update = function() {
this._ended = 0;
if (0 != this._valueSize) {
if (!this._started) {
if (this._elapsedTime < this._delay) return;
this._started = !0;
this.callStartCallback();
if (this._killed) return;
}
var e = !1, n = this._elapsedTime - this._delay;
if (this._breakpoint >= 0 && n >= this._breakpoint) {
n = this._breakpoint;
this._ended = 2;
}
if (0 != this._repeat) {
var o = Math.floor(n / this._duration);
n -= this._duration * o;
this._yoyo && (e = o % 2 == 1);
if (this._repeat > 0 && this._repeat - o < 0) {
this._yoyo && (e = this._repeat % 2 == 1);
n = this._duration;
this._ended = 1;
}
} else if (n >= this._duration) {
n = this._duration;
this._ended = 1;
}
this._normalizedTime = t.evaluateEase(this._easeType, e ? this._duration - n : n, this._duration, this._easeOvershootOrAmplitude, this._easePeriod);
this._value.setZero();
this._deltaValue.setZero();
if (6 == this._valueSize) if (0 == this._ended) {
var r = this._startValue.w * (1 - this._normalizedTime), s = r * (Math.random() > .5 ? 1 : -1), a = r * (Math.random() > .5 ? 1 : -1);
this._deltaValue.x = s;
this._deltaValue.y = a;
this._value.x = this._startValue.x + s;
this._value.y = this._startValue.y + a;
} else {
this._value.x = this._startValue.x;
this._value.y = this._startValue.y;
} else if (this._path) {
var l = i;
this._path.getPointAt(this._normalizedTime, l);
if (this._snapping) {
l.x = Math.round(l.x);
l.y = Math.round(l.y);
}
this._deltaValue.x = l.x - this._value.x;
this._deltaValue.y = l.y - this._value.y;
this._value.x = l.x;
this._value.y = l.y;
} else for (var h = 0; h < this._valueSize; h++) {
var c = this._startValue.getField(h), u = c + (this._endValue.getField(h) - c) * this._normalizedTime;
this._snapping && (u = Math.round(u));
this._deltaValue.setField(h, u - this._value.getField(h));
this._value.setField(h, u);
}
if (null != this._target && null != this._propType) if (this._propType instanceof Function) switch (this._valueSize) {
case 1:
this._propType.call(this._target, this._value.x);
break;

case 2:
this._propType.call(this._target, this._value.x, this._value.y);
break;

case 3:
this._propType.call(this._target, this._value.x, this._value.y, this._value.z);
break;

case 4:
this._propType.call(this._target, this._value.x, this._value.y, this._value.z, this._value.w);
break;

case 5:
this._propType.call(this._target, this._value.color);
break;

case 6:
this._propType.call(this._target, this._value.x, this._value.y);
} else 5 == this._valueSize ? this._target[this._propType] = this._value.color : this._target[this._propType] = this._value.x;
this.callUpdateCallback();
} else this._elapsedTime >= this._delay + this._duration && (this._ended = 1);
};
e.prototype.callStartCallback = function() {
if (null != this._onStart) try {
this._onStart.call(this._onStartCaller, this);
} catch (t) {
console.log("FairyGUI: error in start callback > " + t);
}
};
e.prototype.callUpdateCallback = function() {
if (null != this._onUpdate) try {
this._onUpdate.call(this._onUpdateCaller, this);
} catch (t) {
console.log("FairyGUI: error in update callback > " + t);
}
};
e.prototype.callCompleteCallback = function() {
if (null != this._onComplete) try {
this._onComplete.call(this._onCompleteCaller, this);
} catch (t) {
console.log("FairyGUI: error in complete callback > " + t);
}
};
return e;
}();
t.GTweener = e;
var i = new cc.Vec2();
})(fgui || (fgui = {}));

(function(t) {
var e, i = new Array(30), n = new Array(), o = 0, r = function() {
function r() {}
r.createTween = function() {
if (!e) {
e = new cc.Node("[TweenManager]");
cc.game.addPersistRootNode(e);
cc.director.getScheduler().schedule(r.update, e, 0, !1);
}
var s;
(s = n.length > 0 ? n.pop() : new t.GTweener())._init();
i[o++] = s;
o == i.length && (i.length = i.length + Math.ceil(.5 * i.length));
return s;
};
r.isTweening = function(t, e) {
if (null == t) return !1;
for (var n = null == e || null == e, r = 0; r < o; r++) {
var s = i[r];
if (s && s.target == t && !s._killed && (n || s._propType == e)) return !0;
}
return !1;
};
r.killTweens = function(t, e, n) {
if (null == t) return !1;
for (var r = !1, s = o, a = null == n || null == n, l = 0; l < s; l++) {
var h = i[l];
if (h && h.target == t && !h._killed && (a || h._propType == n)) {
h.kill(e);
r = !0;
}
}
return r;
};
r.getTween = function(t, e) {
if (null == t) return null;
for (var n = o, r = null == e || null == e, s = 0; s < n; s++) {
var a = i[s];
if (a && a.target == t && !a._killed && (r || a._propType == e)) return a;
}
return null;
};
r.update = function(e) {
for (var r = i, s = o, a = -1, l = 0; l < s; l++) {
var h = r[l];
if (null == h) -1 == a && (a = l); else if (h._killed) {
h._reset();
n.push(h);
r[l] = null;
-1 == a && (a = l);
} else {
h._target instanceof t.GObject && null == h._target.node ? h._killed = !0 : h._paused || h._update(e);
if (-1 != a) {
r[a] = h;
r[l] = null;
a++;
}
}
}
if (a >= 0) {
if (o != s) {
var c = s;
s = o - s;
for (l = 0; l < s; l++) r[a++] = r[c++];
}
o = a;
}
return !1;
};
return r;
}();
t.TweenManager = r;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function t() {
this.x = this.y = this.z = this.w = 0;
}
Object.defineProperty(t.prototype, "color", {
get: function() {
return (this.w << 24) + (this.x << 16) + (this.y << 8) + this.z;
},
set: function(t) {
this.x = (16711680 & t) >> 16;
this.y = (65280 & t) >> 8;
this.z = 255 & t;
this.w = (4278190080 & t) >> 24;
},
enumerable: !1,
configurable: !0
});
t.prototype.getField = function(t) {
switch (t) {
case 0:
return this.x;

case 1:
return this.y;

case 2:
return this.z;

case 3:
return this.w;

default:
throw new Error("Index out of bounds: " + t);
}
};
t.prototype.setField = function(t, e) {
switch (t) {
case 0:
this.x = e;
break;

case 1:
this.y = e;
break;

case 2:
this.z = e;
break;

case 3:
this.w = e;
break;

default:
throw new Error("Index out of bounds: " + t);
}
};
t.prototype.setZero = function() {
this.x = this.y = this.z = this.w = 0;
};
return t;
}();
t.TweenValue = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function t(t, e, i) {
void 0 === e && (e = 0);
void 0 === i && (i = -1);
this.version = 0;
-1 == i && (i = t.byteLength - e);
this._bytes = new Uint8Array(t, e, i);
this._view = new DataView(this._bytes.buffer, e, i);
this._pos = 0;
this._length = i;
}
Object.defineProperty(t.prototype, "data", {
get: function() {
return this._bytes;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(t.prototype, "position", {
get: function() {
return this._pos;
},
set: function(t) {
if (t > this._length) throw "Out of bounds";
this._pos = t;
},
enumerable: !1,
configurable: !0
});
t.prototype.skip = function(t) {
this._pos += t;
};
t.prototype.validate = function(t) {
if (this._pos + t > this._length) throw "Out of bounds";
};
t.prototype.readByte = function() {
this.validate(1);
return this._view.getInt8(this._pos++);
};
t.prototype.readUbyte = function() {
return this._bytes[this._pos++];
};
t.prototype.readBool = function() {
return 1 == this.readByte();
};
t.prototype.readShort = function() {
this.validate(2);
var t = this._view.getInt16(this._pos, this.littleEndian);
this._pos += 2;
return t;
};
t.prototype.readUshort = function() {
this.validate(2);
var t = this._view.getUint16(this._pos, this.littleEndian);
this._pos += 2;
return t;
};
t.prototype.readInt = function() {
this.validate(4);
var t = this._view.getInt32(this._pos, this.littleEndian);
this._pos += 4;
return t;
};
t.prototype.readUint = function() {
this.validate(4);
var t = this._view.getUint32(this._pos, this.littleEndian);
this._pos += 4;
return t;
};
t.prototype.readFloat = function() {
this.validate(4);
var t = this._view.getFloat32(this._pos, this.littleEndian);
this._pos += 4;
return t;
};
t.prototype.readString = function(t) {
null == t && (t = this.readUshort());
this.validate(t);
for (var e = "", i = this._pos + t, n = 0, o = String.fromCharCode, r = this._bytes, s = this._pos; s < i; ) (n = r[s++]) < 128 ? 0 != n && (e += o(n)) : e += o(n < 224 ? (63 & n) << 6 | 127 & r[s++] : n < 240 ? (31 & n) << 12 | (127 & r[s++]) << 6 | 127 & r[s++] : (15 & n) << 18 | (127 & r[s++]) << 12 | r[s++] << 6 & 127 | 127 & r[s++]);
this._pos += t;
return e;
};
t.prototype.readS = function() {
var t = this.readUshort();
return 65534 == t ? null : 65533 == t ? "" : this.stringTable[t];
};
t.prototype.readSArray = function(t) {
for (var e = new Array(t), i = 0; i < t; i++) e[i] = this.readS();
return e;
};
t.prototype.writeS = function(t) {
var e = this.readUshort();
65534 != e && 65533 != e && (this.stringTable[e] = t);
};
t.prototype.readColor = function(t) {
var e = this.readUbyte(), i = this.readUbyte(), n = this.readUbyte(), o = this.readUbyte();
return new cc.Color(e, i, n, t ? o : 255);
};
t.prototype.readChar = function() {
var t = this.readUshort();
return String.fromCharCode(t);
};
t.prototype.readBuffer = function() {
var e = this.readUint();
this.validate(e);
var i = new t(this._bytes.buffer, this._bytes.byteOffset + this._pos, e);
i.stringTable = this.stringTable;
i.version = this.version;
this._pos += e;
return i;
};
t.prototype.seek = function(t, e) {
var i = this._pos;
this._pos = t;
if (e < this.readByte()) {
var n;
if (1 == this.readByte()) {
this._pos += 2 * e;
n = this.readUshort();
} else {
this._pos += 4 * e;
n = this.readUint();
}
if (n > 0) {
this._pos = t + n;
return !0;
}
this._pos = i;
return !1;
}
this._pos = i;
return !1;
};
return t;
}();
t.ByteBuffer = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function t(t, e, i, o) {
this.matrix = new Array(n);
this.reset();
void 0 === t && void 0 === e && void 0 === i && void 0 === o || this.adjustColor(t, e, i, o);
}
t.prototype.reset = function() {
for (var t = 0; t < n; t++) this.matrix[t] = i[t];
};
t.prototype.invert = function() {
this.multiplyMatrix([ -1, 0, 0, 0, 255, 0, -1, 0, 0, 255, 0, 0, -1, 0, 255, 0, 0, 0, 1, 0 ]);
};
t.prototype.adjustColor = function(t, e, i, n) {
this.adjustHue(n || 0);
this.adjustContrast(e || 0);
this.adjustBrightness(t || 0);
this.adjustSaturation(i || 0);
};
t.prototype.adjustBrightness = function(t) {
t = 255 * this.cleanValue(t, 1);
this.multiplyMatrix([ 1, 0, 0, 0, t, 0, 1, 0, 0, t, 0, 0, 1, 0, t, 0, 0, 0, 1, 0 ]);
};
t.prototype.adjustContrast = function(t) {
var e = (t = this.cleanValue(t, 1)) + 1, i = 128 * (1 - e);
this.multiplyMatrix([ e, 0, 0, 0, i, 0, e, 0, 0, i, 0, 0, e, 0, i, 0, 0, 0, 1, 0 ]);
};
t.prototype.adjustSaturation = function(t) {
t = this.cleanValue(t, 1);
var e = 1 - (t += 1), i = e * o, n = e * r, a = e * s;
this.multiplyMatrix([ i + t, n, a, 0, 0, i, n + t, a, 0, 0, i, n, a + t, 0, 0, 0, 0, 0, 1, 0 ]);
};
t.prototype.adjustHue = function(t) {
t = this.cleanValue(t, 1);
t *= Math.PI;
var e = Math.cos(t), i = Math.sin(t);
this.multiplyMatrix([ o + e * (1 - o) + i * -o, r + e * -r + i * -r, s + e * -s + i * (1 - s), 0, 0, o + e * -o + .143 * i, r + e * (1 - r) + .14 * i, s + e * -s + -.283 * i, 0, 0, o + e * -o + i * -(1 - o), r + e * -r + i * r, s + e * (1 - s) + i * s, 0, 0, 0, 0, 0, 1, 0 ]);
};
t.prototype.concat = function(t) {
t.length == n && this.multiplyMatrix(t);
};
t.prototype.clone = function() {
var e = new t();
e.copyMatrix(this.matrix);
return e;
};
t.prototype.copyMatrix = function(t) {
for (var e = n, i = 0; i < e; i++) this.matrix[i] = t[i];
};
t.prototype.multiplyMatrix = function(t) {
for (var e = [], i = 0, n = 0; n < 4; ++n) {
for (var o = 0; o < 5; ++o) e[i + o] = t[i] * this.matrix[o] + t[i + 1] * this.matrix[o + 5] + t[i + 2] * this.matrix[o + 10] + t[i + 3] * this.matrix[o + 15] + (4 == o ? t[i + 4] : 0);
i += 5;
}
this.copyMatrix(e);
};
t.prototype.cleanValue = function(t, e) {
return Math.min(e, Math.max(-e, t));
};
return t;
}();
t.ColorMatrix = e;
var i = [ 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0 ], n = i.length, o = .299, r = .587, s = .114;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function t() {
this._readPos = 0;
this._handlers = {};
this._handlers.url = this.onTag_URL;
this._handlers.img = this.onTag_IMG;
this._handlers.b = this.onTag_Simple;
this._handlers.i = this.onTag_Simple;
this._handlers.u = this.onTag_Simple;
this._handlers.color = this.onTag_COLOR;
this._handlers.size = this.onTag_SIZE;
}
t.prototype.onTag_URL = function(t, e, i) {
if (e) {
n = "";
this.linkColor && (n += "</color>");
this.linkUnderline && (n += "</u>");
return n + "</on>";
}
var n = void 0;
n = null != i ? '<on click="onClickLink" param="' + i + '">' : '<on click="onClickLink" param="' + this.getTagText() + '">';
this.linkUnderline && (n += "<u>");
this.linkColor && (n += "<color=" + this.linkColor + ">");
return n;
};
t.prototype.onTag_IMG = function(t, e) {
if (e) return null;
var i = this.getTagText(!0);
return i ? '<img src="' + i + '"/>' : null;
};
t.prototype.onTag_Simple = function(t, e) {
return e ? "</" + t + ">" : "<" + t + ">";
};
t.prototype.onTag_COLOR = function(t, e, i) {
if (e) return "</color>";
this.lastColor = i;
return "<color=" + i + ">";
};
t.prototype.onTag_FONT = function(t, e, i) {
return e ? "</font>" : '<font face="' + i + '">';
};
t.prototype.onTag_SIZE = function(t, e, i) {
if (e) return "</size>";
this.lastSize = i;
return "<size=" + i + ">";
};
t.prototype.getTagText = function(t) {
for (var e, i = this._readPos, n = ""; -1 != (e = this._text.indexOf("[", i)); ) {
if (92 != this._text.charCodeAt(e - 1)) {
n += this._text.substring(i, e);
break;
}
n += this._text.substring(i, e - 1);
n += "[";
i = e + 1;
}
if (-1 == e) return null;
t && (this._readPos = e);
return n;
};
t.prototype.parse = function(t, e) {
this._text = t;
this.lastColor = null;
this.lastSize = null;
for (var i, n, o, r, s, a, l, h = 0, c = ""; -1 != (i = this._text.indexOf("[", h)); ) if (i > 0 && 92 == this._text.charCodeAt(i - 1)) {
c += this._text.substring(h, i - 1);
c += "[";
h = i + 1;
} else {
c += this._text.substring(h, i);
h = i;
if (-1 == (i = this._text.indexOf("]", h))) break;
o = "/" == this._text.charAt(h + 1);
r = this._text.substring(o ? h + 2 : h + 1, i);
this._readPos = i + 1;
s = null;
a = null;
if (-1 != (n = r.indexOf("="))) {
s = r.substring(n + 1);
r = r.substring(0, n);
}
r = r.toLowerCase();
null != (l = this._handlers[r]) ? null == (a = l.call(this, r, o, s)) || e || (c += a) : c += this._text.substring(h, this._readPos);
h = this._readPos;
}
h < this._text.length && (c += this._text.substr(h));
this._text = null;
return c;
};
t.inst = new t();
return t;
}();
t.UBBParser = e;
})(fgui || (fgui = {}));

(function(t) {
var e = function() {
function t() {}
t.startsWith = function(t, e, i) {
if (t) {
if (t.length < e.length) return !1;
t = t.substring(0, e.length);
return i ? t.toLowerCase() == e.toLowerCase() : t == e;
}
return !1;
};
t.encodeHTML = function(t) {
return t ? t.replace(/&/g, "&amp;").replace(/</g, "&lt;").replace(/>/g, "&gt;").replace(/'/g, "&apos;").replace(/"/g, "&quot;") : "";
};
t.clamp = function(t, e, i) {
t < e ? t = e : t > i && (t = i);
return t;
};
t.clamp01 = function(t) {
t > 1 ? t = 1 : t < 0 && (t = 0);
return t;
};
t.lerp = function(t, e, i) {
return t + i * (e - t);
};
t.getTime = function() {
return new Date().getMilliseconds() / 1e3;
};
t.toGrayed = function(t) {
var e = .299 * t.getR() + .587 * t.getG() + .114 * t.getB();
return new cc.Color(e, e, e, t.getA());
};
t.repeat = function(t, e) {
return t - Math.floor(t / e) * e;
};
t.distance = function(t, e, i, n) {
return Math.sqrt(Math.pow(t - i, 2) + Math.pow(e - n, 2));
};
return t;
}();
t.ToolSet = e;
})(fgui || (fgui = {}));

var CryptoJS = function(t) {
var e = Object.create || function() {
function t() {}
return function(e) {
var i;
t.prototype = e;
i = new t();
t.prototype = null;
return i;
};
}(), i = {}, n = i.lib = {}, o = n.Base = {
extend: function(t) {
var i = e(this);
t && i.mixIn(t);
i.hasOwnProperty("init") && this.init !== i.init || (i.init = function() {
i.$super.init.apply(this, arguments);
});
i.init.prototype = i;
i.$super = this;
return i;
},
create: function() {
var t = this.extend();
t.init.apply(t, arguments);
return t;
},
init: function() {},
mixIn: function(t) {
for (var e in t) t.hasOwnProperty(e) && (this[e] = t[e]);
t.hasOwnProperty("toString") && (this.toString = t.toString);
},
clone: function() {
return this.init.prototype.extend(this);
}
}, r = n.WordArray = o.extend({
init: function(t, e) {
t = this.words = t || [];
this.sigBytes = null != e ? e : 4 * t.length;
},
toString: function(t) {
return (t || a).stringify(this);
},
concat: function(t) {
var e = this.words, i = t.words, n = this.sigBytes, o = t.sigBytes;
this.clamp();
if (n % 4) for (var r = 0; r < o; r++) {
var s = i[r >>> 2] >>> 24 - r % 4 * 8 & 255;
e[n + r >>> 2] |= s << 24 - (n + r) % 4 * 8;
} else for (r = 0; r < o; r += 4) e[n + r >>> 2] = i[r >>> 2];
this.sigBytes += o;
return this;
},
clamp: function() {
var e = this.words, i = this.sigBytes;
e[i >>> 2] &= 4294967295 << 32 - i % 4 * 8;
e.length = t.ceil(i / 4);
},
clone: function() {
var t = o.clone.call(this);
t.words = this.words.slice(0);
return t;
},
random: function(e) {
for (var i, n = [], o = function(e) {
e = e;
var i = 987654321, n = 4294967295;
return function() {
var o = ((i = 36969 * (65535 & i) + (i >> 16) & n) << 16) + (e = 18e3 * (65535 & e) + (e >> 16) & n) & n;
o /= 4294967296;
return (o += .5) * (t.random() > .5 ? 1 : -1);
};
}, s = 0; s < e; s += 4) {
var a = o(4294967296 * (i || t.random()));
i = 987654071 * a();
n.push(4294967296 * a() | 0);
}
return new r.init(n, e);
}
}), s = i.enc = {}, a = s.Hex = {
stringify: function(t) {
for (var e = t.words, i = t.sigBytes, n = [], o = 0; o < i; o++) {
var r = e[o >>> 2] >>> 24 - o % 4 * 8 & 255;
n.push((r >>> 4).toString(16));
n.push((15 & r).toString(16));
}
return n.join("");
},
parse: function(t) {
for (var e = t.length, i = [], n = 0; n < e; n += 2) i[n >>> 3] |= parseInt(t.substr(n, 2), 16) << 24 - n % 8 * 4;
return new r.init(i, e / 2);
}
}, l = s.Latin1 = {
stringify: function(t) {
for (var e = t.words, i = t.sigBytes, n = [], o = 0; o < i; o++) {
var r = e[o >>> 2] >>> 24 - o % 4 * 8 & 255;
n.push(String.fromCharCode(r));
}
return n.join("");
},
parse: function(t) {
for (var e = t.length, i = [], n = 0; n < e; n++) i[n >>> 2] |= (255 & t.charCodeAt(n)) << 24 - n % 4 * 8;
return new r.init(i, e);
}
}, h = s.Utf8 = {
stringify: function(t) {
try {
return decodeURIComponent(escape(l.stringify(t)));
} catch (t) {
throw new Error("Malformed UTF-8 data");
}
},
parse: function(t) {
return l.parse(unescape(encodeURIComponent(t)));
}
}, c = n.BufferedBlockAlgorithm = o.extend({
reset: function() {
this._data = new r.init();
this._nDataBytes = 0;
},
_append: function(t) {
"string" == typeof t && (t = h.parse(t));
this._data.concat(t);
this._nDataBytes += t.sigBytes;
},
_process: function(e) {
var i = this._data, n = i.words, o = i.sigBytes, s = this.blockSize, a = o / (4 * s), l = (a = e ? t.ceil(a) : t.max((0 | a) - this._minBufferSize, 0)) * s, h = t.min(4 * l, o);
if (l) {
for (var c = 0; c < l; c += s) this._doProcessBlock(n, c);
var u = n.splice(0, l);
i.sigBytes -= h;
}
return new r.init(u, h);
},
clone: function() {
var t = o.clone.call(this);
t._data = this._data.clone();
return t;
},
_minBufferSize: 0
}), u = (n.Hasher = c.extend({
cfg: o.extend(),
init: function(t) {
this.cfg = this.cfg.extend(t);
this.reset();
},
reset: function() {
c.reset.call(this);
this._doReset();
},
update: function(t) {
this._append(t);
this._process();
return this;
},
finalize: function(t) {
t && this._append(t);
return this._doFinalize();
},
blockSize: 16,
_createHelper: function(t) {
return function(e, i) {
return new t.init(i).finalize(e);
};
},
_createHmacHelper: function(t) {
return function(e, i) {
return new u.HMAC.init(t, i).finalize(e);
};
}
}), i.algo = {});
return i;
}(Math);

(function() {
var t = CryptoJS, e = t.lib.WordArray;
t.enc.Base64 = {
stringify: function(t) {
var e = t.words, i = t.sigBytes, n = this._map;
t.clamp();
for (var o = [], r = 0; r < i; r += 3) for (var s = (e[r >>> 2] >>> 24 - r % 4 * 8 & 255) << 16 | (e[r + 1 >>> 2] >>> 24 - (r + 1) % 4 * 8 & 255) << 8 | e[r + 2 >>> 2] >>> 24 - (r + 2) % 4 * 8 & 255, a = 0; a < 4 && r + .75 * a < i; a++) o.push(n.charAt(s >>> 6 * (3 - a) & 63));
var l = n.charAt(64);
if (l) for (;o.length % 4; ) o.push(l);
return o.join("");
},
parse: function(t) {
var e = t.length, n = this._map, o = this._reverseMap;
if (!o) {
o = this._reverseMap = [];
for (var r = 0; r < n.length; r++) o[n.charCodeAt(r)] = r;
}
var s = n.charAt(64);
if (s) {
var a = t.indexOf(s);
-1 !== a && (e = a);
}
return i(t, e, o);
},
_map: "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/="
};
function i(t, i, n) {
for (var o = [], r = 0, s = 0; s < i; s++) if (s % 4) {
var a = n[t.charCodeAt(s - 1)] << s % 4 * 2, l = n[t.charCodeAt(s)] >>> 6 - s % 4 * 2;
o[r >>> 2] |= (a | l) << 24 - r % 4 * 8;
r++;
}
return e.create(o, r);
}
})();

(function(t) {
var e = CryptoJS, i = e.lib, n = i.WordArray, o = i.Hasher, r = e.algo, s = [];
(function() {
for (var e = 0; e < 64; e++) s[e] = 4294967296 * t.abs(t.sin(e + 1)) | 0;
})();
var a = r.MD5 = o.extend({
_doReset: function() {
this._hash = new n.init([ 1732584193, 4023233417, 2562383102, 271733878 ]);
},
_doProcessBlock: function(t, e) {
for (var i = 0; i < 16; i++) {
var n = e + i, o = t[n];
t[n] = 16711935 & (o << 8 | o >>> 24) | 4278255360 & (o << 24 | o >>> 8);
}
var r = this._hash.words, a = t[e + 0], p = t[e + 1], d = t[e + 2], f = t[e + 3], _ = t[e + 4], g = t[e + 5], y = t[e + 6], m = t[e + 7], v = t[e + 8], b = t[e + 9], w = t[e + 10], S = t[e + 11], I = t[e + 12], C = t[e + 13], P = t[e + 14], x = t[e + 15], k = r[0], T = r[1], O = r[2], A = r[3];
k = l(k, T, O, A, a, 7, s[0]);
A = l(A, k, T, O, p, 12, s[1]);
O = l(O, A, k, T, d, 17, s[2]);
T = l(T, O, A, k, f, 22, s[3]);
k = l(k, T, O, A, _, 7, s[4]);
A = l(A, k, T, O, g, 12, s[5]);
O = l(O, A, k, T, y, 17, s[6]);
T = l(T, O, A, k, m, 22, s[7]);
k = l(k, T, O, A, v, 7, s[8]);
A = l(A, k, T, O, b, 12, s[9]);
O = l(O, A, k, T, w, 17, s[10]);
T = l(T, O, A, k, S, 22, s[11]);
k = l(k, T, O, A, I, 7, s[12]);
A = l(A, k, T, O, C, 12, s[13]);
O = l(O, A, k, T, P, 17, s[14]);
k = h(k, T = l(T, O, A, k, x, 22, s[15]), O, A, p, 5, s[16]);
A = h(A, k, T, O, y, 9, s[17]);
O = h(O, A, k, T, S, 14, s[18]);
T = h(T, O, A, k, a, 20, s[19]);
k = h(k, T, O, A, g, 5, s[20]);
A = h(A, k, T, O, w, 9, s[21]);
O = h(O, A, k, T, x, 14, s[22]);
T = h(T, O, A, k, _, 20, s[23]);
k = h(k, T, O, A, b, 5, s[24]);
A = h(A, k, T, O, P, 9, s[25]);
O = h(O, A, k, T, f, 14, s[26]);
T = h(T, O, A, k, v, 20, s[27]);
k = h(k, T, O, A, C, 5, s[28]);
A = h(A, k, T, O, d, 9, s[29]);
O = h(O, A, k, T, m, 14, s[30]);
k = c(k, T = h(T, O, A, k, I, 20, s[31]), O, A, g, 4, s[32]);
A = c(A, k, T, O, v, 11, s[33]);
O = c(O, A, k, T, S, 16, s[34]);
T = c(T, O, A, k, P, 23, s[35]);
k = c(k, T, O, A, p, 4, s[36]);
A = c(A, k, T, O, _, 11, s[37]);
O = c(O, A, k, T, m, 16, s[38]);
T = c(T, O, A, k, w, 23, s[39]);
k = c(k, T, O, A, C, 4, s[40]);
A = c(A, k, T, O, a, 11, s[41]);
O = c(O, A, k, T, f, 16, s[42]);
T = c(T, O, A, k, y, 23, s[43]);
k = c(k, T, O, A, b, 4, s[44]);
A = c(A, k, T, O, I, 11, s[45]);
O = c(O, A, k, T, x, 16, s[46]);
k = u(k, T = c(T, O, A, k, d, 23, s[47]), O, A, a, 6, s[48]);
A = u(A, k, T, O, m, 10, s[49]);
O = u(O, A, k, T, P, 15, s[50]);
T = u(T, O, A, k, g, 21, s[51]);
k = u(k, T, O, A, I, 6, s[52]);
A = u(A, k, T, O, f, 10, s[53]);
O = u(O, A, k, T, w, 15, s[54]);
T = u(T, O, A, k, p, 21, s[55]);
k = u(k, T, O, A, v, 6, s[56]);
A = u(A, k, T, O, x, 10, s[57]);
O = u(O, A, k, T, y, 15, s[58]);
T = u(T, O, A, k, C, 21, s[59]);
k = u(k, T, O, A, _, 6, s[60]);
A = u(A, k, T, O, S, 10, s[61]);
O = u(O, A, k, T, d, 15, s[62]);
T = u(T, O, A, k, b, 21, s[63]);
r[0] = r[0] + k | 0;
r[1] = r[1] + T | 0;
r[2] = r[2] + O | 0;
r[3] = r[3] + A | 0;
},
_doFinalize: function() {
var e = this._data, i = e.words, n = 8 * this._nDataBytes, o = 8 * e.sigBytes;
i[o >>> 5] |= 128 << 24 - o % 32;
var r = t.floor(n / 4294967296), s = n;
i[15 + (o + 64 >>> 9 << 4)] = 16711935 & (r << 8 | r >>> 24) | 4278255360 & (r << 24 | r >>> 8);
i[14 + (o + 64 >>> 9 << 4)] = 16711935 & (s << 8 | s >>> 24) | 4278255360 & (s << 24 | s >>> 8);
e.sigBytes = 4 * (i.length + 1);
this._process();
for (var a = this._hash, l = a.words, h = 0; h < 4; h++) {
var c = l[h];
l[h] = 16711935 & (c << 8 | c >>> 24) | 4278255360 & (c << 24 | c >>> 8);
}
return a;
},
clone: function() {
var t = o.clone.call(this);
t._hash = this._hash.clone();
return t;
}
});
function l(t, e, i, n, o, r, s) {
var a = t + (e & i | ~e & n) + o + s;
return (a << r | a >>> 32 - r) + e;
}
function h(t, e, i, n, o, r, s) {
var a = t + (e & n | i & ~n) + o + s;
return (a << r | a >>> 32 - r) + e;
}
function c(t, e, i, n, o, r, s) {
var a = t + (e ^ i ^ n) + o + s;
return (a << r | a >>> 32 - r) + e;
}
function u(t, e, i, n, o, r, s) {
var a = t + (i ^ (e | ~n)) + o + s;
return (a << r | a >>> 32 - r) + e;
}
e.MD5 = o._createHelper(a);
e.HmacMD5 = o._createHmacHelper(a);
})(Math);

(function() {
var t = CryptoJS, e = t.lib, i = e.WordArray, n = e.Hasher, o = t.algo, r = [], s = o.SHA1 = n.extend({
_doReset: function() {
this._hash = new i.init([ 1732584193, 4023233417, 2562383102, 271733878, 3285377520 ]);
},
_doProcessBlock: function(t, e) {
for (var i = this._hash.words, n = i[0], o = i[1], s = i[2], a = i[3], l = i[4], h = 0; h < 80; h++) {
if (h < 16) r[h] = 0 | t[e + h]; else {
var c = r[h - 3] ^ r[h - 8] ^ r[h - 14] ^ r[h - 16];
r[h] = c << 1 | c >>> 31;
}
var u = (n << 5 | n >>> 27) + l + r[h];
u += h < 20 ? 1518500249 + (o & s | ~o & a) : h < 40 ? 1859775393 + (o ^ s ^ a) : h < 60 ? (o & s | o & a | s & a) - 1894007588 : (o ^ s ^ a) - 899497514;
l = a;
a = s;
s = o << 30 | o >>> 2;
o = n;
n = u;
}
i[0] = i[0] + n | 0;
i[1] = i[1] + o | 0;
i[2] = i[2] + s | 0;
i[3] = i[3] + a | 0;
i[4] = i[4] + l | 0;
},
_doFinalize: function() {
var t = this._data, e = t.words, i = 8 * this._nDataBytes, n = 8 * t.sigBytes;
e[n >>> 5] |= 128 << 24 - n % 32;
e[14 + (n + 64 >>> 9 << 4)] = Math.floor(i / 4294967296);
e[15 + (n + 64 >>> 9 << 4)] = i;
t.sigBytes = 4 * e.length;
this._process();
return this._hash;
},
clone: function() {
var t = n.clone.call(this);
t._hash = this._hash.clone();
return t;
}
});
t.SHA1 = n._createHelper(s);
t.HmacSHA1 = n._createHmacHelper(s);
})();

(function(t) {
var e = CryptoJS, i = e.lib, n = i.WordArray, o = i.Hasher, r = e.algo, s = [], a = [];
(function() {
function e(e) {
for (var i = t.sqrt(e), n = 2; n <= i; n++) if (!(e % n)) return !1;
return !0;
}
function i(t) {
return 4294967296 * (t - (0 | t)) | 0;
}
for (var n = 2, o = 0; o < 64; ) {
if (e(n)) {
o < 8 && (s[o] = i(t.pow(n, .5)));
a[o] = i(t.pow(n, 1 / 3));
o++;
}
n++;
}
})();
var l = [], h = r.SHA256 = o.extend({
_doReset: function() {
this._hash = new n.init(s.slice(0));
},
_doProcessBlock: function(t, e) {
for (var i = this._hash.words, n = i[0], o = i[1], r = i[2], s = i[3], h = i[4], c = i[5], u = i[6], p = i[7], d = 0; d < 64; d++) {
if (d < 16) l[d] = 0 | t[e + d]; else {
var f = l[d - 15], _ = (f << 25 | f >>> 7) ^ (f << 14 | f >>> 18) ^ f >>> 3, g = l[d - 2], y = (g << 15 | g >>> 17) ^ (g << 13 | g >>> 19) ^ g >>> 10;
l[d] = _ + l[d - 7] + y + l[d - 16];
}
var m = n & o ^ n & r ^ o & r, v = (n << 30 | n >>> 2) ^ (n << 19 | n >>> 13) ^ (n << 10 | n >>> 22), b = p + ((h << 26 | h >>> 6) ^ (h << 21 | h >>> 11) ^ (h << 7 | h >>> 25)) + (h & c ^ ~h & u) + a[d] + l[d];
p = u;
u = c;
c = h;
h = s + b | 0;
s = r;
r = o;
o = n;
n = b + (v + m) | 0;
}
i[0] = i[0] + n | 0;
i[1] = i[1] + o | 0;
i[2] = i[2] + r | 0;
i[3] = i[3] + s | 0;
i[4] = i[4] + h | 0;
i[5] = i[5] + c | 0;
i[6] = i[6] + u | 0;
i[7] = i[7] + p | 0;
},
_doFinalize: function() {
var e = this._data, i = e.words, n = 8 * this._nDataBytes, o = 8 * e.sigBytes;
i[o >>> 5] |= 128 << 24 - o % 32;
i[14 + (o + 64 >>> 9 << 4)] = t.floor(n / 4294967296);
i[15 + (o + 64 >>> 9 << 4)] = n;
e.sigBytes = 4 * i.length;
this._process();
return this._hash;
},
clone: function() {
var t = o.clone.call(this);
t._hash = this._hash.clone();
return t;
}
});
e.SHA256 = o._createHelper(h);
e.HmacSHA256 = o._createHmacHelper(h);
})(Math);

(function() {
var t = CryptoJS, e = t.lib.WordArray, i = t.enc;
i.Utf16 = i.Utf16BE = {
stringify: function(t) {
for (var e = t.words, i = t.sigBytes, n = [], o = 0; o < i; o += 2) {
var r = e[o >>> 2] >>> 16 - o % 4 * 8 & 65535;
n.push(String.fromCharCode(r));
}
return n.join("");
},
parse: function(t) {
for (var i = t.length, n = [], o = 0; o < i; o++) n[o >>> 1] |= t.charCodeAt(o) << 16 - o % 2 * 16;
return e.create(n, 2 * i);
}
};
i.Utf16LE = {
stringify: function(t) {
for (var e = t.words, i = t.sigBytes, o = [], r = 0; r < i; r += 2) {
var s = n(e[r >>> 2] >>> 16 - r % 4 * 8 & 65535);
o.push(String.fromCharCode(s));
}
return o.join("");
},
parse: function(t) {
for (var i = t.length, o = [], r = 0; r < i; r++) o[r >>> 1] |= n(t.charCodeAt(r) << 16 - r % 2 * 16);
return e.create(o, 2 * i);
}
};
function n(t) {
return t << 8 & 4278255360 | t >>> 8 & 16711935;
}
})();

(function() {
if ("function" == typeof ArrayBuffer) {
var t = CryptoJS.lib.WordArray, e = t.init;
(t.init = function(t) {
t instanceof ArrayBuffer && (t = new Uint8Array(t));
(t instanceof Int8Array || "undefined" != typeof Uint8ClampedArray && t instanceof Uint8ClampedArray || t instanceof Int16Array || t instanceof Uint16Array || t instanceof Int32Array || t instanceof Uint32Array || t instanceof Float32Array || t instanceof Float64Array) && (t = new Uint8Array(t.buffer, t.byteOffset, t.byteLength));
if (t instanceof Uint8Array) {
for (var i = t.byteLength, n = [], o = 0; o < i; o++) n[o >>> 2] |= t[o] << 24 - o % 4 * 8;
e.call(this, n, i);
} else e.apply(this, arguments);
}).prototype = t;
}
})();

(function() {
var t = CryptoJS, e = t.lib, i = e.WordArray, n = e.Hasher, o = t.algo, r = i.create([ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 7, 4, 13, 1, 10, 6, 15, 3, 12, 0, 9, 5, 2, 14, 11, 8, 3, 10, 14, 4, 9, 15, 8, 1, 2, 7, 0, 6, 13, 11, 5, 12, 1, 9, 11, 10, 0, 8, 12, 4, 13, 3, 7, 15, 14, 5, 6, 2, 4, 0, 5, 9, 7, 12, 2, 10, 14, 1, 3, 8, 11, 6, 15, 13 ]), s = i.create([ 5, 14, 7, 0, 9, 2, 11, 4, 13, 6, 15, 8, 1, 10, 3, 12, 6, 11, 3, 7, 0, 13, 5, 10, 14, 15, 8, 12, 4, 9, 1, 2, 15, 5, 1, 3, 7, 14, 6, 9, 11, 8, 12, 2, 10, 0, 4, 13, 8, 6, 4, 1, 3, 11, 15, 0, 5, 12, 2, 13, 9, 7, 10, 14, 12, 15, 10, 4, 1, 5, 8, 7, 6, 2, 13, 14, 0, 3, 9, 11 ]), a = i.create([ 11, 14, 15, 12, 5, 8, 7, 9, 11, 13, 14, 15, 6, 7, 9, 8, 7, 6, 8, 13, 11, 9, 7, 15, 7, 12, 15, 9, 11, 7, 13, 12, 11, 13, 6, 7, 14, 9, 13, 15, 14, 8, 13, 6, 5, 12, 7, 5, 11, 12, 14, 15, 14, 15, 9, 8, 9, 14, 5, 6, 8, 6, 5, 12, 9, 15, 5, 11, 6, 8, 13, 12, 5, 12, 13, 14, 11, 8, 5, 6 ]), l = i.create([ 8, 9, 9, 11, 13, 15, 15, 5, 7, 7, 8, 11, 14, 14, 12, 6, 9, 13, 15, 7, 12, 8, 9, 11, 7, 7, 12, 7, 6, 15, 13, 11, 9, 7, 15, 11, 8, 6, 6, 14, 12, 13, 5, 14, 13, 13, 7, 5, 15, 5, 8, 11, 14, 14, 6, 14, 6, 9, 12, 9, 12, 5, 15, 8, 8, 5, 12, 9, 12, 5, 14, 6, 8, 13, 6, 5, 15, 13, 11, 11 ]), h = i.create([ 0, 1518500249, 1859775393, 2400959708, 2840853838 ]), c = i.create([ 1352829926, 1548603684, 1836072691, 2053994217, 0 ]), u = o.RIPEMD160 = n.extend({
_doReset: function() {
this._hash = i.create([ 1732584193, 4023233417, 2562383102, 271733878, 3285377520 ]);
},
_doProcessBlock: function(t, e) {
for (var i = 0; i < 16; i++) {
var n = e + i, o = t[n];
t[n] = 16711935 & (o << 8 | o >>> 24) | 4278255360 & (o << 24 | o >>> 8);
}
var u, m, v, b, w, S, I, C, P, x, k, T = this._hash.words, O = h.words, A = c.words, B = r.words, D = s.words, M = a.words, E = l.words;
S = u = T[0];
I = m = T[1];
C = v = T[2];
P = b = T[3];
x = w = T[4];
for (i = 0; i < 80; i += 1) {
k = u + t[e + B[i]] | 0;
k += i < 16 ? p(m, v, b) + O[0] : i < 32 ? d(m, v, b) + O[1] : i < 48 ? f(m, v, b) + O[2] : i < 64 ? _(m, v, b) + O[3] : g(m, v, b) + O[4];
k = (k = y(k |= 0, M[i])) + w | 0;
u = w;
w = b;
b = y(v, 10);
v = m;
m = k;
k = S + t[e + D[i]] | 0;
k += i < 16 ? g(I, C, P) + A[0] : i < 32 ? _(I, C, P) + A[1] : i < 48 ? f(I, C, P) + A[2] : i < 64 ? d(I, C, P) + A[3] : p(I, C, P) + A[4];
k = (k = y(k |= 0, E[i])) + x | 0;
S = x;
x = P;
P = y(C, 10);
C = I;
I = k;
}
k = T[1] + v + P | 0;
T[1] = T[2] + b + x | 0;
T[2] = T[3] + w + S | 0;
T[3] = T[4] + u + I | 0;
T[4] = T[0] + m + C | 0;
T[0] = k;
},
_doFinalize: function() {
var t = this._data, e = t.words, i = 8 * this._nDataBytes, n = 8 * t.sigBytes;
e[n >>> 5] |= 128 << 24 - n % 32;
e[14 + (n + 64 >>> 9 << 4)] = 16711935 & (i << 8 | i >>> 24) | 4278255360 & (i << 24 | i >>> 8);
t.sigBytes = 4 * (e.length + 1);
this._process();
for (var o = this._hash, r = o.words, s = 0; s < 5; s++) {
var a = r[s];
r[s] = 16711935 & (a << 8 | a >>> 24) | 4278255360 & (a << 24 | a >>> 8);
}
return o;
},
clone: function() {
var t = n.clone.call(this);
t._hash = this._hash.clone();
return t;
}
});
function p(t, e, i) {
return t ^ e ^ i;
}
function d(t, e, i) {
return t & e | ~t & i;
}
function f(t, e, i) {
return (t | ~e) ^ i;
}
function _(t, e, i) {
return t & i | e & ~i;
}
function g(t, e, i) {
return t ^ (e | ~i);
}
function y(t, e) {
return t << e | t >>> 32 - e;
}
t.RIPEMD160 = n._createHelper(u);
t.HmacRIPEMD160 = n._createHmacHelper(u);
})(Math);

(function() {
var t = CryptoJS, e = t.lib.Base, i = t.enc.Utf8;
t.algo.HMAC = e.extend({
init: function(t, e) {
t = this._hasher = new t.init();
"string" == typeof e && (e = i.parse(e));
var n = t.blockSize, o = 4 * n;
e.sigBytes > o && (e = t.finalize(e));
e.clamp();
for (var r = this._oKey = e.clone(), s = this._iKey = e.clone(), a = r.words, l = s.words, h = 0; h < n; h++) {
a[h] ^= 1549556828;
l[h] ^= 909522486;
}
r.sigBytes = s.sigBytes = o;
this.reset();
},
reset: function() {
var t = this._hasher;
t.reset();
t.update(this._iKey);
},
update: function(t) {
this._hasher.update(t);
return this;
},
finalize: function(t) {
var e = this._hasher, i = e.finalize(t);
e.reset();
return e.finalize(this._oKey.clone().concat(i));
}
});
})();

(function() {
var t = CryptoJS, e = t.lib, i = e.Base, n = e.WordArray, o = t.algo, r = o.SHA1, s = o.HMAC, a = o.PBKDF2 = i.extend({
cfg: i.extend({
keySize: 4,
hasher: r,
iterations: 1
}),
init: function(t) {
this.cfg = this.cfg.extend(t);
},
compute: function(t, e) {
for (var i = this.cfg, o = s.create(i.hasher, t), r = n.create(), a = n.create([ 1 ]), l = r.words, h = a.words, c = i.keySize, u = i.iterations; l.length < c; ) {
var p = o.update(e).finalize(a);
o.reset();
for (var d = p.words, f = d.length, _ = p, g = 1; g < u; g++) {
_ = o.finalize(_);
o.reset();
for (var y = _.words, m = 0; m < f; m++) d[m] ^= y[m];
}
r.concat(p);
h[0]++;
}
r.sigBytes = 4 * c;
return r;
}
});
t.PBKDF2 = function(t, e, i) {
return a.create(i).compute(t, e);
};
})();

(function() {
var t = CryptoJS, e = t.lib, i = e.Base, n = e.WordArray, o = t.algo, r = o.MD5, s = o.EvpKDF = i.extend({
cfg: i.extend({
keySize: 4,
hasher: r,
iterations: 1
}),
init: function(t) {
this.cfg = this.cfg.extend(t);
},
compute: function(t, e) {
for (var i = this.cfg, o = i.hasher.create(), r = n.create(), s = r.words, a = i.keySize, l = i.iterations; s.length < a; ) {
h && o.update(h);
var h = o.update(t).finalize(e);
o.reset();
for (var c = 1; c < l; c++) {
h = o.finalize(h);
o.reset();
}
r.concat(h);
}
r.sigBytes = 4 * a;
return r;
}
});
t.EvpKDF = function(t, e, i) {
return s.create(i).compute(t, e);
};
})();

(function() {
var t = CryptoJS, e = t.lib.WordArray, i = t.algo, n = i.SHA256, o = i.SHA224 = n.extend({
_doReset: function() {
this._hash = new e.init([ 3238371032, 914150663, 812702999, 4144912697, 4290775857, 1750603025, 1694076839, 3204075428 ]);
},
_doFinalize: function() {
var t = n._doFinalize.call(this);
t.sigBytes -= 4;
return t;
}
});
t.SHA224 = n._createHelper(o);
t.HmacSHA224 = n._createHmacHelper(o);
})();

(function() {
var t = CryptoJS, e = t.lib, i = e.Base, n = e.WordArray, o = t.x64 = {};
o.Word = i.extend({
init: function(t, e) {
this.high = t;
this.low = e;
}
}), o.WordArray = i.extend({
init: function(t, e) {
t = this.words = t || [];
this.sigBytes = null != e ? e : 8 * t.length;
},
toX32: function() {
for (var t = this.words, e = t.length, i = [], o = 0; o < e; o++) {
var r = t[o];
i.push(r.high);
i.push(r.low);
}
return n.create(i, this.sigBytes);
},
clone: function() {
for (var t = i.clone.call(this), e = t.words = this.words.slice(0), n = e.length, o = 0; o < n; o++) e[o] = e[o].clone();
return t;
}
});
})();

(function(t) {
var e = CryptoJS, i = e.lib, n = i.WordArray, o = i.Hasher, r = e.x64.Word, s = e.algo, a = [], l = [], h = [];
(function() {
for (var t = 1, e = 0, i = 0; i < 24; i++) {
a[t + 5 * e] = (i + 1) * (i + 2) / 2 % 64;
var n = (2 * t + 3 * e) % 5;
t = e % 5;
e = n;
}
for (t = 0; t < 5; t++) for (e = 0; e < 5; e++) l[t + 5 * e] = e + (2 * t + 3 * e) % 5 * 5;
for (var o = 1, s = 0; s < 24; s++) {
for (var c = 0, u = 0, p = 0; p < 7; p++) {
if (1 & o) {
var d = (1 << p) - 1;
d < 32 ? u ^= 1 << d : c ^= 1 << d - 32;
}
128 & o ? o = o << 1 ^ 113 : o <<= 1;
}
h[s] = r.create(c, u);
}
})();
var c = [];
(function() {
for (var t = 0; t < 25; t++) c[t] = r.create();
})();
var u = s.SHA3 = o.extend({
cfg: o.cfg.extend({
outputLength: 512
}),
_doReset: function() {
for (var t = this._state = [], e = 0; e < 25; e++) t[e] = new r.init();
this.blockSize = (1600 - 2 * this.cfg.outputLength) / 32;
},
_doProcessBlock: function(t, e) {
for (var i = this._state, n = this.blockSize / 2, o = 0; o < n; o++) {
var r = t[e + 2 * o], s = t[e + 2 * o + 1];
r = 16711935 & (r << 8 | r >>> 24) | 4278255360 & (r << 24 | r >>> 8);
s = 16711935 & (s << 8 | s >>> 24) | 4278255360 & (s << 24 | s >>> 8);
(T = i[o]).high ^= s;
T.low ^= r;
}
for (var u = 0; u < 24; u++) {
for (var p = 0; p < 5; p++) {
for (var d = 0, f = 0, _ = 0; _ < 5; _++) {
d ^= (T = i[p + 5 * _]).high;
f ^= T.low;
}
var g = c[p];
g.high = d;
g.low = f;
}
for (p = 0; p < 5; p++) {
var y = c[(p + 4) % 5], m = c[(p + 1) % 5], v = m.high, b = m.low;
for (d = y.high ^ (v << 1 | b >>> 31), f = y.low ^ (b << 1 | v >>> 31), _ = 0; _ < 5; _++) {
(T = i[p + 5 * _]).high ^= d;
T.low ^= f;
}
}
for (var w = 1; w < 25; w++) {
var S = (T = i[w]).high, I = T.low, C = a[w];
C < 32 ? (d = S << C | I >>> 32 - C, f = I << C | S >>> 32 - C) : (d = I << C - 32 | S >>> 64 - C, 
f = S << C - 32 | I >>> 64 - C);
var P = c[l[w]];
P.high = d;
P.low = f;
}
var x = c[0], k = i[0];
x.high = k.high;
x.low = k.low;
for (p = 0; p < 5; p++) for (_ = 0; _ < 5; _++) {
var T = i[w = p + 5 * _], O = c[w], A = c[(p + 1) % 5 + 5 * _], B = c[(p + 2) % 5 + 5 * _];
T.high = O.high ^ ~A.high & B.high;
T.low = O.low ^ ~A.low & B.low;
}
T = i[0];
var D = h[u];
T.high ^= D.high;
T.low ^= D.low;
}
},
_doFinalize: function() {
var e = this._data, i = e.words, o = (this._nDataBytes, 8 * e.sigBytes), r = 32 * this.blockSize;
i[o >>> 5] |= 1 << 24 - o % 32;
i[(t.ceil((o + 1) / r) * r >>> 5) - 1] |= 128;
e.sigBytes = 4 * i.length;
this._process();
for (var s = this._state, a = this.cfg.outputLength / 8, l = a / 8, h = [], c = 0; c < l; c++) {
var u = s[c], p = u.high, d = u.low;
p = 16711935 & (p << 8 | p >>> 24) | 4278255360 & (p << 24 | p >>> 8);
d = 16711935 & (d << 8 | d >>> 24) | 4278255360 & (d << 24 | d >>> 8);
h.push(d);
h.push(p);
}
return new n.init(h, a);
},
clone: function() {
for (var t = o.clone.call(this), e = t._state = this._state.slice(0), i = 0; i < 25; i++) e[i] = e[i].clone();
return t;
}
});
e.SHA3 = o._createHelper(u);
e.HmacSHA3 = o._createHmacHelper(u);
})(Math);

(function() {
var t = CryptoJS, e = t.lib.Hasher, i = t.x64, n = i.Word, o = i.WordArray, r = t.algo;
function s() {
return n.create.apply(n, arguments);
}
var a = [ s(1116352408, 3609767458), s(1899447441, 602891725), s(3049323471, 3964484399), s(3921009573, 2173295548), s(961987163, 4081628472), s(1508970993, 3053834265), s(2453635748, 2937671579), s(2870763221, 3664609560), s(3624381080, 2734883394), s(310598401, 1164996542), s(607225278, 1323610764), s(1426881987, 3590304994), s(1925078388, 4068182383), s(2162078206, 991336113), s(2614888103, 633803317), s(3248222580, 3479774868), s(3835390401, 2666613458), s(4022224774, 944711139), s(264347078, 2341262773), s(604807628, 2007800933), s(770255983, 1495990901), s(1249150122, 1856431235), s(1555081692, 3175218132), s(1996064986, 2198950837), s(2554220882, 3999719339), s(2821834349, 766784016), s(2952996808, 2566594879), s(3210313671, 3203337956), s(3336571891, 1034457026), s(3584528711, 2466948901), s(113926993, 3758326383), s(338241895, 168717936), s(666307205, 1188179964), s(773529912, 1546045734), s(1294757372, 1522805485), s(1396182291, 2643833823), s(1695183700, 2343527390), s(1986661051, 1014477480), s(2177026350, 1206759142), s(2456956037, 344077627), s(2730485921, 1290863460), s(2820302411, 3158454273), s(3259730800, 3505952657), s(3345764771, 106217008), s(3516065817, 3606008344), s(3600352804, 1432725776), s(4094571909, 1467031594), s(275423344, 851169720), s(430227734, 3100823752), s(506948616, 1363258195), s(659060556, 3750685593), s(883997877, 3785050280), s(958139571, 3318307427), s(1322822218, 3812723403), s(1537002063, 2003034995), s(1747873779, 3602036899), s(1955562222, 1575990012), s(2024104815, 1125592928), s(2227730452, 2716904306), s(2361852424, 442776044), s(2428436474, 593698344), s(2756734187, 3733110249), s(3204031479, 2999351573), s(3329325298, 3815920427), s(3391569614, 3928383900), s(3515267271, 566280711), s(3940187606, 3454069534), s(4118630271, 4000239992), s(116418474, 1914138554), s(174292421, 2731055270), s(289380356, 3203993006), s(460393269, 320620315), s(685471733, 587496836), s(852142971, 1086792851), s(1017036298, 365543100), s(1126000580, 2618297676), s(1288033470, 3409855158), s(1501505948, 4234509866), s(1607167915, 987167468), s(1816402316, 1246189591) ], l = [];
(function() {
for (var t = 0; t < 80; t++) l[t] = s();
})();
var h = r.SHA512 = e.extend({
_doReset: function() {
this._hash = new o.init([ new n.init(1779033703, 4089235720), new n.init(3144134277, 2227873595), new n.init(1013904242, 4271175723), new n.init(2773480762, 1595750129), new n.init(1359893119, 2917565137), new n.init(2600822924, 725511199), new n.init(528734635, 4215389547), new n.init(1541459225, 327033209) ]);
},
_doProcessBlock: function(t, e) {
for (var i = this._hash.words, n = i[0], o = i[1], r = i[2], s = i[3], h = i[4], c = i[5], u = i[6], p = i[7], d = n.high, f = n.low, _ = o.high, g = o.low, y = r.high, m = r.low, v = s.high, b = s.low, w = h.high, S = h.low, I = c.high, C = c.low, P = u.high, x = u.low, k = p.high, T = p.low, O = d, A = f, B = _, D = g, M = y, E = m, j = v, L = b, R = w, N = S, z = I, F = C, V = P, G = x, U = k, H = T, W = 0; W < 80; W++) {
var q = l[W];
if (W < 16) var Y = q.high = 0 | t[e + 2 * W], J = q.low = 0 | t[e + 2 * W + 1]; else {
var X = l[W - 15], K = X.high, $ = X.low, Z = (K >>> 1 | $ << 31) ^ (K >>> 8 | $ << 24) ^ K >>> 7, Q = ($ >>> 1 | K << 31) ^ ($ >>> 8 | K << 24) ^ ($ >>> 7 | K << 25), tt = l[W - 2], et = tt.high, it = tt.low, nt = (et >>> 19 | it << 13) ^ (et << 3 | it >>> 29) ^ et >>> 6, ot = (it >>> 19 | et << 13) ^ (it << 3 | et >>> 29) ^ (it >>> 6 | et << 26), rt = l[W - 7], st = rt.high, at = rt.low, lt = l[W - 16], ht = lt.high, ct = lt.low;
Y = (Y = (Y = Z + st + ((J = Q + at) >>> 0 < Q >>> 0 ? 1 : 0)) + nt + ((J += ot) >>> 0 < ot >>> 0 ? 1 : 0)) + ht + ((J += ct) >>> 0 < ct >>> 0 ? 1 : 0);
q.high = Y;
q.low = J;
}
var ut, pt = R & z ^ ~R & V, dt = N & F ^ ~N & G, ft = O & B ^ O & M ^ B & M, _t = A & D ^ A & E ^ D & E, gt = (O >>> 28 | A << 4) ^ (O << 30 | A >>> 2) ^ (O << 25 | A >>> 7), yt = (A >>> 28 | O << 4) ^ (A << 30 | O >>> 2) ^ (A << 25 | O >>> 7), mt = (R >>> 14 | N << 18) ^ (R >>> 18 | N << 14) ^ (R << 23 | N >>> 9), vt = (N >>> 14 | R << 18) ^ (N >>> 18 | R << 14) ^ (N << 23 | R >>> 9), bt = a[W], wt = bt.high, St = bt.low, It = U + mt + ((ut = H + vt) >>> 0 < H >>> 0 ? 1 : 0), Ct = yt + _t;
U = V;
H = G;
V = z;
G = F;
z = R;
F = N;
R = j + (It = (It = (It = It + pt + ((ut += dt) >>> 0 < dt >>> 0 ? 1 : 0)) + wt + ((ut += St) >>> 0 < St >>> 0 ? 1 : 0)) + Y + ((ut += J) >>> 0 < J >>> 0 ? 1 : 0)) + ((N = L + ut | 0) >>> 0 < L >>> 0 ? 1 : 0) | 0;
j = M;
L = E;
M = B;
E = D;
B = O;
D = A;
O = It + (gt + ft + (Ct >>> 0 < yt >>> 0 ? 1 : 0)) + ((A = ut + Ct | 0) >>> 0 < ut >>> 0 ? 1 : 0) | 0;
}
f = n.low = f + A;
n.high = d + O + (f >>> 0 < A >>> 0 ? 1 : 0);
g = o.low = g + D;
o.high = _ + B + (g >>> 0 < D >>> 0 ? 1 : 0);
m = r.low = m + E;
r.high = y + M + (m >>> 0 < E >>> 0 ? 1 : 0);
b = s.low = b + L;
s.high = v + j + (b >>> 0 < L >>> 0 ? 1 : 0);
S = h.low = S + N;
h.high = w + R + (S >>> 0 < N >>> 0 ? 1 : 0);
C = c.low = C + F;
c.high = I + z + (C >>> 0 < F >>> 0 ? 1 : 0);
x = u.low = x + G;
u.high = P + V + (x >>> 0 < G >>> 0 ? 1 : 0);
T = p.low = T + H;
p.high = k + U + (T >>> 0 < H >>> 0 ? 1 : 0);
},
_doFinalize: function() {
var t = this._data, e = t.words, i = 8 * this._nDataBytes, n = 8 * t.sigBytes;
e[n >>> 5] |= 128 << 24 - n % 32;
e[30 + (n + 128 >>> 10 << 5)] = Math.floor(i / 4294967296);
e[31 + (n + 128 >>> 10 << 5)] = i;
t.sigBytes = 4 * e.length;
this._process();
return this._hash.toX32();
},
clone: function() {
var t = e.clone.call(this);
t._hash = this._hash.clone();
return t;
},
blockSize: 32
});
t.SHA512 = e._createHelper(h);
t.HmacSHA512 = e._createHmacHelper(h);
})();

(function() {
var t = CryptoJS, e = t.x64, i = e.Word, n = e.WordArray, o = t.algo, r = o.SHA512, s = o.SHA384 = r.extend({
_doReset: function() {
this._hash = new n.init([ new i.init(3418070365, 3238371032), new i.init(1654270250, 914150663), new i.init(2438529370, 812702999), new i.init(355462360, 4144912697), new i.init(1731405415, 4290775857), new i.init(2394180231, 1750603025), new i.init(3675008525, 1694076839), new i.init(1203062813, 3204075428) ]);
},
_doFinalize: function() {
var t = r._doFinalize.call(this);
t.sigBytes -= 16;
return t;
}
});
t.SHA384 = r._createHelper(s);
t.HmacSHA384 = r._createHmacHelper(s);
})();

CryptoJS.lib.Cipher || function(t) {
var e = CryptoJS, i = e.lib, n = i.Base, o = i.WordArray, r = i.BufferedBlockAlgorithm, s = e.enc, a = (s.Utf8, 
s.Base64), l = e.algo.EvpKDF, h = i.Cipher = r.extend({
cfg: n.extend(),
createEncryptor: function(t, e) {
return this.create(this._ENC_XFORM_MODE, t, e);
},
createDecryptor: function(t, e) {
return this.create(this._DEC_XFORM_MODE, t, e);
},
init: function(t, e, i) {
this.cfg = this.cfg.extend(i);
this._xformMode = t;
this._key = e;
this.reset();
},
reset: function() {
r.reset.call(this);
this._doReset();
},
process: function(t) {
this._append(t);
return this._process();
},
finalize: function(t) {
t && this._append(t);
return this._doFinalize();
},
keySize: 4,
ivSize: 4,
_ENC_XFORM_MODE: 1,
_DEC_XFORM_MODE: 2,
_createHelper: function() {
function t(t) {
return "string" == typeof t ? m : g;
}
return function(e) {
return {
encrypt: function(i, n, o) {
return t(n).encrypt(e, i, n, o);
},
decrypt: function(i, n, o) {
return t(n).decrypt(e, i, n, o);
}
};
};
}()
}), c = (i.StreamCipher = h.extend({
_doFinalize: function() {
return this._process(!0);
},
blockSize: 1
}), e.mode = {}), u = i.BlockCipherMode = n.extend({
createEncryptor: function(t, e) {
return this.Encryptor.create(t, e);
},
createDecryptor: function(t, e) {
return this.Decryptor.create(t, e);
},
init: function(t, e) {
this._cipher = t;
this._iv = e;
}
}), p = c.CBC = function() {
var e = u.extend();
e.Encryptor = e.extend({
processBlock: function(t, e) {
var n = this._cipher, o = n.blockSize;
i.call(this, t, e, o);
n.encryptBlock(t, e);
this._prevBlock = t.slice(e, e + o);
}
});
e.Decryptor = e.extend({
processBlock: function(t, e) {
var n = this._cipher, o = n.blockSize, r = t.slice(e, e + o);
n.decryptBlock(t, e);
i.call(this, t, e, o);
this._prevBlock = r;
}
});
function i(e, i, n) {
var o = this._iv;
if (o) {
var r = o;
this._iv = t;
} else r = this._prevBlock;
for (var s = 0; s < n; s++) e[i + s] ^= r[s];
}
return e;
}(), d = (e.pad = {}).Pkcs7 = {
pad: function(t, e) {
for (var i = 4 * e, n = i - t.sigBytes % i, r = n << 24 | n << 16 | n << 8 | n, s = [], a = 0; a < n; a += 4) s.push(r);
var l = o.create(s, n);
t.concat(l);
},
unpad: function(t) {
var e = 255 & t.words[t.sigBytes - 1 >>> 2];
t.sigBytes -= e;
}
}, f = (i.BlockCipher = h.extend({
cfg: h.cfg.extend({
mode: p,
padding: d
}),
reset: function() {
h.reset.call(this);
var t = this.cfg, e = t.iv, i = t.mode;
if (this._xformMode == this._ENC_XFORM_MODE) var n = i.createEncryptor; else {
n = i.createDecryptor;
this._minBufferSize = 1;
}
if (this._mode && this._mode.__creator == n) this._mode.init(this, e && e.words); else {
this._mode = n.call(i, this, e && e.words);
this._mode.__creator = n;
}
},
_doProcessBlock: function(t, e) {
this._mode.processBlock(t, e);
},
_doFinalize: function() {
var t = this.cfg.padding;
if (this._xformMode == this._ENC_XFORM_MODE) {
t.pad(this._data, this.blockSize);
var e = this._process(!0);
} else {
e = this._process(!0);
t.unpad(e);
}
return e;
},
blockSize: 4
}), i.CipherParams = n.extend({
init: function(t) {
this.mixIn(t);
},
toString: function(t) {
return (t || this.formatter).stringify(this);
}
})), _ = (e.format = {}).OpenSSL = {
stringify: function(t) {
var e = t.ciphertext, i = t.salt;
if (i) var n = o.create([ 1398893684, 1701076831 ]).concat(i).concat(e); else n = e;
return n.toString(a);
},
parse: function(t) {
var e = a.parse(t), i = e.words;
if (1398893684 == i[0] && 1701076831 == i[1]) {
var n = o.create(i.slice(2, 4));
i.splice(0, 4);
e.sigBytes -= 16;
}
return f.create({
ciphertext: e,
salt: n
});
}
}, g = i.SerializableCipher = n.extend({
cfg: n.extend({
format: _
}),
encrypt: function(t, e, i, n) {
n = this.cfg.extend(n);
var o = t.createEncryptor(i, n), r = o.finalize(e), s = o.cfg;
return f.create({
ciphertext: r,
key: i,
iv: s.iv,
algorithm: t,
mode: s.mode,
padding: s.padding,
blockSize: t.blockSize,
formatter: n.format
});
},
decrypt: function(t, e, i, n) {
n = this.cfg.extend(n);
e = this._parse(e, n.format);
return t.createDecryptor(i, n).finalize(e.ciphertext);
},
_parse: function(t, e) {
return "string" == typeof t ? e.parse(t, this) : t;
}
}), y = (e.kdf = {}).OpenSSL = {
execute: function(t, e, i, n) {
n || (n = o.random(8));
var r = l.create({
keySize: e + i
}).compute(t, n), s = o.create(r.words.slice(e), 4 * i);
r.sigBytes = 4 * e;
return f.create({
key: r,
iv: s,
salt: n
});
}
}, m = i.PasswordBasedCipher = g.extend({
cfg: g.cfg.extend({
kdf: y
}),
encrypt: function(t, e, i, n) {
var o = (n = this.cfg.extend(n)).kdf.execute(i, t.keySize, t.ivSize);
n.iv = o.iv;
var r = g.encrypt.call(this, t, e, o.key, n);
r.mixIn(o);
return r;
},
decrypt: function(t, e, i, n) {
n = this.cfg.extend(n);
e = this._parse(e, n.format);
var o = n.kdf.execute(i, t.keySize, t.ivSize, e.salt);
n.iv = o.iv;
return g.decrypt.call(this, t, e, o.key, n);
}
});
}();

CryptoJS.mode.CFB = function() {
var t = CryptoJS.lib.BlockCipherMode.extend();
t.Encryptor = t.extend({
processBlock: function(t, i) {
var n = this._cipher, o = n.blockSize;
e.call(this, t, i, o, n);
this._prevBlock = t.slice(i, i + o);
}
});
t.Decryptor = t.extend({
processBlock: function(t, i) {
var n = this._cipher, o = n.blockSize, r = t.slice(i, i + o);
e.call(this, t, i, o, n);
this._prevBlock = r;
}
});
function e(t, e, i, n) {
var o = this._iv;
if (o) {
var r = o.slice(0);
this._iv = void 0;
} else r = this._prevBlock;
n.encryptBlock(r, 0);
for (var s = 0; s < i; s++) t[e + s] ^= r[s];
}
return t;
}();

CryptoJS.mode.ECB = function() {
var t = CryptoJS.lib.BlockCipherMode.extend();
t.Encryptor = t.extend({
processBlock: function(t, e) {
this._cipher.encryptBlock(t, e);
}
});
t.Decryptor = t.extend({
processBlock: function(t, e) {
this._cipher.decryptBlock(t, e);
}
});
return t;
}();

CryptoJS.pad.AnsiX923 = {
pad: function(t, e) {
var i = t.sigBytes, n = 4 * e, o = n - i % n, r = i + o - 1;
t.clamp();
t.words[r >>> 2] |= o << 24 - r % 4 * 8;
t.sigBytes += o;
},
unpad: function(t) {
var e = 255 & t.words[t.sigBytes - 1 >>> 2];
t.sigBytes -= e;
}
};

CryptoJS.pad.Iso10126 = {
pad: function(t, e) {
var i = 4 * e, n = i - t.sigBytes % i;
t.concat(CryptoJS.lib.WordArray.random(n - 1)).concat(CryptoJS.lib.WordArray.create([ n << 24 ], 1));
},
unpad: function(t) {
var e = 255 & t.words[t.sigBytes - 1 >>> 2];
t.sigBytes -= e;
}
};

CryptoJS.pad.Iso97971 = {
pad: function(t, e) {
t.concat(CryptoJS.lib.WordArray.create([ 2147483648 ], 1));
CryptoJS.pad.ZeroPadding.pad(t, e);
},
unpad: function(t) {
CryptoJS.pad.ZeroPadding.unpad(t);
t.sigBytes--;
}
};

CryptoJS.mode.OFB = function() {
var t = CryptoJS.lib.BlockCipherMode.extend(), e = t.Encryptor = t.extend({
processBlock: function(t, e) {
var i = this._cipher, n = i.blockSize, o = this._iv, r = this._keystream;
if (o) {
r = this._keystream = o.slice(0);
this._iv = void 0;
}
i.encryptBlock(r, 0);
for (var s = 0; s < n; s++) t[e + s] ^= r[s];
}
});
t.Decryptor = e;
return t;
}();

CryptoJS.pad.NoPadding = {
pad: function() {},
unpad: function() {}
};

(function() {
var t = CryptoJS, e = t.lib.CipherParams, i = t.enc.Hex;
t.format.Hex = {
stringify: function(t) {
return t.ciphertext.toString(i);
},
parse: function(t) {
var n = i.parse(t);
return e.create({
ciphertext: n
});
}
};
})();

(function() {
var t = CryptoJS, e = t.lib.BlockCipher, i = t.algo, n = [], o = [], r = [], s = [], a = [], l = [], h = [], c = [], u = [], p = [];
(function() {
for (var t = [], e = 0; e < 256; e++) t[e] = e < 128 ? e << 1 : e << 1 ^ 283;
var i = 0, d = 0;
for (e = 0; e < 256; e++) {
var f = d ^ d << 1 ^ d << 2 ^ d << 3 ^ d << 4;
f = f >>> 8 ^ 255 & f ^ 99;
n[i] = f;
o[f] = i;
var _ = t[i], g = t[_], y = t[g], m = 257 * t[f] ^ 16843008 * f;
r[i] = m << 24 | m >>> 8;
s[i] = m << 16 | m >>> 16;
a[i] = m << 8 | m >>> 24;
l[i] = m;
m = 16843009 * y ^ 65537 * g ^ 257 * _ ^ 16843008 * i;
h[f] = m << 24 | m >>> 8;
c[f] = m << 16 | m >>> 16;
u[f] = m << 8 | m >>> 24;
p[f] = m;
if (i) {
i = _ ^ t[t[t[y ^ _]]];
d ^= t[t[d]];
} else i = d = 1;
}
})();
var d = [ 0, 1, 2, 4, 8, 16, 32, 64, 128, 27, 54 ], f = i.AES = e.extend({
_doReset: function() {
if (!this._nRounds || this._keyPriorReset !== this._key) {
for (var t = this._keyPriorReset = this._key, e = t.words, i = t.sigBytes / 4, o = 4 * ((this._nRounds = i + 6) + 1), r = this._keySchedule = [], s = 0; s < o; s++) if (s < i) r[s] = e[s]; else {
var a = r[s - 1];
if (s % i) i > 6 && s % i == 4 && (a = n[a >>> 24] << 24 | n[a >>> 16 & 255] << 16 | n[a >>> 8 & 255] << 8 | n[255 & a]); else {
a = n[(a = a << 8 | a >>> 24) >>> 24] << 24 | n[a >>> 16 & 255] << 16 | n[a >>> 8 & 255] << 8 | n[255 & a];
a ^= d[s / i | 0] << 24;
}
r[s] = r[s - i] ^ a;
}
for (var l = this._invKeySchedule = [], f = 0; f < o; f++) {
s = o - f;
a = f % 4 ? r[s] : r[s - 4];
l[f] = f < 4 || s <= 4 ? a : h[n[a >>> 24]] ^ c[n[a >>> 16 & 255]] ^ u[n[a >>> 8 & 255]] ^ p[n[255 & a]];
}
}
},
encryptBlock: function(t, e) {
this._doCryptBlock(t, e, this._keySchedule, r, s, a, l, n);
},
decryptBlock: function(t, e) {
var i = t[e + 1];
t[e + 1] = t[e + 3];
t[e + 3] = i;
this._doCryptBlock(t, e, this._invKeySchedule, h, c, u, p, o);
i = t[e + 1];
t[e + 1] = t[e + 3];
t[e + 3] = i;
},
_doCryptBlock: function(t, e, i, n, o, r, s, a) {
for (var l = this._nRounds, h = t[e] ^ i[0], c = t[e + 1] ^ i[1], u = t[e + 2] ^ i[2], p = t[e + 3] ^ i[3], d = 4, f = 1; f < l; f++) {
var _ = n[h >>> 24] ^ o[c >>> 16 & 255] ^ r[u >>> 8 & 255] ^ s[255 & p] ^ i[d++], g = n[c >>> 24] ^ o[u >>> 16 & 255] ^ r[p >>> 8 & 255] ^ s[255 & h] ^ i[d++], y = n[u >>> 24] ^ o[p >>> 16 & 255] ^ r[h >>> 8 & 255] ^ s[255 & c] ^ i[d++], m = n[p >>> 24] ^ o[h >>> 16 & 255] ^ r[c >>> 8 & 255] ^ s[255 & u] ^ i[d++];
h = _;
c = g;
u = y;
p = m;
}
_ = (a[h >>> 24] << 24 | a[c >>> 16 & 255] << 16 | a[u >>> 8 & 255] << 8 | a[255 & p]) ^ i[d++], 
g = (a[c >>> 24] << 24 | a[u >>> 16 & 255] << 16 | a[p >>> 8 & 255] << 8 | a[255 & h]) ^ i[d++], 
y = (a[u >>> 24] << 24 | a[p >>> 16 & 255] << 16 | a[h >>> 8 & 255] << 8 | a[255 & c]) ^ i[d++], 
m = (a[p >>> 24] << 24 | a[h >>> 16 & 255] << 16 | a[c >>> 8 & 255] << 8 | a[255 & u]) ^ i[d++];
t[e] = _;
t[e + 1] = g;
t[e + 2] = y;
t[e + 3] = m;
},
keySize: 8
});
t.AES = e._createHelper(f);
})();

(function() {
var t = CryptoJS, e = t.lib, i = e.WordArray, n = e.BlockCipher, o = t.algo, r = [ 57, 49, 41, 33, 25, 17, 9, 1, 58, 50, 42, 34, 26, 18, 10, 2, 59, 51, 43, 35, 27, 19, 11, 3, 60, 52, 44, 36, 63, 55, 47, 39, 31, 23, 15, 7, 62, 54, 46, 38, 30, 22, 14, 6, 61, 53, 45, 37, 29, 21, 13, 5, 28, 20, 12, 4 ], s = [ 14, 17, 11, 24, 1, 5, 3, 28, 15, 6, 21, 10, 23, 19, 12, 4, 26, 8, 16, 7, 27, 20, 13, 2, 41, 52, 31, 37, 47, 55, 30, 40, 51, 45, 33, 48, 44, 49, 39, 56, 34, 53, 46, 42, 50, 36, 29, 32 ], a = [ 1, 2, 4, 6, 8, 10, 12, 14, 15, 17, 19, 21, 23, 25, 27, 28 ], l = [ {
0: 8421888,
268435456: 32768,
536870912: 8421378,
805306368: 2,
1073741824: 512,
1342177280: 8421890,
1610612736: 8389122,
1879048192: 8388608,
2147483648: 514,
2415919104: 8389120,
2684354560: 33280,
2952790016: 8421376,
3221225472: 32770,
3489660928: 8388610,
3758096384: 0,
4026531840: 33282,
134217728: 0,
402653184: 8421890,
671088640: 33282,
939524096: 32768,
1207959552: 8421888,
1476395008: 512,
1744830464: 8421378,
2013265920: 2,
2281701376: 8389120,
2550136832: 33280,
2818572288: 8421376,
3087007744: 8389122,
3355443200: 8388610,
3623878656: 32770,
3892314112: 514,
4160749568: 8388608,
1: 32768,
268435457: 2,
536870913: 8421888,
805306369: 8388608,
1073741825: 8421378,
1342177281: 33280,
1610612737: 512,
1879048193: 8389122,
2147483649: 8421890,
2415919105: 8421376,
2684354561: 8388610,
2952790017: 33282,
3221225473: 514,
3489660929: 8389120,
3758096385: 32770,
4026531841: 0,
134217729: 8421890,
402653185: 8421376,
671088641: 8388608,
939524097: 512,
1207959553: 32768,
1476395009: 8388610,
1744830465: 2,
2013265921: 33282,
2281701377: 32770,
2550136833: 8389122,
2818572289: 514,
3087007745: 8421888,
3355443201: 8389120,
3623878657: 0,
3892314113: 33280,
4160749569: 8421378
}, {
0: 1074282512,
16777216: 16384,
33554432: 524288,
50331648: 1074266128,
67108864: 1073741840,
83886080: 1074282496,
100663296: 1073758208,
117440512: 16,
134217728: 540672,
150994944: 1073758224,
167772160: 1073741824,
184549376: 540688,
201326592: 524304,
218103808: 0,
234881024: 16400,
251658240: 1074266112,
8388608: 1073758208,
25165824: 540688,
41943040: 16,
58720256: 1073758224,
75497472: 1074282512,
92274688: 1073741824,
109051904: 524288,
125829120: 1074266128,
142606336: 524304,
159383552: 0,
176160768: 16384,
192937984: 1074266112,
209715200: 1073741840,
226492416: 540672,
243269632: 1074282496,
260046848: 16400,
268435456: 0,
285212672: 1074266128,
301989888: 1073758224,
318767104: 1074282496,
335544320: 1074266112,
352321536: 16,
369098752: 540688,
385875968: 16384,
402653184: 16400,
419430400: 524288,
436207616: 524304,
452984832: 1073741840,
469762048: 540672,
486539264: 1073758208,
503316480: 1073741824,
520093696: 1074282512,
276824064: 540688,
293601280: 524288,
310378496: 1074266112,
327155712: 16384,
343932928: 1073758208,
360710144: 1074282512,
377487360: 16,
394264576: 1073741824,
411041792: 1074282496,
427819008: 1073741840,
444596224: 1073758224,
461373440: 524304,
478150656: 0,
494927872: 16400,
511705088: 1074266128,
528482304: 540672
}, {
0: 260,
1048576: 0,
2097152: 67109120,
3145728: 65796,
4194304: 65540,
5242880: 67108868,
6291456: 67174660,
7340032: 67174400,
8388608: 67108864,
9437184: 67174656,
10485760: 65792,
11534336: 67174404,
12582912: 67109124,
13631488: 65536,
14680064: 4,
15728640: 256,
524288: 67174656,
1572864: 67174404,
2621440: 0,
3670016: 67109120,
4718592: 67108868,
5767168: 65536,
6815744: 65540,
7864320: 260,
8912896: 4,
9961472: 256,
11010048: 67174400,
12058624: 65796,
13107200: 65792,
14155776: 67109124,
15204352: 67174660,
16252928: 67108864,
16777216: 67174656,
17825792: 65540,
18874368: 65536,
19922944: 67109120,
20971520: 256,
22020096: 67174660,
23068672: 67108868,
24117248: 0,
25165824: 67109124,
26214400: 67108864,
27262976: 4,
28311552: 65792,
29360128: 67174400,
30408704: 260,
31457280: 65796,
32505856: 67174404,
17301504: 67108864,
18350080: 260,
19398656: 67174656,
20447232: 0,
21495808: 65540,
22544384: 67109120,
23592960: 256,
24641536: 67174404,
25690112: 65536,
26738688: 67174660,
27787264: 65796,
28835840: 67108868,
29884416: 67109124,
30932992: 67174400,
31981568: 4,
33030144: 65792
}, {
0: 2151682048,
65536: 2147487808,
131072: 4198464,
196608: 2151677952,
262144: 0,
327680: 4198400,
393216: 2147483712,
458752: 4194368,
524288: 2147483648,
589824: 4194304,
655360: 64,
720896: 2147487744,
786432: 2151678016,
851968: 4160,
917504: 4096,
983040: 2151682112,
32768: 2147487808,
98304: 64,
163840: 2151678016,
229376: 2147487744,
294912: 4198400,
360448: 2151682112,
425984: 0,
491520: 2151677952,
557056: 4096,
622592: 2151682048,
688128: 4194304,
753664: 4160,
819200: 2147483648,
884736: 4194368,
950272: 4198464,
1015808: 2147483712,
1048576: 4194368,
1114112: 4198400,
1179648: 2147483712,
1245184: 0,
1310720: 4160,
1376256: 2151678016,
1441792: 2151682048,
1507328: 2147487808,
1572864: 2151682112,
1638400: 2147483648,
1703936: 2151677952,
1769472: 4198464,
1835008: 2147487744,
1900544: 4194304,
1966080: 64,
2031616: 4096,
1081344: 2151677952,
1146880: 2151682112,
1212416: 0,
1277952: 4198400,
1343488: 4194368,
1409024: 2147483648,
1474560: 2147487808,
1540096: 64,
1605632: 2147483712,
1671168: 4096,
1736704: 2147487744,
1802240: 2151678016,
1867776: 4160,
1933312: 2151682048,
1998848: 4194304,
2064384: 4198464
}, {
0: 128,
4096: 17039360,
8192: 262144,
12288: 536870912,
16384: 537133184,
20480: 16777344,
24576: 553648256,
28672: 262272,
32768: 16777216,
36864: 537133056,
40960: 536871040,
45056: 553910400,
49152: 553910272,
53248: 0,
57344: 17039488,
61440: 553648128,
2048: 17039488,
6144: 553648256,
10240: 128,
14336: 17039360,
18432: 262144,
22528: 537133184,
26624: 553910272,
30720: 536870912,
34816: 537133056,
38912: 0,
43008: 553910400,
47104: 16777344,
51200: 536871040,
55296: 553648128,
59392: 16777216,
63488: 262272,
65536: 262144,
69632: 128,
73728: 536870912,
77824: 553648256,
81920: 16777344,
86016: 553910272,
90112: 537133184,
94208: 16777216,
98304: 553910400,
102400: 553648128,
106496: 17039360,
110592: 537133056,
114688: 262272,
118784: 536871040,
122880: 0,
126976: 17039488,
67584: 553648256,
71680: 16777216,
75776: 17039360,
79872: 537133184,
83968: 536870912,
88064: 17039488,
92160: 128,
96256: 553910272,
100352: 262272,
104448: 553910400,
108544: 0,
112640: 553648128,
116736: 16777344,
120832: 262144,
124928: 537133056,
129024: 536871040
}, {
0: 268435464,
256: 8192,
512: 270532608,
768: 270540808,
1024: 268443648,
1280: 2097152,
1536: 2097160,
1792: 268435456,
2048: 0,
2304: 268443656,
2560: 2105344,
2816: 8,
3072: 270532616,
3328: 2105352,
3584: 8200,
3840: 270540800,
128: 270532608,
384: 270540808,
640: 8,
896: 2097152,
1152: 2105352,
1408: 268435464,
1664: 268443648,
1920: 8200,
2176: 2097160,
2432: 8192,
2688: 268443656,
2944: 270532616,
3200: 0,
3456: 270540800,
3712: 2105344,
3968: 268435456,
4096: 268443648,
4352: 270532616,
4608: 270540808,
4864: 8200,
5120: 2097152,
5376: 268435456,
5632: 268435464,
5888: 2105344,
6144: 2105352,
6400: 0,
6656: 8,
6912: 270532608,
7168: 8192,
7424: 268443656,
7680: 270540800,
7936: 2097160,
4224: 8,
4480: 2105344,
4736: 2097152,
4992: 268435464,
5248: 268443648,
5504: 8200,
5760: 270540808,
6016: 270532608,
6272: 270540800,
6528: 270532616,
6784: 8192,
7040: 2105352,
7296: 2097160,
7552: 0,
7808: 268435456,
8064: 268443656
}, {
0: 1048576,
16: 33555457,
32: 1024,
48: 1049601,
64: 34604033,
80: 0,
96: 1,
112: 34603009,
128: 33555456,
144: 1048577,
160: 33554433,
176: 34604032,
192: 34603008,
208: 1025,
224: 1049600,
240: 33554432,
8: 34603009,
24: 0,
40: 33555457,
56: 34604032,
72: 1048576,
88: 33554433,
104: 33554432,
120: 1025,
136: 1049601,
152: 33555456,
168: 34603008,
184: 1048577,
200: 1024,
216: 34604033,
232: 1,
248: 1049600,
256: 33554432,
272: 1048576,
288: 33555457,
304: 34603009,
320: 1048577,
336: 33555456,
352: 34604032,
368: 1049601,
384: 1025,
400: 34604033,
416: 1049600,
432: 1,
448: 0,
464: 34603008,
480: 33554433,
496: 1024,
264: 1049600,
280: 33555457,
296: 34603009,
312: 1,
328: 33554432,
344: 1048576,
360: 1025,
376: 34604032,
392: 33554433,
408: 34603008,
424: 0,
440: 34604033,
456: 1049601,
472: 1024,
488: 33555456,
504: 1048577
}, {
0: 134219808,
1: 131072,
2: 134217728,
3: 32,
4: 131104,
5: 134350880,
6: 134350848,
7: 2048,
8: 134348800,
9: 134219776,
10: 133120,
11: 134348832,
12: 2080,
13: 0,
14: 134217760,
15: 133152,
2147483648: 2048,
2147483649: 134350880,
2147483650: 134219808,
2147483651: 134217728,
2147483652: 134348800,
2147483653: 133120,
2147483654: 133152,
2147483655: 32,
2147483656: 134217760,
2147483657: 2080,
2147483658: 131104,
2147483659: 134350848,
2147483660: 0,
2147483661: 134348832,
2147483662: 134219776,
2147483663: 131072,
16: 133152,
17: 134350848,
18: 32,
19: 2048,
20: 134219776,
21: 134217760,
22: 134348832,
23: 131072,
24: 0,
25: 131104,
26: 134348800,
27: 134219808,
28: 134350880,
29: 133120,
30: 2080,
31: 134217728,
2147483664: 131072,
2147483665: 2048,
2147483666: 134348832,
2147483667: 133152,
2147483668: 32,
2147483669: 134348800,
2147483670: 134217728,
2147483671: 134219808,
2147483672: 134350880,
2147483673: 134217760,
2147483674: 134219776,
2147483675: 0,
2147483676: 133120,
2147483677: 2080,
2147483678: 131104,
2147483679: 134350848
} ], h = [ 4160749569, 528482304, 33030144, 2064384, 129024, 8064, 504, 2147483679 ], c = o.DES = n.extend({
_doReset: function() {
for (var t = this._key.words, e = [], i = 0; i < 56; i++) {
var n = r[i] - 1;
e[i] = t[n >>> 5] >>> 31 - n % 32 & 1;
}
for (var o = this._subKeys = [], l = 0; l < 16; l++) {
var h = o[l] = [], c = a[l];
for (i = 0; i < 24; i++) {
h[i / 6 | 0] |= e[(s[i] - 1 + c) % 28] << 31 - i % 6;
h[4 + (i / 6 | 0)] |= e[28 + (s[i + 24] - 1 + c) % 28] << 31 - i % 6;
}
h[0] = h[0] << 1 | h[0] >>> 31;
for (i = 1; i < 7; i++) h[i] = h[i] >>> 4 * (i - 1) + 3;
h[7] = h[7] << 5 | h[7] >>> 27;
}
var u = this._invSubKeys = [];
for (i = 0; i < 16; i++) u[i] = o[15 - i];
},
encryptBlock: function(t, e) {
this._doCryptBlock(t, e, this._subKeys);
},
decryptBlock: function(t, e) {
this._doCryptBlock(t, e, this._invSubKeys);
},
_doCryptBlock: function(t, e, i) {
this._lBlock = t[e];
this._rBlock = t[e + 1];
u.call(this, 4, 252645135);
u.call(this, 16, 65535);
p.call(this, 2, 858993459);
p.call(this, 8, 16711935);
u.call(this, 1, 1431655765);
for (var n = 0; n < 16; n++) {
for (var o = i[n], r = this._lBlock, s = this._rBlock, a = 0, c = 0; c < 8; c++) a |= l[c][((s ^ o[c]) & h[c]) >>> 0];
this._lBlock = s;
this._rBlock = r ^ a;
}
var d = this._lBlock;
this._lBlock = this._rBlock;
this._rBlock = d;
u.call(this, 1, 1431655765);
p.call(this, 8, 16711935);
p.call(this, 2, 858993459);
u.call(this, 16, 65535);
u.call(this, 4, 252645135);
t[e] = this._lBlock;
t[e + 1] = this._rBlock;
},
keySize: 2,
ivSize: 2,
blockSize: 2
});
function u(t, e) {
var i = (this._lBlock >>> t ^ this._rBlock) & e;
this._rBlock ^= i;
this._lBlock ^= i << t;
}
function p(t, e) {
var i = (this._rBlock >>> t ^ this._lBlock) & e;
this._lBlock ^= i;
this._rBlock ^= i << t;
}
t.DES = n._createHelper(c);
var d = o.TripleDES = n.extend({
_doReset: function() {
var t = this._key.words;
this._des1 = c.createEncryptor(i.create(t.slice(0, 2)));
this._des2 = c.createEncryptor(i.create(t.slice(2, 4)));
this._des3 = c.createEncryptor(i.create(t.slice(4, 6)));
},
encryptBlock: function(t, e) {
this._des1.encryptBlock(t, e);
this._des2.decryptBlock(t, e);
this._des3.encryptBlock(t, e);
},
decryptBlock: function(t, e) {
this._des3.decryptBlock(t, e);
this._des2.encryptBlock(t, e);
this._des1.decryptBlock(t, e);
},
keySize: 6,
ivSize: 2,
blockSize: 2
});
t.TripleDES = n._createHelper(d);
})();

(function() {
var t = CryptoJS, e = t.lib.StreamCipher, i = t.algo, n = i.RC4 = e.extend({
_doReset: function() {
for (var t = this._key, e = t.words, i = t.sigBytes, n = this._S = [], o = 0; o < 256; o++) n[o] = o;
o = 0;
for (var r = 0; o < 256; o++) {
var s = o % i, a = e[s >>> 2] >>> 24 - s % 4 * 8 & 255;
r = (r + n[o] + a) % 256;
var l = n[o];
n[o] = n[r];
n[r] = l;
}
this._i = this._j = 0;
},
_doProcessBlock: function(t, e) {
t[e] ^= o.call(this);
},
keySize: 8,
ivSize: 0
});
function o() {
for (var t = this._S, e = this._i, i = this._j, n = 0, o = 0; o < 4; o++) {
i = (i + t[e = (e + 1) % 256]) % 256;
var r = t[e];
t[e] = t[i];
t[i] = r;
n |= t[(t[e] + t[i]) % 256] << 24 - 8 * o;
}
this._i = e;
this._j = i;
return n;
}
t.RC4 = e._createHelper(n);
var r = i.RC4Drop = n.extend({
cfg: n.cfg.extend({
drop: 192
}),
_doReset: function() {
n._doReset.call(this);
for (var t = this.cfg.drop; t > 0; t--) o.call(this);
}
});
t.RC4Drop = e._createHelper(r);
})();

CryptoJS.mode.CTRGladman = function() {
var t = CryptoJS.lib.BlockCipherMode.extend();
function e(t) {
if (255 == (t >> 24 & 255)) {
var e = t >> 16 & 255, i = t >> 8 & 255, n = 255 & t;
if (255 === e) {
e = 0;
if (255 === i) {
i = 0;
255 === n ? n = 0 : ++n;
} else ++i;
} else ++e;
t = 0;
t += e << 16;
t += i << 8;
t += n;
} else t += 1 << 24;
return t;
}
function i(t) {
0 === (t[0] = e(t[0])) && (t[1] = e(t[1]));
return t;
}
var n = t.Encryptor = t.extend({
processBlock: function(t, e) {
var n = this._cipher, o = n.blockSize, r = this._iv, s = this._counter;
if (r) {
s = this._counter = r.slice(0);
this._iv = void 0;
}
i(s);
var a = s.slice(0);
n.encryptBlock(a, 0);
for (var l = 0; l < o; l++) t[e + l] ^= a[l];
}
});
t.Decryptor = n;
return t;
}();

(function() {
var t = CryptoJS, e = t.lib.StreamCipher, i = t.algo, n = [], o = [], r = [], s = i.Rabbit = e.extend({
_doReset: function() {
for (var t = this._key.words, e = this.cfg.iv, i = 0; i < 4; i++) t[i] = 16711935 & (t[i] << 8 | t[i] >>> 24) | 4278255360 & (t[i] << 24 | t[i] >>> 8);
var n = this._X = [ t[0], t[3] << 16 | t[2] >>> 16, t[1], t[0] << 16 | t[3] >>> 16, t[2], t[1] << 16 | t[0] >>> 16, t[3], t[2] << 16 | t[1] >>> 16 ], o = this._C = [ t[2] << 16 | t[2] >>> 16, 4294901760 & t[0] | 65535 & t[1], t[3] << 16 | t[3] >>> 16, 4294901760 & t[1] | 65535 & t[2], t[0] << 16 | t[0] >>> 16, 4294901760 & t[2] | 65535 & t[3], t[1] << 16 | t[1] >>> 16, 4294901760 & t[3] | 65535 & t[0] ];
this._b = 0;
for (i = 0; i < 4; i++) a.call(this);
for (i = 0; i < 8; i++) o[i] ^= n[i + 4 & 7];
if (e) {
var r = e.words, s = r[0], l = r[1], h = 16711935 & (s << 8 | s >>> 24) | 4278255360 & (s << 24 | s >>> 8), c = 16711935 & (l << 8 | l >>> 24) | 4278255360 & (l << 24 | l >>> 8), u = h >>> 16 | 4294901760 & c, p = c << 16 | 65535 & h;
o[0] ^= h;
o[1] ^= u;
o[2] ^= c;
o[3] ^= p;
o[4] ^= h;
o[5] ^= u;
o[6] ^= c;
o[7] ^= p;
for (i = 0; i < 4; i++) a.call(this);
}
},
_doProcessBlock: function(t, e) {
var i = this._X;
a.call(this);
n[0] = i[0] ^ i[5] >>> 16 ^ i[3] << 16;
n[1] = i[2] ^ i[7] >>> 16 ^ i[5] << 16;
n[2] = i[4] ^ i[1] >>> 16 ^ i[7] << 16;
n[3] = i[6] ^ i[3] >>> 16 ^ i[1] << 16;
for (var o = 0; o < 4; o++) {
n[o] = 16711935 & (n[o] << 8 | n[o] >>> 24) | 4278255360 & (n[o] << 24 | n[o] >>> 8);
t[e + o] ^= n[o];
}
},
blockSize: 4,
ivSize: 2
});
function a() {
for (var t = this._X, e = this._C, i = 0; i < 8; i++) o[i] = e[i];
e[0] = e[0] + 1295307597 + this._b | 0;
e[1] = e[1] + 3545052371 + (e[0] >>> 0 < o[0] >>> 0 ? 1 : 0) | 0;
e[2] = e[2] + 886263092 + (e[1] >>> 0 < o[1] >>> 0 ? 1 : 0) | 0;
e[3] = e[3] + 1295307597 + (e[2] >>> 0 < o[2] >>> 0 ? 1 : 0) | 0;
e[4] = e[4] + 3545052371 + (e[3] >>> 0 < o[3] >>> 0 ? 1 : 0) | 0;
e[5] = e[5] + 886263092 + (e[4] >>> 0 < o[4] >>> 0 ? 1 : 0) | 0;
e[6] = e[6] + 1295307597 + (e[5] >>> 0 < o[5] >>> 0 ? 1 : 0) | 0;
e[7] = e[7] + 3545052371 + (e[6] >>> 0 < o[6] >>> 0 ? 1 : 0) | 0;
this._b = e[7] >>> 0 < o[7] >>> 0 ? 1 : 0;
for (i = 0; i < 8; i++) {
var n = t[i] + e[i], s = 65535 & n, a = n >>> 16, l = ((s * s >>> 17) + s * a >>> 15) + a * a, h = ((4294901760 & n) * n | 0) + ((65535 & n) * n | 0);
r[i] = l ^ h;
}
t[0] = r[0] + (r[7] << 16 | r[7] >>> 16) + (r[6] << 16 | r[6] >>> 16) | 0;
t[1] = r[1] + (r[0] << 8 | r[0] >>> 24) + r[7] | 0;
t[2] = r[2] + (r[1] << 16 | r[1] >>> 16) + (r[0] << 16 | r[0] >>> 16) | 0;
t[3] = r[3] + (r[2] << 8 | r[2] >>> 24) + r[1] | 0;
t[4] = r[4] + (r[3] << 16 | r[3] >>> 16) + (r[2] << 16 | r[2] >>> 16) | 0;
t[5] = r[5] + (r[4] << 8 | r[4] >>> 24) + r[3] | 0;
t[6] = r[6] + (r[5] << 16 | r[5] >>> 16) + (r[4] << 16 | r[4] >>> 16) | 0;
t[7] = r[7] + (r[6] << 8 | r[6] >>> 24) + r[5] | 0;
}
t.Rabbit = e._createHelper(s);
})();

CryptoJS.mode.CTR = function() {
var t = CryptoJS.lib.BlockCipherMode.extend(), e = t.Encryptor = t.extend({
processBlock: function(t, e) {
var i = this._cipher, n = i.blockSize, o = this._iv, r = this._counter;
if (o) {
r = this._counter = o.slice(0);
this._iv = void 0;
}
var s = r.slice(0);
i.encryptBlock(s, 0);
r[n - 1] = r[n - 1] + 1 | 0;
for (var a = 0; a < n; a++) t[e + a] ^= s[a];
}
});
t.Decryptor = e;
return t;
}();

(function() {
var t = CryptoJS, e = t.lib.StreamCipher, i = t.algo, n = [], o = [], r = [], s = i.RabbitLegacy = e.extend({
_doReset: function() {
var t = this._key.words, e = this.cfg.iv, i = this._X = [ t[0], t[3] << 16 | t[2] >>> 16, t[1], t[0] << 16 | t[3] >>> 16, t[2], t[1] << 16 | t[0] >>> 16, t[3], t[2] << 16 | t[1] >>> 16 ], n = this._C = [ t[2] << 16 | t[2] >>> 16, 4294901760 & t[0] | 65535 & t[1], t[3] << 16 | t[3] >>> 16, 4294901760 & t[1] | 65535 & t[2], t[0] << 16 | t[0] >>> 16, 4294901760 & t[2] | 65535 & t[3], t[1] << 16 | t[1] >>> 16, 4294901760 & t[3] | 65535 & t[0] ];
this._b = 0;
for (var o = 0; o < 4; o++) a.call(this);
for (o = 0; o < 8; o++) n[o] ^= i[o + 4 & 7];
if (e) {
var r = e.words, s = r[0], l = r[1], h = 16711935 & (s << 8 | s >>> 24) | 4278255360 & (s << 24 | s >>> 8), c = 16711935 & (l << 8 | l >>> 24) | 4278255360 & (l << 24 | l >>> 8), u = h >>> 16 | 4294901760 & c, p = c << 16 | 65535 & h;
n[0] ^= h;
n[1] ^= u;
n[2] ^= c;
n[3] ^= p;
n[4] ^= h;
n[5] ^= u;
n[6] ^= c;
n[7] ^= p;
for (o = 0; o < 4; o++) a.call(this);
}
},
_doProcessBlock: function(t, e) {
var i = this._X;
a.call(this);
n[0] = i[0] ^ i[5] >>> 16 ^ i[3] << 16;
n[1] = i[2] ^ i[7] >>> 16 ^ i[5] << 16;
n[2] = i[4] ^ i[1] >>> 16 ^ i[7] << 16;
n[3] = i[6] ^ i[3] >>> 16 ^ i[1] << 16;
for (var o = 0; o < 4; o++) {
n[o] = 16711935 & (n[o] << 8 | n[o] >>> 24) | 4278255360 & (n[o] << 24 | n[o] >>> 8);
t[e + o] ^= n[o];
}
},
blockSize: 4,
ivSize: 2
});
function a() {
for (var t = this._X, e = this._C, i = 0; i < 8; i++) o[i] = e[i];
e[0] = e[0] + 1295307597 + this._b | 0;
e[1] = e[1] + 3545052371 + (e[0] >>> 0 < o[0] >>> 0 ? 1 : 0) | 0;
e[2] = e[2] + 886263092 + (e[1] >>> 0 < o[1] >>> 0 ? 1 : 0) | 0;
e[3] = e[3] + 1295307597 + (e[2] >>> 0 < o[2] >>> 0 ? 1 : 0) | 0;
e[4] = e[4] + 3545052371 + (e[3] >>> 0 < o[3] >>> 0 ? 1 : 0) | 0;
e[5] = e[5] + 886263092 + (e[4] >>> 0 < o[4] >>> 0 ? 1 : 0) | 0;
e[6] = e[6] + 1295307597 + (e[5] >>> 0 < o[5] >>> 0 ? 1 : 0) | 0;
e[7] = e[7] + 3545052371 + (e[6] >>> 0 < o[6] >>> 0 ? 1 : 0) | 0;
this._b = e[7] >>> 0 < o[7] >>> 0 ? 1 : 0;
for (i = 0; i < 8; i++) {
var n = t[i] + e[i], s = 65535 & n, a = n >>> 16, l = ((s * s >>> 17) + s * a >>> 15) + a * a, h = ((4294901760 & n) * n | 0) + ((65535 & n) * n | 0);
r[i] = l ^ h;
}
t[0] = r[0] + (r[7] << 16 | r[7] >>> 16) + (r[6] << 16 | r[6] >>> 16) | 0;
t[1] = r[1] + (r[0] << 8 | r[0] >>> 24) + r[7] | 0;
t[2] = r[2] + (r[1] << 16 | r[1] >>> 16) + (r[0] << 16 | r[0] >>> 16) | 0;
t[3] = r[3] + (r[2] << 8 | r[2] >>> 24) + r[1] | 0;
t[4] = r[4] + (r[3] << 16 | r[3] >>> 16) + (r[2] << 16 | r[2] >>> 16) | 0;
t[5] = r[5] + (r[4] << 8 | r[4] >>> 24) + r[3] | 0;
t[6] = r[6] + (r[5] << 16 | r[5] >>> 16) + (r[4] << 16 | r[4] >>> 16) | 0;
t[7] = r[7] + (r[6] << 8 | r[6] >>> 24) + r[5] | 0;
}
t.RabbitLegacy = e._createHelper(s);
})();

CryptoJS.pad.ZeroPadding = {
pad: function(t, e) {
var i = 4 * e;
t.clamp();
t.sigBytes += i - (t.sigBytes % i || i);
},
unpad: function(t) {
for (var e = t.words, i = t.sigBytes - 1; !(e[i >>> 2] >>> 24 - i % 4 * 8 & 255); ) i--;
t.sigBytes = i + 1;
}
};

CryptoJS.enc.u8array = {
stringify: function(t) {
for (var e = t.words, i = t.sigBytes, n = new Uint8Array(i), o = 0; o < i; o++) {
var r = e[o >>> 2] >>> 24 - o % 4 * 8 & 255;
n[o] = r;
}
return n;
},
parse: function(t) {
for (var e = t.length, i = [], n = 0; n < e; n++) i[n >>> 2] |= (255 & t[n]) << 24 - n % 4 * 8;
return CryptoJS.lib.WordArray.create(i, e);
}
};

window.CryptoJS = CryptoJS;

CryptoJS.enc.u8array = {
stringify: function(t) {
for (var e = t.words, i = t.sigBytes, n = new Uint8Array(i), o = 0; o < i; o++) {
var r = e[o >>> 2] >>> 24 - o % 4 * 8 & 255;
n[o] = r;
}
return n;
},
parse: function(t) {
for (var e = t.length, i = [], n = 0; n < e; n++) i[n >>> 2] |= (255 & t[n]) << 24 - n % 4 * 8;
return CryptoJS.lib.WordArray.create(i, e);
}
};

(function() {
"use strict";
window["encoding-indexes"] = {
gb18030: [ 19970, 19972, 19973, 19974, 19983, 19986, 19991, 19999, 2e4, 20001, 20003, 20006, 20009, 20014, 20015, 20017, 20019, 20021, 20023, 20028, 20032, 20033, 20034, 20036, 20038, 20042, 20049, 20053, 20055, 20058, 20059, 20066, 20067, 20068, 20069, 20071, 20072, 20074, 20075, 20076, 20077, 20078, 20079, 20082, 20084, 20085, 20086, 20087, 20088, 20089, 20090, 20091, 20092, 20093, 20095, 20096, 20097, 20098, 20099, 20100, 20101, 20103, 20106, 20112, 20118, 20119, 20121, 20124, 20125, 20126, 20131, 20138, 20143, 20144, 20145, 20148, 20150, 20151, 20152, 20153, 20156, 20157, 20158, 20168, 20172, 20175, 20176, 20178, 20186, 20187, 20188, 20192, 20194, 20198, 20199, 20201, 20205, 20206, 20207, 20209, 20212, 20216, 20217, 20218, 20220, 20222, 20224, 20226, 20227, 20228, 20229, 20230, 20231, 20232, 20235, 20236, 20242, 20243, 20244, 20245, 20246, 20252, 20253, 20257, 20259, 20264, 20265, 20268, 20269, 20270, 20273, 20275, 20277, 20279, 20281, 20283, 20286, 20287, 20288, 20289, 20290, 20292, 20293, 20295, 20296, 20297, 20298, 20299, 20300, 20306, 20308, 20310, 20321, 20322, 20326, 20328, 20330, 20331, 20333, 20334, 20337, 20338, 20341, 20343, 20344, 20345, 20346, 20349, 20352, 20353, 20354, 20357, 20358, 20359, 20362, 20364, 20366, 20368, 20370, 20371, 20373, 20374, 20376, 20377, 20378, 20380, 20382, 20383, 20385, 20386, 20388, 20395, 20397, 20400, 20401, 20402, 20403, 20404, 20406, 20407, 20408, 20409, 20410, 20411, 20412, 20413, 20414, 20416, 20417, 20418, 20422, 20423, 20424, 20425, 20427, 20428, 20429, 20434, 20435, 20436, 20437, 20438, 20441, 20443, 20448, 20450, 20452, 20453, 20455, 20459, 20460, 20464, 20466, 20468, 20469, 20470, 20471, 20473, 20475, 20476, 20477, 20479, 20480, 20481, 20482, 20483, 20484, 20485, 20486, 20487, 20488, 20489, 20490, 20491, 20494, 20496, 20497, 20499, 20501, 20502, 20503, 20507, 20509, 20510, 20512, 20514, 20515, 20516, 20519, 20523, 20527, 20528, 20529, 20530, 20531, 20532, 20533, 20534, 20535, 20536, 20537, 20539, 20541, 20543, 20544, 20545, 20546, 20548, 20549, 20550, 20553, 20554, 20555, 20557, 20560, 20561, 20562, 20563, 20564, 20566, 20567, 20568, 20569, 20571, 20573, 20574, 20575, 20576, 20577, 20578, 20579, 20580, 20582, 20583, 20584, 20585, 20586, 20587, 20589, 20590, 20591, 20592, 20593, 20594, 20595, 20596, 20597, 20600, 20601, 20602, 20604, 20605, 20609, 20610, 20611, 20612, 20614, 20615, 20617, 20618, 20619, 20620, 20622, 20623, 20624, 20625, 20626, 20627, 20628, 20629, 20630, 20631, 20632, 20633, 20634, 20635, 20636, 20637, 20638, 20639, 20640, 20641, 20642, 20644, 20646, 20650, 20651, 20653, 20654, 20655, 20656, 20657, 20659, 20660, 20661, 20662, 20663, 20664, 20665, 20668, 20669, 20670, 20671, 20672, 20673, 20674, 20675, 20676, 20677, 20678, 20679, 20680, 20681, 20682, 20683, 20684, 20685, 20686, 20688, 20689, 20690, 20691, 20692, 20693, 20695, 20696, 20697, 20699, 20700, 20701, 20702, 20703, 20704, 20705, 20706, 20707, 20708, 20709, 20712, 20713, 20714, 20715, 20719, 20720, 20721, 20722, 20724, 20726, 20727, 20728, 20729, 20730, 20732, 20733, 20734, 20735, 20736, 20737, 20738, 20739, 20740, 20741, 20744, 20745, 20746, 20748, 20749, 20750, 20751, 20752, 20753, 20755, 20756, 20757, 20758, 20759, 20760, 20761, 20762, 20763, 20764, 20765, 20766, 20767, 20768, 20770, 20771, 20772, 20773, 20774, 20775, 20776, 20777, 20778, 20779, 20780, 20781, 20782, 20783, 20784, 20785, 20786, 20787, 20788, 20789, 20790, 20791, 20792, 20793, 20794, 20795, 20796, 20797, 20798, 20802, 20807, 20810, 20812, 20814, 20815, 20816, 20818, 20819, 20823, 20824, 20825, 20827, 20829, 20830, 20831, 20832, 20833, 20835, 20836, 20838, 20839, 20841, 20842, 20847, 20850, 20858, 20862, 20863, 20867, 20868, 20870, 20871, 20874, 20875, 20878, 20879, 20880, 20881, 20883, 20884, 20888, 20890, 20893, 20894, 20895, 20897, 20899, 20902, 20903, 20904, 20905, 20906, 20909, 20910, 20916, 20920, 20921, 20922, 20926, 20927, 20929, 20930, 20931, 20933, 20936, 20938, 20941, 20942, 20944, 20946, 20947, 20948, 20949, 20950, 20951, 20952, 20953, 20954, 20956, 20958, 20959, 20962, 20963, 20965, 20966, 20967, 20968, 20969, 20970, 20972, 20974, 20977, 20978, 20980, 20983, 20990, 20996, 20997, 21001, 21003, 21004, 21007, 21008, 21011, 21012, 21013, 21020, 21022, 21023, 21025, 21026, 21027, 21029, 21030, 21031, 21034, 21036, 21039, 21041, 21042, 21044, 21045, 21052, 21054, 21060, 21061, 21062, 21063, 21064, 21065, 21067, 21070, 21071, 21074, 21075, 21077, 21079, 21080, 21081, 21082, 21083, 21085, 21087, 21088, 21090, 21091, 21092, 21094, 21096, 21099, 21100, 21101, 21102, 21104, 21105, 21107, 21108, 21109, 21110, 21111, 21112, 21113, 21114, 21115, 21116, 21118, 21120, 21123, 21124, 21125, 21126, 21127, 21129, 21130, 21131, 21132, 21133, 21134, 21135, 21137, 21138, 21140, 21141, 21142, 21143, 21144, 21145, 21146, 21148, 21156, 21157, 21158, 21159, 21166, 21167, 21168, 21172, 21173, 21174, 21175, 21176, 21177, 21178, 21179, 21180, 21181, 21184, 21185, 21186, 21188, 21189, 21190, 21192, 21194, 21196, 21197, 21198, 21199, 21201, 21203, 21204, 21205, 21207, 21209, 21210, 21211, 21212, 21213, 21214, 21216, 21217, 21218, 21219, 21221, 21222, 21223, 21224, 21225, 21226, 21227, 21228, 21229, 21230, 21231, 21233, 21234, 21235, 21236, 21237, 21238, 21239, 21240, 21243, 21244, 21245, 21249, 21250, 21251, 21252, 21255, 21257, 21258, 21259, 21260, 21262, 21265, 21266, 21267, 21268, 21272, 21275, 21276, 21278, 21279, 21282, 21284, 21285, 21287, 21288, 21289, 21291, 21292, 21293, 21295, 21296, 21297, 21298, 21299, 21300, 21301, 21302, 21303, 21304, 21308, 21309, 21312, 21314, 21316, 21318, 21323, 21324, 21325, 21328, 21332, 21336, 21337, 21339, 21341, 21349, 21352, 21354, 21356, 21357, 21362, 21366, 21369, 21371, 21372, 21373, 21374, 21376, 21377, 21379, 21383, 21384, 21386, 21390, 21391, 21392, 21393, 21394, 21395, 21396, 21398, 21399, 21401, 21403, 21404, 21406, 21408, 21409, 21412, 21415, 21418, 21419, 21420, 21421, 21423, 21424, 21425, 21426, 21427, 21428, 21429, 21431, 21432, 21433, 21434, 21436, 21437, 21438, 21440, 21443, 21444, 21445, 21446, 21447, 21454, 21455, 21456, 21458, 21459, 21461, 21466, 21468, 21469, 21470, 21473, 21474, 21479, 21492, 21498, 21502, 21503, 21504, 21506, 21509, 21511, 21515, 21524, 21528, 21529, 21530, 21532, 21538, 21540, 21541, 21546, 21552, 21555, 21558, 21559, 21562, 21565, 21567, 21569, 21570, 21572, 21573, 21575, 21577, 21580, 21581, 21582, 21583, 21585, 21594, 21597, 21598, 21599, 21600, 21601, 21603, 21605, 21607, 21609, 21610, 21611, 21612, 21613, 21614, 21615, 21616, 21620, 21625, 21626, 21630, 21631, 21633, 21635, 21637, 21639, 21640, 21641, 21642, 21645, 21649, 21651, 21655, 21656, 21660, 21662, 21663, 21664, 21665, 21666, 21669, 21678, 21680, 21682, 21685, 21686, 21687, 21689, 21690, 21692, 21694, 21699, 21701, 21706, 21707, 21718, 21720, 21723, 21728, 21729, 21730, 21731, 21732, 21739, 21740, 21743, 21744, 21745, 21748, 21749, 21750, 21751, 21752, 21753, 21755, 21758, 21760, 21762, 21763, 21764, 21765, 21768, 21770, 21771, 21772, 21773, 21774, 21778, 21779, 21781, 21782, 21783, 21784, 21785, 21786, 21788, 21789, 21790, 21791, 21793, 21797, 21798, 21800, 21801, 21803, 21805, 21810, 21812, 21813, 21814, 21816, 21817, 21818, 21819, 21821, 21824, 21826, 21829, 21831, 21832, 21835, 21836, 21837, 21838, 21839, 21841, 21842, 21843, 21844, 21847, 21848, 21849, 21850, 21851, 21853, 21854, 21855, 21856, 21858, 21859, 21864, 21865, 21867, 21871, 21872, 21873, 21874, 21875, 21876, 21881, 21882, 21885, 21887, 21893, 21894, 21900, 21901, 21902, 21904, 21906, 21907, 21909, 21910, 21911, 21914, 21915, 21918, 21920, 21921, 21922, 21923, 21924, 21925, 21926, 21928, 21929, 21930, 21931, 21932, 21933, 21934, 21935, 21936, 21938, 21940, 21942, 21944, 21946, 21948, 21951, 21952, 21953, 21954, 21955, 21958, 21959, 21960, 21962, 21963, 21966, 21967, 21968, 21973, 21975, 21976, 21977, 21978, 21979, 21982, 21984, 21986, 21991, 21993, 21997, 21998, 22e3, 22001, 22004, 22006, 22008, 22009, 22010, 22011, 22012, 22015, 22018, 22019, 22020, 22021, 22022, 22023, 22026, 22027, 22029, 22032, 22033, 22034, 22035, 22036, 22037, 22038, 22039, 22041, 22042, 22044, 22045, 22048, 22049, 22050, 22053, 22054, 22056, 22057, 22058, 22059, 22062, 22063, 22064, 22067, 22069, 22071, 22072, 22074, 22076, 22077, 22078, 22080, 22081, 22082, 22083, 22084, 22085, 22086, 22087, 22088, 22089, 22090, 22091, 22095, 22096, 22097, 22098, 22099, 22101, 22102, 22106, 22107, 22109, 22110, 22111, 22112, 22113, 22115, 22117, 22118, 22119, 22125, 22126, 22127, 22128, 22130, 22131, 22132, 22133, 22135, 22136, 22137, 22138, 22141, 22142, 22143, 22144, 22145, 22146, 22147, 22148, 22151, 22152, 22153, 22154, 22155, 22156, 22157, 22160, 22161, 22162, 22164, 22165, 22166, 22167, 22168, 22169, 22170, 22171, 22172, 22173, 22174, 22175, 22176, 22177, 22178, 22180, 22181, 22182, 22183, 22184, 22185, 22186, 22187, 22188, 22189, 22190, 22192, 22193, 22194, 22195, 22196, 22197, 22198, 22200, 22201, 22202, 22203, 22205, 22206, 22207, 22208, 22209, 22210, 22211, 22212, 22213, 22214, 22215, 22216, 22217, 22219, 22220, 22221, 22222, 22223, 22224, 22225, 22226, 22227, 22229, 22230, 22232, 22233, 22236, 22243, 22245, 22246, 22247, 22248, 22249, 22250, 22252, 22254, 22255, 22258, 22259, 22262, 22263, 22264, 22267, 22268, 22272, 22273, 22274, 22277, 22279, 22283, 22284, 22285, 22286, 22287, 22288, 22289, 22290, 22291, 22292, 22293, 22294, 22295, 22296, 22297, 22298, 22299, 22301, 22302, 22304, 22305, 22306, 22308, 22309, 22310, 22311, 22315, 22321, 22322, 22324, 22325, 22326, 22327, 22328, 22332, 22333, 22335, 22337, 22339, 22340, 22341, 22342, 22344, 22345, 22347, 22354, 22355, 22356, 22357, 22358, 22360, 22361, 22370, 22371, 22373, 22375, 22380, 22382, 22384, 22385, 22386, 22388, 22389, 22392, 22393, 22394, 22397, 22398, 22399, 22400, 22401, 22407, 22408, 22409, 22410, 22413, 22414, 22415, 22416, 22417, 22420, 22421, 22422, 22423, 22424, 22425, 22426, 22428, 22429, 22430, 22431, 22437, 22440, 22442, 22444, 22447, 22448, 22449, 22451, 22453, 22454, 22455, 22457, 22458, 22459, 22460, 22461, 22462, 22463, 22464, 22465, 22468, 22469, 22470, 22471, 22472, 22473, 22474, 22476, 22477, 22480, 22481, 22483, 22486, 22487, 22491, 22492, 22494, 22497, 22498, 22499, 22501, 22502, 22503, 22504, 22505, 22506, 22507, 22508, 22510, 22512, 22513, 22514, 22515, 22517, 22518, 22519, 22523, 22524, 22526, 22527, 22529, 22531, 22532, 22533, 22536, 22537, 22538, 22540, 22542, 22543, 22544, 22546, 22547, 22548, 22550, 22551, 22552, 22554, 22555, 22556, 22557, 22559, 22562, 22563, 22565, 22566, 22567, 22568, 22569, 22571, 22572, 22573, 22574, 22575, 22577, 22578, 22579, 22580, 22582, 22583, 22584, 22585, 22586, 22587, 22588, 22589, 22590, 22591, 22592, 22593, 22594, 22595, 22597, 22598, 22599, 22600, 22601, 22602, 22603, 22606, 22607, 22608, 22610, 22611, 22613, 22614, 22615, 22617, 22618, 22619, 22620, 22621, 22623, 22624, 22625, 22626, 22627, 22628, 22630, 22631, 22632, 22633, 22634, 22637, 22638, 22639, 22640, 22641, 22642, 22643, 22644, 22645, 22646, 22647, 22648, 22649, 22650, 22651, 22652, 22653, 22655, 22658, 22660, 22662, 22663, 22664, 22666, 22667, 22668, 22669, 22670, 22671, 22672, 22673, 22676, 22677, 22678, 22679, 22680, 22683, 22684, 22685, 22688, 22689, 22690, 22691, 22692, 22693, 22694, 22695, 22698, 22699, 22700, 22701, 22702, 22703, 22704, 22705, 22706, 22707, 22708, 22709, 22710, 22711, 22712, 22713, 22714, 22715, 22717, 22718, 22719, 22720, 22722, 22723, 22724, 22726, 22727, 22728, 22729, 22730, 22731, 22732, 22733, 22734, 22735, 22736, 22738, 22739, 22740, 22742, 22743, 22744, 22745, 22746, 22747, 22748, 22749, 22750, 22751, 22752, 22753, 22754, 22755, 22757, 22758, 22759, 22760, 22761, 22762, 22765, 22767, 22769, 22770, 22772, 22773, 22775, 22776, 22778, 22779, 22780, 22781, 22782, 22783, 22784, 22785, 22787, 22789, 22790, 22792, 22793, 22794, 22795, 22796, 22798, 22800, 22801, 22802, 22803, 22807, 22808, 22811, 22813, 22814, 22816, 22817, 22818, 22819, 22822, 22824, 22828, 22832, 22834, 22835, 22837, 22838, 22843, 22845, 22846, 22847, 22848, 22851, 22853, 22854, 22858, 22860, 22861, 22864, 22866, 22867, 22873, 22875, 22876, 22877, 22878, 22879, 22881, 22883, 22884, 22886, 22887, 22888, 22889, 22890, 22891, 22892, 22893, 22894, 22895, 22896, 22897, 22898, 22901, 22903, 22906, 22907, 22908, 22910, 22911, 22912, 22917, 22921, 22923, 22924, 22926, 22927, 22928, 22929, 22932, 22933, 22936, 22938, 22939, 22940, 22941, 22943, 22944, 22945, 22946, 22950, 22951, 22956, 22957, 22960, 22961, 22963, 22964, 22965, 22966, 22967, 22968, 22970, 22972, 22973, 22975, 22976, 22977, 22978, 22979, 22980, 22981, 22983, 22984, 22985, 22988, 22989, 22990, 22991, 22997, 22998, 23001, 23003, 23006, 23007, 23008, 23009, 23010, 23012, 23014, 23015, 23017, 23018, 23019, 23021, 23022, 23023, 23024, 23025, 23026, 23027, 23028, 23029, 23030, 23031, 23032, 23034, 23036, 23037, 23038, 23040, 23042, 23050, 23051, 23053, 23054, 23055, 23056, 23058, 23060, 23061, 23062, 23063, 23065, 23066, 23067, 23069, 23070, 23073, 23074, 23076, 23078, 23079, 23080, 23082, 23083, 23084, 23085, 23086, 23087, 23088, 23091, 23093, 23095, 23096, 23097, 23098, 23099, 23101, 23102, 23103, 23105, 23106, 23107, 23108, 23109, 23111, 23112, 23115, 23116, 23117, 23118, 23119, 23120, 23121, 23122, 23123, 23124, 23126, 23127, 23128, 23129, 23131, 23132, 23133, 23134, 23135, 23136, 23137, 23139, 23140, 23141, 23142, 23144, 23145, 23147, 23148, 23149, 23150, 23151, 23152, 23153, 23154, 23155, 23160, 23161, 23163, 23164, 23165, 23166, 23168, 23169, 23170, 23171, 23172, 23173, 23174, 23175, 23176, 23177, 23178, 23179, 23180, 23181, 23182, 23183, 23184, 23185, 23187, 23188, 23189, 23190, 23191, 23192, 23193, 23196, 23197, 23198, 23199, 23200, 23201, 23202, 23203, 23204, 23205, 23206, 23207, 23208, 23209, 23211, 23212, 23213, 23214, 23215, 23216, 23217, 23220, 23222, 23223, 23225, 23226, 23227, 23228, 23229, 23231, 23232, 23235, 23236, 23237, 23238, 23239, 23240, 23242, 23243, 23245, 23246, 23247, 23248, 23249, 23251, 23253, 23255, 23257, 23258, 23259, 23261, 23262, 23263, 23266, 23268, 23269, 23271, 23272, 23274, 23276, 23277, 23278, 23279, 23280, 23282, 23283, 23284, 23285, 23286, 23287, 23288, 23289, 23290, 23291, 23292, 23293, 23294, 23295, 23296, 23297, 23298, 23299, 23300, 23301, 23302, 23303, 23304, 23306, 23307, 23308, 23309, 23310, 23311, 23312, 23313, 23314, 23315, 23316, 23317, 23320, 23321, 23322, 23323, 23324, 23325, 23326, 23327, 23328, 23329, 23330, 23331, 23332, 23333, 23334, 23335, 23336, 23337, 23338, 23339, 23340, 23341, 23342, 23343, 23344, 23345, 23347, 23349, 23350, 23352, 23353, 23354, 23355, 23356, 23357, 23358, 23359, 23361, 23362, 23363, 23364, 23365, 23366, 23367, 23368, 23369, 23370, 23371, 23372, 23373, 23374, 23375, 23378, 23382, 23390, 23392, 23393, 23399, 23400, 23403, 23405, 23406, 23407, 23410, 23412, 23414, 23415, 23416, 23417, 23419, 23420, 23422, 23423, 23426, 23430, 23434, 23437, 23438, 23440, 23441, 23442, 23444, 23446, 23455, 23463, 23464, 23465, 23468, 23469, 23470, 23471, 23473, 23474, 23479, 23482, 23483, 23484, 23488, 23489, 23491, 23496, 23497, 23498, 23499, 23501, 23502, 23503, 23505, 23508, 23509, 23510, 23511, 23512, 23513, 23514, 23515, 23516, 23520, 23522, 23523, 23526, 23527, 23529, 23530, 23531, 23532, 23533, 23535, 23537, 23538, 23539, 23540, 23541, 23542, 23543, 23549, 23550, 23552, 23554, 23555, 23557, 23559, 23560, 23563, 23564, 23565, 23566, 23568, 23570, 23571, 23575, 23577, 23579, 23582, 23583, 23584, 23585, 23587, 23590, 23592, 23593, 23594, 23595, 23597, 23598, 23599, 23600, 23602, 23603, 23605, 23606, 23607, 23619, 23620, 23622, 23623, 23628, 23629, 23634, 23635, 23636, 23638, 23639, 23640, 23642, 23643, 23644, 23645, 23647, 23650, 23652, 23655, 23656, 23657, 23658, 23659, 23660, 23661, 23664, 23666, 23667, 23668, 23669, 23670, 23671, 23672, 23675, 23676, 23677, 23678, 23680, 23683, 23684, 23685, 23686, 23687, 23689, 23690, 23691, 23694, 23695, 23698, 23699, 23701, 23709, 23710, 23711, 23712, 23713, 23716, 23717, 23718, 23719, 23720, 23722, 23726, 23727, 23728, 23730, 23732, 23734, 23737, 23738, 23739, 23740, 23742, 23744, 23746, 23747, 23749, 23750, 23751, 23752, 23753, 23754, 23756, 23757, 23758, 23759, 23760, 23761, 23763, 23764, 23765, 23766, 23767, 23768, 23770, 23771, 23772, 23773, 23774, 23775, 23776, 23778, 23779, 23783, 23785, 23787, 23788, 23790, 23791, 23793, 23794, 23795, 23796, 23797, 23798, 23799, 23800, 23801, 23802, 23804, 23805, 23806, 23807, 23808, 23809, 23812, 23813, 23816, 23817, 23818, 23819, 23820, 23821, 23823, 23824, 23825, 23826, 23827, 23829, 23831, 23832, 23833, 23834, 23836, 23837, 23839, 23840, 23841, 23842, 23843, 23845, 23848, 23850, 23851, 23852, 23855, 23856, 23857, 23858, 23859, 23861, 23862, 23863, 23864, 23865, 23866, 23867, 23868, 23871, 23872, 23873, 23874, 23875, 23876, 23877, 23878, 23880, 23881, 23885, 23886, 23887, 23888, 23889, 23890, 23891, 23892, 23893, 23894, 23895, 23897, 23898, 23900, 23902, 23903, 23904, 23905, 23906, 23907, 23908, 23909, 23910, 23911, 23912, 23914, 23917, 23918, 23920, 23921, 23922, 23923, 23925, 23926, 23927, 23928, 23929, 23930, 23931, 23932, 23933, 23934, 23935, 23936, 23937, 23939, 23940, 23941, 23942, 23943, 23944, 23945, 23946, 23947, 23948, 23949, 23950, 23951, 23952, 23953, 23954, 23955, 23956, 23957, 23958, 23959, 23960, 23962, 23963, 23964, 23966, 23967, 23968, 23969, 23970, 23971, 23972, 23973, 23974, 23975, 23976, 23977, 23978, 23979, 23980, 23981, 23982, 23983, 23984, 23985, 23986, 23987, 23988, 23989, 23990, 23992, 23993, 23994, 23995, 23996, 23997, 23998, 23999, 24e3, 24001, 24002, 24003, 24004, 24006, 24007, 24008, 24009, 24010, 24011, 24012, 24014, 24015, 24016, 24017, 24018, 24019, 24020, 24021, 24022, 24023, 24024, 24025, 24026, 24028, 24031, 24032, 24035, 24036, 24042, 24044, 24045, 24048, 24053, 24054, 24056, 24057, 24058, 24059, 24060, 24063, 24064, 24068, 24071, 24073, 24074, 24075, 24077, 24078, 24082, 24083, 24087, 24094, 24095, 24096, 24097, 24098, 24099, 24100, 24101, 24104, 24105, 24106, 24107, 24108, 24111, 24112, 24114, 24115, 24116, 24117, 24118, 24121, 24122, 24126, 24127, 24128, 24129, 24131, 24134, 24135, 24136, 24137, 24138, 24139, 24141, 24142, 24143, 24144, 24145, 24146, 24147, 24150, 24151, 24152, 24153, 24154, 24156, 24157, 24159, 24160, 24163, 24164, 24165, 24166, 24167, 24168, 24169, 24170, 24171, 24172, 24173, 24174, 24175, 24176, 24177, 24181, 24183, 24185, 24190, 24193, 24194, 24195, 24197, 24200, 24201, 24204, 24205, 24206, 24210, 24216, 24219, 24221, 24225, 24226, 24227, 24228, 24232, 24233, 24234, 24235, 24236, 24238, 24239, 24240, 24241, 24242, 24244, 24250, 24251, 24252, 24253, 24255, 24256, 24257, 24258, 24259, 24260, 24261, 24262, 24263, 24264, 24267, 24268, 24269, 24270, 24271, 24272, 24276, 24277, 24279, 24280, 24281, 24282, 24284, 24285, 24286, 24287, 24288, 24289, 24290, 24291, 24292, 24293, 24294, 24295, 24297, 24299, 24300, 24301, 24302, 24303, 24304, 24305, 24306, 24307, 24309, 24312, 24313, 24315, 24316, 24317, 24325, 24326, 24327, 24329, 24332, 24333, 24334, 24336, 24338, 24340, 24342, 24345, 24346, 24348, 24349, 24350, 24353, 24354, 24355, 24356, 24360, 24363, 24364, 24366, 24368, 24370, 24371, 24372, 24373, 24374, 24375, 24376, 24379, 24381, 24382, 24383, 24385, 24386, 24387, 24388, 24389, 24390, 24391, 24392, 24393, 24394, 24395, 24396, 24397, 24398, 24399, 24401, 24404, 24409, 24410, 24411, 24412, 24414, 24415, 24416, 24419, 24421, 24423, 24424, 24427, 24430, 24431, 24434, 24436, 24437, 24438, 24440, 24442, 24445, 24446, 24447, 24451, 24454, 24461, 24462, 24463, 24465, 24467, 24468, 24470, 24474, 24475, 24477, 24478, 24479, 24480, 24482, 24483, 24484, 24485, 24486, 24487, 24489, 24491, 24492, 24495, 24496, 24497, 24498, 24499, 24500, 24502, 24504, 24505, 24506, 24507, 24510, 24511, 24512, 24513, 24514, 24519, 24520, 24522, 24523, 24526, 24531, 24532, 24533, 24538, 24539, 24540, 24542, 24543, 24546, 24547, 24549, 24550, 24552, 24553, 24556, 24559, 24560, 24562, 24563, 24564, 24566, 24567, 24569, 24570, 24572, 24583, 24584, 24585, 24587, 24588, 24592, 24593, 24595, 24599, 24600, 24602, 24606, 24607, 24610, 24611, 24612, 24620, 24621, 24622, 24624, 24625, 24626, 24627, 24628, 24630, 24631, 24632, 24633, 24634, 24637, 24638, 24640, 24644, 24645, 24646, 24647, 24648, 24649, 24650, 24652, 24654, 24655, 24657, 24659, 24660, 24662, 24663, 24664, 24667, 24668, 24670, 24671, 24672, 24673, 24677, 24678, 24686, 24689, 24690, 24692, 24693, 24695, 24702, 24704, 24705, 24706, 24709, 24710, 24711, 24712, 24714, 24715, 24718, 24719, 24720, 24721, 24723, 24725, 24727, 24728, 24729, 24732, 24734, 24737, 24738, 24740, 24741, 24743, 24745, 24746, 24750, 24752, 24755, 24757, 24758, 24759, 24761, 24762, 24765, 24766, 24767, 24768, 24769, 24770, 24771, 24772, 24775, 24776, 24777, 24780, 24781, 24782, 24783, 24784, 24786, 24787, 24788, 24790, 24791, 24793, 24795, 24798, 24801, 24802, 24803, 24804, 24805, 24810, 24817, 24818, 24821, 24823, 24824, 24827, 24828, 24829, 24830, 24831, 24834, 24835, 24836, 24837, 24839, 24842, 24843, 24844, 24848, 24849, 24850, 24851, 24852, 24854, 24855, 24856, 24857, 24859, 24860, 24861, 24862, 24865, 24866, 24869, 24872, 24873, 24874, 24876, 24877, 24878, 24879, 24880, 24881, 24882, 24883, 24884, 24885, 24886, 24887, 24888, 24889, 24890, 24891, 24892, 24893, 24894, 24896, 24897, 24898, 24899, 24900, 24901, 24902, 24903, 24905, 24907, 24909, 24911, 24912, 24914, 24915, 24916, 24918, 24919, 24920, 24921, 24922, 24923, 24924, 24926, 24927, 24928, 24929, 24931, 24932, 24933, 24934, 24937, 24938, 24939, 24940, 24941, 24942, 24943, 24945, 24946, 24947, 24948, 24950, 24952, 24953, 24954, 24955, 24956, 24957, 24958, 24959, 24960, 24961, 24962, 24963, 24964, 24965, 24966, 24967, 24968, 24969, 24970, 24972, 24973, 24975, 24976, 24977, 24978, 24979, 24981, 24982, 24983, 24984, 24985, 24986, 24987, 24988, 24990, 24991, 24992, 24993, 24994, 24995, 24996, 24997, 24998, 25002, 25003, 25005, 25006, 25007, 25008, 25009, 25010, 25011, 25012, 25013, 25014, 25016, 25017, 25018, 25019, 25020, 25021, 25023, 25024, 25025, 25027, 25028, 25029, 25030, 25031, 25033, 25036, 25037, 25038, 25039, 25040, 25043, 25045, 25046, 25047, 25048, 25049, 25050, 25051, 25052, 25053, 25054, 25055, 25056, 25057, 25058, 25059, 25060, 25061, 25063, 25064, 25065, 25066, 25067, 25068, 25069, 25070, 25071, 25072, 25073, 25074, 25075, 25076, 25078, 25079, 25080, 25081, 25082, 25083, 25084, 25085, 25086, 25088, 25089, 25090, 25091, 25092, 25093, 25095, 25097, 25107, 25108, 25113, 25116, 25117, 25118, 25120, 25123, 25126, 25127, 25128, 25129, 25131, 25133, 25135, 25136, 25137, 25138, 25141, 25142, 25144, 25145, 25146, 25147, 25148, 25154, 25156, 25157, 25158, 25162, 25167, 25168, 25173, 25174, 25175, 25177, 25178, 25180, 25181, 25182, 25183, 25184, 25185, 25186, 25188, 25189, 25192, 25201, 25202, 25204, 25205, 25207, 25208, 25210, 25211, 25213, 25217, 25218, 25219, 25221, 25222, 25223, 25224, 25227, 25228, 25229, 25230, 25231, 25232, 25236, 25241, 25244, 25245, 25246, 25251, 25254, 25255, 25257, 25258, 25261, 25262, 25263, 25264, 25266, 25267, 25268, 25270, 25271, 25272, 25274, 25278, 25280, 25281, 25283, 25291, 25295, 25297, 25301, 25309, 25310, 25312, 25313, 25316, 25322, 25323, 25328, 25330, 25333, 25336, 25337, 25338, 25339, 25344, 25347, 25348, 25349, 25350, 25354, 25355, 25356, 25357, 25359, 25360, 25362, 25363, 25364, 25365, 25367, 25368, 25369, 25372, 25382, 25383, 25385, 25388, 25389, 25390, 25392, 25393, 25395, 25396, 25397, 25398, 25399, 25400, 25403, 25404, 25406, 25407, 25408, 25409, 25412, 25415, 25416, 25418, 25425, 25426, 25427, 25428, 25430, 25431, 25432, 25433, 25434, 25435, 25436, 25437, 25440, 25444, 25445, 25446, 25448, 25450, 25451, 25452, 25455, 25456, 25458, 25459, 25460, 25461, 25464, 25465, 25468, 25469, 25470, 25471, 25473, 25475, 25476, 25477, 25478, 25483, 25485, 25489, 25491, 25492, 25493, 25495, 25497, 25498, 25499, 25500, 25501, 25502, 25503, 25505, 25508, 25510, 25515, 25519, 25521, 25522, 25525, 25526, 25529, 25531, 25533, 25535, 25536, 25537, 25538, 25539, 25541, 25543, 25544, 25546, 25547, 25548, 25553, 25555, 25556, 25557, 25559, 25560, 25561, 25562, 25563, 25564, 25565, 25567, 25570, 25572, 25573, 25574, 25575, 25576, 25579, 25580, 25582, 25583, 25584, 25585, 25587, 25589, 25591, 25593, 25594, 25595, 25596, 25598, 25603, 25604, 25606, 25607, 25608, 25609, 25610, 25613, 25614, 25617, 25618, 25621, 25622, 25623, 25624, 25625, 25626, 25629, 25631, 25634, 25635, 25636, 25637, 25639, 25640, 25641, 25643, 25646, 25647, 25648, 25649, 25650, 25651, 25653, 25654, 25655, 25656, 25657, 25659, 25660, 25662, 25664, 25666, 25667, 25673, 25675, 25676, 25677, 25678, 25679, 25680, 25681, 25683, 25685, 25686, 25687, 25689, 25690, 25691, 25692, 25693, 25695, 25696, 25697, 25698, 25699, 25700, 25701, 25702, 25704, 25706, 25707, 25708, 25710, 25711, 25712, 25713, 25714, 25715, 25716, 25717, 25718, 25719, 25723, 25724, 25725, 25726, 25727, 25728, 25729, 25731, 25734, 25736, 25737, 25738, 25739, 25740, 25741, 25742, 25743, 25744, 25747, 25748, 25751, 25752, 25754, 25755, 25756, 25757, 25759, 25760, 25761, 25762, 25763, 25765, 25766, 25767, 25768, 25770, 25771, 25775, 25777, 25778, 25779, 25780, 25782, 25785, 25787, 25789, 25790, 25791, 25793, 25795, 25796, 25798, 25799, 25800, 25801, 25802, 25803, 25804, 25807, 25809, 25811, 25812, 25813, 25814, 25817, 25818, 25819, 25820, 25821, 25823, 25824, 25825, 25827, 25829, 25831, 25832, 25833, 25834, 25835, 25836, 25837, 25838, 25839, 25840, 25841, 25842, 25843, 25844, 25845, 25846, 25847, 25848, 25849, 25850, 25851, 25852, 25853, 25854, 25855, 25857, 25858, 25859, 25860, 25861, 25862, 25863, 25864, 25866, 25867, 25868, 25869, 25870, 25871, 25872, 25873, 25875, 25876, 25877, 25878, 25879, 25881, 25882, 25883, 25884, 25885, 25886, 25887, 25888, 25889, 25890, 25891, 25892, 25894, 25895, 25896, 25897, 25898, 25900, 25901, 25904, 25905, 25906, 25907, 25911, 25914, 25916, 25917, 25920, 25921, 25922, 25923, 25924, 25926, 25927, 25930, 25931, 25933, 25934, 25936, 25938, 25939, 25940, 25943, 25944, 25946, 25948, 25951, 25952, 25953, 25956, 25957, 25959, 25960, 25961, 25962, 25965, 25966, 25967, 25969, 25971, 25973, 25974, 25976, 25977, 25978, 25979, 25980, 25981, 25982, 25983, 25984, 25985, 25986, 25987, 25988, 25989, 25990, 25992, 25993, 25994, 25997, 25998, 25999, 26002, 26004, 26005, 26006, 26008, 26010, 26013, 26014, 26016, 26018, 26019, 26022, 26024, 26026, 26028, 26030, 26033, 26034, 26035, 26036, 26037, 26038, 26039, 26040, 26042, 26043, 26046, 26047, 26048, 26050, 26055, 26056, 26057, 26058, 26061, 26064, 26065, 26067, 26068, 26069, 26072, 26073, 26074, 26075, 26076, 26077, 26078, 26079, 26081, 26083, 26084, 26090, 26091, 26098, 26099, 26100, 26101, 26104, 26105, 26107, 26108, 26109, 26110, 26111, 26113, 26116, 26117, 26119, 26120, 26121, 26123, 26125, 26128, 26129, 26130, 26134, 26135, 26136, 26138, 26139, 26140, 26142, 26145, 26146, 26147, 26148, 26150, 26153, 26154, 26155, 26156, 26158, 26160, 26162, 26163, 26167, 26168, 26169, 26170, 26171, 26173, 26175, 26176, 26178, 26180, 26181, 26182, 26183, 26184, 26185, 26186, 26189, 26190, 26192, 26193, 26200, 26201, 26203, 26204, 26205, 26206, 26208, 26210, 26211, 26213, 26215, 26217, 26218, 26219, 26220, 26221, 26225, 26226, 26227, 26229, 26232, 26233, 26235, 26236, 26237, 26239, 26240, 26241, 26243, 26245, 26246, 26248, 26249, 26250, 26251, 26253, 26254, 26255, 26256, 26258, 26259, 26260, 26261, 26264, 26265, 26266, 26267, 26268, 26270, 26271, 26272, 26273, 26274, 26275, 26276, 26277, 26278, 26281, 26282, 26283, 26284, 26285, 26287, 26288, 26289, 26290, 26291, 26293, 26294, 26295, 26296, 26298, 26299, 26300, 26301, 26303, 26304, 26305, 26306, 26307, 26308, 26309, 26310, 26311, 26312, 26313, 26314, 26315, 26316, 26317, 26318, 26319, 26320, 26321, 26322, 26323, 26324, 26325, 26326, 26327, 26328, 26330, 26334, 26335, 26336, 26337, 26338, 26339, 26340, 26341, 26343, 26344, 26346, 26347, 26348, 26349, 26350, 26351, 26353, 26357, 26358, 26360, 26362, 26363, 26365, 26369, 26370, 26371, 26372, 26373, 26374, 26375, 26380, 26382, 26383, 26385, 26386, 26387, 26390, 26392, 26393, 26394, 26396, 26398, 26400, 26401, 26402, 26403, 26404, 26405, 26407, 26409, 26414, 26416, 26418, 26419, 26422, 26423, 26424, 26425, 26427, 26428, 26430, 26431, 26433, 26436, 26437, 26439, 26442, 26443, 26445, 26450, 26452, 26453, 26455, 26456, 26457, 26458, 26459, 26461, 26466, 26467, 26468, 26470, 26471, 26475, 26476, 26478, 26481, 26484, 26486, 26488, 26489, 26490, 26491, 26493, 26496, 26498, 26499, 26501, 26502, 26504, 26506, 26508, 26509, 26510, 26511, 26513, 26514, 26515, 26516, 26518, 26521, 26523, 26527, 26528, 26529, 26532, 26534, 26537, 26540, 26542, 26545, 26546, 26548, 26553, 26554, 26555, 26556, 26557, 26558, 26559, 26560, 26562, 26565, 26566, 26567, 26568, 26569, 26570, 26571, 26572, 26573, 26574, 26581, 26582, 26583, 26587, 26591, 26593, 26595, 26596, 26598, 26599, 26600, 26602, 26603, 26605, 26606, 26610, 26613, 26614, 26615, 26616, 26617, 26618, 26619, 26620, 26622, 26625, 26626, 26627, 26628, 26630, 26637, 26640, 26642, 26644, 26645, 26648, 26649, 26650, 26651, 26652, 26654, 26655, 26656, 26658, 26659, 26660, 26661, 26662, 26663, 26664, 26667, 26668, 26669, 26670, 26671, 26672, 26673, 26676, 26677, 26678, 26682, 26683, 26687, 26695, 26699, 26701, 26703, 26706, 26710, 26711, 26712, 26713, 26714, 26715, 26716, 26717, 26718, 26719, 26730, 26732, 26733, 26734, 26735, 26736, 26737, 26738, 26739, 26741, 26744, 26745, 26746, 26747, 26748, 26749, 26750, 26751, 26752, 26754, 26756, 26759, 26760, 26761, 26762, 26763, 26764, 26765, 26766, 26768, 26769, 26770, 26772, 26773, 26774, 26776, 26777, 26778, 26779, 26780, 26781, 26782, 26783, 26784, 26785, 26787, 26788, 26789, 26793, 26794, 26795, 26796, 26798, 26801, 26802, 26804, 26806, 26807, 26808, 26809, 26810, 26811, 26812, 26813, 26814, 26815, 26817, 26819, 26820, 26821, 26822, 26823, 26824, 26826, 26828, 26830, 26831, 26832, 26833, 26835, 26836, 26838, 26839, 26841, 26843, 26844, 26845, 26846, 26847, 26849, 26850, 26852, 26853, 26854, 26855, 26856, 26857, 26858, 26859, 26860, 26861, 26863, 26866, 26867, 26868, 26870, 26871, 26872, 26875, 26877, 26878, 26879, 26880, 26882, 26883, 26884, 26886, 26887, 26888, 26889, 26890, 26892, 26895, 26897, 26899, 26900, 26901, 26902, 26903, 26904, 26905, 26906, 26907, 26908, 26909, 26910, 26913, 26914, 26915, 26917, 26918, 26919, 26920, 26921, 26922, 26923, 26924, 26926, 26927, 26929, 26930, 26931, 26933, 26934, 26935, 26936, 26938, 26939, 26940, 26942, 26944, 26945, 26947, 26948, 26949, 26950, 26951, 26952, 26953, 26954, 26955, 26956, 26957, 26958, 26959, 26960, 26961, 26962, 26963, 26965, 26966, 26968, 26969, 26971, 26972, 26975, 26977, 26978, 26980, 26981, 26983, 26984, 26985, 26986, 26988, 26989, 26991, 26992, 26994, 26995, 26996, 26997, 26998, 27002, 27003, 27005, 27006, 27007, 27009, 27011, 27013, 27018, 27019, 27020, 27022, 27023, 27024, 27025, 27026, 27027, 27030, 27031, 27033, 27034, 27037, 27038, 27039, 27040, 27041, 27042, 27043, 27044, 27045, 27046, 27049, 27050, 27052, 27054, 27055, 27056, 27058, 27059, 27061, 27062, 27064, 27065, 27066, 27068, 27069, 27070, 27071, 27072, 27074, 27075, 27076, 27077, 27078, 27079, 27080, 27081, 27083, 27085, 27087, 27089, 27090, 27091, 27093, 27094, 27095, 27096, 27097, 27098, 27100, 27101, 27102, 27105, 27106, 27107, 27108, 27109, 27110, 27111, 27112, 27113, 27114, 27115, 27116, 27118, 27119, 27120, 27121, 27123, 27124, 27125, 27126, 27127, 27128, 27129, 27130, 27131, 27132, 27134, 27136, 27137, 27138, 27139, 27140, 27141, 27142, 27143, 27144, 27145, 27147, 27148, 27149, 27150, 27151, 27152, 27153, 27154, 27155, 27156, 27157, 27158, 27161, 27162, 27163, 27164, 27165, 27166, 27168, 27170, 27171, 27172, 27173, 27174, 27175, 27177, 27179, 27180, 27181, 27182, 27184, 27186, 27187, 27188, 27190, 27191, 27192, 27193, 27194, 27195, 27196, 27199, 27200, 27201, 27202, 27203, 27205, 27206, 27208, 27209, 27210, 27211, 27212, 27213, 27214, 27215, 27217, 27218, 27219, 27220, 27221, 27222, 27223, 27226, 27228, 27229, 27230, 27231, 27232, 27234, 27235, 27236, 27238, 27239, 27240, 27241, 27242, 27243, 27244, 27245, 27246, 27247, 27248, 27250, 27251, 27252, 27253, 27254, 27255, 27256, 27258, 27259, 27261, 27262, 27263, 27265, 27266, 27267, 27269, 27270, 27271, 27272, 27273, 27274, 27275, 27276, 27277, 27279, 27282, 27283, 27284, 27285, 27286, 27288, 27289, 27290, 27291, 27292, 27293, 27294, 27295, 27297, 27298, 27299, 27300, 27301, 27302, 27303, 27304, 27306, 27309, 27310, 27311, 27312, 27313, 27314, 27315, 27316, 27317, 27318, 27319, 27320, 27321, 27322, 27323, 27324, 27325, 27326, 27327, 27328, 27329, 27330, 27331, 27332, 27333, 27334, 27335, 27336, 27337, 27338, 27339, 27340, 27341, 27342, 27343, 27344, 27345, 27346, 27347, 27348, 27349, 27350, 27351, 27352, 27353, 27354, 27355, 27356, 27357, 27358, 27359, 27360, 27361, 27362, 27363, 27364, 27365, 27366, 27367, 27368, 27369, 27370, 27371, 27372, 27373, 27374, 27375, 27376, 27377, 27378, 27379, 27380, 27381, 27382, 27383, 27384, 27385, 27386, 27387, 27388, 27389, 27390, 27391, 27392, 27393, 27394, 27395, 27396, 27397, 27398, 27399, 27400, 27401, 27402, 27403, 27404, 27405, 27406, 27407, 27408, 27409, 27410, 27411, 27412, 27413, 27414, 27415, 27416, 27417, 27418, 27419, 27420, 27421, 27422, 27423, 27429, 27430, 27432, 27433, 27434, 27435, 27436, 27437, 27438, 27439, 27440, 27441, 27443, 27444, 27445, 27446, 27448, 27451, 27452, 27453, 27455, 27456, 27457, 27458, 27460, 27461, 27464, 27466, 27467, 27469, 27470, 27471, 27472, 27473, 27474, 27475, 27476, 27477, 27478, 27479, 27480, 27482, 27483, 27484, 27485, 27486, 27487, 27488, 27489, 27496, 27497, 27499, 27500, 27501, 27502, 27503, 27504, 27505, 27506, 27507, 27508, 27509, 27510, 27511, 27512, 27514, 27517, 27518, 27519, 27520, 27525, 27528, 27532, 27534, 27535, 27536, 27537, 27540, 27541, 27543, 27544, 27545, 27548, 27549, 27550, 27551, 27552, 27554, 27555, 27556, 27557, 27558, 27559, 27560, 27561, 27563, 27564, 27565, 27566, 27567, 27568, 27569, 27570, 27574, 27576, 27577, 27578, 27579, 27580, 27581, 27582, 27584, 27587, 27588, 27590, 27591, 27592, 27593, 27594, 27596, 27598, 27600, 27601, 27608, 27610, 27612, 27613, 27614, 27615, 27616, 27618, 27619, 27620, 27621, 27622, 27623, 27624, 27625, 27628, 27629, 27630, 27632, 27633, 27634, 27636, 27638, 27639, 27640, 27642, 27643, 27644, 27646, 27647, 27648, 27649, 27650, 27651, 27652, 27656, 27657, 27658, 27659, 27660, 27662, 27666, 27671, 27676, 27677, 27678, 27680, 27683, 27685, 27691, 27692, 27693, 27697, 27699, 27702, 27703, 27705, 27706, 27707, 27708, 27710, 27711, 27715, 27716, 27717, 27720, 27723, 27724, 27725, 27726, 27727, 27729, 27730, 27731, 27734, 27736, 27737, 27738, 27746, 27747, 27749, 27750, 27751, 27755, 27756, 27757, 27758, 27759, 27761, 27763, 27765, 27767, 27768, 27770, 27771, 27772, 27775, 27776, 27780, 27783, 27786, 27787, 27789, 27790, 27793, 27794, 27797, 27798, 27799, 27800, 27802, 27804, 27805, 27806, 27808, 27810, 27816, 27820, 27823, 27824, 27828, 27829, 27830, 27831, 27834, 27840, 27841, 27842, 27843, 27846, 27847, 27848, 27851, 27853, 27854, 27855, 27857, 27858, 27864, 27865, 27866, 27868, 27869, 27871, 27876, 27878, 27879, 27881, 27884, 27885, 27890, 27892, 27897, 27903, 27904, 27906, 27907, 27909, 27910, 27912, 27913, 27914, 27917, 27919, 27920, 27921, 27923, 27924, 27925, 27926, 27928, 27932, 27933, 27935, 27936, 27937, 27938, 27939, 27940, 27942, 27944, 27945, 27948, 27949, 27951, 27952, 27956, 27958, 27959, 27960, 27962, 27967, 27968, 27970, 27972, 27977, 27980, 27984, 27989, 27990, 27991, 27992, 27995, 27997, 27999, 28001, 28002, 28004, 28005, 28007, 28008, 28011, 28012, 28013, 28016, 28017, 28018, 28019, 28021, 28022, 28025, 28026, 28027, 28029, 28030, 28031, 28032, 28033, 28035, 28036, 28038, 28039, 28042, 28043, 28045, 28047, 28048, 28050, 28054, 28055, 28056, 28057, 28058, 28060, 28066, 28069, 28076, 28077, 28080, 28081, 28083, 28084, 28086, 28087, 28089, 28090, 28091, 28092, 28093, 28094, 28097, 28098, 28099, 28104, 28105, 28106, 28109, 28110, 28111, 28112, 28114, 28115, 28116, 28117, 28119, 28122, 28123, 28124, 28127, 28130, 28131, 28133, 28135, 28136, 28137, 28138, 28141, 28143, 28144, 28146, 28148, 28149, 28150, 28152, 28154, 28157, 28158, 28159, 28160, 28161, 28162, 28163, 28164, 28166, 28167, 28168, 28169, 28171, 28175, 28178, 28179, 28181, 28184, 28185, 28187, 28188, 28190, 28191, 28194, 28198, 28199, 28200, 28202, 28204, 28206, 28208, 28209, 28211, 28213, 28214, 28215, 28217, 28219, 28220, 28221, 28222, 28223, 28224, 28225, 28226, 28229, 28230, 28231, 28232, 28233, 28234, 28235, 28236, 28239, 28240, 28241, 28242, 28245, 28247, 28249, 28250, 28252, 28253, 28254, 28256, 28257, 28258, 28259, 28260, 28261, 28262, 28263, 28264, 28265, 28266, 28268, 28269, 28271, 28272, 28273, 28274, 28275, 28276, 28277, 28278, 28279, 28280, 28281, 28282, 28283, 28284, 28285, 28288, 28289, 28290, 28292, 28295, 28296, 28298, 28299, 28300, 28301, 28302, 28305, 28306, 28307, 28308, 28309, 28310, 28311, 28313, 28314, 28315, 28317, 28318, 28320, 28321, 28323, 28324, 28326, 28328, 28329, 28331, 28332, 28333, 28334, 28336, 28339, 28341, 28344, 28345, 28348, 28350, 28351, 28352, 28355, 28356, 28357, 28358, 28360, 28361, 28362, 28364, 28365, 28366, 28368, 28370, 28374, 28376, 28377, 28379, 28380, 28381, 28387, 28391, 28394, 28395, 28396, 28397, 28398, 28399, 28400, 28401, 28402, 28403, 28405, 28406, 28407, 28408, 28410, 28411, 28412, 28413, 28414, 28415, 28416, 28417, 28419, 28420, 28421, 28423, 28424, 28426, 28427, 28428, 28429, 28430, 28432, 28433, 28434, 28438, 28439, 28440, 28441, 28442, 28443, 28444, 28445, 28446, 28447, 28449, 28450, 28451, 28453, 28454, 28455, 28456, 28460, 28462, 28464, 28466, 28468, 28469, 28471, 28472, 28473, 28474, 28475, 28476, 28477, 28479, 28480, 28481, 28482, 28483, 28484, 28485, 28488, 28489, 28490, 28492, 28494, 28495, 28496, 28497, 28498, 28499, 28500, 28501, 28502, 28503, 28505, 28506, 28507, 28509, 28511, 28512, 28513, 28515, 28516, 28517, 28519, 28520, 28521, 28522, 28523, 28524, 28527, 28528, 28529, 28531, 28533, 28534, 28535, 28537, 28539, 28541, 28542, 28543, 28544, 28545, 28546, 28547, 28549, 28550, 28551, 28554, 28555, 28559, 28560, 28561, 28562, 28563, 28564, 28565, 28566, 28567, 28568, 28569, 28570, 28571, 28573, 28574, 28575, 28576, 28578, 28579, 28580, 28581, 28582, 28584, 28585, 28586, 28587, 28588, 28589, 28590, 28591, 28592, 28593, 28594, 28596, 28597, 28599, 28600, 28602, 28603, 28604, 28605, 28606, 28607, 28609, 28611, 28612, 28613, 28614, 28615, 28616, 28618, 28619, 28620, 28621, 28622, 28623, 28624, 28627, 28628, 28629, 28630, 28631, 28632, 28633, 28634, 28635, 28636, 28637, 28639, 28642, 28643, 28644, 28645, 28646, 28647, 28648, 28649, 28650, 28651, 28652, 28653, 28656, 28657, 28658, 28659, 28660, 28661, 28662, 28663, 28664, 28665, 28666, 28667, 28668, 28669, 28670, 28671, 28672, 28673, 28674, 28675, 28676, 28677, 28678, 28679, 28680, 28681, 28682, 28683, 28684, 28685, 28686, 28687, 28688, 28690, 28691, 28692, 28693, 28694, 28695, 28696, 28697, 28700, 28701, 28702, 28703, 28704, 28705, 28706, 28708, 28709, 28710, 28711, 28712, 28713, 28714, 28715, 28716, 28717, 28718, 28719, 28720, 28721, 28722, 28723, 28724, 28726, 28727, 28728, 28730, 28731, 28732, 28733, 28734, 28735, 28736, 28737, 28738, 28739, 28740, 28741, 28742, 28743, 28744, 28745, 28746, 28747, 28749, 28750, 28752, 28753, 28754, 28755, 28756, 28757, 28758, 28759, 28760, 28761, 28762, 28763, 28764, 28765, 28767, 28768, 28769, 28770, 28771, 28772, 28773, 28774, 28775, 28776, 28777, 28778, 28782, 28785, 28786, 28787, 28788, 28791, 28793, 28794, 28795, 28797, 28801, 28802, 28803, 28804, 28806, 28807, 28808, 28811, 28812, 28813, 28815, 28816, 28817, 28819, 28823, 28824, 28826, 28827, 28830, 28831, 28832, 28833, 28834, 28835, 28836, 28837, 28838, 28839, 28840, 28841, 28842, 28848, 28850, 28852, 28853, 28854, 28858, 28862, 28863, 28868, 28869, 28870, 28871, 28873, 28875, 28876, 28877, 28878, 28879, 28880, 28881, 28882, 28883, 28884, 28885, 28886, 28887, 28890, 28892, 28893, 28894, 28896, 28897, 28898, 28899, 28901, 28906, 28910, 28912, 28913, 28914, 28915, 28916, 28917, 28918, 28920, 28922, 28923, 28924, 28926, 28927, 28928, 28929, 28930, 28931, 28932, 28933, 28934, 28935, 28936, 28939, 28940, 28941, 28942, 28943, 28945, 28946, 28948, 28951, 28955, 28956, 28957, 28958, 28959, 28960, 28961, 28962, 28963, 28964, 28965, 28967, 28968, 28969, 28970, 28971, 28972, 28973, 28974, 28978, 28979, 28980, 28981, 28983, 28984, 28985, 28986, 28987, 28988, 28989, 28990, 28991, 28992, 28993, 28994, 28995, 28996, 28998, 28999, 29e3, 29001, 29003, 29005, 29007, 29008, 29009, 29010, 29011, 29012, 29013, 29014, 29015, 29016, 29017, 29018, 29019, 29021, 29023, 29024, 29025, 29026, 29027, 29029, 29033, 29034, 29035, 29036, 29037, 29039, 29040, 29041, 29044, 29045, 29046, 29047, 29049, 29051, 29052, 29054, 29055, 29056, 29057, 29058, 29059, 29061, 29062, 29063, 29064, 29065, 29067, 29068, 29069, 29070, 29072, 29073, 29074, 29075, 29077, 29078, 29079, 29082, 29083, 29084, 29085, 29086, 29089, 29090, 29091, 29092, 29093, 29094, 29095, 29097, 29098, 29099, 29101, 29102, 29103, 29104, 29105, 29106, 29108, 29110, 29111, 29112, 29114, 29115, 29116, 29117, 29118, 29119, 29120, 29121, 29122, 29124, 29125, 29126, 29127, 29128, 29129, 29130, 29131, 29132, 29133, 29135, 29136, 29137, 29138, 29139, 29142, 29143, 29144, 29145, 29146, 29147, 29148, 29149, 29150, 29151, 29153, 29154, 29155, 29156, 29158, 29160, 29161, 29162, 29163, 29164, 29165, 29167, 29168, 29169, 29170, 29171, 29172, 29173, 29174, 29175, 29176, 29178, 29179, 29180, 29181, 29182, 29183, 29184, 29185, 29186, 29187, 29188, 29189, 29191, 29192, 29193, 29194, 29195, 29196, 29197, 29198, 29199, 29200, 29201, 29202, 29203, 29204, 29205, 29206, 29207, 29208, 29209, 29210, 29211, 29212, 29214, 29215, 29216, 29217, 29218, 29219, 29220, 29221, 29222, 29223, 29225, 29227, 29229, 29230, 29231, 29234, 29235, 29236, 29242, 29244, 29246, 29248, 29249, 29250, 29251, 29252, 29253, 29254, 29257, 29258, 29259, 29262, 29263, 29264, 29265, 29267, 29268, 29269, 29271, 29272, 29274, 29276, 29278, 29280, 29283, 29284, 29285, 29288, 29290, 29291, 29292, 29293, 29296, 29297, 29299, 29300, 29302, 29303, 29304, 29307, 29308, 29309, 29314, 29315, 29317, 29318, 29319, 29320, 29321, 29324, 29326, 29328, 29329, 29331, 29332, 29333, 29334, 29335, 29336, 29337, 29338, 29339, 29340, 29341, 29342, 29344, 29345, 29346, 29347, 29348, 29349, 29350, 29351, 29352, 29353, 29354, 29355, 29358, 29361, 29362, 29363, 29365, 29370, 29371, 29372, 29373, 29374, 29375, 29376, 29381, 29382, 29383, 29385, 29386, 29387, 29388, 29391, 29393, 29395, 29396, 29397, 29398, 29400, 29402, 29403, 58566, 58567, 58568, 58569, 58570, 58571, 58572, 58573, 58574, 58575, 58576, 58577, 58578, 58579, 58580, 58581, 58582, 58583, 58584, 58585, 58586, 58587, 58588, 58589, 58590, 58591, 58592, 58593, 58594, 58595, 58596, 58597, 58598, 58599, 58600, 58601, 58602, 58603, 58604, 58605, 58606, 58607, 58608, 58609, 58610, 58611, 58612, 58613, 58614, 58615, 58616, 58617, 58618, 58619, 58620, 58621, 58622, 58623, 58624, 58625, 58626, 58627, 58628, 58629, 58630, 58631, 58632, 58633, 58634, 58635, 58636, 58637, 58638, 58639, 58640, 58641, 58642, 58643, 58644, 58645, 58646, 58647, 58648, 58649, 58650, 58651, 58652, 58653, 58654, 58655, 58656, 58657, 58658, 58659, 58660, 58661, 12288, 12289, 12290, 183, 713, 711, 168, 12291, 12293, 8212, 65374, 8214, 8230, 8216, 8217, 8220, 8221, 12308, 12309, 12296, 12297, 12298, 12299, 12300, 12301, 12302, 12303, 12310, 12311, 12304, 12305, 177, 215, 247, 8758, 8743, 8744, 8721, 8719, 8746, 8745, 8712, 8759, 8730, 8869, 8741, 8736, 8978, 8857, 8747, 8750, 8801, 8780, 8776, 8765, 8733, 8800, 8814, 8815, 8804, 8805, 8734, 8757, 8756, 9794, 9792, 176, 8242, 8243, 8451, 65284, 164, 65504, 65505, 8240, 167, 8470, 9734, 9733, 9675, 9679, 9678, 9671, 9670, 9633, 9632, 9651, 9650, 8251, 8594, 8592, 8593, 8595, 12307, 58662, 58663, 58664, 58665, 58666, 58667, 58668, 58669, 58670, 58671, 58672, 58673, 58674, 58675, 58676, 58677, 58678, 58679, 58680, 58681, 58682, 58683, 58684, 58685, 58686, 58687, 58688, 58689, 58690, 58691, 58692, 58693, 58694, 58695, 58696, 58697, 58698, 58699, 58700, 58701, 58702, 58703, 58704, 58705, 58706, 58707, 58708, 58709, 58710, 58711, 58712, 58713, 58714, 58715, 58716, 58717, 58718, 58719, 58720, 58721, 58722, 58723, 58724, 58725, 58726, 58727, 58728, 58729, 58730, 58731, 58732, 58733, 58734, 58735, 58736, 58737, 58738, 58739, 58740, 58741, 58742, 58743, 58744, 58745, 58746, 58747, 58748, 58749, 58750, 58751, 58752, 58753, 58754, 58755, 58756, 58757, 8560, 8561, 8562, 8563, 8564, 8565, 8566, 8567, 8568, 8569, 59238, 59239, 59240, 59241, 59242, 59243, 9352, 9353, 9354, 9355, 9356, 9357, 9358, 9359, 9360, 9361, 9362, 9363, 9364, 9365, 9366, 9367, 9368, 9369, 9370, 9371, 9332, 9333, 9334, 9335, 9336, 9337, 9338, 9339, 9340, 9341, 9342, 9343, 9344, 9345, 9346, 9347, 9348, 9349, 9350, 9351, 9312, 9313, 9314, 9315, 9316, 9317, 9318, 9319, 9320, 9321, 8364, 59245, 12832, 12833, 12834, 12835, 12836, 12837, 12838, 12839, 12840, 12841, 59246, 59247, 8544, 8545, 8546, 8547, 8548, 8549, 8550, 8551, 8552, 8553, 8554, 8555, 59248, 59249, 58758, 58759, 58760, 58761, 58762, 58763, 58764, 58765, 58766, 58767, 58768, 58769, 58770, 58771, 58772, 58773, 58774, 58775, 58776, 58777, 58778, 58779, 58780, 58781, 58782, 58783, 58784, 58785, 58786, 58787, 58788, 58789, 58790, 58791, 58792, 58793, 58794, 58795, 58796, 58797, 58798, 58799, 58800, 58801, 58802, 58803, 58804, 58805, 58806, 58807, 58808, 58809, 58810, 58811, 58812, 58813, 58814, 58815, 58816, 58817, 58818, 58819, 58820, 58821, 58822, 58823, 58824, 58825, 58826, 58827, 58828, 58829, 58830, 58831, 58832, 58833, 58834, 58835, 58836, 58837, 58838, 58839, 58840, 58841, 58842, 58843, 58844, 58845, 58846, 58847, 58848, 58849, 58850, 58851, 58852, 12288, 65281, 65282, 65283, 65509, 65285, 65286, 65287, 65288, 65289, 65290, 65291, 65292, 65293, 65294, 65295, 65296, 65297, 65298, 65299, 65300, 65301, 65302, 65303, 65304, 65305, 65306, 65307, 65308, 65309, 65310, 65311, 65312, 65313, 65314, 65315, 65316, 65317, 65318, 65319, 65320, 65321, 65322, 65323, 65324, 65325, 65326, 65327, 65328, 65329, 65330, 65331, 65332, 65333, 65334, 65335, 65336, 65337, 65338, 65339, 65340, 65341, 65342, 65343, 65344, 65345, 65346, 65347, 65348, 65349, 65350, 65351, 65352, 65353, 65354, 65355, 65356, 65357, 65358, 65359, 65360, 65361, 65362, 65363, 65364, 65365, 65366, 65367, 65368, 65369, 65370, 65371, 65372, 65373, 65507, 58854, 58855, 58856, 58857, 58858, 58859, 58860, 58861, 58862, 58863, 58864, 58865, 58866, 58867, 58868, 58869, 58870, 58871, 58872, 58873, 58874, 58875, 58876, 58877, 58878, 58879, 58880, 58881, 58882, 58883, 58884, 58885, 58886, 58887, 58888, 58889, 58890, 58891, 58892, 58893, 58894, 58895, 58896, 58897, 58898, 58899, 58900, 58901, 58902, 58903, 58904, 58905, 58906, 58907, 58908, 58909, 58910, 58911, 58912, 58913, 58914, 58915, 58916, 58917, 58918, 58919, 58920, 58921, 58922, 58923, 58924, 58925, 58926, 58927, 58928, 58929, 58930, 58931, 58932, 58933, 58934, 58935, 58936, 58937, 58938, 58939, 58940, 58941, 58942, 58943, 58944, 58945, 58946, 58947, 58948, 58949, 12353, 12354, 12355, 12356, 12357, 12358, 12359, 12360, 12361, 12362, 12363, 12364, 12365, 12366, 12367, 12368, 12369, 12370, 12371, 12372, 12373, 12374, 12375, 12376, 12377, 12378, 12379, 12380, 12381, 12382, 12383, 12384, 12385, 12386, 12387, 12388, 12389, 12390, 12391, 12392, 12393, 12394, 12395, 12396, 12397, 12398, 12399, 12400, 12401, 12402, 12403, 12404, 12405, 12406, 12407, 12408, 12409, 12410, 12411, 12412, 12413, 12414, 12415, 12416, 12417, 12418, 12419, 12420, 12421, 12422, 12423, 12424, 12425, 12426, 12427, 12428, 12429, 12430, 12431, 12432, 12433, 12434, 12435, 59250, 59251, 59252, 59253, 59254, 59255, 59256, 59257, 59258, 59259, 59260, 58950, 58951, 58952, 58953, 58954, 58955, 58956, 58957, 58958, 58959, 58960, 58961, 58962, 58963, 58964, 58965, 58966, 58967, 58968, 58969, 58970, 58971, 58972, 58973, 58974, 58975, 58976, 58977, 58978, 58979, 58980, 58981, 58982, 58983, 58984, 58985, 58986, 58987, 58988, 58989, 58990, 58991, 58992, 58993, 58994, 58995, 58996, 58997, 58998, 58999, 59e3, 59001, 59002, 59003, 59004, 59005, 59006, 59007, 59008, 59009, 59010, 59011, 59012, 59013, 59014, 59015, 59016, 59017, 59018, 59019, 59020, 59021, 59022, 59023, 59024, 59025, 59026, 59027, 59028, 59029, 59030, 59031, 59032, 59033, 59034, 59035, 59036, 59037, 59038, 59039, 59040, 59041, 59042, 59043, 59044, 59045, 12449, 12450, 12451, 12452, 12453, 12454, 12455, 12456, 12457, 12458, 12459, 12460, 12461, 12462, 12463, 12464, 12465, 12466, 12467, 12468, 12469, 12470, 12471, 12472, 12473, 12474, 12475, 12476, 12477, 12478, 12479, 12480, 12481, 12482, 12483, 12484, 12485, 12486, 12487, 12488, 12489, 12490, 12491, 12492, 12493, 12494, 12495, 12496, 12497, 12498, 12499, 12500, 12501, 12502, 12503, 12504, 12505, 12506, 12507, 12508, 12509, 12510, 12511, 12512, 12513, 12514, 12515, 12516, 12517, 12518, 12519, 12520, 12521, 12522, 12523, 12524, 12525, 12526, 12527, 12528, 12529, 12530, 12531, 12532, 12533, 12534, 59261, 59262, 59263, 59264, 59265, 59266, 59267, 59268, 59046, 59047, 59048, 59049, 59050, 59051, 59052, 59053, 59054, 59055, 59056, 59057, 59058, 59059, 59060, 59061, 59062, 59063, 59064, 59065, 59066, 59067, 59068, 59069, 59070, 59071, 59072, 59073, 59074, 59075, 59076, 59077, 59078, 59079, 59080, 59081, 59082, 59083, 59084, 59085, 59086, 59087, 59088, 59089, 59090, 59091, 59092, 59093, 59094, 59095, 59096, 59097, 59098, 59099, 59100, 59101, 59102, 59103, 59104, 59105, 59106, 59107, 59108, 59109, 59110, 59111, 59112, 59113, 59114, 59115, 59116, 59117, 59118, 59119, 59120, 59121, 59122, 59123, 59124, 59125, 59126, 59127, 59128, 59129, 59130, 59131, 59132, 59133, 59134, 59135, 59136, 59137, 59138, 59139, 59140, 59141, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 931, 932, 933, 934, 935, 936, 937, 59269, 59270, 59271, 59272, 59273, 59274, 59275, 59276, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 963, 964, 965, 966, 967, 968, 969, 59277, 59278, 59279, 59280, 59281, 59282, 59283, 65077, 65078, 65081, 65082, 65087, 65088, 65085, 65086, 65089, 65090, 65091, 65092, 59284, 59285, 65083, 65084, 65079, 65080, 65073, 59286, 65075, 65076, 59287, 59288, 59289, 59290, 59291, 59292, 59293, 59294, 59295, 59142, 59143, 59144, 59145, 59146, 59147, 59148, 59149, 59150, 59151, 59152, 59153, 59154, 59155, 59156, 59157, 59158, 59159, 59160, 59161, 59162, 59163, 59164, 59165, 59166, 59167, 59168, 59169, 59170, 59171, 59172, 59173, 59174, 59175, 59176, 59177, 59178, 59179, 59180, 59181, 59182, 59183, 59184, 59185, 59186, 59187, 59188, 59189, 59190, 59191, 59192, 59193, 59194, 59195, 59196, 59197, 59198, 59199, 59200, 59201, 59202, 59203, 59204, 59205, 59206, 59207, 59208, 59209, 59210, 59211, 59212, 59213, 59214, 59215, 59216, 59217, 59218, 59219, 59220, 59221, 59222, 59223, 59224, 59225, 59226, 59227, 59228, 59229, 59230, 59231, 59232, 59233, 59234, 59235, 59236, 59237, 1040, 1041, 1042, 1043, 1044, 1045, 1025, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 59296, 59297, 59298, 59299, 59300, 59301, 59302, 59303, 59304, 59305, 59306, 59307, 59308, 59309, 59310, 1072, 1073, 1074, 1075, 1076, 1077, 1105, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 59311, 59312, 59313, 59314, 59315, 59316, 59317, 59318, 59319, 59320, 59321, 59322, 59323, 714, 715, 729, 8211, 8213, 8229, 8245, 8453, 8457, 8598, 8599, 8600, 8601, 8725, 8735, 8739, 8786, 8806, 8807, 8895, 9552, 9553, 9554, 9555, 9556, 9557, 9558, 9559, 9560, 9561, 9562, 9563, 9564, 9565, 9566, 9567, 9568, 9569, 9570, 9571, 9572, 9573, 9574, 9575, 9576, 9577, 9578, 9579, 9580, 9581, 9582, 9583, 9584, 9585, 9586, 9587, 9601, 9602, 9603, 9604, 9605, 9606, 9607, 9608, 9609, 9610, 9611, 9612, 9613, 9614, 9615, 9619, 9620, 9621, 9660, 9661, 9698, 9699, 9700, 9701, 9737, 8853, 12306, 12317, 12318, 59324, 59325, 59326, 59327, 59328, 59329, 59330, 59331, 59332, 59333, 59334, 257, 225, 462, 224, 275, 233, 283, 232, 299, 237, 464, 236, 333, 243, 466, 242, 363, 250, 468, 249, 470, 472, 474, 476, 252, 234, 593, 59335, 324, 328, 505, 609, 59337, 59338, 59339, 59340, 12549, 12550, 12551, 12552, 12553, 12554, 12555, 12556, 12557, 12558, 12559, 12560, 12561, 12562, 12563, 12564, 12565, 12566, 12567, 12568, 12569, 12570, 12571, 12572, 12573, 12574, 12575, 12576, 12577, 12578, 12579, 12580, 12581, 12582, 12583, 12584, 12585, 59341, 59342, 59343, 59344, 59345, 59346, 59347, 59348, 59349, 59350, 59351, 59352, 59353, 59354, 59355, 59356, 59357, 59358, 59359, 59360, 59361, 12321, 12322, 12323, 12324, 12325, 12326, 12327, 12328, 12329, 12963, 13198, 13199, 13212, 13213, 13214, 13217, 13252, 13262, 13265, 13266, 13269, 65072, 65506, 65508, 59362, 8481, 12849, 59363, 8208, 59364, 59365, 59366, 12540, 12443, 12444, 12541, 12542, 12294, 12445, 12446, 65097, 65098, 65099, 65100, 65101, 65102, 65103, 65104, 65105, 65106, 65108, 65109, 65110, 65111, 65113, 65114, 65115, 65116, 65117, 65118, 65119, 65120, 65121, 65122, 65123, 65124, 65125, 65126, 65128, 65129, 65130, 65131, 12350, 12272, 12273, 12274, 12275, 12276, 12277, 12278, 12279, 12280, 12281, 12282, 12283, 12295, 59380, 59381, 59382, 59383, 59384, 59385, 59386, 59387, 59388, 59389, 59390, 59391, 59392, 9472, 9473, 9474, 9475, 9476, 9477, 9478, 9479, 9480, 9481, 9482, 9483, 9484, 9485, 9486, 9487, 9488, 9489, 9490, 9491, 9492, 9493, 9494, 9495, 9496, 9497, 9498, 9499, 9500, 9501, 9502, 9503, 9504, 9505, 9506, 9507, 9508, 9509, 9510, 9511, 9512, 9513, 9514, 9515, 9516, 9517, 9518, 9519, 9520, 9521, 9522, 9523, 9524, 9525, 9526, 9527, 9528, 9529, 9530, 9531, 9532, 9533, 9534, 9535, 9536, 9537, 9538, 9539, 9540, 9541, 9542, 9543, 9544, 9545, 9546, 9547, 59393, 59394, 59395, 59396, 59397, 59398, 59399, 59400, 59401, 59402, 59403, 59404, 59405, 59406, 59407, 29404, 29405, 29407, 29410, 29411, 29412, 29413, 29414, 29415, 29418, 29419, 29429, 29430, 29433, 29437, 29438, 29439, 29440, 29442, 29444, 29445, 29446, 29447, 29448, 29449, 29451, 29452, 29453, 29455, 29456, 29457, 29458, 29460, 29464, 29465, 29466, 29471, 29472, 29475, 29476, 29478, 29479, 29480, 29485, 29487, 29488, 29490, 29491, 29493, 29494, 29498, 29499, 29500, 29501, 29504, 29505, 29506, 29507, 29508, 29509, 29510, 29511, 29512, 29513, 29514, 29515, 29516, 29518, 29519, 29521, 29523, 29524, 29525, 29526, 29528, 29529, 29530, 29531, 29532, 29533, 29534, 29535, 29537, 29538, 29539, 29540, 29541, 29542, 29543, 29544, 29545, 29546, 29547, 29550, 29552, 29553, 57344, 57345, 57346, 57347, 57348, 57349, 57350, 57351, 57352, 57353, 57354, 57355, 57356, 57357, 57358, 57359, 57360, 57361, 57362, 57363, 57364, 57365, 57366, 57367, 57368, 57369, 57370, 57371, 57372, 57373, 57374, 57375, 57376, 57377, 57378, 57379, 57380, 57381, 57382, 57383, 57384, 57385, 57386, 57387, 57388, 57389, 57390, 57391, 57392, 57393, 57394, 57395, 57396, 57397, 57398, 57399, 57400, 57401, 57402, 57403, 57404, 57405, 57406, 57407, 57408, 57409, 57410, 57411, 57412, 57413, 57414, 57415, 57416, 57417, 57418, 57419, 57420, 57421, 57422, 57423, 57424, 57425, 57426, 57427, 57428, 57429, 57430, 57431, 57432, 57433, 57434, 57435, 57436, 57437, 29554, 29555, 29556, 29557, 29558, 29559, 29560, 29561, 29562, 29563, 29564, 29565, 29567, 29568, 29569, 29570, 29571, 29573, 29574, 29576, 29578, 29580, 29581, 29583, 29584, 29586, 29587, 29588, 29589, 29591, 29592, 29593, 29594, 29596, 29597, 29598, 29600, 29601, 29603, 29604, 29605, 29606, 29607, 29608, 29610, 29612, 29613, 29617, 29620, 29621, 29622, 29624, 29625, 29628, 29629, 29630, 29631, 29633, 29635, 29636, 29637, 29638, 29639, 29643, 29644, 29646, 29650, 29651, 29652, 29653, 29654, 29655, 29656, 29658, 29659, 29660, 29661, 29663, 29665, 29666, 29667, 29668, 29670, 29672, 29674, 29675, 29676, 29678, 29679, 29680, 29681, 29683, 29684, 29685, 29686, 29687, 57438, 57439, 57440, 57441, 57442, 57443, 57444, 57445, 57446, 57447, 57448, 57449, 57450, 57451, 57452, 57453, 57454, 57455, 57456, 57457, 57458, 57459, 57460, 57461, 57462, 57463, 57464, 57465, 57466, 57467, 57468, 57469, 57470, 57471, 57472, 57473, 57474, 57475, 57476, 57477, 57478, 57479, 57480, 57481, 57482, 57483, 57484, 57485, 57486, 57487, 57488, 57489, 57490, 57491, 57492, 57493, 57494, 57495, 57496, 57497, 57498, 57499, 57500, 57501, 57502, 57503, 57504, 57505, 57506, 57507, 57508, 57509, 57510, 57511, 57512, 57513, 57514, 57515, 57516, 57517, 57518, 57519, 57520, 57521, 57522, 57523, 57524, 57525, 57526, 57527, 57528, 57529, 57530, 57531, 29688, 29689, 29690, 29691, 29692, 29693, 29694, 29695, 29696, 29697, 29698, 29700, 29703, 29704, 29707, 29708, 29709, 29710, 29713, 29714, 29715, 29716, 29717, 29718, 29719, 29720, 29721, 29724, 29725, 29726, 29727, 29728, 29729, 29731, 29732, 29735, 29737, 29739, 29741, 29743, 29745, 29746, 29751, 29752, 29753, 29754, 29755, 29757, 29758, 29759, 29760, 29762, 29763, 29764, 29765, 29766, 29767, 29768, 29769, 29770, 29771, 29772, 29773, 29774, 29775, 29776, 29777, 29778, 29779, 29780, 29782, 29784, 29789, 29792, 29793, 29794, 29795, 29796, 29797, 29798, 29799, 29800, 29801, 29802, 29803, 29804, 29806, 29807, 29809, 29810, 29811, 29812, 29813, 29816, 29817, 29818, 57532, 57533, 57534, 57535, 57536, 57537, 57538, 57539, 57540, 57541, 57542, 57543, 57544, 57545, 57546, 57547, 57548, 57549, 57550, 57551, 57552, 57553, 57554, 57555, 57556, 57557, 57558, 57559, 57560, 57561, 57562, 57563, 57564, 57565, 57566, 57567, 57568, 57569, 57570, 57571, 57572, 57573, 57574, 57575, 57576, 57577, 57578, 57579, 57580, 57581, 57582, 57583, 57584, 57585, 57586, 57587, 57588, 57589, 57590, 57591, 57592, 57593, 57594, 57595, 57596, 57597, 57598, 57599, 57600, 57601, 57602, 57603, 57604, 57605, 57606, 57607, 57608, 57609, 57610, 57611, 57612, 57613, 57614, 57615, 57616, 57617, 57618, 57619, 57620, 57621, 57622, 57623, 57624, 57625, 29819, 29820, 29821, 29823, 29826, 29828, 29829, 29830, 29832, 29833, 29834, 29836, 29837, 29839, 29841, 29842, 29843, 29844, 29845, 29846, 29847, 29848, 29849, 29850, 29851, 29853, 29855, 29856, 29857, 29858, 29859, 29860, 29861, 29862, 29866, 29867, 29868, 29869, 29870, 29871, 29872, 29873, 29874, 29875, 29876, 29877, 29878, 29879, 29880, 29881, 29883, 29884, 29885, 29886, 29887, 29888, 29889, 29890, 29891, 29892, 29893, 29894, 29895, 29896, 29897, 29898, 29899, 29900, 29901, 29902, 29903, 29904, 29905, 29907, 29908, 29909, 29910, 29911, 29912, 29913, 29914, 29915, 29917, 29919, 29921, 29925, 29927, 29928, 29929, 29930, 29931, 29932, 29933, 29936, 29937, 29938, 57626, 57627, 57628, 57629, 57630, 57631, 57632, 57633, 57634, 57635, 57636, 57637, 57638, 57639, 57640, 57641, 57642, 57643, 57644, 57645, 57646, 57647, 57648, 57649, 57650, 57651, 57652, 57653, 57654, 57655, 57656, 57657, 57658, 57659, 57660, 57661, 57662, 57663, 57664, 57665, 57666, 57667, 57668, 57669, 57670, 57671, 57672, 57673, 57674, 57675, 57676, 57677, 57678, 57679, 57680, 57681, 57682, 57683, 57684, 57685, 57686, 57687, 57688, 57689, 57690, 57691, 57692, 57693, 57694, 57695, 57696, 57697, 57698, 57699, 57700, 57701, 57702, 57703, 57704, 57705, 57706, 57707, 57708, 57709, 57710, 57711, 57712, 57713, 57714, 57715, 57716, 57717, 57718, 57719, 29939, 29941, 29944, 29945, 29946, 29947, 29948, 29949, 29950, 29952, 29953, 29954, 29955, 29957, 29958, 29959, 29960, 29961, 29962, 29963, 29964, 29966, 29968, 29970, 29972, 29973, 29974, 29975, 29979, 29981, 29982, 29984, 29985, 29986, 29987, 29988, 29990, 29991, 29994, 29998, 30004, 30006, 30009, 30012, 30013, 30015, 30017, 30018, 30019, 30020, 30022, 30023, 30025, 30026, 30029, 30032, 30033, 30034, 30035, 30037, 30038, 30039, 30040, 30045, 30046, 30047, 30048, 30049, 30050, 30051, 30052, 30055, 30056, 30057, 30059, 30060, 30061, 30062, 30063, 30064, 30065, 30067, 30069, 30070, 30071, 30074, 30075, 30076, 30077, 30078, 30080, 30081, 30082, 30084, 30085, 30087, 57720, 57721, 57722, 57723, 57724, 57725, 57726, 57727, 57728, 57729, 57730, 57731, 57732, 57733, 57734, 57735, 57736, 57737, 57738, 57739, 57740, 57741, 57742, 57743, 57744, 57745, 57746, 57747, 57748, 57749, 57750, 57751, 57752, 57753, 57754, 57755, 57756, 57757, 57758, 57759, 57760, 57761, 57762, 57763, 57764, 57765, 57766, 57767, 57768, 57769, 57770, 57771, 57772, 57773, 57774, 57775, 57776, 57777, 57778, 57779, 57780, 57781, 57782, 57783, 57784, 57785, 57786, 57787, 57788, 57789, 57790, 57791, 57792, 57793, 57794, 57795, 57796, 57797, 57798, 57799, 57800, 57801, 57802, 57803, 57804, 57805, 57806, 57807, 57808, 57809, 57810, 57811, 57812, 57813, 30088, 30089, 30090, 30092, 30093, 30094, 30096, 30099, 30101, 30104, 30107, 30108, 30110, 30114, 30118, 30119, 30120, 30121, 30122, 30125, 30134, 30135, 30138, 30139, 30143, 30144, 30145, 30150, 30155, 30156, 30158, 30159, 30160, 30161, 30163, 30167, 30169, 30170, 30172, 30173, 30175, 30176, 30177, 30181, 30185, 30188, 30189, 30190, 30191, 30194, 30195, 30197, 30198, 30199, 30200, 30202, 30203, 30205, 30206, 30210, 30212, 30214, 30215, 30216, 30217, 30219, 30221, 30222, 30223, 30225, 30226, 30227, 30228, 30230, 30234, 30236, 30237, 30238, 30241, 30243, 30247, 30248, 30252, 30254, 30255, 30257, 30258, 30262, 30263, 30265, 30266, 30267, 30269, 30273, 30274, 30276, 57814, 57815, 57816, 57817, 57818, 57819, 57820, 57821, 57822, 57823, 57824, 57825, 57826, 57827, 57828, 57829, 57830, 57831, 57832, 57833, 57834, 57835, 57836, 57837, 57838, 57839, 57840, 57841, 57842, 57843, 57844, 57845, 57846, 57847, 57848, 57849, 57850, 57851, 57852, 57853, 57854, 57855, 57856, 57857, 57858, 57859, 57860, 57861, 57862, 57863, 57864, 57865, 57866, 57867, 57868, 57869, 57870, 57871, 57872, 57873, 57874, 57875, 57876, 57877, 57878, 57879, 57880, 57881, 57882, 57883, 57884, 57885, 57886, 57887, 57888, 57889, 57890, 57891, 57892, 57893, 57894, 57895, 57896, 57897, 57898, 57899, 57900, 57901, 57902, 57903, 57904, 57905, 57906, 57907, 30277, 30278, 30279, 30280, 30281, 30282, 30283, 30286, 30287, 30288, 30289, 30290, 30291, 30293, 30295, 30296, 30297, 30298, 30299, 30301, 30303, 30304, 30305, 30306, 30308, 30309, 30310, 30311, 30312, 30313, 30314, 30316, 30317, 30318, 30320, 30321, 30322, 30323, 30324, 30325, 30326, 30327, 30329, 30330, 30332, 30335, 30336, 30337, 30339, 30341, 30345, 30346, 30348, 30349, 30351, 30352, 30354, 30356, 30357, 30359, 30360, 30362, 30363, 30364, 30365, 30366, 30367, 30368, 30369, 30370, 30371, 30373, 30374, 30375, 30376, 30377, 30378, 30379, 30380, 30381, 30383, 30384, 30387, 30389, 30390, 30391, 30392, 30393, 30394, 30395, 30396, 30397, 30398, 30400, 30401, 30403, 21834, 38463, 22467, 25384, 21710, 21769, 21696, 30353, 30284, 34108, 30702, 33406, 30861, 29233, 38552, 38797, 27688, 23433, 20474, 25353, 26263, 23736, 33018, 26696, 32942, 26114, 30414, 20985, 25942, 29100, 32753, 34948, 20658, 22885, 25034, 28595, 33453, 25420, 25170, 21485, 21543, 31494, 20843, 30116, 24052, 25300, 36299, 38774, 25226, 32793, 22365, 38712, 32610, 29240, 30333, 26575, 30334, 25670, 20336, 36133, 25308, 31255, 26001, 29677, 25644, 25203, 33324, 39041, 26495, 29256, 25198, 25292, 20276, 29923, 21322, 21150, 32458, 37030, 24110, 26758, 27036, 33152, 32465, 26834, 30917, 34444, 38225, 20621, 35876, 33502, 32990, 21253, 35090, 21093, 30404, 30407, 30409, 30411, 30412, 30419, 30421, 30425, 30426, 30428, 30429, 30430, 30432, 30433, 30434, 30435, 30436, 30438, 30439, 30440, 30441, 30442, 30443, 30444, 30445, 30448, 30451, 30453, 30454, 30455, 30458, 30459, 30461, 30463, 30464, 30466, 30467, 30469, 30470, 30474, 30476, 30478, 30479, 30480, 30481, 30482, 30483, 30484, 30485, 30486, 30487, 30488, 30491, 30492, 30493, 30494, 30497, 30499, 30500, 30501, 30503, 30506, 30507, 30508, 30510, 30512, 30513, 30514, 30515, 30516, 30521, 30523, 30525, 30526, 30527, 30530, 30532, 30533, 30534, 30536, 30537, 30538, 30539, 30540, 30541, 30542, 30543, 30546, 30547, 30548, 30549, 30550, 30551, 30552, 30553, 30556, 34180, 38649, 20445, 22561, 39281, 23453, 25265, 25253, 26292, 35961, 40077, 29190, 26479, 30865, 24754, 21329, 21271, 36744, 32972, 36125, 38049, 20493, 29384, 22791, 24811, 28953, 34987, 22868, 33519, 26412, 31528, 23849, 32503, 29997, 27893, 36454, 36856, 36924, 40763, 27604, 37145, 31508, 24444, 30887, 34006, 34109, 27605, 27609, 27606, 24065, 24199, 30201, 38381, 25949, 24330, 24517, 36767, 22721, 33218, 36991, 38491, 38829, 36793, 32534, 36140, 25153, 20415, 21464, 21342, 36776, 36777, 36779, 36941, 26631, 24426, 33176, 34920, 40150, 24971, 21035, 30250, 24428, 25996, 28626, 28392, 23486, 25672, 20853, 20912, 26564, 19993, 31177, 39292, 28851, 30557, 30558, 30559, 30560, 30564, 30567, 30569, 30570, 30573, 30574, 30575, 30576, 30577, 30578, 30579, 30580, 30581, 30582, 30583, 30584, 30586, 30587, 30588, 30593, 30594, 30595, 30598, 30599, 30600, 30601, 30602, 30603, 30607, 30608, 30611, 30612, 30613, 30614, 30615, 30616, 30617, 30618, 30619, 30620, 30621, 30622, 30625, 30627, 30628, 30630, 30632, 30635, 30637, 30638, 30639, 30641, 30642, 30644, 30646, 30647, 30648, 30649, 30650, 30652, 30654, 30656, 30657, 30658, 30659, 30660, 30661, 30662, 30663, 30664, 30665, 30666, 30667, 30668, 30670, 30671, 30672, 30673, 30674, 30675, 30676, 30677, 30678, 30680, 30681, 30682, 30685, 30686, 30687, 30688, 30689, 30692, 30149, 24182, 29627, 33760, 25773, 25320, 38069, 27874, 21338, 21187, 25615, 38082, 31636, 20271, 24091, 33334, 33046, 33162, 28196, 27850, 39539, 25429, 21340, 21754, 34917, 22496, 19981, 24067, 27493, 31807, 37096, 24598, 25830, 29468, 35009, 26448, 25165, 36130, 30572, 36393, 37319, 24425, 33756, 34081, 39184, 21442, 34453, 27531, 24813, 24808, 28799, 33485, 33329, 20179, 27815, 34255, 25805, 31961, 27133, 26361, 33609, 21397, 31574, 20391, 20876, 27979, 23618, 36461, 25554, 21449, 33580, 33590, 26597, 30900, 25661, 23519, 23700, 24046, 35815, 25286, 26612, 35962, 25600, 25530, 34633, 39307, 35863, 32544, 38130, 20135, 38416, 39076, 26124, 29462, 30694, 30696, 30698, 30703, 30704, 30705, 30706, 30708, 30709, 30711, 30713, 30714, 30715, 30716, 30723, 30724, 30725, 30726, 30727, 30728, 30730, 30731, 30734, 30735, 30736, 30739, 30741, 30745, 30747, 30750, 30752, 30753, 30754, 30756, 30760, 30762, 30763, 30766, 30767, 30769, 30770, 30771, 30773, 30774, 30781, 30783, 30785, 30786, 30787, 30788, 30790, 30792, 30793, 30794, 30795, 30797, 30799, 30801, 30803, 30804, 30808, 30809, 30810, 30811, 30812, 30814, 30815, 30816, 30817, 30818, 30819, 30820, 30821, 30822, 30823, 30824, 30825, 30831, 30832, 30833, 30834, 30835, 30836, 30837, 30838, 30840, 30841, 30842, 30843, 30845, 30846, 30847, 30848, 30849, 30850, 30851, 22330, 23581, 24120, 38271, 20607, 32928, 21378, 25950, 30021, 21809, 20513, 36229, 25220, 38046, 26397, 22066, 28526, 24034, 21557, 28818, 36710, 25199, 25764, 25507, 24443, 28552, 37108, 33251, 36784, 23576, 26216, 24561, 27785, 38472, 36225, 34924, 25745, 31216, 22478, 27225, 25104, 21576, 20056, 31243, 24809, 28548, 35802, 25215, 36894, 39563, 31204, 21507, 30196, 25345, 21273, 27744, 36831, 24347, 39536, 32827, 40831, 20360, 23610, 36196, 32709, 26021, 28861, 20805, 20914, 34411, 23815, 23456, 25277, 37228, 30068, 36364, 31264, 24833, 31609, 20167, 32504, 30597, 19985, 33261, 21021, 20986, 27249, 21416, 36487, 38148, 38607, 28353, 38500, 26970, 30852, 30853, 30854, 30856, 30858, 30859, 30863, 30864, 30866, 30868, 30869, 30870, 30873, 30877, 30878, 30880, 30882, 30884, 30886, 30888, 30889, 30890, 30891, 30892, 30893, 30894, 30895, 30901, 30902, 30903, 30904, 30906, 30907, 30908, 30909, 30911, 30912, 30914, 30915, 30916, 30918, 30919, 30920, 30924, 30925, 30926, 30927, 30929, 30930, 30931, 30934, 30935, 30936, 30938, 30939, 30940, 30941, 30942, 30943, 30944, 30945, 30946, 30947, 30948, 30949, 30950, 30951, 30953, 30954, 30955, 30957, 30958, 30959, 30960, 30961, 30963, 30965, 30966, 30968, 30969, 30971, 30972, 30973, 30974, 30975, 30976, 30978, 30979, 30980, 30982, 30983, 30984, 30985, 30986, 30987, 30988, 30784, 20648, 30679, 25616, 35302, 22788, 25571, 24029, 31359, 26941, 20256, 33337, 21912, 20018, 30126, 31383, 24162, 24202, 38383, 21019, 21561, 28810, 25462, 38180, 22402, 26149, 26943, 37255, 21767, 28147, 32431, 34850, 25139, 32496, 30133, 33576, 30913, 38604, 36766, 24904, 29943, 35789, 27492, 21050, 36176, 27425, 32874, 33905, 22257, 21254, 20174, 19995, 20945, 31895, 37259, 31751, 20419, 36479, 31713, 31388, 25703, 23828, 20652, 33030, 30209, 31929, 28140, 32736, 26449, 23384, 23544, 30923, 25774, 25619, 25514, 25387, 38169, 25645, 36798, 31572, 30249, 25171, 22823, 21574, 27513, 20643, 25140, 24102, 27526, 20195, 36151, 34955, 24453, 36910, 30989, 30990, 30991, 30992, 30993, 30994, 30996, 30997, 30998, 30999, 31e3, 31001, 31002, 31003, 31004, 31005, 31007, 31008, 31009, 31010, 31011, 31013, 31014, 31015, 31016, 31017, 31018, 31019, 31020, 31021, 31022, 31023, 31024, 31025, 31026, 31027, 31029, 31030, 31031, 31032, 31033, 31037, 31039, 31042, 31043, 31044, 31045, 31047, 31050, 31051, 31052, 31053, 31054, 31055, 31056, 31057, 31058, 31060, 31061, 31064, 31065, 31073, 31075, 31076, 31078, 31081, 31082, 31083, 31084, 31086, 31088, 31089, 31090, 31091, 31092, 31093, 31094, 31097, 31099, 31100, 31101, 31102, 31103, 31106, 31107, 31110, 31111, 31112, 31113, 31115, 31116, 31117, 31118, 31120, 31121, 31122, 24608, 32829, 25285, 20025, 21333, 37112, 25528, 32966, 26086, 27694, 20294, 24814, 28129, 35806, 24377, 34507, 24403, 25377, 20826, 33633, 26723, 20992, 25443, 36424, 20498, 23707, 31095, 23548, 21040, 31291, 24764, 36947, 30423, 24503, 24471, 30340, 36460, 28783, 30331, 31561, 30634, 20979, 37011, 22564, 20302, 28404, 36842, 25932, 31515, 29380, 28068, 32735, 23265, 25269, 24213, 22320, 33922, 31532, 24093, 24351, 36882, 32532, 39072, 25474, 28359, 30872, 28857, 20856, 38747, 22443, 30005, 20291, 30008, 24215, 24806, 22880, 28096, 27583, 30857, 21500, 38613, 20939, 20993, 25481, 21514, 38035, 35843, 36300, 29241, 30879, 34678, 36845, 35853, 21472, 31123, 31124, 31125, 31126, 31127, 31128, 31129, 31131, 31132, 31133, 31134, 31135, 31136, 31137, 31138, 31139, 31140, 31141, 31142, 31144, 31145, 31146, 31147, 31148, 31149, 31150, 31151, 31152, 31153, 31154, 31156, 31157, 31158, 31159, 31160, 31164, 31167, 31170, 31172, 31173, 31175, 31176, 31178, 31180, 31182, 31183, 31184, 31187, 31188, 31190, 31191, 31193, 31194, 31195, 31196, 31197, 31198, 31200, 31201, 31202, 31205, 31208, 31210, 31212, 31214, 31217, 31218, 31219, 31220, 31221, 31222, 31223, 31225, 31226, 31228, 31230, 31231, 31233, 31236, 31237, 31239, 31240, 31241, 31242, 31244, 31247, 31248, 31249, 31250, 31251, 31253, 31254, 31256, 31257, 31259, 31260, 19969, 30447, 21486, 38025, 39030, 40718, 38189, 23450, 35746, 20002, 19996, 20908, 33891, 25026, 21160, 26635, 20375, 24683, 20923, 27934, 20828, 25238, 26007, 38497, 35910, 36887, 30168, 37117, 30563, 27602, 29322, 29420, 35835, 22581, 30585, 36172, 26460, 38208, 32922, 24230, 28193, 22930, 31471, 30701, 38203, 27573, 26029, 32526, 22534, 20817, 38431, 23545, 22697, 21544, 36466, 25958, 39039, 22244, 38045, 30462, 36929, 25479, 21702, 22810, 22842, 22427, 36530, 26421, 36346, 33333, 21057, 24816, 22549, 34558, 23784, 40517, 20420, 39069, 35769, 23077, 24694, 21380, 25212, 36943, 37122, 39295, 24681, 32780, 20799, 32819, 23572, 39285, 27953, 20108, 31261, 31263, 31265, 31266, 31268, 31269, 31270, 31271, 31272, 31273, 31274, 31275, 31276, 31277, 31278, 31279, 31280, 31281, 31282, 31284, 31285, 31286, 31288, 31290, 31294, 31296, 31297, 31298, 31299, 31300, 31301, 31303, 31304, 31305, 31306, 31307, 31308, 31309, 31310, 31311, 31312, 31314, 31315, 31316, 31317, 31318, 31320, 31321, 31322, 31323, 31324, 31325, 31326, 31327, 31328, 31329, 31330, 31331, 31332, 31333, 31334, 31335, 31336, 31337, 31338, 31339, 31340, 31341, 31342, 31343, 31345, 31346, 31347, 31349, 31355, 31356, 31357, 31358, 31362, 31365, 31367, 31369, 31370, 31371, 31372, 31374, 31375, 31376, 31379, 31380, 31385, 31386, 31387, 31390, 31393, 31394, 36144, 21457, 32602, 31567, 20240, 20047, 38400, 27861, 29648, 34281, 24070, 30058, 32763, 27146, 30718, 38034, 32321, 20961, 28902, 21453, 36820, 33539, 36137, 29359, 39277, 27867, 22346, 33459, 26041, 32938, 25151, 38450, 22952, 20223, 35775, 32442, 25918, 33778, 38750, 21857, 39134, 32933, 21290, 35837, 21536, 32954, 24223, 27832, 36153, 33452, 37210, 21545, 27675, 20998, 32439, 22367, 28954, 27774, 31881, 22859, 20221, 24575, 24868, 31914, 20016, 23553, 26539, 34562, 23792, 38155, 39118, 30127, 28925, 36898, 20911, 32541, 35773, 22857, 20964, 20315, 21542, 22827, 25975, 32932, 23413, 25206, 25282, 36752, 24133, 27679, 31526, 20239, 20440, 26381, 31395, 31396, 31399, 31401, 31402, 31403, 31406, 31407, 31408, 31409, 31410, 31412, 31413, 31414, 31415, 31416, 31417, 31418, 31419, 31420, 31421, 31422, 31424, 31425, 31426, 31427, 31428, 31429, 31430, 31431, 31432, 31433, 31434, 31436, 31437, 31438, 31439, 31440, 31441, 31442, 31443, 31444, 31445, 31447, 31448, 31450, 31451, 31452, 31453, 31457, 31458, 31460, 31463, 31464, 31465, 31466, 31467, 31468, 31470, 31472, 31473, 31474, 31475, 31476, 31477, 31478, 31479, 31480, 31483, 31484, 31486, 31488, 31489, 31490, 31493, 31495, 31497, 31500, 31501, 31502, 31504, 31506, 31507, 31510, 31511, 31512, 31514, 31516, 31517, 31519, 31521, 31522, 31523, 31527, 31529, 31533, 28014, 28074, 31119, 34993, 24343, 29995, 25242, 36741, 20463, 37340, 26023, 33071, 33105, 24220, 33104, 36212, 21103, 35206, 36171, 22797, 20613, 20184, 38428, 29238, 33145, 36127, 23500, 35747, 38468, 22919, 32538, 21648, 22134, 22030, 35813, 25913, 27010, 38041, 30422, 28297, 24178, 29976, 26438, 26577, 31487, 32925, 36214, 24863, 31174, 25954, 36195, 20872, 21018, 38050, 32568, 32923, 32434, 23703, 28207, 26464, 31705, 30347, 39640, 33167, 32660, 31957, 25630, 38224, 31295, 21578, 21733, 27468, 25601, 25096, 40509, 33011, 30105, 21106, 38761, 33883, 26684, 34532, 38401, 38548, 38124, 20010, 21508, 32473, 26681, 36319, 32789, 26356, 24218, 32697, 31535, 31536, 31538, 31540, 31541, 31542, 31543, 31545, 31547, 31549, 31551, 31552, 31553, 31554, 31555, 31556, 31558, 31560, 31562, 31565, 31566, 31571, 31573, 31575, 31577, 31580, 31582, 31583, 31585, 31587, 31588, 31589, 31590, 31591, 31592, 31593, 31594, 31595, 31596, 31597, 31599, 31600, 31603, 31604, 31606, 31608, 31610, 31612, 31613, 31615, 31617, 31618, 31619, 31620, 31622, 31623, 31624, 31625, 31626, 31627, 31628, 31630, 31631, 31633, 31634, 31635, 31638, 31640, 31641, 31642, 31643, 31646, 31647, 31648, 31651, 31652, 31653, 31662, 31663, 31664, 31666, 31667, 31669, 31670, 31671, 31673, 31674, 31675, 31676, 31677, 31678, 31679, 31680, 31682, 31683, 31684, 22466, 32831, 26775, 24037, 25915, 21151, 24685, 40858, 20379, 36524, 20844, 23467, 24339, 24041, 27742, 25329, 36129, 20849, 38057, 21246, 27807, 33503, 29399, 22434, 26500, 36141, 22815, 36764, 33735, 21653, 31629, 20272, 27837, 23396, 22993, 40723, 21476, 34506, 39592, 35895, 32929, 25925, 39038, 22266, 38599, 21038, 29916, 21072, 23521, 25346, 35074, 20054, 25296, 24618, 26874, 20851, 23448, 20896, 35266, 31649, 39302, 32592, 24815, 28748, 36143, 20809, 24191, 36891, 29808, 35268, 22317, 30789, 24402, 40863, 38394, 36712, 39740, 35809, 30328, 26690, 26588, 36330, 36149, 21053, 36746, 28378, 26829, 38149, 37101, 22269, 26524, 35065, 36807, 21704, 31685, 31688, 31689, 31690, 31691, 31693, 31694, 31695, 31696, 31698, 31700, 31701, 31702, 31703, 31704, 31707, 31708, 31710, 31711, 31712, 31714, 31715, 31716, 31719, 31720, 31721, 31723, 31724, 31725, 31727, 31728, 31730, 31731, 31732, 31733, 31734, 31736, 31737, 31738, 31739, 31741, 31743, 31744, 31745, 31746, 31747, 31748, 31749, 31750, 31752, 31753, 31754, 31757, 31758, 31760, 31761, 31762, 31763, 31764, 31765, 31767, 31768, 31769, 31770, 31771, 31772, 31773, 31774, 31776, 31777, 31778, 31779, 31780, 31781, 31784, 31785, 31787, 31788, 31789, 31790, 31791, 31792, 31793, 31794, 31795, 31796, 31797, 31798, 31799, 31801, 31802, 31803, 31804, 31805, 31806, 31810, 39608, 23401, 28023, 27686, 20133, 23475, 39559, 37219, 25e3, 37039, 38889, 21547, 28085, 23506, 20989, 21898, 32597, 32752, 25788, 25421, 26097, 25022, 24717, 28938, 27735, 27721, 22831, 26477, 33322, 22741, 22158, 35946, 27627, 37085, 22909, 32791, 21495, 28009, 21621, 21917, 33655, 33743, 26680, 31166, 21644, 20309, 21512, 30418, 35977, 38402, 27827, 28088, 36203, 35088, 40548, 36154, 22079, 40657, 30165, 24456, 29408, 24680, 21756, 20136, 27178, 34913, 24658, 36720, 21700, 28888, 34425, 40511, 27946, 23439, 24344, 32418, 21897, 20399, 29492, 21564, 21402, 20505, 21518, 21628, 20046, 24573, 29786, 22774, 33899, 32993, 34676, 29392, 31946, 28246, 31811, 31812, 31813, 31814, 31815, 31816, 31817, 31818, 31819, 31820, 31822, 31823, 31824, 31825, 31826, 31827, 31828, 31829, 31830, 31831, 31832, 31833, 31834, 31835, 31836, 31837, 31838, 31839, 31840, 31841, 31842, 31843, 31844, 31845, 31846, 31847, 31848, 31849, 31850, 31851, 31852, 31853, 31854, 31855, 31856, 31857, 31858, 31861, 31862, 31863, 31864, 31865, 31866, 31870, 31871, 31872, 31873, 31874, 31875, 31876, 31877, 31878, 31879, 31880, 31882, 31883, 31884, 31885, 31886, 31887, 31888, 31891, 31892, 31894, 31897, 31898, 31899, 31904, 31905, 31907, 31910, 31911, 31912, 31913, 31915, 31916, 31917, 31919, 31920, 31924, 31925, 31926, 31927, 31928, 31930, 31931, 24359, 34382, 21804, 25252, 20114, 27818, 25143, 33457, 21719, 21326, 29502, 28369, 30011, 21010, 21270, 35805, 27088, 24458, 24576, 28142, 22351, 27426, 29615, 26707, 36824, 32531, 25442, 24739, 21796, 30186, 35938, 28949, 28067, 23462, 24187, 33618, 24908, 40644, 30970, 34647, 31783, 30343, 20976, 24822, 29004, 26179, 24140, 24653, 35854, 28784, 25381, 36745, 24509, 24674, 34516, 22238, 27585, 24724, 24935, 21321, 24800, 26214, 36159, 31229, 20250, 28905, 27719, 35763, 35826, 32472, 33636, 26127, 23130, 39746, 27985, 28151, 35905, 27963, 20249, 28779, 33719, 25110, 24785, 38669, 36135, 31096, 20987, 22334, 22522, 26426, 30072, 31293, 31215, 31637, 31935, 31936, 31938, 31939, 31940, 31942, 31945, 31947, 31950, 31951, 31952, 31953, 31954, 31955, 31956, 31960, 31962, 31963, 31965, 31966, 31969, 31970, 31971, 31972, 31973, 31974, 31975, 31977, 31978, 31979, 31980, 31981, 31982, 31984, 31985, 31986, 31987, 31988, 31989, 31990, 31991, 31993, 31994, 31996, 31997, 31998, 31999, 32e3, 32001, 32002, 32003, 32004, 32005, 32006, 32007, 32008, 32009, 32011, 32012, 32013, 32014, 32015, 32016, 32017, 32018, 32019, 32020, 32021, 32022, 32023, 32024, 32025, 32026, 32027, 32028, 32029, 32030, 32031, 32033, 32035, 32036, 32037, 32038, 32040, 32041, 32042, 32044, 32045, 32046, 32048, 32049, 32050, 32051, 32052, 32053, 32054, 32908, 39269, 36857, 28608, 35749, 40481, 23020, 32489, 32521, 21513, 26497, 26840, 36753, 31821, 38598, 21450, 24613, 30142, 27762, 21363, 23241, 32423, 25380, 20960, 33034, 24049, 34015, 25216, 20864, 23395, 20238, 31085, 21058, 24760, 27982, 23492, 23490, 35745, 35760, 26082, 24524, 38469, 22931, 32487, 32426, 22025, 26551, 22841, 20339, 23478, 21152, 33626, 39050, 36158, 30002, 38078, 20551, 31292, 20215, 26550, 39550, 23233, 27516, 30417, 22362, 23574, 31546, 38388, 29006, 20860, 32937, 33392, 22904, 32516, 33575, 26816, 26604, 30897, 30839, 25315, 25441, 31616, 20461, 21098, 20943, 33616, 27099, 37492, 36341, 36145, 35265, 38190, 31661, 20214, 32055, 32056, 32057, 32058, 32059, 32060, 32061, 32062, 32063, 32064, 32065, 32066, 32067, 32068, 32069, 32070, 32071, 32072, 32073, 32074, 32075, 32076, 32077, 32078, 32079, 32080, 32081, 32082, 32083, 32084, 32085, 32086, 32087, 32088, 32089, 32090, 32091, 32092, 32093, 32094, 32095, 32096, 32097, 32098, 32099, 32100, 32101, 32102, 32103, 32104, 32105, 32106, 32107, 32108, 32109, 32111, 32112, 32113, 32114, 32115, 32116, 32117, 32118, 32120, 32121, 32122, 32123, 32124, 32125, 32126, 32127, 32128, 32129, 32130, 32131, 32132, 32133, 32134, 32135, 32136, 32137, 32138, 32139, 32140, 32141, 32142, 32143, 32144, 32145, 32146, 32147, 32148, 32149, 32150, 32151, 32152, 20581, 33328, 21073, 39279, 28176, 28293, 28071, 24314, 20725, 23004, 23558, 27974, 27743, 30086, 33931, 26728, 22870, 35762, 21280, 37233, 38477, 34121, 26898, 30977, 28966, 33014, 20132, 37066, 27975, 39556, 23047, 22204, 25605, 38128, 30699, 20389, 33050, 29409, 35282, 39290, 32564, 32478, 21119, 25945, 37237, 36735, 36739, 21483, 31382, 25581, 25509, 30342, 31224, 34903, 38454, 25130, 21163, 33410, 26708, 26480, 25463, 30571, 31469, 27905, 32467, 35299, 22992, 25106, 34249, 33445, 30028, 20511, 20171, 30117, 35819, 23626, 24062, 31563, 26020, 37329, 20170, 27941, 35167, 32039, 38182, 20165, 35880, 36827, 38771, 26187, 31105, 36817, 28908, 28024, 32153, 32154, 32155, 32156, 32157, 32158, 32159, 32160, 32161, 32162, 32163, 32164, 32165, 32167, 32168, 32169, 32170, 32171, 32172, 32173, 32175, 32176, 32177, 32178, 32179, 32180, 32181, 32182, 32183, 32184, 32185, 32186, 32187, 32188, 32189, 32190, 32191, 32192, 32193, 32194, 32195, 32196, 32197, 32198, 32199, 32200, 32201, 32202, 32203, 32204, 32205, 32206, 32207, 32208, 32209, 32210, 32211, 32212, 32213, 32214, 32215, 32216, 32217, 32218, 32219, 32220, 32221, 32222, 32223, 32224, 32225, 32226, 32227, 32228, 32229, 32230, 32231, 32232, 32233, 32234, 32235, 32236, 32237, 32238, 32239, 32240, 32241, 32242, 32243, 32244, 32245, 32246, 32247, 32248, 32249, 32250, 23613, 21170, 33606, 20834, 33550, 30555, 26230, 40120, 20140, 24778, 31934, 31923, 32463, 20117, 35686, 26223, 39048, 38745, 22659, 25964, 38236, 24452, 30153, 38742, 31455, 31454, 20928, 28847, 31384, 25578, 31350, 32416, 29590, 38893, 20037, 28792, 20061, 37202, 21417, 25937, 26087, 33276, 33285, 21646, 23601, 30106, 38816, 25304, 29401, 30141, 23621, 39545, 33738, 23616, 21632, 30697, 20030, 27822, 32858, 25298, 25454, 24040, 20855, 36317, 36382, 38191, 20465, 21477, 24807, 28844, 21095, 25424, 40515, 23071, 20518, 30519, 21367, 32482, 25733, 25899, 25225, 25496, 20500, 29237, 35273, 20915, 35776, 32477, 22343, 33740, 38055, 20891, 21531, 23803, 32251, 32252, 32253, 32254, 32255, 32256, 32257, 32258, 32259, 32260, 32261, 32262, 32263, 32264, 32265, 32266, 32267, 32268, 32269, 32270, 32271, 32272, 32273, 32274, 32275, 32276, 32277, 32278, 32279, 32280, 32281, 32282, 32283, 32284, 32285, 32286, 32287, 32288, 32289, 32290, 32291, 32292, 32293, 32294, 32295, 32296, 32297, 32298, 32299, 32300, 32301, 32302, 32303, 32304, 32305, 32306, 32307, 32308, 32309, 32310, 32311, 32312, 32313, 32314, 32316, 32317, 32318, 32319, 32320, 32322, 32323, 32324, 32325, 32326, 32328, 32329, 32330, 32331, 32332, 32333, 32334, 32335, 32336, 32337, 32338, 32339, 32340, 32341, 32342, 32343, 32344, 32345, 32346, 32347, 32348, 32349, 20426, 31459, 27994, 37089, 39567, 21888, 21654, 21345, 21679, 24320, 25577, 26999, 20975, 24936, 21002, 22570, 21208, 22350, 30733, 30475, 24247, 24951, 31968, 25179, 25239, 20130, 28821, 32771, 25335, 28900, 38752, 22391, 33499, 26607, 26869, 30933, 39063, 31185, 22771, 21683, 21487, 28212, 20811, 21051, 23458, 35838, 32943, 21827, 22438, 24691, 22353, 21549, 31354, 24656, 23380, 25511, 25248, 21475, 25187, 23495, 26543, 21741, 31391, 33510, 37239, 24211, 35044, 22840, 22446, 25358, 36328, 33007, 22359, 31607, 20393, 24555, 23485, 27454, 21281, 31568, 29378, 26694, 30719, 30518, 26103, 20917, 20111, 30420, 23743, 31397, 33909, 22862, 39745, 20608, 32350, 32351, 32352, 32353, 32354, 32355, 32356, 32357, 32358, 32359, 32360, 32361, 32362, 32363, 32364, 32365, 32366, 32367, 32368, 32369, 32370, 32371, 32372, 32373, 32374, 32375, 32376, 32377, 32378, 32379, 32380, 32381, 32382, 32383, 32384, 32385, 32387, 32388, 32389, 32390, 32391, 32392, 32393, 32394, 32395, 32396, 32397, 32398, 32399, 32400, 32401, 32402, 32403, 32404, 32405, 32406, 32407, 32408, 32409, 32410, 32412, 32413, 32414, 32430, 32436, 32443, 32444, 32470, 32484, 32492, 32505, 32522, 32528, 32542, 32567, 32569, 32571, 32572, 32573, 32574, 32575, 32576, 32577, 32579, 32582, 32583, 32584, 32585, 32586, 32587, 32588, 32589, 32590, 32591, 32594, 32595, 39304, 24871, 28291, 22372, 26118, 25414, 22256, 25324, 25193, 24275, 38420, 22403, 25289, 21895, 34593, 33098, 36771, 21862, 33713, 26469, 36182, 34013, 23146, 26639, 25318, 31726, 38417, 20848, 28572, 35888, 25597, 35272, 25042, 32518, 28866, 28389, 29701, 27028, 29436, 24266, 37070, 26391, 28010, 25438, 21171, 29282, 32769, 20332, 23013, 37226, 28889, 28061, 21202, 20048, 38647, 38253, 34174, 30922, 32047, 20769, 22418, 25794, 32907, 31867, 27882, 26865, 26974, 20919, 21400, 26792, 29313, 40654, 31729, 29432, 31163, 28435, 29702, 26446, 37324, 40100, 31036, 33673, 33620, 21519, 26647, 20029, 21385, 21169, 30782, 21382, 21033, 20616, 20363, 20432, 32598, 32601, 32603, 32604, 32605, 32606, 32608, 32611, 32612, 32613, 32614, 32615, 32619, 32620, 32621, 32623, 32624, 32627, 32629, 32630, 32631, 32632, 32634, 32635, 32636, 32637, 32639, 32640, 32642, 32643, 32644, 32645, 32646, 32647, 32648, 32649, 32651, 32653, 32655, 32656, 32657, 32658, 32659, 32661, 32662, 32663, 32664, 32665, 32667, 32668, 32672, 32674, 32675, 32677, 32678, 32680, 32681, 32682, 32683, 32684, 32685, 32686, 32689, 32691, 32692, 32693, 32694, 32695, 32698, 32699, 32702, 32704, 32706, 32707, 32708, 32710, 32711, 32712, 32713, 32715, 32717, 32719, 32720, 32721, 32722, 32723, 32726, 32727, 32729, 32730, 32731, 32732, 32733, 32734, 32738, 32739, 30178, 31435, 31890, 27813, 38582, 21147, 29827, 21737, 20457, 32852, 33714, 36830, 38256, 24265, 24604, 28063, 24088, 25947, 33080, 38142, 24651, 28860, 32451, 31918, 20937, 26753, 31921, 33391, 20004, 36742, 37327, 26238, 20142, 35845, 25769, 32842, 20698, 30103, 29134, 23525, 36797, 28518, 20102, 25730, 38243, 24278, 26009, 21015, 35010, 28872, 21155, 29454, 29747, 26519, 30967, 38678, 20020, 37051, 40158, 28107, 20955, 36161, 21533, 25294, 29618, 33777, 38646, 40836, 38083, 20278, 32666, 20940, 28789, 38517, 23725, 39046, 21478, 20196, 28316, 29705, 27060, 30827, 39311, 30041, 21016, 30244, 27969, 26611, 20845, 40857, 32843, 21657, 31548, 31423, 32740, 32743, 32744, 32746, 32747, 32748, 32749, 32751, 32754, 32756, 32757, 32758, 32759, 32760, 32761, 32762, 32765, 32766, 32767, 32770, 32775, 32776, 32777, 32778, 32782, 32783, 32785, 32787, 32794, 32795, 32797, 32798, 32799, 32801, 32803, 32804, 32811, 32812, 32813, 32814, 32815, 32816, 32818, 32820, 32825, 32826, 32828, 32830, 32832, 32833, 32836, 32837, 32839, 32840, 32841, 32846, 32847, 32848, 32849, 32851, 32853, 32854, 32855, 32857, 32859, 32860, 32861, 32862, 32863, 32864, 32865, 32866, 32867, 32868, 32869, 32870, 32871, 32872, 32875, 32876, 32877, 32878, 32879, 32880, 32882, 32883, 32884, 32885, 32886, 32887, 32888, 32889, 32890, 32891, 32892, 32893, 38534, 22404, 25314, 38471, 27004, 23044, 25602, 31699, 28431, 38475, 33446, 21346, 39045, 24208, 28809, 25523, 21348, 34383, 40065, 40595, 30860, 38706, 36335, 36162, 40575, 28510, 31108, 24405, 38470, 25134, 39540, 21525, 38109, 20387, 26053, 23653, 23649, 32533, 34385, 27695, 24459, 29575, 28388, 32511, 23782, 25371, 23402, 28390, 21365, 20081, 25504, 30053, 25249, 36718, 20262, 20177, 27814, 32438, 35770, 33821, 34746, 32599, 36923, 38179, 31657, 39585, 35064, 33853, 27931, 39558, 32476, 22920, 40635, 29595, 30721, 34434, 39532, 39554, 22043, 21527, 22475, 20080, 40614, 21334, 36808, 33033, 30610, 39314, 34542, 28385, 34067, 26364, 24930, 28459, 32894, 32897, 32898, 32901, 32904, 32906, 32909, 32910, 32911, 32912, 32913, 32914, 32916, 32917, 32919, 32921, 32926, 32931, 32934, 32935, 32936, 32940, 32944, 32947, 32949, 32950, 32952, 32953, 32955, 32965, 32967, 32968, 32969, 32970, 32971, 32975, 32976, 32977, 32978, 32979, 32980, 32981, 32984, 32991, 32992, 32994, 32995, 32998, 33006, 33013, 33015, 33017, 33019, 33022, 33023, 33024, 33025, 33027, 33028, 33029, 33031, 33032, 33035, 33036, 33045, 33047, 33049, 33051, 33052, 33053, 33055, 33056, 33057, 33058, 33059, 33060, 33061, 33062, 33063, 33064, 33065, 33066, 33067, 33069, 33070, 33072, 33075, 33076, 33077, 33079, 33081, 33082, 33083, 33084, 33085, 33087, 35881, 33426, 33579, 30450, 27667, 24537, 33725, 29483, 33541, 38170, 27611, 30683, 38086, 21359, 33538, 20882, 24125, 35980, 36152, 20040, 29611, 26522, 26757, 37238, 38665, 29028, 27809, 30473, 23186, 38209, 27599, 32654, 26151, 23504, 22969, 23194, 38376, 38391, 20204, 33804, 33945, 27308, 30431, 38192, 29467, 26790, 23391, 30511, 37274, 38753, 31964, 36855, 35868, 24357, 31859, 31192, 35269, 27852, 34588, 23494, 24130, 26825, 30496, 32501, 20885, 20813, 21193, 23081, 32517, 38754, 33495, 25551, 30596, 34256, 31186, 28218, 24217, 22937, 34065, 28781, 27665, 25279, 30399, 25935, 24751, 38397, 26126, 34719, 40483, 38125, 21517, 21629, 35884, 25720, 33088, 33089, 33090, 33091, 33092, 33093, 33095, 33097, 33101, 33102, 33103, 33106, 33110, 33111, 33112, 33115, 33116, 33117, 33118, 33119, 33121, 33122, 33123, 33124, 33126, 33128, 33130, 33131, 33132, 33135, 33138, 33139, 33141, 33142, 33143, 33144, 33153, 33155, 33156, 33157, 33158, 33159, 33161, 33163, 33164, 33165, 33166, 33168, 33170, 33171, 33172, 33173, 33174, 33175, 33177, 33178, 33182, 33183, 33184, 33185, 33186, 33188, 33189, 33191, 33193, 33195, 33196, 33197, 33198, 33199, 33200, 33201, 33202, 33204, 33205, 33206, 33207, 33208, 33209, 33212, 33213, 33214, 33215, 33220, 33221, 33223, 33224, 33225, 33227, 33229, 33230, 33231, 33232, 33233, 33234, 33235, 25721, 34321, 27169, 33180, 30952, 25705, 39764, 25273, 26411, 33707, 22696, 40664, 27819, 28448, 23518, 38476, 35851, 29279, 26576, 25287, 29281, 20137, 22982, 27597, 22675, 26286, 24149, 21215, 24917, 26408, 30446, 30566, 29287, 31302, 25343, 21738, 21584, 38048, 37027, 23068, 32435, 27670, 20035, 22902, 32784, 22856, 21335, 30007, 38590, 22218, 25376, 33041, 24700, 38393, 28118, 21602, 39297, 20869, 23273, 33021, 22958, 38675, 20522, 27877, 23612, 25311, 20320, 21311, 33147, 36870, 28346, 34091, 25288, 24180, 30910, 25781, 25467, 24565, 23064, 37247, 40479, 23615, 25423, 32834, 23421, 21870, 38218, 38221, 28037, 24744, 26592, 29406, 20957, 23425, 33236, 33237, 33238, 33239, 33240, 33241, 33242, 33243, 33244, 33245, 33246, 33247, 33248, 33249, 33250, 33252, 33253, 33254, 33256, 33257, 33259, 33262, 33263, 33264, 33265, 33266, 33269, 33270, 33271, 33272, 33273, 33274, 33277, 33279, 33283, 33287, 33288, 33289, 33290, 33291, 33294, 33295, 33297, 33299, 33301, 33302, 33303, 33304, 33305, 33306, 33309, 33312, 33316, 33317, 33318, 33319, 33321, 33326, 33330, 33338, 33340, 33341, 33343, 33344, 33345, 33346, 33347, 33349, 33350, 33352, 33354, 33356, 33357, 33358, 33360, 33361, 33362, 33363, 33364, 33365, 33366, 33367, 33369, 33371, 33372, 33373, 33374, 33376, 33377, 33378, 33379, 33380, 33381, 33382, 33383, 33385, 25319, 27870, 29275, 25197, 38062, 32445, 33043, 27987, 20892, 24324, 22900, 21162, 24594, 22899, 26262, 34384, 30111, 25386, 25062, 31983, 35834, 21734, 27431, 40485, 27572, 34261, 21589, 20598, 27812, 21866, 36276, 29228, 24085, 24597, 29750, 25293, 25490, 29260, 24472, 28227, 27966, 25856, 28504, 30424, 30928, 30460, 30036, 21028, 21467, 20051, 24222, 26049, 32810, 32982, 25243, 21638, 21032, 28846, 34957, 36305, 27873, 21624, 32986, 22521, 35060, 36180, 38506, 37197, 20329, 27803, 21943, 30406, 30768, 25256, 28921, 28558, 24429, 34028, 26842, 30844, 31735, 33192, 26379, 40527, 25447, 30896, 22383, 30738, 38713, 25209, 25259, 21128, 29749, 27607, 33386, 33387, 33388, 33389, 33393, 33397, 33398, 33399, 33400, 33403, 33404, 33408, 33409, 33411, 33413, 33414, 33415, 33417, 33420, 33424, 33427, 33428, 33429, 33430, 33434, 33435, 33438, 33440, 33442, 33443, 33447, 33458, 33461, 33462, 33466, 33467, 33468, 33471, 33472, 33474, 33475, 33477, 33478, 33481, 33488, 33494, 33497, 33498, 33501, 33506, 33511, 33512, 33513, 33514, 33516, 33517, 33518, 33520, 33522, 33523, 33525, 33526, 33528, 33530, 33532, 33533, 33534, 33535, 33536, 33546, 33547, 33549, 33552, 33554, 33555, 33558, 33560, 33561, 33565, 33566, 33567, 33568, 33569, 33570, 33571, 33572, 33573, 33574, 33577, 33578, 33582, 33584, 33586, 33591, 33595, 33597, 21860, 33086, 30130, 30382, 21305, 30174, 20731, 23617, 35692, 31687, 20559, 29255, 39575, 39128, 28418, 29922, 31080, 25735, 30629, 25340, 39057, 36139, 21697, 32856, 20050, 22378, 33529, 33805, 24179, 20973, 29942, 35780, 23631, 22369, 27900, 39047, 23110, 30772, 39748, 36843, 31893, 21078, 25169, 38138, 20166, 33670, 33889, 33769, 33970, 22484, 26420, 22275, 26222, 28006, 35889, 26333, 28689, 26399, 27450, 26646, 25114, 22971, 19971, 20932, 28422, 26578, 27791, 20854, 26827, 22855, 27495, 30054, 23822, 33040, 40784, 26071, 31048, 31041, 39569, 36215, 23682, 20062, 20225, 21551, 22865, 30732, 22120, 27668, 36804, 24323, 27773, 27875, 35755, 25488, 33598, 33599, 33601, 33602, 33604, 33605, 33608, 33610, 33611, 33612, 33613, 33614, 33619, 33621, 33622, 33623, 33624, 33625, 33629, 33634, 33648, 33649, 33650, 33651, 33652, 33653, 33654, 33657, 33658, 33662, 33663, 33664, 33665, 33666, 33667, 33668, 33671, 33672, 33674, 33675, 33676, 33677, 33679, 33680, 33681, 33684, 33685, 33686, 33687, 33689, 33690, 33693, 33695, 33697, 33698, 33699, 33700, 33701, 33702, 33703, 33708, 33709, 33710, 33711, 33717, 33723, 33726, 33727, 33730, 33731, 33732, 33734, 33736, 33737, 33739, 33741, 33742, 33744, 33745, 33746, 33747, 33749, 33751, 33753, 33754, 33755, 33758, 33762, 33763, 33764, 33766, 33767, 33768, 33771, 33772, 33773, 24688, 27965, 29301, 25190, 38030, 38085, 21315, 36801, 31614, 20191, 35878, 20094, 40660, 38065, 38067, 21069, 28508, 36963, 27973, 35892, 22545, 23884, 27424, 27465, 26538, 21595, 33108, 32652, 22681, 34103, 24378, 25250, 27207, 38201, 25970, 24708, 26725, 30631, 20052, 20392, 24039, 38808, 25772, 32728, 23789, 20431, 31373, 20999, 33540, 19988, 24623, 31363, 38054, 20405, 20146, 31206, 29748, 21220, 33465, 25810, 31165, 23517, 27777, 38738, 36731, 27682, 20542, 21375, 28165, 25806, 26228, 27696, 24773, 39031, 35831, 24198, 29756, 31351, 31179, 19992, 37041, 29699, 27714, 22234, 37195, 27845, 36235, 21306, 34502, 26354, 36527, 23624, 39537, 28192, 33774, 33775, 33779, 33780, 33781, 33782, 33783, 33786, 33787, 33788, 33790, 33791, 33792, 33794, 33797, 33799, 33800, 33801, 33802, 33808, 33810, 33811, 33812, 33813, 33814, 33815, 33817, 33818, 33819, 33822, 33823, 33824, 33825, 33826, 33827, 33833, 33834, 33835, 33836, 33837, 33838, 33839, 33840, 33842, 33843, 33844, 33845, 33846, 33847, 33849, 33850, 33851, 33854, 33855, 33856, 33857, 33858, 33859, 33860, 33861, 33863, 33864, 33865, 33866, 33867, 33868, 33869, 33870, 33871, 33872, 33874, 33875, 33876, 33877, 33878, 33880, 33885, 33886, 33887, 33888, 33890, 33892, 33893, 33894, 33895, 33896, 33898, 33902, 33903, 33904, 33906, 33908, 33911, 33913, 33915, 33916, 21462, 23094, 40843, 36259, 21435, 22280, 39079, 26435, 37275, 27849, 20840, 30154, 25331, 29356, 21048, 21149, 32570, 28820, 30264, 21364, 40522, 27063, 30830, 38592, 35033, 32676, 28982, 29123, 20873, 26579, 29924, 22756, 25880, 22199, 35753, 39286, 25200, 32469, 24825, 28909, 22764, 20161, 20154, 24525, 38887, 20219, 35748, 20995, 22922, 32427, 25172, 20173, 26085, 25102, 33592, 33993, 33635, 34701, 29076, 28342, 23481, 32466, 20887, 25545, 26580, 32905, 33593, 34837, 20754, 23418, 22914, 36785, 20083, 27741, 20837, 35109, 36719, 38446, 34122, 29790, 38160, 38384, 28070, 33509, 24369, 25746, 27922, 33832, 33134, 40131, 22622, 36187, 19977, 21441, 33917, 33918, 33919, 33920, 33921, 33923, 33924, 33925, 33926, 33930, 33933, 33935, 33936, 33937, 33938, 33939, 33940, 33941, 33942, 33944, 33946, 33947, 33949, 33950, 33951, 33952, 33954, 33955, 33956, 33957, 33958, 33959, 33960, 33961, 33962, 33963, 33964, 33965, 33966, 33968, 33969, 33971, 33973, 33974, 33975, 33979, 33980, 33982, 33984, 33986, 33987, 33989, 33990, 33991, 33992, 33995, 33996, 33998, 33999, 34002, 34004, 34005, 34007, 34008, 34009, 34010, 34011, 34012, 34014, 34017, 34018, 34020, 34023, 34024, 34025, 34026, 34027, 34029, 34030, 34031, 34033, 34034, 34035, 34036, 34037, 34038, 34039, 34040, 34041, 34042, 34043, 34045, 34046, 34048, 34049, 34050, 20254, 25955, 26705, 21971, 20007, 25620, 39578, 25195, 23234, 29791, 33394, 28073, 26862, 20711, 33678, 30722, 26432, 21049, 27801, 32433, 20667, 21861, 29022, 31579, 26194, 29642, 33515, 26441, 23665, 21024, 29053, 34923, 38378, 38485, 25797, 36193, 33203, 21892, 27733, 25159, 32558, 22674, 20260, 21830, 36175, 26188, 19978, 23578, 35059, 26786, 25422, 31245, 28903, 33421, 21242, 38902, 23569, 21736, 37045, 32461, 22882, 36170, 34503, 33292, 33293, 36198, 25668, 23556, 24913, 28041, 31038, 35774, 30775, 30003, 21627, 20280, 36523, 28145, 23072, 32453, 31070, 27784, 23457, 23158, 29978, 32958, 24910, 28183, 22768, 29983, 29989, 29298, 21319, 32499, 34051, 34052, 34053, 34054, 34055, 34056, 34057, 34058, 34059, 34061, 34062, 34063, 34064, 34066, 34068, 34069, 34070, 34072, 34073, 34075, 34076, 34077, 34078, 34080, 34082, 34083, 34084, 34085, 34086, 34087, 34088, 34089, 34090, 34093, 34094, 34095, 34096, 34097, 34098, 34099, 34100, 34101, 34102, 34110, 34111, 34112, 34113, 34114, 34116, 34117, 34118, 34119, 34123, 34124, 34125, 34126, 34127, 34128, 34129, 34130, 34131, 34132, 34133, 34135, 34136, 34138, 34139, 34140, 34141, 34143, 34144, 34145, 34146, 34147, 34149, 34150, 34151, 34153, 34154, 34155, 34156, 34157, 34158, 34159, 34160, 34161, 34163, 34165, 34166, 34167, 34168, 34172, 34173, 34175, 34176, 34177, 30465, 30427, 21097, 32988, 22307, 24072, 22833, 29422, 26045, 28287, 35799, 23608, 34417, 21313, 30707, 25342, 26102, 20160, 39135, 34432, 23454, 35782, 21490, 30690, 20351, 23630, 39542, 22987, 24335, 31034, 22763, 19990, 26623, 20107, 25325, 35475, 36893, 21183, 26159, 21980, 22124, 36866, 20181, 20365, 37322, 39280, 27663, 24066, 24643, 23460, 35270, 35797, 25910, 25163, 39318, 23432, 23551, 25480, 21806, 21463, 30246, 20861, 34092, 26530, 26803, 27530, 25234, 36755, 21460, 33298, 28113, 30095, 20070, 36174, 23408, 29087, 34223, 26257, 26329, 32626, 34560, 40653, 40736, 23646, 26415, 36848, 26641, 26463, 25101, 31446, 22661, 24246, 25968, 28465, 34178, 34179, 34182, 34184, 34185, 34186, 34187, 34188, 34189, 34190, 34192, 34193, 34194, 34195, 34196, 34197, 34198, 34199, 34200, 34201, 34202, 34205, 34206, 34207, 34208, 34209, 34210, 34211, 34213, 34214, 34215, 34217, 34219, 34220, 34221, 34225, 34226, 34227, 34228, 34229, 34230, 34232, 34234, 34235, 34236, 34237, 34238, 34239, 34240, 34242, 34243, 34244, 34245, 34246, 34247, 34248, 34250, 34251, 34252, 34253, 34254, 34257, 34258, 34260, 34262, 34263, 34264, 34265, 34266, 34267, 34269, 34270, 34271, 34272, 34273, 34274, 34275, 34277, 34278, 34279, 34280, 34282, 34283, 34284, 34285, 34286, 34287, 34288, 34289, 34290, 34291, 34292, 34293, 34294, 34295, 34296, 24661, 21047, 32781, 25684, 34928, 29993, 24069, 26643, 25332, 38684, 21452, 29245, 35841, 27700, 30561, 31246, 21550, 30636, 39034, 33308, 35828, 30805, 26388, 28865, 26031, 25749, 22070, 24605, 31169, 21496, 19997, 27515, 32902, 23546, 21987, 22235, 20282, 20284, 39282, 24051, 26494, 32824, 24578, 39042, 36865, 23435, 35772, 35829, 25628, 33368, 25822, 22013, 33487, 37221, 20439, 32032, 36895, 31903, 20723, 22609, 28335, 23487, 35785, 32899, 37240, 33948, 31639, 34429, 38539, 38543, 32485, 39635, 30862, 23681, 31319, 36930, 38567, 31071, 23385, 25439, 31499, 34001, 26797, 21766, 32553, 29712, 32034, 38145, 25152, 22604, 20182, 23427, 22905, 22612, 34297, 34298, 34300, 34301, 34302, 34304, 34305, 34306, 34307, 34308, 34310, 34311, 34312, 34313, 34314, 34315, 34316, 34317, 34318, 34319, 34320, 34322, 34323, 34324, 34325, 34327, 34328, 34329, 34330, 34331, 34332, 34333, 34334, 34335, 34336, 34337, 34338, 34339, 34340, 34341, 34342, 34344, 34346, 34347, 34348, 34349, 34350, 34351, 34352, 34353, 34354, 34355, 34356, 34357, 34358, 34359, 34361, 34362, 34363, 34365, 34366, 34367, 34368, 34369, 34370, 34371, 34372, 34373, 34374, 34375, 34376, 34377, 34378, 34379, 34380, 34386, 34387, 34389, 34390, 34391, 34392, 34393, 34395, 34396, 34397, 34399, 34400, 34401, 34403, 34404, 34405, 34406, 34407, 34408, 34409, 34410, 29549, 25374, 36427, 36367, 32974, 33492, 25260, 21488, 27888, 37214, 22826, 24577, 27760, 22349, 25674, 36138, 30251, 28393, 22363, 27264, 30192, 28525, 35885, 35848, 22374, 27631, 34962, 30899, 25506, 21497, 28845, 27748, 22616, 25642, 22530, 26848, 33179, 21776, 31958, 20504, 36538, 28108, 36255, 28907, 25487, 28059, 28372, 32486, 33796, 26691, 36867, 28120, 38518, 35752, 22871, 29305, 34276, 33150, 30140, 35466, 26799, 21076, 36386, 38161, 25552, 39064, 36420, 21884, 20307, 26367, 22159, 24789, 28053, 21059, 23625, 22825, 28155, 22635, 3e4, 29980, 24684, 33300, 33094, 25361, 26465, 36834, 30522, 36339, 36148, 38081, 24086, 21381, 21548, 28867, 34413, 34415, 34416, 34418, 34419, 34420, 34421, 34422, 34423, 34424, 34435, 34436, 34437, 34438, 34439, 34440, 34441, 34446, 34447, 34448, 34449, 34450, 34452, 34454, 34455, 34456, 34457, 34458, 34459, 34462, 34463, 34464, 34465, 34466, 34469, 34470, 34475, 34477, 34478, 34482, 34483, 34487, 34488, 34489, 34491, 34492, 34493, 34494, 34495, 34497, 34498, 34499, 34501, 34504, 34508, 34509, 34514, 34515, 34517, 34518, 34519, 34522, 34524, 34525, 34528, 34529, 34530, 34531, 34533, 34534, 34535, 34536, 34538, 34539, 34540, 34543, 34549, 34550, 34551, 34554, 34555, 34556, 34557, 34559, 34561, 34564, 34565, 34566, 34571, 34572, 34574, 34575, 34576, 34577, 34580, 34582, 27712, 24311, 20572, 20141, 24237, 25402, 33351, 36890, 26704, 37230, 30643, 21516, 38108, 24420, 31461, 26742, 25413, 31570, 32479, 30171, 20599, 25237, 22836, 36879, 20984, 31171, 31361, 22270, 24466, 36884, 28034, 23648, 22303, 21520, 20820, 28237, 22242, 25512, 39059, 33151, 34581, 35114, 36864, 21534, 23663, 33216, 25302, 25176, 33073, 40501, 38464, 39534, 39548, 26925, 22949, 25299, 21822, 25366, 21703, 34521, 27964, 23043, 29926, 34972, 27498, 22806, 35916, 24367, 28286, 29609, 39037, 20024, 28919, 23436, 30871, 25405, 26202, 30358, 24779, 23451, 23113, 19975, 33109, 27754, 29579, 20129, 26505, 32593, 24448, 26106, 26395, 24536, 22916, 23041, 34585, 34587, 34589, 34591, 34592, 34596, 34598, 34599, 34600, 34602, 34603, 34604, 34605, 34607, 34608, 34610, 34611, 34613, 34614, 34616, 34617, 34618, 34620, 34621, 34624, 34625, 34626, 34627, 34628, 34629, 34630, 34634, 34635, 34637, 34639, 34640, 34641, 34642, 34644, 34645, 34646, 34648, 34650, 34651, 34652, 34653, 34654, 34655, 34657, 34658, 34662, 34663, 34664, 34665, 34666, 34667, 34668, 34669, 34671, 34673, 34674, 34675, 34677, 34679, 34680, 34681, 34682, 34687, 34688, 34689, 34692, 34694, 34695, 34697, 34698, 34700, 34702, 34703, 34704, 34705, 34706, 34708, 34709, 34710, 34712, 34713, 34714, 34715, 34716, 34717, 34718, 34720, 34721, 34722, 34723, 34724, 24013, 24494, 21361, 38886, 36829, 26693, 22260, 21807, 24799, 20026, 28493, 32500, 33479, 33806, 22996, 20255, 20266, 23614, 32428, 26410, 34074, 21619, 30031, 32963, 21890, 39759, 20301, 28205, 35859, 23561, 24944, 21355, 30239, 28201, 34442, 25991, 38395, 32441, 21563, 31283, 32010, 38382, 21985, 32705, 29934, 25373, 34583, 28065, 31389, 25105, 26017, 21351, 25569, 27779, 24043, 21596, 38056, 20044, 27745, 35820, 23627, 26080, 33436, 26791, 21566, 21556, 27595, 27494, 20116, 25410, 21320, 33310, 20237, 20398, 22366, 25098, 38654, 26212, 29289, 21247, 21153, 24735, 35823, 26132, 29081, 26512, 35199, 30802, 30717, 26224, 22075, 21560, 38177, 29306, 34725, 34726, 34727, 34729, 34730, 34734, 34736, 34737, 34738, 34740, 34742, 34743, 34744, 34745, 34747, 34748, 34750, 34751, 34753, 34754, 34755, 34756, 34757, 34759, 34760, 34761, 34764, 34765, 34766, 34767, 34768, 34772, 34773, 34774, 34775, 34776, 34777, 34778, 34780, 34781, 34782, 34783, 34785, 34786, 34787, 34788, 34790, 34791, 34792, 34793, 34795, 34796, 34797, 34799, 34800, 34801, 34802, 34803, 34804, 34805, 34806, 34807, 34808, 34810, 34811, 34812, 34813, 34815, 34816, 34817, 34818, 34820, 34821, 34822, 34823, 34824, 34825, 34827, 34828, 34829, 34830, 34831, 34832, 34833, 34834, 34836, 34839, 34840, 34841, 34842, 34844, 34845, 34846, 34847, 34848, 34851, 31232, 24687, 24076, 24713, 33181, 22805, 24796, 29060, 28911, 28330, 27728, 29312, 27268, 34989, 24109, 20064, 23219, 21916, 38115, 27927, 31995, 38553, 25103, 32454, 30606, 34430, 21283, 38686, 36758, 26247, 23777, 20384, 29421, 19979, 21414, 22799, 21523, 25472, 38184, 20808, 20185, 40092, 32420, 21688, 36132, 34900, 33335, 38386, 28046, 24358, 23244, 26174, 38505, 29616, 29486, 21439, 33146, 39301, 32673, 23466, 38519, 38480, 32447, 30456, 21410, 38262, 39321, 31665, 35140, 28248, 20065, 32724, 31077, 35814, 24819, 21709, 20139, 39033, 24055, 27233, 20687, 21521, 35937, 33831, 30813, 38660, 21066, 21742, 22179, 38144, 28040, 23477, 28102, 26195, 34852, 34853, 34854, 34855, 34856, 34857, 34858, 34859, 34860, 34861, 34862, 34863, 34864, 34865, 34867, 34868, 34869, 34870, 34871, 34872, 34874, 34875, 34877, 34878, 34879, 34881, 34882, 34883, 34886, 34887, 34888, 34889, 34890, 34891, 34894, 34895, 34896, 34897, 34898, 34899, 34901, 34902, 34904, 34906, 34907, 34908, 34909, 34910, 34911, 34912, 34918, 34919, 34922, 34925, 34927, 34929, 34931, 34932, 34933, 34934, 34936, 34937, 34938, 34939, 34940, 34944, 34947, 34950, 34951, 34953, 34954, 34956, 34958, 34959, 34960, 34961, 34963, 34964, 34965, 34967, 34968, 34969, 34970, 34971, 34973, 34974, 34975, 34976, 34977, 34979, 34981, 34982, 34983, 34984, 34985, 34986, 23567, 23389, 26657, 32918, 21880, 31505, 25928, 26964, 20123, 27463, 34638, 38795, 21327, 25375, 25658, 37034, 26012, 32961, 35856, 20889, 26800, 21368, 34809, 25032, 27844, 27899, 35874, 23633, 34218, 33455, 38156, 27427, 36763, 26032, 24571, 24515, 20449, 34885, 26143, 33125, 29481, 24826, 20852, 21009, 22411, 24418, 37026, 34892, 37266, 24184, 26447, 24615, 22995, 20804, 20982, 33016, 21256, 27769, 38596, 29066, 20241, 20462, 32670, 26429, 21957, 38152, 31168, 34966, 32483, 22687, 25100, 38656, 34394, 22040, 39035, 24464, 35768, 33988, 37207, 21465, 26093, 24207, 30044, 24676, 32110, 23167, 32490, 32493, 36713, 21927, 23459, 24748, 26059, 29572, 34988, 34990, 34991, 34992, 34994, 34995, 34996, 34997, 34998, 35e3, 35001, 35002, 35003, 35005, 35006, 35007, 35008, 35011, 35012, 35015, 35016, 35018, 35019, 35020, 35021, 35023, 35024, 35025, 35027, 35030, 35031, 35034, 35035, 35036, 35037, 35038, 35040, 35041, 35046, 35047, 35049, 35050, 35051, 35052, 35053, 35054, 35055, 35058, 35061, 35062, 35063, 35066, 35067, 35069, 35071, 35072, 35073, 35075, 35076, 35077, 35078, 35079, 35080, 35081, 35083, 35084, 35085, 35086, 35087, 35089, 35092, 35093, 35094, 35095, 35096, 35100, 35101, 35102, 35103, 35104, 35106, 35107, 35108, 35110, 35111, 35112, 35113, 35116, 35117, 35118, 35119, 35121, 35122, 35123, 35125, 35127, 36873, 30307, 30505, 32474, 38772, 34203, 23398, 31348, 38634, 34880, 21195, 29071, 24490, 26092, 35810, 23547, 39535, 24033, 27529, 27739, 35757, 35759, 36874, 36805, 21387, 25276, 40486, 40493, 21568, 20011, 33469, 29273, 34460, 23830, 34905, 28079, 38597, 21713, 20122, 35766, 28937, 21693, 38409, 28895, 28153, 30416, 20005, 30740, 34578, 23721, 24310, 35328, 39068, 38414, 28814, 27839, 22852, 25513, 30524, 34893, 28436, 33395, 22576, 29141, 21388, 30746, 38593, 21761, 24422, 28976, 23476, 35866, 39564, 27523, 22830, 40495, 31207, 26472, 25196, 20335, 30113, 32650, 27915, 38451, 27687, 20208, 30162, 20859, 26679, 28478, 36992, 33136, 22934, 29814, 35128, 35129, 35130, 35131, 35132, 35133, 35134, 35135, 35136, 35138, 35139, 35141, 35142, 35143, 35144, 35145, 35146, 35147, 35148, 35149, 35150, 35151, 35152, 35153, 35154, 35155, 35156, 35157, 35158, 35159, 35160, 35161, 35162, 35163, 35164, 35165, 35168, 35169, 35170, 35171, 35172, 35173, 35175, 35176, 35177, 35178, 35179, 35180, 35181, 35182, 35183, 35184, 35185, 35186, 35187, 35188, 35189, 35190, 35191, 35192, 35193, 35194, 35196, 35197, 35198, 35200, 35202, 35204, 35205, 35207, 35208, 35209, 35210, 35211, 35212, 35213, 35214, 35215, 35216, 35217, 35218, 35219, 35220, 35221, 35222, 35223, 35224, 35225, 35226, 35227, 35228, 35229, 35230, 35231, 35232, 35233, 25671, 23591, 36965, 31377, 35875, 23002, 21676, 33280, 33647, 35201, 32768, 26928, 22094, 32822, 29239, 37326, 20918, 20063, 39029, 25494, 19994, 21494, 26355, 33099, 22812, 28082, 19968, 22777, 21307, 25558, 38129, 20381, 20234, 34915, 39056, 22839, 36951, 31227, 20202, 33008, 30097, 27778, 23452, 23016, 24413, 26885, 34433, 20506, 24050, 20057, 30691, 20197, 33402, 25233, 26131, 37009, 23673, 20159, 24441, 33222, 36920, 32900, 30123, 20134, 35028, 24847, 27589, 24518, 20041, 30410, 28322, 35811, 35758, 35850, 35793, 24322, 32764, 32716, 32462, 33589, 33643, 22240, 27575, 38899, 38452, 23035, 21535, 38134, 28139, 23493, 39278, 23609, 24341, 38544, 35234, 35235, 35236, 35237, 35238, 35239, 35240, 35241, 35242, 35243, 35244, 35245, 35246, 35247, 35248, 35249, 35250, 35251, 35252, 35253, 35254, 35255, 35256, 35257, 35258, 35259, 35260, 35261, 35262, 35263, 35264, 35267, 35277, 35283, 35284, 35285, 35287, 35288, 35289, 35291, 35293, 35295, 35296, 35297, 35298, 35300, 35303, 35304, 35305, 35306, 35308, 35309, 35310, 35312, 35313, 35314, 35316, 35317, 35318, 35319, 35320, 35321, 35322, 35323, 35324, 35325, 35326, 35327, 35329, 35330, 35331, 35332, 35333, 35334, 35336, 35337, 35338, 35339, 35340, 35341, 35342, 35343, 35344, 35345, 35346, 35347, 35348, 35349, 35350, 35351, 35352, 35353, 35354, 35355, 35356, 35357, 21360, 33521, 27185, 23156, 40560, 24212, 32552, 33721, 33828, 33829, 33639, 34631, 36814, 36194, 30408, 24433, 39062, 30828, 26144, 21727, 25317, 20323, 33219, 30152, 24248, 38605, 36362, 34553, 21647, 27891, 28044, 27704, 24703, 21191, 29992, 24189, 20248, 24736, 24551, 23588, 30001, 37038, 38080, 29369, 27833, 28216, 37193, 26377, 21451, 21491, 20305, 37321, 35825, 21448, 24188, 36802, 28132, 20110, 30402, 27014, 34398, 24858, 33286, 20313, 20446, 36926, 40060, 24841, 28189, 28180, 38533, 20104, 23089, 38632, 19982, 23679, 31161, 23431, 35821, 32701, 29577, 22495, 33419, 37057, 21505, 36935, 21947, 23786, 24481, 24840, 27442, 29425, 32946, 35465, 35358, 35359, 35360, 35361, 35362, 35363, 35364, 35365, 35366, 35367, 35368, 35369, 35370, 35371, 35372, 35373, 35374, 35375, 35376, 35377, 35378, 35379, 35380, 35381, 35382, 35383, 35384, 35385, 35386, 35387, 35388, 35389, 35391, 35392, 35393, 35394, 35395, 35396, 35397, 35398, 35399, 35401, 35402, 35403, 35404, 35405, 35406, 35407, 35408, 35409, 35410, 35411, 35412, 35413, 35414, 35415, 35416, 35417, 35418, 35419, 35420, 35421, 35422, 35423, 35424, 35425, 35426, 35427, 35428, 35429, 35430, 35431, 35432, 35433, 35434, 35435, 35436, 35437, 35438, 35439, 35440, 35441, 35442, 35443, 35444, 35445, 35446, 35447, 35448, 35450, 35451, 35452, 35453, 35454, 35455, 35456, 28020, 23507, 35029, 39044, 35947, 39533, 40499, 28170, 20900, 20803, 22435, 34945, 21407, 25588, 36757, 22253, 21592, 22278, 29503, 28304, 32536, 36828, 33489, 24895, 24616, 38498, 26352, 32422, 36234, 36291, 38053, 23731, 31908, 26376, 24742, 38405, 32792, 20113, 37095, 21248, 38504, 20801, 36816, 34164, 37213, 26197, 38901, 23381, 21277, 30776, 26434, 26685, 21705, 28798, 23472, 36733, 20877, 22312, 21681, 25874, 26242, 36190, 36163, 33039, 33900, 36973, 31967, 20991, 34299, 26531, 26089, 28577, 34468, 36481, 22122, 36896, 30338, 28790, 29157, 36131, 25321, 21017, 27901, 36156, 24590, 22686, 24974, 26366, 36192, 25166, 21939, 28195, 26413, 36711, 35457, 35458, 35459, 35460, 35461, 35462, 35463, 35464, 35467, 35468, 35469, 35470, 35471, 35472, 35473, 35474, 35476, 35477, 35478, 35479, 35480, 35481, 35482, 35483, 35484, 35485, 35486, 35487, 35488, 35489, 35490, 35491, 35492, 35493, 35494, 35495, 35496, 35497, 35498, 35499, 35500, 35501, 35502, 35503, 35504, 35505, 35506, 35507, 35508, 35509, 35510, 35511, 35512, 35513, 35514, 35515, 35516, 35517, 35518, 35519, 35520, 35521, 35522, 35523, 35524, 35525, 35526, 35527, 35528, 35529, 35530, 35531, 35532, 35533, 35534, 35535, 35536, 35537, 35538, 35539, 35540, 35541, 35542, 35543, 35544, 35545, 35546, 35547, 35548, 35549, 35550, 35551, 35552, 35553, 35554, 35555, 38113, 38392, 30504, 26629, 27048, 21643, 20045, 28856, 35784, 25688, 25995, 23429, 31364, 20538, 23528, 30651, 27617, 35449, 31896, 27838, 30415, 26025, 36759, 23853, 23637, 34360, 26632, 21344, 25112, 31449, 28251, 32509, 27167, 31456, 24432, 28467, 24352, 25484, 28072, 26454, 19976, 24080, 36134, 20183, 32960, 30260, 38556, 25307, 26157, 25214, 27836, 36213, 29031, 32617, 20806, 32903, 21484, 36974, 25240, 21746, 34544, 36761, 32773, 38167, 34071, 36825, 27993, 29645, 26015, 30495, 29956, 30759, 33275, 36126, 38024, 20390, 26517, 30137, 35786, 38663, 25391, 38215, 38453, 33976, 25379, 30529, 24449, 29424, 20105, 24596, 25972, 25327, 27491, 25919, 35556, 35557, 35558, 35559, 35560, 35561, 35562, 35563, 35564, 35565, 35566, 35567, 35568, 35569, 35570, 35571, 35572, 35573, 35574, 35575, 35576, 35577, 35578, 35579, 35580, 35581, 35582, 35583, 35584, 35585, 35586, 35587, 35588, 35589, 35590, 35592, 35593, 35594, 35595, 35596, 35597, 35598, 35599, 35600, 35601, 35602, 35603, 35604, 35605, 35606, 35607, 35608, 35609, 35610, 35611, 35612, 35613, 35614, 35615, 35616, 35617, 35618, 35619, 35620, 35621, 35623, 35624, 35625, 35626, 35627, 35628, 35629, 35630, 35631, 35632, 35633, 35634, 35635, 35636, 35637, 35638, 35639, 35640, 35641, 35642, 35643, 35644, 35645, 35646, 35647, 35648, 35649, 35650, 35651, 35652, 35653, 24103, 30151, 37073, 35777, 33437, 26525, 25903, 21553, 34584, 30693, 32930, 33026, 27713, 20043, 32455, 32844, 30452, 26893, 27542, 25191, 20540, 20356, 22336, 25351, 27490, 36286, 21482, 26088, 32440, 24535, 25370, 25527, 33267, 33268, 32622, 24092, 23769, 21046, 26234, 31209, 31258, 36136, 28825, 30164, 28382, 27835, 31378, 20013, 30405, 24544, 38047, 34935, 32456, 31181, 32959, 37325, 20210, 20247, 33311, 21608, 24030, 27954, 35788, 31909, 36724, 32920, 24090, 21650, 30385, 23449, 26172, 39588, 29664, 26666, 34523, 26417, 29482, 35832, 35803, 36880, 31481, 28891, 29038, 25284, 30633, 22065, 20027, 33879, 26609, 21161, 34496, 36142, 38136, 31569, 35654, 35655, 35656, 35657, 35658, 35659, 35660, 35661, 35662, 35663, 35664, 35665, 35666, 35667, 35668, 35669, 35670, 35671, 35672, 35673, 35674, 35675, 35676, 35677, 35678, 35679, 35680, 35681, 35682, 35683, 35684, 35685, 35687, 35688, 35689, 35690, 35691, 35693, 35694, 35695, 35696, 35697, 35698, 35699, 35700, 35701, 35702, 35703, 35704, 35705, 35706, 35707, 35708, 35709, 35710, 35711, 35712, 35713, 35714, 35715, 35716, 35717, 35718, 35719, 35720, 35721, 35722, 35723, 35724, 35725, 35726, 35727, 35728, 35729, 35730, 35731, 35732, 35733, 35734, 35735, 35736, 35737, 35738, 35739, 35740, 35741, 35742, 35743, 35756, 35761, 35771, 35783, 35792, 35818, 35849, 35870, 20303, 27880, 31069, 39547, 25235, 29226, 25341, 19987, 30742, 36716, 25776, 36186, 31686, 26729, 24196, 35013, 22918, 25758, 22766, 29366, 26894, 38181, 36861, 36184, 22368, 32512, 35846, 20934, 25417, 25305, 21331, 26700, 29730, 33537, 37196, 21828, 30528, 28796, 27978, 20857, 21672, 36164, 23039, 28363, 28100, 23388, 32043, 20180, 31869, 28371, 23376, 33258, 28173, 23383, 39683, 26837, 36394, 23447, 32508, 24635, 32437, 37049, 36208, 22863, 25549, 31199, 36275, 21330, 26063, 31062, 35781, 38459, 32452, 38075, 32386, 22068, 37257, 26368, 32618, 23562, 36981, 26152, 24038, 20304, 26590, 20570, 20316, 22352, 24231, 59408, 59409, 59410, 59411, 59412, 35896, 35897, 35898, 35899, 35900, 35901, 35902, 35903, 35904, 35906, 35907, 35908, 35909, 35912, 35914, 35915, 35917, 35918, 35919, 35920, 35921, 35922, 35923, 35924, 35926, 35927, 35928, 35929, 35931, 35932, 35933, 35934, 35935, 35936, 35939, 35940, 35941, 35942, 35943, 35944, 35945, 35948, 35949, 35950, 35951, 35952, 35953, 35954, 35956, 35957, 35958, 35959, 35963, 35964, 35965, 35966, 35967, 35968, 35969, 35971, 35972, 35974, 35975, 35976, 35979, 35981, 35982, 35983, 35984, 35985, 35986, 35987, 35989, 35990, 35991, 35993, 35994, 35995, 35996, 35997, 35998, 35999, 36e3, 36001, 36002, 36003, 36004, 36005, 36006, 36007, 36008, 36009, 36010, 36011, 36012, 36013, 20109, 19980, 20800, 19984, 24319, 21317, 19989, 20120, 19998, 39730, 23404, 22121, 20008, 31162, 20031, 21269, 20039, 22829, 29243, 21358, 27664, 22239, 32996, 39319, 27603, 30590, 40727, 20022, 20127, 40720, 20060, 20073, 20115, 33416, 23387, 21868, 22031, 20164, 21389, 21405, 21411, 21413, 21422, 38757, 36189, 21274, 21493, 21286, 21294, 21310, 36188, 21350, 21347, 20994, 21e3, 21006, 21037, 21043, 21055, 21056, 21068, 21086, 21089, 21084, 33967, 21117, 21122, 21121, 21136, 21139, 20866, 32596, 20155, 20163, 20169, 20162, 20200, 20193, 20203, 20190, 20251, 20211, 20258, 20324, 20213, 20261, 20263, 20233, 20267, 20318, 20327, 25912, 20314, 20317, 36014, 36015, 36016, 36017, 36018, 36019, 36020, 36021, 36022, 36023, 36024, 36025, 36026, 36027, 36028, 36029, 36030, 36031, 36032, 36033, 36034, 36035, 36036, 36037, 36038, 36039, 36040, 36041, 36042, 36043, 36044, 36045, 36046, 36047, 36048, 36049, 36050, 36051, 36052, 36053, 36054, 36055, 36056, 36057, 36058, 36059, 36060, 36061, 36062, 36063, 36064, 36065, 36066, 36067, 36068, 36069, 36070, 36071, 36072, 36073, 36074, 36075, 36076, 36077, 36078, 36079, 36080, 36081, 36082, 36083, 36084, 36085, 36086, 36087, 36088, 36089, 36090, 36091, 36092, 36093, 36094, 36095, 36096, 36097, 36098, 36099, 36100, 36101, 36102, 36103, 36104, 36105, 36106, 36107, 36108, 36109, 20319, 20311, 20274, 20285, 20342, 20340, 20369, 20361, 20355, 20367, 20350, 20347, 20394, 20348, 20396, 20372, 20454, 20456, 20458, 20421, 20442, 20451, 20444, 20433, 20447, 20472, 20521, 20556, 20467, 20524, 20495, 20526, 20525, 20478, 20508, 20492, 20517, 20520, 20606, 20547, 20565, 20552, 20558, 20588, 20603, 20645, 20647, 20649, 20666, 20694, 20742, 20717, 20716, 20710, 20718, 20743, 20747, 20189, 27709, 20312, 20325, 20430, 40864, 27718, 31860, 20846, 24061, 40649, 39320, 20865, 22804, 21241, 21261, 35335, 21264, 20971, 22809, 20821, 20128, 20822, 20147, 34926, 34980, 20149, 33044, 35026, 31104, 23348, 34819, 32696, 20907, 20913, 20925, 20924, 36110, 36111, 36112, 36113, 36114, 36115, 36116, 36117, 36118, 36119, 36120, 36121, 36122, 36123, 36124, 36128, 36177, 36178, 36183, 36191, 36197, 36200, 36201, 36202, 36204, 36206, 36207, 36209, 36210, 36216, 36217, 36218, 36219, 36220, 36221, 36222, 36223, 36224, 36226, 36227, 36230, 36231, 36232, 36233, 36236, 36237, 36238, 36239, 36240, 36242, 36243, 36245, 36246, 36247, 36248, 36249, 36250, 36251, 36252, 36253, 36254, 36256, 36257, 36258, 36260, 36261, 36262, 36263, 36264, 36265, 36266, 36267, 36268, 36269, 36270, 36271, 36272, 36274, 36278, 36279, 36281, 36283, 36285, 36288, 36289, 36290, 36293, 36295, 36296, 36297, 36298, 36301, 36304, 36306, 36307, 36308, 20935, 20886, 20898, 20901, 35744, 35750, 35751, 35754, 35764, 35765, 35767, 35778, 35779, 35787, 35791, 35790, 35794, 35795, 35796, 35798, 35800, 35801, 35804, 35807, 35808, 35812, 35816, 35817, 35822, 35824, 35827, 35830, 35833, 35836, 35839, 35840, 35842, 35844, 35847, 35852, 35855, 35857, 35858, 35860, 35861, 35862, 35865, 35867, 35864, 35869, 35871, 35872, 35873, 35877, 35879, 35882, 35883, 35886, 35887, 35890, 35891, 35893, 35894, 21353, 21370, 38429, 38434, 38433, 38449, 38442, 38461, 38460, 38466, 38473, 38484, 38495, 38503, 38508, 38514, 38516, 38536, 38541, 38551, 38576, 37015, 37019, 37021, 37017, 37036, 37025, 37044, 37043, 37046, 37050, 36309, 36312, 36313, 36316, 36320, 36321, 36322, 36325, 36326, 36327, 36329, 36333, 36334, 36336, 36337, 36338, 36340, 36342, 36348, 36350, 36351, 36352, 36353, 36354, 36355, 36356, 36358, 36359, 36360, 36363, 36365, 36366, 36368, 36369, 36370, 36371, 36373, 36374, 36375, 36376, 36377, 36378, 36379, 36380, 36384, 36385, 36388, 36389, 36390, 36391, 36392, 36395, 36397, 36400, 36402, 36403, 36404, 36406, 36407, 36408, 36411, 36412, 36414, 36415, 36419, 36421, 36422, 36428, 36429, 36430, 36431, 36432, 36435, 36436, 36437, 36438, 36439, 36440, 36442, 36443, 36444, 36445, 36446, 36447, 36448, 36449, 36450, 36451, 36452, 36453, 36455, 36456, 36458, 36459, 36462, 36465, 37048, 37040, 37071, 37061, 37054, 37072, 37060, 37063, 37075, 37094, 37090, 37084, 37079, 37083, 37099, 37103, 37118, 37124, 37154, 37150, 37155, 37169, 37167, 37177, 37187, 37190, 21005, 22850, 21154, 21164, 21165, 21182, 21759, 21200, 21206, 21232, 21471, 29166, 30669, 24308, 20981, 20988, 39727, 21430, 24321, 30042, 24047, 22348, 22441, 22433, 22654, 22716, 22725, 22737, 22313, 22316, 22314, 22323, 22329, 22318, 22319, 22364, 22331, 22338, 22377, 22405, 22379, 22406, 22396, 22395, 22376, 22381, 22390, 22387, 22445, 22436, 22412, 22450, 22479, 22439, 22452, 22419, 22432, 22485, 22488, 22490, 22489, 22482, 22456, 22516, 22511, 22520, 22500, 22493, 36467, 36469, 36471, 36472, 36473, 36474, 36475, 36477, 36478, 36480, 36482, 36483, 36484, 36486, 36488, 36489, 36490, 36491, 36492, 36493, 36494, 36497, 36498, 36499, 36501, 36502, 36503, 36504, 36505, 36506, 36507, 36509, 36511, 36512, 36513, 36514, 36515, 36516, 36517, 36518, 36519, 36520, 36521, 36522, 36525, 36526, 36528, 36529, 36531, 36532, 36533, 36534, 36535, 36536, 36537, 36539, 36540, 36541, 36542, 36543, 36544, 36545, 36546, 36547, 36548, 36549, 36550, 36551, 36552, 36553, 36554, 36555, 36556, 36557, 36559, 36560, 36561, 36562, 36563, 36564, 36565, 36566, 36567, 36568, 36569, 36570, 36571, 36572, 36573, 36574, 36575, 36576, 36577, 36578, 36579, 36580, 22539, 22541, 22525, 22509, 22528, 22558, 22553, 22596, 22560, 22629, 22636, 22657, 22665, 22682, 22656, 39336, 40729, 25087, 33401, 33405, 33407, 33423, 33418, 33448, 33412, 33422, 33425, 33431, 33433, 33451, 33464, 33470, 33456, 33480, 33482, 33507, 33432, 33463, 33454, 33483, 33484, 33473, 33449, 33460, 33441, 33450, 33439, 33476, 33486, 33444, 33505, 33545, 33527, 33508, 33551, 33543, 33500, 33524, 33490, 33496, 33548, 33531, 33491, 33553, 33562, 33542, 33556, 33557, 33504, 33493, 33564, 33617, 33627, 33628, 33544, 33682, 33596, 33588, 33585, 33691, 33630, 33583, 33615, 33607, 33603, 33631, 33600, 33559, 33632, 33581, 33594, 33587, 33638, 33637, 36581, 36582, 36583, 36584, 36585, 36586, 36587, 36588, 36589, 36590, 36591, 36592, 36593, 36594, 36595, 36596, 36597, 36598, 36599, 36600, 36601, 36602, 36603, 36604, 36605, 36606, 36607, 36608, 36609, 36610, 36611, 36612, 36613, 36614, 36615, 36616, 36617, 36618, 36619, 36620, 36621, 36622, 36623, 36624, 36625, 36626, 36627, 36628, 36629, 36630, 36631, 36632, 36633, 36634, 36635, 36636, 36637, 36638, 36639, 36640, 36641, 36642, 36643, 36644, 36645, 36646, 36647, 36648, 36649, 36650, 36651, 36652, 36653, 36654, 36655, 36656, 36657, 36658, 36659, 36660, 36661, 36662, 36663, 36664, 36665, 36666, 36667, 36668, 36669, 36670, 36671, 36672, 36673, 36674, 36675, 36676, 33640, 33563, 33641, 33644, 33642, 33645, 33646, 33712, 33656, 33715, 33716, 33696, 33706, 33683, 33692, 33669, 33660, 33718, 33705, 33661, 33720, 33659, 33688, 33694, 33704, 33722, 33724, 33729, 33793, 33765, 33752, 22535, 33816, 33803, 33757, 33789, 33750, 33820, 33848, 33809, 33798, 33748, 33759, 33807, 33795, 33784, 33785, 33770, 33733, 33728, 33830, 33776, 33761, 33884, 33873, 33882, 33881, 33907, 33927, 33928, 33914, 33929, 33912, 33852, 33862, 33897, 33910, 33932, 33934, 33841, 33901, 33985, 33997, 34e3, 34022, 33981, 34003, 33994, 33983, 33978, 34016, 33953, 33977, 33972, 33943, 34021, 34019, 34060, 29965, 34104, 34032, 34105, 34079, 34106, 36677, 36678, 36679, 36680, 36681, 36682, 36683, 36684, 36685, 36686, 36687, 36688, 36689, 36690, 36691, 36692, 36693, 36694, 36695, 36696, 36697, 36698, 36699, 36700, 36701, 36702, 36703, 36704, 36705, 36706, 36707, 36708, 36709, 36714, 36736, 36748, 36754, 36765, 36768, 36769, 36770, 36772, 36773, 36774, 36775, 36778, 36780, 36781, 36782, 36783, 36786, 36787, 36788, 36789, 36791, 36792, 36794, 36795, 36796, 36799, 36800, 36803, 36806, 36809, 36810, 36811, 36812, 36813, 36815, 36818, 36822, 36823, 36826, 36832, 36833, 36835, 36839, 36844, 36847, 36849, 36850, 36852, 36853, 36854, 36858, 36859, 36860, 36862, 36863, 36871, 36872, 36876, 36878, 36883, 36885, 36888, 34134, 34107, 34047, 34044, 34137, 34120, 34152, 34148, 34142, 34170, 30626, 34115, 34162, 34171, 34212, 34216, 34183, 34191, 34169, 34222, 34204, 34181, 34233, 34231, 34224, 34259, 34241, 34268, 34303, 34343, 34309, 34345, 34326, 34364, 24318, 24328, 22844, 22849, 32823, 22869, 22874, 22872, 21263, 23586, 23589, 23596, 23604, 25164, 25194, 25247, 25275, 25290, 25306, 25303, 25326, 25378, 25334, 25401, 25419, 25411, 25517, 25590, 25457, 25466, 25486, 25524, 25453, 25516, 25482, 25449, 25518, 25532, 25586, 25592, 25568, 25599, 25540, 25566, 25550, 25682, 25542, 25534, 25669, 25665, 25611, 25627, 25632, 25612, 25638, 25633, 25694, 25732, 25709, 25750, 36889, 36892, 36899, 36900, 36901, 36903, 36904, 36905, 36906, 36907, 36908, 36912, 36913, 36914, 36915, 36916, 36919, 36921, 36922, 36925, 36927, 36928, 36931, 36933, 36934, 36936, 36937, 36938, 36939, 36940, 36942, 36948, 36949, 36950, 36953, 36954, 36956, 36957, 36958, 36959, 36960, 36961, 36964, 36966, 36967, 36969, 36970, 36971, 36972, 36975, 36976, 36977, 36978, 36979, 36982, 36983, 36984, 36985, 36986, 36987, 36988, 36990, 36993, 36996, 36997, 36998, 36999, 37001, 37002, 37004, 37005, 37006, 37007, 37008, 37010, 37012, 37014, 37016, 37018, 37020, 37022, 37023, 37024, 37028, 37029, 37031, 37032, 37033, 37035, 37037, 37042, 37047, 37052, 37053, 37055, 37056, 25722, 25783, 25784, 25753, 25786, 25792, 25808, 25815, 25828, 25826, 25865, 25893, 25902, 24331, 24530, 29977, 24337, 21343, 21489, 21501, 21481, 21480, 21499, 21522, 21526, 21510, 21579, 21586, 21587, 21588, 21590, 21571, 21537, 21591, 21593, 21539, 21554, 21634, 21652, 21623, 21617, 21604, 21658, 21659, 21636, 21622, 21606, 21661, 21712, 21677, 21698, 21684, 21714, 21671, 21670, 21715, 21716, 21618, 21667, 21717, 21691, 21695, 21708, 21721, 21722, 21724, 21673, 21674, 21668, 21725, 21711, 21726, 21787, 21735, 21792, 21757, 21780, 21747, 21794, 21795, 21775, 21777, 21799, 21802, 21863, 21903, 21941, 21833, 21869, 21825, 21845, 21823, 21840, 21820, 37058, 37059, 37062, 37064, 37065, 37067, 37068, 37069, 37074, 37076, 37077, 37078, 37080, 37081, 37082, 37086, 37087, 37088, 37091, 37092, 37093, 37097, 37098, 37100, 37102, 37104, 37105, 37106, 37107, 37109, 37110, 37111, 37113, 37114, 37115, 37116, 37119, 37120, 37121, 37123, 37125, 37126, 37127, 37128, 37129, 37130, 37131, 37132, 37133, 37134, 37135, 37136, 37137, 37138, 37139, 37140, 37141, 37142, 37143, 37144, 37146, 37147, 37148, 37149, 37151, 37152, 37153, 37156, 37157, 37158, 37159, 37160, 37161, 37162, 37163, 37164, 37165, 37166, 37168, 37170, 37171, 37172, 37173, 37174, 37175, 37176, 37178, 37179, 37180, 37181, 37182, 37183, 37184, 37185, 37186, 37188, 21815, 21846, 21877, 21878, 21879, 21811, 21808, 21852, 21899, 21970, 21891, 21937, 21945, 21896, 21889, 21919, 21886, 21974, 21905, 21883, 21983, 21949, 21950, 21908, 21913, 21994, 22007, 21961, 22047, 21969, 21995, 21996, 21972, 21990, 21981, 21956, 21999, 21989, 22002, 22003, 21964, 21965, 21992, 22005, 21988, 36756, 22046, 22024, 22028, 22017, 22052, 22051, 22014, 22016, 22055, 22061, 22104, 22073, 22103, 22060, 22093, 22114, 22105, 22108, 22092, 22100, 22150, 22116, 22129, 22123, 22139, 22140, 22149, 22163, 22191, 22228, 22231, 22237, 22241, 22261, 22251, 22265, 22271, 22276, 22282, 22281, 22300, 24079, 24089, 24084, 24081, 24113, 24123, 24124, 37189, 37191, 37192, 37201, 37203, 37204, 37205, 37206, 37208, 37209, 37211, 37212, 37215, 37216, 37222, 37223, 37224, 37227, 37229, 37235, 37242, 37243, 37244, 37248, 37249, 37250, 37251, 37252, 37254, 37256, 37258, 37262, 37263, 37267, 37268, 37269, 37270, 37271, 37272, 37273, 37276, 37277, 37278, 37279, 37280, 37281, 37284, 37285, 37286, 37287, 37288, 37289, 37291, 37292, 37296, 37297, 37298, 37299, 37302, 37303, 37304, 37305, 37307, 37308, 37309, 37310, 37311, 37312, 37313, 37314, 37315, 37316, 37317, 37318, 37320, 37323, 37328, 37330, 37331, 37332, 37333, 37334, 37335, 37336, 37337, 37338, 37339, 37341, 37342, 37343, 37344, 37345, 37346, 37347, 37348, 37349, 24119, 24132, 24148, 24155, 24158, 24161, 23692, 23674, 23693, 23696, 23702, 23688, 23704, 23705, 23697, 23706, 23708, 23733, 23714, 23741, 23724, 23723, 23729, 23715, 23745, 23735, 23748, 23762, 23780, 23755, 23781, 23810, 23811, 23847, 23846, 23854, 23844, 23838, 23814, 23835, 23896, 23870, 23860, 23869, 23916, 23899, 23919, 23901, 23915, 23883, 23882, 23913, 23924, 23938, 23961, 23965, 35955, 23991, 24005, 24435, 24439, 24450, 24455, 24457, 24460, 24469, 24473, 24476, 24488, 24493, 24501, 24508, 34914, 24417, 29357, 29360, 29364, 29367, 29368, 29379, 29377, 29390, 29389, 29394, 29416, 29423, 29417, 29426, 29428, 29431, 29441, 29427, 29443, 29434, 37350, 37351, 37352, 37353, 37354, 37355, 37356, 37357, 37358, 37359, 37360, 37361, 37362, 37363, 37364, 37365, 37366, 37367, 37368, 37369, 37370, 37371, 37372, 37373, 37374, 37375, 37376, 37377, 37378, 37379, 37380, 37381, 37382, 37383, 37384, 37385, 37386, 37387, 37388, 37389, 37390, 37391, 37392, 37393, 37394, 37395, 37396, 37397, 37398, 37399, 37400, 37401, 37402, 37403, 37404, 37405, 37406, 37407, 37408, 37409, 37410, 37411, 37412, 37413, 37414, 37415, 37416, 37417, 37418, 37419, 37420, 37421, 37422, 37423, 37424, 37425, 37426, 37427, 37428, 37429, 37430, 37431, 37432, 37433, 37434, 37435, 37436, 37437, 37438, 37439, 37440, 37441, 37442, 37443, 37444, 37445, 29435, 29463, 29459, 29473, 29450, 29470, 29469, 29461, 29474, 29497, 29477, 29484, 29496, 29489, 29520, 29517, 29527, 29536, 29548, 29551, 29566, 33307, 22821, 39143, 22820, 22786, 39267, 39271, 39272, 39273, 39274, 39275, 39276, 39284, 39287, 39293, 39296, 39300, 39303, 39306, 39309, 39312, 39313, 39315, 39316, 39317, 24192, 24209, 24203, 24214, 24229, 24224, 24249, 24245, 24254, 24243, 36179, 24274, 24273, 24283, 24296, 24298, 33210, 24516, 24521, 24534, 24527, 24579, 24558, 24580, 24545, 24548, 24574, 24581, 24582, 24554, 24557, 24568, 24601, 24629, 24614, 24603, 24591, 24589, 24617, 24619, 24586, 24639, 24609, 24696, 24697, 24699, 24698, 24642, 37446, 37447, 37448, 37449, 37450, 37451, 37452, 37453, 37454, 37455, 37456, 37457, 37458, 37459, 37460, 37461, 37462, 37463, 37464, 37465, 37466, 37467, 37468, 37469, 37470, 37471, 37472, 37473, 37474, 37475, 37476, 37477, 37478, 37479, 37480, 37481, 37482, 37483, 37484, 37485, 37486, 37487, 37488, 37489, 37490, 37491, 37493, 37494, 37495, 37496, 37497, 37498, 37499, 37500, 37501, 37502, 37503, 37504, 37505, 37506, 37507, 37508, 37509, 37510, 37511, 37512, 37513, 37514, 37515, 37516, 37517, 37519, 37520, 37521, 37522, 37523, 37524, 37525, 37526, 37527, 37528, 37529, 37530, 37531, 37532, 37533, 37534, 37535, 37536, 37537, 37538, 37539, 37540, 37541, 37542, 37543, 24682, 24701, 24726, 24730, 24749, 24733, 24707, 24722, 24716, 24731, 24812, 24763, 24753, 24797, 24792, 24774, 24794, 24756, 24864, 24870, 24853, 24867, 24820, 24832, 24846, 24875, 24906, 24949, 25004, 24980, 24999, 25015, 25044, 25077, 24541, 38579, 38377, 38379, 38385, 38387, 38389, 38390, 38396, 38398, 38403, 38404, 38406, 38408, 38410, 38411, 38412, 38413, 38415, 38418, 38421, 38422, 38423, 38425, 38426, 20012, 29247, 25109, 27701, 27732, 27740, 27722, 27811, 27781, 27792, 27796, 27788, 27752, 27753, 27764, 27766, 27782, 27817, 27856, 27860, 27821, 27895, 27896, 27889, 27863, 27826, 27872, 27862, 27898, 27883, 27886, 27825, 27859, 27887, 27902, 37544, 37545, 37546, 37547, 37548, 37549, 37551, 37552, 37553, 37554, 37555, 37556, 37557, 37558, 37559, 37560, 37561, 37562, 37563, 37564, 37565, 37566, 37567, 37568, 37569, 37570, 37571, 37572, 37573, 37574, 37575, 37577, 37578, 37579, 37580, 37581, 37582, 37583, 37584, 37585, 37586, 37587, 37588, 37589, 37590, 37591, 37592, 37593, 37594, 37595, 37596, 37597, 37598, 37599, 37600, 37601, 37602, 37603, 37604, 37605, 37606, 37607, 37608, 37609, 37610, 37611, 37612, 37613, 37614, 37615, 37616, 37617, 37618, 37619, 37620, 37621, 37622, 37623, 37624, 37625, 37626, 37627, 37628, 37629, 37630, 37631, 37632, 37633, 37634, 37635, 37636, 37637, 37638, 37639, 37640, 37641, 27961, 27943, 27916, 27971, 27976, 27911, 27908, 27929, 27918, 27947, 27981, 27950, 27957, 27930, 27983, 27986, 27988, 27955, 28049, 28015, 28062, 28064, 27998, 28051, 28052, 27996, 28e3, 28028, 28003, 28186, 28103, 28101, 28126, 28174, 28095, 28128, 28177, 28134, 28125, 28121, 28182, 28075, 28172, 28078, 28203, 28270, 28238, 28267, 28338, 28255, 28294, 28243, 28244, 28210, 28197, 28228, 28383, 28337, 28312, 28384, 28461, 28386, 28325, 28327, 28349, 28347, 28343, 28375, 28340, 28367, 28303, 28354, 28319, 28514, 28486, 28487, 28452, 28437, 28409, 28463, 28470, 28491, 28532, 28458, 28425, 28457, 28553, 28557, 28556, 28536, 28530, 28540, 28538, 28625, 37642, 37643, 37644, 37645, 37646, 37647, 37648, 37649, 37650, 37651, 37652, 37653, 37654, 37655, 37656, 37657, 37658, 37659, 37660, 37661, 37662, 37663, 37664, 37665, 37666, 37667, 37668, 37669, 37670, 37671, 37672, 37673, 37674, 37675, 37676, 37677, 37678, 37679, 37680, 37681, 37682, 37683, 37684, 37685, 37686, 37687, 37688, 37689, 37690, 37691, 37692, 37693, 37695, 37696, 37697, 37698, 37699, 37700, 37701, 37702, 37703, 37704, 37705, 37706, 37707, 37708, 37709, 37710, 37711, 37712, 37713, 37714, 37715, 37716, 37717, 37718, 37719, 37720, 37721, 37722, 37723, 37724, 37725, 37726, 37727, 37728, 37729, 37730, 37731, 37732, 37733, 37734, 37735, 37736, 37737, 37739, 28617, 28583, 28601, 28598, 28610, 28641, 28654, 28638, 28640, 28655, 28698, 28707, 28699, 28729, 28725, 28751, 28766, 23424, 23428, 23445, 23443, 23461, 23480, 29999, 39582, 25652, 23524, 23534, 35120, 23536, 36423, 35591, 36790, 36819, 36821, 36837, 36846, 36836, 36841, 36838, 36851, 36840, 36869, 36868, 36875, 36902, 36881, 36877, 36886, 36897, 36917, 36918, 36909, 36911, 36932, 36945, 36946, 36944, 36968, 36952, 36962, 36955, 26297, 36980, 36989, 36994, 37e3, 36995, 37003, 24400, 24407, 24406, 24408, 23611, 21675, 23632, 23641, 23409, 23651, 23654, 32700, 24362, 24361, 24365, 33396, 24380, 39739, 23662, 22913, 22915, 22925, 22953, 22954, 22947, 37740, 37741, 37742, 37743, 37744, 37745, 37746, 37747, 37748, 37749, 37750, 37751, 37752, 37753, 37754, 37755, 37756, 37757, 37758, 37759, 37760, 37761, 37762, 37763, 37764, 37765, 37766, 37767, 37768, 37769, 37770, 37771, 37772, 37773, 37774, 37776, 37777, 37778, 37779, 37780, 37781, 37782, 37783, 37784, 37785, 37786, 37787, 37788, 37789, 37790, 37791, 37792, 37793, 37794, 37795, 37796, 37797, 37798, 37799, 37800, 37801, 37802, 37803, 37804, 37805, 37806, 37807, 37808, 37809, 37810, 37811, 37812, 37813, 37814, 37815, 37816, 37817, 37818, 37819, 37820, 37821, 37822, 37823, 37824, 37825, 37826, 37827, 37828, 37829, 37830, 37831, 37832, 37833, 37835, 37836, 37837, 22935, 22986, 22955, 22942, 22948, 22994, 22962, 22959, 22999, 22974, 23045, 23046, 23005, 23048, 23011, 23e3, 23033, 23052, 23049, 23090, 23092, 23057, 23075, 23059, 23104, 23143, 23114, 23125, 23100, 23138, 23157, 33004, 23210, 23195, 23159, 23162, 23230, 23275, 23218, 23250, 23252, 23224, 23264, 23267, 23281, 23254, 23270, 23256, 23260, 23305, 23319, 23318, 23346, 23351, 23360, 23573, 23580, 23386, 23397, 23411, 23377, 23379, 23394, 39541, 39543, 39544, 39546, 39551, 39549, 39552, 39553, 39557, 39560, 39562, 39568, 39570, 39571, 39574, 39576, 39579, 39580, 39581, 39583, 39584, 39586, 39587, 39589, 39591, 32415, 32417, 32419, 32421, 32424, 32425, 37838, 37839, 37840, 37841, 37842, 37843, 37844, 37845, 37847, 37848, 37849, 37850, 37851, 37852, 37853, 37854, 37855, 37856, 37857, 37858, 37859, 37860, 37861, 37862, 37863, 37864, 37865, 37866, 37867, 37868, 37869, 37870, 37871, 37872, 37873, 37874, 37875, 37876, 37877, 37878, 37879, 37880, 37881, 37882, 37883, 37884, 37885, 37886, 37887, 37888, 37889, 37890, 37891, 37892, 37893, 37894, 37895, 37896, 37897, 37898, 37899, 37900, 37901, 37902, 37903, 37904, 37905, 37906, 37907, 37908, 37909, 37910, 37911, 37912, 37913, 37914, 37915, 37916, 37917, 37918, 37919, 37920, 37921, 37922, 37923, 37924, 37925, 37926, 37927, 37928, 37929, 37930, 37931, 37932, 37933, 37934, 32429, 32432, 32446, 32448, 32449, 32450, 32457, 32459, 32460, 32464, 32468, 32471, 32475, 32480, 32481, 32488, 32491, 32494, 32495, 32497, 32498, 32525, 32502, 32506, 32507, 32510, 32513, 32514, 32515, 32519, 32520, 32523, 32524, 32527, 32529, 32530, 32535, 32537, 32540, 32539, 32543, 32545, 32546, 32547, 32548, 32549, 32550, 32551, 32554, 32555, 32556, 32557, 32559, 32560, 32561, 32562, 32563, 32565, 24186, 30079, 24027, 30014, 37013, 29582, 29585, 29614, 29602, 29599, 29647, 29634, 29649, 29623, 29619, 29632, 29641, 29640, 29669, 29657, 39036, 29706, 29673, 29671, 29662, 29626, 29682, 29711, 29738, 29787, 29734, 29733, 29736, 29744, 29742, 29740, 37935, 37936, 37937, 37938, 37939, 37940, 37941, 37942, 37943, 37944, 37945, 37946, 37947, 37948, 37949, 37951, 37952, 37953, 37954, 37955, 37956, 37957, 37958, 37959, 37960, 37961, 37962, 37963, 37964, 37965, 37966, 37967, 37968, 37969, 37970, 37971, 37972, 37973, 37974, 37975, 37976, 37977, 37978, 37979, 37980, 37981, 37982, 37983, 37984, 37985, 37986, 37987, 37988, 37989, 37990, 37991, 37992, 37993, 37994, 37996, 37997, 37998, 37999, 38e3, 38001, 38002, 38003, 38004, 38005, 38006, 38007, 38008, 38009, 38010, 38011, 38012, 38013, 38014, 38015, 38016, 38017, 38018, 38019, 38020, 38033, 38038, 38040, 38087, 38095, 38099, 38100, 38106, 38118, 38139, 38172, 38176, 29723, 29722, 29761, 29788, 29783, 29781, 29785, 29815, 29805, 29822, 29852, 29838, 29824, 29825, 29831, 29835, 29854, 29864, 29865, 29840, 29863, 29906, 29882, 38890, 38891, 38892, 26444, 26451, 26462, 26440, 26473, 26533, 26503, 26474, 26483, 26520, 26535, 26485, 26536, 26526, 26541, 26507, 26487, 26492, 26608, 26633, 26584, 26634, 26601, 26544, 26636, 26585, 26549, 26586, 26547, 26589, 26624, 26563, 26552, 26594, 26638, 26561, 26621, 26674, 26675, 26720, 26721, 26702, 26722, 26692, 26724, 26755, 26653, 26709, 26726, 26689, 26727, 26688, 26686, 26698, 26697, 26665, 26805, 26767, 26740, 26743, 26771, 26731, 26818, 26990, 26876, 26911, 26912, 26873, 38183, 38195, 38205, 38211, 38216, 38219, 38229, 38234, 38240, 38254, 38260, 38261, 38263, 38264, 38265, 38266, 38267, 38268, 38269, 38270, 38272, 38273, 38274, 38275, 38276, 38277, 38278, 38279, 38280, 38281, 38282, 38283, 38284, 38285, 38286, 38287, 38288, 38289, 38290, 38291, 38292, 38293, 38294, 38295, 38296, 38297, 38298, 38299, 38300, 38301, 38302, 38303, 38304, 38305, 38306, 38307, 38308, 38309, 38310, 38311, 38312, 38313, 38314, 38315, 38316, 38317, 38318, 38319, 38320, 38321, 38322, 38323, 38324, 38325, 38326, 38327, 38328, 38329, 38330, 38331, 38332, 38333, 38334, 38335, 38336, 38337, 38338, 38339, 38340, 38341, 38342, 38343, 38344, 38345, 38346, 38347, 26916, 26864, 26891, 26881, 26967, 26851, 26896, 26993, 26937, 26976, 26946, 26973, 27012, 26987, 27008, 27032, 27e3, 26932, 27084, 27015, 27016, 27086, 27017, 26982, 26979, 27001, 27035, 27047, 27067, 27051, 27053, 27092, 27057, 27073, 27082, 27103, 27029, 27104, 27021, 27135, 27183, 27117, 27159, 27160, 27237, 27122, 27204, 27198, 27296, 27216, 27227, 27189, 27278, 27257, 27197, 27176, 27224, 27260, 27281, 27280, 27305, 27287, 27307, 29495, 29522, 27521, 27522, 27527, 27524, 27538, 27539, 27533, 27546, 27547, 27553, 27562, 36715, 36717, 36721, 36722, 36723, 36725, 36726, 36728, 36727, 36729, 36730, 36732, 36734, 36737, 36738, 36740, 36743, 36747, 38348, 38349, 38350, 38351, 38352, 38353, 38354, 38355, 38356, 38357, 38358, 38359, 38360, 38361, 38362, 38363, 38364, 38365, 38366, 38367, 38368, 38369, 38370, 38371, 38372, 38373, 38374, 38375, 38380, 38399, 38407, 38419, 38424, 38427, 38430, 38432, 38435, 38436, 38437, 38438, 38439, 38440, 38441, 38443, 38444, 38445, 38447, 38448, 38455, 38456, 38457, 38458, 38462, 38465, 38467, 38474, 38478, 38479, 38481, 38482, 38483, 38486, 38487, 38488, 38489, 38490, 38492, 38493, 38494, 38496, 38499, 38501, 38502, 38507, 38509, 38510, 38511, 38512, 38513, 38515, 38520, 38521, 38522, 38523, 38524, 38525, 38526, 38527, 38528, 38529, 38530, 38531, 38532, 38535, 38537, 38538, 36749, 36750, 36751, 36760, 36762, 36558, 25099, 25111, 25115, 25119, 25122, 25121, 25125, 25124, 25132, 33255, 29935, 29940, 29951, 29967, 29969, 29971, 25908, 26094, 26095, 26096, 26122, 26137, 26482, 26115, 26133, 26112, 28805, 26359, 26141, 26164, 26161, 26166, 26165, 32774, 26207, 26196, 26177, 26191, 26198, 26209, 26199, 26231, 26244, 26252, 26279, 26269, 26302, 26331, 26332, 26342, 26345, 36146, 36147, 36150, 36155, 36157, 36160, 36165, 36166, 36168, 36169, 36167, 36173, 36181, 36185, 35271, 35274, 35275, 35276, 35278, 35279, 35280, 35281, 29294, 29343, 29277, 29286, 29295, 29310, 29311, 29316, 29323, 29325, 29327, 29330, 25352, 25394, 25520, 38540, 38542, 38545, 38546, 38547, 38549, 38550, 38554, 38555, 38557, 38558, 38559, 38560, 38561, 38562, 38563, 38564, 38565, 38566, 38568, 38569, 38570, 38571, 38572, 38573, 38574, 38575, 38577, 38578, 38580, 38581, 38583, 38584, 38586, 38587, 38591, 38594, 38595, 38600, 38602, 38603, 38608, 38609, 38611, 38612, 38614, 38615, 38616, 38617, 38618, 38619, 38620, 38621, 38622, 38623, 38625, 38626, 38627, 38628, 38629, 38630, 38631, 38635, 38636, 38637, 38638, 38640, 38641, 38642, 38644, 38645, 38648, 38650, 38651, 38652, 38653, 38655, 38658, 38659, 38661, 38666, 38667, 38668, 38672, 38673, 38674, 38676, 38677, 38679, 38680, 38681, 38682, 38683, 38685, 38687, 38688, 25663, 25816, 32772, 27626, 27635, 27645, 27637, 27641, 27653, 27655, 27654, 27661, 27669, 27672, 27673, 27674, 27681, 27689, 27684, 27690, 27698, 25909, 25941, 25963, 29261, 29266, 29270, 29232, 34402, 21014, 32927, 32924, 32915, 32956, 26378, 32957, 32945, 32939, 32941, 32948, 32951, 32999, 33e3, 33001, 33002, 32987, 32962, 32964, 32985, 32973, 32983, 26384, 32989, 33003, 33009, 33012, 33005, 33037, 33038, 33010, 33020, 26389, 33042, 35930, 33078, 33054, 33068, 33048, 33074, 33096, 33100, 33107, 33140, 33113, 33114, 33137, 33120, 33129, 33148, 33149, 33133, 33127, 22605, 23221, 33160, 33154, 33169, 28373, 33187, 33194, 33228, 26406, 33226, 33211, 38689, 38690, 38691, 38692, 38693, 38694, 38695, 38696, 38697, 38699, 38700, 38702, 38703, 38705, 38707, 38708, 38709, 38710, 38711, 38714, 38715, 38716, 38717, 38719, 38720, 38721, 38722, 38723, 38724, 38725, 38726, 38727, 38728, 38729, 38730, 38731, 38732, 38733, 38734, 38735, 38736, 38737, 38740, 38741, 38743, 38744, 38746, 38748, 38749, 38751, 38755, 38756, 38758, 38759, 38760, 38762, 38763, 38764, 38765, 38766, 38767, 38768, 38769, 38770, 38773, 38775, 38776, 38777, 38778, 38779, 38781, 38782, 38783, 38784, 38785, 38786, 38787, 38788, 38790, 38791, 38792, 38793, 38794, 38796, 38798, 38799, 38800, 38803, 38805, 38806, 38807, 38809, 38810, 38811, 38812, 38813, 33217, 33190, 27428, 27447, 27449, 27459, 27462, 27481, 39121, 39122, 39123, 39125, 39129, 39130, 27571, 24384, 27586, 35315, 26e3, 40785, 26003, 26044, 26054, 26052, 26051, 26060, 26062, 26066, 26070, 28800, 28828, 28822, 28829, 28859, 28864, 28855, 28843, 28849, 28904, 28874, 28944, 28947, 28950, 28975, 28977, 29043, 29020, 29032, 28997, 29042, 29002, 29048, 29050, 29080, 29107, 29109, 29096, 29088, 29152, 29140, 29159, 29177, 29213, 29224, 28780, 28952, 29030, 29113, 25150, 25149, 25155, 25160, 25161, 31035, 31040, 31046, 31049, 31067, 31068, 31059, 31066, 31074, 31063, 31072, 31087, 31079, 31098, 31109, 31114, 31130, 31143, 31155, 24529, 24528, 38814, 38815, 38817, 38818, 38820, 38821, 38822, 38823, 38824, 38825, 38826, 38828, 38830, 38832, 38833, 38835, 38837, 38838, 38839, 38840, 38841, 38842, 38843, 38844, 38845, 38846, 38847, 38848, 38849, 38850, 38851, 38852, 38853, 38854, 38855, 38856, 38857, 38858, 38859, 38860, 38861, 38862, 38863, 38864, 38865, 38866, 38867, 38868, 38869, 38870, 38871, 38872, 38873, 38874, 38875, 38876, 38877, 38878, 38879, 38880, 38881, 38882, 38883, 38884, 38885, 38888, 38894, 38895, 38896, 38897, 38898, 38900, 38903, 38904, 38905, 38906, 38907, 38908, 38909, 38910, 38911, 38912, 38913, 38914, 38915, 38916, 38917, 38918, 38919, 38920, 38921, 38922, 38923, 38924, 38925, 38926, 24636, 24669, 24666, 24679, 24641, 24665, 24675, 24747, 24838, 24845, 24925, 25001, 24989, 25035, 25041, 25094, 32896, 32895, 27795, 27894, 28156, 30710, 30712, 30720, 30729, 30743, 30744, 30737, 26027, 30765, 30748, 30749, 30777, 30778, 30779, 30751, 30780, 30757, 30764, 30755, 30761, 30798, 30829, 30806, 30807, 30758, 30800, 30791, 30796, 30826, 30875, 30867, 30874, 30855, 30876, 30881, 30883, 30898, 30905, 30885, 30932, 30937, 30921, 30956, 30962, 30981, 30964, 30995, 31012, 31006, 31028, 40859, 40697, 40699, 40700, 30449, 30468, 30477, 30457, 30471, 30472, 30490, 30498, 30489, 30509, 30502, 30517, 30520, 30544, 30545, 30535, 30531, 30554, 30568, 38927, 38928, 38929, 38930, 38931, 38932, 38933, 38934, 38935, 38936, 38937, 38938, 38939, 38940, 38941, 38942, 38943, 38944, 38945, 38946, 38947, 38948, 38949, 38950, 38951, 38952, 38953, 38954, 38955, 38956, 38957, 38958, 38959, 38960, 38961, 38962, 38963, 38964, 38965, 38966, 38967, 38968, 38969, 38970, 38971, 38972, 38973, 38974, 38975, 38976, 38977, 38978, 38979, 38980, 38981, 38982, 38983, 38984, 38985, 38986, 38987, 38988, 38989, 38990, 38991, 38992, 38993, 38994, 38995, 38996, 38997, 38998, 38999, 39e3, 39001, 39002, 39003, 39004, 39005, 39006, 39007, 39008, 39009, 39010, 39011, 39012, 39013, 39014, 39015, 39016, 39017, 39018, 39019, 39020, 39021, 39022, 30562, 30565, 30591, 30605, 30589, 30592, 30604, 30609, 30623, 30624, 30640, 30645, 30653, 30010, 30016, 30030, 30027, 30024, 30043, 30066, 30073, 30083, 32600, 32609, 32607, 35400, 32616, 32628, 32625, 32633, 32641, 32638, 30413, 30437, 34866, 38021, 38022, 38023, 38027, 38026, 38028, 38029, 38031, 38032, 38036, 38039, 38037, 38042, 38043, 38044, 38051, 38052, 38059, 38058, 38061, 38060, 38063, 38064, 38066, 38068, 38070, 38071, 38072, 38073, 38074, 38076, 38077, 38079, 38084, 38088, 38089, 38090, 38091, 38092, 38093, 38094, 38096, 38097, 38098, 38101, 38102, 38103, 38105, 38104, 38107, 38110, 38111, 38112, 38114, 38116, 38117, 38119, 38120, 38122, 39023, 39024, 39025, 39026, 39027, 39028, 39051, 39054, 39058, 39061, 39065, 39075, 39080, 39081, 39082, 39083, 39084, 39085, 39086, 39087, 39088, 39089, 39090, 39091, 39092, 39093, 39094, 39095, 39096, 39097, 39098, 39099, 39100, 39101, 39102, 39103, 39104, 39105, 39106, 39107, 39108, 39109, 39110, 39111, 39112, 39113, 39114, 39115, 39116, 39117, 39119, 39120, 39124, 39126, 39127, 39131, 39132, 39133, 39136, 39137, 39138, 39139, 39140, 39141, 39142, 39145, 39146, 39147, 39148, 39149, 39150, 39151, 39152, 39153, 39154, 39155, 39156, 39157, 39158, 39159, 39160, 39161, 39162, 39163, 39164, 39165, 39166, 39167, 39168, 39169, 39170, 39171, 39172, 39173, 39174, 39175, 38121, 38123, 38126, 38127, 38131, 38132, 38133, 38135, 38137, 38140, 38141, 38143, 38147, 38146, 38150, 38151, 38153, 38154, 38157, 38158, 38159, 38162, 38163, 38164, 38165, 38166, 38168, 38171, 38173, 38174, 38175, 38178, 38186, 38187, 38185, 38188, 38193, 38194, 38196, 38198, 38199, 38200, 38204, 38206, 38207, 38210, 38197, 38212, 38213, 38214, 38217, 38220, 38222, 38223, 38226, 38227, 38228, 38230, 38231, 38232, 38233, 38235, 38238, 38239, 38237, 38241, 38242, 38244, 38245, 38246, 38247, 38248, 38249, 38250, 38251, 38252, 38255, 38257, 38258, 38259, 38202, 30695, 30700, 38601, 31189, 31213, 31203, 31211, 31238, 23879, 31235, 31234, 31262, 31252, 39176, 39177, 39178, 39179, 39180, 39182, 39183, 39185, 39186, 39187, 39188, 39189, 39190, 39191, 39192, 39193, 39194, 39195, 39196, 39197, 39198, 39199, 39200, 39201, 39202, 39203, 39204, 39205, 39206, 39207, 39208, 39209, 39210, 39211, 39212, 39213, 39215, 39216, 39217, 39218, 39219, 39220, 39221, 39222, 39223, 39224, 39225, 39226, 39227, 39228, 39229, 39230, 39231, 39232, 39233, 39234, 39235, 39236, 39237, 39238, 39239, 39240, 39241, 39242, 39243, 39244, 39245, 39246, 39247, 39248, 39249, 39250, 39251, 39254, 39255, 39256, 39257, 39258, 39259, 39260, 39261, 39262, 39263, 39264, 39265, 39266, 39268, 39270, 39283, 39288, 39289, 39291, 39294, 39298, 39299, 39305, 31289, 31287, 31313, 40655, 39333, 31344, 30344, 30350, 30355, 30361, 30372, 29918, 29920, 29996, 40480, 40482, 40488, 40489, 40490, 40491, 40492, 40498, 40497, 40502, 40504, 40503, 40505, 40506, 40510, 40513, 40514, 40516, 40518, 40519, 40520, 40521, 40523, 40524, 40526, 40529, 40533, 40535, 40538, 40539, 40540, 40542, 40547, 40550, 40551, 40552, 40553, 40554, 40555, 40556, 40561, 40557, 40563, 30098, 30100, 30102, 30112, 30109, 30124, 30115, 30131, 30132, 30136, 30148, 30129, 30128, 30147, 30146, 30166, 30157, 30179, 30184, 30182, 30180, 30187, 30183, 30211, 30193, 30204, 30207, 30224, 30208, 30213, 30220, 30231, 30218, 30245, 30232, 30229, 30233, 39308, 39310, 39322, 39323, 39324, 39325, 39326, 39327, 39328, 39329, 39330, 39331, 39332, 39334, 39335, 39337, 39338, 39339, 39340, 39341, 39342, 39343, 39344, 39345, 39346, 39347, 39348, 39349, 39350, 39351, 39352, 39353, 39354, 39355, 39356, 39357, 39358, 39359, 39360, 39361, 39362, 39363, 39364, 39365, 39366, 39367, 39368, 39369, 39370, 39371, 39372, 39373, 39374, 39375, 39376, 39377, 39378, 39379, 39380, 39381, 39382, 39383, 39384, 39385, 39386, 39387, 39388, 39389, 39390, 39391, 39392, 39393, 39394, 39395, 39396, 39397, 39398, 39399, 39400, 39401, 39402, 39403, 39404, 39405, 39406, 39407, 39408, 39409, 39410, 39411, 39412, 39413, 39414, 39415, 39416, 39417, 30235, 30268, 30242, 30240, 30272, 30253, 30256, 30271, 30261, 30275, 30270, 30259, 30285, 30302, 30292, 30300, 30294, 30315, 30319, 32714, 31462, 31352, 31353, 31360, 31366, 31368, 31381, 31398, 31392, 31404, 31400, 31405, 31411, 34916, 34921, 34930, 34941, 34943, 34946, 34978, 35014, 34999, 35004, 35017, 35042, 35022, 35043, 35045, 35057, 35098, 35068, 35048, 35070, 35056, 35105, 35097, 35091, 35099, 35082, 35124, 35115, 35126, 35137, 35174, 35195, 30091, 32997, 30386, 30388, 30684, 32786, 32788, 32790, 32796, 32800, 32802, 32805, 32806, 32807, 32809, 32808, 32817, 32779, 32821, 32835, 32838, 32845, 32850, 32873, 32881, 35203, 39032, 39040, 39043, 39418, 39419, 39420, 39421, 39422, 39423, 39424, 39425, 39426, 39427, 39428, 39429, 39430, 39431, 39432, 39433, 39434, 39435, 39436, 39437, 39438, 39439, 39440, 39441, 39442, 39443, 39444, 39445, 39446, 39447, 39448, 39449, 39450, 39451, 39452, 39453, 39454, 39455, 39456, 39457, 39458, 39459, 39460, 39461, 39462, 39463, 39464, 39465, 39466, 39467, 39468, 39469, 39470, 39471, 39472, 39473, 39474, 39475, 39476, 39477, 39478, 39479, 39480, 39481, 39482, 39483, 39484, 39485, 39486, 39487, 39488, 39489, 39490, 39491, 39492, 39493, 39494, 39495, 39496, 39497, 39498, 39499, 39500, 39501, 39502, 39503, 39504, 39505, 39506, 39507, 39508, 39509, 39510, 39511, 39512, 39513, 39049, 39052, 39053, 39055, 39060, 39066, 39067, 39070, 39071, 39073, 39074, 39077, 39078, 34381, 34388, 34412, 34414, 34431, 34426, 34428, 34427, 34472, 34445, 34443, 34476, 34461, 34471, 34467, 34474, 34451, 34473, 34486, 34500, 34485, 34510, 34480, 34490, 34481, 34479, 34505, 34511, 34484, 34537, 34545, 34546, 34541, 34547, 34512, 34579, 34526, 34548, 34527, 34520, 34513, 34563, 34567, 34552, 34568, 34570, 34573, 34569, 34595, 34619, 34590, 34597, 34606, 34586, 34622, 34632, 34612, 34609, 34601, 34615, 34623, 34690, 34594, 34685, 34686, 34683, 34656, 34672, 34636, 34670, 34699, 34643, 34659, 34684, 34660, 34649, 34661, 34707, 34735, 34728, 34770, 39514, 39515, 39516, 39517, 39518, 39519, 39520, 39521, 39522, 39523, 39524, 39525, 39526, 39527, 39528, 39529, 39530, 39531, 39538, 39555, 39561, 39565, 39566, 39572, 39573, 39577, 39590, 39593, 39594, 39595, 39596, 39597, 39598, 39599, 39602, 39603, 39604, 39605, 39609, 39611, 39613, 39614, 39615, 39619, 39620, 39622, 39623, 39624, 39625, 39626, 39629, 39630, 39631, 39632, 39634, 39636, 39637, 39638, 39639, 39641, 39642, 39643, 39644, 39645, 39646, 39648, 39650, 39651, 39652, 39653, 39655, 39656, 39657, 39658, 39660, 39662, 39664, 39665, 39666, 39667, 39668, 39669, 39670, 39671, 39672, 39674, 39676, 39677, 39678, 39679, 39680, 39681, 39682, 39684, 39685, 39686, 34758, 34696, 34693, 34733, 34711, 34691, 34731, 34789, 34732, 34741, 34739, 34763, 34771, 34749, 34769, 34752, 34762, 34779, 34794, 34784, 34798, 34838, 34835, 34814, 34826, 34843, 34849, 34873, 34876, 32566, 32578, 32580, 32581, 33296, 31482, 31485, 31496, 31491, 31492, 31509, 31498, 31531, 31503, 31559, 31544, 31530, 31513, 31534, 31537, 31520, 31525, 31524, 31539, 31550, 31518, 31576, 31578, 31557, 31605, 31564, 31581, 31584, 31598, 31611, 31586, 31602, 31601, 31632, 31654, 31655, 31672, 31660, 31645, 31656, 31621, 31658, 31644, 31650, 31659, 31668, 31697, 31681, 31692, 31709, 31706, 31717, 31718, 31722, 31756, 31742, 31740, 31759, 31766, 31755, 39687, 39689, 39690, 39691, 39692, 39693, 39694, 39696, 39697, 39698, 39700, 39701, 39702, 39703, 39704, 39705, 39706, 39707, 39708, 39709, 39710, 39712, 39713, 39714, 39716, 39717, 39718, 39719, 39720, 39721, 39722, 39723, 39724, 39725, 39726, 39728, 39729, 39731, 39732, 39733, 39734, 39735, 39736, 39737, 39738, 39741, 39742, 39743, 39744, 39750, 39754, 39755, 39756, 39758, 39760, 39762, 39763, 39765, 39766, 39767, 39768, 39769, 39770, 39771, 39772, 39773, 39774, 39775, 39776, 39777, 39778, 39779, 39780, 39781, 39782, 39783, 39784, 39785, 39786, 39787, 39788, 39789, 39790, 39791, 39792, 39793, 39794, 39795, 39796, 39797, 39798, 39799, 39800, 39801, 39802, 39803, 31775, 31786, 31782, 31800, 31809, 31808, 33278, 33281, 33282, 33284, 33260, 34884, 33313, 33314, 33315, 33325, 33327, 33320, 33323, 33336, 33339, 33331, 33332, 33342, 33348, 33353, 33355, 33359, 33370, 33375, 33384, 34942, 34949, 34952, 35032, 35039, 35166, 32669, 32671, 32679, 32687, 32688, 32690, 31868, 25929, 31889, 31901, 31900, 31902, 31906, 31922, 31932, 31933, 31937, 31943, 31948, 31949, 31944, 31941, 31959, 31976, 33390, 26280, 32703, 32718, 32725, 32741, 32737, 32742, 32745, 32750, 32755, 31992, 32119, 32166, 32174, 32327, 32411, 40632, 40628, 36211, 36228, 36244, 36241, 36273, 36199, 36205, 35911, 35913, 37194, 37200, 37198, 37199, 37220, 39804, 39805, 39806, 39807, 39808, 39809, 39810, 39811, 39812, 39813, 39814, 39815, 39816, 39817, 39818, 39819, 39820, 39821, 39822, 39823, 39824, 39825, 39826, 39827, 39828, 39829, 39830, 39831, 39832, 39833, 39834, 39835, 39836, 39837, 39838, 39839, 39840, 39841, 39842, 39843, 39844, 39845, 39846, 39847, 39848, 39849, 39850, 39851, 39852, 39853, 39854, 39855, 39856, 39857, 39858, 39859, 39860, 39861, 39862, 39863, 39864, 39865, 39866, 39867, 39868, 39869, 39870, 39871, 39872, 39873, 39874, 39875, 39876, 39877, 39878, 39879, 39880, 39881, 39882, 39883, 39884, 39885, 39886, 39887, 39888, 39889, 39890, 39891, 39892, 39893, 39894, 39895, 39896, 39897, 39898, 39899, 37218, 37217, 37232, 37225, 37231, 37245, 37246, 37234, 37236, 37241, 37260, 37253, 37264, 37261, 37265, 37282, 37283, 37290, 37293, 37294, 37295, 37301, 37300, 37306, 35925, 40574, 36280, 36331, 36357, 36441, 36457, 36277, 36287, 36284, 36282, 36292, 36310, 36311, 36314, 36318, 36302, 36303, 36315, 36294, 36332, 36343, 36344, 36323, 36345, 36347, 36324, 36361, 36349, 36372, 36381, 36383, 36396, 36398, 36387, 36399, 36410, 36416, 36409, 36405, 36413, 36401, 36425, 36417, 36418, 36433, 36434, 36426, 36464, 36470, 36476, 36463, 36468, 36485, 36495, 36500, 36496, 36508, 36510, 35960, 35970, 35978, 35973, 35992, 35988, 26011, 35286, 35294, 35290, 35292, 39900, 39901, 39902, 39903, 39904, 39905, 39906, 39907, 39908, 39909, 39910, 39911, 39912, 39913, 39914, 39915, 39916, 39917, 39918, 39919, 39920, 39921, 39922, 39923, 39924, 39925, 39926, 39927, 39928, 39929, 39930, 39931, 39932, 39933, 39934, 39935, 39936, 39937, 39938, 39939, 39940, 39941, 39942, 39943, 39944, 39945, 39946, 39947, 39948, 39949, 39950, 39951, 39952, 39953, 39954, 39955, 39956, 39957, 39958, 39959, 39960, 39961, 39962, 39963, 39964, 39965, 39966, 39967, 39968, 39969, 39970, 39971, 39972, 39973, 39974, 39975, 39976, 39977, 39978, 39979, 39980, 39981, 39982, 39983, 39984, 39985, 39986, 39987, 39988, 39989, 39990, 39991, 39992, 39993, 39994, 39995, 35301, 35307, 35311, 35390, 35622, 38739, 38633, 38643, 38639, 38662, 38657, 38664, 38671, 38670, 38698, 38701, 38704, 38718, 40832, 40835, 40837, 40838, 40839, 40840, 40841, 40842, 40844, 40702, 40715, 40717, 38585, 38588, 38589, 38606, 38610, 30655, 38624, 37518, 37550, 37576, 37694, 37738, 37834, 37775, 37950, 37995, 40063, 40066, 40069, 40070, 40071, 40072, 31267, 40075, 40078, 40080, 40081, 40082, 40084, 40085, 40090, 40091, 40094, 40095, 40096, 40097, 40098, 40099, 40101, 40102, 40103, 40104, 40105, 40107, 40109, 40110, 40112, 40113, 40114, 40115, 40116, 40117, 40118, 40119, 40122, 40123, 40124, 40125, 40132, 40133, 40134, 40135, 40138, 40139, 39996, 39997, 39998, 39999, 4e4, 40001, 40002, 40003, 40004, 40005, 40006, 40007, 40008, 40009, 40010, 40011, 40012, 40013, 40014, 40015, 40016, 40017, 40018, 40019, 40020, 40021, 40022, 40023, 40024, 40025, 40026, 40027, 40028, 40029, 40030, 40031, 40032, 40033, 40034, 40035, 40036, 40037, 40038, 40039, 40040, 40041, 40042, 40043, 40044, 40045, 40046, 40047, 40048, 40049, 40050, 40051, 40052, 40053, 40054, 40055, 40056, 40057, 40058, 40059, 40061, 40062, 40064, 40067, 40068, 40073, 40074, 40076, 40079, 40083, 40086, 40087, 40088, 40089, 40093, 40106, 40108, 40111, 40121, 40126, 40127, 40128, 40129, 40130, 40136, 40137, 40145, 40146, 40154, 40155, 40160, 40161, 40140, 40141, 40142, 40143, 40144, 40147, 40148, 40149, 40151, 40152, 40153, 40156, 40157, 40159, 40162, 38780, 38789, 38801, 38802, 38804, 38831, 38827, 38819, 38834, 38836, 39601, 39600, 39607, 40536, 39606, 39610, 39612, 39617, 39616, 39621, 39618, 39627, 39628, 39633, 39749, 39747, 39751, 39753, 39752, 39757, 39761, 39144, 39181, 39214, 39253, 39252, 39647, 39649, 39654, 39663, 39659, 39675, 39661, 39673, 39688, 39695, 39699, 39711, 39715, 40637, 40638, 32315, 40578, 40583, 40584, 40587, 40594, 37846, 40605, 40607, 40667, 40668, 40669, 40672, 40671, 40674, 40681, 40679, 40677, 40682, 40687, 40738, 40748, 40751, 40761, 40759, 40765, 40766, 40772, 40163, 40164, 40165, 40166, 40167, 40168, 40169, 40170, 40171, 40172, 40173, 40174, 40175, 40176, 40177, 40178, 40179, 40180, 40181, 40182, 40183, 40184, 40185, 40186, 40187, 40188, 40189, 40190, 40191, 40192, 40193, 40194, 40195, 40196, 40197, 40198, 40199, 40200, 40201, 40202, 40203, 40204, 40205, 40206, 40207, 40208, 40209, 40210, 40211, 40212, 40213, 40214, 40215, 40216, 40217, 40218, 40219, 40220, 40221, 40222, 40223, 40224, 40225, 40226, 40227, 40228, 40229, 40230, 40231, 40232, 40233, 40234, 40235, 40236, 40237, 40238, 40239, 40240, 40241, 40242, 40243, 40244, 40245, 40246, 40247, 40248, 40249, 40250, 40251, 40252, 40253, 40254, 40255, 40256, 40257, 40258, 57908, 57909, 57910, 57911, 57912, 57913, 57914, 57915, 57916, 57917, 57918, 57919, 57920, 57921, 57922, 57923, 57924, 57925, 57926, 57927, 57928, 57929, 57930, 57931, 57932, 57933, 57934, 57935, 57936, 57937, 57938, 57939, 57940, 57941, 57942, 57943, 57944, 57945, 57946, 57947, 57948, 57949, 57950, 57951, 57952, 57953, 57954, 57955, 57956, 57957, 57958, 57959, 57960, 57961, 57962, 57963, 57964, 57965, 57966, 57967, 57968, 57969, 57970, 57971, 57972, 57973, 57974, 57975, 57976, 57977, 57978, 57979, 57980, 57981, 57982, 57983, 57984, 57985, 57986, 57987, 57988, 57989, 57990, 57991, 57992, 57993, 57994, 57995, 57996, 57997, 57998, 57999, 58e3, 58001, 40259, 40260, 40261, 40262, 40263, 40264, 40265, 40266, 40267, 40268, 40269, 40270, 40271, 40272, 40273, 40274, 40275, 40276, 40277, 40278, 40279, 40280, 40281, 40282, 40283, 40284, 40285, 40286, 40287, 40288, 40289, 40290, 40291, 40292, 40293, 40294, 40295, 40296, 40297, 40298, 40299, 40300, 40301, 40302, 40303, 40304, 40305, 40306, 40307, 40308, 40309, 40310, 40311, 40312, 40313, 40314, 40315, 40316, 40317, 40318, 40319, 40320, 40321, 40322, 40323, 40324, 40325, 40326, 40327, 40328, 40329, 40330, 40331, 40332, 40333, 40334, 40335, 40336, 40337, 40338, 40339, 40340, 40341, 40342, 40343, 40344, 40345, 40346, 40347, 40348, 40349, 40350, 40351, 40352, 40353, 40354, 58002, 58003, 58004, 58005, 58006, 58007, 58008, 58009, 58010, 58011, 58012, 58013, 58014, 58015, 58016, 58017, 58018, 58019, 58020, 58021, 58022, 58023, 58024, 58025, 58026, 58027, 58028, 58029, 58030, 58031, 58032, 58033, 58034, 58035, 58036, 58037, 58038, 58039, 58040, 58041, 58042, 58043, 58044, 58045, 58046, 58047, 58048, 58049, 58050, 58051, 58052, 58053, 58054, 58055, 58056, 58057, 58058, 58059, 58060, 58061, 58062, 58063, 58064, 58065, 58066, 58067, 58068, 58069, 58070, 58071, 58072, 58073, 58074, 58075, 58076, 58077, 58078, 58079, 58080, 58081, 58082, 58083, 58084, 58085, 58086, 58087, 58088, 58089, 58090, 58091, 58092, 58093, 58094, 58095, 40355, 40356, 40357, 40358, 40359, 40360, 40361, 40362, 40363, 40364, 40365, 40366, 40367, 40368, 40369, 40370, 40371, 40372, 40373, 40374, 40375, 40376, 40377, 40378, 40379, 40380, 40381, 40382, 40383, 40384, 40385, 40386, 40387, 40388, 40389, 40390, 40391, 40392, 40393, 40394, 40395, 40396, 40397, 40398, 40399, 40400, 40401, 40402, 40403, 40404, 40405, 40406, 40407, 40408, 40409, 40410, 40411, 40412, 40413, 40414, 40415, 40416, 40417, 40418, 40419, 40420, 40421, 40422, 40423, 40424, 40425, 40426, 40427, 40428, 40429, 40430, 40431, 40432, 40433, 40434, 40435, 40436, 40437, 40438, 40439, 40440, 40441, 40442, 40443, 40444, 40445, 40446, 40447, 40448, 40449, 40450, 58096, 58097, 58098, 58099, 58100, 58101, 58102, 58103, 58104, 58105, 58106, 58107, 58108, 58109, 58110, 58111, 58112, 58113, 58114, 58115, 58116, 58117, 58118, 58119, 58120, 58121, 58122, 58123, 58124, 58125, 58126, 58127, 58128, 58129, 58130, 58131, 58132, 58133, 58134, 58135, 58136, 58137, 58138, 58139, 58140, 58141, 58142, 58143, 58144, 58145, 58146, 58147, 58148, 58149, 58150, 58151, 58152, 58153, 58154, 58155, 58156, 58157, 58158, 58159, 58160, 58161, 58162, 58163, 58164, 58165, 58166, 58167, 58168, 58169, 58170, 58171, 58172, 58173, 58174, 58175, 58176, 58177, 58178, 58179, 58180, 58181, 58182, 58183, 58184, 58185, 58186, 58187, 58188, 58189, 40451, 40452, 40453, 40454, 40455, 40456, 40457, 40458, 40459, 40460, 40461, 40462, 40463, 40464, 40465, 40466, 40467, 40468, 40469, 40470, 40471, 40472, 40473, 40474, 40475, 40476, 40477, 40478, 40484, 40487, 40494, 40496, 40500, 40507, 40508, 40512, 40525, 40528, 40530, 40531, 40532, 40534, 40537, 40541, 40543, 40544, 40545, 40546, 40549, 40558, 40559, 40562, 40564, 40565, 40566, 40567, 40568, 40569, 40570, 40571, 40572, 40573, 40576, 40577, 40579, 40580, 40581, 40582, 40585, 40586, 40588, 40589, 40590, 40591, 40592, 40593, 40596, 40597, 40598, 40599, 40600, 40601, 40602, 40603, 40604, 40606, 40608, 40609, 40610, 40611, 40612, 40613, 40615, 40616, 40617, 40618, 58190, 58191, 58192, 58193, 58194, 58195, 58196, 58197, 58198, 58199, 58200, 58201, 58202, 58203, 58204, 58205, 58206, 58207, 58208, 58209, 58210, 58211, 58212, 58213, 58214, 58215, 58216, 58217, 58218, 58219, 58220, 58221, 58222, 58223, 58224, 58225, 58226, 58227, 58228, 58229, 58230, 58231, 58232, 58233, 58234, 58235, 58236, 58237, 58238, 58239, 58240, 58241, 58242, 58243, 58244, 58245, 58246, 58247, 58248, 58249, 58250, 58251, 58252, 58253, 58254, 58255, 58256, 58257, 58258, 58259, 58260, 58261, 58262, 58263, 58264, 58265, 58266, 58267, 58268, 58269, 58270, 58271, 58272, 58273, 58274, 58275, 58276, 58277, 58278, 58279, 58280, 58281, 58282, 58283, 40619, 40620, 40621, 40622, 40623, 40624, 40625, 40626, 40627, 40629, 40630, 40631, 40633, 40634, 40636, 40639, 40640, 40641, 40642, 40643, 40645, 40646, 40647, 40648, 40650, 40651, 40652, 40656, 40658, 40659, 40661, 40662, 40663, 40665, 40666, 40670, 40673, 40675, 40676, 40678, 40680, 40683, 40684, 40685, 40686, 40688, 40689, 40690, 40691, 40692, 40693, 40694, 40695, 40696, 40698, 40701, 40703, 40704, 40705, 40706, 40707, 40708, 40709, 40710, 40711, 40712, 40713, 40714, 40716, 40719, 40721, 40722, 40724, 40725, 40726, 40728, 40730, 40731, 40732, 40733, 40734, 40735, 40737, 40739, 40740, 40741, 40742, 40743, 40744, 40745, 40746, 40747, 40749, 40750, 40752, 40753, 58284, 58285, 58286, 58287, 58288, 58289, 58290, 58291, 58292, 58293, 58294, 58295, 58296, 58297, 58298, 58299, 58300, 58301, 58302, 58303, 58304, 58305, 58306, 58307, 58308, 58309, 58310, 58311, 58312, 58313, 58314, 58315, 58316, 58317, 58318, 58319, 58320, 58321, 58322, 58323, 58324, 58325, 58326, 58327, 58328, 58329, 58330, 58331, 58332, 58333, 58334, 58335, 58336, 58337, 58338, 58339, 58340, 58341, 58342, 58343, 58344, 58345, 58346, 58347, 58348, 58349, 58350, 58351, 58352, 58353, 58354, 58355, 58356, 58357, 58358, 58359, 58360, 58361, 58362, 58363, 58364, 58365, 58366, 58367, 58368, 58369, 58370, 58371, 58372, 58373, 58374, 58375, 58376, 58377, 40754, 40755, 40756, 40757, 40758, 40760, 40762, 40764, 40767, 40768, 40769, 40770, 40771, 40773, 40774, 40775, 40776, 40777, 40778, 40779, 40780, 40781, 40782, 40783, 40786, 40787, 40788, 40789, 40790, 40791, 40792, 40793, 40794, 40795, 40796, 40797, 40798, 40799, 40800, 40801, 40802, 40803, 40804, 40805, 40806, 40807, 40808, 40809, 40810, 40811, 40812, 40813, 40814, 40815, 40816, 40817, 40818, 40819, 40820, 40821, 40822, 40823, 40824, 40825, 40826, 40827, 40828, 40829, 40830, 40833, 40834, 40845, 40846, 40847, 40848, 40849, 40850, 40851, 40852, 40853, 40854, 40855, 40856, 40860, 40861, 40862, 40865, 40866, 40867, 40868, 40869, 63788, 63865, 63893, 63975, 63985, 58378, 58379, 58380, 58381, 58382, 58383, 58384, 58385, 58386, 58387, 58388, 58389, 58390, 58391, 58392, 58393, 58394, 58395, 58396, 58397, 58398, 58399, 58400, 58401, 58402, 58403, 58404, 58405, 58406, 58407, 58408, 58409, 58410, 58411, 58412, 58413, 58414, 58415, 58416, 58417, 58418, 58419, 58420, 58421, 58422, 58423, 58424, 58425, 58426, 58427, 58428, 58429, 58430, 58431, 58432, 58433, 58434, 58435, 58436, 58437, 58438, 58439, 58440, 58441, 58442, 58443, 58444, 58445, 58446, 58447, 58448, 58449, 58450, 58451, 58452, 58453, 58454, 58455, 58456, 58457, 58458, 58459, 58460, 58461, 58462, 58463, 58464, 58465, 58466, 58467, 58468, 58469, 58470, 58471, 64012, 64013, 64014, 64015, 64017, 64019, 64020, 64024, 64031, 64032, 64033, 64035, 64036, 64039, 64040, 64041, 11905, 59414, 59415, 59416, 11908, 13427, 13383, 11912, 11915, 59422, 13726, 13850, 13838, 11916, 11927, 14702, 14616, 59430, 14799, 14815, 14963, 14800, 59435, 59436, 15182, 15470, 15584, 11943, 59441, 59442, 11946, 16470, 16735, 11950, 17207, 11955, 11958, 11959, 59451, 17329, 17324, 11963, 17373, 17622, 18017, 17996, 59459, 18211, 18217, 18300, 18317, 11978, 18759, 18810, 18813, 18818, 18819, 18821, 18822, 18847, 18843, 18871, 18870, 59476, 59477, 19619, 19615, 19616, 19617, 19575, 19618, 19731, 19732, 19733, 19734, 19735, 19736, 19737, 19886, 59492, 58472, 58473, 58474, 58475, 58476, 58477, 58478, 58479, 58480, 58481, 58482, 58483, 58484, 58485, 58486, 58487, 58488, 58489, 58490, 58491, 58492, 58493, 58494, 58495, 58496, 58497, 58498, 58499, 58500, 58501, 58502, 58503, 58504, 58505, 58506, 58507, 58508, 58509, 58510, 58511, 58512, 58513, 58514, 58515, 58516, 58517, 58518, 58519, 58520, 58521, 58522, 58523, 58524, 58525, 58526, 58527, 58528, 58529, 58530, 58531, 58532, 58533, 58534, 58535, 58536, 58537, 58538, 58539, 58540, 58541, 58542, 58543, 58544, 58545, 58546, 58547, 58548, 58549, 58550, 58551, 58552, 58553, 58554, 58555, 58556, 58557, 58558, 58559, 58560, 58561, 58562, 58563, 58564, 58565 ],
"gb18030-ranges": [ [ 0, 128 ], [ 36, 165 ], [ 38, 169 ], [ 45, 178 ], [ 50, 184 ], [ 81, 216 ], [ 89, 226 ], [ 95, 235 ], [ 96, 238 ], [ 100, 244 ], [ 103, 248 ], [ 104, 251 ], [ 105, 253 ], [ 109, 258 ], [ 126, 276 ], [ 133, 284 ], [ 148, 300 ], [ 172, 325 ], [ 175, 329 ], [ 179, 334 ], [ 208, 364 ], [ 306, 463 ], [ 307, 465 ], [ 308, 467 ], [ 309, 469 ], [ 310, 471 ], [ 311, 473 ], [ 312, 475 ], [ 313, 477 ], [ 341, 506 ], [ 428, 594 ], [ 443, 610 ], [ 544, 712 ], [ 545, 716 ], [ 558, 730 ], [ 741, 930 ], [ 742, 938 ], [ 749, 962 ], [ 750, 970 ], [ 805, 1026 ], [ 819, 1104 ], [ 820, 1106 ], [ 7922, 8209 ], [ 7924, 8215 ], [ 7925, 8218 ], [ 7927, 8222 ], [ 7934, 8231 ], [ 7943, 8241 ], [ 7944, 8244 ], [ 7945, 8246 ], [ 7950, 8252 ], [ 8062, 8365 ], [ 8148, 8452 ], [ 8149, 8454 ], [ 8152, 8458 ], [ 8164, 8471 ], [ 8174, 8482 ], [ 8236, 8556 ], [ 8240, 8570 ], [ 8262, 8596 ], [ 8264, 8602 ], [ 8374, 8713 ], [ 8380, 8720 ], [ 8381, 8722 ], [ 8384, 8726 ], [ 8388, 8731 ], [ 8390, 8737 ], [ 8392, 8740 ], [ 8393, 8742 ], [ 8394, 8748 ], [ 8396, 8751 ], [ 8401, 8760 ], [ 8406, 8766 ], [ 8416, 8777 ], [ 8419, 8781 ], [ 8424, 8787 ], [ 8437, 8802 ], [ 8439, 8808 ], [ 8445, 8816 ], [ 8482, 8854 ], [ 8485, 8858 ], [ 8496, 8870 ], [ 8521, 8896 ], [ 8603, 8979 ], [ 8936, 9322 ], [ 8946, 9372 ], [ 9046, 9548 ], [ 9050, 9588 ], [ 9063, 9616 ], [ 9066, 9622 ], [ 9076, 9634 ], [ 9092, 9652 ], [ 9100, 9662 ], [ 9108, 9672 ], [ 9111, 9676 ], [ 9113, 9680 ], [ 9131, 9702 ], [ 9162, 9735 ], [ 9164, 9738 ], [ 9218, 9793 ], [ 9219, 9795 ], [ 11329, 11906 ], [ 11331, 11909 ], [ 11334, 11913 ], [ 11336, 11917 ], [ 11346, 11928 ], [ 11361, 11944 ], [ 11363, 11947 ], [ 11366, 11951 ], [ 11370, 11956 ], [ 11372, 11960 ], [ 11375, 11964 ], [ 11389, 11979 ], [ 11682, 12284 ], [ 11686, 12292 ], [ 11687, 12312 ], [ 11692, 12319 ], [ 11694, 12330 ], [ 11714, 12351 ], [ 11716, 12436 ], [ 11723, 12447 ], [ 11725, 12535 ], [ 11730, 12543 ], [ 11736, 12586 ], [ 11982, 12842 ], [ 11989, 12850 ], [ 12102, 12964 ], [ 12336, 13200 ], [ 12348, 13215 ], [ 12350, 13218 ], [ 12384, 13253 ], [ 12393, 13263 ], [ 12395, 13267 ], [ 12397, 13270 ], [ 12510, 13384 ], [ 12553, 13428 ], [ 12851, 13727 ], [ 12962, 13839 ], [ 12973, 13851 ], [ 13738, 14617 ], [ 13823, 14703 ], [ 13919, 14801 ], [ 13933, 14816 ], [ 14080, 14964 ], [ 14298, 15183 ], [ 14585, 15471 ], [ 14698, 15585 ], [ 15583, 16471 ], [ 15847, 16736 ], [ 16318, 17208 ], [ 16434, 17325 ], [ 16438, 17330 ], [ 16481, 17374 ], [ 16729, 17623 ], [ 17102, 17997 ], [ 17122, 18018 ], [ 17315, 18212 ], [ 17320, 18218 ], [ 17402, 18301 ], [ 17418, 18318 ], [ 17859, 18760 ], [ 17909, 18811 ], [ 17911, 18814 ], [ 17915, 18820 ], [ 17916, 18823 ], [ 17936, 18844 ], [ 17939, 18848 ], [ 17961, 18872 ], [ 18664, 19576 ], [ 18703, 19620 ], [ 18814, 19738 ], [ 18962, 19887 ], [ 19043, 40870 ], [ 33469, 59244 ], [ 33470, 59336 ], [ 33471, 59367 ], [ 33484, 59413 ], [ 33485, 59417 ], [ 33490, 59423 ], [ 33497, 59431 ], [ 33501, 59437 ], [ 33505, 59443 ], [ 33513, 59452 ], [ 33520, 59460 ], [ 33536, 59478 ], [ 33550, 59493 ], [ 37845, 63789 ], [ 37921, 63866 ], [ 37948, 63894 ], [ 38029, 63976 ], [ 38038, 63986 ], [ 38064, 64016 ], [ 38065, 64018 ], [ 38066, 64021 ], [ 38069, 64025 ], [ 38075, 64034 ], [ 38076, 64037 ], [ 38078, 64042 ], [ 39108, 65074 ], [ 39109, 65093 ], [ 39113, 65107 ], [ 39114, 65112 ], [ 39115, 65127 ], [ 39116, 65132 ], [ 39265, 65375 ], [ 39394, 65510 ], [ 189e3, 65536 ] ]
};
})();

(function(t) {
"use strict";
function e(t, e, i) {
return e <= t && t <= i;
}
var i = Math.floor;
function n(t) {
if (void 0 === t) return {};
if (t === Object(t)) return t;
throw TypeError("Could not convert argument to dictionary");
}
function o(t) {
for (var e = String(t), i = e.length, n = 0, o = []; n < i; ) {
var r = e.charCodeAt(n);
if (r < 55296 || r > 57343) o.push(r); else if (56320 <= r && r <= 57343) o.push(65533); else if (55296 <= r && r <= 56319) if (n === i - 1) o.push(65533); else {
var s = e.charCodeAt(n + 1);
if (56320 <= s && s <= 57343) {
var a = 1023 & r, l = 1023 & s;
o.push(65536 + (a << 10) + l);
n += 1;
} else o.push(65533);
}
n += 1;
}
return o;
}
function r(t) {
for (var e = "", i = 0; i < t.length; ++i) {
var n = t[i];
if (n <= 65535) e += String.fromCharCode(n); else {
n -= 65536;
e += String.fromCharCode(55296 + (n >> 10), 56320 + (1023 & n));
}
}
return e;
}
function s(t) {
return 0 <= t && t <= 127;
}
var a = s, l = -1;
function h(t) {
this.tokens = [].slice.call(t);
this.tokens.reverse();
}
h.prototype = {
endOfStream: function() {
return !this.tokens.length;
},
read: function() {
return this.tokens.length ? this.tokens.pop() : l;
},
prepend: function(t) {
if (Array.isArray(t)) for (var e = t; e.length; ) this.tokens.push(e.pop()); else this.tokens.push(t);
},
push: function(t) {
if (Array.isArray(t)) for (var e = t; e.length; ) this.tokens.unshift(e.shift()); else this.tokens.unshift(t);
}
};
var c = -1;
function u(t, e) {
if (t) throw TypeError("Decoder error");
return e || 65533;
}
function p(t) {
throw TypeError("The code point " + t + " could not be encoded.");
}
function d(t) {
t = String(t).trim().toLowerCase();
return Object.prototype.hasOwnProperty.call(_, t) ? _[t] : null;
}
var f = [ {
encodings: [ {
labels: [ "unicode-1-1-utf-8", "utf-8", "utf8" ],
name: "UTF-8"
} ],
heading: "The Encoding"
}, {
encodings: [ {
labels: [ "866", "cp866", "csibm866", "ibm866" ],
name: "IBM866"
}, {
labels: [ "csisolatin2", "iso-8859-2", "iso-ir-101", "iso8859-2", "iso88592", "iso_8859-2", "iso_8859-2:1987", "l2", "latin2" ],
name: "ISO-8859-2"
}, {
labels: [ "csisolatin3", "iso-8859-3", "iso-ir-109", "iso8859-3", "iso88593", "iso_8859-3", "iso_8859-3:1988", "l3", "latin3" ],
name: "ISO-8859-3"
}, {
labels: [ "csisolatin4", "iso-8859-4", "iso-ir-110", "iso8859-4", "iso88594", "iso_8859-4", "iso_8859-4:1988", "l4", "latin4" ],
name: "ISO-8859-4"
}, {
labels: [ "csisolatincyrillic", "cyrillic", "iso-8859-5", "iso-ir-144", "iso8859-5", "iso88595", "iso_8859-5", "iso_8859-5:1988" ],
name: "ISO-8859-5"
}, {
labels: [ "arabic", "asmo-708", "csiso88596e", "csiso88596i", "csisolatinarabic", "ecma-114", "iso-8859-6", "iso-8859-6-e", "iso-8859-6-i", "iso-ir-127", "iso8859-6", "iso88596", "iso_8859-6", "iso_8859-6:1987" ],
name: "ISO-8859-6"
}, {
labels: [ "csisolatingreek", "ecma-118", "elot_928", "greek", "greek8", "iso-8859-7", "iso-ir-126", "iso8859-7", "iso88597", "iso_8859-7", "iso_8859-7:1987", "sun_eu_greek" ],
name: "ISO-8859-7"
}, {
labels: [ "csiso88598e", "csisolatinhebrew", "hebrew", "iso-8859-8", "iso-8859-8-e", "iso-ir-138", "iso8859-8", "iso88598", "iso_8859-8", "iso_8859-8:1988", "visual" ],
name: "ISO-8859-8"
}, {
labels: [ "csiso88598i", "iso-8859-8-i", "logical" ],
name: "ISO-8859-8-I"
}, {
labels: [ "csisolatin6", "iso-8859-10", "iso-ir-157", "iso8859-10", "iso885910", "l6", "latin6" ],
name: "ISO-8859-10"
}, {
labels: [ "iso-8859-13", "iso8859-13", "iso885913" ],
name: "ISO-8859-13"
}, {
labels: [ "iso-8859-14", "iso8859-14", "iso885914" ],
name: "ISO-8859-14"
}, {
labels: [ "csisolatin9", "iso-8859-15", "iso8859-15", "iso885915", "iso_8859-15", "l9" ],
name: "ISO-8859-15"
}, {
labels: [ "iso-8859-16" ],
name: "ISO-8859-16"
}, {
labels: [ "cskoi8r", "koi", "koi8", "koi8-r", "koi8_r" ],
name: "KOI8-R"
}, {
labels: [ "koi8-ru", "koi8-u" ],
name: "KOI8-U"
}, {
labels: [ "csmacintosh", "mac", "macintosh", "x-mac-roman" ],
name: "macintosh"
}, {
labels: [ "dos-874", "iso-8859-11", "iso8859-11", "iso885911", "tis-620", "windows-874" ],
name: "windows-874"
}, {
labels: [ "cp1250", "windows-1250", "x-cp1250" ],
name: "windows-1250"
}, {
labels: [ "cp1251", "windows-1251", "x-cp1251" ],
name: "windows-1251"
}, {
labels: [ "ansi_x3.4-1968", "ascii", "cp1252", "cp819", "csisolatin1", "ibm819", "iso-8859-1", "iso-ir-100", "iso8859-1", "iso88591", "iso_8859-1", "iso_8859-1:1987", "l1", "latin1", "us-ascii", "windows-1252", "x-cp1252" ],
name: "windows-1252"
}, {
labels: [ "cp1253", "windows-1253", "x-cp1253" ],
name: "windows-1253"
}, {
labels: [ "cp1254", "csisolatin5", "iso-8859-9", "iso-ir-148", "iso8859-9", "iso88599", "iso_8859-9", "iso_8859-9:1989", "l5", "latin5", "windows-1254", "x-cp1254" ],
name: "windows-1254"
}, {
labels: [ "cp1255", "windows-1255", "x-cp1255" ],
name: "windows-1255"
}, {
labels: [ "cp1256", "windows-1256", "x-cp1256" ],
name: "windows-1256"
}, {
labels: [ "cp1257", "windows-1257", "x-cp1257" ],
name: "windows-1257"
}, {
labels: [ "cp1258", "windows-1258", "x-cp1258" ],
name: "windows-1258"
}, {
labels: [ "x-mac-cyrillic", "x-mac-ukrainian" ],
name: "x-mac-cyrillic"
} ],
heading: "Legacy single-byte encodings"
}, {
encodings: [ {
labels: [ "chinese", "csgb2312", "csiso58gb231280", "gb2312", "gb_2312", "gb_2312-80", "gbk", "iso-ir-58", "x-gbk" ],
name: "GBK"
}, {
labels: [ "gb18030" ],
name: "gb18030"
} ],
heading: "Legacy multi-byte Chinese (simplified) encodings"
}, {
encodings: [ {
labels: [ "big5", "big5-hkscs", "cn-big5", "csbig5", "x-x-big5" ],
name: "Big5"
} ],
heading: "Legacy multi-byte Chinese (traditional) encodings"
}, {
encodings: [ {
labels: [ "cseucpkdfmtjapanese", "euc-jp", "x-euc-jp" ],
name: "EUC-JP"
}, {
labels: [ "csiso2022jp", "iso-2022-jp" ],
name: "ISO-2022-JP"
}, {
labels: [ "csshiftjis", "ms932", "ms_kanji", "shift-jis", "shift_jis", "sjis", "windows-31j", "x-sjis" ],
name: "Shift_JIS"
} ],
heading: "Legacy multi-byte Japanese encodings"
}, {
encodings: [ {
labels: [ "cseuckr", "csksc56011987", "euc-kr", "iso-ir-149", "korean", "ks_c_5601-1987", "ks_c_5601-1989", "ksc5601", "ksc_5601", "windows-949" ],
name: "EUC-KR"
} ],
heading: "Legacy multi-byte Korean encodings"
}, {
encodings: [ {
labels: [ "csiso2022kr", "hz-gb-2312", "iso-2022-cn", "iso-2022-cn-ext", "iso-2022-kr" ],
name: "replacement"
}, {
labels: [ "utf-16be" ],
name: "UTF-16BE"
}, {
labels: [ "utf-16", "utf-16le" ],
name: "UTF-16LE"
}, {
labels: [ "x-user-defined" ],
name: "x-user-defined"
} ],
heading: "Legacy miscellaneous encodings"
} ], _ = {};
f.forEach(function(t) {
t.encodings.forEach(function(t) {
t.labels.forEach(function(e) {
_[e] = t;
});
});
});
var g, y, m = {}, v = {};
function b(t, e) {
return e && e[t] || null;
}
function w(t, e) {
var i = e.indexOf(t);
return -1 === i ? null : i;
}
function S(e) {
if (!("encoding-indexes" in t)) throw Error("Indexes missing. Did you forget to include encoding-indexes.js first?");
return t["encoding-indexes"][e];
}
function I(t) {
if (t > 39419 && t < 189e3 || t > 1237575) return null;
if (7457 === t) return 59335;
var e, i = 0, n = 0, o = S("gb18030-ranges");
for (e = 0; e < o.length; ++e) {
var r = o[e];
if (!(r[0] <= t)) break;
i = r[0];
n = r[1];
}
return n + t - i;
}
function C(t) {
if (59335 === t) return 7457;
var e, i = 0, n = 0, o = S("gb18030-ranges");
for (e = 0; e < o.length; ++e) {
var r = o[e];
if (!(r[1] <= t)) break;
i = r[1];
n = r[0];
}
return n + t - i;
}
function P(t) {
return (g = g || S("jis0208").map(function(t, i) {
return e(i, 8272, 8835) ? null : t;
})).indexOf(t);
}
function x(t) {
var e = y = y || S("big5").map(function(t, e) {
return e < 5024 ? null : t;
});
return 9552 === t || 9566 === t || 9569 === t || 9578 === t || 21313 === t || 21317 === t ? e.lastIndexOf(t) : w(t, e);
}
var k = "utf-8";
function T(t, e) {
if (!(this instanceof T)) throw TypeError("Called as a function. Did you forget 'new'?");
t = void 0 !== t ? String(t) : k;
e = n(e);
this._encoding = null;
this._decoder = null;
this._ignoreBOM = !1;
this._BOMseen = !1;
this._error_mode = "replacement";
this._do_not_flush = !1;
var i = d(t);
if (null === i || "replacement" === i.name) throw RangeError("Unknown encoding: " + t);
if (!v[i.name]) throw Error("Decoder not present. Did you forget to include encoding-indexes.js first?");
this._encoding = i;
Boolean(e.fatal) && (this._error_mode = "fatal");
Boolean(e.ignoreBOM) && (this._ignoreBOM = !0);
if (!Object.defineProperty) {
this.encoding = this._encoding.name.toLowerCase();
this.fatal = "fatal" === this._error_mode;
this.ignoreBOM = this._ignoreBOM;
}
return this;
}
if (Object.defineProperty) {
Object.defineProperty(T.prototype, "encoding", {
get: function() {
return this._encoding.name.toLowerCase();
}
});
Object.defineProperty(T.prototype, "fatal", {
get: function() {
return "fatal" === this._error_mode;
}
});
Object.defineProperty(T.prototype, "ignoreBOM", {
get: function() {
return this._ignoreBOM;
}
});
}
T.prototype.decode = function(t, e) {
var i;
i = "object" == typeof t && t instanceof ArrayBuffer ? new Uint8Array(t) : "object" == typeof t && "buffer" in t && t.buffer instanceof ArrayBuffer ? new Uint8Array(t.buffer, t.byteOffset, t.byteLength) : new Uint8Array(0);
e = n(e);
if (!this._do_not_flush) {
this._decoder = v[this._encoding.name]({
fatal: "fatal" === this._error_mode
});
this._BOMseen = !1;
}
this._do_not_flush = Boolean(e.stream);
for (var o, s = new h(i), a = []; ;) {
var u = s.read();
if (u === l) break;
if ((o = this._decoder.handler(s, u)) === c) break;
null !== o && (Array.isArray(o) ? a.push.apply(a, o) : a.push(o));
}
if (!this._do_not_flush) {
do {
if ((o = this._decoder.handler(s, s.read())) === c) break;
null !== o && (Array.isArray(o) ? a.push.apply(a, o) : a.push(o));
} while (!s.endOfStream());
this._decoder = null;
}
return function(t) {
if ((e = [ "UTF-8", "UTF-16LE", "UTF-16BE" ], i = this._encoding.name, -1 !== e.indexOf(i)) && !this._ignoreBOM && !this._BOMseen) if (t.length > 0 && 65279 === t[0]) {
this._BOMseen = !0;
t.shift();
} else t.length > 0 && (this._BOMseen = !0);
var e, i;
return r(t);
}.call(this, a);
};
function O(e, i) {
if (!(this instanceof O)) throw TypeError("Called as a function. Did you forget 'new'?");
i = n(i);
this._encoding = null;
this._encoder = null;
this._do_not_flush = !1;
this._fatal = Boolean(i.fatal) ? "fatal" : "replacement";
if (Boolean(i.NONSTANDARD_allowLegacyEncoding)) {
var o = d(e = void 0 !== e ? String(e) : k);
if (null === o || "replacement" === o.name) throw RangeError("Unknown encoding: " + e);
if (!m[o.name]) throw Error("Encoder not present. Did you forget to include encoding-indexes.js first?");
this._encoding = o;
} else {
this._encoding = d("utf-8");
void 0 !== e && "console" in t && console.warn("TextEncoder constructor called with encoding label, which is ignored.");
}
Object.defineProperty || (this.encoding = this._encoding.name.toLowerCase());
return this;
}
Object.defineProperty && Object.defineProperty(O.prototype, "encoding", {
get: function() {
return this._encoding.name.toLowerCase();
}
});
O.prototype.encode = function(t, e) {
t = void 0 === t ? "" : String(t);
e = n(e);
this._do_not_flush || (this._encoder = m[this._encoding.name]({
fatal: "fatal" === this._fatal
}));
this._do_not_flush = Boolean(e.stream);
for (var i, r = new h(o(t)), s = []; ;) {
var a = r.read();
if (a === l) break;
if ((i = this._encoder.handler(r, a)) === c) break;
Array.isArray(i) ? s.push.apply(s, i) : s.push(i);
}
if (!this._do_not_flush) {
for (;(i = this._encoder.handler(r, r.read())) !== c; ) Array.isArray(i) ? s.push.apply(s, i) : s.push(i);
this._encoder = null;
}
return new Uint8Array(s);
};
function A(t) {
var i = t.fatal, n = 0, o = 0, r = 0, s = 128, a = 191;
this.handler = function(t, h) {
if (h === l && 0 !== r) {
r = 0;
return u(i);
}
if (h === l) return c;
if (0 === r) {
if (e(h, 0, 127)) return h;
if (e(h, 194, 223)) {
r = 1;
n = 31 & h;
} else if (e(h, 224, 239)) {
224 === h && (s = 160);
237 === h && (a = 159);
r = 2;
n = 15 & h;
} else {
if (!e(h, 240, 244)) return u(i);
240 === h && (s = 144);
244 === h && (a = 143);
r = 3;
n = 7 & h;
}
return null;
}
if (!e(h, s, a)) {
n = r = o = 0;
s = 128;
a = 191;
t.prepend(h);
return u(i);
}
s = 128;
a = 191;
n = n << 6 | 63 & h;
if ((o += 1) !== r) return null;
var p = n;
n = r = o = 0;
return p;
};
}
function B(t) {
t.fatal;
this.handler = function(t, i) {
if (i === l) return c;
if (a(i)) return i;
var n, o;
if (e(i, 128, 2047)) {
n = 1;
o = 192;
} else if (e(i, 2048, 65535)) {
n = 2;
o = 224;
} else if (e(i, 65536, 1114111)) {
n = 3;
o = 240;
}
for (var r = [ (i >> 6 * n) + o ]; n > 0; ) {
var s = i >> 6 * (n - 1);
r.push(128 | 63 & s);
n -= 1;
}
return r;
};
}
m["UTF-8"] = function(t) {
return new B(t);
};
v["UTF-8"] = function(t) {
return new A(t);
};
function D(t, e) {
var i = e.fatal;
this.handler = function(e, n) {
if (n === l) return c;
if (s(n)) return n;
var o = t[n - 128];
return null === o ? u(i) : o;
};
}
function M(t, e) {
e.fatal;
this.handler = function(e, i) {
if (i === l) return c;
if (a(i)) return i;
var n = w(i, t);
null === n && p(i);
return n + 128;
};
}
"encoding-indexes" in t && f.forEach(function(t) {
"Legacy single-byte encodings" === t.heading && t.encodings.forEach(function(t) {
var e = t.name, i = S(e.toLowerCase());
v[e] = function(t) {
return new D(i, t);
};
m[e] = function(t) {
return new M(i, t);
};
});
});
v.GBK = function(t) {
return new E(t);
};
m.GBK = function(t) {
return new j(t, !0);
};
function E(t) {
var i = t.fatal, n = 0, o = 0, r = 0;
this.handler = function(t, a) {
if (a === l && 0 === n && 0 === o && 0 === r) return c;
if (a === l && (0 !== n || 0 !== o || 0 !== r)) {
n = 0;
o = 0;
r = 0;
u(i);
}
var h;
if (0 !== r) {
h = null;
e(a, 48, 57) && (h = I(10 * (126 * (10 * (n - 129) + o - 48) + r - 129) + a - 48));
var p = [ o, r, a ];
n = 0;
o = 0;
r = 0;
if (null === h) {
t.prepend(p);
return u(i);
}
return h;
}
if (0 !== o) {
if (e(a, 129, 254)) {
r = a;
return null;
}
t.prepend([ o, a ]);
n = 0;
o = 0;
return u(i);
}
if (0 !== n) {
if (e(a, 48, 57)) {
o = a;
return null;
}
var d = n, f = null;
n = 0;
var _ = a < 127 ? 64 : 65;
(e(a, 64, 126) || e(a, 128, 254)) && (f = 190 * (d - 129) + (a - _));
null === (h = null === f ? null : b(f, S("gb18030"))) && s(a) && t.prepend(a);
return null === h ? u(i) : h;
}
if (s(a)) return a;
if (128 === a) return 8364;
if (e(a, 129, 254)) {
n = a;
return null;
}
return u(i);
};
}
function j(t, e) {
t.fatal;
this.handler = function(t, n) {
if (n === l) return c;
if (a(n)) return n;
if (58853 === n) return p(n);
if (e && 8364 === n) return 128;
var o = w(n, S("gb18030"));
if (null !== o) {
var r = o % 190;
return [ i(o / 190) + 129, r + (r < 63 ? 64 : 65) ];
}
if (e) return p(n);
o = C(n);
var s = i(o / 10 / 126 / 10), h = i((o -= 12600 * s) / 10 / 126), u = i((o -= 1260 * h) / 10);
return [ s + 129, h + 48, u + 129, o - 10 * u + 48 ];
};
}
m.gb18030 = function(t) {
return new j(t);
};
v.gb18030 = function(t) {
return new E(t);
};
function L(t) {
var i = t.fatal, n = 0;
this.handler = function(t, o) {
if (o === l && 0 !== n) {
n = 0;
return u(i);
}
if (o === l && 0 === n) return c;
if (0 !== n) {
var r = n, a = null;
n = 0;
var h = o < 127 ? 64 : 98;
(e(o, 64, 126) || e(o, 161, 254)) && (a = 157 * (r - 129) + (o - h));
switch (a) {
case 1133:
return [ 202, 772 ];

case 1135:
return [ 202, 780 ];

case 1164:
return [ 234, 772 ];

case 1166:
return [ 234, 780 ];
}
var p = null === a ? null : b(a, S("big5"));
null === p && s(o) && t.prepend(o);
return null === p ? u(i) : p;
}
if (s(o)) return o;
if (e(o, 129, 254)) {
n = o;
return null;
}
return u(i);
};
}
function R(t) {
t.fatal;
this.handler = function(t, e) {
if (e === l) return c;
if (a(e)) return e;
var n = x(e);
if (null === n) return p(e);
var o = i(n / 157) + 129;
if (o < 161) return p(e);
var r = n % 157;
return [ o, r + (r < 63 ? 64 : 98) ];
};
}
m.Big5 = function(t) {
return new R(t);
};
v.Big5 = function(t) {
return new L(t);
};
function N(t) {
var i = t.fatal, n = !1, o = 0;
this.handler = function(t, r) {
if (r === l && 0 !== o) {
o = 0;
return u(i);
}
if (r === l && 0 === o) return c;
if (142 === o && e(r, 161, 223)) {
o = 0;
return 65216 + r;
}
if (143 === o && e(r, 161, 254)) {
n = !0;
o = r;
return null;
}
if (0 !== o) {
var a = o;
o = 0;
var h = null;
e(a, 161, 254) && e(r, 161, 254) && (h = b(94 * (a - 161) + (r - 161), S(n ? "jis0212" : "jis0208")));
n = !1;
e(r, 161, 254) || t.prepend(r);
return null === h ? u(i) : h;
}
if (s(r)) return r;
if (142 === r || 143 === r || e(r, 161, 254)) {
o = r;
return null;
}
return u(i);
};
}
function z(t) {
t.fatal;
this.handler = function(t, n) {
if (n === l) return c;
if (a(n)) return n;
if (165 === n) return 92;
if (8254 === n) return 126;
if (e(n, 65377, 65439)) return [ 142, n - 65377 + 161 ];
8722 === n && (n = 65293);
var o = w(n, S("jis0208"));
return null === o ? p(n) : [ i(o / 94) + 161, o % 94 + 161 ];
};
}
m["EUC-JP"] = function(t) {
return new z(t);
};
v["EUC-JP"] = function(t) {
return new N(t);
};
function F(t) {
var i = t.fatal, n = 0, o = 0, r = !1;
this.handler = function(t, s) {
switch (n) {
default:
case 0:
if (27 === s) {
n = 5;
return null;
}
if (e(s, 0, 127) && 14 !== s && 15 !== s && 27 !== s) {
r = !1;
return s;
}
if (s === l) return c;
r = !1;
return u(i);

case 1:
if (27 === s) {
n = 5;
return null;
}
if (92 === s) {
r = !1;
return 165;
}
if (126 === s) {
r = !1;
return 8254;
}
if (e(s, 0, 127) && 14 !== s && 15 !== s && 27 !== s && 92 !== s && 126 !== s) {
r = !1;
return s;
}
if (s === l) return c;
r = !1;
return u(i);

case 2:
if (27 === s) {
n = 5;
return null;
}
if (e(s, 33, 95)) {
r = !1;
return 65344 + s;
}
if (s === l) return c;
r = !1;
return u(i);

case 3:
if (27 === s) {
n = 5;
return null;
}
if (e(s, 33, 126)) {
r = !1;
o = s;
n = 4;
return null;
}
if (s === l) return c;
r = !1;
return u(i);

case 4:
if (27 === s) {
n = 5;
return u(i);
}
if (e(s, 33, 126)) {
n = 3;
var a = b(94 * (o - 33) + s - 33, S("jis0208"));
return null === a ? u(i) : a;
}
if (s === l) {
n = 3;
t.prepend(s);
return u(i);
}
n = 3;
return u(i);

case 5:
if (36 === s || 40 === s) {
o = s;
n = 6;
return null;
}
t.prepend(s);
r = !1;
n = 0;
return u(i);

case 6:
var h = o;
o = 0;
var p = null;
40 === h && 66 === s && (p = 0);
40 === h && 74 === s && (p = 1);
40 === h && 73 === s && (p = 2);
36 !== h || 64 !== s && 66 !== s || (p = 3);
if (null !== p) {
n = n = p;
var d = r;
r = !0;
return d ? u(i) : null;
}
t.prepend([ h, s ]);
r = !1;
n = 0;
return u(i);
}
};
}
function V(t) {
t.fatal;
var e = 0;
this.handler = function(t, n) {
if (n === l && 0 !== e) {
t.prepend(n);
e = 0;
return [ 27, 40, 66 ];
}
if (n === l && 0 === e) return c;
if (!(0 !== e && 1 !== e || 14 !== n && 15 !== n && 27 !== n)) return p(65533);
if (0 === e && a(n)) return n;
if (1 === e && (a(n) && 92 !== n && 126 !== n || 165 == n || 8254 == n)) {
if (a(n)) return n;
if (165 === n) return 92;
if (8254 === n) return 126;
}
if (a(n) && 0 !== e) {
t.prepend(n);
e = 0;
return [ 27, 40, 66 ];
}
if ((165 === n || 8254 === n) && 1 !== e) {
t.prepend(n);
e = 1;
return [ 27, 40, 74 ];
}
8722 === n && (n = 65293);
var o = w(n, S("jis0208"));
if (null === o) return p(n);
if (2 !== e) {
t.prepend(n);
e = 2;
return [ 27, 36, 66 ];
}
return [ i(o / 94) + 33, o % 94 + 33 ];
};
}
m["ISO-2022-JP"] = function(t) {
return new V(t);
};
v["ISO-2022-JP"] = function(t) {
return new F(t);
};
function G(t) {
var i = t.fatal, n = 0;
this.handler = function(t, o) {
if (o === l && 0 !== n) {
n = 0;
return u(i);
}
if (o === l && 0 === n) return c;
if (0 !== n) {
var r = n, a = null;
n = 0;
var h = o < 127 ? 64 : 65, p = r < 160 ? 129 : 193;
(e(o, 64, 126) || e(o, 128, 252)) && (a = 188 * (r - p) + o - h);
if (e(a, 8836, 10715)) return 48508 + a;
var d = null === a ? null : b(a, S("jis0208"));
null === d && s(o) && t.prepend(o);
return null === d ? u(i) : d;
}
if (s(o) || 128 === o) return o;
if (e(o, 161, 223)) return 65216 + o;
if (e(o, 129, 159) || e(o, 224, 252)) {
n = o;
return null;
}
return u(i);
};
}
function U(t) {
t.fatal;
this.handler = function(t, n) {
if (n === l) return c;
if (a(n) || 128 === n) return n;
if (165 === n) return 92;
if (8254 === n) return 126;
if (e(n, 65377, 65439)) return n - 65377 + 161;
8722 === n && (n = 65293);
var o = P(n);
if (null === o) return p(n);
var r = i(o / 188), s = o % 188;
return [ r + (r < 31 ? 129 : 193), s + (s < 63 ? 64 : 65) ];
};
}
m.Shift_JIS = function(t) {
return new U(t);
};
v.Shift_JIS = function(t) {
return new G(t);
};
function H(t) {
var i = t.fatal, n = 0;
this.handler = function(t, o) {
if (o === l && 0 !== n) {
n = 0;
return u(i);
}
if (o === l && 0 === n) return c;
if (0 !== n) {
var r = n, a = null;
n = 0;
e(o, 65, 254) && (a = 190 * (r - 129) + (o - 65));
var h = null === a ? null : b(a, S("euc-kr"));
null === a && s(o) && t.prepend(o);
return null === h ? u(i) : h;
}
if (s(o)) return o;
if (e(o, 129, 254)) {
n = o;
return null;
}
return u(i);
};
}
function W(t) {
t.fatal;
this.handler = function(t, e) {
if (e === l) return c;
if (a(e)) return e;
var n = w(e, S("euc-kr"));
return null === n ? p(e) : [ i(n / 190) + 129, n % 190 + 65 ];
};
}
m["EUC-KR"] = function(t) {
return new W(t);
};
v["EUC-KR"] = function(t) {
return new H(t);
};
function q(t, e) {
var i = t >> 8, n = 255 & t;
return e ? [ i, n ] : [ n, i ];
}
function Y(t, i) {
var n = i.fatal, o = null, r = null;
this.handler = function(i, s) {
if (s === l && (null !== o || null !== r)) return u(n);
if (s === l && null === o && null === r) return c;
if (null === o) {
o = s;
return null;
}
var a;
a = t ? (o << 8) + s : (s << 8) + o;
o = null;
if (null !== r) {
var h = r;
r = null;
if (e(a, 56320, 57343)) return 65536 + 1024 * (h - 55296) + (a - 56320);
i.prepend(q(a, t));
return u(n);
}
if (e(a, 55296, 56319)) {
r = a;
return null;
}
return e(a, 56320, 57343) ? u(n) : a;
};
}
function J(t, i) {
i.fatal;
this.handler = function(i, n) {
if (n === l) return c;
if (e(n, 0, 65535)) return q(n, t);
var o = q(55296 + (n - 65536 >> 10), t), r = q(56320 + (n - 65536 & 1023), t);
return o.concat(r);
};
}
m["UTF-16BE"] = function(t) {
return new J(!0, t);
};
v["UTF-16BE"] = function(t) {
return new Y(!0, t);
};
m["UTF-16LE"] = function(t) {
return new J(!1, t);
};
v["UTF-16LE"] = function(t) {
return new Y(!1, t);
};
function X(t) {
t.fatal;
this.handler = function(t, e) {
return e === l ? c : s(e) ? e : 63360 + e - 128;
};
}
function K(t) {
t.fatal;
this.handler = function(t, i) {
return i === l ? c : a(i) ? i : e(i, 63360, 63487) ? i - 63360 + 128 : p(i);
};
}
m["x-user-defined"] = function(t) {
return new K(t);
};
v["x-user-defined"] = function(t) {
return new X(t);
};
t.TextEncoder || (t.TextEncoder = O);
t.TextDecoder || (t.TextDecoder = T);
"undefined" != typeof module && module.exports && (module.exports = {
TextEncoder: t.TextEncoder,
TextDecoder: t.TextDecoder,
EncodingIndexes: t["encoding-indexes"]
});
})(window);

(function() {
(function(t) {
"use strict";
var e = (t, e, i, n) => {
let o = 65535 & t | 0, r = t >>> 16 & 65535 | 0, s = 0;
for (;0 !== i; ) {
i -= s = i > 2e3 ? 2e3 : i;
do {
r = r + (o = o + e[n++] | 0) | 0;
} while (--s);
o %= 65521;
r %= 65521;
}
return o | r << 16 | 0;
};
const i = new Uint32Array((() => {
let t, e = [];
for (var i = 0; i < 256; i++) {
t = i;
for (var n = 0; n < 8; n++) t = 1 & t ? 3988292384 ^ t >>> 1 : t >>> 1;
e[i] = t;
}
return e;
})());
var n = (t, e, n, o) => {
const r = i, s = o + n;
t ^= -1;
for (let i = o; i < s; i++) t = t >>> 8 ^ r[255 & (t ^ e[i])];
return -1 ^ t;
}, o = function(t, e) {
let i, n, o, r, s, a, l, h, c, u, p, d, f, _, g, y, m, v, b, w, S, I, C, P;
const x = t.state;
i = t.next_in;
C = t.input;
n = i + (t.avail_in - 5);
o = t.next_out;
P = t.output;
r = o - (e - t.avail_out);
s = o + (t.avail_out - 257);
a = x.dmax;
l = x.wsize;
h = x.whave;
c = x.wnext;
u = x.window;
p = x.hold;
d = x.bits;
f = x.lencode;
_ = x.distcode;
g = (1 << x.lenbits) - 1;
y = (1 << x.distbits) - 1;
t: do {
if (d < 15) {
p += C[i++] << d;
d += 8;
p += C[i++] << d;
d += 8;
}
m = f[p & g];
e: for (;;) {
p >>>= v = m >>> 24;
d -= v;
if (0 == (v = m >>> 16 & 255)) P[o++] = 65535 & m; else {
if (!(16 & v)) {
if (0 == (64 & v)) {
m = f[(65535 & m) + (p & (1 << v) - 1)];
continue e;
}
if (32 & v) {
x.mode = 16191;
break t;
}
t.msg = "invalid literal/length code";
x.mode = 16209;
break t;
}
b = 65535 & m;
if (v &= 15) {
if (d < v) {
p += C[i++] << d;
d += 8;
}
b += p & (1 << v) - 1;
p >>>= v;
d -= v;
}
if (d < 15) {
p += C[i++] << d;
d += 8;
p += C[i++] << d;
d += 8;
}
m = _[p & y];
i: for (;;) {
p >>>= v = m >>> 24;
d -= v;
if (!(16 & (v = m >>> 16 & 255))) {
if (0 == (64 & v)) {
m = _[(65535 & m) + (p & (1 << v) - 1)];
continue i;
}
t.msg = "invalid distance code";
x.mode = 16209;
break t;
}
w = 65535 & m;
if (d < (v &= 15)) {
p += C[i++] << d;
if ((d += 8) < v) {
p += C[i++] << d;
d += 8;
}
}
if ((w += p & (1 << v) - 1) > a) {
t.msg = "invalid distance too far back";
x.mode = 16209;
break t;
}
p >>>= v;
d -= v;
if (w > (v = o - r)) {
if ((v = w - v) > h && x.sane) {
t.msg = "invalid distance too far back";
x.mode = 16209;
break t;
}
S = 0;
I = u;
if (0 === c) {
S += l - v;
if (v < b) {
b -= v;
do {
P[o++] = u[S++];
} while (--v);
S = o - w;
I = P;
}
} else if (c < v) {
S += l + c - v;
if ((v -= c) < b) {
b -= v;
do {
P[o++] = u[S++];
} while (--v);
S = 0;
if (c < b) {
b -= v = c;
do {
P[o++] = u[S++];
} while (--v);
S = o - w;
I = P;
}
}
} else {
S += c - v;
if (v < b) {
b -= v;
do {
P[o++] = u[S++];
} while (--v);
S = o - w;
I = P;
}
}
for (;b > 2; ) {
P[o++] = I[S++];
P[o++] = I[S++];
P[o++] = I[S++];
b -= 3;
}
if (b) {
P[o++] = I[S++];
b > 1 && (P[o++] = I[S++]);
}
} else {
S = o - w;
do {
P[o++] = P[S++];
P[o++] = P[S++];
P[o++] = P[S++];
b -= 3;
} while (b > 2);
if (b) {
P[o++] = P[S++];
b > 1 && (P[o++] = P[S++]);
}
}
break;
}
}
break;
}
} while (i < n && o < s);
i -= b = d >> 3;
p &= (1 << (d -= b << 3)) - 1;
t.next_in = i;
t.next_out = o;
t.avail_in = i < n ? n - i + 5 : 5 - (i - n);
t.avail_out = o < s ? s - o + 257 : 257 - (o - s);
x.hold = p;
x.bits = d;
};
const r = new Uint16Array([ 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31, 35, 43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258, 0, 0 ]), s = new Uint8Array([ 16, 16, 16, 16, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 16, 72, 78 ]), a = new Uint16Array([ 1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193, 257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145, 8193, 12289, 16385, 24577, 0, 0 ]), l = new Uint8Array([ 16, 16, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 64, 64 ]);
var h = (t, e, i, n, o, h, c, u) => {
const p = u.bits;
let d, f, _, g, y, m, v = 0, b = 0, w = 0, S = 0, I = 0, C = 0, P = 0, x = 0, k = 0, T = 0, O = null;
const A = new Uint16Array(16), B = new Uint16Array(16);
let D, M, E, j = null;
for (v = 0; v <= 15; v++) A[v] = 0;
for (b = 0; b < n; b++) A[e[i + b]]++;
I = p;
for (S = 15; S >= 1 && 0 === A[S]; S--) ;
I > S && (I = S);
if (0 === S) {
o[h++] = 20971520;
o[h++] = 20971520;
u.bits = 1;
return 0;
}
for (w = 1; w < S && 0 === A[w]; w++) ;
I < w && (I = w);
x = 1;
for (v = 1; v <= 15; v++) {
x <<= 1;
if ((x -= A[v]) < 0) return -1;
}
if (x > 0 && (0 === t || 1 !== S)) return -1;
B[1] = 0;
for (v = 1; v < 15; v++) B[v + 1] = B[v] + A[v];
for (b = 0; b < n; b++) 0 !== e[i + b] && (c[B[e[i + b]]++] = b);
if (0 === t) {
O = j = c;
m = 20;
} else if (1 === t) {
O = r;
j = s;
m = 257;
} else {
O = a;
j = l;
m = 0;
}
T = 0;
b = 0;
v = w;
y = h;
C = I;
P = 0;
_ = -1;
g = (k = 1 << I) - 1;
if (1 === t && k > 852 || 2 === t && k > 592) return 1;
for (;;) {
D = v - P;
if (c[b] + 1 < m) {
M = 0;
E = c[b];
} else if (c[b] >= m) {
M = j[c[b] - m];
E = O[c[b] - m];
} else {
M = 96;
E = 0;
}
d = 1 << v - P;
w = f = 1 << C;
do {
o[y + (T >> P) + (f -= d)] = D << 24 | M << 16 | E | 0;
} while (0 !== f);
d = 1 << v - 1;
for (;T & d; ) d >>= 1;
if (0 !== d) {
T &= d - 1;
T += d;
} else T = 0;
b++;
if (0 == --A[v]) {
if (v === S) break;
v = e[i + c[b]];
}
if (v > I && (T & g) !== _) {
0 === P && (P = I);
y += w;
x = 1 << (C = v - P);
for (;C + P < S && !((x -= A[C + P]) <= 0); ) {
C++;
x <<= 1;
}
k += 1 << C;
if (1 === t && k > 852 || 2 === t && k > 592) return 1;
o[_ = T & g] = I << 24 | C << 16 | y - h | 0;
}
}
0 !== T && (o[y + T] = v - P << 24 | 64 << 16 | 0);
u.bits = I;
return 0;
}, c = {
Z_NO_FLUSH: 0,
Z_PARTIAL_FLUSH: 1,
Z_SYNC_FLUSH: 2,
Z_FULL_FLUSH: 3,
Z_FINISH: 4,
Z_BLOCK: 5,
Z_TREES: 6,
Z_OK: 0,
Z_STREAM_END: 1,
Z_NEED_DICT: 2,
Z_ERRNO: -1,
Z_STREAM_ERROR: -2,
Z_DATA_ERROR: -3,
Z_MEM_ERROR: -4,
Z_BUF_ERROR: -5,
Z_NO_COMPRESSION: 0,
Z_BEST_SPEED: 1,
Z_BEST_COMPRESSION: 9,
Z_DEFAULT_COMPRESSION: -1,
Z_FILTERED: 1,
Z_HUFFMAN_ONLY: 2,
Z_RLE: 3,
Z_FIXED: 4,
Z_DEFAULT_STRATEGY: 0,
Z_BINARY: 0,
Z_TEXT: 1,
Z_UNKNOWN: 2,
Z_DEFLATED: 8
};
const {Z_FINISH: u, Z_BLOCK: p, Z_TREES: d, Z_OK: f, Z_STREAM_END: _, Z_NEED_DICT: g, Z_STREAM_ERROR: y, Z_DATA_ERROR: m, Z_MEM_ERROR: v, Z_BUF_ERROR: b, Z_DEFLATED: w} = c, S = 16209, I = t => (t >>> 24 & 255) + (t >>> 8 & 65280) + ((65280 & t) << 8) + ((255 & t) << 24);
function C() {
this.strm = null;
this.mode = 0;
this.last = !1;
this.wrap = 0;
this.havedict = !1;
this.flags = 0;
this.dmax = 0;
this.check = 0;
this.total = 0;
this.head = null;
this.wbits = 0;
this.wsize = 0;
this.whave = 0;
this.wnext = 0;
this.window = null;
this.hold = 0;
this.bits = 0;
this.length = 0;
this.offset = 0;
this.extra = 0;
this.lencode = null;
this.distcode = null;
this.lenbits = 0;
this.distbits = 0;
this.ncode = 0;
this.nlen = 0;
this.ndist = 0;
this.have = 0;
this.next = null;
this.lens = new Uint16Array(320);
this.work = new Uint16Array(288);
this.lendyn = null;
this.distdyn = null;
this.sane = 0;
this.back = 0;
this.was = 0;
}
const P = t => {
if (!t) return 1;
const e = t.state;
return !e || e.strm !== t || e.mode < 16180 || e.mode > 16211 ? 1 : 0;
}, x = t => {
if (P(t)) return y;
const e = t.state;
t.total_in = t.total_out = e.total = 0;
t.msg = "";
e.wrap && (t.adler = 1 & e.wrap);
e.mode = 16180;
e.last = 0;
e.havedict = 0;
e.flags = -1;
e.dmax = 32768;
e.head = null;
e.hold = 0;
e.bits = 0;
e.lencode = e.lendyn = new Int32Array(852);
e.distcode = e.distdyn = new Int32Array(592);
e.sane = 1;
e.back = -1;
return f;
}, k = t => {
if (P(t)) return y;
const e = t.state;
e.wsize = 0;
e.whave = 0;
e.wnext = 0;
return x(t);
}, T = (t, e) => {
let i;
if (P(t)) return y;
const n = t.state;
if (e < 0) {
i = 0;
e = -e;
} else {
i = 5 + (e >> 4);
e < 48 && (e &= 15);
}
if (e && (e < 8 || e > 15)) return y;
null !== n.window && n.wbits !== e && (n.window = null);
n.wrap = i;
n.wbits = e;
return k(t);
}, O = (t, e) => {
if (!t) return y;
const i = new C();
t.state = i;
i.strm = t;
i.window = null;
i.mode = 16180;
const n = T(t, e);
n !== f && (t.state = null);
return n;
};
let A, B, D = !0;
const M = t => {
if (D) {
A = new Int32Array(512);
B = new Int32Array(32);
let e = 0;
for (;e < 144; ) t.lens[e++] = 8;
for (;e < 256; ) t.lens[e++] = 9;
for (;e < 280; ) t.lens[e++] = 7;
for (;e < 288; ) t.lens[e++] = 8;
h(1, t.lens, 0, 288, A, 0, t.work, {
bits: 9
});
e = 0;
for (;e < 32; ) t.lens[e++] = 5;
h(2, t.lens, 0, 32, B, 0, t.work, {
bits: 5
});
D = !1;
}
t.lencode = A;
t.lenbits = 9;
t.distcode = B;
t.distbits = 5;
}, E = (t, e, i, n) => {
let o;
const r = t.state;
if (null === r.window) {
r.wsize = 1 << r.wbits;
r.wnext = 0;
r.whave = 0;
r.window = new Uint8Array(r.wsize);
}
if (n >= r.wsize) {
r.window.set(e.subarray(i - r.wsize, i), 0);
r.wnext = 0;
r.whave = r.wsize;
} else {
(o = r.wsize - r.wnext) > n && (o = n);
r.window.set(e.subarray(i - n, i - n + o), r.wnext);
if (n -= o) {
r.window.set(e.subarray(i - n, i), 0);
r.wnext = n;
r.whave = r.wsize;
} else {
r.wnext += o;
r.wnext === r.wsize && (r.wnext = 0);
r.whave < r.wsize && (r.whave += o);
}
}
return 0;
};
var j = {
inflateReset: k,
inflateReset2: T,
inflateResetKeep: x,
inflateInit: t => O(t, 15),
inflateInit2: O,
inflate: (t, i) => {
let r, s, a, l, c, C, x, k, T, O, A, B, D, j, L, R, N, z, F, V, G, U, H = 0;
const W = new Uint8Array(4);
let q, Y;
const J = new Uint8Array([ 16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15 ]);
if (P(t) || !t.output || !t.input && 0 !== t.avail_in) return y;
16191 === (r = t.state).mode && (r.mode = 16192);
c = t.next_out;
a = t.output;
x = t.avail_out;
l = t.next_in;
s = t.input;
C = t.avail_in;
k = r.hold;
T = r.bits;
O = C;
A = x;
U = f;
t: for (;;) switch (r.mode) {
case 16180:
if (0 === r.wrap) {
r.mode = 16192;
break;
}
for (;T < 16; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
if (2 & r.wrap && 35615 === k) {
0 === r.wbits && (r.wbits = 15);
r.check = 0;
W[0] = 255 & k;
W[1] = k >>> 8 & 255;
r.check = n(r.check, W, 2, 0);
k = 0;
T = 0;
r.mode = 16181;
break;
}
r.head && (r.head.done = !1);
if (!(1 & r.wrap) || (((255 & k) << 8) + (k >> 8)) % 31) {
t.msg = "incorrect header check";
r.mode = S;
break;
}
if ((15 & k) !== w) {
t.msg = "unknown compression method";
r.mode = S;
break;
}
T -= 4;
G = 8 + (15 & (k >>>= 4));
0 === r.wbits && (r.wbits = G);
if (G > 15 || G > r.wbits) {
t.msg = "invalid window size";
r.mode = S;
break;
}
r.dmax = 1 << r.wbits;
r.flags = 0;
t.adler = r.check = 1;
r.mode = 512 & k ? 16189 : 16191;
k = 0;
T = 0;
break;

case 16181:
for (;T < 16; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
r.flags = k;
if ((255 & r.flags) !== w) {
t.msg = "unknown compression method";
r.mode = S;
break;
}
if (57344 & r.flags) {
t.msg = "unknown header flags set";
r.mode = S;
break;
}
r.head && (r.head.text = k >> 8 & 1);
if (512 & r.flags && 4 & r.wrap) {
W[0] = 255 & k;
W[1] = k >>> 8 & 255;
r.check = n(r.check, W, 2, 0);
}
k = 0;
T = 0;
r.mode = 16182;

case 16182:
for (;T < 32; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
r.head && (r.head.time = k);
if (512 & r.flags && 4 & r.wrap) {
W[0] = 255 & k;
W[1] = k >>> 8 & 255;
W[2] = k >>> 16 & 255;
W[3] = k >>> 24 & 255;
r.check = n(r.check, W, 4, 0);
}
k = 0;
T = 0;
r.mode = 16183;

case 16183:
for (;T < 16; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
if (r.head) {
r.head.xflags = 255 & k;
r.head.os = k >> 8;
}
if (512 & r.flags && 4 & r.wrap) {
W[0] = 255 & k;
W[1] = k >>> 8 & 255;
r.check = n(r.check, W, 2, 0);
}
k = 0;
T = 0;
r.mode = 16184;

case 16184:
if (1024 & r.flags) {
for (;T < 16; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
r.length = k;
r.head && (r.head.extra_len = k);
if (512 & r.flags && 4 & r.wrap) {
W[0] = 255 & k;
W[1] = k >>> 8 & 255;
r.check = n(r.check, W, 2, 0);
}
k = 0;
T = 0;
} else r.head && (r.head.extra = null);
r.mode = 16185;

case 16185:
if (1024 & r.flags) {
(B = r.length) > C && (B = C);
if (B) {
if (r.head) {
G = r.head.extra_len - r.length;
r.head.extra || (r.head.extra = new Uint8Array(r.head.extra_len));
r.head.extra.set(s.subarray(l, l + B), G);
}
512 & r.flags && 4 & r.wrap && (r.check = n(r.check, s, B, l));
C -= B;
l += B;
r.length -= B;
}
if (r.length) break t;
}
r.length = 0;
r.mode = 16186;

case 16186:
if (2048 & r.flags) {
if (0 === C) break t;
B = 0;
do {
G = s[l + B++];
r.head && G && r.length < 65536 && (r.head.name += String.fromCharCode(G));
} while (G && B < C);
512 & r.flags && 4 & r.wrap && (r.check = n(r.check, s, B, l));
C -= B;
l += B;
if (G) break t;
} else r.head && (r.head.name = null);
r.length = 0;
r.mode = 16187;

case 16187:
if (4096 & r.flags) {
if (0 === C) break t;
B = 0;
do {
G = s[l + B++];
r.head && G && r.length < 65536 && (r.head.comment += String.fromCharCode(G));
} while (G && B < C);
512 & r.flags && 4 & r.wrap && (r.check = n(r.check, s, B, l));
C -= B;
l += B;
if (G) break t;
} else r.head && (r.head.comment = null);
r.mode = 16188;

case 16188:
if (512 & r.flags) {
for (;T < 16; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
if (4 & r.wrap && k !== (65535 & r.check)) {
t.msg = "header crc mismatch";
r.mode = S;
break;
}
k = 0;
T = 0;
}
if (r.head) {
r.head.hcrc = r.flags >> 9 & 1;
r.head.done = !0;
}
t.adler = r.check = 0;
r.mode = 16191;
break;

case 16189:
for (;T < 32; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
t.adler = r.check = I(k);
k = 0;
T = 0;
r.mode = 16190;

case 16190:
if (0 === r.havedict) {
t.next_out = c;
t.avail_out = x;
t.next_in = l;
t.avail_in = C;
r.hold = k;
r.bits = T;
return g;
}
t.adler = r.check = 1;
r.mode = 16191;

case 16191:
if (i === p || i === d) break t;

case 16192:
if (r.last) {
k >>>= 7 & T;
T -= 7 & T;
r.mode = 16206;
break;
}
for (;T < 3; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
r.last = 1 & k;
T -= 1;
switch (3 & (k >>>= 1)) {
case 0:
r.mode = 16193;
break;

case 1:
M(r);
r.mode = 16199;
if (i === d) {
k >>>= 2;
T -= 2;
break t;
}
break;

case 2:
r.mode = 16196;
break;

case 3:
t.msg = "invalid block type";
r.mode = S;
}
k >>>= 2;
T -= 2;
break;

case 16193:
k >>>= 7 & T;
T -= 7 & T;
for (;T < 32; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
if ((65535 & k) != (k >>> 16 ^ 65535)) {
t.msg = "invalid stored block lengths";
r.mode = S;
break;
}
r.length = 65535 & k;
k = 0;
T = 0;
r.mode = 16194;
if (i === d) break t;

case 16194:
r.mode = 16195;

case 16195:
if (B = r.length) {
B > C && (B = C);
B > x && (B = x);
if (0 === B) break t;
a.set(s.subarray(l, l + B), c);
C -= B;
l += B;
x -= B;
c += B;
r.length -= B;
break;
}
r.mode = 16191;
break;

case 16196:
for (;T < 14; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
r.nlen = 257 + (31 & k);
k >>>= 5;
T -= 5;
r.ndist = 1 + (31 & k);
k >>>= 5;
T -= 5;
r.ncode = 4 + (15 & k);
k >>>= 4;
T -= 4;
if (r.nlen > 286 || r.ndist > 30) {
t.msg = "too many length or distance symbols";
r.mode = S;
break;
}
r.have = 0;
r.mode = 16197;

case 16197:
for (;r.have < r.ncode; ) {
for (;T < 3; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
r.lens[J[r.have++]] = 7 & k;
k >>>= 3;
T -= 3;
}
for (;r.have < 19; ) r.lens[J[r.have++]] = 0;
r.lencode = r.lendyn;
r.lenbits = 7;
q = {
bits: r.lenbits
};
U = h(0, r.lens, 0, 19, r.lencode, 0, r.work, q);
r.lenbits = q.bits;
if (U) {
t.msg = "invalid code lengths set";
r.mode = S;
break;
}
r.have = 0;
r.mode = 16198;

case 16198:
for (;r.have < r.nlen + r.ndist; ) {
for (;;) {
R = (H = r.lencode[k & (1 << r.lenbits) - 1]) >>> 16 & 255;
N = 65535 & H;
if ((L = H >>> 24) <= T) break;
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
if (N < 16) {
k >>>= L;
T -= L;
r.lens[r.have++] = N;
} else {
if (16 === N) {
Y = L + 2;
for (;T < Y; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
k >>>= L;
T -= L;
if (0 === r.have) {
t.msg = "invalid bit length repeat";
r.mode = S;
break;
}
G = r.lens[r.have - 1];
B = 3 + (3 & k);
k >>>= 2;
T -= 2;
} else if (17 === N) {
Y = L + 3;
for (;T < Y; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
T -= L;
G = 0;
B = 3 + (7 & (k >>>= L));
k >>>= 3;
T -= 3;
} else {
Y = L + 7;
for (;T < Y; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
T -= L;
G = 0;
B = 11 + (127 & (k >>>= L));
k >>>= 7;
T -= 7;
}
if (r.have + B > r.nlen + r.ndist) {
t.msg = "invalid bit length repeat";
r.mode = S;
break;
}
for (;B--; ) r.lens[r.have++] = G;
}
}
if (r.mode === S) break;
if (0 === r.lens[256]) {
t.msg = "invalid code -- missing end-of-block";
r.mode = S;
break;
}
r.lenbits = 9;
q = {
bits: r.lenbits
};
U = h(1, r.lens, 0, r.nlen, r.lencode, 0, r.work, q);
r.lenbits = q.bits;
if (U) {
t.msg = "invalid literal/lengths set";
r.mode = S;
break;
}
r.distbits = 6;
r.distcode = r.distdyn;
q = {
bits: r.distbits
};
U = h(2, r.lens, r.nlen, r.ndist, r.distcode, 0, r.work, q);
r.distbits = q.bits;
if (U) {
t.msg = "invalid distances set";
r.mode = S;
break;
}
r.mode = 16199;
if (i === d) break t;

case 16199:
r.mode = 16200;

case 16200:
if (C >= 6 && x >= 258) {
t.next_out = c;
t.avail_out = x;
t.next_in = l;
t.avail_in = C;
r.hold = k;
r.bits = T;
o(t, A);
c = t.next_out;
a = t.output;
x = t.avail_out;
l = t.next_in;
s = t.input;
C = t.avail_in;
k = r.hold;
T = r.bits;
16191 === r.mode && (r.back = -1);
break;
}
r.back = 0;
for (;;) {
R = (H = r.lencode[k & (1 << r.lenbits) - 1]) >>> 16 & 255;
N = 65535 & H;
if ((L = H >>> 24) <= T) break;
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
if (R && 0 == (240 & R)) {
z = L;
F = R;
V = N;
for (;;) {
R = (H = r.lencode[V + ((k & (1 << z + F) - 1) >> z)]) >>> 16 & 255;
N = 65535 & H;
if (z + (L = H >>> 24) <= T) break;
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
k >>>= z;
T -= z;
r.back += z;
}
k >>>= L;
T -= L;
r.back += L;
r.length = N;
if (0 === R) {
r.mode = 16205;
break;
}
if (32 & R) {
r.back = -1;
r.mode = 16191;
break;
}
if (64 & R) {
t.msg = "invalid literal/length code";
r.mode = S;
break;
}
r.extra = 15 & R;
r.mode = 16201;

case 16201:
if (r.extra) {
Y = r.extra;
for (;T < Y; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
r.length += k & (1 << r.extra) - 1;
k >>>= r.extra;
T -= r.extra;
r.back += r.extra;
}
r.was = r.length;
r.mode = 16202;

case 16202:
for (;;) {
R = (H = r.distcode[k & (1 << r.distbits) - 1]) >>> 16 & 255;
N = 65535 & H;
if ((L = H >>> 24) <= T) break;
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
if (0 == (240 & R)) {
z = L;
F = R;
V = N;
for (;;) {
R = (H = r.distcode[V + ((k & (1 << z + F) - 1) >> z)]) >>> 16 & 255;
N = 65535 & H;
if (z + (L = H >>> 24) <= T) break;
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
k >>>= z;
T -= z;
r.back += z;
}
k >>>= L;
T -= L;
r.back += L;
if (64 & R) {
t.msg = "invalid distance code";
r.mode = S;
break;
}
r.offset = N;
r.extra = 15 & R;
r.mode = 16203;

case 16203:
if (r.extra) {
Y = r.extra;
for (;T < Y; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
r.offset += k & (1 << r.extra) - 1;
k >>>= r.extra;
T -= r.extra;
r.back += r.extra;
}
if (r.offset > r.dmax) {
t.msg = "invalid distance too far back";
r.mode = S;
break;
}
r.mode = 16204;

case 16204:
if (0 === x) break t;
B = A - x;
if (r.offset > B) {
if ((B = r.offset - B) > r.whave && r.sane) {
t.msg = "invalid distance too far back";
r.mode = S;
break;
}
if (B > r.wnext) {
B -= r.wnext;
D = r.wsize - B;
} else D = r.wnext - B;
B > r.length && (B = r.length);
j = r.window;
} else {
j = a;
D = c - r.offset;
B = r.length;
}
B > x && (B = x);
x -= B;
r.length -= B;
do {
a[c++] = j[D++];
} while (--B);
0 === r.length && (r.mode = 16200);
break;

case 16205:
if (0 === x) break t;
a[c++] = r.length;
x--;
r.mode = 16200;
break;

case 16206:
if (r.wrap) {
for (;T < 32; ) {
if (0 === C) break t;
C--;
k |= s[l++] << T;
T += 8;
}
A -= x;
t.total_out += A;
r.total += A;
4 & r.wrap && A && (t.adler = r.check = r.flags ? n(r.check, a, A, c - A) : e(r.check, a, A, c - A));
A = x;
if (4 & r.wrap && (r.flags ? k : I(k)) !== r.check) {
t.msg = "incorrect data check";
r.mode = S;
break;
}
k = 0;
T = 0;
}
r.mode = 16207;

case 16207:
if (r.wrap && r.flags) {
for (;T < 32; ) {
if (0 === C) break t;
C--;
k += s[l++] << T;
T += 8;
}
if (4 & r.wrap && k !== (4294967295 & r.total)) {
t.msg = "incorrect length check";
r.mode = S;
break;
}
k = 0;
T = 0;
}
r.mode = 16208;

case 16208:
U = _;
break t;

case S:
U = m;
break t;

case 16210:
return v;

case 16211:
default:
return y;
}
t.next_out = c;
t.avail_out = x;
t.next_in = l;
t.avail_in = C;
r.hold = k;
r.bits = T;
(r.wsize || A !== t.avail_out && r.mode < S && (r.mode < 16206 || i !== u)) && E(t, t.output, t.next_out, A - t.avail_out);
O -= t.avail_in;
A -= t.avail_out;
t.total_in += O;
t.total_out += A;
r.total += A;
4 & r.wrap && A && (t.adler = r.check = r.flags ? n(r.check, a, A, t.next_out - A) : e(r.check, a, A, t.next_out - A));
t.data_type = r.bits + (r.last ? 64 : 0) + (16191 === r.mode ? 128 : 0) + (16199 === r.mode || 16194 === r.mode ? 256 : 0);
(0 === O && 0 === A || i === u) && U === f && (U = b);
return U;
},
inflateEnd: t => {
if (P(t)) return y;
let e = t.state;
e.window && (e.window = null);
t.state = null;
return f;
},
inflateGetHeader: (t, e) => {
if (P(t)) return y;
const i = t.state;
if (0 == (2 & i.wrap)) return y;
i.head = e;
e.done = !1;
return f;
},
inflateSetDictionary: (t, i) => {
const n = i.length;
let o, r, s;
if (P(t)) return y;
if (0 !== (o = t.state).wrap && 16190 !== o.mode) return y;
if (16190 === o.mode && (r = e(r = 1, i, n, 0)) !== o.check) return m;
if (s = E(t, i, n, n)) {
o.mode = 16210;
return v;
}
o.havedict = 1;
return f;
},
inflateInfo: "pako inflate (from Nodeca project)"
};
const L = (t, e) => Object.prototype.hasOwnProperty.call(t, e);
var R = {
assign: function(t) {
const e = Array.prototype.slice.call(arguments, 1);
for (;e.length; ) {
const i = e.shift();
if (i) {
if ("object" != typeof i) throw new TypeError(i + "must be non-object");
for (const e in i) L(i, e) && (t[e] = i[e]);
}
}
return t;
},
flattenChunks: t => {
let e = 0;
for (let i = 0, n = t.length; i < n; i++) e += t[i].length;
const i = new Uint8Array(e);
for (let e = 0, n = 0, o = t.length; e < o; e++) {
let o = t[e];
i.set(o, n);
n += o.length;
}
return i;
}
};
let N = !0;
try {
String.fromCharCode.apply(null, new Uint8Array(1));
} catch (t) {
N = !1;
}
const z = new Uint8Array(256);
for (let t = 0; t < 256; t++) z[t] = t >= 252 ? 6 : t >= 248 ? 5 : t >= 240 ? 4 : t >= 224 ? 3 : t >= 192 ? 2 : 1;
z[254] = z[254] = 1;
const F = (t, e) => {
if (e < 65534 && t.subarray && N) return String.fromCharCode.apply(null, t.length === e ? t : t.subarray(0, e));
let i = "";
for (let n = 0; n < e; n++) i += String.fromCharCode(t[n]);
return i;
};
var V = {
string2buf: t => {
if ("function" == typeof TextEncoder && TextEncoder.prototype.encode) return new TextEncoder().encode(t);
let e, i, n, o, r, s = t.length, a = 0;
for (o = 0; o < s; o++) {
if (55296 == (64512 & (i = t.charCodeAt(o))) && o + 1 < s && 56320 == (64512 & (n = t.charCodeAt(o + 1)))) {
i = 65536 + (i - 55296 << 10) + (n - 56320);
o++;
}
a += i < 128 ? 1 : i < 2048 ? 2 : i < 65536 ? 3 : 4;
}
e = new Uint8Array(a);
for (r = 0, o = 0; r < a; o++) {
if (55296 == (64512 & (i = t.charCodeAt(o))) && o + 1 < s && 56320 == (64512 & (n = t.charCodeAt(o + 1)))) {
i = 65536 + (i - 55296 << 10) + (n - 56320);
o++;
}
if (i < 128) e[r++] = i; else if (i < 2048) {
e[r++] = 192 | i >>> 6;
e[r++] = 128 | 63 & i;
} else if (i < 65536) {
e[r++] = 224 | i >>> 12;
e[r++] = 128 | i >>> 6 & 63;
e[r++] = 128 | 63 & i;
} else {
e[r++] = 240 | i >>> 18;
e[r++] = 128 | i >>> 12 & 63;
e[r++] = 128 | i >>> 6 & 63;
e[r++] = 128 | 63 & i;
}
}
return e;
},
buf2string: (t, e) => {
const i = e || t.length;
if ("function" == typeof TextDecoder && TextDecoder.prototype.decode) return new TextDecoder().decode(t.subarray(0, e));
let n, o;
const r = new Array(2 * i);
for (o = 0, n = 0; n < i; ) {
let e = t[n++];
if (e < 128) {
r[o++] = e;
continue;
}
let s = z[e];
if (s > 4) {
r[o++] = 65533;
n += s - 1;
} else {
e &= 2 === s ? 31 : 3 === s ? 15 : 7;
for (;s > 1 && n < i; ) {
e = e << 6 | 63 & t[n++];
s--;
}
if (s > 1) r[o++] = 65533; else if (e < 65536) r[o++] = e; else {
e -= 65536;
r[o++] = 55296 | e >> 10 & 1023;
r[o++] = 56320 | 1023 & e;
}
}
}
return F(r, o);
},
utf8border: (t, e) => {
(e = e || t.length) > t.length && (e = t.length);
let i = e - 1;
for (;i >= 0 && 128 == (192 & t[i]); ) i--;
return i < 0 ? e : 0 === i ? e : i + z[t[i]] > e ? i : e;
}
}, G = {
2: "need dictionary",
1: "stream end",
0: "",
"-1": "file error",
"-2": "stream error",
"-3": "data error",
"-4": "insufficient memory",
"-5": "buffer error",
"-6": "incompatible version"
}, U = function() {
this.input = null;
this.next_in = 0;
this.avail_in = 0;
this.total_in = 0;
this.output = null;
this.next_out = 0;
this.avail_out = 0;
this.total_out = 0;
this.msg = "";
this.state = null;
this.data_type = 2;
this.adler = 0;
}, H = function() {
this.text = 0;
this.time = 0;
this.xflags = 0;
this.os = 0;
this.extra = null;
this.extra_len = 0;
this.name = "";
this.comment = "";
this.hcrc = 0;
this.done = !1;
};
const W = Object.prototype.toString, {Z_NO_FLUSH: q, Z_FINISH: Y, Z_OK: J, Z_STREAM_END: X, Z_NEED_DICT: K, Z_STREAM_ERROR: $, Z_DATA_ERROR: Z, Z_MEM_ERROR: Q} = c;
function tt(t) {
this.options = R.assign({
chunkSize: 65536,
windowBits: 15,
to: ""
}, t || {});
const e = this.options;
if (e.raw && e.windowBits >= 0 && e.windowBits < 16) {
e.windowBits = -e.windowBits;
0 === e.windowBits && (e.windowBits = -15);
}
!(e.windowBits >= 0 && e.windowBits < 16) || t && t.windowBits || (e.windowBits += 32);
e.windowBits > 15 && e.windowBits < 48 && 0 == (15 & e.windowBits) && (e.windowBits |= 15);
this.err = 0;
this.msg = "";
this.ended = !1;
this.chunks = [];
this.strm = new U();
this.strm.avail_out = 0;
let i = j.inflateInit2(this.strm, e.windowBits);
if (i !== J) throw new Error(G[i]);
this.header = new H();
j.inflateGetHeader(this.strm, this.header);
if (e.dictionary) {
"string" == typeof e.dictionary ? e.dictionary = V.string2buf(e.dictionary) : "[object ArrayBuffer]" === W.call(e.dictionary) && (e.dictionary = new Uint8Array(e.dictionary));
if (e.raw && (i = j.inflateSetDictionary(this.strm, e.dictionary)) !== J) throw new Error(G[i]);
}
}
tt.prototype.push = function(t, e) {
const i = this.strm, n = this.options.chunkSize, o = this.options.dictionary;
let r, s, a;
if (this.ended) return !1;
s = e === ~~e ? e : !0 === e ? Y : q;
"[object ArrayBuffer]" === W.call(t) ? i.input = new Uint8Array(t) : i.input = t;
i.next_in = 0;
i.avail_in = i.input.length;
for (;;) {
if (0 === i.avail_out) {
i.output = new Uint8Array(n);
i.next_out = 0;
i.avail_out = n;
}
(r = j.inflate(i, s)) === K && o && ((r = j.inflateSetDictionary(i, o)) === J ? r = j.inflate(i, s) : r === Z && (r = K));
for (;i.avail_in > 0 && r === X && i.state.wrap > 0 && 0 !== t[i.next_in]; ) {
j.inflateReset(i);
r = j.inflate(i, s);
}
switch (r) {
case $:
case Z:
case K:
case Q:
this.onEnd(r);
this.ended = !0;
return !1;
}
a = i.avail_out;
if (i.next_out && (0 === i.avail_out || r === X)) if ("string" === this.options.to) {
let t = V.utf8border(i.output, i.next_out), e = i.next_out - t, o = V.buf2string(i.output, t);
i.next_out = e;
i.avail_out = n - e;
e && i.output.set(i.output.subarray(t, t + e), 0);
this.onData(o);
} else this.onData(i.output.length === i.next_out ? i.output : i.output.subarray(0, i.next_out));
if (r !== J || 0 !== a) {
if (r === X) {
r = j.inflateEnd(this.strm);
this.onEnd(r);
this.ended = !0;
return !0;
}
if (0 === i.avail_in) break;
}
}
return !0;
};
tt.prototype.onData = function(t) {
this.chunks.push(t);
};
tt.prototype.onEnd = function(t) {
t === J && ("string" === this.options.to ? this.result = this.chunks.join("") : this.result = R.flattenChunks(this.chunks));
this.chunks = [];
this.err = t;
this.msg = this.strm.msg;
};
function et(t, e) {
const i = new tt(e);
i.push(t);
if (i.err) throw i.msg || G[i.err];
return i.result;
}
var it = tt, nt = et, ot = function(t, e) {
(e = e || {}).raw = !0;
return et(t, e);
}, rt = et, st = c, at = {
Inflate: it,
inflate: nt,
inflateRaw: ot,
ungzip: rt,
constants: st
};
t.Inflate = it;
t.constants = st;
t.default = at;
t.inflate = nt;
t.inflateRaw = ot;
t.ungzip = rt;
Object.defineProperty(t, "__esModule", {
value: !0
});
})(("undefined" != typeof window ? window : "undefined" != typeof global ? global : "undefined" != typeof self ? self : this).pako = {});
})();

window.qg = {};

var __read = this && this.__read || function(t, e) {
var i = "function" == typeof Symbol && t[Symbol.iterator];
if (!i) return t;
var n, o, r = i.call(t), s = [];
try {
for (;(void 0 === e || e-- > 0) && !(n = r.next()).done; ) s.push(n.value);
} catch (t) {
o = {
error: t
};
} finally {
try {
n && !n.done && (i = r.return) && i.call(r);
} finally {
if (o) throw o.error;
}
}
return s;
}, __spreadArray = this && this.__spreadArray || function(t, e, i) {
if (i || 2 === arguments.length) for (var n, o = 0, r = e.length; o < r; o++) if (n || !(o in e)) {
n || (n = Array.prototype.slice.call(e, 0, o));
n[o] = e[o];
}
return t.concat(n || Array.prototype.slice.call(e));
}, __values = this && this.__values || function(t) {
var e = "function" == typeof Symbol && Symbol.iterator, i = e && t[e], n = 0;
if (i) return i.call(t);
if (t && "number" == typeof t.length) return {
next: function() {
t && n >= t.length && (t = void 0);
return {
value: t && t[n++],
done: !t
};
}
};
throw new TypeError(e ? "Object is not iterable." : "Symbol.iterator is not defined.");
};

window.__extends = this && this.__extends || function() {
var t = function(e, i) {
return (t = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(t, e) {
t.__proto__ = e;
} || function(t, e) {
for (var i in e) Object.prototype.hasOwnProperty.call(e, i) && (t[i] = e[i]);
})(e, i);
};
return function(e, i) {
if ("function" != typeof i && null !== i) throw new TypeError("Class extends value " + String(i) + " is not a constructor or null");
t(e, i);
function n() {
this.constructor = e;
}
e.prototype = null === i ? Object.create(i) : (n.prototype = i.prototype, new n());
};
}();

var __decorate = this && this.__decorate || function(t, e, i, n) {
var o, r = arguments.length, s = r < 3 ? e : null === n ? n = Object.getOwnPropertyDescriptor(e, i) : n;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) s = Reflect.decorate(t, e, i, n); else for (var a = t.length - 1; a >= 0; a--) (o = t[a]) && (s = (r < 3 ? o(s) : r > 3 ? o(e, i, s) : o(e, i)) || s);
return r > 3 && s && Object.defineProperty(e, i, s), s;
}, __awaiter = this && this.__awaiter || function(t, e, i, n) {
return new (i || (i = Promise))(function(o, r) {
function s(t) {
try {
l(n.next(t));
} catch (t) {
r(t);
}
}
function a(t) {
try {
l(n.throw(t));
} catch (t) {
r(t);
}
}
function l(t) {
t.done ? o(t.value) : (e = t.value, e instanceof i ? e : new i(function(t) {
t(e);
})).then(s, a);
var e;
}
l((n = n.apply(t, e || [])).next());
});
}, __generator = this && this.__generator || function(t, e) {
var i, n, o, r, s = {
label: 0,
sent: function() {
if (1 & o[0]) throw o[1];
return o[1];
},
trys: [],
ops: []
};
return r = {
next: a(0),
throw: a(1),
return: a(2)
}, "function" == typeof Symbol && (r[Symbol.iterator] = function() {
return this;
}), r;
function a(t) {
return function(e) {
return l([ t, e ]);
};
}
function l(a) {
if (i) throw new TypeError("Generator is already executing.");
for (;r && (r = 0, a[0] && (s = 0)), s; ) try {
if (i = 1, n && (o = 2 & a[0] ? n.return : a[0] ? n.throw || ((o = n.return) && o.call(n), 
0) : n.next) && !(o = o.call(n, a[1])).done) return o;
(n = 0, o) && (a = [ 2 & a[0], o.value ]);
switch (a[0]) {
case 0:
case 1:
o = a;
break;

case 4:
s.label++;
return {
value: a[1],
done: !1
};

case 5:
s.label++;
n = a[1];
a = [ 0 ];
continue;

case 7:
a = s.ops.pop();
s.trys.pop();
continue;

default:
if (!(o = s.trys, o = o.length > 0 && o[o.length - 1]) && (6 === a[0] || 2 === a[0])) {
s = 0;
continue;
}
if (3 === a[0] && (!o || a[1] > o[0] && a[1] < o[3])) {
s.label = a[1];
break;
}
if (6 === a[0] && s.label < o[1]) {
s.label = o[1];
o = a;
break;
}
if (o && s.label < o[2]) {
s.label = o[2];
s.ops.push(a);
break;
}
o[2] && s.ops.pop();
s.trys.pop();
continue;
}
a = e.call(t, s);
} catch (t) {
a = [ 6, t ];
n = 0;
} finally {
i = o = 0;
}
if (5 & a[0]) throw a[1];
return {
value: a[0] ? a[1] : void 0,
done: !0
};
}
};

(function(t) {
(function(t) {
t.DEBUG = !1;
t.JSB = !0;
t.ccclass = cc._decorator.ccclass;
t.Component = cc.Component;
t.Asset = cc.Asset;
t.AssetManager = cc.AssetManager;
t.assetManager = cc.assetManager;
t.fileUtils = t.JSB ? jsb.fileUtils : void 0;
t.localStorage = cc.sys.localStorage;
t.Prefab = cc.Prefab;
t.Node = cc.Node;
t.GComponent = fgui.GComponent;
t.instantiate = cc.instantiate;
t.Game = cc.Game;
t.game = cc.game;
t.EVENT_GAME_INITED = cc.game.EVENT_GAME_INITED;
var e;
(function(t) {
t.isNative = cc.sys.isNative;
t.isBrowser = cc.sys.isBrowser;
t.isAndroid = cc.sys.os === cc.sys.OS_ANDROID;
t.isIOS = cc.sys.os === cc.sys.OS_IOS;
})(e = t.OS || (t.OS = {}));
(function(i) {
i.setListener = function() {
t.JSB && (e.isAndroid || e.isIOS);
};
i.callSDK = function(i, n, o) {
if (t.JSB) {
e.isAndroid;
return e.isIOS ? jsb.BIANQISDKBridge.BIANQIInvoke(i, n, o) : void 0;
}
};
})(t.SDK || (t.SDK = {}));
})(t.Adapt || (t.Adapt = {}));
})(qg || (qg = {}));

(function(t) {
(function(e) {
t.Adapt.DEBUG && ((function() {
if ("undefined" != typeof globalThis) return globalThis;
if ("undefined" != typeof window) return window;
if ("undefined" != typeof global) return global;
console.error("cannot find global");
}()).DebugInfo = {});
e.addDebugInfo = function(e, i) {
t.Adapt.DEBUG && (DebugInfo[e] = i);
};
e.getDebugInfo = function() {
return DebugInfo;
};
})(t.Debug || (t.Debug = {}));
})(qg || (qg = {}));

(function(t) {
var e = function(t, e) {
void 0 === e && (e = !1);
this.callback = t;
this.isOnce = e;
this.isValid = !0;
}, i = function() {
function i() {
this._gid = new t.IOCGID();
this._callInfoMap = new Map();
}
i.prototype.addCall = function(t) {
var i = this._gid.create();
this._callInfoMap.set(i, new e(t));
return i;
};
i.prototype.addCallOnce = function(t) {
var i = this._gid.create();
this._callInfoMap.set(i, new e(t, !0));
return i;
};
i.prototype.forbidCall = function(t) {
var e = this._callInfoMap.get(t);
if (void 0 === e) return !1;
e.isValid = !1;
return !0;
};
i.prototype.removeCall = function(t) {
if (void 0 === this._callInfoMap.get(t)) return !1;
this._callInfoMap.delete(t);
this._gid.destroy(t);
return !0;
};
i.prototype.getCall = function(t) {
var e = this._callInfoMap.get(t);
if (void 0 === e) return null;
if (e.isOnce) {
this._callInfoMap.delete(t);
this._gid.destroy(t);
}
return e.isValid ? e.callback : null;
};
i.prototype.doCall = function(t) {
for (var e = [], i = 1; i < arguments.length; i++) e[i - 1] = arguments[i];
var n = this.getCall(t);
if (null != n) return n.apply(void 0, __spreadArray([], __read(e), !1));
};
return i;
}();
t.Caller = i;
})(qg || (qg = {}));

(function(t) {
var e = function() {
function t() {
this._types = [];
}
t.prototype.regType = function(e) {
var i = this.getTypeID(e);
if (void 0 !== i) return i;
i = this._types.push(e) - 1;
Object.defineProperty(e.prototype, t.IOCTag, {
value: i
});
return i;
};
t.prototype.getType = function(t) {
return this._types[t];
};
t.prototype.getTypeID = function(e) {
if (e.prototype.hasOwnProperty(t.IOCTag)) return e.prototype[t.IOCTag];
};
t.prototype.getObjTypeID = function(t) {
return this.getTypeID(t.constructor);
};
t.prototype.getTypeByName = function(t) {
var e, i;
try {
for (var n = __values(this._types), o = n.next(); !o.done; o = n.next()) {
var r = o.value;
if (r && cc.js.getClassName(r) == t) return this.getTypeID(r);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
o && !o.done && (i = n.return) && i.call(n);
} finally {
if (e) throw e.error;
}
}
};
t.InvalidID = -1;
t.IOCTag = "__ioc_id__";
return t;
}();
t.IOCReg = e;
})(qg || (qg = {}));

(function(t) {
var e = function() {
function e() {
this._id = e.InvalidID;
this._cacheIDs = [];
}
e.prototype.create = function() {
var t = this._cacheIDs.pop();
if (void 0 !== t) return t;
++this._id;
return this._id;
};
e.prototype.destroy = function(i) {
i != e.InvalidID ? this._cacheIDs.push(i) : t.Adapt.DEBUG && console.error("[IOCGID] destroy id invalid");
};
e.InvalidID = -1;
return e;
}();
t.IOCGID = e;
})(qg || (qg = {}));

(function(t) {
var e = function() {
function e() {
this.reg = new t.IOCReg();
this._gid = new t.IOCGID();
this._pool = new Map();
}
e.Reg = function(t) {
e.global.reg.regType(t);
};
e.prototype.addObj = function(e) {
if (e.iocGID != t.IOCGID.InvalidID) return !1;
var i = this._gid.create();
this._pool.set(i, e);
e.iocGID = i;
return !0;
};
e.prototype.addObjByType = function(e) {
for (var i = [], n = 1; n < arguments.length; n++) i[n - 1] = arguments[n];
if (void 0 === this.reg.getTypeID(e)) {
t.Adapt.DEBUG && console.error("[IOCPool] addObjByType type ".concat(e.name, " unregistered"));
return null;
}
var o = new (e.bind.apply(e, __spreadArray([ void 0 ], __read(i), !1)))();
this.addObj(o);
return o;
};
e.prototype.addObjByTypeID = function(e) {
for (var i, n = [], o = 1; o < arguments.length; o++) n[o - 1] = arguments[o];
var r = this.reg.getType(e);
if (void 0 === r) {
t.Adapt.DEBUG && console.error("[IOCPool] addObjByTypeID typeID ".concat(e, " invalid"));
return null;
}
var s = new ((i = r).bind.apply(i, __spreadArray([ void 0 ], __read(n), !1)))();
this.addObj(s);
return s;
};
e.prototype.removeObj = function(e) {
if (e.iocGID == t.IOCGID.InvalidID) {
t.Adapt.DEBUG && console.error("[IOCPool] removeObj obj invalid");
return !1;
}
this._pool.delete(e.iocGID);
this._gid.destroy(e.iocGID);
e.iocGID = t.IOCGID.InvalidID;
return !0;
};
e.prototype.removeObjByID = function(e) {
var i = this._pool.get(e);
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[IOCPool] removeObjByID iocGID invalid");
return !1;
}
this.removeObj(i);
return !0;
};
e.prototype.findObj = function(t) {
return this._pool.get(t);
};
e.global = new e();
return e;
}();
t.IOCPool = e;
})(qg || (qg = {}));

(function(t) {
var e = function() {
function e() {
this.iocGID = t.IOCGID.InvalidID;
}
e.prototype.ctor = function() {};
e.prototype.dtor = function() {};
return e;
}();
t.IOCObject = e;
})(qg || (qg = {}));

(function(t) {
var e = function() {
function e() {
this._dispatchDepth = 0;
this._listenersMap = new Map();
this._cacheListenersMap = new Map();
}
Object.defineProperty(e.prototype, "listenerCount", {
get: function() {
return this._listenersMap.size + this._cacheListenersMap.size;
},
enumerable: !1,
configurable: !0
});
e.prototype.addListener = function(e, i) {
if (void 0 === t.IOCPool.global.reg.getObjTypeID(e)) {
t.Adapt.DEBUG && console.error("[Dispatcher] addListener target ".concat(e.constructor.name, " unregistered"));
return !1;
}
return this.addListenerByID(e.iocGID, i);
};
e.prototype.addListenerByID = function(e, i) {
if (e == t.IOCGID.InvalidID) {
t.Adapt.DEBUG && console.error("[Dispatcher] addListenerByID iocGID ".concat(e, " invalid"));
return !1;
}
var n = this._listenersMap;
this._dispatchDepth > 0 && (n = this._cacheListenersMap);
var o = n.get(e);
if (void 0 === o) {
o = [];
n.set(e, o);
}
o.push(i);
return !0;
};
e.prototype.removeListener = function(t) {
return this.removeListenerByID(t.iocGID);
};
e.prototype.removeListenerByID = function(e) {
if (e == t.IOCGID.InvalidID) {
t.Adapt.DEBUG && console.error("[Dispatcher] removeListenerByID iocGID ".concat(e, " invalid"));
return !1;
}
this._listenersMap.delete(e);
this._dispatchDepth > 0 && this._cacheListenersMap.delete(e);
return !0;
};
e.prototype.dispatch = function() {
for (var e, i, n, o, r, s, a = [], l = 0; l < arguments.length; l++) a[l] = arguments[l];
++this._dispatchDepth;
try {
for (var h = __values(this._listenersMap), c = h.next(); !c.done; c = h.next()) {
var u = __read(c.value, 2), p = u[0], d = u[1], f = t.IOCPool.global.findObj(p);
if (void 0 !== f) try {
for (var _ = (n = void 0, __values(d)), g = _.next(); !g.done; g = _.next()) {
var y = g.value;
y.call.apply(y, __spreadArray([ f ], __read(a), !1));
}
} catch (t) {
n = {
error: t
};
} finally {
try {
g && !g.done && (o = _.return) && o.call(_);
} finally {
if (n) throw n.error;
}
}
}
} catch (t) {
e = {
error: t
};
} finally {
try {
c && !c.done && (i = h.return) && i.call(h);
} finally {
if (e) throw e.error;
}
}
--this._dispatchDepth;
if (!(this._dispatchDepth > 0)) {
try {
for (var m = __values(this._cacheListenersMap), v = m.next(); !v.done; v = m.next()) {
var b = __read(v.value, 2), w = (p = b[0], b[1]);
if (void 0 === (d = this._listenersMap.get(p))) {
d = [];
this._listenersMap.set(p, d);
}
d.push.apply(d, __spreadArray([], __read(w), !1));
}
} catch (t) {
r = {
error: t
};
} finally {
try {
v && !v.done && (s = m.return) && s.call(m);
} finally {
if (r) throw r.error;
}
}
this._cacheListenersMap.clear();
}
};
return e;
}();
t.Dispatcher = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i(t) {
var i = e.call(this) || this;
i._implPool = t;
i._subjectIDSet = new Set();
i._subjectIDsMap = new Map();
i._proxyGIDsMap = new Map();
i._idSubjectMap = new Map();
return i;
}
i.prototype.ctor = function() {
e.prototype.ctor.call(this);
this._implPool.createEvent.addListener(this, this._onImplCreate);
this._implPool.destroyEvent.addListener(this, this._onImplDestroy);
};
i.prototype.dtor = function() {
this._implPool.createEvent.removeListener(this);
this._implPool.destroyEvent.removeListener(this);
e.prototype.dtor.call(this);
};
i.prototype.regSubject = function(e) {
var i = t.IOCPool.global.reg.regType(e);
this._subjectIDSet.add(i);
};
i.prototype.regProxy = function(e) {
for (var i, n, o = [], r = 1; r < arguments.length; r++) o[r - 1] = arguments[r];
var s = t.IOCPool.global.reg.regType(e);
if (void 0 !== this._subjectIDsMap.get(s)) {
t.Adapt.DEBUG && console.error("[ImplPoolProxy] regProxy proxy ".concat(e.name, " already registered"));
return !1;
}
var a = new Set();
try {
for (var l = __values(o), h = l.next(); !h.done; h = l.next()) {
var c = h.value, u = t.IOCPool.global.reg.getTypeID(c);
if (void 0 === u) {
t.Adapt.DEBUG && console.error("[ImplPoolProxy] regProxy proxy ".concat(e.name, " register subject ").concat(c.name, " unregistered"));
return !1;
}
if (!this._subjectIDSet.has(u)) {
t.Adapt.DEBUG && console.error("[ImplPoolProxy] regProxy proxy ".concat(e.name, " register subject ").concat(c.name, " invalid"));
return !1;
}
a.has(u) && t.Adapt.DEBUG && console.error("[ImplPoolProxy] regProxy proxy ".concat(e.name, " register repeat subject"));
a.add(u);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
h && !h.done && (n = l.return) && n.call(l);
} finally {
if (i) throw i.error;
}
}
this._subjectIDsMap.set(s, a);
return !0;
};
i.prototype.updateProxy = function(e) {
for (var i, n, o = [], r = 1; r < arguments.length; r++) o[r - 1] = arguments[r];
var s = t.IOCPool.global.reg.regType(e), a = new Set();
try {
for (var l = __values(o), h = l.next(); !h.done; h = l.next()) {
var c = h.value, u = t.IOCPool.global.reg.getTypeID(c);
if (void 0 === u) {
t.Adapt.DEBUG && console.error("[ImplPoolProxy] regProxy proxy ".concat(e.name, " register subject ").concat(c.name, " unregistered"));
return !1;
}
if (!this._subjectIDSet.has(u)) {
t.Adapt.DEBUG && console.error("[ImplPoolProxy] regProxy proxy ".concat(e.name, " register subject ").concat(c.name, " invalid"));
return !1;
}
a.has(u) && t.Adapt.DEBUG && console.error("[ImplPoolProxy] regProxy proxy ".concat(e.name, " register repeat subject"));
a.add(u);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
h && !h.done && (n = l.return) && n.call(l);
} finally {
if (i) throw i.error;
}
}
this._subjectIDsMap.set(s, a);
return !0;
};
i.prototype.unregProxy = function(t) {
this._subjectIDsMap.delete(t);
};
i.prototype.unregAllProxy = function() {
this._subjectIDsMap.clear();
};
i.prototype.checkSubjectID = function(t) {
return this._subjectIDSet.has(t);
};
i.prototype.addProxyObj = function(e) {
var i = t.IOCPool.global.reg.getObjTypeID(e);
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[ImplPoolProxy] addProxyObj object ".concat(e.constructor.name, " invalid implement"));
return !1;
}
this._onImplCreate(i, e);
return !0;
};
i.prototype.removeProxyObj = function(e) {
var i = t.IOCPool.global.reg.getObjTypeID(e);
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[ImplPoolProxy] removeProxyObj object ".concat(e.constructor.name, " invalid implement"));
return !1;
}
this._onImplDestroy(i, e);
return !0;
};
i.prototype.doProxy = function(e, i) {
var n, o, r, s, a = t.IOCPool.global.reg.getTypeID(e);
if (void 0 !== a) {
var l = this._proxyGIDsMap.get(a);
if (void 0 !== l) {
var h = [];
try {
for (var c = __values(l), u = c.next(); !u.done; u = c.next()) {
var p = u.value;
void 0 !== (_ = t.IOCPool.global.findObj(p)) && h.push(_);
}
} catch (t) {
n = {
error: t
};
} finally {
try {
u && !u.done && (o = c.return) && o.call(c);
} finally {
if (n) throw n.error;
}
}
try {
for (var d = __values(h), f = d.next(); !f.done; f = d.next()) {
var _;
(_ = f.value).iocGID != t.IOCGID.InvalidID && i(_);
}
} catch (t) {
r = {
error: t
};
} finally {
try {
f && !f.done && (s = d.return) && s.call(d);
} finally {
if (r) throw r.error;
}
}
}
}
};
i.prototype._onImplCreate = function(t, e) {
var i, n, o = this._subjectIDsMap.get(t);
if (void 0 !== o) {
try {
for (var r = __values(o), s = r.next(); !s.done; s = r.next()) {
var a = s.value, l = this._proxyGIDsMap.get(a);
if (void 0 === l) {
l = new Set();
this._proxyGIDsMap.set(a, l);
}
l.add(e.iocGID);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
s && !s.done && (n = r.return) && n.call(r);
} finally {
if (i) throw i.error;
}
}
this._idSubjectMap.set(e.iocGID, o);
}
};
i.prototype._onImplDestroy = function(t, e) {
var i, n, o = this._idSubjectMap.get(e.iocGID);
if (void 0 !== o) {
try {
for (var r = __values(o), s = r.next(); !s.done; s = r.next()) {
var a = s.value, l = this._proxyGIDsMap.get(a);
void 0 !== l && l.delete(e.iocGID);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
s && !s.done && (n = r.return) && n.call(r);
} finally {
if (i) throw i.error;
}
}
this._idSubjectMap.delete(e.iocGID);
}
};
return __decorate([ t.IOCPool.Reg ], i);
}(t.IOCObject);
t.ImplPoolProxy = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = null !== e && e.apply(this, arguments) || this;
i.createEvent = new t.Dispatcher();
i.destroyEvent = new t.Dispatcher();
i._intfToImplMap = new Map();
i._implToIntfMap = new Map();
i._intfIDSet = new Set();
i._implIDMap = new Map();
return i;
}
i.prototype.regIntf = function(e) {
var i = t.IOCPool.global.reg.regType(e);
this._intfIDSet.add(i);
};
i.prototype.regImpl = function(e) {
for (var i, n, o, r, s, a, l, h, c, u = [], p = 1; p < arguments.length; p++) u[p - 1] = arguments[p];
var d = t.IOCPool.global.reg.regType(e), f = new Set();
try {
for (var _ = __values(u), g = _.next(); !g.done; g = _.next()) {
var y = g.value, m = t.IOCPool.global.reg.getTypeID(y);
if (void 0 === m) {
try {
for (var v = (o = void 0, __values(f)), b = v.next(); !b.done; b = v.next()) {
var w = b.value;
this._intfToImplMap.delete(w);
}
} catch (t) {
o = {
error: t
};
} finally {
try {
b && !b.done && (r = v.return) && r.call(v);
} finally {
if (o) throw o.error;
}
}
t.Adapt.DEBUG && console.error("[ImplPool] regImpl implement ".concat(e.name, " register interface ").concat(y.name, " unregistered"));
return !1;
}
if (!this._intfIDSet.has(m)) {
try {
for (var S = (s = void 0, __values(f)), I = S.next(); !I.done; I = S.next()) {
var C = I.value;
this._intfToImplMap.delete(C);
}
} catch (t) {
s = {
error: t
};
} finally {
try {
I && !I.done && (a = S.return) && a.call(S);
} finally {
if (s) throw s.error;
}
}
t.Adapt.DEBUG && console.error("[ImplPool] regImpl implement ".concat(e.name, " register interface ").concat(y.name, " invalid"));
return !1;
}
if (void 0 !== this._intfToImplMap.get(m)) {
try {
for (var P = (l = void 0, __values(f)), x = P.next(); !x.done; x = P.next()) {
var k = x.value;
this._intfToImplMap.delete(k);
}
} catch (t) {
l = {
error: t
};
} finally {
try {
x && !x.done && (h = P.return) && h.call(P);
} finally {
if (l) throw l.error;
}
}
t.Adapt.DEBUG && console.error("[ImplPool] regImpl implement ".concat(e.name, " register interface ").concat(y.name, " already registered : ").concat(null === (c = t.IOCPool.global.reg.getType(this._intfToImplMap.get(m))) || void 0 === c ? void 0 : c.name));
return !1;
}
f.has(m) && t.Adapt.DEBUG && console.error("[ImplPool] regImpl implement ".concat(e.name, " register repeat interface"));
f.add(m);
this._intfToImplMap.set(m, d);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
g && !g.done && (n = _.return) && n.call(_);
} finally {
if (i) throw i.error;
}
}
this._implToIntfMap.set(d, f);
return !0;
};
i.prototype.updateImpl = function(e) {
for (var i, n, o, r, s, a, l, h, c = [], u = 1; u < arguments.length; u++) c[u - 1] = arguments[u];
var p = t.IOCPool.global.reg.regType(e), d = new Set();
try {
for (var f = __values(c), _ = f.next(); !_.done; _ = f.next()) {
var g = _.value, y = t.IOCPool.global.reg.getTypeID(g);
if (void 0 === y) {
try {
for (var m = (o = void 0, __values(d)), v = m.next(); !v.done; v = m.next()) {
var b = v.value;
this._intfToImplMap.delete(b);
}
} catch (t) {
o = {
error: t
};
} finally {
try {
v && !v.done && (r = m.return) && r.call(m);
} finally {
if (o) throw o.error;
}
}
t.Adapt.DEBUG && console.error("[ImplPool] updateImpl implement ".concat(e.name, " register interface ").concat(g.name, " unregistered"));
return;
}
if (!this._intfIDSet.has(y)) {
try {
for (var w = (s = void 0, __values(d)), S = w.next(); !S.done; S = w.next()) {
var I = S.value;
this._intfToImplMap.delete(I);
}
} catch (t) {
s = {
error: t
};
} finally {
try {
S && !S.done && (a = w.return) && a.call(w);
} finally {
if (s) throw s.error;
}
}
t.Adapt.DEBUG && console.error("[ImplPool] updateImpl implement ".concat(e.name, " register interface ").concat(g.name, " invalid"));
return;
}
if (void 0 !== this._intfToImplMap.get(y)) {
try {
for (var C = (l = void 0, __values(d)), P = C.next(); !P.done; P = C.next()) {
var x = P.value;
this._intfToImplMap.delete(x);
}
} catch (t) {
l = {
error: t
};
} finally {
try {
P && !P.done && (h = C.return) && h.call(C);
} finally {
if (l) throw l.error;
}
}
this._intfToImplMap.set(y, p);
return;
}
d.has(y) && t.Adapt.DEBUG && console.error("[ImplPool] updateImpl implement ".concat(e.name, " register repeat interface"));
d.add(y);
this._intfToImplMap.set(y, p);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
_ && !_.done && (n = f.return) && n.call(f);
} finally {
if (i) throw i.error;
}
}
this._implToIntfMap.set(p, d);
};
i.prototype.unregImpl = function(e) {
var i, n, o = this._implToIntfMap.get(e);
if (void 0 === o) {
t.Adapt.DEBUG && console.error("[ImplPool] unregImpl interface ".concat(e, " invalid"));
return !1;
}
try {
for (var r = __values(o), s = r.next(); !s.done; s = r.next()) {
var a = s.value;
this._intfToImplMap.delete(a);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
s && !s.done && (n = r.return) && n.call(r);
} finally {
if (i) throw i.error;
}
}
this._implToIntfMap.delete(e);
return !0;
};
i.prototype.unregAllImpl = function() {
this._intfToImplMap.clear();
this._implToIntfMap.clear();
};
i.prototype.checkIntfID = function(t) {
return this._intfIDSet.has(t);
};
i.prototype.getImplID = function(t) {
return this._intfToImplMap.get(t);
};
i.prototype.getImpl = function(e) {
var i = t.IOCPool.global.reg.getTypeID(e);
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[ImplPool] getImpl implement ".concat(e.name, " invalid"));
return null;
}
return this._getImpl(i);
};
i.prototype.getImplByIntf = function(e) {
var i = t.IOCPool.global.reg.getTypeID(e);
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[ImplPool] getImplByIntf interface ".concat(e.name, " invalid"));
return null;
}
var n = this._intfToImplMap.get(i);
return void 0 === n ? null : this._getImpl(n);
};
i.prototype._getImpl = function(e) {
var i = this._implIDMap.get(e);
if (void 0 === i) return null;
var n = t.IOCPool.global.findObj(i);
return void 0 === n ? null : n;
};
i.prototype.createImpl = function(e) {
for (var i = [], n = 1; n < arguments.length; n++) i[n - 1] = arguments[n];
var o = t.IOCPool.global.reg.getTypeID(e);
if (void 0 === o) return null;
var r = this._getImpl(o);
return null != r ? r : this._createImpl.apply(this, __spreadArray([ o ], __read(i), !1));
};
i.prototype.createImplByIntf = function(e) {
for (var i = [], n = 1; n < arguments.length; n++) i[n - 1] = arguments[n];
var o = t.IOCPool.global.reg.getTypeID(e);
if (void 0 === o) {
t.Adapt.DEBUG && console.error("[ImplPool] createImplByIntf interface ".concat(e.name, " invalid"));
return null;
}
var r = this._intfToImplMap.get(o);
if (void 0 === r) return null;
var s = this._getImpl(r);
return null != s ? s : this._createImpl.apply(this, __spreadArray([ r ], __read(i), !1));
};
i.prototype._createImpl = function(e) {
for (var i, n = [], o = 1; o < arguments.length; o++) n[o - 1] = arguments[o];
var r = (i = t.IOCPool.global).addObjByTypeID.apply(i, __spreadArray([ e ], __read(n), !1));
if (null == r) return null;
this._implIDMap.set(e, r.iocGID);
this.createEvent.dispatch(e, r);
r.ctor();
return r;
};
i.prototype.destroyImpl = function(e) {
var i = t.IOCPool.global.reg.getTypeID(e);
if (null == i) {
t.Adapt.DEBUG && console.error("[ImplPool] destroyImplByType implement ".concat(e.name, " unregistered"));
return !1;
}
return this.destroyImplByID(i);
};
i.prototype.destroyImplByID = function(e) {
var i = this._implIDMap.get(e);
if (null == i) return !1;
var n = t.IOCPool.global.findObj(i);
return void 0 !== n && this._destroyImpl(e, n);
};
i.prototype.destroyImplByObj = function(e) {
var i = t.IOCPool.global.reg.getObjTypeID(e);
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[ImplPool] destroyImpl object ".concat(e.constructor.name, " unregistered"));
return !1;
}
if (this._implIDMap.get(i) != e.iocGID) {
t.Adapt.DEBUG && console.error("[ImplPool] destroyImpl object ".concat(e.constructor.name, " invalid implement"));
return !1;
}
return this._destroyImpl(i, e);
};
i.prototype._destroyImpl = function(e, i) {
i.dtor();
this.destroyEvent.dispatch(e, i);
this._implIDMap.delete(e);
t.IOCPool.global.removeObj(i);
return !0;
};
return __decorate([ t.IOCPool.Reg ], i);
}(t.IOCObject);
t.ImplPool = e;
})(qg || (qg = {}));

(function(t) {
var e = function() {
function e() {
this.implPool = e.createImplPool();
this.implPoolProxy = e.createImplPoolProxy(this.implPool);
}
e.createImplPool = function() {
var e = t.IOCPool.global.addObjByType(t.ImplPool);
e.ctor();
return e;
};
e.createImplPoolProxy = function(e) {
var i = t.IOCPool.global.addObjByType(t.ImplPoolProxy, e);
i.ctor();
return i;
};
e.destroyImplPool = function(e) {
e.dtor();
t.IOCPool.global.removeObj(e);
};
e.destroyImplPoolProxy = function(e) {
e.dtor();
t.IOCPool.global.removeObj(e);
};
e.global = new e();
return e;
}();
t.Context = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.getImplByIntf = function(e) {
var i = t.Context.global.implPool.getImplByIntf(e);
t.Adapt.DEBUG && null == i && console.error("[FrameObject] getImplByIntf interface ".concat(e.name, " not implement"));
return i;
};
i.prototype.createImpl = function(e) {
var i = t.Context.global.implPool.createImpl(e);
t.Adapt.DEBUG && null == i && console.error("[FrameObject] createImpl implement ".concat(e.name, " invalid"));
return i;
};
i.prototype.createImplByIntf = function(e) {
var i = t.Context.global.implPool.createImplByIntf(e);
t.Adapt.DEBUG && null == i && console.error("[FrameObject] createImplByIntf interface ".concat(e.name, " not implement"));
return i;
};
i.prototype.doProxy = function(e, i) {
t.Context.global.implPoolProxy.doProxy(e, i);
};
return i;
}(t.IOCObject);
t.FrameObject = e;
})(qg || (qg = {}));

(function(t) {
(function(e) {
e.Interface = function(e) {
t.Context.global.implPool.regIntf(e);
};
e.Subject = function(e) {
t.Context.global.implPoolProxy.regSubject(e);
};
e.Implement = function() {
for (var e = [], i = 0; i < arguments.length; i++) e[i] = arguments[i];
return function(i) {
var n;
(n = t.Context.global.implPool).regImpl.apply(n, __spreadArray([ i ], __read(e), !1));
};
};
e.Proxy = function() {
for (var e = [], i = 0; i < arguments.length; i++) e[i] = arguments[i];
return function(i) {
var n;
(n = t.Context.global.implPoolProxy).regProxy.apply(n, __spreadArray([ i ], __read(e), !1));
};
};
e.context = new t.FrameObject();
})(t.Support || (t.Support = {}));
})(qg || (qg = {}));

(function(t) {
(function(t) {
t[t.Unknown = 0] = "Unknown";
t[t.Module = 1] = "Module";
t[t.View = 2] = "View";
t[t.RootView = 3] = "RootView";
})(t.FrameType || (t.FrameType = {}));
(function(t) {
t[t.Base = 0] = "Base";
t[t.Pop = 1] = "Pop";
t[t.Tip = 2] = "Tip";
t[t.Toast = 3] = "Toast";
t[t.Loading = 4] = "Loading";
t[t.Top = 5] = "Top";
})(t.ViewOrder || (t.ViewOrder = {}));
var e = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.IObjectPool = e;
var i = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SModuleRegEvent = i;
var n = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SViewRegEvent = n;
var o = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SRootViewRegEvent = o;
var r = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SPartViewRegEvent = r;
var s = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SCompViewRegEvent = s;
var a = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SCustomViewRegEvent = a;
var l = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SElementViewRegEvent = l;
var h = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SExtendFguiRegEvent = h;
var c = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SFunctionRegEvent = c;
var u = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.ISuperPool = u;
var p = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.IPluginPool = p;
t.StartupConfig = function() {};
var d = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.ILauncher = d;
var f = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SStartupEvent = f;
var _ = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.ISelector = _;
var g = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SModulePreSelectEvent = g;
var y = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SViewPreSelectEvent = y;
var m = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SModuleSelectEvent = m;
var v = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SViewSelectEvent = v;
var b = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SFuncSelectEvent = b;
var w = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.ILifeCycle = w;
var S = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SLifeEvent = S;
var I = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.IDataPool = I;
var C = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.IViewPool = C;
var P = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SViewPreEvent = P;
var x = function() {
function e() {}
return __decorate([ t.Support.Subject ], e);
}();
t.SViewEvent = x;
var k = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.IBundlePool = k;
var T = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.IUICtrl = T;
var O = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.IUINotifyCtrl = O;
var A = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.IFunctionSelectCtrl = A;
var B = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.ISDKCtrl = B;
var D = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.IStorageCtrl = D;
(function(t) {
t.PROGRESS = "EVENT_LOAD_PROGRESS";
t.COMPLETE = "EVENT_LOAD_COMPLETE";
t.START = "EVENT_LOAD_START";
})(t.LoadEvent || (t.LoadEvent = {}));
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = null !== e && e.apply(this, arguments) || this;
i.implPool = t.Context.createImplPool();
i.implPoolProxy = t.Context.createImplPoolProxy(i.implPool);
i._rootViewTypeID = t.IOCReg.InvalidID;
return i;
}
Object.defineProperty(i.prototype, "rootViewTypeID", {
get: function() {
return this._rootViewTypeID;
},
enumerable: !1,
configurable: !0
});
i.prototype.dtor = function() {
t.Context.destroyImplPoolProxy(this.implPoolProxy);
t.Context.destroyImplPool(this.implPool);
e.prototype.dtor.call(this);
};
i.prototype.regModule = function(e, i) {
if (null == i.platform || i.platform()) {
var n = t.IOCPool.global.reg.regType(e);
this.doProxy(t.SModuleRegEvent, function(t) {
t.onModuleReg(n, i);
});
}
};
i.prototype.regView = function(e, i) {
var n = t.IOCPool.global.reg.regType(e);
this.doProxy(t.SViewRegEvent, function(t) {
t.onViewReg(n, i);
});
};
i.prototype.regRootView = function(e, i) {
if (this._rootViewTypeID == t.IOCReg.InvalidID) {
var n = t.IOCPool.global.reg.regType(e);
this._rootViewTypeID = n;
this.doProxy(t.SRootViewRegEvent, function(t) {
t.onRootViewReg(n, i);
});
} else t.Adapt.DEBUG && console.error("[ObjectPool] regRootView root view already registered");
};
i.prototype.regPartView = function(e, i) {
var n = t.IOCPool.global.reg.regType(e);
this.doProxy(t.SPartViewRegEvent, function(t) {
t.onPartViewReg(n, i);
});
};
i.prototype.regCompView = function(e, i) {
var n = t.IOCPool.global.reg.regType(e);
this.doProxy(t.SCompViewRegEvent, function(t) {
t.onCompViewReg(n, i);
});
};
i.prototype.regCustomView = function(e, i) {
var n = t.IOCPool.global.reg.regType(e);
this.doProxy(t.SCustomViewRegEvent, function(t) {
t.onCustomViewReg(n, i);
});
};
i.prototype.regElementView = function(e, i) {
var n = t.IOCPool.global.reg.regType(e);
this.doProxy(t.SElementViewRegEvent, function(t) {
t.onElementViewReg(n, i);
});
};
i.prototype.regExtendFgui2Cls = function(e, i) {
var n = t.IOCPool.global.reg.regType(e);
this.doProxy(t.SExtendFguiRegEvent, function(t) {
t.onExtendFgui2ClsReg(n, i);
});
};
return __decorate([ t.Support.Implement(t.IObjectPool) ], i);
}(t.FrameObject);
t.ObjectPool = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = null !== e && e.apply(this, arguments) || this;
i.dataImplPool = t.Context.createImplPool();
i.moduleImplPool = t.Context.createImplPool();
i.viewImplPool = t.Context.createImplPool();
i.rootViewImplPool = t.Context.createImplPool();
i.golbalImplPool = t.Context.createImplPool();
i._pluginMap = new Map();
i._globalPluginMap = new Map();
return i;
}
i.prototype.ctor = function() {
e.prototype.ctor.call(this);
this.getImplByIntf(t.IObjectPool).implPool.createEvent.addListener(this, this._onImplCreate);
};
i.prototype.dtor = function() {
var i, n;
this.getImplByIntf(t.IObjectPool).implPool.createEvent.removeListener(this);
t.Context.destroyImplPool(this.dataImplPool);
t.Context.destroyImplPool(this.moduleImplPool);
t.Context.destroyImplPool(this.viewImplPool);
t.Context.destroyImplPool(this.rootViewImplPool);
t.Context.destroyImplPool(this.golbalImplPool);
try {
for (var o = __values(this._globalPluginMap), r = o.next(); !r.done; r = o.next()) {
var s = __read(r.value, 2)[1];
s.dtor();
t.IOCPool.global.removeObj(s);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
r && !r.done && (n = o.return) && n.call(o);
} finally {
if (i) throw i.error;
}
}
e.prototype.dtor.call(this);
};
i.prototype.onModuleReg = function(t, e) {
void 0 !== e.plugins && this._pluginMap.set(t, e.plugins);
};
i.prototype.onViewReg = function(t, e) {
void 0 !== e.plugins && this._pluginMap.set(t, e.plugins);
};
i.prototype.onRootViewReg = function(t, e) {
void 0 !== e.plugins && this._pluginMap.set(t, e.plugins);
};
i.prototype.onPartViewReg = function(t, e) {
void 0 !== e.plugins && this._pluginMap.set(t, e.plugins);
};
i.prototype.onCompViewReg = function(t, e) {
void 0 !== e.plugins && this._pluginMap.set(t, e.plugins);
};
i.prototype.onCustomViewReg = function(t, e) {
void 0 !== e.plugins && this._pluginMap.set(t, e.plugins);
};
i.prototype.regPlugin = function(e, i) {
var n, o, r, s, a, l, h, c, u, p, d, f, _, g;
if (void 0 === i.platform || i.platform()) {
try {
for (var y = __values(i.supports), m = y.next(); !m.done; m = y.next()) switch (m.value) {
case t.FrameType.Module:
try {
for (var v = (r = void 0, __values(i.implements)), b = v.next(); !b.done; b = v.next()) {
var w = b.value;
this.moduleImplPool.regIntf(w);
}
} catch (t) {
r = {
error: t
};
} finally {
try {
b && !b.done && (s = v.return) && s.call(v);
} finally {
if (r) throw r.error;
}
}
(a = this.moduleImplPool).regImpl.apply(a, __spreadArray([ e ], __read(i.implements), !1));
break;

case t.FrameType.View:
try {
for (var S = (l = void 0, __values(i.implements)), I = S.next(); !I.done; I = S.next()) {
w = I.value;
this.viewImplPool.regIntf(w);
}
} catch (t) {
l = {
error: t
};
} finally {
try {
I && !I.done && (h = S.return) && h.call(S);
} finally {
if (l) throw l.error;
}
}
(c = this.viewImplPool).regImpl.apply(c, __spreadArray([ e ], __read(i.implements), !1));
break;

case t.FrameType.RootView:
try {
for (var C = (u = void 0, __values(i.implements)), P = C.next(); !P.done; P = C.next()) {
w = P.value;
this.rootViewImplPool.regIntf(w);
}
} catch (t) {
u = {
error: t
};
} finally {
try {
P && !P.done && (p = C.return) && p.call(C);
} finally {
if (u) throw u.error;
}
}
(d = this.rootViewImplPool).regImpl.apply(d, __spreadArray([ e ], __read(i.implements), !1));
}
} catch (t) {
n = {
error: t
};
} finally {
try {
m && !m.done && (o = y.return) && o.call(y);
} finally {
if (n) throw n.error;
}
}
try {
for (var x = __values(i.implements), k = x.next(); !k.done; k = x.next()) {
w = k.value;
this.golbalImplPool.regIntf(w);
}
} catch (t) {
f = {
error: t
};
} finally {
try {
k && !k.done && (_ = x.return) && _.call(x);
} finally {
if (f) throw f.error;
}
}
(g = this.golbalImplPool).regImpl.apply(g, __spreadArray([ e ], __read(i.implements), !1));
}
};
i.prototype.getGlobalPlugin = function(e) {
var i = t.IOCPool.global.reg.getTypeID(e);
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[PluginPool] getGlobalPlugin interface ".concat(e.name, " unregistered"));
return null;
}
var n = this.golbalImplPool.getImplID(i);
if (void 0 === n) {
t.Adapt.DEBUG && console.error("[PluginPool] getGlobalPlugin interface ".concat(e.name, " not implement"));
return null;
}
var o = this._globalPluginMap.get(n);
if (null == o) {
(o = t.IOCPool.global.addObjByTypeID(n, this)).ctor();
this._globalPluginMap.set(n, o);
}
return o;
};
i.prototype.initPlugins = function(e) {
var i = t.IOCPool.global.reg.getObjTypeID(e);
void 0 !== i ? this._onImplCreate(i, e) : t.Adapt.DEBUG && console.error("[PluginPool] initPlugins object ".concat(e.constructor.name, " unregistered"));
};
i.prototype._onImplCreate = function(e, i) {
var n = this;
this.getImplByIntf(t.ISuperPool).forEachSuperID(e, function(t) {
var e, o, r = n._pluginMap.get(t);
if (void 0 !== r) try {
for (var s = __values(r), a = s.next(); !a.done; a = s.next()) {
var l = a.value;
i.getPlugin(l);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
a && !a.done && (o = s.return) && o.call(s);
} finally {
if (e) throw e.error;
}
}
});
};
return __decorate([ t.Support.Implement(t.IPluginPool), t.Support.Proxy(t.SModuleRegEvent, t.SViewRegEvent, t.SRootViewRegEvent, t.SPartViewRegEvent, t.SCompViewRegEvent, t.SCustomViewRegEvent) ], i);
}(t.FrameObject);
t.PluginPool = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._superIDMap = new Map();
return t;
}
i.prototype.onModuleReg = function(t, e) {
this._addSuper(t, e.super);
};
i.prototype.onViewReg = function(t, e) {
this._addSuper(t, e.super);
};
i.prototype.onPartViewReg = function(t, e) {
this._addSuper(t, e.super);
};
i.prototype.onCompViewReg = function(t, e) {
this._addSuper(t, e.super);
};
i.prototype.onElementViewReg = function(t, e) {
this._addSuper(t, e.super);
};
i.prototype.findSuperID = function(t) {
return this._superIDMap.get(t);
};
i.prototype.forEachSuperID = function(t, e) {
var i = this._superIDMap.get(t);
void 0 !== i && this.forEachSuperID(i, e);
e(t);
};
i.prototype._addSuper = function(e, i) {
if (void 0 !== i) {
var n = t.IOCPool.global.reg.getTypeID(i);
if (void 0 !== n) {
this._superIDMap.set(e, n);
t.Adapt.DEBUG && void 0 !== n && this._checkSuperLoop(e, n) && console.error("[SuperPool] addSuper super loop");
} else t.Adapt.DEBUG && console.error("[SuperPool] addSuper super ".concat(i.name, " unregistered"));
}
};
i.prototype._checkSuperLoop = function(t, e) {
if (t === e) return !0;
var i = this._superIDMap.get(e);
return void 0 !== i && this._checkSuperLoop(t, i);
};
return __decorate([ t.Support.Implement(t.ISuperPool), t.Support.Proxy(t.SModuleRegEvent, t.SViewRegEvent, t.SPartViewRegEvent, t.SCompViewRegEvent, t.SElementViewRegEvent) ], i);
}(t.FrameObject);
t.SuperPool = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = null !== e && e.apply(this, arguments) || this;
i._bundleMap = new Map();
i._bundleInfoMap = new Map();
i._loadBundleCaller = new t.Caller();
i._loadAssetCaller = new t.Caller();
i._loadAssetDirCaller = new t.Caller();
return i;
}
i.prototype.regBundle = function(e, i) {
var n, o, r, s, a = t.IOCPool.global.reg.regType(e);
try {
for (var l = __values(this._bundleMap), h = l.next(); !h.done; h = l.next()) if (__read(h.value, 2)[1] == i) {
t.Adapt.DEBUG && console.error("[BundlePool] regBundle bundleName ".concat(i, " already registered"));
return;
}
} catch (t) {
n = {
error: t
};
} finally {
try {
h && !h.done && (o = l.return) && o.call(l);
} finally {
if (n) throw n.error;
}
}
this._bundleMap.set(a, i);
var c = this._bundleInfoMap.get(a);
if (void 0 !== c) {
try {
for (var u = __values(c), p = u.next(); !p.done; p = u.next()) {
var d = __read(p.value, 2), f = d[0], _ = d[1];
Object.defineProperty(e, f, {
value: "".concat(_, "@").concat(i)
});
}
} catch (t) {
r = {
error: t
};
} finally {
try {
p && !p.done && (s = u.return) && s.call(u);
} finally {
if (r) throw r.error;
}
}
this._bundleInfoMap.delete(a);
}
};
i.prototype.regViewName = function(e, i, n) {
var o = t.IOCPool.global.reg.regType(e), r = this._bundleInfoMap.get(o);
if (void 0 === r) {
r = new Map();
this._bundleInfoMap.set(o, r);
}
r.set(i, n);
};
i.prototype.getBundleName = function(e) {
if ("string" == typeof e) return e;
var i = t.IOCPool.global.reg.getTypeID(e);
if (void 0 !== i) {
var n = this._bundleMap.get(i);
if (void 0 !== n) return n;
t.Adapt.DEBUG && console.error("[BundlePool] getBundleName type invalid");
} else t.Adapt.DEBUG && console.error("[BundlePool] getBundleName type unregistered");
};
i.prototype.loadBundle = function(e, i) {
var n = this, o = this.getBundleName(e);
if (void 0 !== o) {
var r = this._loadBundleCaller.addCallOnce(i);
t.AssetTool.loadBundle(o, function(t) {
n._loadBundleCaller.doCall(r, null != t);
r = void 0;
});
return r;
}
};
i.prototype.breakLoadBundle = function(t) {
this._loadBundleCaller.forbidCall(t);
};
i.prototype.unloadBundle = function(e) {
var i = this.getBundleName(e);
void 0 !== i && t.AssetTool.unloadBundle(i);
};
i.prototype.loadAsset = function(e, i, n, o) {
var r = this, s = this.getBundleName(i);
if (void 0 !== s) {
var a = this._loadAssetCaller.addCallOnce(o);
t.AssetTool.loadAsset(e, s, n, function(t) {
r._loadAssetCaller.doCall(a, t);
a = void 0;
});
return a;
}
o(null);
};
i.prototype.breakLoadAsset = function(t) {
this._loadAssetCaller.forbidCall(t);
};
i.prototype.loadAssetDir = function(e, i, n, o) {
var r = this, s = this.getBundleName(i);
if (void 0 !== s) {
var a = this._loadAssetDirCaller.addCallOnce(o);
t.AssetTool.loadAssetDir(e, s, n, function(t) {
r._loadAssetDirCaller.doCall(a, t);
a = void 0;
});
return a;
}
o(null);
};
i.prototype.breakLoadAssetDir = function(t) {
this._loadAssetDirCaller.forbidCall(t);
};
return __decorate([ t.Support.Implement(t.IBundlePool) ], i);
}(t.FrameObject);
t.BundlePool = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._dataKeyMap = new Map();
t._dataGetterMap = new Map();
t._dispatcherMap = new Map();
return t;
}
i.prototype.bindData = function(e, i, n) {
if (this._dataGetterMap.has(i)) t.Adapt.DEBUG && console.error("[DataPool] bindData key ".concat(i, " already bind")); else {
var o = t.IOCPool.global.reg.regType(e.constructor), r = this._dataKeyMap.get(o);
if (void 0 === r) {
r = new Set();
this._dataKeyMap.set(o, r);
}
r.add(i);
this._dataGetterMap.set(i, n);
}
};
i.prototype.unbindAllData = function(e) {
var i, n, o = t.IOCPool.global.reg.getObjTypeID(e);
if (void 0 !== o) {
var r = this._dataKeyMap.get(o);
if (void 0 !== r) {
try {
for (var s = __values(r), a = s.next(); !a.done; a = s.next()) {
var l = a.value;
this._dataGetterMap.delete(l);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
a && !a.done && (n = s.return) && n.call(s);
} finally {
if (i) throw i.error;
}
}
this._dataKeyMap.delete(o);
}
}
};
i.prototype.updateData = function(e, i) {
var n = t.IOCPool.global.reg.getObjTypeID(e);
if (void 0 !== n) {
var o = this._dataKeyMap.get(n);
if (void 0 !== o) if (o.has(i)) {
var r = this._dispatcherMap.get(i);
void 0 !== r && r.dispatch(this.queryData(i));
} else t.Adapt.DEBUG && console.error("[DataPool] updateData key ".concat(i, " invalid")); else t.Adapt.DEBUG && console.error("[DataPool] updateData no data");
} else t.Adapt.DEBUG && console.error("[DataPool] updateData error");
};
i.prototype.queryData = function(t) {
var e = this._dataGetterMap.get(t);
if (void 0 !== e) return e();
};
i.prototype.addDataListener = function(e, i, n) {
var o = this._dispatcherMap.get(e);
if (void 0 === o) {
o = new t.Dispatcher();
this._dispatcherMap.set(e, o);
}
o.addListener(i, n);
};
i.prototype.removeDataListener = function(t, e) {
var i = this._dispatcherMap.get(t);
if (void 0 !== i) {
i.removeListener(e);
i.listenerCount < 1 && this._dispatcherMap.delete(t);
}
};
return __decorate([ t.Support.Implement(t.IDataPool) ], i);
}(t.FrameObject);
t.DataPool = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._dependMap = new Map();
t._moduleDependMap = new Map();
t._viewDependMap = new Map();
t._createWhenDependSet = new Set();
t._dependNotDestroyMap = new Map();
t._moduleLifeValidIDs = new Set();
t._moduleLifeDependIDs = new Map();
t._viewLifeDependIDs = new Map();
return t;
}
i.prototype.onModuleReg = function(t, e) {
var i, n;
if (null !== (i = e.createWhenDepend) && void 0 !== i && i) {
this._createWhenDependSet.add(t);
this._dependNotDestroyMap.set(t, 0);
} else null !== (n = e.dependNotDestroy) && void 0 !== n && n && this._dependNotDestroyMap.set(t, 0);
void 0 !== e.depends && this._addDepend(t, e.depends);
};
i.prototype.onViewReg = function(t, e) {
void 0 !== e.depends && this._addDepend(t, e.depends);
};
i.prototype.onRootViewReg = function(t, e) {
void 0 !== e.depends && this._addDepend(t, e.depends);
};
i.prototype.onPartViewReg = function(t, e) {
void 0 !== e.depends && this._addDepend(t, e.depends);
};
i.prototype.onModuleSelect = function(e) {
var i, n, o = this;
this._moduleDependMap.clear();
var r = this.getImplByIntf(t.IObjectPool), s = this.getImplByIntf(t.ISuperPool), a = function(e) {
var i = l._moduleDependMap.get(e);
if (void 0 === i) {
i = [];
l._moduleDependMap.set(e, i);
}
s.forEachSuperID(e, function(e) {
var n, s, a = o._dependMap.get(e);
if (void 0 !== a) try {
for (var l = (n = void 0, __values(a)), h = l.next(); !h.done; h = l.next()) {
var c = h.value, u = r.implPool.getImplID(c);
void 0 !== u ? i.push(u) : t.Adapt.DEBUG && console.warn("[Dependent] onModuleSelect ".concat(c, " not implement"));
}
} catch (t) {
n = {
error: t
};
} finally {
try {
h && !h.done && (s = l.return) && s.call(l);
} finally {
if (n) throw n.error;
}
}
});
}, l = this;
try {
for (var h = __values(e), c = h.next(); !c.done; c = h.next()) a(c.value);
} catch (t) {
i = {
error: t
};
} finally {
try {
c && !c.done && (n = h.return) && n.call(h);
} finally {
if (i) throw i.error;
}
}
};
i.prototype.onViewSelect = function(e) {
var i, n, o = this;
this._viewDependMap.clear();
var r = this.getImplByIntf(t.IObjectPool), s = this.getImplByIntf(t.ISuperPool), a = function(e) {
var i = l._viewDependMap.get(e);
if (void 0 === i) {
i = [];
l._viewDependMap.set(e, i);
}
s.forEachSuperID(e, function(e) {
var n, s, a = o._dependMap.get(e);
if (void 0 !== a) try {
for (var l = (n = void 0, __values(a)), h = l.next(); !h.done; h = l.next()) {
var c = h.value, u = r.implPool.getImplID(c);
void 0 !== u ? i.push(u) : t.Adapt.DEBUG && console.warn("[Dependent] onViewSelect ".concat(c, " not implement"));
}
} catch (t) {
n = {
error: t
};
} finally {
try {
h && !h.done && (s = l.return) && s.call(l);
} finally {
if (n) throw n.error;
}
}
});
}, l = this;
try {
for (var h = __values(e), c = h.next(); !c.done; c = h.next()) a(c.value);
} catch (t) {
i = {
error: t
};
} finally {
try {
c && !c.done && (n = h.return) && n.call(h);
} finally {
if (i) throw i.error;
}
}
};
i.prototype.onLifeChanged = function(t) {
var e, i, n, o;
try {
for (var r = __values(this._moduleLifeValidIDs), s = r.next(); !s.done; s = r.next()) {
var a = s.value;
t.has(a) || this._destroyModule(a);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
s && !s.done && (i = r.return) && i.call(r);
} finally {
if (e) throw e.error;
}
}
try {
for (var l = __values(t), h = l.next(); !h.done; h = l.next()) {
var c = h.value;
this._createModule(c, t);
}
} catch (t) {
n = {
error: t
};
} finally {
try {
h && !h.done && (o = l.return) && o.call(l);
} finally {
if (n) throw n.error;
}
}
};
i.prototype.reloadModules = function(t) {
var e, i;
this.destoryModules(t);
try {
for (var n = __values(t), o = n.next(); !o.done; o = n.next()) {
var r = o.value;
this._createModule(r, t);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
o && !o.done && (i = n.return) && i.call(n);
} finally {
if (e) throw e.error;
}
}
};
i.prototype.destoryModules = function(t) {
var e, i;
try {
for (var n = __values(t), o = n.next(); !o.done; o = n.next()) {
var r = o.value;
this._destroyModule(r);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
o && !o.done && (i = n.return) && i.call(n);
} finally {
if (e) throw e.error;
}
}
};
i.prototype.onViewAdd = function(t, e) {
var i, n, o = this._viewDependMap.get(t);
if (void 0 !== o) {
var r = new Set();
try {
for (var s = __values(o), a = s.next(); !a.done; a = s.next()) {
var l = a.value, h = this._dependNotDestroyMap.get(l);
if (void 0 !== h) {
this._dependNotDestroyMap.set(l, ++h);
r.add(l);
}
this._createWhenDependSet.has(l) && this._createModule(l);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
a && !a.done && (n = s.return) && n.call(s);
} finally {
if (i) throw i.error;
}
}
r.size > 0 && this._viewLifeDependIDs.set(e, r);
}
};
i.prototype.onViewRemove = function(e, i) {
var n, o, r = this._viewLifeDependIDs.get(i);
if (void 0 !== r) {
try {
for (var s = __values(r), a = s.next(); !a.done; a = s.next()) {
var l = a.value, h = this._dependNotDestroyMap.get(l);
if (void 0 === h) t.Adapt.DEBUG && console.error("[Dependent] onViewRemove depend error"); else {
this._dependNotDestroyMap.set(l, --h);
if (0 == h) this._destroyModule(l); else if (h < 0) {
t.Adapt.DEBUG && console.error("[Dependent] onViewRemove error depend count less 0");
this._dependNotDestroyMap.set(l, 0);
}
}
}
} catch (t) {
n = {
error: t
};
} finally {
try {
a && !a.done && (o = s.return) && o.call(s);
} finally {
if (n) throw n.error;
}
}
this._viewLifeDependIDs.delete(i);
}
};
i.prototype._addDepend = function(e, i) {
var n, o, r = [], s = this.getImplByIntf(t.IObjectPool);
try {
for (var a = __values(i), l = a.next(); !l.done; l = a.next()) {
var h = l.value, c = t.IOCPool.global.reg.getTypeID(h);
if (void 0 === c) {
t.Adapt.DEBUG && console.error("[Dependent] addDepend depend ".concat(h.name, " unregistered"));
return;
}
if (!s.implPool.checkIntfID(c)) {
t.Adapt.DEBUG && console.error("[Dependent] addDepend depend ".concat(h.name, " not interface"));
return;
}
r.push(c);
}
} catch (t) {
n = {
error: t
};
} finally {
try {
l && !l.done && (o = a.return) && o.call(a);
} finally {
if (n) throw n.error;
}
}
this._dependMap.set(e, r);
};
i.prototype._createModule = function(e, i) {
var n, o;
if (!this._moduleLifeValidIDs.has(e)) {
var r = t.IOCPool.global.reg.getType(e);
if (void 0 !== r) {
var s = new Set(), a = this._moduleDependMap.get(e);
if (void 0 !== a) try {
for (var l = __values(a), h = l.next(); !h.done; h = l.next()) {
var c = h.value, u = this._dependNotDestroyMap.get(c);
if (void 0 !== u) {
this._dependNotDestroyMap.set(c, ++u);
s.add(c);
}
(void 0 !== i && i.has(c) || this._createWhenDependSet.has(c)) && this._createModule(c, i);
}
} catch (t) {
n = {
error: t
};
} finally {
try {
h && !h.done && (o = l.return) && o.call(l);
} finally {
if (n) throw n.error;
}
}
this._moduleLifeValidIDs.add(e);
s.size > 0 && this._moduleLifeDependIDs.set(e, s);
this.getImplByIntf(t.IObjectPool).implPool.createImpl(r);
} else t.Adapt.DEBUG && console.error("[Dependent] createModule ".concat(e, " invalid"));
}
};
i.prototype._destroyModule = function(e) {
var i, n;
if (this._moduleLifeValidIDs.has(e)) {
var o = this.getImplByIntf(t.IObjectPool), r = this._moduleLifeDependIDs.get(e);
if (void 0 !== r) {
try {
for (var s = __values(r), a = s.next(); !a.done; a = s.next()) {
var l = a.value, h = this._dependNotDestroyMap.get(l);
if (void 0 === h) t.Adapt.DEBUG && console.error("[Dependent] destroyModule depend error"); else {
this._dependNotDestroyMap.set(l, --h);
if (0 == h) {
this._moduleLifeValidIDs.delete(l);
o.implPool.destroyImplByID(l);
} else if (h < 0) {
t.Adapt.DEBUG && console.error("[Dependent] destroyModule error depend count less 0");
this._dependNotDestroyMap.set(l, 0);
}
}
}
} catch (t) {
i = {
error: t
};
} finally {
try {
a && !a.done && (n = s.return) && n.call(s);
} finally {
if (i) throw i.error;
}
}
this._moduleLifeDependIDs.delete(e);
}
var c = this._dependNotDestroyMap.get(e);
if (void 0 === c || 0 == c) {
this._moduleLifeValidIDs.delete(e);
o.implPool.destroyImplByID(e);
}
} else t.Adapt.DEBUG && console.error("[Dependent] destroyModule already destroy");
};
return __decorate([ t.Support.Implement(), t.Support.Proxy(t.SModuleRegEvent, t.SViewRegEvent, t.SRootViewRegEvent, t.SPartViewRegEvent, t.SModuleSelectEvent, t.SViewSelectEvent, t.SLifeEvent, t.SViewEvent) ], i);
}(t.FrameObject);
t.Dependent = e;
})(qg || (qg = {}));

(function(t) {
var e = function() {
function t() {
this._selectIDs = new Set();
this._selectorInfoMap = new Map();
}
t.prototype.addSelectInfo = function(t, e) {
e ? this._selectorInfoMap.set(t, e) : this._selectIDs.add(t);
};
t.prototype.updateSelectInfo = function(t, e, i) {
var n = this._selectorInfoMap.get(t);
null == n && (n = {});
var o, r, s = !(o = n[e], r = i, typeof o == typeof r && (Array.isArray(o) && Array.isArray(r) ? o.length == r.length && o.sort().toString() == r.sort().toString() : o == r));
n[e] = i;
this._selectorInfoMap.set(t, n);
return {
info: n,
isChanged: s
};
};
t.prototype.matchSelectInfo = function(e, i) {
var n, o, r = new Set(this._selectIDs);
try {
for (var s = __values(this._selectorInfoMap), a = s.next(); !a.done; a = s.next()) {
var l = __read(a.value, 2), h = l[0], c = l[1];
t.matchSelectorInfo(e, c, i) && r.add(h);
}
} catch (t) {
n = {
error: t
};
} finally {
try {
a && !a.done && (o = s.return) && o.call(s);
} finally {
if (n) throw n.error;
}
}
return r;
};
t.matchSelectorInfo = function(t, e, i) {
if (void 0 !== t.gameID) {
if (void 0 !== e.gameID && e.gameID.indexOf(t.gameID) < 0) return !1;
} else if (void 0 !== e.gameID) return !1;
if (void 0 !== t.gameType) {
if (void 0 !== e.gameType && e.gameType.indexOf(t.gameType) < 0) return !1;
} else if (void 0 !== e.gameType) return !1;
if (void 0 !== t.collection) {
if (void 0 !== e.collection && e.collection == t.collection) return !1;
} else if (void 0 !== e.collection && e.collection) return !1;
if (void 0 !== i) {
if (void 0 !== e.custom && !i(e.custom)) return !1;
} else if (void 0 !== e.custom) return !1;
return !0;
};
t.prototype.getTypeIDByInfo = function(t, e) {
var i, n;
if (null != t) try {
for (var o = __values(this._selectorInfoMap), r = o.next(); !r.done; r = o.next()) {
var s = __read(r.value, 2), a = s[0], l = s[1], h = !0;
for (var c in l) if (c != e && t[c] != l[c]) {
h = !1;
break;
}
if (h) return a;
}
} catch (t) {
i = {
error: t
};
} finally {
try {
r && !r.done && (n = o.return) && n.call(o);
} finally {
if (i) throw i.error;
}
}
};
return t;
}(), i = function(i) {
__extends(n, i);
function n() {
var t = null !== i && i.apply(this, arguments) || this;
t._selectInfo = {};
t._moduleSelectorData = new e();
t._viewSelectorData = new e();
t._functionSelectorData = new e();
return t;
}
n.prototype.onModuleReg = function(t, e) {
this._moduleSelectorData.addSelectInfo(t, e.selector);
};
n.prototype.onViewReg = function(t, e) {
this._viewSelectorData.addSelectInfo(t, e.selector);
};
n.prototype.onRootViewReg = function(t) {
this._viewSelectorData.addSelectInfo(t, null);
};
n.prototype.onPartViewReg = function(t, e) {
this._viewSelectorData.addSelectInfo(t, e.selector);
};
n.prototype.onCompViewReg = function(t, e) {
this._viewSelectorData.addSelectInfo(t, e.selector);
};
n.prototype.onCustomViewReg = function(t) {
this._viewSelectorData.addSelectInfo(t, null);
};
n.prototype.onElementViewReg = function(t, e) {
this._viewSelectorData.addSelectInfo(t, e.selector);
};
n.prototype.onFunctionReg = function(t, e) {
this._functionSelectorData.addSelectInfo(t, e.selector);
};
n.prototype.selectGame = function(t, e) {
this._selectInfo.gameID = t;
this._selectInfo.gameType = e;
};
n.prototype.selectCollection = function(t) {
this._selectInfo.collection = t;
};
n.prototype.apply = function(e) {
var i, n, o, r;
t.Adapt.DEBUG && console.time("[Selector] apply cost time");
var s = this.getImplByIntf(t.IObjectPool);
s.implPool.unregAllImpl();
s.implPoolProxy.unregAllProxy();
var a = this._moduleSelectorData.matchSelectInfo(this._selectInfo, e);
try {
for (var l = __values(a), h = l.next(); !h.done; h = l.next()) {
var c = h.value;
this._removeSuperID(c, a);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
h && !h.done && (n = l.return) && n.call(l);
} finally {
if (i) throw i.error;
}
}
var u = this._viewSelectorData.matchSelectInfo(this._selectInfo, e);
try {
for (var p = __values(u), d = p.next(); !d.done; d = p.next()) {
var f = d.value;
this._removeSuperID(f, u);
}
} catch (t) {
o = {
error: t
};
} finally {
try {
d && !d.done && (r = p.return) && r.call(p);
} finally {
if (o) throw o.error;
}
}
var _ = this._functionSelectorData.matchSelectInfo(this._selectInfo, e);
this.doProxy(t.SModulePreSelectEvent, function(t) {
t.onModulePreSelect(a);
});
this.doProxy(t.SViewPreSelectEvent, function(t) {
t.onViewPreSelect(u);
});
this.doProxy(t.SModuleSelectEvent, function(t) {
t.onModuleSelect(a);
});
this.doProxy(t.SViewSelectEvent, function(t) {
t.onViewSelect(u);
});
this.doProxy(t.SFuncSelectEvent, function(t) {
t.onFuncSelect(_);
});
t.Adapt.DEBUG && console.timeEnd("[Selector] apply cost time");
};
n.prototype._removeSuperID = function(e, i) {
var n = this.getImplByIntf(t.ISuperPool).findSuperID(e);
if (void 0 !== n) {
i.delete(n);
this._removeSuperID(n, i);
}
};
n.prototype.onViewUpdateSelector = function(e) {
var i, n, o = this, r = 0;
try {
for (var s = __values(e), a = s.next(); !a.done; a = s.next()) {
var l = a.value, h = l.typeID, c = l.selectorKey, u = l.value;
this._viewSelectorData.updateSelectInfo(h, c, u).isChanged && r++;
}
} catch (t) {
i = {
error: t
};
} finally {
try {
a && !a.done && (n = s.return) && n.call(s);
} finally {
if (i) throw i.error;
}
}
r > 0 && this.doProxy(t.SViewPreSelectEvent, function(t) {
var e;
null === (e = t.onViewUpdateSelect) || void 0 === e || e.call(t, o._viewSelectorData.matchSelectInfo(o._selectInfo));
});
};
return __decorate([ t.Support.Implement(t.ISelector), t.Support.Proxy(t.SModuleRegEvent, t.SFunctionRegEvent, t.SViewRegEvent, t.SRootViewRegEvent, t.SPartViewRegEvent, t.SCompViewRegEvent, t.SCustomViewRegEvent, t.SElementViewRegEvent) ], n);
}(t.FrameObject);
t.Selector = i;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var i = null !== e && e.apply(this, arguments) || this;
i._configTypeID = t.IOCReg.InvalidID;
return i;
}
i.prototype.regStartup = function(e) {
this._configTypeID == t.IOCReg.InvalidID ? this._configTypeID = t.IOCPool.global.reg.regType(e) : t.Adapt.DEBUG && console.error("[Launcher] regStartup config type already exists");
};
i.prototype.init = function() {
if (this._configTypeID != t.IOCReg.InvalidID) {
t.Adapt.DEBUG && console.time("[Launcher] init cost time");
var e = new (t.IOCPool.global.reg.getType(this._configTypeID))();
this.doProxy(t.SStartupEvent, function(t) {
t.onStartupConfig(e);
});
t.Adapt.DEBUG && console.timeEnd("[Launcher] init cost time");
} else t.Adapt.DEBUG && console.error("[Launcher] start need startup config");
};
i.prototype.start = function() {
t.Adapt.DEBUG && console.time("[Launcher] start cost time");
this.doProxy(t.SStartupEvent, function(t) {
t.onStartup();
});
t.Adapt.DEBUG && console.timeEnd("[Launcher] start cost time");
};
return __decorate([ t.Support.Implement(t.ILauncher) ], i);
}(t.FrameObject);
t.Launcher = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._lifeMap = new Map();
t._lifeNodeSet = new Set();
t._lifeCycleMap = new Map();
t._lifeSelectMap = new Map();
t._lifeValidIDs = new Set();
return t;
}
Object.defineProperty(i.prototype, "life", {
get: function() {
return this._life;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "prevLife", {
get: function() {
return this._prevLife;
},
enumerable: !1,
configurable: !0
});
i.prototype.onModuleReg = function(t, e) {
void 0 !== e.lifeCycle && this._lifeCycleMap.set(t, e.lifeCycle);
};
i.prototype.onStartupConfig = function(t) {
this._addLife(t.lifeInfo.life, t.lifeInfo.infos);
this._entryLife = t.entryLife;
};
i.prototype.onStartup = function() {
void 0 !== this._entryLife ? this.enterLife(this._entryLife) : t.Adapt.DEBUG && console.error("[LifeCycle] onStartup need entry life");
};
i.prototype.onModuleSelect = function(t) {
var e, i, n, o;
this._lifeSelectMap.clear();
try {
for (var r = __values(t), s = r.next(); !s.done; s = r.next()) {
var a = s.value, l = this._lifeCycleMap.get(a);
if (void 0 !== l) try {
for (var h = (n = void 0, __values(l)), c = h.next(); !c.done; c = h.next()) {
var u = c.value, p = this._lifeSelectMap.get(u);
if (void 0 === p) {
p = [];
this._lifeSelectMap.set(u, p);
}
p.push(a);
}
} catch (t) {
n = {
error: t
};
} finally {
try {
c && !c.done && (o = h.return) && o.call(h);
} finally {
if (n) throw n.error;
}
}
}
} catch (t) {
e = {
error: t
};
} finally {
try {
s && !s.done && (i = r.return) && i.call(r);
} finally {
if (e) throw e.error;
}
}
};
i.prototype.enterLife = function(e) {
var i = this;
if (this._lifeNodeSet.has(e)) {
if (t.Adapt.DEBUG) {
console.log("[LifeCycle] enterLife life ".concat(e, "..."));
console.time("[LifeCycle] enterLife cost time");
}
this._lifeValidIDs.clear();
e !== this._life && (this._prevLife = this._life);
this._enterLife(e, this._lifeValidIDs);
this._life = e;
this.doProxy(t.SLifeEvent, function(t) {
t.onLifeChanged(i._lifeValidIDs);
});
t.Adapt.DEBUG && console.timeEnd("[LifeCycle] enterLife cost time");
} else t.Adapt.DEBUG && console.error("[LifeCycle] enterLife life ".concat(e, " invalid"));
};
i.prototype._addLife = function(t, e) {
var i, n;
if (void 0 === e) this._lifeNodeSet.add(t); else try {
for (var o = __values(e), r = o.next(); !r.done; r = o.next()) {
var s = r.value;
this._lifeMap.set(s.life, t);
this._addLife(s.life, s.infos);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
r && !r.done && (n = o.return) && n.call(o);
} finally {
if (i) throw i.error;
}
}
};
i.prototype._enterLife = function(t, e) {
var i, n, o = this._lifeSelectMap.get(t);
if (void 0 !== o) try {
for (var r = __values(o), s = r.next(); !s.done; s = r.next()) {
var a = s.value;
e.add(a);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
s && !s.done && (n = r.return) && n.call(r);
} finally {
if (i) throw i.error;
}
}
var l = this._lifeMap.get(t);
void 0 !== l && this._enterLife(l, e);
};
i.prototype.getSelectIDs = function(t, e) {
var i, n;
if (void 0 !== e) try {
for (var o = __values(e), r = o.next(); !r.done; r = o.next()) {
var s = r.value;
t.add(s);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
r && !r.done && (n = o.return) && n.call(o);
} finally {
if (i) throw i.error;
}
}
return t;
};
i.prototype.reloadModulesFullMatch = function(e) {
var i, n, o, r;
void 0 === e && (e = []);
var s = new Set(), a = new Set();
if (e.length > 0) try {
for (var l = __values(this._lifeSelectMap.keys()), h = l.next(); !h.done; h = l.next()) {
var c = h.value;
e.indexOf(c) > -1 ? s = this.getSelectIDs(s, this._lifeSelectMap.get(c)) : a = this.getSelectIDs(a, this._lifeSelectMap.get(c));
}
} catch (t) {
i = {
error: t
};
} finally {
try {
h && !h.done && (n = l.return) && n.call(l);
} finally {
if (i) throw i.error;
}
}
var u = new Set();
try {
for (var p = __values(s), d = p.next(); !d.done; d = p.next()) {
var f = d.value;
a.has(f) || u.add(f);
}
} catch (t) {
o = {
error: t
};
} finally {
try {
d && !d.done && (r = p.return) && r.call(p);
} finally {
if (o) throw o.error;
}
}
this.doProxy(t.SLifeEvent, function(t) {
t.reloadModules(u);
});
};
i.prototype.destoryModulesFullMatch = function(e) {
var i, n, o, r;
void 0 === e && (e = []);
var s = new Set(), a = new Set();
if (e.length > 0) try {
for (var l = __values(this._lifeSelectMap.keys()), h = l.next(); !h.done; h = l.next()) {
var c = h.value;
e.indexOf(c) > -1 ? s = this.getSelectIDs(s, this._lifeSelectMap.get(c)) : a = this.getSelectIDs(a, this._lifeSelectMap.get(c));
}
} catch (t) {
i = {
error: t
};
} finally {
try {
h && !h.done && (n = l.return) && n.call(l);
} finally {
if (i) throw i.error;
}
}
var u = new Set();
try {
for (var p = __values(s), d = p.next(); !d.done; d = p.next()) {
var f = d.value;
a.has(f) || u.add(f);
}
} catch (t) {
o = {
error: t
};
} finally {
try {
d && !d.done && (r = p.return) && r.call(p);
} finally {
if (o) throw o.error;
}
}
this.doProxy(t.SLifeEvent, function(t) {
t.destoryModules(u);
});
};
i.prototype.reloadModules = function(e) {
var i, n;
void 0 === e && (e = []);
var o = new Set();
if (e.length > 0) try {
for (var r = __values(e), s = r.next(); !s.done; s = r.next()) {
var a = s.value;
o = this.getSelectIDs(o, this._lifeSelectMap.get(a));
}
} catch (t) {
i = {
error: t
};
} finally {
try {
s && !s.done && (n = r.return) && n.call(r);
} finally {
if (i) throw i.error;
}
}
this.doProxy(t.SLifeEvent, function(t) {
t.reloadModules(o);
});
};
i.prototype.destoryModules = function(e) {
var i, n;
void 0 === e && (e = []);
var o = new Set();
if (e.length > 0) try {
for (var r = __values(e), s = r.next(); !s.done; s = r.next()) {
var a = s.value;
o = this.getSelectIDs(o, this._lifeSelectMap.get(a));
}
} catch (t) {
i = {
error: t
};
} finally {
try {
s && !s.done && (n = r.return) && n.call(r);
} finally {
if (i) throw i.error;
}
}
this.doProxy(t.SLifeEvent, function(t) {
t.destoryModules(o);
});
};
return __decorate([ t.Support.Implement(t.ILifeCycle), t.Support.Proxy(t.SModuleRegEvent, t.SStartupEvent, t.SModuleSelectEvent) ], i);
}(t.FrameObject);
t.LifeCycle = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._moduleImplMap = new Map();
t._moduleProxyMap = new Map();
return t;
}
i.prototype.onModuleReg = function(t, e) {
void 0 !== e.implements && this._moduleImplMap.set(t, e.implements);
void 0 !== e.proxies && this._moduleProxyMap.set(t, e.proxies);
};
i.prototype.onModulePreSelect = function(e) {
var i, n, o = this, r = this.getImplByIntf(t.IObjectPool), s = this.getImplByIntf(t.ISuperPool), a = function(e) {
var i, n, a = t.IOCPool.global.reg.getType(e);
if (void 0 === a) {
t.Adapt.DEBUG && console.error("[ModulePool] onModuleSelect ".concat(e, " invalid"));
return "continue";
}
var l = [], h = [];
s.forEachSuperID(e, function(t) {
var e = o._moduleImplMap.get(t);
void 0 !== e && l.push.apply(l, __spreadArray([], __read(e), !1));
var i = o._moduleProxyMap.get(t);
void 0 !== i && h.push.apply(h, __spreadArray([], __read(i), !1));
});
(i = r.implPool).regImpl.apply(i, __spreadArray([ a ], __read(l), !1));
h.length > 0 && (n = r.implPoolProxy).regProxy.apply(n, __spreadArray([ a ], __read(h), !1));
};
try {
for (var l = __values(e), h = l.next(); !h.done; h = l.next()) a(h.value);
} catch (t) {
i = {
error: t
};
} finally {
try {
h && !h.done && (n = l.return) && n.call(l);
} finally {
if (i) throw i.error;
}
}
};
return __decorate([ t.Support.Implement(), t.Support.Proxy(t.SModuleRegEvent, t.SModulePreSelectEvent) ], i);
}(t.FrameObject);
t.ModulePool = e;
})(qg || (qg = {}));

(function(t) {
var e = function(t, e, i, n, o, r, s, a, l, h, c, u) {
this.typeID = t;
this.name = e;
this.fguiPackage = i;
this.order = n;
this.cache = o;
this.multiple = r;
this.mask = s;
this.loadAssets = a;
this.isRemoveLoadAssets = l;
this.releaseDirArr = h;
this.showProgress = c;
this.adaptNotch = u;
}, i = function(t) {
__extends(e, t);
function e(e, i, n, o, r, s, a, l, h, c, u, p, d) {
var f = t.call(this, e, i, o, r, s, a, l, h, null == c || c, u, p, d) || this;
f.skins = n;
f._skinKey = 0;
f._packageKey = -1;
return f;
}
e.prototype.setSkin = function(t) {
if (void 0 === this.skins[t]) return !1;
this._skinKey = t;
return !0;
};
e.prototype.getSkin = function() {
return this.skins[this._skinKey];
};
e.prototype.getSkins = function() {
return this.skins;
};
e.prototype.setPackage = function(t) {
if (void 0 === this.fguiPackage[t]) return !1;
this._packageKey = t;
return !0;
};
e.prototype.getPackage = function() {
var t;
return null !== (t = this.fguiPackage[this._packageKey]) && void 0 !== t ? t : this.fguiPackage[this.fguiPackage.length - 1];
};
e.prototype.getPackages = function() {
return this.fguiPackage;
};
return e;
}(e), n = function(t) {
__extends(e, t);
function e(e, i, n, o, r, s, a) {
var l = t.call(this, e, i, o, r, s, a) || this;
l.skins = n;
return l;
}
e.prototype.setSkin = function(t) {
if (void 0 === this.skins.prefabs[t]) return !1;
this._skinKey = t;
return !0;
};
e.prototype.getSkin = function() {
return void 0 === this._skinKey ? this.skins.prefabs[this.skins.default] : this.skins.prefabs[this._skinKey];
};
e.prototype.getSkins = function() {
return this.skins.prefabs;
};
e.prototype.setPackage = function() {
return !0;
};
e.prototype.getPackage = function() {};
e.prototype.getPackages = function() {
return [];
};
return e;
}(e), o = function(t, e) {
this.typeID = t;
this.name = e;
}, r = function(t, e) {
this.typeID = t;
this.mapping = e;
}, s = function(e) {
__extends(s, e);
function s() {
var i = null !== e && e.apply(this, arguments) || this;
i._viewDataMap = new Map();
i._partViewDataMap = new Map();
i._elementViewMap = new Map();
i._extendFguiMap = new Map();
i._viewImplMap = new Map();
i._viewProxyMap = new Map();
i._viewSelectDatas = new Map();
i._viewSelectDatasFuzzy = new Map();
i._partViewSelectDataMap = new Map();
i._elementViewSelectMap = new Map();
i._elementBaseViewSelectMap = new Map();
i._viewsMap = new Map();
i._stashViewMapStack = [];
i._detachViews = new Set();
i._viewCacheDatas = [];
i._createCaller = new t.Caller();
i._openCaller = new t.Caller();
i._rootMaskMap = new Map();
i._asyncOpenMap = new Map();
i._openingViewMap = new Map();
return i;
}
s.prototype._getViewDataByID = function(t) {
var e = this._viewDataMap.get(t);
if (Array.isArray(e)) return e.length > 0 ? e : void 0;
if (null != e) {
var i = [];
i.push(e);
return i;
}
};
s.prototype._getViewSelectData = function(e) {
var i;
if (e.includes("@")) {
if (!(i = this._viewSelectDatas.get(e))) {
var n = t.AssetTool.getAssetName(e);
if (null == n) return null;
i = this._viewSelectDatasFuzzy.get(n.name);
}
} else i = this._viewSelectDatasFuzzy.get(e);
if (null == i) {
t.Adapt.DEBUG && console.error("[ViewPool] createView viewName ".concat(e, " invalid"));
return null;
}
return i;
};
s.prototype.onViewReg = function(e, o) {
var r, s = Array.isArray(o.name), a = Array.isArray(null === (r = o.fguiPackage) || void 0 === r ? void 0 : r[0]);
t.Adapt.DEBUG && (a || s) && (a && s ? o.name.length != o.fguiPackage.length && console.error("".concat(o, " name.length !== fguiPackage.length")) : (a || s) && console.error("".concat(o, " name does not match fguiPackage")));
if (s) {
for (var l = [], h = 0, c = o.name.length; h < c; h++) {
var u = o.name[h], p = o.skins[h];
if (null != p) {
var d;
d = a ? o.fguiPackage[h] : o.fguiPackage;
l.push(new i(e, u, [ p ], d, o.order, o.cache, o.multiple));
} else t.Adapt.DEBUG && console.error("".concat(o, " 's skins is mismatch"));
}
this._viewDataMap.set(e, l);
} else Array.isArray(o.skins) ? this._viewDataMap.set(e, new i(e, o.name, o.skins, o.fguiPackage, o.order, o.cache, o.multiple, o.mask, o.loadAssets, o.isRemoveLoadAssets, o.releaseDirArr, o.showProgress, o.adaptNotch)) : this._viewDataMap.set(e, new n(e, o.name, o.skins, o.fguiPackage, o.order, o.cache, o.multiple));
void 0 !== o.proxies && this._viewProxyMap.set(e, o.proxies);
};
s.prototype.onElementViewReg = function(t, e) {
this._elementViewMap.set(t, new r(t, e.mapping));
null != e.proxies && this._viewProxyMap.set(t, e.proxies);
};
s.prototype.onExtendFgui2ClsReg = function(t, e) {
var i = this, n = function(e) {
var n, o = e.pkg, r = e.ui, s = null !== (n = i._extendFguiMap.get(o)) && void 0 !== n ? n : {};
s[r] || (s[r] = t);
i._extendFguiMap.set(o, s);
};
Array.isArray(e.all) ? e.all.forEach(function(t) {
n(t);
}) : n(e.all);
};
s.prototype.onRootViewReg = function(t, e) {
void 0 !== e.proxies && this._viewProxyMap.set(t, e.proxies);
};
s.prototype.onPartViewReg = function(t, e) {
this._partViewDataMap.set(t, new o(t, e.name));
void 0 !== e.proxies && this._viewProxyMap.set(t, e.proxies);
};
s.prototype.onCompViewReg = function(t, e) {
void 0 !== e.implements && this._viewImplMap.set(t, e.implements);
void 0 !== e.proxies && this._viewProxyMap.set(t, e.proxies);
};
s.prototype.onCustomViewReg = function(t, e) {
void 0 !== e.proxies && this._viewProxyMap.set(t, e.proxies);
};
s.prototype.onViewPreSelect = function(t) {
var e, i;
this._viewSelectDatas.clear();
this._viewSelectDatasFuzzy.clear();
this._partViewSelectDataMap.clear();
this._elementViewSelectMap.clear();
this._elementBaseViewSelectMap.clear();
try {
for (var n = __values(t), o = n.next(); !o.done; o = n.next()) {
var r = o.value;
this._updateViewBySelectID(r);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
o && !o.done && (i = n.return) && i.call(n);
} finally {
if (e) throw e.error;
}
}
};
s.prototype.onViewUpdateSelect = function(t) {
var e, i;
try {
for (var n = __values(t), o = n.next(); !o.done; o = n.next()) {
var r = o.value;
this._updateViewBySelectID(r, !0);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
o && !o.done && (i = n.return) && i.call(n);
} finally {
if (e) throw e.error;
}
}
};
s.prototype.extensionFguiComp = function(e) {
e = (e = e.split("/").pop()).split(":").pop();
var i = this._extendFguiMap.get(e);
i && Object.keys(i).forEach(function(n) {
var o = "ui://".concat(e, "/").concat(n);
fgui.UIObjectFactory.setExtension(o, t.IOCPool.global.reg.getType(i[n]));
});
};
s.prototype._initElementView = function(e, i, n, o) {
if (t.Adapt.DEBUG && n.rootViewName && n.baseViewName) console.error(n, "Please do not have rootViewName and baseViewName at the same time."); else if (o) {
var r = this._elementBaseViewSelectMap.get(e);
if (void 0 === r) {
r = [];
this._elementBaseViewSelectMap.set(e, r);
}
r.push(new Map([ [ i.typeID, n.name ] ]));
} else {
var s = this._elementViewSelectMap.get(e);
if (void 0 === s) {
s = [];
this._elementViewSelectMap.set(e, s);
}
s.push(new Map([ [ i.typeID, n.name ] ]));
}
};
s.prototype._updateViewBySelectID = function(e, i) {
var n, o, r, s, a, l, h, c, u, p, d = this;
void 0 === i && (i = !1);
if (null != e) {
var f = this.getImplByIntf(t.IObjectPool), _ = this.getImplByIntf(t.ISuperPool), g = this._getViewDataByID(e);
if (void 0 !== g) try {
for (var y = __values(g), m = y.next(); !m.done; m = y.next()) {
var v = m.value;
if (null != (k = t.AssetTool.getAssetName(v.name))) if (!this._viewSelectDatas.has(v.name) || i) {
this._viewSelectDatas.set(v.name, v);
this._viewSelectDatasFuzzy.has(k.name) || this._viewSelectDatasFuzzy.set(k.name, v);
} else t.Adapt.DEBUG && console.error("[ViewPool] onViewSelect view name ".concat(v.name, " already exists"));
}
} catch (t) {
n = {
error: t
};
} finally {
try {
m && !m.done && (o = y.return) && o.call(y);
} finally {
if (n) throw n.error;
}
} else {
var b = this._partViewDataMap.get(e);
if (void 0 !== b) {
if (null == (k = t.AssetTool.getAssetName(b.name))) return;
var w = this._partViewSelectDataMap.get(k.name);
if (void 0 === w) {
w = [];
this._partViewSelectDataMap.set(k.name, w);
}
w.push(b);
}
var S = this._elementViewMap.get(e);
if (void 0 !== S) try {
for (var I = __values(S.mapping), C = I.next(); !C.done; C = I.next()) {
var P = C.value, x = P.rootViewName, k = void 0;
if (null != x) {
if (null == (k = t.AssetTool.getAssetName(x))) continue;
this._initElementView(x, S, P, !1);
} else {
var T = P.baseViewName;
if (null == T ? void 0 : T.length) try {
for (var O = (a = void 0, __values(P.baseViewName)), A = O.next(); !A.done; A = O.next()) {
var B = A.value;
this._initElementView(B, S, P, !0);
}
} catch (t) {
a = {
error: t
};
} finally {
try {
A && !A.done && (l = O.return) && l.call(O);
} finally {
if (a) throw a.error;
}
}
}
}
} catch (t) {
r = {
error: t
};
} finally {
try {
C && !C.done && (s = I.return) && s.call(I);
} finally {
if (r) throw r.error;
}
}
}
var D = t.IOCPool.global.reg.getType(e);
if (void 0 !== D) {
var M = [], E = [];
_.forEachSuperID(e, function(t) {
var e = d._viewImplMap.get(t);
void 0 !== e && M.push.apply(M, __spreadArray([], __read(e), !1));
var i = d._viewProxyMap.get(t);
void 0 !== i && E.push.apply(E, __spreadArray([], __read(i), !1));
});
M.length > 0 && (i ? (h = f.implPool).updateImpl.apply(h, __spreadArray([ D ], __read(M), !1)) : (c = f.implPool).regImpl.apply(c, __spreadArray([ D ], __read(M), !1)));
E.length > 0 && (i ? (u = f.implPoolProxy).updateProxy.apply(u, __spreadArray([ D ], __read(E), !1)) : (p = f.implPoolProxy).regProxy.apply(p, __spreadArray([ D ], __read(E), !1)));
} else t.Adapt.DEBUG && console.error("[ViewPool] onViewSelect selectID ".concat(e, " invalid"));
}
};
s.prototype.setViewRoot = function(e, i) {
if (void 0 === this._viewRoot) {
this._viewRoot = e;
this._viewNodeMap = i;
} else t.Adapt.DEBUG && console.error("[ViewPool] setViewRoot view root already exists");
};
s.prototype.getViewRoot = function(e) {
if (void 0 === this._viewNodeMap) {
t.Adapt.DEBUG && console.error("[ViewPool] getViewRoot need setViewRoot first");
return null;
}
var i = this._viewNodeMap[e];
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[ViewPool] getViewRoot viewOrder ".concat(e, " invalid"));
return null;
}
return i;
};
s.prototype.createView = function(e) {
for (var i, n = [], o = 1; o < arguments.length; o++) n[o - 1] = arguments[o];
var r = this._getViewSelectData(e);
if (null == r) return null;
var s = t.AssetTool.getAssetName(e), a = null, l = r.fguiPackage;
if ((null == l ? void 0 : l.length) && !(null == (a = t.AssetTool.createFguiObj(r.getPackage(), null !== (i = r.getSkin()) && void 0 !== i ? i : s.name)) ? void 0 : a.ui)) {
t.Adapt.DEBUG && console.error("[ViewPool] createView fgui is null, path: ", l[l.length - 1]);
return null;
}
var h = this._createView.apply(this, __spreadArray([ r, a ], __read(n), !1));
if (null == h) {
t.Adapt.DEBUG && console.error("[ViewPool] createView viewName ".concat(r.name, " create failed"));
return null;
}
return h.gComponent;
};
s.prototype.openView = function(e) {
for (var i, n, o, r = [], s = 1; s < arguments.length; s++) r[s - 1] = arguments[s];
var a = this._getViewSelectData(e);
if (null == a) return !1;
var l = t.AssetTool.getAssetName(e), h = null !== (i = a.order) && void 0 !== i ? i : t.ViewOrder.Pop;
if (a.fguiPackage) {
if (!window.fgui) {
t.Adapt.DEBUG && console.error("[ViewPool] openView viewName ".concat(e, " fail, because fgui lib is not defined"));
return !1;
}
return a.loadAssets ? this._openFguiViewWithLoad.apply(this, __spreadArray([ a, l, h ], __read(r), !1)) : this._openFguiView.apply(this, __spreadArray([ a, l, h ], __read(r), !1));
}
return a.loadAssets ? this._openViewWithLoad.apply(this, __spreadArray([ e, null !== (n = a.order) && void 0 !== n ? n : t.ViewOrder.Pop ], __read(r), !1)) : this._openView.apply(this, __spreadArray([ a, null !== (o = a.order) && void 0 !== o ? o : t.ViewOrder.Pop ], __read(r), !1));
};
s.prototype._openFguiViewWithLoad = function(e, i, n) {
for (var o = this, r = [], s = 3; s < arguments.length; s++) r[s - 3] = arguments[s];
var a = function() {
o._openFguiView.apply(o, __spreadArray([ e, i, n ], __read(r), !1));
};
return t.AssetTool.loadBundleAssetDir(i.bundleName, e.loadAssets, a, e.showProgress);
};
s.prototype._openFguiView = function(e, i, n) {
for (var o, r, s = this, a = [], l = 3; l < arguments.length; l++) a[l - 3] = arguments[l];
var h = function(t) {
var i = t.ui, o = t.data, r = s._preOpenView(e, n);
return null != r && s._postOpenView(e, n, s._createView.apply(s, __spreadArray([ e, {
ui: i,
data: o
} ], __read(a), !1)), r.viewNode, r.views, {
ui: i,
data: o
});
}, c = t.AssetTool.checkLoadFgui(e.fguiPackage, i.bundleName);
if (c && c.length > 0) t.AssetTool.loadFguiArrayAsync(e.fguiPackage, null !== (o = e.getSkin()) && void 0 !== o ? o : i.name, void 0, i.bundleName, !0, this._extensionFgui.bind(this, e), c, e.getPackage()).then(h); else {
var u = t.AssetTool.loadFgui(e.fguiPackage, null !== (r = e.getSkin()) && void 0 !== r ? r : i.name, void 0, i.bundleName, !0, this._extensionFgui.bind(this, e), e.getPackage());
if (!(null == u ? void 0 : u.ui)) {
t.Adapt.DEBUG && console.error("[ViewPool] createView fgui is null, path: ", e.fguiPackage[e.fguiPackage.length - 1]);
return null;
}
h(u);
}
return !0;
};
s.prototype.openViewWithOrder = function(e, i) {
for (var n = [], o = 2; o < arguments.length; o++) n[o - 2] = arguments[o];
var r = this._getViewSelectData(e);
if (null == r) return !1;
var s = t.AssetTool.getAssetName(e);
if (r.fguiPackage) {
if (!window.fgui) {
t.Adapt.DEBUG && console.error("[ViewPool] openView viewName ".concat(e, " fail, because fgui lib is not defined"));
return !1;
}
return r.loadAssets ? this._openFguiViewWithLoad.apply(this, __spreadArray([ r, s, i ], __read(n), !1)) : this._openFguiView.apply(this, __spreadArray([ r, s, i ], __read(n), !1));
}
return r.loadAssets ? this._openViewWithLoad.apply(this, __spreadArray([ e, i ], __read(n), !1)) : this._openView.apply(this, __spreadArray([ r, i ], __read(n), !1));
};
s.prototype.closeView = function(t) {
this._closeView(t, !0);
};
s.prototype.closeAllView = function(t) {
void 0 !== t ? this._closeAllViewWithOrder(t) : this._closeAllView();
};
s.prototype.addViewObj = function(e) {
var i = t.IOCPool.global.reg.getObjTypeID(e);
if (e.iocGID != t.IOCGID.InvalidID && void 0 !== i) {
this.doProxy(t.SViewPreEvent, function(t) {
t.onViewPreAdd(i, e.iocGID);
});
this.doProxy(t.SViewEvent, function(t) {
t.onViewAdd(i, e.iocGID);
});
} else t.Adapt.DEBUG && console.error("[ViewPool] addViewObj object ".concat(e.constructor.name, " invalid"));
};
s.prototype.removeViewObj = function(e) {
var i, n, o = t.IOCPool.global.reg.getObjTypeID(e);
if (e.iocGID != t.IOCGID.InvalidID && void 0 !== o) {
this.doProxy(t.SViewPreEvent, function(t) {
t.onViewPreRemove(o, e.iocGID);
});
this.doProxy(t.SViewEvent, function(t) {
t.onViewRemove(o, e.iocGID);
});
var r = this._getViewDataByID(o);
if (void 0 !== r) {
var s = function(i) {
var n = t.AssetTool.getAssetName(i.name);
if (null == n) return "continue";
var o = a._viewsMap.get(i.name);
if (void 0 !== o) {
o.delete(e.iocGID);
o.size < 1 && a._viewsMap.delete(i.name);
}
i.isRemoveLoadAssets && (i.releaseDirArr && i.releaseDirArr.length ? i.releaseDirArr.forEach(function(e) {
t.AssetTool.unloadAssets(e.includes(":") ? e : n.bundleName, e);
}) : i.loadAssets && t.AssetTool.unloadAssets(n.bundleName, i.loadAssets));
}, a = this;
try {
for (var l = __values(r), h = l.next(); !h.done; h = l.next()) s(h.value);
} catch (t) {
i = {
error: t
};
} finally {
try {
h && !h.done && (n = l.return) && n.call(l);
} finally {
if (i) throw i.error;
}
}
}
} else t.Adapt.DEBUG && console.error("[ViewPool] removeViewObj object ".concat(e.constructor.name, " invalid"));
};
s.prototype.selectSkin = function(e, i) {
var n = this._getViewSelectData(e);
null != n && (n.setSkin(i) || t.Adapt.DEBUG && console.error("[ViewPool] selectSkin viewName ".concat(n.name, " data error")));
};
s.prototype.getSkins = function(t) {
var e = this._getViewSelectData(t);
return null == e ? null : e.getSkins();
};
s.prototype.selectPackage = function(e, i) {
var n = this._getViewSelectData(e);
null != n && (n.setPackage(i) || t.Adapt.DEBUG && console.error("[ViewPool] selectPackage viewName ".concat(n.name, " data error")));
};
s.prototype.getPackage = function(t) {
var e = this._getViewSelectData(t);
return null == e ? null : e.getPackage();
};
s.prototype.attachView = function(t) {
var e = this._getViewSelectData(t);
if (null != e) {
null != e.order && !0 === e.mask && this.maskViewNode(e.order, !0);
return this._detachViews.delete(e.name);
}
return !1;
};
s.prototype.detachView = function(t) {
var e = this._getViewSelectData(t);
if (null != e) {
e.order && e.mask && this.maskViewNode(e.order, !1);
this._detachViews.add(e.name);
}
};
s.prototype.stashPushAllView = function() {
var e, i, n, o, r = new Map();
try {
for (var s = __values(this._viewsMap), a = s.next(); !a.done; a = s.next()) {
var l = __read(a.value, 2), h = l[0], c = l[1];
if (!this._detachViews.has(h)) {
var u = new Map();
try {
for (var p = (n = void 0, __values(c)), d = p.next(); !d.done; d = p.next()) {
var f = __read(d.value, 2), _ = f[0], g = f[1], y = t.IOCPool.global.findObj(_);
if (void 0 !== y) {
y.node.removeFromParent();
u.set(_, g);
} else t.Adapt.DEBUG && console.error("[ViewPool] stashPushAllView viewName ".concat(h, " error"));
}
} catch (t) {
n = {
error: t
};
} finally {
try {
d && !d.done && (o = p.return) && o.call(p);
} finally {
if (n) throw n.error;
}
}
this._viewsMap.delete(h);
r.set(h, u);
}
}
} catch (t) {
e = {
error: t
};
} finally {
try {
a && !a.done && (i = s.return) && i.call(s);
} finally {
if (e) throw e.error;
}
}
this._stashViewMapStack.push(r);
};
s.prototype.stashPopAllView = function() {
var e, i, n, o, r = this._stashViewMapStack.pop();
if (void 0 !== r) try {
for (var s = __values(r), a = s.next(); !a.done; a = s.next()) {
var l = __read(a.value, 2), h = l[0], c = l[1], u = this._getViewSelectData(h);
if (null != u) try {
for (var p = (n = void 0, __values(c)), d = p.next(); !d.done; d = p.next()) {
var f = __read(d.value, 2), _ = f[0], g = f[1], y = t.IOCPool.global.findObj(_);
if (void 0 !== y) {
var m = this._preOpenView(u, g);
null != m ? this._postOpenView(u, g, y, m.viewNode, m.views) : t.Adapt.DEBUG && console.error("[ViewPool] stashPopAllView viewName ".concat(h, " failed"));
} else t.Adapt.DEBUG && console.error("[ViewPool] stashPopAllView viewName ".concat(h, " error"));
}
} catch (t) {
n = {
error: t
};
} finally {
try {
d && !d.done && (o = p.return) && o.call(p);
} finally {
if (n) throw n.error;
}
}
}
} catch (t) {
e = {
error: t
};
} finally {
try {
a && !a.done && (i = s.return) && i.call(s);
} finally {
if (e) throw e.error;
}
}
};
s.prototype.clearFullScreen = function(e) {
var i, n, o = this._getViewDataByID(e);
if (null != o) try {
for (var r = __values(o), s = r.next(); !s.done; s = r.next()) {
var a = s.value.name;
if (a && null != t.AssetTool.getAssetName(a) && void 0 !== this._viewsMap.get(a)) {
var l = this._getViewSelectData(a);
l && l.order && l.mask && this.maskViewNode(l.order, !1);
}
}
} catch (t) {
i = {
error: t
};
} finally {
try {
s && !s.done && (n = r.return) && n.call(r);
} finally {
if (i) throw i.error;
}
}
};
s.prototype.isExistView = function(e) {
return !(null == t.AssetTool.getAssetName(e) || !this._detachViews.has(e) && !this._viewsMap.has(e));
};
s.prototype.isRegisterView = function(e) {
var i;
if (e.includes("@")) {
if (!(i = this._viewSelectDatas.get(e))) {
var n = t.AssetTool.getAssetName(e);
if (null == n) return !1;
i = this._viewSelectDatasFuzzy.get(n.name);
}
} else i = this._viewSelectDatasFuzzy.get(e);
return null != i;
};
s.prototype._openViewWithLoad = function(e, i) {
for (var n, o, r, s = this, a = [], l = 2; l < arguments.length; l++) a[l - 2] = arguments[l];
var h = this._getViewSelectData(e);
if (null == h) return !1;
i = null !== (n = null != i ? i : h.order) && void 0 !== n ? n : t.ViewOrder.Pop;
var c = this._preOpenView(h, i), u = this._preCreateView(h);
if (null == c || null == u) return !1;
var p = null !== (o = this._asyncOpenMap.get(e)) && void 0 !== o ? o : 0;
if ((null === (r = h.multiple) || void 0 === r || !r) && p > 0) return !1;
this.addAsyncOpenMap(e);
var d = function() {
return s._openView.apply(s, __spreadArray([ h, i ], __read(a), !1));
};
return t.AssetTool.loadBundleAssetDir(u.bundleName, h.loadAssets, d, h.showProgress);
};
s.prototype._preCreateView = function(e) {
var i = e.getSkin();
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[ViewPool] preCreateView view name ".concat(e.name, " skin invalid"));
return null;
}
var n = t.AssetTool.getAssetName(e.name);
if (null == n) return null;
var o = t.IOCPool.global.reg.getType(e.typeID);
if (void 0 === o) {
t.Adapt.DEBUG && console.error("[ViewPool] preCreateView view name ".concat(e.name, " error"));
return null;
}
return {
skin: i,
bundleName: n.bundleName,
type: o
};
};
s.prototype._postCreateView = function(e, i, n) {
for (var o, r, s, a, l, h, c, u, p, d, f, _, g = this, y = [], m = 3; m < arguments.length; m++) y[m - 3] = arguments[m];
if (null == i) return null;
f = (d = i.ui.node).addComponent(n);
i.data && y.push(i.data);
_ = !0;
e.adaptNotch && this.adaptNotchUI(i.ui, f);
f.onCreate.apply(f, __spreadArray([], __read(y), !1));
this._openingViewMap.set(e.name, f);
var v = t.AssetTool.getAssetName(e.name);
if (null == v) return f;
var b = this._partViewSelectDataMap.get(v.name);
if (void 0 !== b) try {
for (var w = __values(b), S = w.next(); !S.done; S = w.next()) {
var I = S.value, C = t.IOCPool.global.reg.getType(I.typeID);
if (void 0 !== C) {
var P = d.addComponent(C);
P.onCreate.apply(P, __spreadArray([], __read(y), !1));
} else t.Adapt.DEBUG && console.error("[ViewPool] postCreateView part view name ".concat(I.name, " error"));
}
} catch (t) {
o = {
error: t
};
} finally {
try {
S && !S.done && (r = w.return) && r.call(w);
} finally {
if (o) throw o.error;
}
}
var x = function(t, e) {
return e ? g._getChildByBaseName(t, _, i, d) : g._getChildByName(t, _, i, d);
}, k = this._getElementDatas(e.name);
if (null != k && k.length > 0) try {
for (var T = __values(k), O = T.next(); !O.done; O = T.next()) {
var A = O.value, B = A.data, D = A.isBaseView;
try {
for (var M = (l = void 0, __values(B)), E = M.next(); !E.done; E = M.next()) {
var j = E.value;
try {
for (var L = (c = void 0, __values(j.keys())), R = L.next(); !R.done; R = L.next()) {
var N = R.value, z = t.IOCPool.global.reg.getType(N);
if (void 0 !== z) {
var F = j.get(N);
if (F) {
var V = null === (p = x(F, D)) || void 0 === p ? void 0 : p.addComponent(z);
null == V || V.onCreate.apply(V, __spreadArray([ f ], __read(y), !1));
}
} else t.Adapt.DEBUG && console.error("[ViewPool] elementView name ".concat(j.get(N), " error"));
}
} catch (t) {
c = {
error: t
};
} finally {
try {
R && !R.done && (u = L.return) && u.call(L);
} finally {
if (c) throw c.error;
}
}
}
} catch (t) {
l = {
error: t
};
} finally {
try {
E && !E.done && (h = M.return) && h.call(M);
} finally {
if (l) throw l.error;
}
}
}
} catch (t) {
s = {
error: t
};
} finally {
try {
O && !O.done && (a = T.return) && a.call(T);
} finally {
if (s) throw s.error;
}
}
return f;
};
s.prototype._getElementDatas = function(t) {
var e, i, n = [], o = this._elementViewSelectMap.get(t);
null != o && n.push({
data: o,
isBaseView: !1
});
var r = 0;
try {
for (var s = __values(this._elementBaseViewSelectMap), a = s.next(); !a.done; a = s.next()) {
var l = __read(a.value, 2), h = l[0], c = l[1];
if (t.includes(h)) {
r++;
n.push({
data: c,
isBaseView: !0
});
}
if (r > 1) {
console.error("name: ".concat(t, ", ElementView name filter is not one!!!"));
return;
}
}
} catch (t) {
e = {
error: t
};
} finally {
try {
a && !a.done && (i = s.return) && i.call(s);
} finally {
if (e) throw e.error;
}
}
return n;
};
s.prototype._getDeepFguiChildByName = function(t, e) {
var i, n, o, r, s, a, l, h = e, c = t.split("/"), u = h._children;
try {
for (var p = __values(u), d = p.next(); !d.done; d = p.next()) if ((l = d.value) && l instanceof fgui.GComponent) try {
for (var f = (o = void 0, __values(c)), _ = f.next(); !_.done; _ = f.next()) {
var g = _.value;
if ((null == l ? void 0 : l.name) == g) {
if (1 == c.length) return l;
c.splice(t.indexOf(g), 1);
t = c.join("/");
return this._getDeepFguiChildByName(t, l);
}
l = null === (s = null == l ? void 0 : l.getChild) || void 0 === s ? void 0 : s.call(l, g);
console.log(g + ": " + (null == l ? void 0 : l.name));
if (!l || !(null === (a = null == l ? void 0 : l._children) || void 0 === a ? void 0 : a.length)) break;
if (1 == c.length) return l;
c.splice(t.indexOf(g), 1);
t = c.join("/");
return this._getDeepFguiChildByName(t, l);
}
} catch (t) {
o = {
error: t
};
} finally {
try {
_ && !_.done && (r = f.return) && r.call(f);
} finally {
if (o) throw o.error;
}
}
} catch (t) {
i = {
error: t
};
} finally {
try {
d && !d.done && (n = p.return) && n.call(p);
} finally {
if (i) throw i.error;
}
}
return l;
};
s.prototype._getFguiChildByName = function(t, e) {
var i, n, o;
if (e.name == t) return e;
if (!(null === (o = null == e ? void 0 : e._children) || void 0 === o ? void 0 : o.length)) return null;
try {
for (var r = __values(e._children), s = r.next(); !s.done; s = r.next()) {
var a = s.value, l = this._getFguiChildByName(t, null == a ? void 0 : a.asCom);
if (null != l) return l;
}
} catch (t) {
i = {
error: t
};
} finally {
try {
s && !s.done && (n = r.return) && n.call(r);
} finally {
if (i) throw i.error;
}
}
return null;
};
s.prototype._getChildByBaseName = function(t, e, i, n) {
var o, r, s;
if (e) if ("SELF" == t) s = i.ui.node; else {
if (!t.includes("/")) return null === (r = this._getFguiChildByName(t, i.ui)) || void 0 === r ? void 0 : r.node;
s = null === (o = this._getDeepFguiChildByName(t, i.ui)) || void 0 === o ? void 0 : o.node;
} else s = cc.find(t, n);
return s;
};
s.prototype._getChildByName = function(t, e, i, n) {
var o, r, s;
if (e) {
var a = i.ui;
if ("SELF" == t) return a.node;
var l = t.split("/");
try {
for (var h = __values(l), c = h.next(); !c.done; c = h.next()) {
var u = c.value;
a = null == a ? void 0 : a.getChild(u);
}
} catch (t) {
o = {
error: t
};
} finally {
try {
c && !c.done && (r = h.return) && r.call(h);
} finally {
if (o) throw o.error;
}
}
s = null == a ? void 0 : a.node;
} else s = cc.find(t, n);
return s;
};
s.prototype._createView = function(t, e) {
for (var i = [], n = 2; n < arguments.length; n++) i[n - 2] = arguments[n];
var o = this._preCreateView(t);
return null == o ? null : this._postCreateView.apply(this, __spreadArray([ t, e, o.type ], __read(i), !1));
};
s.prototype._preOpenView = function(e, i) {
var n;
if (null == t.AssetTool.getAssetName(e.name)) return null;
var o = this._viewsMap.get(e.name);
if (void 0 === o) {
o = new Map();
this._viewsMap.set(e.name, o);
}
return (null === (n = e.multiple) || void 0 === n || !n) && o.size > 0 ? null : {
viewNode: this.getViewRoot(i),
views: o
};
};
s.prototype._postOpenView = function(e, i, n, o, r, s) {
if (null == n) {
t.Adapt.DEBUG && console.error("[ViewPool] postOpenView viewName ".concat(e.name, " create failed"));
return !1;
}
var a = o, l = s.ui;
if (!l) return !1;
a.addChild(l);
n.onShow();
e.order && e.mask && this.maskViewNode(e.order, !0);
if (n.iocGID == t.IOCGID.InvalidID) {
t.Adapt.DEBUG && console.error("[ViewPool] postOpenView viewName ".concat(e.name, " invalid iocGID"));
return !1;
}
r.set(n.iocGID, i);
return !0;
};
s.prototype._openView = function(t, e) {
for (var i = [], n = 2; n < arguments.length; n++) i[n - 2] = arguments[n];
var o = this._preOpenView(t, e);
return null != o && this._postOpenView(t, e, this._createView.apply(this, __spreadArray([ t, null ], __read(i), !1)), o.viewNode, o.views);
};
s.prototype._extensionFgui = function(t) {
var e, i = this;
(null === (e = null == t ? void 0 : t.fguiPackage) || void 0 === e ? void 0 : e.length) > 0 && t.fguiPackage.forEach(function(t) {
i.extensionFguiComp(t);
});
};
s.prototype._closeView = function(e, i) {
var n, o;
if (null != t.AssetTool.getAssetName(e) && (i || !this._detachViews.has(e))) {
var r = this._viewsMap.get(e);
if (void 0 !== r) {
var s = this._getViewSelectData(e);
s && s.order && s.mask && this.maskViewNode(s.order, !1);
try {
for (var a = __values(r), l = a.next(); !l.done; l = a.next()) {
var h = __read(l.value, 1)[0], c = t.IOCPool.global.findObj(h);
if (void 0 !== c) {
c.close();
this._openingViewMap.delete(e);
} else t.Adapt.DEBUG && console.error("[ViewPool] closeView viewName ".concat(e, " error"));
}
} catch (t) {
n = {
error: t
};
} finally {
try {
l && !l.done && (o = a.return) && o.call(a);
} finally {
if (n) throw n.error;
}
}
this._viewsMap.delete(e);
}
}
};
s.prototype._closeAllView = function() {
var e, i, n, o;
try {
for (var r = __values(this._viewsMap), s = r.next(); !s.done; s = r.next()) {
var a = __read(s.value, 2), l = a[0], h = a[1];
if (!this._detachViews.has(l)) {
try {
for (var c = (n = void 0, __values(h)), u = c.next(); !u.done; u = c.next()) {
var p = __read(u.value, 1)[0], d = t.IOCPool.global.findObj(p);
if (void 0 !== d) {
var f = this._getViewSelectData(l);
f && f.order && f.mask && this.maskViewNode(f.order, !1);
d.close();
} else t.Adapt.DEBUG && console.error("[ViewPool] closeAllView viewName ".concat(l, " error"));
}
} catch (t) {
n = {
error: t
};
} finally {
try {
u && !u.done && (o = c.return) && o.call(c);
} finally {
if (n) throw n.error;
}
}
this._viewsMap.delete(l);
}
}
} catch (t) {
e = {
error: t
};
} finally {
try {
s && !s.done && (i = r.return) && i.call(r);
} finally {
if (e) throw e.error;
}
}
};
s.prototype._closeAllViewWithOrder = function(e) {
var i, n, o, r;
try {
for (var s = __values(this._viewsMap), a = s.next(); !a.done; a = s.next()) {
var l = __read(a.value, 2), h = l[0], c = l[1];
if (!this._detachViews.has(h)) {
try {
for (var u = (o = void 0, __values(c)), p = u.next(); !p.done; p = u.next()) {
var d = __read(p.value, 2), f = d[0];
if (d[1] == e) {
var _ = t.IOCPool.global.findObj(f);
if (void 0 !== _) {
var g = this._getViewSelectData(h);
g && g.order && g.mask && this.maskViewNode(g.order, !1);
_.close();
c.delete(f);
} else t.Adapt.DEBUG && console.error("[ViewPool] closeAllViewWithOrder viewName ".concat(h, " error"));
}
}
} catch (t) {
o = {
error: t
};
} finally {
try {
p && !p.done && (r = u.return) && r.call(u);
} finally {
if (o) throw o.error;
}
}
c.size < 1 && this._viewsMap.delete(h);
}
}
} catch (t) {
i = {
error: t
};
} finally {
try {
a && !a.done && (n = s.return) && n.call(s);
} finally {
if (i) throw i.error;
}
}
};
s.prototype.maskViewNode = function(e, i) {
for (var n, o = t.ViewOrder.Base; o <= t.ViewOrder.Top; ++o) {
if (!(o < e)) return;
var r = this.getViewRoot(o), s = null !== (n = this._rootMaskMap.get(o)) && void 0 !== n ? n : 0;
if ((s = i ? s + 1 : s - 1) > 0) r.alpha = 0; else {
s = 0;
r.alpha = 1;
}
this._rootMaskMap.set(o, s);
}
};
s.prototype.addAsyncOpenMap = function(t) {
var e, i = null !== (e = this._asyncOpenMap.get(t)) && void 0 !== e ? e : 0;
this._asyncOpenMap.set(t, i + 1);
};
s.prototype.subAsyncOpenMap = function(t) {
var e = this._asyncOpenMap.get(t);
null != e && (e > 1 ? this._asyncOpenMap.set(t, e - 1) : this._asyncOpenMap.delete(t));
};
s.prototype.adaptNotchUI = function(t, e) {
var i = fgui.GRoot.inst.width, n = fgui.GRoot.inst.height;
if (t.width == i && t.height == n) {
var o = !1;
null != t.hasNotchInScreen && "function" == typeof t.hasNotchInScreen ? o = t.hasNotchInScreen() : e && null != e.hasNotchInScreen && "function" == typeof e.hasNotchInScreen && (o = e.hasNotchInScreen());
o && t.setSize(fgui.GRoot.inst.width - 160, fgui.GRoot.inst.height);
}
};
s.MaxViewCacheNumber = 10;
return __decorate([ t.Support.Implement(t.IViewPool), t.Support.Proxy(t.SViewRegEvent, t.SRootViewRegEvent, t.SPartViewRegEvent, t.SCompViewRegEvent, t.SCustomViewRegEvent, t.SViewPreSelectEvent, t.SElementViewRegEvent, t.SExtendFguiRegEvent) ], s);
}(t.FrameObject);
t.ViewPool = s;
})(qg || (qg = {}));

(function(t) {
var e = function() {
function e() {}
return __decorate([ t.Support.Interface ], e);
}();
t.ICellCtrl = e;
var i = function(i) {
__extends(n, i);
function n() {
var t = null !== i && i.apply(this, arguments) || this;
t._moduleMap = new Map();
return t;
}
n.prototype.start = function(e, i) {
var n = t.IOCPool.global.reg.regType(e), o = this._moduleMap.get(n);
o ? o.push(i) : (o = []).push(i);
this._moduleMap.set(n, o);
this.checkLength(n);
};
n.prototype.removeCell = function(e, i) {
var n = t.IOCPool.global.reg.regType(e), o = this._moduleMap.get(n), r = null == o ? void 0 : o.indexOf(i);
if (void 0 !== r && -1 !== r) {
null == o || o.splice(r, 1);
o && this._moduleMap.set(n, o);
}
this.checkLength(n);
};
n.prototype.resetAllCell = function() {
this._moduleMap.forEach(function(t) {
null == t || t.forEach(function(t) {
t.stop();
});
});
};
n.prototype.removeCellByModule = function(e) {
var i = t.IOCPool.global.reg.regType(e), n = this._moduleMap.get(i);
null == n || n.forEach(function(t) {
t.stop();
});
this._moduleMap.delete(i);
};
n.prototype.dtor = function() {
this.resetAllCell();
i.prototype.dtor.call(this);
};
n.prototype.checkLength = function(t) {
var e;
0 === (null === (e = this._moduleMap.get(t)) || void 0 === e ? void 0 : e.length) && this._moduleMap.delete(t);
};
return __decorate([ t.Support.Implement(e) ], n);
}(t.FrameObject);
t.CellCtrl = i;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._funcSelectMap = new Map();
t._funcID = 0;
return t;
}
i.prototype.regFunctionSelect = function(e, i, n) {
var o = this.pushFuncInfo(e, i, n);
this.doProxy(t.SFunctionRegEvent, function(t) {
t.onFunctionReg(o, n);
});
};
i.prototype.onFuncSelect = function(t) {
var e, i;
try {
for (var n = __values(t), o = n.next(); !o.done; o = n.next()) {
var r = o.value, s = this._funcSelectMap.get(r);
s && (s.class.prototype[s.target] = s.property.value);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
o && !o.done && (i = n.return) && i.call(n);
} finally {
if (e) throw e.error;
}
}
};
i.prototype.getNewFuncID = function() {
return ++this._funcID;
};
i.prototype.pushFuncInfo = function(t, e, i) {
var n = this.getNewFuncID();
this._funcSelectMap.set(n, {
class: t,
property: e,
target: i.targetFunc
});
return n;
};
return __decorate([ t.Support.Implement(t.IFunctionSelectCtrl), t.Support.Proxy(t.SFuncSelectEvent) ], i);
}(t.FrameObject);
t.FunctionSelectCtrl = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._dispatcherMap = new Map();
return t;
}
i.prototype.ctor = function() {
e.prototype.ctor.call(this);
t.Adapt.SDK.setListener(this._onSDKCallback.bind(this));
};
i.prototype.callSDK = function(e, i, n) {
t.Adapt.SDK.callSDK(e, i, n);
};
i.prototype.addListener = function(e, i, n) {
var o = this._dispatcherMap.get(e);
if (void 0 === o) {
o = new t.Dispatcher();
this._dispatcherMap.set(e, o);
}
o.addListener(i, n);
};
i.prototype.removeListener = function(t, e) {
this.removeListenerByID(t, e.iocGID);
};
i.prototype.removeListenerByID = function(t, e) {
var i = this._dispatcherMap.get(t);
if (void 0 !== i) {
i.removeListenerByID(e);
i.listenerCount < 1 && this._dispatcherMap.delete(t);
}
};
i.prototype._onSDKCallback = function(e, i) {
t.Adapt.DEBUG && console.info("[ISDKCtrl] SDK callback code: ".concat(e, " -- info: ").concat(i));
console.info("[ISDKCtrl] SDK callback code: ".concat(e, " -- info: ").concat(i));
var n = this._dispatcherMap.get(e);
void 0 !== n && n.dispatch(e, i);
};
return __decorate([ t.Support.Implement(t.ISDKCtrl) ], i);
}(t.FrameObject);
t.SDKCtrl = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._oldCacheMap = new Map();
t._newCacheMap = new Map();
return t;
}
n = i;
i.prototype.ctor = function() {
e.prototype.ctor.call(this);
if (t.Adapt.JSB) {
var i = t.Adapt.fileUtils;
i.isDirectoryExist(n.CacheDir) || i.createDirectory(n.CacheDir);
}
};
i.prototype.setItem = function(e, i) {
if (i) if (t.Adapt.JSB) {
if (!this._setCache(e, i)) return;
t.Adapt.fileUtils.writeStringToFile(i, n.CacheDir + e);
} else try {
t.Adapt.localStorage.setItem(e, i);
} catch (e) {
if (e instanceof DOMException && ("QuotaExceededError" === e.name || "NS_ERROR_DOM_QUOTA_REACHED" === e.name) && null != t.StorageTool.setErrorCallback) {
t.StorageTool.removeAllItem();
t.StorageTool.setErrorCallback(e);
}
}
};
i.prototype.getItem = function(e) {
if (t.Adapt.JSB) {
var i = this._getCache(e);
return null != i ? i : (i = t.Adapt.fileUtils.getStringFromFile(n.CacheDir + e)) || null;
}
return t.Adapt.localStorage.getItem(e);
};
i.prototype.removeItem = function(e) {
if (t.Adapt.JSB) {
this._newCacheMap.delete(e);
this._oldCacheMap.delete(e);
t.Adapt.fileUtils.removeFile(n.CacheDir + e);
} else t.Adapt.localStorage.removeItem(e);
};
i.prototype.removeAllItem = function() {
if (t.Adapt.JSB) {
this._newCacheMap.clear();
this._oldCacheMap.clear();
var e = t.Adapt.fileUtils;
e.removeDirectory(n.CacheDir);
e.createDirectory(n.CacheDir);
} else t.Adapt.localStorage.clear();
};
i.prototype._setCache = function(t, e) {
if (this._newCacheMap.size >= n.MaxCacheNumber) {
var i = this._oldCacheMap;
i.clear();
this._oldCacheMap = this._newCacheMap;
this._newCacheMap = i;
}
var o = this._newCacheMap.get(t);
if (void 0 !== o && o == e) return !1;
this._newCacheMap.set(t, e);
return !0;
};
i.prototype._getCache = function(t) {
var e = this._newCacheMap.get(t);
if (void 0 !== e) return e;
if (void 0 !== (e = this._oldCacheMap.get(t))) {
this._oldCacheMap.delete(t);
this._newCacheMap.set(t, e);
return e;
}
return null;
};
var n;
i.CacheDir = t.Adapt.JSB ? t.Adapt.fileUtils.getWritablePath() + "localCache/" : void 0;
i.MaxCacheNumber = 300;
return n = __decorate([ t.Support.Implement(t.IStorageCtrl) ], i);
}(t.FrameObject);
t.StorageCtrl = e;
})(qg || (qg = {}));

(function(t) {
var e = function(t, e) {
this.propertyName = t;
this.type = e;
}, i = function(i) {
__extends(n, i);
function n() {
var t = null !== i && i.apply(this, arguments) || this;
t._uiDatasMap = new Map();
return t;
}
n.prototype.onViewPreAdd = function(e, i) {
var n = this, o = t.IOCPool.global.findObj(i);
this.getImplByIntf(t.ISuperPool).forEachSuperID(e, function(e) {
var i = n._uiDatasMap.get(e);
void 0 !== i && o.node.walk(function(e) {
var n = i.get(e.name);
if (void 0 !== n) if (void 0 === n.type) Object.defineProperty(o, n.propertyName, {
value: e
}); else {
var r = e.getComponent(n.type);
null != r ? Object.defineProperty(o, n.propertyName, {
value: r
}) : t.Adapt.DEBUG && console.error("[UICtrl] initUIs ".concat(e.name, " not found component ").concat(n.type.name));
}
});
});
};
n.prototype.onViewPreRemove = function() {};
n.prototype.regUI = function(i, n, o) {
var r = t.IOCPool.global.reg.regType(i), s = this._uiDatasMap.get(r);
if (void 0 === s) {
s = new Map();
this._uiDatasMap.set(r, s);
}
s.set(o.name, new e(n, o.type));
};
return __decorate([ t.Support.Implement(t.IUICtrl), t.Support.Proxy(t.SViewPreEvent) ], n);
}(t.FrameObject);
t.UICtrl = i;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._uiNotifysMap = new Map();
t._dispatcherMap = new Map();
return t;
}
i.prototype.onViewPreAdd = function(e, i) {
var n, o, r = this, s = t.IOCPool.global.findObj(i), a = new Map();
this.getImplByIntf(t.ISuperPool).forEachSuperID(e, function(t) {
var e, i, n = r._uiNotifysMap.get(t);
if (void 0 !== n) try {
for (var o = __values(n), s = o.next(); !s.done; s = o.next()) {
var l = __read(s.value, 2), h = l[0], c = l[1];
a.set(h, c);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
s && !s.done && (i = o.return) && i.call(o);
} finally {
if (e) throw e.error;
}
}
});
try {
for (var l = __values(a), h = l.next(); !h.done; h = l.next()) {
var c = __read(h.value, 2), u = c[0], p = c[1], d = this._dispatcherMap.get(u);
if (void 0 === d) {
d = new t.Dispatcher();
this._dispatcherMap.set(u, d);
}
d.addListener(s, p);
}
} catch (t) {
n = {
error: t
};
} finally {
try {
h && !h.done && (o = l.return) && o.call(l);
} finally {
if (n) throw n.error;
}
}
};
i.prototype.onViewPreRemove = function(e, i) {
var n = this, o = t.IOCPool.global.findObj(i);
this.getImplByIntf(t.ISuperPool).forEachSuperID(e, function(t) {
var e, i, r = n._uiNotifysMap.get(t);
if (void 0 !== r) try {
for (var s = __values(r), a = s.next(); !a.done; a = s.next()) {
var l = __read(a.value, 1)[0], h = n._dispatcherMap.get(l);
if (void 0 !== h) {
h.removeListener(o);
h.listenerCount < 1 && n._dispatcherMap.delete(l);
}
}
} catch (t) {
e = {
error: t
};
} finally {
try {
a && !a.done && (i = s.return) && i.call(s);
} finally {
if (e) throw e.error;
}
}
});
};
i.prototype.regUINotify = function(e, i, n) {
var o = t.IOCPool.global.reg.regType(e), r = this._uiNotifysMap.get(o);
if (void 0 === r) {
r = new Map();
this._uiNotifysMap.set(o, r);
}
var s = t.IOCPool.global.reg.regType(n);
r.has(s) ? t.Adapt.DEBUG && console.error("[UINotifyCtrl] regUINotify data type ".concat(n.name, " already registered in ").concat(e.name)) : r.set(s, i);
};
i.prototype.notifyUI = function(e, i) {
var n = t.IOCPool.global.reg.regType(e), o = this._dispatcherMap.get(n);
void 0 !== o && o.dispatch(i);
};
return __decorate([ t.Support.Implement(t.IUINotifyCtrl), t.Support.Proxy(t.SViewPreEvent) ], i);
}(t.FrameObject);
t.UINotifyCtrl = e;
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.init = function() {
this.initCrux();
this.initMain();
this.initCtrl();
};
i.prototype.initCrux = function() {
this.createImpl(t.ObjectPool);
this.createImpl(t.SuperPool);
this.createImpl(t.PluginPool);
};
i.prototype.initMain = function() {
this.createImpl(t.Launcher);
this.createImpl(t.Selector);
this.createImpl(t.LifeCycle);
this.createImpl(t.Dependent);
this.createImpl(t.DataPool);
this.createImpl(t.ModulePool);
this.createImpl(t.ViewPool);
this.createImpl(t.BundlePool);
};
i.prototype.initCtrl = function() {
this.createImpl(t.UICtrl);
this.createImpl(t.UINotifyCtrl);
this.createImpl(t.SDKCtrl);
this.createImpl(t.StorageCtrl);
this.createImpl(t.CellCtrl);
this.createImpl(t.FunctionSelectCtrl);
};
i.global = new i();
return i;
}(t.FrameObject);
t.FrameProcess = e;
})(qg || (qg = {}));

(function(t) {
(function(e) {
e.process = t.FrameProcess.global;
e.process.init();
e.Interface = function(i) {
e.process.getImplByIntf(t.IObjectPool).implPool.regIntf(i);
};
e.Subject = function(i) {
e.process.getImplByIntf(t.IObjectPool).implPoolProxy.regSubject(i);
};
e.Module = function(i) {
return function(n) {
e.process.getImplByIntf(t.IObjectPool).regModule(n, i);
};
};
e.View = function(i) {
return function(n) {
t.Adapt.ccclass()(n);
e.process.getImplByIntf(t.IObjectPool).regView(n, i);
};
};
e.RootView = function(i) {
return function(n) {
t.Adapt.ccclass()(n);
e.process.getImplByIntf(t.IObjectPool).regRootView(n, i);
};
};
e.PartView = function(i) {
return function(n) {
t.Adapt.ccclass()(n);
e.process.getImplByIntf(t.IObjectPool).regPartView(n, i);
};
};
e.CompView = function(i) {
return function(n) {
e.process.getImplByIntf(t.IObjectPool).regCompView(n, i);
};
};
e.CustomView = function(i) {
return function(n) {
t.Adapt.ccclass()(n);
e.process.getImplByIntf(t.IObjectPool).regCustomView(n, i);
};
};
e.ElementView = function(i) {
return function(n) {
t.Adapt.ccclass()(n);
e.process.getImplByIntf(t.IObjectPool).regElementView(n, i);
};
};
e.ExtendFgui2Cls = function(i) {
return function(n) {
e.process.getImplByIntf(t.IObjectPool).regExtendFgui2Cls(n, i);
};
};
e.Plugin = function(i) {
return function(n) {
e.process.getImplByIntf(t.IPluginPool).regPlugin(n, i);
};
};
e.Startup = function(i) {
e.process.getImplByIntf(t.ILauncher).regStartup(i);
};
e.Bundle = function(i) {
void 0 === i && (i = String(t.Adapt.AssetManager.BuiltinBundleName.RESOURCES));
return function(n) {
e.process.getImplByIntf(t.IBundlePool).regBundle(n, i);
};
};
e.ViewName = function(i) {
return function(n, o) {
e.process.getImplByIntf(t.IBundlePool).regViewName(n, o, i);
};
};
e.UI = function(i) {
return function(n, o) {
"string" == typeof i ? e.process.getImplByIntf(t.IUICtrl).regUI(n.constructor, o, {
name: i
}) : e.process.getImplByIntf(t.IUICtrl).regUI(n.constructor, o, i);
};
};
e.UINotify = function(i) {
return function(n, o, r) {
e.process.getImplByIntf(t.IUINotifyCtrl).regUINotify(n.constructor, r.value, i);
};
};
e.FuncSelect = function(i) {
return function(n, o, r) {
e.process.getImplByIntf(t.IFunctionSelectCtrl).regFunctionSelect(n.constructor, r, i);
};
};
if (t.Adapt.DEBUG) {
t.Debug.addDebugInfo("objectPool", e.process.getImplByIntf(t.IObjectPool));
t.Debug.addDebugInfo("pluginPool", e.process.getImplByIntf(t.IPluginPool));
}
})(t.Process || (t.Process = {}));
})(qg || (qg = {}));

(function(t) {
(function(e) {
e.Interface = t.Process.Interface;
e.Subject = t.Process.Subject;
e.Module = t.Process.Module;
e.View = t.Process.View;
e.RootView = t.Process.RootView;
e.PartView = t.Process.PartView;
e.CompView = t.Process.CompView;
e.CustomView = t.Process.CustomView;
e.ElementView = t.Process.ElementView;
e.ExtendFgui2Cls = t.Process.ExtendFgui2Cls;
e.Plugin = t.Process.Plugin;
e.Startup = t.Process.Startup;
e.Bundle = t.Process.Bundle;
e.ViewName = t.Process.ViewName;
e.UI = t.Process.UI;
e.UINotify = t.Process.UINotify;
e.FuncSelect = t.Process.FuncSelect;
e.DEBUG = !1;
})(t.Frame || (t.Frame = {}));
})(qg || (qg = {}));

(function(t) {
(function(e) {
var i = function(t) {
__extends(e, t);
function e(e) {
var i = t.call(this) || this;
i._host = e;
return i;
}
e.prototype.getHost = function() {
return this._host;
};
return e;
}(t.IOCObject);
e.PluginBase = i;
})(t.Frame || (t.Frame = {}));
})(qg || (qg = {}));

(function(t) {
var e = function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.getFrameImpl = function(e) {
var i = t.Support.context.createImplByIntf(e);
t.Adapt.DEBUG && null == i && console.error("[FramePlugin] getFrameImpl interface ".concat(e.name, " not implement"));
return i;
};
return i;
}(t.Frame.PluginBase);
t.FramePlugin = e;
})(qg || (qg = {}));

(function(t) {
(function(t) {
t.LaunchPlugin = function() {};
t.SelectorPlugin = function() {};
t.LifeCyclePlugin = function() {};
t.DataPlugin = function() {};
t.ViewRootPlugin = function() {};
t.ViewPlugin = function() {};
t.BundlePlugin = function() {};
t.UINotifyPlugin = function() {};
t.SDKCallPlugin = function() {};
t.AssetPlugin = function() {};
t.CellPlugin = function() {};
t.SchedulerPlugin = function() {};
})(t.Frame || (t.Frame = {}));
})(qg || (qg = {}));

(function(t) {
(function(e) {
var i = function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.dtor = function() {
t.Support.context.getImplByIntf(t.IDataPool).unbindAllData(this);
};
i.prototype.bindData = function(e, i) {
t.Support.context.getImplByIntf(t.IDataPool).bindData(this, e, i);
};
i.prototype.updateData = function(e) {
t.Support.context.getImplByIntf(t.IDataPool).updateData(this, e);
};
i.prototype.queryData = function(e) {
return t.Support.context.getImplByIntf(t.IDataPool).queryData(e);
};
return i;
}(t.IOCObject);
e.DataBase = i;
})(t.Frame || (t.Frame = {}));
})(qg || (qg = {}));

(function(t) {
(function(e) {
var i = function(i) {
__extends(n, i);
function n() {
var e = null !== i && i.apply(this, arguments) || this;
e.iocGID = t.IOCGID.InvalidID;
e._plugins = new Map();
return e;
}
n.prototype.ctor = function() {};
n.prototype.dtor = function() {
var e, i;
try {
for (var n = __values(this._plugins), o = n.next(); !o.done; o = n.next()) {
var r = __read(o.value, 2)[1];
r.dtor();
t.IOCPool.global.removeObj(r);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
o && !o.done && (i = n.return) && i.call(n);
} finally {
if (e) throw e.error;
}
}
};
n.prototype.onCreate = function() {
for (var t = [], e = 0; e < arguments.length; e++) t[e] = arguments[e];
};
n.prototype.onLoad = function() {
t.IOCPool.global.addObj(this);
t.Support.context.getImplByIntf(t.IPluginPool).initPlugins(this);
t.Support.context.getImplByIntf(t.IObjectPool).implPoolProxy.addProxyObj(this);
t.Support.context.getImplByIntf(t.IViewPool).addViewObj(this);
this.ctor();
};
n.prototype.onDestroy = function() {
this.dtor();
this.unscheduleAll();
t.Support.context.getImplByIntf(t.IViewPool).removeViewObj(this);
t.Support.context.getImplByIntf(t.IObjectPool).implPoolProxy.removeProxyObj(this);
t.IOCPool.global.removeObj(this);
};
n.prototype.findImpl = function(e) {
return t.Support.context.getImplByIntf(t.IObjectPool).implPool.getImplByIntf(e);
};
n.prototype.getImpl = function(e) {
var i = t.Support.context.getImplByIntf(t.IObjectPool).implPool.getImplByIntf(e);
t.Adapt.DEBUG && null == i && console.error("[ViewBase] getImpl interface ".concat(e.name, " not implement"));
return i;
};
n.prototype.getRealImpl = function(e) {
var i = t.Support.context.getImplByIntf(t.IObjectPool).implPool.getImpl(e);
t.Adapt.DEBUG && null == i && console.error("[ViewBase] getRealImpl implement ".concat(e.name, " is null"));
return i;
};
n.prototype.getPlugin = function(e) {
var i = t.IOCPool.global.reg.getTypeID(e);
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[ViewBase] getPlugin interface ".concat(e.name, " unregistered"));
return null;
}
var n = this._plugins.get(i);
if (void 0 !== n) return n;
var o = t.Support.context.getImplByIntf(t.IPluginPool), r = t.Support.context.getImplByIntf(t.IObjectPool).rootViewTypeID, s = o.viewImplPool;
t.IOCPool.global.reg.getObjTypeID(this) == r && (s = o.rootViewImplPool);
var a = s.getImplID(i);
if (void 0 === a) {
t.Adapt.DEBUG && console.error("[ViewBase] getPlugin interface ".concat(e.name, " not implement"));
return null;
}
n = t.IOCPool.global.addObjByTypeID(a, this);
this._plugins.set(i, n);
n.ctor();
return n;
};
n.prototype.getGlobalPlugin = function(e) {
return t.Support.context.getImplByIntf(t.IPluginPool).getGlobalPlugin(e);
};
n.prototype.close = function() {
fgui.GObject.cast(this.node).dispose();
if (this && this.__proto__) {
var i = this.__proto__[t.IOCReg.IOCTag];
this.getPlugin(e.ViewPlugin).clearFullScreen(i);
}
};
n.prototype.unscheduleAll = function() {
cc.director.getScheduler().unscheduleAllForTarget(this);
};
n.prototype.unschedule = function(t) {
t && cc.director.getScheduler().unschedule(t, this);
};
n.prototype.schedule = function(t, e, i, n) {
e = e || 0;
i = isNaN(i) ? cc.macro.REPEAT_FOREVER : i;
n = n || 0;
var o = cc.director.getScheduler(), r = o.isTargetPaused(this);
o.schedule(t, this, e, i, n, r);
};
n.prototype.scheduleOnce = function(t, e) {
this.schedule(t, 0, 0, e);
};
return n;
}(fgui.GComponent);
e.GViewBase = i;
})(t.Frame || (t.Frame = {}));
})(qg || (qg = {}));

(function(t) {
(function(e) {
var i = function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._plugins = new Map();
t._dataIDs = new Set();
return t;
}
i.prototype.dtor = function() {
var e, i, n, o;
try {
for (var r = __values(this._plugins), s = r.next(); !s.done; s = r.next()) {
var a = __read(s.value, 2)[1];
a.dtor();
t.IOCPool.global.removeObj(a);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
s && !s.done && (i = r.return) && i.call(r);
} finally {
if (e) throw e.error;
}
}
try {
for (var l = __values(this._dataIDs), h = l.next(); !h.done; h = l.next()) {
var c = h.value, u = t.IOCPool.global.findObj(c);
if (void 0 !== u) {
u.dtor();
t.IOCPool.global.removeObj(u);
}
}
} catch (t) {
n = {
error: t
};
} finally {
try {
h && !h.done && (o = l.return) && o.call(l);
} finally {
if (n) throw n.error;
}
}
};
i.prototype.findImpl = function(e) {
return t.Support.context.getImplByIntf(t.IObjectPool).implPool.getImplByIntf(e);
};
i.prototype.getImpl = function(e) {
var i = t.Support.context.getImplByIntf(t.IObjectPool).implPool.getImplByIntf(e);
t.Adapt.DEBUG && null == i && console.error("[ModuleBase] getImpl interface ".concat(e.name, " not implement"));
return i;
};
i.prototype.getRealImpl = function(e) {
var i = t.Support.context.getImplByIntf(t.IObjectPool).implPool.getImpl(e);
t.Adapt.DEBUG && null == i && console.error("[ModuleBase] getRealImpl implement ".concat(e.name, " is null"));
return i;
};
i.prototype.doProxy = function(e, i) {
t.Support.context.getImplByIntf(t.IObjectPool).implPoolProxy.doProxy(e, i);
};
i.prototype.getPlugin = function(e) {
var i = t.IOCPool.global.reg.getTypeID(e);
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[ModuleBase] getPlugin interface ".concat(e.name, " unregistered"));
return null;
}
var n = this._plugins.get(i);
if (void 0 !== n) return n;
var o = t.Support.context.getImplByIntf(t.IPluginPool).moduleImplPool.getImplID(i);
if (void 0 === o) {
t.Adapt.DEBUG && console.error("[ModuleBase] getPlugin interface ".concat(e.name, " not implement"));
return null;
}
n = t.IOCPool.global.addObjByTypeID(o, this);
this._plugins.set(i, n);
n.ctor();
return n;
};
i.prototype.getGlobalPlugin = function(e) {
return t.Support.context.getImplByIntf(t.IPluginPool).getGlobalPlugin(e);
};
i.prototype.createData = function(e) {
for (var i, n = [], o = 1; o < arguments.length; o++) n[o - 1] = arguments[o];
t.IOCPool.global.reg.regType(e);
var r = (i = t.IOCPool.global).addObjByType.apply(i, __spreadArray([ e ], __read(n), !1));
this._dataIDs.add(r.iocGID);
r.ctor();
return r;
};
i.prototype.destroyData = function(e) {
if (!this._dataIDs.delete(e.iocGID)) {
t.Adapt.DEBUG && console.error("[ModuleBase] destroyData data ".concat(e.constructor.name, " invalid"));
return !1;
}
e.dtor();
t.IOCPool.global.removeObj(e);
return !0;
};
return i;
}(t.IOCObject);
e.ModuleBase = i;
})(t.Frame || (t.Frame = {}));
})(qg || (qg = {}));

(function(t) {
(function(e) {
var i = function(i) {
__extends(n, i);
function n() {
var e = null !== i && i.apply(this, arguments) || this;
e._isDestroyed = !1;
e.iocGID = t.IOCGID.InvalidID;
e._plugins = new Map();
return e;
}
n.prototype.ctor = function() {};
n.prototype.dtor = function() {
var e, i;
try {
for (var n = __values(this._plugins), o = n.next(); !o.done; o = n.next()) {
var r = __read(o.value, 2)[1];
r.dtor();
t.IOCPool.global.removeObj(r);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
o && !o.done && (i = n.return) && i.call(n);
} finally {
if (e) throw e.error;
}
}
};
n.prototype.onCreate = function() {
for (var t = [], e = 0; e < arguments.length; e++) t[e] = arguments[e];
};
n.prototype.onLoad = function() {
t.IOCPool.global.addObj(this);
t.Support.context.getImplByIntf(t.IPluginPool).initPlugins(this);
t.Support.context.getImplByIntf(t.IObjectPool).implPoolProxy.addProxyObj(this);
t.Support.context.getImplByIntf(t.IViewPool).addViewObj(this);
this.ctor();
};
Object.defineProperty(n.prototype, "gComponent", {
get: function() {
var t;
return null === (t = fgui.GObject.cast(this.node)) || void 0 === t ? void 0 : t.asCom;
},
enumerable: !1,
configurable: !0
});
n.prototype.onShow = function() {
var t;
null === (t = this.gComponent) || void 0 === t || t.makeFullScreen();
};
n.prototype.onDestroy = function() {
if (cc.isValid(this.node) && !this._isDestroyed) {
this.dtor();
t.Support.context.getImplByIntf(t.IViewPool).removeViewObj(this);
t.Support.context.getImplByIntf(t.IObjectPool).implPoolProxy.removeProxyObj(this);
t.IOCPool.global.removeObj(this);
}
};
n.prototype.findImpl = function(e) {
return t.Support.context.getImplByIntf(t.IObjectPool).implPool.getImplByIntf(e);
};
n.prototype.getImpl = function(e) {
var i = t.Support.context.getImplByIntf(t.IObjectPool).implPool.getImplByIntf(e);
t.Adapt.DEBUG && null == i && console.error("[ViewBase] getImpl interface ".concat(e.name, " not implement"));
return i;
};
n.prototype.getRealImpl = function(e) {
var i = t.Support.context.getImplByIntf(t.IObjectPool).implPool.getImpl(e);
t.Adapt.DEBUG && null == i && console.error("[ViewBase] getRealImpl implement ".concat(e.name, " is null"));
return i;
};
n.prototype.getCompImpl = function(e) {
var i = t.IOCPool.global.reg.getTypeID(e);
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[ViewBase] getCompView interface ".concat(e.name, " unregistered"));
return null;
}
var n = t.Support.context.getImplByIntf(t.IObjectPool).implPool.getImplID(i);
if (void 0 === n) {
t.Adapt.DEBUG && console.error("[ViewBase] getCompView interface ".concat(e.name, " not implement"));
return null;
}
var o = t.IOCPool.global.reg.getType(n);
if (void 0 === o) {
t.Adapt.DEBUG && console.error("[ViewBase] getCompView interface ".concat(e.name, " implement invalid"));
return null;
}
return o;
};
n.prototype.getCompView = function(t) {
var e, i = this.getCompImpl(t);
return i ? null !== (e = this.node.getComponent(i)) && void 0 !== e ? e : this.node.addComponent(i) : null;
};
n.prototype.getPlugin = function(e) {
var i = t.IOCPool.global.reg.getTypeID(e);
if (void 0 === i) {
t.Adapt.DEBUG && console.error("[ViewBase] getPlugin interface ".concat(e.name, " unregistered"));
return null;
}
var n = this._plugins.get(i);
if (void 0 !== n) return n;
var o = t.Support.context.getImplByIntf(t.IPluginPool), r = t.Support.context.getImplByIntf(t.IObjectPool).rootViewTypeID, s = o.viewImplPool;
t.IOCPool.global.reg.getObjTypeID(this) == r && (s = o.rootViewImplPool);
var a = s.getImplID(i);
if (void 0 === a) {
t.Adapt.DEBUG && console.error("[ViewBase] getPlugin interface ".concat(e.name, " not implement"));
return null;
}
n = t.IOCPool.global.addObjByTypeID(a, this);
this._plugins.set(i, n);
n.ctor();
return n;
};
n.prototype.getGlobalPlugin = function(e) {
return t.Support.context.getImplByIntf(t.IPluginPool).getGlobalPlugin(e);
};
n.prototype.clearFullScreen = function() {
var i = this.__proto__;
if (null != i) {
var n = i[t.IOCReg.IOCTag];
this.getPlugin(e.ViewPlugin).clearFullScreen(n);
}
};
n.prototype.close = function() {
var t = this.node;
if (null != t && t.isValid && cc.isValid(t, !0)) {
var e = this.gComponent;
if (e) e.dispose(); else {
t.removeFromParent();
t.destroy();
}
this.clearFullScreen();
this.onDestroy();
this._isDestroyed = !0;
}
};
return n;
}(t.Adapt.Component);
e.ViewBase = i;
})(t.Frame || (t.Frame = {}));
})(qg || (qg = {}));

(function(t) {
(function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._assets = [];
t._loadAssetCallerIDs = new Set();
t._loadAssetDirCallerIDs = new Set();
return t;
}
i.prototype.dtor = function() {
var i, n, o, r, s, a;
try {
for (var l = __values(this._assets), h = l.next(); !h.done; h = l.next()) h.value.decRef();
} catch (t) {
i = {
error: t
};
} finally {
try {
h && !h.done && (n = l.return) && n.call(l);
} finally {
if (i) throw i.error;
}
}
var c = this.getFrameImpl(t.IBundlePool);
try {
for (var u = __values(this._loadAssetCallerIDs), p = u.next(); !p.done; p = u.next()) {
var d = p.value;
c.breakLoadAsset(d);
}
} catch (t) {
o = {
error: t
};
} finally {
try {
p && !p.done && (r = u.return) && r.call(u);
} finally {
if (o) throw o.error;
}
}
try {
for (var f = __values(this._loadAssetDirCallerIDs), _ = f.next(); !_.done; _ = f.next()) {
d = _.value;
c.breakLoadAssetDir(d);
}
} catch (t) {
s = {
error: t
};
} finally {
try {
_ && !_.done && (a = f.return) && a.call(f);
} finally {
if (s) throw s.error;
}
}
e.prototype.dtor.call(this);
};
i.prototype.loadAsset = function(e, i, n) {
return __awaiter(this, void 0, void 0, function() {
var o = this;
return __generator(this, function() {
return [ 2, new Promise(function(r) {
var s = o.getFrameImpl(t.IBundlePool).loadAsset(e, i, n, function(t) {
void 0 !== s && o._loadAssetCallerIDs.delete(s);
if (null != t) {
t.addRef();
o._assets.push(t);
r(t);
} else r(null);
});
void 0 !== s && o._loadAssetCallerIDs.add(s);
}) ];
});
});
};
i.prototype.loadAssetDir = function(e, i, n) {
return __awaiter(this, void 0, void 0, function() {
var o = this;
return __generator(this, function() {
return [ 2, new Promise(function(r) {
var s = o.getFrameImpl(t.IBundlePool).loadAssetDir(e, i, n, function(t) {
var e, i;
void 0 !== s && o._loadAssetDirCallerIDs.delete(s);
if (null != t) {
try {
for (var n = __values(t), a = n.next(); !a.done; a = n.next()) {
var l = a.value;
l.addRef();
o._assets.push(l);
}
} catch (t) {
e = {
error: t
};
} finally {
try {
a && !a.done && (i = n.return) && i.call(n);
} finally {
if (e) throw e.error;
}
}
r(t);
} else r(null);
});
void 0 !== s && o._loadAssetDirCallerIDs.add(s);
}) ];
});
});
};
i = __decorate([ t.Process.Plugin({
supports: [ t.FrameType.Module, t.FrameType.View, t.FrameType.RootView ],
implements: [ t.Frame.AssetPlugin ]
}) ], i);
})(t.FramePlugin);
})(qg || (qg = {}));

(function(t) {
(function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._loadBundleCallerIDs = new Set();
return t;
}
i.prototype.dtor = function() {
var i, n, o = this.getFrameImpl(t.IBundlePool);
try {
for (var r = __values(this._loadBundleCallerIDs), s = r.next(); !s.done; s = r.next()) {
var a = s.value;
o.breakLoadBundle(a);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
s && !s.done && (n = r.return) && n.call(r);
} finally {
if (i) throw i.error;
}
}
e.prototype.dtor.call(this);
};
i.prototype.getBundleName = function(e) {
return this.getFrameImpl(t.IBundlePool).getBundleName(e);
};
i.prototype.loadBundle = function(e) {
return __awaiter(this, void 0, void 0, function() {
var i = this;
return __generator(this, function() {
return [ 2, new Promise(function(n) {
var o = i.getFrameImpl(t.IBundlePool).loadBundle(e, function(t) {
void 0 !== o && i._loadBundleCallerIDs.delete(o);
n(t);
});
void 0 !== o && i._loadBundleCallerIDs.add(o);
}) ];
});
});
};
i.prototype.unloadBundle = function(e) {
this.getFrameImpl(t.IBundlePool).unloadBundle(e);
};
i = __decorate([ t.Process.Plugin({
supports: [ t.FrameType.Module ],
implements: [ t.Frame.BundlePlugin ]
}) ], i);
})(t.FramePlugin);
})(qg || (qg = {}));

(function(t) {
(function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._reqList = new Map();
return t;
}
i.prototype.initReqList = function(t, e) {
this._moduleType = t.constructor;
this._reqList = e;
};
i.prototype.startReq = function(e) {
for (var i = [], n = 1; n < arguments.length; n++) i[n - 1] = arguments[n];
if (this._moduleType && "" !== e) {
var o = this._reqList.get(e);
if (o) {
var r = new o.cell(), s = o.timeout || 10;
r.setStopCallback(this.stopReq.bind(this));
r.startCell(i[0], s);
if (o.callback) {
var a = i.slice(1);
r.addCellCallBack.apply(r, __spreadArray([ o.callback ], __read(a), !1));
}
this.getFrameImpl(t.ICellCtrl).start(this._moduleType, r);
}
}
};
i.prototype.stopAllReq = function() {
this.getFrameImpl(t.ICellCtrl).resetAllCell();
};
i.prototype.stopReq = function(e) {
this._moduleType && this.getFrameImpl(t.ICellCtrl).removeCell(this._moduleType, e);
};
i.prototype.dtor = function() {
this._moduleType && this.getFrameImpl(t.ICellCtrl).removeCellByModule(this._moduleType);
};
i = __decorate([ t.Process.Plugin({
supports: [ t.FrameType.Module, t.FrameType.View ],
implements: [ t.Frame.CellPlugin ]
}) ], i);
})(t.FramePlugin);
})(qg || (qg = {}));

(function(t) {
(function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._keys = new Set();
return t;
}
i.prototype.dtor = function() {
var i, n;
try {
for (var o = __values(this._keys), r = o.next(); !r.done; r = o.next()) {
var s = r.value;
this.getFrameImpl(t.IDataPool).removeDataListener(s, this.getHost());
}
} catch (t) {
i = {
error: t
};
} finally {
try {
r && !r.done && (n = o.return) && n.call(o);
} finally {
if (i) throw i.error;
}
}
e.prototype.dtor.call(this);
};
i.prototype.queryData = function(e) {
return this.getFrameImpl(t.IDataPool).queryData(e);
};
i.prototype.listenData = function(e, i) {
this._keys.add(e);
this.getFrameImpl(t.IDataPool).addDataListener(e, this.getHost(), i);
};
i.prototype.attachData = function(t, e) {
this.listenData(t, e);
e.call(this.getHost(), this.queryData(t));
};
i = __decorate([ t.Process.Plugin({
supports: [ t.FrameType.Module, t.FrameType.View, t.FrameType.RootView ],
implements: [ t.Frame.DataPlugin ]
}) ], i);
})(t.FramePlugin);
})(qg || (qg = {}));

(function(t) {
(function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.start = function() {
this.getFrameImpl(t.ILauncher).start();
};
i = __decorate([ t.Process.Plugin({
supports: [ t.FrameType.RootView ],
implements: [ t.Frame.LaunchPlugin ]
}) ], i);
})(t.FramePlugin);
})(qg || (qg = {}));

(function(t) {
(function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
Object.defineProperty(i.prototype, "life", {
get: function() {
return this.getFrameImpl(t.ILifeCycle).life;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "prevLife", {
get: function() {
return this.getFrameImpl(t.ILifeCycle).prevLife;
},
enumerable: !1,
configurable: !0
});
i.prototype.enterLife = function(e) {
this.getFrameImpl(t.ILifeCycle).enterLife(e);
};
i.prototype.reloadModules = function(e) {
void 0 === e && (e = []);
this.getFrameImpl(t.ILifeCycle).reloadModules(e);
};
i.prototype.destoryModules = function(e) {
void 0 === e && (e = []);
this.getFrameImpl(t.ILifeCycle).destoryModules(e);
};
i.prototype.reloadModulesFullMatch = function(e) {
void 0 === e && (e = []);
this.getFrameImpl(t.ILifeCycle).reloadModulesFullMatch(e);
};
i.prototype.destoryModulesFullMatch = function(e) {
void 0 === e && (e = []);
this.getFrameImpl(t.ILifeCycle).destoryModulesFullMatch(e);
};
i = __decorate([ t.Process.Plugin({
supports: [ t.FrameType.Module ],
implements: [ t.Frame.LifeCyclePlugin ]
}) ], i);
})(t.FramePlugin);
})(qg || (qg = {}));

(function(t) {
(function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.destroyListeners = function(e) {
var i, n, o = this.getFrameImpl(t.ISDKCtrl);
try {
for (var r = __values(e), s = r.next(); !s.done; s = r.next()) {
var a = __read(s.value, 2), l = a[0], h = a[1];
o.removeListenerByID(l, h);
}
} catch (t) {
i = {
error: t
};
} finally {
try {
s && !s.done && (n = r.return) && n.call(r);
} finally {
if (i) throw i.error;
}
}
};
i.prototype.callSDK = function(e, i, n) {
this.getFrameImpl(t.ISDKCtrl).callSDK(e, i, n);
};
i.prototype.addListener = function(e, i, n) {
this.getFrameImpl(t.ISDKCtrl).addListener(e, i, n);
};
i.prototype.removeListener = function(e, i) {
this.getFrameImpl(t.ISDKCtrl).removeListener(e, i);
};
i = __decorate([ t.Process.Plugin({
supports: [ t.FrameType.Module, t.FrameType.View, t.FrameType.RootView ],
implements: [ t.Frame.SDKCallPlugin ]
}) ], i);
})(t.FramePlugin);
})(qg || (qg = {}));

(function(t) {
(function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
Object.defineProperty(i.prototype, "_scheduler", {
get: function() {
return cc.director.getScheduler();
},
enumerable: !1,
configurable: !0
});
i.prototype.ctor = function() {
e.prototype.ctor.call(this);
this._scheduler.enableForTarget(this);
};
i.prototype.schedule = function(t, e, i, n, o) {
this._scheduler.schedule(t, this, e, null != i ? i : 0, null != n ? n : 0, o);
};
i.prototype.scheduleOnce = function(t, e) {
var i = this._scheduler.isTargetPaused(this);
this._scheduler.schedule(t, this, 0, 0, e, i);
};
i.prototype.unschedule = function(t) {
this._scheduler.unschedule(t, this);
};
i.prototype.dtor = function() {
this._scheduler.unscheduleAllForTarget(this);
e.prototype.dtor.call(this);
};
i = __decorate([ t.Process.Plugin({
supports: [ t.FrameType.Module, t.FrameType.View ],
implements: [ t.Frame.SchedulerPlugin ]
}) ], i);
})(t.FramePlugin);
})(qg || (qg = {}));

(function(t) {
(function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.selectGame = function(e, i) {
this.getFrameImpl(t.ISelector).selectGame(e, i);
};
i.prototype.selectCollection = function(e) {
this.getFrameImpl(t.ISelector).selectCollection(e);
};
i.prototype.apply = function(e) {
this.getFrameImpl(t.ISelector).apply(e);
};
i.prototype.onViewUpdateSelector = function(e) {
var i, n, o = [];
try {
for (var r = __values(e), s = r.next(); !s.done; s = r.next()) {
var a = s.value, l = a.className, h = a.selectorKey, c = a.value;
if (t.Adapt.DEBUG) {
var u = "fix_selector";
t.Debug.getDebugInfo()[u] || (t.Debug.getDebugInfo()[u] = {});
t.Debug.getDebugInfo()[u][l] || (t.Debug.getDebugInfo()[u][l] = {});
t.Debug.addDebugInfo(u, t.Debug.getDebugInfo()[u]);
console.info("%c[修改select] className: ".concat(l, " selectorKey: ").concat(h, " value: before:").concat(t.Debug.getDebugInfo()[u][l][h], " after:").concat(c), "background:#00A600 ; padding: 2px; border-radius: 0 0 0 0;  color: #fff;font-size:16px");
t.Debug.getDebugInfo()[u][l][h] = c;
}
var p = t.IOCPool.global.reg.getTypeByName(l);
o.push({
typeID: p,
selectorKey: h,
value: c
});
}
} catch (t) {
i = {
error: t
};
} finally {
try {
s && !s.done && (n = r.return) && n.call(r);
} finally {
if (i) throw i.error;
}
}
this.getFrameImpl(t.ISelector).onViewUpdateSelector(o);
};
i = __decorate([ t.Process.Plugin({
supports: [ t.FrameType.Module, t.FrameType.RootView ],
implements: [ t.Frame.SelectorPlugin ]
}) ], i);
})(t.FramePlugin);
})(qg || (qg = {}));

(function(t) {
(function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.notifyUI = function(e, i) {
void 0 === i ? this.getFrameImpl(t.IUINotifyCtrl).notifyUI(e, new e()) : this.getFrameImpl(t.IUINotifyCtrl).notifyUI(e, i);
};
i = __decorate([ t.Process.Plugin({
supports: [ t.FrameType.Module, t.FrameType.View ],
implements: [ t.Frame.UINotifyPlugin ]
}) ], i);
})(t.FramePlugin);
})(qg || (qg = {}));

(function(t) {
(function(e) {
__extends(i, e);
function i() {
var t = null !== e && e.apply(this, arguments) || this;
t._createCallerIDs = new Set();
t._openCallerIDs = new Set();
return t;
}
i.prototype.getViewRoot = function(e) {
return this.getFrameImpl(t.IViewPool).getViewRoot(e);
};
i.prototype.createView = function(e) {
for (var i, n = [], o = 1; o < arguments.length; o++) n[o - 1] = arguments[o];
return (i = this.getFrameImpl(t.IViewPool)).createView.apply(i, __spreadArray([ e ], __read(n), !1));
};
i.prototype.openView = function(e) {
for (var i, n = [], o = 1; o < arguments.length; o++) n[o - 1] = arguments[o];
return (i = this.getFrameImpl(t.IViewPool)).openView.apply(i, __spreadArray([ e ], __read(n), !1));
};
i.prototype.openViewWithOrder = function(e, i) {
for (var n, o = [], r = 2; r < arguments.length; r++) o[r - 2] = arguments[r];
return (n = this.getFrameImpl(t.IViewPool)).openViewWithOrder.apply(n, __spreadArray([ e, i ], __read(o), !1));
};
i.prototype.closeView = function(e) {
this.getFrameImpl(t.IViewPool).closeView(e);
};
i.prototype.closeAllView = function(e) {
this.getFrameImpl(t.IViewPool).closeAllView(e);
};
i.prototype.selectSkin = function(e, i) {
this.getFrameImpl(t.IViewPool).selectSkin(e, i);
};
i.prototype.getSkins = function(e) {
return this.getFrameImpl(t.IViewPool).getSkins(e);
};
i.prototype.selectPackage = function(e, i) {
this.getFrameImpl(t.IViewPool).selectPackage(e, i);
};
i.prototype.getPackage = function(e) {
return this.getFrameImpl(t.IViewPool).getPackage(e);
};
i.prototype.attachView = function(e) {
return this.getFrameImpl(t.IViewPool).attachView(e);
};
i.prototype.detachView = function(e) {
this.getFrameImpl(t.IViewPool).detachView(e);
};
i.prototype.stashPushAllView = function() {
this.getFrameImpl(t.IViewPool).stashPushAllView();
};
i.prototype.stashPopAllView = function() {
this.getFrameImpl(t.IViewPool).stashPopAllView();
};
i.prototype.clearFullScreen = function(e) {
this.getFrameImpl(t.IViewPool).clearFullScreen(e);
};
i.prototype.isExistView = function(e) {
return this.getFrameImpl(t.IViewPool).isExistView(e);
};
i.prototype.isRegisterView = function(e) {
return this.getFrameImpl(t.IViewPool).isRegisterView(e);
};
i.prototype.extensionFguiComp = function(e) {
this.getFrameImpl(t.IViewPool).extensionFguiComp(e);
};
i = __decorate([ t.Process.Plugin({
supports: [ t.FrameType.Module, t.FrameType.View, t.FrameType.RootView ],
implements: [ t.Frame.ViewPlugin ]
}) ], i);
})(t.FramePlugin);
})(qg || (qg = {}));

(function(t) {
(function(e) {
__extends(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.setViewRoot = function(e, i) {
this.getFrameImpl(t.IViewPool).setViewRoot(e, i);
};
i = __decorate([ t.Process.Plugin({
supports: [ t.FrameType.RootView ],
implements: [ t.Frame.ViewRootPlugin ]
}) ], i);
})(t.FramePlugin);
})(qg || (qg = {}));

(function(t) {
(function(e) {
e.getAssetName = function(e) {
var i = e.split("@");
if (2 != i.length) {
t.Adapt.DEBUG && console.error("[AssetTool] getAssetName name ".concat(e, " invalid"));
return null;
}
return {
name: i[0],
bundleName: i[1]
};
};
e.getAsset = function(e, i, n) {
var o = t.Adapt.assetManager.getBundle(i);
return null != o ? o.get(e, n) : null;
};
e.loadAsset = function(e, i, n, o) {
var r = t.Adapt.assetManager.getBundle(i);
if (null != r) {
var s = r.get(e, n);
null == s ? r.load(e, n, function(t, e) {
o(t ? null : e);
}) : o(s);
} else o(null);
};
e.loadAssetDir = function(e, i, n, o) {
var r = t.Adapt.assetManager.getBundle(i);
null != r ? r.loadDir(e, n, function(t, e) {
o(t ? null : e);
}) : o(null);
};
e.loadBundle = function(e, i) {
var n = t.Adapt.assetManager.getBundle(e);
if (null == n) {
var o = function(t, e) {
i(t ? null : e);
};
if (cc.sys.isBrowser && window.remoteBundles && -1 != window.remoteBundles.indexOf(e)) {
var r = {
version: window.remoteSettings[e]
};
cc.assetManager.loadBundle(window.remoteUrl + "assets/" + e, r, o);
} else cc.assetManager.loadBundle(e, o);
} else i(n);
};
e.unloadBundle = function(e) {
var i = t.Adapt.assetManager.getBundle(e);
null != i && i.releaseAll();
};
e.loadBundleAssetDir = function(e, i, n, o) {
var r = function(r, s) {
r ? console.error("[AssetTool] loadBundleAssetDir ".concat(e, " error")) : o ? s.loadDir(i, function(e, i) {
cc.game.emit(t.LoadEvent.PROGRESS, e, i);
}, function(t, e) {
t ? n(null) : n(s, e);
}) : s.loadDir(i, function(t, e) {
t ? n(null) : n(s, e);
});
};
if (cc.sys.isBrowser && window.remoteBundles && -1 != window.remoteBundles.indexOf(e)) {
var s = {
version: window.remoteSettings[e]
};
cc.assetManager.loadBundle(window.remoteUrl + "assets/" + e, s, r);
} else cc.assetManager.loadBundle(e, r);
};
e.unloadAssets = function(t, e) {
var i = !1;
if (t.includes(":")) {
var n = t.split(":");
t = n[0];
e = n[1];
i = "true" == n[2];
}
var o = cc.assetManager.getBundle(t);
if (o) {
o.getDirWithPath(e).forEach(function(t) {
fgui.UIPackage.getByPath(t.path) && fgui.UIPackage.removePackage(t.path);
cc.js.isChildClassOf(t.ctor, cc.Prefab) ? o.release(t.path, cc.Prefab) : cc.js.isChildClassOf(t.ctor, cc.SpriteAtlas) ? o.release(t.path, cc.SpriteAtlas) : cc.js.isChildClassOf(t.ctor, cc.Asset) && o.release(t.path, cc.Asset);
});
if (i) {
o.releaseAll();
cc.assetManager.removeBundle(o);
}
}
};
e.loadFguiAsync = function(e, r, s, a, l, h, c, u, p) {
void 0 === a && (a = String(cc.AssetManager.BuiltinBundleName.RESOURCES));
void 0 === l && (l = !1);
void 0 === h && (h = !0);
return __awaiter(this, void 0, void 0, function() {
return __generator(this, function() {
u = null != u ? u : n(e, a);
return [ 2, new Promise(function(n, d) {
if (null == e ? void 0 : e.length) if (0 != u.length) {
var f = 0, _ = u.length, g = function(u, p, g) {
fgui.UIPackage.loadPackage(u, p, function(e, i) {
l && (1 != _ && g != _ - 1 || cc.game.emit(t.LoadEvent.PROGRESS, e, i));
}, function(t) {
if (t) d("".concat(p, " load fail, err: ").concat(t)); else if (++f == _) {
null == c || c();
var l = i(e[e.length - 1], a).pName, u = fgui.UIPackage.getByPath(l), g = h ? o(u.name, r, s) : {
ui: null,
data: null
};
n(g);
}
}, l);
};
u.forEach(function(t, e) {
var n = i(t, a), o = n.bName, r = n.pName, s = cc.assetManager.getBundle(o);
if (s) g(s, r, e); else {
var l = function(t, i) {
t ? d("".concat(o, " load fail")) : g(i, r, e);
};
if (cc.sys.isBrowser && window.remoteBundles && -1 != window.remoteBundles.indexOf(o)) {
var h = {
version: window.remoteSettings[o]
};
cc.assetManager.loadBundle(window.remoteUrl + "assets/" + o, h, l);
} else cc.assetManager.loadBundle(o, l);
}
});
} else {
null == c || c();
var y = i(e[e.length - 1], a).pName, m = fgui.UIPackage.getByPath(y), v = h ? o(null != p ? p : m.name, r, s) : {
ui: null,
data: null
};
n(v);
} else d("pkgUrls is null");
}) ];
});
});
};
e.loadFguiArrayAsync = function(e, r, s, a, l, h, c, u) {
void 0 === a && (a = String(cc.AssetManager.BuiltinBundleName.RESOURCES));
void 0 === l && (l = !0);
return __awaiter(this, void 0, void 0, function() {
return __generator(this, function() {
c = null != c ? c : n(e, a);
return [ 2, new Promise(function(n, p) {
if (null == e ? void 0 : e.length) {
var d = function(c) {
null == h || h();
var p = i(e[e.length - 1], a).pName, d = fgui.UIPackage.getByPath(p), f = l ? o(null != u ? u : d.name, r, s) : {
ui: null,
data: null
};
n(f);
cc.game.emit(t.LoadEvent.COMPLETE, c, null == e ? void 0 : e[e.length - 1]);
};
if (0 != c.length) {
cc.game.emit(t.LoadEvent.START, r, null == e ? void 0 : e[e.length - 1]);
var f = [];
c.forEach(function(t) {
var e = i(t, a), n = e.bName, o = e.pName, r = void 0;
cc.sys.isBrowser && window.remoteBundles && -1 != window.remoteBundles.indexOf(n) && (r = {
version: window.remoteSettings[n]
});
f.push({
bundleName: n,
path: o,
bundleOptions: r
});
});
fgui.UIPackage.loadPackageArray(f, function(i, n) {
cc.game.emit(t.LoadEvent.PROGRESS, i, n, null == e ? void 0 : e[e.length - 1]);
}, function(t) {
d(t);
});
} else d();
} else p("pkgUrls is null");
}) ];
});
});
};
e.loadFgui = function(t, e, n, r, s, a, l) {
void 0 === r && (r = String(cc.AssetManager.BuiltinBundleName.RESOURCES));
void 0 === s && (s = !0);
null == a || a();
var h = i(t[t.length - 1], r).pName, c = fgui.UIPackage.getByPath(h);
return s ? o(null != l ? l : c.name, e, n) : {
ui: null,
data: null
};
};
function i(t, e) {
void 0 === e && (e = String(cc.AssetManager.BuiltinBundleName.RESOURCES));
var i = e, n = t.split(":"), o = n[0];
if (2 == n.length) {
i = n[0];
o = n[1];
}
return {
bName: i,
pName: o
};
}
e.getRealPkgName = i;
function n(t, e) {
void 0 === e && (e = String(cc.AssetManager.BuiltinBundleName.RESOURCES));
if (!(null == t ? void 0 : t.length)) {
console.error("pkgUrls is null");
return [];
}
for (var n = [], o = 0; o < t.length; o++) {
var r = i(t[o], e).pName;
fgui.UIPackage.getByPath(r) || n.push(t[o]);
}
return n;
}
e.checkLoadFgui = n;
function o(t, e, i) {
t.includes(":") && (t = t.split(":")[1]);
var n = fgui.UIPackage.createObject(t, e);
!n && t.indexOf("/") > -1 && (n = fgui.UIPackage.createObject(t.substring(t.lastIndexOf("/") + 1), e));
if (!n || !n.node) {
console.error("fgui create fail!pkgName:" + t + "resName:" + e);
return {
ui: null,
data: null
};
}
n.name = n.node.name = e;
var o = n.baseUserData || n.data;
if (o) try {
o = JSON.parse(o);
} catch (t) {}
i && n.node.addComponent(i);
return {
ui: n,
data: o
};
}
e.createFguiObj = o;
})(t.AssetTool || (t.AssetTool = {}));
})(qg || (qg = {}));

(function(t) {
(function(e) {
e.setItem = function(e, i) {
t.Support.context.getImplByIntf(t.IStorageCtrl).setItem(e, i);
};
e.getItem = function(e) {
return t.Support.context.getImplByIntf(t.IStorageCtrl).getItem(e);
};
e.removeItem = function(e) {
t.Support.context.getImplByIntf(t.IStorageCtrl).removeItem(e);
};
e.removeAllItem = function() {
t.Support.context.getImplByIntf(t.IStorageCtrl).removeAllItem();
};
})(t.StorageTool || (t.StorageTool = {}));
})(qg || (qg = {}));

function _typeof(t) {
return (_typeof = "function" == typeof Symbol && "symbol" == typeof Symbol.iterator ? function(t) {
return typeof t;
} : function(t) {
return t && "function" == typeof Symbol && t.constructor === Symbol && t !== Symbol.prototype ? "symbol" : typeof t;
})(t);
}

function _classCallCheck(t, e) {
if (!(t instanceof e)) throw new TypeError("Cannot call a class as a function");
}

function _defineProperties(t, e) {
for (var i = 0; i < e.length; i++) {
var n = e[i];
n.enumerable = n.enumerable || !1, n.configurable = !0, "value" in n && (n.writable = !0), 
Object.defineProperty(t, n.key, n);
}
}

function _createClass(t, e, i) {
return e && _defineProperties(t.prototype, e), i && _defineProperties(t, i), t;
}

var Config = {
LIB_VERSION: "2.2.4",
LIB_NAME: "MG"
}, _ = {}, ArrayProto = Array.prototype, ObjProto = Object.prototype, slice = ArrayProto.slice, nativeToString = ObjProto.toString, nativeHasOwnProperty = Object.prototype.hasOwnProperty, nativeForEach = ArrayProto.forEach, nativeIsArray = Array.isArray, breaker = {}, utmTypes = [ "utm_source", "utm_medium", "utm_campaign", "utm_content", "utm_term" ];

_.each = function(t, e, i) {
if (null == t) return !1;
if (nativeForEach && t.forEach === nativeForEach) t.forEach(e, i); else if (t.length === +t.length) {
for (var n = 0, o = t.length; n < o; n++) if (n in t && e.call(i, t[n], n, t) === breaker) return !1;
} else for (var r in t) if (nativeHasOwnProperty.call(t, r) && e.call(i, t[r], r, t) === breaker) return !1;
}, _.extend = function(t) {
return _.each(slice.call(arguments, 1), function(e) {
for (var i in e) void 0 !== e[i] && (t[i] = e[i]);
}), t;
}, _.extend2Layers = function(t) {
return _.each(slice.call(arguments, 1), function(e) {
for (var i in e) void 0 !== e[i] && (_.isObject(e[i]) && _.isObject(t[i]) ? _.extend(t[i], e[i]) : t[i] = e[i]);
}), t;
}, _.isArray = nativeIsArray || function(t) {
return "[object Array]" === nativeToString.call(t);
}, _.isFunction = function(t) {
try {
return "function" == typeof t;
} catch (t) {
return !1;
}
}, _.isPromise = function(t) {
return "[object Promise]" === nativeToString.call(t) && null != t;
}, _.isObject = function(t) {
return "[object Object]" === nativeToString.call(t) && null != t;
}, _.isEmptyObject = function(t) {
if (_.isObject(t)) {
for (var e in t) if (nativeHasOwnProperty.call(t, e)) return !1;
return !0;
}
return !1;
}, _.isUndefined = function(t) {
return void 0 === t;
}, _.isString = function(t) {
return "[object String]" === nativeToString.call(t);
}, _.isDate = function(t) {
return "[object Date]" === nativeToString.call(t);
}, _.isBoolean = function(t) {
return "[object Boolean]" === nativeToString.call(t);
}, _.isNumber = function(t) {
return "[object Number]" === nativeToString.call(t) && /[\d\.]+/.test(String(t));
}, _.isJSONString = function(t) {
try {
JSON.parse(t);
} catch (t) {
return !1;
}
return !0;
}, _.decodeURIComponent = function(t) {
var e = "";
try {
e = decodeURIComponent(t);
} catch (i) {
e = t;
}
return e;
}, _.encodeURIComponent = function(t) {
var e = "";
try {
e = encodeURIComponent(t);
} catch (i) {
e = t;
}
return e;
}, _.utf8Encode = function(t) {
for (var e, i = "", n = e = 0, o = (t = (t + "").replace(/\r\n/g, "\n").replace(/\r/g, "\n")).length, r = 0; r < o; r++) {
var s = t.charCodeAt(r), a = null;
s < 128 ? e++ : a = 127 < s && s < 2048 ? String.fromCharCode(s >> 6 | 192, 63 & s | 128) : String.fromCharCode(s >> 12 | 224, s >> 6 & 63 | 128, 63 & s | 128), 
null !== a && (n < e && (i += t.substring(n, e)), i += a, n = e = r + 1);
}
return n < e && (i += t.substring(n, t.length)), i;
}, _.base64Encode = function(t) {
var e, i, n, o, r = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=", s = 0, a = 0, l = "", h = [];
if (!t) return t;
for (t = _.utf8Encode(t); e = (o = t.charCodeAt(s++) << 16 | t.charCodeAt(s++) << 8 | t.charCodeAt(s++)) >> 18 & 63, 
i = o >> 12 & 63, n = o >> 6 & 63, o &= 63, h[a++] = r.charAt(e) + r.charAt(i) + r.charAt(n) + r.charAt(o), 
s < t.length; ) ;
switch (l = h.join(""), t.length % 3) {
case 1:
l = l.slice(0, -2) + "==";
break;

case 2:
l = l.slice(0, -1) + "=";
}
return l;
}, _.encodeDates = function(t) {
return _.each(t, function(e, i) {
if (_.isDate(e)) t[i] = _.formatDate(e); else if (_.isObject(e)) t[i] = _.encodeDates(e); else if (_.isArray(e)) for (var n = 0; n < e.length; n++) _.isDate(e[n]) && (t[i][n] = _.formatDate(e[n]));
}), t;
}, _.formatDate = function(t) {
function e(t) {
return t < 10 ? "0" + t : t;
}
return t.getFullYear() + "-" + e(t.getMonth() + 1) + "-" + e(t.getDate()) + " " + e(t.getHours()) + ":" + e(t.getMinutes()) + ":" + e(t.getSeconds()) + "." + ((i = t.getMilliseconds()) < 100 && 9 < i ? "0" + i : i < 10 ? "00" + i : i);
}, _.searchObjDate = function(t) {
try {
(_.isObject(t) || _.isArray(t)) && _.each(t, function(e, i) {
_.isObject(e) || _.isArray(e) ? _.searchObjDate(t[i]) : _.isDate(e) && (t[i] = _.formatDate(e));
});
} catch (t) {
logger$1.warn(t);
}
}, _.UUID = function() {
var t = new Date().getTime();
return String(Math.random()).replace(".", "").slice(1, 11) + "-" + t;
}, _.UUIDv4 = function() {
return "xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx".replace(/[xy]/g, function(t) {
var e = 16 * Math.random() | 0;
return ("x" === t ? e : 3 & e | 8).toString(16);
});
}, _.setMpPlatform = function(t) {
_.mpPlatform = t;
}, _.getMpPlatform = function() {
return _.mpPlatform;
}, _.createExtraHeaders = function() {
return {
"TA-Integration-Type": Config.LIB_NAME,
"TA-Integration-Version": Config.LIB_VERSION,
"TA-Integration-Count": "1",
"TA-Integration-Extra": _.getMpPlatform()
};
}, _.checkAppId = function(t) {
return t.replace(/\s*/g, "");
}, _.checkUrl = function(t) {
return t = t.replace(/\s*/g, ""), _.url("basic", t);
}, _.url = function() {
function t() {
return new RegExp(/(.*?)\.?([^.]*?)\.(com|net|org|biz|ws|in|me|co\.uk|co|org\.uk|ltd\.uk|plc\.uk|me\.uk|edu|mil|br\.com|cn\.com|eu\.com|hu\.com|no\.com|qc\.com|sa\.com|se\.com|se\.net|us\.com|uy\.com|ac|co\.ac|gv\.ac|or\.ac|ac\.ac|af|am|as|at|ac\.at|co\.at|gv\.at|or\.at|asn\.au|com\.au|edu\.au|org\.au|net\.au|id\.au|be|ac\.be|adm\.br|adv\.br|am\.br|arq\.br|art\.br|bio\.br|cng\.br|cnt\.br|com\.br|ecn\.br|eng\.br|esp\.br|etc\.br|eti\.br|fm\.br|fot\.br|fst\.br|g12\.br|gov\.br|ind\.br|inf\.br|jor\.br|lel\.br|med\.br|mil\.br|net\.br|nom\.br|ntr\.br|odo\.br|org\.br|ppg\.br|pro\.br|psc\.br|psi\.br|rec\.br|slg\.br|tmp\.br|tur\.br|tv\.br|vet\.br|zlg\.br|br|ab\.ca|bc\.ca|mb\.ca|nb\.ca|nf\.ca|ns\.ca|nt\.ca|on\.ca|pe\.ca|qc\.ca|sk\.ca|yk\.ca|ca|cc|ac\.cn|net\.cn|com\.cn|edu\.cn|gov\.cn|org\.cn|bj\.cn|sh\.cn|tj\.cn|cq\.cn|he\.cn|nm\.cn|ln\.cn|jl\.cn|hl\.cn|js\.cn|zj\.cn|ah\.cn|gd\.cn|gx\.cn|hi\.cn|sc\.cn|gz\.cn|yn\.cn|xz\.cn|sn\.cn|gs\.cn|qh\.cn|nx\.cn|xj\.cn|tw\.cn|hk\.cn|mo\.cn|cn|cx|cz|de|dk|fo|com\.ec|tm\.fr|com\.fr|asso\.fr|presse\.fr|fr|gf|gs|co\.il|net\.il|ac\.il|k12\.il|gov\.il|muni\.il|ac\.in|co\.in|org\.in|ernet\.in|gov\.in|net\.in|res\.in|is|it|ac\.jp|co\.jp|go\.jp|or\.jp|ne\.jp|ac\.kr|co\.kr|go\.kr|ne\.kr|nm\.kr|or\.kr|li|lt|lu|asso\.mc|tm\.mc|com\.mm|org\.mm|net\.mm|edu\.mm|gov\.mm|ms|nl|no|nu|pl|ro|org\.ro|store\.ro|tm\.ro|firm\.ro|www\.ro|arts\.ro|rec\.ro|info\.ro|nom\.ro|nt\.ro|se|si|com\.sg|org\.sg|net\.sg|gov\.sg|sk|st|tf|ac\.th|co\.th|go\.th|mi\.th|net\.th|or\.th|tm|to|com\.tr|edu\.tr|gov\.tr|k12\.tr|net\.tr|org\.tr|com\.tw|org\.tw|net\.tw|ac\.uk|uk\.com|uk\.net|gb\.com|gb\.net|vg|sh|kz|ch|info|ua|gov|name|pro|ie|hk|com\.hk|org\.hk|net\.hk|edu\.hk|us|tk|cd|by|ad|lv|eu\.lv|bz|es|jp|cl|ag|mobi|eu|co\.nz|org\.nz|net\.nz|maori\.nz|iwi\.nz|io|la|md|sc|sg|vc|tw|travel|my|se|tv|pt|com\.pt|edu\.pt|asia|fi|com\.ve|net\.ve|fi|org\.ve|web\.ve|info\.ve|co\.ve|tel|im|gr|ru|net\.ru|org\.ru|hr|com\.hr|ly|xyz)$/);
}
function e(t, e) {
var i = t.charAt(0);
e = e.split(i);
return i === t ? e : e[(t = parseInt(t.substring(1), 10)) < 0 ? e.length + t : t - 1];
}
function i(t, e) {
for (var i, n, o = t.charAt(0), r = e.split("&"), s = [], a = {}, l = t.substring(1), h = 0, c = r.length; h < c; h++) if ("" !== (s = (s = r[h].match(/(.*?)=(.*)/)) || [ r[h], r[h], "" ])[1].replace(/\s/g, "")) {
if (s[2] = (n = s[2] || "", _.decodeURIComponent(n.replace(/\+/g, " "))), l === s[1]) return s[2];
(i = s[1].match(/(.*)\[([0-9]+)\]/)) ? (a[i[1]] = a[i[1]] || [], a[i[1]][i[2]] = s[2]) : a[s[1]] = s[2];
}
return o === t ? a : a[l];
}
return function(n, o) {
var r = {};
if ("tld?" === n) return t();
if (o = o || window.location.toString(), !n) return o;
if (n = n.toString(), o.match(/^mailto:([^/].+)/)) s = o.match(/^mailto:([^/].+)/), 
r.protocol = "mailto", r.email = s[1]; else {
if (o.match(/(.*?)\/#!(.*)/) && (o = (s = o.match(/(.*?)\/#!(.*)/))[1] + s[2]), 
o.match(/(.*?)#(.*)/) && (s = o.match(/(.*?)#(.*)/), r.hash = s[2], o = s[1]), r.hash && n.match(/^#/)) return i(n, r.hash);
if (o.match(/(.*?)\?(.*)/) && (s = o.match(/(.*?)\?(.*)/), r.query = s[2], o = s[1]), 
r.query && n.match(/^\?/)) return i(n, r.query);
if (o.match(/(.*?):?\/\/(.*)/) && (s = o.match(/(.*?):?\/\/(.*)/), r.protocol = s[1].toLowerCase(), 
o = s[2]), o.match(/(.*?)(\/.*)/) && (s = o.match(/(.*?)(\/.*)/), r.path = s[2], 
o = s[1]), r.path = (r.path || "").replace(/^([^/])/, "/$1").replace(/\/$/, ""), 
n.match(/^[-0-9]+$/) && (n = n.replace(/^([^/])/, "/$1")), n.match(/^\//)) return e(n, r.path.substring(1));
if ((s = (s = e("/-1", r.path.substring(1))) && s.match(/(.*?)\.(.*)/)) && (r.file = s[0], 
r.filename = s[1], r.fileext = s[2]), o.match(/(.*):([0-9]+)$/) && (s = o.match(/(.*):([0-9]+)$/), 
r.port = s[2], o = s[1]), o.match(/(.*?)@(.*)/) && (s = o.match(/(.*?)@(.*)/), r.auth = s[1], 
o = s[2]), r.auth && (s = r.auth.match(/(.*):(.*)/), r.user = s ? s[1] : r.auth, 
r.pass = s ? s[2] : void 0), r.hostname = o.toLowerCase(), "." === n.charAt(0)) return e(n, r.hostname);
t() && (s = r.hostname.match(t())) && (r.tld = s[3], r.domain = s[2] ? s[2] + "." + s[3] : void 0, 
r.sub = s[1] || void 0);
var s = r.port ? ":" + r.port : "";
r.protocol = r.protocol || window.location.protocol.replace(":", ""), r.port = r.port || ("https" === r.protocol ? "443" : "80"), 
r.protocol = r.protocol || ("443" === r.port ? "https" : "http"), r.basic = r.protocol + "://" + r.hostname + s;
}
return n in r ? r[n] : "{}" === n ? r : "";
};
}(), _.createString = function(t) {
for (var e = t, i = Math.random().toString(36).substr(2); i.length < e; ) i += Math.random().toString(36).substr(2);
return i.substr(0, t);
}, _.createAesKey = function() {
return _.createString(16);
}, _.generateEncryptyData = function(t, e) {
if (void 0 === e) return t;
var i = e.publicKey, n = e.version;
if (void 0 === i || void 0 === n) return t;
if ("undefined" == typeof CryptoJS || "undefined" == typeof JSEncrypt) return t;
var o = _.createAesKey();
try {
var r = CryptoJS.enc.Utf8.parse(o), s = CryptoJS.enc.Utf8.parse(JSON.stringify(t)), a = _.isUndefined(CryptoJS.pad.Pkcs7) ? CryptoJS.pad.PKCS7 : CryptoJS.pad.Pkcs7;
r = CryptoJS.AES.encrypt(s, r, {
mode: CryptoJS.mode.ECB,
padding: a
}).toString();
(a = new JSEncrypt()).setPublicKey(i);
return !1 === (a = a.encrypt(o)) ? (logger$1.warn("Encryption failed, return the original data"), 
t) : {
pkv: n,
ekey: a,
payload: r
};
} catch (t) {
logger$1.warn("Encryption failed, return the original data: " + t);
}
return t;
}, _.getUtm = function() {
var t = {};
return _.each(utmTypes, function(e) {
try {
var i = _.getQueryParam(location.href, e);
i.length && (t[e] = i);
} catch (e) {
logger$1.warn("get utm fail: " + e);
}
}), JSON.stringify(t);
}, _.getQueryParam = function(t, e) {
e = e.replace(/[\[]/, "\\[").replace(/[\]]/, "\\]"), t = _.decodeURIComponent(t);
return null === (t = new RegExp("[\\?&]" + e + "=([^&#]*)").exec(t)) || t && "string" != typeof t[1] && t[1].length ? "" : _.decodeURIComponent(t[1]);
}, _.getUtmFromQuery = function(t) {
var e = {};
return _.each(utmTypes, function(i) {
t[i] && (e[i] = t[i]);
}), JSON.stringify(e);
}, _.indexOf = function(t, e) {
var i = t.indexOf;
if (i) return i.call(t, e);
for (var n = 0; n < t.length; n++) if (e === t[n]) return n;
return -1;
}, _.checkCalibration = function(t) {
return t;
};

var logger$1 = "object" === _typeof(logger$1) ? logger$1 : {};

logger$1.info = function() {
if ("object" === ("undefined" == typeof console ? "undefined" : _typeof(console)) && console.log && logger$1.enabled) try {
return console.log.apply(console, arguments);
} catch (t) {
console.log(arguments[0]);
}
}, logger$1.warn = function() {
if ("object" === ("undefined" == typeof console ? "undefined" : _typeof(console)) && console.log && logger$1.enabled) try {
return console.warn.apply(console, arguments);
} catch (t) {
console.warn(arguments[0]);
}
};

var PlatformProxy = function() {
function t() {
_classCallCheck(this, t), this.config = {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_mg"
};
}
return _createClass(t, [ {
key: "getConfig",
value: function() {
return this.config;
}
}, {
key: "getStorage",
value: function(t, e, i) {
t = localStorage.getItem(t);
if (!e) return _.isJSONString(t) ? JSON.parse(t) : {};
_.isJSONString(t) ? i(JSON.parse(t)) : i({});
}
}, {
key: "setStorage",
value: function(t, e) {
localStorage.setItem(t, e);
}
}, {
key: "removeStorage",
value: function(t) {
localStorage.removeItem(t);
}
}, {
key: "_setSystemProxy",
value: function(t) {
this._sysCallback = t;
}
}, {
key: "getSystemInfo",
value: function(t) {
var e = {
mp_platform: "web",
system: this._getOs(),
screenWidth: window.screen.width,
screenHeight: window.screen.height,
systemLanguage: navigator.language
};
this._sysCallback && (e = _.extend(e, this._sysCallback(t))), t.success(e), t.complete();
}
}, {
key: "_getOs",
value: function() {
var t = navigator.userAgent;
return /Windows/i.test(t) ? /Phone/.test(t) || /WPDesktop/.test(t) ? "Windows Phone" : "Windows" : /(iPhone|iPad|iPod)/.test(t) ? "iOS" : /Android/.test(t) ? "Android" : /(BlackBerry|PlayBook|BB10)/i.test(t) ? "BlackBerry" : /Mac/i.test(t) ? "MacOS" : /Linux/.test(t) ? "Linux" : /CrOS/.test(t) ? "ChromeOS" : "";
}
}, {
key: "getNetworkType",
value: function(t) {
t.complete();
}
}, {
key: "onNetworkStatusChange",
value: function() {}
}, {
key: "request",
value: function(t) {
var e = {}, i = new XMLHttpRequest();
if (i.open(t.method, t.url), t.header) for (var n in t.header) i.setRequestHeader(n, t.header[n]);
return i.onreadystatechange = function() {
4 === i.readyState && 200 === i.status ? (e.statusCode = 200, _.isJSONString(i.responseText) && (e.data = JSON.parse(i.responseText)), 
t.success(e)) : 200 !== i.status && (e.errMsg = "network error", t.fail(e));
}, i.ontimeout = function() {
e.errMsg = "timeout", t.fail(e);
}, i.send(t.data), i;
}
}, {
key: "initAutoTrackInstance",
value: function(t, e) {
this.instance = t, this.autoTrack = e.autoTrack;
var i = this;
"onpagehide" in window ? window.onpagehide = function() {
i.onPageHide(!0);
} : window.onbeforeunload = function() {
i.onPageHide(!0);
}, i.onPageShow(), i.autoTrack.appHide && i.instance.timeEvent("ta_page_hide"), 
"onvisibilitychange" in document && (document.onvisibilitychange = function() {
document.hidden ? i.onPageHide(!1) : (i.onPageShow(), i.autoTrack.appHide && i.instance.timeEvent("ta_page_hide"));
});
}
}, {
key: "setGlobal",
value: function(t, e) {
window[e] = t;
}
}, {
key: "getAppOptions",
value: function() {}
}, {
key: "showToast",
value: function() {}
}, {
key: "onPageShow",
value: function() {
var t;
this.autoTrack.appShow && (t = {}, _.extend(t, this.autoTrack.properties), _.isFunction(this.autoTrack.callback) && _.extend(t, this.autoTrack.callback("appShow")), 
this.instance._internalTrack("ta_page_show", t));
}
}, {
key: "onPageHide",
value: function(t) {
var e;
this.autoTrack.appHide && (e = {}, _.extend(e, this.autoTrack.properties), _.isFunction(this.autoTrack.callback) && _.extend(e, this.autoTrack.callback("appHide")), 
this.instance._internalTrack("ta_page_hide", e, new Date(), null, t));
}
} ], [ {
key: "createInstance",
value: function() {
return new t();
}
} ]), t;
}(), AutoTrackBridge = function() {
function t(e, i) {
_classCallCheck(this, t), this.taInstance = e, this.config = i || {}, this.referrer = "Directly open", 
this.config.isPlugin ? (e.App = function() {
App.apply(this, arguments);
}, inension(e.Page)) : (e = App, App = this._initAppExtention(e), e = Page, Page = this._initPageExtension(e));
}
return _createClass(t, [ {
key: "_initPageExtension",
value: function(t) {
var e = this;
return function(i) {
var n = i.onShow, o = i.onShareAppMessage;
return i.onShow = function(t) {
e.onPageShow(), "function" == typeof n && n.call(this, t);
}, "function" == typeof o && (i.onShareAppMessage = function(t) {
t = o.call(this, t);
return e.onPageShare(t);
}), t(i);
};
}
}, {
key: "_initAppExtention",
value: function(t) {
var e = this;
return function(i) {
var n = i.onLaunch, o = i.onShow, r = i.onHide;
return i.onLaunch = function(t) {
e.onAppLaunch(t, this), "function" == typeof n && n.call(this, t);
}, i.onShow = function(t) {
e.onAppShow(t), "function" == typeof o && o.call(this, t);
}, i.onHide = function() {
e.onAppHide(), "function" == typeof r && r.call(this);
}, t(i);
};
}
}, {
key: "onAppLaunch",
value: function(t, e) {
this._setAutoTrackProperties(t), _.isUndefined(e) || (e[this.taInstance.name] = this.taInstance), 
this.config.appLaunch && (e = {}, t && t.path && (e["#url_path"] = this._getPath(t.path)), 
t && t.query && (e["#utm"] = _.getUtmFromQuery(t.query)), this.taInstance._internalTrack("ta_mp_launch", e));
}
}, {
key: "onAppShow",
value: function(t) {
var e;
this.config.appHide && this.taInstance.timeEvent("ta_mp_hide"), this._setAutoTrackProperties(t), 
this.config.appShow && (e = {}, t && t.path && (e["#url_path"] = this._getPath(t.path)), 
t && t.query && (e["#utm"] = _.getUtmFromQuery(t.query)), _.extend(e, this.config.properties), 
_.isFunction(this.config.callback) && _.extend(e, this.config.callback("appShow")), 
this.taInstance._internalTrack("ta_mp_show", e));
}
}, {
key: "onAppHide",
value: function() {
var t;
this.config.appHide && (t = {
"#url_path": this._getCurrentPath()
}, _.extend(t, this.config.properties), _.isFunction(this.config.callback) && _.extend(t, this.config.callback("appHide")), 
this.taInstance._internalTrack("ta_mp_hide", t));
}
}, {
key: "_getCurrentPath",
value: function() {
var t = "Not to get";
try {
var e = getCurrentPages();
t = e[e.length - 1].route;
} catch (t) {
logger$1.info(t);
}
return t;
}
}, {
key: "_setAutoTrackProperties",
value: function(t) {
t = {
"#scene": t.scene
};
this.taInstance._setAutoTrackProperties(t);
}
}, {
key: "_getPath",
value: function(t) {
return "string" == typeof t ? t.replace(/^\//, "") : "Abnormal values";
}
}, {
key: "onPageShare",
value: function(t) {
return this.config.pageShare && this.taInstance._internalTrack("ta_mp_share", {
"#url_path": this._getCurrentPath()
}), _.isObject(t) ? t : {};
}
}, {
key: "onPageShow",
value: function() {
var t, e;
this.config.pageShow && (e = {
"#url_path": (t = this._getCurrentPath()) || "The system did not get a value",
"#referrer": this.referrer
}, this.referrer = t, this.taInstance._internalTrack("ta_mp_view", e));
}
} ]), t;
}(), AutoTrackBridge$1 = function() {
function t(e, i, n) {
var o = this;
_classCallCheck(this, t), this.taInstance = e, this.config = i || {};
i = n.getLaunchOptionsSync();
this._onShow(i), this.startTracked = !0, n.onShow(function(t) {
o._onShow(t);
}), n.onHide(function() {
var t;
o.startTracked = !1, o.config.appHide && (t = {}, _.extend(t, o.config.properties), 
_.isFunction(o.config.callback) && _.extend(t, o.config.callback("appHide")), o.taInstance._internalTrack("ta_mg_hide", t));
});
}
return _createClass(t, [ {
key: "_onShow",
value: function(t) {
this.startTracked || (this.config.appHide && this.taInstance.timeEvent("ta_mg_hide"), 
t && t.scene && this.taInstance._setAutoTrackProperties({
"#scene": t.scene
}), this.config.appShow && (t = {}, _.extend(t, this.config.properties), _.isFunction(this.config.callback) && _.extend(t, this.config.callback("appShow")), 
this.taInstance._internalTrack("ta_mg_show", t)));
}
} ]), t;
}(), PlatformProxy$1 = function() {
function t(e, i, n) {
_classCallCheck(this, t), this.api = e, this.config = i, this._config = n;
}
return _createClass(t, [ {
key: "getConfig",
value: function() {
return this.config;
}
}, {
key: "getStorage",
value: function(t, e, i) {
if (!e) {
if ("dd_mp" === this._config.platform) {
var n = this.api.getStorageSync({
key: t
});
return _.isJSONString(n.data) ? JSON.parse(n.data) : {};
}
n = this.api.getStorageSync(t);
return _.isJSONString(n) ? JSON.parse(n) : {};
}
this.api.getStorage({
key: t,
success: function(t) {
t = _.isJSONString(t.data) ? JSON.parse(t.data) : {};
i(t);
},
fail: function() {
logger$1.warn("getStorage faild"), i({});
}
});
}
}, {
key: "setStorage",
value: function(t, e) {
"ali_mp" === this._config.platform || "tb_mp" === this._config.platform || "dd_mp" === this._config.platform ? this.api.setStorageSync({
key: t,
data: e
}) : this.api.setStorageSync(t, e);
}
}, {
key: "removeStorage",
value: function(t) {
_.isFunction(this.api.removeStorage) ? this.api.removeStorage({
key: t
}) : _.isFunction(this.api.deleteStorage) && this.api.deleteStorage({
key: t
});
}
}, {
key: "_getPlatform",
value: function() {
return "";
}
}, {
key: "getSystemInfo",
value: function(t) {
var e = this._config.mpPlatform;
this.api.getSystemInfo({
success: function(i) {
_.isFunction(e) ? i.mp_platform = e(i) : i.mp_platform = e, t.success(i), "wechat" === e && t.complete();
},
complete: function() {
t.complete();
}
});
}
}, {
key: "getNetworkType",
value: function(t) {
_.isFunction(this.api.getNetworkType) ? this.api.getNetworkType({
success: function(e) {
t.success(e);
},
complete: function() {
t.complete();
}
}) : (t.success({}), t.complete());
}
}, {
key: "onNetworkStatusChange",
value: function(t) {
_.isFunction(this.api.onNetworkStatusChange) ? this.api.onNetworkStatusChange(t) : t({});
}
}, {
key: "request",
value: function(t) {
if ("ali_mp" !== this._config.platform && "dd_mp" !== this._config.platform) return this.api.request(t);
var e = _.extend({}, t);
return e.headers = t.header, e.success = function(e) {
e.statusCode = e.status, t.success(e);
}, e.fail = function(e) {
e.errMsg = e.errorMessage, t.fail(e);
}, "dd_mp" === this._config.platform ? this.api.httpRequest(e) : this.api.request(e);
}
}, {
key: "initAutoTrackInstance",
value: function(t, e) {
return _.isObject(e.autoTrack) && (e.autoTrack.isPlugin = e.is_plugin), new (this._config.mp ? AutoTrackBridge : AutoTrackBridge$1)(t, e.autoTrack, this.api);
}
}, {
key: "setGlobal",
value: function(t, e) {
this._config.mp ? logger$1.warn("ThinkingAnalytics: we do not set global name for TA instance when you do not enable auto track.") : GameGlobal[e] = t;
}
}, {
key: "getAppOptions",
value: function(t) {
var e = {};
try {
e = this.api.getLaunchOptionsSync();
} catch (t) {
logger$1.warn("Cannot get launch options.");
}
if (_.isFunction(t)) try {
this._config.mp ? this.api.onAppShow(t) : this.api.onShow(t);
} catch (t) {
logger$1.warn("Cannot register onShow callback.");
}
return e;
}
}, {
key: "showToast",
value: function(t) {
var e;
_.isFunction(this.api.showToast) && (e = {
title: t
}, "dd_mp" !== this._config.platform && "ali_mp" !== this._config.platform || (e.content = t), 
this.api.showToast(e));
}
} ], [ {
key: "createInstance",
value: function() {
return this._createInstance("R_CURRENT_PLATFORM");
}
}, {
key: "_createInstance",
value: function(e) {
switch (e) {
case "wechat_mp":
return new t(wx, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_wechat"
}, {
mpPlatform: "wechat",
mp: !0,
platform: e
});

case "wechat_mg":
return new t(wx, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_wechat_game"
}, {
mpPlatform: "wechat",
platform: e
});

case "qq_mp":
return new t(qq, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_qq"
}, {
mpPlatform: "qq",
mp: !0,
platform: e
});

case "qq_mg":
return new t(qq, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_qq_game"
}, {
mpPlatform: "qq",
platform: e
});

case "baidu_mp":
return new t(swan, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_swan"
}, {
mpPlatform: function(t) {
return t.host;
},
mp: !0,
platform: e
});

case "baidu_mg":
return new t(swan, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_swan_game"
}, {
mpPlatform: function(t) {
return t.host;
},
platform: e
});

case "tt_mg":
return new t(tt, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_tt_game"
}, {
mpPlatform: function(t) {
return t.appName;
},
platform: e
});

case "tt_mp":
return new t(tt, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_tt"
}, {
mpPlatform: function(t) {
return t.appName;
},
mp: !0,
platform: e
});

case "ali_mp":
return new t(my, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_ali"
}, {
mpPlatform: function(t) {
return t.app;
},
mp: !0,
platform: e
});

case "dd_mp":
return new t(dd, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_dd"
}, {
mpPlatform: "dingding",
mp: !0,
platform: e
});

case "bl_mg":
return new t(bl, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_mg"
}, {
mpPlatform: "bilibili",
platform: e
});

case "kuaishou_mp":
return new t(ks, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_kuaishou"
}, {
mpPlatform: "kuaishou",
mp: !0,
platform: e
});

case "qh360_mg":
return new t(qh, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_qh360"
}, {
mpPlatform: "qh360",
platform: e
});

case "tb_mp":
return new t(my, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_tb"
}, {
mpPlatform: "tb",
mp: !0,
platform: e
});

case "jd_mp":
return new t(jd, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_jd"
}, {
mpPlatform: "jd",
mp: !0,
platform: e
});

case "qh360_mp":
return new t(qh, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_qh360"
}, {
mpPlatform: "qh360",
mp: !0,
platform: e
});

case "WEB":
return new PlatformProxy.createInstance();
}
}
} ]), t;
}(), AutoTrackBridge$2 = function t(e, i) {
var n = this;
_classCallCheck(this, t), this.taInstance = e, this.config = i || {}, this.config.appShow && this.taInstance._internalTrack("ta_mg_show"), 
this.config.appHide && this.taInstance.timeEvent("ta_mg_hide"), qg.onShow(function() {
var t;
n.config.appHide && n.taInstance.timeEvent("ta_mg_hide"), n.config.appShow && (t = {}, 
_.extend(t, n.config.properties), _.isFunction(n.config.callback) && _.extend(t, n.config.callback("appShow")), 
n.taInstance._internalTrack("ta_mg_show"));
}), qg.onHide(function() {
var t;
n.config.appHide && (t = {}, _.extend(t, n.config.properties), _.isFunction(n.config.callback) && _.extend(t, n.config.callback("appHide")), 
n.taInstance._internalTrack("ta_mg_hide"));
});
}, PlatformProxy$2 = function() {
function t() {
_classCallCheck(this, t), this.config = {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_qg_vivo_game",
asyncPersistence: !0
};
}
return _createClass(t, [ {
key: "getConfig",
value: function() {
return this.config || {};
}
}, {
key: "getStorage",
value: function(t, e, i) {
if (!e) {
e = qg.getStorageSync({
key: t
});
return _.isJSONString(e) ? JSON.parse(e) : {};
}
qg.getStorage({
key: t,
success: function(t) {
t = _.isJSONString(t) ? JSON.parse(t) : {};
i(t);
},
fail: function() {
i({});
}
});
}
}, {
key: "setStorage",
value: function(t, e) {
qg.setStorage({
key: t,
value: e
});
}
}, {
key: "removeStorage",
value: function(t) {
qg.deleteStorage({
key: t
});
}
}, {
key: "getSystemInfo",
value: function(t) {
qg.getSystemInfo({
success: function(e) {
var i = e, n = [ e.osType, e.osVersionName ].join(" ");
i.brand = e.manufacturer, i.system = n, i.mp_platform = "vivo_qg", t.success(i);
},
complete: function() {
t.complete();
}
});
}
}, {
key: "getNetworkType",
value: function(t) {
qg.getNetworkType({
success: function(e) {
var i = e;
i.networkType = e.type, t.success(i);
},
complete: function() {
t.complete();
}
});
}
}, {
key: "onNetworkStatusChange",
value: function(t) {
qg.subscribeNetworkStatus({
callback: function(e) {
var i = e;
i.networkType = e.type, t(i);
}
});
}
}, {
key: "request",
value: function(t) {
return qg.request({
url: t.url,
data: t.data,
method: t.method,
header: t.header,
success: function(e) {
t.success(e);
},
fail: function(e) {
t.fail(e);
}
});
}
}, {
key: "initAutoTrackInstance",
value: function(t, e) {
return new AutoTrackBridge$2(t, e.autoTrack);
}
}, {
key: "setGlobal",
value: function(t, e) {
globalThis[e] = t;
}
}, {
key: "getAppOptions",
value: function() {
return {};
}
}, {
key: "showToast",
value: function(t) {
qg.showToast({
message: t,
duration: 0
});
}
} ], [ {
key: "createInstance",
value: function() {
return new t();
}
} ]), t;
}(), AutoTrackBridge$3 = function t(e, i, n) {
var o = this;
_classCallCheck(this, t), this.taInstance = e, this.config = i || {}, this.config.appShow && (i = {}, 
_.extend(i, this.config.properties), _.isFunction(this.config.callback) && _.extend(i, this.config.callback("appShow")), 
this.taInstance._internalTrack("ta_mg_show", i)), this.config.appHide && this.taInstance.timeEvent("ta_mg_hide"), 
n.onShow(function() {
var t;
o.config.appHide && o.taInstance.timeEvent("ta_mg_hide"), o.config.appShow && (t = {}, 
_.extend(t, o.config.properties), _.isFunction(o.config.callback) && _.extend(t, o.config.callback("appShow")), 
o.taInstance._internalTrack("ta_mg_show", t));
}), n.onHide(function() {
var t;
o.config.appHide && (t = {}, _.extend(t, o.config.properties), _.isFunction(o.config.callback) && _.extend(t, o.config.callback("appHide")), 
o.taInstance._internalTrack("ta_mg_hide", t));
});
}, PlatformProxy$3 = function() {
function t(e, i, n) {
_classCallCheck(this, t), this.api = e, this.config = i, this._config = n;
}
return _createClass(t, [ {
key: "getConfig",
value: function() {
return this.config || {};
}
}, {
key: "getStorage",
value: function(t, e, i) {
t = localStorage.getItem(t);
if (!e) return _.isJSONString(t) ? JSON.parse(t) : {};
_.isJSONString(t) ? i(JSON.parse(t)) : i({});
}
}, {
key: "setStorage",
value: function(t, e) {
localStorage.setItem(t, e);
}
}, {
key: "removeStorage",
value: function(t) {
localStorage.removeItem(t);
}
}, {
key: "getSystemInfo",
value: function(t) {
var e = this._config.mpPlatform;
this.api.getSystemInfo({
success: function(i) {
i.mp_platform = e, t.success(i);
},
complete: function() {
t.complete();
}
});
}
}, {
key: "getNetworkType",
value: function(t) {
this.api.getNetworkType({
success: function(e) {
t.success(e);
},
complete: function() {
t.complete();
}
});
}
}, {
key: "onNetworkStatusChange",
value: function(t) {
this.api.onNetworkStatusChange({
callback: function(e) {
t(e);
}
});
}
}, {
key: "request",
value: function(t) {
var e = {}, i = new XMLHttpRequest();
if (i.open(t.method, t.url), t.header) for (var n in t.header) i.setRequestHeader(n, t.header[n]);
return i.onreadystatechange = function() {
4 === i.readyState && 200 === i.status ? (e.statusCode = 200, _.isJSONString(i.responseText) && (e.data = JSON.parse(i.responseText)), 
t.success(e)) : 200 !== i.status && (e.errMsg = "network error", t.fail(e));
}, i.ontimeout = function() {
e.errMsg = "timeout", t.fail(e);
}, i.send(t.data), i;
}
}, {
key: "initAutoTrackInstance",
value: function(t, e) {
return new AutoTrackBridge$3(t, e.autoTrack, this.api);
}
}, {
key: "setGlobal",
value: function(t, e) {
globalThis[e] = t;
}
}, {
key: "getAppOptions",
value: function() {
return this.api.getLaunchOptionsSync();
}
}, {
key: "showToast",
value: function(t) {
this.api.showToast({
title: t,
icon: "none",
duration: 2e3
});
}
} ], [ {
key: "createInstance",
value: function() {
return this._createInstance("R_CURRENT_PLATFORM");
}
}, {
key: "_createInstance",
value: function(e) {
switch (e) {
case "oppo":
return new t(qg, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_qg_oppo_game"
}, {
mpPlatform: "oppo_qg"
});

case "huawei":
return new t(hbs, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_qg_huawei_game"
}, {
mpPlatform: "huawei_qg"
});

case "mz":
return new t(qg, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_qg_mz_game"
}, {
mpPlatform: "mz"
});

case "xiaomi":
return new t(qg, {
persistenceName: "thinkingdata",
persistenceNameOld: "thinkingdata_qg"
}, {
mpPlatform: "xiaomi"
});
}
}
} ]), t;
}(), PlatformProxyCC = function() {
function t() {
_classCallCheck(this, t);
}
return _createClass(t, null, [ {
key: "createInstance",
value: function() {
var t = Object.freeze({
WECHAT_GAME: 104,
QQ_PLAY: 105,
BAIDU_GAME: 107,
VIVO_GAME: 108,
OPPO_GAME: 109,
HUAWEI_GAME: 110,
XIAOMI_GAME: 111,
BYTEDANCE_GAME: 117,
QTT_GAME: 116,
LINKSURE: 119,
WECHAT_MINI_GAME: "WECHAT_GAME",
BAIDU_MINI_GAME: "BAIDU_MINI_GAME",
XIAOMI_QUICK_GAME: "XIAOMI_QUICK_GAME",
OPPO_MINI_GAME: "OPPO_MINI_GAME",
VIVO_MINI_GAME: "VIVO_MINI_GAME",
HUAWEI_QUICK_GAME: "HUAWEI_QUICK_GAME",
BYTEDANCE_MINI_GAME: "BYTEDANCE_MINI_GAME",
QTT_MINI_GAME: "QTT_MINI_GAME",
LINKSURE_MINI_GAME: "LINKSURE_MINI_GAME"
});
if (cc.sys.platform === t.WECHAT_GAME || cc.sys.platform === t.WECHAT_MINI_GAME) return PlatformProxy$1._createInstance("wechat_mg");
if (cc.sys.platform === t.BAIDU_GAME || cc.sys.platform === t.BAIDU_MIN_GAME) return PlatformProxy$1._createInstance("baidu_mg");
if (cc.sys.platform === t.VIVO_GAME || cc.sys.platform === t.VIVO_MINI_GAME) return PlatformProxy$2.createInstance();
if (cc.sys.platform === t.QQ_PLAY) return PlatformProxy$1._createInstance("qq_mg");
if (cc.sys.platform === t.OPPO_GAME || cc.sys.platform === t.OPPO_MINI_GAME) return PlatformProxy$3._createInstance("oppo");
if (cc.sys.platform === t.HUAWEI_GAME || cc.sys.platform === t.HUAWEI_QUICK_GAME) return PlatformProxy$3._createInstance("huawei");
if (cc.sys.platform === t.XIAOMI_GAME || cc.sys.platform === t.XIAOMI_QUICK_GAME) return PlatformProxy$3._createInstance("xiaomi");
if (cc.sys.platform === t.BYTEDANCE_GAME || cc.sys.platform === t.BYTEDANCE_MINI_GAME) return PlatformProxy$1._createInstance("tt_mg");
var e = PlatformProxy.createInstance();
return e._sysCallback = function() {
return {
system: cc.sys.os.replace(" ", "") + " " + cc.sys.osVersion
};
}, e.getNetworkType = function(t) {
var e = {};
switch (cc.sys.getNetworkType()) {
case cc.sys.NetworkType.LAN:
e.networkType = "WIFI";
break;

case cc.sys.NetworkType.WWAN:
e.networkType = "WWAN";
break;

default:
e.networkType = "NONE";
}
t.success(e), t.complete();
}, e.getSystemInfo = function(t) {
var i = {
mp_platform: cc.sys.platform.toString(),
system: e._getOs(),
screenWidth: window.screen.width,
screenHeight: window.screen.height
};
e._sysCallback && (i = _.extend(i, e._sysCallback(t))), t.success(i), t.complete();
}, e;
}
} ]), t;
}(), PlatformAPI = function() {
function t() {
_classCallCheck(this, t);
}
return _createClass(t, null, [ {
key: "_getCurrentPlatform",
value: function() {
return this.currentPlatform || (this.currentPlatform = PlatformProxyCC.createInstance());
}
}, {
key: "getConfig",
value: function() {
return this._getCurrentPlatform().getConfig();
}
}, {
key: "getStorage",
value: function(t, e, i) {
return this._getCurrentPlatform().getStorage(t, e, i);
}
}, {
key: "setStorage",
value: function(t, e) {
return this._getCurrentPlatform().setStorage(t, e);
}
}, {
key: "removeStorage",
value: function(t) {
return this._getCurrentPlatform().removeStorage(t);
}
}, {
key: "getSystemInfo",
value: function(t) {
return this._getCurrentPlatform().getSystemInfo(t);
}
}, {
key: "getNetworkType",
value: function(t) {
return this._getCurrentPlatform().getNetworkType(t);
}
}, {
key: "onNetworkStatusChange",
value: function(t) {
this._getCurrentPlatform().onNetworkStatusChange(t);
}
}, {
key: "request",
value: function(t) {
return this._getCurrentPlatform().request(t);
}
}, {
key: "initAutoTrackInstance",
value: function(t, e) {
return this._getCurrentPlatform().initAutoTrackInstance(t, e);
}
}, {
key: "setGlobal",
value: function(t, e) {
t && e && this._getCurrentPlatform().setGlobal(t, e);
}
}, {
key: "getAppOptions",
value: function(t) {
return this._getCurrentPlatform().getAppOptions(t);
}
}, {
key: "showDebugToast",
value: function(t) {
this._getCurrentPlatform().showToast(t);
}
} ]), t;
}(), KEY_NAME_MATCH_REGEX = /^[a-zA-Z][a-zA-Z0-9_]{0,49}$/, PropertyChecker = function() {
function t() {
_classCallCheck(this, t);
}
return _createClass(t, null, [ {
key: "stripProperties",
value: function(t) {
return _.isObject(t) && _.each(t, function(t, e) {
_.isString(t) || _.isNumber(t) || _.isDate(t) || _.isBoolean(t) || _.isArray(t) || _.isObject(t) || logger$1.warn("Your data -", e, t, "- format does not meet requirements and may not be stored correctly. Attribute values only support String, Number, Date, Boolean, Array, Object");
}), t;
}
}, {
key: "_checkPropertiesKey",
value: function(t) {
var e = !0;
return _.each(t, function(t, i) {
KEY_NAME_MATCH_REGEX.test(i) || (logger$1.warn("Invalid KEY: " + i), e = !1);
}), e;
}
}, {
key: "event",
value: function(t) {
return !(!_.isString(t) || !KEY_NAME_MATCH_REGEX.test(t)) || (logger$1.warn("Check the parameter format. The eventName must start with an English letter and contain no more than 50 characters including letters, digits, and underscores: " + t), 
!1);
}
}, {
key: "propertyName",
value: function(t) {
return !(!_.isString(t) || !KEY_NAME_MATCH_REGEX.test(t)) || (logger$1.warn("Check the parameter format. PropertyName must start with a letter and contain letters, digits, and underscores (_). The value is a string of no more than 50 characters: " + t), 
!1);
}
}, {
key: "properties",
value: function(t) {
return this.stripProperties(t), !(t && (_.isObject(t) ? !this._checkPropertiesKey(t) && (logger$1.warn("Check the parameter format. The properties key must start with a letter, contain digits, letters, and underscores (_), and contain a maximum of 50 characters"), 
1) : (logger$1.warn("properties can be none, but it must be an object"), 1)));
}
}, {
key: "propertiesMust",
value: function(t) {
return this.stripProperties(t), void 0 === t || !_.isObject(t) || _.isEmptyObject(t) ? (logger$1.warn("properties must be an object with a value"), 
!1) : !!this._checkPropertiesKey(t) || (logger$1.warn("Check the parameter format. The properties key must start with a letter, contain digits, letters, and underscores (_), and contain a maximum of 50 characters"), 
!1);
}
}, {
key: "userId",
value: function(t) {
return !(!_.isString(t) || !/^.{1,64}$/.test(t)) || (logger$1.warn("The user ID must be a string of less than 64 characters and cannot be null"), 
!1);
}
}, {
key: "userAddProperties",
value: function(t) {
if (!this.propertiesMust(t)) return !1;
for (var e in t) if (!_.isNumber(t[e])) return logger$1.warn("The attributes of userAdd need to be Number"), 
!1;
return !0;
}
}, {
key: "userAppendProperties",
value: function(t) {
if (!this.propertiesMust(t)) return !1;
for (var e in t) if (!_.isArray(t[e])) return logger$1.warn("The attribute of userAppend must be Array"), 
!1;
return !0;
}
} ]), t;
}(), HttpTask = function() {
function t(e, i, n, o, r) {
_classCallCheck(this, t), this.data = e, this.serverUrl = i, this.callback = r, 
this.tryCount = _.isNumber(n) ? n : 1, this.timeout = _.isNumber(o) ? o : 3e3, this.taClassName = "HttpTask";
}
return _createClass(t, [ {
key: "run",
value: function() {
var t = this, e = _.createExtraHeaders();
e["content-type"] = "application/json";
var i = PlatformAPI.request({
url: this.serverUrl,
method: "POST",
data: this.data,
header: e,
success: function(e) {
t.onSuccess(e), clearTimeout(n);
},
fail: function(e) {
t.onFailed(e), clearTimeout(n);
}
}), n = setTimeout(function() {
(_.isObject(i) || _.isPromise(i)) && _.isFunction(i.abort) && i.abort();
}, this.timeout);
}
}, {
key: "onSuccess",
value: function(t) {
if (200 === t.statusCode) {
var e;
switch (t.data.code) {
case 0:
e = "success";
break;

case -1:
e = "invalid data";
break;

case -2:
e = "invalid APP ID";
break;

default:
e = "Unknown return code";
}
this.callback({
code: t.data.code,
msg: e
});
} else this.callback({
code: -3,
msg: t.statusCode
});
}
}, {
key: "onFailed",
value: function(t) {
0 < --this.tryCount ? this.run() : this.callback({
code: -3,
msg: t.errMsg
});
}
} ]), t;
}(), HttpTaskDebug = function() {
function t(e, i, n, o, r, s, a) {
_classCallCheck(this, t), this.data = e, this.serverDebugUrl = i, this.callback = a, 
this.tryCount = _.isNumber(n) ? n : 1, this.timeout = _.isNumber(o) ? o : 3e3, this.dryrun = r, 
this.deviceId = s, this.taClassName = "HttpTaskDebug";
}
return _createClass(t, [ {
key: "run",
value: function() {
var t = this, e = "appid=" + this.data["#app_id"] + "&source=client&dryRun=" + this.dryrun + "&deviceId=" + this.deviceId + "&data=" + encodeURIComponent(JSON.stringify(this.data.data[0])), i = _.createExtraHeaders();
i["content-type"] = "application/x-www-form-urlencoded";
var n = PlatformAPI.request({
url: this.serverDebugUrl,
method: "POST",
data: e,
header: i,
success: function(e) {
t.onSuccess(e), clearTimeout(o);
},
fail: function(e) {
t.onFailed(e), clearTimeout(o);
}
}), o = setTimeout(function() {
(_.isObject(n) || _.isPromise(n)) && _.isFunction(n.abort) && n.abort();
}, this.timeout);
}
}, {
key: "onSuccess",
value: function(t) {
if (200 === t.statusCode) {
var e;
if (0 === t.data.errorLevel) e = "Verify data success."; else if (1 === t.data.errorLevel) {
for (var i = t.data.errorProperties, n = "", o = 0; o < i.length; o++) {
var r = i[o].errorReason;
n = n + " propertyName:" + i[o].propertyName + " errorReasons:" + r + "\n";
}
e = "Debug data error. errorLevel:" + t.data.errorLevel + " reason:" + n;
} else 2 !== t.data.errorLevel && -1 !== t.data.errorLevel || (e = "Debug data error. errorLevel:" + t.data.errorLevel + " reason:" + t.data.errorReasons);
logger$1.info(e), this.callback({
code: t.data.errorLevel,
msg: e
});
} else this.callback({
code: -3,
msg: t.statusCode
});
}
}, {
key: "onFailed",
value: function(t) {
0 < --this.tryCount ? this.run() : this.callback({
code: -3,
msg: t.errMsg
});
}
} ]), t;
}(), SenderQueue = function() {
function t() {
_classCallCheck(this, t), this.items = [], this.isRunning = !1, this.showDebug = !1;
}
return _createClass(t, [ {
key: "enqueue",
value: function(t, e, i, n) {
n = !(3 < arguments.length && void 0 !== n) || n;
var o = this;
e = "debug" === i.debugMode ? new HttpTaskDebug(t, e, i.maxRetries, i.sendTimeout, 0, i.deviceId, function(t) {
o.isRunning = !1, _.isFunction(i.callback) && i.callback(t), o._runNext(), !1 === o.showDebug && (0 !== t.code && 1 !== t.code && 2 !== t.code || (o.showDebug = !0, 
_.isFunction(PlatformAPI.showDebugToast) && PlatformAPI.showDebugToast("The current mode is Debug")));
}) : "debugOnly" === i.debugMode ? new HttpTaskDebug(t, e, i.maxRetries, i.sendTimeout, 1, i.deviceId, function(t) {
o.isRunning = !1, _.isFunction(i.callback) && i.callback(t), o._runNext(), !1 === o.showDebug && (0 !== t.code && 1 !== t.code && 2 !== t.code || (o.showDebug = !0, 
_.isFunction(PlatformAPI.showDebugToast) && PlatformAPI.showDebugToast("The current mode is debugOnly")));
}) : new HttpTask(JSON.stringify(t), e, i.maxRetries, i.sendTimeout, function(t) {
o.isRunning = !1, _.isFunction(i.callback) && i.callback(t), o._runNext();
});
!0 === n ? (this.items.push(e), this._runNext()) : e.run();
}
}, {
key: "_dequeue",
value: function() {
return this.items.shift();
}
}, {
key: "_runNext",
value: function() {
if (0 < this.items.length && !this.isRunning) if (this.isRunning = !0, "HttpTask" !== this.items[0].taClassName) this._dequeue().run(); else {
var t = this.items.splice(0, this.items.length), e = t[0], i = JSON.parse(e.data), n = i["#app_id"], o = [];
o.push(e.callback);
for (var r = 1; r < t.length; r++) {
var s = t[r], a = JSON.parse(s.data);
a["#app_id"] === n && e.serverUrl === s.serverUrl ? (i.data = i.data.concat(a.data), 
o.push(s.callback)) : this.items.push(s);
}
var l = new Date().getTime();
i["#flush_time"] = l, new HttpTask(JSON.stringify(i), e.serverUrl, e.tryCount, e.timeout, function(t) {
for (var e in o) Object.hasOwnProperty.call(o, e) && (0, o[e])(t);
}).run();
}
}
} ]), t;
}(), senderQueue = new SenderQueue(), DEFAULT_CONFIG = {
name: "thinkingdata",
is_plugin: !1,
maxRetries: 3,
sendTimeout: 3e3,
enablePersistence: !0,
asyncPersistence: !1,
enableLog: !0,
strict: !1,
debugMode: "none",
enableCalibrationTime: !1
}, systemInformation = {
properties: {
"#lib": Config.LIB_NAME,
"#lib_version": Config.LIB_VERSION
},
initDeviceId: function(t) {
_.isString(t) && (this.properties["#device_id"] = t);
},
getSystemInfo: function(t) {
var e = this;
PlatformAPI.onNetworkStatusChange(function(t) {
e.properties["#network_type"] = t.networkType;
}), PlatformAPI.getNetworkType({
success: function(t) {
e.properties["#network_type"] = t.networkType;
},
complete: function() {
PlatformAPI.getSystemInfo({
success: function(t) {
logger$1.info(JSON.stringify(t, null, 4));
var i = t.system ? t.system.replace(/\s+/g, " ").split(" ") : [];
i = {
"#manufacturer": t.brand,
"#device_model": t.model,
"#screen_width": Number(t.screenWidth),
"#screen_height": Number(t.screenHeight),
"#os": i[0],
"#os_version": i[1],
"#mp_platform": t.mp_platform,
"#system_language": t.systemLanguage
};
_.extend(e.properties, i), _.setMpPlatform(t.mp_platform);
},
complete: function() {
t();
}
});
}
});
}
}, ThinkingDataPersistence = function() {
function t(e, i) {
var n = this;
_classCallCheck(this, t), this.enabled = e.enablePersistence, this.enabled ? (e.isChildInstance ? (this.name = e.persistenceName + "_" + e.name, 
this.nameOld = e.persistenceNameOld + "_" + e.name) : (this.name = e.persistenceName, 
this.nameOld = e.persistenceNameOld), e.asyncPersistence ? (this._state = {}, PlatformAPI.getStorage(this.name, !0, function(t) {
_.isEmptyObject(t) ? PlatformAPI.getStorage(n.nameOld, !0, function(t) {
n._state = _.extend2Layers({}, t, n._state), n._init(e, i), n._save();
}) : (n._state = _.extend2Layers({}, t, n._state), n._init(e, i), n._save());
})) : (this._state = PlatformAPI.getStorage(this.name) || {}, _.isEmptyObject(this._state) && (this._state = PlatformAPI.getStorage(this.nameOld) || {}), 
this._init(e, i))) : (this._state = {}, this._init(e, i));
}
return _createClass(t, [ {
key: "_init",
value: function(t, e) {
this.getDistinctId() || this.setDistinctId(_.UUID()), t.isChildInstance || (this.getDeviceId() || this._setDeviceId(_.UUID()), 
systemInformation.initDeviceId(this.getDeviceId())), this.initComplete = !0, "function" == typeof e && e(), 
this._save();
}
}, {
key: "_save",
value: function() {
this.enabled && this.initComplete && PlatformAPI.setStorage(this.name, JSON.stringify(this._state));
}
}, {
key: "_set",
value: function(t, e) {
var i, n = this;
"string" == typeof t ? (i = {})[t] = e : "object" === _typeof(t) && (i = t), _.each(i, function(t, e) {
n._state[e] = t;
}), this._save();
}
}, {
key: "_get",
value: function(t) {
return this._state[t];
}
}, {
key: "setEventTimer",
value: function(t, e) {
var i = this._state.event_timers || {};
i[t] = e, this._set("event_timers", i);
}
}, {
key: "removeEventTimer",
value: function(t) {
var e = (this._state.event_timers || {})[t];
return _.isUndefined(e) || (delete this._state.event_timers[t], this._save()), e;
}
}, {
key: "getDeviceId",
value: function() {
return this._state.device_id;
}
}, {
key: "_setDeviceId",
value: function(t) {
this.getDeviceId() ? logger$1.warn("cannot modify the device id.") : this._set("device_id", t);
}
}, {
key: "getDistinctId",
value: function() {
return this._state.distinct_id;
}
}, {
key: "setDistinctId",
value: function(t) {
this._set("distinct_id", t);
}
}, {
key: "getAccountId",
value: function() {
return this._state.account_id;
}
}, {
key: "setAccountId",
value: function(t) {
this._set("account_id", t);
}
}, {
key: "getSuperProperties",
value: function() {
return this._state.props || {};
}
}, {
key: "setSuperProperties",
value: function(t, e) {
t = e ? t : _.extend(this.getSuperProperties(), t);
this._set("props", t);
}
} ]), t;
}(), dataStoragePrefix = "tampsdk_", tabStoragePrefix = "tab_tampsdk_", BatchConsumer = function() {
function t(e, i) {
_classCallCheck(this, t), this.config = e, this.ta = i, this.timer = null, this.batchConfig = _.extend({
size: 5,
interval: 5e3,
storageLimit: 200
}, this.config.batchConfig), this.batchConfig.size < 1 && (this.batchConfig.size = 1), 
30 < this.batchConfig.size && (this.batchConfig.size = 30), this.tabKey = tabStoragePrefix + this.config.appId, 
this.storageLimit = this.batchConfig.storageLimit, this.isRequest = !1, this.trackList = [], 
this.needFlush = !1;
}
return _createClass(t, [ {
key: "batchInterval",
value: function() {
var t = this;
t.timer = setTimeout(function() {
t.recycle(), t.send(), clearTimeout(t.timer), t.batchInterval();
}, this.batchConfig.interval);
}
}, {
key: "add",
value: function(t) {
if (this.isRequest) this.trackList.push(t); else {
var e = t, i = dataStoragePrefix + this.config.appId + "_" + String(_.UUID());
t = PlatformAPI.getStorage(this.tabKey);
if (_.isArray(t) || (t = []), t.length <= this.storageLimit) t.push(i), PlatformAPI.setStorage(this.tabKey, JSON.stringify(t)), 
PlatformAPI.setStorage(i, JSON.stringify(e)); else {
var n = t.splice(0, 20);
console.log("deleted events data:" + n), t.push(i), PlatformAPI.setStorage(this.tabKey, JSON.stringify(t)), 
PlatformAPI.setStorage(i, JSON.stringify(e));
e = {};
for (var o = [], r = 0; r < n.length; r++) {
var s = PlatformAPI.getStorage(n[r]);
o.push(s);
}
e.data = o, e["#app_id"] = this.config.appId, this.request(e, n);
}
}
}
}, {
key: "flush",
value: function() {
clearTimeout(this.timer), this.send(), this.batchInterval();
}
}, {
key: "send",
value: function() {
if (this.isRequest) this.needFlush = !0; else {
var t = PlatformAPI.getStorage(this.tabKey);
if (t && t.length) {
for (var e = {}, i = [], n = [], o = t.length < this.batchConfig.size ? t.length : this.batchConfig.size, r = 0; r < o; r++) {
var s = PlatformAPI.getStorage(t[r]);
i.push(s), n.push(t[r]);
}
e.data = i, e["#app_id"] = this.config.appId, this.request(e, n);
}
}
}
}, {
key: "request",
value: function(t, e) {
var i = this;
logger$1.info("flush data: " + JSON.stringify(t)), i.isRequest = !0, senderQueue.enqueue(t, this.ta.serverUrl, {
maxRetries: this.config.maxRetries,
sendTimeout: this.config.sendTimeout,
callback: function(t) {
0 == t.code && i.remove(e), i.isRequest = !1;
for (var n = 0; n < i.trackList.length; n++) i.add(i.trackList[n]);
i.trackList = [], i.needFlush && (i.needFlush = !1, i.flush());
},
debugMode: this.config.debugMode,
deviceId: this.ta.getDeviceId()
});
}
}, {
key: "remove",
value: function(t) {
var e = PlatformAPI.getStorage(this.tabKey);
if (e) {
for (var i = 0; i < t.length; i++) {
var n = _.indexOf(e, t[i]);
-1 < n && e.splice(n, 1), PlatformAPI.removeStorage(t[i]);
}
PlatformAPI.setStorage(this.tabKey, JSON.stringify(e));
}
}
}, {
key: "recycle",
value: function() {}
} ]), t;
}(), ThinkingDataAPI = function() {
function t(e) {
_classCallCheck(this, t), e.appId = e.appId ? _.checkAppId(e.appId) : _.checkAppId(e.appid), 
e.serverUrl = e.serverUrl ? _.checkUrl(e.serverUrl) : _.checkUrl(e.server_url);
var i = _.extend({}, DEFAULT_CONFIG, PlatformAPI.getConfig());
_.isObject(e) ? this.config = _.extend(i, e) : this.config = i, this._init(this.config);
}
return _createClass(t, [ {
key: "_init",
value: function(t) {
var e = this;
this.name = t.name, this.appId = t.appId || t.appid;
var i = t.serverUrl || t.server_url;
this.serverUrl = i + "/sync_xcx", this.serverDebugUrl = i + "/data_debug", this.configUrl = i + "/config", 
this.autoTrackProperties = {}, this._queue = [], this.updateConfig(this.configUrl, this.appId), 
t.isChildInstance ? this._state = {} : (logger$1.enabled = t.enableLog, this.instances = [], 
this._state = {
getSystemInfo: !1,
initComplete: !1
}, PlatformAPI.setGlobal(this, this.name)), this.store = new ThinkingDataPersistence(t, function() {
e.config.asyncPersistence && _.isFunction(e.config.persistenceComplete) && e.config.persistenceComplete(e), 
e._updateState();
}), this.enabled = !_.isBoolean(this.store._get("ta_enabled")) || this.store._get("ta_enabled"), 
this.isOptOut = !!_.isBoolean(this.store._get("ta_isOptOut")) && this.store._get("ta_isOptOut"), 
!t.isChildInstance && t.autoTrack && (this.autoTrack = PlatformAPI.initAutoTrackInstance(this, t)), 
void 0 !== this.config.enableBatch && !1 !== this.config.enableBatch && (this.batchConsumer = new BatchConsumer(this.config, this), 
this.batchConsumer.batchInterval());
}
}, {
key: "initSystemInfo",
value: function() {
var t = this;
this.config.isChildInstance || systemInformation.getSystemInfo(function() {
t._updateState({
getSystemInfo: !0
});
});
}
}, {
key: "updateConfig",
value: function(t, e) {
var i = this, n = _.createExtraHeaders();
n["content-type"] = "application/json";
var o = PlatformAPI.request({
url: t + "?appid=" + e,
method: "GET",
header: n,
success: function(t) {
_.isUndefined(t) || _.isUndefined(t.data) || (logger$1.info("config update success(" + e + ") :" + JSON.stringify(t.data)), 
_.isUndefined(t.data.data) || (i.config.syncBatchSize = t.data.data.sync_batch_size, 
i.config.syncInterval = t.data.data.sync_interval, i.config.disableEventList = t.data.data.disable_event_list, 
_.isUndefined(t.data.data.secret_key) || (t = t.data.data.secret_key, i.config.secretKey = {
publicKey: t.key,
version: t.version
})));
},
fail: function(t) {
logger$1.info("config update fail(" + e + ") :" + t.errMsg);
}
});
setTimeout(function() {
(_.isObject(o) || _.isPromise(o)) && _.isFunction(o.abort) && o.abort();
}, 3e3);
}
}, {
key: "initInstance",
value: function(e, i) {
if (this.config.isChildInstance) logger$1.warn("initInstance() cannot be called on child instance"); else {
if (_.isString(e) && e !== this.name && _.isUndefined(this[e])) {
i = new t(_.extend({}, this.config, {
enablePersistence: !1,
isChildInstance: !0,
name: e
}, i));
return this[e] = i, this.instances.push(e), this[e]._state = this._state, i;
}
logger$1.warn("initInstance() failed due to the name is invalid: " + e);
}
}
}, {
key: "lightInstance",
value: function(t) {
return this[t];
}
}, {
key: "_setAutoTrackProperties",
value: function(t) {
_.extend(this.autoTrackProperties, t);
}
}, {
key: "init",
value: function() {
if (this.initSystemInfo(), this._state.initComplete) return !1;
this._updateState({
initComplete: !0
}), logger$1.info("Thinking Analytics SDK initialized successfully with mode: " + this.config.debugMode + ", APP ID : " + this.config.appId + ", server url: " + this.config.serverUrl + ", libversion: " + Config.LIB_VERSION);
}
}, {
key: "_isReady",
value: function() {
return this._state.getSystemInfo && this._state.initComplete && this.store.initComplete && this.getDeviceId();
}
}, {
key: "_updateState",
value: function(t) {
var e = this;
_.isObject(t) && _.extend(this._state, t), this._onStateChange(), _.each(this.instances, function(t) {
e[t]._onStateChange();
});
}
}, {
key: "_onStateChange",
value: function() {
var t = this;
this._isReady() && this._queue && 0 < this._queue.length && (_.each(this._queue, function(e) {
t[e[0]].apply(t, slice.call(e[1]));
}), this._queue = []);
}
}, {
key: "_hasDisabled",
value: function() {
var t = !this.enabled || this.isOptOut;
return t && logger$1.info("ThinkingData is Pause or Stop!"), t;
}
}, {
key: "_sendRequest",
value: function(t, e, i) {
if (!this._hasDisabled()) if (_.isUndefined(this.config.disableEventList) || !this.config.disableEventList.includes(t.eventName)) {
e = _.isDate(e) ? e : new Date();
var n = {
data: [ {
"#type": t.type,
"#time": _.formatDate(e),
"#distinct_id": this.store.getDistinctId()
} ]
};
this.store.getAccountId() && (n.data[0]["#account_id"] = this.store.getAccountId()), 
"track" === t.type || "track_update" === t.type || "track_overwrite" === t.type ? (n.data[0]["#event_name"] = t.eventName, 
"track_update" === t.type || "track_overwrite" === t.type ? n.data[0]["#event_id"] = t.extraId : t.firstCheckId && (n.data[0]["#first_check_id"] = t.firstCheckId), 
n.data[0].properties = _.extend({
"#zone_offset": 0 - e.getTimezoneOffset() / 60
}, systemInformation.properties, this.autoTrackProperties, this.store.getSuperProperties(), this.dynamicProperties ? this.dynamicProperties() : {}), 
e = this.store.removeEventTimer(t.eventName), _.isUndefined(e) || (r = new Date().getTime() - e, 
86400 < (o = parseFloat((r / 1e3).toFixed(3))) ? o = 86400 : o < 0 && (o = 0), n.data[0].properties["#duration"] = o)) : n.data[0].properties = {}, 
_.isObject(t.properties) && !_.isEmptyObject(t.properties) && _.extend(n.data[0].properties, t.properties), 
_.searchObjDate(n.data[0]), 1 < this.config.maxRetries && (n.data[0]["#uuid"] = _.UUIDv4()), 
n["#app_id"] = this.appId, logger$1.info(JSON.stringify(n, null, 4));
var o, r = "debug" === this.config.debugMode || "debugOnly" === this.config.debugMode ? this.serverDebugUrl : this.serverUrl;
if (_.isBoolean(this.config.enableEncrypt) && !0 === this.config.enableEncrypt && (n.data[0] = _.generateEncryptyData(n.data[0], this.config.secretKey)), 
this.batchConsumer && "none" === this.config.debugMode && !i) return this.batchConsumer.add(n.data[0]), 
void (_.isFunction(t.onComplete) && t.onComplete({
code: 0,
msg: "success"
}));
i ? (o = new FormData(), "debug" === this.config.debugMode || "debugOnly" === this.config.debugMode ? (o.append("source", "client"), 
o.append("appid", this.appId), o.append("dryRun", "debugOnly" === this.config.debugMode ? 1 : 0), 
o.append("deviceId", this.getDeviceId()), o.append("data", JSON.stringify(n.data[0]))) : (i = _.base64Encode(JSON.stringify(n)), 
o.append("data", i)), navigator.sendBeacon(r, o), _.isFunction(t.onComplete) && t.onComplete({
statusCode: 200
})) : senderQueue.enqueue(n, r, {
maxRetries: this.config.maxRetries,
sendTimeout: this.config.sendTimeout,
callback: t.onComplete,
debugMode: this.config.debugMode,
deviceId: this.getDeviceId()
});
} else logger$1.info("disabled Event : " + t.eventName);
}
}, {
key: "_isObjectParams",
value: function(t) {
return _.isObject(t) && _.isFunction(t.onComplete);
}
}, {
key: "track",
value: function(t, e, i, n) {
var o;
this._hasDisabled() || (this._isObjectParams(t) && (t = (o = t).eventName, e = o.properties, 
i = o.time, n = o.onComplete), PropertyChecker.event(t) && PropertyChecker.properties(e) || !this.config.strict ? this._internalTrack(t, e, i, n) : _.isFunction(n) && n({
code: -1,
msg: "invalid parameters"
}));
}
}, {
key: "trackUpdate",
value: function(t) {
var e, i;
this._hasDisabled() || (t && t.eventId && (PropertyChecker.event(t.eventName) && PropertyChecker.properties(t.properties) || !this.config.strict) ? this._isReady() ? (e = _.checkCalibration(t.properties, t.time, this.config.enableCalibrationTime), 
i = _.isDate(t.time) ? t.time : new Date(), this._sendRequest({
type: "track_update",
eventName: t.eventName,
properties: e,
onComplete: t.onComplete,
extraId: t.eventId
}, i)) : this._queue.push([ "trackUpdate", [ t ] ]) : (logger$1.warn("Invalide parameter for trackUpdate: you should pass an object contains eventId to trackUpdate()"), 
_.isFunction(t.onComplete) && t.onComplete({
code: -1,
msg: "invalid parameters"
})));
}
}, {
key: "trackOverwrite",
value: function(t) {
var e, i;
this._hasDisabled() || (t && t.eventId && (PropertyChecker.event(t.eventName) && PropertyChecker.properties(t.properties) || !this.config.strict) ? this._isReady() ? (e = _.checkCalibration(t.properties, t.time, this.config.enableCalibrationTime), 
i = _.isDate(t.time) ? t.time : new Date(), this._sendRequest({
type: "track_overwrite",
eventName: t.eventName,
properties: e,
onComplete: t.onComplete,
extraId: t.eventId
}, i)) : this._queue.push([ "trackOverwrite", [ t ] ]) : (logger$1.warn("Invalide parameter for trackOverwrite: you should pass an object contains eventId to trackOverwrite()"), 
_.isFunction(t.onComplete) && t.onComplete({
code: -1,
msg: "invalid parameters"
})));
}
}, {
key: "trackFirstEvent",
value: function(t) {
var e, i;
this._hasDisabled() || (t && t.eventName && (PropertyChecker.event(t.eventName) && PropertyChecker.properties(t.properties) || !this.config.strict) ? this._isReady() ? (e = _.checkCalibration(t.properties, t.time, this.config.enableCalibrationTime), 
i = _.isDate(t.time) ? t.time : new Date(), this._sendRequest({
type: "track",
eventName: t.eventName,
properties: e,
onComplete: t.onComplete,
firstCheckId: t.firstCheckId || this.getDeviceId()
}, i)) : this._queue.push([ "trackFirstEvent", [ t ] ]) : (logger$1.warn("Invalide parameter for trackFirstEvent: you should pass an object contains eventName to trackFirstEvent()"), 
_.isFunction(t.onComplete) && t.onComplete({
code: -1,
msg: "invalid parameters"
})));
}
}, {
key: "_internalTrack",
value: function(t, e, i, n, o) {
var r;
this._hasDisabled() || (r = _.checkCalibration(e, i, this.config.enableCalibrationTime), 
i = _.isDate(i) ? i : new Date(), this._isReady() ? this._sendRequest({
type: "track",
eventName: t,
properties: r,
onComplete: n
}, i, o) : this._queue.push([ "_internalTrack", [ t, e, i, n ] ]));
}
}, {
key: "userSet",
value: function(t, e, i) {
var n;
this._hasDisabled() || (this._isObjectParams(t) && (t = (n = t).properties, e = n.time, 
i = n.onComplete), PropertyChecker.propertiesMust(t) || !this.config.strict ? (e = _.isDate(e) ? e : new Date(), 
this._isReady() ? this._sendRequest({
type: "user_set",
properties: t,
onComplete: i
}, e) : this._queue.push([ "userSet", [ t, e, i ] ])) : (logger$1.warn("calling userSet failed due to invalid arguments"), 
_.isFunction(i) && i({
code: -1,
msg: "invalid parameters"
})));
}
}, {
key: "userSetOnce",
value: function(t, e, i) {
var n;
this._hasDisabled() || (this._isObjectParams(t) && (t = (n = t).properties, e = n.time, 
i = n.onComplete), PropertyChecker.propertiesMust(t) || !this.config.strict ? (e = _.isDate(e) ? e : new Date(), 
this._isReady() ? this._sendRequest({
type: "user_setOnce",
properties: t,
onComplete: i
}, e) : this._queue.push([ "userSetOnce", [ t, e, i ] ])) : (logger$1.warn("calling userSetOnce failed due to invalid arguments"), 
_.isFunction(i) && i({
code: -1,
msg: "invalid parameters"
})));
}
}, {
key: "userUnset",
value: function(t, e, i) {
var n;
this._hasDisabled() || (this._isObjectParams(n) && (t = n.property, e = n.time, 
i = n.onComplete), PropertyChecker.propertyName(t) || !this.config.strict ? (e = _.isDate(e) ? e : new Date(), 
this._isReady() ? ((n = {})[t] = 0, this._sendRequest({
type: "user_unset",
properties: n,
onComplete: i
}, e)) : this._queue.push([ "userUnset", [ t, i, e ] ])) : (logger$1.warn("calling userUnset failed due to invalid arguments"), 
_.isFunction(i) && i({
code: -1,
msg: "invalid parameters"
})));
}
}, {
key: "userDel",
value: function(t, e) {
var i;
this._hasDisabled() || (this._isObjectParams(t) && (t = (i = t).time, e = i.onComplete), 
t = _.isDate(t) ? t : new Date(), this._isReady() ? this._sendRequest({
type: "user_del",
onComplete: e
}, t) : this._queue.push([ "userDel", [ t, e ] ]));
}
}, {
key: "userAdd",
value: function(t, e, i) {
var n;
this._hasDisabled() || (this._isObjectParams(t) && (t = (n = t).properties, e = n.time, 
i = n.onComplete), PropertyChecker.userAddProperties(t) || !this.config.strict ? (e = _.isDate(e) ? e : new Date(), 
this._isReady() ? this._sendRequest({
type: "user_add",
properties: t,
onComplete: i
}, e) : this._queue.push([ "userAdd", [ t, e, i ] ])) : (logger$1.warn("calling userAdd failed due to invalid arguments"), 
_.isFunction(i) && i({
code: -1,
msg: "invalid parameters"
})));
}
}, {
key: "userAppend",
value: function(t, e, i) {
var n;
this._hasDisabled() || (this._isObjectParams(t) && (t = (n = t).properties, e = n.time, 
i = n.onComplete), PropertyChecker.userAppendProperties(t) || !this.config.strict ? (e = _.isDate(e) ? e : new Date(), 
this._isReady() ? this._sendRequest({
type: "user_append",
properties: t,
onComplete: i
}, e) : this._queue.push([ "userAppend", [ t, e, i ] ])) : (logger$1.warn("calling userAppend failed due to invalid arguments"), 
_.isFunction(i) && i({
code: -1,
msg: "invalid parameters"
})));
}
}, {
key: "userUniqAppend",
value: function(t, e, i) {
var n;
this._hasDisabled() || (this._isObjectParams(t) && (t = (n = t).properties, e = n.time, 
i = n.onComplete), PropertyChecker.userAppendProperties(t) || !this.config.strict ? (e = _.isDate(e) ? e : new Date(), 
this._isReady() ? this._sendRequest({
type: "user_uniq_append",
properties: t,
onComplete: i
}, e) : this._queue.push([ "userUniqAppend", [ t, e, i ] ])) : (logger$1.warn("calling userAppend failed due to invalid arguments"), 
_.isFunction(i) && i({
code: -1,
msg: "invalid parameters"
})));
}
}, {
key: "flush",
value: function() {
this.batchConsumer && "none" === this.config.debugMode && this.batchConsumer.flush();
}
}, {
key: "authorizeOpenID",
value: function(t) {
this.identify(t);
}
}, {
key: "identify",
value: function(t) {
if (!this._hasDisabled()) {
if ("number" == typeof t) t = String(t); else if ("string" != typeof t) return !1;
this.store.setDistinctId(t);
}
}
}, {
key: "getDistinctId",
value: function() {
return this.store.getDistinctId();
}
}, {
key: "login",
value: function(t) {
if (!this._hasDisabled()) {
if ("number" == typeof t) t = String(t); else if ("string" != typeof t) return !1;
this.store.setAccountId(t);
}
}
}, {
key: "getAccountId",
value: function() {
return this.store.getAccountId();
}
}, {
key: "logout",
value: function() {
this._hasDisabled() || this.store.setAccountId(null);
}
}, {
key: "setSuperProperties",
value: function(t) {
this._hasDisabled() || (PropertyChecker.propertiesMust(t) || !this.config.strict ? this.store.setSuperProperties(t) : logger$1.warn("setSuperProperties parameter must be a valid property value"));
}
}, {
key: "clearSuperProperties",
value: function() {
this._hasDisabled() || this.store.setSuperProperties({}, !0);
}
}, {
key: "unsetSuperProperty",
value: function(t) {
var e;
this._hasDisabled() || _.isString(t) && (delete (e = this.getSuperProperties())[t], 
this.store.setSuperProperties(e, !0));
}
}, {
key: "getSuperProperties",
value: function() {
return this.store.getSuperProperties();
}
}, {
key: "getPresetProperties",
value: function() {
var t = systemInformation.properties, e = {}, i = t["#os"];
e.os = _.isUndefined(i) ? "" : i;
i = t["#screen_width"];
e.screenWidth = _.isUndefined(i) ? 0 : i;
i = t["#screen_height"];
e.screenHeight = _.isUndefined(i) ? 0 : i;
i = t["#network_type"];
e.networkType = _.isUndefined(i) ? "" : i;
i = t["#device_model"];
e.deviceModel = _.isUndefined(i) ? "" : i;
i = t["#os_version"];
e.osVersion = _.isUndefined(i) ? "" : i, e.deviceId = this.getDeviceId();
var n = 0 - new Date().getTimezoneOffset() / 60;
e.zoneOffset = n;
t = t["#manufacturer"];
return e.manufacturer = _.isUndefined(t) ? "" : t, e.toEventPresetProperties = function() {
return {
"#device_model": e.deviceModel,
"#device_id": e.deviceId,
"#screen_width": e.screenWidth,
"#screen_height": e.screenHeight,
"#os": e.os,
"#os_version": e.osVersion,
"#network_type": e.networkType,
"#zone_offset": n,
"#manufacturer": e.manufacturer
};
}, e;
}
}, {
key: "setDynamicSuperProperties",
value: function(t) {
this._hasDisabled() || ("function" == typeof t ? PropertyChecker.properties(t()) || !this.config.strict ? this.dynamicProperties = t : logger$1.warn("A dynamic public property must return a valid property value") : logger$1.warn("setDynamicSuperProperties parameter must be a function type"));
}
}, {
key: "timeEvent",
value: function(t, e) {
this._hasDisabled() || (e = _.isDate(e) ? e : new Date(), this._isReady() ? PropertyChecker.event(t) || !this.config.strict ? this.store.setEventTimer(t, e.getTime()) : logger$1.warn("calling timeEvent failed due to invalid eventName: " + t) : this._queue.push([ "timeEvent", [ t, e ] ]));
}
}, {
key: "getDeviceId",
value: function() {
return systemInformation.properties["#device_id"];
}
}, {
key: "enableTracking",
value: function(t) {
this.enabled = t, this.store._set("ta_enabled", t);
}
}, {
key: "optOutTracking",
value: function() {
this.store.setSuperProperties({}, !0), this.store.setDistinctId(_.UUID()), this.store.setAccountId(null), 
this._queue.splice(0, this._queue.length), this.isOptOut = !0, this.store._set("ta_isOptOut", !0);
}
}, {
key: "optOutTrackingAndDeleteUser",
value: function() {
var t = new Date();
this._sendRequest({
type: "user_del"
}, t), this.optOutTracking();
}
}, {
key: "optInTracking",
value: function() {
this.isOptOut = !1, this.store._set("ta_isOptOut", !1);
}
}, {
key: "setTrackStatus",
value: function(t) {
switch (t) {
case "PAUSE":
this.eventSaveOnly = !1, this.optInTracking(), this.enableTracking(!1);
break;

case "STOP":
this.eventSaveOnly = !1, this.optOutTracking(!0);
break;

case "SAVE_ONLY":
break;

case "NORMAL":
default:
this.eventSaveOnly = !1, this.optInTracking(), this.enableTracking(!0);
}
logger$1.info("switch track status:" + t);
}
} ]), t;
}(), DEFAULT_CONFIG$1 = {
name: "thinkingdata",
enableLog: !0,
enableNative: !1
}, ThinkingDataAPIForNative = function() {
function t(e) {
_classCallCheck(this, t), e.appId = e.appId ? _.checkAppId(e.appId) : _.checkAppId(e.appid), 
e.serverUrl = e.serverUrl ? _.checkUrl(e.serverUrl) : _.checkUrl(e.server_url);
var i = _.extend({}, DEFAULT_CONFIG$1, PlatformAPI.getConfig());
_.isObject(e) ? this.config = _.extend(i, e) : this.config = i, this._init(this.config);
}
return _createClass(t, [ {
key: "_isNativePlatform",
value: function() {
return !(!this._isIOS() && !this._isAndroid() || !this.config.enableNative);
}
}, {
key: "_isIOS",
value: function() {
return !(!cc.sys.isNative || "iOS" !== cc.sys.os);
}
}, {
key: "_isAndroid",
value: function() {
return !(!cc.sys.isNative || "Android" !== cc.sys.os);
}
}, {
key: "_init",
value: function(t) {
this.name = t.name, this.appId = t.appId || t.appid, this._isNativePlatform() ? (this.initInstanceForNative(this.name, t, this.appId), 
this._readStorage(t)) : this.taJs = new ThinkingAnalyticsAPIForJS(t);
}
}, {
key: "_readStorage",
value: function(t) {
var e = this, i = t.persistenceName, n = t.persistenceNameOld;
t.isChildInstance && (i = t.persistenceName + "_" + t.name, n = t.persistenceNameOld + "_" + t.name), 
this._state = PlatformAPI.getStorage(i) || {}, _.isEmptyObject(this._state) && (this._state = PlatformAPI.getStorage(n) || {}), 
_.isEmptyObject(this._state) ? PlatformAPI.getStorage(i, !0, function(t) {
_.isEmptyObject(t) ? PlatformAPI.getStorage(n, !0, function(t) {
e._state = _.extend2Layers({}, t, e._state);
}) : e._state = _.extend2Layers({}, t, e._state), e._state.distinct_id && e.identifyForNative(e._state.distinct_id), 
e._state.account_id && e.loginForNative(e._state.account_id);
}) : (this._state.distinct_id && this.identifyForNative(this._state.distinct_id), 
this._state.account_id && this.loginForNative(this._state.account_id));
}
}, {
key: "initInstance",
value: function(t, e) {
return this._isNativePlatform() ? _.isUndefined(e) ? this[t] = new ThinkingAnalyticsAPI(this.config) : this[t] = new ThinkingAnalyticsAPI(e) : this[t] = this.taJs.initInstance(t, e), 
this[t];
}
}, {
key: "lightInstance",
value: function(t) {
return this[t];
}
}, {
key: "init",
value: function() {
if (this._isNativePlatform()) {
var t = window, e = this;
return t.__autoTrackCallback = function(t) {
if (_.isFunction(e.config.autoTrack.callback)) {
t = e.config.autoTrack.callback(t);
return JSON.stringify(t);
}
return "{}";
}, void this.startThinkingAnalyticsForNative();
}
this.taJs.init();
}
}, {
key: "track",
value: function(t, e, i, n) {
this._isNativePlatform() ? this.trackForNative(t, e, i, this.appId) : this.taJs.track(t, e, i, n);
}
}, {
key: "trackUpdate",
value: function(t) {
this._isNativePlatform() ? this.trackUpdateForNative(t, this.appId) : this.taJs.trackUpdate(t);
}
}, {
key: "trackOverwrite",
value: function(t) {
this._isNativePlatform() ? this.trackOverwriteForNative(t, this.appId) : this.taJs.trackOverwrite(t);
}
}, {
key: "trackFirstEvent",
value: function(t) {
this._isNativePlatform() ? this.trackFirstEventForNative(t, this.appId) : this.taJs.trackFirstEvent(t);
}
}, {
key: "userSet",
value: function(t, e, i) {
this._isNativePlatform() ? this.userSetForNative(t, this.appId) : this.taJs.userSet(t, e, i);
}
}, {
key: "userSetOnce",
value: function(t, e, i) {
this._isNativePlatform() ? this.userSetOnceForNative(t, this.appId) : this.taJs.userSetOnce(t, e, i);
}
}, {
key: "userUnset",
value: function(t, e, i) {
this._isNativePlatform() ? this.userUnsetForNative(t, this.appId) : this.taJs.userUnset(t, e, i);
}
}, {
key: "userDel",
value: function(t, e) {
this._isNativePlatform() ? this.userDelForNative(this.appId) : this.taJs.userDel(t, e);
}
}, {
key: "userAdd",
value: function(t, e, i) {
this._isNativePlatform() ? this.userAddForNative(t, this.appId) : this.taJs.userAdd(t, e, i);
}
}, {
key: "userAppend",
value: function(t, e, i) {
this._isNativePlatform() ? this.userAppendForNative(t, this.appId) : this.taJs.userAppend(t, e, i);
}
}, {
key: "userUniqAppend",
value: function(t, e, i) {
this._isNativePlatform() ? this.userUniqAppendForNative(t, this.appId) : this.taJs.userUniqAppend(t, e, i);
}
}, {
key: "flush",
value: function() {
this._isNativePlatform() ? this.flushForNative(this.appId) : this.taJs.flush();
}
}, {
key: "authorizeOpenID",
value: function(t) {
this.identify(t);
}
}, {
key: "identify",
value: function(t) {
this._isNativePlatform() ? this.identifyForNative(t, this.appId) : this.taJs.identify(t);
}
}, {
key: "getDistinctId",
value: function() {
return this._isNativePlatform() ? this.getDistinctIdForNative(this.appId) : this.taJs.getDistinctId();
}
}, {
key: "login",
value: function(t) {
this._isNativePlatform() ? this.loginForNative(t, this.appId) : this.taJs.login(t);
}
}, {
key: "getAccountId",
value: function() {
return this._isNativePlatform() ? this.getAccountIdForNative(this.appId) : this.taJs.getAccountId();
}
}, {
key: "logout",
value: function() {
this._isNativePlatform() ? this.logoutForNative(this.appId) : this.taJs.logout();
}
}, {
key: "setSuperProperties",
value: function(t) {
this._isNativePlatform() ? this.setSuperPropertiesForNative(t, this.appId) : this.taJs.setSuperProperties(t);
}
}, {
key: "clearSuperProperties",
value: function() {
this._isNativePlatform() ? this.clearSuperPropertiesForNative(this.appId) : this.taJs.clearSuperProperties();
}
}, {
key: "unsetSuperProperty",
value: function(t) {
this._isNativePlatform() ? this.unsetSuperPropertyForNative(t, this.appId) : this.taJs.unsetSuperProperty(t);
}
}, {
key: "getSuperProperties",
value: function() {
return this._isNativePlatform() ? this.getSuperPropertiesForNative(this.appId) : this.taJs.getSuperProperties();
}
}, {
key: "getPresetProperties",
value: function() {
if (this._isNativePlatform()) {
var t = this.getPresetPropertiesForNative(this.appId), e = {}, i = t["#os"];
e.os = _.isUndefined(i) ? "" : i;
i = t["#screen_width"];
e.screenWidth = _.isUndefined(i) ? 0 : i;
i = t["#screen_height"];
e.screenHeight = _.isUndefined(i) ? 0 : i;
i = t["#network_type"];
e.networkType = _.isUndefined(i) ? "" : i;
i = t["#device_model"];
e.deviceModel = _.isUndefined(i) ? "" : i;
i = t["#os_version"];
e.osVersion = _.isUndefined(i) ? "" : i, e.deviceId = this.getDeviceId();
var n = 0 - new Date().getTimezoneOffset() / 60;
e.zoneOffset = n;
t = t["#manufacturer"];
return e.manufacturer = _.isUndefined(t) ? "" : t, e.toEventPresetProperties = function() {
return {
"#device_model": e.deviceModel,
"#device_id": e.deviceId,
"#screen_width": e.screenWidth,
"#screen_height": e.screenHeight,
"#os": e.os,
"#os_version": e.osVersion,
"#network_type": e.networkType,
"#zone_offset": n,
"#manufacturer": e.manufacturer
};
}, e;
}
return this.taJs.getPresetProperties();
}
}, {
key: "setDynamicSuperProperties",
value: function(t) {
this._isNativePlatform() ? "function" == typeof t ? (this.dynamicProperties = t, 
window.__dynamicPropertiesForNative = function(e) {
console.log("__dynamicPropertiesForNative: native msg: ", e);
e = t(), e = _.encodeDates(e);
return JSON.stringify(e);
}, this.setDynamicSuperPropertiesForNative("__dynamicPropertiesForNative")) : logger.warn("setDynamicSuperProperties parameter must be a function type") : this.taJs.setDynamicSuperProperties(t);
}
}, {
key: "timeEvent",
value: function(t, e) {
return this._isNativePlatform() ? this.timeEventForNative(t, this.appId) : this.taJs.timeEvent(t, e);
}
}, {
key: "getDeviceId",
value: function() {
return this._isNativePlatform() ? this.getDeviceIdForNative(this.appId) : this.taJs.getDeviceId();
}
}, {
key: "enableTracking",
value: function(t) {
this._isNativePlatform() ? this.enableTrackingForNative(t, this.appId) : this.taJs.enableTracking(t);
}
}, {
key: "optOutTracking",
value: function() {
this._isNativePlatform() ? this.optOutTrackingForNative(this.appId) : this.taJs.optOutTracking();
}
}, {
key: "optOutTrackingAndDeleteUser",
value: function() {
this._isNativePlatform() ? this.optOutTrackingAndDeleteUserForNative(this.appId) : this.taJs.optOutTrackingAndDeleteUser();
}
}, {
key: "optInTracking",
value: function() {
this._isNativePlatform() ? this.optInTrackingForNative(this.appId) : this.taJs.optInTracking();
}
}, {
key: "setTrackStatus",
value: function(t) {
this._isNativePlatform() ? this.setTrackStatusForNative(t, this.appId) : this.taJs.setTrackStatus(t);
}
}, {
key: "trackForNative",
value: function(t, e, i, n) {
i = _.isDate(i) ? _.formatDate(i) : "";
_.isUndefined(e) && (e = {}), e = _.extend(e, this.dynamicProperties ? this.dynamicProperties() : {}), 
e = _.encodeDates(e), this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "track", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", t, JSON.stringify(e), i, n) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "track:properties:time:appId:", t, JSON.stringify(e), i, n);
}
}, {
key: "trackUpdateForNative",
value: function(t, e) {
t.properties = _.extend(_.isUndefined(t.properties) ? {} : t.properties, this.dynamicProperties ? this.dynamicProperties() : {}), 
t = _.encodeDates(t), this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "trackUpdate", "(Ljava/lang/String;Ljava/lang/String;)V", JSON.stringify(t), e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "trackUpdate:appId:", JSON.stringify(t), e);
}
}, {
key: "trackFirstEventForNative",
value: function(t, e) {
t.properties = _.extend(_.isUndefined(t.properties) ? {} : t.properties, this.dynamicProperties ? this.dynamicProperties() : {}), 
t = _.encodeDates(t), this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "trackFirstEvent", "(Ljava/lang/String;Ljava/lang/String;)V", JSON.stringify(t), e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "trackFirstEvent:appId:", JSON.stringify(t), e);
}
}, {
key: "trackOverwriteForNative",
value: function(t, e) {
t.properties = _.extend(_.isUndefined(t.properties) ? {} : t.properties, this.dynamicProperties ? this.dynamicProperties() : {}), 
t = _.encodeDates(t), this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "trackOverwrite", "(Ljava/lang/String;Ljava/lang/String;)V", JSON.stringify(t), e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "trackOverwrite:appId:", JSON.stringify(t), e);
}
}, {
key: "timeEventForNative",
value: function(t, e) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "timeEvent", "(Ljava/lang/String;Ljava/lang/String;)V", t, e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "timeEvent:appId:", t, e);
}
}, {
key: "loginForNative",
value: function(t, e) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "login", "(Ljava/lang/String;Ljava/lang/String;)V", t, e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "login:appId:", t, e);
}
}, {
key: "logoutForNative",
value: function(t) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "logout", "(Ljava/lang/String;)V", t) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "logout:", t);
}
}, {
key: "setSuperPropertiesForNative",
value: function(t, e) {
t = _.encodeDates(t), this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "setSuperProperties", "(Ljava/lang/String;Ljava/lang/String;)V", JSON.stringify(t), e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "setSuperProperties:appId:", JSON.stringify(t), e);
}
}, {
key: "getSuperPropertiesForNative",
value: function(t) {
var e = "{}";
return this._isAndroid() ? e = jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "getSuperProperties", "(Ljava/lang/String;)Ljava/lang/String;", t) : this._isIOS() && (e = jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "getSuperProperties:", t)), 
JSON.parse(e);
}
}, {
key: "unsetSuperPropertyForNative",
value: function(t, e) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "unsetSuperProperty", "(Ljava/lang/String;Ljava/lang/String;)V", t, e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "unsetSuperProperty:appId:", t, e);
}
}, {
key: "clearSuperPropertiesForNative",
value: function(t) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "clearSuperProperties", "(Ljava/lang/String;)V", t) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "clearSuperProperties:", t);
}
}, {
key: "userSetForNative",
value: function(t, e) {
t = _.encodeDates(t), this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "userSet", "(Ljava/lang/String;Ljava/lang/String;)V", JSON.stringify(t), e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "userSet:appId:", JSON.stringify(t), e);
}
}, {
key: "userSetOnceForNative",
value: function(t, e) {
t = _.encodeDates(t), this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "userSetOnce", "(Ljava/lang/String;Ljava/lang/String;)V", JSON.stringify(t), e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "userSetOnce:appId:", JSON.stringify(t), e);
}
}, {
key: "userAppendForNative",
value: function(t, e) {
t = _.encodeDates(t), this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "userAppend", "(Ljava/lang/String;Ljava/lang/String;)V", JSON.stringify(t), e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "userAppend:appId:", JSON.stringify(t), e);
}
}, {
key: "userUniqAppendForNative",
value: function(t, e) {
t = _.encodeDates(t), this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "userUniqAppend", "(Ljava/lang/String;Ljava/lang/String;)V", JSON.stringify(t), e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "userUniqAppend:appId:", JSON.stringify(t), e);
}
}, {
key: "userAddForNative",
value: function(t, e) {
t = _.encodeDates(t), this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "userAdd", "(Ljava/lang/String;Ljava/lang/String;)V", JSON.stringify(t), e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "userAdd:appId:", JSON.stringify(t), e);
}
}, {
key: "userUnsetForNative",
value: function(t, e) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "userUnset", "(Ljava/lang/String;Ljava/lang/String;)V", t, e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "userUnset:appId:", t, e);
}
}, {
key: "userDelForNative",
value: function(t) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "userDel", "(Ljava/lang/String;)V", t) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "userDel:", t);
}
}, {
key: "flushForNative",
value: function(t) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "flush", "(Ljava/lang/String;)V", t) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "flush:", t);
}
}, {
key: "authorizeOpenIDForNative",
value: function(t, e) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "authorizeOpenID", "(Ljava/lang/String;Ljava/lang/String;)V", t, e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "authorizeOpenID:appId:", t, e);
}
}, {
key: "identifyForNative",
value: function(t, e) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "identify", "(Ljava/lang/String;Ljava/lang/String;)V", t, e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "identify:appId:", t, e);
}
}, {
key: "initInstanceForNative",
value: function(t, e, i) {
this._isAndroid() ? (jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "setCustomerLibInfo", "(Ljava/lang/String;Ljava/lang/String;)V", Config.LIB_NAME, Config.LIB_VERSION), 
_.isUndefined(e) ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "initInstanceAppId", "(Ljava/lang/String;Ljava/lang/String;)V", t, i) : jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "initInstanceConfig", "(Ljava/lang/String;Ljava/lang/String;)V", t, JSON.stringify(e))) : this._isIOS() && (jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "setCustomerLibInfoWithLibName:libVersion:", Config.LIB_NAME, Config.LIB_VERSION), 
_.isUndefined(e) ? jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "initInstance:appId:", t, i) : jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "initInstance:config:", t, JSON.stringify(e)));
}
}, {
key: "lightInstanceForNative",
value: function(t, e) {
return this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "lightInstance", "(Ljava/lang/String;Ljava/lang/String;)V", t, e) : this._isIOS() ? jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "lightInstance:appId:", t, e) : void 0;
}
}, {
key: "startThinkingAnalyticsForNative",
value: function(t) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "startThinkingAnalytics", "(Ljava/lang/String;)V", t) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "startThinkingAnalytics:", t);
}
}, {
key: "setDynamicSuperPropertiesForNative",
value: function(t, e) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "setDynamicSuperProperties", "(Ljava/lang/String;Ljava/lang/String;)V", t, e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "setDynamicSuperProperties:appId:", t, e);
}
}, {
key: "getDeviceIdForNative",
value: function(t) {
return this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "getDeviceId", "(Ljava/lang/String;)Ljava/lang/String;", t) : this._isIOS() ? jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "getDeviceId:", t) : void 0;
}
}, {
key: "getDistinctIdForNative",
value: function(t) {
return this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "getDistinctId", "(Ljava/lang/String;)Ljava/lang/String;", t) : this._isIOS() ? jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "getDistinctId:", t) : void 0;
}
}, {
key: "getAccountIdForNative",
value: function(t) {
return this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "getAccountId", "(Ljava/lang/String;)Ljava/lang/String;", t) : this._isIOS() ? jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "getAccountId:", t) : void 0;
}
}, {
key: "getPresetPropertiesForNative",
value: function(t) {
var e = "{}";
return this._isAndroid() ? e = jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "getPresetProperties", "(Ljava/lang/String;)Ljava/lang/String;", t) : this._isIOS() && (e = jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "getPresetProperties:", t)), 
JSON.parse(e);
}
}, {
key: "enableTrackingForNative",
value: function(t, e) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "enableTracking", "(Ljava/lang/String;Ljava/lang/String;)V", t.toString(), e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "enableTracking:appId:", t.toString(), e);
}
}, {
key: "optOutTrackingForNative",
value: function(t) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "optOutTracking", "(Ljava/lang/String;)V", t) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "optOutTracking:", t);
}
}, {
key: "optOutTrackingAndDeleteUserForNative",
value: function(t) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "optOutTrackingAndDeleteUser", "(Ljava/lang/String;)V", t) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "optOutTrackingAndDeleteUser:", t);
}
}, {
key: "optInTrackingForNative",
value: function(t) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "optInTracking", "(Ljava/lang/String;)V", t) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "optInTracking:", t);
}
}, {
key: "setTrackStatusForNative",
value: function(t, e) {
this._isAndroid() ? jsb.reflection.callStaticMethod("com/cocos/game/CocosCreatorProxyApi", "setTrackStatus", "(Ljava/lang/String;Ljava/lang/String;)V", t, e) : this._isIOS() && jsb.reflection.callStaticMethod("CocosCreatorProxyApi", "setTrackStatus:appId:", t, e);
}
} ]), t;
}();

window.ThinkingAnalyticsAPI = ThinkingDataAPIForNative, window.ThinkingAnalyticsAPIForJS = ThinkingDataAPI;