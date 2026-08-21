window.__require = function t(e, n, i) {
function a(s, o) {
if (!n[s]) {
if (!e[s]) {
var l = s.split("/");
l = l[l.length - 1];
if (!e[l]) {
var h = "function" == typeof __require && __require;
if (!o && h) return h(l, !0);
if (r) return r(l, !0);
throw new Error("Cannot find module '" + s + "'");
}
s = l;
}
var f = n[s] = {
exports: {}
};
e[s][0].call(f.exports, function(t) {
return a(e[s][1][t] || t);
}, f, f.exports, t, e, n, i);
}
return n[s].exports;
}
for (var r = "function" == typeof __require && __require, s = 0; s < i.length; s++) a(i[s]);
return a;
}({
AbstractDumper: [ function(t, e) {
"use strict";
cc._RF.push(e, "835bfFVNEVEgrEbXydCaM9E", "AbstractDumper");
var n = function() {};
n.prototype.getRoot = function() {};
n.prototype.dumpHierarchy = function() {};
var i = function() {
n.call(this);
};
(i.prototype = Object.create(n.prototype)).dumpHierarchy = function() {
return this.dumpHierarchyImpl(this.getRoot());
};
i.prototype.dumpHierarchyImpl = function(t, e) {
if (!t) return null;
void 0 === e && (e = !0);
var n = t.enumerateAttrs(), i = {}, a = [], r = t.getChildren();
for (var s in r) {
var o = r[s];
(!e || n.visible || o.getAttr("visible")) && a.push(this.dumpHierarchyImpl(o, e));
}
a.length > 0 && (i.children = a);
i.name = n.name || t.getAttr("name");
i.payload = n;
return i;
};
try {
e.exports = i;
} catch (t) {
window.module && window.module.exports && (window.module.exports = i);
}
cc._RF.pop();
}, {} ],
AbstractNode: [ function(t, e) {
"use strict";
cc._RF.push(e, "bcd0258oANI27e2IwIm3FQa", "AbstractNode");
var n = function() {};
n.prototype.getParent = function() {
return null;
};
n.prototype.getChildren = function() {};
n.prototype.getAttr = function(t) {
return {
name: "<Root>",
type: "Root",
visible: !0,
pos: [ 0, 0 ],
size: [ 0, 0 ],
scale: [ 1, 1 ],
anchorPoint: [ .5, .5 ],
zOrders: {
local: 0,
global: 0
}
}[t];
};
n.prototype.setAttr = function(t) {
throw new Error("Unable to set attributes " + t + " on this node. (NotImplemented) ");
};
n.prototype.getAvailableAttributeNames = function() {
return [ "name", "type", "visible", "pos", "size", "scale", "anchorPoint", "zOrders" ];
};
n.prototype.enumerateAttrs = function() {
var t = {}, e = this.getAvailableAttributeNames();
for (var n in e) {
var i = e[n], a = this.getAttr(i);
void 0 !== a && (t[i] = a);
}
return t;
};
try {
e.exports = n;
} catch (t) {
window.module && window.module.exports && (window.module.exports = n);
}
cc._RF.pop();
}, {} ],
Attributor: [ function(t, e) {
"use strict";
cc._RF.push(e, "3b27aOO1fhB276RxEaeLHTF", "Attributor");
var n = function() {};
n.prototype.getAttr = function(t, e) {
var n = t;
t.__isPocoNodeWrapper__ || (n = t[0]);
return n.getAttr(e);
};
n.prototype.setAttr = function(t, e, n) {
var i = t;
t.__isPocoNodeWrapper__ || (i = t[0]);
i.setAttr(e, n);
};
try {
e.exports = n;
} catch (t) {
window.module && window.module.exports && (window.module.exports = n);
}
cc._RF.pop();
}, {} ],
Cocos2dxDumper: [ function(t, e) {
"use strict";
cc._RF.push(e, "ba3244qi8xFKKtluezzHIOh", "Cocos2dxDumper");
var n = t("./sdk/AbstractDumper"), i = t("./Cocos2dxNode"), a = function() {
n.call(this);
};
(a.prototype = Object.create(n.prototype)).getRoot = function() {
var t, e = cc.director.getWinSize();
t = cc.director.getScene ? cc.director.getScene() : cc.director.getRunningScene();
return new i(t, e.width, e.height);
};
try {
e.exports = a;
} catch (t) {
window.module && window.module.exports && (window.module.exports = a);
}
cc._RF.pop();
}, {
"./Cocos2dxNode": "Cocos2dxNode",
"./sdk/AbstractDumper": "AbstractDumper"
} ],
Cocos2dxNode: [ function(t, e) {
"use strict";
cc._RF.push(e, "f4e7ckDK1NLHpaWCST5+1Hs", "Cocos2dxNode");
var n = t("./sdk/AbstractNode"), i = cc.Vec2 || cc.math.Vec2 || cc.math.Vec3, a = function(t, e) {
var n = "get" + e[0].toUpperCase() + e.slice(1);
return t[n] ? t[n].call(t) : t[e] ? t[e] : t["_" + e];
}, r = function(t, e, i) {
n.call(this);
this.node = t;
this.screenWidth = e;
this.screenHeight = i;
};
(r.prototype = Object.create(n.prototype)).getParent = function() {
var t = a(this.node, "parent");
return t ? new r(t, this.screenWidth, this.screenHeight) : null;
};
r.prototype.getChildren = function() {
var t = null, e = a(this.node, "children");
if (e) {
t = [];
for (var n in e) {
var i = e[n];
t.push(new r(i, this.screenWidth, this.screenHeight));
}
}
return t;
};
r.prototype.getAttr = function(t) {
if ("visible" === t) {
if (this.node.isVisible || this.node.visible) {
if (!a(this.node, "visible")) return !1;
for (var e = a(this.node, "parent"); e; ) {
if (!e.isVisible()) return !1;
e = a(e, "parent");
}
return !0;
}
return this.node._activeInHierarchy;
}
if ("name" === t) return this.node.$gobj ? this.node.$gobj.name : a(this.node, "name") || "<no-name>";
if ("text" === t) {
for (var n in this.node._components) {
var r = this.node._components[n];
if (void 0 !== r.string) return r.string;
}
return a(this.node, "string");
}
if ("type" === t) {
var s = "";
if (this.node._components) for (n = this.node._components.length - 1; n >= 0 && !(s = this.node._components[n].__classname__).startsWith("cc"); n--) ;
s || (s = this.node.__classname__ || this.node._className);
s || this.node.constructor && (s = this.node.constructor.name);
s || (s = "Object");
return s.replace(/\w+\./, "");
}
if ("pos" === t) {
var o = this.node.convertToWorldSpaceAR(new i(0, 0));
o.x /= this.screenWidth;
o.y /= this.screenHeight;
o.y = 1 - o.y;
return [ o.x, o.y ];
}
if ("size" === t) {
var l = null;
(l = this.node.getContentSize || this.node.contentSize ? a(this.node, "contentSize") : new cc.Size(this.node.width, this.node.height)).width /= this.screenWidth;
l.height /= this.screenHeight;
return [ l.width, l.height ];
}
if ("scale" === t) return [ this.node.scaleX, this.node.scaleY ];
if ("anchorPoint" === t) {
var h = a(this.node, "anchorPoint");
return [ h.x, 1 - h.y ];
}
if ("zOrders" === t) {
var f = a(this.node, "globalZOrder");
null == f && (f = a(this.node, "localZOrder"));
return {
local: a(this.node, "localZOrder"),
global: f
};
}
if ("touchable" == t) {
if (this.node.isTouchEnabled) return this.node.isTouchEnabled();
} else if ("enabled" === t) {
if (this.node.isEnabled) return this.node.isEnabled();
} else if ("rotation" === t) return a(this.node, "rotation");
};
r.prototype.setAttr = function() {};
r.prototype.getAvailableAttributeNames = function() {
return n.prototype.getAvailableAttributeNames.call(this).concat([ "text", "touchable", "enabled", "tag", "rotation" ]);
};
try {
e.exports = r;
} catch (t) {
window.module && window.module.exports && (window.module.exports = r);
}
cc._RF.pop();
}, {
"./sdk/AbstractNode": "AbstractNode"
} ],
DefaultMatcher: [ function(t, e) {
"use strict";
cc._RF.push(e, "3df86Z+TzBIFIvNvBCJmBJT", "DefaultMatcher");
var n = function() {};
n.prototype.match = function() {};
var i = function() {};
i.prototype.compare = function(t, e) {
return t === e;
};
var a = function() {};
a.prototype.compare = function(t, e) {
return !(!t || !e) && null !== t.toString().match(e);
};
var r = function() {
n.call(this);
this.comparators = {
"attr=": new i(),
"attr.*=": new a()
};
};
(r.prototype = Object.create(n.prototype)).match = function(t, e) {
var n = t[0], i = t[1];
if ("and" === n) {
for (var a in i) {
var r = i[a];
if (!this.match(r, e)) return !1;
}
return !0;
}
if ("or" === n) {
for (var a in i) {
r = i[a];
if (this.match(r, e)) return !0;
}
return !1;
}
var s = this.comparators[n];
if (s) {
var o = i[0], l = i[1], h = e.getAttr(o);
return s.compare(h, l);
}
return !1;
};
try {
e.exports = r;
} catch (t) {
window.module && window.module.exports && (window.module.exports = r);
}
cc._RF.pop();
}, {} ],
IScreen: [ function(t, e) {
"use strict";
cc._RF.push(e, "44ffaso+ItOPaSESm3Q6rIC", "IScreen");
var n = function() {};
n.prototype.getPortSize = function() {};
n.prototype.getScreen = function() {};
try {
e.exports = n;
} catch (t) {
window.module && window.module.exports && (window.module.exports = n);
}
cc._RF.pop();
}, {} ],
POCO_SDK_VERSION: [ function(t, e) {
"use strict";
cc._RF.push(e, "b1fccoQN19IDpVntkfvKNnk", "POCO_SDK_VERSION");
try {
e.exports = "1.1.0";
} catch (t) {
window.module && window.module.exports && (window.module.exports = "1.1.0");
}
cc._RF.pop();
}, {} ],
Poco: [ function(t, e) {
"use strict";
cc._RF.push(e, "907633Zj2JMkputIUWlj1yg", "Poco");
var n = t("./Cocos2dxDumper"), i = t("./POCO_SDK_VERSION"), a = 5003;
function r(t, e) {
this.port = t || a;
this.poco = new n();
this.rpc_dispacher = {
getSDKVersion: function() {
return i;
},
GetSDKVersion: function() {
return i;
},
dump: this.poco.dumpHierarchy,
Dump: this.poco.dumpHierarchy,
test: function() {
return "test";
}
};
this.init_server(e);
}
r.prototype.handle_request = function(t) {
var e = {
id: t.id,
jsonrpc: t.jsonrpc,
result: void 0,
error: void 0
}, n = t.method, i = this.rpc_dispacher[n];
if (i) {
var a = t.params;
try {
var r = i.apply(this.poco, a);
e.result = r;
} catch (t) {
e.error = {
message: t.stack
};
}
} else e.error = {
message: 'No such rpc method "' + n + '", reqid: ' + t.id
};
console.log(e);
return e;
};
r.prototype.init_server = function(t, e) {
var n;
void 0 === t && (t = "localhost");
void 0 === e && (e = void 0);
console.log("try starting wss..");
this.port = null != (n = e) ? n : this.port;
var i = this;
try {
if (cc.sys.isNative) {
if ("undefined" == typeof WebSocketServer) {
console.error("WebSocketServer is not enabled!");
return;
}
(a = new WebSocketServer()).listen(this.port, function(t) {
t || console.log("server booted!");
});
a.onconnection = function(t) {
console.log("Network onConnection...");
t.ondata = function(e) {
console.log("Network onMessage...");
console.log(e);
try {
var n = JSON.parse(e), a = i.handle_request(n), r = JSON.stringify(a);
t.send(r, function() {});
} catch (t) {
console.log("[Poco] error when handling rpc request. req=" + e + "\nerror message: " + t.stack);
}
};
t.onclose = function() {
console.log("connection gone!");
};
};
a.onclose = function() {
console.log("server is closed!");
};
} else {
if ("undefined" == typeof WebSocket) {
console.error("WebSocketServer is not enabled!");
return;
}
var a;
(a = new WebSocket("ws://" + t + ":" + this.port.toString())).onopen = function() {
console.log("Network onConnection...");
a.send("tag_h5client");
};
a.onmessage = function(t) {
console.log("Network onMessage...");
try {
var e = JSON.parse(t.data), n = this.handle_request(e), i = JSON.stringify(n);
a.send(i);
} catch (e) {
console.log("[Poco] error when handling rpc request. req=" + t.data + "\nerror message: " + e.stack);
}
};
a.onclose = function(t) {
console.log("Network onDisconnection...");
console.log(JSON.stringify(t));
};
a.onerror = function(t) {
console.log("Network onerror...");
console.log(JSON.stringify(t));
};
a.onopen = a.onopen.bind(this);
a.onmessage = a.onmessage.bind(this);
a.onclose = a.onclose.bind(this);
a.onerror = a.onerror.bind(this);
}
} catch (t) {
console.log(t.stack + "\n" + t.message);
}
};
try {
e.exports = r;
} catch (t) {
window.module && window.module.exports && (window.module.exports = r);
}
cc._RF.pop();
}, {
"./Cocos2dxDumper": "Cocos2dxDumper",
"./POCO_SDK_VERSION": "POCO_SDK_VERSION"
} ],
Selector: [ function(t, e) {
"use strict";
cc._RF.push(e, "1c381SK3xhOV6WnsKalpu/e", "Selector");
var n = t("./DefaultMatcher"), i = function(t, e) {
this.dumper = t;
this.matcher = e || new n();
};
i.prototype.getRoot = function() {
return this.dumper.getRoot();
};
i.prototype.select = function(t, e) {
return this.selectImpl(t, e, this.getRoot(), 9999, !0, !0);
};
i.prototype.selectImpl = function(t, e, n, i, a, r) {
var s = [];
if (!n) return s;
var o = t[0], l = t[1];
if (">" === o || "/" === o) {
var h = [ n ];
for (var f in l) {
var d = l[f = parseInt(f)], u = [];
for (var c in h) {
var _ = h[c], p = i;
"/" === o && 0 !== f && (p = 1);
var g = this.selectImpl(d, !0, _, p, a, !1);
for (var m in g) u.indexOf(g[m]) < 0 && u.push(g[m]);
}
h = u;
}
s = h;
} else if ("-" === o) {
var b = l[0], w = l[1], v = this.selectImpl(b, e, n, i, a, r);
for (var f in v) {
var k = v[f], y = this.selectImpl(w, e, k.getParent(), 1, a, r);
for (var m in y) s.indexOf(y[m]) < 0 && s.push(y[m]);
}
} else if ("index" === o) {
t = l[0];
var x = l[1];
s = [ this.selectImpl(t, e, n, i, a, r)[x] ];
} else if ("^" === o) {
b = l[0];
if ((v = this.selectImpl(b, !1, n, i, a, r)).length > 0) {
var z = v[0].getParent();
z && (s = [ z ]);
}
} else this._selectTraverse(t, n, s, e, i, a, r);
return s;
};
i.prototype._selectTraverse = function(t, e, n, i, a, r, s) {
if (r && !e.getAttr("visible")) return !1;
if (this.matcher.match(t, e) && s) {
n.indexOf(e) < 0 && n.push(e);
if (!i) return !0;
}
if (0 === a) return !1;
a -= 1;
var o = e.getChildren();
for (var l in e.getChildren()) {
var h = o[l];
if (this._selectTraverse(t, h, n, i, a, r, !0)) return !0;
}
return !1;
};
try {
e.exports = i;
} catch (t) {
window.module && window.module.exports && (window.module.exports = i);
}
cc._RF.pop();
}, {
"./DefaultMatcher": "DefaultMatcher"
} ],
lianyunStart: [ function(t, e, n) {
"use strict";
cc._RF.push(e, "de5b8VFHHxL+ZVgECBNA5e4", "lianyunStart");
var i, a = this && this.__extends || (i = function(t, e) {
return (i = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(t, e) {
t.__proto__ = e;
} || function(t, e) {
for (var n in e) Object.prototype.hasOwnProperty.call(e, n) && (t[n] = e[n]);
})(t, e);
}, function(t, e) {
i(t, e);
function n() {
this.constructor = t;
}
t.prototype = null === e ? Object.create(e) : (n.prototype = e.prototype, new n());
}), r = this && this.__decorate || function(t, e, n, i) {
var a, r = arguments.length, s = r < 3 ? e : null === i ? i = Object.getOwnPropertyDescriptor(e, n) : i;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) s = Reflect.decorate(t, e, n, i); else for (var o = t.length - 1; o >= 0; o--) (a = t[o]) && (s = (r < 3 ? a(s) : r > 3 ? a(e, n, s) : a(e, n)) || s);
return r > 3 && s && Object.defineProperty(e, n, s), s;
};
Object.defineProperty(n, "__esModule", {
value: !0
});
var s = cc._decorator, o = s.ccclass, l = (s.property, function(t) {
a(e, t);
function e() {
var e = null !== t && t.apply(this, arguments) || this;
e._defaultBundle = "common";
return e;
}
e.prototype.onLoad = function() {
cc.sys.isBrowser && (cc.macro.ENABLE_MULTI_TOUCH = !1);
cc.debug.setDisplayStats(!1);
cc.assetManager.loadBundle(this._defaultBundle, this.onLoadCompelete.bind(this));
if (cc.sys.isNative && cc.sys.os === cc.sys.OS_ANDROID) {
var t = new cc.Node("CameraClearStencil_fixnubiyaredmegic"), e = t.addComponent(cc.Camera);
cc.find("Canvas").addChild(t);
t.groupIndex = 1;
e.backgroundColor = new cc.Color(0, 0, 0, 0);
e.clearFlags = cc.Camera.ClearFlags.DEPTH | cc.Camera.ClearFlags.STENCIL;
e.depth = 10;
e.cullingMask = 0;
}
};
e.prototype.onLoadCompelete = function() {
var t = cc.assetManager.getBundle(this._defaultBundle), e = [ "src" ];
null != t && cc.assetManager.loadAny(e, {
__requestType__: "dir",
type: null,
bundle: t.name,
__outputAsArray__: !0,
priority: 0
}, this._onComplete.bind(this, e));
};
e.prototype._onComplete = function() {
this.initScene();
};
e.prototype.initScene = function() {
this.loadFinish();
};
e.prototype.loadFinish = function() {
if (cc.js.getClassByName("Main")) {
qg.Process.process.getImplByIntf(qg.ILauncher).init();
cc.director.getScene().getChildByName("Canvas").addComponent("AppRootView");
cc.director.getScene().getChildByName("App").addComponent("Main");
} else {
fgui.GRoot.create();
this.resizeWindow();
qg.AssetTool.loadFguiAsync([ "hotupdateBundle:hotupdateBundle" ], "HotupdateUI", "FguiHotUpdateView", "hotupdateBundle").then(function(t) {
var e = t.ui;
e.node.zIndex = 10;
e.makeFullScreen();
e.addRelation(fgui.GRoot.inst, fgui.RelationType.Size);
fgui.GRoot.inst.addChild(e);
});
}
};
e.prototype.resizeWindow = function() {
var t = cc.find("Canvas").getComponent(cc.Canvas), e = cc.view.getFrameSize(), n = e.width / e.height, i = 1920, a = 1080;
n > i / a ? i = Math.ceil(a * n) : a = Math.ceil(i / n);
cc.view.setDesignResolutionSize(i, a, cc.view.getResolutionPolicy());
fgui.GRoot.inst.updateSize();
t.node.emit("resize");
};
return r([ o ], e);
}(cc.Component));
n.default = l;
cc._RF.pop();
}, {} ],
"pako.min": [ function(t, e, n) {
(function(i) {
"use strict";
cc._RF.push(e, "7b1c8fDRwVJmIv5Pup3vl0O", "pako.min");
!function(t) {
"object" == typeof n && "undefined" != typeof e ? e.exports = t() : "function" == typeof define && define.amd ? define([], t) : ("undefined" != typeof window ? window : "undefined" != typeof i ? i : "undefined" != typeof self ? self : this).pako = t();
}(function() {
return function e(n, i, a) {
function r(o, l) {
if (!i[o]) {
if (!n[o]) {
var h = "function" == typeof t && t;
if (!l && h) return h(o, !0);
if (s) return s(o, !0);
var f = new Error("Cannot find module '" + o + "'");
throw f.code = "MODULE_NOT_FOUND", f;
}
var d = i[o] = {
exports: {}
};
n[o][0].call(d.exports, function(t) {
return r(n[o][1][t] || t);
}, d, d.exports, e, n, i, a);
}
return i[o].exports;
}
for (var s = "function" == typeof t && t, o = 0; o < a.length; o++) r(a[o]);
return r;
}({
1: [ function(t, e, n) {
var i = t("./zlib/deflate"), a = t("./utils/common"), r = t("./utils/strings"), s = t("./zlib/messages"), o = t("./zlib/zstream"), l = Object.prototype.toString, h = 0, f = -1, d = 0, u = 8;
function c(t) {
if (!(this instanceof c)) return new c(t);
this.options = a.assign({
level: f,
method: u,
chunkSize: 16384,
windowBits: 15,
memLevel: 8,
strategy: d,
to: ""
}, t || {});
var e = this.options;
e.raw && 0 < e.windowBits ? e.windowBits = -e.windowBits : e.gzip && 0 < e.windowBits && e.windowBits < 16 && (e.windowBits += 16), 
this.err = 0, this.msg = "", this.ended = !1, this.chunks = [], this.strm = new o(), 
this.strm.avail_out = 0;
var n = i.deflateInit2(this.strm, e.level, e.method, e.windowBits, e.memLevel, e.strategy);
if (n !== h) throw new Error(s[n]);
if (e.header && i.deflateSetHeader(this.strm, e.header), e.dictionary) {
var _;
if (_ = "string" == typeof e.dictionary ? r.string2buf(e.dictionary) : "[object ArrayBuffer]" === l.call(e.dictionary) ? new Uint8Array(e.dictionary) : e.dictionary, 
(n = i.deflateSetDictionary(this.strm, _)) !== h) throw new Error(s[n]);
this._dict_set = !0;
}
}
function _(t, e) {
var n = new c(e);
if (n.push(t, !0), n.err) throw n.msg || s[n.err];
return n.result;
}
c.prototype.push = function(t, e) {
var n, s, o = this.strm, f = this.options.chunkSize;
if (this.ended) return !1;
s = e === ~~e ? e : !0 === e ? 4 : 0, "string" == typeof t ? o.input = r.string2buf(t) : "[object ArrayBuffer]" === l.call(t) ? o.input = new Uint8Array(t) : o.input = t, 
o.next_in = 0, o.avail_in = o.input.length;
do {
if (0 === o.avail_out && (o.output = new a.Buf8(f), o.next_out = 0, o.avail_out = f), 
1 !== (n = i.deflate(o, s)) && n !== h) return this.onEnd(n), !(this.ended = !0);
0 !== o.avail_out && (0 !== o.avail_in || 4 !== s && 2 !== s) || ("string" === this.options.to ? this.onData(r.buf2binstring(a.shrinkBuf(o.output, o.next_out))) : this.onData(a.shrinkBuf(o.output, o.next_out)));
} while ((0 < o.avail_in || 0 === o.avail_out) && 1 !== n);
return 4 === s ? (n = i.deflateEnd(this.strm), this.onEnd(n), this.ended = !0, n === h) : 2 !== s || (this.onEnd(h), 
!(o.avail_out = 0));
}, c.prototype.onData = function(t) {
this.chunks.push(t);
}, c.prototype.onEnd = function(t) {
t === h && ("string" === this.options.to ? this.result = this.chunks.join("") : this.result = a.flattenChunks(this.chunks)), 
this.chunks = [], this.err = t, this.msg = this.strm.msg;
}, n.Deflate = c, n.deflate = _, n.deflateRaw = function(t, e) {
return (e = e || {}).raw = !0, _(t, e);
}, n.gzip = function(t, e) {
return (e = e || {}).gzip = !0, _(t, e);
};
}, {
"./utils/common": 3,
"./utils/strings": 4,
"./zlib/deflate": 8,
"./zlib/messages": 13,
"./zlib/zstream": 15
} ],
2: [ function(t, e, n) {
var i = t("./zlib/inflate"), a = t("./utils/common"), r = t("./utils/strings"), s = t("./zlib/constants"), o = t("./zlib/messages"), l = t("./zlib/zstream"), h = t("./zlib/gzheader"), f = Object.prototype.toString;
function d(t) {
if (!(this instanceof d)) return new d(t);
this.options = a.assign({
chunkSize: 16384,
windowBits: 0,
to: ""
}, t || {});
var e = this.options;
e.raw && 0 <= e.windowBits && e.windowBits < 16 && (e.windowBits = -e.windowBits, 
0 === e.windowBits && (e.windowBits = -15)), !(0 <= e.windowBits && e.windowBits < 16) || t && t.windowBits || (e.windowBits += 32), 
15 < e.windowBits && e.windowBits < 48 && 0 == (15 & e.windowBits) && (e.windowBits |= 15), 
this.err = 0, this.msg = "", this.ended = !1, this.chunks = [], this.strm = new l(), 
this.strm.avail_out = 0;
var n = i.inflateInit2(this.strm, e.windowBits);
if (n !== s.Z_OK) throw new Error(o[n]);
if (this.header = new h(), i.inflateGetHeader(this.strm, this.header), e.dictionary && ("string" == typeof e.dictionary ? e.dictionary = r.string2buf(e.dictionary) : "[object ArrayBuffer]" === f.call(e.dictionary) && (e.dictionary = new Uint8Array(e.dictionary)), 
e.raw && (n = i.inflateSetDictionary(this.strm, e.dictionary)) !== s.Z_OK)) throw new Error(o[n]);
}
function u(t, e) {
var n = new d(e);
if (n.push(t, !0), n.err) throw n.msg || o[n.err];
return n.result;
}
d.prototype.push = function(t, e) {
var n, o, l, h, d, u = this.strm, c = this.options.chunkSize, _ = this.options.dictionary, p = !1;
if (this.ended) return !1;
o = e === ~~e ? e : !0 === e ? s.Z_FINISH : s.Z_NO_FLUSH, "string" == typeof t ? u.input = r.binstring2buf(t) : "[object ArrayBuffer]" === f.call(t) ? u.input = new Uint8Array(t) : u.input = t, 
u.next_in = 0, u.avail_in = u.input.length;
do {
if (0 === u.avail_out && (u.output = new a.Buf8(c), u.next_out = 0, u.avail_out = c), 
(n = i.inflate(u, s.Z_NO_FLUSH)) === s.Z_NEED_DICT && _ && (n = i.inflateSetDictionary(this.strm, _)), 
n === s.Z_BUF_ERROR && !0 === p && (n = s.Z_OK, p = !1), n !== s.Z_STREAM_END && n !== s.Z_OK) return this.onEnd(n), 
!(this.ended = !0);
u.next_out && (0 !== u.avail_out && n !== s.Z_STREAM_END && (0 !== u.avail_in || o !== s.Z_FINISH && o !== s.Z_SYNC_FLUSH) || ("string" === this.options.to ? (l = r.utf8border(u.output, u.next_out), 
h = u.next_out - l, d = r.buf2string(u.output, l), u.next_out = h, u.avail_out = c - h, 
h && a.arraySet(u.output, u.output, l, h, 0), this.onData(d)) : this.onData(a.shrinkBuf(u.output, u.next_out)))), 
0 === u.avail_in && 0 === u.avail_out && (p = !0);
} while ((0 < u.avail_in || 0 === u.avail_out) && n !== s.Z_STREAM_END);
return n === s.Z_STREAM_END && (o = s.Z_FINISH), o === s.Z_FINISH ? (n = i.inflateEnd(this.strm), 
this.onEnd(n), this.ended = !0, n === s.Z_OK) : o !== s.Z_SYNC_FLUSH || (this.onEnd(s.Z_OK), 
!(u.avail_out = 0));
}, d.prototype.onData = function(t) {
this.chunks.push(t);
}, d.prototype.onEnd = function(t) {
t === s.Z_OK && ("string" === this.options.to ? this.result = this.chunks.join("") : this.result = a.flattenChunks(this.chunks)), 
this.chunks = [], this.err = t, this.msg = this.strm.msg;
}, n.Inflate = d, n.inflate = u, n.inflateRaw = function(t, e) {
return (e = e || {}).raw = !0, u(t, e);
}, n.ungzip = u;
}, {
"./utils/common": 3,
"./utils/strings": 4,
"./zlib/constants": 6,
"./zlib/gzheader": 9,
"./zlib/inflate": 11,
"./zlib/messages": 13,
"./zlib/zstream": 15
} ],
3: [ function(t, e, n) {
var i = "undefined" != typeof Uint8Array && "undefined" != typeof Uint16Array && "undefined" != typeof Int32Array;
n.assign = function(t) {
for (var e, n, i = Array.prototype.slice.call(arguments, 1); i.length; ) {
var a = i.shift();
if (a) {
if ("object" != typeof a) throw new TypeError(a + "must be non-object");
for (var r in a) e = a, n = r, Object.prototype.hasOwnProperty.call(e, n) && (t[r] = a[r]);
}
}
return t;
}, n.shrinkBuf = function(t, e) {
return t.length === e ? t : t.subarray ? t.subarray(0, e) : (t.length = e, t);
};
var a = {
arraySet: function(t, e, n, i, a) {
if (e.subarray && t.subarray) t.set(e.subarray(n, n + i), a); else for (var r = 0; r < i; r++) t[a + r] = e[n + r];
},
flattenChunks: function(t) {
var e, n, i, a, r, s;
for (e = i = 0, n = t.length; e < n; e++) i += t[e].length;
for (s = new Uint8Array(i), e = a = 0, n = t.length; e < n; e++) r = t[e], s.set(r, a), 
a += r.length;
return s;
}
}, r = {
arraySet: function(t, e, n, i, a) {
for (var r = 0; r < i; r++) t[a + r] = e[n + r];
},
flattenChunks: function(t) {
return [].concat.apply([], t);
}
};
n.setTyped = function(t) {
t ? (n.Buf8 = Uint8Array, n.Buf16 = Uint16Array, n.Buf32 = Int32Array, n.assign(n, a)) : (n.Buf8 = Array, 
n.Buf16 = Array, n.Buf32 = Array, n.assign(n, r));
}, n.setTyped(i);
}, {} ],
4: [ function(t, e, n) {
var i = t("./common"), a = !0, r = !0;
try {
String.fromCharCode.apply(null, [ 0 ]);
} catch (t) {
a = !1;
}
try {
String.fromCharCode.apply(null, new Uint8Array(1));
} catch (t) {
r = !1;
}
for (var s = new i.Buf8(256), o = 0; o < 256; o++) s[o] = 252 <= o ? 6 : 248 <= o ? 5 : 240 <= o ? 4 : 224 <= o ? 3 : 192 <= o ? 2 : 1;
function l(t, e) {
if (e < 65534 && (t.subarray && r || !t.subarray && a)) return String.fromCharCode.apply(null, i.shrinkBuf(t, e));
for (var n = "", s = 0; s < e; s++) n += String.fromCharCode(t[s]);
return n;
}
s[254] = s[254] = 1, n.string2buf = function(t) {
var e, n, a, r, s, o = t.length, l = 0;
for (r = 0; r < o; r++) 55296 == (64512 & (n = t.charCodeAt(r))) && r + 1 < o && 56320 == (64512 & (a = t.charCodeAt(r + 1))) && (n = 65536 + (n - 55296 << 10) + (a - 56320), 
r++), l += n < 128 ? 1 : n < 2048 ? 2 : n < 65536 ? 3 : 4;
for (e = new i.Buf8(l), r = s = 0; s < l; r++) 55296 == (64512 & (n = t.charCodeAt(r))) && r + 1 < o && 56320 == (64512 & (a = t.charCodeAt(r + 1))) && (n = 65536 + (n - 55296 << 10) + (a - 56320), 
r++), n < 128 ? e[s++] = n : (n < 2048 ? e[s++] = 192 | n >>> 6 : (n < 65536 ? e[s++] = 224 | n >>> 12 : (e[s++] = 240 | n >>> 18, 
e[s++] = 128 | n >>> 12 & 63), e[s++] = 128 | n >>> 6 & 63), e[s++] = 128 | 63 & n);
return e;
}, n.buf2binstring = function(t) {
return l(t, t.length);
}, n.binstring2buf = function(t) {
for (var e = new i.Buf8(t.length), n = 0, a = e.length; n < a; n++) e[n] = t.charCodeAt(n);
return e;
}, n.buf2string = function(t, e) {
var n, i, a, r, o = e || t.length, h = new Array(2 * o);
for (n = i = 0; n < o; ) if ((a = t[n++]) < 128) h[i++] = a; else if (4 < (r = s[a])) h[i++] = 65533, 
n += r - 1; else {
for (a &= 2 === r ? 31 : 3 === r ? 15 : 7; 1 < r && n < o; ) a = a << 6 | 63 & t[n++], 
r--;
1 < r ? h[i++] = 65533 : a < 65536 ? h[i++] = a : (a -= 65536, h[i++] = 55296 | a >> 10 & 1023, 
h[i++] = 56320 | 1023 & a);
}
return l(h, i);
}, n.utf8border = function(t, e) {
var n;
for ((e = e || t.length) > t.length && (e = t.length), n = e - 1; 0 <= n && 128 == (192 & t[n]); ) n--;
return n < 0 ? e : 0 === n ? e : n + s[t[n]] > e ? n : e;
};
}, {
"./common": 3
} ],
5: [ function(t, e) {
e.exports = function(t, e, n, i) {
for (var a = 65535 & t | 0, r = t >>> 16 & 65535 | 0, s = 0; 0 !== n; ) {
for (n -= s = 2e3 < n ? 2e3 : n; r = r + (a = a + e[i++] | 0) | 0, --s; ) ;
a %= 65521, r %= 65521;
}
return a | r << 16 | 0;
};
}, {} ],
6: [ function(t, e) {
e.exports = {
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
}, {} ],
7: [ function(t, e) {
var n = function() {
for (var t, e = [], n = 0; n < 256; n++) {
t = n;
for (var i = 0; i < 8; i++) t = 1 & t ? 3988292384 ^ t >>> 1 : t >>> 1;
e[n] = t;
}
return e;
}();
e.exports = function(t, e, i, a) {
var r = n, s = a + i;
t ^= -1;
for (var o = a; o < s; o++) t = t >>> 8 ^ r[255 & (t ^ e[o])];
return -1 ^ t;
};
}, {} ],
8: [ function(t, e, n) {
var i, a = t("../utils/common"), r = t("./trees"), s = t("./adler32"), o = t("./crc32"), l = t("./messages"), h = 0, f = 4, d = 0, u = -2, c = -1, _ = 4, p = 2, g = 8, m = 9, b = 286, w = 30, v = 19, k = 2 * b + 1, y = 15, x = 3, z = 258, S = z + x + 1, B = 42, A = 113, E = 1, C = 2, R = 3, O = 4;
function N(t, e) {
return t.msg = l[e], e;
}
function Z(t) {
return (t << 1) - (4 < t ? 9 : 0);
}
function I(t) {
for (var e = t.length; 0 <= --e; ) t[e] = 0;
}
function D(t) {
var e = t.state, n = e.pending;
n > t.avail_out && (n = t.avail_out), 0 !== n && (a.arraySet(t.output, e.pending_buf, e.pending_out, n, t.next_out), 
t.next_out += n, e.pending_out += n, t.total_out += n, t.avail_out -= n, e.pending -= n, 
0 === e.pending && (e.pending_out = 0));
}
function F(t, e) {
r._tr_flush_block(t, 0 <= t.block_start ? t.block_start : -1, t.strstart - t.block_start, e), 
t.block_start = t.strstart, D(t.strm);
}
function U(t, e) {
t.pending_buf[t.pending++] = e;
}
function T(t, e) {
t.pending_buf[t.pending++] = e >>> 8 & 255, t.pending_buf[t.pending++] = 255 & e;
}
function j(t, e) {
var n, i, a = t.max_chain_length, r = t.strstart, s = t.prev_length, o = t.nice_match, l = t.strstart > t.w_size - S ? t.strstart - (t.w_size - S) : 0, h = t.window, f = t.w_mask, d = t.prev, u = t.strstart + z, c = h[r + s - 1], _ = h[r + s];
t.prev_length >= t.good_match && (a >>= 2), o > t.lookahead && (o = t.lookahead);
do {
if (h[(n = e) + s] === _ && h[n + s - 1] === c && h[n] === h[r] && h[++n] === h[r + 1]) {
r += 2, n++;
do {} while (h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && r < u);
if (i = z - (u - r), r = u - z, s < i) {
if (t.match_start = e, o <= (s = i)) break;
c = h[r + s - 1], _ = h[r + s];
}
}
} while ((e = d[e & f]) > l && 0 != --a);
return s <= t.lookahead ? s : t.lookahead;
}
function H(t) {
var e, n, i, r, l, h, f, d, u, c, _ = t.w_size;
do {
if (r = t.window_size - t.lookahead - t.strstart, t.strstart >= _ + (_ - S)) {
for (a.arraySet(t.window, t.window, _, _, 0), t.match_start -= _, t.strstart -= _, 
t.block_start -= _, e = n = t.hash_size; i = t.head[--e], t.head[e] = _ <= i ? i - _ : 0, 
--n; ) ;
for (e = n = _; i = t.prev[--e], t.prev[e] = _ <= i ? i - _ : 0, --n; ) ;
r += _;
}
if (0 === t.strm.avail_in) break;
if (h = t.strm, f = t.window, d = t.strstart + t.lookahead, c = void 0, (u = r) < (c = h.avail_in) && (c = u), 
n = 0 === c ? 0 : (h.avail_in -= c, a.arraySet(f, h.input, h.next_in, c, d), 1 === h.state.wrap ? h.adler = s(h.adler, f, c, d) : 2 === h.state.wrap && (h.adler = o(h.adler, f, c, d)), 
h.next_in += c, h.total_in += c, c), t.lookahead += n, t.lookahead + t.insert >= x) for (l = t.strstart - t.insert, 
t.ins_h = t.window[l], t.ins_h = (t.ins_h << t.hash_shift ^ t.window[l + 1]) & t.hash_mask; t.insert && (t.ins_h = (t.ins_h << t.hash_shift ^ t.window[l + x - 1]) & t.hash_mask, 
t.prev[l & t.w_mask] = t.head[t.ins_h], t.head[t.ins_h] = l, l++, t.insert--, !(t.lookahead + t.insert < x)); ) ;
} while (t.lookahead < S && 0 !== t.strm.avail_in);
}
function L(t, e) {
for (var n, i; ;) {
if (t.lookahead < S) {
if (H(t), t.lookahead < S && e === h) return E;
if (0 === t.lookahead) break;
}
if (n = 0, t.lookahead >= x && (t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + x - 1]) & t.hash_mask, 
n = t.prev[t.strstart & t.w_mask] = t.head[t.ins_h], t.head[t.ins_h] = t.strstart), 
0 !== n && t.strstart - n <= t.w_size - S && (t.match_length = j(t, n)), t.match_length >= x) if (i = r._tr_tally(t, t.strstart - t.match_start, t.match_length - x), 
t.lookahead -= t.match_length, t.match_length <= t.max_lazy_match && t.lookahead >= x) {
for (t.match_length--; t.strstart++, t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + x - 1]) & t.hash_mask, 
n = t.prev[t.strstart & t.w_mask] = t.head[t.ins_h], t.head[t.ins_h] = t.strstart, 
0 != --t.match_length; ) ;
t.strstart++;
} else t.strstart += t.match_length, t.match_length = 0, t.ins_h = t.window[t.strstart], 
t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + 1]) & t.hash_mask; else i = r._tr_tally(t, 0, t.window[t.strstart]), 
t.lookahead--, t.strstart++;
if (i && (F(t, !1), 0 === t.strm.avail_out)) return E;
}
return t.insert = t.strstart < x - 1 ? t.strstart : x - 1, e === f ? (F(t, !0), 
0 === t.strm.avail_out ? R : O) : t.last_lit && (F(t, !1), 0 === t.strm.avail_out) ? E : C;
}
function M(t, e) {
for (var n, i, a; ;) {
if (t.lookahead < S) {
if (H(t), t.lookahead < S && e === h) return E;
if (0 === t.lookahead) break;
}
if (n = 0, t.lookahead >= x && (t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + x - 1]) & t.hash_mask, 
n = t.prev[t.strstart & t.w_mask] = t.head[t.ins_h], t.head[t.ins_h] = t.strstart), 
t.prev_length = t.match_length, t.prev_match = t.match_start, t.match_length = x - 1, 
0 !== n && t.prev_length < t.max_lazy_match && t.strstart - n <= t.w_size - S && (t.match_length = j(t, n), 
t.match_length <= 5 && (1 === t.strategy || t.match_length === x && 4096 < t.strstart - t.match_start) && (t.match_length = x - 1)), 
t.prev_length >= x && t.match_length <= t.prev_length) {
for (a = t.strstart + t.lookahead - x, i = r._tr_tally(t, t.strstart - 1 - t.prev_match, t.prev_length - x), 
t.lookahead -= t.prev_length - 1, t.prev_length -= 2; ++t.strstart <= a && (t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + x - 1]) & t.hash_mask, 
n = t.prev[t.strstart & t.w_mask] = t.head[t.ins_h], t.head[t.ins_h] = t.strstart), 
0 != --t.prev_length; ) ;
if (t.match_available = 0, t.match_length = x - 1, t.strstart++, i && (F(t, !1), 
0 === t.strm.avail_out)) return E;
} else if (t.match_available) {
if ((i = r._tr_tally(t, 0, t.window[t.strstart - 1])) && F(t, !1), t.strstart++, 
t.lookahead--, 0 === t.strm.avail_out) return E;
} else t.match_available = 1, t.strstart++, t.lookahead--;
}
return t.match_available && (i = r._tr_tally(t, 0, t.window[t.strstart - 1]), t.match_available = 0), 
t.insert = t.strstart < x - 1 ? t.strstart : x - 1, e === f ? (F(t, !0), 0 === t.strm.avail_out ? R : O) : t.last_lit && (F(t, !1), 
0 === t.strm.avail_out) ? E : C;
}
function P(t, e, n, i, a) {
this.good_length = t, this.max_lazy = e, this.nice_length = n, this.max_chain = i, 
this.func = a;
}
function K() {
this.strm = null, this.status = 0, this.pending_buf = null, this.pending_buf_size = 0, 
this.pending_out = 0, this.pending = 0, this.wrap = 0, this.gzhead = null, this.gzindex = 0, 
this.method = g, this.last_flush = -1, this.w_size = 0, this.w_bits = 0, this.w_mask = 0, 
this.window = null, this.window_size = 0, this.prev = null, this.head = null, this.ins_h = 0, 
this.hash_size = 0, this.hash_bits = 0, this.hash_mask = 0, this.hash_shift = 0, 
this.block_start = 0, this.match_length = 0, this.prev_match = 0, this.match_available = 0, 
this.strstart = 0, this.match_start = 0, this.lookahead = 0, this.prev_length = 0, 
this.max_chain_length = 0, this.max_lazy_match = 0, this.level = 0, this.strategy = 0, 
this.good_match = 0, this.nice_match = 0, this.dyn_ltree = new a.Buf16(2 * k), this.dyn_dtree = new a.Buf16(2 * (2 * w + 1)), 
this.bl_tree = new a.Buf16(2 * (2 * v + 1)), I(this.dyn_ltree), I(this.dyn_dtree), 
I(this.bl_tree), this.l_desc = null, this.d_desc = null, this.bl_desc = null, this.bl_count = new a.Buf16(y + 1), 
this.heap = new a.Buf16(2 * b + 1), I(this.heap), this.heap_len = 0, this.heap_max = 0, 
this.depth = new a.Buf16(2 * b + 1), I(this.depth), this.l_buf = 0, this.lit_bufsize = 0, 
this.last_lit = 0, this.d_buf = 0, this.opt_len = 0, this.static_len = 0, this.matches = 0, 
this.insert = 0, this.bi_buf = 0, this.bi_valid = 0;
}
function W(t) {
var e;
return t && t.state ? (t.total_in = t.total_out = 0, t.data_type = p, (e = t.state).pending = 0, 
e.pending_out = 0, e.wrap < 0 && (e.wrap = -e.wrap), e.status = e.wrap ? B : A, 
t.adler = 2 === e.wrap ? 0 : 1, e.last_flush = h, r._tr_init(e), d) : N(t, u);
}
function V(t) {
var e, n = W(t);
return n === d && ((e = t.state).window_size = 2 * e.w_size, I(e.head), e.max_lazy_match = i[e.level].max_lazy, 
e.good_match = i[e.level].good_length, e.nice_match = i[e.level].nice_length, e.max_chain_length = i[e.level].max_chain, 
e.strstart = 0, e.block_start = 0, e.lookahead = 0, e.insert = 0, e.match_length = e.prev_length = x - 1, 
e.match_available = 0, e.ins_h = 0), n;
}
function q(t, e, n, i, r, s) {
if (!t) return u;
var o = 1;
if (e === c && (e = 6), i < 0 ? (o = 0, i = -i) : 15 < i && (o = 2, i -= 16), r < 1 || m < r || n !== g || i < 8 || 15 < i || e < 0 || 9 < e || s < 0 || _ < s) return N(t, u);
8 === i && (i = 9);
var l = new K();
return (t.state = l).strm = t, l.wrap = o, l.gzhead = null, l.w_bits = i, l.w_size = 1 << l.w_bits, 
l.w_mask = l.w_size - 1, l.hash_bits = r + 7, l.hash_size = 1 << l.hash_bits, l.hash_mask = l.hash_size - 1, 
l.hash_shift = ~~((l.hash_bits + x - 1) / x), l.window = new a.Buf8(2 * l.w_size), 
l.head = new a.Buf16(l.hash_size), l.prev = new a.Buf16(l.w_size), l.lit_bufsize = 1 << r + 6, 
l.pending_buf_size = 4 * l.lit_bufsize, l.pending_buf = new a.Buf8(l.pending_buf_size), 
l.d_buf = 1 * l.lit_bufsize, l.l_buf = 3 * l.lit_bufsize, l.level = e, l.strategy = s, 
l.method = n, V(t);
}
i = [ new P(0, 0, 0, 0, function(t, e) {
var n = 65535;
for (n > t.pending_buf_size - 5 && (n = t.pending_buf_size - 5); ;) {
if (t.lookahead <= 1) {
if (H(t), 0 === t.lookahead && e === h) return E;
if (0 === t.lookahead) break;
}
t.strstart += t.lookahead, t.lookahead = 0;
var i = t.block_start + n;
if ((0 === t.strstart || t.strstart >= i) && (t.lookahead = t.strstart - i, t.strstart = i, 
F(t, !1), 0 === t.strm.avail_out)) return E;
if (t.strstart - t.block_start >= t.w_size - S && (F(t, !1), 0 === t.strm.avail_out)) return E;
}
return t.insert = 0, e === f ? (F(t, !0), 0 === t.strm.avail_out ? R : O) : (t.strstart > t.block_start && (F(t, !1), 
t.strm.avail_out), E);
}), new P(4, 4, 8, 4, L), new P(4, 5, 16, 8, L), new P(4, 6, 32, 32, L), new P(4, 4, 16, 16, M), new P(8, 16, 32, 32, M), new P(8, 16, 128, 128, M), new P(8, 32, 128, 256, M), new P(32, 128, 258, 1024, M), new P(32, 258, 258, 4096, M) ], 
n.deflateInit = function(t, e) {
return q(t, e, g, 15, 8, 0);
}, n.deflateInit2 = q, n.deflateReset = V, n.deflateResetKeep = W, n.deflateSetHeader = function(t, e) {
return t && t.state ? 2 !== t.state.wrap ? u : (t.state.gzhead = e, d) : u;
}, n.deflate = function(t, e) {
var n, a, s, l;
if (!t || !t.state || 5 < e || e < 0) return t ? N(t, u) : u;
if (a = t.state, !t.output || !t.input && 0 !== t.avail_in || 666 === a.status && e !== f) return N(t, 0 === t.avail_out ? -5 : u);
if (a.strm = t, n = a.last_flush, a.last_flush = e, a.status === B) if (2 === a.wrap) t.adler = 0, 
U(a, 31), U(a, 139), U(a, 8), a.gzhead ? (U(a, (a.gzhead.text ? 1 : 0) + (a.gzhead.hcrc ? 2 : 0) + (a.gzhead.extra ? 4 : 0) + (a.gzhead.name ? 8 : 0) + (a.gzhead.comment ? 16 : 0)), 
U(a, 255 & a.gzhead.time), U(a, a.gzhead.time >> 8 & 255), U(a, a.gzhead.time >> 16 & 255), 
U(a, a.gzhead.time >> 24 & 255), U(a, 9 === a.level ? 2 : 2 <= a.strategy || a.level < 2 ? 4 : 0), 
U(a, 255 & a.gzhead.os), a.gzhead.extra && a.gzhead.extra.length && (U(a, 255 & a.gzhead.extra.length), 
U(a, a.gzhead.extra.length >> 8 & 255)), a.gzhead.hcrc && (t.adler = o(t.adler, a.pending_buf, a.pending, 0)), 
a.gzindex = 0, a.status = 69) : (U(a, 0), U(a, 0), U(a, 0), U(a, 0), U(a, 0), U(a, 9 === a.level ? 2 : 2 <= a.strategy || a.level < 2 ? 4 : 0), 
U(a, 3), a.status = A); else {
var c = g + (a.w_bits - 8 << 4) << 8;
c |= (2 <= a.strategy || a.level < 2 ? 0 : a.level < 6 ? 1 : 6 === a.level ? 2 : 3) << 6, 
0 !== a.strstart && (c |= 32), c += 31 - c % 31, a.status = A, T(a, c), 0 !== a.strstart && (T(a, t.adler >>> 16), 
T(a, 65535 & t.adler)), t.adler = 1;
}
if (69 === a.status) if (a.gzhead.extra) {
for (s = a.pending; a.gzindex < (65535 & a.gzhead.extra.length) && (a.pending !== a.pending_buf_size || (a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s)), 
D(t), s = a.pending, a.pending !== a.pending_buf_size)); ) U(a, 255 & a.gzhead.extra[a.gzindex]), 
a.gzindex++;
a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s)), 
a.gzindex === a.gzhead.extra.length && (a.gzindex = 0, a.status = 73);
} else a.status = 73;
if (73 === a.status) if (a.gzhead.name) {
s = a.pending;
do {
if (a.pending === a.pending_buf_size && (a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s)), 
D(t), s = a.pending, a.pending === a.pending_buf_size)) {
l = 1;
break;
}
U(a, l = a.gzindex < a.gzhead.name.length ? 255 & a.gzhead.name.charCodeAt(a.gzindex++) : 0);
} while (0 !== l);
a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s)), 
0 === l && (a.gzindex = 0, a.status = 91);
} else a.status = 91;
if (91 === a.status) if (a.gzhead.comment) {
s = a.pending;
do {
if (a.pending === a.pending_buf_size && (a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s)), 
D(t), s = a.pending, a.pending === a.pending_buf_size)) {
l = 1;
break;
}
U(a, l = a.gzindex < a.gzhead.comment.length ? 255 & a.gzhead.comment.charCodeAt(a.gzindex++) : 0);
} while (0 !== l);
a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s)), 
0 === l && (a.status = 103);
} else a.status = 103;
if (103 === a.status && (a.gzhead.hcrc ? (a.pending + 2 > a.pending_buf_size && D(t), 
a.pending + 2 <= a.pending_buf_size && (U(a, 255 & t.adler), U(a, t.adler >> 8 & 255), 
t.adler = 0, a.status = A)) : a.status = A), 0 !== a.pending) {
if (D(t), 0 === t.avail_out) return a.last_flush = -1, d;
} else if (0 === t.avail_in && Z(e) <= Z(n) && e !== f) return N(t, -5);
if (666 === a.status && 0 !== t.avail_in) return N(t, -5);
if (0 !== t.avail_in || 0 !== a.lookahead || e !== h && 666 !== a.status) {
var _ = 2 === a.strategy ? function(t, e) {
for (var n; ;) {
if (0 === t.lookahead && (H(t), 0 === t.lookahead)) {
if (e === h) return E;
break;
}
if (t.match_length = 0, n = r._tr_tally(t, 0, t.window[t.strstart]), t.lookahead--, 
t.strstart++, n && (F(t, !1), 0 === t.strm.avail_out)) return E;
}
return t.insert = 0, e === f ? (F(t, !0), 0 === t.strm.avail_out ? R : O) : t.last_lit && (F(t, !1), 
0 === t.strm.avail_out) ? E : C;
}(a, e) : 3 === a.strategy ? function(t, e) {
for (var n, i, a, s, o = t.window; ;) {
if (t.lookahead <= z) {
if (H(t), t.lookahead <= z && e === h) return E;
if (0 === t.lookahead) break;
}
if (t.match_length = 0, t.lookahead >= x && 0 < t.strstart && (i = o[a = t.strstart - 1]) === o[++a] && i === o[++a] && i === o[++a]) {
s = t.strstart + z;
do {} while (i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && a < s);
t.match_length = z - (s - a), t.match_length > t.lookahead && (t.match_length = t.lookahead);
}
if (t.match_length >= x ? (n = r._tr_tally(t, 1, t.match_length - x), t.lookahead -= t.match_length, 
t.strstart += t.match_length, t.match_length = 0) : (n = r._tr_tally(t, 0, t.window[t.strstart]), 
t.lookahead--, t.strstart++), n && (F(t, !1), 0 === t.strm.avail_out)) return E;
}
return t.insert = 0, e === f ? (F(t, !0), 0 === t.strm.avail_out ? R : O) : t.last_lit && (F(t, !1), 
0 === t.strm.avail_out) ? E : C;
}(a, e) : i[a.level].func(a, e);
if (_ !== R && _ !== O || (a.status = 666), _ === E || _ === R) return 0 === t.avail_out && (a.last_flush = -1), 
d;
if (_ === C && (1 === e ? r._tr_align(a) : 5 !== e && (r._tr_stored_block(a, 0, 0, !1), 
3 === e && (I(a.head), 0 === a.lookahead && (a.strstart = 0, a.block_start = 0, 
a.insert = 0))), D(t), 0 === t.avail_out)) return a.last_flush = -1, d;
}
return e !== f ? d : a.wrap <= 0 ? 1 : (2 === a.wrap ? (U(a, 255 & t.adler), U(a, t.adler >> 8 & 255), 
U(a, t.adler >> 16 & 255), U(a, t.adler >> 24 & 255), U(a, 255 & t.total_in), U(a, t.total_in >> 8 & 255), 
U(a, t.total_in >> 16 & 255), U(a, t.total_in >> 24 & 255)) : (T(a, t.adler >>> 16), 
T(a, 65535 & t.adler)), D(t), 0 < a.wrap && (a.wrap = -a.wrap), 0 !== a.pending ? d : 1);
}, n.deflateEnd = function(t) {
var e;
return t && t.state ? (e = t.state.status) !== B && 69 !== e && 73 !== e && 91 !== e && 103 !== e && e !== A && 666 !== e ? N(t, u) : (t.state = null, 
e === A ? N(t, -3) : d) : u;
}, n.deflateSetDictionary = function(t, e) {
var n, i, r, o, l, h, f, c, _ = e.length;
if (!t || !t.state) return u;
if (2 === (o = (n = t.state).wrap) || 1 === o && n.status !== B || n.lookahead) return u;
for (1 === o && (t.adler = s(t.adler, e, _, 0)), n.wrap = 0, _ >= n.w_size && (0 === o && (I(n.head), 
n.strstart = 0, n.block_start = 0, n.insert = 0), c = new a.Buf8(n.w_size), a.arraySet(c, e, _ - n.w_size, n.w_size, 0), 
e = c, _ = n.w_size), l = t.avail_in, h = t.next_in, f = t.input, t.avail_in = _, 
t.next_in = 0, t.input = e, H(n); n.lookahead >= x; ) {
for (i = n.strstart, r = n.lookahead - (x - 1); n.ins_h = (n.ins_h << n.hash_shift ^ n.window[i + x - 1]) & n.hash_mask, 
n.prev[i & n.w_mask] = n.head[n.ins_h], n.head[n.ins_h] = i, i++, --r; ) ;
n.strstart = i, n.lookahead = x - 1, H(n);
}
return n.strstart += n.lookahead, n.block_start = n.strstart, n.insert = n.lookahead, 
n.lookahead = 0, n.match_length = n.prev_length = x - 1, n.match_available = 0, 
t.next_in = h, t.input = f, t.avail_in = l, n.wrap = o, d;
}, n.deflateInfo = "pako deflate (from Nodeca project)";
}, {
"../utils/common": 3,
"./adler32": 5,
"./crc32": 7,
"./messages": 13,
"./trees": 14
} ],
9: [ function(t, e) {
e.exports = function() {
this.text = 0, this.time = 0, this.xflags = 0, this.os = 0, this.extra = null, this.extra_len = 0, 
this.name = "", this.comment = "", this.hcrc = 0, this.done = !1;
};
}, {} ],
10: [ function(t, e) {
e.exports = function(t, e) {
var n, i, a, r, s, o, l, h, f, d, u, c, _, p, g, m, b, w, v, k, y, x, z, S, B;
n = t.state, i = t.next_in, S = t.input, a = i + (t.avail_in - 5), r = t.next_out, 
B = t.output, s = r - (e - t.avail_out), o = r + (t.avail_out - 257), l = n.dmax, 
h = n.wsize, f = n.whave, d = n.wnext, u = n.window, c = n.hold, _ = n.bits, p = n.lencode, 
g = n.distcode, m = (1 << n.lenbits) - 1, b = (1 << n.distbits) - 1;
t: do {
_ < 15 && (c += S[i++] << _, _ += 8, c += S[i++] << _, _ += 8), w = p[c & m];
e: for (;;) {
if (c >>>= v = w >>> 24, _ -= v, 0 == (v = w >>> 16 & 255)) B[r++] = 65535 & w; else {
if (!(16 & v)) {
if (0 == (64 & v)) {
w = p[(65535 & w) + (c & (1 << v) - 1)];
continue e;
}
if (32 & v) {
n.mode = 12;
break t;
}
t.msg = "invalid literal/length code", n.mode = 30;
break t;
}
k = 65535 & w, (v &= 15) && (_ < v && (c += S[i++] << _, _ += 8), k += c & (1 << v) - 1, 
c >>>= v, _ -= v), _ < 15 && (c += S[i++] << _, _ += 8, c += S[i++] << _, _ += 8), 
w = g[c & b];
n: for (;;) {
if (c >>>= v = w >>> 24, _ -= v, !(16 & (v = w >>> 16 & 255))) {
if (0 == (64 & v)) {
w = g[(65535 & w) + (c & (1 << v) - 1)];
continue n;
}
t.msg = "invalid distance code", n.mode = 30;
break t;
}
if (y = 65535 & w, _ < (v &= 15) && (c += S[i++] << _, (_ += 8) < v && (c += S[i++] << _, 
_ += 8)), l < (y += c & (1 << v) - 1)) {
t.msg = "invalid distance too far back", n.mode = 30;
break t;
}
if (c >>>= v, _ -= v, (v = r - s) < y) {
if (f < (v = y - v) && n.sane) {
t.msg = "invalid distance too far back", n.mode = 30;
break t;
}
if (z = u, (x = 0) === d) {
if (x += h - v, v < k) {
for (k -= v; B[r++] = u[x++], --v; ) ;
x = r - y, z = B;
}
} else if (d < v) {
if (x += h + d - v, (v -= d) < k) {
for (k -= v; B[r++] = u[x++], --v; ) ;
if (x = 0, d < k) {
for (k -= v = d; B[r++] = u[x++], --v; ) ;
x = r - y, z = B;
}
}
} else if (x += d - v, v < k) {
for (k -= v; B[r++] = u[x++], --v; ) ;
x = r - y, z = B;
}
for (;2 < k; ) B[r++] = z[x++], B[r++] = z[x++], B[r++] = z[x++], k -= 3;
k && (B[r++] = z[x++], 1 < k && (B[r++] = z[x++]));
} else {
for (x = r - y; B[r++] = B[x++], B[r++] = B[x++], B[r++] = B[x++], 2 < (k -= 3); ) ;
k && (B[r++] = B[x++], 1 < k && (B[r++] = B[x++]));
}
break;
}
}
break;
}
} while (i < a && r < o);
i -= k = _ >> 3, c &= (1 << (_ -= k << 3)) - 1, t.next_in = i, t.next_out = r, t.avail_in = i < a ? a - i + 5 : 5 - (i - a), 
t.avail_out = r < o ? o - r + 257 : 257 - (r - o), n.hold = c, n.bits = _;
};
}, {} ],
11: [ function(t, e, n) {
var i = t("../utils/common"), a = t("./adler32"), r = t("./crc32"), s = t("./inffast"), o = t("./inftrees"), l = 1, h = 2, f = 0, d = -2, u = 1, c = 852, _ = 592;
function p(t) {
return (t >>> 24 & 255) + (t >>> 8 & 65280) + ((65280 & t) << 8) + ((255 & t) << 24);
}
function g() {
this.mode = 0, this.last = !1, this.wrap = 0, this.havedict = !1, this.flags = 0, 
this.dmax = 0, this.check = 0, this.total = 0, this.head = null, this.wbits = 0, 
this.wsize = 0, this.whave = 0, this.wnext = 0, this.window = null, this.hold = 0, 
this.bits = 0, this.length = 0, this.offset = 0, this.extra = 0, this.lencode = null, 
this.distcode = null, this.lenbits = 0, this.distbits = 0, this.ncode = 0, this.nlen = 0, 
this.ndist = 0, this.have = 0, this.next = null, this.lens = new i.Buf16(320), this.work = new i.Buf16(288), 
this.lendyn = null, this.distdyn = null, this.sane = 0, this.back = 0, this.was = 0;
}
function m(t) {
var e;
return t && t.state ? (e = t.state, t.total_in = t.total_out = e.total = 0, t.msg = "", 
e.wrap && (t.adler = 1 & e.wrap), e.mode = u, e.last = 0, e.havedict = 0, e.dmax = 32768, 
e.head = null, e.hold = 0, e.bits = 0, e.lencode = e.lendyn = new i.Buf32(c), e.distcode = e.distdyn = new i.Buf32(_), 
e.sane = 1, e.back = -1, f) : d;
}
function b(t) {
var e;
return t && t.state ? ((e = t.state).wsize = 0, e.whave = 0, e.wnext = 0, m(t)) : d;
}
function w(t, e) {
var n, i;
return t && t.state ? (i = t.state, e < 0 ? (n = 0, e = -e) : (n = 1 + (e >> 4), 
e < 48 && (e &= 15)), e && (e < 8 || 15 < e) ? d : (null !== i.window && i.wbits !== e && (i.window = null), 
i.wrap = n, i.wbits = e, b(t))) : d;
}
function v(t, e) {
var n, i;
return t ? (i = new g(), (t.state = i).window = null, (n = w(t, e)) !== f && (t.state = null), 
n) : d;
}
var k, y, x = !0;
function z(t) {
if (x) {
var e;
for (k = new i.Buf32(512), y = new i.Buf32(32), e = 0; e < 144; ) t.lens[e++] = 8;
for (;e < 256; ) t.lens[e++] = 9;
for (;e < 280; ) t.lens[e++] = 7;
for (;e < 288; ) t.lens[e++] = 8;
for (o(l, t.lens, 0, 288, k, 0, t.work, {
bits: 9
}), e = 0; e < 32; ) t.lens[e++] = 5;
o(h, t.lens, 0, 32, y, 0, t.work, {
bits: 5
}), x = !1;
}
t.lencode = k, t.lenbits = 9, t.distcode = y, t.distbits = 5;
}
function S(t, e, n, a) {
var r, s = t.state;
return null === s.window && (s.wsize = 1 << s.wbits, s.wnext = 0, s.whave = 0, s.window = new i.Buf8(s.wsize)), 
a >= s.wsize ? (i.arraySet(s.window, e, n - s.wsize, s.wsize, 0), s.wnext = 0, s.whave = s.wsize) : (a < (r = s.wsize - s.wnext) && (r = a), 
i.arraySet(s.window, e, n - a, r, s.wnext), (a -= r) ? (i.arraySet(s.window, e, n - a, a, 0), 
s.wnext = a, s.whave = s.wsize) : (s.wnext += r, s.wnext === s.wsize && (s.wnext = 0), 
s.whave < s.wsize && (s.whave += r))), 0;
}
n.inflateReset = b, n.inflateReset2 = w, n.inflateResetKeep = m, n.inflateInit = function(t) {
return v(t, 15);
}, n.inflateInit2 = v, n.inflate = function(t, e) {
var n, c, _, g, m, b, w, v, k, y, x, B, A, E, C, R, O, N, Z, I, D, F, U, T, j = 0, H = new i.Buf8(4), L = [ 16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15 ];
if (!t || !t.state || !t.output || !t.input && 0 !== t.avail_in) return d;
12 === (n = t.state).mode && (n.mode = 13), m = t.next_out, _ = t.output, w = t.avail_out, 
g = t.next_in, c = t.input, b = t.avail_in, v = n.hold, k = n.bits, y = b, x = w, 
F = f;
t: for (;;) switch (n.mode) {
case u:
if (0 === n.wrap) {
n.mode = 13;
break;
}
for (;k < 16; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (2 & n.wrap && 35615 === v) {
H[n.check = 0] = 255 & v, H[1] = v >>> 8 & 255, n.check = r(n.check, H, 2, 0), k = v = 0, 
n.mode = 2;
break;
}
if (n.flags = 0, n.head && (n.head.done = !1), !(1 & n.wrap) || (((255 & v) << 8) + (v >> 8)) % 31) {
t.msg = "incorrect header check", n.mode = 30;
break;
}
if (8 != (15 & v)) {
t.msg = "unknown compression method", n.mode = 30;
break;
}
if (k -= 4, D = 8 + (15 & (v >>>= 4)), 0 === n.wbits) n.wbits = D; else if (D > n.wbits) {
t.msg = "invalid window size", n.mode = 30;
break;
}
n.dmax = 1 << D, t.adler = n.check = 1, n.mode = 512 & v ? 10 : 12, k = v = 0;
break;

case 2:
for (;k < 16; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (n.flags = v, 8 != (255 & n.flags)) {
t.msg = "unknown compression method", n.mode = 30;
break;
}
if (57344 & n.flags) {
t.msg = "unknown header flags set", n.mode = 30;
break;
}
n.head && (n.head.text = v >> 8 & 1), 512 & n.flags && (H[0] = 255 & v, H[1] = v >>> 8 & 255, 
n.check = r(n.check, H, 2, 0)), k = v = 0, n.mode = 3;

case 3:
for (;k < 32; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
n.head && (n.head.time = v), 512 & n.flags && (H[0] = 255 & v, H[1] = v >>> 8 & 255, 
H[2] = v >>> 16 & 255, H[3] = v >>> 24 & 255, n.check = r(n.check, H, 4, 0)), k = v = 0, 
n.mode = 4;

case 4:
for (;k < 16; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
n.head && (n.head.xflags = 255 & v, n.head.os = v >> 8), 512 & n.flags && (H[0] = 255 & v, 
H[1] = v >>> 8 & 255, n.check = r(n.check, H, 2, 0)), k = v = 0, n.mode = 5;

case 5:
if (1024 & n.flags) {
for (;k < 16; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
n.length = v, n.head && (n.head.extra_len = v), 512 & n.flags && (H[0] = 255 & v, 
H[1] = v >>> 8 & 255, n.check = r(n.check, H, 2, 0)), k = v = 0;
} else n.head && (n.head.extra = null);
n.mode = 6;

case 6:
if (1024 & n.flags && (b < (B = n.length) && (B = b), B && (n.head && (D = n.head.extra_len - n.length, 
n.head.extra || (n.head.extra = new Array(n.head.extra_len)), i.arraySet(n.head.extra, c, g, B, D)), 
512 & n.flags && (n.check = r(n.check, c, B, g)), b -= B, g += B, n.length -= B), 
n.length)) break t;
n.length = 0, n.mode = 7;

case 7:
if (2048 & n.flags) {
if (0 === b) break t;
for (B = 0; D = c[g + B++], n.head && D && n.length < 65536 && (n.head.name += String.fromCharCode(D)), 
D && B < b; ) ;
if (512 & n.flags && (n.check = r(n.check, c, B, g)), b -= B, g += B, D) break t;
} else n.head && (n.head.name = null);
n.length = 0, n.mode = 8;

case 8:
if (4096 & n.flags) {
if (0 === b) break t;
for (B = 0; D = c[g + B++], n.head && D && n.length < 65536 && (n.head.comment += String.fromCharCode(D)), 
D && B < b; ) ;
if (512 & n.flags && (n.check = r(n.check, c, B, g)), b -= B, g += B, D) break t;
} else n.head && (n.head.comment = null);
n.mode = 9;

case 9:
if (512 & n.flags) {
for (;k < 16; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (v !== (65535 & n.check)) {
t.msg = "header crc mismatch", n.mode = 30;
break;
}
k = v = 0;
}
n.head && (n.head.hcrc = n.flags >> 9 & 1, n.head.done = !0), t.adler = n.check = 0, 
n.mode = 12;
break;

case 10:
for (;k < 32; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
t.adler = n.check = p(v), k = v = 0, n.mode = 11;

case 11:
if (0 === n.havedict) return t.next_out = m, t.avail_out = w, t.next_in = g, t.avail_in = b, 
n.hold = v, n.bits = k, 2;
t.adler = n.check = 1, n.mode = 12;

case 12:
if (5 === e || 6 === e) break t;

case 13:
if (n.last) {
v >>>= 7 & k, k -= 7 & k, n.mode = 27;
break;
}
for (;k < 3; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
switch (n.last = 1 & v, k -= 1, 3 & (v >>>= 1)) {
case 0:
n.mode = 14;
break;

case 1:
if (z(n), n.mode = 20, 6 !== e) break;
v >>>= 2, k -= 2;
break t;

case 2:
n.mode = 17;
break;

case 3:
t.msg = "invalid block type", n.mode = 30;
}
v >>>= 2, k -= 2;
break;

case 14:
for (v >>>= 7 & k, k -= 7 & k; k < 32; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if ((65535 & v) != (v >>> 16 ^ 65535)) {
t.msg = "invalid stored block lengths", n.mode = 30;
break;
}
if (n.length = 65535 & v, k = v = 0, n.mode = 15, 6 === e) break t;

case 15:
n.mode = 16;

case 16:
if (B = n.length) {
if (b < B && (B = b), w < B && (B = w), 0 === B) break t;
i.arraySet(_, c, g, B, m), b -= B, g += B, w -= B, m += B, n.length -= B;
break;
}
n.mode = 12;
break;

case 17:
for (;k < 14; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (n.nlen = 257 + (31 & v), v >>>= 5, k -= 5, n.ndist = 1 + (31 & v), v >>>= 5, 
k -= 5, n.ncode = 4 + (15 & v), v >>>= 4, k -= 4, 286 < n.nlen || 30 < n.ndist) {
t.msg = "too many length or distance symbols", n.mode = 30;
break;
}
n.have = 0, n.mode = 18;

case 18:
for (;n.have < n.ncode; ) {
for (;k < 3; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
n.lens[L[n.have++]] = 7 & v, v >>>= 3, k -= 3;
}
for (;n.have < 19; ) n.lens[L[n.have++]] = 0;
if (n.lencode = n.lendyn, n.lenbits = 7, U = {
bits: n.lenbits
}, F = o(0, n.lens, 0, 19, n.lencode, 0, n.work, U), n.lenbits = U.bits, F) {
t.msg = "invalid code lengths set", n.mode = 30;
break;
}
n.have = 0, n.mode = 19;

case 19:
for (;n.have < n.nlen + n.ndist; ) {
for (;R = (j = n.lencode[v & (1 << n.lenbits) - 1]) >>> 16 & 255, O = 65535 & j, 
!((C = j >>> 24) <= k); ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (O < 16) v >>>= C, k -= C, n.lens[n.have++] = O; else {
if (16 === O) {
for (T = C + 2; k < T; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (v >>>= C, k -= C, 0 === n.have) {
t.msg = "invalid bit length repeat", n.mode = 30;
break;
}
D = n.lens[n.have - 1], B = 3 + (3 & v), v >>>= 2, k -= 2;
} else if (17 === O) {
for (T = C + 3; k < T; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
k -= C, D = 0, B = 3 + (7 & (v >>>= C)), v >>>= 3, k -= 3;
} else {
for (T = C + 7; k < T; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
k -= C, D = 0, B = 11 + (127 & (v >>>= C)), v >>>= 7, k -= 7;
}
if (n.have + B > n.nlen + n.ndist) {
t.msg = "invalid bit length repeat", n.mode = 30;
break;
}
for (;B--; ) n.lens[n.have++] = D;
}
}
if (30 === n.mode) break;
if (0 === n.lens[256]) {
t.msg = "invalid code -- missing end-of-block", n.mode = 30;
break;
}
if (n.lenbits = 9, U = {
bits: n.lenbits
}, F = o(l, n.lens, 0, n.nlen, n.lencode, 0, n.work, U), n.lenbits = U.bits, F) {
t.msg = "invalid literal/lengths set", n.mode = 30;
break;
}
if (n.distbits = 6, n.distcode = n.distdyn, U = {
bits: n.distbits
}, F = o(h, n.lens, n.nlen, n.ndist, n.distcode, 0, n.work, U), n.distbits = U.bits, 
F) {
t.msg = "invalid distances set", n.mode = 30;
break;
}
if (n.mode = 20, 6 === e) break t;

case 20:
n.mode = 21;

case 21:
if (6 <= b && 258 <= w) {
t.next_out = m, t.avail_out = w, t.next_in = g, t.avail_in = b, n.hold = v, n.bits = k, 
s(t, x), m = t.next_out, _ = t.output, w = t.avail_out, g = t.next_in, c = t.input, 
b = t.avail_in, v = n.hold, k = n.bits, 12 === n.mode && (n.back = -1);
break;
}
for (n.back = 0; R = (j = n.lencode[v & (1 << n.lenbits) - 1]) >>> 16 & 255, O = 65535 & j, 
!((C = j >>> 24) <= k); ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (R && 0 == (240 & R)) {
for (N = C, Z = R, I = O; R = (j = n.lencode[I + ((v & (1 << N + Z) - 1) >> N)]) >>> 16 & 255, 
O = 65535 & j, !(N + (C = j >>> 24) <= k); ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
v >>>= N, k -= N, n.back += N;
}
if (v >>>= C, k -= C, n.back += C, n.length = O, 0 === R) {
n.mode = 26;
break;
}
if (32 & R) {
n.back = -1, n.mode = 12;
break;
}
if (64 & R) {
t.msg = "invalid literal/length code", n.mode = 30;
break;
}
n.extra = 15 & R, n.mode = 22;

case 22:
if (n.extra) {
for (T = n.extra; k < T; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
n.length += v & (1 << n.extra) - 1, v >>>= n.extra, k -= n.extra, n.back += n.extra;
}
n.was = n.length, n.mode = 23;

case 23:
for (;R = (j = n.distcode[v & (1 << n.distbits) - 1]) >>> 16 & 255, O = 65535 & j, 
!((C = j >>> 24) <= k); ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (0 == (240 & R)) {
for (N = C, Z = R, I = O; R = (j = n.distcode[I + ((v & (1 << N + Z) - 1) >> N)]) >>> 16 & 255, 
O = 65535 & j, !(N + (C = j >>> 24) <= k); ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
v >>>= N, k -= N, n.back += N;
}
if (v >>>= C, k -= C, n.back += C, 64 & R) {
t.msg = "invalid distance code", n.mode = 30;
break;
}
n.offset = O, n.extra = 15 & R, n.mode = 24;

case 24:
if (n.extra) {
for (T = n.extra; k < T; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
n.offset += v & (1 << n.extra) - 1, v >>>= n.extra, k -= n.extra, n.back += n.extra;
}
if (n.offset > n.dmax) {
t.msg = "invalid distance too far back", n.mode = 30;
break;
}
n.mode = 25;

case 25:
if (0 === w) break t;
if (B = x - w, n.offset > B) {
if ((B = n.offset - B) > n.whave && n.sane) {
t.msg = "invalid distance too far back", n.mode = 30;
break;
}
B > n.wnext ? (B -= n.wnext, A = n.wsize - B) : A = n.wnext - B, B > n.length && (B = n.length), 
E = n.window;
} else E = _, A = m - n.offset, B = n.length;
for (w < B && (B = w), w -= B, n.length -= B; _[m++] = E[A++], --B; ) ;
0 === n.length && (n.mode = 21);
break;

case 26:
if (0 === w) break t;
_[m++] = n.length, w--, n.mode = 21;
break;

case 27:
if (n.wrap) {
for (;k < 32; ) {
if (0 === b) break t;
b--, v |= c[g++] << k, k += 8;
}
if (x -= w, t.total_out += x, n.total += x, x && (t.adler = n.check = n.flags ? r(n.check, _, x, m - x) : a(n.check, _, x, m - x)), 
x = w, (n.flags ? v : p(v)) !== n.check) {
t.msg = "incorrect data check", n.mode = 30;
break;
}
k = v = 0;
}
n.mode = 28;

case 28:
if (n.wrap && n.flags) {
for (;k < 32; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (v !== (4294967295 & n.total)) {
t.msg = "incorrect length check", n.mode = 30;
break;
}
k = v = 0;
}
n.mode = 29;

case 29:
F = 1;
break t;

case 30:
F = -3;
break t;

case 31:
return -4;

case 32:
default:
return d;
}
return t.next_out = m, t.avail_out = w, t.next_in = g, t.avail_in = b, n.hold = v, 
n.bits = k, (n.wsize || x !== t.avail_out && n.mode < 30 && (n.mode < 27 || 4 !== e)) && S(t, t.output, t.next_out, x - t.avail_out) ? (n.mode = 31, 
-4) : (y -= t.avail_in, x -= t.avail_out, t.total_in += y, t.total_out += x, n.total += x, 
n.wrap && x && (t.adler = n.check = n.flags ? r(n.check, _, x, t.next_out - x) : a(n.check, _, x, t.next_out - x)), 
t.data_type = n.bits + (n.last ? 64 : 0) + (12 === n.mode ? 128 : 0) + (20 === n.mode || 15 === n.mode ? 256 : 0), 
(0 === y && 0 === x || 4 === e) && F === f && (F = -5), F);
}, n.inflateEnd = function(t) {
if (!t || !t.state) return d;
var e = t.state;
return e.window && (e.window = null), t.state = null, f;
}, n.inflateGetHeader = function(t, e) {
var n;
return t && t.state ? 0 == (2 & (n = t.state).wrap) ? d : ((n.head = e).done = !1, 
f) : d;
}, n.inflateSetDictionary = function(t, e) {
var n, i = e.length;
return t && t.state ? 0 !== (n = t.state).wrap && 11 !== n.mode ? d : 11 === n.mode && a(1, e, i, 0) !== n.check ? -3 : S(t, e, i, i) ? (n.mode = 31, 
-4) : (n.havedict = 1, f) : d;
}, n.inflateInfo = "pako inflate (from Nodeca project)";
}, {
"../utils/common": 3,
"./adler32": 5,
"./crc32": 7,
"./inffast": 10,
"./inftrees": 12
} ],
12: [ function(t, e) {
var n = t("../utils/common"), i = [ 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31, 35, 43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258, 0, 0 ], a = [ 16, 16, 16, 16, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 16, 72, 78 ], r = [ 1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193, 257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145, 8193, 12289, 16385, 24577, 0, 0 ], s = [ 16, 16, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 64, 64 ];
e.exports = function(t, e, o, l, h, f, d, u) {
var c, _, p, g, m, b, w, v, k, y = u.bits, x = 0, z = 0, S = 0, B = 0, A = 0, E = 0, C = 0, R = 0, O = 0, N = 0, Z = null, I = 0, D = new n.Buf16(16), F = new n.Buf16(16), U = null, T = 0;
for (x = 0; x <= 15; x++) D[x] = 0;
for (z = 0; z < l; z++) D[e[o + z]]++;
for (A = y, B = 15; 1 <= B && 0 === D[B]; B--) ;
if (B < A && (A = B), 0 === B) return h[f++] = 20971520, h[f++] = 20971520, u.bits = 1, 
0;
for (S = 1; S < B && 0 === D[S]; S++) ;
for (A < S && (A = S), x = R = 1; x <= 15; x++) if (R <<= 1, (R -= D[x]) < 0) return -1;
if (0 < R && (0 === t || 1 !== B)) return -1;
for (F[1] = 0, x = 1; x < 15; x++) F[x + 1] = F[x] + D[x];
for (z = 0; z < l; z++) 0 !== e[o + z] && (d[F[e[o + z]]++] = z);
if (0 === t ? (Z = U = d, b = 19) : 1 === t ? (Z = i, I -= 257, U = a, T -= 257, 
b = 256) : (Z = r, U = s, b = -1), x = S, m = f, C = z = N = 0, p = -1, g = (O = 1 << (E = A)) - 1, 
1 === t && 852 < O || 2 === t && 592 < O) return 1;
for (;;) {
for (w = x - C, d[z] < b ? (v = 0, k = d[z]) : d[z] > b ? (v = U[T + d[z]], k = Z[I + d[z]]) : (v = 96, 
k = 0), c = 1 << x - C, S = _ = 1 << E; h[m + (N >> C) + (_ -= c)] = w << 24 | v << 16 | k | 0, 
0 !== _; ) ;
for (c = 1 << x - 1; N & c; ) c >>= 1;
if (0 !== c ? (N &= c - 1, N += c) : N = 0, z++, 0 == --D[x]) {
if (x === B) break;
x = e[o + d[z]];
}
if (A < x && (N & g) !== p) {
for (0 === C && (C = A), m += S, R = 1 << (E = x - C); E + C < B && !((R -= D[E + C]) <= 0); ) E++, 
R <<= 1;
if (O += 1 << E, 1 === t && 852 < O || 2 === t && 592 < O) return 1;
h[p = N & g] = A << 24 | E << 16 | m - f | 0;
}
}
return 0 !== N && (h[m + N] = x - C << 24 | 64 << 16 | 0), u.bits = A, 0;
};
}, {
"../utils/common": 3
} ],
13: [ function(t, e) {
e.exports = {
2: "need dictionary",
1: "stream end",
0: "",
"-1": "file error",
"-2": "stream error",
"-3": "data error",
"-4": "insufficient memory",
"-5": "buffer error",
"-6": "incompatible version"
};
}, {} ],
14: [ function(t, e, n) {
var i = t("../utils/common");
function a(t) {
for (var e = t.length; 0 <= --e; ) t[e] = 0;
}
var r = 0, s = 256, o = s + 1 + 29, l = 30, h = 19, f = 2 * o + 1, d = 15, u = 16, c = 256, _ = 16, p = 17, g = 18, m = [ 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0 ], b = [ 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13 ], w = [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 7 ], v = [ 16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15 ], k = new Array(2 * (o + 2));
a(k);
var y = new Array(2 * l);
a(y);
var x = new Array(512);
a(x);
var z = new Array(256);
a(z);
var S = new Array(29);
a(S);
var B, A, E, C = new Array(l);
function R(t, e, n, i, a) {
this.static_tree = t, this.extra_bits = e, this.extra_base = n, this.elems = i, 
this.max_length = a, this.has_stree = t && t.length;
}
function O(t, e) {
this.dyn_tree = t, this.max_code = 0, this.stat_desc = e;
}
function N(t) {
return t < 256 ? x[t] : x[256 + (t >>> 7)];
}
function Z(t, e) {
t.pending_buf[t.pending++] = 255 & e, t.pending_buf[t.pending++] = e >>> 8 & 255;
}
function I(t, e, n) {
t.bi_valid > u - n ? (t.bi_buf |= e << t.bi_valid & 65535, Z(t, t.bi_buf), t.bi_buf = e >> u - t.bi_valid, 
t.bi_valid += n - u) : (t.bi_buf |= e << t.bi_valid & 65535, t.bi_valid += n);
}
function D(t, e, n) {
I(t, n[2 * e], n[2 * e + 1]);
}
function F(t, e) {
for (var n = 0; n |= 1 & t, t >>>= 1, n <<= 1, 0 < --e; ) ;
return n >>> 1;
}
function U(t, e, n) {
var i, a, r = new Array(d + 1), s = 0;
for (i = 1; i <= d; i++) r[i] = s = s + n[i - 1] << 1;
for (a = 0; a <= e; a++) {
var o = t[2 * a + 1];
0 !== o && (t[2 * a] = F(r[o]++, o));
}
}
function T(t) {
var e;
for (e = 0; e < o; e++) t.dyn_ltree[2 * e] = 0;
for (e = 0; e < l; e++) t.dyn_dtree[2 * e] = 0;
for (e = 0; e < h; e++) t.bl_tree[2 * e] = 0;
t.dyn_ltree[2 * c] = 1, t.opt_len = t.static_len = 0, t.last_lit = t.matches = 0;
}
function j(t) {
8 < t.bi_valid ? Z(t, t.bi_buf) : 0 < t.bi_valid && (t.pending_buf[t.pending++] = t.bi_buf), 
t.bi_buf = 0, t.bi_valid = 0;
}
function H(t, e, n, i) {
var a = 2 * e, r = 2 * n;
return t[a] < t[r] || t[a] === t[r] && i[e] <= i[n];
}
function L(t, e, n) {
for (var i = t.heap[n], a = n << 1; a <= t.heap_len && (a < t.heap_len && H(e, t.heap[a + 1], t.heap[a], t.depth) && a++, 
!H(e, i, t.heap[a], t.depth)); ) t.heap[n] = t.heap[a], n = a, a <<= 1;
t.heap[n] = i;
}
function M(t, e, n) {
var i, a, r, o, l = 0;
if (0 !== t.last_lit) for (;i = t.pending_buf[t.d_buf + 2 * l] << 8 | t.pending_buf[t.d_buf + 2 * l + 1], 
a = t.pending_buf[t.l_buf + l], l++, 0 === i ? D(t, a, e) : (D(t, (r = z[a]) + s + 1, e), 
0 !== (o = m[r]) && I(t, a -= S[r], o), D(t, r = N(--i), n), 0 !== (o = b[r]) && I(t, i -= C[r], o)), 
l < t.last_lit; ) ;
D(t, c, e);
}
function P(t, e) {
var n, i, a, r = e.dyn_tree, s = e.stat_desc.static_tree, o = e.stat_desc.has_stree, l = e.stat_desc.elems, h = -1;
for (t.heap_len = 0, t.heap_max = f, n = 0; n < l; n++) 0 !== r[2 * n] ? (t.heap[++t.heap_len] = h = n, 
t.depth[n] = 0) : r[2 * n + 1] = 0;
for (;t.heap_len < 2; ) r[2 * (a = t.heap[++t.heap_len] = h < 2 ? ++h : 0)] = 1, 
t.depth[a] = 0, t.opt_len--, o && (t.static_len -= s[2 * a + 1]);
for (e.max_code = h, n = t.heap_len >> 1; 1 <= n; n--) L(t, r, n);
for (a = l; n = t.heap[1], t.heap[1] = t.heap[t.heap_len--], L(t, r, 1), i = t.heap[1], 
t.heap[--t.heap_max] = n, t.heap[--t.heap_max] = i, r[2 * a] = r[2 * n] + r[2 * i], 
t.depth[a] = (t.depth[n] >= t.depth[i] ? t.depth[n] : t.depth[i]) + 1, r[2 * n + 1] = r[2 * i + 1] = a, 
t.heap[1] = a++, L(t, r, 1), 2 <= t.heap_len; ) ;
t.heap[--t.heap_max] = t.heap[1], function(t, e) {
var n, i, a, r, s, o, l = e.dyn_tree, h = e.max_code, u = e.stat_desc.static_tree, c = e.stat_desc.has_stree, _ = e.stat_desc.extra_bits, p = e.stat_desc.extra_base, g = e.stat_desc.max_length, m = 0;
for (r = 0; r <= d; r++) t.bl_count[r] = 0;
for (l[2 * t.heap[t.heap_max] + 1] = 0, n = t.heap_max + 1; n < f; n++) g < (r = l[2 * l[2 * (i = t.heap[n]) + 1] + 1] + 1) && (r = g, 
m++), l[2 * i + 1] = r, h < i || (t.bl_count[r]++, s = 0, p <= i && (s = _[i - p]), 
o = l[2 * i], t.opt_len += o * (r + s), c && (t.static_len += o * (u[2 * i + 1] + s)));
if (0 !== m) {
do {
for (r = g - 1; 0 === t.bl_count[r]; ) r--;
t.bl_count[r]--, t.bl_count[r + 1] += 2, t.bl_count[g]--, m -= 2;
} while (0 < m);
for (r = g; 0 !== r; r--) for (i = t.bl_count[r]; 0 !== i; ) h < (a = t.heap[--n]) || (l[2 * a + 1] !== r && (t.opt_len += (r - l[2 * a + 1]) * l[2 * a], 
l[2 * a + 1] = r), i--);
}
}(t, e), U(r, h, t.bl_count);
}
function K(t, e, n) {
var i, a, r = -1, s = e[1], o = 0, l = 7, h = 4;
for (0 === s && (l = 138, h = 3), e[2 * (n + 1) + 1] = 65535, i = 0; i <= n; i++) a = s, 
s = e[2 * (i + 1) + 1], ++o < l && a === s || (o < h ? t.bl_tree[2 * a] += o : 0 !== a ? (a !== r && t.bl_tree[2 * a]++, 
t.bl_tree[2 * _]++) : o <= 10 ? t.bl_tree[2 * p]++ : t.bl_tree[2 * g]++, r = a, 
(o = 0) === s ? (l = 138, h = 3) : a === s ? (l = 6, h = 3) : (l = 7, h = 4));
}
function W(t, e, n) {
var i, a, r = -1, s = e[1], o = 0, l = 7, h = 4;
for (0 === s && (l = 138, h = 3), i = 0; i <= n; i++) if (a = s, s = e[2 * (i + 1) + 1], 
!(++o < l && a === s)) {
if (o < h) for (;D(t, a, t.bl_tree), 0 != --o; ) ; else 0 !== a ? (a !== r && (D(t, a, t.bl_tree), 
o--), D(t, _, t.bl_tree), I(t, o - 3, 2)) : o <= 10 ? (D(t, p, t.bl_tree), I(t, o - 3, 3)) : (D(t, g, t.bl_tree), 
I(t, o - 11, 7));
r = a, (o = 0) === s ? (l = 138, h = 3) : a === s ? (l = 6, h = 3) : (l = 7, h = 4);
}
}
a(C);
var V = !1;
function q(t, e, n, a) {
var s, o, l;
I(t, (r << 1) + (a ? 1 : 0), 3), o = e, l = n, j(s = t), Z(s, l), Z(s, ~l), i.arraySet(s.pending_buf, s.window, o, l, s.pending), 
s.pending += l;
}
n._tr_init = function(t) {
V || (function() {
var t, e, n, i, a, r = new Array(d + 1);
for (i = n = 0; i < 28; i++) for (S[i] = n, t = 0; t < 1 << m[i]; t++) z[n++] = i;
for (z[n - 1] = i, i = a = 0; i < 16; i++) for (C[i] = a, t = 0; t < 1 << b[i]; t++) x[a++] = i;
for (a >>= 7; i < l; i++) for (C[i] = a << 7, t = 0; t < 1 << b[i] - 7; t++) x[256 + a++] = i;
for (e = 0; e <= d; e++) r[e] = 0;
for (t = 0; t <= 143; ) k[2 * t + 1] = 8, t++, r[8]++;
for (;t <= 255; ) k[2 * t + 1] = 9, t++, r[9]++;
for (;t <= 279; ) k[2 * t + 1] = 7, t++, r[7]++;
for (;t <= 287; ) k[2 * t + 1] = 8, t++, r[8]++;
for (U(k, o + 1, r), t = 0; t < l; t++) y[2 * t + 1] = 5, y[2 * t] = F(t, 5);
B = new R(k, m, s + 1, o, d), A = new R(y, b, 0, l, d), E = new R(new Array(0), w, 0, h, 7);
}(), V = !0), t.l_desc = new O(t.dyn_ltree, B), t.d_desc = new O(t.dyn_dtree, A), 
t.bl_desc = new O(t.bl_tree, E), t.bi_buf = 0, t.bi_valid = 0, T(t);
}, n._tr_stored_block = q, n._tr_flush_block = function(t, e, n, i) {
var a, r, o = 0;
0 < t.level ? (2 === t.strm.data_type && (t.strm.data_type = function(t) {
var e, n = 4093624447;
for (e = 0; e <= 31; e++, n >>>= 1) if (1 & n && 0 !== t.dyn_ltree[2 * e]) return 0;
if (0 !== t.dyn_ltree[18] || 0 !== t.dyn_ltree[20] || 0 !== t.dyn_ltree[26]) return 1;
for (e = 32; e < s; e++) if (0 !== t.dyn_ltree[2 * e]) return 1;
return 0;
}(t)), P(t, t.l_desc), P(t, t.d_desc), o = function(t) {
var e;
for (K(t, t.dyn_ltree, t.l_desc.max_code), K(t, t.dyn_dtree, t.d_desc.max_code), 
P(t, t.bl_desc), e = h - 1; 3 <= e && 0 === t.bl_tree[2 * v[e] + 1]; e--) ;
return t.opt_len += 14 + 3 * (e + 1), e;
}(t), a = t.opt_len + 3 + 7 >>> 3, (r = t.static_len + 3 + 7 >>> 3) <= a && (a = r)) : a = r = n + 5, 
n + 4 <= a && -1 !== e ? q(t, e, n, i) : 4 === t.strategy || r === a ? (I(t, 2 + (i ? 1 : 0), 3), 
M(t, k, y)) : (I(t, 4 + (i ? 1 : 0), 3), function(t, e, n, i) {
var a;
for (I(t, e - 257, 5), I(t, n - 1, 5), I(t, i - 4, 4), a = 0; a < i; a++) I(t, t.bl_tree[2 * v[a] + 1], 3);
W(t, t.dyn_ltree, e - 1), W(t, t.dyn_dtree, n - 1);
}(t, t.l_desc.max_code + 1, t.d_desc.max_code + 1, o + 1), M(t, t.dyn_ltree, t.dyn_dtree)), 
T(t), i && j(t);
}, n._tr_tally = function(t, e, n) {
return t.pending_buf[t.d_buf + 2 * t.last_lit] = e >>> 8 & 255, t.pending_buf[t.d_buf + 2 * t.last_lit + 1] = 255 & e, 
t.pending_buf[t.l_buf + t.last_lit] = 255 & n, t.last_lit++, 0 === e ? t.dyn_ltree[2 * n]++ : (t.matches++, 
e--, t.dyn_ltree[2 * (z[n] + s + 1)]++, t.dyn_dtree[2 * N(e)]++), t.last_lit === t.lit_bufsize - 1;
}, n._tr_align = function(t) {
var e;
I(t, 2, 3), D(t, c, k), 16 === (e = t).bi_valid ? (Z(e, e.bi_buf), e.bi_buf = 0, 
e.bi_valid = 0) : 8 <= e.bi_valid && (e.pending_buf[e.pending++] = 255 & e.bi_buf, 
e.bi_buf >>= 8, e.bi_valid -= 8);
};
}, {
"../utils/common": 3
} ],
15: [ function(t, e) {
e.exports = function() {
this.input = null, this.next_in = 0, this.avail_in = 0, this.total_in = 0, this.output = null, 
this.next_out = 0, this.avail_out = 0, this.total_out = 0, this.msg = "", this.state = null, 
this.data_type = 2, this.adler = 0;
};
}, {} ],
"/": [ function(t, e) {
var n = {};
(0, t("./lib/utils/common").assign)(n, t("./lib/deflate"), t("./lib/inflate"), t("./lib/zlib/constants")), 
e.exports = n;
}, {
"./lib/deflate": 1,
"./lib/inflate": 2,
"./lib/utils/common": 3,
"./lib/zlib/constants": 6
} ]
}, {}, [])("/");
});
cc._RF.pop();
}).call(this, "undefined" != typeof global ? global : "undefined" != typeof self ? self : "undefined" != typeof window ? window : {});
}, {} ],
"pako_deflate.min": [ function(t, e, n) {
(function(i) {
"use strict";
cc._RF.push(e, "4ec96aRpv1Dp4IPjztNy4ol", "pako_deflate.min");
!function(t) {
"object" == typeof n && "undefined" != typeof e ? e.exports = t() : "function" == typeof define && define.amd ? define([], t) : ("undefined" != typeof window ? window : "undefined" != typeof i ? i : "undefined" != typeof self ? self : this).pako = t();
}(function() {
return function e(n, i, a) {
function r(o, l) {
if (!i[o]) {
if (!n[o]) {
var h = "function" == typeof t && t;
if (!l && h) return h(o, !0);
if (s) return s(o, !0);
var f = new Error("Cannot find module '" + o + "'");
throw f.code = "MODULE_NOT_FOUND", f;
}
var d = i[o] = {
exports: {}
};
n[o][0].call(d.exports, function(t) {
return r(n[o][1][t] || t);
}, d, d.exports, e, n, i, a);
}
return i[o].exports;
}
for (var s = "function" == typeof t && t, o = 0; o < a.length; o++) r(a[o]);
return r;
}({
1: [ function(t, e, n) {
var i = "undefined" != typeof Uint8Array && "undefined" != typeof Uint16Array && "undefined" != typeof Int32Array;
n.assign = function(t) {
for (var e, n, i = Array.prototype.slice.call(arguments, 1); i.length; ) {
var a = i.shift();
if (a) {
if ("object" != typeof a) throw new TypeError(a + "must be non-object");
for (var r in a) e = a, n = r, Object.prototype.hasOwnProperty.call(e, n) && (t[r] = a[r]);
}
}
return t;
}, n.shrinkBuf = function(t, e) {
return t.length === e ? t : t.subarray ? t.subarray(0, e) : (t.length = e, t);
};
var a = {
arraySet: function(t, e, n, i, a) {
if (e.subarray && t.subarray) t.set(e.subarray(n, n + i), a); else for (var r = 0; r < i; r++) t[a + r] = e[n + r];
},
flattenChunks: function(t) {
var e, n, i, a, r, s;
for (e = i = 0, n = t.length; e < n; e++) i += t[e].length;
for (s = new Uint8Array(i), e = a = 0, n = t.length; e < n; e++) r = t[e], s.set(r, a), 
a += r.length;
return s;
}
}, r = {
arraySet: function(t, e, n, i, a) {
for (var r = 0; r < i; r++) t[a + r] = e[n + r];
},
flattenChunks: function(t) {
return [].concat.apply([], t);
}
};
n.setTyped = function(t) {
t ? (n.Buf8 = Uint8Array, n.Buf16 = Uint16Array, n.Buf32 = Int32Array, n.assign(n, a)) : (n.Buf8 = Array, 
n.Buf16 = Array, n.Buf32 = Array, n.assign(n, r));
}, n.setTyped(i);
}, {} ],
2: [ function(t, e, n) {
var i = t("./common"), a = !0, r = !0;
try {
String.fromCharCode.apply(null, [ 0 ]);
} catch (t) {
a = !1;
}
try {
String.fromCharCode.apply(null, new Uint8Array(1));
} catch (t) {
r = !1;
}
for (var s = new i.Buf8(256), o = 0; o < 256; o++) s[o] = 252 <= o ? 6 : 248 <= o ? 5 : 240 <= o ? 4 : 224 <= o ? 3 : 192 <= o ? 2 : 1;
function l(t, e) {
if (e < 65534 && (t.subarray && r || !t.subarray && a)) return String.fromCharCode.apply(null, i.shrinkBuf(t, e));
for (var n = "", s = 0; s < e; s++) n += String.fromCharCode(t[s]);
return n;
}
s[254] = s[254] = 1, n.string2buf = function(t) {
var e, n, a, r, s, o = t.length, l = 0;
for (r = 0; r < o; r++) 55296 == (64512 & (n = t.charCodeAt(r))) && r + 1 < o && 56320 == (64512 & (a = t.charCodeAt(r + 1))) && (n = 65536 + (n - 55296 << 10) + (a - 56320), 
r++), l += n < 128 ? 1 : n < 2048 ? 2 : n < 65536 ? 3 : 4;
for (e = new i.Buf8(l), r = s = 0; s < l; r++) 55296 == (64512 & (n = t.charCodeAt(r))) && r + 1 < o && 56320 == (64512 & (a = t.charCodeAt(r + 1))) && (n = 65536 + (n - 55296 << 10) + (a - 56320), 
r++), n < 128 ? e[s++] = n : (n < 2048 ? e[s++] = 192 | n >>> 6 : (n < 65536 ? e[s++] = 224 | n >>> 12 : (e[s++] = 240 | n >>> 18, 
e[s++] = 128 | n >>> 12 & 63), e[s++] = 128 | n >>> 6 & 63), e[s++] = 128 | 63 & n);
return e;
}, n.buf2binstring = function(t) {
return l(t, t.length);
}, n.binstring2buf = function(t) {
for (var e = new i.Buf8(t.length), n = 0, a = e.length; n < a; n++) e[n] = t.charCodeAt(n);
return e;
}, n.buf2string = function(t, e) {
var n, i, a, r, o = e || t.length, h = new Array(2 * o);
for (n = i = 0; n < o; ) if ((a = t[n++]) < 128) h[i++] = a; else if (4 < (r = s[a])) h[i++] = 65533, 
n += r - 1; else {
for (a &= 2 === r ? 31 : 3 === r ? 15 : 7; 1 < r && n < o; ) a = a << 6 | 63 & t[n++], 
r--;
1 < r ? h[i++] = 65533 : a < 65536 ? h[i++] = a : (a -= 65536, h[i++] = 55296 | a >> 10 & 1023, 
h[i++] = 56320 | 1023 & a);
}
return l(h, i);
}, n.utf8border = function(t, e) {
var n;
for ((e = e || t.length) > t.length && (e = t.length), n = e - 1; 0 <= n && 128 == (192 & t[n]); ) n--;
return n < 0 ? e : 0 === n ? e : n + s[t[n]] > e ? n : e;
};
}, {
"./common": 1
} ],
3: [ function(t, e) {
e.exports = function(t, e, n, i) {
for (var a = 65535 & t | 0, r = t >>> 16 & 65535 | 0, s = 0; 0 !== n; ) {
for (n -= s = 2e3 < n ? 2e3 : n; r = r + (a = a + e[i++] | 0) | 0, --s; ) ;
a %= 65521, r %= 65521;
}
return a | r << 16 | 0;
};
}, {} ],
4: [ function(t, e) {
var n = function() {
for (var t, e = [], n = 0; n < 256; n++) {
t = n;
for (var i = 0; i < 8; i++) t = 1 & t ? 3988292384 ^ t >>> 1 : t >>> 1;
e[n] = t;
}
return e;
}();
e.exports = function(t, e, i, a) {
var r = n, s = a + i;
t ^= -1;
for (var o = a; o < s; o++) t = t >>> 8 ^ r[255 & (t ^ e[o])];
return -1 ^ t;
};
}, {} ],
5: [ function(t, e, n) {
var i, a = t("../utils/common"), r = t("./trees"), s = t("./adler32"), o = t("./crc32"), l = t("./messages"), h = 0, f = 4, d = 0, u = -2, c = -1, _ = 4, p = 2, g = 8, m = 9, b = 286, w = 30, v = 19, k = 2 * b + 1, y = 15, x = 3, z = 258, S = z + x + 1, B = 42, A = 113, E = 1, C = 2, R = 3, O = 4;
function N(t, e) {
return t.msg = l[e], e;
}
function Z(t) {
return (t << 1) - (4 < t ? 9 : 0);
}
function I(t) {
for (var e = t.length; 0 <= --e; ) t[e] = 0;
}
function D(t) {
var e = t.state, n = e.pending;
n > t.avail_out && (n = t.avail_out), 0 !== n && (a.arraySet(t.output, e.pending_buf, e.pending_out, n, t.next_out), 
t.next_out += n, e.pending_out += n, t.total_out += n, t.avail_out -= n, e.pending -= n, 
0 === e.pending && (e.pending_out = 0));
}
function F(t, e) {
r._tr_flush_block(t, 0 <= t.block_start ? t.block_start : -1, t.strstart - t.block_start, e), 
t.block_start = t.strstart, D(t.strm);
}
function U(t, e) {
t.pending_buf[t.pending++] = e;
}
function T(t, e) {
t.pending_buf[t.pending++] = e >>> 8 & 255, t.pending_buf[t.pending++] = 255 & e;
}
function j(t, e) {
var n, i, a = t.max_chain_length, r = t.strstart, s = t.prev_length, o = t.nice_match, l = t.strstart > t.w_size - S ? t.strstart - (t.w_size - S) : 0, h = t.window, f = t.w_mask, d = t.prev, u = t.strstart + z, c = h[r + s - 1], _ = h[r + s];
t.prev_length >= t.good_match && (a >>= 2), o > t.lookahead && (o = t.lookahead);
do {
if (h[(n = e) + s] === _ && h[n + s - 1] === c && h[n] === h[r] && h[++n] === h[r + 1]) {
r += 2, n++;
do {} while (h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && r < u);
if (i = z - (u - r), r = u - z, s < i) {
if (t.match_start = e, o <= (s = i)) break;
c = h[r + s - 1], _ = h[r + s];
}
}
} while ((e = d[e & f]) > l && 0 != --a);
return s <= t.lookahead ? s : t.lookahead;
}
function H(t) {
var e, n, i, r, l, h, f, d, u, c, _ = t.w_size;
do {
if (r = t.window_size - t.lookahead - t.strstart, t.strstart >= _ + (_ - S)) {
for (a.arraySet(t.window, t.window, _, _, 0), t.match_start -= _, t.strstart -= _, 
t.block_start -= _, e = n = t.hash_size; i = t.head[--e], t.head[e] = _ <= i ? i - _ : 0, 
--n; ) ;
for (e = n = _; i = t.prev[--e], t.prev[e] = _ <= i ? i - _ : 0, --n; ) ;
r += _;
}
if (0 === t.strm.avail_in) break;
if (h = t.strm, f = t.window, d = t.strstart + t.lookahead, c = void 0, (u = r) < (c = h.avail_in) && (c = u), 
n = 0 === c ? 0 : (h.avail_in -= c, a.arraySet(f, h.input, h.next_in, c, d), 1 === h.state.wrap ? h.adler = s(h.adler, f, c, d) : 2 === h.state.wrap && (h.adler = o(h.adler, f, c, d)), 
h.next_in += c, h.total_in += c, c), t.lookahead += n, t.lookahead + t.insert >= x) for (l = t.strstart - t.insert, 
t.ins_h = t.window[l], t.ins_h = (t.ins_h << t.hash_shift ^ t.window[l + 1]) & t.hash_mask; t.insert && (t.ins_h = (t.ins_h << t.hash_shift ^ t.window[l + x - 1]) & t.hash_mask, 
t.prev[l & t.w_mask] = t.head[t.ins_h], t.head[t.ins_h] = l, l++, t.insert--, !(t.lookahead + t.insert < x)); ) ;
} while (t.lookahead < S && 0 !== t.strm.avail_in);
}
function L(t, e) {
for (var n, i; ;) {
if (t.lookahead < S) {
if (H(t), t.lookahead < S && e === h) return E;
if (0 === t.lookahead) break;
}
if (n = 0, t.lookahead >= x && (t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + x - 1]) & t.hash_mask, 
n = t.prev[t.strstart & t.w_mask] = t.head[t.ins_h], t.head[t.ins_h] = t.strstart), 
0 !== n && t.strstart - n <= t.w_size - S && (t.match_length = j(t, n)), t.match_length >= x) if (i = r._tr_tally(t, t.strstart - t.match_start, t.match_length - x), 
t.lookahead -= t.match_length, t.match_length <= t.max_lazy_match && t.lookahead >= x) {
for (t.match_length--; t.strstart++, t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + x - 1]) & t.hash_mask, 
n = t.prev[t.strstart & t.w_mask] = t.head[t.ins_h], t.head[t.ins_h] = t.strstart, 
0 != --t.match_length; ) ;
t.strstart++;
} else t.strstart += t.match_length, t.match_length = 0, t.ins_h = t.window[t.strstart], 
t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + 1]) & t.hash_mask; else i = r._tr_tally(t, 0, t.window[t.strstart]), 
t.lookahead--, t.strstart++;
if (i && (F(t, !1), 0 === t.strm.avail_out)) return E;
}
return t.insert = t.strstart < x - 1 ? t.strstart : x - 1, e === f ? (F(t, !0), 
0 === t.strm.avail_out ? R : O) : t.last_lit && (F(t, !1), 0 === t.strm.avail_out) ? E : C;
}
function M(t, e) {
for (var n, i, a; ;) {
if (t.lookahead < S) {
if (H(t), t.lookahead < S && e === h) return E;
if (0 === t.lookahead) break;
}
if (n = 0, t.lookahead >= x && (t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + x - 1]) & t.hash_mask, 
n = t.prev[t.strstart & t.w_mask] = t.head[t.ins_h], t.head[t.ins_h] = t.strstart), 
t.prev_length = t.match_length, t.prev_match = t.match_start, t.match_length = x - 1, 
0 !== n && t.prev_length < t.max_lazy_match && t.strstart - n <= t.w_size - S && (t.match_length = j(t, n), 
t.match_length <= 5 && (1 === t.strategy || t.match_length === x && 4096 < t.strstart - t.match_start) && (t.match_length = x - 1)), 
t.prev_length >= x && t.match_length <= t.prev_length) {
for (a = t.strstart + t.lookahead - x, i = r._tr_tally(t, t.strstart - 1 - t.prev_match, t.prev_length - x), 
t.lookahead -= t.prev_length - 1, t.prev_length -= 2; ++t.strstart <= a && (t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + x - 1]) & t.hash_mask, 
n = t.prev[t.strstart & t.w_mask] = t.head[t.ins_h], t.head[t.ins_h] = t.strstart), 
0 != --t.prev_length; ) ;
if (t.match_available = 0, t.match_length = x - 1, t.strstart++, i && (F(t, !1), 
0 === t.strm.avail_out)) return E;
} else if (t.match_available) {
if ((i = r._tr_tally(t, 0, t.window[t.strstart - 1])) && F(t, !1), t.strstart++, 
t.lookahead--, 0 === t.strm.avail_out) return E;
} else t.match_available = 1, t.strstart++, t.lookahead--;
}
return t.match_available && (i = r._tr_tally(t, 0, t.window[t.strstart - 1]), t.match_available = 0), 
t.insert = t.strstart < x - 1 ? t.strstart : x - 1, e === f ? (F(t, !0), 0 === t.strm.avail_out ? R : O) : t.last_lit && (F(t, !1), 
0 === t.strm.avail_out) ? E : C;
}
function P(t, e, n, i, a) {
this.good_length = t, this.max_lazy = e, this.nice_length = n, this.max_chain = i, 
this.func = a;
}
function K() {
this.strm = null, this.status = 0, this.pending_buf = null, this.pending_buf_size = 0, 
this.pending_out = 0, this.pending = 0, this.wrap = 0, this.gzhead = null, this.gzindex = 0, 
this.method = g, this.last_flush = -1, this.w_size = 0, this.w_bits = 0, this.w_mask = 0, 
this.window = null, this.window_size = 0, this.prev = null, this.head = null, this.ins_h = 0, 
this.hash_size = 0, this.hash_bits = 0, this.hash_mask = 0, this.hash_shift = 0, 
this.block_start = 0, this.match_length = 0, this.prev_match = 0, this.match_available = 0, 
this.strstart = 0, this.match_start = 0, this.lookahead = 0, this.prev_length = 0, 
this.max_chain_length = 0, this.max_lazy_match = 0, this.level = 0, this.strategy = 0, 
this.good_match = 0, this.nice_match = 0, this.dyn_ltree = new a.Buf16(2 * k), this.dyn_dtree = new a.Buf16(2 * (2 * w + 1)), 
this.bl_tree = new a.Buf16(2 * (2 * v + 1)), I(this.dyn_ltree), I(this.dyn_dtree), 
I(this.bl_tree), this.l_desc = null, this.d_desc = null, this.bl_desc = null, this.bl_count = new a.Buf16(y + 1), 
this.heap = new a.Buf16(2 * b + 1), I(this.heap), this.heap_len = 0, this.heap_max = 0, 
this.depth = new a.Buf16(2 * b + 1), I(this.depth), this.l_buf = 0, this.lit_bufsize = 0, 
this.last_lit = 0, this.d_buf = 0, this.opt_len = 0, this.static_len = 0, this.matches = 0, 
this.insert = 0, this.bi_buf = 0, this.bi_valid = 0;
}
function W(t) {
var e;
return t && t.state ? (t.total_in = t.total_out = 0, t.data_type = p, (e = t.state).pending = 0, 
e.pending_out = 0, e.wrap < 0 && (e.wrap = -e.wrap), e.status = e.wrap ? B : A, 
t.adler = 2 === e.wrap ? 0 : 1, e.last_flush = h, r._tr_init(e), d) : N(t, u);
}
function V(t) {
var e, n = W(t);
return n === d && ((e = t.state).window_size = 2 * e.w_size, I(e.head), e.max_lazy_match = i[e.level].max_lazy, 
e.good_match = i[e.level].good_length, e.nice_match = i[e.level].nice_length, e.max_chain_length = i[e.level].max_chain, 
e.strstart = 0, e.block_start = 0, e.lookahead = 0, e.insert = 0, e.match_length = e.prev_length = x - 1, 
e.match_available = 0, e.ins_h = 0), n;
}
function q(t, e, n, i, r, s) {
if (!t) return u;
var o = 1;
if (e === c && (e = 6), i < 0 ? (o = 0, i = -i) : 15 < i && (o = 2, i -= 16), r < 1 || m < r || n !== g || i < 8 || 15 < i || e < 0 || 9 < e || s < 0 || _ < s) return N(t, u);
8 === i && (i = 9);
var l = new K();
return (t.state = l).strm = t, l.wrap = o, l.gzhead = null, l.w_bits = i, l.w_size = 1 << l.w_bits, 
l.w_mask = l.w_size - 1, l.hash_bits = r + 7, l.hash_size = 1 << l.hash_bits, l.hash_mask = l.hash_size - 1, 
l.hash_shift = ~~((l.hash_bits + x - 1) / x), l.window = new a.Buf8(2 * l.w_size), 
l.head = new a.Buf16(l.hash_size), l.prev = new a.Buf16(l.w_size), l.lit_bufsize = 1 << r + 6, 
l.pending_buf_size = 4 * l.lit_bufsize, l.pending_buf = new a.Buf8(l.pending_buf_size), 
l.d_buf = 1 * l.lit_bufsize, l.l_buf = 3 * l.lit_bufsize, l.level = e, l.strategy = s, 
l.method = n, V(t);
}
i = [ new P(0, 0, 0, 0, function(t, e) {
var n = 65535;
for (n > t.pending_buf_size - 5 && (n = t.pending_buf_size - 5); ;) {
if (t.lookahead <= 1) {
if (H(t), 0 === t.lookahead && e === h) return E;
if (0 === t.lookahead) break;
}
t.strstart += t.lookahead, t.lookahead = 0;
var i = t.block_start + n;
if ((0 === t.strstart || t.strstart >= i) && (t.lookahead = t.strstart - i, t.strstart = i, 
F(t, !1), 0 === t.strm.avail_out)) return E;
if (t.strstart - t.block_start >= t.w_size - S && (F(t, !1), 0 === t.strm.avail_out)) return E;
}
return t.insert = 0, e === f ? (F(t, !0), 0 === t.strm.avail_out ? R : O) : (t.strstart > t.block_start && (F(t, !1), 
t.strm.avail_out), E);
}), new P(4, 4, 8, 4, L), new P(4, 5, 16, 8, L), new P(4, 6, 32, 32, L), new P(4, 4, 16, 16, M), new P(8, 16, 32, 32, M), new P(8, 16, 128, 128, M), new P(8, 32, 128, 256, M), new P(32, 128, 258, 1024, M), new P(32, 258, 258, 4096, M) ], 
n.deflateInit = function(t, e) {
return q(t, e, g, 15, 8, 0);
}, n.deflateInit2 = q, n.deflateReset = V, n.deflateResetKeep = W, n.deflateSetHeader = function(t, e) {
return t && t.state ? 2 !== t.state.wrap ? u : (t.state.gzhead = e, d) : u;
}, n.deflate = function(t, e) {
var n, a, s, l;
if (!t || !t.state || 5 < e || e < 0) return t ? N(t, u) : u;
if (a = t.state, !t.output || !t.input && 0 !== t.avail_in || 666 === a.status && e !== f) return N(t, 0 === t.avail_out ? -5 : u);
if (a.strm = t, n = a.last_flush, a.last_flush = e, a.status === B) if (2 === a.wrap) t.adler = 0, 
U(a, 31), U(a, 139), U(a, 8), a.gzhead ? (U(a, (a.gzhead.text ? 1 : 0) + (a.gzhead.hcrc ? 2 : 0) + (a.gzhead.extra ? 4 : 0) + (a.gzhead.name ? 8 : 0) + (a.gzhead.comment ? 16 : 0)), 
U(a, 255 & a.gzhead.time), U(a, a.gzhead.time >> 8 & 255), U(a, a.gzhead.time >> 16 & 255), 
U(a, a.gzhead.time >> 24 & 255), U(a, 9 === a.level ? 2 : 2 <= a.strategy || a.level < 2 ? 4 : 0), 
U(a, 255 & a.gzhead.os), a.gzhead.extra && a.gzhead.extra.length && (U(a, 255 & a.gzhead.extra.length), 
U(a, a.gzhead.extra.length >> 8 & 255)), a.gzhead.hcrc && (t.adler = o(t.adler, a.pending_buf, a.pending, 0)), 
a.gzindex = 0, a.status = 69) : (U(a, 0), U(a, 0), U(a, 0), U(a, 0), U(a, 0), U(a, 9 === a.level ? 2 : 2 <= a.strategy || a.level < 2 ? 4 : 0), 
U(a, 3), a.status = A); else {
var c = g + (a.w_bits - 8 << 4) << 8;
c |= (2 <= a.strategy || a.level < 2 ? 0 : a.level < 6 ? 1 : 6 === a.level ? 2 : 3) << 6, 
0 !== a.strstart && (c |= 32), c += 31 - c % 31, a.status = A, T(a, c), 0 !== a.strstart && (T(a, t.adler >>> 16), 
T(a, 65535 & t.adler)), t.adler = 1;
}
if (69 === a.status) if (a.gzhead.extra) {
for (s = a.pending; a.gzindex < (65535 & a.gzhead.extra.length) && (a.pending !== a.pending_buf_size || (a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s)), 
D(t), s = a.pending, a.pending !== a.pending_buf_size)); ) U(a, 255 & a.gzhead.extra[a.gzindex]), 
a.gzindex++;
a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s)), 
a.gzindex === a.gzhead.extra.length && (a.gzindex = 0, a.status = 73);
} else a.status = 73;
if (73 === a.status) if (a.gzhead.name) {
s = a.pending;
do {
if (a.pending === a.pending_buf_size && (a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s)), 
D(t), s = a.pending, a.pending === a.pending_buf_size)) {
l = 1;
break;
}
U(a, l = a.gzindex < a.gzhead.name.length ? 255 & a.gzhead.name.charCodeAt(a.gzindex++) : 0);
} while (0 !== l);
a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s)), 
0 === l && (a.gzindex = 0, a.status = 91);
} else a.status = 91;
if (91 === a.status) if (a.gzhead.comment) {
s = a.pending;
do {
if (a.pending === a.pending_buf_size && (a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s)), 
D(t), s = a.pending, a.pending === a.pending_buf_size)) {
l = 1;
break;
}
U(a, l = a.gzindex < a.gzhead.comment.length ? 255 & a.gzhead.comment.charCodeAt(a.gzindex++) : 0);
} while (0 !== l);
a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s)), 
0 === l && (a.status = 103);
} else a.status = 103;
if (103 === a.status && (a.gzhead.hcrc ? (a.pending + 2 > a.pending_buf_size && D(t), 
a.pending + 2 <= a.pending_buf_size && (U(a, 255 & t.adler), U(a, t.adler >> 8 & 255), 
t.adler = 0, a.status = A)) : a.status = A), 0 !== a.pending) {
if (D(t), 0 === t.avail_out) return a.last_flush = -1, d;
} else if (0 === t.avail_in && Z(e) <= Z(n) && e !== f) return N(t, -5);
if (666 === a.status && 0 !== t.avail_in) return N(t, -5);
if (0 !== t.avail_in || 0 !== a.lookahead || e !== h && 666 !== a.status) {
var _ = 2 === a.strategy ? function(t, e) {
for (var n; ;) {
if (0 === t.lookahead && (H(t), 0 === t.lookahead)) {
if (e === h) return E;
break;
}
if (t.match_length = 0, n = r._tr_tally(t, 0, t.window[t.strstart]), t.lookahead--, 
t.strstart++, n && (F(t, !1), 0 === t.strm.avail_out)) return E;
}
return t.insert = 0, e === f ? (F(t, !0), 0 === t.strm.avail_out ? R : O) : t.last_lit && (F(t, !1), 
0 === t.strm.avail_out) ? E : C;
}(a, e) : 3 === a.strategy ? function(t, e) {
for (var n, i, a, s, o = t.window; ;) {
if (t.lookahead <= z) {
if (H(t), t.lookahead <= z && e === h) return E;
if (0 === t.lookahead) break;
}
if (t.match_length = 0, t.lookahead >= x && 0 < t.strstart && (i = o[a = t.strstart - 1]) === o[++a] && i === o[++a] && i === o[++a]) {
s = t.strstart + z;
do {} while (i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && a < s);
t.match_length = z - (s - a), t.match_length > t.lookahead && (t.match_length = t.lookahead);
}
if (t.match_length >= x ? (n = r._tr_tally(t, 1, t.match_length - x), t.lookahead -= t.match_length, 
t.strstart += t.match_length, t.match_length = 0) : (n = r._tr_tally(t, 0, t.window[t.strstart]), 
t.lookahead--, t.strstart++), n && (F(t, !1), 0 === t.strm.avail_out)) return E;
}
return t.insert = 0, e === f ? (F(t, !0), 0 === t.strm.avail_out ? R : O) : t.last_lit && (F(t, !1), 
0 === t.strm.avail_out) ? E : C;
}(a, e) : i[a.level].func(a, e);
if (_ !== R && _ !== O || (a.status = 666), _ === E || _ === R) return 0 === t.avail_out && (a.last_flush = -1), 
d;
if (_ === C && (1 === e ? r._tr_align(a) : 5 !== e && (r._tr_stored_block(a, 0, 0, !1), 
3 === e && (I(a.head), 0 === a.lookahead && (a.strstart = 0, a.block_start = 0, 
a.insert = 0))), D(t), 0 === t.avail_out)) return a.last_flush = -1, d;
}
return e !== f ? d : a.wrap <= 0 ? 1 : (2 === a.wrap ? (U(a, 255 & t.adler), U(a, t.adler >> 8 & 255), 
U(a, t.adler >> 16 & 255), U(a, t.adler >> 24 & 255), U(a, 255 & t.total_in), U(a, t.total_in >> 8 & 255), 
U(a, t.total_in >> 16 & 255), U(a, t.total_in >> 24 & 255)) : (T(a, t.adler >>> 16), 
T(a, 65535 & t.adler)), D(t), 0 < a.wrap && (a.wrap = -a.wrap), 0 !== a.pending ? d : 1);
}, n.deflateEnd = function(t) {
var e;
return t && t.state ? (e = t.state.status) !== B && 69 !== e && 73 !== e && 91 !== e && 103 !== e && e !== A && 666 !== e ? N(t, u) : (t.state = null, 
e === A ? N(t, -3) : d) : u;
}, n.deflateSetDictionary = function(t, e) {
var n, i, r, o, l, h, f, c, _ = e.length;
if (!t || !t.state) return u;
if (2 === (o = (n = t.state).wrap) || 1 === o && n.status !== B || n.lookahead) return u;
for (1 === o && (t.adler = s(t.adler, e, _, 0)), n.wrap = 0, _ >= n.w_size && (0 === o && (I(n.head), 
n.strstart = 0, n.block_start = 0, n.insert = 0), c = new a.Buf8(n.w_size), a.arraySet(c, e, _ - n.w_size, n.w_size, 0), 
e = c, _ = n.w_size), l = t.avail_in, h = t.next_in, f = t.input, t.avail_in = _, 
t.next_in = 0, t.input = e, H(n); n.lookahead >= x; ) {
for (i = n.strstart, r = n.lookahead - (x - 1); n.ins_h = (n.ins_h << n.hash_shift ^ n.window[i + x - 1]) & n.hash_mask, 
n.prev[i & n.w_mask] = n.head[n.ins_h], n.head[n.ins_h] = i, i++, --r; ) ;
n.strstart = i, n.lookahead = x - 1, H(n);
}
return n.strstart += n.lookahead, n.block_start = n.strstart, n.insert = n.lookahead, 
n.lookahead = 0, n.match_length = n.prev_length = x - 1, n.match_available = 0, 
t.next_in = h, t.input = f, t.avail_in = l, n.wrap = o, d;
}, n.deflateInfo = "pako deflate (from Nodeca project)";
}, {
"../utils/common": 1,
"./adler32": 3,
"./crc32": 4,
"./messages": 6,
"./trees": 7
} ],
6: [ function(t, e) {
e.exports = {
2: "need dictionary",
1: "stream end",
0: "",
"-1": "file error",
"-2": "stream error",
"-3": "data error",
"-4": "insufficient memory",
"-5": "buffer error",
"-6": "incompatible version"
};
}, {} ],
7: [ function(t, e, n) {
var i = t("../utils/common");
function a(t) {
for (var e = t.length; 0 <= --e; ) t[e] = 0;
}
var r = 0, s = 256, o = s + 1 + 29, l = 30, h = 19, f = 2 * o + 1, d = 15, u = 16, c = 256, _ = 16, p = 17, g = 18, m = [ 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0 ], b = [ 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13 ], w = [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 7 ], v = [ 16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15 ], k = new Array(2 * (o + 2));
a(k);
var y = new Array(2 * l);
a(y);
var x = new Array(512);
a(x);
var z = new Array(256);
a(z);
var S = new Array(29);
a(S);
var B, A, E, C = new Array(l);
function R(t, e, n, i, a) {
this.static_tree = t, this.extra_bits = e, this.extra_base = n, this.elems = i, 
this.max_length = a, this.has_stree = t && t.length;
}
function O(t, e) {
this.dyn_tree = t, this.max_code = 0, this.stat_desc = e;
}
function N(t) {
return t < 256 ? x[t] : x[256 + (t >>> 7)];
}
function Z(t, e) {
t.pending_buf[t.pending++] = 255 & e, t.pending_buf[t.pending++] = e >>> 8 & 255;
}
function I(t, e, n) {
t.bi_valid > u - n ? (t.bi_buf |= e << t.bi_valid & 65535, Z(t, t.bi_buf), t.bi_buf = e >> u - t.bi_valid, 
t.bi_valid += n - u) : (t.bi_buf |= e << t.bi_valid & 65535, t.bi_valid += n);
}
function D(t, e, n) {
I(t, n[2 * e], n[2 * e + 1]);
}
function F(t, e) {
for (var n = 0; n |= 1 & t, t >>>= 1, n <<= 1, 0 < --e; ) ;
return n >>> 1;
}
function U(t, e, n) {
var i, a, r = new Array(d + 1), s = 0;
for (i = 1; i <= d; i++) r[i] = s = s + n[i - 1] << 1;
for (a = 0; a <= e; a++) {
var o = t[2 * a + 1];
0 !== o && (t[2 * a] = F(r[o]++, o));
}
}
function T(t) {
var e;
for (e = 0; e < o; e++) t.dyn_ltree[2 * e] = 0;
for (e = 0; e < l; e++) t.dyn_dtree[2 * e] = 0;
for (e = 0; e < h; e++) t.bl_tree[2 * e] = 0;
t.dyn_ltree[2 * c] = 1, t.opt_len = t.static_len = 0, t.last_lit = t.matches = 0;
}
function j(t) {
8 < t.bi_valid ? Z(t, t.bi_buf) : 0 < t.bi_valid && (t.pending_buf[t.pending++] = t.bi_buf), 
t.bi_buf = 0, t.bi_valid = 0;
}
function H(t, e, n, i) {
var a = 2 * e, r = 2 * n;
return t[a] < t[r] || t[a] === t[r] && i[e] <= i[n];
}
function L(t, e, n) {
for (var i = t.heap[n], a = n << 1; a <= t.heap_len && (a < t.heap_len && H(e, t.heap[a + 1], t.heap[a], t.depth) && a++, 
!H(e, i, t.heap[a], t.depth)); ) t.heap[n] = t.heap[a], n = a, a <<= 1;
t.heap[n] = i;
}
function M(t, e, n) {
var i, a, r, o, l = 0;
if (0 !== t.last_lit) for (;i = t.pending_buf[t.d_buf + 2 * l] << 8 | t.pending_buf[t.d_buf + 2 * l + 1], 
a = t.pending_buf[t.l_buf + l], l++, 0 === i ? D(t, a, e) : (D(t, (r = z[a]) + s + 1, e), 
0 !== (o = m[r]) && I(t, a -= S[r], o), D(t, r = N(--i), n), 0 !== (o = b[r]) && I(t, i -= C[r], o)), 
l < t.last_lit; ) ;
D(t, c, e);
}
function P(t, e) {
var n, i, a, r = e.dyn_tree, s = e.stat_desc.static_tree, o = e.stat_desc.has_stree, l = e.stat_desc.elems, h = -1;
for (t.heap_len = 0, t.heap_max = f, n = 0; n < l; n++) 0 !== r[2 * n] ? (t.heap[++t.heap_len] = h = n, 
t.depth[n] = 0) : r[2 * n + 1] = 0;
for (;t.heap_len < 2; ) r[2 * (a = t.heap[++t.heap_len] = h < 2 ? ++h : 0)] = 1, 
t.depth[a] = 0, t.opt_len--, o && (t.static_len -= s[2 * a + 1]);
for (e.max_code = h, n = t.heap_len >> 1; 1 <= n; n--) L(t, r, n);
for (a = l; n = t.heap[1], t.heap[1] = t.heap[t.heap_len--], L(t, r, 1), i = t.heap[1], 
t.heap[--t.heap_max] = n, t.heap[--t.heap_max] = i, r[2 * a] = r[2 * n] + r[2 * i], 
t.depth[a] = (t.depth[n] >= t.depth[i] ? t.depth[n] : t.depth[i]) + 1, r[2 * n + 1] = r[2 * i + 1] = a, 
t.heap[1] = a++, L(t, r, 1), 2 <= t.heap_len; ) ;
t.heap[--t.heap_max] = t.heap[1], function(t, e) {
var n, i, a, r, s, o, l = e.dyn_tree, h = e.max_code, u = e.stat_desc.static_tree, c = e.stat_desc.has_stree, _ = e.stat_desc.extra_bits, p = e.stat_desc.extra_base, g = e.stat_desc.max_length, m = 0;
for (r = 0; r <= d; r++) t.bl_count[r] = 0;
for (l[2 * t.heap[t.heap_max] + 1] = 0, n = t.heap_max + 1; n < f; n++) g < (r = l[2 * l[2 * (i = t.heap[n]) + 1] + 1] + 1) && (r = g, 
m++), l[2 * i + 1] = r, h < i || (t.bl_count[r]++, s = 0, p <= i && (s = _[i - p]), 
o = l[2 * i], t.opt_len += o * (r + s), c && (t.static_len += o * (u[2 * i + 1] + s)));
if (0 !== m) {
do {
for (r = g - 1; 0 === t.bl_count[r]; ) r--;
t.bl_count[r]--, t.bl_count[r + 1] += 2, t.bl_count[g]--, m -= 2;
} while (0 < m);
for (r = g; 0 !== r; r--) for (i = t.bl_count[r]; 0 !== i; ) h < (a = t.heap[--n]) || (l[2 * a + 1] !== r && (t.opt_len += (r - l[2 * a + 1]) * l[2 * a], 
l[2 * a + 1] = r), i--);
}
}(t, e), U(r, h, t.bl_count);
}
function K(t, e, n) {
var i, a, r = -1, s = e[1], o = 0, l = 7, h = 4;
for (0 === s && (l = 138, h = 3), e[2 * (n + 1) + 1] = 65535, i = 0; i <= n; i++) a = s, 
s = e[2 * (i + 1) + 1], ++o < l && a === s || (o < h ? t.bl_tree[2 * a] += o : 0 !== a ? (a !== r && t.bl_tree[2 * a]++, 
t.bl_tree[2 * _]++) : o <= 10 ? t.bl_tree[2 * p]++ : t.bl_tree[2 * g]++, r = a, 
(o = 0) === s ? (l = 138, h = 3) : a === s ? (l = 6, h = 3) : (l = 7, h = 4));
}
function W(t, e, n) {
var i, a, r = -1, s = e[1], o = 0, l = 7, h = 4;
for (0 === s && (l = 138, h = 3), i = 0; i <= n; i++) if (a = s, s = e[2 * (i + 1) + 1], 
!(++o < l && a === s)) {
if (o < h) for (;D(t, a, t.bl_tree), 0 != --o; ) ; else 0 !== a ? (a !== r && (D(t, a, t.bl_tree), 
o--), D(t, _, t.bl_tree), I(t, o - 3, 2)) : o <= 10 ? (D(t, p, t.bl_tree), I(t, o - 3, 3)) : (D(t, g, t.bl_tree), 
I(t, o - 11, 7));
r = a, (o = 0) === s ? (l = 138, h = 3) : a === s ? (l = 6, h = 3) : (l = 7, h = 4);
}
}
a(C);
var V = !1;
function q(t, e, n, a) {
var s, o, l;
I(t, (r << 1) + (a ? 1 : 0), 3), o = e, l = n, j(s = t), Z(s, l), Z(s, ~l), i.arraySet(s.pending_buf, s.window, o, l, s.pending), 
s.pending += l;
}
n._tr_init = function(t) {
V || (function() {
var t, e, n, i, a, r = new Array(d + 1);
for (i = n = 0; i < 28; i++) for (S[i] = n, t = 0; t < 1 << m[i]; t++) z[n++] = i;
for (z[n - 1] = i, i = a = 0; i < 16; i++) for (C[i] = a, t = 0; t < 1 << b[i]; t++) x[a++] = i;
for (a >>= 7; i < l; i++) for (C[i] = a << 7, t = 0; t < 1 << b[i] - 7; t++) x[256 + a++] = i;
for (e = 0; e <= d; e++) r[e] = 0;
for (t = 0; t <= 143; ) k[2 * t + 1] = 8, t++, r[8]++;
for (;t <= 255; ) k[2 * t + 1] = 9, t++, r[9]++;
for (;t <= 279; ) k[2 * t + 1] = 7, t++, r[7]++;
for (;t <= 287; ) k[2 * t + 1] = 8, t++, r[8]++;
for (U(k, o + 1, r), t = 0; t < l; t++) y[2 * t + 1] = 5, y[2 * t] = F(t, 5);
B = new R(k, m, s + 1, o, d), A = new R(y, b, 0, l, d), E = new R(new Array(0), w, 0, h, 7);
}(), V = !0), t.l_desc = new O(t.dyn_ltree, B), t.d_desc = new O(t.dyn_dtree, A), 
t.bl_desc = new O(t.bl_tree, E), t.bi_buf = 0, t.bi_valid = 0, T(t);
}, n._tr_stored_block = q, n._tr_flush_block = function(t, e, n, i) {
var a, r, o = 0;
0 < t.level ? (2 === t.strm.data_type && (t.strm.data_type = function(t) {
var e, n = 4093624447;
for (e = 0; e <= 31; e++, n >>>= 1) if (1 & n && 0 !== t.dyn_ltree[2 * e]) return 0;
if (0 !== t.dyn_ltree[18] || 0 !== t.dyn_ltree[20] || 0 !== t.dyn_ltree[26]) return 1;
for (e = 32; e < s; e++) if (0 !== t.dyn_ltree[2 * e]) return 1;
return 0;
}(t)), P(t, t.l_desc), P(t, t.d_desc), o = function(t) {
var e;
for (K(t, t.dyn_ltree, t.l_desc.max_code), K(t, t.dyn_dtree, t.d_desc.max_code), 
P(t, t.bl_desc), e = h - 1; 3 <= e && 0 === t.bl_tree[2 * v[e] + 1]; e--) ;
return t.opt_len += 14 + 3 * (e + 1), e;
}(t), a = t.opt_len + 3 + 7 >>> 3, (r = t.static_len + 3 + 7 >>> 3) <= a && (a = r)) : a = r = n + 5, 
n + 4 <= a && -1 !== e ? q(t, e, n, i) : 4 === t.strategy || r === a ? (I(t, 2 + (i ? 1 : 0), 3), 
M(t, k, y)) : (I(t, 4 + (i ? 1 : 0), 3), function(t, e, n, i) {
var a;
for (I(t, e - 257, 5), I(t, n - 1, 5), I(t, i - 4, 4), a = 0; a < i; a++) I(t, t.bl_tree[2 * v[a] + 1], 3);
W(t, t.dyn_ltree, e - 1), W(t, t.dyn_dtree, n - 1);
}(t, t.l_desc.max_code + 1, t.d_desc.max_code + 1, o + 1), M(t, t.dyn_ltree, t.dyn_dtree)), 
T(t), i && j(t);
}, n._tr_tally = function(t, e, n) {
return t.pending_buf[t.d_buf + 2 * t.last_lit] = e >>> 8 & 255, t.pending_buf[t.d_buf + 2 * t.last_lit + 1] = 255 & e, 
t.pending_buf[t.l_buf + t.last_lit] = 255 & n, t.last_lit++, 0 === e ? t.dyn_ltree[2 * n]++ : (t.matches++, 
e--, t.dyn_ltree[2 * (z[n] + s + 1)]++, t.dyn_dtree[2 * N(e)]++), t.last_lit === t.lit_bufsize - 1;
}, n._tr_align = function(t) {
var e;
I(t, 2, 3), D(t, c, k), 16 === (e = t).bi_valid ? (Z(e, e.bi_buf), e.bi_buf = 0, 
e.bi_valid = 0) : 8 <= e.bi_valid && (e.pending_buf[e.pending++] = 255 & e.bi_buf, 
e.bi_buf >>= 8, e.bi_valid -= 8);
};
}, {
"../utils/common": 1
} ],
8: [ function(t, e) {
e.exports = function() {
this.input = null, this.next_in = 0, this.avail_in = 0, this.total_in = 0, this.output = null, 
this.next_out = 0, this.avail_out = 0, this.total_out = 0, this.msg = "", this.state = null, 
this.data_type = 2, this.adler = 0;
};
}, {} ],
"/lib/deflate.js": [ function(t, e, n) {
var i = t("./zlib/deflate"), a = t("./utils/common"), r = t("./utils/strings"), s = t("./zlib/messages"), o = t("./zlib/zstream"), l = Object.prototype.toString, h = 0, f = -1, d = 0, u = 8;
function c(t) {
if (!(this instanceof c)) return new c(t);
this.options = a.assign({
level: f,
method: u,
chunkSize: 16384,
windowBits: 15,
memLevel: 8,
strategy: d,
to: ""
}, t || {});
var e = this.options;
e.raw && 0 < e.windowBits ? e.windowBits = -e.windowBits : e.gzip && 0 < e.windowBits && e.windowBits < 16 && (e.windowBits += 16), 
this.err = 0, this.msg = "", this.ended = !1, this.chunks = [], this.strm = new o(), 
this.strm.avail_out = 0;
var n = i.deflateInit2(this.strm, e.level, e.method, e.windowBits, e.memLevel, e.strategy);
if (n !== h) throw new Error(s[n]);
if (e.header && i.deflateSetHeader(this.strm, e.header), e.dictionary) {
var _;
if (_ = "string" == typeof e.dictionary ? r.string2buf(e.dictionary) : "[object ArrayBuffer]" === l.call(e.dictionary) ? new Uint8Array(e.dictionary) : e.dictionary, 
(n = i.deflateSetDictionary(this.strm, _)) !== h) throw new Error(s[n]);
this._dict_set = !0;
}
}
function _(t, e) {
var n = new c(e);
if (n.push(t, !0), n.err) throw n.msg || s[n.err];
return n.result;
}
c.prototype.push = function(t, e) {
var n, s, o = this.strm, f = this.options.chunkSize;
if (this.ended) return !1;
s = e === ~~e ? e : !0 === e ? 4 : 0, "string" == typeof t ? o.input = r.string2buf(t) : "[object ArrayBuffer]" === l.call(t) ? o.input = new Uint8Array(t) : o.input = t, 
o.next_in = 0, o.avail_in = o.input.length;
do {
if (0 === o.avail_out && (o.output = new a.Buf8(f), o.next_out = 0, o.avail_out = f), 
1 !== (n = i.deflate(o, s)) && n !== h) return this.onEnd(n), !(this.ended = !0);
0 !== o.avail_out && (0 !== o.avail_in || 4 !== s && 2 !== s) || ("string" === this.options.to ? this.onData(r.buf2binstring(a.shrinkBuf(o.output, o.next_out))) : this.onData(a.shrinkBuf(o.output, o.next_out)));
} while ((0 < o.avail_in || 0 === o.avail_out) && 1 !== n);
return 4 === s ? (n = i.deflateEnd(this.strm), this.onEnd(n), this.ended = !0, n === h) : 2 !== s || (this.onEnd(h), 
!(o.avail_out = 0));
}, c.prototype.onData = function(t) {
this.chunks.push(t);
}, c.prototype.onEnd = function(t) {
t === h && ("string" === this.options.to ? this.result = this.chunks.join("") : this.result = a.flattenChunks(this.chunks)), 
this.chunks = [], this.err = t, this.msg = this.strm.msg;
}, n.Deflate = c, n.deflate = _, n.deflateRaw = function(t, e) {
return (e = e || {}).raw = !0, _(t, e);
}, n.gzip = function(t, e) {
return (e = e || {}).gzip = !0, _(t, e);
};
}, {
"./utils/common": 1,
"./utils/strings": 2,
"./zlib/deflate": 5,
"./zlib/messages": 6,
"./zlib/zstream": 8
} ]
}, {}, [])("/lib/deflate.js");
});
cc._RF.pop();
}).call(this, "undefined" != typeof global ? global : "undefined" != typeof self ? self : "undefined" != typeof window ? window : {});
}, {} ],
pako_deflate: [ function(t, e, n) {
(function(i) {
"use strict";
cc._RF.push(e, "f21a4RdvJxOybe5WhI2TM1P", "pako_deflate");
(function(t) {
"object" == typeof n && "undefined" != typeof e ? e.exports = t() : "function" == typeof define && define.amd ? define([], t) : ("undefined" != typeof window ? window : "undefined" != typeof i ? i : "undefined" != typeof self ? self : this).pako = t();
})(function() {
return function e(n, i, a) {
function r(o, l) {
if (!i[o]) {
if (!n[o]) {
var h = "function" == typeof t && t;
if (!l && h) return h(o, !0);
if (s) return s(o, !0);
var f = new Error("Cannot find module '" + o + "'");
throw f.code = "MODULE_NOT_FOUND", f;
}
var d = i[o] = {
exports: {}
};
n[o][0].call(d.exports, function(t) {
return r(n[o][1][t] || t);
}, d, d.exports, e, n, i, a);
}
return i[o].exports;
}
for (var s = "function" == typeof t && t, o = 0; o < a.length; o++) r(a[o]);
return r;
}({
1: [ function(t, e, n) {
var i = "undefined" != typeof Uint8Array && "undefined" != typeof Uint16Array && "undefined" != typeof Int32Array;
function a(t, e) {
return Object.prototype.hasOwnProperty.call(t, e);
}
n.assign = function(t) {
for (var e = Array.prototype.slice.call(arguments, 1); e.length; ) {
var n = e.shift();
if (n) {
if ("object" != typeof n) throw new TypeError(n + "must be non-object");
for (var i in n) a(n, i) && (t[i] = n[i]);
}
}
return t;
};
n.shrinkBuf = function(t, e) {
if (t.length === e) return t;
if (t.subarray) return t.subarray(0, e);
t.length = e;
return t;
};
var r = {
arraySet: function(t, e, n, i, a) {
if (e.subarray && t.subarray) t.set(e.subarray(n, n + i), a); else for (var r = 0; r < i; r++) t[a + r] = e[n + r];
},
flattenChunks: function(t) {
var e, n, i, a, r, s;
i = 0;
for (e = 0, n = t.length; e < n; e++) i += t[e].length;
s = new Uint8Array(i);
a = 0;
for (e = 0, n = t.length; e < n; e++) {
r = t[e];
s.set(r, a);
a += r.length;
}
return s;
}
}, s = {
arraySet: function(t, e, n, i, a) {
for (var r = 0; r < i; r++) t[a + r] = e[n + r];
},
flattenChunks: function(t) {
return [].concat.apply([], t);
}
};
n.setTyped = function(t) {
if (t) {
n.Buf8 = Uint8Array;
n.Buf16 = Uint16Array;
n.Buf32 = Int32Array;
n.assign(n, r);
} else {
n.Buf8 = Array;
n.Buf16 = Array;
n.Buf32 = Array;
n.assign(n, s);
}
};
n.setTyped(i);
}, {} ],
2: [ function(t, e, n) {
var i = t("./common"), a = !0, r = !0;
try {
String.fromCharCode.apply(null, [ 0 ]);
} catch (t) {
a = !1;
}
try {
String.fromCharCode.apply(null, new Uint8Array(1));
} catch (t) {
r = !1;
}
for (var s = new i.Buf8(256), o = 0; o < 256; o++) s[o] = o >= 252 ? 6 : o >= 248 ? 5 : o >= 240 ? 4 : o >= 224 ? 3 : o >= 192 ? 2 : 1;
s[254] = s[254] = 1;
n.string2buf = function(t) {
var e, n, a, r, s, o = t.length, l = 0;
for (r = 0; r < o; r++) {
if (55296 == (64512 & (n = t.charCodeAt(r))) && r + 1 < o && 56320 == (64512 & (a = t.charCodeAt(r + 1)))) {
n = 65536 + (n - 55296 << 10) + (a - 56320);
r++;
}
l += n < 128 ? 1 : n < 2048 ? 2 : n < 65536 ? 3 : 4;
}
e = new i.Buf8(l);
for (s = 0, r = 0; s < l; r++) {
if (55296 == (64512 & (n = t.charCodeAt(r))) && r + 1 < o && 56320 == (64512 & (a = t.charCodeAt(r + 1)))) {
n = 65536 + (n - 55296 << 10) + (a - 56320);
r++;
}
if (n < 128) e[s++] = n; else if (n < 2048) {
e[s++] = 192 | n >>> 6;
e[s++] = 128 | 63 & n;
} else if (n < 65536) {
e[s++] = 224 | n >>> 12;
e[s++] = 128 | n >>> 6 & 63;
e[s++] = 128 | 63 & n;
} else {
e[s++] = 240 | n >>> 18;
e[s++] = 128 | n >>> 12 & 63;
e[s++] = 128 | n >>> 6 & 63;
e[s++] = 128 | 63 & n;
}
}
return e;
};
function l(t, e) {
if (e < 65534 && (t.subarray && r || !t.subarray && a)) return String.fromCharCode.apply(null, i.shrinkBuf(t, e));
for (var n = "", s = 0; s < e; s++) n += String.fromCharCode(t[s]);
return n;
}
n.buf2binstring = function(t) {
return l(t, t.length);
};
n.binstring2buf = function(t) {
for (var e = new i.Buf8(t.length), n = 0, a = e.length; n < a; n++) e[n] = t.charCodeAt(n);
return e;
};
n.buf2string = function(t, e) {
var n, i, a, r, o = e || t.length, h = new Array(2 * o);
for (i = 0, n = 0; n < o; ) if ((a = t[n++]) < 128) h[i++] = a; else if ((r = s[a]) > 4) {
h[i++] = 65533;
n += r - 1;
} else {
a &= 2 === r ? 31 : 3 === r ? 15 : 7;
for (;r > 1 && n < o; ) {
a = a << 6 | 63 & t[n++];
r--;
}
if (r > 1) h[i++] = 65533; else if (a < 65536) h[i++] = a; else {
a -= 65536;
h[i++] = 55296 | a >> 10 & 1023;
h[i++] = 56320 | 1023 & a;
}
}
return l(h, i);
};
n.utf8border = function(t, e) {
var n;
(e = e || t.length) > t.length && (e = t.length);
n = e - 1;
for (;n >= 0 && 128 == (192 & t[n]); ) n--;
return n < 0 ? e : 0 === n ? e : n + s[t[n]] > e ? n : e;
};
}, {
"./common": 1
} ],
3: [ function(t, e) {
e.exports = function(t, e, n, i) {
for (var a = 65535 & t | 0, r = t >>> 16 & 65535 | 0, s = 0; 0 !== n; ) {
n -= s = n > 2e3 ? 2e3 : n;
do {
r = r + (a = a + e[i++] | 0) | 0;
} while (--s);
a %= 65521;
r %= 65521;
}
return a | r << 16 | 0;
};
}, {} ],
4: [ function(t, e) {
var n = function() {
for (var t, e = [], n = 0; n < 256; n++) {
t = n;
for (var i = 0; i < 8; i++) t = 1 & t ? 3988292384 ^ t >>> 1 : t >>> 1;
e[n] = t;
}
return e;
}();
e.exports = function(t, e, i, a) {
var r = n, s = a + i;
t ^= -1;
for (var o = a; o < s; o++) t = t >>> 8 ^ r[255 & (t ^ e[o])];
return -1 ^ t;
};
}, {} ],
5: [ function(t, e, n) {
var i, a = t("../utils/common"), r = t("./trees"), s = t("./adler32"), o = t("./crc32"), l = t("./messages"), h = 0, f = 4, d = 0, u = -2, c = -1, _ = 1, p = 4, g = 2, m = 8, b = 9, w = 286, v = 30, k = 19, y = 2 * w + 1, x = 15, z = 3, S = 258, B = S + z + 1, A = 42, E = 113, C = 1, R = 2, O = 3, N = 4;
function Z(t, e) {
t.msg = l[e];
return e;
}
function I(t) {
return (t << 1) - (t > 4 ? 9 : 0);
}
function D(t) {
for (var e = t.length; --e >= 0; ) t[e] = 0;
}
function F(t) {
var e = t.state, n = e.pending;
n > t.avail_out && (n = t.avail_out);
if (0 !== n) {
a.arraySet(t.output, e.pending_buf, e.pending_out, n, t.next_out);
t.next_out += n;
e.pending_out += n;
t.total_out += n;
t.avail_out -= n;
e.pending -= n;
0 === e.pending && (e.pending_out = 0);
}
}
function U(t, e) {
r._tr_flush_block(t, t.block_start >= 0 ? t.block_start : -1, t.strstart - t.block_start, e);
t.block_start = t.strstart;
F(t.strm);
}
function T(t, e) {
t.pending_buf[t.pending++] = e;
}
function j(t, e) {
t.pending_buf[t.pending++] = e >>> 8 & 255;
t.pending_buf[t.pending++] = 255 & e;
}
function H(t, e, n, i) {
var r = t.avail_in;
r > i && (r = i);
if (0 === r) return 0;
t.avail_in -= r;
a.arraySet(e, t.input, t.next_in, r, n);
1 === t.state.wrap ? t.adler = s(t.adler, e, r, n) : 2 === t.state.wrap && (t.adler = o(t.adler, e, r, n));
t.next_in += r;
t.total_in += r;
return r;
}
function L(t, e) {
var n, i, a = t.max_chain_length, r = t.strstart, s = t.prev_length, o = t.nice_match, l = t.strstart > t.w_size - B ? t.strstart - (t.w_size - B) : 0, h = t.window, f = t.w_mask, d = t.prev, u = t.strstart + S, c = h[r + s - 1], _ = h[r + s];
t.prev_length >= t.good_match && (a >>= 2);
o > t.lookahead && (o = t.lookahead);
do {
if (h[(n = e) + s] === _ && h[n + s - 1] === c && h[n] === h[r] && h[++n] === h[r + 1]) {
r += 2;
n++;
do {} while (h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && h[++r] === h[++n] && r < u);
i = S - (u - r);
r = u - S;
if (i > s) {
t.match_start = e;
s = i;
if (i >= o) break;
c = h[r + s - 1];
_ = h[r + s];
}
}
} while ((e = d[e & f]) > l && 0 != --a);
return s <= t.lookahead ? s : t.lookahead;
}
function M(t) {
var e, n, i, r, s, o = t.w_size;
do {
r = t.window_size - t.lookahead - t.strstart;
if (t.strstart >= o + (o - B)) {
a.arraySet(t.window, t.window, o, o, 0);
t.match_start -= o;
t.strstart -= o;
t.block_start -= o;
e = n = t.hash_size;
do {
i = t.head[--e];
t.head[e] = i >= o ? i - o : 0;
} while (--n);
e = n = o;
do {
i = t.prev[--e];
t.prev[e] = i >= o ? i - o : 0;
} while (--n);
r += o;
}
if (0 === t.strm.avail_in) break;
n = H(t.strm, t.window, t.strstart + t.lookahead, r);
t.lookahead += n;
if (t.lookahead + t.insert >= z) {
s = t.strstart - t.insert;
t.ins_h = t.window[s];
t.ins_h = (t.ins_h << t.hash_shift ^ t.window[s + 1]) & t.hash_mask;
for (;t.insert; ) {
t.ins_h = (t.ins_h << t.hash_shift ^ t.window[s + z - 1]) & t.hash_mask;
t.prev[s & t.w_mask] = t.head[t.ins_h];
t.head[t.ins_h] = s;
s++;
t.insert--;
if (t.lookahead + t.insert < z) break;
}
}
} while (t.lookahead < B && 0 !== t.strm.avail_in);
}
function P(t, e) {
for (var n, i; ;) {
if (t.lookahead < B) {
M(t);
if (t.lookahead < B && e === h) return C;
if (0 === t.lookahead) break;
}
n = 0;
if (t.lookahead >= z) {
t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + z - 1]) & t.hash_mask;
n = t.prev[t.strstart & t.w_mask] = t.head[t.ins_h];
t.head[t.ins_h] = t.strstart;
}
0 !== n && t.strstart - n <= t.w_size - B && (t.match_length = L(t, n));
if (t.match_length >= z) {
i = r._tr_tally(t, t.strstart - t.match_start, t.match_length - z);
t.lookahead -= t.match_length;
if (t.match_length <= t.max_lazy_match && t.lookahead >= z) {
t.match_length--;
do {
t.strstart++;
t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + z - 1]) & t.hash_mask;
n = t.prev[t.strstart & t.w_mask] = t.head[t.ins_h];
t.head[t.ins_h] = t.strstart;
} while (0 != --t.match_length);
t.strstart++;
} else {
t.strstart += t.match_length;
t.match_length = 0;
t.ins_h = t.window[t.strstart];
t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + 1]) & t.hash_mask;
}
} else {
i = r._tr_tally(t, 0, t.window[t.strstart]);
t.lookahead--;
t.strstart++;
}
if (i) {
U(t, !1);
if (0 === t.strm.avail_out) return C;
}
}
t.insert = t.strstart < z - 1 ? t.strstart : z - 1;
if (e === f) {
U(t, !0);
return 0 === t.strm.avail_out ? O : N;
}
if (t.last_lit) {
U(t, !1);
if (0 === t.strm.avail_out) return C;
}
return R;
}
function K(t, e) {
for (var n, i, a; ;) {
if (t.lookahead < B) {
M(t);
if (t.lookahead < B && e === h) return C;
if (0 === t.lookahead) break;
}
n = 0;
if (t.lookahead >= z) {
t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + z - 1]) & t.hash_mask;
n = t.prev[t.strstart & t.w_mask] = t.head[t.ins_h];
t.head[t.ins_h] = t.strstart;
}
t.prev_length = t.match_length;
t.prev_match = t.match_start;
t.match_length = z - 1;
if (0 !== n && t.prev_length < t.max_lazy_match && t.strstart - n <= t.w_size - B) {
t.match_length = L(t, n);
t.match_length <= 5 && (t.strategy === _ || t.match_length === z && t.strstart - t.match_start > 4096) && (t.match_length = z - 1);
}
if (t.prev_length >= z && t.match_length <= t.prev_length) {
a = t.strstart + t.lookahead - z;
i = r._tr_tally(t, t.strstart - 1 - t.prev_match, t.prev_length - z);
t.lookahead -= t.prev_length - 1;
t.prev_length -= 2;
do {
if (++t.strstart <= a) {
t.ins_h = (t.ins_h << t.hash_shift ^ t.window[t.strstart + z - 1]) & t.hash_mask;
n = t.prev[t.strstart & t.w_mask] = t.head[t.ins_h];
t.head[t.ins_h] = t.strstart;
}
} while (0 != --t.prev_length);
t.match_available = 0;
t.match_length = z - 1;
t.strstart++;
if (i) {
U(t, !1);
if (0 === t.strm.avail_out) return C;
}
} else if (t.match_available) {
(i = r._tr_tally(t, 0, t.window[t.strstart - 1])) && U(t, !1);
t.strstart++;
t.lookahead--;
if (0 === t.strm.avail_out) return C;
} else {
t.match_available = 1;
t.strstart++;
t.lookahead--;
}
}
if (t.match_available) {
i = r._tr_tally(t, 0, t.window[t.strstart - 1]);
t.match_available = 0;
}
t.insert = t.strstart < z - 1 ? t.strstart : z - 1;
if (e === f) {
U(t, !0);
return 0 === t.strm.avail_out ? O : N;
}
if (t.last_lit) {
U(t, !1);
if (0 === t.strm.avail_out) return C;
}
return R;
}
function W(t, e) {
for (var n, i, a, s, o = t.window; ;) {
if (t.lookahead <= S) {
M(t);
if (t.lookahead <= S && e === h) return C;
if (0 === t.lookahead) break;
}
t.match_length = 0;
if (t.lookahead >= z && t.strstart > 0 && (i = o[a = t.strstart - 1]) === o[++a] && i === o[++a] && i === o[++a]) {
s = t.strstart + S;
do {} while (i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && i === o[++a] && a < s);
t.match_length = S - (s - a);
t.match_length > t.lookahead && (t.match_length = t.lookahead);
}
if (t.match_length >= z) {
n = r._tr_tally(t, 1, t.match_length - z);
t.lookahead -= t.match_length;
t.strstart += t.match_length;
t.match_length = 0;
} else {
n = r._tr_tally(t, 0, t.window[t.strstart]);
t.lookahead--;
t.strstart++;
}
if (n) {
U(t, !1);
if (0 === t.strm.avail_out) return C;
}
}
t.insert = 0;
if (e === f) {
U(t, !0);
return 0 === t.strm.avail_out ? O : N;
}
if (t.last_lit) {
U(t, !1);
if (0 === t.strm.avail_out) return C;
}
return R;
}
function V(t, e) {
for (var n; ;) {
if (0 === t.lookahead) {
M(t);
if (0 === t.lookahead) {
if (e === h) return C;
break;
}
}
t.match_length = 0;
n = r._tr_tally(t, 0, t.window[t.strstart]);
t.lookahead--;
t.strstart++;
if (n) {
U(t, !1);
if (0 === t.strm.avail_out) return C;
}
}
t.insert = 0;
if (e === f) {
U(t, !0);
return 0 === t.strm.avail_out ? O : N;
}
if (t.last_lit) {
U(t, !1);
if (0 === t.strm.avail_out) return C;
}
return R;
}
function q(t, e, n, i, a) {
this.good_length = t;
this.max_lazy = e;
this.nice_length = n;
this.max_chain = i;
this.func = a;
}
i = [ new q(0, 0, 0, 0, function(t, e) {
var n = 65535;
n > t.pending_buf_size - 5 && (n = t.pending_buf_size - 5);
for (;;) {
if (t.lookahead <= 1) {
M(t);
if (0 === t.lookahead && e === h) return C;
if (0 === t.lookahead) break;
}
t.strstart += t.lookahead;
t.lookahead = 0;
var i = t.block_start + n;
if (0 === t.strstart || t.strstart >= i) {
t.lookahead = t.strstart - i;
t.strstart = i;
U(t, !1);
if (0 === t.strm.avail_out) return C;
}
if (t.strstart - t.block_start >= t.w_size - B) {
U(t, !1);
if (0 === t.strm.avail_out) return C;
}
}
t.insert = 0;
if (e === f) {
U(t, !0);
return 0 === t.strm.avail_out ? O : N;
}
if (t.strstart > t.block_start) {
U(t, !1);
if (0 === t.strm.avail_out) return C;
}
return C;
}), new q(4, 4, 8, 4, P), new q(4, 5, 16, 8, P), new q(4, 6, 32, 32, P), new q(4, 4, 16, 16, K), new q(8, 16, 32, 32, K), new q(8, 16, 128, 128, K), new q(8, 32, 128, 256, K), new q(32, 128, 258, 1024, K), new q(32, 258, 258, 4096, K) ];
function Y(t) {
t.window_size = 2 * t.w_size;
D(t.head);
t.max_lazy_match = i[t.level].max_lazy;
t.good_match = i[t.level].good_length;
t.nice_match = i[t.level].nice_length;
t.max_chain_length = i[t.level].max_chain;
t.strstart = 0;
t.block_start = 0;
t.lookahead = 0;
t.insert = 0;
t.match_length = t.prev_length = z - 1;
t.match_available = 0;
t.ins_h = 0;
}
function G() {
this.strm = null;
this.status = 0;
this.pending_buf = null;
this.pending_buf_size = 0;
this.pending_out = 0;
this.pending = 0;
this.wrap = 0;
this.gzhead = null;
this.gzindex = 0;
this.method = m;
this.last_flush = -1;
this.w_size = 0;
this.w_bits = 0;
this.w_mask = 0;
this.window = null;
this.window_size = 0;
this.prev = null;
this.head = null;
this.ins_h = 0;
this.hash_size = 0;
this.hash_bits = 0;
this.hash_mask = 0;
this.hash_shift = 0;
this.block_start = 0;
this.match_length = 0;
this.prev_match = 0;
this.match_available = 0;
this.strstart = 0;
this.match_start = 0;
this.lookahead = 0;
this.prev_length = 0;
this.max_chain_length = 0;
this.max_lazy_match = 0;
this.level = 0;
this.strategy = 0;
this.good_match = 0;
this.nice_match = 0;
this.dyn_ltree = new a.Buf16(2 * y);
this.dyn_dtree = new a.Buf16(2 * (2 * v + 1));
this.bl_tree = new a.Buf16(2 * (2 * k + 1));
D(this.dyn_ltree);
D(this.dyn_dtree);
D(this.bl_tree);
this.l_desc = null;
this.d_desc = null;
this.bl_desc = null;
this.bl_count = new a.Buf16(x + 1);
this.heap = new a.Buf16(2 * w + 1);
D(this.heap);
this.heap_len = 0;
this.heap_max = 0;
this.depth = new a.Buf16(2 * w + 1);
D(this.depth);
this.l_buf = 0;
this.lit_bufsize = 0;
this.last_lit = 0;
this.d_buf = 0;
this.opt_len = 0;
this.static_len = 0;
this.matches = 0;
this.insert = 0;
this.bi_buf = 0;
this.bi_valid = 0;
}
function J(t) {
var e;
if (!t || !t.state) return Z(t, u);
t.total_in = t.total_out = 0;
t.data_type = g;
(e = t.state).pending = 0;
e.pending_out = 0;
e.wrap < 0 && (e.wrap = -e.wrap);
e.status = e.wrap ? A : E;
t.adler = 2 === e.wrap ? 0 : 1;
e.last_flush = h;
r._tr_init(e);
return d;
}
function X(t) {
var e = J(t);
e === d && Y(t.state);
return e;
}
function Q(t, e, n, i, r, s) {
if (!t) return u;
var o = 1;
e === c && (e = 6);
if (i < 0) {
o = 0;
i = -i;
} else if (i > 15) {
o = 2;
i -= 16;
}
if (r < 1 || r > b || n !== m || i < 8 || i > 15 || e < 0 || e > 9 || s < 0 || s > p) return Z(t, u);
8 === i && (i = 9);
var l = new G();
t.state = l;
l.strm = t;
l.wrap = o;
l.gzhead = null;
l.w_bits = i;
l.w_size = 1 << l.w_bits;
l.w_mask = l.w_size - 1;
l.hash_bits = r + 7;
l.hash_size = 1 << l.hash_bits;
l.hash_mask = l.hash_size - 1;
l.hash_shift = ~~((l.hash_bits + z - 1) / z);
l.window = new a.Buf8(2 * l.w_size);
l.head = new a.Buf16(l.hash_size);
l.prev = new a.Buf16(l.w_size);
l.lit_bufsize = 1 << r + 6;
l.pending_buf_size = 4 * l.lit_bufsize;
l.pending_buf = new a.Buf8(l.pending_buf_size);
l.d_buf = 1 * l.lit_bufsize;
l.l_buf = 3 * l.lit_bufsize;
l.level = e;
l.strategy = s;
l.method = n;
return X(t);
}
n.deflateInit = function(t, e) {
return Q(t, e, m, 15, 8, 0);
};
n.deflateInit2 = Q;
n.deflateReset = X;
n.deflateResetKeep = J;
n.deflateSetHeader = function(t, e) {
if (!t || !t.state) return u;
if (2 !== t.state.wrap) return u;
t.state.gzhead = e;
return d;
};
n.deflate = function(t, e) {
var n, a, s, l;
if (!t || !t.state || e > 5 || e < 0) return t ? Z(t, u) : u;
a = t.state;
if (!t.output || !t.input && 0 !== t.avail_in || 666 === a.status && e !== f) return Z(t, 0 === t.avail_out ? -5 : u);
a.strm = t;
n = a.last_flush;
a.last_flush = e;
if (a.status === A) if (2 === a.wrap) {
t.adler = 0;
T(a, 31);
T(a, 139);
T(a, 8);
if (a.gzhead) {
T(a, (a.gzhead.text ? 1 : 0) + (a.gzhead.hcrc ? 2 : 0) + (a.gzhead.extra ? 4 : 0) + (a.gzhead.name ? 8 : 0) + (a.gzhead.comment ? 16 : 0));
T(a, 255 & a.gzhead.time);
T(a, a.gzhead.time >> 8 & 255);
T(a, a.gzhead.time >> 16 & 255);
T(a, a.gzhead.time >> 24 & 255);
T(a, 9 === a.level ? 2 : a.strategy >= 2 || a.level < 2 ? 4 : 0);
T(a, 255 & a.gzhead.os);
if (a.gzhead.extra && a.gzhead.extra.length) {
T(a, 255 & a.gzhead.extra.length);
T(a, a.gzhead.extra.length >> 8 & 255);
}
a.gzhead.hcrc && (t.adler = o(t.adler, a.pending_buf, a.pending, 0));
a.gzindex = 0;
a.status = 69;
} else {
T(a, 0);
T(a, 0);
T(a, 0);
T(a, 0);
T(a, 0);
T(a, 9 === a.level ? 2 : a.strategy >= 2 || a.level < 2 ? 4 : 0);
T(a, 3);
a.status = E;
}
} else {
var c = m + (a.w_bits - 8 << 4) << 8;
c |= (a.strategy >= 2 || a.level < 2 ? 0 : a.level < 6 ? 1 : 6 === a.level ? 2 : 3) << 6;
0 !== a.strstart && (c |= 32);
c += 31 - c % 31;
a.status = E;
j(a, c);
if (0 !== a.strstart) {
j(a, t.adler >>> 16);
j(a, 65535 & t.adler);
}
t.adler = 1;
}
if (69 === a.status) if (a.gzhead.extra) {
s = a.pending;
for (;a.gzindex < (65535 & a.gzhead.extra.length); ) {
if (a.pending === a.pending_buf_size) {
a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s));
F(t);
s = a.pending;
if (a.pending === a.pending_buf_size) break;
}
T(a, 255 & a.gzhead.extra[a.gzindex]);
a.gzindex++;
}
a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s));
if (a.gzindex === a.gzhead.extra.length) {
a.gzindex = 0;
a.status = 73;
}
} else a.status = 73;
if (73 === a.status) if (a.gzhead.name) {
s = a.pending;
do {
if (a.pending === a.pending_buf_size) {
a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s));
F(t);
s = a.pending;
if (a.pending === a.pending_buf_size) {
l = 1;
break;
}
}
l = a.gzindex < a.gzhead.name.length ? 255 & a.gzhead.name.charCodeAt(a.gzindex++) : 0;
T(a, l);
} while (0 !== l);
a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s));
if (0 === l) {
a.gzindex = 0;
a.status = 91;
}
} else a.status = 91;
if (91 === a.status) if (a.gzhead.comment) {
s = a.pending;
do {
if (a.pending === a.pending_buf_size) {
a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s));
F(t);
s = a.pending;
if (a.pending === a.pending_buf_size) {
l = 1;
break;
}
}
l = a.gzindex < a.gzhead.comment.length ? 255 & a.gzhead.comment.charCodeAt(a.gzindex++) : 0;
T(a, l);
} while (0 !== l);
a.gzhead.hcrc && a.pending > s && (t.adler = o(t.adler, a.pending_buf, a.pending - s, s));
0 === l && (a.status = 103);
} else a.status = 103;
if (103 === a.status) if (a.gzhead.hcrc) {
a.pending + 2 > a.pending_buf_size && F(t);
if (a.pending + 2 <= a.pending_buf_size) {
T(a, 255 & t.adler);
T(a, t.adler >> 8 & 255);
t.adler = 0;
a.status = E;
}
} else a.status = E;
if (0 !== a.pending) {
F(t);
if (0 === t.avail_out) {
a.last_flush = -1;
return d;
}
} else if (0 === t.avail_in && I(e) <= I(n) && e !== f) return Z(t, -5);
if (666 === a.status && 0 !== t.avail_in) return Z(t, -5);
if (0 !== t.avail_in || 0 !== a.lookahead || e !== h && 666 !== a.status) {
var _ = 2 === a.strategy ? V(a, e) : 3 === a.strategy ? W(a, e) : i[a.level].func(a, e);
_ !== O && _ !== N || (a.status = 666);
if (_ === C || _ === O) {
0 === t.avail_out && (a.last_flush = -1);
return d;
}
if (_ === R) {
if (1 === e) r._tr_align(a); else if (5 !== e) {
r._tr_stored_block(a, 0, 0, !1);
if (3 === e) {
D(a.head);
if (0 === a.lookahead) {
a.strstart = 0;
a.block_start = 0;
a.insert = 0;
}
}
}
F(t);
if (0 === t.avail_out) {
a.last_flush = -1;
return d;
}
}
}
if (e !== f) return d;
if (a.wrap <= 0) return 1;
if (2 === a.wrap) {
T(a, 255 & t.adler);
T(a, t.adler >> 8 & 255);
T(a, t.adler >> 16 & 255);
T(a, t.adler >> 24 & 255);
T(a, 255 & t.total_in);
T(a, t.total_in >> 8 & 255);
T(a, t.total_in >> 16 & 255);
T(a, t.total_in >> 24 & 255);
} else {
j(a, t.adler >>> 16);
j(a, 65535 & t.adler);
}
F(t);
a.wrap > 0 && (a.wrap = -a.wrap);
return 0 !== a.pending ? d : 1;
};
n.deflateEnd = function(t) {
var e;
if (!t || !t.state) return u;
if ((e = t.state.status) !== A && 69 !== e && 73 !== e && 91 !== e && 103 !== e && e !== E && 666 !== e) return Z(t, u);
t.state = null;
return e === E ? Z(t, -3) : d;
};
n.deflateSetDictionary = function(t, e) {
var n, i, r, o, l, h, f, c, _ = e.length;
if (!t || !t.state) return u;
if (2 === (o = (n = t.state).wrap) || 1 === o && n.status !== A || n.lookahead) return u;
1 === o && (t.adler = s(t.adler, e, _, 0));
n.wrap = 0;
if (_ >= n.w_size) {
if (0 === o) {
D(n.head);
n.strstart = 0;
n.block_start = 0;
n.insert = 0;
}
c = new a.Buf8(n.w_size);
a.arraySet(c, e, _ - n.w_size, n.w_size, 0);
e = c;
_ = n.w_size;
}
l = t.avail_in;
h = t.next_in;
f = t.input;
t.avail_in = _;
t.next_in = 0;
t.input = e;
M(n);
for (;n.lookahead >= z; ) {
i = n.strstart;
r = n.lookahead - (z - 1);
do {
n.ins_h = (n.ins_h << n.hash_shift ^ n.window[i + z - 1]) & n.hash_mask;
n.prev[i & n.w_mask] = n.head[n.ins_h];
n.head[n.ins_h] = i;
i++;
} while (--r);
n.strstart = i;
n.lookahead = z - 1;
M(n);
}
n.strstart += n.lookahead;
n.block_start = n.strstart;
n.insert = n.lookahead;
n.lookahead = 0;
n.match_length = n.prev_length = z - 1;
n.match_available = 0;
t.next_in = h;
t.input = f;
t.avail_in = l;
n.wrap = o;
return d;
};
n.deflateInfo = "pako deflate (from Nodeca project)";
}, {
"../utils/common": 1,
"./adler32": 3,
"./crc32": 4,
"./messages": 6,
"./trees": 7
} ],
6: [ function(t, e) {
e.exports = {
2: "need dictionary",
1: "stream end",
0: "",
"-1": "file error",
"-2": "stream error",
"-3": "data error",
"-4": "insufficient memory",
"-5": "buffer error",
"-6": "incompatible version"
};
}, {} ],
7: [ function(t, e, n) {
var i = t("../utils/common"), a = 0, r = 1;
function s(t) {
for (var e = t.length; --e >= 0; ) t[e] = 0;
}
var o = 0, l = 29, h = 256, f = h + 1 + l, d = 30, u = 19, c = 2 * f + 1, _ = 15, p = 16, g = 7, m = 256, b = 16, w = 17, v = 18, k = [ 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0 ], y = [ 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13 ], x = [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 7 ], z = [ 16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15 ], S = new Array(2 * (f + 2));
s(S);
var B = new Array(2 * d);
s(B);
var A = new Array(512);
s(A);
var E = new Array(256);
s(E);
var C = new Array(l);
s(C);
var R, O, N, Z = new Array(d);
s(Z);
function I(t, e, n, i, a) {
this.static_tree = t;
this.extra_bits = e;
this.extra_base = n;
this.elems = i;
this.max_length = a;
this.has_stree = t && t.length;
}
function D(t, e) {
this.dyn_tree = t;
this.max_code = 0;
this.stat_desc = e;
}
function F(t) {
return t < 256 ? A[t] : A[256 + (t >>> 7)];
}
function U(t, e) {
t.pending_buf[t.pending++] = 255 & e;
t.pending_buf[t.pending++] = e >>> 8 & 255;
}
function T(t, e, n) {
if (t.bi_valid > p - n) {
t.bi_buf |= e << t.bi_valid & 65535;
U(t, t.bi_buf);
t.bi_buf = e >> p - t.bi_valid;
t.bi_valid += n - p;
} else {
t.bi_buf |= e << t.bi_valid & 65535;
t.bi_valid += n;
}
}
function j(t, e, n) {
T(t, n[2 * e], n[2 * e + 1]);
}
function H(t, e) {
var n = 0;
do {
n |= 1 & t;
t >>>= 1;
n <<= 1;
} while (--e > 0);
return n >>> 1;
}
function L(t) {
if (16 === t.bi_valid) {
U(t, t.bi_buf);
t.bi_buf = 0;
t.bi_valid = 0;
} else if (t.bi_valid >= 8) {
t.pending_buf[t.pending++] = 255 & t.bi_buf;
t.bi_buf >>= 8;
t.bi_valid -= 8;
}
}
function M(t, e) {
var n, i, a, r, s, o, l = e.dyn_tree, h = e.max_code, f = e.stat_desc.static_tree, d = e.stat_desc.has_stree, u = e.stat_desc.extra_bits, p = e.stat_desc.extra_base, g = e.stat_desc.max_length, m = 0;
for (r = 0; r <= _; r++) t.bl_count[r] = 0;
l[2 * t.heap[t.heap_max] + 1] = 0;
for (n = t.heap_max + 1; n < c; n++) {
if ((r = l[2 * l[2 * (i = t.heap[n]) + 1] + 1] + 1) > g) {
r = g;
m++;
}
l[2 * i + 1] = r;
if (!(i > h)) {
t.bl_count[r]++;
s = 0;
i >= p && (s = u[i - p]);
o = l[2 * i];
t.opt_len += o * (r + s);
d && (t.static_len += o * (f[2 * i + 1] + s));
}
}
if (0 !== m) {
do {
r = g - 1;
for (;0 === t.bl_count[r]; ) r--;
t.bl_count[r]--;
t.bl_count[r + 1] += 2;
t.bl_count[g]--;
m -= 2;
} while (m > 0);
for (r = g; 0 !== r; r--) {
i = t.bl_count[r];
for (;0 !== i; ) if (!((a = t.heap[--n]) > h)) {
if (l[2 * a + 1] !== r) {
t.opt_len += (r - l[2 * a + 1]) * l[2 * a];
l[2 * a + 1] = r;
}
i--;
}
}
}
}
function P(t, e, n) {
var i, a, r = new Array(_ + 1), s = 0;
for (i = 1; i <= _; i++) r[i] = s = s + n[i - 1] << 1;
for (a = 0; a <= e; a++) {
var o = t[2 * a + 1];
0 !== o && (t[2 * a] = H(r[o]++, o));
}
}
function K() {
var t, e, n, i, a, r = new Array(_ + 1);
n = 0;
for (i = 0; i < l - 1; i++) {
C[i] = n;
for (t = 0; t < 1 << k[i]; t++) E[n++] = i;
}
E[n - 1] = i;
a = 0;
for (i = 0; i < 16; i++) {
Z[i] = a;
for (t = 0; t < 1 << y[i]; t++) A[a++] = i;
}
a >>= 7;
for (;i < d; i++) {
Z[i] = a << 7;
for (t = 0; t < 1 << y[i] - 7; t++) A[256 + a++] = i;
}
for (e = 0; e <= _; e++) r[e] = 0;
t = 0;
for (;t <= 143; ) {
S[2 * t + 1] = 8;
t++;
r[8]++;
}
for (;t <= 255; ) {
S[2 * t + 1] = 9;
t++;
r[9]++;
}
for (;t <= 279; ) {
S[2 * t + 1] = 7;
t++;
r[7]++;
}
for (;t <= 287; ) {
S[2 * t + 1] = 8;
t++;
r[8]++;
}
P(S, f + 1, r);
for (t = 0; t < d; t++) {
B[2 * t + 1] = 5;
B[2 * t] = H(t, 5);
}
R = new I(S, k, h + 1, f, _);
O = new I(B, y, 0, d, _);
N = new I(new Array(0), x, 0, u, g);
}
function W(t) {
var e;
for (e = 0; e < f; e++) t.dyn_ltree[2 * e] = 0;
for (e = 0; e < d; e++) t.dyn_dtree[2 * e] = 0;
for (e = 0; e < u; e++) t.bl_tree[2 * e] = 0;
t.dyn_ltree[2 * m] = 1;
t.opt_len = t.static_len = 0;
t.last_lit = t.matches = 0;
}
function V(t) {
t.bi_valid > 8 ? U(t, t.bi_buf) : t.bi_valid > 0 && (t.pending_buf[t.pending++] = t.bi_buf);
t.bi_buf = 0;
t.bi_valid = 0;
}
function q(t, e, n, a) {
V(t);
if (a) {
U(t, n);
U(t, ~n);
}
i.arraySet(t.pending_buf, t.window, e, n, t.pending);
t.pending += n;
}
function Y(t, e, n, i) {
var a = 2 * e, r = 2 * n;
return t[a] < t[r] || t[a] === t[r] && i[e] <= i[n];
}
function G(t, e, n) {
for (var i = t.heap[n], a = n << 1; a <= t.heap_len; ) {
a < t.heap_len && Y(e, t.heap[a + 1], t.heap[a], t.depth) && a++;
if (Y(e, i, t.heap[a], t.depth)) break;
t.heap[n] = t.heap[a];
n = a;
a <<= 1;
}
t.heap[n] = i;
}
function J(t, e, n) {
var i, a, r, s, o = 0;
if (0 !== t.last_lit) do {
i = t.pending_buf[t.d_buf + 2 * o] << 8 | t.pending_buf[t.d_buf + 2 * o + 1];
a = t.pending_buf[t.l_buf + o];
o++;
if (0 === i) j(t, a, e); else {
j(t, (r = E[a]) + h + 1, e);
0 !== (s = k[r]) && T(t, a -= C[r], s);
j(t, r = F(--i), n);
0 !== (s = y[r]) && T(t, i -= Z[r], s);
}
} while (o < t.last_lit);
j(t, m, e);
}
function X(t, e) {
var n, i, a, r = e.dyn_tree, s = e.stat_desc.static_tree, o = e.stat_desc.has_stree, l = e.stat_desc.elems, h = -1;
t.heap_len = 0;
t.heap_max = c;
for (n = 0; n < l; n++) if (0 !== r[2 * n]) {
t.heap[++t.heap_len] = h = n;
t.depth[n] = 0;
} else r[2 * n + 1] = 0;
for (;t.heap_len < 2; ) {
r[2 * (a = t.heap[++t.heap_len] = h < 2 ? ++h : 0)] = 1;
t.depth[a] = 0;
t.opt_len--;
o && (t.static_len -= s[2 * a + 1]);
}
e.max_code = h;
for (n = t.heap_len >> 1; n >= 1; n--) G(t, r, n);
a = l;
do {
n = t.heap[1];
t.heap[1] = t.heap[t.heap_len--];
G(t, r, 1);
i = t.heap[1];
t.heap[--t.heap_max] = n;
t.heap[--t.heap_max] = i;
r[2 * a] = r[2 * n] + r[2 * i];
t.depth[a] = (t.depth[n] >= t.depth[i] ? t.depth[n] : t.depth[i]) + 1;
r[2 * n + 1] = r[2 * i + 1] = a;
t.heap[1] = a++;
G(t, r, 1);
} while (t.heap_len >= 2);
t.heap[--t.heap_max] = t.heap[1];
M(t, e);
P(r, h, t.bl_count);
}
function Q(t, e, n) {
var i, a, r = -1, s = e[1], o = 0, l = 7, h = 4;
if (0 === s) {
l = 138;
h = 3;
}
e[2 * (n + 1) + 1] = 65535;
for (i = 0; i <= n; i++) {
a = s;
s = e[2 * (i + 1) + 1];
if (!(++o < l && a === s)) {
if (o < h) t.bl_tree[2 * a] += o; else if (0 !== a) {
a !== r && t.bl_tree[2 * a]++;
t.bl_tree[2 * b]++;
} else o <= 10 ? t.bl_tree[2 * w]++ : t.bl_tree[2 * v]++;
o = 0;
r = a;
if (0 === s) {
l = 138;
h = 3;
} else if (a === s) {
l = 6;
h = 3;
} else {
l = 7;
h = 4;
}
}
}
}
function $(t, e, n) {
var i, a, r = -1, s = e[1], o = 0, l = 7, h = 4;
if (0 === s) {
l = 138;
h = 3;
}
for (i = 0; i <= n; i++) {
a = s;
s = e[2 * (i + 1) + 1];
if (!(++o < l && a === s)) {
if (o < h) do {
j(t, a, t.bl_tree);
} while (0 != --o); else if (0 !== a) {
if (a !== r) {
j(t, a, t.bl_tree);
o--;
}
j(t, b, t.bl_tree);
T(t, o - 3, 2);
} else if (o <= 10) {
j(t, w, t.bl_tree);
T(t, o - 3, 3);
} else {
j(t, v, t.bl_tree);
T(t, o - 11, 7);
}
o = 0;
r = a;
if (0 === s) {
l = 138;
h = 3;
} else if (a === s) {
l = 6;
h = 3;
} else {
l = 7;
h = 4;
}
}
}
}
function tt(t) {
var e;
Q(t, t.dyn_ltree, t.l_desc.max_code);
Q(t, t.dyn_dtree, t.d_desc.max_code);
X(t, t.bl_desc);
for (e = u - 1; e >= 3 && 0 === t.bl_tree[2 * z[e] + 1]; e--) ;
t.opt_len += 14 + 3 * (e + 1);
return e;
}
function et(t, e, n, i) {
var a;
T(t, e - 257, 5);
T(t, n - 1, 5);
T(t, i - 4, 4);
for (a = 0; a < i; a++) T(t, t.bl_tree[2 * z[a] + 1], 3);
$(t, t.dyn_ltree, e - 1);
$(t, t.dyn_dtree, n - 1);
}
function nt(t) {
var e, n = 4093624447;
for (e = 0; e <= 31; e++, n >>>= 1) if (1 & n && 0 !== t.dyn_ltree[2 * e]) return a;
if (0 !== t.dyn_ltree[18] || 0 !== t.dyn_ltree[20] || 0 !== t.dyn_ltree[26]) return r;
for (e = 32; e < h; e++) if (0 !== t.dyn_ltree[2 * e]) return r;
return a;
}
var it = !1;
function at(t, e, n, i) {
T(t, (o << 1) + (i ? 1 : 0), 3);
q(t, e, n, !0);
}
n._tr_init = function(t) {
if (!it) {
K();
it = !0;
}
t.l_desc = new D(t.dyn_ltree, R);
t.d_desc = new D(t.dyn_dtree, O);
t.bl_desc = new D(t.bl_tree, N);
t.bi_buf = 0;
t.bi_valid = 0;
W(t);
};
n._tr_stored_block = at;
n._tr_flush_block = function(t, e, n, i) {
var a, r, s = 0;
if (t.level > 0) {
2 === t.strm.data_type && (t.strm.data_type = nt(t));
X(t, t.l_desc);
X(t, t.d_desc);
s = tt(t);
a = t.opt_len + 3 + 7 >>> 3;
(r = t.static_len + 3 + 7 >>> 3) <= a && (a = r);
} else a = r = n + 5;
if (n + 4 <= a && -1 !== e) at(t, e, n, i); else if (4 === t.strategy || r === a) {
T(t, 2 + (i ? 1 : 0), 3);
J(t, S, B);
} else {
T(t, 4 + (i ? 1 : 0), 3);
et(t, t.l_desc.max_code + 1, t.d_desc.max_code + 1, s + 1);
J(t, t.dyn_ltree, t.dyn_dtree);
}
W(t);
i && V(t);
};
n._tr_tally = function(t, e, n) {
t.pending_buf[t.d_buf + 2 * t.last_lit] = e >>> 8 & 255;
t.pending_buf[t.d_buf + 2 * t.last_lit + 1] = 255 & e;
t.pending_buf[t.l_buf + t.last_lit] = 255 & n;
t.last_lit++;
if (0 === e) t.dyn_ltree[2 * n]++; else {
t.matches++;
e--;
t.dyn_ltree[2 * (E[n] + h + 1)]++;
t.dyn_dtree[2 * F(e)]++;
}
return t.last_lit === t.lit_bufsize - 1;
};
n._tr_align = function(t) {
T(t, 2, 3);
j(t, m, S);
L(t);
};
}, {
"../utils/common": 1
} ],
8: [ function(t, e) {
e.exports = function() {
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
};
}, {} ],
"/lib/deflate.js": [ function(t, e, n) {
var i = t("./zlib/deflate"), a = t("./utils/common"), r = t("./utils/strings"), s = t("./zlib/messages"), o = t("./zlib/zstream"), l = Object.prototype.toString, h = 0, f = -1, d = 0, u = 8;
function c(t) {
if (!(this instanceof c)) return new c(t);
this.options = a.assign({
level: f,
method: u,
chunkSize: 16384,
windowBits: 15,
memLevel: 8,
strategy: d,
to: ""
}, t || {});
var e = this.options;
e.raw && e.windowBits > 0 ? e.windowBits = -e.windowBits : e.gzip && e.windowBits > 0 && e.windowBits < 16 && (e.windowBits += 16);
this.err = 0;
this.msg = "";
this.ended = !1;
this.chunks = [];
this.strm = new o();
this.strm.avail_out = 0;
var n = i.deflateInit2(this.strm, e.level, e.method, e.windowBits, e.memLevel, e.strategy);
if (n !== h) throw new Error(s[n]);
e.header && i.deflateSetHeader(this.strm, e.header);
if (e.dictionary) {
var _;
_ = "string" == typeof e.dictionary ? r.string2buf(e.dictionary) : "[object ArrayBuffer]" === l.call(e.dictionary) ? new Uint8Array(e.dictionary) : e.dictionary;
if ((n = i.deflateSetDictionary(this.strm, _)) !== h) throw new Error(s[n]);
this._dict_set = !0;
}
}
c.prototype.push = function(t, e) {
var n, s, o = this.strm, f = this.options.chunkSize;
if (this.ended) return !1;
s = e === ~~e ? e : !0 === e ? 4 : 0;
"string" == typeof t ? o.input = r.string2buf(t) : "[object ArrayBuffer]" === l.call(t) ? o.input = new Uint8Array(t) : o.input = t;
o.next_in = 0;
o.avail_in = o.input.length;
do {
if (0 === o.avail_out) {
o.output = new a.Buf8(f);
o.next_out = 0;
o.avail_out = f;
}
if (1 !== (n = i.deflate(o, s)) && n !== h) {
this.onEnd(n);
this.ended = !0;
return !1;
}
0 !== o.avail_out && (0 !== o.avail_in || 4 !== s && 2 !== s) || ("string" === this.options.to ? this.onData(r.buf2binstring(a.shrinkBuf(o.output, o.next_out))) : this.onData(a.shrinkBuf(o.output, o.next_out)));
} while ((o.avail_in > 0 || 0 === o.avail_out) && 1 !== n);
if (4 === s) {
n = i.deflateEnd(this.strm);
this.onEnd(n);
this.ended = !0;
return n === h;
}
if (2 === s) {
this.onEnd(h);
o.avail_out = 0;
return !0;
}
return !0;
};
c.prototype.onData = function(t) {
this.chunks.push(t);
};
c.prototype.onEnd = function(t) {
t === h && ("string" === this.options.to ? this.result = this.chunks.join("") : this.result = a.flattenChunks(this.chunks));
this.chunks = [];
this.err = t;
this.msg = this.strm.msg;
};
function _(t, e) {
var n = new c(e);
n.push(t, !0);
if (n.err) throw n.msg || s[n.err];
return n.result;
}
n.Deflate = c;
n.deflate = _;
n.deflateRaw = function(t, e) {
(e = e || {}).raw = !0;
return _(t, e);
};
n.gzip = function(t, e) {
(e = e || {}).gzip = !0;
return _(t, e);
};
}, {
"./utils/common": 1,
"./utils/strings": 2,
"./zlib/deflate": 5,
"./zlib/messages": 6,
"./zlib/zstream": 8
} ]
}, {}, [])("/lib/deflate.js");
});
cc._RF.pop();
}).call(this, "undefined" != typeof global ? global : "undefined" != typeof self ? self : "undefined" != typeof window ? window : {});
}, {
"../utils/common": void 0,
"./adler32": void 0,
"./common": void 0,
"./crc32": void 0,
"./messages": void 0,
"./trees": void 0,
"./utils/common": void 0,
"./utils/strings": void 0,
"./zlib/deflate": void 0,
"./zlib/messages": void 0,
"./zlib/zstream": void 0
} ],
"pako_inflate.min": [ function(t, e, n) {
(function(i) {
"use strict";
cc._RF.push(e, "bc7b93IyVpEyqy2/BQHZEZP", "pako_inflate.min");
!function(t) {
"object" == typeof n && "undefined" != typeof e ? e.exports = t() : "function" == typeof define && define.amd ? define([], t) : ("undefined" != typeof window ? window : "undefined" != typeof i ? i : "undefined" != typeof self ? self : this).pako = t();
}(function() {
return function e(n, i, a) {
function r(o, l) {
if (!i[o]) {
if (!n[o]) {
var h = "function" == typeof t && t;
if (!l && h) return h(o, !0);
if (s) return s(o, !0);
var f = new Error("Cannot find module '" + o + "'");
throw f.code = "MODULE_NOT_FOUND", f;
}
var d = i[o] = {
exports: {}
};
n[o][0].call(d.exports, function(t) {
return r(n[o][1][t] || t);
}, d, d.exports, e, n, i, a);
}
return i[o].exports;
}
for (var s = "function" == typeof t && t, o = 0; o < a.length; o++) r(a[o]);
return r;
}({
1: [ function(t, e, n) {
var i = "undefined" != typeof Uint8Array && "undefined" != typeof Uint16Array && "undefined" != typeof Int32Array;
n.assign = function(t) {
for (var e, n, i = Array.prototype.slice.call(arguments, 1); i.length; ) {
var a = i.shift();
if (a) {
if ("object" != typeof a) throw new TypeError(a + "must be non-object");
for (var r in a) e = a, n = r, Object.prototype.hasOwnProperty.call(e, n) && (t[r] = a[r]);
}
}
return t;
}, n.shrinkBuf = function(t, e) {
return t.length === e ? t : t.subarray ? t.subarray(0, e) : (t.length = e, t);
};
var a = {
arraySet: function(t, e, n, i, a) {
if (e.subarray && t.subarray) t.set(e.subarray(n, n + i), a); else for (var r = 0; r < i; r++) t[a + r] = e[n + r];
},
flattenChunks: function(t) {
var e, n, i, a, r, s;
for (e = i = 0, n = t.length; e < n; e++) i += t[e].length;
for (s = new Uint8Array(i), e = a = 0, n = t.length; e < n; e++) r = t[e], s.set(r, a), 
a += r.length;
return s;
}
}, r = {
arraySet: function(t, e, n, i, a) {
for (var r = 0; r < i; r++) t[a + r] = e[n + r];
},
flattenChunks: function(t) {
return [].concat.apply([], t);
}
};
n.setTyped = function(t) {
t ? (n.Buf8 = Uint8Array, n.Buf16 = Uint16Array, n.Buf32 = Int32Array, n.assign(n, a)) : (n.Buf8 = Array, 
n.Buf16 = Array, n.Buf32 = Array, n.assign(n, r));
}, n.setTyped(i);
}, {} ],
2: [ function(t, e, n) {
var i = t("./common"), a = !0, r = !0;
try {
String.fromCharCode.apply(null, [ 0 ]);
} catch (t) {
a = !1;
}
try {
String.fromCharCode.apply(null, new Uint8Array(1));
} catch (t) {
r = !1;
}
for (var s = new i.Buf8(256), o = 0; o < 256; o++) s[o] = 252 <= o ? 6 : 248 <= o ? 5 : 240 <= o ? 4 : 224 <= o ? 3 : 192 <= o ? 2 : 1;
function l(t, e) {
if (e < 65534 && (t.subarray && r || !t.subarray && a)) return String.fromCharCode.apply(null, i.shrinkBuf(t, e));
for (var n = "", s = 0; s < e; s++) n += String.fromCharCode(t[s]);
return n;
}
s[254] = s[254] = 1, n.string2buf = function(t) {
var e, n, a, r, s, o = t.length, l = 0;
for (r = 0; r < o; r++) 55296 == (64512 & (n = t.charCodeAt(r))) && r + 1 < o && 56320 == (64512 & (a = t.charCodeAt(r + 1))) && (n = 65536 + (n - 55296 << 10) + (a - 56320), 
r++), l += n < 128 ? 1 : n < 2048 ? 2 : n < 65536 ? 3 : 4;
for (e = new i.Buf8(l), r = s = 0; s < l; r++) 55296 == (64512 & (n = t.charCodeAt(r))) && r + 1 < o && 56320 == (64512 & (a = t.charCodeAt(r + 1))) && (n = 65536 + (n - 55296 << 10) + (a - 56320), 
r++), n < 128 ? e[s++] = n : (n < 2048 ? e[s++] = 192 | n >>> 6 : (n < 65536 ? e[s++] = 224 | n >>> 12 : (e[s++] = 240 | n >>> 18, 
e[s++] = 128 | n >>> 12 & 63), e[s++] = 128 | n >>> 6 & 63), e[s++] = 128 | 63 & n);
return e;
}, n.buf2binstring = function(t) {
return l(t, t.length);
}, n.binstring2buf = function(t) {
for (var e = new i.Buf8(t.length), n = 0, a = e.length; n < a; n++) e[n] = t.charCodeAt(n);
return e;
}, n.buf2string = function(t, e) {
var n, i, a, r, o = e || t.length, h = new Array(2 * o);
for (n = i = 0; n < o; ) if ((a = t[n++]) < 128) h[i++] = a; else if (4 < (r = s[a])) h[i++] = 65533, 
n += r - 1; else {
for (a &= 2 === r ? 31 : 3 === r ? 15 : 7; 1 < r && n < o; ) a = a << 6 | 63 & t[n++], 
r--;
1 < r ? h[i++] = 65533 : a < 65536 ? h[i++] = a : (a -= 65536, h[i++] = 55296 | a >> 10 & 1023, 
h[i++] = 56320 | 1023 & a);
}
return l(h, i);
}, n.utf8border = function(t, e) {
var n;
for ((e = e || t.length) > t.length && (e = t.length), n = e - 1; 0 <= n && 128 == (192 & t[n]); ) n--;
return n < 0 ? e : 0 === n ? e : n + s[t[n]] > e ? n : e;
};
}, {
"./common": 1
} ],
3: [ function(t, e) {
e.exports = function(t, e, n, i) {
for (var a = 65535 & t | 0, r = t >>> 16 & 65535 | 0, s = 0; 0 !== n; ) {
for (n -= s = 2e3 < n ? 2e3 : n; r = r + (a = a + e[i++] | 0) | 0, --s; ) ;
a %= 65521, r %= 65521;
}
return a | r << 16 | 0;
};
}, {} ],
4: [ function(t, e) {
e.exports = {
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
}, {} ],
5: [ function(t, e) {
var n = function() {
for (var t, e = [], n = 0; n < 256; n++) {
t = n;
for (var i = 0; i < 8; i++) t = 1 & t ? 3988292384 ^ t >>> 1 : t >>> 1;
e[n] = t;
}
return e;
}();
e.exports = function(t, e, i, a) {
var r = n, s = a + i;
t ^= -1;
for (var o = a; o < s; o++) t = t >>> 8 ^ r[255 & (t ^ e[o])];
return -1 ^ t;
};
}, {} ],
6: [ function(t, e) {
e.exports = function() {
this.text = 0, this.time = 0, this.xflags = 0, this.os = 0, this.extra = null, this.extra_len = 0, 
this.name = "", this.comment = "", this.hcrc = 0, this.done = !1;
};
}, {} ],
7: [ function(t, e) {
e.exports = function(t, e) {
var n, i, a, r, s, o, l, h, f, d, u, c, _, p, g, m, b, w, v, k, y, x, z, S, B;
n = t.state, i = t.next_in, S = t.input, a = i + (t.avail_in - 5), r = t.next_out, 
B = t.output, s = r - (e - t.avail_out), o = r + (t.avail_out - 257), l = n.dmax, 
h = n.wsize, f = n.whave, d = n.wnext, u = n.window, c = n.hold, _ = n.bits, p = n.lencode, 
g = n.distcode, m = (1 << n.lenbits) - 1, b = (1 << n.distbits) - 1;
t: do {
_ < 15 && (c += S[i++] << _, _ += 8, c += S[i++] << _, _ += 8), w = p[c & m];
e: for (;;) {
if (c >>>= v = w >>> 24, _ -= v, 0 == (v = w >>> 16 & 255)) B[r++] = 65535 & w; else {
if (!(16 & v)) {
if (0 == (64 & v)) {
w = p[(65535 & w) + (c & (1 << v) - 1)];
continue e;
}
if (32 & v) {
n.mode = 12;
break t;
}
t.msg = "invalid literal/length code", n.mode = 30;
break t;
}
k = 65535 & w, (v &= 15) && (_ < v && (c += S[i++] << _, _ += 8), k += c & (1 << v) - 1, 
c >>>= v, _ -= v), _ < 15 && (c += S[i++] << _, _ += 8, c += S[i++] << _, _ += 8), 
w = g[c & b];
n: for (;;) {
if (c >>>= v = w >>> 24, _ -= v, !(16 & (v = w >>> 16 & 255))) {
if (0 == (64 & v)) {
w = g[(65535 & w) + (c & (1 << v) - 1)];
continue n;
}
t.msg = "invalid distance code", n.mode = 30;
break t;
}
if (y = 65535 & w, _ < (v &= 15) && (c += S[i++] << _, (_ += 8) < v && (c += S[i++] << _, 
_ += 8)), l < (y += c & (1 << v) - 1)) {
t.msg = "invalid distance too far back", n.mode = 30;
break t;
}
if (c >>>= v, _ -= v, (v = r - s) < y) {
if (f < (v = y - v) && n.sane) {
t.msg = "invalid distance too far back", n.mode = 30;
break t;
}
if (z = u, (x = 0) === d) {
if (x += h - v, v < k) {
for (k -= v; B[r++] = u[x++], --v; ) ;
x = r - y, z = B;
}
} else if (d < v) {
if (x += h + d - v, (v -= d) < k) {
for (k -= v; B[r++] = u[x++], --v; ) ;
if (x = 0, d < k) {
for (k -= v = d; B[r++] = u[x++], --v; ) ;
x = r - y, z = B;
}
}
} else if (x += d - v, v < k) {
for (k -= v; B[r++] = u[x++], --v; ) ;
x = r - y, z = B;
}
for (;2 < k; ) B[r++] = z[x++], B[r++] = z[x++], B[r++] = z[x++], k -= 3;
k && (B[r++] = z[x++], 1 < k && (B[r++] = z[x++]));
} else {
for (x = r - y; B[r++] = B[x++], B[r++] = B[x++], B[r++] = B[x++], 2 < (k -= 3); ) ;
k && (B[r++] = B[x++], 1 < k && (B[r++] = B[x++]));
}
break;
}
}
break;
}
} while (i < a && r < o);
i -= k = _ >> 3, c &= (1 << (_ -= k << 3)) - 1, t.next_in = i, t.next_out = r, t.avail_in = i < a ? a - i + 5 : 5 - (i - a), 
t.avail_out = r < o ? o - r + 257 : 257 - (r - o), n.hold = c, n.bits = _;
};
}, {} ],
8: [ function(t, e, n) {
var i = t("../utils/common"), a = t("./adler32"), r = t("./crc32"), s = t("./inffast"), o = t("./inftrees"), l = 1, h = 2, f = 0, d = -2, u = 1, c = 852, _ = 592;
function p(t) {
return (t >>> 24 & 255) + (t >>> 8 & 65280) + ((65280 & t) << 8) + ((255 & t) << 24);
}
function g() {
this.mode = 0, this.last = !1, this.wrap = 0, this.havedict = !1, this.flags = 0, 
this.dmax = 0, this.check = 0, this.total = 0, this.head = null, this.wbits = 0, 
this.wsize = 0, this.whave = 0, this.wnext = 0, this.window = null, this.hold = 0, 
this.bits = 0, this.length = 0, this.offset = 0, this.extra = 0, this.lencode = null, 
this.distcode = null, this.lenbits = 0, this.distbits = 0, this.ncode = 0, this.nlen = 0, 
this.ndist = 0, this.have = 0, this.next = null, this.lens = new i.Buf16(320), this.work = new i.Buf16(288), 
this.lendyn = null, this.distdyn = null, this.sane = 0, this.back = 0, this.was = 0;
}
function m(t) {
var e;
return t && t.state ? (e = t.state, t.total_in = t.total_out = e.total = 0, t.msg = "", 
e.wrap && (t.adler = 1 & e.wrap), e.mode = u, e.last = 0, e.havedict = 0, e.dmax = 32768, 
e.head = null, e.hold = 0, e.bits = 0, e.lencode = e.lendyn = new i.Buf32(c), e.distcode = e.distdyn = new i.Buf32(_), 
e.sane = 1, e.back = -1, f) : d;
}
function b(t) {
var e;
return t && t.state ? ((e = t.state).wsize = 0, e.whave = 0, e.wnext = 0, m(t)) : d;
}
function w(t, e) {
var n, i;
return t && t.state ? (i = t.state, e < 0 ? (n = 0, e = -e) : (n = 1 + (e >> 4), 
e < 48 && (e &= 15)), e && (e < 8 || 15 < e) ? d : (null !== i.window && i.wbits !== e && (i.window = null), 
i.wrap = n, i.wbits = e, b(t))) : d;
}
function v(t, e) {
var n, i;
return t ? (i = new g(), (t.state = i).window = null, (n = w(t, e)) !== f && (t.state = null), 
n) : d;
}
var k, y, x = !0;
function z(t) {
if (x) {
var e;
for (k = new i.Buf32(512), y = new i.Buf32(32), e = 0; e < 144; ) t.lens[e++] = 8;
for (;e < 256; ) t.lens[e++] = 9;
for (;e < 280; ) t.lens[e++] = 7;
for (;e < 288; ) t.lens[e++] = 8;
for (o(l, t.lens, 0, 288, k, 0, t.work, {
bits: 9
}), e = 0; e < 32; ) t.lens[e++] = 5;
o(h, t.lens, 0, 32, y, 0, t.work, {
bits: 5
}), x = !1;
}
t.lencode = k, t.lenbits = 9, t.distcode = y, t.distbits = 5;
}
function S(t, e, n, a) {
var r, s = t.state;
return null === s.window && (s.wsize = 1 << s.wbits, s.wnext = 0, s.whave = 0, s.window = new i.Buf8(s.wsize)), 
a >= s.wsize ? (i.arraySet(s.window, e, n - s.wsize, s.wsize, 0), s.wnext = 0, s.whave = s.wsize) : (a < (r = s.wsize - s.wnext) && (r = a), 
i.arraySet(s.window, e, n - a, r, s.wnext), (a -= r) ? (i.arraySet(s.window, e, n - a, a, 0), 
s.wnext = a, s.whave = s.wsize) : (s.wnext += r, s.wnext === s.wsize && (s.wnext = 0), 
s.whave < s.wsize && (s.whave += r))), 0;
}
n.inflateReset = b, n.inflateReset2 = w, n.inflateResetKeep = m, n.inflateInit = function(t) {
return v(t, 15);
}, n.inflateInit2 = v, n.inflate = function(t, e) {
var n, c, _, g, m, b, w, v, k, y, x, B, A, E, C, R, O, N, Z, I, D, F, U, T, j = 0, H = new i.Buf8(4), L = [ 16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15 ];
if (!t || !t.state || !t.output || !t.input && 0 !== t.avail_in) return d;
12 === (n = t.state).mode && (n.mode = 13), m = t.next_out, _ = t.output, w = t.avail_out, 
g = t.next_in, c = t.input, b = t.avail_in, v = n.hold, k = n.bits, y = b, x = w, 
F = f;
t: for (;;) switch (n.mode) {
case u:
if (0 === n.wrap) {
n.mode = 13;
break;
}
for (;k < 16; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (2 & n.wrap && 35615 === v) {
H[n.check = 0] = 255 & v, H[1] = v >>> 8 & 255, n.check = r(n.check, H, 2, 0), k = v = 0, 
n.mode = 2;
break;
}
if (n.flags = 0, n.head && (n.head.done = !1), !(1 & n.wrap) || (((255 & v) << 8) + (v >> 8)) % 31) {
t.msg = "incorrect header check", n.mode = 30;
break;
}
if (8 != (15 & v)) {
t.msg = "unknown compression method", n.mode = 30;
break;
}
if (k -= 4, D = 8 + (15 & (v >>>= 4)), 0 === n.wbits) n.wbits = D; else if (D > n.wbits) {
t.msg = "invalid window size", n.mode = 30;
break;
}
n.dmax = 1 << D, t.adler = n.check = 1, n.mode = 512 & v ? 10 : 12, k = v = 0;
break;

case 2:
for (;k < 16; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (n.flags = v, 8 != (255 & n.flags)) {
t.msg = "unknown compression method", n.mode = 30;
break;
}
if (57344 & n.flags) {
t.msg = "unknown header flags set", n.mode = 30;
break;
}
n.head && (n.head.text = v >> 8 & 1), 512 & n.flags && (H[0] = 255 & v, H[1] = v >>> 8 & 255, 
n.check = r(n.check, H, 2, 0)), k = v = 0, n.mode = 3;

case 3:
for (;k < 32; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
n.head && (n.head.time = v), 512 & n.flags && (H[0] = 255 & v, H[1] = v >>> 8 & 255, 
H[2] = v >>> 16 & 255, H[3] = v >>> 24 & 255, n.check = r(n.check, H, 4, 0)), k = v = 0, 
n.mode = 4;

case 4:
for (;k < 16; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
n.head && (n.head.xflags = 255 & v, n.head.os = v >> 8), 512 & n.flags && (H[0] = 255 & v, 
H[1] = v >>> 8 & 255, n.check = r(n.check, H, 2, 0)), k = v = 0, n.mode = 5;

case 5:
if (1024 & n.flags) {
for (;k < 16; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
n.length = v, n.head && (n.head.extra_len = v), 512 & n.flags && (H[0] = 255 & v, 
H[1] = v >>> 8 & 255, n.check = r(n.check, H, 2, 0)), k = v = 0;
} else n.head && (n.head.extra = null);
n.mode = 6;

case 6:
if (1024 & n.flags && (b < (B = n.length) && (B = b), B && (n.head && (D = n.head.extra_len - n.length, 
n.head.extra || (n.head.extra = new Array(n.head.extra_len)), i.arraySet(n.head.extra, c, g, B, D)), 
512 & n.flags && (n.check = r(n.check, c, B, g)), b -= B, g += B, n.length -= B), 
n.length)) break t;
n.length = 0, n.mode = 7;

case 7:
if (2048 & n.flags) {
if (0 === b) break t;
for (B = 0; D = c[g + B++], n.head && D && n.length < 65536 && (n.head.name += String.fromCharCode(D)), 
D && B < b; ) ;
if (512 & n.flags && (n.check = r(n.check, c, B, g)), b -= B, g += B, D) break t;
} else n.head && (n.head.name = null);
n.length = 0, n.mode = 8;

case 8:
if (4096 & n.flags) {
if (0 === b) break t;
for (B = 0; D = c[g + B++], n.head && D && n.length < 65536 && (n.head.comment += String.fromCharCode(D)), 
D && B < b; ) ;
if (512 & n.flags && (n.check = r(n.check, c, B, g)), b -= B, g += B, D) break t;
} else n.head && (n.head.comment = null);
n.mode = 9;

case 9:
if (512 & n.flags) {
for (;k < 16; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (v !== (65535 & n.check)) {
t.msg = "header crc mismatch", n.mode = 30;
break;
}
k = v = 0;
}
n.head && (n.head.hcrc = n.flags >> 9 & 1, n.head.done = !0), t.adler = n.check = 0, 
n.mode = 12;
break;

case 10:
for (;k < 32; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
t.adler = n.check = p(v), k = v = 0, n.mode = 11;

case 11:
if (0 === n.havedict) return t.next_out = m, t.avail_out = w, t.next_in = g, t.avail_in = b, 
n.hold = v, n.bits = k, 2;
t.adler = n.check = 1, n.mode = 12;

case 12:
if (5 === e || 6 === e) break t;

case 13:
if (n.last) {
v >>>= 7 & k, k -= 7 & k, n.mode = 27;
break;
}
for (;k < 3; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
switch (n.last = 1 & v, k -= 1, 3 & (v >>>= 1)) {
case 0:
n.mode = 14;
break;

case 1:
if (z(n), n.mode = 20, 6 !== e) break;
v >>>= 2, k -= 2;
break t;

case 2:
n.mode = 17;
break;

case 3:
t.msg = "invalid block type", n.mode = 30;
}
v >>>= 2, k -= 2;
break;

case 14:
for (v >>>= 7 & k, k -= 7 & k; k < 32; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if ((65535 & v) != (v >>> 16 ^ 65535)) {
t.msg = "invalid stored block lengths", n.mode = 30;
break;
}
if (n.length = 65535 & v, k = v = 0, n.mode = 15, 6 === e) break t;

case 15:
n.mode = 16;

case 16:
if (B = n.length) {
if (b < B && (B = b), w < B && (B = w), 0 === B) break t;
i.arraySet(_, c, g, B, m), b -= B, g += B, w -= B, m += B, n.length -= B;
break;
}
n.mode = 12;
break;

case 17:
for (;k < 14; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (n.nlen = 257 + (31 & v), v >>>= 5, k -= 5, n.ndist = 1 + (31 & v), v >>>= 5, 
k -= 5, n.ncode = 4 + (15 & v), v >>>= 4, k -= 4, 286 < n.nlen || 30 < n.ndist) {
t.msg = "too many length or distance symbols", n.mode = 30;
break;
}
n.have = 0, n.mode = 18;

case 18:
for (;n.have < n.ncode; ) {
for (;k < 3; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
n.lens[L[n.have++]] = 7 & v, v >>>= 3, k -= 3;
}
for (;n.have < 19; ) n.lens[L[n.have++]] = 0;
if (n.lencode = n.lendyn, n.lenbits = 7, U = {
bits: n.lenbits
}, F = o(0, n.lens, 0, 19, n.lencode, 0, n.work, U), n.lenbits = U.bits, F) {
t.msg = "invalid code lengths set", n.mode = 30;
break;
}
n.have = 0, n.mode = 19;

case 19:
for (;n.have < n.nlen + n.ndist; ) {
for (;R = (j = n.lencode[v & (1 << n.lenbits) - 1]) >>> 16 & 255, O = 65535 & j, 
!((C = j >>> 24) <= k); ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (O < 16) v >>>= C, k -= C, n.lens[n.have++] = O; else {
if (16 === O) {
for (T = C + 2; k < T; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (v >>>= C, k -= C, 0 === n.have) {
t.msg = "invalid bit length repeat", n.mode = 30;
break;
}
D = n.lens[n.have - 1], B = 3 + (3 & v), v >>>= 2, k -= 2;
} else if (17 === O) {
for (T = C + 3; k < T; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
k -= C, D = 0, B = 3 + (7 & (v >>>= C)), v >>>= 3, k -= 3;
} else {
for (T = C + 7; k < T; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
k -= C, D = 0, B = 11 + (127 & (v >>>= C)), v >>>= 7, k -= 7;
}
if (n.have + B > n.nlen + n.ndist) {
t.msg = "invalid bit length repeat", n.mode = 30;
break;
}
for (;B--; ) n.lens[n.have++] = D;
}
}
if (30 === n.mode) break;
if (0 === n.lens[256]) {
t.msg = "invalid code -- missing end-of-block", n.mode = 30;
break;
}
if (n.lenbits = 9, U = {
bits: n.lenbits
}, F = o(l, n.lens, 0, n.nlen, n.lencode, 0, n.work, U), n.lenbits = U.bits, F) {
t.msg = "invalid literal/lengths set", n.mode = 30;
break;
}
if (n.distbits = 6, n.distcode = n.distdyn, U = {
bits: n.distbits
}, F = o(h, n.lens, n.nlen, n.ndist, n.distcode, 0, n.work, U), n.distbits = U.bits, 
F) {
t.msg = "invalid distances set", n.mode = 30;
break;
}
if (n.mode = 20, 6 === e) break t;

case 20:
n.mode = 21;

case 21:
if (6 <= b && 258 <= w) {
t.next_out = m, t.avail_out = w, t.next_in = g, t.avail_in = b, n.hold = v, n.bits = k, 
s(t, x), m = t.next_out, _ = t.output, w = t.avail_out, g = t.next_in, c = t.input, 
b = t.avail_in, v = n.hold, k = n.bits, 12 === n.mode && (n.back = -1);
break;
}
for (n.back = 0; R = (j = n.lencode[v & (1 << n.lenbits) - 1]) >>> 16 & 255, O = 65535 & j, 
!((C = j >>> 24) <= k); ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (R && 0 == (240 & R)) {
for (N = C, Z = R, I = O; R = (j = n.lencode[I + ((v & (1 << N + Z) - 1) >> N)]) >>> 16 & 255, 
O = 65535 & j, !(N + (C = j >>> 24) <= k); ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
v >>>= N, k -= N, n.back += N;
}
if (v >>>= C, k -= C, n.back += C, n.length = O, 0 === R) {
n.mode = 26;
break;
}
if (32 & R) {
n.back = -1, n.mode = 12;
break;
}
if (64 & R) {
t.msg = "invalid literal/length code", n.mode = 30;
break;
}
n.extra = 15 & R, n.mode = 22;

case 22:
if (n.extra) {
for (T = n.extra; k < T; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
n.length += v & (1 << n.extra) - 1, v >>>= n.extra, k -= n.extra, n.back += n.extra;
}
n.was = n.length, n.mode = 23;

case 23:
for (;R = (j = n.distcode[v & (1 << n.distbits) - 1]) >>> 16 & 255, O = 65535 & j, 
!((C = j >>> 24) <= k); ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (0 == (240 & R)) {
for (N = C, Z = R, I = O; R = (j = n.distcode[I + ((v & (1 << N + Z) - 1) >> N)]) >>> 16 & 255, 
O = 65535 & j, !(N + (C = j >>> 24) <= k); ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
v >>>= N, k -= N, n.back += N;
}
if (v >>>= C, k -= C, n.back += C, 64 & R) {
t.msg = "invalid distance code", n.mode = 30;
break;
}
n.offset = O, n.extra = 15 & R, n.mode = 24;

case 24:
if (n.extra) {
for (T = n.extra; k < T; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
n.offset += v & (1 << n.extra) - 1, v >>>= n.extra, k -= n.extra, n.back += n.extra;
}
if (n.offset > n.dmax) {
t.msg = "invalid distance too far back", n.mode = 30;
break;
}
n.mode = 25;

case 25:
if (0 === w) break t;
if (B = x - w, n.offset > B) {
if ((B = n.offset - B) > n.whave && n.sane) {
t.msg = "invalid distance too far back", n.mode = 30;
break;
}
B > n.wnext ? (B -= n.wnext, A = n.wsize - B) : A = n.wnext - B, B > n.length && (B = n.length), 
E = n.window;
} else E = _, A = m - n.offset, B = n.length;
for (w < B && (B = w), w -= B, n.length -= B; _[m++] = E[A++], --B; ) ;
0 === n.length && (n.mode = 21);
break;

case 26:
if (0 === w) break t;
_[m++] = n.length, w--, n.mode = 21;
break;

case 27:
if (n.wrap) {
for (;k < 32; ) {
if (0 === b) break t;
b--, v |= c[g++] << k, k += 8;
}
if (x -= w, t.total_out += x, n.total += x, x && (t.adler = n.check = n.flags ? r(n.check, _, x, m - x) : a(n.check, _, x, m - x)), 
x = w, (n.flags ? v : p(v)) !== n.check) {
t.msg = "incorrect data check", n.mode = 30;
break;
}
k = v = 0;
}
n.mode = 28;

case 28:
if (n.wrap && n.flags) {
for (;k < 32; ) {
if (0 === b) break t;
b--, v += c[g++] << k, k += 8;
}
if (v !== (4294967295 & n.total)) {
t.msg = "incorrect length check", n.mode = 30;
break;
}
k = v = 0;
}
n.mode = 29;

case 29:
F = 1;
break t;

case 30:
F = -3;
break t;

case 31:
return -4;

case 32:
default:
return d;
}
return t.next_out = m, t.avail_out = w, t.next_in = g, t.avail_in = b, n.hold = v, 
n.bits = k, (n.wsize || x !== t.avail_out && n.mode < 30 && (n.mode < 27 || 4 !== e)) && S(t, t.output, t.next_out, x - t.avail_out) ? (n.mode = 31, 
-4) : (y -= t.avail_in, x -= t.avail_out, t.total_in += y, t.total_out += x, n.total += x, 
n.wrap && x && (t.adler = n.check = n.flags ? r(n.check, _, x, t.next_out - x) : a(n.check, _, x, t.next_out - x)), 
t.data_type = n.bits + (n.last ? 64 : 0) + (12 === n.mode ? 128 : 0) + (20 === n.mode || 15 === n.mode ? 256 : 0), 
(0 === y && 0 === x || 4 === e) && F === f && (F = -5), F);
}, n.inflateEnd = function(t) {
if (!t || !t.state) return d;
var e = t.state;
return e.window && (e.window = null), t.state = null, f;
}, n.inflateGetHeader = function(t, e) {
var n;
return t && t.state ? 0 == (2 & (n = t.state).wrap) ? d : ((n.head = e).done = !1, 
f) : d;
}, n.inflateSetDictionary = function(t, e) {
var n, i = e.length;
return t && t.state ? 0 !== (n = t.state).wrap && 11 !== n.mode ? d : 11 === n.mode && a(1, e, i, 0) !== n.check ? -3 : S(t, e, i, i) ? (n.mode = 31, 
-4) : (n.havedict = 1, f) : d;
}, n.inflateInfo = "pako inflate (from Nodeca project)";
}, {
"../utils/common": 1,
"./adler32": 3,
"./crc32": 5,
"./inffast": 7,
"./inftrees": 9
} ],
9: [ function(t, e) {
var n = t("../utils/common"), i = [ 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31, 35, 43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258, 0, 0 ], a = [ 16, 16, 16, 16, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 16, 72, 78 ], r = [ 1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193, 257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145, 8193, 12289, 16385, 24577, 0, 0 ], s = [ 16, 16, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 64, 64 ];
e.exports = function(t, e, o, l, h, f, d, u) {
var c, _, p, g, m, b, w, v, k, y = u.bits, x = 0, z = 0, S = 0, B = 0, A = 0, E = 0, C = 0, R = 0, O = 0, N = 0, Z = null, I = 0, D = new n.Buf16(16), F = new n.Buf16(16), U = null, T = 0;
for (x = 0; x <= 15; x++) D[x] = 0;
for (z = 0; z < l; z++) D[e[o + z]]++;
for (A = y, B = 15; 1 <= B && 0 === D[B]; B--) ;
if (B < A && (A = B), 0 === B) return h[f++] = 20971520, h[f++] = 20971520, u.bits = 1, 
0;
for (S = 1; S < B && 0 === D[S]; S++) ;
for (A < S && (A = S), x = R = 1; x <= 15; x++) if (R <<= 1, (R -= D[x]) < 0) return -1;
if (0 < R && (0 === t || 1 !== B)) return -1;
for (F[1] = 0, x = 1; x < 15; x++) F[x + 1] = F[x] + D[x];
for (z = 0; z < l; z++) 0 !== e[o + z] && (d[F[e[o + z]]++] = z);
if (0 === t ? (Z = U = d, b = 19) : 1 === t ? (Z = i, I -= 257, U = a, T -= 257, 
b = 256) : (Z = r, U = s, b = -1), x = S, m = f, C = z = N = 0, p = -1, g = (O = 1 << (E = A)) - 1, 
1 === t && 852 < O || 2 === t && 592 < O) return 1;
for (;;) {
for (w = x - C, d[z] < b ? (v = 0, k = d[z]) : d[z] > b ? (v = U[T + d[z]], k = Z[I + d[z]]) : (v = 96, 
k = 0), c = 1 << x - C, S = _ = 1 << E; h[m + (N >> C) + (_ -= c)] = w << 24 | v << 16 | k | 0, 
0 !== _; ) ;
for (c = 1 << x - 1; N & c; ) c >>= 1;
if (0 !== c ? (N &= c - 1, N += c) : N = 0, z++, 0 == --D[x]) {
if (x === B) break;
x = e[o + d[z]];
}
if (A < x && (N & g) !== p) {
for (0 === C && (C = A), m += S, R = 1 << (E = x - C); E + C < B && !((R -= D[E + C]) <= 0); ) E++, 
R <<= 1;
if (O += 1 << E, 1 === t && 852 < O || 2 === t && 592 < O) return 1;
h[p = N & g] = A << 24 | E << 16 | m - f | 0;
}
}
return 0 !== N && (h[m + N] = x - C << 24 | 64 << 16 | 0), u.bits = A, 0;
};
}, {
"../utils/common": 1
} ],
10: [ function(t, e) {
e.exports = {
2: "need dictionary",
1: "stream end",
0: "",
"-1": "file error",
"-2": "stream error",
"-3": "data error",
"-4": "insufficient memory",
"-5": "buffer error",
"-6": "incompatible version"
};
}, {} ],
11: [ function(t, e) {
e.exports = function() {
this.input = null, this.next_in = 0, this.avail_in = 0, this.total_in = 0, this.output = null, 
this.next_out = 0, this.avail_out = 0, this.total_out = 0, this.msg = "", this.state = null, 
this.data_type = 2, this.adler = 0;
};
}, {} ],
"/lib/inflate.js": [ function(t, e, n) {
var i = t("./zlib/inflate"), a = t("./utils/common"), r = t("./utils/strings"), s = t("./zlib/constants"), o = t("./zlib/messages"), l = t("./zlib/zstream"), h = t("./zlib/gzheader"), f = Object.prototype.toString;
function d(t) {
if (!(this instanceof d)) return new d(t);
this.options = a.assign({
chunkSize: 16384,
windowBits: 0,
to: ""
}, t || {});
var e = this.options;
e.raw && 0 <= e.windowBits && e.windowBits < 16 && (e.windowBits = -e.windowBits, 
0 === e.windowBits && (e.windowBits = -15)), !(0 <= e.windowBits && e.windowBits < 16) || t && t.windowBits || (e.windowBits += 32), 
15 < e.windowBits && e.windowBits < 48 && 0 == (15 & e.windowBits) && (e.windowBits |= 15), 
this.err = 0, this.msg = "", this.ended = !1, this.chunks = [], this.strm = new l(), 
this.strm.avail_out = 0;
var n = i.inflateInit2(this.strm, e.windowBits);
if (n !== s.Z_OK) throw new Error(o[n]);
if (this.header = new h(), i.inflateGetHeader(this.strm, this.header), e.dictionary && ("string" == typeof e.dictionary ? e.dictionary = r.string2buf(e.dictionary) : "[object ArrayBuffer]" === f.call(e.dictionary) && (e.dictionary = new Uint8Array(e.dictionary)), 
e.raw && (n = i.inflateSetDictionary(this.strm, e.dictionary)) !== s.Z_OK)) throw new Error(o[n]);
}
function u(t, e) {
var n = new d(e);
if (n.push(t, !0), n.err) throw n.msg || o[n.err];
return n.result;
}
d.prototype.push = function(t, e) {
var n, o, l, h, d, u = this.strm, c = this.options.chunkSize, _ = this.options.dictionary, p = !1;
if (this.ended) return !1;
o = e === ~~e ? e : !0 === e ? s.Z_FINISH : s.Z_NO_FLUSH, "string" == typeof t ? u.input = r.binstring2buf(t) : "[object ArrayBuffer]" === f.call(t) ? u.input = new Uint8Array(t) : u.input = t, 
u.next_in = 0, u.avail_in = u.input.length;
do {
if (0 === u.avail_out && (u.output = new a.Buf8(c), u.next_out = 0, u.avail_out = c), 
(n = i.inflate(u, s.Z_NO_FLUSH)) === s.Z_NEED_DICT && _ && (n = i.inflateSetDictionary(this.strm, _)), 
n === s.Z_BUF_ERROR && !0 === p && (n = s.Z_OK, p = !1), n !== s.Z_STREAM_END && n !== s.Z_OK) return this.onEnd(n), 
!(this.ended = !0);
u.next_out && (0 !== u.avail_out && n !== s.Z_STREAM_END && (0 !== u.avail_in || o !== s.Z_FINISH && o !== s.Z_SYNC_FLUSH) || ("string" === this.options.to ? (l = r.utf8border(u.output, u.next_out), 
h = u.next_out - l, d = r.buf2string(u.output, l), u.next_out = h, u.avail_out = c - h, 
h && a.arraySet(u.output, u.output, l, h, 0), this.onData(d)) : this.onData(a.shrinkBuf(u.output, u.next_out)))), 
0 === u.avail_in && 0 === u.avail_out && (p = !0);
} while ((0 < u.avail_in || 0 === u.avail_out) && n !== s.Z_STREAM_END);
return n === s.Z_STREAM_END && (o = s.Z_FINISH), o === s.Z_FINISH ? (n = i.inflateEnd(this.strm), 
this.onEnd(n), this.ended = !0, n === s.Z_OK) : o !== s.Z_SYNC_FLUSH || (this.onEnd(s.Z_OK), 
!(u.avail_out = 0));
}, d.prototype.onData = function(t) {
this.chunks.push(t);
}, d.prototype.onEnd = function(t) {
t === s.Z_OK && ("string" === this.options.to ? this.result = this.chunks.join("") : this.result = a.flattenChunks(this.chunks)), 
this.chunks = [], this.err = t, this.msg = this.strm.msg;
}, n.Inflate = d, n.inflate = u, n.inflateRaw = function(t, e) {
return (e = e || {}).raw = !0, u(t, e);
}, n.ungzip = u;
}, {
"./utils/common": 1,
"./utils/strings": 2,
"./zlib/constants": 4,
"./zlib/gzheader": 6,
"./zlib/inflate": 8,
"./zlib/messages": 10,
"./zlib/zstream": 11
} ]
}, {}, [])("/lib/inflate.js");
});
cc._RF.pop();
}).call(this, "undefined" != typeof global ? global : "undefined" != typeof self ? self : "undefined" != typeof window ? window : {});
}, {} ],
pako_inflate: [ function(t, e, n) {
(function(i) {
"use strict";
cc._RF.push(e, "7c6679RCvRAj7SyExS8zYgq", "pako_inflate");
(function(t) {
"object" == typeof n && "undefined" != typeof e ? e.exports = t() : "function" == typeof define && define.amd ? define([], t) : ("undefined" != typeof window ? window : "undefined" != typeof i ? i : "undefined" != typeof self ? self : this).pako = t();
})(function() {
return function e(n, i, a) {
function r(o, l) {
if (!i[o]) {
if (!n[o]) {
var h = "function" == typeof t && t;
if (!l && h) return h(o, !0);
if (s) return s(o, !0);
var f = new Error("Cannot find module '" + o + "'");
throw f.code = "MODULE_NOT_FOUND", f;
}
var d = i[o] = {
exports: {}
};
n[o][0].call(d.exports, function(t) {
return r(n[o][1][t] || t);
}, d, d.exports, e, n, i, a);
}
return i[o].exports;
}
for (var s = "function" == typeof t && t, o = 0; o < a.length; o++) r(a[o]);
return r;
}({
1: [ function(t, e, n) {
var i = "undefined" != typeof Uint8Array && "undefined" != typeof Uint16Array && "undefined" != typeof Int32Array;
function a(t, e) {
return Object.prototype.hasOwnProperty.call(t, e);
}
n.assign = function(t) {
for (var e = Array.prototype.slice.call(arguments, 1); e.length; ) {
var n = e.shift();
if (n) {
if ("object" != typeof n) throw new TypeError(n + "must be non-object");
for (var i in n) a(n, i) && (t[i] = n[i]);
}
}
return t;
};
n.shrinkBuf = function(t, e) {
if (t.length === e) return t;
if (t.subarray) return t.subarray(0, e);
t.length = e;
return t;
};
var r = {
arraySet: function(t, e, n, i, a) {
if (e.subarray && t.subarray) t.set(e.subarray(n, n + i), a); else for (var r = 0; r < i; r++) t[a + r] = e[n + r];
},
flattenChunks: function(t) {
var e, n, i, a, r, s;
i = 0;
for (e = 0, n = t.length; e < n; e++) i += t[e].length;
s = new Uint8Array(i);
a = 0;
for (e = 0, n = t.length; e < n; e++) {
r = t[e];
s.set(r, a);
a += r.length;
}
return s;
}
}, s = {
arraySet: function(t, e, n, i, a) {
for (var r = 0; r < i; r++) t[a + r] = e[n + r];
},
flattenChunks: function(t) {
return [].concat.apply([], t);
}
};
n.setTyped = function(t) {
if (t) {
n.Buf8 = Uint8Array;
n.Buf16 = Uint16Array;
n.Buf32 = Int32Array;
n.assign(n, r);
} else {
n.Buf8 = Array;
n.Buf16 = Array;
n.Buf32 = Array;
n.assign(n, s);
}
};
n.setTyped(i);
}, {} ],
2: [ function(t, e, n) {
var i = t("./common"), a = !0, r = !0;
try {
String.fromCharCode.apply(null, [ 0 ]);
} catch (t) {
a = !1;
}
try {
String.fromCharCode.apply(null, new Uint8Array(1));
} catch (t) {
r = !1;
}
for (var s = new i.Buf8(256), o = 0; o < 256; o++) s[o] = o >= 252 ? 6 : o >= 248 ? 5 : o >= 240 ? 4 : o >= 224 ? 3 : o >= 192 ? 2 : 1;
s[254] = s[254] = 1;
n.string2buf = function(t) {
var e, n, a, r, s, o = t.length, l = 0;
for (r = 0; r < o; r++) {
if (55296 == (64512 & (n = t.charCodeAt(r))) && r + 1 < o && 56320 == (64512 & (a = t.charCodeAt(r + 1)))) {
n = 65536 + (n - 55296 << 10) + (a - 56320);
r++;
}
l += n < 128 ? 1 : n < 2048 ? 2 : n < 65536 ? 3 : 4;
}
e = new i.Buf8(l);
for (s = 0, r = 0; s < l; r++) {
if (55296 == (64512 & (n = t.charCodeAt(r))) && r + 1 < o && 56320 == (64512 & (a = t.charCodeAt(r + 1)))) {
n = 65536 + (n - 55296 << 10) + (a - 56320);
r++;
}
if (n < 128) e[s++] = n; else if (n < 2048) {
e[s++] = 192 | n >>> 6;
e[s++] = 128 | 63 & n;
} else if (n < 65536) {
e[s++] = 224 | n >>> 12;
e[s++] = 128 | n >>> 6 & 63;
e[s++] = 128 | 63 & n;
} else {
e[s++] = 240 | n >>> 18;
e[s++] = 128 | n >>> 12 & 63;
e[s++] = 128 | n >>> 6 & 63;
e[s++] = 128 | 63 & n;
}
}
return e;
};
function l(t, e) {
if (e < 65534 && (t.subarray && r || !t.subarray && a)) return String.fromCharCode.apply(null, i.shrinkBuf(t, e));
for (var n = "", s = 0; s < e; s++) n += String.fromCharCode(t[s]);
return n;
}
n.buf2binstring = function(t) {
return l(t, t.length);
};
n.binstring2buf = function(t) {
for (var e = new i.Buf8(t.length), n = 0, a = e.length; n < a; n++) e[n] = t.charCodeAt(n);
return e;
};
n.buf2string = function(t, e) {
var n, i, a, r, o = e || t.length, h = new Array(2 * o);
for (i = 0, n = 0; n < o; ) if ((a = t[n++]) < 128) h[i++] = a; else if ((r = s[a]) > 4) {
h[i++] = 65533;
n += r - 1;
} else {
a &= 2 === r ? 31 : 3 === r ? 15 : 7;
for (;r > 1 && n < o; ) {
a = a << 6 | 63 & t[n++];
r--;
}
if (r > 1) h[i++] = 65533; else if (a < 65536) h[i++] = a; else {
a -= 65536;
h[i++] = 55296 | a >> 10 & 1023;
h[i++] = 56320 | 1023 & a;
}
}
return l(h, i);
};
n.utf8border = function(t, e) {
var n;
(e = e || t.length) > t.length && (e = t.length);
n = e - 1;
for (;n >= 0 && 128 == (192 & t[n]); ) n--;
return n < 0 ? e : 0 === n ? e : n + s[t[n]] > e ? n : e;
};
}, {
"./common": 1
} ],
3: [ function(t, e) {
e.exports = function(t, e, n, i) {
for (var a = 65535 & t | 0, r = t >>> 16 & 65535 | 0, s = 0; 0 !== n; ) {
n -= s = n > 2e3 ? 2e3 : n;
do {
r = r + (a = a + e[i++] | 0) | 0;
} while (--s);
a %= 65521;
r %= 65521;
}
return a | r << 16 | 0;
};
}, {} ],
4: [ function(t, e) {
e.exports = {
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
}, {} ],
5: [ function(t, e) {
var n = function() {
for (var t, e = [], n = 0; n < 256; n++) {
t = n;
for (var i = 0; i < 8; i++) t = 1 & t ? 3988292384 ^ t >>> 1 : t >>> 1;
e[n] = t;
}
return e;
}();
e.exports = function(t, e, i, a) {
var r = n, s = a + i;
t ^= -1;
for (var o = a; o < s; o++) t = t >>> 8 ^ r[255 & (t ^ e[o])];
return -1 ^ t;
};
}, {} ],
6: [ function(t, e) {
e.exports = function() {
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
}, {} ],
7: [ function(t, e) {
e.exports = function(t, e) {
var n, i, a, r, s, o, l, h, f, d, u, c, _, p, g, m, b, w, v, k, y, x, z, S, B;
n = t.state;
i = t.next_in;
S = t.input;
a = i + (t.avail_in - 5);
r = t.next_out;
B = t.output;
s = r - (e - t.avail_out);
o = r + (t.avail_out - 257);
l = n.dmax;
h = n.wsize;
f = n.whave;
d = n.wnext;
u = n.window;
c = n.hold;
_ = n.bits;
p = n.lencode;
g = n.distcode;
m = (1 << n.lenbits) - 1;
b = (1 << n.distbits) - 1;
t: do {
if (_ < 15) {
c += S[i++] << _;
_ += 8;
c += S[i++] << _;
_ += 8;
}
w = p[c & m];
e: for (;;) {
c >>>= v = w >>> 24;
_ -= v;
if (0 == (v = w >>> 16 & 255)) B[r++] = 65535 & w; else {
if (!(16 & v)) {
if (0 == (64 & v)) {
w = p[(65535 & w) + (c & (1 << v) - 1)];
continue e;
}
if (32 & v) {
n.mode = 12;
break t;
}
t.msg = "invalid literal/length code";
n.mode = 30;
break t;
}
k = 65535 & w;
if (v &= 15) {
if (_ < v) {
c += S[i++] << _;
_ += 8;
}
k += c & (1 << v) - 1;
c >>>= v;
_ -= v;
}
if (_ < 15) {
c += S[i++] << _;
_ += 8;
c += S[i++] << _;
_ += 8;
}
w = g[c & b];
n: for (;;) {
c >>>= v = w >>> 24;
_ -= v;
if (!(16 & (v = w >>> 16 & 255))) {
if (0 == (64 & v)) {
w = g[(65535 & w) + (c & (1 << v) - 1)];
continue n;
}
t.msg = "invalid distance code";
n.mode = 30;
break t;
}
y = 65535 & w;
if (_ < (v &= 15)) {
c += S[i++] << _;
if ((_ += 8) < v) {
c += S[i++] << _;
_ += 8;
}
}
if ((y += c & (1 << v) - 1) > l) {
t.msg = "invalid distance too far back";
n.mode = 30;
break t;
}
c >>>= v;
_ -= v;
if (y > (v = r - s)) {
if ((v = y - v) > f && n.sane) {
t.msg = "invalid distance too far back";
n.mode = 30;
break t;
}
x = 0;
z = u;
if (0 === d) {
x += h - v;
if (v < k) {
k -= v;
do {
B[r++] = u[x++];
} while (--v);
x = r - y;
z = B;
}
} else if (d < v) {
x += h + d - v;
if ((v -= d) < k) {
k -= v;
do {
B[r++] = u[x++];
} while (--v);
x = 0;
if (d < k) {
k -= v = d;
do {
B[r++] = u[x++];
} while (--v);
x = r - y;
z = B;
}
}
} else {
x += d - v;
if (v < k) {
k -= v;
do {
B[r++] = u[x++];
} while (--v);
x = r - y;
z = B;
}
}
for (;k > 2; ) {
B[r++] = z[x++];
B[r++] = z[x++];
B[r++] = z[x++];
k -= 3;
}
if (k) {
B[r++] = z[x++];
k > 1 && (B[r++] = z[x++]);
}
} else {
x = r - y;
do {
B[r++] = B[x++];
B[r++] = B[x++];
B[r++] = B[x++];
k -= 3;
} while (k > 2);
if (k) {
B[r++] = B[x++];
k > 1 && (B[r++] = B[x++]);
}
}
break;
}
}
break;
}
} while (i < a && r < o);
i -= k = _ >> 3;
c &= (1 << (_ -= k << 3)) - 1;
t.next_in = i;
t.next_out = r;
t.avail_in = i < a ? a - i + 5 : 5 - (i - a);
t.avail_out = r < o ? o - r + 257 : 257 - (r - o);
n.hold = c;
n.bits = _;
};
}, {} ],
8: [ function(t, e, n) {
var i = t("../utils/common"), a = t("./adler32"), r = t("./crc32"), s = t("./inffast"), o = t("./inftrees"), l = 1, h = 2, f = 0, d = -2, u = 1, c = 852, _ = 592;
function p(t) {
return (t >>> 24 & 255) + (t >>> 8 & 65280) + ((65280 & t) << 8) + ((255 & t) << 24);
}
function g() {
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
this.lens = new i.Buf16(320);
this.work = new i.Buf16(288);
this.lendyn = null;
this.distdyn = null;
this.sane = 0;
this.back = 0;
this.was = 0;
}
function m(t) {
var e;
if (!t || !t.state) return d;
e = t.state;
t.total_in = t.total_out = e.total = 0;
t.msg = "";
e.wrap && (t.adler = 1 & e.wrap);
e.mode = u;
e.last = 0;
e.havedict = 0;
e.dmax = 32768;
e.head = null;
e.hold = 0;
e.bits = 0;
e.lencode = e.lendyn = new i.Buf32(c);
e.distcode = e.distdyn = new i.Buf32(_);
e.sane = 1;
e.back = -1;
return f;
}
function b(t) {
var e;
if (!t || !t.state) return d;
(e = t.state).wsize = 0;
e.whave = 0;
e.wnext = 0;
return m(t);
}
function w(t, e) {
var n, i;
if (!t || !t.state) return d;
i = t.state;
if (e < 0) {
n = 0;
e = -e;
} else {
n = 1 + (e >> 4);
e < 48 && (e &= 15);
}
if (e && (e < 8 || e > 15)) return d;
null !== i.window && i.wbits !== e && (i.window = null);
i.wrap = n;
i.wbits = e;
return b(t);
}
function v(t, e) {
var n, i;
if (!t) return d;
i = new g();
t.state = i;
i.window = null;
(n = w(t, e)) !== f && (t.state = null);
return n;
}
var k, y, x = !0;
function z(t) {
if (x) {
var e;
k = new i.Buf32(512);
y = new i.Buf32(32);
e = 0;
for (;e < 144; ) t.lens[e++] = 8;
for (;e < 256; ) t.lens[e++] = 9;
for (;e < 280; ) t.lens[e++] = 7;
for (;e < 288; ) t.lens[e++] = 8;
o(l, t.lens, 0, 288, k, 0, t.work, {
bits: 9
});
e = 0;
for (;e < 32; ) t.lens[e++] = 5;
o(h, t.lens, 0, 32, y, 0, t.work, {
bits: 5
});
x = !1;
}
t.lencode = k;
t.lenbits = 9;
t.distcode = y;
t.distbits = 5;
}
function S(t, e, n, a) {
var r, s = t.state;
if (null === s.window) {
s.wsize = 1 << s.wbits;
s.wnext = 0;
s.whave = 0;
s.window = new i.Buf8(s.wsize);
}
if (a >= s.wsize) {
i.arraySet(s.window, e, n - s.wsize, s.wsize, 0);
s.wnext = 0;
s.whave = s.wsize;
} else {
(r = s.wsize - s.wnext) > a && (r = a);
i.arraySet(s.window, e, n - a, r, s.wnext);
if (a -= r) {
i.arraySet(s.window, e, n - a, a, 0);
s.wnext = a;
s.whave = s.wsize;
} else {
s.wnext += r;
s.wnext === s.wsize && (s.wnext = 0);
s.whave < s.wsize && (s.whave += r);
}
}
return 0;
}
n.inflateReset = b;
n.inflateReset2 = w;
n.inflateResetKeep = m;
n.inflateInit = function(t) {
return v(t, 15);
};
n.inflateInit2 = v;
n.inflate = function(t, e) {
var n, c, _, g, m, b, w, v, k, y, x, B, A, E, C, R, O, N, Z, I, D, F, U, T, j = 0, H = new i.Buf8(4), L = [ 16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15 ];
if (!t || !t.state || !t.output || !t.input && 0 !== t.avail_in) return d;
12 === (n = t.state).mode && (n.mode = 13);
m = t.next_out;
_ = t.output;
w = t.avail_out;
g = t.next_in;
c = t.input;
b = t.avail_in;
v = n.hold;
k = n.bits;
y = b;
x = w;
F = f;
t: for (;;) switch (n.mode) {
case u:
if (0 === n.wrap) {
n.mode = 13;
break;
}
for (;k < 16; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
if (2 & n.wrap && 35615 === v) {
n.check = 0;
H[0] = 255 & v;
H[1] = v >>> 8 & 255;
n.check = r(n.check, H, 2, 0);
v = 0;
k = 0;
n.mode = 2;
break;
}
n.flags = 0;
n.head && (n.head.done = !1);
if (!(1 & n.wrap) || (((255 & v) << 8) + (v >> 8)) % 31) {
t.msg = "incorrect header check";
n.mode = 30;
break;
}
if (8 != (15 & v)) {
t.msg = "unknown compression method";
n.mode = 30;
break;
}
k -= 4;
D = 8 + (15 & (v >>>= 4));
if (0 === n.wbits) n.wbits = D; else if (D > n.wbits) {
t.msg = "invalid window size";
n.mode = 30;
break;
}
n.dmax = 1 << D;
t.adler = n.check = 1;
n.mode = 512 & v ? 10 : 12;
v = 0;
k = 0;
break;

case 2:
for (;k < 16; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
n.flags = v;
if (8 != (255 & n.flags)) {
t.msg = "unknown compression method";
n.mode = 30;
break;
}
if (57344 & n.flags) {
t.msg = "unknown header flags set";
n.mode = 30;
break;
}
n.head && (n.head.text = v >> 8 & 1);
if (512 & n.flags) {
H[0] = 255 & v;
H[1] = v >>> 8 & 255;
n.check = r(n.check, H, 2, 0);
}
v = 0;
k = 0;
n.mode = 3;

case 3:
for (;k < 32; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
n.head && (n.head.time = v);
if (512 & n.flags) {
H[0] = 255 & v;
H[1] = v >>> 8 & 255;
H[2] = v >>> 16 & 255;
H[3] = v >>> 24 & 255;
n.check = r(n.check, H, 4, 0);
}
v = 0;
k = 0;
n.mode = 4;

case 4:
for (;k < 16; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
if (n.head) {
n.head.xflags = 255 & v;
n.head.os = v >> 8;
}
if (512 & n.flags) {
H[0] = 255 & v;
H[1] = v >>> 8 & 255;
n.check = r(n.check, H, 2, 0);
}
v = 0;
k = 0;
n.mode = 5;

case 5:
if (1024 & n.flags) {
for (;k < 16; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
n.length = v;
n.head && (n.head.extra_len = v);
if (512 & n.flags) {
H[0] = 255 & v;
H[1] = v >>> 8 & 255;
n.check = r(n.check, H, 2, 0);
}
v = 0;
k = 0;
} else n.head && (n.head.extra = null);
n.mode = 6;

case 6:
if (1024 & n.flags) {
(B = n.length) > b && (B = b);
if (B) {
if (n.head) {
D = n.head.extra_len - n.length;
n.head.extra || (n.head.extra = new Array(n.head.extra_len));
i.arraySet(n.head.extra, c, g, B, D);
}
512 & n.flags && (n.check = r(n.check, c, B, g));
b -= B;
g += B;
n.length -= B;
}
if (n.length) break t;
}
n.length = 0;
n.mode = 7;

case 7:
if (2048 & n.flags) {
if (0 === b) break t;
B = 0;
do {
D = c[g + B++];
n.head && D && n.length < 65536 && (n.head.name += String.fromCharCode(D));
} while (D && B < b);
512 & n.flags && (n.check = r(n.check, c, B, g));
b -= B;
g += B;
if (D) break t;
} else n.head && (n.head.name = null);
n.length = 0;
n.mode = 8;

case 8:
if (4096 & n.flags) {
if (0 === b) break t;
B = 0;
do {
D = c[g + B++];
n.head && D && n.length < 65536 && (n.head.comment += String.fromCharCode(D));
} while (D && B < b);
512 & n.flags && (n.check = r(n.check, c, B, g));
b -= B;
g += B;
if (D) break t;
} else n.head && (n.head.comment = null);
n.mode = 9;

case 9:
if (512 & n.flags) {
for (;k < 16; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
if (v !== (65535 & n.check)) {
t.msg = "header crc mismatch";
n.mode = 30;
break;
}
v = 0;
k = 0;
}
if (n.head) {
n.head.hcrc = n.flags >> 9 & 1;
n.head.done = !0;
}
t.adler = n.check = 0;
n.mode = 12;
break;

case 10:
for (;k < 32; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
t.adler = n.check = p(v);
v = 0;
k = 0;
n.mode = 11;

case 11:
if (0 === n.havedict) {
t.next_out = m;
t.avail_out = w;
t.next_in = g;
t.avail_in = b;
n.hold = v;
n.bits = k;
return 2;
}
t.adler = n.check = 1;
n.mode = 12;

case 12:
if (5 === e || 6 === e) break t;

case 13:
if (n.last) {
v >>>= 7 & k;
k -= 7 & k;
n.mode = 27;
break;
}
for (;k < 3; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
n.last = 1 & v;
k -= 1;
switch (3 & (v >>>= 1)) {
case 0:
n.mode = 14;
break;

case 1:
z(n);
n.mode = 20;
if (6 === e) {
v >>>= 2;
k -= 2;
break t;
}
break;

case 2:
n.mode = 17;
break;

case 3:
t.msg = "invalid block type";
n.mode = 30;
}
v >>>= 2;
k -= 2;
break;

case 14:
v >>>= 7 & k;
k -= 7 & k;
for (;k < 32; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
if ((65535 & v) != (v >>> 16 ^ 65535)) {
t.msg = "invalid stored block lengths";
n.mode = 30;
break;
}
n.length = 65535 & v;
v = 0;
k = 0;
n.mode = 15;
if (6 === e) break t;

case 15:
n.mode = 16;

case 16:
if (B = n.length) {
B > b && (B = b);
B > w && (B = w);
if (0 === B) break t;
i.arraySet(_, c, g, B, m);
b -= B;
g += B;
w -= B;
m += B;
n.length -= B;
break;
}
n.mode = 12;
break;

case 17:
for (;k < 14; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
n.nlen = 257 + (31 & v);
v >>>= 5;
k -= 5;
n.ndist = 1 + (31 & v);
v >>>= 5;
k -= 5;
n.ncode = 4 + (15 & v);
v >>>= 4;
k -= 4;
if (n.nlen > 286 || n.ndist > 30) {
t.msg = "too many length or distance symbols";
n.mode = 30;
break;
}
n.have = 0;
n.mode = 18;

case 18:
for (;n.have < n.ncode; ) {
for (;k < 3; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
n.lens[L[n.have++]] = 7 & v;
v >>>= 3;
k -= 3;
}
for (;n.have < 19; ) n.lens[L[n.have++]] = 0;
n.lencode = n.lendyn;
n.lenbits = 7;
U = {
bits: n.lenbits
};
F = o(0, n.lens, 0, 19, n.lencode, 0, n.work, U);
n.lenbits = U.bits;
if (F) {
t.msg = "invalid code lengths set";
n.mode = 30;
break;
}
n.have = 0;
n.mode = 19;

case 19:
for (;n.have < n.nlen + n.ndist; ) {
for (;;) {
R = (j = n.lencode[v & (1 << n.lenbits) - 1]) >>> 16 & 255;
O = 65535 & j;
if ((C = j >>> 24) <= k) break;
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
if (O < 16) {
v >>>= C;
k -= C;
n.lens[n.have++] = O;
} else {
if (16 === O) {
T = C + 2;
for (;k < T; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
v >>>= C;
k -= C;
if (0 === n.have) {
t.msg = "invalid bit length repeat";
n.mode = 30;
break;
}
D = n.lens[n.have - 1];
B = 3 + (3 & v);
v >>>= 2;
k -= 2;
} else if (17 === O) {
T = C + 3;
for (;k < T; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
k -= C;
D = 0;
B = 3 + (7 & (v >>>= C));
v >>>= 3;
k -= 3;
} else {
T = C + 7;
for (;k < T; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
k -= C;
D = 0;
B = 11 + (127 & (v >>>= C));
v >>>= 7;
k -= 7;
}
if (n.have + B > n.nlen + n.ndist) {
t.msg = "invalid bit length repeat";
n.mode = 30;
break;
}
for (;B--; ) n.lens[n.have++] = D;
}
}
if (30 === n.mode) break;
if (0 === n.lens[256]) {
t.msg = "invalid code -- missing end-of-block";
n.mode = 30;
break;
}
n.lenbits = 9;
U = {
bits: n.lenbits
};
F = o(l, n.lens, 0, n.nlen, n.lencode, 0, n.work, U);
n.lenbits = U.bits;
if (F) {
t.msg = "invalid literal/lengths set";
n.mode = 30;
break;
}
n.distbits = 6;
n.distcode = n.distdyn;
U = {
bits: n.distbits
};
F = o(h, n.lens, n.nlen, n.ndist, n.distcode, 0, n.work, U);
n.distbits = U.bits;
if (F) {
t.msg = "invalid distances set";
n.mode = 30;
break;
}
n.mode = 20;
if (6 === e) break t;

case 20:
n.mode = 21;

case 21:
if (b >= 6 && w >= 258) {
t.next_out = m;
t.avail_out = w;
t.next_in = g;
t.avail_in = b;
n.hold = v;
n.bits = k;
s(t, x);
m = t.next_out;
_ = t.output;
w = t.avail_out;
g = t.next_in;
c = t.input;
b = t.avail_in;
v = n.hold;
k = n.bits;
12 === n.mode && (n.back = -1);
break;
}
n.back = 0;
for (;;) {
R = (j = n.lencode[v & (1 << n.lenbits) - 1]) >>> 16 & 255;
O = 65535 & j;
if ((C = j >>> 24) <= k) break;
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
if (R && 0 == (240 & R)) {
N = C;
Z = R;
I = O;
for (;;) {
R = (j = n.lencode[I + ((v & (1 << N + Z) - 1) >> N)]) >>> 16 & 255;
O = 65535 & j;
if (N + (C = j >>> 24) <= k) break;
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
v >>>= N;
k -= N;
n.back += N;
}
v >>>= C;
k -= C;
n.back += C;
n.length = O;
if (0 === R) {
n.mode = 26;
break;
}
if (32 & R) {
n.back = -1;
n.mode = 12;
break;
}
if (64 & R) {
t.msg = "invalid literal/length code";
n.mode = 30;
break;
}
n.extra = 15 & R;
n.mode = 22;

case 22:
if (n.extra) {
T = n.extra;
for (;k < T; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
n.length += v & (1 << n.extra) - 1;
v >>>= n.extra;
k -= n.extra;
n.back += n.extra;
}
n.was = n.length;
n.mode = 23;

case 23:
for (;;) {
R = (j = n.distcode[v & (1 << n.distbits) - 1]) >>> 16 & 255;
O = 65535 & j;
if ((C = j >>> 24) <= k) break;
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
if (0 == (240 & R)) {
N = C;
Z = R;
I = O;
for (;;) {
R = (j = n.distcode[I + ((v & (1 << N + Z) - 1) >> N)]) >>> 16 & 255;
O = 65535 & j;
if (N + (C = j >>> 24) <= k) break;
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
v >>>= N;
k -= N;
n.back += N;
}
v >>>= C;
k -= C;
n.back += C;
if (64 & R) {
t.msg = "invalid distance code";
n.mode = 30;
break;
}
n.offset = O;
n.extra = 15 & R;
n.mode = 24;

case 24:
if (n.extra) {
T = n.extra;
for (;k < T; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
n.offset += v & (1 << n.extra) - 1;
v >>>= n.extra;
k -= n.extra;
n.back += n.extra;
}
if (n.offset > n.dmax) {
t.msg = "invalid distance too far back";
n.mode = 30;
break;
}
n.mode = 25;

case 25:
if (0 === w) break t;
B = x - w;
if (n.offset > B) {
if ((B = n.offset - B) > n.whave && n.sane) {
t.msg = "invalid distance too far back";
n.mode = 30;
break;
}
if (B > n.wnext) {
B -= n.wnext;
A = n.wsize - B;
} else A = n.wnext - B;
B > n.length && (B = n.length);
E = n.window;
} else {
E = _;
A = m - n.offset;
B = n.length;
}
B > w && (B = w);
w -= B;
n.length -= B;
do {
_[m++] = E[A++];
} while (--B);
0 === n.length && (n.mode = 21);
break;

case 26:
if (0 === w) break t;
_[m++] = n.length;
w--;
n.mode = 21;
break;

case 27:
if (n.wrap) {
for (;k < 32; ) {
if (0 === b) break t;
b--;
v |= c[g++] << k;
k += 8;
}
x -= w;
t.total_out += x;
n.total += x;
x && (t.adler = n.check = n.flags ? r(n.check, _, x, m - x) : a(n.check, _, x, m - x));
x = w;
if ((n.flags ? v : p(v)) !== n.check) {
t.msg = "incorrect data check";
n.mode = 30;
break;
}
v = 0;
k = 0;
}
n.mode = 28;

case 28:
if (n.wrap && n.flags) {
for (;k < 32; ) {
if (0 === b) break t;
b--;
v += c[g++] << k;
k += 8;
}
if (v !== (4294967295 & n.total)) {
t.msg = "incorrect length check";
n.mode = 30;
break;
}
v = 0;
k = 0;
}
n.mode = 29;

case 29:
F = 1;
break t;

case 30:
F = -3;
break t;

case 31:
return -4;

case 32:
default:
return d;
}
t.next_out = m;
t.avail_out = w;
t.next_in = g;
t.avail_in = b;
n.hold = v;
n.bits = k;
if ((n.wsize || x !== t.avail_out && n.mode < 30 && (n.mode < 27 || 4 !== e)) && S(t, t.output, t.next_out, x - t.avail_out)) {
n.mode = 31;
return -4;
}
y -= t.avail_in;
x -= t.avail_out;
t.total_in += y;
t.total_out += x;
n.total += x;
n.wrap && x && (t.adler = n.check = n.flags ? r(n.check, _, x, t.next_out - x) : a(n.check, _, x, t.next_out - x));
t.data_type = n.bits + (n.last ? 64 : 0) + (12 === n.mode ? 128 : 0) + (20 === n.mode || 15 === n.mode ? 256 : 0);
(0 === y && 0 === x || 4 === e) && F === f && (F = -5);
return F;
};
n.inflateEnd = function(t) {
if (!t || !t.state) return d;
var e = t.state;
e.window && (e.window = null);
t.state = null;
return f;
};
n.inflateGetHeader = function(t, e) {
var n;
if (!t || !t.state) return d;
if (0 == (2 & (n = t.state).wrap)) return d;
n.head = e;
e.done = !1;
return f;
};
n.inflateSetDictionary = function(t, e) {
var n, i = e.length;
if (!t || !t.state) return d;
if (0 !== (n = t.state).wrap && 11 !== n.mode) return d;
if (11 === n.mode && a(1, e, i, 0) !== n.check) return -3;
if (S(t, e, i, i)) {
n.mode = 31;
return -4;
}
n.havedict = 1;
return f;
};
n.inflateInfo = "pako inflate (from Nodeca project)";
}, {
"../utils/common": 1,
"./adler32": 3,
"./crc32": 5,
"./inffast": 7,
"./inftrees": 9
} ],
9: [ function(t, e) {
var n = t("../utils/common"), i = [ 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31, 35, 43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258, 0, 0 ], a = [ 16, 16, 16, 16, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21, 16, 72, 78 ], r = [ 1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193, 257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145, 8193, 12289, 16385, 24577, 0, 0 ], s = [ 16, 16, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 64, 64 ];
e.exports = function(t, e, o, l, h, f, d, u) {
var c, _, p, g, m, b, w, v, k, y = u.bits, x = 0, z = 0, S = 0, B = 0, A = 0, E = 0, C = 0, R = 0, O = 0, N = 0, Z = null, I = 0, D = new n.Buf16(16), F = new n.Buf16(16), U = null, T = 0;
for (x = 0; x <= 15; x++) D[x] = 0;
for (z = 0; z < l; z++) D[e[o + z]]++;
A = y;
for (B = 15; B >= 1 && 0 === D[B]; B--) ;
A > B && (A = B);
if (0 === B) {
h[f++] = 20971520;
h[f++] = 20971520;
u.bits = 1;
return 0;
}
for (S = 1; S < B && 0 === D[S]; S++) ;
A < S && (A = S);
R = 1;
for (x = 1; x <= 15; x++) {
R <<= 1;
if ((R -= D[x]) < 0) return -1;
}
if (R > 0 && (0 === t || 1 !== B)) return -1;
F[1] = 0;
for (x = 1; x < 15; x++) F[x + 1] = F[x] + D[x];
for (z = 0; z < l; z++) 0 !== e[o + z] && (d[F[e[o + z]]++] = z);
if (0 === t) {
Z = U = d;
b = 19;
} else if (1 === t) {
Z = i;
I -= 257;
U = a;
T -= 257;
b = 256;
} else {
Z = r;
U = s;
b = -1;
}
N = 0;
z = 0;
x = S;
m = f;
E = A;
C = 0;
p = -1;
g = (O = 1 << A) - 1;
if (1 === t && O > 852 || 2 === t && O > 592) return 1;
for (;;) {
w = x - C;
if (d[z] < b) {
v = 0;
k = d[z];
} else if (d[z] > b) {
v = U[T + d[z]];
k = Z[I + d[z]];
} else {
v = 96;
k = 0;
}
c = 1 << x - C;
S = _ = 1 << E;
do {
h[m + (N >> C) + (_ -= c)] = w << 24 | v << 16 | k | 0;
} while (0 !== _);
c = 1 << x - 1;
for (;N & c; ) c >>= 1;
if (0 !== c) {
N &= c - 1;
N += c;
} else N = 0;
z++;
if (0 == --D[x]) {
if (x === B) break;
x = e[o + d[z]];
}
if (x > A && (N & g) !== p) {
0 === C && (C = A);
m += S;
R = 1 << (E = x - C);
for (;E + C < B && !((R -= D[E + C]) <= 0); ) {
E++;
R <<= 1;
}
O += 1 << E;
if (1 === t && O > 852 || 2 === t && O > 592) return 1;
h[p = N & g] = A << 24 | E << 16 | m - f | 0;
}
}
0 !== N && (h[m + N] = x - C << 24 | 64 << 16 | 0);
u.bits = A;
return 0;
};
}, {
"../utils/common": 1
} ],
10: [ function(t, e) {
e.exports = {
2: "need dictionary",
1: "stream end",
0: "",
"-1": "file error",
"-2": "stream error",
"-3": "data error",
"-4": "insufficient memory",
"-5": "buffer error",
"-6": "incompatible version"
};
}, {} ],
11: [ function(t, e) {
e.exports = function() {
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
};
}, {} ],
"/lib/inflate.js": [ function(t, e, n) {
var i = t("./zlib/inflate"), a = t("./utils/common"), r = t("./utils/strings"), s = t("./zlib/constants"), o = t("./zlib/messages"), l = t("./zlib/zstream"), h = t("./zlib/gzheader"), f = Object.prototype.toString;
function d(t) {
if (!(this instanceof d)) return new d(t);
this.options = a.assign({
chunkSize: 16384,
windowBits: 0,
to: ""
}, t || {});
var e = this.options;
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
this.strm = new l();
this.strm.avail_out = 0;
var n = i.inflateInit2(this.strm, e.windowBits);
if (n !== s.Z_OK) throw new Error(o[n]);
this.header = new h();
i.inflateGetHeader(this.strm, this.header);
if (e.dictionary) {
"string" == typeof e.dictionary ? e.dictionary = r.string2buf(e.dictionary) : "[object ArrayBuffer]" === f.call(e.dictionary) && (e.dictionary = new Uint8Array(e.dictionary));
if (e.raw && (n = i.inflateSetDictionary(this.strm, e.dictionary)) !== s.Z_OK) throw new Error(o[n]);
}
}
d.prototype.push = function(t, e) {
var n, o, l, h, d, u = this.strm, c = this.options.chunkSize, _ = this.options.dictionary, p = !1;
if (this.ended) return !1;
o = e === ~~e ? e : !0 === e ? s.Z_FINISH : s.Z_NO_FLUSH;
"string" == typeof t ? u.input = r.binstring2buf(t) : "[object ArrayBuffer]" === f.call(t) ? u.input = new Uint8Array(t) : u.input = t;
u.next_in = 0;
u.avail_in = u.input.length;
do {
if (0 === u.avail_out) {
u.output = new a.Buf8(c);
u.next_out = 0;
u.avail_out = c;
}
(n = i.inflate(u, s.Z_NO_FLUSH)) === s.Z_NEED_DICT && _ && (n = i.inflateSetDictionary(this.strm, _));
if (n === s.Z_BUF_ERROR && !0 === p) {
n = s.Z_OK;
p = !1;
}
if (n !== s.Z_STREAM_END && n !== s.Z_OK) {
this.onEnd(n);
this.ended = !0;
return !1;
}
if (u.next_out && (0 === u.avail_out || n === s.Z_STREAM_END || 0 === u.avail_in && (o === s.Z_FINISH || o === s.Z_SYNC_FLUSH))) if ("string" === this.options.to) {
l = r.utf8border(u.output, u.next_out);
h = u.next_out - l;
d = r.buf2string(u.output, l);
u.next_out = h;
u.avail_out = c - h;
h && a.arraySet(u.output, u.output, l, h, 0);
this.onData(d);
} else this.onData(a.shrinkBuf(u.output, u.next_out));
0 === u.avail_in && 0 === u.avail_out && (p = !0);
} while ((u.avail_in > 0 || 0 === u.avail_out) && n !== s.Z_STREAM_END);
n === s.Z_STREAM_END && (o = s.Z_FINISH);
if (o === s.Z_FINISH) {
n = i.inflateEnd(this.strm);
this.onEnd(n);
this.ended = !0;
return n === s.Z_OK;
}
if (o === s.Z_SYNC_FLUSH) {
this.onEnd(s.Z_OK);
u.avail_out = 0;
return !0;
}
return !0;
};
d.prototype.onData = function(t) {
this.chunks.push(t);
};
d.prototype.onEnd = function(t) {
t === s.Z_OK && ("string" === this.options.to ? this.result = this.chunks.join("") : this.result = a.flattenChunks(this.chunks));
this.chunks = [];
this.err = t;
this.msg = this.strm.msg;
};
function u(t, e) {
var n = new d(e);
n.push(t, !0);
if (n.err) throw n.msg || o[n.err];
return n.result;
}
n.Inflate = d;
n.inflate = u;
n.inflateRaw = function(t, e) {
(e = e || {}).raw = !0;
return u(t, e);
};
n.ungzip = u;
}, {
"./utils/common": 1,
"./utils/strings": 2,
"./zlib/constants": 4,
"./zlib/gzheader": 6,
"./zlib/inflate": 8,
"./zlib/messages": 10,
"./zlib/zstream": 11
} ]
}, {}, [])("/lib/inflate.js");
});
cc._RF.pop();
}).call(this, "undefined" != typeof global ? global : "undefined" != typeof self ? self : "undefined" != typeof window ? window : {});
}, {
"../utils/common": void 0,
"./adler32": void 0,
"./common": void 0,
"./crc32": void 0,
"./inffast": void 0,
"./inftrees": void 0,
"./utils/common": void 0,
"./utils/strings": void 0,
"./zlib/constants": void 0,
"./zlib/gzheader": void 0,
"./zlib/inflate": void 0,
"./zlib/messages": void 0,
"./zlib/zstream": void 0
} ]
}, {}, [ "Cocos2dxDumper", "Cocos2dxNode", "POCO_SDK_VERSION", "Poco", "AbstractDumper", "AbstractNode", "Attributor", "DefaultMatcher", "IScreen", "Selector", "pako.min", "pako_deflate", "pako_deflate.min", "pako_inflate", "pako_inflate.min", "lianyunStart" ]);