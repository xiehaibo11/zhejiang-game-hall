window.__require = function e(i, t, a) {
function o(r, s) {
if (!t[r]) {
if (!i[r]) {
var c = r.split("/");
c = c[c.length - 1];
if (!i[c]) {
var d = "function" == typeof __require && __require;
if (!s && d) return d(c, !0);
if (n) return n(c, !0);
throw new Error("Cannot find module '" + r + "'");
}
r = c;
}
var l = t[r] = {
exports: {}
};
i[r][0].call(l.exports, function(e) {
return o(i[r][1][e] || e);
}, l, l.exports, e, i, t, a);
}
return t[r].exports;
}
for (var n = "function" == typeof __require && __require, r = 0; r < a.length; r++) o(a[r]);
return o;
}({
AppData: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "03ae9kLgUFIg7Nf8Iyti7k0", "AppData");
var a, o, n, r, s, c = this && this.__read || function(e, i) {
var t = "function" == typeof Symbol && e[Symbol.iterator];
if (!t) return e;
var a, o, n = t.call(e), r = [];
try {
for (;(void 0 === i || i-- > 0) && !(a = n.next()).done; ) r.push(a.value);
} catch (e) {
o = {
error: e
};
} finally {
try {
a && !a.done && (t = n.return) && t.call(n);
} finally {
if (o) throw o.error;
}
}
return r;
}, d = this && this.__spread || function() {
for (var e = [], i = 0; i < arguments.length; i++) e = e.concat(c(arguments[i]));
return e;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
t.PokerGameLobbyId = t.PokerPDKGameIds = t.LZDDZ_GAMEID = t.NotShowRoomIdLobbyIds = t.GameStyleUnified = t.YWZJQuanMinGameID = t.SpeicalGameIDs = t.QianShouYueYangGameIDs = t.QianShouYueYangGameID = t.needReqMail50 = t.QSSOperation = t.QianShouOperate = t.agreementNoConfigArr = t.needReqAppIDByLobbyIDGray = t.reqAreaAndGameConfigDataRemote = t.reqConfigDataRemote = t.req33PtorocolLobbyids = t.needReqAppIDByLobbyID = t.BundleName = t.BackRoomMode = t.LobbyIDs = t.LobbyID = t.PeakRaceGameId = t.QianShouLobbyID = t.TokenData = t.SessionData = t.AppData = t.PACKAGE_ID_IOS = void 0;
t.PACKAGE_ID_IOS = 7294;
t.AppData = {
debugLevel: 0,
appid: 1465,
packageid: cc.sys.os === cc.sys.OS_ANDROID ? 7288 : t.PACKAGE_ID_IOS,
h5channelid: 5001,
appKey: "97d26c3d0bcbe80edba744c7b4947d76",
launchLayer: {
prefab: "login/LoginUI",
script: "HotUpdateUIController"
}
};
t.SessionData = {
get headImageUrl() {
return "headImageUrl";
},
get userid() {
return g.grayTest + g.areaName + "userid";
}
};
t.TokenData = {
get loginTokenKey() {
return cc.sys.isBrowser && void 0 !== g.startupArgs.account ? g.grayTest + String(g.subLobbyId) + "token" + g.startupArgs.account : g.grayTest + String(g.subLobbyId) + "token";
},
getWebTokenKey: function(e) {
return g.grayTest + String(g.subLobbyId) + "webtoken" + e;
}
};
(function(e) {
e[e.QS_PAOHUZI = 900130] = "QS_PAOHUZI";
e[e.QS_HNQP = 900140] = "QS_HNQP";
e[e.QS_HNMJ = 900134] = "QS_HNMJ";
e[e.QS_YYQP = 900138] = "QS_YYQP";
e[e.QS_YIYQP = 900137] = "QS_YIYQP";
e[e.QS_CDQP = 900135] = "QS_CDQP";
e[e.QS_CSQP = 900139] = "QS_CSQP";
e[e.QS_JXMJ = 900132] = "QS_JXMJ";
e[e.QS_FZQP = 900136] = "QS_FZQP";
})(a = t.QianShouLobbyID || (t.QianShouLobbyID = {}));
(function(e) {
e.SICHUAN_DDZ = 20496;
e.ANHUI_PDK = 20503;
e.SICHUAN_XZDD = 20479;
})(t.PeakRaceGameId || (t.PeakRaceGameId = {}));
(function(e) {
e.YWZJ_QMNMMJ = 900119;
e.YWZJ_WZSXMJ = 900120;
e.YWZJ_BFYCMJ = 900121;
e.YWZJ_JXJYMJ = 900122;
e.YWZJ_HYNMMJ = 900123;
e.YWZJ_WZSXMJ_TEST = 900143;
e.YWZJ_BFYCMJ_TEST = 900159;
e.YWZJ_QMNMMJ_TEST = 900157;
e.MQ_NMGMJ = 900093;
e.MQ_FX = 900094;
e.MQ_BCMJ = 900096;
e.MQ_KPMJ = 900153;
e.MQ_RCMJ = 900097;
e.MQ_WH = 900108;
e.MQ_SY = 900095;
e.MQ_NMGQH = 900103;
e.MQ_WC = 900100;
e.MQ_YS = 900107;
e.MQ_ZHAQI = 900114;
e.MQ_CF = 900106;
e.MQ_YX = 900104;
e.MQ_HB = 900116;
e.MQ_CYZ = 900099;
e.MQ_NA = 900098;
e.MQ_HR = 900101;
e.MQ_CFJD = 900063;
e.MQ_HEB = 900066;
e.MQ_AC = 900060;
e.MQ_BX = 900073;
e.MQ_PS = 900076;
e.MQ_DLQH = 900078;
e.MQ_BAIYINMJ = 900109;
e.MQ_HANDANMJ = 900110;
e.MQ_JINZHOUMJ = 900115;
e.MQ_XINGTAIMJ = 900118;
e.MQ_WENDENGMJ = 900058;
e.TTI_GANSU = 900184;
e.TTI_GUILIN = 900185;
e.TTI_HAINAN = 900186;
e.TTI_GUANGXI = 900187;
e.TTI_ANHUI = 900188;
e.TTI_LIUZHOU = 900189;
e.TTI_SICHUAN = 900190;
e.TTI_TAIZHOU = 900204;
e.TTI_JIANGSU = 900205;
e.TTI_23 = 900206;
e.TTI_BAYI = 900207;
e.TTI_QINZHOU = 900208;
e.TTI_HECHI = 900209;
e.TTI_BEIHAI = 900210;
e.TTI_FANGCHENGGANG = 900211;
e.TTI_FUYANG = 900212;
e.TTI_SUZHOU = 900213;
e.TTI_BENGBU = 900214;
e.TTI_CHUZHOU = 900215;
e.TTI_ERQISHI = 900216;
e.TTI_CNZP = 900217;
e.TTI_CNMJ = 900228;
e.TTI_BAISE = 900218;
e.TTI_GANSU_STAGE = 1;
e.TTI_GUILIN_STAGE = 2;
e.TTI_HAINAN_STAGE = 3;
e.DZ_SHAN3_XI = 900227;
e.QS_HUNAN_MAH = 900221;
e.QS_CHANGDE = 900222;
e.QS_YIYANG = 900223;
e.QS_YUEYANG = 900224;
e.QS_CHANGSHA = 900225;
e.QS_LOUDI = 900226;
e.QS_PHZ = 900130;
e.QS_KXPHZ = 900133;
})(o = t.LobbyID || (t.LobbyID = {}));
(function(e) {
e.MengQi = [ 900093, 900094, 900095, 900096, 900097, 900098, 900099, 900100, 900101, 900102, 900103, 900104, 900105, 900106, 900107, 900108, 900109, 900110, 900111, 900112, 900113, 900114, 900115, 900116, 900117, 900118, 900057, 900058, 900059, 900060, 900061, 900062, 900063, 900064, 900065, 900066, 900067, 900068, 900069, 900070, 900071, 900072, 900073, 900074, 900075, 900076, 900077, 900078, 900079, 900080, 900081, 900082, 900083, 900084, 900085, 900086, 900087, 900088, 900089, 900090, 900091, 900092, 900164, 900156, 900151, 900163, 900154, 900155, 900150, 900159, 900177, 900178, 900152, 900179, 900180, 900146, 900181, 900149, 900161, 900148, 900145, 900162, 900182, 900142, 900144, 900143, 900153, 900160, 900183 ];
e.YWZJ = [ o.YWZJ_QMNMMJ, o.YWZJ_WZSXMJ, o.YWZJ_BFYCMJ, o.YWZJ_JXJYMJ, o.YWZJ_HYNMMJ, o.YWZJ_BFYCMJ_TEST, o.YWZJ_QMNMMJ_TEST ];
e.QianShou = [ a.QS_PAOHUZI, a.QS_HNQP, a.QS_HNMJ, a.QS_YYQP, a.QS_YIYQP, a.QS_CDQP, a.QS_CSQP, a.QS_JXMJ, a.QS_FZQP ];
e.QS = [ o.QS_HUNAN_MAH, o.QS_CHANGDE, o.QS_YIYANG, o.QS_YUEYANG, o.QS_CHANGSHA, o.QS_LOUDI, o.QS_PHZ, o.QS_KXPHZ ];
e.ShanDong = [ 900050, 900042 ];
e.TTI = [ 900184, 900185, 900186, 900187, 900188, 900189, 900190, 900204, 900205, 900206, 900207, 900208, 900209, 900210, 900211, 1, 2, 3, o.TTI_FUYANG, o.TTI_SUZHOU, o.TTI_BENGBU, o.TTI_CHUZHOU, o.TTI_ERQISHI, o.TTI_CNZP, o.TTI_CNMJ, o.TTI_BAISE ];
e.DZ = [ o.DZ_SHAN3_XI ];
e.UnifyFguiLobbys = e.MengQi;
e.UnifyYWZJLobbys = e.YWZJ;
e.FguiLobbys = e.TTI.concat(e.UnifyFguiLobbys).concat(e.UnifyYWZJLobbys).concat(e.QS).concat(e.DZ);
e.Proto50 = d([ o.TTI_ANHUI, o.TTI_LIUZHOU, o.TTI_SICHUAN, o.TTI_TAIZHOU, o.TTI_FANGCHENGGANG, o.TTI_JIANGSU, o.TTI_23, o.TTI_BAYI, o.TTI_QINZHOU, o.TTI_HECHI, o.TTI_BEIHAI, o.TTI_FUYANG, o.TTI_SUZHOU, o.TTI_BENGBU, o.TTI_CHUZHOU, o.TTI_ERQISHI, o.TTI_CNZP, o.TTI_CNMJ, o.TTI_BAISE ], e.QS, e.DZ);
})(n = t.LobbyIDs || (t.LobbyIDs = {}));
(function(e) {
e[e.Not = 0] = "Not";
e[e.Always = 1] = "Always";
e[e.NotGame = 2] = "NotGame";
})(t.BackRoomMode || (t.BackRoomMode = {}));
(t.BundleName || (t.BundleName = {})).BackGround = "bg";
t.needReqAppIDByLobbyID = [ 900109, 900117, 900102, 900059, 900164, 900100, 900107, 900060, 900072, 900076, 900099, 900111, 900112, 900110, 900118, 900063, 900066, 900085, 900067, 900068, 900069, 900071, 900073, 900074, 900075, 900077, 900078, 900079, 900082, 900090, 900089, 900065, 900088, 900070, 900084, 900151, 900083, 900154, 900080, 900086, 900163, 900091, 900150, 900156, 900092, 900155, 900177, 900178, 900152, 900179, 900180, 900146, 900181, 900149, 900161, 900148, 900145, 900162, 900182, 900142, 900144, 900159, 900143, 900153, 900120, 900121, 900119, 900138, 1, 2, 3 ];
t.req33PtorocolLobbyids = d(n.ShanDong, n.QianShou);
t.reqConfigDataRemote = d(n.MengQi, n.TTI, n.QianShou, n.QS, n.DZ, n.ShanDong, [ o.YWZJ_QMNMMJ, o.YWZJ_WZSXMJ, o.YWZJ_BFYCMJ, o.YWZJ_QMNMMJ_TEST ]);
t.reqAreaAndGameConfigDataRemote = d(n.TTI, n.QianShou, n.UnifyFguiLobbys, n.UnifyYWZJLobbys, n.ShanDong, n.QS, n.DZ);
t.needReqAppIDByLobbyIDGray = [ 900094, 900116 ];
t.agreementNoConfigArr = [ 900186, 900190 ];
t.QianShouOperate = {
wanfa1: "opt",
wanfa2: "operation",
wanfa3: "newoperation",
wanfa5: "fanbei_value",
wanfa4: "wf"
};
t.QSSOperation = {
wanfa1: "ptype",
wanfa2: "opt",
zhama: "zhuaniao"
};
t.needReqMail50 = [];
(function(e) {
e[e.QS_YUEYANG_HONGZHONG = 100] = "QS_YUEYANG_HONGZHONG";
e[e.QS_YUEYANG_CHANGSHA = 101] = "QS_YUEYANG_CHANGSHA";
e[e.QS_YUEYANG_XIANGYINTUIDAOHU = 102] = "QS_YUEYANG_XIANGYINTUIDAOHU";
e[e.QS_YUEYANG_CHENGLAIZI = 106] = "QS_YUEYANG_CHENGLAIZI";
e[e.QS_YUEYANG_ERRENCHANGSHA = 111] = "QS_YUEYANG_ERRENCHANGSHA";
e[e.QS_YUEYANG_WAIHUZI = 23] = "QS_YUEYANG_WAIHUZI";
e[e.QS_YUEYANG_PAODEKUAI16 = 50] = "QS_YUEYANG_PAODEKUAI16";
e[e.QS_YUEYANG_PAODEKUAI15 = 51] = "QS_YUEYANG_PAODEKUAI15";
})(r = t.QianShouYueYangGameID || (t.QianShouYueYangGameID = {}));
t.QianShouYueYangGameIDs = [ r.QS_YUEYANG_HONGZHONG, r.QS_YUEYANG_CHANGSHA, r.QS_YUEYANG_XIANGYINTUIDAOHU, r.QS_YUEYANG_CHENGLAIZI, r.QS_YUEYANG_ERRENCHANGSHA, r.QS_YUEYANG_WAIHUZI, r.QS_YUEYANG_PAODEKUAI16, r.QS_YUEYANG_PAODEKUAI15 ];
(function(e) {
e[e.TTI_PAOFENG = 20515] = "TTI_PAOFENG";
})(t.SpeicalGameIDs || (t.SpeicalGameIDs = {}));
(function(e) {
e[e.YWZJ_YIKOUXIANG = 20252] = "YWZJ_YIKOUXIANG";
e[e.YWZJ_DIANPAO_TDH = 20268] = "YWZJ_DIANPAO_TDH";
})(t.YWZJQuanMinGameID || (t.YWZJQuanMinGameID = {}));
t.GameStyleUnified = {
config: {
MengQi: [],
YWZJ: {
LobbyID: [],
GameID: [],
GameConfig: [ {
GameScript: "",
GameLobbyID: []
} ]
}
}
};
t.NotShowRoomIdLobbyIds = [];
t.LZDDZ_GAMEID = 42210;
(function(e) {
e[e.POKER_PDK_15ZHANG = 20757] = "POKER_PDK_15ZHANG";
e[e.POKER_PDK_16ZHANG = 20756] = "POKER_PDK_16ZHANG";
e[e.YY_POKER_PDK_15ZHANG = 20775] = "YY_POKER_PDK_15ZHANG";
e[e.CHANGDE_POKER_PDK_15ZHANG = 20765] = "CHANGDE_POKER_PDK_15ZHANG";
e[e.LOUDI_POKER_PDK_15ZHANG = 20799] = "LOUDI_POKER_PDK_15ZHANG";
e[e.LOUDI_POKER_PDK_16ZHANG = 20800] = "LOUDI_POKER_PDK_16ZHANG";
e[e.CHANGSHA_POKER_PDK_15ZHANG = 20793] = "CHANGSHA_POKER_PDK_15ZHANG";
e[e.YUEYANG_POKER_PDK_15ZHANG = 20784] = "YUEYANG_POKER_PDK_15ZHANG";
e[e.YUEYANG_POKER_PDK_16ZHANG = 20785] = "YUEYANG_POKER_PDK_16ZHANG";
})(s = t.PokerPDKGameIds || (t.PokerPDKGameIds = {}));
t.PokerGameLobbyId = new Map([ [ s.POKER_PDK_15ZHANG, o.TTI_SICHUAN ], [ s.POKER_PDK_16ZHANG, o.TTI_SICHUAN ], [ s.YY_POKER_PDK_15ZHANG, o.TTI_SICHUAN ], [ s.CHANGDE_POKER_PDK_15ZHANG, o.TTI_SICHUAN ], [ s.LOUDI_POKER_PDK_15ZHANG, o.TTI_SICHUAN ], [ s.LOUDI_POKER_PDK_16ZHANG, o.TTI_SICHUAN ], [ s.CHANGSHA_POKER_PDK_15ZHANG, o.TTI_SICHUAN ], [ s.YUEYANG_POKER_PDK_15ZHANG, o.TTI_SICHUAN ], [ s.YUEYANG_POKER_PDK_16ZHANG, o.TTI_SICHUAN ] ]);
cc._RF.pop();
}, {} ],
AppPackageDefine: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "1a10e0oRX9CN4jrdReJUo05", "AppPackageDefine");
var a;
Object.defineProperty(t, "__esModule", {
value: !0
});
t.AppSupGvoicePackages = t.AppWebAmapPackages = t.AppOpenChooseAreaConfig = t.OriginBgByLobbyid = t.AppPackageName = t.GameTypeOrigin = void 0;
var o = e("../../../area/app/AppData");
t.GameTypeOrigin = {
QIANSHOU: "qianshou",
MENGQI: "mengqi",
YWZJ: "ywzj",
TTI: "tti",
DZ: "dz"
};
t.AppPackageName = {
LAO_YOU: "com.wishstartgame.chess",
WANG_ZHE: "com.laoyou.shanxi",
YUN_CHENG: "com.bfyx.shanxi",
QUAN_MIN: "com.laoyou.neimeng",
ALL_GAME_AND: "com.bianqi.wpll",
IOS: cc.sys.OS_IOS,
ALL_GAME: "com.bianqi.wpll",
QS_YUEYANG: "com.lewan.hyphz",
PC: "pc",
TTI_GANSU: "com.tencent.tmgp.mjgamegansu3",
TTI_GUILIN: "com.tencent.tmgp.mjgameguilin",
TTI_HAINAN: "com.tencent.tmgp.mjgamehainan",
TTI_GUANGXI: "com.tencent.tmgp.mjgameguangxi",
TTI_ANHUI: "com.tencent.tmgp.mjgameanhui3",
TTI_LIUZHOU: "com.tencent.tmgp.tt2kj.liuzhoumj",
TTI_SICHUAN: "com.tencent.tmgp.mjgamesichuan",
TTI_TAIZHOU: "com.tencent.tmgp.mjgametaizhou",
TTI_FANGCHENGGANG: "com.tencent.tmgp.mjgamefangchenggang",
TTI_JIANGSU: "com.youle.game.mjgamejiangsu",
TTI_23: "com.tencent.tmgp.mjgame23zhang",
TTI_BAYI: "com.tencent.tmgp.mjgamebayizipai",
TTI_QINZHOU: "com.tencent.tmgp.mjgameqinzhou",
TTI_HECHI: "com.tencent.tmgp.mjgamehechi",
TTI_BEIHAI: "com.tencent.tmgp.mjgamebeihai",
TTI_FUYANG: "com.tencent.tmgp.mjgamefuyang",
TTI_BENGBU: "com.tencent.tmgp.mjgamebengbu",
TTI_SUZHOU: "com.tencent.tmgp.mjgamesuzhou",
TTI_CHUZHOU: "com.tencent.tmgp.mjgamechuzhou",
TTI_ERQISHI: "com.tencent.tmgp.twoseventy",
TTI_CNZP: "com.tencent.tmgp.mjgameleleluzhou",
TTI_CNMJ: "com.tencent.tmgp.mjgamechuannan",
TTI_BAISE: "com.tencent.tmgp.mjgamebaise",
DZ_SHAN3XI: "com.sx.shanxi",
QS_HUNAN_MAH: "com.qqsgame.majiang",
QS_LOUDI: "com.qs.qianshouhunanqipai",
QS_YIYANG: "com.qqsgame.u3dgroup",
QS_CHANGDE: "com.qqlewan.changdeqipai",
QS_CHANGSHA: "com.qqlewan.changshaqipai"
};
t.OriginBgByLobbyid = [ 900185, 900186, 900187, 900188, 900189, 900190 ];
t.AppOpenChooseAreaConfig = ((a = {})[t.AppPackageName.QUAN_MIN] = {
isOpen: 0,
defaultLobbyid: 900119
}, a[t.AppPackageName.YUN_CHENG] = {
isOpen: 0,
defaultLobbyid: 900121
}, a[t.AppPackageName.WANG_ZHE] = {
isOpen: 0,
defaultLobbyid: 900120
}, a[t.AppPackageName.TTI_GANSU] = {
isOpen: 0,
defaultLobbyid: 900184
}, a[t.AppPackageName.TTI_GUILIN] = {
isOpen: 0,
defaultLobbyid: 900185
}, a[t.AppPackageName.TTI_HAINAN] = {
isOpen: 0,
defaultLobbyid: 900186
}, a[t.AppPackageName.TTI_GUANGXI] = {
isOpen: 0,
defaultLobbyid: 900187
}, a[t.AppPackageName.TTI_ANHUI] = {
isOpen: 0,
defaultLobbyid: 900188
}, a[t.AppPackageName.TTI_LIUZHOU] = {
isOpen: 0,
defaultLobbyid: 900189
}, a[t.AppPackageName.TTI_SICHUAN] = {
isOpen: 0,
defaultLobbyid: 900190
}, a[t.AppPackageName.TTI_TAIZHOU] = {
isOpen: 0,
defaultLobbyid: 900204
}, a[t.AppPackageName.TTI_JIANGSU] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_JIANGSU
}, a[t.AppPackageName.TTI_23] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_23
}, a[t.AppPackageName.TTI_FANGCHENGGANG] = {
isOpen: 0,
defaultLobbyid: 900211
}, a[t.AppPackageName.TTI_BAYI] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_BAYI
}, a[t.AppPackageName.TTI_QINZHOU] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_QINZHOU
}, a[t.AppPackageName.TTI_HECHI] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_HECHI
}, a[t.AppPackageName.TTI_BEIHAI] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_BEIHAI
}, a[t.AppPackageName.TTI_FUYANG] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_FUYANG
}, a[t.AppPackageName.TTI_SUZHOU] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_SUZHOU
}, a[t.AppPackageName.TTI_BENGBU] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_BENGBU
}, a[t.AppPackageName.TTI_CHUZHOU] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_CHUZHOU
}, a[t.AppPackageName.TTI_ERQISHI] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_ERQISHI
}, a[t.AppPackageName.TTI_CNZP] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_CNZP
}, a[t.AppPackageName.TTI_CNMJ] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_CNMJ
}, a[t.AppPackageName.TTI_BAISE] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.TTI_BAISE
}, a[t.AppPackageName.DZ_SHAN3XI] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.DZ_SHAN3_XI
}, a[t.AppPackageName.QS_HUNAN_MAH] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.QS_HUNAN_MAH
}, a[t.AppPackageName.QS_LOUDI] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.QS_LOUDI
}, a[t.AppPackageName.QS_YIYANG] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.QS_YIYANG
}, a[t.AppPackageName.QS_CHANGDE] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.QS_CHANGDE
}, a[t.AppPackageName.QS_CHANGSHA] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.QS_CHANGSHA
}, a[t.AppPackageName.QS_YUEYANG] = {
isOpen: 0,
defaultLobbyid: o.LobbyID.QS_YUEYANG
}, a);
t.AppWebAmapPackages = [ t.AppPackageName.TTI_BEIHAI, t.AppPackageName.TTI_FUYANG, t.AppPackageName.TTI_BENGBU, t.AppPackageName.TTI_SUZHOU, t.AppPackageName.TTI_CHUZHOU, t.AppPackageName.TTI_TAIZHOU, t.AppPackageName.TTI_FANGCHENGGANG, t.AppPackageName.TTI_JIANGSU, t.AppPackageName.TTI_23, t.AppPackageName.TTI_BAYI, t.AppPackageName.TTI_QINZHOU, t.AppPackageName.TTI_HECHI ];
t.AppSupGvoicePackages = [ t.AppPackageName.TTI_GANSU, t.AppPackageName.TTI_GUILIN, t.AppPackageName.TTI_HAINAN, t.AppPackageName.TTI_GUANGXI, t.AppPackageName.TTI_ANHUI, t.AppPackageName.TTI_LIUZHOU, t.AppPackageName.TTI_SICHUAN, t.AppPackageName.TTI_TAIZHOU, t.AppPackageName.TTI_FANGCHENGGANG, t.AppPackageName.TTI_JIANGSU, t.AppPackageName.TTI_23, t.AppPackageName.TTI_BAYI, t.AppPackageName.TTI_QINZHOU, t.AppPackageName.TTI_HECHI, t.AppPackageName.TTI_BEIHAI, t.AppPackageName.TTI_FUYANG, t.AppPackageName.TTI_BENGBU, t.AppPackageName.TTI_SUZHOU, t.AppPackageName.TTI_CHUZHOU, t.AppPackageName.TTI_ERQISHI, t.AppPackageName.TTI_CNZP, t.AppPackageName.TTI_CNMJ, t.AppPackageName.TTI_BAISE, t.AppPackageName.DZ_SHAN3XI, t.AppPackageName.QS_HUNAN_MAH, t.AppPackageName.QS_LOUDI, t.AppPackageName.QS_YIYANG, t.AppPackageName.QS_CHANGDE, t.AppPackageName.QS_CHANGSHA ];
cc._RF.pop();
}, {
"../../../area/app/AppData": "AppData"
} ],
AppRootView: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "e89b22SlslJi40qqHBm9nn1", "AppRootView");
var a, o = this && this.__extends || (a = function(e, i) {
return (a = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(e, i) {
e.__proto__ = i;
} || function(e, i) {
for (var t in i) Object.prototype.hasOwnProperty.call(i, t) && (e[t] = i[t]);
})(e, i);
}, function(e, i) {
a(e, i);
function t() {
this.constructor = e;
}
e.prototype = null === i ? Object.create(i) : (t.prototype = i.prototype, new t());
}), n = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
}, r = this && this.__awaiter || function(e, i, t, a) {
return new (t || (t = Promise))(function(o, n) {
function r(e) {
try {
c(a.next(e));
} catch (e) {
n(e);
}
}
function s(e) {
try {
c(a.throw(e));
} catch (e) {
n(e);
}
}
function c(e) {
e.done ? o(e.value) : (i = e.value, i instanceof t ? i : new t(function(e) {
e(i);
})).then(r, s);
var i;
}
c((a = a.apply(e, i || [])).next());
});
}, s = this && this.__generator || function(e, i) {
var t, a, o, n, r = {
label: 0,
sent: function() {
if (1 & o[0]) throw o[1];
return o[1];
},
trys: [],
ops: []
};
return n = {
next: s(0),
throw: s(1),
return: s(2)
}, "function" == typeof Symbol && (n[Symbol.iterator] = function() {
return this;
}), n;
function s(e) {
return function(i) {
return c([ e, i ]);
};
}
function c(n) {
if (t) throw new TypeError("Generator is already executing.");
for (;r; ) try {
if (t = 1, a && (o = 2 & n[0] ? a.return : n[0] ? a.throw || ((o = a.return) && o.call(a), 
0) : a.next) && !(o = o.call(a, n[1])).done) return o;
(a = 0, o) && (n = [ 2 & n[0], o.value ]);
switch (n[0]) {
case 0:
case 1:
o = n;
break;

case 4:
r.label++;
return {
value: n[1],
done: !1
};

case 5:
r.label++;
a = n[1];
n = [ 0 ];
continue;

case 7:
n = r.ops.pop();
r.trys.pop();
continue;

default:
if (!(o = r.trys, o = o.length > 0 && o[o.length - 1]) && (6 === n[0] || 2 === n[0])) {
r = 0;
continue;
}
if (3 === n[0] && (!o || n[1] > o[0] && n[1] < o[3])) {
r.label = n[1];
break;
}
if (6 === n[0] && r.label < o[1]) {
r.label = o[1];
o = n;
break;
}
if (o && r.label < o[2]) {
r.label = o[2];
r.ops.push(n);
break;
}
o[2] && r.ops.pop();
r.trys.pop();
continue;
}
n = i.call(e, r);
} catch (e) {
n = [ 6, e ];
a = 0;
} finally {
t = o = 0;
}
if (5 & n[0]) throw n[1];
return {
value: n[0] ? n[1] : void 0,
done: !0
};
}
}, c = this && this.__values || function(e) {
var i = "function" == typeof Symbol && Symbol.iterator, t = i && e[i], a = 0;
if (t) return t.call(e);
if (e && "number" == typeof e.length) return {
next: function() {
e && a >= e.length && (e = void 0);
return {
value: e && e[a++],
done: !e
};
}
};
throw new TypeError(i ? "Object is not iterable." : "Symbol.iterator is not defined.");
};
Object.defineProperty(t, "__esModule", {
value: !0
});
var d = e("../extend/Extend"), l = e("../framework/utils/LocalStorage"), u = cc._decorator.executionOrder;
(function(e) {
o(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.ctor = function() {
var i;
return r(this, void 0, Promise, function() {
var t, a, o, n, r, d, u, _, m, h, p, g, f, I, N;
return s(this, function() {
if (t = l.default.staticInstance.getString("lobbyid")) {
a = Number(t);
this.getPlugin(qg.Frame.SelectorPlugin).selectLobby(a);
}
this.getPlugin(qg.Frame.SelectorPlugin).selectCollection(!1);
this.getPlugin(qg.Frame.SelectorPlugin).apply();
this.getPlugin(qg.Frame.LaunchPlugin).start();
e.prototype.ctor.call(this);
o = [ 10, 11, 1e3, 1500, 1900, 2e3 ];
if (window.fgui) {
fgui.UIConfig.buttonSound = "ui://5hwbh28jadnnfinfb";
n = cc.director.getScene().getChildByName("Canvas");
r = [ "BaseRoot", "PopRoot", "TipRoot", "ToastRoot", "LoadingRoot", "TopRoot" ];
try {
for (d = c(r), u = d.next(); !u.done; u = d.next()) {
_ = u.value;
null === (i = n.getChildByName(_)) || void 0 === i || i.destroy();
}
} catch (e) {
f = {
error: e
};
} finally {
try {
u && !u.done && (I = d.return) && I.call(d);
} finally {
if (f) throw f.error;
}
}
fgui.GRoot.create();
m = {};
for (h = r.length, p = 0; p < h; p++) {
(g = new fgui.GComponent()).opaque = !1;
g.makeFullScreen();
g.addRelation(fgui.GRoot.inst, fgui.RelationType.Size);
g.name = g.node.name = r[p];
fgui.GRoot.inst.addChild(g);
g.node.setAnchorPoint(.5, .5);
m[p] = g.node;
}
this.getPlugin(qg.Frame.ViewRootPlugin).setViewRoot(fgui.GRoot.inst.node, m);
} else {
this.uis.BaseRoot.zIndex = o[0];
this.uis.PopRoot.zIndex = o[1];
this.uis.TipRoot.zIndex = o[2];
this.uis.ToastRoot.zIndex = o[3];
this.uis.LoadingRoot.zIndex = o[4];
this.uis.TopRoot.zIndex = o[5];
this.getPlugin(qg.Frame.ViewRootPlugin).setViewRoot(this.uis.Canvas, ((N = {})[qg.ViewOrder.Base] = this.uis.BaseRoot, 
N[qg.ViewOrder.Pop] = this.uis.PopRoot, N[qg.ViewOrder.Tip] = this.uis.TipRoot, 
N[qg.ViewOrder.Toast] = this.uis.ToastRoot, N[qg.ViewOrder.Loading] = this.uis.LoadingRoot, 
N[qg.ViewOrder.Top] = this.uis.TopRoot, N));
}
return [ 2 ];
});
});
};
i = n([ qg.Frame.RootView({}), u(-2) ], i);
})(d.Extend.ViewBaseEx);
cc._RF.pop();
}, {
"../extend/Extend": "Extend",
"../framework/utils/LocalStorage": "LocalStorage"
} ],
AreaNameConfig: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "d9cdds+30ZPpoSmsQWjSa70", "AreaNameConfig");
var a = this && this.__values || function(e) {
var i = "function" == typeof Symbol && Symbol.iterator, t = i && e[i], a = 0;
if (t) return t.call(e);
if (e && "number" == typeof e.length) return {
next: function() {
e && a >= e.length && (e = void 0);
return {
value: e && e[a++],
done: !e
};
}
};
throw new TypeError(i ? "Object is not iterable." : "Symbol.iterator is not defined.");
};
Object.defineProperty(t, "__esModule", {
value: !0
});
var o = e("../../../area/app/AppData"), n = function() {
function e() {
this.areaNameConfig = [ {
lobbyid: 900116,
areaName: "mengqi_hebei",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友河北麻将"
}, {
lobbyid: 900120,
areaName: "ywzj_wangzhe",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "王者陕西麻将",
h5Name: "王者陕西麻将"
}, {
lobbyid: 900119,
areaName: "ywzj_quanmin",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "全民内蒙古麻将",
h5Name: "全民内蒙古麻将"
}, {
lobbyid: 900121,
areaName: "ywzj_yuncheng",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋运城麻将",
h5Name: "边锋运城麻将"
}, {
lobbyid: 900123,
areaName: "ywzj_huiyou",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "会友内蒙麻将",
h5Name: "会友内蒙麻将"
}, {
lobbyid: 900057,
areaName: "mengqi_zhenlai",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友镇赉麻将"
}, {
lobbyid: 900058,
areaName: "mengqi_wendeng",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友文登麻将"
}, {
lobbyid: 900059,
areaName: "mengqi_shangzhi",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友尚志麻将"
}, {
lobbyid: 900060,
areaName: "mengqi_acheng",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友阿城麻将"
}, {
lobbyid: 900061,
areaName: "mengqi_huaian",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友怀安麻将"
}, {
lobbyid: 900062,
areaName: "mengqi_tailai",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友泰来麻将"
}, {
lobbyid: 900063,
areaName: "mengqi_chifengjingdian",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友赤峰经典麻将"
}, {
lobbyid: 900064,
areaName: "mengqi_huludao",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友葫芦岛麻将"
}, {
lobbyid: 900065,
areaName: "mengqi_panjin",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友盘锦麻将"
}, {
lobbyid: 900066,
areaName: "mengqi_haerbin",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友哈尔滨麻将"
}, {
lobbyid: 900067,
areaName: "mengqi_qiqihaer",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友齐齐哈尔麻将"
}, {
lobbyid: 900068,
areaName: "mengqi_shuangcheng",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友双城麻将"
}, {
lobbyid: 900069,
areaName: "mengqi_heishan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友黑山麻将"
}, {
lobbyid: 900070,
areaName: "mengqi_zhangwu",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友彰武麻将"
}, {
lobbyid: 900071,
areaName: "mengqi_benxi",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友本溪麻将"
}, {
lobbyid: 900072,
areaName: "mengqi_jian",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友集安麻将"
}, {
lobbyid: 900073,
areaName: "mengqi_binxian",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友宾县麻将"
}, {
lobbyid: 900074,
areaName: "mengqi_jianchang",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友建昌麻将"
}, {
lobbyid: 900075,
areaName: "mengqi_xinfushun",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友新抚顺麻将"
}, {
lobbyid: 900076,
areaName: "mengqi_panshi",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友磐石麻将"
}, {
lobbyid: 900077,
areaName: "mengqi_changbaishan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友长白山麻将"
}, {
lobbyid: 900078,
areaName: "mengqi_dalianqionghu",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友大连穷胡麻将"
}, {
lobbyid: 900079,
areaName: "mengqi_zhangjiakou",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友张家口推倒胡麻将"
}, {
lobbyid: 900080,
areaName: "mengqi_changtu",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友昌图麻将"
}, {
lobbyid: 900081,
areaName: "mengqi_liuhe",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友柳河麻将"
}, {
lobbyid: 900082,
areaName: "mengqi_fushun",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友抚顺麻将"
}, {
lobbyid: 900083,
areaName: "mengqi_tieling",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友铁岭麻将"
}, {
lobbyid: 900084,
areaName: "mengqi_baoqing",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友宝清麻将"
}, {
lobbyid: 900085,
areaName: "mengqi_xiuyan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友岫岩麻将"
}, {
lobbyid: 900086,
areaName: "mengqi_naiman",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友奈曼麻将"
}, {
lobbyid: 900087,
areaName: "mengqi_dunhua",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友敦化麻将"
}, {
lobbyid: 900088,
areaName: "mengqi_gongchangling",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友弓长岭麻将"
}, {
lobbyid: 900089,
areaName: "mengqi_zaocheng",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友枣城麻将"
}, {
lobbyid: 900090,
areaName: "mengqi_baishan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友白山麻将"
}, {
lobbyid: 900091,
areaName: "mengqi_tongyu",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友通榆麻将"
}, {
lobbyid: 900092,
areaName: "mengqi_hailun",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友海伦麻将"
}, {
lobbyid: 900093,
areaName: "mengqi_neimenggu",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友内蒙古麻将"
}, {
lobbyid: 900094,
areaName: "mengqi_fuxin",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友阜新麻将"
}, {
lobbyid: 900095,
areaName: "mengqi_shenyang",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友沈阳麻将"
}, {
lobbyid: 900096,
areaName: "mengqi_baicheng",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友白城麻将"
}, {
lobbyid: 900097,
areaName: "mengqi_rongcheng",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友荣成麻将"
}, {
lobbyid: 900098,
areaName: "mengqi_ningan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友宁安麻将"
}, {
lobbyid: 900099,
areaName: "mengqi_chaoyangzhen",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友朝阳镇麻将"
}, {
lobbyid: 900100,
areaName: "mengqi_wuchang",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友五常麻将"
}, {
lobbyid: 900101,
areaName: "mengqi_huanren",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友桓仁麻将"
}, {
lobbyid: 900102,
areaName: "mengqi_erdayi",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友二打一"
}, {
lobbyid: 900103,
areaName: "mengqi_neimengguqionghu",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友内蒙古穷胡麻将"
}, {
lobbyid: 900104,
areaName: "mengqi_yixian",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友义县麻将"
}, {
lobbyid: 900105,
areaName: "mengqi_rushan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友乳山麻将"
}, {
lobbyid: 900106,
areaName: "mengqi_chifeng",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友赤峰麻将"
}, {
lobbyid: 900107,
areaName: "mengqi_yanshou",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友延寿麻将"
}, {
lobbyid: 900108,
areaName: "mengqi_weihai",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友威海麻将"
}, {
lobbyid: 900109,
areaName: "mengqi_baiyin",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友白银麻将"
}, {
lobbyid: 900110,
areaName: "mengqi_handan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友邯郸麻将"
}, {
lobbyid: 900111,
areaName: "mengqi_chaoyang",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友朝阳麻将"
}, {
lobbyid: 900112,
areaName: "mengqi_baohuang",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友保皇"
}, {
lobbyid: 900113,
areaName: "mengqi_aohan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友敖汉麻将"
}, {
lobbyid: 900114,
areaName: "mengqi_zhaqi",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友扎旗麻将"
}, {
lobbyid: 900115,
areaName: "mengqi_jinzhou",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友锦州麻将"
}, {
lobbyid: 900117,
areaName: "mengqi_hulunbeier",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友呼伦贝尔麻将"
}, {
lobbyid: 900118,
areaName: "mengqi_xingtai",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友邢台麻将"
}, {
lobbyid: 900150,
areaName: "mengqi_shijiazhuang",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友石家庄麻将"
}, {
lobbyid: 900151,
areaName: "mengqi_jinan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友济南麻将"
}, {
lobbyid: 900154,
areaName: "mengqi_qianan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友迁安麻将"
}, {
lobbyid: 900155,
areaName: "mengqi_faku",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友法库麻将"
}, {
lobbyid: 900156,
areaName: "mengqi_zhangjiakoukouzhang",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友张家口麻将"
}, {
lobbyid: 900163,
areaName: "mengqi_mishan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友密山麻将"
}, {
lobbyid: 900164,
areaName: "mengqi_erdayi2",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友二打一专属版"
}, {
lobbyid: 900160,
areaName: "mengqi_srs",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友哈尔滨麻将"
}, {
lobbyid: 900177,
areaName: "mengqi_zhuajia",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友抓夹"
}, {
lobbyid: 900178,
areaName: "mengqi_beizhen",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友北镇麻将"
}, {
lobbyid: 900152,
areaName: "mengqi_beipiao",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友北票麻将"
}, {
lobbyid: 900179,
areaName: "mengqi_taonan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友洮南麻将"
}, {
lobbyid: 900180,
areaName: "mengqi_beizhen",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友宣化麻将"
}, {
lobbyid: 900146,
areaName: "mengqi_langfang",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友廊坊麻将"
}, {
lobbyid: 900181,
areaName: "mengqi_zhaodong",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友肇东麻将"
}, {
lobbyid: 900149,
areaName: "mengqi_dandong",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友丹东麻将"
}, {
lobbyid: 900161,
areaName: "mengqi_tongliao",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友通辽麻将"
}, {
lobbyid: 900148,
areaName: "mengqi_daan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友大安麻将"
}, {
lobbyid: 900145,
areaName: "mengqi_miyun",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友密云麻将"
}, {
lobbyid: 900162,
areaName: "mengqi_mudanjiang",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友牡丹江麻将"
}, {
lobbyid: 900182,
areaName: "mengqi_sichuan",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友四川麻将"
}, {
lobbyid: 900142,
areaName: "mengqi_xinmin",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友新民麻将"
}, {
lobbyid: 900144,
areaName: "mengqi_baodingxianfeng",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友保定先锋版麻将"
}, {
lobbyid: 900153,
areaName: "mengqi_kangping",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友康平麻将"
}, {
lobbyid: 900223,
areaName: "qianshou_yiyang",
isShowHoverIcon: 0,
isOpenProxy: 1,
iosName: "牵手益阳棋牌",
androidName: "牵手益阳棋牌",
h5Name: "益阳地区"
}, {
lobbyid: 900224,
areaName: "qianshou_yueyang",
isShowHoverIcon: 0,
isOpenProxy: 1,
iosName: "牵手岳阳棋牌",
androidName: "牵手岳阳棋牌",
h5Name: "岳阳地区"
}, {
lobbyid: 900226,
areaName: "qianshou_loudi",
isShowHoverIcon: 0,
isOpenProxy: 1,
iosName: "牵手湖南棋牌",
androidName: "牵手湖南棋牌",
h5Name: "牵手湖南棋牌"
}, {
lobbyid: 900221,
areaName: "qianshou_hunanmah",
isShowHoverIcon: 0,
isOpenProxy: 1,
iosName: "牵手湖南麻将",
androidName: "牵手湖南麻将",
h5Name: "牵手湖南麻将"
}, {
lobbyid: 900222,
areaName: "qianshou_changde",
isShowHoverIcon: 0,
isOpenProxy: 1,
iosName: "牵手常德棋牌",
androidName: "牵手常德棋牌",
h5Name: "常德地区"
}, {
lobbyid: 900225,
areaName: "qianshou_changsha",
isShowHoverIcon: 0,
isOpenProxy: 1,
iosName: "牵手长沙棋牌",
androidName: "牵手长沙棋牌",
h5Name: "牵手长沙棋牌"
}, {
lobbyid: 900158,
areaName: "qianshou_stage",
isShowHoverIcon: 0,
isOpenProxy: 1,
iosName: "牵手·预发布",
androidName: "牵手·预发布",
h5Name: "岳阳地区"
}, {
lobbyid: 900259,
areaName: "ywzj_yctest",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "陕西运城麻将（测试）"
}, {
lobbyid: 900183,
areaName: "mengqi_hengshui",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋老友河北麻将"
}, {
lobbyid: 900159,
areaName: "ywzj_yctest",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "边锋运城麻将（测试）"
}, {
lobbyid: 900143,
areaName: "mengqi_kangpingtest",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "康平（测试2）"
}, {
lobbyid: 900157,
areaName: "ywzj_qmtest",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "全民内蒙古麻将（测试）"
}, {
lobbyid: 900042,
areaName: "shandong_hz_rz",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "山东休闲"
}, {
lobbyid: 900042,
areaName: "shandong_hz_ly",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "临沂休闲"
}, {
lobbyid: 900050,
areaName: "shandong_ly",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "临沂休闲"
}, {
lobbyid: 900050,
areaName: "shandong_rz",
isShowHoverIcon: 0,
iosName: "老友地方游戏",
androidName: "边锋老友棋牌",
h5Name: "山东休闲"
}, {
lobbyid: 1,
areaName: "tti_gansu_stage",
isShowHoverIcon: 0,
iosName: "甘肃-预发布环境",
androidName: "甘肃-预发布环境",
h5Name: "甘肃-预发布环境"
}, {
lobbyid: 2,
areaName: "tti_guilin_stage",
isShowHoverIcon: 0,
iosName: "桂林-预发布环境",
androidName: "桂林-预发布环境",
h5Name: "桂林-预发布环境"
}, {
lobbyid: 3,
areaName: "tti_hainan_stage",
isShowHoverIcon: 0,
iosName: "海南-预发布环境",
androidName: "海南-预发布环境",
h5Name: "海南-预发布环境"
}, {
lobbyid: 4,
areaName: "tti_sichuan_stage",
isShowHoverIcon: 0,
iosName: "四川-预发布环境",
androidName: "四川-预发布环境",
h5Name: "四川-预发布环境"
}, {
lobbyid: 5,
areaName: "tti_guangxi_stage",
isShowHoverIcon: 0,
iosName: "广西-预发布环境",
androidName: "广西-预发布环境",
h5Name: "广西-预发布环境"
}, {
lobbyid: 6,
areaName: "tti_anhui_stage",
isShowHoverIcon: 0,
iosName: "安徽-预发布环境",
androidName: "安徽-预发布环境",
h5Name: "安徽-预发布环境"
}, {
lobbyid: 7,
areaName: "tti_liuzhou_stage",
isShowHoverIcon: 0,
iosName: "柳州-预发布环境",
androidName: "柳州-预发布环境",
h5Name: "柳州-预发布环境"
}, {
lobbyid: 900184,
areaName: "tti_gansu",
isShowHoverIcon: 0,
iosName: "攒劲甘肃麻将",
androidName: "攒劲甘肃麻将",
h5Name: "攒劲甘肃麻将"
}, {
lobbyid: 900185,
areaName: "tti_guilin",
isShowHoverIcon: 0,
iosName: "桂林字牌",
androidName: "桂林字牌",
h5Name: "桂林字牌"
}, {
lobbyid: 900186,
areaName: "tti_hainan",
isShowHoverIcon: 0,
iosName: "海南麻将",
androidName: "海南麻将",
h5Name: "海南麻将"
}, {
lobbyid: 900187,
areaName: "tti_guangxi",
isShowHoverIcon: 0,
iosName: "友乐广西",
androidName: "友乐广西",
h5Name: "广西麻将"
}, {
lobbyid: 900188,
areaName: "tti_anhui",
isShowHoverIcon: 0,
iosName: "乐乐安徽麻将",
androidName: "乐乐安徽麻将",
h5Name: "乐乐安徽麻将"
}, {
lobbyid: 900189,
areaName: "tti_liuzhou",
isShowHoverIcon: 0,
iosName: "天天爱柳州麻将",
androidName: "天天爱柳州麻将",
h5Name: "天天爱柳州麻将"
}, {
lobbyid: 900190,
areaName: "tti_sichuan",
isShowHoverIcon: 0,
iosName: "乐乐四川麻将",
androidName: "乐乐四川麻将",
h5Name: "四川麻将"
}, {
lobbyid: 900204,
areaName: "tti_taizhou",
isShowHoverIcon: 0,
iosName: "泰州麻将",
androidName: "泰州麻将",
h5Name: "泰州麻将"
}, {
lobbyid: 900205,
areaName: "tti_jiangsu",
isShowHoverIcon: 0,
iosName: "乐趣江苏",
androidName: "乐趣江苏",
h5Name: "乐趣江苏"
}, {
lobbyid: 900206,
areaName: "tti_23",
isShowHoverIcon: 0,
iosName: "泰州23张麻将",
androidName: "泰州23张麻将",
h5Name: "泰州23张麻将"
}, {
lobbyid: 900207,
areaName: "tti_bayi",
isShowHoverIcon: 0,
iosName: "广西八一字牌",
androidName: "广西八一字牌",
h5Name: "广西八一字牌"
}, {
lobbyid: 900208,
areaName: "tti_qinzhou",
isShowHoverIcon: 0,
iosName: "钦州麻将",
androidName: "钦州麻将",
h5Name: "钦州麻将"
}, {
lobbyid: 900209,
areaName: "tti_hechi",
isShowHoverIcon: 0,
iosName: "河池麻将",
androidName: "河池麻将",
h5Name: "河池麻将"
}, {
lobbyid: 900210,
areaName: "tti_beihai",
isShowHoverIcon: 0,
iosName: "北海麻将",
androidName: "北海麻将",
h5Name: "北海麻将"
}, {
lobbyid: 900211,
areaName: "tti_fangchenggang",
isShowHoverIcon: 0,
iosName: "防城港麻将",
androidName: "防城港麻将",
h5Name: "防城港麻将"
}, {
lobbyid: 900212,
areaName: "tti_fuyang",
isShowHoverIcon: 0,
iosName: "乐乐阜阳麻将",
androidName: "乐乐阜阳麻将",
h5Name: "乐乐阜阳麻将"
}, {
lobbyid: 900213,
areaName: "tti_suzhou",
isShowHoverIcon: 0,
iosName: "天天爱宿州麻将",
androidName: "天天爱宿州麻将",
h5Name: "天天爱宿州麻将"
}, {
lobbyid: 900214,
areaName: "tti_bengbu",
isShowHoverIcon: 0,
iosName: "天天爱蚌埠麻将",
androidName: "天天爱蚌埠麻将",
h5Name: "天天爱蚌埠麻将"
}, {
lobbyid: 900215,
areaName: "tti_chuzhou",
isShowHoverIcon: 0,
iosName: "天天爱滁州麻将",
androidName: "天天爱滁州麻将",
h5Name: "天天爱滁州麻将"
}, {
lobbyid: 900216,
areaName: "tti_erqishi",
isShowHoverIcon: 0,
iosName: "边锋二七十",
androidName: "边锋二七十",
h5Name: "边锋二七十"
}, {
lobbyid: 900217,
areaName: "tti_cnzp",
isShowHoverIcon: 0,
iosName: "乐乐川南字牌",
androidName: "乐乐川南字牌",
h5Name: "乐乐川南字牌"
}, {
lobbyid: 900228,
areaName: "tti_cnmj",
isShowHoverIcon: 0,
iosName: "川南麻将",
androidName: "川南麻将",
h5Name: "川南麻将"
}, {
lobbyid: 900218,
areaName: "tti_baise",
isShowHoverIcon: 0,
iosName: "天天爱百色麻将",
androidName: "天天爱百色麻将",
h5Name: "天天爱百色麻将"
}, {
lobbyid: 900133,
areaName: "qianshou_kx",
isShowHoverIcon: 0,
iosName: "开心跑胡子",
androidName: "开心跑胡子",
h5Name: "开心跑胡子"
}, {
lobbyid: 900130,
areaName: "qianshou_phz",
isShowHoverIcon: 0,
iosName: "牵手跑胡子",
androidName: "牵手跑胡子",
h5Name: "牵手跑胡子"
}, {
lobbyid: o.LobbyID.DZ_SHAN3_XI,
areaName: "dz_shan3xi",
isShowHoverIcon: 0,
iosName: "边锋陕西",
androidName: "边锋陕西",
h5Name: "边锋陕西"
} ];
this.h5ChannelConfig = new Map([ [ 900119, [ {
areaName: "ywzj_quanmin",
h5Name: "全民内蒙古游戏",
areaLogo: "ywzj_qmcustomh5",
channelid: 30130
} ] ], [ 900050, [ {
areaName: "shandong_rz",
h5Name: "山东休闲",
channelid: 30131,
areaLogo: "shandong"
}, {
areaName: "shandong_ly",
h5Name: "临沂休闲",
channelid: 30132,
areaLogo: "shandong"
}, {
areaName: "shandong_rz",
h5Name: "休闲部落",
channelid: 30133,
areaLogo: "shandong"
}, {
areaName: "shandong_ly",
h5Name: "临沂休闲部落",
channelid: 30134,
areaLogo: "shandong"
} ] ], [ 900042, [ {
areaName: "shandong_hz_rz",
h5Name: "山东休闲",
channelid: 30131,
areaLogo: "shandong"
}, {
areaName: "shandong_hz_ly",
h5Name: "临沂休闲",
channelid: 30132,
areaLogo: "shandong"
} ] ] ]);
}
Object.defineProperty(e, "staticInstance", {
get: function() {
this._ins || (this._ins = new e());
return this._ins;
},
enumerable: !1,
configurable: !0
});
e.prototype.getAreaNameConfigByLobbyId = function(e) {
var i, t, o = this.areaNameConfig;
if (o) try {
for (var n = a(o), r = n.next(); !r.done; r = n.next()) {
var s = r.value;
if (s.lobbyid === e) return s;
}
} catch (e) {
i = {
error: e
};
} finally {
try {
r && !r.done && (t = n.return) && t.call(n);
} finally {
if (i) throw i.error;
}
}
};
e.prototype.getAreaNameByLobbyId = function(e) {
var i, t, o = this.areaNameConfig;
if (o) try {
for (var n = a(o), r = n.next(); !r.done; r = n.next()) {
var s = r.value;
if (s.lobbyid === e) return s.areaName;
}
} catch (e) {
i = {
error: e
};
} finally {
try {
r && !r.done && (t = n.return) && t.call(n);
} finally {
if (i) throw i.error;
}
}
console.warn("getAreaNameByLobbyId warning lobbyid:" + e);
return "";
};
e.prototype.getLobbyIdByAreaName = function(e) {
var i, t, o = this.areaNameConfig;
if (o) try {
for (var n = a(o), r = n.next(); !r.done; r = n.next()) {
var s = r.value;
if (s.areaName === e.toLowerCase()) return s.lobbyid;
}
} catch (e) {
i = {
error: e
};
} finally {
try {
r && !r.done && (t = n.return) && t.call(n);
} finally {
if (i) throw i.error;
}
}
return 0;
};
e._ins = null;
return e;
}();
t.default = n;
cc._RF.pop();
}, {
"../../../area/app/AppData": "AppData"
} ],
ChooseAreaConfig: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "ceb37Nd9R5Bo5qPjsYsjnAD", "ChooseAreaConfig");
var a, o, n = this && this.__read || function(e, i) {
var t = "function" == typeof Symbol && e[Symbol.iterator];
if (!t) return e;
var a, o, n = t.call(e), r = [];
try {
for (;(void 0 === i || i-- > 0) && !(a = n.next()).done; ) r.push(a.value);
} catch (e) {
o = {
error: e
};
} finally {
try {
a && !a.done && (t = n.return) && t.call(n);
} finally {
if (o) throw o.error;
}
}
return r;
}, r = this && this.__spread || function() {
for (var e = [], i = 0; i < arguments.length; i++) e = e.concat(n(arguments[i]));
return e;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
t.isParentArea = t.getSubAreaId = t.isChildArea = t.getParentAreaData = t.CityConfig = t.LobbyContainArea = t.RecommendLobbyId = t.ProvinceExcuseLobbyId = t.HotArea = t.ProvinceIDConfig = t.PackageListConfig = t.PackageEnum = void 0;
var s, c = e("../../../../area/app/AppData"), d = e("../../../basic/define/AppPackageDefine");
(function(e) {
e[e.QUAN_MIN = 1] = "QUAN_MIN";
e[e.LAO_YOU = 2] = "LAO_YOU";
e[e.WANG_ZHE = 3] = "WANG_ZHE";
e[e.YUN_CHENG = 4] = "YUN_CHENG";
e[e.QIAN_SHOU = 5] = "QIAN_SHOU";
e[e.GAN_SU = 6] = "GAN_SU";
e[e.HAI_NAN = 7] = "HAI_NAN";
e[e.GUI_LIN = 8] = "GUI_LIN";
e[e.GUANG_XI = 9] = "GUANG_XI";
e[e.SI_CHUANG = 10] = "SI_CHUANG";
e[e.LIU_ZHOU = 11] = "LIU_ZHOU";
e[e.AN_HUI = 12] = "AN_HUI";
e[e.JIANG_SU = 13] = "JIANG_SU";
e[e.HU_NAN = 14] = "HU_NAN";
e[e.DUI_ZHAN = 15] = "DUI_ZHAN";
})(s = t.PackageEnum || (t.PackageEnum = {}));
t.PackageListConfig = {
area_quan_min: {
id: s.QUAN_MIN,
isOpen: [ d.AppPackageName.QUAN_MIN, d.AppPackageName.IOS, d.AppPackageName.ALL_GAME_AND ],
name: "全民",
defaultAreaName: "ywzj_quanmin"
},
area_lao_you: {
id: s.LAO_YOU,
isOpen: [ d.AppPackageName.LAO_YOU, d.AppPackageName.IOS, d.AppPackageName.PC ],
name: "老友棋牌",
defaultAreaName: "mengqi_hebei"
},
area_yun_cheng: {
id: s.YUN_CHENG,
isOpen: [ d.AppPackageName.YUN_CHENG, d.AppPackageName.IOS, d.AppPackageName.ALL_GAME_AND ],
name: "运城",
defaultAreaName: "ywzj_yuncheng",
selectLobbyID: 900121
},
area_qian_shou: {
id: s.QIAN_SHOU,
isOpen: [ d.AppPackageName.QS_YUEYANG, d.AppPackageName.IOS ],
name: "牵手",
defaultAreaName: "qianshou_yueyang",
hidePackageList: !0,
selectLobbyID: 900224
},
area_gan_su: {
id: s.GAN_SU,
isOpen: [ d.AppPackageName.TTI_GANSU, d.AppPackageName.IOS ],
name: "甘肃",
defaultAreaName: "tti_gansu"
},
area_hai_nan: {
id: s.HAI_NAN,
isOpen: [ d.AppPackageName.TTI_HAINAN, d.AppPackageName.IOS ],
name: "海南",
defaultAreaName: "tti_hainan"
},
area_gui_lin: {
id: s.GUI_LIN,
isOpen: [ d.AppPackageName.TTI_GUILIN, d.AppPackageName.IOS ],
name: "桂林",
defaultAreaName: "tti_guilin"
},
area_guang_xi: {
id: s.GUANG_XI,
isOpen: [ d.AppPackageName.TTI_GUANGXI, d.AppPackageName.IOS ],
name: "广西",
defaultAreaName: "tti_guangxi"
},
area_si_chuan: {
id: s.SI_CHUANG,
isOpen: [ d.AppPackageName.TTI_SICHUAN, d.AppPackageName.IOS ],
name: "四川",
defaultAreaName: "tti_sichuan"
},
area_liu_zhou: {
id: s.LIU_ZHOU,
isOpen: [ d.AppPackageName.TTI_LIUZHOU, d.AppPackageName.IOS ],
name: "柳州",
defaultAreaName: "tti_liuzhou"
},
area_anhui: {
id: s.AN_HUI,
isOpen: [ d.AppPackageName.TTI_ANHUI, d.AppPackageName.IOS ],
name: "安徽",
defaultAreaName: "tti_anhui",
selectLobbyID: 900188
},
area_jiang_su: {
id: s.JIANG_SU,
isOpen: [ d.AppPackageName.TTI_TAIZHOU, d.AppPackageName.IOS ],
name: "江苏",
defaultAreaName: "tti_jiangsu",
selectLobbyID: 900204
},
area_hu_nan: {
id: s.HU_NAN,
isOpen: [ d.AppPackageName.QS_YUEYANG, d.AppPackageName.IOS ],
name: "湖南",
defaultAreaName: "qianshou_yueyang"
},
area_shan3_xi: {
id: s.DUI_ZHAN,
isOpen: [ d.AppPackageName.IOS ],
name: "陕西",
defaultAreaName: "dz_shan3xi"
}
};
t.ProvinceIDConfig = {
11: "bei_jing",
12: "tian_jing",
13: "he_bei",
14: "shan_xi",
15: "nei_meng_gu",
21: "liao_ning",
22: "ji_lin",
23: "hei_long_jiang",
31: "shang_hai",
32: "jiang_su",
33: "zhe_jiang",
34: "an_hui",
35: "fu_jian",
36: "jiang_xi",
37: "shan_dong",
41: "he_nan",
42: "hu_bei",
43: "hu_nan",
44: "guang_dong",
45: "guang_xi",
46: "hai_nan",
50: "chong_qing",
51: "si_chuan",
52: "gui_zhou",
53: "yun_nan",
54: "xi_zang",
61: "shan3_xi",
62: "gan_su",
63: "qing_hai",
64: "ning_xia",
65: "xin_jiang",
71: "tai_wan",
81: "xiang_gang",
82: "ao_men",
100: "nan_hai"
};
t.HotArea = {
ios: [ 45, 46, 51, 34, 15 ]
};
t.ProvinceExcuseLobbyId = {
13: [ 900116, 900061, 900102 ],
14: [ 900121 ],
15: [ 900119, 900093, 900106, 900103, 900102, 900113, 900114, 900117, 900086 ],
21: [ 90009, 900095, 900101, 900104, 900102, 900111, 900115, 900065, 900064, 900074, 900078, 900070, 900071, 900069, 900088, 900083, 900080, 900082 ],
22: [ 90009, 900099, 900102, 900057, 900076, 900072, 900090 ],
23: [ 90009, 900107, 900100, 900102, 900059, 900060, 900066, 900068, 900062, 900067, 900073, 900092, 900084, 900163 ],
32: [ 900204, 900205, 900206 ],
34: [ 900188, c.LobbyID.TTI_FUYANG, c.LobbyID.TTI_SUZHOU, c.LobbyID.TTI_BENGBU, c.LobbyID.TTI_CHUZHOU ],
37: [ 900097, 900108, 900105, 900102, 900058 ],
43: r([ c.QianShouLobbyID.QS_YYQP ], c.LobbyIDs.QS),
45: [ 900187, 900185, 900189, c.LobbyID.TTI_FANGCHENGGANG, c.LobbyID.TTI_BAYI, c.LobbyID.TTI_QINZHOU, c.LobbyID.TTI_HECHI, c.LobbyID.TTI_BEIHAI, c.LobbyID.TTI_BAISE ],
46: [ 900186 ],
51: [ 900190, c.LobbyID.TTI_ERQISHI, c.LobbyID.TTI_CNZP, c.LobbyID.TTI_CNMJ ],
61: [ 900120, c.LobbyID.DZ_SHAN3_XI ],
62: [ 900184, 900109, 900102 ]
};
t.RecommendLobbyId = {
ios: [ {
provinceId: 45,
lobbyid: 900187
}, {
provinceId: 45,
lobbyid: 900185
}, {
provinceId: 45,
lobbyid: 900189
}, {
provinceId: 46,
lobbyid: 900186
}, {
provinceId: 34,
lobbyid: 900188
}, {
provinceId: 51,
lobbyid: 900190
}, {
provinceId: 15,
lobbyid: 900119
} ],
androidMQ: [ {
provinceId: 15,
lobbyid: 900093
}, {
provinceId: 21,
lobbyid: 900094
}, {
provinceId: 21,
lobbyid: 900095
}, {
provinceId: 15,
lobbyid: 900103
}, {
provinceId: 23,
lobbyid: 900098
}, {
provinceId: 22,
lobbyid: 900096
} ]
};
t.LobbyContainArea = new Map([ [ 900211, {
include: [ "防城港" ]
} ], [ 900206, {
include: [ "姜堰" ]
} ], [ 900204, {
include: [ "泰州" ]
} ], [ 900205, {
include: [ "江苏" ]
} ], [ 900208, {
include: [ "钦州" ]
} ], [ 900208, {
include: [ "北海" ]
} ], [ 900185, {
include: [ "桂林" ]
} ], [ 900189, {
include: [ "柳州", "来宾" ]
} ], [ 900208, {
include: [ "八一", "梧州", "崇左", "贺州", "玉林" ]
} ], [ c.LobbyID.TTI_BAISE, {
include: [ "百色" ]
} ], [ 900187, {
include: [ "南宁", "河池", "贵港", "广西" ]
} ], [ 900186, {
include: [ "海南" ]
} ], [ c.LobbyID.TTI_FUYANG, {
include: [ "阜阳" ]
} ], [ c.LobbyID.TTI_SUZHOU, {
include: [ "宿州" ]
} ], [ c.LobbyID.TTI_BENGBU, {
include: [ "蚌埠" ]
} ], [ c.LobbyID.TTI_CHUZHOU, {
include: [ "滁州" ]
} ], [ c.LobbyID.QS_YUEYANG, {
include: [ "岳阳" ]
} ], [ c.LobbyID.QS_YIYANG, {
include: [ "益阳" ]
} ], [ c.LobbyID.QS_CHANGDE, {
include: [ "常德" ]
} ], [ c.LobbyID.QS_LOUDI, {
include: [ "娄底" ]
} ], [ c.LobbyID.QS_CHANGSHA, {
include: [ "长沙" ]
} ], [ c.LobbyID.QS_HUNAN_MAH, {
include: [ "湖南" ]
} ], [ 900188, {
include: [ "安徽" ]
} ], [ c.LobbyID.TTI_CNMJ, {
include: [ "内江", "隆昌" ]
} ], [ 900190, {
include: [ "四川" ]
} ], [ c.LobbyID.TTI_CNZP, {
include: [ "四川" ]
} ], [ c.LobbyID.TTI_ERQISHI, {
include: [ "四川" ]
} ], [ 900119, {
include: [ "包头", "呼和浩特", "乌海", "锡林郭勒盟", "乌兰察布", "鄂尔多斯", "巴彦淖尔", "阿拉善盟", "内蒙古自治区" ],
exclude: [ "赤峰" ]
} ] ]);
t.CityConfig = {
13: {
proviceName: "河北省",
shi_jiazhuang: {
id: 1301,
isOpen: 1,
name: "石家庄市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
tang_shan: {
id: 1302,
isOpen: 1,
name: "唐山市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
qin_huangdao: {
id: 1303,
isOpen: 0,
name: "秦皇岛市",
Packages: [ s.LAO_YOU ]
},
han_dan: {
id: 1304,
isOpen: 1,
name: "邯郸市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
xing_tai: {
id: 1305,
isOpen: 1,
name: "邢台市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
bao_ding: {
id: 1306,
isOpen: 0,
name: "保定市",
Packages: [ s.LAO_YOU ]
},
zhang_jiakou: {
id: 1307,
isOpen: 1,
name: "张家口市",
Packages: [ s.LAO_YOU ]
},
cheng_de: {
id: 1308,
isOpen: 0,
name: "承德市",
Packages: [ s.LAO_YOU ]
},
cang_zhou: {
id: 1309,
isOpen: 0,
name: "沧州市",
Packages: [ s.LAO_YOU ]
},
lang_fang: {
id: 1310,
isOpen: 0,
name: "廊坊市",
Packages: [ s.LAO_YOU ]
},
heng_shui: {
id: 1311,
isOpen: 0,
name: "衡水市",
Packages: [ s.LAO_YOU ]
},
Common: [ {
name: "老友河北麻将",
id: 1380,
lobbyID: "900116",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友怀安麻将",
cityid: 1307,
id: 130708,
lobbyID: "900061",
isOpen: 0,
ishot: 1,
istown: !0,
Package: s.LAO_YOU
}, {
name: "斗地主\n(二打一)",
id: 1381,
lobbyID: "900102",
isOpen: 1,
Package: s.LAO_YOU
} ]
},
15: {
proviceName: "内蒙古自治区",
hu_shi: {
id: 1501,
isOpen: 1,
iosOpen: 1,
name: "呼和浩特",
Packages: [ s.QUAN_MIN ],
entryArea: !0
},
bao_tou: {
id: 1502,
isOpen: 1,
iosOpen: 1,
name: "包头",
Packages: [ s.QUAN_MIN ],
entryArea: !0
},
wu_hai: {
id: 1503,
isOpen: 1,
iosOpen: 1,
name: "乌海",
Packages: [ s.QUAN_MIN ],
entryArea: !0
},
chi_feng: {
id: 1504,
isOpen: 1,
name: "赤峰市",
Packages: [ s.QUAN_MIN, s.LAO_YOU ]
},
hu_lun_beier: {
id: 1507,
isOpen: 1,
name: "呼伦贝尔市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
xing_an_meng: {
id: 1522,
isOpen: 1,
name: "兴安盟",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
tong_liao: {
id: 1505,
isOpen: 1,
name: "通辽市",
Packages: [ s.LAO_YOU ]
},
xi_lin_guole: {
id: 1525,
isOpen: 1,
iosOpen: 1,
name: "锡林郭勒盟",
Packages: [ s.QUAN_MIN ],
entryArea: !0
},
wu_lan_chabu: {
id: 1509,
isOpen: 1,
iosOpen: 1,
name: "乌兰察布",
Packages: [ s.QUAN_MIN ],
entryArea: !0
},
er_ds: {
id: 1506,
isOpen: 1,
iosOpen: 1,
name: "鄂尔多斯市",
Packages: [ s.QUAN_MIN ],
entryArea: !0
},
ba_ye_naoer: {
id: 1508,
isOpen: 1,
iosOpen: 1,
name: "巴彦淖尔市",
Packages: [ s.QUAN_MIN ],
entryArea: !0
},
a_la_shan: {
id: 1529,
isOpen: 1,
iosOpen: 1,
name: "阿拉善盟",
Packages: [ s.QUAN_MIN ],
entryArea: !0
},
Common: [ {
name: "全民内蒙麻将",
id: 1501,
lobbyID: "900119",
isOpen: 1,
iosOpen: 1,
Package: s.QUAN_MIN
}, {
name: "老友内蒙古\n麻将",
id: 1580,
lobbyID: "900093",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友赤峰麻将",
cityid: 1504,
istown: !0,
id: 150401,
lobbyID: "900106",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友内蒙穷胡\n麻将",
id: 1581,
lobbyID: "900103",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "斗地主\n(二打一)",
id: 1583,
lobbyID: "900102",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友敖汉麻将",
cityid: 1504,
istown: !0,
id: 150410,
lobbyID: "900113",
isOpen: 0,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友扎鲁特\n旗麻将",
cityid: 1505,
istown: !0,
id: 150508,
lobbyID: "900114",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友呼伦贝\n尔麻将",
cityid: 1507,
istown: !0,
id: 150701,
lobbyID: "900117",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友奈曼麻将",
cityid: 1505,
istown: !0,
id: 150507,
lobbyID: "900086",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
} ]
},
21: {
proviceName: "辽宁省",
shen_yang: {
id: 2101,
isOpen: 1,
name: "沈阳市",
Packages: [ s.LAO_YOU ]
},
da_lian: {
id: 2102,
isOpen: 1,
name: "大连市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
an_shan: {
id: 2103,
isOpen: 1,
name: "鞍山市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
fu_shun: {
id: 2104,
isOpen: 1,
name: "抚顺市",
Packages: [ s.LAO_YOU ]
},
ben_xi: {
id: 2105,
isOpen: 1,
name: "本溪市",
Packages: [ s.LAO_YOU ]
},
dan_dong: {
id: 2106,
isOpen: 0,
name: "丹东市",
Packages: [ s.LAO_YOU ]
},
jin_zhou: {
id: 2107,
isOpen: 1,
name: "锦州市",
Packages: [ s.LAO_YOU ]
},
ying_kou: {
id: 2108,
isOpen: 0,
name: "营口市",
Packages: [ s.LAO_YOU ]
},
fu_xin: {
id: 2109,
isOpen: 1,
name: "阜新市",
Packages: [ s.LAO_YOU ]
},
liao_yang: {
id: 2110,
isOpen: 1,
name: "辽阳市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
pan_jin: {
id: 2111,
isOpen: 1,
name: "盘锦市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
tie_ling: {
id: 2112,
isOpen: 1,
name: "铁岭市",
Packages: [ s.LAO_YOU ]
},
chao_yang: {
id: 2113,
isOpen: 1,
name: "朝阳市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
hu_ludao: {
id: 2114,
isOpen: 1,
name: "葫芦岛市",
Packages: [ s.LAO_YOU ]
},
Common: [ {
name: "老友阜新麻将",
cityid: 2109,
istown: !0,
id: 210901,
lobbyID: "900094",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友沈阳麻将",
cityid: 2101,
istown: !0,
id: 210101,
lobbyID: "900095",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友桓仁麻将",
cityid: 2105,
istown: !0,
id: 210503,
lobbyID: "900101",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友义县麻将",
cityid: 2107,
istown: !0,
id: 210703,
lobbyID: "900104",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "斗地主\n(二打一)",
id: 2180,
lobbyID: "900102",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友朝阳麻将",
cityid: 2113,
istown: !0,
id: 211301,
lobbyID: "900111",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友锦州麻将",
cityid: 2107,
istown: !0,
id: 210701,
lobbyID: "900115",
isOpen: 0,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友盘锦麻将",
cityid: 2111,
istown: !0,
id: 211101,
lobbyID: "900065",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友葫芦岛\n麻将",
cityid: 2114,
istown: !0,
id: 211401,
lobbyID: "900064",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友建昌麻将",
cityid: 2114,
istown: !0,
id: 211403,
lobbyID: "900074",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友大连穷胡麻将",
cityid: 2102,
istown: !0,
id: 210201,
lobbyID: "900078",
isOpen: 0,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友彰武麻将",
cityid: 2109,
istown: !0,
id: 210903,
lobbyID: "900070",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友本溪麻将",
cityid: 2105,
istown: !0,
id: 210501,
lobbyID: "900071",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友黑山麻将",
cityid: 2107,
istown: !0,
id: 210702,
lobbyID: "900069",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友弓长岭\n麻将",
cityid: 2110,
istown: !0,
id: 211004,
lobbyID: "900088",
isOpen: 0,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友铁岭麻将",
cityid: 2112,
istown: !0,
id: 211201,
lobbyID: "900083",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友昌图麻将",
cityid: 2112,
istown: !0,
id: 211204,
lobbyID: "900080",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友抚顺麻将",
cityid: 2104,
istown: !0,
id: 210401,
lobbyID: "900082",
isOpen: 0,
ishot: 1,
Package: s.LAO_YOU
} ]
},
22: {
proviceName: "吉林省",
chang_chun: {
id: 2201,
isOpen: 0,
name: "长春市",
Packages: [ s.LAO_YOU ]
},
ji_lin: {
id: 2202,
isOpen: 1,
name: "吉林市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
si_ping: {
id: 2203,
isOpen: 0,
name: "四平市",
Packages: [ s.LAO_YOU ]
},
liao_yuan: {
id: 2204,
isOpen: 0,
name: "辽源市",
Packages: [ s.LAO_YOU ]
},
tong_hua: {
id: 2205,
isOpen: 1,
name: "通化市",
Packages: [ s.LAO_YOU ]
},
bai_shan: {
id: 2206,
isOpen: 1,
name: "白山市",
Packages: [ s.LAO_YOU ]
},
song_yuan: {
id: 2207,
isOpen: 0,
name: "松原市",
Packages: [ s.LAO_YOU ]
},
bai_cheng: {
id: 2208,
isOpen: 1,
name: "白城市",
Packages: [ s.LAO_YOU ]
},
yan_bian: {
id: 2224,
isOpen: 0,
name: "延边市",
Packages: [ s.LAO_YOU ]
},
Common: [ {
name: "老友白城麻将",
cityid: 2208,
istown: !0,
id: 220802,
lobbyID: "900096",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友朝阳镇\n麻将",
cityid: 2205,
istown: !0,
id: 220503,
lobbyID: "900099",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "斗地主\n(二打一)",
id: 2280,
lobbyID: "900102",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友镇赉麻将",
cityid: 2208,
istown: !0,
id: 220803,
lobbyID: "900057",
isOpen: 0,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友磐石麻将",
cityid: 2202,
istown: !0,
id: 220206,
lobbyID: "900076",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友集安麻将",
cityid: 2205,
istown: !0,
id: 220506,
lobbyID: "900072",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友白山麻将",
cityid: 2206,
istown: !0,
id: 220601,
lobbyID: "900090",
isOpen: 0,
ishot: 1,
Package: s.LAO_YOU
} ]
},
23: {
proviceName: "黑龙江省",
ha_erbin: {
id: 2301,
isOpen: 1,
name: "哈尔滨市",
Packages: [ s.LAO_YOU ]
},
qi_qihaer: {
id: 2302,
isOpen: 1,
name: "齐齐哈尔市",
Packages: [ s.LAO_YOU ]
},
he_gang: {
id: 2304,
isOpen: 0,
name: "鹤岗市",
Packages: [ s.LAO_YOU ]
},
shuang_yashan: {
id: 2305,
isOpen: 1,
name: "双鸭山市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
ji_xishan: {
id: 2303,
isOpen: 1,
name: "鸡西市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
da_qing: {
id: 2306,
isOpen: 0,
name: "大庆市",
Packages: [ s.LAO_YOU ]
},
yi_chun: {
id: 2307,
isOpen: 0,
name: "伊春市",
Packages: [ s.LAO_YOU ]
},
mu_danjiang: {
id: 2310,
isOpen: 1,
name: "牡丹江市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
jia_musi: {
id: 2308,
isOpen: 0,
name: "佳木斯市",
Packages: [ s.LAO_YOU ]
},
qi_taihe: {
id: 2309,
isOpen: 0,
name: "七台河市",
Packages: [ s.LAO_YOU ]
},
hei_he: {
id: 2311,
isOpen: 0,
name: "黑河市",
Packages: [ s.LAO_YOU ]
},
sui_hua: {
id: 2312,
isOpen: 1,
name: "绥化市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
da_xinganling: {
id: 2327,
isOpen: 0,
name: "大兴安岭",
Packages: [ s.LAO_YOU ]
},
Common: [ {
name: "老友宁安麻将",
cityid: 2310,
istown: !0,
id: 231005,
lobbyID: "900098",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友延寿麻将",
cityid: 2301,
istown: !0,
id: 230110,
lobbyID: "900107",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友五常麻将",
cityid: 2301,
istown: !0,
id: 230112,
lobbyID: "900100",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "斗地主\n(二打一)",
id: 2380,
lobbyID: "900102",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友尚志麻将",
cityid: 2301,
istown: !0,
id: 230111,
lobbyID: "900059",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友阿城麻将",
cityid: 2301,
istown: !0,
id: 230102,
lobbyID: "900060",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友哈尔滨\n麻将",
cityid: 2301,
istown: !0,
id: 230101,
lobbyID: "900066",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友双城麻将",
cityid: 2301,
istown: !0,
id: 230103,
lobbyID: "900068",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友泰来麻将",
cityid: 2302,
istown: !0,
id: 230204,
lobbyID: "900062",
isOpen: 0,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友齐齐哈尔\n麻将",
cityid: 2302,
istown: !0,
id: 230201,
lobbyID: "900067",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友宾县麻将",
cityid: 2301,
istown: !0,
id: 230106,
lobbyID: "900073",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友海伦麻将",
cityid: 2312,
istown: !0,
id: 231210,
lobbyID: "900092",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友宝清麻将",
cityid: 2305,
istown: !0,
id: 230504,
lobbyID: "900084",
isOpen: 0,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友密山麻将",
cityid: 2303,
istown: !0,
id: 230304,
lobbyID: "900163",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
} ]
},
32: {
proviceName: "江苏省",
tai_zhou: {
id: 630001,
isOpen: 1,
name: "泰州麻将",
Packages: [ s.JIANG_SU ]
},
jiang_su: {
id: 630002,
isOpen: 1,
name: "乐趣江苏",
Packages: [ s.JIANG_SU ]
},
taizhou_23: {
id: 630003,
isOpen: 1,
name: "泰州23张麻将",
Packages: [ s.JIANG_SU ]
},
Common: [ {
name: "泰州麻将",
cityid: 6300,
id: 630001,
lobbyID: "900204",
isOpen: 1,
Package: s.JIANG_SU
}, {
name: "乐趣江苏",
cityid: 6301,
id: 630002,
lobbyID: "900205",
isOpen: 1,
Package: s.JIANG_SU
}, {
name: "泰州23张麻将",
cityid: 6302,
id: 630003,
lobbyID: "900206",
isOpen: 1,
Package: s.JIANG_SU
} ]
},
34: {
proviceName: "安徽省",
an_hui: {
id: 640001,
isOpen: 1,
name: "乐乐安徽麻将",
Packages: [ s.AN_HUI ]
},
fu_yang: {
id: 640002,
isOpen: 1,
name: "乐乐阜阳麻将",
Packages: [ s.AN_HUI ]
},
su_zhou: {
id: 640004,
isOpen: 1,
name: "天天爱宿州麻将",
Packages: [ s.AN_HUI ]
},
beng_bu: {
id: 640003,
isOpen: 1,
name: "天天爱蚌埠麻将",
Packages: [ s.AN_HUI ]
},
chu_zhou: {
id: 640005,
isOpen: 1,
name: "天天爱滁州麻将",
Packages: [ s.AN_HUI ]
},
Common: [ {
name: "乐乐安徽麻将",
cityid: 6400,
id: 640001,
lobbyID: "900188",
isOpen: 1,
Package: s.AN_HUI
}, {
name: "乐乐阜阳麻将",
cityid: 6401,
id: 640002,
lobbyID: "900212",
isOpen: 1,
Package: s.AN_HUI
}, {
name: "天天爱宿州麻将",
cityid: 6403,
id: 640004,
lobbyID: "900213",
isOpen: 1,
Package: s.AN_HUI
}, {
name: "天天爱蚌埠麻将",
cityid: 6402,
id: 640003,
lobbyID: "900214",
isOpen: 1,
Package: s.AN_HUI
}, {
name: "天天爱滁州麻将",
cityid: 6404,
id: 640005,
lobbyID: "900215",
isOpen: 1,
Package: s.AN_HUI
} ]
},
37: {
proviceName: "山东省",
ji_nan: {
id: 3701,
isOpen: 1,
name: "济南市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
qing_dao: {
id: 3702,
isOpen: 0,
name: "青岛市",
Packages: [ s.LAO_YOU ]
},
zi_bo: {
id: 3703,
isOpen: 0,
name: "淄博市",
Packages: [ s.LAO_YOU ]
},
zao_zhuang: {
id: 3704,
isOpen: 0,
name: "枣庄市",
Packages: [ s.LAO_YOU ]
},
dong_ying: {
id: 3705,
isOpen: 0,
name: "东营市",
Packages: [ s.LAO_YOU ]
},
yan_tai: {
id: 3706,
isOpen: 0,
name: "烟台市",
Packages: [ s.LAO_YOU ]
},
wei_fang: {
id: 3707,
isOpen: 0,
name: "潍坊市",
Packages: [ s.LAO_YOU ]
},
ji_ning: {
id: 3708,
isOpen: 0,
name: "济宁市",
Packages: [ s.LAO_YOU ]
},
tai_an: {
id: 3709,
isOpen: 0,
name: "泰安市",
Packages: [ s.LAO_YOU ]
},
wei_hai: {
id: 3710,
isOpen: 1,
name: "威海市",
Packages: [ s.LAO_YOU ]
},
ri_zhao: {
id: 3711,
isOpen: 0,
name: "日照市",
Packages: [ s.LAO_YOU ]
},
lai_wu: {
id: 3712,
isOpen: 0,
name: "莱芜市",
Packages: [ s.LAO_YOU ]
},
lin_yi: {
id: 3713,
isOpen: 0,
name: "临沂市",
Packages: [ s.LAO_YOU ]
},
de_zhou: {
id: 3714,
isOpen: 1,
name: "德州市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
liao_cheng: {
id: 3715,
isOpen: 0,
name: "聊城市",
Packages: [ s.LAO_YOU ]
},
bin_zhou: {
id: 3716,
isOpen: 0,
name: "滨州市",
Packages: [ s.LAO_YOU ]
},
he_ze: {
id: 3717,
isOpen: 0,
name: "菏泽市",
Packages: [ s.LAO_YOU ]
},
Common: [ {
name: "老友荣成麻将",
cityid: 3710,
istown: !0,
id: 371004,
lobbyID: "900097",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友威海麻将",
cityid: 3710,
istown: !0,
id: 371001,
lobbyID: "900108",
isOpen: 0,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "老友乳山麻将",
cityid: 3710,
istown: !0,
id: 371005,
lobbyID: "900105",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "斗地主\n(二打一)",
id: 3780,
lobbyID: "900102",
isOpen: 1,
Package: s.LAO_YOU
}, {
name: "老友文登麻将",
cityid: 3710,
istown: !0,
id: 371003,
lobbyID: "900058",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
} ]
},
43: {
proviceName: "湖南省",
yue_yang: {
id: 650106,
isOpen: 1,
name: "岳阳",
Packages: [ s.HU_NAN ],
entryArea: !0
},
hn_mah: {
id: 650101,
isOpen: 1,
name: "湖南麻将",
Packages: [ s.HU_NAN ],
entryArea: !0
},
yi_yang: {
id: 650105,
isOpen: 1,
name: "益阳",
Packages: [ s.HU_NAN ],
entryArea: !0
},
chang_de: {
id: 650104,
isOpen: 1,
name: "常德",
Packages: [ s.HU_NAN ],
entryArea: !0
},
hn_qipai: {
id: 650102,
isOpen: 1,
name: "湖南棋牌",
Packages: [ s.HU_NAN ],
entryArea: !0
},
chang_sha: {
id: 650103,
isOpen: 1,
name: "长沙",
Packages: [ s.HU_NAN ],
entryArea: !0
},
Common: [ {
name: "牵手岳阳棋牌",
id: 650106,
lobbyID: c.LobbyID.QS_YUEYANG,
isOpen: 1,
Package: s.HU_NAN
}, {
name: "牵手\n湖南【麻将】",
id: 650101,
lobbyID: c.LobbyID.QS_HUNAN_MAH,
isOpen: 1,
Package: s.HU_NAN
}, {
name: "牵手益阳棋牌",
id: 650105,
lobbyID: c.LobbyID.QS_YIYANG,
isOpen: 1,
Package: s.HU_NAN
}, {
name: "牵手常德棋牌",
id: 650104,
lobbyID: c.LobbyID.QS_CHANGDE,
isOpen: 1,
Package: s.HU_NAN
}, {
name: "牵手\n湖南【棋牌】",
id: 650102,
lobbyID: c.LobbyID.QS_LOUDI,
isOpen: 1,
Package: s.HU_NAN
}, {
name: "牵手长沙棋牌",
id: 650103,
lobbyID: c.LobbyID.QS_CHANGSHA,
isOpen: 1,
Package: s.HU_NAN
} ]
},
45: {
proviceName: "广西壮族自治区",
nan_ning: {
id: 620406,
isOpen: 1,
name: "南宁",
Packages: [ s.GUANG_XI ],
entryArea: !0
},
gui_lin: {
id: 620407,
isOpen: 1,
name: "桂林",
Packages: [ s.GUI_LIN ],
entryArea: !0
},
bai_se: {
id: 620415,
isOpen: 1,
name: "百色",
Packages: [ s.GUANG_XI ]
},
he_chi: {
id: 620414,
isOpen: 1,
name: "河池",
Packages: [ s.GUANG_XI ]
},
chong_zuo: {
id: 0,
isOpen: 0,
name: "崇左",
Packages: [ s.GUANG_XI ]
},
qin_zhou: {
id: 620411,
isOpen: 1,
name: "钦州",
Packages: [ s.GUANG_XI ]
},
ba_yi: {
id: 620412,
isOpen: 1,
name: "八一",
Packages: [ s.GUANG_XI ]
},
bei_hai: {
id: 620413,
isOpen: 1,
name: "北海",
Packages: [ s.GUANG_XI ]
},
fang_chenggang: {
id: 620410,
isOpen: 1,
name: "防城港",
Packages: [ s.GUANG_XI ]
},
yu_lin: {
id: 0,
isOpen: 0,
name: "玉林",
Packages: [ s.GUANG_XI ]
},
gui_gang: {
id: 0,
isOpen: 0,
name: "贵港",
Packages: [ s.GUANG_XI ]
},
lai_bin: {
id: 0,
isOpen: 0,
name: "来宾",
Packages: [ s.GUANG_XI ]
},
liu_zhou: {
id: 4502,
isOpen: 1,
name: "柳州",
Packages: [ s.LIU_ZHOU ],
entryArea: !0
},
he_zhou: {
id: 0,
isOpen: 0,
name: "贺州",
Packages: [ s.GUANG_XI ]
},
wu_zhou: {
id: 0,
isOpen: 0,
name: "梧州",
Packages: [ s.GUANG_XI ]
},
Common: [ {
name: "友乐广西麻将",
id: 620406,
lobbyID: "900187",
isOpen: 1,
Package: s.GUANG_XI
}, {
name: "桂林字牌",
id: 620407,
lobbyID: "900185",
isOpen: 1,
Package: s.GUI_LIN
}, {
name: "天天爱柳州麻将",
id: 4502,
lobbyID: "900189",
isOpen: 1,
Package: s.LIU_ZHOU
}, {
name: "天天爱防城港麻将",
id: 620410,
lobbyID: "900211",
isOpen: 1,
Package: s.GUANG_XI
}, {
name: "广西八一字牌",
id: 620412,
lobbyID: "900207",
isOpen: 1,
Package: s.GUANG_XI
}, {
name: "天天爱钦州麻将",
id: 620411,
lobbyID: "900208",
isOpen: 1,
Package: s.GUANG_XI
}, {
name: "天天爱河池麻将",
id: 620414,
lobbyID: "900208",
isOpen: 1,
Package: s.GUANG_XI
}, {
name: "天天爱北海麻将",
id: 620413,
lobbyID: "900209",
isOpen: 1,
Package: s.GUANG_XI
}, {
name: "天天爱百色麻将",
id: 620415,
lobbyID: c.LobbyID.TTI_BAISE,
isOpen: 1,
Package: s.GUANG_XI
} ]
},
51: {
proviceName: "四川省",
si_chuan: {
id: 510101,
isOpen: 1,
name: "四川",
Packages: [ s.SI_CHUANG ],
entryArea: !0
},
er_qi_shi: {
id: 510102,
isOpen: 1,
name: "二七十",
Packages: [ s.SI_CHUANG ],
entryArea: !0
},
cn_zp: {
id: 510103,
isOpen: 1,
name: "川南【字牌】",
Packages: [ s.SI_CHUANG ],
entryArea: !0
},
cn_mj: {
id: 510104,
isOpen: 1,
name: "川南【麻将】",
Packages: [ s.SI_CHUANG ],
entryArea: !0
},
Common: [ {
name: "乐乐四川麻将",
id: 510101,
lobbyID: c.LobbyID.TTI_SICHUAN,
isOpen: 1,
Package: s.SI_CHUANG
}, {
name: "边锋二七十",
id: 510102,
lobbyID: c.LobbyID.TTI_ERQISHI,
isOpen: 1,
Package: s.SI_CHUANG
}, {
name: "乐乐川南字牌",
id: 510103,
lobbyID: c.LobbyID.TTI_CNZP,
isOpen: 1,
Package: s.SI_CHUANG
}, {
name: "川南麻将",
id: 510104,
lobbyID: c.LobbyID.TTI_CNMJ,
isOpen: 1,
Package: s.SI_CHUANG
} ]
},
61: {
proviceName: "陕西省",
wang_zhe: {
id: 6103,
isOpen: 1,
name: "【王者】\n陕西",
Packages: [ s.DUI_ZHAN ]
},
bian_feng: {
id: 6104,
isOpen: 1,
name: "【边锋】\n陕西",
Packages: [ s.DUI_ZHAN ]
},
Common: [ {
name: "【王者】陕西",
id: 6103,
lobbyID: c.LobbyID.YWZJ_WZSXMJ,
isOpen: 1,
Package: s.DUI_ZHAN
}, {
name: "【边锋】陕西",
id: 6104,
lobbyID: c.LobbyID.DZ_SHAN3_XI,
isOpen: 1,
Package: s.DUI_ZHAN
} ]
},
62: {
proviceName: "甘肃省",
lan_zhou: {
id: 6201,
isOpen: 0,
name: "兰州市",
Packages: [ s.LAO_YOU ]
},
jia_yuguan: {
id: 6202,
isOpen: 0,
name: "嘉峪关市",
Packages: [ s.LAO_YOU ]
},
jin_chang: {
id: 6203,
isOpen: 0,
name: "金昌市",
Packages: [ s.LAO_YOU ]
},
bai_yin: {
id: 6204,
isOpen: 1,
name: "白银市",
Packages: [ s.LAO_YOU ],
entryArea: !0
},
tian_shui: {
id: 6205,
isOpen: 0,
name: "天水市",
Packages: [ s.LAO_YOU ]
},
wu_wei: {
id: 6206,
isOpen: 0,
name: "武威市",
Packages: [ s.LAO_YOU ]
},
jiu_quan: {
id: 6209,
isOpen: 0,
name: "酒泉市",
Packages: [ s.LAO_YOU ]
},
zhang_ye: {
id: 6207,
isOpen: 0,
name: "张掖市",
Packages: [ s.LAO_YOU ]
},
qing_yang: {
id: 6210,
isOpen: 0,
name: "庆阳市",
Packages: [ s.LAO_YOU ]
},
ping_liang: {
id: 6208,
isOpen: 0,
name: "平凉市",
Packages: [ s.LAO_YOU ]
},
ding_xi: {
id: 6211,
isOpen: 0,
name: "定西市",
Packages: [ s.LAO_YOU ]
},
long_nan: {
id: 6212,
isOpen: 0,
name: "陇南市",
Packages: [ s.LAO_YOU ]
},
lin_xia: {
id: 6229,
isOpen: 0,
name: "临夏州",
Packages: [ s.LAO_YOU ]
},
gan_nan: {
id: 6230,
isOpen: 0,
name: "甘南州",
Packages: [ s.LAO_YOU ]
},
Common: [ {
name: "攒劲甘肃麻将",
id: 620405,
lobbyID: "900184",
isOpen: 1,
Package: s.GAN_SU
}, {
name: "老友白银麻将",
cityid: 6204,
istown: !0,
id: 620401,
lobbyID: "900109",
isOpen: 1,
ishot: 1,
Package: s.LAO_YOU
}, {
name: "斗地主\n(二打一)",
id: 6280,
lobbyID: "900102",
isOpen: 1,
Package: s.LAO_YOU
} ]
}
};
var l = [ c.LobbyID.TTI_TAIZHOU, c.LobbyID.TTI_FANGCHENGGANG, c.LobbyID.TTI_FUYANG, c.LobbyID.TTI_SICHUAN, c.LobbyID.QS_HUNAN_MAH ], u = ((a = {})[c.LobbyID.TTI_JIANGSU] = 5207, 
a[c.LobbyID.TTI_BAYI] = 5209, a[c.LobbyID.TTI_QINZHOU] = 5210, a[c.LobbyID.TTI_HECHI] = 5211, 
a[c.LobbyID.TTI_BEIHAI] = 5212, a[c.LobbyID.TTI_23] = 5208, a[c.LobbyID.TTI_SUZHOU] = 5215, 
a[c.LobbyID.TTI_BENGBU] = 5216, a[c.LobbyID.TTI_CHUZHOU] = 5217, a[c.LobbyID.TTI_ERQISHI] = 5218, 
a[c.LobbyID.TTI_CNZP] = 5219, a[c.LobbyID.TTI_CNMJ] = 5232, a[c.LobbyID.TTI_BAISE] = 5220, 
a[c.LobbyID.QS_CHANGDE] = 5225, a[c.LobbyID.QS_CHANGSHA] = 5229, a[c.LobbyID.QS_LOUDI] = 5230, 
a[c.LobbyID.QS_YIYANG] = 5227, a[c.LobbyID.QS_YUEYANG] = 5228, a), _ = ((o = {})[c.LobbyID.TTI_JIANGSU] = {
name: "tti_taizhou",
lobbyid: c.LobbyID.TTI_TAIZHOU,
areaid: 5206
}, o[c.LobbyID.TTI_23] = {
name: "tti_taizhou",
lobbyid: c.LobbyID.TTI_TAIZHOU,
areaid: 5206
}, o[c.LobbyID.TTI_BAYI] = {
name: "tti_fangchenggang",
lobbyid: c.LobbyID.TTI_FANGCHENGGANG,
areaid: 5213
}, o[c.LobbyID.TTI_QINZHOU] = {
name: "tti_fangchenggang",
lobbyid: c.LobbyID.TTI_FANGCHENGGANG,
areaid: 5213
}, o[c.LobbyID.TTI_HECHI] = {
name: "tti_fangchenggang",
lobbyid: c.LobbyID.TTI_FANGCHENGGANG,
areaid: 5213
}, o[c.LobbyID.TTI_BEIHAI] = {
name: "tti_fangchenggang",
lobbyid: c.LobbyID.TTI_FANGCHENGGANG,
areaid: 5213
}, o[c.LobbyID.TTI_BAISE] = {
name: "tti_fangchenggang",
lobbyid: c.LobbyID.TTI_FANGCHENGGANG,
areaid: 5213
}, o[c.LobbyID.TTI_SUZHOU] = {
name: "tti_fuyang",
lobbyid: c.LobbyID.TTI_FUYANG,
areaid: 5214
}, o[c.LobbyID.TTI_BENGBU] = {
name: "tti_fuyang",
lobbyid: c.LobbyID.TTI_FUYANG,
areaid: 5214
}, o[c.LobbyID.TTI_CHUZHOU] = {
name: "tti_fuyang",
lobbyid: c.LobbyID.TTI_FUYANG,
areaid: 5214
}, o[c.LobbyID.TTI_ERQISHI] = {
name: "tti_sichuan",
lobbyid: c.LobbyID.TTI_SICHUAN,
areaid: 5159
}, o[c.LobbyID.TTI_CNZP] = {
name: "tti_sichuan",
lobbyid: c.LobbyID.TTI_SICHUAN,
areaid: 5159
}, o[c.LobbyID.TTI_CNMJ] = {
name: "tti_sichuan",
lobbyid: c.LobbyID.TTI_SICHUAN,
areaid: 5159
}, o[c.LobbyID.QS_CHANGDE] = {
name: "qianshou_hunanmah",
lobbyid: c.LobbyID.QS_HUNAN_MAH,
areaid: 5224
}, o[c.LobbyID.QS_CHANGSHA] = {
name: "qianshou_hunanmah",
lobbyid: c.LobbyID.QS_HUNAN_MAH,
areaid: 5224
}, o[c.LobbyID.QS_LOUDI] = {
name: "qianshou_hunanmah",
lobbyid: c.LobbyID.QS_HUNAN_MAH,
areaid: 5224
}, o[c.LobbyID.QS_YIYANG] = {
name: "qianshou_hunanmah",
lobbyid: c.LobbyID.QS_HUNAN_MAH,
areaid: 5224
}, o[c.LobbyID.QS_YUEYANG] = {
name: "qianshou_hunanmah",
lobbyid: c.LobbyID.QS_HUNAN_MAH,
areaid: 5224
}, o);
t.getParentAreaData = function(e) {
var i, t = null != e ? e : g.subLobbyId;
return null !== (i = _[+t]) && void 0 !== i ? i : {
name: g.areaName,
lobbyid: t,
areaid: g.areaConfig.AreaID
};
};
t.isChildArea = function(e) {
var i = null != e ? e : g.subLobbyId;
return null != u[+i];
};
t.getSubAreaId = function(e) {
var i;
return null !== (i = u[null != e ? e : g.subLobbyId]) && void 0 !== i ? i : g.areaConfig.AreaID;
};
t.isParentArea = function() {
return l.includes(+g.subLobbyId);
};
cc._RF.pop();
}, {
"../../../../area/app/AppData": "AppData",
"../../../basic/define/AppPackageDefine": "AppPackageDefine"
} ],
Constants: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "67f16Ca9RZAfaYITPQSppd1", "Constants");
Object.defineProperty(t, "__esModule", {
value: !0
});
t.Constants = void 0;
t.Constants = {
hotupdateDefaultKey: "test_intranet_channel",
hotupdateIsChangeChannel: "test_intranet_changechannel",
LocalImgPath: "localimgs/",
HotFixPath: "hotfix/",
ModulePath: "module/",
HotfixSubPath: "harbor/",
ModuleWritePath: "__MODULE_DOC__/",
SysModulePath: "src/universe/sysmodules/",
InnerModulePath: "src/modules/",
HotFixType: {
NOUPDATE: 0,
FORCE: 1,
NORMAL: 2,
SILENT: 3
},
FileDiffType: {
ADD: 0,
MODIFY: 1,
DELETE: 2
},
HotFixStage: {
DOWNLOAD: 1,
DECOMPRESS: 2
},
HotFixError: {
SUCCESS: {
code: 0,
msg: "success"
},
CREATE_HOTFIX_DIRECTORY_FAILED: {
code: 1,
msg: "CREATE_HOTFIX_DIRECTORY_FAILED"
},
COPY_ZIP_FAILED: {
code: 2,
msg: "COPY_ZIP_FAILED"
},
UNZIP_FAILED: {
code: 3,
msg: "UNZIP_FAILED"
},
LOAD_LOCAL_MANIFEST_ERROR: {
code: 4,
msg: "LOAD_LOCAL_MANIFEST_ERROR"
},
NEED_RESTART: {
code: 5,
msg: "NEED_RESTART"
},
NOT_FIND_VERSION_URL: {
code: 6,
msg: "NOT_FIND_VERSION_URL"
},
DOWNLOAD_VERSION_FILE_FAILED: {
code: 7,
msg: "DOWNLOAD_VERSION_FILE_FAILED"
},
CREATE_PROCESS_DIRECTORY_FAILED: {
code: 8,
msg: "CREATE_PROCESS_DIRECTORY_FAILED"
},
LOAD_VERSION_FILE_FAILED: {
code: 9,
msg: "LOAD_VERSION_FILE_FAILED"
},
NOT_FIND_PROJECT_MANIFEST_URL: {
code: 10,
msg: "NOT_FIND_PROJECT_MANIFEST_URL"
},
DOWNLOAD_PROJJECT_MANIFEST_FAILED: {
code: 11,
msg: "DOWNLOAD_PROJJECT_MANIFEST_FAILED"
},
LOAD_PROJECT_MANIFEST_FAILED: {
code: 12,
msg: "LOAD_PROJECT_MANIFEST_FAILED"
},
DOWNLOAD_FAILED: {
code: 13,
msg: "DOWNLOAD_FAILED"
},
DECOMPRESS_ERROR: {
code: 14,
msg: "DECOMPRESS_ERROR"
},
MOVE_FILE_ERROR: {
code: 15,
msg: "MOVE_FILE_ERROR"
},
MERGE_ZIP_FILE_FAILED: {
code: 16,
msg: "MERGE_ZIP_FILE_FAILED"
}
},
ModuleType: {
SYSTEM: 1,
INNER: 2,
EXTERNAL: 3
},
StreamSeekDir: {
Beg: 0,
Cur: 1,
End: 2
}
};
cc._RF.pop();
}, {} ],
Define: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "e3adfoMK6ZF4o2JCzbBXsJU", "Define");
var a = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
t.BistroBundle = t.FriendListBundle = t.GoldNewGameBundle = t.GoldNewLobbyBundle = t.IWZCardTestGameData = t.IYWZJTestSendMsg = t.KEY_IS_REQ_OPENID = t.SShowTeaHouseCardLimitUI = t.SChangeScene = t.NUIJoinPasswdRoomState = t.SJoinPasswdRoom = t.SLifeStatus = t.IController = t.FguiGameCommon = t.GameCommonPackage = t.GameCommonBundle = t.LobbyFguiBundle = t.TestLobbyBundle = t.TestBundle = t.LobbyBundle = t.GameAreaType = t.GameType = t.Life = void 0;
(function(e) {
e[e.All = 0] = "All";
e[e.NotGame = 1] = "NotGame";
e[e.Startup = 2] = "Startup";
e[e.Login = 3] = "Login";
e[e.Lobby = 4] = "Lobby";
e[e.TeaHouse = 5] = "TeaHouse";
e[e.Leisure = 6] = "Leisure";
e[e.Game = 7] = "Game";
e[e.LobbyGame = 8] = "LobbyGame";
e[e.TeaHouseGame = 9] = "TeaHouseGame";
e[e.LeisureGame = 10] = "LeisureGame";
e[e.GoldGame = 11] = "GoldGame";
e[e.GoldGameAll = 12] = "GoldGameAll";
})(t.Life || (t.Life = {}));
(function(e) {
e[e.MahJong = 0] = "MahJong";
e[e.Card = 1] = "Card";
e[e.ZiPai = 2] = "ZiPai";
})(t.GameType || (t.GameType = {}));
(function(e) {
e[e.YWZJ = 0] = "YWZJ";
e[e.MENGQI = 1] = "MENGQI";
e[e.QIANSHOU = 2] = "QIANSHOU";
e[e.DUIZHAN = 3] = "DUIZHAN";
e[e.TTI = 4] = "TTI";
e[e.QS = 5] = "QS";
e[e.DZ = 6] = "DZ";
})(t.GameAreaType || (t.GameAreaType = {}));
var o = function() {
function e() {}
a([ qg.Frame.ViewName("CreateRoomView") ], e, "CreateRoomView", void 0);
a([ qg.Frame.ViewName("CreateRoomRightView") ], e, "CreateRoomRightView", void 0);
a([ qg.Frame.ViewName("CreateRoomManagerView") ], e, "CreateRoomManagerView", void 0);
a([ qg.Frame.ViewName("CreateRoomRadioItemView") ], e, "CreateRoomRadioItemView", void 0);
a([ qg.Frame.ViewName("CreateRoomTextItemView") ], e, "CreateRoomTextItemView", void 0);
a([ qg.Frame.ViewName("CreateRoomCheckBoxItemView") ], e, "CreateRoomCheckBoxItemView", void 0);
a([ qg.Frame.ViewName("CreateRoomFractionItemView") ], e, "CreateRoomFractionItemView", void 0);
a([ qg.Frame.ViewName("CreateRoomEditItemView") ], e, "CreateRoomEditItemView", void 0);
a([ qg.Frame.ViewName("CreateRoomLineItemView") ], e, "CreateRoomLineItemView", void 0);
a([ qg.Frame.ViewName("CreateRoomPanelItemView") ], e, "CreateCombBoxItemView", void 0);
a([ qg.Frame.ViewName("CreateCombBoxItemView") ], e, "CreateRoomPanelItemView", void 0);
a([ qg.Frame.ViewName("CreateRoomTipsItemView") ], e, "CreateRoomTipsItemView", void 0);
a([ qg.Frame.ViewName("CreateRoomEmptyItemView") ], e, "CreateRoomEmptyItemView", void 0);
a([ qg.Frame.ViewName("TeaHouseCreateRoomView") ], e, "TeaHouseCreateRoomView", void 0);
a([ qg.Frame.ViewName("TeaHouseCreateRoomRightView") ], e, "TeaHouseCreateRoomRightView", void 0);
a([ qg.Frame.ViewName("QianShouTeaHouseCreateRoomRightView") ], e, "QianShouTeaHouseCreateRoomRightView", void 0);
a([ qg.Frame.ViewName("TeaHouseCreatePlayModeRightView") ], e, "TeaHouseCreatePlayModeRightView", void 0);
a([ qg.Frame.ViewName("TeaHouseCreateModeRoomView") ], e, "TeaHouseCreateModeRoomView", void 0);
a([ qg.Frame.ViewName("CreateTeaHouseBoxRoomUI") ], e, "CreateTeaHouseBoxRoomUI", void 0);
a([ qg.Frame.ViewName("TeaHouseCommonUI") ], e, "TeaHouseCommonUI", void 0);
a([ qg.Frame.ViewName("AgeTipView") ], e, "AgeTipView", void 0);
a([ qg.Frame.ViewName("ChooseAreaView") ], e, "ChooseAreaView", void 0);
a([ qg.Frame.ViewName("ChoosePackageView") ], e, "ChoosePackageView", void 0);
a([ qg.Frame.ViewName("ChooseCityView") ], e, "ChooseCityView", void 0);
a([ qg.Frame.ViewName("ChooseDistrictView") ], e, "ChooseDistrictView", void 0);
a([ qg.Frame.ViewName("ChooseRecommandView") ], e, "ChooseRecommandView", void 0);
a([ qg.Frame.ViewName("HoverIconView") ], e, "HoverIconView", void 0);
a([ qg.Frame.ViewName("WebViewUIController") ], e, "WebViewUIController", void 0);
a([ qg.Frame.ViewName("StartGameView") ], e, "StartGameView", void 0);
a([ qg.Frame.ViewName("TeaHouseScene") ], e, "TeaHouseScene", void 0);
a([ qg.Frame.ViewName("LoadingView") ], e, "LoadingView", void 0);
a([ qg.Frame.ViewName("CustomerProtocolView") ], e, "CustomerProtocolView", void 0);
a([ qg.Frame.ViewName("MarqueeView") ], e, "MarqueeView", void 0);
a([ qg.Frame.ViewName("NoServiceUIView") ], e, "NoServiceUIView", void 0);
a([ qg.Frame.ViewName("FguiLoginView") ], e, "FguiLoginView", void 0);
a([ qg.Frame.ViewName("FguiHotUpdateView") ], e, "FguiHotUpdateView", void 0);
a([ qg.Frame.ViewName("FguiStartGameView") ], e, "FguiStartGameView", void 0);
a([ qg.Frame.ViewName("LoginPhoneView") ], e, "LoginPhoneView", void 0);
a([ qg.Frame.ViewName("PhoneBindView") ], e, "PhoneBindView", void 0);
a([ qg.Frame.ViewName("PhoneIdentifyView") ], e, "PhoneIdentifyView", void 0);
a([ qg.Frame.ViewName("PayDialogView") ], e, "PayDialogView", void 0);
a([ qg.Frame.ViewName("PackageHotupteView") ], e, "PackageHotupteView", void 0);
a([ qg.Frame.ViewName("GuideTipsView") ], e, "GuideTipsView", void 0);
a([ qg.Frame.ViewName("H5GameIconView") ], e, "H5GameIconView", void 0);
a([ qg.Frame.ViewName("PermissionSetView") ], e, "PermissionSetView", void 0);
a([ qg.Frame.ViewName("PermissionTipView") ], e, "PermissionTipView", void 0);
return a([ qg.Frame.Bundle("common") ], e);
}();
t.LobbyBundle = o;
var n = function() {
function e() {}
a([ qg.Frame.ViewName("YWZJSpecialUI") ], e, "YWZJSpecialUI", void 0);
return a([ qg.Frame.Bundle("test") ], e);
}();
t.TestBundle = n;
var r = function() {
function e() {}
a([ qg.Frame.ViewName("TestMainView") ], e, "TestMainView", void 0);
a([ qg.Frame.ViewName("TestIconView") ], e, "TestIconView", void 0);
return a([ qg.Frame.Bundle("test_lobby") ], e);
}();
t.TestLobbyBundle = r;
(function(e) {
var i = function() {
function e() {}
a([ qg.Frame.ViewName("LobbyMainView") ], e, "LobbyMainView", void 0);
a([ qg.Frame.ViewName("LobbyIconView") ], e, "LobbyIconView", void 0);
a([ qg.Frame.ViewName("GongZhongHaoView") ], e, "GongZhongHaoView", void 0);
a([ qg.Frame.ViewName("FriendSmallTip") ], e, "FriendSmallTip", void 0);
a([ qg.Frame.ViewName("FriendListRoomTip") ], e, "FriendListRoomTip", void 0);
return a([ qg.Frame.Bundle("lobby") ], e);
}();
e.Lobby = i;
var t = function() {
function e() {}
a([ qg.Frame.ViewName("PlayerCenterView") ], e, "PlayerCenterView", void 0);
a([ qg.Frame.ViewName("TransCardTipView") ], e, "TransCardTipView", void 0);
a([ qg.Frame.ViewName("TransCardCheckAgainTipView") ], e, "TransCardCheckAgainTipView", void 0);
a([ qg.Frame.ViewName("TransCardInputPassWordView") ], e, "TransCardInputPassWordView", void 0);
return a([ qg.Frame.Bundle("playercenter") ], e);
}();
e.PlayerCenter = t;
var o = function() {
function e() {}
a([ qg.Frame.ViewName("AnnounceView") ], e, "AnnounceView", void 0);
a([ qg.Frame.ViewName("AnnounceViewStopLY") ], e, "AnnounceViewStopLY", void 0);
return a([ qg.Frame.Bundle("announce") ], e);
}();
e.AnnounceUI = o;
var n = function() {
function e() {}
a([ qg.Frame.ViewName("SettingUI") ], e, "SettingUI", void 0);
return a([ qg.Frame.Bundle("setting") ], e);
}();
e.SettingUI = n;
var r = function() {
function e() {}
a([ qg.Frame.ViewName("ShareView") ], e, "ShareView", void 0);
a([ qg.Frame.ViewName("ShareAwardView") ], e, "ShareAwardView", void 0);
a([ qg.Frame.ViewName("ShareScreenView") ], e, "ShareScreenView", void 0);
return a([ qg.Frame.Bundle("share") ], e);
}();
e.ShareUI = r;
var s = function() {
function e() {}
a([ qg.Frame.ViewName("PromoteHallView") ], e, "PromoteHallView", void 0);
a([ qg.Frame.ViewName("PromoteTeaView") ], e, "PromoteTeaView", void 0);
a([ qg.Frame.ViewName("PromoteIceBreakLogView") ], e, "PromoteIceBreakLogView", void 0);
a([ qg.Frame.ViewName("PromoteIceView") ], e, "PromoteIceView", void 0);
a([ qg.Frame.ViewName("PromoteDoubleHallView") ], e, "PromoteDoubleHallView", void 0);
a([ qg.Frame.ViewName("PromoteDoubleTeaView") ], e, "PromoteDoubleTeaView", void 0);
a([ qg.Frame.ViewName("PromoteRewardLogView") ], e, "PromoteRewardLogView", void 0);
a([ qg.Frame.ViewName("PromoteIntroduceView") ], e, "PromoteIntroduceView", void 0);
a([ qg.Frame.ViewName("PromoteDialogView") ], e, "PromoteDialogView", void 0);
a([ qg.Frame.ViewName("PromoteInviteView") ], e, "PromoteInviteView", void 0);
a([ qg.Frame.ViewName("PromoteLuckyView") ], e, "PromoteLuckyView", void 0);
a([ qg.Frame.ViewName("PromoteLuckyMarqueeView") ], e, "PromoteLuckyMarqueeView", void 0);
return a([ qg.Frame.Bundle("promote") ], e);
}();
e.Promote = s;
var c = function() {
function e() {}
a([ qg.Frame.ViewName("WatchAdView") ], e, "WatchAdView", void 0);
a([ qg.Frame.ViewName("WatchAdHelpView") ], e, "WatchAdHelpView", void 0);
return a([ qg.Frame.Bundle("watchad") ], e);
}();
e.Watchad = c;
var d = function() {
function e() {}
a([ qg.Frame.ViewName("GetAwardView") ], e, "GetAwardView", void 0);
a([ qg.Frame.ViewName("PhoneBindView") ], e, "PhoneBindView", void 0);
a([ qg.Frame.ViewName("DeliveryAddressView") ], e, "DeliveryAddressView", void 0);
a([ qg.Frame.ViewName("PasswdIdentifyView") ], e, "PasswdIdentifyView", void 0);
a([ qg.Frame.ViewName("GuideView") ], e, "GuideView", void 0);
a([ qg.Frame.ViewName("GuideTipsView") ], e, "GuideTipsView", void 0);
a([ qg.Frame.ViewName("JoinRoomView") ], e, "JoinRoomView", void 0);
a([ qg.Frame.ViewName("BubbleTip") ], e, "BubbleTip", void 0);
a([ qg.Frame.ViewName("CommonBubbleTip") ], e, "CommonBubbleTip", void 0);
a([ qg.Frame.ViewName("FriendOnlineNotifyView") ], e, "FriendOnlineNotifyView", void 0);
return a([ qg.Frame.Bundle("lobby_common") ], e);
}();
e.Common = d;
var l = function() {
function e() {}
a([ qg.Frame.ViewName("CreateRoomView") ], e, "CreateRoomView", void 0);
a([ qg.Frame.ViewName("HelpView") ], e, "HelpView", void 0);
a([ qg.Frame.ViewName("CreateRoomEditTotalTimesView") ], e, "CreateRoomEditTotalTimesView", void 0);
a([ qg.Frame.ViewName("TeaHouseCreateRoomView") ], e, "TeaHouseCreateRoomView", void 0);
a([ qg.Frame.ViewName("CreateRoomCostDetailView") ], e, "CreateRoomCostDetailView", void 0);
a([ qg.Frame.ViewName("TeaHouseCreateModeRoomView") ], e, "TeaHouseCreateModeRoomView", void 0);
return a([ qg.Frame.Bundle("createroom") ], e);
}();
e.CreateRoom = l;
var u = function() {
function e() {}
a([ qg.Frame.ViewName("GoldLaunchTipView") ], e, "GoldLaunchTipView", void 0);
a([ qg.Frame.ViewName("BisTroActView") ], e, "BisTroActView", void 0);
a([ qg.Frame.ViewName("SigninItemView") ], e, "SigninItemView", void 0);
a([ qg.Frame.ViewName("BaseActivityView") ], e, "BaseActivityView", void 0);
a([ qg.Frame.ViewName("SigninView") ], e, "SigninView", void 0);
a([ qg.Frame.ViewName("ActTaskItemView") ], e, "ActTaskItemView", void 0);
a([ qg.Frame.ViewName("ActTaskView") ], e, "ActTaskView", void 0);
a([ qg.Frame.ViewName("UpdateAwardActView") ], e, "UpdateAwardActView", void 0);
a([ qg.Frame.ViewName("BagUI") ], e, "BagView", void 0);
a([ qg.Frame.ViewName("BagUINew") ], e, "BagViewNew", void 0);
a([ qg.Frame.ViewName("H5GameView") ], e, "H5GameView", void 0);
a([ qg.Frame.ViewName("PopWindowsView") ], e, "PopWindowsView", void 0);
a([ qg.Frame.ViewName("InviteActivityView") ], e, "InviteActivityView", void 0);
a([ qg.Frame.ViewName("InviteActivityAwardRecordView") ], e, "InviteActivityAwardRecordView", void 0);
a([ qg.Frame.ViewName("InviteActivityRecordView") ], e, "InviteActivityRecordView", void 0);
a([ qg.Frame.ViewName("PokerListUI") ], e, "PokerListUI", void 0);
a([ qg.Frame.ViewName("BagPropUseTipUI") ], e, "BagPropUseTipUI", void 0);
a([ qg.Frame.ViewName("ShuffleAct") ], e, "ShuffleAct", void 0);
a([ qg.Frame.ViewName("BindPhoneActivityView") ], e, "BindPhoneActivityView", void 0);
return a([ qg.Frame.Bundle("activity") ], e);
}();
e.Activity = u;
var _ = function() {
function e() {}
a([ qg.Frame.ViewName("GoldAniView") ], e, "GoldAniView", void 0);
a([ qg.Frame.ViewName("GoldGuideView") ], e, "GoldGuideView", void 0);
a([ qg.Frame.ViewName("StoreView") ], e, "StoreView", void 0);
a([ qg.Frame.ViewName("ProductItemView") ], e, "ProductItemView", void 0);
a([ qg.Frame.ViewName("StoreTipView") ], e, "StoreTipView", void 0);
a([ qg.Frame.ViewName("StoreExchangeView") ], e, "StoreExchangeView", void 0);
a([ qg.Frame.ViewName("StoreExchangeHistoryView") ], e, "StoreExchangeHistoryView", void 0);
a([ qg.Frame.ViewName("StoreAutoRenewView") ], e, "StoreAutoRenewView", void 0);
a([ qg.Frame.ViewName("TicketStoreView") ], e, "TicketStoreView", void 0);
a([ qg.Frame.ViewName("TicketStoreHelpView") ], e, "TicketStoreHelpView", void 0);
a([ qg.Frame.ViewName("TicketStoreExchangeHistoryView") ], e, "TicketStoreExchangeHistoryView", void 0);
a([ qg.Frame.ViewName("StoreCouponView") ], e, "StoreCouponView", void 0);
return a([ qg.Frame.Bundle("store") ], e);
}();
e.Store = _;
var m = function() {
function e() {}
a([ qg.Frame.ViewName("VipView") ], e, "VipView", void 0);
a([ qg.Frame.ViewName("VipInfoView") ], e, "VipInfoView", void 0);
a([ qg.Frame.ViewName("VipGiftView") ], e, "VipGiftView", void 0);
a([ qg.Frame.ViewName("VipRecordView") ], e, "VipRecordView", void 0);
return a([ qg.Frame.Bundle("vip") ], e);
}();
e.Vip = m;
var h = function() {
function e() {}
a([ qg.Frame.ViewName("MailView") ], e, "MailView", void 0);
a([ qg.Frame.ViewName("GoldMainView") ], e, "GoldMainView", void 0);
a([ qg.Frame.ViewName("RealNameView") ], e, "RealNameView", void 0);
a([ qg.Frame.ViewName("RealNameAndRewardView") ], e, "RealNameAndRewardView", void 0);
a([ qg.Frame.ViewName("GameInviteView") ], e, "GameInviteView", void 0);
a([ qg.Frame.ViewName("GameInviteView2") ], e, "GameInviteView2", void 0);
a([ qg.Frame.ViewName("GoldRoomMainView") ], e, "GoldRoomMainView", void 0);
a([ qg.Frame.ViewName("GoldRoomStoreView") ], e, "GoldRoomStoreView", void 0);
a([ qg.Frame.ViewName("GoldRoomBankruptView") ], e, "GoldRoomBankruptView", void 0);
a([ qg.Frame.ViewName("ShutdownPopupView") ], e, "ShutdownPopupView", void 0);
return a([ qg.Frame.Bundle("popLayer") ], e);
}();
e.PopLayer = h;
var p = function() {
function e() {}
a([ qg.Frame.ViewName("ForbiddenStateView") ], e, "ForbiddenStateView", void 0);
return a([ qg.Frame.Bundle("lobby_forbidden") ], e);
}();
e.GameForbidden = p;
var g = function() {
function e() {}
a([ qg.Frame.ViewName("HistoryView") ], e, "HistoryView", void 0);
a([ qg.Frame.ViewName("GameInviteView") ], e, "GameInviteView", void 0);
a([ qg.Frame.ViewName("GameInviteView2") ], e, "GameInviteView2", void 0);
a([ qg.Frame.ViewName("PlaybackSelectView") ], e, "PlaybackSelectView", void 0);
a([ qg.Frame.ViewName("LedgerItemQuanminView") ], e, "LedgerItemQuanminView", void 0);
a([ qg.Frame.ViewName("DetailItemView") ], e, "DetailItemView", void 0);
a([ qg.Frame.ViewName("PlaybackNumView") ], e, "PlaybackNumView", void 0);
a([ qg.Frame.ViewName("LedgerItemView") ], e, "LedgerItemView", void 0);
a([ qg.Frame.ViewName("StatictiscItemView") ], e, "StatictiscItemView", void 0);
return a([ qg.Frame.Bundle("lobby_history") ], e);
}();
e.History = g;
var f = function() {
function e() {}
a([ qg.Frame.ViewName("LuckyTaskView") ], e, "LuckyTaskView", void 0);
a([ qg.Frame.ViewName("LuckyTaskRecordView") ], e, "LuckyTaskRecordView", void 0);
return a([ qg.Frame.Bundle("task") ], e);
}();
e.LuckyTask = f;
var I = function() {
function e() {}
a([ qg.Frame.ViewName("PackageDownView") ], e, "PackageDownView", void 0);
a([ qg.Frame.ViewName("IntranetTestView") ], e, "IntranetTestView", void 0);
a([ qg.Frame.ViewName("IntranetControllerView") ], e, "IntranetControllerView", void 0);
a([ qg.Frame.ViewName("IntranetTestItemView") ], e, "IntranetTestItemView", void 0);
a([ qg.Frame.ViewName("LineChartView") ], e, "LineChartView", void 0);
return a([ qg.Frame.Bundle("lobbyext") ], e);
}();
e.LobbyExtBundle = I;
var N = function() {
function e() {}
a([ qg.Frame.ViewName("ResolveSignView") ], e, "ResolveSignView", void 0);
a([ qg.Frame.ViewName("ResolveSignSecondView") ], e, "ResolveSignSecondView", void 0);
return a([ qg.Frame.Bundle("resolvesign") ], e);
}();
e.ResolveSign = N;
var y = function() {
function e() {}
a([ qg.Frame.ViewName("PropGiftBagView") ], e, "PropGiftBagView", void 0);
return a([ qg.Frame.Bundle("propgiftbag") ], e);
}();
e.PropGiftBag = y;
var b = function() {
function e() {}
a([ qg.Frame.ViewName("ShuffleDisBuyView") ], e, "ShuffleDisBuyView", void 0);
return a([ qg.Frame.Bundle("shuffleact") ], e);
}();
e.ShuffleAct = b;
var w = function() {
function e() {}
a([ qg.Frame.ViewName("AoYunActView") ], e, "AoYunActView", void 0);
return a([ qg.Frame.Bundle("aoyunact") ], e);
}();
e.AoYunAct = w;
var v = function() {
function e() {}
a([ qg.Frame.ViewName("UserRightView") ], e, "UserRightView", void 0);
a([ qg.Frame.ViewName("UserRightStockAlertView") ], e, "UserRightStockAlertView", void 0);
a([ qg.Frame.ViewName("UserRightVoucherView") ], e, "UserRightVoucherView", void 0);
a([ qg.Frame.ViewName("UserRightVoucherInfoView") ], e, "UserRightVoucherInfoView", void 0);
a([ qg.Frame.ViewName("UserRightRecvVoucherView") ], e, "UserRightRecvVoucherView", void 0);
return a([ qg.Frame.Bundle("userRight") ], e);
}();
e.UserRight = v;
var A = function() {
function e() {}
a([ qg.Frame.ViewName("PeakRaceHorseView") ], e, "PeakRaceHorseView", void 0);
a([ qg.Frame.ViewName("PeakRaceView") ], e, "PeakRaceView", void 0);
a([ qg.Frame.ViewName("PeakRaceRuleView") ], e, "PeakRaceRuleView", void 0);
a([ qg.Frame.ViewName("PeakRaceApplyView") ], e, "PeakRaceApplyView", void 0);
a([ qg.Frame.ViewName("PeakRaceRankView") ], e, "PeakRaceRankView", void 0);
return a([ qg.Frame.Bundle("peakrace") ], e);
}();
e.PeakRace = A;
})(t.LobbyFguiBundle || (t.LobbyFguiBundle = {}));
var s = function() {
function e() {}
a([ qg.Frame.ViewName("NewUserInfoUI") ], e, "NewUserInfoUI", void 0);
a([ qg.Frame.ViewName("GamePrayUI") ], e, "GamePrayUI", void 0);
a([ qg.Frame.ViewName("GamePropGuideTip") ], e, "GamePropGuideTip", void 0);
a([ qg.Frame.ViewName("FguiVoiceView") ], e, "VoiceView", void 0);
a([ qg.Frame.ViewName("FguiDismissView") ], e, "DismissView", void 0);
a([ qg.Frame.ViewName("CutCardsView") ], e, "CutCardsView", void 0);
a([ qg.Frame.ViewName("TZ23CutCardsView") ], e, "TZ23CutCardsView", void 0);
a([ qg.Frame.ViewName("FguiQuickStartView") ], e, "QuickStartView", void 0);
a([ qg.Frame.ViewName("FguiQuickStartModifyRuleView") ], e, "QuickStartModifyRuleView", void 0);
a([ qg.Frame.ViewName("FguiAutoNtfStartView") ], e, "FguiAutoNtfStartView", void 0);
a([ qg.Frame.ViewName("FguiChatView") ], e, "ChatView", void 0);
a([ qg.Frame.ViewName("FguiPlayerChatView") ], e, "PlayerChatView", void 0);
a([ qg.Frame.ViewName("FguiGPSView") ], e, "FguiGPSView", void 0);
a([ qg.Frame.ViewName("SafeCheckView") ], e, "SafeCheckView", void 0);
a([ qg.Frame.ViewName("SafeCheckExchangeView") ], e, "SafeCheckExchangeView", void 0);
a([ qg.Frame.ViewName("SafeCheckFreeView") ], e, "SafeCheckFreeView", void 0);
a([ qg.Frame.ViewName("SafeCheckRuleView") ], e, "SafeCheckRuleView", void 0);
a([ qg.Frame.ViewName("SafeCheckDiscountView") ], e, "SafeCheckDiscountView", void 0);
a([ qg.Frame.ViewName("MahRecorderView") ], e, "MahRecorderView", void 0);
a([ qg.Frame.ViewName("CardRecorderExchangeView") ], e, "CardRecorderExchangeView", void 0);
a([ qg.Frame.ViewName("ScoreDoubleTipView") ], e, "ScoreDoubleTipView", void 0);
a([ qg.Frame.ViewName("FguiTipView") ], e, "FguiTipView", void 0);
a([ qg.Frame.ViewName("GcSettingView") ], e, "GcSettingView", void 0);
a([ qg.Frame.ViewName("FguiBigWinLostView") ], e, "FguiBigWinLostView", void 0);
a([ qg.Frame.ViewName("FguiBigWinLostTotalView") ], e, "FguiBigWinLostTotalView", void 0);
a([ qg.Frame.ViewName("FguiContinueVoteView") ], e, "FguiContinueVoteView", void 0);
a([ qg.Frame.ViewName("FguiNotifyView") ], e, "FguiNotifyView", void 0);
a([ qg.Frame.ViewName("GCGameView") ], e, "GCGameView", void 0);
a([ qg.Frame.ViewName("GCPlayHeadView") ], e, "PlayHeadView", void 0);
a([ qg.Frame.ViewName("GCNewUserInfoUI") ], e, "GCNewUserInfoUI", void 0);
a([ qg.Frame.ViewName("PlayerHeadLayerView") ], e, "PlayerHeadLayerView", void 0);
a([ qg.Frame.ViewName("PlayerHeadTagCounterView") ], e, "PlayerHeadTagCounterView", void 0);
a([ qg.Frame.ViewName("GCPlayerReadyLayer") ], e, "PlayerReadyLayer", void 0);
a([ qg.Frame.ViewName("GCPlayerReadyView") ], e, "PlayerReadyView", void 0);
a([ qg.Frame.ViewName("GCPlayPropLayerView") ], e, "PlayPropLayerView", void 0);
a([ qg.Frame.ViewName("GCPlayerHeadTagBankerView") ], e, "PlayerHeadTagBankerView", void 0);
a([ qg.Frame.ViewName("GCGamePropGuideTip") ], e, "GCGamePropGuideTip", void 0);
a([ qg.Frame.ViewName("GCScoreDoubleBtn") ], e, "GCScoreDoubleBtn", void 0);
a([ qg.Frame.ViewName("GCMahTableInfoView") ], e, "GCMahTableInfoView", void 0);
a([ qg.Frame.ViewName("GCGameHelpLayer") ], e, "GCGameHelpLayer", void 0);
a([ qg.Frame.ViewName("GCGamePrayView") ], e, "GCGamePrayView", void 0);
a([ qg.Frame.ViewName("GCGamePrayChooseView") ], e, "GCGamePrayChooseView", void 0);
a([ qg.Frame.ViewName("GCPropLayerView") ], e, "GCPropLayerView", void 0);
a([ qg.Frame.ViewName("GCMenuView") ], e, "GCMenuView", void 0);
a([ qg.Frame.ViewName("GCSshareQrcodeAdaptView") ], e, "GCSshareQrcodeAdaptView", void 0);
a([ qg.Frame.ViewName("FguiPropTipView") ], e, "FguiPropTipView", void 0);
a([ qg.Frame.ViewName("GCPrayUseDialogView") ], e, "GCPrayUseDialogView", void 0);
a([ qg.Frame.ViewName("GCPrayUpView") ], e, "GCPrayUpView", void 0);
a([ qg.Frame.ViewName("GCShuffleTipView") ], e, "GCShuffleTipView", void 0);
a([ qg.Frame.ViewName("AddFriendGuideView") ], e, "AddFriendGuideView", void 0);
a([ qg.Frame.ViewName("GCPrayV2View") ], e, "GCPrayV2View", void 0);
return a([ qg.Frame.Bundle("gamecommon") ], e);
}();
t.GameCommonBundle = s;
t.GameCommonPackage = "fgui/game_common";
t.FguiGameCommon = {
GameCommon: "ui://game_common/"
};
var c = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.IController = c;
var d = function() {
function e() {}
return a([ qg.Frame.Subject ], e);
}();
t.SLifeStatus = d;
var l = function() {
function e() {}
return a([ qg.Frame.Subject ], e);
}();
t.SJoinPasswdRoom = l;
t.NUIJoinPasswdRoomState = function() {
this.isSuccess = !1;
};
var u = function() {
function e() {}
return a([ qg.Frame.Subject ], e);
}();
t.SChangeScene = u;
var _ = function() {
function e() {}
return a([ qg.Frame.Subject ], e);
}();
t.SShowTeaHouseCardLimitUI = _;
t.KEY_IS_REQ_OPENID = "is_req_openid";
var m = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.IYWZJTestSendMsg = m;
var h = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.IWZCardTestGameData = h;
var p = function() {
function e() {}
a([ qg.Frame.ViewName("EnterRoomGiftPackUI") ], e, "EnterRoomGiftPackUI", void 0);
a([ qg.Frame.ViewName("GoldUI") ], e, "GoldUI", void 0);
a([ qg.Frame.ViewName("GoldAwardUI") ], e, "GoldAwardUI", void 0);
a([ qg.Frame.ViewName("DailySignInUI") ], e, "DailySignInUI", void 0);
a([ qg.Frame.ViewName("HourLoginAwardUI") ], e, "HourLoginAwardUI", void 0);
a([ qg.Frame.ViewName("PlayAwardLayerUI") ], e, "PlayAwardLayerUI", void 0);
a([ qg.Frame.ViewName("PlayAwardGetLayerUI") ], e, "PlayAwardGetLayerUI", void 0);
a([ qg.Frame.ViewName("SettingUI") ], e, "SettingUI", void 0);
a([ qg.Frame.ViewName("StoreUI") ], e, "StoreUI", void 0);
a([ qg.Frame.ViewName("GoldBankRuptUI") ], e, "GoldBankRuptUI", void 0);
a([ qg.Frame.ViewName("GoldTipUI") ], e, "GoldTipUI", void 0);
a([ qg.Frame.ViewName("GoldBankTipUI") ], e, "GoldBankTipUI", void 0);
return a([ qg.Frame.Bundle("goldnew_lobby") ], e);
}();
t.GoldNewLobbyBundle = p;
var g = function() {
function e() {}
a([ qg.Frame.ViewName("TableInfoUI") ], e, "TableInfoUI", void 0);
a([ qg.Frame.ViewName("TooMuchUI") ], e, "TooMuchUI", void 0);
a([ qg.Frame.ViewName("NotEnoughUI") ], e, "NotEnoughUI", void 0);
a([ qg.Frame.ViewName("RuleUI") ], e, "RuleUI", void 0);
a([ qg.Frame.ViewName("SetUI") ], e, "SetUI", void 0);
a([ qg.Frame.ViewName("PlayerInfoUI") ], e, "PlayerInfoUI", void 0);
a([ qg.Frame.ViewName("GoldCard") ], e, "GoldCard", void 0);
a([ qg.Frame.ViewName("GoldCardArea") ], e, "GoldCardArea", void 0);
a([ qg.Frame.ViewName("ResultUI") ], e, "ResultUI", void 0);
a([ qg.Frame.ViewName("ClockAniItem") ], e, "ClockAniItem", void 0);
a([ qg.Frame.ViewName("CardFrame") ], e, "CardFrame", void 0);
return a([ qg.Frame.Bundle("goldnew_game") ], e);
}();
t.GoldNewGameBundle = g;
var f = function() {
function e() {}
a([ qg.Frame.ViewName("FriendListUI") ], e, "FriendListUI", void 0);
a([ qg.Frame.ViewName("FriendGameListUI") ], e, "FriendGameListUI", void 0);
a([ qg.Frame.ViewName("FriendAddView") ], e, "FriendAddView", void 0);
a([ qg.Frame.ViewName("FriendGameShareUI") ], e, "FriendGameShareUI", void 0);
a([ qg.Frame.ViewName("FriendGameShareRecvUI") ], e, "FriendGameShareRecvUI", void 0);
return a([ qg.Frame.Bundle("friendList") ], e);
}();
t.FriendListBundle = f;
var I = function() {
function e() {}
a([ qg.Frame.ViewName("BistroChangeView") ], e, "BistroChangeView", void 0);
a([ qg.Frame.ViewName("BistroTableInfoView") ], e, "BistroTableInfoView", void 0);
a([ qg.Frame.ViewName("BistroPasswordView") ], e, "BistroPasswordView", void 0);
a([ qg.Frame.ViewName("BistroChangeMemberView") ], e, "BistroChangeMemberView", void 0);
return a([ qg.Frame.Bundle("bistro") ], e);
}();
t.BistroBundle = I;
cc._RF.pop();
}, {} ],
DiffList: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "f67a9+PhFpK6Jwly7ESzWDC", "DiffList");
var a = this && this.__values || function(e) {
var i = "function" == typeof Symbol && Symbol.iterator, t = i && e[i], a = 0;
if (t) return t.call(e);
if (e && "number" == typeof e.length) return {
next: function() {
e && a >= e.length && (e = void 0);
return {
value: e && e[a++],
done: !e
};
}
};
throw new TypeError(i ? "Object is not iterable." : "Symbol.iterator is not defined.");
}, o = this && this.__read || function(e, i) {
var t = "function" == typeof Symbol && e[Symbol.iterator];
if (!t) return e;
var a, o, n = t.call(e), r = [];
try {
for (;(void 0 === i || i-- > 0) && !(a = n.next()).done; ) r.push(a.value);
} catch (e) {
o = {
error: e
};
} finally {
try {
a && !a.done && (t = n.return) && t.call(n);
} finally {
if (o) throw o.error;
}
}
return r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
var n = e("../Constants"), r = function() {
function e() {
this._table = new Map();
}
e.prototype.add = function(e, i, t, a, o) {
var n;
this._table.set(e, ((n = {}).name = i, n.zipMd5 = t, n.diffType = o, n.size = a, 
n));
};
e.prototype.get = function(e) {
return this._table.get(e);
};
e.prototype.remove = function(e) {
this._table.has(e) && this._table.delete(e);
};
e.prototype.foreach = function(e) {
var i, t;
try {
for (var n = a(this._table), r = n.next(); !r.done; r = n.next()) {
var s = o(r.value, 2);
e(s[0], s[1]);
}
} catch (e) {
i = {
error: e
};
} finally {
try {
r && !r.done && (t = n.return) && t.call(n);
} finally {
if (i) throw i.error;
}
}
};
e.prototype.getCount = function() {
return this._table.size;
};
e.prototype.getTotalDownloadFileCountAndSize = function() {
var e, i, t = 0, r = 0;
try {
for (var s = a(this._table), c = s.next(); !c.done; c = s.next()) {
var d = o(c.value, 2)[1];
if (d.diffType !== n.Constants.FileDiffType.DELETE) {
t++;
r += d.size;
}
}
} catch (i) {
e = {
error: i
};
} finally {
try {
c && !c.done && (i = s.return) && i.call(s);
} finally {
if (e) throw e.error;
}
}
return {
count: t,
size: r
};
};
return e;
}();
t.default = r;
cc._RF.pop();
}, {
"../Constants": "Constants"
} ],
DownloaderCons: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "c6a58N3QCBBXYO0eqHid3vD", "DownloaderCons");
Object.defineProperty(t, "__esModule", {
value: !0
});
var a = function() {
function e() {}
e.prototype.addListener = function(e) {
var i = new un.Downloader();
i.setListener(e);
return i;
};
e.prototype.removeListener = function(e) {
e.removeWhenAllTaskComplete();
};
e.prototype.addProgressListener = function(e, i) {
e.setProgressListener(i);
};
e.prototype.add = function(e, i, t, a, o, n, r, s, c, d, l, u) {
u.setNeedDetailTime(s);
u.setTaskPriority(d);
u.add(e, i, t, l);
};
e.prototype.commit = function() {};
e.prototype.getThreadCount = function() {
return 4;
};
return e;
}();
t.default = a;
cc._RF.pop();
}, {} ],
ExtendExport: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "3cbc6LDy11PjaE21C/1DkVa", "ExtendExport");
Object.defineProperty(t, "__esModule", {
value: !0
});
t.ViewBaseEx = void 0;
var a = e("./view/ViewBaseEx");
Object.defineProperty(t, "ViewBaseEx", {
enumerable: !0,
get: function() {
return a.ViewBaseEx;
}
});
cc._RF.pop();
}, {
"./view/ViewBaseEx": "ViewBaseEx"
} ],
Extend: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "7e472qsr5RJ0IpgSvwGOeOX", "Extend");
Object.defineProperty(t, "__esModule", {
value: !0
});
t.Extend = void 0;
var a = e("./ExtendExport");
t.Extend = a;
cc._RF.pop();
}, {
"./ExtendExport": "ExtendExport"
} ],
FguiHotUpdateView: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "5a4a88yavxKbKQwsv+1LjRV", "FguiHotUpdateView");
var a, o = this && this.__extends || (a = function(e, i) {
return (a = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(e, i) {
e.__proto__ = i;
} || function(e, i) {
for (var t in i) Object.prototype.hasOwnProperty.call(i, t) && (e[t] = i[t]);
})(e, i);
}, function(e, i) {
a(e, i);
function t() {
this.constructor = e;
}
e.prototype = null === i ? Object.create(i) : (t.prototype = i.prototype, new t());
}), n = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
t.FguiHotUpdateView = t.FguiControllerName = void 0;
var r = e("./HotupdateDefine"), s = e("./HotupdateInterface"), c = e("./ResChecker"), d = e("./universe/hotfix/LayerFS");
(function(e) {
e[e.LOADING = 0] = "LOADING";
e[e.UPDATE = 1] = "UPDATE";
e[e.LOGIN = 2] = "LOGIN";
e[e.LOAGIN_SUCCESS = 3] = "LOAGIN_SUCCESS";
})(t.FguiControllerName || (t.FguiControllerName = {}));
var l = function(e) {
o(i, e);
function i() {
var i = null !== e && e.apply(this, arguments) || this;
i._enterParam = {};
i._process = 0;
i._recordVoiceScheduleID = 0;
i._nowProcess = 0;
i._defaultBundle = "common";
i.view = {};
i._checkList = {};
return i;
}
i.prototype.onCreate = function() {
fairygui.UIPackage.loadPackage(cc.assetManager.getBundle(this._defaultBundle), "res/fgui/common/common");
};
i.prototype.onLoad = function() {
e.prototype.onLoad.call(this);
this.getUnityCommandLineArgs();
this.initEvent();
this.loadAllObjectMultiLv(this.node, "", !0);
this.view.lab_vers.width = 1e3;
this.initUI();
cc.sys.isBrowser && "removeSplash" in window && window.removeSplash();
};
i.prototype.initEvent = function() {
fgui.GRoot.inst.node.on(s.SHotupdate.enterGame, this.enterGame.bind(this));
fgui.GRoot.inst.node.on(s.SHotupdate.showProgress, this.showProgress.bind(this));
fgui.GRoot.inst.node.on(s.SHotupdate.showTipText, this.showTipText.bind(this));
fgui.GRoot.inst.node.on(s.SHotupdate.showVersion, this.showVersion.bind(this));
fgui.GRoot.inst.node.on(s.SHotupdate.updateFail, this.updateFail.bind(this));
};
i.prototype.updateFail = function(e, i, t) {
this.view.KW_TIP.active = !0;
this.view.KW_TIP.KW_UI_LABEL_CONTENT.text = e;
i && (this.view.KW_TIP.KW_TEXT.text = i);
t ? this.addClick(this.view.KW_TIP.KW_BTN_OK, t, this) : this.addClick(this.view.KW_TIP.KW_BTN_OK, this.gameEndFunc.bind(this), this);
};
i.prototype.gameEndFunc = function() {
cc.game.end();
};
i.prototype.loadAllObjectMultiLv = function(e, i, t) {
var a, o, n = this;
void 0 === t && (t = !1);
if (fgui.GObject.cast(e) || t) {
var r = e == this.node ? this.view : e;
null === (o = (null !== (a = fgui.GObject.cast(e)) && void 0 !== a ? a : e)._children) || void 0 === o || o.forEach(function(e) {
if (!/^n[0-9]+$/gu.test(e.name)) {
var i = e.name;
"icon" != i && "title" != i || (i += "Obj");
r[i] = e;
n.loadAllObjectMultiLv(e, "", !0);
}
});
}
for (var s = this.view, c = 0; c < e.childrenCount; c++) {
s[e.children[c].name] = e.children[c];
this.loadAllObjectMultiLv(e.children[c], i + e.children[c].name + "/", !1);
}
};
i.prototype.initUI = function() {
var e = this;
this.view.KW_TIP.active = !1;
this._setBgScale();
this.scheduleOnce(function() {
e.initLogo();
e.initLoginBackground();
}, .1);
this._progressbar = this.view.pb_load;
this._labTitle = this.view.pb_load.lab_title;
this._labTitle.text = "正在加载本地资源中 0%";
this.view.lab_vers.text = "";
this.showPercent(1);
r.SDKBaseEx.isNativeAndroid() && this.scheduleOnce(function() {
jsb.reflection.callStaticMethod("org.cocos2dx.javascript.AppActivity", "hideSplash", "()V");
});
this.addClick(this.view.KW_TIP.KW_UI_BTN_CLOSE, this.gameEndFunc.bind(this), this);
};
i.prototype.addClick = function(e, i, t) {
var a = e;
a.off(cc.Node.EventType.TOUCH_END);
a.on(cc.Node.EventType.TOUCH_END, function(e) {
e.stopPropagation();
fgui.GRoot.inst.inputProcessor.touchEndHandler(e);
i.call(t, e);
}, t);
};
i.prototype.initLogo = function() {
r.SDKBaseEx.getGameLogo(this.view.loader_logo);
};
i.prototype.initLoginBackground = function() {
d.default.staticInstance.setFguiImgByUrl(this.view.loader_bg, r.SDKBaseEx.getGameBg());
};
i.prototype._setBgScale = function() {
if (null != this.view) {
var e = this.view.loader_bg, i = Math.max(cc.winSize.width / 1920, cc.winSize.height / 1080);
e.setScale(i, i);
}
};
i.prototype.showVersion = function(e) {
if (e.oldVersion && e.newVersion) {
this.view.lab_vers.active = !0;
this.view.lab_vers.text = "正在更新版本中……";
}
};
i.prototype.start = function() {
void 0 !== window.jsb && void 0 !== window.un ? this.agreeHotUpdate() : this.enterGame();
};
i.prototype.agreeHotUpdate = function() {
1 == this._enterParam.cardBGold ? this._checkList = {
Hall: "Hall/project.manifest",
Cardb: "Cardb/project.manifest"
} : this._checkList = {
Hall: "Hall/project.manifest",
Qxbp: "Qxbp/project.manifest"
};
c.ResChecker.staticInstance.start(!0, void 0, this._checkList);
};
i.prototype.enterGame = function() {
var e = this;
fairygui.UIPackage.loadPackage(cc.assetManager.getBundle(this._defaultBundle), "res/fgui/common/common", function() {
e.getImpl(r.IMainController).loadExtScripts();
});
};
i.prototype.showProgressWithAni = function() {
var e = this, i = (this._process - this._nowProcess) / 10, t = 0;
this._recordVoiceScheduleID = setInterval(function() {
e._nowProcess += i;
e._labTitle.text = "正在更新最新游戏资源 " + Number(e._nowProcess).toFixed(2) + "%";
e.showPercent(e._nowProcess);
(t += 1) >= 10 && e.cleartScheduleID();
if ("100.00" === Number(e._nowProcess).toFixed(2)) {
e.cleartScheduleID();
e._labTitle.text = "正在校验本地资源中...";
}
}, 20);
};
i.prototype.showProgress = function(e) {
console.log("yuhang progress " + e);
if (100 !== e) {
if (!(this._process > Math.ceil(e))) {
this.cleartScheduleID();
this._process = e;
if (this._process - this._nowProcess < 5) {
this._nowProcess = this._process;
this._labTitle.text = "正在更新最新游戏资源 " + Number(this._nowProcess).toFixed(2) + "%";
this.showPercent(this._nowProcess);
} else this.showProgressWithAni();
}
} else {
this.cleartScheduleID();
this.showPercent(1);
this._labTitle.text = "正在校验本地资源中...";
}
};
i.prototype.cleartScheduleID = function() {
if (0 != this._recordVoiceScheduleID) {
clearInterval(this._recordVoiceScheduleID);
this._recordVoiceScheduleID = 0;
}
};
i.prototype.showPercent = function(e) {
e = e > 1 ? e : 1;
this._progressbar.value = e;
};
i.prototype.showTipText = function(e) {
this._labTitle.text = e;
this.showPercent(0);
};
i.prototype.removeEvent = function() {
fgui.GRoot.inst.node.off(s.SHotupdate.enterGame);
fgui.GRoot.inst.node.off(s.SHotupdate.showProgress);
fgui.GRoot.inst.node.off(s.SHotupdate.showTipText);
fgui.GRoot.inst.node.off(s.SHotupdate.showVersion);
fgui.GRoot.inst.node.off(s.SHotupdate.updateFail);
};
i.prototype.onDestroy = function() {
this.removeEvent();
e.prototype.onDestroy.call(this);
};
i.prototype.getUnityCommandLineArgs = function() {
var e = jsb.reflection.callStaticMethod("org.cocos2dx.javascript.AppActivity", "getUnityCommandLineArgs", "()Ljava/lang/String;");
console.log("yuhang " + e);
this._enterParam = {};
e && (this._enterParam = JSON.parse(e));
};
return n([ qg.Frame.View({
name: r.HotupdateBundle.HotupdateView,
skins: [ "HotupdateUI" ],
fguiPackage: [ "hotupdateBundle:hotupdateBundle" ],
selector: null,
depends: [ r.ILoginUIController ]
}) ], i);
}(qg.Frame.ViewBase);
t.FguiHotUpdateView = l;
cc._RF.pop();
}, {
"./HotupdateDefine": "HotupdateDefine",
"./HotupdateInterface": "HotupdateInterface",
"./ResChecker": "ResChecker",
"./universe/hotfix/LayerFS": "LayerFS"
} ],
HotFixManager: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "80ac3fYpi1AqLHs1GM4OKYv", "HotFixManager");
Object.defineProperty(t, "__esModule", {
value: !0
});
var a = e("../Constants"), o = e("../hotfix/ProcessorHolder"), n = function() {
function e(e, i, t, o, n) {
this._isFirst = !1;
this._isMerge = !1;
this._downloadPriority = 0;
this._isTerminate = !1;
this._isPreferZip = !1;
this._preProgress = 0;
this._processStatus = {};
this._processStatusCount = 0;
this._zipProgressTable = {};
this._unzipProgressTable = {};
this._downloadProgressTable = {};
this._decompressProgressTable = {};
this._hotfixType = a.Constants.HotFixType.NOUPDATE;
this._hotfixInfo = {
oldVersion: "",
newVersion: "",
fileCount: 0,
fileSize: 0
};
this._downloadInfo = {};
this._hotfixTypes = {};
this._isShowZipPro = !0;
this._listener = e;
this._prefix = i;
this._isFirst = t;
this._isMerge = !1 !== o;
this._downloadPriority = Number(n) || 0;
}
e.prototype.preferZip = function() {
this._isPreferZip = !0;
};
e.prototype.start = function(e) {
var i = un.FileInterface.getInstance().getWritablePath() + a.Constants.HotFixPath, t = i + a.Constants.HotfixSubPath;
if (void 0 !== un.FileInterface.getInstance().createDirectory(t)) {
this._config = e;
this._rootPath = i;
this._hotfixPath = t;
this._checkLocalRes();
} else this.onError(void 0, a.Constants.HotFixError.CREATE_HOTFIX_DIRECTORY_FAILED);
};
e.prototype._startHotFix = function() {
for (var e in this._processor) this._processor[e].start();
};
e.prototype._terminate = function(e) {
if (!1 === this._isTerminate) {
this._isTerminate = !0;
void 0 === e && (e = this._processStatus.__FirstKey);
this._releaseProcessors();
if (e && this._hotfixType !== a.Constants.HotFixType.SILENT) {
var i = this._processStatus[e];
this._listener.staticInstance.onFailed(e, i.error, i.msg, i.data);
}
}
};
e.prototype.doUpdate = function(e) {
this._hotfixType = e;
for (var i in this._processor) {
var t = this._hotfixTypes[i], o = this._processStatus[i];
!1 !== o && void 0 !== o || t === a.Constants.HotFixType.NOUPDATE || this._processor[i].update();
}
};
e.prototype.onZipDownloadProgress = function(e, i) {
1 != i || this._zipProgressTable[e] || (this._isShowZipPro = !1);
this._zipProgressTable[e] = i;
this._onProgress("zip");
};
e.prototype.onUnzipProgress = function(e, i) {
this._unzipProgressTable[e] = i;
this._onProgress("unzip");
};
e.prototype.onDownloadProgress = function(e, i) {
this._downloadProgressTable[e] = i;
this._onProgress("generalDownload");
};
e.prototype._onProgress = function(e) {
if (this._hotfixType !== a.Constants.HotFixType.SILENT) {
var i = 0;
for (var t in this._zipProgressTable) i += this._zipProgressTable[t];
var o = 0;
for (var t in this._unzipProgressTable) o += this._unzipProgressTable[t];
var n = 0;
for (var t in this._downloadProgressTable) n += this._downloadProgressTable[t];
var r = (.85 * i + .1 * o + .05 * n) / this._processorCount;
0 == this._isShowZipPro && (r = n / this._processorCount);
var s = !0;
for (var t in this._zipProgressTable) if (this._zipProgressTable[t] < 1) {
s = !1;
break;
}
!1 === s && "zip" !== e && (e = "zip");
this._listener.staticInstance.onProgress(a.Constants.HotFixStage.DOWNLOAD, r, e);
}
};
e.prototype.onDecompressProgress = function(e, i) {
var t = this._decompressProgressTable;
t[e] = i;
var o = 0;
for (var n in t) o += t[n];
o /= this._processorCount;
this._hotfixType !== a.Constants.HotFixType.SILENT && this._listener.staticInstance.onProgress(a.Constants.HotFixStage.DECOMPRESS, o, e);
};
e.prototype.onDecompressSuccess = function(e) {
var i = this._records;
if (!(i.decompressKeys.indexOf(e) >= 0)) {
i.decompressKeys.push(e);
if (i.decompressKeys.length + this._processStatusCount == this._processorCount) {
this._releaseProcessors();
if (this._hotfixType !== a.Constants.HotFixType.SILENT) {
this._listener.staticInstance.onProgress(a.Constants.HotFixStage.DECOMPRESS, 1, e);
un.FileInterface.getInstance().clearChache && un.FileInterface.getInstance().clearChache();
this._listener.staticInstance.onSuccess(e, this._downloadInfo, this._isMerge);
}
}
}
};
e.prototype._releaseProcessors = function() {
for (var e in this._processor) o.default.staticInstance.release(this, e);
};
e.prototype.destroy = function() {
this._releaseProcessors();
};
e.prototype.onError = function(e, i, t, a) {
void 0 === t && (t = void 0);
void 0 === a && (a = void 0);
var o = this._processStatus;
if (void 0 !== e) {
var n = this._records;
if (void 0 === o[e]) {
o[e] = {
error: i,
msg: t,
data: a
};
this._processStatusCount = this._processStatusCount + 1;
1 === this._processStatusCount && (o.__FirstKey = e);
this._processStatusCount != this._processorCount && n.decompressKeys.length + this._processStatusCount != this._processorCount && n.downloadKeys.length + this._processStatusCount != this._processorCount && n.hotfixTypesKeys.length + this._processStatusCount != this._processorCount || this._terminate();
}
} else {
o["__un.hotfix.HotFixManager"] = {
error: i,
msg: t,
data: a
};
this._terminate("__un.hotfix.HotFixManager");
}
};
e.prototype.onDownloadInfo = function(e, i, t) {
var o = this._records;
if (!(o.downloadInfoKeys.indexOf(e) >= 0)) {
o.downloadInfoKeys.push(e);
var n = this._hotfixInfo;
n.fileCount = n.fileCount + i;
n.fileSize = n.fileSize + t;
this._hotfixType !== a.Constants.HotFixType.SILENT && o.downloadInfoKeys.length + this._processStatusCount == this._processorCount && this._listener.staticInstance.onDownloadInfo(n.fileCount, n.fileSize);
}
};
e.prototype.onDownloadSuccess = function(e, i, t) {
var o = this._records;
if (!(o.downloadKeys.indexOf(e) >= 0)) {
this._downloadInfo[e] = {
count: i,
size: t
};
o.downloadKeys.push(e);
if (o.downloadKeys.length + this._processStatusCount === this._processorCount) {
this._hotfixType !== a.Constants.HotFixType.SILENT && this._listener.staticInstance.onProgress(a.Constants.HotFixStage.DOWNLOAD, 1, e);
for (var n in this._processor) {
var r = this._processStatus[n];
if (!1 === r || void 0 === r) if (this._isMerge) this._processor[n].startDecompress(); else {
this._processor[n].saveDownloadFinishTag();
this.onDecompressSuccess(n);
}
}
}
}
};
e.prototype._checkLocalRes = function() {
var e = this._config, i = this._hotfixPath, t = this._rootPath, n = {}, r = 0;
this._processor = n;
this._records = {
hotfixTypesKeys: [],
downloadInfoKeys: [],
downloadKeys: [],
decompressKeys: []
};
this._hotfixTypes = {};
for (var s in e.HotUpdateList) {
var c = i + s + "/";
if (void 0 === un.FileInterface.getInstance().createDirectory(c)) {
this.onError(void 0, a.Constants.HotFixError.CREATE_PROCESS_DIRECTORY_FAILED, e.HotUpdateList[s]);
return;
}
n[s] = o.default.staticInstance.obtain(this, s, t, c, e.HotUpdateList[s], this._prefix, this._downloadPriority, this._isFirst, this._isPreferZip);
r += 1;
}
this._processorCount = r;
var d = !0;
for (var s in n) !1 === n[s].loadManifest() && (d = !1);
d ? this._startHotFix() : this._terminate();
};
e.prototype.onVersionDownload = function(e, i, t, o, n) {
var r, s = this._records;
if (!(s.hotfixTypesKeys.indexOf(e) >= 0)) {
var c = this._hotfixTypes;
if (void 0 !== e && void 0 !== i) {
c[e] = [ i, t, o, n ];
s.hotfixTypesKeys.push(e);
}
if (s.hotfixTypesKeys.length + this._processStatusCount == this._processorCount) {
var d = ((r = {})[a.Constants.HotFixType.NOUPDATE] = 1, r[a.Constants.HotFixType.SILENT] = 2, 
r[a.Constants.HotFixType.NORMAL] = 3, r[a.Constants.HotFixType.FORCE] = 4, r), l = [];
for (var u in c) l.push(c[u][0]);
l.sort(function(e, i) {
return d[e] > d[i] ? 1 : 0;
});
i = l[0];
var _ = void 0;
for (var u in c) c[u][0] === i && (_ = u);
if (_) {
this._hotfixInfo.oldVersion = c[_][1];
this._hotfixInfo.newVersion = c[_][2];
i === a.Constants.HotFixType.NOUPDATE && this._releaseProcessors();
this._listener.staticInstance.onChooseHotFixType(e, i, c[_][1], c[_][2], c[_][3]);
}
}
}
};
return e;
}();
t.default = n;
cc._RF.pop();
}, {
"../Constants": "Constants",
"../hotfix/ProcessorHolder": "ProcessorHolder"
} ],
HotFixProcessor: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "59604bRLflIZYhopKKhJZat", "HotFixProcessor");
Object.defineProperty(t, "__esModule", {
value: !0
});
var a = e("../Constants"), o = e("../hotfix/DiffList"), n = e("../hotfix/Manifest"), r = e("../hotfix/ZipDownloader"), s = e("../Url"), c = e("../Utils"), d = e("./LayerFS"), l = {
None: 0,
ManifestLoaded: 1,
VersionFileDownloading: 2,
ZipDownloading: 3,
Unziping: 4,
Downloading: 5,
Merging: 6,
End: 7,
Error: 8
}, u = function() {
function e(e, i, t, a, o, n, r, s) {
this._isFullZipMode = !1;
this._isHaveMissingFile = !1;
this._useZip = !1;
this._zipRetryCount = 3;
this._startTime = 0;
this._downloadVersionTime = "0";
this._downloadManifestTime = "0";
this._downloadFileTime = 0;
this._unzipTime = 0;
this._mergeTime = 0;
this._diffTime = 0;
this._status = l.None;
this._fixTypeInfo = [];
this._totalFileCount = 0;
this._totalFileSize = 0;
this._extInfo = {
api_url: "",
manifest_url: ""
};
this._cbIDs = [];
this._key = e;
this._rootPath = i;
this._workPath = t;
this._localManifestPath = a;
this._prefix = o;
this._downloadPriority = n;
this._isFirst = r;
this._isPreferZip = s;
this._downloadPath = t + "download/";
this._downloadFinishTagFile = t + "download_finish.tag";
this._zipWorkPath = t + "zip/";
this._unzipPath = this._zipWorkPath + "decompress/";
}
e.prototype.getListener = function() {
return this._listener;
};
e.prototype.isLoadLocalManifestSuccess = function() {
return this._localManifest && this._localManifest.isLoaded();
};
e.prototype._figureOutDownloadFile = function() {
var e, i = s.default.staticInstance.getTime(), t = null !== (e = this._downloadDiffList) && void 0 !== e ? e : this._localManifest.genDiffList(this._projectManifest);
this._downloadDiffList = t;
var a = new n.default(this._workPath + "download.manifest", this._workPath + "download/", !1);
a.isLoaded() && a.applyDiffList(t);
this._diffTime = this._diffTime + s.default.staticInstance.getTime() - i;
this._downloadManifest = a;
};
e.prototype.setManager = function(e) {
this._listener = e;
};
e.prototype.clearManager = function() {
this._listener = void 0;
};
e.prototype.saveDownloadFinishTag = function() {
un.FileInterface.getInstance().writeStringToFile("2333333", this._downloadFinishTagFile);
};
e.prototype.getMonitorUrl = function() {
return this._localManifest.getMonitorUrl();
};
e.prototype.startDecompress = function() {
if (this._status === l.Downloading) {
this._status = l.Merging;
this._startMerge();
} else this._status > l.Merging && this._status < l.Error && this._listener.onDecompressSuccess(this._key);
};
e.prototype._updateLocalManifest = function() {
var e = this._projectManifest.getJson();
this._localManifest.setJson(e);
this._localManifest.saveToFile(!0);
};
e.prototype._startGeneralDownload = function(e, i) {
void 0 === e && (e = void 0);
void 0 === i && (i = void 0);
if (this._status !== l.Unziping) {
if (this._status < l.Downloading) {
this._listener.onZipDownloadProgress(this._key, 1);
this._listener.onUnzipProgress(this._key, 1);
}
if (this._status > l.Downloading && this._status < l.Error) {
this._listener.onDownloadProgress(this._key, 1);
return;
}
if (this._status === l.Downloading) return;
}
this._status = l.Downloading;
if (e) {
this._projectManifest = e;
this._downloadDiffList = i;
this._figureOutDownloadFile();
this._generalDownload();
} else this._downloadProjectManifest();
};
e.prototype.loadManifest = function() {
if (this._status !== l.None) {
if (this._status === l.Error) {
this._fireError();
return !1;
}
return !0;
}
this._status = l.ManifestLoaded;
var e = new n.default(this._prefix + "/" + this._localManifestPath, void 0, !0, this._key);
if (!1 === e.isLoaded()) {
this._onError(a.Constants.HotFixError.LOAD_LOCAL_MANIFEST_ERROR);
return !1;
}
this._localManifest = e;
var i = this._workPath, t = i + "project.manifest";
if (!1 === this._isFirst) {
var o = new n.default(t, void 0, !1);
if (!1 === o.isLoaded()) {
un.FileInterface.getInstance().removeDirectory(i);
this._onError(a.Constants.HotFixError.NEED_RESTART, i);
return !1;
}
this._localManifest = o;
return !0;
}
e.setFileAndRootPath(t);
e.saveToFile(!0);
this._localManifest = e;
return !0;
};
e.prototype._downloadProjectManifest = function() {
var e = this, i = this._versionManifest.getManifestUrl(), t = this._versionManifest.getProjectMd5();
if (null != i) {
var o = i.length;
if (0 !== o) {
var n = 2 * o, r = 0, s = this._workPath + "project.manifest.temp";
this._versionDown = un.Downloader2.getInstance();
this._cbIDs[this._cbIDs.length] = this._versionDown.addListener(function(c, d, l, u) {
r += 1;
if (l > 0) if (r === n) {
e._downloadManifestTime = d;
e._extInfo.manifest_url = i[(r - 1) % o];
e._versionDown.removeListener(e._cbIDs[e._cbIDs.length - 1]);
e._onError(a.Constants.HotFixError.DOWNLOAD_PROJJECT_MANIFEST_FAILED, u);
} else {
e._versionDown.add(i[r % o], s, t, 0, 0, 0, !1, !1, !1, 2147483647, "", e._cbIDs[e._cbIDs.length - 1]);
e._versionDown.commit();
} else {
e._versionDown.removeListener(e._cbIDs[e._cbIDs.length - 1]);
e._downloadManifestTime = d;
e._extInfo.manifest_url = i[(r - 1) % o];
e._onProjectDownload(s);
}
});
this._versionDown.add(i[0], s, t, 0, 0, 0, !1, !1, !1, 2147483647, "", this._cbIDs[this._cbIDs.length - 1]);
this._versionDown.commit();
} else this._onError(a.Constants.HotFixError.NOT_FIND_PROJECT_MANIFEST_URL);
} else this._onError(a.Constants.HotFixError.NOT_FIND_PROJECT_MANIFEST_URL);
};
e.prototype._onProjectDownload = function(e) {
var i = new n.default(e, void 0, !1);
if (!1 !== i.isLoaded()) {
this._projectManifest = i;
this._figureOutDownloadFile();
var t = this._downloadDiffList.getTotalDownloadFileCountAndSize();
this._totalFileCount = this._totalFileCount + t.count;
this._totalFileSize = this._totalFileSize + t.size;
!1 === this._useZip && this._listener.onDownloadInfo(this._key, t.count, t.size);
this._generalDownload();
} else this._onError(a.Constants.HotFixError.LOAD_PROJECT_MANIFEST_FAILED);
};
e.prototype._startZipDownload = function() {
var e = this, i = this._isFullZipMode && this._versionManifest.getFullZipList() || this._versionManifest.getZipList();
un.FileInterface.getInstance().removeDirectory(this._unzipPath);
var t = {
onProgress: function(i) {
e._listener.onZipDownloadProgress(e._key, i);
},
onSuccess: function(i, t) {
e._downloadFileTime = t;
e._startUnZip(i);
},
onError: function() {
e._startGeneralDownload();
}
};
new r.ZipDownloader(i.url, i.size, this._zipWorkPath, this._downloadPriority, t).start();
};
e.prototype.getExtInfo = function() {
this._extInfo.api_url && (this._extInfo.api_url = s.default.staticInstance.rmtail(this._extInfo.api_url));
this._extInfo.manifest_url && (this._extInfo.manifest_url = s.default.staticInstance.rmtail(this._extInfo.manifest_url));
return JSON.stringify(this._extInfo);
};
e.prototype._onError = function(e, i, t) {
this._status = l.Error;
this._errInfo = {
error: e,
msg: i,
data: t
};
this._report();
this._listener.onError(this._key, e, i, t);
};
e.prototype._fireError = function() {
if (this._errInfo) {
var e = this._errInfo;
this._listener.onError(this._key, e.error, e.msg, e.data);
}
};
e.prototype.getReportInfo = function() {
var e = this._localManifest;
return {
env: e.getEnv(),
appid: e.getAppId(),
channel: e.getChannel(),
engine_ver: e.getEngineVer()
};
};
e.prototype.getCostTime = function() {
var e = {
total: (this._startTime, s.default.staticInstance.getTime() - this._startTime),
api: this._downloadVersionTime,
cdn: this._downloadFileTime,
manifest: this._downloadManifestTime.toString()
};
return JSON.stringify(e);
};
e.prototype._checkZipFile = function() {
var e = this._unzipPath + "project.manifest", i = new n.default(e, void 0, !1);
if (!1 !== i.isLoaded()) {
var t = this._unzipPath, r = s.default.staticInstance.getTime(), c = new o.default(), l = this._localManifest.genDiffList(i);
l.foreach(function(e, i) {
i.diffType !== a.Constants.FileDiffType.DELETE && !1 === d.default.staticInstance.isAloneFileExist(t + e) && c.add(e, i.name, i.zipMd5, i.size, i.diffType);
});
c.foreach(function(e) {
l.remove(e);
});
this._diffTime = this._diffTime + s.default.staticInstance.getTime() - r;
this._zipDiffList = l;
this._startGeneralDownload(i, c);
} else this._startGeneralDownload();
};
e.prototype._startUnZip = function(e) {
var i = this;
this._status = l.Unziping;
var t = s.default.staticInstance.getTime();
this._unZipun = new un.Unzipper();
this._unZipun.setListener(function(a, o, n, r) {
if (r >= 0) i._listener.onUnzipProgress(i._key, r); else {
i._unzipTime = s.default.staticInstance.getTime() - t;
if (o > 0) if (i._isPreferZip && i._zipRetryCount > 0) {
i._zipRetryCount = i._zipRetryCount - 1;
un.FileInterface.getInstance().removeDirectory(i._zipWorkPath);
i._startZipDownload();
} else {
i._listener.onUnzipProgress(i._key, 1);
i._startGeneralDownload();
} else {
un.FileInterface.getInstance().removeFile(e);
i._listener.onUnzipProgress(i._key, 1);
i._checkZipFile();
}
}
});
this._unZipun.add(e, this._unzipPath, "");
this._unZipun.removeWhenAllTaskComplete();
};
e.prototype.update = function() {
if (this._status === l.VersionFileDownloading) {
this._status = l.ZipDownloading;
un.FileInterface.getInstance().removeFile(this._downloadFinishTagFile);
var e = !0;
this._localManifest.isForbidZip() && (e = !1);
var i = this._versionManifest.getZipList();
if (e && i && un.MergeFile && (n = i.url) && n.length > 0) {
this._useZip = !0;
var t = 1, a = i.size;
this._totalFileCount = t;
this._totalFileSize = a;
this._listener.onDownloadInfo(this._key, t, a);
this._startZipDownload();
return;
}
if (e && this._isHaveMissingFile && this._localManifest.getFoundFileCount() < 8) {
var o = this._versionManifest.getFullZipList();
if (o && un.MergeFile) {
var n;
if ((n = o.url) && n.length > 0) {
this._useZip = !0;
this._isFullZipMode = !0;
t = 1, a = o.size;
this._totalFileCount = t;
this._totalFileSize = a;
this._listener.onDownloadInfo(this._key, t, a);
this._startZipDownload();
return;
}
}
}
this._startGeneralDownload();
} else if (this._status < l.Error) {
if (this._status > l.ZipDownloading) {
this._listener.onDownloadInfo(this._key, this._totalFileCount, this._totalFileSize);
this._listener.onZipDownloadProgress(this._key, 1);
}
this._status > l.Unziping && this._listener.onUnzipProgress(this._key, 1);
if (this._status > l.Downloading) {
this._listener.onDownloadProgress(this._key, 1);
this._listener.onDownloadSuccess(this._key, 0, 0);
}
}
};
e.prototype._startDelete = function() {
var e = this, i = this._rootPath, t = {};
this._useZip && this._zipDiffList && this._zipDiffList.foreach(function(o, n) {
if (n.diffType == a.Constants.FileDiffType.DELETE) {
var r = i + o;
if (!1 === d.default.staticInstance.isAloneFileExist(r) || un.FileInterface.getInstance().removeFile(r)) {
e._localManifest.removeFile(o);
e._localManifest.saveToFile();
} else t[Object.keys(t).length + 1] = o;
}
});
this._downloadDiffList && this._downloadDiffList.foreach(function(o, n) {
if (n.diffType == a.Constants.FileDiffType.DELETE) {
var r = i + o;
if (!1 === d.default.staticInstance.isAloneFileExist(r) || un.FileInterface.getInstance().removeFile(r)) {
e._localManifest.removeFile(o);
e._localManifest.saveToFile();
} else t[Object.keys(t).length + 1] = o;
}
});
Object.keys(t).length > 0 ? this._localManifest.saveToFile(!0) : this._updateLocalManifest();
};
e.prototype._startMerge = function() {
var e = this, i = this._rootPath, t = this._unzipPath, o = this._downloadPath, n = this._localManifest, r = this._projectManifest, c = !0, d = "", u = s.default.staticInstance.getTime();
this._useZip && this._zipDiffList && this._zipDiffList.foreach(function(e, o) {
if (c && o.diffType !== a.Constants.FileDiffType.DELETE) if (un.FileInterface.getInstance().moveFile(t + e, i + e)) {
var s = r.getFile(e);
n.addFile(e, s);
n.saveToFile();
} else {
d = e;
c = !1;
}
});
if (this._downloadManifest) {
this._downloadManifest.foreachFileList(function(t) {
if (c) {
if (un.FileInterface.getInstance().moveFile(o + t, i + t)) {
var a = e._downloadManifest.getFile(t);
e._localManifest.addFile(t, a);
e._localManifest.saveToFile();
} else {
d = t;
c = !1;
}
e._downloadManifest.removeFile(t);
e._downloadManifest.saveToFile();
}
});
this._downloadManifest.saveToFile(!0);
}
this._startDelete();
this._mergeTime = s.default.staticInstance.getTime() - u;
if (c) {
un.FileInterface.getInstance().removeDirectory(o);
un.FileInterface.getInstance().removeDirectory(this._zipWorkPath);
this._status = l.End;
this._report();
this._listener.onDecompressSuccess(this._key);
} else this._onError(a.Constants.HotFixError.MOVE_FILE_ERROR, d);
};
e.prototype._report = function() {};
e.prototype._compareVersion = function(e, i) {
return c.Utils.staticInstance.compareVersion(e, i, 4);
};
e.prototype._onVersionDownload = function(e) {
var i = new n.default(e, void 0, !1);
if (!1 !== i.isLoaded()) {
this._versionManifest = i;
var t = i.getTipMsg(), o = this._localManifest.getVersion(), r = i.getVersion();
if (this._compareVersion(o, r) || this._isHaveMissingFile && o == r) {
var s = this._isHaveMissingFile && a.Constants.HotFixType.FORCE || i.getUpdateType();
this._fixTypeInfo = [ s, o, r, t ];
this._listener.onVersionDownload(this._key, s, o, r, t);
} else {
var c = a.Constants.HotFixType.NOUPDATE;
this._fixTypeInfo = [ c, o, r, t ];
this._report();
this._listener.onVersionDownload(this._key, a.Constants.HotFixType.NOUPDATE, o, r, t);
}
} else this._onError(a.Constants.HotFixError.LOAD_VERSION_FILE_FAILED);
};
e.prototype._generalDownload = function() {
var e = this, i = this._downloadDiffList;
if (0 != i.getCount()) {
var t = this._downloadPath;
un.FileInterface.getInstance().createDirectory(t);
var o = this._projectManifest.getFileUrl(), n = o.length, r = 0, c = 5 * n, d = o[r], l = 0, u = 0, _ = 0, m = 0, h = 0, p = {}, g = s.default.staticInstance.getTime();
this._generalDown = un.Downloader2.getInstance();
this._cbIDs[this._cbIDs.length] = this._generalDown.addListener(function(f, I, N, y) {
h += 1;
if (N > 0) p[f] = y; else {
var b = e._projectManifest.getFile(f);
e._downloadManifest.addFile(f, b);
e._downloadManifest.saveToFile();
i.remove(f);
_ += 1;
e._listener.onDownloadProgress(e._key, _ / u);
}
if (h === m) if (_ === u) {
e._downloadFileTime = s.default.staticInstance.getTime() - g;
e._downloadManifest.saveToFile(!0);
e._generalDown.removeListener(e._cbIDs[e._cbIDs.length - 1]);
e._listener.onDownloadProgress(e._key, 1);
e._listener.onDownloadSuccess(e._key, u, l);
} else if (c > 0) {
c -= 1;
m = 0;
h = 0;
d = o[(r = r % n + 1) - 1];
var w = "?rand=" + s.default.staticInstance.getTime();
for (var v in p) {
var A = i.get(v);
e._generalDown.add(d + A.name + w, t + v, A.zipMd5, 0, 0, 0, !1, !1, !1, e._downloadPriority, v, e._cbIDs[e._cbIDs.length - 1]);
m += 1;
}
p = {};
e._generalDown.commit();
} else {
e._generalDown.removeListener(e._cbIDs[e._cbIDs.length - 1]);
e._downloadManifest.saveToFile(!0);
e._downloadFileTime = s.default.staticInstance.getTime() - g;
e._onError(a.Constants.HotFixError.DOWNLOAD_FAILED, y, p);
}
});
var f = "?rand=" + s.default.staticInstance.getTime();
i.foreach(function(i, o) {
if (o.diffType !== a.Constants.FileDiffType.DELETE) {
e._generalDown.add(d + o.name + f, t + i, o.zipMd5, 0, 0, 0, !1, !1, !1, e._downloadPriority, i, e._cbIDs[e._cbIDs.length - 1]);
u += 1;
l += o.size;
}
});
m = u;
if (0 == u) {
this._generalDown.removeListener(this._cbIDs[this._cbIDs.length - 1]);
this._listener.onDownloadProgress(this._key, 1);
this._listener.onDownloadSuccess(this._key, 0, 0);
} else this._generalDown.commit();
} else {
this._listener.onDownloadProgress(this._key, 1);
this._listener.onDownloadSuccess(this._key, 0, 0);
}
};
e.prototype.start = function() {
var e = this;
if (this._status === l.ManifestLoaded) {
this._status = l.VersionFileDownloading;
var i = this._localManifest.getUpdateUrl(), t = i.length;
if (void 0 !== i && 0 != t) {
this._isHaveMissingFile = this._localManifest.isHaveMissingFile();
for (var o = {
ip: un.Device.getIp(),
device_code: "",
os: un.Device.getOsName(),
hardware: un.Device.getDeviceName(),
res_status: this._isHaveMissingFile ? "0" : "1"
}, n = [], r = 0; r < t; r++) n.push(s.default.staticInstance.generate(i[r], o));
this.shuffle(n);
this._startTime = s.default.staticInstance.getTime();
var c = 2 * t, d = 0, u = this._workPath + "version.manifest";
this._normalDown = un.Downloader2.getInstance();
this._cbIDs[this._cbIDs.length] = this._normalDown.addListener(function(i, o, r, s) {
d += 1;
if (r > 0) if (d === c) {
e._downloadVersionTime = o;
e._extInfo.api_url = n[(d - 1) % t];
e._normalDown.removeListener(e._cbIDs[e._cbIDs.length - 1]);
e._onError(a.Constants.HotFixError.DOWNLOAD_VERSION_FILE_FAILED, s);
} else {
e._normalDown.add(n[d % t], u, "", 0, 0, 0, !1, !0, !1, 2147483647, "", e._cbIDs[e._cbIDs.length - 1]);
e._normalDown.commit();
} else {
e._downloadVersionTime = o;
e._extInfo.api_url = n[(d - 1) % t];
e._normalDown.removeListener(e._cbIDs[e._cbIDs.length - 1]);
e._onVersionDownload(u);
}
});
this._normalDown.add(n[0], u, "", 0, 0, 0, !1, !0, !1, 2147483647, "", this._cbIDs[this._cbIDs.length - 1]);
this._normalDown.commit();
} else this._onError(a.Constants.HotFixError.NOT_FIND_VERSION_URL);
} else if (this._fixTypeInfo) {
var _ = this._fixTypeInfo;
this._listener.onVersionDownload(this._key, _[0], _[1], _[2], _[3]);
}
};
e.prototype.shuffle = function(e) {
if (null != e) for (var i, t = e.length; t >= 2; t--) {
i = Math.floor(Math.random() * t + 1);
var a = e[t];
e[t] = e[i];
e[i] = a;
}
};
e.prototype.setChangeChannelData = function(e, i, t, a) {
this._status = e;
this._versionManifest = i;
this._isHaveMissingFile = a;
this._localManifest = t;
};
return e;
}();
t.default = u;
cc._RF.pop();
}, {
"../Constants": "Constants",
"../Url": "Url",
"../Utils": "Utils",
"../hotfix/DiffList": "DiffList",
"../hotfix/Manifest": "Manifest",
"../hotfix/ZipDownloader": "ZipDownloader",
"./LayerFS": "LayerFS"
} ],
HotupdateDefine: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "7c462zseGNKu5FbyOYqAjPz", "HotupdateDefine");
var a = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
t.SDKBaseEx = t.ILoginUIController = t.IH5LoginUIController = t.IStatusController = t.IMainController = t.ISpecialChannel = t.SpecicalChannelType = t.HotupdateBundle = void 0;
var o = e("../../framework/commonfunction/UtilFunction"), n = e("../../framework/utils/LocalStorage"), r = e("../basic/define/AppPackageDefine"), s = e("./universe/hotfix/LayerFS"), c = e("./universe/Utils"), d = function() {
function e() {}
a([ qg.Frame.ViewName("HotupdateView") ], e, "HotupdateView", void 0);
return a([ qg.Frame.Bundle("hotupdateBundle") ], e);
}();
t.HotupdateBundle = d;
(function(e) {
e[e.Null = 0] = "Null";
e[e.LaoYou = 1] = "LaoYou";
e[e.BuYuWang = 2] = "BuYuWang";
})(t.SpecicalChannelType || (t.SpecicalChannelType = {}));
var l = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.ISpecialChannel = l;
var u = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.IMainController = u;
var _ = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.IStatusController = _;
var m = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.IH5LoginUIController = m;
var h = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.ILoginUIController = h;
(function(e) {
e.isNativeAndroid = function() {
return cc.sys.isNative && cc.sys.os === cc.sys.OS_ANDROID;
};
e.isSupportDelayInitGXFWSDK = function() {
if (e.isNativeIOS()) {
var i = jsb.reflection.callStaticMethod("ToolFunction", "getAppVersion");
return c.Utils.staticInstance.compareVersion("1.18.15", i, 3);
}
return !1;
};
e.isNativeIOS = function() {
return cc.sys.isNative && cc.sys.os === cc.sys.OS_IOS;
};
e.reqInitGXFWSDK = function() {
0 != e.isSupportDelayInitGXFWSDK() && e.isNativeIOS() && jsb.reflection.callStaticMethod("ToolFunction", "initSDK");
};
e.getGameLogo = function(i) {
if (i) {
var t = s.default.staticInstance.getAndLogo();
t ? s.default.staticInstance.setFguiImgByUrl(i, t) : e.isNativeAndroid() ? i.url = "https://bfly.mengyoutech.com/icon/loginLogo/" + un.Device.getPackageName() + ".png?update=1" : i.url = "ui://hotupdateBundle/login_logo";
}
};
e.getGameBg = function() {
var i, t = 0;
if (e.isNativeAndroid()) {
var a = un.Device.getPackageName(), s = ((i = {})[r.AppPackageName.TTI_GUILIN] = 900185, 
i[r.AppPackageName.TTI_HAINAN] = 900186, i[r.AppPackageName.TTI_GUANGXI] = 900187, 
i[r.AppPackageName.TTI_ANHUI] = 900188, i[r.AppPackageName.TTI_LIUZHOU] = 900189, 
i[r.AppPackageName.TTI_SICHUAN] = 900190, i);
t = s[a] ? s[a] : +g.lobbyid;
}
0 == t && (t = n.default.staticInstance.get("last_Choose_lobbyid", 0));
return r.OriginBgByLobbyid.includes(t) ? o.default.staticInstance.getCrossUrl() + "/icon/loginBg/bg_" + t + ".jpg" : "ui://hotupdateBundle/commonback";
};
e.isWeiXin = function() {
return !cc.sys.isNative && -1 != window.navigator.userAgent.toLowerCase().indexOf("micromessenger");
};
})(t.SDKBaseEx || (t.SDKBaseEx = {}));
cc._RF.pop();
}, {
"../../framework/commonfunction/UtilFunction": "UtilFunction",
"../../framework/utils/LocalStorage": "LocalStorage",
"../basic/define/AppPackageDefine": "AppPackageDefine",
"./universe/Utils": "Utils",
"./universe/hotfix/LayerFS": "LayerFS"
} ],
HotupdateInterface: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "c8830yEgWRJTbSLrlc5tPnN", "HotupdateInterface");
Object.defineProperty(t, "__esModule", {
value: !0
});
t.SHotupdate = void 0;
t.SHotupdate = {
showProgress: "showProgress",
showTipText: "showTipText",
enterGame: "enterGame",
showVersion: "showVersion",
updateFail: "updateFail",
updateSize: "updateSize"
};
cc._RF.pop();
}, {} ],
LayerFS: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "91f186PXVBFK76bqaER1nMU", "LayerFS");
Object.defineProperty(t, "__esModule", {
value: !0
});
var a = e("../../../../framework/commonfunction/UtilFunction"), o = e("../../../basic/define/AppPackageDefine"), n = e("../Constants"), r = function() {
function e() {
this._docRootPath = window.un && un.FileInterface.getInstance().getWritablePath() + n.Constants.HotFixPath;
}
Object.defineProperty(e, "staticInstance", {
get: function() {
this._ins || (this._ins = new e());
return this._ins;
},
enumerable: !1,
configurable: !0
});
e.prototype.setFguiImgByUrl = function(e, i, t) {
if (i) if (i.startsWith("ui://")) {
e.icon = i;
null == t || t();
} else {
e.uurl = i;
cc.assetManager.loadRemote(i, {
ext: ".png"
}, function(a, o) {
cc.isValid(e) && o && o.nativeUrl && e.uurl == i && (e.texture = new cc.SpriteFrame(o));
null == t || t();
});
} else null == t || t();
};
e.prototype.getAndLogo = function() {
var i = "";
if (cc.sys.isNative && window.un) {
var t = [ o.AppPackageName.TTI_GUILIN, o.AppPackageName.TTI_HAINAN, o.AppPackageName.TTI_GUANGXI, o.AppPackageName.TTI_ANHUI, o.AppPackageName.TTI_LIUZHOU, o.AppPackageName.TTI_SICHUAN, o.AppPackageName.TTI_FANGCHENGGANG, o.AppPackageName.TTI_TAIZHOU ], r = un.Device.getPackageName();
if (t.includes(r)) {
var s = g.areaName;
return a.default.staticInstance.getCrossUrl() + "/icon/loginLogo/login_logo_" + s + ".png?update=1";
}
var c = un.FileInterface.getInstance().getWritablePath() + n.Constants.HotFixPath, d = "" + n.Constants.LocalImgPath + r + "_new.png";
e.staticInstance.isAloneFileExist(d) ? i = d : e.staticInstance.isAloneFileExist(c + d) && (i = c + d);
}
return i;
};
e.prototype._fullPath = function() {
return jsb.fileUtils.getWritablePath() + "localCache/";
};
e.prototype.setItem = function(e, i) {
jsb.fileUtils.writeStringToFile(JSON.stringify(i), this._fullPath() + e);
};
e.prototype.getItem = function(e, i) {
var t = jsb.fileUtils.getStringFromFile(this._fullPath() + e);
if (null != t) try {
return JSON.parse(t);
} catch (e) {
return t;
}
return i;
};
e.prototype.isAloneFileExist = function(e) {
if (un.FileInterface.getInstance().isAloneFileExist) {
if (un.FileInterface.getInstance().isAloneFileExist(e)) return !0;
} else if (un.FileInterface.getInstance().isFileExist(e)) return !0;
return !1;
};
e.prototype.isFileExist = function(e) {
return !!un.FileInterface.getInstance().isFileExist(e) || !!un.FileInterface.getInstance().isFileExist(this._docRootPath + e);
};
e.prototype.removeFile = function(e) {
return !1 !== un.FileInterface.getInstance().removeFile(e) && !1 !== un.FileInterface.getInstance().removeFile(this._docRootPath + e);
};
e._ins = null;
return e;
}();
t.default = r;
cc._RF.pop();
}, {
"../../../../framework/commonfunction/UtilFunction": "UtilFunction",
"../../../basic/define/AppPackageDefine": "AppPackageDefine",
"../Constants": "Constants"
} ],
LocalStorage: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "491e8W3XgJBxqefyARHe9ve", "LocalStorage");
Object.defineProperty(t, "__esModule", {
value: !0
});
var a = function() {
function e() {
this.cache = new Map();
this.cache.clear();
}
Object.defineProperty(e, "staticInstance", {
get: function() {
this._ins || (this._ins = new e());
return this._ins;
},
enumerable: !1,
configurable: !0
});
e.prototype.setString = function(e, i, t) {
var a = this.getWholeInfoByKey(e, i, t);
qg.StorageTool.setItem(a.fullKey, a.value);
};
e.prototype.getString = function(e, i, t) {
void 0 === i && (i = "");
var a = this.getWholeInfoByKey(e, i, t);
return qg.StorageTool.getItem(a.fullKey) || a.value;
};
e.prototype.set = function(e, i, t) {
var a = this.getWholeInfoByKey(e, i, t);
this.cache.set(a.fullKey, JSON.stringify(a.value));
qg.StorageTool.setItem(a.fullKey, JSON.stringify(a.value));
};
e.prototype.get = function(e, i, t) {
var a = this.getWholeInfoByKey(e, i, t);
if (this.cache.has(a.fullKey)) {
var o = this.cache.get(a.fullKey);
if (null != o) try {
return JSON.parse(o);
} catch (e) {
return o;
}
}
var n = qg.StorageTool.getItem(a.fullKey);
if (n) try {
return JSON.parse(n);
} catch (i) {
this.set(e, n);
return n;
}
return a.value;
};
e.prototype.remove = function(e, i) {
var t = this.getWholeInfoByKey(e, null, i);
qg.StorageTool.removeItem(t.fullKey);
};
e.prototype.getData = function(e, i) {
var t = this.getWholeInfoByKey(e, null, i), a = qg.StorageTool.getItem(t.fullKey);
return a ? a.startsWith("{") || a.startsWith("[") ? JSON.parse(a) : a : null;
};
e.prototype.setData = function(e, i, t) {
var a = this.getWholeInfoByKey(e, i, t);
qg.StorageTool.setItem(a.fullKey, "object" == typeof a.value ? JSON.stringify(a.value) : a.value.toString());
};
e.prototype.delData = function(e, i) {
var t = this.getWholeInfoByKey(e, null, i);
qg.StorageTool.removeItem(t.fullKey);
};
e.prototype.delAllData = function() {
qg.StorageTool.removeAllItem();
};
e.prototype.getWholeInfoByKey = function(e, i) {
return {
fullKey: e,
value: i
};
};
e.prototype.clearCacheByKey = function(e) {
var i;
null === (i = this.cache) || void 0 === i || i.delete(e);
};
e._ins = null;
return e;
}();
t.default = a;
cc._RF.pop();
}, {} ],
MainController: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "a3249Q1WXFEyLEsHIPfoqgx", "MainController");
var a, o = this && this.__extends || (a = function(e, i) {
return (a = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(e, i) {
e.__proto__ = i;
} || function(e, i) {
for (var t in i) Object.prototype.hasOwnProperty.call(i, t) && (e[t] = i[t]);
})(e, i);
}, function(e, i) {
a(e, i);
function t() {
this.constructor = e;
}
e.prototype = null === i ? Object.create(i) : (t.prototype = i.prototype, new t());
}), n = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
}, r = this && this.__awaiter || function(e, i, t, a) {
return new (t || (t = Promise))(function(o, n) {
function r(e) {
try {
c(a.next(e));
} catch (e) {
n(e);
}
}
function s(e) {
try {
c(a.throw(e));
} catch (e) {
n(e);
}
}
function c(e) {
e.done ? o(e.value) : (i = e.value, i instanceof t ? i : new t(function(e) {
e(i);
})).then(r, s);
var i;
}
c((a = a.apply(e, i || [])).next());
});
}, s = this && this.__generator || function(e, i) {
var t, a, o, n, r = {
label: 0,
sent: function() {
if (1 & o[0]) throw o[1];
return o[1];
},
trys: [],
ops: []
};
return n = {
next: s(0),
throw: s(1),
return: s(2)
}, "function" == typeof Symbol && (n[Symbol.iterator] = function() {
return this;
}), n;
function s(e) {
return function(i) {
return c([ e, i ]);
};
}
function c(n) {
if (t) throw new TypeError("Generator is already executing.");
for (;r; ) try {
if (t = 1, a && (o = 2 & n[0] ? a.return : n[0] ? a.throw || ((o = a.return) && o.call(a), 
0) : a.next) && !(o = o.call(a, n[1])).done) return o;
(a = 0, o) && (n = [ 2 & n[0], o.value ]);
switch (n[0]) {
case 0:
case 1:
o = n;
break;

case 4:
r.label++;
return {
value: n[1],
done: !1
};

case 5:
r.label++;
a = n[1];
n = [ 0 ];
continue;

case 7:
n = r.ops.pop();
r.trys.pop();
continue;

default:
if (!(o = r.trys, o = o.length > 0 && o[o.length - 1]) && (6 === n[0] || 2 === n[0])) {
r = 0;
continue;
}
if (3 === n[0] && (!o || n[1] > o[0] && n[1] < o[3])) {
r.label = n[1];
break;
}
if (6 === n[0] && r.label < o[1]) {
r.label = o[1];
o = n;
break;
}
if (o && r.label < o[2]) {
r.label = o[2];
r.ops.push(n);
break;
}
o[2] && r.ops.pop();
r.trys.pop();
continue;
}
n = i.call(e, r);
} catch (e) {
n = [ 6, e ];
a = 0;
} finally {
t = o = 0;
}
if (5 & n[0]) throw n[1];
return {
value: n[0] ? n[1] : void 0,
done: !0
};
}
}, c = this && this.__values || function(e) {
var i = "function" == typeof Symbol && Symbol.iterator, t = i && e[i], a = 0;
if (t) return t.call(e);
if (e && "number" == typeof e.length) return {
next: function() {
e && a >= e.length && (e = void 0);
return {
value: e && e[a++],
done: !e
};
}
};
throw new TypeError(i ? "Object is not iterable." : "Symbol.iterator is not defined.");
};
Object.defineProperty(t, "__esModule", {
value: !0
});
var d = e("../basic/manager/PopManager"), l = e("../Define"), u = e("../hotupdate/HotupdateDefine"), _ = e("./MainInterface"), m = function(e) {
o(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.initOnLoad = function() {
return r(this, void 0, void 0, function() {
var e, i, t, a, o, n, r, d, l;
return s(this, function() {
this.doProxy(_.SInitConfig, function(e) {
null != e.SStartInitConfig && e.SStartInitConfig();
});
e = un.FileInterface.getInstance().getWritablePath() + "/gamecaches/cacheList.json";
if (un.FileInterface.getInstance().isFileExist(e) && (i = un.FileInterface.getInstance().getStringFromFile(e)) && (t = JSON.parse(i)) && t.files) {
a = t.files;
try {
for (o = c(Object.keys(a)), n = o.next(); !n.done; n = o.next()) -1 != (r = n.value).indexOf("config.json") && un.FileInterface.getInstance().isFileExist(a[r].url) && un.FileInterface.getInstance().removeFile(a[r].url);
} catch (e) {
d = {
error: e
};
} finally {
try {
n && !n.done && (l = o.return) && l.call(o);
} finally {
if (d) throw d.error;
}
}
}
return [ 2 ];
});
});
};
i.prototype.startHotupdate = function() {
d.default.staticInstance.replaceFguiLayer([ "hotupdateBundle:hotupdateBundle" ], "HotupdateUI", "FguiHotUpdateView");
};
i.prototype.loadExtScripts = function() {
this.getImpl(u.IStatusController).enterLoginUI(!0);
};
i.prototype.notifyWinResize = function() {};
return n([ qg.Frame.Module({
implements: [ u.IMainController ],
selector: null,
lifeCycle: [ l.Life.All ]
}) ], i);
}(qg.Frame.ModuleBase);
t.default = m;
cc._RF.pop();
}, {
"../Define": "Define",
"../basic/manager/PopManager": "PopManager",
"../hotupdate/HotupdateDefine": "HotupdateDefine",
"./MainInterface": "MainInterface"
} ],
MainInterface: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "0a7e9Rcr9pET6dZQPJwHfB+", "MainInterface");
var a = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
t.lastFPSChooseKey = t.SGameEventChanged = t.SInitConfig = t.FPS_MODE_SET = void 0;
t.FPS_MODE_SET = {
LOW: 30,
MID: 48,
HIGH: 60
};
var o = function() {
function e() {}
return a([ qg.Frame.Subject ], e);
}();
t.SInitConfig = o;
var n = function() {
function e() {}
return a([ qg.Frame.Subject ], e);
}();
t.SGameEventChanged = n;
t.lastFPSChooseKey = "lastFPSChooseKey_";
cc._RF.pop();
}, {} ],
Main: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "00788onJX1Dkqt2Px9O9oEu", "Main");
var a, o = this && this.__extends || (a = function(e, i) {
return (a = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(e, i) {
e.__proto__ = i;
} || function(e, i) {
for (var t in i) Object.prototype.hasOwnProperty.call(i, t) && (e[t] = i[t]);
})(e, i);
}, function(e, i) {
a(e, i);
function t() {
this.constructor = e;
}
e.prototype = null === i ? Object.create(i) : (t.prototype = i.prototype, new t());
}), n = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
var r = e("../../framework/utils/LocalStorage"), s = e("../../framework/utils/UtilsInterface"), c = e("../basic/common/AreaNameConfig"), d = e("../basic/define/AppPackageDefine"), l = e("../hotupdate/HotupdateDefine"), u = e("../login/login/chooseArea/ChooseAreaConfig"), _ = e("./MainInterface"), m = cc._decorator.executionOrder, h = function(e) {
o(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
i.prototype.onLoad = function() {
var i, t = this;
window.g = {
areaName: "",
lobbyid: 0
};
if (null != window.un && "" == g.areaName) {
var a = d.AppOpenChooseAreaConfig[un.Device.getPackageName()];
if (null != a && 0 == a.isOpen) g.areaName = c.default.staticInstance.getAreaNameByLobbyId(a.defaultLobbyid); else for (var o in u.PackageListConfig) {
var n = un.Device.getPackageName();
cc.sys.OS_IOS == cc.sys.os && (n = cc.sys.OS_IOS);
if (-1 != (null === (i = u.PackageListConfig[o]) || void 0 === i ? void 0 : i.isOpen.indexOf(n))) {
g.areaName = u.PackageListConfig[o].defaultAreaName;
break;
}
}
}
"" == g.areaName && (g.areaName = "mengqi_hebei");
var m = c.default.staticInstance.getLobbyIdByAreaName(g.areaName);
u.isChildArea(m) ? g.lobbyid = u.getParentAreaData(m).lobbyid : g.lobbyid = m;
var h = r.default.staticInstance.get(_.lastFPSChooseKey, "");
if (h) cc.game.setFrameRate(Number(h)); else {
r.default.staticInstance.set(_.lastFPSChooseKey, _.FPS_MODE_SET.MID);
cc.game.setFrameRate(_.FPS_MODE_SET.MID);
}
e.prototype.onLoad.call(this);
this.getImpl(l.IMainController).initOnLoad();
cc.view.on("canvas-resize", function() {
t.getImpl(s.IScreenAdaptation).resizeWindow();
t.getImpl(l.IMainController).notifyWinResize();
});
this.getImpl(s.IScreenAdaptation).resizeWindow();
this.getImpl(l.IMainController).startHotupdate();
};
return n([ qg.Frame.CustomView({}), m(-1) ], i);
}(qg.Frame.ViewBase);
t.default = h;
cc._RF.pop();
}, {
"../../framework/utils/LocalStorage": "LocalStorage",
"../../framework/utils/UtilsInterface": "UtilsInterface",
"../basic/common/AreaNameConfig": "AreaNameConfig",
"../basic/define/AppPackageDefine": "AppPackageDefine",
"../hotupdate/HotupdateDefine": "HotupdateDefine",
"../login/login/chooseArea/ChooseAreaConfig": "ChooseAreaConfig",
"./MainInterface": "MainInterface"
} ],
Manifest: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "56bb9OGnSZNzJsUvidb2gXX", "Manifest");
Object.defineProperty(t, "__esModule", {
value: !0
});
var a = e("../../HotupdateDefine"), o = e("../Constants"), n = e("../hotfix/DiffList"), r = e("../hotfix/LayerFS"), s = function() {
function e(e, i, t) {
void 0 === i && (i = un.FileInterface.getInstance().getWritablePath() + o.Constants.HotFixPath);
this._curSaveCount = 0;
this._loaded = !1;
this._json = {
file_list: {}
};
this._curSaveCount = 0;
this._loaded = !1;
this._json = {
file_list: {}
};
this._file = e;
this._rootPath = i;
var n = "";
if (t) {
if (void 0 !== e && e.length > 0) {
e = "assets/" + e;
un.FileInterface.getInstance().isFileExist(e) && (n = un.FileInterface.getInstance().getStringFromFile(e));
var s = un.FileInterface.getInstance().getWritablePath() + o.Constants.HotFixPath + e;
un.FileInterface.getInstance().isFileExist(s) && (n = un.FileInterface.getInstance().getStringFromFile(s));
}
} else void 0 !== e && e.length > 0 && r.default.staticInstance.isAloneFileExist(e) && (n = un.FileInterface.getInstance().getStringFromFile(e));
if (n.length) {
this._json = JSON.parse(n);
if (a.SDKBaseEx.isNativeAndroid() && 1 == un.FileInterface.getInstance().isFileExist("ChannelLists.json")) {
var c = un.FileInterface.getInstance().getStringFromFile("ChannelLists.json"), d = JSON.parse(c);
if (null != this._json.version && "1.0.0.0" == this._json.version && null != d && null != d[un.Device.getPackageName()]) {
var l = String(this._json.channel), u = String(d[un.Device.getPackageName()]);
n = n.replace(new RegExp(l, "gu"), u);
this._json = JSON.parse(n);
}
}
void 0 !== this._json && (this._loaded = !0);
}
}
e.prototype.isLoaded = function() {
return this._loaded;
};
e.prototype.setFileAndRootPath = function(e, i) {
void 0 === i && (i = void 0);
this._file = e;
void 0 === i && (this._rootPath = un.FileInterface.getInstance().getWritablePath() + o.Constants.HotFixPath);
this._rootPath = i;
};
e.prototype.getJson = function() {
return this._json;
};
e.prototype.setJson = function(e) {
this._json = e;
};
e.prototype.getAppId = function() {
return this._json.appid;
};
e.prototype.getEngineVer = function() {
return this._json.engine_ver;
};
e.prototype.getUpdateUrl = function() {
return this._json.update_url;
};
e.prototype.setUpdateUrl = function(e) {
this._json.update_url = e;
};
e.prototype.getVersion = function() {
return this._json.version;
};
e.prototype.setVersion = function(e) {
this._json.version = e;
};
e.prototype.getMonitorUrl = function() {
return this._json.monitor_url;
};
e.prototype.setMonitorUrl = function(e) {
this._json.monitor_url = e;
};
e.prototype.getUpdateType = function() {
return this._json.update_type;
};
e.prototype.getTipMsg = function() {
var e;
return null !== (e = this._json.tip_msg) && void 0 !== e ? e : "";
};
e.prototype.getManifestUrl = function() {
return this._json.manifest_url;
};
e.prototype.getProjectMd5 = function() {
return this._json.project_md5;
};
e.prototype.getChannel = function() {
return this._json.channel;
};
e.prototype.getFileUrl = function() {
return this._json.file_url;
};
e.prototype.getFileList = function() {
return this._json.file_list;
};
e.prototype.getZipList = function() {
return this._json.diff_zip;
};
e.prototype.getFullZipList = function() {
return this._json.zip_url;
};
e.prototype.getEnv = function() {
return this._json.env;
};
e.prototype.isForbidZip = function() {
return this._json.forbid_zip;
};
e.prototype.foreachFileList = function(e) {
var i = this.getFileList(), t = {};
for (var a in i) t[a] = i[a];
for (var a in t) e(a, t[a]);
};
e.prototype.getFile = function(e) {
return this.getFileList()[e];
};
e.prototype.removeFile = function(e) {
this.getFileList()[e] = void 0;
};
e.prototype.isHaveMissingFile = function() {
var e = this.getFileList();
if (un.FileInterface.getInstance().isAllFileExist) {
var i = [], t = un.FileInterface.getInstance().getWritablePath() + o.Constants.HotFixPath;
for (var a in e) i.push(a);
return un.FileInterface.getInstance().isAllFileExist(i, t);
}
for (var a in e) if (!1 === r.default.staticInstance.isFileExist(a)) return !0;
return !1;
};
e.prototype.getFoundFileCount = function() {
var e = this.getFileList(), i = 0;
for (var t in e) r.default.staticInstance.isFileExist(t) && (i += 1);
return i;
};
e.prototype.addFile = function(e, i, t, a) {
var o, n;
void 0 === t && (t = void 0);
void 0 === a && (a = void 0);
n = "string" == typeof i ? ((o = {}).name = i, o.md5 = t, o.size = a, o) : i;
this.getFileList()[e] = n;
};
e.prototype.applyDiffList = function(e) {
var i = this.getFileList(), t = this._rootPath, a = {};
for (var n in i) if (r.default.staticInstance.isAloneFileExist(t + n)) {
var s = e.get(n);
if (s && s.diffType !== o.Constants.FileDiffType.DELETE && s.zipMd5 === i[n].md5) {
e.remove(n);
a[n] = i[n];
} else un.FileInterface.getInstance().removeFile(t + n);
}
this._json.file_list = a;
};
e.prototype.saveToFile = function(e) {
void 0 === e && (e = void 0);
if (void 0 !== e) this._curSaveCount = 0; else {
this._curSaveCount = this._curSaveCount + 1;
if (this._curSaveCount < 20) return;
this._curSaveCount = 0;
}
if (void 0 !== this._file) {
var i = JSON.stringify(this._json);
i.length > 0 && un.FileInterface.getInstance().writeStringToFile(i, this._file);
}
};
e.prototype.genDiffList = function(e) {
var i = e.getFileList(), t = this.getFileList(), a = new n.default();
for (var s in t) {
var c = i[s];
c ? c.md5 !== t[s].md5 ? a.add(s, c.name, c.md5, t[s].size, o.Constants.FileDiffType.MODIFY) : 0 == r.default.staticInstance.isFileExist(s) && a.add(s, c.name, c.md5, t[s].size, o.Constants.FileDiffType.ADD) : a.add(s, t[s].name, t[s].md5, t[s].size, o.Constants.FileDiffType.DELETE);
}
for (var s in i) void 0 === t[s] && a.add(s, i[s].name, i[s].md5, i[s].size, o.Constants.FileDiffType.ADD);
return a;
};
return e;
}();
t.default = s;
cc._RF.pop();
}, {
"../../HotupdateDefine": "HotupdateDefine",
"../Constants": "Constants",
"../hotfix/DiffList": "DiffList",
"../hotfix/LayerFS": "LayerFS"
} ],
PopManager: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "dba12k5EztKq6HN7+Iwxg5F", "PopManager");
var a, o = this && this.__values || function(e) {
var i = "function" == typeof Symbol && Symbol.iterator, t = i && e[i], a = 0;
if (t) return t.call(e);
if (e && "number" == typeof e.length) return {
next: function() {
e && a >= e.length && (e = void 0);
return {
value: e && e[a++],
done: !e
};
}
};
throw new TypeError(i ? "Object is not iterable." : "Symbol.iterator is not defined.");
}, n = this && this.__read || function(e, i) {
var t = "function" == typeof Symbol && e[Symbol.iterator];
if (!t) return e;
var a, o, n = t.call(e), r = [];
try {
for (;(void 0 === i || i-- > 0) && !(a = n.next()).done; ) r.push(a.value);
} catch (e) {
o = {
error: e
};
} finally {
try {
a && !a.done && (t = n.return) && t.call(n);
} finally {
if (o) throw o.error;
}
}
return r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
(function(e) {
e[e.dialog = 10] = "dialog";
e[e.toast = 1500] = "toast";
e[e.loading = 1900] = "loading";
})(a || (a = {}));
var r = function() {
function e() {
this._popMap = new Map();
this._seletPrompt = {};
}
Object.defineProperty(e, "staticInstance", {
get: function() {
this._ins || (this._ins = new e());
return this._ins;
},
enumerable: !1,
configurable: !0
});
e.prototype._addView = function(e, i, t) {
var a = this._popMap.get(e);
if (void 0 === a) {
a = new Map();
this._popMap.set(e, a);
}
var o = null == i ? void 0 : i.getComponent(e);
if (o) {
a.set(o.iocGID, t);
return !0;
}
return !1;
};
e.prototype._findView = function(e) {
return qg.IOCPool.global.findObj(e);
};
e.prototype._findNode = function(e) {
var i = this._findView(e);
return i ? i.node : null;
};
e.prototype._closeView = function(e) {
var i, t, a = this._popMap.get(e);
if (void 0 !== a) {
try {
for (var r = o(a), s = r.next(); !s.done; s = r.next()) {
var c = n(s.value, 1)[0], d = this._findNode(c);
if (d && cc.isValid(d)) {
var l = fgui.GObject.cast(d);
l ? l.dispose() : d.destroy();
}
}
} catch (e) {
i = {
error: e
};
} finally {
try {
s && !s.done && (t = r.return) && t.call(r);
} finally {
if (i) throw i.error;
}
}
this._popMap.delete(e);
}
};
e.prototype._closeAllView = function() {
var e, i, t, a;
try {
for (var r = o(this._popMap), s = r.next(); !s.done; s = r.next()) {
var c = n(s.value, 2)[1];
try {
for (var d = (t = void 0, o(c)), l = d.next(); !l.done; l = d.next()) {
var u = n(l.value, 1)[0], _ = this._findNode(u);
if (_ && cc.isValid(_)) {
var m = fgui.GObject.cast(_);
m ? m.dispose() : _.destroy();
}
}
} catch (e) {
t = {
error: e
};
} finally {
try {
l && !l.done && (a = d.return) && a.call(d);
} finally {
if (t) throw t.error;
}
}
}
} catch (i) {
e = {
error: i
};
} finally {
try {
s && !s.done && (i = r.return) && i.call(r);
} finally {
if (e) throw e.error;
}
}
this._popMap.clear();
};
e.prototype._addFgui = function(e, i, t, a) {
void 0 === a && (a = "Canvas");
var o = qg.AssetTool.createFguiObj(e, i, t).ui;
if ("Canvas" == a) fgui.GRoot.inst.addChild(o); else {
var n = fgui.GRoot.inst.getChild(a);
null == n || n.addChild(o);
}
this._addView(t, null == o ? void 0 : o.node, a);
return null == o ? void 0 : o.node;
};
e.prototype.closeLayer = function(e) {
this._closeView(e);
};
e.prototype.clearLayer = function() {
this._closeAllView();
};
e.prototype.getAllLayers = function() {
return this._popMap;
};
e.prototype.getLayer = function(e) {
var i = this._popMap.get(e);
if (void 0 === i) return null;
var t = Array.from(i.keys());
if (0 === t.length) return null;
var a = t[t.length - 1];
return this._findNode(a);
};
e.prototype.hasNode = function(e) {
return null != this._findNode(e);
};
e.prototype.removeLayerFromMap = function(e) {
var i, t, a, r;
try {
for (var s = o(this._popMap), c = s.next(); !c.done; c = s.next()) {
var d = n(c.value, 2), l = d[0], u = d[1];
try {
for (var _ = (a = void 0, o(u)), m = _.next(); !m.done; m = _.next()) {
var h = n(m.value, 1)[0];
this._findNode(h) === e && u.delete(h);
}
} catch (e) {
a = {
error: e
};
} finally {
try {
m && !m.done && (r = _.return) && r.call(_);
} finally {
if (a) throw a.error;
}
}
0 === Array.from(u.keys()).length && this._popMap.delete(l);
}
} catch (e) {
i = {
error: e
};
} finally {
try {
c && !c.done && (t = s.return) && t.call(s);
} finally {
if (i) throw i.error;
}
}
};
e.prototype.setZOrder = function(e, i) {
var t = this, a = this._popMap.get(e);
void 0 !== a && a.forEach(function(e, a) {
var o = t._findNode(a);
o && cc.isValid(o) && (o.zIndex = i);
});
};
e.prototype.getSeletPrompt = function(e) {
return this._seletPrompt[e];
};
e.prototype.setSeletPrompt = function(e, i) {
this._seletPrompt[e] = i;
};
e.prototype.replaceFguiLayer = function(e, i, t) {
var o = this;
this.clearLayer();
qg.AssetTool.loadFguiAsync(e, i, t, "hotupdateBundle").then(function(e) {
var i = e.ui;
fgui.GRoot.inst.getChild("PopRoot") && fgui.GRoot.inst.getChild("PopRoot")._container.addChild(i.node);
o._addView(t, null == i ? void 0 : i.node, "PopRoot");
i.node.zIndex = a.dialog;
});
};
e._ins = null;
return e;
}();
t.default = r;
cc._RF.pop();
}, {} ],
ProcessorHolder: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "97c663kyLZADLAap3aqiZyl", "ProcessorHolder");
Object.defineProperty(t, "__esModule", {
value: !0
});
var a = e("../hotfix/HotFixProcessor"), o = function() {
function e() {
this._processors = {};
this._refCounts = {};
}
Object.defineProperty(e, "staticInstance", {
get: function() {
this._ins || (this._ins = new e());
return this._ins;
},
enumerable: !1,
configurable: !0
});
e.prototype.obtain = function(e, i, t, o, n, r, s, c, d) {
var l = this._processors[i];
if (l) this._refCounts[i] = this._refCounts[i] + 1; else {
l = new a.default(i, t, o, n, r, s, c, d);
this._processors[i] = l;
this._refCounts[i] = 1;
}
l.setManager(e);
return l;
};
e.prototype.clear_processor_listeners = function(e) {
e.getListener() && e.clearManager();
};
e.prototype.release = function(e, i) {
var t = this._processors[i];
if (t) {
var a = this._refCounts[i];
if (a) if (1 == a) {
this.clear_processor_listeners(t);
this._processors[i] = void 0;
this._refCounts[i] = void 0;
} else {
this._refCounts[i] = a - 1;
var o = t.getListener();
o && o.remove(e);
} else {
this.clear_processor_listeners(t);
this._processors[i] = void 0;
}
} else this._refCounts[i] = void 0;
};
e._ins = null;
return e;
}();
t.default = o;
cc._RF.pop();
}, {
"../hotfix/HotFixProcessor": "HotFixProcessor"
} ],
ResChecker: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "9fed6oazjFJpbJ2WVH3z90K", "ResChecker");
var a, o = this && this.__extends || (a = function(e, i) {
return (a = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(e, i) {
e.__proto__ = i;
} || function(e, i) {
for (var t in i) Object.prototype.hasOwnProperty.call(i, t) && (e[t] = i[t]);
})(e, i);
}, function(e, i) {
a(e, i);
function t() {
this.constructor = e;
}
e.prototype = null === i ? Object.create(i) : (t.prototype = i.prototype, new t());
});
Object.defineProperty(t, "__esModule", {
value: !0
});
t.hotfixListener = t.ResEnsureListener = t.ResChecker = void 0;
var n = e("../hotupdate/ResEnsure"), r = e("../hotupdate/universe/Constants"), s = e("../hotupdate/universe/hotfix/HotFixManager"), c = e("../hotupdate/universe/hotfix/Manifest"), d = e("../hotupdate/universe/Utils"), l = e("./HotupdateInterface"), u = e("./universe/hotfix/LayerFS"), _ = {}, m = function() {
function e() {
this._relinkTimes = 0;
this._checkList = {};
this._ensureResCnt = 0;
this._checkCount = 0;
}
Object.defineProperty(e, "staticInstance", {
get: function() {
this._ins || (this._ins = new e());
return this._ins;
},
enumerable: !1,
configurable: !0
});
e.prototype.start = function(e, i, t) {
void 0 === e && (e = !1);
void 0 === i && (i = void 0);
void 0 === t && (t = {});
this._initData(i, t);
this._ensureRes(e);
};
e.prototype._initData = function(e, i) {
this._relinkTimes = 0;
this._checkList = i;
this._listener = e;
this._ensureResCnt = 0;
};
e.prototype._ensureRes = function(e) {
this._ensureResCnt = Object.keys(this._checkList).length;
for (var i in this._checkList) n.default.staticInstance.start(i, e, h);
};
e.prototype._startHotFix = function(e, i) {
void 0 === e && (e = !1);
var t = {
HotUpdateList: i
}, a = new s.default(p, "hotupdate", e, !0, 0);
p.staticInstance._manager = a;
a.preferZip();
a.start(t);
};
e.prototype._parseVersion = function(e) {
return e.match(/[^.]+/gu) || [];
};
e.prototype._downloadCallBack = function(e, i, t, a, o) {
var n = !1;
if ("success" == e) {
for (var r = this._parseVersion(t), s = this._parseVersion(a), c = 0; c < 4; c++) {
r[c] || (r[c] = "0");
s[c] || (s[c] = "0");
}
Number(s[2]) > Number(r[2]) ? n = !0 : Number(s[2]) == Number(r[2]) && Number(s[3]) > Number(r[3]) && (n = !0);
}
_[o] = n;
};
e.prototype.checkHotFix = function(i, t) {
var a = this;
for (var o in i) void 0 !== _[o] && (i[o] = void 0);
e.staticInstance._checkCount = 0;
var n = function(o) {
var n = "1.0.0.0", r = new c.default("hotupdate/" + i[o], void 0, !0, o);
if (r.isLoaded()) {
n = d.Utils.staticInstance.getVersion("hotupdate", o, i[o]);
e.staticInstance._checkCount = e.staticInstance._checkCount + 1;
d.Utils.staticInstance.http_get(r.getUpdateUrl()[1], function(i, r, s, c) {
e.staticInstance._checkCount = e.staticInstance._checkCount - 1;
if ("SUCCESS" == c) {
var d = JSON.parse(r);
a._downloadCallBack("success", s, n, d.version, o);
}
0 == e.staticInstance._checkCount && t();
});
}
};
for (var r in i) n(r);
0 === e.staticInstance._checkCount && t();
};
e._ins = null;
return e;
}();
t.ResChecker = m;
var h = function(e) {
o(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
Object.defineProperty(i, "staticInstance", {
get: function() {
this._ins || (this._ins = new i());
return this._ins;
},
enumerable: !1,
configurable: !0
});
i.prototype.onFinish = function(e) {
m.staticInstance._ensureResCnt = m.staticInstance._ensureResCnt - 1;
0 === m.staticInstance._ensureResCnt && m.staticInstance._startHotFix(e, m.staticInstance._checkList);
};
i._ins = null;
return i;
}(qg.Frame.ModuleBase);
t.ResEnsureListener = h;
var p = function(e) {
o(i, e);
function i() {
var i = null !== e && e.apply(this, arguments) || this;
i._totalSize = 0;
i._startTime = 0;
return i;
}
Object.defineProperty(i, "staticInstance", {
get: function() {
this._ins || (this._ins = new i());
return this._ins;
},
enumerable: !1,
configurable: !0
});
i.prototype.onChooseHotFixType = function(e, i, t, a) {
this._totalSize = 0;
this._startTime = new Date().getTime();
if (i === r.Constants.HotFixType.FORCE) {
u.default.staticInstance.setItem("KW_DATA_NEED_FORCE_UPDATE", !0);
fgui.GRoot.inst.node.emit(l.SHotupdate.showVersion, {
oldVersion: t,
newVersion: a
});
this._manager.doUpdate(i);
} else if (i === r.Constants.HotFixType.NORMAL) {
u.default.staticInstance.setItem("KW_DATA_NEED_FORCE_UPDATE", !1);
fgui.GRoot.inst.node.emit(l.SHotupdate.showVersion, {
oldVersion: t,
newVersion: a
});
this._manager.doUpdate(i);
} else if (i === r.Constants.HotFixType.SILENT) {
this._manager.doUpdate(i);
u.default.staticInstance.setItem("KW_DATA_NEED_FORCE_UPDATE", !1);
fgui.GRoot.inst.node.emit(l.SHotupdate.enterGame);
} else fgui.GRoot.inst.node.emit(l.SHotupdate.enterGame);
};
i.prototype.onSuccess = function() {
console.log("游戏已经更新成功拉！");
fgui.GRoot.inst.node.emit(l.SHotupdate.showProgress, 100);
setTimeout(function() {
var e = jsb.fileUtils.getSearchPaths(), i = [ jsb.fileUtils.getWritablePath() + "hotfix/", jsb.fileUtils.getWritablePath() + "hotfix/creator2/" ];
Array.prototype.unshift.apply(e, i);
cc.sys.localStorage.setItem("HotUpdateSearchPaths2", JSON.stringify(e));
jsb.fileUtils.setSearchPaths(e);
cc.audioEngine.stopAll();
cc.game.restart();
}, 200);
};
i.prototype.onFailed = function(e, i) {
if (i === r.Constants.HotFixError.NEED_RESTART) m.staticInstance._startHotFix(!0, m.staticInstance._checkList); else {
m.staticInstance._relinkTimes = m.staticInstance._relinkTimes + 1;
if (m.staticInstance._relinkTimes < 5 && 1 == u.default.staticInstance.getItem("KW_DATA_NEED_FORCE_UPDATE" + e, !1)) {
fgui.GRoot.inst.node.emit(l.SHotupdate.showTipText, "热更新失败正在重试中");
m.staticInstance._startHotFix(void 0, m.staticInstance._checkList);
} else this.updateFail();
}
};
i.prototype.retryHotupdateFunc = function() {
setTimeout(function() {
cc.audioEngine.stopAll();
cc.game.restart();
m.staticInstance._startHotFix(void 0, m.staticInstance._checkList);
}, 100);
};
i.prototype.gameEndFunc = function() {
cc.game.end();
};
i.prototype.restartHotupdareFunc = function() {
fgui.GRoot.inst.node.emit(l.SHotupdate.updateFail, "游戏加载失败,请检查网络是否正常,并重试", "重试", this.retryHotupdateFunc.bind(this));
};
i.prototype.updateFail = function() {
this.restartHotupdareFunc();
};
i.prototype.onProgress = function(e, i) {
if (e === r.Constants.HotFixStage.DOWNLOAD) {
this._totalSize = this._totalSize || 0;
i *= 100;
fgui.GRoot.inst.node.emit(l.SHotupdate.showProgress, i);
}
};
i.prototype.onDownloadInfo = function(e, i) {
this._totalSize = i;
fgui.GRoot.inst.node.emit(l.SHotupdate.updateSize, i);
};
i._ins = null;
return i;
}(qg.Frame.ModuleBase);
t.hotfixListener = p;
cc._RF.pop();
}, {
"../hotupdate/ResEnsure": "ResEnsure",
"../hotupdate/universe/Constants": "Constants",
"../hotupdate/universe/Utils": "Utils",
"../hotupdate/universe/hotfix/HotFixManager": "HotFixManager",
"../hotupdate/universe/hotfix/Manifest": "Manifest",
"./HotupdateInterface": "HotupdateInterface",
"./universe/hotfix/LayerFS": "LayerFS"
} ],
ResEnsure: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "0d3f2y/XERFxrCFLGKWoDN3", "ResEnsure");
Object.defineProperty(t, "__esModule", {
value: !0
});
var a = e("./universe/hotfix/LayerFS"), o = window.un && un.FileInterface.getInstance().getWritablePath() + "hotfix/", n = function() {
function e() {}
Object.defineProperty(e, "staticInstance", {
get: function() {
this._ins || (this._ins = new e());
return this._ins;
},
enumerable: !1,
configurable: !0
});
e.prototype.load_manifest = function(e) {
var i = o + "harbor/" + e + "/project.manifest";
if (a.default.staticInstance.isAloneFileExist(i)) {
var t = un.FileInterface.getInstance().getStringFromFile(i);
if (t.length > 0) return JSON.parse(t);
}
};
e.prototype.start = function(e, i, t) {
var a = un.Device.getAppVersion(), n = o + "xinghuo.tag";
i ? this.clean_res(e, a, n, t) : un.FileInterface.getInstance().getStringFromFile(n) === a ? t.staticInstance.onFinish(!1) : this.clean_res(e, a, n, t);
};
e.prototype.clean_res = function(e, i, t, n) {
var r = this.load_manifest(e);
if (r) {
var s = r.file_list, c = void 0;
for (var d in s) {
c = o + d;
a.default.staticInstance.isAloneFileExist(c) && un.FileInterface.getInstance().removeFile(c);
}
un.FileInterface.getInstance().removeDirectory(o + "harbor/" + e + "/");
} else if (o) {
un.FileInterface.getInstance().removeDirectory(o);
un.FileInterface.getInstance().createDirectory(o);
un.Device.setSkipBackupToPath(o);
}
un.FileInterface.getInstance().writeStringToFile(i, t);
un.FileInterface.getInstance().clearChache && un.FileInterface.getInstance().clearChache();
cc.assetManager.cacheManager && cc.assetManager.cacheManager.clearCache();
n.staticInstance.onFinish(!0, e);
};
e._ins = null;
return e;
}();
t.default = n;
cc._RF.pop();
}, {
"./universe/hotfix/LayerFS": "LayerFS"
} ],
ScreenAdaptation: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "6da34OmekxH6rvQg0IGZcwr", "ScreenAdaptation");
var a, o = this && this.__extends || (a = function(e, i) {
return (a = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(e, i) {
e.__proto__ = i;
} || function(e, i) {
for (var t in i) Object.prototype.hasOwnProperty.call(i, t) && (e[t] = i[t]);
})(e, i);
}, function(e, i) {
a(e, i);
function t() {
this.constructor = e;
}
e.prototype = null === i ? Object.create(i) : (t.prototype = i.prototype, new t());
}), n = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
var r = e("../../areabase/Define"), s = e("./UtilsInterface"), c = function(e) {
o(i, e);
function i() {
var i = null !== e && e.apply(this, arguments) || this;
i._haveGetNotch = !1;
i._notchTop = 0;
i._notchBottom = 0;
i._notchLeft = 0;
i._notchRight = 0;
i._hasNotchInScreen = !1;
i._bLandscape = !0;
i._designOriginalWidth = 1920;
i._designOriginalHeight = 1080;
i._designSize = cc.size(i._designOriginalWidth, i._designOriginalHeight);
return i;
}
i.prototype.ctor = function() {
e.prototype.ctor.call(this);
if (cc.sys.os === cc.sys.OS_IOS && cc.sys.isNative) {
this._hasNotchInScreen = jsb.reflection.callStaticMethod("ToolFunction", "hasIsomerismInScreen");
if (this._hasNotchInScreen) {
var i = jsb.reflection.callStaticMethod("ToolFunction", "getIsomerismSize").split(",");
this._notchTop = parseFloat(i[0]);
this._notchBottom = parseFloat(i[1]);
this._notchLeft = 2 * parseFloat(i[2]);
this._notchRight = 2 * parseFloat(i[3]);
this._haveGetNotch = !0;
}
} else {
var t = cc.view.getFrameSize();
if (t.width / t.height > 2) {
this._hasNotchInScreen = !0;
this._notchLeft = 80;
this._notchRight = 80;
}
}
};
i.prototype.resizeFrameView = function() {
var e = cc.view.getFrameSize(), i = Math.max(e.width, e.height), t = Math.min(e.width, e.height);
if (this._bLandscape) {
cc.view.setFrameSize(i, t);
cc.view.setOrientation(cc.macro.ORIENTATION_LANDSCAPE);
} else {
cc.view.setFrameSize(t, i);
cc.view.setOrientation(cc.macro.ORIENTATION_PORTRAIT);
}
};
i.prototype.resizeWindow = function() {
var e = cc.find("Canvas").getComponent(cc.Canvas), i = cc.view.getFrameSize(), t = i.width / i.height, a = this._bLandscape ? this._designOriginalWidth : this._designOriginalHeight, o = this._bLandscape ? this._designOriginalHeight : this._designOriginalWidth;
t > a / o ? a = Math.ceil(o * t) : o = Math.ceil(a / t);
cc.view.setDesignResolutionSize(a, o, cc.view.getResolutionPolicy());
this._designSize = e.designResolution;
this.checkNotch();
window.fgui && fgui.GRoot.inst.updateSize();
e.node.emit("resize");
};
i.prototype.orientationChange = function() {
cc.sys.isBrowser && this.checkNotch();
};
i.prototype.isNeedRotateEditBox = function() {
return !!cc.sys.isBrowser && !window.matchMedia("(orientation: landscape)").matches && this._bLandscape;
};
i.prototype.checkNotch = function() {
if (cc.sys.os === cc.sys.OS_IOS && cc.sys.isNative) ; else {
var e = cc.view.getFrameSize();
if (e.width / e.height > 2) {
this._hasNotchInScreen = !0;
this._notchLeft = 80;
this._notchRight = 80;
} else {
this._hasNotchInScreen = !1;
this._notchLeft = 0;
this._notchRight = 0;
}
}
};
Object.defineProperty(i.prototype, "hasNotchInScreen", {
get: function() {
this._haveGetNotch || this.checkNotch();
return this._hasNotchInScreen;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "notchTop", {
get: function() {
return this._notchTop;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "notchBottom", {
get: function() {
return this._notchBottom;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "notchLeft", {
get: function() {
return this._notchLeft;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "notchRight", {
get: function() {
return this._notchRight;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "designSize", {
get: function() {
return this._designSize;
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "bLandscape", {
get: function() {
return this._bLandscape;
},
set: function(e) {
"boolean" != typeof e && (e = !0);
if (this._bLandscape !== e) {
this._bLandscape = e;
this.resizeFrameView();
this.resizeWindow();
}
},
enumerable: !1,
configurable: !0
});
Object.defineProperty(i.prototype, "editRotate", {
get: function() {
var e = cc.game.container.style.transform;
e = (e = e.replace("rotate(", "")).replace("deg)", "");
return parseInt(e);
},
enumerable: !1,
configurable: !0
});
return n([ qg.Frame.Module({
implements: [ s.IScreenAdaptation ],
selector: null,
lifeCycle: [ r.Life.All ]
}) ], i);
}(qg.Frame.ModuleBase);
t.default = c;
cc._RF.pop();
}, {
"../../areabase/Define": "Define",
"./UtilsInterface": "UtilsInterface"
} ],
StartupConfig: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "04d50bJbjdLlrwyMrPrAQjx", "StartupConfig");
var a = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
var o = e("../areabase/Define"), n = function() {
function e() {
this.lifeInfo = {
life: o.Life.All,
infos: [ {
life: o.Life.NotGame,
infos: [ {
life: o.Life.Startup
}, {
life: o.Life.Login
}, {
life: o.Life.Lobby
}, {
life: o.Life.Leisure
} ]
}, {
life: o.Life.Game,
infos: [ {
life: o.Life.LobbyGame
}, {
life: o.Life.LeisureGame
} ]
}, {
life: o.Life.GoldGameAll,
infos: [ {
life: o.Life.GoldGame
} ]
} ]
};
this.entryLife = o.Life.Startup;
}
return a([ qg.Frame.Startup ], e);
}();
t.default = n;
cc._RF.pop();
}, {
"../areabase/Define": "Define"
} ],
UIDeclare: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "26aedPZTUFFyoO0abm1eRhP", "UIDeclare");
var a, o = this && this.__extends || (a = function(e, i) {
return (a = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(e, i) {
e.__proto__ = i;
} || function(e, i) {
for (var t in i) Object.prototype.hasOwnProperty.call(i, t) && (e[t] = i[t]);
})(e, i);
}, function(e, i) {
a(e, i);
function t() {
this.constructor = e;
}
e.prototype = null === i ? Object.create(i) : (t.prototype = i.prototype, new t());
}), n = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
var r = e("./ViewDefine");
(function(e) {
o(i, e);
function i() {
var i = null !== e && e.apply(this, arguments) || this;
i._isInit = !1;
i._uis = {};
return i;
}
Object.defineProperty(i.prototype, "uis", {
get: function() {
var e = this;
this._isInit || this.node.walk(function(i) {
e._uis[i.name] = i;
});
return this._uis;
},
enumerable: !1,
configurable: !0
});
i = n([ qg.Frame.CompView({
implements: [ r.IUIDeclare ],
selector: null
}) ], i);
})(qg.Frame.ViewBase);
cc._RF.pop();
}, {
"./ViewDefine": "ViewDefine"
} ],
Url: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "355eaC5BYBFbZxoObi3x4FG", "Url");
Object.defineProperty(t, "__esModule", {
value: !0
});
var a = function() {
function e() {}
Object.defineProperty(e, "staticInstance", {
get: function() {
this._ins || (this._ins = new e());
return this._ins;
},
enumerable: !1,
configurable: !0
});
e.prototype.getTime = function() {
return parseInt(String(new Date().getTime() / 1e3));
};
e.prototype.rmtail = function(e) {
var i = e.indexOf("?");
return i && i > 0 ? e.substring(0, i - 1) : "";
};
e.prototype.encode = function(e) {
if (void 0 === e) return "";
e = e.replace("\n", "\r\n");
return (e = encodeURIComponent(e)).replace(" ", "+");
};
e.prototype.generate = function(e, i) {
var t = [];
for (var a in i) t.push(a + "=" + this.encode(i[a]));
for (var o = "", n = 0; n < t.length; n++) o = "&" + t[n];
return e + o;
};
e.prototype.sign = function(e) {
var i = [];
for (var t in e) i.push(t);
i.sort();
var a = [];
for (var t in i) {
var o = e[i[t]];
a.push(i[t] + "=" + o.toString());
}
for (var n = "", r = 0; r < a.length; r++) n = 0 === r ? a[r] : n + "&" + a[r];
return un.CMD5Checksum.sign(n);
};
e._ins = null;
return e;
}();
t.default = a;
cc._RF.pop();
}, {} ],
UtilFunction: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "94e8cS1FwtP1LgkGslRXAdU", "UtilFunction");
var a, o = this && this.__extends || (a = function(e, i) {
return (a = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(e, i) {
e.__proto__ = i;
} || function(e, i) {
for (var t in i) Object.prototype.hasOwnProperty.call(i, t) && (e[t] = i[t]);
})(e, i);
}, function(e, i) {
a(e, i);
function t() {
this.constructor = e;
}
e.prototype = null === i ? Object.create(i) : (t.prototype = i.prototype, new t());
}), n = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
var r = e("../../areabase/Define"), s = function(e) {
o(i, e);
function i() {
return null !== e && e.apply(this, arguments) || this;
}
t = i;
Object.defineProperty(i, "staticInstance", {
get: function() {
this._ins || (this._ins = new t());
return this._ins;
},
enumerable: !1,
configurable: !0
});
i.prototype.getCrossUrl = function() {
return "https://bfly.mengyoutech.com";
};
var t;
i._ins = null;
return t = n([ qg.Frame.Module({
selector: null,
lifeCycle: [ r.Life.All ]
}) ], i);
}(qg.Frame.ModuleBase);
t.default = s;
cc._RF.pop();
}, {
"../../areabase/Define": "Define"
} ],
UtilsInterface: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "c444f+bIutALYIrVyoodMkl", "UtilsInterface");
var a = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
t.AccessTokenKey = t.HttpType = t.IWebToken = t.SAccessToken = t.IAccessToken = t.IHttp = t.IScreenAdaptation = void 0;
var o = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.IScreenAdaptation = o;
var n = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.IHttp = n;
var r = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.IAccessToken = r;
var s = function() {
function e() {}
return a([ qg.Frame.Subject ], e);
}();
t.SAccessToken = s;
var c = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.IWebToken = c;
t.HttpType = {
post_plus: "post_plus",
post: "post",
get: "get",
postOld: "postOld",
getOld: "getOld"
};
t.AccessTokenKey = "_AccessTokenKey_";
cc._RF.pop();
}, {} ],
Utils: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "4a0adT6pfBFEIElq4JHzttA", "Utils");
Object.defineProperty(t, "__esModule", {
value: !0
});
t.Utils = void 0;
var a = e("../universe/Constants"), o = e("../universe/hotfix/Manifest"), n = function() {
function e() {}
Object.defineProperty(e, "staticInstance", {
get: function() {
this._ins || (this._ins = new e());
return this._ins;
},
enumerable: !1,
configurable: !0
});
e.prototype.getVersion = function(e, i, t) {
var n, r = un.FileInterface.getInstance().getWritablePath() + a.Constants.HotFixPath + a.Constants.HotfixSubPath + i + "/project.manifest", s = new o.default(r, void 0, !0);
s.isLoaded() && (n = s.getVersion());
void 0 !== n && (s = new o.default(e + "/" + t, void 0, !1)).isLoaded() && (n = s.getVersion());
return null != n ? n : "";
};
e.prototype.http_get = function(e, i) {
var t = new un.Http();
t.setListener(function(e, t, a, o) {
i && i(e, t, a, o);
});
t.add(e, "", e);
t.removeWhenAllTaskComplete();
};
e.prototype.http_post = function(e, i, t) {
var a = new un.Http();
a.setListener(function(e, i, a, o) {
t && t(e, i, a, o);
});
a.add(e, i, e);
a.removeWhenAllTaskComplete();
};
e.prototype.compareVersion = function(e, i, t) {
t = null != t ? t : 9;
for (var a = this._parseVersion(e), o = this._parseVersion(i), n = 0; n < t; n++) {
a[n] || (a[n] = "0");
o[n] || (o[n] = "0");
}
for (n = 0; n < t; n++) {
if (Number(o[n]) > Number(a[n])) return !0;
if (Number(o[n]) < Number(a[n])) return !1;
}
return !1;
};
e.prototype._parseVersion = function(e) {
var i;
return null !== (i = e.match(/[^.]+/gu)) && void 0 !== i ? i : [];
};
e._ins = null;
return e;
}();
t.Utils = n;
cc._RF.pop();
}, {
"../universe/Constants": "Constants",
"../universe/hotfix/Manifest": "Manifest"
} ],
ViewBaseEx: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "0854dNuEXhLHJ+Br8QzkuP4", "ViewBaseEx");
var a, o = this && this.__extends || (a = function(e, i) {
return (a = Object.setPrototypeOf || {
__proto__: []
} instanceof Array && function(e, i) {
e.__proto__ = i;
} || function(e, i) {
for (var t in i) Object.prototype.hasOwnProperty.call(i, t) && (e[t] = i[t]);
})(e, i);
}, function(e, i) {
a(e, i);
function t() {
this.constructor = e;
}
e.prototype = null === i ? Object.create(i) : (t.prototype = i.prototype, new t());
});
Object.defineProperty(t, "__esModule", {
value: !0
});
t.ViewBaseEx = void 0;
var n = e("./ViewDefine"), r = function(e) {
o(i, e);
function i() {
var i = null !== e && e.apply(this, arguments) || this;
i.uis = null;
return i;
}
Object.defineProperty(i.prototype, "viewPlugin", {
get: function() {
return this.getPlugin(qg.Frame.ViewPlugin);
},
enumerable: !1,
configurable: !0
});
i.prototype.ctor = function() {
e.prototype.ctor.call(this);
this.uis = this.getCompView(n.IUIDeclare).uis;
};
return i;
}(qg.Frame.ViewBase);
t.ViewBaseEx = r;
cc._RF.pop();
}, {
"./ViewDefine": "ViewDefine"
} ],
ViewDefine: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "40ac2PsM/5B+KLl/ZFRf/I1", "ViewDefine");
var a = this && this.__decorate || function(e, i, t, a) {
var o, n = arguments.length, r = n < 3 ? i : null === a ? a = Object.getOwnPropertyDescriptor(i, t) : a;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) r = Reflect.decorate(e, i, t, a); else for (var s = e.length - 1; s >= 0; s--) (o = e[s]) && (r = (n < 3 ? o(r) : n > 3 ? o(i, t, r) : o(i, t)) || r);
return n > 3 && r && Object.defineProperty(i, t, r), r;
};
Object.defineProperty(t, "__esModule", {
value: !0
});
t.IUIDeclare = void 0;
var o = function() {
function e() {}
return a([ qg.Frame.Interface ], e);
}();
t.IUIDeclare = o;
cc._RF.pop();
}, {} ],
ZipDownloader: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "bdacf4hR3VFTYW00iloYZTt", "ZipDownloader");
Object.defineProperty(t, "__esModule", {
value: !0
});
t.ZipDownloader = t.DownloadInfo = void 0;
var a = e("../Constants"), o = e("./LayerFS"), n = function() {
function e(e) {
this._filePath = "";
this._info = {
url: "",
size: 0,
blockCount: 0,
downloadInfo: {}
};
this._isLoaded = !1;
this._filePath = e;
}
e.prototype.load = function() {
if (this._isLoaded) return !0;
var e = this._filePath;
if (e && e.length > 0 && o.default.staticInstance.isAloneFileExist(e)) {
var i = un.FileInterface.getInstance().getStringFromFile(e);
if (i.length > 0) {
var t = JSON.parse(i);
if (t) {
this._info = t;
this._isLoaded = !0;
return !0;
}
}
}
return !1;
};
e.prototype.save = function() {
var e = this._filePath;
if (e && e.length > 0) {
var i = JSON.stringify(this._info);
i && Object.keys(i).length > 0 && un.FileInterface.getInstance().writeStringToFile(i, e);
}
};
e.prototype.setDownloadInfo = function(e) {
this._info.downloadInfo = e;
};
e.prototype.setUrl = function(e) {
this._info.url = e;
};
e.prototype.setSize = function(e) {
this._info.size = e;
};
e.prototype.setBlockCount = function(e) {
this._info.blockCount = e;
};
e.prototype.getDownloadInfo = function() {
return this._info.downloadInfo;
};
e.prototype.getUrl = function() {
return this._info.url;
};
e.prototype.getSize = function() {
return this._info.size;
};
e.prototype.getBlockCount = function() {
return this._info.blockCount;
};
return e;
}();
t.DownloadInfo = n;
var r = function() {
function e(e, i, t, a, o) {
this._priority = void 0;
this._listener = void 0;
this._info = void 0;
this._downloadStartTime = 0;
this._downloadTotalTime = 0;
this._cbIDs = [];
this._zipUrls = e;
this._zipSize = i;
this._workPath = t;
this._priority = a;
this._listener = o;
this._infoPath = t + "info.manifest";
this._info = new n(this._infoPath);
}
e.prototype._mergeFile = function(e, i) {
var t = this, o = this._workPath + "final.zip";
if (1 === e) {
un.FileInterface.getInstance().moveFile(i[1].filePath, o);
this._listener.onSuccess(o, this._downloadTotalTime);
} else {
for (var n = [], r = 0; r <= e; r++) {
var s = i[r.toString()];
n.push(s.filePath);
}
var c = new un.MergeFile();
c.setListener(function(e, i) {
if (e > 0) t._listener.onError(a.Constants.HotFixError.MERGE_ZIP_FILE_FAILED, i); else {
un.FileInterface.getInstance().removeFile(t._infoPath);
for (var r in n) un.FileInterface.getInstance().removeFile(n[r]);
t._listener.onSuccess(o, t._downloadTotalTime);
}
});
c.add(n, o);
c.removeWhenAllTaskComplete();
}
};
e.prototype.start = function() {
var e, i, t = this, n = this._zipUrls, r = this._zipSize, s = this._workPath, c = this._info;
if (c.load() && c.getSize() === r && n.indexOf(c.getUrl()) > 0) {
e = c.getBlockCount();
i = c.getDownloadInfo();
var d = !1;
for (var l in i) if (i[l].success && !1 === o.default.staticInstance.isAloneFileExist(i[l].filePath)) {
i[l].success = !1;
d = !0;
}
d && c.save();
} else {
un.FileInterface.getInstance().removeDirectory(s);
un.FileInterface.getInstance().createDirectory(s);
var u = Math.floor(r / 1);
(i = {})[String(1)] = {
beginPos: 0 * u,
endPos: r - 1,
filePath: s + "zip_1.data",
success: !1
};
e = 1;
c.setUrl(n[0]);
c.setSize(r);
c.setBlockCount(e);
c.setDownloadInfo(i);
c.save();
}
var _ = this._priority, m = n.length, h = 0, p = 5 * e, g = n[h], f = 0, I = 0, N = e, y = 0, b = 0, w = {}, v = {};
this._downLoadCon = un.Downloader2.getInstance();
this._cbIDs[this._cbIDs.length] = this._downLoadCon.addListener(function(o, r, s, d) {
b += 1;
if (s > 0) w[o] = d; else {
i[o].success = !0;
c.save();
y += 1;
}
if (b === N) if (y < N) if (p > 0) {
p -= 1;
N = 0;
b = 0;
y = 0;
g = n[(h = h % m + 1) - 1];
for (var l in w) {
var u = i[l];
t._downLoadCon.add(g, u.filePath, "", 0, u.beginPos, u.endPos, !0, !1, !0, _, l, t._cbIDs[t._cbIDs.length - 1]);
N += 1;
}
w = {};
t._downLoadCon.commit();
f = I;
} else {
t._downLoadCon.removeListener(t._cbIDs[t._cbIDs.length - 1]);
t._listener.onError(a.Constants.HotFixError.DOWNLOAD_FAILED, d, w);
} else {
t._downloadTotalTime = parseInt(String(new Date().getTime() / 1e3)) - t._downloadStartTime;
t._downLoadCon.removeListener(t._cbIDs[t._cbIDs.length - 1]);
t._mergeFile(e, i);
}
});
this._downLoadCon.addProgressListener(this._cbIDs[this._cbIDs.length - 1], function(i, a) {
v[i] = a;
var o = 0;
for (var n in v) o += v[n];
I = o / e * (1 - f) + f;
t._listener.onProgress(I);
});
for (var l in i) i[l].success ? y += 1 : this._downLoadCon.add(g, i[l].filePath, "", 0, i[l].beginPos, i[l].endPos, !0, !1, !0, _, l, this._cbIDs[this._cbIDs.length - 1]);
if (y < e) {
this._downLoadCon.commit();
this._downloadStartTime = parseInt(String(new Date().getTime() / 1e3));
} else {
this._downLoadCon.removeListener(this._cbIDs[this._cbIDs.length - 1]);
this._mergeFile(e, i);
}
};
return e;
}();
t.ZipDownloader = r;
cc._RF.pop();
}, {
"../Constants": "Constants",
"./LayerFS": "LayerFS"
} ],
cc: [ function(e, i, t) {
"use strict";
cc._RF.push(i, "0e456o0j8FCybqvrXqB2jFb", "cc");
Object.defineProperty(t, "__esModule", {
value: !0
});
t.cc = void 0;
var a = cc;
t.cc = a;
cc._throw = function() {};
var o = {
init: function() {
this.html = document.getElementsByTagName("html")[0];
},
availWidth: function(e) {
return e && e !== this.html ? e.clientWidth : window.innerWidth;
},
availHeight: function(e) {
return e && e !== this.html ? e.clientHeight : window.innerHeight;
},
meta: {
width: "device-width"
},
adaptationType: cc.sys.browserType
}, n = function() {
return "getRotate" in window && getRotate();
};
cc.view._initFrameSize = function() {
var e = this._frameSize, i = o.availWidth(cc.game.frame), t = o.availHeight(cc.game.frame), a = i >= t;
if (!cc.sys.isMobile || a && this._orientation & cc.macro.ORIENTATION_LANDSCAPE || !a && this._orientation & cc.macro.ORIENTATION_PORTRAIT) {
e.width = i;
e.height = t;
cc.game.container.style["-webkit-transform"] = "rotate(0deg)";
cc.game.container.style.transform = "rotate(0deg)";
this._isRotated = !1;
} else {
e.width = t;
e.height = i;
if (n()) {
cc.game.container.style["-webkit-transform"] = "rotate(90deg)";
cc.game.container.style.transform = "rotate(90deg)";
} else {
cc.game.container.style["-webkit-transform"] = "rotate(-90deg)";
cc.game.container.style.transform = "rotate(-90deg)";
}
cc.game.container.style["-webkit-transform-origin"] = "0px 0px 0px";
cc.game.container.style.transformOrigin = "0px 0px 0px";
this._isRotated = !0;
}
this._orientationChanging && setTimeout(function() {
cc.view._orientationChanging = !1;
}, 1e3);
};
cc.view.convertToLocationInView = function(e, i, t, a) {
var o = a || cc.v2(), r = t.adjustedLeft ? t.adjustedLeft : t.left, s = t.adjustedTop ? t.adjustedTop : t.top, c = this._devicePixelRatio * (e - r), d = this._devicePixelRatio * (s + t.height - i);
if (this._isRotated) if (n()) {
o.x = cc.game.canvas.width - d;
o.y = c;
} else {
o.x = d;
o.y = cc.game.canvas.height - c;
} else {
o.x = c;
o.y = d;
}
return o;
};
cc.ContainerStrategy.EQUAL_TO_FRAME.constructor.prototype.apply = function(e) {
var i = e._frameSize.width, t = e._frameSize.height, a = cc.game.container.style;
this._setupContainer(e, e._frameSize.width, e._frameSize.height);
e._isRotated ? n() ? a.margin = "0 0 0 " + t + "px" : a.margin = i + "px 0px 0px" : a.margin = "0px";
a.padding = "0px";
};
Object.defineProperty(cc.Label.prototype, "font", {
get: function() {
if (cc.Label.defaultFont) {
this._isSystemFontUsed = !1;
this._styleFlags &= -2;
return this._N$file ? this._N$file : cc.Label.defaultFont;
}
return this._N$file;
}
});
cc.cacheInfo = function() {
var e = cc.assetManager.assets, i = 0, t = 0;
e.forEach(function(e) {
if ("cc.Texture2D" == cc.js.getClassName(e)) {
var a = e;
i += a.width * a.height * 4 / 1024 / 1024;
t++;
}
});
return "缓存 [纹理总数:" + t + "][纹理缓存:" + i.toFixed(2) + "M]";
};
if (cc.sys.isNative) {
Object.defineProperty(dragonBones.ArmatureDisplay.prototype, "armatureName", {
get: function() {
return this._armatureName;
},
set: function(e) {
this._armatureName = e;
var i = this.getAnimationNames(this._armatureName);
(!this.animationName || i.indexOf(this.animationName) < 0) && (this.animationName = "");
var t = this._armature;
if (this._armature) {
this.isAnimationCached() || this._factory.remove(this._armature);
this._armature = null;
}
this._nativeDisplay = null;
this._refresh();
t && t != this._armature && t.dispose();
this._armature && !this.isAnimationCached() && this.shouldSchedule && this._factory.add(this._armature);
},
visible: !1
});
var r = dragonBones.ArmatureDisplay.prototype.onEnable;
dragonBones.ArmatureDisplay.prototype.onEnable = function() {
r && r.call(this);
this.shouldSchedule = !0;
};
dragonBones.ArmatureDisplay.prototype.setAnimationCacheMode = function(e) {
if (this._preCacheMode !== e) {
this._cacheMode = e;
this._buildArmature();
this._armature && !this.isAnimationCached() && this.shouldSchedule && this._factory._dragonBones.clock.add(this._armature);
}
};
dragonBones.ArmatureDisplay.prototype._buildArmature = function() {
if (this.dragonAsset && this.dragonAtlasAsset && this.armatureName) {
if (this._nativeDisplay) {
this._nativeDisplay.dispose();
this._nativeDisplay._comp = null;
this._nativeDisplay = null;
}
var e = this.dragonAtlasAsset._uuid;
this._armatureKey = this.dragonAsset.init(this._factory, e);
if (this.isAnimationCached()) {
this._nativeDisplay = new dragonBones.CCArmatureCacheDisplay(this.armatureName, this._armatureKey, e, this._cacheMode == AnimationCacheMode.SHARED_CACHE);
void 0 === this.shouldSchedule && this._nativeDisplay.stopSchedule();
this._armature = this._nativeDisplay.armature();
} else {
this._nativeDisplay = this._factory.buildArmatureDisplay(this.armatureName, this._armatureKey, "", e);
if (!this._nativeDisplay) {
this._clearRenderData();
return;
}
this._nativeDisplay.setDebugBonesEnabled(this.debugBones);
this._armature = this._nativeDisplay.armature();
this._armature.animation.timeScale = this.timeScale;
this.shouldSchedule && this._factory.add(this._armature);
}
var i = this._eventTarget._callbackTable, t = function() {};
for (var a in i) {
var o = i[a];
o && o.callbackInfos && o.callbackInfos.length && (this.isAnimationCached() ? this._nativeDisplay.addDBEventListener(a) : this._nativeDisplay.addDBEventListener(a, t));
}
this._preCacheMode = this._cacheMode;
this._nativeDisplay._ccNode = this.node;
this._nativeDisplay._comp = this;
this._nativeDisplay._eventTarget = this._eventTarget;
this._nativeDisplay.bindNodeProxy(this.node._proxy);
this._nativeDisplay.setOpacityModifyRGB(this.premultipliedAlpha);
this._nativeDisplay.setBatchEnabled(this.enableBatch);
this._nativeDisplay.setColor(this.node.color);
this._nativeDisplay.setDBEventCallback(function(e) {
this._eventTarget.emit(e.type, e);
});
this.attachUtil.init(this);
this.attachUtil._associateAttachedNode();
this.animationName && this.playAnimation(this.animationName, this.playTimes);
this._updateMaterial();
this.markForRender(!0);
} else this._clearRenderData();
};
}
cc._RF.pop();
}, {} ]
}, {}, [ "AppRootView", "StartupConfig", "AppData", "Define", "AreaNameConfig", "AppPackageDefine", "PopManager", "FguiHotUpdateView", "HotupdateDefine", "HotupdateInterface", "ResChecker", "ResEnsure", "Constants", "Url", "Utils", "DiffList", "DownloaderCons", "HotFixManager", "HotFixProcessor", "LayerFS", "Manifest", "ProcessorHolder", "ZipDownloader", "ChooseAreaConfig", "Main", "MainController", "MainInterface", "cc", "Extend", "ExtendExport", "UIDeclare", "ViewBaseEx", "ViewDefine", "UtilFunction", "LocalStorage", "ScreenAdaptation", "UtilsInterface" ]);