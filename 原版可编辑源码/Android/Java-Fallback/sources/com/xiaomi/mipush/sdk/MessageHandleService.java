package com.xiaomi.mipush.sdk;

public class MessageHandleService extends com.xiaomi.mipush.sdk.BaseService {
    private static java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.mipush.sdk.MessageHandleService.a> a;
    private static java.util.concurrent.ExecutorService a;

    public class a {
        private android.content.Intent a;
        private com.xiaomi.mipush.sdk.PushMessageReceiver a;

        public a(android.content.Intent r1, com.xiaomi.mipush.sdk.PushMessageReceiver r2) {
                r0 = this;
                r0.<init>()
                r0.a = r2
                r0.a = r1
                return
        }

        public android.content.Intent a() {
                r1 = this;
                android.content.Intent r0 = r1.a
                return r0
        }

        public com.xiaomi.mipush.sdk.PushMessageReceiver a() {
                r1 = this;
                com.xiaomi.mipush.sdk.PushMessageReceiver r0 = r1.a
                return r0
        }
    }

    static {
            java.util.concurrent.ConcurrentLinkedQueue r0 = new java.util.concurrent.ConcurrentLinkedQueue
            r0.<init>()
            com.xiaomi.mipush.sdk.MessageHandleService.a = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r7.<init>()
            r2 = 1
            r3 = 1
            r4 = 15
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7)
            com.xiaomi.mipush.sdk.MessageHandleService.a = r0
            return
    }

    public MessageHandleService() {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(android.content.Context r0) {
            c(r0)
            return
    }

    protected static void a(android.content.Context r0, android.content.Intent r1) {
            if (r1 != 0) goto L3
            return
        L3:
            b(r0)
            return
    }

    static void a(android.content.Context r9, com.xiaomi.mipush.sdk.MessageHandleService.a r10) {
            if (r10 != 0) goto L3
            return
        L3:
            com.xiaomi.mipush.sdk.PushMessageReceiver r0 = r10.a()     // Catch: java.lang.RuntimeException -> L1a7
            android.content.Intent r10 = r10.a()     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r1 = "message_type"
            r2 = 1
            int r1 = r10.getIntExtra(r1, r2)     // Catch: java.lang.RuntimeException -> L1a7
            r3 = 0
            java.lang.String r5 = ", reason="
            java.lang.String r6 = ", resultCode="
            if (r1 == r2) goto L9a
            r2 = 3
            if (r1 == r2) goto L42
            r2 = 5
            if (r1 == r2) goto L22
            goto L1ab
        L22:
            java.lang.String r1 = "error_type"
            java.lang.String r1 = r10.getStringExtra(r1)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = "error_lack_of_permission"
            boolean r1 = r2.equals(r1)     // Catch: java.lang.RuntimeException -> L1a7
            if (r1 == 0) goto L1ab
            java.lang.String r1 = "error_message"
            java.lang.String[] r10 = r10.getStringArrayExtra(r1)     // Catch: java.lang.RuntimeException -> L1a7
            if (r10 == 0) goto L1ab
            java.lang.String r1 = "begin execute onRequirePermissions, lack of necessary permissions"
            com.xiaomi.channel.commonutils.logger.b.e(r1)     // Catch: java.lang.RuntimeException -> L1a7
            r0.onRequirePermissions(r9, r10)     // Catch: java.lang.RuntimeException -> L1a7
            goto L1ab
        L42:
            java.lang.String r1 = "key_command"
            java.io.Serializable r10 = r10.getSerializableExtra(r1)     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.mipush.sdk.MiPushCommandMessage r10 = (com.xiaomi.mipush.sdk.MiPushCommandMessage) r10     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.RuntimeException -> L1a7
            r1.<init>()     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = "(Local) begin execute onCommandResult, command="
            r1.append(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = r10.getCommand()     // Catch: java.lang.RuntimeException -> L1a7
            r1.append(r2)     // Catch: java.lang.RuntimeException -> L1a7
            r1.append(r6)     // Catch: java.lang.RuntimeException -> L1a7
            long r6 = r10.getResultCode()     // Catch: java.lang.RuntimeException -> L1a7
            r1.append(r6)     // Catch: java.lang.RuntimeException -> L1a7
            r1.append(r5)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = r10.getReason()     // Catch: java.lang.RuntimeException -> L1a7
            r1.append(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r1 = r1.toString()     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.channel.commonutils.logger.b.e(r1)     // Catch: java.lang.RuntimeException -> L1a7
            r0.onCommandResult(r9, r10)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r1 = r10.getCommand()     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.push.ey r2 = com.xiaomi.push.ey.a     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = r2.a     // Catch: java.lang.RuntimeException -> L1a7
            boolean r1 = android.text.TextUtils.equals(r1, r2)     // Catch: java.lang.RuntimeException -> L1a7
            if (r1 == 0) goto L1ab
            r0.onReceiveRegisterResult(r9, r10)     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.mipush.sdk.PushMessageHandler.a(r9, r10)     // Catch: java.lang.RuntimeException -> L1a7
            long r0 = r10.getResultCode()     // Catch: java.lang.RuntimeException -> L1a7
            int r10 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r10 != 0) goto L1ab
        L95:
            com.xiaomi.mipush.sdk.i.b(r9)     // Catch: java.lang.RuntimeException -> L1a7
            goto L1ab
        L9a:
            com.xiaomi.mipush.sdk.am r1 = com.xiaomi.mipush.sdk.am.a(r9)     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.mipush.sdk.PushMessageHandler$a r1 = r1.a(r10)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r7 = "eventMessageType"
            r8 = -1
            int r7 = r10.getIntExtra(r7, r8)     // Catch: java.lang.RuntimeException -> L1a7
            if (r1 == 0) goto L1ab
            boolean r8 = r1 instanceof com.xiaomi.mipush.sdk.MiPushMessage     // Catch: java.lang.RuntimeException -> L1a7
            if (r8 == 0) goto L154
            com.xiaomi.mipush.sdk.MiPushMessage r1 = (com.xiaomi.mipush.sdk.MiPushMessage) r1     // Catch: java.lang.RuntimeException -> L1a7
            boolean r3 = r1.isArrivedMessage()     // Catch: java.lang.RuntimeException -> L1a7
            if (r3 != 0) goto Lba
            r0.onReceiveMessage(r9, r1)     // Catch: java.lang.RuntimeException -> L1a7
        Lba:
            int r3 = r1.getPassThrough()     // Catch: java.lang.RuntimeException -> L1a7
            r4 = 0
            if (r3 != r2) goto Lef
            android.content.Context r2 = r9.getApplicationContext()     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.push.eo r2 = com.xiaomi.push.eo.a(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r3 = r9.getPackageName()     // Catch: java.lang.RuntimeException -> L1a7
            r5 = 2004(0x7d4, float:2.808E-42)
            r2.a(r3, r10, r5, r4)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.RuntimeException -> L1a7
            r10.<init>()     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = "begin execute onReceivePassThroughMessage from "
            r10.append(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = r1.getMessageId()     // Catch: java.lang.RuntimeException -> L1a7
            r10.append(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r10 = r10.toString()     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.channel.commonutils.logger.b.e(r10)     // Catch: java.lang.RuntimeException -> L1a7
            r0.onReceivePassThroughMessage(r9, r1)     // Catch: java.lang.RuntimeException -> L1a7
            goto L1ab
        Lef:
            boolean r2 = r1.isNotified()     // Catch: java.lang.RuntimeException -> L1a7
            if (r2 == 0) goto L138
            r2 = 1000(0x3e8, float:1.401E-42)
            if (r7 != r2) goto L10b
            android.content.Context r2 = r9.getApplicationContext()     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.push.eo r2 = com.xiaomi.push.eo.a(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r3 = r9.getPackageName()     // Catch: java.lang.RuntimeException -> L1a7
            r5 = 1007(0x3ef, float:1.411E-42)
            r2.a(r3, r10, r5, r4)     // Catch: java.lang.RuntimeException -> L1a7
            goto L11c
        L10b:
            android.content.Context r2 = r9.getApplicationContext()     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.push.eo r2 = com.xiaomi.push.eo.a(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r3 = r9.getPackageName()     // Catch: java.lang.RuntimeException -> L1a7
            r5 = 3007(0xbbf, float:4.214E-42)
            r2.a(r3, r10, r5, r4)     // Catch: java.lang.RuntimeException -> L1a7
        L11c:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.RuntimeException -> L1a7
            r10.<init>()     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = "begin execute onNotificationMessageClicked from\u3000"
            r10.append(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = r1.getMessageId()     // Catch: java.lang.RuntimeException -> L1a7
            r10.append(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r10 = r10.toString()     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.channel.commonutils.logger.b.e(r10)     // Catch: java.lang.RuntimeException -> L1a7
            r0.onNotificationMessageClicked(r9, r1)     // Catch: java.lang.RuntimeException -> L1a7
            goto L1ab
        L138:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.RuntimeException -> L1a7
            r10.<init>()     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = "begin execute onNotificationMessageArrived from "
            r10.append(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = r1.getMessageId()     // Catch: java.lang.RuntimeException -> L1a7
            r10.append(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r10 = r10.toString()     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.channel.commonutils.logger.b.e(r10)     // Catch: java.lang.RuntimeException -> L1a7
            r0.onNotificationMessageArrived(r9, r1)     // Catch: java.lang.RuntimeException -> L1a7
            goto L1ab
        L154:
            boolean r10 = r1 instanceof com.xiaomi.mipush.sdk.MiPushCommandMessage     // Catch: java.lang.RuntimeException -> L1a7
            if (r10 == 0) goto L1ab
            com.xiaomi.mipush.sdk.MiPushCommandMessage r1 = (com.xiaomi.mipush.sdk.MiPushCommandMessage) r1     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.RuntimeException -> L1a7
            r10.<init>()     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = "begin execute onCommandResult, command="
            r10.append(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = r1.getCommand()     // Catch: java.lang.RuntimeException -> L1a7
            r10.append(r2)     // Catch: java.lang.RuntimeException -> L1a7
            r10.append(r6)     // Catch: java.lang.RuntimeException -> L1a7
            long r6 = r1.getResultCode()     // Catch: java.lang.RuntimeException -> L1a7
            r10.append(r6)     // Catch: java.lang.RuntimeException -> L1a7
            r10.append(r5)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = r1.getReason()     // Catch: java.lang.RuntimeException -> L1a7
            r10.append(r2)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r10 = r10.toString()     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.channel.commonutils.logger.b.e(r10)     // Catch: java.lang.RuntimeException -> L1a7
            r0.onCommandResult(r9, r1)     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r10 = r1.getCommand()     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.push.ey r2 = com.xiaomi.push.ey.a     // Catch: java.lang.RuntimeException -> L1a7
            java.lang.String r2 = r2.a     // Catch: java.lang.RuntimeException -> L1a7
            boolean r10 = android.text.TextUtils.equals(r10, r2)     // Catch: java.lang.RuntimeException -> L1a7
            if (r10 == 0) goto L1ab
            r0.onReceiveRegisterResult(r9, r1)     // Catch: java.lang.RuntimeException -> L1a7
            com.xiaomi.mipush.sdk.PushMessageHandler.a(r9, r1)     // Catch: java.lang.RuntimeException -> L1a7
            long r0 = r1.getResultCode()     // Catch: java.lang.RuntimeException -> L1a7
            int r10 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r10 != 0) goto L1ab
            goto L95
        L1a7:
            r9 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r9)
        L1ab:
            return
    }

    public static void addJob(android.content.Context r1, com.xiaomi.mipush.sdk.MessageHandleService.a r2) {
            if (r2 == 0) goto Ld
            java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.mipush.sdk.MessageHandleService$a> r0 = com.xiaomi.mipush.sdk.MessageHandleService.a
            r0.add(r2)
            b(r1)
            startService(r1)
        Ld:
            return
    }

    private static void b(android.content.Context r2) {
            java.util.concurrent.ExecutorService r0 = com.xiaomi.mipush.sdk.MessageHandleService.a
            boolean r0 = r0.isShutdown()
            if (r0 != 0) goto L12
            java.util.concurrent.ExecutorService r0 = com.xiaomi.mipush.sdk.MessageHandleService.a
            com.xiaomi.mipush.sdk.z r1 = new com.xiaomi.mipush.sdk.z
            r1.<init>(r2)
            r0.execute(r1)
        L12:
            return
    }

    private static void c(android.content.Context r1) {
            java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.mipush.sdk.MessageHandleService$a> r0 = com.xiaomi.mipush.sdk.MessageHandleService.a     // Catch: java.lang.RuntimeException -> Lc
            java.lang.Object r0 = r0.poll()     // Catch: java.lang.RuntimeException -> Lc
            com.xiaomi.mipush.sdk.MessageHandleService$a r0 = (com.xiaomi.mipush.sdk.MessageHandleService.a) r0     // Catch: java.lang.RuntimeException -> Lc
            a(r1, r0)     // Catch: java.lang.RuntimeException -> Lc
            goto L10
        Lc:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L10:
            return
    }

    public static void startService(android.content.Context r3) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.Class<com.xiaomi.mipush.sdk.MessageHandleService> r2 = com.xiaomi.mipush.sdk.MessageHandleService.class
            r1.<init>(r3, r2)
            r0.setComponent(r1)
            com.xiaomi.push.al r1 = com.xiaomi.push.al.a(r3)
            com.xiaomi.mipush.sdk.y r2 = new com.xiaomi.mipush.sdk.y
            r2.<init>(r3, r0)
            r1.a(r2)
            return
    }

    @Override
    protected boolean a() {
            r1 = this;
            java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.mipush.sdk.MessageHandleService$a> r0 = com.xiaomi.mipush.sdk.MessageHandleService.a
            if (r0 == 0) goto Lc
            int r0 = r0.size()
            if (r0 <= 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
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
            return
    }
}
