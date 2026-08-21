package com.mbridge.msdk.mbjscommon.confirmation.bridge;

public class ConfirmationJsBridgePlugin extends com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload {
    private static java.lang.String a = "ConfirmationJsBridgePlugin";

    static {
            return
    }

    public ConfirmationJsBridgePlugin() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.mbridge.msdk.mbjscommon.confirmation.a a(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.mbridge.msdk.mbjscommon.windvane.a
            if (r0 == 0) goto L13
            com.mbridge.msdk.mbjscommon.windvane.a r2 = (com.mbridge.msdk.mbjscommon.windvane.a) r2
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r2.a
            java.lang.Object r2 = r2.getObject()
            boolean r0 = r2 instanceof com.mbridge.msdk.mbjscommon.confirmation.a
            if (r0 == 0) goto L13
            com.mbridge.msdk.mbjscommon.confirmation.a r2 = (com.mbridge.msdk.mbjscommon.confirmation.a) r2
            goto L14
        L13:
            r2 = 0
        L14:
            return r2
    }

    private void a(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.addDownloaderListener(r3, r4)     // Catch: java.lang.Exception -> L17
            com.mbridge.msdk.mbjscommon.confirmation.e r0 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Exception -> L17
            r0.b(r3, r4)     // Catch: java.lang.Exception -> L17
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L17
            r0 = 0
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.bridge.b.a(r0)     // Catch: java.lang.Exception -> L17
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L17
            goto L30
        L17:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "exception: "
            r0.append(r1)
            java.lang.String r4 = r4.getLocalizedMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r3, r4)
        L30:
            return
    }

    public void click(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)     // Catch: java.lang.Exception -> L10
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L10
            r0 = 0
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.bridge.b.a(r0)     // Catch: java.lang.Exception -> L10
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L10
            goto L29
        L10:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "exception: "
            r0.append(r1)
            java.lang.String r4 = r4.getLocalizedMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r3, r4)
        L29:
            return
    }

    public void confirmCancel(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.mbridge.msdk.mbjscommon.confirmation.e r0 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Exception -> L14
            r0.a(r3, r4)     // Catch: java.lang.Exception -> L14
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L14
            r0 = 0
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.bridge.b.a(r0)     // Catch: java.lang.Exception -> L14
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L14
            goto L2d
        L14:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "exception: "
            r0.append(r1)
            java.lang.String r4 = r4.getLocalizedMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r3, r4)
        L2d:
            return
    }

    public void confirmClick(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)     // Catch: java.lang.Exception -> L10
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L10
            r0 = 0
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.bridge.b.a(r0)     // Catch: java.lang.Exception -> L10
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L10
            goto L29
        L10:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "exception: "
            r0.append(r1)
            java.lang.String r4 = r4.getLocalizedMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r3, r4)
        L29:
            return
    }

    public void confirmClose(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            com.mbridge.msdk.mbjscommon.confirmation.e r0 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Exception -> L14
            r0.a(r3, r4)     // Catch: java.lang.Exception -> L14
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L14
            r0 = 0
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.bridge.b.a(r0)     // Catch: java.lang.Exception -> L14
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L14
            goto L2d
        L14:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "exception: "
            r0.append(r1)
            java.lang.String r4 = r4.getLocalizedMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r3, r4)
        L2d:
            return
    }

    public void init(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r8 = com.mbridge.msdk.mbjscommon.confirmation.bridge.ConfirmationJsBridgePlugin.a
            java.lang.String r0 = " INIT INVOKE"
            com.mbridge.msdk.foundation.tools.z.d(r8, r0)
            com.mbridge.msdk.mbjscommon.confirmation.a r8 = r6.a(r7)
            if (r8 == 0) goto Lc9
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r1.add(r0)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La9
            r0.<init>()     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.tools.d r2 = new com.mbridge.msdk.foundation.tools.d     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La9
            android.content.Context r3 = r3.j()     // Catch: java.lang.Throwable -> La9
            r2.<init>(r3)     // Catch: java.lang.Throwable -> La9
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La9
            r3.<init>()     // Catch: java.lang.Throwable -> La9
            java.lang.String r4 = "dev_close_state"
            r5 = 0
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> La9
            java.lang.String r4 = "sdkSetting"
            r0.put(r4, r3)     // Catch: java.lang.Throwable -> La9
            java.lang.String r3 = "device"
            org.json.JSONObject r2 = r2.a()     // Catch: java.lang.Throwable -> La9
            r0.put(r3, r2)     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = "campaignList"
            org.json.JSONArray r1 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCamplistToJson(r1)     // Catch: java.lang.Throwable -> La9
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> La9
            java.lang.String r3 = r8.d()     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.c.d r1 = r1.e(r2, r3)     // Catch: java.lang.Throwable -> La9
            if (r1 != 0) goto L6b
            java.lang.String r8 = r8.d()     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.c.d r1 = com.mbridge.msdk.c.d.d(r8)     // Catch: java.lang.Throwable -> La9
        L6b:
            java.lang.String r8 = "unitSetting"
            org.json.JSONObject r1 = r1.t()     // Catch: java.lang.Throwable -> La9
            r0.put(r8, r1)     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.c.b r8 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La9
            java.lang.String r1 = r1.k()     // Catch: java.lang.Throwable -> La9
            java.lang.String r8 = r8.c(r1)     // Catch: java.lang.Throwable -> La9
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> La9
            if (r1 != 0) goto L94
            java.lang.String r1 = "appSetting"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La9
            r2.<init>(r8)     // Catch: java.lang.Throwable -> La9
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> La9
        L94:
            java.lang.String r8 = r0.toString()     // Catch: java.lang.Throwable -> La9
            byte[] r8 = r8.getBytes()     // Catch: java.lang.Throwable -> La9
            r0 = 2
            java.lang.String r8 = android.util.Base64.encodeToString(r8, r0)     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> La9
            r0.a(r7, r8)     // Catch: java.lang.Throwable -> La9
            goto Lc9
        La9:
            r8 = move-exception
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.confirmation.bridge.ConfirmationJsBridgePlugin.a
            java.lang.String r1 = "init"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r8)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "exception: "
            r0.append(r1)
            java.lang.String r8 = r8.getLocalizedMessage()
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r7, r8)
        Lc9:
            return
    }

    public void install(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.a(r3, r4)     // Catch: java.lang.Exception -> L10
            com.mbridge.msdk.mbjscommon.windvane.h r4 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L10
            r0 = 0
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.bridge.b.a(r0)     // Catch: java.lang.Exception -> L10
            r4.a(r3, r0)     // Catch: java.lang.Exception -> L10
            goto L29
        L10:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "exception: "
            r0.append(r1)
            java.lang.String r4 = r4.getLocalizedMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r3, r4)
        L29:
            return
    }

    public void openURL(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.confirmation.bridge.ConfirmationJsBridgePlugin.a     // Catch: java.lang.Exception -> L95
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L95
            r1.<init>()     // Catch: java.lang.Exception -> L95
            java.lang.String r2 = "openURL:"
            r1.append(r2)     // Catch: java.lang.Exception -> L95
            r1.append(r5)     // Catch: java.lang.Exception -> L95
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L95
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L95
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L95
            if (r0 == 0) goto L22
            java.lang.String r5 = "params is null"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r4, r5)     // Catch: java.lang.Exception -> L95
            return
        L22:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L95
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L95
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L95
            if (r1 != 0) goto L88
            if (r0 != 0) goto L4c
            boolean r1 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.a     // Catch: java.lang.Exception -> L42
            if (r1 == 0) goto L4c
            r1 = r4
            com.mbridge.msdk.mbjscommon.windvane.a r1 = (com.mbridge.msdk.mbjscommon.windvane.a) r1     // Catch: java.lang.Exception -> L42
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r1.a     // Catch: java.lang.Exception -> L42
            if (r1 == 0) goto L4c
            android.content.Context r0 = r1.getContext()     // Catch: java.lang.Exception -> L42
            goto L4c
        L42:
            r1 = move-exception
            java.lang.String r2 = com.mbridge.msdk.mbjscommon.confirmation.bridge.ConfirmationJsBridgePlugin.a     // Catch: java.lang.Exception -> L95
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> L95
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)     // Catch: java.lang.Exception -> L95
        L4c:
            if (r0 != 0) goto L54
            java.lang.String r5 = "context is null"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r4, r5)     // Catch: java.lang.Exception -> L95
            return
        L54:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L7e
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L7e
            java.lang.String r5 = "url"
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L7e
            java.lang.String r2 = "type"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L7e
            r2 = 1
            if (r1 != r2) goto L6c
            com.mbridge.msdk.click.c.a(r0, r5)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L7e
            goto L88
        L6c:
            r2 = 2
            if (r1 != r2) goto L88
            com.mbridge.msdk.click.c.b(r0, r5)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L7e
            goto L88
        L73:
            r5 = move-exception
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.confirmation.bridge.ConfirmationJsBridgePlugin.a     // Catch: java.lang.Exception -> L95
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Exception -> L95
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Exception -> L95
            goto L88
        L7e:
            r5 = move-exception
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.confirmation.bridge.ConfirmationJsBridgePlugin.a     // Catch: java.lang.Exception -> L95
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Exception -> L95
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Exception -> L95
        L88:
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L95
            r0 = 0
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.bridge.b.a(r0)     // Catch: java.lang.Exception -> L95
            r5.a(r4, r0)     // Catch: java.lang.Exception -> L95
            goto Lae
        L95:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "exception: "
            r0.append(r1)
            java.lang.String r5 = r5.getLocalizedMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r4, r5)
        Lae:
            return
    }

    public void readyStatus(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            if (r3 == 0) goto L5e
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L3e
            if (r0 != 0) goto L5e
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3e
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r4 = "isReady"
            r1 = 1
            int r4 = r0.optInt(r4, r1)     // Catch: java.lang.Throwable -> L3e
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L3e
            r1 = 0
            java.lang.String r1 = com.mbridge.msdk.mbjscommon.bridge.b.a(r1)     // Catch: java.lang.Throwable -> L3e
            r0.a(r3, r1)     // Catch: java.lang.Throwable -> L3e
            com.mbridge.msdk.mbjscommon.confirmation.a r0 = r2.a(r3)     // Catch: java.lang.Throwable -> L3e
            r1 = 0
            if (r0 == 0) goto L2b
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r0.b()     // Catch: java.lang.Throwable -> L3e
        L2b:
            if (r1 == 0) goto L35
            com.mbridge.msdk.mbjscommon.confirmation.e r0 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Throwable -> L3e
            r0.a(r3, r4)     // Catch: java.lang.Throwable -> L3e
            goto L5e
        L35:
            com.mbridge.msdk.mbjscommon.confirmation.e r4 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Throwable -> L3e
            r0 = 2
            r4.a(r3, r0)     // Catch: java.lang.Throwable -> L3e
            goto L5e
        L3e:
            r4 = move-exception
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.confirmation.bridge.ConfirmationJsBridgePlugin.a
            java.lang.String r1 = "readyStatus"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "exception: "
            r0.append(r1)
            java.lang.String r4 = r4.getLocalizedMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r3, r4)
        L5e:
            return
    }

    @Override
    public void sendNoticeAndCallBackClick(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.mbjscommon.confirmation.e r0 = com.mbridge.msdk.mbjscommon.confirmation.e.a()
            r0.b(r2, r3)
            return
    }

    public void translatePermission(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r0 = "permissionMap"
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L5a
            if (r1 != 0) goto L45
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L5a
            r1.<init>(r7)     // Catch: java.lang.Exception -> L5a
            org.json.JSONObject r7 = r1.getJSONObject(r0)     // Catch: java.lang.Exception -> L5a
            java.util.Iterator r2 = r7.keys()     // Catch: java.lang.Exception -> L5a
        L15:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L5a
            if (r3 == 0) goto L2d
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L5a
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L5a
            org.json.JSONArray r4 = r7.getJSONArray(r3)     // Catch: java.lang.Exception -> L5a
            org.json.JSONArray r4 = com.mbridge.msdk.foundation.tools.r.a(r4)     // Catch: java.lang.Exception -> L5a
            r7.put(r3, r4)     // Catch: java.lang.Exception -> L5a
            goto L15
        L2d:
            r1.put(r0, r7)     // Catch: java.lang.Exception -> L5a
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Exception -> L5a
            byte[] r7 = r7.getBytes()     // Catch: java.lang.Exception -> L5a
            r0 = 2
            java.lang.String r7 = android.util.Base64.encodeToString(r7, r0)     // Catch: java.lang.Exception -> L5a
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L5a
            r0.a(r6, r7)     // Catch: java.lang.Exception -> L5a
            return
        L45:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5a
            r0.<init>()     // Catch: java.lang.Exception -> L5a
            java.lang.String r1 = "exception: params is "
            r0.append(r1)     // Catch: java.lang.Exception -> L5a
            r0.append(r7)     // Catch: java.lang.Exception -> L5a
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Exception -> L5a
            com.mbridge.msdk.mbjscommon.bridge.b.a(r6, r7)     // Catch: java.lang.Exception -> L5a
            goto L73
        L5a:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "exception: "
            r0.append(r1)
            java.lang.String r7 = r7.getLocalizedMessage()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r6, r7)
        L73:
            return
    }
}
