package com.vivo.push.sdk;

public abstract class BasePushMessageReceiver extends android.content.BroadcastReceiver implements com.vivo.push.sdk.PushMessageCallback {
    public static final java.lang.String TAG = "PushMessageReceiver";

    public BasePushMessageReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean isAllowNet(android.content.Context r6) {
            r5 = this;
            r0 = 0
            java.lang.String r1 = "PushMessageReceiver"
            if (r6 != 0) goto Lb
            java.lang.String r6 = "isAllowNet sContext is null"
        L7:
            com.vivo.push.util.p.a(r1, r6)
            return r0
        Lb:
            java.lang.String r2 = r6.getPackageName()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L18
            java.lang.String r6 = "isAllowNet pkgName is null"
            goto L7
        L18:
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r3 = "com.vivo.pushservice.action.PUSH_SERVICE"
            r0.<init>(r3)
            r0.setPackage(r2)
            android.content.pm.PackageManager r3 = r6.getPackageManager()
            r4 = 576(0x240, float:8.07E-43)
            java.util.List r0 = r3.queryIntentServices(r0, r4)
            if (r0 == 0) goto L3a
            int r0 = r0.size()
            if (r0 > 0) goto L35
            goto L3a
        L35:
            boolean r6 = com.vivo.push.util.t.a(r6, r2)
            return r6
        L3a:
            java.lang.String r6 = "this is client sdk"
            com.vivo.push.util.p.a(r1, r6)
            r6 = 1
            return r6
    }

    @Override
    public void onBind(android.content.Context r1, int r2, java.lang.String r3) {
            r0 = this;
            return
    }

    @Override
    public void onDelAlias(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.util.List<java.lang.String> r4, java.lang.String r5) {
            r0 = this;
            return
    }

    @Override
    public void onDelTags(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.util.List<java.lang.String> r4, java.lang.String r5) {
            r0 = this;
            return
    }

    @Override
    public void onListTags(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.lang.String r4) {
            r0 = this;
            return
    }

    @Override
    public void onLog(android.content.Context r1, java.lang.String r2, int r3, boolean r4) {
            r0 = this;
            return
    }

    @Override
    public void onPublish(android.content.Context r1, int r2, java.lang.String r3) {
            r0 = this;
            return
    }

    @Override
    public final void onReceive(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            android.content.Context r4 = com.vivo.push.util.ContextDelegate.getContext(r4)
            android.content.Context r4 = r4.getApplicationContext()
            com.vivo.push.e r0 = com.vivo.push.e.a()
            r0.a(r4)
            java.lang.String r0 = "req_id"
            java.lang.String r0 = r5.getStringExtra(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "PushMessageReceiver "
            r1.<init>(r2)
            java.lang.String r4 = r4.getPackageName()
            r1.append(r4)
            java.lang.String r4 = " ; requestId = "
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            java.lang.String r0 = "PushMessageReceiver"
            com.vivo.push.util.p.d(r0, r4)
            com.vivo.push.e r4 = com.vivo.push.e.a()     // Catch: java.lang.Exception -> L3c
            r4.a(r5, r3)     // Catch: java.lang.Exception -> L3c
            return
        L3c:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    @Override
    public void onSetAlias(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.util.List<java.lang.String> r4, java.lang.String r5) {
            r0 = this;
            return
    }

    @Override
    public void onSetTags(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.util.List<java.lang.String> r4, java.lang.String r5) {
            r0 = this;
            return
    }

    @Override
    public void onTransmissionMessage(android.content.Context r1, com.vivo.push.model.UnvarnishedMessage r2) {
            r0 = this;
            return
    }

    @Override
    public void onUnBind(android.content.Context r1, int r2, java.lang.String r3) {
            r0 = this;
            return
    }
}
