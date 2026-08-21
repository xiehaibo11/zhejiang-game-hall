package com.mbridge.msdk.scheme.applet;

public class AppletsModel implements java.io.Serializable {
    private static final java.lang.String DYNAMIC_VIEW_WX_IS_REDIRECT_0 = "0";
    private static final java.lang.String DYNAMIC_VIEW_WX_IS_REDIRECT_1 = "1";
    private static final java.lang.String DYNAMIC_VIEW_WX_QUERY_PARAM_EVENT_CALLBACK = "event_callback";
    private static final java.lang.String DYNAMIC_VIEW_WX_QUERY_PARAM_INSTALL_CALLBACK = "install_callback";
    public static final int REQUEST_TYPE_CLICK = 1;
    public static final int REQUEST_TYPE_SHOW = 0;
    private static java.lang.String TAG = "AppletsModel";
    private static final java.lang.String URL_ENCODE_UTF_8 = "UTF-8";
    private static final java.lang.String WX_MINIPROGRAM = "wx_miniprogram";
    private static final int WX_SCHEME_REQUEST_ERROR_CODE_44993 = 44993;
    private volatile com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack appletSchemeCallBack;
    private final com.mbridge.msdk.foundation.entity.CampaignEx campaignEx;
    private java.lang.String deepLink;
    private volatile boolean isRequestSuccess;
    private boolean isRequestTimesMaxPerDay;
    private volatile boolean isRequesting;
    private boolean isSupportWxScheme;
    private boolean isUserClick;
    private int lastRequestType;
    private java.util.Map<java.lang.String, java.lang.String> params;
    private java.lang.String reBuildClickUrl;
    private final java.lang.String requestId;
    private final java.lang.String unitID;

    private static final class DefaultAppletSchemeResponse extends com.mbridge.msdk.scheme.response.AppletSchemeResponse {
        private com.mbridge.msdk.scheme.applet.AppletsModel appletsModel;

        public DefaultAppletSchemeResponse(com.mbridge.msdk.scheme.applet.AppletsModel r1) {
                r0 = this;
                r0.<init>()
                r0.appletsModel = r1
                return
        }

        @Override
        public final void onError(com.mbridge.msdk.foundation.same.net.a.a r3) {
                r2 = this;
                super.onError(r3)
                com.mbridge.msdk.scheme.applet.AppletsModel r0 = r2.appletsModel
                if (r0 != 0) goto L8
                return
            L8:
                r1 = 0
                com.mbridge.msdk.scheme.applet.AppletsModel.access$000(r0, r1)
                com.mbridge.msdk.scheme.applet.AppletsModel r0 = r2.appletsModel
                com.mbridge.msdk.scheme.applet.AppletsModel.access$400(r0, r3)
                return
        }

        @Override
        public final void onSuccess(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r3) {
                r2 = this;
                super.onSuccess(r3)
                com.mbridge.msdk.scheme.applet.AppletsModel r0 = r2.appletsModel
                if (r0 != 0) goto L8
                return
            L8:
                r1 = 0
                com.mbridge.msdk.scheme.applet.AppletsModel.access$000(r0, r1)
                if (r3 == 0) goto L25
                T r0 = r3.a
                if (r0 != 0) goto L13
                goto L25
            L13:
                com.mbridge.msdk.scheme.applet.AppletsModel r0 = r2.appletsModel     // Catch: com.mbridge.msdk.scheme.applet.AppletsModel.SchemeRequestException -> L19
                com.mbridge.msdk.scheme.applet.AppletsModel.access$200(r0, r3)     // Catch: com.mbridge.msdk.scheme.applet.AppletsModel.SchemeRequestException -> L19
                goto L24
            L19:
                r3 = move-exception
                com.mbridge.msdk.scheme.applet.AppletsModel r0 = r2.appletsModel
                r1 = -2
                java.lang.String r3 = r3.getMessage()
                com.mbridge.msdk.scheme.applet.AppletsModel.access$300(r0, r1, r3)
            L24:
                return
            L25:
                com.mbridge.msdk.scheme.applet.AppletsModel r3 = r2.appletsModel
                com.mbridge.msdk.scheme.applet.AppletsModel.access$100(r3)
                return
        }
    }

