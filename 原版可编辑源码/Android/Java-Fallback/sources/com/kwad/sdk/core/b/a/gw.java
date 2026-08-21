package com.kwad.sdk.core.b.a;

public final class gw implements com.kwad.sdk.core.d<com.kwad.sdk.core.report.r> {
    public gw() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.report.r r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "timestamp"
            long r0 = r6.optLong(r0)
            r5.timestamp = r0
            java.lang.String r0 = "sessionId"
            java.lang.String r0 = r6.optString(r0)
            r5.sessionId = r0
            java.lang.String r0 = r5.sessionId
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L1d
            r5.sessionId = r2
        L1d:
            java.lang.String r0 = "seq"
            long r0 = r6.optLong(r0)
            r5.HU = r0
            java.lang.String r0 = "listId"
            long r0 = r6.optLong(r0)
            r5.aro = r0
            java.lang.String r0 = "actionType"
            long r0 = r6.optLong(r0)
            r5.arp = r0
            java.lang.String r0 = "payload"
            java.lang.String r0 = r6.optString(r0)
            r5.UP = r0
            java.lang.String r0 = r5.UP
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r5.UP = r2
        L45:
            java.lang.String r0 = "llsid"
            long r0 = r6.optLong(r0)
            r5.llsid = r0
            java.lang.String r0 = "extra"
            org.json.JSONObject r0 = r6.optJSONObject(r0)
            r5.arq = r0
            java.lang.String r0 = "impAdExtra"
            org.json.JSONObject r0 = r6.optJSONObject(r0)
            r5.arr = r0
            java.lang.String r0 = "posId"
            long r0 = r6.optLong(r0)
            r5.posId = r0
            java.lang.String r0 = "contentType"
            int r0 = r6.optInt(r0)
            r5.contentType = r0
            java.lang.String r0 = "realShowType"
            int r0 = r6.optInt(r0)
            r5.realShowType = r0
            java.lang.String r0 = "photoId"
            long r0 = r6.optLong(r0)
            r5.photoId = r0
            java.lang.String r0 = "position"
            long r0 = r6.optLong(r0)
            r5.position = r0
            java.lang.String r0 = "serverPosition"
            long r0 = r6.optLong(r0)
            r5.ars = r0
            java.lang.String r0 = "photoDuration"
            long r0 = r6.optLong(r0)
            r5.art = r0
            java.lang.String r0 = "effectivePlayDuration"
            long r0 = r6.optLong(r0)
            r5.aru = r0
            java.lang.String r0 = "playDuration"
            long r0 = r6.optLong(r0)
            r5.Xf = r0
            java.lang.String r0 = "blockDuration"
            long r0 = r6.optLong(r0)
            r5.blockDuration = r0
            java.lang.String r0 = "intervalDuration"
            long r0 = r6.optLong(r0)
            r5.arv = r0
            java.lang.String r0 = "allIntervalDuration"
            long r0 = r6.optLong(r0)
            r5.arw = r0
            java.lang.String r0 = "flowSdk"
            long r0 = r6.optLong(r0)
            r5.arx = r0
            java.lang.String r0 = "blockTimes"
            long r0 = r6.optLong(r0)
            r5.ary = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "0"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r3 = "contentSourceType"
            int r0 = r6.optInt(r3, r0)
            r5.contentSourceType = r0
            java.lang.String r0 = "adAggPageSource"
            int r0 = r6.optInt(r0)
            r5.arz = r0
            java.lang.String r0 = "entryPageSource"
            java.lang.String r0 = r6.optString(r0)
            r5.entryPageSource = r0
            java.lang.String r0 = r5.entryPageSource
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto Lf8
            r5.entryPageSource = r2
        Lf8:
            com.kwad.sdk.core.scene.URLPackage r0 = new com.kwad.sdk.core.scene.URLPackage
            r0.<init>()
            r5.urlPackage = r0
            com.kwad.sdk.core.scene.URLPackage r0 = r5.urlPackage
            java.lang.String r3 = "urlPackage"
            org.json.JSONObject r3 = r6.optJSONObject(r3)
            r0.parseJson(r3)
            com.kwad.sdk.core.scene.URLPackage r0 = new com.kwad.sdk.core.scene.URLPackage
            r0.<init>()
            r5.arA = r0
            com.kwad.sdk.core.scene.URLPackage r0 = r5.arA
            java.lang.String r3 = "referURLPackage"
            org.json.JSONObject r3 = r6.optJSONObject(r3)
            r0.parseJson(r3)
            java.lang.String r0 = "authorId"
            long r3 = r6.optLong(r0)
            r5.Qr = r3
            java.lang.String r0 = "photoSize"
            java.lang.String r0 = r6.optString(r0)
            r5.arB = r0
            java.lang.String r0 = r5.arB
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto L134
            r5.arB = r2
        L134:
            java.lang.String r0 = "appInstalled"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            r5.arC = r0
            java.lang.String r0 = "appUninstalled"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            r5.arD = r0
            com.kwad.sdk.core.report.r$a r0 = new com.kwad.sdk.core.report.r$a
            r0.<init>()
            r5.arE = r0
            com.kwad.sdk.core.report.r$a r0 = r5.arE
            java.lang.String r3 = "clientExt"
            org.json.JSONObject r3 = r6.optJSONObject(r3)
            r0.parseJson(r3)
            java.lang.String r0 = "playerType"
            int r0 = r6.optInt(r0)
            r5.arF = r0
            java.lang.String r0 = "uiType"
            int r0 = r6.optInt(r0)
            r5.arG = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r3 = "isLeftSlipStatus"
            int r0 = r6.optInt(r3, r0)
            r5.arH = r0
            java.lang.String r0 = "refreshType"
            int r0 = r6.optInt(r0)
            r5.UQ = r0
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r3 = "photoResponseType"
            int r0 = r6.optInt(r3, r0)
            r5.arI = r0
            java.lang.String r0 = "failUrl"
            java.lang.String r0 = r6.optString(r0)
            r5.arJ = r0
            java.lang.String r0 = r5.arJ
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto L1a0
            r5.arJ = r2
        L1a0:
            java.lang.String r0 = "errorMsg"
            java.lang.String r0 = r6.optString(r0)
            r5.errorMsg = r0
            java.lang.String r0 = r5.errorMsg
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto L1b0
            r5.errorMsg = r2
        L1b0:
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r3 = "errorCode"
            int r0 = r6.optInt(r3, r0)
            r5.errorCode = r0
            java.lang.String r0 = "creativeId"
            long r3 = r6.optLong(r0)
            r5.creativeId = r3
            java.lang.String r0 = "cacheFailedReason"
            java.lang.String r0 = r6.optString(r0)
            r5.arM = r0
            java.lang.String r0 = r5.arM
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto L1d9
            r5.arM = r2
        L1d9:
            java.lang.String r0 = "appExt"
            org.json.JSONObject r0 = r6.optJSONObject(r0)
            r5.arN = r0
            java.lang.String r0 = "appRunningInfoList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            r5.arO = r0
            java.lang.String r0 = "downloadDuration"
            long r3 = r6.optLong(r0)
            r5.downloadDuration = r3
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r3 = "pageType"
            int r0 = r6.optInt(r3, r0)
            r5.pageType = r0
            java.lang.String r0 = "speedLimitStatus"
            int r0 = r6.optInt(r0)
            r5.arP = r0
            java.lang.String r0 = "speedLimitThreshold"
            int r0 = r6.optInt(r0)
            r5.arQ = r0
            java.lang.String r0 = "currentRealDownloadSpeed"
            int r0 = r6.optInt(r0)
            r5.arR = r0
            java.lang.String r0 = "sdkPlatform"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            r5.arT = r0
            java.lang.String r0 = "isKsUnion"
            boolean r0 = r6.optBoolean(r0)
            r5.arU = r0
            java.lang.String r0 = "trackMethodName"
            java.lang.String r0 = r6.optString(r0)
            r5.arV = r0
            java.lang.String r0 = r5.arV
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto L23a
            r5.arV = r2
        L23a:
            java.lang.Integer r0 = new java.lang.Integer
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "viewModeType"
            int r0 = r6.optInt(r1, r0)
            r5.arW = r0
            java.lang.String r0 = "clickTime"
            long r0 = r6.optLong(r0)
            r5.clickTime = r0
            java.lang.String r0 = "frameRenderTime"
            long r0 = r6.optLong(r0)
            r5.arY = r0
            java.lang.String r0 = "playerEnterAction"
            int r0 = r6.optInt(r0)
            r5.arZ = r0
            java.lang.String r0 = "requestUrl"
            java.lang.String r0 = r6.optString(r0)
            r5.asa = r0
            java.lang.String r0 = r5.asa
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L273
            r5.asa = r2
        L273:
            java.lang.String r0 = "requestTotalTime"
            long r0 = r6.optLong(r0)
            r5.asb = r0
            java.lang.String r0 = "requestResponseTime"
            long r0 = r6.optLong(r0)
            r5.asc = r0
            java.lang.String r0 = "requestParseDataTime"
            long r0 = r6.optLong(r0)
            r5.asd = r0
            java.lang.String r0 = "requestCallbackTime"
            long r0 = r6.optLong(r0)
            r5.ase = r0
            java.lang.String r0 = "requestFailReason"
            java.lang.String r0 = r6.optString(r0)
            r5.asf = r0
            java.lang.String r0 = r5.asf
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2a3
            r5.asf = r2
        L2a3:
            java.lang.String r0 = "pageName"
            java.lang.String r0 = r6.optString(r0)
            r5.Pp = r0
            java.lang.String r0 = r5.Pp
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2b3
            r5.Pp = r2
        L2b3:
            java.lang.String r0 = "pageCreateTime"
            long r0 = r6.optLong(r0)
            r5.Pw = r0
            java.lang.String r0 = "pageResumeTime"
            long r0 = r6.optLong(r0)
            r5.Px = r0
            java.lang.String r0 = "trackUrlType"
            int r0 = r6.optInt(r0)
            r5.asg = r0
            java.lang.String r0 = "trackUrlList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            r5.ash = r0
            java.lang.String r0 = "pageLaunchTime"
            long r0 = r6.optLong(r0)
            r5.Pv = r0
            java.lang.String r0 = "appAuthorityInfoList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            r5.ask = r0
            java.lang.String r0 = "tkVersion"
            java.lang.String r0 = r6.optString(r0)
            r5.asl = r0
            java.lang.String r0 = r5.asl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2f3
            r5.asl = r2
        L2f3:
            java.lang.String r0 = "jsVersion"
            java.lang.String r0 = r6.optString(r0)
            r5.asm = r0
            java.lang.String r0 = r5.asm
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L303
            r5.asm = r2
        L303:
            java.lang.String r0 = "jsFileName"
            java.lang.String r0 = r6.optString(r0)
            r5.asn = r0
            java.lang.String r0 = r5.asn
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L313
            r5.asn = r2
        L313:
            java.lang.String r0 = "jsErrorMsg"
            java.lang.String r0 = r6.optString(r0)
            r5.aso = r0
            java.lang.String r0 = r5.aso
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L323
            r5.aso = r2
        L323:
            java.lang.String r0 = "jsConfig"
            java.lang.String r0 = r6.optString(r0)
            r5.asp = r0
            java.lang.String r0 = r5.asp
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L333
            r5.asp = r2
        L333:
            java.lang.String r0 = "adBizType"
            int r0 = r6.optInt(r0)
            r5.asq = r0
            java.lang.String r0 = "customKey"
            java.lang.String r0 = r6.optString(r0)
            r5.asr = r0
            java.lang.String r0 = r5.asr
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L34b
            r5.asr = r2
        L34b:
            java.lang.String r0 = "customValue"
            java.lang.String r0 = r6.optString(r0)
            r5.ass = r0
            java.lang.String r0 = r5.ass
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35b
            r5.ass = r2
        L35b:
            java.lang.String r0 = "trace"
            java.lang.String r0 = r6.optString(r0)
            r5.trace = r0
            java.lang.String r0 = r5.trace
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L36b
            r5.trace = r2
        L36b:
            java.lang.String r0 = "filterCode"
            int r0 = r6.optInt(r0)
            r5.ast = r0
            java.lang.String r0 = "sdkVersionCode"
            int r0 = r6.optInt(r0)
            r5.asu = r0
            java.lang.String r0 = "sdkVersion"
            java.lang.String r0 = r6.optString(r0)
            r5.sdkVersion = r0
            java.lang.String r0 = r5.sdkVersion
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L38b
            r5.sdkVersion = r2
        L38b:
            java.lang.String r0 = "sdkApiVersion"
            java.lang.String r0 = r6.optString(r0)
            r5.Uj = r0
            java.lang.String r0 = r5.Uj
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L39b
            r5.Uj = r2
        L39b:
            java.lang.String r0 = "sdkType"
            int r0 = r6.optInt(r0)
            r5.Ul = r0
            java.lang.String r0 = "appUseDuration"
            long r0 = r6.optLong(r0)
            r5.asv = r0
            java.lang.String r0 = "appStartType"
            long r0 = r6.optLong(r0)
            r5.asw = r0
            java.lang.String r0 = "sequenceNumber"
            long r0 = r6.optLong(r0)
            r5.ant = r0
            java.lang.String r0 = "appColdStart"
            java.lang.String r0 = r6.optString(r0)
            r5.HR = r0
            java.lang.String r0 = r5.HR
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3cb
            r5.HR = r2
        L3cb:
            java.lang.String r0 = "appStart"
            java.lang.String r6 = r6.optString(r0)
            r5.HS = r6
            java.lang.String r6 = r5.HS
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r6 != r0) goto L3db
            r5.HS = r2
        L3db:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.report.r r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            long r0 = r6.timestamp
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r6.timestamp
            java.lang.String r4 = "timestamp"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L16:
            java.lang.String r0 = r6.sessionId
            java.lang.String r1 = ""
            if (r0 == 0) goto L2b
            java.lang.String r0 = r6.sessionId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            java.lang.String r0 = r6.sessionId
            java.lang.String r4 = "sessionId"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L2b:
            long r4 = r6.HU
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L38
            long r4 = r6.HU
            java.lang.String r0 = "seq"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L38:
            long r4 = r6.aro
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L45
            long r4 = r6.aro
            java.lang.String r0 = "listId"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L45:
            long r4 = r6.arp
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L52
            long r4 = r6.arp
            java.lang.String r0 = "actionType"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L52:
            java.lang.String r0 = r6.UP
            if (r0 == 0) goto L65
            java.lang.String r0 = r6.UP
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L65
            java.lang.String r0 = r6.UP
            java.lang.String r4 = "payload"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L65:
            long r4 = r6.llsid
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L72
            long r4 = r6.llsid
            java.lang.String r0 = "llsid"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L72:
            org.json.JSONObject r0 = r6.arq
            java.lang.String r4 = "extra"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            org.json.JSONObject r0 = r6.arr
            java.lang.String r4 = "impAdExtra"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            long r4 = r6.posId
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L8d
            long r4 = r6.posId
            java.lang.String r0 = "posId"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L8d:
            int r0 = r6.contentType
            if (r0 == 0) goto L98
            int r0 = r6.contentType
            java.lang.String r4 = "contentType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L98:
            int r0 = r6.realShowType
            if (r0 == 0) goto La3
            int r0 = r6.realShowType
            java.lang.String r4 = "realShowType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        La3:
            long r4 = r6.photoId
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Lb0
            long r4 = r6.photoId
            java.lang.String r0 = "photoId"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        Lb0:
            long r4 = r6.position
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Lbd
            long r4 = r6.position
            java.lang.String r0 = "position"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        Lbd:
            long r4 = r6.ars
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Lca
            long r4 = r6.ars
            java.lang.String r0 = "serverPosition"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        Lca:
            long r4 = r6.art
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Ld7
            long r4 = r6.art
            java.lang.String r0 = "photoDuration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        Ld7:
            long r4 = r6.aru
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Le4
            long r4 = r6.aru
            java.lang.String r0 = "effectivePlayDuration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        Le4:
            long r4 = r6.Xf
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Lf1
            long r4 = r6.Xf
            java.lang.String r0 = "playDuration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        Lf1:
            long r4 = r6.blockDuration
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Lfe
            long r4 = r6.blockDuration
            java.lang.String r0 = "blockDuration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        Lfe:
            long r4 = r6.arv
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L10b
            long r4 = r6.arv
            java.lang.String r0 = "intervalDuration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L10b:
            long r4 = r6.arw
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L118
            long r4 = r6.arw
            java.lang.String r0 = "allIntervalDuration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L118:
            long r4 = r6.arx
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L125
            long r4 = r6.arx
            java.lang.String r0 = "flowSdk"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L125:
            long r4 = r6.ary
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L132
            long r4 = r6.ary
            java.lang.String r0 = "blockTimes"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L132:
            int r0 = r6.contentSourceType
            java.lang.String r4 = "contentSourceType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            int r0 = r6.arz
            if (r0 == 0) goto L144
            int r0 = r6.arz
            java.lang.String r4 = "adAggPageSource"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L144:
            java.lang.String r0 = r6.entryPageSource
            if (r0 == 0) goto L157
            java.lang.String r0 = r6.entryPageSource
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L157
            java.lang.String r0 = r6.entryPageSource
            java.lang.String r4 = "entryPageSource"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L157:
            com.kwad.sdk.core.scene.URLPackage r0 = r6.urlPackage
            java.lang.String r4 = "urlPackage"
            com.kwad.sdk.utils.t.a(r7, r4, r0)
            com.kwad.sdk.core.scene.URLPackage r0 = r6.arA
            java.lang.String r4 = "referURLPackage"
            com.kwad.sdk.utils.t.a(r7, r4, r0)
            long r4 = r6.Qr
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L172
            long r4 = r6.Qr
            java.lang.String r0 = "authorId"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L172:
            java.lang.String r0 = r6.arB
            if (r0 == 0) goto L185
            java.lang.String r0 = r6.arB
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L185
            java.lang.String r0 = r6.arB
            java.lang.String r4 = "photoSize"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L185:
            org.json.JSONArray r0 = r6.arC
            java.lang.String r4 = "appInstalled"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            org.json.JSONArray r0 = r6.arD
            java.lang.String r4 = "appUninstalled"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            com.kwad.sdk.core.report.r$a r0 = r6.arE
            java.lang.String r4 = "clientExt"
            com.kwad.sdk.utils.t.a(r7, r4, r0)
            int r0 = r6.arF
            if (r0 == 0) goto L1a5
            int r0 = r6.arF
            java.lang.String r4 = "playerType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L1a5:
            int r0 = r6.arG
            if (r0 == 0) goto L1b0
            int r0 = r6.arG
            java.lang.String r4 = "uiType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L1b0:
            int r0 = r6.arH
            java.lang.String r4 = "isLeftSlipStatus"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            int r0 = r6.UQ
            if (r0 == 0) goto L1c2
            int r0 = r6.UQ
            java.lang.String r4 = "refreshType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L1c2:
            int r0 = r6.arI
            java.lang.String r4 = "photoResponseType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            java.lang.String r0 = r6.arJ
            if (r0 == 0) goto L1dc
            java.lang.String r0 = r6.arJ
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1dc
            java.lang.String r0 = r6.arJ
            java.lang.String r4 = "failUrl"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L1dc:
            java.lang.String r0 = r6.errorMsg
            if (r0 == 0) goto L1ef
            java.lang.String r0 = r6.errorMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1ef
            java.lang.String r0 = r6.errorMsg
            java.lang.String r4 = "errorMsg"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L1ef:
            int r0 = r6.errorCode
            java.lang.String r4 = "errorCode"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            long r4 = r6.creativeId
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L203
            long r4 = r6.creativeId
            java.lang.String r0 = "creativeId"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L203:
            java.lang.String r0 = r6.arM
            if (r0 == 0) goto L216
            java.lang.String r0 = r6.arM
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L216
            java.lang.String r0 = r6.arM
            java.lang.String r4 = "cacheFailedReason"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L216:
            org.json.JSONObject r0 = r6.arN
            java.lang.String r4 = "appExt"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            org.json.JSONArray r0 = r6.arO
            java.lang.String r4 = "appRunningInfoList"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            long r4 = r6.downloadDuration
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L231
            long r4 = r6.downloadDuration
            java.lang.String r0 = "downloadDuration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L231:
            int r0 = r6.pageType
            java.lang.String r4 = "pageType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            int r0 = r6.arP
            if (r0 == 0) goto L243
            int r0 = r6.arP
            java.lang.String r4 = "speedLimitStatus"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L243:
            int r0 = r6.arQ
            if (r0 == 0) goto L24e
            int r0 = r6.arQ
            java.lang.String r4 = "speedLimitThreshold"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L24e:
            int r0 = r6.arR
            if (r0 == 0) goto L259
            int r0 = r6.arR
            java.lang.String r4 = "currentRealDownloadSpeed"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L259:
            org.json.JSONArray r0 = r6.arT
            java.lang.String r4 = "sdkPlatform"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            boolean r0 = r6.arU
            if (r0 == 0) goto L26b
            boolean r0 = r6.arU
            java.lang.String r4 = "isKsUnion"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L26b:
            java.lang.String r0 = r6.arV
            if (r0 == 0) goto L27e
            java.lang.String r0 = r6.arV
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27e
            java.lang.String r0 = r6.arV
            java.lang.String r4 = "trackMethodName"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L27e:
            int r0 = r6.arW
            java.lang.String r4 = "viewModeType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            long r4 = r6.clickTime
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L292
            long r4 = r6.clickTime
            java.lang.String r0 = "clickTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L292:
            long r4 = r6.arY
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L29f
            long r4 = r6.arY
            java.lang.String r0 = "frameRenderTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L29f:
            int r0 = r6.arZ
            if (r0 == 0) goto L2aa
            int r0 = r6.arZ
            java.lang.String r4 = "playerEnterAction"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L2aa:
            java.lang.String r0 = r6.asa
            if (r0 == 0) goto L2bd
            java.lang.String r0 = r6.asa
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2bd
            java.lang.String r0 = r6.asa
            java.lang.String r4 = "requestUrl"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L2bd:
            long r4 = r6.asb
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L2ca
            long r4 = r6.asb
            java.lang.String r0 = "requestTotalTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L2ca:
            long r4 = r6.asc
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L2d7
            long r4 = r6.asc
            java.lang.String r0 = "requestResponseTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L2d7:
            long r4 = r6.asd
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L2e4
            long r4 = r6.asd
            java.lang.String r0 = "requestParseDataTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L2e4:
            long r4 = r6.ase
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L2f1
            long r4 = r6.ase
            java.lang.String r0 = "requestCallbackTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L2f1:
            java.lang.String r0 = r6.asf
            if (r0 == 0) goto L304
            java.lang.String r0 = r6.asf
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L304
            java.lang.String r0 = r6.asf
            java.lang.String r4 = "requestFailReason"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L304:
            java.lang.String r0 = r6.Pp
            if (r0 == 0) goto L317
            java.lang.String r0 = r6.Pp
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L317
            java.lang.String r0 = r6.Pp
            java.lang.String r4 = "pageName"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L317:
            long r4 = r6.Pw
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L324
            long r4 = r6.Pw
            java.lang.String r0 = "pageCreateTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L324:
            long r4 = r6.Px
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L331
            long r4 = r6.Px
            java.lang.String r0 = "pageResumeTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L331:
            int r0 = r6.asg
            if (r0 == 0) goto L33c
            int r0 = r6.asg
            java.lang.String r4 = "trackUrlType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L33c:
            org.json.JSONArray r0 = r6.ash
            java.lang.String r4 = "trackUrlList"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            long r4 = r6.Pv
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L350
            long r4 = r6.Pv
            java.lang.String r0 = "pageLaunchTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L350:
            org.json.JSONArray r0 = r6.ask
            java.lang.String r4 = "appAuthorityInfoList"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
            java.lang.String r0 = r6.asl
            if (r0 == 0) goto L36a
            java.lang.String r0 = r6.asl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L36a
            java.lang.String r0 = r6.asl
            java.lang.String r4 = "tkVersion"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L36a:
            java.lang.String r0 = r6.asm
            if (r0 == 0) goto L37d
            java.lang.String r0 = r6.asm
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L37d
            java.lang.String r0 = r6.asm
            java.lang.String r4 = "jsVersion"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L37d:
            java.lang.String r0 = r6.asn
            if (r0 == 0) goto L390
            java.lang.String r0 = r6.asn
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L390
            java.lang.String r0 = r6.asn
            java.lang.String r4 = "jsFileName"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L390:
            java.lang.String r0 = r6.aso
            if (r0 == 0) goto L3a3
            java.lang.String r0 = r6.aso
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a3
            java.lang.String r0 = r6.aso
            java.lang.String r4 = "jsErrorMsg"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L3a3:
            java.lang.String r0 = r6.asp
            if (r0 == 0) goto L3b6
            java.lang.String r0 = r6.asp
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3b6
            java.lang.String r0 = r6.asp
            java.lang.String r4 = "jsConfig"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L3b6:
            int r0 = r6.asq
            if (r0 == 0) goto L3c1
            int r0 = r6.asq
            java.lang.String r4 = "adBizType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L3c1:
            java.lang.String r0 = r6.asr
            if (r0 == 0) goto L3d4
            java.lang.String r0 = r6.asr
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3d4
            java.lang.String r0 = r6.asr
            java.lang.String r4 = "customKey"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L3d4:
            java.lang.String r0 = r6.ass
            if (r0 == 0) goto L3e7
            java.lang.String r0 = r6.ass
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3e7
            java.lang.String r0 = r6.ass
            java.lang.String r4 = "customValue"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L3e7:
            java.lang.String r0 = r6.trace
            if (r0 == 0) goto L3fa
            java.lang.String r0 = r6.trace
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3fa
            java.lang.String r0 = r6.trace
            java.lang.String r4 = "trace"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L3fa:
            int r0 = r6.ast
            if (r0 == 0) goto L405
            int r0 = r6.ast
            java.lang.String r4 = "filterCode"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L405:
            int r0 = r6.asu
            if (r0 == 0) goto L410
            int r0 = r6.asu
            java.lang.String r4 = "sdkVersionCode"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L410:
            java.lang.String r0 = r6.sdkVersion
            if (r0 == 0) goto L423
            java.lang.String r0 = r6.sdkVersion
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L423
            java.lang.String r0 = r6.sdkVersion
            java.lang.String r4 = "sdkVersion"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L423:
            java.lang.String r0 = r6.Uj
            if (r0 == 0) goto L436
            java.lang.String r0 = r6.Uj
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L436
            java.lang.String r0 = r6.Uj
            java.lang.String r4 = "sdkApiVersion"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L436:
            int r0 = r6.Ul
            if (r0 == 0) goto L441
            int r0 = r6.Ul
            java.lang.String r4 = "sdkType"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L441:
            long r4 = r6.asv
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L44e
            long r4 = r6.asv
            java.lang.String r0 = "appUseDuration"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L44e:
            long r4 = r6.asw
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L45b
            long r4 = r6.asw
            java.lang.String r0 = "appStartType"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L45b:
            long r4 = r6.ant
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L468
            long r2 = r6.ant
            java.lang.String r0 = "sequenceNumber"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L468:
            java.lang.String r0 = r6.HR
            if (r0 == 0) goto L47b
            java.lang.String r0 = r6.HR
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L47b
            java.lang.String r0 = r6.HR
            java.lang.String r2 = "appColdStart"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L47b:
            java.lang.String r0 = r6.HS
            if (r0 == 0) goto L48e
            java.lang.String r0 = r6.HS
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L48e
            java.lang.String r6 = r6.HS
            java.lang.String r0 = "appStart"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        L48e:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.report.r r1 = (com.kwad.sdk.core.report.r) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.report.r r1 = (com.kwad.sdk.core.report.r) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
