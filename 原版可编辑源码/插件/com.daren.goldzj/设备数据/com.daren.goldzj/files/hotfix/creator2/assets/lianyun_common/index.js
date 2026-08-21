window.__require = function A(e, C, E) {
function D(B, F) {
if (!C[B]) {
if (!e[B]) {
var n = B.split("/");
n = n[n.length - 1];
if (!e[n]) {
var i = "function" == typeof __require && __require;
if (!F && i) return i(n, !0);
if (t) return t(n, !0);
throw new Error("Cannot find module '" + B + "'");
}
B = n;
}
var o = C[B] = {
exports: {}
};
e[B][0].call(o.exports, function(A) {
return D(e[B][1][A] || A);
}, o, o.exports, A, e, C, E);
}
return C[B].exports;
}
for (var t = "function" == typeof __require && __require, B = 0; B < E.length; B++) D(E[B]);
return D;
}({
common: [ function(A, e) {
"use strict";
cc._RF.push(e, "c4ed991LLhFV5UELPfZ8GE/", "common");
var C = window;
window.createlianyun_common = function() {
if (C.gfenv) var A = gfenv; else A = C;
var e = A.gflianyunfgui, E = {};
A.common = E;
var D, t, B, F, n = A.gameframe, i = n, o = this && this.__extends || (D = function(A, e) {
return (D = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(A, e) {
A.__proto__ = e;
} || function(A, e) {
for (var C in e) Object.prototype.hasOwnProperty.call(e, C) && (A[C] = e[C]);
})(A, e);
}, function(A, e) {
if ("function" != typeof e && null !== e) throw new TypeError("Class extends value " + String(e) + " is not a constructor or null");
D(A, e);
function C() {
this.constructor = A;
}
A.prototype = null === e ? Object.create(e) : (C.prototype = e.prototype, new C());
}), r = this && this.__decorate || function(A, e, C, E) {
var D, t = arguments.length, B = t < 3 ? e : null === E ? E = Object.getOwnPropertyDescriptor(e, C) : E;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) B = Reflect.decorate(A, e, C, E); else for (var F = A.length - 1; F >= 0; F--) (D = A[F]) && (B = (t < 3 ? D(B) : t > 3 ? D(e, C, B) : D(e, C)) || B);
return t > 3 && B && Object.defineProperty(e, C, B), B;
}, a = this && this.__read || function(A, e) {
var C = "function" == typeof Symbol && A[Symbol.iterator];
if (!C) return A;
var E, D, t = C.call(A), B = [];
try {
for (;(void 0 === e || e-- > 0) && !(E = t.next()).done; ) B.push(E.value);
} catch (A) {
D = {
error: A
};
} finally {
try {
E && !E.done && (C = t.return) && C.call(t);
} finally {
if (D) throw D.error;
}
}
return B;
}, s = this && this.__spreadArray || function(A, e, C) {
if (C || 2 === arguments.length) for (var E, D = 0, t = e.length; D < t; D++) if (E || !(D in e)) {
E || (E = Array.prototype.slice.call(e, 0, D));
E[D] = e[D];
}
return A.concat(E || Array.prototype.slice.call(e));
}, c = this && this.__values || function(A) {
var e = "function" == typeof Symbol && Symbol.iterator, C = e && A[e], E = 0;
if (C) return C.call(A);
if (A && "number" == typeof A.length) return {
next: function() {
A && E >= A.length && (A = void 0);
return {
value: A && A[E++],
done: !A
};
}
};
throw new TypeError(e ? "Object is not iterable." : "Symbol.iterator is not defined.");
}, l = this && this.__assign || function() {
return (l = Object.assign || function(A) {
for (var e, C = 1, E = arguments.length; C < E; C++) {
e = arguments[C];
for (var D in e) Object.prototype.hasOwnProperty.call(e, D) && (A[D] = e[D]);
}
return A;
}).apply(this, arguments);
};
u || (u = {}), function(A) {
o(C, A);
function C() {
return null !== A && A.apply(this, arguments) || this;
}
C.prototype.init = function() {
console.timeEnd("startLianYunGame 3");
console.time("startLianYunGame 4");
console.log("app root view lz!");
if (e) {
this.getImpl(i.IAssetPlugin).loadFguiAsync("lobby", [ "Lobby_Main" ], "Bg").then(function(A) {
A.name = "bg";
i.FGUI.addChildAt(i.App.inst.root, A, 0);
});
for (var A = [ "BaseRoot", "PopRoot", "TipRoot", "ToastRoot", "LoadingRoot", "TopRoot" ], C = [], D = A.length, t = 0; t < D; t++) {
var B = new e.GComponent();
B.opaque = !1;
i.FGUI.makeFullScreen(B);
i.FGUI.addRelation(B, i.App.inst.root, e.RelationType.Size);
B.name = A[t];
i.castGObjectToGameObject(B).name = A[t];
i.FGUI.addChild(i.App.inst.root, B);
C.push(B);
}
this._viewPlugin.setViewRoot(C);
i.FGUI.setDelayLoadPkg && i.FGUI.setDelayLoadPkg([ "_Common" ]);
}
i.DEBUG() && this.hookViewLog();
E.CommFunc.entGameTime = Date.now();
this.getImpl(E.ISceneSwitch).switchScene(E.SCENENAME.LOBBY);
};
C.prototype.hookViewLog = function() {
var A = this._viewPlugin, e = A.openView, C = A.openViewOnLayer;
A.openView = function(C) {
for (var E, D, t, B = [], F = 1; F < arguments.length; F++) B[F - 1] = arguments[F];
var n = e.call.apply(e, s([ A, C ], a(B), !1));
null === (t = null === (E = null == n ? void 0 : n.then) || void 0 === E ? void 0 : (D = E.call(n, function(A) {
var e;
console.log("[Open Page] viewName: ".concat(C, ", className: ").concat(null === (e = null == A ? void 0 : A.constructor) || void 0 === e ? void 0 : e.name));
})).catch) || void 0 === t || t.call(D, function() {});
return n;
};
A.openViewOnLayer = function(e, E) {
for (var D, t, B, F = [], n = 2; n < arguments.length; n++) F[n - 2] = arguments[n];
var i = C.call.apply(C, s([ A, e, E ], a(F), !1));
null === (B = null === (D = null == i ? void 0 : i.then) || void 0 === D ? void 0 : (t = D.call(i, function(A) {
var C;
console.log("[Open Page] viewName: ".concat(e, ", className: ").concat(null === (C = null == A ? void 0 : A.constructor) || void 0 === C ? void 0 : C.name));
})).catch) || void 0 === B || B.call(t, function() {});
return i;
};
};
r([ i.aware(i.IViewPlugin) ], C.prototype, "_viewPlugin", void 0);
r([ i.init ], C.prototype, "init", null);
C = r([ i.module({
name: "AppRootView"
}) ], C);
}(i.ModuleBase);
(B = (t = "undefined" != typeof A ? A : "undefined" != typeof globalThis ? globalThis : {}).wx || t.tt) && !B.getBatteryInfoSync && (B.getBatteryInfoSync = function() {
return {
level: 100,
isCharging: !1
};
});
u || (u = {}), function(A) {
o(C, A);
function C() {
return null !== A && A.apply(this, arguments) || this;
}
C.prototype.loadRoot = function() {
var A = this, C = e.GComponent.prototype.constructFromResource2;
e.GComponent.prototype.constructFromResource2 = function(A, e) {
C.bind(this)(A, e);
if (i.DEBUG()) this.baseUserData && i.App.inst.context.getBean(i.IViewPlugin).attachWidget(this, this.baseUserData); else try {
this.baseUserData && i.App.inst.context.getBean(i.IViewPlugin).attachWidget(this, this.baseUserData);
} catch (A) {
console.error("constructFromResource2", A);
}
};
var E = new e.GComponent();
E.name = i.castGObjectToGameObject(E).name = "Canvas";
i.FGUI.addChild(i.App.inst.root, E);
var D = new e.GComponent();
D.name = i.castGObjectToGameObject(D).name = "App";
i.FGUI.addChild(i.App.inst.root, D);
i.addBeanComponent(i.castGObjectToGameObject(E), "AppRootView");
try {
i.App.inst.loadContextWithCallback("@common/engineAdapt", function(e) {
if (e) {
console.log("loadContextWithCallback @common/engineAdapt success");
A.dispatch("LOAD_ENGINEADAPT_SUCCESS");
} else {
console.log("loadContextWithCallback @common/engineAdapt failed");
A.dispatch("LOAD_ENGINEADAPT_FAILED");
}
});
} catch (A) {
console.error("loadContextWithCallback @common/engineAdapt failed", A);
this.dispatch("LOAD_ENGINEADAPT_FAILED");
}
};
r([ i.init ], C.prototype, "loadRoot", null);
C = r([ i.entry ], C);
}(i.Component);
(function(A) {
A.AwardConfig = {
respNewSkProductList: {
type: 2001,
isJson: !0,
dataHead: "respNewSkProductList"
},
respNewSkProduct: {
type: 2001,
isJson: !0,
dataHead: "respNewSkProduct"
},
respLobbyConfigNew: {
type: 7757,
isJson: !0,
dataHead: "respLobbyConfigNew"
},
respEnterRoomGiftPack: {
type: 7884,
isJson: !0,
dataHead: "respEnterRoomGiftPack"
},
respInfiniteCoin: {
type: 7844,
isJson: !0,
dataHead: "respInfiniteCoin"
},
respDiBao: {
type: 7763,
isJson: !0,
dataHead: "respDiBao"
},
playGameAward: {
type: 7853,
isJson: !0,
dataHead: "playGameAward"
},
respBankrupt: {
type: 7836,
isJson: !0,
dataHead: "respBankrupt"
},
respShopAwardInfo: {
type: 7803,
isJson: !0,
dataHead: "respShopAwardInfo"
},
respShopAwardData: {
type: 7803,
isJson: !0,
dataHead: "respShopAwardData"
},
respElevating: {
type: 7843,
isJson: !0,
dataHead: "respElevating"
},
respFirstAndDayAwardInfo: {
type: 7892,
isJson: !0,
dataHead: "respFirstAndDayAwardInfo"
},
respMailRedPoint: {
type: 5025,
isJson: !0,
dataHead: "respMailRedPoint"
},
respXiTongMail: {
type: 5025,
isJson: !0,
dataHead: "respXiTongMail"
},
respMailPull: {
type: 5025,
isJson: !0,
dataHead: "respMailPull"
},
respMailRead: {
type: 5025,
isJson: !0,
dataHead: "respMailRead"
},
respMailGetAward: {
type: 5025,
isJson: !0,
dataHead: "respMailGetAward"
},
respCouponInfo: {
type: 7891,
isJson: !0,
dataHead: "respCouponInfo"
},
cardTypeChallenge: {
type: 7865,
isJson: !0,
dataHead: "cardTypeChallenge"
},
huAwardProp: {
type: 7863,
isJson: !0,
dataHead: "huAwardProp"
},
highGift2: {
type: 7875,
isJson: !0,
dataHead: "highGift2"
},
levelAct: {
type: 7859,
isJson: !0,
dataHead: "levelAct"
},
taskAct: {
type: 7861,
isJson: !0,
dataHead: "taskAct"
},
respFirstCharge: {
type: 7895,
isJson: !0,
dataHead: "respFirstCharge"
},
respGiftSort: {
type: 7896,
isJson: !0,
dataHead: "respGiftSort"
},
nobilityInfo: {
type: 7903,
isJson: !0,
dataHead: "nobilityInfo"
},
nobilityAct: {
type: 7905,
isJson: !0,
dataHead: "nobilityAct"
},
nobilityWelfare: {
type: 7906,
isJson: !0,
dataHead: "nobilityWelfare"
},
commonGameConifg: {
type: 7907,
isJson: !0,
dataHead: "commonGameConifg"
},
nobilityStoreProduct: {
type: 7909,
isJson: !0,
dataHead: "nobilityStoreProduct"
},
respTearTop: {
type: 7910,
isJson: !0,
dataHead: "respTearTop"
},
playerGuide: {
type: 7913,
isJson: !0,
dataHead: "playerGuide"
},
respSyncDou: {
type: 10,
isJson: !0,
dataHead: "respSyncDou"
},
bankruptInGame: {
type: 7912,
isJson: !0,
dataHead: "bankruptInGame"
},
respTickGift: {
type: 7915,
isJson: !0,
dataHead: "respTickGift"
},
respK7Star: {
type: 7922,
isJson: !0,
dataHead: "respK7Star"
},
respK7StarWinningGift: {
type: 7973,
isJson: !0,
dataHead: "respK7StarWinningGift"
},
gdCarryConfig: {
type: 7921,
isJson: !0,
dataHead: "gdCarryConfig"
},
daJiangSaiAct: {
type: 7920,
isJson: !0,
dataHead: "daJiangSaiAct"
},
GameConfig20840: {
type: 7927,
isJson: !0,
dataHead: "GameConfig20840"
},
k7StarTask: {
type: 7928,
isJson: !0,
dataHead: "k7StarTask"
},
firstAwardInfoNew: {
type: 7930,
isJson: !0,
dataHead: "firstAwardInfoNew"
},
exitPopupManager: {
type: 7931,
isJson: !0,
dataHead: "exitPopupManager"
},
new7Day: {
type: 7932,
isJson: !0,
dataHead: "new7Day"
},
NewPlayerActs: {
type: 7991,
isJson: !0,
dataHead: "NewPlayerActs"
},
RebackPlayerActs: {
type: 7992,
isJson: !0,
dataHead: "RebackPlayerActs"
},
ActiveSignActs: {
type: 7993,
isJson: !0,
dataHead: "ActiveSignActs"
},
VideoAwardsActs: {
type: 7994,
isJson: !0,
dataHead: "VideoAwardsActs"
},
respStoreYunGoodsConfig: {
type: 7929,
isJson: !0,
dataHead: "respStoreYunGoodsConfig"
},
respHNConfig: {
type: 7939,
isJson: !0,
dataHead: "respHNConfig"
},
k7TopGame: {
type: 7953,
isJson: !0,
dataHead: "k7TopGame"
},
powerProps: {
type: 7957,
isJson: !0,
dataHead: "powerProps"
},
respRechargeActInfo: {
type: 7961,
isJson: !0,
dataHead: "respRechargeActInfo"
},
respPayGift: {
type: 7963,
isJson: !0,
dataHead: "respPayGift"
},
respPayGiftShop: {
type: 7965,
isJson: !0,
dataHead: "respPayGiftShop"
},
mingRenTangAct: {
type: 7964,
isJson: !0,
dataHead: "mingRenTangAct"
},
HPMRTAct: {
type: 7981,
isJson: !0,
dataHead: "HPMRTAct"
},
turntable: {
type: 7967,
isJson: !0,
dataHead: "turntable"
},
gameBenefits: {
type: 7966,
isJson: !0,
dataHead: "gameBenefits"
},
reqAnPaiGDMult: {
type: 7977,
isJson: !0,
dataHead: "reqAnPaiGDMult"
},
newYearTreasure: {
type: 7974,
isJson: !0,
dataHead: "newYearTreasure"
},
AnPaiGDGuide: {
type: 7980,
isJson: !0,
dataHead: "AnPaiGDGuide"
},
reqAnPaiGDTurntable: {
type: 7983,
isJson: !0,
dataHead: "reqAnPaiGDTurntable"
},
limitTimeGift: {
type: 7978,
isJson: !0,
dataHead: "limitTimeGift"
},
anpaigdTask: {
type: 7928,
isJson: !0,
dataHead: "anpaigdTask"
},
battleToken: {
type: 7982,
isJson: !0,
dataHead: "battleToken"
},
respCheckHeadFrameId: {
type: 7988,
isJson: !0,
dataHead: "respCheckHeadFrameId"
}
};
A.AwardEventNames = {
HuAwardProp: "HuAwardProp",
LevelAct: "LevelAct",
PlayerGuide: {
CMD_CONFIG: "PlayerGuide_CMD_CONFIG",
CMD_AWARD: "PlayerGuide_CMD_AWARD"
},
RespTickGift: {
GET_QUAN_CONFIG: "RespTickGift_GET_QUAN_CONFIG",
GET_USE_RCQ: "RespTickGift_GET_USE_RCQ",
GET_GIFT_ENTER: "RespTickGift_GET_GIFT_ENTER",
GET_GIFT_BANKRUPT: "RespTickGift_GET_GIFT_BANKRUPT",
GET_GIFT_CONTINUE: "RespTickGift_GET_GIFT_CONTINUEP"
},
PowerProps: {
CMD_PP_CONFIG: "PowerProps_CMD_PP_CONFIG",
CMD_YP_PRO_AWARD: "PowerProps_CMD_YP_PRO_AWARD"
},
GameBenefits: {
CMD_CONFIG: "GameBenefits_CMD_CONFIG",
CMD_AWARD: "GameBenefits_CMD_AWARD",
CMD_SHOW_BTN: "GameBenefits_CMD_SHOW_BTN"
},
BattleToken: {
CMD_CONFIG: "BattleToken_CMD_CONFIG",
CMD_AWARD: "BattleToken_CMD_AWARD",
CMD_SHOW_BTN: "BattleToken_CMD_SHOW_BTN"
}
};
A.AwardCMD = {
HuAwardProp: {
HU_AWARD_CONFIG: 1,
HU_AWARD_SCALE: 2
},
LevelAct: {
LEVEL_CONFIG: 1
},
NobilityAct: {
CMD_CONFIG: 1
},
CommonGameConifg: {
CMD_CONFIG: 1
},
PlayerGuide: {
CMD_CONFIG: 1,
CMD_AWARD: 2,
CMD_FINISH: 3
},
RespTickGift: {
GET_QUAN_CONFIG: 1,
GET_USE_RCQ: 2,
GET_GIFT_ENTER: 3,
GET_GIFT_BANKRUPT: 4,
GET_GIFT_CONTINUE: 5
},
PowerProps: {
CMD_PP_CONFIG: 1,
CMD_YP_PRO_AWARD: 2
},
GameBenefits: {
CMD_CONFIG: 1,
CMD_AWARD: 2
},
respRechargeActInfo: {
CMD_CONFIG: 1
},
reqAnPaiGDMultConfig: {
CMD_CONFIG: 1,
CMD_ALL_ROOM_SHOW: 2
},
reqAnPaiGDTurntable: {
CMD_CONFIG: 1
},
BattleToken: {
CMD_CONFIG: 1,
CMD_AWARD: 2
}
};
})(E || (E = {}));
(function(A) {
A.Device_Max_Performance_Strength = 50;
})(E || (E = {}));
(function(A) {
(function(A) {
A.EventLoginSuccess = "EventLoginSuccess";
A.EventReLoginSuccess = "EventReLoginSuccess";
A.EventJoinRoomSuccess = "EventJoinRoomSuccess";
A.EventJoinGame = "EventJoinGame";
A.EventSRSErrSqueezeAccount = "EventSRSErrSqueezeAccount";
A.EventLoadTreeFile = "EventLoadTreeFile";
A.EventHideHall = "EventHideHall";
A.EventReqQuickStart = "EventReqQuickStart";
A.EventReqQuickStartGuideRoom = "EventReqQuickStartGuideRoom";
A.EventRespPlayerScore = "EventRespPlayerScore";
A.EventRespHostSr = "EventRespHostSr";
A.EventRespSecondHostSr = "EventRespSecondHostSr";
A.EventRespExchangeSecondSr = "EventRespExchangeSecondSr";
A.EventRespNewUserProps = "RespNewUserProps";
A.EventRespRoomPlayerCount = "EventRespRoomPlayerCount";
A.EventGetShopTeHuiInfo = "EventGetShopTeHuiInfo";
A.EventReqPropInGame = "EventReqPropInGame";
A.EventReqUsePropInGame = "EventReqUsePropInGame";
A.EventReqPropInLobby = "EventReqPropInLobby";
A.KW_TEST_CONFIG_TAG = "LIAN_YUN_GAME_KW_TEST_CONFIG_TAG";
A.KW_TEST_CONFIG_HOTUPDATE_ENV = "LIAN_YUN_GAME_KW_TEST_CONFIG_HOTUPDATE_ENV";
A.KW_TEST_CONFIG_SRS_ENV = "LIAN_YUN_GAME_KW_TEST_CONFIG_SRS_ENV";
A.KW_TEST_CONFIG_CHANNELID_ENV = "LIAN_YUN_GAME_KW_TEST_CONFIG_CHANNELID_ENV";
A.EventGameDDZKanDiPai = "EventGameDDZKanDiPai";
A.EventGameDDZJiPaiQi = "EventGameDDZJiPaiQi";
A.EventGameDDZFirstCall = "EventGameDDZFirstCall";
A.EventGameDDZSuperDouble = "EventGameDDZSuperDouble";
A.EventMailInfo = "EventMailInfo";
A.EventFirstCharge = "EventFirstCharge";
A.EventNobilitySelfLevelUp = "EventNobilitySelfLevelUp";
A.EventNobilityActivate = "EventNobilityActivate";
A.EventNobilityRenewal = "EventNobilityRenewal";
A.EventNobilityExpired = "EventNobilityExpired";
A.EventNobilityEndTime = "EventNobilityEndTime";
A.EventUpdateRoomItemIcon = "EventUpdateRoomItemIcon";
A.EventUpdateGameRCQcon = "EventUpdateGameRCQcon";
A.EventBuyToProp = "EventBuyToProp";
A.EventTryToJoinRoom = "EventTryToJoinRoom";
A.EventGameContinue = "EventGameContinue";
A.EventRefreshGameIndex = "EventRefreshGameIndex";
A.EventGetDianFengRCQGiftInfo = "EventGetDianFengRCQGiftInfo";
A.EventYunProtectToken = "EventYunProtectToken";
A.EventMingRenTangEndTime = "EventMingRenTangEndTime";
A.EventMingRenTangUser = "EventMingRenTangUser";
A.EventHPMRTEndTime = "EventHPMRTEndTime";
A.EventHPMRTUser = "EventHPMRTUser";
A.EventHotUpdateVersionTip = "EventHotUpdateVersionTip";
A.EventCrossDayBeijing = "EventCrossDayBeijing";
})(A.Events || (A.Events = {}));
(function(A) {
A.LobbyEventCloseMainView = "LobbyEventCloseMainView";
A.LobbyEventFirstAwardNewShow = "LobbyEventFirstAwardNewShow";
A.LobbyEventStartPopExitUI = "LobbyEventStartPopExitUI";
A.LobbyEventExitSuccess = "LobbyEventExitSuccess";
})(A.LobbyEvents || (A.LobbyEvents = {}));
})(E || (E = {}));
(function(A) {
var C, E;
(function(A) {
A[A.DEFAULT_MAN = 1] = "DEFAULT_MAN";
A[A.DEFAULT_WOMAN = 2] = "DEFAULT_WOMAN";
A[A.THIRD_HEAD = 5001] = "THIRD_HEAD";
A[A.AI_HEAD = 5002] = "AI_HEAD";
})(E = A.HEAD_EM || (A.HEAD_EM = {}));
(function(A) {
A[A.Fashion_City = 1] = "Fashion_City";
A[A.Cute_Animation = 2] = "Cute_Animation";
A[A.Three_Kingdoms = 3] = "Three_Kingdoms";
A[A.Wu_Xia = 4] = "Wu_Xia";
A[A.Anime_Games = 5] = "Anime_Games";
A[A.Count = 6] = "Count";
})(A.AI_HEAD_STYLE || (A.AI_HEAD_STYLE = {}));
A.HeadConfig = {
headList: (C = {}, C[E.AI_HEAD] = {
res: "ui://_Common/img_ghtx_zntx",
name: "智能个性化头像",
text: "智能头像",
id: 5002
}, C[E.THIRD_HEAD] = {
res: "ui://_Common/main_img_face_1",
name: "默认头像男",
text: "男生",
id: 5001
}, C[E.DEFAULT_MAN] = {
res: "ui://_Common/main_img_face_1",
name: "默认头像男",
text: "男生",
id: 1
}, C[E.DEFAULT_WOMAN] = {
res: "ui://_Common/main_img_face_0",
name: "默认头像女",
text: "女生",
id: 2
}, C)
};
var D = function() {
function C() {}
C.getUserHeadPath = function(C, D, t) {
void 0 === t && (t = "");
console.log("getUserHeadPath headid = " + D + "  url = " + t);
C = C || 49;
(D = D || 0) < 1 && (D = 1);
var B = "ui://_Common/main_img_face_1", F = A.HeadConfig.headList[D];
if (D == E.AI_HEAD) B = "" != t ? t : F.res; else if (D == E.THIRD_HEAD) B = "" != t ? t : F.res; else {
D == E.DEFAULT_MAN && 49 != C && (F = A.HeadConfig.headList[E.DEFAULT_WOMAN]);
if (null != F && F.res) B = F.res; else {
var n = "ui://_Common/head_" + D;
null != e.UIPackage.getItemByURL(n) && (B = n);
}
}
return B;
};
return C;
}();
A.HeadController = D;
})(E || (E = {}));
(function(A) {
var e, C, E, D, t, B;
A._hostSrName = "钻石";
(function(A) {
A[A.ShuangKou = 1] = "ShuangKou";
A[A.GuanDan = 2] = "GuanDan";
A[A.YueJuQG = 3] = "YueJuQG";
A[A.YueJuQGNorth = 4] = "YueJuQGNorth";
A[A.YueJuZJ = 5] = "YueJuZJ";
A[A.TuoLaJi = 6] = "TuoLaJi";
A[A.GuangMa = 8] = "GuangMa";
A[A.JuneDDZ = 9] = "JuneDDZ";
A[A.MiniGame = 10] = "MiniGame";
A[A.ShengJi = 12] = "ShengJi";
A[A.Scmahjong = 13] = "Scmahjong";
A[A.QsPaoDeKuai = 14] = "QsPaoDeKuai";
})(B = A.HostId || (A.HostId = {}));
A.DomainName = ((e = {})[B.ShuangKou] = "guangminghangzhou.com", e[B.GuanDan] = "hangzhouqisheng.com", 
e[B.YueJuQG] = "nbpaiyou.com", e[B.YueJuQGNorth] = "nbpaiyou.com", e[B.YueJuZJ] = "hzxuanming.com", 
e[B.TuoLaJi] = "bianzuihz.com", e[B.GuangMa] = "gameabc2.com", e[B.JuneDDZ] = "hzfengxiang.com", 
e[B.MiniGame] = "gameabc2.com", e[B.ShengJi] = "bianzuihz.com", e[B.Scmahjong] = "xk-devops.com", 
e[B.QsPaoDeKuai] = "bianshenghz.com", e);
A.BranchName = ((C = {})[B.ShuangKou] = "", C[B.GuanDan] = "lianyun_guandan", C[B.YueJuQG] = "yuejuquanguo", 
C[B.YueJuQGNorth] = "yuejuquanguo", C[B.YueJuZJ] = "lianyun_zhejiang_app", C[B.TuoLaJi] = "tuolaji", 
C[B.GuangMa] = "lianyun_guangma", C[B.JuneDDZ] = "lianyun_juneddz", C[B.MiniGame] = "lianyun_minigame", 
C[B.ShengJi] = "lianyun_shengji", C[B.Scmahjong] = "lianyun_scmj_dy", C[B.QsPaoDeKuai] = "lianyun_qspaodekuai", 
C);
A.TipTextColor = ((E = {})[B.ShuangKou] = "3E5781", E[B.GuanDan] = "3E5781", E[B.YueJuQG] = "7a4837", 
E[B.YueJuQGNorth] = "7a4837", E[B.YueJuZJ] = "7a4837", E[B.TuoLaJi] = "3E5781", 
E[B.GuangMa] = "3E5781", E[B.JuneDDZ] = "3E5781", E[B.MiniGame] = "3E5781", E[B.ShengJi] = "005781", 
E[B.Scmahjong] = "3E5781", E[B.QsPaoDeKuai] = "3E5781", E);
A.GAME_LOCAL_SUPPORT = ((D = {})[A.HostId.ShuangKou + "wx"] = [ 20840, 20830, 20871 ], 
D[A.HostId.GuanDan] = [ 20840, 20871 ], D[A.HostId.MiniGame] = [ 20840, 20830, 20871 ], 
D[A.HostId.ShengJi] = [ 20840, 20830, 20871 ], D[A.HostId.JuneDDZ + "OpenHarmony"] = [ 20840, 20830 ], 
D[A.HostId.Scmahjong] = [ 20840, 20830, 20871 ], D[A.HostId.QsPaoDeKuai] = [ 20840, 20830, 20871 ], 
D);
A.PROP_LOCAL_SUPPORT = ((t = {})[20840] = [ 101860, 101861 ], t);
})(E || (E = {}));
(function(A) {
var e, C, E, D, t, B;
(function(A) {
A[A.normal = 2] = "normal";
A[A.graytest = 1] = "graytest";
A[A.internal = 0] = "internal";
A[A.nil = null] = "nil";
})(B = A.Env_Mode || (A.Env_Mode = {}));
A.Srs_Develop_Mode = A.Env_Mode.nil;
A.Game_Group_ID = {
DEF_GID: 7231,
GAME_42211: 10031
};
A.LoginSRS_HostConfig = ((e = {})[A.HostId.ShuangKou] = [ "wss://ly-ws7231.wzchayuan.com" ], 
e[A.HostId.GuanDan] = [ "wss://ly-ws7231.hangzhouqisheng.com" ], e[A.HostId.YueJuQG] = [ "wss://ly-ws7231.tt2kj.com" ], 
e[A.HostId.YueJuQGNorth] = [ "wss://ly-ws7231.tt2kj.com" ], e[A.HostId.YueJuZJ] = [ "wss://ly-ws7231.tt2kj.com" ], 
e[A.HostId.TuoLaJi] = [ "wss://ly-ws7231.bianzuihz.com" ], e[A.HostId.GuangMa] = [ "wss://ly-ws7231.gameabc2.com" ], 
e[A.HostId.JuneDDZ] = [ "wss://ly-ws7231.hzfengxiang.com" ], e[A.HostId.MiniGame] = [ "wss://ly-ws7231.gameabc2.com" ], 
e[A.HostId.ShengJi] = [ "wss://ly-ws7231.bianzuihz.com" ], e[A.HostId.Scmahjong] = [ "wss://ly-ws7231.xk-devops.com" ], 
e[A.HostId.QsPaoDeKuai] = [ "wss://ly-ws7231.bianshenghz.com" ], e);
A.LoginSRSConfig = ((C = {})[B.normal] = [ "wss://ly-ws7231.wzchayuan.com" ], C[B.graytest] = [ "ws://47.99.60.98:7219" ], 
C[B.internal] = [ "wss://lytest-ws7231.bfyx.net:4068" ], C);
A.GAME_42211_SRSConfig = ((E = {})[B.normal] = [ "wss://ws10036.wzchayuan.com" ], 
E[B.graytest] = [ "wss://ws10031.wzchayuan.com" ], E[B.internal] = [ "ws://118.31.32.84:4009" ], 
E);
A.SRSConfig = ((D = {})[A.Game_Group_ID.DEF_GID] = A.LoginSRSConfig, D[A.Game_Group_ID.GAME_42211] = A.GAME_42211_SRSConfig, 
D);
A.AreaTypeID = ((t = {})[B.normal] = 2240, t[B.graytest] = 10001, t[B.internal] = 2240, 
t);
A.TestNumid = [];
})(E || (E = {}));
(function(A) {
(function(A) {
A.POP_QUEUE_AUTO_CLOSE_EVEVT = "common_PopQueue_POP_QUEUE_AUTO_CLOSE_EVEVT";
A.POP_QUEUE_AUTO_LAYER_NAME = {
AWARD_UI: "AWARD_UI",
LuckLotteryGiftUI: "LuckLotteryGiftUI",
LuckAwardBox: "LuckAwardBox",
POPNOBILITY_UI: "POPNOBILITY_UI",
POPGAMENOBILITY_UI: "POPGAMENOBILITY_UI"
};
})(A.PopQueue || (A.PopQueue = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
A[A.headKuang = 31] = "headKuang";
A[A.gameLoginAni = 39] = "gameLoginAni";
})(A.DressPropType || (A.DressPropType = {}));
(function(A) {
A[A.DuiHuanQuan = 101863] = "DuiHuanQuan";
A[A.JiPaiQiTime = 101860] = "JiPaiQiTime";
A[A.JiPaiQi = 101861] = "JiPaiQi";
A[A.LookBaseCards = 101862] = "LookBaseCards";
A[A.FirstCharge = 101873] = "FirstCharge";
A[A.SuperDouble = 101874] = "SuperDouble";
A[A.FirstCall = 101875] = "FirstCall";
A[A.SuperDoubleTime = 101876] = "SuperDoubleTime";
A[A.Zhadan = 101884] = "Zhadan";
A[A.Egg = 101885] = "Egg";
A[A.Bricks = 101886] = "Bricks";
A[A.GreenHat = 101887] = "GreenHat";
A[A.Slippers = 101888] = "Slippers";
A[A.Likes = 101889] = "Likes";
A[A.Flower = 101890] = "Flower";
A[A.RedLips = 101891] = "RedLips";
A[A.Love = 101892] = "Love";
A[A.Bricks_10 = 101893] = "Bricks_10";
A[A.Zhadan_10 = 101894] = "Zhadan_10";
A[A.GreenHat_10 = 101895] = "GreenHat_10";
A[A.Flower_10 = 101896] = "Flower_10";
A[A.RedLips_10 = 101897] = "RedLips_10";
A[A.Love_10 = 101898] = "Love_10";
A[A.HeadBoxVip1 = 101899] = "HeadBoxVip1";
A[A.HeadBoxVip2 = 101900] = "HeadBoxVip2";
A[A.HeadBoxVip3 = 101901] = "HeadBoxVip3";
A[A.HeadFramePay1 = 190014] = "HeadFramePay1";
A[A.HeadFramePay2 = 190015] = "HeadFramePay2";
A[A.HeadFramePay3 = 190016] = "HeadFramePay3";
A[A.TearLimit = 101904] = "TearLimit";
A[A.Rcq_Prop_0 = 190003] = "Rcq_Prop_0";
A[A.Rcq_Prop_1 = 190004] = "Rcq_Prop_1";
A[A.Rcq_Prop_2 = 101906] = "Rcq_Prop_2";
A[A.Rcq_Prop_3 = 101907] = "Rcq_Prop_3";
A[A.Rcq_Prop_4 = 190010] = "Rcq_Prop_4";
A[A.ProtectToken = 190008] = "ProtectToken";
A[A.HighDoubleCoupon = 190009] = "HighDoubleCoupon";
A[A.LowDoubleCoupon = 190011] = "LowDoubleCoupon";
A[A.NewYearTreasure = 190096] = "NewYearTreasure";
A[A.QingLongTengSiHai = 101959] = "QingLongTengSiHai";
A[A.HuiKuiBi = 101960] = "HuiKuiBi";
A[A.K7StarJZZ = 1000000001] = "K7StarJZZ";
A[A.NewPalyer7DayHappy = 1000000002] = "NewPalyer7DayHappy";
A[A.NewPlayerActive = 1000000003] = "NewPlayerActive";
})(A.Propid || (A.Propid = {}));
var e = {
101863: {
name: "云券",
url: "ui://_Common/award_prop_101863",
isTimeProp: !1,
desc: "珍贵道具，用于云券中心兑换稀有物品"
},
101861: {
name: "记牌器(局)",
url: "ui://_Common/award_prop_101860",
isTimeProp: !1,
gameid: [ 20830 ],
desc: "用于云币游戏"
},
101862: {
name: "优先看底牌",
url: "ui://_Common/award_prop_101862",
isTimeProp: !1,
gameid: [ 20830 ],
desc: "用于斗地主游戏"
},
101874: {
name: "超级加倍",
url: "ui://_Common/award_prop_101874",
isTimeProp: !1,
gameid: [ 20830 ],
desc: "用于斗地主游戏"
},
101875: {
name: "优先叫地主",
url: "ui://_Common/award_prop_101875",
isTimeProp: !1,
gameid: [ 20830 ],
desc: "用于斗地主游戏"
},
101860: {
name: "记牌器(天)",
url: "ui://_Common/award_prop_101860",
isTimeProp: !0,
gameid: [ 20830 ]
},
101876: {
name: "超级加倍",
url: "ui://_Common/award_prop_101874",
isTimeProp: !0,
gameid: [ 20830 ]
},
101884: {
name: "炸弹",
url: "ui://_Common/award_prop_101884",
isTimeProp: !1
},
101885: {
name: "鸡蛋",
url: "ui://_Common/award_prop_101885",
isTimeProp: !1
},
101886: {
name: "板砖",
url: "ui://_Common/award_prop_101886",
isTimeProp: !1
},
101887: {
name: "绿帽",
url: "ui://_Common/award_prop_101887",
isTimeProp: !1
},
101888: {
name: "拖鞋",
url: "ui://_Common/award_prop_101888",
isTimeProp: !1
},
101889: {
name: "点赞",
url: "ui://_Common/award_prop_101889",
isTimeProp: !1
},
101890: {
name: "鲜花",
url: "ui://_Common/award_prop_101890",
isTimeProp: !1
},
101891: {
name: "红唇",
url: "ui://_Common/award_prop_101891",
isTimeProp: !1
},
101892: {
name: "比心",
url: "ui://_Common/award_prop_101892",
isTimeProp: !1
},
101893: {
name: "10连板砖",
url: "ui://_Common/award_prop_101886",
isTimeProp: !1
},
101894: {
name: "10连炸弹",
url: "ui://_Common/award_prop_101884",
isTimeProp: !1
},
101895: {
name: "10连绿帽",
url: "ui://_Common/award_prop_101887",
isTimeProp: !1
},
101896: {
name: "10连鲜花",
url: "ui://_Common/award_prop_101890",
isTimeProp: !1
},
101897: {
name: "10连红唇",
url: "ui://_Common/award_prop_101891",
isTimeProp: !1
},
101898: {
name: "10连比心",
url: "ui://_Common/award_prop_101892",
isTimeProp: !1
},
190003: {
name: "练习场入场券",
url: "ui://_Common/award_prop_190003",
isTimeProp: !1,
desc: "用于进入云币游戏练习场，补充云币"
},
190004: {
name: "普通场入场券",
url: "ui://_Common/award_prop_190004",
isTimeProp: !1,
desc: "用于进入云币游戏普通场，补充云币"
},
101906: {
name: "精英场入场券",
url: "ui://_Common/award_prop_101906",
isTimeProp: !1,
desc: "用于进入云币游戏精英场，补充云币"
},
101907: {
name: "至尊场入场券",
url: "ui://_Common/award_prop_101907",
isTimeProp: !1,
desc: "用于进入云币游戏至尊场，补充云币"
},
190010: {
name: "巅峰场入场券",
url: "ui://_Common/award_prop_190010",
isTimeProp: !1,
desc: "解锁所有巅峰场入场条件，补充云币"
},
190008: {
name: "云币保护令",
url: "ui://_Common/award_prop_190008",
isTimeProp: !1,
desc: "可用于游戏过程中找回云币"
},
190009: {
name: "高级翻倍卡",
url: "ui://_Common/award_prop_190009",
isTimeProp: !1,
desc: "局中每次和牌消耗，收益*2"
},
190011: {
name: "初级翻倍卡",
url: "ui://_Common/award_prop_190011",
isTimeProp: !1,
desc: "局中每次和牌消耗，收益*2"
},
190096: {
name: "金铲子",
url: "ui://_Common/award_prop_190096",
isTimeProp: !1,
desc: "新春宝藏 金铲子(马年限定)"
},
190090: {
name: "能量液",
url: "ui://_Common/award_prop_190090",
isTimeProp: !1,
desc: "用来补充签到仪器，可以获得高额云币"
},
101959: {
name: "青龙腾四海",
url: "ui://_Common/award_prop_101959",
isTimeProp: !1,
desc: "青龙腾四海",
effect: "ui://_Common/Ruko_qxmrt",
play: "animation2"
},
101960: {
name: "回馈币",
url: "ui://_Common/award_prop_101960",
isTimeProp: !1,
desc: "回馈币"
},
1000000001: {
name: "金钟罩",
url: "ui://_Common/award_prop_1000000001",
isTimeProp: !1
},
1000000002: {
name: "新人徽章",
url: "ui://_Common/award_prop_1000000002",
isTimeProp: !1
},
1000000003: {
name: "活跃度",
url: "ui://_Common/award_prop_1000000002",
isTimeProp: !1
}
}, C = {
101884: {
name: "炸弹",
url: "ui://_Common/Bp_zhadang",
normal: "animation1",
play: "animation2",
effect: "prop/zhadan"
},
101885: {
name: "鸡蛋",
url: "ui://_Common/zajidan",
normal: "animation1",
play: "animation2",
effect: "prop/egg"
},
101886: {
name: "板砖",
url: "ui://_Common/Brick",
normal: "animation1",
play: "animation2",
effect: "prop/banzuan"
},
101887: {
name: "绿帽",
url: "ui://_Common/lmz",
normal: "animation1",
play: "animation2",
effect: "prop/lvmao"
},
101888: {
name: "拖鞋",
url: "ui://_Common/xiuhuaxie",
normal: "animation1",
play: "animation2",
effect: "prop/tuoxie"
},
101889: {
name: "点赞",
url: "ui://_Common/dianzan",
normal: "animation1",
play: "animation2",
effect: "prop/dianzan"
},
101890: {
name: "鲜花",
url: "ui://_Common/hua",
normal: "animation1",
play: "animation2",
effect: "prop/xianhua"
},
101891: {
name: "红唇",
url: "ui://_Common/qinwen",
normal: "animation1",
play: "animation2",
effect: "prop/qinwen"
},
101892: {
name: "比心",
url: "ui://_Common/bixin",
normal: "animation1",
play: "animation2",
effect: "prop/bixin"
},
101893: {
name: "10连板砖",
url: "ui://_Common/Brick",
normal: "animation1",
play: "animation3",
effect: "prop/banzuan"
},
101894: {
name: "10连炸弹",
url: "ui://_Common/Bp_zhadang",
normal: "animation1",
play: "animation3",
effect: "prop/zhadan"
},
101895: {
name: "10连绿帽",
url: "ui://_Common/lmz",
normal: "animation1",
play: "animation3",
effect: "prop/lvmao"
},
101896: {
name: "10连鲜花",
url: "ui://_Common/hua",
normal: "animation1",
play: "animation3",
effect: "prop/xianhua"
},
101897: {
name: "10连红唇",
url: "ui://_Common/qinwen",
normal: "animation1",
play: "animation3",
effect: "prop/qinwen"
},
101898: {
name: "10连比心",
url: "ui://_Common/bixin",
normal: "animation1",
play: "animation3",
effect: "prop/bixin"
}
}, E = {
101899: {
name: "爵位初级头像框",
url: "ui://_Common/Txk_juewei",
ani: "animation1"
},
101900: {
name: "爵位中级头像框",
url: "ui://_Common/Txk_juewei",
ani: "animation2"
},
101901: {
name: "爵位高级头像框",
url: "ui://_Common/Txk_juewei",
ani: "animation3"
},
101959: {
name: "青龙腾四海",
url: "ui://_Common/Lontenshihai",
ani: "animation"
},
190014: {
name: "高价值头像框一",
url: "ui://_Common/Txl_01",
ani: "animation1"
},
190015: {
name: "高价值头像框二",
url: "ui://_Common/Txl_01",
ani: "animation2"
},
190016: {
name: "高价值头像框三",
url: "ui://_Common/Txl_01",
ani: "animation3"
}
};
A.getPropInfo = function(A) {
return e[A];
};
A.getPropAniInfo = function(A) {
return C[A];
};
A.getPropDressInfo = function(A) {
return E[A];
};
A.getProductItemUrlByType = function(e, C) {
var E, D;
switch (e) {
case A.ProductItemList.GOLD:
return "ui://_Common/award_prop_yunbi";

case A.ProductItemList.ZUANSHI:
return "ui://_Common/award_prop_hostsr";

case A.ProductItemList.PROP_NORMAL:
return null === (E = A.getPropInfo(C)) || void 0 === E ? void 0 : E.url;

case A.ProductItemList.PROP_TIME:
return null === (D = A.getPropInfo(C)) || void 0 === D ? void 0 : D.url;
}
};
A.getProductItemStrByType = function(e, C, E) {
var D = "", t = "";
switch (e) {
case A.ProductItemList.GOLD:
D = "".concat(A.ProductItemName[e]);
t = "".concat(A.StringUtils.dealBigNumEx5(C || 0));
break;

case A.ProductItemList.ZUANSHI:
D = "".concat(A._hostSrName);
t = "".concat(A.StringUtils.dealBigNumEx5(C || 0));
break;

case A.ProductItemList.PROP_NORMAL:
if (B = A.getPropInfo(C)) {
D = "".concat(B.name);
t = "".concat(A.StringUtils.dealBigNumEx5(E || 0));
}
break;

case A.ProductItemList.PROP_TIME:
var B;
if (B = A.getPropInfo(C)) {
D = "".concat(B.name);
t = A.StringUtils.timestampByNow(E || 0);
}
}
return A.ProductItemList.PROP_TIME == e ? {
name: D,
cntStr: t,
totalStr: D + " " + t
} : {
name: D,
cntStr: t,
totalStr: D + "x" + t
};
};
A.getProductInfolByType = function(e, C) {
switch (e) {
case A.ProductItemList.GOLD:
return {
name: "云币",
url: "ui://_Common/award_prop_yunbi",
isTimeProp: !1,
desc: "货币，用于云币游戏对局"
};

case A.ProductItemList.PROP_NORMAL:
case A.ProductItemList.PROP_TIME:
return A.getPropInfo(C);
}
};
})(E || (E = {}));
(function(A) {
(function(A) {
A.EVENT_RTG_PLAYER_LEAVEEX_CLIENT = "EVENT_RTG_PLAYER_LEAVEEX_CLIENT";
A.EVENT_RTG_RESP_USER_INFO = "EVENT_RTG_RESP_USER_INFO";
A.EVENT_RTG_CHAT_MSG = "EVENT_RTG_CHAT_MSG";
A.EVENT_RTG_UPDATE_SR = "EVENT_RTG_UPDATE_SR";
A.EVENT_RTG_UPDATE_VIP = "EVENT_RTG_UPDATE_VIP";
A.EVENT_RTG_UPDATE_DRESS = "EVENT_RTG_UPDATE_DRESS";
})(A.RoomToGameEventName || (A.RoomToGameEventName = {}));
(function(A) {
A.EVENT_PLAYER_PLACE = "EVENT_PLAYER_PLACE";
A.EVENT_JOIN_ROOM = "EVENT_JOIN_ROOM";
A.EVENT_PLAYER_ACTION = "EVENT_PLAYER_ACTION";
})(A.RoomEventName || (A.RoomEventName = {}));
})(E || (E = {}));
(function(A) {
var e, C;
A.SHOP_ID_CONFIG = {
lobbyDouShop: 1,
lobbyZuanshiShop: 1034,
lobbyZuanshiFirstShop: 1040,
lobbyFirstShop: 1038,
lobbyTeHuiShop: 1041,
gameBankruptShop: 1035,
lobbyTipsShop: 1148,
nobilityShop: 16,
lobbyRoleShop: 0,
enterRoomShop: 33
};
A.SHOP_ID_DBP_KEY = {
overTaking: "overTaking",
playCasually: "playCasually"
};
(function(A) {
A[A.PROP_TIME = 7] = "PROP_TIME";
A[A.GOLD = 8] = "GOLD";
A[A.PROP_NORMAL = 11] = "PROP_NORMAL";
A[A.COUPON = 12] = "COUPON";
A[A.ZUANSHI = 101] = "ZUANSHI";
})(C = A.ProductItemList || (A.ProductItemList = {}));
A.ProductItemName = ((e = {})[C.PROP_TIME] = "时效道具", e[C.GOLD] = "云币", e[C.PROP_NORMAL] = "道具", 
e[C.COUPON] = "优惠券", e[C.ZUANSHI] = "", e);
A.ProductTypeList = [ C.PROP_TIME, C.GOLD, C.PROP_NORMAL, C.ZUANSHI, C.COUPON ];
(function(A) {
A[A.R_M_B = 1] = "R_M_B";
A[A.YUAN_BAO = 2] = "YUAN_BAO";
A[A.USER_SCORE = 3] = "USER_SCORE";
A[A.HOST_SR = 4] = "HOST_SR";
})(A.PayMode || (A.PayMode = {}));
(function(A) {
A[A.none = 0] = "none";
A[A.wx = 1] = "wx";
A[A.zfb = 2] = "zfb";
A[A.appstore = 100] = "appstore";
})(A.zhiFuType || (A.zhiFuType = {}));
})(E || (E = {}));
(function(A) {
A.TIP_STRING = {
"SESSIONID ERROR": "登录验证未通过 请重新登陆",
ACCOUNT_LOGIN_IN_OTHER_PHONE: "您的账号正在其他地方登录，是否尝试重新登录？",
PAY_USE_HOST_SR: "是否使用%s购买该商品",
PAY_USE_HOST_SR_NOT_ENOUGH: "当前[hosr_sr_name]不足,\n是否花费%s[platform]购买%s?\n购买成功后自动购买该商品",
PAY_USE_HOST_SR_NOT_ENOUGH_INGAME: "您的[hosr_sr_name]不足，记得前往补充~",
PAY_USE_HOST_NEW_PLAYER_POWER: "是否使用新手特权花费%s[hosr_sr_name]购买\n%s商品?",
PAY_USE_HOST_RECALL_PLAYER_POWER: "是否使用回归特权花费%s[hosr_sr_name]购买\n%s商品?"
};
A.getTipString = function(e, C) {
var E, D;
void 0 === C && (C = !1);
for (var t = [], B = 2; B < arguments.length; B++) t[B - 2] = arguments[B];
if (!e || "string" != typeof e || "" == e) {
console.log("common getTipString ERR STR");
return "";
}
if (!A.TIP_STRING[e]) return e;
var F = A.TIP_STRING[e];
F = (F = F.replace("[hosr_sr_name]", A._hostSrName)).replace("[platform]", C ? "抖钻" : "元");
try {
for (var n = c(t), i = n.next(); !i.done; i = n.next()) {
var o = i.value;
F = F.replace("%s", o);
}
} catch (A) {
E = {
error: A
};
} finally {
try {
i && !i.done && (D = n.return) && D.call(n);
} finally {
if (E) throw E.error;
}
}
return F;
};
})(E || (E = {}));
(function(A) {
var e, C;
A.WaitingCommon = "WaitingCommonSingle_1";
(function(A) {
A.SettingUI = "SettingUI";
A.HelpUI = "HelpUI";
A.DibaoUI = "DibaoUI";
A.UpgradationUI = "UpgradationUI";
A.StoreMain = "StoreMain";
A.ExchangeMain = "ExchangeMain";
A.InfiniteCoinUI = "InfiniteCoinUI";
A.InfiniteCoinADUI = "InfiniteCoinADUI";
A.EnterRoomGiftPackUI = "EnterRoomGiftPackUI";
A.EnterRoomGiftPackNewUI = "EnterRoomGiftPackNewUI";
A.EnterRoomGiftCardNewUI = "EnterRoomGiftCardNewUI";
A.EnterRoomGift202501 = "EnterRoomGift202501";
A.EnterRoomGift202603 = "EnterRoomGift202603";
A.ReductionUI = "ReductionUI";
A.BankruptGiftPackUI = "BankruptGiftPackUI";
A.TestConfigUI = "TestConfigUI";
A.GiftOverTakingUI = "giftOverTakingUI";
A.GiftPlayCasuallyUI = "giftPlayCasuallyUI";
A.MailUI = "MailUI";
A.MailPopUI = "MailPopUI";
A.FirstAwardUI = "FirstAwardUI";
A.DayAwardUI = "DayAwardUI";
A.RunHorseUI = "RunHorseUI";
A.FirstChargeGiftUI = "FirstChargeGiftUI";
A.FirstrechargeUI = "FirstrechargeUI";
A.InfiniteCoinAwardUI = "InfiniteCoinAwardUI";
A.LuckGiftUI = "LuckGiftUI";
A.LuckLotteryGiftUI = "LuckLotteryGiftUI";
A.LuckAwardBox = "LuckAwardBox";
A.MainNobility = "MainNobility";
A.GiftBrokenView = "GiftBrokenView";
A.GiftBrokenAD = "GiftBrokenAD";
A.YunBiChange = "YunBiChange";
A.TearLimitAD = "TearLimitAD";
A.RcqAdUI = "RcqAdUI";
A.TicketGift = "TicketGift";
A.TicketUserAni = "TicketUserAni";
A.GrandPrixUI = "GrandPrixUI";
A.GrandPrixTipsUI = "GrandPrixTipsUI";
A.K7StarTaskUI = "K7StarTaskUI";
A.K7StarTaskHelp = "K7StarTaskHelp";
A.K7StarTaskMult = "K7StarTaskMult";
A.ExitPopUI = "ExitPopUI";
A.NewPlayer7Happy = "NewPlayer7Happy";
A.NewPlayerBox = "NewPlayerBox";
A.NewPlayerBoxHelp = "NewPlayerBoxHelp";
A.RecallBox = "RecallBox";
A.RecallBoxHelp = "RecallBoxHelp";
A.DailySignIn = "DailySignIn";
A.EveryDaySignIn = "EveryDaySignIn";
A.ActivityComLayer = "ActivityComLayer";
A.ActivityComBoxHelp = "ActivityComBoxHelp";
A.K7StarReviveView = "K7StarReviveView";
A.DailySignInPopNobilityTipView = "DailySignInPopNobilityTipView";
A.DailySignInPopNobilityRateView = "DailySignInPopNobilityRateView";
A.DailySignInPopRuleView = "DailySignInPopRuleView";
A.VideoAwardRate = "VideoAwardRate";
A.K7TopGame = "K7TopGame";
A.K7StarBigAward = "K7StarBigAward";
A.K7StarBigAwardHelp = "K7StarBigAwardHelp";
A.GiftDailySupply = "GiftDailySupply";
A.GameTopDialogUI = "GameTopDialogUI";
A.GiftDianFengRCQView = "GiftDianFengRCQView";
A.ActRepayUI = "ActRepayUI";
A.MingRenTangUI = "MingRenTangUI";
A.HPMRTUI = "HPMRTUI";
A.HPMRTWeekAward = "HPMRTWeekAward";
A.MingRenTangWeekAward = "MingRenTangWeekAward";
A.GameBenefitsUI = "GameBenefitsUI";
A.NewYearTreasure = "NewYearTreasure";
A.NewYearHistory = "NewYearHistory";
A.NewYearStore = "NewYearStore";
A.NewYearTask = "NewYearTask";
A.NewYearHelp = "NewYearHelp";
A.NewYearReset = "NewYearReset";
A.AnPaiGDGuide = "AnPaiGDGuide";
A.LimitTimeGift = "LimitTimeGift";
A.LimitTimeGiftHelp = "LimitTimeGiftHelp";
A.LimitTimeGiftStore = "LimitTimeGiftStore";
A.LimitTimeGiftBigAwardInfo = "LimitTimeGiftBigAwardInfo";
A.LimitTimeExchange = "LimitTimeExchange";
A.LimitTimeExchangeTips = "LimitTimeExchangeTips";
A.CommonGameLoginAni = "CommonGameLoginAni";
A.AnPaiGDTaskUI = "AnPaiGDTaskUI";
A.AnPaiGDTaskHelp = "AnPaiGDTaskHelp";
A.BattleTokenUI = "BattleTokenUI";
A.PaySelectUI = "PaySelectUI";
})(A.UIs || (A.UIs = {}));
(function(A) {
A.PlayBackAct = "PlayBackAct";
A.HuAwardPropRule = "HuAwardPropRule";
A.LevelActLayer = "LevelActLayer";
A.LevelActBtn = "LevelActBtn";
})(A.ActUIs || (A.ActUIs = {}));
(function(A) {
A[A.Default = 1] = "Default";
})(A.UISortingOrder || (A.UISortingOrder = {}));
(function(A) {
A[A.Game_LianZha_Back = 0] = "Game_LianZha_Back";
A[A.Game_LianZha_Main = 1] = "Game_LianZha_Main";
A[A.Game_LianZha_Player = 2] = "Game_LianZha_Player";
A[A.Game_LianZha_Btn = 3] = "Game_LianZha_Btn";
A[A.Game_LianZha_Active = 4] = "Game_LianZha_Active";
A[A.Game_LianZha_Elevating = 5] = "Game_LianZha_Elevating";
A[A.Game_LianZha_Ani = 6] = "Game_LianZha_Ani";
A[A.Game_LianZha_Talk = 7] = "Game_LianZha_Talk";
A[A.Game_LianZha_Result = 8] = "Game_LianZha_Result";
A[A.Game_LianZha_Trust = 9] = "Game_LianZha_Trust";
A[A.Game_LianZha_SpecfCard = 10] = "Game_LianZha_SpecfCard";
})(A.UISortingGame || (A.UISortingGame = {}));
(function(A) {
A[A.ST_TH = 0] = "ST_TH";
A[A.ST_YUN = 1] = "ST_YUN";
A[A.ST_ZS = 2] = "ST_ZS";
})(A.StorePageType || (A.StorePageType = {}));
(function(A) {
A[A.HT_WF = 0] = "HT_WF";
A[A.HT_PX = 1] = "HT_PX";
})(A.HelpPageType || (A.HelpPageType = {}));
(function(A) {
A.LOBBY = "lobby";
A.GAME_20830 = "game_lianzha";
A.GAME_20833 = "game_k5star";
A.GAME_20834 = "game_hpmj";
A.GAME_20840 = "game_k7star";
A.GAME_20841 = "game_hpgd";
A.GAME_20871 = "game_anpaigd";
})(A.SCENENAME || (A.SCENENAME = {}));
(function(A) {
A.GAME_20830 = "火拼斗地主";
A.GAME_20833 = "五星牌";
A.GAME_20834 = "火拼麻将";
A.GAME_20840 = "七星宝牌";
A.GAME_20841 = "火拼掼蛋";
A.GAME_20871 = "暗爆斗地主";
})(C = A.GAMENAME || (A.GAMENAME = {}));
(function(A) {
A[A.GAME_LZDDZ = 20830] = "GAME_LZDDZ";
A[A.GAME_LOBBY = 20831] = "GAME_LOBBY";
A[A.GAME_K5STAR = 20833] = "GAME_K5STAR";
A[A.GAME_HPMJ = 20834] = "GAME_HPMJ";
A[A.GAME_K7STAR = 20840] = "GAME_K7STAR";
A[A.GAME_NOUSE = 20841] = "GAME_NOUSE";
A[A.GAME_ANPAIGD = 20871] = "GAME_ANPAIGD";
})(A.GAME_ID || (A.GAME_ID = {}));
(A.GAMENAME_GUANDAN || (A.GAMENAME_GUANDAN = {})).GAME_20871 = "火拼掼蛋";
(function(A) {
A[A.width = 1334] = "width";
A[A.height = 750] = "height";
})(A.VIEW_DESIGN_SIZE || (A.VIEW_DESIGN_SIZE = {}));
A.GAME_UI_PRELOAD = ((e = {})[20840] = {
bundle: "game_k7star",
ui: [ "Game_K7Star_Card", "Game_K7Star_Btn", "Game_K7Star_Ani", "Game_K7Star_Player" ]
}, e);
A.getGameName = function(A, e) {
void 0 === e && (e = 0);
console.log("getGameName gameSceneName:" + A, e);
return C[A] || "";
};
})(E || (E = {}));
(function(A) {
A.getNobilityUrl = function(A) {
console.log("getNobilityUrl level" + A);
return "ui://_Common/nobility".concat(A);
};
A.getNobilityUpLevelFlagInGame = function(A, e) {
console.log("getNobilityUpLevelFlagInGame numid:" + A + ",areaid:" + e);
return "NobilityUpLevelFlagInGame_".concat(e, "_").concat(A);
};
})(E || (E = {}));
(function(A) {
A.ICommonDlgs = function() {};
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IShaderManager = e;
})(A.engineAdapt || (A.engineAdapt = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.ISpineManager = e;
})(A.engineAdapt || (A.engineAdapt = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.iGameBaseReceiveMsg = e;
})(A.game || (A.game = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e;
(function(A) {
A.SetClock = "KW_SetClock";
A.PlayerGameData = "KW_PlayerGameData";
A.StartGame = "KW_StartGame";
A.EndGame = "KW_EndGame";
A.NextRound = "KW_NextRound";
A.GameResetBtn = "KW_GameResetBtn";
})(e = A.GameEvents || (A.GameEvents = {}));
var C = function() {
function A() {}
return r([ i.event(e.SetClock) ], A);
}();
A.GameEventSetClock = C;
var E = function() {
function A(A, e, C) {
this.seat = A;
this.name = e;
this.vlaue = C;
}
return r([ i.event(e.PlayerGameData) ], A);
}();
A.GameEventPlayerGameData = E;
var D = function() {
function A(A) {
this.data = A;
}
return r([ i.event(e.StartGame) ], A);
}();
A.GameEventStartGame = D;
var t = function() {
function A(A) {
this.data = A;
}
return r([ i.event(e.EndGame) ], A);
}();
A.GameEventEndGame = t;
var B = function() {
function A(A) {
this.data = A;
}
return r([ i.event(e.NextRound) ], A);
}();
A.GameEventNextRound = B;
var F = function() {
function A(A) {
void 0 === A && (A = "");
this.type = A;
}
return r([ i.event(e.GameResetBtn) ], A);
}();
A.GameEventResetBtn = F;
})(A.game || (A.game = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.iPlayerInfoManager = e;
})(A.game || (A.game = {}));
})(E || (E = {}));
(function(A) {
A.g = {
openid: "",
appName: "",
appConfig: null,
areaConfig: null,
gameIds: null,
grayTest: !1
};
})(E || (E = {}));
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IHost = e;
})(E || (E = {}));
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IHostAdaptState = e;
var C = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IHostAdapt = C;
})(E || (E = {}));
(function(A) {
(function(A) {
(function(A) {
A[A.KanDiPai = 0] = "KanDiPai";
A[A.JiPaiQi = 1] = "JiPaiQi";
A[A.FirstCall = 2] = "FirstCall";
A[A.SuperDouble = 3] = "SuperDouble";
A[A.TearLimit = 4] = "TearLimit";
})(A.ActProduct || (A.ActProduct = {}));
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IActProductManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
(function(A) {
A[A.banner = 0] = "banner";
A[A.deal = 1] = "deal";
A[A.dayGift = 2] = "dayGift";
})(A.AD_TYPE || (A.AD_TYPE = {}));
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IAdGetManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IAwardManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.ICommonActModule = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IDiBaoModule = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IExitPopupModule = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IGameAnnounceManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IGiftDianFengRCQManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IGiftModule = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IGiftModuleNewYear = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IGrandPixManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
A.HPMRTReqType = {
getBaseInfo: "getBaseInfo",
getUserInfo: "getUserInfo",
getRankInfo: "getRankInfo",
getSelfRankAward: "getSelfRankAward",
getHPMRTTopRank: "getHPMRTTopRank",
sendTitleMq: "sendTitleMq",
sendSelfRankAward: "sendSelfRankAward",
getWeekAward: "getWeekAward"
};
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IHPMRTManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IImManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IJoinRoomModule = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
(function(A) {
A[A.openUrl = 1] = "openUrl";
A[A.showStr = 2] = "showStr";
A[A.goGame = 4] = "goGame";
A[A.openDetail = 5] = "openDetail";
A[A.startPay = 6] = "startPay";
})(A.JUMP_CMD_TYPE || (A.JUMP_CMD_TYPE = {}));
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IJumpManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
(function(A) {
A[A.ROOMA = 0] = "ROOMA";
A[A.ROOMB = 1] = "ROOMB";
})(A.RoomSequence || (A.RoomSequence = {}));
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.ILoadTreeFileManager = e;
var C = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.ITreeData = C;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
(function(A) {
A[A.welfare = 1] = "welfare";
A[A.recommendation = 2] = "recommendation";
})(A.ActBtnController_ActType || (A.ActBtnController_ActType = {}));
(function(A) {
A.main = "main";
A.welfare = "welfare";
A.recommendation = "recommendation";
})(A.ActBtnController_ClickType || (A.ActBtnController_ClickType = {}));
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.ILobbyConfigManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function() {
function A() {}
A.setFirstrechargePurchased = function(e) {
A._firstrechargePurchased = e;
};
A.isFirstrechargePurchased = function() {
return A._firstrechargePurchased;
};
A._firstrechargePurchased = !1;
return A;
}();
A.LobbyGameShareData = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(A.lobby || (A.lobby = {})).ILogin = function() {};
})(E || (E = {}));
(function(A) {
(function(A) {
(function(A) {
A[A.silver = 1] = "silver";
A[A.coupon = 2] = "coupon";
A[A.prop = 3] = "prop";
A[A.score_gameid = 4] = "score_gameid";
A[A.gold = 5] = "gold";
A[A.time_prop = 8] = "time_prop";
A[A.yb = 10] = "yb";
})(A.MailType || (A.MailType = {}));
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IMailManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IMessageModule = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
A.MingRenTangReqType = {
getBaseInfo: "getBaseInfo",
getUserInfo: "getUserInfo",
getRankInfo: "getRankInfo",
getSelfRankAward: "getSelfRankAward",
getMingRenTangTopRank: "getMingRenTangTopRank",
sendTitleMq: "sendTitleMq",
sendSelfRankAward: "sendSelfRankAward",
getWeekAward: "getWeekAward"
};
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IMingRenTangManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(e) {
e.NobilityActiveWeakHintView = [ "DayAwardUI", "DibaoUI" ];
(function(A) {
A[A.Off = 0] = "Off";
A[A.On = 1] = "On";
A[A.OnRed = 2] = "OnRed";
A[A.OffRed = 3] = "OffRed";
})(e.eNobilityBtnStatus || (e.eNobilityBtnStatus = {}));
e.ReqNobilityType = {
getNobilityConfig: "getNobilityConfig",
getNobilityAwardList: "getNobilityAwardList",
getNobilityUserData: "getNobilityUserData",
getNobilityAward: "getNobilityAward",
getLobbyActInfo: "getLobbyActInfo",
reGetNobilityInfo: "reGetNobilityInfo",
getNobilityProductConfig: "getNobilityProductConfig"
};
e.NobilityPopType = {
vipactivatetouser: "vipactivatetouser",
vipleveluptouser: "vipleveluptouser",
viprenewaltouser: "viprenewaltouser"
};
e.NobilityPowerTextColor = {
room: "<color=#3ae4ef>",
number: "<color=#ffea3a>",
normal: "<color=#ffffff>",
name: "<color=#fff150>"
};
e.NobilityPowerTextColor3 = {
room: "<color=#eb3600>",
number: "<color=#0cb21f>",
normal: "<color=#8f3e26>",
name: "<color=#dala00>"
};
e.NobilityPowerTextColor5 = {
room: "<color=#1857e7>",
number: "<color=#e94700>",
normal: "<color=#a14221>",
name: "<color=#ff0000>"
};
e.getNobilityPowerTextColor = function(C, E, D) {
void 0 === D && (D = !1);
return D ? C == A.HostId.YueJuZJ ? "<color=#767676>" : "<color=#cccccc>" : C == A.HostId.YueJuQG || C == A.HostId.YueJuQGNorth ? e.NobilityPowerTextColor3[E] : C == A.HostId.YueJuZJ ? e.NobilityPowerTextColor5[E] : e.NobilityPowerTextColor[E];
};
e.NobilityPowerStr = {
chanWan: "%s%number每日免赔畅玩%s分钟。",
fanBen: "%s%number每日翻倍%s局。",
headAni: "%normal获得%number%s%normal头像框。",
inRoomEffect: "%normal获得%number%s%normal登场特效。",
store: "%normal商城可花费%number%s%normal购买商品%number%s。",
gameSpecialProps: "%normal专属互动道具。",
dayProp: "%normal每日%s领取%number*%s。",
diBaoCnt: "%normal每日可多领取救济金%number%s%normal次。",
diBaoMult: "%normal每日可领取救济金%number%s%normal倍。",
dayAwardCnt: "%normal每日云币可领取%number%s%normal倍。"
};
(function(A) {
A[A.enough = 1] = "enough";
A[A.near = 0] = "near";
A[A.expired = -1] = "expired";
})(e.NobilityEndTimeType || (e.NobilityEndTimeType = {}));
var C = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
e.INobilityData = C;
var E = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
e.INobilityManager = E;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IOrderPayManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IPlayerGameDataManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IPopQueueController = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IProductManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IPropManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IRoomConfig = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
(function(A) {
A.Normal = "normal";
A.MingRenTang = "mingrentang";
A.HPMRT = "hpmrt";
})(A.RunHorseType || (A.RunHorseType = {}));
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IRunHorseManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.ISoundModule = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IStoreModule = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IUserManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IVideoAwardManager = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IYmnHandler = e;
})(A.lobby || (A.lobby = {}));
})(E || (E = {}));
(function(A) {
A.CommonResp = {
encode: null,
decode: null
};
A.CMDT_ClientPingMsgId = 1074790659;
A.CMDT_ToClientPongMsgId = 1074790659;
A.CMDT_ErrorMsgId = 1074790789;
})(E || (E = {}));
(function(A) {
var e = function() {
function A() {
this.state = null;
}
return r([ i.event("MultSocketStateChanged") ], A);
}();
A.MultSocketStateChanged = e;
A.IMultNetworkManager = function() {};
A.IMultNetwork = function() {};
})(E || (E = {}));
(function(A) {
(function(A) {
A[A.srs = 0] = "srs";
A[A.game = 1] = "game";
A[A.auth = 3] = "auth";
A[A.label = 18] = "label";
A[A.prop = 19] = "prop";
A[A.tool = 62] = "tool";
A[A.playerPlace = 69] = "playerPlace";
A[A.clubLobby = 76] = "clubLobby";
A[A.clubGame = 77] = "clubGame";
A[A.im = 88] = "im";
A[A.cust = 107] = "cust";
A[A.exchange = 181] = "exchange";
A[A.BFCustomXY = 136] = "BFCustomXY";
A[A.game140 = 140] = "game140";
})(A.Processid || (A.Processid = {}));
var e = "__CommonResp_";
function C(A, C, E, D) {
return function() {
function t(A) {
this.data = A;
}
t.prototype.pack = function() {
return E(this.data);
};
t.msg_id = A;
t.xy_id = A;
t.processid = C;
t.unpack = D;
t.setMsgId = function(A, e) {
A.ask_id = e;
};
t.getMsgId = function(A) {
var C;
return e in A && null !== (C = A[e].ask_id) && void 0 !== C ? C : 0;
};
return t;
}();
}
A.proto_msg = function(E, D, t) {
return C(E, D, function(A) {
return t.encode(A).finish();
}, function(C) {
A._lastCommonResp = null;
var E = t.decode(C);
if (A._lastCommonResp) {
E[e] = A._lastCommonResp;
A._lastCommonResp = null;
}
return E;
});
};
var E = "__registered_handlers_meta__";
A.handler = function(e) {
var C = i.App.inst.context;
return function(D, t, B) {
var F = D.constructor, n = i.BeanMeta.get(C, F);
if (n) {
n.autoAwares.push(function(C) {
null == e.msg_id && (e.msg_id = e.xy_id);
var D, t = i.App.inst.context.getBean(A.INetwork).addHandler(e.processid, e.msg_id, e.unpack.bind(e), function(A, e, E) {
B.value.call(C, E);
return !1;
});
if (C.hasOwnProperty(E)) D = C[E]; else {
D = [];
i.BeanMeta.value(C, E, D);
}
D.push(t);
});
if (!n.properties.has("HasNetworkListener")) {
n.properties.set("HasNetworkListener", "true");
n.unwired.push(function(A) {
var e, C;
if (A.hasOwnProperty(E)) {
var D = A[E];
try {
for (var t = c(D), B = t.next(); !B.done; B = t.next()) (0, B.value)();
} catch (A) {
e = {
error: A
};
} finally {
try {
B && !B.done && (C = t.return) && C.call(t);
} finally {
if (e) throw e.error;
}
}
D.splice(0);
}
});
}
}
};
};
var D = function(A) {
var e;
return null !== (e = A.askid) && void 0 !== e ? e : 0;
};
A.request = function(e, C, E, t) {
var B;
void 0 === t && (t = 0);
var F = e.constructor, n = "getMsgId" in F ? F.getMsgId : D, o = "setMsgId" in F ? F.setMsgId : (F.processid, 
F.xy_id, function(A, e) {
A.askid = e;
});
null == F.msg_id && (F.msg_id = F.xy_id);
null == C.msg_id && (C.msg_id = C.xy_id);
null === (B = i.App.inst.context.getBean(A.INetwork)) || void 0 === B || B.sendWithCallback(F.processid, F.msg_id, e, F.prototype.pack, o, C.processid, C.msg_id, C.unpack.bind(C), E, n, t);
};
A.handlerOnce = function(e, C) {
var E = i.App.inst.context;
null == e.msg_id && (e.msg_id = e.xy_id);
return E.getBean(A.INetwork).addHandler(e.processid, e.msg_id, e.unpack.bind(e), function(A, e, E) {
C.call(null, E);
return !0;
});
};
A.sendMsg = function(e) {
var C = e.constructor, E = C.prototype.pack.call(e);
null == C.msg_id && (C.msg_id = C.xy_id);
i.App.inst.context.getBean(A.INetwork).sendPacket(C.msg_id, E, C.processid);
};
var t = "__registered_mult_handlers_meta__";
A.multHandler = function(e) {
var C = i.App.inst.context;
return function(E, D, B) {
var F = E.constructor, n = i.BeanMeta.get(C, F);
if (n) {
n.autoAwares.push(function(E) {
null == e.msg_id && (e.msg_id = e.xy_id);
var D, F = C.getBean(A.IMultNetworkManager).addHandler(e.processid, e.msg_id, e.unpack.bind(e), function(A, e, C, D) {
B.value.call(E, C, D);
return !1;
});
if (E.hasOwnProperty(t)) D = E[t]; else {
D = [];
i.BeanMeta.value(E, t, D);
}
D.push(F);
});
if (!n.properties.has("HasNetworkListener")) {
n.properties.set("HasNetworkListener", "true");
n.unwired.push(function(A) {
var e, C;
if (A.hasOwnProperty(t)) {
var E = A[t];
try {
for (var D = c(E), B = D.next(); !B.done; B = D.next()) (0, B.value)();
} catch (A) {
e = {
error: A
};
} finally {
try {
B && !B.done && (C = D.return) && C.call(D);
} finally {
if (e) throw e.error;
}
}
E.splice(0);
}
});
}
}
};
};
A.multRequest = function(e, C, E, t, B) {
var F;
void 0 === t && (t = 0);
var n = e.constructor, o = "getMsgId" in n ? n.getMsgId : D, r = "setMsgId" in n ? n.setMsgId : (n.processid, 
n.xy_id, function(A, e) {
A.askid = e;
});
null == n.msg_id && (n.msg_id = n.xy_id);
null == C.msg_id && (C.msg_id = C.xy_id);
B = B || A.Game_Group_ID.DEF_GID;
var a = null === (F = i.App.inst.context.getBean(A.IMultNetworkManager)) || void 0 === F ? void 0 : F.getConnet(B);
null == a || a.sendWithCallback(n.processid, n.msg_id, e, n.prototype.pack, r, C.processid, C.msg_id, C.unpack.bind(C), E, o, t);
};
A.multhandlerOnce = function(e, C) {
var E, D = i.App.inst.context;
null == e.msg_id && (e.msg_id = e.xy_id);
return null === (E = null == D ? void 0 : D.getBean(A.IMultNetworkManager)) || void 0 === E ? void 0 : E.addHandler(e.processid, e.msg_id, e.unpack.bind(e), function(A, e, E) {
C.call(null, E);
return !0;
});
};
})(E || (E = {}));
(function(e) {
TextDecoder = A.TextDecoder;
var C = Math.pow(2, 32);
function E(A, e) {
void 0 === e && (e = "GB18030");
return A ? new TextDecoder(e).decode(A) : "";
}
var D = function() {
function A(A) {
void 0 === A && (A = []);
this._curLen = 0;
this._bv = new Uint8Array(A);
this._curLen = 0;
}
A.prototype._getCharArrayData = function(A, e) {
e = e || "GB18030";
var C = new Uint8Array(A);
return new TextDecoder(e).decode(C);
};
A.prototype.concatUint8Array = function(A) {
var e = this._bv.length, C = new Uint8Array(this._bv.length + A.length);
C.set(this._bv);
C.set(A, e);
this._bv = C;
return this._bv;
};
A.prototype.checkLength = function(A) {
void 0 === A && (A = 0);
return this._bv.length >= this._curLen + A;
};
A.prototype.getUint8Array = function() {
return this._bv;
};
A.prototype.getCurLength = function() {
return this._curLen;
};
A.prototype.getByLength = function(A) {
if (this.checkLength(A)) {
var e = this._bv.subarray(this._curLen, this._curLen + A);
this._curLen += A;
return new Uint8Array(e);
}
return new Uint8Array();
};
A.prototype.getStringByLength = function(A, e) {
void 0 === e && (e = "GB18030");
return E(this.getByLength(A), e);
};
A.prototype.getUint8 = function() {
if (this.checkLength(1)) {
var A = this.getByLength(1);
if (A) return new Uint8Array(A, A.byteOffset, 1)[0];
}
return 0;
};
A.prototype.getBoolean = function() {
var A = this.getUint8();
return void 0 !== A && 0 !== A;
};
A.prototype.getInt8 = function() {
if (this.checkLength(1)) {
var A = this.getByLength(1);
if (A) return new Int8Array(A.buffer, A.byteOffset, 1)[0];
}
return 0;
};
A.prototype.getUint16 = function() {
if (this.checkLength(2)) {
var A = this.getByLength(2);
if (A) return new Uint16Array(A.buffer, A.byteOffset, 1)[0];
}
return 0;
};
A.prototype.getInt16 = function() {
if (this.checkLength(2)) {
var A = this.getByLength(2);
if (A) return new Int16Array(A.buffer, A.byteOffset, 1)[0];
}
return 0;
};
A.prototype.getUint32 = function() {
if (this.checkLength(4)) {
var A = this.getByLength(4);
if (A) return new Uint32Array(A.buffer, A.byteOffset, 1)[0];
}
return 0;
};
A.prototype.getInt32 = function() {
if (this.checkLength(4)) {
var A = this.getByLength(4);
if (A) return new Int32Array(A.buffer, A.byteOffset, 1)[0];
}
return 0;
};
A.prototype.getFloat32 = function() {
if (this.checkLength(4)) {
var A = this.getByLength(4);
if (A) return new Float32Array(A.buffer, A.byteOffset, 1)[0];
}
return 0;
};
A.prototype.getDouble64 = function() {
if (this.checkLength(8)) {
var A = this.getByLength(8);
if (A) return new Float64Array(A.buffer, A.byteOffset, 1)[0];
}
return 0;
};
A.prototype.getUint64 = function() {
if (this.checkLength(8)) {
var A = this.getUint32();
return this.getUint32() * C + A;
}
return 0;
};
A.prototype.getInt64 = function() {
if (this.checkLength(8)) {
var A = this.getUint32();
return this.getInt32() * C + A;
}
return 0;
};
A.prototype.getArrayByLength = function() {
var A = this.getUint8();
if (null != A && A >= 0 && A < 255) return this.getByLength(A);
if (null != (A = this.getUint16()) && A >= 255 && A < 65534) return this.getByLength(A);
A = this.getUint32();
return new Uint8Array([]);
};
A.prototype.getString = function(A) {
void 0 === A && (A = "GB18030");
var e = this.getUint8();
return null != e && e >= 0 && e < 255 ? this.getStringByLength(e, A) : null != (e = this.getUint16()) && e >= 255 && e < 65534 ? this.getStringByLength(e, A) : null != (e = this.getUint32()) ? this.getStringByLength(e, A) : "";
};
A.prototype.setUint8 = function(A) {
return this.concatUint8Array(new Uint8Array([ A ]));
};
A.prototype.setBoolean = function(A) {
return this.concatUint8Array(new Uint8Array([ A ? 1 : 0 ]));
};
A.prototype.setInt8 = function(A) {
return this.concatUint8Array(new Uint8Array(new Int8Array([ A ]).buffer));
};
A.prototype.setUint16 = function(A) {
return this.concatUint8Array(new Uint8Array(new Uint16Array([ A ]).buffer));
};
A.prototype.setInt16 = function(A) {
return this.concatUint8Array(new Uint8Array(new Int16Array([ A ]).buffer));
};
A.prototype.setUint32 = function(A) {
return this.concatUint8Array(new Uint8Array(new Uint32Array([ A ]).buffer));
};
A.prototype.setInt32 = function(A) {
return this.concatUint8Array(new Uint8Array(new Int32Array([ A ]).buffer));
};
A.prototype.setInt64 = function(A) {
for (var e = new Int32Array([ A ]), C = new Uint8Array(e.buffer), E = [], D = 0; D < 8; D++) E[D] = C[D] ? C[D] : 0;
return this.concatUint8Array(new Uint8Array(E));
};
A.prototype.setString = function(A) {
void 0 === A && (A = "");
var e, C = new TextEncoder().encode(A);
if (C.length < 255) {
var E = C.length + 1;
(e = new Uint8Array(E))[0] = C.length;
for (var D = 0, t = C.length; D < t; D++) e[D + 1] = C[D];
return this.concatUint8Array(e);
}
if (C.length < 65534) {
this.concatUint8Array(new Uint8Array(new Uint8Array([ 255 ]).buffer));
this.concatUint8Array(new Uint8Array(new Uint16Array([ C.length ]).buffer));
e = new Uint8Array(C.length);
for (D = 0, t = C.length; D < t; D++) e[D] = C[D];
return this.concatUint8Array(e);
}
this.concatUint8Array(new Uint8Array(new Uint8Array([ 255 ]).buffer));
this.concatUint8Array(new Uint8Array(new Uint16Array([ 65535 ]).buffer));
this.concatUint8Array(new Uint8Array(new Uint32Array([ C.length ]).buffer));
e = new Uint8Array(C.length);
for (D = 0, t = C.length; D < t; D++) e[D] = C[D];
return this.concatUint8Array(e);
};
A.prototype.setStringWithoutLength = function(A) {
void 0 === A && (A = "");
for (var e = (A = A || "").length + 1, C = new Uint8Array(e), E = 0, D = A.length; E < D; E++) C[E] = A.charCodeAt(E);
return this.concatUint8Array(C);
};
A.prototype.setArray = function(A) {
var e = new Uint8Array(A);
return this.concatUint8Array(e);
};
return A;
}();
e.XYReader = D;
})(E || (E = {}));
(function(A) {
var e;
(function(A) {
A[A.uint8 = 0] = "uint8";
A[A.int8 = 1] = "int8";
A[A.uint16 = 2] = "uint16";
A[A.int16 = 3] = "int16";
A[A.uint32 = 4] = "uint32";
A[A.int32 = 5] = "int32";
A[A.uint64 = 6] = "uint64";
A[A.int64 = 7] = "int64";
A[A.string = 8] = "string";
A[A.SessionID = 9] = "SessionID";
A[A.array = 10] = "array";
A[A.flagstring = 11] = "flagstring";
A[A.utf8string = 12] = "utf8string";
A[A.bool = 13] = "bool";
})(e = A.NetDataType || (A.NetDataType = {}));
var C = function() {
function A() {
this._array = new Array();
}
A.prototype.addFormatUnit = function(A) {
this._array.push(A);
};
return A;
}();
function E(A) {
var e = A.__protoFormat__;
if (!e) {
e = new C();
A.__protoFormat__ = e;
}
return e;
}
function D(A, e, C) {
var D = {
_dataType: C,
_protoName: e
};
E(A).addFormatUnit(D);
}
A.ProtoDecorator = {
uint8: function() {
return function(A, C) {
D(A, C, e.uint8);
};
},
int8: function() {
return function(A, C) {
D(A, C, e.int8);
};
},
uint16: function() {
return function(A, C) {
D(A, C, e.uint16);
};
},
int16: function() {
return function(A, C) {
D(A, C, e.int16);
};
},
uint32: function() {
return function(A, C) {
D(A, C, e.uint32);
};
},
int32: function() {
return function(A, C) {
D(A, C, e.int32);
};
},
uint64: function() {
return function(A, C) {
D(A, C, e.uint64);
};
},
int64: function() {
return function(A, C) {
D(A, C, e.int64);
};
},
string: function() {
return function(A, C) {
D(A, C, e.string);
};
},
flagstring: function() {
return function(A, C) {
D(A, C, e.flagstring);
};
},
utf8string: function() {
return function(A, C) {
D(A, C, e.utf8string);
};
},
SessionID: function() {
return function(A, C) {
D(A, C, e.SessionID);
};
},
array: function() {
return function(A, C) {
D(A, C, e.array);
};
},
bool: function() {
return function(A, C) {
D(A, C, e.bool);
};
}
};
var t = function() {
function C() {}
C.prototype.pack = function() {
var C = this, E = this.__protoFormat__, D = new A.XYReader();
E && E._array.forEach(function(A) {
var E = A._dataType, t = A._protoName;
switch (E) {
case e.uint8:
D.setUint8(C[t]);
break;

case e.int8:
D.setInt8(C[t]);
break;

case e.uint16:
D.setUint16(C[t]);
break;

case e.int16:
D.setInt16(C[t]);
break;

case e.uint32:
D.setUint32(C[t]);
break;

case e.int32:
D.setInt32(C[t]);
break;

case e.int64:
D.setInt64(C[t]);
break;

case e.string:
case e.utf8string:
D.setString(C[t]);
break;

case e.array:
case e.SessionID:
D.setArray(C[t]);
break;

case e.bool:
D.setBoolean(C[t]);
}
});
return D.getUint8Array();
};
C.unpack = function(C) {
var E = this.prototype.__protoFormat__, D = {}, t = new A.XYReader(C);
E && E._array.forEach(function(A) {
var C = A._dataType, E = A._protoName;
switch (C) {
case e.uint8:
D[E] = t.getUint8();
break;

case e.int8:
D[E] = t.getInt8();
break;

case e.uint16:
D[E] = t.getUint16();
break;

case e.int16:
D[E] = t.getInt16();
break;

case e.uint32:
D[E] = t.getUint32();
break;

case e.int32:
D[E] = t.getInt32();
break;

case e.uint64:
D[E] = t.getUint64();
break;

case e.int64:
D[E] = t.getInt64();
break;

case e.string:
D[E] = t.getString();
break;

case e.SessionID:
D[E] = t.getByLength(16);
break;

case e.flagstring:
D[E] = 1 == D.flag ? t.getString() : "";
break;

case e.utf8string:
D[E] = t.getString("utf-8");
break;

case e.bool:
D[E] = t.getBoolean();
break;

case e.array:
D[E] = t.getArrayByLength();
}
});
return D;
};
return C;
}();
A.ProtocolBase = t;
})(E || (E = {}));
(function(A) {
var e = function() {
function A() {
this.state = null;
}
return r([ i.event("SocketStateChanged") ], A);
}();
A.SocketStateChanged = e;
A.INetwork = function() {};
})(E || (E = {}));
(function(A) {
var e = function(A) {
o(e, A);
function e() {
var e = null !== A && A.apply(this, arguments) || this;
e._srsReady = !1;
e.ReceiveMessageCallBack = null;
e.isTestGameMode = !1;
return e;
}
e.prototype.connect = function(A, e) {
var C = this;
if (null == this._socket) {
this._socket = new i.WbSocket(this);
this._connectCallBack = e;
this._socket.connect(A);
} else {
this._socket.close();
setTimeout(function() {
C._connectCallBack = e;
C._socket.connect(A);
}, 500);
}
};
e.prototype.onSocketOpen = function() {
this._srsReady = !0;
this._connectCallBack && this._connectCallBack(!0);
};
e.prototype.onSocketError = function(A) {
A && console.error("[socket] error, msg = ".concat(A));
this._connectCallBack && this._connectCallBack(!1, A);
};
e.prototype.onSocketClosed = function(A) {
console.log("[socket] onSocketClosed ");
this._srsReady = !1;
this._connectCallBack && this._connectCallBack(!1, A);
};
e.prototype.onSocketReceiveMessage = function(A) {
0 != this._srsReady ? "string" == typeof A || this.ReceiveMessageCallBack && this.ReceiveMessageCallBack(new Uint8Array(A)) : console.log("[socket] onMessage call but socket had closed");
};
e.prototype.sendMsg = function(A) {
this._socket.send(A);
};
return r([ i.module({
name: "TestGameDelegate"
}) ], e);
}(i.ModuleBase);
A.TestGameDelegate = e;
})(E || (E = {}));
(function(A) {
(function(A) {
A.StartDownload = "HotUpdate_StartDownload";
A.Progress = "HotUpdate_Progress";
A.Complete = "HotUpdate_Complete";
})(A.HotUpdateEvent || (A.HotUpdateEvent = {}));
A.ISceneSwitch = function() {};
})(E || (E = {}));
(function(A) {
var e = function() {
function A() {}
A.setExtEventId = function(A, e) {
if (A && A.ext && e) if ("string" == typeof A.ext) {
if ("" !== A.ext) try {
var C = JSON.parse(A.ext);
C.event_id = e;
A.ext = JSON.stringify(C);
} catch (A) {
console.error("CommFunc.setExtEventId 解析ext字段失败:", A);
}
} else A.ext.event_id = e;
};
A.entGameTime = 0;
A.isTestRoom = !1;
A.roomId = 73;
A.appid = 313;
return A;
}();
A.CommFunc = e;
})(E || (E = {}));
(function(A) {
var e = function(e) {
o(C, e);
function C() {
return null !== e && e.apply(this, arguments) || this;
}
C.prototype.ctor = function() {};
C.prototype.httpRequest = function(e, C, E, D, t) {
var B, F = this;
void 0 === t && (t = "");
var n = this.getImpl(A.IHost), o = this.getImpl(A.lobby.IUserManager), r = l({
areaid: A.g.areaConfig.areaID,
numid: (null == o ? void 0 : o.numid) || 0,
hostareaid: A.g.areaConfig.areaID,
hostid: (null == n ? void 0 : n.getHostId()) || 0,
channelid: null !== (B = null == n ? void 0 : n.getChannelid()) && void 0 !== B ? B : 0
}, E || {}), a = ((null == n ? void 0 : n.isSrsDebug()) ? "https://test-acts.bfyx.net" : "https://ly-acts." + (null == n ? void 0 : n.getDomainName())) + e, s = "" !== t;
s && this.openLoading(t);
var c = this.encodeParams(r) + "&ssid=".concat((null == o ? void 0 : o.ssid) || ""), u = function(A) {
s && F.closeLoading();
var C = null == A ? void 0 : A.response;
if (C) try {
var E = "string" == typeof C ? JSON.parse(C) : C;
D(E);
} catch (A) {
console.error("[HttpUtil] JSON parse error: ".concat(e), A);
D(null);
} else D(null);
};
"get" === C ? this.getPlugin(i.IHttp).httpReq("get", a + "?" + c, null, u) : this.getPlugin(i.IHttp).httpReq("post", a, null, u, c);
};
C.prototype.encodeParams = function(A) {
var e = [];
for (var C in A) e.push(C + "=" + encodeURIComponent(A[C]));
return e.join("&");
};
C.prototype.openLoading = function(e) {
var C;
this.closeLoading();
null === (C = this.getImpl(A.IWaiting)) || void 0 === C || C.setTask({
name: A.WaitingCommon,
tip: e
});
};
C.prototype.closeLoading = function() {
var e;
null === (e = this.getImpl(A.IWaiting)) || void 0 === e || e.onComplete(A.WaitingCommon, !0);
};
r([ i.init ], C.prototype, "ctor", null);
return r([ i.module({
name: "comm.HttpUtil"
}) ], C);
}(i.ModuleBase);
A.HttpUtil = e;
})(E || (E = {}));
(function(A) {
var e = function() {
function A() {
this.hexcase = 0;
this.b64pad = "";
}
Object.defineProperty(A, "Instance", {
get: function() {
null == this._instance && (this._instance = new A());
return this._instance;
},
enumerable: !1,
configurable: !0
});
A.prototype.hex_md5 = function(A) {
return this.rstr2hex(this.rstr_md5(this.str2rstr_utf8(A)));
};
A.prototype.b64_md5 = function(A) {
return this.rstr2b64(this.rstr_md5(this.str2rstr_utf8(A)));
};
A.prototype.any_md5 = function(A, e) {
return this.rstr2any(this.rstr_md5(this.str2rstr_utf8(A)), e);
};
A.prototype.hex_hmac_md5 = function(A, e) {
return this.rstr2hex(this.rstr_hmac_md5(this.str2rstr_utf8(A), this.str2rstr_utf8(e)));
};
A.prototype.b64_hmac_md5 = function(A, e) {
return this.rstr2b64(this.rstr_hmac_md5(this.str2rstr_utf8(A), this.str2rstr_utf8(e)));
};
A.prototype.any_hmac_md5 = function(A, e, C) {
return this.rstr2any(this.rstr_hmac_md5(this.str2rstr_utf8(A), this.str2rstr_utf8(e)), C);
};
A.prototype.rstr_md5 = function(A) {
return this.binl2rstr(this.binl_md5(this.rstr2binl(A), 8 * A.length));
};
A.prototype.rstr_hmac_md5 = function(A, e) {
var C = this.rstr2binl(A);
C.length > 16 && (C = this.binl_md5(C, 8 * A.length));
for (var E = Array(16), D = Array(16), t = 0; t < 16; t++) {
E[t] = 909522486 ^ C[t];
D[t] = 1549556828 ^ C[t];
}
var B = this.binl_md5(E.concat(this.rstr2binl(e)), 512 + 8 * e.length);
return this.binl2rstr(this.binl_md5(D.concat(B), 640));
};
A.prototype.rstr2hex = function(A) {
try {
this.hexcase;
} catch (A) {
this.hexcase = 0;
}
for (var e, C = this.hexcase ? "0123456789ABCDEF" : "0123456789abcdef", E = "", D = 0; D < A.length; D++) {
e = A.charCodeAt(D);
E += C.charAt(e >>> 4 & 15) + C.charAt(15 & e);
}
return E;
};
A.prototype.rstr2b64 = function(A) {
try {
this.b64pad;
} catch (A) {
this.b64pad = "";
}
for (var e = "", C = A.length, E = 0; E < C; E += 3) for (var D = A.charCodeAt(E) << 16 | (E + 1 < C ? A.charCodeAt(E + 1) << 8 : 0) | (E + 2 < C ? A.charCodeAt(E + 2) : 0), t = 0; t < 4; t++) 8 * E + 6 * t > 8 * A.length ? e += this.b64pad : e += "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/".charAt(D >>> 6 * (3 - t) & 63);
return e;
};
A.prototype.rstr2any = function(A, e) {
var C, E, D, t, B, F = e.length, n = Array(Math.ceil(A.length / 2));
for (C = 0; C < n.length; C++) n[C] = A.charCodeAt(2 * C) << 8 | A.charCodeAt(2 * C + 1);
var i = Math.ceil(8 * A.length / (Math.log(e.length) / Math.log(2))), o = Array(i);
for (E = 0; E < i; E++) {
B = [];
t = 0;
for (C = 0; C < n.length; C++) {
t = (t << 16) + n[C];
t -= (D = Math.floor(t / F)) * F;
(B.length > 0 || D > 0) && (B[B.length] = D);
}
o[E] = t;
n = B;
}
var r = "";
for (C = o.length - 1; C >= 0; C--) r += e.charAt(o[C]);
return r;
};
A.prototype.str2rstr_utf8 = function(A) {
for (var e, C, E = "", D = -1; ++D < A.length; ) {
e = A.charCodeAt(D);
C = D + 1 < A.length ? A.charCodeAt(D + 1) : 0;
if (55296 <= e && e <= 56319 && 56320 <= C && C <= 57343) {
e = 65536 + ((1023 & e) << 10) + (1023 & C);
D++;
}
e <= 127 ? E += String.fromCharCode(e) : e <= 2047 ? E += String.fromCharCode(192 | e >>> 6 & 31, 128 | 63 & e) : e <= 65535 ? E += String.fromCharCode(224 | e >>> 12 & 15, 128 | e >>> 6 & 63, 128 | 63 & e) : e <= 2097151 && (E += String.fromCharCode(240 | e >>> 18 & 7, 128 | e >>> 12 & 63, 128 | e >>> 6 & 63, 128 | 63 & e));
}
return E;
};
A.prototype.str2rstr_utf16le = function(A) {
for (var e = "", C = 0; C < A.length; C++) e += String.fromCharCode(255 & A.charCodeAt(C), A.charCodeAt(C) >>> 8 & 255);
return e;
};
A.prototype.str2rstr_utf16be = function(A) {
for (var e = "", C = 0; C < A.length; C++) e += String.fromCharCode(A.charCodeAt(C) >>> 8 & 255, 255 & A.charCodeAt(C));
return e;
};
A.prototype.rstr2binl = function(A) {
for (var e = Array(A.length >> 2), C = 0; C < e.length; C++) e[C] = 0;
for (C = 0; C < 8 * A.length; C += 8) e[C >> 5] |= (255 & A.charCodeAt(C / 8)) << C % 32;
return e;
};
A.prototype.binl2rstr = function(A) {
for (var e = "", C = 0; C < 32 * A.length; C += 8) e += String.fromCharCode(A[C >> 5] >>> C % 32 & 255);
return e;
};
A.prototype.binl_md5 = function(A, e) {
A[e >> 5] |= 128 << e % 32;
A[14 + (e + 64 >>> 9 << 4)] = e;
for (var C = 1732584193, E = -271733879, D = -1732584194, t = 271733878, B = 0; B < A.length; B += 16) {
var F = C, n = E, i = D, o = t;
C = this.md5_ff(C, E, D, t, A[B + 0], 7, -680876936);
t = this.md5_ff(t, C, E, D, A[B + 1], 12, -389564586);
D = this.md5_ff(D, t, C, E, A[B + 2], 17, 606105819);
E = this.md5_ff(E, D, t, C, A[B + 3], 22, -1044525330);
C = this.md5_ff(C, E, D, t, A[B + 4], 7, -176418897);
t = this.md5_ff(t, C, E, D, A[B + 5], 12, 1200080426);
D = this.md5_ff(D, t, C, E, A[B + 6], 17, -1473231341);
E = this.md5_ff(E, D, t, C, A[B + 7], 22, -45705983);
C = this.md5_ff(C, E, D, t, A[B + 8], 7, 1770035416);
t = this.md5_ff(t, C, E, D, A[B + 9], 12, -1958414417);
D = this.md5_ff(D, t, C, E, A[B + 10], 17, -42063);
E = this.md5_ff(E, D, t, C, A[B + 11], 22, -1990404162);
C = this.md5_ff(C, E, D, t, A[B + 12], 7, 1804603682);
t = this.md5_ff(t, C, E, D, A[B + 13], 12, -40341101);
D = this.md5_ff(D, t, C, E, A[B + 14], 17, -1502002290);
E = this.md5_ff(E, D, t, C, A[B + 15], 22, 1236535329);
C = this.md5_gg(C, E, D, t, A[B + 1], 5, -165796510);
t = this.md5_gg(t, C, E, D, A[B + 6], 9, -1069501632);
D = this.md5_gg(D, t, C, E, A[B + 11], 14, 643717713);
E = this.md5_gg(E, D, t, C, A[B + 0], 20, -373897302);
C = this.md5_gg(C, E, D, t, A[B + 5], 5, -701558691);
t = this.md5_gg(t, C, E, D, A[B + 10], 9, 38016083);
D = this.md5_gg(D, t, C, E, A[B + 15], 14, -660478335);
E = this.md5_gg(E, D, t, C, A[B + 4], 20, -405537848);
C = this.md5_gg(C, E, D, t, A[B + 9], 5, 568446438);
t = this.md5_gg(t, C, E, D, A[B + 14], 9, -1019803690);
D = this.md5_gg(D, t, C, E, A[B + 3], 14, -187363961);
E = this.md5_gg(E, D, t, C, A[B + 8], 20, 1163531501);
C = this.md5_gg(C, E, D, t, A[B + 13], 5, -1444681467);
t = this.md5_gg(t, C, E, D, A[B + 2], 9, -51403784);
D = this.md5_gg(D, t, C, E, A[B + 7], 14, 1735328473);
E = this.md5_gg(E, D, t, C, A[B + 12], 20, -1926607734);
C = this.md5_hh(C, E, D, t, A[B + 5], 4, -378558);
t = this.md5_hh(t, C, E, D, A[B + 8], 11, -2022574463);
D = this.md5_hh(D, t, C, E, A[B + 11], 16, 1839030562);
E = this.md5_hh(E, D, t, C, A[B + 14], 23, -35309556);
C = this.md5_hh(C, E, D, t, A[B + 1], 4, -1530992060);
t = this.md5_hh(t, C, E, D, A[B + 4], 11, 1272893353);
D = this.md5_hh(D, t, C, E, A[B + 7], 16, -155497632);
E = this.md5_hh(E, D, t, C, A[B + 10], 23, -1094730640);
C = this.md5_hh(C, E, D, t, A[B + 13], 4, 681279174);
t = this.md5_hh(t, C, E, D, A[B + 0], 11, -358537222);
D = this.md5_hh(D, t, C, E, A[B + 3], 16, -722521979);
E = this.md5_hh(E, D, t, C, A[B + 6], 23, 76029189);
C = this.md5_hh(C, E, D, t, A[B + 9], 4, -640364487);
t = this.md5_hh(t, C, E, D, A[B + 12], 11, -421815835);
D = this.md5_hh(D, t, C, E, A[B + 15], 16, 530742520);
E = this.md5_hh(E, D, t, C, A[B + 2], 23, -995338651);
C = this.md5_ii(C, E, D, t, A[B + 0], 6, -198630844);
t = this.md5_ii(t, C, E, D, A[B + 7], 10, 1126891415);
D = this.md5_ii(D, t, C, E, A[B + 14], 15, -1416354905);
E = this.md5_ii(E, D, t, C, A[B + 5], 21, -57434055);
C = this.md5_ii(C, E, D, t, A[B + 12], 6, 1700485571);
t = this.md5_ii(t, C, E, D, A[B + 3], 10, -1894986606);
D = this.md5_ii(D, t, C, E, A[B + 10], 15, -1051523);
E = this.md5_ii(E, D, t, C, A[B + 1], 21, -2054922799);
C = this.md5_ii(C, E, D, t, A[B + 8], 6, 1873313359);
t = this.md5_ii(t, C, E, D, A[B + 15], 10, -30611744);
D = this.md5_ii(D, t, C, E, A[B + 6], 15, -1560198380);
E = this.md5_ii(E, D, t, C, A[B + 13], 21, 1309151649);
C = this.md5_ii(C, E, D, t, A[B + 4], 6, -145523070);
t = this.md5_ii(t, C, E, D, A[B + 11], 10, -1120210379);
D = this.md5_ii(D, t, C, E, A[B + 2], 15, 718787259);
E = this.md5_ii(E, D, t, C, A[B + 9], 21, -343485551);
C = this.safe_add(C, F);
E = this.safe_add(E, n);
D = this.safe_add(D, i);
t = this.safe_add(t, o);
}
return [ C, E, D, t ];
};
A.prototype.md5_cmn = function(A, e, C, E, D, t) {
return this.safe_add(this.bit_rol(this.safe_add(this.safe_add(e, A), this.safe_add(E, t)), D), C);
};
A.prototype.md5_ff = function(A, e, C, E, D, t, B) {
return this.md5_cmn(e & C | ~e & E, A, e, D, t, B);
};
A.prototype.md5_gg = function(A, e, C, E, D, t, B) {
return this.md5_cmn(e & E | C & ~E, A, e, D, t, B);
};
A.prototype.md5_hh = function(A, e, C, E, D, t, B) {
return this.md5_cmn(e ^ C ^ E, A, e, D, t, B);
};
A.prototype.md5_ii = function(A, e, C, E, D, t, B) {
return this.md5_cmn(C ^ (e | ~E), A, e, D, t, B);
};
A.prototype.safe_add = function(A, e) {
var C = (65535 & A) + (65535 & e);
return (A >> 16) + (e >> 16) + (C >> 16) << 16 | 65535 & C;
};
A.prototype.bit_rol = function(A, e) {
return A << e | A >>> 32 - e;
};
return A;
}();
A.MD5 = e;
})(E || (E = {}));
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IReport = e;
var C = function(e) {
o(C, e);
function C() {
var A = null !== e && e.apply(this, arguments) || this;
A._list = [];
A._reportFlag = !1;
A._time = 5e3;
A._timer = null;
return A;
}
C.prototype.ctor = function() {
this._list = [];
this._reportFlag = !1;
};
C.prototype.init = function() {};
C.prototype.reportEvents = function(e, C, E, D) {
var t = this;
void 0 === C && (C = "");
void 0 === D && (D = "");
var B = {};
B.ctype = e;
B.stype = C || "";
B.client_time = Math.floor(Date.now() / 1e3);
B.event_id = D;
B.com_par = "";
if (this.getImpl(A.lobby.IUserManager)) {
E || (E = {});
B.ext = JSON.stringify(E);
this._list.push(B);
if (!this._reportFlag) {
this.reportReq();
if (this._timer) {
clearInterval(this._timer);
this._timer = null;
}
this._timer = setInterval(function() {
t.reportReq();
}, this._time);
}
}
};
C.prototype.resVersionToJson = function() {
var A = i.resVerson;
if (!(A && A instanceof Map && 0 !== A.size)) return "{}";
var e = {};
A.forEach(function(A, C) {
e[String(C)] = A;
});
return JSON.stringify(e);
};
C.prototype.reportReq = function() {
var e;
if (0 !== this._list.length) {
var C = this.getImpl(A.lobby.IUserManager), E = this.getImpl(A.IHost);
if (C && E) {
var D = {
areaid: A.g.areaConfig.areaID,
numid: C.numid || 0,
hostareaid: A.g.areaConfig.areaID,
hostnumid: C.numid || 0,
gameid: A.g.gameIds.game_lianyun,
userid: C.userid || 0,
hostid: E.getHostId() || 0,
reg_time: (null === (e = this.getImpl(A.lobby.ILobbyConfigManager)) || void 0 === e ? void 0 : e.getRegisterTime()) || 0,
version: this.resVersionToJson(),
created_time: Math.floor(Date.now() / 1e3),
chan_id: E.getChannelid() || 0,
list: JSON.stringify(this._list)
}, t = C.ssid, B = this.getReportUrl();
this.getPlugin(i.IHttp).httpReq("post", B, null, function(A) {
console.log("ReportEventUtil Report == ", A);
var e = null == A ? void 0 : A.response;
!e || ("string" == typeof e ? JSON.parse(e) : e).code;
}, this.postParms(D) + "&ssid=".concat(t));
this._list = [];
this._reportFlag = !0;
} else {
this._reportFlag = !1;
if (this._timer) {
clearInterval(this._timer);
this._timer = null;
}
}
} else {
this._reportFlag = !1;
if (this._timer) {
clearInterval(this._timer);
this._timer = null;
}
}
};
C.prototype.postParms = function(A) {
A = A || [];
var e = "";
for (var C in A) e = 0 === e.length ? e + (C + "=") + encodeURIComponent(A[C]) : e + "&" + C + "=" + encodeURIComponent(A[C]);
return e;
};
C.prototype.getReportUrl = function() {
var e = this.getImpl(A.IHost);
return e ? e.isSrsDebug() ? "https://test-acts.bfyx.net/clientevent/report" : "https://ly-acts." + e.getDomainName() + "/clientevent/report" : "";
};
r([ i.init ], C.prototype, "ctor", null);
return r([ i.module({
name: "comm.IReport",
interface: A.IReport
}) ], C);
}(e);
A.Report = C;
})(E || (E = {}));
(function(A) {
(function(A) {
A.GiftStayTimeEventModel = {
cType: "GiftStayTimeEvent"
};
A.openPayPageEvent = {
cType: "OpenPayPageEvent"
};
var e = function() {
function A() {}
A.xxxx = "1";
return A;
}();
A.OpenPayPage = e;
(A.openViewName || (A.openViewName = {})).BankruptInGame = "BankruptInGame";
A.EnterHall = {
cType: "EnterHall",
stype: "EnterHall"
};
A.HallButton = {
cType: "HallButton",
clickGameBtn: "ClickGameBtn",
clickQuickBegin: "ClickQuickBegin"
};
A.LoadHall = {
cType: "LoadHall",
stype: "LoadSucess"
};
A.GameEvent = {
cType: "GameEvent",
beginMatch: "BeginMatch",
matchSuccess: "MatchSuccess",
gameFinish: "GameFinish"
};
A.OrderPayEvent = {
cType: "OrderPay",
stype: "OrderPayFail"
};
A.OpenActivityPageEvent = {
cType: "OpenActivityPage"
};
})(A.ReportConfig || (A.ReportConfig = {}));
})(E || (E = {}));
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
A.IReportEventUtil = e;
var C = function(e) {
o(C, e);
function C() {
var A = null !== e && e.apply(this, arguments) || this;
A._openEventId = new Map();
return A;
}
C.prototype.saveViewNameAndEventId = function(A) {
var e = this.generateEventId();
this._openEventId.set(A, e);
return e;
};
C.prototype.getViewNameAndEventId = function(A) {
return this._openEventId.get(A) || "";
};
C.prototype.generateEventId = function() {
for (var A = "0123456789abcdef", e = "", C = 0; C < 32; C++) e += A.charAt(Math.floor(Math.random() * A.length));
return e;
};
C.prototype.openPayPageEvent = function(e, C, E) {
var D = {};
if (C) for (var t in C) D[t] = C[t];
E && "" != E || (E = e);
var B = this._openEventId.get(e) || "";
this.getImpl(A.IReport).reportEvents(A.ReportConfig.openPayPageEvent.cType, E, D, B);
};
C.prototype.reportEvents = function(e, C, E) {
this.getImpl(A.IReport).reportEvents(e, C, E);
};
C.prototype.reportGiftStayTime = function(e, C, E, D, t) {
var B = {};
B.open_pay_page = e;
B.view_name = C;
B.scenario_position = E;
B.stay_time = D;
if (t) for (var F in t) B[F] = t[F];
var n = this._openEventId.get(C) || "";
this.getImpl(A.IReport).reportEvents(A.ReportConfig.GiftStayTimeEventModel.cType, e, B, n);
};
return r([ i.module({
name: "comm.IReportEventUtil",
interface: A.IReportEventUtil
}) ], C);
}(e);
A.ReportEventUtil = C;
})(E || (E = {}));
(function(e) {
(function(A) {
A.activate = "client_activate";
A.client_shop_click = "client_shop_click";
A.client_goods_clicks = "client_goods_clicks";
A.client_goods_exposure = "client_goods_exposure";
A.client_unlimitgold_click = "client_unlimitgold_click";
A.client_tally_up = "client_tally_up";
A.client_pay_scene = "client_pay_scene";
A.client_initialgold_click = "client_initialgold_click";
A.client_logingold_click = "client_logingold_click";
A.client_zhaocaitree_click = "client_zhaocaitree_click";
A.client_Relieffunds_click = "client_Relieffunds_click";
A.client_hall_join = "client_hall_join";
A.client_gogame = "client_gogame";
A.client_room_click = "client_room_click";
A.client_gameinside_ddz = "client_gameinside_ddz";
A.client_porp_click = "client_porp_click";
A.client_superdouble_click = "client_superdouble_click";
A.client_superdouble_use = "client_superdouble_use";
A.client_TearLimit_click = "client_TearLimit_click";
A.client_TearLimit_use = "client_TearLimit_use";
A.client_game_kwx_change = "client_game_kwx_change";
A.client_vip = "client_vip";
A.client_hall_click = "client_hall_click";
A.client_login_end = "client_login_end";
A.client_alarm_login_start = "client_alarm_login_start";
A.client_alarm_login_fail = "client_alarm_login_fail";
A.client_alarm_order_start = "client_alarm_order_start";
A.client_alarm_order_fail = "client_alarm_order_fail";
A.client_alarm_pay_start = "client_alarm_pay_start";
A.client_alarm_pay_fail = "client_alarm_pay_fail";
A.client_alarm_inroom_start = "client_alarm_inroom_start";
A.client_alarm_inroom_fail = "client_alarm_inroom_fail";
A.client_alarm_open_view_log_errorin = "client_alarm_open_view_log_errorin";
A.client_alarm_order_success = "client_alarm_order_success";
A.client_gameinside_hpgd = "client_gameinside_hpgd";
A.client_gameinside_qxbp = "client_gameinside_qxbp";
A.client_goods_clicks_qxbp = "client_goods_clicks_qxbp";
A.client_goods_exposure_qxbp = "client_goods_exposure_qxbp";
A.client_qxjpq_qxbp = "client_qxjpq_qxbp";
A.client_secondarypayment = "client_secondarypayment";
A.client_lowmut = "client_lowmut";
A.client_newplayer = "client_newplayer";
A.client_clickguide = "client_clickguide";
A.client_challenge_qxbp = "client_challenge_qxbp";
A.client_newplayer_reward = "client_newplayer_reward";
A.client_logout_hint = "client_logout_hint";
A.client_newplayactivity_click = "client_newplayactivity_click";
A.client_tjhf_qxbp = "client_tjhf_qxbp";
A.client_goldadd_click = "client_goldadd_click";
A.client_goldadd_use = "client_goldadd_use";
A.client_newpropicon_exposure = "client_newpropicon_exposure";
A.client_newproppagen_exposure = "client_newproppagen_exposure";
A.client_newprop_click = "client_newprop_click";
A.client_newproppagen_click = "client_newproppagen_click";
A.client_newprop_use = "client_newprop_use";
A.client_endless_exposure = "client_endless_exposure";
A.client_endless_click = "client_endless_click";
A.client_hof_qxbp = "client_hof_qxbp";
A.client_gamefuli_exposure = "client_gamefuli_exposure";
A.client_gamefuli_click = "client_gamefuli_click";
A.client_duijuzhuanpan = "client_duijuzhuanpan";
A.client_qxbp_playtype = "client_qxbp_playtype";
A.client_bjwb_qxbp = "client_bjwb_qxbp";
A.client_rulepic_anpai = "client_rulepic_anpai";
A.client_rulegame_anpai = "client_rulegame_anpai";
A.client_xshk_qxbp = "client_xshk_qxbp";
A.client_challenge_hpgd = "client_challenge_hpgd";
A.client_hpzl = "client_hpzl";
A.client_newshowcase_page = "client_newshowcase_page";
A.client_newshowcase_popup = "client_newshowcase_popup";
A.client_newshowcase_Signin = "client_newshowcase_Signin";
A.client_newshowcase_task = "client_newshowcase_task";
A.client_newshowcase_privilege = "client_newshowcase_privilege";
A.client_newshowcase_giftpack = "client_newshowcase_giftpack";
A.client_returnshowcase_page = "client_returnshowcase_page";
A.client_returnshowcase_popup = "client_returnshowcase_popup";
A.client_returnshowcase_Signin = "client_returnshowcase_Signin";
A.client_returnshowcase_task = "client_returnshowcase_task";
A.client_returnshowcase_Privilege = "client_returnshowcase_Privilege";
A.client_returnshowcase_giftpack = "client_returnshowcase_giftpack";
A.client_active_signin = "client_active_signin";
A.Client_expose_AD = "Client_expose_AD";
A.client_sign_AD = "client_sign_AD";
A.client_Lucky_AD = "client_Lucky_AD";
A.client_award_AD = "client_award_AD";
})(e.ShuShuAnalyticsEvent || (e.ShuShuAnalyticsEvent = {}));
(function(A) {
(function(A) {
A[A.load_Success = 6] = "load_Success";
})(A.loading_step || (A.loading_step = {}));
(function(A) {
A.__name = "shop_event_click";
A.showShop = "展示商城";
A.clickDayAward = "点击每日福利领取";
A.showGold = "展示云币页";
A.showHostSr = "展示钻石页";
A.showTH = "展示特惠页";
})(A.shop_event_click || (A.shop_event_click = {}));
(function(A) {
A.__name = "ui_name";
A.shop = "商城";
A.bankrupt = "破产礼包";
A.enterRoomGift = "进房礼包";
A.infiniteCoin = "无限云币礼包";
A.firstCharge = "首充礼包";
A.overTaking = "超车礼包";
A.playcasually = "随玩礼包";
A.luckGift = "气运礼包";
A.tearTopGift = "破封礼包";
A.ticketGift = "入场券礼包";
A.dailySupply = "每日补给礼包";
A.rechargeInGame = "局中补充云币";
})(A.ui_name || (A.ui_name = {}));
(function(A) {
A.__name = "exposure_scene";
A.lobbyAuto = "登陆斗地主小厅弹出";
A.result = "结算弹出";
A.lobbyIcon = "小厅icon";
A.roomChoose = "房间界面弹出";
A.game = "游戏内弹出";
A.btnQucik = "点击快速开始";
A.lobbyPop = "小厅强弹";
A.storeAuto = "商城强弹";
A.gameRegain = "游戏中返回子大厅";
A.repayAct = "无限回馈礼包";
})(A.exposure_scene || (A.exposure_scene = {}));
(function(A) {
A.__name = "game_event_click_ddz";
A.clickCallBanker = "点击叫地主";
A.clickPass = "点击不叫";
A.clickSuperMult = "点击超级加倍";
A.clickMult = "点击加倍";
A.clickNoMult = "点击不加倍";
A.clickJPQ = "点击记牌器";
A.clickSetting = "点击设置";
A.clickHelp = "点击帮助";
A.clickHint = "点击提示出牌";
A.clickHeadSelf = "点击玩家自己头像";
A.clickHeadOther = "点击其他玩家头像";
A.clickResultContinue = "结算界面点击继续游戏";
A.clickResultCardType = "结算界面点击查看牌型";
A.clickResultQuit = ":结算界面点击退出";
A.clickTearLimit = "点击破封";
A.clickNoTearLimit = "点击不破";
})(A.game_event_click_ddz || (A.game_event_click_ddz = {}));
(function(A) {
A.__name = "game_flow";
A.reqJoinRoom = "请求进入游戏房间 ";
A.respJoinRoom = "收到respjoinroom协议";
A.enterRoomFinish = "收到roomfinish协议";
A.roomSatrtGame = "收到gamestart协议，准备切换场景";
A.changeGameScence = "切换游戏场景";
A.showGameScence = "游戏主界面展示完成";
A.reqPlayerConnect = "请求进入匹配队列 ";
A.respPlayerConnect = "进入匹配队列成功";
A.gameStart = "收到START_GAME开局";
A.endGame = "收到GAME_END事件";
})(A.game_flow || (A.game_flow = {}));
(function(A) {
A.__name = "ddz_unlimitgold";
A.iconClick = "小厅无限金币点击";
A.viewShow = "无限金币界面曝光";
A.gameClick = "点击体验按钮";
})(A.ddz_unlimitgold || (A.ddz_unlimitgold = {}));
(function(A) {
A.__name = "room_up";
A.up = "升场";
A.down = "降场";
A.hold = "留在本场";
})(A.room_up || (A.room_up = {}));
(function(A) {
A.__name = "zhaocaitree_click";
A.iconClick = "小厅礼包续送ICON点";
A.viewShow = "礼包续送界面曝光";
A.gameClick = "点击领奖";
})(A.zhaocaitree_click || (A.zhaocaitree_click = {}));
(function(A) {
A.__name = "client_game_kwx_change";
A.abandonclick = "【过】按钮点击";
A.change = "是否使用换牌";
A.changeclick = "【换牌】按钮点击";
A.changeclicktime = "点击【对局详情】次数";
A.changenumber = "选择换牌的张数";
A.chessboard = "本局局号";
A.timeout = "是否超时自动操作";
})(A.client_game_kwx_change || (A.client_game_kwx_change = {}));
(function(A) {
A.__name = "client_vip";
A.vip_ui = "爵位界面曝光";
A.vip_click = "爵位界面点击";
})(A.client_vip || (A.client_vip = {}));
(function(A) {
A.__name = "client_login_end";
A[A.success = 0] = "success";
A[A.fail = 1] = "fail";
A[A.cancel = 2] = "cancel";
})(A.client_login_end || (A.client_login_end = {}));
(function(A) {
A.__name = "game_event_click_hpgd";
A.clickSetting = "1";
A.clickRule = "2";
A.clickTalk = "3";
A.clickHeadSelf = "4";
A.clickHeadOther = "5";
A.clickResultContinue = "6";
A.clickExchange = "7";
A.rebornExposure = "8";
A.rebornSR = "9";
A.rebornDiamond = "10";
})(A.game_event_click_hpgd || (A.game_event_click_hpgd = {}));
(function(A) {
A.__name = "game_event_click_qxbp";
A.clickSetting = "1";
A.clickRule = "2";
A.clickTing = "3";
A.clickRecommond = "4";
A.clickFlow = "5";
A.clickTlak = "6";
A.clickHeadSelf = "7";
A.clickHeadOther = "8";
A.clickResultContinue = "9";
})(A.game_event_click_qxbp || (A.game_event_click_qxbp = {}));
(function(A) {
A.__name = "qxjpq_click";
A.clickInGame = "0";
})(A.game_event_click_jpq || (A.game_event_click_jpq = {}));
(function(A) {
A.__name = "qxjpq_ui";
A.ui_jpq = "0";
A.ui_winningGift = "0";
})(A.game_event_ui_jpq || (A.game_event_ui_jpq = {}));
(function(A) {
A.__name = "client_secondarypayment";
A.secondarypayment_ui = "付费挽留页面曝光";
A.secondarypayment_click = "付费挽留页面点击";
})(A.client_secondarypayment || (A.client_secondarypayment = {}));
(function(A) {
A.__name = "client_lowmut";
A.lowmut_click = "跳过低倍和牌点击";
})(A.client_lowmut || (A.client_lowmut = {}));
(function(A) {
A.__name = "client_challenge_qxbp";
A.challenge_qxbp_ui = "七星挑战界面曝光";
A.challenge_qxbp_click = "七星挑战界面点击";
})(A.client_challenge_qxbp || (A.client_challenge_qxbp = {}));
(function(A) {
A.__name = "client_newplayactivity_click";
A.ui_click = "界面点击";
A.ui_type = "活动奖励类型";
A.detail_reward = "界面奖励";
})(A.client_newplayactivity_click || (A.client_newplayactivity_click = {}));
(function(A) {
A[A["0："] = 0] = "0：";
A[A["1：满足条件使用推荐价格"] = 1] = "1：满足条件使用推荐价格";
A[A["2：强制使用保底价格"] = 2] = "2：强制使用保底价格";
A[A["3：强制使用最大价格"] = 3] = "3：强制使用最大价格";
A[A["4：A组用户"] = 4] = "4：A组用户";
})(A.bigdata_type || (A.bigdata_type = {}));
(function(A) {
A.__name = "playcard_type";
A.type1 = "1：仅使用出牌按钮出牌";
A.type2 = "2：仅使用双击出牌方式出牌";
A.type3 = "3：2种方式均使用过";
})(A.playcard_type || (A.playcard_type = {}));
(function(A) {
A.__name = "client_challenge_hpgd";
A.challenge_hpgd_ui = "火拼挑战界面曝光";
A.challenge_hpgd_click = "火拼挑战界面点击";
})(A.client_challenge_hpgd || (A.client_challenge_hpgd = {}));
(function(A) {
A.__name = "client_hpzl";
A.hpzl_ui = "界面曝光";
A.hpzl_click = "界面点击";
})(A.client_hpzl || (A.client_hpzl = {}));
(function(A) {
A[A["0：高级分页曝光"] = 0] = "0：高级分页曝光";
A[A["1：传奇分页曝光"] = 1] = "1：传奇分页曝光";
A[A["2：典藏分页曝光"] = 2] = "2：典藏分页曝光";
A[A["3：奖励预览曝光"] = 3] = "3：奖励预览曝光";
A[A["4：规则页曝光"] = 4] = "4：规则页曝光";
})(A.client_hpzl_ui_type || (A.client_hpzl_ui_type = {}));
(function(A) {
A[A["0：小厅入口点击"] = 0] = "0：小厅入口点击";
A[A["1：高级分页点击"] = 1] = "1：高级分页点击";
A[A["2：传奇分页点击"] = 2] = "2：传奇分页点击";
A[A["3：典藏分页点击"] = 3] = "3：典藏分页点击";
A[A["4：领取所有点击"] = 4] = "4：领取所有点击";
A[A["5：解锁按钮点击"] = 5] = "5：解锁按钮点击";
A[A["6：恭喜获得解锁按钮点击"] = 6] = "6：恭喜获得解锁按钮点击";
A[A["7：奖励预览点击"] = 7] = "7：奖励预览点击";
A[A["8：规则点击"] = 8] = "8：规则点击";
})(A.client_hpzl_click_type || (A.client_hpzl_click_type = {}));
})(e.shuShuAnalytics || (e.shuShuAnalytics = {}));
var C = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
return e;
}(i.ModuleBase);
e.IShuShuAnalyticsUtil = C;
var E = A.CryptoJS || {}, D = function(A) {
o(C, A);
function C() {
var e = null !== A && A.apply(this, arguments) || this;
e.config = {
appId: "cc754035bc634f40abe7bf09b38eb9e9",
serverUrl: "https://te.xingyeddz.com/sync_data"
};
return e;
}
C.prototype.ctor = function() {
this.properties = new Map();
};
C.prototype.init = function() {};
C.prototype.track = function(A, C) {
console.log("track", A, C);
var D = this.makeJsonInfo(A, C);
this.getImpl(e.IHost).isSrsDebug() && (this.config.appId = "f3d20cccd078484d87a4a83b85beed48");
var t = "appid=".concat(this.config.appId, "&client=2&data=").concat(D);
this.getPlugin(i.IHttp).httpReq("post", this.config.serverUrl, null, function(A) {
console.log("ShuShuAnalyticsEvent track result:", A);
}, t);
if (A.includes("client_alarm") && this.getImpl(e.IHost).isSrsNormal()) {
var B = this.makeAlarmJsonInfo(A, C), F = Math.floor(Date.now() / 1e3), n = {
exp: F + 300,
iat: F,
user_name: "bc"
}, o = e.Util.Base64Urlencode(e.Util.Base64encode(JSON.stringify({
alg: "HS256",
typ: "JWT"
}))), r = e.Util.Base64Urlencode(e.Util.Base64encode(JSON.stringify(n))), a = E.HmacSHA256(o + "." + r, "QQYnRFerJTSEcrfB89fw8prOaObmrch8"), s = o + "." + r + "." + (a = e.Util.Base64Urlencode(E.enc.Base64.stringify(a)));
this.getPlugin(i.IHttp).httpReq("post", "https://duck.imeete.com/push", null, function(e) {
console.log("ShuShuAnalyticsEvent client_alarm track result:", A, e);
}, JSON.stringify(B), new Map([ [ "Authorization", s ] ]));
}
};
C.prototype.login = function(A) {
this.loginId = A;
};
C.prototype.setSuperProperties = function(A) {
for (var e in A) this.properties.set(e, A[e]);
};
C.prototype.makeAlarmJsonInfo = function(A, C) {
var E, D = {}, t = new Date(), B = t.getFullYear(), F = "gaoxiao_login_" + B;
A.includes("client_alarm_order") || A.includes("client_alarm_pay") ? F = "gaoxiao_pay_" + B : A.includes("client_alarm_inroom") && (F = "gaoxiao_inroom_" + B);
D.uuid = t.getTime() + "" + this.loginId;
D.db_name = "gaoxiao.duckdb";
D.created_at = e.Util.getSysTime();
D.dt = e.Util.getSysDateByType("-");
D.is_monthly = 0;
D.table_name = F;
D.data_info = ((E = {}).event_name = A, E);
if (C) for (var n in C) D.data_info[n] = C[n];
return D;
};
C.prototype.makeJsonInfo = function(A, C) {
var E, D, t;
try {
for (var B = c(this.properties), F = B.next(); !F.done; F = B.next()) {
var n = a(F.value, 2), i = n[0], o = n[1];
C[i] = o;
}
} catch (A) {
E = {
error: A
};
} finally {
try {
F && !F.done && (D = B.return) && D.call(B);
} finally {
if (E) throw E.error;
}
}
var r = ((t = {})["#account_id"] = this.loginId, t["#distinct_id"] = this.properties.get("identify"), 
t["#type"] = "track", t["#time"] = this.getCurrentDateTime(), t["#event_name"] = A, 
t.properties = C, t), s = JSON.stringify(r);
return e.Util.URL.urlEncode(s);
};
C.prototype.getCurrentDateTime = function() {
var A = new Date(), e = A.getFullYear(), C = this.padZero(A.getMonth() + 1), E = this.padZero(A.getDate()), D = this.padZero(A.getHours()), t = this.padZero(A.getMinutes()), B = this.padZero(A.getSeconds());
return "".concat(e, "-").concat(C, "-").concat(E, " ").concat(D, ":").concat(t, ":").concat(B);
};
C.prototype.padZero = function(A) {
return String(A).padStart(2, "0");
};
r([ i.init ], C.prototype, "ctor", null);
return r([ i.module({
name: "comm.IShuShuAnalyticsUtil",
interface: e.IShuShuAnalyticsUtil
}) ], C);
}(C);
e.ShuShuAnalyticsUtil = D;
})(E || (E = {}));
(function(A) {
var e = function() {
function A() {}
A.formatNumString = function(A) {
for (var e = A.toString(), C = "", E = []; e.length > 3; ) {
var D = e.substr(e.length - 3, e.length - 1);
E.push(D);
e = e.substr(0, e.length - 3);
}
E.push(e);
for (var t = E.length - 1; t >= 0; t--) {
C += E[t];
t > 0 && (C += ",");
}
return C;
};
A.getNameWithTwoStar = function(A) {
for (var e, C, E, D, t = A, B = t.length, F = [], n = [], i = 0, o = 0; o < B; o++) {
var r = null;
if ((s = 1) > 0) {
r = t.substring(o, o + s);
o = o + s - 1;
}
1 == s ? (i += 1) < 2 && F.push(r) : s > 1 && (i += 1) < 2 && F.push(r);
}
var a = -1;
i = 0;
for (o = 0; o < B; o++) {
var s;
r = null;
if ((s = 1) > 0) {
r = t.substring(o, o + s);
o = o + s - 1;
}
1 == s ? (i += 1) > 3 ? n.push(r) : a += 1 : s > 1 && ((i += 1) > 3 ? n.push(r) : a += 1);
}
var l = "";
try {
for (var u = c(F), p = u.next(); !p.done; p = u.next()) l += p.value;
} catch (A) {
e = {
error: A
};
} finally {
try {
p && !p.done && (C = u.return) && C.call(u);
} finally {
if (e) throw e.error;
}
}
for (o = 0; o < a; o++) l += "*";
try {
for (var d = c(n), f = d.next(); !f.done; f = d.next()) l += f.value;
} catch (A) {
E = {
error: A
};
} finally {
try {
f && !f.done && (D = d.return) && D.call(d);
} finally {
if (E) throw E.error;
}
}
return l;
};
A.toFixedEx = function(A, e, C) {
void 0 === e && (e = 2);
void 0 === C && (C = !0);
if (C) {
var E = String(A).split(".");
E[1] && (E[1] = E[1] = E[1].slice(0, e));
return 0 == e ? E[0] : E.join(".");
}
return A.toFixed(e);
};
A.dealBigNum = function(e, C) {
void 0 === C && (C = 1);
var E = !1;
if (0 > e) {
E = !0;
e *= -1;
}
var D = e.toString();
if (e >= 1e12) if (e % 1e12 != 0) {
var t = (e /= 1e12).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "万亿";
} else {
e /= 1e12;
D = A.toFixedEx(e, 0) + "万亿";
} else if (e >= 1e8) if (e % 1e8 != 0) {
t = (e /= 1e8).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "亿";
} else {
e /= 1e8;
D = A.toFixedEx(e, 0) + "亿";
} else if (e >= 1e4) if (e % 1e4 != 0) {
t = (e /= 1e4).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "万";
} else {
e /= 1e4;
D = A.toFixedEx(e, 0) + "万";
}
return E ? "-".concat(D) : D;
};
A.dealBigNumEx = function(A, e) {
void 0 === e && (e = 1e5);
var C = !1;
if (0 > A) {
C = !0;
A *= -1;
}
var E = A.toString();
A >= 1e12 ? E = A % 1e12 != 0 ? (A /= 1e12).toFixed(1) + "万亿" : (A /= 1e12).toFixed(0) + "万亿" : A >= 1e8 ? E = A % 1e8 != 0 ? (A /= 1e8).toFixed(1) + "亿" : (A /= 1e8).toFixed(0) + "亿" : A >= e && (E = A % 1e4 != 0 ? (A /= 1e4).toFixed(1) + "万" : (A /= 1e4).toFixed(0) + "万");
return C ? "-".concat(E) : E;
};
A.dealBigNumEx2 = function(e, C) {
void 0 === C && (C = 1);
var E = !1;
if (0 > e) {
E = !0;
e *= -1;
}
var D = e.toString();
if (e >= 1e8) if (e % 1e8 != 0) {
var t = (e /= 1e8).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "亿";
} else {
e /= 1e8;
D = A.toFixedEx(e, 0) + "亿";
} else if (e >= 1e4) if (e % 1e4 != 0) {
t = (e /= 1e4).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "万";
} else {
e /= 1e4;
D = A.toFixedEx(e, 0) + "万";
}
return E ? "-".concat(D) : D;
};
A.dealBigNumEx3 = function(e, C) {
void 0 === C && (C = 1);
var E = !1;
if (0 > e) {
E = !0;
e *= -1;
}
var D = e.toString();
if (e >= 1e16) if (e % 1e16 != 0) {
var t = (e /= 1e16).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "京";
} else {
e /= 1e16;
D = A.toFixedEx(e, 0) + "京";
} else if (e >= 1e12) if (e % 1e12 != 0) {
t = (e /= 1e12).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "兆";
} else {
e /= 1e12;
D = A.toFixedEx(e, 0) + "兆";
} else if (e >= 1e8) if (e % 1e8 != 0) {
t = (e /= 1e8).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "亿";
} else {
e /= 1e8;
D = A.toFixedEx(e, 0) + "亿";
} else if (e >= 1e4) if (e % 1e4 != 0) {
t = (e /= 1e4).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "万";
} else {
e /= 1e4;
D = A.toFixedEx(e, 0) + "万";
}
return E ? "-".concat(D) : D;
};
A.dealBigNumWithValidCount = function(e, C) {
void 0 === C && (C = 1);
var E = !1;
if (0 > e) {
E = !0;
e *= -1;
}
var D = e.toString();
if (e >= 1e8) if (e % 1e8 != 0) {
var t = (e /= 1e8).toString().split(".")[0].length, B = Math.max(0, C - t), F = e.toString().split(".")[1] || [], n = Math.min(F.length, B);
D = A.toFixedEx(e, n) + "亿";
} else {
e /= 1e8;
D = A.toFixedEx(e, 0) + "亿";
} else if (e >= 1e4) if (e % 1e4 != 0) {
t = (e /= 1e4).toString().split(".")[0].length, B = Math.max(0, C - t), F = e.toString().split(".")[1] || [], 
n = Math.min(F.length, B);
D = A.toFixedEx(e, n) + "万";
} else {
e /= 1e4;
D = A.toFixedEx(e, 0) + "万";
}
return E ? "-".concat(D) : D;
};
A.roundDownNumber = function(A, e) {
if (e >= Math.abs(A).toString().length - 1) return A;
var C = A.toString(), E = Math.abs(A).toString().length - e, D = (A < 0 ? "-" : "") + Math.abs(Number(C.slice(0, e))) + "0".repeat(E);
return parseInt(D, 10);
};
A.dealBigNumEx4 = function(e, C) {
void 0 === C && (C = 1);
var E = !1;
if (0 > e) {
E = !0;
e *= -1;
}
var D = (e = A.roundDownNumber(e, C)).toString();
if (e >= 1e16) if (e % 1e16 != 0) {
var t = (e /= 1e16).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "京";
} else {
e /= 1e16;
D = A.toFixedEx(e, 0) + "京";
} else if (e >= 1e12) if (e % 1e12 != 0) {
t = (e /= 1e12).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "兆";
} else {
e /= 1e12;
D = A.toFixedEx(e, 0) + "兆";
} else if (e >= 1e8) if (e % 1e8 != 0) {
t = (e /= 1e8).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "亿";
} else {
e /= 1e8;
D = A.toFixedEx(e, 0) + "亿";
} else if (e >= 1e4) if (e % 1e4 != 0) {
t = (e /= 1e4).toString().split(".")[1] || [], B = Math.min(t.length, C);
D = A.toFixedEx(e, B) + "万";
} else {
e /= 1e4;
D = A.toFixedEx(e, 0) + "万";
}
return E ? "-".concat(D) : D;
};
A.numberTozh = function(A, e, C) {
void 0 === e && (e = "千");
void 0 === C && (C = "亿");
A = parseInt("".concat(A));
if (isNaN(A)) return "";
var E = [ "百", "千", "万", "亿" ], D = [ 100, 1e3, 1e4, 1e8 ];
E.reverse();
D.reverse();
var t = E.indexOf(C), B = E.indexOf(e);
t = -1 == t ? 0 : t;
B = -1 == B ? E.length - 1 : B;
for (var F = "", n = A, i = t; i <= B; i++) {
var o = Math.floor(n / D[i]);
F += o > 0 ? "".concat(o).concat(E[i]) : "";
n -= o * D[i];
}
var r = A % D[B];
return F + ("" != F && 0 == r ? "" : r);
};
A.convertToChinaNum = function(A) {
var e = [ "零", "一", "二", "三", "四", "五", "六", "七", "八", "九" ], C = [ "", "十", "百", "千", "万", "十", "百", "千", "亿", "十", "百", "千", "万", "十", "百", "千", "亿" ];
if (!A || isNaN(A)) return "零";
for (var E = A.toString().split(""), D = "", t = 0; t < E.length; t++) {
var B = E.length - 1 - t;
D = C[t] + D;
D = e[E[B]] + D;
}
return (D = (D = (D = (D = (D = D.replace(/零(千|百|十)/gu, "零").replace(/十零/gu, "十")).replace(/零+/gu, "零")).replace(/零亿/gu, "亿").replace(/零万/gu, "万")).replace(/亿万/gu, "亿")).replace(/零+$/gu, "")).replace(/^一十/gu, "十");
};
A.dealNickNameShort = function(e, C) {
void 0 === C && (C = 8);
var E = A.getBLen(e);
return "" == e || E <= C ? e : A.getStringObjectByBytes(e, C);
};
A.dealNickName = function(e, C) {
void 0 === C && (C = 8);
return "" == e || e.length <= C ? e : A.getStringObjectByBytes(e, C);
};
A.getStringObjectByBytes = function(A, e) {
for (var C = "", E = 0, D = 0; D < A.length; D++) {
var t = A.charCodeAt(D);
if ((E += t < 128 ? 1 : 2) <= e) C += A.charAt(D); else {
if (!(55296 <= t && t <= 56319 || 56320 <= t && t <= 57343)) break;
C += A.charAt(D);
}
}
E > e && (C += "..");
return C;
};
A.dealNickNameEx = function(e, C) {
void 0 === C && (C = 6);
return "" == e || e.length <= C ? e : A.getStringObjectByBytesEx(e, C);
};
A.getStringObjectByBytesEx = function(A, e) {
for (var C = "", E = 0, D = 0; D < A.length; D++) {
A.charCodeAt(D);
if (!(++E <= e)) {
C += "...";
break;
}
C += A.slice(D, D + 1);
}
return C;
};
A.replaceAll = function(A, e, C) {
return A.replace(new RegExp(e, "gm"), C);
};
A.objToStr = function(e) {
var C = JSON.stringify(e);
return (C = A.replaceAll(A.replaceAll(C, '":', "="), ',"', ";")).slice(2, -1);
};
A.strToObj = function(A) {
A = "{" + A + "}";
return JSON.parse(A);
};
A.formatDateTime = function(A) {
var e = new Date();
e.setTime(1e3 * Number(A));
var C = e.getFullYear(), E = e.getMonth() + 1, D = E < 10 ? "0" + E : E, t = e.getDate();
return C + "/" + D + "/" + (t < 10 ? "0" + t : t);
};
A.formatDateString = function(A) {
var e = A || new Date(), C = e.getFullYear(), E = e.getMonth() + 1, D = E < 10 ? "0" + E : E, t = e.getDate();
return C + "/" + D + "/" + (t < 10 ? "0" + t : t);
};
A.formatTimeString = function(A) {
var e = A || new Date(), C = e.getHours(), E = C < 10 ? "0" + C : C, D = e.getMinutes();
return E + ":" + (D < 10 ? "0" + D : D);
};
A.formatDateTimeString = function(e) {
return A.formatDateString(e) + " " + A.formatTimeString(e);
};
A.secToTime = function(e) {
var C = Math.floor(e / 60), E = e % 60;
return A.prefixInteger(C, 2) + ":" + A.prefixInteger(E, 2);
};
A.secToTime2 = function(A, e) {
void 0 === e && (e = !1);
if (A > 86400) {
var C = Math.floor(A / 86400);
return C + "天" + Math.floor((A - 86400 * C) / 3600) + "时";
}
var E = Math.floor(A / 3600), D = Math.floor((A - 3600 * E) / 60);
return e && 0 == E ? D + "分" + A % 60 + "秒" : E + "时" + D + "分";
};
A.parseStrToJson = function(A) {
for (var e = A.split(","), C = -1, E = -1, D = [ e[0] ], t = [], B = [], F = 1; F < e.length - 1; F++) {
-1 != e[F].indexOf("{") && (C = F);
if (-1 != C) if (-1 != e[F].indexOf("}")) {
E = F;
t.push(e[F]);
} else -1 == E ? t.push(e[F]) : B.push(e[F]); else D.push(e[F]);
}
B.push(e[e.length - 1]);
var n = D.concat(B), i = JSON.parse(n.join(",")), o = t.join(",").split(":"), r = JSON.parse(o.shift());
o.length > 1 ? i[r] = o.join(":") : i[r] = o[0];
var a = i[r].split("");
a.shift();
a.pop();
i[r] = a.join("");
return i;
};
A.parseStrToJson2 = function(A) {
var e = A.split("&"), C = e.shift().split(","), E = C.pop(), D = C.join(","), t = e.pop().split(","), B = t.shift(), F = t.join(","), n = JSON.parse(D + "," + F), i = E.split(":"), o = JSON.parse(i.shift());
i.length > 1 ? n[o] = i.join(":") + "&" + e.join("&") + "&" + B : n[o] = i[0] + "&" + e.join("&") + "&" + B;
var r = n[o].split("");
r.shift();
r.pop();
n[o] = r.join("");
return n;
};
A.getBLen = function(A) {
if (null == A) return 0;
"string" != typeof A && (A += "");
return A.replace(/[^\x00-\xff]/g, "01").length;
};
A.prefixInteger = function(A, e, C) {
void 0 === C && (C = !0);
return (A = "".concat(A)).length > e && !C ? "".concat(A) : (Array(e).join("0") + parseInt(A)).slice(-e);
};
A.toChineseNum = function(A, e) {
void 0 === e && (e = 0);
if (A >= 1e12) {
if (e > 0 && A % 1e12 != 0) {
var C = (E = (A / 1e12).toString()).indexOf(".");
return E.slice(0, C + 1 + e).replace(/\.?0*$/, "") + "万亿";
}
return Math.floor(A / 1e12) + "万亿";
}
if (A >= 1e8) {
if (e > 0 && A % 1e8 != 0) {
C = (E = (A / 1e8).toString()).indexOf(".");
return E.slice(0, C + 1 + e).replace(/\.?0*$/, "") + "亿";
}
return Math.floor(A / 1e8) + "亿";
}
if (A >= 1e4) {
if (e > 0 && A % 1e4 != 0) {
var E;
C = (E = (A / 1e4).toString()).indexOf(".");
return E.slice(0, C + 1 + e).replace(/\.?0*$/, "") + "万";
}
return Math.floor(A / 1e4) + "万";
}
return A + "";
};
A.toChineseNum2 = function(A, e, C) {
void 0 === e && (e = 0);
void 0 === C && (C = 1e4);
return C > A ? A + "" : A >= 1e12 ? e > 0 && A % 1e12 != 0 ? (A / 1e12).toFixed(e) + "万亿" : Math.floor(A / 1e12) + "万亿" : A >= 1e8 ? e > 0 && A % 1e8 != 0 ? (A / 1e8).toFixed(e) + "亿" : Math.floor(A / 1e8) + "亿" : A >= 1e4 ? e > 0 && A % 1e4 != 0 ? (A / 1e4).toFixed(e) + "万" : Math.floor(A / 1e4) + "万" : A + "";
};
A.toSpecialChineseWan = function(A) {
var e = A >= 0 ? "" : "-";
return (A = Math.abs(A)) > 1e7 ? e + Math.floor(A / 1e4) + "万" : A > 1e6 ? e + (Math.floor(10 * A / 1e4) / 10).toFixed(1) + "万" : A > 1e4 ? e + (Math.floor(100 * A / 1e4) / 100).toFixed(2) + "万" : e + A;
};
A.stringToBytes = function(A) {
if (!A) return new Uint8Array();
for (var e = this._stringToByte(A), C = new Uint8Array(e.length), E = 0; E < C.length; E++) C[E] = e[E];
return C;
};
A._stringToByte = function(A) {
if (!A) return null;
for (var e, C = [], E = A.length, D = 0; D < E; D++) if ((e = A.charCodeAt(D)) >= 65536 && e <= 1114111) {
C.push(e >> 18 & 7 | 240);
C.push(e >> 12 & 63 | 128);
C.push(e >> 6 & 63 | 128);
C.push(63 & e | 128);
} else if (e >= 2048 && e <= 65535) {
C.push(e >> 12 & 15 | 224);
C.push(e >> 6 & 63 | 128);
C.push(63 & e | 128);
} else if (e >= 128 && e <= 2047) {
C.push(e >> 6 & 31 | 192);
C.push(63 & e | 128);
} else C.push(255 & e);
return C;
};
A.bytesToString = function(A) {
if ("string" == typeof A) return A;
console.log(A);
for (var e = "", C = 0; C < A.length; C++) {
var E = A[C].toString(2), D = E.match(/^1+?(?=0)/u);
if (D && 8 == E.length) {
for (var t = D[0].length, B = A[C].toString(2).slice(7 - t), F = 1; F < t; F++) B += A[F + C].toString(2).slice(2);
e += String.fromCharCode(parseInt(B, 2));
C += t - 1;
} else e += String.fromCharCode(A[C]);
}
return e;
};
A.shortenStringWithSymbol = function(A) {
return A;
};
A.timestampByNow = function(A) {
return A >= 1095 ? "永久" : A + "天";
};
A.isSameDay = function(A, e) {
return new Date(A).setHours(0, 0, 0, 0) === new Date(e).setHours(0, 0, 0, 0);
};
A.dealBigNumWithValidDigits = function(A, e, C) {
void 0 === e && (e = 4);
void 0 === C && (C = 2);
if (null == A || isNaN(A)) return "0";
var E = !1;
if (0 > A) {
E = !0;
A = Math.abs(A);
}
var D = A.toString(), t = D.replace(/^0+/, "")[0];
if (!t) return "0";
var B = D.indexOf(t);
if (D.length - B <= e) A = Math.floor(100 * A) / 100; else {
var F = D.slice(B, B + e), n = D.length - B - e;
A = Math.floor(100 * Number(F + "0".repeat(n))) / 100;
}
var i, o = function(A, e) {
void 0 === e && (e = "");
var C = A.toString();
C.includes(".") && (C = C.replace(/\.?0+$/u, ""));
return C + e;
};
i = A >= 1e16 ? o(A / 1e16, "京") : A >= 1e12 ? o(A / 1e12, "兆") : A >= 1e8 ? o(A / 1e8, "亿") : A >= 1e4 ? o(A / 1e4, "万") : o(A);
return E ? "-".concat(i) : i;
};
A.dealBigNumEx5 = function(e, C, E) {
void 0 === C && (C = 4);
void 0 === E && (E = 2);
if (!e) return "0";
var D = !1;
if (0 > e) {
D = !0;
e *= -1;
}
var t = (e = A.roundDownNumber(e, C)).toString(), B = "", F = !1, n = 0;
if (e >= 1e20) {
e % 1e20 == 0 && (F = !0);
B = "万京";
n = 1e20;
} else if (e >= 1e16) {
e % 1e16 == 0 && (F = !0);
B = "万兆";
n = 1e16;
} else if (e >= 1e12) {
e % 1e12 == 0 && (F = !0);
B = "万亿";
n = 1e12;
} else if (e >= 1e8) {
e % 1e8 == 0 && (F = !0);
B = "亿";
n = 1e8;
} else if (e >= 1e4) {
e % 1e4 == 0 && (F = !0);
B = "万";
n = 1e4;
}
if (n > 0) {
e /= n;
var i = 0;
if (!1 === F) for (var o = e.toString().split(".")[1] || [], r = (i = Math.min(o.length, E)) - 1; r >= 0 && "0" == o[r]; r--) i > 0 && i--;
t = A.toFixedEx(e, i) + B;
}
return D ? "-".concat(t) : t;
};
return A;
}();
A.StringUtils = e;
})(E || (E = {}));
(function(e) {
var C = Math.pow(2, 32), E = function() {
function E() {}
E.getSysTime = function() {
var A = new Date();
return A.getFullYear() + "-" + (A.getMonth() + 1) + "-" + A.getDate() + " " + E.format("%02d", A.getHours()) + ":" + E.format("%02d", A.getMinutes()) + ":" + E.format("%02d", A.getSeconds());
};
E.getSysDate = function() {
var A = new Date();
return A.getFullYear() + E.format("%02d", A.getMonth() + 1) + E.format("%02d", A.getDate());
};
E.getSysDateByType = function(A) {
var e = new Date();
return e.getFullYear() + A + E.format("%02d", e.getMonth() + 1) + A + E.format("%02d", e.getDate());
};
E.formatDate = function(A, e) {
var C, E = new Date();
E.setTime(1e3 * e);
var D = {
"M+": E.getMonth() + 1,
"d+": E.getDate(),
"h+": E.getHours(),
"m+": E.getMinutes(),
"s+": E.getSeconds(),
"q+": Math.floor((E.getMonth() + 3) / 3),
S: E.getMilliseconds()
};
/(y+)/u.test(A) && (A = A.replace(RegExp.$1, null === (C = E.getFullYear() + "") || void 0 === C ? void 0 : C.substr(4 - RegExp.$1.length)));
for (var t in D) new RegExp("(" + t + ")", "u").test(A) && (A = A.replace(RegExp.$1, 1 == RegExp.$1.length ? D[t] : ("00" + D[t]).substr(("" + D[t]).length)));
return A;
};
E.str_repeat = function(A, e) {
for (var C = []; e > 0; C[--e] = A) ;
return C.join("");
};
E.format = function() {
for (var A = [], e = 0; e < arguments.length; e++) A[e] = arguments[e];
for (var C, D, t, B, F, n = 0, i = A[n++], o = [], r = ""; i; ) {
if (D = /^[^\x25]+/u.exec(i)) o.push(D[0]); else if (D = /^\x25{2}/u.exec(i)) o.push("%"); else {
if (!(D = /^\x25(?:(\d+)\$)?(\+)?(0|'[^$])?(-)?(\d+)?(?:\.(\d+))?([b-fosuxX])/u.exec(i))) throw "unkown error ?!";
if (null == (C = A[D[1] || n++]) || null == C) throw "Too few arguments.";
if (/[^s]/u.test(D[7]) && "number" != typeof C) throw "Expecting number but found " + typeof C;
switch (D[7]) {
case "b":
C = C.toString(2);
break;

case "c":
C = String.fromCharCode(C);
break;

case "d":
C = parseInt(C);
break;

case "e":
C = D[6] ? C.toExponential(D[6]) : C.toExponential();
break;

case "f":
C = D[6] ? parseFloat(C).toFixed(D[6]) : parseFloat(C);
break;

case "o":
C = C.toString(8);
break;

case "s":
C = (C = String(C)) && D[6] ? C.substring(0, D[6]) : C;
break;

case "u":
C = Math.abs(C);
break;

case "x":
C = C.toString(16);
break;

case "X":
C = C.toString(16).toUpperCase();
}
C = /[def]/u.test(D[7]) && D[2] && C >= 0 ? "+" + C : C;
B = D[3] ? "0" == D[3] ? "0" : D[3].charAt(1) : " ";
F = D[5] - String(C).length - r.length;
t = D[5] ? E.str_repeat(B, F) : "";
o.push(r + (D[4] ? C + t : t + C));
}
i = i.substring(D[0].length);
}
return o.join("");
};
E.getNumberSuffixByString = function(A) {
for (var e = A.length, C = -1, E = 1; E < e; ++E) {
var D = Number(A.substr(-E));
if (Number.isNaN(D)) return C;
C = D;
}
return C;
};
E.uint8ArrayToString = function(A) {
var e, C, E = "";
try {
for (var D = c(A), t = D.next(); !t.done; t = D.next()) {
var B = t.value;
E += String.fromCharCode(B);
}
} catch (A) {
e = {
error: A
};
} finally {
try {
t && !t.done && (C = D.return) && C.call(D);
} finally {
if (e) throw e.error;
}
}
return E;
};
E.stringToUint8Array = function(A) {
var e = [];
if (A) for (var C = 0; C < A.length; ++C) e.push(A.charCodeAt(C));
return new Uint8Array(e);
};
E.getTimeDesc = function(A) {
if (A < 0) return "";
if (A < 60) return E.format("%d秒", A);
if (A < 3600) {
var e = A / 60;
return E.format("%d分", e);
}
if (A < 86400) {
var C = A / 3600;
return E.format("%d小时", C);
}
var D = A / 86400;
return E.format("%d天", D);
};
E.getTimeDesc2 = function(A) {
if (A < 0) return "";
var e = Math.floor(A / 3600), C = Math.floor((A - 3600 * e) / 60), D = A - 3600 * e - 60 * C;
return E.format("%02d:%02d:%02d", e, C, D);
};
E.getTimeDesc3 = function(A) {
if (A < 0) return "";
if (A < 60) return E.format("%d秒", A);
if (A < 3600) {
var e = Math.floor(A / 60), C = A % 60;
return E.format("%d分%d秒", e, C);
}
if (A < 86400) {
var D = Math.floor(A / 3600);
e = Math.floor((A - 3600 * D) / 60);
return E.format("%d小时%d分", D, e);
}
var t = Math.floor(A / 86400), B = Math.floor((A - 86400 * t) / 3600);
return E.format("%d天%d小时", t, B);
};
E.getHighTimeStr = function(A, e) {
void 0 === e && (e = 1);
if (1 == e) switch (!0) {
case A < 60:
return "0分钟前";

case A < 3600:
return "".concat(A / 60 ^ 0, "分钟前");

case A < 86400:
return "".concat(A / 3600 ^ 0, "小时前");

case A < 864e6:
return "".concat(A / 86400 ^ 0, "天前");

default:
return "9999天前";
} else switch (!0) {
case A < 60:
return "".concat(A, "秒");

case A < 3600:
return "".concat(A / 60 ^ 0, "分钟");

case A < 86400:
return "".concat(A / 3600 ^ 0, "小时");

case A < 2592e3:
return "".concat(A / 86400 ^ 0, "天");

case A < 31104e3:
return "".concat(A / 2592e3 ^ 0, "个月");

case A < 31104e5:
return "".concat(A / 31104e3 ^ 0, "年");

default:
return "未知";
}
};
E.toPositiveIntNumber = function(A) {
if (!A) return null;
for (var e = 0, C = 0; C < A.length; C++) {
var E = A.charCodeAt(C);
if (!(E >= 48 && E <= 57)) return null;
e = 10 * e + E - 48;
}
return e;
};
E.getBackStringByFlag = function(A, e) {
var C = A.search(e);
return -1 != C ? A.substring(C, A.length - 1) : "";
};
E.getFrontStringByFlag = function(A, e) {
var C = A.search(e);
return -1 != C ? A.substring(0, C - 1) : "";
};
E.getTodayZeroTime = function(A, e) {
void 0 === A && (A = 0);
void 0 === e && (e = 0);
var C = 0 != e ? e : new Date().getTime() / 1e3;
return C - (C + 28800) % 86400 + 3600 * A;
};
E.timezoneTranslate = function(A) {
var e = 6e4 * new Date().getTimezoneOffset();
return new Date(A.setHours(0, 0, 0, 0)).getTime() + -1 * e - 288e5;
};
E.getTrimString = function(A, e, C) {
void 0 === e && (e = 8);
for (var E = 0, D = "", t = "", B = 0; B < A.length; B++) 12644 != (F = A.charCodeAt(B)) && (t += A[B]);
A = t;
for (B = 0; B < A.length; B++) {
var F;
E++;
((F = A.charCodeAt(B)) < 0 || F > 128) && !C && E++;
D = D.concat(A.charAt(B));
if (55296 <= F && F <= 56319 && A.length > 1) {
var n = 1024 * (F - 55296) + (A.charCodeAt(B + 1) - 56320) + 65536;
if (118784 <= n && n <= 129535) {
B++;
E++;
D = D.concat(A.charAt(B));
}
}
if (E >= e) return B == A.length - 1 ? D : D = D.concat("...");
}
return E < e ? A : A.substring(0, e).concat("...");
};
E.getTrimStringWithoutSuffix = function(A, e, C) {
void 0 === e && (e = 8);
for (var E = 0, D = "", t = 0; t < A.length; t++) {
var B = A.charCodeAt(t);
E++;
(B < 0 || B > 128) && !C && E++;
D = D.concat(A.charAt(t));
if (55296 <= B && B <= 56319 && A.length > 1) {
var F = 1024 * (B - 55296) + (A.charCodeAt(t + 1) - 56320) + 65536;
if (118784 <= F && F <= 129535) {
t++;
E++;
D = D.concat(A.charAt(t));
}
}
if (E >= e) return D;
}
return E < e ? A : A.substr(0, e);
};
E.prototype.getByteLength = function(A) {
for (var e = 0, C = 0; C < (null == A ? void 0 : A.length); C++) {
var E = A.charCodeAt(C);
E < 0 || E > 128 ? e += 2 : e++;
}
return e;
};
E.getByteLengthAdd = function(A) {
return new TextEncoder().encode(A).length;
};
E.toUnicode = function(A) {
for (var e = "", C = 0; C < A.length; C++) {
var E = A.charCodeAt(C);
e += E < 0 || E > 128 ? "\\u" + A.charCodeAt(C).toString(16) : A[C];
}
return e;
};
E.getTableByString = function(A, e, C) {
var E, D, t = {}, B = A.split(e);
if (!(B && B.length > 0)) return t;
try {
for (var F = c(B), n = F.next(); !n.done; n = F.next()) {
var i = n.value.split(C);
if (!i || 2 != i.length) break;
t[i[0]] = i[1];
}
} catch (A) {
E = {
error: A
};
} finally {
try {
n && !n.done && (D = F.return) && D.call(F);
} finally {
if (E) throw E.error;
}
}
return t;
};
E.checkPhone = function(A) {
return !!/^1[3456789]\d{9}$/u.test(A);
};
E.checkPasswd = function(A) {
return !!/^[a-zA-Z0-9]{6,12}$/u.test(A);
};
E.ckeckChineseStr = function(A) {
return !!/^[\u4E00-\u9FA5]+$/u.test(A);
};
E.ckeckAddressStr = function(A) {
return !!/^[a-zA-Z0-9\u4E00-\u9FA5]+$/u.test(A);
};
E.getConvertIPString = function(A, e) {
void 0 === e && (e = !1);
if (!A) return "";
var C = new Uint8Array(new Uint32Array([ A ]).buffer).reverse().join(".");
e && (C = E.getEncryptIP(C));
return C;
};
E.getEncryptIP = function(A) {
return A ? A = A.replace(/[0-9]+\./gu, function(A) {
return A.replace(A.charAt(0), "*");
}) : "";
};
E.Bit = function(A, e) {
return 0 != (A & e);
};
E.getValueByKeyName = function(e, C) {
var E, D;
!C && i.OS.isBrowser && (C = A.location.search.slice(1));
if (C) {
var t = C.split("&");
try {
for (var B = c(t), F = B.next(); !F.done; F = B.next()) {
var n = F.value.split("=");
if (2 == n.length) {
if (n[0] == e) return n[1];
for (var o = n[1].split("_"), r = 0; r < o.length; ++r) if (o[2 * r] == e) return o[2 * r + 1];
}
}
} catch (A) {
E = {
error: A
};
} finally {
try {
F && !F.done && (D = B.return) && D.call(B);
} finally {
if (E) throw E.error;
}
}
}
};
E.getValueByKeyApp = function(e, C) {
var E, D;
i.OS.isBrowser && !C && (C = A.location.search.slice(1));
if (C) {
var t = C.split("&");
try {
for (var B = c(t), F = B.next(); !F.done; F = B.next()) {
var n = F.value.split("=");
if (2 == n.length && n[0] == e) return n[1];
}
} catch (A) {
E = {
error: A
};
} finally {
try {
F && !F.done && (D = B.return) && D.call(B);
} finally {
if (E) throw E.error;
}
}
}
};
E.sessionToUUID = function(A) {
return !A || A.length < 16 ? "" : E.format("{%02X%02X%02X%02X-%02X%02X-%02x%02x-%02X%02X-%02X%02X%02X%02X%02X%02X}", A[3], A[2], A[1], A[0], A[5], A[4], A[7], A[6], A[8], A[9], A[10], A[11], A[12], A[13], A[14], A[15]);
};
E.formatNumber = function(A) {
switch (Math.floor(Math.log10(A))) {
case 4:
case 5:
case 6:
return "".concat((A / 1e4).toString().substring(0, 5), "万");

case 7:
return "".concat((A / 1e4).toString().substring(0, 4), "万");

case 8:
case 9:
case 10:
return "".concat((A / 1e8).toString().substring(0, 5), "亿");

case 11:
return "".concat((A / 1e8).toString().substring(0, 4), "亿");

default:
return E.round(A, 2).toString();
}
};
E.formatCoinNum = function(A) {
var e = Math.floor(Math.log10(A));
if (e >= 11) return "".concat(E.round(A / 1e8, 2).toString(), "亿");
if (e >= 7) {
var C = E.round(A / 1e4, 2).toString();
return C.length > 7 ? "".concat(E.round(A / 1e8, 2).toString(), "亿") : "".concat(C, "万");
}
return A.toString();
};
E.round = function(A, e) {
return Math.round(+(+A + "e" + e)) / Math.pow(10, e);
};
E.addSpaceToStrCenter = function(A) {
A && 2 == A.length && (A = A.slice(0, 1) + "  " + A.slice(1));
return A;
};
E.compareWXVersion = function(A, e) {
A = A.split(".");
e = e.split(".");
for (var C = Math.max(A.length, e.length); A.length < C; ) A.push("0");
for (;e.length < C; ) e.push("0");
for (var E = 0; E < C; E++) {
var D = parseInt(A[E]), t = parseInt(e[E]);
if (D > t) return 1;
if (D < t) return -1;
}
return 0;
};
E.formatTime = function(A) {
if (A < 3600) return "0时";
if (A < 86400) return Math.floor(A / 3600) + "时";
var e = Math.floor(A / 86400), C = Math.floor((A - 86400 * e) / 3600);
return e + "天" + (C > 0 ? "".concat(C, "时") : "");
};
E.prototype._parseVersion = function(A) {
var e;
return null !== (e = A.match(/[^.]+/gu)) && void 0 !== e ? e : [];
};
E.getStringByDataType = function(A) {
var e, C;
if (!A) return "";
var E = "";
if ("object" == typeof A) try {
for (var D = c(Object.keys(A)), t = D.next(); !t.done; t = D.next()) {
var B = t.value;
E = E + B + ":" + A[B] + ",";
}
} catch (A) {
e = {
error: A
};
} finally {
try {
t && !t.done && (C = D.return) && C.call(D);
} finally {
if (e) throw e.error;
}
} else {
if ("string" != typeof A) return typeof A;
E = A;
}
return E;
};
E.getQueryString = function(e) {
var C, E, D = new RegExp("(^|&)" + e + "=([^&]*)(&|$)", "u"), t = null === (E = null === (C = A.location) || void 0 === C ? void 0 : C.search) || void 0 === E ? void 0 : E.substr(1).match(D);
return null != t ? unescape(t[2]) : null;
};
E.getFormatPhoneString = function(A) {
if (11 !== A.length) return A;
var e = A.substr(0, 3);
return (e += "****") + A.substr(-4);
};
E.convertLongToString = function(A) {
if ("number" == typeof A) return "" + A;
for (var e = A.low < 0 ? 65536 * (A.low >> 16 & 65535) + (65535 & A.low) : A.low, C = A.unsigned ? 65536 * (A.high >> 16 & 65535) + (65535 & A.high) : A.high, E = e.toString(), D = (C * Math.pow(2, 32)).toFixed(0), t = "", B = 0, F = D.length - 1, n = E.length - 1; F >= 0 || n >= 0; --F, 
--n) {
var i = +B;
F >= 0 && (i += +D[F]);
n >= 0 && (i += +E[n]);
B = i >= 10 ? 1 : 0;
t = i % 10 + t;
}
1 == B && (t = "1" + t);
return t;
};
E.replaceText = function(A, e) {
var C, E, D = new RegExp("{[0-9]}");
if ("string" == typeof e || "number" == typeof e) A = A.replace(D, e.toString()); else try {
for (var t = c(e), B = t.next(); !B.done; B = t.next()) {
var F = B.value;
A = A.replace(D, F);
}
} catch (A) {
C = {
error: A
};
} finally {
try {
B && !B.done && (E = t.return) && E.call(t);
} finally {
if (C) throw C.error;
}
}
return A;
};
E.getNumberFromStr = function(A) {
var e = A.replace(/[^0-9]+/gu, ",").split(","), C = [];
e.map(function(A) {
/[0-9]/gu.test(A) && C.push(Number(A));
});
return C;
};
E.parseJson = function(A) {
if (!A) {
i.DEBUG() && console.error("JSON str is empty / null", new Error().stack);
return {};
}
try {
return JSON.parse(A);
} catch (e) {
if (i.DEBUG()) throw new Error("JSON.parse : " + A);
return {};
}
};
E.decodeURIComponent = function(A) {
return decodeURIComponent(A);
};
E.sec2DayHour = function(A) {
var e = Math.floor(A / 86400), C = Math.floor(A % 86400 / 3600), E = e > 0 ? "".concat(e, "天") : "", D = "".concat(C, "小时");
return "".concat(E).concat(D);
};
E.sec2Day = function(A) {
var e = Math.floor(A / 86400), C = e >= 0 ? "".concat(e, "天") : "";
return "".concat(C);
};
E.secToDayHourMinu = function(A) {
var e = Math.floor(A / 86400), C = Math.floor(A % 86400 / 3600), E = Math.floor(A % 86400 % 3600 / 60), D = e > 0 ? "".concat(e, "天") : "", t = C > 0 ? "".concat(C, "时") : "", B = E > 0 ? "".concat(E, "分") : "", F = "".concat(D).concat(t).concat(B);
"" == F && (F = "小于一分钟");
return F;
};
E.base64EncodeUint8Array = function(A) {
for (var e = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/", C = "", E = 0, D = 0; D < A.length; D += 3) {
var t = A[D], B = A[D + 1], F = A[D + 2], n = e[t >> 2], i = e[(3 & t) << 4 | B >> 4], o = e[(15 & B) << 2 | F >> 6], r = e[63 & F];
D + 1 >= A.length && E++;
D + 2 >= A.length && E++;
C += n + i + o + r;
}
return C.slice(0, C.length - E) + "=".repeat(E);
};
E.Base64Urlencode = function(A) {
return A.replace(/\+/g, "-").replace(/\//g, "_").replace(/=+$/, "");
};
E.Base64encode = function(A) {
var e, C, D, t, B, F, n, i = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=", o = "", r = 0;
A = E._utf8_encode(A);
for (;r < A.length; ) {
t = (e = A.charCodeAt(r++)) >> 2;
B = (3 & e) << 4 | (C = A.charCodeAt(r++)) >> 4;
F = (15 & C) << 2 | (D = A.charCodeAt(r++)) >> 6;
n = 63 & D;
isNaN(C) ? F = n = 64 : isNaN(D) && (n = 64);
o = o + i.charAt(t) + i.charAt(B) + i.charAt(F) + i.charAt(n);
}
return o;
};
E._utf8_encode = function(A) {
A = A.replace(/rn/gu, "n");
for (var e = "", C = 0; C < A.length; C++) {
var E = A.charCodeAt(C);
if (E < 128) e += String.fromCharCode(E); else if (E > 127 && E < 2048) {
e += String.fromCharCode(E >> 6 | 192);
e += String.fromCharCode(63 & E | 128);
} else {
e += String.fromCharCode(E >> 12 | 224);
e += String.fromCharCode(E >> 6 & 63 | 128);
e += String.fromCharCode(63 & E | 128);
}
}
return e;
};
E.getIconLevel = function(A) {
var e = 0;
if (A) {
var C = [ 8e6, 35e6, 9e7, 2e8, 6e8, 15e8 ];
if (A >= C[C.length - 1]) e = C.length - 1; else if (A < C[0]) e = 0; else for (var E = 0; E < C.length; E++) if (A >= C[E] && A < C[E + 1]) {
e = E;
break;
}
} else e = 0;
return e + 1;
};
E.clone = function(A) {
return JSON.parse(JSON.stringify(A));
};
E.MAKEUSERID = function(A, e) {
return A && e ? A * C + e : 0;
};
E.getNumidAndAreaid = function(A) {
if (!A) return {
numid: 0,
areaid: 0
};
var e = Math.floor(A / Math.pow(2, 32));
return {
numid: A - e * Math.pow(2, 32),
areaid: e
};
};
E.parseChannelId = function(A) {
return Math.floor(A / 1e3) % 1e3;
};
E.withClickLimit = function(A, e) {
void 0 === e && (e = 500);
var C = 0;
return function() {
for (var E = [], D = 0; D < arguments.length; D++) E[D] = arguments[D];
var t = Date.now();
if (!(t - C < e)) {
C = t;
return A.apply(this, E);
}
};
};
E.URL = {
changeUrl: function(e) {
e = null == e ? "" : e;
A.history.replaceState(A.history.state, "", A.location.pathname + e);
},
getRoomAndTableIDFromUrl: function(e) {
var C, E, D = {}, t = e || void 0;
if (t && 1 == e.split("?").length) return D;
var B = t || A.location.search;
if (0 === B.length) return D;
var F = B.split("?")[1].split("&");
try {
for (var n = c(F), i = n.next(); !i.done; i = n.next()) {
var o = i.value;
D[o.split("=")[0]] = o.split("=")[1];
}
} catch (A) {
C = {
error: A
};
} finally {
try {
i && !i.done && (E = n.return) && E.call(n);
} finally {
if (C) throw C.error;
}
}
return D;
},
getWXCodeFromUrl: function(e) {
var C = /code.*?(?=&)/gu, E = (e = e || A.location.search).match(C);
console.log(E);
return E ? e.match(C)[0].split("=")[1] : null;
},
urlEncode: function(A) {
return encodeURIComponent(A);
},
urlDecode: function(A) {
return decodeURIComponent(A);
},
base64Encode: function(A, e, C) {
for (var E = new Array(64), D = new Array(123), t = 0; t < 64; ) D[E[t] = t < 26 ? t + 65 : t < 52 ? t + 71 : t < 62 ? t - 4 : t - 59 | 43] = t++;
for (var B, F = null, n = [], i = 0, o = 0; e < C; ) {
var r = A[e++];
switch (o) {
case 0:
n[i++] = E[r >> 2];
B = (3 & r) << 4;
o = 1;
break;

case 1:
n[i++] = E[B | r >> 4];
B = (15 & r) << 2;
o = 2;
break;

case 2:
n[i++] = E[B | r >> 6];
n[i++] = E[63 & r];
o = 0;
}
if (i > 8191) {
(F || (F = [])).push(String.fromCharCode.apply(String, n));
i = 0;
}
}
if (o) {
n[i++] = E[B];
n[i++] = 61;
1 === o && (n[i++] = 61);
}
if (F) {
i && F.push(String.fromCharCode.apply(String, n.slice(0, i)));
return F.join("");
}
return String.fromCharCode.apply(String, n.slice(0, i));
},
secretKeyEncode: function(A, e) {
if (!A) return "";
var C = A.length, D = e.length;
if (0 === C) return e;
if (0 === D) return A;
for (var t = [], B = 0; B < C; ++B) {
var F = A.charCodeAt(B) + e.charCodeAt(B % D) % 256;
t.push(F);
}
var n = new Uint8Array(t.length);
for (B = 0; B < n.length; B++) n[B] = t[B];
return E.URL.base64Encode(n, 0, n.length);
},
signUrl: function(A, C, D) {
void 0 === D && (D = "args");
C = C || 1;
var t = JSON.stringify(A), B = t = E.URL.secretKeyEncode(t, "BF@GameClient_827wy");
t = E.URL.urlEncode(t);
var F = {
appid: C
};
F[D] = B;
var n = "";
for (var i in F) {
n += i;
n += "=";
n += F[i];
n += "|";
}
n += "BF@GameClient_827wy";
var o = e.MD5.Instance.hex_md5(n), r = "appid=1&" + D + "=" + t + "&signature=" + E.URL.urlEncode(o);
console.log("[TEST]shoplist final url:", r);
return r;
}
};
E.SESSION = {
sessionEncode: function(A) {
var e = new Uint8Array(A), C = new DataView(e.buffer, 0, 1).getUint8(0).toString(16).toUpperCase(), E = new DataView(e.buffer, 1, 1).getUint8(0).toString(16).toUpperCase(), D = new DataView(e.buffer, 2, 1).getUint8(0).toString(16).toUpperCase(), t = new DataView(e.buffer, 3, 1).getUint8(0).toString(16).toUpperCase();
C = 1 == C.length ? 0 + C : C;
E = 1 == E.length ? 0 + E : E;
D = 1 == D.length ? 0 + D : D;
var B = (t = 1 == t.length ? 0 + t : t) + D + E + C, F = new DataView(e.buffer, 4, 1).getUint8(0).toString(16).toUpperCase(), n = new DataView(e.buffer, 5, 1).getUint8(0).toString(16).toUpperCase();
F = 1 == F.length ? 0 + F : F;
var i = (n = 1 == n.length ? 0 + n : n) + F, o = new DataView(e.buffer, 6, 1).getUint8(0).toString(16).toUpperCase(), r = new DataView(e.buffer, 7, 1).getUint8(0).toString(16).toUpperCase();
o = 1 == o.length ? 0 + o : o;
var a = (r = 1 == r.length ? 0 + r : r) + o, s = new DataView(e.buffer, 8, 1).getUint8(0).toString(16).toUpperCase(), c = new DataView(e.buffer, 9, 1).getUint8(0).toString(16).toUpperCase(), l = new DataView(e.buffer, 10, 1).getUint8(0).toString(16).toUpperCase(), u = new DataView(e.buffer, 11, 1).getUint8(0).toString(16).toUpperCase(), p = new DataView(e.buffer, 12, 1).getUint8(0).toString(16).toUpperCase(), d = new DataView(e.buffer, 13, 1).getUint8(0).toString(16).toUpperCase(), f = new DataView(e.buffer, 14, 1).getUint8(0).toString(16).toUpperCase(), h = new DataView(e.buffer, 15, 1).getUint8(0).toString(16).toUpperCase();
s = 1 == s.length ? 0 + s : s;
c = 1 == c.length ? 0 + c : c;
l = 1 == l.length ? 0 + l : l;
u = 1 == u.length ? 0 + u : u;
p = 1 == p.length ? 0 + p : p;
d = 1 == d.length ? 0 + d : d;
f = 1 == f.length ? 0 + f : f;
h = 1 == h.length ? 0 + h : h;
return "".concat(B, "-").concat(i, "-").concat(a, "-").concat(s).concat(c, "-").concat(l).concat(u).concat(p).concat(d).concat(f).concat(h);
}
};
return E;
}();
e.Util = E;
})(E || (E = {}));
(function(A) {
A.IWaiting = function() {};
})(E || (E = {}));
u || (u = {}), F || (F = {}), function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
e.prototype.onUIBinded = function() {
var A = this;
this.addClick(this.view.KW_Component.KW_BtnOK, function() {
A.close();
A._btnOKFun && A._btnOKFun();
});
this.addClick(this.view.KW_Component.KW_BtnCancel, function() {
A.close();
A._btnCancelFun && A._btnCancelFun();
});
this.addClick(this.view.KW_Component.KW_BtnClose, function() {
A.close();
});
};
e.prototype.initUI = function(A, e, C, E, D, t, B) {
void 0 === e && (e = 2);
this.view.KW_Component.KW_TextCon.text = A;
this._btnOKFun = C;
this._btnCancelFun = E;
this._btnNum = e;
this.view.KW_Component.BtnNum.selectedIndex = e;
this.view.KW_Component.HasClose.selectedIndex = D ? 0 : 1;
0 == e && (this.view.KW_Component.KW_TextCon.align = 0);
t && (this.view.KW_Component.KW_BtnOK.title = t);
B && (this.view.KW_Component.KW_BtnCancel.title = B);
};
e = r([ i.mvc.popup({
name: "UICommonDialog",
module: "common",
fguiPackage: [ "_Common" ],
fguiObject: "CommonDialogUIView",
order: i.mvc.PopZorder.dialog
}) ], e);
}(i.mvc.UIPopup);
(function() {
var A;
A || (A = {}), function(A) {
o(e, A);
function e() {
var e = null !== A && A.apply(this, arguments) || this;
e._data = "";
e._time = 1;
e.instantiate = null;
e._close = function() {
e.close();
};
return e;
}
e.prototype.initUI = function(A, e) {
var C = i.FGUI.getSize(i.App.inst.root), E = (e = e || {}).PosX || C.width / 2, D = e.PosY || C.height / 2, t = e.Time || 1, B = e.bRich || !1;
i.FGUI.setPosition(this.fguiObject, E, D, 0);
this._data = A;
this._time = null != t ? t : 1;
if (!0 === B) {
this.view.showType.setSelectedIndex(1);
this.view.KW_TextWeakHintRich.text = this._data;
} else {
this.view.showType.setSelectedIndex(0);
this.view.KW_TextWeakHint.text = this._data;
}
this.setActive(this.node, !0);
if (this.instantiate) {
clearInterval(this.instantiate);
this.instantiate = null;
}
this.instantiate = setInterval(this._close, 1e3 * this._time);
};
e.prototype.close = function() {
if (this.instantiate) {
clearInterval(this.instantiate);
this.instantiate = null;
}
A.prototype.close.call(this);
};
e = r([ i.mvc.popup({
name: "UIWeakHint",
module: "common",
fguiPackage: [ "_Common" ],
fguiObject: "WeakHintUIView",
order: i.mvc.PopZorder.toast
}) ], e);
}(i.mvc.UIPopup);
})(u || (u = {}));
(function() {
var A;
A || (A = {}), function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
e.prototype.showCommonDlg = function(A, e, C, E, D, t, B) {
e = null != e ? e : 2;
this._popupManger.createPopup("UICommonDialog", A, e, C, E, D, t, B);
};
e.prototype.showWeakHint = function(A, e) {
console.log("showWeakHint", A, e);
this._popupManger.createPopup("UIWeakHint", A, e);
};
e.prototype.showAwardUI = function(A, e, C, E, D, t, B) {
this.getImpl(i.IViewPlugin).openView("UIAward", A, e, C, E, D, t, B);
};
e.prototype.showAwardGoldUI = function(A, e, C, E) {
this.getImpl(i.IViewPlugin).openView("UIAwardGold", A, e, C, E);
};
e.prototype.showHelpUI = function(A) {
this.getImpl(i.IViewPlugin).openView("UIRuleLianZha", A);
};
e.prototype.showHelpHPMJUI = function(A) {
this.getImpl(i.IViewPlugin).openView("UIRuleHPMJ", A);
};
e.prototype.showHelpK5StarUI = function(A) {
this.getImpl(i.IViewPlugin).openView("UIRuleK5Star", A);
};
e.prototype.showHelpK7StarUI = function(A) {
this.getImpl(i.IViewPlugin).openView("UIRuleK7Star", A);
};
e.prototype.showHelpGuandanUI = function(A) {
this.getImpl(i.IViewPlugin).openView("UIRuleGuandan", A);
};
e.prototype.showHelpAnPaiGDUI = function(A) {
this.getImpl(i.IViewPlugin).openView("UIRuleAnPaiGD", A);
};
e.prototype.showSettingUI = function() {
this.getImpl(i.IViewPlugin).openView("UISetting");
};
e.prototype.closeAllCommonDlg = function() {
this._popupManger.closeByType("UICommonDialog");
};
e.prototype.closeAllWeakHint = function() {
this._popupManger.closeByType("UIWeakHint");
};
e.prototype.showCommonGiftDlg = function(A) {
this._popupManger.createPopup("UICommonGiftDialog", A);
};
e.prototype.closeCommonGiftDlg = function() {
this._popupManger.closeByType("UICommonGiftDialog");
};
e.prototype.closeAllPop = function() {
this._popupManger.closeByType("UIHelp");
this._popupManger.closeByType("UISetting");
this.closeAllCommonDlg();
this.closeAllWeakHint();
this.closeCommonGiftDlg();
};
e.prototype.closeAwardUI = function() {
this.getImpl(i.IViewPlugin).closeView("UIAward");
};
e.prototype.closeAwardGoldUI = function() {
this._popupManger.closeByType("UIAwardGold");
};
e.prototype.showAwardListUI = function(A, e, C, E) {
this.getImpl(i.IViewPlugin).openView("UIAwardList", A, e, C, E);
};
e.prototype.showAwardListNobilityAddUI = function(A, e, C, E, D) {
this.getImpl(i.IViewPlugin).openView("UIAwardListNobilityAdd", A, e, C, E, D);
};
e.prototype.showPropDetailUI = function(A, e, C) {
this.getImpl(i.IViewPlugin).openView("UIPropDetail", A, e, C);
};
r([ i.aware(i.mvc.IPopupManager) ], e.prototype, "_popupManger", void 0);
e = r([ i.module({
name: "CommonDlgs",
interface: E.ICommonDlgs
}) ], e);
}(i.ModuleBase);
})(u || (u = {}));
(function() {
var A;
A || (A = {}), function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
e.prototype.onUIBinded = function() {
var A = this;
this.addClick(this.view.KW_Component.KW_BtnClose, function() {
A.close();
});
};
e.prototype.initUI = function(A) {
this.view.KW_Component.KW_TextCon.text = A;
};
e = r([ i.mvc.popup({
name: "UICommonGiftDialog",
module: "common",
fguiPackage: [ "_Common" ],
fguiObject: "CommonDialogGiftUI",
order: i.mvc.PopZorder.dialog
}) ], e);
}(i.mvc.UIPopup);
})(u || (u = {}));
(function() {
var A;
A || (A = {}), function(A) {
o(e, A);
function e() {
var e = null !== A && A.apply(this, arguments) || this;
e._process = 0;
e._virtualProcess = 0;
e._virtualHandle = -1;
return e;
}
e.prototype.initUI = function(A) {
i.FGUI.setActive(this.fguiObject, !1);
this._labTitle = this.view.pb_load.lab_title;
this.view.lab_vers.text = "";
this._progressbar = this.view.pb_load;
this.startDownload(A);
};
e.prototype.startDownload = function(A) {
var e = this;
console.log("[HotUpdateController] display download info. total download size:".concat(A));
i.FGUI.setActive(this.fguiObject, !0);
for (var C = 0; C < i.ViewLayer.Top; C++) this._viewPlugin.setViewLayerVisiable(C, !1);
this.showPercent(0);
this.showTipText("正在更新最新的游戏 0%");
this._process = 0;
this._virtualProcess = 0;
-1 == this._virtualHandle && (this._virtualHandle = setInterval(function() {
e._virtualProcess += 5 * Math.random();
if (e._virtualProcess >= 100) {
clearTimeout(e._virtualHandle);
e._virtualHandle = -1;
e._virtualProcess = 100;
}
e.showPercent(.4 * e._virtualProcess + .6 * e._process);
}, 200));
};
e.prototype.onUpdateProgress = function(A) {
this._process = Math.round(100 * A);
this.showPercent(.4 * this._virtualProcess + .6 * this._process);
};
e.prototype.onUpdateComplete = function() {
for (var A = 0; A < i.ViewLayer.Top; A++) this._viewPlugin.setViewLayerVisiable(A, !0);
i.FGUI.setActive(this.fguiObject, !1);
this.close();
};
e.prototype.close = function() {
A.prototype.close.call(this);
if (this._virtualProcess >= 100) {
clearTimeout(this._virtualHandle);
this._virtualHandle = -1;
}
};
e.prototype.showPercent = function(A) {
A = Math.max(Math.min(A, 100), 1);
this._progressbar.value = A;
this.showTipText("正在更新最新的游戏 ".concat(A.toFixed(2), "%"));
};
e.prototype.showTipText = function(A) {
this._labTitle.text = A;
};
r([ i.aware(i.IViewPlugin) ], e.prototype, "_viewPlugin", void 0);
r([ i.listen(E.HotUpdateEvent.Progress) ], e.prototype, "onUpdateProgress", null);
r([ i.listen(E.HotUpdateEvent.Complete) ], e.prototype, "onUpdateComplete", null);
e = r([ i.controller({
name: "GameHotUpdateView",
fguiObject: "HotupdateUI",
module: "common",
fguiPackage: [ "hotupdateBundle" ],
layer: i.ViewLayer.Top
}) ], e);
}(i.mvc.UIController);
})(u || (u = {}));
(function() {
var A;
A || (A = {}), function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
e.prototype.onHotUpdate = function(A) {
this._viewPlugin.openView("GameHotUpdateView", A);
};
r([ i.aware(i.IViewPlugin) ], e.prototype, "_viewPlugin", void 0);
r([ i.listen(E.HotUpdateEvent.StartDownload) ], e.prototype, "onHotUpdate", null);
e = r([ i.module({
name: "GameHotUpdateModule",
autoCreate: !0
}) ], e);
}(i.ModuleBase);
})(u || (u = {}));
(function(A) {
A.appName = "China";
A.appConfig = {
debugLevel: 0,
LoginSite: [ "wss://ly-ws7231.wzchayuan.com" ]
};
A.grayTest = !1;
A.areaConfig = {
lobbyID: 20831,
areaID: 5233,
srsGroupID: 5095,
areaName: "",
gameID: 20830
};
A.gameIds = {
game_lianyun: 20831,
game_lianzha: 20830,
game_k5star: 20833,
game_hpmj: 20834,
game_k7star: 20840,
game_guandan: 20841,
game_anpaigd: 20871
};
})(E.g);
(function(A) {
(function(A) {
var e = function() {
function A() {
this._callbackMap = new Map();
}
A.prototype.genMsgId = function(A, e) {
return A << 16 | e;
};
A.prototype.addCallback = function(A, e, C, E, D, t) {
var B = this;
D = null != D ? D : 0;
var F = this.genMsgId(A, e);
if (this._callbackMap.has(F)) {
var n = this._callbackMap.get(F), o = {
askId: D,
callback: E
};
if (this.checkInArray(n.callback, o)) {
i.DEBUG() && console.error("[MessageDispatcher]addCallback duplicated entry ".concat(A, ", ").concat(e));
return function() {};
}
if (n.lockCount > 0) {
if (this.checkInArray(n.pendingAdd, o)) {
i.DEBUG() && console.error("[MessageDispatcher]addCallback duplicated entry ".concat(A, ", ").concat(e, " in pending"));
return function() {};
}
n.pendingAdd.push(o);
this.removeFromArray(n.pendingRemove, o);
} else n.callback.push(o);
} else {
(n = {
unpack: C,
callback: [],
lockCount: 0,
pendingAdd: [],
pendingRemove: [],
getAskId: t
}).callback.push({
askId: D,
callback: E
});
this._callbackMap.set(F, n);
}
return function() {
B.removeCallback(A, e, E, D);
};
};
A.prototype.dispatch = function(A, e, C, E) {
var D, t, B, F, n, o = this.genMsgId(A, e);
if (this._callbackMap.has(o)) {
var r = this._callbackMap.get(o), l = void 0;
if (i.DEBUG()) l = r.unpack(C); else try {
l = r.unpack(C);
} catch (C) {
console.error("[SocketDispatcher] dispatch ".concat(A, ", ").concat(e, " unpack error"), C);
return;
}
var u = r.getAskId ? r.getAskId(l) : 0;
r.lockCount++;
try {
for (var p = c(r.callback), d = p.next(); !d.done; d = p.next()) {
var f = d.value;
if (u <= 0 || f.askId == u) if (i.DEBUG()) f.callback(A, e, l, E) && this.removeCallback(A, e, f.callback, f.askId); else try {
f.callback(A, e, l, E) && this.removeCallback(A, e, f.callback, f.askId);
} catch (C) {
console.error("[SocketDispatcher] dispatch ".concat(A, ",").concat(e, ",").concat(E, " error"), C);
}
}
} catch (A) {
D = {
error: A
};
} finally {
try {
d && !d.done && (t = p.return) && t.call(p);
} finally {
if (D) throw D.error;
}
}
r.lockCount--;
if (0 === r.lockCount) {
if (r.pendingAdd.length > 0) {
(B = r.callback).push.apply(B, s([], a(r.pendingAdd), !1));
r.pendingAdd.splice(0);
}
if (r.pendingRemove.length > 0) {
try {
for (var h = c(r.pendingRemove), _ = h.next(); !_.done; _ = h.next()) {
var g = _.value;
this.removeFromArray(r.callback, g);
}
} catch (A) {
F = {
error: A
};
} finally {
try {
_ && !_.done && (n = h.return) && n.call(h);
} finally {
if (F) throw F.error;
}
}
r.pendingRemove.splice(0);
0 === r.callback.length && this._callbackMap.delete(o);
}
}
}
};
A.prototype.removeCallback = function(A, e, C, E) {
E = null != E ? E : 0;
var D = this.genMsgId(A, e);
if (this._callbackMap.has(D)) {
var t = this._callbackMap.get(D), B = {
askId: E,
callback: C
};
if (t.lockCount > 0) this.checkInArray(t.callback, B) && !this.checkInArray(t.pendingRemove, B) && t.pendingRemove.push(B); else {
this.removeFromArray(t.callback, B);
0 === t.callback.length && this._callbackMap.delete(D);
}
}
};
A.prototype.removeFromArray = function(A, e) {
for (var C = 0; C < A.length; ) {
var E = A[C];
E.askId === e.askId && E.callback === e.callback ? A.splice(C, 1) : C++;
}
};
A.prototype.checkInArray = function(A, e) {
var C, E;
try {
for (var D = c(A), t = D.next(); !t.done; t = D.next()) {
var B = t.value;
if (B.askId === e.askId && B.callback === e.callback) return !0;
}
} catch (A) {
C = {
error: A
};
} finally {
try {
t && !t.done && (E = D.return) && E.call(D);
} finally {
if (C) throw C.error;
}
}
return !1;
};
return A;
}();
A.MessageDispatcher = e;
})(A.__Network_ || (A.__Network_ = {}));
})(u || (u = {}));
(function(A) {
(function(A) {
var e = function() {
function e(A, e, C) {
void 0 === A && (A = 0);
this._groupid = 0;
this._srsReady = !1;
this._askid = 1;
this._groupid = A;
this._eventDispatcher = e;
this._dispatcher = C;
this.init();
}
e.prototype.init = function() {
var e = this;
this._srsProcess = new A.SRSProcessOld({
send: function(A, C) {
e.send(A, C);
},
srsReady: function() {
e.setSrsReady();
},
srsError: function(A) {
e._srsProcess.stopHearBeat();
e._eventDispatcher.dispatch(E.MultSocketStateChanged, {
state: i.SocketState.ERROR,
data: A,
groupid: e._groupid
});
},
closeSocket: function(A) {
var C;
null === (C = e._socket) || void 0 === C || C.close();
e._srsProcess.stopHearBeat();
e._srsReady = !1;
A ? e.onSocketClosed("心跳超时") : e.onSocketClosed("主动断开");
},
handlerPackage: function(A, C, E) {
i.DEBUG() && console.log("[socket] getMsg, id = ".concat(C));
e._dispatcher.dispatch(A, C, E, e._groupid);
}
});
};
e.prototype.setSrsReady = function() {
this._srsReady = !0;
this._eventDispatcher.dispatch(E.MultSocketStateChanged, {
state: i.SocketState.OPEN,
groupid: this._groupid
});
};
e.prototype.isSocketOpened = function() {
return !(!this._socket || this._socket.getState() != i.SocketState.OPEN);
};
e.prototype.isSocketClosed = function() {
return this._socket.getState() == i.SocketState.CLOSED;
};
e.prototype.connect = function(A) {
i.DEBUG() && console.info("[socket] connect =".concat(A));
null == this._socket && (this._socket = new i.WbSocket(this));
this._srsReady = !1;
this._socket.connect(A);
};
e.prototype.closeConnect = function() {
var A;
if (this._srsReady) {
this._srsProcess.onDisconnect();
this._srsReady = !1;
}
null === (A = this._socket) || void 0 === A || A.close();
};
e.prototype.onSocketOpen = function() {
this._srsProcess.onConnectToSrs();
};
e.prototype.onSocketError = function(A) {
i.DEBUG() && A && console.error("[socket] error, msg = ".concat(A));
this._eventDispatcher.dispatch(E.MultSocketStateChanged, {
state: i.SocketState.ERROR,
errorMsg: A,
groupid: this._groupid
});
};
e.prototype.onSocketClosed = function(A) {
i.DEBUG() && console.info("[socket] onSocketClosed ");
this._srsReady = !1;
this._srsProcess.onDisconnect();
this._eventDispatcher.dispatch(E.MultSocketStateChanged, {
state: i.SocketState.CLOSED,
errorMsg: A,
groupid: this._groupid
});
};
e.prototype.sendWithCallback = function(A, e, C, E, D, t, B, F, n, o, r) {
var a = this;
void 0 === r && (r = 0);
if (this._srsReady) {
console.log("msg=====================", C);
var s = this._askid++, c = this._groupid;
D(C, s);
this._dispatcher.addCallback(t, B, F, function(A, C, E, D) {
if (B != C || A != t || D != c) {
i.DEBUG() && console.error("[SocketDelegateImpl]sendWithCallback send ".concat(e, " handle ").concat(B, " wrong response,groupid=").concat(D, ",_groupid=").concat(c));
return !1;
}
if (i.DEBUG()) n(E, a._groupid); else try {
n(E, a._groupid);
} catch (A) {
console.error("[SocketDelegateImpl]sendWithCallback send ".concat(e, " handle ").concat(B, " exception"), A);
}
return !0;
}, s, o);
var l = E.call(C);
this._srsProcess.sendPacket(e, l, A, r);
} else i.DEBUG() && console.info("[socket] [send] [Failed!!!!!!] --\x3e $msgId=".concat(e, ",appid=").concat(r, ", socket=").concat(this._socket ? "true" : "false"));
};
e.prototype.addHandler = function(A, e, C, E) {
return this._dispatcher.addCallback(A, e, C, E);
};
e.prototype.removeHandler = function(A, e, C) {
this._dispatcher.removeCallback(A, e, C);
};
e.prototype.onSocketReceiveMessage = function(A) {
this.isSocketClosed() ? i.DEBUG() && console.info("[socket] onMessage call but socket had closed") : "string" == typeof A || this._srsProcess.handleSrsData(A);
};
e.prototype.sendPacket = function(A, e, C, E) {
this._srsReady ? this._srsProcess.sendPacket(A, e, C, E) : i.DEBUG() && console.info("[socket] [send] [Failed!!!!!!] --\x3e $msgId=".concat(A, ",appid=").concat(E, ", socket=").concat(this._socket ? "true" : "false"));
};
e.prototype.send = function(A, e) {
void 0 === e && (e = !1);
e && console.log("send isFirst");
this._socket && this._socket.getState() == i.SocketState.OPEN && this._socket.send(A);
};
e.prototype.isSrsReady = function() {
return this._srsReady;
};
return e;
}();
A.MultSocketImpl = e;
})(A.__Network_ || (A.__Network_ = {}));
})(u || (u = {}));
(function(A) {
(function(A) {
(function(e) {
o(C, e);
function C() {
var C = null !== e && e.apply(this, arguments) || this;
C._dispatcher = new A.MessageDispatcher();
C._socketMap = new Map();
return C;
}
C.prototype.init = function() {
this._socketMap.clear();
};
C.prototype.getConnet = function(e) {
void 0 === e && (e = E.Game_Group_ID.DEF_GID);
var C = this._socketMap.get(e);
if (!C) {
C = new A.MultSocketImpl(e, this._eventDispatcher, this._dispatcher);
this._socketMap.set(e, C);
}
return C;
};
C.prototype.clsoeConnet = function(A) {
void 0 === A && (A = E.Game_Group_ID.DEF_GID);
var e = this._socketMap.get(A);
e && e.closeConnect();
};
C.prototype.addHandler = function(A, e, C, E) {
return this._dispatcher.addCallback(A, e, C, E);
};
C.prototype.removeHandler = function(A, e, C) {
this._dispatcher.removeCallback(A, e, C);
};
r([ i.aware(i.IEventDispatcher) ], C.prototype, "_eventDispatcher", void 0);
r([ i.init ], C.prototype, "init", null);
C = r([ i.module({
name: "MultSocketManger",
interface: E.IMultNetworkManager
}) ], C);
})(i.ModuleBase);
})(A.__Network_ || (A.__Network_ = {}));
})(u || (u = {}));
var u, p = 0, d = 2;
(function(e) {
var C = A.CryptoJS || {};
(function(A) {
var e;
(function(A) {
var e = function(A) {
o(e, A);
function e() {
return null !== A && A.apply(this, arguments) || this;
}
r([ E.ProtoDecorator.uint16() ], e.prototype, "sFlag", void 0);
r([ E.ProtoDecorator.uint16() ], e.prototype, "sLen", void 0);
r([ E.ProtoDecorator.uint16() ], e.prototype, "sXYID", void 0);
r([ E.ProtoDecorator.uint16() ], e.prototype, "sProcessID", void 0);
r([ E.ProtoDecorator.uint32() ], e.prototype, "nAppID", void 0);
return e;
}(E.ProtocolBase);
A.Head = e;
var C = i.Long, D = i.protobuf;
A.protobufPackage = "message";
(function(A) {
A[A.MSGID_UNKNOWN = 0] = "MSGID_UNKNOWN";
A[A.MSGID_ENCRYPTVER = 1] = "MSGID_ENCRYPTVER";
A[A.MSGID_CHECKACT = 2] = "MSGID_CHECKACT";
A[A.MSGID_REQKEY = 3] = "MSGID_REQKEY";
A[A.MSGID_RESPKEY = 4] = "MSGID_RESPKEY";
A[A.MSGID_REPORTSRSERR = 9] = "MSGID_REPORTSRSERR";
A[A.MSGID_REQSRSLOAD = 10] = "MSGID_REQSRSLOAD";
A[A.MSGID_RESPSRSLOAD = 11] = "MSGID_RESPSRSLOAD";
A[A.UNRECOGNIZED = -1] = "UNRECOGNIZED";
})(A.MSGID || (A.MSGID = {}));
A.EncryptVer = {
encode: function(A, e) {
void 0 === e && (e = D.Writer.create());
0 !== A.version && e.uint32(8).uint32(A.version);
return e;
},
decode: function(A, e) {
for (var C = A instanceof D.Reader ? A : new D.Reader(A), E = void 0 === e ? C.len : C.pos + e, t = {
version: 0
}; C.pos < E; ) {
var B = C.uint32();
switch (B >>> 3) {
case 1:
t.version = C.uint32();
break;

default:
C.skipType(7 & B);
}
}
return t;
}
};
A.CheckAct = {
encode: function(A, e) {
void 0 === e && (e = D.Writer.create());
return e;
},
decode: function(A, e) {
for (var C = A instanceof D.Reader ? A : new D.Reader(A), E = void 0 === e ? C.len : C.pos + e; C.pos < E; ) {
var t = C.uint32();
C.skipType(7 & t);
}
return {};
}
};
A.HeartBeat = {
encode: function(A, e) {
void 0 === e && (e = D.Writer.create());
A.client_time.isZero() || e.uint32(8).int64(A.client_time);
!0 === A.needresp && e.uint32(16).bool(A.needresp);
return e;
},
decode: function(A, e) {
for (var E = A instanceof D.Reader ? A : new D.Reader(A), t = void 0 === e ? E.len : E.pos + e, B = {
client_time: C.ZERO,
needresp: !1
}; E.pos < t; ) {
var F = E.uint32();
switch (F >>> 3) {
case 1:
B.client_time = E.int64();
break;

case 2:
B.needresp = E.bool();
break;

default:
E.skipType(7 & F);
}
}
return B;
}
};
A.ReqKey = {
encode: function(A, e) {
void 0 === e && (e = D.Writer.create());
return e;
},
decode: function(A, e) {
for (var C = A instanceof D.Reader ? A : new D.Reader(A), E = void 0 === e ? C.len : C.pos + e; C.pos < E; ) {
var t = C.uint32();
C.skipType(7 & t);
}
return {};
}
};
A.RespKey = {
encode: function(A, e) {
void 0 === e && (e = D.Writer.create());
A.aeskey.length > 0 && e.uint32(10).bytes(A.aeskey);
return e;
},
decode: function(A, e) {
for (var C = A instanceof D.Reader ? A : new D.Reader(A), E = void 0 === e ? C.len : C.pos + e, t = {
aeskey: new Uint8Array()
}; C.pos < E; ) {
var B = C.uint32();
switch (B >>> 3) {
case 1:
t.aeskey = C.bytes();
break;

default:
C.skipType(7 & B);
}
}
return t;
}
};
A.ReportSRSErr = {
encode: function(A, e) {
void 0 === e && (e = D.Writer.create());
0 !== A.flag && e.uint32(8).uint32(A.flag);
0 !== A.errcode && e.uint32(16).uint32(A.errcode);
0 !== A.xyid && e.uint32(24).uint32(A.xyid);
0 !== A.processid && e.uint32(32).uint32(A.processid);
0 !== A.appid && e.uint32(40).uint32(A.appid);
return e;
},
decode: function(A, e) {
for (var C = A instanceof D.Reader ? A : new D.Reader(A), E = void 0 === e ? C.len : C.pos + e, t = {
flag: 0,
errcode: 0,
xyid: 0,
processid: 0,
appid: 0
}; C.pos < E; ) {
var B = C.uint32();
switch (B >>> 3) {
case 1:
t.flag = C.uint32();
break;

case 2:
t.errcode = C.uint32();
break;

case 3:
t.xyid = C.uint32();
break;

case 4:
t.processid = C.uint32();
break;

case 5:
t.appid = C.uint32();
break;

default:
C.skipType(7 & B);
}
}
return t;
}
};
A.ReqSRSLoad = {
encode: function(A, e) {
void 0 === e && (e = D.Writer.create());
0 !== A.appid && e.uint32(8).uint32(A.appid);
return e;
},
decode: function(A, e) {
for (var C = A instanceof D.Reader ? A : new D.Reader(A), E = void 0 === e ? C.len : C.pos + e, t = {
appid: 0
}; C.pos < E; ) {
var B = C.uint32();
switch (B >>> 3) {
case 1:
t.appid = C.uint32();
break;

default:
C.skipType(7 & B);
}
}
return t;
}
};
A.RespSRSLoad = {
encode: function(e, C) {
var E, t;
void 0 === C && (C = D.Writer.create());
try {
for (var B = c(e.srsloads), F = B.next(); !F.done; F = B.next()) {
var n = F.value;
A.RespSRSLoad_SRSLoad.encode(n, C.uint32(10).fork()).ldelim();
}
} catch (A) {
E = {
error: A
};
} finally {
try {
F && !F.done && (t = B.return) && t.call(B);
} finally {
if (E) throw E.error;
}
}
return C;
},
decode: function(e, C) {
for (var E = e instanceof D.Reader ? e : new D.Reader(e), t = void 0 === C ? E.len : E.pos + C, B = {
srsloads: []
}; E.pos < t; ) {
var F = E.uint32();
switch (F >>> 3) {
case 1:
B.srsloads.push(A.RespSRSLoad_SRSLoad.decode(E, E.uint32()));
break;

default:
E.skipType(7 & F);
}
}
return B;
}
};
A.RespSRSLoad_SRSLoad = {
encode: function(A, e) {
void 0 === e && (e = D.Writer.create());
0 !== A.appid && e.uint32(8).uint32(A.appid);
0 !== A.load && e.uint32(16).uint32(A.load);
return e;
},
decode: function(A, e) {
for (var C = A instanceof D.Reader ? A : new D.Reader(A), E = void 0 === e ? C.len : C.pos + e, t = {
appid: 0,
load: 0
}; C.pos < E; ) {
var B = C.uint32();
switch (B >>> 3) {
case 1:
t.appid = C.uint32();
break;

case 2:
t.load = C.uint32();
break;

default:
C.skipType(7 & B);
}
}
return t;
}
};
})(e || (e = {}));
var D = [ 175, 226, 26, 12, 22, 115, 84, 19, 253, 104, 221, 143, 160, 183, 193, 87, 38, 166, 144, 255, 205, 179, 84, 97, 16, 7, 213, 126, 219, 30, 76, 233 ], t = [ 21, 255, 1, 0, 52, 171, 76, 211, 85, 254, 161, 34, 8, 79, 19, 7 ], B = function() {
function A() {
var A = new Uint8Array(D), e = new Uint8Array(t);
this.keyWA = C.enc.u8array.parse(A);
this.ivWA = C.enc.u8array.parse(e);
this.oriKeyWA = this.keyWA;
this.oriIvWA = this.ivWA;
}
A.prototype.recover = function() {
this.keyWA = this.oriKeyWA;
this.ivWA = this.oriIvWA;
};
A.prototype.setKey = function(A) {
this.keyWA = A;
};
A.prototype.decryptU8arry = function(A) {
var e = A, E = this.keyWA, D = this.ivWA, t = C.enc.u8array.parse(e).toString(C.enc.Base64), B = C.AES.decrypt(t, E, {
iv: D,
mode: C.mode.CFB,
padding: C.pad.NoPadding
});
return C.enc.u8array.stringify(B);
};
A.prototype.packData = function(A, e, C, E) {
var D, t = (D = e.pack ? e.pack() : e).byteLength, B = this.packHeadData(A, t, C, E), F = new Uint8Array(D);
F = this.encryptU8arry(F);
var n = new Uint8Array(B), i = new Uint8Array(n.length + F.length);
i.set(n);
i.set(F, n.length);
return i;
};
A.prototype.encryptU8arry = function(A) {
var e = A, E = this.keyWA, D = this.ivWA, t = C.enc.u8array.parse(e), B = C.AES.encrypt(t, E, {
iv: D,
mode: C.mode.CFB,
padding: C.pad.NoPadding
});
return C.enc.u8array.stringify(B.ciphertext);
};
A.prototype.packHeadData = function(A, C, E, D) {
E = E || 0;
D = D || 0;
A = +A;
var t = new e.Head();
t.sFlag = 32769;
t.sLen = C;
t.sXYID = A;
t.sProcessID = E;
t.nAppID = D;
return t.pack().buffer;
};
A.prototype.unpackData = function(A) {
var C = new Uint8Array(A), E = e.Head.unpack(C), D = E.sXYID, t = E.sLen, B = +E.sProcessID, F = +E.nAppID, n = A.slice(12), i = new Uint8Array(n);
return {
cmd: D,
data: 1 & E.sFlag ? this.decryptU8arry(i) : i,
len: t,
processID: B,
appID: F
};
};
return A;
}(), F = function() {
function A(A) {
this._heartBeatHandler = -1;
this._heartBeatIMHandler = -1;
this._netDelegate = A;
this._packager = new B();
var C = e.CheckAct.encode({}).finish();
this._headBeatData = this._packager.packData(d, C, p, 0);
}
A.prototype.onConnectToSrs = function() {
this._packager.recover();
this.sendVersion();
};
A.prototype.onDisconnect = function() {
this._packager.recover();
};
A.prototype.handleSrsData = function(A) {
var e = this._packager.unpackData(A);
this.onReceivePacket(e.processID, e.cmd, e.data);
};
A.prototype.sendPacket = function(A, e, C, E, D) {
void 0 === D && (D = !1);
E = E || 0;
C = C || 0;
var t = this._packager.packData(A, e, C, E);
this._netDelegate.send(t, D);
};
A.prototype.onReceivePacket = function(A, e, C) {
if (0 == A) switch (e) {
case 1:
this.onRespEncryptVer(C);
break;

case 4:
this.onRespKey(C);
break;

case d:
this.onRespCheckAct();
break;

case 9:
this.onReportSRSError(C);
break;

default:
this._netDelegate.handlerPackage(A, e, C);
} else this._netDelegate.handlerPackage(A, e, C);
};
A.prototype.sendVersion = function() {
var A = e.EncryptVer.encode({
version: 1
}).finish();
this.sendPacket(1, A, p, 0, !0);
};
A.prototype.onRespEncryptVer = function(A) {
1 == e.EncryptVer.decode(A).version ? this.reqKey() : console.warn("[socket] onRespEncryptVer failed");
};
A.prototype.reqKey = function() {
this.sendPacket(3, e.ReqKey.encode({}).finish(), p, 0, !0);
};
A.prototype.onRespKey = function(A) {
var E = e.RespKey.decode(A);
this._packager.setKey(C.enc.u8array.parse(E.aeskey));
this._netDelegate.srsReady();
this.startHeartBeat();
};
A.prototype.startHeartBeat = function() {
var A = this;
this._linkTimes = 0;
-1 == this._heartBeatHandler && (this._heartBeatHandler = setInterval(function() {
A.sendHeartBeat();
}, 3e4));
};
A.prototype.sendHeartBeat = function() {
this._netDelegate.send(this._headBeatData);
};
A.prototype.stopHearBeat = function() {
if (-1 != this._heartBeatHandler) {
clearInterval(this._heartBeatHandler);
this._heartBeatHandler = -1;
}
};
A.prototype.onRespCheckAct = function() {
this._linkTimes = 0;
};
A.prototype.onReportSRSError = function(A) {
var C = e.ReportSRSErr.decode(A);
this._netDelegate.srsError(C);
};
return A;
}();
A.SRSProcessOld = F;
})(e.__Network_ || (e.__Network_ = {}));
})(u || (u = {}));
(function(A) {
(function(A) {
(function(e) {
o(C, e);
function C() {
var C = null !== e && e.apply(this, arguments) || this;
C._srsReady = !1;
C._dispatcher = new A.MessageDispatcher();
C._askid = 1;
return C;
}
C.prototype.init = function() {
var e = this;
this._srsProcess = new A.SRSProcessOld({
send: function(A, C) {
e.send(A, C);
},
srsReady: function() {
e.setSrsReady();
},
srsError: function(A) {
e._srsProcess.stopHearBeat();
e._eventDispatcher.dispatch(E.SocketStateChanged, {
state: i.SocketState.ERROR,
data: A
});
},
closeSocket: function(A) {
var C;
null === (C = e._socket) || void 0 === C || C.close();
e._srsProcess.stopHearBeat();
e._srsReady = !1;
A ? e.onSocketClosed("心跳超时") : e.onSocketClosed("主动断开");
},
handlerPackage: function(A, C, E) {
i.DEBUG() && console.log("[socket] getMsg, id = ".concat(C));
e._dispatcher.dispatch(A, C, E);
}
});
};
C.prototype.setSrsReady = function() {
this._srsReady = !0;
this._eventDispatcher.dispatch(E.SocketStateChanged, {
state: i.SocketState.OPEN
});
};
C.prototype.isSocketOpened = function() {
return !(!this._socket || this._socket.getState() != i.SocketState.OPEN);
};
C.prototype.isSocketClosed = function() {
return this._socket.getState() == i.SocketState.CLOSED;
};
C.prototype.connect = function(A) {
i.DEBUG() && console.log("[socket] connect =".concat(A));
null == this._socket && (this._socket = new i.WbSocket(this));
this._srsReady = !1;
this._socket.connect(A);
};
C.prototype.closeConnect = function() {
var A;
if (this._srsReady) {
this._srsProcess.onDisconnect();
this._srsReady = !1;
}
null === (A = this._socket) || void 0 === A || A.close();
};
C.prototype.onSocketOpen = function() {
this._srsProcess.onConnectToSrs();
};
C.prototype.onSocketError = function(A) {
i.DEBUG() && A && console.error("[socket] error, msg = ".concat(A));
this._eventDispatcher.dispatch(E.SocketStateChanged, {
state: i.SocketState.ERROR,
errorMsg: A
});
};
C.prototype.onSocketClosed = function(A) {
i.DEBUG() && console.log("[socket] onSocketClosed ");
this._srsReady = !1;
this._srsProcess.onDisconnect();
this._eventDispatcher.dispatch(E.SocketStateChanged, {
state: i.SocketState.CLOSED,
errorMsg: A
});
};
C.prototype.sendWithCallback = function(A, e, C, E, D, t, B, F, n, o, r) {
void 0 === r && (r = 0);
if (this._srsReady) {
var a = this._askid++;
D(C, a);
this._dispatcher.addCallback(t, B, F, function(A, C, E) {
if (B != C || A != t) {
i.DEBUG() && console.error("[SocketDelegateImpl]sendWithCallback send ".concat(e, " handle ").concat(B, " wrong response"));
return !1;
}
if (i.DEBUG()) n(E); else try {
n(E);
} catch (A) {
console.error("[SocketDelegateImpl]sendWithCallback send ".concat(e, " handle ").concat(B, " exception"), A);
}
return !0;
}, a, o);
var s = E.call(C);
this._srsProcess.sendPacket(e, s, A, r);
} else i.DEBUG() && console.log("[socket] [send] [Failed!!!!!!] --\x3e $msgId=".concat(e, ",appid=").concat(r, ", socket=").concat(this._socket ? "true" : "false"));
};
C.prototype.addHandler = function(A, e, C, E) {
return this._dispatcher.addCallback(A, e, C, E);
};
C.prototype.removeHandler = function(A, e, C) {
this._dispatcher.removeCallback(A, e, C);
};
C.prototype.onSocketReceiveMessage = function(A) {
this.isSocketClosed() ? i.DEBUG() && console.log("[socket] onMessage call but socket had closed") : "string" == typeof A || this._srsProcess.handleSrsData(A);
};
C.prototype.sendPacket = function(A, e, C, E) {
this._srsReady ? this._srsProcess.sendPacket(A, e, C, E) : i.DEBUG() && console.log("[socket] [send] [Failed!!!!!!] --\x3e $msgId=".concat(A, ",appid=").concat(E, ", socket=").concat(this._socket ? "true" : "false"));
};
C.prototype.send = function(A, e) {
void 0 === e && (e = "def");
console.log(e);
this._socket && this._socket.getState() == i.SocketState.OPEN && this._socket.send(A);
};
Object.defineProperty(C.prototype, "isSrsReady", {
get: function() {
return this._srsReady;
},
enumerable: !1,
configurable: !0
});
r([ i.aware(i.IEventDispatcher) ], C.prototype, "_eventDispatcher", void 0);
r([ i.init ], C.prototype, "init", null);
C = r([ i.module({
name: "SocketDelegate",
interface: E.INetwork
}) ], C);
})(i.ModuleBase);
})(A.__Network_ || (A.__Network_ = {}));
})(u || (u = {}));
(function(A) {
A.encode = function(A, e) {
0 !== A.err_code && e.uint32(8).int32(A.err_code);
"" !== A.err_reason && e.uint32(18).string(A.err_reason);
0 !== A.ask_id && e.uint32(24).int32(A.ask_id);
return e;
};
A.decode = function(A, e) {
for (var C = A, D = void 0 === e ? C.len : C.pos + e, t = {
err_code: 0,
err_reason: "",
ask_id: 0
}; C.pos < D; ) {
var B = C.uint32();
switch (B >>> 3) {
case 1:
t.err_code = C.int32();
break;

case 2:
t.err_reason = C.string();
break;

case 3:
t.ask_id = C.int32();
break;

default:
C.skipType(7 & B);
}
}
E._lastCommonResp = t;
return t;
};
})(E.CommonResp);
(function() {
var e;
e || (e = {}), function(e) {
o(C, e);
function C() {
var A = null !== e && e.apply(this, arguments) || this;
A.switchSceneData = null;
A.lobbyName = E.SCENENAME.LOBBY;
A.deflobbyName = "lobby";
return A;
}
C.prototype.getSwitchSceneData = function() {
if (this.switchSceneData) {
var A = this.switchSceneData;
this.switchSceneData = null;
return A;
}
return null;
};
C.prototype.switchScene = function(e, C) {
e.indexOf(this.deflobbyName) >= 0 && (this.lobbyName = e);
if (i.App.inst.hasContext(this.lobbyName) || e == this.lobbyName) {
this.backToLobby();
A.common = E;
i.App.inst.prepareContextWithProcessCallback(e, C, e);
this.dispatch("KW_SwitchScene", e);
}
};
C.prototype.enterLobby = function(A) {
this.switchSceneData = A;
if (i.App.inst.hasContext(this.lobbyName)) {
this.backToLobby();
i.App.inst.prepareContextWithProcessCallback(this.lobbyName, null, this.lobbyName);
} else i.App.inst.prepareContext(this.lobbyName);
this.dispatch("KW_SwitchScene", this.lobbyName);
};
C.prototype.backToLobby = function() {
for (;i.App.inst.context.name != this.lobbyName && i.App.inst.hasContext(this.lobbyName); ) {
var A = i.App.inst.context.name;
i.App.inst.popContext();
this.getPlugin(n.IAssetPlugin).unLoadBundle(A);
}
};
C.prototype.isInLobby = function() {
return i.App.inst.context.name == this.lobbyName;
};
C.prototype.getLobbyOrGame = function() {
return this.isInLobby() ? "大厅" : "游戏内";
};
C.prototype.onJoinGame = function(A) {
this.isInLobby() && this.JoinGame(A);
};
C.prototype.JoinGame = function(A) {
var e = this;
this.getImpl(i.IViewPlugin).closeAllView();
this.switchScene(A, {
onStartDownload: function(A) {
e.dispatch(E.HotUpdateEvent.StartDownload, A);
},
onProgress: function(A) {
e.dispatch(E.HotUpdateEvent.Progress, A);
},
onComplete: function(C) {
e.dispatch(E.HotUpdateEvent.Complete, C);
if (!C) {
e.getImpl(E.IWaiting).closeAll();
e.getImpl(E.ICommonDlgs).showCommonDlg("下载资源失败, 点击重试", 1, function() {
e.JoinGame(A);
});
}
}
});
};
r([ i.listen("EventJoinGame") ], C.prototype, "onJoinGame", null);
C = r([ i.module({
name: "SceneSwitchModule",
interface: E.ISceneSwitch
}) ], C);
}(i.ModuleBase);
})(u || (u = {}));
(function(A) {
(function(A) {
var e = function() {};
A.IWaitingUI = e;
(function(A) {
o(C, A);
function C() {
var e = null !== A && A.apply(this, arguments) || this;
e._nextId = 1;
e._curName = null;
e._waitingTasks = new Map();
return e;
}
D = C;
C.prototype.init = function() {
console.log("init WaitingImpl");
};
C.prototype.destroy = function() {
console.log("destroy WaitingImpl");
};
C.prototype.nextId = function() {
var A = D.ID_PREFIX + this._nextId;
this._nextId++;
this._curName = A;
return A;
};
C.prototype.addTask = function(A) {
var e = this.nextId();
console.log("adding task id = ".concat(e));
this._waitingTasks.set(e, A);
this.updateProcess();
return e;
};
C.prototype.onProgress = function(A, e) {
if (this._waitingTasks.has(A)) {
this._waitingTasks.get(A).progress = e;
this.updateProcess();
}
};
C.prototype.onComplete = function(A) {
var e, C;
console.log("task on complete id = ".concat(A));
if (this._waitingTasks.has(A)) {
this._waitingTasks.delete(A);
this._curName = null;
try {
for (var E = c(this._waitingTasks), D = E.next(); !D.done; D = E.next()) {
var t = D.value;
this._curName = t[0];
break;
}
} catch (A) {
e = {
error: A
};
} finally {
try {
D && !D.done && (C = E.return) && C.call(E);
} finally {
if (e) throw e.error;
}
}
this.updateProcess();
}
};
C.prototype.updateProcess = function() {
if (this._curName && this._waitingTasks.has(this._curName)) {
var A = this._waitingTasks.get(this._curName);
this.getImpl(e).show(!0, A.tip, A.showBack, A.time, A.progress);
} else this.getImpl(e).show(!1);
};
C.prototype.closeAll = function() {
console.log("closing all");
this._waitingTasks.clear();
this._curName = null;
this.updateProcess();
};
C.prototype.timeout = function() {
console.log(" Waiting timeout Tasks clear");
this._waitingTasks.clear();
this._curName = null;
};
C.prototype.setTask = function(A) {
var e = A.name;
console.log("setTask task id = ".concat(e));
this._curName = e;
if (this._waitingTasks.has(e)) {
var C = this._waitingTasks.get(e);
C.tip = A.tip || "";
C.time = A.time;
C.showBack = A.showBack;
} else this._waitingTasks.set(e, A);
this.updateProcess();
return e;
};
var D;
C.ID_PREFIX = "Waiting_";
r([ i.init ], C.prototype, "init", null);
r([ i.destroy ], C.prototype, "destroy", null);
C = D = r([ i.module({
name: "WaitingImpl",
interface: E.IWaiting
}) ], C);
})(i.ModuleBase);
})(A.__Imply_ || (A.__Imply_ = {}));
})(u || (u = {}));
(function(A) {
var e;
e || (e = {}), function(e) {
o(C, e);
function C() {
var A = null !== e && e.apply(this, arguments) || this;
A._loaded = !1;
A._isVisible = !1;
A._curTipStr = "";
A._showBack = !0;
A.hide = function() {
var e;
null === (e = A.getImpl(E.IWaiting)) || void 0 === e || e.closeAll();
};
return A;
}
D = C;
Object.defineProperty(C.prototype, "fguiObject", {
get: function() {
return this._fguiObject;
},
enumerable: !1,
configurable: !0
});
C.prototype.init = function() {
var e = this;
if (!this.fguiObject) {
this._isVisible = !1;
this.getPlugin(i.IAssetPlugin).loadFguiAsync("common", [ "_Common" ], "LoadingView").then(function(C) {
if (C) {
var E = i.FGUI.getChild(i.App.inst.root, "LoadingRoot");
if (null != E) {
i.FGUI.setPosition(C, 0, 0, 0);
i.addBeanComponent(C.node, A.__Imply_.IWaitingUI);
e.node = C.node;
e.view = i.FGUI.getChild(C, "KW_TextTipStr");
e.backGround = i.FGUI.getChild(C, "KW_ImgBackGround");
e.aniLoading = i.FGUI.getChild(C, "KW_EffAniLoding");
i.FGUI.addChild(E, C);
e._fguiObject = C;
e.initUI();
}
}
}).catch(function() {
console.log("load LoadingView fail:");
});
}
};
C.prototype.initUI = function() {
this.fguiObject.visible = this._isVisible;
this.view.text = this._curTipStr;
this.backGround.visible = this._showBack;
};
C.prototype.onDestroy = function() {
this.fguiObject && this.fguiObject.dispose();
};
C.prototype.show = function(A, e, C, E, t) {
void 0 === e && (e = "");
void 0 === C && (C = !0);
void 0 === E && (E = 0);
if (this.fguiObject) {
this.fguiObject.visible = A;
A && (this.view.text = t ? "".concat(e, "(").concat(Math.floor(100 * t), "%)") : e);
this.backGround.visible = C;
}
if (A) {
this._curTipStr = e;
this._showBack = C;
this.unschedule(this.hide);
this.scheduleOnce(this.hide, E || D.MaxTime);
this.aniLoading && i.sp.onSpineLoaded(this.aniLoading, function(A) {
A.premultipliedAlpha = !1;
A.loop = !0;
"animation" != A.animation && (A.animation = "animation");
});
} else {
this._curTipStr = "";
this.unschedule(this.hide);
}
this._isVisible = A;
console.log("WaitingUIshow:" + A + "  " + Date.now());
};
var D;
C.MaxTime = 10;
r([ i.init ], C.prototype, "init", null);
r([ i.destroy ], C.prototype, "onDestroy", null);
C = D = r([ i.bean(A.__Imply_.IWaitingUI) ], C);
}(i.Component);
})(u || (u = {}));
var f = {
gb18030: [ "00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "0A", "0B", "0C", "0D", "0E", "0F", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "1A", "1B", "1C", "1D", "1E", "1F", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "2A", "2B", "2C", "2D", "2E", "2F", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "3A", "3B", "3C", "3D", "3E", "3F", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "4A", "4B", "4C", "4D", "4E", "4F", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "5A", "5B", "5C", "5D", "5E", "5F", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "6A", "6B", "6C", "6D", "6E", "6F", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "7A", "7B", "7C", "7D", "7E", "7F", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1E8", 0, 0, "A1EC", "A1A7", 0, 0, 0, 0, 0, 0, 0, "A1E3", "A1C0", 0, 0, 0, 0, 0, "A1A4", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1C1", 0, 0, 0, 0, 0, 0, 0, 0, "A8A4", "A8A2", 0, 0, 0, 0, 0, 0, "A8A8", "A8A6", "A8BA", 0, "A8AC", "A8AA", 0, 0, 0, 0, "A8B0", "A8AE", 0, 0, 0, "A1C2", 0, "A8B4", "A8B2", 0, "A8B9", 0, 0, 0, 0, "A8A1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A8A5", 0, 0, 0, 0, 0, 0, 0, "A8A7", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A8A9", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A8BD", 0, 0, 0, "A8BE", 0, 0, 0, 0, "A8AD", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A8B1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A8A3", 0, "A8AB", 0, "A8AF", 0, "A8B3", 0, "A8B5", 0, "A8B6", 0, "A8B7", 0, "A8B8", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A8BF", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A8BB", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A8C0", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1A6", 0, "A1A5", "A840", "A841", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A842", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A6A1", "A6A2", "A6A3", "A6A4", "A6A5", "A6A6", "A6A7", "A6A8", "A6A9", "A6AA", "A6AB", "A6AC", "A6AD", "A6AE", "A6AF", "A6B0", "A6B1", 0, "A6B2", "A6B3", "A6B4", "A6B5", "A6B6", "A6B7", "A6B8", 0, 0, 0, 0, 0, 0, 0, "A6C1", "A6C2", "A6C3", "A6C4", "A6C5", "A6C6", "A6C7", "A6C8", "A6C9", "A6CA", "A6CB", "A6CC", "A6CD", "A6CE", "A6CF", "A6D0", "A6D1", 0, "A6D2", "A6D3", "A6D4", "A6D5", "A6D6", "A6D7", "A6D8", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A7A7", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A7A1", "A7A2", "A7A3", "A7A4", "A7A5", "A7A6", "A7A8", "A7A9", "A7AA", "A7AB", "A7AC", "A7AD", "A7AE", "A7AF", "A7B0", "A7B1", "A7B2", "A7B3", "A7B4", "A7B5", "A7B6", "A7B7", "A7B8", "A7B9", "A7BA", "A7BB", "A7BC", "A7BD", "A7BE", "A7BF", "A7C0", "A7C1", "A7D1", "A7D2", "A7D3", "A7D4", "A7D5", "A7D6", "A7D8", "A7D9", "A7DA", "A7DB", "A7DC", "A7DD", "A7DE", "A7DF", "A7E0", "A7E1", "A7E2", "A7E3", "A7E4", "A7E5", "A7E6", "A7E7", "A7E8", "A7E9", "A7EA", "A7EB", "A7EC", "A7ED", "A7EE", "A7EF", "A7F0", "A7F1", 0, "A7D7", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A95C", 0, 0, "A843", "A1AA", "A844", "A1AC", 0, "A1AE", "A1AF", 0, 0, "A1B0", "A1B1", 0, 0, 0, 0, 0, 0, 0, "A845", "A1AD", 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1EB", 0, "A1E4", "A1E5", 0, "A846", 0, 0, 0, 0, 0, "A1F9", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A2E3", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1E6", 0, "A847", 0, 0, 0, "A848", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1ED", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A959", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A2F1", "A2F2", "A2F3", "A2F4", "A2F5", "A2F6", "A2F7", "A2F8", "A2F9", "A2FA", "A2FB", "A2FC", 0, 0, 0, 0, "A2A1", "A2A2", "A2A3", "A2A4", "A2A5", "A2A6", "A2A7", "A2A8", "A2A9", "A2AA", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1FB", "A1FC", "A1FA", "A1FD", 0, 0, "A849", "A84A", "A84B", "A84C", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1CA", 0, 0, 0, 0, 0, 0, "A1C7", 0, "A1C6", 0, 0, 0, "A84D", 0, 0, 0, 0, "A1CC", 0, 0, "A1D8", "A1DE", "A84E", "A1CF", 0, 0, "A84F", 0, "A1CE", 0, "A1C4", "A1C5", "A1C9", "A1C8", "A1D2", 0, 0, "A1D3", 0, 0, 0, 0, 0, "A1E0", "A1DF", "A1C3", "A1CB", 0, 0, 0, 0, 0, "A1D7", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1D6", 0, 0, 0, "A1D5", 0, 0, 0, 0, 0, "A850", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1D9", "A1D4", 0, 0, "A1DC", "A1DD", "A851", "A852", 0, 0, 0, 0, 0, 0, "A1DA", "A1DB", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A892", 0, 0, 0, "A1D1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1CD", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A853", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1D0", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A2D9", "A2DA", "A2DB", "A2DC", "A2DD", "A2DE", "A2DF", "A2E0", "A2E1", "A2E2", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A2C5", "A2C6", "A2C7", "A2C8", "A2C9", "A2CA", "A2CB", "A2CC", "A2CD", "A2CE", "A2CF", "A2D0", "A2D1", "A2D2", "A2D3", "A2D4", "A2D5", "A2D6", "A2D7", "A2D8", "A2B1", "A2B2", "A2B3", "A2B4", "A2B5", "A2B6", "A2B7", "A2B8", "A2B9", "A2BA", "A2BB", "A2BC", "A2BD", "A2BE", "A2BF", "A2C0", "A2C1", "A2C2", "A2C3", "A2C4", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A9A4", "A9A5", "A9A6", "A9A7", "A9A8", "A9A9", "A9AA", "A9AB", "A9AC", "A9AD", "A9AE", "A9AF", "A9B0", "A9B1", "A9B2", "A9B3", "A9B4", "A9B5", "A9B6", "A9B7", "A9B8", "A9B9", "A9BA", "A9BB", "A9BC", "A9BD", "A9BE", "A9BF", "A9C0", "A9C1", "A9C2", "A9C3", "A9C4", "A9C5", "A9C6", "A9C7", "A9C8", "A9C9", "A9CA", "A9CB", "A9CC", "A9CD", "A9CE", "A9CF", "A9D0", "A9D1", "A9D2", "A9D3", "A9D4", "A9D5", "A9D6", "A9D7", "A9D8", "A9D9", "A9DA", "A9DB", "A9DC", "A9DD", "A9DE", "A9DF", "A9E0", "A9E1", "A9E2", "A9E3", "A9E4", "A9E5", "A9E6", "A9E7", "A9E8", "A9E9", "A9EA", "A9EB", "A9EC", "A9ED", "A9EE", "A9EF", 0, 0, 0, 0, "A854", "A855", "A856", "A857", "A858", "A859", "A85A", "A85B", "A85C", "A85D", "A85E", "A85F", "A860", "A861", "A862", "A863", "A864", "A865", "A866", "A867", "A868", "A869", "A86A", "A86B", "A86C", "A86D", "A86E", "A86F", "A870", "A871", "A872", "A873", "A874", "A875", "A876", "A877", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A878", "A879", "A87A", "A87B", "A87C", "A87D", "A87E", "A880", "A881", "A882", "A883", "A884", "A885", "A886", "A887", 0, 0, 0, "A888", "A889", "A88A", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1F6", "A1F5", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1F8", "A1F7", 0, 0, 0, 0, 0, 0, 0, 0, "A88B", "A88C", 0, 0, 0, 0, 0, 0, 0, 0, "A1F4", "A1F3", 0, 0, 0, "A1F0", 0, 0, "A1F2", "A1F1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A88D", "A88E", "A88F", "A890", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1EF", "A1EE", 0, 0, "A891", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1E2", 0, "A1E1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE50", 0, 0, "FE54", 0, 0, 0, "FE57", 0, 0, "FE58", "FE5D", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE5E", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE6B", 0, 0, "FE6E", 0, 0, 0, "FE71", 0, 0, 0, 0, "FE73", 0, 0, "FE74", "FE75", 0, 0, 0, "FE79", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE84", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A98A", "A98B", "A98C", "A98D", "A98E", "A98F", "A990", "A991", "A992", "A993", "A994", "A995", 0, 0, 0, 0, "A1A1", "A1A2", "A1A3", "A1A8", 0, "A1A9", "A965", "A996", "A1B4", "A1B5", "A1B6", "A1B7", "A1B8", "A1B9", "A1BA", "A1BB", "A1BE", "A1BF", "A893", "A1FE", "A1B2", "A1B3", "A1BC", "A1BD", 0, 0, 0, 0, 0, "A894", "A895", 0, 0, "A940", "A941", "A942", "A943", "A944", "A945", "A946", "A947", "A948", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A989", 0, 0, "A4A1", "A4A2", "A4A3", "A4A4", "A4A5", "A4A6", "A4A7", "A4A8", "A4A9", "A4AA", "A4AB", "A4AC", "A4AD", "A4AE", "A4AF", "A4B0", "A4B1", "A4B2", "A4B3", "A4B4", "A4B5", "A4B6", "A4B7", "A4B8", "A4B9", "A4BA", "A4BB", "A4BC", "A4BD", "A4BE", "A4BF", "A4C0", "A4C1", "A4C2", "A4C3", "A4C4", "A4C5", "A4C6", "A4C7", "A4C8", "A4C9", "A4CA", "A4CB", "A4CC", "A4CD", "A4CE", "A4CF", "A4D0", "A4D1", "A4D2", "A4D3", "A4D4", "A4D5", "A4D6", "A4D7", "A4D8", "A4D9", "A4DA", "A4DB", "A4DC", "A4DD", "A4DE", "A4DF", "A4E0", "A4E1", "A4E2", "A4E3", "A4E4", "A4E5", "A4E6", "A4E7", "A4E8", "A4E9", "A4EA", "A4EB", "A4EC", "A4ED", "A4EE", "A4EF", "A4F0", "A4F1", "A4F2", "A4F3", 0, 0, 0, 0, 0, 0, 0, "A961", "A962", "A966", "A967", 0, 0, "A5A1", "A5A2", "A5A3", "A5A4", "A5A5", "A5A6", "A5A7", "A5A8", "A5A9", "A5AA", "A5AB", "A5AC", "A5AD", "A5AE", "A5AF", "A5B0", "A5B1", "A5B2", "A5B3", "A5B4", "A5B5", "A5B6", "A5B7", "A5B8", "A5B9", "A5BA", "A5BB", "A5BC", "A5BD", "A5BE", "A5BF", "A5C0", "A5C1", "A5C2", "A5C3", "A5C4", "A5C5", "A5C6", "A5C7", "A5C8", "A5C9", "A5CA", "A5CB", "A5CC", "A5CD", "A5CE", "A5CF", "A5D0", "A5D1", "A5D2", "A5D3", "A5D4", "A5D5", "A5D6", "A5D7", "A5D8", "A5D9", "A5DA", "A5DB", "A5DC", "A5DD", "A5DE", "A5DF", "A5E0", "A5E1", "A5E2", "A5E3", "A5E4", "A5E5", "A5E6", "A5E7", "A5E8", "A5E9", "A5EA", "A5EB", "A5EC", "A5ED", "A5EE", "A5EF", "A5F0", "A5F1", "A5F2", "A5F3", "A5F4", "A5F5", "A5F6", 0, 0, 0, 0, 0, "A960", "A963", "A964", 0, 0, 0, 0, 0, 0, "A8C5", "A8C6", "A8C7", "A8C8", "A8C9", "A8CA", "A8CB", "A8CC", "A8CD", "A8CE", "A8CF", "A8D0", "A8D1", "A8D2", "A8D3", "A8D4", "A8D5", "A8D6", "A8D7", "A8D8", "A8D9", "A8DA", "A8DB", "A8DC", "A8DD", "A8DE", "A8DF", "A8E0", "A8E1", "A8E2", "A8E3", "A8E4", "A8E5", "A8E6", "A8E7", "A8E8", "A8E9", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A2E5", "A2E6", "A2E7", "A2E8", "A2E9", "A2EA", "A2EB", "A2EC", "A2ED", "A2EE", 0, 0, 0, 0, 0, 0, 0, "A95A", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A949", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A94A", "A94B", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A94C", "A94D", "A94E", 0, 0, "A94F", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A950", 0, 0, 0, 0, 0, 0, 0, 0, 0, "A951", 0, 0, "A952", "A953", 0, 0, "A954", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE56", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE55", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE5A", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE5C", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE5B", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE60", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE5F", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE62", "FE65", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE63", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE64", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE68", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE69", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE6A", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE6F", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE70", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE72", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE78", 0, 0, 0, 0, "FE77", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE7A", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE7B", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE7D", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE7C", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE80", 0, 0, 0, 0, 0, "FE81", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE82", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE83", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE85", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE86", 0, 0, "FE87", 0, 0, 0, 0, "FE88", "FE89", 0, "FE8A", "FE8B", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE8D", 0, 0, 0, "FE8C", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE8F", "FE8E", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE96", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE93", "FE94", "FE95", "FE97", "FE92", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE98", "FE99", "FE9A", "FE9B", "FE9C", "FE9D", "FE9E", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE9F", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "D2BB", "B6A1", "8140", "C6DF", "8141", "8142", "8143", "CDF2", "D5C9", "C8FD", "C9CF", "CFC2", "D8A2", "B2BB", "D3EB", "8144", "D8A4", "B3F3", "8145", "D7A8", "C7D2", "D8A7", "CAC0", "8146", "C7F0", "B1FB", "D2B5", "B4D4", "B6AB", "CBBF", "D8A9", "8147", "8148", "8149", "B6AA", "814A", "C1BD", "D1CF", "814B", "C9A5", "D8AD", "814C", "B8F6", "D1BE", "E3DC", "D6D0", "814D", "814E", "B7E1", "814F", "B4AE", "8150", "C1D9", "8151", "D8BC", "8152", "CDE8", "B5A4", "CEAA", "D6F7", "8153", "C0F6", "BED9", "D8AF", "8154", "8155", "8156", "C4CB", "8157", "BEC3", "8158", "D8B1", "C3B4", "D2E5", "8159", "D6AE", "CEDA", "D5A7", "BAF5", "B7A6", "C0D6", "815A", "C6B9", "C5D2", "C7C7", "815B", "B9D4", "815C", "B3CB", "D2D2", "815D", "815E", "D8BF", "BEC5", "C6F2", "D2B2", "CFB0", "CFE7", "815F", "8160", "8161", "8162", "CAE9", "8163", "8164", "D8C0", "8165", "8166", "8167", "8168", "8169", "816A", "C2F2", "C2D2", "816B", "C8E9", "816C", "816D", "816E", "816F", "8170", "8171", "8172", "8173", "8174", "8175", "C7AC", "8176", "8177", "8178", "8179", "817A", "817B", "817C", "C1CB", "817D", "D3E8", "D5F9", "817E", "CAC2", "B6FE", "D8A1", "D3DA", "BFF7", "8180", "D4C6", "BBA5", "D8C1", "CEE5", "BEAE", "8181", "8182", "D8A8", "8183", "D1C7", "D0A9", "8184", "8185", "8186", "D8BD", "D9EF", "CDF6", "BFBA", "8187", "BDBB", "BAA5", "D2E0", "B2FA", "BAE0", "C4B6", "8188", "CFED", "BEA9", "CDA4", "C1C1", "8189", "818A", "818B", "C7D7", "D9F1", "818C", "D9F4", "818D", "818E", "818F", "8190", "C8CB", "D8E9", "8191", "8192", "8193", "D2DA", "CAB2", "C8CA", "D8EC", "D8EA", "D8C6", "BDF6", "C6CD", "B3F0", "8194", "D8EB", "BDF1", "BDE9", "8195", "C8D4", "B4D3", "8196", "8197", "C2D8", "8198", "B2D6", "D7D0", "CACB", "CBFB", "D5CC", "B8B6", "CFC9", "8199", "819A", "819B", "D9DA", "D8F0", "C7AA", "819C", "D8EE", "819D", "B4FA", "C1EE", "D2D4", "819E", "819F", "D8ED", "81A0", "D2C7", "D8EF", "C3C7", "81A1", "81A2", "81A3", "D1F6", "81A4", "D6D9", "D8F2", "81A5", "D8F5", "BCFE", "BCDB", "81A6", "81A7", "81A8", "C8CE", "81A9", "B7DD", "81AA", "B7C2", "81AB", "C6F3", "81AC", "81AD", "81AE", "81AF", "81B0", "81B1", "81B2", "D8F8", "D2C1", "81B3", "81B4", "CEE9", "BCBF", "B7FC", "B7A5", "D0DD", "81B5", "81B6", "81B7", "81B8", "81B9", "D6DA", "D3C5", "BBEF", "BBE1", "D8F1", "81BA", "81BB", "C9A1", "CEB0", "B4AB", "81BC", "D8F3", "81BD", "C9CB", "D8F6", "C2D7", "D8F7", "81BE", "81BF", "CEB1", "D8F9", "81C0", "81C1", "81C2", "B2AE", "B9C0", "81C3", "D9A3", "81C4", "B0E9", "81C5", "C1E6", "81C6", "C9EC", "81C7", "CBC5", "81C8", "CBC6", "D9A4", "81C9", "81CA", "81CB", "81CC", "81CD", "B5E8", "81CE", "81CF", "B5AB", "81D0", "81D1", "81D2", "81D3", "81D4", "81D5", "CEBB", "B5CD", "D7A1", "D7F4", "D3D3", "81D6", "CCE5", "81D7", "BACE", "81D8", "D9A2", "D9DC", "D3E0", "D8FD", "B7F0", "D7F7", "D8FE", "D8FA", "D9A1", "C4E3", "81D9", "81DA", "D3B6", "D8F4", "D9DD", "81DB", "D8FB", "81DC", "C5E5", "81DD", "81DE", "C0D0", "81DF", "81E0", "D1F0", "B0DB", "81E1", "81E2", "BCD1", "D9A6", "81E3", "D9A5", "81E4", "81E5", "81E6", "81E7", "D9AC", "D9AE", "81E8", "D9AB", "CAB9", "81E9", "81EA", "81EB", "D9A9", "D6B6", "81EC", "81ED", "81EE", "B3DE", "D9A8", "81EF", "C0FD", "81F0", "CACC", "81F1", "D9AA", "81F2", "D9A7", "81F3", "81F4", "D9B0", "81F5", "81F6", "B6B1", "81F7", "81F8", "81F9", "B9A9", "81FA", "D2C0", "81FB", "81FC", "CFC0", "81FD", "81FE", "C2C2", "8240", "BDC4", "D5EC", "B2E0", "C7C8", "BFEB", "D9AD", "8241", "D9AF", "8242", "CEEA", "BAEE", "8243", "8244", "8245", "8246", "8247", "C7D6", "8248", "8249", "824A", "824B", "824C", "824D", "824E", "824F", "8250", "B1E3", "8251", "8252", "8253", "B4D9", "B6ED", "D9B4", "8254", "8255", "8256", "8257", "BFA1", "8258", "8259", "825A", "D9DE", "C7CE", "C0FE", "D9B8", "825B", "825C", "825D", "825E", "825F", "CBD7", "B7FD", "8260", "D9B5", "8261", "D9B7", "B1A3", "D3E1", "D9B9", "8262", "D0C5", "8263", "D9B6", "8264", "8265", "D9B1", "8266", "D9B2", "C1A9", "D9B3", "8267", "8268", "BCF3", "D0DE", "B8A9", "8269", "BEE3", "826A", "D9BD", "826B", "826C", "826D", "826E", "D9BA", "826F", "B0B3", "8270", "8271", "8272", "D9C2", "8273", "8274", "8275", "8276", "8277", "8278", "8279", "827A", "827B", "827C", "827D", "827E", "8280", "D9C4", "B1B6", "8281", "D9BF", "8282", "8283", "B5B9", "8284", "BEF3", "8285", "8286", "8287", "CCC8", "BAF2", "D2D0", "8288", "D9C3", "8289", "828A", "BDE8", "828B", "B3AB", "828C", "828D", "828E", "D9C5", "BEEB", "828F", "D9C6", "D9BB", "C4DF", "8290", "D9BE", "D9C1", "D9C0", "8291", "8292", "8293", "8294", "8295", "8296", "8297", "8298", "8299", "829A", "829B", "D5AE", "829C", "D6B5", "829D", "C7E3", "829E", "829F", "82A0", "82A1", "D9C8", "82A2", "82A3", "82A4", "BCD9", "D9CA", "82A5", "82A6", "82A7", "D9BC", "82A8", "D9CB", "C6AB", "82A9", "82AA", "82AB", "82AC", "82AD", "D9C9", "82AE", "82AF", "82B0", "82B1", "D7F6", "82B2", "CDA3", "82B3", "82B4", "82B5", "82B6", "82B7", "82B8", "82B9", "82BA", "BDA1", "82BB", "82BC", "82BD", "82BE", "82BF", "82C0", "D9CC", "82C1", "82C2", "82C3", "82C4", "82C5", "82C6", "82C7", "82C8", "82C9", "C5BC", "CDB5", "82CA", "82CB", "82CC", "D9CD", "82CD", "82CE", "D9C7", "B3A5", "BFFE", "82CF", "82D0", "82D1", "82D2", "B8B5", "82D3", "82D4", "C0FC", "82D5", "82D6", "82D7", "82D8", "B0F8", "82D9", "82DA", "82DB", "82DC", "82DD", "82DE", "82DF", "82E0", "82E1", "82E2", "82E3", "82E4", "82E5", "82E6", "82E7", "82E8", "82E9", "82EA", "82EB", "82EC", "82ED", "B4F6", "82EE", "D9CE", "82EF", "D9CF", "B4A2", "D9D0", "82F0", "82F1", "B4DF", "82F2", "82F3", "82F4", "82F5", "82F6", "B0C1", "82F7", "82F8", "82F9", "82FA", "82FB", "82FC", "82FD", "D9D1", "C9B5", "82FE", "8340", "8341", "8342", "8343", "8344", "8345", "8346", "8347", "8348", "8349", "834A", "834B", "834C", "834D", "834E", "834F", "8350", "8351", "CFF1", "8352", "8353", "8354", "8355", "8356", "8357", "D9D2", "8358", "8359", "835A", "C1C5", "835B", "835C", "835D", "835E", "835F", "8360", "8361", "8362", "8363", "8364", "8365", "D9D6", "C9AE", "8366", "8367", "8368", "8369", "D9D5", "D9D4", "D9D7", "836A", "836B", "836C", "836D", "CBDB", "836E", "BDA9", "836F", "8370", "8371", "8372", "8373", "C6A7", "8374", "8375", "8376", "8377", "8378", "8379", "837A", "837B", "837C", "837D", "D9D3", "D9D8", "837E", "8380", "8381", "D9D9", "8382", "8383", "8384", "8385", "8386", "8387", "C8E5", "8388", "8389", "838A", "838B", "838C", "838D", "838E", "838F", "8390", "8391", "8392", "8393", "8394", "8395", "C0DC", "8396", "8397", "8398", "8399", "839A", "839B", "839C", "839D", "839E", "839F", "83A0", "83A1", "83A2", "83A3", "83A4", "83A5", "83A6", "83A7", "83A8", "83A9", "83AA", "83AB", "83AC", "83AD", "83AE", "83AF", "83B0", "83B1", "83B2", "B6F9", "D8A3", "D4CA", "83B3", "D4AA", "D0D6", "B3E4", "D5D7", "83B4", "CFC8", "B9E2", "83B5", "BFCB", "83B6", "C3E2", "83B7", "83B8", "83B9", "B6D2", "83BA", "83BB", "CDC3", "D9EE", "D9F0", "83BC", "83BD", "83BE", "B5B3", "83BF", "B6B5", "83C0", "83C1", "83C2", "83C3", "83C4", "BEA4", "83C5", "83C6", "C8EB", "83C7", "83C8", "C8AB", "83C9", "83CA", "B0CB", "B9AB", "C1F9", "D9E2", "83CB", "C0BC", "B9B2", "83CC", "B9D8", "D0CB", "B1F8", "C6E4", "BEDF", "B5E4", "D7C8", "83CD", "D1F8", "BCE6", "CADE", "83CE", "83CF", "BCBD", "D9E6", "D8E7", "83D0", "83D1", "C4DA", "83D2", "83D3", "B8D4", "C8BD", "83D4", "83D5", "B2E1", "D4D9", "83D6", "83D7", "83D8", "83D9", "C3B0", "83DA", "83DB", "C3E1", "DAA2", "C8DF", "83DC", "D0B4", "83DD", "BEFC", "C5A9", "83DE", "83DF", "83E0", "B9DA", "83E1", "DAA3", "83E2", "D4A9", "DAA4", "83E3", "83E4", "83E5", "83E6", "83E7", "D9FB", "B6AC", "83E8", "83E9", "B7EB", "B1F9", "D9FC", "B3E5", "BEF6", "83EA", "BFF6", "D2B1", "C0E4", "83EB", "83EC", "83ED", "B6B3", "D9FE", "D9FD", "83EE", "83EF", "BEBB", "83F0", "83F1", "83F2", "C6E0", "83F3", "D7BC", "DAA1", "83F4", "C1B9", "83F5", "B5F2", "C1E8", "83F6", "83F7", "BCF5", "83F8", "B4D5", "83F9", "83FA", "83FB", "83FC", "83FD", "83FE", "8440", "8441", "8442", "C1DD", "8443", "C4FD", "8444", "8445", "BCB8", "B7B2", "8446", "8447", "B7EF", "8448", "8449", "844A", "844B", "844C", "844D", "D9EC", "844E", "C6BE", "844F", "BFAD", "BBCB", "8450", "8451", "B5CA", "8452", "DBC9", "D0D7", "8453", "CDB9", "B0BC", "B3F6", "BBF7", "DBCA", "BAAF", "8454", "D4E4", "B5B6", "B5F3", "D8D6", "C8D0", "8455", "8456", "B7D6", "C7D0", "D8D7", "8457", "BFAF", "8458", "8459", "DBBB", "D8D8", "845A", "845B", "D0CC", "BBAE", "845C", "845D", "845E", "EBBE", "C1D0", "C1F5", "D4F2", "B8D5", "B4B4", "845F", "B3F5", "8460", "8461", "C9BE", "8462", "8463", "8464", "C5D0", "8465", "8466", "8467", "C5D9", "C0FB", "8468", "B1F0", "8469", "D8D9", "B9CE", "846A", "B5BD", "846B", "846C", "D8DA", "846D", "846E", "D6C6", "CBA2", "C8AF", "C9B2", "B4CC", "BFCC", "846F", "B9F4", "8470", "D8DB", "D8DC", "B6E7", "BCC1", "CCEA", "8471", "8472", "8473", "8474", "8475", "8476", "CFF7", "8477", "D8DD", "C7B0", "8478", "8479", "B9D0", "BDA3", "847A", "847B", "CCDE", "847C", "C6CA", "847D", "847E", "8480", "8481", "8482", "D8E0", "8483", "D8DE", "8484", "8485", "D8DF", "8486", "8487", "8488", "B0FE", "8489", "BEE7", "848A", "CAA3", "BCF4", "848B", "848C", "848D", "848E", "B8B1", "848F", "8490", "B8EE", "8491", "8492", "8493", "8494", "8495", "8496", "8497", "8498", "8499", "849A", "D8E2", "849B", "BDCB", "849C", "D8E4", "D8E3", "849D", "849E", "849F", "84A0", "84A1", "C5FC", "84A2", "84A3", "84A4", "84A5", "84A6", "84A7", "84A8", "D8E5", "84A9", "84AA", "D8E6", "84AB", "84AC", "84AD", "84AE", "84AF", "84B0", "84B1", "C1A6", "84B2", "C8B0", "B0EC", "B9A6", "BCD3", "CEF1", "DBBD", "C1D3", "84B3", "84B4", "84B5", "84B6", "B6AF", "D6FA", "C5AC", "BDD9", "DBBE", "DBBF", "84B7", "84B8", "84B9", "C0F8", "BEA2", "C0CD", "84BA", "84BB", "84BC", "84BD", "84BE", "84BF", "84C0", "84C1", "84C2", "84C3", "DBC0", "CAC6", "84C4", "84C5", "84C6", "B2AA", "84C7", "84C8", "84C9", "D3C2", "84CA", "C3E3", "84CB", "D1AB", "84CC", "84CD", "84CE", "84CF", "DBC2", "84D0", "C0D5", "84D1", "84D2", "84D3", "DBC3", "84D4", "BFB1", "84D5", "84D6", "84D7", "84D8", "84D9", "84DA", "C4BC", "84DB", "84DC", "84DD", "84DE", "C7DA", "84DF", "84E0", "84E1", "84E2", "84E3", "84E4", "84E5", "84E6", "84E7", "84E8", "84E9", "DBC4", "84EA", "84EB", "84EC", "84ED", "84EE", "84EF", "84F0", "84F1", "D9E8", "C9D7", "84F2", "84F3", "84F4", "B9B4", "CEF0", "D4C8", "84F5", "84F6", "84F7", "84F8", "B0FC", "B4D2", "84F9", "D0D9", "84FA", "84FB", "84FC", "84FD", "D9E9", "84FE", "DECB", "D9EB", "8540", "8541", "8542", "8543", "D8B0", "BBAF", "B1B1", "8544", "B3D7", "D8CE", "8545", "8546", "D4D1", "8547", "8548", "BDB3", "BFEF", "8549", "CFBB", "854A", "854B", "D8D0", "854C", "854D", "854E", "B7CB", "854F", "8550", "8551", "D8D1", "8552", "8553", "8554", "8555", "8556", "8557", "8558", "8559", "855A", "855B", "C6A5", "C7F8", "D2BD", "855C", "855D", "D8D2", "C4E4", "855E", "CAAE", "855F", "C7A7", "8560", "D8A6", "8561", "C9FD", "CEE7", "BBDC", "B0EB", "8562", "8563", "8564", "BBAA", "D0AD", "8565", "B1B0", "D7E4", "D7BF", "8566", "B5A5", "C2F4", "C4CF", "8567", "8568", "B2A9", "8569", "B2B7", "856A", "B1E5", "DFB2", "D5BC", "BFA8", "C2AC", "D8D5", "C2B1", "856B", "D8D4", "CED4", "856C", "DAE0", "856D", "CEC0", "856E", "856F", "D8B4", "C3AE", "D3A1", "CEA3", "8570", "BCB4", "C8B4", "C2D1", "8571", "BEED", "D0B6", "8572", "DAE1", "8573", "8574", "8575", "8576", "C7E4", "8577", "8578", "B3A7", "8579", "B6F2", "CCFC", "C0FA", "857A", "857B", "C0F7", "857C", "D1B9", "D1E1", "D8C7", "857D", "857E", "8580", "8581", "8582", "8583", "8584", "B2DE", "8585", "8586", "C0E5", "8587", "BAF1", "8588", "8589", "D8C8", "858A", "D4AD", "858B", "858C", "CFE1", "D8C9", "858D", "D8CA", "CFC3", "858E", "B3F8", "BEC7", "858F", "8590", "8591", "8592", "D8CB", "8593", "8594", "8595", "8596", "8597", "8598", "8599", "DBCC", "859A", "859B", "859C", "859D", "C8A5", "859E", "859F", "85A0", "CFD8", "85A1", "C8FE", "B2CE", "85A2", "85A3", "85A4", "85A5", "85A6", "D3D6", "B2E6", "BCB0", "D3D1", "CBAB", "B7B4", "85A7", "85A8", "85A9", "B7A2", "85AA", "85AB", "CAE5", "85AC", "C8A1", "CADC", "B1E4", "D0F0", "85AD", "C5D1", "85AE", "85AF", "85B0", "DBC5", "B5FE", "85B1", "85B2", "BFDA", "B9C5", "BEE4", "C1ED", "85B3", "DFB6", "DFB5", "D6BB", "BDD0", "D5D9", "B0C8", "B6A3", "BFC9", "CCA8", "DFB3", "CAB7", "D3D2", "85B4", "D8CF", "D2B6", "BAC5", "CBBE", "CCBE", "85B5", "DFB7", "B5F0", "DFB4", "85B6", "85B7", "85B8", "D3F5", "85B9", "B3D4", "B8F7", "85BA", "DFBA", "85BB", "BACF", "BCAA", "B5F5", "85BC", "CDAC", "C3FB", "BAF3", "C0F4", "CDC2", "CFF2", "DFB8", "CFC5", "85BD", "C2C0", "DFB9", "C2F0", "85BE", "85BF", "85C0", "BEFD", "85C1", "C1DF", "CDCC", "D2F7", "B7CD", "DFC1", "85C2", "DFC4", "85C3", "85C4", "B7F1", "B0C9", "B6D6", "B7D4", "85C5", "BAAC", "CCFD", "BFD4", "CBB1", "C6F4", "85C6", "D6A8", "DFC5", "85C7", "CEE2", "B3B3", "85C8", "85C9", "CEFC", "B4B5", "85CA", "CEC7", "BAF0", "85CB", "CEE1", "85CC", "D1BD", "85CD", "85CE", "DFC0", "85CF", "85D0", "B4F4", "85D1", "B3CA", "85D2", "B8E6", "DFBB", "85D3", "85D4", "85D5", "85D6", "C4C5", "85D7", "DFBC", "DFBD", "DFBE", "C5BB", "DFBF", "DFC2", "D4B1", "DFC3", "85D8", "C7BA", "CED8", "85D9", "85DA", "85DB", "85DC", "85DD", "C4D8", "85DE", "DFCA", "85DF", "DFCF", "85E0", "D6DC", "85E1", "85E2", "85E3", "85E4", "85E5", "85E6", "85E7", "85E8", "DFC9", "DFDA", "CEB6", "85E9", "BAC7", "DFCE", "DFC8", "C5DE", "85EA", "85EB", "C9EB", "BAF4", "C3FC", "85EC", "85ED", "BED7", "85EE", "DFC6", "85EF", "DFCD", "85F0", "C5D8", "85F1", "85F2", "85F3", "85F4", "D5A6", "BACD", "85F5", "BECC", "D3BD", "B8C0", "85F6", "D6E4", "85F7", "DFC7", "B9BE", "BFA7", "85F8", "85F9", "C1FC", "DFCB", "DFCC", "85FA", "DFD0", "85FB", "85FC", "85FD", "85FE", "8640", "DFDB", "DFE5", "8641", "DFD7", "DFD6", "D7C9", "DFE3", "DFE4", "E5EB", "D2A7", "DFD2", "8642", "BFA9", "8643", "D4DB", "8644", "BFC8", "DFD4", "8645", "8646", "8647", "CFCC", "8648", "8649", "DFDD", "864A", "D1CA", "864B", "DFDE", "B0A7", "C6B7", "DFD3", "864C", "BAE5", "864D", "B6DF", "CDDB", "B9FE", "D4D5", "864E", "864F", "DFDF", "CFEC", "B0A5", "DFE7", "DFD1", "D1C6", "DFD5", "DFD8", "DFD9", "DFDC", "8650", "BBA9", "8651", "DFE0", "DFE1", "8652", "DFE2", "DFE6", "DFE8", "D3B4", "8653", "8654", "8655", "8656", "8657", "B8E7", "C5B6", "DFEA", "C9DA", "C1A8", "C4C4", "8658", "8659", "BFDE", "CFF8", "865A", "865B", "865C", "D5DC", "DFEE", "865D", "865E", "865F", "8660", "8661", "8662", "B2B8", "8663", "BADF", "DFEC", "8664", "DBC1", "8665", "D1E4", "8666", "8667", "8668", "8669", "CBF4", "B4BD", "866A", "B0A6", "866B", "866C", "866D", "866E", "866F", "DFF1", "CCC6", "DFF2", "8670", "8671", "DFED", "8672", "8673", "8674", "8675", "8676", "8677", "DFE9", "8678", "8679", "867A", "867B", "DFEB", "867C", "DFEF", "DFF0", "BBBD", "867D", "867E", "DFF3", "8680", "8681", "DFF4", "8682", "BBA3", "8683", "CADB", "CEA8", "E0A7", "B3AA", "8684", "E0A6", "8685", "8686", "8687", "E0A1", "8688", "8689", "868A", "868B", "DFFE", "868C", "CDD9", "DFFC", "868D", "DFFA", "868E", "BFD0", "D7C4", "868F", "C9CC", "8690", "8691", "DFF8", "B0A1", "8692", "8693", "8694", "8695", "8696", "DFFD", "8697", "8698", "8699", "869A", "DFFB", "E0A2", "869B", "869C", "869D", "869E", "869F", "E0A8", "86A0", "86A1", "86A2", "86A3", "B7C8", "86A4", "86A5", "C6A1", "C9B6", "C0B2", "DFF5", "86A6", "86A7", "C5BE", "86A8", "D8C4", "DFF9", "C4F6", "86A9", "86AA", "86AB", "86AC", "86AD", "86AE", "E0A3", "E0A4", "E0A5", "D0A5", "86AF", "86B0", "E0B4", "CCE4", "86B1", "E0B1", "86B2", "BFA6", "E0AF", "CEB9", "E0AB", "C9C6", "86B3", "86B4", "C0AE", "E0AE", "BAED", "BAB0", "E0A9", "86B5", "86B6", "86B7", "DFF6", "86B8", "E0B3", "86B9", "86BA", "E0B8", "86BB", "86BC", "86BD", "B4AD", "E0B9", "86BE", "86BF", "CFB2", "BAC8", "86C0", "E0B0", "86C1", "86C2", "86C3", "86C4", "86C5", "86C6", "86C7", "D0FA", "86C8", "86C9", "86CA", "86CB", "86CC", "86CD", "86CE", "86CF", "86D0", "E0AC", "86D1", "D4FB", "86D2", "DFF7", "86D3", "C5E7", "86D4", "E0AD", "86D5", "D3F7", "86D6", "E0B6", "E0B7", "86D7", "86D8", "86D9", "86DA", "86DB", "E0C4", "D0E1", "86DC", "86DD", "86DE", "E0BC", "86DF", "86E0", "E0C9", "E0CA", "86E1", "86E2", "86E3", "E0BE", "E0AA", "C9A4", "E0C1", "86E4", "E0B2", "86E5", "86E6", "86E7", "86E8", "86E9", "CAC8", "E0C3", "86EA", "E0B5", "86EB", "CECB", "86EC", "CBC3", "E0CD", "E0C6", "E0C2", "86ED", "E0CB", "86EE", "E0BA", "E0BF", "E0C0", "86EF", "86F0", "E0C5", "86F1", "86F2", "E0C7", "E0C8", "86F3", "E0CC", "86F4", "E0BB", "86F5", "86F6", "86F7", "86F8", "86F9", "CBD4", "E0D5", "86FA", "E0D6", "E0D2", "86FB", "86FC", "86FD", "86FE", "8740", "8741", "E0D0", "BCCE", "8742", "8743", "E0D1", "8744", "B8C2", "D8C5", "8745", "8746", "8747", "8748", "8749", "874A", "874B", "874C", "D0EA", "874D", "874E", "C2EF", "874F", "8750", "E0CF", "E0BD", "8751", "8752", "8753", "E0D4", "E0D3", "8754", "8755", "E0D7", "8756", "8757", "8758", "8759", "E0DC", "E0D8", "875A", "875B", "875C", "D6F6", "B3B0", "875D", "D7EC", "875E", "CBBB", "875F", "8760", "E0DA", "8761", "CEFB", "8762", "8763", "8764", "BAD9", "8765", "8766", "8767", "8768", "8769", "876A", "876B", "876C", "876D", "876E", "876F", "8770", "E0E1", "E0DD", "D2AD", "8771", "8772", "8773", "8774", "8775", "E0E2", "8776", "8777", "E0DB", "E0D9", "E0DF", "8778", "8779", "E0E0", "877A", "877B", "877C", "877D", "877E", "E0DE", "8780", "E0E4", "8781", "8782", "8783", "C6F7", "D8AC", "D4EB", "E0E6", "CAC9", "8784", "8785", "8786", "8787", "E0E5", "8788", "8789", "878A", "878B", "B8C1", "878C", "878D", "878E", "878F", "E0E7", "E0E8", "8790", "8791", "8792", "8793", "8794", "8795", "8796", "8797", "E0E9", "E0E3", "8798", "8799", "879A", "879B", "879C", "879D", "879E", "BABF", "CCE7", "879F", "87A0", "87A1", "E0EA", "87A2", "87A3", "87A4", "87A5", "87A6", "87A7", "87A8", "87A9", "87AA", "87AB", "87AC", "87AD", "87AE", "87AF", "87B0", "CFF9", "87B1", "87B2", "87B3", "87B4", "87B5", "87B6", "87B7", "87B8", "87B9", "87BA", "87BB", "E0EB", "87BC", "87BD", "87BE", "87BF", "87C0", "87C1", "87C2", "C8C2", "87C3", "87C4", "87C5", "87C6", "BDC0", "87C7", "87C8", "87C9", "87CA", "87CB", "87CC", "87CD", "87CE", "87CF", "87D0", "87D1", "87D2", "87D3", "C4D2", "87D4", "87D5", "87D6", "87D7", "87D8", "87D9", "87DA", "87DB", "87DC", "E0EC", "87DD", "87DE", "E0ED", "87DF", "87E0", "C7F4", "CBC4", "87E1", "E0EE", "BBD8", "D8B6", "D2F2", "E0EF", "CDC5", "87E2", "B6DA", "87E3", "87E4", "87E5", "87E6", "87E7", "87E8", "E0F1", "87E9", "D4B0", "87EA", "87EB", "C0A7", "B4D1", "87EC", "87ED", "CEA7", "E0F0", "87EE", "87EF", "87F0", "E0F2", "B9CC", "87F1", "87F2", "B9FA", "CDBC", "E0F3", "87F3", "87F4", "87F5", "C6D4", "E0F4", "87F6", "D4B2", "87F7", "C8A6", "E0F6", "E0F5", "87F8", "87F9", "87FA", "87FB", "87FC", "87FD", "87FE", "8840", "8841", "8842", "8843", "8844", "8845", "8846", "8847", "8848", "8849", "E0F7", "884A", "884B", "CDC1", "884C", "884D", "884E", "CAA5", "884F", "8850", "8851", "8852", "D4DA", "DBD7", "DBD9", "8853", "DBD8", "B9E7", "DBDC", "DBDD", "B5D8", "8854", "8855", "DBDA", "8856", "8857", "8858", "8859", "885A", "DBDB", "B3A1", "DBDF", "885B", "885C", "BBF8", "885D", "D6B7", "885E", "DBE0", "885F", "8860", "8861", "8862", "BEF9", "8863", "8864", "B7BB", "8865", "DBD0", "CCAE", "BFB2", "BBB5", "D7F8", "BFD3", "8866", "8867", "8868", "8869", "886A", "BFE9", "886B", "886C", "BCE1", "CCB3", "DBDE", "B0D3", "CEEB", "B7D8", "D7B9", "C6C2", "886D", "886E", "C0A4", "886F", "CCB9", "8870", "DBE7", "DBE1", "C6BA", "DBE3", "8871", "DBE8", "8872", "C5F7", "8873", "8874", "8875", "DBEA", "8876", "8877", "DBE9", "BFC0", "8878", "8879", "887A", "DBE6", "DBE5", "887B", "887C", "887D", "887E", "8880", "B4B9", "C0AC", "C2A2", "DBE2", "DBE4", "8881", "8882", "8883", "8884", "D0CD", "DBED", "8885", "8886", "8887", "8888", "8889", "C0DD", "DBF2", "888A", "888B", "888C", "888D", "888E", "888F", "8890", "B6E2", "8891", "8892", "8893", "8894", "DBF3", "DBD2", "B9B8", "D4AB", "DBEC", "8895", "BFD1", "DBF0", "8896", "DBD1", "8897", "B5E6", "8898", "DBEB", "BFE5", "8899", "889A", "889B", "DBEE", "889C", "DBF1", "889D", "889E", "889F", "DBF9", "88A0", "88A1", "88A2", "88A3", "88A4", "88A5", "88A6", "88A7", "88A8", "B9A1", "B0A3", "88A9", "88AA", "88AB", "88AC", "88AD", "88AE", "88AF", "C2F1", "88B0", "88B1", "B3C7", "DBEF", "88B2", "88B3", "DBF8", "88B4", "C6D2", "DBF4", "88B5", "88B6", "DBF5", "DBF7", "DBF6", "88B7", "88B8", "DBFE", "88B9", "D3F2", "B2BA", "88BA", "88BB", "88BC", "DBFD", "88BD", "88BE", "88BF", "88C0", "88C1", "88C2", "88C3", "88C4", "DCA4", "88C5", "DBFB", "88C6", "88C7", "88C8", "88C9", "DBFA", "88CA", "88CB", "88CC", "DBFC", "C5E0", "BBF9", "88CD", "88CE", "DCA3", "88CF", "88D0", "DCA5", "88D1", "CCC3", "88D2", "88D3", "88D4", "B6D1", "DDC0", "88D5", "88D6", "88D7", "DCA1", "88D8", "DCA2", "88D9", "88DA", "88DB", "C7B5", "88DC", "88DD", "88DE", "B6E9", "88DF", "88E0", "88E1", "DCA7", "88E2", "88E3", "88E4", "88E5", "DCA6", "88E6", "DCA9", "B1A4", "88E7", "88E8", "B5CC", "88E9", "88EA", "88EB", "88EC", "88ED", "BFB0", "88EE", "88EF", "88F0", "88F1", "88F2", "D1DF", "88F3", "88F4", "88F5", "88F6", "B6C2", "88F7", "88F8", "88F9", "88FA", "88FB", "88FC", "88FD", "88FE", "8940", "8941", "8942", "8943", "8944", "8945", "DCA8", "8946", "8947", "8948", "8949", "894A", "894B", "894C", "CBFA", "EBF3", "894D", "894E", "894F", "CBDC", "8950", "8951", "CBFE", "8952", "8953", "8954", "CCC1", "8955", "8956", "8957", "8958", "8959", "C8FB", "895A", "895B", "895C", "895D", "895E", "895F", "DCAA", "8960", "8961", "8962", "8963", "8964", "CCEE", "DCAB", "8965", "8966", "8967", "8968", "8969", "896A", "896B", "896C", "896D", "896E", "896F", "8970", "8971", "8972", "8973", "8974", "8975", "DBD3", "8976", "DCAF", "DCAC", "8977", "BEB3", "8978", "CAFB", "8979", "897A", "897B", "DCAD", "897C", "897D", "897E", "8980", "8981", "8982", "8983", "8984", "C9CA", "C4B9", "8985", "8986", "8987", "8988", "8989", "C7BD", "DCAE", "898A", "898B", "898C", "D4F6", "D0E6", "898D", "898E", "898F", "8990", "8991", "8992", "8993", "8994", "C4AB", "B6D5", "8995", "8996", "8997", "8998", "8999", "899A", "899B", "899C", "899D", "899E", "899F", "89A0", "89A1", "89A2", "89A3", "89A4", "89A5", "89A6", "DBD4", "89A7", "89A8", "89A9", "89AA", "B1DA", "89AB", "89AC", "89AD", "DBD5", "89AE", "89AF", "89B0", "89B1", "89B2", "89B3", "89B4", "89B5", "89B6", "89B7", "89B8", "DBD6", "89B9", "89BA", "89BB", "BABE", "89BC", "89BD", "89BE", "89BF", "89C0", "89C1", "89C2", "89C3", "89C4", "89C5", "89C6", "89C7", "89C8", "89C9", "C8C0", "89CA", "89CB", "89CC", "89CD", "89CE", "89CF", "CABF", "C8C9", "89D0", "D7B3", "89D1", "C9F9", "89D2", "89D3", "BFC7", "89D4", "89D5", "BAF8", "89D6", "89D7", "D2BC", "89D8", "89D9", "89DA", "89DB", "89DC", "89DD", "89DE", "89DF", "E2BA", "89E0", "B4A6", "89E1", "89E2", "B1B8", "89E3", "89E4", "89E5", "89E6", "89E7", "B8B4", "89E8", "CFC4", "89E9", "89EA", "89EB", "89EC", "D9E7", "CFA6", "CDE2", "89ED", "89EE", "D9ED", "B6E0", "89EF", "D2B9", "89F0", "89F1", "B9BB", "89F2", "89F3", "89F4", "89F5", "E2B9", "E2B7", "89F6", "B4F3", "89F7", "CCEC", "CCAB", "B7F2", "89F8", "D8B2", "D1EB", "BABB", "89F9", "CAA7", "89FA", "89FB", "CDB7", "89FC", "89FD", "D2C4", "BFE4", "BCD0", "B6E1", "89FE", "DEC5", "8A40", "8A41", "8A42", "8A43", "DEC6", "DBBC", "8A44", "D1D9", "8A45", "8A46", "C6E6", "C4CE", "B7EE", "8A47", "B7DC", "8A48", "8A49", "BFFC", "D7E0", "8A4A", "C6F5", "8A4B", "8A4C", "B1BC", "DEC8", "BDB1", "CCD7", "DECA", "8A4D", "DEC9", "8A4E", "8A4F", "8A50", "8A51", "8A52", "B5EC", "8A53", "C9DD", "8A54", "8A55", "B0C2", "8A56", "8A57", "8A58", "8A59", "8A5A", "8A5B", "8A5C", "8A5D", "8A5E", "8A5F", "8A60", "8A61", "8A62", "C5AE", "C5AB", "8A63", "C4CC", "8A64", "BCE9", "CBFD", "8A65", "8A66", "8A67", "BAC3", "8A68", "8A69", "8A6A", "E5F9", "C8E7", "E5FA", "CDFD", "8A6B", "D7B1", "B8BE", "C2E8", "8A6C", "C8D1", "8A6D", "8A6E", "E5FB", "8A6F", "8A70", "8A71", "8A72", "B6CA", "BCCB", "8A73", "8A74", "D1FD", "E6A1", "8A75", "C3EE", "8A76", "8A77", "8A78", "8A79", "E6A4", "8A7A", "8A7B", "8A7C", "8A7D", "E5FE", "E6A5", "CDD7", "8A7E", "8A80", "B7C1", "E5FC", "E5FD", "E6A3", "8A81", "8A82", "C4DD", "E6A8", "8A83", "8A84", "E6A7", "8A85", "8A86", "8A87", "8A88", "8A89", "8A8A", "C3C3", "8A8B", "C6DE", "8A8C", "8A8D", "E6AA", "8A8E", "8A8F", "8A90", "8A91", "8A92", "8A93", "8A94", "C4B7", "8A95", "8A96", "8A97", "E6A2", "CABC", "8A98", "8A99", "8A9A", "8A9B", "BDE3", "B9C3", "E6A6", "D0D5", "CEAF", "8A9C", "8A9D", "E6A9", "E6B0", "8A9E", "D2A6", "8A9F", "BDAA", "E6AD", "8AA0", "8AA1", "8AA2", "8AA3", "8AA4", "E6AF", "8AA5", "C0D1", "8AA6", "8AA7", "D2CC", "8AA8", "8AA9", "8AAA", "BCA7", "8AAB", "8AAC", "8AAD", "8AAE", "8AAF", "8AB0", "8AB1", "8AB2", "8AB3", "8AB4", "8AB5", "8AB6", "E6B1", "8AB7", "D2F6", "8AB8", "8AB9", "8ABA", "D7CB", "8ABB", "CDFE", "8ABC", "CDDE", "C2A6", "E6AB", "E6AC", "BDBF", "E6AE", "E6B3", "8ABD", "8ABE", "E6B2", "8ABF", "8AC0", "8AC1", "8AC2", "E6B6", "8AC3", "E6B8", "8AC4", "8AC5", "8AC6", "8AC7", "C4EF", "8AC8", "8AC9", "8ACA", "C4C8", "8ACB", "8ACC", "BEEA", "C9EF", "8ACD", "8ACE", "E6B7", "8ACF", "B6F0", "8AD0", "8AD1", "8AD2", "C3E4", "8AD3", "8AD4", "8AD5", "8AD6", "8AD7", "8AD8", "8AD9", "D3E9", "E6B4", "8ADA", "E6B5", "8ADB", "C8A2", "8ADC", "8ADD", "8ADE", "8ADF", "8AE0", "E6BD", "8AE1", "8AE2", "8AE3", "E6B9", "8AE4", "8AE5", "8AE6", "8AE7", "8AE8", "C6C5", "8AE9", "8AEA", "CDF1", "E6BB", "8AEB", "8AEC", "8AED", "8AEE", "8AEF", "8AF0", "8AF1", "8AF2", "8AF3", "8AF4", "E6BC", "8AF5", "8AF6", "8AF7", "8AF8", "BBE9", "8AF9", "8AFA", "8AFB", "8AFC", "8AFD", "8AFE", "8B40", "E6BE", "8B41", "8B42", "8B43", "8B44", "E6BA", "8B45", "8B46", "C0B7", "8B47", "8B48", "8B49", "8B4A", "8B4B", "8B4C", "8B4D", "8B4E", "8B4F", "D3A4", "E6BF", "C9F4", "E6C3", "8B50", "8B51", "E6C4", "8B52", "8B53", "8B54", "8B55", "D0F6", "8B56", "8B57", "8B58", "8B59", "8B5A", "8B5B", "8B5C", "8B5D", "8B5E", "8B5F", "8B60", "8B61", "8B62", "8B63", "8B64", "8B65", "8B66", "8B67", "C3BD", "8B68", "8B69", "8B6A", "8B6B", "8B6C", "8B6D", "8B6E", "C3C4", "E6C2", "8B6F", "8B70", "8B71", "8B72", "8B73", "8B74", "8B75", "8B76", "8B77", "8B78", "8B79", "8B7A", "8B7B", "8B7C", "E6C1", "8B7D", "8B7E", "8B80", "8B81", "8B82", "8B83", "8B84", "E6C7", "CFB1", "8B85", "EBF4", "8B86", "8B87", "E6CA", "8B88", "8B89", "8B8A", "8B8B", "8B8C", "E6C5", "8B8D", "8B8E", "BCDE", "C9A9", "8B8F", "8B90", "8B91", "8B92", "8B93", "8B94", "BCB5", "8B95", "8B96", "CFD3", "8B97", "8B98", "8B99", "8B9A", "8B9B", "E6C8", "8B9C", "E6C9", "8B9D", "E6CE", "8B9E", "E6D0", "8B9F", "8BA0", "8BA1", "E6D1", "8BA2", "8BA3", "8BA4", "E6CB", "B5D5", "8BA5", "E6CC", "8BA6", "8BA7", "E6CF", "8BA8", "8BA9", "C4DB", "8BAA", "E6C6", "8BAB", "8BAC", "8BAD", "8BAE", "8BAF", "E6CD", "8BB0", "8BB1", "8BB2", "8BB3", "8BB4", "8BB5", "8BB6", "8BB7", "8BB8", "8BB9", "8BBA", "8BBB", "8BBC", "8BBD", "8BBE", "8BBF", "8BC0", "8BC1", "8BC2", "8BC3", "8BC4", "8BC5", "8BC6", "E6D2", "8BC7", "8BC8", "8BC9", "8BCA", "8BCB", "8BCC", "8BCD", "8BCE", "8BCF", "8BD0", "8BD1", "8BD2", "E6D4", "E6D3", "8BD3", "8BD4", "8BD5", "8BD6", "8BD7", "8BD8", "8BD9", "8BDA", "8BDB", "8BDC", "8BDD", "8BDE", "8BDF", "8BE0", "8BE1", "8BE2", "8BE3", "8BE4", "8BE5", "8BE6", "8BE7", "8BE8", "8BE9", "8BEA", "8BEB", "8BEC", "E6D5", "8BED", "D9F8", "8BEE", "8BEF", "E6D6", "8BF0", "8BF1", "8BF2", "8BF3", "8BF4", "8BF5", "8BF6", "8BF7", "E6D7", "8BF8", "8BF9", "8BFA", "8BFB", "8BFC", "8BFD", "8BFE", "8C40", "8C41", "8C42", "8C43", "8C44", "8C45", "8C46", "8C47", "D7D3", "E6DD", "8C48", "E6DE", "BFD7", "D4D0", "8C49", "D7D6", "B4E6", "CBEF", "E6DA", "D8C3", "D7CE", "D0A2", "8C4A", "C3CF", "8C4B", "8C4C", "E6DF", "BCBE", "B9C2", "E6DB", "D1A7", "8C4D", "8C4E", "BAA2", "C2CF", "8C4F", "D8AB", "8C50", "8C51", "8C52", "CAEB", "E5EE", "8C53", "E6DC", "8C54", "B7F5", "8C55", "8C56", "8C57", "8C58", "C8E6", "8C59", "8C5A", "C4F5", "8C5B", "8C5C", "E5B2", "C4FE", "8C5D", "CBFC", "E5B3", "D5AC", "8C5E", "D3EE", "CAD8", "B0B2", "8C5F", "CBCE", "CDEA", "8C60", "8C61", "BAEA", "8C62", "8C63", "8C64", "E5B5", "8C65", "E5B4", "8C66", "D7DA", "B9D9", "D6E6", "B6A8", "CDF0", "D2CB", "B1A6", "CAB5", "8C67", "B3E8", "C9F3", "BFCD", "D0FB", "CAD2", "E5B6", "BBC2", "8C68", "8C69", "8C6A", "CFDC", "B9AC", "8C6B", "8C6C", "8C6D", "8C6E", "D4D7", "8C6F", "8C70", "BAA6", "D1E7", "CFFC", "BCD2", "8C71", "E5B7", "C8DD", "8C72", "8C73", "8C74", "BFED", "B1F6", "CBDE", "8C75", "8C76", "BCC5", "8C77", "BCC4", "D2FA", "C3DC", "BFDC", "8C78", "8C79", "8C7A", "8C7B", "B8BB", "8C7C", "8C7D", "8C7E", "C3C2", "8C80", "BAAE", "D4A2", "8C81", "8C82", "8C83", "8C84", "8C85", "8C86", "8C87", "8C88", "8C89", "C7DE", "C4AF", "B2EC", "8C8A", "B9D1", "8C8B", "8C8C", "E5BB", "C1C8", "8C8D", "8C8E", "D5AF", "8C8F", "8C90", "8C91", "8C92", "8C93", "E5BC", "8C94", "E5BE", "8C95", "8C96", "8C97", "8C98", "8C99", "8C9A", "8C9B", "B4E7", "B6D4", "CBC2", "D1B0", "B5BC", "8C9C", "8C9D", "CAD9", "8C9E", "B7E2", "8C9F", "8CA0", "C9E4", "8CA1", "BDAB", "8CA2", "8CA3", "CEBE", "D7F0", "8CA4", "8CA5", "8CA6", "8CA7", "D0A1", "8CA8", "C9D9", "8CA9", "8CAA", "B6FB", "E6D8", "BCE2", "8CAB", "B3BE", "8CAC", "C9D0", "8CAD", "E6D9", "B3A2", "8CAE", "8CAF", "8CB0", "8CB1", "DECC", "8CB2", "D3C8", "DECD", "8CB3", "D2A2", "8CB4", "8CB5", "8CB6", "8CB7", "DECE", "8CB8", "8CB9", "8CBA", "8CBB", "BECD", "8CBC", "8CBD", "DECF", "8CBE", "8CBF", "8CC0", "CAAC", "D2FC", "B3DF", "E5EA", "C4E1", "BEA1", "CEB2", "C4F2", "BED6", "C6A8", "B2E3", "8CC1", "8CC2", "BED3", "8CC3", "8CC4", "C7FC", "CCEB", "BDEC", "CEDD", "8CC5", "8CC6", "CABA", "C6C1", "E5EC", "D0BC", "8CC7", "8CC8", "8CC9", "D5B9", "8CCA", "8CCB", "8CCC", "E5ED", "8CCD", "8CCE", "8CCF", "8CD0", "CAF4", "8CD1", "CDC0", "C2C5", "8CD2", "E5EF", "8CD3", "C2C4", "E5F0", "8CD4", "8CD5", "8CD6", "8CD7", "8CD8", "8CD9", "8CDA", "E5F8", "CDCD", "8CDB", "C9BD", "8CDC", "8CDD", "8CDE", "8CDF", "8CE0", "8CE1", "8CE2", "D2D9", "E1A8", "8CE3", "8CE4", "8CE5", "8CE6", "D3EC", "8CE7", "CBEA", "C6F1", "8CE8", "8CE9", "8CEA", "8CEB", "8CEC", "E1AC", "8CED", "8CEE", "8CEF", "E1A7", "E1A9", "8CF0", "8CF1", "E1AA", "E1AF", "8CF2", "8CF3", "B2ED", "8CF4", "E1AB", "B8DA", "E1AD", "E1AE", "E1B0", "B5BA", "E1B1", "8CF5", "8CF6", "8CF7", "8CF8", "8CF9", "E1B3", "E1B8", "8CFA", "8CFB", "8CFC", "8CFD", "8CFE", "D1D2", "8D40", "E1B6", "E1B5", "C1EB", "8D41", "8D42", "8D43", "E1B7", "8D44", "D4C0", "8D45", "E1B2", "8D46", "E1BA", "B0B6", "8D47", "8D48", "8D49", "8D4A", "E1B4", "8D4B", "BFF9", "8D4C", "E1B9", "8D4D", "8D4E", "E1BB", "8D4F", "8D50", "8D51", "8D52", "8D53", "8D54", "E1BE", "8D55", "8D56", "8D57", "8D58", "8D59", "8D5A", "E1BC", "8D5B", "8D5C", "8D5D", "8D5E", "8D5F", "8D60", "D6C5", "8D61", "8D62", "8D63", "8D64", "8D65", "8D66", "8D67", "CFBF", "8D68", "8D69", "E1BD", "E1BF", "C2CD", "8D6A", "B6EB", "8D6B", "D3F8", "8D6C", "8D6D", "C7CD", "8D6E", "8D6F", "B7E5", "8D70", "8D71", "8D72", "8D73", "8D74", "8D75", "8D76", "8D77", "8D78", "8D79", "BEFE", "8D7A", "8D7B", "8D7C", "8D7D", "8D7E", "8D80", "E1C0", "E1C1", "8D81", "8D82", "E1C7", "B3E7", "8D83", "8D84", "8D85", "8D86", "8D87", "8D88", "C6E9", "8D89", "8D8A", "8D8B", "8D8C", "8D8D", "B4DE", "8D8E", "D1C2", "8D8F", "8D90", "8D91", "8D92", "E1C8", "8D93", "8D94", "E1C6", "8D95", "8D96", "8D97", "8D98", "8D99", "E1C5", "8D9A", "E1C3", "E1C2", "8D9B", "B1C0", "8D9C", "8D9D", "8D9E", "D5B8", "E1C4", "8D9F", "8DA0", "8DA1", "8DA2", "8DA3", "E1CB", "8DA4", "8DA5", "8DA6", "8DA7", "8DA8", "8DA9", "8DAA", "8DAB", "E1CC", "E1CA", "8DAC", "8DAD", "8DAE", "8DAF", "8DB0", "8DB1", "8DB2", "8DB3", "EFFA", "8DB4", "8DB5", "E1D3", "E1D2", "C7B6", "8DB6", "8DB7", "8DB8", "8DB9", "8DBA", "8DBB", "8DBC", "8DBD", "8DBE", "8DBF", "8DC0", "E1C9", "8DC1", "8DC2", "E1CE", "8DC3", "E1D0", "8DC4", "8DC5", "8DC6", "8DC7", "8DC8", "8DC9", "8DCA", "8DCB", "8DCC", "8DCD", "8DCE", "E1D4", "8DCF", "E1D1", "E1CD", "8DD0", "8DD1", "E1CF", "8DD2", "8DD3", "8DD4", "8DD5", "E1D5", "8DD6", "8DD7", "8DD8", "8DD9", "8DDA", "8DDB", "8DDC", "8DDD", "8DDE", "8DDF", "8DE0", "8DE1", "8DE2", "E1D6", "8DE3", "8DE4", "8DE5", "8DE6", "8DE7", "8DE8", "8DE9", "8DEA", "8DEB", "8DEC", "8DED", "8DEE", "8DEF", "8DF0", "8DF1", "8DF2", "8DF3", "8DF4", "8DF5", "8DF6", "8DF7", "8DF8", "E1D7", "8DF9", "8DFA", "8DFB", "E1D8", "8DFC", "8DFD", "8DFE", "8E40", "8E41", "8E42", "8E43", "8E44", "8E45", "8E46", "8E47", "8E48", "8E49", "8E4A", "8E4B", "8E4C", "8E4D", "8E4E", "8E4F", "8E50", "8E51", "8E52", "8E53", "8E54", "8E55", "E1DA", "8E56", "8E57", "8E58", "8E59", "8E5A", "8E5B", "8E5C", "8E5D", "8E5E", "8E5F", "8E60", "8E61", "8E62", "E1DB", "8E63", "8E64", "8E65", "8E66", "8E67", "8E68", "8E69", "CEA1", "8E6A", "8E6B", "8E6C", "8E6D", "8E6E", "8E6F", "8E70", "8E71", "8E72", "8E73", "8E74", "8E75", "8E76", "E7DD", "8E77", "B4A8", "D6DD", "8E78", "8E79", "D1B2", "B3B2", "8E7A", "8E7B", "B9A4", "D7F3", "C7C9", "BEDE", "B9AE", "8E7C", "CED7", "8E7D", "8E7E", "B2EE", "DBCF", "8E80", "BCBA", "D2D1", "CBC8", "B0CD", "8E81", "8E82", "CFEF", "8E83", "8E84", "8E85", "8E86", "8E87", "D9E3", "BDED", "8E88", "8E89", "B1D2", "CAD0", "B2BC", "8E8A", "CBA7", "B7AB", "8E8B", "CAA6", "8E8C", "8E8D", "8E8E", "CFA3", "8E8F", "8E90", "E0F8", "D5CA", "E0FB", "8E91", "8E92", "E0FA", "C5C1", "CCFB", "8E93", "C1B1", "E0F9", "D6E3", "B2AF", "D6C4", "B5DB", "8E94", "8E95", "8E96", "8E97", "8E98", "8E99", "8E9A", "8E9B", "B4F8", "D6A1", "8E9C", "8E9D", "8E9E", "8E9F", "8EA0", "CFAF", "B0EF", "8EA1", "8EA2", "E0FC", "8EA3", "8EA4", "8EA5", "8EA6", "8EA7", "E1A1", "B3A3", "8EA8", "8EA9", "E0FD", "E0FE", "C3B1", "8EAA", "8EAB", "8EAC", "8EAD", "C3DD", "8EAE", "E1A2", "B7F9", "8EAF", "8EB0", "8EB1", "8EB2", "8EB3", "8EB4", "BBCF", "8EB5", "8EB6", "8EB7", "8EB8", "8EB9", "8EBA", "8EBB", "E1A3", "C4BB", "8EBC", "8EBD", "8EBE", "8EBF", "8EC0", "E1A4", "8EC1", "8EC2", "E1A5", "8EC3", "8EC4", "E1A6", "B4B1", "8EC5", "8EC6", "8EC7", "8EC8", "8EC9", "8ECA", "8ECB", "8ECC", "8ECD", "8ECE", "8ECF", "8ED0", "8ED1", "8ED2", "8ED3", "B8C9", "C6BD", "C4EA", "8ED4", "B2A2", "8ED5", "D0D2", "8ED6", "E7DB", "BBC3", "D3D7", "D3C4", "8ED7", "B9E3", "E2CF", "8ED8", "8ED9", "8EDA", "D7AF", "8EDB", "C7EC", "B1D3", "8EDC", "8EDD", "B4B2", "E2D1", "8EDE", "8EDF", "8EE0", "D0F2", "C2AE", "E2D0", "8EE1", "BFE2", "D3A6", "B5D7", "E2D2", "B5EA", "8EE2", "C3ED", "B8FD", "8EE3", "B8AE", "8EE4", "C5D3", "B7CF", "E2D4", "8EE5", "8EE6", "8EE7", "8EE8", "E2D3", "B6C8", "D7F9", "8EE9", "8EEA", "8EEB", "8EEC", "8EED", "CDA5", "8EEE", "8EEF", "8EF0", "8EF1", "8EF2", "E2D8", "8EF3", "E2D6", "CAFC", "BFB5", "D3B9", "E2D5", "8EF4", "8EF5", "8EF6", "8EF7", "E2D7", "8EF8", "8EF9", "8EFA", "8EFB", "8EFC", "8EFD", "8EFE", "8F40", "8F41", "8F42", "C1AE", "C0C8", "8F43", "8F44", "8F45", "8F46", "8F47", "8F48", "E2DB", "E2DA", "C0AA", "8F49", "8F4A", "C1CE", "8F4B", "8F4C", "8F4D", "8F4E", "E2DC", "8F4F", "8F50", "8F51", "8F52", "8F53", "8F54", "8F55", "8F56", "8F57", "8F58", "8F59", "8F5A", "E2DD", "8F5B", "E2DE", "8F5C", "8F5D", "8F5E", "8F5F", "8F60", "8F61", "8F62", "8F63", "8F64", "DBC8", "8F65", "D1D3", "CDA2", "8F66", "8F67", "BDA8", "8F68", "8F69", "8F6A", "DEC3", "D8A5", "BFAA", "DBCD", "D2EC", "C6FA", "C5AA", "8F6B", "8F6C", "8F6D", "DEC4", "8F6E", "B1D7", "DFAE", "8F6F", "8F70", "8F71", "CABD", "8F72", "DFB1", "8F73", "B9AD", "8F74", "D2FD", "8F75", "B8A5", "BAEB", "8F76", "8F77", "B3DA", "8F78", "8F79", "8F7A", "B5DC", "D5C5", "8F7B", "8F7C", "8F7D", "8F7E", "C3D6", "CFD2", "BBA1", "8F80", "E5F3", "E5F2", "8F81", "8F82", "E5F4", "8F83", "CDE4", "8F84", "C8F5", "8F85", "8F86", "8F87", "8F88", "8F89", "8F8A", "8F8B", "B5AF", "C7BF", "8F8C", "E5F6", "8F8D", "8F8E", "8F8F", "ECB0", "8F90", "8F91", "8F92", "8F93", "8F94", "8F95", "8F96", "8F97", "8F98", "8F99", "8F9A", "8F9B", "8F9C", "8F9D", "8F9E", "E5E6", "8F9F", "B9E9", "B5B1", "8FA0", "C2BC", "E5E8", "E5E7", "E5E9", "8FA1", "8FA2", "8FA3", "8FA4", "D2CD", "8FA5", "8FA6", "8FA7", "E1EA", "D0CE", "8FA8", "CDAE", "8FA9", "D1E5", "8FAA", "8FAB", "B2CA", "B1EB", "8FAC", "B1F2", "C5ED", "8FAD", "8FAE", "D5C3", "D3B0", "8FAF", "E1DC", "8FB0", "8FB1", "8FB2", "E1DD", "8FB3", "D2DB", "8FB4", "B3B9", "B1CB", "8FB5", "8FB6", "8FB7", "CDF9", "D5F7", "E1DE", "8FB8", "BEB6", "B4FD", "8FB9", "E1DF", "BADC", "E1E0", "BBB2", "C2C9", "E1E1", "8FBA", "8FBB", "8FBC", "D0EC", "8FBD", "CDBD", "8FBE", "8FBF", "E1E2", "8FC0", "B5C3", "C5C7", "E1E3", "8FC1", "8FC2", "E1E4", "8FC3", "8FC4", "8FC5", "8FC6", "D3F9", "8FC7", "8FC8", "8FC9", "8FCA", "8FCB", "8FCC", "E1E5", "8FCD", "D1AD", "8FCE", "8FCF", "E1E6", "CEA2", "8FD0", "8FD1", "8FD2", "8FD3", "8FD4", "8FD5", "E1E7", "8FD6", "B5C2", "8FD7", "8FD8", "8FD9", "8FDA", "E1E8", "BBD5", "8FDB", "8FDC", "8FDD", "8FDE", "8FDF", "D0C4", "E2E0", "B1D8", "D2E4", "8FE0", "8FE1", "E2E1", "8FE2", "8FE3", "BCC9", "C8CC", "8FE4", "E2E3", "ECFE", "ECFD", "DFAF", "8FE5", "8FE6", "8FE7", "E2E2", "D6BE", "CDFC", "C3A6", "8FE8", "8FE9", "8FEA", "E3C3", "8FEB", "8FEC", "D6D2", "E2E7", "8FED", "8FEE", "E2E8", "8FEF", "8FF0", "D3C7", "8FF1", "8FF2", "E2EC", "BFEC", "8FF3", "E2ED", "E2E5", "8FF4", "8FF5", "B3C0", "8FF6", "8FF7", "8FF8", "C4EE", "8FF9", "8FFA", "E2EE", "8FFB", "8FFC", "D0C3", "8FFD", "BAF6", "E2E9", "B7DE", "BBB3", "CCAC", "CBCB", "E2E4", "E2E6", "E2EA", "E2EB", "8FFE", "9040", "9041", "E2F7", "9042", "9043", "E2F4", "D4F5", "E2F3", "9044", "9045", "C5AD", "9046", "D5FA", "C5C2", "B2C0", "9047", "9048", "E2EF", "9049", "E2F2", "C1AF", "CBBC", "904A", "904B", "B5A1", "E2F9", "904C", "904D", "904E", "BCB1", "E2F1", "D0D4", "D4B9", "E2F5", "B9D6", "E2F6", "904F", "9050", "9051", "C7D3", "9052", "9053", "9054", "9055", "9056", "E2F0", "9057", "9058", "9059", "905A", "905B", "D7DC", "EDA1", "905C", "905D", "E2F8", "905E", "EDA5", "E2FE", "CAD1", "905F", "9060", "9061", "9062", "9063", "9064", "9065", "C1B5", "9066", "BBD0", "9067", "9068", "BFD6", "9069", "BAE3", "906A", "906B", "CBA1", "906C", "906D", "906E", "EDA6", "EDA3", "906F", "9070", "EDA2", "9071", "9072", "9073", "9074", "BBD6", "EDA7", "D0F4", "9075", "9076", "EDA4", "BADE", "B6F7", "E3A1", "B6B2", "CCF1", "B9A7", "9077", "CFA2", "C7A1", "9078", "9079", "BFD2", "907A", "907B", "B6F1", "907C", "E2FA", "E2FB", "E2FD", "E2FC", "C4D5", "E3A2", "907D", "D3C1", "907E", "9080", "9081", "E3A7", "C7C4", "9082", "9083", "9084", "9085", "CFA4", "9086", "9087", "E3A9", "BAB7", "9088", "9089", "908A", "908B", "E3A8", "908C", "BBDA", "908D", "E3A3", "908E", "908F", "9090", "E3A4", "E3AA", "9091", "E3A6", "9092", "CEF2", "D3C6", "9093", "9094", "BBBC", "9095", "9096", "D4C3", "9097", "C4FA", "9098", "9099", "EDA8", "D0FC", "E3A5", "909A", "C3F5", "909B", "E3AD", "B1AF", "909C", "E3B2", "909D", "909E", "909F", "BCC2", "90A0", "90A1", "E3AC", "B5BF", "90A2", "90A3", "90A4", "90A5", "90A6", "90A7", "90A8", "90A9", "C7E9", "E3B0", "90AA", "90AB", "90AC", "BEAA", "CDEF", "90AD", "90AE", "90AF", "90B0", "90B1", "BBF3", "90B2", "90B3", "90B4", "CCE8", "90B5", "90B6", "E3AF", "90B7", "E3B1", "90B8", "CFA7", "E3AE", "90B9", "CEA9", "BBDD", "90BA", "90BB", "90BC", "90BD", "90BE", "B5EB", "BEE5", "B2D2", "B3CD", "90BF", "B1B9", "E3AB", "B2D1", "B5AC", "B9DF", "B6E8", "90C0", "90C1", "CFEB", "E3B7", "90C2", "BBCC", "90C3", "90C4", "C8C7", "D0CA", "90C5", "90C6", "90C7", "90C8", "90C9", "E3B8", "B3EE", "90CA", "90CB", "90CC", "90CD", "EDA9", "90CE", "D3FA", "D3E4", "90CF", "90D0", "90D1", "EDAA", "E3B9", "D2E2", "90D2", "90D3", "90D4", "90D5", "90D6", "E3B5", "90D7", "90D8", "90D9", "90DA", "D3DE", "90DB", "90DC", "90DD", "90DE", "B8D0", "E3B3", "90DF", "90E0", "E3B6", "B7DF", "90E1", "E3B4", "C0A2", "90E2", "90E3", "90E4", "E3BA", "90E5", "90E6", "90E7", "90E8", "90E9", "90EA", "90EB", "90EC", "90ED", "90EE", "90EF", "90F0", "90F1", "90F2", "90F3", "90F4", "90F5", "90F6", "90F7", "D4B8", "90F8", "90F9", "90FA", "90FB", "90FC", "90FD", "90FE", "9140", "B4C8", "9141", "E3BB", "9142", "BBC5", "9143", "C9F7", "9144", "9145", "C9E5", "9146", "9147", "9148", "C4BD", "9149", "914A", "914B", "914C", "914D", "914E", "914F", "EDAB", "9150", "9151", "9152", "9153", "C2FD", "9154", "9155", "9156", "9157", "BBDB", "BFAE", "9158", "9159", "915A", "915B", "915C", "915D", "915E", "CEBF", "915F", "9160", "9161", "9162", "E3BC", "9163", "BFB6", "9164", "9165", "9166", "9167", "9168", "9169", "916A", "916B", "916C", "916D", "916E", "916F", "9170", "9171", "9172", "9173", "9174", "9175", "9176", "B1EF", "9177", "9178", "D4F7", "9179", "917A", "917B", "917C", "917D", "E3BE", "917E", "9180", "9181", "9182", "9183", "9184", "9185", "9186", "EDAD", "9187", "9188", "9189", "918A", "918B", "918C", "918D", "918E", "918F", "E3BF", "BAA9", "EDAC", "9190", "9191", "E3BD", "9192", "9193", "9194", "9195", "9196", "9197", "9198", "9199", "919A", "919B", "E3C0", "919C", "919D", "919E", "919F", "91A0", "91A1", "BAB6", "91A2", "91A3", "91A4", "B6AE", "91A5", "91A6", "91A7", "91A8", "91A9", "D0B8", "91AA", "B0C3", "EDAE", "91AB", "91AC", "91AD", "91AE", "91AF", "EDAF", "C0C1", "91B0", "E3C1", "91B1", "91B2", "91B3", "91B4", "91B5", "91B6", "91B7", "91B8", "91B9", "91BA", "91BB", "91BC", "91BD", "91BE", "91BF", "91C0", "91C1", "C5B3", "91C2", "91C3", "91C4", "91C5", "91C6", "91C7", "91C8", "91C9", "91CA", "91CB", "91CC", "91CD", "91CE", "91CF", "E3C2", "91D0", "91D1", "91D2", "91D3", "91D4", "91D5", "91D6", "91D7", "91D8", "DCB2", "91D9", "91DA", "91DB", "91DC", "91DD", "91DE", "EDB0", "91DF", "B8EA", "91E0", "CEEC", "EAA7", "D0E7", "CAF9", "C8D6", "CFB7", "B3C9", "CED2", "BDE4", "91E1", "91E2", "E3DE", "BBF2", "EAA8", "D5BD", "91E3", "C6DD", "EAA9", "91E4", "91E5", "91E6", "EAAA", "91E7", "EAAC", "EAAB", "91E8", "EAAE", "EAAD", "91E9", "91EA", "91EB", "91EC", "BDD8", "91ED", "EAAF", "91EE", "C2BE", "91EF", "91F0", "91F1", "91F2", "B4C1", "B4F7", "91F3", "91F4", "BBA7", "91F5", "91F6", "91F7", "91F8", "91F9", "ECE6", "ECE5", "B7BF", "CBF9", "B1E2", "91FA", "ECE7", "91FB", "91FC", "91FD", "C9C8", "ECE8", "ECE9", "91FE", "CAD6", "DED0", "B2C5", "D4FA", "9240", "9241", "C6CB", "B0C7", "B4F2", "C8D3", "9242", "9243", "9244", "CDD0", "9245", "9246", "BFB8", "9247", "9248", "9249", "924A", "924B", "924C", "924D", "BFDB", "924E", "924F", "C7A4", "D6B4", "9250", "C0A9", "DED1", "C9A8", "D1EF", "C5A4", "B0E7", "B3B6", "C8C5", "9251", "9252", "B0E2", "9253", "9254", "B7F6", "9255", "9256", "C5FA", "9257", "9258", "B6F3", "9259", "D5D2", "B3D0", "BCBC", "925A", "925B", "925C", "B3AD", "925D", "925E", "925F", "9260", "BEF1", "B0D1", "9261", "9262", "9263", "9264", "9265", "9266", "D2D6", "CAE3", "D7A5", "9267", "CDB6", "B6B6", "BFB9", "D5DB", "9268", "B8A7", "C5D7", "9269", "926A", "926B", "DED2", "BFD9", "C2D5", "C7C0", "926C", "BBA4", "B1A8", "926D", "926E", "C5EA", "926F", "9270", "C5FB", "CCA7", "9271", "9272", "9273", "9274", "B1A7", "9275", "9276", "9277", "B5D6", "9278", "9279", "927A", "C4A8", "927B", "DED3", "D1BA", "B3E9", "927C", "C3F2", "927D", "927E", "B7F7", "9280", "D6F4", "B5A3", "B2F0", "C4B4", "C4E9", "C0AD", "DED4", "9281", "B0E8", "C5C4", "C1E0", "9282", "B9D5", "9283", "BEDC", "CDD8", "B0CE", "9284", "CDCF", "DED6", "BED0", "D7BE", "DED5", "D5D0", "B0DD", "9285", "9286", "C4E2", "9287", "9288", "C2A3", "BCF0", "9289", "D3B5", "C0B9", "C5A1", "B2A6", "D4F1", "928A", "928B", "C0A8", "CAC3", "DED7", "D5FC", "928C", "B9B0", "928D", "C8AD", "CBA9", "928E", "DED9", "BFBD", "928F", "9290", "9291", "9292", "C6B4", "D7A7", "CAB0", "C4C3", "9293", "B3D6", "B9D2", "9294", "9295", "9296", "9297", "D6B8", "EAFC", "B0B4", "9298", "9299", "929A", "929B", "BFE6", "929C", "929D", "CCF4", "929E", "929F", "92A0", "92A1", "CDDA", "92A2", "92A3", "92A4", "D6BF", "C2CE", "92A5", "CECE", "CCA2", "D0AE", "C4D3", "B5B2", "DED8", "D5F5", "BCB7", "BBD3", "92A6", "92A7", "B0A4", "92A8", "C5B2", "B4EC", "92A9", "92AA", "92AB", "D5F1", "92AC", "92AD", "EAFD", "92AE", "92AF", "92B0", "92B1", "92B2", "92B3", "DEDA", "CDA6", "92B4", "92B5", "CDEC", "92B6", "92B7", "92B8", "92B9", "CEE6", "DEDC", "92BA", "CDB1", "C0A6", "92BB", "92BC", "D7BD", "92BD", "DEDB", "B0C6", "BAB4", "C9D3", "C4F3", "BEE8", "92BE", "92BF", "92C0", "92C1", "B2B6", "92C2", "92C3", "92C4", "92C5", "92C6", "92C7", "92C8", "92C9", "C0CC", "CBF0", "92CA", "BCF1", "BBBB", "B5B7", "92CB", "92CC", "92CD", "C5F5", "92CE", "DEE6", "92CF", "92D0", "92D1", "DEE3", "BEDD", "92D2", "92D3", "DEDF", "92D4", "92D5", "92D6", "92D7", "B4B7", "BDDD", "92D8", "92D9", "DEE0", "C4ED", "92DA", "92DB", "92DC", "92DD", "CFC6", "92DE", "B5E0", "92DF", "92E0", "92E1", "92E2", "B6DE", "CADA", "B5F4", "DEE5", "92E3", "D5C6", "92E4", "DEE1", "CCCD", "C6FE", "92E5", "C5C5", "92E6", "92E7", "92E8", "D2B4", "92E9", "BEF2", "92EA", "92EB", "92EC", "92ED", "92EE", "92EF", "92F0", "C2D3", "92F1", "CCBD", "B3B8", "92F2", "BDD3", "92F3", "BFD8", "CDC6", "D1DA", "B4EB", "92F4", "DEE4", "DEDD", "DEE7", "92F5", "EAFE", "92F6", "92F7", "C2B0", "DEE2", "92F8", "92F9", "D6C0", "B5A7", "92FA", "B2F4", "92FB", "DEE8", "92FC", "DEF2", "92FD", "92FE", "9340", "9341", "9342", "DEED", "9343", "DEF1", "9344", "9345", "C8E0", "9346", "9347", "9348", "D7E1", "DEEF", "C3E8", "CCE1", "9349", "B2E5", "934A", "934B", "934C", "D2BE", "934D", "934E", "934F", "9350", "9351", "9352", "9353", "DEEE", "9354", "DEEB", "CED5", "9355", "B4A7", "9356", "9357", "9358", "9359", "935A", "BFAB", "BEBE", "935B", "935C", "BDD2", "935D", "935E", "935F", "9360", "DEE9", "9361", "D4AE", "9362", "DEDE", "9363", "DEEA", "9364", "9365", "9366", "9367", "C0BF", "9368", "DEEC", "B2F3", "B8E9", "C2A7", "9369", "936A", "BDC1", "936B", "936C", "936D", "936E", "936F", "DEF5", "DEF8", "9370", "9371", "B2AB", "B4A4", "9372", "9373", "B4EA", "C9A6", "9374", "9375", "9376", "9377", "9378", "9379", "DEF6", "CBD1", "937A", "B8E3", "937B", "DEF7", "DEFA", "937C", "937D", "937E", "9380", "DEF9", "9381", "9382", "9383", "CCC2", "9384", "B0E1", "B4EE", "9385", "9386", "9387", "9388", "9389", "938A", "E5BA", "938B", "938C", "938D", "938E", "938F", "D0AF", "9390", "9391", "B2EB", "9392", "EBA1", "9393", "DEF4", "9394", "9395", "C9E3", "DEF3", "B0DA", "D2A1", "B1F7", "9396", "CCAF", "9397", "9398", "9399", "939A", "939B", "939C", "939D", "DEF0", "939E", "CBA4", "939F", "93A0", "93A1", "D5AA", "93A2", "93A3", "93A4", "93A5", "93A6", "DEFB", "93A7", "93A8", "93A9", "93AA", "93AB", "93AC", "93AD", "93AE", "B4DD", "93AF", "C4A6", "93B0", "93B1", "93B2", "DEFD", "93B3", "93B4", "93B5", "93B6", "93B7", "93B8", "93B9", "93BA", "93BB", "93BC", "C3FE", "C4A1", "DFA1", "93BD", "93BE", "93BF", "93C0", "93C1", "93C2", "93C3", "C1CC", "93C4", "DEFC", "BEEF", "93C5", "C6B2", "93C6", "93C7", "93C8", "93C9", "93CA", "93CB", "93CC", "93CD", "93CE", "B3C5", "C8F6", "93CF", "93D0", "CBBA", "DEFE", "93D1", "93D2", "DFA4", "93D3", "93D4", "93D5", "93D6", "D7B2", "93D7", "93D8", "93D9", "93DA", "93DB", "B3B7", "93DC", "93DD", "93DE", "93DF", "C1C3", "93E0", "93E1", "C7CB", "B2A5", "B4E9", "93E2", "D7AB", "93E3", "93E4", "93E5", "93E6", "C4EC", "93E7", "DFA2", "DFA3", "93E8", "DFA5", "93E9", "BAB3", "93EA", "93EB", "93EC", "DFA6", "93ED", "C0DE", "93EE", "93EF", "C9C3", "93F0", "93F1", "93F2", "93F3", "93F4", "93F5", "93F6", "B2D9", "C7E6", "93F7", "DFA7", "93F8", "C7DC", "93F9", "93FA", "93FB", "93FC", "DFA8", "EBA2", "93FD", "93FE", "9440", "9441", "9442", "CBD3", "9443", "9444", "9445", "DFAA", "9446", "DFA9", "9447", "B2C1", "9448", "9449", "944A", "944B", "944C", "944D", "944E", "944F", "9450", "9451", "9452", "9453", "9454", "9455", "9456", "9457", "9458", "9459", "945A", "945B", "945C", "945D", "945E", "945F", "9460", "C5CA", "9461", "9462", "9463", "9464", "9465", "9466", "9467", "9468", "DFAB", "9469", "946A", "946B", "946C", "946D", "946E", "946F", "9470", "D4DC", "9471", "9472", "9473", "9474", "9475", "C8C1", "9476", "9477", "9478", "9479", "947A", "947B", "947C", "947D", "947E", "9480", "9481", "9482", "DFAC", "9483", "9484", "9485", "9486", "9487", "BEF0", "9488", "9489", "DFAD", "D6A7", "948A", "948B", "948C", "948D", "EAB7", "EBB6", "CAD5", "948E", "D8FC", "B8C4", "948F", "B9A5", "9490", "9491", "B7C5", "D5FE", "9492", "9493", "9494", "9495", "9496", "B9CA", "9497", "9498", "D0A7", "F4CD", "9499", "949A", "B5D0", "949B", "949C", "C3F4", "949D", "BEC8", "949E", "949F", "94A0", "EBB7", "B0BD", "94A1", "94A2", "BDCC", "94A3", "C1B2", "94A4", "B1D6", "B3A8", "94A5", "94A6", "94A7", "B8D2", "C9A2", "94A8", "94A9", "B6D8", "94AA", "94AB", "94AC", "94AD", "EBB8", "BEB4", "94AE", "94AF", "94B0", "CAFD", "94B1", "C7C3", "94B2", "D5FB", "94B3", "94B4", "B7F3", "94B5", "94B6", "94B7", "94B8", "94B9", "94BA", "94BB", "94BC", "94BD", "94BE", "94BF", "94C0", "94C1", "94C2", "94C3", "CEC4", "94C4", "94C5", "94C6", "D5AB", "B1F3", "94C7", "94C8", "94C9", "ECB3", "B0DF", "94CA", "ECB5", "94CB", "94CC", "94CD", "B6B7", "94CE", "C1CF", "94CF", "F5FA", "D0B1", "94D0", "94D1", "D5E5", "94D2", "CED3", "94D3", "94D4", "BDEF", "B3E2", "94D5", "B8AB", "94D6", "D5B6", "94D7", "EDBD", "94D8", "B6CF", "94D9", "CBB9", "D0C2", "94DA", "94DB", "94DC", "94DD", "94DE", "94DF", "94E0", "94E1", "B7BD", "94E2", "94E3", "ECB6", "CAA9", "94E4", "94E5", "94E6", "C5D4", "94E7", "ECB9", "ECB8", "C2C3", "ECB7", "94E8", "94E9", "94EA", "94EB", "D0FD", "ECBA", "94EC", "ECBB", "D7E5", "94ED", "94EE", "ECBC", "94EF", "94F0", "94F1", "ECBD", "C6EC", "94F2", "94F3", "94F4", "94F5", "94F6", "94F7", "94F8", "94F9", "CEDE", "94FA", "BCC8", "94FB", "94FC", "C8D5", "B5A9", "BEC9", "D6BC", "D4E7", "94FD", "94FE", "D1AE", "D0F1", "EAB8", "EAB9", "EABA", "BAB5", "9540", "9541", "9542", "9543", "CAB1", "BFF5", "9544", "9545", "CDFA", "9546", "9547", "9548", "9549", "954A", "EAC0", "954B", "B0BA", "EABE", "954C", "954D", "C0A5", "954E", "954F", "9550", "EABB", "9551", "B2FD", "9552", "C3F7", "BBE8", "9553", "9554", "9555", "D2D7", "CEF4", "EABF", "9556", "9557", "9558", "EABC", "9559", "955A", "955B", "EAC3", "955C", "D0C7", "D3B3", "955D", "955E", "955F", "9560", "B4BA", "9561", "C3C1", "D7F2", "9562", "9563", "9564", "9565", "D5D1", "9566", "CAC7", "9567", "EAC5", "9568", "9569", "EAC4", "EAC7", "EAC6", "956A", "956B", "956C", "956D", "956E", "D6E7", "956F", "CFD4", "9570", "9571", "EACB", "9572", "BBCE", "9573", "9574", "9575", "9576", "9577", "9578", "9579", "BDFA", "C9CE", "957A", "957B", "EACC", "957C", "957D", "C9B9", "CFFE", "EACA", "D4CE", "EACD", "EACF", "957E", "9580", "CDED", "9581", "9582", "9583", "9584", "EAC9", "9585", "EACE", "9586", "9587", "CEEE", "9588", "BBDE", "9589", "B3BF", "958A", "958B", "958C", "958D", "958E", "C6D5", "BEB0", "CEFA", "958F", "9590", "9591", "C7E7", "9592", "BEA7", "EAD0", "9593", "9594", "D6C7", "9595", "9596", "9597", "C1C0", "9598", "9599", "959A", "D4DD", "959B", "EAD1", "959C", "959D", "CFBE", "959E", "959F", "95A0", "95A1", "EAD2", "95A2", "95A3", "95A4", "95A5", "CAEE", "95A6", "95A7", "95A8", "95A9", "C5AF", "B0B5", "95AA", "95AB", "95AC", "95AD", "95AE", "EAD4", "95AF", "95B0", "95B1", "95B2", "95B3", "95B4", "95B5", "95B6", "95B7", "EAD3", "F4DF", "95B8", "95B9", "95BA", "95BB", "95BC", "C4BA", "95BD", "95BE", "95BF", "95C0", "95C1", "B1A9", "95C2", "95C3", "95C4", "95C5", "E5DF", "95C6", "95C7", "95C8", "95C9", "EAD5", "95CA", "95CB", "95CC", "95CD", "95CE", "95CF", "95D0", "95D1", "95D2", "95D3", "95D4", "95D5", "95D6", "95D7", "95D8", "95D9", "95DA", "95DB", "95DC", "95DD", "95DE", "95DF", "95E0", "95E1", "95E2", "95E3", "CAEF", "95E4", "EAD6", "EAD7", "C6D8", "95E5", "95E6", "95E7", "95E8", "95E9", "95EA", "95EB", "95EC", "EAD8", "95ED", "95EE", "EAD9", "95EF", "95F0", "95F1", "95F2", "95F3", "95F4", "D4BB", "95F5", "C7FA", "D2B7", "B8FC", "95F6", "95F7", "EAC2", "95F8", "B2DC", "95F9", "95FA", "C2FC", "95FB", "D4F8", "CCE6", "D7EE", "95FC", "95FD", "95FE", "9640", "9641", "9642", "9643", "D4C2", "D3D0", "EBC3", "C5F3", "9644", "B7FE", "9645", "9646", "EBD4", "9647", "9648", "9649", "CBB7", "EBDE", "964A", "C0CA", "964B", "964C", "964D", "CDFB", "964E", "B3AF", "964F", "C6DA", "9650", "9651", "9652", "9653", "9654", "9655", "EBFC", "9656", "C4BE", "9657", "CEB4", "C4A9", "B1BE", "D4FD", "9658", "CAF5", "9659", "D6EC", "965A", "965B", "C6D3", "B6E4", "965C", "965D", "965E", "965F", "BBFA", "9660", "9661", "D0E0", "9662", "9663", "C9B1", "9664", "D4D3", "C8A8", "9665", "9666", "B8CB", "9667", "E8BE", "C9BC", "9668", "9669", "E8BB", "966A", "C0EE", "D0D3", "B2C4", "B4E5", "966B", "E8BC", "966C", "966D", "D5C8", "966E", "966F", "9670", "9671", "9672", "B6C5", "9673", "E8BD", "CAF8", "B8DC", "CCF5", "9674", "9675", "9676", "C0B4", "9677", "9678", "D1EE", "E8BF", "E8C2", "9679", "967A", "BABC", "967B", "B1AD", "BDDC", "967C", "EABD", "E8C3", "967D", "E8C6", "967E", "E8CB", "9680", "9681", "9682", "9683", "E8CC", "9684", "CBC9", "B0E5", "9685", "BCAB", "9686", "9687", "B9B9", "9688", "9689", "E8C1", "968A", "CDF7", "968B", "E8CA", "968C", "968D", "968E", "968F", "CEF6", "9690", "9691", "9692", "9693", "D5ED", "9694", "C1D6", "E8C4", "9695", "C3B6", "9696", "B9FB", "D6A6", "E8C8", "9697", "9698", "9699", "CAE0", "D4E6", "969A", "E8C0", "969B", "E8C5", "E8C7", "969C", "C7B9", "B7E3", "969D", "E8C9", "969E", "BFDD", "E8D2", "969F", "96A0", "E8D7", "96A1", "E8D5", "BCDC", "BCCF", "E8DB", "96A2", "96A3", "96A4", "96A5", "96A6", "96A7", "96A8", "96A9", "E8DE", "96AA", "E8DA", "B1FA", "96AB", "96AC", "96AD", "96AE", "96AF", "96B0", "96B1", "96B2", "96B3", "96B4", "B0D8", "C4B3", "B8CC", "C6E2", "C8BE", "C8E1", "96B5", "96B6", "96B7", "E8CF", "E8D4", "E8D6", "96B8", "B9F1", "E8D8", "D7F5", "96B9", "C4FB", "96BA", "E8DC", "96BB", "96BC", "B2E9", "96BD", "96BE", "96BF", "E8D1", "96C0", "96C1", "BCED", "96C2", "96C3", "BFC2", "E8CD", "D6F9", "96C4", "C1F8", "B2F1", "96C5", "96C6", "96C7", "96C8", "96C9", "96CA", "96CB", "96CC", "E8DF", "96CD", "CAC1", "E8D9", "96CE", "96CF", "96D0", "96D1", "D5A4", "96D2", "B1EA", "D5BB", "E8CE", "E8D0", "B6B0", "E8D3", "96D3", "E8DD", "C0B8", "96D4", "CAF7", "96D5", "CBA8", "96D6", "96D7", "C6DC", "C0F5", "96D8", "96D9", "96DA", "96DB", "96DC", "E8E9", "96DD", "96DE", "96DF", "D0A3", "96E0", "96E1", "96E2", "96E3", "96E4", "96E5", "96E6", "E8F2", "D6EA", "96E7", "96E8", "96E9", "96EA", "96EB", "96EC", "96ED", "E8E0", "E8E1", "96EE", "96EF", "96F0", "D1F9", "BACB", "B8F9", "96F1", "96F2", "B8F1", "D4D4", "E8EF", "96F3", "E8EE", "E8EC", "B9F0", "CCD2", "E8E6", "CEA6", "BFF2", "96F4", "B0B8", "E8F1", "E8F0", "96F5", "D7C0", "96F6", "E8E4", "96F7", "CDA9", "C9A3", "96F8", "BBB8", "BDDB", "E8EA", "96F9", "96FA", "96FB", "96FC", "96FD", "96FE", "9740", "9741", "9742", "9743", "E8E2", "E8E3", "E8E5", "B5B5", "E8E7", "C7C5", "E8EB", "E8ED", "BDB0", "D7AE", "9744", "E8F8", "9745", "9746", "9747", "9748", "9749", "974A", "974B", "974C", "E8F5", "974D", "CDB0", "E8F6", "974E", "974F", "9750", "9751", "9752", "9753", "9754", "9755", "9756", "C1BA", "9757", "E8E8", "9758", "C3B7", "B0F0", "9759", "975A", "975B", "975C", "975D", "975E", "975F", "9760", "E8F4", "9761", "9762", "9763", "E8F7", "9764", "9765", "9766", "B9A3", "9767", "9768", "9769", "976A", "976B", "976C", "976D", "976E", "976F", "9770", "C9D2", "9771", "9772", "9773", "C3CE", "CEE0", "C0E6", "9774", "9775", "9776", "9777", "CBF3", "9778", "CCDD", "D0B5", "9779", "977A", "CAE1", "977B", "E8F3", "977C", "977D", "977E", "9780", "9781", "9782", "9783", "9784", "9785", "9786", "BCEC", "9787", "E8F9", "9788", "9789", "978A", "978B", "978C", "978D", "C3DE", "978E", "C6E5", "978F", "B9F7", "9790", "9791", "9792", "9793", "B0F4", "9794", "9795", "D7D8", "9796", "9797", "BCAC", "9798", "C5EF", "9799", "979A", "979B", "979C", "979D", "CCC4", "979E", "979F", "E9A6", "97A0", "97A1", "97A2", "97A3", "97A4", "97A5", "97A6", "97A7", "97A8", "97A9", "C9AD", "97AA", "E9A2", "C0E2", "97AB", "97AC", "97AD", "BFC3", "97AE", "97AF", "97B0", "E8FE", "B9D7", "97B1", "E8FB", "97B2", "97B3", "97B4", "97B5", "E9A4", "97B6", "97B7", "97B8", "D2CE", "97B9", "97BA", "97BB", "97BC", "97BD", "E9A3", "97BE", "D6B2", "D7B5", "97BF", "E9A7", "97C0", "BDB7", "97C1", "97C2", "97C3", "97C4", "97C5", "97C6", "97C7", "97C8", "97C9", "97CA", "97CB", "97CC", "E8FC", "E8FD", "97CD", "97CE", "97CF", "E9A1", "97D0", "97D1", "97D2", "97D3", "97D4", "97D5", "97D6", "97D7", "CDD6", "97D8", "97D9", "D2AC", "97DA", "97DB", "97DC", "E9B2", "97DD", "97DE", "97DF", "97E0", "E9A9", "97E1", "97E2", "97E3", "B4AA", "97E4", "B4BB", "97E5", "97E6", "E9AB", "97E7", "97E8", "97E9", "97EA", "97EB", "97EC", "97ED", "97EE", "97EF", "97F0", "97F1", "97F2", "97F3", "97F4", "97F5", "97F6", "97F7", "D0A8", "97F8", "97F9", "E9A5", "97FA", "97FB", "B3FE", "97FC", "97FD", "E9AC", "C0E3", "97FE", "E9AA", "9840", "9841", "E9B9", "9842", "9843", "E9B8", "9844", "9845", "9846", "9847", "E9AE", "9848", "9849", "E8FA", "984A", "984B", "E9A8", "984C", "984D", "984E", "984F", "9850", "BFAC", "E9B1", "E9BA", "9851", "9852", "C2A5", "9853", "9854", "9855", "E9AF", "9856", "B8C5", "9857", "E9AD", "9858", "D3DC", "E9B4", "E9B5", "E9B7", "9859", "985A", "985B", "E9C7", "985C", "985D", "985E", "985F", "9860", "9861", "C0C6", "E9C5", "9862", "9863", "E9B0", "9864", "9865", "E9BB", "B0F1", "9866", "9867", "9868", "9869", "986A", "986B", "986C", "986D", "986E", "986F", "E9BC", "D5A5", "9870", "9871", "E9BE", "9872", "E9BF", "9873", "9874", "9875", "E9C1", "9876", "9877", "C1F1", "9878", "9879", "C8B6", "987A", "987B", "987C", "E9BD", "987D", "987E", "9880", "9881", "9882", "E9C2", "9883", "9884", "9885", "9886", "9887", "9888", "9889", "988A", "E9C3", "988B", "E9B3", "988C", "E9B6", "988D", "BBB1", "988E", "988F", "9890", "E9C0", "9891", "9892", "9893", "9894", "9895", "9896", "BCF7", "9897", "9898", "9899", "E9C4", "E9C6", "989A", "989B", "989C", "989D", "989E", "989F", "98A0", "98A1", "98A2", "98A3", "98A4", "98A5", "E9CA", "98A6", "98A7", "98A8", "98A9", "E9CE", "98AA", "98AB", "98AC", "98AD", "98AE", "98AF", "98B0", "98B1", "98B2", "98B3", "B2DB", "98B4", "E9C8", "98B5", "98B6", "98B7", "98B8", "98B9", "98BA", "98BB", "98BC", "98BD", "98BE", "B7AE", "98BF", "98C0", "98C1", "98C2", "98C3", "98C4", "98C5", "98C6", "98C7", "98C8", "98C9", "98CA", "E9CB", "E9CC", "98CB", "98CC", "98CD", "98CE", "98CF", "98D0", "D5C1", "98D1", "C4A3", "98D2", "98D3", "98D4", "98D5", "98D6", "98D7", "E9D8", "98D8", "BAE1", "98D9", "98DA", "98DB", "98DC", "E9C9", "98DD", "D3A3", "98DE", "98DF", "98E0", "E9D4", "98E1", "98E2", "98E3", "98E4", "98E5", "98E6", "98E7", "E9D7", "E9D0", "98E8", "98E9", "98EA", "98EB", "98EC", "E9CF", "98ED", "98EE", "C7C1", "98EF", "98F0", "98F1", "98F2", "98F3", "98F4", "98F5", "98F6", "E9D2", "98F7", "98F8", "98F9", "98FA", "98FB", "98FC", "98FD", "E9D9", "B3C8", "98FE", "E9D3", "9940", "9941", "9942", "9943", "9944", "CFF0", "9945", "9946", "9947", "E9CD", "9948", "9949", "994A", "994B", "994C", "994D", "994E", "994F", "9950", "9951", "9952", "B3F7", "9953", "9954", "9955", "9956", "9957", "9958", "9959", "E9D6", "995A", "995B", "E9DA", "995C", "995D", "995E", "CCB4", "995F", "9960", "9961", "CFAD", "9962", "9963", "9964", "9965", "9966", "9967", "9968", "9969", "996A", "E9D5", "996B", "E9DC", "E9DB", "996C", "996D", "996E", "996F", "9970", "E9DE", "9971", "9972", "9973", "9974", "9975", "9976", "9977", "9978", "E9D1", "9979", "997A", "997B", "997C", "997D", "997E", "9980", "9981", "E9DD", "9982", "E9DF", "C3CA", "9983", "9984", "9985", "9986", "9987", "9988", "9989", "998A", "998B", "998C", "998D", "998E", "998F", "9990", "9991", "9992", "9993", "9994", "9995", "9996", "9997", "9998", "9999", "999A", "999B", "999C", "999D", "999E", "999F", "99A0", "99A1", "99A2", "99A3", "99A4", "99A5", "99A6", "99A7", "99A8", "99A9", "99AA", "99AB", "99AC", "99AD", "99AE", "99AF", "99B0", "99B1", "99B2", "99B3", "99B4", "99B5", "99B6", "99B7", "99B8", "99B9", "99BA", "99BB", "99BC", "99BD", "99BE", "99BF", "99C0", "99C1", "99C2", "99C3", "99C4", "99C5", "99C6", "99C7", "99C8", "99C9", "99CA", "99CB", "99CC", "99CD", "99CE", "99CF", "99D0", "99D1", "99D2", "99D3", "99D4", "99D5", "99D6", "99D7", "99D8", "99D9", "99DA", "99DB", "99DC", "99DD", "99DE", "99DF", "99E0", "99E1", "99E2", "99E3", "99E4", "99E5", "99E6", "99E7", "99E8", "99E9", "99EA", "99EB", "99EC", "99ED", "99EE", "99EF", "99F0", "99F1", "99F2", "99F3", "99F4", "99F5", "C7B7", "B4CE", "BBB6", "D0C0", "ECA3", "99F6", "99F7", "C5B7", "99F8", "99F9", "99FA", "99FB", "99FC", "99FD", "99FE", "9A40", "9A41", "9A42", "D3FB", "9A43", "9A44", "9A45", "9A46", "ECA4", "9A47", "ECA5", "C6DB", "9A48", "9A49", "9A4A", "BFEE", "9A4B", "9A4C", "9A4D", "9A4E", "ECA6", "9A4F", "9A50", "ECA7", "D0AA", "9A51", "C7B8", "9A52", "9A53", "B8E8", "9A54", "9A55", "9A56", "9A57", "9A58", "9A59", "9A5A", "9A5B", "9A5C", "9A5D", "9A5E", "9A5F", "ECA8", "9A60", "9A61", "9A62", "9A63", "9A64", "9A65", "9A66", "9A67", "D6B9", "D5FD", "B4CB", "B2BD", "CEE4", "C6E7", "9A68", "9A69", "CDE1", "9A6A", "9A6B", "9A6C", "9A6D", "9A6E", "9A6F", "9A70", "9A71", "9A72", "9A73", "9A74", "9A75", "9A76", "9A77", "B4F5", "9A78", "CBC0", "BCDF", "9A79", "9A7A", "9A7B", "9A7C", "E9E2", "E9E3", "D1EA", "E9E5", "9A7D", "B4F9", "E9E4", "9A7E", "D1B3", "CAE2", "B2D0", "9A80", "E9E8", "9A81", "9A82", "9A83", "9A84", "E9E6", "E9E7", "9A85", "9A86", "D6B3", "9A87", "9A88", "9A89", "E9E9", "E9EA", "9A8A", "9A8B", "9A8C", "9A8D", "9A8E", "E9EB", "9A8F", "9A90", "9A91", "9A92", "9A93", "9A94", "9A95", "9A96", "E9EC", "9A97", "9A98", "9A99", "9A9A", "9A9B", "9A9C", "9A9D", "9A9E", "ECAF", "C5B9", "B6CE", "9A9F", "D2F3", "9AA0", "9AA1", "9AA2", "9AA3", "9AA4", "9AA5", "9AA6", "B5EE", "9AA7", "BBD9", "ECB1", "9AA8", "9AA9", "D2E3", "9AAA", "9AAB", "9AAC", "9AAD", "9AAE", "CEE3", "9AAF", "C4B8", "9AB0", "C3BF", "9AB1", "9AB2", "B6BE", "D8B9", "B1C8", "B1CF", "B1D1", "C5FE", "9AB3", "B1D0", "9AB4", "C3AB", "9AB5", "9AB6", "9AB7", "9AB8", "9AB9", "D5B1", "9ABA", "9ABB", "9ABC", "9ABD", "9ABE", "9ABF", "9AC0", "9AC1", "EBA4", "BAC1", "9AC2", "9AC3", "9AC4", "CCBA", "9AC5", "9AC6", "9AC7", "EBA5", "9AC8", "EBA7", "9AC9", "9ACA", "9ACB", "EBA8", "9ACC", "9ACD", "9ACE", "EBA6", "9ACF", "9AD0", "9AD1", "9AD2", "9AD3", "9AD4", "9AD5", "EBA9", "EBAB", "EBAA", "9AD6", "9AD7", "9AD8", "9AD9", "9ADA", "EBAC", "9ADB", "CACF", "D8B5", "C3F1", "9ADC", "C3A5", "C6F8", "EBAD", "C4CA", "9ADD", "EBAE", "EBAF", "EBB0", "B7D5", "9ADE", "9ADF", "9AE0", "B7FA", "9AE1", "EBB1", "C7E2", "9AE2", "EBB3", "9AE3", "BAA4", "D1F5", "B0B1", "EBB2", "EBB4", "9AE4", "9AE5", "9AE6", "B5AA", "C2C8", "C7E8", "9AE7", "EBB5", "9AE8", "CBAE", "E3DF", "9AE9", "9AEA", "D3C0", "9AEB", "9AEC", "9AED", "9AEE", "D9DB", "9AEF", "9AF0", "CDA1", "D6AD", "C7F3", "9AF1", "9AF2", "9AF3", "D9E0", "BBE3", "9AF4", "BABA", "E3E2", "9AF5", "9AF6", "9AF7", "9AF8", "9AF9", "CFAB", "9AFA", "9AFB", "9AFC", "E3E0", "C9C7", "9AFD", "BAB9", "9AFE", "9B40", "9B41", "D1B4", "E3E1", "C8EA", "B9AF", "BDAD", "B3D8", "CEDB", "9B42", "9B43", "CCC0", "9B44", "9B45", "9B46", "E3E8", "E3E9", "CDF4", "9B47", "9B48", "9B49", "9B4A", "9B4B", "CCAD", "9B4C", "BCB3", "9B4D", "E3EA", "9B4E", "E3EB", "9B4F", "9B50", "D0DA", "9B51", "9B52", "9B53", "C6FB", "B7DA", "9B54", "9B55", "C7DF", "D2CA", "CED6", "9B56", "E3E4", "E3EC", "9B57", "C9F2", "B3C1", "9B58", "9B59", "E3E7", "9B5A", "9B5B", "C6E3", "E3E5", "9B5C", "9B5D", "EDB3", "E3E6", "9B5E", "9B5F", "9B60", "9B61", "C9B3", "9B62", "C5E6", "9B63", "9B64", "9B65", "B9B5", "9B66", "C3BB", "9B67", "E3E3", "C5BD", "C1A4", "C2D9", "B2D7", "9B68", "E3ED", "BBA6", "C4AD", "9B69", "E3F0", "BEDA", "9B6A", "9B6B", "E3FB", "E3F5", "BAD3", "9B6C", "9B6D", "9B6E", "9B6F", "B7D0", "D3CD", "9B70", "D6CE", "D5D3", "B9C1", "D5B4", "D1D8", "9B71", "9B72", "9B73", "9B74", "D0B9", "C7F6", "9B75", "9B76", "9B77", "C8AA", "B2B4", "9B78", "C3DA", "9B79", "9B7A", "9B7B", "E3EE", "9B7C", "9B7D", "E3FC", "E3EF", "B7A8", "E3F7", "E3F4", "9B7E", "9B80", "9B81", "B7BA", "9B82", "9B83", "C5A2", "9B84", "E3F6", "C5DD", "B2A8", "C6FC", "9B85", "C4E0", "9B86", "9B87", "D7A2", "9B88", "C0E1", "E3F9", "9B89", "9B8A", "E3FA", "E3FD", "CCA9", "E3F3", "9B8B", "D3BE", "9B8C", "B1C3", "EDB4", "E3F1", "E3F2", "9B8D", "E3F8", "D0BA", "C6C3", "D4F3", "E3FE", "9B8E", "9B8F", "BDE0", "9B90", "9B91", "E4A7", "9B92", "9B93", "E4A6", "9B94", "9B95", "9B96", "D1F3", "E4A3", "9B97", "E4A9", "9B98", "9B99", "9B9A", "C8F7", "9B9B", "9B9C", "9B9D", "9B9E", "CFB4", "9B9F", "E4A8", "E4AE", "C2E5", "9BA0", "9BA1", "B6B4", "9BA2", "9BA3", "9BA4", "9BA5", "9BA6", "9BA7", "BDF2", "9BA8", "E4A2", "9BA9", "9BAA", "BAE9", "E4AA", "9BAB", "9BAC", "E4AC", "9BAD", "9BAE", "B6FD", "D6DE", "E4B2", "9BAF", "E4AD", "9BB0", "9BB1", "9BB2", "E4A1", "9BB3", "BBEE", "CDDD", "C7A2", "C5C9", "9BB4", "9BB5", "C1F7", "9BB6", "E4A4", "9BB7", "C7B3", "BDAC", "BDBD", "E4A5", "9BB8", "D7C7", "B2E2", "9BB9", "E4AB", "BCC3", "E4AF", "9BBA", "BBEB", "E4B0", "C5A8", "E4B1", "9BBB", "9BBC", "9BBD", "9BBE", "D5E3", "BFA3", "9BBF", "E4BA", "9BC0", "E4B7", "9BC1", "E4BB", "9BC2", "9BC3", "E4BD", "9BC4", "9BC5", "C6D6", "9BC6", "9BC7", "BAC6", "C0CB", "9BC8", "9BC9", "9BCA", "B8A1", "E4B4", "9BCB", "9BCC", "9BCD", "9BCE", "D4A1", "9BCF", "9BD0", "BAA3", "BDFE", "9BD1", "9BD2", "9BD3", "E4BC", "9BD4", "9BD5", "9BD6", "9BD7", "9BD8", "CDBF", "9BD9", "9BDA", "C4F9", "9BDB", "9BDC", "CFFB", "C9E6", "9BDD", "9BDE", "D3BF", "9BDF", "CFD1", "9BE0", "9BE1", "E4B3", "9BE2", "E4B8", "E4B9", "CCE9", "9BE3", "9BE4", "9BE5", "9BE6", "9BE7", "CCCE", "9BE8", "C0D4", "E4B5", "C1B0", "E4B6", "CED0", "9BE9", "BBC1", "B5D3", "9BEA", "C8F3", "BDA7", "D5C7", "C9AC", "B8A2", "E4CA", "9BEB", "9BEC", "E4CC", "D1C4", "9BED", "9BEE", "D2BA", "9BEF", "9BF0", "BAAD", "9BF1", "9BF2", "BAD4", "9BF3", "9BF4", "9BF5", "9BF6", "9BF7", "9BF8", "E4C3", "B5ED", "9BF9", "9BFA", "9BFB", "D7CD", "E4C0", "CFFD", "E4BF", "9BFC", "9BFD", "9BFE", "C1DC", "CCCA", "9C40", "9C41", "9C42", "9C43", "CAE7", "9C44", "9C45", "9C46", "9C47", "C4D7", "9C48", "CCD4", "E4C8", "9C49", "9C4A", "9C4B", "E4C7", "E4C1", "9C4C", "E4C4", "B5AD", "9C4D", "9C4E", "D3D9", "9C4F", "E4C6", "9C50", "9C51", "9C52", "9C53", "D2F9", "B4E3", "9C54", "BBB4", "9C55", "9C56", "C9EE", "9C57", "B4BE", "9C58", "9C59", "9C5A", "BBEC", "9C5B", "D1CD", "9C5C", "CCED", "EDB5", "9C5D", "9C5E", "9C5F", "9C60", "9C61", "9C62", "9C63", "9C64", "C7E5", "9C65", "9C66", "9C67", "9C68", "D4A8", "9C69", "E4CB", "D7D5", "E4C2", "9C6A", "BDA5", "E4C5", "9C6B", "9C6C", "D3E6", "9C6D", "E4C9", "C9F8", "9C6E", "9C6F", "E4BE", "9C70", "9C71", "D3E5", "9C72", "9C73", "C7FE", "B6C9", "9C74", "D4FC", "B2B3", "E4D7", "9C75", "9C76", "9C77", "CEC2", "9C78", "E4CD", "9C79", "CEBC", "9C7A", "B8DB", "9C7B", "9C7C", "E4D6", "9C7D", "BFCA", "9C7E", "9C80", "9C81", "D3CE", "9C82", "C3EC", "9C83", "9C84", "9C85", "9C86", "9C87", "9C88", "9C89", "9C8A", "C5C8", "E4D8", "9C8B", "9C8C", "9C8D", "9C8E", "9C8F", "9C90", "9C91", "9C92", "CDC4", "E4CF", "9C93", "9C94", "9C95", "9C96", "E4D4", "E4D5", "9C97", "BAFE", "9C98", "CFE6", "9C99", "9C9A", "D5BF", "9C9B", "9C9C", "9C9D", "E4D2", "9C9E", "9C9F", "9CA0", "9CA1", "9CA2", "9CA3", "9CA4", "9CA5", "9CA6", "9CA7", "9CA8", "E4D0", "9CA9", "9CAA", "E4CE", "9CAB", "9CAC", "9CAD", "9CAE", "9CAF", "9CB0", "9CB1", "9CB2", "9CB3", "9CB4", "9CB5", "9CB6", "9CB7", "9CB8", "9CB9", "CDE5", "CAAA", "9CBA", "9CBB", "9CBC", "C0A3", "9CBD", "BDA6", "E4D3", "9CBE", "9CBF", "B8C8", "9CC0", "9CC1", "9CC2", "9CC3", "9CC4", "E4E7", "D4B4", "9CC5", "9CC6", "9CC7", "9CC8", "9CC9", "9CCA", "9CCB", "E4DB", "9CCC", "9CCD", "9CCE", "C1EF", "9CCF", "9CD0", "E4E9", "9CD1", "9CD2", "D2E7", "9CD3", "9CD4", "E4DF", "9CD5", "E4E0", "9CD6", "9CD7", "CFAA", "9CD8", "9CD9", "9CDA", "9CDB", "CBDD", "9CDC", "E4DA", "E4D1", "9CDD", "E4E5", "9CDE", "C8DC", "E4E3", "9CDF", "9CE0", "C4E7", "E4E2", "9CE1", "E4E1", "9CE2", "9CE3", "9CE4", "B3FC", "E4E8", "9CE5", "9CE6", "9CE7", "9CE8", "B5E1", "9CE9", "9CEA", "9CEB", "D7CC", "9CEC", "9CED", "9CEE", "E4E6", "9CEF", "BBAC", "9CF0", "D7D2", "CCCF", "EBF8", "9CF1", "E4E4", "9CF2", "9CF3", "B9F6", "9CF4", "9CF5", "9CF6", "D6CD", "E4D9", "E4DC", "C2FA", "E4DE", "9CF7", "C2CB", "C0C4", "C2D0", "9CF8", "B1F5", "CCB2", "9CF9", "9CFA", "9CFB", "9CFC", "9CFD", "9CFE", "9D40", "9D41", "9D42", "9D43", "B5CE", "9D44", "9D45", "9D46", "9D47", "E4EF", "9D48", "9D49", "9D4A", "9D4B", "9D4C", "9D4D", "9D4E", "9D4F", "C6AF", "9D50", "9D51", "9D52", "C6E1", "9D53", "9D54", "E4F5", "9D55", "9D56", "9D57", "9D58", "9D59", "C2A9", "9D5A", "9D5B", "9D5C", "C0EC", "D1DD", "E4EE", "9D5D", "9D5E", "9D5F", "9D60", "9D61", "9D62", "9D63", "9D64", "9D65", "9D66", "C4AE", "9D67", "9D68", "9D69", "E4ED", "9D6A", "9D6B", "9D6C", "9D6D", "E4F6", "E4F4", "C2FE", "9D6E", "E4DD", "9D6F", "E4F0", "9D70", "CAFE", "9D71", "D5C4", "9D72", "9D73", "E4F1", "9D74", "9D75", "9D76", "9D77", "9D78", "9D79", "9D7A", "D1FA", "9D7B", "9D7C", "9D7D", "9D7E", "9D80", "9D81", "9D82", "E4EB", "E4EC", "9D83", "9D84", "9D85", "E4F2", "9D86", "CEAB", "9D87", "9D88", "9D89", "9D8A", "9D8B", "9D8C", "9D8D", "9D8E", "9D8F", "9D90", "C5CB", "9D91", "9D92", "9D93", "C7B1", "9D94", "C2BA", "9D95", "9D96", "9D97", "E4EA", "9D98", "9D99", "9D9A", "C1CA", "9D9B", "9D9C", "9D9D", "9D9E", "9D9F", "9DA0", "CCB6", "B3B1", "9DA1", "9DA2", "9DA3", "E4FB", "9DA4", "E4F3", "9DA5", "9DA6", "9DA7", "E4FA", "9DA8", "E4FD", "9DA9", "E4FC", "9DAA", "9DAB", "9DAC", "9DAD", "9DAE", "9DAF", "9DB0", "B3CE", "9DB1", "9DB2", "9DB3", "B3BA", "E4F7", "9DB4", "9DB5", "E4F9", "E4F8", "C5EC", "9DB6", "9DB7", "9DB8", "9DB9", "9DBA", "9DBB", "9DBC", "9DBD", "9DBE", "9DBF", "9DC0", "9DC1", "9DC2", "C0BD", "9DC3", "9DC4", "9DC5", "9DC6", "D4E8", "9DC7", "9DC8", "9DC9", "9DCA", "9DCB", "E5A2", "9DCC", "9DCD", "9DCE", "9DCF", "9DD0", "9DD1", "9DD2", "9DD3", "9DD4", "9DD5", "9DD6", "B0C4", "9DD7", "9DD8", "E5A4", "9DD9", "9DDA", "E5A3", "9DDB", "9DDC", "9DDD", "9DDE", "9DDF", "9DE0", "BCA4", "9DE1", "E5A5", "9DE2", "9DE3", "9DE4", "9DE5", "9DE6", "9DE7", "E5A1", "9DE8", "9DE9", "9DEA", "9DEB", "9DEC", "9DED", "9DEE", "E4FE", "B1F4", "9DEF", "9DF0", "9DF1", "9DF2", "9DF3", "9DF4", "9DF5", "9DF6", "9DF7", "9DF8", "9DF9", "E5A8", "9DFA", "E5A9", "E5A6", "9DFB", "9DFC", "9DFD", "9DFE", "9E40", "9E41", "9E42", "9E43", "9E44", "9E45", "9E46", "9E47", "E5A7", "E5AA", "9E48", "9E49", "9E4A", "9E4B", "9E4C", "9E4D", "9E4E", "9E4F", "9E50", "9E51", "9E52", "9E53", "9E54", "9E55", "9E56", "9E57", "9E58", "9E59", "9E5A", "9E5B", "9E5C", "9E5D", "9E5E", "9E5F", "9E60", "9E61", "9E62", "9E63", "9E64", "9E65", "9E66", "9E67", "9E68", "C6D9", "9E69", "9E6A", "9E6B", "9E6C", "9E6D", "9E6E", "9E6F", "9E70", "E5AB", "E5AD", "9E71", "9E72", "9E73", "9E74", "9E75", "9E76", "9E77", "E5AC", "9E78", "9E79", "9E7A", "9E7B", "9E7C", "9E7D", "9E7E", "9E80", "9E81", "9E82", "9E83", "9E84", "9E85", "9E86", "9E87", "9E88", "9E89", "E5AF", "9E8A", "9E8B", "9E8C", "E5AE", "9E8D", "9E8E", "9E8F", "9E90", "9E91", "9E92", "9E93", "9E94", "9E95", "9E96", "9E97", "9E98", "9E99", "9E9A", "9E9B", "9E9C", "9E9D", "9E9E", "B9E0", "9E9F", "9EA0", "E5B0", "9EA1", "9EA2", "9EA3", "9EA4", "9EA5", "9EA6", "9EA7", "9EA8", "9EA9", "9EAA", "9EAB", "9EAC", "9EAD", "9EAE", "E5B1", "9EAF", "9EB0", "9EB1", "9EB2", "9EB3", "9EB4", "9EB5", "9EB6", "9EB7", "9EB8", "9EB9", "9EBA", "BBF0", "ECE1", "C3F0", "9EBB", "B5C6", "BBD2", "9EBC", "9EBD", "9EBE", "9EBF", "C1E9", "D4EE", "9EC0", "BEC4", "9EC1", "9EC2", "9EC3", "D7C6", "9EC4", "D4D6", "B2D3", "ECBE", "9EC5", "9EC6", "9EC7", "9EC8", "EAC1", "9EC9", "9ECA", "9ECB", "C2AF", "B4B6", "9ECC", "9ECD", "9ECE", "D1D7", "9ECF", "9ED0", "9ED1", "B3B4", "9ED2", "C8B2", "BFBB", "ECC0", "9ED3", "9ED4", "D6CB", "9ED5", "9ED6", "ECBF", "ECC1", "9ED7", "9ED8", "9ED9", "9EDA", "9EDB", "9EDC", "9EDD", "9EDE", "9EDF", "9EE0", "9EE1", "9EE2", "9EE3", "ECC5", "BEE6", "CCBF", "C5DA", "BEBC", "9EE4", "ECC6", "9EE5", "B1FE", "9EE6", "9EE7", "9EE8", "ECC4", "D5A8", "B5E3", "9EE9", "ECC2", "C1B6", "B3E3", "9EEA", "9EEB", "ECC3", "CBB8", "C0C3", "CCFE", "9EEC", "9EED", "9EEE", "9EEF", "C1D2", "9EF0", "ECC8", "9EF1", "9EF2", "9EF3", "9EF4", "9EF5", "9EF6", "9EF7", "9EF8", "9EF9", "9EFA", "9EFB", "9EFC", "9EFD", "BAE6", "C0D3", "9EFE", "D6F2", "9F40", "9F41", "9F42", "D1CC", "9F43", "9F44", "9F45", "9F46", "BFBE", "9F47", "B7B3", "C9D5", "ECC7", "BBE2", "9F48", "CCCC", "BDFD", "C8C8", "9F49", "CFA9", "9F4A", "9F4B", "9F4C", "9F4D", "9F4E", "9F4F", "9F50", "CDE9", "9F51", "C5EB", "9F52", "9F53", "9F54", "B7E9", "9F55", "9F56", "9F57", "9F58", "9F59", "9F5A", "9F5B", "9F5C", "9F5D", "9F5E", "9F5F", "D1C9", "BAB8", "9F60", "9F61", "9F62", "9F63", "9F64", "ECC9", "9F65", "9F66", "ECCA", "9F67", "BBC0", "ECCB", "9F68", "ECE2", "B1BA", "B7D9", "9F69", "9F6A", "9F6B", "9F6C", "9F6D", "9F6E", "9F6F", "9F70", "9F71", "9F72", "9F73", "BDB9", "9F74", "9F75", "9F76", "9F77", "9F78", "9F79", "9F7A", "9F7B", "ECCC", "D1E6", "ECCD", "9F7C", "9F7D", "9F7E", "9F80", "C8BB", "9F81", "9F82", "9F83", "9F84", "9F85", "9F86", "9F87", "9F88", "9F89", "9F8A", "9F8B", "9F8C", "9F8D", "9F8E", "ECD1", "9F8F", "9F90", "9F91", "9F92", "ECD3", "9F93", "BBCD", "9F94", "BCE5", "9F95", "9F96", "9F97", "9F98", "9F99", "9F9A", "9F9B", "9F9C", "9F9D", "9F9E", "9F9F", "9FA0", "9FA1", "ECCF", "9FA2", "C9B7", "9FA3", "9FA4", "9FA5", "9FA6", "9FA7", "C3BA", "9FA8", "ECE3", "D5D5", "ECD0", "9FA9", "9FAA", "9FAB", "9FAC", "9FAD", "D6F3", "9FAE", "9FAF", "9FB0", "ECD2", "ECCE", "9FB1", "9FB2", "9FB3", "9FB4", "ECD4", "9FB5", "ECD5", "9FB6", "9FB7", "C9BF", "9FB8", "9FB9", "9FBA", "9FBB", "9FBC", "9FBD", "CFA8", "9FBE", "9FBF", "9FC0", "9FC1", "9FC2", "D0DC", "9FC3", "9FC4", "9FC5", "9FC6", "D1AC", "9FC7", "9FC8", "9FC9", "9FCA", "C8DB", "9FCB", "9FCC", "9FCD", "ECD6", "CEF5", "9FCE", "9FCF", "9FD0", "9FD1", "9FD2", "CAEC", "ECDA", "9FD3", "9FD4", "9FD5", "9FD6", "9FD7", "9FD8", "9FD9", "ECD9", "9FDA", "9FDB", "9FDC", "B0BE", "9FDD", "9FDE", "9FDF", "9FE0", "9FE1", "9FE2", "ECD7", "9FE3", "ECD8", "9FE4", "9FE5", "9FE6", "ECE4", "9FE7", "9FE8", "9FE9", "9FEA", "9FEB", "9FEC", "9FED", "9FEE", "9FEF", "C8BC", "9FF0", "9FF1", "9FF2", "9FF3", "9FF4", "9FF5", "9FF6", "9FF7", "9FF8", "9FF9", "C1C7", "9FFA", "9FFB", "9FFC", "9FFD", "9FFE", "ECDC", "D1E0", "A040", "A041", "A042", "A043", "A044", "A045", "A046", "A047", "A048", "A049", "ECDB", "A04A", "A04B", "A04C", "A04D", "D4EF", "A04E", "ECDD", "A04F", "A050", "A051", "A052", "A053", "A054", "DBC6", "A055", "A056", "A057", "A058", "A059", "A05A", "A05B", "A05C", "A05D", "A05E", "ECDE", "A05F", "A060", "A061", "A062", "A063", "A064", "A065", "A066", "A067", "A068", "A069", "A06A", "B1AC", "A06B", "A06C", "A06D", "A06E", "A06F", "A070", "A071", "A072", "A073", "A074", "A075", "A076", "A077", "A078", "A079", "A07A", "A07B", "A07C", "A07D", "A07E", "A080", "A081", "ECDF", "A082", "A083", "A084", "A085", "A086", "A087", "A088", "A089", "A08A", "A08B", "ECE0", "A08C", "D7A6", "A08D", "C5C0", "A08E", "A08F", "A090", "EBBC", "B0AE", "A091", "A092", "A093", "BEF4", "B8B8", "D2AF", "B0D6", "B5F9", "A094", "D8B3", "A095", "CBAC", "A096", "E3DD", "A097", "A098", "A099", "A09A", "A09B", "A09C", "A09D", "C6AC", "B0E6", "A09E", "A09F", "A0A0", "C5C6", "EBB9", "A0A1", "A0A2", "A0A3", "A0A4", "EBBA", "A0A5", "A0A6", "A0A7", "EBBB", "A0A8", "A0A9", "D1C0", "A0AA", "C5A3", "A0AB", "EAF2", "A0AC", "C4B2", "A0AD", "C4B5", "C0CE", "A0AE", "A0AF", "A0B0", "EAF3", "C4C1", "A0B1", "CEEF", "A0B2", "A0B3", "A0B4", "A0B5", "EAF0", "EAF4", "A0B6", "A0B7", "C9FC", "A0B8", "A0B9", "C7A3", "A0BA", "A0BB", "A0BC", "CCD8", "CEFE", "A0BD", "A0BE", "A0BF", "EAF5", "EAF6", "CFAC", "C0E7", "A0C0", "A0C1", "EAF7", "A0C2", "A0C3", "A0C4", "A0C5", "A0C6", "B6BF", "EAF8", "A0C7", "EAF9", "A0C8", "EAFA", "A0C9", "A0CA", "EAFB", "A0CB", "A0CC", "A0CD", "A0CE", "A0CF", "A0D0", "A0D1", "A0D2", "A0D3", "A0D4", "A0D5", "A0D6", "EAF1", "A0D7", "A0D8", "A0D9", "A0DA", "A0DB", "A0DC", "A0DD", "A0DE", "A0DF", "A0E0", "A0E1", "A0E2", "C8AE", "E1EB", "A0E3", "B7B8", "E1EC", "A0E4", "A0E5", "A0E6", "E1ED", "A0E7", "D7B4", "E1EE", "E1EF", "D3CC", "A0E8", "A0E9", "A0EA", "A0EB", "A0EC", "A0ED", "A0EE", "E1F1", "BFF1", "E1F0", "B5D2", "A0EF", "A0F0", "A0F1", "B1B7", "A0F2", "A0F3", "A0F4", "A0F5", "E1F3", "E1F2", "A0F6", "BAFC", "A0F7", "E1F4", "A0F8", "A0F9", "A0FA", "A0FB", "B9B7", "A0FC", "BED1", "A0FD", "A0FE", "AA40", "AA41", "C4FC", "AA42", "BADD", "BDC6", "AA43", "AA44", "AA45", "AA46", "AA47", "AA48", "E1F5", "E1F7", "AA49", "AA4A", "B6C0", "CFC1", "CAA8", "E1F6", "D5F8", "D3FC", "E1F8", "E1FC", "E1F9", "AA4B", "AA4C", "E1FA", "C0EA", "AA4D", "E1FE", "E2A1", "C0C7", "AA4E", "AA4F", "AA50", "AA51", "E1FB", "AA52", "E1FD", "AA53", "AA54", "AA55", "AA56", "AA57", "AA58", "E2A5", "AA59", "AA5A", "AA5B", "C1D4", "AA5C", "AA5D", "AA5E", "AA5F", "E2A3", "AA60", "E2A8", "B2FE", "E2A2", "AA61", "AA62", "AA63", "C3CD", "B2C2", "E2A7", "E2A6", "AA64", "AA65", "E2A4", "E2A9", "AA66", "AA67", "E2AB", "AA68", "AA69", "AA6A", "D0C9", "D6ED", "C3A8", "E2AC", "AA6B", "CFD7", "AA6C", "AA6D", "E2AE", "AA6E", "AA6F", "BAEF", "AA70", "AA71", "E9E0", "E2AD", "E2AA", "AA72", "AA73", "AA74", "AA75", "BBAB", "D4B3", "AA76", "AA77", "AA78", "AA79", "AA7A", "AA7B", "AA7C", "AA7D", "AA7E", "AA80", "AA81", "AA82", "AA83", "E2B0", "AA84", "AA85", "E2AF", "AA86", "E9E1", "AA87", "AA88", "AA89", "AA8A", "E2B1", "AA8B", "AA8C", "AA8D", "AA8E", "AA8F", "AA90", "AA91", "AA92", "E2B2", "AA93", "AA94", "AA95", "AA96", "AA97", "AA98", "AA99", "AA9A", "AA9B", "AA9C", "AA9D", "E2B3", "CCA1", "AA9E", "E2B4", "AA9F", "AAA0", "AB40", "AB41", "AB42", "AB43", "AB44", "AB45", "AB46", "AB47", "AB48", "AB49", "AB4A", "AB4B", "E2B5", "AB4C", "AB4D", "AB4E", "AB4F", "AB50", "D0FE", "AB51", "AB52", "C2CA", "AB53", "D3F1", "AB54", "CDF5", "AB55", "AB56", "E7E0", "AB57", "AB58", "E7E1", "AB59", "AB5A", "AB5B", "AB5C", "BEC1", "AB5D", "AB5E", "AB5F", "AB60", "C2EA", "AB61", "AB62", "AB63", "E7E4", "AB64", "AB65", "E7E3", "AB66", "AB67", "AB68", "AB69", "AB6A", "AB6B", "CDE6", "AB6C", "C3B5", "AB6D", "AB6E", "E7E2", "BBB7", "CFD6", "AB6F", "C1E1", "E7E9", "AB70", "AB71", "AB72", "E7E8", "AB73", "AB74", "E7F4", "B2A3", "AB75", "AB76", "AB77", "AB78", "E7EA", "AB79", "E7E6", "AB7A", "AB7B", "AB7C", "AB7D", "AB7E", "E7EC", "E7EB", "C9BA", "AB80", "AB81", "D5E4", "AB82", "E7E5", "B7A9", "E7E7", "AB83", "AB84", "AB85", "AB86", "AB87", "AB88", "AB89", "E7EE", "AB8A", "AB8B", "AB8C", "AB8D", "E7F3", "AB8E", "D6E9", "AB8F", "AB90", "AB91", "AB92", "E7ED", "AB93", "E7F2", "AB94", "E7F1", "AB95", "AB96", "AB97", "B0E0", "AB98", "AB99", "AB9A", "AB9B", "E7F5", "AB9C", "AB9D", "AB9E", "AB9F", "ABA0", "AC40", "AC41", "AC42", "AC43", "AC44", "AC45", "AC46", "AC47", "AC48", "AC49", "AC4A", "C7F2", "AC4B", "C0C5", "C0ED", "AC4C", "AC4D", "C1F0", "E7F0", "AC4E", "AC4F", "AC50", "AC51", "E7F6", "CBF6", "AC52", "AC53", "AC54", "AC55", "AC56", "AC57", "AC58", "AC59", "AC5A", "E8A2", "E8A1", "AC5B", "AC5C", "AC5D", "AC5E", "AC5F", "AC60", "D7C1", "AC61", "AC62", "E7FA", "E7F9", "AC63", "E7FB", "AC64", "E7F7", "AC65", "E7FE", "AC66", "E7FD", "AC67", "E7FC", "AC68", "AC69", "C1D5", "C7D9", "C5FD", "C5C3", "AC6A", "AC6B", "AC6C", "AC6D", "AC6E", "C7ED", "AC6F", "AC70", "AC71", "AC72", "E8A3", "AC73", "AC74", "AC75", "AC76", "AC77", "AC78", "AC79", "AC7A", "AC7B", "AC7C", "AC7D", "AC7E", "AC80", "AC81", "AC82", "AC83", "AC84", "AC85", "AC86", "E8A6", "AC87", "E8A5", "AC88", "E8A7", "BAF7", "E7F8", "E8A4", "AC89", "C8F0", "C9AA", "AC8A", "AC8B", "AC8C", "AC8D", "AC8E", "AC8F", "AC90", "AC91", "AC92", "AC93", "AC94", "AC95", "AC96", "E8A9", "AC97", "AC98", "B9E5", "AC99", "AC9A", "AC9B", "AC9C", "AC9D", "D1FE", "E8A8", "AC9E", "AC9F", "ACA0", "AD40", "AD41", "AD42", "E8AA", "AD43", "E8AD", "E8AE", "AD44", "C1A7", "AD45", "AD46", "AD47", "E8AF", "AD48", "AD49", "AD4A", "E8B0", "AD4B", "AD4C", "E8AC", "AD4D", "E8B4", "AD4E", "AD4F", "AD50", "AD51", "AD52", "AD53", "AD54", "AD55", "AD56", "AD57", "AD58", "E8AB", "AD59", "E8B1", "AD5A", "AD5B", "AD5C", "AD5D", "AD5E", "AD5F", "AD60", "AD61", "E8B5", "E8B2", "E8B3", "AD62", "AD63", "AD64", "AD65", "AD66", "AD67", "AD68", "AD69", "AD6A", "AD6B", "AD6C", "AD6D", "AD6E", "AD6F", "AD70", "AD71", "E8B7", "AD72", "AD73", "AD74", "AD75", "AD76", "AD77", "AD78", "AD79", "AD7A", "AD7B", "AD7C", "AD7D", "AD7E", "AD80", "AD81", "AD82", "AD83", "AD84", "AD85", "AD86", "AD87", "AD88", "AD89", "E8B6", "AD8A", "AD8B", "AD8C", "AD8D", "AD8E", "AD8F", "AD90", "AD91", "AD92", "B9CF", "AD93", "F0AC", "AD94", "F0AD", "AD95", "C6B0", "B0EA", "C8BF", "AD96", "CDDF", "AD97", "AD98", "AD99", "AD9A", "AD9B", "AD9C", "AD9D", "CECD", "EAB1", "AD9E", "AD9F", "ADA0", "AE40", "EAB2", "AE41", "C6BF", "B4C9", "AE42", "AE43", "AE44", "AE45", "AE46", "AE47", "AE48", "EAB3", "AE49", "AE4A", "AE4B", "AE4C", "D5E7", "AE4D", "AE4E", "AE4F", "AE50", "AE51", "AE52", "AE53", "AE54", "DDF9", "AE55", "EAB4", "AE56", "EAB5", "AE57", "EAB6", "AE58", "AE59", "AE5A", "AE5B", "B8CA", "DFB0", "C9F5", "AE5C", "CCF0", "AE5D", "AE5E", "C9FA", "AE5F", "AE60", "AE61", "AE62", "AE63", "C9FB", "AE64", "AE65", "D3C3", "CBA6", "AE66", "B8A6", "F0AE", "B1C2", "AE67", "E5B8", "CCEF", "D3C9", "BCD7", "C9EA", "AE68", "B5E7", "AE69", "C4D0", "B5E9", "AE6A", "EEAE", "BBAD", "AE6B", "AE6C", "E7DE", "AE6D", "EEAF", "AE6E", "AE6F", "AE70", "AE71", "B3A9", "AE72", "AE73", "EEB2", "AE74", "AE75", "EEB1", "BDE7", "AE76", "EEB0", "CEB7", "AE77", "AE78", "AE79", "AE7A", "C5CF", "AE7B", "AE7C", "AE7D", "AE7E", "C1F4", "DBCE", "EEB3", "D0F3", "AE80", "AE81", "AE82", "AE83", "AE84", "AE85", "AE86", "AE87", "C2D4", "C6E8", "AE88", "AE89", "AE8A", "B7AC", "AE8B", "AE8C", "AE8D", "AE8E", "AE8F", "AE90", "AE91", "EEB4", "AE92", "B3EB", "AE93", "AE94", "AE95", "BBFB", "EEB5", "AE96", "AE97", "AE98", "AE99", "AE9A", "E7DC", "AE9B", "AE9C", "AE9D", "EEB6", "AE9E", "AE9F", "BDAE", "AEA0", "AF40", "AF41", "AF42", "F1E2", "AF43", "AF44", "AF45", "CAE8", "AF46", "D2C9", "F0DA", "AF47", "F0DB", "AF48", "F0DC", "C1C6", "AF49", "B8ED", "BECE", "AF4A", "AF4B", "F0DE", "AF4C", "C5B1", "F0DD", "D1F1", "AF4D", "F0E0", "B0CC", "BDEA", "AF4E", "AF4F", "AF50", "AF51", "AF52", "D2DF", "F0DF", "AF53", "B4AF", "B7E8", "F0E6", "F0E5", "C6A3", "F0E1", "F0E2", "B4C3", "AF54", "AF55", "F0E3", "D5EE", "AF56", "AF57", "CCDB", "BED2", "BCB2", "AF58", "AF59", "AF5A", "F0E8", "F0E7", "F0E4", "B2A1", "AF5B", "D6A2", "D3B8", "BEB7", "C8AC", "AF5C", "AF5D", "F0EA", "AF5E", "AF5F", "AF60", "AF61", "D1F7", "AF62", "D6CC", "BADB", "F0E9", "AF63", "B6BB", "AF64", "AF65", "CDB4", "AF66", "AF67", "C6A6", "AF68", "AF69", "AF6A", "C1A1", "F0EB", "F0EE", "AF6B", "F0ED", "F0F0", "F0EC", "AF6C", "BBBE", "F0EF", "AF6D", "AF6E", "AF6F", "AF70", "CCB5", "F0F2", "AF71", "AF72", "B3D5", "AF73", "AF74", "AF75", "AF76", "B1D4", "AF77", "AF78", "F0F3", "AF79", "AF7A", "F0F4", "F0F6", "B4E1", "AF7B", "F0F1", "AF7C", "F0F7", "AF7D", "AF7E", "AF80", "AF81", "F0FA", "AF82", "F0F8", "AF83", "AF84", "AF85", "F0F5", "AF86", "AF87", "AF88", "AF89", "F0FD", "AF8A", "F0F9", "F0FC", "F0FE", "AF8B", "F1A1", "AF8C", "AF8D", "AF8E", "CEC1", "F1A4", "AF8F", "F1A3", "AF90", "C1F6", "F0FB", "CADD", "AF91", "AF92", "B4F1", "B1F1", "CCB1", "AF93", "F1A6", "AF94", "AF95", "F1A7", "AF96", "AF97", "F1AC", "D5CE", "F1A9", "AF98", "AF99", "C8B3", "AF9A", "AF9B", "AF9C", "F1A2", "AF9D", "F1AB", "F1A8", "F1A5", "AF9E", "AF9F", "F1AA", "AFA0", "B040", "B041", "B042", "B043", "B044", "B045", "B046", "B0A9", "F1AD", "B047", "B048", "B049", "B04A", "B04B", "B04C", "F1AF", "B04D", "F1B1", "B04E", "B04F", "B050", "B051", "B052", "F1B0", "B053", "F1AE", "B054", "B055", "B056", "B057", "D1A2", "B058", "B059", "B05A", "B05B", "B05C", "B05D", "B05E", "F1B2", "B05F", "B060", "B061", "F1B3", "B062", "B063", "B064", "B065", "B066", "B067", "B068", "B069", "B9EF", "B06A", "B06B", "B5C7", "B06C", "B0D7", "B0D9", "B06D", "B06E", "B06F", "D4ED", "B070", "B5C4", "B071", "BDD4", "BBCA", "F0A7", "B072", "B073", "B8DE", "B074", "B075", "F0A8", "B076", "B077", "B0A8", "B078", "F0A9", "B079", "B07A", "CDEE", "B07B", "B07C", "F0AA", "B07D", "B07E", "B080", "B081", "B082", "B083", "B084", "B085", "B086", "B087", "F0AB", "B088", "B089", "B08A", "B08B", "B08C", "B08D", "B08E", "B08F", "B090", "C6A4", "B091", "B092", "D6E5", "F1E4", "B093", "F1E5", "B094", "B095", "B096", "B097", "B098", "B099", "B09A", "B09B", "B09C", "B09D", "C3F3", "B09E", "B09F", "D3DB", "B0A0", "B140", "D6D1", "C5E8", "B141", "D3AF", "B142", "D2E6", "B143", "B144", "EEC1", "B0BB", "D5B5", "D1CE", "BCE0", "BAD0", "B145", "BFF8", "B146", "B8C7", "B5C1", "C5CC", "B147", "B148", "CAA2", "B149", "B14A", "B14B", "C3CB", "B14C", "B14D", "B14E", "B14F", "B150", "EEC2", "B151", "B152", "B153", "B154", "B155", "B156", "B157", "B158", "C4BF", "B6A2", "B159", "EDEC", "C3A4", "B15A", "D6B1", "B15B", "B15C", "B15D", "CFE0", "EDEF", "B15E", "B15F", "C5CE", "B160", "B6DC", "B161", "B162", "CAA1", "B163", "B164", "EDED", "B165", "B166", "EDF0", "EDF1", "C3BC", "B167", "BFB4", "B168", "EDEE", "B169", "B16A", "B16B", "B16C", "B16D", "B16E", "B16F", "B170", "B171", "B172", "B173", "EDF4", "EDF2", "B174", "B175", "B176", "B177", "D5E6", "C3DF", "B178", "EDF3", "B179", "B17A", "B17B", "EDF6", "B17C", "D5A3", "D1A3", "B17D", "B17E", "B180", "EDF5", "B181", "C3D0", "B182", "B183", "B184", "B185", "B186", "EDF7", "BFF4", "BEEC", "EDF8", "B187", "CCF7", "B188", "D1DB", "B189", "B18A", "B18B", "D7C5", "D5F6", "B18C", "EDFC", "B18D", "B18E", "B18F", "EDFB", "B190", "B191", "B192", "B193", "B194", "B195", "B196", "B197", "EDF9", "EDFA", "B198", "B199", "B19A", "B19B", "B19C", "B19D", "B19E", "B19F", "EDFD", "BEA6", "B1A0", "B240", "B241", "B242", "B243", "CBAF", "EEA1", "B6BD", "B244", "EEA2", "C4C0", "B245", "EDFE", "B246", "B247", "BDDE", "B2C7", "B248", "B249", "B24A", "B24B", "B24C", "B24D", "B24E", "B24F", "B250", "B251", "B252", "B253", "B6C3", "B254", "B255", "B256", "EEA5", "D8BA", "EEA3", "EEA6", "B257", "B258", "B259", "C3E9", "B3F2", "B25A", "B25B", "B25C", "B25D", "B25E", "B25F", "EEA7", "EEA4", "CFB9", "B260", "B261", "EEA8", "C2F7", "B262", "B263", "B264", "B265", "B266", "B267", "B268", "B269", "B26A", "B26B", "B26C", "B26D", "EEA9", "EEAA", "B26E", "DEAB", "B26F", "B270", "C6B3", "B271", "C7C6", "B272", "D6F5", "B5C9", "B273", "CBB2", "B274", "B275", "B276", "EEAB", "B277", "B278", "CDAB", "B279", "EEAC", "B27A", "B27B", "B27C", "B27D", "B27E", "D5B0", "B280", "EEAD", "B281", "F6C4", "B282", "B283", "B284", "B285", "B286", "B287", "B288", "B289", "B28A", "B28B", "B28C", "B28D", "B28E", "DBC7", "B28F", "B290", "B291", "B292", "B293", "B294", "B295", "B296", "B297", "B4A3", "B298", "B299", "B29A", "C3AC", "F1E6", "B29B", "B29C", "B29D", "B29E", "B29F", "CAB8", "D2D3", "B2A0", "D6AA", "B340", "EFF2", "B341", "BED8", "B342", "BDC3", "EFF3", "B6CC", "B0AB", "B343", "B344", "B345", "B346", "CAAF", "B347", "B348", "EDB6", "B349", "EDB7", "B34A", "B34B", "B34C", "B34D", "CEF9", "B7AF", "BFF3", "EDB8", "C2EB", "C9B0", "B34E", "B34F", "B350", "B351", "B352", "B353", "EDB9", "B354", "B355", "C6F6", "BFB3", "B356", "B357", "B358", "EDBC", "C5F8", "B359", "D1D0", "B35A", "D7A9", "EDBA", "EDBB", "B35B", "D1E2", "B35C", "EDBF", "EDC0", "B35D", "EDC4", "B35E", "B35F", "B360", "EDC8", "B361", "EDC6", "EDCE", "D5E8", "B362", "EDC9", "B363", "B364", "EDC7", "EDBE", "B365", "B366", "C5E9", "B367", "B368", "B369", "C6C6", "B36A", "B36B", "C9E9", "D4D2", "EDC1", "EDC2", "EDC3", "EDC5", "B36C", "C0F9", "B36D", "B4A1", "B36E", "B36F", "B370", "B371", "B9E8", "B372", "EDD0", "B373", "B374", "B375", "B376", "EDD1", "B377", "EDCA", "B378", "EDCF", "B379", "CEF8", "B37A", "B37B", "CBB6", "EDCC", "EDCD", "B37C", "B37D", "B37E", "B380", "B381", "CFF5", "B382", "B383", "B384", "B385", "B386", "B387", "B388", "B389", "B38A", "B38B", "B38C", "B38D", "EDD2", "C1F2", "D3B2", "EDCB", "C8B7", "B38E", "B38F", "B390", "B391", "B392", "B393", "B394", "B395", "BCEF", "B396", "B397", "B398", "B399", "C5F0", "B39A", "B39B", "B39C", "B39D", "B39E", "B39F", "B3A0", "B440", "B441", "B442", "EDD6", "B443", "B5EF", "B444", "B445", "C2B5", "B0AD", "CBE9", "B446", "B447", "B1AE", "B448", "EDD4", "B449", "B44A", "B44B", "CDEB", "B5E2", "B44C", "EDD5", "EDD3", "EDD7", "B44D", "B44E", "B5FA", "B44F", "EDD8", "B450", "EDD9", "B451", "EDDC", "B452", "B1CC", "B453", "B454", "B455", "B456", "B457", "B458", "B459", "B45A", "C5F6", "BCEE", "EDDA", "CCBC", "B2EA", "B45B", "B45C", "B45D", "B45E", "EDDB", "B45F", "B460", "B461", "B462", "C4EB", "B463", "B464", "B4C5", "B465", "B466", "B467", "B0F5", "B468", "B469", "B46A", "EDDF", "C0DA", "B4E8", "B46B", "B46C", "B46D", "B46E", "C5CD", "B46F", "B470", "B471", "EDDD", "BFC4", "B472", "B473", "B474", "EDDE", "B475", "B476", "B477", "B478", "B479", "B47A", "B47B", "B47C", "B47D", "B47E", "B480", "B481", "B482", "B483", "C4A5", "B484", "B485", "B486", "EDE0", "B487", "B488", "B489", "B48A", "B48B", "EDE1", "B48C", "EDE3", "B48D", "B48E", "C1D7", "B48F", "B490", "BBC7", "B491", "B492", "B493", "B494", "B495", "B496", "BDB8", "B497", "B498", "B499", "EDE2", "B49A", "B49B", "B49C", "B49D", "B49E", "B49F", "B4A0", "B540", "B541", "B542", "B543", "B544", "B545", "EDE4", "B546", "B547", "B548", "B549", "B54A", "B54B", "B54C", "B54D", "B54E", "B54F", "EDE6", "B550", "B551", "B552", "B553", "B554", "EDE5", "B555", "B556", "B557", "B558", "B559", "B55A", "B55B", "B55C", "B55D", "B55E", "B55F", "B560", "B561", "B562", "B563", "EDE7", "B564", "B565", "B566", "B567", "B568", "CABE", "ECEA", "C0F1", "B569", "C9E7", "B56A", "ECEB", "C6EE", "B56B", "B56C", "B56D", "B56E", "ECEC", "B56F", "C6ED", "ECED", "B570", "B571", "B572", "B573", "B574", "B575", "B576", "B577", "B578", "ECF0", "B579", "B57A", "D7E6", "ECF3", "B57B", "B57C", "ECF1", "ECEE", "ECEF", "D7A3", "C9F1", "CBEE", "ECF4", "B57D", "ECF2", "B57E", "B580", "CFE9", "B581", "ECF6", "C6B1", "B582", "B583", "B584", "B585", "BCC0", "B586", "ECF5", "B587", "B588", "B589", "B58A", "B58B", "B58C", "B58D", "B5BB", "BBF6", "B58E", "ECF7", "B58F", "B590", "B591", "B592", "B593", "D9F7", "BDFB", "B594", "B595", "C2BB", "ECF8", "B596", "B597", "B598", "B599", "ECF9", "B59A", "B59B", "B59C", "B59D", "B8A3", "B59E", "B59F", "B5A0", "B640", "B641", "B642", "B643", "B644", "B645", "B646", "ECFA", "B647", "B648", "B649", "B64A", "B64B", "B64C", "B64D", "B64E", "B64F", "B650", "B651", "B652", "ECFB", "B653", "B654", "B655", "B656", "B657", "B658", "B659", "B65A", "B65B", "B65C", "B65D", "ECFC", "B65E", "B65F", "B660", "B661", "B662", "D3ED", "D8AE", "C0EB", "B663", "C7DD", "BACC", "B664", "D0E3", "CBBD", "B665", "CDBA", "B666", "B667", "B8D1", "B668", "B669", "B1FC", "B66A", "C7EF", "B66B", "D6D6", "B66C", "B66D", "B66E", "BFC6", "C3EB", "B66F", "B670", "EFF5", "B671", "B672", "C3D8", "B673", "B674", "B675", "B676", "B677", "B678", "D7E2", "B679", "B67A", "B67B", "EFF7", "B3D3", "B67C", "C7D8", "D1ED", "B67D", "D6C8", "B67E", "EFF8", "B680", "EFF6", "B681", "BBFD", "B3C6", "B682", "B683", "B684", "B685", "B686", "B687", "B688", "BDD5", "B689", "B68A", "D2C6", "B68B", "BBE0", "B68C", "B68D", "CFA1", "B68E", "EFFC", "EFFB", "B68F", "B690", "EFF9", "B691", "B692", "B693", "B694", "B3CC", "B695", "C9D4", "CBB0", "B696", "B697", "B698", "B699", "B69A", "EFFE", "B69B", "B69C", "B0DE", "B69D", "B69E", "D6C9", "B69F", "B6A0", "B740", "EFFD", "B741", "B3ED", "B742", "B743", "F6D5", "B744", "B745", "B746", "B747", "B748", "B749", "B74A", "B74B", "B74C", "B74D", "B74E", "B74F", "B750", "B751", "B752", "CEC8", "B753", "B754", "B755", "F0A2", "B756", "F0A1", "B757", "B5BE", "BCDA", "BBFC", "B758", "B8E5", "B759", "B75A", "B75B", "B75C", "B75D", "B75E", "C4C2", "B75F", "B760", "B761", "B762", "B763", "B764", "B765", "B766", "B767", "B768", "F0A3", "B769", "B76A", "B76B", "B76C", "B76D", "CBEB", "B76E", "B76F", "B770", "B771", "B772", "B773", "B774", "B775", "B776", "B777", "B778", "B779", "B77A", "B77B", "B77C", "B77D", "B77E", "B780", "B781", "B782", "B783", "B784", "B785", "B786", "F0A6", "B787", "B788", "B789", "D1A8", "B78A", "BEBF", "C7EE", "F1B6", "F1B7", "BFD5", "B78B", "B78C", "B78D", "B78E", "B4A9", "F1B8", "CDBB", "B78F", "C7D4", "D5AD", "B790", "F1B9", "B791", "F1BA", "B792", "B793", "B794", "B795", "C7CF", "B796", "B797", "B798", "D2A4", "D6CF", "B799", "B79A", "F1BB", "BDD1", "B4B0", "BEBD", "B79B", "B79C", "B79D", "B4DC", "CED1", "B79E", "BFDF", "F1BD", "B79F", "B7A0", "B840", "B841", "BFFA", "F1BC", "B842", "F1BF", "B843", "B844", "B845", "F1BE", "F1C0", "B846", "B847", "B848", "B849", "B84A", "F1C1", "B84B", "B84C", "B84D", "B84E", "B84F", "B850", "B851", "B852", "B853", "B854", "B855", "C1FE", "B856", "B857", "B858", "B859", "B85A", "B85B", "B85C", "B85D", "B85E", "B85F", "B860", "C1A2", "B861", "B862", "B863", "B864", "B865", "B866", "B867", "B868", "B869", "B86A", "CAFA", "B86B", "B86C", "D5BE", "B86D", "B86E", "B86F", "B870", "BEBA", "BEB9", "D5C2", "B871", "B872", "BFA2", "B873", "CDAF", "F1B5", "B874", "B875", "B876", "B877", "B878", "B879", "BDDF", "B87A", "B6CB", "B87B", "B87C", "B87D", "B87E", "B880", "B881", "B882", "B883", "B884", "D6F1", "F3C3", "B885", "B886", "F3C4", "B887", "B8CD", "B888", "B889", "B88A", "F3C6", "F3C7", "B88B", "B0CA", "B88C", "F3C5", "B88D", "F3C9", "CBF1", "B88E", "B88F", "B890", "F3CB", "B891", "D0A6", "B892", "B893", "B1CA", "F3C8", "B894", "B895", "B896", "F3CF", "B897", "B5D1", "B898", "B899", "F3D7", "B89A", "F3D2", "B89B", "B89C", "B89D", "F3D4", "F3D3", "B7FB", "B89E", "B1BF", "B89F", "F3CE", "F3CA", "B5DA", "B8A0", "F3D0", "B940", "B941", "F3D1", "B942", "F3D5", "B943", "B944", "B945", "B946", "F3CD", "B947", "BCE3", "B948", "C1FD", "B949", "F3D6", "B94A", "B94B", "B94C", "B94D", "B94E", "B94F", "F3DA", "B950", "F3CC", "B951", "B5C8", "B952", "BDEE", "F3DC", "B953", "B954", "B7A4", "BFF0", "D6FE", "CDB2", "B955", "B4F0", "B956", "B2DF", "B957", "F3D8", "B958", "F3D9", "C9B8", "B959", "F3DD", "B95A", "B95B", "F3DE", "B95C", "F3E1", "B95D", "B95E", "B95F", "B960", "B961", "B962", "B963", "B964", "B965", "B966", "B967", "F3DF", "B968", "B969", "F3E3", "F3E2", "B96A", "B96B", "F3DB", "B96C", "BFEA", "B96D", "B3EF", "B96E", "F3E0", "B96F", "B970", "C7A9", "B971", "BCF2", "B972", "B973", "B974", "B975", "F3EB", "B976", "B977", "B978", "B979", "B97A", "B97B", "B97C", "B9BF", "B97D", "B97E", "F3E4", "B980", "B981", "B982", "B2AD", "BBFE", "B983", "CBE3", "B984", "B985", "B986", "B987", "F3ED", "F3E9", "B988", "B989", "B98A", "B9DC", "F3EE", "B98B", "B98C", "B98D", "F3E5", "F3E6", "F3EA", "C2E1", "F3EC", "F3EF", "F3E8", "BCFD", "B98E", "B98F", "B990", "CFE4", "B991", "B992", "F3F0", "B993", "B994", "B995", "F3E7", "B996", "B997", "B998", "B999", "B99A", "B99B", "B99C", "B99D", "F3F2", "B99E", "B99F", "B9A0", "BA40", "D7AD", "C6AA", "BA41", "BA42", "BA43", "BA44", "F3F3", "BA45", "BA46", "BA47", "BA48", "F3F1", "BA49", "C2A8", "BA4A", "BA4B", "BA4C", "BA4D", "BA4E", "B8DD", "F3F5", "BA4F", "BA50", "F3F4", "BA51", "BA52", "BA53", "B4DB", "BA54", "BA55", "BA56", "F3F6", "F3F7", "BA57", "BA58", "BA59", "F3F8", "BA5A", "BA5B", "BA5C", "C0BA", "BA5D", "BA5E", "C0E9", "BA5F", "BA60", "BA61", "BA62", "BA63", "C5F1", "BA64", "BA65", "BA66", "BA67", "F3FB", "BA68", "F3FA", "BA69", "BA6A", "BA6B", "BA6C", "BA6D", "BA6E", "BA6F", "BA70", "B4D8", "BA71", "BA72", "BA73", "F3FE", "F3F9", "BA74", "BA75", "F3FC", "BA76", "BA77", "BA78", "BA79", "BA7A", "BA7B", "F3FD", "BA7C", "BA7D", "BA7E", "BA80", "BA81", "BA82", "BA83", "BA84", "F4A1", "BA85", "BA86", "BA87", "BA88", "BA89", "BA8A", "F4A3", "BBC9", "BA8B", "BA8C", "F4A2", "BA8D", "BA8E", "BA8F", "BA90", "BA91", "BA92", "BA93", "BA94", "BA95", "BA96", "BA97", "BA98", "BA99", "F4A4", "BA9A", "BA9B", "BA9C", "BA9D", "BA9E", "BA9F", "B2BE", "F4A6", "F4A5", "BAA0", "BB40", "BB41", "BB42", "BB43", "BB44", "BB45", "BB46", "BB47", "BB48", "BB49", "BCAE", "BB4A", "BB4B", "BB4C", "BB4D", "BB4E", "BB4F", "BB50", "BB51", "BB52", "BB53", "BB54", "BB55", "BB56", "BB57", "BB58", "BB59", "BB5A", "BB5B", "BB5C", "BB5D", "BB5E", "BB5F", "BB60", "BB61", "BB62", "BB63", "BB64", "BB65", "BB66", "BB67", "BB68", "BB69", "BB6A", "BB6B", "BB6C", "BB6D", "BB6E", "C3D7", "D9E1", "BB6F", "BB70", "BB71", "BB72", "BB73", "BB74", "C0E0", "F4CC", "D7D1", "BB75", "BB76", "BB77", "BB78", "BB79", "BB7A", "BB7B", "BB7C", "BB7D", "BB7E", "BB80", "B7DB", "BB81", "BB82", "BB83", "BB84", "BB85", "BB86", "BB87", "F4CE", "C1A3", "BB88", "BB89", "C6C9", "BB8A", "B4D6", "D5B3", "BB8B", "BB8C", "BB8D", "F4D0", "F4CF", "F4D1", "CBDA", "BB8E", "BB8F", "F4D2", "BB90", "D4C1", "D6E0", "BB91", "BB92", "BB93", "BB94", "B7E0", "BB95", "BB96", "BB97", "C1B8", "BB98", "BB99", "C1BB", "F4D3", "BEAC", "BB9A", "BB9B", "BB9C", "BB9D", "BB9E", "B4E2", "BB9F", "BBA0", "F4D4", "F4D5", "BEAB", "BC40", "BC41", "F4D6", "BC42", "BC43", "BC44", "F4DB", "BC45", "F4D7", "F4DA", "BC46", "BAFD", "BC47", "F4D8", "F4D9", "BC48", "BC49", "BC4A", "BC4B", "BC4C", "BC4D", "BC4E", "B8E2", "CCC7", "F4DC", "BC4F", "B2DA", "BC50", "BC51", "C3D3", "BC52", "BC53", "D4E3", "BFB7", "BC54", "BC55", "BC56", "BC57", "BC58", "BC59", "BC5A", "F4DD", "BC5B", "BC5C", "BC5D", "BC5E", "BC5F", "BC60", "C5B4", "BC61", "BC62", "BC63", "BC64", "BC65", "BC66", "BC67", "BC68", "F4E9", "BC69", "BC6A", "CFB5", "BC6B", "BC6C", "BC6D", "BC6E", "BC6F", "BC70", "BC71", "BC72", "BC73", "BC74", "BC75", "BC76", "BC77", "BC78", "CEC9", "BC79", "BC7A", "BC7B", "BC7C", "BC7D", "BC7E", "BC80", "BC81", "BC82", "BC83", "BC84", "BC85", "BC86", "BC87", "BC88", "BC89", "BC8A", "BC8B", "BC8C", "BC8D", "BC8E", "CBD8", "BC8F", "CBF7", "BC90", "BC91", "BC92", "BC93", "BDF4", "BC94", "BC95", "BC96", "D7CF", "BC97", "BC98", "BC99", "C0DB", "BC9A", "BC9B", "BC9C", "BC9D", "BC9E", "BC9F", "BCA0", "BD40", "BD41", "BD42", "BD43", "BD44", "BD45", "BD46", "BD47", "BD48", "BD49", "BD4A", "BD4B", "BD4C", "BD4D", "BD4E", "BD4F", "BD50", "BD51", "BD52", "BD53", "BD54", "BD55", "BD56", "BD57", "BD58", "BD59", "BD5A", "BD5B", "BD5C", "BD5D", "BD5E", "BD5F", "BD60", "BD61", "BD62", "BD63", "BD64", "BD65", "BD66", "BD67", "BD68", "BD69", "BD6A", "BD6B", "BD6C", "BD6D", "BD6E", "BD6F", "BD70", "BD71", "BD72", "BD73", "BD74", "BD75", "BD76", "D0F5", "BD77", "BD78", "BD79", "BD7A", "BD7B", "BD7C", "BD7D", "BD7E", "F4EA", "BD80", "BD81", "BD82", "BD83", "BD84", "BD85", "BD86", "BD87", "BD88", "BD89", "BD8A", "BD8B", "BD8C", "BD8D", "BD8E", "BD8F", "BD90", "BD91", "BD92", "BD93", "BD94", "BD95", "BD96", "BD97", "BD98", "BD99", "BD9A", "BD9B", "BD9C", "BD9D", "BD9E", "BD9F", "BDA0", "BE40", "BE41", "BE42", "BE43", "BE44", "BE45", "BE46", "BE47", "BE48", "BE49", "BE4A", "BE4B", "BE4C", "F4EB", "BE4D", "BE4E", "BE4F", "BE50", "BE51", "BE52", "BE53", "F4EC", "BE54", "BE55", "BE56", "BE57", "BE58", "BE59", "BE5A", "BE5B", "BE5C", "BE5D", "BE5E", "BE5F", "BE60", "BE61", "BE62", "BE63", "BE64", "BE65", "BE66", "BE67", "BE68", "BE69", "BE6A", "BE6B", "BE6C", "BE6D", "BE6E", "BE6F", "BE70", "BE71", "BE72", "BE73", "BE74", "BE75", "BE76", "BE77", "BE78", "BE79", "BE7A", "BE7B", "BE7C", "BE7D", "BE7E", "BE80", "BE81", "BE82", "BE83", "BE84", "BE85", "BE86", "BE87", "BE88", "BE89", "BE8A", "BE8B", "BE8C", "BE8D", "BE8E", "BE8F", "BE90", "BE91", "BE92", "BE93", "BE94", "BE95", "BE96", "BE97", "BE98", "BE99", "BE9A", "BE9B", "BE9C", "BE9D", "BE9E", "BE9F", "BEA0", "BF40", "BF41", "BF42", "BF43", "BF44", "BF45", "BF46", "BF47", "BF48", "BF49", "BF4A", "BF4B", "BF4C", "BF4D", "BF4E", "BF4F", "BF50", "BF51", "BF52", "BF53", "BF54", "BF55", "BF56", "BF57", "BF58", "BF59", "BF5A", "BF5B", "BF5C", "BF5D", "BF5E", "BF5F", "BF60", "BF61", "BF62", "BF63", "BF64", "BF65", "BF66", "BF67", "BF68", "BF69", "BF6A", "BF6B", "BF6C", "BF6D", "BF6E", "BF6F", "BF70", "BF71", "BF72", "BF73", "BF74", "BF75", "BF76", "BF77", "BF78", "BF79", "BF7A", "BF7B", "BF7C", "BF7D", "BF7E", "BF80", "F7E3", "BF81", "BF82", "BF83", "BF84", "BF85", "B7B1", "BF86", "BF87", "BF88", "BF89", "BF8A", "F4ED", "BF8B", "BF8C", "BF8D", "BF8E", "BF8F", "BF90", "BF91", "BF92", "BF93", "BF94", "BF95", "BF96", "BF97", "BF98", "BF99", "BF9A", "BF9B", "BF9C", "BF9D", "BF9E", "BF9F", "BFA0", "C040", "C041", "C042", "C043", "C044", "C045", "C046", "C047", "C048", "C049", "C04A", "C04B", "C04C", "C04D", "C04E", "C04F", "C050", "C051", "C052", "C053", "C054", "C055", "C056", "C057", "C058", "C059", "C05A", "C05B", "C05C", "C05D", "C05E", "C05F", "C060", "C061", "C062", "C063", "D7EB", "C064", "C065", "C066", "C067", "C068", "C069", "C06A", "C06B", "C06C", "C06D", "C06E", "C06F", "C070", "C071", "C072", "C073", "C074", "C075", "C076", "C077", "C078", "C079", "C07A", "C07B", "F4EE", "C07C", "C07D", "C07E", "E6F9", "BEC0", "E6FA", "BAEC", "E6FB", "CFCB", "E6FC", "D4BC", "BCB6", "E6FD", "E6FE", "BCCD", "C8D2", "CEB3", "E7A1", "C080", "B4BF", "E7A2", "C9B4", "B8D9", "C4C9", "C081", "D7DD", "C2DA", "B7D7", "D6BD", "CEC6", "B7C4", "C082", "C083", "C5A6", "E7A3", "CFDF", "E7A4", "E7A5", "E7A6", "C1B7", "D7E9", "C9F0", "CFB8", "D6AF", "D6D5", "E7A7", "B0ED", "E7A8", "E7A9", "C9DC", "D2EF", "BEAD", "E7AA", "B0F3", "C8DE", "BDE1", "E7AB", "C8C6", "C084", "E7AC", "BBE6", "B8F8", "D1A4", "E7AD", "C2E7", "BEF8", "BDCA", "CDB3", "E7AE", "E7AF", "BEEE", "D0E5", "C085", "CBE7", "CCD0", "BCCC", "E7B0", "BCA8", "D0F7", "E7B1", "C086", "D0F8", "E7B2", "E7B3", "B4C2", "E7B4", "E7B5", "C9FE", "CEAC", "C3E0", "E7B7", "B1C1", "B3F1", "C087", "E7B8", "E7B9", "D7DB", "D5C0", "E7BA", "C2CC", "D7BA", "E7BB", "E7BC", "E7BD", "BCEA", "C3E5", "C0C2", "E7BE", "E7BF", "BCA9", "C088", "E7C0", "E7C1", "E7B6", "B6D0", "E7C2", "C089", "E7C3", "E7C4", "BBBA", "B5DE", "C2C6", "B1E0", "E7C5", "D4B5", "E7C6", "B8BF", "E7C8", "E7C7", "B7EC", "C08A", "E7C9", "B2F8", "E7CA", "E7CB", "E7CC", "E7CD", "E7CE", "E7CF", "E7D0", "D3A7", "CBF5", "E7D1", "E7D2", "E7D3", "E7D4", "C9C9", "E7D5", "E7D6", "E7D7", "E7D8", "E7D9", "BDC9", "E7DA", "F3BE", "C08B", "B8D7", "C08C", "C8B1", "C08D", "C08E", "C08F", "C090", "C091", "C092", "C093", "F3BF", "C094", "F3C0", "F3C1", "C095", "C096", "C097", "C098", "C099", "C09A", "C09B", "C09C", "C09D", "C09E", "B9DE", "CDF8", "C09F", "C0A0", "D8E8", "BAB1", "C140", "C2DE", "EEB7", "C141", "B7A3", "C142", "C143", "C144", "C145", "EEB9", "C146", "EEB8", "B0D5", "C147", "C148", "C149", "C14A", "C14B", "EEBB", "D5D6", "D7EF", "C14C", "C14D", "C14E", "D6C3", "C14F", "C150", "EEBD", "CAF0", "C151", "EEBC", "C152", "C153", "C154", "C155", "EEBE", "C156", "C157", "C158", "C159", "EEC0", "C15A", "C15B", "EEBF", "C15C", "C15D", "C15E", "C15F", "C160", "C161", "C162", "C163", "D1F2", "C164", "C7BC", "C165", "C3C0", "C166", "C167", "C168", "C169", "C16A", "B8E1", "C16B", "C16C", "C16D", "C16E", "C16F", "C1E7", "C170", "C171", "F4C6", "D0DF", "F4C7", "C172", "CFDB", "C173", "C174", "C8BA", "C175", "C176", "F4C8", "C177", "C178", "C179", "C17A", "C17B", "C17C", "C17D", "F4C9", "F4CA", "C17E", "F4CB", "C180", "C181", "C182", "C183", "C184", "D9FA", "B8FE", "C185", "C186", "E5F1", "D3F0", "C187", "F4E0", "C188", "CECC", "C189", "C18A", "C18B", "B3E1", "C18C", "C18D", "C18E", "C18F", "F1B4", "C190", "D2EE", "C191", "F4E1", "C192", "C193", "C194", "C195", "C196", "CFE8", "F4E2", "C197", "C198", "C7CC", "C199", "C19A", "C19B", "C19C", "C19D", "C19E", "B5D4", "B4E4", "F4E4", "C19F", "C1A0", "C240", "F4E3", "F4E5", "C241", "C242", "F4E6", "C243", "C244", "C245", "C246", "F4E7", "C247", "BAB2", "B0BF", "C248", "F4E8", "C249", "C24A", "C24B", "C24C", "C24D", "C24E", "C24F", "B7AD", "D2ED", "C250", "C251", "C252", "D2AB", "C0CF", "C253", "BFBC", "EBA3", "D5DF", "EAC8", "C254", "C255", "C256", "C257", "F1F3", "B6F8", "CBA3", "C258", "C259", "C4CD", "C25A", "F1E7", "C25B", "F1E8", "B8FB", "F1E9", "BAC4", "D4C5", "B0D2", "C25C", "C25D", "F1EA", "C25E", "C25F", "C260", "F1EB", "C261", "F1EC", "C262", "C263", "F1ED", "F1EE", "F1EF", "F1F1", "F1F0", "C5D5", "C264", "C265", "C266", "C267", "C268", "C269", "F1F2", "C26A", "B6FA", "C26B", "F1F4", "D2AE", "DEC7", "CBCA", "C26C", "C26D", "B3DC", "C26E", "B5A2", "C26F", "B9A2", "C270", "C271", "C4F4", "F1F5", "C272", "C273", "F1F6", "C274", "C275", "C276", "C1C4", "C1FB", "D6B0", "F1F7", "C277", "C278", "C279", "C27A", "F1F8", "C27B", "C1AA", "C27C", "C27D", "C27E", "C6B8", "C280", "BEDB", "C281", "C282", "C283", "C284", "C285", "C286", "C287", "C288", "C289", "C28A", "C28B", "C28C", "C28D", "C28E", "F1F9", "B4CF", "C28F", "C290", "C291", "C292", "C293", "C294", "F1FA", "C295", "C296", "C297", "C298", "C299", "C29A", "C29B", "C29C", "C29D", "C29E", "C29F", "C2A0", "C340", "EDB2", "EDB1", "C341", "C342", "CBE0", "D2DE", "C343", "CBC1", "D5D8", "C344", "C8E2", "C345", "C0DF", "BCA1", "C346", "C347", "C348", "C349", "C34A", "C34B", "EBC1", "C34C", "C34D", "D0A4", "C34E", "D6E2", "C34F", "B6C7", "B8D8", "EBC0", "B8CE", "C350", "EBBF", "B3A6", "B9C9", "D6AB", "C351", "B7F4", "B7CA", "C352", "C353", "C354", "BCE7", "B7BE", "EBC6", "C355", "EBC7", "B0B9", "BFCF", "C356", "EBC5", "D3FD", "C357", "EBC8", "C358", "C359", "EBC9", "C35A", "C35B", "B7CE", "C35C", "EBC2", "EBC4", "C9F6", "D6D7", "D5CD", "D0B2", "EBCF", "CEB8", "EBD0", "C35D", "B5A8", "C35E", "C35F", "C360", "C361", "C362", "B1B3", "EBD2", "CCA5", "C363", "C364", "C365", "C366", "C367", "C368", "C369", "C5D6", "EBD3", "C36A", "EBD1", "C5DF", "EBCE", "CAA4", "EBD5", "B0FB", "C36B", "C36C", "BAFA", "C36D", "C36E", "D8B7", "F1E3", "C36F", "EBCA", "EBCB", "EBCC", "EBCD", "EBD6", "E6C0", "EBD9", "C370", "BFE8", "D2C8", "EBD7", "EBDC", "B8EC", "EBD8", "C371", "BDBA", "C372", "D0D8", "C373", "B0B7", "C374", "EBDD", "C4DC", "C375", "C376", "C377", "C378", "D6AC", "C379", "C37A", "C37B", "B4E0", "C37C", "C37D", "C2F6", "BCB9", "C37E", "C380", "EBDA", "EBDB", "D4E0", "C6EA", "C4D4", "EBDF", "C5A7", "D9F5", "C381", "B2B1", "C382", "EBE4", "C383", "BDC5", "C384", "C385", "C386", "EBE2", "C387", "C388", "C389", "C38A", "C38B", "C38C", "C38D", "C38E", "C38F", "C390", "C391", "C392", "C393", "EBE3", "C394", "C395", "B8AC", "C396", "CDD1", "EBE5", "C397", "C398", "C399", "EBE1", "C39A", "C1B3", "C39B", "C39C", "C39D", "C39E", "C39F", "C6A2", "C3A0", "C440", "C441", "C442", "C443", "C444", "C445", "CCF3", "C446", "EBE6", "C447", "C0B0", "D2B8", "EBE7", "C448", "C449", "C44A", "B8AF", "B8AD", "C44B", "EBE8", "C7BB", "CDF3", "C44C", "C44D", "C44E", "EBEA", "EBEB", "C44F", "C450", "C451", "C452", "C453", "EBED", "C454", "C455", "C456", "C457", "D0C8", "C458", "EBF2", "C459", "EBEE", "C45A", "C45B", "C45C", "EBF1", "C8F9", "C45D", "D1FC", "EBEC", "C45E", "C45F", "EBE9", "C460", "C461", "C462", "C463", "B8B9", "CFD9", "C4E5", "EBEF", "EBF0", "CCDA", "CDC8", "B0F2", "C464", "EBF6", "C465", "C466", "C467", "C468", "C469", "EBF5", "C46A", "B2B2", "C46B", "C46C", "C46D", "C46E", "B8E0", "C46F", "EBF7", "C470", "C471", "C472", "C473", "C474", "C475", "B1EC", "C476", "C477", "CCC5", "C4A4", "CFA5", "C478", "C479", "C47A", "C47B", "C47C", "EBF9", "C47D", "C47E", "ECA2", "C480", "C5F2", "C481", "EBFA", "C482", "C483", "C484", "C485", "C486", "C487", "C488", "C489", "C9C5", "C48A", "C48B", "C48C", "C48D", "C48E", "C48F", "E2DF", "EBFE", "C490", "C491", "C492", "C493", "CDCE", "ECA1", "B1DB", "D3B7", "C494", "C495", "D2DC", "C496", "C497", "C498", "EBFD", "C499", "EBFB", "C49A", "C49B", "C49C", "C49D", "C49E", "C49F", "C4A0", "C540", "C541", "C542", "C543", "C544", "C545", "C546", "C547", "C548", "C549", "C54A", "C54B", "C54C", "C54D", "C54E", "B3BC", "C54F", "C550", "C551", "EAB0", "C552", "C553", "D7D4", "C554", "F4AB", "B3F4", "C555", "C556", "C557", "C558", "C559", "D6C1", "D6C2", "C55A", "C55B", "C55C", "C55D", "C55E", "C55F", "D5E9", "BECA", "C560", "F4A7", "C561", "D2A8", "F4A8", "F4A9", "C562", "F4AA", "BECB", "D3DF", "C563", "C564", "C565", "C566", "C567", "C9E0", "C9E1", "C568", "C569", "F3C2", "C56A", "CAE6", "C56B", "CCF2", "C56C", "C56D", "C56E", "C56F", "C570", "C571", "E2B6", "CBB4", "C572", "CEE8", "D6DB", "C573", "F4AD", "F4AE", "F4AF", "C574", "C575", "C576", "C577", "F4B2", "C578", "BABD", "F4B3", "B0E3", "F4B0", "C579", "F4B1", "BDA2", "B2D5", "C57A", "F4B6", "F4B7", "B6E6", "B2B0", "CFCF", "F4B4", "B4AC", "C57B", "F4B5", "C57C", "C57D", "F4B8", "C57E", "C580", "C581", "C582", "C583", "F4B9", "C584", "C585", "CDA7", "C586", "F4BA", "C587", "F4BB", "C588", "C589", "C58A", "F4BC", "C58B", "C58C", "C58D", "C58E", "C58F", "C590", "C591", "C592", "CBD2", "C593", "F4BD", "C594", "C595", "C596", "C597", "F4BE", "C598", "C599", "C59A", "C59B", "C59C", "C59D", "C59E", "C59F", "F4BF", "C5A0", "C640", "C641", "C642", "C643", "F4DE", "C1BC", "BCE8", "C644", "C9AB", "D1DE", "E5F5", "C645", "C646", "C647", "C648", "DCB3", "D2D5", "C649", "C64A", "DCB4", "B0AC", "DCB5", "C64B", "C64C", "BDDA", "C64D", "DCB9", "C64E", "C64F", "C650", "D8C2", "C651", "DCB7", "D3F3", "C652", "C9D6", "DCBA", "DCB6", "C653", "DCBB", "C3A2", "C654", "C655", "C656", "C657", "DCBC", "DCC5", "DCBD", "C658", "C659", "CEDF", "D6A5", "C65A", "DCCF", "C65B", "DCCD", "C65C", "C65D", "DCD2", "BDE6", "C2AB", "C65E", "DCB8", "DCCB", "DCCE", "DCBE", "B7D2", "B0C5", "DCC7", "D0BE", "DCC1", "BBA8", "C65F", "B7BC", "DCCC", "C660", "C661", "DCC6", "DCBF", "C7DB", "C662", "C663", "C664", "D1BF", "DCC0", "C665", "C666", "DCCA", "C667", "C668", "DCD0", "C669", "C66A", "CEAD", "DCC2", "C66B", "DCC3", "DCC8", "DCC9", "B2D4", "DCD1", "CBD5", "C66C", "D4B7", "DCDB", "DCDF", "CCA6", "DCE6", "C66D", "C3E7", "DCDC", "C66E", "C66F", "BFC1", "DCD9", "C670", "B0FA", "B9B6", "DCE5", "DCD3", "C671", "DCC4", "DCD6", "C8F4", "BFE0", "C672", "C673", "C674", "C675", "C9BB", "C676", "C677", "C678", "B1BD", "C679", "D3A2", "C67A", "C67B", "DCDA", "C67C", "C67D", "DCD5", "C67E", "C6BB", "C680", "DCDE", "C681", "C682", "C683", "C684", "C685", "D7C2", "C3AF", "B7B6", "C7D1", "C3A9", "DCE2", "DCD8", "DCEB", "DCD4", "C686", "C687", "DCDD", "C688", "BEA5", "DCD7", "C689", "DCE0", "C68A", "C68B", "DCE3", "DCE4", "C68C", "DCF8", "C68D", "C68E", "DCE1", "DDA2", "DCE7", "C68F", "C690", "C691", "C692", "C693", "C694", "C695", "C696", "C697", "C698", "BCEB", "B4C4", "C699", "C69A", "C3A3", "B2E7", "DCFA", "C69B", "DCF2", "C69C", "DCEF", "C69D", "DCFC", "DCEE", "D2F0", "B2E8", "C69E", "C8D7", "C8E3", "DCFB", "C69F", "DCED", "C6A0", "C740", "C741", "DCF7", "C742", "C743", "DCF5", "C744", "C745", "BEA3", "DCF4", "C746", "B2DD", "C747", "C748", "C749", "C74A", "C74B", "DCF3", "BCF6", "DCE8", "BBC4", "C74C", "C0F3", "C74D", "C74E", "C74F", "C750", "C751", "BCD4", "DCE9", "DCEA", "C752", "DCF1", "DCF6", "DCF9", "B5B4", "C753", "C8D9", "BBE7", "DCFE", "DCFD", "D3AB", "DDA1", "DDA3", "DDA5", "D2F1", "DDA4", "DDA6", "DDA7", "D2A9", "C754", "C755", "C756", "C757", "C758", "C759", "C75A", "BAC9", "DDA9", "C75B", "C75C", "DDB6", "DDB1", "DDB4", "C75D", "C75E", "C75F", "C760", "C761", "C762", "C763", "DDB0", "C6CE", "C764", "C765", "C0F2", "C766", "C767", "C768", "C769", "C9AF", "C76A", "C76B", "C76C", "DCEC", "DDAE", "C76D", "C76E", "C76F", "C770", "DDB7", "C771", "C772", "DCF0", "DDAF", "C773", "DDB8", "C774", "DDAC", "C775", "C776", "C777", "C778", "C779", "C77A", "C77B", "DDB9", "DDB3", "DDAD", "C4AA", "C77C", "C77D", "C77E", "C780", "DDA8", "C0B3", "C1AB", "DDAA", "DDAB", "C781", "DDB2", "BBF1", "DDB5", "D3A8", "DDBA", "C782", "DDBB", "C3A7", "C783", "C784", "DDD2", "DDBC", "C785", "C786", "C787", "DDD1", "C788", "B9BD", "C789", "C78A", "BED5", "C78B", "BEFA", "C78C", "C78D", "BACA", "C78E", "C78F", "C790", "C791", "DDCA", "C792", "DDC5", "C793", "DDBF", "C794", "C795", "C796", "B2CB", "DDC3", "C797", "DDCB", "B2A4", "DDD5", "C798", "C799", "C79A", "DDBE", "C79B", "C79C", "C79D", "C6D0", "DDD0", "C79E", "C79F", "C7A0", "C840", "C841", "DDD4", "C1E2", "B7C6", "C842", "C843", "C844", "C845", "C846", "DDCE", "DDCF", "C847", "C848", "C849", "DDC4", "C84A", "C84B", "C84C", "DDBD", "C84D", "DDCD", "CCD1", "C84E", "DDC9", "C84F", "C850", "C851", "C852", "DDC2", "C3C8", "C6BC", "CEAE", "DDCC", "C853", "DDC8", "C854", "C855", "C856", "C857", "C858", "C859", "DDC1", "C85A", "C85B", "C85C", "DDC6", "C2DC", "C85D", "C85E", "C85F", "C860", "C861", "C862", "D3A9", "D3AA", "DDD3", "CFF4", "C8F8", "C863", "C864", "C865", "C866", "C867", "C868", "C869", "C86A", "DDE6", "C86B", "C86C", "C86D", "C86E", "C86F", "C870", "DDC7", "C871", "C872", "C873", "DDE0", "C2E4", "C874", "C875", "C876", "C877", "C878", "C879", "C87A", "C87B", "DDE1", "C87C", "C87D", "C87E", "C880", "C881", "C882", "C883", "C884", "C885", "C886", "DDD7", "C887", "C888", "C889", "C88A", "C88B", "D6F8", "C88C", "DDD9", "DDD8", "B8F0", "DDD6", "C88D", "C88E", "C88F", "C890", "C6CF", "C891", "B6AD", "C892", "C893", "C894", "C895", "C896", "DDE2", "C897", "BAF9", "D4E1", "DDE7", "C898", "C899", "C89A", "B4D0", "C89B", "DDDA", "C89C", "BFFB", "DDE3", "C89D", "DDDF", "C89E", "DDDD", "C89F", "C8A0", "C940", "C941", "C942", "C943", "C944", "B5D9", "C945", "C946", "C947", "C948", "DDDB", "DDDC", "DDDE", "C949", "BDAF", "DDE4", "C94A", "DDE5", "C94B", "C94C", "C94D", "C94E", "C94F", "C950", "C951", "C952", "DDF5", "C953", "C3C9", "C954", "C955", "CBE2", "C956", "C957", "C958", "C959", "DDF2", "C95A", "C95B", "C95C", "C95D", "C95E", "C95F", "C960", "C961", "C962", "C963", "C964", "C965", "C966", "D8E1", "C967", "C968", "C6D1", "C969", "DDF4", "C96A", "C96B", "C96C", "D5F4", "DDF3", "DDF0", "C96D", "C96E", "DDEC", "C96F", "DDEF", "C970", "DDE8", "C971", "C972", "D0EE", "C973", "C974", "C975", "C976", "C8D8", "DDEE", "C977", "C978", "DDE9", "C979", "C97A", "DDEA", "CBF2", "C97B", "DDED", "C97C", "C97D", "B1CD", "C97E", "C980", "C981", "C982", "C983", "C984", "C0B6", "C985", "BCBB", "DDF1", "C986", "C987", "DDF7", "C988", "DDF6", "DDEB", "C989", "C98A", "C98B", "C98C", "C98D", "C5EE", "C98E", "C98F", "C990", "DDFB", "C991", "C992", "C993", "C994", "C995", "C996", "C997", "C998", "C999", "C99A", "C99B", "DEA4", "C99C", "C99D", "DEA3", "C99E", "C99F", "C9A0", "CA40", "CA41", "CA42", "CA43", "CA44", "CA45", "CA46", "CA47", "CA48", "DDF8", "CA49", "CA4A", "CA4B", "CA4C", "C3EF", "CA4D", "C2FB", "CA4E", "CA4F", "CA50", "D5E1", "CA51", "CA52", "CEB5", "CA53", "CA54", "CA55", "CA56", "DDFD", "CA57", "B2CC", "CA58", "CA59", "CA5A", "CA5B", "CA5C", "CA5D", "CA5E", "CA5F", "CA60", "C4E8", "CADF", "CA61", "CA62", "CA63", "CA64", "CA65", "CA66", "CA67", "CA68", "CA69", "CA6A", "C7BE", "DDFA", "DDFC", "DDFE", "DEA2", "B0AA", "B1CE", "CA6B", "CA6C", "CA6D", "CA6E", "CA6F", "DEAC", "CA70", "CA71", "CA72", "CA73", "DEA6", "BDB6", "C8EF", "CA74", "CA75", "CA76", "CA77", "CA78", "CA79", "CA7A", "CA7B", "CA7C", "CA7D", "CA7E", "DEA1", "CA80", "CA81", "DEA5", "CA82", "CA83", "CA84", "CA85", "DEA9", "CA86", "CA87", "CA88", "CA89", "CA8A", "DEA8", "CA8B", "CA8C", "CA8D", "DEA7", "CA8E", "CA8F", "CA90", "CA91", "CA92", "CA93", "CA94", "CA95", "CA96", "DEAD", "CA97", "D4CC", "CA98", "CA99", "CA9A", "CA9B", "DEB3", "DEAA", "DEAE", "CA9C", "CA9D", "C0D9", "CA9E", "CA9F", "CAA0", "CB40", "CB41", "B1A1", "DEB6", "CB42", "DEB1", "CB43", "CB44", "CB45", "CB46", "CB47", "CB48", "CB49", "DEB2", "CB4A", "CB4B", "CB4C", "CB4D", "CB4E", "CB4F", "CB50", "CB51", "CB52", "CB53", "CB54", "D1A6", "DEB5", "CB55", "CB56", "CB57", "CB58", "CB59", "CB5A", "CB5B", "DEAF", "CB5C", "CB5D", "CB5E", "DEB0", "CB5F", "D0BD", "CB60", "CB61", "CB62", "DEB4", "CAED", "DEB9", "CB63", "CB64", "CB65", "CB66", "CB67", "CB68", "DEB8", "CB69", "DEB7", "CB6A", "CB6B", "CB6C", "CB6D", "CB6E", "CB6F", "CB70", "DEBB", "CB71", "CB72", "CB73", "CB74", "CB75", "CB76", "CB77", "BDE5", "CB78", "CB79", "CB7A", "CB7B", "CB7C", "B2D8", "C3EA", "CB7D", "CB7E", "DEBA", "CB80", "C5BA", "CB81", "CB82", "CB83", "CB84", "CB85", "CB86", "DEBC", "CB87", "CB88", "CB89", "CB8A", "CB8B", "CB8C", "CB8D", "CCD9", "CB8E", "CB8F", "CB90", "CB91", "B7AA", "CB92", "CB93", "CB94", "CB95", "CB96", "CB97", "CB98", "CB99", "CB9A", "CB9B", "CB9C", "CB9D", "CB9E", "CB9F", "CBA0", "CC40", "CC41", "D4E5", "CC42", "CC43", "CC44", "DEBD", "CC45", "CC46", "CC47", "CC48", "CC49", "DEBF", "CC4A", "CC4B", "CC4C", "CC4D", "CC4E", "CC4F", "CC50", "CC51", "CC52", "CC53", "CC54", "C4A2", "CC55", "CC56", "CC57", "CC58", "DEC1", "CC59", "CC5A", "CC5B", "CC5C", "CC5D", "CC5E", "CC5F", "CC60", "CC61", "CC62", "CC63", "CC64", "CC65", "CC66", "CC67", "CC68", "DEBE", "CC69", "DEC0", "CC6A", "CC6B", "CC6C", "CC6D", "CC6E", "CC6F", "CC70", "CC71", "CC72", "CC73", "CC74", "CC75", "CC76", "CC77", "D5BA", "CC78", "CC79", "CC7A", "DEC2", "CC7B", "CC7C", "CC7D", "CC7E", "CC80", "CC81", "CC82", "CC83", "CC84", "CC85", "CC86", "CC87", "CC88", "CC89", "CC8A", "CC8B", "F2AE", "BBA2", "C2B2", "C5B0", "C2C7", "CC8C", "CC8D", "F2AF", "CC8E", "CC8F", "CC90", "CC91", "CC92", "D0E9", "CC93", "CC94", "CC95", "D3DD", "CC96", "CC97", "CC98", "EBBD", "CC99", "CC9A", "CC9B", "CC9C", "CC9D", "CC9E", "CC9F", "CCA0", "B3E6", "F2B0", "CD40", "F2B1", "CD41", "CD42", "CAAD", "CD43", "CD44", "CD45", "CD46", "CD47", "CD48", "CD49", "BAE7", "F2B3", "F2B5", "F2B4", "CBE4", "CFBA", "F2B2", "CAB4", "D2CF", "C2EC", "CD4A", "CD4B", "CD4C", "CD4D", "CD4E", "CD4F", "CD50", "CEC3", "F2B8", "B0F6", "F2B7", "CD51", "CD52", "CD53", "CD54", "CD55", "F2BE", "CD56", "B2CF", "CD57", "CD58", "CD59", "CD5A", "CD5B", "CD5C", "D1C1", "F2BA", "CD5D", "CD5E", "CD5F", "CD60", "CD61", "F2BC", "D4E9", "CD62", "CD63", "F2BB", "F2B6", "F2BF", "F2BD", "CD64", "F2B9", "CD65", "CD66", "F2C7", "F2C4", "F2C6", "CD67", "CD68", "F2CA", "F2C2", "F2C0", "CD69", "CD6A", "CD6B", "F2C5", "CD6C", "CD6D", "CD6E", "CD6F", "CD70", "D6FB", "CD71", "CD72", "CD73", "F2C1", "CD74", "C7F9", "C9DF", "CD75", "F2C8", "B9C6", "B5B0", "CD76", "CD77", "F2C3", "F2C9", "F2D0", "F2D6", "CD78", "CD79", "BBD7", "CD7A", "CD7B", "CD7C", "F2D5", "CDDC", "CD7D", "D6EB", "CD7E", "CD80", "F2D2", "F2D4", "CD81", "CD82", "CD83", "CD84", "B8F2", "CD85", "CD86", "CD87", "CD88", "F2CB", "CD89", "CD8A", "CD8B", "F2CE", "C2F9", "CD8C", "D5DD", "F2CC", "F2CD", "F2CF", "F2D3", "CD8D", "CD8E", "CD8F", "F2D9", "D3BC", "CD90", "CD91", "CD92", "CD93", "B6EA", "CD94", "CAF1", "CD95", "B7E4", "F2D7", "CD96", "CD97", "CD98", "F2D8", "F2DA", "F2DD", "F2DB", "CD99", "CD9A", "F2DC", "CD9B", "CD9C", "CD9D", "CD9E", "D1D1", "F2D1", "CD9F", "CDC9", "CDA0", "CECF", "D6A9", "CE40", "F2E3", "CE41", "C3DB", "CE42", "F2E0", "CE43", "CE44", "C0AF", "F2EC", "F2DE", "CE45", "F2E1", "CE46", "CE47", "CE48", "F2E8", "CE49", "CE4A", "CE4B", "CE4C", "F2E2", "CE4D", "CE4E", "F2E7", "CE4F", "CE50", "F2E6", "CE51", "CE52", "F2E9", "CE53", "CE54", "CE55", "F2DF", "CE56", "CE57", "F2E4", "F2EA", "CE58", "CE59", "CE5A", "CE5B", "CE5C", "CE5D", "CE5E", "D3AC", "F2E5", "B2F5", "CE5F", "CE60", "F2F2", "CE61", "D0AB", "CE62", "CE63", "CE64", "CE65", "F2F5", "CE66", "CE67", "CE68", "BBC8", "CE69", "F2F9", "CE6A", "CE6B", "CE6C", "CE6D", "CE6E", "CE6F", "F2F0", "CE70", "CE71", "F2F6", "F2F8", "F2FA", "CE72", "CE73", "CE74", "CE75", "CE76", "CE77", "CE78", "CE79", "F2F3", "CE7A", "F2F1", "CE7B", "CE7C", "CE7D", "BAFB", "CE7E", "B5FB", "CE80", "CE81", "CE82", "CE83", "F2EF", "F2F7", "F2ED", "F2EE", "CE84", "CE85", "CE86", "F2EB", "F3A6", "CE87", "F3A3", "CE88", "CE89", "F3A2", "CE8A", "CE8B", "F2F4", "CE8C", "C8DA", "CE8D", "CE8E", "CE8F", "CE90", "CE91", "F2FB", "CE92", "CE93", "CE94", "F3A5", "CE95", "CE96", "CE97", "CE98", "CE99", "CE9A", "CE9B", "C3F8", "CE9C", "CE9D", "CE9E", "CE9F", "CEA0", "CF40", "CF41", "CF42", "F2FD", "CF43", "CF44", "F3A7", "F3A9", "F3A4", "CF45", "F2FC", "CF46", "CF47", "CF48", "F3AB", "CF49", "F3AA", "CF4A", "CF4B", "CF4C", "CF4D", "C2DD", "CF4E", "CF4F", "F3AE", "CF50", "CF51", "F3B0", "CF52", "CF53", "CF54", "CF55", "CF56", "F3A1", "CF57", "CF58", "CF59", "F3B1", "F3AC", "CF5A", "CF5B", "CF5C", "CF5D", "CF5E", "F3AF", "F2FE", "F3AD", "CF5F", "CF60", "CF61", "CF62", "CF63", "CF64", "CF65", "F3B2", "CF66", "CF67", "CF68", "CF69", "F3B4", "CF6A", "CF6B", "CF6C", "CF6D", "F3A8", "CF6E", "CF6F", "CF70", "CF71", "F3B3", "CF72", "CF73", "CF74", "F3B5", "CF75", "CF76", "CF77", "CF78", "CF79", "CF7A", "CF7B", "CF7C", "CF7D", "CF7E", "D0B7", "CF80", "CF81", "CF82", "CF83", "F3B8", "CF84", "CF85", "CF86", "CF87", "D9F9", "CF88", "CF89", "CF8A", "CF8B", "CF8C", "CF8D", "F3B9", "CF8E", "CF8F", "CF90", "CF91", "CF92", "CF93", "CF94", "CF95", "F3B7", "CF96", "C8E4", "F3B6", "CF97", "CF98", "CF99", "CF9A", "F3BA", "CF9B", "CF9C", "CF9D", "CF9E", "CF9F", "F3BB", "B4C0", "CFA0", "D040", "D041", "D042", "D043", "D044", "D045", "D046", "D047", "D048", "D049", "D04A", "D04B", "D04C", "D04D", "EEC3", "D04E", "D04F", "D050", "D051", "D052", "D053", "F3BC", "D054", "D055", "F3BD", "D056", "D057", "D058", "D1AA", "D059", "D05A", "D05B", "F4AC", "D0C6", "D05C", "D05D", "D05E", "D05F", "D060", "D061", "D0D0", "D1DC", "D062", "D063", "D064", "D065", "D066", "D067", "CFCE", "D068", "D069", "BDD6", "D06A", "D1C3", "D06B", "D06C", "D06D", "D06E", "D06F", "D070", "D071", "BAE2", "E1E9", "D2C2", "F1C2", "B2B9", "D072", "D073", "B1ED", "F1C3", "D074", "C9C0", "B3C4", "D075", "D9F2", "D076", "CBA5", "D077", "F1C4", "D078", "D079", "D07A", "D07B", "D6D4", "D07C", "D07D", "D07E", "D080", "D081", "F1C5", "F4C0", "F1C6", "D082", "D4AC", "F1C7", "D083", "B0C0", "F4C1", "D084", "D085", "F4C2", "D086", "D087", "B4FC", "D088", "C5DB", "D089", "D08A", "D08B", "D08C", "CCBB", "D08D", "D08E", "D08F", "D0E4", "D090", "D091", "D092", "D093", "D094", "CDE0", "D095", "D096", "D097", "D098", "D099", "F1C8", "D09A", "D9F3", "D09B", "D09C", "D09D", "D09E", "D09F", "D0A0", "B1BB", "D140", "CFAE", "D141", "D142", "D143", "B8A4", "D144", "D145", "D146", "D147", "D148", "F1CA", "D149", "D14A", "D14B", "D14C", "F1CB", "D14D", "D14E", "D14F", "D150", "B2C3", "C1D1", "D151", "D152", "D7B0", "F1C9", "D153", "D154", "F1CC", "D155", "D156", "D157", "D158", "F1CE", "D159", "D15A", "D15B", "D9F6", "D15C", "D2E1", "D4A3", "D15D", "D15E", "F4C3", "C8B9", "D15F", "D160", "D161", "D162", "D163", "F4C4", "D164", "D165", "F1CD", "F1CF", "BFE3", "F1D0", "D166", "D167", "F1D4", "D168", "D169", "D16A", "D16B", "D16C", "D16D", "D16E", "F1D6", "F1D1", "D16F", "C9D1", "C5E1", "D170", "D171", "D172", "C2E3", "B9FC", "D173", "D174", "F1D3", "D175", "F1D5", "D176", "D177", "D178", "B9D3", "D179", "D17A", "D17B", "D17C", "D17D", "D17E", "D180", "F1DB", "D181", "D182", "D183", "D184", "D185", "BAD6", "D186", "B0FD", "F1D9", "D187", "D188", "D189", "D18A", "D18B", "F1D8", "F1D2", "F1DA", "D18C", "D18D", "D18E", "D18F", "D190", "F1D7", "D191", "D192", "D193", "C8EC", "D194", "D195", "D196", "D197", "CDCA", "F1DD", "D198", "D199", "D19A", "D19B", "E5BD", "D19C", "D19D", "D19E", "F1DC", "D19F", "F1DE", "D1A0", "D240", "D241", "D242", "D243", "D244", "D245", "D246", "D247", "D248", "F1DF", "D249", "D24A", "CFE5", "D24B", "D24C", "D24D", "D24E", "D24F", "D250", "D251", "D252", "D253", "D254", "D255", "D256", "D257", "D258", "D259", "D25A", "D25B", "D25C", "D25D", "D25E", "D25F", "D260", "D261", "D262", "D263", "F4C5", "BDF3", "D264", "D265", "D266", "D267", "D268", "D269", "F1E0", "D26A", "D26B", "D26C", "D26D", "D26E", "D26F", "D270", "D271", "D272", "D273", "D274", "D275", "D276", "D277", "D278", "D279", "D27A", "D27B", "D27C", "D27D", "F1E1", "D27E", "D280", "D281", "CEF7", "D282", "D2AA", "D283", "F1FB", "D284", "D285", "B8B2", "D286", "D287", "D288", "D289", "D28A", "D28B", "D28C", "D28D", "D28E", "D28F", "D290", "D291", "D292", "D293", "D294", "D295", "D296", "D297", "D298", "D299", "D29A", "D29B", "D29C", "D29D", "D29E", "D29F", "D2A0", "D340", "D341", "D342", "D343", "D344", "D345", "D346", "D347", "D348", "D349", "D34A", "D34B", "D34C", "D34D", "D34E", "D34F", "D350", "D351", "D352", "D353", "D354", "D355", "D356", "D357", "D358", "D359", "D35A", "D35B", "D35C", "D35D", "D35E", "BCFB", "B9DB", "D35F", "B9E6", "C3D9", "CAD3", "EAE8", "C0C0", "BEF5", "EAE9", "EAEA", "EAEB", "D360", "EAEC", "EAED", "EAEE", "EAEF", "BDC7", "D361", "D362", "D363", "F5FB", "D364", "D365", "D366", "F5FD", "D367", "F5FE", "D368", "F5FC", "D369", "D36A", "D36B", "D36C", "BDE2", "D36D", "F6A1", "B4A5", "D36E", "D36F", "D370", "D371", "F6A2", "D372", "D373", "D374", "F6A3", "D375", "D376", "D377", "ECB2", "D378", "D379", "D37A", "D37B", "D37C", "D37D", "D37E", "D380", "D381", "D382", "D383", "D384", "D1D4", "D385", "D386", "D387", "D388", "D389", "D38A", "D9EA", "D38B", "D38C", "D38D", "D38E", "D38F", "D390", "D391", "D392", "D393", "D394", "D395", "D396", "D397", "D398", "D399", "D39A", "D39B", "D39C", "D39D", "D39E", "D39F", "D3A0", "D440", "D441", "D442", "D443", "D444", "D445", "D446", "D447", "D448", "D449", "D44A", "D44B", "D44C", "D44D", "D44E", "D44F", "D450", "D451", "D452", "D453", "D454", "D455", "D456", "D457", "D458", "D459", "D45A", "D45B", "D45C", "D45D", "D45E", "D45F", "F6A4", "D460", "D461", "D462", "D463", "D464", "D465", "D466", "D467", "D468", "EEBA", "D469", "D46A", "D46B", "D46C", "D46D", "D46E", "D46F", "D470", "D471", "D472", "D473", "D474", "D475", "D476", "D477", "D478", "D479", "D47A", "D47B", "D47C", "D47D", "D47E", "D480", "D481", "D482", "D483", "D484", "D485", "D486", "D487", "D488", "D489", "D48A", "D48B", "D48C", "D48D", "D48E", "D48F", "D490", "D491", "D492", "D493", "D494", "D495", "D496", "D497", "D498", "D499", "D5B2", "D49A", "D49B", "D49C", "D49D", "D49E", "D49F", "D4A0", "D540", "D541", "D542", "D543", "D544", "D545", "D546", "D547", "D3FE", "CCDC", "D548", "D549", "D54A", "D54B", "D54C", "D54D", "D54E", "D54F", "CAC4", "D550", "D551", "D552", "D553", "D554", "D555", "D556", "D557", "D558", "D559", "D55A", "D55B", "D55C", "D55D", "D55E", "D55F", "D560", "D561", "D562", "D563", "D564", "D565", "D566", "D567", "D568", "D569", "D56A", "D56B", "D56C", "D56D", "D56E", "D56F", "D570", "D571", "D572", "D573", "D574", "D575", "D576", "D577", "D578", "D579", "D57A", "D57B", "D57C", "D57D", "D57E", "D580", "D581", "D582", "D583", "D584", "D585", "D586", "D587", "D588", "D589", "D58A", "D58B", "D58C", "D58D", "D58E", "D58F", "D590", "D591", "D592", "D593", "D594", "D595", "D596", "D597", "D598", "D599", "D59A", "D59B", "D59C", "D59D", "D59E", "D59F", "D5A0", "D640", "D641", "D642", "D643", "D644", "D645", "D646", "D647", "D648", "D649", "D64A", "D64B", "D64C", "D64D", "D64E", "D64F", "D650", "D651", "D652", "D653", "D654", "D655", "D656", "D657", "D658", "D659", "D65A", "D65B", "D65C", "D65D", "D65E", "D65F", "D660", "D661", "D662", "E5C0", "D663", "D664", "D665", "D666", "D667", "D668", "D669", "D66A", "D66B", "D66C", "D66D", "D66E", "D66F", "D670", "D671", "D672", "D673", "D674", "D675", "D676", "D677", "D678", "D679", "D67A", "D67B", "D67C", "D67D", "D67E", "D680", "D681", "F6A5", "D682", "D683", "D684", "D685", "D686", "D687", "D688", "D689", "D68A", "D68B", "D68C", "D68D", "D68E", "D68F", "D690", "D691", "D692", "D693", "D694", "D695", "D696", "D697", "D698", "D699", "D69A", "D69B", "D69C", "D69D", "D69E", "D69F", "D6A0", "D740", "D741", "D742", "D743", "D744", "D745", "D746", "D747", "D748", "D749", "D74A", "D74B", "D74C", "D74D", "D74E", "D74F", "D750", "D751", "D752", "D753", "D754", "D755", "D756", "D757", "D758", "D759", "D75A", "D75B", "D75C", "D75D", "D75E", "D75F", "BEAF", "D760", "D761", "D762", "D763", "D764", "C6A9", "D765", "D766", "D767", "D768", "D769", "D76A", "D76B", "D76C", "D76D", "D76E", "D76F", "D770", "D771", "D772", "D773", "D774", "D775", "D776", "D777", "D778", "D779", "D77A", "D77B", "D77C", "D77D", "D77E", "D780", "D781", "D782", "D783", "D784", "D785", "D786", "D787", "D788", "D789", "D78A", "D78B", "D78C", "D78D", "D78E", "D78F", "D790", "D791", "D792", "D793", "D794", "D795", "D796", "D797", "D798", "DAA5", "BCC6", "B6A9", "B8BC", "C8CF", "BCA5", "DAA6", "DAA7", "CCD6", "C8C3", "DAA8", "C6FD", "D799", "D1B5", "D2E9", "D1B6", "BCC7", "D79A", "BDB2", "BBE4", "DAA9", "DAAA", "D1C8", "DAAB", "D0ED", "B6EF", "C2DB", "D79B", "CBCF", "B7ED", "C9E8", "B7C3", "BEF7", "D6A4", "DAAC", "DAAD", "C6C0", "D7E7", "CAB6", "D79C", "D5A9", "CBDF", "D5EF", "DAAE", "D6DF", "B4CA", "DAB0", "DAAF", "D79D", "D2EB", "DAB1", "DAB2", "DAB3", "CAD4", "DAB4", "CAAB", "DAB5", "DAB6", "B3CF", "D6EF", "DAB7", "BBB0", "B5AE", "DAB8", "DAB9", "B9EE", "D1AF", "D2E8", "DABA", "B8C3", "CFEA", "B2EF", "DABB", "DABC", "D79E", "BDEB", "CEDC", "D3EF", "DABD", "CEF3", "DABE", "D3D5", "BBE5", "DABF", "CBB5", "CBD0", "DAC0", "C7EB", "D6EE", "DAC1", "C5B5", "B6C1", "DAC2", "B7CC", "BFCE", "DAC3", "DAC4", "CBAD", "DAC5", "B5F7", "DAC6", "C1C2", "D7BB", "DAC7", "CCB8", "D79F", "D2EA", "C4B1", "DAC8", "B5FD", "BBD1", "DAC9", "D0B3", "DACA", "DACB", "CEBD", "DACC", "DACD", "DACE", "B2F7", "DAD1", "DACF", "D1E8", "DAD0", "C3D5", "DAD2", "D7A0", "DAD3", "DAD4", "DAD5", "D0BB", "D2A5", "B0F9", "DAD6", "C7AB", "DAD7", "BDF7", "C3A1", "DAD8", "DAD9", "C3FD", "CCB7", "DADA", "DADB", "C0BE", "C6D7", "DADC", "DADD", "C7B4", "DADE", "DADF", "B9C8", "D840", "D841", "D842", "D843", "D844", "D845", "D846", "D847", "D848", "BBED", "D849", "D84A", "D84B", "D84C", "B6B9", "F4F8", "D84D", "F4F9", "D84E", "D84F", "CDE3", "D850", "D851", "D852", "D853", "D854", "D855", "D856", "D857", "F5B9", "D858", "D859", "D85A", "D85B", "EBE0", "D85C", "D85D", "D85E", "D85F", "D860", "D861", "CFF3", "BBBF", "D862", "D863", "D864", "D865", "D866", "D867", "D868", "BAC0", "D4A5", "D869", "D86A", "D86B", "D86C", "D86D", "D86E", "D86F", "E1D9", "D870", "D871", "D872", "D873", "F5F4", "B1AA", "B2F2", "D874", "D875", "D876", "D877", "D878", "D879", "D87A", "F5F5", "D87B", "D87C", "F5F7", "D87D", "D87E", "D880", "BAD1", "F5F6", "D881", "C3B2", "D882", "D883", "D884", "D885", "D886", "D887", "D888", "F5F9", "D889", "D88A", "D88B", "F5F8", "D88C", "D88D", "D88E", "D88F", "D890", "D891", "D892", "D893", "D894", "D895", "D896", "D897", "D898", "D899", "D89A", "D89B", "D89C", "D89D", "D89E", "D89F", "D8A0", "D940", "D941", "D942", "D943", "D944", "D945", "D946", "D947", "D948", "D949", "D94A", "D94B", "D94C", "D94D", "D94E", "D94F", "D950", "D951", "D952", "D953", "D954", "D955", "D956", "D957", "D958", "D959", "D95A", "D95B", "D95C", "D95D", "D95E", "D95F", "D960", "D961", "D962", "D963", "D964", "D965", "D966", "D967", "D968", "D969", "D96A", "D96B", "D96C", "D96D", "D96E", "D96F", "D970", "D971", "D972", "D973", "D974", "D975", "D976", "D977", "D978", "D979", "D97A", "D97B", "D97C", "D97D", "D97E", "D980", "D981", "D982", "D983", "D984", "D985", "D986", "D987", "D988", "D989", "D98A", "D98B", "D98C", "D98D", "D98E", "D98F", "D990", "D991", "D992", "D993", "D994", "D995", "D996", "D997", "D998", "D999", "D99A", "D99B", "D99C", "D99D", "D99E", "D99F", "D9A0", "DA40", "DA41", "DA42", "DA43", "DA44", "DA45", "DA46", "DA47", "DA48", "DA49", "DA4A", "DA4B", "DA4C", "DA4D", "DA4E", "B1B4", "D5EA", "B8BA", "DA4F", "B9B1", "B2C6", "D4F0", "CFCD", "B0DC", "D5CB", "BBF5", "D6CA", "B7B7", "CCB0", "C6B6", "B1E1", "B9BA", "D6FC", "B9E1", "B7A1", "BCFA", "EADA", "EADB", "CCF9", "B9F3", "EADC", "B4FB", "C3B3", "B7D1", "BAD8", "EADD", "D4F4", "EADE", "BCD6", "BBDF", "EADF", "C1DE", "C2B8", "D4DF", "D7CA", "EAE0", "EAE1", "EAE4", "EAE2", "EAE3", "C9DE", "B8B3", "B6C4", "EAE5", "CAEA", "C9CD", "B4CD", "DA50", "DA51", "E2D9", "C5E2", "EAE6", "C0B5", "DA52", "D7B8", "EAE7", "D7AC", "C8FC", "D8D3", "D8CD", "D4DE", "DA53", "D4F9", "C9C4", "D3AE", "B8D3", "B3E0", "DA54", "C9E2", "F4F6", "DA55", "DA56", "DA57", "BAD5", "DA58", "F4F7", "DA59", "DA5A", "D7DF", "DA5B", "DA5C", "F4F1", "B8B0", "D5D4", "B8CF", "C6F0", "DA5D", "DA5E", "DA5F", "DA60", "DA61", "DA62", "DA63", "DA64", "DA65", "B3C3", "DA66", "DA67", "F4F2", "B3AC", "DA68", "DA69", "DA6A", "DA6B", "D4BD", "C7F7", "DA6C", "DA6D", "DA6E", "DA6F", "DA70", "F4F4", "DA71", "DA72", "F4F3", "DA73", "DA74", "DA75", "DA76", "DA77", "DA78", "DA79", "DA7A", "DA7B", "DA7C", "CCCB", "DA7D", "DA7E", "DA80", "C8A4", "DA81", "DA82", "DA83", "DA84", "DA85", "DA86", "DA87", "DA88", "DA89", "DA8A", "DA8B", "DA8C", "DA8D", "F4F5", "DA8E", "D7E3", "C5BF", "F5C0", "DA8F", "DA90", "F5BB", "DA91", "F5C3", "DA92", "F5C2", "DA93", "D6BA", "F5C1", "DA94", "DA95", "DA96", "D4BE", "F5C4", "DA97", "F5CC", "DA98", "DA99", "DA9A", "DA9B", "B0CF", "B5F8", "DA9C", "F5C9", "F5CA", "DA9D", "C5DC", "DA9E", "DA9F", "DAA0", "DB40", "F5C5", "F5C6", "DB41", "DB42", "F5C7", "F5CB", "DB43", "BEE0", "F5C8", "B8FA", "DB44", "DB45", "DB46", "F5D0", "F5D3", "DB47", "DB48", "DB49", "BFE7", "DB4A", "B9F2", "F5BC", "F5CD", "DB4B", "DB4C", "C2B7", "DB4D", "DB4E", "DB4F", "CCF8", "DB50", "BCF9", "DB51", "F5CE", "F5CF", "F5D1", "B6E5", "F5D2", "DB52", "F5D5", "DB53", "DB54", "DB55", "DB56", "DB57", "DB58", "DB59", "F5BD", "DB5A", "DB5B", "DB5C", "F5D4", "D3BB", "DB5D", "B3EC", "DB5E", "DB5F", "CCA4", "DB60", "DB61", "DB62", "DB63", "F5D6", "DB64", "DB65", "DB66", "DB67", "DB68", "DB69", "DB6A", "DB6B", "F5D7", "BEE1", "F5D8", "DB6C", "DB6D", "CCDF", "F5DB", "DB6E", "DB6F", "DB70", "DB71", "DB72", "B2C8", "D7D9", "DB73", "F5D9", "DB74", "F5DA", "F5DC", "DB75", "F5E2", "DB76", "DB77", "DB78", "F5E0", "DB79", "DB7A", "DB7B", "F5DF", "F5DD", "DB7C", "DB7D", "F5E1", "DB7E", "DB80", "F5DE", "F5E4", "F5E5", "DB81", "CCE3", "DB82", "DB83", "E5BF", "B5B8", "F5E3", "F5E8", "CCA3", "DB84", "DB85", "DB86", "DB87", "DB88", "F5E6", "F5E7", "DB89", "DB8A", "DB8B", "DB8C", "DB8D", "DB8E", "F5BE", "DB8F", "DB90", "DB91", "DB92", "DB93", "DB94", "DB95", "DB96", "DB97", "DB98", "DB99", "DB9A", "B1C4", "DB9B", "DB9C", "F5BF", "DB9D", "DB9E", "B5C5", "B2E4", "DB9F", "F5EC", "F5E9", "DBA0", "B6D7", "DC40", "F5ED", "DC41", "F5EA", "DC42", "DC43", "DC44", "DC45", "DC46", "F5EB", "DC47", "DC48", "B4DA", "DC49", "D4EA", "DC4A", "DC4B", "DC4C", "F5EE", "DC4D", "B3F9", "DC4E", "DC4F", "DC50", "DC51", "DC52", "DC53", "DC54", "F5EF", "F5F1", "DC55", "DC56", "DC57", "F5F0", "DC58", "DC59", "DC5A", "DC5B", "DC5C", "DC5D", "DC5E", "F5F2", "DC5F", "F5F3", "DC60", "DC61", "DC62", "DC63", "DC64", "DC65", "DC66", "DC67", "DC68", "DC69", "DC6A", "DC6B", "C9ED", "B9AA", "DC6C", "DC6D", "C7FB", "DC6E", "DC6F", "B6E3", "DC70", "DC71", "DC72", "DC73", "DC74", "DC75", "DC76", "CCC9", "DC77", "DC78", "DC79", "DC7A", "DC7B", "DC7C", "DC7D", "DC7E", "DC80", "DC81", "DC82", "DC83", "DC84", "DC85", "DC86", "DC87", "DC88", "DC89", "DC8A", "EAA6", "DC8B", "DC8C", "DC8D", "DC8E", "DC8F", "DC90", "DC91", "DC92", "DC93", "DC94", "DC95", "DC96", "DC97", "DC98", "DC99", "DC9A", "DC9B", "DC9C", "DC9D", "DC9E", "DC9F", "DCA0", "DD40", "DD41", "DD42", "DD43", "DD44", "DD45", "DD46", "DD47", "DD48", "DD49", "DD4A", "DD4B", "DD4C", "DD4D", "DD4E", "DD4F", "DD50", "DD51", "DD52", "DD53", "DD54", "DD55", "DD56", "DD57", "DD58", "DD59", "DD5A", "DD5B", "DD5C", "DD5D", "DD5E", "DD5F", "DD60", "DD61", "DD62", "DD63", "DD64", "DD65", "DD66", "DD67", "DD68", "DD69", "DD6A", "DD6B", "DD6C", "DD6D", "DD6E", "DD6F", "DD70", "DD71", "DD72", "DD73", "DD74", "DD75", "DD76", "DD77", "DD78", "DD79", "DD7A", "DD7B", "DD7C", "DD7D", "DD7E", "DD80", "DD81", "DD82", "DD83", "DD84", "DD85", "DD86", "DD87", "DD88", "DD89", "DD8A", "DD8B", "DD8C", "DD8D", "DD8E", "DD8F", "DD90", "DD91", "DD92", "DD93", "DD94", "DD95", "DD96", "DD97", "DD98", "DD99", "DD9A", "DD9B", "DD9C", "DD9D", "DD9E", "DD9F", "DDA0", "DE40", "DE41", "DE42", "DE43", "DE44", "DE45", "DE46", "DE47", "DE48", "DE49", "DE4A", "DE4B", "DE4C", "DE4D", "DE4E", "DE4F", "DE50", "DE51", "DE52", "DE53", "DE54", "DE55", "DE56", "DE57", "DE58", "DE59", "DE5A", "DE5B", "DE5C", "DE5D", "DE5E", "DE5F", "DE60", "B3B5", "D4FE", "B9EC", "D0F9", "DE61", "E9ED", "D7AA", "E9EE", "C2D6", "C8ED", "BAE4", "E9EF", "E9F0", "E9F1", "D6E1", "E9F2", "E9F3", "E9F5", "E9F4", "E9F6", "E9F7", "C7E1", "E9F8", "D4D8", "E9F9", "BDCE", "DE62", "E9FA", "E9FB", "BDCF", "E9FC", "B8A8", "C1BE", "E9FD", "B1B2", "BBD4", "B9F5", "E9FE", "DE63", "EAA1", "EAA2", "EAA3", "B7F8", "BCAD", "DE64", "CAE4", "E0CE", "D4AF", "CFBD", "D5B7", "EAA4", "D5DE", "EAA5", "D0C1", "B9BC", "DE65", "B4C7", "B1D9", "DE66", "DE67", "DE68", "C0B1", "DE69", "DE6A", "DE6B", "DE6C", "B1E6", "B1E7", "DE6D", "B1E8", "DE6E", "DE6F", "DE70", "DE71", "B3BD", "C8E8", "DE72", "DE73", "DE74", "DE75", "E5C1", "DE76", "DE77", "B1DF", "DE78", "DE79", "DE7A", "C1C9", "B4EF", "DE7B", "DE7C", "C7A8", "D3D8", "DE7D", "C6F9", "D1B8", "DE7E", "B9FD", "C2F5", "DE80", "DE81", "DE82", "DE83", "DE84", "D3AD", "DE85", "D4CB", "BDFC", "DE86", "E5C2", "B7B5", "E5C3", "DE87", "DE88", "BBB9", "D5E2", "DE89", "BDF8", "D4B6", "CEA5", "C1AC", "B3D9", "DE8A", "DE8B", "CCF6", "DE8C", "E5C6", "E5C4", "E5C8", "DE8D", "E5CA", "E5C7", "B5CF", "C6C8", "DE8E", "B5FC", "E5C5", "DE8F", "CAF6", "DE90", "DE91", "E5C9", "DE92", "DE93", "DE94", "C3D4", "B1C5", "BCA3", "DE95", "DE96", "DE97", "D7B7", "DE98", "DE99", "CDCB", "CBCD", "CACA", "CCD3", "E5CC", "E5CB", "C4E6", "DE9A", "DE9B", "D1A1", "D1B7", "E5CD", "DE9C", "E5D0", "DE9D", "CDB8", "D6F0", "E5CF", "B5DD", "DE9E", "CDBE", "DE9F", "E5D1", "B6BA", "DEA0", "DF40", "CDA8", "B9E4", "DF41", "CAC5", "B3D1", "CBD9", "D4EC", "E5D2", "B7EA", "DF42", "DF43", "DF44", "E5CE", "DF45", "DF46", "DF47", "DF48", "DF49", "DF4A", "E5D5", "B4FE", "E5D6", "DF4B", "DF4C", "DF4D", "DF4E", "DF4F", "E5D3", "E5D4", "DF50", "D2DD", "DF51", "DF52", "C2DF", "B1C6", "DF53", "D3E2", "DF54", "DF55", "B6DD", "CBEC", "DF56", "E5D7", "DF57", "DF58", "D3F6", "DF59", "DF5A", "DF5B", "DF5C", "DF5D", "B1E9", "DF5E", "B6F4", "E5DA", "E5D8", "E5D9", "B5C0", "DF5F", "DF60", "DF61", "D2C5", "E5DC", "DF62", "DF63", "E5DE", "DF64", "DF65", "DF66", "DF67", "DF68", "DF69", "E5DD", "C7B2", "DF6A", "D2A3", "DF6B", "DF6C", "E5DB", "DF6D", "DF6E", "DF6F", "DF70", "D4E2", "D5DA", "DF71", "DF72", "DF73", "DF74", "DF75", "E5E0", "D7F1", "DF76", "DF77", "DF78", "DF79", "DF7A", "DF7B", "DF7C", "E5E1", "DF7D", "B1DC", "D1FB", "DF7E", "E5E2", "E5E4", "DF80", "DF81", "DF82", "DF83", "E5E3", "DF84", "DF85", "E5E5", "DF86", "DF87", "DF88", "DF89", "DF8A", "D2D8", "DF8B", "B5CB", "DF8C", "E7DF", "DF8D", "DAF5", "DF8E", "DAF8", "DF8F", "DAF6", "DF90", "DAF7", "DF91", "DF92", "DF93", "DAFA", "D0CF", "C4C7", "DF94", "DF95", "B0EE", "DF96", "DF97", "DF98", "D0B0", "DF99", "DAF9", "DF9A", "D3CA", "BAAA", "DBA2", "C7F1", "DF9B", "DAFC", "DAFB", "C9DB", "DAFD", "DF9C", "DBA1", "D7DE", "DAFE", "C1DA", "DF9D", "DF9E", "DBA5", "DF9F", "DFA0", "D3F4", "E040", "E041", "DBA7", "DBA4", "E042", "DBA8", "E043", "E044", "BDBC", "E045", "E046", "E047", "C0C9", "DBA3", "DBA6", "D6A3", "E048", "DBA9", "E049", "E04A", "E04B", "DBAD", "E04C", "E04D", "E04E", "DBAE", "DBAC", "BAC2", "E04F", "E050", "E051", "BFA4", "DBAB", "E052", "E053", "E054", "DBAA", "D4C7", "B2BF", "E055", "E056", "DBAF", "E057", "B9F9", "E058", "DBB0", "E059", "E05A", "E05B", "E05C", "B3BB", "E05D", "E05E", "E05F", "B5A6", "E060", "E061", "E062", "E063", "B6BC", "DBB1", "E064", "E065", "E066", "B6F5", "E067", "DBB2", "E068", "E069", "E06A", "E06B", "E06C", "E06D", "E06E", "E06F", "E070", "E071", "E072", "E073", "E074", "E075", "E076", "E077", "E078", "E079", "E07A", "E07B", "B1C9", "E07C", "E07D", "E07E", "E080", "DBB4", "E081", "E082", "E083", "DBB3", "DBB5", "E084", "E085", "E086", "E087", "E088", "E089", "E08A", "E08B", "E08C", "E08D", "E08E", "DBB7", "E08F", "DBB6", "E090", "E091", "E092", "E093", "E094", "E095", "E096", "DBB8", "E097", "E098", "E099", "E09A", "E09B", "E09C", "E09D", "E09E", "E09F", "DBB9", "E0A0", "E140", "DBBA", "E141", "E142", "D3CF", "F4FA", "C7F5", "D7C3", "C5E4", "F4FC", "F4FD", "F4FB", "E143", "BEC6", "E144", "E145", "E146", "E147", "D0EF", "E148", "E149", "B7D3", "E14A", "E14B", "D4CD", "CCAA", "E14C", "E14D", "F5A2", "F5A1", "BAA8", "F4FE", "CBD6", "E14E", "E14F", "E150", "F5A4", "C0D2", "E151", "B3EA", "E152", "CDAA", "F5A5", "F5A3", "BDB4", "F5A8", "E153", "F5A9", "BDCD", "C3B8", "BFE1", "CBE1", "F5AA", "E154", "E155", "E156", "F5A6", "F5A7", "C4F0", "E157", "E158", "E159", "E15A", "E15B", "F5AC", "E15C", "B4BC", "E15D", "D7ED", "E15E", "B4D7", "F5AB", "F5AE", "E15F", "E160", "F5AD", "F5AF", "D0D1", "E161", "E162", "E163", "E164", "E165", "E166", "E167", "C3D1", "C8A9", "E168", "E169", "E16A", "E16B", "E16C", "E16D", "F5B0", "F5B1", "E16E", "E16F", "E170", "E171", "E172", "E173", "F5B2", "E174", "E175", "F5B3", "F5B4", "F5B5", "E176", "E177", "E178", "E179", "F5B7", "F5B6", "E17A", "E17B", "E17C", "E17D", "F5B8", "E17E", "E180", "E181", "E182", "E183", "E184", "E185", "E186", "E187", "E188", "E189", "E18A", "B2C9", "E18B", "D3D4", "CACD", "E18C", "C0EF", "D6D8", "D2B0", "C1BF", "E18D", "BDF0", "E18E", "E18F", "E190", "E191", "E192", "E193", "E194", "E195", "E196", "E197", "B8AA", "E198", "E199", "E19A", "E19B", "E19C", "E19D", "E19E", "E19F", "E1A0", "E240", "E241", "E242", "E243", "E244", "E245", "E246", "E247", "E248", "E249", "E24A", "E24B", "E24C", "E24D", "E24E", "E24F", "E250", "E251", "E252", "E253", "E254", "E255", "E256", "E257", "E258", "E259", "E25A", "E25B", "E25C", "E25D", "E25E", "E25F", "E260", "E261", "E262", "E263", "E264", "E265", "E266", "E267", "E268", "E269", "E26A", "E26B", "E26C", "E26D", "E26E", "E26F", "E270", "E271", "E272", "E273", "E274", "E275", "E276", "E277", "E278", "E279", "E27A", "E27B", "E27C", "E27D", "E27E", "E280", "E281", "E282", "E283", "E284", "E285", "E286", "E287", "E288", "E289", "E28A", "E28B", "E28C", "E28D", "E28E", "E28F", "E290", "E291", "E292", "E293", "E294", "E295", "E296", "E297", "E298", "E299", "E29A", "E29B", "E29C", "E29D", "E29E", "E29F", "E2A0", "E340", "E341", "E342", "E343", "E344", "E345", "E346", "E347", "E348", "E349", "E34A", "E34B", "E34C", "E34D", "E34E", "E34F", "E350", "E351", "E352", "E353", "E354", "E355", "E356", "E357", "E358", "E359", "E35A", "E35B", "E35C", "E35D", "E35E", "E35F", "E360", "E361", "E362", "E363", "E364", "E365", "E366", "E367", "E368", "E369", "E36A", "E36B", "E36C", "E36D", "BCF8", "E36E", "E36F", "E370", "E371", "E372", "E373", "E374", "E375", "E376", "E377", "E378", "E379", "E37A", "E37B", "E37C", "E37D", "E37E", "E380", "E381", "E382", "E383", "E384", "E385", "E386", "E387", "F6C6", "E388", "E389", "E38A", "E38B", "E38C", "E38D", "E38E", "E38F", "E390", "E391", "E392", "E393", "E394", "E395", "E396", "E397", "E398", "E399", "E39A", "E39B", "E39C", "E39D", "E39E", "E39F", "E3A0", "E440", "E441", "E442", "E443", "E444", "E445", "F6C7", "E446", "E447", "E448", "E449", "E44A", "E44B", "E44C", "E44D", "E44E", "E44F", "E450", "E451", "E452", "E453", "E454", "E455", "E456", "E457", "E458", "E459", "E45A", "E45B", "E45C", "E45D", "E45E", "F6C8", "E45F", "E460", "E461", "E462", "E463", "E464", "E465", "E466", "E467", "E468", "E469", "E46A", "E46B", "E46C", "E46D", "E46E", "E46F", "E470", "E471", "E472", "E473", "E474", "E475", "E476", "E477", "E478", "E479", "E47A", "E47B", "E47C", "E47D", "E47E", "E480", "E481", "E482", "E483", "E484", "E485", "E486", "E487", "E488", "E489", "E48A", "E48B", "E48C", "E48D", "E48E", "E48F", "E490", "E491", "E492", "E493", "E494", "E495", "E496", "E497", "E498", "E499", "E49A", "E49B", "E49C", "E49D", "E49E", "E49F", "E4A0", "E540", "E541", "E542", "E543", "E544", "E545", "E546", "E547", "E548", "E549", "E54A", "E54B", "E54C", "E54D", "E54E", "E54F", "E550", "E551", "E552", "E553", "E554", "E555", "E556", "E557", "E558", "E559", "E55A", "E55B", "E55C", "E55D", "E55E", "E55F", "E560", "E561", "E562", "E563", "E564", "E565", "E566", "E567", "E568", "E569", "E56A", "E56B", "E56C", "E56D", "E56E", "E56F", "E570", "E571", "E572", "E573", "F6C9", "E574", "E575", "E576", "E577", "E578", "E579", "E57A", "E57B", "E57C", "E57D", "E57E", "E580", "E581", "E582", "E583", "E584", "E585", "E586", "E587", "E588", "E589", "E58A", "E58B", "E58C", "E58D", "E58E", "E58F", "E590", "E591", "E592", "E593", "E594", "E595", "E596", "E597", "E598", "E599", "E59A", "E59B", "E59C", "E59D", "E59E", "E59F", "F6CA", "E5A0", "E640", "E641", "E642", "E643", "E644", "E645", "E646", "E647", "E648", "E649", "E64A", "E64B", "E64C", "E64D", "E64E", "E64F", "E650", "E651", "E652", "E653", "E654", "E655", "E656", "E657", "E658", "E659", "E65A", "E65B", "E65C", "E65D", "E65E", "E65F", "E660", "E661", "E662", "F6CC", "E663", "E664", "E665", "E666", "E667", "E668", "E669", "E66A", "E66B", "E66C", "E66D", "E66E", "E66F", "E670", "E671", "E672", "E673", "E674", "E675", "E676", "E677", "E678", "E679", "E67A", "E67B", "E67C", "E67D", "E67E", "E680", "E681", "E682", "E683", "E684", "E685", "E686", "E687", "E688", "E689", "E68A", "E68B", "E68C", "E68D", "E68E", "E68F", "E690", "E691", "E692", "E693", "E694", "E695", "E696", "E697", "E698", "E699", "E69A", "E69B", "E69C", "E69D", "F6CB", "E69E", "E69F", "E6A0", "E740", "E741", "E742", "E743", "E744", "E745", "E746", "E747", "F7E9", "E748", "E749", "E74A", "E74B", "E74C", "E74D", "E74E", "E74F", "E750", "E751", "E752", "E753", "E754", "E755", "E756", "E757", "E758", "E759", "E75A", "E75B", "E75C", "E75D", "E75E", "E75F", "E760", "E761", "E762", "E763", "E764", "E765", "E766", "E767", "E768", "E769", "E76A", "E76B", "E76C", "E76D", "E76E", "E76F", "E770", "E771", "E772", "E773", "E774", "E775", "E776", "E777", "E778", "E779", "E77A", "E77B", "E77C", "E77D", "E77E", "E780", "E781", "E782", "E783", "E784", "E785", "E786", "E787", "E788", "E789", "E78A", "E78B", "E78C", "E78D", "E78E", "E78F", "E790", "E791", "E792", "E793", "E794", "E795", "E796", "E797", "E798", "E799", "E79A", "E79B", "E79C", "E79D", "E79E", "E79F", "E7A0", "E840", "E841", "E842", "E843", "E844", "E845", "E846", "E847", "E848", "E849", "E84A", "E84B", "E84C", "E84D", "E84E", "F6CD", "E84F", "E850", "E851", "E852", "E853", "E854", "E855", "E856", "E857", "E858", "E859", "E85A", "E85B", "E85C", "E85D", "E85E", "E85F", "E860", "E861", "E862", "E863", "E864", "E865", "E866", "E867", "E868", "E869", "E86A", "E86B", "E86C", "E86D", "E86E", "E86F", "E870", "E871", "E872", "E873", "E874", "E875", "E876", "E877", "E878", "E879", "E87A", "F6CE", "E87B", "E87C", "E87D", "E87E", "E880", "E881", "E882", "E883", "E884", "E885", "E886", "E887", "E888", "E889", "E88A", "E88B", "E88C", "E88D", "E88E", "E88F", "E890", "E891", "E892", "E893", "E894", "EEC4", "EEC5", "EEC6", "D5EB", "B6A4", "EEC8", "EEC7", "EEC9", "EECA", "C7A5", "EECB", "EECC", "E895", "B7B0", "B5F6", "EECD", "EECF", "E896", "EECE", "E897", "B8C6", "EED0", "EED1", "EED2", "B6DB", "B3AE", "D6D3", "C4C6", "B1B5", "B8D6", "EED3", "EED4", "D4BF", "C7D5", "BEFB", "CED9", "B9B3", "EED6", "EED5", "EED8", "EED7", "C5A5", "EED9", "EEDA", "C7AE", "EEDB", "C7AF", "EEDC", "B2A7", "EEDD", "EEDE", "EEDF", "EEE0", "EEE1", "D7EA", "EEE2", "EEE3", "BCD8", "EEE4", "D3CB", "CCFA", "B2AC", "C1E5", "EEE5", "C7A6", "C3AD", "E898", "EEE6", "EEE7", "EEE8", "EEE9", "EEEA", "EEEB", "EEEC", "E899", "EEED", "EEEE", "EEEF", "E89A", "E89B", "EEF0", "EEF1", "EEF2", "EEF4", "EEF3", "E89C", "EEF5", "CDAD", "C2C1", "EEF6", "EEF7", "EEF8", "D5A1", "EEF9", "CFB3", "EEFA", "EEFB", "E89D", "EEFC", "EEFD", "EFA1", "EEFE", "EFA2", "B8F5", "C3FA", "EFA3", "EFA4", "BDC2", "D2BF", "B2F9", "EFA5", "EFA6", "EFA7", "D2F8", "EFA8", "D6FD", "EFA9", "C6CC", "E89E", "EFAA", "EFAB", "C1B4", "EFAC", "CFFA", "CBF8", "EFAE", "EFAD", "B3FA", "B9F8", "EFAF", "EFB0", "D0E2", "EFB1", "EFB2", "B7E6", "D0BF", "EFB3", "EFB4", "EFB5", "C8F1", "CCE0", "EFB6", "EFB7", "EFB8", "EFB9", "EFBA", "D5E0", "EFBB", "B4ED", "C3AA", "EFBC", "E89F", "EFBD", "EFBE", "EFBF", "E8A0", "CEFD", "EFC0", "C2E0", "B4B8", "D7B6", "BDF5", "E940", "CFC7", "EFC3", "EFC1", "EFC2", "EFC4", "B6A7", "BCFC", "BEE2", "C3CC", "EFC5", "EFC6", "E941", "EFC7", "EFCF", "EFC8", "EFC9", "EFCA", "C7C2", "EFF1", "B6CD", "EFCB", "E942", "EFCC", "EFCD", "B6C6", "C3BE", "EFCE", "E943", "EFD0", "EFD1", "EFD2", "D5F2", "E944", "EFD3", "C4F7", "E945", "EFD4", "C4F8", "EFD5", "EFD6", "B8E4", "B0F7", "EFD7", "EFD8", "EFD9", "E946", "EFDA", "EFDB", "EFDC", "EFDD", "E947", "EFDE", "BEB5", "EFE1", "EFDF", "EFE0", "E948", "EFE2", "EFE3", "C1CD", "EFE4", "EFE5", "EFE6", "EFE7", "EFE8", "EFE9", "EFEA", "EFEB", "EFEC", "C0D8", "E949", "EFED", "C1AD", "EFEE", "EFEF", "EFF0", "E94A", "E94B", "CFE2", "E94C", "E94D", "E94E", "E94F", "E950", "E951", "E952", "E953", "B3A4", "E954", "E955", "E956", "E957", "E958", "E959", "E95A", "E95B", "E95C", "E95D", "E95E", "E95F", "E960", "E961", "E962", "E963", "E964", "E965", "E966", "E967", "E968", "E969", "E96A", "E96B", "E96C", "E96D", "E96E", "E96F", "E970", "E971", "E972", "E973", "E974", "E975", "E976", "E977", "E978", "E979", "E97A", "E97B", "E97C", "E97D", "E97E", "E980", "E981", "E982", "E983", "E984", "E985", "E986", "E987", "E988", "E989", "E98A", "E98B", "E98C", "E98D", "E98E", "E98F", "E990", "E991", "E992", "E993", "E994", "E995", "E996", "E997", "E998", "E999", "E99A", "E99B", "E99C", "E99D", "E99E", "E99F", "E9A0", "EA40", "EA41", "EA42", "EA43", "EA44", "EA45", "EA46", "EA47", "EA48", "EA49", "EA4A", "EA4B", "EA4C", "EA4D", "EA4E", "EA4F", "EA50", "EA51", "EA52", "EA53", "EA54", "EA55", "EA56", "EA57", "EA58", "EA59", "EA5A", "EA5B", "C3C5", "E3C5", "C9C1", "E3C6", "EA5C", "B1D5", "CECA", "B4B3", "C8F2", "E3C7", "CFD0", "E3C8", "BCE4", "E3C9", "E3CA", "C3C6", "D5A2", "C4D6", "B9EB", "CEC5", "E3CB", "C3F6", "E3CC", "EA5D", "B7A7", "B8F3", "BAD2", "E3CD", "E3CE", "D4C4", "E3CF", "EA5E", "E3D0", "D1CB", "E3D1", "E3D2", "E3D3", "E3D4", "D1D6", "E3D5", "B2FB", "C0BB", "E3D6", "EA5F", "C0AB", "E3D7", "E3D8", "E3D9", "EA60", "E3DA", "E3DB", "EA61", "B8B7", "DAE2", "EA62", "B6D3", "EA63", "DAE4", "DAE3", "EA64", "EA65", "EA66", "EA67", "EA68", "EA69", "EA6A", "DAE6", "EA6B", "EA6C", "EA6D", "C8EE", "EA6E", "EA6F", "DAE5", "B7C0", "D1F4", "D2F5", "D5F3", "BDD7", "EA70", "EA71", "EA72", "EA73", "D7E8", "DAE8", "DAE7", "EA74", "B0A2", "CDD3", "EA75", "DAE9", "EA76", "B8BD", "BCCA", "C2BD", "C2A4", "B3C2", "DAEA", "EA77", "C2AA", "C4B0", "BDB5", "EA78", "EA79", "CFDE", "EA7A", "EA7B", "EA7C", "DAEB", "C9C2", "EA7D", "EA7E", "EA80", "EA81", "EA82", "B1DD", "EA83", "EA84", "EA85", "DAEC", "EA86", "B6B8", "D4BA", "EA87", "B3FD", "EA88", "EA89", "DAED", "D4C9", "CFD5", "C5E3", "EA8A", "DAEE", "EA8B", "EA8C", "EA8D", "EA8E", "EA8F", "DAEF", "EA90", "DAF0", "C1EA", "CCD5", "CFDD", "EA91", "EA92", "EA93", "EA94", "EA95", "EA96", "EA97", "EA98", "EA99", "EA9A", "EA9B", "EA9C", "EA9D", "D3E7", "C2A1", "EA9E", "DAF1", "EA9F", "EAA0", "CBE5", "EB40", "DAF2", "EB41", "CBE6", "D2FE", "EB42", "EB43", "EB44", "B8F4", "EB45", "EB46", "DAF3", "B0AF", "CFB6", "EB47", "EB48", "D5CF", "EB49", "EB4A", "EB4B", "EB4C", "EB4D", "EB4E", "EB4F", "EB50", "EB51", "EB52", "CBED", "EB53", "EB54", "EB55", "EB56", "EB57", "EB58", "EB59", "EB5A", "DAF4", "EB5B", "EB5C", "E3C4", "EB5D", "EB5E", "C1A5", "EB5F", "EB60", "F6BF", "EB61", "EB62", "F6C0", "F6C1", "C4D1", "EB63", "C8B8", "D1E3", "EB64", "EB65", "D0DB", "D1C5", "BCAF", "B9CD", "EB66", "EFF4", "EB67", "EB68", "B4C6", "D3BA", "F6C2", "B3FB", "EB69", "EB6A", "F6C3", "EB6B", "EB6C", "B5F1", "EB6D", "EB6E", "EB6F", "EB70", "EB71", "EB72", "EB73", "EB74", "EB75", "EB76", "F6C5", "EB77", "EB78", "EB79", "EB7A", "EB7B", "EB7C", "EB7D", "D3EA", "F6A7", "D1A9", "EB7E", "EB80", "EB81", "EB82", "F6A9", "EB83", "EB84", "EB85", "F6A8", "EB86", "EB87", "C1E3", "C0D7", "EB88", "B1A2", "EB89", "EB8A", "EB8B", "EB8C", "CEED", "EB8D", "D0E8", "F6AB", "EB8E", "EB8F", "CFF6", "EB90", "F6AA", "D5F0", "F6AC", "C3B9", "EB91", "EB92", "EB93", "BBF4", "F6AE", "F6AD", "EB94", "EB95", "EB96", "C4DE", "EB97", "EB98", "C1D8", "EB99", "EB9A", "EB9B", "EB9C", "EB9D", "CBAA", "EB9E", "CFBC", "EB9F", "EBA0", "EC40", "EC41", "EC42", "EC43", "EC44", "EC45", "EC46", "EC47", "EC48", "F6AF", "EC49", "EC4A", "F6B0", "EC4B", "EC4C", "F6B1", "EC4D", "C2B6", "EC4E", "EC4F", "EC50", "EC51", "EC52", "B0D4", "C5F9", "EC53", "EC54", "EC55", "EC56", "F6B2", "EC57", "EC58", "EC59", "EC5A", "EC5B", "EC5C", "EC5D", "EC5E", "EC5F", "EC60", "EC61", "EC62", "EC63", "EC64", "EC65", "EC66", "EC67", "EC68", "EC69", "C7E0", "F6A6", "EC6A", "EC6B", "BEB8", "EC6C", "EC6D", "BEB2", "EC6E", "B5E5", "EC6F", "EC70", "B7C7", "EC71", "BFBF", "C3D2", "C3E6", "EC72", "EC73", "D8CC", "EC74", "EC75", "EC76", "B8EF", "EC77", "EC78", "EC79", "EC7A", "EC7B", "EC7C", "EC7D", "EC7E", "EC80", "BDF9", "D1A5", "EC81", "B0D0", "EC82", "EC83", "EC84", "EC85", "EC86", "F7B0", "EC87", "EC88", "EC89", "EC8A", "EC8B", "EC8C", "EC8D", "EC8E", "F7B1", "EC8F", "EC90", "EC91", "EC92", "EC93", "D0AC", "EC94", "B0B0", "EC95", "EC96", "EC97", "F7B2", "F7B3", "EC98", "F7B4", "EC99", "EC9A", "EC9B", "C7CA", "EC9C", "EC9D", "EC9E", "EC9F", "ECA0", "ED40", "ED41", "BECF", "ED42", "ED43", "F7B7", "ED44", "ED45", "ED46", "ED47", "ED48", "ED49", "ED4A", "F7B6", "ED4B", "B1DE", "ED4C", "F7B5", "ED4D", "ED4E", "F7B8", "ED4F", "F7B9", "ED50", "ED51", "ED52", "ED53", "ED54", "ED55", "ED56", "ED57", "ED58", "ED59", "ED5A", "ED5B", "ED5C", "ED5D", "ED5E", "ED5F", "ED60", "ED61", "ED62", "ED63", "ED64", "ED65", "ED66", "ED67", "ED68", "ED69", "ED6A", "ED6B", "ED6C", "ED6D", "ED6E", "ED6F", "ED70", "ED71", "ED72", "ED73", "ED74", "ED75", "ED76", "ED77", "ED78", "ED79", "ED7A", "ED7B", "ED7C", "ED7D", "ED7E", "ED80", "ED81", "CEA4", "C8CD", "ED82", "BAAB", "E8B8", "E8B9", "E8BA", "BEC2", "ED83", "ED84", "ED85", "ED86", "ED87", "D2F4", "ED88", "D4CF", "C9D8", "ED89", "ED8A", "ED8B", "ED8C", "ED8D", "ED8E", "ED8F", "ED90", "ED91", "ED92", "ED93", "ED94", "ED95", "ED96", "ED97", "ED98", "ED99", "ED9A", "ED9B", "ED9C", "ED9D", "ED9E", "ED9F", "EDA0", "EE40", "EE41", "EE42", "EE43", "EE44", "EE45", "EE46", "EE47", "EE48", "EE49", "EE4A", "EE4B", "EE4C", "EE4D", "EE4E", "EE4F", "EE50", "EE51", "EE52", "EE53", "EE54", "EE55", "EE56", "EE57", "EE58", "EE59", "EE5A", "EE5B", "EE5C", "EE5D", "EE5E", "EE5F", "EE60", "EE61", "EE62", "EE63", "EE64", "EE65", "EE66", "EE67", "EE68", "EE69", "EE6A", "EE6B", "EE6C", "EE6D", "EE6E", "EE6F", "EE70", "EE71", "EE72", "EE73", "EE74", "EE75", "EE76", "EE77", "EE78", "EE79", "EE7A", "EE7B", "EE7C", "EE7D", "EE7E", "EE80", "EE81", "EE82", "EE83", "EE84", "EE85", "EE86", "EE87", "EE88", "EE89", "EE8A", "EE8B", "EE8C", "EE8D", "EE8E", "EE8F", "EE90", "EE91", "EE92", "EE93", "EE94", "EE95", "EE96", "EE97", "EE98", "EE99", "EE9A", "EE9B", "EE9C", "EE9D", "EE9E", "EE9F", "EEA0", "EF40", "EF41", "EF42", "EF43", "EF44", "EF45", "D2B3", "B6A5", "C7EA", "F1FC", "CFEE", "CBB3", "D0EB", "E7EF", "CDE7", "B9CB", "B6D9", "F1FD", "B0E4", "CBCC", "F1FE", "D4A4", "C2AD", "C1EC", "C6C4", "BEB1", "F2A1", "BCD5", "EF46", "F2A2", "F2A3", "EF47", "F2A4", "D2C3", "C6B5", "EF48", "CDC7", "F2A5", "EF49", "D3B1", "BFC5", "CCE2", "EF4A", "F2A6", "F2A7", "D1D5", "B6EE", "F2A8", "F2A9", "B5DF", "F2AA", "F2AB", "EF4B", "B2FC", "F2AC", "F2AD", "C8A7", "EF4C", "EF4D", "EF4E", "EF4F", "EF50", "EF51", "EF52", "EF53", "EF54", "EF55", "EF56", "EF57", "EF58", "EF59", "EF5A", "EF5B", "EF5C", "EF5D", "EF5E", "EF5F", "EF60", "EF61", "EF62", "EF63", "EF64", "EF65", "EF66", "EF67", "EF68", "EF69", "EF6A", "EF6B", "EF6C", "EF6D", "EF6E", "EF6F", "EF70", "EF71", "B7E7", "EF72", "EF73", "ECA9", "ECAA", "ECAB", "EF74", "ECAC", "EF75", "EF76", "C6AE", "ECAD", "ECAE", "EF77", "EF78", "EF79", "B7C9", "CAB3", "EF7A", "EF7B", "EF7C", "EF7D", "EF7E", "EF80", "EF81", "E2B8", "F7CF", "EF82", "EF83", "EF84", "EF85", "EF86", "EF87", "EF88", "EF89", "EF8A", "EF8B", "EF8C", "EF8D", "EF8E", "EF8F", "EF90", "EF91", "EF92", "EF93", "EF94", "EF95", "EF96", "EF97", "EF98", "EF99", "EF9A", "EF9B", "EF9C", "EF9D", "EF9E", "EF9F", "EFA0", "F040", "F041", "F042", "F043", "F044", "F7D0", "F045", "F046", "B2CD", "F047", "F048", "F049", "F04A", "F04B", "F04C", "F04D", "F04E", "F04F", "F050", "F051", "F052", "F053", "F054", "F055", "F056", "F057", "F058", "F059", "F05A", "F05B", "F05C", "F05D", "F05E", "F05F", "F060", "F061", "F062", "F063", "F7D1", "F064", "F065", "F066", "F067", "F068", "F069", "F06A", "F06B", "F06C", "F06D", "F06E", "F06F", "F070", "F071", "F072", "F073", "F074", "F075", "F076", "F077", "F078", "F079", "F07A", "F07B", "F07C", "F07D", "F07E", "F080", "F081", "F082", "F083", "F084", "F085", "F086", "F087", "F088", "F089", "F7D3", "F7D2", "F08A", "F08B", "F08C", "F08D", "F08E", "F08F", "F090", "F091", "F092", "F093", "F094", "F095", "F096", "E2BB", "F097", "BCA2", "F098", "E2BC", "E2BD", "E2BE", "E2BF", "E2C0", "E2C1", "B7B9", "D2FB", "BDA4", "CACE", "B1A5", "CBC7", "F099", "E2C2", "B6FC", "C8C4", "E2C3", "F09A", "F09B", "BDC8", "F09C", "B1FD", "E2C4", "F09D", "B6F6", "E2C5", "C4D9", "F09E", "F09F", "E2C6", "CFDA", "B9DD", "E2C7", "C0A1", "F0A0", "E2C8", "B2F6", "F140", "E2C9", "F141", "C1F3", "E2CA", "E2CB", "C2F8", "E2CC", "E2CD", "E2CE", "CAD7", "D8B8", "D9E5", "CFE3", "F142", "F143", "F144", "F145", "F146", "F147", "F148", "F149", "F14A", "F14B", "F14C", "F0A5", "F14D", "F14E", "DCB0", "F14F", "F150", "F151", "F152", "F153", "F154", "F155", "F156", "F157", "F158", "F159", "F15A", "F15B", "F15C", "F15D", "F15E", "F15F", "F160", "F161", "F162", "F163", "F164", "F165", "F166", "F167", "F168", "F169", "F16A", "F16B", "F16C", "F16D", "F16E", "F16F", "F170", "F171", "F172", "F173", "F174", "F175", "F176", "F177", "F178", "F179", "F17A", "F17B", "F17C", "F17D", "F17E", "F180", "F181", "F182", "F183", "F184", "F185", "F186", "F187", "F188", "F189", "F18A", "F18B", "F18C", "F18D", "F18E", "F18F", "F190", "F191", "F192", "F193", "F194", "F195", "F196", "F197", "F198", "F199", "F19A", "F19B", "F19C", "F19D", "F19E", "F19F", "F1A0", "F240", "F241", "F242", "F243", "F244", "F245", "F246", "F247", "F248", "F249", "F24A", "F24B", "F24C", "F24D", "F24E", "F24F", "F250", "F251", "F252", "F253", "F254", "F255", "F256", "F257", "F258", "F259", "F25A", "F25B", "F25C", "F25D", "F25E", "F25F", "F260", "F261", "F262", "F263", "F264", "F265", "F266", "F267", "F268", "F269", "F26A", "F26B", "F26C", "F26D", "F26E", "F26F", "F270", "F271", "F272", "F273", "F274", "F275", "F276", "F277", "F278", "F279", "F27A", "F27B", "F27C", "F27D", "F27E", "F280", "F281", "F282", "F283", "F284", "F285", "F286", "F287", "F288", "F289", "F28A", "F28B", "F28C", "F28D", "F28E", "F28F", "F290", "F291", "F292", "F293", "F294", "F295", "F296", "F297", "F298", "F299", "F29A", "F29B", "F29C", "F29D", "F29E", "F29F", "F2A0", "F340", "F341", "F342", "F343", "F344", "F345", "F346", "F347", "F348", "F349", "F34A", "F34B", "F34C", "F34D", "F34E", "F34F", "F350", "F351", "C2ED", "D4A6", "CDD4", "D1B1", "B3DB", "C7FD", "F352", "B2B5", "C2BF", "E6E0", "CABB", "E6E1", "E6E2", "BED4", "E6E3", "D7A4", "CDD5", "E6E5", "BCDD", "E6E4", "E6E6", "E6E7", "C2EE", "F353", "BDBE", "E6E8", "C2E6", "BAA7", "E6E9", "F354", "E6EA", "B3D2", "D1E9", "F355", "F356", "BFA5", "E6EB", "C6EF", "E6EC", "E6ED", "F357", "F358", "E6EE", "C6AD", "E6EF", "F359", "C9A7", "E6F0", "E6F1", "E6F2", "E5B9", "E6F3", "E6F4", "C2E2", "E6F5", "E6F6", "D6E8", "E6F7", "F35A", "E6F8", "B9C7", "F35B", "F35C", "F35D", "F35E", "F35F", "F360", "F361", "F7BB", "F7BA", "F362", "F363", "F364", "F365", "F7BE", "F7BC", "BAA1", "F366", "F7BF", "F367", "F7C0", "F368", "F369", "F36A", "F7C2", "F7C1", "F7C4", "F36B", "F36C", "F7C3", "F36D", "F36E", "F36F", "F370", "F371", "F7C5", "F7C6", "F372", "F373", "F374", "F375", "F7C7", "F376", "CBE8", "F377", "F378", "F379", "F37A", "B8DF", "F37B", "F37C", "F37D", "F37E", "F380", "F381", "F7D4", "F382", "F7D5", "F383", "F384", "F385", "F386", "F7D6", "F387", "F388", "F389", "F38A", "F7D8", "F38B", "F7DA", "F38C", "F7D7", "F38D", "F38E", "F38F", "F390", "F391", "F392", "F393", "F394", "F395", "F7DB", "F396", "F7D9", "F397", "F398", "F399", "F39A", "F39B", "F39C", "F39D", "D7D7", "F39E", "F39F", "F3A0", "F440", "F7DC", "F441", "F442", "F443", "F444", "F445", "F446", "F7DD", "F447", "F448", "F449", "F7DE", "F44A", "F44B", "F44C", "F44D", "F44E", "F44F", "F450", "F451", "F452", "F453", "F454", "F7DF", "F455", "F456", "F457", "F7E0", "F458", "F459", "F45A", "F45B", "F45C", "F45D", "F45E", "F45F", "F460", "F461", "F462", "DBCB", "F463", "F464", "D8AA", "F465", "F466", "F467", "F468", "F469", "F46A", "F46B", "F46C", "E5F7", "B9ED", "F46D", "F46E", "F46F", "F470", "BFFD", "BBEA", "F7C9", "C6C7", "F7C8", "F471", "F7CA", "F7CC", "F7CB", "F472", "F473", "F474", "F7CD", "F475", "CEBA", "F476", "F7CE", "F477", "F478", "C4A7", "F479", "F47A", "F47B", "F47C", "F47D", "F47E", "F480", "F481", "F482", "F483", "F484", "F485", "F486", "F487", "F488", "F489", "F48A", "F48B", "F48C", "F48D", "F48E", "F48F", "F490", "F491", "F492", "F493", "F494", "F495", "F496", "F497", "F498", "F499", "F49A", "F49B", "F49C", "F49D", "F49E", "F49F", "F4A0", "F540", "F541", "F542", "F543", "F544", "F545", "F546", "F547", "F548", "F549", "F54A", "F54B", "F54C", "F54D", "F54E", "F54F", "F550", "F551", "F552", "F553", "F554", "F555", "F556", "F557", "F558", "F559", "F55A", "F55B", "F55C", "F55D", "F55E", "F55F", "F560", "F561", "F562", "F563", "F564", "F565", "F566", "F567", "F568", "F569", "F56A", "F56B", "F56C", "F56D", "F56E", "F56F", "F570", "F571", "F572", "F573", "F574", "F575", "F576", "F577", "F578", "F579", "F57A", "F57B", "F57C", "F57D", "F57E", "F580", "F581", "F582", "F583", "F584", "F585", "F586", "F587", "F588", "F589", "F58A", "F58B", "F58C", "F58D", "F58E", "F58F", "F590", "F591", "F592", "F593", "F594", "F595", "F596", "F597", "F598", "F599", "F59A", "F59B", "F59C", "F59D", "F59E", "F59F", "F5A0", "F640", "F641", "F642", "F643", "F644", "F645", "F646", "F647", "F648", "F649", "F64A", "F64B", "F64C", "F64D", "F64E", "F64F", "F650", "F651", "F652", "F653", "F654", "F655", "F656", "F657", "F658", "F659", "F65A", "F65B", "F65C", "F65D", "F65E", "F65F", "F660", "F661", "F662", "F663", "F664", "F665", "F666", "F667", "F668", "F669", "F66A", "F66B", "F66C", "F66D", "F66E", "F66F", "F670", "F671", "F672", "F673", "F674", "F675", "F676", "F677", "F678", "F679", "F67A", "F67B", "F67C", "F67D", "F67E", "F680", "F681", "F682", "F683", "F684", "F685", "F686", "F687", "F688", "F689", "F68A", "F68B", "F68C", "F68D", "F68E", "F68F", "F690", "F691", "F692", "F693", "F694", "F695", "F696", "F697", "F698", "F699", "F69A", "F69B", "F69C", "F69D", "F69E", "F69F", "F6A0", "F740", "F741", "F742", "F743", "F744", "F745", "F746", "F747", "F748", "F749", "F74A", "F74B", "F74C", "F74D", "F74E", "F74F", "F750", "F751", "F752", "F753", "F754", "F755", "F756", "F757", "F758", "F759", "F75A", "F75B", "F75C", "F75D", "F75E", "F75F", "F760", "F761", "F762", "F763", "F764", "F765", "F766", "F767", "F768", "F769", "F76A", "F76B", "F76C", "F76D", "F76E", "F76F", "F770", "F771", "F772", "F773", "F774", "F775", "F776", "F777", "F778", "F779", "F77A", "F77B", "F77C", "F77D", "F77E", "F780", "D3E3", "F781", "F782", "F6CF", "F783", "C2B3", "F6D0", "F784", "F785", "F6D1", "F6D2", "F6D3", "F6D4", "F786", "F787", "F6D6", "F788", "B1AB", "F6D7", "F789", "F6D8", "F6D9", "F6DA", "F78A", "F6DB", "F6DC", "F78B", "F78C", "F78D", "F78E", "F6DD", "F6DE", "CFCA", "F78F", "F6DF", "F6E0", "F6E1", "F6E2", "F6E3", "F6E4", "C0F0", "F6E5", "F6E6", "F6E7", "F6E8", "F6E9", "F790", "F6EA", "F791", "F6EB", "F6EC", "F792", "F6ED", "F6EE", "F6EF", "F6F0", "F6F1", "F6F2", "F6F3", "F6F4", "BEA8", "F793", "F6F5", "F6F6", "F6F7", "F6F8", "F794", "F795", "F796", "F797", "F798", "C8FA", "F6F9", "F6FA", "F6FB", "F6FC", "F799", "F79A", "F6FD", "F6FE", "F7A1", "F7A2", "F7A3", "F7A4", "F7A5", "F79B", "F79C", "F7A6", "F7A7", "F7A8", "B1EE", "F7A9", "F7AA", "F7AB", "F79D", "F79E", "F7AC", "F7AD", "C1DB", "F7AE", "F79F", "F7A0", "F7AF", "F840", "F841", "F842", "F843", "F844", "F845", "F846", "F847", "F848", "F849", "F84A", "F84B", "F84C", "F84D", "F84E", "F84F", "F850", "F851", "F852", "F853", "F854", "F855", "F856", "F857", "F858", "F859", "F85A", "F85B", "F85C", "F85D", "F85E", "F85F", "F860", "F861", "F862", "F863", "F864", "F865", "F866", "F867", "F868", "F869", "F86A", "F86B", "F86C", "F86D", "F86E", "F86F", "F870", "F871", "F872", "F873", "F874", "F875", "F876", "F877", "F878", "F879", "F87A", "F87B", "F87C", "F87D", "F87E", "F880", "F881", "F882", "F883", "F884", "F885", "F886", "F887", "F888", "F889", "F88A", "F88B", "F88C", "F88D", "F88E", "F88F", "F890", "F891", "F892", "F893", "F894", "F895", "F896", "F897", "F898", "F899", "F89A", "F89B", "F89C", "F89D", "F89E", "F89F", "F8A0", "F940", "F941", "F942", "F943", "F944", "F945", "F946", "F947", "F948", "F949", "F94A", "F94B", "F94C", "F94D", "F94E", "F94F", "F950", "F951", "F952", "F953", "F954", "F955", "F956", "F957", "F958", "F959", "F95A", "F95B", "F95C", "F95D", "F95E", "F95F", "F960", "F961", "F962", "F963", "F964", "F965", "F966", "F967", "F968", "F969", "F96A", "F96B", "F96C", "F96D", "F96E", "F96F", "F970", "F971", "F972", "F973", "F974", "F975", "F976", "F977", "F978", "F979", "F97A", "F97B", "F97C", "F97D", "F97E", "F980", "F981", "F982", "F983", "F984", "F985", "F986", "F987", "F988", "F989", "F98A", "F98B", "F98C", "F98D", "F98E", "F98F", "F990", "F991", "F992", "F993", "F994", "F995", "F996", "F997", "F998", "F999", "F99A", "F99B", "F99C", "F99D", "F99E", "F99F", "F9A0", "FA40", "FA41", "FA42", "FA43", "FA44", "FA45", "FA46", "FA47", "FA48", "FA49", "FA4A", "FA4B", "FA4C", "FA4D", "FA4E", "FA4F", "FA50", "FA51", "FA52", "FA53", "FA54", "FA55", "FA56", "FA57", "FA58", "FA59", "FA5A", "FA5B", "FA5C", "FA5D", "FA5E", "FA5F", "FA60", "FA61", "FA62", "FA63", "FA64", "FA65", "FA66", "FA67", "FA68", "FA69", "FA6A", "FA6B", "FA6C", "FA6D", "FA6E", "FA6F", "FA70", "FA71", "FA72", "FA73", "FA74", "FA75", "FA76", "FA77", "FA78", "FA79", "FA7A", "FA7B", "FA7C", "FA7D", "FA7E", "FA80", "FA81", "FA82", "FA83", "FA84", "FA85", "FA86", "FA87", "FA88", "FA89", "FA8A", "FA8B", "FA8C", "FA8D", "FA8E", "FA8F", "FA90", "FA91", "FA92", "FA93", "FA94", "FA95", "FA96", "FA97", "FA98", "FA99", "FA9A", "FA9B", "FA9C", "FA9D", "FA9E", "FA9F", "FAA0", "FB40", "FB41", "FB42", "FB43", "FB44", "FB45", "FB46", "FB47", "FB48", "FB49", "FB4A", "FB4B", "FB4C", "FB4D", "FB4E", "FB4F", "FB50", "FB51", "FB52", "FB53", "FB54", "FB55", "FB56", "FB57", "FB58", "FB59", "FB5A", "FB5B", "C4F1", "F0AF", "BCA6", "F0B0", "C3F9", "FB5C", "C5B8", "D1BB", "FB5D", "F0B1", "F0B2", "F0B3", "F0B4", "F0B5", "D1BC", "FB5E", "D1EC", "FB5F", "F0B7", "F0B6", "D4A7", "FB60", "CDD2", "F0B8", "F0BA", "F0B9", "F0BB", "F0BC", "FB61", "FB62", "B8EB", "F0BD", "BAE8", "FB63", "F0BE", "F0BF", "BEE9", "F0C0", "B6EC", "F0C1", "F0C2", "F0C3", "F0C4", "C8B5", "F0C5", "F0C6", "FB64", "F0C7", "C5F4", "FB65", "F0C8", "FB66", "FB67", "FB68", "F0C9", "FB69", "F0CA", "F7BD", "FB6A", "F0CB", "F0CC", "F0CD", "FB6B", "F0CE", "FB6C", "FB6D", "FB6E", "FB6F", "F0CF", "BAD7", "FB70", "F0D0", "F0D1", "F0D2", "F0D3", "F0D4", "F0D5", "F0D6", "F0D8", "FB71", "FB72", "D3A5", "F0D7", "FB73", "F0D9", "FB74", "FB75", "FB76", "FB77", "FB78", "FB79", "FB7A", "FB7B", "FB7C", "FB7D", "F5BA", "C2B9", "FB7E", "FB80", "F7E4", "FB81", "FB82", "FB83", "FB84", "F7E5", "F7E6", "FB85", "FB86", "F7E7", "FB87", "FB88", "FB89", "FB8A", "FB8B", "FB8C", "F7E8", "C2B4", "FB8D", "FB8E", "FB8F", "FB90", "FB91", "FB92", "FB93", "FB94", "FB95", "F7EA", "FB96", "F7EB", "FB97", "FB98", "FB99", "FB9A", "FB9B", "FB9C", "C2F3", "FB9D", "FB9E", "FB9F", "FBA0", "FC40", "FC41", "FC42", "FC43", "FC44", "FC45", "FC46", "FC47", "FC48", "F4F0", "FC49", "FC4A", "FC4B", "F4EF", "FC4C", "FC4D", "C2E9", "FC4E", "F7E1", "F7E2", "FC4F", "FC50", "FC51", "FC52", "FC53", "BBC6", "FC54", "FC55", "FC56", "FC57", "D9E4", "FC58", "FC59", "FC5A", "CAF2", "C0E8", "F0A4", "FC5B", "BADA", "FC5C", "FC5D", "C7AD", "FC5E", "FC5F", "FC60", "C4AC", "FC61", "FC62", "F7EC", "F7ED", "F7EE", "FC63", "F7F0", "F7EF", "FC64", "F7F1", "FC65", "FC66", "F7F4", "FC67", "F7F3", "FC68", "F7F2", "F7F5", "FC69", "FC6A", "FC6B", "FC6C", "F7F6", "FC6D", "FC6E", "FC6F", "FC70", "FC71", "FC72", "FC73", "FC74", "FC75", "EDE9", "FC76", "EDEA", "EDEB", "FC77", "F6BC", "FC78", "FC79", "FC7A", "FC7B", "FC7C", "FC7D", "FC7E", "FC80", "FC81", "FC82", "FC83", "FC84", "F6BD", "FC85", "F6BE", "B6A6", "FC86", "D8BE", "FC87", "FC88", "B9C4", "FC89", "FC8A", "FC8B", "D8BB", "FC8C", "DCB1", "FC8D", "FC8E", "FC8F", "FC90", "FC91", "FC92", "CAF3", "FC93", "F7F7", "FC94", "FC95", "FC96", "FC97", "FC98", "FC99", "FC9A", "FC9B", "FC9C", "F7F8", "FC9D", "FC9E", "F7F9", "FC9F", "FCA0", "FD40", "FD41", "FD42", "FD43", "FD44", "F7FB", "FD45", "F7FA", "FD46", "B1C7", "FD47", "F7FC", "F7FD", "FD48", "FD49", "FD4A", "FD4B", "FD4C", "F7FE", "FD4D", "FD4E", "FD4F", "FD50", "FD51", "FD52", "FD53", "FD54", "FD55", "FD56", "FD57", "C6EB", "ECB4", "FD58", "FD59", "FD5A", "FD5B", "FD5C", "FD5D", "FD5E", "FD5F", "FD60", "FD61", "FD62", "FD63", "FD64", "FD65", "FD66", "FD67", "FD68", "FD69", "FD6A", "FD6B", "FD6C", "FD6D", "FD6E", "FD6F", "FD70", "FD71", "FD72", "FD73", "FD74", "FD75", "FD76", "FD77", "FD78", "FD79", "FD7A", "FD7B", "FD7C", "FD7D", "FD7E", "FD80", "FD81", "FD82", "FD83", "FD84", "FD85", "B3DD", "F6B3", "FD86", "FD87", "F6B4", "C1E4", "F6B5", "F6B6", "F6B7", "F6B8", "F6B9", "F6BA", "C8A3", "F6BB", "FD88", "FD89", "FD8A", "FD8B", "FD8C", "FD8D", "FD8E", "FD8F", "FD90", "FD91", "FD92", "FD93", "C1FA", "B9A8", "EDE8", "FD94", "FD95", "FD96", "B9EA", "D9DF", "FD97", "FD98", "FD99", "FD9A", "FD9B", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "AAA1", "AAA2", "AAA3", "AAA4", "AAA5", "AAA6", "AAA7", "AAA8", "AAA9", "AAAA", "AAAB", "AAAC", "AAAD", "AAAE", "AAAF", "AAB0", "AAB1", "AAB2", "AAB3", "AAB4", "AAB5", "AAB6", "AAB7", "AAB8", "AAB9", "AABA", "AABB", "AABC", "AABD", "AABE", "AABF", "AAC0", "AAC1", "AAC2", "AAC3", "AAC4", "AAC5", "AAC6", "AAC7", "AAC8", "AAC9", "AACA", "AACB", "AACC", "AACD", "AACE", "AACF", "AAD0", "AAD1", "AAD2", "AAD3", "AAD4", "AAD5", "AAD6", "AAD7", "AAD8", "AAD9", "AADA", "AADB", "AADC", "AADD", "AADE", "AADF", "AAE0", "AAE1", "AAE2", "AAE3", "AAE4", "AAE5", "AAE6", "AAE7", "AAE8", "AAE9", "AAEA", "AAEB", "AAEC", "AAED", "AAEE", "AAEF", "AAF0", "AAF1", "AAF2", "AAF3", "AAF4", "AAF5", "AAF6", "AAF7", "AAF8", "AAF9", "AAFA", "AAFB", "AAFC", "AAFD", "AAFE", "ABA1", "ABA2", "ABA3", "ABA4", "ABA5", "ABA6", "ABA7", "ABA8", "ABA9", "ABAA", "ABAB", "ABAC", "ABAD", "ABAE", "ABAF", "ABB0", "ABB1", "ABB2", "ABB3", "ABB4", "ABB5", "ABB6", "ABB7", "ABB8", "ABB9", "ABBA", "ABBB", "ABBC", "ABBD", "ABBE", "ABBF", "ABC0", "ABC1", "ABC2", "ABC3", "ABC4", "ABC5", "ABC6", "ABC7", "ABC8", "ABC9", "ABCA", "ABCB", "ABCC", "ABCD", "ABCE", "ABCF", "ABD0", "ABD1", "ABD2", "ABD3", "ABD4", "ABD5", "ABD6", "ABD7", "ABD8", "ABD9", "ABDA", "ABDB", "ABDC", "ABDD", "ABDE", "ABDF", "ABE0", "ABE1", "ABE2", "ABE3", "ABE4", "ABE5", "ABE6", "ABE7", "ABE8", "ABE9", "ABEA", "ABEB", "ABEC", "ABED", "ABEE", "ABEF", "ABF0", "ABF1", "ABF2", "ABF3", "ABF4", "ABF5", "ABF6", "ABF7", "ABF8", "ABF9", "ABFA", "ABFB", "ABFC", "ABFD", "ABFE", "ACA1", "ACA2", "ACA3", "ACA4", "ACA5", "ACA6", "ACA7", "ACA8", "ACA9", "ACAA", "ACAB", "ACAC", "ACAD", "ACAE", "ACAF", "ACB0", "ACB1", "ACB2", "ACB3", "ACB4", "ACB5", "ACB6", "ACB7", "ACB8", "ACB9", "ACBA", "ACBB", "ACBC", "ACBD", "ACBE", "ACBF", "ACC0", "ACC1", "ACC2", "ACC3", "ACC4", "ACC5", "ACC6", "ACC7", "ACC8", "ACC9", "ACCA", "ACCB", "ACCC", "ACCD", "ACCE", "ACCF", "ACD0", "ACD1", "ACD2", "ACD3", "ACD4", "ACD5", "ACD6", "ACD7", "ACD8", "ACD9", "ACDA", "ACDB", "ACDC", "ACDD", "ACDE", "ACDF", "ACE0", "ACE1", "ACE2", "ACE3", "ACE4", "ACE5", "ACE6", "ACE7", "ACE8", "ACE9", "ACEA", "ACEB", "ACEC", "ACED", "ACEE", "ACEF", "ACF0", "ACF1", "ACF2", "ACF3", "ACF4", "ACF5", "ACF6", "ACF7", "ACF8", "ACF9", "ACFA", "ACFB", "ACFC", "ACFD", "ACFE", "ADA1", "ADA2", "ADA3", "ADA4", "ADA5", "ADA6", "ADA7", "ADA8", "ADA9", "ADAA", "ADAB", "ADAC", "ADAD", "ADAE", "ADAF", "ADB0", "ADB1", "ADB2", "ADB3", "ADB4", "ADB5", "ADB6", "ADB7", "ADB8", "ADB9", "ADBA", "ADBB", "ADBC", "ADBD", "ADBE", "ADBF", "ADC0", "ADC1", "ADC2", "ADC3", "ADC4", "ADC5", "ADC6", "ADC7", "ADC8", "ADC9", "ADCA", "ADCB", "ADCC", "ADCD", "ADCE", "ADCF", "ADD0", "ADD1", "ADD2", "ADD3", "ADD4", "ADD5", "ADD6", "ADD7", "ADD8", "ADD9", "ADDA", "ADDB", "ADDC", "ADDD", "ADDE", "ADDF", "ADE0", "ADE1", "ADE2", "ADE3", "ADE4", "ADE5", "ADE6", "ADE7", "ADE8", "ADE9", "ADEA", "ADEB", "ADEC", "ADED", "ADEE", "ADEF", "ADF0", "ADF1", "ADF2", "ADF3", "ADF4", "ADF5", "ADF6", "ADF7", "ADF8", "ADF9", "ADFA", "ADFB", "ADFC", "ADFD", "ADFE", "AEA1", "AEA2", "AEA3", "AEA4", "AEA5", "AEA6", "AEA7", "AEA8", "AEA9", "AEAA", "AEAB", "AEAC", "AEAD", "AEAE", "AEAF", "AEB0", "AEB1", "AEB2", "AEB3", "AEB4", "AEB5", "AEB6", "AEB7", "AEB8", "AEB9", "AEBA", "AEBB", "AEBC", "AEBD", "AEBE", "AEBF", "AEC0", "AEC1", "AEC2", "AEC3", "AEC4", "AEC5", "AEC6", "AEC7", "AEC8", "AEC9", "AECA", "AECB", "AECC", "AECD", "AECE", "AECF", "AED0", "AED1", "AED2", "AED3", "AED4", "AED5", "AED6", "AED7", "AED8", "AED9", "AEDA", "AEDB", "AEDC", "AEDD", "AEDE", "AEDF", "AEE0", "AEE1", "AEE2", "AEE3", "AEE4", "AEE5", "AEE6", "AEE7", "AEE8", "AEE9", "AEEA", "AEEB", "AEEC", "AEED", "AEEE", "AEEF", "AEF0", "AEF1", "AEF2", "AEF3", "AEF4", "AEF5", "AEF6", "AEF7", "AEF8", "AEF9", "AEFA", "AEFB", "AEFC", "AEFD", "AEFE", "AFA1", "AFA2", "AFA3", "AFA4", "AFA5", "AFA6", "AFA7", "AFA8", "AFA9", "AFAA", "AFAB", "AFAC", "AFAD", "AFAE", "AFAF", "AFB0", "AFB1", "AFB2", "AFB3", "AFB4", "AFB5", "AFB6", "AFB7", "AFB8", "AFB9", "AFBA", "AFBB", "AFBC", "AFBD", "AFBE", "AFBF", "AFC0", "AFC1", "AFC2", "AFC3", "AFC4", "AFC5", "AFC6", "AFC7", "AFC8", "AFC9", "AFCA", "AFCB", "AFCC", "AFCD", "AFCE", "AFCF", "AFD0", "AFD1", "AFD2", "AFD3", "AFD4", "AFD5", "AFD6", "AFD7", "AFD8", "AFD9", "AFDA", "AFDB", "AFDC", "AFDD", "AFDE", "AFDF", "AFE0", "AFE1", "AFE2", "AFE3", "AFE4", "AFE5", "AFE6", "AFE7", "AFE8", "AFE9", "AFEA", "AFEB", "AFEC", "AFED", "AFEE", "AFEF", "AFF0", "AFF1", "AFF2", "AFF3", "AFF4", "AFF5", "AFF6", "AFF7", "AFF8", "AFF9", "AFFA", "AFFB", "AFFC", "AFFD", "AFFE", "F8A1", "F8A2", "F8A3", "F8A4", "F8A5", "F8A6", "F8A7", "F8A8", "F8A9", "F8AA", "F8AB", "F8AC", "F8AD", "F8AE", "F8AF", "F8B0", "F8B1", "F8B2", "F8B3", "F8B4", "F8B5", "F8B6", "F8B7", "F8B8", "F8B9", "F8BA", "F8BB", "F8BC", "F8BD", "F8BE", "F8BF", "F8C0", "F8C1", "F8C2", "F8C3", "F8C4", "F8C5", "F8C6", "F8C7", "F8C8", "F8C9", "F8CA", "F8CB", "F8CC", "F8CD", "F8CE", "F8CF", "F8D0", "F8D1", "F8D2", "F8D3", "F8D4", "F8D5", "F8D6", "F8D7", "F8D8", "F8D9", "F8DA", "F8DB", "F8DC", "F8DD", "F8DE", "F8DF", "F8E0", "F8E1", "F8E2", "F8E3", "F8E4", "F8E5", "F8E6", "F8E7", "F8E8", "F8E9", "F8EA", "F8EB", "F8EC", "F8ED", "F8EE", "F8EF", "F8F0", "F8F1", "F8F2", "F8F3", "F8F4", "F8F5", "F8F6", "F8F7", "F8F8", "F8F9", "F8FA", "F8FB", "F8FC", "F8FD", "F8FE", "F9A1", "F9A2", "F9A3", "F9A4", "F9A5", "F9A6", "F9A7", "F9A8", "F9A9", "F9AA", "F9AB", "F9AC", "F9AD", "F9AE", "F9AF", "F9B0", "F9B1", "F9B2", "F9B3", "F9B4", "F9B5", "F9B6", "F9B7", "F9B8", "F9B9", "F9BA", "F9BB", "F9BC", "F9BD", "F9BE", "F9BF", "F9C0", "F9C1", "F9C2", "F9C3", "F9C4", "F9C5", "F9C6", "F9C7", "F9C8", "F9C9", "F9CA", "F9CB", "F9CC", "F9CD", "F9CE", "F9CF", "F9D0", "F9D1", "F9D2", "F9D3", "F9D4", "F9D5", "F9D6", "F9D7", "F9D8", "F9D9", "F9DA", "F9DB", "F9DC", "F9DD", "F9DE", "F9DF", "F9E0", "F9E1", "F9E2", "F9E3", "F9E4", "F9E5", "F9E6", "F9E7", "F9E8", "F9E9", "F9EA", "F9EB", "F9EC", "F9ED", "F9EE", "F9EF", "F9F0", "F9F1", "F9F2", "F9F3", "F9F4", "F9F5", "F9F6", "F9F7", "F9F8", "F9F9", "F9FA", "F9FB", "F9FC", "F9FD", "F9FE", "FAA1", "FAA2", "FAA3", "FAA4", "FAA5", "FAA6", "FAA7", "FAA8", "FAA9", "FAAA", "FAAB", "FAAC", "FAAD", "FAAE", "FAAF", "FAB0", "FAB1", "FAB2", "FAB3", "FAB4", "FAB5", "FAB6", "FAB7", "FAB8", "FAB9", "FABA", "FABB", "FABC", "FABD", "FABE", "FABF", "FAC0", "FAC1", "FAC2", "FAC3", "FAC4", "FAC5", "FAC6", "FAC7", "FAC8", "FAC9", "FACA", "FACB", "FACC", "FACD", "FACE", "FACF", "FAD0", "FAD1", "FAD2", "FAD3", "FAD4", "FAD5", "FAD6", "FAD7", "FAD8", "FAD9", "FADA", "FADB", "FADC", "FADD", "FADE", "FADF", "FAE0", "FAE1", "FAE2", "FAE3", "FAE4", "FAE5", "FAE6", "FAE7", "FAE8", "FAE9", "FAEA", "FAEB", "FAEC", "FAED", "FAEE", "FAEF", "FAF0", "FAF1", "FAF2", "FAF3", "FAF4", "FAF5", "FAF6", "FAF7", "FAF8", "FAF9", "FAFA", "FAFB", "FAFC", "FAFD", "FAFE", "FBA1", "FBA2", "FBA3", "FBA4", "FBA5", "FBA6", "FBA7", "FBA8", "FBA9", "FBAA", "FBAB", "FBAC", "FBAD", "FBAE", "FBAF", "FBB0", "FBB1", "FBB2", "FBB3", "FBB4", "FBB5", "FBB6", "FBB7", "FBB8", "FBB9", "FBBA", "FBBB", "FBBC", "FBBD", "FBBE", "FBBF", "FBC0", "FBC1", "FBC2", "FBC3", "FBC4", "FBC5", "FBC6", "FBC7", "FBC8", "FBC9", "FBCA", "FBCB", "FBCC", "FBCD", "FBCE", "FBCF", "FBD0", "FBD1", "FBD2", "FBD3", "FBD4", "FBD5", "FBD6", "FBD7", "FBD8", "FBD9", "FBDA", "FBDB", "FBDC", "FBDD", "FBDE", "FBDF", "FBE0", "FBE1", "FBE2", "FBE3", "FBE4", "FBE5", "FBE6", "FBE7", "FBE8", "FBE9", "FBEA", "FBEB", "FBEC", "FBED", "FBEE", "FBEF", "FBF0", "FBF1", "FBF2", "FBF3", "FBF4", "FBF5", "FBF6", "FBF7", "FBF8", "FBF9", "FBFA", "FBFB", "FBFC", "FBFD", "FBFE", "FCA1", "FCA2", "FCA3", "FCA4", "FCA5", "FCA6", "FCA7", "FCA8", "FCA9", "FCAA", "FCAB", "FCAC", "FCAD", "FCAE", "FCAF", "FCB0", "FCB1", "FCB2", "FCB3", "FCB4", "FCB5", "FCB6", "FCB7", "FCB8", "FCB9", "FCBA", "FCBB", "FCBC", "FCBD", "FCBE", "FCBF", "FCC0", "FCC1", "FCC2", "FCC3", "FCC4", "FCC5", "FCC6", "FCC7", "FCC8", "FCC9", "FCCA", "FCCB", "FCCC", "FCCD", "FCCE", "FCCF", "FCD0", "FCD1", "FCD2", "FCD3", "FCD4", "FCD5", "FCD6", "FCD7", "FCD8", "FCD9", "FCDA", "FCDB", "FCDC", "FCDD", "FCDE", "FCDF", "FCE0", "FCE1", "FCE2", "FCE3", "FCE4", "FCE5", "FCE6", "FCE7", "FCE8", "FCE9", "FCEA", "FCEB", "FCEC", "FCED", "FCEE", "FCEF", "FCF0", "FCF1", "FCF2", "FCF3", "FCF4", "FCF5", "FCF6", "FCF7", "FCF8", "FCF9", "FCFA", "FCFB", "FCFC", "FCFD", "FCFE", "FDA1", "FDA2", "FDA3", "FDA4", "FDA5", "FDA6", "FDA7", "FDA8", "FDA9", "FDAA", "FDAB", "FDAC", "FDAD", "FDAE", "FDAF", "FDB0", "FDB1", "FDB2", "FDB3", "FDB4", "FDB5", "FDB6", "FDB7", "FDB8", "FDB9", "FDBA", "FDBB", "FDBC", "FDBD", "FDBE", "FDBF", "FDC0", "FDC1", "FDC2", "FDC3", "FDC4", "FDC5", "FDC6", "FDC7", "FDC8", "FDC9", "FDCA", "FDCB", "FDCC", "FDCD", "FDCE", "FDCF", "FDD0", "FDD1", "FDD2", "FDD3", "FDD4", "FDD5", "FDD6", "FDD7", "FDD8", "FDD9", "FDDA", "FDDB", "FDDC", "FDDD", "FDDE", "FDDF", "FDE0", "FDE1", "FDE2", "FDE3", "FDE4", "FDE5", "FDE6", "FDE7", "FDE8", "FDE9", "FDEA", "FDEB", "FDEC", "FDED", "FDEE", "FDEF", "FDF0", "FDF1", "FDF2", "FDF3", "FDF4", "FDF5", "FDF6", "FDF7", "FDF8", "FDF9", "FDFA", "FDFB", "FDFC", "FDFD", "FDFE", "FEA1", "FEA2", "FEA3", "FEA4", "FEA5", "FEA6", "FEA7", "FEA8", "FEA9", "FEAA", "FEAB", "FEAC", "FEAD", "FEAE", "FEAF", "FEB0", "FEB1", "FEB2", "FEB3", "FEB4", "FEB5", "FEB6", "FEB7", "FEB8", "FEB9", "FEBA", "FEBB", "FEBC", "FEBD", "FEBE", "FEBF", "FEC0", "FEC1", "FEC2", "FEC3", "FEC4", "FEC5", "FEC6", "FEC7", "FEC8", "FEC9", "FECA", "FECB", "FECC", "FECD", "FECE", "FECF", "FED0", "FED1", "FED2", "FED3", "FED4", "FED5", "FED6", "FED7", "FED8", "FED9", "FEDA", "FEDB", "FEDC", "FEDD", "FEDE", "FEDF", "FEE0", "FEE1", "FEE2", "FEE3", "FEE4", "FEE5", "FEE6", "FEE7", "FEE8", "FEE9", "FEEA", "FEEB", "FEEC", "FEED", "FEEE", "FEEF", "FEF0", "FEF1", "FEF2", "FEF3", "FEF4", "FEF5", "FEF6", "FEF7", "FEF8", "FEF9", "FEFA", "FEFB", "FEFC", "FEFD", "FEFE", "A140", "A141", "A142", "A143", "A144", "A145", "A146", "A147", "A148", "A149", "A14A", "A14B", "A14C", "A14D", "A14E", "A14F", "A150", "A151", "A152", "A153", "A154", "A155", "A156", "A157", "A158", "A159", "A15A", "A15B", "A15C", "A15D", "A15E", "A15F", "A160", "A161", "A162", "A163", "A164", "A165", "A166", "A167", "A168", "A169", "A16A", "A16B", "A16C", "A16D", "A16E", "A16F", "A170", "A171", "A172", "A173", "A174", "A175", "A176", "A177", "A178", "A179", "A17A", "A17B", "A17C", "A17D", "A17E", "A180", "A181", "A182", "A183", "A184", "A185", "A186", "A187", "A188", "A189", "A18A", "A18B", "A18C", "A18D", "A18E", "A18F", "A190", "A191", "A192", "A193", "A194", "A195", "A196", "A197", "A198", "A199", "A19A", "A19B", "A19C", "A19D", "A19E", "A19F", "A1A0", "A240", "A241", "A242", "A243", "A244", "A245", "A246", "A247", "A248", "A249", "A24A", "A24B", "A24C", "A24D", "A24E", "A24F", "A250", "A251", "A252", "A253", "A254", "A255", "A256", "A257", "A258", "A259", "A25A", "A25B", "A25C", "A25D", "A25E", "A25F", "A260", "A261", "A262", "A263", "A264", "A265", "A266", "A267", "A268", "A269", "A26A", "A26B", "A26C", "A26D", "A26E", "A26F", "A270", "A271", "A272", "A273", "A274", "A275", "A276", "A277", "A278", "A279", "A27A", "A27B", "A27C", "A27D", "A27E", "A280", "A281", "A282", "A283", "A284", "A285", "A286", "A287", "A288", "A289", "A28A", "A28B", "A28C", "A28D", "A28E", "A28F", "A290", "A291", "A292", "A293", "A294", "A295", "A296", "A297", "A298", "A299", "A29A", "A29B", "A29C", "A29D", "A29E", "A29F", "A2A0", "A340", "A341", "A342", "A343", "A344", "A345", "A346", "A347", "A348", "A349", "A34A", "A34B", "A34C", "A34D", "A34E", "A34F", "A350", "A351", "A352", "A353", "A354", "A355", "A356", "A357", "A358", "A359", "A35A", "A35B", "A35C", "A35D", "A35E", "A35F", "A360", "A361", "A362", "A363", "A364", "A365", "A366", "A367", "A368", "A369", "A36A", "A36B", "A36C", "A36D", "A36E", "A36F", "A370", "A371", "A372", "A373", "A374", "A375", "A376", "A377", "A378", "A379", "A37A", "A37B", "A37C", "A37D", "A37E", "A380", "A381", "A382", "A383", "A384", "A385", "A386", "A387", "A388", "A389", "A38A", "A38B", "A38C", "A38D", "A38E", "A38F", "A390", "A391", "A392", "A393", "A394", "A395", "A396", "A397", "A398", "A399", "A39A", "A39B", "A39C", "A39D", "A39E", "A39F", "A3A0", "A440", "A441", "A442", "A443", "A444", "A445", "A446", "A447", "A448", "A449", "A44A", "A44B", "A44C", "A44D", "A44E", "A44F", "A450", "A451", "A452", "A453", "A454", "A455", "A456", "A457", "A458", "A459", "A45A", "A45B", "A45C", "A45D", "A45E", "A45F", "A460", "A461", "A462", "A463", "A464", "A465", "A466", "A467", "A468", "A469", "A46A", "A46B", "A46C", "A46D", "A46E", "A46F", "A470", "A471", "A472", "A473", "A474", "A475", "A476", "A477", "A478", "A479", "A47A", "A47B", "A47C", "A47D", "A47E", "A480", "A481", "A482", "A483", "A484", "A485", "A486", "A487", "A488", "A489", "A48A", "A48B", "A48C", "A48D", "A48E", "A48F", "A490", "A491", "A492", "A493", "A494", "A495", "A496", "A497", "A498", "A499", "A49A", "A49B", "A49C", "A49D", "A49E", "A49F", "A4A0", "A540", "A541", "A542", "A543", "A544", "A545", "A546", "A547", "A548", "A549", "A54A", "A54B", "A54C", "A54D", "A54E", "A54F", "A550", "A551", "A552", "A553", "A554", "A555", "A556", "A557", "A558", "A559", "A55A", "A55B", "A55C", "A55D", "A55E", "A55F", "A560", "A561", "A562", "A563", "A564", "A565", "A566", "A567", "A568", "A569", "A56A", "A56B", "A56C", "A56D", "A56E", "A56F", "A570", "A571", "A572", "A573", "A574", "A575", "A576", "A577", "A578", "A579", "A57A", "A57B", "A57C", "A57D", "A57E", "A580", "A581", "A582", "A583", "A584", "A585", "A586", "A587", "A588", "A589", "A58A", "A58B", "A58C", "A58D", "A58E", "A58F", "A590", "A591", "A592", "A593", "A594", "A595", "A596", "A597", "A598", "A599", "A59A", "A59B", "A59C", "A59D", "A59E", "A59F", "A5A0", "A640", "A641", "A642", "A643", "A644", "A645", "A646", "A647", "A648", "A649", "A64A", "A64B", "A64C", "A64D", "A64E", "A64F", "A650", "A651", "A652", "A653", "A654", "A655", "A656", "A657", "A658", "A659", "A65A", "A65B", "A65C", "A65D", "A65E", "A65F", "A660", "A661", "A662", "A663", "A664", "A665", "A666", "A667", "A668", "A669", "A66A", "A66B", "A66C", "A66D", "A66E", "A66F", "A670", "A671", "A672", "A673", "A674", "A675", "A676", "A677", "A678", "A679", "A67A", "A67B", "A67C", "A67D", "A67E", "A680", "A681", "A682", "A683", "A684", "A685", "A686", "A687", "A688", "A689", "A68A", "A68B", "A68C", "A68D", "A68E", "A68F", "A690", "A691", "A692", "A693", "A694", "A695", "A696", "A697", "A698", "A699", "A69A", "A69B", "A69C", "A69D", "A69E", "A69F", "A6A0", "A740", "A741", "A742", "A743", "A744", "A745", "A746", "A747", "A748", "A749", "A74A", "A74B", "A74C", "A74D", "A74E", "A74F", "A750", "A751", "A752", "A753", "A754", "A755", "A756", "A757", "A758", "A759", "A75A", "A75B", "A75C", "A75D", "A75E", "A75F", "A760", "A761", "A762", "A763", "A764", "A765", "A766", "A767", "A768", "A769", "A76A", "A76B", "A76C", "A76D", "A76E", "A76F", "A770", "A771", "A772", "A773", "A774", "A775", "A776", "A777", "A778", "A779", "A77A", "A77B", "A77C", "A77D", "A77E", "A780", "A781", "A782", "A783", "A784", "A785", "A786", "A787", "A788", "A789", "A78A", "A78B", "A78C", "A78D", "A78E", "A78F", "A790", "A791", "A792", "A793", "A794", "A795", "A796", "A797", "A798", "A799", "A79A", "A79B", "A79C", "A79D", "A79E", "A79F", "A7A0", "A2AB", "A2AC", "A2AD", "A2AE", "A2AF", "A2B0", 0, "A2E4", "A2EF", "A2F0", "A2FD", "A2FE", "A4F4", "A4F5", "A4F6", "A4F7", "A4F8", "A4F9", "A4FA", "A4FB", "A4FC", "A4FD", "A4FE", "A5F7", "A5F8", "A5F9", "A5FA", "A5FB", "A5FC", "A5FD", "A5FE", "A6B9", "A6BA", "A6BB", "A6BC", "A6BD", "A6BE", "A6BF", "A6C0", "A6D9", "A6DA", "A6DB", "A6DC", "A6DD", "A6DE", "A6DF", "A6EC", "A6ED", "A6F3", "A6F6", "A6F7", "A6F8", "A6F9", "A6FA", "A6FB", "A6FC", "A6FD", "A6FE", "A7C2", "A7C3", "A7C4", "A7C5", "A7C6", "A7C7", "A7C8", "A7C9", "A7CA", "A7CB", "A7CC", "A7CD", "A7CE", "A7CF", "A7D0", "A7F2", "A7F3", "A7F4", "A7F5", "A7F6", "A7F7", "A7F8", "A7F9", "A7FA", "A7FB", "A7FC", "A7FD", "A7FE", "A896", "A897", "A898", "A899", "A89A", "A89B", "A89C", "A89D", "A89E", "A89F", "A8A0", "A8BC", 0, "A8C1", "A8C2", "A8C3", "A8C4", "A8EA", "A8EB", "A8EC", "A8ED", "A8EE", "A8EF", "A8F0", "A8F1", "A8F2", "A8F3", "A8F4", "A8F5", "A8F6", "A8F7", "A8F8", "A8F9", "A8FA", "A8FB", "A8FC", "A8FD", "A8FE", "A958", "A95B", "A95D", "A95E", "A95F", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A997", "A998", "A999", "A99A", "A99B", "A99C", "A99D", "A99E", "A99F", "A9A0", "A9A1", "A9A2", "A9A3", "A9F0", "A9F1", "A9F2", "A9F3", "A9F4", "A9F5", "A9F6", "A9F7", "A9F8", "A9F9", "A9FA", "A9FB", "A9FC", "A9FD", "A9FE", "D7FA", "D7FB", "D7FC", "D7FD", "D7FE", 0, "FE51", "FE52", "FE53", 0, 0, 0, 0, 0, "FE59", 0, 0, 0, 0, 0, 0, 0, "FE61", 0, 0, 0, 0, "FE66", "FE67", 0, 0, 0, 0, "FE6C", "FE6D", 0, 0, 0, 0, 0, 0, 0, 0, "FE76", 0, 0, 0, 0, 0, 0, 0, "FE7E", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE90", "FE91", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FEA0", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FD9C", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FD9D", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FD9E", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FD9F", 0, 0, 0, 0, 0, 0, 0, 0, 0, "FDA0", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "FE40", "FE41", "FE42", "FE43", 0, "FE44", 0, "FE45", "FE46", 0, 0, 0, "FE47", 0, 0, 0, 0, 0, 0, "FE48", "FE49", "FE4A", 0, "FE4B", "FE4C", 0, 0, "FE4D", "FE4E", "FE4F", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A955", "A6F2", 0, "A6F4", "A6F5", "A6E0", "A6E1", "A6F0", "A6F1", "A6E2", "A6E3", "A6EE", "A6EF", "A6E6", "A6E7", "A6E4", "A6E5", "A6E8", "A6E9", "A6EA", "A6EB", 0, 0, 0, 0, "A968", "A969", "A96A", "A96B", "A96C", "A96D", "A96E", "A96F", "A970", "A971", 0, "A972", "A973", "A974", "A975", 0, "A976", "A977", "A978", "A979", "A97A", "A97B", "A97C", "A97D", "A97E", "A980", "A981", "A982", "A983", "A984", 0, "A985", "A986", "A987", "A988", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A3A1", "A3A2", "A3A3", "A1E7", "A3A5", "A3A6", "A3A7", "A3A8", "A3A9", "A3AA", "A3AB", "A3AC", "A3AD", "A3AE", "A3AF", "A3B0", "A3B1", "A3B2", "A3B3", "A3B4", "A3B5", "A3B6", "A3B7", "A3B8", "A3B9", "A3BA", "A3BB", "A3BC", "A3BD", "A3BE", "A3BF", "A3C0", "A3C1", "A3C2", "A3C3", "A3C4", "A3C5", "A3C6", "A3C7", "A3C8", "A3C9", "A3CA", "A3CB", "A3CC", "A3CD", "A3CE", "A3CF", "A3D0", "A3D1", "A3D2", "A3D3", "A3D4", "A3D5", "A3D6", "A3D7", "A3D8", "A3D9", "A3DA", "A3DB", "A3DC", "A3DD", "A3DE", "A3DF", "A3E0", "A3E1", "A3E2", "A3E3", "A3E4", "A3E5", "A3E6", "A3E7", "A3E8", "A3E9", "A3EA", "A3EB", "A3EC", "A3ED", "A3EE", "A3EF", "A3F0", "A3F1", "A3F2", "A3F3", "A3F4", "A3F5", "A3F6", "A3F7", "A3F8", "A3F9", "A3FA", "A3FB", "A3FC", "A3FD", "A1AB", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "A1E9", "A1EA", "A956", "A3FE", "A957", "A3A4" ]
};
function h(A) {
var e = "";
e += ((A = parseInt(A)) >> 4 & 15).toString(16);
return (e += (15 & A).toString(16)).toUpperCase();
}
function _(A) {
for (var e = "", C = 0; C < A.length; C++) {
var E = 65535 & A.charCodeAt(C);
e += E <= 255 ? g(E) : f.gb18030[E];
}
return e;
}
function g(A) {
for (var e = ""; 0 != A; A >>= 8) e = h(255 & A) + e;
return e.toUpperCase();
}
function m(A) {
if (A.length % 2 != 0) throw new Error("not support length:" + A.length);
for (var e = [], C = 0, E = 0; E < A.length; ) {
var D = A.substring(E, E + 1), t = (255 & parseInt(D, 16)) << 4;
E++;
D = A.substring(E, E + 1);
var B = 255 & parseInt(D, 16);
e[C] = t + B;
C++;
E++;
}
return e;
}
var y = function(A) {
return m(_(A));
};
function v(A) {
if (A.length % 2 != 0) throw new Error("错误的输入:" + A);
for (var e = "", C = 0; C < A.length; ) {
var E = A.substring(C, C + 2);
C += 2;
if (E.charAt(0) < "8") e += String.fromCharCode(parseInt(E, 16)); else {
var D = A.substring(C, C + 2);
C += 2;
E += D;
var t = f.gb18030.indexOf(E);
e += String.fromCharCode(t);
}
}
return e;
}
function b(A) {
var e = "";
A.forEach(function(A) {
e += h(A);
});
return e.toUpperCase();
}
var k = function(A) {
return v(b(A));
}, S = function(A) {
for (var e = "", C = 0; C < A.length; ) {
var E = A[C++];
if (0 == (128 & E)) e += String.fromCharCode(E); else if (192 == (224 & E)) {
var D = A[C++];
e += String.fromCharCode((31 & E) << 6 | 63 & D);
} else if (224 == (240 & E)) {
D = A[C++];
var t = A[C++];
e += String.fromCharCode((15 & E) << 12 | (63 & D) << 6 | 63 & t);
} else if (240 == (248 & E)) {
var B = (7 & E) << 18 | (63 & (D = A[C++])) << 12 | (63 & (t = A[C++])) << 6 | 63 & A[C++];
if (B > 65535) {
B -= 65536;
e += String.fromCharCode(55296 + (B >> 10), 56320 + (1023 & B));
} else e += String.fromCharCode(B);
}
}
return e;
}, w = function(A) {
for (var e = !0, C = A.length, E = 0; E < A.length; E) if (A[E] < 128) E++; else {
if (A[E] < 192) {
e = !1;
break;
}
if (A[E] < 224) {
if (E >= C - 1 && C - 1 >= 2) break;
if (128 != (192 & A[E + 1])) {
e = !1;
break;
}
E += 2;
} else {
if (!(A[E] < 240)) {
e = !1;
break;
}
if (E >= C - 2 && C - 2 >= 3) break;
if (128 != (192 & A[E + 1]) || 128 != (192 & A[E + 2])) {
e = !1;
break;
}
E += 3;
}
}
return e;
}, I = function(e) {
var C = 0;
try {
if (w(e)) {
C = 1;
if (A.TextDecoder) {
C = 2;
return new TextDecoder("utf8").decode(new Uint8Array(e));
}
C = 3;
var E = String.fromCharCode.apply(String, s([], a(e), !1));
C = 4;
return decodeURIComponent(escape(E));
}
C = 6;
return k(new Uint8Array(e));
} catch (A) {
console.log("ByteToDimString 错误信息：", C, e);
return "unknown";
}
}, T = function(A) {
var e, C;
if ("string" != typeof A) return "";
for (var E = A.split(""), D = "", t = 0; t < E.length; t++) if ("%" == E[t]) {
var B = (null !== (e = E[t + 1]) && void 0 !== e ? e : "") + (null !== (C = E[t + 2]) && void 0 !== C ? C : "");
D += String.fromCharCode(parseInt(B, 16));
t += 2;
} else D += E[t];
return k(y(D));
};
if (A.__isgfenv) {
A.__proto__.ByteToDimString = I;
A.__proto__.TextEncoderGBK = y;
A.__proto__.TextDecoderGBK = k;
A.__proto__.TextDecoderUTF8 = S;
A.__proto__.W2AStringWithUrl = T;
A.__proto__.IsUTF8 = w;
} else {
A.ByteToDimString = I;
A.TextEncoderGBK = y;
A.TextDecoderGBK = k;
A.TextDecoderUTF8 = S;
A.W2AStringWithUrl = T;
A.IsUTF8 = w;
}
};
cc._RF.pop();
}, {} ],
engineAdapt: [ function(A, e) {
"use strict";
cc._RF.push(e, "3bb5c9WrWNPDK5Z+rLWg1qI", "engineAdapt");
var C = this && this.__awaiter || function(A, e, C, E) {
return new (C || (C = Promise))(function(D, t) {
function B(A) {
try {
n(E.next(A));
} catch (A) {
t(A);
}
}
function F(A) {
try {
n(E.throw(A));
} catch (A) {
t(A);
}
}
function n(A) {
A.done ? D(A.value) : (e = A.value, e instanceof C ? e : new C(function(A) {
A(e);
})).then(B, F);
var e;
}
n((E = E.apply(A, e || [])).next());
});
}, E = window;
window.createlianyun_engineAdapt = function() {
if (E.gfenv) var A = gfenv; else A = E;
var e = A.gflianyunfgui, D = A.gameframe, t = A.common, B = {
"./bin/gf.js": (A, e, C) => {
C.r(e);
C.d(e, {
gf: () => E,
comm: () => B
});
var E = D, B = t;
},
"./bin/shader/ShaderManager.js": (A, e, C) => {
C.r(e);
C.d(e, {
default: () => B
});
var E = C("./bin/gf.js"), D = function(A, e, C, E) {
var D, t = arguments.length, B = t < 3 ? e : null === E ? E = Object.getOwnPropertyDescriptor(e, C) : E;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) B = Reflect.decorate(A, e, C, E); else for (var F = A.length - 1; F >= 0; F--) (D = A[F]) && (B = (t < 3 ? D(B) : t > 3 ? D(e, C, B) : D(e, C)) || B);
return t > 3 && B && Object.defineProperty(e, C, B), B;
};
let t = class extends E.comm.engineAdapt.IShaderManager {
constructor() {
super(...arguments);
this._time = 0;
this._newNameEnd = "_New";
this._isPlayingWave = !1;
}
ctor() {}
createWaveShader(A = 1.8) {
return !0;
}
};
D([ E.gf.init ], t.prototype, "ctor", null);
const B = t = D([ E.gf.module({
name: "comm.IShaderManager",
interface: E.comm.engineAdapt.IShaderManager
}) ], t);
},
"./bin/spine/SpineManager.js": (E, D, t) => {
t.r(D);
t.d(D, {
default: () => n
});
var B = t("./bin/gf.js");
let F = class extends B.comm.engineAdapt.ISpineManager {
constructor() {
super(...arguments);
this._pathNameEnd = "_PATH";
this.PI = 3.1415927;
this.degRad = this.PI / 180;
this._uiPromise = [];
this._uiPromiseIndex = 0;
}
releaseSpineData(A) {
if (B.gf.OS.isNative) {
let e = void 0;
e = Array.isArray(A) ? A : [ A ];
for (let A = 0; A < e.length; A++) if (e[A]) {
e[A].visible = !1;
B.gf.sp.onSpineLoaded(e[A], A => {
var e;
if (null === (e = null == A ? void 0 : A.skeletonData) || void 0 === e ? void 0 : e._uuid.endsWith(this._pathNameEnd)) {
spine.disposeSkeletonData(A.skeletonData._uuid);
spine.disposeSkeletonData(A.skeletonData._uuid);
spine.disposeSkeletonData(A.skeletonData._uuid);
}
});
}
}
}
modifySpinePathBySkin(C, E) {
if (!E) {
console.error("modifySpinePathBySkin error", E);
return;
}
let D = void 0;
D = Array.isArray(E) ? E : [ E ];
C.url = null;
const t = C.content_PathChange;
C.content_PathChange = !0;
if (t) return;
const F = e => {
var E, t, F, n, i, o, r, a, s;
e.skeletonData.calcData || (e.skeletonData.calcData = {});
for (let A = 0; A < D.length; A++) {
let c = D[A].worldPos;
const l = C.parent.globalToLocal(c.x, c.y);
c = B.gf.newVec2(l.x - C.x, -(l.y - C.y));
console.log("resetSpine" + l, c);
let u, p, d, f, h, _ = {}, g = 0, m = void 0, y = void 0, v = null === (i = null === (n = null === (F = null === (t = null === (E = e.skeletonData.skeletonJson) || void 0 === E ? void 0 : E.skins) || void 0 === t ? void 0 : t[0]) || void 0 === F ? void 0 : F.attachments) || void 0 === n ? void 0 : n[D[A].pathName]) || void 0 === i ? void 0 : i[D[A].pathName];
for (let C = 0; C < (null === (r = null === (o = e.skeletonData.skeletonJson) || void 0 === o ? void 0 : o.bones) || void 0 === r ? void 0 : r.length); C++) {
const E = null === (s = null === (a = e.skeletonData.skeletonJson) || void 0 === a ? void 0 : a.bones) || void 0 === s ? void 0 : s[C];
(null == E ? void 0 : E.name) === D[A].pathName ? m = E : (null == E ? void 0 : E.name) === D[A].endBoneName && (y = E);
if (m && y) break;
}
if (!m || !v) {
console.error("modifySpinePathBySkin error no path_bone ", D[A].pathName);
return;
}
if (e.skeletonData.calcData[D[A].pathName]) {
_ = e.skeletonData.calcData[D[A].pathName].worldVertices;
u = e.skeletonData.calcData[D[A].pathName].a;
p = e.skeletonData.calcData[D[A].pathName].b;
d = e.skeletonData.calcData[D[A].pathName].c;
f = e.skeletonData.calcData[D[A].pathName].d;
h = e.skeletonData.calcData[D[A].pathName].x;
g = e.skeletonData.calcData[D[A].pathName].y;
} else {
e.skeletonData.calcData[D[A].pathName] = {};
let C = m.rotation || 0;
const E = m.scaleX || 1, t = m.scaleY || 1, B = m.shearX || 0, F = m.shearY || 0;
let n = C + 90 + F;
const i = e.skeletonData.skeletonJson.bones[0].scaleX || 1, o = e.skeletonData.skeletonJson.bones[0].scaleY || 1;
u = Math.cos((C + B) * this.degRad) * E * i;
p = Math.cos(n * this.degRad) * t * i;
d = Math.sin((C + B) * this.degRad) * E * o;
f = Math.sin(n * this.degRad) * t * o;
h = 0;
g = 0;
for (let A = 2, e = 0; e < 8; A += 2, e += 2) {
const C = v.vertices[A], E = v.vertices[A + 1];
_[e] = C * u + E * p + h;
_[e + 1] = C * d + E * f + g;
}
n = 90 + (C = 0) + F;
e.skeletonData.calcData[D[A].pathName].a = Math.cos((C + B) * this.degRad) * E * i;
e.skeletonData.calcData[D[A].pathName].b = Math.cos(n * this.degRad) * t * i;
e.skeletonData.calcData[D[A].pathName].c = Math.sin((C + B) * this.degRad) * E * o;
e.skeletonData.calcData[D[A].pathName].d = Math.sin(n * this.degRad) * t * o;
e.skeletonData.calcData[D[A].pathName].x = h;
e.skeletonData.calcData[D[A].pathName].y = g;
e.skeletonData.calcData[D[A].pathName].worldVertices = _;
}
const b = [ 0, 0 ];
b[6] = c.x;
b[7] = c.y;
let {vx: k, vy: S} = this.solveForVxVy(b[6], b[7], u, p, d, f, h, g);
b[6] = k;
b[7] = S;
const w = Math.sqrt(Math.pow(c.x, 2) + Math.pow(c.y, 2)), I = [ _[6] - _[0], _[7] - _[1] ], T = [ _[2] - _[0], _[3] - _[1] ], P = this.calculateVectorD(I, T, [ c.x, c.y ]);
b[2] = P[0];
b[3] = P[1];
({vx: k, vy: S} = this.solveForVxVy(b[2], b[3], u, p, d, f, h, g));
b[2] = k;
b[3] = S;
const R = [ _[0] - _[6], _[1] - _[7] ], M = [ _[4] - _[6], _[5] - _[7] ], G = this.calculateVectorD(R, M, [ -c.x, -c.y ]);
b[4] = G[0];
b[5] = G[1];
({vx: k, vy: S} = this.solveForVxVy(b[4], b[5], u, p, d, f, h, g));
b[4] = k;
b[5] = S;
console.log(b);
v.lengths[0] = w;
v.vertices[2] = b[0];
v.vertices[3] = b[1];
v.vertices[4] = b[2];
v.vertices[5] = b[3];
v.vertices[6] = b[4];
v.vertices[7] = b[5];
v.vertices[8] = b[6];
v.vertices[9] = b[7];
m.rotation = 0;
if (y) {
y.x = c.x;
y.y = c.y;
}
}
let c;
if (B.gf.OS.isNative) {
if (e.skeletonData._uuid.endsWith(this._pathNameEnd)) c = e.skeletonData; else {
(c = new A.sp.SkeletonData())._uuid = e.skeletonData._uuid + "_" + C.id + this._pathNameEnd;
c.calcData = e.skeletonData.calcData;
c.atlasText = e.skeletonData.atlasText;
c.textures = e.skeletonData.textures;
c.textureNames = e.skeletonData.textureNames;
c._jsbTextures = e.skeletonData._jsbTextures;
c.scale = e.skeletonData.scale;
c.skeletonJson = e.skeletonData.skeletonJson;
}
spine.disposeSkeletonData(c._uuid);
spine.disposeSkeletonData(c._uuid);
spine.disposeSkeletonData(c._uuid);
} else c = e.skeletonData;
c._skeletonCache = null;
return c;
}, n = C.onLoaded;
C.onLoaded = (A, E) => {
if (C._contentItem == E) {
A && console.warn(A);
if (C._contentItem.asset && C._container.isValid) {
C._contentItem.type == e.PackageItemType.Spine ? C.setSpine(C._contentItem.asset, C._contentItem.skeletonAnchor, !1) : C._contentItem.type == e.PackageItemType.DragonBones && C.setDragonBones(C._contentItem.asset, C._contentItem.atlasAsset, this._contentItem.skeletonAnchor);
C.onLoaded = n;
}
}
};
const i = C.setSpine;
C.setSpine = (A, E, D) => {
C.clearContent();
var t = new cc.Node();
t.color = C._color;
C._container.addChild(t);
t.setPosition(E.x, -E.y);
C._content = t.addComponent(sp.Skeleton);
if (null != C.data && "string" == typeof C.data) {
var B = C.data.toLowerCase();
B.indexOf("private_cache") >= 0 && C._content.setAnimationCacheMode(sp.Skeleton.AnimationCacheMode.PRIVATE_CACHE);
B.indexOf("shared_cache") >= 0 && C._content.setAnimationCacheMode(sp.Skeleton.AnimationCacheMode.SHARED_CACHE);
}
this.addPromise(E => {
this.callInNextTick(() => {
var t;
try {
C._content.premultipliedAlpha = D;
let e = F({
skeletonData: A
});
C._content.skeletonData = e;
C.onChangeSpine();
C.updateLayout();
} catch (A) {
console.error(A);
}
C && (C.content_PathChange = !1);
null === (t = null == C ? void 0 : C._node) || void 0 === t || t.emit(e.Event.LOADED, C);
E();
});
});
C.setSpine = i;
};
}
setSpineSocket(A, e, C) {
B.gf.sp.onSpineLoaded(C, C => {
let E = C.attachUtil.generateAttachedNodes(A.split("/").pop())[0];
e.node.parent = E;
e.setPosition(0, 0);
});
}
calculateVectorD(A, e, C) {
if (!A || !e || !C || 2 !== A.length || 2 !== e.length || 2 !== C.length) {
console.error("calculateVectorD error", A, e, C);
return [ 0, 0 ];
}
const E = A[0] * e[0] + A[1] * e[1], D = Math.sqrt(Math.pow(A[0], 2) + Math.pow(A[1], 2)), t = Math.sqrt(Math.pow(e[0], 2) + Math.pow(e[1], 2)), B = Math.sqrt(Math.pow(C[0], 2) + Math.pow(C[1], 2)), F = E / (D * t), n = [ C[0] * F, C[1] * F ], i = t / D * B, o = Math.sqrt(Math.pow(n[0], 2) + Math.pow(n[1], 2));
if (o > 0) {
n[0] = n[0] / o * i;
n[1] = n[1] / o * i;
}
return n;
}
solveForVxVy(A, e, C, E, D, t, B, F) {
const n = [ [ C, E ], [ D, t ] ], i = [ A - B, e - F ], o = n[0][0] * n[1][1] - n[0][1] * n[1][0];
if (0 === o) {
console.warn("The system has no unique solution. Returning default values.");
return {
vx: 0,
vy: 0
};
}
return {
vx: (i[0] * n[1][1] - i[1] * n[0][1]) / o,
vy: (n[0][0] * i[1] - n[1][0] * i[0]) / o
};
}
addPromise(A) {
let e = this._uiPromiseIndex;
0 == this._uiPromiseIndex ? this._uiPromise[this._uiPromiseIndex] = new Promise(C => {
console.time("Promise" + e);
A(() => {
C("Success!");
console.timeEnd("Promise" + e);
});
}) : this._uiPromise[this._uiPromiseIndex] = this._uiPromise[this._uiPromiseIndex - 1].then(() => C(this, void 0, void 0, function*() {
return new Promise(C => {
console.time("Promise" + e);
A(() => {
C("Success!");
console.timeEnd("Promise" + e);
this._uiPromiseIndex == e + 1 && (this._uiPromiseIndex = 0);
});
});
}));
this._uiPromiseIndex++;
}
setTimeoutRAF(e, C, ...E) {
const D = performance.now(), t = requestAnimationFrame || A.requestAnimationFrame || A.webkitRequestAnimationFrame || A.mozRequestAnimationFrame || A.oRequestAnimationFrame || A.msRequestAnimationFrame, B = () => {
performance.now() - D < C ? t(B) : e(...E);
};
return t(B);
}
callInNextTick(A, e, C) {
A && this.setTimeoutRAF(() => {
A(e, C);
}, 0);
}
};
const n = F = function(A, e, C, E) {
var D, t = arguments.length, B = t < 3 ? e : null === E ? E = Object.getOwnPropertyDescriptor(e, C) : E;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) B = Reflect.decorate(A, e, C, E); else for (var F = A.length - 1; F >= 0; F--) (D = A[F]) && (B = (t < 3 ? D(B) : t > 3 ? D(e, C, B) : D(e, C)) || B);
return t > 3 && B && Object.defineProperty(e, C, B), B;
}([ B.gf.module({
name: "comm.ISpineManager",
interface: B.comm.engineAdapt.ISpineManager
}) ], F);
}
}, F = {};
function n(A) {
var e = F[A];
if (void 0 !== e) return e.exports;
var C = F[A] = {
exports: {}
};
B[A](C, C.exports, n);
return C.exports;
}
n.d = (A, e) => {
for (var C in e) n.o(e, C) && !n.o(A, C) && Object.defineProperty(A, C, {
enumerable: !0,
get: e[C]
});
};
n.o = (A, e) => Object.prototype.hasOwnProperty.call(A, e);
n.r = A => {
"undefined" != typeof Symbol && Symbol.toStringTag && Object.defineProperty(A, Symbol.toStringTag, {
value: "Module"
});
Object.defineProperty(A, "__esModule", {
value: !0
});
};
var i = {};
(() => {
n.r(i);
n("./bin/gf.js"), n("./bin/shader/ShaderManager.js"), n("./bin/spine/SpineManager.js");
})();
};
cc._RF.pop();
}, {} ]
}, {}, [ "common", "engineAdapt" ]);