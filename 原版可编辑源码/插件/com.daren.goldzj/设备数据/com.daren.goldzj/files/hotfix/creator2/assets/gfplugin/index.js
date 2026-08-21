window.__require = function e(t, s, i) {
function a(n, l) {
if (!s[n]) {
if (!t[n]) {
var r = n.split("/");
r = r[r.length - 1];
if (!t[r]) {
var d = "function" == typeof __require && __require;
if (!l && d) return d(r, !0);
if (o) return o(r, !0);
throw new Error("Cannot find module '" + n + "'");
}
n = r;
}
var h = s[n] = {
exports: {}
};
t[n][0].call(h.exports, function(e) {
return a(t[n][1][e] || e);
}, h, h.exports, e, t, s, i);
}
return s[n].exports;
}
for (var o = "function" == typeof __require && __require, n = 0; n < i.length; n++) a(i[n]);
return a;
}({
BundleUpdatorV3: [ function(e, t, s) {
"use strict";
cc._RF.push(t, "afc06kGpOVIO5G1NBmf7D+p", "BundleUpdatorV3");
Object.defineProperty(s, "__esModule", {
value: !0
});
s.BundleUpdatorV3 = s.Env_Mode = s.State = s.Code = void 0;
var i, a, o;
(function(e) {
e[e.ERROR_DOWNLOAD_Versom = 0] = "ERROR_DOWNLOAD_Versom";
e[e.ERROR_DOWNLOAD_MANIFEST = 1] = "ERROR_DOWNLOAD_MANIFEST";
e[e.ERROR_PARSE_MANIFEST = 2] = "ERROR_PARSE_MANIFEST";
e[e.NEW_VERSION_FOUND = 3] = "NEW_VERSION_FOUND";
e[e.ALREADY_UP_TO_DATE = 4] = "ALREADY_UP_TO_DATE";
e[e.UPDATE_PROGRESSION = 5] = "UPDATE_PROGRESSION";
e[e.ASSET_UPDATED = 6] = "ASSET_UPDATED";
e[e.ERROR_UPDATING = 7] = "ERROR_UPDATING";
e[e.UPDATE_FINISHED = 8] = "UPDATE_FINISHED";
e[e.UPDATE_FAILED = 9] = "UPDATE_FAILED";
e[e.ERROR_DECOMPRESS = 10] = "ERROR_DECOMPRESS";
e[e.MAIN_PACK_NEED_UPDATE = 11] = "MAIN_PACK_NEED_UPDATE";
e[e.PRE_VERSIONS_NOT_FOUND = 12] = "PRE_VERSIONS_NOT_FOUND";
e[e.UNINITED = 13] = "UNINITED";
})(i = s.Code || (s.Code = {}));
(function(e) {
e[e.UNINITED = 0] = "UNINITED";
e[e.UNCHECKED = 1] = "UNCHECKED";
e[e.PREDOWNLOAD_VERSION = 2] = "PREDOWNLOAD_VERSION";
e[e.DOWNLOADING_VERSION = 3] = "DOWNLOADING_VERSION";
e[e.VERSION_LOADED = 4] = "VERSION_LOADED";
e[e.PREDOWNLOAD_MANIFEST = 5] = "PREDOWNLOAD_MANIFEST";
e[e.DOWNLOADING_MANIFEST = 6] = "DOWNLOADING_MANIFEST";
e[e.MANIFEST_LOADED = 7] = "MANIFEST_LOADED";
e[e.NEED_UPDATE = 8] = "NEED_UPDATE";
e[e.READY_TO_UPDATE = 9] = "READY_TO_UPDATE";
e[e.UPDATING = 10] = "UPDATING";
e[e.UNZIPPING = 11] = "UNZIPPING";
e[e.UP_TO_DATE = 12] = "UP_TO_DATE";
e[e.FAIL_TO_UPDATE = 13] = "FAIL_TO_UPDATE";
})(a = s.State || (s.State = {}));
(function(e) {
e[e.normal = 2] = "normal";
e[e.graytest = 1] = "graytest";
e[e.internal = 0] = "internal";
})(o = s.Env_Mode || (s.Env_Mode = {}));
const n = "_temp", l = 4;
class r {
constructor(e, t, s, i, n) {
this.isLoaded = !1;
this._state = a.UNINITED;
this.curVersion = null;
this.oldmanifest = null;
this.newmanifest = null;
this.projectName = "";
this.storagePath = "";
this._downloadIdx = 0;
this._hotUpdateUrl = [];
for (const t of i) {
let s = t;
const i = r.getInt(r.KW_TEST_CONFIG_HOTUPDATE_ENV, -1);
s += -1 != i ? i != o.normal ? "&env=0" : "&env=1" : n ? "&env=0" : "&env=1";
s += `&channel=${e}`;
this._hotUpdateUrl.push(s);
}
this._package = s;
this.gameId = t;
if (!r.isSkipUpdate && window.jsb) {
this.storagePath = jsb.fileUtils.getWritablePath() + r.ROOTPath + "/";
this.projectName = `${this._package + "project.manifest"}`;
this.getOldProjectString();
}
}
get state() {
return r.isSkipUpdate ? a.UP_TO_DATE : this._state;
}
set state(e) {
this._state = e;
}
set handler(e) {
this._handler = e;
}
static getInt(e, t = 0) {
const s = cc.sys.localStorage.getItem(e);
return null != s ? parseInt(s) : t;
}
static compareVersion(e, t) {
e = e.split(".");
t = t.split(".");
const s = Math.max(e.length, t.length);
for (;e.length < s; ) e.push("0");
for (;t.length < s; ) t.push("0");
for (let i = 0; i < s; i++) {
const s = parseInt(e[i]), a = parseInt(t[i]);
if (s > a) return 1;
if (s < a) return -1;
}
return 0;
}
static get isSkipUpdate() {
return cc.sys.isBrowser || r._isNoUpdate;
}
get isUpdating() {
if ((e => {
if (e == a.PREDOWNLOAD_VERSION) {
console.log(`${this._package} 准备下载版本文件`);
return !0;
}
if (e == a.DOWNLOADING_VERSION) {
console.log(`${this._package} 下载版本文件中`);
return !0;
}
if (e == a.PREDOWNLOAD_MANIFEST) {
console.log(`${this._package} 准备下载project文件`);
return !0;
}
if (e == a.DOWNLOADING_MANIFEST) {
console.log(`${this._package} 下载project文件中`);
return !0;
}
if (e == a.VERSION_LOADED) {
console.log(`${this._package} 下载版本文件完成，下一步骤会解析版本文件，也算在更新过程中`);
return !0;
}
if (e == a.MANIFEST_LOADED) {
console.log(`${this._package} 下载project文件完成,下载步骤会解析project文件，也算在更新过程中`);
return !0;
}
if (e == a.UPDATING) {
console.log(`${this._package} 正在更新中`);
return !0;
}
})(this.state)) {
console.log(`${this._package} TS层更新中`);
return !0;
}
return !1;
}
startUpDate() {
console.log("downLoad_startUpDate" + this._package);
if (!this.isLoaded && !this.isUpdating) if (r.isSkipUpdate) {
this.curVersion = "0.0.0.0";
if (cc.sys.isBrowser) {
this.state = a.PREDOWNLOAD_VERSION;
setTimeout(() => {
this.onAreadyUpToDate();
}, 500);
} else this.onAreadyUpToDate();
} else if (window.wx) {
let e = window.wx, t = this;
e.loadSubpackage({
name: `${this.gameId}_${this._package}`,
success: function() {
t.curVersion = "1.0.0";
t._handler.onReady(t._package, t.curVersion);
},
fail: function() {
t._handler.onFailed(t._package, i.ERROR_UPDATING);
}
});
} else {
this.state = a.READY_TO_UPDATE;
this._downloadIdx = 0;
this.checkLoacalManifest();
}
}
getOldProjectString() {
console.log("downLoad_getProjectString");
if (r.isSkipUpdate) return;
const e = this.getString(this.projectName, !0);
if (e) try {
this.oldmanifest = JSON.parse(e);
this.curVersion = this.oldmanifest.version;
this.oldmanifest.update_url || (this.oldmanifest = null);
} catch (e) {
this.oldmanifest = null;
}
}
checkLoacalManifest() {
if (null == this.oldmanifest) {
const e = cc.assetManager.getBundle("gfplugin");
if (e) {
e.load(`config/${this._package}project`, (e, t) => {
if (e) this.getCheckUpdate(); else {
try {
this.oldmanifest = JSON.parse(t._nativeAsset);
this.curVersion = this.oldmanifest.version;
this.oldmanifest.update_url || (this.oldmanifest = null);
} catch (e) {
this.oldmanifest = null;
}
this.getCheckUpdate();
}
});
return;
}
}
this.getCheckUpdate();
}
getCheckUpdate() {
this.state = a.DOWNLOADING_VERSION;
let e = this._hotUpdateUrl[this._downloadIdx++];
if (!e) {
this.onUpdateFailed(i.ERROR_DOWNLOAD_Versom);
return;
}
e += `&t=${Date.now()}`;
console.log("downLoad_checkUpdate_versionUrl:" + e);
const t = new XMLHttpRequest();
t.open("GET", e, !0);
t.send(null);
t.onload = () => {
if (4 == t.readyState && t.status >= 200 && t.status < 400) {
let e;
try {
e = JSON.parse(t.responseText);
} catch (e) {
this.getCheckUpdate();
return;
}
console.log("downLoad_NewVerson:" + e.version);
if (this.oldmanifest && r.compareVersion(e.version, this.oldmanifest.version) <= 0) this.onAreadyUpToDate(); else {
this._downloadIdx = 0;
this._manifestsUrl = e.manifest_url;
this.downloader = new jsb.Downloader();
this.dowonLoadManifest();
}
}
};
t.onerror = () => {
console.log("downLoad_checkUpdate_onerror:" + e);
this.getCheckUpdate();
};
t.ontimeout = () => {
console.log("downLoad_checkUpdate_ontimeout:" + e);
this.getCheckUpdate();
};
}
dowonLoadManifest() {
this.state = a.PREDOWNLOAD_MANIFEST;
const e = this._manifestsUrl[this._downloadIdx++];
if (!e) {
this.onUpdateFailed(i.ERROR_DOWNLOAD_MANIFEST);
return;
}
const t = `${this.storagePath}/${this.projectName}${n}`;
this.removeTmpFile(t);
console.log("dowonLoadManifest Start:" + e + "  path:" + t);
jsb.fileUtils.isDirectoryExist(this.storagePath) || jsb.fileUtils.createDirectory(this.storagePath);
this.downloader.createDownloadFileTask(e, t);
const s = this;
this.downloader.setOnFileTaskSuccess(e => {
console.log("dowonLoadManifest:" + e.storagePath);
s.state = a.DOWNLOADING_MANIFEST;
const t = jsb.fileUtils.getStringFromFile(e.storagePath);
try {
s.newmanifest = JSON.parse(t);
} catch (e) {
s.newmanifest = null;
}
s.newmanifest ? s.checkNeedDownLoadFiles() : setTimeout(function() {
s.dowonLoadManifest();
});
});
this.downloader.setOnTaskError((e, t, i, a) => {
console.log("dowonLoadManifest error:" + t + " errorStr:" + a);
setTimeout(function() {
s.dowonLoadManifest();
});
});
}
checkNeedDownLoadFiles() {
var e;
this.state = a.READY_TO_UPDATE;
this.needDownLoadList = new Map();
this.downLoadedList = new Map();
const t = this.newmanifest.file_list, s = null === (e = this.oldmanifest) || void 0 === e ? void 0 : e.file_list;
this._file_Urls = this.newmanifest.file_url;
for (const e in t) {
const i = t[e];
if (s) {
const t = s[e];
if (t && t.md5 == i.md5) continue;
}
let a = this.storagePath + e;
const o = a + n;
if (jsb.fileUtils.isFileExist(o)) {
const t = jsb.fileUtils.getFileSize(o);
if (i.size == t) {
this.downLoadedList.set(e, {
path: o,
realPath: a
});
continue;
}
}
this.needDownLoadList.set(e, {
url: i.name,
path: a,
md5: i.md5,
size: i.size,
times: 0,
key: e
});
this.removeTmpFile(a + n);
a = jsb.fileUtils.getFileDir(a);
jsb.fileUtils.isDirectoryExist(a) || jsb.fileUtils.createDirectory(a);
}
this.downLoadFiles();
}
downLoadFiles() {
this.state = a.UPDATING;
let e = this.needDownLoadList.size;
console.log("downLoadFileNum:" + e);
if (e <= 0) {
this.changeNames();
return;
}
e += this.downLoadedList.size;
this.needDownLoadList.forEach((e, t) => {
const s = this._file_Urls[0] + e.url, i = e.path + n;
this.downloader.createDownloadFileTask(s, i, t);
});
const t = this;
this.downloader.setOnTaskError((e, s, a, o) => {
const r = t.needDownLoadList.get(e.identifier);
console.log("downloader_FilesOnError:" + e.requestURL + "  errorStr:" + o + "  errorCode:" + s + "  errorCodeInternal:" + a);
if (r && r.times < l) {
r.times++;
const e = r.times % t._file_Urls.length;
setTimeout(() => {
var s;
if (r) {
t.removeTmpFile(r.path + n);
null === (s = t.downloader) || void 0 === s || s.createDownloadFileTask(t._file_Urls[e] + r.url, r.path + n, r.key);
}
});
} else t.onUpdateFailed(i.ERROR_UPDATING);
});
this.downloader.setOnFileTaskSuccess(s => {
const a = t.needDownLoadList.get(s.identifier), o = jsb.fileUtils.getFileSize(s.storagePath);
if (a) if (o == a.size) {
t.downLoadedList.set(s.identifier, {
path: s.storagePath,
realPath: a.path
});
t.downLoadedList.size < e ? t.onDownloading(t.downLoadedList.size / e) : t.changeNames();
} else if (a && a.times < l) {
a.times++;
const e = a.times % t._file_Urls.length;
t.removeOldFile(s.storagePath);
setTimeout(() => {
var s;
a && (null === (s = t.downloader) || void 0 === s || s.createDownloadFileTask(t._file_Urls[e] + a.url, a.path + n, a.key));
});
} else t.onUpdateFailed(i.ERROR_UPDATING); else {
console.error("downLoad Error:" + s.identifier + " __requestURL:" + s.requestURL + " __storagePath:" + s.storagePath);
t.onUpdateFailed(i.ERROR_UPDATING);
}
});
}
changeNames() {
console.log("downLoad End changeNames");
this.downLoadedList.forEach(e => {
this.removeOldFile(e.realPath);
jsb.fileUtils.renameFile(e.path, e.realPath);
});
const e = this;
setTimeout(() => {
var t;
console.log("downLoad changeManifestName");
const s = `${e.storagePath}/${e.projectName}`;
e.removeOldFile(s);
jsb.fileUtils.renameFile(`${e.storagePath}/${e.projectName}${n}`, s);
e.curVersion = null === (t = e.newmanifest) || void 0 === t ? void 0 : t.version;
e.onAreadyUpToDate();
});
}
removeOldFile(e) {
jsb.fileUtils.isFileExist(e) && jsb.fileUtils.removeFile(e);
}
removeTmpFile(e) {
jsb.fileUtils.isFileExist(e) && jsb.fileUtils.removeFile(e);
jsb.fileUtils.isFileExist(e + ".tmp") && jsb.fileUtils.removeFile(e + ".tmp");
}
onAreadyUpToDate() {
this.isLoaded = !0;
this.state = a.UP_TO_DATE;
if (this.downloader) {
this.downloader.setOnFileTaskSuccess(() => null);
this.downloader.setOnTaskProgress(() => null);
this.downloader.setOnTaskError(() => null);
this.downloader = null;
}
this._handler && this._handler.onReady(this._package, this.curVersion);
}
onUpdateFailed(e) {
if (this.downloader) {
this.downloader.setOnFileTaskSuccess(() => null);
this.downloader.setOnTaskProgress(() => null);
this.downloader.setOnTaskError(() => null);
this.downloader = null;
}
this.state = a.FAIL_TO_UPDATE;
this.isLoaded = !1;
console.log(`onUpdateFailed(${this._package})+${e.toString()}`);
this._handler && this._handler.onFailed(this._package, e);
}
onDownloading(e) {
this._handler && this._handler.onProgress(this._package, e);
}
getString(e, t) {
const s = `${this.storagePath}${e}`;
if (t && jsb.fileUtils.isFileExist(s)) return jsb.fileUtils.getStringFromFile(s);
}
}
s.BundleUpdatorV3 = r;
r.ROOTPath = "gfplugin3";
r.ROOTPathTest = "gfplugin3Test";
r.KW_TEST_CONFIG_HOTUPDATE_ENV = "LIAN_YUN_GAME_KW_TEST_CONFIG_HOTUPDATE_ENV";
r.KW_TEST_CONFIG_SRS_ENV = "LIAN_YUN_GAME_KW_TEST_CONFIG_SRS_ENV";
r.KW_TEST_CONFIG_CHANNELID_ENV = "LIAN_YUN_GAME_KW_TEST_CONFIG_CHANNELID_ENV";
r._isNoUpdate = !1;
cc._RF.pop();
}, {} ],
IPlugin: [ function(e, t, s) {
"use strict";
cc._RF.push(t, "674e8vM+8tN2ILiCJjzL9Bd", "IPlugin");
Object.defineProperty(s, "__esModule", {
value: !0
});
cc._RF.pop();
}, {} ],
PluginGame: [ function(e, t, s) {
"use strict";
cc._RF.push(t, "e6a53Snv4lOFK4a8JqGb2i2", "PluginGame");
Object.defineProperty(s, "__esModule", {
value: !0
});
s.PluginGame = void 0;
const i = e("./update/BundleUpdatorV3");
class a {
constructor(e, t, s, i, a, o, n) {
this._gamesConfig = null;
this._gamesUpdateUrl = {};
this._lobbyReady = !1;
this._gameReady = {};
this.gameUpdator = {};
this._updateCallbackOnce = new Map();
this._updateCallbackProgress = new Map();
this._gameId = e;
this._hostId = t;
this._hostGameId = s;
this._lobbyUpdateUrl = i;
this._getShopItems = a;
this._isHotupdateDebug = o;
this._helper = n;
}
onFailed(e, t) {
var s, i;
console.log(`failed to  update ${e} code: ${t.toString()}`);
if ("lobby" == e) if (this.lobbyUpdator.curVersion) {
console.log("use old game-lobby");
this._lobbyReady = this.lobbyUpdator.curVersion;
this._updateLobbyCallback && this._updateLobbyCallback(-1, "lobby下载失败，但是本地已安装，可以使用老版本继续");
} else this._updateLobbyCallback && this._updateLobbyCallback(-1, "lobby下载失败"); else if (null === (s = this.gameUpdator[e]) || void 0 === s ? void 0 : s.curVersion) {
console.log(`use old game-${e}`);
this._gameReady[e] = null === (i = this.gameUpdator[e]) || void 0 === i ? void 0 : i.curVersion;
this._updateGameCallback && this._updateGameCallback(-1, "game下载失败，但是本地已安装，使用老版本", e);
} else this._updateGameCallback && this._updateGameCallback(-1, "game下载失败", e);
if (this._updateCallbackOnce.has(e)) {
this._updateCallbackOnce.get(e)(e, "");
this._updateCallbackOnce.delete(e);
this._updateCallbackProgress.has(e) && this._updateCallbackProgress.delete(e);
}
}
onReady(e, t) {
console.log(`${e}更新完成`);
if ("lobby" == e) {
this._lobbyReady = t;
this._helper.prepareGF(this._gameId, (e, s) => {
if (!e) {
this.setGameConfig(s);
this.updateGamesIfInLocal();
}
this._updateLobbyCallback && (e ? this._updateLobbyCallback(-1, "lobby加载gf错误") : this._updateLobbyCallback(1.1, t));
});
} else {
this._gameReady[e] = t;
this._updateGameCallback && this._updateGameCallback(1.1, t, e);
}
this._gf && this._gf.resVerson.set(e, t);
if (this._updateCallbackOnce.has(e)) {
this._updateCallbackOnce.get(e)(e, t);
this._updateCallbackOnce.delete(e);
this._updateCallbackProgress.has(e) && this._updateCallbackProgress.delete(e);
}
}
onProgress(e, t) {
"lobby" == e ? this._updateLobbyCallback && this._updateLobbyCallback(t, "") : e == `${this.gameId}_game` && this._updateGameCallback && this._updateGameCallback(t, "", e);
this._updateCallbackProgress.has(e) && this._updateCallbackProgress.get(e)(e, t);
}
get gameId() {
return this._gameId;
}
get lobbyReady() {
return this._lobbyReady;
}
get gameReady() {
return this._gameReady;
}
setGameConfig(e) {
if (!this._gamesConfig) {
this._gamesConfig = e;
for (let e = 0; e < this._gamesConfig.games.length; e++) {
const t = this._gamesConfig.games[e];
this._gamesUpdateUrl[t.id] = t.hotupdateUrl;
}
}
}
updateLobby(e, t) {
this._updateGameCallback = t;
if (this._lobbyReady) {
e && e(1.1, "lobby已更新");
this.updateGamesIfInLocal();
} else {
this._updateLobbyCallback = e;
this._helper.addPath(this._isHotupdateDebug);
this.doUpdateLobby();
}
}
doUpdateLobby() {
if (this._lobbyReady) this._updateLobbyCallback && this._updateLobbyCallback(1.1, this._lobbyReady); else {
if (!this.lobbyUpdator) {
let e = new i.BundleUpdatorV3(this._hostId, this.gameId, "lobby", this._lobbyUpdateUrl, this._isHotupdateDebug);
e.handler = this;
this.lobbyUpdator = e;
}
this.lobbyUpdator.startUpDate();
}
}
updateGamesIfInLocal() {
for (const e in this._gamesUpdateUrl) this.updateGameIfInLocal(e);
}
updateGameIfInLocal(e) {
if (this._gameReady[e]) this._updateGameCallback && this._updateGameCallback(1.1, this._gameReady[e], e); else {
if (!this.gameUpdator[e]) {
let t = new i.BundleUpdatorV3(this._hostId, this.gameId, e, this._gamesUpdateUrl[e], this._isHotupdateDebug);
t.handler = this;
this.gameUpdator[e] = t;
}
this.gameUpdator[e].curVersion && this.gameUpdator[e].startUpDate();
}
}
updateGames() {
for (const e in this._gamesUpdateUrl) this.updateGame(e);
}
updateGame(e) {
if (this._gameReady[e]) this._updateGameCallback && this._updateGameCallback(1.1, this._gameReady[e], e); else {
if (!this.gameUpdator[e]) {
let t = new i.BundleUpdatorV3(this._hostId, this.gameId, e, this._gamesUpdateUrl[e], this._isHotupdateDebug);
t.handler = this;
this.gameUpdator[e] = t;
}
this.gameUpdator[e].startUpDate();
}
}
notifyPropsChange(e) {
this._gf && this._gf.App.inst.context.getBean(this._gf.IGamePlugin).updateProps(e);
}
enterLobby(e, t, s, i, a, o) {
if (!this.lobbyReady) throw "lobby not ready";
e.loginServerUrl = this._gamesConfig.loginServerUrl;
this._helper.loadGf(o => {
console.log("LianYun enterLobby loadGf success");
this.prepareGf(e, t, s, i, a, o);
let n = this._gf.App.inst;
console.log("enterLobby prepareContext common");
n.prepareContext("common", "common");
});
o && this._gamesUpdateUrl[o] ? this.updateGame(o) : this.updateGames();
}
prepareGf(e, t, s, i, a, o) {
if (this._gf) {
window.gameframe = this._gf;
console.log("prepareGf use old gf");
} else {
console.log("prepareGf start to eval gf code");
console.log("prepareGf gf ready");
this._gf = o;
this._lobbyReady && this._gf.resVerson.set("lobby", this._lobbyReady);
if (this._gameReady) for (const e in this._gameReady) if (Object.prototype.hasOwnProperty.call(this._gameReady, e)) {
const t = this._gameReady[e];
this._gf.resVerson.set(e, t);
}
}
let n = this._gf.App.inst;
console.log("prepareGf get app instance ", n);
this._gf.setDEBUG(this._isHotupdateDebug);
n.context.getBean(this._gf.IHostResource).initHostResouce(a, new Map(), e.systemFont);
n.context.getBean(this._gf.IGamePlugin).enterPluginMode({
area: e.areaId,
game: this._hostGameId,
platformId: e.platformId,
hostAttribute: e.attribute
}, {
area: this._gamesConfig.area,
game: this._gameId,
loginServerUrl: e.loginServerUrl
}, t, {
onPropBroken: i.onBroken,
onPropsChange: i.onRefreshProps,
onRefreshToken: i.onRefreshToken,
onQuit: (e, t) => {
this.onExit();
i.onExit(e, t);
},
onEntered: i.onEntered,
buyHostShopItem: i.buyHostShopItem,
buyCommonShopItem: i.buyCommonShopItem
}, s, this.prepareBundule.bind(this), this._getShopItems, e.audioInterface);
console.log("prepareGf app entered plugin mode");
}
prepareBundule(e, t, s) {
let a = this._helper.gameNameBundule2Sign(this.gameId);
console.log(`prepareBundule:${e} isgame:gameRName`);
if (e.indexOf(a) >= 0) {
let i = e.replace(a, "game");
if (this._gameReady[i]) {
t(e, this._gameReady[i]);
return !0;
}
this._updateCallbackOnce.set(i, t);
s && this._updateCallbackProgress.set(i, s);
this.updateGame(i);
} else {
if (this._lobbyReady) {
t(e, this._lobbyReady);
return !0;
}
this._updateCallbackOnce.set("lobby", t);
s && this._updateCallbackProgress.set("lobby", s);
if (!this.lobbyUpdator) {
let e = new i.BundleUpdatorV3(this._hostId, this.gameId, "lobby", this._lobbyUpdateUrl, this._isHotupdateDebug);
e.handler = this;
this.lobbyUpdator = e;
}
this.lobbyUpdator.startUpDate();
}
}
onExit() {
this._helper.unloadFgui();
this._gf = null;
}
exitPlugin() {
this._gf.App.inst.context.getBean(this._gf.IGamePlugin).leavePluginMode();
}
}
s.PluginGame = a;
a.isWeiXin = "undefined" != typeof window.wx && "undefined" != typeof window.wx.updateWeChatApp;
cc._RF.pop();
}, {
"./update/BundleUpdatorV3": "BundleUpdatorV3"
} ],
Plugin: [ function(e, t, s) {
"use strict";
cc._RF.push(t, "233bcLBEppHI7NbVY0Up/kh", "Plugin");
Object.defineProperty(s, "__esModule", {
value: !0
});
s.Plugin = void 0;
const i = e("./PluginGame"), a = e("./update/BundleUpdatorV3");
class o {
constructor(e) {
this._games = [];
this._configReady = !1;
this._helper = e;
}
Init(e, t, s, i, o) {
this._configReady && e != this._pluginContainerAreaId && console.error("wrong container!");
this._audioInterface = t.audioInterface;
this._hostInfos = {
onBroken: t.onBroken,
onRefreshProps: t.onRefreshProps,
onRefreshToken: t.onRefreshToken,
onExit: t.onExit,
onEntered: t.onEntered,
buyHostShopItem: s.buyHostShopItem,
buyCommonShopItem: s.buyCommonShopItem
};
this._callback = s;
this._getShopItems = t.getShopItems;
this._systemFont = i;
this._helper.loadConfig(e => {
if (e) {
this._isHotupdateDebug = o || e.hotupdateMode != a.Env_Mode.normal || this._helper.engineISDEBUG;
this.onLoadConfig(e);
}
});
}
onLoadConfig(e) {
var t, s;
if (this._configReady) for (let e = 0; e < this._games.length; e++) this._games[e].updateLobby(null === (t = this._callback) || void 0 === t ? void 0 : t.lobbyUpdate, this._callback.gameUpdate); else {
this._pluginContainerId = e.pluginContainerId;
this._platformId = e.platformId;
this._pluginContainerAreaId = e.pluginContainerAreaId;
this._configReady = !0;
for (let t = 0; t < e.games.length; t++) {
let a = e.games[t], o = new i.PluginGame(a.id, this._platformId, this._pluginContainerId, a.hotupdateUrl, this._getShopItems, this._isHotupdateDebug, this._helper);
this._games.push(o);
o.updateLobby(null === (s = this._callback) || void 0 === s ? void 0 : s.lobbyUpdate, this._callback.gameUpdate);
}
}
}
GetGameInfo() {
let e = [];
if (this._configReady) for (let t = 0; t < this._games.length; t++) {
let s = this._games[t];
e.push({
id: s.gameId,
lobbyReady: s.lobbyReady,
gameReady: s.gameReady
});
}
return e;
}
EnterGame(e, t, s, i, a, o, n) {
console.log("LianYun EnterGame");
if (!this._configReady) {
console.error("Not ready " + e);
return {
success: !1,
message: "Not ready"
};
}
i || (i = this._pluginContainerAreaId);
let l = this._helper.initFgui();
console.log("LianYun EnterGame", this._games);
for (let r = 0; r < this._games.length; r++) {
let d = this._games[r];
if (d.gameId == e) {
if (!d.lobbyReady) return {
success: !1,
message: "Updating"
};
let e = {
area: i,
userId: s,
props: t
};
this._curGame = d;
d.enterLobby({
areaId: this._pluginContainerAreaId,
platformId: this._platformId,
systemFont: this._systemFont,
attribute: o,
audioInterface: this._audioInterface
}, e, l, this._hostInfos, a, n);
return {
success: !0
};
}
}
console.error("No game: " + e);
return {
success: !1,
message: "No game"
};
}
UpdateProps(e) {
var t;
null === (t = this._curGame) || void 0 === t || t.notifyPropsChange(e);
}
Disconnect() {
var e;
null === (e = this._curGame) || void 0 === e || e.exitPlugin();
}
}
s.Plugin = o;
o.isWeiXin = "undefined" != typeof window.wx && "undefined" != typeof window.wx.updateWeChatApp;
cc._RF.pop();
}, {
"./PluginGame": "PluginGame",
"./update/BundleUpdatorV3": "BundleUpdatorV3"
} ],
cocos2xPlugin: [ function(require, module, exports) {
"use strict";
cc._RF.push(module, "3390fr5s4tGMLFPb1k5wxVR", "cocos2xPlugin");
var __decorate = this && this.__decorate || function(e, t, s, i) {
var a, o = arguments.length, n = o < 3 ? t : null === i ? i = Object.getOwnPropertyDescriptor(t, s) : i;
if ("object" == typeof Reflect && "function" == typeof Reflect.decorate) n = Reflect.decorate(e, t, s, i); else for (var l = e.length - 1; l >= 0; l--) (a = e[l]) && (n = (o < 3 ? a(n) : o > 3 ? a(t, s, n) : a(t, s)) || n);
return o > 3 && n && Object.defineProperty(t, s, n), n;
};
Object.defineProperty(exports, "__esModule", {
value: !0
});
exports.Cocos2xPlugin = void 0;
const Plugin_1 = require("./Plugin"), BundleUpdatorV3_1 = require("./update/BundleUpdatorV3"), {ccclass: ccclass} = cc._decorator;
let Cocos2xPlugin = class Cocos2xPlugin extends cc.Component {
constructor() {
super(...arguments);
this.engineISDEBUG = !1;
this._plugin = null;
this.gfpluginBundle = null;
this.PluginHelperBundle = null;
this._isDebug = !1;
this._fgui = null;
this._createfgui = null;
this._creategf = null;
this._gf = null;
this.gameConfig = null;
}
Init(e, t, s, i, a = !1) {
this._isDebug = a;
this.gfpluginBundle = cc.assetManager.getBundle("gfplugin");
this._plugin = new Plugin_1.Plugin(this);
this._plugin.Init(e, t, s, i, a);
}
setNoUpdate(e = !0) {
BundleUpdatorV3_1.BundleUpdatorV3._isNoUpdate = e;
}
GetGameInfo() {
return this._plugin.GetGameInfo();
}
EnterGame(e, t, s, i, a, o, n) {
return this._plugin.EnterGame(e, t, s, i, a, o, n);
}
UpdateProps(e) {
this._plugin.UpdateProps(e);
}
Disconnect() {
this._plugin.Disconnect();
}
loadConfig(e) {
this.gfpluginBundle.load("config/plugin", (t, s) => {
if (t) {
console.log("load config/plugin error:" + t);
e(null);
} else e(s.json);
});
}
prepareGF(name, callback) {
this._gf ? callback(null, this.gameConfig) : cc.assetManager.loadBundle("gfpluginHelper", (err, data) => {
if (data) {
this.PluginHelperBundle = data;
if (window.wx) {
let e = window.require;
window.LoadJsDirectory = function(t, s, i) {
s = "lobby" == s || "common" == s ? `plugingames/lobby/${t}/jsresources/${s}.js` : `plugingames/games/${t}/jsresources/${s}.js`;
console.log("LoadJsDirectory name:" + s);
e(s);
i();
};
}
this._createfgui = window.createFgui;
this._creategf = window.createGf;
this._creategf ? this.loadGamesConfig(callback) : this.PluginHelperBundle.load("jsresources/gameframe", (err, data) => {
if (data) {
let CryptoJS = window.CryptoJS, gfstr = data._nativeAsset;
const bytes = CryptoJS.AES.decrypt(gfstr, "YourSecretKeygf"), decryptedData = bytes.toString(CryptoJS.enc.Utf8);
eval(decryptedData);
this._creategf = window.createGf;
this.loadGamesConfig(callback);
} else callback(err.message);
});
} else callback(err.message);
});
}
addPath(e) {
if (BundleUpdatorV3_1.BundleUpdatorV3.isSkipUpdate || !window.jsb) return;
const t = BundleUpdatorV3_1.BundleUpdatorV3.getInt(BundleUpdatorV3_1.BundleUpdatorV3.KW_TEST_CONFIG_HOTUPDATE_ENV, -1);
-1 != t ? t != BundleUpdatorV3_1.Env_Mode.normal && (BundleUpdatorV3_1.BundleUpdatorV3.ROOTPath = BundleUpdatorV3_1.BundleUpdatorV3.ROOTPathTest) : e && (BundleUpdatorV3_1.BundleUpdatorV3.ROOTPath = BundleUpdatorV3_1.BundleUpdatorV3.ROOTPathTest);
const s = jsb.fileUtils.getSearchPaths();
for (const e of s) if (e.indexOf(BundleUpdatorV3_1.BundleUpdatorV3.ROOTPath) >= 0) return;
console.log("downLoad_addSearchPath" + `${jsb.fileUtils.getWritablePath()}/${BundleUpdatorV3_1.BundleUpdatorV3.ROOTPath}`);
jsb.fileUtils.addSearchPath(`${jsb.fileUtils.getWritablePath()}/${BundleUpdatorV3_1.BundleUpdatorV3.ROOTPath}`, !0);
}
loadGamesConfig(e) {
this.PluginHelperBundle.load("config/games", (t, s) => {
if (s) {
this.gameConfig = s.json;
e(null, this.gameConfig);
} else e(t.message);
});
}
initFgui() {
var e;
this._createfgui && !this._fgui && (this._fgui = this._createfgui());
try {
if (!(null === (e = this._fgui.GRoot.inst.node) || void 0 === e ? void 0 : e.isValid)) throw "Call GRoot.create is !";
if (!("$gobj" in this.node)) {
console.warn("not a fgui node!, use root");
return this._fgui.GRoot.inst.node;
}
return this.node;
} catch (e) {
this._fgui.GRoot.create(this.node, 1334, 750);
this._fgui.GRoot.inst.width / this._fgui.GRoot.inst.height > 17 / 9 ? this._fgui.UIConfig.safeAreaLeft = 100 : this._fgui.UIConfig.safeAreaLeft = 0;
return this._fgui.GRoot.inst.node;
}
}
loadGf(e) {
if (this._gf) e(this._gf, this._fgui); else if (this._creategf) {
this._gf = this._creategf();
this._gf.protobuf = window.gfplugin_protobuf;
this._gf.Long = window.gfplugin_long;
this._gf.setDEBUG(this._isDebug);
e(this._gf, this._fgui);
}
}
gameNameBundule2Sign(e) {
return `${e}_game`;
}
unloadFgui() {
try {
this._fgui.GRoot.inst.dispose();
} catch (e) {
console.log(e);
}
}
};
Cocos2xPlugin = __decorate([ ccclass("Cocos2xPlugin") ], Cocos2xPlugin);
exports.Cocos2xPlugin = Cocos2xPlugin;
cc._RF.pop();
}, {
"./Plugin": "Plugin",
"./update/BundleUpdatorV3": "BundleUpdatorV3"
} ]
}, {}, [ "IPlugin", "Plugin", "PluginGame", "cocos2xPlugin", "BundleUpdatorV3" ]);