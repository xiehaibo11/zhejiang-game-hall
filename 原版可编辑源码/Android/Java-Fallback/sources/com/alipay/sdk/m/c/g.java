package com.alipay.sdk.m.c;

public class g implements com.alipay.sdk.m.b.b {

    public static class a {
    }

    public static final class b implements android.content.ServiceConnection {
        public boolean a;
        public final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> b;

        public b() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
                r0.<init>()
                r1.b = r0
                return
        }

        public b(com.alipay.sdk.m.c.g.a r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public android.os.IBinder a() throws java.lang.InterruptedException {
                r4 = this;
                boolean r0 = r4.a
                if (r0 != 0) goto L14
                r0 = 1
                r4.a = r0
                java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r4.b
                java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.SECONDS
                r2 = 5
                java.lang.Object r0 = r0.poll(r2, r1)
                android.os.IBinder r0 = (android.os.IBinder) r0
                return r0
            L14:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                r0.<init>()
                throw r0
        }

        @Override
        public void onServiceConnected(android.content.ComponentName r1, android.os.IBinder r2) {
                r0 = this;
                java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r0.b     // Catch: java.lang.InterruptedException -> L5
                r1.put(r2)     // Catch: java.lang.InterruptedException -> L5
            L5:
                return
        }

        @Override
        public void onServiceDisconnected(android.content.ComponentName r1) {
                r0 = this;
                return
        }
    }

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a(android.content.Context r6) {
            r5 = this;
            com.alipay.sdk.m.c.g$b r0 = new com.alipay.sdk.m.c.g$b
            r1 = 0
            r0.<init>(r1)
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r3 = "com.samsung.android.deviceidservice"
            java.lang.String r4 = "com.samsung.android.deviceidservice.DeviceIdService"
            r2.setClassName(r3, r4)
            r3 = 1
            boolean r2 = r6.bindService(r2, r0, r3)
            if (r2 == 0) goto L31
            android.os.IBinder r2 = r0.a()     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2e
            com.alipay.sdk.m.k0.a r2 = com.alipay.sdk.m.k0.a.a.a(r2)     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2e
            java.lang.String r1 = r2.a()     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2e
            r6.unbindService(r0)
            return r1
        L29:
            r1 = move-exception
            r6.unbindService(r0)
            throw r1
        L2e:
            r6.unbindService(r0)
        L31:
            return r1
    }
}
