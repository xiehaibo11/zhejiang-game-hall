package com.igexin.push.core;

public final class r extends android.os.Handler implements android.content.ServiceConnection {
    private static volatile com.igexin.push.core.r b;
    private final java.util.concurrent.ConcurrentLinkedQueue<android.content.Intent> a;
    private final com.igexin.push.core.t c;
    private boolean d;
    private volatile android.os.Messenger e;
    private final android.os.IBinder.DeathRecipient f;

    private r() {
            r4 = this;
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r4.<init>(r0)
            com.igexin.push.core.s r0 = new com.igexin.push.core.s
            r0.<init>(r4)
            r4.f = r0
            com.igexin.push.core.t r0 = new com.igexin.push.core.t
            r0.<init>(r4)
            r4.c = r0
            java.util.concurrent.ConcurrentLinkedQueue r0 = new java.util.concurrent.ConcurrentLinkedQueue
            r0.<init>()
            r4.a = r0
            com.igexin.push.core.t r0 = r4.c
            android.os.Handler r0 = r0.a()
            r1 = 3
            r2 = 1
            r3 = 0
            android.os.Message r0 = android.os.Message.obtain(r0, r1, r2, r3)
            r0.sendToTarget()
            return
    }

    public static com.igexin.push.core.r a() {
            com.igexin.push.core.r r0 = com.igexin.push.core.r.b
            if (r0 != 0) goto L17
            java.lang.Class<com.igexin.push.core.r> r0 = com.igexin.push.core.r.class
            monitor-enter(r0)
            com.igexin.push.core.r r1 = com.igexin.push.core.r.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.igexin.push.core.r r1 = new com.igexin.push.core.r     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.igexin.push.core.r.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.igexin.push.core.r r0 = com.igexin.push.core.r.b
            return r0
    }

    static com.igexin.push.core.t a(com.igexin.push.core.r r0) {
            com.igexin.push.core.t r0 = r0.c
            return r0
    }

    static void a(com.igexin.push.core.r r0, boolean r1) {
            r0.a(r1)
            return
    }

    private void a(boolean r3) {
            r2 = this;
            if (r3 == 0) goto L17
            android.os.Messenger r3 = r2.e
            if (r3 == 0) goto L17
            r3 = 0
            android.os.Messenger r0 = r2.e     // Catch: java.lang.Throwable -> L12
            android.os.IBinder r0 = r0.getBinder()     // Catch: java.lang.Throwable -> L12
            android.os.IBinder$DeathRecipient r1 = r2.f     // Catch: java.lang.Throwable -> L12
            r0.unlinkToDeath(r1, r3)     // Catch: java.lang.Throwable -> L12
        L12:
            r2.d = r3
            r3 = 0
            r2.e = r3
        L17:
            boolean r3 = r2.d
            if (r3 != 0) goto L21
            r2.d()
            r3 = 1
            r2.d = r3
        L21:
            return
    }

