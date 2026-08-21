package com.meizu.cloud.pushsdk.handler.a.d;

public class b extends com.meizu.cloud.pushsdk.handler.a.a<com.meizu.cloud.pushsdk.handler.MessageV3> {
    private android.content.Context a;

    public b(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r1
            return
    }

    private android.content.Intent b(android.content.Context r9, com.meizu.cloud.pushsdk.handler.MessageV3 r10) {
            r8 = this;
            java.lang.String r0 = r10.getUriPackageName()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Le
            java.lang.String r0 = r10.getUploadDataPackageName()
        Le:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "openClassName is "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r1)
            int r1 = r10.getClickType()
            java.lang.String r3 = " value "
            if (r1 != 0) goto La2
            android.content.pm.PackageManager r9 = r9.getPackageManager()
            android.content.Intent r9 = r9.getLaunchIntentForPackage(r0)
            if (r9 == 0) goto L16f
            java.util.Map r0 = r10.getParamsMap()
            if (r0 == 0) goto L16f
            java.util.Map r0 = r10.getParamsMap()
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L48:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16f
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = " launcher activity key "
            r4.append(r5)
            java.lang.Object r5 = r1.getKey()
            java.lang.String r5 = (java.lang.String) r5
            r4.append(r5)
            r4.append(r3)
            java.lang.Object r5 = r1.getValue()
            java.lang.String r5 = (java.lang.String) r5
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r4)
            java.lang.Object r4 = r1.getKey()
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L48
            java.lang.Object r4 = r1.getValue()
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L48
            java.lang.Object r4 = r1.getValue()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            r9.putExtra(r1, r4)
            goto L48
        La2:
            int r9 = r10.getClickType()
            r1 = 1
            if (r1 != r9) goto L129
            android.content.Intent r9 = new android.content.Intent
            r9.<init>()
            java.util.Map r4 = r10.getParamsMap()
            if (r4 == 0) goto L11a
            java.util.Map r4 = r10.getParamsMap()
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        Lc0:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L11a
            java.lang.Object r5 = r4.next()
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = " key "
            r6.append(r7)
            java.lang.Object r7 = r5.getKey()
            java.lang.String r7 = (java.lang.String) r7
            r6.append(r7)
            r6.append(r3)
            java.lang.Object r7 = r5.getValue()
            java.lang.String r7 = (java.lang.String) r7
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r6)
            java.lang.Object r6 = r5.getKey()
            java.lang.CharSequence r6 = (java.lang.CharSequence) r6
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto Lc0
            java.lang.Object r6 = r5.getValue()
            java.lang.CharSequence r6 = (java.lang.CharSequence) r6
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto Lc0
            java.lang.Object r6 = r5.getValue()
            java.lang.String r6 = (java.lang.String) r6
            java.lang.Object r5 = r5.getKey()
            java.lang.String r5 = (java.lang.String) r5
            r9.putExtra(r5, r6)
            goto Lc0
        L11a:
            java.lang.String r3 = r10.getActivity()
            r9.setClassName(r0, r3)
            java.lang.String r0 = r9.toUri(r1)
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r0)
            goto L16f
        L129:
            r9 = 2
            int r0 = r10.getClickType()
            if (r9 != r0) goto L162
            java.lang.String r9 = r10.getWebUrl()
            android.net.Uri r9 = android.net.Uri.parse(r9)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.<init>(r1, r9)
            java.lang.String r9 = r10.getUriPackageName()
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            if (r1 != 0) goto L160
            r0.setPackage(r9)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "set uri package "
            r1.append(r3)
            r1.append(r9)
            java.lang.String r9 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r9)
        L160:
            r9 = r0
            goto L16f
        L162:
            r9 = 3
            int r0 = r10.getClickType()
            if (r9 != r0) goto L16e
            java.lang.String r9 = "CLICK_TYPE_SELF_DEFINE_ACTION"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r9)
        L16e:
            r9 = 0
        L16f:
            if (r9 == 0) goto L18a
            com.meizu.cloud.pushsdk.handler.a.c.d$a r0 = com.meizu.cloud.pushsdk.handler.a.c.d.a()
            java.lang.String r10 = r10.getTaskId()
            com.meizu.cloud.pushsdk.handler.a.c.d$a r10 = r0.a(r10)
            com.meizu.cloud.pushsdk.handler.a.c.d r10 = r10.a()
            java.lang.String r10 = r10.b()
            java.lang.String r0 = "platform_extra"
            r9.putExtra(r0, r10)
        L18a:
            return r9
    }

    private com.meizu.cloud.pushsdk.handler.MessageV3 c(java.lang.String r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = com.meizu.cloud.pushsdk.handler.d.a(r1)
            return r1
    }

    private void e(com.meizu.cloud.pushsdk.handler.MessageV3 r4) {
            r3 = this;
            android.content.Context r0 = r3.d()
            java.lang.String r1 = r4.getPackageName()
            r2 = 0
            com.meizu.cloud.pushsdk.util.b.a(r0, r1, r2)
            android.content.Context r0 = r3.d()
            android.content.Intent r4 = r3.b(r0, r4)
            if (r4 == 0) goto L3e
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r4.addFlags(r0)
            android.content.Context r0 = r3.d()     // Catch: java.lang.Exception -> L23
            r0.startActivity(r4)     // Catch: java.lang.Exception -> L23
            goto L3e
        L23:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Click message StartActivity error "
            r0.append(r1)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r4)
        L3e:
            return
    }

    private com.meizu.cloud.pushsdk.handler.MessageV3 m(android.content.Intent r5) {
            r4 = this;
            java.lang.String r0 = "parse MessageV2 to MessageV3"
            java.lang.String r1 = "AbstractMessageHandler"
            java.lang.String r2 = "pushMessage"
            android.os.Parcelable r3 = r5.getParcelableExtra(r2)     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2a
            com.meizu.cloud.pushsdk.handler.MessageV3 r3 = (com.meizu.cloud.pushsdk.handler.MessageV3) r3     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2a
            if (r3 != 0) goto L30
        Le:
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            java.io.Serializable r0 = r5.getSerializableExtra(r2)
            com.meizu.cloud.pushsdk.notification.MPushMessage r0 = (com.meizu.cloud.pushsdk.notification.MPushMessage) r0
            java.lang.String r1 = r4.g(r5)
            java.lang.String r5 = r4.d(r5)
            java.lang.String r2 = r0.getTaskId()
            com.meizu.cloud.pushsdk.handler.MessageV3 r3 = com.meizu.cloud.pushsdk.handler.MessageV3.parse(r1, r5, r2, r0)
            goto L30
        L28:
            r3 = move-exception
            goto L31
        L2a:
            java.lang.String r3 = "cannot get messageV3"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r3)     // Catch: java.lang.Throwable -> L28
            goto Le
        L30:
            return r3
        L31:
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r0)
            java.io.Serializable r0 = r5.getSerializableExtra(r2)
            com.meizu.cloud.pushsdk.notification.MPushMessage r0 = (com.meizu.cloud.pushsdk.notification.MPushMessage) r0
            java.lang.String r1 = r4.g(r5)
            java.lang.String r5 = r4.d(r5)
            java.lang.String r2 = r0.getTaskId()
            com.meizu.cloud.pushsdk.handler.MessageV3.parse(r1, r5, r2, r0)
            throw r3
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 64
            return r0
    }

    protected void a(com.meizu.cloud.pushsdk.handler.MessageV3 r3, com.meizu.cloud.pushsdk.notification.c r4) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            r2.e(r3)
            java.lang.String r4 = r3.getTitle()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L2f
            java.lang.String r4 = r3.getContent()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L2f
            com.meizu.cloud.pushsdk.handler.a r4 = r2.c()
            if (r4 == 0) goto L2f
            com.meizu.cloud.pushsdk.handler.a r4 = r2.c()
            android.content.Context r0 = r2.d()
            com.meizu.cloud.pushsdk.handler.MzPushMessage r1 = com.meizu.cloud.pushsdk.handler.MzPushMessage.fromMessageV3(r3)
            r4.a(r0, r1)
        L2f:
            r2.b(r3)
            android.content.Context r4 = r2.a
            r2.a(r4, r3)
            return
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.handler.MessageV3 r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            r0.a(r1, r2)
            return
    }

    @Override
    public boolean a(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start NotificationClickMessageHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = r3.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L21
            java.lang.String r3 = r2.k(r3)
            java.lang.String r0 = "private"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L21
            r3 = 1
            goto L22
        L21:
            r3 = 0
        L22:
            return r3
    }

    @Override
    protected boolean a(com.meizu.cloud.pushsdk.handler.MessageV3 r1, java.lang.String r2) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            boolean r1 = r0.b(r1, r2)
            return r1
    }

    @Override
    protected void b(com.meizu.cloud.pushsdk.handler.MessageV3 r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = (com.meizu.cloud.pushsdk.handler.MessageV3) r1
            r0.d(r1)
            return
    }

    protected boolean b(com.meizu.cloud.pushsdk.handler.MessageV3 r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = r0.a(r1, r2)
            return r1
    }

    @Override
    protected com.meizu.cloud.pushsdk.handler.MessageV3 c(android.content.Intent r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.MessageV3 r1 = r0.l(r1)
            return r1
    }

    protected void d(com.meizu.cloud.pushsdk.handler.MessageV3 r7) {
            r6 = this;
            android.content.Context r0 = r6.d()
            java.lang.String r1 = r7.getUploadDataPackageName()
            java.lang.String r2 = r7.getDeviceId()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L18
            r2 = 0
            java.lang.String r2 = r6.d(r2)
            goto L1c
        L18:
            java.lang.String r2 = r7.getDeviceId()
        L1c:
            java.lang.String r3 = r7.getTaskId()
            java.lang.String r4 = r7.getSeqId()
            java.lang.String r5 = r7.getPushTimestamp()
            com.meizu.cloud.pushsdk.util.d.d(r0, r1, r2, r3, r4, r5)
            return
    }

    protected com.meizu.cloud.pushsdk.handler.MessageV3 l(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "parse message V3"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r1)
            java.lang.String r0 = "messageValue"
            java.lang.String r0 = r3.getStringExtra(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L18
            com.meizu.cloud.pushsdk.handler.MessageV3 r3 = r2.c(r0)
            return r3
        L18:
            com.meizu.cloud.pushsdk.handler.MessageV3 r3 = r2.m(r3)
            return r3
    }
}
