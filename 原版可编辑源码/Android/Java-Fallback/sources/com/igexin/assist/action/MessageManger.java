package com.igexin.assist.action;

public class MessageManger {
    private java.util.concurrent.ExecutorService a;
    private java.lang.String b;

    private MessageManger() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r1.a = r0
            return
    }

    MessageManger(com.igexin.assist.action.a r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private com.igexin.push.core.bean.PushTaskBean a(com.igexin.assist.action.d r5) {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            com.igexin.push.core.bean.PushTaskBean r2 = new com.igexin.push.core.bean.PushTaskBean
            r2.<init>()
            java.lang.String r3 = r5.d()
            r2.setAppid(r3)
            java.lang.String r3 = r5.c()
            r2.setMessageId(r3)
            java.lang.String r5 = r5.b()
            r2.setTaskId(r5)
            java.lang.String r5 = java.lang.String.valueOf(r0)
            r2.setId(r5)
            java.lang.String r5 = com.igexin.push.core.d.b
            r2.setAppKey(r5)
            r5 = 1
            r2.setCurrentActionid(r5)
            return r2
    }

    private void a(android.content.Context r4, com.igexin.assist.action.d r5) {
            r3 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = com.igexin.push.core.d.h
            boolean r0 = r0.get()
            if (r0 != 0) goto Lb
            com.igexin.assist.util.AssistUtils.startGetuiService(r4)
        Lb:
            if (r5 != 0) goto Le
            return
        Le:
            android.os.Message r4 = android.os.Message.obtain()
            int r0 = com.igexin.push.core.CoreConsts.j
            r4.what = r0
            java.lang.String r0 = r5.f()
            r4.obj = r0
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = r5.f()
            java.lang.String r2 = "content"
            r0.putString(r2, r1)
            byte[] r1 = r5.a()
            if (r1 == 0) goto L39
            byte[] r5 = r5.a()
            java.lang.String r1 = "payload"
            r0.putByteArray(r1, r5)
        L39:
            r4.setData(r0)
            com.igexin.push.core.c r5 = com.igexin.push.core.c.a()
            r5.a(r4)
            return
    }

    private void a(android.content.Context r2, java.lang.String r3, boolean r4) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            com.igexin.push.core.b.d r0 = new com.igexin.push.core.b.d
            r0.<init>(r2)
            r0.c(r3)
            java.util.concurrent.atomic.AtomicBoolean r2 = com.igexin.push.core.d.h
            boolean r2 = r2.get()
            if (r2 == 0) goto L1b
            r1.a(r3, r4)
            goto L2e
        L1b:
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r0)
            com.igexin.assist.action.a r0 = new com.igexin.assist.action.a
            r0.<init>(r1, r3, r4)
            r3 = 1000(0x3e8, double:4.94E-321)
            r2.postDelayed(r0, r3)
        L2e:
            return
    }

    static void a(com.igexin.assist.action.MessageManger r0, android.content.Context r1, com.igexin.assist.action.d r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.igexin.assist.action.MessageManger r0, android.content.Context r1, java.lang.String r2, boolean r3) {
            r0.a(r1, r2, r3)
            return
    }

    static void a(com.igexin.assist.action.MessageManger r0, com.igexin.assist.action.d r1, android.content.Context r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.igexin.assist.action.MessageManger r0, java.lang.String r1, boolean r2) {
            r0.a(r1, r2)
            return
    }

    private void a(com.igexin.assist.action.d r12, android.content.Context r13) {
            r11 = this;
            if (r12 == 0) goto L83
            if (r13 != 0) goto L6
            goto L83
        L6:
            com.igexin.push.core.b.d r0 = new com.igexin.push.core.b.d     // Catch: java.lang.Throwable -> L83
            r0.<init>(r13)     // Catch: java.lang.Throwable -> L83
            java.lang.String r1 = r12.b()     // Catch: java.lang.Throwable -> L83
            boolean r1 = r0.a(r1)     // Catch: java.lang.Throwable -> L83
            if (r1 == 0) goto L18
            java.lang.String r0 = "1"
            goto L22
        L18:
            java.lang.String r2 = "0"
            java.lang.String r3 = r12.b()     // Catch: java.lang.Throwable -> L83
            r0.b(r3)     // Catch: java.lang.Throwable -> L83
            r0 = r2
        L22:
            android.os.Bundle r2 = new android.os.Bundle     // Catch: java.lang.Throwable -> L83
            r2.<init>()     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = "action"
            r4 = 10001(0x2711, float:1.4014E-41)
            r2.putInt(r3, r4)     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = "transmit_data"
            com.igexin.sdk.message.GTTransmitMessage r10 = new com.igexin.sdk.message.GTTransmitMessage     // Catch: java.lang.Throwable -> L83
            java.lang.String r5 = r12.b()     // Catch: java.lang.Throwable -> L83
            java.lang.String r6 = r12.c()     // Catch: java.lang.Throwable -> L83
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83
            r4.<init>()     // Catch: java.lang.Throwable -> L83
            java.lang.String r7 = r12.c()     // Catch: java.lang.Throwable -> L83
            r4.append(r7)     // Catch: java.lang.Throwable -> L83
            java.lang.String r7 = ":"
            r4.append(r7)     // Catch: java.lang.Throwable -> L83
            java.lang.String r7 = r12.b()     // Catch: java.lang.Throwable -> L83
            r4.append(r7)     // Catch: java.lang.Throwable -> L83
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Throwable -> L83
            byte[] r8 = r12.a()     // Catch: java.lang.Throwable -> L83
            r9 = 0
            r4 = r10
            r4.<init>(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L83
            com.igexin.sdk.message.GTTransmitMessage r1 = r10.setRepeatMessage(r1)     // Catch: java.lang.Throwable -> L83
            r2.putSerializable(r3, r1)     // Catch: java.lang.Throwable -> L83
            com.igexin.push.core.r r1 = com.igexin.push.core.r.a()     // Catch: java.lang.Throwable -> L83
            r1.a(r2)     // Catch: java.lang.Throwable -> L83
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83
            r1.<init>()     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = r11.getBrandCode(r13)     // Catch: java.lang.Throwable -> L83
            r1.append(r2)     // Catch: java.lang.Throwable -> L83
            r1.append(r0)     // Catch: java.lang.Throwable -> L83
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L83
            r11.feedbackPushMessage(r13, r12, r0)     // Catch: java.lang.Throwable -> L83
        L83:
            return
    }

    private void a(java.lang.String r2) {
            r1 = this;
            com.igexin.push.core.r r0 = com.igexin.push.core.r.a()     // Catch: java.lang.Exception -> L7
            r0.a(r2)     // Catch: java.lang.Exception -> L7
        L7:
            return
    }

    private void a(java.lang.String r3, boolean r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "other token = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Assist_MessageManger"
            android.util.Log.e(r1, r0)
            r2.a(r3)
            if (r4 != 0) goto L23
            java.lang.String r0 = com.igexin.push.core.d.B     // Catch: java.lang.Exception -> L41
            boolean r0 = r3.equals(r0)     // Catch: java.lang.Exception -> L41
            if (r0 != 0) goto L41
        L23:
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Exception -> L41
            r0.c(r3)     // Catch: java.lang.Exception -> L41
            boolean r3 = com.igexin.push.core.d.n     // Catch: java.lang.Exception -> L41
            if (r3 == 0) goto L36
            com.igexin.push.core.a.e r3 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> L41
            r3.f()     // Catch: java.lang.Exception -> L41
            goto L41
        L36:
            if (r4 == 0) goto L41
            com.igexin.push.core.b.i r3 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Exception -> L41
            java.lang.String r4 = ""
            r3.d(r4)     // Catch: java.lang.Exception -> L41
        L41:
            return
    }

    public static com.igexin.assist.action.MessageManger getInstance() {
            com.igexin.assist.action.MessageManger r0 = com.igexin.assist.action.c.a()
            return r0
    }

    public void addMessage(com.igexin.assist.MessageBean r3) {
            r2 = this;
            java.util.concurrent.ExecutorService r0 = r2.a
            if (r0 == 0) goto Lc
            com.igexin.assist.action.b r1 = new com.igexin.assist.action.b
            r1.<init>(r2, r3)
            r0.execute(r1)
        Lc:
            return
    }

    public void feedbackPushMessage(android.content.Context r5, com.igexin.assist.action.d r6, java.lang.String r7) {
            r4 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = com.igexin.push.core.d.h     // Catch: java.lang.Throwable -> L56
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L56
            if (r0 == 0) goto L14
            com.igexin.push.core.a.e r5 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> L56
            com.igexin.push.core.bean.PushTaskBean r6 = r4.a(r6)     // Catch: java.lang.Throwable -> L56
            r5.a(r6, r7)     // Catch: java.lang.Throwable -> L56
            goto L56
        L14:
            com.igexin.push.core.b.d r0 = new com.igexin.push.core.b.d     // Catch: java.lang.Throwable -> L56
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L56
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L56
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L56
            r5.<init>()     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = "id"
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L56
            r5.put(r3, r1)     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = "messageid"
            java.lang.String r2 = r6.c()     // Catch: java.lang.Throwable -> L56
            r5.put(r1, r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = "taskid"
            java.lang.String r2 = r6.b()     // Catch: java.lang.Throwable -> L56
            r5.put(r1, r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = "multaid"
            r5.put(r1, r7)     // Catch: java.lang.Throwable -> L56
            java.lang.String r7 = "timestamp"
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L56
            r5.put(r7, r1)     // Catch: java.lang.Throwable -> L56
            java.lang.String r6 = r6.b()     // Catch: java.lang.Throwable -> L56
            r0.a(r6, r5)     // Catch: java.lang.Throwable -> L56
        L56:
            return
    }

    public java.lang.String getBrandCode(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = r1.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r2 = r1.b
            return r2
        Lb:
            boolean r0 = com.igexin.assist.sdk.a.d(r2)
            if (r0 == 0) goto L16
            java.lang.String r2 = "2"
        L13:
            r1.b = r2
            goto L43
        L16:
            boolean r0 = com.igexin.assist.sdk.a.b(r2)
            if (r0 == 0) goto L1f
            java.lang.String r2 = "3"
            goto L13
        L1f:
            boolean r0 = com.igexin.assist.sdk.a.c(r2)
            if (r0 == 0) goto L28
            java.lang.String r2 = "4"
            goto L13
        L28:
            boolean r0 = com.igexin.assist.sdk.a.e(r2)
            if (r0 == 0) goto L31
            java.lang.String r2 = "5"
            goto L13
        L31:
            boolean r0 = com.igexin.assist.sdk.a.f(r2)
            if (r0 == 0) goto L3a
            java.lang.String r2 = "6"
            goto L13
        L3a:
            boolean r2 = com.igexin.assist.sdk.a.g(r2)
            if (r2 == 0) goto L43
            java.lang.String r2 = "7"
            goto L13
        L43:
            java.lang.String r2 = r1.b
            return r2
    }

    public void log(java.lang.String r2) {
            r1 = this;
            com.igexin.b.a.c.a.f r0 = com.igexin.b.a.c.a.f.a()
            r0.a(r2)
            return
    }
}
