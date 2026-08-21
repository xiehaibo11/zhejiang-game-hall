package com.tkay.pd;

public class ExHandler implements com.tkay.core.api.IExHandler {
    public static final java.lang.String JSON_REQUEST_BOOT_MARK = "boot_mark";
    public static final java.lang.String JSON_REQUEST_CPU = "cpu";
    public static final java.lang.String JSON_REQUEST_IMEI = "imei";
    public static final java.lang.String JSON_REQUEST_INSTALL_TS = "install_ts";
    public static final java.lang.String JSON_REQUEST_ISAGENT = "isagent";
    public static final java.lang.String JSON_REQUEST_ISROOT = "isroot";
    public static final java.lang.String JSON_REQUEST_MAC = "mac";
    public static final java.lang.String JSON_REQUEST_OAID = "oaid";
    public static final java.lang.String JSON_REQUEST_SSID = "wifi_name";
    public static final java.lang.String JSON_REQUEST_UPDATE_MARK = "update_mark";
    public static final java.lang.String JSON_REQUEST_UPDATE_TS = "update_ts";
    int imeiOpen;
    int macOpen;

    public ExHandler() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.macOpen = r0
            r1.imeiOpen = r0
            return
    }

    @Override
    public boolean checkDebuggerDevice(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.tkay.china.b.a.b()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L14
            java.lang.String r0 = "tkay_sdk"
            java.lang.String r1 = "oaid"
            java.lang.String r2 = ""
            java.lang.String r0 = com.tkay.core.common.l.p.b(r4, r0, r1, r2)
        L14:
            boolean r4 = android.text.TextUtils.equals(r5, r0)
            if (r4 == 0) goto L1c
            r4 = 1
            return r4
        L1c:
            r4 = 0
            return r4
    }

    @Override
    public int checkDownloadType(com.tkay.core.common.f.h r1, com.tkay.core.common.f.i r2) {
            r0 = this;
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            com.tkay.china.common.a r2 = com.tkay.china.common.a.a(r2)
            int r1 = r2.b(r1)
            return r1
    }

    @Override
    public com.tkay.core.api.TYEventInterface createDownloadListener(com.tkay.core.api.TYBaseAdAdapter r2, com.tkay.core.api.BaseAd r3, com.tkay.core.api.TYEventInterface r4) {
            r1 = this;
            com.tkay.china.common.c r0 = new com.tkay.china.common.c
            r0.<init>(r2, r3, r4)
            return r0
    }

    @Override
    public java.lang.String fillCDataParam(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = ""
            if (r6 != 0) goto L5
            return r0
        L5:
            int r1 = r5.imeiOpen
            r2 = 1
            if (r1 != r2) goto L17
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r1 = com.tkay.china.b.a.d(r1)
            goto L18
        L17:
            r1 = r0
        L18:
            int r3 = r5.macOpen
            if (r3 != r2) goto L21
            java.lang.String r2 = com.tkay.china.b.a.a()
            goto L22
        L21:
            r2 = r0
        L22:
            java.lang.String r3 = com.tkay.china.b.a.b()
            if (r1 != 0) goto L29
            r1 = r0
        L29:
            java.lang.String r4 = "at_device1"
            java.lang.String r6 = r6.replaceAll(r4, r1)
            if (r2 != 0) goto L32
            r2 = r0
        L32:
            java.lang.String r1 = "at_device2"
            java.lang.String r6 = r6.replaceAll(r1, r2)
            if (r3 != 0) goto L3b
            goto L3c
        L3b:
            r0 = r3
        L3c:
            java.lang.String r1 = "at_device3"
            java.lang.String r6 = r6.replaceAll(r1, r0)
            return r6
    }

    @Override
    public void fillRequestData(org.json.JSONObject r6, com.tkay.core.c.a r7) {
            r5 = this;
            java.lang.String r0 = ""
            if (r7 == 0) goto L9
            java.lang.String r7 = r7.F()
            goto La
        L9:
            r7 = r0
        La:
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            java.lang.String r2 = "oaid"
            java.lang.String r3 = "imei"
            java.lang.String r4 = "mac"
            if (r1 == 0) goto L34
            java.lang.String r7 = com.tkay.china.b.a.a()     // Catch: java.lang.Exception -> L33
            r6.put(r4, r7)     // Catch: java.lang.Exception -> L33
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L33
            android.content.Context r7 = r7.f()     // Catch: java.lang.Exception -> L33
            java.lang.String r7 = com.tkay.china.b.a.d(r7)     // Catch: java.lang.Exception -> L33
            r6.put(r3, r7)     // Catch: java.lang.Exception -> L33
            java.lang.String r7 = com.tkay.china.b.a.b()     // Catch: java.lang.Exception -> L33
            r6.put(r2, r7)     // Catch: java.lang.Exception -> L33
        L33:
            return
        L34:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L49
            r1.<init>(r7)     // Catch: java.lang.Exception -> L49
            java.lang.String r7 = "m"
            int r7 = r1.optInt(r7)     // Catch: java.lang.Exception -> L49
            r5.macOpen = r7     // Catch: java.lang.Exception -> L49
            java.lang.String r7 = "i"
            int r7 = r1.optInt(r7)     // Catch: java.lang.Exception -> L49
            r5.imeiOpen = r7     // Catch: java.lang.Exception -> L49
        L49:
            int r7 = r5.macOpen     // Catch: java.lang.Exception -> L71
            r1 = 1
            if (r7 != r1) goto L53
            java.lang.String r7 = com.tkay.china.b.a.a()     // Catch: java.lang.Exception -> L71
            goto L54
        L53:
            r7 = r0
        L54:
            r6.put(r4, r7)     // Catch: java.lang.Exception -> L71
            int r7 = r5.imeiOpen     // Catch: java.lang.Exception -> L71
            if (r7 != r1) goto L67
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L71
            android.content.Context r7 = r7.f()     // Catch: java.lang.Exception -> L71
            java.lang.String r0 = com.tkay.china.b.a.d(r7)     // Catch: java.lang.Exception -> L71
        L67:
            r6.put(r3, r0)     // Catch: java.lang.Exception -> L71
            java.lang.String r7 = com.tkay.china.b.a.b()     // Catch: java.lang.Exception -> L71
            r6.put(r2, r7)     // Catch: java.lang.Exception -> L71
        L71:
            return
    }

    @Override
    public void fillRequestDeviceData(org.json.JSONObject r4, int r5) {
            r3 = this;
            r0 = r5 & 1
            r1 = 1
            if (r0 != r1) goto L73
            java.lang.String r0 = com.tkay.china.b.a.d()     // Catch: java.lang.Throwable -> L1c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1c
            if (r0 != 0) goto L1c
            java.lang.String r0 = "isroot"
            java.lang.String r1 = com.tkay.china.b.a.d()     // Catch: java.lang.Throwable -> L1c
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L1c
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L1c
        L1c:
            java.lang.String r0 = com.tkay.china.b.a.e()     // Catch: java.lang.Throwable -> L33
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L33
            if (r0 != 0) goto L33
            java.lang.String r0 = "isagent"
            java.lang.String r1 = com.tkay.china.b.a.e()     // Catch: java.lang.Throwable -> L33
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L33
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L33
        L33:
            java.lang.String r0 = "wifi_name"
            java.lang.String r1 = com.tkay.china.b.a.c()     // Catch: java.lang.Throwable -> L3c
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L3c
        L3c:
            java.lang.String r0 = com.tkay.china.b.a.f()     // Catch: java.lang.Throwable -> L53
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L53
            if (r0 != 0) goto L53
            java.lang.String r0 = "install_ts"
            java.lang.String r1 = com.tkay.china.b.a.f()     // Catch: java.lang.Throwable -> L53
            long r1 = java.lang.Long.parseLong(r1)     // Catch: java.lang.Throwable -> L53
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L53
        L53:
            java.lang.String r0 = com.tkay.china.b.a.g()     // Catch: java.lang.Throwable -> L6a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L6a
            if (r0 != 0) goto L6a
            java.lang.String r0 = "update_ts"
            java.lang.String r1 = com.tkay.china.b.a.g()     // Catch: java.lang.Throwable -> L6a
            long r1 = java.lang.Long.parseLong(r1)     // Catch: java.lang.Throwable -> L6a
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L6a
        L6a:
            java.lang.String r0 = "cpu"
            java.lang.String r1 = com.tkay.china.b.a.h()     // Catch: java.lang.Throwable -> L73
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L73
        L73:
            r0 = 2
            r5 = r5 & r0
            if (r5 != r0) goto L89
            java.lang.String r5 = "boot_mark"
            java.lang.String r0 = com.tkay.china.b.a.i()     // Catch: java.lang.Throwable -> L89
            r4.put(r5, r0)     // Catch: java.lang.Throwable -> L89
            java.lang.String r5 = "update_mark"
            java.lang.String r0 = com.tkay.china.b.a.j()     // Catch: java.lang.Throwable -> L89
            r4.put(r5, r0)     // Catch: java.lang.Throwable -> L89
        L89:
            return
    }

    @Override
    public void fillTestDeviceData(org.json.JSONObject r6, com.tkay.core.c.a r7) {
            r5 = this;
            java.lang.String r0 = ""
            if (r7 == 0) goto L9
            java.lang.String r7 = r7.F()
            goto La
        L9:
            r7 = r0
        La:
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            java.lang.String r2 = "OAID"
            java.lang.String r3 = "IMEI"
            if (r1 == 0) goto L3b
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L3a
            android.content.Context r7 = r7.f()     // Catch: java.lang.Exception -> L3a
            java.lang.String r7 = com.tkay.china.b.a.d(r7)     // Catch: java.lang.Exception -> L3a
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L3a
            if (r1 == 0) goto L27
            goto L28
        L27:
            r0 = r7
        L28:
            r6.put(r3, r0)     // Catch: java.lang.Exception -> L3a
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L3a
            android.content.Context r7 = r7.f()     // Catch: java.lang.Exception -> L3a
            java.lang.String r7 = com.tkay.china.b.a.c(r7)     // Catch: java.lang.Exception -> L3a
            r6.put(r2, r7)     // Catch: java.lang.Exception -> L3a
        L3a:
            return
        L3b:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L50
            r1.<init>(r7)     // Catch: java.lang.Exception -> L50
            java.lang.String r7 = "m"
            int r7 = r1.optInt(r7)     // Catch: java.lang.Exception -> L50
            r5.macOpen = r7     // Catch: java.lang.Exception -> L50
            java.lang.String r7 = "i"
            int r7 = r1.optInt(r7)     // Catch: java.lang.Exception -> L50
            r5.imeiOpen = r7     // Catch: java.lang.Exception -> L50
        L50:
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L7a
            android.content.Context r7 = r7.f()     // Catch: java.lang.Exception -> L7a
            java.lang.String r7 = com.tkay.china.b.a.d(r7)     // Catch: java.lang.Exception -> L7a
            int r1 = r5.imeiOpen     // Catch: java.lang.Exception -> L7a
            r4 = 1
            if (r1 != r4) goto L68
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L7a
            if (r1 != 0) goto L68
            r0 = r7
        L68:
            r6.put(r3, r0)     // Catch: java.lang.Exception -> L7a
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L7a
            android.content.Context r7 = r7.f()     // Catch: java.lang.Exception -> L7a
            java.lang.String r7 = com.tkay.china.b.a.c(r7)     // Catch: java.lang.Exception -> L7a
            r6.put(r2, r7)     // Catch: java.lang.Exception -> L7a
        L7a:
            return
    }

    @Override
    public java.lang.String getUniqueId(android.content.Context r1) {
            r0 = this;
            java.lang.String r1 = com.tkay.china.b.a.b(r1)
            return r1
    }

    @Override
    public void handleOfferClick(android.content.Context r9, com.tkay.core.common.f.i r10, com.tkay.core.common.f.h r11, java.lang.String r12, java.lang.String r13, java.lang.Runnable r14, com.tkay.core.common.g.b r15) {
            r8 = this;
            com.tkay.china.common.a r0 = com.tkay.china.common.a.a(r9)
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r0.a(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    @Override
    public void initDeviceInfo(android.content.Context r1) {
            r0 = this;
            com.tkay.china.b.a.a(r1)
            return
    }

    @Override
    public void openApkConfirmDialog(android.content.Context r1, com.tkay.core.common.f.h r2, com.tkay.core.common.f.i r3, com.tkay.core.common.g.a r4) {
            r0 = this;
            com.tkay.china.activity.ApkConfirmDialogActivity.a(r1, r2, r4)
            return
    }
}
