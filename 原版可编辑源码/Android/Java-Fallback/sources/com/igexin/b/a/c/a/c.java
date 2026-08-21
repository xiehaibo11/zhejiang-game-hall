package com.igexin.b.a.c.a;

public class c extends android.os.Handler implements android.content.ServiceConnection {
    private final java.lang.String a;
    private android.os.Messenger b;
    private android.os.Messenger c;
    private com.igexin.b.a.c.a.b d;

    private c() {
            r1 = this;
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r1.<init>(r0)
            java.lang.String r0 = "LOG-LogController"
            r1.a = r0
            com.igexin.b.a.c.a.a r0 = new com.igexin.b.a.c.a.a
            r0.<init>()
            r1.d = r0
            return
    }

    c(com.igexin.b.a.c.a.d r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.b.a.c.a.c a() {
            com.igexin.b.a.c.a.c r0 = com.igexin.b.a.c.a.e.a()
            return r0
    }

    private void a(android.content.Context r3) {
            r2 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "try to bind log server"
            com.igexin.b.a.c.b.a(r1, r0)
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L1f
            com.igexin.push.core.x r1 = com.igexin.push.core.x.a()     // Catch: java.lang.Exception -> L1f
            java.lang.Class r1 = r1.c(r3)     // Catch: java.lang.Exception -> L1f
            r0.<init>(r3, r1)     // Catch: java.lang.Exception -> L1f
            java.lang.String r1 = "SERVER_LOG"
            r0.setType(r1)     // Catch: java.lang.Exception -> L1f
            r1 = 1
            r3.bindService(r0, r2, r1)     // Catch: java.lang.Exception -> L1f
            goto L3a
        L1f:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "bind service error = "
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "LOG-LogController"
            android.util.Log.e(r0, r3)
        L3a:
            return
    }

    public void a(android.content.Context r2, com.igexin.sdk.IUserLoggerInterface r3) {
            r1 = this;
            if (r3 != 0) goto La
            java.lang.String r2 = "LOG-LogController"
            java.lang.String r3 = "register parameter can not be null!"
            android.util.Log.i(r2, r3)
            return
        La:
            android.content.Context r2 = r2.getApplicationContext()
            r1.a(r2)
            com.igexin.b.a.c.a.b r0 = r1.d
            r0.a(r3)
            com.igexin.b.a.c.a.b r3 = r1.d
            r3.a()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "[LOG-LogController] Sdk version = "
            r3.append(r0)
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            java.lang.String r2 = r0.getVersion(r2)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r1.a(r2)
            return
    }

    public void a(java.lang.String r2) {
            r1 = this;
            com.igexin.b.a.c.a.b r0 = r1.d
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public void handleMessage(android.os.Message r5) {
            r4 = this;
            int r0 = r5.what
            r1 = 2
            if (r0 != r1) goto L35
            android.os.Bundle r5 = r5.getData()
            java.lang.String r0 = "log_data"
            java.lang.String r5 = r5.getString(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L16
            return
        L16:
            java.lang.String r0 = "\n"
            boolean r1 = r5.contains(r0)
            if (r1 == 0) goto L30
            java.lang.String[] r5 = r5.split(r0)
            int r0 = r5.length
            r1 = 0
        L24:
            if (r1 >= r0) goto L35
            r2 = r5[r1]
            com.igexin.b.a.c.a.b r3 = r4.d
            r3.a(r2)
            int r1 = r1 + 1
            goto L24
        L30:
            com.igexin.b.a.c.a.b r0 = r4.d
            r0.a(r5)
        L35:
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
            r1 = this;
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.String r0 = "remote log service connected "
            com.igexin.b.a.c.b.a(r0, r2)
            android.os.Messenger r2 = new android.os.Messenger     // Catch: java.lang.Exception -> L2b
            r2.<init>(r3)     // Catch: java.lang.Exception -> L2b
            r1.c = r2     // Catch: java.lang.Exception -> L2b
            android.os.Messenger r2 = r1.b     // Catch: java.lang.Exception -> L2b
            if (r2 != 0) goto L1a
            android.os.Messenger r2 = new android.os.Messenger     // Catch: java.lang.Exception -> L2b
            r2.<init>(r1)     // Catch: java.lang.Exception -> L2b
            r1.b = r2     // Catch: java.lang.Exception -> L2b
        L1a:
            android.os.Message r2 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L2b
            android.os.Messenger r3 = r1.b     // Catch: java.lang.Exception -> L2b
            r2.replyTo = r3     // Catch: java.lang.Exception -> L2b
            r3 = 1
            r2.what = r3     // Catch: java.lang.Exception -> L2b
            android.os.Messenger r3 = r1.c     // Catch: java.lang.Exception -> L2b
            r3.send(r2)     // Catch: java.lang.Exception -> L2b
            goto L40
        L2b:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "Client sent Message to Service error = "
            r3.append(r0)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r1.a(r2)
        L40:
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r1) {
            r0 = this;
            r1 = 0
            r0.c = r1
            return
    }
}
