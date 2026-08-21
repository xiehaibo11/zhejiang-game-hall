package com.kwad.sdk.core.network;

import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.g;

public abstract class m<R extends com.kwad.sdk.core.network.g, T extends com.kwad.sdk.core.network.BaseResultData> extends com.kwad.sdk.core.network.a<R> {
    private static final java.lang.String TAG = "Networking";
    private com.kwad.sdk.core.network.h<R, T> mListener;
    private final com.kwad.sdk.core.network.b.b mMonitorRecorder;

    public m() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mListener = r0
            com.kwad.sdk.core.network.b.b r0 = com.kwad.sdk.core.network.b.c.BA()
            r1.mMonitorRecorder = r0
            return
    }

    private void checkAndSetHasData(com.kwad.sdk.core.network.BaseResultData r2) {
            r1 = this;
            boolean r2 = r2.hasData()
            if (r2 == 0) goto Lc
            com.kwad.sdk.core.network.b.b r2 = r1.mMonitorRecorder
            r0 = 1
            r2.ca(r0)
        Lc:
            return
    }

    private void checkIpDirect(com.kwad.sdk.core.network.c r1) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            boolean r1 = r1.Bd()
            if (r1 != 0) goto L20
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            if (r1 == 0) goto L20
            android.content.Context r1 = r1.getContext()
            boolean r1 = com.kwad.sdk.utils.ag.isNetworkConnected(r1)
            if (r1 == 0) goto L20
            com.kwad.sdk.ip.direct.a.FS()
        L20:
            return
    }

    private void notifyOnErrorListener(R r2, int r3, java.lang.String r4) {
            r1 = this;
            com.kwad.sdk.core.network.i r0 = com.kwad.sdk.core.network.i.Bh()
            r0.b(r2, r3)
            com.kwad.sdk.core.network.h<R extends com.kwad.sdk.core.network.g, T extends com.kwad.sdk.core.network.BaseResultData> r0 = r1.mListener
            if (r0 != 0) goto Lc
            return
        Lc:
            r0.onError(r2, r3, r4)
            com.kwad.sdk.core.network.b.b r2 = r1.mMonitorRecorder
            r2.Bz()
            return
    }

    private void notifyOnErrorListener(R r5, com.kwad.sdk.core.network.c r6, java.lang.String r7) {
            r4 = this;
            java.lang.String r0 = r5.getUrl()
            com.kwad.sdk.core.network.idc.DomainException r1 = new com.kwad.sdk.core.network.idc.DomainException
            int r2 = r6.aoK
            java.lang.Exception r3 = r6.aoL
            r1.<init>(r2, r3)
            java.lang.String r2 = "/rest/zt/emoticon/package/list"
            boolean r2 = r0.contains(r2)
            if (r2 == 0) goto L18
            java.lang.String r2 = "zt"
            goto L1a
        L18:
            java.lang.String r2 = "api"
        L1a:
            com.kwad.sdk.core.network.idc.a r3 = com.kwad.sdk.core.network.idc.a.Bo()
            r3.a(r0, r2, r1)
            int r6 = r6.code
            r4.notifyOnErrorListener(r5, r6, r7)
            return
    }

    private void notifyOnStartRequest(R r2) {
            r1 = this;
            com.kwad.sdk.core.network.h<R extends com.kwad.sdk.core.network.g, T extends com.kwad.sdk.core.network.BaseResultData> r0 = r1.mListener
            if (r0 != 0) goto L5
            return
        L5:
            r0.onStartRequest(r2)
            return
    }

    private void notifyOnSuccess(R r2, T r3) {
            r1 = this;
            com.kwad.sdk.core.network.h<R extends com.kwad.sdk.core.network.g, T extends com.kwad.sdk.core.network.BaseResultData> r0 = r1.mListener
            if (r0 != 0) goto L5
            return
        L5:
            r0.onSuccess(r2, r3)
            com.kwad.sdk.core.network.b.b r2 = r1.mMonitorRecorder
            r2.Bz()
            return
    }

    private void onRequest(com.kwad.sdk.core.network.h<R, T> r2) {
            r1 = this;
            com.kwad.sdk.core.network.b.b r0 = r1.mMonitorRecorder
            r0.Bt()
            r1.mListener = r2
            return
    }

    private void parseCommonData(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L13
            r0.<init>(r3)     // Catch: org.json.JSONException -> L13
            java.lang.String r3 = "requestSessionData"
            java.lang.String r3 = r0.optString(r3)     // Catch: org.json.JSONException -> L13
            com.kwad.sdk.core.network.r r0 = com.kwad.sdk.core.network.r.Bk()     // Catch: org.json.JSONException -> L13
            r0.N(r2, r3)     // Catch: org.json.JSONException -> L13
            return
        L13:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    private void setMonitorRequestId(com.kwad.sdk.core.network.g r2) {
            r1 = this;
            java.util.Map r2 = r2.getHeader()
            if (r2 == 0) goto L19
            java.lang.String r0 = "kuaishou-tracing-token"
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L19
            com.kwad.sdk.core.network.b.b r0 = r1.mMonitorRecorder
            r0.dj(r2)
        L19:
            return
    }

    protected void afterParseData(T r1) {
            r0 = this;
            return
    }

    @Override
    public void cancel() {
            r1 = this;
            super.cancel()
            r0 = 0
            r1.mListener = r0
            return
    }

    protected boolean enableMonitorReport() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    protected void fetchImpl() {
            r7 = this;
            java.lang.String r0 = "requestError:"
            com.kwad.sdk.core.network.b.b r1 = r7.mMonitorRecorder     // Catch: java.lang.Throwable -> Le9
            r1.Bx()     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.g r1 = r7.createRequest()     // Catch: java.lang.Throwable -> Le9
            r7.notifyOnStartRequest(r1)     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.b.b r2 = r7.mMonitorRecorder     // Catch: java.lang.Throwable -> Le9
            java.lang.String r3 = r1.getUrl()     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.b.b r2 = r2.df(r3)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r3 = r1.getUrl()     // Catch: java.lang.Throwable -> Le9
            r2.dg(r3)     // Catch: java.lang.Throwable -> Le9
            r7.setMonitorRequestId(r1)     // Catch: java.lang.Throwable -> Le9
            java.lang.Class<com.kwad.sdk.service.a.e> r2 = com.kwad.sdk.service.a.e.class
            java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.service.a.e r2 = (com.kwad.sdk.service.a.e) r2     // Catch: java.lang.Throwable -> Le9
            android.content.Context r2 = r2.getContext()     // Catch: java.lang.Throwable -> Le9
            boolean r2 = com.kwad.sdk.utils.ag.isNetworkConnected(r2)     // Catch: java.lang.Throwable -> Le9
            if (r2 != 0) goto L52
            com.kwad.sdk.core.network.f r2 = com.kwad.sdk.core.network.f.aoS     // Catch: java.lang.Throwable -> Le9
            int r2 = r2.errorCode     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.f r3 = com.kwad.sdk.core.network.f.aoS     // Catch: java.lang.Throwable -> Le9
            java.lang.String r3 = r3.msg     // Catch: java.lang.Throwable -> Le9
            r7.notifyOnErrorListener(r1, r2, r3)     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.b.b r1 = r7.mMonitorRecorder     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.f r2 = com.kwad.sdk.core.network.f.aoS     // Catch: java.lang.Throwable -> Le9
            int r2 = r2.errorCode     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.b.b r1 = r1.bZ(r2)     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.f r2 = com.kwad.sdk.core.network.f.aoS     // Catch: java.lang.Throwable -> Le9
            java.lang.String r2 = r2.msg     // Catch: java.lang.Throwable -> Le9
            r1.dh(r2)     // Catch: java.lang.Throwable -> Le9
            goto Ldd
        L52:
            r2 = 0
            java.lang.String r3 = r1.getUrl()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            com.kwad.sdk.export.proxy.AdHttpProxy r4 = com.kwad.sdk.g.wX()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            boolean r5 = r4 instanceof com.kwad.sdk.core.network.c.b     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            if (r5 == 0) goto L6b
            com.kwad.sdk.core.network.b.b r5 = r7.mMonitorRecorder     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            java.lang.String r6 = "ok_http"
            com.kwad.sdk.core.network.b.b r5 = r5.di(r6)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
        L67:
            r5.Bw()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            goto L74
        L6b:
            com.kwad.sdk.core.network.b.b r5 = r7.mMonitorRecorder     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            java.lang.String r6 = "http"
            com.kwad.sdk.core.network.b.b r5 = r5.di(r6)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            goto L67
        L74:
            boolean r5 = r7.isPostByJson()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            if (r5 == 0) goto L87
            java.util.Map r5 = r1.getHeader()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            org.json.JSONObject r6 = r1.getBody()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.c r2 = r4.doPost(r3, r5, r6)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            goto Lad
        L87:
            java.util.Map r5 = r1.getHeader()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            java.util.Map r6 = r1.getBodyMap()     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.c r2 = r4.doPost(r3, r5, r6)     // Catch: java.lang.Exception -> L94 java.lang.Throwable -> Le9
            goto Lad
        L94:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.b.b r4 = r7.mMonitorRecorder     // Catch: java.lang.Throwable -> Le9
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le9
            r5.<init>(r0)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Throwable -> Le9
            r5.append(r3)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> Le9
            r4.dh(r3)     // Catch: java.lang.Throwable -> Le9
        Lad:
            com.kwad.sdk.core.network.b.b r3 = r7.mMonitorRecorder     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.b.b r3 = r3.Bu()     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.core.network.b.b r3 = r3.Bv()     // Catch: java.lang.Throwable -> Le9
            int r4 = com.kwad.sdk.ip.direct.a.getType()     // Catch: java.lang.Throwable -> Le9
            r3.cc(r4)     // Catch: java.lang.Throwable -> Le9
            r7.onResponse(r1, r2)     // Catch: java.lang.Exception -> Lc2 java.lang.Throwable -> Le9
            goto Ldd
        Lc2:
            r1 = move-exception
            com.kwad.sdk.core.network.b.b r2 = r7.mMonitorRecorder     // Catch: java.lang.Throwable -> Le9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le9
            java.lang.String r4 = "onResponseError:"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r4 = r1.getMessage()     // Catch: java.lang.Throwable -> Le9
            r3.append(r4)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Le9
            r2.dh(r3)     // Catch: java.lang.Throwable -> Le9
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)     // Catch: java.lang.Throwable -> Le9
        Ldd:
            boolean r0 = r7.enableMonitorReport()     // Catch: java.lang.Exception -> Le8
            if (r0 == 0) goto Le8
            com.kwad.sdk.core.network.b.b r0 = r7.mMonitorRecorder     // Catch: java.lang.Exception -> Le8
            r0.report()     // Catch: java.lang.Exception -> Le8
        Le8:
            return
        Le9:
            r1 = move-exception
            com.kwad.sdk.core.network.b.b r2 = r7.mMonitorRecorder     // Catch: java.lang.Throwable -> L100 java.lang.Exception -> L102
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L100 java.lang.Exception -> L102
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L100 java.lang.Exception -> L102
            java.lang.String r0 = r1.getMessage()     // Catch: java.lang.Throwable -> L100 java.lang.Exception -> L102
            r3.append(r0)     // Catch: java.lang.Throwable -> L100 java.lang.Exception -> L102
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L100 java.lang.Exception -> L102
            r2.dh(r0)     // Catch: java.lang.Throwable -> L100 java.lang.Exception -> L102
            goto L102
        L100:
            r0 = move-exception
            goto L111
        L102:
            com.kwad.sdk.core.e.c.printStackTrace(r1)     // Catch: java.lang.Throwable -> L100
            boolean r0 = r7.enableMonitorReport()     // Catch: java.lang.Exception -> L110
            if (r0 == 0) goto L110
            com.kwad.sdk.core.network.b.b r0 = r7.mMonitorRecorder     // Catch: java.lang.Exception -> L110
            r0.report()     // Catch: java.lang.Exception -> L110
        L110:
            return
        L111:
            boolean r1 = r7.enableMonitorReport()     // Catch: java.lang.Exception -> L11c
            if (r1 == 0) goto L11c
            com.kwad.sdk.core.network.b.b r1 = r7.mMonitorRecorder     // Catch: java.lang.Exception -> L11c
            r1.report()     // Catch: java.lang.Exception -> L11c
        L11c:
            throw r0
    }

    protected boolean isPostByJson() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    protected void onResponse(R r6, com.kwad.sdk.core.network.c r7) {
            r5 = this;
            java.lang.String r0 = "Networking"
            if (r7 != 0) goto L1c
            com.kwad.sdk.core.network.f r7 = com.kwad.sdk.core.network.f.aoS
            int r7 = r7.errorCode
            com.kwad.sdk.core.network.f r1 = com.kwad.sdk.core.network.f.aoS
            java.lang.String r1 = r1.msg
            r5.notifyOnErrorListener(r6, r7, r1)
            com.kwad.sdk.core.network.b.b r6 = r5.mMonitorRecorder
            java.lang.String r7 = "responseBase is null"
            r6.dh(r7)
            java.lang.String r6 = "request responseBase is null"
            com.kwad.sdk.core.e.c.e(r0, r6)
            return
        L1c:
            com.kwad.sdk.core.network.b.b r1 = r5.mMonitorRecorder
            int r2 = r7.code
            r1.bZ(r2)
            r5.checkIpDirect(r7)
            java.lang.String r1 = r7.aoM
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r2 = ":"
            if (r1 != 0) goto Le0
            boolean r1 = r7.Bd()
            if (r1 != 0) goto L38
            goto Le0
        L38:
            java.lang.String r0 = r6.getUrl()     // Catch: java.lang.Exception -> Lb9
            java.lang.String r1 = r7.aoM     // Catch: java.lang.Exception -> Lb9
            r5.parseCommonData(r0, r1)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r0 = r7.aoM     // Catch: java.lang.Exception -> Lb9
            com.kwad.sdk.core.network.BaseResultData r0 = r5.parseData(r0)     // Catch: java.lang.Exception -> Lb9
            r5.afterParseData(r0)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r1 = r7.aoM
            if (r1 == 0) goto L64
            com.kwad.sdk.core.network.b.b r1 = r5.mMonitorRecorder
            java.lang.String r7 = r7.aoM
            int r7 = r7.length()
            long r3 = (long) r7
            com.kwad.sdk.core.network.b.b r7 = r1.Y(r3)
            com.kwad.sdk.core.network.b.b r7 = r7.By()
            int r1 = r0.result
            r7.cb(r1)
        L64:
            boolean r7 = r0.isResultOk()
            if (r7 != 0) goto L95
            com.kwad.sdk.core.network.b.b r7 = r5.mMonitorRecorder
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = "serverCodeError:"
            r1.<init>(r3)
            int r3 = r0.result
            r1.append(r3)
            r1.append(r2)
            java.lang.String r2 = r0.errorMsg
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r7.dh(r1)
            boolean r7 = r0.notifyFailOnResultError()
            if (r7 == 0) goto L95
            int r7 = r0.result
            java.lang.String r0 = r0.errorMsg
            r5.notifyOnErrorListener(r6, r7, r0)
            return
        L95:
            boolean r7 = r0.isDataEmpty()
            if (r7 == 0) goto Lb2
            com.kwad.sdk.core.network.f r7 = com.kwad.sdk.core.network.f.aoU
            int r7 = r7.errorCode
            java.lang.String r1 = r0.testErrorMsg
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Laa
            java.lang.String r0 = r0.testErrorMsg
            goto Lae
        Laa:
            com.kwad.sdk.core.network.f r0 = com.kwad.sdk.core.network.f.aoU
            java.lang.String r0 = r0.msg
        Lae:
            r5.notifyOnErrorListener(r6, r7, r0)
            return
        Lb2:
            r5.checkAndSetHasData(r0)
            r5.notifyOnSuccess(r6, r0)
            return
        Lb9:
            r7 = move-exception
            com.kwad.sdk.core.network.f r0 = com.kwad.sdk.core.network.f.aoT
            int r0 = r0.errorCode
            com.kwad.sdk.core.network.f r1 = com.kwad.sdk.core.network.f.aoT
            java.lang.String r1 = r1.msg
            r5.notifyOnErrorListener(r6, r0, r1)
            com.kwad.sdk.core.e.c.printStackTraceOnly(r7)
            com.kwad.sdk.core.network.b.b r6 = r5.mMonitorRecorder
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "parseDataError:"
            r0.<init>(r1)
            java.lang.String r7 = r7.getMessage()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r6.dh(r7)
            return
        Le0:
            java.lang.String r1 = "网络错误"
            r5.notifyOnErrorListener(r6, r7, r1)
            com.kwad.sdk.core.network.b.b r6 = r5.mMonitorRecorder
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = "httpCodeError:"
            r1.<init>(r3)
            int r3 = r7.code
            r1.append(r3)
            r1.append(r2)
            java.lang.String r2 = r7.aoM
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r6.dh(r1)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r1 = "request responseBase httpCodeError:"
            r6.<init>(r1)
            int r7 = r7.code
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.kwad.sdk.core.e.c.w(r0, r6)
            return
    }

    protected abstract T parseData(java.lang.String r1);

    public void request(com.kwad.sdk.core.network.h<R, T> r1) {
            r0 = this;
            r0.onRequest(r1)
            r0.fetch()
            return
    }
}
