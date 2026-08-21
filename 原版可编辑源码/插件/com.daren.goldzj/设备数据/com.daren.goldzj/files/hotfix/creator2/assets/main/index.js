window.__require = function e(t, o, i) {
function n(a, s) {
if (!o[a]) {
if (!t[a]) {
var c = a.split("/");
c = c[c.length - 1];
if (!t[c]) {
var d = "function" == typeof __require && __require;
if (!s && d) return d(c, !0);
if (r) return r(c, !0);
throw new Error("Cannot find module '" + a + "'");
}
a = c;
}
var l = o[a] = {
exports: {}
};
t[a][0].call(l.exports, function(e) {
return n(t[a][1][e] || e);
}, l, l.exports, e, t, o, i);
}
return o[a].exports;
}
for (var r = "function" == typeof __require && __require, a = 0; a < i.length; a++) n(i[a]);
return n;
}({
Start: [ function(e, t, o) {
"use strict";
cc._RF.push(t, "462f1cV6GlJ2YBIiRwFWiL5", "Start");
var i, n = this && this.__decorate || function(e, t, o, i) {
var n, r = arguments.length, a = r < 3 ? t : null === i ? i = Object.getOwnPropertyDescriptor(t, o) : i;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) a = Reflect.decorate(e, t, o, i); else for (var s = e.length - 1; s >= 0; s--) (n = e[s]) && (a = (r < 3 ? n(a) : r > 3 ? n(t, o, a) : n(t, o)) || a);
return r > 3 && a && Object.defineProperty(t, o, a), a;
};
Object.defineProperty(o, "__esModule", {
value: !0
});
const {ccclass: r} = cc._decorator;
let a = i = class extends cc.Component {
onLoad() {
const e = cc.find("Canvas").getComponent(cc.Canvas), t = cc.view.getFrameSize(), o = t.width / t.height;
let n = e.designResolution.width, r = e.designResolution.height;
o > n / r ? n = Math.ceil(r * o) : r = Math.ceil(n / o);
cc.view.setDesignResolutionSize(n, r, cc.view.getResolutionPolicy());
let a = Date.now();
window.un || cc.assetManager.loadRemote(`https://daren.yqcyqp.com/wxgame/minigame/logo/66778801/logo.png?t=${a}`, {
ext: ".png"
}, (e, t) => {
if (e) console.warn(e); else {
const e = cc.find("Canvas").getChildByName("bg").getChildByName("logo"), o = new cc.SpriteFrame(t);
e.getComponent(cc.Sprite).spriteFrame = o;
e.width = o.getRect().width;
e.height = o.getRect().height;
e.active = !0;
}
});
cc.assetManager.loadBundle("scripts_main", () => {
qg.Process.process.getImplByIntf(qg.ILauncher).init();
cc.director.getScene().getChildByName("Canvas").addComponent("AppRootView");
cc.director.getScene().getChildByName("App").addComponent("Main");
a = (Date.now() - a) / 1e3;
i.loadTime = a;
});
this.isZJCardB() && (cc.find("Canvas").getChildByName("bgex").active = !0);
this.adaptBg();
cc.view.on("canvas-resize", () => {
this.adaptBg();
});
}
adaptBg() {
let e = cc.find("Canvas").getChildByName("bg");
this.isZJCardB() && (e = cc.find("Canvas").getChildByName("bgex"));
e.height = cc.view.getCanvasSize().height / cc.view.getScaleY();
e.width = 2340 * e.height / 1080;
}
isZJCardB() {
return window.enterParam && 1 == window.enterParam.cardBGold;
}
};
a.loadTime = 0;
a = i = n([ r ], a);
o.default = a;
cc._RF.pop();
}, {} ],
lianyunStart: [ function(e, t, o) {
"use strict";
cc._RF.push(t, "de5b8VFHHxL+ZVgECBNA5e4", "lianyunStart");
var i = this && this.__decorate || function(e, t, o, i) {
var n, r = arguments.length, a = r < 3 ? t : null === i ? i = Object.getOwnPropertyDescriptor(t, o) : i;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) a = Reflect.decorate(e, t, o, i); else for (var s = e.length - 1; s >= 0; s--) (n = e[s]) && (a = (r < 3 ? n(a) : r > 3 ? n(t, o, a) : n(t, o)) || a);
return r > 3 && a && Object.defineProperty(t, o, a), a;
};
Object.defineProperty(o, "__esModule", {
value: !0
});
const {ccclass: n, property: r} = cc._decorator, a = window.embededCallHost, s = "Creator2Interface.";
let c = class extends cc.Component {
constructor() {
super(...arguments);
this.fakeCoin = 100;
this.label = null;
this.shopItems = [];
this.commonShopItems = [];
this._BBShopItems = [];
this.enterParam = {};
this.onExit = (e, t) => {
console.trace("onExit");
if (cc.sys.isBrowser) {
if (7147 == window.enterParam.areaid) {
this.exitH5QS();
return;
}
window.location.href = "luabridge://CloseHelp.lobby.command";
return;
}
if (window.un) {
this.exitActivity();
return;
}
let o = "";
for (const e in window) window.hasOwnProperty(e) && (o += e + " | ");
if (1 == this.enterParam.cardBGold) {
e = "1";
t = "1";
}
a(`${s}onExit('${e}','${t}')`);
cc.game.end();
};
}
adaptBg() {
const e = cc.find("Canvas").getChildByName("bg");
e.height = cc.view.getCanvasSize().height / cc.view.getScaleY();
e.width = 2340 * e.height / 1080;
}
isCardBGold() {
window.enterParam = this.enterParam;
window.enterParam.onExit = this.onExit.bind(this);
window.enterParam.getShopItems = this.getShopItems.bind(this);
window.enterParam.buyHostShopItem = this.buyHostShopItem.bind(this);
window.enterParam.getMusicVolume = this.getMusicVolume.bind(this);
window.enterParam.getEffectVolume = this.getEffectVolume.bind(this);
window.enterParam.setDefaultVolume = this.setDefaultVolume.bind(this);
window.enterParam.saveShopItemEx = this.saveShopItemEx.bind(this);
window.enterParam.enterLianYunAndroid = this.enterLianYunAndroid.bind(this);
window.enterParam.payH5 = this.payH5.bind(this);
window.enterParam.payBBVip = this.payBBVip.bind(this);
window.enterParam.payQSVip = this.payQSVip.bind(this);
window.enterParam.getH5ShopItems = this.getH5ShopItems.bind(this);
window.enterParam.loadH5ShopItems = this.loadH5ShopItems.bind(this);
window.enterParam.openUrlBB = this.openUrlBB.bind(this);
return 1 == this.enterParam.cardBGold;
}
loadH5ShopItems() {
let e = 1;
7147 == this.enterParam.areaid && (e = 100);
const t = JSON.parse(decodeURIComponent(this.enterParam.diamondList)), o = [];
for (const i of t) o.push({
id: "" + i.id,
name: +i.price * e + "钻石",
price: +i.price,
originalPrice: +i.price,
itemNumber: +i.price,
icon: "",
firstChargeDouble: !1,
product_id: "" + i.id,
product_name: +i.price * e + "钻石",
propid: 9015,
value: +i.price,
realPrice: +i.price,
prop_count: 0
});
this._BBShopItems = o;
}
getH5ShopItems() {
return this._BBShopItems;
}
setDefaultVolume(e) {
a && a(`${s}setDefMusic(${e})`);
}
getMusicVolume() {
if (!a) return 1;
const e = Number(a(`return ${s}getMusicVolume()`));
return Number.isNaN(e) ? 1 : e;
}
getEffectVolume() {
if (!a) return 1;
const e = Number(a(`return ${s}getEffectVolume()`));
return Number.isNaN(e) ? 1 : e;
}
flushStartParams() {
const e = window.location.search.slice(1).split("&");
for (const t of e) {
const e = t.split("=");
2 == e.length && (this.enterParam[e[0]] = e[1]);
}
console.log("enterParam: " + JSON.stringify(this.enterParam));
}
enterLianYunAndroid() {
cc.assetManager.loadBundle("gfplugin", () => {
this.loadLianYun();
});
}
start() {
this.adaptBg();
if (cc.sys.isBrowser) {
this.flushStartParams();
this.isCardBGold();
cc.director.getScene().getChildByName("Start").addComponent("Start");
} else if (window.un) {
this.getUnityCommandLineArgs();
this.isCardBGold();
cc.director.getScene().getChildByName("Start").addComponent("Start");
} else {
this.loadEnterParams();
if (this.isCardBGold()) {
a && this.loadShopItems();
cc.director.getScene().getChildByName("Start").addComponent("Start");
} else {
cc.assetManager.loadBundle("gfplugin", () => {
this.loadLianYun();
});
this.loadShopItems();
this.loadCommonShopItems();
}
}
}
loadEnterParams() {
window.enterParamsCallBack = e => {
console.log("cocos2dx call enterParamsCallBack: " + e);
"object" == typeof e && (e = JSON.stringify(e));
delete window.enterParamsCallBack;
this.enterParam = JSON.parse(e);
return e;
};
a(`${s}loadEnterParams()`);
}
loadShopItems() {
window.ShopItemsCallBack = e => {
console.log("cocos2dx call ShopItemsCallBack: " + e);
"object" == typeof e && (e = JSON.stringify(e));
delete window.ShopItemsCallBack;
this.saveShopItems(e);
return e;
};
a(`${s}getShopItems()`);
}
saveShopItemEx(e) {
var t;
const o = [];
for (const i of e) {
let e = 100 * parseFloat(i.price);
1 == (null === (t = this.enterParam) || void 0 === t ? void 0 : t.cardBGold) && (e = i.price);
(1 == this.enterParam.cardBGold || i.product_id.includes(this.enterParam.areaid)) && o.push({
id: i.product_id,
name: i.product_name,
price: e,
originalPrice: e,
itemNumber: parseFloat(i.value),
icon: "",
firstChargeDouble: !1,
product_id: i.product_id,
product_name: i.product_name,
propid: i.propid,
value: Number(i.value),
realPrice: i.price
});
}
this.shopItems = o;
this.saveShopItemsEx(o);
console.log("ShopItems: " + this.shopItems);
}
saveShopItemsEx(e) {
if (!window.un || this.isCardBGold()) this.commonShopItems = e; else {
const t = [ "100", "300", "600", "1200", "1800", "3000", "6800", "9800", "12800", "19800", "32800", "64800" ], o = [];
for (const i of e) t.includes(i.value.toString()) && o.push(i);
this.commonShopItems = o;
}
}
saveShopItems(e) {
var t;
const o = JSON.parse(e), i = [];
for (const e of o) {
let o = 100 * parseFloat(e.price);
1 == (null === (t = this.enterParam) || void 0 === t ? void 0 : t.cardBGold) && (o = e.price);
i.push({
id: e.productId,
name: e.name,
price: o,
originalPrice: o,
itemNumber: parseFloat(e.value),
icon: "",
firstChargeDouble: !1,
product_id: e.productId,
product_name: e.name,
propid: e.propid,
value: Number(e.value),
realPrice: e.price
});
}
this.shopItems = i;
console.log("ShopItems: " + this.shopItems);
}
loadCommonShopItems() {
window.CommonShopItemsCallBack = e => {
console.log("cocos2dx call CommonShopItemsCallBack: " + e);
"object" == typeof e && (e = JSON.stringify(e));
delete window.CommonShopItemsCallBack;
this.saveCommonShopItems(e);
return e;
};
a(`${s}getCommonShopItems()`);
}
saveCommonShopItems(e) {
const t = JSON.parse(e), o = [];
for (const e of t) {
const t = 100 * parseFloat(e.price);
o.push({
id: e.productId,
name: e.name,
price: t,
originalPrice: e.price,
itemNumber: parseFloat(e.value),
icon: "",
firstChargeDouble: !1,
product_id: e.productId,
product_name: e.name,
propid: e.propid,
value: Number(e.value),
realPrice: e.price
});
}
this.commonShopItems = o;
}
loadLianYun() {
let e = this.node.getComponent("Cocos2xPlugin");
e || (e = this.node.addComponent("Cocos2xPlugin"));
e.setNoUpdate(!0);
this.gfPlugin = e;
const t = {
setMusicVolume: e => {
a && a(`${s}setMusicVolume(${e})`);
},
getMusicVolume: () => this.getMusicVolume(),
setEffectVolume: e => {
a && a(`${s}setEffectVolume(${e})`);
},
getEffectVolume: () => this.getEffectVolume(),
setDefMusic: e => {
a && a(`${s}setDefMusic(${e})`);
}
}, o = {
onBroken: this.onBroken.bind(this),
onRefreshProps: this.onRefreshProps.bind(this),
onRefreshToken: this.onRefreshToken.bind(this),
onExit: this.onExit.bind(this),
onEntered: this.onEntered.bind(this),
getShopItems: this.getShopItems.bind(this),
audioInterface: t
};
this.gfPlugin.Init(10, o, {
lobbyUpdate: e => {
e >= 1 && this.enterLianYun();
},
gameUpdate: () => {},
buyHostShopItem: this.buyHostShopItem.bind(this),
buyCommonShopItem: this.buyCommonShopItem.bind(this)
}, "Arial");
}
getEnterParams() {
const e = new Map();
e.set("channelid", this.enterParam.channelid || "");
e.set("hostid", this.enterParam.hostID || "3");
e.set("identify", this.enterParam.deviceID || "");
e.set("hostSrName", "钻石");
e.set("srsMode", this.enterParam.srsMode);
e.set("isTiShen", this.enterParam.tishen ? 1 : 0);
e.set("paySupportStr", this.enterParam.paySupportStr || "alipay_pay,weixin_pay");
this.enterParam.joinGameID && e.set("joinGame", this.enterParam.joinGameID);
return e;
}
enterLianYun() {
if (this.gfPlugin) {
console.log(this.gfPlugin.GetGameInfo());
this.gfPlugin.EnterGame("lianyun", new Map([ [ 0, this.fakeCoin++ ] ]), 1, 10, new Map(), this.getEnterParams());
}
}
onBroken() {}
onRefreshProps() {
this.gfPlugin.UpdateProps(new Map([ [ 0, this.fakeCoin++ ] ]));
}
onRefreshToken(e) {
if (window.un) {
const t = `{"areaid":${this.enterParam.areaid},"numid":${this.enterParam.numID},"sessionid":"${this.enterParam.jwtToken}"}`;
e(t);
} else {
window.RefreshTokenCallBack = t => {
console.log("cocos2dx call onRefreshToken: " + t);
"object" == typeof t && (t = JSON.stringify(t));
e(t);
delete window.RefreshTokenCallBack;
return "creator2 onRefreshToken";
};
a(`${s}getLianYunToken()`);
}
}
onEntered(e) {
a && a(`${s}onEntered('${e}')`);
}
getShopItems() {
if (window.un && !this.isCardBGold()) {
const e = [ "300", "600", "1800", "3000", "6800", "12800", "32800", "64800" ], t = [];
for (const o of this.shopItems) e.includes(o.value.toString()) && t.push(o);
return t;
}
return this.shopItems;
}
buyHostShopItem(e, t, o, i, n) {
if (window.un) {
let o;
for (let t = 0; t < this.shopItems.length; t++) if (this.shopItems[t].product_id == e) {
o = this.shopItems[t];
break;
}
const r = JSON.parse(t);
r.embed_app_id = this.enterParam.appID;
r.embed_shop = 1;
r.plugin_gold = 1;
if (1 != this.enterParam.cardBGold) {
r.gameid = 0;
r.areaid = this.enterParam.areaid;
r.propid = this.enterParam.diamondid;
r.channelid = this.enterParam.channelid;
r.numid = i || this.enterParam.numID;
r.source = "lianyun_5";
r.script_name = "deliver_award";
r.order_id = "";
r.groupid = this.enterParam.groupID;
r.gifttype = "";
r.to_propsid = "0";
r.create_type = 0;
}
const a = {
order_id: "",
product_id: null == o ? void 0 : o.product_id,
product_name: null == o ? void 0 : o.name,
product_price: null == o ? void 0 : o.realPrice,
product_count: "1",
role_id: i || this.enterParam.numID,
role_name: n || this.enterParam.userID,
role_grade: "",
role_balance: "",
server_id: "",
ext: JSON.stringify(r),
notify_url: "",
is_auto_order: "0"
};
"alipay" == r.payStr ? r.payStr = this.enterParam.aliPay : "wechatPay" == r.payStr && (r.payStr = "weixin_pay");
this.invokeFuncNameandParameters(r.payStr || this.enterParam.aliPay, a);
return !0;
}
window.BuyItemsCallBack = e => {
console.log("cocos2dx call buyHostShopItem: " + e);
"object" == typeof e && (e = JSON.stringify(e));
delete window.ShopItemsCallBack;
if (o) {
const t = JSON.parse(e);
o(200 == t.code, t.info);
}
return e;
};
a(`${s}buyHostShopItem('${e}','${t}')`);
return !0;
}
buyCommonShopItem(e, t, o) {
console.log("buyCommonShopItem", e, t);
const i = this.commonShopItems.find(t => t.price === e);
if (!i) {
console.log("商品不存在", e);
o(!1, "商品不存在");
return !1;
}
this.buyHostShopItem(i.id, t, o);
return !0;
}
invokeFuncNameandParameters(e, t) {
"object" == typeof t && (t = JSON.stringify(t));
console.log("yuhang " + e + "_" + t);
jsb.reflection.callStaticMethod("com.bianfeng.pluginlibrary.RePluginSdk", "invokeFuncNameandParameters", "(Ljava/lang/String;Ljava/lang/String;)V", e, t);
}
exitActivity() {
jsb.reflection.callStaticMethod("org.cocos2dx.javascript.AppActivity", "showMainActivity", "(Ljava/lang/String;)V", "");
}
getUnityCommandLineArgs() {
const e = jsb.reflection.callStaticMethod("org.cocos2dx.javascript.AppActivity", "getUnityCommandLineArgs", "()Ljava/lang/String;");
console.log("yuhang " + e);
this.enterParam = {};
e && (this.enterParam = JSON.parse(e));
}
openUrlBB(e) {
if (cc.sys.isBrowser) {
const t = {
url: e
};
window.location.href = "luabridge://OpenUrlByBrowserByAPP?" + encodeURIComponent(JSON.stringify(t));
} else cc.sys.openURL(e);
}
payH5(e, t, o = 0, i = 0, n = 0) {
if (7147 == window.enterParam.areaid) {
this.payH5QS(e, t, i, o, n);
return;
}
const r = `to_propsid=gift&gameid=${o}`, a = decodeURIComponent(this.enterParam.m_H5Pay);
let s = `userID=${e}&propID=${t}&channelID=${this.enterParam.channelEx}&startcmd=cardgoldcollection&propCard=0`;
r && (s += `&PinCode=${btoa(r)}`);
const c = a + (s = encodeURIComponent(s));
if (cc.sys.isBrowser) {
const e = {
url: c
};
window.location.href = "luabridge://OpenUrlByBrowserByAPP?" + encodeURIComponent(JSON.stringify(e));
} else cc.sys.openURL(c);
}
payBBVip(e) {
if (cc.sys.isBrowser) {
const t = {
url: e
};
window.location.href = "luabridge://OpenUrlVip?" + encodeURIComponent(JSON.stringify(t));
} else cc.sys.openURL(e);
}
payH5QS(e, t, o = 0, i = 0, n = 0) {
let r = 1;
const a = JSON.parse(decodeURIComponent(this.enterParam.diamondList));
for (const e of a) if (e.id == t) {
r = e.price;
break;
}
o && (r = o);
const s = {
method: "Amember.getOrder50",
sesskey: this.enterParam.sesskey,
money: r,
id: t,
type: 7,
isShopMall: this.enterParam.isShopMall,
goldswitch: this.enterParam.goldswitch,
gd_user_id: this.enterParam.account,
gd_area_id: this.enterParam.areaid,
gameid: i,
room_level: n
}, c = decodeURIComponent(this.enterParam.m_H5Pay) + "?api=" + encodeURIComponent(JSON.stringify(s));
cc.sys.isBrowser ? this.openH5QS(c) : cc.sys.openURL(c);
}
payQSVip() {
const e = decodeURIComponent(this.enterParam.vipPropType);
cc.sys.isBrowser ? this.openH5QS(e) : cc.sys.openURL(e);
}
openH5QS(e) {
window.location.href = "buttonclick://customeHost?openURL=" + encodeURIComponent(e);
}
exitH5QS() {
window.location.href = "buttonclick://customeHost?change=default";
}
};
i([ r(cc.Label) ], c.prototype, "label", void 0);
c = i([ n ], c);
o.default = c;
cc._RF.pop();
}, {} ]
}, {}, [ "Start", "lianyunStart" ]);