package com.vivo.push.sdk;

public final class a extends com.vivo.push.q {
    private static com.vivo.push.sdk.a c;
    private static final java.util.List<java.lang.Integer> e = null;
    private java.lang.String d;
    private java.lang.String f;

    static {
            r0 = 1
            java.lang.Integer[] r0 = new java.lang.Integer[r0]
            r1 = 3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            java.util.List r0 = java.util.Arrays.asList(r0)
            com.vivo.push.sdk.a.e = r0
            return
    }

    private a() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.f = r0
            return
    }

    public static synchronized com.vivo.push.sdk.a a() {
            java.lang.Class<com.vivo.push.sdk.a> r0 = com.vivo.push.sdk.a.class
            monitor-enter(r0)
            com.vivo.push.sdk.a r1 = com.vivo.push.sdk.a.c     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.vivo.push.sdk.a r1 = new com.vivo.push.sdk.a     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.vivo.push.sdk.a.c = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.vivo.push.sdk.a r1 = com.vivo.push.sdk.a.c     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static java.lang.String a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 != 0) goto L50
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Le
            goto L50
        Le:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r4)
            r0.setPackage(r3)
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L38
            if (r2 != 0) goto L1d
            return r1
        L1d:
            r3 = 64
            java.util.List r2 = r2.queryBroadcastReceivers(r0, r3)     // Catch: java.lang.Exception -> L38
            if (r2 == 0) goto L50
            int r3 = r2.size()     // Catch: java.lang.Exception -> L38
            if (r3 <= 0) goto L50
            r3 = 0
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Exception -> L38
            android.content.pm.ResolveInfo r2 = (android.content.pm.ResolveInfo) r2     // Catch: java.lang.Exception -> L38
            android.content.pm.ActivityInfo r2 = r2.activityInfo     // Catch: java.lang.Exception -> L38
            java.lang.String r2 = r2.name     // Catch: java.lang.Exception -> L38
            r1 = r2
            goto L50
        L38:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "error  "
            r3.<init>(r4)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "CommandWorker"
            com.vivo.push.util.p.a(r3, r2)
        L50:
            return r1
    }

    private boolean b(android.content.Intent r5) {
            r4 = this;
            java.lang.String r0 = "security_avoid_pull"
            java.lang.String r5 = r5.getStringExtra(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = "CommandWorker"
            if (r0 != 0) goto L46
            r0 = 0
            android.content.Context r2 = r4.a     // Catch: java.lang.Exception -> L2f
            com.vivo.push.util.a r2 = com.vivo.push.util.a.a(r2)     // Catch: java.lang.Exception -> L2f
            java.lang.String r5 = r2.b(r5)     // Catch: java.lang.Exception -> L2f
            java.lang.String r2 = "com.vivo.pushservice"
            boolean r2 = r2.equals(r5)     // Catch: java.lang.Exception -> L2f
            if (r2 != 0) goto L4b
            java.lang.String r2 = "!decrypt.equals, so decrypt == "
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> L2f
            java.lang.String r5 = r2.concat(r5)     // Catch: java.lang.Exception -> L2f
            com.vivo.push.util.p.a(r1, r5)     // Catch: java.lang.Exception -> L2f
            return r0
        L2f:
            r5 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "checkIntentIsSecurity Exception: "
            r2.<init>(r3)
            java.lang.String r5 = r5.getMessage()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            com.vivo.push.util.p.a(r1, r5)
            return r0
        L46:
            java.lang.String r5 = "checkIntentIsSecurityTextUtils.isEmpty"
            com.vivo.push.util.p.a(r1, r5)
        L4b:
            r5 = 1
            return r5
    }

    private boolean c(android.content.Intent r8) {
            r7 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 18
            if (r0 >= r2) goto L8
            return r1
        L8:
            android.content.Context r0 = r7.a
            java.lang.String r2 = "com.vivo.pushservice"
            java.lang.String r0 = com.vivo.push.util.z.c(r0, r2)
            java.lang.String r3 = java.lang.String.valueOf(r0)
            java.lang.String r4 = " 配置的验签参数 = "
            java.lang.String r3 = r4.concat(r3)
            java.lang.String r4 = "CommandWorker"
            com.vivo.push.util.p.d(r4, r3)
            java.lang.String r3 = "1"
            boolean r0 = android.text.TextUtils.equals(r0, r3)
            if (r0 != 0) goto L28
            return r1
        L28:
            java.lang.String r0 = "security_avoid_pull_rsa"
            java.lang.String r0 = r8.getStringExtra(r0)
            java.lang.String r3 = "security_avoid_rsa_public_key"
            java.lang.String r8 = r8.getStringExtra(r3)
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            r5 = 0
            if (r3 != 0) goto L83
            boolean r3 = android.text.TextUtils.isEmpty(r8)
            if (r3 == 0) goto L42
            goto L83
        L42:
            android.content.Context r3 = r7.a     // Catch: java.lang.Exception -> L67
            com.vivo.push.c.d r3 = com.vivo.push.c.d.a(r3)     // Catch: java.lang.Exception -> L67
            com.vivo.push.c.b r3 = r3.a()     // Catch: java.lang.Exception -> L67
            java.lang.String r6 = "UTF-8"
            byte[] r2 = r2.getBytes(r6)     // Catch: java.lang.Exception -> L67
            java.security.PublicKey r8 = com.vivo.push.util.u.a(r8)     // Catch: java.lang.Exception -> L67
            r6 = 2
            byte[] r0 = android.util.Base64.decode(r0, r6)     // Catch: java.lang.Exception -> L67
            boolean r8 = r3.a(r2, r8, r0)     // Catch: java.lang.Exception -> L67
            if (r8 == 0) goto L7d
            java.lang.String r8 = " RSA验签通过  "
            com.vivo.push.util.p.d(r4, r8)     // Catch: java.lang.Exception -> L67
            return r1
        L67:
            r8 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "checkIntentIsSecurity Exception: "
            r0.<init>(r1)
            java.lang.String r8 = r8.getMessage()
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            com.vivo.push.util.p.a(r4, r8)
        L7d:
            java.lang.String r8 = " RSA验签 不通过  "
            com.vivo.push.util.p.d(r4, r8)
            return r5
        L83:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r1 = "!decrypt.equals, so securityContent == "
            r8.<init>(r1)
            r8.append(r0)
            java.lang.String r0 = " or publickKey isempty "
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            com.vivo.push.util.p.a(r4, r8)
            return r5
    }

    private int d(android.content.Intent r7) {
            r6 = this;
            java.lang.String r0 = r6.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 2151(0x867, float:3.014E-42)
            r2 = 0
            java.lang.String r3 = "CommandWorker"
            if (r0 != 0) goto L30
            java.lang.String r0 = r6.f
            java.lang.String r4 = "CommandService"
            boolean r0 = r0.contains(r4)
            if (r0 == 0) goto L30
            if (r7 == 0) goto L27
            boolean r0 = r6.b(r7)
            if (r0 == 0) goto L27
            boolean r0 = r6.c(r7)
            if (r0 == 0) goto L27
            r0 = 1
            goto L28
        L27:
            r0 = r2
        L28:
            if (r0 != 0) goto L30
            java.lang.String r7 = " !checkIntentIsSecurity(intent)"
            com.vivo.push.util.p.a(r3, r7)
            return r1
        L30:
            android.content.Context r0 = r6.a
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r4 = "command_type"
            java.lang.String r4 = r7.getStringExtra(r4)     // Catch: java.lang.Exception -> Lca
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lca
            if (r5 != 0) goto Lbc
            java.lang.String r5 = "reflect_receiver"
            boolean r5 = r4.equals(r5)     // Catch: java.lang.Exception -> Lca
            if (r5 != 0) goto L4b
            goto Lbc
        L4b:
            java.lang.String r1 = "command"
            r4 = -1
            int r1 = r7.getIntExtra(r1, r4)     // Catch: java.lang.Exception -> Lca
            if (r1 >= 0) goto L5a
            java.lang.String r1 = "method"
            int r1 = r7.getIntExtra(r1, r4)     // Catch: java.lang.Exception -> Lca
        L5a:
            java.util.List<java.lang.Integer> r4 = com.vivo.push.sdk.a.e     // Catch: java.lang.Exception -> Lca
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> Lca
            boolean r1 = r4.contains(r1)     // Catch: java.lang.Exception -> Lca
            if (r1 == 0) goto L7e
            android.content.Context r1 = r6.a     // Catch: java.lang.Exception -> Lca
            boolean r1 = com.vivo.push.util.t.c(r1, r0)     // Catch: java.lang.Exception -> Lca
            if (r1 == 0) goto L7e
            android.content.Context r1 = r6.a     // Catch: java.lang.Exception -> Lca
            boolean r1 = com.vivo.push.util.t.c(r1)     // Catch: java.lang.Exception -> Lca
            if (r1 != 0) goto L7e
            java.lang.String r7 = "METHOD_ON_MESSAGE is not support"
            com.vivo.push.util.p.a(r3, r7)     // Catch: java.lang.Exception -> Lca
            r7 = 2153(0x869, float:3.017E-42)
            return r7
        L7e:
            java.lang.String r1 = r7.getAction()     // Catch: java.lang.Exception -> Lca
            java.lang.String r4 = r6.d     // Catch: java.lang.Exception -> Lca
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lca
            if (r4 == 0) goto Lce
            android.content.Context r4 = r6.a     // Catch: java.lang.Exception -> Lca
            java.lang.String r4 = a(r4, r0, r1)     // Catch: java.lang.Exception -> Lca
            r6.d = r4     // Catch: java.lang.Exception -> Lca
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lca
            if (r4 == 0) goto Lce
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lca
            java.lang.String r5 = " reflectReceiver error: receiver for: "
            r4.<init>(r5)     // Catch: java.lang.Exception -> Lca
            r4.append(r1)     // Catch: java.lang.Exception -> Lca
            java.lang.String r1 = " not found, package: "
            r4.append(r1)     // Catch: java.lang.Exception -> Lca
            r4.append(r0)     // Catch: java.lang.Exception -> Lca
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Exception -> Lca
            com.vivo.push.util.p.d(r3, r1)     // Catch: java.lang.Exception -> Lca
            r7.setPackage(r0)     // Catch: java.lang.Exception -> Lca
            android.content.Context r0 = r6.a     // Catch: java.lang.Exception -> Lca
            r0.sendBroadcast(r7)     // Catch: java.lang.Exception -> Lca
            r7 = 2152(0x868, float:3.016E-42)
            return r7
        Lbc:
            java.lang.String r7 = "commandTypeStr is not satisfy == "
            java.lang.String r0 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> Lca
            java.lang.String r7 = r7.concat(r0)     // Catch: java.lang.Exception -> Lca
            com.vivo.push.util.p.a(r3, r7)     // Catch: java.lang.Exception -> Lca
            return r1
        Lca:
            r7 = move-exception
            com.vivo.push.util.p.a(r3, r7)
        Lce:
            return r2
    }

    public final void a(android.content.Intent r3) {
            r2 = this;
            if (r3 == 0) goto L11
            android.content.Context r0 = r2.a
            if (r0 != 0) goto L7
            goto L11
        L7:
            android.os.Message r0 = android.os.Message.obtain()
            r0.obj = r3
            r2.a(r0)
            return
        L11:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = " sendMessage error: intent : "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = ", mContext: "
            r0.append(r3)
            android.content.Context r3 = r2.a
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "CommandWorker"
            com.vivo.push.util.p.d(r0, r3)
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final void b() {
            r1 = this;
            r0 = 0
            r1.d = r0
            return
    }

    @Override
    public final void b(android.os.Message r10) {
            r9 = this;
            java.lang.Object r10 = r10.obj
            android.content.Intent r10 = (android.content.Intent) r10
            java.lang.String r0 = "CommandWorker"
            if (r10 == 0) goto La2
            android.content.Context r1 = r9.a
            if (r1 != 0) goto Le
            goto La2
        Le:
            android.content.Context r1 = r9.a
            java.lang.String r1 = r1.getPackageName()
            int r2 = r9.d(r10)
            if (r2 <= 0) goto L5d
            com.vivo.push.b.x r0 = new com.vivo.push.b.x
            long r2 = (long) r2
            r0.<init>(r2)
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            if (r10 == 0) goto L41
            android.os.Bundle r10 = r10.getExtras()
            r3 = 404000044642424832(0x59b4be66e275800, double:1.1748185374477654E-281)
            if (r10 == 0) goto L38
            java.lang.String r5 = "notify_id"
            long r3 = r10.getLong(r5, r3)
        L38:
            java.lang.String r10 = java.lang.String.valueOf(r3)
            java.lang.String r3 = "messageID"
            r2.put(r3, r10)
        L41:
            android.content.Context r10 = r9.a
            java.lang.String r10 = com.vivo.push.util.z.b(r10, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r10)
            if (r1 != 0) goto L52
            java.lang.String r1 = "remoteAppId"
            r2.put(r1, r10)
        L52:
            r0.a(r2)
            com.vivo.push.e r10 = com.vivo.push.e.a()
            r10.a(r0)
            return
        L5d:
            java.lang.String r2 = r9.d     // Catch: java.lang.Exception -> L9b
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L9b
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L9b
            java.lang.reflect.Constructor r4 = r2.getConstructor(r4)     // Catch: java.lang.Exception -> L9b
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L9b
            java.lang.Object r4 = r4.newInstance(r5)     // Catch: java.lang.Exception -> L9b
            r5 = 2
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> L9b
            java.lang.Class<android.content.Context> r7 = android.content.Context.class
            r6[r3] = r7     // Catch: java.lang.Exception -> L9b
            java.lang.Class<android.content.Intent> r7 = android.content.Intent.class
            r8 = 1
            r6[r8] = r7     // Catch: java.lang.Exception -> L9b
            java.lang.String r7 = "onReceive"
            java.lang.reflect.Method r2 = r2.getMethod(r7, r6)     // Catch: java.lang.Exception -> L9b
            java.lang.String r6 = r9.d     // Catch: java.lang.Exception -> L9b
            r10.setClassName(r1, r6)     // Catch: java.lang.Exception -> L9b
            java.lang.Object[] r1 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L9b
            android.content.Context r5 = r9.a     // Catch: java.lang.Exception -> L9b
            android.content.Context r5 = com.vivo.push.util.ContextDelegate.getContext(r5)     // Catch: java.lang.Exception -> L9b
            android.content.Context r5 = r5.getApplicationContext()     // Catch: java.lang.Exception -> L9b
            r1[r3] = r5     // Catch: java.lang.Exception -> L9b
            r1[r8] = r10     // Catch: java.lang.Exception -> L9b
            r2.invoke(r4, r1)     // Catch: java.lang.Exception -> L9b
            return
        L9b:
            r10 = move-exception
            java.lang.String r1 = "reflect e: "
            com.vivo.push.util.p.b(r0, r1, r10)
            return
        La2:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = " handleMessage error: intent : "
            r1.<init>(r2)
            r1.append(r10)
            java.lang.String r10 = ", mContext: "
            r1.append(r10)
            android.content.Context r10 = r9.a
            r1.append(r10)
            java.lang.String r10 = r1.toString()
            com.vivo.push.util.p.d(r0, r10)
            return
    }
}
