window.__require = function t(e, i, s) {
function o(n, l) {
if (!i[n]) {
if (!e[n]) {
var _ = n.split("/");
_ = _[_.length - 1];
if (!e[_]) {
var r = "function" == typeof __require && __require;
if (!l && r) return r(_, !0);
if (a) return a(_, !0);
throw new Error("Cannot find module '" + n + "'");
}
n = _;
}
var d = i[n] = {
exports: {}
};
e[n][0].call(d.exports, function(t) {
return o(e[n][1][t] || t);
}, d, d.exports, t, e, i, s);
}
return i[n].exports;
}
for (var a = "function" == typeof __require && __require, n = 0; n < s.length; n++) o(s[n]);
return o;
}({
game_k7star: [ function(t, e) {
"use strict";
cc._RF.push(e, "658548vYjlGDrKZJiNO+LZV", "game_k7star");
var i = window;
window.createlianyun_game_k7star = function() {
if (i.gfenv) var t = gfenv; else t = i;
var e = t.gflianyunfgui, s = t.gameframe, o = t.common, a = {
"./bin/InitGame.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => n
});
var s = i("./bin/gf.js"), o = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let a = class extends s.gf.Bean {
loadBaseGame() {
console.log("initBaseGame");
this.getPlugin(s.gf.IAssetPlugin).loadFguiPackageAsync("common", [ "_Common" ]).then(() => {
console.log("loadFguiPackageAsync finish");
});
console.time("load time GameMain");
this.getImpl(s.gf.IViewPlugin).openView("GameMain");
}
};
o([ s.gf.init ], a.prototype, "loadBaseGame", null);
const n = a = o([ s.gf.entry ], a);
},
"./bin/PlayerInfoManager.js": (t, e, i) => {
i.r(e);
i.d(e, {
PlayerInfoManager: () => n
});
var s = i("./bin/config/GameDefine.js"), o = i("./bin/gf.js"), a = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let n = class extends o.comm.game.iPlayerInfoManager {
constructor() {
super(...arguments);
this.maxPlayerNum = 4;
this.selfSeat = 0;
this._Local2Server = [ 0, 1, 2, 3 ];
this._Server2Local = [ 0, 1, 2, 3 ];
this.gameid = 3e3;
}
initData() {
this.clearData();
}
clearData() {
this.listInfo = [];
this.readyInfo = [];
this.roomStatus = 0;
}
setMaxPlayrtNum(t, e) {
this.maxPlayerNum = t;
this.selfSeat = e;
if (2 == this.maxPlayerNum) if (0 == this.selfSeat) {
this._Local2Server[0] = 0;
this._Local2Server[1] = 3;
this._Local2Server[2] = 2;
this._Local2Server[3] = 1;
this._Server2Local[0] = 0;
this._Server2Local[1] = 3;
this._Server2Local[2] = 2;
this._Server2Local[3] = 1;
} else {
this._Local2Server[0] = 1;
this._Local2Server[1] = 3;
this._Local2Server[2] = 2;
this._Local2Server[3] = 0;
this._Server2Local[0] = 3;
this._Server2Local[1] = 0;
this._Server2Local[2] = 2;
this._Server2Local[3] = 1;
} else if (3 == this.maxPlayerNum) if (0 == this.selfSeat) {
this._Local2Server[0] = 0;
this._Local2Server[1] = 1;
this._Local2Server[2] = 3;
this._Local2Server[3] = 2;
this._Server2Local[0] = 0;
this._Server2Local[1] = 1;
this._Server2Local[2] = 3;
this._Server2Local[3] = 2;
} else if (1 == this.selfSeat) {
this._Local2Server[0] = 1;
this._Local2Server[1] = 2;
this._Local2Server[2] = 3;
this._Local2Server[3] = 0;
this._Server2Local[0] = 3;
this._Server2Local[1] = 0;
this._Server2Local[2] = 1;
this._Server2Local[3] = 2;
} else {
this._Local2Server[0] = 2;
this._Local2Server[1] = 0;
this._Local2Server[2] = 3;
this._Local2Server[3] = 1;
this._Server2Local[0] = 1;
this._Server2Local[1] = 3;
this._Server2Local[2] = 0;
this._Server2Local[3] = 2;
} else for (let t = 0; t < 4; t++) {
const e = (t + this.selfSeat) % this.maxPlayerNum;
this._Local2Server[t] = e;
this._Server2Local[e] = t;
}
}
setPlayerInfos(t) {
this.listInfo = t;
for (let t = 0; t < this.listInfo.length; t++) {
const e = this.listInfo[t];
"object" == typeof e.score && (e.score = e.score.toNumber());
this.dispatch("KW_updateInfo", e, this.seatServer2Local(t));
}
}
onSelfSrChange(t) {
const e = this.getSelfInfo();
if (e) {
e.score = t;
this.dispatch("KW_updateInfo", e, s.SELF_LOCAL_SEAT);
}
}
getInfoByLoaclSeat(t) {
return this.listInfo[this.seatLocal2Server(t)];
}
getInfoByNumid(t) {
for (let e = 0; e < this.listInfo.length; e++) {
let i = this.listInfo[e].userid;
i.indexOf("#") > -1 && (i = Number(i.split("#")[1]));
if (i == t) return this.listInfo[e];
}
}
getSelfInfo() {
return this.listInfo[this.selfSeat];
}
getInfoByClientSeat(t) {
const e = this.seatLocal2Server(t);
return this.listInfo[e];
}
getInfoByServeSeat(t) {
return this.listInfo[t];
}
seatServer2Local(t) {
return t >= 4 || t < 0 ? 255 : this._Server2Local[t];
}
seatLocal2Server(t) {
return t >= 4 || t < 0 ? 255 : this._Local2Server[t];
}
isinFriend() {
return 10 == this.roomMode;
}
isFriendHasStart() {
return !!(this.isPlaying || this.nowPan > 0);
}
isFangZhu() {
return this.selfSeat == this.fangzhuSeat;
}
setreadyInfo(t) {
this.readyInfo = t.concat();
}
isHasReady() {
for (let t = 0; t < this.readyInfo.length; t++) if (this.readyInfo[t] == this.selfSeat) return !0;
return !1;
}
updatePlayerReady() {
this.readyInfo.forEach(t => {
const e = this.seatServer2Local(t);
0 == e ? this.isFriendHasStart() ? this.dispatch("game/changeBtn", {
type: 3
}) : this.isFangZhu() ? this.dispatch("game/changeBtn", {
type: 5
}) : this.dispatch("game/changeBtn", {
type: 6
}) : this.dispatch("game/changeStatus", {
seat: e,
type: 4
});
});
-1 == this.readyInfo.indexOf(this.selfSeat) && this.dispatch("game/changeBtn", {
type: 0
});
}
updatePlayerCharm(t, e) {
this.getInfoByNumid(t);
}
};
a([ o.gf.init ], n.prototype, "initData", null);
a([ o.gf.listen("KW_UpdataUserScore") ], n.prototype, "onSelfSrChange", null);
n = a([ o.gf.module({
name: "PlayerInfoManager",
interface: o.comm.game.iPlayerInfoManager
}) ], n);
},
"./bin/config/CardCode.js": (t, e, i) => {
i.r(e);
i.d(e, {
CardColor: () => s,
CardColor_Same: () => o,
CardValue: () => a,
CardPower: () => n,
CardID: () => l,
strCardValue: () => _,
strCardStringValue: () => r,
strCardColor: () => d,
MyCardsrFullCardColor: () => h,
strCardStringColor: () => c,
ucCardValue: () => g,
ucCardPower: () => u,
ucCardColor: () => m,
COLOR: () => C,
COLOR_SAME: () => p,
VALUE: () => f,
get_num_weight: () => A,
get_num_by_weight: () => S,
get_num_by_serverWeight: () => I,
get_val_by_weight: () => E,
get_num_by_cardVal: () => L,
startCardValue: () => T
});
var s, o, a, n, l;
(function(t) {
t[t.CC_NONE = 0] = "CC_NONE";
t[t.CC_DIAMOND = 1] = "CC_DIAMOND";
t[t.CC_CLUB = 2] = "CC_CLUB";
t[t.CC_HEART = 3] = "CC_HEART";
t[t.CC_SPADE = 4] = "CC_SPADE";
t[t.CC_SJ = 5] = "CC_SJ";
t[t.CC_BJ = 6] = "CC_BJ";
t[t.CC_COUNT = 7] = "CC_COUNT";
})(s || (s = {}));
(function(t) {
t[t.CC_NONE = 0] = "CC_NONE";
t[t.CC_BLACK = 1] = "CC_BLACK";
t[t.CC_RED = 2] = "CC_RED";
})(o || (o = {}));
(function(t) {
t[t.CV_NONE = 0] = "CV_NONE";
t[t.CV_A = 1] = "CV_A";
t[t.CV_2 = 2] = "CV_2";
t[t.CV_3 = 3] = "CV_3";
t[t.CV_4 = 4] = "CV_4";
t[t.CV_5 = 5] = "CV_5";
t[t.CV_6 = 6] = "CV_6";
t[t.CV_7 = 7] = "CV_7";
t[t.CV_8 = 8] = "CV_8";
t[t.CV_9 = 9] = "CV_9";
t[t.CV_10 = 10] = "CV_10";
t[t.CV_J = 11] = "CV_J";
t[t.CV_Q = 12] = "CV_Q";
t[t.CV_K = 13] = "CV_K";
t[t.CV_SJ = 14] = "CV_SJ";
t[t.CV_BJ = 15] = "CV_BJ";
t[t.CV_GOLD = 16] = "CV_GOLD";
t[t.CV_COUNT = 17] = "CV_COUNT";
})(a || (a = {}));
(function(t) {
t[t.CP_NONE = 0] = "CP_NONE";
t[t.CP_2 = 2] = "CP_2";
t[t.CP_3 = 3] = "CP_3";
t[t.CP_4 = 4] = "CP_4";
t[t.CP_5 = 5] = "CP_5";
t[t.CP_6 = 6] = "CP_6";
t[t.CP_7 = 7] = "CP_7";
t[t.CP_8 = 8] = "CP_8";
t[t.CP_9 = 9] = "CP_9";
t[t.CP_10 = 10] = "CP_10";
t[t.CP_J = 11] = "CP_J";
t[t.CP_Q = 12] = "CP_Q";
t[t.CP_K = 13] = "CP_K";
t[t.CP_A = 14] = "CP_A";
t[t.CP_SJ = 16] = "CP_SJ";
t[t.CP_BJ = 17] = "CP_BJ";
t[t.CP_COUNT = 18] = "CP_COUNT";
})(n || (n = {}));
(function(t) {
t[t.CID_NONE = 0] = "CID_NONE";
t[t.CID_DIAMOND_A = 1] = "CID_DIAMOND_A";
t[t.CID_DIAMOND_2 = 2] = "CID_DIAMOND_2";
t[t.CID_DIAMOND_3 = 3] = "CID_DIAMOND_3";
t[t.CID_DIAMOND_4 = 4] = "CID_DIAMOND_4";
t[t.CID_DIAMOND_5 = 5] = "CID_DIAMOND_5";
t[t.CID_DIAMOND_6 = 6] = "CID_DIAMOND_6";
t[t.CID_DIAMOND_7 = 7] = "CID_DIAMOND_7";
t[t.CID_DIAMOND_8 = 8] = "CID_DIAMOND_8";
t[t.CID_DIAMOND_9 = 9] = "CID_DIAMOND_9";
t[t.CID_DIAMOND_10 = 10] = "CID_DIAMOND_10";
t[t.CID_DIAMOND_J = 11] = "CID_DIAMOND_J";
t[t.CID_DIAMOND_Q = 12] = "CID_DIAMOND_Q";
t[t.CID_DIAMOND_K = 13] = "CID_DIAMOND_K";
t[t.CID_CLUB_A = 14] = "CID_CLUB_A";
t[t.CID_CLUB_2 = 15] = "CID_CLUB_2";
t[t.CID_CLUB_3 = 16] = "CID_CLUB_3";
t[t.CID_CLUB_4 = 17] = "CID_CLUB_4";
t[t.CID_CLUB_5 = 18] = "CID_CLUB_5";
t[t.CID_CLUB_6 = 19] = "CID_CLUB_6";
t[t.CID_CLUB_7 = 20] = "CID_CLUB_7";
t[t.CID_CLUB_8 = 21] = "CID_CLUB_8";
t[t.CID_CLUB_9 = 22] = "CID_CLUB_9";
t[t.CID_CLUB_10 = 23] = "CID_CLUB_10";
t[t.CID_CLUB_J = 24] = "CID_CLUB_J";
t[t.CID_CLUB_Q = 25] = "CID_CLUB_Q";
t[t.CID_CLUB_K = 26] = "CID_CLUB_K";
t[t.CID_HEART_A = 27] = "CID_HEART_A";
t[t.CID_HEART_2 = 28] = "CID_HEART_2";
t[t.CID_HEART_3 = 29] = "CID_HEART_3";
t[t.CID_HEART_4 = 30] = "CID_HEART_4";
t[t.CID_HEART_5 = 31] = "CID_HEART_5";
t[t.CID_HEART_6 = 32] = "CID_HEART_6";
t[t.CID_HEART_7 = 33] = "CID_HEART_7";
t[t.CID_HEART_8 = 34] = "CID_HEART_8";
t[t.CID_HEART_9 = 35] = "CID_HEART_9";
t[t.CID_HEART_10 = 36] = "CID_HEART_10";
t[t.CID_HEART_J = 37] = "CID_HEART_J";
t[t.CID_HEART_Q = 38] = "CID_HEART_Q";
t[t.CID_HEART_K = 39] = "CID_HEART_K";
t[t.CID_SPADE_A = 40] = "CID_SPADE_A";
t[t.CID_SPADE_2 = 41] = "CID_SPADE_2";
t[t.CID_SPADE_3 = 42] = "CID_SPADE_3";
t[t.CID_SPADE_4 = 43] = "CID_SPADE_4";
t[t.CID_SPADE_5 = 44] = "CID_SPADE_5";
t[t.CID_SPADE_6 = 45] = "CID_SPADE_6";
t[t.CID_SPADE_7 = 46] = "CID_SPADE_7";
t[t.CID_SPADE_8 = 47] = "CID_SPADE_8";
t[t.CID_SPADE_9 = 48] = "CID_SPADE_9";
t[t.CID_SPADE_10 = 49] = "CID_SPADE_10";
t[t.CID_SPADE_J = 50] = "CID_SPADE_J";
t[t.CID_SPADE_Q = 51] = "CID_SPADE_Q";
t[t.CID_SPADE_K = 52] = "CID_SPADE_K";
t[t.CID_SJ = 53] = "CID_SJ";
t[t.CID_BJ = 54] = "CID_BJ";
t[t.CID_BACK = 55] = "CID_BACK";
t[t.CID_GOLD = 56] = "CID_GOLD";
t[t.CID_GOLD_BUFF = 57] = "CID_GOLD_BUFF";
t[t.CID_COUNT = 58] = "CID_COUNT";
})(l || (l = {}));
const _ = {
0: "牌背",
1: "A",
2: "2",
3: "3",
4: "4",
5: "5",
6: "6",
7: "7",
8: "8",
9: "9",
10: "10",
11: "J",
12: "Q",
13: "K",
14: "小王",
15: "大王"
}, r = {
0: "b",
1: "A",
2: "2",
3: "3",
4: "4",
5: "5",
6: "6",
7: "7",
8: "8",
9: "9",
10: "10",
11: "J",
12: "Q",
13: "K",
14: "F",
15: "Z"
}, d = {
0: "",
1: "方",
2: "梅",
3: "红",
4: "黑"
}, h = {
0: "",
1: "方块",
2: "梅花",
3: "红桃",
4: "黑桃"
}, c = {
0: "",
1: "D",
2: "C",
3: "H",
4: "B"
}, g = [ a.CV_NONE, a.CV_A, a.CV_2, a.CV_3, a.CV_4, a.CV_5, a.CV_6, a.CV_7, a.CV_8, a.CV_9, a.CV_10, a.CV_J, a.CV_Q, a.CV_K, a.CV_A, a.CV_2, a.CV_3, a.CV_4, a.CV_5, a.CV_6, a.CV_7, a.CV_8, a.CV_9, a.CV_10, a.CV_J, a.CV_Q, a.CV_K, a.CV_A, a.CV_2, a.CV_3, a.CV_4, a.CV_5, a.CV_6, a.CV_7, a.CV_8, a.CV_9, a.CV_10, a.CV_J, a.CV_Q, a.CV_K, a.CV_A, a.CV_2, a.CV_3, a.CV_4, a.CV_5, a.CV_6, a.CV_7, a.CV_8, a.CV_9, a.CV_10, a.CV_J, a.CV_Q, a.CV_K, a.CV_SJ, a.CV_BJ, a.CV_NONE, a.CV_GOLD ], u = [ n.CP_NONE, n.CP_A, n.CP_2, n.CP_3, n.CP_4, n.CP_5, n.CP_6, n.CP_7, n.CP_8, n.CP_9, n.CP_10, n.CP_J, n.CP_Q, n.CP_K, n.CP_A, n.CP_2, n.CP_3, n.CP_4, n.CP_5, n.CP_6, n.CP_7, n.CP_8, n.CP_9, n.CP_10, n.CP_J, n.CP_Q, n.CP_K, n.CP_A, n.CP_2, n.CP_3, n.CP_4, n.CP_5, n.CP_6, n.CP_7, n.CP_8, n.CP_9, n.CP_10, n.CP_J, n.CP_Q, n.CP_K, n.CP_A, n.CP_2, n.CP_3, n.CP_4, n.CP_5, n.CP_6, n.CP_7, n.CP_8, n.CP_9, n.CP_10, n.CP_J, n.CP_Q, n.CP_K, n.CP_SJ, n.CP_BJ ], m = [ s.CC_NONE, s.CC_DIAMOND, s.CC_DIAMOND, s.CC_DIAMOND, s.CC_DIAMOND, s.CC_DIAMOND, s.CC_DIAMOND, s.CC_DIAMOND, s.CC_DIAMOND, s.CC_DIAMOND, s.CC_DIAMOND, s.CC_DIAMOND, s.CC_DIAMOND, s.CC_DIAMOND, s.CC_CLUB, s.CC_CLUB, s.CC_CLUB, s.CC_CLUB, s.CC_CLUB, s.CC_CLUB, s.CC_CLUB, s.CC_CLUB, s.CC_CLUB, s.CC_CLUB, s.CC_CLUB, s.CC_CLUB, s.CC_CLUB, s.CC_HEART, s.CC_HEART, s.CC_HEART, s.CC_HEART, s.CC_HEART, s.CC_HEART, s.CC_HEART, s.CC_HEART, s.CC_HEART, s.CC_HEART, s.CC_HEART, s.CC_HEART, s.CC_HEART, s.CC_SPADE, s.CC_SPADE, s.CC_SPADE, s.CC_SPADE, s.CC_SPADE, s.CC_SPADE, s.CC_SPADE, s.CC_SPADE, s.CC_SPADE, s.CC_SPADE, s.CC_SPADE, s.CC_SPADE, s.CC_SPADE, s.CC_SJ, s.CC_BJ ], C = t => t > s.CC_NONE && t < m.length ? m[t] : s.CC_NONE, p = t => {
const e = C(t);
return e == s.CC_DIAMOND || e == s.CC_HEART ? o.CC_RED : e == s.CC_CLUB || e == s.CC_SPADE ? o.CC_BLACK : o.CC_NONE;
}, f = t => t > a.CV_NONE && t < g.length ? g[t] : a.CV_NONE, A = t => t == n.CP_BJ ? 22 : t == n.CP_SJ ? 21 : t == n.CP_2 ? 19 : t, S = t => 22 == t ? n.CP_BJ : 21 == t ? n.CP_SJ : 19 == t ? n.CP_2 : t, I = t => 22 == t ? 16 : 21 == t ? 15 : 19 == t ? 2 : t, E = t => 17 == t ? 16 : 16 == t ? 15 : 15 == t ? 2 : t, L = t => t == a.CV_A ? 14 : t == a.CV_SJ ? 15 : t == a.CV_BJ ? 16 : t == a.CV_GOLD ? 17 : t, T = a.CV_7;
},
"./bin/config/CardConfig.js": (t, e, i) => {
i.r(e);
i.d(e, {
HAND_CARD_CONFIG: () => s,
HU_CARD_CONFIG: () => o,
OUT_CARD_CONFIG: () => a
});
const s = {
0: {
compName: "CardMid",
offsetX: 25,
offsetY: 0,
colMax: 6,
width: 55,
height: 82
},
1: {
compName: "Card",
offsetX: 50,
offsetY: 0,
colMax: 6,
width: 128,
height: 182
},
2: {
compName: "CardMid",
offsetX: 25,
offsetY: 0,
colMax: 6,
width: 55,
height: 82
},
3: {
compName: "CardMid",
offsetX: 25,
offsetY: 0,
colMax: 6,
width: 55,
height: 82
}
}, o = {
0: {
compName: "CardSmall",
offsetX: 20,
offsetY: 30,
colMax: 4,
width: 44,
height: 62
},
1: {
compName: "CardSmall",
offsetX: 20,
offsetY: 30,
colMax: 20,
width: 44,
height: 62
},
2: {
compName: "CardSmall",
offsetX: 20,
offsetY: 30,
colMax: 4,
width: 44,
height: 62
},
3: {
compName: "CardSmall",
offsetX: 20,
offsetY: 30,
colMax: 20,
width: 44,
height: 62
}
}, a = {
0: {
compName: "CardSmall",
offsetX: 20,
offsetY: 0,
colMax: 6,
width: 44,
height: 62
},
1: {
compName: "CardSmall",
offsetX: 20,
offsetY: 0,
colMax: 6,
width: 44,
height: 62
},
2: {
compName: "CardSmall",
offsetX: 20,
offsetY: 0,
colMax: 6,
width: 44,
height: 62
},
3: {
compName: "CardSmall",
offsetX: 20,
offsetY: 0,
colMax: 6,
width: 44,
height: 62
}
};
},
"./bin/config/CardType.js": (t, e, i) => {
i.r(e);
i.d(e, {
ENUM_CARD_TYPE: () => s,
CardTypeStaticHands: () => o,
CardTypeInfo: () => a,
OtherCardTypeInfo: () => n
});
var s;
(function(t) {
t[t.T_None = 0] = "T_None";
t[t.T_6_2 = 1] = "T_6_2";
t[t.T_5_3 = 2] = "T_5_3";
t[t.T_4_4 = 3] = "T_4_4";
t[t.T_2S4_2 = 4] = "T_2S4_2";
t[t.T_4_2_2 = 5] = "T_4_2_2";
t[t.T_2B_5_10 = 111] = "T_2B_5_10";
t[t.T_2B_2_8 = 112] = "T_2B_2_8";
t[t.T_2B_K_X = 113] = "T_2B_K_X";
t[t.T_2B_1_9 = 114] = "T_2B_1_9";
t[t.T_2B_3_J = 115] = "T_2B_3_J";
t[t.T_B4_1_2 = 201] = "T_B4_1_2";
t[t.T_B4_2_3 = 202] = "T_B4_2_3";
t[t.T_B4_4_5 = 203] = "T_B4_4_5";
t[t.T_B4_6_7 = 204] = "T_B4_6_7";
t[t.T_B4_8_9 = 205] = "T_B4_8_9";
t[t.T_B4_9_10 = 206] = "T_B4_9_10";
t[t.T_B4_J_Q = 207] = "T_B4_J_Q";
t[t.T_B4_Q_K = 208] = "T_B4_Q_K";
t[t.T_B5_2_3 = 302] = "T_B5_2_3";
t[t.T_B5_4_5 = 303] = "T_B5_4_5";
t[t.T_B5_6_7 = 304] = "T_B5_6_7";
t[t.T_B5_8_9 = 305] = "T_B5_8_9";
t[t.T_B5_J_Q = 307] = "T_B5_J_Q";
t[t.T_B6_2_3 = 402] = "T_B6_2_3";
t[t.T_B6_4_5 = 403] = "T_B6_4_5";
t[t.T_B6_6_7 = 404] = "T_B6_6_7";
t[t.T_B6_8_9 = 405] = "T_B6_8_9";
t[t.T_B6_J_Q = 407] = "T_B6_J_Q";
t[t.T_B8_A = 521] = "T_B8_A";
t[t.T_B8_2 = 522] = "T_B8_2";
t[t.T_B8_3 = 523] = "T_B8_3";
t[t.T_B8_4 = 524] = "T_B8_4";
t[t.T_B8_5 = 525] = "T_B8_5";
t[t.T_B8_6 = 526] = "T_B8_6";
t[t.T_B8_7 = 527] = "T_B8_7";
t[t.T_B8_8 = 528] = "T_B8_8";
t[t.T_B8_9 = 529] = "T_B8_9";
t[t.T_B8_10 = 530] = "T_B8_10";
t[t.T_B8_J = 531] = "T_B8_J";
t[t.T_B8_Q = 532] = "T_B8_Q";
t[t.T_B8_K = 533] = "T_B8_K";
t[t.TA_0 = 1e4] = "TA_0";
t[t.TA_1 = 10001] = "TA_1";
t[t.TA_2 = 10002] = "TA_2";
t[t.TA_3 = 10003] = "TA_3";
t[t.TA_4 = 10004] = "TA_4";
t[t.TA_5 = 10005] = "TA_5";
t[t.TA_6 = 10006] = "TA_6";
t[t.TA_7 = 10007] = "TA_7";
t[t.TA_8 = 10008] = "TA_8";
t[t.TA_9 = 10009] = "TA_9";
t[t.TA_10 = 10010] = "TA_10";
t[t.TA_11 = 10011] = "TA_11";
t[t.TA_12 = 10012] = "TA_12";
t[t.TA_13 = 10013] = "TA_13";
})(s || (s = {}));
const o = {
[s.T_B8_A]: [ 27, 27, 27, 27, 27, 27, 27, 27 ],
[s.T_B8_2]: [ 28, 28, 28, 28, 28, 28, 28, 28 ],
[s.T_B8_3]: [ 29, 29, 29, 29, 29, 29, 29, 29 ],
[s.T_B8_4]: [ 30, 30, 30, 30, 30, 30, 30, 30 ],
[s.T_B8_5]: [ 31, 31, 31, 31, 31, 31, 31, 31 ],
[s.T_B8_6]: [ 32, 32, 32, 32, 32, 32, 32, 32 ],
[s.T_B8_7]: [ 33, 33, 33, 33, 33, 33, 33, 33 ],
[s.T_B8_8]: [ 34, 34, 34, 34, 34, 34, 34, 34 ],
[s.T_B8_9]: [ 35, 35, 35, 35, 35, 35, 35, 35 ],
[s.T_B8_10]: [ 36, 36, 36, 36, 36, 36, 36, 36 ],
[s.T_B8_J]: [ 37, 37, 37, 37, 37, 37, 37, 37 ],
[s.T_B8_Q]: [ 38, 38, 38, 38, 38, 38, 38, 38 ],
[s.T_B8_K]: [ 39, 39, 39, 39, 39, 39, 39, 39 ],
[s.T_2B_5_10]: [ 31, 31, 31, 31, 36, 36, 36, 36 ],
[s.T_2B_2_8]: [ 28, 28, 28, 28, 34, 34, 34, 34 ],
[s.T_2B_1_9]: [ 27, 27, 27, 27, 32, 32, 32, 32 ],
[s.T_2B_3_J]: [ 27, 27, 27, 27, 29, 29, 29, 29 ],
[s.T_B4_1_2]: [ 39, 39, 39, 39, 27, 27, 27, 27 ],
[s.T_B4_2_3]: [ 28, 28, 28, 28, 29, 29, 29, 29 ],
[s.T_B4_4_5]: [ 30, 30, 30, 30, 31, 31, 31, 31 ],
[s.T_B4_6_7]: [ 32, 32, 32, 32, 33, 33, 33, 33 ],
[s.T_B4_8_9]: [ 34, 34, 34, 34, 35, 35, 35, 35 ],
[s.T_B4_9_10]: [ 35, 35, 35, 35, 36, 36, 36, 36 ],
[s.T_B4_J_Q]: [ 37, 37, 37, 37, 38, 38, 38, 38 ],
[s.T_B4_Q_K]: [ 38, 38, 38, 38, 39, 39, 39, 39 ],
[s.T_B5_2_3]: [ 28, 28, 28, 28, 28, 29, 29, 29 ],
[s.T_B5_4_5]: [ 30, 30, 30, 30, 30, 31, 31, 31 ],
[s.T_B5_6_7]: [ 32, 32, 32, 32, 32, 33, 33, 33 ],
[s.T_B5_8_9]: [ 34, 34, 34, 34, 34, 35, 35, 35 ],
[s.T_B5_J_Q]: [ 37, 37, 37, 37, 37, 38, 38, 38 ],
[s.T_B6_2_3]: [ 28, 28, 28, 28, 28, 28, 29, 29 ],
[s.T_B6_4_5]: [ 30, 30, 30, 30, 30, 30, 31, 31 ],
[s.T_B6_6_7]: [ 32, 32, 32, 32, 32, 32, 33, 33 ],
[s.T_B6_8_9]: [ 34, 34, 34, 34, 34, 34, 35, 35 ],
[s.T_B6_J_Q]: [ 37, 37, 37, 37, 37, 37, 38, 38 ]
}, a = {
[s.T_None]: 0,
[s.T_6_2]: [ "", "六星炸带对子", "liu_2", "", "ui://Game_K7Star_Ani/ani_lansewenzi", "6xingzhaduizi" ],
[s.T_5_3]: [ "", "五星炸带三张", "wu_3", "", "ui://Game_K7Star_Ani/ani_lansewenzi", "5dai3" ],
[s.T_4_4]: [ "", "双炮弹", "zha_2", "", "ui://Game_K7Star_Ani/ani_lansewenzi", "shuangzhadan" ],
[s.T_2S4_2]: [ "", "二连炸", "lianzha_2", "", "ui://Game_K7Star_Ani/ani_lansewenzi", "2lianzha" ],
[s.T_4_2_2]: [ "", "四带两对", "si_2", "", "ui://Game_K7Star_Ani/ani_lansewenzi", "4dai2" ],
[s.T_2B_5_10]: [ "", "五光十色", "wuguangshise", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation9" ],
[s.T_2B_2_8]: [ "", "二八佳人", "erbajiaren", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation10" ],
[s.T_2B_K_X]: [ "", "王权鲲鹏", "wangquankunpeng", "", "ui://Game_K7Star_Ani/jiuzhoubahuang", "animation", "video/cardType/jiuzhoubahuang", !0 ],
[s.T_2B_1_9]: [ "", "六道轮回", "liudaolunhui", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation11" ],
[s.T_2B_3_J]: [ "", "号令三军", "haoling", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation8" ],
[s.T_B4_1_2]: [ "", "一箭双雕", "yijian", "", "ui://Game_K7Star_Ani/ani_lansewenzi", "yijianshuangdiao" ],
[s.T_B4_2_3]: [ "", "春色满园", "chunse", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation6" ],
[s.T_B4_4_5]: [ "", "五湖四海", "wuhu", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation5" ],
[s.T_B4_6_7]: [ "", "骄阳似火", "jiaoyang", "", "ui://Game_K7Star_Ani/ani_erbanianhua", "animation_jiaoyangshihuo" ],
[s.T_B4_8_9]: [ "", "气震八荒", "qizhenbahuang", "", "ui://Game_K7Star_Ani/ani_erbanianhua", "animation_qizhenbahuang3" ],
[s.T_B4_9_10]: [ "", "斗酒诗百篇", "doujiu", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation3" ],
[s.T_B4_J_Q]: [ "", "郎才女貌", "langcainvmao", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation2" ],
[s.T_B4_Q_K]: [ "", "龙凤呈祥", "longfeng", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation1" ],
[s.T_B5_2_3]: [ "", "春色满园", "chunse", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation6" ],
[s.T_B5_4_5]: [ "", "五湖四海", "wuhu", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation5" ],
[s.T_B5_6_7]: [ "", "气震八荒", "qizhenbahuang", "", "ui://Game_K7Star_Ani/ani_erbanianhua", "animation_qizhenbahuang3" ],
[s.T_B5_8_9]: [ "", "斗酒诗百篇", "doujiu", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation3" ],
[s.T_B5_J_Q]: [ "", "郎才女貌", "langcainvmao", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation2" ],
[s.T_B6_2_3]: [ "", "春色满园", "chunse", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation6" ],
[s.T_B6_4_5]: [ "", "五湖四海", "wuhu", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation5" ],
[s.T_B6_6_7]: [ "", "气震八荒", "qizhenbahuang", "", "ui://Game_K7Star_Ani/ani_erbanianhua", "animation_qizhenbahuang3" ],
[s.T_B6_8_9]: [ "", "斗酒诗百篇", "doujiu", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation3" ],
[s.T_B6_J_Q]: [ "", "郎才女貌", "langcainvmao", "", "ui://Game_K7Star_Ani/ani_longfengchengxiang", "animation2" ],
[s.T_B8_A]: [ "", "登峰造极", "dengfengzaoji", "", "ui://Game_K7Star_Ani/dengfengzaoji", "animation", "video/cardType/dengfengzaoji", !0 ],
[s.T_B8_2]: [ "", "凌霄双圣", "linxiao", "", "ui://Game_K7Star_Ani/lingxiaoshuangsheng", "animation", "video/cardType/lingxiaoshuangsheng", !0 ],
[s.T_B8_3]: [ "", "三山五岳", "sanshan", "", "ui://Game_K7Star_Ani/sanshanwuyue", "animation", "video/cardType/sanshanwuyue", !0 ],
[s.T_B8_4]: [ "", "威震四方", "weizhengsifang", "", "ui://Game_K7Star_Ani/weizhengsifang", "animation", "video/cardType/weizhengsifang", !0 ],
[s.T_B8_5]: [ "", "五福临门", "wufu", "", "ui://Game_K7Star_Ani/wufulinmen", "animation", "video/cardType/wufulinmen", !0 ],
[s.T_B8_6]: [ "", "横扫六合", "liuhe", "", "ui://Game_K7Star_Ani/hengsaoliuhe", "animation", "video/cardType/hengsaoliuhe", !0 ],
[s.T_B8_7]: [ "", "七星高照", "qixinggaozhao", "", "ui://Game_K7Star_Ani/qixinggaozhao", "animation", "video/cardType/qixinggaozhao", !0 ],
[s.T_B8_8]: [ "", "八宝福禄", "babaofulu", "", "ui://Game_K7Star_Ani/babaofulu", "animation", "video/cardType/babaofulu", !0 ],
[s.T_B8_9]: [ "", "有凤来仪", "youfenglaiyi", "", "ui://Game_K7Star_Ani/youfenglaiyi", "animation", "video/cardType/youfenglaiyi", !0 ],
[s.T_B8_10]: [ "", "十全十美", "shiquanshimei", "", "ui://Game_K7Star_Ani/shiquanshimei", "animation", "video/cardType/shiquanshimei", !0 ],
[s.T_B8_J]: [ "", "寒江独钓", "hanjiang", "", "ui://Game_K7Star_Ani/hanjiangdudiao", "animation", "video/cardType/hanjiangdudiao", !0 ],
[s.T_B8_Q]: [ "", "国色天香", "guosetianxiang", "", "ui://Game_K7Star_Ani/guosetianxiang", "animation", "video/cardType/guosetianxiang", !0 ],
[s.T_B8_K]: [ "", "圣明君主", "shengmingjunzhu", "", "ui://Game_K7Star_Ani/shengminjunzhu", "animation", "video/cardType/shengminjunzhu", !0 ],
[s.TA_1]: [ "", "孔雀东南飞", "gaolou2", "", "ui://Game_K7Star_Ani/kongquedongnanfei", "animation" ],
[s.TA_2]: [ "", "风花雪月", "gaolou3", "", "ui://Game_K7Star_Ani/fenghuaxueyue", "animation" ],
[s.TA_3]: [ "", "富甲一方", "gaolou4", "", "ui://Game_K7Star_Ani/fujiayifang", "animation" ],
[s.TA_4]: [ "", "众神归位", "gaolou5", "", "ui://Game_K7Star_Ani/zhongshenguiwei", "animation" ],
[s.TA_5]: [ "", "众神归位", "gaolou5", "", "ui://Game_K7Star_Ani/zhongshenguiwei", "animation" ],
[s.TA_6]: [ "", "众神归位", "gaolou5", "", "ui://Game_K7Star_Ani/zhongshenguiwei", "animation" ],
[s.TA_7]: [ "", "众神归位", "gaolou5", "", "ui://Game_K7Star_Ani/zhongshenguiwei", "animation" ],
[s.TA_8]: [ "", "众神归位", "gaolou5", "", "ui://Game_K7Star_Ani/zhongshenguiwei", "animation" ],
[s.TA_9]: [ "", "众神归位", "gaolou5", "", "ui://Game_K7Star_Ani/zhongshenguiwei", "animation" ],
[s.TA_10]: [ "", "众神归位", "gaolou5", "", "ui://Game_K7Star_Ani/zhongshenguiwei", "animation" ],
[s.TA_11]: [ "", "众神归位", "gaolou5", "", "ui://Game_K7Star_Ani/zhongshenguiwei", "animation" ],
[s.TA_12]: [ "", "众神归位", "gaolou5", "", "ui://Game_K7Star_Ani/zhongshenguiwei", "animation" ],
[s.TA_13]: [ "", "众神归位", "gaolou5", "", "ui://Game_K7Star_Ani/zhongshenguiwei", "animation" ]
}, n = {
LIANJI_2: "ui://Game_K7Star_Ani/Jiuxinglanyue",
LIANJI_3: "ui://Game_K7Star_Ani/Bainiaochaofeng",
LIANJI_4: "ui://Game_K7Star_Ani/Tianwangzha"
};
},
"./bin/config/GameConfig.js": (t, e, i) => {
i.r(e);
i.d(e, {
GameConfig: () => o,
GAME_ID: () => a,
CLIENT_VERSION: () => n
});
var s;
(function(t) {
t[t.LEVEL_0 = 0] = "LEVEL_0";
t[t.LEVEL_1 = 1] = "LEVEL_1";
t[t.LEVEL_2 = 2] = "LEVEL_2";
t[t.LEVEL_3 = 3] = "LEVEL_3";
t[t.LEVEL_4 = 4] = "LEVEL_4";
t[t.LEVEL_5 = 5] = "LEVEL_5";
t[t.LEVEL_COUNT = 6] = "LEVEL_COUNT";
})(s || (s = {}));
const o = {
DOWN_UP_LEVEL: s,
DOWN_UP_CONFIG: {
[s.LEVEL_0]: {
gameNum: 10,
unSelectNum: 5
},
[s.LEVEL_1]: {
gameNum: 1,
unSelectNum: 5
},
[s.LEVEL_2]: {
gameNum: 10,
unSelectNum: 5,
scoreLimit: [ 15e4 ]
},
[s.LEVEL_3]: {
unSelectNum: 5,
scoreLimit: [ 6e5 ]
},
[s.LEVEL_4]: {
unSelectNum: 2,
scoreLimit: [ 1e6, 2e6, 35e5 ]
}
}
}, a = 20840, n = 20230918;
},
"./bin/config/GameDefine.js": (t, e, i) => {
i.r(e);
i.d(e, {
MAX_PLAYER: () => s,
MIN_PLAYER: () => o,
SEAT_NONE: () => a,
PlayerEnum: () => n,
Direct: () => l,
PlayerDirect: () => _,
SELF_LOCAL_SEAT: () => r,
MAX_CARD_TYPE_COUNT: () => d,
HAND_CARD_COUNT: () => h,
CLONE_CARD_VALUE_COUNT: () => c,
CHOOSE_CARD_COUNT: () => g,
PEAK_ADD_CARD_COUNT: () => u,
MAX_ADD_CARD_COUNT: () => m,
MAX_HAND_CARD_COUNT: () => C,
BOMB_CARD_COUNT: () => p,
MAX_BOMB_CARD_VALUE_COUNT: () => f,
MAX_PLAYER_COUNT: () => A,
MAX_CARD_ID_COUNT: () => S,
ALL_COLOR: () => I,
CN_UNIT: () => E,
POWER_NONE: () => L,
BIG_AWARD_TURN_COUNT: () => T,
BIG_AWARD_COUNT: () => D,
GUIDE_TOTAL_ROUND: () => w,
ALL_CARD_COUNT: () => P,
VERSION_CODE: () => G,
eResultExFlag: () => b,
ePlayCardFlag: () => v,
ENUM_GAME_STATE: () => y,
ENUM_PLAYER_ACT: () => M,
ENUM_PLAYER_PLAYCARD_STATE: () => R,
SHOW_BTN: () => B,
FGUI_ORDER: () => W,
ENUM_PLAYER_WINLOSE: () => O,
ENUM_RESULT_FLAG: () => N,
ENUM_LEAVEFLAG: () => K,
CARD_SORT_TYPE: () => U,
GIVE_UP_FLAG: () => x,
NobilityFlag: () => F,
GUIDE_STEP: () => k,
GUIDE_EVENT: () => H,
HIDE_POP_VIEW_FLAG: () => V,
GOLD_CARD_BUFF_FLAG: () => Y,
GOLD_CARD_BUFF_TEXT: () => j
});
const s = 4, o = 4, a = -1;
var n, l;
(function(t) {
t[t.PLAYER_0 = 0] = "PLAYER_0";
t[t.PLAYER_1 = 1] = "PLAYER_1";
t[t.PLAYER_2 = 2] = "PLAYER_2";
t[t.PLAYER_3 = 3] = "PLAYER_3";
})(n || (n = {}));
(function(t) {
t[t.SELF = 0] = "SELF";
t[t.LEFT = 1] = "LEFT";
t[t.RIGHT = 2] = "RIGHT";
t[t.TOP = 3] = "TOP";
t[t.BOTTOM = 4] = "BOTTOM";
})(l || (l = {}));
const _ = {
[n.PLAYER_1]: l.SELF,
[n.PLAYER_2]: l.LEFT,
[n.PLAYER_3]: l.BOTTOM,
[n.PLAYER_0]: l.RIGHT
}, r = 1, d = 80, h = 7, c = 6, g = 4, u = 3, m = u, C = h + m, p = 4, f = 2, A = 4, S = 60, I = 4, E = 13, L = 0, T = 3, D = 4, w = 3, P = 128, G = 240927;
var b, v, y, M, R, B, W, O, N, K, U, x, F, k;
(function(t) {
t[t.FlagNone = 0] = "FlagNone";
t[t.FlagBankrupt = 1] = "FlagBankrupt";
t[t.FlagWinLimit = 2] = "FlagWinLimit";
t[t.FlagJZZ = 3] = "FlagJZZ";
t[t.FlagPlayerLimit = 4] = "FlagPlayerLimit";
t[t.FlagDouble = 5] = "FlagDouble";
t[t.FlagStarCombo = 6] = "FlagStarCombo";
})(b || (b = {}));
(function(t) {
t[t.PLAY_CF_NONE = 0] = "PLAY_CF_NONE";
t[t.PLAY_CF_STAR = 1] = "PLAY_CF_STAR";
})(v || (v = {}));
(function(t) {
t[t.GS_ERROR = 0] = "GS_ERROR";
t[t.GS_WAIT = 1] = "GS_WAIT";
t[t.GS_IDLE = 2] = "GS_IDLE";
t[t.GS_START = 3] = "GS_START";
t[t.GS_TAKE_FIRST = 4] = "GS_TAKE_FIRST";
t[t.GS_CLONE = 5] = "GS_CLONE";
t[t.GS_TAKE_NEXT = 6] = "GS_TAKE_NEXT";
t[t.GS_CHOOSE_CARD = 7] = "GS_CHOOSE_CARD";
t[t.GS_GOLD_BUFF = 8] = "GS_GOLD_BUFF";
t[t.GS_PLAY = 9] = "GS_PLAY";
t[t.GS_AFTER_PLAY = 10] = "GS_AFTER_PLAY";
t[t.GS_AFTER_HU = 11] = "GS_AFTER_HU";
t[t.GS_BROKEN = 12] = "GS_BROKEN";
t[t.GS_ONE_PLAY_END = 13] = "GS_ONE_PLAY_END";
t[t.GS_PEAK_GAME = 14] = "GS_PEAK_GAME";
t[t.GS_PEAK_TAKE = 15] = "GS_PEAK_TAKE";
t[t.GS_PEAK_PLAY = 16] = "GS_PEAK_PLAY";
t[t.GS_PEAK_AFTER_PLAY = 17] = "GS_PEAK_AFTER_PLAY";
t[t.GS_PEAK_AFTER_HU = 18] = "GS_PEAK_AFTER_HU";
t[t.GS_TOTAL_RESULT = 19] = "GS_TOTAL_RESULT";
t[t.GS_BASE = 99] = "GS_BASE";
t[t.GameState_COUNT = 20] = "GameState_COUNT";
})(y || (y = {}));
(function(t) {
t[t.PA_NONE = 0] = "PA_NONE";
t[t.PA_CANCEl = 1] = "PA_CANCEl";
t[t.PA_ZM = 2] = "PA_ZM";
t[t.PA_HU = 4] = "PA_HU";
t[t.PA_MZ = 8] = "PA_MZ";
t[t.PA_AZ = 16] = "PA_AZ";
t[t.PA_CP = 32] = "PA_CP";
})(M || (M = {}));
(function(t) {
t[t.PCS_POWER = 0] = "PCS_POWER";
t[t.PCS_PLAY = 1] = "PCS_PLAY";
t[t.PCS_ACT_S = 2] = "PCS_ACT_S";
t[t.PCS_ACT_O = 3] = "PCS_ACT_O";
t[t.PCS_BANKRUPTRY = 4] = "PCS_BANKRUPTRY";
t[t.PCS_COUNT = 5] = "PCS_COUNT";
})(R || (R = {}));
(function(t) {
t[t.BTN_START = 1] = "BTN_START";
t[t.BTN_MATCH = 2] = "BTN_MATCH";
})(B || (B = {}));
(function(t) {
t[t.GAME_MAIN = 0] = "GAME_MAIN";
t[t.GAME_CARD = 1] = "GAME_CARD";
t[t.GAME_PLAYER = 2] = "GAME_PLAYER";
t[t.GAME_ANI = 3] = "GAME_ANI";
t[t.GAME_BTN = 4] = "GAME_BTN";
t[t.GAME_TING = 5] = "GAME_TING";
t[t.GAME_NoteCard = 6] = "GAME_NoteCard";
t[t.GAME_RESULT = 7] = "GAME_RESULT";
t[t.GAME_POP = 8] = "GAME_POP";
})(W || (W = {}));
(function(t) {
t[t.LOSE = 0] = "LOSE";
t[t.WIN = 1] = "WIN";
t[t.DRAW = 2] = "DRAW";
})(O || (O = {}));
(function(t) {
t[t.RF_NONE = 0] = "RF_NONE";
t[t.RF_BKT = 1] = "RF_BKT";
t[t.RF_LMT = 2] = "RF_LMT";
t[t.RF_JZZ = 3] = "RF_JZZ";
})(N || (N = {}));
(function(t) {
t[t.LF_None = 0] = "LF_None";
t[t.LF_Leave = 1] = "LF_Leave";
t[t.LF_Give = 2] = "LF_Give";
})(K || (K = {}));
(function(t) {
t[t.SORT_BY_POWER = 0] = "SORT_BY_POWER";
t[t.SORT_BY_COUNT = 1] = "SORT_BY_COUNT";
t[t.SORT_BY_VALUE = 2] = "SORT_BY_VALUE";
})(U || (U = {}));
(function(t) {
t[t.FLAG_CONTINUE = 0] = "FLAG_CONTINUE";
t[t.FLAG_GIVE_UP = 1] = "FLAG_GIVE_UP";
})(x || (x = {}));
(function(t) {
t[t.NFLAG_NONE = 0] = "NFLAG_NONE";
t[t.NFLAG_DB_PAY = 1] = "NFLAG_DB_PAY";
t[t.NFLAG_NO_PAY = 2] = "NFLAG_NO_PAY";
})(F || (F = {}));
(function(t) {
t[t.GUDS_INIT = 0] = "GUDS_INIT";
t[t.GUDS_START = 1] = "GUDS_START";
t[t.GUDS_CLONE = 2] = "GUDS_CLONE";
t[t.GUDS_MULT = 3] = "GUDS_MULT";
t[t.GUDS_DRAW_CARD_1 = 4] = "GUDS_DRAW_CARD_1";
t[t.GUDS_PLAY_CARD = 5] = "GUDS_PLAY_CARD";
t[t.GUDS_DRAW_CARD_2 = 6] = "GUDS_DRAW_CARD_2";
t[t.GUDS_BOMB_CARD = 7] = "GUDS_BOMB_CARD";
t[t.GUDS_TOWER_CARD_1 = 8] = "GUDS_TOWER_CARD_1";
t[t.GUDS_TOWER_CARD_2 = 9] = "GUDS_TOWER_CARD_2";
t[t.GUDS_TOWER_CARD_3 = 10] = "GUDS_TOWER_CARD_3";
t[t.GUDS_PLAY_JOKER_CARD = 11] = "GUDS_PLAY_JOKER_CARD";
t[t.GUDS_TOWER_CARD_4 = 12] = "GUDS_TOWER_CARD_4";
t[t.GUDS_ZM = 13] = "GUDS_ZM";
t[t.GUDS_RESULT = 14] = "GUDS_RESULT";
t[t.GUDS_AWARD = 15] = "GUDS_AWARD";
})(k || (k = {}));
const H = {
GUI_EVE_SHOW_CLONE: "GUI_EVE_SHOW_CLONE",
GUI_EVE_SHOW_MULT: "GUI_EVE_SHOW_MULT",
GUI_EVE_SHOW_DRAW_CARD_1: "GUI_EVE_SHOW_DRAW_CARD_1",
GUI_EVE_SHOW_PLAY_CARD_1: "GUI_EVE_SHOW_PLAY_CARD_1",
GUI_EVE_SHOW_DRAW_CARD_2: "GUI_EVE_SHOW_DRAW_CARD_2",
GUI_EVE_SHOW_TOWER_CARD_1: "GUI_EVE_SHOW_TOWER_CARD_1",
GUI_EVE_SHOW_TOWER_CARD_2: "GUI_EVE_SHOW_TOWER_CARD_2",
GUI_EVE_SHOW_TOWER_CARD_3: "GUI_EVE_SHOW_TOWER_CARD_3",
GUI_EVE_SHOW_TOWER_JOKER: "GUI_EVE_SHOW_TOWER_JOKER",
GUI_EVE_SHOW_TOWER_CARD_4: "GUI_EVE_SHOW_TOWER_CARD_4",
GUI_EVE_SHOW_ZIMO: "GUI_EVE_SHOW_ZIMO",
GUI_EVE_SHOW_ZIMO_2: "GUI_EVE_SHOW_ZIMO_2",
GUI_EVE_SHOW_RESULT: "GUI_EVE_SHOW_RESULT",
GUI_EVE_GUIDE_STEP: "GUI_EVE_GUIDE_STEP",
GUI_EVE_CHANGE: "GUI_EVE_CHANGE",
GUI_EVE_CHANGE_ROOM: "GUI_EVE_CHANGE_ROOM",
GUI_EVE_CLOSE_MULT: "GUI_EVE_CLOSE_MULT",
GUI_EVE_CLONE_RUN: "GUI_EVE_CLONE_RUN",
GUI_EVE_CLOSE_CLONE: "GUI_EVE_CLOSE_CLONE",
GUI_EVE_DRAW_CARD: "GUI_EVE_DRAW_CARD",
GUI_EVE_PLAY_CARD: "GUI_EVE_PLAY_CARD",
GUI_EVE_BTN_ZHA: "GUI_EVE_BTN_ZHA",
GUI_EVE_BTN_BOOM: "GUI_EVE_BTN_BOOM",
GUI_EVE_CLOSE_TING_LIST: "GUI_EVE_CLOSE_TING_LIST",
GUI_EVE_BTN_ZIMO: "GUI_EVE_BTN_ZIMO",
GUI_EVE_RESULT_CONTINUE: "GUI_EVE_RESULT_CONTINUE"
};
var V, Y, j;
(function(t) {
t[t.HPVF_NONE = 0] = "HPVF_NONE";
t[t.HPVF_BANKRUPT = 1] = "HPVF_BANKRUPT";
t[t.HPVF_GIVE_UP = 2] = "HPVF_GIVE_UP";
t[t.HPVF_TOTAL_RESULT = 3] = "HPVF_TOTAL_RESULT";
})(V || (V = {}));
(function(t) {
t[t.GCBF_NONE = 0] = "GCBF_NONE";
t[t.GCBF_FIRST = 1] = "GCBF_FIRST";
t[t.GCBF_MNP = 2] = "GCBF_MNP";
t[t.GCBF_BOMB = 3] = "GCBF_BOMB";
t[t.GCBF_JZZ = 4] = "GCBF_JZZ";
t[t.GCBF_DB = 5] = "GCBF_DB";
t[t.GCBF_CLONE = 6] = "GCBF_CLONE";
t[t.GCBF_YB = 7] = "GCBF_YB";
})(Y || (Y = {}));
(function(t) {
t.GCBF_TEXT_FIRST = "本局首和倍数×${num}";
t.GCBF_TEXT_MNP = "本局明牌倍数x${num}";
t.GCBF_TEXT_BOMB = "所有人爆牌${num}次";
t.GCBF_TEXT_JZZ = "${player}获得金钟罩x${num}";
t.GCBF_TEXT_DB = "本局所有${limit}倍以下牌型倍数×${num}";
t.GCBF_TEXT_CLONE = "所有克隆牌数量+${cnt}";
t.GCBF_TEXT_YB = "${player}获得云币x${num}";
})(j || (j = {}));
},
"./bin/config/GameEvents.js": (t, e, i) => {
i.r(e);
i.d(e, {
GameEventName: () => s
});
const s = {
CTCHALLENGE_BET: "CTCHALLENGE_BET",
PLAY_CARD_ON_CLICK: "PLAY_CARD_ON_CLICK"
};
},
"./bin/config/SoundConfig.js": (t, e, i) => {
i.r(e);
i.d(e, {
SOUND_PATH: () => s,
CARD_DAN: () => o,
getOutCardSound: () => a,
getCardTypePath: () => n,
getSexEff: () => l
});
const s = {
GAME_BATTLE: "comm/battle",
BTN_CLICK: "comm/buttonclick",
ROULETTE_TALLY: "comm/coins",
BGM: "comm/ddz_music_scene1",
BGMEX: "comm/ddz_music_scene2",
GAME_HANDOPENYAKUMAN: "comm/game_handopenyakuman",
GAME_HANDSELECT: "comm/game_handselect",
GAME_HE: "comm/game_he",
GAME_LOSE: "comm/game_lose",
GAME_NDROP: "comm/game_ndrop",
GAME_PAESLIDE: "comm/game_paeslide03",
TIMER: "comm/game_timer",
GAME_WIN: "comm/game_win",
GAME_START: "comm/gamesatart",
GAME_JZZ: "comm/Defense",
GAME_PO: "comm/po",
GAME_YP_ANI: "comm/Get_money",
ZIMO_SOUND: "zimo",
BOMB_SOUND: "zha",
HU_SOUND: "he",
BAO_SOUND: "bao",
STAR_UP_SOUND: "starup",
LIANJI2_SOUND: "lianji_2",
LIANJI3_SOUND: "lianji_3",
LIANJI4_SOUND: "lianji_4",
BUFF_CARD_ENTER: "comm/game_buffCardEnter",
BUFF_CARD_OPEN: "comm/game_buffCardOpen",
BUFF_CARD_MOVE: "comm/game_buffCardMove",
BUFF_CARD_RAND: "comm/game_buffCardRand",
BUFF_CARD_CENTER: "comm/game_buffCardCenter"
}, o = [ "dan_1.mp3", "dan_2.mp3", "dan_3.mp3", "dan_4.mp3", "dan_5.mp3", "dan_6.mp3", "dan_7.mp3", "dan_8.mp3", "dan_9.mp3", "dan_10.mp3", "dan_11.mp3", "dan_12.mp3", "dan_13.mp3", "dan_1.mp3", "dan_2.mp3", "dan_14.mp3", "dan_15.mp3" ], a = (t, e) => {
let i = "";
return e <= 0 || e > 17 ? "" : 1 == t ? "cardLayer/women/" + o[e - 1] : "cardLayer/man/" + o[e - 1];
}, n = t => {
return 1 == t ? "cardLayer/women/" : "cardLayer/man/";
}, l = (t, e) => {
return 1 == t ? "cardLayer/women/" + s[e] : "cardLayer/man/" + s[e];
};
},
"./bin/data/CardData.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => (class {
constructor() {
this.handCards = [];
this.huCards = [];
this.outCards = [];
this.bombCards = [];
this.handHuCards = [];
this.drawCard = [];
this.selectCards = [];
this.starCount = 0;
this.clear();
}
clear() {
this.selectCards = [];
this.handCards = [];
this.huCards = [];
this.outCards = [];
this.handHuCards = [];
this.bombCards = [];
this.starCount = 0;
}
setHandCards(t) {
this.handCards = o.Util.clone(t);
}
getHandCards() {
return this.handCards;
}
delHandCards(t) {
this.handCards = this.delArraryInOtherArrary(t, this.handCards);
}
delArraryInOtherArrary(t, e) {
const i = [], s = JSON.parse(JSON.stringify(e)), o = JSON.parse(JSON.stringify(t));
for (const t of s) if (o.length > 0) for (let e = 0; e < o.length; e++) {
if (o[e] == t) {
o.splice(e, 1);
break;
}
e == o.length - 1 && i.push(t);
} else i.push(t);
return i;
}
setSelectCardsIndex(t) {
this.selectCards = o.Util.clone(t);
}
getSelectCardsIndex() {
return this.selectCards;
}
setHuCards(t) {
this.huCards = o.Util.clone(t);
}
getHuCards() {
return this.huCards;
}
setBombCards(t) {
this.bombCards = o.Util.clone(t);
}
getBombCards() {
const t = [];
this.bombCards.forEach(e => {
e != s.CardID.CID_BACK && t.push(e);
});
return t;
}
setOutCards(t) {
this.outCards = o.Util.clone(t);
}
getOutCards() {
return this.outCards;
}
setHandHuCards(t) {
this.handHuCards = o.Util.clone(t);
}
getHuHandCards() {
return this.handHuCards;
}
setDrawCard(t) {
this.drawCard = t;
}
getDrawCard() {
return this.drawCard;
}
setStarCount(t) {
this.starCount = t;
}
getStarCount() {
return this.starCount;
}
})
});
var s = i("./bin/config/CardCode.js");
},
"./bin/data/CardLogicData.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => n
});
var s = i("./bin/config/CardCode.js"), a = i("./bin/config/GameDefine.js");
class n {
constructor() {
this.seatPower = new Array(a.MAX_PLAYER);
this.playCardState = 0;
this.specfCards = [];
this._leftIDCards = {};
this._leftPowerCards = {};
this._leftCardsCount = a.ALL_CARD_COUNT;
this._cloneCards = null;
this.clear();
}
clear() {
for (let t = 0; t < a.MAX_PLAYER; t++) this.seatPower[t] = a.POWER_NONE;
n.prePlayerSeat = 0;
n.nowPlayerSeat = 0;
this.resetRecoorder();
}
resetRecoorder() {
this._leftIDCards = {};
this._leftPowerCards = {};
this._leftCardsCount = a.ALL_CARD_COUNT;
let t = null;
this._cloneCards && (t = o.Util.clone(this._cloneCards));
if (t) {
for (let e = 0; e < t._new_card_values.length; e++) {
const i = t._new_card_values[e];
for (let t = 0; t < 4; t++) {
const e = 13 * t + i;
for (let t = 0; t < 4; t++) {
this._leftIDCards[e] = (this._leftIDCards[e] || 0) + 1;
this._leftPowerCards[i] = (this._leftPowerCards[i] || 0) + 1;
}
}
}
const e = 7;
for (let t = 0; t < 4; t++) {
const i = 13 * t + e;
for (let t = 0; t < 3; t++) {
this._leftIDCards[i] = (this._leftIDCards[i] || 0) + 1;
this._leftPowerCards[e] = (this._leftPowerCards[e] || 0) + 1;
}
}
for (let t = 0; t < 5; t++) for (let t = s.CardID.CID_SJ; t <= s.CardID.CID_BJ; t++) {
const e = (0, s.get_num_by_cardVal)((0, s.VALUE)(t));
this._leftIDCards[t] = (this._leftIDCards[t] || 0) + 1;
this._leftPowerCards[e] = (this._leftPowerCards[e] || 0) + 1;
}
for (let t = 0; t < 10; t++) {
this._leftIDCards[s.CardID.CID_GOLD] = (this._leftIDCards[s.CardID.CID_GOLD] || 0) + 1;
this._leftPowerCards[s.CardID.CID_GOLD] = (this._leftPowerCards[s.CardID.CID_GOLD] || 0) + 1;
}
}
}
updateRecoorder(t) {
if (null != t && 0 !== t.length) for (let e = 0; e < t.length; e++) {
this._leftCardsCount--;
this._leftIDCards[t[e]] && this._leftIDCards[t[e]] > 0 && this._leftIDCards[t[e]]--;
const i = (0, s.VALUE)(t[e]);
let o = i;
1 != i && (o = (0, s.get_num_by_cardVal)(i));
this._leftPowerCards[o] && this._leftPowerCards[o] > 0 && this._leftPowerCards[o]--;
}
}
getCountByPower(t) {
return this._leftPowerCards[t] || 0;
}
getCountByID(t) {
return this._leftIDCards[t] || 0;
}
getCardPower(t) {
return (0, s.get_num_by_cardVal)((0, s.VALUE)(t));
}
getLeftIDCards() {
return this._leftIDCards;
}
getLeftPowerCards() {
return this._leftPowerCards;
}
getLeftCardsCount() {
return this._leftCardsCount;
}
getNextSeat(t) {
let e = t + 1;
e >= a.MAX_PLAYER && (e = 0);
return e;
}
setPrePlayerSeat(t) {
n.prePlayerSeat = t;
}
getPrePlayerSeat() {
return n.prePlayerSeat;
}
setNowPlayerSeat(t) {
console.log("设置出牌权限", t);
n.nowPlayerSeat = t;
}
getNowPlayerSeat() {
console.log("获取出牌权限", n.nowPlayerSeat);
return n.nowPlayerSeat;
}
setSpecfCards(t) {
this.specfCards = t;
}
getSpecfCards() {
return this.specfCards;
}
setCloneCards(t) {
this._cloneCards = t;
}
getCloneCards() {
return this._cloneCards;
}
}
n.prePlayerSeat = 0;
n.nowPlayerSeat = 0;
},
"./bin/data/GameLogicData.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => (class {
constructor() {
this.nWinPointWithAward = 0;
this.nWinPoint = 0;
this.resultEx = [];
this.reqProps = [];
this._BKPtime = 0;
this._gameState = 0;
this._changeCardsOperatorFlag = 0;
this._bigAwardInfo = null;
this._isBigAwardOn = !1;
this._isWillShowBigAward = !1;
this._title_ret = 0;
this._props = [];
this._leaveSpFlag = [];
this._yunProtectInfo = null;
this._doubleInfo = null;
this._towerMult = [];
this.flowData = [];
this.isBankrupt = [];
this.clear();
}
clear() {
this.reqProps = [];
this._props = [];
this._leaveSpFlag = [];
this._yunProtectInfo = null;
}
reset() {
this.reqProps = [];
this.flowData = [];
this.gameState = s.ENUM_GAME_STATE.GS_IDLE;
for (let t = 0; t < s.MAX_PLAYER; t++) this.isBankrupt[t] = !1;
this._bigAwardInfo = null;
this._isBigAwardOn = !1;
this._isWillShowBigAward = !1;
this._title_ret = 0;
this._leaveSpFlag = [];
this._yunProtectInfo = null;
}
setWinPoint(t, e) {
this.nWinPointWithAward = t;
this.nWinPoint = e;
}
getWinPoint() {
return {
pointWithAward: this.nWinPointWithAward,
point: this.nWinPoint
};
}
addReqProps(t) {
this.reqProps.push(t);
}
getReqProps() {
return this.reqProps;
}
delReqProps(t) {
this.reqProps.splice(t, 1);
}
setBKPtime(t) {
this._BKPtime = t;
}
getBKPtime() {
return this._BKPtime;
}
set gameState(t) {
this._gameState = t;
}
get gameState() {
return this._gameState;
}
set changeCardsOperatorFlag(t) {
this._changeCardsOperatorFlag = t;
}
get changeCardsOperatorFlag() {
return this._changeCardsOperatorFlag;
}
setchangeCardsConfig(t) {
this._changeCardsConfig = o.Util.clone(t);
}
getchangeCardsConfig() {
return this._changeCardsConfig;
}
setplayerRecommendList(t) {
this._playerRecommendList = o.Util.clone(t);
}
getplayerRecommendList() {
return this._playerRecommendList;
}
setBigAwardData(t) {
this._bigAwardInfo = t;
}
getBigAwardData() {
return this._bigAwardInfo;
}
setBigAwardOn(t) {
this._isBigAwardOn = t;
}
isBigAwardOn() {
return this._isBigAwardOn;
}
setWillShowBigAward(t) {
this._isWillShowBigAward = t;
}
isWillShowBigAward() {
return this._isWillShowBigAward;
}
setTitleAwardData(t) {
this._title_ret = t;
}
getTitleAwardData() {
return this._title_ret;
}
setTowerMult(t, e) {
this._towerMult[t] = e;
}
getTowerMult(t) {
return this._towerMult[t] || 0;
}
clearProps(t) {
this._props[t] = [];
}
addProps(t, e, i) {
this._props[t] = this._props[t] || [];
this._props[t].push({
propid: e,
cnt: i
});
}
getProps(t) {
return this._props[t] || [];
}
getPropCnt(t, e) {
this._props[t] = this._props[t] || [];
const i = this._props[t].find(t => t.propid === e);
return i ? i.cnt : 0;
}
setLeaveSpeFlag(t, e) {
this._leaveSpFlag[t] = e;
}
getLeaveSpeFlag(t) {
return this._leaveSpFlag[t];
}
isLeaveSpecil(t) {
return this._leaveSpFlag[t] == a.GLProtocol.msgPlayerLeaveSpecil.eFlag.PLAYER_LEAVE_PROTECTED;
}
setYunProtectInfo(t) {
this._yunProtectInfo = t;
}
getYunProtectInfo() {
return this._yunProtectInfo;
}
setDoubleInfo(t) {
this._doubleInfo = t;
}
getDoubleInfo() {
return this._doubleInfo;
}
getPowerPropOpen() {
var t, e;
const i = (null === (t = this._yunProtectInfo) || void 0 === t ? void 0 : t._open) || 0, s = (null === (e = this._doubleInfo) || void 0 === e ? void 0 : e._open) || 0;
return 1 === i && 1 === s;
}
})
});
var s = i("./bin/config/GameDefine.js"), a = i("./bin/logic/protocol/GLProtocol.js");
},
"./bin/data/PlayerData.js": (t, e, i) => {
i.r(e);
i.d(e, {
ENUM_PLAYER_STATE: () => s,
default: () => a
});
var s;
(function(t) {
t[t.KW_PLAYER_STATE_NULL = 0] = "KW_PLAYER_STATE_NULL";
t[t.KW_PLAYER_STATE_WAIT = 1] = "KW_PLAYER_STATE_WAIT";
t[t.KW_PLAYER_STATE_READY = 2] = "KW_PLAYER_STATE_READY";
t[t.KW_PLAYER_STATE_PLAYING = 3] = "KW_PLAYER_STATE_PLAYING";
t[t.KW_PLAYER_STATE_ESCAPE = 4] = "KW_PLAYER_STATE_ESCAPE";
t[t.KW_PLAYER_STATE_EXITEARLY = 5] = "KW_PLAYER_STATE_EXITEARLY";
t[t.KW_PLAYER_STATE_COUNT = 6] = "KW_PLAYER_STATE_COUNT";
})(s || (s = {}));
class o {
constructor() {
this._sr = 0;
this.playState = s.KW_PLAYER_STATE_NULL;
this.isWireBreak = !1;
this.leaveFlag = 0;
}
get nickname() {
return this._nickname;
}
set nickname(t) {
this._nickname = this.getset(t);
const e = this._nickname || "未知";
this.shortName = e;
}
get numId() {
return this._numId;
}
set numId(t) {
this._numId = this.getset(t);
}
get userid() {
return this._userId;
}
set userid(t) {
this._userId = this.getset(t);
}
get sr() {
return this._sr;
}
set sr(t) {
this._sr = this.getset(t);
}
setData(t) {
this.areaid = t._area_id;
this.numid = t._nid;
this.nickname = t._name;
this.sr = t._sr;
this.win = t._win_cnt;
this.lose = t._lose_cnt;
this.draw = t._equal_cnt;
this.escape = t._escape_cnt;
this.sitorder = t._seat;
this.vipid = t._vip;
this.vipFlag = t._vip_flag;
this.clienttype = 2;
this.gameMoney = t._sr;
this.charm = t._charm;
this.userid = t._uid;
this.leaveFlag = t._leave_flag;
}
setDataEx(t) {
this.playState = t.nPlayState;
}
setPlusData(t) {
this.nickname = t.nickname;
this.userid = t.userid;
this.sex = t.sex;
}
setLeaveFlag(t) {
this.leaveFlag = t;
}
byteToString(t) {
return ByteToDimString(t);
}
getset(t) {
let e;
"string" == typeof t ? e = t : "number" == typeof t ? e = String(t) : "object" == typeof t && null != t.BYTES_PER_ELEMENT ? e = this.byteToString(t) : Array.isArray(t) && (e = this.byteToString(new Uint8Array(t)));
return e;
}
setWireBreak(t) {
this.isWireBreak = t;
}
getPlayerBaseInfoCopy() {
return {
numid: this.numid,
nickname: this.nickname,
shortName: this.shortName,
sitorder: this.sitorder
};
}
setInitExp(t) {
this.initExp = t;
}
getInitExp() {
return this.initExp;
}
isVaildPlayer() {
return this.numid && this.numid > 0;
}
}
o.ENUM_PLAYER_STATE = s;
const a = o;
},
"./bin/data/TableData.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => C
});
var s, a = i("./bin/gf.js"), n = i("./bin/config/CardCode.js"), l = i("./bin/data/CardLogicData.js"), _ = i("./bin/data/GameLogicData.js"), r = i("./bin/config/GameDefine.js"), d = i("./bin/data/CardData.js"), h = i("./bin/data/PlayerData.js"), c = i("./bin/logic/protocol/GLProtocol.js"), g = i("./bin/config/GameConfig.js"), u = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let m = s = class extends a.gf.ModuleBase {
constructor() {
super(...arguments);
this.selfSeat = 0;
this.cardLogicData = null;
this.gameLogicData = null;
this.uuid = 0;
this.startGameGold = 0;
this.playerData = [];
this.selfData = null;
this.playersResult = [];
this.couponConfig = {};
this.headMap = {};
this.dressProp = {};
this.isPlayCardAni = !1;
this.isTakeFirstIng = !1;
this.smartRecommend = null;
this.smartRecommendOpen = !1;
this.targetChangeCards = [];
this.cc_config = {};
this.playerResult = null;
this.nobilitResult = null;
this.headBox = {};
this.rechargeInGameProducts = null;
this.reconnect = {};
this.actPower = {};
this.gameConfig = {};
this.timer = {};
this.tingList = [];
this.nowTingInfo = {};
this.recommendCards = {};
this.recommendCardsNew = {};
this.bHuPaiStatus = !1;
this.huCardsData = {};
this.roundResult = {};
this.totalResult = {};
this.takeFirstHandCards = [];
this.endChooseCard = [];
this.playCards = {};
this.cloneAniEnd = !1;
this.towerCards = {};
this.gameStateOld = {};
this.playerLeave = [];
this.multConfig = {};
this.deckCount = {};
this.playCardsPeak = {};
this.playerMingCard = [];
this.addCards = {};
this.bPeak = !1;
this.gameState = {};
this.actPowerNew = {};
this.gameTingCard = 0;
this.towerCardsSelf = {};
this.skipLow_local = -1;
this.skipLow_first = -1;
this.gameDBPConfig = {};
this.bResultFirst = !1;
this.curRoundZhaGuild = !1;
this.curRoundBaoGuild = !1;
this.curRoundWangGuild = !1;
this.curRoundMingGuild = !1;
this.curRoundZimoGuild = !1;
this.numidHeadMap = {};
this.numidHeadMapKey = "NUMID_HEAD_MAP_KEY";
this.curBGMName = null;
this.isRechargeTipShowed = !1;
this.selfMaxCanWin = 0;
this.noLimitInfo = [];
this.shuShuPowerPropSource = "";
this.showPopYunTips = !1;
this.showYPBtnTips = !1;
this.showYPBackBtn = !1;
this.yunProtectPropCnt = -1;
this.titleType = [ 0, 0, 0, 0 ];
this.titleRank = [ 0, 0, 0, 0 ];
this.cardRecordArr = [];
this.useNoteCardType = c.GLProtocol.msgCardRecordState.eFlag.FLAG_RELINK_WITH_NONE;
this.useNoteCardStatus = 0;
this.color_same_cards = 0;
this.flower_same_cards = 0;
this.btnGameBuffPosition = null;
this.buffList = [];
this.playerPos = [];
this.towerCardsMsg = [];
this.goldCardPos = [];
this.shushuTouchu = 0;
this.takeFirst = [];
}
initData() {
for (let t = 0; t < r.MAX_PLAYER; t++) {
this.playerData[t] = new h.default();
s.cardData[t] = new d.default();
this.playersResult[t] = {};
}
this.selfData = new h.default();
this.cardLogicData = new l.default();
this.gameLogicData = new _.default();
this.headMap = {};
this.skipLow_local = -1;
this.skipLow_first = -1;
this.dressProp = {};
this.buffList = [];
this.buffFirstHuMult = null;
this.buffMingPaiMult = null;
this.buffBombMult = null;
this.buffCloneCnt = null;
this.goldBuffCard = null;
this.towerCardsMsg = [];
this.shushuTouchu = 0;
this.loadNumidHeadMap();
}
init() {
this.reset();
this.clear();
this.playerData = [];
this.startGameGold = 0;
this.bHuPaiStatus = !1;
this.recommendCards = {};
this.recommendCardsNew = {};
this.totalResult = {};
this.towerCards = {};
this.playerLeave = [];
this.playerMingCard = [];
this.gameState = {};
this.actPowerNew = {};
this.gameTingCard = 0;
this.skipLow_local = -1;
this.skipLow_first = -1;
this.towerCardsSelf = {};
this.dressProp = {};
this.takeFirstHandCards = [];
this.color_same_cards = 0;
this.flower_same_cards = 0;
this.buffList = [];
this.buffBombMult = null;
this.buffCloneCnt = null;
this.buffFirstHuMult = null;
this.buffMingPaiMult = null;
this.goldBuffCard = null;
this.towerCardsMsg = [];
this.shushuTouchu = 0;
this.takeFirst = [];
}
clear() {
for (let t = 0; t < r.MAX_PLAYER; t++) s.cardData[t].clear();
this.cardLogicData.clear();
this.gameLogicData.clear();
this.headBox = {};
this.isPlayCardAni = !1;
this.roundResult = null;
this.bHuPaiStatus = !1;
this.recommendCards = {};
this.recommendCardsNew = {};
this.totalResult = {};
this.towerCards = {};
this.playerLeave = [];
this.playerMingCard = [];
this.playCardsPeak = {};
this.gameState = {};
this.actPowerNew = {};
this.gameTingCard = 0;
this.towerCardsSelf = {};
this.takeFirstHandCards = [];
this.color_same_cards = 0;
this.flower_same_cards = 0;
this.buffList = [];
this.buffFirstHuMult = null;
this.buffMingPaiMult = null;
this.buffBombMult = null;
this.buffCloneCnt = null;
this.goldBuffCard = null;
this.towerCardsMsg = [];
this.shushuTouchu = 0;
this.takeFirst = [];
}
reset() {
for (let t = 0; t < r.MAX_PLAYER; t++) s.cardData[t].clear();
this.cardLogicData.clear();
this.gameLogicData.reset();
this.clearAllPlayerResult();
this.clearFlowData();
this.isPlayCardAni = !1;
this.bHuPaiStatus = !1;
this.recommendCards = {};
this.recommendCardsNew = {};
this.totalResult = {};
this.playerLeave = [];
this.cloneAniEnd = !1;
this.playerMingCard = [];
this.deckCount = {};
this.playCards = {};
this.playCardsPeak = {};
this.addCards = {};
this.bPeak = !1;
this.gameState = {};
this.actPowerNew = {};
this.gameTingCard = 0;
this.towerCardsSelf = {};
this.curRoundZhaGuild = !1;
this.curRoundBaoGuild = !1;
this.curRoundWangGuild = !1;
this.curRoundMingGuild = !1;
this.curRoundZimoGuild = !1;
this.isRechargeTipShowed = !1;
this.selfMaxCanWin = 0;
this.shuShuPowerPropSource = "";
this.showPopYunTips = !1;
this.showYPBackBtn = !1;
this.showYPBtnTips = !1;
this.yunProtectPropCnt = -1;
this.color_same_cards = 0;
this.flower_same_cards = 0;
this.takeFirstHandCards = [];
this.titleType = [ 0, 0, 0, 0 ];
this.titleRank = [ 0, 0, 0, 0 ];
this.cardRecordArr = [];
this.useNoteCardType = c.GLProtocol.msgCardRecordState.eFlag.FLAG_RELINK_WITH_NONE;
this.useNoteCardStatus = 0;
this.buffList = [];
this.buffFirstHuMult = null;
this.buffMingPaiMult = null;
this.buffBombMult = null;
this.buffCloneCnt = null;
this.goldBuffCard = null;
this.towerCardsMsg = [];
this.shushuTouchu = 0;
this.takeFirst = [];
}
clearAllPlayerResult() {
this.playersResult = [];
for (let t = 0; t < r.MAX_PLAYER; t++) this.playersResult[t] = new h.default();
}
seatToLocal(t) {
let e = r.SELF_LOCAL_SEAT, i = 0;
return t == this.selfSeat ? e : e = ((t - this.selfSeat + r.MAX_PLAYER) % r.MAX_PLAYER + e) % r.MAX_PLAYER;
}
localToSeat(t) {
return this.playerData[t] ? this.playerData[t].sitorder : 0;
}
getSelfSeat() {
return this.selfSeat;
}
setBaseInfo(t) {
this.baseinfo = t;
}
getBaseInfo() {
return this.baseinfo || null;
}
setStartGameGold(t) {
this.startGameGold = t;
}
getStartGameGold() {
return this.startGameGold;
}
setPlayerDataBySeat(t, e) {
const i = this.getSeatByNumid(e._area_id, e._nid);
i && delete this.playerData[i];
let s = r.SELF_LOCAL_SEAT;
const o = this.getImpl(a.comm.lobby.IUserManager).numid;
e._nid == o && e._area_id == a.comm.g.areaConfig.areaID ? this.selfSeat = e._seat : s = this.seatToLocal(t);
this.playerData[s] || (this.playerData[s] = new h.default());
this.playerData[s].setData(e);
this.playerData[s].localSeat = s;
}
setPlayerDataByNumid(t, e, i) {
const s = this.getSeatByNumid(t, e);
this.playerData[s].setData(i);
}
setPlayerDataLeaveFlag(t, e) {
this.playerData[t].setLeaveFlag(e);
}
setPlayerDataExByNumid(t, e, i) {
const s = this.getSeatByNumid(t, e);
this.playerData[s] && this.playerData[s].setDataEx(i.nPlayState);
}
getNumidByLocalSeat(t) {
return this.playerData[t].numid;
}
getSeatByNumid(t, e) {
for (let i = 0; i < r.MAX_PLAYER; i++) if (this.playerData[i] && this.playerData[i].numid == e && this.playerData[i].areaid == t) return i;
return null;
}
getPlayerByNumid(t, e) {
for (let i = 0; i < r.MAX_PLAYER; i++) if (this.playerData[i] && this.playerData[i].numid == e && this.playerData[i].areaid == t) return this.playerData[i];
return null;
}
getPlayerByLocalSeat(t) {
return this.playerData[t];
}
clearAllPlayer() {
this.playerData = [];
for (let t = 0; t < r.MAX_PLAYER; t++) this.playerData[t] = new h.default();
}
clearPlayerByNumid(t, e) {
for (let i = 0; i < r.MAX_PLAYER; i++) if (this.playerData[i] && this.playerData[i].numid == e && this.playerData[i].areaid == t) {
this.playerData[i] = null;
this.playerData[i] = new h.default();
}
}
getPlayerSex(t) {
const e = this.playerData[t];
return e && e.sex || 49;
}
getPlayerHeadInfo(t) {
console.log("headMap:", t, JSON.stringify(this.headMap));
return this.headMap[t] || {
headid: 0,
headUrl: ""
};
}
setPlayerHeadInfo(t, e, i = "") {
this.headMap[t] = {
headid: e,
headUrl: i
};
}
getHeadBox(t) {
return this.headBox[t] || 0;
}
setHeadBox(t, e) {
this.headBox[t] = e;
}
getPlayerBySeat(t) {
for (let e = 0; e < r.MAX_PLAYER; e++) if (this.playerData[e] && this.playerData[e].sitorder == t) return this.playerData[e];
return null;
}
getSelf() {
var t;
return (null === (t = this.playerData[r.SELF_LOCAL_SEAT]) || void 0 === t ? void 0 : t.numid) ? this.playerData[r.SELF_LOCAL_SEAT] : this.selfData;
}
setSelfSR(t) {
var e;
this.selfData.sr = t;
(null === (e = this.playerData[r.SELF_LOCAL_SEAT]) || void 0 === e ? void 0 : e.numid) && (this.playerData[r.SELF_LOCAL_SEAT].sr = t);
}
setSelfSeat(t) {
this.selfSeat = t;
this.playerData[r.SELF_LOCAL_SEAT] && (this.playerData[r.SELF_LOCAL_SEAT].sitorder = t);
}
setGameState(t) {
this.gameState = t;
}
getGameState() {
return this.gameState;
}
getNextSeat(t) {
return this.cardLogicData.getNextSeat(t);
}
setPrePlayerSeat(t) {
this.cardLogicData.setPrePlayerSeat(t);
}
getPrePlayerSeat() {
return this.cardLogicData.getPrePlayerSeat();
}
setNowPlayerSeat(t) {
this.cardLogicData.setNowPlayerSeat(t);
}
getNowPlayerSeat() {
return this.cardLogicData.getNowPlayerSeat();
}
setSpecfCards(t) {
this.cardLogicData.setSpecfCards(t);
}
getSpecfCards() {
return this.cardLogicData.getSpecfCards();
}
setHandCards(t, e = []) {
s.cardData[t].setHandCards(e);
}
getHandCards(t) {
return s.cardData[t].getHandCards() || [];
}
getAllHandCardsWithoutHandBack() {
const t = [];
for (let e = 0; e < r.MAX_PLAYER; e++) {
const i = s.cardData[e].getHandCards();
for (const e of i) n.CardID.CID_BACK != e && t.push(e);
}
return t;
}
setOutCards(t, e) {
s.cardData[t].setOutCards(e);
}
getOutCards(t) {
return s.cardData[t].getOutCards();
}
setStarCount(t, e) {
s.cardData[t].setStarCount(e);
}
getStarCount(t) {
return s.cardData[t].getStarCount();
}
setHuCards(t, e) {
s.cardData[t].setHuCards(e);
}
getBombCards(t) {
return s.cardData[t].getBombCards();
}
setBombCards(t, e) {
s.cardData[t].setBombCards(e);
}
setTowerCardsMsg(t, e) {
this.towerCardsMsg[t] = e;
}
getTowerCardsMsg(t) {
return this.towerCardsMsg[t] || null;
}
getBombCardsSelf() {
return this.towerCardsSelf;
}
setBombCardsSelf(t) {
this.towerCardsSelf = t;
if (t._bomb_count > 0) {
let e = !0, i = !0;
const s = (0, n.COLOR_SAME)(t._bomb_cards[0]), o = (0, n.COLOR)(t._bomb_cards[0]);
for (let a = 1; a < t._bomb_count; a++) {
const l = (0, n.COLOR_SAME)(t._bomb_cards[a]), _ = (0, n.COLOR)(t._bomb_cards[a]);
s != l && (e = !1);
o != _ && (i = !1);
}
this.color_same_cards = !0 === e ? s : 0;
this.flower_same_cards = !0 === i ? o : 0;
}
}
getHuCards(t) {
return s.cardData[t].getHuCards();
}
setDrawCard(t, e) {
s.cardData[t].setDrawCard(e);
}
getDrawCard(t) {
return s.cardData[t].getDrawCard();
}
delHandCards(t, e) {
s.cardData[t].delHandCards(e);
}
setSelectOutCardsIndex(t, e) {
s.cardData[t].setSelectCardsIndex(e);
}
getSelectOutCardsIndex(t) {
return s.cardData[t].getSelectCardsIndex();
}
getSelectCards(t) {
const e = s.cardData[t].getSelectCardsIndex(), i = [], o = this.getHandCards(t), a = e.length;
for (let t = 0; t < a; t++) {
const s = e[t];
o[t] && 1 == s && i.push(o[t]);
}
return i;
}
getSelfSelectCards() {
return this.getSelectCards(r.SELF_LOCAL_SEAT);
}
setNoteCardStatus(t) {
this.useNoteCardStatus = t;
}
isNoteCardStatusWillUse() {
return 1 == this.useNoteCardStatus;
}
setUseNoteCardType(t) {
this.useNoteCardType = t;
}
isUseNoteCardCount() {
return this.useNoteCardType == c.GLProtocol.msgCardRecordState.eFlag.FLAG_RELINK_WITH_COUNT;
}
isUseNoteCardTime() {
return this.useNoteCardType == c.GLProtocol.msgCardRecordState.eFlag.FLAG_RELINK_WITH_TIME;
}
setCardRecordData(t) {
this.cardRecordArr = t;
}
getCardRecordData() {
return this.cardRecordArr;
}
setWinPoint(t, e) {
this.gameLogicData.setWinPoint(t, e);
}
getWinPoint() {
return this.gameLogicData.getWinPoint();
}
setPlayerResultByServerSeat(t, e) {
this.playersResult[t] || (this.playersResult[t] = {});
this.playersResult[t] = e;
}
getPlayerResultByServerSeat(t) {
for (let e = 0; e < r.MAX_PLAYER; e++) if (this.playersResult[e] && this.playersResult[e].sitorder == t) return this.playersResult[e];
}
updateSelfData(t) {
this.selfData.setData(t);
}
seCouponConfig(t) {
this.couponConfig = t || {};
}
getCouponConfig() {
return this.couponConfig || {};
}
updateChangeCardsFlag(t) {
this.gameLogicData.changeCardsOperatorFlag = t;
}
clearChangeCardsFlag() {
this.updateChangeCardsFlag(0);
}
getChangeCardsFlag() {
return this.gameLogicData.changeCardsOperatorFlag;
}
setBankrupt(t, e) {
this.gameLogicData.isBankrupt[t] = e;
}
getBankrupt(t) {
return this.gameLogicData.isBankrupt[t];
}
clearFlowData() {
this.gameLogicData.flowData = [];
}
addFlowData(t) {
for (let e = 0; e < t._count; e++) {
const i = {
_ct: t._ct[e],
_mult: t._mult[e],
_hu_type: t._hu_type[e],
_from_seat: t._from_seat[e],
_ex_flag: t._ex_flag[e],
_score: t._score[e],
_gold_mult: t._gold_mult[e],
_bao_mult: t._bao_mult[e],
_tower_mult: t._tower_mult[e],
_same_mult: t._same_mult[e],
_ming_mult: t._ming_mult[e]
};
this.gameLogicData.flowData.push(i);
}
}
getFlowData() {
return this.gameLogicData.flowData;
}
getSeatName(t) {
let e = "";
switch (t) {
case 0:
e = "上家";
break;

case 2:
e = "下家";
break;

case 3:
e = "对家";
break;

case 1:
e = "自己";
}
return e;
}
getSimpleCardUrl(t) {
(t <= n.CardID.CID_NONE || t > n.CardID.CID_BACK) && (t = n.CardID.CID_BACK);
return "ui://Game_K7Star_Card/poker04_" + (t < 10 ? "0" + t.toString() : t.toString());
}
isShowChangeCardsAD(t = 0) {
var e;
return t <= (null === (e = this.gameLogicData.getchangeCardsConfig()) || void 0 === e ? void 0 : e.aim_type_mult_recommend);
}
setLastHuPos(t) {
this.lastHuCardPos = o.Util.clone(t);
}
getLastHuPos() {
return this.lastHuCardPos;
}
resetAllLeftCards() {
this.cardLogicData.resetRecoorder();
for (let t = 0; t < r.MAX_PLAYER; t++) {
this.cardLogicData.updateRecoorder(this.getHandCards(t));
this.cardLogicData.updateRecoorder(this.getOutCards(t));
this.cardLogicData.updateRecoorder(this.getHuCards(t));
this.cardLogicData.updateRecoorder(this.getBombCards(t));
}
}
getLeftCardsCount() {
return this.cardLogicData.getLeftCardsCount();
}
setPlayingCardAni(t) {
this.isPlayCardAni = t;
}
getPlayingCardAni() {
return this.isPlayCardAni;
}
setSmartRecommend(t) {
this.smartRecommend = t;
}
getSmartRecommend() {
return this.smartRecommend;
}
setSmartRecommendOpen(t) {
this.smartRecommendOpen = t;
}
getSmartRecommendOpen() {
return this.smartRecommendOpen;
}
setTargetChangeCards(t) {
this.targetChangeCards = t;
}
getTargetChangeCards() {
return this.targetChangeCards;
}
setChangeCardsConfig(t) {
this.cc_config = t;
}
getChangeCardsConfig() {
return this.cc_config;
}
getCCLimitedMulti() {
return this.cc_config ? this.cc_config.autoMulti : 0;
}
isInGame() {
var t;
return (null === (t = this.getGameState()) || void 0 === t ? void 0 : t._state) >= r.ENUM_GAME_STATE.GS_START && this.getGameState()._state < r.ENUM_GAME_STATE.GS_TOTAL_RESULT || this.getGameState()._state == r.ENUM_GAME_STATE.GS_WAIT;
}
isShowNoteCardBtnInGame() {
const t = this.getGameStateOld()._state;
return t > r.ENUM_GAME_STATE.GS_CLONE && t < r.ENUM_GAME_STATE.GS_TOTAL_RESULT;
}
setNobilityResult(t) {
this.nobilitResult = t;
}
getNobilityResult() {
return this.nobilitResult || null;
}
setBankruptInGameConfig(t) {
this.bankruptInGameConfig = t;
}
getBankruptInGameConfig() {
return this.bankruptInGameConfig;
}
setRechargeInGameProducts(t) {
this.rechargeInGameProducts = t;
}
getRechargeInGameProducts() {
return this.rechargeInGameProducts;
}
setWinningGiftInGameConfig(t) {
this.winningGiftActiveConfig = t;
}
getWinningGiftInGameConfig() {
return this.winningGiftActiveConfig;
}
setGameDBPConfig(t) {
this.gameDBPConfig = t;
}
getGameDBPConfig() {
return this.gameDBPConfig;
}
getReconnect() {
return this.reconnect || {};
}
setReconnect(t) {
this.reconnect = t;
}
getActPower() {
return this.actPower || {};
}
setActPower(t) {
this.actPower = t;
}
getActPowerNew() {
return this.actPowerNew || null;
}
setActPowerNew(t) {
this.actPowerNew = t;
}
getGameConfig() {
return this.gameConfig || {};
}
setGameConfig(t) {
this.gameConfig = t;
}
getTimer() {
return this.timer || {};
}
setTimer(t) {
this.timer = t;
}
initTingList() {
this.tingList = [];
}
addTingList(t) {
-1 == t._index ? this.tingList.push(t) : this.tingList[t._index] = t;
}
getTingCardMult(t) {
let e = 0;
for (let i = 0; i < this.tingList.length; i++) {
const s = this.tingList[i];
for (let i = 0; i < s._hu_cards.length; i++) if (s._hu_cards[i] == t) {
e = s._ct[i];
break;
}
}
return e;
}
getTingCardInfo(t) {
let e = null;
for (let i = 0; i < this.tingList.length; i++) {
const s = this.tingList[i];
if (s._out_card == t) {
e = s;
break;
}
}
return e;
}
getTingList() {
return this.tingList;
}
getTingListCount() {
return this.tingList.length;
}
setNowTingInfo(t) {
let e = null;
for (let i = 0; i < this.tingList.length; i++) {
const s = this.tingList[i];
if (s._out_card == t) {
e = s;
break;
}
}
null === e && this.getHuCards(r.SELF_LOCAL_SEAT).length > 0 && 1 === this.tingList.length && (e = this.tingList[0]);
this.nowTingInfo = e;
}
getNowTingInfo() {
return this.nowTingInfo || null;
}
setHuStatus(t) {
this.bHuPaiStatus = t;
}
getHuStatus() {
return this.bHuPaiStatus;
}
getCardLogicData() {
return this.cardLogicData;
}
setRecommendCards(t) {
this.recommendCards = t;
}
getRecommendCards() {
return this.recommendCards;
}
setRecommendCardsNew(t) {
this.modifyRecommendCards(t);
this.recommendCardsNew = t;
}
modifyRecommendCards(t) {
t._cards.forEach((e, i) => {
const s = [];
let o = 2, a = 2, l = 2, _ = 2;
e.forEach(t => {
if (t == n.CardValue.CV_SJ) if (o > 0) {
s.push(n.CardID.CID_BJ);
o--;
} else s.push(n.CardID.CID_SJ); else if (a > 0) {
s.push(t + 39);
a--;
} else if (l > 0) {
s.push(t + 26);
l--;
} else if (_ > 0) {
s.push(t + 13);
_--;
} else s.push(t);
});
t._cards[i] = s;
});
}
getRecommendCardsNew() {
return this.recommendCardsNew;
}
setHuCardsData(t) {
this.huCardsData = t;
}
getHuCardsData() {
return this.huCardsData;
}
setRoundResult(t) {
this.roundResult = t;
}
getRoundResult() {
return this.roundResult;
}
getRoundResultHuList() {
const t = this.getRoundResult(), e = [];
for (let i = 0; i < t._self_hu.length; i++) {
const s = t._self_hu[i];
for (let o = 0; o < s.length; o++) {
const a = s[o];
if (a === c.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_HU || a === c.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_ZIMO) {
e[o] || (e[o] = []);
e[o].push(t._hu_card[i][o]);
}
}
}
return e;
}
getRoundResultChiFlag() {
const t = this.getRoundResult(), e = [];
for (let i = 0; i < t._self_hu.length; i++) {
const s = t._self_hu[i];
for (let t = 0; t < s.length; t++) {
const o = s[t];
o != c.GLProtocol.msgRoundResult.eFlag.FLAG_NONE && (o === c.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_HU || o === c.GLProtocol.msgRoundResult.eFlag.FLAG_BE_HU ? e[i] = !1 : e[i] = !0);
}
}
return e;
}
setTotalResult(t) {
this.totalResult = t;
}
getTotalResult() {
return this.totalResult;
}
setTakeFirstHandCards(t) {
this.takeFirstHandCards = t;
}
getTakeFirstHandCards() {
return this.takeFirstHandCards || [];
}
setEndChooseCard(t) {
this.endChooseCard = t;
}
getEndChooseCard() {
return this.endChooseCard;
}
getPlayCards() {
return this.playCards || {};
}
setPlayCards(t) {
this.playCards = t;
}
getPlayCardsPeak() {
return this.playCardsPeak || {};
}
setPlayCardsPeak(t) {
this.playCardsPeak = t;
}
getCloneCardsAniEnd() {
return this.cloneAniEnd || !1;
}
setCloneCardsAniEnd(t) {
this.cloneAniEnd = t;
}
getTowerCards() {
return this.towerCards || {};
}
setTowerCards(t) {
this.towerCards = t;
}
setGameStateOld(t) {
this.gameStateOld = t;
}
getGameStateOld() {
return this.gameStateOld;
}
setCloneCards(t) {
this.cardLogicData.setCloneCards(t);
}
getCloneCards() {
return this.cardLogicData.getCloneCards();
}
setPlayerLeave(t, e) {
this.playerLeave[t] = e;
}
getPlayerLeave(t) {
return this.playerLeave[t] || !1;
}
setMultConfig(t) {
this.multConfig = t;
}
getMultConfig() {
return this.multConfig;
}
getDeckCount() {
return this.deckCount || {};
}
setDeckCount(t) {
this.deckCount = t;
}
setMingCards(t) {
this.playerMingCard[t] = !0;
}
getMingCards(t) {
return this.playerMingCard[t] || !1;
}
setAddCards(t) {
this.addCards = t;
}
getAddCards() {
return this.addCards;
}
setPeak(t) {
this.bPeak = t;
}
getPeak() {
return this.bPeak;
}
setGameTingCard(t) {
console.log("setGameTingCard", t);
this.gameTingCard = t;
}
getGameTingCard() {
return this.gameTingCard;
}
setSkipLowFirst(t) {
this.skipLow_first = t;
}
getSkipLowFirst() {
return this.skipLow_first;
}
setSkipLowLocal(t) {
this.skipLow_local = t;
}
getSkipLowLocal() {
return this.skipLow_local;
}
getDressProp(t, e) {
this.dressProp[e] || (this.dressProp[e] = {});
return this.dressProp[e][t] || 0;
}
setDressProp(t, e, i) {
this.dressProp[e] || (this.dressProp[e] = {});
this.dressProp[e][t] = i;
}
getSelfGameCount() {
const t = this.getSelf();
return t ? t.win + t.lose + t.draw + t.escape : 0;
}
getGuildGameCount() {
return this.getImpl(a.comm.lobby.ICommonActModule).getPlayerGuideGameCount(g.GAME_ID);
}
getCurRoundZhaGuild() {
return this.getSelfGameCount() >= this.getGuildGameCount() || this.curRoundZhaGuild;
}
setCurRoundZhaGuild() {
this.curRoundZhaGuild = !0;
}
getCurRoundBaoGuild() {
return this.getSelfGameCount() >= this.getGuildGameCount() || this.curRoundBaoGuild;
}
setCurRoundBaoGuild() {
this.curRoundBaoGuild = !0;
}
getCurRoundWangGuild() {
return this.getSelfGameCount() >= this.getGuildGameCount() || this.curRoundWangGuild;
}
setCurRoundWangGuild() {
this.curRoundWangGuild = !0;
}
getCurRoundMingGuild() {
return this.getSelfGameCount() >= this.getGuildGameCount() || this.curRoundMingGuild;
}
setCurRoundMingGuild() {
this.curRoundMingGuild = !0;
}
getCurRoundZimoGuild() {
return this.getSelfGameCount() >= this.getGuildGameCount() || this.curRoundZimoGuild;
}
setCurRoundZimoGuild() {
this.curRoundZimoGuild = !0;
}
getNumidHeadRandom(t) {
if (this.numidHeadMap[t]) return this.numidHeadMap[t];
const e = Math.floor(90 * Math.random()) + 10;
this.numidHeadMap[t] = e;
this.saveNumidHeadMap();
return e;
}
saveNumidHeadMap() {
const t = JSON.stringify(this.numidHeadMap);
a.gf.LocalStorage.setString(this.numidHeadMapKey, t);
}
loadNumidHeadMap() {
const t = a.gf.LocalStorage.getString(this.numidHeadMapKey);
"" != t && (this.numidHeadMap = JSON.parse(t));
}
setCurBGMName(t) {
this.curBGMName = t;
}
getCurBGMName() {
return this.curBGMName;
}
setNoLimitInfo(t, e) {
this.noLimitInfo[t] = e;
}
getNoLimitInfo(t) {
return this.noLimitInfo[t] || null;
}
getWinLimitScore() {
var t;
let e = (null === (t = this.getBaseInfo()) || void 0 === t ? void 0 : t._win_limit) || 0;
const i = this.getNoLimitInfo(r.SELF_LOCAL_SEAT);
i && i._no_limit_mult > 0 && i._no_limit_can_win > 0 && e > 0 && (e = i._no_limit_can_win);
return e;
}
getWinLimitMult() {
var t;
let e = (null === (t = this.getBaseInfo()) || void 0 === t ? void 0 : t._win_mult) || 0;
const i = this.getNoLimitInfo(r.SELF_LOCAL_SEAT);
i && i._no_limit_mult > 0 && i._no_limit_can_win > 0 && e > 0 && (e *= i._no_limit_mult);
return e;
}
setTakeFirstIng(t) {
this.isTakeFirstIng = t;
}
getTakeFirstIng() {
return this.isTakeFirstIng;
}
setRechargeTipShowed(t) {
this.isRechargeTipShowed = t;
}
getRechargeTipShowed() {
return this.isRechargeTipShowed;
}
setSelfMaxCanWin(t) {
this.selfMaxCanWin = t;
}
getSelfMaxCanWin() {
return this.selfMaxCanWin;
}
getViewSizeScale() {
const t = a.gf.FGUI.getSize(a.gf.App.inst.root);
return t.width / t.height;
}
isViewScaleLevel() {
const t = this.getViewSizeScale();
return t > 2.1 ? 3 : t > 2 ? 2 : t > 1.9 ? 1 : 0;
}
setShuShuPowerPropSource(t) {
this.shuShuPowerPropSource = t;
}
getShuShuPowerPropSource() {
return this.shuShuPowerPropSource;
}
setShowPopYunTips(t) {
this.showPopYunTips = t;
}
getShowPopYunTips() {
return this.showPopYunTips;
}
setShowYPBackBtn(t) {
this.showYPBackBtn = t;
}
getShowYPBackBtn() {
return this.showYPBackBtn;
}
setShowYunBtnTips(t) {
this.showYPBtnTips = t;
}
getShowYunBtnTips() {
return this.showYPBtnTips;
}
setTitleType(t, e) {
this.titleType[t] = e;
}
getTitleType(t) {
return this.titleType[t] || 0;
}
setTitleRank(t, e) {
this.titleRank[t] = e;
}
getTitleRank(t) {
return this.titleRank[t] || 0;
}
setYunProtectPropCnt(t) {
this.yunProtectPropCnt = t;
}
getYunProtectPropCnt() {
return this.yunProtectPropCnt;
}
setSplitCard(t) {
const e = {};
for (let t = 1; t <= 13; t++) e[t] = {
black_cards: [],
red_cards: [],
[n.CardColor.CC_DIAMOND]: [],
[n.CardColor.CC_CLUB]: [],
[n.CardColor.CC_HEART]: [],
[n.CardColor.CC_SPADE]: []
};
for (const i of t) {
if (i === n.CardID.CID_BJ || i === n.CardID.CID_SJ) continue;
const t = (0, n.COLOR)(i), s = (0, n.VALUE)(i), o = (0, n.COLOR_SAME)(i);
o == n.CardColor_Same.CC_BLACK ? e[s].black_cards.push(i) : o == n.CardColor_Same.CC_RED && e[s].red_cards.push(i);
e[s][t].push(i);
}
for (const t in e) 0 === e[t].black_cards.length && 0 === e[t].red_cards.length && delete e[t];
return e;
}
getBombCardValue(t) {
const e = this.getActPowerNew(), i = [];
if (e && e._bomb_card_value && e._bomb_card_value[t] && e._bomb_card_value[t] > 0) {
const s = this.getHandCards(r.SELF_LOCAL_SEAT), o = this.setSplitCard(s)[e._bomb_card_value[t]];
let a = 0, l = 0;
if (e._play == c.GLProtocol.msgActPower.eFlag.FLAG_CAN_PASS) {
const t = e._bomb_card_other || 0;
i.push(t);
const s = (0, n.COLOR)(t), _ = (0, n.COLOR_SAME)(t);
o[s].length >= 3 ? l = s : _ == n.CardColor_Same.CC_BLACK && o.black_cards.length >= 3 ? a = n.CardColor_Same.CC_BLACK : _ == n.CardColor_Same.CC_RED && o.red_cards.length >= 3 && (a = n.CardColor_Same.CC_RED);
} else {
for (let t = n.CardColor.CC_DIAMOND; t <= n.CardColor.CC_SPADE; t++) if (o[t].length >= 4) {
a = 0;
l = t;
break;
}
0 == a && 0 == l && (o.black_cards.length >= 4 ? a = n.CardColor_Same.CC_BLACK : o.red_cards.length >= 4 && (a = n.CardColor_Same.CC_RED));
}
if (l > 0) for (let t = 0; t < 4; t++) i.length < 4 && i.push(o[l][t]); else if (a > 0) {
const t = a == n.CardColor_Same.CC_BLACK ? o.black_cards : o.red_cards;
for (let e = 0; e < 4; e++) i.length < 4 && i.push(t[e]);
} else {
for (let t = 0; t < o.red_cards.length; t++) {
const e = o.red_cards[t];
i.length < 4 && i.push(e);
}
for (let t = 0; t < o.black_cards.length; t++) {
const e = o.black_cards[t];
i.length < 4 && i.push(e);
}
}
}
return i;
}
getTowerCardValue() {
var t;
const e = this.getActPowerNew(), i = [], s = this.getHandCards(r.SELF_LOCAL_SEAT);
let o = 0;
if (this.getHuCards(r.SELF_LOCAL_SEAT).length > 0) o = e._tower_card_value; else {
for (const t of s) if ((0, n.VALUE)(t) == e._tower_card_value) {
const e = (0, n.COLOR_SAME)(t), s = (0, n.COLOR)(t);
let o = 0;
this.color_same_cards === e && o++;
this.flower_same_cards === s && o++;
i.push({
card: t,
index: o
});
}
i.sort((t, e) => t.index - e.index);
o = (null === (t = null == i ? void 0 : i[0]) || void 0 === t ? void 0 : t.card) || 0;
}
return o;
}
setBtnGameBuffPosition(t) {
this.btnGameBuffPosition = t;
}
getBtnGameBuffPosition() {
return this.btnGameBuffPosition;
}
setBtnDeckBuffPosition(t) {
this.btnDeckBuffPosition = t;
}
getBtnDeckBuffPosition() {
return this.btnDeckBuffPosition;
}
addBuff(t) {
t.id == r.GOLD_CARD_BUFF_FLAG.GCBF_FIRST && this.setBuffFirstHuMult(t);
t.id == r.GOLD_CARD_BUFF_FLAG.GCBF_MNP && this.setBuffMingPaiMult(t);
t.id == r.GOLD_CARD_BUFF_FLAG.GCBF_DB && this.setBuffBombMult(t);
t.id == r.GOLD_CARD_BUFF_FLAG.GCBF_CLONE && this.setBuffCloneCnt(t);
0 == t.flag && this.buffList.push(t);
}
getBuffList() {
return this.buffList;
}
clearBuffList() {
this.buffList = [];
this.buffFirstHuMult = null;
this.buffMingPaiMult = null;
this.buffBombMult = null;
this.buffCloneCnt = null;
}
setPlayerPos(t, e) {
this.playerPos[t] = e;
}
getPlayerPos(t) {
return this.playerPos[t] || a.gf.newVec2(0, 0);
}
setBuffFirstHuMult(t) {
this.buffFirstHuMult = t;
}
getBuffFirstHuMult() {
return this.buffFirstHuMult;
}
setBuffMingPaiMult(t) {
this.buffMingPaiMult = t;
}
getBuffMingPaiMult() {
return this.buffMingPaiMult;
}
setBuffBombMult(t) {
this.buffBombMult = t;
}
getBuffBombMult() {
return this.buffBombMult;
}
setBuffCloneCnt(t) {
this.buffCloneCnt = t;
}
getBuffCloneCnt() {
return this.buffCloneCnt;
}
getBuffDetail(t, e) {
let i = "";
switch (t.id) {
case r.GOLD_CARD_BUFF_FLAG.GCBF_FIRST:
i = r.GOLD_CARD_BUFF_TEXT.GCBF_TEXT_FIRST.replace("${num}", t.cnt.toString());
break;

case r.GOLD_CARD_BUFF_FLAG.GCBF_MNP:
i = r.GOLD_CARD_BUFF_TEXT.GCBF_TEXT_MNP.replace("${num}", t.cnt.toString());
break;

case r.GOLD_CARD_BUFF_FLAG.GCBF_BOMB:
i = r.GOLD_CARD_BUFF_TEXT.GCBF_TEXT_BOMB.replace("${num}", t.cnt.toString());
break;

case r.GOLD_CARD_BUFF_FLAG.GCBF_JZZ:
{
const s = this.getSeatName(e);
i = r.GOLD_CARD_BUFF_TEXT.GCBF_TEXT_JZZ.replace("${player}", s).replace("${num}", t.cnt.toString());
}
break;

case r.GOLD_CARD_BUFF_FLAG.GCBF_DB:
i = r.GOLD_CARD_BUFF_TEXT.GCBF_TEXT_DB.replace("${limit}", t.mult.toString()).replace("${num}", t.cnt.toString());
break;

case r.GOLD_CARD_BUFF_FLAG.GCBF_CLONE:
i = r.GOLD_CARD_BUFF_TEXT.GCBF_TEXT_CLONE.replace("${cnt}", t.cnt.toString());
break;

case r.GOLD_CARD_BUFF_FLAG.GCBF_YB:
{
const s = a.comm.StringUtils.dealBigNumEx5(t.cnt);
let o = this.getSeatName(e);
0 == t.flag && (o = "所有人");
i = r.GOLD_CARD_BUFF_TEXT.GCBF_TEXT_YB.replace("${player}", o).replace("${num}", s);
}
}
return i;
}
isBombCardsBuff(t) {
return !(t._tower_count <= 0) && (t._flag == c.GLProtocol.msgTowerCards.eFlag.FLAG_TOWER && t._tower_cards[t._tower_count - 1] === n.CardID.CID_GOLD_BUFF);
}
setGoldBuffCard(t) {
this.goldBuffCard = t;
}
getGoldBuffCard() {
return this.goldBuffCard;
}
setGoldCardPos(t, e) {
this.goldCardPos[t] = e;
}
getGoldCardPos(t) {
return this.goldCardPos[t] || a.gf.newVec2(0, 0);
}
setShushuTouchu(t) {
0 === this.shushuTouchu ? this.shushuTouchu = t : this.shushuTouchu != t && (this.shushuTouchu = 3);
}
getShushuTouchu() {
return this.shushuTouchu;
}
setTakeFirst(t, e) {
this.takeFirst[t] = e;
}
getTakeFirst(t) {
return this.takeFirst[t];
}
getTakeFirstCount() {
let t = 0;
for (let e = 0; e < this.takeFirst.length; e++) this.takeFirst[e] && t++;
return t;
}
};
m.cardData = [];
u([ a.gf.init ], m.prototype, "initData", null);
const C = m = s = u([ a.gf.module({
name: "TableData"
}) ], m);
},
"./bin/gameLogic/CardRuleLogic.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => (class {
clone(t) {
return JSON.parse(JSON.stringify(t));
}
sortCard(t, e, i = !1) {
let s = t;
e == a.CARD_SORT_TYPE.SORT_BY_POWER ? s = i ? this.sortMaxCardsByValue(t) : this.sortMinCardsByValue(t) : e == a.CARD_SORT_TYPE.SORT_BY_VALUE && (s = i ? this.sortMaxCardsByValueEx(t) : this.sortMinCardsByValue(t));
return s;
}
sortMaxCardsByValue(t) {
if (0 === t.length) return t;
const e = this.clone(t);
e.sort(this.compCardsByValue.bind(this));
return e;
}
sortMaxCardsByValueEx(t) {
if (0 === t.length) return t;
const e = this.clone(t);
e.sort(this.compCardsByValueEx.bind(this));
return e;
}
sortMinCardsByValue(t) {
if (0 === t.length) return t;
const e = this.clone(t);
e.sort((t, e) => this.compCardsByValue(e, t));
return e;
}
compCardsByValue(t, e) {
return s.ucCardPower[e] == s.ucCardPower[t] ? e - t : s.ucCardPower[e] - s.ucCardPower[t];
}
compCardsByValueEx(t, e) {
if (s.ucCardPower[e] == s.ucCardPower[t]) {
const i = [ -1, 1, 2, 0, 3 ], o = (0, s.COLOR)(e), a = (0, s.COLOR)(t);
return i[o] - i[a];
}
return s.ucCardPower[e] - s.ucCardPower[t];
}
compCardsByValueBool(t, e) {
return s.ucCardPower[t] < s.ucCardPower[e];
}
sortCardsByPower(t, e = !1) {
if (0 === t.length) return t;
const i = o.Util.clone(t);
i.sort((t, i) => (0, s.get_num_by_cardVal)((0, s.VALUE)(t)) == (0, s.get_num_by_cardVal)((0, 
s.VALUE)(i)) ? e ? t < i : t > i : e ? (0, s.get_num_by_cardVal)((0, s.VALUE)(t)) < (0, 
s.get_num_by_cardVal)((0, s.VALUE)(i)) : (0, s.get_num_by_cardVal)((0, s.VALUE)(t)) > (0, 
s.get_num_by_cardVal)((0, s.VALUE)(i)));
return i;
}
isEqualByCardsValue(t, e) {
return s.ucCardPower[t] == s.ucCardPower[e];
}
compCardsByColor(t, e) {
return this.getCardColor(t) - this.getCardColor(e);
}
getCardLogicValue(t) {
return s.ucCardValue[t];
}
getCardColor(t) {
return s.ucCardColor[t];
}
delArraryInOtherArrary(t, e) {
const i = [], s = JSON.parse(JSON.stringify(e)), o = JSON.parse(JSON.stringify(t));
for (const t of s) if (o.length > 0) for (let e = 0; e < o.length; e++) {
if (o[e] == t) {
o.splice(e, 1);
break;
}
e == o.length - 1 && i.push(t);
} else i.push(t);
return i;
}
delArraryInOtherArraryEx(t, e) {
const i = [], s = JSON.parse(JSON.stringify(e)), o = JSON.parse(JSON.stringify(t));
for (const t of s) if (o.length > 0) {
let e = !1;
for (let i = o.length - 1; i >= 0; i--) if (o[i] === t) {
o.splice(i, 1);
e = !0;
break;
}
e || i.push(t);
} else i.push(t);
return i;
}
hasCardBack(t) {
for (let e = 0; e < t.length; e++) if (t[e] == s.CardID.CID_BACK) return !0;
return !1;
}
})
});
var s = i("./bin/config/CardCode.js"), a = i("./bin/config/GameDefine.js");
},
"./bin/gf.js": (t, e, i) => {
i.r(e);
i.d(e, {
gf: () => a,
comm: () => n
});
var a = s, n = o;
},
"./bin/interface/Interface.js": () => {},
"./bin/logic/actModules/GameActModule.js": (t, e, i) => {
i.r(e);
i.d(e, {
AUTO_CLOSE_EVEVT_NAME: () => d,
GAME_ACT_COFING: () => h,
GAME_ACT_EVENTS: () => c,
MAX_CTCHALENGE_CNT: () => g,
default: () => C
});
var s = i("./bin/config/GameConfig.js"), a = i("./bin/data/TableData.js"), n = i("./bin/gf.js"), l = i("./bin/logic/actModules/data/GameActData.js"), _ = i("./bin/config/GameDefine.js"), r = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
const d = "AUTO_CLOSE_EVEVT_NAME", h = {
CMD_CTCHALLENGE: {
GET_ACTIVE_INFO: {
cmd: 1,
head: "CMD_CTCHALLENGE_GET_ACTIVE_INFO"
},
REQ_BET: {
cmd: 2,
head: "CMD_CTCHALLENGE_REQ_BET"
},
REQ_CANCEL_BET: {
cmd: 3,
head: "CMD_CTCHALLENGE_REQ_CANCEL_BET"
}
}
}, c = {
EVT_CTCHALLENGE: {
BTN_CONTINUE: "BTN_CONTINUE"
}
}, g = 3, u = {
highGiftNewBtn: "highGiftNewBtn"
};
let m = class extends n.gf.ModuleBase {
init() {
this._iJoinRoomMoudle = this.getImpl(n.comm.lobby.IJoinRoomModule);
this._iAwardManager = this.getImpl(n.comm.lobby.IAwardManager);
this._gameActData = this.getImpl(l.default);
this._tableData = this.getImpl(a.default);
}
reqCTChallengeInfo(t = null) {
const e = {};
if (null == t) {
const e = this._iJoinRoomMoudle.getCurRoomData();
t = e && e.vrRoomLv || 0;
}
e.roomlv = t;
e.type = h.CMD_CTCHALLENGE.GET_ACTIVE_INFO.cmd;
e.betIdx = -1;
e.channelid = this.getImpl(n.comm.IHost).getChannelid() || 0;
this._iAwardManager.reqAwardInfo(e, n.comm.AwardConfig.cardTypeChallenge.type, s.GAME_ID);
}
reqCTChallengeBet(t = null, e = -1) {
const i = {};
if (null == t) {
const e = this._iJoinRoomMoudle.getCurRoomData();
t = e && e.vrRoomLv || 0;
}
i.roomlv = t;
i.type = h.CMD_CTCHALLENGE.REQ_BET.cmd;
i.betIdx = e;
i.channelid = this.getImpl(n.comm.IHost).getChannelid() || 0;
this._iAwardManager.reqAwardInfo(i, n.comm.AwardConfig.cardTypeChallenge.type, s.GAME_ID);
}
reqCTChallengeCancel(t = null, e = -1) {
const i = {};
if (null == t) {
const e = this._iJoinRoomMoudle.getCurRoomData();
t = e && e.vrRoomLv || 0;
}
i.roomlv = t;
i.type = h.CMD_CTCHALLENGE.REQ_CANCEL_BET.cmd;
i.betIdx = e;
i.channelid = this.getImpl(n.comm.IHost).getChannelid() || 0;
this._iAwardManager.reqAwardInfo(i, n.comm.AwardConfig.cardTypeChallenge.type, s.GAME_ID);
}
updateCardTypeChallengeData(t, e) {
var i, o;
if (t && e == s.GAME_ID && t.data) {
this._gameActData.setLastCTChallengeData(this._gameActData.getCTChallengeData());
this._gameActData.setCTChallengeData(t.data);
console.log("CardTypeChallenge updateCardTypeChallengeData: ", t.cmd);
if (h.CMD_CTCHALLENGE.GET_ACTIVE_INFO.cmd == t.cmd) {
this.updateCtChellengeActive();
this.dispatch(h.CMD_CTCHALLENGE.GET_ACTIVE_INFO.head, t.data);
} else if (h.CMD_CTCHALLENGE.REQ_BET.cmd == t.cmd) {
this.dispatch(h.CMD_CTCHALLENGE.REQ_BET.head, t.data);
this._gameActData.setDelCTBet((null === (i = t.data) || void 0 === i ? void 0 : i.bet) || []);
this.dispatch("updateSelfSR" + s.GAME_ID);
} else if (h.CMD_CTCHALLENGE.REQ_CANCEL_BET.cmd == t.cmd) {
this.dispatch(h.CMD_CTCHALLENGE.REQ_CANCEL_BET.head, t.data);
this._gameActData.setDelCTBet((null === (o = t.data) || void 0 === o ? void 0 : o.bet) || []);
this.dispatch("updateSelfSR" + s.GAME_ID);
}
}
}
updateCtChellengeActive() {
const t = this._gameActData.getCTChallengeData();
if (!t) return;
let e = 0;
if (1 == t.enable) for (let i = 0; i < g; i++) if (t.bet[i] > 0) {
e += t.bet[i];
t.bet[i] = 0;
}
this._gameActData.setCTChallengeData(t);
}
showCtChallengUI(t = !0) {
this.getImpl(n.gf.IViewPlugin).openView("CardTypeChallenge", s.GAME_ID, t);
}
showCtChallengMessageUI(t, e) {
this.getImpl(n.gf.IViewPlugin).openView("CardTypeChallengeMessage", t, e);
}
closeCtChallengMessageUI() {
this.getImpl(n.gf.IViewPlugin).closeView("CardTypeChallengeMessage");
}
continueCtChallenge() {
if (!this._gameActData.getLastCTChallengeData()) return;
if (!this._gameActData.getContineCTChallenge()) return;
const t = this._gameActData.getCTChallengeBet() || [];
for (let e = 0; e < g; e++) t[e] && t[e] > 0 && this.scheduleOnce(() => {
console.log("continueCtChallenge:", e);
this.reqCTChallengeBet(null, e + 1);
}, .5 + .25 * e);
}
hideAllAct(t) {
for (const e in u) this._gameActData.delControl(t, u[e]);
}
showHighGiftNewBtn(t, e) {
null == e || e.removeChildren();
this.hideHighGiftNewBtn(t);
this.getImpl(n.gf.IViewPlugin).openWidget("HighGiftNewBtn", t, e).then(i => {
n.gf.FGUI.addChild(e, i.fguiObject);
this._gameActData.setControl(t, u.highGiftNewBtn, i);
});
}
hideHighGiftNewBtn(t) {
this._gameActData.delControl(t, u.highGiftNewBtn);
}
updatHighGiftNewBtn(t, e) {}
reqHighGiftNewConfig(t) {}
showHighGiftNewHelp() {
this.getImpl(n.gf.IViewPlugin).openView("HighGiftNewRule");
}
showHighGiftNewLayer() {
this.getImpl(n.gf.IViewPlugin).openView("HighGiftNewLayer");
}
closeHighGiftNewLayer() {
this.getImpl(n.gf.IViewPlugin).closeView("HighGiftNewLayer");
}
reqPowerProps(t, e = 0, i = null) {
const o = {};
if (null == i) {
const t = this._iJoinRoomMoudle.getCurRoomData();
i = t && t.vrRoomLv || 0;
}
o.roomlv = i;
o.cmdid = t;
o.ingame = e;
this._iAwardManager.reqAwardInfo(o, n.comm.AwardConfig.powerProps.type, s.GAME_ID);
}
updatePowerProps(t, e) {
if (!t || e != s.GAME_ID || !t.data) return;
console.log("updatePowerProps: ", t.cmd);
const i = t.data;
this._gameActData.setYpResultSr(i.sr || 0);
if (n.comm.AwardCMD.PowerProps.CMD_PP_CONFIG == t.cmd) {
this._gameActData.setYpConfig(i.ypcfg || {});
this._gameActData.setDbConfig(i.dbcfg || {});
this.dispatch(n.comm.AwardEventNames.PowerProps.CMD_PP_CONFIG, i);
} else n.comm.AwardCMD.PowerProps.CMD_YP_PRO_AWARD == t.cmd && this.dispatch(n.comm.AwardEventNames.PowerProps.CMD_YP_PRO_AWARD, i);
}
getYpConfig() {
return this._gameActData.getYpConfig();
}
getDbConfig() {
return this._gameActData.getDbConfig();
}
getYpResultSr() {
return this._gameActData.getYpResultSr();
}
updateGameData() {
this._iJoinRoomMoudle.reqPlayerGameData();
}
getGameTableData() {
return this._tableData;
}
getIsInGame() {
const t = this.getGameTableData().getGameState();
return t._state >= _.ENUM_GAME_STATE.GS_START && t._state < _.ENUM_GAME_STATE.GS_TOTAL_RESULT;
}
getSelfGiveUp() {
return this.getGameTableData().getBankrupt(_.SELF_LOCAL_SEAT);
}
getAllDetSr() {
return this.getIsInGame() ? this.getSelfGiveUp() ? this._gameActData.getDelHG2Award() : 0 : this._gameActData.getAllDetSr();
}
getTurntableInfo() {
const t = this._iJoinRoomMoudle.getCurRoomData(), e = (null == t ? void 0 : t.vrRoomLv) || 0, i = {
cmdid: 1
};
i.roomLv = e;
const s = n.comm.g.gameIds.game_k7star;
this.getImpl(n.comm.lobby.IAwardManager).reqAwardInfo(i, n.comm.AwardConfig.turntable.type, s);
}
getTurntableAward() {
const t = this._iJoinRoomMoudle.getCurRoomData(), e = (null == t ? void 0 : t.vrRoomLv) || 0, i = {
cmdid: 2
};
i.roomLv = e;
const s = n.comm.g.gameIds.game_k7star;
this.getImpl(n.comm.lobby.IAwardManager).reqAwardInfo(i, n.comm.AwardConfig.turntable.type, s);
}
getTurntableExitInfo() {
const t = this._iJoinRoomMoudle.getCurRoomData(), e = (null == t ? void 0 : t.vrRoomLv) || 0, i = {
cmdid: 3
};
i.roomLv = e;
const s = n.comm.g.gameIds.game_k7star;
this.getImpl(n.comm.lobby.IAwardManager).reqAwardInfo(i, n.comm.AwardConfig.turntable.type, s);
}
getTurntableAdd() {
const t = this._iJoinRoomMoudle.getCurRoomData(), e = (null == t ? void 0 : t.vrRoomLv) || 0, i = {
cmdid: 4
};
i.roomLv = e;
const s = n.comm.g.gameIds.game_k7star;
this.getImpl(n.comm.lobby.IAwardManager).reqAwardInfo(i, n.comm.AwardConfig.turntable.type, s);
}
onMsgTurntable(t) {
var e;
if (1 == t.cmdid) {
this.dispatch("onMsgTurntableInfo" + s.GAME_ID, t.data);
this._gameActData.setTurntableInfo(t.data);
} else if (2 == t.cmdid) {
if (null == t ? void 0 : t.data) {
this._gameActData.setTurntableAwardInfo(t.data);
if (1 == (null === (e = null == t ? void 0 : t.data) || void 0 === e ? void 0 : e.turntableType)) {
this.getImpl(n.gf.IViewPlugin).openView("Turntable", t.data);
const e = (null == t ? void 0 : t.data) || {};
let i = "";
const s = (e.awd || {})[`${e.awardIdx}`] || {};
i = `id:${s.id},type:${s.type},v:${s.v},name:${s.name}`;
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_duijuzhuanpan, {
roomLv: e.roomLv,
awardIdx: e.awardIdx,
award: i
});
}
}
} else if (3 == t.cmdid) {
this._gameActData.setTurntableInfo(t.data);
this.dispatch("onMsgTurntableExit" + s.GAME_ID);
}
}
};
r([ n.gf.init ], m.prototype, "init", null);
r([ n.gf.listen(n.comm.AwardConfig.cardTypeChallenge.dataHead) ], m.prototype, "updateCardTypeChallengeData", null);
r([ n.gf.listen(n.comm.AwardConfig.powerProps.dataHead) ], m.prototype, "updatePowerProps", null);
r([ n.gf.listen(n.comm.AwardConfig.turntable.dataHead) ], m.prototype, "onMsgTurntable", null);
const C = m = r([ n.gf.module({
name: "GameActModule"
}) ], m);
},
"./bin/logic/actModules/GameAutoModule.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => l
});
var s = i("./bin/gf.js"), o = i("./bin/logic/actModules/GameActModule.js"), a = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let n = class extends s.gf.ModuleBase {
constructor() {
super(...arguments);
this._eventList = [];
this._isPlaying = !1;
this._timer = null;
}
init() {
this.closeAllEvent();
}
onDestory() {
this.closeAllEvent();
}
startTimer(t, e) {
const i = 1e3 * (e || 5);
this._timer = setInterval(() => {
t && t();
}, i);
}
stopTimer() {
if (null != this._timer) {
clearInterval(this._timer);
this._timer = null;
}
}
closeAllEvent() {
this._isPlaying = !1;
this._eventList = [];
this._curItem = null;
this.stopTimer();
}
closeAutoEvent(t) {
this.stopTimer();
if (t) {
t.endFun && t.endFun();
this.goNextEvent();
} else this.closeAllEvent();
}
addAutoEvent(t) {
console.log("GameAutoModule addAutoEvent:", t.name);
this._eventList.push(t);
}
startAutoEvent() {
if (!this._isPlaying) {
this._isPlaying = !0;
this.goNextEvent();
}
}
goNextEvent() {
var t;
this.stopTimer();
if (0 === this._eventList.length) {
this.closeAllEvent();
return;
}
this._curItem = this._eventList.shift();
this._curItem.startFun && this._curItem.startFun();
const e = null === (t = this._curItem) || void 0 === t ? void 0 : t.time;
console.log("GameAutoModule goNextEvent:", this._curItem.name);
this.startTimer(() => {
if (this._curItem) {
console.log("GameAutoModule startTimer closeAutoEvent:", this._curItem.name);
this.closeAutoEvent(this._curItem);
}
}, e);
}
closeAutoAct(t) {
console.log("GameAutoModule closeAutoAct:", t);
if (this._curItem && this._curItem.name == t) {
console.log("GameAutoModule closeAutoAct success:", this._curItem.name);
this.goNextEvent();
}
}
};
a([ s.gf.init ], n.prototype, "init", null);
a([ s.gf.destroy ], n.prototype, "onDestory", null);
a([ s.gf.listen(o.AUTO_CLOSE_EVEVT_NAME) ], n.prototype, "closeAutoAct", null);
const l = n = a([ s.gf.module({
name: "GameAutoModule"
}) ], n);
},
"./bin/logic/actModules/data/GameActData.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => l
});
var s = i("./bin/gf.js"), o = i("./bin/logic/actModules/GameActModule.js"), a = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let n = class extends s.gf.ModuleBase {
constructor() {
super(...arguments);
this._controlMap = new Map();
this._ctChallengeData = null;
this._lastCtChallengeData = null;
this._contineCTChallenge = !1;
this._ctChallengeBet = [];
this._ctChallengeResult = [];
this._delCTBet = [];
this._highGift2Config = null;
this._highGift2Auto = !1;
this._highGift2Data = null;
this._highGift2Bet = 0;
this._delHG2Bet = 0;
this._delHG2Award = 0;
this._dbConfig = null;
this._ypConfig = null;
this._ypResultSr = 0;
this._trunTableInfo = null;
this._trunTableAwardInfo = null;
this._turntableExitInfo = null;
}
init() {
this.clear();
}
clear() {
this._ctChallengeResult = [];
this._ctChallengeBet = [];
this._highGift2Data = null;
this._highGift2Bet = 0;
this._delCTBet = [ 0, 0, 0 ];
this._delHG2Bet = 0;
this._delHG2Award = 0;
}
getControl(t, e) {
const i = `control_${t}_${e}`;
return this._controlMap.get(i);
}
setControl(t, e, i) {
const s = `control_${t}_${e}`, o = this._controlMap.get(s);
o && o.close();
this._controlMap.set(s, i);
}
delControl(t, e) {
const i = `control_${t}_${e}`, s = this._controlMap.get(i);
if (s) {
s.close();
this._controlMap.delete(i);
}
}
getAllDetSr() {
let t = 0;
t = this.getDelCTBet().reduce((t, e) => t + e, 0);
return (t += this.getDelHG2Bet()) + this.getDelHG2Award();
}
setCTChallengeData(t) {
this._ctChallengeData = t;
}
getCTChallengeData() {
return s.comm.Util.clone(this._ctChallengeData);
}
setLastCTChallengeData(t) {
this._lastCtChallengeData = t;
}
getLastCTChallengeData() {
return s.comm.Util.clone(this._lastCtChallengeData);
}
setContineCTChallenge(t) {
this._contineCTChallenge = t;
}
getContineCTChallenge() {
return this._contineCTChallenge;
}
updateCtChallenge(t, e, i, s) {
this._ctChallengeData = this._ctChallengeData || {};
this._ctChallengeData.enable = t ? 1 : 0;
this._ctChallengeData.base = e;
this._ctChallengeData.mult = i;
this._ctChallengeData.bet = s;
}
updateCtChallengeResult(t) {
this._ctChallengeResult = t;
}
getCtChallengeResult() {
return this._ctChallengeResult || [];
}
isCtChallengeResult() {
const t = this._ctChallengeResult || [];
for (let e = 0; e < o.MAX_CTCHALENGE_CNT; e++) if (t[e] && t[e] > 0) return !0;
return !1;
}
setCTChallengeBet(t) {
this._ctChallengeBet = t;
}
getCTChallengeBet() {
return this._ctChallengeBet;
}
setDelCTBet(t) {
this._delCTBet = t;
}
getDelCTBet() {
return this._delCTBet;
}
setHighGift2Config(t) {
this._highGift2Config = t;
}
getHighGift2Config() {
return this._highGift2Config;
}
setHighGift2Auto(t) {
this._highGift2Auto = t;
}
getHighGift2Auto() {
return this._highGift2Auto;
}
setHighGift2Bet(t) {
this._highGift2Bet = t;
}
getHighGift2Bet() {
return this._highGift2Bet;
}
setHighGift2Data(t) {
this._highGift2Data = t;
}
getHighGift2Data() {
return this._highGift2Data;
}
setDelHG2Bet(t) {
this._delHG2Bet = t;
}
getDelHG2Bet() {
return this._delHG2Bet;
}
setDelHG2Award(t) {
this._delHG2Award = t;
}
getDelHG2Award() {
return this._delHG2Award;
}
setDbConfig(t) {
this._dbConfig = t;
}
getDbConfig() {
return this._dbConfig || {};
}
setYpConfig(t) {
this._ypConfig = t;
}
getYpConfig() {
return this._ypConfig || {};
}
setYpResultSr(t) {
this._ypResultSr = t;
}
getYpResultSr() {
return this._ypResultSr;
}
setTurntableInfo(t) {
this._trunTableInfo = t;
}
getTurntableInfo() {
return this._trunTableInfo;
}
setTurntableAwardInfo(t) {
this._trunTableAwardInfo = t;
}
getTurntableAwardInfo() {
return this._trunTableAwardInfo;
}
isOpenTurntableExit() {
var t, e, i;
return 1 == (null === (t = this._trunTableInfo) || void 0 === t ? void 0 : t.isOpen) && (!!(null === (e = this._trunTableInfo) || void 0 === e ? void 0 : e.isCanGet) || 1 == (null === (i = this._trunTableInfo) || void 0 === i ? void 0 : i.useType));
}
};
a([ s.gf.init ], n.prototype, "init", null);
const l = n = a([ s.gf.module({
name: "GameActData"
}) ], n);
},
"./bin/logic/guide/GameGuideModule.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => u
});
var s = i("./bin/config/CardCode.js"), o = i("./bin/config/CardType.js"), a = i("./bin/config/GameConfig.js"), n = i("./bin/config/GameDefine.js"), l = i("./bin/data/TableData.js"), _ = i("./bin/gameLogic/CardRuleLogic.js"), r = i("./bin/gf.js"), d = i("./bin/logic/moudles/GameLogicManager.js"), h = i("./bin/logic/protocol/GLProtocol.js"), c = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let g = class extends r.gf.ModuleBase {
constructor() {
super(...arguments);
this._timer = null;
this._playTimer = null;
this._curSeat = n.SEAT_NONE;
this._deskCnt = 128;
this._guideStep = n.GUIDE_STEP.GUDS_INIT;
this._drawRound = 0;
this._handCards = [ [ s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK ], [ s.CardID.CID_BJ, s.CardID.CID_SJ, s.CardID.CID_DIAMOND_6, s.CardID.CID_CLUB_4, s.CardID.CID_SPADE_4, s.CardID.CID_DIAMOND_4, s.CardID.CID_HEART_4 ], [ s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK ], [ s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK ] ];
this._cloneCards = [ [ s.CardValue.CV_3, s.CardValue.CV_4, s.CardValue.CV_5, s.CardValue.CV_6, s.CardValue.CV_8, s.CardValue.CV_9 ], [ s.CardValue.CV_10, s.CardValue.CV_J, s.CardValue.CV_Q, s.CardValue.CV_K, s.CardValue.CV_A, s.CardValue.CV_2 ] ];
this._drawCards = [ [ 1, 29, 18, 17 ], [ 1, 29, 15, 14 ], [ 6, 28, 14, 16 ], [ 2, 30, 19, 18 ] ];
this._targetCards = [ s.CardID.CID_HEART_J, s.CardID.CID_HEART_J, s.CardID.CID_HEART_J, s.CardID.CID_HEART_J, s.CardID.CID_HEART_J, s.CardID.CID_HEART_Q, s.CardID.CID_HEART_Q, s.CardID.CID_HEART_Q ];
this._cid = 0;
}
init() {
this._iJoinRoomMoudle = this.getImpl(r.comm.lobby.IJoinRoomModule);
this._tableData = this.getImpl(l.default);
this._cardLogic = new _.default();
this._tableData.initData();
this._gameLogicManager = this.getImpl(d.default);
this.stopAllTimer();
}
destory() {
this.stopAllTimer();
}
stopAllTimer() {
this.stopTimer();
this.stopPlayTimer();
}
startStep(t) {
console.log("startStep:", t);
this._guideStep = t;
this.dispatch(n.GUIDE_EVENT.GUI_EVE_GUIDE_STEP + a.GAME_ID, t);
switch (t) {
case n.GUIDE_STEP.GUDS_INIT:
this.startStepInit();
break;

case n.GUIDE_STEP.GUDS_START:
this.startStepStart();
break;

case n.GUIDE_STEP.GUDS_CLONE:
this.startStepClone();
break;

case n.GUIDE_STEP.GUDS_MULT:
this.startStepMult();
break;

case n.GUIDE_STEP.GUDS_DRAW_CARD_1:
this.startStepDrawCard1();
break;

case n.GUIDE_STEP.GUDS_PLAY_CARD:
this.startStepPlayCard1();
break;

case n.GUIDE_STEP.GUDS_DRAW_CARD_2:
this.startStepDrawCard2();
break;

case n.GUIDE_STEP.GUDS_BOMB_CARD:
this.startStepBoom();
break;

case n.GUIDE_STEP.GUDS_TOWER_CARD_1:
this.startStepTower1();
break;

case n.GUIDE_STEP.GUDS_TOWER_CARD_2:
this.startStepTower2();
break;

case n.GUIDE_STEP.GUDS_TOWER_CARD_3:
this.startStepTower3();
break;

case n.GUIDE_STEP.GUDS_PLAY_JOKER_CARD:
this.startStepJoker();
break;

case n.GUIDE_STEP.GUDS_TOWER_CARD_4:
this.startStepTower4();
break;

case n.GUIDE_STEP.GUDS_RESULT:
this.startStepResult();
break;

case n.GUIDE_STEP.GUDS_AWARD:
this.startStepAward();
}
}
getStep() {
return this._guideStep;
}
startStepInit() {
console.log("startStepInit");
const t = {
_state: n.ENUM_GAME_STATE.GS_IDLE,
_end_wait_index: 0,
__protoFormat__: void 0,
pack: function() {
throw new Error("Function not implemented.");
}
};
this._tableData.setGameState(t);
const e = new h.GLProtocol.msgGameConfig();
e._first_hu_mult = 10;
this._tableData.setGameConfig(e);
this.initPlayer();
this.startStep(n.GUIDE_STEP.GUDS_START);
}
startStepStart() {
this.initCards();
}
startStepClone() {
const t = new h.GLProtocol.msgGameState();
t._state = n.ENUM_GAME_STATE.GS_CLONE;
this._gameLogicManager.onMsgGameState(t);
const e = new h.GLProtocol.msgHandCards();
e._hand_cards = [ 11, 24, 37, 50, 13, 53, 54 ];
e._seat = 1;
e._flag = 2;
this._gameLogicManager.onMsgHandCards(e);
const i = {
_old_card_values: this._cloneCards[0],
_new_card_values: this._cloneCards[1],
__protoFormat__: void 0,
pack: function() {
throw new Error("Function not implemented.");
}
};
this._tableData.setCloneCards(i);
this.getImpl(r.gf.IViewPlugin).openView("GameCardClone", i, () => {
this.dispatch("showCloneCardsBG" + a.GAME_ID, !0, i._new_card_values);
this.dispatch(n.GUIDE_EVENT.GUI_EVE_SHOW_CLONE + a.GAME_ID, () => {
this.dispatch(n.GUIDE_EVENT.GUI_EVE_CLONE_RUN + a.GAME_ID, () => {
this.dispatch("showCloneCards" + a.GAME_ID, !0);
this.dispatch("onCloneCardsAni" + a.GAME_ID, i);
for (let t = 0; t < n.MAX_PLAYER; t++) {
const e = this._tableData.getHandCards(t);
if (!this._cardLogic.hasCardBack(e)) {
const o = {};
for (let t = 0; t < i._old_card_values.length; t++) o[i._old_card_values[t]] = i._new_card_values[t];
let a = [];
const l = e.length;
for (let t = 0; t < l; t++) {
const i = e[t], n = (0, s.VALUE)(i), l = (0, s.COLOR)(i), _ = o[n] + 13 * (l - 1);
o[n] && o[n] > 0 ? a.push(_) : a.push(i);
}
a = this._cardLogic.sortCard(a, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
this._tableData.setHandCards(t, a);
}
}
this.scheduleOnce(() => {
this.startStep(n.GUIDE_STEP.GUDS_MULT);
}, 1);
});
});
});
}
startStepMult() {
const t = {
_state: n.ENUM_GAME_STATE.GS_TAKE_NEXT,
_end_wait_index: 0,
__protoFormat__: void 0,
pack: function() {
throw new Error("Function not implemented.");
}
};
this._tableData.setGameStateOld(t);
const e = this._tableData.getMultConfig(), i = new h.GLProtocol.msgRecommendCardsNew();
i._ct = [ o.ENUM_CARD_TYPE.T_B8_J, o.ENUM_CARD_TYPE.T_B6_J_Q ];
i._mult = [ e[o.ENUM_CARD_TYPE.T_B8_J], e[o.ENUM_CARD_TYPE.T_B6_J_Q] ];
i._left_tower_count = [ 4, 6 ];
i._cards = [ [ 11, 11, 11, 11, 11, 11, 11, 11 ], [ 11, 11, 11, 11, 11, 11, 12, 12 ] ];
this._gameLogicManager.onMsgRecommendCardsNew(i);
this.dispatch("allDownCards" + a.GAME_ID);
this.dispatch(n.GUIDE_EVENT.GUI_EVE_SHOW_MULT + a.GAME_ID);
}
startStepDrawCard1() {
this._deskCnt = 100;
this._deskCnt--;
this.dispatch("onMsgDeckCount" + a.GAME_ID, this._deskCnt);
const t = new h.GLProtocol.msgGameState();
t._state = n.ENUM_GAME_STATE.GS_TAKE_NEXT;
this._gameLogicManager.onMsgGameState(t);
const e = new h.GLProtocol.msgTimer();
e._seat = 1;
e._time = 15;
this._gameLogicManager.onMsgTimer(e);
const i = new h.GLProtocol.msgAddCards();
i._seat = 1;
i._cards = [ 11 ];
i._count = 1;
this._tableData.setAddCards(i);
const o = this._tableData.seatToLocal(i._seat), l = this._tableData.getHandCards(o);
l.push(...i._cards);
let _ = l;
0 === this._tableData.getHuCards(o).length && (1 === i._count && i._cards[0] === s.CardID.CID_GOLD || (_ = this._cardLogic.sortCard(l, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0)));
this._tableData.setHandCards(o, _);
this.dispatch("onMsgGuideAddCards" + a.GAME_ID, i);
this._tableData.setHuCards(n.SELF_LOCAL_SEAT, [ 11, 11, 24, 37, 12, 12, 12 ]);
this.dispatch("setHandCards" + a.GAME_ID, 1, []);
const r = new h.GLProtocol.msgActPower();
r._bomb_card_value = [ 0, 0 ];
r._tower_card_value = 0;
r._zimo_card_value = 0;
r._hu_card_value = 0;
r._ming = 0;
r._play = 1;
this._tableData.setActPower(r);
this._tableData.cardLogicData.setNowPlayerSeat(n.SELF_LOCAL_SEAT);
null == this || this.dispatch(n.GUIDE_EVENT.GUI_EVE_SHOW_DRAW_CARD_1 + a.GAME_ID);
}
startStepPlayCard1() {
this.dispatch("allDownCards" + a.GAME_ID);
this.dispatch(n.GUIDE_EVENT.GUI_EVE_SHOW_PLAY_CARD_1 + a.GAME_ID, 13);
this.dispatch("setGuideCanTouchCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, [ 13 ]);
}
startStepDrawCard2() {
this._deskCnt--;
this.dispatch("onMsgDeckCount" + a.GAME_ID, this._deskCnt);
const t = new h.GLProtocol.msgGameState();
t._state = n.ENUM_GAME_STATE.GS_TAKE_NEXT;
this._gameLogicManager.onMsgGameState(t);
const e = new h.GLProtocol.msgTimer();
e._seat = 1;
e._time = 15;
this._gameLogicManager.onMsgTimer(e);
const i = new h.GLProtocol.msgAddCards();
i._seat = 1;
i._cards = [ 37 ];
i._count = 1;
this._tableData.setAddCards(i);
const l = this._tableData.seatToLocal(i._seat), _ = this._tableData.getHandCards(l);
_.push(...i._cards);
let r = _;
0 === this._tableData.getHuCards(l).length && (1 === i._count && i._cards[0] === s.CardID.CID_GOLD || (r = this._cardLogic.sortCard(_, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0)));
this._tableData.setHandCards(l, r);
this.dispatch("onMsgGuideAddCards" + a.GAME_ID, i);
this.dispatch("setGuideCanTouchCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, [], !1);
const d = this._tableData.getMultConfig(), c = new h.GLProtocol.msgActPowerNew();
c._bomb_card_value = [ 37, 0 ];
c._tower_card_value = 0;
c._zimo_card = [ 37 ];
c._zimo_card_mult = [ d[o.ENUM_CARD_TYPE.T_B4_J_Q] ];
c._hu_card = 0;
c._ming = 0;
c._play = 1;
this._tableData.setActPowerNew(c);
this._tableData.cardLogicData.setNowPlayerSeat(n.SELF_LOCAL_SEAT);
this.dispatch("onMsgGuideActPower" + a.GAME_ID, c);
this.dispatch(n.GUIDE_EVENT.GUI_EVE_SHOW_DRAW_CARD_2 + a.GAME_ID);
}
startStepBoom() {
const t = new h.GLProtocol.msgGameState();
t._state = n.ENUM_GAME_STATE.GS_TAKE_NEXT;
this._gameLogicManager.onMsgGameState(t);
const e = new h.GLProtocol.msgTimer();
e._seat = 1;
e._time = 15;
this._gameLogicManager.onMsgTimer(e);
const i = new h.GLProtocol.msgBombCards();
i._seat = 1;
i._from_seat = 1;
i._cards = [ 24, 11, 11, 37 ];
i._cards = this._cardLogic.sortCard(i._cards, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
const s = this._tableData.seatToLocal(i._seat);
let o = [];
this._tableData.cardLogicData.setNowPlayerSeat(0);
if (i._from_seat === i._seat) {
const t = i._cards;
o = this.delArraryHandCards(s, t);
}
this._tableData.setHandCards(s, o);
this.dispatch("setGuideHandCards" + a.GAME_ID, s, o, !0);
this.dispatch("setGuideCanTouchCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, [], !1);
const l = new h.GLProtocol.msgTowerCards();
l._flag = h.GLProtocol.msgTowerCards.eFlag.FLAG_BOMB;
l._seat = 1;
l._mult = 2;
l._bomb_count = 4;
l._bomb_cards = i._cards;
this._gameLogicManager.onMsgTowerCards(l);
this.scheduleOnce(() => {
this.startStep(n.GUIDE_STEP.GUDS_TOWER_CARD_1);
}, .5);
}
startStepTower1() {
const t = new h.GLProtocol.msgActPowerNew();
t._bomb_card_value = [ 0, 0 ];
t._tower_card_value = 37;
t._zimo_card = [ 0 ];
t._zimo_card_mult = [ 0 ];
t._hu_card = 0;
t._ming = 0;
t._play = 1;
this._tableData.setActPowerNew(t);
this._tableData.cardLogicData.setNowPlayerSeat(n.SELF_LOCAL_SEAT);
this.dispatch("onMsgGuideActPower" + a.GAME_ID, t);
this.dispatch("setGuideCanTouchCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, [], !1);
this.scheduleOnce(() => {
this.dispatch(n.GUIDE_EVENT.GUI_EVE_SHOW_TOWER_CARD_1 + a.GAME_ID);
}, 1);
}
startStepTower2() {
const t = new h.GLProtocol.msgDoTowerCard();
t._from_seat = 1;
t._seat = 1;
t._cards = 37;
const e = this.delArraryHandCards(n.SELF_LOCAL_SEAT, [ t._cards ]);
this._tableData.setHandCards(n.SELF_LOCAL_SEAT, e);
this.dispatch("setGuideHandCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, e, !0);
const i = new h.GLProtocol.msgTowerCards();
i._seat = 1;
i._mult = 4;
i._bomb_count = 4;
i._bomb_cards = [ 37, 11, 11, 24 ];
i._bomb_cards = this._cardLogic.sortCard(i._bomb_cards, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
i._flag = h.GLProtocol.msgTowerCards.eFlag.FLAG_TOWER;
i._tower_count = 1;
i._tower_cards = [ 37 ];
i._one_tower_mult = 0;
this._gameLogicManager.onMsgTowerCards(i);
this._deskCnt--;
this.dispatch("onMsgDeckCount" + a.GAME_ID, this._deskCnt);
const l = new h.GLProtocol.msgGameState();
l._state = n.ENUM_GAME_STATE.GS_TAKE_NEXT;
this._gameLogicManager.onMsgGameState(l);
const _ = new h.GLProtocol.msgTimer();
_._seat = 1;
_._time = 15;
this._gameLogicManager.onMsgTimer(_);
const r = new h.GLProtocol.msgAddCards();
r._seat = 1;
r._cards = [ 24 ];
r._count = 1;
this._tableData.setAddCards(r);
const d = this._tableData.seatToLocal(r._seat), c = this._tableData.getHandCards(d);
c.push(...r._cards);
let g = c;
0 === this._tableData.getHuCards(d).length && (1 === r._count && r._cards[0] === s.CardID.CID_GOLD || (g = this._cardLogic.sortCard(c, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0)));
this._tableData.setHandCards(d, g);
this.dispatch("onMsgGuideAddCards" + a.GAME_ID, r);
this.dispatch("setGuideCanTouchCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, [], !1);
const u = this._tableData.getMultConfig(), m = new h.GLProtocol.msgActPowerNew();
m._bomb_card_value = [ 0, 0 ];
m._tower_card_value = 24;
m._zimo_card = [ 24 ];
m._zimo_card_mult = [ u[o.ENUM_CARD_TYPE.T_B4_J_Q] ];
m._hu_card = 0;
m._ming = 0;
m._play = 1;
this._tableData.setActPowerNew(m);
this._tableData.cardLogicData.setNowPlayerSeat(n.SELF_LOCAL_SEAT);
this.dispatch("onMsgGuideActPower" + a.GAME_ID, m);
this.scheduleOnce(() => {
this.dispatch(n.GUIDE_EVENT.GUI_EVE_SHOW_TOWER_CARD_2 + a.GAME_ID);
}, 1);
}
startStepTower3() {
const t = new h.GLProtocol.msgDoTowerCard();
t._from_seat = 1;
t._seat = 1;
t._cards = 24;
const e = this.delArraryHandCards(n.SELF_LOCAL_SEAT, [ t._cards ]);
this._tableData.setHandCards(n.SELF_LOCAL_SEAT, e);
this.dispatch("setGuideHandCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, e, !0);
const i = new h.GLProtocol.msgTowerCards();
i._seat = 1;
i._mult = 8;
i._bomb_count = 4;
i._bomb_cards = [ 37, 11, 11, 24 ];
i._bomb_cards = this._cardLogic.sortCard(i._bomb_cards, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
i._flag = h.GLProtocol.msgTowerCards.eFlag.FLAG_TOWER;
i._tower_count = 2;
i._one_tower_mult = 0;
i._tower_cards = [ 37, 24 ];
this._gameLogicManager.onMsgTowerCards(i);
this._deskCnt--;
this.dispatch("onMsgDeckCount" + a.GAME_ID, this._deskCnt);
const l = new h.GLProtocol.msgGameState();
l._state = n.ENUM_GAME_STATE.GS_TAKE_NEXT;
this._gameLogicManager.onMsgGameState(l);
const _ = new h.GLProtocol.msgTimer();
_._seat = 1;
_._time = 15;
this._gameLogicManager.onMsgTimer(_);
const r = new h.GLProtocol.msgAddCards();
r._seat = 1;
r._cards = [ 24 ];
r._count = 1;
this._tableData.setAddCards(r);
const d = this._tableData.seatToLocal(r._seat), c = this._tableData.getHandCards(d);
c.push(...r._cards);
let g = c;
0 === this._tableData.getHuCards(d).length && (1 === r._count && r._cards[0] === s.CardID.CID_GOLD || (g = this._cardLogic.sortCard(c, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0)));
this._tableData.setHandCards(d, g);
this.dispatch("onMsgGuideAddCards" + a.GAME_ID, r);
this.dispatch("setGuideCanTouchCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, [], !1);
const u = this._tableData.getMultConfig(), m = new h.GLProtocol.msgActPowerNew();
m._bomb_card_value = [ 0, 0 ];
m._tower_card_value = 24;
m._zimo_card = [ 24 ];
m._zimo_card_mult = [ u[o.ENUM_CARD_TYPE.T_B4_J_Q] ];
m._hu_card = 0;
m._ming = 0;
m._play = 1;
this._tableData.setActPowerNew(m);
this._tableData.cardLogicData.setNowPlayerSeat(n.SELF_LOCAL_SEAT);
this.dispatch("onMsgGuideActPower" + a.GAME_ID, m);
this.scheduleOnce(() => {
this.dispatch(n.GUIDE_EVENT.GUI_EVE_SHOW_TOWER_CARD_3 + a.GAME_ID);
}, 1);
}
startStepJoker() {
const t = new h.GLProtocol.msgDoTowerCard();
t._from_seat = 1;
t._seat = 1;
t._cards = 24;
const e = this.delArraryHandCards(n.SELF_LOCAL_SEAT, [ t._cards ]);
this._tableData.setHandCards(n.SELF_LOCAL_SEAT, e);
this.dispatch("setGuideHandCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, e, !0);
const i = new h.GLProtocol.msgTowerCards();
i._seat = 1;
i._mult = 16;
i._bomb_count = 4;
i._bomb_cards = [ 37, 11, 11, 24 ];
i._bomb_cards = this._cardLogic.sortCard(i._bomb_cards, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
i._flag = h.GLProtocol.msgTowerCards.eFlag.FLAG_TOWER;
i._one_tower_mult = 0;
i._tower_count = 3;
i._tower_cards = [ 37, 24, 24 ];
this._gameLogicManager.onMsgTowerCards(i);
this._deskCnt--;
this.dispatch("onMsgDeckCount" + a.GAME_ID, this._deskCnt);
const l = new h.GLProtocol.msgGameState();
l._state = n.ENUM_GAME_STATE.GS_TAKE_NEXT;
this._gameLogicManager.onMsgGameState(l);
const _ = new h.GLProtocol.msgTimer();
_._seat = 1;
_._time = 15;
this._gameLogicManager.onMsgTimer(_);
const r = new h.GLProtocol.msgAddCards();
r._seat = 1;
r._cards = [ 54 ];
r._count = 1;
this._tableData.setAddCards(r);
const d = this._tableData.seatToLocal(r._seat), c = this._tableData.getHandCards(d);
c.push(...r._cards);
let g = c;
1 === r._count && r._cards[0] === s.CardID.CID_GOLD || (g = this._cardLogic.sortCard(c, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0));
this._tableData.setHandCards(d, g);
this.dispatch("onMsgGuideAddCards" + a.GAME_ID, r);
const u = this._tableData.getMultConfig(), m = new h.GLProtocol.msgActPowerNew();
m._bomb_card_value = [ 0, 0 ];
m._tower_card_value = 54;
m._zimo_card = [ 54 ];
m._zimo_card_mult = [ u[o.ENUM_CARD_TYPE.T_B4_J_Q] ];
m._hu_card = 0;
m._ming = 0;
m._play = 1;
this._tableData.setActPowerNew(m);
this._tableData.cardLogicData.setNowPlayerSeat(n.SELF_LOCAL_SEAT);
this.dispatch("onMsgGuideActPower" + a.GAME_ID, m);
this.dispatch("setGuideCanTouchCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, [ 54 ]);
this.scheduleOnce(() => {
this.dispatch(n.GUIDE_EVENT.GUI_EVE_SHOW_TOWER_JOKER + a.GAME_ID);
}, 1);
}
startStepTower4() {
const t = new h.GLProtocol.msgDoTowerCard();
t._from_seat = 1;
t._seat = 1;
t._cards = 54;
const e = this.delArraryHandCards(n.SELF_LOCAL_SEAT, [ t._cards ]);
this._tableData.setHandCards(n.SELF_LOCAL_SEAT, e);
this.dispatch("setGuideHandCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, e, !0);
const i = new h.GLProtocol.msgTowerCards();
i._seat = 1;
i._mult = 64;
i._bomb_count = 4;
i._bomb_cards = [ 37, 11, 11, 24 ];
i._bomb_cards = this._cardLogic.sortCard(i._bomb_cards, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
i._flag = h.GLProtocol.msgTowerCards.eFlag.FLAG_TOWER;
i._tower_count = 4;
i._one_tower_mult = 2;
i._tower_cards = [ 37, 24, 24, 54 ];
this._gameLogicManager.onMsgTowerCards(i);
this._deskCnt--;
this.dispatch("onMsgDeckCount" + a.GAME_ID, this._deskCnt);
const l = new h.GLProtocol.msgGameState();
l._state = n.ENUM_GAME_STATE.GS_TAKE_NEXT;
this._gameLogicManager.onMsgGameState(l);
const _ = new h.GLProtocol.msgTimer();
_._seat = 1;
_._time = 15;
this._gameLogicManager.onMsgTimer(_);
const r = new h.GLProtocol.msgAddCards();
r._seat = 1;
r._cards = [ 50 ];
r._count = 1;
this._tableData.setAddCards(r);
const d = this._tableData.seatToLocal(r._seat), c = this._tableData.getHandCards(d);
c.push(...r._cards);
let g = c;
0 === this._tableData.getHuCards(d).length && (1 === r._count && r._cards[0] === s.CardID.CID_GOLD || (g = this._cardLogic.sortCard(c, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0)));
this._tableData.setHandCards(d, g);
this.dispatch("onMsgGuideAddCards" + a.GAME_ID, r);
this.dispatch("setGuideCanTouchCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, [], !1);
this.scheduleOnce(() => {
const t = this._tableData.getMultConfig(), e = new h.GLProtocol.msgActPowerNew();
e._bomb_card_value = [ 0, 0 ];
e._tower_card_value = 50;
e._zimo_card = [ 50 ];
e._zimo_card_mult = [ t[o.ENUM_CARD_TYPE.T_B4_J_Q] ];
e._hu_card = 0;
e._ming = 0;
e._play = 1;
this._tableData.setActPowerNew(e);
this._tableData.cardLogicData.setNowPlayerSeat(n.SELF_LOCAL_SEAT);
this.dispatch("onMsgGuideActPower" + a.GAME_ID, e);
this.dispatch(n.GUIDE_EVENT.GUI_EVE_SHOW_TOWER_CARD_4 + a.GAME_ID);
}, 3);
}
startStepResult() {
const t = new h.GLProtocol.msgTotalResult();
t._score = [ -2e5, 6e5, -2e5, -2e5 ];
t._jzz_ex_score = [ 0, 0, 0, 0 ];
t._total_win_dhq_cnt = [ 0, 0, 0, 0 ];
t._hand_cards = [ 11, 11, 24, 24, 37, 50, 53, 54 ];
t._hand_cards = this._cardLogic.sortCard(t._hand_cards, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
t._count = 1;
t._ct = [ o.ENUM_CARD_TYPE.T_B8_J ];
t._hu_car = [ 50 ];
for (let e = 0; e < t._hu_car.length; e++) {
const i = t._hu_car[e];
t._hu_car_list[e] = [ ...t._hand_cards, i ];
}
this._gameLogicManager.onMsgTotalResult(t);
this.getImpl(r.gf.IViewPlugin).closeView("GameGuide");
this.startStep(n.GUIDE_STEP.GUDS_AWARD);
}
startStepAward() {
this.getImpl(r.comm.lobby.ICommonActModule).reqPlayerGuide(a.GAME_ID, r.comm.AwardCMD.PlayerGuide.CMD_AWARD);
}
onBtnCloseClone() {
this.startStep(n.GUIDE_STEP.GUDS_MULT);
}
onBtnCloseMult() {
this.startStep(n.GUIDE_STEP.GUDS_DRAW_CARD_1);
}
onBtnPlayCard(t) {
this._cid = t;
switch (this._guideStep) {
case n.GUIDE_STEP.GUDS_PLAY_CARD:
this.playSelfCard(t);
this.autoPlayCard(() => {
this.startStep(n.GUIDE_STEP.GUDS_DRAW_CARD_2);
});
break;

case n.GUIDE_STEP.GUDS_PLAY_JOKER_CARD:
this.startStep(n.GUIDE_STEP.GUDS_TOWER_CARD_4);
}
}
onBtnZha() {
this._guideStep == n.GUIDE_STEP.GUDS_DRAW_CARD_2 && this.startStep(n.GUIDE_STEP.GUDS_BOMB_CARD);
}
onBtnBoom() {
this._guideStep == n.GUIDE_STEP.GUDS_TOWER_CARD_1 ? this.startStep(n.GUIDE_STEP.GUDS_TOWER_CARD_2) : this._guideStep == n.GUIDE_STEP.GUDS_TOWER_CARD_2 ? this.startStep(n.GUIDE_STEP.GUDS_TOWER_CARD_3) : this._guideStep == n.GUIDE_STEP.GUDS_TOWER_CARD_3 && this.startStep(n.GUIDE_STEP.GUDS_PLAY_JOKER_CARD);
}
onBtnZiMo() {
this.dispatch("showAniFire" + a.GAME_ID, !1);
this.roundResult(50);
}
onBtnResultContinue() {
this.dispatch(n.GUIDE_EVENT.GUI_EVE_CHANGE_ROOM + a.GAME_ID);
}
onBtnClickCard() {
this._guideStep == n.GUIDE_STEP.GUDS_DRAW_CARD_1 && this.startStep(n.GUIDE_STEP.GUDS_PLAY_CARD);
}
playSelfCard(t) {
const e = new h.GLProtocol.msgPlayCards();
e._seat = 1;
e._cards = t;
console.log("onMsgPlayCards ", JSON.stringify(e));
this._tableData.setPlayCards(e);
const i = this._tableData.seatToLocal(e._seat), s = this.delArraryHandCards(i, [ e._cards ]);
this._tableData.setHandCards(i, s);
const o = this._tableData.getOutCards(i);
o.push(e._cards);
this._tableData.setOutCards(i, o);
this.dispatch("setGuideHandCards" + a.GAME_ID, i, s, !0);
this.dispatch("setOutCards" + a.GAME_ID, i, o);
}
autoPlayCard(t) {
this._curSeat = this._tableData.getSelfSeat();
const e = this._drawCards[this._drawRound];
for (let i = 0; i < n.MAX_PLAYER; i++) this.scheduleOnce(() => {
this._curSeat = this.getNextSeat(this._curSeat);
const i = this._curSeat, o = new h.GLProtocol.msgTimer();
o._seat = this._curSeat;
o._time = 15;
this._gameLogicManager.onMsgTimer(o);
if (this._curSeat == this._tableData.getSelfSeat()) t && t(); else {
this._deskCnt--;
this.dispatch("onMsgDeckCount" + a.GAME_ID, this._deskCnt);
const t = new h.GLProtocol.msgAddCards();
t._seat = i;
t._cards = [ s.CardID.CID_BACK ];
t._count = 1;
this._gameLogicManager.onMsgAddCards(t);
this.scheduleOnce(() => {
const t = new h.GLProtocol.msgPlayCards();
t._seat = i;
t._cards = e[i];
this._gameLogicManager.onMsgPlayCards(t);
}, 1);
}
}, i + 2);
}
roundResult(t) {
const e = this._tableData.getMultConfig()[o.ENUM_CARD_TYPE.T_B8_J] || 0, i = new h.GLProtocol.msgRoundResult();
i._count = 1;
i._ct[0] = [ 0, o.ENUM_CARD_TYPE.T_B8_J, 0, 0 ];
i._mult[0] = [ 0, e, 0, 0 ];
i._score[0] = [ -2e5, 6e5, -2e5, -2e5 ];
i._ex_flag[0] = [ n.eResultExFlag.FlagBankrupt, 0, n.eResultExFlag.FlagBankrupt, n.eResultExFlag.FlagBankrupt ];
i._dhq_cnt[0] = [ 0, 0, 0, 0 ];
i._hu_card[0] = [ 0, t, 0, 0 ];
i._self_hu[0] = [ 4, 3, 4, 4 ];
i._star_combo_index[0] = [ 0, 0, 0, 0 ];
i._broken_time = 30;
this._gameLogicManager.onMsgRoundResult(i);
this._tableData.setHuCards(n.SELF_LOCAL_SEAT, [ t ]);
const s = this._tableData.getHandCards(n.SELF_LOCAL_SEAT).concat();
this.dispatch("setGuideHandCards" + a.GAME_ID, n.SELF_LOCAL_SEAT, s, !0);
this.scheduleOnce(() => {
const t = new h.GLProtocol.msgGiveUp();
for (let e = 0; e < n.MAX_PLAYER; e++) if (1 != e) {
t._seat = e;
t._flag = h.GLProtocol.msgGiveUp.eFlag.FLAG_GIVE_UP;
this._gameLogicManager.onMsgGiveUp(t);
}
}, 5);
this.scheduleOnce(() => {
this.startStep(n.GUIDE_STEP.GUDS_RESULT);
}, 6);
}
delArraryHandCards(t, e) {
let i = this._tableData.getHandCards(t);
if (t != n.SELF_LOCAL_SEAT && this._cardLogic.hasCardBack(i)) if (this._cardLogic.hasCardBack(i)) {
const t = [];
let o = 0;
const a = i.length;
for (let e = 0; e < a; e++) if (i[e] === s.CardID.CID_GOLD) {
t.push(s.CardID.CID_GOLD);
o++;
}
for (let i = 0; i < e.length - o; i++) t.push(s.CardID.CID_BACK);
i = this._cardLogic.delArraryInOtherArraryEx(t, i);
} else i = this._cardLogic.delArraryInOtherArraryEx(e, i); else i = this._cardLogic.delArraryInOtherArraryEx(e, i);
return this._cardLogic.sortCard(i, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
}
getNextSeat(t) {
return (t + 1) % n.MAX_PLAYER;
}
setTimer(t) {
this.stopTimer();
this._timer = setInterval(() => {
this.timerCallBack();
}, 1e3 * t);
}
stopTimer() {
if (this._timer) {
clearInterval(this._timer);
this._timer = null;
}
}
setPlayTimer(t) {
this.stopTimer();
this._playTimer = setInterval(() => {
this.timerCallBack();
}, 1e3 * t);
}
stopPlayTimer() {
this.dispatch("stopAllPlayerTimer" + a.GAME_ID);
if (this._playTimer) {
clearInterval(this._playTimer);
this._playTimer = null;
}
}
timerCallBack() {
this._guideStep;
}
initPlayer() {
const t = {
_uid: r.comm.Util.MAKEUSERID(r.comm.g.areaConfig.areaID, this.getImpl(r.comm.lobby.IUserManager).numid),
_area_id: r.comm.g.areaConfig.areaID,
_nid: this.getImpl(r.comm.lobby.IUserManager).numid,
_sr: 6e5,
_seat: n.SELF_LOCAL_SEAT,
_name: this.getImpl(r.comm.lobby.IUserManager).nickname,
_charm: 0,
_vip: 0,
_vip_flag: 0,
_equal_cnt: 0,
_win_cnt: 0,
_lose_cnt: 0,
_escape_cnt: 0,
__protoFormat__: void 0,
_ex_flag: 0,
_leave_flag: 0,
pack: function() {
throw new Error("Function not implemented.");
},
_jzz_cnt: 0
};
this._tableData.setPlayerDataBySeat(t._seat, t);
this.dispatch("onMsgPlayerInfo" + a.GAME_ID, t);
this.dispatch("updateSR" + a.GAME_ID, this._tableData.seatToLocal(t._seat), t._sr);
for (let t = 0; t < n.MAX_PLAYER; t++) {
const e = {
_uid: 11111111 + t,
_area_id: r.comm.g.areaConfig.areaID,
_nid: t + 10,
_vip_flag: 0,
_sr: 2e5,
_seat: t,
_name: `玩家${t}`,
_charm: 0,
_vip: 0,
_equal_cnt: 0,
_win_cnt: 0,
_lose_cnt: 0,
_escape_cnt: 0,
__protoFormat__: void 0,
_ex_flag: 0,
_leave_flag: 0,
pack: function() {
throw new Error("Function not implemented.");
},
_jzz_cnt: 0
};
if (t != this._tableData.getSelfSeat()) {
this._tableData.setPlayerDataBySeat(e._seat, e);
this.dispatch("onMsgPlayerInfo" + a.GAME_ID, e);
this.dispatch("updateSR" + a.GAME_ID, this._tableData.seatToLocal(e._seat), e._sr);
}
}
}
initCards() {
for (let t = 0; t < n.MAX_PLAYER; t++) {
const e = {
_seat: t,
_flag: 0,
_count: 7,
_hand_cards: this._handCards[t],
_new_count: 0,
_new_cards: [],
__protoFormat__: void 0,
pack: function() {
throw new Error("Function not implemented.");
}
}, i = this._tableData.seatToLocal(e._seat), s = this._cardLogic.sortCard(e._hand_cards, n.CARD_SORT_TYPE.SORT_BY_POWER, !0);
this._tableData.setHandCards(i, s);
}
this.dispatch("showTakeFistCards" + a.GAME_ID, () => {
this.scheduleOnce(() => {
this.startStep(n.GUIDE_STEP.GUDS_CLONE);
}, 1);
});
}
onBtnChangeRoom(t = !1) {
var e;
const i = this.getImpl(r.comm.lobby.IUserManager).userScore || 0, s = this.getSuitRoomDataNormal(i);
this.stopAllTimer();
if (s && !t) {
const t = (null === (e = s.roomId) || void 0 === e ? void 0 : e[0]) || -1, i = s.vrRoomLv;
this.getImpl(r.comm.lobby.IJoinRoomModule).startJoinRoom(a.GAME_ID, t, !1, i, !0);
this.dispatch("onChangeSeat" + a.GAME_ID);
this._tableData.initData();
this._tableData.init();
} else this.getImpl(r.comm.lobby.IJoinRoomModule).quitGuide(a.GAME_ID);
this.getImpl(r.gf.IViewPlugin).closeView("GameGuide");
}
getSuitRoomDataNormal(t) {
const e = this.getImpl(r.comm.lobby.IJoinRoomModule).getRoomInfo(a.GAME_ID);
if (!e || 0 === e.length) return null;
let i = null, s = 0;
for (const o of e) if (t >= o.minscore && (-1 == o.maxscore || t <= o.maxscore) && o.minscore > s) {
s = o.minscore;
i = o;
break;
}
return i;
}
respPlayerGuideAward(t, e, i) {
t == a.GAME_ID && (0 != i || e <= 0 || this.getImpl(r.gf.IViewPlugin).openView("GameGuidePop", e));
}
};
c([ r.gf.init ], g.prototype, "init", null);
c([ r.gf.destroy ], g.prototype, "destory", null);
c([ r.gf.listen(n.GUIDE_EVENT.GUI_EVE_CLOSE_CLONE + a.GAME_ID) ], g.prototype, "onBtnCloseClone", null);
c([ r.gf.listen(n.GUIDE_EVENT.GUI_EVE_CLOSE_MULT + a.GAME_ID) ], g.prototype, "onBtnCloseMult", null);
c([ r.gf.listen(n.GUIDE_EVENT.GUI_EVE_PLAY_CARD + a.GAME_ID) ], g.prototype, "onBtnPlayCard", null);
c([ r.gf.listen(n.GUIDE_EVENT.GUI_EVE_BTN_ZHA + a.GAME_ID) ], g.prototype, "onBtnZha", null);
c([ r.gf.listen(n.GUIDE_EVENT.GUI_EVE_BTN_ZHA + a.GAME_ID) ], g.prototype, "onBtnBoom", null);
c([ r.gf.listen(n.GUIDE_EVENT.GUI_EVE_BTN_ZIMO + a.GAME_ID) ], g.prototype, "onBtnZiMo", null);
c([ r.gf.listen(n.GUIDE_EVENT.GUI_EVE_RESULT_CONTINUE + a.GAME_ID) ], g.prototype, "onBtnResultContinue", null);
c([ r.gf.listen(n.GUIDE_EVENT.GUI_EVE_DRAW_CARD + a.GAME_ID) ], g.prototype, "onBtnClickCard", null);
c([ r.gf.listen(n.GUIDE_EVENT.GUI_EVE_CHANGE_ROOM + a.GAME_ID) ], g.prototype, "onBtnChangeRoom", null);
c([ r.gf.listen(r.comm.AwardEventNames.PlayerGuide.CMD_AWARD) ], g.prototype, "respPlayerGuideAward", null);
const u = g = c([ r.gf.module({
name: "GameGuideModule"
}) ], g);
},
"./bin/logic/moudles/GameLogicManager.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => f
});
var s = i("./bin/config/CardCode.js"), a = i("./bin/config/GameConfig.js"), n = i("./bin/config/GameDefine.js"), l = i("./bin/config/SoundConfig.js"), _ = i("./bin/data/TableData.js"), r = i("./bin/gameLogic/CardRuleLogic.js"), d = i("./bin/gf.js"), h = i("./bin/manager/activeManager.js"), c = i("./bin/logic/actModules/data/GameActData.js"), g = i("./bin/logic/protocol/FWProtocol.js"), u = i("./bin/logic/protocol/GLProtocol.js"), m = i("./bin/logic/protocol/RLProtocol.js"), C = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let p = class extends d.gf.ModuleBase {
constructor() {
super(...arguments);
this._subXYDealList = [];
this._tableData = null;
this.onMsgNotice = t => {
console.log("onMsgNotice ", JSON.stringify(t));
this.dispatch("onMsgNotice" + a.GAME_ID, t);
};
this.onMsgPlayerInfo = t => {
console.log("onMsgPlayerInfo ", JSON.stringify(t));
if (t._area_id == d.comm.g.areaConfig.areaID && t._nid == this.getImpl(d.comm.lobby.IUserManager).numid) {
if (t._leave_flag === n.ENUM_LEAVEFLAG.LF_Leave || t._leave_flag === n.ENUM_LEAVEFLAG.LF_Give) return;
this._tableData.updateSelfData(t);
}
this._tableData.setPlayerDataBySeat(t._seat, t);
this.dispatch("onMsgPlayerInfo" + a.GAME_ID, t);
this.dispatch("updateSR" + a.GAME_ID, this._tableData.seatToLocal(t._seat), t._sr);
};
this.onMsgPlayerLeave = t => {
console.log("onMsgPlayerLeave ", JSON.stringify(t));
const e = this._tableData.seatToLocal(t._seat);
this._tableData.setPlayerLeave(e, !0);
this.dispatch("onMsgPlayerLeave" + a.GAME_ID, t);
};
this.onMsgTimer = t => {
console.log("onMsgTimer ", JSON.stringify(t));
this._tableData.setTimer(t);
this.dispatch("onMsgTimer" + a.GAME_ID, t);
};
this.onMsgGameState = t => {
console.log("onMsgGameState ", JSON.stringify(t));
t._state == n.ENUM_GAME_STATE.GS_START && this.onGameStart();
t._state != n.ENUM_GAME_STATE.GS_WAIT && this._tableData.setGameStateOld(t);
t._state == n.ENUM_GAME_STATE.GS_PEAK_GAME && this._tableData.setPeak(!0);
this._tableData.setGameState(t);
t._state, n.ENUM_GAME_STATE.GS_TOTAL_RESULT;
this.dispatch("onMsgGameState" + a.GAME_ID, t);
};
this.onMsgReconnect = t => {
console.log("onMsgReconnect ", JSON.stringify(t));
this._tableData.setReconnect(t);
t._flag === u.GLProtocol.msgReconnect.eFlag.FLAG_START_WITH_PEAK && this._tableData.setPeak(!0);
this.dispatch("onMsgReconnect" + a.GAME_ID, t._flag);
};
this.onMsgGameConfig = t => {
console.log("onMsgGameConfig ", JSON.stringify(t));
this._tableData.setGameConfig(t);
this.sendVersionCode();
this.dispatch("onMsgGameConfig" + a.GAME_ID, t);
};
this.onMsgSpecCards = t => {
console.log("onMsgSpecCards ", JSON.stringify(t));
this.dispatch("onMsgSpecCards" + a.GAME_ID, t);
};
this.onMsgDeckCount = t => {
console.log("onMsgDeckCount ", JSON.stringify(t));
this._tableData.setDeckCount(t);
this.dispatch("onMsgDeckCount" + a.GAME_ID, t._count);
};
this.onMsgBaseInfo = t => {
console.log("onMsgBaseInfo ", JSON.stringify(t));
this._tableData.setBaseInfo(t);
this.dispatch("onMsgBaseInfo" + a.GAME_ID, t);
};
this.onMsgTakeFirst = t => {
console.log("onMsgTakeFirst ", JSON.stringify(t));
const e = this._tableData.seatToLocal(t._seat);
this._tableData.setTakeFirst(e, t);
const i = this._cardLogic.sortCard(t._cards, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
this._tableData.setHandCards(e, i);
e === n.SELF_LOCAL_SEAT && this._tableData.setTakeFirstHandCards(i);
this.dispatch("onMsgTakeFirst" + a.GAME_ID, t);
};
this.onMsgCloneCards = t => {
console.log("onMsgCloneCards ", JSON.stringify(t));
this._tableData.setCloneCards(t);
this.updateCloneOtherCards(t);
this.dispatch("onMsgCloneCards" + a.GAME_ID, t);
};
this.onMsgAddCards = t => {
console.log("onMsgAddCards ", JSON.stringify(t));
this.dispatch("onCheckBuffCard" + a.GAME_ID, !1);
this.dispatch("onCloseLuck" + a.GAME_ID);
if (this._tableData.getPeak()) {
const e = this._tableData.getAddCards();
if (e && e._seat === this._tableData.getSelfSeat() && e._count > 1 && 1 === t._count) {
e._cards.push(t._cards[0]);
this._tableData.setAddCards(e);
} else this._tableData.setAddCards(t);
} else this._tableData.setAddCards(t);
const e = this._tableData.seatToLocal(t._seat);
if (!1 === this._tableData.getCloneCardsAniEnd()) {
this.dispatch("onCloseCloneCards" + a.GAME_ID);
this.dispatch("stopCloneAni" + a.GAME_ID);
}
const i = this._tableData.getHandCards(e);
i.push(...t._cards);
let o = i;
0 === this._tableData.getHuCards(e).length && (1 === t._count && t._cards[0] === s.CardID.CID_GOLD || (o = this._cardLogic.sortCard(i, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0)));
if (n.SELF_LOCAL_SEAT === e) {
const t = this._tableData.getHuCards(n.SELF_LOCAL_SEAT);
t && t.length > 0 ? this.dispatch("showBtnTing" + a.GAME_ID, !0) : this.dispatch("showBtnTing" + a.GAME_ID, !1);
}
this._tableData.setHandCards(e, o);
this.dispatch("onMsgAddCards" + a.GAME_ID, t);
};
this.onMsgStartChooseCard = t => {
console.log("onMsgStartChooseCard ", JSON.stringify(t));
this.dispatch("onMsgStartChooseCard" + a.GAME_ID, t);
};
this.onMsgEndChooseCard = t => {
console.log("onMsgEndChooseCard ", JSON.stringify(t));
this._tableData.setEndChooseCard(t);
const e = this._tableData.seatToLocal(t._seat), i = this._tableData.getHandCards(e), o = [];
i.forEach(t => {
t != s.CardID.CID_GOLD && o.push(t);
});
o.push(t._cards[t._index]);
const l = this._cardLogic.sortCard(o, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
this._tableData.setHandCards(e, l);
if (!this._tableData.getPeak()) {
const e = this._tableData.getAddCards();
if (e && e._seat === this._tableData.getSelfSeat() && e._cards[0] == s.CardID.CID_GOLD) {
e._cards[0] = t._cards[t._index];
this._tableData.setAddCards(e);
}
}
this.dispatch("onMsgEndChooseCard" + a.GAME_ID, t);
};
this.onMsgHandCards = t => {
console.log("onMsgHandCards ", JSON.stringify(t));
const e = this._tableData.seatToLocal(t._seat), i = [ ...t._hand_cards, ...t._new_cards ], s = this._cardLogic.sortCard(i, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
t._flag === u.GLProtocol.msgHandCards.eFlag.FLAG_MING ? this._tableData.setMingCards(e) : t._flag !== u.GLProtocol.msgHandCards.eFlag.FLAG_RELINK || e == n.SELF_LOCAL_SEAT || this._cardLogic.hasCardBack(i) || this._tableData.setMingCards(e);
if (t._flag === u.GLProtocol.msgHandCards.eFlag.FLAG_RELINK && e === n.SELF_LOCAL_SEAT) {
const i = this._tableData.getHuCards(n.SELF_LOCAL_SEAT);
i && i.length > 0 && _.default.cardData[e].setHandHuCards(t._hand_cards);
if (t._new_count > 0) this.dispatch("showBtnTing" + a.GAME_ID, !1); else {
const t = this._tableData.getNowTingInfo();
t && t._count > 0 ? this.dispatch("showBtnTing" + a.GAME_ID, !0) : this.dispatch("showBtnTing" + a.GAME_ID, !1);
}
}
e === n.SELF_LOCAL_SEAT && t._flag === u.GLProtocol.msgHandCards.eFlag.FLAG_HAND || this._tableData.setHandCards(e, s);
t._flag === u.GLProtocol.msgHandCards.eFlag.FLAG_HAND && this._tableData.setHandCards(e, s);
this.dispatch("onMsgHandCards" + a.GAME_ID, t);
};
this.onMsgBombCards = t => {
console.log("onMsgBombCards ", JSON.stringify(t));
const e = this._tableData.seatToLocal(t._seat);
let i = [];
this._tableData.cardLogicData.setNowPlayerSeat(0);
if (t._from_seat === t._seat) {
const s = t._cards;
i = this.delArraryHandCards(e, s);
} else {
let o = [];
const a = this._tableData.getHandCards(e);
if (n.SELF_LOCAL_SEAT != e && this._cardLogic.hasCardBack(a)) o = [ s.CardID.CID_BACK, s.CardID.CID_BACK, s.CardID.CID_BACK ]; else for (let e = 1; e < t._cards.length; e++) {
const i = t._cards[e];
o.push(i);
}
i = this.delArraryHandCards(e, o);
}
if (t._from_seat != t._seat) {
const e = this._tableData.seatToLocal(t._from_seat), i = this._tableData.getOutCards(e);
i.splice(i.length - 1, 1);
this._tableData.setOutCards(e, i);
this.dispatch("setOutCards" + a.GAME_ID, e, i, !1);
}
n.SELF_LOCAL_SEAT === e && (t._from_seat, t._seat, this._tableData.setGameTingCard(t._cards[0]));
if (n.SELF_LOCAL_SEAT === e) {
const t = this._tableData.getHuCards(n.SELF_LOCAL_SEAT);
t && t.length > 0 ? this.dispatch("showBtnTing" + a.GAME_ID, !0) : this.dispatch("showBtnTing" + a.GAME_ID, !1);
}
this._tableData.setHandCards(e, i);
this.dispatch("setHandCards" + a.GAME_ID, e, i);
this.dispatch("onMsgBombCards" + a.GAME_ID, t);
};
this.onMsgDoTowerCard = t => {
console.log("onMsgDoTowerCard ", JSON.stringify(t));
const e = this._tableData.seatToLocal(t._seat);
let i = [];
t._from_seat === t._seat && (i = t._cards != s.CardID.CID_GOLD_BUFF ? this.delArraryHandCards(e, [ t._cards ]) : this._tableData.getHandCards(e));
this._tableData.cardLogicData.setNowPlayerSeat(0);
this._tableData.setHandCards(e, i);
this.dispatch("setHandCards" + a.GAME_ID, e, i);
this.dispatch("onMsgDoTowerCard" + a.GAME_ID, t);
if (this._tableData.getPeak()) {
const e = this._tableData.getAddCards();
if (e && e._seat === this._tableData.getSelfSeat() && e._count > 1) {
const i = [];
for (let s = 0; s < e._count; s++) {
const o = e._cards[s];
o && o !== t._cards && i.length <= 1 && i.push(o);
}
e._cards = i;
this._tableData.setAddCards(e);
}
}
if (n.SELF_LOCAL_SEAT === e) {
const t = this._tableData.getHuCards(n.SELF_LOCAL_SEAT);
t && t.length > 0 ? this.dispatch("showBtnTing" + a.GAME_ID, !0) : this.dispatch("showBtnTing" + a.GAME_ID, !1);
}
};
this.onMsgDoPass = t => {
console.log("onMsgDoPass ", JSON.stringify(t));
this._tableData.cardLogicData.setNowPlayerSeat(0);
this.dispatch("onMsgDoPass" + a.GAME_ID, t);
};
this.onMsgTowerCards = t => {
console.log("onMsgTowerCards ", JSON.stringify(t));
this._tableData.setTowerCards(t);
const e = this._tableData.seatToLocal(t._seat);
let i = [ ...t._bomb_cards ];
t._flag != u.GLProtocol.msgTowerCards.eFlag.FLAG_BOMB && (i = [ ...t._bomb_cards, ...t._tower_cards ]);
e === n.SELF_LOCAL_SEAT && this._tableData.setBombCardsSelf(t);
this._tableData.setBombCards(e, i);
this._tableData.gameLogicData.setTowerMult(e, t._mult);
this.dispatch("onUpdateYunProBtnTips" + a.GAME_ID);
this._tableData.setTowerCardsMsg(e, t);
this._tableData.isBombCardsBuff(t) || this.dispatch("onMsgTowerCards" + a.GAME_ID, t);
};
this.onMsgOutedCards = t => {
console.log("onMsgOutedCards ", JSON.stringify(t));
this._tableData.cardLogicData.setNowPlayerSeat(0);
const e = this._tableData.seatToLocal(t._seat), i = t._cards;
this._tableData.setOutCards(e, i);
this.dispatch("setOutCards" + a.GAME_ID, e, i, !1);
this.dispatch("onMsgOutedCards" + a.GAME_ID, t);
};
this.onMsgPlayCards = t => {
console.log("onMsgPlayCards ", JSON.stringify(t));
this._tableData.cardLogicData.setNowPlayerSeat(0);
this._tableData.setPlayCards(t);
const e = this._tableData.seatToLocal(t._seat), i = this.delArraryHandCards(e, [ t._cards ]);
this._tableData.setHandCards(e, i);
const s = this._tableData.getOutCards(e);
s.push(t._cards);
this._tableData.setOutCards(e, s);
if (e === n.SELF_LOCAL_SEAT) {
this._tableData.setGameTingCard(t._cards);
this._tableData.setNowTingInfo(t._cards);
const e = this._tableData.getNowTingInfo();
e && e._count > 0 ? this.dispatch("showBtnTing" + a.GAME_ID, !0) : this.dispatch("showBtnTing" + a.GAME_ID, !1);
this.dispatch("updateTingMult" + a.GAME_ID);
}
this.dispatch("setHandCards" + a.GAME_ID, e, i);
this.dispatch("onMsgPlayCards" + a.GAME_ID, t);
this.dispatch("setOutCards" + a.GAME_ID, e, s, !0, t._flag == n.ePlayCardFlag.PLAY_CF_STAR);
};
this.onMsgPeakPlayCards = t => {
console.log("onMsgPeakPlayCards ", JSON.stringify(t));
this._tableData.cardLogicData.setNowPlayerSeat(0);
this._tableData.setPlayCardsPeak(t);
const e = this._tableData.seatToLocal(t._seat), i = this.delArraryHandCards(e, t._cards);
this._tableData.setHandCards(e, i);
const s = this._tableData.getOutCards(e);
for (let e = 0; e < t._cards.length; e++) {
const i = t._cards[e];
s.push(i);
}
this._tableData.setOutCards(e, s);
this.dispatch("setHandCards" + a.GAME_ID, e, i);
this.dispatch("onMsgPlayCardsPeak" + a.GAME_ID, t);
this.dispatch("setOutCards" + a.GAME_ID, e, s);
console.log("onMsgPeakPlayCards");
};
this.onMsgActPowerNew = t => {
console.log("onMsgActPowerNew ", JSON.stringify(t));
const e = n.SELF_LOCAL_SEAT;
this._tableData.cardLogicData.setNowPlayerSeat(e);
this._tableData.setActPowerNew(t);
this.dispatch("onMsgActPowerNew" + a.GAME_ID, t);
};
this.onMsgHuCards = t => {
console.log("onMsgHuCards ", JSON.stringify(t));
this._tableData.cardLogicData.setNowPlayerSeat(0);
};
this.onMsgHuedCards = t => {
console.log("onMsgHuedCards ", JSON.stringify(t));
t._seat == this._tableData.getSelfSeat() && t._count > 0 && this._tableData.setHuStatus(!0);
const e = this._tableData.seatToLocal(t._seat);
if (e === n.SELF_LOCAL_SEAT && t._count > 0) {
_.default.cardData[e].setHandHuCards(this._tableData.getHandCards(n.SELF_LOCAL_SEAT));
this.dispatch("setHandCards" + a.GAME_ID, e, this._tableData.getHandCards(n.SELF_LOCAL_SEAT));
}
const i = [ ...t._cards ];
this._tableData.setHuCards(e, i);
this.dispatch("setHuCards" + a.GAME_ID, e, i);
};
this.onMsgTingListNew = t => {
console.log("onMsgTingListNew ", JSON.stringify(t));
0 == t._index && this._tableData.initTingList();
-1 === t._index && 1 == t._total_count && this._tableData.initTingList();
this._tableData.addTingList(t);
if (0 == t._out_card) {
this._tableData.setGameTingCard(t._out_card);
this._tableData.setNowTingInfo(t._out_card);
const e = this._tableData.getReconnect();
e._flag !== u.GLProtocol.msgReconnect.eFlag.FLAG_START && e._flag !== u.GLProtocol.msgReconnect.eFlag.FLAG_START_WITH_PEAK || this.dispatch("showBtnTing" + a.GAME_ID, !0);
this.dispatch("updateTingMult" + a.GAME_ID);
}
const e = this._tableData.getGameTingCard();
if (t._out_card === e && 0 != t._out_card) {
this._tableData.setNowTingInfo(t._out_card);
console.log("onMsgTingList setNowTingInfo ", t._out_card);
this.dispatch("updateTingMult" + a.GAME_ID);
}
if (-1 === t._index && 1 == t._total_count) {
this._tableData.setNowTingInfo(t._out_card);
console.log("onMsgTingList setNowTingInfo ", t._out_card);
this.dispatch("onMsgTingList" + a.GAME_ID, t);
}
};
this.onMsgRecommendCards = t => {
console.log("onMsgRecommendCards ", JSON.stringify(t));
this._tableData.setRecommendCards(t);
const e = this._tableData.getGameStateOld();
e._state != n.ENUM_GAME_STATE.GS_TAKE_FIRST && (e._state, n.ENUM_GAME_STATE.GS_CLONE);
};
this.onMsgRecommendCardsNew = t => {
console.log("onMsgRecommendCardsNew ", JSON.stringify(t));
this._tableData.setRecommendCardsNew(t);
const e = this._tableData.getGameStateOld();
e._state != n.ENUM_GAME_STATE.GS_TAKE_FIRST && e._state != n.ENUM_GAME_STATE.GS_CLONE && this.dispatch("onMsgRecommendCards" + a.GAME_ID, t);
};
this.onMsgLastOutedCard = t => {
console.log("onMsgLastOutedCard ", JSON.stringify(t));
this.dispatch("onMsgLastOutedCard" + a.GAME_ID, t);
};
this.onMsgSkipLow = t => {
console.log("onMsgSkipLow ", JSON.stringify(t));
this.dispatch("onMsgSkipLow" + a.GAME_ID, t);
};
this.onMsgTrust = t => {
console.log("onMsgTrust ", JSON.stringify(t));
this.dispatch("onMsgTrust" + a.GAME_ID, t);
};
this.onMsgGiveUp = t => {
console.log("onMsgGiveUp ", JSON.stringify(t));
if (u.GLProtocol.msgGiveUp.eFlag.FLAG_GIVE_UP == t._flag) {
this._tableData.setBankrupt(this._tableData.seatToLocal(t._seat), !0);
if (this._tableData.seatToLocal(t._seat) == n.SELF_LOCAL_SEAT) {
this.dispatch("onHidePowerPropBtn" + a.GAME_ID);
this.dispatch("onHidePopView" + a.GAME_ID, n.HIDE_POP_VIEW_FLAG.HPVF_GIVE_UP);
this.getImpl(h.default).onGiveUp();
}
}
this.dispatch("onMsgGiveUp" + a.GAME_ID, t);
};
this.onMsgFlowList = t => {
console.log("onMsgFlowList ", JSON.stringify(t));
if (t._flag === u.GLProtocol.msgFlowList.eFlag2.FLAG_ADD) this._tableData.addFlowData(t); else {
this._tableData.clearFlowData();
this._tableData.addFlowData(t);
}
this.dispatch("onMsgFlowList" + a.GAME_ID, t);
};
this.onMsgRoundResult = t => {
console.log("onMsgRoundResult ", JSON.stringify(t));
console.log("动效时间", new Date().getTime());
this._tableData.setRoundResult(t);
this.dispatch("onCloseLuck" + a.GAME_ID);
this.dispatch("onCheckBuffCard" + a.GAME_ID, !1);
let e = !1;
for (let i = 0; i < t._self_hu.length; i++) {
const s = t._self_hu[i];
s[this._tableData.getSelfSeat()] !== u.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_HU && s[this._tableData.getSelfSeat()] !== u.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_ZIMO || (e = !0);
}
this._tableData.cardLogicData.setNowPlayerSeat(0);
e && this._tableData.setHuStatus(!0);
const i = [];
for (let e = 0; e < t._self_hu.length; e++) {
const s = t._self_hu[e];
for (let o = 0; o < s.length; o++) {
const a = s[o];
if (a === u.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_HU || a === u.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_ZIMO) {
i[o] || (i[o] = []);
const s = t._star_combo_index[e][o];
s > 0 ? 1 == s && i[o].push(t._hu_card[e][o]) : i[o].push(t._hu_card[e][o]);
}
}
}
let s = !0;
for (let t = 0; t < n.MAX_PLAYER; t++) 0 != this._tableData.getHuCards(t).length && (s = !1);
if (s) {
this._tableData.gameLogicData.isBigAwardOn() || this._iSound.playMusic(l.SOUND_PATH.BGMEX, "game_k7star");
this._tableData.setCurBGMName(l.SOUND_PATH.BGMEX);
}
for (let t = 0; t < n.MAX_PLAYER; t++) {
const e = i[t];
if (e) {
const i = this._tableData.seatToLocal(t), s = [ ...this._tableData.getHuCards(i), ...e ];
this._tableData.setHuCards(i, s);
}
}
const o = [];
for (let e = 0; e < t._self_hu.length; e++) {
const i = t._self_hu[e];
for (let t = 0; t < i.length; t++) {
const s = i[t];
s != u.GLProtocol.msgRoundResult.eFlag.FLAG_NONE && (s === u.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_HU || s === u.GLProtocol.msgRoundResult.eFlag.FLAG_BE_HU ? o[e] = !1 : o[e] = !0);
}
}
const r = [], d = [];
for (let e = 0; e < o.length; e++) if (o[e] && t._self_hu[e]) for (let i = 0; i < t._self_hu[e].length; i++) {
const s = t._self_hu[e][i];
if (s === u.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_HU || s === u.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_ZIMO) {
r[i] || (r[i] = []);
const s = t._star_combo_index[e][i];
s > 0 ? 1 == s && r[i].push(t._hu_card[e][i]) : r[i].push(t._hu_card[e][i]);
}
} else if (t._self_hu[e]) for (let i = 0; i < t._self_hu[e].length; i++) {
const s = t._self_hu[e][i];
if (s === u.GLProtocol.msgRoundResult.eFlag.FLAG_BE_HU || s === u.GLProtocol.msgRoundResult.eFlag.FLAG_BE_ZIMO) {
d[i] || (d[i] = []);
d[i].push(t._hu_card[e][i]);
}
}
for (let t = 0; t < n.MAX_PLAYER; t++) {
const e = r[t], i = this._tableData.seatToLocal(t);
if (e) {
const t = this.delArraryHandCards(i, e);
this._tableData.setHandCards(i, t);
if (i === n.SELF_LOCAL_SEAT && 1 == this._tableData.getHuCards(i).length) {
_.default.cardData[i].setHandHuCards(t);
const e = this._tableData.getNowTingInfo();
e && e._count > 0 ? this.dispatch("showBtnTing" + a.GAME_ID, !0) : this.dispatch("showBtnTing" + a.GAME_ID, !1);
}
this.dispatch("setHandCards" + a.GAME_ID, i, t);
} else if (i === n.SELF_LOCAL_SEAT && 1 == this._tableData.getHuCards(i).length) {
const t = this._tableData.getHandCards(i);
_.default.cardData[i].setHandHuCards(t);
this.dispatch("setHandCards" + a.GAME_ID, i, t);
}
const s = d[t];
if (s) {
const e = this._tableData.seatToLocal(t), i = this._tableData.getOutCards(e);
i.splice(i.length - s.length, s.length);
this._tableData.setOutCards(e, i);
this.dispatch("setOutCards" + a.GAME_ID, e, i, !1);
}
}
this.dispatch("onMsgHuCardsAni" + a.GAME_ID);
this._tableData.getHuCards(n.SELF_LOCAL_SEAT).length;
this._tableData.setAddCards(null);
const h = this._tableData.getSelfSeat();
let c = !1;
for (let e = 0; e < t._count; e++) t._ex_flag[e][h] == n.eResultExFlag.FlagBankrupt && (c = !0);
c || this.dispatch("onUpdateYunProBtnTips" + a.GAME_ID);
};
this.onMsgTotalResult = t => {
console.log("onMsgTotalResult ", JSON.stringify(t));
this._tableData.setTotalResult(t);
this.dispatch("onMsgTotalResult" + a.GAME_ID, t);
this.dispatch("onCloseLuck" + a.GAME_ID);
this.dispatch("onCheckBuffCard" + a.GAME_ID, !1);
this.dispatch("showChargingSigns" + a.GAME_ID, !1, n.MAX_PLAYER);
this.dispatch("showBtnTing" + a.GAME_ID, !1);
console.log("onMsgTotalResult onGameEnd 0");
this.onGameEnd();
console.log("onMsgTotalResult onGameEnd 1");
this._tableData.gameLogicData.isBigAwardOn() || this._iSound.playMusic(l.SOUND_PATH.BGM, "game_k7star");
this._tableData.setCurBGMName(l.SOUND_PATH.BGM);
this.getImpl(d.comm.lobby.IPlayerGameDataManager).reqPlayerGameData();
const e = this.getImpl(d.comm.lobby.IJoinRoomModule).isGuide();
console.log("onMsgTotalResult scheduleOnce guide:", e);
this.scheduleOnce(() => {
const t = {
_state: n.ENUM_GAME_STATE.GS_IDLE,
_end_wait_index: 0,
__protoFormat__: void 0,
pack: function() {
throw new Error("Function not implemented.");
}
};
this._tableData.setGameState(t);
console.log("onMsgTotalResult scheduleOnce in guide:", e);
if (!e) {
console.log("onMsgTotalResult scheduleOnce into");
this.getImpl(h.default).onWinLost();
console.log("onMsgTotalResult scheduleOnce end");
}
}, 1.5);
this.dispatch("onHidePowerPropBtn" + a.GAME_ID);
this.dispatch("onHidePopView" + a.GAME_ID, n.HIDE_POP_VIEW_FLAG.HPVF_TOTAL_RESULT);
const i = this._tableData.getShushuTouchu();
if (o.shuShuAnalytics.playcard_type["type" + i]) {
const t = this.getImpl(d.comm.lobby.IJoinRoomModule).getJoinRoomData().roomid || 0;
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_qxbp_playtype, {
room_id: t,
play_type: o.shuShuAnalytics.playcard_type["type" + i]
});
this._tableData.setShushuTouchu(0);
}
};
this.onMsgRespUsePropNew = t => {
console.log("onMsgRespUsePropNew ", JSON.stringify(t));
this.dispatch("onMsgRespUsePropNew" + a.GAME_ID, t);
};
this.onMsgHeadProp = t => {
console.log("onMsgHeadProp ", JSON.stringify(t));
const e = this._tableData.getPlayerBySeat(t.seat);
e && this._tableData.setHeadBox(d.comm.Util.MAKEUSERID(Number(e.areaid), Number(e.numid)), t.prop_id);
this.dispatch("onMsgHeadPropNew" + a.GAME_ID, t);
};
this.onMsgNobilityResult = t => {
console.log("onMsgNobilityResult ", JSON.stringify(t));
this._tableData.setNobilityResult(d.comm.Util.clone(t));
this.dispatch("onMsgNobilityResult" + a.GAME_ID, t);
};
this.onMsgSpecConfig = t => {
console.log("onMsgSpecConfig ", JSON.stringify(t));
this.dispatch("onMsgSpecConfig" + a.GAME_ID, t);
};
this.onMsgBigAward = t => {
console.log("onMsgBigAward ", JSON.stringify(t));
this._tableData.gameLogicData.setBigAwardData(t);
this._tableData.gameLogicData.setWillShowBigAward(!0);
};
this.onMsgNoLimitInfo = t => {
console.log("onMsgNoLimitInfo ", JSON.stringify(t));
const e = this._tableData.seatToLocal(t._seat);
this._tableData.setNoLimitInfo(e, t);
e === n.SELF_LOCAL_SEAT && this._tableData.setSelfMaxCanWin(t._no_limit_can_win);
this.dispatch("onMsgNoLimitInfo" + a.GAME_ID, t);
};
this.onMsgRechargeState = t => {
console.log("onMsgRechargeState ", JSON.stringify(t));
this.dispatch("onMsgRechargeState" + a.GAME_ID, t);
};
this.onMsgPlayerPropInfo = t => {
console.log("onMsgPlayerPropInfo ", JSON.stringify(t));
const e = this._tableData.seatToLocal(t._seat);
this._tableData.gameLogicData.clearProps(e);
if (t._prop_id.length > 0) for (let i = 0; i < t._prop_id.length; i++) this._tableData.gameLogicData.addProps(e, t._prop_id[i], t._prop_cnt[i]);
e == n.SELF_LOCAL_SEAT && this.dispatch("onMsgPlayerPropInfo" + a.GAME_ID);
};
this.onMsgPlayerLeaveSpecil = t => {
console.log("onMsgPlayerLeaveSpecil ", JSON.stringify(t));
const e = this._tableData.seatToLocal(t._seat);
this._tableData.gameLogicData.setLeaveSpeFlag(e, t._flag);
e == n.SELF_LOCAL_SEAT && this.dispatch("onHidePowerPropBtn" + a.GAME_ID);
1 != t._reconnect && e == n.SELF_LOCAL_SEAT || this.dispatch("onShowPlayerLeaveHead" + a.GAME_ID, e);
this.dispatch("onMsgPlayerLeaveSpecil" + a.GAME_ID, e);
};
this.onMsgUsePropSpecil = t => {
console.log("onMsgUsePropSpecil ", JSON.stringify(t));
if (t._flag != u.GLProtocol.msgUsePropSpecil.eFlag.FLAG_SUCC) {
let e = "";
switch (t._flag) {
case u.GLProtocol.msgUsePropSpecil.eFlag.FLAG_TIME_LIMIT:
e = "您点击的太快了！";
break;

default:
e = "使用道具失败！";
}
"" != e && this.getImpl(d.comm.ICommonDlgs).showWeakHint(e);
}
};
this.onMsgYunProtectInfo = t => {
console.log("onMsgYunProtectInfo ", JSON.stringify(t));
if (this._tableData.seatToLocal(t._seat) == n.SELF_LOCAL_SEAT) {
this._tableData.gameLogicData.setYunProtectInfo(t);
this.dispatch("onMsgYunProtectInfo" + a.GAME_ID, t._flag);
}
};
this.onMsgSetDoubleProp = t => {
console.log("onMsgSetDoubleProp ", JSON.stringify(t));
if (this._tableData.seatToLocal(t._seat) == n.SELF_LOCAL_SEAT) {
this._tableData.gameLogicData.setDoubleInfo(t);
this.dispatch("onMsgSetDoubleProp" + a.GAME_ID, t._flag);
}
};
this.onMsgUseDoublePropInfo = t => {
console.log("onMsgUseDoublePropInfo ", JSON.stringify(t));
const e = this._tableData.seatToLocal(t._seat);
let i = this._tableData.getSeatName(e);
e == n.SELF_LOCAL_SEAT && (i = "");
let s = "关闭";
t._status == u.GLProtocol.msgUseDoublePropInfo.eFlag.ES_OPEN && (s = "使用");
this.getImpl(d.comm.ICommonDlgs).showWeakHint(`${i}${s}和牌翻倍。`);
};
this.onMsgPlayerExtra = t => {
console.log("onMsgPlayerExtra ", JSON.stringify(t));
this._tableData.setTitleType(this._tableData.seatToLocal(t._seat), t._title_type);
this._tableData.setTitleRank(this._tableData.seatToLocal(t._seat), t._title_rank);
};
this.onMsgReusltExtra = t => {
console.log("onMsgReusltExtra ", JSON.stringify(t));
this._tableData.seatToLocal(t._seat) == n.SELF_LOCAL_SEAT && this._tableData.gameLogicData.setTitleAwardData(t._title_ret);
};
this.onMsgCardRecord = t => {
var e;
console.log("msgCardRecord ", JSON.stringify(t));
this._tableData.setCardRecordData(null !== (e = t._left_counts) && void 0 !== e ? e : []);
this.dispatch("onMsgCardRecord" + a.GAME_ID, t);
};
this.onMsgCardRecordState = t => {
console.log("onMsgCardRecordState ", JSON.stringify(t));
this._tableData.setUseNoteCardType(t._flag);
};
this.onMsgGoldBuffInfo = t => {
console.log("onMsgGoldBuffInfo ", JSON.stringify(t));
const e = [], i = t._buff;
try {
const t = JSON.parse(i);
for (const i of t) e.push(i);
} catch (t) {
console.error("onMsgGoldBuffInfo fail:", t);
}
t._buffParse = e;
this._tableData.setGoldBuffCard(t);
this._tableData.addBuff(t._buffParse[t._index]);
this.dispatch("onMsgGoldBuffInfo" + a.GAME_ID, t);
t._buffParse[t._index].id == n.GOLD_CARD_BUFF_FLAG.GCBF_CLONE && this.dispatch("onMsgGoldBuffInfoCloneAdd" + a.GAME_ID);
};
this.onMsgGoldBuffAll = t => {
console.log("onMsgGoldBuffAll ", JSON.stringify(t));
this._tableData.clearBuffList();
const e = [], i = t._buff;
try {
const t = JSON.parse(i);
for (const i of t) e.push(i);
} catch (t) {
console.error("onMsgGoldBuffInfo fail:", t);
}
for (const t of e) this._tableData.addBuff(t);
this.dispatch("onToggleBtnBuff" + a.GAME_ID, !1);
this.dispatch("onMsgGoldBuffInfoCloneAdd" + a.GAME_ID);
};
this.onMsgGoldBuffCard = t => {
console.log("onMsgGoldBuffCard ", JSON.stringify(t));
this._tableData.getReconnect()._flag === u.GLProtocol.msgReconnect.eFlag.FLAG_START && this.dispatch("onMsgStartChooseBuff" + a.GAME_ID, t);
};
this.onMsgStarCount = t => {
console.log("onMsgStarCount ", JSON.stringify(t));
const e = this._tableData.seatToLocal(t._seat);
this._tableData.setStarCount(e, t._star_count);
const i = this._tableData.getReconnect();
this.dispatch("onMsgUpdateStarCountUI" + a.GAME_ID, 0 == t._star_count || i._flag === u.GLProtocol.msgReconnect.eFlag.FLAG_START || i._flag === u.GLProtocol.msgReconnect.eFlag.FLAG_START_WITH_PEAK);
};
}
init() {
this._iJoinRoomMoudle = this.getImpl(d.comm.lobby.IJoinRoomModule);
this._tableData = this.getImpl(_.default);
this._cardLogic = new r.default();
this._iSound = this.getImpl(d.gf.ISound);
this.initProtocol();
}
onDestroy() {
this.unscheduleAllCallbacks();
}
startListen() {
this._iJoinRoomMoudle.addServerToClientCallBack((t, e, i) => {
console.log("subXYDealList:", t, i);
this._subXYDealList[t] ? this._subXYDealList[t](e, i) : this.dealSubBuff(t, e, i);
});
}
endListen() {
this._iJoinRoomMoudle.removeServerToClientCallBack();
}
sendClientToServerMessage(t, e) {
this._iJoinRoomMoudle.sendClientToServerMessage(t, e);
}
addMsgHandler(t, e, i) {
this._subXYDealList[t] = (s, o) => {
s.length;
let a;
if (e.decode) a = e.decode(s, o); else if (e.unpack) {
t == g.FWProtocol.xyid.FWXY_PLAYERDATA && console.log("" + t);
a = e.unpack(s, o);
}
i(a);
};
}
sendProtocolMsg(t, e) {
e = e || Object.getPrototypeOf(t).constructor.xy_id;
this.sendClientToServerMessage(e, t.pack());
}
dealSubBuff(t, e, i) {
console.log("dealSubBuff: subXYID = ", t, "subBuffLen=", e.length, " len=", i);
}
initProtocol() {
this.addMsgHandler(u.GLProtocol.xyid.GLP_NOTICE, u.GLProtocol.msgNotice, this.onMsgNotice);
this.addMsgHandler(u.GLProtocol.xyid.GLP_PLAYER_INFO, u.GLProtocol.msgPlayerInfo, this.onMsgPlayerInfo);
this.addMsgHandler(u.GLProtocol.xyid.GLP_PLAYER_LEAVE, u.GLProtocol.msgPlayerLeave, this.onMsgPlayerLeave);
this.addMsgHandler(u.GLProtocol.xyid.GLP_TIMER, u.GLProtocol.msgTimer, this.onMsgTimer);
this.addMsgHandler(u.GLProtocol.xyid.GLP_GAME_STATE, u.GLProtocol.msgGameState, this.onMsgGameState);
this.addMsgHandler(u.GLProtocol.xyid.GLP_RECONNECT, u.GLProtocol.msgReconnect, this.onMsgReconnect);
this.addMsgHandler(u.GLProtocol.xyid.GLP_USE_PROP_NEW, u.GLProtocol.msgUsePropNew, this.onMsgRespUsePropNew);
this.addMsgHandler(u.GLProtocol.xyid.GLP_NOBILITY_RESULT, u.GLProtocol.msgNobilityResult, this.onMsgNobilityResult);
this.addMsgHandler(u.GLProtocol.xyid.GLP_GAME_CONFIG, u.GLProtocol.msgGameConfig, this.onMsgGameConfig);
this.addMsgHandler(u.GLProtocol.xyid.GLP_SPEC_CARDS, u.GLProtocol.msgSpecCards, this.onMsgSpecCards);
this.addMsgHandler(u.GLProtocol.xyid.GLP_DECK_COUNT, u.GLProtocol.msgDeckCount, this.onMsgDeckCount);
this.addMsgHandler(u.GLProtocol.xyid.GLP_BASE_INFO, u.GLProtocol.msgBaseInfo, this.onMsgBaseInfo);
this.addMsgHandler(u.GLProtocol.xyid.GLP_TAKE_FIRST, u.GLProtocol.msgTakeFirst, this.onMsgTakeFirst);
this.addMsgHandler(u.GLProtocol.xyid.GLP_CLONE_CARDS, u.GLProtocol.msgCloneCards, this.onMsgCloneCards);
this.addMsgHandler(u.GLProtocol.xyid.GLP_ADD_CARDS, u.GLProtocol.msgAddCards, this.onMsgAddCards);
this.addMsgHandler(u.GLProtocol.xyid.GLP_START_CHOOSE_CARD, u.GLProtocol.msgStartChooseCard, this.onMsgStartChooseCard);
this.addMsgHandler(u.GLProtocol.xyid.GLP_END_CHOOSE_CARD, u.GLProtocol.msgEndChooseCard, this.onMsgEndChooseCard);
this.addMsgHandler(u.GLProtocol.xyid.GLP_HAND_CARDS, u.GLProtocol.msgHandCards, this.onMsgHandCards);
this.addMsgHandler(u.GLProtocol.xyid.GLP_TOWER_CARDS, u.GLProtocol.msgTowerCards, this.onMsgTowerCards);
this.addMsgHandler(u.GLProtocol.xyid.GLP_OUTED_CARDS, u.GLProtocol.msgOutedCards, this.onMsgOutedCards);
this.addMsgHandler(u.GLProtocol.xyid.GLP_PLAY_CARDS, u.GLProtocol.msgPlayCards, this.onMsgPlayCards);
this.addMsgHandler(u.GLProtocol.xyid.GLP_HU_CARDS, u.GLProtocol.msgHuCards, this.onMsgHuCards);
this.addMsgHandler(u.GLProtocol.xyid.GLP_HUED_CARDS, u.GLProtocol.msgHuedCards, this.onMsgHuedCards);
this.addMsgHandler(u.GLProtocol.xyid.GLP_RECOMMEND_CARDS, u.GLProtocol.msgRecommendCards, this.onMsgRecommendCards);
this.addMsgHandler(u.GLProtocol.xyid.GLP_SKIP_LOW, u.GLProtocol.msgSkipLow, this.onMsgSkipLow);
this.addMsgHandler(u.GLProtocol.xyid.GLP_TRUST, u.GLProtocol.msgTrust, this.onMsgTrust);
this.addMsgHandler(u.GLProtocol.xyid.GLP_GIVE_UP, u.GLProtocol.msgGiveUp, this.onMsgGiveUp);
this.addMsgHandler(u.GLProtocol.xyid.GLP_FLOW_LIST, u.GLProtocol.msgFlowList, this.onMsgFlowList);
this.addMsgHandler(u.GLProtocol.xyid.GLP_ROUND_RESULT, u.GLProtocol.msgRoundResult, this.onMsgRoundResult);
this.addMsgHandler(u.GLProtocol.xyid.GLP_TOTAL_RESULT, u.GLProtocol.msgTotalResult, this.onMsgTotalResult);
this.addMsgHandler(u.GLProtocol.xyid.GLP_BOMB_CARDS, u.GLProtocol.msgBombCards, this.onMsgBombCards);
this.addMsgHandler(u.GLProtocol.xyid.GLP_DO_TOWER_CARD, u.GLProtocol.msgDoTowerCard, this.onMsgDoTowerCard);
this.addMsgHandler(u.GLProtocol.xyid.GLP_DO_PASS, u.GLProtocol.msgDoPass, this.onMsgDoPass);
this.addMsgHandler(u.GLProtocol.xyid.GLP_HEAD_PROP, u.GLProtocol.msgHeadProp, this.onMsgHeadProp);
this.addMsgHandler(u.GLProtocol.xyid.GLP_PEAK_PLAY_CARDS, u.GLProtocol.msgPeakPlayCards, this.onMsgPeakPlayCards);
this.addMsgHandler(u.GLProtocol.xyid.GLP_ACT_POWER_NEW, u.GLProtocol.msgActPowerNew, this.onMsgActPowerNew);
this.addMsgHandler(u.GLProtocol.xyid.GLP_RECOMMEND_CARDS_NEW, u.GLProtocol.msgRecommendCardsNew, this.onMsgRecommendCardsNew);
this.addMsgHandler(u.GLProtocol.xyid.GLP_LAST_OUTED_CARD, u.GLProtocol.msgLastOutedCard, this.onMsgLastOutedCard);
this.addMsgHandler(u.GLProtocol.xyid.GLP_TING_LIST_NEW, u.GLProtocol.msgTingListNew, this.onMsgTingListNew);
this.addMsgHandler(u.GLProtocol.xyid.GLP_SPEC_CONFIG, u.GLProtocol.msgSpecConfig, this.onMsgSpecConfig);
this.addMsgHandler(u.GLProtocol.xyid.GLP_BIG_AWARD, u.GLProtocol.msgBigAward, this.onMsgBigAward);
this.addMsgHandler(u.GLProtocol.xyid.GLP_NO_LIMIT_INFO, u.GLProtocol.msgNoLimitInfo, this.onMsgNoLimitInfo);
this.addMsgHandler(u.GLProtocol.xyid.GLP_RECHARGE_STATE, u.GLProtocol.msgRechargeState, this.onMsgRechargeState);
this.addMsgHandler(u.GLProtocol.xyid.GLP_PLAYER_PROP_INFO, u.GLProtocol.msgPlayerPropInfo, this.onMsgPlayerPropInfo);
this.addMsgHandler(u.GLProtocol.xyid.GLP_PLAYER_LEAVE_SPECIAL, u.GLProtocol.msgPlayerLeaveSpecil, this.onMsgPlayerLeaveSpecil);
this.addMsgHandler(u.GLProtocol.xyid.GLP_USE_PROP_SPECIAL, u.GLProtocol.msgUsePropSpecil, this.onMsgUsePropSpecil);
this.addMsgHandler(u.GLProtocol.xyid.GLP_YUN_PROTECT_INFO, u.GLProtocol.msgYunProtectInfo, this.onMsgYunProtectInfo);
this.addMsgHandler(u.GLProtocol.xyid.GLP_SET_DOUBLE_PROP, u.GLProtocol.msgSetDoubleProp, this.onMsgSetDoubleProp);
this.addMsgHandler(u.GLProtocol.xyid.GLP_USE_DOUBLE_PROP_INFO, u.GLProtocol.msgUseDoublePropInfo, this.onMsgUseDoublePropInfo);
this.addMsgHandler(u.GLProtocol.xyid.GLP_PLAYER_EXTRA, u.GLProtocol.msgPlayerExtra, this.onMsgPlayerExtra);
this.addMsgHandler(u.GLProtocol.xyid.GLP_RESULT_EXTRA, u.GLProtocol.msgReusltExtra, this.onMsgReusltExtra);
this.addMsgHandler(u.GLProtocol.xyid.GLP_CARD_RECORD, u.GLProtocol.msgCardRecord, this.onMsgCardRecord);
this.addMsgHandler(u.GLProtocol.xyid.GLP_CARD_RECORD_STATE, u.GLProtocol.msgCardRecordState, this.onMsgCardRecordState);
this.addMsgHandler(u.GLProtocol.xyid.GLP_GOLD_BUFF_INFO, u.GLProtocol.msgGoldBuffInfo, this.onMsgGoldBuffInfo);
this.addMsgHandler(u.GLProtocol.xyid.GLP_GOLD_BUFF_ALL, u.GLProtocol.msgGoldBuffAll, this.onMsgGoldBuffAll);
this.addMsgHandler(u.GLProtocol.xyid.GLP_GOLD_BUFF_CARD, u.GLProtocol.msgGoldBuffCard, this.onMsgGoldBuffCard);
this.addMsgHandler(u.GLProtocol.xyid.GLP_STAR_COUNT, u.GLProtocol.msgStarCount, this.onMsgStarCount);
}
delArraryHandCards(t, e) {
let i = this._tableData.getHandCards(t);
if (t != n.SELF_LOCAL_SEAT && this._cardLogic.hasCardBack(i)) if (this._cardLogic.hasCardBack(i)) {
const t = [];
let o = 0;
for (let e = 0; e < i.length; e++) if (i[e] === s.CardID.CID_GOLD) {
t.push(s.CardID.CID_GOLD);
o++;
}
for (let i = 0; i < e.length - o; i++) t.push(s.CardID.CID_BACK);
i = this._cardLogic.delArraryInOtherArraryEx(t, i);
} else i = this._cardLogic.delArraryInOtherArraryEx(e, i); else i = this._cardLogic.delArraryInOtherArraryEx(e, i);
return this._cardLogic.sortCard(i, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
}
sendRechargeState(t) {
const e = new u.GLProtocol.msgRechargeState();
e._seat = this._tableData.getSelfSeat();
e._flag = t;
this.sendProtocolMsg(e);
}
sendGiveUp(t) {
const e = new u.GLProtocol.msgGiveUp(), i = this._tableData.getSelfSeat();
e._seat = i;
e._flag = t;
this.sendProtocolMsg(e);
}
sendEndWait() {
const t = this._tableData.getGameState(), e = new u.GLProtocol.msgEndWait();
e._flag = t._end_wait_index;
console.log("动效时间 发送协议", new Date().getTime());
console.log("发送协议 sendEndWait: msg=", JSON.stringify(e), " oldState=", JSON.stringify(this._tableData.getGameStateOld()));
this.sendProtocolMsg(e);
}
sendPlayerChooseCard(t) {
const e = new u.GLProtocol.msgPlayerChooseCard(), i = this._tableData.getSelfSeat();
e._seat = i;
e._index = t;
console.log("发送协议 sendPlayerChooseCard: msg=", JSON.stringify(e));
this.sendProtocolMsg(e);
}
sendGoldBuffSel(t) {
console.log("sendGoldBuffSel index=", t);
const e = new u.GLProtocol.msgGoldBuffSel();
e._flag = u.GLProtocol.msgGoldBuffSel.eFlag.FLAG_NONE;
e._seat = this._tableData.getSelfSeat();
e._index = t;
this.sendProtocolMsg(e);
}
sendGetTingListNew() {
const t = new u.GLProtocol.msgGetTingNew();
t._flag = 1;
this.sendProtocolMsg(t);
}
sendPlayCards(t, e = n.ePlayCardFlag.PLAY_CF_NONE) {
const i = new u.GLProtocol.msgPlayCards(), s = this._tableData.getSelfSeat();
i._seat = s;
i._cards = t;
i._flag = e;
console.log("发送协议 sendPlayCards: msg=", JSON.stringify(i));
this.sendProtocolMsg(i);
}
sendBombCards(t, e) {
const i = new u.GLProtocol.msgBombCards(), s = this._tableData.getSelfSeat();
i._seat = s;
i._cards = t;
i._from_seat = e;
console.log("发送协议 sendBombCards: msg=", JSON.stringify(i));
this.sendProtocolMsg(i);
}
sendDoTowerCard(t) {
const e = new u.GLProtocol.msgDoTowerCard(), i = this._tableData.getSelfSeat();
e._seat = i;
e._cards = t;
e._from_seat = i;
console.log("发送协议 sendDoTowerCard: msg=", JSON.stringify(e));
this.sendProtocolMsg(e);
}
sendHuCards(t, e, i = 0) {
const s = new u.GLProtocol.msgHuCards(), o = this._tableData.getSelfSeat();
e = e || o;
s._seat = o;
s._cards = t;
s._from_seat = e;
s._combo = i;
console.log("发送协议 sendHuCards: msg=", JSON.stringify(s));
this.sendProtocolMsg(s);
}
sendMingCards() {
const t = new u.GLProtocol.msgDoMing();
t._flag = 1;
console.log("发送协议 sendMingCards: msg=", JSON.stringify(t));
this.sendProtocolMsg(t);
}
sendPassCards() {
const t = new u.GLProtocol.msgDoPass();
t._flag = 1;
console.log("发送协议 sendProtocolMsg: msg=", JSON.stringify(t));
this.sendProtocolMsg(t);
}
sendSkipLow(t) {
const e = new u.GLProtocol.msgSkipLow();
e._flag = t;
this.sendProtocolMsg(e);
}
sendTrust(t) {
const e = this._tableData.getSelfSeat(), i = new u.GLProtocol.msgTrust();
i._seat = e;
i._flag = t;
this.sendProtocolMsg(i);
}
sendRecommend() {
const t = new u.GLProtocol.msgGetRecommend();
t._flag = 1;
this.sendProtocolMsg(t);
}
sendRecommendNew() {
const t = new u.GLProtocol.msgGetRecommendNew();
t._flag = 1;
this.sendProtocolMsg(t);
}
sendUsePropSpecil(t, e) {
const i = new u.GLProtocol.msgUsePropSpecil();
i._flag = 0;
i._seat = this._tableData.getSelfSeat();
i._prop_id = t;
i._prop_cnt = e;
this.sendProtocolMsg(i);
}
sendSetDoubleProp(t, e = 0) {
const i = new u.GLProtocol.msgSetDoubleProp();
i._flag = 0;
i._seat = this._tableData.getSelfSeat();
i._open = 1;
i._status = t ? u.GLProtocol.msgSetDoubleProp.eStatus.ES_OPEN : u.GLProtocol.msgSetDoubleProp.eStatus.ES_NONE;
i._color_lvl = e;
this.sendProtocolMsg(i);
}
sendChangeSeat() {
this._tableData.clear();
this.dispatch("reset" + a.GAME_ID);
this.getImpl(d.comm.lobby.IJoinRoomModule).reqChangeTable();
}
sendReqUsingProp(t) {
const e = new m.RLProtocol.msgReqUsingProp();
e.nPropID = t;
e.toSeat = this._tableData.getSelfSeat();
this.sendProtocolMsg(e);
}
sendReqUsingPropEx(t, e) {
const i = new u.GLProtocol.msgUsePropNew();
i._prop_id = t;
i._prop_cnt = 1;
i._from_seat = this._tableData.getSelfSeat();
i._to_seat = e;
this.sendProtocolMsg(i);
}
sendReqTurnCardRecord(t) {
const e = new u.GLProtocol.msgTurnCardRecord();
e._flag = t;
this.sendProtocolMsg(e);
}
sendSpecCards(t) {
const e = new u.GLProtocol.msgSpecCards();
e._count = t.length;
e._cards = t;
this.sendProtocolMsg(e);
}
sendVersionCode() {
const t = new u.GLProtocol.msgVersionChcek();
t._ver_code = n.VERSION_CODE;
this.sendProtocolMsg(t);
}
reqPlayerConnect(t) {
this._iJoinRoomMoudle.reqPlayerConnect(e => {
t && t(e);
});
}
reqChangeTable(t) {
this._iJoinRoomMoudle.reqChangeTable((e, i) => {
t && t(e, i);
});
}
reqClientAward(t) {
this._iJoinRoomMoudle.reqClientAward(t);
}
OnRespUserInfo(t) {
if (t) {
console.log("OnRespUserInfo in Game:", JSON.stringify(t));
if ((null == t ? void 0 : t.areaid) && (null == t ? void 0 : t.numid)) {
const e = d.comm.StringUtils.bytesToString(t.ext);
console.log("Game OnRespUserInfo=" + e);
let i, s;
try {
const t = JSON.parse(e);
i = t.headid;
s = t.sdheadurl.replace(/\\\\/gu, "");
} catch (t) {
console.log("Game OnRespUserInfo fail:" + e);
}
if (null != i) {
this._tableData.setPlayerHeadInfo(d.comm.Util.MAKEUSERID(Number(t.areaid), Number(t.numid)), i, s);
d.comm.g.areaConfig.areaID == t.areaid && this.getImpl(d.comm.lobby.IUserManager).numid == t.numid && this.dispatch("KW_updateHead", n.SELF_LOCAL_SEAT);
}
}
}
}
OnPlayerStateInfo(t) {
if (t) {
console.log("OnPlayerStateInfo in Game:", JSON.stringify(t));
if ((null == t ? void 0 : t.areaid) && (null == t ? void 0 : t.numid)) {
const e = d.comm.StringUtils.bytesToString(t.data);
console.log("Game OnPlayerStateInfo=" + e);
const i = [];
try {
const s = JSON.parse(e), o = d.comm.Util.MAKEUSERID(Number(t.areaid), Number(t.numid));
if (s.dress && Array.isArray(s.dress)) for (let t = 0; t < s.dress.length; t++) {
this._tableData.getDressProp(o, s.dress[t].type) != s.dress[t].propid && i.push(s.dress[t].type);
this._tableData.setDressProp(o, s.dress[t].type, s.dress[t].propid);
}
} catch (t) {
console.log("Game OnPlayerStateInfo fail:" + e);
}
if (i.length > 0) for (const e of i) this.dispatch("KW_updateDressProp" + a.GAME_ID, Number(t.areaid), Number(t.numid), e);
}
}
}
onGameStart() {
this._tableData.reset();
this._tableData.clearFlowData();
this.getImpl(c.default).clear();
this.dispatch("onGameStart" + a.GAME_ID);
const t = this._tableData.getSelf();
if (t) {
const e = Number(t.sr) || 0;
this._tableData.setStartGameGold(e);
}
this.getImpl(h.default).sendDiBaoIsNewPlayer();
}
onGameEnd() {
this.dispatch("onGameEnd" + a.GAME_ID);
}
updateCloneOtherCards(t) {
if (!t || !Array.isArray(t._old_card_values) || !Array.isArray(t._new_card_values) || t._old_card_values.length !== t._new_card_values.length) {
console.error("Invalid data format");
return;
}
const e = this._tableData.getReconnect();
if (void 0 === e._flag || e._flag === u.GLProtocol.msgReconnect.eFlag.FLAG_END) for (let e = 0; e < n.MAX_PLAYER; e++) if (e !== n.SELF_LOCAL_SEAT) try {
const i = this._tableData.getHandCards(e);
if (null == i) {
console.error(`Hand cards for player ${e} is undefined or null`);
continue;
}
if (this._cardLogic.hasCardBack(i)) continue;
{
const o = {};
for (let e = 0; e < t._old_card_values.length; e++) o[t._old_card_values[e]] = t._new_card_values[e];
let a = [];
for (const t of i) {
const e = (0, s.VALUE)(t), i = (0, s.COLOR)(t), n = o[e] + 13 * (i - 1);
o[e] && o[e] > 0 ? a.push(n) : a.push(t);
}
a = this._cardLogic.sortCard(a, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0);
e !== n.SELF_LOCAL_SEAT && this._tableData.setHandCards(e, a);
}
} catch (t) {
console.error(`Error updating hand cards for player ${e}:`, t);
}
}
};
C([ d.gf.init ], p.prototype, "init", null);
C([ d.gf.listen(d.comm.RoomToGameEventName.EVENT_RTG_RESP_USER_INFO) ], p.prototype, "OnRespUserInfo", null);
C([ d.gf.listen(d.comm.RoomToGameEventName.EVENT_RTG_UPDATE_DRESS) ], p.prototype, "OnPlayerStateInfo", null);
const f = p = C([ d.gf.module({
name: "GameLogicManager"
}) ], p);
},
"./bin/logic/protocol/FWProtocol.js": (t, e, i) => {
i.r(e);
i.d(e, {
FW_XYID: () => _,
FWProtocol: () => r
});
var s = i("./bin/gf.js"), o = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
const a = s.comm.ProtocolBase, n = s.comm.XYReader, l = s.comm.ProtoDecorator;
var _, r;
(function(t) {
t[t.FWXY_FIRST = 0] = "FWXY_FIRST";
t[t.FWXY_MESSAGEBOX = 1] = "FWXY_MESSAGEBOX";
t[t.FWXY_TABLEDATA = 2] = "FWXY_TABLEDATA";
t[t.FWXY_PLAYERITEM = 3] = "FWXY_PLAYERITEM";
t[t.FWXY_PLAYERDATA = 4] = "FWXY_PLAYERDATA";
t[t.FWXY_PLAYERDATAEX = 5] = "FWXY_PLAYERDATAEX";
t[t.FWXY_PLAYERENTER = 6] = "FWXY_PLAYERENTER";
t[t.FWXY_PLAYERLEAVE = 7] = "FWXY_PLAYERLEAVE";
t[t.FWXY_PLAYERSTART = 8] = "FWXY_PLAYERSTART";
t[t.FWXY_PLAYERTIMER = 9] = "FWXY_PLAYERTIMER";
t[t.FWXY_STARTED = 10] = "FWXY_STARTED";
t[t.FWXY_ENDING = 11] = "FWXY_ENDING";
t[t.FWXY_QUERYACTION = 12] = "FWXY_QUERYACTION";
t[t.FWXY_REPLYACTION = 13] = "FWXY_REPLYACTION";
t[t.FWXY_REPLYACTIONSETUP = 14] = "FWXY_REPLYACTIONSETUP";
t[t.FWXY_VIDEOLOGINDATA = 15] = "FWXY_VIDEOLOGINDATA";
t[t.FWXY_VIDEOID = 16] = "FWXY_VIDEOID";
t[t.FWXY_SHOWBTN = 17] = "FWXY_SHOWBTN";
t[t.FWXY_ADURL = 18] = "FWXY_ADURL";
t[t.FWXY_BTNTOROOM = 19] = "FWXY_BTNTOROOM";
t[t.FWXY_TALKMSG = 20] = "FWXY_TALKMSG";
t[t.FWXY_DIALECT_TYPE = 27] = "FWXY_DIALECT_TYPE";
t[t.FWXY_KICK_PLAYER = 28] = "FWXY_KICK_PLAYER";
t[t.FWXY_SERVICE_FEE = 29] = "FWXY_SERVICE_FEE";
t[t.FWXY_AVATAR_URL = 30] = "FWXY_AVATAR_URL";
t[t.FWXY_COMMON_STRING = 31] = "FWXY_COMMON_STRING";
t[t.FWXY_PLAYER_BREAK = 32] = "FWXY_PLAYER_BREAK";
t[t.FWXY_PLAYER_RELINK = 33] = "FWXY_PLAYER_RELINK";
t[t.FWXY_REQ_GAMEDATA = 34] = "FWXY_REQ_GAMEDATA";
t[t.FWXY_RESP_GAMEDATA = 35] = "FWXY_RESP_GAMEDATA";
t[t.FWXY_REPORT_GAMEDATA = 36] = "FWXY_REPORT_GAMEDATA";
t[t.FWXY_REQ_CHECK_GAMEDATA = 37] = "FWXY_REQ_CHECK_GAMEDATA";
t[t.FWXY_RESP_CHECK_GAMEDATA = 38] = "FWXY_RESP_CHECK_GAMEDATA";
t[t.FWXY_PLAYER_GAME_INFO = 39] = "FWXY_PLAYER_GAME_INFO";
t[t.FWXY_FUPAN_HEAD = 200] = "FWXY_FUPAN_HEAD";
t[t.FWXY_FUPAN_BODY0 = 201] = "FWXY_FUPAN_BODY0";
t[t.FWXY_FUPAN_BODY1 = 202] = "FWXY_FUPAN_BODY1";
t[t.FWXY_FUPAN_BODY2 = 203] = "FWXY_FUPAN_BODY2";
t[t.FWXY_FUPAN_BODY3 = 204] = "FWXY_FUPAN_BODY3";
t[t.FWXY_FUPAN_MD5 = 205] = "FWXY_FUPAN_MD5";
t[t.FWXY_LAST = 256] = "FWXY_LAST";
})(_ || (_ = {}));
(function(t) {
t.xyid = _;
class e extends a {
constructor() {
super(...arguments);
this.nBrandID = 0;
this.nNumberID = 0;
this.nShowMethod = e.SHOWMETHOD.SM_DIALOG;
this.nShowStyle = 0;
this.nPlayAction = e.PLAYACTION.PA_NORMAL;
this.nTimeDelay = 0;
this.nTextColor = 0;
this.szTitle = [];
this.szText = [];
}
static get ENUM() {
let t, e;
(function(t) {
t[t.SM_DIALOG = 1] = "SM_DIALOG";
t[t.SM_FLOAT = 2] = "SM_FLOAT";
t[t.SM_CHAT = 4] = "SM_CHAT";
t[t.SM_LINK = 8] = "SM_LINK";
t[t.SM_PAGE = 16] = "SM_PAGE";
t[t.SM_TALK = 32] = "SM_TALK";
t[t.SM_TIP = 64] = "SM_TIP";
})(t || (t = {}));
(function(t) {
t[t.PA_NORMAL = 0] = "PA_NORMAL";
t[t.PA_QUIT = 1] = "PA_QUIT";
})(e || (e = {}));
return {
SHOWMETHOD: t,
PLAYACTION: e
};
}
static unpack(t) {
const e = {}, i = new n(t);
e.nBrandID = i.getInt32();
e.nNumberID = i.getInt32();
e.nShowMethod = i.getUint8();
e.nPlayAction = i.getUint8();
e.nTimeDelay = i.getUint32();
e.nTextColor = i.getUint32();
e.szTitle = [];
let s = i.getUint8();
for (let t = 0; t < s; t++) e.szTitle.push(i.getUint8());
e.szText = [];
s = i.getUint8();
for (let t = 0; t < s; t++) e.szText.push(i.getUint8());
return e;
}
}
e.xy_id = _.FWXY_MESSAGEBOX;
e.SHOWMETHOD = e.ENUM.SHOWMETHOD;
e.PLAYACTION = e.ENUM.PLAYACTION;
t.msgMessageBox = e;
class i extends a {
constructor() {
super(...arguments);
this.nGameID = 0;
this.nRoomID = 0;
this.nTableID = 0;
this.nRoomMode = 0;
this.nPlayType = 0;
this.nMatchMode = 0;
}
}
i.xy_id = _.FWXY_TABLEDATA;
o([ l.uint32() ], i.prototype, "nGameID", void 0);
o([ l.uint32() ], i.prototype, "nRoomID", void 0);
o([ l.uint16() ], i.prototype, "nTableID", void 0);
o([ l.uint16() ], i.prototype, "nRoomMode", void 0);
o([ l.uint16() ], i.prototype, "nPlayType", void 0);
o([ l.uint16() ], i.prototype, "nMatchMode", void 0);
t.msgTableData = i;
class s extends a {
constructor() {
super(...arguments);
this.nShowItemCount = 0;
this.nShowItems = [];
this.nShowItemWidth = [];
}
get ENUM() {
let t;
(function(t) {
t[t.SI_BRANDID = 0] = "SI_BRANDID";
t[t.SI_NUMBERID = 1] = "SI_NUMBERID";
t[t.SI_NICKNAME = 2] = "SI_NICKNAME";
t[t.SI_SEX = 3] = "SI_SEX";
t[t.SI_VIPID = 4] = "SI_VIPID";
t[t.SI_BANKRICH = 5] = "SI_BANKRICH";
t[t.SI_RIGHT = 6] = "SI_RIGHT";
t[t.SI_CHARM = 7] = "SI_CHARM";
t[t.SI_CONTRIBUTION = 8] = "SI_CONTRIBUTION";
t[t.SI_YUANBAO = 9] = "SI_YUANBAO";
t[t.SI_FAMILY = 10] = "SI_FAMILY";
t[t.SI_FAMILYDATEPOWER = 11] = "SI_FAMILYDATEPOWER";
t[t.SI_FACEID = 12] = "SI_FACEID";
t[t.SI_PLAYTYPESCORE = 13] = "SI_PLAYTYPESCORE";
t[t.SI_GAMEMONEY = 14] = "SI_GAMEMONEY";
t[t.SI_GAMESCORE = 15] = "SI_GAMESCORE";
t[t.SI_GAMEDOU = 16] = "SI_GAMEDOU";
t[t.SI_GAMEEXP = 17] = "SI_GAMEEXP";
t[t.SI_WIN = 18] = "SI_WIN";
t[t.SI_LOSE = 19] = "SI_LOSE";
t[t.SI_DRAW = 20] = "SI_DRAW";
t[t.SI_ESCAPE = 21] = "SI_ESCAPE";
t[t.SI_STATE = 22] = "SI_STATE";
t[t.SI_SEAT = 23] = "SI_SEAT";
t[t.SI_CLIENTENTERED = 24] = "SI_CLIENTENTERED";
t[t.SI_IP = 25] = "SI_IP";
t[t.SI_IPNAME = 26] = "SI_IPNAME";
t[t.SI_NETSPEED = 27] = "SI_NETSPEED";
t[t.SI_CLIENTTYPE = 28] = "SI_CLIENTTYPE";
t[t.SI_HARDWAREFLAG = 29] = "SI_HARDWAREFLAG";
t[t.SI_ROBOT = 30] = "SI_ROBOT";
t[t.SI_ANONYMITY = 31] = "SI_ANONYMITY";
t[t.SI_MONEYTITLE = 32] = "SI_MONEYTITLE";
t[t.SI_SCORETITLE = 33] = "SI_SCORETITLE";
t[t.SI_EXPTITLE = 34] = "SI_EXPTITLE";
t[t.SI_ROUNDCOUNT = 35] = "SI_ROUNDCOUNT";
t[t.SI_PLAYSTATE = 36] = "SI_PLAYSTATE";
t[t.SI_FRIEND = 37] = "SI_FRIEND";
t[t.SI_FOLLOW = 38] = "SI_FOLLOW";
t[t.SI_WIN_PRO = 39] = "SI_WIN_PRO";
t[t.SI_LOSE_PRO = 40] = "SI_LOSE_PRO";
t[t.SI_DRAW_PRO = 41] = "SI_DRAW_PRO";
t[t.SI_ESCAPE_PRO = 42] = "SI_ESCAPE_PRO";
t[t.SI_SEE_NICKNAME = 43] = "SI_SEE_NICKNAME";
t[t.SI_COUNT = 44] = "SI_COUNT";
t[t.SI_TOTAL = 64] = "SI_TOTAL";
})(t || (t = {}));
return {
ShowItem: t
};
}
static unpack(t) {
const e = {}, i = new n(t);
e.nShowItemCount = i.getInt32();
e.nShowItems = [];
let s = i.getUint8();
for (let t = 0; t < s; t++) e.nShowItems.push(i.getUint8());
e.nShowItemWidth = [];
s = i.getUint8();
for (let t = 0; t < s; t++) e.nShowItemWidth.push(i.getUint8());
return e;
}
}
s.xy_id = _.FWXY_PLAYERITEM;
t.msgPlayerItem = s;
class r extends a {
constructor() {
super(...arguments);
this.nBrandID = 0;
this.nNumberID = 0;
this.szNickname = [];
this.szPTNumberID = "";
this.nSex = 0;
this.nVipID = 0;
this.nBankRich = 0;
this.nRight = 0;
this.nCharm = 0;
this.nContribution = 0;
this.nYuanBao = 0;
this.nFamily = 0;
this.nFamilyDatePower = 0;
this.nFaceID = 0;
this.nPlayTypeScore = 0;
this.nGameMoney = 0;
this.nGameScore = 0;
this.nGameDou = 0;
this.nGameExp = 0;
this.nWin = 0;
this.nLose = 0;
this.nDraw = 0;
this.nEscape = 0;
this.nState = 0;
this.nSeat = 0;
this.isClientEntered = 0;
this.nIP = 0;
this.szIPName = "";
this.nNetSpeed = 0;
this.nClientType = 0;
this.nHardWareFlag = 0;
this.nLeftBreakCount = 0;
this.isRobot = 0;
this.isAnonymity = !1;
}
}
r.xy_id = _.FWXY_PLAYERDATA;
o([ l.uint32() ], r.prototype, "nBrandID", void 0);
o([ l.uint32() ], r.prototype, "nNumberID", void 0);
o([ l.array() ], r.prototype, "szNickname", void 0);
o([ l.string() ], r.prototype, "szPTNumberID", void 0);
o([ l.uint8() ], r.prototype, "nSex", void 0);
o([ l.int32() ], r.prototype, "nVipID", void 0);
o([ l.int64() ], r.prototype, "nBankRich", void 0);
o([ l.int32() ], r.prototype, "nRight", void 0);
o([ l.int32() ], r.prototype, "nCharm", void 0);
o([ l.int32() ], r.prototype, "nContribution", void 0);
o([ l.int32() ], r.prototype, "nYuanBao", void 0);
o([ l.uint32() ], r.prototype, "nFamily", void 0);
o([ l.int16() ], r.prototype, "nFamilyDatePower", void 0);
o([ l.uint32() ], r.prototype, "nFaceID", void 0);
o([ l.int64() ], r.prototype, "nPlayTypeScore", void 0);
o([ l.int64() ], r.prototype, "nGameMoney", void 0);
o([ l.int64() ], r.prototype, "nGameScore", void 0);
o([ l.int64() ], r.prototype, "nGameDou", void 0);
o([ l.int32() ], r.prototype, "nGameExp", void 0);
o([ l.int32() ], r.prototype, "nWin", void 0);
o([ l.int32() ], r.prototype, "nLose", void 0);
o([ l.int32() ], r.prototype, "nDraw", void 0);
o([ l.int32() ], r.prototype, "nEscape", void 0);
o([ l.int16() ], r.prototype, "nState", void 0);
o([ l.int16() ], r.prototype, "nSeat", void 0);
o([ l.int32() ], r.prototype, "isClientEntered", void 0);
o([ l.int32() ], r.prototype, "nIP", void 0);
o([ l.string() ], r.prototype, "szIPName", void 0);
o([ l.int16() ], r.prototype, "nNetSpeed", void 0);
o([ l.int32() ], r.prototype, "nClientType", void 0);
o([ l.int32() ], r.prototype, "nHardWareFlag", void 0);
o([ l.int32() ], r.prototype, "nLeftBreakCount", void 0);
o([ l.int32() ], r.prototype, "isRobot", void 0);
o([ l.bool() ], r.prototype, "isAnonymity", void 0);
t.msgPlayerData = r;
class d extends a {
constructor() {
super(...arguments);
this.nBrandID = 0;
this.nNumberID = 0;
this.nPlayState = 0;
}
get ENUM() {
let t;
(function(t) {
t[t.psNull = 0] = "psNull";
t[t.psWait = 1] = "psWait";
t[t.psReady = 2] = "psReady";
t[t.psPlaying = 3] = "psPlaying";
t[t.psEscape = 4] = "psEscape";
t[t.psCount = 5] = "psCount";
})(t || (t = {}));
return {
tagPlayerState: t
};
}
}
d.xy_id = _.FWXY_PLAYERDATAEX;
o([ l.uint32() ], d.prototype, "nBrandID", void 0);
o([ l.uint32() ], d.prototype, "nNumberID", void 0);
o([ l.uint8() ], d.prototype, "nPlayState", void 0);
t.msgPlayerDataEx = d;
class h extends a {
constructor() {
super(...arguments);
this.nBrandID = 0;
this.nNumberID = 0;
this.IsContinue = 0;
}
}
h.xy_id = _.FWXY_PLAYERENTER;
o([ l.uint32() ], h.prototype, "nBrandID", void 0);
o([ l.uint32() ], h.prototype, "nNumberID", void 0);
o([ l.uint8() ], h.prototype, "IsContinue", void 0);
t.msgPlayerEnter = h;
class c extends a {
constructor() {
super(...arguments);
this.nBrandID = 0;
this.nNumberID = 0;
this.szCause = [];
}
}
c.xy_id = _.FWXY_PLAYERLEAVE;
o([ l.uint32() ], c.prototype, "nBrandID", void 0);
o([ l.uint32() ], c.prototype, "nNumberID", void 0);
o([ l.array() ], c.prototype, "szCause", void 0);
t.msgPlayerLeave = c;
class g extends a {
constructor() {
super(...arguments);
this.nBrandID = 0;
this.nNumberID = 0;
this.nReserved = 0;
}
}
g.xy_id = _.FWXY_PLAYERSTART;
o([ l.uint32() ], g.prototype, "nBrandID", void 0);
o([ l.uint32() ], g.prototype, "nNumberID", void 0);
o([ l.uint32() ], g.prototype, "nReserved", void 0);
t.msgPlayerStart = g;
class u extends a {
constructor() {
super(...arguments);
this.nReserved = 0;
}
}
u.xy_id = _.FWXY_STARTED;
o([ l.uint32() ], u.prototype, "nReserved", void 0);
t.msgStarted = u;
class m extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
this.nType = 0;
this.strInfo = "";
}
get ENUM() {
let t;
(function(t) {
t[t.headurl = 1] = "headurl";
t[t.gps = 2] = "gps";
t[t.chat = 3] = "chat";
t[t.charm = 4] = "charm";
})(t || (t = {}));
return {
TypeEnum: t
};
}
}
m.xy_id = _.FWXY_COMMON_STRING;
o([ l.int16() ], m.prototype, "nSeat", void 0);
o([ l.int32() ], m.prototype, "nType", void 0);
o([ l.string() ], m.prototype, "strInfo", void 0);
t.msgCommonString = m;
})(r || (r = {}));
},
"./bin/logic/protocol/GLProtocol.js": (t, e, i) => {
i.r(e);
i.d(e, {
GL_XYID: () => r,
GLProtocol: () => d
});
var s = i("./bin/config/GameDefine.js"), o = i("./bin/gf.js"), a = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
const n = o.comm.ProtocolBase, l = o.comm.XYReader, _ = o.comm.ProtoDecorator;
var r, d;
(function(t) {
t[t.GLP_BEGIN = 1024] = "GLP_BEGIN";
t[t.GLP_NOTICE = 1025] = "GLP_NOTICE";
t[t.GLP_TIMER = 1026] = "GLP_TIMER";
t[t.GLP_GAME_STATE = 1027] = "GLP_GAME_STATE";
t[t.GLP_END_WAIT = 1028] = "GLP_END_WAIT";
t[t.GLP_RECONNECT = 1029] = "GLP_RECONNECT";
t[t.GLP_PLAYER_LEAVE = 1030] = "GLP_PLAYER_LEAVE";
t[t.GLP_PLAYER_INFO = 1031] = "GLP_PLAYER_INFO";
t[t.GLP_USE_PROP_NEW = 1032] = "GLP_USE_PROP_NEW";
t[t.GLP_NOBILITY_RESULT = 1033] = "GLP_NOBILITY_RESULT";
t[t.GLP_GAME_CONFIG = 1034] = "GLP_GAME_CONFIG";
t[t.GLP_SPEC_CARDS = 1035] = "GLP_SPEC_CARDS";
t[t.GLP_DECK_COUNT = 1036] = "GLP_DECK_COUNT";
t[t.GLP_BASE_INFO = 1037] = "GLP_BASE_INFO";
t[t.GLP_TAKE_FIRST = 1038] = "GLP_TAKE_FIRST";
t[t.GLP_CLONE_CARDS = 1039] = "GLP_CLONE_CARDS";
t[t.GLP_ADD_CARDS = 1040] = "GLP_ADD_CARDS";
t[t.GLP_START_CHOOSE_CARD = 1041] = "GLP_START_CHOOSE_CARD";
t[t.GLP_PLAYER_CHOOSE_CARD = 1042] = "GLP_PLAYER_CHOOSE_CARD";
t[t.GLP_END_CHOOSE_CARD = 1043] = "GLP_END_CHOOSE_CARD";
t[t.GLP_HAND_CARDS = 1044] = "GLP_HAND_CARDS";
t[t.GLP_BOMB_CARDS = 1045] = "GLP_BOMB_CARDS";
t[t.GLP_DO_TOWER_CARD = 1046] = "GLP_DO_TOWER_CARD";
t[t.GLP_TOWER_CARDS = 1047] = "GLP_TOWER_CARDS";
t[t.GLP_OUTED_CARDS = 1048] = "GLP_OUTED_CARDS";
t[t.GLP_PLAY_CARDS = 1049] = "GLP_PLAY_CARDS";
t[t.GLP_ACT_POWER = 1050] = "GLP_ACT_POWER";
t[t.GLP_HU_CARDS = 1051] = "GLP_HU_CARDS";
t[t.GLP_HUED_CARDS = 1052] = "GLP_HUED_CARDS";
t[t.GLP_TING_LIST = 1053] = "GLP_TING_LIST";
t[t.GLP_RECOMMEND_CARDS = 1054] = "GLP_RECOMMEND_CARDS";
t[t.GLP_SKIP_LOW = 1055] = "GLP_SKIP_LOW";
t[t.GLP_TRUST = 1056] = "GLP_TRUST";
t[t.GLP_GIVE_UP = 1057] = "GLP_GIVE_UP";
t[t.GLP_FLOW_LIST = 1058] = "GLP_FLOW_LIST";
t[t.GLP_ROUND_RESULT = 1059] = "GLP_ROUND_RESULT";
t[t.GLP_TOTAL_RESULT = 1060] = "GLP_TOTAL_RESULT";
t[t.GLP_HEAD_PROP = 1061] = "GLP_HEAD_PROP";
t[t.GLP_DO_MING = 1062] = "GLP_DO_MING";
t[t.GLP_DO_PASS = 1063] = "GLP_DO_PASS";
t[t.GLP_GIVE_UP_EX = 1064] = "GLP_GIVE_UP_EX";
t[t.GLP_PLAYER_INFO_EX = 1065] = "GLP_PLAYER_INFO_EX";
t[t.GLP_GET_RECOMMEND = 1066] = "GLP_GET_RECOMMEND";
t[t.GLP_PEAK_PLAY_CARDS = 1067] = "GLP_PEAK_PLAY_CARDS";
t[t.GLP_ACT_POWER_NEW = 1068] = "GLP_ACT_POWER_NEW";
t[t.GLP_GET_TING_LIST = 1069] = "GLP_GET_TING_LIST";
t[t.GLP_GET_RECOMMEND_NEW = 1070] = "GLP_GET_RECOMMEND_NEW";
t[t.GLP_RECOMMEND_CARDS_NEW = 1071] = "GLP_RECOMMEND_CARDS_NEW";
t[t.GLP_LAST_OUTED_CARD = 1072] = "GLP_LAST_OUTED_CARD";
t[t.GLP_GET_TING_LIST_NEW = 1073] = "GLP_GET_TING_LIST_NEW";
t[t.GLP_TING_LIST_NEW = 1074] = "GLP_TING_LIST_NEW";
t[t.GLP_SPEC_CONFIG = 1076] = "GLP_SPEC_CONFIG";
t[t.GLP_VERSION_CHECK = 1077] = "GLP_VERSION_CHECK";
t[t.GLP_BIG_AWARD = 1078] = "GLP_BIG_AWARD";
t[t.GLP_NO_LIMIT_INFO = 1079] = "GLP_NO_LIMIT_INFO";
t[t.GLP_RECHARGE_STATE = 1080] = "GLP_RECHARGE_STATE";
t[t.GLP_PLAYER_PROP_INFO = 1081] = "GLP_PLAYER_PROP_INFO";
t[t.GLP_PLAYER_LEAVE_SPECIAL = 1082] = "GLP_PLAYER_LEAVE_SPECIAL";
t[t.GLP_USE_PROP_SPECIAL = 1083] = "GLP_USE_PROP_SPECIAL";
t[t.GLP_YUN_PROTECT_INFO = 1084] = "GLP_YUN_PROTECT_INFO";
t[t.GLP_SET_DOUBLE_PROP = 1085] = "GLP_SET_DOUBLE_PROP";
t[t.GLP_USE_DOUBLE_PROP_INFO = 1086] = "GLP_USE_DOUBLE_PROP_INFO";
t[t.GLP_PLAYER_EXTRA = 1087] = "GLP_PLAYER_EXTRA";
t[t.GLP_RESULT_EXTRA = 1088] = "GLP_RESULT_EXTRA";
t[t.GLP_AI_INFO = 1089] = "GLP_AI_INFO";
t[t.GLP_GOLD_BUFF_CARD = 1090] = "GLP_GOLD_BUFF_CARD";
t[t.GLP_GOLD_BUFF_SEL = 1091] = "GLP_GOLD_BUFF_SEL";
t[t.GLP_GOLD_BUFF_INFO = 1092] = "GLP_GOLD_BUFF_INFO";
t[t.GLP_GOLD_BUFF_ALL = 1093] = "GLP_GOLD_BUFF_ALL";
t[t.GLP_CARD_RECORD = 1094] = "GLP_CARD_RECORD";
t[t.GLP_TURN_CARD_RECORD = 1095] = "GLP_TURN_CARD_RECORD";
t[t.GLP_CARD_RECORD_STATE = 1096] = "GLP_CARD_RECORD_STATE";
t[t.GLP_STAR_COUNT = 1097] = "GLP_STAR_COUNT";
})(r || (r = {}));
(function(t) {
t.xyid = r;
class e extends n {
constructor() {
super(...arguments);
this._code = 0;
}
}
e.xy_id = r.GLP_NOTICE;
e.eFlag = {
I_SUCCESS: 0,
I_CARDS_ERROR: 1,
I_PLAY_NO_POWER: 2,
I_PLAY_INVALID_CARD: 3,
I_PLAY_NOT_NEW_CARD: 4,
I_PLAY_NOT_STATE: 5,
I_PLAY_ALREADY_DONE: 6,
I_ACT_FAIL: 50,
E_TALLY_START: 90,
E_REMOVE_PKAYER: 96,
E_TALLY_FAIL: 97,
E_SERVER_DOWN: 98,
E_VERSION: 99
};
a([ _.uint32() ], e.prototype, "_code", void 0);
t.msgNotice = e;
class i extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._time = 0;
this._type = 0;
}
}
i.xy_id = r.GLP_TIMER;
a([ _.int32() ], i.prototype, "_seat", void 0);
a([ _.int32() ], i.prototype, "_time", void 0);
a([ _.int32() ], i.prototype, "_type", void 0);
t.msgTimer = i;
class o extends n {
constructor() {
super(...arguments);
this._state = 0;
this._end_wait_index = 0;
}
}
o.xy_id = r.GLP_GAME_STATE;
a([ _.int32() ], o.prototype, "_state", void 0);
a([ _.int32() ], o.prototype, "_end_wait_index", void 0);
t.msgGameState = o;
class d extends n {
constructor() {
super(...arguments);
this._flag = 0;
}
}
d.xy_id = r.GLP_END_WAIT;
a([ _.int32() ], d.prototype, "_flag", void 0);
t.msgEndWait = d;
class h extends n {
constructor() {
super(...arguments);
this._flag = 0;
}
}
h.xy_id = r.GLP_RECONNECT;
h.eFlag = {
FLAG_END: 0,
FLAG_START: 1,
FLAG_START_WITH_PEAK: 2
};
a([ _.uint32() ], h.prototype, "_flag", void 0);
t.msgReconnect = h;
class c extends n {}
c.xy_id = r.GLP_PLAYER_LEAVE;
a([ _.uint32() ], c.prototype, "_seat", void 0);
t.msgPlayerLeave = c;
class g extends n {
constructor() {
super(...arguments);
this._sr = 0;
this._uid = 0;
this._area_id = 0;
this._nid = 0;
this._seat = 0;
this._charm = 0;
this._jzz_cnt = 0;
this._name = "";
this._win_cnt = 0;
this._lose_cnt = 0;
this._equal_cnt = 0;
this._escape_cnt = 0;
this._vip = 0;
this._vip_flag = 0;
this._ex_flag = 0;
this._leave_flag = 0;
}
static unpack(t) {
const e = new g(), i = new l(t);
e._sr = i.getInt64();
e._uid = i.getInt64();
e._area_id = i.getInt32();
e._nid = i.getInt32();
e._seat = i.getInt32();
e._charm = i.getInt32();
e._jzz_cnt = i.getInt32();
e._name = i.getString("utf8");
e._win_cnt = i.getUint32();
e._lose_cnt = i.getUint32();
e._equal_cnt = i.getUint32();
e._escape_cnt = i.getUint32();
e._vip = i.getInt32();
e._vip_flag = i.getInt32();
e._ex_flag = i.getInt32();
e._leave_flag = i.getInt8();
return e;
}
}
g.xy_id = r.GLP_PLAYER_INFO;
a([ _.int64() ], g.prototype, "_sr", void 0);
a([ _.int64() ], g.prototype, "_uid", void 0);
a([ _.int32() ], g.prototype, "_area_id", void 0);
a([ _.int32() ], g.prototype, "_nid", void 0);
a([ _.int32() ], g.prototype, "_seat", void 0);
a([ _.int32() ], g.prototype, "_charm", void 0);
a([ _.int32() ], g.prototype, "_jzz_cnt", void 0);
a([ _.string() ], g.prototype, "_name", void 0);
a([ _.uint32() ], g.prototype, "_win_cnt", void 0);
a([ _.uint32() ], g.prototype, "_lose_cnt", void 0);
a([ _.uint32() ], g.prototype, "_equal_cnt", void 0);
a([ _.uint32() ], g.prototype, "_escape_cnt", void 0);
a([ _.int32() ], g.prototype, "_vip", void 0);
a([ _.int32() ], g.prototype, "_vip_flag", void 0);
a([ _.int32() ], g.prototype, "_ex_flag", void 0);
a([ _.int8() ], g.prototype, "_leave_flag", void 0);
t.msgPlayerInfo = g;
class u extends n {
constructor() {
super(...arguments);
this._flag = 0;
this._prop_id = 0;
this._prop_cnt = 0;
this._from_seat = 0;
this._to_seat = 0;
}
}
u.xy_id = r.GLP_USE_PROP_NEW;
u.ResultType = {
kSuccess: 0,
kTimeLimt: 1,
kSeatError: 2,
kPropError: 3,
kError: 4
};
a([ _.int32() ], u.prototype, "_flag", void 0);
a([ _.int32() ], u.prototype, "_prop_id", void 0);
a([ _.int32() ], u.prototype, "_prop_cnt", void 0);
a([ _.int32() ], u.prototype, "_from_seat", void 0);
a([ _.int32() ], u.prototype, "_to_seat", void 0);
t.msgUsePropNew = u;
class m extends n {
constructor() {
super(...arguments);
this._flag = [];
this._mult = [];
this._winlost = [];
this._dp_left_cnt = 0;
this._np_start_time = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._flag = [];
e._mult = [];
e._winlost = [];
for (let t = 0; t < 4; t++) {
e._flag[t] = i.getInt32();
e._mult[t] = i.getInt32();
e._winlost[t] = i.getInt64();
}
e._dp_left_cnt = i.getInt32();
e._np_start_time = i.getInt64();
return e;
}
}
m.xy_id = r.GLP_NOBILITY_RESULT;
t.msgNobilityResult = m;
class C extends n {
constructor() {
super(...arguments);
this._room_lv = 0;
this._gold_mult = 0;
this._ming_mult = 0;
this._bomb_mult = 0;
this._tower_mult = 0;
this._one_tower_mult = 0;
this._same_color_mult = 0;
this._same_suit_mult = 0;
this._bao_mult = 0;
this._first_hu_mult = 0;
this._mult_count = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._room_lv = i.getInt32();
e._gold_mult = i.getInt32();
e._ming_mult = i.getInt32();
e._bomb_mult = i.getInt32();
e._tower_mult = i.getInt32();
e._one_tower_mult = i.getInt32();
e._same_color_mult = i.getInt32();
e._same_suit_mult = i.getInt32();
e._bao_mult = i.getInt32();
e._first_hu_mult = i.getInt32();
e._mult_count = i.getInt32();
e._mult_card_type = [];
e._mult_value = [];
for (let t = 0; t < e._mult_count; t++) {
const s = i.getInt32(), o = i.getInt32();
e._mult_card_type[t] = s;
e._mult_value[t] = o;
}
return e;
}
}
C.xy_id = r.GLP_GAME_CONFIG;
t.msgGameConfig = C;
class p extends n {
constructor() {
super(...arguments);
this._count = 0;
this._cards = [];
}
pack() {
const t = new l();
t.setInt32(this._count);
for (let e = 0; e < this._count; e++) t.setInt8(this._cards[e]);
return t.getUint8Array();
}
static unpack(t) {
const e = {}, i = new l(t);
e._count = i.getInt32();
e._cards = [];
for (let t = 0; t < e._count; t++) e._cards[t] = i.getInt8();
return e;
}
}
p.xy_id = r.GLP_SPEC_CARDS;
t.msgSpecCards = p;
class f extends n {
constructor() {
super(...arguments);
this._count = 0;
this._gold_left_count = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._count = i.getInt32();
e._gold_left_count = i.getInt32();
return e;
}
}
f.xy_id = r.GLP_DECK_COUNT;
t.msgDeckCount = f;
class A extends n {
constructor() {
super(...arguments);
this._banker_seat = 0;
this._base_score = 0;
this._charge = 0;
this._win_limit = 0;
this._win_mult = 0;
this._win_take_mult = 0;
this._is_star_combo_on = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._banker_seat = i.getInt32();
e._base_score = i.getInt32();
e._charge = i.getInt64();
e._win_limit = i.getInt64();
e._win_mult = i.getInt64();
e._win_take_mult = i.getInt32();
e._is_star_combo_on = i.getInt8();
return e;
}
}
A.xy_id = r.GLP_BASE_INFO;
t.msgBaseInfo = A;
class S extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._cards = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._cards = [];
for (let t = 0; t < s.HAND_CARD_COUNT; t++) e._cards[t] = i.getInt8();
return e;
}
}
S.xy_id = r.GLP_TAKE_FIRST;
t.msgTakeFirst = S;
class I extends n {
constructor() {
super(...arguments);
this._old_card_values = [];
this._new_card_values = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._old_card_values = [];
e._new_card_values = [];
for (let t = 0; t < s.CLONE_CARD_VALUE_COUNT; t++) e._old_card_values[t] = i.getInt8();
for (let t = 0; t < s.CLONE_CARD_VALUE_COUNT; t++) e._new_card_values[t] = i.getInt8();
return e;
}
}
I.xy_id = r.GLP_CLONE_CARDS;
t.msgCloneCards = I;
class E extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._count = 0;
this._cards = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._count = i.getInt32();
e._cards = [];
for (let t = 0; t < e._count; t++) e._cards[t] = i.getInt8();
return e;
}
}
E.xy_id = r.GLP_ADD_CARDS;
t.msgAddCards = E;
class L extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._count = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._count = i.getInt32();
return e;
}
}
L.xy_id = r.GLP_START_CHOOSE_CARD;
t.msgStartChooseCard = L;
class T extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._index = 0;
}
pack() {
const t = new l();
t.setInt32(this._seat);
t.setInt32(this._index);
return t.getUint8Array();
}
}
T.xy_id = r.GLP_PLAYER_CHOOSE_CARD;
t.msgPlayerChooseCard = T;
class D extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._index = 0;
this._cards = [];
this._gold_buff = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._index = i.getInt32();
e._cards = [];
for (let t = 0; t < s.CHOOSE_CARD_COUNT; t++) e._cards[t] = i.getInt8();
e._gold_buff = i.getInt32();
return e;
}
}
D.xy_id = r.GLP_END_CHOOSE_CARD;
t.msgEndChooseCard = D;
class w extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._flag = 0;
this._count = 0;
this._hand_cards = [];
this._new_count = 0;
this._new_cards = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._flag = i.getInt32();
e._count = i.getInt32();
e._new_count = i.getInt32();
e._hand_cards = [];
e._new_cards = [];
for (let t = 0; t < e._count; t++) e._hand_cards[t] = i.getInt8();
for (let t = 0; t < e._new_count; t++) e._new_cards[t] = i.getInt8();
return e;
}
}
w.xy_id = r.GLP_HAND_CARDS;
w.eFlag = {
FLAG_RELINK: 0,
FLAG_MING: 1,
FLAG_HAND: 2
};
t.msgHandCards = w;
class P extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._from_seat = 0;
this._cards = [];
}
pack() {
const t = new l();
t.setInt32(this._seat);
t.setInt32(this._from_seat);
for (let e = 0; e < s.BOMB_CARD_COUNT; e++) t.setInt8(this._cards[e]);
return t.getUint8Array();
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._from_seat = i.getInt32();
e._cards = [];
for (let t = 0; t < s.BOMB_CARD_COUNT; t++) e._cards[t] = i.getInt8();
return e;
}
}
P.xy_id = r.GLP_BOMB_CARDS;
t.msgBombCards = P;
class G extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._from_seat = 0;
this._cards = 0;
this._flag = 0;
}
pack() {
const t = new l();
t.setInt32(this._seat);
t.setInt32(this._from_seat);
t.setInt8(this._cards);
t.setInt32(this._flag);
return t.getUint8Array();
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._from_seat = i.getInt32();
e._cards = i.getInt8();
e._flag = i.getInt32();
return e;
}
}
G.xy_id = r.GLP_DO_TOWER_CARD;
t.msgDoTowerCard = G;
class b extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._mult = 0;
this._one_tower_mult = 0;
this._flag = 0;
this._bomb_count = 0;
this._bomb_cards = [];
this._tower_count = 0;
this._tower_cards = [];
this._is_no_limit = 0;
this._no_limit_mult = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._mult = i.getInt64();
e._one_tower_mult = i.getInt64();
e._flag = i.getInt32();
e._bomb_count = i.getInt32();
e._tower_count = i.getInt32();
e._bomb_cards = [];
e._tower_cards = [];
for (let t = 0; t < e._bomb_count; t++) e._bomb_cards[t] = i.getInt8();
for (let t = 0; t < e._tower_count; t++) e._tower_cards[t] = i.getInt8();
e._is_no_limit = i.getInt8();
e._no_limit_mult = i.getInt32();
return e;
}
}
b.eFlag = {
FLAG_RELINK: 0,
FLAG_MING: 1,
FLAG_BOMB: 2,
FLAG_TOWER: 3
};
b.xy_id = r.GLP_TOWER_CARDS;
t.msgTowerCards = b;
class v extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._count = 0;
this._cards = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._count = i.getInt32();
e._cards = [];
for (let t = 0; t < e._count; t++) e._cards[t] = i.getInt8();
return e;
}
}
v.xy_id = r.GLP_OUTED_CARDS;
t.msgOutedCards = v;
class y extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._cards = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._cards = i.getInt8();
e._flag = i.getInt32();
return e;
}
pack() {
const t = new l();
t.setInt32(this._seat);
t.setInt8(this._cards);
t.setInt32(this._flag);
return t.getUint8Array();
}
}
y.xy_id = r.GLP_PLAY_CARDS;
t.msgPlayCards = y;
class M extends n {
constructor() {
super(...arguments);
this._bomb_card_value = [];
this._tower_card_value = 0;
this._zimo_card_value = 0;
this._hu_card_value = 0;
this._ming = 0;
this._play = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._bomb_card_value = [];
for (let t = 0; t < s.MAX_BOMB_CARD_VALUE_COUNT; t++) e._bomb_card_value[t] = i.getInt32();
e._tower_card_value = i.getInt32();
e._zimo_card_value = i.getInt32();
e._hu_card_value = i.getInt32();
e._ming = i.getInt32();
e._play = i.getInt32();
return e;
}
}
M.eFlag = {
FLAG_NONE: 0,
FLAG_CAN_ACT: 1,
FLAG_CAN_PASS: 2
};
M.xy_id = r.GLP_ACT_POWER;
t.msgActPower = M;
class R extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._from_seat = 0;
this._cards = 0;
this._combo = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._from_seat = i.getInt32();
e._cards = i.getInt8();
e._combo = i.getInt8();
return e;
}
pack() {
const t = new l();
t.setInt32(this._seat);
t.setInt32(this._from_seat);
t.setInt8(this._cards);
t.setInt8(this._combo);
return t.getUint8Array();
}
}
R.xy_id = r.GLP_HU_CARDS;
t.msgHuCards = R;
class B extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._count = 0;
this._cards = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._count = i.getInt32();
e._cards = [];
for (let t = 0; t < e._count; t++) e._cards[t] = i.getInt8();
return e;
}
}
B.xy_id = r.GLP_HUED_CARDS;
t.msgHuedCards = B;
class W extends n {
constructor() {
super(...arguments);
this._ct = 0;
this._mult = 0;
this._hand_count = 0;
this._hand_cards = [];
this._left_count = 0;
this._left_cards = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._ct = i.getInt32();
e._mult = i.getInt64();
e._hand_count = i.getInt32();
e._left_count = i.getInt32();
e._hand_cards = [];
e._left_cards = [];
for (let t = 0; t < e._hand_count; t++) e._hand_cards[t] = i.getInt32();
for (let t = 0; t < e._left_count; t++) e._left_cards[t] = i.getInt32();
return e;
}
}
W.xy_id = r.GLP_RECOMMEND_CARDS;
t.msgRecommendCards = W;
class O extends n {
constructor() {
super(...arguments);
this._flag = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._flag = i.getInt32();
return e;
}
pack() {
const t = new l();
t.setInt32(this._flag);
return t.getUint8Array();
}
}
O.xy_id = r.GLP_SKIP_LOW;
O.eFlag = {
FLAG_NONE: -1,
FLAG_OFF: 0,
FLAG_ON: 1,
FLAG_HIDE: 2,
FLAG_SHOW_OFF: 3,
FLAG_SHOW_ON: 4
};
t.msgSkipLow = O;
class N extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._flag = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._flag = i.getInt32();
return e;
}
pack() {
const t = new l();
t.setInt32(this._seat);
t.setInt32(this._flag);
return t.getUint8Array();
}
}
N.xy_id = r.GLP_TRUST;
N.eFlag = {
FLAG_OFF: 0,
FLAG_ON: 1
};
t.msgTrust = N;
class K extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._flag = 0;
this._jzz_cnt = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._flag = i.getInt32();
e._jzz_cnt = i.getInt32();
return e;
}
pack() {
const t = new l();
t.setInt32(this._seat);
t.setInt32(this._flag);
t.setInt32(this._jzz_cnt);
return t.getUint8Array();
}
}
K.xy_id = r.GLP_GIVE_UP;
K.eFlag = {
FLAG_GIVE_UP: 0,
FLAG_GO_ON: 1,
FLAG_RECHARGE: 2
};
t.msgGiveUp = K;
class U extends n {
constructor() {
super(...arguments);
this._flag = 0;
this._count = 0;
this._ct = [];
this._mult = [];
this._hu_type = [];
this._from_seat = [];
this._ex_flag = [];
this._score = [];
this._gold_mult = [];
this._bao_mult = [];
this._tower_mult = [];
this._same_mult = [];
this._ming_mult = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._flag = i.getInt32();
e._count = i.getInt32();
e._ct = [];
e._mult = [];
e._hu_type = [];
e._from_seat = [];
e._ex_flag = [];
e._score = [];
e._gold_mult = [];
e._bao_mult = [];
e._tower_mult = [];
e._same_mult = [];
e._ming_mult = [];
for (let t = 0; t < e._count; t++) {
e._ct[t] = i.getInt32();
e._mult[t] = i.getInt64();
e._hu_type[t] = i.getInt32();
e._from_seat[t] = i.getInt32();
e._ex_flag[t] = i.getInt32();
e._score[t] = i.getInt64();
e._gold_mult[t] = i.getInt32();
e._bao_mult[t] = i.getInt32();
e._tower_mult[t] = i.getInt64();
e._same_mult[t] = i.getInt32();
e._ming_mult[t] = i.getInt32();
}
return e;
}
}
U.xy_id = r.GLP_FLOW_LIST;
U.eFlag1 = {
HT_ZIMO: 0,
HT_HU: 1,
HT_BE_ZIMO: 2,
HT_BE_HU: 3
};
U.eFlag2 = {
FLAG_ADD: 0,
FLAG_FULL: 1
};
t.msgFlowList = U;
class x extends n {
constructor() {
super(...arguments);
this._broken_time = 0;
this._count = 0;
this._ct = [];
this._mult = [];
this._score = [];
this._ex_flag = [];
this._dhq_cnt = [];
this._hu_card = [];
this._self_hu = [];
this._star_combo_index = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._broken_time = i.getInt32();
e._count = i.getInt32();
e._ct = [];
e._mult = [];
e._score = [];
e._ex_flag = [];
e._dhq_cnt = [];
e._hu_card = [];
e._self_hu = [];
e._star_combo_index = [];
for (let t = 0; t < e._count; t++) {
e._ct[t] = [];
e._mult[t] = [];
e._score[t] = [];
e._ex_flag[t] = [];
e._dhq_cnt[t] = [];
e._hu_card[t] = [];
e._self_hu[t] = [];
e._star_combo_index[t] = [];
for (let o = 0; o < s.MAX_PLAYER_COUNT; o++) e._ct[t][o] = i.getInt32();
for (let o = 0; o < s.MAX_PLAYER_COUNT; o++) e._mult[t][o] = i.getInt64();
for (let o = 0; o < s.MAX_PLAYER_COUNT; o++) e._score[t][o] = i.getInt64();
for (let o = 0; o < s.MAX_PLAYER_COUNT; o++) e._ex_flag[t][o] = i.getInt32();
for (let o = 0; o < s.MAX_PLAYER_COUNT; o++) e._dhq_cnt[t][o] = i.getInt32();
for (let o = 0; o < s.MAX_PLAYER_COUNT; o++) e._hu_card[t][o] = i.getInt8();
for (let o = 0; o < s.MAX_PLAYER_COUNT; o++) e._self_hu[t][o] = i.getInt8();
for (let o = 0; o < s.MAX_PLAYER_COUNT; o++) e._star_combo_index[t][o] = i.getInt8();
}
return e;
}
}
x.xy_id = r.GLP_ROUND_RESULT;
x.eFlag = {
FLAG_NONE: 0,
FLAG_SELF_HU: 1,
FLAG_BE_HU: 2,
FLAG_SELF_ZIMO: 3,
FLAG_BE_ZIMO: 4
};
t.msgRoundResult = x;
class F extends n {
constructor() {
super(...arguments);
this._score = [];
this._jzz_ex_score = [];
this._total_win_dhq_cnt = [];
this._hand_cards = [];
this._ct = [];
this._hu_car = [];
this._hu_car_list = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._score = [];
e._jzz_ex_score = [];
e._total_win_dhq_cnt = [];
e._ct = [];
e._hand_cards = [];
e._hu_car = [];
e._hu_car_list = [];
for (let t = 0; t < s.HAND_CARD_COUNT; t++) e._hand_cards[t] = i.getInt8();
e._new_card = i.getInt8();
e._count = i.getInt32();
for (let t = 0; t < s.MAX_PLAYER_COUNT; t++) {
e._score[t] = i.getInt64();
e._jzz_ex_score[t] = i.getInt64();
e._total_win_dhq_cnt[t] = i.getInt32();
}
for (let t = 0; t < e._count; t++) {
e._ct[t] = i.getInt32();
e._hu_car[t] = i.getInt8();
}
for (let t = 0; t < e._count; t++) e._hu_car_list[t] = [ ...e._hand_cards, e._hu_car[t] ];
return e;
}
}
F.xy_id = r.GLP_TOTAL_RESULT;
t.msgTotalResult = F;
class k extends n {
constructor() {
super(...arguments);
this.seat = 0;
this.prop_id = 0;
}
}
k.xy_id = r.GLP_HEAD_PROP;
a([ _.int32() ], k.prototype, "seat", void 0);
a([ _.int32() ], k.prototype, "prop_id", void 0);
t.msgHeadProp = k;
class H extends n {
constructor() {
super(...arguments);
this._flag = 0;
}
}
H.xy_id = r.GLP_DO_MING;
a([ _.int32() ], H.prototype, "_flag", void 0);
t.msgDoMing = H;
class V extends n {
constructor() {
super(...arguments);
this._flag = 0;
}
}
V.xy_id = r.GLP_DO_PASS;
a([ _.int32() ], V.prototype, "_flag", void 0);
t.msgDoPass = V;
class Y extends n {
constructor() {
super(...arguments);
this._flag = 0;
}
}
Y.xy_id = r.GLP_GET_RECOMMEND;
a([ _.int32() ], Y.prototype, "_flag", void 0);
t.msgGetRecommend = Y;
class j extends n {
constructor() {
super(...arguments);
this._count = 0;
this._seat = 0;
this._cards = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._count = i.getInt32();
e._seat = i.getInt32();
e._cards = [];
for (let t = 0; t < e._count; t++) e._cards[t] = i.getInt8();
return e;
}
}
j.xy_id = r.GLP_PEAK_PLAY_CARDS;
t.msgPeakPlayCards = j;
class J extends n {
constructor() {
super(...arguments);
this._bomb_card_value = [];
this._zimo_card_mult = [];
this._zimo_card = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._bomb_card_value = [];
e._zimo_card_mult = [];
e._zimo_card = [];
for (let t = 0; t < s.MAX_BOMB_CARD_VALUE_COUNT; t++) e._bomb_card_value[t] = i.getInt32();
e._tower_card_value = i.getInt32();
e._ming = i.getInt32();
e._play = i.getInt32();
e._hu_card = i.getInt8();
e._hu_card_mult = i.getInt64();
e._zimo_card_count = i.getInt32();
for (let t = 0; t < e._zimo_card_count; t++) {
e._zimo_card_mult[t] = i.getInt64();
e._zimo_card[t] = i.getInt8();
}
e._bomb_card_other = i.getInt8();
e._star_card = i.getInt8();
e._combo = i.getInt8();
return e;
}
}
J.eFlag = {
FLAG_NONE: 0,
FLAG_CAN_ACT: 1,
FLAG_CAN_PASS: 2
};
J.xy_id = r.GLP_ACT_POWER_NEW;
t.msgActPowerNew = J;
class X extends n {
constructor() {
super(...arguments);
this._flag = 1;
}
}
X.xy_id = r.GLP_GET_RECOMMEND_NEW;
a([ _.int32() ], X.prototype, "_flag", void 0);
t.msgGetRecommendNew = X;
class $ extends n {
constructor() {
super(...arguments);
this._ct = [];
this._mult = [];
this._left_tower_count = [];
this._cards = [];
}
static unpack(t) {
const e = new $(), i = new l(t);
for (let t = 0; t < 2; t++) e._ct[t] = i.getInt32();
for (let t = 0; t < 2; t++) e._mult[t] = i.getInt64();
for (let t = 0; t < 2; t++) e._left_tower_count[t] = i.getInt32();
for (let t = 0; t < 2; t++) {
e._cards[t] = [];
for (let o = 0; o <= s.HAND_CARD_COUNT; o++) e._cards[t][o] = i.getUint8();
}
return e;
}
}
$.xy_id = r.GLP_RECOMMEND_CARDS_NEW;
t.msgRecommendCardsNew = $;
class q extends n {
constructor() {
super(...arguments);
this._last_out_seat = 0;
this._count = 0;
this._cards = [];
}
static unpack(t) {
const e = new q(), i = new l(t);
e._last_out_seat = i.getInt32();
e._count = i.getInt32();
e._cards = [];
for (let t = 0; t < e._count; t++) e._cards[t] = i.getInt8();
return e;
}
}
q.xy_id = r.GLP_LAST_OUTED_CARD;
t.msgLastOutedCard = q;
class Z extends n {
constructor() {
super(...arguments);
this._flag = 1;
}
}
Z.xy_id = r.GLP_GET_TING_LIST_NEW;
a([ _.int32() ], Z.prototype, "_flag", void 0);
t.msgGetTingNew = Z;
class z extends n {
constructor() {
super(...arguments);
this._total_count = 0;
this._index = 0;
this._out_card = 0;
this._count = 0;
this._ct = [];
this._mult = [];
this._hu_cards = [];
this._hu_card_left_count = [];
this._gold_mult = [];
this._bao_mult = [];
this._tower_mult = [];
this._ming_mult = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._total_count = i.getInt32();
e._index = i.getInt32();
e._out_card = i.getInt32();
e._count = i.getInt32();
e._ct = [];
e._mult = [];
e._hu_cards = [];
e._hu_card_left_count = [];
e._gold_mult = [];
e._bao_mult = [];
e._tower_mult = [];
e._ming_mult = [];
for (let t = 0; t < e._count; t++) {
e._ct[t] = i.getInt32();
e._mult[t] = i.getInt64();
e._hu_cards[t] = i.getInt8();
e._hu_card_left_count[t] = i.getInt32();
e._gold_mult[t] = i.getInt32();
e._bao_mult[t] = i.getInt32();
e._tower_mult[t] = i.getInt64();
e._ming_mult[t] = i.getInt32();
}
return e;
}
}
z.xy_id = r.GLP_TING_LIST_NEW;
t.msgTingListNew = z;
class Q extends n {
constructor() {
super(...arguments);
this._flag = 0;
}
}
Q.xy_id = r.GLP_SPEC_CONFIG;
a([ _.int8() ], Q.prototype, "_flag", void 0);
t.msgSpecConfig = Q;
class tt extends n {
constructor() {
super(...arguments);
this._ver_code = 0;
}
}
tt.xy_id = r.GLP_VERSION_CHECK;
a([ _.int32() ], tt.prototype, "_ver_code", void 0);
t.msgVersionChcek = tt;
class et extends n {
constructor() {
super(...arguments);
this._results = [];
this._awards = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._results = [];
e._awards = [];
e._award_val = i.getInt64();
for (let t = 0; t < s.BIG_AWARD_TURN_COUNT; t++) e._results[t] = i.getInt8();
for (let t = 0; t < s.BIG_AWARD_COUNT; t++) e._awards[t] = i.getInt64();
return e;
}
}
et.xy_id = r.GLP_BIG_AWARD;
t.msgBigAward = et;
class it extends n {
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._no_limit_mult = i.getInt32();
e._no_limit_can_win = i.getInt64();
return e;
}
}
it.xy_id = r.GLP_NO_LIMIT_INFO;
t.msgNoLimitInfo = it;
class st extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._flag = 0;
}
}
st.eFlag = {
FLAG_NONE: 0,
FLAG_START: 1,
FLAG_END: 2
};
st.xy_id = r.GLP_RECHARGE_STATE;
a([ _.int32() ], st.prototype, "_seat", void 0);
a([ _.int32() ], st.prototype, "_flag", void 0);
t.msgRechargeState = st;
class ot extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._count = 0;
this._prop_id = [];
this._prop_cnt = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._count = i.getInt32();
e._prop_id = [];
e._prop_cnt = [];
for (let t = 0; t < e._count; t++) {
e._prop_id[t] = i.getInt32();
e._prop_cnt[t] = i.getInt64();
}
return e;
}
}
ot.xy_id = r.GLP_PLAYER_PROP_INFO;
t.msgPlayerPropInfo = ot;
class at extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._flag = 0;
this._reconnect = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._flag = i.getInt32();
e._reconnect = i.getInt32();
return e;
}
}
at.xy_id = r.GLP_PLAYER_LEAVE_SPECIAL;
at.eFlag = {
PLAYER_LEAVE_PROTECTED: 0
};
t.msgPlayerLeaveSpecil = at;
class nt extends n {
constructor() {
super(...arguments);
this._flag = 0;
this._seat = 0;
this._prop_id = 0;
this._prop_cnt = 0;
}
pack() {
const t = new l();
t.setInt32(this._flag);
t.setInt32(this._seat);
t.setInt32(this._prop_id);
t.setInt32(this._prop_cnt);
return t.getUint8Array();
}
static unpack(t) {
const e = {}, i = new l(t);
e._flag = i.getInt32();
e._seat = i.getInt32();
e._prop_id = i.getInt32();
e._prop_cnt = i.getInt32();
return e;
}
}
nt.xy_id = r.GLP_USE_PROP_SPECIAL;
nt.eFlag = {
FLAG_SUCC: 0,
FLAG_TIME_LIMIT: 1,
FLAG_PROP_ERROR: 2,
FLAG_ERR_SEAT: 3,
FLAG_ERROR: 4
};
t.msgUsePropSpecil = nt;
class lt extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._flag = 0;
this._open = 0;
this._enter_sr = 0;
this._old_sr = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._flag = i.getInt32();
e._open = i.getInt32();
e._enter_sr = i.getInt64();
e._old_sr = i.getInt64();
return e;
}
}
lt.xy_id = r.GLP_YUN_PROTECT_INFO;
lt.eFlag = {
EF_INIT: 0,
EF_PROP: 1,
EF_UPDATE: 2,
EF_REUSLT: 3
};
t.msgYunProtectInfo = lt;
class _t extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._flag = 0;
this._open = 0;
this._status = 0;
}
pack() {
const t = new l();
t.setInt32(this._seat);
t.setInt32(this._flag);
t.setInt32(this._open);
t.setInt32(this._status);
t.setInt32(this._color_lvl);
return t.getUint8Array();
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._flag = i.getInt32();
e._open = i.getInt32();
e._status = i.getInt32();
e._color_lvl = i.getInt32();
return e;
}
}
_t.xy_id = r.GLP_SET_DOUBLE_PROP;
_t.eFlag = {
EF_NONE: 0,
EF_INIT: 1,
EF_PROP: 2
};
_t.eStatus = {
ES_NONE: 0,
ES_OPEN: 1
};
t.msgSetDoubleProp = _t;
class rt extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._status = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._status = i.getInt32();
return e;
}
}
rt.xy_id = r.GLP_USE_DOUBLE_PROP_INFO;
rt.eFlag = {
ES_NONE: 0,
ES_OPEN: 1
};
t.msgUseDoublePropInfo = rt;
class dt extends n {
constructor() {
super(...arguments);
this._seat = -1;
this._title_type = 0;
this._title_rank = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._title_type = i.getInt32();
e._title_rank = i.getInt32();
return e;
}
}
dt.xy_id = r.GLP_PLAYER_EXTRA;
t.msgPlayerExtra = dt;
class ht extends n {
constructor() {
super(...arguments);
this._flag = 0;
this._seat = 0;
this._title_ret = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._flag = i.getInt32();
e._seat = i.getInt32();
e._title_ret = i.getInt64();
return e;
}
}
ht.xy_id = r.GLP_RESULT_EXTRA;
ht.eFlag = {
EF_NONE: 0,
EF_BANKRUPT: 1,
EF_RESULT: 2
};
t.msgReusltExtra = ht;
class ct extends n {
static unpack(t) {
const e = {}, i = new l(t);
e._left_counts = [];
for (let t = 0; t < s.MAX_CARD_ID_COUNT; t++) e._left_counts[t] = i.getInt8();
return e;
}
}
ct.xy_id = r.GLP_CARD_RECORD;
t.msgCardRecord = ct;
class gt extends n {
constructor() {
super(...arguments);
this._flag = 0;
}
pack() {
const t = new l();
t.setInt32(this._flag);
return t.getUint8Array();
}
static unpack(t) {
const e = {}, i = new l(t);
e._flag = i.getInt32();
return e;
}
}
gt.xy_id = r.GLP_TURN_CARD_RECORD;
gt.eFlag = {
FLAG_NONE: 0,
FLAG_ON: 1,
FLAG_OFF: 2
};
t.msgTurnCardRecord = gt;
class ut extends n {
constructor() {
super(...arguments);
this._flag = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._flag = i.getInt32();
return e;
}
}
ut.xy_id = r.GLP_CARD_RECORD_STATE;
ut.eFlag = {
FLAG_RELINK_WITH_NONE: 0,
FLAG_RELINK_WITH_COUNT: 1,
FLAG_RELINK_WITH_TIME: 2
};
t.msgCardRecordState = ut;
class mt extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._gold_buff_cnt = 0;
this._card = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._gold_buff_cnt = i.getInt32();
e._card = i.getInt8();
return e;
}
}
mt.xy_id = r.GLP_GOLD_BUFF_CARD;
a([ _.int32() ], mt.prototype, "_seat", void 0);
a([ _.int32() ], mt.prototype, "_gold_buff_cnt", void 0);
a([ _.int8() ], mt.prototype, "_card", void 0);
t.msgGoldBuffCard = mt;
class Ct extends n {
constructor() {
super(...arguments);
this._flag = 0;
this._seat = 0;
this._index = 0;
}
static unpack(t) {
const e = {}, i = new l(t);
e._flag = i.getInt32();
e._seat = i.getInt32();
e._index = i.getInt32();
return e;
}
}
Ct.xy_id = r.GLP_GOLD_BUFF_SEL;
Ct.eFlag = {
FLAG_NONE: 0,
FLAG_SEL: 1,
FLAG_END: 2
};
a([ _.int32() ], Ct.prototype, "_flag", void 0);
a([ _.int32() ], Ct.prototype, "_seat", void 0);
a([ _.int32() ], Ct.prototype, "_index", void 0);
t.msgGoldBuffSel = Ct;
class pt extends n {
constructor() {
super(...arguments);
this._seat = 0;
this._gold_buff_cnt = 0;
this._index = 0;
this._buff_id = 0;
this._buff = "";
this._buffParse = [];
}
static unpack(t) {
const e = {}, i = new l(t);
e._seat = i.getInt32();
e._gold_buff_cnt = i.getInt32();
e._index = i.getInt32();
e._buff_id = i.getInt32();
e._buff = i.getString("utf8");
return e;
}
}
pt.xy_id = r.GLP_GOLD_BUFF_INFO;
a([ _.int32() ], pt.prototype, "_seat", void 0);
a([ _.int32() ], pt.prototype, "_gold_buff_cnt", void 0);
a([ _.int32() ], pt.prototype, "_index", void 0);
a([ _.int32() ], pt.prototype, "_buff_id", void 0);
a([ _.string() ], pt.prototype, "_buff", void 0);
a([ _.int32() ], pt.prototype, "_buffParse", void 0);
t.msgGoldBuffInfo = pt;
class ft extends n {
constructor() {
super(...arguments);
this._count = 0;
this._buff = "";
}
static unpack(t) {
const e = {}, i = new l(t);
e._count = i.getInt32();
e._buff = i.getString("utf8");
return e;
}
}
ft.xy_id = r.GLP_GOLD_BUFF_ALL;
a([ _.int32() ], ft.prototype, "_count", void 0);
a([ _.string() ], ft.prototype, "_buff", void 0);
t.msgGoldBuffAll = ft;
class At extends n {
static unpack(t) {
const e = {}, i = new l(t);
e._star_count = i.getInt8();
e._seat = i.getInt32();
return e;
}
}
At.xy_id = r.GLP_STAR_COUNT;
t.msgStarCount = At;
})(d || (d = {}));
},
"./bin/logic/protocol/LCLProtocol.js": (t, e, i) => {
i.r(e);
i.d(e, {
CL_XYID: () => _,
LCLProtocol: () => r
});
var s = i("./bin/gf.js"), o = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
const a = s.comm.ProtocolBase, n = s.comm.XYReader, l = s.comm.ProtoDecorator;
var _, r;
(function(t) {
t[t.CLXY_FIRST = 1024] = "CLXY_FIRST";
t[t.CLXY_ALL_CARD = 1025] = "CLXY_ALL_CARD";
t[t.CLXY_ALL_BACK = 1026] = "CLXY_ALL_BACK";
t[t.CLXY_BASE_CARD = 1027] = "CLXY_BASE_CARD";
t[t.CLXY_BASE_BACK = 1028] = "CLXY_BASE_BACK";
t[t.CLXY_HAND_CARD = 1029] = "CLXY_HAND_CARD";
t[t.CLXY_HAND_BACK = 1030] = "CLXY_HAND_BACK";
t[t.CLXY_OUT_CARD = 1031] = "CLXY_OUT_CARD";
t[t.CLXY_BANKER = 1032] = "CLXY_BANKER";
t[t.CLXY_STATE = 1033] = "CLXY_STATE";
t[t.CLXY_GAME_STEP = 1034] = "CLXY_GAME_STEP";
t[t.CLXY_POWER = 1035] = "CLXY_POWER";
t[t.CLXY_CLOCK = 1036] = "CLXY_CLOCK";
t[t.CLXY_TAKE_FIRST = 1037] = "CLXY_TAKE_FIRST";
t[t.CLXY_ADD_BASE = 1038] = "CLXY_ADD_BASE";
t[t.CLXY_PLAY_CARD = 1039] = "CLXY_PLAY_CARD";
t[t.CLXY_END_WAIT = 1040] = "CLXY_END_WAIT";
t[t.CLXY_RESP_POWER = 1041] = "CLXY_RESP_POWER";
t[t.CLXY_RESP_POWER_EX = 1042] = "CLXY_RESP_POWER_EX";
t[t.CLXY_TURN_DATA = 1043] = "CLXY_TURN_DATA";
t[t.CLXY_START_GAME = 1044] = "CLXY_START_GAME";
t[t.CLXY_END_GAME = 1045] = "CLXY_END_GAME";
t[t.CLXY_RELINK_ENTER = 1046] = "CLXY_RELINK_ENTER";
t[t.CLXY_LOOKER_ENTER = 1047] = "CLXY_LOOKER_ENTER";
t[t.CLXY_TRUST = 1048] = "CLXY_TRUST";
t[t.CLXY_BASE_OWNER = 1049] = "CLXY_BASE_OWNER";
t[t.CLXY_SPECF_DATA = 1050] = "CLXY_SPECF_DATA";
t[t.CLXY_SPECF_HAND = 1051] = "CLXY_SPECF_HAND";
t[t.CLXY_COUNT = 1052] = "CLXY_COUNT";
t[t.CLXY_LAST = 1280] = "CLXY_LAST";
})(_ || (_ = {}));
(function(t) {
t.xyid = _;
class e extends a {
constructor() {
super(...arguments);
this.nCount = 0;
this.nCards = [];
this.forwardLook = 0;
}
static unpack(t) {
const e = {}, i = new n(t);
e.nCount = i.getUint8();
e.nCards = [];
if (e.nCount > 0) for (let t = 0; t < e.nCount; t++) e.nCards[t] = i.getUint8();
e.forwardLook = i.getUint8();
return e;
}
}
e.xy_id = _.CLXY_BASE_CARD;
o([ l.uint8() ], e.prototype, "nCount", void 0);
o([ l.array() ], e.prototype, "nCards", void 0);
o([ l.uint8() ], e.prototype, "forwardLook", void 0);
t.msgBaseCard = e;
class i extends a {
constructor() {
super(...arguments);
this.nCount = 0;
}
}
i.xy_id = _.CLXY_BASE_BACK;
o([ l.uint8() ], i.prototype, "nCount", void 0);
t.msgBaseBack = i;
class s extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
this.nCount = 0;
this.nCards = [];
}
static unpack(t) {
const e = {}, i = new n(t);
e.nSeat = i.getUint8();
e.nCount = i.getUint8();
e.nCards = [];
if (e.nCount > 0) for (let t = 0; t < e.nCount; t++) e.nCards[t] = i.getUint8();
return e;
}
}
s.xy_id = _.CLXY_HAND_CARD;
o([ l.uint8() ], s.prototype, "nSeat", void 0);
o([ l.uint8() ], s.prototype, "nCount", void 0);
o([ l.array() ], s.prototype, "nCards", void 0);
t.msgHandCard = s;
class r extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
this.nCount = 0;
}
}
r.xy_id = _.CLXY_HAND_BACK;
o([ l.uint8() ], r.prototype, "nSeat", void 0);
o([ l.uint8() ], r.prototype, "nCount", void 0);
t.msgHandBack = r;
class d extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
this.nCardCount = 0;
this.nCards = [];
this.nTypeID = 0;
this.nPower = 0;
this.nOutNum = 0;
}
static unpack(t) {
const e = {}, i = new n(t);
e.nSeat = i.getUint8();
e.nCardCount = i.getUint8();
e.nCards = [];
e.nTypeID = 0;
e.nPower = 0;
if (e.nCardCount > 0) {
for (let t = 0; t < e.nCardCount; t++) e.nCards[t] = i.getUint8();
e.nTypeID = i.getUint8();
e.nPower = i.getUint8();
}
e.nOutNum = i.getUint8();
return e;
}
}
d.xy_id = _.CLXY_OUT_CARD;
o([ l.uint8() ], d.prototype, "nSeat", void 0);
o([ l.uint8() ], d.prototype, "nCardCount", void 0);
o([ l.array() ], d.prototype, "nCards", void 0);
o([ l.uint8() ], d.prototype, "nTypeID", void 0);
o([ l.uint8() ], d.prototype, "nPower", void 0);
o([ l.uint8() ], d.prototype, "nOutNum", void 0);
t.msgOutCard = d;
class h extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
}
}
h.xy_id = _.CLXY_BANKER;
o([ l.uint8() ], h.prototype, "nSeat", void 0);
t.msgBanker = h;
class c extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
}
}
c.xy_id = _.CLXY_BASE_OWNER;
o([ l.uint8() ], c.prototype, "nSeat", void 0);
t.msgBaseOwner = c;
class g extends a {
constructor() {
super(...arguments);
this.nFlag = 0;
}
}
g.xy_id = _.CLXY_TAKE_FIRST;
o([ l.uint8() ], g.prototype, "nFlag", void 0);
t.msgTakeFirst = g;
class u extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
}
}
u.xy_id = _.CLXY_ADD_BASE;
o([ l.uint8() ], u.prototype, "nSeat", void 0);
t.msgAddBase = u;
class m extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
this.nCardCount = 0;
this.nCards = [];
this.nTypeID = 0;
this.nPower = 0;
}
pack() {
const t = new n();
this.nCards = this.nCards || [];
t.setUint8(this.nSeat);
t.setUint8(this.nCards.length);
if (this.nCards.length > 0) {
for (let e = 0; e < this.nCards.length; e++) {
const i = this.nCards[e];
t.setUint8(i);
}
t.setUint8(this.nTypeID);
t.setUint8(this.nPower);
}
return t.getUint8Array();
}
static unpack(t) {
const e = {}, i = new n(t);
e.nSeat = i.getUint8();
e.nCardCount = i.getUint8();
e.nCards = [];
e.nTypeID = 0;
e.nPower = 0;
if (e.nCardCount > 0) {
for (let t = 0; t < e.nCardCount; t++) e.nCards[t] = i.getUint8();
e.nTypeID = i.getUint8();
e.nPower = i.getUint8();
}
return e;
}
}
m.xy_id = _.CLXY_PLAY_CARD;
o([ l.uint8() ], m.prototype, "nSeat", void 0);
o([ l.uint8() ], m.prototype, "nCardCount", void 0);
o([ l.array() ], m.prototype, "nCards", void 0);
o([ l.uint8() ], m.prototype, "nTypeID", void 0);
o([ l.uint8() ], m.prototype, "nPower", void 0);
t.msgPlayCard = m;
class C extends a {
constructor() {
super(...arguments);
this.nState = 0;
}
}
C.xy_id = _.CLXY_STATE;
o([ l.uint8() ], C.prototype, "nState", void 0);
t.msgState = C;
class p extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
}
}
p.xy_id = _.CLXY_END_WAIT;
o([ l.uint8() ], p.prototype, "nSeat", void 0);
t.msgEndWait = p;
class f extends a {
constructor() {
super(...arguments);
this.enum = this.ENUM.STEP_ID;
this.nStepID = 0;
}
get ENUM() {
let t;
(function(t) {
t[t.GAME_STEP_START_GAME = 1] = "GAME_STEP_START_GAME";
t[t.GAME_STEP_TAKE_FIRST = 2] = "GAME_STEP_TAKE_FIRST";
t[t.GAME_STEP_CALL_POINT = 3] = "GAME_STEP_CALL_POINT";
t[t.GAME_STEP_CALL_BANKER = 4] = "GAME_STEP_CALL_BANKER";
t[t.GAME_STEP_ROB_BANKER = 5] = "GAME_STEP_ROB_BANKER";
t[t.GAME_STEP_ADD_BASE = 6] = "GAME_STEP_ADD_BASE";
t[t.GAME_STEP_PLAY_CARD = 7] = "GAME_STEP_PLAY_CARD";
t[t.GAME_STEP_WIN_LOST = 8] = "GAME_STEP_WIN_LOST";
t[t.GAME_STEP_END_GAME = 9] = "GAME_STEP_END_GAME";
t[t.GAME_STEP_CHOOSE_BANKER = 26] = "GAME_STEP_CHOOSE_BANKER";
})(t || (t = {}));
return {
STEP_ID: t
};
}
}
f.xy_id = _.CLXY_GAME_STEP;
o([ l.uint8() ], f.prototype, "nStepID", void 0);
t.msgGameStep = f;
class A extends a {
constructor() {
super(...arguments);
this.enum = this.ENUM.powerType;
this.nSeat = 0;
this.nPower = 0;
}
get ENUM() {
let t;
(function(t) {
t[t.PID_PC_OPEN_CARD = 1] = "PID_PC_OPEN_CARD";
t[t.PID_PC_NOT_PLAY = 2] = "PID_PC_NOT_PLAY";
t[t.PID_PC_PLAY_CARD = 4] = "PID_PC_PLAY_CARD";
})(t || (t = {}));
return {
powerType: t
};
}
}
A.xy_id = _.CLXY_POWER;
o([ l.uint8() ], A.prototype, "nSeat", void 0);
o([ l.uint8() ], A.prototype, "nPower", void 0);
t.msgPower = A;
class S extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
this.nTime = 0;
}
}
S.xy_id = _.CLXY_CLOCK;
o([ l.uint8() ], S.prototype, "nSeat", void 0);
o([ l.uint8() ], S.prototype, "nTime", void 0);
t.msgClock = S;
class I extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
this.nPower = 0;
}
}
I.xy_id = _.CLXY_RESP_POWER;
I.PID_RB_NOT_ROB = 1;
I.PID_RB_ROB_BANKER = 2;
o([ l.uint8() ], I.prototype, "nSeat", void 0);
o([ l.uint8() ], I.prototype, "nPower", void 0);
t.msgRespPower = I;
class E extends a {
constructor() {
super(...arguments);
this.nStepID = 0;
this.nSeat = 0;
this.nPower = 0;
}
}
E.xy_id = _.CLXY_RESP_POWER_EX;
o([ l.uint8() ], E.prototype, "nStepID", void 0);
o([ l.uint8() ], E.prototype, "nSeat", void 0);
o([ l.uint8() ], E.prototype, "nPower", void 0);
t.msgRespPowerEx = E;
class L extends a {
constructor() {
super(...arguments);
this.nPreSeat = 0;
this.nNowSeat = 0;
}
}
L.xy_id = _.CLXY_TURN_DATA;
o([ l.uint8() ], L.prototype, "nPreSeat", void 0);
o([ l.uint8() ], L.prototype, "nNowSeat", void 0);
t.msgTurnData = L;
class T extends a {
constructor() {
super(...arguments);
this.nFlag = 0;
}
}
T.xy_id = _.CLXY_START_GAME;
o([ l.uint8() ], T.prototype, "nFlag", void 0);
t.msgStartGame = T;
class D extends a {
constructor() {
super(...arguments);
this.nFlag = 0;
}
}
D.xy_id = _.CLXY_END_GAME;
o([ l.uint8() ], D.prototype, "nFlag", void 0);
t.msgEndGame = D;
class w extends a {
constructor() {
super(...arguments);
this.nFlag = 0;
}
}
w.xy_id = _.CLXY_RELINK_ENTER;
o([ l.uint8() ], w.prototype, "nFlag", void 0);
t.msgRelinkEnter = w;
class P extends a {
constructor() {
super(...arguments);
this.nFlag = 0;
}
}
P.xy_id = _.CLXY_LOOKER_ENTER;
o([ l.uint8() ], P.prototype, "nFlag", void 0);
t.msgLookerEnter = P;
class G extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
this.nFlag = 0;
}
}
G.xy_id = _.CLXY_TRUST;
o([ l.uint8() ], G.prototype, "nSeat", void 0);
o([ l.uint8() ], G.prototype, "nFlag", void 0);
t.msgTrust = G;
class b extends a {
constructor() {
super(...arguments);
this.nCount = 0;
this.nCards = [];
}
static unpack(t) {
const e = {}, i = new n(t);
e.nCount = i.getUint8();
e.nCards = [];
if (e.nCount > 0) for (let t = 0; t < e.nCount; t++) e.nCards[t] = i.getUint8();
return e;
}
}
b.xy_id = _.CLXY_SPECF_DATA;
o([ l.uint8() ], b.prototype, "nCount", void 0);
o([ l.array() ], b.prototype, "nCards", void 0);
t.msgSpecfData = b;
class v extends a {
constructor() {
super(...arguments);
this.nSeat = 0;
this.nCount = 0;
this.nCards = [];
}
pack() {
const t = new n();
t.setUint8(this.nSeat);
t.setUint8(this.nCards.length);
t.setUint8(this.nCards.length);
if (this.nCards.length > 0) for (let e = 0; e < this.nCards.length; e++) {
const i = this.nCards[e];
t.setUint8(i);
}
return t.getUint8Array();
}
}
v.xy_id = _.CLXY_SPECF_HAND;
o([ l.uint8() ], v.prototype, "nSeat", void 0);
o([ l.uint8() ], v.prototype, "nCount", void 0);
o([ l.array() ], v.prototype, "nCards", void 0);
t.msgSpecfHand = v;
})(r || (r = {}));
},
"./bin/logic/protocol/RLProtocol.js": (t, e, i) => {
i.r(e);
i.d(e, {
RL_XYID: () => _,
RLProtocol: () => r
});
var s = i("./bin/gf.js"), o = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
const a = s.comm.ProtocolBase, n = s.comm.XYReader, l = s.comm.ProtoDecorator;
var _, r;
(function(t) {
t[t.RLXY_FIRST = 512] = "RLXY_FIRST";
t[t.RLXY_TEST = 513] = "RLXY_TEST";
t[t.RLXY_RESULT = 514] = "RLXY_RESULT";
t[t.RLXY_REQ_JIESAN = 515] = "RLXY_REQ_JIESAN";
t[t.RLXY_RESP_JIESAN = 516] = "RLXY_RESP_JIESAN";
t[t.RLXY_CUR_PAN_SHU = 517] = "RLXY_CUR_PAN_SHU";
t[t.RLXY_TOTAL_WINLOST = 518] = "RLXY_TOTAL_WINLOST";
t[t.RLXY_SHOW_START_BTN = 519] = "RLXY_SHOW_START_BTN";
t[t.RLXY_ROOM_RULE = 520] = "RLXY_ROOM_RULE";
t[t.RLXY_JIESAN_SUC = 521] = "RLXY_JIESAN_SUC";
t[t.RLXY_RESULT_TALLY = 522] = "RLXY_RESULT_TALLY";
t[t.RLXY_PLAYER_STATE = 523] = "RLXY_PLAYER_STATE";
t[t.RLXY_BROKE_PLAYER = 524] = "RLXY_BROKE_PLAYER";
t[t.RLXY_PLAYER_SORT = 525] = "RLXY_PLAYER_SORT";
t[t.RLXY_RANK_END_RESULT = 526] = "RLXY_RANK_END_RESULT";
t[t.RLXY_BUY_AND_USE_PROP = 527] = "RLXY_BUY_AND_USE_PROP";
t[t.RLXY_BUY_PROP_EXPEND = 528] = "RLXY_BUY_PROP_EXPEND";
t[t.RLXY_BUY_PROP_LIST = 529] = "RLXY_BUY_PROP_LIST";
t[t.RLXY_GIVEUP_PLAYER = 530] = "RLXY_GIVEUP_PLAYER";
t[t.RLXY_PLAYER_GIVEUP = 531] = "RLXY_PLAYER_GIVEUP";
t[t.RLXY_LUAAWARD_STRING = 532] = "RLXY_LUAAWARD_STRING";
t[t.RLXY_PLAY_LEVEL = 533] = "RLXY_PLAY_LEVEL";
t[t.RLXY_REQ_USING_PROP = 534] = "RLXY_REQ_USING_PROP";
t[t.RLXY_RESP_USING_PROP = 535] = "RLXY_RESP_USING_PROP";
t[t.RLXY_FEE_BASESCORE = 640] = "RLXY_FEE_BASESCORE";
t[t.RLXY_EXTRA_BONUS = 641] = "RLXY_EXTRA_BONUS";
t[t.RLXY_HEAD_PROP = 642] = "RLXY_HEAD_PROP";
t[t.RLXY_SHOW_PLAYER_READY = 643] = "RLXY_SHOW_PLAYER_READY";
t[t.RLXY_TIMEOUT_CHANGESEAT = 644] = "RLXY_TIMEOUT_CHANGESEAT";
t[t.RLXY_PLAYER_DRESS_PROPS = 645] = "RLXY_PLAYER_DRESS_PROPS";
t[t.RLXY_LOOK_BASE = 646] = "RLXY_LOOK_BASE";
t[t.RLXY_CARDRECORD_CONFIG = 647] = "RLXY_CARDRECORD_CONFIG";
t[t.RLXY_VS_DATA = 648] = "RLXY_VS_DATA";
t[t.RLXY_UPDATE_PROP = 649] = "RLXY_UPDATE_PROP";
t[t.RLXY_LAST = 768] = "RLXY_LAST";
})(_ || (_ = {}));
(function(t) {
t.xyid = _;
class e extends a {
constructor() {
super(...arguments);
this.nWinLost = [];
this.nResult = [];
this.nMult = [];
}
static unpack(t) {
const e = {}, i = new n(t);
e.nWinLost = [];
e.nResult = [];
e.nMult = [];
for (let t = 0; t < 3; t++) e.nWinLost[t] = i.getInt64();
for (let t = 0; t < 3; t++) e.nResult[t] = i.getUint8();
for (let t = 0; t < 3; t++) e.nMult[t] = i.getInt64();
return e;
}
}
e.xy_id = _.RLXY_RESULT;
e.ResultType = {
nError: 0,
nWin: 1,
nLose: 2,
nDrawn: 3
};
t.msgResult = e;
class i extends a {
constructor() {
super(...arguments);
this.m_Broke = [];
this.m_BCap = [];
}
static unpack(t) {
const e = {}, i = new n(t);
e.m_Broke = [];
e.m_BCap = [];
for (let t = 0; t < 3; t++) {
e.m_Broke[t] = i.getBoolean();
e.m_BCap[t] = i.getBoolean();
}
return e;
}
}
i.xy_id = _.RLXY_BROKE_PLAYER;
t.msgPlayerGoBroke = i;
class s extends a {
constructor() {
super(...arguments);
this.nServcieFee = 0;
this.nBaseScore = 0;
this.nNum1 = 0;
this.nNum2 = 0;
this.nMaxWin = 0;
}
}
s.xy_id = _.RLXY_FEE_BASESCORE;
o([ l.int32() ], s.prototype, "nServcieFee", void 0);
o([ l.int32() ], s.prototype, "nBaseScore", void 0);
o([ l.int32() ], s.prototype, "nNum1", void 0);
o([ l.int32() ], s.prototype, "nNum2", void 0);
o([ l.int64() ], s.prototype, "nMaxWin", void 0);
t.msgFeeAndBaseScore = s;
class r extends a {
constructor() {
super(...arguments);
this.vs_level = 0;
this.vs_basescore = 0;
this.vs_sr_min = 0;
this.vs_sr_max = 0;
this.vs_win_max = 0;
this.vs_pay = 0;
}
}
r.xy_id = _.RLXY_VS_DATA;
o([ l.int32() ], r.prototype, "vs_level", void 0);
o([ l.int64() ], r.prototype, "vs_basescore", void 0);
o([ l.int64() ], r.prototype, "vs_sr_min", void 0);
o([ l.int64() ], r.prototype, "vs_sr_max", void 0);
o([ l.int64() ], r.prototype, "vs_win_max", void 0);
o([ l.int64() ], r.prototype, "vs_pay", void 0);
t.msgVSData = r;
class d extends a {
constructor() {
super(...arguments);
this.nPropID = 0;
this.toSeat = 0;
}
pack() {
const t = new n();
t.setInt32(this.nPropID);
t.setInt32(this.toSeat);
return t.getUint8Array();
}
static unpack(t) {
const e = {}, i = new n(t);
e.nPropID = i.getInt32();
e.toSeat = i.getInt32();
return e;
}
}
d.xy_id = _.RLXY_REQ_USING_PROP;
o([ l.int32() ], d.prototype, "nPropID", void 0);
o([ l.int32() ], d.prototype, "toSeat", void 0);
t.msgReqUsingProp = d;
class h extends a {
constructor() {
super(...arguments);
this.enum = this.ENUM.eFlag;
this.nFlag = 0;
this.nFromSeat = 0;
this.toSeat = 0;
this.nPropID = 0;
}
get ENUM() {
let t;
(function(t) {
t[t.kSuccess = 0] = "kSuccess";
t[t.kTimeLimt = 1] = "kTimeLimt";
t[t.kNotEnoughSR = 2] = "kNotEnoughSR";
t[t.kSeatError = 3] = "kSeatError";
t[t.kPropERROR = 4] = "kPropERROR";
t[t.kERROR = 5] = "kERROR";
})(t || (t = {}));
return {
eFlag: t
};
}
pack() {
const t = new n();
t.setUint8(this.nFlag);
t.setInt32(this.nFromSeat);
t.setInt32(this.toSeat);
t.setInt32(this.nPropID);
return t.getUint8Array();
}
static unpack(t) {
const e = {}, i = new n(t);
e.nFlag = i.getUint8();
e.nFromSeat = i.getInt32();
e.toSeat = i.getInt32();
e.nPropID = i.getInt32();
return e;
}
}
h.xy_id = _.RLXY_RESP_USING_PROP;
o([ l.uint8() ], h.prototype, "nFlag", void 0);
o([ l.int32() ], h.prototype, "nFromSeat", void 0);
o([ l.int32() ], h.prototype, "toSeat", void 0);
o([ l.int32() ], h.prototype, "nPropID", void 0);
t.msgRespUsingProp = h;
class c extends a {
constructor() {
super(...arguments);
this.propid = 0;
this.cnt = 0;
}
static unpack(t) {
const e = {}, i = new n(t);
e.propid = i.getInt32();
e.cnt = i.getInt32();
return e;
}
}
c.xy_id = _.RLXY_UPDATE_PROP;
o([ l.int32() ], c.prototype, "propid", void 0);
o([ l.int32() ], c.prototype, "cnt", void 0);
t.msgUpdateProp = c;
})(r || (r = {}));
},
"./bin/manager/ElevatingManager.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => d
});
var s = i("./bin/config/GameConfig.js"), a = i("./bin/data/TableData.js"), n = i("./bin/gf.js"), l = i("./bin/manager/activeManager.js"), _ = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let r = class extends n.gf.Bean {
checkContinueGame(t) {
console.log("checkContinueGame start");
let e = 0;
const i = this.getImpl(a.default).getSelf();
e = i && i.isVaildPlayer() ? i.sr : this.getImpl(n.comm.lobby.IUserManager)._userManager.userScore;
1 == this.checkSrToStart(e) ? this.checkUpRoom(e) : t && t();
}
checkUpRoom(t) {
var e;
const i = this.getSuitRoomData(t), o = this.getCurRoomData();
if (i && o) {
const t = (null === (e = null == i ? void 0 : i.roomId) || void 0 === e ? void 0 : e[0]) || -1, a = (null == i ? void 0 : i.vrRoomLv) || -1;
-1 != t && -1 != a && o.vrRoomLv != a && this.getImpl(n.gf.IViewPlugin).openView(n.comm.UIs.UpgradationUI, i, o.vrRoomLv, () => {
this.changeRoom(i);
this.dispatch("onChangeSeat" + s.GAME_ID);
this.dispatch("onShowReady");
}, () => {
console.log("");
});
}
}
checkSrToStart(t) {
const e = this.getCurRoomData();
return e ? e.minscore > t ? -1 : -1 != e.maxscore && e.maxscore < t ? 1 : 0 : 0;
}
checkSrIsNotEnough() {
let t = 0;
const e = this.getImpl(a.default).getSelf();
t = e && e.isVaildPlayer() ? e.sr : this.getImpl(n.comm.lobby.IUserManager)._userManager.userScore;
return -1 == this.checkSrToStart(t);
}
getCurRoomData() {
return this.getImpl(n.comm.lobby.IJoinRoomModule).getCurRoomData() || null;
}
getSuitRoomData(t, e = !1) {
let i = this.getSuitRoomDataByLevel(t, e);
console.log("getSuitRoomData a ", JSON.stringify(i), e);
if (!i) {
i = this.getSuitRoomDataNormal(t);
console.log("getSuitRoomData b ", JSON.stringify(i), e);
}
return i;
}
getSuitRoomDataByLevel(t, e = !1) {
const i = this.getImpl(n.comm.lobby.IJoinRoomModule).getRoomInfo(s.GAME_ID);
if (!i || 0 === i.length) return null;
const o = this.getCurRoomData();
if (!o) return null;
const a = o.roomID, l = o.upDownLv;
let _ = null, r = 0;
if (e) {
for (const e of i) if (e.upDownLv && e.upDownLv == l && -1 != e.roomId.indexOf(a) && t >= e.minscore && (-1 == e.maxscore || t <= e.maxscore) && e.minscore > r) {
r = e.minscore;
_ = e;
}
if (_) return _;
}
for (const e of i) if ((!e.upDownLv || e.upDownLv != l) && t >= e.minscore && (-1 == e.maxscore || t <= e.maxscore) && e.minscore > r) {
r = e.minscore;
_ = e;
break;
}
return _;
}
getSuitRoomDataNormal(t) {
const e = this.getImpl(n.comm.lobby.IJoinRoomModule).getRoomInfo(s.GAME_ID);
if (!e || 0 === e.length) return null;
if (!this.getCurRoomData()) return null;
let i = null, o = 0;
for (const s of e) if (t >= s.minscore && (-1 == s.maxscore || t <= s.maxscore) && s.minscore > o) {
o = s.minscore;
i = s;
}
return i;
}
changeRoom(t) {
var e;
if (!t) {
console.log("checkContinueGame changeRoom not roomData");
return;
}
const i = (null === (e = null == t ? void 0 : t.roomId) || void 0 === e ? void 0 : e[0]) || -1, o = (null == t ? void 0 : t.vrRoomLv) || -1;
if (-1 != i && -1 != o) {
console.log("checkContinueGame changeRoom  roomData:", i, o);
this.getImpl(n.comm.lobby.IJoinRoomModule).startChangeRoom(s.GAME_ID, i, o);
} else console.log("checkContinueGame changeRoom not roomData aa:", i, o);
}
getGameTopInfo() {
const t = this.getImpl(n.comm.lobby.IJoinRoomModule).getRoomInfo(n.comm.g.gameIds.game_k7star);
if (null === t) return null;
let e = null;
for (let i = 0; i < t.length; i++) {
const s = t[i];
if (s && "dianfeng" === s.gamemode) {
e = s;
break;
}
}
return e;
}
reqk7TopGame() {
const t = {
reqConfig: 1
};
t.channelid = this.getImpl(n.comm.IHost).getChannelid();
const e = n.comm.g.gameIds.game_k7star;
this.getImpl(n.comm.lobby.IAwardManager).reqAwardInfo(t, n.comm.AwardConfig.k7TopGame.type, e);
}
popNextGame(t) {
const e = this.getImpl(a.default).getSelf();
if (!e || !e.numid) return !1;
const i = this.getImpl(n.comm.lobby.IJoinRoomModule).getRoomInfo(n.comm.g.gameIds.game_k7star);
if (null === i) return !1;
const s = this.getCurRoomData();
if (!s) return null;
let l = null;
for (let e = 0; e < i.length; e++) {
const s = i[e];
if (s.vrRoomLv === t) {
l = s;
break;
}
}
if ((Number(e.sr) || 0) >= l.minscore) {
this.changeRoom(l);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_room_click, {
game_id: n.comm.g.areaConfig.gameID,
room_id: s.roomId[0] || 0,
room_lv: s.vrRoomLv,
room_name: s.name,
roomup_click: t
});
return !0;
}
return !1;
}
respk7TopGame(t) {
if (!t.isAddIn) if (t.on && 1 === t.on) if (this.getImpl(l.default).isBankrupt()) this.dispatch("onContinueGame" + s.GAME_ID); else {
const t = this.getGameTopInfo(), e = this.getImpl(a.default).getSelf();
(Number(e.sr) || 0) < t.minscore ? this.getImpl(l.default).onReqUseRCQ(this.getTopGameRoomLv(), () => {
var e;
const i = (null === (e = null == t ? void 0 : t.roomId) || void 0 === e ? void 0 : e[0]) || -1;
this.getImpl(l.default).popEnterRoomGift(this.getTopGameRoomLv(), i);
}) : this.dispatch(n.comm.Events.EventGameContinue, this.getTopGameRoomLv());
} else t.timeOff ? this.getImpl(n.gf.IViewPlugin).openView(n.comm.UIs.GameTopDialogUI) : this.getImpl(l.default).onReqUseRCQ(this.getTopGameRoomLv(), () => {
this.getImpl(n.gf.IViewPlugin).openView(n.comm.UIs.GameTopDialogUI);
});
}
getTopGameRoomLv() {
const t = this.getGameTopInfo();
return t && "dianfeng" === t.gamemode ? t.vrRoomLv : 4;
}
};
_([ n.gf.listen(n.comm.AwardConfig.k7TopGame.dataHead) ], r.prototype, "respk7TopGame", null);
const d = r = _([ n.gf.bean() ], r);
},
"./bin/manager/GameActiveBase.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => o
});
var s = i("./bin/gf.js");
class o extends s.gf.Bean {
constructor() {
super(...arguments);
this.popFunctionList = [];
this._pushedUINames = new Set();
this._inflightCount = 0;
this._inflightRequests = new Set();
}
pushPopFunction(t, e) {
if ("function" == typeof e) {
t && this._pushedUINames.add(t);
this.popFunctionList.push(e);
} else console.warn(`[GameActiveBase] pushPopFunction reject non-function, uiName=${t}`);
}
beginRequest(t) {
this._inflightCount++;
t && this._inflightRequests.add(t);
}
endRequest(t) {
this._inflightCount > 0 && this._inflightCount--;
t && this._inflightRequests.delete(t);
}
hasInflightRequest(t) {
return t ? this._inflightRequests.has(t) : this._inflightCount > 0;
}
hasPendingPushedUI() {
if (0 === this._pushedUINames.size) return !1;
const t = this.getImpl(s.gf.IViewPlugin);
for (const e of this._pushedUINames) if (t.haveView(e)) return !0;
return !1;
}
isPopupBusy(t, e) {
return !(!t || !this.getImpl(s.gf.IViewPlugin).haveView(t)) || !(!e || !this.hasInflightRequest(e));
}
popNextFunction() {
const t = this.popFunctionList.shift();
if (t && "function" == typeof t) {
console.log(`--------------GameActiveBase popNextFunction suc ${t.name}`);
t();
} else {
console.log("--------------GameActiveBase popNextFunction over");
this.initpopFunctionList();
}
}
initpopFunctionList() {
this.popFunctionList = [];
this._pushedUINames.clear();
}
stopPopFunctionList() {
this.popFunctionList = [];
this._pushedUINames.clear();
this.updateSR();
}
updateSR(t) {
this.getImpl(s.comm.lobby.IJoinRoomModule).reqPlayerGameData();
}
}
},
"./bin/manager/activeManager.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => g
});
var s = i("./bin/config/GameConfig.js"), a = i("./bin/config/GameDefine.js"), n = i("./bin/data/TableData.js"), l = i("./bin/gf.js"), _ = i("./bin/logic/actModules/GameActModule.js"), r = i("./bin/logic/moudles/GameLogicManager.js"), d = i("./bin/manager/GameActiveBase.js"), h = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let c = class extends d.default {
constructor() {
super(...arguments);
this._bankruptData = null;
this._infiniteCoinAward = null;
this._infiniteCoinData = null;
}
initUI() {
this._tableData = this.getImpl(n.default);
this._gameLogicManager = this.getImpl(r.default);
this._gameActModule = this.getImpl(_.default);
}
onUnUIBinded() {
console.log("");
this.getImpl(l.gf.IViewPlugin).haveView(l.comm.UIs.InfiniteCoinUI) && this.getImpl(l.gf.IViewPlugin).closeView(l.comm.UIs.InfiniteCoinUI);
this.getImpl(l.gf.IViewPlugin).haveView(l.comm.UIs.DibaoUI) && this.getImpl(l.gf.IViewPlugin).closeView(l.comm.UIs.DibaoUI);
this.getImpl(l.gf.IViewPlugin).haveView(l.comm.UIs.BankruptGiftPackUI) && this.getImpl(l.gf.IViewPlugin).closeView(l.comm.UIs.BankruptGiftPackUI);
this.getImpl(l.gf.IViewPlugin).haveView(l.comm.UIs.StoreMain) && this.getImpl(l.gf.IViewPlugin).closeView(l.comm.UIs.StoreMain);
}
resetUI() {
this._bankruptData = null;
this._infiniteCoinAward = null;
this._infiniteCoinData = null;
}
onWinLost() {
this.onHidePowerPropPop();
this._gameActModule.reqPowerProps(l.comm.AwardCMD.PowerProps.CMD_PP_CONFIG, 2);
this._bankruptData = null;
this._infiniteCoinAward = null;
const t = this.isBankrupt() && !this.isNobilityNoPay();
console.log(t ? "玩家破产" : "玩家未破产，走结算流程");
this.onCheckEndGame(t);
}
onGiveUp() {
this.onHidePowerPropPop();
this._gameActModule.reqPowerProps(l.comm.AwardCMD.PowerProps.CMD_PP_CONFIG, 2);
const t = this.isBankrupt() && !this.isNobilityNoPay();
this.onCheckGiveUp(t);
}
getLevelid() {
const t = this.getCurRoomData();
let e = -1;
null != (null == t ? void 0 : t.minscore) && (e = t.vrRoomLv);
return {
levelid: e,
gameid: (null == t ? void 0 : t.gameId) || l.comm.g.areaConfig.gameID
};
}
onGetRCQInfo(t) {
let {levelid: e} = this.getLevelid();
e = t || e;
const i = this.getImpl(l.comm.lobby.ILobbyConfigManager).getRCQConfig();
return i && i[e] && 1 == i[e].rcq ? this.getImpl(l.comm.lobby.IPropManager).getPropCnt(i[e].propid || 0) : 0;
}
onReqUseRCQ(t, e) {
let {levelid: i, gameid: s} = this.getLevelid();
i = t || i;
const o = this.getImpl(l.comm.lobby.ILobbyConfigManager).getRCQConfig();
o && o[i] && 1 == o[i].rcq && this.getImpl(l.comm.lobby.IPropManager).getPropCnt(o[i].propid || 0) > 0 ? this.getImpl(l.comm.lobby.IGiftModule).reqTicketGiftNew(s, l.comm.AwardCMD.RespTickGift.GET_USE_RCQ, i) : null == e || e();
}
onContinueGame(t, e = !1, i) {
console.log("onContinueGame 0");
if (!this.isBankrupt()) {
t && t();
return;
}
this.initpopFunctionList();
const s = this.getCurRoomData();
let o = -1;
(null == s ? void 0 : s.minscore) && (o = s.vrRoomLv);
const a = (null == s ? void 0 : s.gameId) || l.comm.g.areaConfig.gameID, n = this.getImpl(l.comm.lobby.ILobbyConfigManager).getGiftPopData("gameContinue", a), _ = null == n ? void 0 : n[o];
if (null == _ || null == _ || 0 === _.length) return;
const r = [];
let d = "gameContinue";
!0 === e && (d = "gameAgain");
for (const t of _) {
const e = this.checkGiftPop(t, d);
"" != e && r.push(e);
}
console.log(r);
this.pushPopFunction("", () => {
this.beginRequest(l.comm.AwardEventNames.RespTickGift.GET_USE_RCQ);
this.onReqUseRCQ(i, () => {
this.endRequest(l.comm.AwardEventNames.RespTickGift.GET_USE_RCQ);
this.popNextFunction();
});
});
for (const t of r) switch (t) {
case "BankruptGift":
this._bankruptData ? this.pushPopFunction(l.comm.UIs.BankruptGiftPackUI, this.popBankrupt.bind(this)) : this.isPopupBusy(l.comm.UIs.BankruptGiftPackUI, l.comm.AwardConfig.respBankrupt.dataHead) || this.pushPopFunction(l.comm.UIs.BankruptGiftPackUI, this.popBankruptGift.bind(this));
break;

case "StoreLayer":
this.pushPopFunction(l.comm.UIs.StoreMain, this.popStoreLayer.bind(this));
break;

case "FirstCharge":
this.pushPopFunction(l.comm.UIs.FirstChargeGiftUI, this.popFirstChargeInfo.bind(this));
break;

case l.comm.UIs.FirstrechargeUI:
this.pushPopFunction(l.comm.UIs.FirstrechargeUI, this.popFirstrechargeInfo.bind(this));
}
this.popNextFunction();
}
isPopinfiniteCoinAward() {
return this._infiniteCoinAward;
}
onCheckEndGame(t) {
console.log("onCheckEndGame");
let e = !1;
(this.popFunctionList.length > 0 || this.hasPendingPushedUI() || this.hasInflightRequest()) && (e = !0);
console.log("onWinlost isEndGiveUp:", e);
this.initpopFunctionList();
const i = this.getCurRoomData();
let o = -1;
(null == i ? void 0 : i.minscore) && (o = i.vrRoomLv);
if (o < 0 && o > 5) return;
const a = (null == i ? void 0 : i.gameId) || l.comm.g.areaConfig.gameID, n = this.getImpl(l.comm.lobby.ILobbyConfigManager).getGiftPopData("gameEnd", a), _ = null == n ? void 0 : n[o];
if (null == _ || null == _ || 0 === _.length) return;
let r = !1;
const d = [];
d.push("TitleAward");
for (const t of _) {
const e = this.checkGiftPop(t, "gameEnd");
if ("" != e) {
d.push(e);
"BigAward" === e && (r = !0);
}
}
console.log(d);
r || this.dispatch("onCancelBigAward" + s.GAME_ID);
for (const e of d) switch (e) {
case "TitleAward":
this.pushPopFunction("UIAward", this.popTitleAward.bind(this));
break;

case "InfiniteCoinAwardFree":
t && this.pushPopFunction(l.comm.UIs.InfiniteCoinUI, this.popInfiniteCoinAwardFree.bind(this));
break;

case "BankruptGift":
t && !this.isPopupBusy(l.comm.UIs.BankruptGiftPackUI, l.comm.AwardConfig.respBankrupt.dataHead) && this.pushPopFunction(l.comm.UIs.BankruptGiftPackUI, this.popBankruptGift.bind(this));
break;

case "Dibao":
t && !this.isPopupBusy(l.comm.UIs.DibaoUI, l.comm.AwardConfig.respDiBao.dataHead) && this.pushPopFunction(l.comm.UIs.DibaoUI, this.popDibaoAward.bind(this));
break;

case "FirstCharge":
t && this.pushPopFunction(l.comm.UIs.FirstChargeGiftUI, this.popFirstChargeInfo.bind(this));
break;

case l.comm.UIs.FirstrechargeUI:
t && this.pushPopFunction(l.comm.UIs.FirstrechargeUI, this.popFirstrechargeInfo.bind(this));
break;

case "BigAward":
this.pushPopFunction("", this.popBigAward.bind(this));
break;

case "YunProtect":
if (!this._tableData.gameLogicData.getTitleAwardData() && !this._tableData.getShowPopYunTips()) {
this._tableData.setShuShuPowerPropSource("结算界面");
this.pushPopFunction("YunProtectTips", this.popYunProtect.bind(this));
}
}
if (!e) {
console.log("onWinlost not isEndGiveUp:", t);
this.popNextFunction();
}
}
onCheckGiveUp(t = !1) {
console.log("onCheckGiveUp:", t);
this.initpopFunctionList();
const e = [];
e.push("TitleAward");
e.push("YunProtect");
const i = this._tableData.gameLogicData.getBigAwardData();
i && i._award_val > 0 && e.push("BigAward");
e.push("BankruptGift");
for (const i of e) switch (i) {
case "TitleAward":
this.pushPopFunction("UIAward", this.popTitleAward.bind(this));
break;

case "YunProtect":
if (!this._tableData.gameLogicData.getTitleAwardData()) {
this._tableData.setShuShuPowerPropSource("认输界面");
this.pushPopFunction("YunProtectTips", this.popYunProtect.bind(this));
}
break;

case "BigAward":
this.pushPopFunction("", this.popGiveUpBigAward.bind(this));
break;

case "BankruptGift":
t && !this.isPopupBusy(l.comm.UIs.BankruptGiftPackUI, l.comm.AwardConfig.respBankrupt.dataHead) && this.pushPopFunction(l.comm.UIs.BankruptGiftPackUI, this.popBankruptGift.bind(this));
}
this.popNextFunction();
}
isBankrupt() {
return -1 != this.getPopRechargeLayers();
}
isNobilityNoPay() {
const t = this.getImpl(n.default).getNobilityResult(), e = this.getImpl(n.default).getSelfSeat();
if ((null == t ? void 0 : t._flag) && t._flag[e] == a.NobilityFlag.NFLAG_NO_PAY) {
console.log("玩家 爵位免赔");
return !0;
}
return !1;
}
isOverRich() {
const t = this.getImpl(n.default).getSelf();
if (!t || !t.numid) return !1;
const e = t.sr || 0, i = this.getCurRoomData(), s = (null == i ? void 0 : i.maxscore) || 0;
return s > 0 && e > s;
}
getPopRechargeLayers() {
const t = this.getImpl(n.default).getSelf();
if (!t || !t.numid) return -1;
const e = Number(t.sr) || 0, i = this.getCurRoomData();
let s = (null == i ? void 0 : i.vrRoomLv) || 0;
const o = (null == i ? void 0 : i.minscore) || 0;
s += 1;
if (e < o) {
console.log(`getPopRechargeLayers levelid = ${s}, minSr = ${o}`);
return s;
}
console.log(`getPopRechargeLayers levelid = ${s} sr = ${e}, minSr = ${o}`);
return -1;
}
getCurRoomData() {
return this.getImpl(l.comm.lobby.IJoinRoomModule).getCurRoomData() || null;
}
onUpdateSR(t) {
console.log("onUpdateSR:", t);
}
popBankruptGift() {
if (this.isBankrupt()) {
this.beginRequest(l.comm.AwardConfig.respBankrupt.dataHead);
this.getBankruptGiftData();
} else this.popNextFunction();
}
popDibaoAward() {
if (!this.isBankrupt()) {
console.log("popDibaoAward is not Bankrupt");
this.popNextFunction();
return;
}
const t = this.getImpl(n.default).getSelf();
if (t) {
const e = Number(t.sr) || 0, i = this.getImpl(l.comm.lobby.ILobbyConfigManager).getLobbyDataDiBao(), s = (null == i ? void 0 : i.award) || 0, o = this.getPopRechargeMincarry();
if (e + s >= o || this.getImpl(l.comm.lobby.ILobbyConfigManager).getIsNewPlayer()) {
this.beginRequest(l.comm.AwardConfig.respDiBao.dataHead);
this.sendDiBaoAward();
} else {
console.log("popDibaoAward sr:", e, ",award:", s, ",minscore:", o);
this.popNextFunction();
}
} else {
console.log("popDibaoAward playerInfo error ");
this.popNextFunction();
}
}
getPopRechargeMincarry() {
const t = this.getCurRoomData();
let e = 0;
t && t.minscore && t.minscore > e && (e = t.minscore);
return e;
}
getBankruptGiftData() {
const t = this.getCurRoomData();
let e = 0;
(null == t ? void 0 : t.minscore) && (e = t.vrRoomLv || 0);
e += 1;
this.sendBankruptAward(e);
}
sendBankruptAward(t) {
const e = {};
e.roomLv = t;
e.reqRevengeBankrupt = 1;
const i = l.comm.g.gameIds.game_k7star;
this.getImpl(l.comm.lobby.IAwardManager).reqAwardInfo(e, l.comm.AwardConfig.respBankrupt.type, i);
}
sendReqInfiniteCoinInfo() {}
sendAddInfiniteCoinCnt() {}
sendGetInfiniteCoinAward() {}
sendDiBaoAward() {
this.getImpl(l.comm.lobby.IAwardManager).reqAwardInfo({
reqDiBaoInfo: 1,
nobility: 1
}, l.comm.AwardConfig.respDiBao.type);
}
sendDiBaoIsNewPlayer() {
var t;
const e = {
reqIsNewPlayer: 1
};
e.channelid = this.getImpl(l.comm.IHost).getChannelid();
const i = null === (t = l.comm.g.gameIds) || void 0 === t ? void 0 : t.game_lianyun;
this.getImpl(l.comm.lobby.IAwardManager).reqAwardInfo(e, l.comm.AwardConfig.respDiBao.type, i);
}
popBankrupt() {
const t = this._bankruptData;
t ? this.getImpl(l.gf.IViewPlugin).openView(l.comm.UIs.BankruptGiftPackUI, t, t => {
var e;
"close" == t ? this.popNextFunction() : "buy_success" == t ? null === (e = null == this ? void 0 : this.stopPopFunctionList) || void 0 === e || e.call(this) : "limit_time" == t && (this._bankruptData = null);
}) : this.popStoreLayer();
}
popStoreLayer() {
this.getImpl(l.gf.IViewPlugin).openView(l.comm.UIs.StoreMain, l.comm.StorePageType.ST_YUN);
}
popPlayAwardGiftAward() {}
popInfiniteCoin() {
if (this.isPopBuyInfiniteCoin()) {
const t = this.getCurRoomData(), e = {
type: (null == t ? void 0 : t.vrRoomLv) + 1,
flag: 0
};
this.sendAddInfiniteCoinCnt();
this.getImpl(l.gf.IViewPlugin).openView(l.comm.UIs.InfiniteCoinUI, e, t => {
var e;
t ? null === (e = null == this ? void 0 : this.stopPopFunctionList) || void 0 === e || e.call(this) : this.popNextFunction();
});
} else this.popNextFunction();
}
popInfiniteCoinAwardFree() {
this.isPopInfiniteCoinAwardFree() ? this.sendGetInfiniteCoinAward() : this.popNextFunction();
}
isPopBuyInfiniteCoin() {
var t, e;
const i = this._infiniteCoinData;
let s = !1;
1 == (null == i ? void 0 : i.flag) && (null === (t = null == i ? void 0 : i.info) || void 0 === t ? void 0 : t.type) > 0 && (s = !((null === (e = null == i ? void 0 : i.info) || void 0 === e ? void 0 : e.cnt) > 0));
return s;
}
isPopInfiniteCoinAwardFree() {
var t;
const e = this._infiniteCoinData;
return 1 == (null == e ? void 0 : e.flag) && 0 == (null === (t = null == e ? void 0 : e.info) || void 0 === t ? void 0 : t.type);
}
LiabilityFreeGiftRespActPower(t) {}
respDiBao(t) {
this.endRequest(l.comm.AwardConfig.respDiBao.dataHead);
t && (t.key && "respDiBaoInfo" == t.key ? 1 == t.flag && t.info && t.info.maxCount > t.info.count ? this.getImpl(l.gf.IViewPlugin).openView(l.comm.UIs.DibaoUI, t.info, () => {
this.getImpl(l.comm.lobby.IJoinRoomModule).reqPlayerGameData();
this.popNextFunction();
}) : this.popNextFunction() : t.key && t.key);
}
respInfiniteCoin(t) {
var e, i;
if (t) if (t.key && "respInfiniteCoinInfo" == t.key) 1 == t.flag && (this._infiniteCoinData = t); else if (t.key && "respGetInfiniteCoinAward" == t.key) if (1 == t.flag) {
const i = {
type: t.info.type,
flag: 1,
newsr: t.info.newsr,
cnt: t.info.cnt
};
this.getImpl(l.gf.IViewPlugin).openView(l.comm.UIs.InfiniteCoinUI, i);
null === (e = null == this ? void 0 : this.stopPopFunctionList) || void 0 === e || e.call(this);
this._infiniteCoinAward = i;
} else null === (i = null == this ? void 0 : this.popNextFunction) || void 0 === i || i.call(this); else t.key && t.key;
}
respBankrupt(t) {
this.endRequest(l.comm.AwardConfig.respBankrupt.dataHead);
if (t && t.key && "respSKRevengeBankrupt" == t.key && 1 == t.flag) {
const t = this.getImpl(l.comm.lobby.IJoinRoomModule).getCurRoomData(), e = (null == t ? void 0 : t.vrRoomLv) + 1, i = null == t ? void 0 : t.minscore, s = {
gameid: l.comm.g.areaConfig.gameID,
roomlv: e,
mincarry: i
};
this._bankruptData = s;
this.popBankrupt();
} else this.popNextFunction();
}
onRespUseRCQ(t) {
this.endRequest(l.comm.AwardEventNames.RespTickGift.GET_USE_RCQ);
const e = this.getImpl(l.comm.lobby.IGiftModule).getTicketGift(t, l.comm.AwardCMD.RespTickGift.GET_USE_RCQ);
if (e && 0 == e.flag) {
console.log("onRespUseRCQ use success, stop pop flow");
this.stopPopFunctionList();
} else {
console.log("onRespUseRCQ use fail, continue pop flow");
this.popNextFunction();
}
}
checkGiftPop(t, e) {
let i = "";
for (const s of t) {
switch (s) {
case "FirstCharge":
{
const t = this.getImpl(l.comm.lobby.IPropManager).getPropById(o.Propid.FirstCharge);
let e = !1;
null == t ? e = !0 : 0 == (null == t ? void 0 : t.value) && (e = !0);
e && (i = s);
}
break;

case l.comm.UIs.FirstrechargeUI:
if ("gameContinue" === e || "gameAgain" === e) break;
l.comm.lobby.LobbyGameShareData.isFirstrechargePurchased() || (i = s);
break;

case "BankruptGift":
"gameEnd" === e ? i = s : "gameContinue" === e && null != this._bankruptData ? i = s : "gameAgain" === e && (i = s);
break;

case "StoreLayer":
case "InfiniteCoinAwardFree":
case "Dibao":
case "BigAward":
case "YunProtect":
i = s;
}
if ("" != i) break;
}
return i;
}
popFirstChargeInfo() {
this.getImpl(l.gf.IViewPlugin).openView(l.comm.UIs.FirstChargeGiftUI, t => {
console.log("关闭");
"close" === t ? this.popNextFunction() : "buy_success" === t && this.stopPopFunctionList();
}, "game", o.shuShuAnalytics.exposure_scene.result);
}
popFirstrechargeInfo() {
this.getImpl(l.gf.IViewPlugin).openView(l.comm.UIs.FirstrechargeUI, {
giftChainCloseCb: t => {
"close" === t ? this.popNextFunction() : "buy_success" === t && this.stopPopFunctionList();
},
openScene: "game",
exposureScene: o.shuShuAnalytics.exposure_scene.result
});
}
popBigAward() {
this.dispatch("onMsgBigAward" + s.GAME_ID, this.popNextFunction.bind(this));
}
isTopGameOpenTime() {
const t = this.getImpl(l.comm.lobby.ILobbyConfigManager).getTopGame(), e = Date.now(), i = new Date(Date.now()).setHours(t.sth, t.stm, 0, 0), s = new Date(Date.now()).setHours(t.edh, t.edm, 0, 0);
if (s > i) {
if (e > i && e <= s) return !0;
} else {
if (s == i) return !0;
if (e > i || e < s) return !0;
}
return !1;
}
isTopGame() {
const t = this.getImpl(l.comm.lobby.IJoinRoomModule).getCurRoomData();
return !(!t || "dianfeng" !== t.gamemode);
}
getTopGameRoomLv() {
const t = this.getImpl(l.comm.lobby.IJoinRoomModule).getRoomInfo(l.comm.g.gameIds.game_k7star);
if (null === t) return null;
let e = null;
for (let i = 0; i < t.length; i++) {
const s = t[i];
if (s && "dianfeng" === s.gamemode) {
e = s;
break;
}
}
return (null == e ? void 0 : e.vrRoomLv) || 4;
}
popEnterRoomGift(t, e) {
var i;
if (this.getImpl(l.comm.IHost).isTiShen()) {
this.getImpl(l.comm.ICommonDlgs).showWeakHint("云币不足");
return;
}
const s = (null === (i = l.comm.g.gameIds) || void 0 === i ? void 0 : i.game_lianyun) || 20831;
this.getImpl(l.comm.lobby.IGiftModule).reqEnterGift202603(e, t + 1, s, (i, s, a) => {
var n;
if (!i) {
console.error(s);
this.getImpl(l.comm.IHost).isSrsDebug() && this.getImpl(l.comm.ICommonDlgs).showCommonDlg(`请求进房礼包失败!${s}`);
return;
}
const _ = a, r = {
bigdata_payrate: a.bigdata_payrate,
bigdata_type: a.bigdata_type,
game_id: null === (n = l.comm.g.gameIds) || void 0 === n ? void 0 : n.game_k7star,
room_id: e,
level: t
};
this.getImpl(l.gf.IViewPlugin).openView(l.comm.UIs.EnterRoomGift202603, _, () => {
console.log("关闭");
}, o.shuShuAnalytics.exposure_scene.result, r);
});
}
getCurMaxSrScale() {
const t = this.getImpl(n.default).getSelf();
if (!t || !t.numid) return 0;
const e = Number(t.sr) || 0, i = this.getCurRoomData();
let s = (null == i ? void 0 : i.vrRoomLv) || 0;
const o = (null == i ? void 0 : i.minscore) || 0, a = (null == i ? void 0 : i.maxscore) || 0;
s += 1;
if (e < o) return 0;
if (a <= 0) return 0;
let l = 0;
l = Math.ceil(100 * e / a);
console.log(`getPopRechargeLayers levelid = ${s} sr = ${e}, minSr = ${o}`);
return l;
}
popGiveUpBigAward() {
this.dispatch("onMsgBigAward" + s.GAME_ID, this.popNextFunction.bind(this));
}
popYunProtect() {
this._tableData.getShowPopYunTips() ? this.popNextFunction() : this._gameActModule.reqPowerProps(l.comm.AwardCMD.PowerProps.CMD_PP_CONFIG);
}
popTitleAward() {
const t = this._tableData.gameLogicData.getTitleAwardData();
if (!t) {
this.popNextFunction();
return;
}
const e = {
value: t,
awardType: o.ProductItemList.GOLD
}, i = this._tableData.getTitleType(a.SELF_LOCAL_SEAT) || 0, n = this._tableData.getTitleRank(a.SELF_LOCAL_SEAT) || 0;
this.getImpl(l.comm.lobby.IGiftModule).updatePlayerData();
this.getImpl(l.comm.ICommonDlgs).showAwardUI([ e ], 0, () => {
this._tableData.gameLogicData.setTitleAwardData(0);
console.log("popTitleAward showAwardUI call");
const t = this._tableData.getSelf();
t && t.isVaildPlayer() && this.dispatch("updateSetSelfSR" + s.GAME_ID);
this.popNextFunction();
}, null, null, {
MingRenTangTitleType: i,
MingRenTangTitleRank: n
});
}
onPowerPropYP(t) {
let e = !1;
const i = this._gameActModule.getYpConfig() || {};
do {
if (!i.openR || 0 == i.openR) break;
if (t.sr <= 0) break;
e = !0;
} while (0);
if (!e) {
this.popNextFunction();
return;
}
const o = t.sr, a = i.crasr || 0, n = i.craRate || 0, _ = this._tableData.gameLogicData.getYunProtectInfo();
if (null === _) {
console.error("ypInfo is null");
this.popNextFunction();
return;
}
const r = _._old_sr, d = this.getImpl(l.comm.lobby.IPropManager).getPropCnt(l.comm.Propid.ProtectToken);
console.log("onPowerPropYP cnt:", d, ",diffSrr:", o, ",craRate:", n, ",oldSr:", r);
this._tableData.setShowYPBackBtn(!0);
this.dispatch("onShowBtnYPBack" + s.GAME_ID, !0);
if (0 != t.ingame) return;
let h = !1;
o >= a && n > 0 && r > 0 && 100 * o / r >= n && (h = !0);
d > 0 ? h ? this.getImpl(l.gf.IViewPlugin).openView("YunProtectTips", o, i, this._tableData.getShuShuPowerPropSource(), s.GAME_ID, this._tableData.getSelf().sr, t => {
if ("usesuccess" !== t) {
"close" == t && this._tableData.setShowPopYunTips(!0);
this.popNextFunction();
}
}, null) : this.popNextFunction() : h ? this.getImpl(l.gf.IViewPlugin).openView("YunProtectTips", o, i, this._tableData.getShuShuPowerPropSource(), s.GAME_ID, this._tableData.getSelf().sr, t => {
console.log("onBtnYPProp YunProtectTips closeType:", t, ",diffSr:", o);
if ("buysuccess" === t) this.getImpl(l.comm.lobby.IGiftModule).reqUserPropInLobby(1, l.comm.Propid.ProtectToken, s.GAME_ID); else {
"close" == t && this._tableData.setShowPopYunTips(!0);
this.popNextFunction();
}
}, null, !0) : this.popNextFunction();
}
onRespUserProp(t) {
console.log("onPowerPropYP onRespUserProp data:", JSON.stringify(t));
this._gameActModule.reqPowerProps(l.comm.AwardCMD.PowerProps.CMD_YP_PRO_AWARD);
}
onPowerPropYPAward(t) {
if (0 != t.flag) {
this.popNextFunction();
return;
}
this.getImpl(l.comm.lobby.IGiftModule).updatePlayerData();
const e = {
value: t.award,
awardType: o.ProductItemList.GOLD
};
this.getImpl(l.comm.ICommonDlgs).showAwardUI([ e ], 0, () => {
this._tableData.setShowYPBackBtn(!1);
this.dispatch("onShowBtnYPBack" + s.GAME_ID, !1);
this.dispatch("updateSetSelfSR" + s.GAME_ID);
this.dispatch("onShowLightAni" + s.GAME_ID, a.SELF_LOCAL_SEAT, !0);
console.log("onPowerPropYPAward showAwardUI call");
this.popNextFunction();
});
const i = this.getImpl(l.comm.lobby.IPropManager).getPropCnt(l.comm.Propid.ProtectToken);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newprop_use, {
page_name: "局外触发成功",
gold_num: t.award,
gold_gift_num: 0,
prop_num: i,
gameid: s.GAME_ID
});
}
onHidePowerPropPop() {
this.getImpl(l.gf.IViewPlugin).closeView("YunProtectGift");
this.getImpl(l.gf.IViewPlugin).closeView("DoublePropGift");
}
};
h([ l.gf.listen("KW_GameNextRound") ], c.prototype, "resetUI", null);
h([ l.gf.listen(l.comm.RoomToGameEventName.EVENT_RTG_UPDATE_SR) ], c.prototype, "onUpdateSR", null);
h([ l.gf.listen(l.comm.AwardConfig.respDiBao.dataHead) ], c.prototype, "respDiBao", null);
h([ l.gf.listen(l.comm.AwardConfig.respInfiniteCoin.dataHead) ], c.prototype, "respInfiniteCoin", null);
h([ l.gf.listen(l.comm.AwardConfig.respBankrupt.dataHead) ], c.prototype, "respBankrupt", null);
h([ l.gf.listen(l.comm.AwardEventNames.RespTickGift.GET_USE_RCQ) ], c.prototype, "onRespUseRCQ", null);
h([ l.gf.listen(l.comm.AwardEventNames.PowerProps.CMD_PP_CONFIG) ], c.prototype, "onPowerPropYP", null);
h([ l.gf.listen(l.comm.Events.EventYunProtectToken) ], c.prototype, "onRespUserProp", null);
h([ l.gf.listen(l.comm.AwardEventNames.PowerProps.CMD_YP_PRO_AWARD) ], c.prototype, "onPowerPropYPAward", null);
h([ l.gf.listen("onHidePowerPropPop" + s.GAME_ID) ], c.prototype, "onHidePowerPropPop", null);
const g = c = h([ l.gf.bean() ], c);
},
"./bin/ui/activity/BankruptInGame.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => m
});
var s = i("./bin/config/CardCode.js"), a = i("./bin/config/CardType.js"), n = i("./bin/config/GameConfig.js"), l = i("./bin/config/GameDefine.js"), _ = i("./bin/data/TableData.js"), r = i("./bin/gf.js"), d = i("./bin/logic/moudles/GameLogicManager.js"), h = i("./bin/logic/protocol/GLProtocol.js"), c = i("./bin/ui/component/CardComb.js"), g = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let u = class extends r.gf.mvc.UIController {
constructor() {
super(...arguments);
this.shopItemInfo = [];
this.leftTime = 0;
this.mCallback = null;
this.successCB = null;
this._again = !1;
this._tingInfo = [];
this.updateCountdown = () => {
this.subView.KW_TextDaojishi.text = `${this.leftTime}秒`;
this.subViewRetain.KW_BtnShowBanRupt.KW_TextZS.text = `补云币（${this.leftTime}）`;
this.leftTime--;
if (this.leftTime <= 0) {
this.stopCountdown();
this.onBtnClose();
}
};
}
onUIBinded() {
this._tableData = this.getImpl(_.default);
this.subView = this.view.KW_CompBankrupt;
this.addClick(this.subView.KW_BtnClose, this.onBtnShowRetain);
this.addClick(this.subView.KW_BtnBuy_0, () => {
this.onBuyBtn(0);
});
this.addClick(this.subView.KW_BtnBuy_1, () => {
this.onBuyBtn(1);
});
this.addClick(this.subView.KW_BtnBuy_2, () => {
this.onBuyBtn(2);
});
this.subViewRetain = this.view.KW_ComRetain;
this.addClick(this.subViewRetain.KW_BtnGiveUp, () => {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_secondarypayment, {
secondarypayment_click: "2：放弃"
});
this.onBtnClose();
});
this.addClick(this.subViewRetain.KW_BtnShowBanRupt, this.onBtnShowBanRupt);
this._tingInfo = [];
}
initUI(t) {
this.getImpl(o.IReportEventUtil).saveViewNameAndEventId("BankruptInGame");
this._tingInfo = [];
this.gameLogicManager = this.getImpl(d.default);
this.mCallback = t;
this.leftTime = this._tableData.getRoundResult()._broken_time || 30;
this._again = !1;
this.successCB = null;
const e = this.getGiftConfig(), i = null == e ? void 0 : e.products;
if (i && 3 == (null == i ? void 0 : i.length)) {
console.log("BankruptInGame initUI:", i);
for (let t = 0; t < i.length; t++) {
const e = i[t];
this.updateAllData(!0, e, t);
}
this.startCountdown();
const t = {};
t.exposure_scene = o.shuShuAnalytics.exposure_scene.game;
t.layerName = "七星宝牌局中破产礼包";
const e = [];
for (let t = 0; t < this.shopItemInfo.length; t++) this.shopItemInfo[t] && e.push(this.shopItemInfo[t].id);
t.goods_id = e;
this.getImpl(o.IReportEventUtil).openPayPageEvent("BankruptInGame", t);
} else {
console.log("BankruptInGame initUI:error goods_id=" + i);
this.closeView("close");
}
this.subView.KW_TingTips.visible = !1;
const s = this._tableData.getNowTingInfo();
this.rebuildTingInfo(s);
const a = this.isPopAct();
if (a.isPop) {
const t = a.totalMult, e = a.totalWinCard, i = this._tableData.getBaseInfo()._base_score;
this.subView.KW_TingTips.visible = !0;
const s = t * i;
this.subView.KW_TingTips.text = `还可和k${e}k张， 预计收益k${r.comm.StringUtils.dealBigNumEx5(s)}`;
}
this.getImpl(r.comm.lobby.IMingRenTangManager).reqMingRenTangUser();
}
onDestroy() {
this.mCallback = null;
}
onEventMingRenTangUser(t) {
console.log(`名人堂用户:${t}`);
if (t.titleType && t.titleType > 0) {
const e = this.getImpl(r.comm.lobby.IMingRenTangManager).getMingRenTangTitleAwardByType(t.titleType);
if (e && e.JZZ) {
this.view.KW_CompBankrupt.C_ShowMingRenTangAward.setSelectedIndex(1);
this.view.KW_CompBankrupt.KW_MingRenTang_TitleAward.setVar("count", `${e.JZZ}`).flushVars();
this.view.KW_CompBankrupt.KW_MingRenTang_Title.C_Type.setSelectedIndex(t.titleType);
t.titleType >= 4 && t.titleType <= 5 && this.view.KW_CompBankrupt.KW_MingRenTang_Title["KW_RankNo_" + t.titleType] && (this.view.KW_CompBankrupt.KW_MingRenTang_Title["KW_RankNo_" + t.titleType].text = `第${t.titleNo}名`);
} else this.view.KW_CompBankrupt.C_ShowMingRenTangAward.setSelectedIndex(0);
} else this.view.KW_CompBankrupt.C_ShowMingRenTangAward.setSelectedIndex(0);
}
onEventMingRenTangEndTime(t) {
var e, i, s, o;
console.log(`名人堂倒计时:${t}`);
if (null === (i = null === (e = this.view) || void 0 === e ? void 0 : e.KW_CompBankrupt) || void 0 === i ? void 0 : i.KW_MingRenTang_LastTime) if (t < 60 && t > 0) {
this.view.KW_CompBankrupt.KW_MingRenTang_LastTimeBg.visible = !0;
const e = t < 10 ? `0${t}` : t;
this.view.KW_CompBankrupt.KW_MingRenTang_LastTime.text = `剩余00:${e}`;
} else {
this.view.KW_CompBankrupt.KW_MingRenTang_LastTimeBg.visible = !1;
t <= 0 && (null === (o = null === (s = this.view) || void 0 === s ? void 0 : s.KW_CompBankrupt) || void 0 === o ? void 0 : o.C_ShowMingRenTangAward) && this.view.KW_CompBankrupt.C_ShowMingRenTangAward.setSelectedIndex(0);
}
}
onBuyBtn(t) {
const e = this.getImpl(r.comm.lobby.IUserManager).hostSr || 0, i = this.getImpl(r.comm.IHost).getCostHostSr(this.shopItemInfo[t].parprice || 0);
console.log("onBuyBtn start:", e, i);
this.gameLogicManager.sendGiveUp(h.GLProtocol.msgGiveUp.eFlag.FLAG_RECHARGE);
this.successCB = () => {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_goods_clicks_qxbp, {
exposure_scene: o.shuShuAnalytics.exposure_scene.game,
goods_id: this.shopItemInfo[t].id,
name: this.shopItemInfo[t].name,
[o.shuShuAnalytics.ui_name.__name]: o.shuShuAnalytics.ui_name.bankrupt
});
this.closeView("buy_success");
};
const s = this.getImpl(r.comm.lobby.IMingRenTangManager).getUserInfo();
if (this.shopItemInfo[t].ext) {
if ("string" == typeof this.shopItemInfo[t].ext && "" !== this.shopItemInfo[t].ext) try {
this.shopItemInfo[t].ext = JSON.parse(this.shopItemInfo[t].ext);
} catch (e) {
console.error("解析ext字段失败:", e);
this.shopItemInfo[t].ext = {};
}
} else this.shopItemInfo[t].ext = {};
if ((null == s ? void 0 : s.titleType) && s.titleType > 0) {
const e = this.getImpl(r.comm.lobby.IMingRenTangManager).getMingRenTangTitleAwardByType(s.titleType);
e && (this.shopItemInfo[t].ext.qxmrt = {
type: s.titleType,
enterRoomSr: e.enterRoomSr
});
}
o.CommFunc.setExtEventId(this.shopItemInfo[t], this.getImpl(o.IReportEventUtil).getViewNameAndEventId("BankruptInGame"));
this.getImpl(r.comm.IHostAdapt).getAdapt().checkHostSrAndPay(this.shopItemInfo[t], () => {
this.openLoading("返回游戏中...");
console.log("StoreTh checkPay success:", this.shopItemInfo[t].id, this.shopItemInfo[t].price);
console.log("StoreYun checkExchange pay success:", this.shopItemInfo[t].id, this.shopItemInfo[t].parprice);
}, null, !1);
}
onBtnClose() {
this.closeView("close");
}
onBtnShowRetain() {
const t = this.isPopAct();
if (this._again || !t.isPop) {
this.closeView("close");
return;
}
this._again = !0;
const e = this._tableData.getBaseInfo()._base_score, i = t.totalMult, s = i * e, a = t.maxType;
this.subViewRetain.visible = !0;
this.subView.visible = !1;
this.subViewRetain.KW_TipsMultScore.text = `预计还可和k${r.comm.StringUtils.dealBigNumEx5(i)}倍k赢k${r.comm.StringUtils.dealBigNumEx5(s)}k云币，要放弃吗？`;
const n = this._tableData.getBombCardsSelf(), _ = this._tableData.getHandCards(l.SELF_LOCAL_SEAT);
if (n._bomb_count > 0) {
this.subViewRetain.C_bBomb.selectedIndex = 1;
this.subViewRetain.KW_TextBombMult.text = `x${n._mult}`;
if (n._tower_count > 0) {
this.subViewRetain.KW_ImgBombCnt.visible = !0;
this.subViewRetain.KW_TextBombCnt.visible = !0;
this.subViewRetain.KW_TextBombCnt.text = `${n._tower_count}`;
} else {
this.subViewRetain.KW_ImgBombCnt.visible = !1;
this.subViewRetain.KW_TextBombCnt.visible = !1;
}
for (let t = 0; t < _.length; t++) {
const e = _[t], i = this.subViewRetain["KW_Card" + t];
c.default.setCard(i, e);
}
for (let t = 0; t < 4; t++) {
const e = n._bomb_cards[t], i = this.subViewRetain["KW_Card" + (t + 3)];
c.default.setCard(i, e);
}
} else {
this.subViewRetain.C_bBomb.selectedIndex = 0;
for (let t = 0; t < _.length; t++) {
const e = _[t], i = this.subViewRetain["KW_Card" + t];
c.default.setCard(i, e);
}
this.subViewRetain.KW_ImgBombCnt.visible = !1;
this.subViewRetain.KW_TextBombCnt.visible = !1;
}
const d = this.getCardTypeUrl(a);
this.subViewRetain.KW_Type.text = `${d}`;
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_secondarypayment, {
secondarypayment_ui: "0：挽留页曝光"
});
}
getCardTypeUrl(t) {
var e;
return (null === (e = null === a.CardTypeInfo || void 0 === a.CardTypeInfo ? void 0 : a.CardTypeInfo[t]) || void 0 === e ? void 0 : e[1]) || "";
}
onBtnShowBanRupt() {
this.getImpl(r.comm.lobby.IMingRenTangManager).reqMingRenTangUser();
this.subViewRetain.visible = !1;
this.subView.visible = !0;
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_secondarypayment, {
secondarypayment_click: "1：补云币"
});
}
closeView(t) {
this.mCallback && this.mCallback(t);
"buy_success" !== t && this.gameLogicManager.sendGiveUp(h.GLProtocol.msgGiveUp.eFlag.FLAG_GIVE_UP);
this.stopCountdown();
this.close();
}
getGiftConfig() {
const t = this.getImpl(_.default).getBankruptInGameConfig();
if (t && 1 == t.open && t.products) return t;
this.gameLogicManager.sendGiveUp(h.GLProtocol.msgGiveUp.eFlag.FLAG_GIVE_UP);
return null;
}
updateAllData(t, e, i) {
var s, a;
if (!t) {
null == this || this.getImpl(r.comm.ICommonDlgs).showWeakHint("获取数据为空！");
this.closeView("error");
return;
}
this.shopItemInfo[i] = e;
const n = e;
if (n) {
const t = {
rmbName: "元"
}, l = this.getImpl(r.comm.IHostAdapt).getAdapt().getCostInfoByPayMode(n, t);
this.subView["KW_TextGoods_" + i].text = `x${r.comm.StringUtils.dealBigNumEx5(n.itemqty)}`;
this.subView["KW_BtnBuy_" + i].C_PayMode.setSelectedIndex(l.selectIndex);
this.subView["KW_BtnBuy_" + i].KW_TextZS.text = `${l.costName}k复活`;
console.log("updateAllData:", e);
const _ = this.getGiftConfig(), d = this.getImpl(r.comm.lobby.IJoinRoomModule).getJoinRoomData(), h = d.roomid || 0, c = d.gameid || 0;
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_goods_exposure_qxbp, {
exposure_scene: o.shuShuAnalytics.exposure_scene.game,
goods_id: this.shopItemInfo[i].id,
name: this.shopItemInfo[i].name,
[o.shuShuAnalytics.ui_name.__name]: o.shuShuAnalytics.ui_name.bankrupt,
game_id: c,
room_id: h,
bigdata_type: null == _ ? void 0 : _.bigdata_type,
bigdata_payrate: null == _ ? void 0 : _.bigdata_payrate
});
try {
const t = JSON.parse(null !== (s = null == n ? void 0 : n.sendrich) && void 0 !== s ? s : "[]");
n.sendrich = t;
const e = JSON.parse(null !== (a = null == n ? void 0 : n.ext) && void 0 !== a ? a : "[]");
n.ext = e;
} catch (t) {
console.log("Game updateAllData fail:" + (null == n ? void 0 : n.sendrich));
}
const g = (null == n ? void 0 : n.sendrich) || [];
let u = null, m = 0;
for (const t of g) if ("gift_jzz_{numid}" == (null == t ? void 0 : t.key)) {
u = t;
break;
}
if (u && u.value && u.value > 0) {
m = u.value;
this.subView["KW_TextCnt_" + i].visible = !0;
this.subView["KW_TextTips_" + i].visible = !0;
this.subView["KW_Tips_" + i].visible = !0;
this.subView["KW_TextCnt_" + i].text = `x${m}`;
this.subView["KW_TextTips_" + i].text = `免输${m}次`;
} else {
this.subView["KW_TextCnt_" + i].visible = !1;
this.subView["KW_TextTips_" + i].visible = !1;
this.subView["KW_Tips_" + i].visible = !1;
}
0 == i && (u && u.value && u.value > 0 ? this.subView.KW_Icon_0.url = "ui://Game_K7Star_Bankrupt_InGame/ImgWupin02" : this.subView.KW_Icon_0.url = "ui://Game_K7Star_Bankrupt_InGame/ImgWupin01");
}
}
startCountdown() {
this.updateCountdown();
this.schedule(this.updateCountdown, 1);
}
stopCountdown() {
this.unschedule(this.updateCountdown);
}
openLoading(t) {
var e;
this.closeLoading();
null === (e = this.getImpl(r.comm.IWaiting)) || void 0 === e || e.setTask({
name: r.comm.WaitingCommon + "1",
tip: t,
time: 1
});
}
closeLoading() {
var t;
null === (t = this.getImpl(r.comm.IWaiting)) || void 0 === t || t.onComplete(r.comm.WaitingCommon + "1", !0);
}
onMsgTimer(t) {
t._type === l.ENUM_GAME_STATE.GS_BROKEN && (this.leftTime = t._time);
}
onMsgGiveUp(t) {
if (t._flag === h.GLProtocol.msgGiveUp.eFlag.FLAG_GO_ON && this.getImpl(_.default).seatToLocal(t._seat) == l.SELF_LOCAL_SEAT) {
this.closeLoading();
this.successCB && this.successCB();
}
}
isPopAct() {
const t = {
isPop: !1,
totalMult: 0,
totalWinCard: 0,
maxType: 0
}, e = this._tableData.getNowTingInfo(), i = this.getGiftConfig();
if (e) {
const e = r.comm.Util.clone(this._tingInfo);
let s = 0, o = 0, a = 0, n = 0;
const l = e.length;
for (let t = 0; t < l; t++) {
if (e[t].cnt > 0 && a < e[t].mult) {
a = e[t].mult;
n = e[t].ct;
}
s += e[t].mult * e[t].cnt;
o += e[t].cnt;
}
if (i && o >= i.minCnt && s >= i.minMult) {
t.isPop = !0;
t.maxType = n;
t.totalMult = s;
t.totalWinCard = o;
}
}
return t;
}
rebuildTingInfo(t) {
var e;
const i = [], o = this._tableData.getCardLogicData(), a = (null == t ? void 0 : t._count) || 0;
for (let n = 0; n < a; n++) {
const a = t._ct[n], l = t._hu_cards[n], _ = t._mult[n];
let r = t._hu_card_left_count[n];
r < 0 && (r = 0);
if (l === s.CardValue.CV_SJ) {
const t = r, e = o.getCardPower(s.CardID.CID_SJ);
i.push({
power: e,
mult: _,
cvs: [ s.CardID.CID_SJ ],
cnt: t,
ct: a
});
} else if (l === s.CardValue.CV_GOLD) {
const t = (null === (e = this._tableData.getDeckCount()) || void 0 === e ? void 0 : e._gold_left_count) || 0, n = o.getCardPower(s.CardID.CID_GOLD);
i.push({
power: n,
mult: _,
cvs: [ s.CardID.CID_GOLD ],
cnt: t,
ct: a
});
} else {
l === s.CardValue.CV_A && console.log("");
const t = r, e = o.getCardPower(l);
i.push({
power: e,
mult: _,
cvs: [ l ],
cnt: t,
ct: a
});
}
}
i.sort((t, e) => (t.power > 14 || e.power > 14) && t.power != e.power ? e.power - t.power : t.mult != e.mult ? e.mult - t.mult : t.cnt != e.cnt ? e.cnt - t.cnt : 0);
this._tingInfo = i;
}
onMsgGameState(t) {
t._state != l.ENUM_GAME_STATE.GS_BROKEN && t._state != l.ENUM_GAME_STATE.GS_WAIT && this.closeView("close");
}
};
g([ r.gf.listen(r.comm.Events.EventMingRenTangUser) ], u.prototype, "onEventMingRenTangUser", null);
g([ r.gf.listen(r.comm.Events.EventMingRenTangEndTime) ], u.prototype, "onEventMingRenTangEndTime", null);
g([ r.gf.listen("onMsgTimer" + n.GAME_ID) ], u.prototype, "onMsgTimer", null);
g([ r.gf.listen("onMsgGiveUp" + n.GAME_ID) ], u.prototype, "onMsgGiveUp", null);
g([ r.gf.listen("onMsgGameState" + n.GAME_ID) ], u.prototype, "onMsgGameState", null);
const m = u = g([ r.gf.controller({
name: "BankruptInGame",
module: "game_k7star",
fguiObject: "View",
layer: r.gf.ViewLayer.Tip,
fguiPackage: [ "Game_K7Star_Bankrupt_InGame" ],
cachable: !1
}) ], u);
},
"./bin/ui/activity/RechargeInGame.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => c
});
var s, a = i("./bin/config/GameConfig.js"), n = i("./bin/config/GameDefine.js"), l = i("./bin/data/TableData.js"), _ = i("./bin/gf.js"), r = i("./bin/logic/protocol/GLProtocol.js"), d = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let h = s = class extends _.gf.mvc.UIController {
constructor() {
super(...arguments);
this.allShopItemInfos = null;
this.shopItemInfo = null;
this.mCallback = null;
}
onUIBinded() {
this.subView = this.view.KW_CompRecharge;
this.itemViews = [];
for (let t = 0; t < s.PRODUCT_COUNT; t++) this.itemViews[t] = _.gf.FGUI.getChild(this.subView, `KW_Gift${t}`).asCom;
this.addClick(this.subView.KW_BtnClose, this.onBtnClose);
this.addClick(this.subView.KW_Gift0.KW_BtnBuy, this.onBtnBuy0);
this.addClick(this.subView.KW_Gift1.KW_BtnBuy, this.onBtnBuy1);
this.addClick(this.subView.KW_Gift2.KW_BtnBuy, this.onBtnBuy2);
}
initUI(t) {
this.getImpl(o.IReportEventUtil).saveViewNameAndEventId("RechargeInGame");
this.mCallback = t;
this.allShopItemInfos = this.getImpl(l.default).getRechargeInGameProducts();
const e = this.getImpl(_.comm.lobby.IUserManager).hostSr || 0, i = this.getSelfSr();
this.subView.KW_TextYun.text = _.comm.StringUtils.dealBigNumEx5(i);
this.subView.KW_TextZuan.text = _.comm.StringUtils.dealBigNumEx5(e);
const a = this.getImpl(_.comm.lobby.IJoinRoomModule).getJoinRoomData(), n = this.getImpl(_.comm.lobby.IJoinRoomModule).getCurRoomData(), r = (null == n ? void 0 : n.gameId) || _.comm.g.gameIds.game_k7star, d = a.roomid || 0;
if (this.allShopItemInfos && this.allShopItemInfos.goods && this.allShopItemInfos.goods.length === s.PRODUCT_COUNT) {
for (let t = 0; t < this.allShopItemInfos.goods.length; t++) {
const e = this.allShopItemInfos.goods[t], i = this.getImpl(_.comm.IHostAdapt).getAdapt().getCostInfoByPayMode(e), s = this.itemViews[t], a = `animation${t + 1}`;
_.gf.sp.onSpineLoaded(s.KW_AniIcon, t => {
t.premultipliedAlpha = !1;
t.loop = !0;
t.animation = a;
t.setCompleteListener(() => {});
});
s.C_GiftType.setSelectedIndex(t);
s.KW_BtnBuy.KW_TextPrice.text = `${i.costName}`;
s.KW_BtnBuy.C_PayMode.setSelectedIndex(i.selectIndex);
console.log(`xx sr:${e.itemqty}`);
s.KW_TxtSr.text = _.comm.StringUtils.dealBigNumEx5(e.itemqty) + "云币";
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_goods_exposure, {
exposure_scene: "4:游戏内弹出",
goods_id: e.id,
name: e.name,
game_id: r || 0,
room_id: d || 0,
bigdata_type: "",
bigdata_payrate: 0,
[o.shuShuAnalytics.ui_name.__name]: o.shuShuAnalytics.ui_name.rechargeInGame
});
}
const t = {};
t.exposure_scene = o.shuShuAnalytics.exposure_scene.game;
t.layerName = "七星宝牌局中补充";
const e = [];
for (let t = 0; t < this.allShopItemInfos.goods.length; t++) e.push(this.allShopItemInfos.goods[t].id);
t.goods_id = e;
this.getImpl(o.IReportEventUtil).openPayPageEvent("RechargeInGame", t);
} else this.getImpl(_.comm.ICommonDlgs).showWeakHint("商品读取异常失败，请稍后再试！");
}
onDestroy() {
this.mCallback = null;
}
getSelfSr() {
let t = 0;
const e = this.getImpl(l.default).getSelf();
return t = e && e.numid ? e.sr : this.getImpl(_.comm.lobby.IUserManager)._userManager.userScore;
}
onUpdateRechargeSr(t) {
this.subView.KW_TextYun.text = _.comm.StringUtils.dealBigNumEx5(t);
}
onBtnBuy0() {
this.shopItemInfo = this.allShopItemInfos.goods[0];
this.onBtnBuy();
}
onBtnBuy1() {
this.shopItemInfo = this.allShopItemInfos.goods[1];
this.onBtnBuy();
}
onBtnBuy2() {
this.shopItemInfo = this.allShopItemInfos.goods[2];
this.onBtnBuy();
}
onBtnBuy() {
this.dispatch("onRechargeState" + a.GAME_ID, r.GLProtocol.msgRechargeState.eFlag.FLAG_START);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_goods_clicks, {
pay_scene: "4:游戏内弹出",
goods_id: this.shopItemInfo.id,
name: this.shopItemInfo.name,
[o.shuShuAnalytics.ui_name.__name]: o.shuShuAnalytics.ui_name.rechargeInGame
});
const t = this.getSelfSr();
o.CommFunc.setExtEventId(this.shopItemInfo, this.getImpl(o.IReportEventUtil).getViewNameAndEventId("RechargeInGame"));
this.getImpl(_.comm.IHostAdapt).getAdapt().checkHostSrAndPay(this.shopItemInfo, () => {
console.log("RechargeInGame onBtnBuy success:", this.shopItemInfo.id, this.shopItemInfo.parprice);
this.closeLoading();
const e = this.shopItemInfo.itemqty, i = Number(t) + Number(e);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_goldadd_use, {
gold_num: e,
before_score: t,
after_score: i.toString()
});
this.closeView(e);
this.dispatch("onRechargeState" + a.GAME_ID, r.GLProtocol.msgRechargeState.eFlag.FLAG_END);
this.dispatch("onCancelBigAward" + a.GAME_ID);
}, () => {
console.log("RechargeInGame onBtnBuy fail:", this.shopItemInfo.id, this.shopItemInfo.parprice);
this.closeLoading();
this.dispatch("onRechargeState" + a.GAME_ID, r.GLProtocol.msgRechargeState.eFlag.FLAG_END);
this.dispatch("onCancelBigAward" + a.GAME_ID);
}, !1);
}
onBtnClose() {
this.closeView(0);
}
closeView(t) {
this.dispatch("onRechargeState" + a.GAME_ID, r.GLProtocol.msgRechargeState.eFlag.FLAG_END);
this.mCallback && this.mCallback(t);
this.close();
}
openLoading(t) {
var e;
this.closeLoading();
null === (e = this.getImpl(_.comm.IWaiting)) || void 0 === e || e.setTask({
name: _.comm.WaitingCommon,
tip: t
});
}
closeLoading() {
var t;
null === (t = this.getImpl(_.comm.IWaiting)) || void 0 === t || t.onComplete(_.comm.WaitingCommon, !0);
}
onMsgTotalResult() {
this.onBtnClose();
}
};
h.PRODUCT_COUNT = 3;
d([ _.gf.listen("onUpdateRechargeSr" + a.GAME_ID) ], h.prototype, "onUpdateRechargeSr", null);
d([ _.gf.listen("onMsgTotalResult" + a.GAME_ID) ], h.prototype, "onMsgTotalResult", null);
const c = h = s = d([ _.gf.controller({
name: "RechargeInGame",
module: "game_k7star",
fguiObject: "View",
layer: _.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_Recharge" ],
cachable: !1,
sortingOrder: n.FGUI_ORDER.GAME_PLAYER
}) ], h);
},
"./bin/ui/activity/Turntable.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => l
});
var s = i("./bin/gf.js"), a = i("./bin/logic/actModules/GameActModule.js");
let n = class extends s.gf.mvc.UIController {
constructor() {
super(...arguments);
this.curAwardData = null;
}
onUIBinded() {
this.view.C_Play_Ani.selectedIndex = 0;
this.addClick(this.view.KW_BTN_CLOSE, this.onBtnClose);
this.addClick(this.view.KW_BTN_SHOW_PROB, this.onBtnShowProb);
this.addClick(this.view.KW_PROB_TIP.KW_BTN_CLOSE_PROB_TIP, this.onBtnCloseProbTip);
this.view.KW_T1.setHook("finish", () => {
this.setItemAward(1);
});
this.view.KW_T2.setHook("finish", () => {
this.setItemAward(2);
});
this.view.KW_T3.setHook("finish", () => {
this.setItemAward(3);
});
this.view.KW_T4.setHook("finish", () => {
this.setItemAward(4);
});
this.view.KW_T5.setHook("finish", () => {
this.setItemAward(5);
});
this.view.KW_T6.setHook("finish", () => {
this.setItemAward(6);
});
this.view.KW_T7.setHook("finish", () => {
this.setItemAward(7);
});
this.view.KW_T8.setHook("finish", () => {
this.setItemAward(8);
});
}
initUI(t) {
var e;
if (t) {
this.view.C_Play_Ani.selectedIndex = null !== (e = t.awardIdx) && void 0 !== e ? e : 0;
this.view.C_Select_Type.selectedIndex = t.roomLv <= 1 ? 0 : t.roomLv - 2;
this.curAwardData = t;
this.initItemAward(t.awd);
}
}
initItemAward(t) {
for (const e in t) {
const i = t[e], o = this.view.KW_TURNTABLE.getChild(`KW_ITEM_${e}`).asCom;
o.getChild("KW_NAME").text = i.name;
1 == i.type ? o.getChild("KW_ICON").icon = "ui://Game_K7Star_Turntable/ImgJlYb" : 2 == i.type ? o.getChild("KW_ICON").icon = "ui://Game_K7Star_Turntable/ImgJlYq" : 3 == i.type ? o.getChild("KW_ICON").icon = s.comm.getProductItemUrlByType(s.comm.ProductItemList.PROP_NORMAL, i.id) : 4 == i.type && (o.getChild("KW_ICON").icon = "ui://Game_K7Star_Turntable/ImgJlGmflq");
}
}
setItemAward(t) {
this.scheduleOnce(() => {
this.close();
this.awardBox(this.curAwardData.awd[t]);
this.getImpl(a.default).getTurntableInfo();
}, 1);
}
awardBox(t) {
const e = [];
if (1 == t.type) {
const i = {
icon: "",
value: t.v,
desc: `${t.name}`,
awardType: o.ProductItemList.GOLD
};
e.push(i);
} else if (2 == t.type) {
const i = {
icon: "",
value: t.v,
awardType: o.ProductItemList.PROP_NORMAL,
propid: s.comm.Propid.DuiHuanQuan
};
e.push(i);
} else if (3 == t.type) {
const i = {
icon: "",
value: t.v,
awardType: o.ProductItemList.PROP_NORMAL,
propid: t.id
};
e.push(i);
} else if (4 == t.type) {
const i = {
icon: "ui://Game_K7Star_Turntable/ImgJlGmflq",
value: t.v,
desc: `${t.name}`,
awardType: o.ProductItemList.PROP_NORMAL
};
e.push(i);
}
this.getImpl(s.comm.ICommonDlgs).showAwardUI(e, 0);
this.getImpl(s.comm.lobby.IJoinRoomModule).reqPlayerGameData();
this.getImpl(s.comm.lobby.IPlayerGameDataManager).reqPlayerGameData();
this.getImpl(s.comm.lobby.IPropManager).reqUserProp();
}
onBtnShowProb() {
var t, e, i, s, o, a, n, l, _, r;
this.view.C_Show_Prop_Tip.selectedIndex = 1;
const d = this.curAwardData.awd;
if (1 == this.curAwardData.isSpecial) {
if (d) {
let o = 0;
for (const i in d) o += null !== (e = null === (t = null == d ? void 0 : d[i]) || void 0 === t ? void 0 : t.r) && void 0 !== e ? e : 0;
for (const t in d) {
const e = d[t], a = this.view.KW_PROB_TIP.getChild(`KW_ITEM_${t}`).asCom, n = this.view.KW_PROB_TIP.getChild(`KW_VAL_${t}`).asCom;
a.text = e.name;
const l = null !== (s = null === (i = null == d ? void 0 : d[t]) || void 0 === i ? void 0 : i.r) && void 0 !== s ? s : 0;
n.text = 0 == l ? "0.01%" : `${Math.floor(l / o * 100)}%`;
}
}
} else {
const t = this.curAwardData.rechargeIdx;
if (d && t >= 1) {
let e = 0;
for (const i in d) e += null !== (n = null === (a = null === (o = null == d ? void 0 : d[i]) || void 0 === o ? void 0 : o.r) || void 0 === a ? void 0 : a[t - 1]) && void 0 !== n ? n : 0;
for (const i in d) {
const s = d[i], o = this.view.KW_PROB_TIP.getChild(`KW_ITEM_${i}`).asCom, a = this.view.KW_PROB_TIP.getChild(`KW_VAL_${i}`).asCom;
o.text = s.name;
const n = null !== (r = null === (_ = null === (l = null == d ? void 0 : d[i]) || void 0 === l ? void 0 : l.r) || void 0 === _ ? void 0 : _[t - 1]) && void 0 !== r ? r : 0;
a.text = 0 == n ? "0.01%" : `${Math.floor(n / e * 100)}%`;
}
}
}
}
onBtnCloseProbTip() {
this.view.C_Show_Prop_Tip.selectedIndex = 0;
}
onDestroy() {}
};
const l = n = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
}([ s.gf.controller({
name: "Turntable",
module: "game_k7star",
fguiObject: "View",
layer: s.gf.ViewLayer.Tip,
fguiPackage: [ "Game_K7Star_Turntable" ],
cachable: !1
}) ], n);
},
"./bin/ui/activity/WinningGiftInGame.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => l
});
var s = i("./bin/data/TableData.js"), a = i("./bin/gf.js");
let n = class extends a.gf.mvc.UIController {
constructor() {
super(...arguments);
this._shopItemArr = [];
}
get mainView() {
return this.view.KW_Main;
}
onUIBinded() {
this.addClick(this.mainView.KW_BtnClose, this.close);
this.addClick(this.mainView.KW_BtnBuy1, () => {
this.onBuyBtn(0);
});
this.addClick(this.mainView.KW_BtnBuy2, () => {
this.onBuyBtn(1);
});
}
initUI() {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_qxjpq_qxbp, {
[o.shuShuAnalytics.game_event_ui_jpq.__name]: o.shuShuAnalytics.game_event_ui_jpq.ui_winningGift
});
const t = this.getImpl(s.default).getWinningGiftInGameConfig();
[ "gift1", "gift2" ].forEach((e, i) => {
var s;
const o = null !== (s = t[e].productId) && void 0 !== s ? s : 0;
this.getImpl(a.comm.lobby.IProductManager).getProductInfoSingle(o, (t, e) => {
this._shopItemArr[i] = e;
t && this.updateUI(t, e, i + 1);
}, !0);
});
}
updateUI(t, e, i) {
if (!t) {
null == this || this.getImpl(a.comm.ICommonDlgs).showWeakHint("获取数据为空！");
this.close();
return;
}
const s = this.getImpl(a.comm.IHostAdapt).getAdapt().getCostInfoByPayMode(e, {
rmbName: "k元"
});
this.mainView["KW_BtnBuy" + i].C_PayMode.setSelectedIndex(s.selectIndex);
this.mainView["KW_BtnBuy" + i].KW_TextZS.text = `${s.costName}`;
this.mainView["KW_TxtTitle" + i].text = e.name;
2 == i && this._updateGiftRich(e);
}
_updateGiftRich(t) {
var e, i;
this.mainView.KW_TxtTitle2.text = t.name;
try {
const i = JSON.parse(null !== (e = null == t ? void 0 : t.sendrich) && void 0 !== e ? e : "[]");
t.sendrich = i;
} catch (e) {
console.log("sendrich _updateGift2 fail:" + (null == t ? void 0 : t.sendrich));
}
const s = (null == t ? void 0 : t.sendrich) || [];
if (s.length > 0) {
const t = null !== (i = s[0].cnt) && void 0 !== i ? i : 0;
if (0 == t) {
null == this || this.getImpl(a.comm.ICommonDlgs).showWeakHint("奖励配置错误!");
this.close();
} else this.mainView.KW_TxtTitle3.text = `${a.comm.StringUtils.dealBigNumEx5(t)}云币`;
}
}
onBuyBtn(t) {
if (this._shopItemArr.length > t) {
const e = this._shopItemArr[t];
console.log("============= test =data== ", e);
this.getImpl(a.comm.IHostAdapt).getAdapt().checkHostSrAndPay(this._shopItemArr[t], () => {
console.log("StoreYun checkExchange pay success:", this._shopItemArr[t].id, this._shopItemArr[t].parprice);
this.close();
}, null, !1);
} else {
null == this || this.getImpl(a.comm.ICommonDlgs).showWeakHint("奖励配置错误!");
this.close();
}
}
};
const l = n = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
}([ a.gf.controller({
name: "WinningGiftInGame",
module: "game_k7star",
fguiObject: "View",
layer: a.gf.ViewLayer.Tip,
fguiPackage: [ "Game_K7Star_WinningGift_InGame" ],
cachable: !1
}) ], n);
},
"./bin/ui/activity/powerProp/DoublePropGift.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => _
});
var s = i("./bin/data/TableData.js"), a = i("./bin/gf.js"), n = i("./bin/logic/actModules/GameActModule.js");
let l = class extends a.gf.mvc.UIController {
constructor() {
super(...arguments);
this.shopItemInfo = null;
}
onUIBinded() {
this._tableData = this.getImpl(s.default);
this.initClick();
}
initUI(t) {
this.mCallback = t;
this.initMainUI();
}
initClick() {
this.addClick(this.view.KW_CompContent.KW_BtnClose, () => {
this.closeView("close");
});
this.addClick(this.view.KW_CompContent.KW_BtnDstBuy, this.onBtnBuy);
}
initMainUI() {
const t = this.getImpl(n.default).getDbConfig();
this.gid = t.pid1 || 0;
if (0 != this.gid) if (t.clv && t.clv <= 2) {
{
this.view.KW_CompContent.C_ShowLv.setSelectedIndex(t.clv - 1);
const e = 2 == t.clv ? 1 : 4;
this.view.KW_CompContent.KW_AniBg.visible = !0;
a.gf.sp.onSpineLoaded(this.view.KW_CompContent.KW_AniBg, t => {
t.setAnimation(0, `animation${e}`, !0);
});
}
this.getImpl(a.comm.lobby.IProductManager).getProductInfoSingle(this.gid, this.updateAllData.bind(this), !0);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newproppagen_exposure, {
page_name: "翻倍卡补充",
tips_type: "null",
gold_num: 0,
gold_gift_num: 0,
prop_num: 0,
source_sence: this._tableData.getShuShuPowerPropSource()
});
} else console.error("initMainUI:", t.clv); else console.error("initMainUI:", this.gid);
}
updateAllData(t, e) {
if (!t) {
null == this || this.getImpl(a.comm.ICommonDlgs).showWeakHint("获取数据为空！");
this.closeView("error");
return;
}
this.view.KW_CompContent.KW_BtnDstBuy.touchable = !0;
this.shopItemInfo = e;
if (!this.shopItemInfo) {
this.closeView("notdata");
return;
}
const i = this.getImpl(a.comm.IHostAdapt).getAdapt().getCostInfoByPayMode(this.shopItemInfo, {
rmbName: "元"
});
this.view.KW_CompContent.KW_BtnDstBuy.KW_TextBuy.text = `${i.costName}`;
this.view.KW_CompContent.KW_BtnDstBuy.KW_TextBuyDY.text = `${i.costName}`;
this.view.KW_CompContent.KW_BtnDstBuy.C_PayMode.setSelectedIndex(i.selectIndex);
const s = this.shopItemInfo.itemqty || 0;
this.view.KW_CompContent.KW_TextCnt.text = `x${s}`;
console.log("updateAllData:", e);
}
onBtnBuy() {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newproppagen_click, {
page_name: "翻倍卡补充",
tips_type: "null",
gold_num: 0,
gold_gift_num: 0,
prop_num: 0,
gameid: 0,
source_sence: this._tableData.getShuShuPowerPropSource()
});
this.getImpl(a.comm.lobby.IProductManager).getProductInfoSingle(this.gid, (t, e) => {
t ? this.getImpl(a.comm.IHostAdapt).getAdapt().checkHostSrAndPay(e, () => {
var t;
console.log("StoreYun checkExchange pay success:", this.gid, e.parprice);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_pay_scene, {
pay_scene: o.shuShuAnalytics.exposure_scene.result,
goods_id: e.id,
name: e.name,
[o.shuShuAnalytics.ui_name.__name]: o.shuShuAnalytics.ui_name.shop
});
const i = (null == e ? void 0 : e.richex) || "";
let s = 0;
"" != i && (s = a.comm.Util.parseJson(i).propid);
const n = (a.comm.getPropInfo(s) || {}).name || "";
this.getImpl(a.comm.ICommonDlgs).showWeakHint(`获得${n}x${(null === (t = this.shopItemInfo) || void 0 === t ? void 0 : t.itemqty) || 0}`);
this.closeView("buysuccess");
}, null, !1) : null == this || this.getImpl(a.comm.ICommonDlgs).showWeakHint("获取数据为空！");
}, !0);
}
closeView(t) {
this.mCallback && this.mCallback(t);
this.close();
}
};
const _ = l = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
}([ a.gf.controller({
name: "DoublePropGift",
module: "game_k7star",
fguiObject: "ViewDBGift",
layer: a.gf.ViewLayer.Tip,
fguiPackage: [ "Game_K7Star_Act_PowerProp" ],
cachable: !1
}) ], l);
},
"./bin/ui/activity/revive/ReviveView.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => m
});
var s = i("./bin/config/CardCode.js"), a = i("./bin/config/CardType.js"), n = i("./bin/config/GameConfig.js"), l = i("./bin/config/GameDefine.js"), _ = i("./bin/data/TableData.js"), r = i("./bin/gf.js"), d = i("./bin/logic/moudles/GameLogicManager.js"), h = i("./bin/logic/protocol/GLProtocol.js"), c = i("./bin/ui/component/CardComb.js"), g = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let u = class extends r.gf.mvc.UIController {
constructor() {
super(...arguments);
this.shopItemInfo = [];
this.leftTime = 0;
this.mCallback = null;
this.successCB = null;
this._again = !1;
this._tingInfo = [];
this.updateCountdown = () => {
if (this.leftTime >= 0) {
this.subView.KW_TextDaojishi.text = `${this.leftTime}秒`;
this.subViewRetain.KW_BtnShowBanRupt.KW_TextZS.text = `补云币（${this.leftTime}）`;
}
this.leftTime--;
if (this.leftTime < -1) {
this.stopCountdown();
this.onBtnClose();
}
};
}
onUIBinded() {
this._tableData = this.getImpl(_.default);
this.subView = this.view.KW_CompBankrupt;
this.addClick(this.subView.KW_BtnClose, this.onBtnShowRetain);
this.addClick(this.subView.KW_BtnBuy_0, () => {
this.onBuyBtn(0);
});
this.addClick(this.subView.KW_BtnBuy_1, () => {
this.onBuyBtn(1);
});
this.subViewRetain = this.view.KW_ComRetain;
this.addClick(this.subViewRetain.KW_BtnGiveUp, () => {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_secondarypayment, {
secondarypayment_click: "2：放弃"
});
this.onBtnClose();
});
this.addClick(this.subViewRetain.KW_BtnShowBanRupt, this.onBtnShowBanRupt);
this._tingInfo = [];
}
initUI(t) {
this._tingInfo = [];
this.getImpl(o.IReportEventUtil).saveViewNameAndEventId(r.comm.UIs.K7StarReviveView);
this.gameLogicManager = this.getImpl(d.default);
this.mCallback = t;
this.leftTime = this._tableData.getRoundResult()._broken_time || 30;
this._again = !1;
this.successCB = null;
const e = this.getGiftConfig();
console.log("ReviveView initUI:giftConfig:", e);
const i = null == e ? void 0 : e.products;
if (i && 2 == (null == i ? void 0 : i.length)) {
console.log("ReviveView initUI:", i);
for (let t = 0; t < i.length; t++) {
const e = i[t];
this.updateAllData(!0, e, t);
}
this.startCountdown();
const t = {};
t.exposure_scene = o.shuShuAnalytics.exposure_scene.game;
t.layerName = "七星宝牌局中复活礼包";
const e = [];
for (let t = 0; t < this.shopItemInfo.length; t++) this.shopItemInfo[t] && e.push(this.shopItemInfo[t].id);
t.goods_id = e;
this.getImpl(o.IReportEventUtil).openPayPageEvent(r.comm.UIs.K7StarReviveView, t);
} else {
console.log("ReviveView initUI:error goods_id=" + i);
this.closeView("close");
}
this.subView.KW_TingTips.visible = !1;
this.subView.KW_hu.visible = !1;
const s = this._tableData.getNowTingInfo();
this.rebuildTingInfo(s);
const a = this.isPopAct();
if (a.isPop) {
const t = a.totalMult, e = a.totalWinCard, i = this._tableData.getBaseInfo()._base_score;
this.subView.KW_TingTips.visible = !0;
this.subView.KW_hu.visible = !0;
const s = t * i;
this.subView.KW_TingTips.text = `还可和${e}张，预计收益${r.comm.StringUtils.dealBigNumEx5(s)}`;
}
this.getImpl(r.comm.lobby.IMingRenTangManager).reqMingRenTangUser();
}
onDestroy() {
this.mCallback = null;
}
onEventMingRenTangUser(t) {
console.log(`名人堂用户:${t}`);
if (t.titleType && t.titleType > 0) {
const e = this.getImpl(r.comm.lobby.IMingRenTangManager).getMingRenTangTitleAwardByType(t.titleType);
if (e && e.JZZ) {
this.view.KW_CompBankrupt.C_ShowMingRenTangAward.setSelectedIndex(1);
this.view.KW_CompBankrupt.KW_MingRenTang_TitleAward.setVar("count", `${e.JZZ}`).flushVars();
this.view.KW_CompBankrupt.KW_MingRenTang_Title.C_Type.setSelectedIndex(t.titleType);
t.titleType >= 4 && t.titleType <= 5 && this.view.KW_CompBankrupt.KW_MingRenTang_Title["KW_RankNo_" + t.titleType] && (this.view.KW_CompBankrupt.KW_MingRenTang_Title["KW_RankNo_" + t.titleType].text = `第${t.titleNo}名`);
} else this.view.KW_CompBankrupt.C_ShowMingRenTangAward.setSelectedIndex(0);
} else this.view.KW_CompBankrupt.C_ShowMingRenTangAward.setSelectedIndex(0);
}
onEventMingRenTangEndTime(t) {
var e, i, s, o;
console.log(`名人堂倒计时:${t}`);
if (null === (i = null === (e = this.view) || void 0 === e ? void 0 : e.KW_CompBankrupt) || void 0 === i ? void 0 : i.KW_MingRenTang_LastTime) if (t < 60 && t > 0) {
this.view.KW_CompBankrupt.KW_MingRenTang_LastTimeBg.visible = !0;
const e = t < 10 ? `0${t}` : t;
this.view.KW_CompBankrupt.KW_MingRenTang_LastTime.text = `剩余00:${e}`;
} else {
this.view.KW_CompBankrupt.KW_MingRenTang_LastTimeBg.visible = !1;
t <= 0 && (null === (o = null === (s = this.view) || void 0 === s ? void 0 : s.KW_CompBankrupt) || void 0 === o ? void 0 : o.C_ShowMingRenTangAward) && this.view.KW_CompBankrupt.C_ShowMingRenTangAward.setSelectedIndex(0);
}
}
onBuyBtn(t) {
const e = this.getImpl(r.comm.lobby.IUserManager).hostSr || 0, i = this.getImpl(r.comm.IHost).getCostHostSr(this.shopItemInfo[t].parprice || 0);
console.log("onBuyBtn start:", e, i);
this.gameLogicManager.sendGiveUp(h.GLProtocol.msgGiveUp.eFlag.FLAG_RECHARGE);
this.successCB = () => {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_goods_clicks_qxbp, {
exposure_scene: o.shuShuAnalytics.exposure_scene.game,
goods_id: this.shopItemInfo[t].id,
name: this.shopItemInfo[t].name,
[o.shuShuAnalytics.ui_name.__name]: o.shuShuAnalytics.ui_name.bankrupt
});
this.closeView("buy_success");
};
const s = this.getImpl(r.comm.lobby.IMingRenTangManager).getUserInfo();
if (this.shopItemInfo[t].ext) {
if ("string" == typeof this.shopItemInfo[t].ext && "" !== this.shopItemInfo[t].ext) try {
this.shopItemInfo[t].ext = JSON.parse(this.shopItemInfo[t].ext);
} catch (e) {
console.error("解析ext字段失败:", e);
this.shopItemInfo[t].ext = {};
}
} else this.shopItemInfo[t].ext = {};
if ((null == s ? void 0 : s.titleType) && s.titleType > 0) {
const e = this.getImpl(r.comm.lobby.IMingRenTangManager).getMingRenTangTitleAwardByType(s.titleType);
e && (this.shopItemInfo[t].ext.qxmrt = {
type: s.titleType,
enterRoomSr: e.enterRoomSr
});
}
o.CommFunc.setExtEventId(this.shopItemInfo[t], this.getImpl(o.IReportEventUtil).getViewNameAndEventId(r.comm.UIs.K7StarReviveView));
this.getImpl(r.comm.IHostAdapt).getAdapt().checkHostSrAndPay(this.shopItemInfo[t], () => {
this.openLoading("返回游戏中...");
console.log("StoreTh checkPay success:", this.shopItemInfo[t].id, this.shopItemInfo[t].price);
console.log("StoreYun checkExchange pay success:", this.shopItemInfo[t].id, this.shopItemInfo[t].parprice);
}, null, !1);
}
onBtnClose() {
this.closeView("close");
}
onBtnShowRetain() {
const t = this.isPopAct();
if (this._again || !t.isPop) {
this.closeView("close");
return;
}
this._again = !0;
const e = this._tableData.getBaseInfo()._base_score, i = t.totalMult, s = i * e, a = t.maxType;
this.subViewRetain.visible = !0;
this.subView.visible = !1;
this.subViewRetain.KW_TipsMultScore.text = `预计还可和 ${r.comm.StringUtils.dealBigNumEx5(i)}倍 赢 ${r.comm.StringUtils.dealBigNumEx5(s)} 云币，要放弃吗？`;
const n = this._tableData.getBombCardsSelf(), _ = this._tableData.getHandCards(l.SELF_LOCAL_SEAT);
if (n._bomb_count > 0) {
this.subViewRetain.C_bBomb.selectedIndex = 1;
this.subViewRetain.KW_TextBombMult.text = `x${n._mult}`;
if (n._tower_count > 0) {
this.subViewRetain.KW_ImgBombCnt.visible = !0;
this.subViewRetain.KW_TextBombCnt.visible = !0;
this.subViewRetain.KW_TextBombCnt.text = `${n._tower_count}`;
} else {
this.subViewRetain.KW_ImgBombCnt.visible = !1;
this.subViewRetain.KW_TextBombCnt.visible = !1;
}
for (let t = 0; t < _.length; t++) {
const e = _[t], i = this.subViewRetain["KW_Card" + t];
c.default.setCard(i, e);
}
for (let t = 0; t < 4; t++) {
const e = n._bomb_cards[t], i = this.subViewRetain["KW_Card" + (t + 3)];
c.default.setCard(i, e);
}
} else {
this.subViewRetain.C_bBomb.selectedIndex = 0;
for (let t = 0; t < _.length; t++) {
const e = _[t], i = this.subViewRetain["KW_Card" + t];
c.default.setCard(i, e);
}
this.subViewRetain.KW_ImgBombCnt.visible = !1;
this.subViewRetain.KW_TextBombCnt.visible = !1;
}
const d = this.getCardTypeUrl(a);
this.subViewRetain.KW_Type.text = `${d}`;
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_secondarypayment, {
secondarypayment_ui: "0：挽留页曝光"
});
}
getCardTypeUrl(t) {
var e;
return (null === (e = null === a.CardTypeInfo || void 0 === a.CardTypeInfo ? void 0 : a.CardTypeInfo[t]) || void 0 === e ? void 0 : e[1]) || "";
}
onBtnShowBanRupt() {
this.getImpl(r.comm.lobby.IMingRenTangManager).reqMingRenTangUser();
this.subViewRetain.visible = !1;
this.subView.visible = !0;
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_secondarypayment, {
secondarypayment_click: "1：补云币"
});
}
closeView(t) {
this.mCallback && this.mCallback(t);
"buy_success" !== t && this.gameLogicManager.sendGiveUp(h.GLProtocol.msgGiveUp.eFlag.FLAG_GIVE_UP);
this.stopCountdown();
this.close();
}
getGiftConfig() {
const t = this.getImpl(_.default).getBankruptInGameConfig();
if (t && 1 == t.open && t.products) return t;
this.gameLogicManager.sendGiveUp(h.GLProtocol.msgGiveUp.eFlag.FLAG_GIVE_UP);
return null;
}
updateAllData(t, e, i) {
var s, a, n, l, _, d;
if (!t) {
null == this || this.getImpl(r.comm.ICommonDlgs).showWeakHint("获取数据为空！");
this.closeView("error");
return;
}
this.shopItemInfo[i] = e;
const h = e;
if (h) {
const t = {
rmbName: "元"
}, c = this.getImpl(r.comm.IHostAdapt).getAdapt().getCostInfoByPayMode(h, t);
this.subView["KW_TextGoods_" + i].text = `x${r.comm.StringUtils.dealBigNumEx5(h.itemqty)}`;
this.subView["KW_BtnBuy_" + i].C_PayMode.setSelectedIndex(c.selectIndex);
this.subView["KW_BtnBuy_" + i].KW_TextZS.text = `${c.costName} 复活`;
console.log("updateAllData:", e);
const g = this.getGiftConfig(), u = this.getImpl(r.comm.lobby.IJoinRoomModule).getJoinRoomData(), m = u.roomid || 0, C = u.gameid || 0;
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_goods_exposure_qxbp, {
exposure_scene: o.shuShuAnalytics.exposure_scene.game,
goods_id: this.shopItemInfo[i].id,
name: this.shopItemInfo[i].name,
[o.shuShuAnalytics.ui_name.__name]: o.shuShuAnalytics.ui_name.bankrupt,
game_id: C,
room_id: m,
bigdata_type: null == g ? void 0 : g.bigdata_type,
bigdata_payrate: null == g ? void 0 : g.bigdata_payrate
});
try {
const t = JSON.parse(null !== (s = null == h ? void 0 : h.sendrich) && void 0 !== s ? s : "[]");
h.sendrich = t;
const e = JSON.parse(null !== (a = null == h ? void 0 : h.ext) && void 0 !== a ? a : "[]");
h.ext = e;
} catch (t) {
console.log("Game updateAllData fail:" + (null == h ? void 0 : h.sendrich));
}
console.log("Game prate" + (null === (l = null === (n = h.ext) || void 0 === n ? void 0 : n.attach) || void 0 === l ? void 0 : l.prate));
console.log("Game prate info.sendrich" + (null == h ? void 0 : h.sendrich));
const p = null === (d = null === (_ = h.ext) || void 0 === _ ? void 0 : _.attach) || void 0 === d ? void 0 : d.prate;
this.subView["KW_textbfb_" + i].text = p ? Math.floor(p / 100) + "%" : "";
const f = (null == h ? void 0 : h.sendrich) || [];
let A = null, S = 0;
for (const t of f) if ("gift_jzz_{numid}" == (null == t ? void 0 : t.key)) {
A = t;
break;
}
if (A && A.value && A.value > 0) {
S = A.value;
this.subView["KW_TextCnt_" + i].visible = !0;
this.subView["KW_TextTips_" + i].visible = !0;
this.subView["KW_Tips_" + i].visible = !0;
this.subView["KW_TextCnt_" + i].text = `×${S}`;
this.subView["KW_TextTips_" + i].text = `免输${S}次`;
} else {
this.subView["KW_TextCnt_" + i].visible = !1;
this.subView["KW_TextTips_" + i].visible = !1;
this.subView["KW_Tips_" + i].visible = !1;
}
0 == i && (A && A.value && A.value > 0 ? this.subView.KW_Icon_0.url = "ui://Game_K7Star_GiftRevive/fhlb_icon02" : this.subView.KW_Icon_0.url = "ui://Game_K7Star_GiftRevive/fhlb_icon01");
}
}
startCountdown() {
this.updateCountdown();
this.schedule(this.updateCountdown, 1);
}
stopCountdown() {
this.unschedule(this.updateCountdown);
}
openLoading(t) {
var e;
this.closeLoading();
null === (e = this.getImpl(r.comm.IWaiting)) || void 0 === e || e.setTask({
name: r.comm.WaitingCommon + "1",
tip: t,
time: 1
});
}
closeLoading() {
var t;
null === (t = this.getImpl(r.comm.IWaiting)) || void 0 === t || t.onComplete(r.comm.WaitingCommon + "1", !0);
}
onMsgTimer(t) {
t._type === l.ENUM_GAME_STATE.GS_BROKEN && (this.leftTime = t._time);
}
onMsgGiveUp(t) {
if (t._flag === h.GLProtocol.msgGiveUp.eFlag.FLAG_GO_ON && this.getImpl(_.default).seatToLocal(t._seat) == l.SELF_LOCAL_SEAT) {
this.closeLoading();
this.successCB && this.successCB();
}
}
isPopAct() {
const t = {
isPop: !1,
totalMult: 0,
totalWinCard: 0,
maxType: 0
}, e = this._tableData.getNowTingInfo(), i = this.getGiftConfig();
if (e) {
const e = r.comm.Util.clone(this._tingInfo);
let s = 0, o = 0, a = 0, n = 0;
const l = e.length;
for (let t = 0; t < l; t++) {
if (e[t].cnt > 0 && a < e[t].mult) {
a = e[t].mult;
n = e[t].ct;
}
s += e[t].mult * e[t].cnt;
o += e[t].cnt;
}
if (i && o >= i.minCnt && s >= i.minMult) {
t.isPop = !0;
t.maxType = n;
t.totalMult = s;
t.totalWinCard = o;
}
}
return t;
}
rebuildTingInfo(t) {
var e;
const i = [], o = this._tableData.getCardLogicData(), a = (null == t ? void 0 : t._count) || 0;
for (let n = 0; n < a; n++) {
const a = t._ct[n], l = t._hu_cards[n], _ = t._mult[n];
let r = t._hu_card_left_count[n];
r < 0 && (r = 0);
if (l === s.CardValue.CV_SJ) {
const t = r, e = o.getCardPower(s.CardID.CID_SJ);
i.push({
power: e,
mult: _,
cvs: [ s.CardID.CID_SJ ],
cnt: t,
ct: a
});
} else if (l === s.CardValue.CV_GOLD) {
const t = (null === (e = this._tableData.getDeckCount()) || void 0 === e ? void 0 : e._gold_left_count) || 0, n = o.getCardPower(s.CardID.CID_GOLD);
i.push({
power: n,
mult: _,
cvs: [ s.CardID.CID_GOLD ],
cnt: t,
ct: a
});
} else {
l === s.CardValue.CV_A && console.log("");
const t = r, e = o.getCardPower(l);
i.push({
power: e,
mult: _,
cvs: [ l ],
cnt: t,
ct: a
});
}
}
i.sort((t, e) => (t.power > 14 || e.power > 14) && t.power != e.power ? e.power - t.power : t.mult != e.mult ? e.mult - t.mult : t.cnt != e.cnt ? e.cnt - t.cnt : 0);
this._tingInfo = i;
}
onMsgGameState(t) {
t._state != l.ENUM_GAME_STATE.GS_BROKEN && t._state != l.ENUM_GAME_STATE.GS_WAIT && this.closeView("close");
}
};
g([ r.gf.listen(r.comm.Events.EventMingRenTangUser) ], u.prototype, "onEventMingRenTangUser", null);
g([ r.gf.listen(r.comm.Events.EventMingRenTangEndTime) ], u.prototype, "onEventMingRenTangEndTime", null);
g([ r.gf.listen("onMsgTimer" + n.GAME_ID) ], u.prototype, "onMsgTimer", null);
g([ r.gf.listen("onMsgGiveUp" + n.GAME_ID) ], u.prototype, "onMsgGiveUp", null);
g([ r.gf.listen("onMsgGameState" + n.GAME_ID) ], u.prototype, "onMsgGameState", null);
const m = u = g([ r.gf.controller({
name: r.comm.UIs.K7StarReviveView,
fguiObject: "View",
layer: r.gf.ViewLayer.Tip,
module: "game_k7star",
fguiPackage: [ "Game_K7Star_GiftRevive" ],
cachable: !1
}) ], u);
},
"./bin/ui/component/CardComb.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => _
});
var s = i("./bin/config/CardCode.js"), o = i("./bin/data/TableData.js"), a = i("./bin/gf.js"), n = i("./bin/logic/moudles/GameLogicManager.js");
let l = class extends a.gf.mvc.UIController {
constructor() {
super(...arguments);
this._cardUI = [];
this._isMoreSelect = !1;
}
onUIBinded() {
this._tableData = this.getImpl(o.default);
this._gameLogicManager = this.getImpl(n.default);
}
onUnUIBinded() {}
initUI() {}
static setCard(t, e) {
if (e == s.CardID.CID_GOLD_BUFF) t.cardValue.setSelectedPage("buff"); else if (e == s.CardID.CID_GOLD) t.cardValue.setSelectedPage("gold"); else if ((0, 
s.VALUE)(e) <= s.CardValue.CV_NONE) t.cardValue.setSelectedPage("back"); else if ((0, 
s.VALUE)(e) <= s.CardValue.CV_K) {
t.cardValue.setSelectedPage("cardnum");
t.KW_CompColorSmall && (t.KW_CompColorSmall.url = this.getColorPath((0, s.COLOR)(e)));
t.KW_CompColorNum && (t.KW_CompColorNum.url = `ui://_Common/${this.getColor(e)}${(0, 
s.VALUE)(e)}`);
t.KW_CompColorBig && (t.KW_CompColorBig.url = this.getColorPath((0, s.COLOR)(e)));
} else if ((0, s.VALUE)(e) == s.CardValue.CV_SJ || (0, s.VALUE)(e) == s.CardValue.CV_BJ) {
t.cardValue.setSelectedPage("joker");
if (t.KW_CompJokerColor && t.KW_CompJokerNum && t.cardValue) {
t.KW_CompJokerColor.url = this.getColorPath((0, s.COLOR)(e));
t.KW_CompJokerNum.url = `ui://_Common/${(0, s.get_num_by_cardVal)((0, s.VALUE)(e))}`;
} else {
t.KW_CompColorSmall && (t.KW_CompColorSmall.url = this.getColorPath((0, s.COLOR)(e)));
t.KW_CompColorNum && (t.KW_CompColorNum.url = `ui://_Common/${(0, s.get_num_by_cardVal)((0, 
s.VALUE)(e))}`);
}
}
s.startCardValue == (0, s.VALUE)(e) ? t.C_Specialcon.setSelectedPage("bao") : (0, 
s.VALUE)(e) == s.CardValue.CV_SJ || (0, s.VALUE)(e) == s.CardValue.CV_BJ ? t.C_Specialcon.setSelectedPage("lai") : t.C_Specialcon.setSelectedPage("hide");
}
static setCardSmallMult(t, e) {
if (e == s.CardID.CID_GOLD) t.cardValue.setSelectedPage("gold"); else if ((0, s.VALUE)(e) <= s.CardValue.CV_NONE) t.cardValue.setSelectedPage("back"); else if ((0, 
s.VALUE)(e) <= s.CardValue.CV_K) {
t.cardValue.setSelectedPage("cardnum");
t.KW_CompColorSmall.url = this.getColorPath((0, s.COLOR)(e));
t.KW_CompColorNum.url = `ui://_Common/${this.getColor(e)}${(0, s.VALUE)(e)}`;
} else if ((0, s.VALUE)(e) == s.CardValue.CV_SJ || (0, s.VALUE)(e) == s.CardValue.CV_BJ) {
t.cardValue.setSelectedPage("joker");
t.KW_CompJokerNum.url = `ui://_Common/${(0, s.get_num_by_cardVal)((0, s.VALUE)(e))}small`;
}
s.startCardValue == (0, s.VALUE)(e) ? t.C_Specialcon.setSelectedPage("bao") : (0, 
s.VALUE)(e) == s.CardValue.CV_SJ || (0, s.VALUE)(e) == s.CardValue.CV_BJ ? t.C_Specialcon.setSelectedPage("lai") : t.C_Specialcon.setSelectedPage("hide");
}
static getColor(t) {
switch ((0, s.COLOR)(t)) {
case s.CardColor.CC_DIAMOND:
case s.CardColor.CC_HEART:
return "red";

case s.CardColor.CC_CLUB:
case s.CardColor.CC_SPADE:
return "black";
}
return "";
}
static getColorPath(t) {
switch (t) {
case s.CardColor.CC_DIAMOND:
return "ui://_Common/diamond";

case s.CardColor.CC_CLUB:
return "ui://_Common/club";

case s.CardColor.CC_HEART:
return "ui://_Common/heart";

case s.CardColor.CC_SPADE:
return "ui://_Common/spade";

case s.CardColor.CC_SJ:
return "ui://_Common/15dizhu";

case s.CardColor.CC_BJ:
return "ui://_Common/16dizhu";
}
return "";
}
};
const _ = l = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
}([ a.gf.controller({
name: "CardComb",
module: "game_k7star",
fguiObject: "CardComb",
layer: a.gf.ViewLayer.Base,
fguiPackage: [ "Game_K7Star_Card" ],
cachable: !0
}) ], l);
},
"./bin/ui/component/CardComponent.js": (t, i, s) => {
s.r(i);
s.d(i, {
ComponentType: () => o,
default: () => n
});
var o, a = s("./bin/gf.js");
(function(t) {
t[t.FIRE = 0] = "FIRE";
t[t.MAX = 1] = "MAX";
})(o || (o = {}));
const n = new class {
constructor() {
this.init();
}
init() {
this._all = [];
for (let t = 0; t < o.MAX; t++) this._all[t] = {
activePool: new Map(),
diePool: []
};
}
setParentNode(t, e) {
this._all[t] && (this._all[t].parentNode = e);
}
setChild(t, e, i) {
if (this._all[t]) {
this._all[t].childPkg = e;
this._all[t].childName = i;
}
}
addCardComponent(t, i, s, o, n) {
console.log("CardComponent addCardComponent");
if (this.canCreateChild(t) && !this._all[t].activePool.has(i)) {
let l;
if (this._all[t].diePool.length > 0) l = this._all[t].diePool.pop(); else {
l = e.UIPackage.createObject(this._all[t].childPkg, this._all[t].childName);
a.gf.setLayerNode(l);
this._all[t].parentNode.addChild(l);
}
this._all[t].activePool.set(i, l);
l.rotation = o || 0;
l.setScale(n || 1, n || 1);
this._all[t].callFunc = s;
s && s(l);
}
return !1;
}
setVisibleByCard(t, e) {
if (!t || !e || !t.visible) {
e && (e.visible = !1);
return !1;
}
return !0;
}
setPosByCard(t, e) {
if (!t || !e || !(null == this ? void 0 : this.setVisibleByCard(t, e))) return;
(null == e ? void 0 : e.visible) || (e.visible = !0);
const i = t.localToGlobal(), s = e.parent.globalToLocal(i.x, i.y);
e.setPosition(s.x, s.y);
}
refreshPos() {
var t, e;
for (let i = 0; i < o.MAX; i++) null === (e = null === (t = this._all[i]) || void 0 === t ? void 0 : t.activePool) || void 0 === e || e.forEach((t, e) => {
var s, o;
if (e && e.node && e.parent) if (e && e.visible) {
if (!t.visible) {
t.visible = !0;
null === (o = null === (s = this._all[i]) || void 0 === s ? void 0 : s.callFunc) || void 0 === o || o.call(s, t);
console.log("refreshPos rotation", t.rotation);
}
const a = e.localToGlobal(), n = t.parent.globalToLocal(a.x, a.y);
t.setPosition(n.x, n.y);
} else t.visible = !1; else {
this._all[i].diePool.push(t);
this._all[i].activePool.delete(e);
t.visible = !1;
}
});
}
canCreateChild(t) {
return !!(this._all[t] && this._all[t].parentNode && this._all[t].childPkg && this._all[t].childName);
}
}();
},
"./bin/ui/component/MingRenTangBtn.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => (class {
constructor(t) {
this._showType = 0;
this.setTimer = () => {
this._showType = (this._showType + 1) % 2;
console.log("this._showType", this._showType);
s.gf.sp.onSpineLoaded(this.view.KW_Ani, t => {
t.premultipliedAlpha = !1;
t.clearTracks();
if (0 == this._showType) {
console.log("this._showType animation3_1");
t.setAnimation(0, "animation3_1", !1);
t.addAnimation(0, "animation3_2", !0);
} else {
console.log("this._showType animation2_1");
t.setAnimation(0, "animation2_1", !1);
t.addAnimation(0, "animation2_2", !0);
}
});
this.view.C_ShowType.setSelectedIndex(this._showType);
};
this._main = t;
this.view = this._main.view.KW_BtnMingRenTang;
}
initUI(t) {
this.view.visible = !0;
if ((null == t ? void 0 : t.score) && t.rank > 0) {
this.view.KW_Score.KW_MingRenTang_Score.text = s.comm.StringUtils.dealBigNumEx5(t.score) + "";
this.setScrollType();
} else this.setNormalType();
}
setNormalType() {
this._main.unschedule(this.setTimer);
s.gf.sp.onSpineLoaded(this.view.KW_Ani, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, "animation3_2", !0);
});
this.view.KW_Score.C_ShowNormal.setSelectedIndex(0);
}
setScrollType() {
this._main.unschedule(this.setTimer);
s.gf.sp.onSpineLoaded(this.view.KW_Ani, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, "animation3_2", !0);
});
this.view.KW_Score.C_ShowNormal.setSelectedIndex(1);
this.view.KW_Score.alpha = 0;
this._main.schedule(this.setTimer, 5);
}
})
});
var s = i("./bin/gf.js");
},
"./bin/ui/guide/GameGuide.js": (t, i, s) => {
s.r(i);
s.d(i, {
default: () => A
});
var a = s("./bin/config/CardCode.js"), n = s("./bin/config/CardConfig.js"), l = s("./bin/config/CardType.js"), _ = s("./bin/config/GameConfig.js"), r = s("./bin/config/GameDefine.js"), d = s("./bin/config/SoundConfig.js"), h = s("./bin/data/TableData.js"), c = s("./bin/gameLogic/CardRuleLogic.js"), g = s("./bin/gf.js"), u = s("./bin/logic/guide/GameGuideModule.js"), m = s("./bin/logic/protocol/GLProtocol.js"), C = s("./bin/ui/component/CardComb.js"), p = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let f = class extends g.gf.mvc.UIController {
constructor() {
super(...arguments);
this._isMoreSelect = !1;
this._isTingList = !1;
this._isMultTable = !1;
this._guideStep = r.GUIDE_STEP.GUDS_INIT;
this._outCid = 0;
this._maskCB = null;
}
onUIBinded() {
this._tableData = this.getImpl(h.default);
this._iSound = this.getImpl(g.gf.ISound);
this._iSoundModule = this.getImpl(g.comm.lobby.ISoundModule);
this._gameGuideModule = this.getImpl(u.default);
this._cardLogic = new c.default();
this.addClick(this.view.KW_BtnPlayCard, this.onBtnPlayCard);
this.addClick(this.view.KW_BtnZM, this.onBtnZM);
this.addClick(this.view.KW_BtnZha, this.onBtnZha);
this.addClick(this.view.KW_BtnBoom, this.onBtnBoom);
this.addClick(this.view.KW_BtnMultTable, this.onBtnMultTable);
this.addClick(this.view.KW_BtnTing, this.onBtnTing);
this.addClick(this.view.KW_Mask.KW_Btn_Skip, this.onBtnSkip);
this.addClick(this.view.KW_Mask.KW_Mask, this.onClickMask);
}
onUnUIBinded() {}
initUI() {
this.view.C_IsMiniGame.setSelectedIndex(this.getImpl(g.comm.IHost).getMiniGameSelectIndex());
this.view.C_ShowBtn.setSelectedPage("none");
this.view.C_ShowSuggest.setSelectedPage("hide");
this.view.C_ShowCard.setSelectedIndex(0);
this.view.C_ShowHuCard.setSelectedIndex(0);
this.view.KW_BtnMultTable.visible = !0;
this.view.KW_BtnTing.visible = !1;
this.updateSortOrder(0);
this._isMultTable = !1;
this._isTingList = !1;
this._guideStep = r.GUIDE_STEP.GUDS_INIT;
}
onDestroy() {}
updateSortOrder(t) {
switch (t) {
case 0:
this.view.KW_CompHandCard_1.sortingOrder = 1;
this.view.KW_AniBoom_1.sortingOrder = 1;
this.view.KW_CompTipHuBack.sortingOrder = 1;
this.view.KW_CompTipHuCard.sortingOrder = 1;
this.view.KW_TextTipCardMult.sortingOrder = 1;
this.view.KW_BtnZM.sortingOrder = 2;
this.view.KW_BtnPlayCard.sortingOrder = 2;
this.view.KW_BtnZha.sortingOrder = 2;
this.view.KW_BtnBoom.sortingOrder = 2;
this.view.KW_TipCardMult.sortingOrder = 2;
this.view.KW_CompSuggest.sortingOrder = 3;
this.view.KW_BtnTing.sortingOrder = 4;
this.view.KW_BtnMultTable.sortingOrder = 5;
this.view.KW_LabelGuide_1.sortingOrder = 21;
this.view.KW_LabelGuide_2.sortingOrder = 21;
this.view.KW_LabelGuide_3.sortingOrder = 21;
this.view.KW_LabelGuide_4.sortingOrder = 21;
this.view.KW_LabelGuide_5.sortingOrder = 21;
this.view.KW_LabelGuide_6.sortingOrder = 21;
this.view.KW_LabelGuide_7.sortingOrder = 21;
this.view.KW_LabelGuide_8.sortingOrder = 21;
this.view.KW_LabelGuide_9.sortingOrder = 21;
this.view.KW_LabelGuide_10.sortingOrder = 21;
this.view.KW_LabelGuide_11.sortingOrder = 21;
this.view.KW_Mask.sortingOrder = 10;
break;

case 1:
this.view.KW_CompHandCard_1.sortingOrder = 20;
break;

case 2:
this.view.KW_BtnMultTable.sortingOrder = 20;
this.view.KW_LabelGuide_11.sortingOrder = 20;
this.view.KW_CompSuggest.sortingOrder = 20;
break;

case 3:
this.view.KW_CompHandCard_1.sortingOrder = 20;
break;

case 4:
this.view.KW_AniBoom_1.sortingOrder = 20;
this.view.KW_CompHandCard_1.sortingOrder = 20;
this.view.KW_BtnPlayCard.sortingOrder = 20;
this.view.KW_BtnZM.sortingOrder = 20;
this.view.KW_BtnZha.sortingOrder = 20;
break;

case 5:
this.view.KW_AniBoom_1.sortingOrder = 20;
this.view.KW_CompHandCard_1.sortingOrder = 20;
this.view.KW_BtnZha.sortingOrder = 20;
break;

case 6:
this.view.KW_AniBoom_1.sortingOrder = 20;
this.view.KW_CompHandCard_1.sortingOrder = 20;
this.view.KW_BtnBoom.sortingOrder = 20;
break;

case 7:
this.view.KW_AniBoom_1.sortingOrder = 20;
this.view.KW_CompHandCard_1.sortingOrder = 20;
this.view.KW_BtnPlayCard.sortingOrder = 20;
break;

case 8:
this.view.KW_AniBoom_1.sortingOrder = 20;
this.view.KW_CompHandCard_1.sortingOrder = 20;
this.view.KW_BtnZM.sortingOrder = 20;
}
}
onBtnSkip() {
if (this.getImpl(g.comm.lobby.ICommonActModule).getPlayerGuideFirst(_.GAME_ID)) this.getImpl(g.gf.IViewPlugin).openView("GameGuideAbort"); else {
this.dispatch(r.GUIDE_EVENT.GUI_EVE_CHANGE_ROOM + _.GAME_ID, !0);
this.dispatch("onShowReady");
}
}
onClickMask() {
if (this._maskCB) {
this.view.C_ShowGuide.setSelectedIndex(0);
this._maskCB();
this._maskCB = null;
}
switch (this._guideStep) {
case r.GUIDE_STEP.GUDS_CLONE:
}
}
onBtnTing() {
this.dispatch("TingShow" + _.GAME_ID, !0, !0, !this._isTingList);
this._isTingList = !0;
this.view.C_ShowGuide.setSelectedIndex(0);
}
onBtnZM() {
this.view.C_ShowBtn.setSelectedPage("none");
this.view.C_ShowGuide.setSelectedIndex(0);
this.dispatch(r.GUIDE_EVENT.GUI_EVE_BTN_ZIMO + _.GAME_ID);
}
onBtnZha() {
var t;
this.view.C_ShowBtn.setSelectedPage("none");
this.view.C_ShowGuide.setSelectedIndex(0);
this.dispatch(r.GUIDE_EVENT.GUI_EVE_BTN_ZHA + _.GAME_ID);
const e = (null === (t = this._iSoundModule) || void 0 === t ? void 0 : t.getSex()) || 0;
this._iSound.playEffect((0, d.getSexEff)(e, "BOMB_SOUND"), "game_k7star");
}
onBtnBoom() {
var t;
this.view.C_ShowBtn.setSelectedPage("none");
this.view.C_ShowGuide.setSelectedIndex(0);
this.dispatch(r.GUIDE_EVENT.GUI_EVE_BTN_ZHA + _.GAME_ID);
const e = (null === (t = this._iSoundModule) || void 0 === t ? void 0 : t.getSex()) || 0;
this._iSound.playEffect((0, d.getSexEff)(e, "BAO_SOUND"), "game_k7star");
}
onBtnPlayCard() {
const t = this._tableData.getSelectOutCardsIndex(r.SELF_LOCAL_SEAT), e = this._tableData.getHandCards(r.SELF_LOCAL_SEAT);
let i = 0;
const s = t.length;
for (let o = 0; o < s; o++) if (t[o] && e[o]) {
i = e[o];
break;
}
if (i) {
this.dispatch(r.GUIDE_EVENT.GUI_EVE_PLAY_CARD + _.GAME_ID, i);
this.view.C_ShowGuide.setSelectedIndex(0);
this.view.C_ShowBtn.setSelectedPage("none");
} else this.getImpl(g.comm.ICommonDlgs).showWeakHint("请点击选择手牌");
}
onBtnMultTable() {
if (this._guideStep == r.GUIDE_STEP.GUDS_MULT) {
this.view.C_ShowGuide.setSelectedIndex(0);
this.dispatch("showMultTable" + _.GAME_ID, !0);
} else this.dispatch("showMultTable" + _.GAME_ID, !1);
}
onEventGuideStep(t) {
this._guideStep = t;
}
onMsgShowClone(t) {
this.view.C_ShowGuide.setSelectedIndex(1);
this.updateSortOrder(0);
this.updateSortOrder(1);
this.view.KW_Mask.touchable = !0;
this.view.C_ShowSuggest.setSelectedPage("hide");
t && (this._maskCB = t);
}
onMsgShowMult() {
this.view.C_ShowGuide.setSelectedIndex(2);
this.updateSortOrder(0);
this.updateSortOrder(2);
this.view.C_ShowSuggest.setSelectedPage("open");
}
onMsgShowDrawCard1(t) {
this.view.C_ShowCard.setSelectedIndex(1);
this._outCid = t;
this.scheduleOnce(() => {
this.view.C_ShowBtn.setSelectedPage("none");
this.view.C_ShowGuide.setSelectedIndex(4);
this.updateSortOrder(0);
this.updateSortOrder(3);
this.view.C_ShowSuggest.setSelectedPage("hide");
}, 1);
}
onMsgShowPlayCard1(t) {
this.view.C_ShowCard.setSelectedIndex(1);
this._outCid = t;
this.view.C_ShowBtn.setSelectedPage("none");
this.view.C_ShowGuide.setSelectedIndex(5);
this.updateSortOrder(0);
this.updateSortOrder(4);
this.view.C_ShowSuggest.setSelectedPage("hide");
}
onMsgShowDrawCard2(t) {
this._outCid = t;
this.scheduleOnce(() => {
this.view.C_ShowBtn.setSelectedPage("zhaCard");
this.view.C_ShowGuide.setSelectedIndex(6);
this.updateSortOrder(0);
this.updateSortOrder(5);
}, .5);
}
onMsgShowTowerCard1(t) {
this._outCid = t;
this.view.C_ShowBtn.setSelectedPage("boomCard");
this.view.C_ShowGuide.setSelectedIndex(7);
this.updateSortOrder(0);
this.updateSortOrder(6);
}
onMsgShowTowerCard2(t) {
this._outCid = t;
this.view.C_ShowBtn.setSelectedPage("boomCard");
this.view.C_ShowGuide.setSelectedIndex(8);
this.updateSortOrder(0);
this.updateSortOrder(6);
}
onMsgShowTowerCard3(t) {
this._outCid = t;
this.view.C_ShowBtn.setSelectedPage("boomCard");
this.view.C_ShowGuide.setSelectedIndex(9);
this.updateSortOrder(0);
this.updateSortOrder(6);
}
onMsgShowTowerJoker(t) {
this._outCid = t;
this.view.C_ShowBtn.setSelectedPage("jokerCard");
this.view.C_ShowGuide.setSelectedIndex(10);
this.updateSortOrder(0);
this.updateSortOrder(7);
}
onMsgShowTowerCard4(t) {
this._outCid = t;
this.view.C_ShowBtn.setSelectedPage("boomCard");
this.view.C_ShowGuide.setSelectedIndex(11);
this.updateSortOrder(0);
this.updateSortOrder(8);
}
onMsgShowResult() {
this.view.C_ShowGuide.setSelectedIndex(0);
this.view.C_ShowBtn.setSelectedPage("none");
this.view.C_ShowSuggest.setSelectedIndex(0);
this.updateSortOrder(0);
}
onMsgRecommendCards() {
var t;
const e = this._tableData.getRecommendCardsNew();
(null === (t = null == e ? void 0 : e._cards) || void 0 === t ? void 0 : t.length) > 0 && this.updateSuggestPanel(e);
}
updateSuggestPanel(t) {
this._tableData.resetAllLeftCards();
for (let e = 0; e < 2; ++e) {
const i = e + 1, s = this.view.KW_CompSuggest["KW_ListHand" + i], o = this.view.KW_CompSuggest["KW_TextTargetCardType" + i], a = this.view.KW_CompSuggest["KW_TextTargetCardMult" + i], n = this.view.KW_CompSuggest["KW_MaxInfo" + i];
s.removeChildrenToPool();
const _ = t._cards[e];
for (const t of _) {
const e = s.addItemFromPool();
g.gf.setLayerNode(e);
e.visible = !0;
C.default.setCardSmallMult(e, t);
e.select.selectedIndex = 0;
}
const r = l.CardTypeInfo[t._ct[e]];
o.text = `【${r[1]}】`;
a.text = (t._mult[e] >= 1e4 ? g.comm.StringUtils.dealBigNumEx5(t._mult[e]) : t._mult[e]) + "倍";
if (0 == t._left_tower_count[e]) n.C_Max.selectedIndex = 1; else {
n.C_Max.selectedIndex = 0;
n.title = t._left_tower_count[e].toString();
}
}
}
onMsgActPower(t) {
if (t._hu_card > 0) {
this.updateTipCardMult(t._hu_card, t._hu_card_mult);
g.gf.sp.onSpineLoaded(this.view.KW_BtnZM.KW_Ani, t => {
t.setAnimation(0, "animation1", !0);
});
this.dispatch("showAniFire" + _.GAME_ID, !0);
}
if (t._zimo_card_count > 0) {
this.updateTipCardMult(t._zimo_card[0], t._zimo_card_mult[0]);
this.scheduleOnce(() => {
this.view.KW_BtnZM.C_Act.setSelectedPage("zimo");
g.gf.sp.onSpineLoaded(this.view.KW_BtnZM.KW_Ani, t => {
t.setAnimation(0, "animation2", !0);
});
});
this.dispatch("showAniFire" + _.GAME_ID, !0);
}
if (t._bomb_card_value[0] > 0) {
this.view.KW_BtnZha.KW_ZhaCard.visible = !1;
this.scheduleOnce(() => {
this.view.KW_BtnZha.C_Act.setSelectedPage("zha");
g.gf.sp.onSpineLoaded(this.view.KW_BtnZha.KW_Ani, t => {
t.setAnimation(0, "animation3", !0);
});
});
if (t._bomb_card_value[1] > 0) {
this.view.KW_BtnZha.KW_ZhaCard.visible = !0;
C.default.setCard(this.view.KW_BtnZha.KW_ZhaCard, t._bomb_card_value[0]);
}
}
if (t._tower_card_value > 0) {
const e = a.strCardStringValue[(0, a.VALUE)(t._tower_card_value)];
this.view.KW_BtnBoom.KW_BombCard.text = `${e}`;
this.scheduleOnce(() => {
this.view.KW_BtnBoom.C_Act.setSelectedPage("bao");
g.gf.sp.onSpineLoaded(this.view.KW_BtnBoom.KW_Ani, t => {
t.setAnimation(0, "animation4", !0);
});
});
}
}
updateTipCardMult(t, e) {
this.view.C_ShowHuCard.setSelectedIndex(1);
const i = this.view.KW_CompTipHuCard;
i.visible = !0;
C.default.setCard(i, t);
this.view.KW_TextTipCardMult.text = `${g.comm.StringUtils.dealBigNumEx5(e)}倍`;
}
onMsgAddCards(t) {
const e = this._tableData.seatToLocal(t._seat);
h.default.cardData[e].setDrawCard(t._cards);
const i = this._tableData.getHandCards(e);
this.setHandCards(e, i, !0);
if (e == r.SELF_LOCAL_SEAT) {
const e = i.length, s = o.Util.clone(t._cards);
for (let t = e; t >= 0; t--) for (let e = 0; e < s.length; e++) {
const o = s[e];
if (i[t] == o) {
s.splice(e, 1);
this.showDrawCards(t, () => {
this.dispatch("showTingCardsTip" + _.GAME_ID, !0);
});
break;
}
}
} else if (this._cardLogic.hasCardBack(t._cards)) for (let i = 0; i < t._cards.length; i++) {
let s = t._cards.length - i - 1;
1 === t._cards.length && (s = 1);
this.showDrawCardsOther(e, s, () => {
console.log("---------------------sendEndWait onMsgAddCards1");
});
} else {
const s = i.length, a = o.Util.clone(t._cards);
for (let t = s - 1; t >= 0; t--) for (let s = 0; s < a.length; s++) {
const o = a[s];
if (i[t] == o) {
a.splice(s, 1);
this.showDrawCardsOther(e, t, () => {});
break;
}
}
}
this._iSound.playEffect(d.SOUND_PATH.GAME_NDROP, "game_k7star");
}
setHandCards(t, e, i = !1) {
var s;
const a = this.view["KW_CompHandCard_" + t];
if (0 === e.length) {
a.visible = !1;
return;
}
if (t == r.SELF_LOCAL_SEAT) {
console.log("setHandCards:", JSON.stringify(e));
console.log("setHandCards numChildren:", this.view.numChildren, a.numChildren);
}
a.visible = !0;
if (a.numChildren > e.length) {
const t = a.numChildren - e.length;
for (let e = 0; e < t; e++) a.removeChildToPoolAt(e);
} else if (a.numChildren < e.length) for (let t = a.numChildren; t < e.length; t++) {
const t = a.addItemFromPool();
g.gf.setLayerNode(t);
}
const n = this._tableData.getMingCards(t), l = o.Util.clone(h.default.cardData[t].getHuHandCards());
for (let i = 0; i < Math.max(e.length, a.numChildren); i++) {
const o = a.getChildAt(i);
o.visible = !0;
o.setScale(1, 1);
o.pop.setSelectedPage("normal");
C.default.setCard(o, e[i]);
o.C_Fire && o.KW_Fire && (n ? o.C_Fire.setSelectedIndex(1) : o.C_Fire.setSelectedIndex(0));
if (t == r.SELF_LOCAL_SEAT) {
null === (s = o.C_Clone) || void 0 === s || s.setSelectedIndex(0);
this.addClick(o.KW_CompBcak, () => {
this.onClickCard(i);
});
o.select.setSelectedPage("hide");
if (l.length > 0) for (const t in l) if (l[t] == e[i] && "show" != o.select.selectedPage) {
l.splice(t, 1);
o.select.setSelectedPage("show");
break;
}
}
}
i && this.allDownCards();
}
showDrawCardsOther(t, i, s) {
const o = this.view["KW_CompHandCard_" + t].asList, a = () => {
if (!this.isCardListLoadFinished(o)) {
setTimeout(() => {
a();
});
return;
}
const n = o.getChildAt(i);
n.setPosition(n.x, 0);
n.alpha = .3;
let l = n.y - 17;
t === r.PlayerEnum.PLAYER_3 && (l = n.y + 17);
const _ = n.y;
n.setPosition(n.x, l);
e.GTween.to2(n.x, l, n.x, _, .3).setTarget(n, e.TweenPropType.Position).setEase(e.EaseType.Linear).setDelay(.4).onComplete(() => {
n.pop.setSelectedPage("normal");
s && s();
});
e.GTween.to(.3, 1, .7).setTarget(n, e.TweenPropType.Alpha).setEase(e.EaseType.Linear).onComplete(() => {});
};
setTimeout(() => {
a();
});
}
getRandomNumber(t, e) {
return Math.floor(Math.random() * (e - t + 1) + t);
}
allDownCards() {
for (let t = 0; t < this.view.KW_CompHandCard_1.numChildren; t++) this.view.KW_CompHandCard_1.getChildAt(t).pop.setSelectedPage("normal");
this.updateSelectCardsData();
}
isCheckCard(t) {
return "pop" == t.pop.selectedPage;
}
setCanTouchCards(t, e, i = !0) {
if (t != r.SELF_LOCAL_SEAT) return;
console.log("setCanTouchCards:", JSON.stringify(e));
const s = this.view["KW_CompHandCard_" + t];
for (let t = 0; t < s.numChildren; t++) {
const e = s.getChildAt(t);
i && e.select.setSelectedPage("show");
e.touchable = !1;
}
const o = this._tableData.getHandCards(r.SELF_LOCAL_SEAT), a = o.length, n = e.length;
for (let t = 0; t < n; t++) for (let i = 0; i < a; i++) if (e[t] == o[i]) {
const t = this.view.KW_CompHandCard_1.getChildAt(i);
if ("show" == t.select.selectedPage) {
t.select.setSelectedPage("hide");
t.touchable = !0;
break;
}
}
}
onClickCard(t) {
var e, i;
if (this._tableData.cardLogicData.getNowPlayerSeat() != r.SELF_LOCAL_SEAT) return;
const s = this.view["KW_CompHandCard_" + r.SELF_LOCAL_SEAT];
if (!this._isMoreSelect) for (let e = 0; e < s.numChildren; e++) e != t && s.getChildAt(e).pop.setSelectedPage("normal");
const o = s.getChildAt(t), a = this._tableData.getActPower();
if (this.isCheckCard(o)) {
if (this._tableData.cardLogicData.getNowPlayerSeat() == r.SELF_LOCAL_SEAT) {
const i = null === (e = this._tableData.getHandCards(r.SELF_LOCAL_SEAT)) || void 0 === e ? void 0 : e[t];
if (i) {
this._tableData.cardLogicData.setNowPlayerSeat(0);
this.dispatch(r.GUIDE_EVENT.GUI_EVE_PLAY_CARD + _.GAME_ID, i);
this.view.C_ShowBtn.setSelectedPage("none");
this.view.C_ShowGuide.setSelectedIndex(0);
return;
}
}
} else if (this._tableData.cardLogicData.getNowPlayerSeat() == r.SELF_LOCAL_SEAT && a._play == m.GLProtocol.msgActPower.eFlag.FLAG_CAN_ACT) {
const e = null === (i = this._tableData.getHandCards(r.SELF_LOCAL_SEAT)) || void 0 === i ? void 0 : i[t];
if (e) {
if (this._gameGuideModule.getStep() == r.GUIDE_STEP.GUDS_DRAW_CARD_1) {
this.dispatch(r.GUIDE_EVENT.GUI_EVE_DRAW_CARD + _.GAME_ID);
return;
}
this.dispatch("TingCheckShow" + _.GAME_ID, e, !0);
}
}
o.pop.setSelectedPage("normal" == o.pop.selectedPage ? "pop" : "normal");
"pop" == o.pop.selectedPage && this._iSound.playEffect(d.SOUND_PATH.GAME_HANDSELECT, "game_k7star");
this.updateSelectCardsData();
}
updateSelectCardsData() {
const t = [];
for (let e = 0; e < this.view.KW_CompHandCard_1.numChildren; e++) t.push(this.isCheckCard(this.view.KW_CompHandCard_1.getChildAt(e)) ? 1 : 0);
this._tableData.setSelectOutCardsIndex(r.SELF_LOCAL_SEAT, t);
}
setTopCards(t) {
this.allDownCards();
const e = this._tableData.getHandCards(r.SELF_LOCAL_SEAT), i = e.length, s = t.length;
for (let o = 0; o < s; o++) for (let s = 0; s < i; s++) if (t[o] == e[s]) {
const t = this.view.KW_CompHandCard_1.getChildAt(s);
if (!this.isCheckCard(t)) {
t.pop.setSelectedPage("pop");
break;
}
}
this.updateSelectCardsData();
}
showDrawCards(t, i) {
console.log("onCheckCloneCards setPlayingCardAni false");
this._tableData.setPlayingCardAni(!0);
const s = this.view["KW_CompHandCard_" + r.SELF_LOCAL_SEAT].asList, o = () => {
if (this.isCardListLoadFinished(s)) for (let o = 0; o < this._tableData.getHandCards(r.SELF_LOCAL_SEAT).length; o++) {
const a = s.getChildAt(o), l = this.view["KW_AniCard_" + o];
l.visible = !0;
a.visible = !1;
const _ = a.localToGlobal(), d = e.GRoot.inst.globalToLocal(_.x, _.y);
C.default.setCard(l, this._tableData.getHandCards(r.SELF_LOCAL_SEAT)[o]);
l.select.setSelectedPage("hide");
const c = h.default.cardData[r.SELF_LOCAL_SEAT].getHuHandCards();
if (c.length > 0) for (const t in c) if (c[t] == this._tableData.getHandCards(r.SELF_LOCAL_SEAT)[o]) {
l.select.setSelectedPage("show");
break;
}
l.setPosition(d.x, d.y);
if (o < t) e.GTween.to(d.x + n.HAND_CARD_CONFIG[r.SELF_LOCAL_SEAT].offsetX / 2, d.x, .17).setTarget(l, e.TweenPropType.X).setEase(e.EaseType.Linear).onComplete(() => {
l.visible = !1;
a.visible = !0;
}); else if (o > t) e.GTween.to(d.x - n.HAND_CARD_CONFIG[r.SELF_LOCAL_SEAT].offsetX / 2, d.x, .17).setTarget(l, e.TweenPropType.X).setEase(e.EaseType.Linear).onComplete(() => {
l.visible = !1;
a.visible = !0;
}); else if (o == t) {
const t = this.view.KW_CompClock.KW_TextClock.localToGlobal(), s = e.GRoot.inst.globalToLocal(t.x, t.y);
l.setPosition(s.x - 27, s.y - 41);
l.setScale(.35, .35);
e.GTween.to2(l.x, l.y, d.x, d.y, .17).setTarget(l, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
l.visible = !1;
a.visible = !0;
this.dispatch("setGuideHandCards", r.SELF_LOCAL_SEAT, this._tableData.getHandCards(r.SELF_LOCAL_SEAT), !0);
this._tableData.setPlayingCardAni(!1);
i && i();
});
e.GTween.to2(.35, .35, 1, 1, .17).setTarget(l, e.TweenPropType.Scale).setEase(e.EaseType.Linear);
}
} else setTimeout(() => {
o();
});
};
setTimeout(() => {
o();
});
}
isCardListLoadFinished(t) {
if (t.numChildren > 1 && t.getChildAt(0).x == t.getChildAt(t.numChildren - 1).x && t.getChildAt(0).y == t.getChildAt(t.numChildren - 1).y) return !1;
for (let e = 1; e < t.numChildren - 1; e++) {
const i = t.getChildAt(e - 1), s = t.getChildAt(e), o = t.getChildAt(e + 1);
if (s.x - i.x != o.x - s.x) return !1;
}
return !0;
}
onMsgTowerCards(t) {
const e = r.SELF_LOCAL_SEAT, i = this.view["KW_AniBoom_" + e];
for (let t = 0; t < 7; t++) {
const e = i["KW_CompBoom_" + t];
for (let t = 0; t < e.numChildren; t++) e.getChildAt(t).visible = !1;
}
const s = this.onParseBoomCardList([ ...t._bomb_cards, ...t._tower_cards ]);
let o = s.length;
o > 7 && (o = 7);
let a = 0;
for (let e = 0; e < o; e++) {
const o = s[e];
4 == o.length && a++;
const n = i["KW_CompBoom_" + e];
for (let i = 0; i < o.length; i++) {
const s = o[i];
let a = null;
if (n.numChildren > i) a = n.getChildAt(i); else {
a = n.addItemFromPool();
g.gf.setLayerNode(a);
}
a.visible = !0;
C.default.setCard(a, s);
a.C_Count.selectedIndex = 0;
if (0 == e && i == o.length - 1 && t._tower_count > 0) {
a.C_Count.selectedIndex = 1;
a.KW_TextCnt.text = `${t._tower_count}`;
}
}
n.visible = !1;
}
if (t._flag === m.GLProtocol.msgTowerCards.eFlag.FLAG_MING) {
for (let t = 0; t < o; t++) i["KW_CompBoom_" + t].visible = !0;
console.log("明牌 空白牌");
return;
}
i.visible = !0;
i.KW_AniBoomLight.visible = !1;
i.C_Top.selectedIndex = o;
let n = t._mult;
t._one_tower_mult > 0 && (n = t._mult / t._one_tower_mult);
let l = `baota_0${o}_shengji`, _ = `baota_0${o}_loop`;
if (0 == a || 1 == a) {
l = `baota3_0${o}_shengji`;
_ = `baota3_0${o}_loop`;
} else if (2 == a || 3 == a) {
l = `baota2_0${o}_shengji`;
_ = `baota2_0${o}_loop`;
}
if (t._flag == m.GLProtocol.msgTowerCards.eFlag.FLAG_RELINK || t._flag == m.GLProtocol.msgTowerCards.eFlag.FLAG_MING) {
i.KW_AniBoom.url = "ui://Game_K7Star_Card/Baota";
g.gf.sp.onSpineLoaded(i.KW_AniBoom, t => {
t.loop = !0;
t.premultipliedAlpha = !1;
t.animation = _;
});
this.onShowBonbCardNode(e, i, o, t);
} else if (t._flag === m.GLProtocol.msgTowerCards.eFlag.FLAG_BOMB) {
i.KW_AniBoom.url = "ui://Game_K7Star_Card/Baota";
g.gf.sp.onSpineLoaded(i.KW_AniBoom, s => {
s.premultipliedAlpha = !1;
s.setAnimation(0, l, !1);
s.addAnimation(0, _, !0);
s.setEventListener((s, a) => {
if ("add_img" == a.data.name && i.actScale) {
i.actScale.setHook("updateNum", () => {
console.log("updateNum");
i.KW_Num.text = `x${n}`;
});
i.actScale.play();
this.onShowBonbCardNode(e, i, o, t);
}
});
});
const s = `bao${o}`;
i.KW_AniBoomLight.url = "ui://Game_K7Star_Card/Baota";
g.gf.sp.onSpineLoaded(i.KW_AniBoomLight, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, s, !1);
t.setCompleteListener(t => {
t.animation.name == s && (i.KW_AniBoomLight.visible = !1);
});
});
} else if (t._flag === m.GLProtocol.msgTowerCards.eFlag.FLAG_TOWER) {
i.KW_AniBoomLight.visible = !1;
if (t._one_tower_mult > 0) {
i.KW_AniBoom.url = "ui://Game_K7Star_Card/Baota";
g.gf.sp.onSpineLoaded(i.KW_AniBoom, s => {
s.premultipliedAlpha = !1;
s.setAnimation(0, l, !1);
s.addAnimation(0, _, !0);
s.setEventListener((s, a) => {
if ("add_img" == a.data.name) {
this.onShowBonbCardNode(e, i, o, t);
this.onUpdateBoomMultText(e, n);
}
});
});
const s = `bao${o}`;
i.KW_AniBoomLight.url = "ui://Game_K7Star_Card/Baota";
g.gf.sp.onSpineLoaded(i.KW_AniBoomLight, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, s, !1);
t.setCompleteListener(t => {
t.animation.name == s && (i.KW_AniBoomLight.visible = !1);
});
});
} else {
i.KW_AniBoom.url = "ui://Game_K7Star_Card/Baota";
g.gf.sp.onSpineLoaded(i.KW_AniBoom, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, _, !0);
});
this.onUpdateBoomMultText(e, n);
this.onShowBonbCardNode(e, i, o, t);
}
}
}
onShowBonbCardNode(t, e, i, s) {
for (let t = 0; t < i; t++) e["KW_CompBoom_" + t].visible = !0;
t === r.SELF_LOCAL_SEAT && 4 === s._bomb_count ? e.KW_SelfTips.visible = !0 : e.KW_SelfTips.visible = !1;
}
onParseBoomCardList(t) {
const e = [], i = JSON.parse(JSON.stringify(t));
for (let t = 0; t < i.length; t + 4 - 1) {
let s = [];
s = i.length > t + 4 ? i.splice(t, 4) : i.splice(t, i.length - t);
e.push(s);
}
return e;
}
onUpdateBoomMultText(t, e) {
const i = this.view["KW_AniBoom_" + t];
if (i.actScale) {
i.actScale.setHook("updateNum", () => {
console.log("updateNum");
i.KW_Num.text = `x${e}`;
});
i.actScale.play();
}
}
};
p([ g.gf.listen(r.GUIDE_EVENT.GUI_EVE_GUIDE_STEP + _.GAME_ID) ], f.prototype, "onEventGuideStep", null);
p([ g.gf.listen(r.GUIDE_EVENT.GUI_EVE_SHOW_CLONE + _.GAME_ID) ], f.prototype, "onMsgShowClone", null);
p([ g.gf.listen(r.GUIDE_EVENT.GUI_EVE_SHOW_MULT + _.GAME_ID) ], f.prototype, "onMsgShowMult", null);
p([ g.gf.listen(r.GUIDE_EVENT.GUI_EVE_SHOW_DRAW_CARD_1 + _.GAME_ID) ], f.prototype, "onMsgShowDrawCard1", null);
p([ g.gf.listen(r.GUIDE_EVENT.GUI_EVE_SHOW_PLAY_CARD_1 + _.GAME_ID) ], f.prototype, "onMsgShowPlayCard1", null);
p([ g.gf.listen(r.GUIDE_EVENT.GUI_EVE_SHOW_DRAW_CARD_2 + _.GAME_ID) ], f.prototype, "onMsgShowDrawCard2", null);
p([ g.gf.listen(r.GUIDE_EVENT.GUI_EVE_SHOW_TOWER_CARD_1 + _.GAME_ID) ], f.prototype, "onMsgShowTowerCard1", null);
p([ g.gf.listen(r.GUIDE_EVENT.GUI_EVE_SHOW_TOWER_CARD_2 + _.GAME_ID) ], f.prototype, "onMsgShowTowerCard2", null);
p([ g.gf.listen(r.GUIDE_EVENT.GUI_EVE_SHOW_TOWER_CARD_3 + _.GAME_ID) ], f.prototype, "onMsgShowTowerCard3", null);
p([ g.gf.listen(r.GUIDE_EVENT.GUI_EVE_SHOW_TOWER_JOKER + _.GAME_ID) ], f.prototype, "onMsgShowTowerJoker", null);
p([ g.gf.listen(r.GUIDE_EVENT.GUI_EVE_SHOW_TOWER_CARD_4 + _.GAME_ID) ], f.prototype, "onMsgShowTowerCard4", null);
p([ g.gf.listen(r.GUIDE_EVENT.GUI_EVE_SHOW_RESULT + _.GAME_ID) ], f.prototype, "onMsgShowResult", null);
p([ g.gf.listen("onMsgRecommendCards" + _.GAME_ID) ], f.prototype, "onMsgRecommendCards", null);
p([ g.gf.listen("unpdateSuggestPanel" + _.GAME_ID) ], f.prototype, "updateSuggestPanel", null);
p([ g.gf.listen("onMsgGuideActPower" + _.GAME_ID) ], f.prototype, "onMsgActPower", null);
p([ g.gf.listen("onMsgGuideAddCards" + _.GAME_ID) ], f.prototype, "onMsgAddCards", null);
p([ g.gf.listen("setGuideHandCards" + _.GAME_ID) ], f.prototype, "setHandCards", null);
p([ g.gf.listen("showGuideDrawCardsOther" + _.GAME_ID) ], f.prototype, "showDrawCardsOther", null);
p([ g.gf.listen("allDownCards" + _.GAME_ID) ], f.prototype, "allDownCards", null);
p([ g.gf.listen("setGuideCanTouchCards" + _.GAME_ID) ], f.prototype, "setCanTouchCards", null);
p([ g.gf.listen("setGuideTopCards" + _.GAME_ID) ], f.prototype, "setTopCards", null);
p([ g.gf.listen("showGuideDrawCards" + _.GAME_ID) ], f.prototype, "showDrawCards", null);
p([ g.gf.listen("onMsgTowerCards" + _.GAME_ID) ], f.prototype, "onMsgTowerCards", null);
p([ g.gf.listen("onUpdateBoomMultText" + _.GAME_ID) ], f.prototype, "onUpdateBoomMultText", null);
const A = f = p([ g.gf.controller({
name: "GameGuide",
module: "game_k7star",
fguiObject: "View",
layer: g.gf.ViewLayer.Base,
fguiPackage: [ "Game_K7Star_Common", "Game_K7Star_Card", "Game_K7Star_Btn", "Game_K7Star_Guide" ],
cachable: !0,
sortingOrder: r.FGUI_ORDER.GAME_POP
}) ], f);
},
"./bin/ui/guide/GameGuideAbort.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => _
});
var s = i("./bin/config/GameConfig.js"), a = i("./bin/config/GameDefine.js"), n = i("./bin/gf.js");
let l = class extends n.gf.mvc.UIController {
constructor() {
super(...arguments);
this._award = 0;
}
onUIBinded() {
this.addClick(this.view.KW_Btn_Close, this.onBtnClose);
this.addClick(this.view.KW_BtnConfirm, this.onBtnAbort);
this.addClick(this.view.KW_BtnCancel, this.onBtnCancel);
}
initUI() {
this._award = this.getImpl(n.comm.lobby.ICommonActModule).getPlayerGuideAward(s.GAME_ID);
this.view.KW_TextAward.text = n.comm.StringUtils.dealBigNumEx5(this._award) + "云币奖励";
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newplayer, {
newplayer_ui: "1"
});
}
onBtnClose() {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newplayer, {
newplayer_click: "5"
});
this.close();
}
onBtnCancel() {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newplayer, {
newplayer_click: "4"
});
this.close();
}
onBtnAbort() {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newplayer, {
newplayer_click: "3"
});
this.getImpl(n.comm.lobby.ICommonActModule).reqPlayerGuide(s.GAME_ID, n.comm.AwardCMD.PlayerGuide.CMD_FINISH);
this.dispatch(a.GUIDE_EVENT.GUI_EVE_CHANGE_ROOM + s.GAME_ID);
this.dispatch("onShowReady");
this.close();
}
};
const _ = l = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
}([ n.gf.controller({
name: "GameGuideAbort",
module: "game_k7star",
fguiObject: "ViewAbort",
layer: n.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_Guide" ],
cachable: !0,
sortingOrder: a.FGUI_ORDER.GAME_POP
}) ], l);
},
"./bin/ui/guide/GameGuideEnter.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => r
});
var s = i("./bin/config/GameConfig.js"), a = i("./bin/config/GameDefine.js"), n = i("./bin/gf.js"), l = i("./bin/logic/guide/GameGuideModule.js");
let _ = class extends n.gf.mvc.UIController {
constructor() {
super(...arguments);
this._award = 0;
}
onUIBinded() {
this.addClick(this.view.KW_Btn_Close, this.onBtnClose);
this.addClick(this.view.KW_BtnConfirm, this.onBtnGuild);
this.addClick(this.view.KW_BtnCancel, this.onBtnCancel);
}
initUI() {
this._award = this.getImpl(n.comm.lobby.ICommonActModule).getPlayerGuideAward(s.GAME_ID);
this.view.KW_TextAward.text = n.comm.StringUtils.dealBigNumEx5(this._award) + "云币奖励";
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newplayer, {
newplayer_ui: "0"
});
}
onBtnCancel() {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newplayer, {
newplayer_click: "1"
});
this.skipGuild();
}
onBtnClose() {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newplayer, {
newplayer_click: "2"
});
this.skipGuild();
}
skipGuild() {
this.getImpl(n.comm.lobby.ICommonActModule).reqPlayerGuide(s.GAME_ID, n.comm.AwardCMD.PlayerGuide.CMD_FINISH);
this.dispatch(a.GUIDE_EVENT.GUI_EVE_CHANGE_ROOM + s.GAME_ID);
this.dispatch("onShowReady");
this.close();
}
onBtnGuild() {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newplayer, {
newplayer_click: "0"
});
this.getImpl(l.default).startStep(a.GUIDE_STEP.GUDS_INIT);
this.close();
}
};
const r = _ = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
}([ n.gf.controller({
name: "GameGuideEnter",
module: "game_k7star",
fguiObject: "ViewEnter",
layer: n.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_Guide" ],
cachable: !0,
sortingOrder: a.FGUI_ORDER.GAME_POP
}) ], _);
},
"./bin/ui/guide/GameGuidePop.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => l
});
var s = i("./bin/config/GameDefine.js"), a = i("./bin/gf.js");
let n = class extends a.gf.mvc.UIController {
constructor() {
super(...arguments);
this._award = 0;
}
onUIBinded() {
this.addClick(this.view.KW_Btn_Close, this.onBtnClose);
this.addClick(this.view.KW_Btn_Award, this.onBtnAward);
}
onUnUIBinded() {}
initUI(t) {
this._award = t;
this.view.KW_Txt_Award.text = "云币" + a.comm.StringUtils.dealBigNumEx5(t || 0);
}
onDestroy() {}
onBtnClose() {
this.onBtnAward();
}
onBtnAward() {
this.close();
const t = {
value: this._award,
awardType: o.ProductItemList.GOLD
};
this.getImpl(a.comm.ICommonDlgs).showAwardUI([ t ], 0, () => {
this.getImpl(a.comm.lobby.IPlayerGameDataManager).reqPlayerGameData();
});
}
};
const l = n = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
}([ a.gf.controller({
name: "GameGuidePop",
module: "game_k7star",
fguiObject: "ViewPop",
layer: a.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_Guide" ],
cachable: !0,
sortingOrder: s.FGUI_ORDER.GAME_POP
}) ], n);
},
"./bin/ui/main/GameAni.js": (t, i, s) => {
s.r(i);
s.d(i, {
default: () => A
});
var o = s("./bin/config/CardType.js"), a = s("./bin/config/GameConfig.js"), n = s("./bin/config/GameDefine.js"), l = s("./bin/config/SoundConfig.js"), _ = s("./bin/data/TableData.js"), r = s("./bin/gf.js"), d = s("./bin/logic/actModules/data/GameActData.js"), h = s("./bin/logic/actModules/GameActModule.js"), c = s("./bin/logic/moudles/GameLogicManager.js"), g = s("./bin/logic/protocol/GLProtocol.js"), u = s("./bin/ui/component/CardComb.js"), m = s("./bin/ui/main/GameCard.js"), C = s("./bin/ui/main/GamePlayer.js"), p = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let f = class extends r.gf.mvc.UIController {
constructor() {
super(...arguments);
this._loaderPool = [];
this._AniCardTypeMp4 = null;
this._ypAwardx = 0;
this._ypAwardy = 0;
this._shakeOrignPos = {
x: 0,
y: 0
};
}
onUIBinded() {
this._tableData = this.getImpl(_.default);
this._gameLogicManager = this.getImpl(c.default);
this._gamePlayer = this.getImpl(C.default);
this._gameCard = this.getImpl(m.default);
this._iSound = this.getImpl(r.gf.ISound);
this._iSoundModule = this.getImpl(r.comm.lobby.ISoundModule);
this._loaderPool = [];
this.addClick(this.view.KW_BtnRechargeTip, () => {
this.dispatch("hideRechargeTip" + a.GAME_ID);
});
this._buffCardAni = this.view.KW_BuffCardAni;
}
onUnUIBinded() {}
initUI() {
const t = r.gf.FGUI.getChild(r.gf.App.inst.root, "BaseRoot");
this._shakeOrignPos = {
x: t.x,
y: t.y
};
this.showAniCardType(!1);
this.showMatching(!1);
this.resetUI();
}
resetUI() {
r.gf.sp.onSpineLoaded(this.view.KW_AniDFDJ, t => {
t.clearTracks();
});
r.gf.sp.onSpineLoaded(this.view.KW_AniStart, t => {
t.clearTracks();
});
r.gf.sp.onSpineLoaded(this.view.KW_AniHuFull, t => {
t.clearTracks();
});
r.gf.sp.onSpineLoaded(this.view.KW_AniCardType, t => {
t.clearTracks();
});
this.view.KW_Boom.visible = !1;
this.view.KW_AniDFDJ.visible = !1;
this.view.KW_AniStart.visible = !1;
this.view.KW_AniHuFull.visible = !1;
this.view.KW_AniCardType.visible = !1;
this.view.KW_mask.visible = !1;
this.showWinLoseAniVisible(!1);
for (let t = 0; t < n.MAX_PLAYER; t++) {
r.gf.sp.onSpineLoaded(this.view["KW_AniZimo_" + t], t => {
t.clearTracks();
});
r.gf.sp.onSpineLoaded(this.view["KW_AniJZZ_" + t], t => {
t.clearTracks();
});
r.gf.sp.onSpineLoaded(this.view["KW_AniHu_" + t], t => {
t.clearTracks();
});
this.view["KW_AniZimo_" + t].visible = !1;
this.view["KW_AniJZZ_" + t].visible = !1;
this.view["KW_AniHu_" + t].visible = !1;
}
this.view.C_ShowYPAni.setSelectedIndex(0);
this.showAddRichTips(!1, {
x: 0,
y: 0
});
}
onDestroy() {}
onGameStart() {
this.showMatching(!1);
}
showMatching(t) {
this.unscheduleAllCallbacks();
if (t) {
let t = 0;
this.view.KW_TextMatchTime.text = t.toString() + "秒";
this.schedule(() => {
this.view.KW_TextMatchTime.text = t.toString() + "秒";
t++;
}, 1);
}
this.view.KW_AniMatch.visible = t;
this.view.KW_TextMatchTime.visible = t;
}
showAniHu(t, i) {
this.view["KW_AniHu_" + i].visible = t;
if (t) {
const t = this._gameCard.view["KW_CompHuCard_Light_" + i];
if (t && t.visible) {
const s = t.localToGlobal(), o = e.GRoot.inst.globalToLocal(s.x, s.y);
console.log("lpos:", JSON.stringify(o));
this.view["KW_AniHu_" + i].setPosition(o.x, o.y);
this.view["KW_AniHu_" + i].url = "ui://Game_K7Star_Ani/Hepai";
r.gf.sp.onSpineLoaded(this.view["KW_AniHu_" + i], t => {
t.premultipliedAlpha = !1;
t.loop = !1;
t.animation = "animation";
t.setCompleteListener(() => {
this.showAniHu(!1, i);
});
t.setEventListener((t, e) => {
"add_img" == e.data.name ? this.dispatch("onMsgHuCards" + a.GAME_ID) : e.data.name;
});
});
} else this.view["KW_AniHu_" + i].visible = !1;
}
}
showAniCardType(t, e, i, s) {
if (t = t || !1) {
const o = this.getCardTypeAniUrl(e);
console.log("showAniCardType", o);
const a = !1;
if (o && o[6] && a) if (o[7] && 1 == o[7] && s) {
this.view.KW_AniMaxHuCard.visible = !0;
const t = this.view.KW_AniMaxHuCard.KW_Value;
u.default.setCard(t, s);
r.gf.sp.onSpineLoaded(this.view.KW_AniMaxHuCard.KW_Ani, t => {
t.premultipliedAlpha = !1;
t.loop = !1;
t.animation = "animation";
});
const e = this.view.KW_AniMaxHuCard.openCard;
if (e) {
const t = r.gf.App.inst.root.width, s = r.gf.App.inst.root.height;
this.view.KW_AniMaxHuCard.KW_Value.center();
e.setValue("value1", t / 2, s / 2 + 1e3);
e.setValue("value2", t / 2, s / 2 + 1e3);
e.setValue("value3", t / 2, s / 2);
this.prePlatCardsTypeMP4(o[6], i);
e.play(() => {
this.view.KW_AniMaxHuCard.visible = !1;
this.playMp4();
});
}
} else this.playMp4(); else if (o && o[4] && o[5]) {
this.view.KW_AniCardType.visible = t;
this.view.KW_AniCardType.url = o[4];
r.gf.sp.onSpineLoaded(this.view.KW_AniCardType, t => {
t.premultipliedAlpha = !1;
t.loop = !1;
t.animation = o[5];
t.setEventListener((t, e) => {
if ("add_img10" == e.data.name) {
this.showAniCardType(!1);
i && (null == i || i());
}
});
});
}
this.playCardTypeSound(e);
} else this.view.KW_AniCardType.visible = t;
}
playMp4() {
var t, e;
if (this._videoReady && "boolean" != typeof this._videoReady) {
null === (e = null === (t = this._videoReady) || void 0 === t ? void 0 : t.play) || void 0 === e || e.call(t);
this._videoReady = null;
} else this._videoReady = !0;
}
prePlatCardsTypeMP4(t, i) {
const s = new e.GLoader();
s.setPivot(.5, .5, !0);
s.setPosition(this.view.KW_AniCardTypeMp4.x, this.view.KW_AniCardTypeMp4.y);
s.setSize(this.view.KW_AniCardTypeMp4.width, this.view.KW_AniCardTypeMp4.height);
if (this._AniCardTypeMp4) {
r.gf.videoPlayer.getOrAddVideo(this._AniCardTypeMp4, null, t => {
t.stop();
});
this.view.KW_mask.visible = !1;
this._AniCardTypeMp4.removeFromParent();
this._AniCardTypeMp4 = null;
}
this.view.addChild(s);
this._AniCardTypeMp4 = s;
this.view.KW_mask.visible = !1;
this.view.KW_AniCardType.visible = !1;
this._AniCardTypeMp4.visible = !0;
this._AniCardTypeMp4.touchable = !1;
r.gf.videoPlayer.getOrAddVideo(this._AniCardTypeMp4, null, e => {
console.log("gf.videoPlayer.getOrAddVideo 1 ", 1);
e.setEventCallBack((t, s, o) => {
console.log("gf.videoPlayer.getOrAddVideo arg", t, s, o);
if (s == r.gf.videoPlayer.EventType.COMPLETED) {
console.log("gf.videoPlayer.getOrAddVideo arg", t, s, o);
if (this._AniCardTypeMp4) {
this._AniCardTypeMp4.removeFromParent();
this._AniCardTypeMp4 = null;
}
this.view.KW_mask.visible = !1;
i && (null == i || i());
} else if (s == r.gf.videoPlayer.EventType.READY_TO_PLAY) {
console.log("11 gf.videoPlayer.getOrAddVideo arg", t, s, o);
if (this._videoReady) {
e.play();
this.playMP4Mask();
this._videoReady = null;
} else this._videoReady = e;
}
});
e.playOnAwake = !1;
e.setPath(t, "game_k7star", t => {
console.log("gf.videoPlayer.getOrAddVideo 1 success", t);
if (t) return {};
});
});
}
playMP4Mask() {
const t = r.gf.App.inst.root.width, e = r.gf.App.inst.root.height, i = Math.ceil(100 * t / e), s = Math.ceil(164200 / 750);
this.view.KW_mask.visible = !1;
s > i ? this.view.KW_mask.visible = !0 : this._AniCardTypeMp4.setScale(i / s, i / s);
}
playCardTypeSound(t) {
var e, i;
const s = null === (e = null === o.CardTypeInfo || void 0 === o.CardTypeInfo ? void 0 : o.CardTypeInfo[t]) || void 0 === e ? void 0 : e[2];
if (s) {
const t = (null === (i = this._iSoundModule) || void 0 === i ? void 0 : i.getSex()) || 0, e = (0, 
l.getCardTypePath)(t);
this.playEffect(e + s, "game_k7star");
}
}
showWinLoseAniVisible(t) {
for (let e = 0; e < n.MAX_PLAYER; e++) this.view["KW_NodeTextBg" + e]["KW_NodeText" + e].visible = t;
}
getRandomNumber(t, e) {
return Math.floor(Math.random() * (e - t + 1) + t);
}
getRandomSing() {
return this.getRandomNumber(0, 1) > 0 ? 1 : -1;
}
flyNodeToPlayerEx(t, i, s, o, a) {
this._loaderPool.forEach(t => {
t.visible = !1;
});
this.playEffect(l.SOUND_PATH.ROULETTE_TALLY, "game_k7star");
const n = this._gamePlayer.view["KW_CompHead" + i];
let _ = 0, r = !0, d = 0;
const h = 10 * o.length;
for (let i = 0; i < o.length; i++) {
const l = o[i];
for (let i = 0; i < 10; i++) {
const i = this._gamePlayer.view["KW_CompHead" + l], o = this.getLoader(_, s);
_++;
o.visible = !0;
o.url = t;
o.setPosition(i.x, i.y);
o.rotation = this.getRandomNumber(0, 360);
const c = i.x + this.getRandomNumber(-120, 120), g = i.y + this.getRandomNumber(-80, 80);
e.GTween.delayedCall(this.getRandomNumber(0, 60) / 100).setTarget(o).onComplete(() => {
o.visible = !0;
e.GTween.to2(o.x, o.y, c, g, this.getRandomNumber(10, 15) / 100).setTarget(o, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
e.GTween.to2(o.x, o.y, o.x, o.y + this.getRandomNumber(5, 10) * this.getRandomSing(), this.getRandomNumber(20, 30) / 100).setTarget(o, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
e.GTween.to2(o.x, o.y, n.x, n.y, this.getRandomNumber(35, 45) / 100).setTarget(o, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
o.visible = !1;
d++;
if (a && d == h && r) {
r = !1;
a();
}
});
});
});
});
}
}
}
getLoader(t, i) {
this._loaderPool[i] || (this._loaderPool[i] = []);
if (t >= this._loaderPool[i].length) {
const t = new e.GLoader();
t.setPivot(.5, .5, !0);
this.view.addChild(t);
this._loaderPool[i].push(t);
}
return this._loaderPool[i][t];
}
getCardTypeAniUrl(t) {
return o.CardTypeInfo[t];
}
onMsgHuCardsTypeAni(t) {
var e, i, s;
console.log(">>>>>>>>>>>>>>>>>>>>>>>sendendwait onMsgHuCardsTypeAni");
const o = this._tableData.getRoundResult();
this.view.KW_mask.visible = !1;
let a = 0, n = 0, l = 0;
for (let t = 0; t < o._count; t++) for (let e = 0; e < o._mult[t].length; e++) {
const i = o._mult[t][e], s = o._ct[t][e];
if (a < i) {
n = s;
a = i;
l = o._hu_card[t][e];
}
}
let _ = 0, d = 0;
for (let t = 0; t < o._count; t++) for (let a = 0; a < o._score[t].length; a++) {
const n = o._score[t][a], l = null !== (s = null === (i = null === (e = null == o ? void 0 : o._star_combo_index) || void 0 === e ? void 0 : e[t]) || void 0 === i ? void 0 : i[a]) && void 0 !== s ? s : 0;
l > d && (d = l);
0 < n && _++;
}
if (_ > o._count) {
this.view.KW_AniYPDX.visible = !0;
this.view.KW_AniYPDX.url = "ui://Game_K7Star_Ani/ani_yipaoduoxiang";
r.gf.sp.onSpineLoaded(this.view.KW_AniYPDX, e => {
e.clearTracks();
e.loop = !1;
e.animation = "animation";
e.setCompleteListener(() => {
this.view.KW_AniYPDX.visible = !1;
});
e.setEventListener((e, i) => {
"add_img10" == i.data.name && (d > 0 ? this._showLianJiAniCardType(d, t) : this.onMsgRoundResultJZZ(() => {
this.onMsgRoundResult(() => {
console.log("---------------------sendEndWait onMsgHuCardsTypeAni1");
t && (null == t || t());
});
}));
});
});
} else d > 0 ? this._showLianJiAniCardType(d, t) : this.showAniCardType(!0, n, () => {
this.onMsgRoundResultJZZ(() => {
this.onMsgRoundResult(() => {
console.log("---------------------sendEndWait onMsgHuCardsTypeAni2");
t && (null == t || t());
});
});
}, l);
}
_showLianJiAniCardType(t, e) {
const i = o.OtherCardTypeInfo[`LIANJI_${t}`];
if (i) {
this.view.KW_AniCardType.visible = !0;
this.view.KW_AniCardType.url = i;
r.gf.sp.onSpineLoaded(this.view.KW_AniCardType, i => {
var s;
i.premultipliedAlpha = !1;
i.loop = !1;
i.animation = "animation";
const o = (null === (s = this._iSoundModule) || void 0 === s ? void 0 : s.getSex()) || 0;
this.playEffect((0, l.getSexEff)(o, `LIANJI${t}_SOUND`), "game_k7star");
i.setEventListener((i, s) => {
if ("add_img" == s.data.name) this.onMsgRoundResult(null, t); else if ("end" == s.data.name) {
this.dispatch("onMsgUpdateStarCountUI" + a.GAME_ID, !0);
this.view.KW_AniCardType.visible = !1;
this.onMsgRoundResultJZZ(() => {
e && (null == e || e());
});
}
});
});
}
}
onMsgRoundResultJZZ(t) {
var e, i, s, o;
let a = 0;
const _ = this._tableData.getRoundResult();
for (let l = 0; l < n.MAX_PLAYER; l++) {
const r = this._tableData.seatToLocal(l);
for (let d = 0; d < _._count; d++) if (0 != (null === (i = null === (e = _._score) || void 0 === e ? void 0 : e[d]) || void 0 === i ? void 0 : i[l]) && (null === (o = null === (s = null == _ ? void 0 : _._ex_flag) || void 0 === s ? void 0 : s[d]) || void 0 === o ? void 0 : o[l]) === n.eResultExFlag.FlagJZZ) {
0 === a ? this.showAniZJJ(r, t) : this.showAniZJJ(r);
a++;
break;
}
}
0 != a && this.playEffect(l.SOUND_PATH.GAME_JZZ, "game_k7star");
0 === a && t && t();
}
onMsgRoundResult(t, i = 0) {
var s, o, l, _, h, c, g, u, m, C, p, f, A, S, I, E, L, T, D, w, P, G, b, v, y, M, R, B, W, O, N, K, U, x, F, k, H;
console.log(">>>>>>>>>>>>>>>>>>>>>>>sendendwait onMsgRoundResult");
const V = this._tableData.getRoundResult(), Y = [ !1, !1, !1, !1 ];
for (let t = 0; t < n.MAX_PLAYER; t++) for (let e = 0; e < V._count; e++) if (0 != V._score[e][t] || (null === (o = null === (s = null == V ? void 0 : V._ex_flag) || void 0 === s ? void 0 : s[e]) || void 0 === o ? void 0 : o[t]) === n.eResultExFlag.FlagJZZ) {
Y[t] = !0;
break;
}
let j = !1;
for (let t = 0; t < n.MAX_PLAYER; t++) {
const s = this._tableData.seatToLocal(t), o = this.view["KW_NodeTextBg" + s]["KW_NodeText" + s];
e.GTween.kill(o);
o.setScale(1, 1);
o.alpha = 1;
o.y = null !== (l = o.tempY) && void 0 !== l ? l : o.y;
o.visible = Y[t];
for (let t = 0; t < o.numChildren; t++) o.getChildAt(t).visible = !1;
let a = 0;
for (let e = 0; e < V._count; e++) {
if (0 == (null === (h = null === (_ = V._score) || void 0 === _ ? void 0 : _[e]) || void 0 === h ? void 0 : h[t])) continue;
let i = null;
if (o.numChildren > e) i = o.getChildAt(e); else {
i = o.addItemFromPool();
r.gf.setLayerNode(i);
}
++a;
i.visible = !0;
if ((null === (g = null === (c = null == V ? void 0 : V._ex_flag) || void 0 === c ? void 0 : c[e]) || void 0 === g ? void 0 : g[t]) === n.eResultExFlag.FlagDouble) {
1 == this.getImpl(d.default).getDbConfig().clv ? i.KW_TextWin.font = "ui://Game_K7Star_Ani/fanbei02-export" : i.KW_TextWin.font = "ui://Game_K7Star_Ani/fanbei-export";
j = !0;
} else (null === (m = null === (u = null == V ? void 0 : V._ex_flag) || void 0 === u ? void 0 : u[e]) || void 0 === m ? void 0 : m[t]) === n.eResultExFlag.FlagWinLimit || (null === (p = null === (C = null == V ? void 0 : V._ex_flag) || void 0 === C ? void 0 : C[e]) || void 0 === p ? void 0 : p[t]) === n.eResultExFlag.FlagPlayerLimit ? i.KW_TextWin.font = "ui://Game_K7Star_Ani/jiesuan2-export" : (null === (A = null === (f = null == V ? void 0 : V._ex_flag) || void 0 === f ? void 0 : f[e]) || void 0 === A ? void 0 : A[t]) === n.eResultExFlag.FlagStarCombo ? i.KW_TextWin.font = "ui://Game_K7Star_Ani/" + ((null === (I = null === (S = V._score) || void 0 === S ? void 0 : S[e]) || void 0 === I ? void 0 : I[t]) >= 0 ? "lianji02-export" : "lianji01-export") : i.KW_TextWin.font = "ui://Game_K7Star_Ani/" + ((null === (L = null === (E = V._score) || void 0 === E ? void 0 : E[e]) || void 0 === L ? void 0 : L[t]) >= 0 ? "jiesuan4-export" : "jiesuan3-export");
let s = "";
(null === (D = null === (T = null == V ? void 0 : V._ex_flag) || void 0 === T ? void 0 : T[e]) || void 0 === D ? void 0 : D[t]) === n.eResultExFlag.FlagDouble ? s = "（翻倍）" : (null === (P = null === (w = null == V ? void 0 : V._ex_flag) || void 0 === w ? void 0 : w[e]) || void 0 === P ? void 0 : P[t]) === n.eResultExFlag.FlagBankrupt ? s = "（破产）" : (null === (b = null === (G = null == V ? void 0 : V._ex_flag) || void 0 === G ? void 0 : G[e]) || void 0 === b ? void 0 : b[t]) === n.eResultExFlag.FlagPlayerLimit ? s = "（上限）" : (null === (y = null === (v = null == V ? void 0 : V._ex_flag) || void 0 === v ? void 0 : v[e]) || void 0 === y ? void 0 : y[t]) === n.eResultExFlag.FlagWinLimit ? s = "（封顶）" : (null === (R = null === (M = null == V ? void 0 : V._ex_flag) || void 0 === M ? void 0 : M[e]) || void 0 === R ? void 0 : R[t]) === n.eResultExFlag.FlagStarCombo && (s = "（连击）");
i.KW_TextWin.text = (V._score[e][t] > 0 ? "+" : "") + r.comm.StringUtils.dealBigNumEx5(V._score[e][t]) + s;
(null === (W = null === (B = null == V ? void 0 : V._ex_flag) || void 0 === B ? void 0 : B[e]) || void 0 === W ? void 0 : W[t]) === n.eResultExFlag.FlagJZZ ? i.C_JZZ.selectedIndex = 1 : i.C_JZZ.selectedIndex = 0;
null === (N = null === (O = null == V ? void 0 : V._ex_flag) || void 0 === O ? void 0 : O[e]) || void 0 === N || N[t], 
n.eResultExFlag.FlagJZZ;
}
if (i > 0) {
o.tempY || (o.tempY = o.y);
let t = 1;
a >= 5 && (t = .65);
const i = .65 * t, s = t;
o.setScale(i, i);
o.y = o.tempY + 60;
e.GTween.to2(i, i, s, s, .1).setTarget(o, e.TweenPropType.Scale).onComplete(() => {
e.GTween.to2(o.x, o.y, o.x, o.tempY, 1.34).setTarget(o, e.TweenPropType.Position).setEase(e.EaseType.SineOut).onComplete(() => {
e.GTween.to(1, 0, .5).setTarget(o, e.TweenPropType.Alpha).onComplete(() => {
this.showWinLoseAniVisible(!1);
o.alpha = 1;
});
});
});
}
}
if (j) {
this.shakeEffect("doubleprops");
this.dispatch("onDoublePropBtnAni" + a.GAME_ID);
}
const J = [], X = [ !1, !1, !1, !1 ];
for (let t = 0; t < V._count; t++) {
let e = 0;
const i = [];
for (let s = 0; s < n.MAX_PLAYER; s++) {
if ((null === (U = null === (K = V._score) || void 0 === K ? void 0 : K[t]) || void 0 === U ? void 0 : U[s]) > 0) {
e = s;
for (let e = 0; e < n.MAX_PLAYER; e++) (null === (F = null === (x = V._score) || void 0 === x ? void 0 : x[t]) || void 0 === F ? void 0 : F[e]) < 0 && e != s && i.push(e);
J.push({
win: e,
lost: i
});
}
(null === (H = null === (k = V._ex_flag) || void 0 === k ? void 0 : k[t]) || void 0 === H ? void 0 : H[s]) == n.eResultExFlag.FlagBankrupt && (X[s] = !0);
}
}
const $ = [];
for (let t = 0; t < n.MAX_PLAYER; t++) for (let e = 0; e < J.length; e++) {
const i = J[e];
if (i.win == t) {
$[t] || ($[t] = {
win: t,
lost: []
});
$[t].lost.push(...i.lost);
}
}
const q = [];
for (let t = 0; t < $.length; t++) {
const e = $[t];
if (!e) continue;
const i = Array.from(new Set(e.lost));
console.log(i);
const s = [];
for (let t = 0; t < i.length; t++) s.push(this._tableData.seatToLocal(i[t]));
q.push({
win: this._tableData.seatToLocal(e.win),
lost: s
});
}
let Z = !1;
for (let e = 0; e < q.length; e++) {
const s = q[e];
this.flyNodeToPlayerEx("ui://_Common/img_huobi_shuangkou", s.win, e, s.lost, () => {
if (!1 === Z) {
Z = !0;
t && t();
0 == i && this.showWinLoseAniVisible(!1);
const e = V._broken_time;
for (let t = 0; t < X.length; t++) if (1 == X[t]) {
const i = this._tableData.seatToLocal(t);
this.dispatch("showChargingSigns" + a.GAME_ID, !0, i, e);
}
}
});
}
}
throwProp(t, e) {
this._gameLogicManager.sendReqUsingPropEx(t, e);
}
showPropAni(t, i, s) {
const o = r.comm.getPropAniInfo(s);
if (!o) return;
const a = new e.GLoader3D(), n = this.getImpl(r.gf.IViewPlugin).getViewController("GamePlayer"), l = n.view["KW_CompHead" + t], _ = n.view["KW_CompHead" + i];
a.setPivot(.5, .5, !0);
a.autoSize = !0;
a.touchable = !1;
this.view.addChild(a);
const d = r.gf.newVec2(_.x, _.y);
a.setPosition(l.x, l.y);
a.visible = !0;
a.url = o.url;
r.gf.sp.onSpineLoaded(a, t => {
t.loop = !1;
t.animation = o.normal;
});
e.GTween.to2(l.x, l.y, d.x, d.y, .5).setTarget(a, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
r.gf.sp.onSpineLoaded(a, t => {
t.clearTracks();
t.loop = !1;
t.animation = o.play;
t.setCompleteListener(t => {
"animation1" != t.animation.name && a.removeFromParent();
});
});
this.playEffect(o.effect);
});
}
onMsgGameState(t) {
t._state >= n.ENUM_GAME_STATE.GS_START && this.showMatching(!1);
if (t._state == n.ENUM_GAME_STATE.GS_PEAK_GAME) {
this.view.KW_AniDFDJ.visible = !0;
this.playEffect(l.SOUND_PATH.GAME_BATTLE, "game_k7star");
this.view.KW_AniDFDJ.url = "ui://Game_K7Star_Ani/Dianfengduijue";
r.gf.sp.onSpineLoaded(this.view.KW_AniDFDJ, t => {
t.premultipliedAlpha = !1;
t.loop = !1;
t.animation = "animation";
t.setCompleteListener(() => {
this.view.KW_AniDFDJ.visible = !1;
console.log("---------------------sendEndWait onMsgGameState");
this._gameLogicManager.sendEndWait();
});
});
} else if (t._state == n.ENUM_GAME_STATE.GS_TOTAL_RESULT) {
this.view.KW_AniStart.visible = !0;
this.view.KW_AniStart.url = "ui://Game_K7Star_Ani/Duiju_tishi";
r.gf.sp.onSpineLoaded(this.view.KW_AniStart, t => {
t.premultipliedAlpha = !1;
t.loop = !1;
t.animation = "animation2";
t.setCompleteListener(() => {
this.view.KW_AniStart.visible = !1;
});
});
}
}
onMsgGameStartAni(t) {
this.view.KW_AniStart.visible = !0;
this.playEffect(l.SOUND_PATH.GAME_START, "game_k7star");
this.view.KW_AniStart.url = "ui://Game_K7Star_Ani/Duiju_tishi";
r.gf.sp.onSpineLoaded(this.view.KW_AniStart, e => {
e.premultipliedAlpha = !1;
e.loop = !1;
e.animation = "animation1";
e.setCompleteListener(() => {
this.view.KW_AniStart.visible = !1;
null == t || t();
});
});
}
onMsgTowerCards(t) {
if (t._flag == g.GLProtocol.msgTowerCards.eFlag.FLAG_RELINK || t._flag == g.GLProtocol.msgTowerCards.eFlag.FLAG_MING) return;
if (this._tableData.isBombCardsBuff(t)) {
this.dispatch("onMsgNoLimitInfoAni" + a.GAME_ID, t);
return;
}
const e = t._seat, i = this._tableData.seatToLocal(e), s = this.view.KW_Boom, o = this.view["KW_ActPos_" + i];
s.setPosition(o.x, o.y);
s.visible = !0;
s.KW_Num.visible = !1;
let n = "animation2";
if (t._flag == g.GLProtocol.msgTowerCards.eFlag.FLAG_TOWER) {
n = "animation1";
s.KW_Num.visible = !0;
s.KW_Num.text = `x${t._tower_count}`;
}
s.KW_Bao.url = "ui://Game_K7Star_Ani/Zhuang_bao_tishi";
r.gf.sp.onSpineLoaded(s.KW_Bao, e => {
e.premultipliedAlpha = !1;
e.loop = !1;
e.animation = n;
e.setCompleteListener(() => {
s.visible = !1;
});
e.setEventListener((e, i) => {
if ("add_img10" == i.data.name) if (t._flag == g.GLProtocol.msgTowerCards.eFlag.FLAG_BOMB) {
console.log("---------------------sendEndWait onMsgTowerCards2");
this._gameLogicManager.sendEndWait();
} else if (t._flag == g.GLProtocol.msgTowerCards.eFlag.FLAG_TOWER) if (t._one_tower_mult > 0) this.showAniBoomFull(); else {
console.log("---------------------sendEndWait onMsgTowerCards3");
this._gameLogicManager.sendEndWait();
}
});
});
}
onMsgHuCardsAni() {
var t;
console.log(">>>>>>>>>>>>>>>>>>>>>>>sendendwait onMsgHuCardsAni");
const e = [], i = this._tableData.getRoundResultHuList(), s = this._tableData.getRoundResultChiFlag();
for (let t = 0; t < i.length; t++) if (i[t]) {
const i = this._tableData.seatToLocal(t);
this.showAniHu(!0, i);
e.push(t);
}
this.playEffect(l.SOUND_PATH.GAME_HE, "game_k7star");
const o = (null === (t = this._iSoundModule) || void 0 === t ? void 0 : t.getSex()) || 0;
if (1 == e.length) {
const t = this._tableData.seatToLocal(e[0]);
let i = !0;
for (let t = 0; t < s.length; t++) if (0 == s[t]) {
i = !1;
break;
}
this.view["KW_AniZimo_" + t].visible = !0;
let a = "animation1";
if (i) {
this.playEffect((0, l.getSexEff)(o, "ZIMO_SOUND"), "game_k7star");
a = "animation2";
} else this.playEffect((0, l.getSexEff)(o, "HU_SOUND"), "game_k7star");
this.view["KW_AniZimo_" + t].url = "ui://Game_K7Star_Ani/he_zimo_tishi";
r.gf.sp.onSpineLoaded(this.view["KW_AniZimo_" + t], e => {
e.premultipliedAlpha = !1;
e.loop = !1;
e.animation = a;
e.setCompleteListener(() => {
this.view["KW_AniZimo_" + t].visible = !1;
});
e.setEventListener((t, e) => {
if ("add_img10" == e.data.name) {
console.log(">>>>>>>>>>>>>>>>>>>>>>>sendendwait KW_AniZimo_");
this.onMsgHuCardsTypeAni(() => {
this._gameLogicManager.sendEndWait();
});
}
});
});
} else if (e.length > 1) {
for (let t = 0; t < e.length; t++) {
const i = e[t], s = this._tableData.seatToLocal(i);
this.view["KW_AniZimo_" + s].visible = !0;
const o = "animation1";
this.view["KW_AniZimo_" + s].url = "ui://Game_K7Star_Ani/he_zimo_tishi";
r.gf.sp.onSpineLoaded(this.view["KW_AniZimo_" + s], e => {
e.premultipliedAlpha = !1;
e.loop = !1;
e.animation = o;
e.setCompleteListener(() => {
this.view["KW_AniZimo_" + s].visible = !1;
});
e.setEventListener((e, i) => {
if ("add_img10" == i.data.name && 0 === t) {
console.log(">>>>>>>>>>>>>>>>>>>>>>>sendendwait 炮多响 不播放牌型");
this.onMsgHuCardsTypeAni(() => {
this._gameLogicManager.sendEndWait();
});
}
});
});
}
this.playEffect((0, l.getSexEff)(o, "HU_SOUND"), "game_k7star");
}
}
showAniZJJ(t, e) {
const i = this.view["KW_AniJZZ_" + t];
i.visible = !0;
i.url = "ui://Game_K7Star_Ani/Jinzhongzhao_D";
r.gf.sp.onSpineLoaded(i, t => {
t.premultipliedAlpha = !1;
t.loop = !1;
t.animation = "animation";
t.setCompleteListener(() => {
i.visible = !1;
});
t.setEventListener((t, i) => {
"add_caifu" == i.data.name && e && e();
});
});
}
showAniBoomFull() {
const t = this._tableData.getTowerCards();
if (!this._tableData.isBombCardsBuff(t) && t._flag === g.GLProtocol.msgTowerCards.eFlag.FLAG_TOWER && t._one_tower_mult > 0) {
const e = this._tableData.seatToLocal(t._seat);
this.view.KW_AniHuFull.visible = !0;
const i = Math.ceil(t._tower_count / 4);
this.view.KW_AniHuFull.url = "ui://Game_K7Star_Ani/Gailouqian_tx";
r.gf.sp.onSpineLoaded(this.view.KW_AniHuFull, s => {
s.premultipliedAlpha = !1;
s.loop = !1;
s.animation = "animation";
s.setCompleteListener(() => {
this.view.KW_AniHuFull.visible = !1;
});
s.setEventListener((s, n) => {
"add_img10" == n.data.name && this.showAniCardType(!0, o.ENUM_CARD_TYPE.TA_0 + i, () => {
this.playNoLimitInfoAni(t, () => {
console.log("---------------------sendEndWait showAniBoomFull");
this._gameLogicManager.sendEndWait();
this.dispatch("onUpdateBoomMultText" + a.GAME_ID, e, t._mult);
});
});
});
});
}
}
showAniFire(t) {
this.view.KW_AniFire.visible = !1;
this.view.KW_AniWater.visible = !1;
if (t) {
const t = this._tableData.getBombCards(n.SELF_LOCAL_SEAT);
if (t.length >= 12) {
this.view.KW_AniFire.visible = !0;
this.view.KW_AniFire.url = "ui://Game_K7Star_Ani/huoyan";
r.gf.sp.onSpineLoaded(this.view.KW_AniFire, t => {
t.loop = !0;
t.animation = "animation";
});
} else if (t.length >= 8) {
this.view.KW_AniWater.visible = !0;
this.view.KW_AniWater.url = "ui://Game_K7Star_Ani/Shui";
r.gf.sp.onSpineLoaded(this.view.KW_AniWater, t => {
t.loop = !0;
t.animation = "animation";
});
}
}
}
playEffect(t, e) {
this._tableData.gameLogicData.isBigAwardOn() || this._iSound.playEffect(t, e);
}
playNoLimitInfoAni(t, i) {
if (0 === t._is_no_limit) {
i && i();
return;
}
const s = () => {
i && i();
this.dispatch("onMsgNoLimitInfoAni" + a.GAME_ID, t);
this.view.KW_AniNoLimit.visible = !1;
};
this.view.KW_AniNoLimit.center(!0);
this.view.KW_AniNoLimit.setScale(1, 1);
this.view.KW_AniNoLimit.visible = !0;
this.scheduleOnce(() => {
this._iSound.playEffect(l.SOUND_PATH.GAME_PO, "game_k7star");
}, .5);
r.gf.sp.onSpineLoaded(this.view.KW_AniNoLimit, i => {
i.loop = !1;
i.animation = "animation";
i.setEventListener((i, o) => {
if ("add_img" == o.data.name) if (t._seat === this._tableData.getSelfSeat()) {
e.GTween.to2(this.view.KW_AniNoLimit.x, this.view.KW_AniNoLimit.y, 310, 700, .27).setTarget(this.view.KW_AniNoLimit, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
s();
});
e.GTween.to2(1, 1, .14, .14, .27).setTarget(this.view.KW_AniNoLimit, e.TweenPropType.Scale).setEase(e.EaseType.Linear);
} else s();
});
});
}
onShowYunProtectAni(t, i) {
if (0 == this._ypAwardx || 0 == this._ypAwardy) {
this._ypAwardx = this.view.KW_CompYunProtect.KW_TxtAward.x;
this._ypAwardy = this.view.KW_CompYunProtect.KW_TxtAward.y;
}
this.view.C_ShowYPAni.setSelectedIndex(0);
e.GTween.kill(this.view.KW_CompYunProtect);
this.view.KW_CompYunProtect.setScale(.8, .8);
e.GTween.to2(.8, .8, 1.1, 1.1, .13).setTarget(this.view.KW_CompYunProtect, e.TweenPropType.Scale).onComplete(() => {
e.GTween.to2(1.1, 1.1, 1, 1, .17).setTarget(this.view.KW_CompYunProtect, e.TweenPropType.Scale).onComplete(() => {
this.view.KW_CompYunProtect.setScale(1, 1);
});
});
this.view.KW_CompYunProtect.KW_TxtAward.setScale(1, 1);
this.view.C_ShowYPAni.setSelectedIndex(1);
r.gf.sp.onSpineLoaded(this.view.KW_AniLing, s => {
s.setAnimation(0, "animation2", !1);
s.setEventListener((o, _) => {
if ("animation2" == s.animation && "add_img" == _.data.name) {
this.view.C_ShowYPAni.setSelectedIndex(2);
this.view.KW_CompYunProtect.KW_TxtAward.setPosition(this._ypAwardx, this._ypAwardy);
this.playEffect(l.SOUND_PATH.GAME_YP_ANI, "game_k7star");
r.gf.sp.onSpineLoaded(this.view.KW_CompYunProtect.KW_AniLeave, t => {
t.setAnimation(0, "animation", !1);
});
r.gf.sp.onSpineLoaded(this.view.KW_CompYunProtect.KW_AniYPBg, s => {
s.setAnimation(0, "animation", !1);
s.setEventListener((s, o) => {
if ("add_img" == o.data.name) {
const s = this._gamePlayer.view["KW_CompRich" + i];
if (!s) return;
e.GTween.kill(this.view.KW_CompYunProtect.KW_TxtAward);
const o = this.view.KW_CompYunProtect.globalToLocal(s.x, s.y);
e.GTween.to2(this._ypAwardx, this._ypAwardy, o.x, o.y, .23).setTarget(this.view.KW_CompYunProtect.KW_TxtAward, e.TweenPropType.Position).onComplete(() => {
this.dispatch("updateSetSelfSR" + a.GAME_ID, t);
this.dispatch("onShowLightAni" + a.GAME_ID, n.SELF_LOCAL_SEAT, !0);
this.dispatch("onShowHeadLightAni" + a.GAME_ID, n.SELF_LOCAL_SEAT, !0);
this.dispatch("onShowPlayerLeaveHead" + a.GAME_ID, n.SELF_LOCAL_SEAT);
});
e.GTween.to2(1, 1, .3, .3, .2).setTarget(this.view.KW_CompYunProtect.KW_TxtAward, e.TweenPropType.Scale).onComplete(() => {
this.view.C_ShowYPAni.setSelectedIndex(0);
});
}
});
});
this.view.KW_CompYunProtect.KW_TxtAward.text = `${r.comm.StringUtils.dealBigNumEx5(t)}`;
}
});
});
}
shakeEffect(t) {
if ("doubleprops" == t) {
const t = this.getImpl(h.default).getDbConfig();
if (!t.shake || 1 != t.shake) return;
}
this.stopShakeEffect();
console.log("shakeEffect");
const i = r.gf.FGUI.getChild(r.gf.App.inst.root, "BaseRoot"), s = this._shakeOrignPos.x, o = this._shakeOrignPos.y;
e.GTween.to2(s, o, s + 0, o + 10, .02).setTarget(i, e.TweenPropType.Position).setDelay(.02);
e.GTween.to2(s + 0, o + 10, s - 7.07, o - 7.07, .02).setTarget(i, e.TweenPropType.Position).setDelay(.02);
e.GTween.to2(s - 7.07, o - 7.07, s + 10, o - 0, .02).setTarget(i, e.TweenPropType.Position).setDelay(.04);
e.GTween.to2(s + 10, o - 0, s - 7.07, o + 7.07, .02).setTarget(i, e.TweenPropType.Position).setDelay(.06);
e.GTween.to2(s - 7.07, o + 7.07, s - 0, o - 10, .02).setTarget(i, e.TweenPropType.Position).setDelay(.08);
e.GTween.to2(s - 0, o - 10, s + 7.07, o + 7.07, .02).setTarget(i, e.TweenPropType.Position).setDelay(.1);
e.GTween.to2(s + 7.07, o + 7.07, s - 10, o + 0, .02).setTarget(i, e.TweenPropType.Position).setDelay(.12);
e.GTween.to2(s - 10, o + 0, s + 7.07, o - 7.07, .02).setTarget(i, e.TweenPropType.Position).setDelay(.14);
e.GTween.to2(s + 7.07, o - 7.07, s, o, .02).setTarget(i, e.TweenPropType.Position).setDelay(.16);
this.scheduleOnce(() => {
this.stopShakeEffect();
}, .5);
}
stopShakeEffect() {
const t = r.gf.FGUI.getChild(r.gf.App.inst.root, "BaseRoot");
e.GTween.kill(t);
t.setPosition(this._shakeOrignPos.x, this._shakeOrignPos.y);
}
showAddRichTips(t, e) {
this.view.KW_BtnRechargeTip.visible = t;
if (!t) return;
const i = this.view.globalToLocal(e.x, e.y);
this.view.KW_BtnRechargeTip.setPosition(i.x + 55, i.y);
r.gf.sp.onSpineLoaded(this.view.KW_BtnRechargeTip.KW_AniChargeTips, t => {
t.setAnimation(0, "animation", !0);
});
}
playAniBuffToEnd(t) {
let e = this._tableData.getBtnGameBuffPosition();
null != t && (e = this._tableData.getPlayerPos(t));
this._iSound.playEffect(l.SOUND_PATH.BUFF_CARD_CENTER, "game_k7star");
this.scheduleOnce(() => {
this._buffCardAni.visible = !1;
if (this.clearBuffCardAni()) {
this.updateFlyNode(e);
this.dispatch("onMsgEndChooseBuffEnd2" + a.GAME_ID);
this._gameLogicManager.sendEndWait();
}
}, 1.3);
}
playAniBuffToStart(t, i) {
const s = t._buffParse[t._index], o = this._tableData.seatToLocal(t._seat), l = r.gf.App.inst.root.width / 2, _ = r.gf.App.inst.root.height / 2 - 100;
e.GTween.to2(i.x, i.y, l, _, .2).setTarget(this._buffCardAni, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
0 === s.flag ? this.playAniBuffToEnd(void 0) : this.playAniBuffToEnd(o);
if (s.id == n.GOLD_CARD_BUFF_FLAG.GCBF_BOMB) for (let t = 0; t < 4; t++) {
const e = this._tableData.getTowerCardsMsg(t);
this.dispatch("onMsgTowerCards" + a.GAME_ID, e);
} else s.id == n.GOLD_CARD_BUFF_FLAG.GCBF_YB && this.getImpl(r.comm.lobby.IJoinRoomModule).reqPlayerGameData();
});
e.GTween.to2(this._buffCardAni.scaleX, this._buffCardAni.scaleY, 1, 1, .2).setTarget(this._buffCardAni, e.TweenPropType.Scale).setEase(e.EaseType.Linear);
const d = this._tableData.getBuffDetail(s, o), h = {
PosY: r.gf.App.inst.root.height / 2 + 100
};
this.getImpl(r.comm.ICommonDlgs).showWeakHint(d, h);
}
onMsgEndChooseBuffEnd(t, e) {
const i = t._buffParse[t._index];
let s = 1;
t._seat != this._tableData.getSelfSeat() && (s = .2);
this._buffCardAni.visible = !0;
this._buffCardAni.setScale(s, s);
this._buffCardAni.alpha = 1;
this._buffCardAni.x = e.x;
this._buffCardAni.y = e.y;
this._buffCardAni.KW_Card.visible = !0;
this._buffCardAni.KW_Card.C_Buff.selectedIndex = i.id;
this._buffCardAni.KW_Back.skinName = `dj${i.id}`;
r.gf.sp.onSpineLoaded(this._buffCardAni.KW_Back, t => {
t.setAnimation(0, "animation6", !0);
});
switch (i.id) {
case n.GOLD_CARD_BUFF_FLAG.GCBF_JZZ:
this._buffCardAni.KW_Card.KW_text4.text = `x${i.cnt}`;
break;

case n.GOLD_CARD_BUFF_FLAG.GCBF_DB:
this._buffCardAni.KW_Card.KW_text5_2.text = `${i.mult}`;
this._buffCardAni.KW_Card.KW_text5_1.text = `x${i.cnt}`;
break;

case n.GOLD_CARD_BUFF_FLAG.GCBF_YB:
{
const t = r.comm.StringUtils.dealBigNumEx5(i.cnt);
this._buffCardAni.KW_Card.KW_text7.text = `x${t}`;
}
}
this.playAniBuffToStart(t, e);
}
onMsgGoldBuffCardAni(t) {
if (!this.view.KW_Luck_Buff_Ani) {
this.view.KW_Luck_Buff_Ani = e.UIPackage.createObject("Game_K7Star_Ani", "BuffOtherAni");
r.gf.setLayerNode(this.view.KW_Luck_Buff_Ani);
r.gf.FGUI.addChild(this.view, this.view.KW_Luck_Buff_Ani);
this._buffOtherAni = this.view.KW_Luck_Buff_Ani;
}
this._buffOtherAni.center();
this._buffOtherAni.setScale(1, 1);
const i = this._tableData.seatToLocal(t._seat), s = this._tableData.getGoldCardPos(i);
this._buffOtherAni.visible = !0;
this._iSound.playEffect(l.SOUND_PATH.BUFF_CARD_OPEN, "game_k7star");
r.gf.sp.onSpineLoaded(this._buffOtherAni.KW_aniBuff, t => {
t.setAnimation(0, "animation", !1);
t.setEventListener((t, i) => {
if ("add_img" == i.data.name) {
e.GTween.to2(this._buffOtherAni.x, this._buffOtherAni.y, s.x, s.y, .24).setTarget(this._buffOtherAni, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
this._buffOtherAni.visible = !1;
});
e.GTween.to2(1, 1, .3, .3, .24).setTarget(this._buffOtherAni, e.TweenPropType.Scale).setEase(e.EaseType.Linear);
}
});
});
}
updateFlyNode(t) {
const e = this.view.KW_NumberFly;
e.visible = !0;
const i = e.getChild("KW_aniFly");
e.KW_aniFly.x = e.KW_aniStartFly.x;
e.KW_aniFly.y = e.KW_aniStartFly.y;
const s = r.gf.newVec2(i.x - t.x, i.y - t.y), o = 180 * Math.atan2(s.y, s.x) / Math.PI;
i.rotation = o;
const _ = e.getTransition("fly");
_.setValue("startPos", e.KW_aniStartFly.x, e.KW_aniStartFly.y);
_.setValue("endPos", t.x, t.y);
e.fly.play(() => {
this._buffCardAni.visible = !1;
this.view.KW_NumberFly.visible = !1;
const t = this._tableData.getGoldBuffCard(), e = t._buffParse[t._index];
let i = !1;
t && (i = 0 === e.flag);
this.dispatch("onToggleBtnBuff" + a.GAME_ID, i);
this.getImpl(r.comm.lobby.IJoinRoomModule).reqPlayerGameData();
if (e.id == n.GOLD_CARD_BUFF_FLAG.GCBF_YB) if (0 === e.flag) for (let t = 0; t < 4; t++) this.dispatch("onShowLightAni" + a.GAME_ID, t, !0); else {
const e = this._tableData.seatToLocal(t._seat);
this.dispatch("onShowLightAni" + a.GAME_ID, e, !0);
}
});
e.fly.setHook("showAniStart", () => {
r.gf.sp.onSpineLoaded(e.KW_aniStartFly, t => {
t.setAnimation(0, "animation", !1);
});
});
e.fly.setHook("showAniFly", () => {
this._iSound.playEffect(l.SOUND_PATH.BUFF_CARD_MOVE, "game_k7star");
r.gf.sp.onSpineLoaded(e.KW_aniFly, t => {
t.setAnimation(0, "animation", !1);
});
});
}
clearBuffCardAni() {
if (this._tableData.getGameStateOld()._state === n.ENUM_GAME_STATE.GS_GOLD_BUFF) return !0;
this.dispatch("onToggleBtnBuff" + a.GAME_ID, !1);
const t = this._tableData.getGoldBuffCard(), e = this._tableData.seatToLocal(t._seat), i = this._tableData.getHandCards(e);
this.dispatch("setHandCards" + a.GAME_ID, e, i, !0);
this.dispatch("onCheckBuffCard" + a.GAME_ID, !1);
return !1;
}
showStarUpMoveAni(t, i, s, o) {
const a = this.view[`KW_AniStarUpMove_${t}`];
a.visible = !0;
const n = this.view.globalToLocal(s.x, s.y);
a.setPosition(i.x, i.y);
const _ = r.gf.newVec2(i.x - n.x, i.y - n.y), d = 180 * Math.atan2(_.y, _.x) / Math.PI;
a.rotation = d + 180;
e.GTween.to2(i.x, i.y, n.x, n.y, .3).setTarget(a, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
o && o();
});
r.gf.sp.onSpineLoaded(a, t => {
t.loop = !1;
t.animation = "animation";
t.setCompleteListener(() => {
a.visible = !1;
});
t.setEventListener((t, e) => {
var i;
if ("add_img2" == e.data.name) {
const t = (null === (i = this._iSoundModule) || void 0 === i ? void 0 : i.getSex()) || 0;
this.playEffect((0, l.getSexEff)(t, "STAR_UP_SOUND"), "game_k7star");
}
});
});
}
};
p([ r.gf.listen("reset" + a.GAME_ID) ], f.prototype, "resetUI", null);
p([ r.gf.listen("onGameStart" + a.GAME_ID) ], f.prototype, "onGameStart", null);
p([ r.gf.listen("showMatching" + a.GAME_ID) ], f.prototype, "showMatching", null);
p([ r.gf.listen("showAniHu" + a.GAME_ID) ], f.prototype, "showAniHu", null);
p([ r.gf.listen("showAniCardType" + a.GAME_ID) ], f.prototype, "showAniCardType", null);
p([ r.gf.listen("flyNodeToPlayerEx" + a.GAME_ID) ], f.prototype, "flyNodeToPlayerEx", null);
p([ r.gf.listen("onMsgHuCardsTypeAni" + a.GAME_ID) ], f.prototype, "onMsgHuCardsTypeAni", null);
p([ r.gf.listen("_showLianJiAniCardType" + a.GAME_ID) ], f.prototype, "_showLianJiAniCardType", null);
p([ r.gf.listen("onMsgRoundResultJZZ" + a.GAME_ID) ], f.prototype, "onMsgRoundResultJZZ", null);
p([ r.gf.listen("onMsgRoundResult" + a.GAME_ID) ], f.prototype, "onMsgRoundResult", null);
p([ r.gf.listen("throwProp" + a.GAME_ID) ], f.prototype, "throwProp", null);
p([ r.gf.listen("showPropAni" + a.GAME_ID) ], f.prototype, "showPropAni", null);
p([ r.gf.listen("onMsgGameState" + a.GAME_ID) ], f.prototype, "onMsgGameState", null);
p([ r.gf.listen("onMsgGameStartAni" + a.GAME_ID) ], f.prototype, "onMsgGameStartAni", null);
p([ r.gf.listen("onMsgTowerCards" + a.GAME_ID) ], f.prototype, "onMsgTowerCards", null);
p([ r.gf.listen("onMsgHuCardsAni" + a.GAME_ID) ], f.prototype, "onMsgHuCardsAni", null);
p([ r.gf.listen("showAniFire" + a.GAME_ID) ], f.prototype, "showAniFire", null);
p([ r.gf.listen("onShowYunProtectAni" + a.GAME_ID) ], f.prototype, "onShowYunProtectAni", null);
p([ r.gf.listen("shakeEffect" + a.GAME_ID) ], f.prototype, "shakeEffect", null);
p([ r.gf.listen("showAddRichTips" + a.GAME_ID) ], f.prototype, "showAddRichTips", null);
p([ r.gf.listen("onMsgEndChooseBuffEnd" + a.GAME_ID) ], f.prototype, "onMsgEndChooseBuffEnd", null);
p([ r.gf.listen("onMsgGoldBuffCardAni" + a.GAME_ID) ], f.prototype, "onMsgGoldBuffCardAni", null);
p([ r.gf.listen("showStarUpMoveAni" + a.GAME_ID) ], f.prototype, "showStarUpMoveAni", null);
const A = f = p([ r.gf.controller({
name: "GameAni",
module: "game_k7star",
fguiObject: "View",
layer: r.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_Common", "Game_K7Star_Card", "Game_K7Star_Ani" ],
cachable: !0,
sortingOrder: n.FGUI_ORDER.GAME_ANI
}) ], f);
},
"./bin/ui/main/GameBtn.js": (t, i, s) => {
s.r(i);
s.d(i, {
default: () => T
});
var a = s("./bin/config/CardCode.js"), n = s("./bin/config/CardType.js"), l = s("./bin/config/GameConfig.js"), _ = s("./bin/config/GameDefine.js"), r = s("./bin/config/SoundConfig.js"), d = s("./bin/data/TableData.js"), h = s("./bin/gameLogic/CardRuleLogic.js"), c = s("./bin/gf.js"), g = s("./bin/logic/actModules/GameActModule.js"), u = s("./bin/logic/moudles/GameLogicManager.js"), m = s("./bin/logic/protocol/GLProtocol.js"), C = s("./bin/manager/ElevatingManager.js"), p = s("./bin/manager/activeManager.js"), f = s("./bin/ui/component/CardComb.js"), A = s("./bin/config/GameEvents.js"), S = s("./bin/ui/component/MingRenTangBtn.js"), I = s("./bin/logic/actModules/data/GameActData.js"), E = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let L = class extends c.gf.mvc.UIController {
constructor() {
super(...arguments);
this._isFirstShowSuggest = !1;
this.isShowBtnJump = !1;
this._putCardValCanStarUp = 0;
this._roundTotalCount = 0;
}
onUIBinded() {
this._tableData = this.getImpl(d.default);
this._gameLogicManager = this.getImpl(u.default);
this._gameActModule = this.getImpl(g.default);
this._iSound = this.getImpl(c.gf.ISound);
this._gameActData = this.getImpl(I.default);
this.view.name = "BtnView";
c.gf.setLayerNode(this.view.KW_BtnAct);
this.addClick(this.view.KW_BtnAct.KW_BtnPass, this.onBtnPass);
this.addClick(this.view.KW_BtnAct.KW_BtnZM, this.onBtnZM);
this.addClick(this.view.KW_BtnAct.KW_BtnPlayCard, this.onBtnPlayCard);
this.addClick(this.view.KW_BtnAct.KW_BtnMingPai, this.onBtnMingPai);
this.addClick(this.view.KW_BtnAct.KW_BtnBao, this.onBtnBao);
this.addClick(this.view.KW_BtnAct.KW_BtnZha1, () => {
this.onBtnBoom(0);
});
this.addClick(this.view.KW_BtnAct.KW_BtnZha2, () => {
this.onBtnBoom(1);
});
this.addClick(this.view.KW_BtnAct.KW_BtnHu, this.onBtnHu);
for (let t = 0; t < 3; t++) {
const e = t + 2;
this.addClick(this.view.KW_BtnAct[`KW_BtnLianJi${e}`], () => {
this.onBtnLianJi(e);
});
}
this.addClick(this.view.KW_BtnAct.KW_BtnStarUp, () => {
this.onBtnStarUp();
});
this.addClick(this.view.KW_BtnExit, this.onBtnExit);
this.addClick(this.view.KW_BtnMultTable, this.onBtnMultTable);
this.addClick(this.view.KW_BtnFlow, this.onBtnFlow);
this.addClick(this.view.KW_BtnCloseMenu, this.onBtnCloseMenu);
this.addClick(this.view.KW_BtnOpenMenu, this.onBtnOpenMenu);
this.addClick(this.view.KW_BtnSet, this.onBtnSet);
this.addClick(this.view.KW_BtnHelp, this.onBtnHelp);
this.addClick(this.view.KW_BtnTrust, this.onBtnTrust);
this.addClick(this.view.KW_BtnAgain, this.onBtnContinue);
this.addClick(this.view.KW_BtnToResult, this.onBtnBackResult);
this.addClick(this.view.KW_BtnTing, this.onBtnTing);
this.addClick(this.view.KW_BtnOpenSuggest, this.onBtnOpenSuggest);
this.addClick(this.view.KW_BtnReady, this.onBtnStartGame);
this.addClick(this.view.KW_BtnMakeHand, this.onBtnMakeHand);
this.addClick(this.view.KW_BtnAgain2, () => {
this.onBtnContinue(!0);
});
e.GRoot.inst.on(e.Event.TOUCH_END, this.onTouchCheckSuggest, this);
this.addClick(this.view.KW_BtnToBack, this.onBtnExit);
this.addClick(this.view.KW_BtnDB, this.onBtnDBProp);
this.addClick(this.view.KW_BtnYP, this.onBtnYPProp);
this.addClick(this.view.KW_BtnYPBack, this.onBtnYPBack);
this.addClick(this.view.KW_BtnYPBack2, this.onBtnYPBack2);
this.addClick(this.view.KW_BtnYPBack3, this.onBtnYPBack);
this.addClick(this.view.KW_BtnNoteCard, this.onBtnNoteCard);
this.addClick(this.view.KW_BtnBuff, this.onBtnBuffDetail);
this.reqMultConfig();
this._cardLogic = new h.default();
this._gameActModule.reqPowerProps(c.comm.AwardCMD.PowerProps.CMD_PP_CONFIG, 1);
}
onUnUIBinded() {
this.getImpl(c.comm.lobby.ICommonActModule).hideAllAct(l.GAME_ID);
this._gameActModule.hideAllAct(l.GAME_ID);
e.GRoot.inst.off(e.Event.TOUCH_END, this.onTouchCheckSuggest, this);
}
initUI() {
this.resetUI();
if (this.getImpl(c.comm.lobby.IJoinRoomModule).isGuide()) {
this.onHideButton();
this.view.KW_BtnMultTable.visible = !1;
this.view.KW_BtnOpenMenu.visible = !1;
this.view.KW_BtnMingRenTang.visible = !1;
}
this.onEventJoinGame();
this.view.C_IsMiniGame.setSelectedIndex(this.getImpl(c.comm.IHost).getMiniGameSelectIndex());
this._guildHandWangPos = c.gf.newVec2(this.view.KW_ActHint.x, this.view.KW_ActHint.y);
this.view.KW_BtnMingRenTang.visible = !1;
this._gameActData.setTurntableInfo(null);
this.getImpl(g.default).getTurntableInfo();
this._tableData.setBtnGameBuffPosition(c.gf.newVec2(this.view.KW_BtnBuff.x, this.view.KW_BtnBuff.y));
}
onMingRenTangUser(t) {
var e;
null === (e = this._mingRenTangBtn) || void 0 === e || e.initUI(t);
}
onEventJoinGame() {}
resetUI() {
this.onHideButton();
this.showBtnTing(!1);
this.showBtnSuggest(!1);
this.showServicePayAni(!1);
this.view.KW_BtnMultTable.visible = !0;
this.view.KW_BtnOpenMenu.visible = !0;
this.view.C_BankruptAgain.setSelectedPage("hide");
this.onShowBtnYPBack(!1);
this.onHidePowerPropBtn();
this.onToggleBtnBuff(!1);
this.checkNoteCardBtnVisible();
}
checkNoteCardBtnVisible() {
this.view.KW_BtnNoteCard.visible = this._tableData.isShowNoteCardBtnInGame();
}
onGameStart() {
this._isFirstShowSuggest = !0;
this.showServicePayAni(!0);
this._roundTotalCount = c.gf.LocalStorage.getInt(`KW_GAME_GUIDE_TOTAL_ROUND_${this.getImpl(o.lobby.IUserManager).numid}`, 0);
if (this._roundTotalCount <= _.GUIDE_TOTAL_ROUND) {
++this._roundTotalCount;
c.gf.LocalStorage.setInt(`KW_GAME_GUIDE_TOTAL_ROUND_${this.getImpl(o.lobby.IUserManager).numid}`, this._roundTotalCount);
}
}
onDestroy() {}
onChangeSeat() {
this._iSound.playMusic(r.SOUND_PATH.BGM, "game_k7star");
this._tableData.setCurBGMName(r.SOUND_PATH.BGM);
this.view.KW_BtnMingRenTang.visible = !1;
this.resetUI();
}
onPlayCardOnClickCard() {
this.initBtnActPower();
}
onShowReady() {
this._gameLogicManager.reqPlayerConnect(t => {
console.log("GameLogicManager startListen:", t);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_gogame, {
[o.shuShuAnalytics.game_flow.__name]: o.shuShuAnalytics.game_flow.respPlayerConnect,
game_id: this.getImpl(c.comm.lobby.IJoinRoomModule).getCurGameId(),
version: this.getImpl(c.comm.IHost).getUpdateVersion(this.getImpl(c.comm.lobby.IJoinRoomModule).getCurGameId())
});
this.dispatch("showMatching" + l.GAME_ID, !0);
this.dispatch("onChangeSeat" + l.GAME_ID);
this.onHideButton();
});
}
onBtnLookCardType() {
this.view.KW_ActHint.visible && this.view.KW_ActHint.x == this._guildHandWangPos.x && this.view.KW_ActHint.y == this._guildHandWangPos.y && this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_clickguide, {
clickguide_click: "2"
});
this.view.button.setSelectedPage("result");
}
onBtnStartGame() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
this._gameLogicManager.reqPlayerConnect(t => {
console.log("GameLogicManager startListen:", t);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_gogame, {
[o.shuShuAnalytics.game_flow.__name]: o.shuShuAnalytics.game_flow.gameStart,
game_id: this.getImpl(c.comm.lobby.IJoinRoomModule).getCurGameId()
});
this.dispatch("showMatching" + l.GAME_ID, !0);
this.dispatch("onChangeSeat" + l.GAME_ID);
this.onHideButton();
});
}
onBtnTing() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_gameinside_qxbp, {
[o.shuShuAnalytics.game_event_click_qxbp.__name]: o.shuShuAnalytics.game_event_click_qxbp.clickTing
});
this.dispatch("onBtnTing" + l.GAME_ID);
}
onBtnOpenSuggest() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_gameinside_qxbp, {
[o.shuShuAnalytics.game_event_click_qxbp.__name]: o.shuShuAnalytics.game_event_click_qxbp.clickRecommond
});
e.GTween.kill(this.view.suggest);
if ("open" == this.view.suggest.selectedPage) {
this.view.suggest.setSelectedPage("showOpenBtn");
this.view.KW_CompSuggest.C_Light.selectedIndex = 0;
} else this.view.suggest.setSelectedPage("open");
}
onBtnBackResult() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
this.getImpl(c.gf.IViewPlugin).openView("GameResult", !0);
}
onBtnPass() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
const t = this._tableData.getActPowerNew();
console.log("点击过按钮", t);
if (t._play == m.GLProtocol.msgActPower.eFlag.FLAG_CAN_PASS) {
this._gameLogicManager.sendPassCards();
this.onHideButton();
this.initBtnActPower();
}
}
onBtnZM() {
this._onBtnZM();
}
_onBtnZM(t = 0) {
this.view.KW_ActHint.visible && this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_clickguide, {
clickguide_click: "4"
});
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
const e = this._tableData.getActPowerNew();
console.log("点击自摸按钮", e);
this._gameLogicManager.sendHuCards(e._zimo_card[0], this._tableData.getSelfSeat(), t);
this.onHideButton();
this.initBtnActPower();
}
onBtnLianJi(t) {
this._onBtnZM(t);
}
onBtnStarUp() {
this._onBtnPlayCard(!0);
}
onBtnHu() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
const t = this._tableData.getActPowerNew(), e = this._tableData.getPlayCards();
console.log("点击胡牌按钮", t);
if (t._hu_card > 0) {
this._gameLogicManager.sendHuCards(t._hu_card, e._seat);
this.onHideButton();
this.initBtnActPower();
}
}
onBtnPlayCard() {
this._onBtnPlayCard();
}
_onBtnPlayCard(t = !1) {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
let e = this._tableData.getSelfSelectCards();
t && (e = [ this._putCardValCanStarUp ]);
if (1 != e.length) {
this.getImpl(c.comm.ICommonDlgs).showWeakHint("请选择要出的牌");
return;
}
this.view.KW_ActHint.visible && this.view.KW_ActHint.x == this._guildHandWangPos.x && this.view.KW_ActHint.y == this._guildHandWangPos.y && this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_clickguide, {
clickguide_click: "2"
});
const i = this._tableData.getActPowerNew();
console.log("点击出牌按钮", i, "选择牌", e);
if (i._play == m.GLProtocol.msgActPower.eFlag.FLAG_CAN_ACT) {
this._gameLogicManager.sendPlayCards(e[0], t ? _.ePlayCardFlag.PLAY_CF_STAR : _.ePlayCardFlag.PLAY_CF_NONE);
this._tableData.setShushuTouchu(1);
this.onHideButton();
this.initBtnActPower();
}
}
onBtnBao() {
this.view.KW_ActHint.visible && this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_clickguide, {
clickguide_click: "1"
});
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
const t = this._tableData.getActPowerNew();
if (t && t._tower_card_value && t._tower_card_value > 0) {
const t = this._tableData.getTowerCardValue();
if (t > 0) {
this._gameLogicManager.sendDoTowerCard(t);
this.onHideButton();
this.initBtnActPower();
} else this.getImpl(c.comm.ICommonDlgs).showWeakHint("操作错误");
}
}
onBtnBoom(t) {
this.view.KW_ActHint.visible && this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_clickguide, {
clickguide_click: "0"
});
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
const e = this._tableData.getActPowerNew();
if (e && e._bomb_card_value && e._bomb_card_value[t] && e._bomb_card_value[t] > 0) {
const i = this._tableData.getBombCardValue(t);
let s = this._tableData.getSelfSeat();
e._play == m.GLProtocol.msgActPower.eFlag.FLAG_CAN_PASS && (s = this._tableData.getPlayCards()._seat);
this._gameLogicManager.sendBombCards(i, s);
this.onHideButton();
this.initBtnActPower();
}
}
onBtnMingPai() {
this.view.KW_ActHint.visible && this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_clickguide, {
clickguide_click: "3"
});
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
if (this._tableData.getActPowerNew()._ming == m.GLProtocol.msgActPower.eFlag.FLAG_CAN_ACT) {
this._gameLogicManager.sendMingCards();
this.onHideButton();
this.initBtnActPower();
}
}
onBtnExit() {
this.onExit();
}
onExit(t = !1) {
var e;
if (!this._tableData.gameLogicData.isWillShowBigAward()) {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
if (this.getImpl(c.comm.lobby.IJoinRoomModule).isGuide()) this.getImpl(c.comm.lobby.IJoinRoomModule).quitGuide(l.GAME_ID); else if (t) this.getImpl(c.comm.lobby.IJoinRoomModule).reqLeaveTable(0); else {
const t = (null === (e = this._tableData.getGameState()) || void 0 === e ? void 0 : e._state) || _.ENUM_GAME_STATE.GS_IDLE;
this._tableData.gameLogicData.isLeaveSpecil(_.SELF_LOCAL_SEAT) || this._tableData.getBankrupt(_.SELF_LOCAL_SEAT) || t == _.ENUM_GAME_STATE.GS_IDLE ? this._gameActData.isOpenTurntableExit() ? this.getImpl(g.default).getTurntableExitInfo() : this.onExitCallBack() : this.getImpl(c.comm.ICommonDlgs).showWeakHint("当前正在对局，无法退出牌桌");
}
}
}
onExitCallBack() {
var t;
const e = (null === (t = this._tableData.getGameState()) || void 0 === t ? void 0 : t._state) || _.ENUM_GAME_STATE.GS_IDLE;
if (this._tableData.gameLogicData.isLeaveSpecil(_.SELF_LOCAL_SEAT) || this._tableData.getBankrupt(_.SELF_LOCAL_SEAT) || e == _.ENUM_GAME_STATE.GS_IDLE) {
console.log("onBtnExit start:");
this.getImpl(c.comm.lobby.IJoinRoomModule).reqLeaveTable(1);
this.getImpl(c.comm.ICommonDlgs).closeAllPop();
} else this.getImpl(c.comm.ICommonDlgs).showWeakHint("当前正在对局，无法退出牌桌");
}
onMsgTurntableExit() {
let t = this._gameActData.getTurntableInfo();
this.getImpl(c.gf.IViewPlugin).openView("GameExitTips", () => {
this.onExitCallBack();
}, {
playBack: t,
callOpen: () => {
this.getImpl(g.default).getTurntableAward();
}
});
}
onBtnMultTable() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
this.dispatch("showMultTable" + l.GAME_ID, !1);
}
onBtnTrust() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
const t = this._tableData.getGameState();
(null == t ? void 0 : t._state) >= _.ENUM_GAME_STATE.GS_START && (null == t ? void 0 : t._state) < _.ENUM_GAME_STATE.GS_TOTAL_RESULT && this._gameLogicManager.sendTrust(m.GLProtocol.msgTrust.eFlag.FLAG_ON);
}
onBtnContinue(t = !1) {
if (!this._tableData.gameLogicData.isWillShowBigAward()) {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_gameinside_qxbp, {
[o.shuShuAnalytics.game_event_click_qxbp.__name]: o.shuShuAnalytics.game_event_click_qxbp.clickResultContinue
});
!0 !== this.getImpl(p.default).isTopGame() ? this.onContinueGame(t) : this.getImpl(C.default).reqk7TopGame();
}
}
onContinueGame(t = !1, e) {
this.getImpl(p.default).isBankrupt() || this.getImpl(c.gf.IViewPlugin).closeView("GameResult");
const i = this.getImpl(c.comm.lobby.IJoinRoomModule).getCurRoomData();
e = e || (null == i ? void 0 : i.vrRoomLv) || 0;
this.getImpl(p.default).onContinueGame(() => {
this.getImpl(C.default).checkContinueGame(() => {
this.dispatch(c.comm.Events.EventGameContinue, e);
});
}, t, e);
}
onBtnFlow() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_gameinside_qxbp, {
[o.shuShuAnalytics.game_event_click_qxbp.__name]: o.shuShuAnalytics.game_event_click_qxbp.clickFlow
});
this.dispatch("showFlowView" + l.GAME_ID, !0);
}
onBtnCloseMenu() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
this.view.KW_CompMenuPanel.y = 0;
e.GTween.to(0, -this.view.KW_CompMenuPanel.height, .3).setTarget(this.view.KW_CompMenuPanel, e.TweenPropType.Y).onComplete(() => {
this.view.menu.setSelectedPage("close");
});
}
onBtnOpenMenu() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
this.view.menu.setSelectedPage("open");
this.view.KW_CompMenuPanel.y = -this.view.KW_CompMenuPanel.height;
e.GTween.to(-this.view.KW_CompMenuPanel.height, 0, .3).setTarget(this.view.KW_CompMenuPanel, e.TweenPropType.Y);
}
onBtnSet() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_gameinside_qxbp, {
[o.shuShuAnalytics.game_event_click_qxbp.__name]: o.shuShuAnalytics.game_event_click_qxbp.clickSetting
});
this.getImpl(c.gf.IViewPlugin).openView("GameSetting", this);
}
onBtnHelp() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_gameinside_qxbp, {
[o.shuShuAnalytics.game_event_click_qxbp.__name]: o.shuShuAnalytics.game_event_click_qxbp.clickRule
});
this.getImpl(c.comm.ICommonDlgs).showHelpK7StarUI();
}
onBtnMakeHand() {
this._iSound.playEffect(r.SOUND_PATH.BTN_CLICK, "game_k7star");
this.getImpl(c.gf.IViewPlugin).openView("GameSpecCard");
}
showBtnSuggest(t) {
t ? this.view.suggest.setSelectedPage("showOpenBtn") : this.view.suggest.setSelectedPage("hide");
}
showChangeTips(t, e) {
this.view["KW_CompChangeTips" + t] && (this.view["KW_CompChangeTips" + t].visible = e);
}
onMsgBaseInfo() {
this.onHideButton();
}
onMsgReconnect(t) {
1 == t && this.onHideButton();
}
showBtnTing(t) {
this.view.KW_BtnTing.visible = t;
if (t) {
this.view.KW_BtnTing.KW_Ani.url = "ui://Game_K7Star_Btn/Tingpai_icon";
c.gf.sp.onSpineLoaded(this.view.KW_BtnTing.KW_Ani, t => {
t.setAnimation(0, "animation", !1);
});
}
}
onMsgHuCards() {
this.onHideButton();
}
onMsgHandCards(t) {
if (t._seat == this._tableData.getSelfSeat()) {
this.onHideButton();
this.hideSuggest();
}
}
onMsgPlayCards(t) {
if (t._seat == this._tableData.getSelfSeat()) {
console.log("onMsgPlayCards none");
this.hideSuggest();
this.onHideButton();
!1 === this._tableData.getHuStatus() && null != this._tableData.getNowTingInfo() && this.showBtnTing(!0);
}
}
onMsgPlayCardsPeak(t) {
if (t._seat == this._tableData.getSelfSeat()) {
console.log("onMsgPlayCardsPeak none");
this.hideSuggest();
this.onHideButton();
!1 === this._tableData.getHuStatus() && null != this._tableData.getNowTingInfo() && this.showBtnTing(!0);
}
}
onMsgActPowerNew(t) {
if (null == this._tableData.getBaseInfo()) return;
console.log("----------------------\x3e>>>", 2);
this.view.button.setSelectedPage("playCard");
this.initBtnActPower();
const e = [], i = {
zha: 0,
bao: 1,
wang: 2,
ming: 3,
zimo: 4
};
let s = 0, n = 0;
if (t._ming == m.GLProtocol.msgActPower.eFlag.FLAG_CAN_ACT) {
this.onBtnShow(this.view.KW_BtnAct.KW_BtnMingPai, !0);
s++;
const i = this._tableData.getGameConfig(), o = this._tableData.getBuffMingPaiMult();
let a = i._ming_mult || 0;
if (o && o.cnt > 0) {
a *= o.cnt;
this.view.KW_BtnAct.KW_BtnMingPai.C_Buff.selectedPage = "show";
this.view.KW_BtnAct.KW_BtnMingPai.KW_Mult.font = "ui://Game_K7Star_Btn/Btnnum3-export";
} else {
this.view.KW_BtnAct.KW_BtnMingPai.C_Buff.selectedPage = "hide";
this.view.KW_BtnAct.KW_BtnMingPai.KW_Mult.font = "ui://Game_K7Star_Btn/Btnnum1-export";
}
this.view.KW_BtnAct.KW_BtnMingPai.KW_Mult.text = `x${a}倍`;
if (0 == this._tableData.getCurRoundMingGuild() && t._zimo_card_count > 0) {
const i = this._tableData.getWinLimitMult();
t._zimo_card_mult[0] >= i && e.push("ming");
}
}
if (t._play == m.GLProtocol.msgActPower.eFlag.FLAG_CAN_ACT) {
if (0 == t._star_card) {
this.onBtnShow(this.view.KW_BtnAct.KW_BtnPlayCard, !0);
s++;
if (this._roundTotalCount <= _.GUIDE_TOTAL_ROUND) {
const t = this._tableData.getHandCards(_.SELF_LOCAL_SEAT).length;
this.view.C_ShowGuide.selectedIndex = 8 == t ? 1 : 0;
}
}
} else if (t._play == m.GLProtocol.msgActPower.eFlag.FLAG_CAN_PASS) {
this.onBtnShow(this.view.KW_BtnAct.KW_BtnPass, !0);
s++;
}
if (t._hu_card > 0) {
this.updateZiMoTipCardMult(0, t._hu_card, t._hu_card_mult);
n++;
this.view.KW_BtnAct.KW_BtnHu.C_Act.setSelectedPage("hu");
this.onBtnShow(this.view.KW_BtnAct.KW_BtnHu, !0);
s++;
const e = this._tableData.getWinLimitMult();
if (t._hu_card_mult >= e) {
this.view.KW_BtnAct.KW_BtnHu.C_Act.selectedPage = "huMax";
this.view.KW_BtnAct.KW_BtnHu.KW_Ani.animationName = "animation1_1";
} else {
this.view.KW_BtnAct.KW_BtnHu.C_Act.selectedPage = "hu";
this.view.KW_BtnAct.KW_BtnHu.KW_Ani.animationName = "animation1";
}
this.dispatch("showAniFire" + l.GAME_ID, !0);
}
let r = t._combo;
if (t._zimo_card_count > 0 && r < 10) {
const i = this._tableData.getWinLimitMult();
let o = !1;
for (let e = 0; e < t._zimo_card_count; e++) {
const s = t._zimo_card[e], a = t._zimo_card_mult[e];
this.updateZiMoTipCardMult(e, s, a);
n++;
a >= i && (o = !0);
}
this.onBtnShow(this.view.KW_BtnAct.KW_BtnZM, !0);
s++;
if (o) {
this.view.KW_BtnAct.KW_BtnZM.C_Act.selectedPage = "zimoMax";
this.view.KW_BtnAct.KW_BtnZM.KW_Ani.animationName = "animation2_1";
} else {
this.view.KW_BtnAct.KW_BtnZM.C_Act.selectedPage = "zimo";
this.view.KW_BtnAct.KW_BtnZM.KW_Ani.animationName = "animation2";
}
this.dispatch("showAniFire" + l.GAME_ID, !0);
if (0 == this._tableData.getCurRoundZimoGuild() && t._play == m.GLProtocol.msgActPower.eFlag.FLAG_CAN_ACT && 0 == t._ming) {
const i = this._tableData.getWinLimitMult();
t._zimo_card_mult[0] >= i && e.push("zimo");
}
if (0 == this._tableData.getCurRoundWangGuild() && 0 == this._tableData.getHuStatus()) {
const t = this._tableData.getHandCards(_.SELF_LOCAL_SEAT);
4 == t.length && t.every(t => t == a.CardID.CID_SJ || t == a.CardID.CID_BJ) && e.push("wang");
}
}
if (t._bomb_card_value[0] > 0) {
this.onBtnShow(this.view.KW_BtnAct.KW_BtnZha1, !0);
s++;
this.view.KW_BtnAct.KW_BtnZha1.C_Act.setSelectedPage("zha");
this.view.KW_BtnAct.KW_BtnZha1.KW_ZhaCard.visible = !1;
c.gf.sp.onSpineLoaded(this.view.KW_BtnAct.KW_BtnZha1.KW_Ani, t => {
t.setAnimation(0, "animation3", !0);
});
if (t._bomb_card_value[1] > 0) {
this.view.KW_BtnAct.KW_BtnZha1.KW_ZhaCard.visible = !0;
f.default.setCard(this.view.KW_BtnAct.KW_BtnZha1.KW_ZhaCard, t._bomb_card_value[0]);
}
if (0 == this._tableData.getCurRoundZhaGuild()) {
const i = this._tableData.getHandCards(_.SELF_LOCAL_SEAT);
if (8 == i.length) {
let s = 0;
i.forEach(e => {
this._cardLogic.getCardLogicValue(e) == t._bomb_card_value[0] && s++;
});
s >= 5 && e.push("zha");
}
}
}
if (t._bomb_card_value[1] > 0) {
this.onBtnShow(this.view.KW_BtnAct.KW_BtnZha2, !0);
s++;
this.view.KW_BtnAct.KW_BtnZha2.C_Act.setSelectedPage("zha");
this.view.KW_BtnAct.KW_BtnZha2.KW_ZhaCard.visible = !0;
f.default.setCard(this.view.KW_BtnAct.KW_BtnZha2.KW_ZhaCard, t._bomb_card_value[1]);
c.gf.sp.onSpineLoaded(this.view.KW_BtnAct.KW_BtnZha2.KW_Ani, t => {
t.setAnimation(0, "animation3", !0);
});
}
if (t._tower_card_value > 0) {
this.onBtnShow(this.view.KW_BtnAct.KW_BtnBao, !0);
s++;
this.view.KW_BtnAct.KW_BtnBao.C_Act.setSelectedPage("bao");
const i = a.strCardStringValue[(0, a.VALUE)(t._tower_card_value)];
this.view.KW_BtnAct.KW_BtnBao.KW_BombCard.text = `${i}`;
c.gf.sp.onSpineLoaded(this.view.KW_BtnAct.KW_BtnBao.KW_Ani, t => {
t.setAnimation(0, "animation4", !0);
});
if (0 == this._tableData.getCurRoundBaoGuild()) {
const i = this._tableData.getHandCards(_.SELF_LOCAL_SEAT);
let s = 0;
i.forEach(e => {
this._cardLogic.getCardLogicValue(e) == t._tower_card_value && s++;
});
s >= 2 && e.push("bao");
}
}
if (t._star_card > 0) {
this.onBtnShow(this.view.KW_BtnAct.KW_BtnStarUp, !0);
s++;
this._putCardValCanStarUp = t._star_card;
this.view.KW_BtnAct.KW_BtnStarUp.C_Act.setSelectedPage("starUp");
let e = a.strCardStringValue[(0, a.VALUE)(t._star_card)];
"F" != e && "Z" != e || (e = "王");
this.view.KW_BtnAct.KW_BtnStarUp.KW_BombCard.text = `${e}`;
c.gf.sp.onSpineLoaded(this.view.KW_BtnAct.KW_BtnStarUp.KW_Ani, t => {
t.setAnimation(0, "animation5", !0);
});
this.dispatch("playStarUpAni" + l.GAME_ID, t._star_card);
} else this._putCardValCanStarUp = 0;
if (r > 0) {
r > 10 && (r -= 10);
const t = this.view.KW_BtnAct[`KW_BtnLianJi${r}`];
this.onBtnShow(t, !0);
s++;
t.C_Act.setSelectedPage(`lianJi${r}`);
c.gf.sp.onSpineLoaded(t.KW_Ani, t => {
t.setAnimation(0, `animation${r + 4}`, !0);
});
}
this.modifyActBtnGroup(s, n);
if (e.length > 0) {
e.sort((t, e) => i[t] - i[e]);
switch (e[0]) {
case "zha":
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_clickguide, {
clickguide_ui: "0"
});
this.view.KW_ActHint.C_Type.selectedPage = "炸牌";
this.showActHint(this.view.KW_BtnAct.KW_BtnZha1);
this._tableData.setCurRoundZhaGuild();
break;

case "bao":
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_clickguide, {
clickguide_ui: "1"
});
this.view.KW_ActHint.C_Type.selectedPage = "爆牌";
this.showActHint(this.view.KW_BtnAct.KW_BtnBao);
this._tableData.setCurRoundBaoGuild();
break;

case "wang":
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_clickguide, {
clickguide_ui: "2"
});
this.view.KW_ActHint.C_Type.selectedPage = "炸王";
this.view.KW_ActHint.visible = !0;
this.scheduleOnce(() => {
var t, e;
null === (e = null === (t = null == this ? void 0 : this.view) || void 0 === t ? void 0 : t.KW_ActHint) || void 0 === e || e.setPosition(this._guildHandWangPos.x, this._guildHandWangPos.y);
});
this._tableData.setCurRoundWangGuild();
break;

case "ming":
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_clickguide, {
clickguide_ui: "3"
});
this.view.KW_ActHint.C_Type.selectedPage = "明牌";
this.showActHint(this.view.KW_BtnAct.KW_BtnMingPai);
this._tableData.setCurRoundMingGuild();
break;

case "zimo":
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_clickguide, {
clickguide_ui: "4"
});
this.view.KW_ActHint.C_Type.selectedPage = "自摸";
this.showActHint(this.view.KW_BtnAct.KW_BtnZM);
this._tableData.setCurRoundZimoGuild();
}
}
this.view.KW_BtnAct.KW_BtnAct_Bg.setPosition(-this.view.KW_BtnAct.KW_BtnAct_Bg.width, -75);
}
modifyActBtnGroup(t, e) {
console.log("modifyActBtnGroup:btnCount:", t, ",tipCount:", e);
this.view.KW_BtnAct.ensureSizeCorrect();
}
showActHint(t) {
this.scheduleOnce(() => {
if (this.view) {
this.view.KW_ActHint.visible = !0;
const e = t.localToGlobal(), i = this.view.globalToLocal(e.x, e.y);
this.view.KW_ActHint.setPosition(i.x, i.y);
}
}, .2);
}
hideActHint() {
this.view.KW_ActHint.visible = !1;
}
onBtnShow(t, e) {
t.visible = e;
t.alpha = 0;
this.scheduleOnce(() => {
t.alpha = 1;
}, .1);
}
initBtnActPower() {
this.view.KW_BtnAct.KW_BtnZM.visible = !1;
this.view.KW_BtnAct.KW_BtnZha1.visible = !1;
this.view.KW_BtnAct.KW_BtnZha2.visible = !1;
this.view.KW_BtnAct.KW_BtnBao.visible = !1;
this.view.KW_BtnAct.KW_BtnMingPai.visible = !1;
this.view.KW_BtnAct.KW_BtnPlayCard.visible = !1;
this.view.KW_BtnAct.KW_BtnPass.visible = !1;
this.view.KW_BtnAct.KW_ActPowerList0.visible = !1;
this.view.KW_BtnAct.KW_ActPowerList1.visible = !1;
this.view.KW_BtnAct.KW_ActPowerList2.visible = !1;
this.view.KW_BtnAct.KW_BtnLianJi2.visible = !1;
this.view.KW_BtnAct.KW_BtnLianJi3.visible = !1;
this.view.KW_BtnAct.KW_BtnLianJi4.visible = !1;
this.view.KW_BtnAct.KW_BtnStarUp.visible = !1;
this.view.KW_BtnAct.KW_BtnHu.visible = !1;
this.view.KW_ActHint.visible = !1;
this.hideDoubleClickGuide();
}
hideDoubleClickGuide() {
this.view.C_ShowGuide.selectedIndex = 0;
this._putCardValCanStarUp > 0 && this.dispatch("hideStarUpAni" + l.GAME_ID);
}
updateSuggestPanel(t) {
this._tableData.resetAllLeftCards();
for (let e = 0; e < 2; ++e) {
const i = e + 1, s = this.view.KW_CompSuggest["KW_ListHand" + i], o = this.view.KW_CompSuggest["KW_TextTargetCardType" + i], a = this.view.KW_CompSuggest["KW_TextTargetCardMult" + i], l = this.view.KW_CompSuggest["KW_MaxInfo" + i];
if (0 == t._ct[e]) {
this.view.KW_CompSuggest.C_Single.selectedIndex = 1;
continue;
}
this.view.KW_CompSuggest.C_Single.selectedIndex = 0;
s.removeChildrenToPool();
const _ = t._cards[e];
for (const t of _) {
const e = s.addItemFromPool();
c.gf.setLayerNode(e);
e.visible = !0;
f.default.setCardSmallMult(e, t);
e.select.selectedIndex = 0;
}
const r = n.CardTypeInfo[t._ct[e]];
o.text = `【${r[1]}】`;
a.text = (t._mult[e] >= 1e4 ? c.comm.StringUtils.dealBigNumEx5(t._mult[e]) : t._mult[e]) + "倍";
if (t._left_tower_count[e] < 0) l.visible = !1; else {
l.visible = !0;
if (0 == t._left_tower_count[e]) l.C_Max.selectedIndex = 1; else {
l.C_Max.selectedIndex = 0;
l.title = t._left_tower_count[e].toString();
}
}
}
}
onMsgRecommendCards() {
const t = this._tableData.getRecommendCardsNew();
if (t._ct) {
if (n.CardTypeInfo[t._ct[0]]) {
this.view.KW_BtnOpenSuggest.bg.url = "ui://Game_K7Star_Btn/Tuijian_anniu";
c.gf.sp.onSpineLoaded(this.view.KW_BtnOpenSuggest.bg, t => {
t.setAnimation(0, "animation", !0);
});
this.view.KW_BtnOpenSuggest.title = n.CardTypeInfo[t._ct[0]][1];
}
if (this._isFirstShowSuggest && 0 === this._tableData.getHuCards(_.SELF_LOCAL_SEAT).length) {
this.view.suggest.setSelectedPage("open");
this._isFirstShowSuggest = !1;
this.updateSuggestPanel(t);
this.view.KW_CompSuggest.C_Light.selectedIndex = 1;
e.GTween.to(0, 1, 5).setTarget(this.view.suggest).onComplete(() => {
this.hideSuggest();
});
} else {
this.view.KW_CompSuggest.C_Light.selectedIndex = 0;
this.updateSuggestPanel(t);
}
"hide" == this.view.suggest.selectedPage && (this.view.suggest.selectedPage = "showOpenBtn");
}
}
onMsgTotalResult() {
this.onHideButton();
this.showBtnSuggest(!1);
this.view.KW_BtnMakeHand.visible = !1;
this.view.C_BankruptAgain.setSelectedPage("hide");
}
onMsgGameState(t) {
var e;
t._state != _.ENUM_GAME_STATE.GS_PLAY && this.onHideButton();
if (t._state >= _.ENUM_GAME_STATE.GS_CLONE) {
const t = this.getImpl(c.comm.lobby.IMingRenTangManager).getActInfo();
if ((null == t ? void 0 : t.isOpen) && t.showRoom.includes((null === (e = this.getImpl(c.comm.lobby.IJoinRoomModule).getCurRoomData()) || void 0 === e ? void 0 : e.vrRoomLv) || -1)) {
this.view.KW_BtnMingRenTang.visible = !this.getImpl(c.comm.lobby.IJoinRoomModule).isGuide();
if (!this._mingRenTangBtn) {
this._mingRenTangBtn = new S.default(this);
this._mingRenTangBtn.initUI(this.getImpl(c.comm.lobby.IMingRenTangManager).getUserInfo());
c.gf.sp.onSpineLoaded(this.view.KW_BtnMingRenTang.KW_Ani, t => {
t.premultipliedAlpha = !1;
t.loop = !0;
t.animation = "animation3_2";
});
this.addClick(this.view.KW_BtnMingRenTang, () => {
this.getImpl(c.gf.IViewPlugin).openView(c.comm.UIs.MingRenTangUI, 1);
});
}
} else this.view.KW_BtnMingRenTang.visible = !1;
} else t._state != _.ENUM_GAME_STATE.GS_WAIT && (this.view.KW_BtnMingRenTang.visible = !1);
t._state == _.ENUM_GAME_STATE.GS_TOTAL_RESULT && this._tableData.setUseNoteCardType(m.GLProtocol.msgCardRecordState.eFlag.FLAG_RELINK_WITH_NONE);
this.checkNoteCardBtnVisible();
}
hideSuggest() {
if ("open" == this.view.suggest.selectedPage) {
this.view.suggest.setSelectedPage("showOpenBtn");
this.view.KW_CompSuggest.C_Light.selectedIndex = 0;
}
}
onTouchCheckSuggest(t) {
const e = this.view.globalToLocal(t.pos.x, t.pos.y);
(e.x < this.view.KW_CompSuggest.x || e.x > this.view.KW_CompSuggest.x + this.view.KW_CompSuggest.width || e.y < this.view.KW_CompSuggest.y) && "open" == this.view.suggest.selectedPage && this.hideSuggest();
}
reqMultConfig() {
this.getImpl(c.comm.lobby.IAwardManager).reqAwardInfo({
reqK7Star: 1
}, c.comm.AwardConfig.respK7Star.type, l.GAME_ID);
}
respK7Star(t) {
"object" == typeof t && Boolean(t.key) && "respK7StarConfig" == t.key && this._tableData.setMultConfig(t.info);
}
onMsgDoPass() {
this.onHideButton();
}
onMsgBombCards(t) {
if (t._seat == this._tableData.getSelfSeat()) {
this.hideSuggest();
this.onHideButton();
}
}
onMsgDoTowerCard(t) {
if (t._seat == this._tableData.getSelfSeat()) {
this.hideSuggest();
this.onHideButton();
}
}
onHideButton() {
if (this.view) {
this.view.button.setSelectedPage("none");
this.dispatch("showAniFire" + l.GAME_ID, !1);
this.hideDoubleClickGuide();
} else console.log("no ui!");
}
updateTipCardMult(t, e) {
const i = this.view.KW_BtnAct["KW_ActPowerList" + t];
this.onBtnShow(i, !0);
const s = i.KW_CompTipCard;
s.visible = !0;
f.default.setCard(s, e);
let o = 0;
const n = this._tableData.getNowTingInfo();
console.log("_zimo_card_value", e);
console.log("getNowTingInfo", n);
if (n && n._ct) {
for (let t = 0; t < n._ct.length; t++) if (e === a.CardID.CID_BJ || e === a.CardID.CID_SJ) {
if (n._hu_cards[t] == a.CardValue.CV_SJ) {
o = n._mult[t];
break;
}
} else if (n._hu_cards[t] == (0, a.VALUE)(e)) {
o = n._mult[t];
break;
}
i.KW_TextTipCardMult.text = `${c.comm.StringUtils.dealBigNumEx5(o)}倍`;
}
}
updateZiMoTipCardMult(t, e, i) {
const s = this.view.KW_BtnAct["KW_ActPowerList" + t];
this.onBtnShow(s, !0);
const o = s.KW_CompTipCard;
o.visible = !0;
f.default.setCard(o, e);
const a = this._tableData.getWinLimitMult();
a < i && a > 0 && (i = a);
s.KW_TextTipCardMult.text = `${c.comm.StringUtils.dealBigNumEx5(i)}倍`;
s.C_Max.selectedIndex = i >= a ? 1 : 0;
}
onHidePlatButton() {
"playCard" == this.view.button.selectedPage && this.onHideButton();
}
updateTingMult() {}
onBtnDBProp() {
const t = this._gameActData.getDbConfig();
if (!t || !t.clv || t.clv > 2) return;
const e = this._tableData.gameLogicData.getPropCnt(_.SELF_LOCAL_SEAT, t.propid), i = this._tableData.gameLogicData.getDoubleInfo();
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newprop_click, {
icon_name: "翻倍卡icon",
icon_status: i._status == m.GLProtocol.msgSetDoubleProp.eStatus.ES_OPEN ? "翻倍卡-开启状态" : "翻倍卡-关闭状态",
prop_num: e,
icon_sence: "游戏中"
});
this._tableData.setShuShuPowerPropSource("游戏中");
i._status == m.GLProtocol.msgSetDoubleProp.eStatus.ES_OPEN ? this._gameLogicManager.sendSetDoubleProp(!1, t.clv) : e > 0 ? this._gameLogicManager.sendSetDoubleProp(!0, t.clv) : this.getImpl(c.gf.IViewPlugin).openView("DoublePropGift", e => {
console.log("onBtnDBProp DoublePropGift closeType:", e);
"buysuccess" === e && this._gameLogicManager.sendSetDoubleProp(!0, t.clv);
});
}
onBtnYPProp() {
const t = this._tableData.getSelf();
if (!t || !t.isVaildPlayer()) return;
const e = t.sr || 0, i = this._tableData.gameLogicData.getPropCnt(_.SELF_LOCAL_SEAT, c.comm.Propid.ProtectToken);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newprop_click, {
icon_name: "云币保护令icon",
icon_status: 1 == this.view.KW_BtnYP.C_ShowTips.selectedIndex ? "云币保护令-提醒状态" : "云币保护令-普通状态",
prop_num: i,
icon_sence: "游戏中"
});
this._tableData.setShuShuPowerPropSource("游戏中");
this.view.KW_BtnYP.C_ShowTips.setSelectedIndex(0);
c.gf.sp.onSpineLoaded(this.view.KW_BtnYP.KW_AniIcon, t => {
t.setAnimation(0, "animation1_2", !0);
});
const s = this._tableData.gameLogicData.getYunProtectInfo(), a = s._old_sr, n = s._old_sr - s._enter_sr, r = this._gameActModule.getYpConfig(), d = r.crasr || 0;
console.log("onBtnYPProp cnt:", i, ",sr:", e, ",_old_sr:", s._old_sr, ",sdiffSrr:", a, ",chargeSr:", n, ",crasr:", d);
if (i > 0) this.getImpl(c.gf.IViewPlugin).openView("YunProtectTips", a, r, this._tableData.getShuShuPowerPropSource(), l.GAME_ID, this._tableData.getSelf().sr, null, {
enter_sr: s._enter_sr,
old_sr: s._old_sr,
now_sr: this._tableData.getSelf().sr,
prop_cnt: i
}); else {
this.getImpl(c.gf.IViewPlugin).openView("YunProtectTips", a, r, this._tableData.getShuShuPowerPropSource(), l.GAME_ID, this._tableData.getSelf().sr, t => {
console.log("onBtnYPProp YunProtectTips closeType:", t, ",diffSr:", a);
if ("buysuccess" === t) this._tableData.getBankrupt(_.SELF_LOCAL_SEAT) && console.log("YunProtectTips isBankrupt not pop"); else {
console.log("YunProtectTips pay fail not pop");
this._tableData.setYunProtectPropCnt(-1);
}
}, {
enter_sr: s._enter_sr,
old_sr: s._old_sr,
now_sr: this._tableData.getSelf().sr,
prop_cnt: i
}, !0);
this._tableData.setYunProtectPropCnt(i);
}
}
onClickYPBack() {
const t = this._gameActModule.getYpResultSr(), e = this._gameActModule.getYpConfig(), i = this.getImpl(c.comm.lobby.IPropManager).getPropCnt(c.comm.Propid.ProtectToken);
console.log("onBtnYPBack cnt:", i, ",sr:", t);
t <= 0 || (i > 0 ? this.getImpl(c.gf.IViewPlugin).openView("YunProtectTips", t, e, this._tableData.getShuShuPowerPropSource(), l.GAME_ID, this._tableData.getSelf().sr, () => {}, null) : this.getImpl(c.gf.IViewPlugin).openView("YunProtectTips", t, e, this._tableData.getShuShuPowerPropSource(), l.GAME_ID, this._tableData.getSelf().sr, e => {
console.log("onBtnYPProp YunProtectTips closeType:", e, ",sr:", t);
"buysuccess" === e ? this.getImpl(c.comm.lobby.IGiftModule).reqUserPropInLobby(1, c.comm.Propid.ProtectToken, l.GAME_ID) : console.log("YunProtectTips pay fail not pop");
}, null, !0));
}
onBtnYPBack() {
const t = this._tableData.gameLogicData.getPropCnt(_.SELF_LOCAL_SEAT, c.comm.Propid.ProtectToken);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newprop_click, {
icon_name: "云币保护令icon",
icon_status: "云币保护令icon",
prop_num: t,
icon_sence: "认输界面"
});
this._tableData.setShuShuPowerPropSource("认输界面");
this.onClickYPBack();
}
onBtnYPBack2() {
const t = this.getImpl(c.comm.lobby.IPropManager).getPropCnt(c.comm.Propid.ProtectToken);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newprop_click, {
icon_name: "云币保护令icon",
prop_num: t,
icon_sence: "查看界面"
});
this._tableData.setShuShuPowerPropSource("查看界面");
this.onClickYPBack();
}
onBtnNoteCard() {
if (this._tableData.isNoteCardStatusWillUse()) return;
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_qxjpq_qxbp, {
[o.shuShuAnalytics.game_event_click_jpq.__name]: o.shuShuAnalytics.game_event_click_jpq.clickInGame
});
const t = this.getImpl(c.comm.lobby.IPropManager).getPropById(c.comm.Propid.JiPaiQiTime), e = (null == t ? void 0 : t.endTime) - Math.floor(Date.now() / 1e3);
if (this._tableData.isUseNoteCardCount() || this._tableData.isUseNoteCardTime() || e > 0) {
e > 0 && this._tableData.setUseNoteCardType(m.GLProtocol.msgCardRecordState.eFlag.FLAG_RELINK_WITH_TIME);
this.getImpl(u.default).sendReqTurnCardRecord(m.GLProtocol.msgTurnCardRecord.eFlag.FLAG_ON);
this.getImpl(c.gf.IViewPlugin).openView("NoteCardInGame");
return;
}
const i = this.getImpl(c.comm.lobby.IPropManager).getPropById(c.comm.Propid.JiPaiQi);
if (null == i ? void 0 : i.value) {
this._tableData.setNoteCardStatus(1);
this.getImpl(u.default).sendReqUsingPropEx(c.comm.Propid.JiPaiQi, this._tableData.getSelfSeat());
} else this.getImpl(c.gf.IViewPlugin).openView("WinningGiftInGame");
}
onBtnYPBackResult() {
const t = this.getImpl(c.comm.lobby.IPropManager).getPropCnt(c.comm.Propid.ProtectToken);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newprop_click, {
icon_name: "云币保护令icon",
prop_num: t,
icon_sence: "结算界面"
});
this._tableData.setShuShuPowerPropSource("结算界面");
this.onClickYPBack();
}
onMsgSkipLow(t) {
if (t._flag === m.GLProtocol.msgSkipLow.eFlag.FLAG_HIDE) this.onBtnSkipLowVisible(!1); else if (t._flag === m.GLProtocol.msgSkipLow.eFlag.FLAG_SHOW_ON || t._flag === m.GLProtocol.msgSkipLow.eFlag.FLAG_SHOW_OFF) {
const e = this.getLocalSkipLowState();
if (-1 === e) if (t._flag === m.GLProtocol.msgSkipLow.eFlag.FLAG_SHOW_ON) {
this._gameLogicManager.sendSkipLow(m.GLProtocol.msgSkipLow.eFlag.FLAG_ON);
this.setLocalSkipLowState(m.GLProtocol.msgSkipLow.eFlag.FLAG_ON);
} else {
this._gameLogicManager.sendSkipLow(m.GLProtocol.msgSkipLow.eFlag.FLAG_OFF);
this.setLocalSkipLowState(m.GLProtocol.msgSkipLow.eFlag.FLAG_OFF);
} else this._gameLogicManager.sendSkipLow(e);
this.onBtnSkipLowVisible(!0);
} else if (t._flag === m.GLProtocol.msgSkipLow.eFlag.FLAG_ON) {
this.isLocalSkipLowFirst(t._flag);
this.setLocalSkipLowState(t._flag);
this.onBtnSkipLowVisible(!0);
} else if (t._flag === m.GLProtocol.msgSkipLow.eFlag.FLAG_OFF) {
this.isLocalSkipLowFirst(t._flag);
this.setLocalSkipLowState(t._flag);
this.onBtnSkipLowVisible(!0);
}
const e = this._tableData.getReconnect();
e._flag === m.GLProtocol.msgReconnect.eFlag.FLAG_START ? this._tableData.getHuCards(_.SELF_LOCAL_SEAT).length > 0 ? this.onBtnSkipLowVisible(!0) : this.onBtnSkipLowVisible(!1) : e._flag === m.GLProtocol.msgReconnect.eFlag.FLAG_START_WITH_PEAK && this.onBtnSkipLowVisible(!1);
}
onBtnSkipLowVisible(t) {
this.isShowBtnJump = t;
this.dispatch("onMsgSkipLow_GameSetting", t);
}
getLocalSkipLowFirst() {
const t = this.getImpl(c.comm.lobby.IUserManager)._userManager.numid || 0;
return c.gf.LocalStorage.getInt(`KW_KA7XING_SKIPLOW_FIRST_TIPS_${t}`, 0);
}
setLocalSkipLowFirst() {
const t = this.getImpl(c.comm.lobby.IUserManager)._userManager.numid || 0, e = Math.floor(Date.now() / 1e3);
c.gf.LocalStorage.setInt(`KW_KA7XING_SKIPLOW_FIRST_TIPS_${t}`, e);
}
isLocalSkipLowFirst(t) {
if (-1 != this._tableData.getSkipLowFirst()) return;
const e = 1e3 * this.getLocalSkipLowFirst(), i = Date.now();
if (c.comm.StringUtils.isSameDay(e, i)) this._tableData.setSkipLowFirst(0); else {
this.setLocalSkipLowFirst();
this._tableData.setSkipLowFirst(1);
t === m.GLProtocol.msgSkipLow.eFlag.FLAG_ON ? null == this || this.getImpl(c.comm.ICommonDlgs).showWeakHint("默认开启低倍不和牌") : t === m.GLProtocol.msgSkipLow.eFlag.FLAG_OFF && (null == this || this.getImpl(c.comm.ICommonDlgs).showWeakHint("默认关闭低倍不和牌"));
}
}
getLocalSkipLowState() {
const t = this.getImpl(c.comm.lobby.IUserManager)._userManager.numid || 0;
return c.gf.LocalStorage.getInt(`KW_KA7XING_SKIPLOW_FIRST_STATE_${t}`, -1);
}
setLocalSkipLowState(t) {
const e = this.getImpl(c.comm.lobby.IUserManager)._userManager.numid || 0;
c.gf.LocalStorage.setInt(`KW_KA7XING_SKIPLOW_FIRST_STATE_${e}`, t);
}
onMsgGiveUp(t) {
const e = this._tableData.seatToLocal(t._seat);
if (t._flag == m.GLProtocol.msgGiveUp.eFlag.FLAG_GIVE_UP && e == _.SELF_LOCAL_SEAT) {
this.view.C_BankruptAgain.setSelectedPage("show");
if (this.getImpl(C.default).checkSrIsNotEnough()) {
const t = this.getImpl(p.default).onGetRCQInfo();
this.view.KW_BtnAgain2.C_ShowRCQ.setSelectedIndex(t > 0 ? 1 : 0);
if (t > 0) {
this.view.KW_BtnAgain2.KW_Tip_RCQ.KW_TextCnt.text = t + "";
const {levelid: e} = this.getImpl(p.default).getLevelid();
this.view.KW_BtnAgain2.KW_Tip_RCQ.C_Roomlv.setSelectedIndex(e);
}
}
const t = this._tableData.getShushuTouchu();
if (o.shuShuAnalytics.playcard_type["type" + t]) {
const e = this.getImpl(c.comm.lobby.IJoinRoomModule).getJoinRoomData().roomid || 0;
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_qxbp_playtype, {
room_id: e,
play_type: o.shuShuAnalytics.playcard_type["type" + t]
});
this._tableData.setShushuTouchu(0);
}
}
}
showServicePayAni(t) {
var i;
this.view.KW_CompServicePay.visible = t;
if (t) {
const t = this._tableData.getBaseInfo();
this.view.KW_CompServicePay.KW_TextCost.text = `${t._charge || 0}`;
this.view.KW_CompServicePay.KW_TextWinLostMax.text = `${c.comm.StringUtils.dealBigNumEx5((null == t ? void 0 : t._win_limit) || 0)}`;
(null === (i = this._tableData.getBaseInfo()) || void 0 === i ? void 0 : i._win_limit) < 0 && (this.view.KW_CompServicePay.KW_TextWinLostMax.text = "不封顶");
this.view.KW_CompServicePay.setPosition(this.view.width, this.view.KW_CompServicePay.y);
e.GTween.to(this.view.width, this.view.width - this.view.KW_CompServicePay.width, .3).setTarget(this.view.KW_CompServicePay, e.TweenPropType.X).setEase(e.EaseType.Linear).onComplete(() => {
e.GTween.to(this.view.width - this.view.KW_CompServicePay.width, this.view.width, .3).setTarget(this.view.KW_CompServicePay, e.TweenPropType.X).setDelay(1).setEase(e.EaseType.Linear).onComplete(() => {
this.showServicePayAni(!1);
});
});
}
}
onMsgSpecConfig(t) {
this.view.KW_BtnMakeHand.visible = 1 == t._flag;
}
onMsgPlayerLeaveSpecil(t) {
if (t == _.SELF_LOCAL_SEAT) {
this.view.button.setSelectedPage("leaveEarly");
const t = this._tableData.getShushuTouchu();
if (o.shuShuAnalytics.playcard_type["type" + t]) {
const e = this.getImpl(c.comm.lobby.IJoinRoomModule).getJoinRoomData().roomid || 0;
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_qxbp_playtype, {
room_id: e,
play_type: o.shuShuAnalytics.playcard_type["type" + t]
});
this._tableData.setShushuTouchu(0);
}
}
}
onHidePowerPropBtn() {
this.view.KW_BtnYP.visible = !1;
this.view.KW_BtnDB.visible = !1;
}
onMsgYunProtectInfo(t) {
const e = this._tableData.gameLogicData.getYunProtectInfo();
if (0 == e._open) {
this.view.KW_BtnYP.visible = !1;
return;
}
const i = this._tableData.gameLogicData.getPropCnt(_.SELF_LOCAL_SEAT, c.comm.Propid.ProtectToken);
if (!((this._tableData.getGameState()._state || _.ENUM_GAME_STATE.GS_IDLE) >= _.ENUM_GAME_STATE.GS_TOTAL_RESULT || this._tableData.getBankrupt(_.SELF_LOCAL_SEAT))) if (t == m.GLProtocol.msgYunProtectInfo.eFlag.EF_INIT) {
this.view.KW_BtnYP.visible = !0;
this.view.KW_BtnYP.C_ShowTips.setSelectedIndex(0);
c.gf.sp.onSpineLoaded(this.view.KW_BtnYP.KW_AniIcon, t => {
t.setAnimation(0, "animation1_1", !1);
t.addAnimation(0, "animation1_2", !0);
});
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newpropicon_exposure, {
icon_name: "云币保护令icon",
prop_num: i,
icon_sence: "游戏中"
});
this.onUpdateBtnPropCnt();
this.onUpdateYunProBtnTips();
} else if (t == m.GLProtocol.msgYunProtectInfo.eFlag.EF_PROP) {
this.dispatch("onShowYunProtectAni" + l.GAME_ID, e._old_sr, _.SELF_LOCAL_SEAT);
let t = 0;
const s = this._tableData.getSelf();
s && s.isVaildPlayer() && (t = s.sr);
console.log("onMsgYunProtectInfo EF_PROP,sr=", t, "_enter_sr=", e._enter_sr, "_old_sr=", e._old_sr);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newprop_use, {
page_name: "局内触发成功",
gold_num: e._old_sr - t,
gold_gift_num: e._old_sr - e._enter_sr,
prop_num: i,
gameid: l.GAME_ID
});
} else if (t == m.GLProtocol.msgYunProtectInfo.eFlag.EF_UPDATE) {
const t = this._tableData.getYunProtectPropCnt();
console.log("onMsgYunProtectInfo EF_UPDATE,cnt=", i, "lastCnt=", t);
if (-1 != t && t != i && i > 0) {
this._gameLogicManager.sendUsePropSpecil(c.comm.Propid.ProtectToken, 1);
this._tableData.setYunProtectPropCnt(-1);
}
}
}
onUpdateYunProBtnTips() {
const t = this._tableData.gameLogicData.getYunProtectInfo();
if (!t || 0 == t._open) return;
const e = this._tableData.getSelf();
if (!e || !e.isVaildPlayer()) return;
if (this._tableData.getShowYunBtnTips()) return;
const i = this._gameActModule.getYpConfig(), s = i.loseR || 0, o = i.towerMult || 0, a = i.enterSr || 0, n = e.sr || 0;
let l = !1;
t._old_sr > 0 && n < t._old_sr && 100 * (t._old_sr - n) / t._old_sr >= s && (l = !0);
let r = !1;
for (let t = 0; t < _.MAX_PLAYER; t++) if (t != _.SELF_LOCAL_SEAT && this._tableData.gameLogicData.getTowerMult(t) >= o) {
r = !0;
break;
}
if (t._enter_sr > a && (l || r)) {
this.view.KW_BtnYP.KW_TxtTip.text = "云币无损 提前离开";
this.view.KW_BtnYP.C_ShowTips.setSelectedIndex(1);
c.gf.sp.onSpineLoaded(this.view.KW_BtnYP.KW_AniIcon, t => {
t.setAnimation(0, "animation1_3", !0);
});
this._tableData.setShowYunBtnTips(!0);
}
}
onMsgSetDoubleProp(t) {
console.log("onMsgSetDoubleProp :", t);
const e = this._tableData.gameLogicData.getDoubleInfo();
if (0 == e._open) {
this.view.KW_BtnDB.visible = !1;
return;
}
const i = this._gameActData.getDbConfig();
if (!i || !i.clv || i.clv > 2) return;
this.view.KW_BtnDB.visible = !0;
this.view.KW_BtnDB.C_ShowTips.setSelectedIndex(0);
const s = 2 == i.clv ? 2 : 3;
e._status == m.GLProtocol.msgSetDoubleProp.eStatus.ES_OPEN ? c.gf.sp.onSpineLoaded(this.view.KW_BtnDB.KW_AniIcon, t => {
t.setAnimation(0, `animation${s}_3`, !0);
}) : t == m.GLProtocol.msgSetDoubleProp.eFlag.EF_INIT ? c.gf.sp.onSpineLoaded(this.view.KW_BtnDB.KW_AniIcon, t => {
t.setAnimation(0, `animation${s}_1`, !1);
t.addAnimation(0, `animation${s}_2`, !0);
}) : c.gf.sp.onSpineLoaded(this.view.KW_BtnDB.KW_AniIcon, t => {
t.setAnimation(0, `animation${s}_2`, !0);
});
const a = this._tableData.gameLogicData.getPropCnt(_.SELF_LOCAL_SEAT, i.propid);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newpropicon_exposure, {
icon_name: "翻倍卡icon",
prop_num: a,
icon_sence: "游戏中"
});
this.onUpdateBtnPropCnt();
}
onDoublePropBtnAni() {
const t = this._tableData.gameLogicData.getDoubleInfo();
if (0 == t._open) return;
const e = this._gameActData.getDbConfig();
if (!e || !e.clv || e.clv > 2) return;
const i = 2 == e.clv ? 2 : 3;
t._status == m.GLProtocol.msgSetDoubleProp.eStatus.ES_OPEN ? c.gf.sp.onSpineLoaded(this.view.KW_BtnDB.KW_AniIcon, t => {
t.setAnimation(0, `animation${i}_4`, !1);
t.addAnimation(0, `animation${i}_3`, !0);
}) : c.gf.sp.onSpineLoaded(this.view.KW_BtnDB.KW_AniIcon, t => {
t.setAnimation(0, `animation${i}_4`, !1);
t.addAnimation(0, `animation${i}_2`, !0);
});
}
onUpdateBtnPropCnt() {
let t = this._tableData.gameLogicData.getPropCnt(_.SELF_LOCAL_SEAT, c.comm.Propid.ProtectToken);
this.view.KW_BtnYP.KW_TxtCnt.text = `${this.getPropCnt2Str(t)}`;
t > 0 ? this.view.KW_BtnYP.C_ShowCnt.setSelectedIndex(1) : this.view.KW_BtnYP.C_ShowCnt.setSelectedIndex(0);
this.getImpl(c.comm.lobby.IPropManager).getPropCnt(c.comm.Propid.ProtectToken) != t && this.getImpl(c.comm.lobby.IPropManager).reqUserProp();
const e = this._gameActData.getDbConfig(), i = (null == e ? void 0 : e.propid) || 0;
t = this._tableData.gameLogicData.getPropCnt(_.SELF_LOCAL_SEAT, i);
this.view.KW_BtnDB.KW_TxtCnt.text = `${this.getPropCnt2Str(t)}`;
t > 0 ? this.view.KW_BtnDB.C_ShowCnt.setSelectedIndex(1) : this.view.KW_BtnDB.C_ShowCnt.setSelectedIndex(0);
}
getPropCnt2Str(t) {
let e = "";
t >= 100 ? e = "99+" : t >= 0 && (e = t + "");
return e;
}
onShowBtnYPBack(t) {
this.view.C_ShowYPBack.setSelectedIndex(t ? 1 : 0);
if (t) {
if (this._tableData.isInGame()) {
const t = this._tableData.gameLogicData.getPropCnt(_.SELF_LOCAL_SEAT, c.comm.Propid.ProtectToken);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newpropicon_exposure, {
icon_name: "云币保护令icon",
prop_num: t,
icon_sence: "认输界面"
});
} else {
const t = this.getImpl(c.comm.lobby.IPropManager).getPropCnt(c.comm.Propid.ProtectToken);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newpropicon_exposure, {
icon_name: "云币保护令icon",
prop_num: t,
icon_sence: "查看界面"
});
}
c.gf.sp.onSpineLoaded(this.view.KW_BtnYPBack.KW_AniIcon, t => {
t.setAnimation(0, "animation2", !0);
});
c.gf.sp.onSpineLoaded(this.view.KW_BtnYPBack2.KW_AniIcon, t => {
t.setAnimation(0, "animation2", !0);
});
}
}
onBtnBuffDetail() {
const t = this.view.KW_BtnBuff.localToGlobal(), i = e.GRoot.inst.globalToLocal(t.x, t.y);
this.getImpl(c.gf.IViewPlugin).openView("GameBuffDetails", i);
}
onBtnBuffDetailClose() {
this._viewBuffDetail.visible = !1;
}
onToggleBtnBuff(t) {
const e = this.view.KW_BtnBuff, i = this._tableData.getBuffList();
if (i.length > 0) {
e.visible = !0;
e.KW_textBuff.text = `+${i.length}`;
e.KW_textBuff.visible = !1;
e.KW_AniLight.visible = t;
if (t) {
c.gf.sp.onSpineLoaded(e.KW_AniLight, t => {
t.setAnimation(0, "animation", !1);
t.setCompleteListener(() => {
e.KW_AniLight.visible = !1;
});
});
c.gf.sp.onSpineLoaded(e.KW_AniBase, t => {
t.setAnimation(0, "animation1", !1);
t.addAnimation(0, "animation2", !0);
t.setEventListener((t, i) => {
if ("add_img" == i.data.name && e.aniBig) {
e.KW_textBuff.visible = !0;
e.aniBig.play();
}
});
});
} else {
e.KW_textBuff.visible = !0;
c.gf.sp.onSpineLoaded(e.KW_AniBase, t => {
t.setAnimation(0, "animation2", !0);
});
}
} else e.visible = !1;
}
onCheckBuffCard() {
const t = this._tableData.getBuffList();
if (t.length > 0) {
this.view.KW_BtnBuff.visible = !0;
this.view.KW_BtnBuff.KW_textBuff.text = `+${t.length}`;
} else this.view.KW_BtnBuff.visible = !1;
}
};
E([ c.gf.listen(c.comm.Events.EventMingRenTangUser) ], L.prototype, "onMingRenTangUser", null);
E([ c.gf.listen(c.comm.Events.EventJoinGame) ], L.prototype, "onEventJoinGame", null);
E([ c.gf.listen("reset" + l.GAME_ID) ], L.prototype, "resetUI", null);
E([ c.gf.listen("onGameStart" + l.GAME_ID) ], L.prototype, "onGameStart", null);
E([ c.gf.listen("onChangeSeat" + l.GAME_ID) ], L.prototype, "onChangeSeat", null);
E([ c.gf.listen(A.GameEventName.PLAY_CARD_ON_CLICK) ], L.prototype, "onPlayCardOnClickCard", null);
E([ c.gf.listen("onShowReady") ], L.prototype, "onShowReady", null);
E([ c.gf.listen("onBtnLookCardType" + l.GAME_ID) ], L.prototype, "onBtnLookCardType", null);
E([ c.gf.listen("onBtnStartGame" + l.GAME_ID) ], L.prototype, "onBtnStartGame", null);
E([ c.gf.listen("onBtnExit" + l.GAME_ID) ], L.prototype, "onExit", null);
E([ c.gf.listen("onMsgTurntableExit" + l.GAME_ID) ], L.prototype, "onMsgTurntableExit", null);
E([ c.gf.listen("onBtnMultTable" + l.GAME_ID) ], L.prototype, "onBtnMultTable", null);
E([ c.gf.listen("onBtnContinue" + l.GAME_ID) ], L.prototype, "onBtnContinue", null);
E([ c.gf.listen("onContinueGame" + l.GAME_ID) ], L.prototype, "onContinueGame", null);
E([ c.gf.listen("showBtnSuggest" + l.GAME_ID) ], L.prototype, "showBtnSuggest", null);
E([ c.gf.listen("showChangeTips" + l.GAME_ID) ], L.prototype, "showChangeTips", null);
E([ c.gf.listen("onMsgBaseInfo" + l.GAME_ID) ], L.prototype, "onMsgBaseInfo", null);
E([ c.gf.listen("onMsgReconnect" + l.GAME_ID) ], L.prototype, "onMsgReconnect", null);
E([ c.gf.listen("showBtnTing" + l.GAME_ID) ], L.prototype, "showBtnTing", null);
E([ c.gf.listen("onMsgHuCards" + l.GAME_ID) ], L.prototype, "onMsgHuCards", null);
E([ c.gf.listen("onMsgHandCards" + l.GAME_ID) ], L.prototype, "onMsgHandCards", null);
E([ c.gf.listen("onMsgPlayCards" + l.GAME_ID) ], L.prototype, "onMsgPlayCards", null);
E([ c.gf.listen("onMsgPlayCardsPeak" + l.GAME_ID) ], L.prototype, "onMsgPlayCardsPeak", null);
E([ c.gf.listen("onMsgActPowerNew" + l.GAME_ID) ], L.prototype, "onMsgActPowerNew", null);
E([ c.gf.listen("unpdateSuggestPanel" + l.GAME_ID) ], L.prototype, "updateSuggestPanel", null);
E([ c.gf.listen("onMsgRecommendCards" + l.GAME_ID) ], L.prototype, "onMsgRecommendCards", null);
E([ c.gf.listen("onMsgTotalResult" + l.GAME_ID) ], L.prototype, "onMsgTotalResult", null);
E([ c.gf.listen("onMsgGameState" + l.GAME_ID) ], L.prototype, "onMsgGameState", null);
E([ c.gf.listen(c.comm.AwardConfig.respK7Star.dataHead) ], L.prototype, "respK7Star", null);
E([ c.gf.listen("onMsgDoPass" + l.GAME_ID) ], L.prototype, "onMsgDoPass", null);
E([ c.gf.listen("onMsgBombCards" + l.GAME_ID) ], L.prototype, "onMsgBombCards", null);
E([ c.gf.listen("onMsgDoTowerCard" + l.GAME_ID) ], L.prototype, "onMsgDoTowerCard", null);
E([ c.gf.listen("onHidePlatButton" + l.GAME_ID) ], L.prototype, "onHidePlatButton", null);
E([ c.gf.listen("updateTingMult" + l.GAME_ID) ], L.prototype, "updateTingMult", null);
E([ c.gf.listen("onBtnYPBack" + l.GAME_ID) ], L.prototype, "onBtnYPBack", null);
E([ c.gf.listen("onBtnYPBackResult" + l.GAME_ID) ], L.prototype, "onBtnYPBackResult", null);
E([ c.gf.listen("onMsgSkipLow" + l.GAME_ID) ], L.prototype, "onMsgSkipLow", null);
E([ c.gf.listen("onBtnSkipLowVisible" + l.GAME_ID) ], L.prototype, "onBtnSkipLowVisible", null);
E([ c.gf.listen("onMsgGiveUp" + l.GAME_ID) ], L.prototype, "onMsgGiveUp", null);
E([ c.gf.listen("showServicePayAni" + l.GAME_ID) ], L.prototype, "showServicePayAni", null);
E([ c.gf.listen("onMsgSpecConfig" + l.GAME_ID) ], L.prototype, "onMsgSpecConfig", null);
E([ c.gf.listen("onMsgPlayerLeaveSpecil" + l.GAME_ID) ], L.prototype, "onMsgPlayerLeaveSpecil", null);
E([ c.gf.listen("onHidePowerPropBtn" + l.GAME_ID) ], L.prototype, "onHidePowerPropBtn", null);
E([ c.gf.listen("onMsgYunProtectInfo" + l.GAME_ID) ], L.prototype, "onMsgYunProtectInfo", null);
E([ c.gf.listen("onUpdateYunProBtnTips" + l.GAME_ID) ], L.prototype, "onUpdateYunProBtnTips", null);
E([ c.gf.listen("onMsgSetDoubleProp" + l.GAME_ID) ], L.prototype, "onMsgSetDoubleProp", null);
E([ c.gf.listen("onDoublePropBtnAni" + l.GAME_ID) ], L.prototype, "onDoublePropBtnAni", null);
E([ c.gf.listen("onMsgPlayerPropInfo" + l.GAME_ID) ], L.prototype, "onUpdateBtnPropCnt", null);
E([ c.gf.listen("onShowBtnYPBack" + l.GAME_ID) ], L.prototype, "onShowBtnYPBack", null);
E([ c.gf.listen("onToggleBtnBuff" + l.GAME_ID) ], L.prototype, "onToggleBtnBuff", null);
E([ c.gf.listen("onCheckBuffCard" + l.GAME_ID) ], L.prototype, "onCheckBuffCard", null);
const T = L = E([ c.gf.controller({
name: "GameBtn",
module: "game_k7star",
fguiObject: "View",
layer: c.gf.ViewLayer.Base,
fguiPackage: [ "Game_K7Star_Common", "Game_K7Star_Card", "Game_K7Star_Btn" ],
cachable: !0,
sortingOrder: _.FGUI_ORDER.GAME_BTN
}) ], L);
},
"./bin/ui/main/GameBuffDetails.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => l
});
var s = i("./bin/config/GameDefine.js"), o = i("./bin/data/TableData.js"), a = i("./bin/gf.js");
let n = class extends a.gf.mvc.UIController {
onUIBinded() {
this._tableData = this.getImpl(o.default);
this.addClick(this.view.KW_mask, this.onBtnClose);
}
onUnUIBinded() {}
initUI(t) {
const e = t.x, i = t.y - 40;
console.log("posX=", e, "posY=", i);
this.view.visible = !0;
for (let t = 0; t < this.view.KW_list.numChildren; t++) {
const e = this.view.KW_list.getChildAt(t);
e && e.visible && (e.visible = !1);
}
const s = this._tableData.getBuffList(), o = this.view.KW_list.numChildren, a = s.length;
for (let t = 0; t < a; t++) {
let e = null;
(e = o > t ? this.view.KW_list.getChildAt(t) : this.view.KW_list.addItemFromPool()).visible = !0;
e.KW_text.text = this._tableData.getBuffDetail(s[t]);
e.KW_text.visible = !0;
e.C_ctBuff.selectedIndex = s[t].id;
}
const n = this.view.KW_list.width;
console.log("itemWidth=", n);
this.view.KW_list.setSize(n, 126 * a);
this.view.KW_list.ensureSizeCorrect();
this.view.KW_list.x = e;
this.view.KW_list.y = i;
}
onDestroy() {
var t;
null === (t = null == this ? void 0 : this.close) || void 0 === t || t.call(this);
}
};
const l = n = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
}([ a.gf.controller({
name: "GameBuffDetails",
module: "game_k7star",
fguiObject: "BuffDetails",
layer: a.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_Btn" ],
cachable: !0,
sortingOrder: s.FGUI_ORDER.GAME_POP
}) ], n);
},
"./bin/ui/main/GameCard.js": (t, i, s) => {
s.r(i);
s.d(i, {
default: () => S
});
var a = s("./bin/config/CardCode.js"), n = s("./bin/config/CardConfig.js"), l = s("./bin/config/GameConfig.js"), _ = s("./bin/config/GameDefine.js"), r = s("./bin/config/GameEvents.js"), d = s("./bin/config/SoundConfig.js"), h = s("./bin/data/TableData.js"), c = s("./bin/gameLogic/CardRuleLogic.js"), g = s("./bin/gf.js"), u = s("./bin/logic/moudles/GameLogicManager.js"), m = s("./bin/logic/protocol/GLProtocol.js"), C = s("./bin/ui/component/CardComb.js"), p = s("./bin/ui/component/CardComponent.js"), f = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let A = class extends g.gf.mvc.UIController {
constructor() {
super(...arguments);
this._fristInit = !0;
this._isMoreSelect = !1;
this._timerNum = 0;
this._timerLocalSeat = 0;
this._flyCards = [];
this._addCardsAniPool = [];
this._addCardsAniUsePool = [];
this._addCardsAniSelfPool = [];
this._outCardsAniPool = [];
this._isShowAllHuBtn = !1;
this._dealAniVersion = 0;
this.setTimerUI = () => {
this._timerNum -= 1;
if (this._timerNum < 0) {
this.stopAllTimer();
this.dispatch("onHidePlatButton" + l.GAME_ID);
} else {
this.view.KW_CompClock.KW_TextClock.text = this._timerNum.toString();
this.view.KW_CompClock.KW_TextClock.visible = -1 != this._timerLocalSeat;
}
};
}
onUIBinded() {
this._tableData = this.getImpl(h.default);
this._cardLogic = new c.default();
this._gameLogicManager = this.getImpl(u.default);
this._iSound = this.getImpl(g.gf.ISound);
this._iSoundModule = this.getImpl(g.comm.lobby.ISoundModule);
this.addClick(this.view.KW_CompTouch, this.onBtnBack);
for (let t = 0; t < _.MAX_PLAYER; t++) {
const e = this.view["KW_CompHuCard_" + t];
this.addClick(e.KW_ImgHuDi.KW_BtnShowHu, () => {
this.onClickShowHuAllList(t);
});
}
p.default.setParentNode(p.ComponentType.FIRE, this.view.KW_Card_Fire);
p.default.setChild(p.ComponentType.FIRE, "Game_K7Star_Card", "CardFireChild");
}
onUnUIBinded() {
p.default.init();
}
initUI() {
this.resetUI();
g.gf.sp.onSpineLoaded(this.view.KW_CompClock.KW_AniArrow, t => {
t.loop = !0;
t.animation = "animation0";
});
this.dispatch("TingShow" + l.GAME_ID, !1);
this.clearCardLayer();
this.showCloneCardsBG(!1);
this.showCloneCards(!1);
this._tableData.setBtnDeckBuffPosition(g.gf.newVec2(this.view.KW_CompLeftBG.x, this.view.KW_CompLeftBG.y));
this.schedule(() => {
p.default.refreshPos();
}, 0);
for (let t = 0; t < _.MAX_PLAYER; t++) {
const e = this.view["KW_Luck_Pos" + t];
if (e) {
const i = g.gf.newVec2(e.x, e.y);
this._tableData.setGoldCardPos(t, i);
}
}
this.initBuffCard();
}
resetUI() {
this.clearCardLayer();
this.setPlayerTimer(_.MAX_PLAYER, 0, _.ENUM_GAME_STATE.GS_WAIT);
this.showCloneCardsBG(!1);
this.showCloneCards(!1);
for (let t = 0; t < this._flyCards.length; t++) {
const i = this._flyCards[t];
if (i) {
const t = i.length;
for (let s = 0; s < t; s++) {
const t = i[s];
e.GTween.kill(t);
t.visible = !1;
}
}
}
for (let t = 0; t < _.MAX_PLAYER; t++) this.view["KW_AniBoom_" + t].KW_Num.text = "x0";
this.view.KW_CompLeftBG.C_buff.selectedPage = "hide";
this.view.KW_CompLeftBG.KW_TextLeft.font = "ui://Game_K7Star_Card/shengyupai";
}
onGameStart() {
this.clearCardLayer();
}
getRandom(t, e) {
return Math.floor(Math.random() * (e - t + 1)) + t;
}
onDestroy() {}
onChangeSeat() {
this.resetUI();
}
setMoreSelect(t) {
this._isMoreSelect = t;
}
onBtnBack() {
this.dispatch("allDownCards" + l.GAME_ID);
this.dispatch("TingShow" + l.GAME_ID, !1);
}
clearCardLayer() {
var t;
for (let i = 0; i < _.MAX_PLAYER; i++) {
this.view.KW_AniOut.visible = !1;
this.setHandCards(i, [], !0);
this.setOutCards(i, []);
this.setHuCards(i, []);
const s = this.view["KW_AniBoom_" + i];
s.visible = !1;
s.KW_Num.text = "x0";
this.view["KW_Luck_" + i] && (this.view["KW_Luck_" + i].visible = !1);
const o = null === (t = this.view["KW_CompHandCard_" + i]) || void 0 === t ? void 0 : t.asList;
if (o) for (let t = 0; t < o.numChildren; t++) {
const i = o.getChildAt(t);
e.GTween.kill(i);
i.setScale(1, 1);
}
}
this.view.KW_Luck_Buff && (this.view.KW_Luck_Buff.visible = !1);
for (let t = 0; t < this._addCardsAniSelfPool.length; t++) this._addCardsAniSelfPool[t].visible = !1;
this.view.KW_CompClock.visible = !1;
this.updateDeckCount(0);
}
onMsgDeckCount(t) {
!0 !== this._tableData.getTakeFirstIng() && this.updateDeckCount(t);
}
updateDeckCount(t) {
if (t > 0) {
this.view.KW_CompLeftBG.visible = !0;
this.view.KW_CompLeftBG.KW_TextLeft.text = t.toString();
} else this.view.KW_CompLeftBG.visible = !1;
}
onMsgGoldBuffInfoCloneAdd() {
const t = this._tableData.getBuffCloneCnt();
if (t && t.cnt > 0) {
this.view.KW_CompLeftBG.C_buff.selectedPage = "show";
g.gf.sp.onSpineLoaded(this.view.KW_CompLeftBG.KW_ani, t => {
t.setAnimation(0, "animation", !0);
});
this.view.KW_CompLeftBG.KW_TextLeft.font = "ui://Game_K7Star_Card/shengyupai2";
} else {
this.view.KW_CompLeftBG.C_buff.selectedPage = "hide";
this.view.KW_CompLeftBG.KW_TextLeft.font = "ui://Game_K7Star_Card/shengyupai";
}
}
stopAllTimer() {
this.unschedule(this.setTimerUI);
this.view.KW_CompClock.KW_TextClock.visible = !1;
}
setPlayerTimer(t, e, i) {
this.stopAllTimer();
this.showPlayerTimer(t, e > 0);
this.view.KW_CompClock.KW_TextClock.text = e.toString();
this.view.KW_CompClock.KW_TextClock.visible = i != _.ENUM_GAME_STATE.GS_WAIT;
if (!(e <= 0 || i == _.ENUM_GAME_STATE.GS_WAIT)) {
this._timerNum = e;
this._timerLocalSeat = t;
this.schedule(this.setTimerUI, 1);
}
}
showPlayerTimer(t, e) {
if (-1 === t && e) g.gf.sp.onSpineLoaded(this.view.KW_CompClock.KW_AniArrow, t => {
t.animation = "animation0";
}); else if (t < _.MAX_PLAYER && e) {
const e = [ "animation2", "animation1", "animation4", "animation3" ];
g.gf.sp.onSpineLoaded(this.view.KW_CompClock.KW_AniArrow, i => {
i.animation = e[t] || "";
});
}
this.view.KW_CompClock.visible = e;
e || this.stopAllTimer();
}
onMsgPlayerStart() {
this.clearCardLayer();
}
onMsgTimer(t) {
for (let e = 0; e < _.MAX_PLAYER; e++) this.showPlayerTimer(t._seat, !1);
let e = this._tableData.seatToLocal(t._seat);
e == _.MAX_PLAYER && (e = _.MAX_PLAYER);
-1 === t._seat && (e = -1);
this.setPlayerTimer(e, t._time, t._type);
}
onGameEnd() {
for (let t = 0; t < _.MAX_PLAYER; t++) this.showPlayerTimer(t, !1);
this.stopAllTimer();
}
stopAllPlayerTimer() {
for (let t = 0; t < _.MAX_PLAYER; t++) this.showPlayerTimer(t, !1);
this.stopAllTimer();
}
showOutCardAni(t, i, s, o = !1) {
this.view.KW_AniOut.visible = !1;
for (let t = 0; t < _.MAX_PLAYER; t++) {
const i = this.view["KW_CompOutCard_" + t];
for (let t = 0; t < i.numChildren; t++) {
const s = i.getChildAt(t);
if (!0 !== s.visible) break;
s.setScale(1, 1);
e.GTween.kill(s);
}
}
const a = this.view["KW_CompOutCard_" + t];
if (i) {
const e = a.getChildAt(s);
t == _.SELF_LOCAL_SEAT && this.scheduleOnce(() => {
var i;
e.setScale(1.4, 1.4);
if (e && (null === (i = null == this ? void 0 : this.view) || void 0 === i ? void 0 : i.KW_AniOut)) {
const i = e.scaleX * a.scaleX;
this.view.KW_AniOut.visible = !0;
this.view.KW_AniOut.setScale(i, i);
e.ensureBoundsCorrect();
e.ensureSizeCorrect();
this.scheduleOnce(() => {
const s = e.localToGlobal(0, 0), a = this.view.KW_AniOut.parent.globalToLocal(s.x, s.y);
this.view.KW_AniOut.setPosition(a.x + e.width * i / 2 + 1, a.y + e.height * i / 2);
this.view.KW_AniOut.rotation = e.parent.rotation;
o && this.dispatch("showStarUpMoveAniByCardGLocalPos" + l.GAME_ID, t, {
x: this.view.KW_AniOut.x,
y: this.view.KW_AniOut.y
});
});
}
}, .1);
if (t !== _.SELF_LOCAL_SEAT) {
e.alpha = 0;
this.showOutCards(s, t, () => {
e.setScale(1.4, 1.4);
const i = e.scaleX * a.scaleX;
this.view.KW_AniOut.visible = !0;
this.view.KW_AniOut.setScale(i, i);
const s = e.localToGlobal(0, 0), n = this.view.KW_AniOut.parent.globalToLocal(s.x, s.y);
t == _.PlayerEnum.PLAYER_0 ? this.view.KW_AniOut.setPosition(n.x - e.height * i / 2, n.y + e.width * i / 2 + 1) : t == _.PlayerEnum.PLAYER_2 ? this.view.KW_AniOut.setPosition(n.x + e.height * i / 2, n.y - e.width * i / 2 - 1) : t == _.PlayerEnum.PLAYER_3 && this.view.KW_AniOut.setPosition(n.x - e.width * i / 2 - 1, n.y - e.height * i / 2);
this.view.KW_AniOut.rotation = e.parent.rotation;
o && this.dispatch("showStarUpMoveAniByCardGLocalPos" + l.GAME_ID, t, {
x: this.view.KW_AniOut.x,
y: this.view.KW_AniOut.y
});
});
}
}
}
showOutCards(t, i, s) {
var o;
const a = this.view["KW_CompOutCard_" + i].asList.getChildAt(t);
let n = null;
for (let t = 0; t < this._outCardsAniPool.length; t++) {
const e = this._outCardsAniPool[t];
if (!1 === e.visible) {
n = e;
break;
}
}
if (null === n) {
n = e.UIPackage.createObject("Game_K7Star_Card", "CardOut");
g.gf.setLayerNode(n);
n.name = `cardsItem_${t}`;
this._outCardsAniPool.push(n);
this.view.addChild(n);
}
n.visible = !0;
const l = a.localToGlobal(), _ = e.GRoot.inst.globalToLocal(l.x, l.y), r = (null === (o = this._tableData.getOutCards(i)) || void 0 === o ? void 0 : o[t]) || 0;
C.default.setCard(n, r);
n.select.setSelectedPage("hide");
n.setPosition(_.x, _.y);
n.rotation = 90 * (i + 1);
3 === i && (n.rotation = 180);
const d = this.view["KW_CompHandCard_" + i].localToGlobal(), h = e.GRoot.inst.globalToLocal(d.x, d.y);
n.setPosition(h.x, h.y);
e.GTween.to2(n.x, n.y, _.x, _.y, .17).setTarget(n, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
a.alpha = 1;
n.visible = !1;
this.dispatch("setHandCards", i, this._tableData.getHandCards(i), !0);
console.log("showDrawCards setPlayingCardAni false");
s && s();
});
e.GTween.to2(1, 1, 1.4, 1.4, .17).setTarget(n, e.TweenPropType.Scale).setEase(e.EaseType.Linear);
}
isShowLoginAni() {
let t = 0;
const e = this._tableData.getPlayerBySeat(this._tableData.getSelfSeat());
if (e) {
const i = g.comm.Util.MAKEUSERID(e.areaid, e.numid);
t = this._tableData.getDressProp(i, o.DressPropType.gameLoginAni);
}
if (0 === t) for (let e = 0; e < 4; e++) {
if (this._tableData.getSelfSeat() === e) continue;
const i = this._tableData.getPlayerBySeat(e);
if (i) {
const e = g.comm.Util.MAKEUSERID(i.areaid, i.numid), s = this._tableData.getDressProp(e, o.DressPropType.gameLoginAni);
if (0 != s) {
t = s;
break;
}
}
}
console.log("isShowLoginAni showPropAniID", t);
return 0 != t;
}
onShowLoginAni() {
let t = 0, e = null;
const i = this._tableData.getPlayerBySeat(this._tableData.getSelfSeat());
if (i) {
const s = g.comm.Util.MAKEUSERID(i.areaid, i.numid);
t = this._tableData.getDressProp(s, o.DressPropType.gameLoginAni);
e = i;
}
if (0 === t) for (let i = 0; i < 4; i++) {
if (this._tableData.getSelfSeat() === i) continue;
const s = this._tableData.getPlayerBySeat(i);
if (s) {
const i = g.comm.Util.MAKEUSERID(s.areaid, s.numid), a = this._tableData.getDressProp(i, o.DressPropType.gameLoginAni);
if (0 != a) {
t = a;
e = s;
break;
}
}
}
0 !== t ? this.getImpl(g.gf.IViewPlugin).openView(g.comm.UIs.CommonGameLoginAni, t, e.nickname, !1, () => {
this.onFirstCardAni(this._tableData.getSelfSeat());
}) : this.onFirstCardAni(this._tableData.getSelfSeat());
}
onMsgTakeFirst(t) {
var e, i;
const s = this._tableData.seatToLocal(t._seat), o = this._tableData.getHandCards(s);
if ((null === (e = this._tableData.getGameState()) || void 0 === e ? void 0 : e._state) == _.ENUM_GAME_STATE.GS_TAKE_FIRST) if (this.isShowLoginAni()) {
if (4 == this._tableData.getTakeFirstCount()) {
console.log("this._tableData.getTakeFirstCount() == 4");
this.onShowLoginAni();
}
} else this.onFirstCardAni(t._seat); else {
this.setHandCards(s, o, !0);
(null === (i = this._tableData.getGameState()) || void 0 === i ? void 0 : i._state) == _.ENUM_GAME_STATE.GS_TOTAL_RESULT && this.playEffect(d.SOUND_PATH.GAME_HANDOPENYAKUMAN, "game_k7star");
}
}
onMingRenTang() {
for (let t = 0; t < 4; t++) this._tableData.getTitleType(t) && this.dispatch("showMingRenTangTitleAni" + l.GAME_ID, t);
}
onFirstCardAni(t) {
const e = this._tableData.seatToLocal(t);
if (!(this._tableData.getHandCards(e).length <= 0) && e == this._tableData.getSelfSeat()) {
const t = this.getMaxCardsNumber();
this.updateDeckCount(t);
this._tableData.setTakeFirstIng(!0);
this.dispatch("onMsgGameStartAni" + l.GAME_ID, () => {
this.showTakeFistCards(() => {
this.scheduleOnce(() => {
if (this.node) {
console.log("---------------------sendEndWait onMsgTakeFirst");
this._gameLogicManager.sendEndWait();
}
}, 1);
});
});
this.onMingRenTang();
this.dispatch("showRoomEffect" + l.GAME_ID);
}
}
onMsgAddCards(t) {
this.dispatch("moreSelect" + l.GAME_ID, !1);
const e = this._tableData.seatToLocal(t._seat);
h.default.cardData[e].setDrawCard(t._cards);
const i = this._tableData.getHandCards(e);
this.setHandCards(e, i, !0);
if (e == _.SELF_LOCAL_SEAT) {
const e = i.length;
let s = !1;
const a = o.Util.clone(t._cards);
for (let t = e; t >= 0; t--) for (let e = 0; e < a.length; e++) {
const o = a[e];
if (i[t] == o) {
a.splice(e, 1);
this.showDrawCards(t, () => {
this.dispatch("showTingCardsTip" + l.GAME_ID, !0);
if (!1 === s) {
console.log("---------------------sendEndWait onMsgAddCards3");
this._gameLogicManager.sendEndWait();
s = !0;
}
});
break;
}
}
} else {
const s = [], a = o.Util.clone(t._cards);
if (this._cardLogic.hasCardBack(t._cards)) if (1 === t._cards.length) s.push(1); else for (let e = 0; e < t._cards.length; e++) {
const t = i.length - e;
s.push(t);
} else for (let t = i.length - 1; t >= 0; t--) for (let e = 0; e < a.length; e++) {
const o = a[e];
if (i[t] == o) {
a.splice(e, 1);
s.push(t);
break;
}
}
let n = !1;
this.showDrawCardsEx(s, e, () => {
if (!1 === n) {
console.log("---------------------sendEndWait onMsgAddCards2");
n = !0;
this._gameLogicManager.sendEndWait();
}
});
}
this.playEffect(d.SOUND_PATH.GAME_NDROP, "game_k7star");
}
onMsgPlayCards(t) {
var e;
const i = this._tableData.seatToLocal(t._seat);
h.default.cardData[i].setDrawCard([ a.CardID.CID_NONE ]);
if (i == _.SELF_LOCAL_SEAT) {
if (0 === this._tableData.getHuCards(i).length) {
this.dispatch("TingCheckShow" + l.GAME_ID, t._cards, !1);
this.dispatch("showTingCardsTip" + l.GAME_ID, !1);
}
this.dispatch("allDownCards" + l.GAME_ID);
}
this.dispatch("showTingCardsTip" + l.GAME_ID, !1);
if (t._flag == _.ePlayCardFlag.PLAY_CF_NONE) {
const i = (null === (e = this._iSoundModule) || void 0 === e ? void 0 : e.getSex()) || 0, s = t._cards;
this.playEffect((0, d.getOutCardSound)(i, (0, a.get_num_by_cardVal)((0, a.VALUE)(s))), "game_k7star");
}
}
onMsgPlayCardsPeak(t) {
const e = this._tableData.seatToLocal(t._seat);
h.default.cardData[e].setDrawCard([ a.CardID.CID_NONE ]);
if (e == _.SELF_LOCAL_SEAT) {
if (0 === this._tableData.getHuCards(e).length) {
this.dispatch("TingCheckShow" + l.GAME_ID, t._cards, !1);
this.dispatch("showTingCardsTip" + l.GAME_ID, !1);
}
this.dispatch("allDownCards" + l.GAME_ID);
}
this.dispatch("showTingCardsTip" + l.GAME_ID, !1);
this.playEffect(d.SOUND_PATH.GAME_NDROP, "game_k7star");
}
onMsgHuCards() {
const t = this._tableData.getRoundResult();
let e = !1;
for (let i = 0; i < t._self_hu.length; i++) {
const s = t._self_hu[i];
s[this._tableData.getSelfSeat()] !== m.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_HU && s[this._tableData.getSelfSeat()] !== m.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_ZIMO || (e = !0);
}
e && this.onBtnBack();
let i = 0;
for (let e = 0; e < t._self_hu.length; e++) {
const s = t._self_hu[e], o = s.length;
for (let a = 0; a < o; a++) {
const o = s[a];
if (o === m.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_HU || o === m.GLProtocol.msgRoundResult.eFlag.FLAG_SELF_ZIMO) {
const s = this._tableData.seatToLocal(a), o = h.default.cardData[s].getHuCards();
if (o.length > 0 && 1 == o.length) {
const o = this._tableData.getSeatName(s);
let n = this._tableData.getGameConfig()._first_hu_mult;
const l = this._tableData.getBuffFirstHuMult();
l && l.cnt > 0 && (n *= l.cnt);
const _ = `${o || ""}首次和牌，翻${n || 0}倍`, r = {
PosY: g.gf.FGUI.getSize(g.gf.App.inst.root).height - 150 - 70 * i
};
i++;
const d = t._star_combo_index[e][a];
!this._tableData.gameLogicData.isBigAwardOn() && d <= 1 && (null == this || this.getImpl(g.comm.ICommonDlgs).showWeakHint(_, r));
}
const n = this._tableData.getHuCards(s);
this.setHuCards(s, n);
}
}
}
this.dispatch("showTingCardsTip" + l.GAME_ID, !1);
}
showDrawCards(t, i) {
console.log("showDrawCards setPlayingCardAni true");
this._tableData.setPlayingCardAni(!0);
const s = this.view["KW_CompHandCard_" + _.SELF_LOCAL_SEAT].asList;
for (let o = 0; o < this._tableData.getHandCards(_.SELF_LOCAL_SEAT).length; o++) {
const a = s.getChildAt(o);
let l = null;
for (let t = 0; t < this._addCardsAniSelfPool.length; t++) {
const e = this._addCardsAniSelfPool[t];
if (!1 === e.visible) {
l = e;
break;
}
}
if (null === l) {
l = e.UIPackage.createObject("Game_K7Star_Card", "Card");
g.gf.setLayerNode(l);
this._addCardsAniSelfPool.push(l);
this.view.addChild(l);
}
l.visible = !0;
a.visible = !1;
const r = a.localToGlobal(), d = e.GRoot.inst.globalToLocal(r.x, r.y);
C.default.setCard(l, this._tableData.getHandCards(_.SELF_LOCAL_SEAT)[o]);
l.select.setSelectedPage("hide");
const c = h.default.cardData[_.SELF_LOCAL_SEAT].getHuHandCards();
if (c.length > 0) for (const t in c) if (c[t] == this._tableData.getHandCards(_.SELF_LOCAL_SEAT)[o]) {
l.select.setSelectedPage("show");
break;
}
l.setPosition(d.x, d.y);
if (o < t) e.GTween.to(d.x + n.HAND_CARD_CONFIG[_.SELF_LOCAL_SEAT].offsetX / 2, d.x, .17).setTarget(l, e.TweenPropType.X).setEase(e.EaseType.Linear).onComplete(() => {
l.visible = !1;
a.visible = !0;
}); else if (o > t) e.GTween.to(d.x - n.HAND_CARD_CONFIG[_.SELF_LOCAL_SEAT].offsetX / 2, d.x, .17).setTarget(l, e.TweenPropType.X).setEase(e.EaseType.Linear).onComplete(() => {
l.visible = !1;
a.visible = !0;
}); else if (o == t) {
const t = this.view.KW_CompClock.KW_TextClock.localToGlobal(), s = e.GRoot.inst.globalToLocal(t.x, t.y);
l.setPosition(s.x - 27, s.y - 41);
l.setScale(.35, .35);
e.GTween.to2(l.x, l.y, d.x, d.y, .17).setTarget(l, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
l.visible = !1;
a.visible = !0;
this.dispatch("setHandCards", _.SELF_LOCAL_SEAT, this._tableData.getHandCards(_.SELF_LOCAL_SEAT), !0);
console.log("showDrawCards setPlayingCardAni false");
this._tableData.setPlayingCardAni(!1);
i && i();
});
e.GTween.to2(.35, .35, 1, 1, .17).setTarget(l, e.TweenPropType.Scale).setEase(e.EaseType.Linear);
}
}
}
showDrawCardsEx(t, i, s) {
console.log("showDrawCardsEx setPlayingCardAni true");
const o = {}, a = t.length;
for (let e = 0; e < a; e++) o[t[e]] = !0;
const n = this.view["KW_CompHandCard_" + i].asList;
void 0 === this._addCardsAniUsePool[i] && (this._addCardsAniUsePool[i] = []);
n.visible = !1;
const l = this._tableData.getHandCards(i).length;
for (let t = 0; t < l; t++) {
const a = n.getChildAt(t);
let l = null;
for (let t = 0; t < this._addCardsAniPool.length; t++) {
const e = this._addCardsAniPool[t];
if (!1 === e.visible) {
l = e;
break;
}
}
if (null === l) {
l = e.UIPackage.createObject("Game_K7Star_Card", "CardMid");
g.gf.setLayerNode(l);
this._addCardsAniPool.push(l);
this.view.addChild(l);
}
this._addCardsAniUsePool[i].push(l);
l.visible = !0;
const _ = a.localToGlobal(), r = e.GRoot.inst.globalToLocal(_.x, _.y);
C.default.setCard(l, this._tableData.getHandCards(i)[t]);
l.select.setSelectedPage("hide");
l.setPosition(r.x, r.y);
l.rotation = 90 * (i + 1);
const d = .17;
if (o[t]) {
const t = this.view.KW_CompClock.KW_TextClock.localToGlobal(), o = e.GRoot.inst.globalToLocal(t.x, t.y);
l.setPosition(o.x - 27, o.y - 41);
e.GTween.to2(l.x, l.y, r.x, r.y, d).setTarget(l, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
for (let t = 0; t < this._addCardsAniUsePool[i].length; t++) this._addCardsAniUsePool[i][t].visible = !1;
this._addCardsAniUsePool[i] = [];
n.visible = !0;
this.dispatch("setHandCards", i, this._tableData.getHandCards(i), !0);
console.log("showDrawCards setPlayingCardAni false");
s && s();
});
}
}
}
showDrawCardsOther(t, i, s) {
const o = this.view["KW_CompHandCard_" + t].asList.getChildAt(i);
o.setPosition(o.x, 0);
o.alpha = .3;
let a = o.y - 17;
t === _.PlayerEnum.PLAYER_3 && (a = o.y + 17);
const n = o.y;
o.setPosition(o.x, a);
e.GTween.to2(o.x, a, o.x, n, .3).setTarget(o, e.TweenPropType.Position).setEase(e.EaseType.Linear).setDelay(.4).onComplete(() => {
o.pop.setSelectedPage("normal");
s && s();
});
e.GTween.to(.3, 1, .7).setTarget(o, e.TweenPropType.Alpha).setEase(e.EaseType.Linear).onComplete(() => {});
}
showTakeFistCards(t) {
console.log("showTakeFistCards true");
this._tableData.setPlayingCardAni(!0);
let i = this.getMaxCardsNumber();
for (let s = 0; s < _.MAX_PLAYER; s++) {
void 0 === this._flyCards[s] && (this._flyCards[s] = []);
for (let t = 0; t < this._flyCards[s].length; t++) e.GTween.kill(this._flyCards[s][t]);
this.setHandCards(s, this._tableData.getHandCards(s));
const o = this.view["KW_CompHandCard_" + s].asList;
for (let t = 0; t < o.numChildren; t++) {
const i = o.getChildAt(t);
e.GTween.kill(i);
i.scaleX = 0;
}
const a = i => {
e.GTween.to2(.8, .8, 0, .8, .08).setTarget(this._flyCards[s][i], e.TweenPropType.Scale).setDelay(.03 * i).setEase(e.EaseType.Linear).onComplete(() => {
e.GTween.to2(0, 1, 1, 1, .08).setTarget(o.getChildAt(i), e.TweenPropType.Scale).setEase(e.EaseType.Linear);
this._flyCards[s][i].visible = !1;
if (i == this._tableData.getHandCards(_.SELF_LOCAL_SEAT).length - 1 && s == _.SELF_LOCAL_SEAT && t) {
console.log("showTakeFistCards setPlayingCardAni false");
this._tableData.setPlayingCardAni(!1);
this._tableData.setTakeFirstIng(!1);
t();
}
});
};
for (let t = 0; t < this._tableData.getHandCards(s).length; t++) {
let i = null;
if (this._flyCards[s][t]) {
i = this._flyCards[s][t];
if (s == _.SELF_LOCAL_SEAT) {
i.url = "ui://_Common/CardBackBig";
i.setScale(.318, .318);
} else {
i.url = "ui://_Common/CardBackSma";
i.setScale(.705, .705);
}
} else {
(i = new e.GLoader()).setPivot(0, 0, !0);
i.autoSize = !0;
if (s == _.SELF_LOCAL_SEAT) {
i.url = "ui://_Common/CardBackBig";
i.setScale(.318, .318);
} else {
i.url = "ui://_Common/CardBackSma";
i.setScale(.705, .705);
}
this.view.addChild(i);
this._flyCards[s][t] = i;
}
i.rotation = 0;
i.visible = !0;
}
const n = .16, l = this._tableData.getHandCards(s).length;
for (let t = 0; t < l; t++) {
const r = o.getChildAt(t), h = this._flyCards[s][this._flyCards[s].length - 1 - t], c = this.getGlobalPos(this.view.KW_CompClock.KW_TextClock);
h.setPosition(c.x - 27, c.y - 41);
const g = this.getGlobalPos(o.getChildAt(0));
let u = l - t - 1;
const m = () => {
if (u-- <= 0) if (s == _.SELF_LOCAL_SEAT) a(t); else {
r.scaleX = 1;
h.visible = !1;
} else {
const t = r.width + o.columnGap;
let i = h.x + t, a = h.y;
if (s % 2 == 0) {
i = h.x;
a = h.y + (2 == s ? -t : t);
}
e.GTween.to2(h.x, h.y, i, a, n - .01).setTarget(h, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {
m();
});
}
};
e.GTween.to2(h.x, h.y, g.x, g.y, n).setTarget(h, e.TweenPropType.Position).setEase(e.EaseType.Linear).setDelay(.05 * s + t * n).onComplete(() => {
s == _.SELF_LOCAL_SEAT && this.playEffect(d.SOUND_PATH.GAME_PAESLIDE, "game_k7star");
i--;
this.updateDeckCount(i);
m();
});
s == _.SELF_LOCAL_SEAT ? e.GTween.to2(.35, .35, .95, .95, n / 2).setTarget(h, e.TweenPropType.Scale).setEase(e.EaseType.Linear).setDelay(.05 * s + t * n).onComplete(() => {
e.GTween.to2(.86, .86, .8, .8, n / 2).setTarget(h, e.TweenPropType.Scale).setEase(e.EaseType.Linear);
}) : e.GTween.to(0, 90 * (s + 1), n / 2).setTarget(h, e.TweenPropType.Rotation).setEase(e.EaseType.Linear).setDelay(.05 * s + t * n);
}
}
const s = ++this._dealAniVersion, o = .05 * _.MAX_PLAYER + .32 * this._tableData.getHandCards(_.SELF_LOCAL_SEAT).length + 1.5;
this.scheduleOnce(() => {
var t;
if (this.node && s === this._dealAniVersion) {
for (let e = 0; e < _.MAX_PLAYER; e++) {
const i = null === (t = this.view["KW_CompHandCard_" + e]) || void 0 === t ? void 0 : t.asList;
if (i) for (let t = 0; t < i.numChildren; t++) {
const s = i.getChildAt(t);
if (s && 0 === s.scaleX) {
console.warn("showTakeFistCards fallback: restoring scaleX for seat", e, "card", t);
s.setScale(1, 1);
}
}
}
for (let t = 0; t < this._flyCards.length; t++) if (this._flyCards[t]) for (let e = 0; e < this._flyCards[t].length; e++) this._flyCards[t][e].visible = !1;
}
}, o);
}
getGlobalPos(t) {
const i = t.localToGlobal();
return e.GRoot.inst.globalToLocal(i.x, i.y);
}
setHandCards(t, e, i = !1) {
var s;
const a = this.view["KW_CompHandCard_" + t];
if (0 === e.length) {
this.view.KW_Card_Fire.visible = !1;
a.visible = !1;
return;
}
if (t == _.SELF_LOCAL_SEAT) {
console.log("setHandCards:", JSON.stringify(e));
console.log("setHandCards numChildren:", this.view.numChildren, a.numChildren);
if (e.length >= _.MAX_HAND_CARD_COUNT && this._tableData.gameLogicData.getPowerPropOpen()) {
this.view.KW_CompHandCard_1.columnGap = -98;
this.view.KW_CompHandCard_1.setSize(30 * (e.length - 1) + 128, 182);
} else {
this.view.KW_CompHandCard_1.columnGap = -78;
this.view.KW_CompHandCard_1.setSize(50 * (e.length - 1) + 128, 182);
}
} else {
console.log("setHandCards:", JSON.stringify(e));
console.log("setHandCards numChildren:", this.view.numChildren, a.numChildren);
this.view["KW_CompHandCard_" + t].setSize(25 * (e.length - 1) + 55, 82);
}
a.visible = !0;
this.view.KW_Card_Fire.visible = !0;
if (a.numChildren > e.length) for (let t = e.length; t < a.numChildren; t++) {
const e = a.getChildAt(t);
e.KW_Fire.visible = !1;
e.visible = !1;
e.C_Buff && (e.C_Buff.selectedPage = "hide");
} else if (a.numChildren < e.length) {
for (let i = a.numChildren; i < e.length; i++) {
const e = a.addItemFromPool();
g.gf.setLayerNode(e);
a.ensureBoundsCorrect();
let i = 0, s = 1;
if (t != _.SELF_LOCAL_SEAT) {
s = .45;
e.C_FirPos.selectedIndex = 0;
if (t == _.SELF_LOCAL_SEAT - 1) i = 90; else if (t == _.SELF_LOCAL_SEAT + 1) i = -90; else {
i = 180;
e.C_FirPos.selectedIndex = 1;
}
}
p.default.addCardComponent(p.ComponentType.FIRE, e.KW_Fire, t => {
t.Ani_Fire.play(null, -1, 0, .5 * Math.random());
}, i, s);
}
a.ensureBoundsCorrect();
}
const n = this._tableData.getMingCards(t), l = o.Util.clone(h.default.cardData[t].getHuHandCards()), r = e.length;
for (let i = 0; i < r; i++) {
const o = a.getChildAt(i);
o.visible = !0;
o.KW_Fire.visible = !0;
o.setScale(1, 1);
o.pop.setSelectedPage("normal");
this.showCardHintTag(o, "none");
C.default.setCard(o, e[i]);
if (o.C_Fire && o.KW_Fire) if (n) {
o.C_Fire.setSelectedIndex(1);
o.KW_Fire.visible = !0;
} else {
o.C_Fire.setSelectedIndex(0);
o.KW_Fire.visible = !1;
}
if (t == _.SELF_LOCAL_SEAT) {
null === (s = o.C_Clone) || void 0 === s || s.setSelectedIndex(0);
this.addClick(o.KW_CompBcak, () => {
this.onClickCard(i);
});
o.select.setSelectedPage("hide");
if (l && l.length > 0) for (const t in l) if (l[t] == e[i] && "show" != o.select.selectedPage) {
l.splice(t, 1);
o.select.setSelectedPage("show");
break;
}
}
}
i && this.allDownCards();
}
setOutCards(t, e, i = !0, s = !1) {
this.view.KW_AniOut.visible = !1;
const o = this.view["KW_CompOutCard_" + t];
for (let t = 0; t < o.numChildren; t++) o.getChildAt(t).visible = !1;
let a = !1;
const n = e.length;
for (let t = 0; t < n; t++) {
const i = e[t];
let s = null;
if (o.numChildren > t) s = o.getChildAt(t); else {
s = o.addItemFromPool();
g.gf.setLayerNode(s);
a = !0;
}
s.visible = !0;
s.alpha = 1;
s.setScale(1, 1);
C.default.setCard(s, i);
}
a && o.ensureBoundsCorrect();
e.length > 0 && i && this.showOutCardAni(t, !0, e.length - 1, s);
}
setHuCards(t, e, i = !1) {
this._tableData.setHuCards(t, e);
const s = this.view["KW_CompHuCard_" + t];
let o = 14;
t == _.SELF_LOCAL_SEAT && (o = 22);
t == _.PlayerEnum.PLAYER_0 && (o = 22);
for (let t = 0; t <= o; t++) {
const e = s["KW_Comp_" + t];
for (let t = 0; t < e.numChildren; t++) e.getChildAt(t).visible = !1;
}
s.KW_Hu_Symbol.visible = e.length > 0;
const a = this.onParseHuCardList(t, e);
let n = a.length > 4;
const l = s.KW_ImgHuDi;
l.visible = e.length > 0;
if (this._isShowAllHuBtn || i) {
n = !1;
i = !0;
}
const r = !i && a.length >= 4 ? 4 : a.length;
for (let t = 0; t < r; t++) {
const e = a[t], i = s["KW_Comp_" + t];
let o = !1;
const n = e.length;
for (let t = 0; t < n; t++) {
const s = e[t];
let a = null;
if (i.numChildren > t) a = i.getChildAt(t); else {
a = i.addItemFromPool();
g.gf.setLayerNode(a);
o = !0;
}
a.visible = !0;
C.default.setCard(a, s);
}
o && s.ensureBoundsCorrect();
}
const d = s.KW_Comp_0;
l.height = d.height + 40 * (r - 1);
n && (l.height += 15);
l.C_showBtn.selectedIndex = n ? 1 : 0;
}
onClickShowHuAllList(t) {
this._isShowAllHuBtn = !0;
const e = this._tableData.getHuCards(t);
this.setHuCards(t, e, !0);
const i = [ this.view["KW_CompHuCard_" + t], this.view["KW_CompHuCard_Light_" + t] ];
i.forEach(t => {
if (!t.scaleXTemp) {
t.scaleXTemp = t.scaleX;
t.scaleYTemp = t.scaleY;
}
t.scaleX = 0;
t.scaleY = 0;
});
this.scheduleOnce(() => {
i.forEach(t => {
t.scaleX = t.scaleXTemp;
t.scaleY = t.scaleYTemp;
});
});
this.scheduleOnce(() => {
this.view["KW_CompHuCard_" + t].KW_ImgHuDi.C_showBtn.selectedIndex = 1;
this._isShowAllHuBtn = !1;
this.setHuCards(t, e, !1);
}, 3);
}
onParseHuCardList(t, e) {
const i = [], s = JSON.parse(JSON.stringify(e));
let o = 8;
t == _.PlayerEnum.PLAYER_0 && (o = 6);
s.reverse();
for (let t = 0; t < s.length; t + o - 1) {
let e = [];
e = s.length > t + o ? s.splice(t, o) : s.splice(t, s.length - t);
i.push(e);
}
if (t != _.PlayerEnum.PLAYER_3) {
const t = i.length;
for (let e = 0; e < t; e++) i[e].reverse();
}
return i;
}
allDownCards() {
for (let t = 0; t < this.view.KW_CompHandCard_1.numChildren; t++) this.view.KW_CompHandCard_1.getChildAt(t).pop.setSelectedPage("normal");
this.updateSelectCardsData();
}
onClickCard(t) {
var e, i;
if (this._tableData.getPlayingCardAni()) {
console.log("点击牌--------------当前在发牌动画期间");
return;
}
if (this._tableData.getHuCards(_.SELF_LOCAL_SEAT).length > 0) {
console.log("点击牌--------------已胡牌点击");
return;
}
const s = this.view["KW_CompHandCard_" + _.SELF_LOCAL_SEAT];
if (!this._isMoreSelect) for (let e = 0; e < s.numChildren; e++) e != t && s.getChildAt(e).pop.setSelectedPage("normal");
const o = s.getChildAt(t), a = this._tableData.getActPowerNew();
if (this.isCheckCard(o)) {
console.log("点击牌，再次点击", a, "  this._tableData.cardLogicData.getNowPlayerSeat()", this._tableData.cardLogicData.getNowPlayerSeat());
if (this._tableData.cardLogicData.getNowPlayerSeat() == _.SELF_LOCAL_SEAT && a._play == m.GLProtocol.msgActPower.eFlag.FLAG_CAN_ACT) {
const i = null === (e = this._tableData.getHandCards(_.SELF_LOCAL_SEAT)) || void 0 === e ? void 0 : e[t];
if (i) {
this.dispatch(r.GameEventName.PLAY_CARD_ON_CLICK);
this._gameLogicManager.sendPlayCards(i);
this._tableData.setShushuTouchu(2);
return;
}
}
} else if (this._tableData.cardLogicData.getNowPlayerSeat() == _.SELF_LOCAL_SEAT && a._play == m.GLProtocol.msgActPower.eFlag.FLAG_CAN_ACT) {
const e = null === (i = this._tableData.getHandCards(_.SELF_LOCAL_SEAT)) || void 0 === i ? void 0 : i[t];
e && this.dispatch("TingCheckShow" + l.GAME_ID, e, !0);
}
o.pop.setSelectedPage("normal" == o.pop.selectedPage ? "pop" : "normal");
"pop" == o.pop.selectedPage && this.playEffect(d.SOUND_PATH.GAME_HANDSELECT, "game_k7star");
this.updateSelectCardsData();
}
updateSelectCardsData() {
const t = [];
for (let e = 0; e < this.view.KW_CompHandCard_1.numChildren; e++) t.push(this.isCheckCard(this.view.KW_CompHandCard_1.getChildAt(e)) ? 1 : 0);
this._tableData.setSelectOutCardsIndex(_.SELF_LOCAL_SEAT, t);
}
isCheckCard(t) {
return "pop" == t.pop.selectedPage;
}
showTingCardsTip(t) {
this._tableData.getHuCards(_.SELF_LOCAL_SEAT).length > 0 && (t = !1);
const e = this.view["KW_CompHandCard_" + _.SELF_LOCAL_SEAT], i = e.numChildren;
if (t) {
this._tableData.resetAllLeftCards();
const t = this._tableData.getHandCards(_.SELF_LOCAL_SEAT);
let s = 0, o = 0;
const n = [];
for (let e = 0; e < i; e++) {
let i = 0;
const l = this._tableData.getTingCardInfo(t[e]);
if (l && t[e] != a.CardID.CID_BJ && t[e] != a.CardID.CID_SJ) {
for (let t = 0; t < l._mult.length; t++) i += l._mult[t];
0 == s && (s = i);
s > i && (s = i);
o < i && (o = i);
}
n.push(i);
}
const l = n.length;
for (let i = 0; i < l; i++) {
const l = e.getChildAt(i);
this._tableData.getTingCardInfo(t[i]) && t[i] != a.CardID.CID_BJ && t[i] != a.CardID.CID_SJ ? n[i] > s && n[i] == o ? this.showCardHintTag(l, "hintBig") : this.showCardHintTag(l, "hintTing") : this.showCardHintTag(l, "none");
}
} else for (let t = 0; t < i; t++) {
const i = e.getChildAt(t);
this.showCardHintTag(i, "none");
}
}
showCardHintTag(t, e) {
t.hint.setSelectedPage(e);
if (t.KW_AniTing && "none" != e) {
let i = "";
"hintNone" == e ? i = "animation3" : "hintTing" == e ? i = "animation1" : "hintBig" == e && (i = "animation2");
t.KW_AniTing.url = "ui://Game_K7Star_Card/Patishi";
g.gf.sp.onSpineLoaded(t.KW_AniTing, t => {
t.loop = !0;
t.animation = i;
});
}
}
popCards(t) {
const e = g.comm.Util.clone(this._tableData.getHandCards(_.SELF_LOCAL_SEAT)), i = e.length, s = t.length, o = [];
for (let a = 0; a < s; a++) if (0 != t[a]) for (let s = 0; s < i; s++) if (e[s] == t[a] && 1 != o[s]) {
o[s] = 1;
this.onClickCard(s);
break;
}
}
showCloneCardsBG(t, e) {
this.view.KW_CloneCard.visible = t;
if (t) {
this.showCloneCards(!1);
const t = e.length;
let i = !1;
for (let s = 0; s < t; s++) {
let t = null;
if (this.view.KW_CloneCardList.numChildren > s) t = this.view.KW_CloneCardList.getChildAt(s); else {
t = this.view.KW_CloneCardList.addItemFromPool();
g.gf.setLayerNode(t);
i = !0;
}
t.visible = !0;
t.KW_CompColorNum.url = `ui://_Common/red${e[s]}`;
}
i && this.view.KW_CloneCardList.ensureBoundsCorrect();
}
}
showCloneCards(t) {
this.view.KW_CloneCardList.visible = t;
}
onMsgBombCards(t) {
var e;
if (this._tableData.seatToLocal(t._seat) == _.SELF_LOCAL_SEAT) {
this.dispatch("showTingCardsTip" + l.GAME_ID, !0);
this.dispatch("TingCheckShow" + l.GAME_ID, t._cards, !1);
this.dispatch("allDownCards" + l.GAME_ID);
}
const i = (null === (e = this._iSoundModule) || void 0 === e ? void 0 : e.getSex()) || 0;
this.playEffect((0, d.getSexEff)(i, "BOMB_SOUND"), "game_k7star");
}
onMsgDoTowerCard(t) {
var e;
const i = this._tableData.seatToLocal(t._seat);
if (i == _.SELF_LOCAL_SEAT) {
this.dispatch("TingCheckShow" + l.GAME_ID, t._cards, !1);
this.dispatch("allDownCards" + l.GAME_ID);
}
if (t._flag == _.ePlayCardFlag.PLAY_CF_STAR) {
const t = this.view["KW_CompOutCard_" + i].localToGlobal(0, 0), e = this.view.globalToLocal(t.x, t.y);
this.dispatch("showStarUpMoveAniByCardGLocalPos" + l.GAME_ID, i, {
x: e.x,
y: e.y
});
} else {
const t = (null === (e = this._iSoundModule) || void 0 === e ? void 0 : e.getSex()) || 0;
this.playEffect((0, d.getSexEff)(t, "BAO_SOUND"), "game_k7star");
}
}
onMsgTowerCards(t) {
if (this.getImpl(g.comm.lobby.IJoinRoomModule).isGuide()) return;
const e = this._tableData.seatToLocal(t._seat), i = this._tableData.isBombCardsBuff(t), s = this.view["KW_AniBoom_" + e];
for (let t = 0; t < 7; t++) {
const e = s["KW_CompBoom_" + t];
for (let t = 0; t < e.numChildren; t++) e.getChildAt(t).visible = !1;
}
const o = this.onParseBoomCardList([ ...t._bomb_cards, ...t._tower_cards ]);
let a = o.length;
a > 7 && (a = 7);
let n = 0;
for (let e = 0; e < a; e++) {
const i = o[e];
4 == i.length && n++;
const a = s["KW_CompBoom_" + e];
let l = !1;
for (let s = 0; s < i.length; s++) {
const o = i[s];
let n = null;
if (a.numChildren > s) n = a.getChildAt(s); else {
n = a.addItemFromPool();
g.gf.setLayerNode(n);
l = !0;
}
n.visible = !0;
C.default.setCard(n, o);
n.C_Count.selectedIndex = 0;
if (0 == e && s == i.length - 1 && t._tower_count > 0) {
n.C_Count.selectedIndex = 1;
n.KW_TextCnt.text = `${t._tower_count}`;
}
}
l && a.ensureBoundsCorrect();
a.visible = !1;
}
if (t._flag === m.GLProtocol.msgTowerCards.eFlag.FLAG_MING) {
for (let t = 0; t < a; t++) s["KW_CompBoom_" + t].visible = !0;
console.log("明牌 空白牌");
return;
}
s.visible = !0;
s.KW_AniBoomLight.visible = !1;
s.C_Top.selectedIndex = a;
let l = t._mult;
t._one_tower_mult > 0 && !i && (l = t._mult / t._one_tower_mult);
let _ = `baota_0${a}_shengji`, r = `baota_0${a}_loop`;
if (0 == n || 1 == n) {
_ = `baota3_0${a}_shengji`;
r = `baota3_0${a}_loop`;
} else if (2 == n || 3 == n) {
_ = `baota2_0${a}_shengji`;
r = `baota2_0${a}_loop`;
}
if (t._flag == m.GLProtocol.msgTowerCards.eFlag.FLAG_RELINK || t._flag == m.GLProtocol.msgTowerCards.eFlag.FLAG_MING || i) {
s.KW_AniBoom.url = "ui://Game_K7Star_Card/Baota";
g.gf.sp.onSpineLoaded(s.KW_AniBoom, t => {
t.loop = !0;
t.premultipliedAlpha = !1;
t.animation = r;
});
this.onShowBonbCardNode(e, s, a, t);
this.onUpdateBoomMultText(e, l);
} else if (t._flag === m.GLProtocol.msgTowerCards.eFlag.FLAG_BOMB) {
s.KW_AniBoom.url = "ui://Game_K7Star_Card/Baota";
g.gf.sp.onSpineLoaded(s.KW_AniBoom, i => {
i.premultipliedAlpha = !1;
i.setAnimation(0, _, !1);
i.addAnimation(0, r, !0);
i.setEventListener((i, o) => {
if ("add_img" == o.data.name && s.actScale) {
s.actScale.setHook("updateNum", () => {
console.log("updateNum");
s.KW_Num.text = `x${l}`;
});
s.actScale.play();
this.onShowBonbCardNode(e, s, a, t);
}
});
});
const i = `bao${a}`;
s.KW_AniBoomLight.url = "ui://Game_K7Star_Card/Baota";
g.gf.sp.onSpineLoaded(s.KW_AniBoomLight, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, i, !1);
t.setCompleteListener(t => {
t.animation.name == i && (s.KW_AniBoomLight.visible = !1);
});
});
} else if (t._flag === m.GLProtocol.msgTowerCards.eFlag.FLAG_TOWER) {
s.KW_AniBoomLight.visible = !1;
if (t._one_tower_mult > 0) {
s.KW_AniBoom.url = "ui://Game_K7Star_Card/Baota";
g.gf.sp.onSpineLoaded(s.KW_AniBoom, i => {
i.premultipliedAlpha = !1;
i.setAnimation(0, _, !1);
i.addAnimation(0, r, !0);
i.setEventListener((i, o) => {
if ("add_img" == o.data.name) {
this.onShowBonbCardNode(e, s, a, t);
this.onUpdateBoomMultText(e, l);
}
});
});
const i = `bao${a}`;
s.KW_AniBoomLight.url = "ui://Game_K7Star_Card/Baota";
g.gf.sp.onSpineLoaded(s.KW_AniBoomLight, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, i, !1);
t.setCompleteListener(t => {
t.animation.name == i && (s.KW_AniBoomLight.visible = !1);
});
});
} else {
s.KW_AniBoom.url = "ui://Game_K7Star_Card/Baota";
g.gf.sp.onSpineLoaded(s.KW_AniBoom, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, r, !0);
});
this.onUpdateBoomMultText(e, l);
this.onShowBonbCardNode(e, s, a, t);
}
}
}
onShowBonbCardNode(t, e, i, s) {
for (let t = 0; t < i; t++) e["KW_CompBoom_" + t].visible = !0;
if (t === _.SELF_LOCAL_SEAT && 4 === s._bomb_count) {
const s = this._tableData.getPlayerByLocalSeat(t);
if (s && s.isVaildPlayer()) {
const t = s.win + s.lose + s.draw + s.escape, o = this._tableData.getGameDBPConfig();
t < (null == o ? void 0 : o.baotaTips) && i <= 2 ? e.KW_SelfTips.visible = !0 : e.KW_SelfTips.visible = !1;
}
} else e.KW_SelfTips.visible = !1;
}
onParseBoomCardList(t) {
const e = [], i = JSON.parse(JSON.stringify(t));
for (let t = 0; t < i.length; t + 4 - 1) {
let s = [];
s = i.length > t + 4 ? i.splice(t, 4) : i.splice(t, i.length - t);
e.push(s);
}
return e;
}
onUpdateBoomMultText(t, e) {
const i = this.view["KW_AniBoom_" + t];
if (i.actScale) {
i.actScale.setHook("updateNum", () => {
console.log("updateNum");
i.KW_Num.text = `x${e}`;
});
i.actScale.play();
}
}
onCloneCardsAni(t) {
var e, i;
console.log("onCloneCardsAni", JSON.stringify(t));
this.allDownCards();
console.log("onCloneCardsAni setPlayingCardAni true");
this._tableData.setPlayingCardAni(!0);
const s = {};
for (let e = 0; e < t._old_card_values.length; e++) s[t._old_card_values[e]] = t._new_card_values[e];
const o = this._tableData.getTakeFirstHandCards(), n = this.view["KW_CompHandCard_" + _.SELF_LOCAL_SEAT];
let l = !1;
const r = o.length;
for (let t = 0; t < r; t++) {
const _ = o[t], r = (0, a.VALUE)(_), d = (0, a.COLOR)(_), h = s[r] + 13 * (d - 1);
if (s[r] && s[r] > 0) {
l = !0;
const s = n.getChildAt(t);
if (s.clone) {
null === (i = null === (e = null == s ? void 0 : s.clone) || void 0 === e ? void 0 : e.play) || void 0 === i || i.call(e, () => {
if (0 == this._tableData.getCloneCardsAniEnd()) {
this.onCheckCloneCards();
this._gameLogicManager.sendEndWait();
}
});
s.clone.setHook("updateCard", () => {
if (0 == this._tableData.getCloneCardsAniEnd()) {
C.default.setCard(s, h);
s.C_Clone.setSelectedPage("show");
s.KW_AniClone.url = "ui://Game_K7Star_Card/Kelonhousoupai";
g.gf.sp.onSpineLoaded(s.KW_AniClone, t => {
t.loop = !0;
t.animation = "animation";
});
}
});
s.clone.setHook("pop", () => {
0 == this._tableData.getCloneCardsAniEnd() && s.pop.setSelectedPage("pop");
});
s.clone.setHook("down", () => {
if (0 == this._tableData.getCloneCardsAniEnd()) {
s.pop.setSelectedPage("normal");
s.C_Clone.setSelectedPage("hide");
}
});
}
}
}
if (!1 === l) {
this.onCheckCloneCards();
this._gameLogicManager.sendEndWait();
}
}
onCheckCloneCards() {
console.log("onCheckCloneCards setPlayingCardAni false");
this._tableData.setPlayingCardAni(!1);
this._tableData.setTakeFirstIng(!1);
this._tableData.setCloneCardsAniEnd(!0);
const t = this._tableData.getHandCards(_.SELF_LOCAL_SEAT);
this.dispatch("setHandCards" + l.GAME_ID, _.SELF_LOCAL_SEAT, t, !0);
this.dispatch("onMsgRecommendCards" + l.GAME_ID);
this.dispatch("onFirstOutTips" + l.GAME_ID);
this.dispatch("showBtnTing" + l.GAME_ID, !0);
}
onMsgStartChooseBuff(t) {
if (t._seat != this._tableData.getSelfSeat()) {
const i = this._tableData.seatToLocal(t._seat);
if (!this.view["KW_Luck_" + i]) {
this.view["KW_Luck_" + i] = e.UIPackage.createObject("Game_K7Star_Card", "SmallCardLine");
g.gf.setLayerNode(this.view["KW_Luck_" + i]);
g.gf.FGUI.addChild(this.view, this.view["KW_Luck_" + i]);
this.view["KW_Luck_" + i].setPosition(this.view["KW_Luck_Pos" + i].x, this.view["KW_Luck_Pos" + i].y);
this.view["KW_Luck_" + i].relations.clearAll();
if (i == _.PlayerEnum.PLAYER_0) {
this.view["KW_Luck_" + i].addRelation(this.view, e.RelationType.Middle_Middle);
this.view["KW_Luck_" + i].addRelation(this.view, e.RelationType.Left_Left);
} else if (i == _.PlayerEnum.PLAYER_1) {
this.view["KW_Luck_" + i].addRelation(this.view, e.RelationType.Center_Center);
this.view["KW_Luck_" + i].addRelation(this.view, e.RelationType.Bottom_Bottom);
} else if (i == _.PlayerEnum.PLAYER_2) {
this.view["KW_Luck_" + i].addRelation(this.view, e.RelationType.Middle_Middle);
this.view["KW_Luck_" + i].addRelation(this.view, e.RelationType.Right_Right);
} else if (i == _.PlayerEnum.PLAYER_3) {
this.view["KW_Luck_" + i].addRelation(this.view, e.RelationType.Center_Center);
this.view["KW_Luck_" + i].addRelation(this.view, e.RelationType.Top_Top);
}
}
this.view["KW_Luck_" + i].visible = !0;
if (this.view["KW_Luck_" + i].wait) {
this.view["KW_Luck_" + i].wait.play();
for (let t = 0; t < 4; t++) {
this.view["KW_Luck_" + i]["KW_Card" + t].KW_Back.C_flag.selectedIndex = t;
this.view["KW_Luck_" + i]["KW_Card" + t].KW_Back.visible = !0;
this.view["KW_Luck_" + i]["KW_Card" + t].KW_Card.visible = !0;
}
}
}
}
onMsgEndChooseCard() {
const t = this._tableData.getEndChooseCard();
t._seat != this._tableData.getSelfSeat() && this.openGoldCardsAni(1 === t._gold_buff);
}
onMsgEndChooseCardEnd() {
const t = this._tableData.getEndChooseCard();
t._seat == this._tableData.getSelfSeat() ? this.downCardSelf(t._cards[t._index]) : this.downCardOther();
}
onMsgEndChooseBuffEnd2() {
const t = this._tableData.getEndChooseCard();
t._seat == this._tableData.getSelfSeat() ? this.downCardSelf(t._cards[t._index], !0) : this.downCardOther(!0);
}
downCardSelf(t, i = !1) {
const s = this._tableData.getHandCards(_.SELF_LOCAL_SEAT);
let o = 0;
for (let e = 0; e < s.length; e++) if (s[e] == t) {
o = e;
break;
}
this.setHandCards(_.SELF_LOCAL_SEAT, s);
const a = this.view["KW_CompHandCard_" + _.SELF_LOCAL_SEAT].getChildAt(o);
a.alpha = .3;
const n = a.y;
i && (a.C_Buff.selectedPage = "show");
e.GTween.to2(a.x, a.y, a.x, -30, .05).setTarget(a, e.TweenPropType.Position).setEase(e.EaseType.Linear).onComplete(() => {});
a.setPosition(a.x, -30);
e.GTween.to2(a.x, -30, a.x, n, .3).setTarget(a, e.TweenPropType.Position).setEase(e.EaseType.Linear).setDelay(.4).onComplete(() => {
a.pop.setSelectedPage("normal");
this.dispatch("showTingCardsTip" + l.GAME_ID, !0);
a.C_Buff.selectedPage = "fade";
this.setHandCards(_.SELF_LOCAL_SEAT, s);
this._gameLogicManager.sendEndWait();
});
e.GTween.to(.3, 1, .7).setTarget(a, e.TweenPropType.Alpha).setEase(e.EaseType.Linear).onComplete(() => {});
}
openGoldCardsAni(t) {
const e = this._tableData.getEndChooseCard(), i = this._tableData.seatToLocal(e._seat);
if (this.view["KW_Luck_" + i]) {
for (let t = 0; t < 4; t++) {
const s = this.view["KW_Luck_" + i]["KW_Card" + t].KW_Card;
C.default.setCard(s, e._cards[t]);
}
e._cards[e._index] > a.CardID.CID_NONE && e._cards[e._index] < a.CardID.CID_BACK ? this.view["KW_Luck_" + i]["KW_Card" + e._index].openCard1 && this.view["KW_Luck_" + i]["KW_Card" + e._index].openCard1.play(() => {
this.view["KW_Luck_" + i]["ani" + e._index] && this.view["KW_Luck_" + i]["ani" + e._index].play(() => {
this.view["KW_Luck_" + i].visible = !1;
this._gameLogicManager.sendEndWait();
if (t) this.onMsgGoldBuffCard(e); else {
const t = this._tableData.getHandCards(i);
this.dispatch("setHandCards" + l.GAME_ID, i, t, !0);
}
});
}) : this.view["KW_Luck_" + i]["KW_Card" + e._index].openCard1 && this.view["KW_Luck_" + i]["KW_Card" + e._index].openCard1.play(() => {
this.view["KW_Luck_" + i].visible = !1;
this._gameLogicManager.sendEndWait();
if (t) this.onMsgGoldBuffCard(e); else {
const t = this._tableData.getHandCards(i);
this.dispatch("setHandCards" + l.GAME_ID, i, t, !0);
}
});
} else this._gameLogicManager.sendEndWait();
}
downCardOther(t = !1) {
let e = -1;
if (t) {
const t = this._tableData.getGoldBuffCard();
e = this._tableData.seatToLocal(t._seat);
} else {
const t = this._tableData.getEndChooseCard();
e = this._tableData.seatToLocal(t._seat);
}
const i = this._tableData.getHandCards(e);
this.dispatch("setHandCards" + l.GAME_ID, e, i, !0);
}
onMsgHandCards(t) {
if (t._flag === m.GLProtocol.msgHandCards.eFlag.FLAG_MING && t._seat != this._tableData.getSelfSeat()) {
const e = this._tableData.seatToLocal(t._seat), i = this._tableData.getHandCards(e);
this.dispatch("setHandCards" + l.GAME_ID, e, i);
} else if (t._flag === m.GLProtocol.msgHandCards.eFlag.FLAG_RELINK) {
const e = this._tableData.seatToLocal(t._seat), i = this._tableData.getHandCards(e);
this.dispatch("setHandCards" + l.GAME_ID, e, i);
}
if (t._flag === m.GLProtocol.msgHandCards.eFlag.FLAG_MING) {
const e = this._tableData.seatToLocal(t._seat), i = this._tableData.getSeatName(e);
let s = this._tableData.getGameConfig()._ming_mult;
const o = this._tableData.getBuffMingPaiMult();
o && o.cnt > 0 && (s *= o.cnt);
const a = `${i}明牌，翻${s}倍`, n = {
PosY: g.gf.FGUI.getSize(g.gf.App.inst.root).height - 150
};
this._tableData.gameLogicData.isBigAwardOn() || null == this || this.getImpl(g.comm.ICommonDlgs).showWeakHint(a, n);
}
}
onMsgHuedCards(t) {
const e = this._tableData.seatToLocal(t._seat);
h.default.cardData[e].setDrawCard([ a.CardID.CID_NONE ]);
}
onFirstOutTips() {
const t = this._tableData.getBaseInfo();
if (t && t._banker_seat == this._tableData.getSelfSeat()) {
this.view.KW_CompFirstOut.visible = !0;
this.scheduleOnce(() => {
var t;
(null === (t = null == this ? void 0 : this.view) || void 0 === t ? void 0 : t.KW_CompFirstOut) && (this.view.KW_CompFirstOut.visible = !1);
}, 2);
}
}
getRandomNumber(t, e) {
return Math.floor(Math.random() * (e - t + 1) + t);
}
onMsgLastOutedCard(t) {
if (-1 === t._last_out_seat || t._count <= 0) return;
const e = this._tableData.seatToLocal(t._last_out_seat), i = this._tableData.getOutCards(e);
this.showOutCardAni(e, !0, i.length - 1);
}
onMsgActPowerNew() {
this._tableData.setPlayingCardAni(!1);
this._tableData.setTakeFirstIng(!1);
}
playEffect(t, e) {
this._tableData.gameLogicData.isBigAwardOn() || this._iSound.playEffect(t, e);
}
getMaxCardsNumber() {
let t = _.ALL_CARD_COUNT;
const e = this.getImpl(g.comm.lobby.ILobbyConfigManager).getExKing(), i = this.getImpl(g.comm.lobby.IJoinRoomModule).getCurRoomData(), s = (null == i ? void 0 : i.vrRoomLv) || 0;
if (e) {
const i = e.length;
for (let o = 0; o < i; o++) {
const i = e[o];
if (i.lv === s && i.n > 0) {
t += i.n;
break;
}
}
}
return t;
}
stopCloneAni() {
var t, e;
console.log("stopCloneAni");
const i = this.view["KW_CompHandCard_" + _.SELF_LOCAL_SEAT];
for (let s = 0; s < i.numChildren; s++) {
const o = i.getChildAt(s);
o.clone && (null === (e = null === (t = null == o ? void 0 : o.clone) || void 0 === t ? void 0 : t.stop) || void 0 === e || e.call(t, !0));
}
for (let t = 0; t < _.MAX_PLAYER; t++) {
if (t !== _.SELF_LOCAL_SEAT) continue;
const e = this._tableData.getHandCards(t);
this.dispatch("setHandCards" + l.GAME_ID, t, e, !0);
}
this.onCheckCloneCards();
const s = this._tableData.getCloneCards();
if (s) {
this.dispatch("showCloneCardsBG" + l.GAME_ID, !0, s._new_card_values);
this.dispatch("showCloneCards" + l.GAME_ID, !0);
} else console.error("cloneCards is null");
}
onMsgGoldBuffCard(t) {
const e = this._tableData.seatToLocal(t._seat);
this.view["KW_Luck_" + e].visible = !1;
if (t._seat != this._tableData.getSelfSeat()) {
const e = this._tableData.seatToLocal(t._seat), i = this.view.KW_Luck_Buff;
i.visible = !0;
i.setPosition(this.view["KW_Luck_Pos" + e].x, this.view["KW_Luck_Pos" + e].y);
for (let t = 0; t < 3; t++) {
const e = this.view.KW_Luck_Buff["KW_Card" + t];
e.KW_aniCard.skinName = "";
g.gf.sp.onSpineLoaded(e.KW_aniCard, t => {
t.setAnimation(0, "animation1", !1);
});
}
i.KW_aniLight.visible = !0;
g.gf.sp.onSpineLoaded(i.KW_aniLight, t => {
t.setAnimation(0, "animation1", !1);
t.addAnimation(0, "animation2", !0);
t.setCompleteListener(() => {
i.KW_aniLight.visible = !1;
});
});
}
}
initBuffCard() {
for (let t = 0; t < 3; t++) {
const e = this.view.KW_Luck_Buff["KW_Card" + t].KW_aniCard;
g.gf.sp.onSpineLoaded(e, t => {
t.setAnimation(0, "animation1", !0);
t.setCompleteListener(t => {
if ("animation2" === t.animation.name) {
this.view.KW_Luck_Buff.visible = !1;
const t = this._tableData.getGoldBuffCard(), e = this.view.KW_Luck_Buff["KW_Card" + t._index].localToGlobal(), i = this.view.globalToLocal(e.x, e.y);
this.dispatch("onMsgEndChooseBuffEnd" + l.GAME_ID, t, i);
}
});
});
}
this.view.KW_Luck_Buff.visible = !1;
}
onMsgGoldBuffInfoOther(t) {
for (let e = 0; e < 3; e++) {
const i = this.view.KW_Luck_Buff["KW_Card" + e].KW_aniCard;
e === t._index ? i.skinName = `dj${t._buff_id}` : i.skinName = "";
e != t._index && g.gf.sp.onSpineLoaded(i, t => {
t.setAnimation(0, "animation1", !0);
});
}
const e = this.view.KW_Luck_Buff["KW_Card" + t._index];
e && g.gf.sp.onSpineLoaded(e.KW_aniCard, t => {
t.setAnimation(0, "animation2", !1);
});
}
onCheckBuffCard() {
this.view.KW_Luck_Buff && (this.view.KW_Luck_Buff.visible = !1);
}
playStarUpAni(t) {
const e = this.getCardUIByCardVal(t).KW_AniStarUp;
if (e) {
e.visible = !0;
e.url = "ui://Game_K7Star_Card/Xingpaishuaxin";
g.gf.sp.onSpineLoaded(e, t => {
t.setAnimation(0, "animation", !1);
});
}
}
hideStarUpAni() {
const t = this.view["KW_CompHandCard_" + _.SELF_LOCAL_SEAT];
for (let e = 0; e < t.numChildren; e++) t.getChildAt(e).KW_AniStarUp.visible = !1;
}
getCardUIByCardVal(t) {
const e = this._tableData.getHandCards(_.SELF_LOCAL_SEAT);
let i = 0;
for (let s = e.length - 1; s >= 0; s--) if (e[s] == t) {
i = s;
break;
}
return this.view["KW_CompHandCard_" + _.SELF_LOCAL_SEAT].getChildAt(i);
}
};
f([ g.gf.listen("reset" + l.GAME_ID) ], A.prototype, "resetUI", null);
f([ g.gf.listen("onGameStart" + l.GAME_ID) ], A.prototype, "onGameStart", null);
f([ g.gf.listen("onChangeSeat" + l.GAME_ID) ], A.prototype, "onChangeSeat", null);
f([ g.gf.listen("moreSelect" + l.GAME_ID) ], A.prototype, "setMoreSelect", null);
f([ g.gf.listen("onMsgDeckCount" + l.GAME_ID) ], A.prototype, "onMsgDeckCount", null);
f([ g.gf.listen("onMsgGoldBuffInfoCloneAdd" + l.GAME_ID) ], A.prototype, "onMsgGoldBuffInfoCloneAdd", null);
f([ g.gf.listen("onMsgPlayerStart" + l.GAME_ID) ], A.prototype, "onMsgPlayerStart", null);
f([ g.gf.listen("onMsgTimer" + l.GAME_ID) ], A.prototype, "onMsgTimer", null);
f([ g.gf.listen("onGameEnd" + l.GAME_ID) ], A.prototype, "onGameEnd", null);
f([ g.gf.listen("stopAllPlayerTimer" + l.GAME_ID) ], A.prototype, "stopAllPlayerTimer", null);
f([ g.gf.listen("showOutCardAni" + l.GAME_ID) ], A.prototype, "showOutCardAni", null);
f([ g.gf.listen("showOutCards" + l.GAME_ID) ], A.prototype, "showOutCards", null);
f([ g.gf.listen("onMsgTakeFirst" + l.GAME_ID) ], A.prototype, "onMsgTakeFirst", null);
f([ g.gf.listen("onMingRenTang" + l.GAME_ID) ], A.prototype, "onMingRenTang", null);
f([ g.gf.listen("onMsgAddCards" + l.GAME_ID) ], A.prototype, "onMsgAddCards", null);
f([ g.gf.listen("onMsgPlayCards" + l.GAME_ID) ], A.prototype, "onMsgPlayCards", null);
f([ g.gf.listen("onMsgPlayCardsPeak" + l.GAME_ID) ], A.prototype, "onMsgPlayCardsPeak", null);
f([ g.gf.listen("onMsgHuCards" + l.GAME_ID) ], A.prototype, "onMsgHuCards", null);
f([ g.gf.listen("showDrawCards" + l.GAME_ID) ], A.prototype, "showDrawCards", null);
f([ g.gf.listen("showDrawCardsEx" + l.GAME_ID) ], A.prototype, "showDrawCardsEx", null);
f([ g.gf.listen("showDrawCardsOther" + l.GAME_ID) ], A.prototype, "showDrawCardsOther", null);
f([ g.gf.listen("showTakeFistCards" + l.GAME_ID) ], A.prototype, "showTakeFistCards", null);
f([ g.gf.listen("setHandCards" + l.GAME_ID) ], A.prototype, "setHandCards", null);
f([ g.gf.listen("setOutCards" + l.GAME_ID) ], A.prototype, "setOutCards", null);
f([ g.gf.listen("setHuCards" + l.GAME_ID) ], A.prototype, "setHuCards", null);
f([ g.gf.listen("allDownCards" + l.GAME_ID) ], A.prototype, "allDownCards", null);
f([ g.gf.listen("showTingCardsTip" + l.GAME_ID) ], A.prototype, "showTingCardsTip", null);
f([ g.gf.listen("popCards" + l.GAME_ID) ], A.prototype, "popCards", null);
f([ g.gf.listen("showCloneCardsBG" + l.GAME_ID) ], A.prototype, "showCloneCardsBG", null);
f([ g.gf.listen("showCloneCards" + l.GAME_ID) ], A.prototype, "showCloneCards", null);
f([ g.gf.listen("onMsgBombCards" + l.GAME_ID) ], A.prototype, "onMsgBombCards", null);
f([ g.gf.listen("onMsgDoTowerCard" + l.GAME_ID) ], A.prototype, "onMsgDoTowerCard", null);
f([ g.gf.listen("onMsgTowerCards" + l.GAME_ID) ], A.prototype, "onMsgTowerCards", null);
f([ g.gf.listen("onUpdateBoomMultText" + l.GAME_ID) ], A.prototype, "onUpdateBoomMultText", null);
f([ g.gf.listen("onCloneCardsAni" + l.GAME_ID) ], A.prototype, "onCloneCardsAni", null);
f([ g.gf.listen("onCheckCloneCards" + l.GAME_ID) ], A.prototype, "onCheckCloneCards", null);
f([ g.gf.listen("onMsgStartChooseCard" + l.GAME_ID) ], A.prototype, "onMsgStartChooseBuff", null);
f([ g.gf.listen("onMsgEndChooseCard" + l.GAME_ID) ], A.prototype, "onMsgEndChooseCard", null);
f([ g.gf.listen("onMsgEndChooseCardEnd" + l.GAME_ID) ], A.prototype, "onMsgEndChooseCardEnd", null);
f([ g.gf.listen("onMsgEndChooseBuffEnd2" + l.GAME_ID) ], A.prototype, "onMsgEndChooseBuffEnd2", null);
f([ g.gf.listen("onMsgHandCards" + l.GAME_ID) ], A.prototype, "onMsgHandCards", null);
f([ g.gf.listen("onMsgHuedCards" + l.GAME_ID) ], A.prototype, "onMsgHuedCards", null);
f([ g.gf.listen("onFirstOutTips" + l.GAME_ID) ], A.prototype, "onFirstOutTips", null);
f([ g.gf.listen("onMsgLastOutedCard" + l.GAME_ID) ], A.prototype, "onMsgLastOutedCard", null);
f([ g.gf.listen("onMsgActPowerNew" + l.GAME_ID) ], A.prototype, "onMsgActPowerNew", null);
f([ g.gf.listen("stopCloneAni" + l.GAME_ID) ], A.prototype, "stopCloneAni", null);
f([ g.gf.listen("onMsgGoldBuffCard" + l.GAME_ID) ], A.prototype, "onMsgGoldBuffCard", null);
f([ g.gf.listen("onMsgGoldBuffInfoOther" + l.GAME_ID) ], A.prototype, "onMsgGoldBuffInfoOther", null);
f([ g.gf.listen("onCheckBuffCard" + l.GAME_ID) ], A.prototype, "onCheckBuffCard", null);
f([ g.gf.listen("playStarUpAni" + l.GAME_ID) ], A.prototype, "playStarUpAni", null);
f([ g.gf.listen("hideStarUpAni" + l.GAME_ID) ], A.prototype, "hideStarUpAni", null);
const S = A = f([ g.gf.controller({
name: "GameCard",
module: "game_k7star",
fguiObject: "View",
layer: g.gf.ViewLayer.Base,
fguiPackage: [ "Game_K7Star_Common", "Game_K7Star_Card" ],
cachable: !0,
sortingOrder: _.FGUI_ORDER.GAME_CARD
}) ], A);
},
"./bin/ui/main/GameCardClone.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => r
});
var s = i("./bin/config/GameConfig.js"), o = i("./bin/config/GameDefine.js"), a = i("./bin/gf.js"), n = i("./bin/ui/main/GameCard.js"), l = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let _ = class extends a.gf.mvc.UIController {
onUIBinded() {
this.subView = this.view.KW_CloneCard;
this.subView1 = this.subView.KW_cardLine1;
this.subView2 = this.subView.KW_cardLine2;
this._gameCard = this.getImpl(n.default);
}
initUI(t, e, i) {
if (this.getImpl(a.comm.lobby.IJoinRoomModule).isGuide()) {
this.view.KW_Mask.visible = !1;
this.view.KW_CompTouch.visible = !1;
}
this.subView2.visible = !1;
this.subView1.visible = !0;
this.onUpdateCard(t._old_card_values, t._new_card_values);
const s = this.subView.openCard;
if (s) {
s.play();
s.setHook("menu", () => {
null == e || e();
this.getImpl(a.comm.lobby.IJoinRoomModule).isGuide() || this.runCardAni(i);
});
}
}
onUpdateCard(t, e) {
const i = t.length;
for (let e = 0; e < i; e++) {
const i = this.subView1["KW_card" + (e + 1)];
i.KW_value.C_flag.selectedIndex = 0;
i.KW_back.visible = !0;
i.KW_value.visible = !1;
i.KW_value.KW_num.url = `ui://_Common/black${t[e]}`;
}
for (let t = 0; t < i; t++) {
const i = this.subView2["KW_card" + (t + 1)];
i.KW_back.visible = !1;
i.KW_value.visible = !0;
i.KW_value.C_flag.selectedIndex = 1;
i.KW_value.KW_num.url = `ui://_Common/red${e[t]}`;
}
}
runCardAni(t) {
const e = this.subView.runCard, i = this._gameCard.view.KW_CloneCardList;
console.log("runCard.setValue 1", i.x, i.y);
const s = i.parent.localToGlobal(i.x, i.y);
console.log("runCard.setValue 2", s.x, s.y);
const o = this.subView2.parent.globalToLocal(s.x, s.y);
e.setValue("endpos", o.x, o.y);
console.log("runCard.setValue 3", o.x, o.y);
e.play(() => {
null == t || t();
this.close();
});
}
runCard() {
this.subView.runCard.play(() => {
this.close();
});
}
};
l([ a.gf.listen(o.GUIDE_EVENT.GUI_EVE_CLONE_RUN + s.GAME_ID) ], _.prototype, "runCardAni", null);
l([ a.gf.listen(o.GUIDE_EVENT.GUI_EVE_CLOSE_CLONE + s.GAME_ID) ], _.prototype, "runCard", null);
const r = _ = l([ a.gf.controller({
name: "GameCardClone",
module: "game_k7star",
fguiObject: "View",
layer: a.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_CardClone" ],
cachable: !0
}) ], _);
},
"./bin/ui/main/GameCardLuck.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => c
});
var s = i("./bin/gf.js"), o = i("./bin/data/TableData.js"), a = i("./bin/logic/moudles/GameLogicManager.js"), n = i("./bin/config/GameConfig.js"), l = i("./bin/ui/component/CardComb.js"), _ = i("./bin/config/GameDefine.js"), r = i("./bin/config/SoundConfig.js"), d = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let h = class extends s.gf.mvc.UIController {
constructor() {
super(...arguments);
this._tableData = null;
this._countDownNum = 0;
this._maxCardLength = 4;
this._maxCardLength_buff = 3;
this._goldCardNode = [];
this._goldCardAni = [];
this._goldChooseIndex = 0;
this._mapText = [ [ "恭", "喜", "发", "财" ], [ "春", "暖", "花", "开" ], [ "大", "吉", "大", "利" ], [ "春", "光", "灿", "烂" ] ];
this.dealCountDown = () => {
var t, e;
try {
if (!this.node || !this.subView) {
this.unschedule(this.dealCountDown);
return;
}
if (--this._countDownNum <= 0) {
this.unschedule(this.dealCountDown);
(null === (t = this.subView) || void 0 === t ? void 0 : t.KW_Time) && (this.subView.KW_Time.visible = !1);
return;
}
(null === (e = this.subView) || void 0 === e ? void 0 : e.KW_time) && (this.subView.KW_time.text = `${this._countDownNum}`);
} catch (t) {
console.error("Error in dealCountDown:", t);
this.unschedule(this.dealCountDown);
}
};
}
onUIBinded() {
this._gameLogicManager = this.getImpl(a.default);
this._tableData = this.getImpl(o.default);
this.subView = this.view.KW_LuckCard;
this.cardList_gold = this.subView.KW_CardList;
this.cardList_buff = this.subView.KW_CardListBuff;
for (let t = 0; t < this._maxCardLength; t++) {
const e = this.cardList_gold["KW_Card" + t];
this.addClick(e, () => {
console.log("on cliek game item, ", t);
this.onSendLuckCard(t);
});
}
this._goldCardAni = [];
this._goldCardNode = [];
for (let t = 0; t < this._maxCardLength_buff; t++) {
const e = this.cardList_buff["KW_Card" + t];
this.addClick(e, () => {
this.onSendBuffCard(t);
});
this._goldCardNode.push(e);
s.gf.sp.onSpineLoaded(e.KW_Back, t => {
t.premultipliedAlpha = !1;
this._goldCardAni.push(t);
t.setEventListener((i, s) => {
if ("animation4" === t.animation) {
const t = this._goldCardNode[this._goldChooseIndex];
if ("add_img2" == s.data.name) t.KW_Card.visible = !0; else if ("add_img4" == s.data.name) for (let t = 0; t < this._maxCardLength_buff; t++) {
const e = this._goldCardAni[t];
t != this._goldChooseIndex && e.setAnimation(0, "animation3", !1);
} else if ("add_img3" == s.data.name) {
const e = t.localToGlobal(), i = this.view.globalToLocal(e.x, e.y);
console.log("endpos", i);
const s = this._tableData.getGoldBuffCard();
this.dispatch("onMsgEndChooseBuffEnd" + n.GAME_ID, s, i);
this.closeView();
}
} else "animation3" === t.animation && "add_img2" == s.data.name && (e.KW_Card.visible = !0);
});
});
}
this._iSound = this.getImpl(s.gf.ISound);
this._iSoundModule = this.getImpl(s.comm.lobby.ISoundModule);
}
initUI(t, e) {
1 == t ? this.initGold(e) : this.initBuff(e);
}
initGold(t) {
this._maxCardLength = t;
const e = Math.floor(4 * Math.random()), i = this._mapText[e];
this.cardList_gold.KW_CardBuffAni.visible = !1;
this.cardList_gold.resetUI && this.cardList_gold.resetUI.play();
this.cardList_buff.visible = !1;
this.cardList_gold.visible = !0;
for (let t = 0; t < this._maxCardLength; t++) {
const e = this.cardList_gold["KW_Card" + t];
e.touchable = !0;
e.KW_Card.visible = !1;
e.KW_Back.KW_title.text = i[t];
e.KW_Back.visible = !0;
e.KW_Ani.visible = !1;
e.visible = !0;
}
const s = this._tableData.getTimer();
this.setCountDown(s._time);
this.subView.C_ctBuff.selectedPage = "luck";
}
initBuff(t) {
this._maxCardLength_buff = t;
this.cardList_buff.visible = !0;
this.cardList_gold.visible = !1;
for (let t = 0; t < this._maxCardLength_buff; t++) {
const e = this.cardList_buff["KW_Card" + t];
e.KW_Card.visible = !1;
e.KW_Back.visible = !0;
e.touchable = !0;
s.gf.sp.onSpineLoaded(e.KW_Back, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, "animation2", !0);
});
}
s.gf.sp.onSpineLoaded(this.subView.KW_aniBuff, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, "animation2", !0);
});
this.subView.KW_Time.visible = !0;
const e = this._tableData.getTimer();
this.setCountDown(e._time);
this.subView.C_ctBuff.selectedPage = "buff";
}
onSendLuckCard(t) {
for (let t = 0; t < this._maxCardLength; t++) this.cardList_gold["KW_Card" + t].touchable = !1;
this._gameLogicManager.sendPlayerChooseCard(t);
this.subView.KW_Time.visible = !1;
this.unschedule(this.dealCountDown);
}
onSendBuffCard(t) {
for (let t = 0; t < this._maxCardLength_buff; t++) this.cardList_buff["KW_Card" + t].touchable = !1;
this._gameLogicManager.sendGoldBuffSel(t);
this.subView.KW_Time.visible = !1;
this.unschedule(this.dealCountDown);
}
onMsgEndChooseCardSelf(t) {
t._seat == this._tableData.getSelfSeat() ? this.onUpdateCard(t._cards, t._index, 1 == t._gold_buff) : this.closeView();
}
onMsgGoldBuffInfoSelf(t) {
t._seat == this._tableData.getSelfSeat() ? this.onUpdateBuff(t) : this.closeView();
}
onBtnClose() {
this.closeView();
}
onUpdateCard(t, e, i) {
console.log("onUpdateCard", t, e, i);
for (let e = 0; e < this._maxCardLength; e++) {
const i = this.cardList_gold["KW_Card" + e], s = i.KW_Card;
i.KW_Card.visible = !1;
i.KW_Back.visible = !0;
l.default.setCard(s, t[e]);
}
this.cardList_gold.KW_CardBuffAni.visible = !1;
if (i) {
const i = this.cardList_gold.KW_CardBuffAni, s = i.KW_Card;
i.KW_Card.visible = !0;
i.KW_Back.visible = !1;
l.default.setCard(s, t[e]);
}
const o = this.cardList_gold["KW_Card" + e];
if (o.openCard1) {
let t = "endGold";
i && (t = "endBuff");
o.openCard1.clearHooks();
o.openCard1.setHook(t, t => {
this.cardList_gold["ani" + e].play(() => {
console.log("setHook", t);
if (1 == this._tableData.getEndChooseCard()._gold_buff) {
this._iSound.playEffect(r.SOUND_PATH.BUFF_CARD_OPEN, "game_k7star");
this.onSwitchToBuff(e);
} else {
this.dispatch("onMsgEndChooseCardEnd" + n.GAME_ID);
this.closeView();
}
});
});
o.openCard1.setHook("showAni", t => {
console.log("showAni", t);
s.gf.sp.onSpineLoaded(o.KW_Ani, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, "animation", !1);
});
});
o.openCard1.play(() => {});
}
}
onUpdateBuff(t) {
const e = t._buffParse, i = t._index;
for (let t = 0; t < this._maxCardLength_buff; t++) {
const i = e[t], o = i.id, a = this.cardList_buff["KW_Card" + t], n = a.KW_Card;
a.KW_Card.visible = !1;
a.KW_Back.visible = !0;
n.C_Buff.selectedIndex = i.id;
const l = `dj${o}`;
a.KW_Back.skinName = l;
switch (o) {
case _.GOLD_CARD_BUFF_FLAG.GCBF_JZZ:
a.KW_Card.KW_text4.text = `x${i.cnt}`;
break;

case _.GOLD_CARD_BUFF_FLAG.GCBF_DB:
a.KW_Card.KW_text5_2.text = `${i.mult}`;
a.KW_Card.KW_text5_1.text = `x${i.cnt}`;
break;

case _.GOLD_CARD_BUFF_FLAG.GCBF_YB:
{
const t = s.comm.StringUtils.dealBigNumEx5(i.cnt);
a.KW_Card.KW_text7.text = `x${t}`;
}
}
}
this._goldChooseIndex = i;
const o = this._goldCardAni[i];
if (o) {
this._iSound.playEffect(r.SOUND_PATH.BUFF_CARD_ENTER, "game_k7star");
o.setAnimation(0, "animation4", !1);
}
}
onSwitchToBuff(t) {
const e = this.cardList_gold["KW_Card" + t];
e.visible = !1;
this.cardList_gold.KW_CardBuffAni.setPosition(e.x, e.y);
this.cardList_gold.KW_CardBuffAni.visible = !0;
this.cardList_gold.KW_CardBuffAni.KW_Card.C_buff.selectedPage = "show";
this.onSwitchToGold();
}
onSwitchToGold() {
if (this.cardList_gold.KW_CardBuffAni.openCard) {
this.cardList_gold.KW_CardBuffAni.openCard.setHook("showAni", () => {
s.gf.sp.onSpineLoaded(this.cardList_gold.KW_CardBuffAni.KW_Back, t => {
t.premultipliedAlpha = !1;
t.loop = !1;
t.setAnimation(0, "animation1", !1);
t.addAnimation(0, "animation2", !0);
});
});
this.cardList_gold.KW_CardBuffAni.openCard.play(() => {
this.onSwitchToGoldShrink();
});
}
}
onSwitchToGoldShrink() {
this.cardList_gold.aniBuffShuo.play(() => {
this.subView.C_ctBuff.selectedPage = "buff";
this.subView.KW_aniBuff.visible = !0;
this._iSound.playEffect(r.SOUND_PATH.BUFF_CARD_RAND, "game_k7star");
s.gf.sp.onSpineLoaded(this.subView.KW_aniBuff, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, "animation1", !1);
t.addAnimation(0, "animation2", !0);
});
this.scheduleOnce(() => {
this.onSwitchToBuffShow();
}, .3);
});
}
onSwitchToBuffShow() {
this.subView.KW_aniLight.visible = !0;
s.gf.sp.onSpineLoaded(this.subView.KW_aniLight, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, "animation", !1);
t.setCompleteListener(() => {
this.subView.KW_aniLight.visible = !1;
});
});
for (let t = 0; t < this._maxCardLength_buff; t++) {
const e = this._goldCardNode[t];
e.touchable = !0;
e.KW_Card.visible = !1;
e.KW_Back.visible = !0;
Math.floor(4 * Math.random());
s.gf.sp.onSpineLoaded(e.KW_Back, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, "animation2", !0);
});
}
this.cardList_buff.visible = !0;
this.cardList_gold.visible = !1;
this.cardList_buff.openCard.play(() => {
console.log("openCard");
for (let t = 0; t < this._maxCardLength_buff; t++) this.cardList_buff["KW_Card" + t].touchable = !0;
this._gameLogicManager.sendEndWait();
});
}
setCountDown(t) {
var e, i;
try {
if ("number" != typeof t || t < 0) {
console.warn("Invalid countdown number:", t);
return;
}
if (t > 0) {
this._countDownNum = t;
if (null === (e = this.subView) || void 0 === e ? void 0 : e.KW_Time) {
this.subView.KW_Time.visible = !0;
this.subView.KW_time.text = `${this._countDownNum}`;
this.schedule(this.dealCountDown, 1);
}
} else {
this._countDownNum = 0;
(null === (i = this.subView) || void 0 === i ? void 0 : i.KW_Time) && (this.subView.KW_Time.visible = !1);
this.dealCountDown();
}
} catch (t) {
console.error("Error in setCountDown:", t);
}
}
closeView() {
try {
this.dealCountDown();
this.unschedule(this.dealCountDown);
this.close();
} catch (t) {
console.error("Error closing view:", t);
this.close();
}
}
onMsgTimer(t) {
if (t._type === _.ENUM_GAME_STATE.GS_GOLD_BUFF) {
this.subView.KW_Time.visible = !0;
const t = this._tableData.getTimer();
this.setCountDown(t._time);
}
}
};
d([ s.gf.listen("onMsgEndChooseCardSelf") ], h.prototype, "onMsgEndChooseCardSelf", null);
d([ s.gf.listen("onMsgGoldBuffInfoSelf" + n.GAME_ID) ], h.prototype, "onMsgGoldBuffInfoSelf", null);
d([ s.gf.listen("onMsgTimer" + n.GAME_ID) ], h.prototype, "onMsgTimer", null);
const c = h = d([ s.gf.controller({
name: "GameCardLuck",
module: "game_k7star",
fguiObject: "View",
layer: s.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_Card", "Game_K7Star_CardLuck" ],
cachable: !0
}) ], h);
},
"./bin/ui/main/GameExitTips.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => _
});
var s = i("./bin/config/GameDefine.js"), o = i("./bin/data/TableData.js"), a = i("./bin/gf.js"), n = i("./bin/logic/moudles/GameLogicManager.js");
let l = class extends a.gf.mvc.UIController {
constructor() {
super(...arguments);
this.callBack = null;
this.callOpen = null;
this.callGet = null;
this.onBtnMsgClose = () => {
this.close();
};
this.onBtnMsgQuit = () => {
this.close();
this.callBack && this.callBack();
};
}
onUIBinded() {
this._gameLogicManager = this.getImpl(n.default);
this._tableData = this.getImpl(o.default);
this.iJoinRoomMoudle = this.getImpl(a.comm.lobby.IJoinRoomModule);
this.taskList = this.view.KW_ListTask.asList;
this.taskList.removeChildrenToPool();
this.addClick(this.view.KW_BtnContinue, this.onBtnMsgClose);
this.addClick(this.view.KW_BtnQuit, this.onBtnMsgQuit);
}
onUnUIBinded() {}
initUI(t, e) {
this.callBack = t;
if (e) {
this.callOpen = e.callOpen;
this.callGet = e.callGet;
}
(null == e ? void 0 : e.playBack) && this.initPlayBackUI(e.playBack);
}
initPlayBackUI(t) {
const e = this.taskList.addItemFromPool("ui://Game_K7Star_ExitTips/ExitTipItem");
if (1 == t.useType) {
let i = `您还有1个${[ "", "", "精英场", "至尊场", "巅峰场" ][t.roomLv]}转盘未开启，是否开启`;
a.gf.FGUI.getChild(e, "KW_BtnOpen").visible = !0;
a.gf.FGUI.getChild(e, "KW_BtnGet").visible = !1;
let s = 1;
t.roomLv >= 2 && t.roomLv <= 4 && (s = t.roomLv - 1);
a.gf.FGUI.getChild(e, "icon").asLoader.url = `ui://Game_K7Star_ExitTips/ImgTtIconZp${s}`;
a.gf.FGUI.getChild(e, "KW_TextTip").text = `${i}`;
} else if (t.lastCnt > 0) {
let i = `今日还有${t.lastCnt}个转盘未领取`;
a.gf.FGUI.getChild(e, "KW_BtnOpen").visible = !1;
a.gf.FGUI.getChild(e, "KW_BtnGet").visible = !0;
let s = 1;
t.roomLv >= 2 && t.roomLv <= 4 && (s = t.roomLv - 1);
a.gf.FGUI.getChild(e, "icon").asLoader.url = `ui://Game_K7Star_ExitTips/ImgTtIconZp${s}`;
a.gf.FGUI.getChild(e, "KW_TextTip").text = `${i}`;
}
this.addClick(a.gf.FGUI.getChild(e, "KW_BtnOpen").asButton, () => {
var t;
this.close();
null === (t = this.callOpen) || void 0 === t || t.call(this);
});
this.addClick(a.gf.FGUI.getChild(e, "KW_BtnGet").asButton, () => {
var t;
this.close();
null === (t = this.callGet) || void 0 === t || t.call(this);
});
}
onDestroy() {}
};
const _ = l = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
}([ a.gf.controller({
name: "GameExitTips",
module: "game_k7star",
fguiObject: "View",
layer: a.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_ExitTips" ],
cachable: !0,
sortingOrder: s.FGUI_ORDER.GAME_PLAYER
}) ], l);
},
"./bin/ui/main/GameFlow.js": (t, i, s) => {
s.r(i);
s.d(i, {
default: () => h
});
var o = s("./bin/config/CardType.js"), a = s("./bin/config/GameConfig.js"), n = s("./bin/config/GameDefine.js"), l = s("./bin/data/TableData.js"), _ = s("./bin/gf.js"), r = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let d = class extends _.gf.mvc.UIController {
onUIBinded() {
this._tableData = this.getImpl(l.default);
this.addClick(this.view.KW_CompBack2, () => {
this.view.KW_CompLimitTips.visible = !1;
this.view.KW_CompBack2.visible = !1;
});
this.addClick(this.view.KW_CompBack, this.onBtnClose);
this.addClick(this.view.KW_ImgBg, this.onBtnBG);
this._recordList = this.view.KW_List;
this._recordList.itemRenderer = this.updateRecordItem.bind(this);
this._recordList.setVirtual();
}
onUnUIBinded() {}
initUI() {
this.updateFlowInfo();
}
reset() {
this._tableData.clearFlowData();
this.updateFlowInfo();
}
onDestroy() {}
getPlayerRelativePosition(t) {
if (t == n.MAX_PLAYER) return "三家";
const e = this._tableData.seatToLocal(t);
return this._tableData.getSeatName(e);
}
getStateName(t) {
switch (t) {
case 0:
return "自摸";

case 1:
return "和牌";

case 2:
return "被自摸";

case 3:
return "被和牌";
}
return "";
}
updateFlowInfo() {
const t = _.comm.Util.clone(this._tableData.getFlowData());
t.reverse();
const e = t.length <= 0;
this.view.KW_CompNoFlow.visible = e;
let i = 0;
if (e) {
this.view.KW_TextWinLose.text = "+0";
this._recordList.numItems = 0;
} else {
this._detailList = [];
for (let e = 0; e < t.length; e++) {
const s = t[e];
if (s._ex_flag == n.eResultExFlag.FlagJZZ || 0 != s._score) {
i += s._score;
this._detailList.push(s);
}
}
this._recordList.numItems = this._detailList.length;
this.view.KW_TextWinLose.text = i > 0 ? "+" + _.comm.StringUtils.dealBigNumEx5(i) : _.comm.StringUtils.dealBigNumEx5(i);
}
}
onBtnBG() {
this.view.KW_CompLimitTips.visible = !1;
}
updateRecordItem(t, i) {
const s = this._detailList[t];
i.KW_TextWL.text = this.getStateName(s._hu_type);
let a = "";
o.CardTypeInfo[s._ct] && o.CardTypeInfo[s._ct][1] && (a = o.CardTypeInfo[s._ct][1]);
i.KW_TextType.text = `(${a})`;
i.KW_TextMult.text = _.comm.StringUtils.dealBigNumEx5(s._mult) + "倍";
if (s._score >= 0) {
i.KW_TextSr.color = _.gf.newColor(241, 72, 33);
i.KW_TextSr2.color = _.gf.newColor(241, 72, 33);
i.KW_TextSr.text = "+" + _.comm.StringUtils.dealBigNumEx5(s._score);
} else {
i.KW_TextSr.color = _.gf.newColor(46, 84, 250);
i.KW_TextSr2.color = _.gf.newColor(46, 84, 250);
i.KW_TextSr.text = _.comm.StringUtils.dealBigNumEx5(s._score);
}
i.KW_JZZ.visible = !1;
i.KW_TextSr2.visible = !1;
if (s._ex_flag == n.eResultExFlag.FlagStarCombo) {
i.KW_TextSr2.text = "(连击)";
i.KW_TextSr2.visible = !0;
} else if (s._ex_flag == n.eResultExFlag.FlagDouble) {
i.KW_TextSr2.text = "(翻倍)";
i.KW_TextSr2.visible = !0;
} else if (s._ex_flag == n.eResultExFlag.FlagWinLimit) {
i.KW_TextSr2.text = "(封顶)";
i.KW_TextSr2.visible = !0;
} else if (s._ex_flag == n.eResultExFlag.FlagPlayerLimit) {
i.KW_TextSr2.text = "(上限)";
i.KW_TextSr2.visible = !0;
} else s._ex_flag == n.eResultExFlag.FlagJZZ && (i.KW_JZZ.visible = !0);
this.addClick(i.KW_BtnTips, () => {
this.view.KW_CompLimitTips.visible = !0;
this.view.KW_CompBack2.visible = !0;
this.view.KW_CompLimitTips.KW_Bao.text = `${s._bao_mult || "--"}`;
this.view.KW_CompLimitTips.KW_Type.text = `${a || "--"}`;
this.view.KW_CompLimitTips.KW_Tower.text = `${s._tower_mult || "--"}`;
this.view.KW_CompLimitTips.KW_Gold.text = `${s._gold_mult || "--"}`;
this.view.KW_CompLimitTips.KW_Ming.text = `${s._ming_mult || "--"}`;
this.view.KW_CompLimitTips.KW_Same.text = `${s._same_mult || "--"}`;
const t = i.KW_BtnTips.localToGlobal(), o = e.GRoot.inst.globalToLocal(t.x, t.y);
this.view.KW_CompLimitTips.setPosition(o.x + 20, o.y);
});
i.KW_BtnTips.visible = !0;
if (4 == s._from_seat) i.C_Position.selectedIndex = 1; else {
const t = this._tableData.seatToLocal(s._from_seat);
i.C_Position.selectedIndex = t;
}
}
};
r([ _.gf.listen("updateFlowInfo" + a.GAME_ID) ], d.prototype, "updateFlowInfo", null);
const h = d = r([ _.gf.controller({
name: "GameFlow",
module: "game_k7star",
fguiObject: "FlowView",
layer: _.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_Main" ],
cachable: !0,
sortingOrder: n.FGUI_ORDER.GAME_POP
}) ], d);
},
"./bin/ui/main/GameMain.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => f
});
var s = i("./bin/config/GameConfig.js"), a = i("./bin/config/GameDefine.js"), n = i("./bin/config/SoundConfig.js"), l = i("./bin/data/TableData.js"), _ = i("./bin/gameLogic/CardRuleLogic.js"), r = i("./bin/gf.js"), d = i("./bin/logic/guide/GameGuideModule.js"), h = i("./bin/logic/moudles/GameLogicManager.js"), c = i("./bin/logic/protocol/GLProtocol.js"), g = i("./bin/manager/activeManager.js"), u = i("./bin/manager/ElevatingManager.js"), m = i("./bin/logic/actModules/GameActModule.js"), C = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let p = class extends r.gf.mvc.UIController {
constructor() {
super(...arguments);
this.tableMap = {};
this.PPZTipClock = null;
this._isNeedPopBigAward = !1;
this._bigAwardNextPopFunc = null;
this._matchStartTime = 0;
}
onUIBinded() {
this._gameLogicManager = this.getImpl(h.default);
this._tableData = this.getImpl(l.default);
this._cardLogic = new _.default();
this._iSound = this.getImpl(r.gf.ISound);
}
onUnUIBinded() {
console.log("onBtnExit  onUnUIBinded");
this._gameLogicManager.endListen();
}
initUI() {
console.timeEnd("load time GameMain");
this.initBG();
this.view.KW_ImgLogo.visible = !1;
if (r.gf.App.inst.root.width / r.gf.App.inst.root.height < 1.4) {
console.log("窄屏");
this.view.KW_ImgLogo2.visible = this.getImpl(r.comm.IHost).getHostId() == r.comm.HostId.GuanDan;
this.view.KW_ImgLogo3.visible = !1;
} else {
this.view.KW_ImgLogo3.visible = this.getImpl(r.comm.IHost).getHostId() == r.comm.HostId.GuanDan;
this.view.KW_ImgLogo2.visible = !1;
}
if (r.gf.sys.os == r.gf.sys.OS_IOS && (this.getImpl(r.comm.IHost).getHostId() != r.comm.HostId.GuanDan || !this.getImpl(r.comm.IHost).isMiniGame())) {
this.view.KW_ImgLogo.visible = !1;
this.view.KW_ImgLogo2.visible = !1;
this.view.KW_ImgLogo3.visible = !1;
}
if (this.getImpl(r.comm.lobby.IJoinRoomModule).isGuide()) {
this.initGuideUI();
return;
}
let t = 4;
const e = () => {
--t <= 0 && this.initEnterGame();
};
console.time("load time GamePlayer");
this.getImpl(r.gf.IViewPlugin).openView("GamePlayer").then(() => {
console.timeEnd("load time GamePlayer");
e();
});
console.time("load time GameCard");
this.getImpl(r.gf.IViewPlugin).openView("GameCard").then(() => {
console.timeEnd("load time GameCard");
e();
});
this.getImpl(r.gf.IViewPlugin).openView("GameTest").then();
console.time("load time GameBtn");
this.getImpl(r.gf.IViewPlugin).openView("GameBtn").then(() => {
console.timeEnd("load time GameBtn");
e();
});
console.time("load time GameAni");
this.getImpl(r.gf.IViewPlugin).openView("GameAni").then(() => {
console.timeEnd("load time GameAni");
e();
});
this.getImpl(r.gf.IViewPlugin).openView("GameTest").then();
this.getImpl(r.gf.IViewPlugin).openView("GameTing");
this.getImpl(g.default).initUI();
this.view.KW_TextRoomInfo.text = "";
this.view.KW_TextBaseScore.text = "";
this.view.KW_TextFD.text = "";
this._iSound.playMusic(n.SOUND_PATH.BGM, "game_k7star");
this._tableData.setCurBGMName(n.SOUND_PATH.BGM);
}
onDestroy() {
this._isNeedPopBigAward = !1;
this._bigAwardNextPopFunc = null;
this._iSound.stopMusic();
console.log("GameMain  onDestroy");
}
initGuideUI() {
let t = 5;
const e = () => {
--t <= 0 && this.scheduleOnce(() => {
this.getImpl(r.comm.lobby.ICommonActModule).getPlayerGuideFirst(s.GAME_ID) ? this.getImpl(r.gf.IViewPlugin).openView("GameGuideEnter") : this.getImpl(d.default).startStep(a.GUIDE_STEP.GUDS_INIT);
}, .1);
};
console.log("GameMain  initGuideUI");
this.getImpl(r.gf.IViewPlugin).openView("GamePlayer").then(() => {
e();
});
this.getImpl(r.gf.IViewPlugin).openView("GameBtn").then(() => {
e();
});
this.getImpl(r.gf.IViewPlugin).openView("GameCard").then(() => {
e();
});
this.getImpl(r.gf.IViewPlugin).openView("GameGuide").then(() => {
e();
});
this.getImpl(r.gf.IViewPlugin).openView("GameAni").then(() => {
e();
});
this.getImpl(r.gf.IViewPlugin).openView("GameTing");
this.view.KW_TextRoomInfo.text = "练习场";
this.view.KW_TextBaseScore.text = "底分20";
this._tableData.setBaseInfo({
_banker_seat: 0,
_base_score: 20,
_charge: 0,
_win_limit: 0,
_win_mult: 0,
_win_take_mult: 0,
_is_star_combo_on: 0,
__protoFormat__: void 0,
pack: function() {
throw new Error("Function not implemented.");
}
});
this._iSound.playMusic(n.SOUND_PATH.BGM, "game_k7star");
this._tableData.setCurBGMName(n.SOUND_PATH.BGM);
}
initEnterGame() {
console.log("initEnterGame");
this.dispatch("KW_GameNextRound");
this.getImpl(r.comm.IWaiting).onComplete(r.comm.WaitingCommon, !0);
this.initBG();
this.getImpl(g.default).initUI();
this.view.KW_TextRoomInfo.text = "";
this.view.KW_TextBaseScore.text = "";
this.view.KW_TextFD.text = "";
this.getImpl(r.comm.lobby.ICommonActModule).reqCommonGameConfig(s.GAME_ID);
this._gameLogicManager.startListen();
const t = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurRoomData();
this.view.KW_TextRoomInfo.text = (null == t ? void 0 : t.name) || "";
this.getImpl(m.default).reqPowerProps(r.comm.AwardCMD.PowerProps.CMD_PP_CONFIG, 1);
this.scheduleOnce(() => {
this._gameLogicManager.reqPlayerConnect(t => {
console.log("GameLogicManager startListen:", t);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_gogame, {
[o.shuShuAnalytics.game_flow.__name]: o.shuShuAnalytics.game_flow.respPlayerConnect,
game_id: this.getImpl(r.comm.lobby.IJoinRoomModule).getCurGameId(),
version: this.getImpl(r.comm.IHost).getUpdateVersion(this.getImpl(r.comm.lobby.IJoinRoomModule).getCurGameId())
});
if (this.getImpl(r.comm.lobby.IJoinRoomModule).isConnect()) this.dispatch("showMatching" + s.GAME_ID, !1); else {
this.dispatch("showMatching" + s.GAME_ID, !0);
this.reportBeginMatch();
}
});
}, .5);
}
resetUI() {
console.log("KW_GameNextRound");
this.onCloseCloneCards();
}
onChangeSeat() {
this._tableData.reset();
this.showGameInfo(!1);
this.initBG();
}
getRandom(t, e) {
return Math.floor(Math.random() * (e - t + 1)) + t;
}
playOutCardAni(t) {
const e = this.view["KW_EffOutAni" + t];
r.gf.sp.onSpineLoaded(e, t => {
e.visible = !0;
t.animation = "animation";
t.loop = !1;
t.setCompleteListener(() => {
e.visible = !1;
});
});
}
playSpine(t, e = "animation", i = !1, s = !0) {
r.gf.sp.onSpineLoaded(t, o => {
t.visible = !0;
o.animation = e;
o.loop = i;
i || o.setCompleteListener(() => {
t.visible = !s;
});
});
}
playSpineEx(t, e = "animation", i = !1, s = !0, o) {
r.gf.sp.onSpineLoaded(t, a => {
t.visible = !0;
a.animation = e;
a.loop = i;
i || a.setCompleteListener(() => {
t.visible = !s;
null == o || o();
});
});
}
playPlayerSound(t, e = 0) {}
reqLeaveGame() {}
showGameInfo(t) {
var e;
this.view.KW_TextBaseScore.visible = t;
this.view.KW_TextFD.visible = t;
if (t) {
const t = r.comm.StringUtils.dealBigNumEx5((null === (e = this._tableData.getBaseInfo()) || void 0 === e ? void 0 : e._base_score) || 0);
let i = r.comm.StringUtils.dealBigNumEx5(this._tableData.getBaseInfo()._win_mult || 0);
this._tableData.getWinLimitMult() < 0 && (i = "不封顶");
this.view.KW_TextBaseScore.text = `底分：${t}`;
this.view.KW_TextFD.text = `封顶倍数：${i}`;
}
}
onMsgNoLimitInfo(t) {
t._seat == this._tableData.getSelfSeat() && (0 !== t._no_limit_mult || t._no_limit_can_win);
}
onMsgCloneCards(t) {
const e = this._tableData.getReconnect();
if (e._flag === c.GLProtocol.msgReconnect.eFlag.FLAG_START || e._flag === c.GLProtocol.msgReconnect.eFlag.FLAG_START_WITH_PEAK) {
this.dispatch("showCloneCardsBG" + s.GAME_ID, !0, t._new_card_values);
this.dispatch("showCloneCards" + s.GAME_ID, !0);
} else this.getImpl(r.gf.IViewPlugin).openView("GameCardClone", t, () => {
this.dispatch("showCloneCardsBG" + s.GAME_ID, !0, t._new_card_values);
}, () => {
this.dispatch("showCloneCards" + s.GAME_ID, !0);
this.dispatch("onCloneCardsAni" + s.GAME_ID, t);
for (let t = 0; t < a.MAX_PLAYER; t++) {
if (t === a.SELF_LOCAL_SEAT) continue;
const e = this._tableData.getHandCards(t);
this.dispatch("setHandCards" + s.GAME_ID, t, e);
}
});
}
onCloseCloneCards() {
this.getImpl(r.gf.IViewPlugin).haveView("GameCardClone") && this.getImpl(r.gf.IViewPlugin).closeView("GameCardClone");
}
onMsgStartChooseCard(t) {
t._seat == this._tableData.getSelfSeat() && this.getImpl(r.gf.IViewPlugin).openView("GameCardLuck", 1, t._count);
}
onMsgStartChooseBuff(t) {
t._seat == this._tableData.getSelfSeat() && this.getImpl(r.gf.IViewPlugin).openView("GameCardLuck", 2, t._gold_buff_cnt);
}
onMsgEndChooseCard(t) {
t._seat == this._tableData.getSelfSeat() ? this.dispatch("onMsgEndChooseCardSelf", t) : 1 == t._gold_buff && this.dispatch("onMsgGoldBuffCardAni" + s.GAME_ID, t);
}
onMsgGoldBuffInfo(t) {
t._seat == this._tableData.getSelfSeat() ? this.dispatch("onMsgGoldBuffInfoSelf" + s.GAME_ID, t) : this.dispatch("onMsgGoldBuffInfoOther" + s.GAME_ID, t);
}
showMultTable(t) {
this.getImpl(r.gf.IViewPlugin).openView("GameMultTable", t);
}
showFlowView(t) {
this.getImpl(r.gf.IViewPlugin).openView("GameFlow", t);
}
showSetting(t) {
this.getImpl(r.gf.IViewPlugin).openView("GameSetting", t);
}
showHelp(t) {
this.getImpl(r.gf.IViewPlugin).openView("GameHelp", t);
}
onMsgNotice(t) {
let e = "操作失败" + t._code;
switch (t._code) {
case c.GLProtocol.msgNotice.eFlag.E_REMOVE_PKAYER:
e = "服务异常，请联系客服";
null == this || this.getImpl(r.comm.ICommonDlgs).showCommonDlg(e || "", 2, () => {
this.reqLeaveGame();
}, () => {
this.dispatch("onBtnExit", s.GAME_ID);
}, !1, null, null);
break;

case c.GLProtocol.msgNotice.eFlag.E_TALLY_FAIL:
case c.GLProtocol.msgNotice.eFlag.E_SERVER_DOWN:
e = "结算失败，请联系客服";
null == this || this.getImpl(r.comm.ICommonDlgs).showCommonDlg(e || "", 2, () => {
this.reqLeaveGame();
}, () => {
this.dispatch("onBtnExit", s.GAME_ID);
}, !1, null, null);
break;

case c.GLProtocol.msgNotice.eFlag.E_VERSION:
e = "版本不一致";
}
t._code != c.GLProtocol.msgNotice.eFlag.E_REMOVE_PKAYER && (t._code != c.GLProtocol.msgNotice.eFlag.I_SUCCESS && t._code < c.GLProtocol.msgNotice.eFlag.E_TALLY_START || t._code != c.GLProtocol.msgNotice.eFlag.I_SUCCESS && t._code > c.GLProtocol.msgNotice.eFlag.E_TALLY_START && (null == this || this.getImpl(r.comm.ICommonDlgs).showCommonDlg(e || "", 2, () => {
this.reqLeaveGame();
}, () => {
this.dispatch("onBtnExit", s.GAME_ID);
}, !1, null, null)));
}
onMsgBaseData() {
this.showGameInfo(!0);
}
onMsgTotalResult(t) {
console.log("onMsgTotalResult", t);
this.dispatch("TingShow" + s.GAME_ID, !1);
this.getImpl(r.gf.IViewPlugin).openView("GameResult", !0).then();
this.reportGameFinish();
}
onMsgPlayerFlowHistoryList() {
this.dispatch("updateFlowInfo" + s.GAME_ID);
}
onMsgTrust(t) {
const e = this._tableData.seatToLocal(t._seat);
e == a.SELF_LOCAL_SEAT ? t._flag == c.GLProtocol.msgTrust.eFlag.FLAG_ON ? this.getImpl(r.gf.IViewPlugin).openView("GameTrust") : this.getImpl(r.gf.IViewPlugin).haveView("GameTrust") && this.getImpl(r.gf.IViewPlugin).closeView("GameTrust") : this.dispatch("showTrustSign" + s.GAME_ID, e, t._flag);
}
onGameStart() {
this.getImpl(r.gf.IViewPlugin).haveView("UIAward") && this.getImpl(r.gf.IViewPlugin).closeView("UIAward");
this.reqbankruptInGame();
this.reqWiningGiftInGame();
this.reqGameConfig();
const t = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurRoomData();
this.view.KW_TextRoomInfo.text = (null == t ? void 0 : t.name) || "";
this.reportMatchSuccess();
}
onGameEnd() {
this.getImpl(r.gf.IViewPlugin).haveView("GameTrust") && this.getImpl(r.gf.IViewPlugin).closeView("GameTrust");
}
onMsgRespUsePropNew(t) {
const e = t._flag == c.GLProtocol.msgUsePropNew.ResultType.kSuccess;
if (t._prop_id != r.comm.Propid.JiPaiQi) e && this.dispatch("showPropAni" + s.GAME_ID, this._tableData.seatToLocal(t._from_seat), this._tableData.seatToLocal(t._to_seat), t._prop_id); else if (e) {
this._tableData.setUseNoteCardType(c.GLProtocol.msgCardRecordState.eFlag.FLAG_RELINK_WITH_COUNT);
if (this._tableData.isNoteCardStatusWillUse()) {
this._tableData.setNoteCardStatus(2);
this.getImpl(h.default).sendReqTurnCardRecord(c.GLProtocol.msgTurnCardRecord.eFlag.FLAG_ON);
this.getImpl(r.comm.lobby.IPropManager).reqUserProp();
this.getImpl(r.gf.IViewPlugin).openView("NoteCardInGame");
}
} else {
this._tableData.setUseNoteCardType(c.GLProtocol.msgCardRecordState.eFlag.FLAG_RELINK_WITH_NONE);
this._tableData.setNoteCardStatus(0);
this.getImpl(r.comm.ICommonDlgs).showWeakHint("记牌器道具使用失败!");
}
}
onCancelBigAward() {
this._tableData.gameLogicData.setWillShowBigAward(!1);
}
onMsgBigAward(t) {
console.log("onMsgBigAward event");
if (null !== this._tableData.gameLogicData.getBigAwardData()) if (this._tableData.gameLogicData.isBigAwardOn()) console.log("onMsgBigAward isBigAwardOn not show!"); else {
this._isNeedPopBigAward = !0;
this._bigAwardNextPopFunc = t;
this._tableData.gameLogicData.setBigAwardOn(!0);
this.getImpl(r.comm.lobby.IJoinRoomModule).reqPlayerGameData();
} else {
console.log("onMsgBigAward no award data!");
t && t();
}
}
onUpdateSRBeforeBigAward(t) {
console.log("onUpdateSRBeforeBigAward:", t);
if (this._isNeedPopBigAward) {
this._isNeedPopBigAward = !1;
this._iSound.stopMusic();
this._iSound.stopAllEffects();
this.getImpl(r.comm.lobby.IGiftModule).updatePlayerData();
this.getImpl(r.gf.IViewPlugin).openView(r.comm.UIs.K7StarBigAward, this._tableData.gameLogicData.getBigAwardData(), !1, t, () => {
this._iSound.playMusic(this._tableData.getCurBGMName(), "game_k7star");
this._tableData.gameLogicData.setBigAwardOn(!1);
this._tableData.gameLogicData.setWillShowBigAward(!1);
this._tableData.gameLogicData.setBigAwardData(null);
this.dispatch("updateSetSelfSR" + s.GAME_ID);
if (this._bigAwardNextPopFunc) {
this._bigAwardNextPopFunc();
this._bigAwardNextPopFunc = null;
}
}).then();
}
}
respTickGiftUseQuan(t) {
const e = this.getImpl(r.comm.lobby.IGiftModule).getTicketGift(t, r.comm.AwardCMD.RespTickGift.GET_USE_RCQ);
if (e && 0 == e.flag) {
const i = e.config || {};
this.getImpl(r.comm.lobby.IGiftModule).reqUserPropInGame(1, i.propid, t);
} else this.getImpl(r.comm.lobby.IGiftModule).reqTicketGift(t, r.comm.AwardCMD.RespTickGift.GET_QUAN_CONFIG, -1);
}
eventGameContinue(t) {
const e = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurRoomData();
if (t == (null == e ? void 0 : e.vrRoomLv)) {
this.dispatch("showMatching" + s.GAME_ID, !0);
this.dispatch("onChangeSeat" + s.GAME_ID);
this._gameLogicManager.sendChangeSeat();
this.getImpl(r.gf.IViewPlugin).closeView("GameResult");
} else {
const t = this.getImpl(u.default).getGameTopInfo();
if (t) {
this.getImpl(u.default).changeRoom(t);
this.getImpl(r.gf.IViewPlugin).haveView("GameResult") && this.getImpl(r.gf.IViewPlugin).closeView("GameResult");
this.dispatch("onShowReady");
this.dispatch("onChangeSeat" + s.GAME_ID);
}
}
}
reqbankruptInGame() {
var t;
const e = this.getImpl(r.comm.IHost).getHostId() || 0, i = null !== (t = this.getImpl(r.comm.IHost).getChannelid()) && void 0 !== t ? t : 0, s = this.getImpl(r.comm.lobby.IUserManager).ssid, o = this.getImpl(r.comm.lobby.IUserManager).numid, a = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurGameId(), n = r.comm.g.areaConfig.areaID, l = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurRoomData(), _ = ((null == l ? void 0 : l.vrRoomLv) || 0) + 1;
console.log(`reqRechargeInGame lv:${_}`);
const d = "https://ly-acts." + this.getImpl(r.comm.IHost).getDomainName() + "/202603/revivalpacket/getgoods", h = (this.getImpl(r.comm.IHost).isSrsDebug() ? "https://test-acts.bfyx.net/202603/revivalpacket/getgoods" : d) + "?" + `ssid=${s}&numid=${o}&gameid=${a}&areaid=${n}&roomlv=${_}&hostid=${e}&channelid=${i}`;
console.log("reqRechargeInGame url:" + h);
this.getPlugin(r.gf.IHttp).httpReq("get", h, null, t => {
const e = null == t ? void 0 : t.response;
if (e) {
console.log("reqRechargeInGame result:" + e);
const t = JSON.parse(e);
0 == t.code ? this.dispatch(r.comm.AwardConfig.bankruptInGame.dataHead, t.data) : this.getImpl(r.comm.IHost).isSrsDebug() && this.getImpl(r.comm.ICommonDlgs).showCommonDlg(`复活礼包数据错误!${t.message}`);
} else this.getImpl(r.comm.IHost).isSrsDebug() && this.getImpl(r.comm.ICommonDlgs).showCommonDlg("http error");
});
}
reqGameConfig() {
const t = {};
t.channelid = this.getImpl(r.comm.IHost).getChannelid() || 10002002;
const e = r.comm.g.gameIds.game_k7star;
t.reqGameConfig = 1;
this.getImpl(r.comm.lobby.IAwardManager).reqAwardInfo(t, r.comm.AwardConfig.GameConfig20840.type, e);
}
reqRechargeInGame(t) {
var e;
const i = this.getImpl(r.comm.IHost).getHostId() || 0, s = null !== (e = this.getImpl(r.comm.IHost).getChannelid()) && void 0 !== e ? e : 0, o = this.getImpl(r.comm.lobby.IUserManager).ssid, a = this.getImpl(r.comm.lobby.IUserManager).numid, n = r.comm.g.areaConfig.areaID, l = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurRoomData(), _ = ((null == l ? void 0 : l.vrRoomLv) || 0) + 1;
console.log(`reqRechargeInGame lv:${_}`);
const d = "https://ly-acts." + this.getImpl(r.comm.IHost).getDomainName() + "/202411/supplementinround/page", h = (this.getImpl(r.comm.IHost).isSrsDebug() ? "https://test-acts.bfyx.net/202411/supplementinround/page" : d) + "?" + `ssid=${o}&numid=${a}&areaid=${n}&roomlv=${_}&hostid=${i}&channelid=${s}`;
console.log("reqRechargeInGame url:" + h);
this.getPlugin(r.gf.IHttp).httpReq("get", h, null, e => {
const i = null == e ? void 0 : e.response;
if (i) {
console.log("reqRechargeInGame result:" + i);
const e = JSON.parse(i);
0 == e.code ? t && t(!0, e.message, e.data) : t && t(!1, e.message);
} else t && t(!1, "http error");
});
}
reqWiningGiftInGame() {
const t = {};
t.channelid = this.getImpl(r.comm.IHost).getChannelid() || 10002002;
const e = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurGameId();
t.respDataHead = r.comm.AwardConfig.respK7StarWinningGift.dataHead;
this.getImpl(r.comm.lobby.IAwardManager).reqAwardInfo(t, r.comm.AwardConfig.respK7StarWinningGift.type, e);
}
onReqRechargeInfo() {
this.reqRechargeInGame((t, e, i) => {
if (t) {
this._tableData.setRechargeInGameProducts(i);
this.getImpl(r.gf.IViewPlugin).openView("RechargeInGame", t => {
console.log(`RechargeInGame close:${t}`);
if (t > 0) {
this.getImpl(r.comm.ICommonDlgs).showWeakHint(`云币+${t}`);
this.getImpl(r.comm.lobby.IJoinRoomModule).reqPlayerGameData();
this.getImpl(r.comm.lobby.IPlayerGameDataManager).reqPlayerAllSr();
}
this._tableData.getGameState()._state !== a.ENUM_GAME_STATE.GS_CHOOSE_CARD && this.dispatch("onCloseLuck" + s.GAME_ID);
});
} else {
console.error(e);
this.getImpl(r.comm.IHost).isSrsDebug() && this.getImpl(r.comm.ICommonDlgs).showCommonDlg(`请求局中充值信息失败!${e}`);
}
});
}
onRechargeState(t) {
this._gameLogicManager.sendRechargeState(t);
}
onMsgReconnect(t) {
if (0 == t) {
this.reqbankruptInGame();
this.reqWiningGiftInGame();
}
}
bankruptInGame(t) {
if (t) {
if (t.products) for (let e = 0; e < t.products.length; e++) {
const i = t.products[e], s = i.paymode;
if ("string" == typeof s) {
i.paymode = [];
i.paymode = s.split(",").map(t => Number(t));
}
}
this._tableData.setBankruptInGameConfig(t);
}
}
respK7StarWinningGift(t) {
t && t.key && t.key == r.comm.AwardConfig.respK7StarWinningGift.dataHead && 1 == t.flag && this._tableData.setWinningGiftInGameConfig(t.info);
}
GameConfig20840(t) {
t && t.key && "respGameConfig" == t.key && 1 == t.flag && this._tableData.setGameDBPConfig(t.info);
}
onMsgGameState(t) {
if (t._state == a.ENUM_GAME_STATE.GS_BROKEN) for (let t = 0; t < this._tableData.getRoundResult()._count; t++) if (this._tableData.getRoundResult()._ex_flag[t][this._tableData.selfSeat] == a.eResultExFlag.FlagBankrupt) {
this.dispatch("onHidePopView" + s.GAME_ID, a.HIDE_POP_VIEW_FLAG.HPVF_BANKRUPT);
this.getImpl(r.gf.IViewPlugin).closeView("RechargeInGame");
const t = this._tableData.getBankruptInGameConfig();
t && t.open && 1 == t.open ? this.getImpl(r.gf.IViewPlugin).openView(r.comm.UIs.K7StarReviveView) : this.getImpl(h.default).sendGiveUp(c.GLProtocol.msgGiveUp.eFlag.FLAG_GIVE_UP);
break;
}
}
onCloseLuck() {
this.getImpl(r.gf.IViewPlugin).haveView("GameCardLuck") && this.getImpl(r.gf.IViewPlugin).closeView("GameCardLuck");
}
onHidePopView(t) {
const e = [];
if (a.HIDE_POP_VIEW_FLAG.HPVF_GIVE_UP == t) {
e.push("YunProtectTips");
e.push("YunProtectGift");
e.push("DoublePropGift");
} else if (a.HIDE_POP_VIEW_FLAG.HPVF_BANKRUPT == t) {
e.push("YunProtectTips");
e.push("YunProtectGift");
e.push("DoublePropGift");
} else a.HIDE_POP_VIEW_FLAG.HPVF_TOTAL_RESULT == t && e.push("DoublePropGift");
const i = e.length;
for (let s = 0; s < i; s++) {
this.getImpl(r.gf.IViewPlugin).closeView(e[s]);
console.log("onHidePopView:viewName=", e[s], ",flag=", t);
}
}
initBG() {
const t = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurRoomData();
let e = (null == t ? void 0 : t.vrRoomLv) || 0;
this.getImpl(r.comm.lobby.IJoinRoomModule).isGuide() && (e = 0);
switch (e) {
case 1:
this.view.KW_CompBG.url = "ui://Game_K7Star_Main/img_game_bg0";
break;

case 2:
this.view.KW_CompBG.url = "ui://Game_K7Star_Main/img_game_bg1";
break;

case 3:
this.view.KW_CompBG.url = "ui://Game_K7Star_Main/zhizun";
this.view.KW_AniBG.visible = !0;
this.view.KW_AniBG.url = "ui://Game_K7Star_Main/Bg_dianfengchang";
break;

case 4:
this.view.KW_CompBG.url = "ui://Game_K7Star_Main/dianfeng";
this.view.KW_AniBG.visible = !0;
this.view.KW_AniBG.url = "ui://Game_K7Star_Main/Dianfeng1_bg";
break;

default:
this.view.KW_CompBG.url = "ui://Game_K7Star_Main/img_game_bg";
this.view.KW_AniBG.visible = !1;
}
this.view.KW_CompBG.center();
!0 === this.view.KW_AniBG.visible && r.gf.sp.onSpineLoaded(this.view.KW_AniBG, t => {
t.animation = "animation";
t.loop = !0;
});
}
onUseProtectToken(t) {
this._gameLogicManager.sendUsePropSpecil(r.comm.Propid.ProtectToken, t);
}
reportBeginMatch() {
this._matchStartTime = Date.now();
const t = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurGameId(), e = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurRoomData(), i = (null == e ? void 0 : e.vrRoomLv) || 0, s = {};
s.gameid = t;
s.room_lv = i;
this.getImpl(o.IReportEventUtil).reportEvents(o.ReportConfig.GameEvent.cType, o.ReportConfig.GameEvent.beginMatch, s);
}
reportMatchSuccess() {
const t = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurGameId(), e = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurRoomData(), i = (null == e ? void 0 : e.vrRoomLv) || 0, s = this._matchStartTime > 0 ? Math.floor((Date.now() - this._matchStartTime) / 1e3) : 0, a = {};
a.gameid = t;
a.room_lv = i;
a.cost_time = s;
this.getImpl(o.IReportEventUtil).reportEvents(o.ReportConfig.GameEvent.cType, o.ReportConfig.GameEvent.matchSuccess, a);
this._matchStartTime = 0;
}
reportGameFinish() {
const t = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurGameId(), e = this.getImpl(r.comm.lobby.IJoinRoomModule).getCurRoomData(), i = (null == e ? void 0 : e.vrRoomLv) || 0, s = {};
s.gameid = t;
s.room_lv = i;
this.getImpl(o.IReportEventUtil).reportEvents(o.ReportConfig.GameEvent.cType, o.ReportConfig.GameEvent.gameFinish, s);
}
};
C([ r.gf.listen(r.comm.Events.EventJoinGame) ], p.prototype, "initEnterGame", null);
C([ r.gf.listen("KW_GameNextRound") ], p.prototype, "resetUI", null);
C([ r.gf.listen("onChangeSeat" + s.GAME_ID) ], p.prototype, "onChangeSeat", null);
C([ r.gf.listen("onMsgNoLimitInfo" + s.GAME_ID) ], p.prototype, "onMsgNoLimitInfo", null);
C([ r.gf.listen("onMsgCloneCards" + s.GAME_ID) ], p.prototype, "onMsgCloneCards", null);
C([ r.gf.listen("onCloseCloneCards" + s.GAME_ID) ], p.prototype, "onCloseCloneCards", null);
C([ r.gf.listen("onMsgStartChooseCard" + s.GAME_ID) ], p.prototype, "onMsgStartChooseCard", null);
C([ r.gf.listen("onMsgStartChooseBuff" + s.GAME_ID) ], p.prototype, "onMsgStartChooseBuff", null);
C([ r.gf.listen("onMsgEndChooseCard" + s.GAME_ID) ], p.prototype, "onMsgEndChooseCard", null);
C([ r.gf.listen("onMsgGoldBuffInfo" + s.GAME_ID) ], p.prototype, "onMsgGoldBuffInfo", null);
C([ r.gf.listen("showMultTable" + s.GAME_ID) ], p.prototype, "showMultTable", null);
C([ r.gf.listen("showFlowView" + s.GAME_ID) ], p.prototype, "showFlowView", null);
C([ r.gf.listen("showSetting" + s.GAME_ID) ], p.prototype, "showSetting", null);
C([ r.gf.listen("showHelp" + s.GAME_ID) ], p.prototype, "showHelp", null);
C([ r.gf.listen("onMsgNotice" + s.GAME_ID) ], p.prototype, "onMsgNotice", null);
C([ r.gf.listen("onMsgBaseInfo" + s.GAME_ID) ], p.prototype, "onMsgBaseData", null);
C([ r.gf.listen("onMsgTotalResult" + s.GAME_ID) ], p.prototype, "onMsgTotalResult", null);
C([ r.gf.listen("onMsgPlayerFlowHistoryList" + s.GAME_ID) ], p.prototype, "onMsgPlayerFlowHistoryList", null);
C([ r.gf.listen("onMsgTrust" + s.GAME_ID) ], p.prototype, "onMsgTrust", null);
C([ r.gf.listen("onGameStart" + s.GAME_ID) ], p.prototype, "onGameStart", null);
C([ r.gf.listen("onGameEnd" + s.GAME_ID) ], p.prototype, "onGameEnd", null);
C([ r.gf.listen("onMsgRespUsePropNew" + s.GAME_ID) ], p.prototype, "onMsgRespUsePropNew", null);
C([ r.gf.listen("onCancelBigAward" + s.GAME_ID) ], p.prototype, "onCancelBigAward", null);
C([ r.gf.listen("onMsgBigAward" + s.GAME_ID) ], p.prototype, "onMsgBigAward", null);
C([ r.gf.listen(r.comm.RoomToGameEventName.EVENT_RTG_UPDATE_SR) ], p.prototype, "onUpdateSRBeforeBigAward", null);
C([ r.gf.listen(r.comm.AwardEventNames.RespTickGift.GET_USE_RCQ) ], p.prototype, "respTickGiftUseQuan", null);
C([ r.gf.listen(r.comm.Events.EventGameContinue) ], p.prototype, "eventGameContinue", null);
C([ r.gf.listen("onReqRechargeInfo" + s.GAME_ID) ], p.prototype, "onReqRechargeInfo", null);
C([ r.gf.listen("onRechargeState" + s.GAME_ID) ], p.prototype, "onRechargeState", null);
C([ r.gf.listen("onMsgReconnect" + s.GAME_ID) ], p.prototype, "onMsgReconnect", null);
C([ r.gf.listen(r.comm.AwardConfig.bankruptInGame.dataHead) ], p.prototype, "bankruptInGame", null);
C([ r.gf.listen(r.comm.AwardConfig.respK7StarWinningGift.dataHead) ], p.prototype, "respK7StarWinningGift", null);
C([ r.gf.listen(r.comm.AwardConfig.GameConfig20840.dataHead) ], p.prototype, "GameConfig20840", null);
C([ r.gf.listen("onMsgGameState" + s.GAME_ID) ], p.prototype, "onMsgGameState", null);
C([ r.gf.listen("onCloseLuck" + s.GAME_ID) ], p.prototype, "onCloseLuck", null);
C([ r.gf.listen("onHidePopView" + s.GAME_ID) ], p.prototype, "onHidePopView", null);
C([ r.gf.listen("onUseProtectToken" + s.GAME_ID) ], p.prototype, "onUseProtectToken", null);
const f = p = C([ r.gf.controller({
name: "GameMain",
module: "game_k7star",
fguiObject: "View",
layer: r.gf.ViewLayer.Base,
fguiPackage: [ "Game_K7Star_Main" ],
cachable: !0,
sortingOrder: a.FGUI_ORDER.GAME_MAIN
}) ], p);
},
"./bin/ui/main/GameMultTable.js": (t, i, s) => {
s.r(i);
s.d(i, {
default: () => g
});
var o = s("./bin/config/CardType.js"), a = s("./bin/config/GameConfig.js"), n = s("./bin/config/GameDefine.js"), l = s("./bin/data/TableData.js"), _ = s("./bin/gf.js"), r = s("./bin/ui/component/CardComb.js"), d = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
const h = [ 1, 2, 3, 4, 5, 111, 112, 113, 114, 115, 201, 202, 203, 204, 205, 206, 207, 208, 302, 303, 304, 305, 307, 402, 403, 404, 405, 407, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533 ];
let c = class extends _.gf.mvc.UIController {
constructor() {
super(...arguments);
this._isGuide = !1;
}
onUIBinded() {
this._tableData = this.getImpl(l.default);
this._oriX || (this._oriX = this.view.KW_MultInner.x);
}
onUnUIBinded() {
e.GRoot.inst.off(e.Event.TOUCH_END, this.onTouchBack, this);
}
onMsgRecommendCards() {
this.view.KW_MultInner.C_InGame.selectedIndex = 1;
this.updateRecommendInfo();
}
initUI(t = !1) {
this.view.KW_MultInner.KW_Node_Guide.visible = !1;
this._isGuide = t;
this.view.KW_MultInner.x = -500;
e.GTween.kill(this.view.KW_MultInner);
e.GTween.to(this.view.KW_MultInner.x, this._oriX, .3).setTarget(this.view.KW_MultInner, e.TweenPropType.X).onComplete(() => {
this.view.KW_MultInner.KW_Node_Guide.visible = this._isGuide;
e.GRoot.inst.on(e.Event.TOUCH_END, this.onTouchBack, this);
});
const i = this.view.KW_MultInner.KW_MultLayer;
i.scrollPane.scrollTop();
const s = this._tableData.isInGame() && this._tableData.getRecommendCardsNew()._ct;
this.view.KW_MultInner.C_InGame.selectedIndex = s ? 1 : 0;
s && this.updateRecommendInfo();
const a = this._tableData.getMultConfig();
for (let t = 0; t < h.length; t++) {
const e = h[t], s = i["KW_Item" + e], n = a[e];
if (n && s && o.CardTypeInfo[e]) {
s.KW_Text.text = o.CardTypeInfo[e][1];
s.KW_TextMult.text = `${_.comm.StringUtils.dealBigNumEx5(n)}倍`;
let t = "ui://Game_K7Star_Mult/rulebei-export";
const i = this._tableData.getBuffBombMult(), a = s.C_Buff;
if (i) if (i.mult >= n && (e < 90 || e > 100)) {
s.KW_TextMult.text = `${n * i.cnt}倍`;
a.selectedPage = "show";
t = "ui://Game_K7Star_Mult/rulebei2-export";
} else a.selectedPage = "hide"; else a.selectedPage = "hide";
s.KW_TextMult.font = t;
}
}
const n = [ {
id: 90,
key: "所有牌同颜色"
}, {
id: 91,
key: "所有牌同花色"
}, {
id: 92,
key: "宝牌*n"
} ];
for (let t = 0; t < n.length; t++) {
const e = n[t], s = i["KW_Item" + e.id], o = a[e.id], l = e.key;
if (o && s && l) {
s.KW_Text.text = l;
s.KW_TextMult.text = `${o}倍`;
92 === e.id && (s.KW_TextMult.text = `${o}^n倍`);
}
}
}
updateRecommendInfo() {
const t = this._tableData.getRecommendCardsNew();
for (let e = 0; e < 2; ++e) {
const i = e + 1, s = this.view.KW_MultInner.KW_MultLayer["KW_ListHand" + i], a = this.view.KW_MultInner.KW_MultLayer["KW_ItemRec" + i], n = a.KW_Text, l = a.KW_TextMult, d = this.view.KW_MultInner.KW_MultLayer["KW_MaxInfo" + i];
if (0 == t._ct[e]) {
this.view.KW_MultInner.KW_MultLayer.C_Single.selectedIndex = 1;
continue;
}
this.view.KW_MultInner.KW_MultLayer.C_Single.selectedIndex = 0;
s.removeChildrenToPool();
const h = t._cards[e];
for (const t of h) {
const e = s.addItemFromPool();
_.gf.setLayerNode(e);
e.visible = !0;
r.default.setCardSmallMult(e, t);
e.select.selectedIndex = 0;
}
const c = o.CardTypeInfo[t._ct[e]];
n.text = `【${c[1]}】`;
l.text = (t._mult[e] >= 1e4 ? _.comm.StringUtils.dealBigNumEx5(t._mult[e]) : t._mult[e]) + "倍";
if (t._left_tower_count[e] < 0) d.visible = !1; else {
d.visible = !0;
if (0 == t._left_tower_count[e]) d.C_Max.selectedIndex = 1; else {
d.C_Max.selectedIndex = 0;
d.title = t._left_tower_count[e].toString();
}
}
}
}
onTouchBack(t) {
this.view.globalToLocal(t.pos.x, t.pos.y).x > this.view.KW_MultInner.x + this.view.KW_MultInner.width && this.onBtnClose();
}
onBtnClose() {
this._isGuide && this.dispatch(n.GUIDE_EVENT.GUI_EVE_CLOSE_MULT + a.GAME_ID);
this.close();
}
};
d([ _.gf.listen("onMsgRecommendCards" + a.GAME_ID) ], c.prototype, "onMsgRecommendCards", null);
const g = c = d([ _.gf.controller({
name: "GameMultTable",
module: "game_k7star",
fguiObject: "View",
layer: _.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_Card", "Game_K7Star_Common", "Game_K7Star_Mult" ],
cachable: !0,
sortingOrder: n.FGUI_ORDER.GAME_POP
}) ], c);
},
"./bin/ui/main/GameNoteCard.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => u
});
var s = i("./bin/config/CardCode.js"), a = i("./bin/config/GameConfig.js"), n = i("./bin/config/GameDefine.js"), l = i("./bin/data/TableData.js"), _ = i("./bin/gf.js"), r = i("./bin/logic/moudles/GameLogicManager.js"), d = i("./bin/logic/protocol/GLProtocol.js"), h = i("./bin/ui/component/CardComb.js"), c = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let g = class extends _.gf.mvc.UIController {
constructor() {
super(...arguments);
this._tableData = null;
}
get mainView() {
return this.view.KW_Main;
}
onUIBinded() {
this._tableData = this.getImpl(l.default);
this.addClick(this.mainView.KW_BtnClose, this.closeView);
this.addClick(this.view.KW_BtnMask, this.closeView);
}
closeView() {
this.getImpl(r.default).sendReqTurnCardRecord(d.GLProtocol.msgTurnCardRecord.eFlag.FLAG_OFF);
this.close();
}
initUI() {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_qxjpq_qxbp, {
[o.shuShuAnalytics.game_event_ui_jpq.__name]: o.shuShuAnalytics.game_event_ui_jpq.ui_jpq
});
this.updateUI();
this.updateNoteCardInfo();
}
updateUI() {
const t = this._tableData.getCardRecordData(), e = t.length > 0;
this.mainView.KW_ListCardBg.visible = e;
this.mainView.KW_ListCard.visible = e;
this.mainView.KW_ListCount.visible = e;
this.mainView.KW_ListMask.visible = e;
if (e) {
let e = 0;
for (let i = 0; i < n.MAX_CARD_ID_COUNT; i++) {
const o = i + 1;
if ((0, s.VALUE)(o) == s.CardValue.CV_NONE) continue;
this.setCard(o, e);
const a = t[o], n = 0 == a ? 1 : 0, l = this.mainView.KW_ListCount.getChildAt(e);
l.KW_TxtCount.text = `${a}`;
l.C_FlagImg.selectedIndex = n;
this.mainView.KW_ListMask.getChildAt(e).C_noCard.selectedIndex = n;
++e;
}
}
}
updateNoteCardInfo() {
const t = this.getImpl(_.comm.lobby.IPropManager).getPropById(_.comm.Propid.JiPaiQiTime), e = this.getImpl(_.comm.lobby.IPropManager).getPropById(_.comm.Propid.JiPaiQi);
let i = (null == t ? void 0 : t.endTime) - Math.floor(Date.now() / 1e3), s = "剩余0局";
if (i > 0 || this._tableData.isUseNoteCardTime()) {
t && i || (i = 0);
s = this.getPropTimeStr(i);
} else (null == e ? void 0 : e.value) && (s = e.value > 99 ? "剩余99+局" : "剩余" + e.value + "局");
this.mainView.KW_TxtTip.text = s;
}
getPropTimeStr(t) {
const e = t > 86400;
let i = 0, s = 0;
if (e) {
t -= 86400 * (i = Math.floor(t / 86400));
s = Math.floor(t / 3600);
} else s = Math.floor(t / 3600);
if (s <= 0) return "即将到期";
const o = Math.floor((t - 3600 * s) / 60);
return e ? `剩余：${_.comm.Util.format("%02d", i)}天${_.comm.Util.format("%02d", s)}时${_.comm.Util.format("%02d", o)}分` : `剩余：${_.comm.Util.format("%02d", s)}时${_.comm.Util.format("%02d", o)}分`;
}
setCard(t, e) {
const i = this.mainView.KW_ListCard.getChildAt(e), o = this.mainView.KW_ListCardBg.getChildAt(e);
o.C_CardBg.selectedIndex = 0;
if (t == s.CardID.CID_GOLD) {
i.C_cardValue.setSelectedPage("gold");
o.C_CardBg.selectedIndex = 1;
} else if ((0, s.VALUE)(t) <= s.CardValue.CV_NONE) i.C_cardValue.setSelectedPage("back"); else if ((0, 
s.VALUE)(t) <= s.CardValue.CV_K) {
i.C_cardValue.setSelectedPage("cardnum");
i.KW_CompColorNum.url = `ui://_Common/${this.getColor(t)}${(0, s.VALUE)(t)}`;
i.KW_CompColorSmall.url = this.getColorPath((0, s.COLOR)(t));
} else if ((0, s.VALUE)(t) == s.CardValue.CV_SJ || (0, s.VALUE)(t) == s.CardValue.CV_BJ) {
i.C_cardValue.setSelectedPage("joker");
i.KW_CompColorNum.url = `ui://_Common/${(0, s.get_num_by_cardVal)((0, s.VALUE)(t))}small`;
}
}
getColor(t) {
return h.default.getColor(t);
}
getColorPath(t) {
return h.default.getColorPath(t);
}
};
c([ _.gf.listen("onMsgCardRecord" + a.GAME_ID) ], g.prototype, "updateUI", null);
c([ _.gf.listen(_.comm.Events.EventRespPlayerScore) ], g.prototype, "updateNoteCardInfo", null);
const u = g = c([ _.gf.controller({
name: "NoteCardInGame",
module: "game_k7star",
fguiObject: "View",
layer: _.gf.ViewLayer.Base,
fguiPackage: [ "Game_K7Star_NoteCard_InGame" ],
cachable: !0,
sortingOrder: n.FGUI_ORDER.GAME_NoteCard
}) ], g);
},
"./bin/ui/main/GamePlayer.js": (t, i, s) => {
s.r(i);
s.d(i, {
default: () => g
});
var a = s("./bin/config/GameConfig.js"), n = s("./bin/config/GameDefine.js"), l = s("./bin/data/TableData.js"), _ = s("./bin/gf.js"), r = s("./bin/logic/moudles/GameLogicManager.js"), d = s("./bin/logic/protocol/GLProtocol.js"), h = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let c = class extends _.gf.mvc.UIController {
constructor() {
super(...arguments);
this._timer = [];
this._timeID = [];
this._giveupIng = [];
this._mingRenTangTitlePos = [];
this._isRechargeTipOn = !1;
}
onUIBinded() {
this._gameLogicManager = this.getImpl(r.default);
this._tableData = this.getImpl(l.default);
this._iJoinRoomMoudle = this.getImpl(_.comm.lobby.IJoinRoomModule);
for (let t = 0; t < n.MAX_PLAYER; t++) {
this.addClick(this.view["KW_CompHead" + t].KW_CompHead, () => {
this.onBtnPlayerInfo(t);
});
const e = this.view["KW_CompPF" + t];
e.C_WinSate.selectedPage = "hide";
this.addClick(e, () => {
this.view.KW_maskPF.visible = !0;
e.C_WinSate.selectedPage = "show";
e.C_Seat.selectedIndex = t;
});
}
this.addClick(this.view.KW_maskPF, this.onClickPFMask);
this.addClick(this.view.KW_CompRich1.KW_BtnAddRich, () => {
let t = 0;
const e = this.getImpl(l.default).getSelf();
e && e.numid && (t = e.sr);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_goldadd_click, {
icon_name: "云币补充",
icon_status: this._isRechargeTipOn ? "有提示" : "无提示",
prop_num: t,
icon_sence: "游戏中"
});
this.hideRechargeTip();
this.dispatch("onReqRechargeInfo" + a.GAME_ID);
});
}
onUnUIBinded() {}
initUI() {
this.resetUI();
for (let t = 0; t < n.MAX_PLAYER; t++) {
this.showHeadBox(t, 0, !1);
const e = this.view[`KW_CompHead${t}`];
e && this._tableData.setPlayerPos(t, _.gf.newVec2(e.x, e.y));
}
const t = this.getImpl(_.comm.lobby.IUserManager)._userManager;
this.updateSR(n.SELF_LOCAL_SEAT, t.userScore);
this.onPlayerHead(n.SELF_LOCAL_SEAT);
this.view.KW_CompHead1.KW_CompWireBreak.visible = !1;
const e = this.view["KW_CompHead" + n.SELF_LOCAL_SEAT];
e && e.C_ShowLeaveEarly.setSelectedIndex(0);
this.view["KW_ImgLeaveEarlyTip" + n.SELF_LOCAL_SEAT].visible = !1;
this.onShowLightAni(n.SELF_LOCAL_SEAT, !1);
this.onShowHeadLightAni(n.SELF_LOCAL_SEAT, !1);
const i = this.getImpl(_.comm.lobby.IPropManager).getDressInfoByType(_.comm.DressPropType.headKuang);
_.comm.getPropDressInfo(i) && this.scheduleOnce(() => {
this.showHeadBox(n.SELF_LOCAL_SEAT, i, !0);
}, .5);
}
resetUI() {
for (let t = 0; t < n.MAX_PLAYER; t++) {
this.view["KW_CompGiveup" + t].visible = !1;
this.view["KW_CompStarCount" + t].visible = !1;
const e = this.view["KW_CompPF" + t];
e.visible = !1;
e.C_WinSate.selectedPage = "hide";
this.view["KW_AniRecharging" + t].visible = !1;
const i = this.view["KW_CompHead" + t];
i && i.C_ShowLeaveEarly.setSelectedIndex(0);
this.view["KW_ImgLeaveEarlyTip" + t].visible = !1;
this.onShowLightAni(t, !1);
this.onShowHeadLightAni(t, !1);
if (t != n.SELF_LOCAL_SEAT) {
this.view["KW_CompRich" + t].KW_TextRich.text = "0";
this.showTrustSign(t, !1);
if (t != n.SELF_LOCAL_SEAT) {
this.view["KW_Player" + t].visible = !1;
console.log("onMsgPlayerInfo 玩家隐藏 resetUI", t);
}
this.view["KW_CompHead" + t].KW_CompWireBreak.visible = !1;
}
}
this.view.KW_maskPF.visible = !1;
this.showChargingSigns(!1, n.MAX_PLAYER);
this.showNobilityNoPayOrDouble(0, n.MAX_PLAYER, !1);
let t = !1;
const e = this.getImpl(_.comm.lobby.IJoinRoomModule).getCurRoomData(), i = (null == e ? void 0 : e.vrRoomLv) || 0, s = this.getImpl(_.comm.lobby.ILobbyConfigManager).getK7RechargeConfig();
if (s) for (let e = 0; e < s.length; e++) if (s[e].lv === i) {
t = s[e].on > 0;
break;
}
this.getImpl(_.comm.lobby.IJoinRoomModule).isGuide() && (t = !1);
this.view.KW_CompRich1.C_AddRich.setSelectedIndex(t ? 1 : 0);
this.hideRechargeTip();
}
onDestroy() {
for (let t = 0; t < n.MAX_PLAYER; t++) if (this._timeID && this._timeID[t]) {
clearTimeout(this._timeID[t]);
this._timeID[t] = null;
}
}
onBtnPlayerInfo(t) {
if (this.getImpl(_.comm.lobby.IJoinRoomModule).isGuide()) return;
const e = this._tableData.getPlayerByLocalSeat(t);
if (e && e.isVaildPlayer()) {
t == n.SELF_LOCAL_SEAT ? this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_gameinside_qxbp, {
[o.shuShuAnalytics.game_event_click_qxbp.__name]: o.shuShuAnalytics.game_event_click_qxbp.clickHeadSelf
}) : this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_gameinside_qxbp, {
[o.shuShuAnalytics.game_event_click_qxbp.__name]: o.shuShuAnalytics.game_event_click_qxbp.clickHeadOther
});
console.log("onBtnPlayerInfo:" + t);
const i = this.view["KW_CompHead" + t].localToGlobal();
this.getImpl(_.gf.IViewPlugin).openView("GamePlayerInfo", e, i);
}
}
onClickPFMask() {
for (let t = 0; t < n.MAX_PLAYER; t++) this.view["KW_CompPF" + t].C_WinSate.selectedPage = "hide";
this.view.KW_maskPF.visible = !1;
}
showRechargeTip() {
console.log("GamePlayer showRechargeTip");
this._isRechargeTipOn = !0;
this.updateRechargeTip();
}
hideRechargeTip() {
console.log("GamePlayer hideRechargeTip");
this._isRechargeTipOn = !1;
this.updateRechargeTip();
}
updateRechargeTip() {
console.log(`GamePlayer updateRechargeTip: ${this._isRechargeTipOn}`);
_.gf.sp.onSpineLoaded(this.view.KW_CompRich1.KW_BtnAddRich.KW_Ani, t => {
t.premultipliedAlpha = !1;
t.loop = this._isRechargeTipOn;
t.animation = "animation1";
t.setCompleteListener(() => {});
});
this._isRechargeTipOn && this._tableData.setRechargeTipShowed(!0);
const t = 1 == this.view.KW_CompRich1.C_AddRich.selectedIndex && this._isRechargeTipOn, e = this.view.KW_CompRich1.KW_BtnAddRich.localToGlobal();
this.dispatch("showAddRichTips" + a.GAME_ID, t, {
x: e.x,
y: e.y
});
}
setSr(t, e) {
this.view["KW_CompRich" + t].KW_TextRich.text = _.comm.StringUtils.dealBigNumEx5(e);
if (t === n.SELF_LOCAL_SEAT) {
this.dispatch("onUpdateRechargeSr" + a.GAME_ID, e);
const t = this._tableData.getSelfMaxCanWin();
console.log(`====setSr sr:${e} max:${t}`);
e <= 0 ? this.hideRechargeTip() : e < t && (this._tableData.getRechargeTipShowed() || (this._isRechargeTipOn = !0));
}
}
onMsgActPowerNew(t) {
var e;
if (t._zimo_card_count > 0 || t._hu_card > 0) {
let i = this.getImpl(_.comm.lobby.IUserManager).userScore;
const s = this._tableData.getSelf();
s && s.isVaildPlayer() && (i = s.sr);
const o = (null === (e = this._tableData.getBaseInfo()) || void 0 === e ? void 0 : e._base_score) || 0;
if (o > 0) {
let e = 0;
if (t._hu_card > 0) e = t._hu_card_mult; else if (t._zimo_card_count > 0) for (let i = 0; i < t._zimo_card_count; i++) t._zimo_card_mult[i] > e && (e = t._zimo_card_mult[i]);
const i = this._tableData.getWinLimitMult();
i < e && i > 0 && (e = i);
this._tableData.setSelfMaxCanWin(e * o);
}
i < this._tableData.getSelfMaxCanWin() && (this._tableData.getRechargeTipShowed() || this.showRechargeTip());
}
}
onMsgTotalResult() {
console.log("GamePlayer onMsgTotalResult");
this.view.KW_CompRich1.C_AddRich.setSelectedIndex(0);
this.hideRechargeTip();
}
onMsgRechargeState(t) {
const e = this._tableData.seatToLocal(t._seat);
console.log(`GamePlayer onMsgRechargeState seat:${e}, flag:${t._flag}`);
this.view["KW_AniRecharging" + e].visible = t._flag == d.GLProtocol.msgRechargeState.eFlag.FLAG_START;
}
onChangeSeat() {
this.resetUI();
}
onGameStart() {
this.showChargingSigns(!1, n.MAX_PLAYER);
for (let t = 0; t < n.MAX_PLAYER; t++) this.view["KW_CompGiveup" + t].visible = !1;
}
onLobbyUpdateSr(t) {
console.log("onLobbyUpdateSr sr:", t);
const e = this.getImpl(l.default).getSelf();
if (e && e.numid) ; else {
const t = this.getImpl(_.comm.lobby.IUserManager)._userManager;
this.updateSR(n.SELF_LOCAL_SEAT, t.userScore);
}
}
updateSetSelfSR(t) {
t = t || this.getImpl(_.comm.lobby.IUserManager).userScore;
console.log("updateSetSelfSR  start,sr=", t);
const e = this._tableData.getSelf();
if (e && e.isVaildPlayer()) {
console.log("updateSetSelfSR mid,sr=", t);
this._tableData.setSelfSR(t);
}
console.log("updateSetSelfSR end,sr=", t);
const i = this._tableData.gameLogicData.getBigAwardData();
if (i && i._award_val > 0) {
t -= i._award_val;
console.log("updateSetSelfSR end bigAwardData,sr=", t, ",_award_val=", i._award_val);
}
this.updateSR(n.SELF_LOCAL_SEAT, t);
}
updateSelfSR() {
let t = this.getImpl(_.comm.lobby.IUserManager).userScore;
const e = this._tableData.getSelf();
e && e.isVaildPlayer() && (t = e.sr);
console.log("updateSelfSR ,sr=", t);
const i = this._tableData.gameLogicData.getBigAwardData();
if (i && i._award_val > 0) {
t -= i._award_val;
console.log("updateSetSelfSR end bigAwardData,sr=", t, ",_award_val=", i._award_val);
}
this.updateSR(n.SELF_LOCAL_SEAT, t);
}
updateSR(t, e) {
console.log("updateSR localseat=", t, ",sr=", e);
if (this._timeID[t]) {
clearTimeout(this._timeID[t]);
this._timeID[t] = null;
}
this._tableData.getGameStateOld()._state === n.ENUM_GAME_STATE.GS_AFTER_HU ? this._timeID[t] = setTimeout(() => {
this.view && this.view["KW_CompRich" + t] && this.view["KW_CompRich" + t].KW_TextRich && this.setSr(t, e);
}, 2e3) : this.setSr(t, e);
}
onPlayerHead(t) {
var e, i;
const s = this._tableData.getPlayerByLocalSeat(t);
let o = null;
s && s.isVaildPlayer() && (o = this._tableData.getPlayerHeadInfo(_.comm.Util.MAKEUSERID(Number(s.areaid), Number(s.numid))));
if (t == n.SELF_LOCAL_SEAT) {
const t = _.comm.g.areaConfig.areaID, e = this.getImpl(_.comm.lobby.IUserManager).numid;
o = this._tableData.getPlayerHeadInfo(_.comm.Util.MAKEUSERID(Number(t), Number(e)));
}
const a = this.view["KW_CompHead" + t].KW_CompHead, l = this._tableData.getPlayerSex(t);
if (a) if (o && o.headid) {
const t = _.comm.HeadController.getUserHeadPath(l, o.headid, o.headUrl);
a.url = t;
} else if (t == n.SELF_LOCAL_SEAT) {
const t = null === (i = (e = this.getImpl(_.comm.lobby.IUserManager)).getSelfHeadPath) || void 0 === i ? void 0 : i.call(e);
t && (a.url = t);
} else a.url = 49 == l ? "ui://_Common/main_img_face_1" : "ui://_Common/main_img_face_0";
}
onMsgPlayerEnter(t) {
t.seat, n.SELF_LOCAL_SEAT;
}
onMsgPlayerLeave(t) {
var e;
console.log("onMsgPlayerInfo 玩家离开", JSON.stringify(t));
const i = this._tableData.seatToLocal(t._seat);
i != n.SELF_LOCAL_SEAT && (null === (e = this._tableData.getGameState()) || void 0 === e ? void 0 : e._state) == n.ENUM_GAME_STATE.GS_IDLE && (this.view["KW_Player" + i].visible = !1);
}
onMsgPlayerInfo(t) {
const e = this._tableData.seatToLocal(t._seat);
console.log("onMsgPlayerInfo 玩家进入", JSON.stringify(t), " local=", e);
this.view["KW_Player" + e].visible = !0;
this.onPlayerHead(e);
this._tableData.getGameStateOld()._state === n.ENUM_GAME_STATE.GS_GOLD_BUFF ? setTimeout(() => {
this.onPlayerHeadJzz(e, t._jzz_cnt);
}, 1e3) : this.onPlayerHeadJzz(e, t._jzz_cnt);
t._leave_flag == n.ENUM_LEAVEFLAG.LF_Give && (this.view["KW_CompGiveup" + e].visible = !0);
}
onMsgBaseInfo() {
var t;
this.view["KW_CompStarCount" + n.SELF_LOCAL_SEAT].visible = 1 == (null === (t = this._tableData.getBaseInfo()) || void 0 === t ? void 0 : t._is_star_combo_on);
}
showMingRenTangTitleAni(t) {
if (!this._tableData.getTitleType(t)) return;
const i = this._tableData.getTitleType(t);
if (i <= 0) return;
const s = this.view["KW_Ani_MingRenTang" + t];
this._mingRenTangTitlePos[t] || (this._mingRenTangTitlePos[t] = {
x: s.x,
y: s.y
});
s.visible = !0;
s.setPosition(this._mingRenTangTitlePos[t].x, this._mingRenTangTitlePos[t].y);
s.scaleX = 1;
s.scaleY = 1;
s.C_ShowAni.setSelectedIndex(1);
s.KW_Ani.visible = !0;
_.gf.sp.onSpineLoaded(s.KW_Ani, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, "animation" + i, !0);
});
this.view["Ani_MingRenTangTitle" + t].setValue("endPos", this.view["KW_CompHead" + t].x, this.view["KW_CompHead" + t].y);
this.view["Ani_MingRenTangTitle" + t].setValue("startPos", this._mingRenTangTitlePos[t].x, this._mingRenTangTitlePos[t].y);
e.GTween.delayedCall(1.5).setTarget(s).onComplete(() => {
this.view["Ani_MingRenTangTitle" + t].play();
});
}
onPlayerHeadJzz(t, e) {
const i = this.view["KW_CompHead" + t];
if (e > 0) {
i.comJZZ.setSelectedIndex(1);
i.KW_TextJZZ.text = `x${e}`;
if (this._giveupIng[t]) return;
i.KW_EffJZZ.url = "ui://Game_K7Star_Player/Jzz_tx";
_.gf.sp.onSpineLoaded(i.KW_EffJZZ, t => {
t.premultipliedAlpha = !1;
t.loop = !0;
t.animation = "animation2";
t.setCompleteListener(() => {});
});
} else i.comJZZ.setSelectedIndex(0);
}
onUpdateSR(t) {
const e = this._tableData.getGameState(), i = this._tableData.getPlayerByLocalSeat(n.SELF_LOCAL_SEAT);
if (e._state == n.ENUM_GAME_STATE.GS_IDLE || e._state == n.ENUM_GAME_STATE.GS_TOTAL_RESULT || i.leaveFlag != n.ENUM_LEAVEFLAG.LF_None) if (this._tableData.gameLogicData.isBigAwardOn()) console.log("isBigAwardOn not update sr:", t); else {
console.log("onUpdateSR:", t);
this.getImpl(l.default).setSelfSR(t);
this.updateSR(n.SELF_LOCAL_SEAT, t);
}
}
showTrustSign(t, e) {
this.view["KW_CompHead" + t].KW_CompTrust.visible = e;
}
onMsgTimer(t) {
t._type != n.ENUM_GAME_STATE.GS_BROKEN || t._seat;
}
onMsgGameState(t) {
t._state != n.ENUM_GAME_STATE.GS_BROKEN && t._state != n.ENUM_GAME_STATE.GS_WAIT && this.showChargingSigns(!1, n.MAX_PLAYER);
}
showChargingSigns(t, e, i = 30) {
if (e != n.MAX_PLAYER) {
this.view["KW_TextCharging" + e].visible = t;
if (t) {
let t = "充值中";
this.getImpl(_.comm.IHost).isTiShen() && (t = "");
this.view["KW_TextCharging" + e].text = `${t}（${i}）`;
if (this._timer[e]) {
this.unschedule(this._timer[e]);
this._timer[e] = null;
}
this._timer[e] = () => {
if (i-- > 0) this.view["KW_TextCharging" + e].text = `${t}（${i}）`; else if (this._timer[e]) {
this.unschedule(this._timer[e]);
this._timer[e] = null;
}
};
this.schedule(this._timer[e], 1);
} else if (this._timer[e]) {
this.unschedule(this._timer[e]);
this._timer[e] = null;
}
} else for (let t = 0; t < n.MAX_PLAYER; t++) this.showChargingSigns(!1, t);
}
onMsgGiveUp(t) {
const e = this._tableData.seatToLocal(t._seat);
this.showChargingSigns(!1, e);
if (t._flag == d.GLProtocol.msgGiveUp.eFlag.FLAG_GIVE_UP) {
this.view["KW_CompGiveup" + e].visible = !0;
if (e == n.SELF_LOCAL_SEAT) {
this.getImpl(_.gf.IViewPlugin).closeView("GameTrust");
this.dispatch("showBtnSuggest" + a.GAME_ID, !1);
}
} else t._flag == d.GLProtocol.msgGiveUp.eFlag.FLAG_GO_ON && this.showAniZJJ(e, t._jzz_cnt);
e == n.SELF_LOCAL_SEAT && t._flag == d.GLProtocol.msgGiveUp.eFlag.FLAG_GIVE_UP && this._tableData.setPlayerDataLeaveFlag(n.SELF_LOCAL_SEAT, n.ENUM_LEAVEFLAG.LF_Give);
}
onMsgNobilityResult(t) {
for (let e = 0; e < n.MAX_PLAYER; e++) t._flag[e] > 0 && this.showNobilityNoPayOrDouble(t._flag[e], this._tableData.seatToLocal(e), !0);
}
showNobilityNoPayOrDouble(t, e, i) {
if (e != n.MAX_PLAYER) {
this.view["KW_AniNoPay" + e].visible = i;
if (i) {
this.view["KW_AniNoPay" + e].url = "ui://_Common/fbms";
_.gf.sp.onSpineLoaded(this.view["KW_AniNoPay" + e], e => {
e.premultipliedAlpha = !1;
e.loop = !1;
e.animation = "animation" + t;
});
}
} else for (let e = 0; e < n.MAX_PLAYER; e++) this.showNobilityNoPayOrDouble(t, e, i);
}
onMsgHeadProp(t) {
console.log("onMsgHeadPropNew:", t.prop_id, this._tableData.seatToLocal(t.seat));
}
updateDressProp(t, e, i) {
const s = this._tableData.getPlayerByNumid(t, e);
if (!s || !s.isVaildPlayer()) return;
const o = _.comm.Util.MAKEUSERID(t, e), a = this._tableData.getDressProp(o, i);
i == _.comm.DressPropType.headKuang && (_.comm.getPropDressInfo(a) ? this.showHeadBox(s.localSeat, a, !0) : this.showHeadBox(s.localSeat, 0, !1));
}
showRoomEffect() {
const t = this.getImpl(_.comm.lobby.ICommonActModule).getCommonGameConfig(a.GAME_ID, "CCK_NOBILITY_ROOM_EFFECT") || [], e = [], i = [], s = [];
for (let o = 0; o < n.MAX_PLAYER; o++) {
const a = this._tableData.getPlayerByLocalSeat(o);
if (!a.vipFlag || 1 != a.vipFlag || a.vipid <= 0) continue;
const n = t.find(t => t.id === a.vipid);
e.push(n.inRoomEffect);
const l = this.view["KW_CompHead" + o];
i.push(l.localToGlobal());
s.push(this.getDirectStr(o));
}
this.getImpl(_.comm.lobby.INobilityManager).showRoomEffect(a.GAME_ID, e, i, s);
}
getDirectStr(t) {
let e = "";
t == n.SELF_LOCAL_SEAT ? e = "SELF" : t == n.PlayerEnum.PLAYER_0 ? e = "RIGHT" : t == n.PlayerEnum.PLAYER_1 ? e = "TOP" : t == n.PlayerEnum.PLAYER_2 ? e = "LEFT" : t == n.PlayerEnum.PLAYER_3 && (e = "BOTTOM");
return e;
}
showHeadBox(t, e, i) {
this.view["KW_CompHead" + t].KW_CompHeadBox.visible = i;
if (i) {
const i = _.comm.getPropDressInfo(e);
this.view["KW_CompHead" + t].KW_CompHeadBox.url = i.url;
_.gf.sp.onSpineLoaded(this.view["KW_CompHead" + t].KW_CompHeadBox, t => {
t.setAnimation(0, i.ani, !0);
});
}
}
showAniZJJ(t, e) {
const i = this.view["KW_CompHead" + t];
i.comJZZ.setSelectedIndex(1);
this._giveupIng[t] = !0;
if (e > 0) {
i.KW_EffJZZ.url = "ui://Game_K7Star_Player/Jzz_tx";
_.gf.sp.onSpineLoaded(i.KW_EffJZZ, e => {
e.premultipliedAlpha = !1;
e.loop = !1;
e.setAnimation(0, "animation1", !1);
e.addAnimation(0, "animation2", !0);
e.setCompleteListener(e => {
"animation1" == e.animation.name && (this._giveupIng[t] = !1);
});
});
i.KW_TextJZZ.text = `x${e}`;
} else {
i.KW_TextJZZ.text = "";
i.KW_EffJZZ.url = "ui://Game_K7Star_Player/Jzz_tx";
_.gf.sp.onSpineLoaded(i.KW_EffJZZ, e => {
e.premultipliedAlpha = !1;
e.loop = !1;
e.setAnimation(0, "animation3", !1);
e.setCompleteListener(() => {
this._giveupIng[t] = !1;
i.comJZZ.setSelectedIndex(0);
});
});
}
}
onMsgNoLimitInfo(t) {
if (0 === t._no_limit_mult && 0 === t._no_limit_can_win) return;
const e = this._tableData.seatToLocal(t._seat), i = this.view["KW_CompPF" + e], s = this._tableData.getReconnect();
s._flag !== d.GLProtocol.msgReconnect.eFlag.FLAG_START && s._flag !== d.GLProtocol.msgReconnect.eFlag.FLAG_START_WITH_PEAK || (i.KW_textPF.text = `x${t._no_limit_mult}`);
i.KW_textInfo4.text = `X${t._no_limit_mult}`;
i.KW_textInfo3.text = `${_.comm.StringUtils.dealBigNumEx5(t._no_limit_can_win)}`;
}
onMsgTowerCards(t) {
if (t._flag != d.GLProtocol.msgTowerCards.eFlag.FLAG_RELINK) return;
if (t._no_limit_mult && (0 === t._no_limit_mult || 1 === t._no_limit_mult)) return;
const e = this._tableData.seatToLocal(t._seat);
this.view["KW_CompPF" + e].visible = !0;
}
onMsgNoLimitInfoAni(t) {
if (0 === t._no_limit_mult || 1 === t._no_limit_mult) return;
const e = this._tableData.seatToLocal(t._seat), i = this.view["KW_CompPF" + e];
i.visible = !0;
const s = this._tableData.getNoLimitInfo(e);
if (null != s && 0 !== s._no_limit_mult && 1 !== s._no_limit_mult) {
i.KW_textPF.text = `x${s._no_limit_mult}`;
e == n.SELF_LOCAL_SEAT ? _.gf.sp.onSpineLoaded(i.KW_AniPF, t => {
t.setAnimation(0, "animation2", !1);
t.addAnimation(0, "animation1", !0);
}) : _.gf.sp.onSpineLoaded(i.KW_AniPF, t => {
t.addAnimation(0, "animation1", !0);
});
}
}
onMsgPlayerLeaveSpecil(t) {
if (this.view["KW_ImgLeaveEarlyTip" + t]) {
this.view["KW_ImgLeaveEarlyTip" + t].visible = !0;
e.GTween.kill(this.view["KW_ImgLeaveEarlyTip" + t]);
e.GTween.delayedCall(2).setTarget(this.view["KW_ImgLeaveEarlyTip" + t]).onComplete(() => {
this.view["KW_ImgLeaveEarlyTip" + t].visible = !1;
});
}
}
onShowPlayerLeaveHead(t) {
const e = this.view["KW_CompHead" + t];
if (e) {
e.C_ShowLeaveEarly.setSelectedIndex(1);
_.gf.sp.onSpineLoaded(e.KW_AniLing, t => {
t.setAnimation(0, "animation3", !0);
});
}
}
onShowLightAni(t, e = !1) {
const i = this.view["KW_CompRich" + t];
if (i && i.KW_AniLight) {
i.KW_AniLight.visible = e;
e && _.gf.sp.onSpineLoaded(i.KW_AniLight, t => {
t.setAnimation(0, "animation", !1);
t.setCompleteListener(() => {
i && i.KW_AniLight && (i.KW_AniLight.visible = !1);
});
});
}
}
onShowHeadLightAni(t, e = !1) {
const i = this.view["KW_CompHead" + t];
if (i && i.KW_AniHeadLight) {
i.KW_AniHeadLight.visible = e;
e && _.gf.sp.onSpineLoaded(i.KW_AniHeadLight, t => {
t.setAnimation(0, "animation", !1);
t.setCompleteListener(() => {
i && i.KW_AniHeadLight && (i.KW_AniHeadLight.visible = !1);
});
});
}
}
showStarUpMoveAniByCardGLocalPos(t, e) {
const i = this._tableData.getStarCount(t), s = this.view[`KW_CompStarCount${t}`], o = t == n.SELF_LOCAL_SEAT, l = s.KW_ShowAni;
s.visible = t == n.SELF_LOCAL_SEAT || i > 0;
if (i > 0) {
let n;
n = o ? s[`KW_loadStar_${i}`].localToGlobal() : s.localToGlobal();
this.dispatch("showStarUpMoveAni" + a.GAME_ID, t, e, n, () => {
l.visible = !0;
_.gf.sp.onSpineLoaded(l, e => {
e.loop = !1;
e.animation = "animation";
e.setCompleteListener(() => {
l.visible = !1;
});
e.setEventListener((e, i) => {
var a;
if ("add_img" == i.data.name) {
this.updateStarCountUI(t);
o || null === (a = s.KW_Ani) || void 0 === a || a.play();
}
});
});
});
} else this.updateStarCountUI(t);
}
onMsgUpdateStarCountUI(t = !1) {
if (t) for (let t = 0; t < n.MAX_PLAYER; t++) this.updateStarCountUI(t);
}
updateStarCountUI(t) {
const e = this._tableData.getStarCount(t), i = this.view[`KW_CompStarCount${t}`];
i.visible = t == n.SELF_LOCAL_SEAT || e > 0;
i.C_StarCount.selectedIndex = e;
let s = 1;
e >= 5 && e < 7 ? s = 2 : 7 == e && (s = 3);
let o = "animation%d_%d";
o = t == n.SELF_LOCAL_SEAT ? _.comm.Util.format(o, 1, s) : _.comm.Util.format(o, 2, s);
_.gf.sp.onSpineLoaded(i.KW_LoopAni, t => {
t.loop = !0;
t.animation = o;
});
}
};
h([ _.gf.listen("showRechargeTip" + a.GAME_ID) ], c.prototype, "showRechargeTip", null);
h([ _.gf.listen("hideRechargeTip" + a.GAME_ID) ], c.prototype, "hideRechargeTip", null);
h([ _.gf.listen("onMsgActPowerNew" + a.GAME_ID) ], c.prototype, "onMsgActPowerNew", null);
h([ _.gf.listen("onMsgTotalResult" + a.GAME_ID) ], c.prototype, "onMsgTotalResult", null);
h([ _.gf.listen("onMsgRechargeState" + a.GAME_ID) ], c.prototype, "onMsgRechargeState", null);
h([ _.gf.listen("onChangeSeat" + a.GAME_ID) ], c.prototype, "onChangeSeat", null);
h([ _.gf.listen("onGameStart" + a.GAME_ID) ], c.prototype, "onGameStart", null);
h([ _.gf.listen(_.comm.Events.EventRespPlayerScore) ], c.prototype, "onLobbyUpdateSr", null);
h([ _.gf.listen("updateSetSelfSR" + a.GAME_ID) ], c.prototype, "updateSetSelfSR", null);
h([ _.gf.listen("updateSelfSR" + a.GAME_ID) ], c.prototype, "updateSelfSR", null);
h([ _.gf.listen("updateSR" + a.GAME_ID) ], c.prototype, "updateSR", null);
h([ _.gf.listen("KW_updateHead") ], c.prototype, "onPlayerHead", null);
h([ _.gf.listen("onMsgPlayerEnter" + a.GAME_ID) ], c.prototype, "onMsgPlayerEnter", null);
h([ _.gf.listen("onMsgPlayerLeave" + a.GAME_ID) ], c.prototype, "onMsgPlayerLeave", null);
h([ _.gf.listen("onMsgPlayerInfo" + a.GAME_ID) ], c.prototype, "onMsgPlayerInfo", null);
h([ _.gf.listen("onMsgBaseInfo" + a.GAME_ID) ], c.prototype, "onMsgBaseInfo", null);
h([ _.gf.listen("showMingRenTangTitleAni" + a.GAME_ID) ], c.prototype, "showMingRenTangTitleAni", null);
h([ _.gf.listen(_.comm.RoomToGameEventName.EVENT_RTG_UPDATE_SR) ], c.prototype, "onUpdateSR", null);
h([ _.gf.listen("showTrustSign" + a.GAME_ID) ], c.prototype, "showTrustSign", null);
h([ _.gf.listen("onMsgTimer" + a.GAME_ID) ], c.prototype, "onMsgTimer", null);
h([ _.gf.listen("onMsgGameState" + a.GAME_ID) ], c.prototype, "onMsgGameState", null);
h([ _.gf.listen("showChargingSigns" + a.GAME_ID) ], c.prototype, "showChargingSigns", null);
h([ _.gf.listen("onMsgGiveUp" + a.GAME_ID) ], c.prototype, "onMsgGiveUp", null);
h([ _.gf.listen("onMsgNobilityResult" + a.GAME_ID) ], c.prototype, "onMsgNobilityResult", null);
h([ _.gf.listen("showNobilityNoPayOrDouble" + a.GAME_ID) ], c.prototype, "showNobilityNoPayOrDouble", null);
h([ _.gf.listen("onMsgHeadProp" + a.GAME_ID) ], c.prototype, "onMsgHeadProp", null);
h([ _.gf.listen("KW_updateDressProp" + a.GAME_ID) ], c.prototype, "updateDressProp", null);
h([ _.gf.listen("showRoomEffect" + a.GAME_ID) ], c.prototype, "showRoomEffect", null);
h([ _.gf.listen("onMsgNoLimitInfo" + a.GAME_ID) ], c.prototype, "onMsgNoLimitInfo", null);
h([ _.gf.listen("onMsgTowerCards" + a.GAME_ID) ], c.prototype, "onMsgTowerCards", null);
h([ _.gf.listen("onMsgNoLimitInfoAni" + a.GAME_ID) ], c.prototype, "onMsgNoLimitInfoAni", null);
h([ _.gf.listen("onMsgPlayerLeaveSpecil" + a.GAME_ID) ], c.prototype, "onMsgPlayerLeaveSpecil", null);
h([ _.gf.listen("onShowPlayerLeaveHead" + a.GAME_ID) ], c.prototype, "onShowPlayerLeaveHead", null);
h([ _.gf.listen("onShowLightAni" + a.GAME_ID) ], c.prototype, "onShowLightAni", null);
h([ _.gf.listen("onShowHeadLightAni" + a.GAME_ID) ], c.prototype, "onShowHeadLightAni", null);
h([ _.gf.listen("showStarUpMoveAniByCardGLocalPos" + a.GAME_ID) ], c.prototype, "showStarUpMoveAniByCardGLocalPos", null);
h([ _.gf.listen("onMsgUpdateStarCountUI" + a.GAME_ID) ], c.prototype, "onMsgUpdateStarCountUI", null);
const g = c = h([ _.gf.controller({
name: "GamePlayer",
module: "game_k7star",
fguiObject: "View",
layer: _.gf.ViewLayer.Base,
fguiPackage: [ "Game_K7Star_Common", "Game_K7Star_Player" ],
cachable: !0,
sortingOrder: n.FGUI_ORDER.GAME_PLAYER
}) ], c);
},
"./bin/ui/main/GamePlayerInfo.js": (t, i, s) => {
s.r(i);
s.d(i, {
default: () => r
});
var o = s("./bin/config/GameConfig.js"), a = s("./bin/config/GameDefine.js"), n = s("./bin/data/TableData.js"), l = s("./bin/gf.js");
let _ = class extends l.gf.mvc.UIController {
constructor() {
super(...arguments);
this.onBtnMsgClose = () => {
this.close();
};
}
onUIBinded() {
this._tableData = this.getImpl(n.default);
this.addClick(this.view.KW_BtnClose, this.onBtnMsgClose);
this.addClick(this.view.KW_Mask, this.onBtnMsgClose);
}
onUnUIBinded() {}
initUI(t, e) {
if (t) {
this._serverSeat = t.sitorder;
this.view.KW_TextName.text = l.comm.StringUtils.dealNickName(t.nickname || "", 12);
this.view.KW_TextSr.text = l.comm.StringUtils.dealBigNumEx5(t.sr || 0);
const i = t.sex || 49, s = 49 == i ? 0 : 1;
this.view.showSex.setSelectedIndex(s);
const o = t.win + t.lose + t.draw + t.escape;
this.view.KW_TextGameCount.text = `${o}`;
const n = l.comm.Util.MAKEUSERID(Number(t.areaid), Number(t.numid)), _ = this._tableData.getHeadBox(n);
l.comm.getPropDressInfo(_) ? this.showHeadBox(_, !0) : this.showHeadBox(0, !1);
const r = this._tableData.getPlayerHeadInfo(n);
if (r) {
const t = l.comm.HeadController.getUserHeadPath(i, r.headid, r.headUrl);
this.view.KW_Head.url = t;
} else this.view.KW_Head.url = 49 == i ? "ui://_Common/main_img_face_1" : "ui://_Common/main_img_face_0";
if (1 == t.vipFlag) {
this.view.KW_CompVip.url = l.comm.getNobilityUrl(t.vipid);
this.view.KW_CompVip.visible = !0;
} else this.view.KW_CompVip.visible = !1;
t.localSeat == a.SELF_LOCAL_SEAT ? this.view.KW_TextNum.text = `${t.numid}` : this.view.KW_TextNum.text = `${this._tableData.getNumidHeadRandom(t.numid)}${t.numid}`;
if (t.localSeat != a.SELF_LOCAL_SEAT && this.initProp()) {
this.view.player.setSelectedPage("other");
this.updateProp();
} else this.view.player.setSelectedPage("self");
const d = this.getShowPosition(e, t.localSeat);
this.view.KW_Node.x = d.x;
this.view.KW_Node.y = d.y;
const h = this._tableData.getTitleType(t.localSeat);
if (h) {
this.view.KW_MingRenTang_Title.visible = !0;
this.view.KW_MingRenTang_Title.C_Type.setSelectedIndex(h);
this.view.KW_MingRenTang_Title.C_ShowAni.setSelectedIndex(1);
this.view.KW_MingRenTang_Title.KW_Ani.visible = !0;
l.gf.sp.onSpineLoaded(this.view.KW_MingRenTang_Title.KW_Ani, t => {
t.premultipliedAlpha = !1;
t.setAnimation(0, "animation" + h, !0);
});
h >= 4 && h <= 5 && this.view.KW_MingRenTang_Title["KW_RankNo_" + h] && (this.view.KW_MingRenTang_Title["KW_RankNo_" + h].text = `第${this._tableData.getTitleRank(t.localSeat)}名`);
} else this.view.KW_MingRenTang_Title.visible = !1;
} else this.close();
}
initProp() {
const t = this.getImpl(l.comm.lobby.ICommonActModule).getCommonGameConfig(o.GAME_ID, "CCK_GAME_THROW_PROP"), e = t.length;
if (0 == e) return !1;
for (let i = 0; i < e; i++) {
let e = null;
e = i >= this.view.KW_List.numChildren ? this.view.KW_List.addItemFromPool() : this.view.KW_List.getChildAt(i);
const s = l.comm.getPropInfo(t[i].propid);
e.time10.setSelectedIndex((null == s ? void 0 : s.name.includes("10")) ? 1 : 0);
e.icon = null == s ? void 0 : s.url;
this.addClick(e, () => {
this.clickProp(t[i]);
});
}
return !0;
}
updateProp() {
var t, e;
const i = this.getImpl(l.comm.lobby.ICommonActModule).getCommonGameConfig(o.GAME_ID, "CCK_GAME_THROW_PROP"), s = i.length;
if (0 != s) for (let o = 0; o < s; o++) {
const s = this.view.KW_List.getChildAt(o);
if (i[o].minNobility > 0 && (i[o].minNobility > this.getImpl(l.comm.lobby.INobilityData).getlevel() || this.getImpl(l.comm.lobby.INobilityData).getEndTime() < Math.floor(new Date().getTime() / 1e3))) {
s.titletype.setSelectedPage("text");
s.title = `爵位${i[o].minNobility}`;
s.C_ShowLock.setSelectedIndex(1);
} else {
if ((null === (t = i[o]) || void 0 === t ? void 0 : t.price) > 0) {
s.titletype.setSelectedPage("price");
s.title = null === (e = i[o]) || void 0 === e ? void 0 : e.price.toString();
} else {
s.titletype.setSelectedPage("text");
s.title = "免费";
}
s.C_ShowLock.setSelectedIndex(0);
}
}
}
clickProp(t) {
if (t.minNobility > 0 && this.getImpl(l.comm.lobby.INobilityData).getEndTime() < Math.floor(new Date().getTime() / 1e3)) {
this.getImpl(l.comm.ICommonDlgs).showWeakHint("爵位未激活！");
return;
}
if (t.minNobility > 0 && t.minNobility > this.getImpl(l.comm.lobby.INobilityData).getlevel()) {
this.getImpl(l.comm.ICommonDlgs).showWeakHint("爵位等级不足！");
return;
}
const e = this.getImpl(l.comm.lobby.IUserManager).hostSr;
if (t.price > 0 && t.price > e) this.getImpl(l.comm.ICommonDlgs).showWeakHint(`${this.getImpl(l.comm.IHost).getSrName()}不足！`); else if (this._tableData.isInGame()) {
t.price > 0 && this.getImpl(l.comm.lobby.IPlayerGameDataManager).reqCostHostSr(t.price, null, t.productid || 0, o.GAME_ID);
this.dispatch("throwProp" + o.GAME_ID, t.propid, this._serverSeat);
this.close();
} else this.getImpl(l.comm.ICommonDlgs).showWeakHint("请游戏开始后再操作~");
}
onDestroy() {}
getShowPosition(t, i) {
const s = e.GRoot.inst.globalToLocal(t.x, t.y), o = this.view.KW_ImgBg.height, n = this.view.KW_ImgBg.width, l = s;
if (a.PlayerDirect[i] == a.Direct.SELF) {
l.x = s.x + 80;
l.y = s.y - o - 60;
} else if (a.PlayerDirect[i] == a.Direct.LEFT) {
l.x = s.x - n - 80;
l.y = s.y - o / 2 + 20;
} else if (a.PlayerDirect[i] == a.Direct.RIGHT) {
l.x = s.x + 80;
l.y = s.y - o / 2 + 20;
} else if (a.PlayerDirect[i] == a.Direct.BOTTOM) {
l.x = s.x - n / 2 - 20;
l.y = s.y + 60;
}
return l;
}
showHeadBox(t, e) {
this.view.KW_HeadBox.visible = e;
if (e) {
const e = l.comm.getPropDressInfo(t);
this.view.KW_HeadBox.url = e.url;
l.gf.sp.onSpineLoaded(this.view.KW_HeadBox, t => {
t.setAnimation(0, e.ani, !0);
});
}
}
};
const r = _ = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
}([ l.gf.controller({
name: "GamePlayerInfo",
module: "game_k7star",
fguiObject: "View",
layer: l.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_PlayerInfo" ],
cachable: !0,
sortingOrder: a.FGUI_ORDER.GAME_POP
}) ], _);
},
"./bin/ui/main/GameResult.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => A
});
var s = i("./bin/config/CardType.js"), a = i("./bin/config/GameConfig.js"), n = i("./bin/config/GameDefine.js"), l = i("./bin/config/SoundConfig.js"), _ = i("./bin/data/TableData.js"), r = i("./bin/gameLogic/CardRuleLogic.js"), d = i("./bin/gf.js"), h = i("./bin/logic/actModules/data/GameActData.js"), c = i("./bin/logic/actModules/GameActModule.js"), g = i("./bin/manager/activeManager.js"), u = i("./bin/manager/ElevatingManager.js"), m = i("./bin/ui/component/CardComb.js"), C = i("./bin/ui/component/MingRenTangBtn.js"), p = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let f = class extends d.gf.mvc.UIController {
constructor() {
super(...arguments);
this._isGuide = !1;
this._showNobilityTip = !1;
this.countDownNum = 0;
this.dealCountDown = () => {
if (this.node) if (--this.countDownNum < 0) {
this.unschedule(this.dealCountDown);
this.view.KW_CompActTime.visible = !1;
} else this.view.KW_CompActTime.KW_TextCountDownNum.text = `${this.secToTime(this.countDownNum)}`; else this.unschedule(this.dealCountDown);
};
}
onUIBinded() {
this._gameActData = this.getImpl(h.default);
this._tableData = this.getImpl(_.default);
this._iSound = this.getImpl(d.gf.ISound);
this.addClick(this.view.KW_BtnExit, this.onBtnExit);
this.addClick(this.view.KW_BtnContinue, this.onBtnContinue);
this.addClick(this.view.KW_BtnLookCardType, this.onBtnLookCardType);
this.addClick(this.view.KW_BtnHuCardInfo, this.onBtnHuCardInfo);
this.addClick(this.view.KW_BtnYPBack, this.onBtnYPBack);
this.addClick(this.view.KW_BTN_TURNTABLE_ICON, this.onBtnTurntable);
this._cardLogic = new r.default();
this._recordList = this.view.KW_HuCardList;
this._recordList.itemRenderer = this.updateRecordItem.bind(this);
this._recordList.setVirtual();
}
onUnUIBinded() {}
initUI(t = !1) {
var e;
if (!t) return;
this.view.C_IsMiniGame.setSelectedIndex(this.getImpl(d.comm.IHost).getMiniGameSelectIndex());
console.log("onShowBtnYPBack init:", this._tableData.getShowYPBackBtn());
this.onShowBtnYPBack(this._tableData.getShowYPBackBtn());
this._isGuide = this.getImpl(d.comm.lobby.IJoinRoomModule).isGuide();
this.view.KW_BtnLookCardType.visible = !this._isGuide;
this.view.KW_HandGuild.visible = this._isGuide;
this._isGuide && this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newplayer, {
newplayer_ui: "2"
});
this.view.C_ShowGuide.setSelectedIndex(0);
const i = this._tableData.getTotalResult();
this.view.KW_HuCardMax.visible = !1;
this.view.KW_btnHighGame.visible = !1;
this.view.button.setSelectedPage("none");
this.view.C_List.setSelectedIndex(0);
this.view.KW_CompActTime.visible = !1;
this.showNobilityNoPayOrDouble(0, n.MAX_PLAYER, !1);
this.view.KW_CompPlayer_1.visible = !1;
this.view.KW_NodeOther.visible = !1;
this.view.KW_CompPlayer_1.KW_Text.visible = !1;
let s = 0, a = n.ENUM_PLAYER_WINLOSE.LOSE;
for (let t = 0; t < i._score.length; t++) s < i._score[t] && (s = i._score[t]);
this._showNobilityTip = !1;
const _ = this._tableData.getNobilityResult();
for (let t = 0; t < n.MAX_PLAYER; t++) {
const e = this._tableData.seatToLocal(t), o = this._tableData.getPlayerByLocalSeat(e);
let l = null;
(l = (n.SELF_LOCAL_SEAT, this.view["KW_CompPlayer_" + e])).KW_TextName.text = d.comm.StringUtils.dealNickNameShort(o.nickname || "", 8);
const r = this.getWinLostDraw(i._score[t]);
l.winlose.setSelectedIndex(r);
l.KW_CompBigWin.visible = s == i._score[t];
l.KW_CompBankrupt.visible = this._tableData.getBankrupt(e);
l.C_seat.selectedIndex = e;
l.KW_CompLine.visible = !1;
let h = i._score[t] || 0;
_ && _._flag[t] == n.NobilityFlag.NFLAG_DB_PAY && (h = _._winlost[t]);
h >= 0 ? l.KW_TextWin.text = this.dealScore(h) : l.KW_TextLose.text = this.dealScore(h);
e == n.SELF_LOCAL_SEAT && h > 0 && (a = r);
l.visible = !1;
this.onPlayerHead(e);
}
const r = this._cardLogic.sortCard(i._hand_cards, n.CARD_SORT_TYPE.SORT_BY_VALUE, !0), h = this._tableData.getMultConfig();
if (i._hu_car.length > 0) {
let t = 0, e = 0;
for (let s = 0; s < i._ct.length; s++) {
const o = h[i._ct[s]];
if (o > e) {
e = o;
t = s;
}
}
this.view.KW_CompCardType.text = this.getCardTypeUrl(i._ct[t]);
this.view.KW_CompCardType.visible = !0;
const s = [ ...r, i._hu_car[t] ];
for (let t = 0; t < 8; t++) {
const e = this.view["KW_HuCard" + t];
e.visible = !0;
m.default.setCard(e, s[t]);
}
if (i._ct.length > 1) {
this._detailInfo = [];
for (let e = 0; e < i._ct.length; e++) {
if (e == t) continue;
const s = [ ...r, i._hu_car[e] ], o = {
type: i._ct[e],
cards: s
};
this._detailInfo.push(o);
}
this._recordList.numItems = this._detailInfo.length;
}
} else {
for (let t = 0; t < 7; t++) {
const e = this.view["KW_HuCard" + t];
e.visible = !0;
m.default.setCard(e, r[t]);
}
this.view.KW_HuCard7.visible = !1;
this.view.KW_CompCardType.visible = !1;
}
const p = [ "animation3", "animation1", "animation2" ];
this._tableData.gameLogicData.isBigAwardOn() || (a === n.ENUM_PLAYER_WINLOSE.LOSE ? this._iSound.playEffect(l.SOUND_PATH.GAME_LOSE, "game_k7star") : this._iSound.playEffect(l.SOUND_PATH.GAME_WIN, "game_k7star"));
d.gf.sp.onSpineLoaded(this.view.KW_AniBG, t => {
t.premultipliedAlpha = !1;
t.loop = !1;
t.animation = p[a];
t.setEventListener((t, e) => {
if ("add_img1" == e.data.name) {
this.view.KW_CompPlayer_1.visible = !0;
this.view.KW_NodeOther.visible = !0;
for (let t = 0; t < n.MAX_PLAYER; t++) this.view["KW_CompPlayer_" + t].visible = !0;
} else if ("add_img2" == e.data.name) {
this.view.KW_HuCardMax.visible = !0;
i._ct.length > 1 ? this.view.KW_BtnHuCardInfo.visible = !0 : this.view.KW_BtnHuCardInfo.visible = !1;
} else if ("add_img3" == e.data.name) {
this.view.button.setSelectedPage("continue");
this.initNewHighGame(a);
} else if ("add_img4" == e.data.name) this.view.KW_CompPlayer_1.KW_Text.visible = !0; else if ("add_img5" == e.data.name) for (let t = 0; t < n.MAX_PLAYER; t++) {
const e = t;
_ && _._flag[t] > 0 && this.showNobilityNoPayOrDouble(_._flag[t], e, !0);
} else if ("add_img6" == e.data.name) for (let t = 0; t < n.MAX_PLAYER; t++) {
const e = t;
if (_ && _._flag[e] > 0 && _._flag[e] == n.NobilityFlag.NFLAG_NO_PAY) {
this.view["KW_CompPlayer_" + e].KW_CompLine.visible = !0;
let t = 1;
e === this._tableData.getSelfSeat() && (t = 2);
d.gf.sp.onSpineLoaded(this.view["KW_CompPlayer_" + e].KW_CompLine, e => {
e.premultipliedAlpha = !1;
e.loop = !1;
e.animation = "animation_" + t;
});
}
}
});
});
if (this.getImpl(u.default).checkSrIsNotEnough()) {
const t = this.getImpl(g.default).onGetRCQInfo();
this.view.KW_BtnContinue.C_ShowRCQ.setSelectedIndex(t > 0 ? 1 : 0);
if (t > 0) {
this.view.KW_BtnContinue.KW_Tip_RCQ.KW_TextCnt.text = t + "";
const {levelid: e} = this.getImpl(g.default).getLevelid();
this.view.KW_BtnContinue.KW_Tip_RCQ.C_Roomlv.setSelectedIndex(e);
}
}
const f = this.getImpl(d.comm.lobby.IMingRenTangManager).getActInfo();
if ((null == f ? void 0 : f.isOpen) && f.showRoom.includes((null === (e = this.getImpl(d.comm.lobby.IJoinRoomModule).getCurRoomData()) || void 0 === e ? void 0 : e.vrRoomLv) || -1)) {
this.view.KW_BtnMingRenTang.visible = !0;
if (!this._mingRenTangBtn) {
this._mingRenTangBtn = new C.default(this);
this._mingRenTangBtn.initUI(this.getImpl(d.comm.lobby.IMingRenTangManager).getUserInfo());
d.gf.sp.onSpineLoaded(this.view.KW_BtnMingRenTang.KW_Ani, t => {
t.premultipliedAlpha = !1;
t.loop = !0;
t.animation = "animation3_2";
});
this.addClick(this.view.KW_BtnMingRenTang, () => {
this.getImpl(d.gf.IViewPlugin).openView(d.comm.UIs.MingRenTangUI, 2);
});
}
this.getImpl(d.comm.lobby.IMingRenTangManager).reqMingRenTangUser();
} else this.view.KW_BtnMingRenTang.visible = !1;
this.getImpl(c.default).getTurntableInfo();
}
onMingRenTangUser(t) {
var e;
null === (e = this._mingRenTangBtn) || void 0 === e || e.initUI(t);
}
updateRecordItem(t, e) {
const i = this._detailInfo[t], s = i.cards;
for (let t = 0; t < 8; t++) {
const i = d.gf.FGUI.getChild(e, "KW_HuCard" + t);
i.visible = !0;
m.default.setCard(i, s[t]);
}
e.KW_CompCardType2.text = this.getCardTypeUrl(i.type);
}
onPlayerHead(t) {
const e = this._tableData.getPlayerByLocalSeat(t);
let i = null;
e && e.isVaildPlayer() && (i = this._tableData.getPlayerHeadInfo(d.comm.Util.MAKEUSERID(Number(e.areaid), Number(e.numid))));
if (t == n.SELF_LOCAL_SEAT) {
const t = d.comm.g.areaConfig.areaID, e = this.getImpl(d.comm.lobby.IUserManager).numid;
i = this._tableData.getPlayerHeadInfo(d.comm.Util.MAKEUSERID(Number(t), Number(e)));
}
if (e.vipid && e.vipid > 0) {
this.view["KW_CompPlayer_" + t].KW_CompVip.url = d.comm.getNobilityUrl(e.vipid);
this.view["KW_CompPlayer_" + t].KW_CompVip.visible = !0;
} else this.view["KW_CompPlayer_" + t].KW_CompVip.visible = !1;
const s = this.view["KW_CompPlayer_" + t].KW_CompHead, o = this._tableData.getPlayerSex(t);
if (s) if (i) {
const t = d.comm.HeadController.getUserHeadPath(o, i.headid, i.headUrl);
s.url = t;
} else s.url = 49 == o ? "ui://_Common/main_img_face_1" : "ui://_Common/main_img_face_0";
}
onPopToast() {
var t;
if (this._showNobilityTip) return;
this._showNobilityTip = !0;
const e = this._tableData.getNobilityResult(), i = this._tableData.getSelfSeat();
if (e && e._flag[i] == n.NobilityFlag.NFLAG_NO_PAY) {
const i = this.getImpl(d.comm.lobby.ILobbyConfigManager).getNobilityAct(), s = null === (t = null == i ? void 0 : i["gameid_" + this.getImpl(d.comm.lobby.IJoinRoomModule).getCurGameId()]) || void 0 === t ? void 0 : t.deductible, o = e._np_start_time;
o + 60 * (null == s ? void 0 : s.time) - Math.floor(Date.now() / 1e3) <= 0 && o > 0 && this.getImpl(d.comm.ICommonDlgs).showWeakHint("今日爵位免赔已到期，明日继续！");
} else e && e._flag[i] == n.NobilityFlag.NFLAG_DB_PAY && 1 == (e._dp_left_cnt || 0) && this.getImpl(d.comm.ICommonDlgs).showWeakHint("今日翻倍局数已结束，明日继续！");
}
onDestroy() {}
onChangeSeat() {
this.close();
}
dealScore(t) {
return t >= 0 ? `+${d.comm.StringUtils.dealBigNumEx5(t)}` : `${d.comm.StringUtils.dealBigNumEx5(t)}`;
}
getWinLostDraw(t) {
return t > 0 ? n.ENUM_PLAYER_WINLOSE.WIN : t < 0 ? n.ENUM_PLAYER_WINLOSE.LOSE : n.ENUM_PLAYER_WINLOSE.DRAW;
}
onBtnExit() {
if (!this._tableData.gameLogicData.isWillShowBigAward()) {
this._isGuide && this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newplayer, {
newplayer_click: "6"
});
this.dispatch("onBtnExit" + a.GAME_ID);
}
}
onBtnContinue() {
if (!this._tableData.gameLogicData.isWillShowBigAward()) if (this._isGuide) {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newplayer, {
newplayer_click: "7"
});
this.dispatch(n.GUIDE_EVENT.GUI_EVE_RESULT_CONTINUE + a.GAME_ID);
this.dispatch("onShowReady");
this.dispatch("updateSelfSR" + a.GAME_ID);
this.close();
} else this.dispatch("onBtnContinue" + a.GAME_ID);
}
onBtnHuCardInfo() {
if (0 === this.view.C_List.selectedIndex) {
this.view.C_List.setSelectedIndex(1);
this.view.KW_BtnHuCardInfo.C_JT.setSelectedIndex(1);
} else {
this.view.C_List.setSelectedIndex(0);
this.view.KW_BtnHuCardInfo.C_JT.setSelectedIndex(0);
}
}
onBtnLookCardType() {
if (this._isGuide) console.log("onBtnLookCardType is guide"); else {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_game_kwx_change, {
changeclicktime: 1
});
this.dispatch("onBtnLookCardType" + a.GAME_ID);
this.close();
}
}
onBtnYPBack() {
this.dispatch("onBtnYPBackResult" + a.GAME_ID);
}
onBtnTurntable() {
this.getImpl(c.default).getTurntableAward();
}
getResultAniName(t) {
switch (t) {
case n.ENUM_PLAYER_WINLOSE.LOSE:
return "animation3_";

case n.ENUM_PLAYER_WINLOSE.WIN:
return "animation1_";

case n.ENUM_PLAYER_WINLOSE.DRAW:
return "animation2_";
}
return "";
}
getCardTypeUrl(t) {
var e;
return (null === (e = null === s.CardTypeInfo || void 0 === s.CardTypeInfo ? void 0 : s.CardTypeInfo[t]) || void 0 === e ? void 0 : e[1]) || "";
}
showNobilityNoPayOrDouble(t, e, i) {
if (e != n.MAX_PLAYER) {
this.view["KW_CompPlayer_" + e].KW_AniNoPay.visible = i;
i && d.gf.sp.onSpineLoaded(this.view["KW_CompPlayer_" + e].KW_AniNoPay, e => {
e.premultipliedAlpha = !1;
e.loop = !1;
e.animation = "animation" + t;
});
} else for (let e = 0; e < n.MAX_PLAYER; e++) this.showNobilityNoPayOrDouble(t, e, i);
}
updateNoPayData() {
var t, e;
const i = this.getImpl(d.comm.lobby.ILobbyConfigManager).getNobilityAct(), s = null === (t = null == i ? void 0 : i["gameid_" + this.getImpl(d.comm.lobby.IJoinRoomModule).getCurGameId()]) || void 0 === t ? void 0 : t.deductible;
let o = !1;
const a = this.getImpl(d.comm.lobby.IJoinRoomModule).getCurRoomData();
for (let t = 0; t < (null === (e = null == s ? void 0 : s.roomlv) || void 0 === e ? void 0 : e.length); t++) if (-1 == s.roomlv[t] || s.roomlv[t] == (null == a ? void 0 : a.vrRoomLv) + 1) {
o = !0;
break;
}
if (!o) return;
const n = this._tableData.getNobilityResult();
if (!n) return;
const l = n._np_start_time + 60 * ((null == s ? void 0 : s.time) || 0) || (null == s ? void 0 : s.endtime) || 0;
let _ = 0;
0 == l ? _ = 60 * (null == s ? void 0 : s.time) : l > 0 && (_ = l - Math.floor(Date.now() / 1e3));
if (_ > 0) {
this.view.KW_CompActTime.visible = !0;
this.view.KW_CompActTime.KW_TextTitle.text = "今日爵位畅玩剩余";
this.view.KW_CompActTime.KW_TextCnt.text = "";
this.countDownNum = _;
this.setCountDown(this.countDownNum);
}
}
setCountDown(t) {
if (t > 0) {
this.countDownNum = t;
this.dealCountDown();
this.schedule(this.dealCountDown, 1);
} else {
this.countDownNum = 0;
this.dealCountDown();
}
}
secToTime(t) {
if (t > 86400) {
const e = Math.floor(t / 86400);
return e + "天" + Math.floor((t - 86400 * e) / 3600) + "小时";
}
if (t > 3600) {
const e = Math.floor(t / 3600);
return e + "小时" + Math.floor((t - 3600 * e) / 60) + "分钟";
}
const e = Math.floor(t / 60);
return e + "分钟" + (t - 60 * e) + "秒";
}
onShowBtnYPBack(t) {
var e, i;
if ((null === (e = this._tableData.getGameState()) || void 0 === e ? void 0 : e._state) == n.ENUM_GAME_STATE.GS_TOTAL_RESULT || (null === (i = this._tableData.getGameState()) || void 0 === i ? void 0 : i._state) == n.ENUM_GAME_STATE.GS_IDLE) {
console.log("onShowBtnYPBack aaa:", t);
this.view.C_ShowYPBack.setSelectedIndex(t ? 1 : 0);
if (t) {
const t = this.getImpl(d.comm.lobby.IPropManager).getPropCnt(d.comm.Propid.ProtectToken);
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_newpropicon_exposure, {
icon_name: "云币保护令icon",
prop_num: t,
icon_sence: "结算界面"
});
}
}
}
onMsgTurntableInfo(t) {
var e, i;
if (0 == t.isOpen) this.view.C_Show_Turntable.selectedIndex = 0; else {
this.view.C_Show_Turntable.selectedIndex = 1;
this.view.C_Turntable_Grey.selectedIndex = 0;
let s = "";
if (0 == t.useType) if (t.isCanGet) s = `[color=#741f0b]和牌时塔倍数大于[color=#f65d3a]${null !== (e = t.taMpl) && void 0 !== e ? e : 0}[/color]可获得1个转盘[/color]`; else {
s = `[color=#741f0b]今日已获得[color=#f65d3a]${t.initTimes}[/color]个转盘，请明日再来[/color]`;
this.view.C_Turntable_Grey.selectedIndex = 1;
} else if (1 == t.useType) s = "[color=#f65d3a]恭喜获得对局转盘，点击打开可抽取高额奖励[/color]"; else if (2 == t.useType) if (t.isCanGet) s = `[color=#741f0b]和牌时塔倍数大于[color=#f65d3a]${null !== (i = t.taMpl) && void 0 !== i ? i : 0}[/color]可获得1个转盘[/color]`; else {
s = `[color=#741f0b]今日已获得[color=#f65d3a]${t.initTimes}[/color]个转盘，请明日再来[/color]`;
this.view.C_Turntable_Grey.selectedIndex = 1;
}
this.view.KW_TXT_TURNTABLE.text = s;
const o = t.roomLv || 0;
this.view.C_Turntable_Type.selectedIndex = o <= 1 ? 0 : o - 2;
}
}
initNewHighGame(t) {
if (t === n.ENUM_PLAYER_WINLOSE.LOSE) {
this.view.KW_btnHighGame.visible = !1;
return;
}
if (this._isGuide) return;
const e = this.getImpl(_.default).getSelf();
if (!e || !e.numid) return;
const i = this.getImpl(g.default).getCurMaxSrScale(), s = this.getImpl(g.default).getCurRoomData(), l = (null == s ? void 0 : s.vrRoomLv) || 0, r = this.getImpl(d.comm.lobby.ILobbyConfigManager).getK7JumpHighRoom(), h = this.getImpl(g.default).isTopGameOpenTime();
let c = !1, m = 0;
const C = this.getImpl(u.default).getGameTopInfo();
if (!r.toproom || 1 != r.toproom || C) if (r.toproom && 1 == r.toproom && l === (null == C ? void 0 : C.vrRoomLv)) this.view.KW_btnHighGame.visible = !1; else {
if (r.config) for (let t = 0; t < r.config.length; t++) {
const e = r.config[t];
if (e.roomlv === l && i >= e.scale) {
c = !0;
m = e.to;
break;
}
}
if (r.toproom && 1 == r.toproom && h) {
c = !0;
m = null == C ? void 0 : C.vrRoomLv;
}
this.view.KW_btnHighGame.KW_Tip_RCQ.visible = !1;
if (c && m === (null == C ? void 0 : C.vrRoomLv)) {
const t = this.getImpl(g.default).onGetRCQInfo(m);
if (t > 0) {
this.view.KW_btnHighGame.KW_Tip_RCQ.visible = !0;
this.view.KW_btnHighGame.KW_Tip_RCQ.KW_TextCnt.text = t + "";
this.view.KW_btnHighGame.KW_Tip_RCQ.C_Roomlv.setSelectedIndex(m);
}
this.view.KW_btnHighGame.visible = !0;
this.view.KW_btnHighGame.C_RoomLv.selectedPage = "4";
this.addClick(this.view.KW_btnHighGame, () => {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_room_click, {
game_id: d.comm.g.areaConfig.gameID,
room_id: s.roomId[0] || 0,
room_lv: s.vrRoomLv,
room_name: s.name,
roomup_click: m
});
if ((Number(e.sr) || 0) < C.minscore && t <= 0) {
const t = `进入【巅峰场】最低需要${d.comm.StringUtils.dealBigNumEx5(C.minscore)}云币\r\n赶紧补充一点云币吧！`;
this.getImpl(d.comm.ICommonDlgs).showCommonDlg(t, 1, () => {
var t;
const e = (null === (t = null == C ? void 0 : C.roomId) || void 0 === t ? void 0 : t[0]) || -1;
this.getImpl(g.default).popEnterRoomGift(m, e);
}, null, !0, "补充云币");
} else this.getImpl(u.default).reqk7TopGame();
});
} else {
this.view.KW_btnHighGame.visible = c;
if (c) {
this.view.KW_btnHighGame.C_RoomLv.selectedPage = `${m}`;
this.addClick(this.view.KW_btnHighGame, () => {
if (this.getImpl(u.default).popNextGame(m)) {
this.close();
this.dispatch("onChangeSeat" + a.GAME_ID);
this.dispatch("onShowReady");
}
});
d.gf.sp.onSpineLoaded(this.view.KW_btnHighGame.KW_AniLight, t => {
t.premultipliedAlpha = !1;
t.loop = !0;
t.animation = "animation";
});
}
}
}
}
};
p([ d.gf.listen(d.comm.Events.EventMingRenTangUser) ], f.prototype, "onMingRenTangUser", null);
p([ d.gf.listen("onChangeSeat" + a.GAME_ID) ], f.prototype, "onChangeSeat", null);
p([ d.gf.listen("onShowBtnYPBack" + a.GAME_ID) ], f.prototype, "onShowBtnYPBack", null);
p([ d.gf.listen("onMsgTurntableInfo" + a.GAME_ID) ], f.prototype, "onMsgTurntableInfo", null);
const A = f = p([ d.gf.controller({
name: "GameResult",
module: "game_k7star",
fguiObject: "View",
layer: d.gf.ViewLayer.Base,
fguiPackage: [ "Game_K7Star_Common", "Game_K7Star_Card", "Game_K7Star_Result" ],
cachable: !0,
sortingOrder: n.FGUI_ORDER.GAME_RESULT
}) ], f);
},
"./bin/ui/main/GameSetting.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => h
});
var s = i("./bin/config/GameDefine.js"), a = i("./bin/data/TableData.js"), n = i("./bin/gf.js"), l = i("./bin/logic/moudles/GameLogicManager.js"), _ = i("./bin/logic/protocol/GLProtocol.js"), r = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let d = class extends n.gf.mvc.UIController {
onUIBinded() {
this._tableData = this.getImpl(a.default);
this._gameLogicManager = this.getImpl(l.default);
this.iSound = this.getImpl(n.gf.ISound);
this.iSoundModule = this.getImpl(n.comm.lobby.ISoundModule);
this.addClick(this.view.KW_BtnClose, this.onBtnMsgClose);
this.addClick(this.view.KW_BtnMusic, this.onBtnMsgMusic);
this.addClick(this.view.KW_BtnEffect, this.onBtnMsgEffect);
this.addClick(this.view.KW_BtnPTHMen, this.onBtnMsgPTH);
this.addClick(this.view.KW_BtnPTHWomen, this.onBtnMsgPTH);
this.addClick(this.view.KW_BtnJump, this.onBtnJumpLowMult);
}
initUI(t) {
this._gameBtnCls = t;
const e = this.iSoundModule.getEffectVolume(), i = this.iSoundModule.getMusicVolume();
this.view.KW_BtnEffect.select.selectedIndex = 1 == e ? 1 : 0;
this.view.KW_BtnMusic.select.selectedIndex = 1 == i ? 1 : 0;
const s = this.iSoundModule.getSex();
this.view.radioGroup.setSelectedIndex(s);
this.updateSkipLowBtnVisible(this._gameBtnCls.isShowBtnJump);
}
onBtnMsgClose() {
this.close();
}
onBtnMsgEffect() {
this.view.KW_BtnEffect.select.selectedIndex ^= 1;
let t = .01;
1 == this.view.KW_BtnEffect.select.selectedIndex && (t = 1);
this.iSoundModule.setEffectVolume(t);
}
onBtnMsgMusic() {
this.view.KW_BtnMusic.select.selectedIndex ^= 1;
let t = .01;
1 == this.view.KW_BtnMusic.select.selectedIndex && (t = 1);
this.iSoundModule.setMusicVolume(t);
}
onBtnMsgPTH() {
const t = this.view.radioGroup.selectedIndex;
this.iSoundModule.setSex(t);
}
onBtnJumpLowMult() {
let t = "1：关";
0 == this.view.KW_BtnJump.select.selectedIndex && (t = "0：开");
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_lowmut, {
lowmut_click: t
});
if (this._tableData.getGameStateOld()._state !== s.ENUM_GAME_STATE.GS_IDLE) 1 == this.view.KW_BtnJump.select.selectedIndex ? this._gameLogicManager.sendSkipLow(_.GLProtocol.msgSkipLow.eFlag.FLAG_OFF) : this._gameLogicManager.sendSkipLow(_.GLProtocol.msgSkipLow.eFlag.FLAG_ON); else {
this.view.KW_BtnJump.select.selectedIndex ^= 1;
this._gameBtnCls.setLocalSkipLowState(this.view.KW_BtnJump.select.selectedIndex);
}
}
updateSkipLowBtnVisible(t) {
var e;
const i = null === (e = this._gameBtnCls) || void 0 === e ? void 0 : e.getLocalSkipLowState();
this.view.KW_BtnJump.select.selectedIndex = i === _.GLProtocol.msgSkipLow.eFlag.FLAG_ON ? 1 : 0;
this.view.KW_BtnJump.visible = t;
this.view.KW_TxtJump.visible = t;
}
};
r([ n.gf.listen("onMsgSkipLow_GameSetting") ], d.prototype, "updateSkipLowBtnVisible", null);
const h = d = r([ n.gf.controller({
name: "GameSetting",
module: "game_k7star",
fguiObject: "View",
layer: n.gf.ViewLayer.Pop,
fguiPackage: [ "Game_K7Star_Set" ],
cachable: !0,
sortingOrder: s.FGUI_ORDER.GAME_POP
}) ], d);
},
"./bin/ui/main/GameSpecCard.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => d
});
var s = i("./bin/gf.js"), o = i("./bin/config/CardCode.js"), a = i("./bin/config/GameDefine.js"), n = i("./bin/data/TableData.js"), l = i("./bin/gameLogic/CardRuleLogic.js"), _ = i("./bin/logic/moudles/GameLogicManager.js");
let r = class extends s.gf.mvc.UIController {
constructor() {
super(...arguments);
this._initCards = [];
this._bakCards = [];
this._selCards = [];
}
onUIBinded() {
this._tableData = this.getImpl(n.default);
this._cardLogic = new l.default();
this._gameLogicManager = this.getImpl(_.default);
this.addClick(this.view.KW_BtnQ, this.onBtnSend);
this.addClick(this.view.KW_BtnC, this.onBtnBack);
this.addClick(this.view.KW_BtnN, this.onBtnClear);
}
onUnUIBinded() {}
initUI() {
this.clearCardLayer();
for (let t = o.CardID.CID_DIAMOND_A; t <= o.CardID.CID_BJ; t++) {
const e = {
value: t,
cnt: 2
};
7 == (0, o.VALUE)(t) && (e.cnt = 3);
t != o.CardID.CID_BJ && t != o.CardID.CID_SJ || (e.cnt = 4);
this._initCards.push(e);
}
this._initCards.push({
value: o.CardID.CID_GOLD,
cnt: 10
});
const t = this._tableData.getCloneCards();
for (let e = 0; e < t._old_card_values.length; e++) for (let i = o.CardColor.CC_DIAMOND; i < o.CardColor.CC_SPADE; i++) {
const s = 13 * (i - 1) + t._old_card_values[e];
let o = 0;
for (let t = 0; t < this._initCards.length; t++) if (this._initCards[t].value == s) {
o = this._initCards[t].cnt;
this._initCards.splice(t, 1);
break;
}
const a = 13 * (i - 1) + t._new_card_values[e];
for (let t = 0; t < this._initCards.length; t++) if (this._initCards[t].value == a) {
this._initCards[t].cnt = this._initCards[t].cnt + o;
break;
}
}
this._bakCards = s.comm.Util.clone(this._initCards);
this._selCards = [];
this.initCardLayer(this._bakCards);
this.initSelCardLayer(this._selCards);
}
onDestroy() {}
onBtnBack() {
this.close();
}
onBtnSend() {
this._gameLogicManager.sendSpecCards(this._selCards);
this.close();
}
onBtnClear() {
this._selCards = [];
this._bakCards = s.comm.Util.clone(this._initCards);
this.initCardLayer(this._bakCards);
this.initSelCardLayer(this._selCards);
}
onBtnClickCard(t) {
let e = !1;
for (let i = 0; i < this._bakCards.length; i++) if (this._bakCards[i].value == t) {
this._bakCards[i].cnt--;
this._bakCards[i].cnt <= 0 && this._initCards.splice(i, 1);
e = !0;
this._selCards.push(t);
break;
}
if (e) {
this.initCardLayer(this._bakCards);
this.initSelCardLayer(this._selCards);
}
}
clearCardLayer() {
this.view.KW_CompList.removeChildrenToPool();
this.view.KW_CompSelList.removeChildrenToPool();
}
initCardLayer(t) {
this.view.KW_CompList.removeChildrenToPool();
const e = t.length;
for (let i = 0; i < e; i++) {
const e = this.view.KW_CompList.addItemFromPool("ui://Game_K7Star_Card/SpecCard");
s.gf.setLayerNode(e);
this.initItem(e, t[i].value);
e.KW_TextCnt.text = `${t[i].cnt}`;
this.addClick(e, () => {
this.onBtnClickCard(t[i].value);
});
}
}
initSelCardLayer(t) {
this.view.KW_CompSelList.removeChildrenToPool();
const e = t.length;
for (let i = 0; i < e; i++) {
const e = this.view.KW_CompSelList.addItemFromPool("ui://Game_K7Star_Card/SpecCard");
s.gf.setLayerNode(e);
this.initItem(e, t[i]);
}
}
initItem(t, e) {
const i = t;
if (e == o.CardID.CID_GOLD) i.cardValue.setSelectedPage("gold"); else if ((0, o.VALUE)(e) <= o.CardValue.CV_NONE) i.cardValue.setSelectedPage("back"); else if ((0, 
o.VALUE)(e) <= o.CardValue.CV_K) {
i.cardValue.setSelectedPage("cardnum");
i.KW_CompColorSmall.url = this.getColorPath((0, o.COLOR)(e));
i.KW_CompColorBig.url = this.getColorPath((0, o.COLOR)(e));
i.KW_CompColorNum.url = `ui://_Common/${this.getColor(e)}${(0, o.VALUE)(e)}`;
} else if ((0, o.VALUE)(e) == o.CardValue.CV_SJ || (0, o.VALUE)(e) == o.CardValue.CV_BJ) {
i.cardValue.setSelectedPage("joker");
i.KW_CompJokerColor.url = this.getColorPath((0, o.COLOR)(e));
i.KW_CompJokerNum.url = `ui://_Common/${(0, o.get_num_by_cardVal)((0, o.VALUE)(e))}`;
}
}
getColor(t) {
switch ((0, o.COLOR)(t)) {
case o.CardColor.CC_DIAMOND:
case o.CardColor.CC_HEART:
return "red";

case o.CardColor.CC_CLUB:
case o.CardColor.CC_SPADE:
return "black";
}
return "";
}
getColorPath(t) {
switch (t) {
case o.CardColor.CC_DIAMOND:
return "ui://_Common/diamond";

case o.CardColor.CC_CLUB:
return "ui://_Common/club";

case o.CardColor.CC_HEART:
return "ui://_Common/heart";

case o.CardColor.CC_SPADE:
return "ui://_Common/spade";

case o.CardColor.CC_SJ:
return "ui://_Common/15dizhu";

case o.CardColor.CC_BJ:
return "ui://_Common/16dizhu";
}
return "";
}
};
const d = r = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
}([ s.gf.controller({
name: "GameSpecCard",
module: "game_k7star",
fguiObject: "SpecView",
layer: s.gf.ViewLayer.Base,
fguiPackage: [ "Game_K7Star_Card" ],
cachable: !0,
sortingOrder: a.FGUI_ORDER.GAME_POP
}) ], r);
},
"./bin/ui/main/GameTest.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => C
});
var s = i("./bin/config/CardCode.js"), a = i("./bin/config/CardType.js"), n = i("./bin/config/GameConfig.js"), l = i("./bin/config/GameDefine.js"), _ = i("./bin/config/SoundConfig.js"), r = i("./bin/data/TableData.js"), d = i("./bin/gf.js"), h = i("./bin/logic/actModules/GameActModule.js"), c = i("./bin/logic/moudles/GameLogicManager.js"), g = i("./bin/logic/protocol/GLProtocol.js"), u = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let m = class extends d.gf.mvc.UIController {
constructor() {
super(...arguments);
this._tableData = null;
this._num = 1;
this._btnMap = [ {
key: "退出房间",
callBack: () => {
this.getImpl(d.comm.lobby.IJoinRoomModule).reqLeaveTable(0);
}
}, {
key: "复活",
callBack: () => {
this.getImpl(d.gf.IViewPlugin).openView(d.comm.UIs.K7StarReviveView);
}
}, {
key: "进入",
callBack: () => {
this.onBtnTest1();
}
}, {
key: "发牌",
callBack: () => {
this.onBtnTest2();
}
}, {
key: "克隆",
callBack: () => {
this.onBtnTest3();
}
}, {
key: "摸牌",
callBack: () => {
this.onBtnTest4();
}
}, {
key: "出牌",
callBack: () => {
this.onBtnTest5();
}
}, {
key: "胡牌",
callBack: () => {
this.onBtnTest6();
}
}, {
key: "炸牌",
callBack: () => {
this.onBtnTest7();
}
}, {
key: "爆牌",
callBack: () => {
this.onBtnTest8();
}
}, {
key: "结算",
callBack: () => {
this.onBtnTest9();
}
}, {
key: "自金牌",
callBack: () => {
this.onBtnTest10();
this.scheduleOnce(() => {
const t = new g.GLProtocol.msgEndChooseCard();
t._seat = 0;
t._index = 0;
t._cards = [ 12, 15, 32, 54 ];
t._gold_buff = 1;
this._gameLogicManager.onMsgEndChooseCard(t);
}, .5);
}
}, {
key: "他金牌",
callBack: () => {
const t = new g.GLProtocol.msgAddCards();
t._seat = 1;
t._cards = [ s.CardID.CID_GOLD ];
t._count = t._cards.length;
this._gameLogicManager.onMsgAddCards(t);
const e = new g.GLProtocol.msgStartChooseCard();
e._seat = 1;
e._count = 4;
this._gameLogicManager.onMsgStartChooseCard(e);
this.scheduleOnce(() => {
const t = new g.GLProtocol.msgEndChooseCard();
t._seat = 1;
t._index = 0;
t._cards = [ 12, 15, 32, 54 ];
t._gold_buff = 1;
this._gameLogicManager.onMsgEndChooseCard(t);
}, 1);
this.scheduleOnce(() => {
const t = new g.GLProtocol.msgGoldBuffInfo();
t._seat = 1;
t._index = 2;
t._gold_buff_cnt = 3;
t._buff = '[{"id":7,"cnt":9999,"flag":1,"mult":0},{"id":1,"cnt":2,"flag":0,"mult":0},{"id":5,"cnt":2,"flag":0,"mult":1000}]';
t._buffParse = [ {
id: 7,
cnt: 9999,
flag: 1,
mult: 0
}, {
id: 1,
cnt: 2,
flag: 0,
mult: 0
}, {
id: 5,
cnt: 2,
flag: 0,
mult: 1e3
} ];
t._buff_id = t._buffParse[2].id;
this._gameLogicManager.onMsgGoldBuffInfo(t);
}, 4);
}
}, {
key: "权限",
callBack: () => {
this.onBtnTest14();
}
}, {
key: "权限1",
callBack: () => {
const t = new g.GLProtocol.msgActPowerNew();
t._bomb_card_value = [ 14, 0 ];
t._play = 2;
this._gameLogicManager.onMsgActPowerNew(t);
}
}, {
key: "权限2",
callBack: () => {
const t = new g.GLProtocol.msgActPowerNew();
t._play = 1;
this._gameLogicManager.onMsgActPowerNew(t);
}
}, {
key: "权限3",
callBack: () => {
const t = new g.GLProtocol.msgActPowerNew();
t._tower_card_value = 11;
t._zimo_card_count = 1;
t._zimo_card_mult = [ 5e5 ];
t._zimo_card = [ 1 ];
t._ming = 1;
t._play = 1;
this._gameLogicManager.onMsgActPowerNew(t);
}
}, {
key: "权限4",
callBack: () => {
const t = new g.GLProtocol.msgActPowerNew();
t._bomb_card_value = [ 14, 0 ];
t._tower_card_value = 11;
t._zimo_card_count = 1;
t._zimo_card_mult = [ 5e5, 5e5, 5e5 ];
t._zimo_card = [ 1, 1, 1 ];
t._ming = 1;
t._play = 1;
this._gameLogicManager.onMsgActPowerNew(t);
}
}, {
key: "明牌",
callBack: () => {
this.onBtnTest15();
}
}, {
key: "破产",
callBack: () => {
const t = {
gameid: d.comm.g.areaConfig.gameID,
roomlv: 1,
mincarry: 1e6
};
this.getImpl(d.gf.IViewPlugin).openView(d.comm.UIs.BankruptGiftPackUI, t);
}
}, {
key: "低倍0",
callBack: () => {
const t = new g.GLProtocol.msgSkipLow();
t._flag = g.GLProtocol.msgSkipLow.eFlag.FLAG_OFF;
this._gameLogicManager.onMsgSkipLow(t);
}
}, {
key: "听牌",
callBack: () => {
const t = new g.GLProtocol.msgTingListNew();
t._count = 1;
t._total_count = 1;
t._index = -1;
t._out_card = 0;
t._count = 9;
t._ct = [ 5, 5, 5, 5, 5, 3, 1, 1, 1 ];
t._mult = [ 983040, 49152e3, 491520, 49152e3, 491520, 491520, 491520, 491520, 49152e3 ];
t._hu_cards = [ 7, 6, 5, 4, 9, 10, 14, 8, 16 ];
t._hu_card_left_count = [ 11, 15, 14, 15, 14, 13, 1, 10, 1 ];
t._gold_mult = [ 0, 0, 0, 0, 0, 0, 0, 0, 0 ];
t._bao_mult = [ 2, 0, 0, 0, 0, 0, 0, 0, 0 ];
t._tower_mult = [ 16, 16, 16, 16, 16, 16, 16, 16, 16 ];
t._ming_mult = [ 10, 10, 10, 10, 10, 10, 10, 10, 10 ];
this.dispatch("showBtnTing" + n.GAME_ID, !0);
this._gameLogicManager.onMsgTingListNew(t);
}
}, {
key: "居中破产",
callBack: () => {
const t = new g.GLProtocol.msgRoundResult();
t._count = 1;
t._ct[0] = [ 526, 0, 0, 0 ];
t._mult[0] = [ 3072e4, 0, 0, 0 ];
t._score[0] = [ 235568371, -235568371, 0, 0 ];
t._ex_flag[0] = [ l.eResultExFlag.FlagBankrupt, 0, 0, 0 ];
t._dhq_cnt[0] = [ 0, 0, 0, 0 ];
t._hu_card[0] = [ 34, 0, 0, 0 ];
t._self_hu[0] = [ 1, 2, 0, 0 ];
this._gameLogicManager.onMsgRoundResult(t);
const e = new g.GLProtocol.msgGameState();
e._state = l.ENUM_GAME_STATE.GS_BROKEN;
this._gameLogicManager.onMsgGameState(e);
}
}, {
key: "giveup",
callBack: () => {
const t = new g.GLProtocol.msgGiveUp();
t._flag = g.GLProtocol.msgGiveUp.eFlag.FLAG_GIVE_UP;
t._seat = 0;
this._gameLogicManager.onMsgGiveUp(t);
}
}, {
key: "巅峰对决",
callBack: () => {
const t = new g.GLProtocol.msgGameState();
t._state = l.ENUM_GAME_STATE.GS_PEAK_GAME;
this._gameLogicManager.onMsgGameState(t);
}
}, {
key: "补充提示",
callBack: () => {
this.dispatch("showRechargeTip" + n.GAME_ID);
}
}, {
key: "云币保护",
callBack: () => {
this.dispatch("onShowYunProtectAni" + n.GAME_ID, 1e4, l.SELF_LOCAL_SEAT);
}
}, {
key: "破",
callBack: () => {
this._iSound.playEffect(_.SOUND_PATH.GAME_PO, "game_k7star");
}
} ];
}
onUIBinded() {
this._iSound = this.getImpl(d.gf.ISound);
this._iSoundModule = this.getImpl(d.comm.lobby.ISoundModule);
this._gameLogicManager = this.getImpl(c.default);
this._tableData = this.getImpl(r.default);
this.view.KW_TestBtnList.visible = !1;
this.view.KW_TestBtnListType.visible = !1;
this.view.KW_TestBtnListSound.visible = !1;
if (1 != d.gf.LocalStorage.getInt(d.comm.Events.KW_TEST_CONFIG_TAG) && !d.gf.DEBUG() || this.getImpl(d.comm.IHost).isSrsNormal()) {
this.view.KW_BtnTest0.visible = !1;
this.view.KW_BtnTest1.visible = !1;
this.view.KW_BtnTest2.visible = !1;
this.view.KW_BTN_ADD.visible = !1;
this.view.KW_BTN_GET.visible = !1;
} else {
this.view.KW_BtnTest0.visible = !0;
this.view.KW_BtnTest1.visible = !0;
this.view.KW_BtnTest2.visible = !0;
this.view.KW_BTN_ADD.visible = !0;
this.view.KW_BTN_GET.visible = !0;
}
this.addClick(this.view.KW_BtnTest0, () => {
this.view.KW_TestBtnList.visible = !this.view.KW_TestBtnList.visible;
});
this.addClick(this.view.KW_BtnTest1, () => {
this.view.KW_TestBtnListType.visible = !this.view.KW_TestBtnListType.visible;
});
this.addClick(this.view.KW_BtnTest2, () => {
this.view.KW_TestBtnListSound.visible = !this.view.KW_TestBtnListSound.visible;
});
this.addClick(this.view.KW_BTN_ADD, () => {
this.getImpl(h.default).getTurntableAdd();
});
this.addClick(this.view.KW_BTN_GET, () => {
this.getImpl(h.default).getTurntableAward();
});
this.view.KW_TestBtnList.removeChildrenToPool();
for (let t = 0; t < this._btnMap.length; t++) {
const e = this._btnMap[t], i = this.view.KW_TestBtnList.addItemFromPool();
if (i) {
d.gf.FGUI.getChild(i, "title").asTextField.text = e.key;
this.addClick(i, e.callBack);
}
}
this.initCardsType();
this.initSound();
}
onUnUIBinded() {}
initCardsType() {
this.view.KW_TestBtnListType.removeChildrenToPool();
for (let t = a.ENUM_CARD_TYPE.T_B8_A; t <= a.ENUM_CARD_TYPE.T_B8_K; t++) {
const e = this.view.KW_TestBtnListType.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
const e = new g.GLProtocol.msgRoundResult();
e._count = 1;
e._ct[0] = [ t, 0, 0, 0 ];
e._mult[0] = [ 7680, 0, 0, 0 ];
e._score[0] = [ 23040, -7680, -7680, -7680 ];
e._ex_flag[0] = [ 0, 0, 0, 0 ];
e._dhq_cnt[0] = [ 0, 0, 0, 0 ];
e._hu_card[0] = [ 42, 0, 0, 0 ];
e._self_hu[0] = [ 3, 4, 4, 4 ];
this.getImpl(d.comm.IHost).setHostId(1);
this._gameLogicManager.onMsgRoundResult(e);
});
}
}
for (let t = a.ENUM_CARD_TYPE.TA_1; t <= a.ENUM_CARD_TYPE.TA_4; t++) {
const e = this.view.KW_TestBtnListType.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
const e = new g.GLProtocol.msgRoundResult();
e._count = 1;
e._ct[0] = [ t, 0, 0, 0 ];
e._mult[0] = [ 7680, 0, 0, 0 ];
e._score[0] = [ 23040, -7680, -7680, -7680 ];
e._ex_flag[0] = [ 0, 0, 0, 0 ];
e._dhq_cnt[0] = [ 0, 0, 0, 0 ];
e._hu_card[0] = [ 42, 0, 0, 0 ];
e._self_hu[0] = [ 3, 4, 4, 4 ];
this.getImpl(d.comm.IHost).setHostId(1);
this._gameLogicManager.onMsgRoundResult(e);
});
}
}
for (let t = a.ENUM_CARD_TYPE.T_6_2; t <= a.ENUM_CARD_TYPE.T_4_2_2; t++) {
const e = this.view.KW_TestBtnListType.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
const e = new g.GLProtocol.msgRoundResult();
e._count = 1;
e._ct[0] = [ t, 0, 0, 0 ];
e._mult[0] = [ 7680, 0, 0, 0 ];
e._score[0] = [ 23040, -7680, -7680, -7680 ];
e._ex_flag[0] = [ 0, 0, 0, 0 ];
e._dhq_cnt[0] = [ 0, 0, 0, 0 ];
e._hu_card[0] = [ 42, 0, 0, 0 ];
e._self_hu[0] = [ 3, 4, 4, 4 ];
this.getImpl(d.comm.IHost).setHostId(1);
this._gameLogicManager.onMsgRoundResult(e);
});
}
}
for (let t = a.ENUM_CARD_TYPE.T_2B_5_10; t <= a.ENUM_CARD_TYPE.T_2B_3_J; t++) {
const e = this.view.KW_TestBtnListType.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
const e = new g.GLProtocol.msgRoundResult();
e._count = 1;
e._ct[0] = [ t, 0, 0, 0 ];
e._mult[0] = [ 7680, 0, 0, 0 ];
e._score[0] = [ 23040, -7680, -7680, -7680 ];
e._ex_flag[0] = [ 0, 0, 0, 0 ];
e._dhq_cnt[0] = [ 0, 0, 0, 0 ];
e._hu_card[0] = [ 42, 0, 0, 0 ];
e._self_hu[0] = [ 3, 4, 4, 4 ];
this.getImpl(d.comm.IHost).setHostId(1);
this._gameLogicManager.onMsgRoundResult(e);
});
}
}
for (let t = a.ENUM_CARD_TYPE.T_B4_1_2; t <= a.ENUM_CARD_TYPE.T_B4_Q_K; t++) {
const e = this.view.KW_TestBtnListType.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
const e = new g.GLProtocol.msgRoundResult();
e._count = 1;
e._ct[0] = [ t, 0, 0, 0 ];
e._mult[0] = [ 7680, 0, 0, 0 ];
e._score[0] = [ 23040, -7680, -7680, -7680 ];
e._ex_flag[0] = [ 0, 0, 0, 0 ];
e._dhq_cnt[0] = [ 0, 0, 0, 0 ];
e._hu_card[0] = [ 42, 0, 0, 0 ];
e._self_hu[0] = [ 3, 4, 4, 4 ];
this.getImpl(d.comm.IHost).setHostId(1);
this._gameLogicManager.onMsgRoundResult(e);
});
}
}
for (let t = a.ENUM_CARD_TYPE.T_B5_2_3; t <= a.ENUM_CARD_TYPE.T_B5_J_Q; t++) {
const e = this.view.KW_TestBtnListType.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
const e = new g.GLProtocol.msgRoundResult();
e._count = 1;
e._ct[0] = [ t, 0, 0, 0 ];
e._mult[0] = [ 7680, 0, 0, 0 ];
e._score[0] = [ 23040, -7680, -7680, -7680 ];
e._ex_flag[0] = [ 0, 0, 0, 0 ];
e._dhq_cnt[0] = [ 0, 0, 0, 0 ];
e._hu_card[0] = [ 42, 0, 0, 0 ];
e._self_hu[0] = [ 3, 4, 4, 4 ];
this.getImpl(d.comm.IHost).setHostId(1);
this._gameLogicManager.onMsgRoundResult(e);
});
}
}
for (let t = a.ENUM_CARD_TYPE.T_B6_2_3; t <= a.ENUM_CARD_TYPE.T_B6_J_Q; t++) {
const e = this.view.KW_TestBtnListType.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
const e = new g.GLProtocol.msgRoundResult();
e._count = 1;
e._ct[0] = [ t, 0, 0, 0 ];
e._mult[0] = [ 7680, 0, 0, 0 ];
e._score[0] = [ 23040, -7680, -7680, -7680 ];
e._ex_flag[0] = [ 0, 0, 0, 0 ];
e._dhq_cnt[0] = [ 0, 0, 0, 0 ];
e._hu_card[0] = [ 42, 0, 0, 0 ];
e._self_hu[0] = [ 3, 4, 4, 4 ];
this.getImpl(d.comm.IHost).setHostId(1);
this._gameLogicManager.onMsgRoundResult(e);
});
}
}
}
playCardTypeSound(t) {
var e;
const i = a.CardTypeInfo[t][2];
if (i) {
const t = (null === (e = this._iSoundModule) || void 0 === e ? void 0 : e.getSex()) || 0, s = (0, 
_.getCardTypePath)(t);
this._iSound.playEffect(s + i, "game_k7star");
}
}
initSound() {
var t;
this.view.KW_TestBtnListSound.removeChildrenToPool();
const e = (null === (t = this._iSoundModule) || void 0 === t ? void 0 : t.getSex()) || 0;
for (let t = a.ENUM_CARD_TYPE.T_B8_A; t <= a.ENUM_CARD_TYPE.T_B8_K; t++) {
const e = this.view.KW_TestBtnListSound.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
this.playCardTypeSound(t);
});
}
}
for (let t = a.ENUM_CARD_TYPE.TA_1; t <= a.ENUM_CARD_TYPE.TA_4; t++) {
const e = this.view.KW_TestBtnListSound.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
this.playCardTypeSound(t);
});
}
}
for (let t = a.ENUM_CARD_TYPE.T_6_2; t <= a.ENUM_CARD_TYPE.T_4_2_2; t++) {
const e = this.view.KW_TestBtnListSound.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
this.playCardTypeSound(t);
});
}
}
for (let t = a.ENUM_CARD_TYPE.T_2B_5_10; t <= a.ENUM_CARD_TYPE.T_2B_3_J; t++) {
const e = this.view.KW_TestBtnListSound.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
this.playCardTypeSound(t);
});
}
}
for (let t = a.ENUM_CARD_TYPE.T_B4_1_2; t <= a.ENUM_CARD_TYPE.T_B4_Q_K; t++) {
const e = this.view.KW_TestBtnListSound.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
this.playCardTypeSound(t);
});
}
}
for (let t = a.ENUM_CARD_TYPE.T_B5_2_3; t <= a.ENUM_CARD_TYPE.T_B5_J_Q; t++) {
const e = this.view.KW_TestBtnListSound.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
this.playCardTypeSound(t);
});
}
}
for (let t = a.ENUM_CARD_TYPE.T_B6_2_3; t <= a.ENUM_CARD_TYPE.T_B6_J_Q; t++) {
const e = this.view.KW_TestBtnListSound.addItemFromPool();
if (e) {
d.gf.FGUI.getChild(e, "title").asTextField.text = `${t}s`;
this.addClick(e, () => {
this.playCardTypeSound(t);
});
}
}
for (let t = 1; t <= 15; t++) {
const i = this.view.KW_TestBtnListSound.addItemFromPool();
if (i) {
d.gf.FGUI.getChild(i, "title").asTextField.text = `出牌${t}`;
this.addClick(i, () => {
this._iSound.playEffect((0, _.getOutCardSound)(e, (0, s.get_num_by_cardVal)((0, 
s.VALUE)(t))), "game_k7star");
});
}
}
let i = this.view.KW_TestBtnListSound.addItemFromPool();
if (i) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "飞银子";
this.addClick(i, () => {
this._iSound.playEffect(_.SOUND_PATH.ROULETTE_TALLY, "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "巅峰对决";
this.addClick(i, () => {
this._iSound.playEffect(_.SOUND_PATH.GAME_BATTLE, "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "游戏开始";
this.addClick(i, () => {
this._iSound.playEffect(_.SOUND_PATH.GAME_START, "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "光柱";
this.addClick(i, () => {
this._iSound.playEffect(_.SOUND_PATH.GAME_HE, "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "自摸";
this.addClick(i, () => {
this._iSound.playEffect((0, _.getSexEff)(e, "ZIMO_SOUND"), "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "胡";
this.addClick(i, () => {
this._iSound.playEffect((0, _.getSexEff)(e, "HU_SOUND"), "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "按钮点击";
this.addClick(i, () => {
this._iSound.playEffect(_.SOUND_PATH.BTN_CLICK, "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "结算摊牌";
this.addClick(i, () => {
this._iSound.playEffect(_.SOUND_PATH.GAME_HANDOPENYAKUMAN, "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "摸牌";
this.addClick(i, () => {
this._iSound.playEffect(_.SOUND_PATH.GAME_NDROP, "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "爆";
this.addClick(i, () => {
this._iSound.playEffect((0, _.getSexEff)(e, "BAO_SOUND"), "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "炸";
this.addClick(i, () => {
this._iSound.playEffect((0, _.getSexEff)(e, "BOMB_SOUND"), "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "失败";
this.addClick(i, () => {
this._iSound.playEffect(_.SOUND_PATH.GAME_LOSE, "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "胜利";
this.addClick(i, () => {
this._iSound.playEffect(_.SOUND_PATH.GAME_WIN, "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "提牌";
this.addClick(i, () => {
this._iSound.playEffect(_.SOUND_PATH.GAME_HANDSELECT, "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "发牌";
this.addClick(i, () => {
this._iSound.playEffect(_.SOUND_PATH.GAME_PAESLIDE, "game_k7star");
});
}
if (i = this.view.KW_TestBtnListSound.addItemFromPool()) {
d.gf.FGUI.getChild(i, "title").asTextField.text = "出牌";
this.addClick(i, () => {
this._iSound.playEffect(_.SOUND_PATH.GAME_NDROP, "game_k7star");
});
}
}
initUI() {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_game_kwx_change, {
timeout: 1
});
}
onDestroy() {}
onBtnTest1() {
this.dispatch("reset" + n.GAME_ID);
this.dispatch("onGameEnd" + n.GAME_ID);
const t = new g.GLProtocol.msgBaseInfo();
t._banker_seat = 0;
t._base_score = 1e5;
t._charge = 1e3;
t._win_limit = 1e8;
t._win_mult = 5e7;
this._gameLogicManager.onMsgBaseInfo(t);
const e = this.getImpl(d.comm.lobby.IUserManager)._userManager, i = new g.GLProtocol.msgPlayerInfo();
i._name = e.nickname;
i._seat = 0;
i._sr = e.userScore;
i._nid = e.numid;
i._uid = e.userid;
this._gameLogicManager.onMsgPlayerInfo(i);
const s = new g.GLProtocol.msgPlayerInfo();
s._name = "test1";
s._seat = 1;
s._sr = 1e7;
s._nid = 1e3;
s._uid = 1e3;
this._gameLogicManager.onMsgPlayerInfo(s);
const o = new g.GLProtocol.msgPlayerInfo();
o._name = "test2";
o._seat = 2;
o._sr = 1e7;
o._nid = 1001;
o._uid = 1001;
this._gameLogicManager.onMsgPlayerInfo(o);
const a = new g.GLProtocol.msgPlayerInfo();
a._name = "test3";
a._seat = 3;
a._sr = 1e7;
a._nid = 1002;
a._uid = 1002;
this._gameLogicManager.onMsgPlayerInfo(a);
const _ = new g.GLProtocol.msgGameState();
_._state = l.ENUM_GAME_STATE.GS_START;
this._gameLogicManager.onMsgGameState(_);
const r = new g.GLProtocol.msgTimer();
r._time = 10;
r._seat = -1;
this._gameLogicManager.onMsgTimer(r);
}
onBtnTest2() {
const t = new g.GLProtocol.msgGameState();
t._state = l.ENUM_GAME_STATE.GS_TAKE_FIRST;
this._gameLogicManager.onMsgGameState(t);
const e = new g.GLProtocol.msgTakeFirst();
e._seat = 0;
e._cards = [ 1, 1, 14, 27, 40, 1, 14 ];
this._gameLogicManager.onMsgTakeFirst(e);
const i = new g.GLProtocol.msgTakeFirst();
i._seat = 1;
i._cards = [ 12, 13, 14, 1, 2, 6, 8 ];
this._gameLogicManager.onMsgTakeFirst(i);
const s = new g.GLProtocol.msgTakeFirst();
s._seat = 2;
s._cards = [ 1, 1, 14, 3, 15, 16, 17 ];
this._gameLogicManager.onMsgTakeFirst(s);
const o = new g.GLProtocol.msgTakeFirst();
o._seat = 3;
o._cards = [ 55, 55, 55, 55, 55, 55, 55 ];
this._gameLogicManager.onMsgTakeFirst(o);
const n = this._tableData.getMultConfig(), _ = new g.GLProtocol.msgRecommendCards();
_._ct = a.ENUM_CARD_TYPE.T_B4_J_Q;
_._mult = n[a.ENUM_CARD_TYPE.T_B4_J_Q] || 0;
_._hand_count = 7;
_._hand_cards = [ 11, 11, 24, 37, 12, 12, 25 ];
_._left_count = 1;
_._left_cards = [ 25 ];
this._gameLogicManager.onMsgRecommendCards(_);
}
onBtnTest3() {
const t = new g.GLProtocol.msgCloneCards();
t._old_card_values = [ 9, 10, 11, 12, 13, 1 ];
t._new_card_values = [ 2, 3, 4, 5, 6, 8 ];
this._gameLogicManager.onMsgCloneCards(t);
const e = new g.GLProtocol.msgHandCards();
e._hand_cards = [ 34, 34, 21, 21, 54, 6, 43 ];
e._seat = 0;
e._flag = 2;
this._gameLogicManager.onMsgHandCards(e);
}
onBtnTest4() {
const t = new g.GLProtocol.msgGameState();
t._state = l.ENUM_GAME_STATE.GS_TAKE_NEXT;
this._gameLogicManager.onMsgGameState(t);
const e = new g.GLProtocol.msgAddCards();
e._seat = 2;
e._cards = [ 55 ];
e._count = e._cards.length;
this._gameLogicManager.onMsgAddCards(e);
}
onBtnTest5() {
const t = new g.GLProtocol.msgGameState();
t._state = l.ENUM_GAME_STATE.GS_PLAY;
this._gameLogicManager.onMsgGameState(t);
const e = new g.GLProtocol.msgPlayCards();
e._seat = 0;
e._cards = 1;
this._gameLogicManager.onMsgPlayCards(e);
}
onBtnTest6() {
const t = new g.GLProtocol.msgRoundResult();
t._count = 1;
t._ct[0] = [ 0, 0, 1, 1 ];
t._mult[0] = [ 0, 0, 1966080, 1966080 ];
t._score[0] = [ 0, -3e8, 555624362, 555624362 ];
t._dhq_cnt[0] = [ 0, 0, 0, 0 ];
t._hu_card[0] = [ 0, 0, 20, 0 ];
t._self_hu[0] = [ 2, 2, 1, 1 ];
this._gameLogicManager.onMsgRoundResult(t);
}
onBtnTest7() {
const t = new g.GLProtocol.msgTowerCards();
t._seat = 0;
t._mult = 2;
t._flag = g.GLProtocol.msgTowerCards.eFlag.FLAG_BOMB;
t._bomb_count = 4;
t._bomb_cards = [ 1, 1, 1, 14 ];
this._gameLogicManager.onMsgTowerCards(t);
}
onBtnTest8() {
const t = new g.GLProtocol.msgTowerCards();
t._seat = 0;
t._mult = 2048;
t._one_tower_mult = 2;
t._flag = g.GLProtocol.msgTowerCards.eFlag.FLAG_TOWER;
t._bomb_count = 4;
t._bomb_cards = [ 1, 1, 1, 14 ];
t._tower_count = 8;
t._tower_cards = [ 1, 1, 1, 14, 1, 1, 1, 100 ];
t._is_no_limit = 1;
t._no_limit_mult = 2;
this._gameLogicManager.onMsgTowerCards(t);
}
onBtnTest9() {
const t = new g.GLProtocol.msgNobilityResult();
t._flag = [ 0, 0, 0, 0 ];
t._mult = [ 0, 0, 0, 0 ];
t._winlost = [ 0, 0, 0, 0 ];
t._dp_left_cnt = 0;
t._np_start_time = 0;
this._gameLogicManager.onMsgNobilityResult(t);
const e = new g.GLProtocol.msgTotalResult();
e._score = [ -1e5, 1333333, -23396421, -124454132 ];
e._jzz_ex_score = [ 0, 0, 0, 0 ];
e._total_win_dhq_cnt = [ 0, 0, 0, 0 ];
e._hand_cards = [ 13, 14, 15, 16, 17, 18, 19 ];
e._count = 41;
e._ct = [ a.ENUM_CARD_TYPE.T_6_2, a.ENUM_CARD_TYPE.T_5_3, a.ENUM_CARD_TYPE.T_4_4, a.ENUM_CARD_TYPE.T_2S4_2, a.ENUM_CARD_TYPE.T_4_2_2, a.ENUM_CARD_TYPE.T_2B_5_10, a.ENUM_CARD_TYPE.T_2B_2_8, a.ENUM_CARD_TYPE.T_2B_K_X, a.ENUM_CARD_TYPE.T_2B_1_9, a.ENUM_CARD_TYPE.T_2B_3_J, a.ENUM_CARD_TYPE.T_B4_1_2, a.ENUM_CARD_TYPE.T_B4_2_3, a.ENUM_CARD_TYPE.T_B4_4_5, a.ENUM_CARD_TYPE.T_B4_6_7, a.ENUM_CARD_TYPE.T_B4_8_9, a.ENUM_CARD_TYPE.T_B4_9_10, a.ENUM_CARD_TYPE.T_B4_J_Q, a.ENUM_CARD_TYPE.T_B4_Q_K, a.ENUM_CARD_TYPE.T_B5_2_3, a.ENUM_CARD_TYPE.T_B5_4_5, a.ENUM_CARD_TYPE.T_B5_6_7, a.ENUM_CARD_TYPE.T_B5_8_9, a.ENUM_CARD_TYPE.T_B5_J_Q, a.ENUM_CARD_TYPE.T_B6_2_3, a.ENUM_CARD_TYPE.T_B6_4_5, a.ENUM_CARD_TYPE.T_B6_6_7, a.ENUM_CARD_TYPE.T_B6_8_9, a.ENUM_CARD_TYPE.T_B6_J_Q, a.ENUM_CARD_TYPE.T_B8_A, a.ENUM_CARD_TYPE.T_B8_2, a.ENUM_CARD_TYPE.T_B8_3, a.ENUM_CARD_TYPE.T_B8_4, a.ENUM_CARD_TYPE.T_B8_5, a.ENUM_CARD_TYPE.T_B8_6, a.ENUM_CARD_TYPE.T_B8_7, a.ENUM_CARD_TYPE.T_B8_8, a.ENUM_CARD_TYPE.T_B8_9, a.ENUM_CARD_TYPE.T_B8_10, a.ENUM_CARD_TYPE.T_B8_J, a.ENUM_CARD_TYPE.T_B8_Q, a.ENUM_CARD_TYPE.T_B8_K ];
e._hu_car = [ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ];
e._count = e._hu_car.length;
for (let t = 0; t < e._hu_car.length; t++) {
const i = e._hu_car[t];
e._hu_car_list[t] = [ ...e._hand_cards, i ];
}
this._gameLogicManager.onMsgTotalResult(e);
}
onBtnTest10() {
const t = new g.GLProtocol.msgGameState();
t._state = l.ENUM_GAME_STATE.GS_TAKE_NEXT;
this._gameLogicManager.onMsgGameState(t);
const e = new g.GLProtocol.msgTimer();
e._seat = 0;
e._time = 10;
this._gameLogicManager.onMsgTimer(e);
const i = new g.GLProtocol.msgTakeFirst();
i._seat = 0;
i._cards = [ 1, 2, 3, 4, 5, 6, 7 ];
this._gameLogicManager.onMsgTakeFirst(i);
const o = new g.GLProtocol.msgAddCards();
o._seat = 0;
o._cards = [ s.CardID.CID_GOLD ];
o._count = o._cards.length;
this._gameLogicManager.onMsgAddCards(o);
const a = new g.GLProtocol.msgStartChooseCard();
a._seat = 0;
a._count = 4;
this._gameLogicManager.onMsgStartChooseCard(a);
}
onBtnTest10_resp(t) {
const e = new g.GLProtocol.msgEndChooseCard();
e._seat = 0;
e._index = t;
e._cards = [ 12, 15, 32, 54 ];
e._gold_buff = 1;
this._gameLogicManager.onMsgEndChooseCard(e);
}
onBtnTest11() {
const t = new g.GLProtocol.msgGameState();
t._state = l.ENUM_GAME_STATE.GS_TAKE_NEXT;
this._gameLogicManager.onMsgGameState(t);
const e = new g.GLProtocol.msgTimer();
e._seat = 1;
e._time = 10;
this._gameLogicManager.onMsgTimer(e);
const i = new g.GLProtocol.msgTakeFirst();
i._seat = 1;
i._cards = [ 0, 0, 0, 0, 0, 0, 0 ];
this._gameLogicManager.onMsgTakeFirst(i);
const o = new g.GLProtocol.msgAddCards();
o._seat = 1;
o._cards = [ s.CardID.CID_GOLD ];
o._count = o._cards.length;
this._gameLogicManager.onMsgAddCards(o);
const a = new g.GLProtocol.msgStartChooseCard();
a._seat = 1;
a._count = 4;
this._gameLogicManager.onMsgStartChooseCard(a);
}
onBtnTest12() {
const t = new g.GLProtocol.msgEndChooseCard();
t._seat = 1;
t._index = 0;
t._cards = [ 12, 15, 32, 54 ];
this._gameLogicManager.onMsgEndChooseCard(t);
}
onBtnTest13() {
const t = new g.GLProtocol.msgEndChooseCard();
t._seat = 1;
t._index = 0;
t._cards = [ 0, 0, 0, 0 ];
this._gameLogicManager.onMsgEndChooseCard(t);
}
onBtnTest14() {
const t = new g.GLProtocol.msgActPowerNew();
t._bomb_card_value = [ 14, 0 ];
t._tower_card_value = 11;
t._zimo_card_count = 1;
t._zimo_card_mult = [ 5e5 ];
t._zimo_card = [ 1 ];
t._ming = 1;
t._play = 1;
this._gameLogicManager.onMsgActPowerNew(t);
}
onBtnTest15() {
const t = new g.GLProtocol.msgHandCards();
t._hand_cards = [ 34, 34, 21, 21, 54, 6, 43 ];
t._seat = 0;
t._flag = 1;
this._gameLogicManager.onMsgHandCards(t);
const e = new g.GLProtocol.msgHandCards();
e._hand_cards = [ 34, 34, 21, 21, 54, 6, 43 ];
e._seat = 1;
e._flag = 1;
this._gameLogicManager.onMsgHandCards(e);
const i = new g.GLProtocol.msgHandCards();
i._hand_cards = [ 34, 34, 21, 21, 54, 6, 43 ];
i._seat = 2;
i._flag = 1;
this._gameLogicManager.onMsgHandCards(i);
const s = new g.GLProtocol.msgHandCards();
s._hand_cards = [ 34, 34, 21, 21, 54, 6, 43 ];
s._seat = 3;
s._flag = 1;
this._gameLogicManager.onMsgHandCards(s);
}
shakeMain() {
this.dispatch("shakeEffect" + n.GAME_ID, "doubleprops");
}
onBtnTest16(t) {
const e = new g.GLProtocol.msgGoldBuffInfo();
e._seat = 0;
e._index = t;
e._buff_id = 1;
e._gold_buff_cnt = 3;
e._buff = '[{"id":7,"cnt":9999,"flag":1,"mult":0},{"id":1,"cnt":2,"flag":0,"mult":0},{"id":5,"cnt":2,"flag":0,"mult":1000}]';
e._buffParse = [ {
id: 7,
cnt: 9999,
flag: 1,
mult: 0
}, {
id: 1,
cnt: 2,
flag: 0,
mult: 0
}, {
id: 5,
cnt: 2,
flag: 0,
mult: 1e3
} ];
e._buff_id = e._buffParse[t].id;
this._gameLogicManager.onMsgGoldBuffInfo(e);
}
};
u([ d.gf.listen("onBtnTest3" + n.GAME_ID) ], m.prototype, "onBtnTest3", null);
u([ d.gf.listen("onBtnTest10_resp" + n.GAME_ID) ], m.prototype, "onBtnTest10_resp", null);
u([ d.gf.listen("onBtnTest16_resp" + n.GAME_ID) ], m.prototype, "onBtnTest16", null);
const C = m = u([ d.gf.controller({
name: "GameTest",
module: "game_k7star",
fguiObject: "Test",
layer: d.gf.ViewLayer.Base,
fguiPackage: [ "Game_K7Star_Btn" ],
cachable: !0,
sortingOrder: l.FGUI_ORDER.GAME_BTN
}) ], m);
},
"./bin/ui/main/GameTing.js": (t, i, s) => {
s.r(i);
s.d(i, {
default: () => g
});
var o = s("./bin/config/CardCode.js"), a = s("./bin/config/CardType.js"), n = s("./bin/config/GameConfig.js"), l = s("./bin/config/GameDefine.js"), _ = s("./bin/data/TableData.js"), r = s("./bin/gf.js"), d = s("./bin/ui/component/CardComb.js"), h = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
};
let c = class extends r.gf.mvc.UIController {
constructor() {
super(...arguments);
this._isGuide = !1;
this._subView = null;
this._maxCardItem = 7;
this._tingInfo = [];
}
onUIBinded() {
this._tableData = this.getImpl(_.default);
this.addClick(this.view.KW_Btn_Mask, () => {
this.showView(!1);
this._isGuide && this.dispatch(l.GUIDE_EVENT.GUI_EVE_CLOSE_TING_LIST + n.GAME_ID);
});
}
onUnUIBinded() {}
initUI() {
this._tingInfo = [];
this._subView = this.view.KW_TingNode;
for (let t = 0; t < 4; t++) {
const e = this._subView["KW_ItemBG_" + t], i = this._subView["KW_ItemCard_" + t], s = this._subView["KW_ItemTop_" + t];
r.gf.setLayerNode(e);
r.gf.setLayerNode(i);
r.gf.setLayerNode(s);
for (let t = 0; t < 7; t++) {
const e = i["KW_ListCard_" + t];
e && r.gf.setLayerNode(e);
}
}
this.dispatch("TingShow" + n.GAME_ID, !1);
this.view.C_ShowGuide.setSelectedIndex(0);
}
onDestroy() {}
onChangeSeat() {
this.initUI();
}
checkShow(t, e) {
const i = this._tableData.getTingList();
let s = null;
for (let e = 0; e < i.length; e++) {
const o = i[e];
if (o._out_card == t) {
s = o;
break;
}
}
if (s) {
this.rebuildTingInfo(s);
this.dispatch("TingShow" + n.GAME_ID, e);
} else this.dispatch("TingShow" + n.GAME_ID, !1);
}
rebuildTingInfo(t) {
var e;
const i = [], s = this._tableData.getCardLogicData(), a = (null == t ? void 0 : t._count) || 0;
for (let n = 0; n < a; n++) {
const a = t._ct[n], l = t._mult[n];
let _ = t._hu_cards[n], r = t._hu_card_left_count[n];
const d = t._gold_mult[n], h = t._bao_mult[n], c = t._tower_mult[n], g = t._ming_mult[n];
r < 0 && (r = 0);
let u = 0;
if (_ === o.CardValue.CV_SJ) {
u = s.getCardPower(o.CardID.CID_SJ);
_ = o.CardID.CID_SJ;
} else if (_ === o.CardValue.CV_GOLD) {
r = (null === (e = this._tableData.getDeckCount()) || void 0 === e ? void 0 : e._gold_left_count) || 0;
u = s.getCardPower(o.CardID.CID_GOLD);
_ = o.CardID.CID_GOLD;
} else u = s.getCardPower(_);
const m = {
_power: u,
_mult: l,
_hu_cards: _,
_hu_card_left_count: r,
_ct: a,
_gold_mult: d,
_bao_mult: h,
_tower_mult: c,
_ming_mult: g
};
i.push(m);
}
i.sort((t, e) => t._mult != e._mult ? e._mult - t._mult : (t._power > 14 || e._power > 14) && t._power != e._power ? e._power - t._power : t._hu_card_left_count != e._hu_card_left_count ? e._hu_card_left_count - t._hu_card_left_count : t._hu_cards != e._hu_cards ? e._hu_cards - t._hu_cards : 0);
this._tingInfo = i;
}
showView(t, e = !1, i = !1) {
if (t) {
this.updateTingInfo(e);
this._isGuide = i;
this.view.C_ShowGuide.setSelectedIndex(i ? 1 : 0);
this.view.sortingOrder = i ? l.FGUI_ORDER.GAME_POP + 1 : l.FGUI_ORDER.GAME_TING;
}
this.view.visible = t;
}
onBtnTing() {
this.view.visible ? this.dispatch("TingShow" + n.GAME_ID, !1) : this.dispatch("TingShow" + n.GAME_ID, !0, !0);
}
updateTingInfo(t) {
if (t) {
const t = this._tableData.getNowTingInfo();
this.rebuildTingInfo(t);
}
const i = this._tableData.getBaseInfo()._base_score, s = this._tableData.getWinLimitMult() || 0, o = r.comm.Util.clone(this._tingInfo);
let n = 0, l = 0;
const _ = o.length;
for (let t = 0; t < _; t++) {
n += Math.min(s, o[t]._mult) * o[t]._hu_card_left_count;
l += o[t]._hu_card_left_count;
}
this._subView.KW_TextAward.text = `${r.comm.StringUtils.dealBigNumEx5(n * i)}云币`;
this._subView.KW_TextMult.text = `${r.comm.StringUtils.dealBigNumEx5(n)}倍`;
this._subView.KW_TextCnt.text = `${l}张`;
let d = {};
const h = [];
for (let t = 0; t < o.length; t++) {
const e = o[t];
if (null == d[e._mult]) {
for (const t in d) if (Object.prototype.hasOwnProperty.call(d, t)) {
const e = d[t];
h.push(e);
}
(d = {})[e._mult] = [];
}
d[e._mult].push(e);
}
for (const t in d) if (Object.prototype.hasOwnProperty.call(d, t)) {
const e = d[t];
h.push(e);
}
let c = 0;
const g = [];
for (let t = 0; t < h.length; t++) {
const e = h[t];
if (0 != t) if (e.length <= 3) {
g[c].length >= 2 && c++;
void 0 === g[c] && (g[c] = []);
g[c].push(e);
} else {
void 0 === g[++c] && (g[c] = []);
g[c].push(e);
} else {
void 0 === g[c] && (g[c] = []);
g[c].push(e);
}
}
this._subView.C_Line.selectedIndex = g.length;
this.view.C_Line.selectedIndex = g.length;
for (let t = 0; t < g.length; t++) {
const i = g[t], o = this._subView["KW_ItemBG_" + t], n = this._subView["KW_ItemCard_" + t], l = this._subView["KW_ItemTop_" + t];
for (let t = 0; t < this._maxCardItem; t++) n["KW_ListCard_" + t].visible = !1;
for (let t = 0; t < this._maxCardItem; t++) l["KW_ListText_" + t].visible = !1;
for (let t = 0; t < 2; t++) l["KW_Top" + t].visible = !1;
if (1 == i.length) if (i[0].length < 3) {
o.C_Type.selectedIndex = 0;
n.C_Type.selectedIndex = 0;
l.C_Type.selectedIndex = 0;
} else {
o.C_Type.selectedIndex = 2;
n.C_Type.selectedIndex = 2;
l.C_Type.selectedIndex = 2;
} else {
o.C_Type.selectedIndex = 1;
n.C_Type.selectedIndex = 1;
l.C_Type.selectedIndex = 1;
}
for (let t = 0; t < i.length; t++) {
const e = i[t], n = Math.min(s, e[0]._mult), l = a.CardTypeInfo[e[0]._ct][1];
o["KW_CardType" + t].text = `${l}`;
o["KW_CardMult" + t].text = `${r.comm.StringUtils.dealBigNumEx5(n)}倍`;
let _ = 0;
for (let t = 0; t < e.length; t++) _ += e[t]._hu_card_left_count;
o["KW_CardCnt" + t].text = `剩余${_}张`;
}
for (let t = 0; t < i.length; t++) for (let o = 0; o < i[t].length; o++) {
const a = i[t][o];
let _ = o;
1 === t && (_ += 3);
const r = n["KW_ListCard_" + _];
r.visible = !0;
const d = l["KW_ListText_" + _];
d.visible = !0;
this.updateCardNode(r, d, a._hu_cards, a._hu_card_left_count);
l["KW_Top" + t].visible = a._mult >= s;
r.on(e.Event.TOUCH_BEGIN, this.onClickBannerItem.bind(this, r, a), this);
r.on(e.Event.TOUCH_END, this.onClickBannerItemCeancal.bind(this), this);
r.on(e.Event.TOUCH_MOVE, this.onClickBannerItemCeancal.bind(this), this);
}
}
}
updateCardNode(t, e, i, s) {
for (let e = 0; e < t.numChildren; e++) {
let i = null;
if (t.numChildren > e) i = t.getChildAt(e); else {
i = t.addItemFromPool();
r.gf.setLayerNode(i);
}
i.visible = !1;
}
for (let t = 0; t < e.numChildren; t++) {
const i = e.getChildAt(t);
i.C_Count.selectedIndex = 0;
i.visible = !1;
}
let a = [];
if (i === o.CardID.CID_SJ || i === o.CardID.CID_BJ) a = [ o.CardID.CID_SJ, o.CardID.CID_BJ ]; else if (i === o.CardID.CID_GOLD) a = [ o.CardID.CID_GOLD ]; else for (let t = 0; t < 4; t++) a.push(i + 13 * t);
for (let i = 0; i < a.length; i++) {
const o = a[i];
let n = null;
if (t.numChildren > i) n = t.getChildAt(i); else {
n = t.addItemFromPool();
r.gf.setLayerNode(n);
}
n.visible = !0;
d.default.setCard(n, o);
e.getChildAt(i).visible = !0;
if (i == a.length - 1) {
e.getChildAt(i).C_Count.selectedIndex = 1;
e.getChildAt(i).KW_TextCnt.text = `${s}`;
}
n.select.selectedIndex = 0 < s ? 0 : 1;
}
}
onClickBannerItem(t, i) {
this.unscheduleAllCallbacks();
this.view.KW_Tips.KW_Gold.text = `${0 != i._gold_mult ? r.comm.StringUtils.dealBigNumEx5(i._gold_mult) : "---"}`;
this.view.KW_Tips.KW_Bao.text = `${0 != i._bao_mult ? r.comm.StringUtils.dealBigNumEx5(i._bao_mult) : "---"}`;
this.view.KW_Tips.KW_Ming.text = `${0 != i._ming_mult ? r.comm.StringUtils.dealBigNumEx5(i._ming_mult) : "---"}`;
this.view.KW_Tips.KW_Tower.text = `${0 != i._tower_mult ? r.comm.StringUtils.dealBigNumEx5(i._tower_mult) : "---"}`;
const s = (a.CardTypeInfo[i._ct] || [])[1] || "";
this.view.KW_Tips.KW_CardName.text = `${s}`;
const o = this._tableData.getBaseInfo()._base_score || 0, n = this._tableData.getWinLimitMult() || 0, l = i._mult || 0, _ = Math.min(n, l);
this.view.KW_Tips.KW_Score.text = `${0 != _ ? r.comm.StringUtils.dealBigNumEx5(_ * o) : "---"}`;
this.view.KW_Tips.KW_MultTotal.text = `${0 != _ ? r.comm.StringUtils.dealBigNumEx5(_) : "---"}`;
const d = t.localToGlobal(), h = e.GRoot.inst.globalToLocal(d.x, d.y);
this.view.KW_Tips.setPosition(h.x - 160, h.y - 90);
this.scheduleOnce(() => {
this.view.KW_Tips.visible = !0;
}, 1);
}
onClickBannerItemCeancal() {
this.unscheduleAllCallbacks();
this.view.KW_Tips.visible = !1;
}
updateTingMult() {
if (!0 === this.view.visible) {
const t = this._tableData.getNowTingInfo();
this.rebuildTingInfo(t);
this.dispatch("TingShow" + n.GAME_ID, !0);
}
}
};
h([ r.gf.listen("onChangeSeat" + n.GAME_ID) ], c.prototype, "onChangeSeat", null);
h([ r.gf.listen("TingCheckShow" + n.GAME_ID) ], c.prototype, "checkShow", null);
h([ r.gf.listen("TingShow" + n.GAME_ID) ], c.prototype, "showView", null);
h([ r.gf.listen("onBtnTing" + n.GAME_ID) ], c.prototype, "onBtnTing", null);
h([ r.gf.listen("updateTingMult" + n.GAME_ID) ], c.prototype, "updateTingMult", null);
const g = c = h([ r.gf.controller({
name: "GameTing",
module: "game_k7star",
fguiObject: "TingView",
layer: r.gf.ViewLayer.Base,
fguiPackage: [ "Game_K7Star_Common", "Game_K7Star_Card", "Game_K7Star_Main" ],
cachable: !0,
sortingOrder: l.FGUI_ORDER.GAME_TING
}) ], c);
},
"./bin/ui/main/GameTrust.js": (t, e, i) => {
i.r(e);
i.d(e, {
default: () => r
});
var s = i("./bin/config/GameDefine.js"), a = i("./bin/gf.js"), n = i("./bin/logic/moudles/GameLogicManager.js"), l = i("./bin/logic/protocol/GLProtocol.js");
let _ = class extends a.gf.mvc.UIController {
onUIBinded() {
this._gameLogicManager = this.getImpl(n.default);
this.addClick(this.view.KW_CompMask, this.onBtnCancelTrust);
this.addClick(this.view.KW_BtnTrustCancel, this.onBtnCancelTrust);
}
onUnUIBinded() {}
initUI() {
this.getImpl(o.IShuShuAnalyticsUtil).track(o.ShuShuAnalyticsEvent.client_game_kwx_change, {
timeout: 1
});
}
onDestroy() {}
onBtnCancelTrust() {
this._gameLogicManager.sendTrust(l.GLProtocol.msgTrust.eFlag.FLAG_OFF);
this.close();
}
};
const r = _ = function(t, e, i, s) {
var o, a = arguments.length, n = a < 3 ? e : null === s ? s = Object.getOwnPropertyDescriptor(e, i) : s;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(t, e, i, s); else for (var l = t.length - 1; l >= 0; l--) (o = t[l]) && (n = (a < 3 ? o(n) : a > 3 ? o(e, i, n) : o(e, i)) || n);
return a > 3 && n && Object.defineProperty(e, i, n), n;
}([ a.gf.controller({
name: "GameTrust",
module: "game_k7star",
fguiObject: "TrustView",
layer: a.gf.ViewLayer.Top,
fguiPackage: [ "Game_K7Star_Main" ],
cachable: !0,
sortingOrder: s.FGUI_ORDER.GAME_POP
}) ], _);
}
}, n = {};
function l(t) {
var e = n[t];
if (void 0 !== e) return e.exports;
var i = n[t] = {
exports: {}
};
a[t](i, i.exports, l);
return i.exports;
}
l.n = t => {
var e = t && t.__esModule ? () => t.default : () => t;
l.d(e, {
a: e
});
return e;
};
l.d = (t, e) => {
for (var i in e) l.o(e, i) && !l.o(t, i) && Object.defineProperty(t, i, {
enumerable: !0,
get: e[i]
});
};
l.o = (t, e) => Object.prototype.hasOwnProperty.call(t, e);
l.r = t => {
"undefined" != typeof Symbol && Symbol.toStringTag && Object.defineProperty(t, Symbol.toStringTag, {
value: "Module"
});
Object.defineProperty(t, "__esModule", {
value: !0
});
};
var _ = {};
(() => {
l.r(_);
l("./bin/config/CardCode.js"), l("./bin/config/CardConfig.js"), l("./bin/config/CardType.js"), 
l("./bin/config/GameConfig.js"), l("./bin/config/GameDefine.js"), l("./bin/config/GameEvents.js"), 
l("./bin/config/SoundConfig.js"), l("./bin/data/CardData.js"), l("./bin/data/CardLogicData.js"), 
l("./bin/data/GameLogicData.js"), l("./bin/data/PlayerData.js"), l("./bin/data/TableData.js"), 
l("./bin/gameLogic/CardRuleLogic.js"), l("./bin/gf.js"), l("./bin/InitGame.js"), 
l("./bin/interface/Interface.js"), l("./bin/logic/actModules/data/GameActData.js"), 
l("./bin/logic/actModules/GameActModule.js"), l("./bin/logic/actModules/GameAutoModule.js"), 
l("./bin/logic/guide/GameGuideModule.js"), l("./bin/logic/moudles/GameLogicManager.js"), 
l("./bin/logic/protocol/FWProtocol.js"), l("./bin/logic/protocol/GLProtocol.js"), 
l("./bin/logic/protocol/LCLProtocol.js"), l("./bin/logic/protocol/RLProtocol.js"), 
l("./bin/manager/activeManager.js"), l("./bin/manager/ElevatingManager.js"), l("./bin/manager/GameActiveBase.js"), 
l("./bin/PlayerInfoManager.js"), l("./bin/ui/activity/BankruptInGame.js"), l("./bin/ui/activity/powerProp/DoublePropGift.js"), 
l("./bin/ui/activity/RechargeInGame.js"), l("./bin/ui/activity/revive/ReviveView.js"), 
l("./bin/ui/activity/Turntable.js"), l("./bin/ui/activity/WinningGiftInGame.js"), 
l("./bin/ui/component/CardComb.js"), l("./bin/ui/component/CardComponent.js"), l("./bin/ui/component/MingRenTangBtn.js"), 
l("./bin/ui/guide/GameGuide.js"), l("./bin/ui/guide/GameGuideAbort.js"), l("./bin/ui/guide/GameGuideEnter.js"), 
l("./bin/ui/guide/GameGuidePop.js"), l("./bin/ui/main/GameAni.js"), l("./bin/ui/main/GameBtn.js"), 
l("./bin/ui/main/GameBuffDetails.js"), l("./bin/ui/main/GameCard.js"), l("./bin/ui/main/GameCardClone.js"), 
l("./bin/ui/main/GameCardLuck.js"), l("./bin/ui/main/GameExitTips.js"), l("./bin/ui/main/GameFlow.js"), 
l("./bin/ui/main/GameMain.js"), l("./bin/ui/main/GameMultTable.js"), l("./bin/ui/main/GameNoteCard.js"), 
l("./bin/ui/main/GamePlayer.js"), l("./bin/ui/main/GamePlayerInfo.js"), l("./bin/ui/main/GameResult.js"), 
l("./bin/ui/main/GameSetting.js"), l("./bin/ui/main/GameSpecCard.js"), l("./bin/ui/main/GameTest.js"), 
l("./bin/ui/main/GameTing.js"), l("./bin/ui/main/GameTrust.js");
})();
};
cc._RF.pop();
}, {} ]
}, {}, [ "game_k7star" ]);