    private boolean a(android.os.IBinder r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            android.os.Messenger r1 = new android.os.Messenger
            r1.<init>(r4)
            r3.e = r1
            android.os.IBinder$DeathRecipient r1 = r3.f     // Catch: java.lang.Exception -> L11
            r4.linkToDeath(r1, r0)     // Catch: java.lang.Exception -> L11
            goto L2c
        L11:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "MsgServerSender|linkToDeath to iservice ex = "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r4, r0)
        L2c:
            r4 = 1
            return r4
    }

    static boolean a(com.igexin.push.core.r r0, android.os.IBinder r1) {
            boolean r0 = r0.a(r1)
            return r0
    }

    private void b(android.content.Intent r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            android.os.Messenger r0 = r4.e
            r1 = 0
            if (r0 != 0) goto Lf
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r2 = "MsgServerSender|realSend, remoteMessenger is null"
            com.igexin.b.a.c.b.a(r2, r0)
        Lf:
            android.os.Bundle r0 = r5.getExtras()
            if (r0 == 0) goto L7c
            java.lang.String r2 = "action"
            java.lang.Object r3 = r0.get(r2)
            if (r3 == 0) goto L7c
            java.lang.Object r3 = r0.get(r2)
            boolean r3 = r3 instanceof java.lang.Integer
            if (r3 != 0) goto L26
            goto L7c
        L26:
            int r0 = r0.getInt(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "MsgServerSender|realSend action = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            android.os.Message r0 = android.os.Message.obtain()
            r2 = 1
            r0.what = r2
            r0.obj = r5
            android.os.Messenger r5 = r4.e     // Catch: java.lang.Exception -> L4f
            r5.send(r0)     // Catch: java.lang.Exception -> L4f
            goto L7c
        L4f:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "MsgServerSender|realSend iservice error = "
            r0.append(r2)
            java.lang.String r2 = r5.toString()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            boolean r5 = r5 instanceof android.os.DeadObjectException
            if (r5 == 0) goto L7c
            com.igexin.push.core.t r5 = r4.c
            android.os.Handler r5 = r5.a()
            r0 = 2
            android.os.Message r5 = android.os.Message.obtain(r5, r0, r1, r1)
            r5.sendToTarget()
        L7c:
            return
    }

    static void b(com.igexin.push.core.r r0) {
            r0.e()
            return
    }

    private void d() {
            r5 = this;
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "MsgServerSender|try to bind iservice"
            com.igexin.b.a.c.b.a(r2, r1)
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L29
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L29
            com.igexin.push.core.x r3 = com.igexin.push.core.x.a()     // Catch: java.lang.Exception -> L29
            android.content.Context r4 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L29
            java.lang.Class r3 = r3.d(r4)     // Catch: java.lang.Exception -> L29
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L29
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L29
            r1.setType(r2)     // Catch: java.lang.Exception -> L29
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L29
            r3 = 1
            r2.bindService(r1, r5, r3)     // Catch: java.lang.Exception -> L29
            goto L5e
        L29:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "bind iservice error = "
            r2.append(r3)
            java.lang.String r3 = r1.toString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "MsgServerSender"
            android.util.Log.e(r3, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "MsgServerSender|bind iservice error = "
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r0)
        L5e:
            return
    }

    private void e() {
            r1 = this;
        L0:
            java.util.concurrent.ConcurrentLinkedQueue<android.content.Intent> r0 = r1.a
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L16
            java.util.concurrent.ConcurrentLinkedQueue<android.content.Intent> r0 = r1.a
            java.lang.Object r0 = r0.poll()
            android.content.Intent r0 = (android.content.Intent) r0
            if (r0 == 0) goto L0
            r1.b(r0)
            goto L0
        L16:
            return
    }

    public void a(int r4) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            r2 = 10008(0x2718, float:1.4024E-41)
            r0.putInt(r1, r2)
            java.lang.String r1 = "pid"
            r0.putInt(r1, r4)
            r3.a(r0)
            return
    }

    public void a(android.content.Intent r2) {
            r1 = this;
            android.os.Messenger r0 = r1.e
            if (r0 == 0) goto L8
            r1.b(r2)
            goto Ld
        L8:
            java.util.concurrent.ConcurrentLinkedQueue<android.content.Intent> r0 = r1.a
            r0.add(r2)
        Ld:
            return
    }

    public void a(android.os.Bundle r2) {
            r1 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            r0.putExtras(r2)
            r1.a(r0)
            return
    }

    public void a(java.lang.String r4) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            r2 = 10013(0x271d, float:1.4031E-41)
            r0.putInt(r1, r2)
            java.lang.String r1 = "deviceToken"
            r0.putString(r1, r4)
            r3.a(r0)
            return
    }

    public void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            r2 = 10010(0x271a, float:1.4027E-41)
            r0.putInt(r1, r2)
            com.igexin.sdk.message.SetTagCmdMessage r1 = new com.igexin.sdk.message.SetTagCmdMessage
            r2 = 10009(0x2719, float:1.4026E-41)
            r1.<init>(r4, r5, r2)
            java.lang.String r4 = "cmd_msg"
            r0.putSerializable(r4, r1)
            r3.a(r0)
            return
    }

    public void a(java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            r2 = 10011(0x271b, float:1.4028E-41)
            r0.putInt(r1, r2)
            com.igexin.sdk.message.GTNotificationMessage r1 = new com.igexin.sdk.message.GTNotificationMessage
            r1.<init>(r4, r5, r6, r7)
            java.lang.String r4 = "notification_arrived"
            r0.putSerializable(r4, r1)
            r3.a(r0)
            return
    }

    public void a(java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, long r14) {
            r9 = this;
            java.lang.String r0 = com.igexin.push.core.d.a
            if (r0 == 0) goto L2c
            java.lang.String r0 = com.igexin.push.core.d.a
            boolean r10 = r0.equals(r10)
            if (r10 == 0) goto L2c
            android.os.Bundle r10 = new android.os.Bundle
            r10.<init>()
            r0 = 10010(0x271a, float:1.4027E-41)
            java.lang.String r1 = "action"
            r10.putInt(r1, r0)
            com.igexin.sdk.message.FeedbackCmdMessage r0 = new com.igexin.sdk.message.FeedbackCmdMessage
            r8 = 10006(0x2716, float:1.4021E-41)
            r2 = r0
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r2.<init>(r3, r4, r5, r6, r8)
            java.lang.String r11 = "cmd_msg"
            r10.putSerializable(r11, r0)
            r9.a(r10)
        L2c:
            return
    }

    public void a(java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, com.igexin.push.core.bean.PushTaskBean r15) {
            r10 = this;
            android.content.Context r0 = com.igexin.push.core.d.g
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "broadcastPayload"
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "MsgServerSender"
            com.igexin.b.a.c.b.a(r2, r1)
            r1 = 0
            if (r14 == 0) goto L1a
            byte[] r1 = r14.getBytes()
            goto L30
        L1a:
            com.igexin.push.core.a.e r14 = com.igexin.push.core.a.e.a()
            java.lang.String r14 = r14.a(r11, r12)
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r2 = com.igexin.push.core.d.Z
            java.lang.Object r14 = r2.get(r14)
            com.igexin.push.core.bean.PushTaskBean r14 = (com.igexin.push.core.bean.PushTaskBean) r14
            if (r14 == 0) goto L30
            byte[] r1 = r14.getMsgExtra()
        L30:
            r8 = r1
            if (r8 == 0) goto Lda
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r1 = "startapp|broadcast|payload = "
            r14.append(r1)
            java.lang.String r1 = new java.lang.String
            r1.<init>(r8)
            r14.append(r1)
            java.lang.String r14 = r14.toString()
            java.lang.Object[] r1 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r14, r1)
            android.content.Context r14 = com.igexin.push.core.d.g
            boolean r14 = com.igexin.assist.sdk.a.i(r14)
            if (r14 == 0) goto L67
            com.igexin.push.core.b.d r14 = new com.igexin.push.core.b.d
            android.content.Context r1 = com.igexin.push.core.d.g
            r14.<init>(r1)
            boolean r1 = r14.a(r11)
            if (r1 != 0) goto L68
            r14.b(r11)
            goto L68
        L67:
            r1 = r3
        L68:
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r2 = "MsgServerSender | broadcastPayload().isMsgRepeated = "
            r14.append(r2)
            r14.append(r1)
            java.lang.String r14 = r14.toString()
            java.lang.Object[] r2 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r14, r2)
            if (r15 == 0) goto L88
            boolean r14 = r15.isOfflineMessage()
            if (r14 == 0) goto L88
            r9 = r0
            goto L89
        L88:
            r9 = r3
        L89:
            java.lang.String r14 = com.igexin.push.core.d.a
            if (r14 == 0) goto Ld9
            java.lang.String r14 = com.igexin.push.core.d.a
            boolean r13 = r14.equals(r13)
            if (r13 == 0) goto Ld9
            android.os.Bundle r13 = new android.os.Bundle
            r13.<init>()
            r14 = 10001(0x2711, float:1.4014E-41)
            java.lang.String r15 = "action"
            r13.putInt(r15, r14)
            com.igexin.sdk.message.GTTransmitMessage r14 = new com.igexin.sdk.message.GTTransmitMessage
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            java.lang.String r0 = "GT_"
            r15.append(r0)
            r15.append(r12)
            java.lang.String r6 = r15.toString()
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            r15.append(r12)
            java.lang.String r12 = ":"
            r15.append(r12)
            r15.append(r11)
            java.lang.String r7 = r15.toString()
            r4 = r14
            r5 = r11
            r4.<init>(r5, r6, r7, r8, r9)
            com.igexin.sdk.message.GTTransmitMessage r11 = r14.setRepeatMessage(r1)
            java.lang.String r12 = "transmit_data"
            r13.putSerializable(r12, r11)
            r10.a(r13)
        Ld9:
            return
        Lda:
            java.lang.Object[] r11 = new java.lang.Object[r3]
            java.lang.String r12 = "startapp|broadcast|payload is empty!"
            com.igexin.b.a.c.b.a(r12, r11)
            return
    }

    public void b() {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            r2 = 10007(0x2717, float:1.4023E-41)
            r0.putInt(r1, r2)
            boolean r1 = com.igexin.push.core.d.n
            java.lang.String r2 = "onlineState"
            r0.putBoolean(r2, r1)
            r3.a(r0)
            return
    }

    public void b(java.lang.String r4) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            r2 = 10016(0x2720, float:1.4035E-41)
            r0.putInt(r1, r2)
            java.lang.String r1 = "revocation_taskId"
            r0.putSerializable(r1, r4)
            com.igexin.push.core.r r4 = a()
            r4.a(r0)
            return
    }

    public void b(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r1 = 10010(0x271a, float:1.4027E-41)
            java.lang.String r2 = "action"
            r0.putInt(r2, r1)
            com.igexin.sdk.message.BindAliasCmdMessage r2 = new com.igexin.sdk.message.BindAliasCmdMessage
            r2.<init>(r4, r5, r1)
            java.lang.String r4 = "cmd_msg"
            r0.putSerializable(r4, r2)
            r3.a(r0)
            return
    }

    public void b(java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            r2 = 10012(0x271c, float:1.403E-41)
            r0.putInt(r1, r2)
            com.igexin.sdk.message.GTNotificationMessage r1 = new com.igexin.sdk.message.GTNotificationMessage
            r1.<init>(r4, r5, r6, r7)
            java.lang.String r4 = "notification_clicked"
            r0.putSerializable(r4, r1)
            r3.a(r0)
            return
    }

    public void c() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clientid is "
            r0.append(r1)
            java.lang.String r1 = com.igexin.push.core.d.u
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushService"
            android.util.Log.d(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "broadcastClientId|"
            r0.append(r1)
            java.lang.String r1 = com.igexin.push.core.d.u
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            r2 = 10002(0x2712, float:1.4016E-41)
            r0.putInt(r1, r2)
            java.lang.String r1 = com.igexin.push.core.d.u
            java.lang.String r2 = "clientid"
            r0.putString(r2, r1)
            r3.a(r0)
            return
    }

    public void c(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "action"
            r2 = 10010(0x271a, float:1.4027E-41)
            r0.putInt(r1, r2)
            com.igexin.sdk.message.UnBindAliasCmdMessage r1 = new com.igexin.sdk.message.UnBindAliasCmdMessage
            r2 = 10011(0x271b, float:1.4028E-41)
            r1.<init>(r4, r5, r2)
            java.lang.String r4 = "cmd_msg"
            r0.putSerializable(r4, r1)
            r3.a(r0)
            return
    }

    @Override
    public void handleMessage(android.os.Message r2) {
            r1 = this;
            int r0 = r2.what
            super.handleMessage(r2)
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
            r1 = this;
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.String r0 = "MsgServerSender|remote iservice connected "
            com.igexin.b.a.c.b.a(r0, r2)
            com.igexin.push.core.t r2 = r1.c
            android.os.Handler r2 = r2.a()
            r0 = 1
            android.os.Message r2 = android.os.Message.obtain(r2, r0, r3)
            r2.sendToTarget()
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r3) {
            r2 = this;
            r3 = 0
            java.lang.Object[] r0 = new java.lang.Object[r3]
            java.lang.String r1 = "MsgServerSender|remote iservice disConnected ~~~"
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.push.core.t r0 = r2.c
            android.os.Handler r0 = r0.a()
            r1 = 2
            android.os.Message r3 = android.os.Message.obtain(r0, r1, r3, r3)
            r3.sendToTarget()
            return
    }
}
