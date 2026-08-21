package com.xiaomi.mipush.sdk;

public class PushMessageHandler extends com.xiaomi.mipush.sdk.BaseService {
    private static java.util.List<com.xiaomi.mipush.sdk.MiPushClient.ICallbackResult> a;
    private static java.util.concurrent.ThreadPoolExecutor a;
    private static java.util.List<com.xiaomi.mipush.sdk.MiPushClient.MiPushClientCallback> b;

    interface a extends java.io.Serializable {
    }

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.xiaomi.mipush.sdk.PushMessageHandler.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.xiaomi.mipush.sdk.PushMessageHandler.b = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r7.<init>()
            r2 = 1
            r3 = 1
            r4 = 15
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7)
            com.xiaomi.mipush.sdk.PushMessageHandler.a = r0
            return
    }

    public PushMessageHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static void a() {
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r0 = com.xiaomi.mipush.sdk.PushMessageHandler.b
            monitor-enter(r0)
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r1 = com.xiaomi.mipush.sdk.PushMessageHandler.b     // Catch: java.lang.Throwable -> La
            r1.clear()     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r1
    }

    public static void a(long r3, java.lang.String r5, java.lang.String r6) {
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r0 = com.xiaomi.mipush.sdk.PushMessageHandler.b
            monitor-enter(r0)
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r1 = com.xiaomi.mipush.sdk.PushMessageHandler.b     // Catch: java.lang.Throwable -> L1b
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L1b
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L1b
            if (r2 == 0) goto L19
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L1b
            com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback r2 = (com.xiaomi.mipush.sdk.MiPushClient.MiPushClientCallback) r2     // Catch: java.lang.Throwable -> L1b
            r2.onInitializeResult(r3, r5, r6)     // Catch: java.lang.Throwable -> L1b
            goto L9
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            return
        L1b:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r3
    }

    public static void a(android.content.Context r3) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.Class<com.xiaomi.mipush.sdk.PushMessageHandler> r2 = com.xiaomi.mipush.sdk.PushMessageHandler.class
            r1.<init>(r3, r2)
            r0.setComponent(r1)
            r3.startService(r0)     // Catch: java.lang.Exception -> L13
            goto L1b
        L13:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
        L1b:
            return
    }

    public static void a(android.content.Context r2, android.content.Intent r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "addjob PushMessageHandler "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            if (r3 == 0) goto L1c
            c(r2, r3)
            a(r2)
        L1c:
            return
    }

    private static void a(android.content.Context r1, android.content.Intent r2, android.content.pm.ResolveInfo r3, boolean r4) {
            android.content.pm.ActivityInfo r3 = r3.activityInfo     // Catch: java.lang.Throwable -> L33
            java.lang.String r3 = r3.name     // Catch: java.lang.Throwable -> L33
            java.lang.Class r3 = com.xiaomi.push.v.a(r1, r3)     // Catch: java.lang.Throwable -> L33
            java.lang.Object r3 = r3.newInstance()     // Catch: java.lang.Throwable -> L33
            com.xiaomi.mipush.sdk.PushMessageReceiver r3 = (com.xiaomi.mipush.sdk.PushMessageReceiver) r3     // Catch: java.lang.Throwable -> L33
            com.xiaomi.mipush.sdk.MessageHandleService$a r0 = new com.xiaomi.mipush.sdk.MessageHandleService$a     // Catch: java.lang.Throwable -> L33
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> L33
            if (r4 == 0) goto L1d
            android.content.Context r2 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L33
            com.xiaomi.mipush.sdk.MessageHandleService.a(r2, r0)     // Catch: java.lang.Throwable -> L33
            goto L24
        L1d:
            android.content.Context r2 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L33
            com.xiaomi.mipush.sdk.MessageHandleService.addJob(r2, r0)     // Catch: java.lang.Throwable -> L33
        L24:
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> L33
            android.content.Context r3 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L33
            java.lang.Class<com.xiaomi.mipush.sdk.MessageHandleService> r4 = com.xiaomi.mipush.sdk.MessageHandleService.class
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L33
            com.xiaomi.mipush.sdk.MessageHandleService.a(r1, r2)     // Catch: java.lang.Throwable -> L33
            goto L37
        L33:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L37:
            return
    }

    protected static void a(android.content.Context r5, com.xiaomi.mipush.sdk.MiPushCommandMessage r6) {
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$ICallbackResult> r5 = com.xiaomi.mipush.sdk.PushMessageHandler.a
            monitor-enter(r5)
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$ICallbackResult> r0 = com.xiaomi.mipush.sdk.PushMessageHandler.a     // Catch: java.lang.Throwable -> L4b
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L4b
        L9:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L4b
            if (r1 == 0) goto L49
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L4b
            com.xiaomi.mipush.sdk.MiPushClient$ICallbackResult r1 = (com.xiaomi.mipush.sdk.MiPushClient.ICallbackResult) r1     // Catch: java.lang.Throwable -> L4b
            boolean r2 = r1 instanceof com.xiaomi.mipush.sdk.MiPushClient.UPSRegisterCallBack     // Catch: java.lang.Throwable -> L4b
            if (r2 == 0) goto L9
            com.xiaomi.mipush.sdk.MiPushClient$TokenResult r2 = new com.xiaomi.mipush.sdk.MiPushClient$TokenResult     // Catch: java.lang.Throwable -> L4b
            r2.<init>()     // Catch: java.lang.Throwable -> L4b
            if (r6 == 0) goto L45
            java.util.List r3 = r6.getCommandArguments()     // Catch: java.lang.Throwable -> L4b
            if (r3 == 0) goto L45
            java.util.List r3 = r6.getCommandArguments()     // Catch: java.lang.Throwable -> L4b
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L4b
            if (r3 <= 0) goto L45
            long r3 = r6.getResultCode()     // Catch: java.lang.Throwable -> L4b
            r2.setResultCode(r3)     // Catch: java.lang.Throwable -> L4b
            java.util.List r3 = r6.getCommandArguments()     // Catch: java.lang.Throwable -> L4b
            r4 = 0
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L4b
            r2.setToken(r3)     // Catch: java.lang.Throwable -> L4b
        L45:
            r1.onResult(r2)     // Catch: java.lang.Throwable -> L4b
            goto L9
        L49:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L4b
            return
        L4b:
            r6 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L4b
            throw r6
    }

    public static void a(android.content.Context r6, com.xiaomi.mipush.sdk.MiPushMessage r7) {
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r6 = com.xiaomi.mipush.sdk.PushMessageHandler.b
            monitor-enter(r6)
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r0 = com.xiaomi.mipush.sdk.PushMessageHandler.b     // Catch: java.lang.Throwable -> L3c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3c
        L9:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L3a
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3c
            com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback r1 = (com.xiaomi.mipush.sdk.MiPushClient.MiPushClientCallback) r1     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = r7.getCategory()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r3 = r1.getCategory()     // Catch: java.lang.Throwable -> L3c
            boolean r2 = a(r2, r3)     // Catch: java.lang.Throwable -> L3c
            if (r2 == 0) goto L9
            java.lang.String r2 = r7.getContent()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r3 = r7.getAlias()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r4 = r7.getTopic()     // Catch: java.lang.Throwable -> L3c
            boolean r5 = r7.isNotified()     // Catch: java.lang.Throwable -> L3c
            r1.onReceiveMessage(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L3c
            r1.onReceiveMessage(r7)     // Catch: java.lang.Throwable -> L3c
            goto L9
        L3a:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L3c
            return
        L3c:
            r7 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L3c
            throw r7
    }

    public static void a(android.content.Context r10, com.xiaomi.mipush.sdk.PushMessageHandler.a r11) {
            boolean r0 = r11 instanceof com.xiaomi.mipush.sdk.MiPushMessage
            if (r0 == 0) goto Lb
            com.xiaomi.mipush.sdk.MiPushMessage r11 = (com.xiaomi.mipush.sdk.MiPushMessage) r11
            a(r10, r11)
            goto Ld2
        Lb:
            boolean r0 = r11 instanceof com.xiaomi.mipush.sdk.MiPushCommandMessage
            if (r0 == 0) goto Ld2
            com.xiaomi.mipush.sdk.MiPushCommandMessage r11 = (com.xiaomi.mipush.sdk.MiPushCommandMessage) r11
            java.lang.String r2 = r11.getCommand()
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.a
            java.lang.String r0 = r0.a
            boolean r0 = r0.equals(r2)
            r1 = 0
            r3 = 0
            if (r0 == 0) goto L41
            java.util.List r10 = r11.getCommandArguments()
            if (r10 == 0) goto L34
            boolean r0 = r10.isEmpty()
            if (r0 != 0) goto L34
            java.lang.Object r10 = r10.get(r1)
            r3 = r10
            java.lang.String r3 = (java.lang.String) r3
        L34:
            long r0 = r11.getResultCode()
            java.lang.String r10 = r11.getReason()
            a(r0, r10, r3)
            goto Ld2
        L41:
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.c
            java.lang.String r0 = r0.a
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto Lbe
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.d
            java.lang.String r0 = r0.a
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto Lbe
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.i
            java.lang.String r0 = r0.a
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L60
            goto Lbe
        L60:
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.g
            java.lang.String r0 = r0.a
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L8f
            java.util.List r0 = r11.getCommandArguments()
            if (r0 == 0) goto L7d
            boolean r2 = r0.isEmpty()
            if (r2 != 0) goto L7d
            java.lang.Object r0 = r0.get(r1)
            r3 = r0
            java.lang.String r3 = (java.lang.String) r3
        L7d:
            r9 = r3
            java.lang.String r5 = r11.getCategory()
            long r6 = r11.getResultCode()
            java.lang.String r8 = r11.getReason()
            r4 = r10
            a(r4, r5, r6, r8, r9)
            goto Ld2
        L8f:
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.h
            java.lang.String r0 = r0.a
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto Ld2
            java.util.List r0 = r11.getCommandArguments()
            if (r0 == 0) goto Lac
            boolean r2 = r0.isEmpty()
            if (r2 != 0) goto Lac
            java.lang.Object r0 = r0.get(r1)
            r3 = r0
            java.lang.String r3 = (java.lang.String) r3
        Lac:
            r9 = r3
            java.lang.String r5 = r11.getCategory()
            long r6 = r11.getResultCode()
            java.lang.String r8 = r11.getReason()
            r4 = r10
            b(r4, r5, r6, r8, r9)
            goto Ld2
        Lbe:
            java.lang.String r1 = r11.getCategory()
            long r3 = r11.getResultCode()
            java.lang.String r5 = r11.getReason()
            java.util.List r6 = r11.getCommandArguments()
            r0 = r10
            a(r0, r1, r2, r3, r5, r6)
        Ld2:
            return
    }

    protected static void a(android.content.Context r3, java.lang.String r4, long r5, java.lang.String r7, java.lang.String r8) {
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r3 = com.xiaomi.mipush.sdk.PushMessageHandler.b
            monitor-enter(r3)
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r0 = com.xiaomi.mipush.sdk.PushMessageHandler.b     // Catch: java.lang.Throwable -> L25
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L25
        L9:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L25
            com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback r1 = (com.xiaomi.mipush.sdk.MiPushClient.MiPushClientCallback) r1     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = r1.getCategory()     // Catch: java.lang.Throwable -> L25
            boolean r2 = a(r4, r2)     // Catch: java.lang.Throwable -> L25
            if (r2 == 0) goto L9
            r1.onSubscribeResult(r5, r7, r8)     // Catch: java.lang.Throwable -> L25
            goto L9
        L23:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L25
            return
        L25:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L25
            throw r4
    }

    protected static void a(android.content.Context r8, java.lang.String r9, java.lang.String r10, long r11, java.lang.String r13, java.util.List<java.lang.String> r14) {
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r8 = com.xiaomi.mipush.sdk.PushMessageHandler.b
            monitor-enter(r8)
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r0 = com.xiaomi.mipush.sdk.PushMessageHandler.b     // Catch: java.lang.Throwable -> L2a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2a
        L9:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2a
            if (r1 == 0) goto L28
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2a
            r2 = r1
            com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback r2 = (com.xiaomi.mipush.sdk.MiPushClient.MiPushClientCallback) r2     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = r2.getCategory()     // Catch: java.lang.Throwable -> L2a
            boolean r1 = a(r9, r1)     // Catch: java.lang.Throwable -> L2a
            if (r1 == 0) goto L9
            r3 = r10
            r4 = r11
            r6 = r13
            r7 = r14
            r2.onCommandResult(r3, r4, r6, r7)     // Catch: java.lang.Throwable -> L2a
            goto L9
        L28:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L2a
            return
        L2a:
            r9 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L2a
            throw r9
    }

    protected static void a(com.xiaomi.mipush.sdk.MiPushClient.ICallbackResult r2) {
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$ICallbackResult> r0 = com.xiaomi.mipush.sdk.PushMessageHandler.a
            monitor-enter(r0)
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$ICallbackResult> r1 = com.xiaomi.mipush.sdk.PushMessageHandler.a     // Catch: java.lang.Throwable -> L12
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto L10
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$ICallbackResult> r1 = com.xiaomi.mipush.sdk.PushMessageHandler.a     // Catch: java.lang.Throwable -> L12
            r1.add(r2)     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r2
    }

    protected static void a(com.xiaomi.mipush.sdk.MiPushClient.MiPushClientCallback r2) {
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r0 = com.xiaomi.mipush.sdk.PushMessageHandler.b
            monitor-enter(r0)
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r1 = com.xiaomi.mipush.sdk.PushMessageHandler.b     // Catch: java.lang.Throwable -> L12
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto L10
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r1 = com.xiaomi.mipush.sdk.PushMessageHandler.b     // Catch: java.lang.Throwable -> L12
            r1.add(r2)     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r2
    }

    protected static boolean a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Lc
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L12
        Lc:
            boolean r1 = android.text.TextUtils.equals(r1, r2)
            if (r1 == 0) goto L14
        L12:
            r1 = 1
            goto L15
        L14:
            r1 = 0
        L15:
            return r1
    }

    protected static void b() {
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$ICallbackResult> r0 = com.xiaomi.mipush.sdk.PushMessageHandler.a
            monitor-enter(r0)
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$ICallbackResult> r1 = com.xiaomi.mipush.sdk.PushMessageHandler.a     // Catch: java.lang.Throwable -> La
            r1.clear()     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r1
    }

    private static void b(android.content.Context r2) {
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L19
            r0.<init>()     // Catch: java.lang.Exception -> L19
            java.lang.String r1 = r2.getPackageName()     // Catch: java.lang.Exception -> L19
            r0.setPackage(r1)     // Catch: java.lang.Exception -> L19
            java.lang.String r1 = "action_clicked_activity_finish"
            r0.setAction(r1)     // Catch: java.lang.Exception -> L19
            java.lang.String r1 = com.xiaomi.mipush.sdk.d.a(r2)     // Catch: java.lang.Exception -> L19
            r2.sendBroadcast(r0, r1)     // Catch: java.lang.Exception -> L19
            goto L2e
        L19:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "callback sync error"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L2e:
            return
    }

    protected static void b(android.content.Context r7, android.content.Intent r8) {
            r0 = 0
            java.lang.String r1 = "is_clicked_activity_call"
            boolean r0 = r8.getBooleanExtra(r1, r0)     // Catch: java.lang.Throwable -> L8
            goto L1d
        L8:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "intent unparcel error:"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L1d:
            java.lang.String r1 = "com.xiaomi.mipush.sdk.WAKEUP"
            java.lang.String r2 = r8.getAction()     // Catch: java.lang.Throwable -> L11b
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L11b
            r2 = 0
            if (r1 == 0) goto L2f
            com.xiaomi.mipush.sdk.o.a(r7, r8, r2)     // Catch: java.lang.Throwable -> L11b
            goto L115
        L2f:
            java.lang.String r1 = "com.xiaomi.mipush.SEND_TINYDATA"
            java.lang.String r3 = r8.getAction()     // Catch: java.lang.Throwable -> L11b
            boolean r1 = r1.equals(r3)     // Catch: java.lang.Throwable -> L11b
            if (r1 == 0) goto L66
            com.xiaomi.push.hn r1 = new com.xiaomi.push.hn     // Catch: java.lang.Throwable -> L11b
            r1.<init>()     // Catch: java.lang.Throwable -> L11b
            java.lang.String r2 = "mipush_payload"
            byte[] r2 = r8.getByteArrayExtra(r2)     // Catch: java.lang.Throwable -> L11b
            com.xiaomi.push.it.a(r1, r2)     // Catch: java.lang.Throwable -> L11b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11b
            r2.<init>()     // Catch: java.lang.Throwable -> L11b
            java.lang.String r3 = "PushMessageHandler.onHandleIntent "
            r2.append(r3)     // Catch: java.lang.Throwable -> L11b
            java.lang.String r3 = r1.d()     // Catch: java.lang.Throwable -> L11b
            r2.append(r3)     // Catch: java.lang.Throwable -> L11b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L11b
            com.xiaomi.channel.commonutils.logger.b.c(r2)     // Catch: java.lang.Throwable -> L11b
            com.xiaomi.mipush.sdk.MiTinyDataClient.upload(r7, r1)     // Catch: java.lang.Throwable -> L11b
            goto L115
        L66:
            r1 = 1
            int r3 = com.xiaomi.mipush.sdk.PushMessageHelper.getPushMode(r7)     // Catch: java.lang.Throwable -> L11b
            if (r1 != r3) goto L8d
            boolean r1 = b()     // Catch: java.lang.Throwable -> L11b
            if (r1 == 0) goto L7e
            java.lang.String r1 = "receive a message before application calling initialize"
            com.xiaomi.channel.commonutils.logger.b.d(r1)     // Catch: java.lang.Throwable -> L11b
            if (r0 == 0) goto L7d
            b(r7)
        L7d:
            return
        L7e:
            com.xiaomi.mipush.sdk.am r1 = com.xiaomi.mipush.sdk.am.a(r7)     // Catch: java.lang.Throwable -> L11b
            com.xiaomi.mipush.sdk.PushMessageHandler$a r1 = r1.a(r8)     // Catch: java.lang.Throwable -> L11b
            if (r1 == 0) goto L115
            a(r7, r1)     // Catch: java.lang.Throwable -> L11b
            goto L115
        L8d:
            java.lang.String r1 = "com.xiaomi.mipush.sdk.SYNC_LOG"
            java.lang.String r3 = r8.getAction()     // Catch: java.lang.Throwable -> L11b
            boolean r1 = r1.equals(r3)     // Catch: java.lang.Throwable -> L11b
            if (r1 == 0) goto L9b
            goto L115
        L9b:
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L11b
            java.lang.String r3 = "com.xiaomi.mipush.RECEIVE_MESSAGE"
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L11b
            java.lang.String r3 = r7.getPackageName()     // Catch: java.lang.Throwable -> L11b
            r1.setPackage(r3)     // Catch: java.lang.Throwable -> L11b
            r1.putExtras(r8)     // Catch: java.lang.Throwable -> L11b
            android.content.pm.PackageManager r3 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L11b
            r4 = 32
            java.util.List r3 = r3.queryBroadcastReceivers(r1, r4)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            if (r3 == 0) goto Leb
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
        Lbc:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            if (r4 == 0) goto Leb
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            android.content.pm.ResolveInfo r4 = (android.content.pm.ResolveInfo) r4     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            android.content.pm.ActivityInfo r5 = r4.activityInfo     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            if (r5 == 0) goto Lbc
            android.content.pm.ActivityInfo r5 = r4.activityInfo     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            java.lang.String r5 = r5.packageName     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            java.lang.String r6 = r7.getPackageName()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            boolean r5 = r5.equals(r6)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            if (r5 == 0) goto Lbc
            java.lang.Class<com.xiaomi.mipush.sdk.PushMessageReceiver> r5 = com.xiaomi.mipush.sdk.PushMessageReceiver.class
            android.content.pm.ActivityInfo r6 = r4.activityInfo     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            java.lang.String r6 = r6.name     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            java.lang.Class r6 = com.xiaomi.push.v.a(r7, r6)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            boolean r5 = r5.isAssignableFrom(r6)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            if (r5 == 0) goto Lbc
            r2 = r4
        Leb:
            if (r2 == 0) goto Lf1
            a(r7, r1, r2, r0)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            goto L115
        Lf1:
            java.lang.String r1 = "cannot find the receiver to handler this message, check your manifest"
            com.xiaomi.channel.commonutils.logger.b.d(r1)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            com.xiaomi.push.eo r1 = com.xiaomi.push.eo.a(r7)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            java.lang.String r2 = r7.getPackageName()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            java.lang.String r3 = "11"
            r1.a(r2, r8, r3)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L11b
            goto L115
        L104:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L11b
            com.xiaomi.push.eo r1 = com.xiaomi.push.eo.a(r7)     // Catch: java.lang.Throwable -> L11b
            java.lang.String r2 = r7.getPackageName()     // Catch: java.lang.Throwable -> L11b
            java.lang.String r3 = "9"
            r1.a(r2, r8, r3)     // Catch: java.lang.Throwable -> L11b
        L115:
            if (r0 == 0) goto L12f
        L117:
            b(r7)
            goto L12f
        L11b:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L130
            com.xiaomi.push.eo r1 = com.xiaomi.push.eo.a(r7)     // Catch: java.lang.Throwable -> L130
            java.lang.String r2 = r7.getPackageName()     // Catch: java.lang.Throwable -> L130
            java.lang.String r3 = "10"
            r1.a(r2, r8, r3)     // Catch: java.lang.Throwable -> L130
            if (r0 == 0) goto L12f
            goto L117
        L12f:
            return
        L130:
            r8 = move-exception
            if (r0 == 0) goto L136
            b(r7)
        L136:
            throw r8
    }

    protected static void b(android.content.Context r3, java.lang.String r4, long r5, java.lang.String r7, java.lang.String r8) {
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r3 = com.xiaomi.mipush.sdk.PushMessageHandler.b
            monitor-enter(r3)
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r0 = com.xiaomi.mipush.sdk.PushMessageHandler.b     // Catch: java.lang.Throwable -> L25
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L25
        L9:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L25
            com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback r1 = (com.xiaomi.mipush.sdk.MiPushClient.MiPushClientCallback) r1     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = r1.getCategory()     // Catch: java.lang.Throwable -> L25
            boolean r2 = a(r4, r2)     // Catch: java.lang.Throwable -> L25
            if (r2 == 0) goto L9
            r1.onUnsubscribeResult(r5, r7, r8)     // Catch: java.lang.Throwable -> L25
            goto L9
        L23:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L25
            return
        L25:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L25
            throw r4
    }

    public static boolean b() {
            java.util.List<com.xiaomi.mipush.sdk.MiPushClient$MiPushClientCallback> r0 = com.xiaomi.mipush.sdk.PushMessageHandler.b
            boolean r0 = r0.isEmpty()
            return r0
    }

    private static void c(android.content.Context r2, android.content.Intent r3) {
            if (r3 == 0) goto L14
            java.util.concurrent.ThreadPoolExecutor r0 = com.xiaomi.mipush.sdk.PushMessageHandler.a
            boolean r0 = r0.isShutdown()
            if (r0 != 0) goto L14
            java.util.concurrent.ThreadPoolExecutor r0 = com.xiaomi.mipush.sdk.PushMessageHandler.a
            com.xiaomi.mipush.sdk.al r1 = new com.xiaomi.mipush.sdk.al
            r1.<init>(r2, r3)
            r0.execute(r1)
        L14:
            return
    }

    @Override
    protected boolean a() {
            r1 = this;
            java.util.concurrent.ThreadPoolExecutor r0 = com.xiaomi.mipush.sdk.PushMessageHandler.a
            if (r0 == 0) goto L18
            java.util.concurrent.BlockingQueue r0 = r0.getQueue()
            if (r0 == 0) goto L18
            java.util.concurrent.ThreadPoolExecutor r0 = com.xiaomi.mipush.sdk.PushMessageHandler.a
            java.util.concurrent.BlockingQueue r0 = r0.getQueue()
            int r0 = r0.size()
            if (r0 <= 0) goto L18
            r0 = 1
            goto L19
        L18:
            r0 = 0
        L19:
            return r0
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onStart(android.content.Intent r1, int r2) {
            r0 = this;
            super.onStart(r1, r2)
            android.content.Context r2 = r0.getApplicationContext()
            c(r2, r1)
            return
    }
}
