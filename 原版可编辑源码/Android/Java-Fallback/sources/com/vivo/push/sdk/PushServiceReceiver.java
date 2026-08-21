package com.vivo.push.sdk;

public class PushServiceReceiver extends android.content.BroadcastReceiver {
    private static android.os.HandlerThread a;
    private static android.os.Handler b;
    private static com.vivo.push.sdk.PushServiceReceiver.a c;

    final class a implements java.lang.Runnable {
        private android.content.Context a;
        private java.lang.String b;

        a() {
                r0 = this;
                r0.<init>()
                return
        }

        static void a(com.vivo.push.sdk.PushServiceReceiver.a r0, android.content.Context r1, java.lang.String r2) {
                android.content.Context r1 = com.vivo.push.util.ContextDelegate.getContext(r1)
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final void run() {
                r5 = this;
                android.content.Context r0 = r5.a
                android.net.NetworkInfo r0 = com.vivo.push.util.r.a(r0)
                if (r0 == 0) goto Ld
                boolean r0 = r0.isConnectedOrConnecting()
                goto Le
            Ld:
                r0 = 0
            Le:
                java.lang.String r1 = ")"
                java.lang.String r2 = ","
                java.lang.String r3 = "PushServiceReceiver"
                if (r0 != 0) goto L5a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                android.content.Context r4 = r5.a
                java.lang.String r4 = r4.getPackageName()
                r0.append(r4)
                java.lang.String r4 = ": 无网络  by "
                r0.append(r4)
                java.lang.String r4 = r5.b
                r0.append(r4)
                java.lang.String r0 = r0.toString()
                com.vivo.push.util.p.d(r3, r0)
                android.content.Context r0 = r5.a
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                java.lang.String r4 = "触发静态广播:无网络("
                r3.<init>(r4)
                java.lang.String r4 = r5.b
                r3.append(r4)
                r3.append(r2)
                android.content.Context r2 = r5.a
                java.lang.String r2 = r2.getPackageName()
                r3.append(r2)
                r3.append(r1)
                java.lang.String r1 = r3.toString()
                com.vivo.push.util.p.a(r0, r1)
                return
            L5a:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                android.content.Context r4 = r5.a
                java.lang.String r4 = r4.getPackageName()
                r0.append(r4)
                java.lang.String r4 = ": 执行开始出发动作: "
                r0.append(r4)
                java.lang.String r4 = r5.b
                r0.append(r4)
                java.lang.String r0 = r0.toString()
                com.vivo.push.util.p.d(r3, r0)
                android.content.Context r0 = r5.a
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                java.lang.String r4 = "触发静态广播("
                r3.<init>(r4)
                java.lang.String r4 = r5.b
                r3.append(r4)
                r3.append(r2)
                android.content.Context r2 = r5.a
                java.lang.String r2 = r2.getPackageName()
                r3.append(r2)
                r3.append(r1)
                java.lang.String r1 = r3.toString()
                com.vivo.push.util.p.a(r0, r1)
                com.vivo.push.e r0 = com.vivo.push.e.a()
                android.content.Context r1 = r5.a
                r0.a(r1)
                android.content.Context r0 = r5.a
                com.vivo.push.cache.ClientConfigManagerImpl r0 = com.vivo.push.cache.ClientConfigManagerImpl.getInstance(r0)
                boolean r0 = r0.isCancleBroadcastReceiver()
                if (r0 != 0) goto Ld7
                android.content.Context r0 = r5.a     // Catch: com.vivo.push.util.VivoPushException -> Lbc
                com.vivo.push.PushClient r0 = com.vivo.push.PushClient.getInstance(r0)     // Catch: com.vivo.push.util.VivoPushException -> Lbc
                r0.initialize()     // Catch: com.vivo.push.util.VivoPushException -> Lbc
                return
            Lbc:
                r0 = move-exception
                r0.printStackTrace()
                android.content.Context r1 = r5.a
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r3 = " 初始化异常 error= "
                r2.<init>(r3)
                java.lang.String r0 = r0.getMessage()
                r2.append(r0)
                java.lang.String r0 = r2.toString()
                com.vivo.push.util.p.a(r1, r0)
            Ld7:
                return
        }
    }

    static {
            com.vivo.push.sdk.PushServiceReceiver$a r0 = new com.vivo.push.sdk.PushServiceReceiver$a
            r0.<init>()
            com.vivo.push.sdk.PushServiceReceiver.c = r0
            return
    }

    public PushServiceReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            android.content.Context r4 = com.vivo.push.util.ContextDelegate.getContext(r4)
            java.lang.String r5 = r5.getAction()
            java.lang.String r0 = "android.net.conn.CONNECTIVITY_CHANGE"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto L20
            java.lang.String r0 = "android.intent.action.ACTION_POWER_CONNECTED"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto L20
            java.lang.String r0 = "android.intent.action.ACTION_POWER_DISCONNECTED"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L77
        L20:
            android.os.HandlerThread r0 = com.vivo.push.sdk.PushServiceReceiver.a
            java.lang.String r1 = "PushServiceReceiver"
            if (r0 != 0) goto L3d
            android.os.HandlerThread r0 = new android.os.HandlerThread
            r0.<init>(r1)
            com.vivo.push.sdk.PushServiceReceiver.a = r0
            r0.start()
            android.os.Handler r0 = new android.os.Handler
            android.os.HandlerThread r2 = com.vivo.push.sdk.PushServiceReceiver.a
            android.os.Looper r2 = r2.getLooper()
            r0.<init>(r2)
            com.vivo.push.sdk.PushServiceReceiver.b = r0
        L3d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r4.getPackageName()
            r0.append(r2)
            java.lang.String r2 = ": start PushSerevice for by "
            r0.append(r2)
            r0.append(r5)
            java.lang.String r2 = "  ; handler : "
            r0.append(r2)
            android.os.Handler r2 = com.vivo.push.sdk.PushServiceReceiver.b
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.vivo.push.util.p.d(r1, r0)
            com.vivo.push.sdk.PushServiceReceiver$a r0 = com.vivo.push.sdk.PushServiceReceiver.c
            com.vivo.push.sdk.PushServiceReceiver.a.a(r0, r4, r5)
            android.os.Handler r4 = com.vivo.push.sdk.PushServiceReceiver.b
            com.vivo.push.sdk.PushServiceReceiver$a r5 = com.vivo.push.sdk.PushServiceReceiver.c
            r4.removeCallbacks(r5)
            android.os.Handler r4 = com.vivo.push.sdk.PushServiceReceiver.b
            com.vivo.push.sdk.PushServiceReceiver$a r5 = com.vivo.push.sdk.PushServiceReceiver.c
            r0 = 2000(0x7d0, double:9.88E-321)
            r4.postDelayed(r5, r0)
        L77:
            return
    }
}