    private static final class SchemeRequestException extends java.lang.Exception {
        public SchemeRequestException(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    static {
            return
    }

    public AppletsModel(com.mbridge.msdk.foundation.entity.CampaignEx r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.isRequestTimesMaxPerDay = r0
            r2.isRequesting = r0
            r2.isRequestSuccess = r0
            r1 = -1
            r2.lastRequestType = r1
            r2.isSupportWxScheme = r0
            r2.isUserClick = r0
            java.lang.String r0 = ""
            r2.deepLink = r0
            r2.campaignEx = r3
            r2.unitID = r4
            r2.requestId = r5
            return
    }

    static void access$000(com.mbridge.msdk.scheme.applet.AppletsModel r0, boolean r1) {
            r0.changeRequestingState(r1)
            return
    }

    static void access$100(com.mbridge.msdk.scheme.applet.AppletsModel r0) {
            r0.handlerRequestNetworkError()
            return
    }

    static void access$200(com.mbridge.msdk.scheme.applet.AppletsModel r0, com.mbridge.msdk.foundation.same.net.k r1) throws com.mbridge.msdk.scheme.applet.AppletsModel.SchemeRequestException {
            r0.handlerSchemeRequestResult(r1)
            return
    }

    static void access$300(com.mbridge.msdk.scheme.applet.AppletsModel r0, int r1, java.lang.String r2) {
            r0.handlerSchemeRequestFailed(r1, r2)
            return
    }

    static void access$400(com.mbridge.msdk.scheme.applet.AppletsModel r0, com.mbridge.msdk.foundation.same.net.a.a r1) {
            r0.handlerSchemeRequestNetworkError(r1)
            return
    }

    private void changeRequestingState(boolean r1) {
            r0 = this;
            r0.isRequesting = r1
            return
    }

    private java.util.Map<java.lang.String, java.lang.String> getAppletsParamsAndBuildRequest(com.mbridge.msdk.foundation.entity.CampaignEx r20) {
            r19 = this;
            r1 = r19
            java.lang.String r2 = "is_redirect"
            java.lang.String r3 = "query"
            java.lang.String r4 = "clickid"
            java.lang.String r5 = "path"
            java.lang.String r6 = "app"
            java.lang.String r7 = "create wechat app request param failed "
            java.util.HashMap r8 = new java.util.HashMap
            r8.<init>()
            if (r20 != 0) goto L16
            return r8
        L16:
            java.lang.String r0 = r20.getClickURL()     // Catch: java.lang.Exception -> L1ad
            android.net.Uri r9 = android.net.Uri.parse(r0)     // Catch: java.lang.Exception -> L1ad
            if (r9 == 0) goto L1ac
            java.util.Set r0 = r9.getQueryParameterNames()     // Catch: java.lang.Exception -> L1ad
            if (r0 != 0) goto L28
            goto L1ac
        L28:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1ad
            r10.<init>()     // Catch: java.lang.Exception -> L1ad
            r0 = 0
            java.util.Set r11 = r9.getQueryParameterNames()     // Catch: java.lang.Exception -> L1ad
            java.util.Iterator r11 = r11.iterator()     // Catch: java.lang.Exception -> L1ad
            r12 = r0
        L37:
            boolean r0 = r11.hasNext()     // Catch: java.lang.Exception -> L1ad
            java.lang.String r13 = "UTF-8"
            java.lang.String r14 = "&"
            java.lang.String r15 = "="
            java.lang.String r16 = ""
            if (r0 == 0) goto Lcd
            java.lang.Object r0 = r11.next()     // Catch: java.lang.Exception -> Lc8
            r20 = r11
            r11 = r0
            java.lang.String r11 = (java.lang.String) r11     // Catch: java.lang.Exception -> Lc8
            boolean r0 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> Lc8
            if (r0 != 0) goto Lba
            java.lang.String r0 = "wx_miniprogram"
            boolean r0 = android.text.TextUtils.equals(r11, r0)     // Catch: java.lang.Exception -> Lc8
            if (r0 == 0) goto L5d
            goto Lba
        L5d:
            java.lang.String r16 = r9.getQueryParameter(r11)     // Catch: java.lang.Exception -> L61
        L61:
            r1 = r16
            java.lang.String r0 = "event_callback"
            boolean r0 = android.text.TextUtils.equals(r11, r0)     // Catch: java.lang.Exception -> Lc8
            if (r0 != 0) goto L73
            java.lang.String r0 = "install_callback"
            boolean r0 = android.text.TextUtils.equals(r11, r0)     // Catch: java.lang.Exception -> Lc8
            if (r0 == 0) goto L77
        L73:
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r13)     // Catch: java.lang.Exception -> L7c
        L77:
            r17 = r2
            r18 = r3
            goto La1
        L7c:
            r0 = move-exception
            r13 = r0
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> Lc8
            if (r0 == 0) goto L77
            java.lang.String r0 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG     // Catch: java.lang.Exception -> Lc8
            r17 = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc8
            r2.<init>()     // Catch: java.lang.Exception -> Lc8
            r18 = r3
            java.lang.String r3 = "encode url for "
            r2.append(r3)     // Catch: java.lang.Exception -> Lc8
            r2.append(r1)     // Catch: java.lang.Exception -> Lc8
            java.lang.String r3 = " failed"
            r2.append(r3)     // Catch: java.lang.Exception -> Lc8
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lc8
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r13)     // Catch: java.lang.Exception -> Lc8
        La1:
            r10.append(r11)     // Catch: java.lang.Exception -> Lc8
            r10.append(r15)     // Catch: java.lang.Exception -> Lc8
            r10.append(r1)     // Catch: java.lang.Exception -> Lc8
            java.util.Set r0 = r9.getQueryParameterNames()     // Catch: java.lang.Exception -> Lc8
            int r0 = r0.size()     // Catch: java.lang.Exception -> Lc8
            if (r12 >= r0) goto Lb7
            r10.append(r14)     // Catch: java.lang.Exception -> Lc8
        Lb7:
            int r12 = r12 + 1
            goto Lbe
        Lba:
            r17 = r2
            r18 = r3
        Lbe:
            r1 = r19
            r11 = r20
            r2 = r17
            r3 = r18
            goto L37
        Lc8:
            r0 = move-exception
            r1 = r19
            goto L1ae
        Lcd:
            r17 = r2
            r18 = r3
            java.lang.String r0 = r9.getQueryParameter(r6)     // Catch: java.lang.Exception -> Ldb
            if (r0 != 0) goto Ld9
            r0 = r16
        Ld9:
            r1 = r0
            goto Le8
        Ldb:
            r0 = move-exception
            r1 = r0
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> Lc8
            if (r0 == 0) goto Le6
            java.lang.String r0 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG     // Catch: java.lang.Exception -> Lc8
            com.mbridge.msdk.foundation.tools.z.c(r0, r7, r1)     // Catch: java.lang.Exception -> Lc8
        Le6:
            r1 = r16
        Le8:
            r8.put(r6, r1)     // Catch: java.lang.Exception -> Lc8
            java.lang.String r0 = r9.getQueryParameter(r5)     // Catch: java.lang.Exception -> Lf5
            if (r0 != 0) goto Lf3
            r0 = r16
        Lf3:
            r2 = r0
            goto L102
        Lf5:
            r0 = move-exception
            r2 = r0
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> Lc8
            if (r0 == 0) goto L100
            java.lang.String r0 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG     // Catch: java.lang.Exception -> Lc8
            com.mbridge.msdk.foundation.tools.z.c(r0, r7, r2)     // Catch: java.lang.Exception -> Lc8
        L100:
            r2 = r16
        L102:
            r8.put(r5, r2)     // Catch: java.lang.Exception -> Lc8
            java.lang.String r0 = r9.getQueryParameter(r4)     // Catch: java.lang.Exception -> L10f
            if (r0 != 0) goto L10d
            r0 = r16
        L10d:
            r3 = r0
            goto L11c
        L10f:
            r0 = move-exception
            r3 = r0
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> Lc8
            if (r0 == 0) goto L11a
            java.lang.String r0 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG     // Catch: java.lang.Exception -> Lc8
            com.mbridge.msdk.foundation.tools.z.c(r0, r7, r3)     // Catch: java.lang.Exception -> Lc8
        L11a:
            r3 = r16
        L11c:
            r8.put(r4, r3)     // Catch: java.lang.Exception -> Lc8
            java.lang.String r0 = r10.toString()     // Catch: java.lang.Exception -> Lc8 java.io.UnsupportedEncodingException -> L12d
            java.lang.String r0 = java.net.URLEncoder.encode(r0, r13)     // Catch: java.lang.Exception -> Lc8 java.io.UnsupportedEncodingException -> L12d
            if (r0 != 0) goto L12a
            goto L137
        L12a:
            r16 = r0
            goto L137
        L12d:
            r0 = move-exception
            boolean r9 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> Lc8
            if (r9 == 0) goto L137
            java.lang.String r9 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG     // Catch: java.lang.Exception -> Lc8
            com.mbridge.msdk.foundation.tools.z.c(r9, r7, r0)     // Catch: java.lang.Exception -> Lc8
        L137:
            r0 = r16
            r9 = r18
            r8.put(r9, r0)     // Catch: java.lang.Exception -> Lc8
            java.lang.String r10 = "0"
            r11 = r17
            r8.put(r11, r10)     // Catch: java.lang.Exception -> Lc8
            boolean r10 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> Lc8
            if (r10 == 0) goto L15f
            java.lang.String r10 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG     // Catch: java.lang.Exception -> Lc8
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc8
            r12.<init>()     // Catch: java.lang.Exception -> Lc8
            java.lang.String r13 = "query: "
            r12.append(r13)     // Catch: java.lang.Exception -> Lc8
            r12.append(r0)     // Catch: java.lang.Exception -> Lc8
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Exception -> Lc8
            com.mbridge.msdk.foundation.tools.z.a(r10, r12)     // Catch: java.lang.Exception -> Lc8
        L15f:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc8
            r10.<init>()     // Catch: java.lang.Exception -> Lc8
            r10.append(r6)     // Catch: java.lang.Exception -> Lc8
            r10.append(r15)     // Catch: java.lang.Exception -> Lc8
            r10.append(r1)     // Catch: java.lang.Exception -> Lc8
            r10.append(r14)     // Catch: java.lang.Exception -> Lc8
            r10.append(r5)     // Catch: java.lang.Exception -> Lc8
            r10.append(r15)     // Catch: java.lang.Exception -> Lc8
            r10.append(r2)     // Catch: java.lang.Exception -> Lc8
            r10.append(r14)     // Catch: java.lang.Exception -> Lc8
            r10.append(r9)     // Catch: java.lang.Exception -> Lc8
            r10.append(r15)     // Catch: java.lang.Exception -> Lc8
            r10.append(r0)     // Catch: java.lang.Exception -> Lc8
            r10.append(r14)     // Catch: java.lang.Exception -> Lc8
            r10.append(r4)     // Catch: java.lang.Exception -> Lc8
            r10.append(r15)     // Catch: java.lang.Exception -> Lc8
            r10.append(r3)     // Catch: java.lang.Exception -> Lc8
            r10.append(r14)     // Catch: java.lang.Exception -> Lc8
            r10.append(r11)     // Catch: java.lang.Exception -> Lc8
            r10.append(r15)     // Catch: java.lang.Exception -> Lc8
            java.lang.String r0 = "1"
            r10.append(r0)     // Catch: java.lang.Exception -> Lc8
            java.lang.String r0 = r10.toString()     // Catch: java.lang.Exception -> Lc8
            r1 = r19
            java.lang.String r0 = r1.reCreateClickUrl(r0)     // Catch: java.lang.Exception -> L1ad
            r1.reBuildClickUrl = r0     // Catch: java.lang.Exception -> L1ad
            goto L1b7
        L1ac:
            return r8
        L1ad:
            r0 = move-exception
        L1ae:
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r2 == 0) goto L1b7
            java.lang.String r2 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            com.mbridge.msdk.foundation.tools.z.c(r2, r7, r0)
        L1b7:
            return r8
    }

    private void handlerRequestNetworkError() {
            r4 = this;
            java.lang.String r0 = "response or result is null"
            com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack r1 = r4.appletSchemeCallBack
            if (r1 != 0) goto L7
            return
        L7:
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L12
            java.lang.String r1 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            java.lang.String r2 = "handlerRequestNetworkError response or result is null"
            com.mbridge.msdk.foundation.tools.z.a(r1, r2)
        L12:
            com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack r1 = r4.appletSchemeCallBack     // Catch: java.lang.Exception -> L1b
            r2 = 1
            java.lang.String r3 = r4.reBuildClickUrl     // Catch: java.lang.Exception -> L1b
            r1.onNetworkError(r2, r0, r3)     // Catch: java.lang.Exception -> L1b
            goto L27
        L1b:
            r1 = move-exception
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r2 == 0) goto L27
            java.lang.String r2 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            java.lang.String r3 = "handler request network error exception "
            com.mbridge.msdk.foundation.tools.z.c(r2, r3, r1)
        L27:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r2 = r4.unitID
            java.lang.String r3 = r4.requestId
            com.mbridge.msdk.scheme.report.AppletsReport.reportAppletsLoadState(r1, r0, r2, r3)
            return
    }

    private void handlerSchemeRequestFailed(int r7, java.lang.String r8) {
            r6 = this;
            com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack r0 = r6.appletSchemeCallBack
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            r1 = 1
            r2 = 0
            r3 = 2
            if (r0 == 0) goto L21
            java.lang.String r0 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            java.lang.Object[] r4 = new java.lang.Object[r3]
            java.lang.String r5 = java.lang.String.valueOf(r7)
            r4[r2] = r5
            r4[r1] = r8
            java.lang.String r5 = "handlerSchemeRequestFailed network error by code %s and %s"
            java.lang.String r4 = java.lang.String.format(r5, r4)
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)
        L21:
            com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack r0 = r6.appletSchemeCallBack     // Catch: java.lang.Exception -> L29
            java.lang.String r4 = r6.reBuildClickUrl     // Catch: java.lang.Exception -> L29
            r0.onAppletSchemeRequestFailed(r7, r8, r4)     // Catch: java.lang.Exception -> L29
            goto L35
        L29:
            r0 = move-exception
            boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r4 == 0) goto L35
            java.lang.String r4 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            java.lang.String r5 = "handler wx scheme failed exception  "
            com.mbridge.msdk.foundation.tools.z.c(r4, r5, r0)
        L35:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r7 = java.lang.String.valueOf(r7)
            r3[r2] = r7
            r3[r1] = r8
            java.lang.String r7 = "network error by code %s and %s"
            java.lang.String r7 = java.lang.String.format(r7, r3)
            java.lang.String r8 = r6.unitID
            java.lang.String r1 = r6.requestId
            com.mbridge.msdk.scheme.report.AppletsReport.reportAppletsLoadState(r0, r7, r8, r1)
            return
    }

    private void handlerSchemeRequestNetworkError(com.mbridge.msdk.foundation.same.net.a.a r8) {
            r7 = this;
            com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack r0 = r7.appletSchemeCallBack
            if (r0 != 0) goto L5
            return
        L5:
            r0 = -1
            if (r8 == 0) goto L15
            int r0 = r8.a
            java.lang.String r8 = r8.getMessage()
            r1 = 10
            if (r0 != r1) goto L17
            java.lang.String r8 = "request timeout"
            goto L17
        L15:
            java.lang.String r8 = "unKnown"
        L17:
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            r2 = 1
            r3 = 0
            r4 = 2
            if (r1 == 0) goto L33
            java.lang.String r1 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            java.lang.Object[] r5 = new java.lang.Object[r4]
            java.lang.String r6 = java.lang.String.valueOf(r0)
            r5[r3] = r6
            r5[r2] = r8
            java.lang.String r6 = "handlerSchemeRequestNetworkError network error by code %s and %s"
            java.lang.String r5 = java.lang.String.format(r6, r5)
            com.mbridge.msdk.foundation.tools.z.a(r1, r5)
        L33:
            com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack r1 = r7.appletSchemeCallBack     // Catch: java.lang.Exception -> L4c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4c
            r5.<init>()     // Catch: java.lang.Exception -> L4c
            java.lang.String r6 = "network error: "
            r5.append(r6)     // Catch: java.lang.Exception -> L4c
            r5.append(r8)     // Catch: java.lang.Exception -> L4c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L4c
            java.lang.String r6 = r7.reBuildClickUrl     // Catch: java.lang.Exception -> L4c
            r1.onNetworkError(r0, r5, r6)     // Catch: java.lang.Exception -> L4c
            goto L58
        L4c:
            r1 = move-exception
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r5 == 0) goto L58
            java.lang.String r5 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            java.lang.String r6 = "handler wx scheme network error exception "
            com.mbridge.msdk.foundation.tools.z.c(r5, r6, r1)
        L58:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r4[r3] = r0
            r4[r2] = r8
            java.lang.String r8 = "network error by code %s and %s"
            java.lang.String r8 = java.lang.String.format(r8, r4)
            java.lang.String r0 = r7.unitID
            java.lang.String r2 = r7.requestId
            com.mbridge.msdk.scheme.report.AppletsReport.reportAppletsLoadState(r1, r8, r0, r2)
            return
    }

    private void handlerSchemeRequestResult(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r5) throws com.mbridge.msdk.scheme.applet.AppletsModel.SchemeRequestException {
            r4 = this;
            T r5 = r5.a
            org.json.JSONObject r5 = (org.json.JSONObject) r5
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "result: "
            r0.append(r1)
            java.lang.String r1 = r5.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AppletsModel"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L22:
            java.lang.String r0 = "wx_scheme"
            boolean r1 = r5.has(r0)
            r2 = 1
            java.lang.String r3 = ""
            if (r1 == 0) goto L45
            java.lang.String r5 = r5.optString(r0, r3)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L3d
            r4.isRequestSuccess = r2
            r4.handlerSchemeRequestSuccess(r5)
            goto L5c
        L3d:
            com.mbridge.msdk.scheme.applet.AppletsModel$SchemeRequestException r5 = new com.mbridge.msdk.scheme.applet.AppletsModel$SchemeRequestException
            java.lang.String r0 = "wx_scheme value is null"
            r5.<init>(r0)
            throw r5
        L45:
            r0 = -1
            java.lang.String r1 = "error_code"
            int r0 = r5.optInt(r1, r0)
            java.lang.String r1 = "error_msg"
            java.lang.String r5 = r5.optString(r1, r3)
            r1 = 44993(0xafc1, float:6.3049E-41)
            if (r0 != r1) goto L59
            r4.isRequestTimesMaxPerDay = r2
        L59:
            r4.handlerSchemeRequestFailed(r0, r5)
        L5c:
            return
    }

    private void handlerSchemeRequestStart() {
            r4 = this;
            com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack r0 = r4.appletSchemeCallBack
            if (r0 != 0) goto L5
            return
        L5:
            com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack r0 = r4.appletSchemeCallBack     // Catch: java.lang.Exception -> Lb
            r0.onAppletSchemeRequestStart()     // Catch: java.lang.Exception -> Lb
            goto L17
        Lb:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L17
            java.lang.String r1 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            java.lang.String r2 = "handler wx scheme start exception "
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
        L17:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            java.lang.String r1 = r4.unitID
            java.lang.String r2 = r4.requestId
            java.lang.String r3 = "start load wx scheme"
            com.mbridge.msdk.scheme.report.AppletsReport.reportAppletsLoadState(r0, r3, r1, r2)
            return
    }

    private void handlerSchemeRequestSuccess(java.lang.String r4) {
            r3 = this;
            com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack r0 = r3.appletSchemeCallBack
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L1f
            java.lang.String r0 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "handlerSchemeRequestSuccess: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        L1f:
            r3.deepLink = r4     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack r0 = r3.appletSchemeCallBack     // Catch: java.lang.Exception -> L27
            r0.onAppletSchemeRequestSuccess(r4)     // Catch: java.lang.Exception -> L27
            goto L33
        L27:
            r4 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L33
            java.lang.String r0 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            java.lang.String r1 = "handler wx scheme success exception "
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r4)
        L33:
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r4.j()
            java.lang.String r0 = r3.unitID
            java.lang.String r1 = r3.requestId
            java.lang.String r2 = "request wx scheme success"
            com.mbridge.msdk.scheme.report.AppletsReport.reportAppletsLoadState(r4, r2, r0, r1)
            return
    }

    private boolean isCanRequestByClickUrl(java.lang.String r4) {
            r3 = this;
            r0 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.campaignEx     // Catch: java.lang.Exception -> L1f
            if (r1 != 0) goto L6
            return r0
        L6:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.campaignEx     // Catch: java.lang.Exception -> L1f
            java.lang.String r1 = r1.getClickURL()     // Catch: java.lang.Exception -> L1f
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L1f
            if (r2 == 0) goto L13
            goto L2b
        L13:
            java.lang.String r2 = "wx_miniprogram"
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ak.a(r1, r2)     // Catch: java.lang.Exception -> L1f
            boolean r4 = android.text.TextUtils.equals(r1, r4)     // Catch: java.lang.Exception -> L1f
            r0 = r4
            goto L2b
        L1f:
            r4 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L2b
            java.lang.String r1 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            java.lang.String r2 = "query wx_miniprogram from click url exception "
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r4)
        L2b:
            return r0
    }

    private boolean isCanRequestByLinkType() {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.campaignEx
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            int r0 = r0.getLinkType()
            r2 = 8
            if (r0 == r2) goto L12
            r2 = 9
            if (r0 != r2) goto L13
        L12:
            r1 = 1
        L13:
            return r1
    }

    private boolean isCanRequestByTemplateUrl(java.lang.String r4) {
            r3 = this;
            r0 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.campaignEx     // Catch: java.lang.Exception -> L29
            if (r1 != 0) goto L6
            return r0
        L6:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.campaignEx     // Catch: java.lang.Exception -> L29
            com.mbridge.msdk.foundation.entity.CampaignEx$c r1 = r1.getRewardTemplateMode()     // Catch: java.lang.Exception -> L29
            if (r1 == 0) goto L35
            java.lang.String r2 = r1.e()     // Catch: java.lang.Exception -> L29
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L29
            if (r2 == 0) goto L19
            goto L35
        L19:
            java.lang.String r1 = r1.e()     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = "reqwxurl"
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ak.a(r1, r2)     // Catch: java.lang.Exception -> L29
            boolean r4 = android.text.TextUtils.equals(r1, r4)     // Catch: java.lang.Exception -> L29
            r0 = r4
            goto L35
        L29:
            r4 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L35
            java.lang.String r1 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            java.lang.String r2 = "query reqwxurl from template url exception "
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r4)
        L35:
            return r0
    }

    private java.lang.String reCreateClickUrl(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r1 = r1.e
            r0.append(r1)
            java.lang.String r1 = "?"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    public boolean can(int r5) {
            r4 = this;
            boolean r0 = r4.isRequesting()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            boolean r0 = r4.canRequestWxScheme(r5)
            if (r0 != 0) goto Lf
            return r1
        Lf:
            int r0 = r4.lastRequestType
            r2 = -1
            r3 = 1
            if (r0 != r2) goto L16
            return r3
        L16:
            boolean r0 = r4.isRequestSuccess()
            if (r0 == 0) goto L1d
            return r1
        L1d:
            int r0 = r4.lastRequestType
            if (r0 != 0) goto L23
            if (r5 == r3) goto L2d
        L23:
            int r0 = r4.lastRequestType
            if (r0 != r3) goto L2e
            if (r5 != r3) goto L2e
            boolean r5 = r4.isUserClick
            if (r5 == 0) goto L2e
        L2d:
            r1 = r3
        L2e:
            return r1
    }

    public boolean canRequestWxScheme(int r3) {
            r2 = this;
            boolean r0 = r2.isSupportWxScheme()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            r0 = 1
            if (r3 == 0) goto L10
            if (r3 == r0) goto Le
            goto L16
        Le:
            r1 = r0
            goto L16
        L10:
            java.lang.String r3 = "2"
            boolean r1 = r2.isCanRequestByTemplateUrl(r3)
        L16:
            return r1
    }

    public void clearRequestState() {
            r1 = this;
            r0 = 0
            r1.isRequestSuccess = r0
            r1.isRequesting = r0
            r0 = 0
            r1.appletSchemeCallBack = r0
            return
    }

    public java.lang.String getDeepLink() {
            r1 = this;
            java.lang.String r0 = r1.deepLink
            return r0
    }

    public java.lang.String getReBuildClickUrl() {
            r1 = this;
            java.lang.String r0 = r1.reBuildClickUrl
            return r0
    }

    public boolean isRequestSuccess() {
            r1 = this;
            boolean r0 = r1.isRequestSuccess
            return r0
    }

    public boolean isRequestTimesMaxPerDay() {
            r1 = this;
            boolean r0 = r1.isRequestTimesMaxPerDay
            return r0
    }

    public boolean isRequesting() {
            r1 = this;
            boolean r0 = r1.isRequesting
            return r0
    }

    public boolean isSupportWxScheme() {
            r1 = this;
            boolean r0 = r1.isSupportWxScheme
            if (r0 != 0) goto L17
            java.lang.String r0 = "1"
            boolean r0 = r1.isCanRequestByClickUrl(r0)
            if (r0 == 0) goto L14
            boolean r0 = r1.isCanRequestByLinkType()
            if (r0 == 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            r1.isSupportWxScheme = r0
        L17:
            boolean r0 = r1.isSupportWxScheme
            return r0
    }

    public void requestWxAppletsScheme(int r9, com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack r10) {
            r8 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.campaignEx
            if (r0 == 0) goto L72
            java.lang.String r0 = r8.unitID
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Ld
            goto L72
        Ld:
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L18
            java.lang.String r0 = com.mbridge.msdk.scheme.applet.AppletsModel.TAG
            java.lang.String r1 = "start request wx scheme"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L18:
            r0 = 1
            r8.isRequesting = r0
            if (r10 == 0) goto L1f
            r8.appletSchemeCallBack = r10
        L1f:
            r8.handlerSchemeRequestStart()
            com.mbridge.msdk.scheme.request.AppletSchemeRequest r1 = new com.mbridge.msdk.scheme.request.AppletSchemeRequest
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r10 = r10.j()
            r1.<init>(r10)
            java.util.Map<java.lang.String, java.lang.String> r10 = r8.params
            if (r10 != 0) goto L3b
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r8.campaignEx
            java.util.Map r10 = r8.getAppletsParamsAndBuildRequest(r10)
            r8.params = r10
        L3b:
            java.util.Map<java.lang.String, java.lang.String> r10 = r8.params
            if (r10 != 0) goto L40
            return
        L40:
            boolean r10 = r8.isRequestTimesMaxPerDay()
            if (r10 == 0) goto L4f
            r9 = 44993(0xafc1, float:6.3049E-41)
            java.lang.String r10 = "get wxscheme failed : request times is max"
            r8.handlerSchemeRequestFailed(r9, r10)
            return
        L4f:
            r8.lastRequestType = r9
            com.mbridge.msdk.foundation.same.net.b r9 = new com.mbridge.msdk.foundation.same.net.b
            r3 = 5000(0x1388, float:7.006E-42)
            r4 = 5000(0x1388, float:7.006E-42)
            r5 = 5000(0x1388, float:7.006E-42)
            r6 = 6000(0x1770, float:8.408E-42)
            r7 = 0
            r2 = r9
            r2.<init>(r3, r4, r5, r6, r7)
            r2 = 1
            com.mbridge.msdk.foundation.same.net.f.d r10 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r3 = r10.e
            java.util.Map<java.lang.String, java.lang.String> r4 = r8.params
            com.mbridge.msdk.scheme.applet.AppletsModel$DefaultAppletSchemeResponse r6 = new com.mbridge.msdk.scheme.applet.AppletsModel$DefaultAppletSchemeResponse
            r6.<init>(r8)
            r5 = r9
            r1.get(r2, r3, r4, r5, r6)
        L72:
            return
    }

    public void setAppletSchemeCallBack(com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack r1) {
            r0 = this;
            r0.appletSchemeCallBack = r1
            return
    }

    public void setRequestingFinish() {
            r1 = this;
            r0 = 0
            r1.isRequesting = r0
            return
    }

    public void setUserClick(boolean r1) {
            r0 = this;
            r0.isUserClick = r1
            return
    }
}
