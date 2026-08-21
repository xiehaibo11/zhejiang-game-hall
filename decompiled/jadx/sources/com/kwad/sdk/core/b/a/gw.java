package com.kwad.sdk.core.b.a;

import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.kwad.sdk.core.report.r;
import com.kwad.sdk.core.scene.URLPackage;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class gw implements com.kwad.sdk.core.d<com.kwad.sdk.core.report.r> {
    private static void a(com.kwad.sdk.core.report.r rVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        rVar.timestamp = jSONObject.optLong("timestamp");
        rVar.sessionId = jSONObject.optString("sessionId");
        if (rVar.sessionId == JSONObject.NULL) {
            rVar.sessionId = "";
        }
        rVar.HU = jSONObject.optLong("seq");
        rVar.aro = jSONObject.optLong("listId");
        rVar.arp = jSONObject.optLong("actionType");
        rVar.UP = jSONObject.optString("payload");
        if (rVar.UP == JSONObject.NULL) {
            rVar.UP = "";
        }
        rVar.llsid = jSONObject.optLong("llsid");
        rVar.arq = jSONObject.optJSONObject("extra");
        rVar.arr = jSONObject.optJSONObject("impAdExtra");
        rVar.posId = jSONObject.optLong("posId");
        rVar.contentType = jSONObject.optInt("contentType");
        rVar.realShowType = jSONObject.optInt("realShowType");
        rVar.photoId = jSONObject.optLong("photoId");
        rVar.position = jSONObject.optLong(RequestParameters.POSITION);
        rVar.ars = jSONObject.optLong("serverPosition");
        rVar.art = jSONObject.optLong("photoDuration");
        rVar.aru = jSONObject.optLong("effectivePlayDuration");
        rVar.Xf = jSONObject.optLong("playDuration");
        rVar.blockDuration = jSONObject.optLong("blockDuration");
        rVar.arv = jSONObject.optLong("intervalDuration");
        rVar.arw = jSONObject.optLong("allIntervalDuration");
        rVar.arx = jSONObject.optLong("flowSdk");
        rVar.ary = jSONObject.optLong("blockTimes");
        rVar.contentSourceType = jSONObject.optInt("contentSourceType", new Integer("0").intValue());
        rVar.arz = jSONObject.optInt("adAggPageSource");
        rVar.entryPageSource = jSONObject.optString("entryPageSource");
        if (rVar.entryPageSource == JSONObject.NULL) {
            rVar.entryPageSource = "";
        }
        rVar.urlPackage = new URLPackage();
        rVar.urlPackage.parseJson(jSONObject.optJSONObject("urlPackage"));
        rVar.arA = new URLPackage();
        rVar.arA.parseJson(jSONObject.optJSONObject("referURLPackage"));
        rVar.Qr = jSONObject.optLong(URLPackage.KEY_AUTHOR_ID);
        rVar.arB = jSONObject.optString("photoSize");
        if (rVar.arB == JSONObject.NULL) {
            rVar.arB = "";
        }
        rVar.arC = jSONObject.optJSONArray("appInstalled");
        rVar.arD = jSONObject.optJSONArray("appUninstalled");
        rVar.arE = new r.a();
        rVar.arE.parseJson(jSONObject.optJSONObject("clientExt"));
        rVar.arF = jSONObject.optInt("playerType");
        rVar.arG = jSONObject.optInt("uiType");
        rVar.arH = jSONObject.optInt("isLeftSlipStatus", new Integer("0").intValue());
        rVar.UQ = jSONObject.optInt("refreshType");
        rVar.arI = jSONObject.optInt("photoResponseType", new Integer("0").intValue());
        rVar.arJ = jSONObject.optString("failUrl");
        if (rVar.arJ == JSONObject.NULL) {
            rVar.arJ = "";
        }
        rVar.errorMsg = jSONObject.optString("errorMsg");
        if (rVar.errorMsg == JSONObject.NULL) {
            rVar.errorMsg = "";
        }
        rVar.errorCode = jSONObject.optInt("errorCode", new Integer("0").intValue());
        rVar.creativeId = jSONObject.optLong("creativeId");
        rVar.arM = jSONObject.optString("cacheFailedReason");
        if (rVar.arM == JSONObject.NULL) {
            rVar.arM = "";
        }
        rVar.arN = jSONObject.optJSONObject("appExt");
        rVar.arO = jSONObject.optJSONArray("appRunningInfoList");
        rVar.downloadDuration = jSONObject.optLong("downloadDuration");
        rVar.pageType = jSONObject.optInt("pageType", new Integer("0").intValue());
        rVar.arP = jSONObject.optInt("speedLimitStatus");
        rVar.arQ = jSONObject.optInt("speedLimitThreshold");
        rVar.arR = jSONObject.optInt("currentRealDownloadSpeed");
        rVar.arT = jSONObject.optJSONArray("sdkPlatform");
        rVar.arU = jSONObject.optBoolean("isKsUnion");
        rVar.arV = jSONObject.optString("trackMethodName");
        if (rVar.arV == JSONObject.NULL) {
            rVar.arV = "";
        }
        rVar.arW = jSONObject.optInt("viewModeType", new Integer("0").intValue());
        rVar.clickTime = jSONObject.optLong("clickTime");
        rVar.arY = jSONObject.optLong("frameRenderTime");
        rVar.arZ = jSONObject.optInt("playerEnterAction");
        rVar.asa = jSONObject.optString("requestUrl");
        if (rVar.asa == JSONObject.NULL) {
            rVar.asa = "";
        }
        rVar.asb = jSONObject.optLong("requestTotalTime");
        rVar.asc = jSONObject.optLong("requestResponseTime");
        rVar.asd = jSONObject.optLong("requestParseDataTime");
        rVar.ase = jSONObject.optLong("requestCallbackTime");
        rVar.asf = jSONObject.optString("requestFailReason");
        if (rVar.asf == JSONObject.NULL) {
            rVar.asf = "";
        }
        rVar.Pp = jSONObject.optString("pageName");
        if (rVar.Pp == JSONObject.NULL) {
            rVar.Pp = "";
        }
        rVar.Pw = jSONObject.optLong("pageCreateTime");
        rVar.Px = jSONObject.optLong("pageResumeTime");
        rVar.asg = jSONObject.optInt("trackUrlType");
        rVar.ash = jSONObject.optJSONArray("trackUrlList");
        rVar.Pv = jSONObject.optLong("pageLaunchTime");
        rVar.ask = jSONObject.optJSONArray("appAuthorityInfoList");
        rVar.asl = jSONObject.optString("tkVersion");
        if (rVar.asl == JSONObject.NULL) {
            rVar.asl = "";
        }
        rVar.asm = jSONObject.optString("jsVersion");
        if (rVar.asm == JSONObject.NULL) {
            rVar.asm = "";
        }
        rVar.asn = jSONObject.optString("jsFileName");
        if (rVar.asn == JSONObject.NULL) {
            rVar.asn = "";
        }
        rVar.aso = jSONObject.optString("jsErrorMsg");
        if (rVar.aso == JSONObject.NULL) {
            rVar.aso = "";
        }
        rVar.asp = jSONObject.optString("jsConfig");
        if (rVar.asp == JSONObject.NULL) {
            rVar.asp = "";
        }
        rVar.asq = jSONObject.optInt("adBizType");
        rVar.asr = jSONObject.optString("customKey");
        if (rVar.asr == JSONObject.NULL) {
            rVar.asr = "";
        }
        rVar.ass = jSONObject.optString("customValue");
        if (rVar.ass == JSONObject.NULL) {
            rVar.ass = "";
        }
        rVar.trace = jSONObject.optString("trace");
        if (rVar.trace == JSONObject.NULL) {
            rVar.trace = "";
        }
        rVar.ast = jSONObject.optInt("filterCode");
        rVar.asu = jSONObject.optInt("sdkVersionCode");
        rVar.sdkVersion = jSONObject.optString(com.heytap.mcssdk.constant.b.C);
        if (rVar.sdkVersion == JSONObject.NULL) {
            rVar.sdkVersion = "";
        }
        rVar.Uj = jSONObject.optString("sdkApiVersion");
        if (rVar.Uj == JSONObject.NULL) {
            rVar.Uj = "";
        }
        rVar.Ul = jSONObject.optInt("sdkType");
        rVar.asv = jSONObject.optLong("appUseDuration");
        rVar.asw = jSONObject.optLong("appStartType");
        rVar.ant = jSONObject.optLong("sequenceNumber");
        rVar.HR = jSONObject.optString("appColdStart");
        if (rVar.HR == JSONObject.NULL) {
            rVar.HR = "";
        }
        rVar.HS = jSONObject.optString("appStart");
        if (rVar.HS == JSONObject.NULL) {
            rVar.HS = "";
        }
    }

    private static JSONObject b(com.kwad.sdk.core.report.r rVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (rVar.timestamp != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "timestamp", rVar.timestamp);
        }
        if (rVar.sessionId != null && !rVar.sessionId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sessionId", rVar.sessionId);
        }
        if (rVar.HU != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "seq", rVar.HU);
        }
        if (rVar.aro != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "listId", rVar.aro);
        }
        if (rVar.arp != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "actionType", rVar.arp);
        }
        if (rVar.UP != null && !rVar.UP.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "payload", rVar.UP);
        }
        if (rVar.llsid != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "llsid", rVar.llsid);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "extra", rVar.arq);
        com.kwad.sdk.utils.t.putValue(jSONObject, "impAdExtra", rVar.arr);
        if (rVar.posId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "posId", rVar.posId);
        }
        if (rVar.contentType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "contentType", rVar.contentType);
        }
        if (rVar.realShowType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "realShowType", rVar.realShowType);
        }
        if (rVar.photoId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "photoId", rVar.photoId);
        }
        if (rVar.position != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, RequestParameters.POSITION, rVar.position);
        }
        if (rVar.ars != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "serverPosition", rVar.ars);
        }
        if (rVar.art != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "photoDuration", rVar.art);
        }
        if (rVar.aru != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "effectivePlayDuration", rVar.aru);
        }
        if (rVar.Xf != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "playDuration", rVar.Xf);
        }
        if (rVar.blockDuration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "blockDuration", rVar.blockDuration);
        }
        if (rVar.arv != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "intervalDuration", rVar.arv);
        }
        if (rVar.arw != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "allIntervalDuration", rVar.arw);
        }
        if (rVar.arx != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "flowSdk", rVar.arx);
        }
        if (rVar.ary != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "blockTimes", rVar.ary);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "contentSourceType", rVar.contentSourceType);
        if (rVar.arz != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adAggPageSource", rVar.arz);
        }
        if (rVar.entryPageSource != null && !rVar.entryPageSource.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "entryPageSource", rVar.entryPageSource);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "urlPackage", rVar.urlPackage);
        com.kwad.sdk.utils.t.a(jSONObject, "referURLPackage", rVar.arA);
        if (rVar.Qr != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, URLPackage.KEY_AUTHOR_ID, rVar.Qr);
        }
        if (rVar.arB != null && !rVar.arB.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "photoSize", rVar.arB);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "appInstalled", rVar.arC);
        com.kwad.sdk.utils.t.putValue(jSONObject, "appUninstalled", rVar.arD);
        com.kwad.sdk.utils.t.a(jSONObject, "clientExt", rVar.arE);
        if (rVar.arF != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "playerType", rVar.arF);
        }
        if (rVar.arG != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "uiType", rVar.arG);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "isLeftSlipStatus", rVar.arH);
        if (rVar.UQ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "refreshType", rVar.UQ);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "photoResponseType", rVar.arI);
        if (rVar.arJ != null && !rVar.arJ.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "failUrl", rVar.arJ);
        }
        if (rVar.errorMsg != null && !rVar.errorMsg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "errorMsg", rVar.errorMsg);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "errorCode", rVar.errorCode);
        if (rVar.creativeId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "creativeId", rVar.creativeId);
        }
        if (rVar.arM != null && !rVar.arM.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "cacheFailedReason", rVar.arM);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "appExt", rVar.arN);
        com.kwad.sdk.utils.t.putValue(jSONObject, "appRunningInfoList", rVar.arO);
        if (rVar.downloadDuration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "downloadDuration", rVar.downloadDuration);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "pageType", rVar.pageType);
        if (rVar.arP != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "speedLimitStatus", rVar.arP);
        }
        if (rVar.arQ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "speedLimitThreshold", rVar.arQ);
        }
        if (rVar.arR != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "currentRealDownloadSpeed", rVar.arR);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "sdkPlatform", rVar.arT);
        if (rVar.arU) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "isKsUnion", rVar.arU);
        }
        if (rVar.arV != null && !rVar.arV.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "trackMethodName", rVar.arV);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "viewModeType", rVar.arW);
        if (rVar.clickTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "clickTime", rVar.clickTime);
        }
        if (rVar.arY != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "frameRenderTime", rVar.arY);
        }
        if (rVar.arZ != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "playerEnterAction", rVar.arZ);
        }
        if (rVar.asa != null && !rVar.asa.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "requestUrl", rVar.asa);
        }
        if (rVar.asb != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "requestTotalTime", rVar.asb);
        }
        if (rVar.asc != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "requestResponseTime", rVar.asc);
        }
        if (rVar.asd != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "requestParseDataTime", rVar.asd);
        }
        if (rVar.ase != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "requestCallbackTime", rVar.ase);
        }
        if (rVar.asf != null && !rVar.asf.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "requestFailReason", rVar.asf);
        }
        if (rVar.Pp != null && !rVar.Pp.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "pageName", rVar.Pp);
        }
        if (rVar.Pw != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "pageCreateTime", rVar.Pw);
        }
        if (rVar.Px != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "pageResumeTime", rVar.Px);
        }
        if (rVar.asg != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "trackUrlType", rVar.asg);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "trackUrlList", rVar.ash);
        if (rVar.Pv != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "pageLaunchTime", rVar.Pv);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "appAuthorityInfoList", rVar.ask);
        if (rVar.asl != null && !rVar.asl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "tkVersion", rVar.asl);
        }
        if (rVar.asm != null && !rVar.asm.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "jsVersion", rVar.asm);
        }
        if (rVar.asn != null && !rVar.asn.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "jsFileName", rVar.asn);
        }
        if (rVar.aso != null && !rVar.aso.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "jsErrorMsg", rVar.aso);
        }
        if (rVar.asp != null && !rVar.asp.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "jsConfig", rVar.asp);
        }
        if (rVar.asq != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adBizType", rVar.asq);
        }
        if (rVar.asr != null && !rVar.asr.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "customKey", rVar.asr);
        }
        if (rVar.ass != null && !rVar.ass.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "customValue", rVar.ass);
        }
        if (rVar.trace != null && !rVar.trace.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "trace", rVar.trace);
        }
        if (rVar.ast != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "filterCode", rVar.ast);
        }
        if (rVar.asu != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sdkVersionCode", rVar.asu);
        }
        if (rVar.sdkVersion != null && !rVar.sdkVersion.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, com.heytap.mcssdk.constant.b.C, rVar.sdkVersion);
        }
        if (rVar.Uj != null && !rVar.Uj.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sdkApiVersion", rVar.Uj);
        }
        if (rVar.Ul != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sdkType", rVar.Ul);
        }
        if (rVar.asv != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appUseDuration", rVar.asv);
        }
        if (rVar.asw != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appStartType", rVar.asw);
        }
        if (rVar.ant != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sequenceNumber", rVar.ant);
        }
        if (rVar.HR != null && !rVar.HR.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appColdStart", rVar.HR);
        }
        if (rVar.HS != null && !rVar.HS.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appStart", rVar.HS);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.report.r) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.report.r) bVar, jSONObject);
    }
}
