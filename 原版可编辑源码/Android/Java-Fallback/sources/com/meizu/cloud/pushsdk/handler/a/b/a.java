package com.meizu.cloud.pushsdk.handler.a.b;

public class a extends com.meizu.cloud.pushsdk.handler.a.a<com.meizu.cloud.pushsdk.handler.a.c.g> {
    public a(android.content.Context r1, com.meizu.cloud.pushsdk.handler.a r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public int a() {
            r1 = this;
            r0 = 65536(0x10000, float:9.1835E-41)
            return r0
    }

    protected void a(com.meizu.cloud.pushsdk.handler.a.c.g r7) {
            r6 = this;
            android.content.Context r0 = r6.d()
            android.content.Context r1 = r6.d()
            java.lang.String r1 = r1.getPackageName()
            com.meizu.cloud.pushsdk.handler.a.c.b r2 = r7.d()
            com.meizu.cloud.pushsdk.handler.a.c.f r2 = r2.b()
            java.lang.String r2 = r2.d()
            com.meizu.cloud.pushsdk.handler.a.c.b r3 = r7.d()
            com.meizu.cloud.pushsdk.handler.a.c.f r3 = r3.b()
            java.lang.String r3 = r3.a()
            com.meizu.cloud.pushsdk.handler.a.c.b r4 = r7.d()
            com.meizu.cloud.pushsdk.handler.a.c.f r4 = r4.b()
            java.lang.String r4 = r4.e()
            com.meizu.cloud.pushsdk.handler.a.c.b r7 = r7.d()
            com.meizu.cloud.pushsdk.handler.a.c.f r7 = r7.b()
            java.lang.String r5 = r7.b()
            com.meizu.cloud.pushsdk.util.d.b(r0, r1, r2, r3, r4, r5)
            return
    }

    protected void a(com.meizu.cloud.pushsdk.handler.a.c.g r8, com.meizu.cloud.pushsdk.notification.c r9) {
            r7 = this;
            java.lang.String r9 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.flush()
            com.meizu.cloud.pushsdk.handler.a.c.b r0 = r8.d()
            com.meizu.cloud.pushsdk.handler.a.c.f r0 = r0.b()
            java.lang.String r0 = r0.a()
            com.meizu.cloud.pushsdk.handler.a.c.b r1 = r8.d()
            com.meizu.cloud.pushsdk.handler.a.c.f r1 = r1.b()
            java.lang.String r1 = r1.d()
            int r2 = android.os.Build.VERSION.SDK_INT
            java.lang.String r3 = ".zip"
            java.lang.String r4 = "_"
            r5 = 29
            if (r2 < r5) goto L4d
            android.content.Context r2 = r7.d()
            java.lang.String r2 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getDocumentsPath(r2)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r2)
            java.lang.String r2 = "/pushSdktmp/"
            r5.append(r2)
            r5.append(r0)
            r5.append(r4)
            r5.append(r1)
            r5.append(r3)
            java.lang.String r0 = r5.toString()
            goto L72
        L4d:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.io.File r5 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r5 = r5.getAbsolutePath()
            r2.append(r5)
            java.lang.String r5 = "/Android/data/pushSdktmp/"
            r2.append(r5)
            r2.append(r0)
            r2.append(r4)
            r2.append(r1)
            r2.append(r3)
            java.lang.String r0 = r2.toString()
        L72:
            com.meizu.cloud.pushsdk.handler.a.b.b r1 = new com.meizu.cloud.pushsdk.handler.a.b.b
            r1.<init>(r0)
            r2 = 0
            java.util.List r3 = r8.c()     // Catch: java.lang.Exception -> L87
            r1.a(r3)     // Catch: java.lang.Exception -> L87
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L87
            r1.<init>(r0)     // Catch: java.lang.Exception -> L87
            r0 = r2
            r2 = r1
            goto La0
        L87:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "zip error message "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r9, r1)
        La0:
            if (r2 == 0) goto Lb5
            long r3 = r2.length()
            r5 = 1024(0x400, double:5.06E-321)
            long r3 = r3 / r5
            int r1 = r8.a()
            long r5 = (long) r1
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 <= 0) goto Lb5
            java.lang.String r0 = "the upload file exceeds the max size"
            goto Lc7
        Lb5:
            boolean r1 = r8.b()
            if (r1 == 0) goto Lc7
            android.content.Context r1 = r7.d()
            boolean r1 = com.meizu.cloud.pushsdk.util.a.b(r1)
            if (r1 != 0) goto Lc7
            java.lang.String r0 = "current network not allowed upload log file"
        Lc7:
            android.content.Context r1 = r7.d()
            com.meizu.cloud.pushsdk.platform.a.b r1 = com.meizu.cloud.pushsdk.platform.a.b.a(r1)
            com.meizu.cloud.pushsdk.handler.a.c.b r3 = r8.d()
            com.meizu.cloud.pushsdk.handler.a.c.f r3 = r3.b()
            java.lang.String r3 = r3.a()
            com.meizu.cloud.pushsdk.handler.a.c.b r8 = r8.d()
            com.meizu.cloud.pushsdk.handler.a.c.f r8 = r8.b()
            java.lang.String r8 = r8.d()
            com.meizu.cloud.pushsdk.c.a.c r8 = r1.a(r3, r8, r0, r2)
            if (r8 == 0) goto L113
            boolean r0 = r8.b()
            if (r0 == 0) goto L113
            if (r2 == 0) goto Lf8
            r2.delete()
        Lf8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "upload success "
            r0.append(r1)
            java.lang.Object r8 = r8.a()
            java.lang.String r8 = (java.lang.String) r8
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r9, r8)
            goto L139
        L113:
            if (r8 == 0) goto L134
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "upload error code "
            r0.append(r1)
            com.meizu.cloud.pushsdk.c.b.a r1 = r8.c()
            r0.append(r1)
            java.lang.Object r8 = r8.a()
            java.lang.String r8 = (java.lang.String) r8
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            goto L136
        L134:
            java.lang.String r8 = "upload error"
        L136:
            com.meizu.cloud.pushinternal.DebugLogger.i(r9, r8)
        L139:
            return
    }

    @Override
    protected void a(com.meizu.cloud.pushsdk.handler.a.c.g r1, com.meizu.cloud.pushsdk.notification.c r2) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.a.c.g r1 = (com.meizu.cloud.pushsdk.handler.a.c.g) r1
            r0.a(r1, r2)
            return
    }

    @Override
    public boolean a(android.content.Intent r4) {
            r3 = this;
            java.lang.String r0 = "AbstractMessageHandler"
            java.lang.String r1 = "start LogUploadMessageHandler match"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            java.lang.String r0 = "mz_push_control_message"
            java.lang.String r0 = r4.getStringExtra(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L27
            com.meizu.cloud.pushsdk.handler.a.c.b r0 = com.meizu.cloud.pushsdk.handler.a.c.b.a(r0)
            com.meizu.cloud.pushsdk.handler.a.c.a r1 = r0.a()
            if (r1 == 0) goto L27
            com.meizu.cloud.pushsdk.handler.a.c.a r0 = r0.a()
            int r0 = r0.a()
            goto L28
        L27:
            r0 = r2
        L28:
            java.lang.String r4 = r4.getAction()
            java.lang.String r1 = "com.meizu.flyme.push.intent.MESSAGE"
            boolean r4 = r1.equals(r4)
            if (r4 == 0) goto L41
            java.lang.String r4 = java.lang.String.valueOf(r0)
            java.lang.String r0 = "2"
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L41
            r2 = 1
        L41:
            return r2
    }

    @Override
    protected void b(com.meizu.cloud.pushsdk.handler.a.c.g r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.a.c.g r1 = (com.meizu.cloud.pushsdk.handler.a.c.g) r1
            r0.a(r1)
            return
    }

    @Override
    protected com.meizu.cloud.pushsdk.handler.a.c.g c(android.content.Intent r1) {
            r0 = this;
            com.meizu.cloud.pushsdk.handler.a.c.g r1 = r0.l(r1)
            return r1
    }

    protected com.meizu.cloud.pushsdk.handler.a.c.g l(android.content.Intent r5) {
            r4 = this;
            java.lang.String r0 = "mz_push_control_message"
            java.lang.String r0 = r5.getStringExtra(r0)
            java.lang.String r1 = "extra_app_push_seq_Id"
            java.lang.String r1 = r5.getStringExtra(r1)
            java.lang.String r2 = "statistics_imei_key"
            java.lang.String r2 = r5.getStringExtra(r2)
            java.lang.String r3 = "pushMessage"
            java.lang.String r5 = r5.getStringExtra(r3)
            com.meizu.cloud.pushsdk.handler.a.c.g r3 = new com.meizu.cloud.pushsdk.handler.a.c.g
            r3.<init>(r5, r0, r2, r1)
            return r3
    }
}
