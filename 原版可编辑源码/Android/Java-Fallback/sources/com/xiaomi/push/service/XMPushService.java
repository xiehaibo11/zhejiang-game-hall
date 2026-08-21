package com.xiaomi.push.service;

public class XMPushService extends android.app.Service implements com.xiaomi.push.fz {
    private static boolean b;
    private int a;
    private long a;
    private android.database.ContentObserver a;
    android.os.Messenger a;
    private com.xiaomi.push.fs a;
    private com.xiaomi.push.fw a;
    private com.xiaomi.push.fx a;
    private com.xiaomi.push.gb a;
    private com.xiaomi.push.service.XMPushService.a a;
    private com.xiaomi.push.service.XMPushService.f a;
    private com.xiaomi.push.service.XMPushService.k a;
    private com.xiaomi.push.service.XMPushService.r a;
    private com.xiaomi.push.service.XMPushService.t a;
    private com.xiaomi.push.service.be a;
    private com.xiaomi.push.service.bq a;
    private com.xiaomi.push.service.j a;
    private com.xiaomi.push.service.p a;
    protected java.lang.Class a;
    private java.lang.String a;
    private java.util.ArrayList<com.xiaomi.push.service.XMPushService.n> a;
    private java.util.Collection<com.xiaomi.push.service.ar> a;
    private boolean a;
    private int b;

    class a extends android.content.BroadcastReceiver {
        final com.xiaomi.push.service.XMPushService a;
        private final java.lang.Object a;

        private a(com.xiaomi.push.service.XMPushService r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                java.lang.Object r1 = new java.lang.Object
                r1.<init>()
                r0.a = r1
                return
        }

        a(com.xiaomi.push.service.XMPushService r1, com.xiaomi.push.service.ci r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private void a() {
                r4 = this;
                android.os.Looper r0 = android.os.Looper.myLooper()
                android.os.Looper r1 = android.os.Looper.getMainLooper()
                if (r0 != r1) goto L10
                java.lang.String r0 = "[Alarm] Cannot perform lock.notifyAll in the UI thread!"
                com.xiaomi.channel.commonutils.logger.b.d(r0)
                return
            L10:
                java.lang.Object r0 = r4.a
                monitor-enter(r0)
                java.lang.Object r1 = r4.a     // Catch: java.lang.Throwable -> L19 java.lang.Exception -> L1b
                r1.notifyAll()     // Catch: java.lang.Throwable -> L19 java.lang.Exception -> L1b
                goto L30
            L19:
                r1 = move-exception
                goto L32
            L1b:
                r1 = move-exception
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19
                r2.<init>()     // Catch: java.lang.Throwable -> L19
                java.lang.String r3 = "[Alarm] notify lock. "
                r2.append(r3)     // Catch: java.lang.Throwable -> L19
                r2.append(r1)     // Catch: java.lang.Throwable -> L19
                java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L19
                com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L19
            L30:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
                return
            L32:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
                throw r1
        }

        private void a(long r3) {
                r2 = this;
                android.os.Looper r0 = android.os.Looper.myLooper()
                android.os.Looper r1 = android.os.Looper.getMainLooper()
                if (r0 != r1) goto L10
                java.lang.String r3 = "[Alarm] Cannot perform lock.wait in the UI thread!"
                com.xiaomi.channel.commonutils.logger.b.d(r3)
                return
            L10:
                java.lang.Object r0 = r2.a
                monitor-enter(r0)
                java.lang.Object r1 = r2.a     // Catch: java.lang.Throwable -> L19 java.lang.InterruptedException -> L1b
                r1.wait(r3)     // Catch: java.lang.Throwable -> L19 java.lang.InterruptedException -> L1b
                goto L30
            L19:
                r3 = move-exception
                goto L32
            L1b:
                r3 = move-exception
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19
                r4.<init>()     // Catch: java.lang.Throwable -> L19
                java.lang.String r1 = "[Alarm] interrupt from waiting state. "
                r4.append(r1)     // Catch: java.lang.Throwable -> L19
                r4.append(r3)     // Catch: java.lang.Throwable -> L19
                java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L19
                com.xiaomi.channel.commonutils.logger.b.a(r3)     // Catch: java.lang.Throwable -> L19
            L30:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
                return
            L32:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
                throw r3
        }

        static void a(com.xiaomi.push.service.XMPushService.a r0) {
                r0.a()
                return
        }

        @Override
        public void onReceive(android.content.Context r6, android.content.Intent r7) {
                r5 = this;
                long r0 = java.lang.System.currentTimeMillis()
                java.lang.String r2 = "[Alarm] heartbeat alarm has been triggered."
                com.xiaomi.channel.commonutils.logger.b.c(r2)
                java.lang.String r2 = com.xiaomi.push.service.bk.p
                java.lang.String r3 = r7.getAction()
                boolean r2 = r2.equals(r3)
                if (r2 == 0) goto L63
                java.lang.String r2 = r6.getPackageName()
                java.lang.String r7 = r7.getPackage()
                boolean r7 = android.text.TextUtils.equals(r2, r7)
                if (r7 == 0) goto L6b
                java.lang.String r7 = "[Alarm] Ping XMChannelService on timer"
                com.xiaomi.channel.commonutils.logger.b.c(r7)
                android.content.Intent r7 = new android.content.Intent     // Catch: java.lang.Throwable -> L6b
                java.lang.Class<com.xiaomi.push.service.XMPushService> r2 = com.xiaomi.push.service.XMPushService.class
                r7.<init>(r6, r2)     // Catch: java.lang.Throwable -> L6b
                java.lang.String r2 = "time_stamp"
                long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6b
                r7.putExtra(r2, r3)     // Catch: java.lang.Throwable -> L6b
                java.lang.String r2 = "com.xiaomi.push.timer"
                r7.setAction(r2)     // Catch: java.lang.Throwable -> L6b
                com.xiaomi.push.service.ServiceClient r6 = com.xiaomi.push.service.ServiceClient.getInstance(r6)     // Catch: java.lang.Throwable -> L6b
                r6.startServiceSafely(r7)     // Catch: java.lang.Throwable -> L6b
                r6 = 3000(0xbb8, double:1.482E-320)
                r5.a(r6)     // Catch: java.lang.Throwable -> L6b
                java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b
                r6.<init>()     // Catch: java.lang.Throwable -> L6b
                java.lang.String r7 = "[Alarm] heartbeat alarm finish in "
                r6.append(r7)     // Catch: java.lang.Throwable -> L6b
                long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6b
                long r2 = r2 - r0
                r6.append(r2)     // Catch: java.lang.Throwable -> L6b
                java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L6b
                com.xiaomi.channel.commonutils.logger.b.a(r6)     // Catch: java.lang.Throwable -> L6b
                goto L6b
            L63:
                java.lang.String r6 = "[Alarm] cancel the old ping timer"
                com.xiaomi.channel.commonutils.logger.b.a(r6)
                com.xiaomi.push.eu.a()
            L6b:
                return
        }
    }

    class b extends com.xiaomi.push.service.XMPushService.j {
        final com.xiaomi.push.service.XMPushService a;
        com.xiaomi.push.service.bg.b a;

        public b(com.xiaomi.push.service.XMPushService r1, com.xiaomi.push.service.bg.b r2) {
                r0 = this;
                r0.a = r1
                r1 = 9
                r0.<init>(r1)
                r1 = 0
                r0.a = r1
                r0.a = r2
                return
        }

        @Override
        public java.lang.String a() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "bind the client. "
                r0.append(r1)
                com.xiaomi.push.service.bg$b r1 = r2.a
                java.lang.String r1 = r1.g
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        @Override
        public void a() {
                r9 = this;
                com.xiaomi.push.service.XMPushService r0 = r9.a     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                boolean r0 = r0.c()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                if (r0 != 0) goto Lf
                java.lang.String r0 = "trying bind while the connection is not created, quit!"
                com.xiaomi.channel.commonutils.logger.b.d(r0)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                goto L8e
            Lf:
                com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                com.xiaomi.push.service.bg$b r1 = r9.a     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                java.lang.String r1 = r1.g     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                com.xiaomi.push.service.bg$b r2 = r9.a     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                java.lang.String r2 = r2.b     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                com.xiaomi.push.service.bg$b r0 = r0.a(r1, r2)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                if (r0 != 0) goto L3f
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                r0.<init>()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                java.lang.String r1 = "ignore bind because the channel "
                r0.append(r1)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                com.xiaomi.push.service.bg$b r1 = r9.a     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                java.lang.String r1 = r1.g     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                r0.append(r1)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                java.lang.String r1 = " is removed "
                r0.append(r1)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
            L3b:
                com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                goto L8e
            L3f:
                com.xiaomi.push.service.bg$c r1 = r0.a     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                com.xiaomi.push.service.bg$c r2 = com.xiaomi.push.service.bg.c.a     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                if (r1 != r2) goto L5e
                com.xiaomi.push.service.bg$c r4 = com.xiaomi.push.service.bg.c.b     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                r5 = 0
                r6 = 0
                r7 = 0
                r8 = 0
                r3 = r0
                r3.a(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                com.xiaomi.push.service.XMPushService r1 = r9.a     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                com.xiaomi.push.fw r1 = com.xiaomi.push.service.XMPushService.a(r1)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                r1.a(r0)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                com.xiaomi.push.service.XMPushService r1 = r9.a     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                com.xiaomi.push.fj.a(r1, r0)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                goto L8e
            L5e:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                r1.<init>()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                java.lang.String r2 = "trying duplicate bind, ingore! "
                r1.append(r2)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                com.xiaomi.push.service.bg$c r0 = r0.a     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                r1.append(r0)     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L72 java.lang.Throwable -> L8e
                goto L3b
            L72:
                r0 = move-exception
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Meet error when trying to bind. "
                r1.append(r2)
                r1.append(r0)
                java.lang.String r1 = r1.toString()
                com.xiaomi.channel.commonutils.logger.b.d(r1)
                com.xiaomi.push.service.XMPushService r1 = r9.a
                r2 = 10
                r1.a(r2, r0)
            L8e:
                return
        }
    }

    class c extends com.xiaomi.push.service.XMPushService.j {
        private final com.xiaomi.push.service.bg.b a;

        public c(com.xiaomi.push.service.bg.b r2) {
                r1 = this;
                r0 = 12
                r1.<init>(r0)
                r1.a = r2
                return
        }

        @Override
        public java.lang.String a() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "bind time out. chid="
                r0.append(r1)
                com.xiaomi.push.service.bg$b r1 = r2.a
                java.lang.String r1 = r1.g
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        @Override
        public void a() {
                r6 = this;
                com.xiaomi.push.service.bg$b r0 = r6.a
                com.xiaomi.push.service.bg$c r1 = com.xiaomi.push.service.bg.c.a
                r2 = 1
                r3 = 21
                r4 = 0
                r5 = 0
                r0.a(r1, r2, r3, r4, r5)
                return
        }

        public boolean equals(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r2 instanceof com.xiaomi.push.service.XMPushService.c
                if (r0 != 0) goto L6
                r2 = 0
                return r2
            L6:
                com.xiaomi.push.service.XMPushService$c r2 = (com.xiaomi.push.service.XMPushService.c) r2
                com.xiaomi.push.service.bg$b r2 = r2.a
                java.lang.String r2 = r2.g
                com.xiaomi.push.service.bg$b r0 = r1.a
                java.lang.String r0 = r0.g
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                return r2
        }

        public int hashCode() {
                r1 = this;
                com.xiaomi.push.service.bg$b r0 = r1.a
                java.lang.String r0 = r0.g
                int r0 = r0.hashCode()
                return r0
        }
    }

    class d extends com.xiaomi.push.service.XMPushService.j {
        private com.xiaomi.push.fl a;
        final com.xiaomi.push.service.XMPushService a;

        public d(com.xiaomi.push.service.XMPushService r1, com.xiaomi.push.fl r2) {
                r0 = this;
                r0.a = r1
                r1 = 8
                r0.<init>(r1)
                r1 = 0
                r0.a = r1
                r0.a = r2
                return
        }

        public com.xiaomi.push.fl a() {
                r1 = this;
                com.xiaomi.push.fl r0 = r1.a
                return r0
        }

        @Override
        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = "receive a message."
                return r0
        }

        @Override
        public void a() {
                r3 = this;
                com.xiaomi.push.fl r0 = r3.a
                com.xiaomi.push.service.ao r0 = r0.a
                if (r0 == 0) goto L10
                com.xiaomi.push.fl r0 = r3.a
                com.xiaomi.push.service.ao r0 = r0.a
                long r1 = java.lang.System.currentTimeMillis()
                r0.c = r1
            L10:
                com.xiaomi.push.service.XMPushService r0 = r3.a
                com.xiaomi.push.service.be r0 = com.xiaomi.push.service.XMPushService.a(r0)
                com.xiaomi.push.fl r1 = r3.a
                r0.a(r1)
                return
        }
    }

    public class e extends com.xiaomi.push.service.XMPushService.j {
        final com.xiaomi.push.service.XMPushService a;

        e(com.xiaomi.push.service.XMPushService r1) {
                r0 = this;
                r0.a = r1
                r1 = 1
                r0.<init>(r1)
                return
        }

        @Override
        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = "do reconnect.."
                return r0
        }

        @Override
        public void a() {
                r2 = this;
                com.xiaomi.push.service.XMPushService r0 = r2.a
                boolean r0 = r0.a()
                if (r0 == 0) goto L1a
                com.xiaomi.push.service.XMPushService r0 = r2.a
                android.content.Context r1 = r0.getApplicationContext()
                boolean r0 = com.xiaomi.push.service.XMPushService.a(r0, r1)
                if (r0 == 0) goto L1a
                com.xiaomi.push.service.XMPushService r0 = r2.a
                com.xiaomi.push.service.XMPushService.c(r0)
                goto L1f
            L1a:
                java.lang.String r0 = "should not connect. quit the job."
                com.xiaomi.channel.commonutils.logger.b.a(r0)
            L1f:
                return
        }
    }

    class f extends android.content.BroadcastReceiver {
        final com.xiaomi.push.service.XMPushService a;

        f(com.xiaomi.push.service.XMPushService r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onReceive(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r0 = "network changed, "
                r2.append(r0)
                java.lang.String r0 = com.xiaomi.push.m.a(r3)
                r2.append(r0)
                java.lang.String r2 = r2.toString()
                com.xiaomi.channel.commonutils.logger.b.a(r2)
                com.xiaomi.push.service.XMPushService r2 = r1.a
                r0 = 1
                r2.onStart(r3, r0)
                return
        }
    }

    public class g extends com.xiaomi.push.service.XMPushService.j {
        final com.xiaomi.push.service.XMPushService a;
        public java.lang.Exception a;
        public int b;

        g(com.xiaomi.push.service.XMPushService r1, int r2, java.lang.Exception r3) {
                r0 = this;
                r0.a = r1
                r1 = 2
                r0.<init>(r1)
                r0.b = r2
                r0.a = r3
                return
        }

        @Override
        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = "disconnect the connection."
                return r0
        }

        @Override
        public void a() {
                r3 = this;
                com.xiaomi.push.service.XMPushService r0 = r3.a
                int r1 = r3.b
                java.lang.Exception r2 = r3.a
                r0.a(r1, r2)
                return
        }
    }

    class h extends com.xiaomi.push.service.XMPushService.j {
        final com.xiaomi.push.service.XMPushService a;

        h(com.xiaomi.push.service.XMPushService r1) {
                r0 = this;
                r0.a = r1
                r1 = 65535(0xffff, float:9.1834E-41)
                r0.<init>(r1)
                return
        }

        @Override
        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = "Init Job"
                return r0
        }

        @Override
        public void a() {
                r1 = this;
                com.xiaomi.push.service.XMPushService r0 = r1.a
                com.xiaomi.push.service.XMPushService.b(r0)
                return
        }
    }

    class i extends com.xiaomi.push.service.XMPushService.j {
        private android.content.Intent a;
        final com.xiaomi.push.service.XMPushService a;

        public i(com.xiaomi.push.service.XMPushService r1, android.content.Intent r2) {
                r0 = this;
                r0.a = r1
                r1 = 15
                r0.<init>(r1)
                r1 = 0
                r0.a = r1
                r0.a = r2
                return
        }

        public android.content.Intent a() {
                r1 = this;
                android.content.Intent r0 = r1.a
                return r0
        }

        @Override
        public java.lang.String a() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Handle intent action = "
                r0.append(r1)
                android.content.Intent r1 = r2.a
                java.lang.String r1 = r1.getAction()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        @Override
        public void a() {
                r2 = this;
                com.xiaomi.push.service.XMPushService r0 = r2.a
                android.content.Intent r1 = r2.a
                com.xiaomi.push.service.XMPushService.a(r0, r1)
                return
        }
    }

    public abstract class j extends com.xiaomi.push.service.p.b {
        public j(int r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public abstract java.lang.String a();

        public abstract void a();

        @Override
        public void run() {
                r2 = this;
                int r0 = r2.a
                r1 = 4
                if (r0 == r1) goto L14
                int r0 = r2.a
                r1 = 8
                if (r0 == r1) goto L14
                java.lang.String r0 = com.xiaomi.channel.commonutils.logger.a.a
                java.lang.String r1 = r2.a()
                com.xiaomi.channel.commonutils.logger.b.a(r0, r1)
            L14:
                r2.a()
                return
        }
    }

    class k extends android.content.BroadcastReceiver {
        final com.xiaomi.push.service.XMPushService a;

        k(com.xiaomi.push.service.XMPushService r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onReceive(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r0 = "[HB] hold short heartbeat, "
                r2.append(r0)
                java.lang.String r0 = com.xiaomi.push.m.a(r3)
                r2.append(r0)
                java.lang.String r2 = r2.toString()
                com.xiaomi.channel.commonutils.logger.b.a(r2)
                if (r3 == 0) goto L26
                android.os.Bundle r2 = r3.getExtras()
                if (r2 == 0) goto L26
                com.xiaomi.push.service.XMPushService r2 = r1.a
                r0 = 1
                r2.onStart(r3, r0)
            L26:
                return
        }
    }

    class l extends com.xiaomi.push.service.XMPushService.j {
        final com.xiaomi.push.service.XMPushService a;

        public l(com.xiaomi.push.service.XMPushService r1) {
                r0 = this;
                r0.a = r1
                r1 = 5
                r0.<init>(r1)
                return
        }

        @Override
        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = "ask the job queue to quit"
                return r0
        }

        @Override
        public void a() {
                r1 = this;
                com.xiaomi.push.service.XMPushService r0 = r1.a
                com.xiaomi.push.service.p r0 = com.xiaomi.push.service.XMPushService.a(r0)
                r0.a()
                return
        }
    }

    class m extends com.xiaomi.push.service.XMPushService.j {
        private com.xiaomi.push.gn a;
        final com.xiaomi.push.service.XMPushService a;

        public m(com.xiaomi.push.service.XMPushService r1, com.xiaomi.push.gn r2) {
                r0 = this;
                r0.a = r1
                r1 = 8
                r0.<init>(r1)
                r1 = 0
                r0.a = r1
                r0.a = r2
                return
        }

        @Override
        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = "receive a message."
                return r0
        }

        @Override
        public void a() {
                r2 = this;
                com.xiaomi.push.service.XMPushService r0 = r2.a
                com.xiaomi.push.service.be r0 = com.xiaomi.push.service.XMPushService.a(r0)
                com.xiaomi.push.gn r1 = r2.a
                r0.a(r1)
                return
        }
    }

    public interface n {
        void a();
    }

    class o extends com.xiaomi.push.service.XMPushService.j {
        final com.xiaomi.push.service.XMPushService a;
        boolean a;

        public o(com.xiaomi.push.service.XMPushService r1, boolean r2) {
                r0 = this;
                r0.a = r1
                r1 = 4
                r0.<init>(r1)
                r0.a = r2
                return
        }

        @Override
        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = "send ping.."
                return r0
        }

        @Override
        public void a() {
                r3 = this;
                com.xiaomi.push.service.XMPushService r0 = r3.a
                boolean r0 = r0.c()
                if (r0 == 0) goto L26
                boolean r0 = r3.a     // Catch: com.xiaomi.push.gh -> L1b
                if (r0 != 0) goto Lf
                com.xiaomi.push.fj.a()     // Catch: com.xiaomi.push.gh -> L1b
            Lf:
                com.xiaomi.push.service.XMPushService r0 = r3.a     // Catch: com.xiaomi.push.gh -> L1b
                com.xiaomi.push.fw r0 = com.xiaomi.push.service.XMPushService.a(r0)     // Catch: com.xiaomi.push.gh -> L1b
                boolean r1 = r3.a     // Catch: com.xiaomi.push.gh -> L1b
                r0.b(r1)     // Catch: com.xiaomi.push.gh -> L1b
                goto L26
            L1b:
                r0 = move-exception
                com.xiaomi.channel.commonutils.logger.b.a(r0)
                com.xiaomi.push.service.XMPushService r1 = r3.a
                r2 = 10
                r1.a(r2, r0)
            L26:
                return
        }
    }

    class p extends com.xiaomi.push.service.XMPushService.j {
        final com.xiaomi.push.service.XMPushService a;
        com.xiaomi.push.service.bg.b a;

        public p(com.xiaomi.push.service.XMPushService r1, com.xiaomi.push.service.bg.b r2) {
                r0 = this;
                r0.a = r1
                r1 = 4
                r0.<init>(r1)
                r1 = 0
                r0.a = r1
                r0.a = r2
                return
        }

        @Override
        public java.lang.String a() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "rebind the client. "
                r0.append(r1)
                com.xiaomi.push.service.bg$b r1 = r2.a
                java.lang.String r1 = r1.g
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        @Override
        public void a() {
                r6 = this;
                com.xiaomi.push.service.bg$b r0 = r6.a     // Catch: com.xiaomi.push.gh -> L2e
                com.xiaomi.push.service.bg$c r1 = com.xiaomi.push.service.bg.c.a     // Catch: com.xiaomi.push.gh -> L2e
                r2 = 1
                r3 = 16
                r4 = 0
                r5 = 0
                r0.a(r1, r2, r3, r4, r5)     // Catch: com.xiaomi.push.gh -> L2e
                com.xiaomi.push.service.XMPushService r0 = r6.a     // Catch: com.xiaomi.push.gh -> L2e
                com.xiaomi.push.fw r0 = com.xiaomi.push.service.XMPushService.a(r0)     // Catch: com.xiaomi.push.gh -> L2e
                com.xiaomi.push.service.bg$b r1 = r6.a     // Catch: com.xiaomi.push.gh -> L2e
                java.lang.String r1 = r1.g     // Catch: com.xiaomi.push.gh -> L2e
                com.xiaomi.push.service.bg$b r2 = r6.a     // Catch: com.xiaomi.push.gh -> L2e
                java.lang.String r2 = r2.b     // Catch: com.xiaomi.push.gh -> L2e
                r0.a(r1, r2)     // Catch: com.xiaomi.push.gh -> L2e
                com.xiaomi.push.service.XMPushService r0 = r6.a     // Catch: com.xiaomi.push.gh -> L2e
                com.xiaomi.push.service.XMPushService$b r1 = new com.xiaomi.push.service.XMPushService$b     // Catch: com.xiaomi.push.gh -> L2e
                com.xiaomi.push.service.XMPushService r2 = r6.a     // Catch: com.xiaomi.push.gh -> L2e
                com.xiaomi.push.service.bg$b r3 = r6.a     // Catch: com.xiaomi.push.gh -> L2e
                r1.<init>(r2, r3)     // Catch: com.xiaomi.push.gh -> L2e
                r2 = 300(0x12c, double:1.48E-321)
                r0.a(r1, r2)     // Catch: com.xiaomi.push.gh -> L2e
                goto L39
            L2e:
                r0 = move-exception
                com.xiaomi.channel.commonutils.logger.b.a(r0)
                com.xiaomi.push.service.XMPushService r1 = r6.a
                r2 = 10
                r1.a(r2, r0)
            L39:
                return
        }
    }

    class q extends com.xiaomi.push.service.XMPushService.j {
        final com.xiaomi.push.service.XMPushService a;

        q(com.xiaomi.push.service.XMPushService r1) {
                r0 = this;
                r0.a = r1
                r1 = 3
                r0.<init>(r1)
                return
        }

        @Override
        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = "reset the connection."
                return r0
        }

        @Override
        public void a() {
                r3 = this;
                com.xiaomi.push.service.XMPushService r0 = r3.a
                r1 = 11
                r2 = 0
                r0.a(r1, r2)
                com.xiaomi.push.service.XMPushService r0 = r3.a
                boolean r0 = r0.a()
                if (r0 == 0) goto L21
                com.xiaomi.push.service.XMPushService r0 = r3.a
                android.content.Context r1 = r0.getApplicationContext()
                boolean r0 = com.xiaomi.push.service.XMPushService.a(r0, r1)
                if (r0 == 0) goto L21
                com.xiaomi.push.service.XMPushService r0 = r3.a
                com.xiaomi.push.service.XMPushService.c(r0)
            L21:
                return
        }
    }

    class r extends android.content.BroadcastReceiver {
        final com.xiaomi.push.service.XMPushService a;

        r(com.xiaomi.push.service.XMPushService r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onReceive(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                com.xiaomi.push.service.XMPushService r2 = r1.a
                r0 = 1
                r2.onStart(r3, r0)
                return
        }
    }

    class s extends com.xiaomi.push.service.XMPushService.j {
        final com.xiaomi.push.service.XMPushService a;
        com.xiaomi.push.service.bg.b a;
        java.lang.String a;
        int b;
        java.lang.String b;

        public s(com.xiaomi.push.service.XMPushService r1, com.xiaomi.push.service.bg.b r2, int r3, java.lang.String r4, java.lang.String r5) {
                r0 = this;
                r0.a = r1
                r1 = 9
                r0.<init>(r1)
                r1 = 0
                r0.a = r1
                r0.a = r2
                r0.b = r3
                r0.a = r4
                r0.b = r5
                return
        }

        @Override
        public java.lang.String a() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "unbind the channel. "
                r0.append(r1)
                com.xiaomi.push.service.bg$b r1 = r2.a
                java.lang.String r1 = r1.g
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        @Override
        public void a() {
                r9 = this;
                com.xiaomi.push.service.bg$b r0 = r9.a
                com.xiaomi.push.service.bg$c r0 = r0.a
                com.xiaomi.push.service.bg$c r1 = com.xiaomi.push.service.bg.c.a
                if (r0 == r1) goto L2d
                com.xiaomi.push.service.XMPushService r0 = r9.a
                com.xiaomi.push.fw r0 = com.xiaomi.push.service.XMPushService.a(r0)
                if (r0 == 0) goto L2d
                com.xiaomi.push.service.XMPushService r0 = r9.a     // Catch: com.xiaomi.push.gh -> L22
                com.xiaomi.push.fw r0 = com.xiaomi.push.service.XMPushService.a(r0)     // Catch: com.xiaomi.push.gh -> L22
                com.xiaomi.push.service.bg$b r1 = r9.a     // Catch: com.xiaomi.push.gh -> L22
                java.lang.String r1 = r1.g     // Catch: com.xiaomi.push.gh -> L22
                com.xiaomi.push.service.bg$b r2 = r9.a     // Catch: com.xiaomi.push.gh -> L22
                java.lang.String r2 = r2.b     // Catch: com.xiaomi.push.gh -> L22
                r0.a(r1, r2)     // Catch: com.xiaomi.push.gh -> L22
                goto L2d
            L22:
                r0 = move-exception
                com.xiaomi.channel.commonutils.logger.b.a(r0)
                com.xiaomi.push.service.XMPushService r1 = r9.a
                r2 = 10
                r1.a(r2, r0)
            L2d:
                com.xiaomi.push.service.bg$b r3 = r9.a
                com.xiaomi.push.service.bg$c r4 = com.xiaomi.push.service.bg.c.a
                int r5 = r9.b
                r6 = 0
                java.lang.String r7 = r9.b
                java.lang.String r8 = r9.a
                r3.a(r4, r5, r6, r7, r8)
                return
        }
    }

    class t extends android.content.BroadcastReceiver {
        final com.xiaomi.push.service.XMPushService a;

        t(com.xiaomi.push.service.XMPushService r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onReceive(android.content.Context r3, android.content.Intent r4) {
                r2 = this;
                com.xiaomi.push.service.XMPushService r3 = r2.a
                boolean r3 = com.xiaomi.push.service.XMPushService.b(r3)
                r0 = 1
                if (r3 != 0) goto Le
                com.xiaomi.push.service.XMPushService r3 = r2.a
                com.xiaomi.push.service.XMPushService.a(r3, r0)
            Le:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r1 = "[HB] wifi changed, "
                r3.append(r1)
                java.lang.String r1 = com.xiaomi.push.m.a(r4)
                r3.append(r1)
                java.lang.String r3 = r3.toString()
                com.xiaomi.channel.commonutils.logger.b.a(r3)
                com.xiaomi.push.service.XMPushService r3 = r2.a
                r3.onStart(r4, r0)
                return
        }
    }

    static {
            return
    }

    public XMPushService() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r2.a = r0
            r2.b = r0
            r0 = 0
            r2.a = r0
            java.lang.Class<com.xiaomi.push.service.XMJobService> r0 = com.xiaomi.push.service.XMJobService.class
            r2.a = r0
            r0 = 0
            r2.a = r0
            r2.a = r0
            r2.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Collection r0 = java.util.Collections.synchronizedCollection(r0)
            r2.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.a = r0
            com.xiaomi.push.service.ci r0 = new com.xiaomi.push.service.ci
            r0.<init>(r2)
            r2.a = r0
            return
    }

    static com.xiaomi.push.fw a(com.xiaomi.push.service.XMPushService r0) {
            com.xiaomi.push.fw r0 = r0.a
            return r0
    }

    static com.xiaomi.push.fw a(com.xiaomi.push.service.XMPushService r0, com.xiaomi.push.fw r1) {
            r0.a = r1
            return r1
    }

    static com.xiaomi.push.fx a(com.xiaomi.push.service.XMPushService r0) {
            com.xiaomi.push.fx r0 = r0.a
            return r0
    }

    private com.xiaomi.push.gn a(com.xiaomi.push.gn r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            java.util.List r1 = r0.a(r5)
            boolean r2 = r1.isEmpty()
            if (r2 == 0) goto L23
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "open channel should be called first before sending a packet, pkg="
        L15:
            r4.append(r6)
            r4.append(r5)
        L1b:
            java.lang.String r4 = r4.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            goto L78
        L23:
            r4.o(r5)
            java.lang.String r5 = r4.k()
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 == 0) goto L3a
            r5 = 0
            java.lang.Object r5 = r1.get(r5)
            java.lang.String r5 = (java.lang.String) r5
            r4.l(r5)
        L3a:
            java.lang.String r1 = r4.m()
            com.xiaomi.push.service.bg$b r0 = r0.a(r5, r1)
            boolean r1 = r3.c()
            if (r1 != 0) goto L50
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "drop a packet as the channel is not connected, chid="
            goto L15
        L50:
            if (r0 == 0) goto L70
            com.xiaomi.push.service.bg$c r1 = r0.a
            com.xiaomi.push.service.bg$c r2 = com.xiaomi.push.service.bg.c.c
            if (r1 == r2) goto L59
            goto L70
        L59:
            java.lang.String r5 = r0.i
            boolean r5 = android.text.TextUtils.equals(r6, r5)
            if (r5 != 0) goto L6f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "invalid session. "
            r4.append(r5)
            r4.append(r6)
            goto L1b
        L6f:
            return r4
        L70:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "drop a packet as the channel is not opened, chid="
            goto L15
        L78:
            r4 = 0
            return r4
    }

    static com.xiaomi.push.service.be a(com.xiaomi.push.service.XMPushService r0) {
            com.xiaomi.push.service.be r0 = r0.a
            return r0
    }

    private com.xiaomi.push.service.bg.b a(java.lang.String r3, android.content.Intent r4) {
            r2 = this;
            java.lang.String r0 = com.xiaomi.push.service.bk.q
            java.lang.String r0 = r4.getStringExtra(r0)
            com.xiaomi.push.service.bg r1 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.service.bg$b r3 = r1.a(r3, r0)
            if (r3 != 0) goto L15
            com.xiaomi.push.service.bg$b r3 = new com.xiaomi.push.service.bg$b
            r3.<init>(r2)
        L15:
            java.lang.String r0 = com.xiaomi.push.service.bk.t
            java.lang.String r0 = r4.getStringExtra(r0)
            r3.g = r0
            java.lang.String r0 = com.xiaomi.push.service.bk.q
            java.lang.String r0 = r4.getStringExtra(r0)
            r3.b = r0
            java.lang.String r0 = com.xiaomi.push.service.bk.v
            java.lang.String r0 = r4.getStringExtra(r0)
            r3.c = r0
            java.lang.String r0 = com.xiaomi.push.service.bk.B
            java.lang.String r0 = r4.getStringExtra(r0)
            r3.a = r0
            java.lang.String r0 = com.xiaomi.push.service.bk.z
            java.lang.String r0 = r4.getStringExtra(r0)
            r3.e = r0
            java.lang.String r0 = com.xiaomi.push.service.bk.A
            java.lang.String r0 = r4.getStringExtra(r0)
            r3.f = r0
            java.lang.String r0 = com.xiaomi.push.service.bk.y
            r1 = 0
            boolean r0 = r4.getBooleanExtra(r0, r1)
            r3.a = r0
            java.lang.String r0 = com.xiaomi.push.service.bk.x
            java.lang.String r0 = r4.getStringExtra(r0)
            r3.h = r0
            java.lang.String r0 = com.xiaomi.push.service.bk.F
            java.lang.String r0 = r4.getStringExtra(r0)
            r3.i = r0
            java.lang.String r0 = com.xiaomi.push.service.bk.w
            java.lang.String r0 = r4.getStringExtra(r0)
            r3.d = r0
            com.xiaomi.push.service.j r0 = r2.a
            r3.a = r0
            java.lang.String r0 = com.xiaomi.push.service.bk.J
            android.os.Parcelable r4 = r4.getParcelableExtra(r0)
            android.os.Messenger r4 = (android.os.Messenger) r4
            r3.a(r4)
            android.content.Context r4 = r2.getApplicationContext()
            r3.a = r4
            com.xiaomi.push.service.bg r4 = com.xiaomi.push.service.bg.a()
            r4.a(r3)
            return r3
    }

    static com.xiaomi.push.service.p a(com.xiaomi.push.service.XMPushService r0) {
            com.xiaomi.push.service.p r0 = r0.a
            return r0
    }

    private java.lang.String a() {
            r2 = this;
            java.lang.String r0 = "ro.miui.region"
            java.lang.String r0 = com.xiaomi.push.m.a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L12
            java.lang.String r0 = "ro.product.locale.region"
            java.lang.String r0 = com.xiaomi.push.m.a(r0)
        L12:
            return r0
    }

    static java.lang.String a(com.xiaomi.push.service.XMPushService r0) {
            java.lang.String r0 = r0.a
            return r0
    }

    private void a(android.content.BroadcastReceiver r1) {
            r0 = this;
            if (r1 == 0) goto La
            r0.unregisterReceiver(r1)     // Catch: java.lang.IllegalArgumentException -> L6
            goto La
        L6:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        La:
            return
    }

    private void a(android.content.Intent r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            android.os.Bundle r2 = r2.getExtras()
            if (r2 == 0) goto L1a
            java.lang.String r0 = "digest"
            java.lang.String r2 = r2.getString(r0)
            android.content.Context r0 = r1.getApplicationContext()
            com.xiaomi.push.service.o r0 = com.xiaomi.push.service.o.a(r0)
            r0.a(r2)
        L1a:
            return
    }

    private void a(android.content.Intent r5, int r6) {
            r4 = this;
            java.lang.String r0 = "mipush_payload"
            byte[] r0 = r5.getByteArrayExtra(r0)
            java.lang.String r1 = "com.xiaomi.mipush.MESSAGE_CACHE"
            r2 = 1
            boolean r5 = r5.getBooleanExtra(r1, r2)
            com.xiaomi.push.ii r1 = new com.xiaomi.push.ii
            r1.<init>()
            com.xiaomi.push.it.a(r1, r0)     // Catch: com.xiaomi.push.iz -> L2b
            android.content.Context r0 = r4.getApplicationContext()     // Catch: com.xiaomi.push.iz -> L2b
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r0)     // Catch: com.xiaomi.push.iz -> L2b
            com.xiaomi.push.service.b r2 = new com.xiaomi.push.service.b     // Catch: com.xiaomi.push.iz -> L2b
            java.lang.ref.WeakReference r3 = new java.lang.ref.WeakReference     // Catch: com.xiaomi.push.iz -> L2b
            r3.<init>(r4)     // Catch: com.xiaomi.push.iz -> L2b
            r2.<init>(r1, r3, r5)     // Catch: com.xiaomi.push.iz -> L2b
            r0.a(r2, r6)     // Catch: com.xiaomi.push.iz -> L2b
            goto L30
        L2b:
            java.lang.String r5 = "aw_ping : send help app ping  error"
            com.xiaomi.channel.commonutils.logger.b.d(r5)
        L30:
            return
    }

    static void a(com.xiaomi.push.service.XMPushService r0) {
            r0.e()
            return
    }

    static void a(com.xiaomi.push.service.XMPushService r0, android.content.Intent r1) {
            r0.d(r1)
            return
    }

    private void a(com.xiaomi.push.service.a r4) {
            r3 = this;
            if (r4 == 0) goto L61
            java.lang.String r0 = r4.b()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L61
            java.lang.String r0 = r4.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L61
            java.lang.String r0 = r3.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L27
            java.lang.String r0 = r3.a()
            goto L2b
        L27:
            java.lang.String r0 = com.xiaomi.push.m.b()
        L2b:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L5e
            com.xiaomi.push.q r1 = com.xiaomi.push.m.a(r0)
            java.lang.String r1 = r1.name()
            java.lang.String r2 = r4.a()
            boolean r2 = android.text.TextUtils.equals(r1, r2)
            if (r2 == 0) goto L49
            r4.b(r0)
            java.lang.String r4 = "update country code"
            goto L5a
        L49:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "not update country code, because not equals "
            r4.append(r0)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
        L5a:
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            goto L66
        L5e:
            java.lang.String r4 = "check no country code"
            goto L63
        L61:
            java.lang.String r4 = "no need to check country code"
        L63:
            com.xiaomi.channel.commonutils.logger.b.b(r4)
        L66:
            return
    }

    private static void a(java.lang.String r1) {
            com.xiaomi.push.q r0 = com.xiaomi.push.q.a
            java.lang.String r0 = r0.name()
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L2f
            java.lang.String r1 = "cn.app.chat.xiaomi.net"
            com.xiaomi.push.cv.a(r1, r1)
            java.lang.String r0 = "111.13.141.211:443"
            com.xiaomi.push.cv.a(r1, r0)
            java.lang.String r0 = "39.156.81.172:443"
            com.xiaomi.push.cv.a(r1, r0)
            java.lang.String r0 = "111.202.1.250:443"
            com.xiaomi.push.cv.a(r1, r0)
            java.lang.String r0 = "123.125.102.213:443"
            com.xiaomi.push.cv.a(r1, r0)
            java.lang.String r1 = "resolver.msg.xiaomi.net"
            java.lang.String r0 = "111.13.142.153:443"
            com.xiaomi.push.cv.a(r1, r0)
            java.lang.String r0 = "111.202.1.252:443"
            goto L3d
        L2f:
            java.lang.String r1 = "app.chat.global.xiaomi.net"
            com.xiaomi.push.cv.a(r1, r1)
            java.lang.String r1 = "resolver.msg.global.xiaomi.net"
            java.lang.String r0 = "161.117.97.14:443"
            com.xiaomi.push.cv.a(r1, r0)
            java.lang.String r0 = "161.117.180.178:443"
        L3d:
            com.xiaomi.push.cv.a(r1, r0)
            return
    }

    private void a(java.lang.String r9, int r10) {
            r8 = this;
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            java.util.Collection r0 = r0.a(r9)
            if (r0 == 0) goto L2b
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2b
            java.lang.Object r1 = r0.next()
            r4 = r1
            com.xiaomi.push.service.bg$b r4 = (com.xiaomi.push.service.bg.b) r4
            if (r4 == 0) goto Le
            com.xiaomi.push.service.XMPushService$s r1 = new com.xiaomi.push.service.XMPushService$s
            r6 = 0
            r7 = 0
            r2 = r1
            r3 = r8
            r5 = r10
            r2.<init>(r3, r4, r5, r6, r7)
            r8.a(r1)
            goto Le
        L2b:
            com.xiaomi.push.service.bg r10 = com.xiaomi.push.service.bg.a()
            r10.a(r9)
            return
    }

    private boolean a(android.content.Context r6) {
            r5 = this;
            r0 = 1
            com.xiaomi.push.ar.a()     // Catch: java.lang.Exception -> L1e
            r1 = 0
            r2 = 100
        L7:
            if (r2 <= 0) goto L1d
            boolean r3 = com.xiaomi.push.bj.c(r6)
            if (r3 == 0) goto L15
            java.lang.String r6 = "network connectivity ok."
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            goto L1e
        L15:
            r3 = 100
            java.lang.Thread.sleep(r3)     // Catch: java.lang.Exception -> L1a
        L1a:
            int r2 = r2 + (-1)
            goto L7
        L1d:
            r0 = r1
        L1e:
            return r0
    }

    static boolean a(com.xiaomi.push.service.XMPushService r0) {
            boolean r0 = r0.g()
            return r0
    }

    static boolean a(com.xiaomi.push.service.XMPushService r0, android.content.Context r1) {
            boolean r0 = r0.a(r1)
            return r0
    }

    static boolean a(com.xiaomi.push.service.XMPushService r0, boolean r1) {
            r0.a = r1
            return r1
    }

    private boolean a(java.lang.String r6, android.content.Intent r7) {
            r5 = this;
            java.lang.String r0 = com.xiaomi.push.service.bk.q
            java.lang.String r0 = r7.getStringExtra(r0)
            com.xiaomi.push.service.bg r1 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.service.bg$b r0 = r1.a(r6, r0)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L80
            if (r6 == 0) goto L80
            java.lang.String r3 = com.xiaomi.push.service.bk.F
            java.lang.String r3 = r7.getStringExtra(r3)
            java.lang.String r4 = com.xiaomi.push.service.bk.x
            java.lang.String r7 = r7.getStringExtra(r4)
            java.lang.String r4 = r0.i
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L57
            java.lang.String r4 = r0.i
            boolean r4 = android.text.TextUtils.equals(r3, r4)
            if (r4 != 0) goto L57
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "session changed. old session="
            r2.append(r4)
            java.lang.String r4 = r0.i
            r2.append(r4)
            java.lang.String r4 = ", new session="
            r2.append(r4)
            r2.append(r3)
            java.lang.String r3 = " chid = "
            r2.append(r3)
            r2.append(r6)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            r2 = r1
        L57:
            java.lang.String r0 = r0.h
            boolean r0 = r7.equals(r0)
            if (r0 != 0) goto L80
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "security changed. chid = "
            r0.append(r2)
            r0.append(r6)
            java.lang.String r6 = " sechash = "
            r0.append(r6)
            java.lang.String r6 = com.xiaomi.push.bo.a(r7)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            goto L81
        L80:
            r1 = r2
        L81:
            return r1
    }

    private int[] a() {
            r6 = this;
            android.content.Context r0 = r6.getApplicationContext()
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r0)
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.aN
            int r1 = r1.a()
            java.lang.String r2 = ""
            java.lang.String r0 = r0.a(r1, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L71
            java.lang.String r1 = ","
            java.lang.String[] r0 = r0.split(r1)
            if (r0 == 0) goto L71
            int r1 = r0.length
            r3 = 2
            if (r1 < r3) goto L71
            int[] r1 = new int[r3]
            r3 = 0
            r4 = r0[r3]     // Catch: java.lang.NumberFormatException -> L5c
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.NumberFormatException -> L5c
            int r4 = r4.intValue()     // Catch: java.lang.NumberFormatException -> L5c
            r1[r3] = r4     // Catch: java.lang.NumberFormatException -> L5c
            r4 = 1
            r0 = r0[r4]     // Catch: java.lang.NumberFormatException -> L5c
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.NumberFormatException -> L5c
            int r0 = r0.intValue()     // Catch: java.lang.NumberFormatException -> L5c
            r1[r4] = r0     // Catch: java.lang.NumberFormatException -> L5c
            r0 = r1[r3]     // Catch: java.lang.NumberFormatException -> L5c
            if (r0 < 0) goto L71
            r0 = r1[r3]     // Catch: java.lang.NumberFormatException -> L5c
            r5 = 23
            if (r0 > r5) goto L71
            r0 = r1[r4]     // Catch: java.lang.NumberFormatException -> L5c
            if (r0 < 0) goto L71
            r0 = r1[r4]     // Catch: java.lang.NumberFormatException -> L5c
            if (r0 > r5) goto L71
            r0 = r1[r3]     // Catch: java.lang.NumberFormatException -> L5c
            r3 = r1[r4]     // Catch: java.lang.NumberFormatException -> L5c
            if (r0 == r3) goto L71
            return r1
        L5c:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "parse falldown time range failure: "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r0)
        L71:
            return r2
    }

    private java.lang.String b() {
            r9 = this;
            com.xiaomi.push.ar.a()
            long r0 = android.os.SystemClock.elapsedRealtime()
            java.lang.Object r2 = new java.lang.Object
            r2.<init>()
            java.lang.String r3 = r9.getPackageName()
            java.lang.String r4 = "com.xiaomi.xmsf"
            boolean r3 = r4.equals(r3)
            r4 = 0
            r5 = 0
            if (r3 == 0) goto L53
            com.xiaomi.push.service.bn r3 = com.xiaomi.push.service.bn.a(r9)
            r6 = r4
        L1f:
            boolean r7 = android.text.TextUtils.isEmpty(r6)
            if (r7 != 0) goto L31
            int r7 = r3.a()
            if (r7 != 0) goto L2c
            goto L31
        L2c:
            java.lang.String r2 = r9.a()
            goto L57
        L31:
            boolean r7 = android.text.TextUtils.isEmpty(r6)
            if (r7 == 0) goto L3b
            java.lang.String r6 = r9.a()
        L3b:
            monitor-enter(r2)     // Catch: java.lang.InterruptedException -> L50
            r7 = 30
            if (r5 >= r7) goto L46
            r7 = 1000(0x3e8, double:4.94E-321)
            r2.wait(r7)     // Catch: java.lang.Throwable -> L4d
            goto L4b
        L46:
            r7 = 30000(0x7530, double:1.4822E-319)
            r2.wait(r7)     // Catch: java.lang.Throwable -> L4d
        L4b:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L4d
            goto L50
        L4d:
            r7 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L4d
            throw r7     // Catch: java.lang.InterruptedException -> L50
        L50:
            int r5 = r5 + 1
            goto L1f
        L53:
            java.lang.String r2 = com.xiaomi.push.m.b()
        L57:
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L70
            android.content.Context r3 = r9.getApplicationContext()
            com.xiaomi.push.service.a r3 = com.xiaomi.push.service.a.a(r3)
            r3.b(r2)
            com.xiaomi.push.q r2 = com.xiaomi.push.m.a(r2)
            java.lang.String r4 = r2.name()
        L70:
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r2 = r2 - r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "wait region :"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " cost = "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = " , count = "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            return r4
    }

    private void b(android.content.Intent r15) {
            r14 = this;
            java.lang.String r0 = com.xiaomi.push.service.bk.B
            java.lang.String r0 = r15.getStringExtra(r0)
            java.lang.String r1 = com.xiaomi.push.service.bk.F
            java.lang.String r1 = r15.getStringExtra(r1)
            java.lang.String r2 = "ext_packet"
            android.os.Bundle r2 = r15.getBundleExtra(r2)
            com.xiaomi.push.service.bg r3 = com.xiaomi.push.service.bg.a()
            r4 = 0
            if (r2 == 0) goto L3b
            com.xiaomi.push.gm r15 = new com.xiaomi.push.gm
            r15.<init>(r2)
            com.xiaomi.push.gn r15 = r14.a(r15, r0, r1)
            com.xiaomi.push.gm r15 = (com.xiaomi.push.gm) r15
            if (r15 != 0) goto L27
            return
        L27:
            java.lang.String r0 = r15.k()
            java.lang.String r1 = r15.m()
            com.xiaomi.push.service.bg$b r0 = r3.a(r0, r1)
            java.lang.String r0 = r0.h
            com.xiaomi.push.fl r4 = com.xiaomi.push.fl.a(r15, r0)
            goto L106
        L3b:
            java.lang.String r0 = "ext_raw_packet"
            byte[] r0 = r15.getByteArrayExtra(r0)
            if (r0 == 0) goto L106
            java.lang.String r1 = com.xiaomi.push.service.bk.q     // Catch: java.lang.NumberFormatException -> L4e
            java.lang.String r1 = r15.getStringExtra(r1)     // Catch: java.lang.NumberFormatException -> L4e
            long r1 = java.lang.Long.parseLong(r1)     // Catch: java.lang.NumberFormatException -> L4e
            goto L50
        L4e:
            r1 = 0
        L50:
            java.lang.String r5 = com.xiaomi.push.service.bk.r
            java.lang.String r5 = r15.getStringExtra(r5)
            java.lang.String r6 = com.xiaomi.push.service.bk.s
            java.lang.String r6 = r15.getStringExtra(r6)
            java.lang.String r7 = "ext_chid"
            java.lang.String r7 = r15.getStringExtra(r7)
            java.lang.String r8 = java.lang.String.valueOf(r1)
            com.xiaomi.push.service.bg$b r3 = r3.a(r7, r8)
            if (r3 == 0) goto L106
            com.xiaomi.push.fl r8 = new com.xiaomi.push.fl
            r8.<init>()
            java.lang.String r9 = "10"
            boolean r10 = r9.equals(r7)
            if (r10 == 0) goto Lc0
            int r9 = java.lang.Integer.parseInt(r9)
            r8.b(r9)
            com.xiaomi.push.service.ao r9 = r8.a
            r10 = 1
            java.lang.String r11 = "screen_on"
            boolean r11 = r15.getBooleanExtra(r11, r10)
            r9.a = r11
            com.xiaomi.push.service.ao r9 = r8.a
            java.lang.String r11 = "wifi"
            boolean r10 = r15.getBooleanExtra(r11, r10)
            r9.b = r10
            com.xiaomi.push.service.ao r9 = r8.a
            r10 = -1
            java.lang.String r12 = "rx_msg"
            long r12 = r15.getLongExtra(r12, r10)
            r9.a = r12
            com.xiaomi.push.service.ao r9 = r8.a
            java.lang.String r12 = "enqueue"
            long r12 = r15.getLongExtra(r12, r10)
            r9.b = r12
            com.xiaomi.push.service.ao r9 = r8.a
            r12 = -1
            java.lang.String r13 = "num"
            int r12 = r15.getIntExtra(r13, r12)
            r9.b = r12
            com.xiaomi.push.service.ao r9 = r8.a
            java.lang.String r12 = "run"
            long r10 = r15.getLongExtra(r12, r10)
            r9.c = r10
        Lc0:
            int r9 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.NumberFormatException -> Lc7
            r8.a(r9)     // Catch: java.lang.NumberFormatException -> Lc7
        Lc7:
            java.lang.String r9 = "SECMSG"
            r8.a(r9, r4)
            boolean r4 = android.text.TextUtils.isEmpty(r5)
            if (r4 == 0) goto Ld4
            java.lang.String r5 = "xiaomi.com"
        Ld4:
            r8.a(r1, r5, r6)
            java.lang.String r1 = "ext_pkt_id"
            java.lang.String r2 = r15.getStringExtra(r1)
            r8.a(r2)
            java.lang.String r2 = r3.h
            r8.a(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "send a message: chid="
            r0.append(r2)
            r0.append(r7)
            java.lang.String r2 = ", packetId="
            r0.append(r2)
            java.lang.String r15 = r15.getStringExtra(r1)
            r0.append(r15)
            java.lang.String r15 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r15)
            r4 = r8
        L106:
            if (r4 == 0) goto L110
            com.xiaomi.push.service.bt r15 = new com.xiaomi.push.service.bt
            r15.<init>(r14, r4)
            r14.c(r15)
        L110:
            return
    }

    static void b(com.xiaomi.push.service.XMPushService r0) {
            r0.c()
            return
    }

    private void b(boolean r4) {
            r3 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            r3.a = r0
            boolean r0 = r3.c()
            r1 = 1
            if (r0 != 0) goto L11
        Ld:
            r3.a(r1)
            goto L2c
        L11:
            boolean r0 = com.xiaomi.push.bj.b(r3)
            if (r0 == 0) goto L20
            com.xiaomi.push.service.XMPushService$o r0 = new com.xiaomi.push.service.XMPushService$o
            r0.<init>(r3, r4)
            r3.c(r0)
            goto L2c
        L20:
            com.xiaomi.push.service.XMPushService$g r4 = new com.xiaomi.push.service.XMPushService$g
            r0 = 17
            r2 = 0
            r4.<init>(r3, r0, r2)
            r3.c(r4)
            goto Ld
        L2c:
            return
    }

    static boolean b(com.xiaomi.push.service.XMPushService r0) {
            boolean r0 = r0.a
            return r0
    }

    private void c() {
            r4 = this;
            android.content.Context r0 = r4.getApplicationContext()
            com.xiaomi.push.service.a r0 = com.xiaomi.push.service.a.a(r0)
            java.lang.String r1 = r0.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "region of cache is "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L2b
            java.lang.String r1 = r4.b()
            goto L2e
        L2b:
            r4.a(r0)
        L2e:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L80
            r4.a = r1
            r0.a(r1)
            com.xiaomi.push.q r0 = com.xiaomi.push.q.b
            java.lang.String r0 = r0.name()
            java.lang.String r1 = r4.a
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L4d
            java.lang.String r0 = "app.chat.global.xiaomi.net"
        L49:
            com.xiaomi.push.fx.a(r0)
            goto L88
        L4d:
            com.xiaomi.push.q r0 = com.xiaomi.push.q.c
            java.lang.String r0 = r0.name()
            java.lang.String r1 = r4.a
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L5e
            java.lang.String r0 = "fr.app.chat.global.xiaomi.net"
            goto L49
        L5e:
            com.xiaomi.push.q r0 = com.xiaomi.push.q.d
            java.lang.String r0 = r0.name()
            java.lang.String r1 = r4.a
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L6f
            java.lang.String r0 = "ru.app.chat.global.xiaomi.net"
            goto L49
        L6f:
            com.xiaomi.push.q r0 = com.xiaomi.push.q.e
            java.lang.String r0 = r0.name()
            java.lang.String r1 = r4.a
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L88
            java.lang.String r0 = "idmb.app.chat.global.xiaomi.net"
            goto L49
        L80:
            com.xiaomi.push.q r0 = com.xiaomi.push.q.a
            java.lang.String r0 = r0.name()
            r4.a = r0
        L88:
            com.xiaomi.push.q r0 = com.xiaomi.push.q.a
            java.lang.String r0 = r0.name()
            java.lang.String r1 = r4.a
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L9b
            java.lang.String r0 = "cn.app.chat.xiaomi.net"
            com.xiaomi.push.fx.a(r0)
        L9b:
            java.lang.String r0 = r4.a
            a(r0)
            boolean r0 = r4.h()
            if (r0 == 0) goto Lb8
            com.xiaomi.push.service.cs r0 = new com.xiaomi.push.service.cs
            r1 = 11
            r0.<init>(r4, r1)
            r4.a(r0)
            com.xiaomi.push.service.ct r1 = new com.xiaomi.push.service.ct
            r1.<init>(r4, r0)
            com.xiaomi.push.service.u.a(r1)
        Lb8:
            boolean r0 = com.xiaomi.push.v.a()     // Catch: java.lang.Exception -> Lc4
            if (r0 == 0) goto Lc8
            com.xiaomi.push.service.j r0 = r4.a     // Catch: java.lang.Exception -> Lc4
            r0.a(r4)     // Catch: java.lang.Exception -> Lc4
            goto Lc8
        Lc4:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        Lc8:
            return
    }

    private void c(android.content.Intent r9) {
            r8 = this;
            java.lang.String r0 = com.xiaomi.push.service.bk.B
            java.lang.String r0 = r9.getStringExtra(r0)
            java.lang.String r1 = com.xiaomi.push.service.bk.F
            java.lang.String r1 = r9.getStringExtra(r1)
            java.lang.String r2 = "ext_packets"
            android.os.Parcelable[] r2 = r9.getParcelableArrayExtra(r2)
            int r3 = r2.length
            com.xiaomi.push.gm[] r4 = new com.xiaomi.push.gm[r3]
            r5 = 1
            java.lang.String r6 = "ext_encrypt"
            r9.getBooleanExtra(r6, r5)
            r9 = 0
            r5 = r9
        L1d:
            int r6 = r2.length
            if (r5 >= r6) goto L3d
            com.xiaomi.push.gm r6 = new com.xiaomi.push.gm
            r7 = r2[r5]
            android.os.Bundle r7 = (android.os.Bundle) r7
            r6.<init>(r7)
            r4[r5] = r6
            r6 = r4[r5]
            com.xiaomi.push.gn r6 = r8.a(r6, r0, r1)
            com.xiaomi.push.gm r6 = (com.xiaomi.push.gm) r6
            r4[r5] = r6
            r6 = r4[r5]
            if (r6 != 0) goto L3a
            return
        L3a:
            int r5 = r5 + 1
            goto L1d
        L3d:
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.fl[] r1 = new com.xiaomi.push.fl[r3]
        L43:
            if (r9 >= r3) goto L5e
            r2 = r4[r9]
            java.lang.String r5 = r2.k()
            java.lang.String r6 = r2.m()
            com.xiaomi.push.service.bg$b r5 = r0.a(r5, r6)
            java.lang.String r5 = r5.h
            com.xiaomi.push.fl r2 = com.xiaomi.push.fl.a(r2, r5)
            r1[r9] = r2
            int r9 = r9 + 1
            goto L43
        L5e:
            com.xiaomi.push.service.c r9 = new com.xiaomi.push.service.c
            r9.<init>(r8, r1)
            r8.c(r9)
            return
    }

    private void c(com.xiaomi.push.service.XMPushService.j r2) {
            r1 = this;
            com.xiaomi.push.service.p r0 = r1.a
            r0.a(r2)
            return
    }

    static void c(com.xiaomi.push.service.XMPushService r0) {
            r0.f()
            return
    }

    private void c(boolean r4) {
            r3 = this;
            boolean r0 = com.xiaomi.push.v.a()     // Catch: java.lang.Exception -> L33
            if (r0 == 0) goto L37
            if (r4 == 0) goto L28
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "miui.intent.action.NETWORK_CONNECTED"
            r4.<init>(r0)     // Catch: java.lang.Exception -> L33
            r3.sendBroadcast(r4)     // Catch: java.lang.Exception -> L33
            java.util.Collection<com.xiaomi.push.service.ar> r4 = r3.a     // Catch: java.lang.Exception -> L33
            r0 = 0
            com.xiaomi.push.service.ar[] r1 = new com.xiaomi.push.service.ar[r0]     // Catch: java.lang.Exception -> L33
            java.lang.Object[] r4 = r4.toArray(r1)     // Catch: java.lang.Exception -> L33
            com.xiaomi.push.service.ar[] r4 = (com.xiaomi.push.service.ar[]) r4     // Catch: java.lang.Exception -> L33
            int r1 = r4.length     // Catch: java.lang.Exception -> L33
        L1e:
            if (r0 >= r1) goto L37
            r2 = r4[r0]     // Catch: java.lang.Exception -> L33
            r2.a()     // Catch: java.lang.Exception -> L33
            int r0 = r0 + 1
            goto L1e
        L28:
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "miui.intent.action.NETWORK_BLOCKED"
            r4.<init>(r0)     // Catch: java.lang.Exception -> L33
            r3.sendBroadcast(r4)     // Catch: java.lang.Exception -> L33
            goto L37
        L33:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        L37:
            return
    }

    private void d() {
            r5 = this;
            r0 = 0
            java.lang.String r1 = "connectivity"
            java.lang.Object r1 = r5.getSystemService(r1)     // Catch: java.lang.Exception -> Le
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Exception -> Le
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> Le
            goto L13
        Le:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            r1 = r0
        L13:
            android.content.Context r2 = r5.getApplicationContext()
            com.xiaomi.push.service.o r2 = com.xiaomi.push.service.o.a(r2)
            r2.a(r1)
            if (r1 == 0) goto L7a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "["
            r2.<init>(r3)
            java.lang.String r4 = "type: "
            r2.append(r4)
            java.lang.String r4 = r1.getTypeName()
            r2.append(r4)
            r2.append(r3)
            java.lang.String r3 = r1.getSubtypeName()
            r2.append(r3)
            java.lang.String r3 = "], state: "
            r2.append(r3)
            android.net.NetworkInfo$State r3 = r1.getState()
            r2.append(r3)
            java.lang.String r3 = "/"
            r2.append(r3)
            android.net.NetworkInfo$DetailedState r3 = r1.getDetailedState()
            r2.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "network changed,"
            r3.append(r4)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            android.net.NetworkInfo$State r1 = r1.getState()
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.SUSPENDED
            if (r1 == r2) goto L79
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.UNKNOWN
            if (r1 != r2) goto L7f
        L79:
            return
        L7a:
            java.lang.String r1 = "network changed, no active network"
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L7f:
            com.xiaomi.push.fg r1 = com.xiaomi.push.fh.a()
            if (r1 == 0) goto L8c
            com.xiaomi.push.fg r1 = com.xiaomi.push.fh.a()
            r1.a()
        L8c:
            com.xiaomi.push.hb.a(r5)
            com.xiaomi.push.fs r1 = r5.a
            r1.d()
            boolean r1 = com.xiaomi.push.bj.b(r5)
            if (r1 == 0) goto Lcc
            boolean r0 = r5.c()
            if (r0 == 0) goto Laa
            boolean r0 = r5.f()
            if (r0 == 0) goto Laa
            r0 = 0
            r5.b(r0)
        Laa:
            boolean r0 = r5.c()
            if (r0 != 0) goto Lc4
            boolean r0 = r5.d()
            if (r0 != 0) goto Lc4
            com.xiaomi.push.service.p r0 = r5.a
            r1 = 1
            r0.a(r1)
            com.xiaomi.push.service.XMPushService$e r0 = new com.xiaomi.push.service.XMPushService$e
            r0.<init>(r5)
            r5.a(r0)
        Lc4:
            com.xiaomi.push.df r0 = com.xiaomi.push.df.a(r5)
            r0.a()
            goto Ld5
        Lcc:
            com.xiaomi.push.service.XMPushService$g r1 = new com.xiaomi.push.service.XMPushService$g
            r2 = 2
            r1.<init>(r5, r2, r0)
            r5.a(r1)
        Ld5:
            r5.e()
            return
    }

    private void d(android.content.Intent r12) {
            r11 = this;
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            java.lang.String r1 = com.xiaomi.push.service.bk.d
            java.lang.String r2 = r12.getAction()
            boolean r1 = r1.equalsIgnoreCase(r2)
            r2 = 2
            r3 = 1
            r4 = 0
            if (r1 != 0) goto L887
            java.lang.String r1 = com.xiaomi.push.service.bk.j
            java.lang.String r5 = r12.getAction()
            boolean r1 = r1.equalsIgnoreCase(r5)
            if (r1 == 0) goto L21
            goto L887
        L21:
            java.lang.String r1 = com.xiaomi.push.service.bk.i
            java.lang.String r5 = r12.getAction()
            boolean r1 = r1.equalsIgnoreCase(r5)
            if (r1 == 0) goto L91
            java.lang.String r1 = com.xiaomi.push.service.bk.B
            java.lang.String r1 = r12.getStringExtra(r1)
            java.lang.String r3 = com.xiaomi.push.service.bk.t
            java.lang.String r5 = r12.getStringExtra(r3)
            java.lang.String r3 = com.xiaomi.push.service.bk.q
            java.lang.String r6 = r12.getStringExtra(r3)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r3 = "Service called close channel chid = "
            r12.append(r3)
            r12.append(r5)
            java.lang.String r3 = " res = "
            r12.append(r3)
            java.lang.String r3 = com.xiaomi.push.service.bg.b.a(r6)
            r12.append(r3)
            java.lang.String r12 = r12.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r12)
            boolean r12 = android.text.TextUtils.isEmpty(r5)
            if (r12 == 0) goto L7d
            java.util.List r12 = r0.a(r1)
            java.util.Iterator r12 = r12.iterator()
        L6d:
            boolean r0 = r12.hasNext()
            if (r0 == 0) goto L902
            java.lang.Object r0 = r12.next()
            java.lang.String r0 = (java.lang.String) r0
            r11.a(r0, r2)
            goto L6d
        L7d:
            boolean r12 = android.text.TextUtils.isEmpty(r6)
            if (r12 == 0) goto L88
            r11.a(r5, r2)
            goto L902
        L88:
            r7 = 2
            r8 = 0
            r9 = 0
            r4 = r11
            r4.a(r5, r6, r7, r8, r9)
            goto L902
        L91:
            java.lang.String r1 = com.xiaomi.push.service.bk.e
            java.lang.String r2 = r12.getAction()
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto Lb9
            java.lang.String r0 = "ext_chid"
            java.lang.String r0 = r12.getStringExtra(r0)
            java.lang.String r1 = "10"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Lb4
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = "run"
            r12.putExtra(r2, r0)
        Lb4:
            r11.b(r12)
            goto L902
        Lb9:
            java.lang.String r1 = com.xiaomi.push.service.bk.g
            java.lang.String r2 = r12.getAction()
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 == 0) goto Lca
            r11.c(r12)
            goto L902
        Lca:
            java.lang.String r1 = com.xiaomi.push.service.bk.f
            java.lang.String r2 = r12.getAction()
            boolean r1 = r1.equalsIgnoreCase(r2)
            java.lang.String r2 = "ext_packet"
            if (r1 == 0) goto L10f
            java.lang.String r1 = com.xiaomi.push.service.bk.B
            java.lang.String r1 = r12.getStringExtra(r1)
            java.lang.String r3 = com.xiaomi.push.service.bk.F
            java.lang.String r3 = r12.getStringExtra(r3)
            android.os.Bundle r12 = r12.getBundleExtra(r2)
            com.xiaomi.push.gl r2 = new com.xiaomi.push.gl
            r2.<init>(r12)
            com.xiaomi.push.gn r12 = r11.a(r2, r1, r3)
            if (r12 == 0) goto L902
            java.lang.String r1 = r12.k()
            java.lang.String r2 = r12.m()
            com.xiaomi.push.service.bg$b r0 = r0.a(r1, r2)
            java.lang.String r0 = r0.h
            com.xiaomi.push.fl r12 = com.xiaomi.push.fl.a(r12, r0)
            com.xiaomi.push.service.bt r0 = new com.xiaomi.push.service.bt
            r0.<init>(r11, r12)
        L10a:
            r11.c(r0)
            goto L902
        L10f:
            java.lang.String r1 = com.xiaomi.push.service.bk.h
            java.lang.String r5 = r12.getAction()
            boolean r1 = r1.equalsIgnoreCase(r5)
            if (r1 == 0) goto L14e
            java.lang.String r1 = com.xiaomi.push.service.bk.B
            java.lang.String r1 = r12.getStringExtra(r1)
            java.lang.String r3 = com.xiaomi.push.service.bk.F
            java.lang.String r3 = r12.getStringExtra(r3)
            android.os.Bundle r12 = r12.getBundleExtra(r2)
            com.xiaomi.push.gp r2 = new com.xiaomi.push.gp
            r2.<init>(r12)
            com.xiaomi.push.gn r12 = r11.a(r2, r1, r3)
            if (r12 == 0) goto L902
            java.lang.String r1 = r12.k()
            java.lang.String r2 = r12.m()
            com.xiaomi.push.service.bg$b r0 = r0.a(r1, r2)
            java.lang.String r0 = r0.h
            com.xiaomi.push.fl r12 = com.xiaomi.push.fl.a(r12, r0)
            com.xiaomi.push.service.bt r0 = new com.xiaomi.push.service.bt
            r0.<init>(r11, r12)
            goto L10a
        L14e:
            java.lang.String r1 = com.xiaomi.push.service.bk.k
            java.lang.String r2 = r12.getAction()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L1b7
            java.lang.String r0 = com.xiaomi.push.service.bk.t
            java.lang.String r0 = r12.getStringExtra(r0)
            java.lang.String r1 = com.xiaomi.push.service.bk.q
            java.lang.String r1 = r12.getStringExtra(r1)
            if (r0 == 0) goto L902
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "request reset connection from chid = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            com.xiaomi.push.service.bg r2 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.service.bg$b r0 = r2.a(r0, r1)
            if (r0 == 0) goto L902
            java.lang.String r1 = r0.h
            java.lang.String r2 = com.xiaomi.push.service.bk.x
            java.lang.String r12 = r12.getStringExtra(r2)
            boolean r12 = r1.equals(r12)
            if (r12 == 0) goto L902
            com.xiaomi.push.service.bg$c r12 = r0.a
            com.xiaomi.push.service.bg$c r0 = com.xiaomi.push.service.bg.c.c
            if (r12 != r0) goto L902
            com.xiaomi.push.fw r12 = r11.a()
            if (r12 == 0) goto L1ad
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2 = 15000(0x3a98, double:7.411E-320)
            long r0 = r0 - r2
            boolean r12 = r12.a(r0)
            if (r12 != 0) goto L902
        L1ad:
            com.xiaomi.push.service.XMPushService$q r12 = new com.xiaomi.push.service.XMPushService$q
            r12.<init>(r11)
        L1b2:
            r11.c(r12)
            goto L902
        L1b7:
            java.lang.String r1 = com.xiaomi.push.service.bk.l
            java.lang.String r2 = r12.getAction()
            boolean r1 = r1.equals(r2)
            r2 = 0
            if (r1 == 0) goto L247
            java.lang.String r1 = com.xiaomi.push.service.bk.B
            java.lang.String r1 = r12.getStringExtra(r1)
            java.util.List r3 = r0.a(r1)
            boolean r5 = r3.isEmpty()
            if (r5 == 0) goto L1e9
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r0 = "open channel should be called first before update info, pkg="
            r12.append(r0)
            r12.append(r1)
            java.lang.String r12 = r12.toString()
        L1e5:
            com.xiaomi.channel.commonutils.logger.b.a(r12)
            return
        L1e9:
            java.lang.String r1 = com.xiaomi.push.service.bk.t
            java.lang.String r1 = r12.getStringExtra(r1)
            java.lang.String r5 = com.xiaomi.push.service.bk.q
            java.lang.String r5 = r12.getStringExtra(r5)
            boolean r6 = android.text.TextUtils.isEmpty(r1)
            if (r6 == 0) goto L201
            java.lang.Object r1 = r3.get(r4)
            java.lang.String r1 = (java.lang.String) r1
        L201:
            boolean r3 = android.text.TextUtils.isEmpty(r5)
            if (r3 == 0) goto L21f
            java.util.Collection r0 = r0.a(r1)
            if (r0 == 0) goto L223
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L223
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            r2 = r0
            com.xiaomi.push.service.bg$b r2 = (com.xiaomi.push.service.bg.b) r2
            goto L223
        L21f:
            com.xiaomi.push.service.bg$b r2 = r0.a(r1, r5)
        L223:
            if (r2 == 0) goto L902
            java.lang.String r0 = com.xiaomi.push.service.bk.z
            boolean r0 = r12.hasExtra(r0)
            if (r0 == 0) goto L235
            java.lang.String r0 = com.xiaomi.push.service.bk.z
            java.lang.String r0 = r12.getStringExtra(r0)
            r2.e = r0
        L235:
            java.lang.String r0 = com.xiaomi.push.service.bk.A
            boolean r0 = r12.hasExtra(r0)
            if (r0 == 0) goto L902
            java.lang.String r0 = com.xiaomi.push.service.bk.A
            java.lang.String r12 = r12.getStringExtra(r0)
            r2.f = r12
            goto L902
        L247:
            java.lang.String r0 = r12.getAction()
            java.lang.String r1 = "android.intent.action.SCREEN_ON"
            boolean r0 = r1.equals(r0)
            java.lang.String r5 = "android.intent.action.SCREEN_OFF"
            if (r0 != 0) goto L83e
            java.lang.String r0 = r12.getAction()
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L261
            goto L83e
        L261:
            java.lang.String r0 = r12.getAction()
            java.lang.String r1 = "com.xiaomi.mipush.REGISTER_APP"
            boolean r0 = r1.equals(r0)
            java.lang.String r1 = "com.xiaomi.xmsf"
            java.lang.String r5 = "mipush_payload"
            java.lang.String r6 = "mipush_app_package"
            if (r0 == 0) goto L2de
            android.content.Context r0 = r11.getApplicationContext()
            com.xiaomi.push.service.bn r0 = com.xiaomi.push.service.bn.a(r0)
            boolean r0 = r0.a()
            if (r0 == 0) goto L2a6
            android.content.Context r0 = r11.getApplicationContext()
            com.xiaomi.push.service.bn r0 = com.xiaomi.push.service.bn.a(r0)
            int r0 = r0.a()
            if (r0 != 0) goto L2a6
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "register without being provisioned. "
            r0.append(r1)
            java.lang.String r12 = r12.getStringExtra(r6)
            r0.append(r12)
            java.lang.String r12 = r0.toString()
            goto L1e5
        L2a6:
            byte[] r5 = r12.getByteArrayExtra(r5)
            java.lang.String r6 = r12.getStringExtra(r6)
            java.lang.String r0 = "mipush_env_chanage"
            boolean r0 = r12.getBooleanExtra(r0, r4)
            java.lang.String r2 = "mipush_env_type"
            int r3 = r12.getIntExtra(r2, r3)
            com.xiaomi.push.service.v r12 = com.xiaomi.push.service.v.a(r11)
            r12.d(r6)
            if (r0 == 0) goto L2d9
            java.lang.String r12 = r11.getPackageName()
            boolean r12 = r1.equals(r12)
            if (r12 != 0) goto L2d9
            com.xiaomi.push.service.cu r12 = new com.xiaomi.push.service.cu
            r2 = 14
            r0 = r12
            r1 = r11
            r4 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            goto L1b2
        L2d9:
            r11.a(r5, r6)
            goto L902
        L2de:
            java.lang.String r0 = r12.getAction()
            java.lang.String r7 = "com.xiaomi.mipush.SEND_MESSAGE"
            boolean r0 = r7.equals(r0)
            java.lang.String r7 = "com.xiaomi.mipush.UNREGISTER_APP"
            if (r0 != 0) goto L7ed
            java.lang.String r0 = r12.getAction()
            boolean r0 = r7.equals(r0)
            if (r0 == 0) goto L2f8
            goto L7ed
        L2f8:
            java.lang.String r0 = com.xiaomi.push.service.bo.a
            java.lang.String r7 = r12.getAction()
            boolean r0 = r0.equals(r7)
            java.lang.String r7 = "pref_registered_pkg_names"
            if (r0 == 0) goto L3df
            java.lang.String r0 = "uninstall_pkg_name"
            java.lang.String r12 = r12.getStringExtra(r0)
            if (r12 == 0) goto L3de
            java.lang.String r0 = r12.trim()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L31a
            goto L3de
        L31a:
            android.content.pm.PackageManager r0 = r11.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L346
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r12, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L346
            if (r0 == 0) goto L345
            android.content.pm.ApplicationInfo r1 = r0.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L346
            if (r1 == 0) goto L345
            java.lang.String r0 = r0.packageName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L346
            boolean r0 = com.xiaomi.push.j.a(r11, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L346
            if (r0 == 0) goto L345
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L346
            r0.<init>()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L346
            java.lang.String r1 = "dual space's app uninstalled "
            r0.append(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L346
            r0.append(r12)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L346
            java.lang.String r0 = r0.toString()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L346
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L346
            goto L346
        L345:
            r3 = r4
        L346:
            java.lang.String r0 = "com.xiaomi.channel"
            boolean r0 = r0.equals(r12)
            if (r0 == 0) goto L367
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            java.lang.String r1 = "1"
            java.util.Collection r0 = r0.a(r1)
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L367
            if (r3 == 0) goto L367
            r11.a(r1, r4)
            java.lang.String r12 = "close the miliao channel as the app is uninstalled."
            goto L1e5
        L367:
            android.content.SharedPreferences r0 = r11.getSharedPreferences(r7, r4)
            java.lang.String r1 = r0.getString(r12, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L902
            if (r3 == 0) goto L902
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.remove(r12)
            r0.commit()
            boolean r0 = com.xiaomi.push.service.al.b(r11, r12)
            if (r0 == 0) goto L38a
            com.xiaomi.push.service.al.c(r11, r12)
        L38a:
            com.xiaomi.push.service.al.a(r11, r12)
            android.content.Context r0 = r11.getApplicationContext()
            com.xiaomi.push.service.at.a(r0, r12)
            boolean r0 = r11.c()
            if (r0 == 0) goto L902
            if (r1 == 0) goto L902
            com.xiaomi.push.if r0 = com.xiaomi.push.service.ah.a(r12, r1)     // Catch: com.xiaomi.push.gh -> L3be
            com.xiaomi.push.service.ah.a(r11, r0)     // Catch: com.xiaomi.push.gh -> L3be
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: com.xiaomi.push.gh -> L3be
            r0.<init>()     // Catch: com.xiaomi.push.gh -> L3be
            java.lang.String r1 = "uninstall "
            r0.append(r1)     // Catch: com.xiaomi.push.gh -> L3be
            r0.append(r12)     // Catch: com.xiaomi.push.gh -> L3be
            java.lang.String r12 = " msg sent"
            r0.append(r12)     // Catch: com.xiaomi.push.gh -> L3be
            java.lang.String r12 = r0.toString()     // Catch: com.xiaomi.push.gh -> L3be
            com.xiaomi.channel.commonutils.logger.b.a(r12)     // Catch: com.xiaomi.push.gh -> L3be
            goto L902
        L3be:
            r12 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Fail to send Message: "
            r0.append(r1)
            java.lang.String r1 = r12.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r0)
            r0 = 10
            r11.a(r0, r12)
            goto L902
        L3de:
            return
        L3df:
            java.lang.String r0 = com.xiaomi.push.service.bo.b
            java.lang.String r8 = r12.getAction()
            boolean r0 = r0.equals(r8)
            if (r0 == 0) goto L455
            java.lang.String r0 = "data_cleared_pkg_name"
            java.lang.String r12 = r12.getStringExtra(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            if (r0 == 0) goto L3f8
            return
        L3f8:
            android.content.SharedPreferences r0 = r11.getSharedPreferences(r7, r4)     // Catch: java.lang.Throwable -> L406
            if (r0 == 0) goto L41c
            java.lang.String r1 = r0.getString(r12, r2)     // Catch: java.lang.Throwable -> L404
            r2 = r1
            goto L41c
        L404:
            r1 = move-exception
            goto L408
        L406:
            r1 = move-exception
            r0 = r2
        L408:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Fail to get sp or appId : "
            r4.append(r5)
            r4.append(r1)
            java.lang.String r1 = r4.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L41c:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L443
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.remove(r12)
            r0.commit()
            boolean r0 = com.xiaomi.push.service.al.b(r11, r12)
            if (r0 == 0) goto L435
            com.xiaomi.push.service.al.c(r11, r12)
        L435:
            com.xiaomi.push.service.al.a(r11, r12)
            com.xiaomi.push.if r0 = com.xiaomi.push.service.ah.b(r12, r2)
            byte[] r0 = com.xiaomi.push.it.a(r0)
            r11.a(r12, r0, r3)
        L443:
            com.xiaomi.push.service.at.a(r11, r12)
            android.content.Context r0 = r11.getApplicationContext()
            boolean r0 = com.xiaomi.push.m.a(r0)
            if (r0 == 0) goto L902
            com.xiaomi.push.service.ag.a(r12)
            goto L902
        L455:
            java.lang.String r0 = r12.getAction()
            java.lang.String r7 = "com.xiaomi.mipush.CLEAR_NOTIFICATION"
            boolean r0 = r7.equals(r0)
            if (r0 == 0) goto L493
            java.lang.String r0 = com.xiaomi.push.service.bk.B
            java.lang.String r0 = r12.getStringExtra(r0)
            java.lang.String r1 = com.xiaomi.push.service.bk.C
            r2 = -2
            int r1 = r12.getIntExtra(r1, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L902
            r2 = -1
            if (r1 < r2) goto L482
            java.lang.String r3 = com.xiaomi.push.service.bk.D
            int r12 = r12.getIntExtra(r3, r2)
            com.xiaomi.push.service.al.a(r11, r0, r1, r12)
            goto L902
        L482:
            java.lang.String r1 = com.xiaomi.push.service.bk.H
            java.lang.String r1 = r12.getStringExtra(r1)
            java.lang.String r2 = com.xiaomi.push.service.bk.I
            java.lang.String r12 = r12.getStringExtra(r2)
            com.xiaomi.push.service.al.a(r11, r0, r1, r12)
            goto L902
        L493:
            java.lang.String r0 = r12.getAction()
            java.lang.String r7 = "com.xiaomi.mipush.CLEAR_HEADSUPNOTIFICATION"
            boolean r0 = r7.equals(r0)
            if (r0 == 0) goto L4b0
            java.lang.String r0 = com.xiaomi.push.service.bk.B
            java.lang.String r12 = r12.getStringExtra(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            if (r0 != 0) goto L902
            com.xiaomi.push.service.al.b(r11, r12)
            goto L902
        L4b0:
            java.lang.String r0 = r12.getAction()
            java.lang.String r7 = "com.xiaomi.mipush.SET_NOTIFICATION_TYPE"
            boolean r0 = r7.equals(r0)
            if (r0 == 0) goto L51f
            java.lang.String r0 = com.xiaomi.push.service.bk.B
            java.lang.String r0 = r12.getStringExtra(r0)
            java.lang.String r1 = com.xiaomi.push.service.bk.G
            java.lang.String r1 = r12.getStringExtra(r1)
            java.lang.String r2 = com.xiaomi.push.service.bk.E
            boolean r2 = r12.hasExtra(r2)
            if (r2 == 0) goto L4ec
            java.lang.String r2 = com.xiaomi.push.service.bk.E
            int r12 = r12.getIntExtra(r2, r4)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r12)
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = com.xiaomi.push.bo.b(r2)
            r3 = r4
            r4 = r12
            goto L4f0
        L4ec:
            java.lang.String r2 = com.xiaomi.push.bo.b(r0)
        L4f0:
            boolean r12 = android.text.TextUtils.isEmpty(r0)
            if (r12 != 0) goto L509
            boolean r12 = android.text.TextUtils.equals(r1, r2)
            if (r12 != 0) goto L4fd
            goto L509
        L4fd:
            if (r3 == 0) goto L504
            com.xiaomi.push.service.al.c(r11, r0)
            goto L902
        L504:
            com.xiaomi.push.service.al.b(r11, r0, r4)
            goto L902
        L509:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r1 = "invalid notification for "
            r12.append(r1)
            r12.append(r0)
            java.lang.String r12 = r12.toString()
        L51a:
            com.xiaomi.channel.commonutils.logger.b.d(r12)
            goto L902
        L51f:
            java.lang.String r0 = r12.getAction()
            java.lang.String r7 = "com.xiaomi.mipush.DISABLE_PUSH"
            boolean r0 = r7.equals(r0)
            if (r0 == 0) goto L553
            java.lang.String r12 = r12.getStringExtra(r6)
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            if (r0 != 0) goto L53c
            com.xiaomi.push.service.v r0 = com.xiaomi.push.service.v.a(r11)
            r0.b(r12)
        L53c:
            java.lang.String r12 = r11.getPackageName()
            boolean r12 = r1.equals(r12)
            if (r12 != 0) goto L902
            r12 = 19
            r11.a(r12, r2)
            r11.e()
            r11.stopSelf()
            goto L902
        L553:
            java.lang.String r0 = r12.getAction()
            java.lang.String r2 = "com.xiaomi.mipush.DISABLE_PUSH_MESSAGE"
            boolean r0 = r2.equals(r0)
            java.lang.String r7 = "android.net.conn.CONNECTIVITY_CHANGE"
            java.lang.String r8 = "com.xiaomi.mipush.ENABLE_PUSH_MESSAGE"
            if (r0 != 0) goto L776
            java.lang.String r0 = r12.getAction()
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L56f
            goto L776
        L56f:
            java.lang.String r0 = r12.getAction()
            java.lang.String r2 = "com.xiaomi.mipush.SEND_TINYDATA"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L59a
            java.lang.String r0 = r12.getStringExtra(r6)
            byte[] r12 = r12.getByteArrayExtra(r5)
            com.xiaomi.push.hn r1 = new com.xiaomi.push.hn
            r1.<init>()
            com.xiaomi.push.it.a(r1, r12)     // Catch: com.xiaomi.push.iz -> L594
            com.xiaomi.push.hg r12 = com.xiaomi.push.hg.a(r11)     // Catch: com.xiaomi.push.iz -> L594
            r12.a(r1, r0)     // Catch: com.xiaomi.push.iz -> L594
            goto L902
        L594:
            r12 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r12)
            goto L902
        L59a:
            java.lang.String r0 = r12.getAction()
            java.lang.String r2 = "com.xiaomi.push.timer"
            boolean r0 = r2.equalsIgnoreCase(r0)
            if (r0 == 0) goto L5d5
            java.lang.String r12 = "[Alarm] Service called on timer"
            com.xiaomi.channel.commonutils.logger.b.a(r12)
            boolean r12 = r11.i()
            if (r12 == 0) goto L5c0
            boolean r12 = com.xiaomi.push.eu.a()
            if (r12 == 0) goto L5cc
            java.lang.String r12 = "enter falldown mode, stop alarm"
            com.xiaomi.channel.commonutils.logger.b.a(r12)
            com.xiaomi.push.eu.a()
            goto L5cc
        L5c0:
            com.xiaomi.push.eu.a(r4)
            boolean r12 = r11.f()
            if (r12 == 0) goto L5cc
            r11.b(r4)
        L5cc:
            com.xiaomi.push.service.XMPushService$a r12 = r11.a
            if (r12 == 0) goto L902
            com.xiaomi.push.service.XMPushService.a.a(r12)
            goto L902
        L5d5:
            java.lang.String r0 = r12.getAction()
            java.lang.String r2 = "com.xiaomi.push.check_alive"
            boolean r0 = r2.equalsIgnoreCase(r0)
            if (r0 == 0) goto L5f1
            java.lang.String r12 = "Service called on check alive."
            com.xiaomi.channel.commonutils.logger.b.a(r12)
            boolean r12 = r11.f()
            if (r12 == 0) goto L902
            r11.b(r4)
            goto L902
        L5f1:
            java.lang.String r0 = r12.getAction()
            java.lang.String r2 = "com.xiaomi.mipush.thirdparty"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L622
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "on thirdpart push :"
            r0.append(r1)
            java.lang.String r1 = "com.xiaomi.mipush.thirdparty_DESC"
            java.lang.String r1 = r12.getStringExtra(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.lang.String r0 = "com.xiaomi.mipush.thirdparty_LEVEL"
            int r12 = r12.getIntExtra(r0, r4)
            com.xiaomi.push.eu.a(r11, r12)
            goto L902
        L622:
            java.lang.String r0 = r12.getAction()
            boolean r0 = r7.equals(r0)
            if (r0 == 0) goto L631
            r11.d()
            goto L902
        L631:
            java.lang.String r0 = r12.getAction()
            java.lang.String r2 = "miui.net.wifi.DIGEST_INFORMATION_CHANGED"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L642
            r11.a(r12)
            goto L902
        L642:
            java.lang.String r0 = r12.getAction()
            java.lang.String r2 = "com.xiaomi.xmsf.USE_INTELLIGENT_HB"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L672
            android.os.Bundle r0 = r12.getExtras()
            if (r0 == 0) goto L902
            android.os.Bundle r12 = r12.getExtras()
            java.lang.String r0 = "effectivePeriod"
            int r12 = r12.getInt(r0, r4)
            if (r12 <= 0) goto L902
            r0 = 604800(0x93a80, float:8.47505E-40)
            if (r12 > r0) goto L902
            android.content.Context r0 = r11.getApplicationContext()
            com.xiaomi.push.service.o r0 = com.xiaomi.push.service.o.a(r0)
            r0.a(r12)
            goto L902
        L672:
            java.lang.String r0 = r12.getAction()
            java.lang.String r2 = "action_cr_config"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L6f9
            java.lang.String r0 = "action_cr_event_switch"
            boolean r0 = r12.getBooleanExtra(r0, r4)
            r5 = 86400(0x15180, double:4.26873E-319)
            java.lang.String r2 = "action_cr_event_frequency"
            long r7 = r12.getLongExtra(r2, r5)
            java.lang.String r2 = "action_cr_perf_switch"
            boolean r2 = r12.getBooleanExtra(r2, r4)
            java.lang.String r4 = "action_cr_perf_frequency"
            long r4 = r12.getLongExtra(r4, r5)
            java.lang.String r6 = "action_cr_event_en"
            boolean r3 = r12.getBooleanExtra(r6, r3)
            r9 = 1048576(0x100000, double:5.180654E-318)
            java.lang.String r6 = "action_cr_max_file_size"
            long r9 = r12.getLongExtra(r6, r9)
            com.xiaomi.clientreport.data.Config$Builder r12 = com.xiaomi.clientreport.data.Config.getBuilder()
            com.xiaomi.clientreport.data.Config$Builder r12 = r12.setEventUploadSwitchOpen(r0)
            com.xiaomi.clientreport.data.Config$Builder r12 = r12.setEventUploadFrequency(r7)
            com.xiaomi.clientreport.data.Config$Builder r12 = r12.setPerfUploadSwitchOpen(r2)
            com.xiaomi.clientreport.data.Config$Builder r12 = r12.setPerfUploadFrequency(r4)
            android.content.Context r0 = r11.getApplicationContext()
            java.lang.String r0 = com.xiaomi.push.bt.a(r0)
            com.xiaomi.clientreport.data.Config$Builder r12 = r12.setAESKey(r0)
            com.xiaomi.clientreport.data.Config$Builder r12 = r12.setEventEncrypted(r3)
            com.xiaomi.clientreport.data.Config$Builder r12 = r12.setMaxFileLength(r9)
            android.content.Context r0 = r11.getApplicationContext()
            com.xiaomi.clientreport.data.Config r12 = r12.build(r0)
            java.lang.String r0 = r11.getPackageName()
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L902
            r0 = 0
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 <= 0) goto L902
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 <= 0) goto L902
            int r0 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r0 <= 0) goto L902
            android.content.Context r0 = r11.getApplicationContext()
            com.xiaomi.push.en.a(r0, r12)
            goto L902
        L6f9:
            java.lang.String r0 = r12.getAction()
            java.lang.String r2 = "action_help_ping"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L750
            java.lang.String r0 = "extra_help_ping_switch"
            boolean r0 = r12.getBooleanExtra(r0, r4)
            java.lang.String r2 = "extra_help_ping_frequency"
            int r2 = r12.getIntExtra(r2, r4)
            r3 = 30
            if (r2 < 0) goto L71d
            if (r2 >= r3) goto L71d
            java.lang.String r2 = "aw_ping: frquency need > 30s."
            com.xiaomi.channel.commonutils.logger.b.c(r2)
            r2 = r3
        L71d:
            if (r2 >= 0) goto L720
            goto L721
        L720:
            r4 = r0
        L721:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "aw_ping: receive a aw_ping message. switch: "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = " frequency: "
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            if (r4 == 0) goto L902
            if (r2 <= 0) goto L902
            java.lang.String r0 = r11.getPackageName()
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L902
            r11.a(r12, r2)
            goto L902
        L750:
            java.lang.String r0 = r12.getAction()
            java.lang.String r1 = "action_aw_app_logic"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L761
            r11.e(r12)
            goto L902
        L761:
            java.lang.String r0 = com.xiaomi.push.service.bk.n
            java.lang.String r1 = r12.getAction()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L902
            android.content.Context r0 = r11.getApplicationContext()
            com.xiaomi.push.service.n.a(r0, r12)
            goto L902
        L776:
            java.lang.String r3 = r12.getStringExtra(r6)
            byte[] r6 = r12.getByteArrayExtra(r5)
            java.lang.String r0 = "mipush_app_id"
            java.lang.String r4 = r12.getStringExtra(r0)
            java.lang.String r0 = "mipush_app_token"
            java.lang.String r5 = r12.getStringExtra(r0)
            java.lang.String r0 = r12.getAction()
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L79b
            com.xiaomi.push.service.v r0 = com.xiaomi.push.service.v.a(r11)
            r0.c(r3)
        L79b:
            java.lang.String r0 = r12.getAction()
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L7b3
            com.xiaomi.push.service.v r0 = com.xiaomi.push.service.v.a(r11)
            r0.e(r3)
            com.xiaomi.push.service.v r0 = com.xiaomi.push.service.v.a(r11)
            r0.f(r3)
        L7b3:
            if (r6 != 0) goto L7bf
            r12 = 70000003(0x42c1d83, float:2.0232054E-36)
            java.lang.String r0 = "null payload"
            com.xiaomi.push.service.x.a(r11, r3, r6, r12, r0)
            goto L902
        L7bf:
            com.xiaomi.push.service.x.b(r3, r6)
            com.xiaomi.push.service.w r0 = new com.xiaomi.push.service.w
            r1 = r0
            r2 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r11.a(r0)
            java.lang.String r12 = r12.getAction()
            boolean r12 = r8.equals(r12)
            if (r12 == 0) goto L902
            com.xiaomi.push.service.XMPushService$f r12 = r11.a
            if (r12 != 0) goto L902
            com.xiaomi.push.service.XMPushService$f r12 = new com.xiaomi.push.service.XMPushService$f
            r12.<init>(r11)
            r11.a = r12
            android.content.IntentFilter r12 = new android.content.IntentFilter
            r12.<init>(r7)
            com.xiaomi.push.service.XMPushService$f r0 = r11.a
            r11.registerReceiver(r0, r12)
            goto L902
        L7ed:
            java.lang.String r0 = r12.getStringExtra(r6)
            byte[] r1 = r12.getByteArrayExtra(r5)
            java.lang.String r2 = "com.xiaomi.mipush.MESSAGE_CACHE"
            boolean r2 = r12.getBooleanExtra(r2, r3)
            boolean r3 = com.xiaomi.push.service.m.a(r1, r0)
            if (r3 == 0) goto L81b
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r1 = "duplicate msg from: "
            r12.append(r1)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r12.append(r0)
            java.lang.String r12 = r12.toString()
        L816:
            com.xiaomi.channel.commonutils.logger.b.a(r12)
            goto L902
        L81b:
            java.lang.String r12 = r12.getAction()
            boolean r12 = r7.equals(r12)
            if (r12 == 0) goto L839
            com.xiaomi.push.service.v r12 = com.xiaomi.push.service.v.a(r11)
            r12.a(r0)
            android.content.Context r12 = r11.getApplicationContext()
            boolean r12 = com.xiaomi.push.m.a(r12)
            if (r12 == 0) goto L839
            com.xiaomi.push.service.ag.a(r0)
        L839:
            r11.a(r0, r1, r2)
            goto L902
        L83e:
            java.lang.String r0 = r12.getAction()
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L867
            boolean r12 = r11.i()
            if (r12 != 0) goto L902
            java.lang.String r12 = "exit falldown mode, activate alarm."
            com.xiaomi.channel.commonutils.logger.b.a(r12)
            r11.e()
            boolean r12 = r11.c()
            if (r12 != 0) goto L902
            boolean r12 = r11.d()
            if (r12 != 0) goto L902
        L862:
            r11.a(r3)
            goto L902
        L867:
            java.lang.String r12 = r12.getAction()
            boolean r12 = r5.equals(r12)
            if (r12 == 0) goto L902
            boolean r12 = r11.i()
            if (r12 == 0) goto L902
            boolean r12 = com.xiaomi.push.eu.a()
            if (r12 == 0) goto L902
            java.lang.String r12 = "enter falldown mode, stop alarm."
            com.xiaomi.channel.commonutils.logger.b.a(r12)
            com.xiaomi.push.eu.a()
            goto L902
        L887:
            java.lang.String r0 = com.xiaomi.push.service.bk.t
            java.lang.String r0 = r12.getStringExtra(r0)
            java.lang.String r1 = com.xiaomi.push.service.bk.x
            java.lang.String r1 = r12.getStringExtra(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L89d
            java.lang.String r12 = "security is empty. ignore."
            goto L816
        L89d:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L8fe
            boolean r1 = r11.a(r0, r12)
            com.xiaomi.push.service.bg$b r7 = r11.a(r0, r12)
            boolean r12 = com.xiaomi.push.bj.c(r11)
            if (r12 != 0) goto L8bb
            com.xiaomi.push.service.j r5 = r11.a
            r8 = 0
            r9 = 2
        L8b5:
            r10 = 0
            r6 = r11
            r5.a(r6, r7, r8, r9, r10)
            goto L902
        L8bb:
            boolean r12 = r11.c()
            if (r12 == 0) goto L862
            com.xiaomi.push.service.bg$c r12 = r7.a
            com.xiaomi.push.service.bg$c r0 = com.xiaomi.push.service.bg.c.a
            if (r12 != r0) goto L8ce
            com.xiaomi.push.service.XMPushService$b r12 = new com.xiaomi.push.service.XMPushService$b
            r12.<init>(r11, r7)
            goto L1b2
        L8ce:
            if (r1 == 0) goto L8d7
            com.xiaomi.push.service.XMPushService$p r12 = new com.xiaomi.push.service.XMPushService$p
            r12.<init>(r11, r7)
            goto L1b2
        L8d7:
            com.xiaomi.push.service.bg$c r12 = r7.a
            com.xiaomi.push.service.bg$c r0 = com.xiaomi.push.service.bg.c.b
            if (r12 != r0) goto L8f3
            java.lang.Object[] r12 = new java.lang.Object[r2]
            java.lang.String r0 = r7.g
            r12[r4] = r0
            java.lang.String r0 = r7.b
            java.lang.String r0 = com.xiaomi.push.service.bg.b.a(r0)
            r12[r3] = r0
            java.lang.String r0 = "the client is binding. %1$s %2$s."
            java.lang.String r12 = java.lang.String.format(r0, r12)
            goto L816
        L8f3:
            com.xiaomi.push.service.bg$c r12 = r7.a
            com.xiaomi.push.service.bg$c r0 = com.xiaomi.push.service.bg.c.c
            if (r12 != r0) goto L902
            com.xiaomi.push.service.j r5 = r11.a
            r8 = 1
            r9 = 0
            goto L8b5
        L8fe:
            java.lang.String r12 = "channel id is empty, do nothing!"
            goto L51a
        L902:
            return
    }

    private void e() {
            r1 = this;
            boolean r0 = r1.a()
            if (r0 == 0) goto L11
            boolean r0 = com.xiaomi.push.eu.a()
            if (r0 != 0) goto L14
            r0 = 1
            com.xiaomi.push.eu.a(r0)
            goto L14
        L11:
            com.xiaomi.push.eu.a()
        L14:
            return
    }

    private void e(android.content.Intent r8) {
            r7 = this;
            android.content.Context r0 = r7.getApplicationContext()     // Catch: com.xiaomi.push.iz -> L6e
            com.xiaomi.push.ed r0 = com.xiaomi.push.ed.a(r0)     // Catch: com.xiaomi.push.iz -> L6e
            com.xiaomi.push.service.bm r1 = new com.xiaomi.push.service.bm     // Catch: com.xiaomi.push.iz -> L6e
            r1.<init>()     // Catch: com.xiaomi.push.iz -> L6e
            r0.a(r1)     // Catch: com.xiaomi.push.iz -> L6e
            java.lang.String r0 = "mipush_app_package"
            java.lang.String r5 = r8.getStringExtra(r0)     // Catch: com.xiaomi.push.iz -> L6e
            java.lang.String r0 = "mipush_payload"
            byte[] r8 = r8.getByteArrayExtra(r0)     // Catch: com.xiaomi.push.iz -> L6e
            if (r8 != 0) goto L1f
            return
        L1f:
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii     // Catch: com.xiaomi.push.iz -> L6e
            r0.<init>()     // Catch: com.xiaomi.push.iz -> L6e
            com.xiaomi.push.it.a(r0, r8)     // Catch: com.xiaomi.push.iz -> L6e
            java.lang.String r6 = r0.b()     // Catch: com.xiaomi.push.iz -> L6e
            java.util.Map r8 = r0.a()     // Catch: com.xiaomi.push.iz -> L6e
            if (r8 == 0) goto L87
            java.lang.String r0 = "extra_help_aw_info"
            java.lang.Object r0 = r8.get(r0)     // Catch: com.xiaomi.push.iz -> L6e
            r3 = r0
            java.lang.String r3 = (java.lang.String) r3     // Catch: com.xiaomi.push.iz -> L6e
            java.lang.String r0 = "extra_aw_app_online_cmd"
            java.lang.Object r8 = r8.get(r0)     // Catch: com.xiaomi.push.iz -> L6e
            java.lang.String r8 = (java.lang.String) r8     // Catch: com.xiaomi.push.iz -> L6e
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: com.xiaomi.push.iz -> L6e
            if (r0 != 0) goto L87
            int r8 = java.lang.Integer.parseInt(r8)     // Catch: java.lang.NumberFormatException -> L4d com.xiaomi.push.iz -> L6e
            goto L4e
        L4d:
            r8 = 0
        L4e:
            r4 = r8
            boolean r8 = android.text.TextUtils.isEmpty(r5)     // Catch: com.xiaomi.push.iz -> L6e
            if (r8 != 0) goto L87
            boolean r8 = android.text.TextUtils.isEmpty(r6)     // Catch: com.xiaomi.push.iz -> L6e
            if (r8 != 0) goto L87
            boolean r8 = android.text.TextUtils.isEmpty(r3)     // Catch: com.xiaomi.push.iz -> L6e
            if (r8 != 0) goto L87
            android.content.Context r8 = r7.getApplicationContext()     // Catch: com.xiaomi.push.iz -> L6e
            com.xiaomi.push.ed r1 = com.xiaomi.push.ed.a(r8)     // Catch: com.xiaomi.push.iz -> L6e
            r2 = r7
            r1.a(r2, r3, r4, r5, r6)     // Catch: com.xiaomi.push.iz -> L6e
            goto L87
        L6e:
            r8 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "aw_logic: translate fail. "
            r0.append(r1)
            java.lang.String r8 = r8.getMessage()
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r8)
        L87:
            return
    }

    public static boolean e() {
            boolean r0 = com.xiaomi.push.service.XMPushService.b
            return r0
    }

    private void f() {
            r2 = this;
            com.xiaomi.push.fw r0 = r2.a
            if (r0 == 0) goto L10
            boolean r0 = r0.b()
            if (r0 == 0) goto L10
            java.lang.String r0 = "try to connect while connecting."
        Lc:
            com.xiaomi.channel.commonutils.logger.b.d(r0)
            return
        L10:
            com.xiaomi.push.fw r0 = r2.a
            if (r0 == 0) goto L1d
            boolean r0 = r0.c()
            if (r0 == 0) goto L1d
            java.lang.String r0 = "try to connect while is connected."
            goto Lc
        L1d:
            com.xiaomi.push.fx r0 = r2.a
            java.lang.String r1 = com.xiaomi.push.bj.a(r2)
            r0.b(r1)
            r2.g()
            com.xiaomi.push.fw r0 = r2.a
            if (r0 != 0) goto L38
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            r0.a(r2)
            r0 = 0
            r2.c(r0)
        L38:
            return
    }

    private boolean f() {
            r4 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r4.a
            long r0 = r0 - r2
            r2 = 30000(0x7530, double:1.4822E-319)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto Lf
            r0 = 0
            return r0
        Lf:
            boolean r0 = com.xiaomi.push.bj.d(r4)
            return r0
    }

    private void g() {
            r3 = this;
            com.xiaomi.push.fs r0 = r3.a     // Catch: com.xiaomi.push.gh -> L16
            com.xiaomi.push.gb r1 = r3.a     // Catch: com.xiaomi.push.gh -> L16
            com.xiaomi.push.service.cl r2 = new com.xiaomi.push.service.cl     // Catch: com.xiaomi.push.gh -> L16
            r2.<init>(r3)     // Catch: com.xiaomi.push.gh -> L16
            r0.a(r1, r2)     // Catch: com.xiaomi.push.gh -> L16
            com.xiaomi.push.fs r0 = r3.a     // Catch: com.xiaomi.push.gh -> L16
            r0.e()     // Catch: com.xiaomi.push.gh -> L16
            com.xiaomi.push.fs r0 = r3.a     // Catch: com.xiaomi.push.gh -> L16
            r3.a = r0     // Catch: com.xiaomi.push.gh -> L16
            goto L22
        L16:
            r0 = move-exception
            java.lang.String r1 = "fail to create Slim connection"
            com.xiaomi.channel.commonutils.logger.b.a(r1, r0)
            com.xiaomi.push.fs r1 = r3.a
            r2 = 3
            r1.b(r2, r0)
        L22:
            return
    }

    private boolean g() {
            r3 = this;
            java.lang.String r0 = r3.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equals(r0)
            r1 = 0
            if (r0 == 0) goto L1b
            android.content.ContentResolver r0 = r3.getContentResolver()
            java.lang.String r2 = "power_supersave_mode_open"
            int r0 = android.provider.Settings.System.getInt(r0, r2, r1)
            r2 = 1
            if (r0 != r2) goto L1b
            r1 = r2
        L1b:
            return r1
    }

    private void h() {
            r0 = this;
            return
    }

    private boolean h() {
            r2 = this;
            java.lang.String r0 = r2.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L1d
            com.xiaomi.push.service.v r0 = com.xiaomi.push.service.v.a(r2)
            java.lang.String r1 = r2.getPackageName()
            boolean r0 = r0.b(r1)
            if (r0 != 0) goto L1b
            goto L1d
        L1b:
            r0 = 0
            goto L1e
        L1d:
            r0 = 1
        L1e:
            return r0
    }

    private void i() {
            r2 = this;
            java.util.ArrayList<com.xiaomi.push.service.XMPushService$n> r0 = r2.a
            monitor-enter(r0)
            java.util.ArrayList<com.xiaomi.push.service.XMPushService$n> r1 = r2.a     // Catch: java.lang.Throwable -> La
            r1.clear()     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r1
    }

    private boolean i() {
            r2 = this;
            android.content.Context r0 = r2.getApplicationContext()
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L28
            boolean r0 = r2.j()
            if (r0 == 0) goto L28
            boolean r0 = com.xiaomi.push.j.b(r2)
            if (r0 != 0) goto L28
            android.content.Context r0 = r2.getApplicationContext()
            boolean r0 = com.xiaomi.push.j.a(r0)
            if (r0 != 0) goto L28
            r0 = 1
            goto L29
        L28:
            r0 = 0
        L29:
            return r0
    }

    private boolean j() {
            r5 = this;
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]
            r3 = 0
            r2[r3] = r0
            java.lang.String r0 = "%tH"
            java.lang.String r0 = java.lang.String.format(r0, r2)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            int r0 = r0.intValue()
            int r2 = r5.a
            int r4 = r5.b
            if (r2 <= r4) goto L24
            if (r0 >= r2) goto L2c
            if (r0 >= r4) goto L2b
            goto L2c
        L24:
            if (r2 >= r4) goto L2b
            if (r0 < r2) goto L2b
            if (r0 >= r4) goto L2b
            goto L2c
        L2b:
            r1 = r3
        L2c:
            return r1
    }

    private boolean k() {
            r3 = this;
            java.lang.String r0 = r3.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            r1 = 0
            if (r0 == 0) goto Le
            return r1
        Le:
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r3)
            com.xiaomi.push.ho r2 = com.xiaomi.push.ho.H
            int r2 = r2.a()
            boolean r0 = r0.a(r2, r1)
            return r0
    }

    public com.xiaomi.push.fw a() {
            r1 = this;
            com.xiaomi.push.fw r0 = r1.a
            return r0
    }

    public com.xiaomi.push.service.j a() {
            r1 = this;
            com.xiaomi.push.service.j r0 = new com.xiaomi.push.service.j
            r0.<init>()
            return r0
    }

    void a() {
            r4 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r4.a
            long r0 = r0 - r2
            int r2 = com.xiaomi.push.gc.a()
            long r2 = (long) r2
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L11
            return
        L11:
            boolean r0 = com.xiaomi.push.bj.d(r4)
            if (r0 == 0) goto L1b
            r0 = 1
            r4.b(r0)
        L1b:
            return
    }

    public void a(int r2) {
            r1 = this;
            com.xiaomi.push.service.p r0 = r1.a
            r0.a(r2)
            return
    }

    public void a(int r4, java.lang.Exception r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "disconnect "
            r0.append(r1)
            int r1 = r3.hashCode()
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            com.xiaomi.push.fw r1 = r3.a
            r2 = 0
            if (r1 != 0) goto L1d
            r1 = r2
            goto L25
        L1d:
            int r1 = r1.hashCode()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
        L25:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.fw r0 = r3.a
            if (r0 == 0) goto L38
            r0.b(r4, r5)
            r3.a = r2
        L38:
            r5 = 7
            r3.a(r5)
            r5 = 4
            r3.a(r5)
            com.xiaomi.push.service.bg r5 = com.xiaomi.push.service.bg.a()
            r5.a(r3, r4)
            return
    }

    public void a(com.xiaomi.push.fl r2) {
            r1 = this;
            com.xiaomi.push.fw r0 = r1.a
            if (r0 == 0) goto L8
            r0.b(r2)
            return
        L8:
            com.xiaomi.push.gh r2 = new com.xiaomi.push.gh
            java.lang.String r0 = "try send msg while connection is null."
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void a(com.xiaomi.push.fw r2) {
            r1 = this;
            java.lang.String r0 = "begin to connect..."
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            com.xiaomi.push.fg r0 = com.xiaomi.push.fh.a()
            r0.a(r2)
            return
    }

    @Override
    public void a(com.xiaomi.push.fw r2, int r3, java.lang.Exception r4) {
            r1 = this;
            com.xiaomi.push.fg r0 = com.xiaomi.push.fh.a()
            r0.a(r2, r3, r4)
            boolean r2 = r1.i()
            if (r2 != 0) goto L11
            r2 = 0
            r1.a(r2)
        L11:
            return
    }

    @Override
    public void a(com.xiaomi.push.fw r2, java.lang.Exception r3) {
            r1 = this;
            com.xiaomi.push.fg r0 = com.xiaomi.push.fh.a()
            r0.a(r2, r3)
            r2 = 0
            r1.c(r2)
            boolean r3 = r1.i()
            if (r3 != 0) goto L14
            r1.a(r2)
        L14:
            return
    }

    public void a(com.xiaomi.push.service.XMPushService.j r3) {
            r2 = this;
            r0 = 0
            r2.a(r3, r0)
            return
    }

    public void a(com.xiaomi.push.service.XMPushService.j r2, long r3) {
            r1 = this;
            com.xiaomi.push.service.p r0 = r1.a     // Catch: java.lang.IllegalStateException -> L6
            r0.a(r2, r3)     // Catch: java.lang.IllegalStateException -> L6
            goto L1f
        L6:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "can't execute job err = "
            r3.append(r4)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L1f:
            return
    }

    public void a(com.xiaomi.push.service.XMPushService.n r3) {
            r2 = this;
            java.util.ArrayList<com.xiaomi.push.service.XMPushService$n> r0 = r2.a
            monitor-enter(r0)
            java.util.ArrayList<com.xiaomi.push.service.XMPushService$n> r1 = r2.a     // Catch: java.lang.Throwable -> La
            r1.add(r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3
    }

    public void a(com.xiaomi.push.service.bg.b r6) {
            r5 = this;
            if (r6 == 0) goto L26
            long r0 = r6.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "schedule rebind job in "
            r2.append(r3)
            r3 = 1000(0x3e8, double:4.94E-321)
            long r3 = r0 / r3
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            com.xiaomi.push.service.XMPushService$b r2 = new com.xiaomi.push.service.XMPushService$b
            r2.<init>(r5, r6)
            r5.a(r2, r0)
        L26:
            return
    }

    public void a(java.lang.String r8, java.lang.String r9, int r10, java.lang.String r11, java.lang.String r12) {
            r7 = this;
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.service.bg$b r3 = r0.a(r8, r9)
            if (r3 == 0) goto L17
            com.xiaomi.push.service.XMPushService$s r0 = new com.xiaomi.push.service.XMPushService$s
            r1 = r0
            r2 = r7
            r4 = r10
            r5 = r12
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r7.a(r0)
        L17:
            com.xiaomi.push.service.bg r10 = com.xiaomi.push.service.bg.a()
            r10.a(r8, r9)
            return
    }

    void a(java.lang.String r3, byte[] r4, boolean r5) {
            r2 = this;
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            java.lang.String r1 = "5"
            java.util.Collection r0 = r0.a(r1)
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L16
            if (r5 == 0) goto L32
        L12:
            com.xiaomi.push.service.x.b(r3, r4)
            goto L32
        L16:
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            com.xiaomi.push.service.bg$b r0 = (com.xiaomi.push.service.bg.b) r0
            com.xiaomi.push.service.bg$c r0 = r0.a
            com.xiaomi.push.service.bg$c r1 = com.xiaomi.push.service.bg.c.c
            if (r0 == r1) goto L29
            if (r5 == 0) goto L32
            goto L12
        L29:
            com.xiaomi.push.service.cj r5 = new com.xiaomi.push.service.cj
            r0 = 4
            r5.<init>(r2, r0, r3, r4)
            r2.a(r5)
        L32:
            return
    }

    public void a(boolean r2) {
            r1 = this;
            com.xiaomi.push.service.bq r0 = r1.a
            r0.a(r2)
            return
    }

    public void a(byte[] r11, java.lang.String r12) {
            r10 = this;
            r0 = 70000003(0x42c1d83, float:2.0232054E-36)
            if (r11 != 0) goto L11
            java.lang.String r1 = "null payload"
            com.xiaomi.push.service.x.a(r10, r12, r11, r0, r1)
            java.lang.String r11 = "register request without payload"
            com.xiaomi.channel.commonutils.logger.b.a(r11)
            goto L9b
        L11:
            com.xiaomi.push.if r1 = new com.xiaomi.push.if
            r1.<init>()
            com.xiaomi.push.it.a(r1, r11)     // Catch: com.xiaomi.push.iz -> L81
            com.xiaomi.push.hj r2 = r1.a     // Catch: com.xiaomi.push.iz -> L81
            com.xiaomi.push.hj r3 = com.xiaomi.push.hj.a     // Catch: com.xiaomi.push.iz -> L81
            if (r2 != r3) goto L76
            com.xiaomi.push.ij r2 = new com.xiaomi.push.ij     // Catch: com.xiaomi.push.iz -> L81
            r2.<init>()     // Catch: com.xiaomi.push.iz -> L81
            byte[] r3 = r1.a()     // Catch: com.xiaomi.push.iz -> L5b
            com.xiaomi.push.it.a(r2, r3)     // Catch: com.xiaomi.push.iz -> L5b
            com.xiaomi.push.service.w r3 = new com.xiaomi.push.service.w     // Catch: com.xiaomi.push.iz -> L5b
            java.lang.String r6 = r1.b()     // Catch: com.xiaomi.push.iz -> L5b
            java.lang.String r7 = r2.b()     // Catch: com.xiaomi.push.iz -> L5b
            java.lang.String r8 = r2.c()     // Catch: com.xiaomi.push.iz -> L5b
            r4 = r3
            r5 = r10
            r9 = r11
            r4.<init>(r5, r6, r7, r8, r9)     // Catch: com.xiaomi.push.iz -> L5b
            r10.a(r3)     // Catch: com.xiaomi.push.iz -> L5b
            android.content.Context r3 = r10.getApplicationContext()     // Catch: com.xiaomi.push.iz -> L5b
            com.xiaomi.push.eo r4 = com.xiaomi.push.eo.a(r3)     // Catch: com.xiaomi.push.iz -> L5b
            java.lang.String r5 = r1.b()     // Catch: com.xiaomi.push.iz -> L5b
            java.lang.String r6 = "E100003"
            java.lang.String r7 = r2.a()     // Catch: com.xiaomi.push.iz -> L5b
            r8 = 6002(0x1772, float:8.41E-42)
            r9 = 0
            r4.a(r5, r6, r7, r8, r9)     // Catch: com.xiaomi.push.iz -> L5b
            goto L9b
        L5b:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: com.xiaomi.push.iz -> L81
            r2.<init>()     // Catch: com.xiaomi.push.iz -> L81
            java.lang.String r3 = "app register error. "
            r2.append(r3)     // Catch: com.xiaomi.push.iz -> L81
            r2.append(r1)     // Catch: com.xiaomi.push.iz -> L81
            java.lang.String r1 = r2.toString()     // Catch: com.xiaomi.push.iz -> L81
            com.xiaomi.channel.commonutils.logger.b.d(r1)     // Catch: com.xiaomi.push.iz -> L81
            java.lang.String r1 = " data action error."
            com.xiaomi.push.service.x.a(r10, r12, r11, r0, r1)     // Catch: com.xiaomi.push.iz -> L81
            goto L9b
        L76:
            java.lang.String r1 = " registration action required."
            com.xiaomi.push.service.x.a(r10, r12, r11, r0, r1)     // Catch: com.xiaomi.push.iz -> L81
            java.lang.String r1 = "register request with invalid payload"
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: com.xiaomi.push.iz -> L81
            goto L9b
        L81:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "app register fail. "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r1)
            java.lang.String r1 = " data container error."
            com.xiaomi.push.service.x.a(r10, r12, r11, r0, r1)
        L9b:
            return
    }

    public void a(com.xiaomi.push.fl[] r2) {
            r1 = this;
            com.xiaomi.push.fw r0 = r1.a
            if (r0 == 0) goto L8
            r0.a(r2)
            return
        L8:
            com.xiaomi.push.gh r2 = new com.xiaomi.push.gh
            java.lang.String r0 = "try send msg while connection is null."
            r2.<init>(r0)
            throw r2
    }

    public boolean a() {
            r9 = this;
            boolean r0 = com.xiaomi.push.bj.b(r9)
            com.xiaomi.push.service.bg r1 = com.xiaomi.push.service.bg.a()
            int r1 = r1.a()
            r2 = 0
            r3 = 1
            if (r1 <= 0) goto L12
            r1 = r3
            goto L13
        L12:
            r1 = r2
        L13:
            boolean r4 = r9.b()
            r4 = r4 ^ r3
            boolean r5 = r9.h()
            boolean r6 = r9.g()
            r6 = r6 ^ r3
            if (r0 == 0) goto L2d
            if (r1 == 0) goto L2d
            if (r4 == 0) goto L2d
            if (r5 == 0) goto L2d
            if (r6 == 0) goto L2d
            r7 = r3
            goto L2e
        L2d:
            r7 = r2
        L2e:
            if (r7 != 0) goto L5d
            r8 = 5
            java.lang.Object[] r8 = new java.lang.Object[r8]
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r8[r2] = r0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r1)
            r8[r3] = r0
            r0 = 2
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r4)
            r8[r0] = r1
            r0 = 3
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r5)
            r8[r0] = r1
            r0 = 4
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r6)
            r8[r0] = r1
            java.lang.String r0 = "not conn, net=%s;cnt=%s;!dis=%s;enb=%s;!spm=%s;"
            java.lang.String r0 = java.lang.String.format(r0, r8)
            com.xiaomi.channel.commonutils.logger.b.e(r0)
        L5d:
            return r7
    }

    public boolean a(int r2) {
            r1 = this;
            com.xiaomi.push.service.p r0 = r1.a
            boolean r2 = r0.a(r2)
            return r2
    }

    public com.xiaomi.push.service.j b() {
            r1 = this;
            com.xiaomi.push.service.j r0 = r1.a
            return r0
    }

    void b() {
            r2 = this;
            android.content.Context r0 = r2.getApplicationContext()
            com.xiaomi.push.service.o r0 = com.xiaomi.push.service.o.a(r0)
            r0.d()
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.ArrayList<com.xiaomi.push.service.XMPushService$n> r1 = r2.a
            r0.<init>(r1)
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r0.next()
            com.xiaomi.push.service.XMPushService$n r1 = (com.xiaomi.push.service.XMPushService.n) r1
            r1.a()
            goto L16
        L26:
            return
    }

    @Override
    public void b(com.xiaomi.push.fw r3) {
            r2 = this;
            com.xiaomi.push.fg r0 = com.xiaomi.push.fh.a()
            r0.b(r3)
            r3 = 1
            r2.c(r3)
            com.xiaomi.push.service.bq r0 = r2.a
            r0.a()
            boolean r0 = com.xiaomi.push.eu.a()
            if (r0 != 0) goto L24
            boolean r0 = r2.i()
            if (r0 != 0) goto L24
            java.lang.String r0 = "reconnection successful, reactivate alarm."
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.eu.a(r3)
        L24:
            com.xiaomi.push.service.bg r3 = com.xiaomi.push.service.bg.a()
            java.util.ArrayList r3 = r3.a()
            java.util.Iterator r3 = r3.iterator()
        L30:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L45
            java.lang.Object r0 = r3.next()
            com.xiaomi.push.service.bg$b r0 = (com.xiaomi.push.service.bg.b) r0
            com.xiaomi.push.service.XMPushService$b r1 = new com.xiaomi.push.service.XMPushService$b
            r1.<init>(r2, r0)
            r2.a(r1)
            goto L30
        L45:
            boolean r3 = r2.a
            if (r3 != 0) goto L63
            android.content.Context r3 = r2.getApplicationContext()
            boolean r3 = com.xiaomi.push.m.a(r3)
            if (r3 == 0) goto L63
            android.content.Context r3 = r2.getApplicationContext()
            com.xiaomi.push.al r3 = com.xiaomi.push.al.a(r3)
            com.xiaomi.push.service.cm r0 = new com.xiaomi.push.service.cm
            r0.<init>(r2)
            r3.a(r0)
        L63:
            return
    }

    public void b(com.xiaomi.push.service.XMPushService.j r3) {
            r2 = this;
            com.xiaomi.push.service.p r0 = r2.a
            int r1 = r3.a
            r0.a(r1, r3)
            return
    }

    public boolean b() {
            r5 = this;
            r0 = 0
            java.lang.String r1 = "miui.os.Build"
            java.lang.Class r1 = com.xiaomi.push.v.a(r5, r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r2 = "IS_CM_CUSTOMIZATION_TEST"
            java.lang.reflect.Field r2 = r1.getField(r2)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = "IS_CU_CUSTOMIZATION_TEST"
            java.lang.reflect.Field r3 = r1.getField(r3)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r4 = "IS_CT_CUSTOMIZATION_TEST"
            java.lang.reflect.Field r1 = r1.getField(r4)     // Catch: java.lang.Throwable -> L2d
            r4 = 0
            boolean r2 = r2.getBoolean(r4)     // Catch: java.lang.Throwable -> L2d
            if (r2 != 0) goto L2c
            boolean r2 = r3.getBoolean(r4)     // Catch: java.lang.Throwable -> L2d
            if (r2 != 0) goto L2c
            boolean r1 = r1.getBoolean(r4)     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L2d
        L2c:
            r0 = 1
        L2d:
            return r0
    }

    public boolean c() {
            r1 = this;
            com.xiaomi.push.fw r0 = r1.a
            if (r0 == 0) goto Lc
            boolean r0 = r0.c()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public boolean d() {
            r1 = this;
            com.xiaomi.push.fw r0 = r1.a
            if (r0 == 0) goto Lc
            boolean r0 = r0.b()
            if (r0 == 0) goto Lc
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
            android.os.Messenger r1 = r0.a
            android.os.IBinder r1 = r1.getBinder()
            return r1
    }

    @Override
    public void onCreate() {
            r11 = this;
            super.onCreate()
            android.content.Context r0 = r11.getApplicationContext()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.v.a(r11)
            com.xiaomi.push.service.t r0 = com.xiaomi.push.service.u.a(r11)
            if (r0 == 0) goto L18
            int r1 = r0.a
            com.xiaomi.push.ae.a(r1)
        L18:
            android.content.Context r1 = r11.getApplicationContext()
            boolean r1 = com.xiaomi.push.m.a(r1)
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L54
            android.os.HandlerThread r1 = new android.os.HandlerThread
            java.lang.String r4 = "hb-alarm"
            r1.<init>(r4)
            r1.start()
            android.os.Handler r4 = new android.os.Handler
            android.os.Looper r1 = r1.getLooper()
            r4.<init>(r1)
            com.xiaomi.push.service.XMPushService$a r1 = new com.xiaomi.push.service.XMPushService$a
            r1.<init>(r11, r3)
            r11.a = r1
            android.content.IntentFilter r1 = new android.content.IntentFilter
            java.lang.String r5 = com.xiaomi.push.service.bk.p
            r1.<init>(r5)
            com.xiaomi.push.service.XMPushService$a r5 = r11.a
            r11.registerReceiver(r5, r1, r3, r4)
            com.xiaomi.push.service.XMPushService.b = r2
            com.xiaomi.push.service.cn r1 = new com.xiaomi.push.service.cn
            r1.<init>(r11)
            r4.post(r1)
        L54:
            android.os.Messenger r1 = new android.os.Messenger
            com.xiaomi.push.service.co r4 = new com.xiaomi.push.service.co
            r4.<init>(r11)
            r1.<init>(r4)
            r11.a = r1
            com.xiaomi.push.service.bl.a(r11)
            com.xiaomi.push.service.cp r1 = new com.xiaomi.push.service.cp
            r7 = 0
            r8 = 5222(0x1466, float:7.318E-42)
            r10 = 0
            java.lang.String r9 = "xiaomi.com"
            r5 = r1
            r6 = r11
            r5.<init>(r6, r7, r8, r9, r10)
            r11.a = r1
            r1.a(r2)
            com.xiaomi.push.fs r1 = new com.xiaomi.push.fs
            com.xiaomi.push.fx r4 = r11.a
            r1.<init>(r11, r4)
            r11.a = r1
            com.xiaomi.push.service.j r1 = r11.a()
            r11.a = r1
            com.xiaomi.push.eu.a(r11)
            com.xiaomi.push.fs r1 = r11.a
            r1.a(r11)
            com.xiaomi.push.service.be r1 = new com.xiaomi.push.service.be
            r1.<init>(r11)
            r11.a = r1
            com.xiaomi.push.service.bq r1 = new com.xiaomi.push.service.bq
            r1.<init>(r11)
            r11.a = r1
            com.xiaomi.push.service.k r1 = new com.xiaomi.push.service.k
            r1.<init>()
            r1.a()
            com.xiaomi.push.fh r1 = com.xiaomi.push.fh.a()
            r1.a(r11)
            com.xiaomi.push.service.p r1 = new com.xiaomi.push.service.p
            java.lang.String r4 = "Connection Controller Thread"
            r1.<init>(r4)
            r11.a = r1
            com.xiaomi.push.service.bg r1 = com.xiaomi.push.service.bg.a()
            r1.b()
            com.xiaomi.push.service.cq r4 = new com.xiaomi.push.service.cq
            r4.<init>(r11)
            r1.a(r4)
            boolean r1 = r11.k()
            if (r1 == 0) goto Lca
            r11.h()
        Lca:
            com.xiaomi.push.hg r1 = com.xiaomi.push.hg.a(r11)
            com.xiaomi.push.service.r r4 = new com.xiaomi.push.service.r
            r4.<init>(r11)
            java.lang.String r5 = "UPLOADER_PUSH_CHANNEL"
            r1.a(r4, r5)
            com.xiaomi.push.hd r1 = new com.xiaomi.push.hd
            r1.<init>(r11)
            r11.a(r1)
            com.xiaomi.push.service.cg r1 = new com.xiaomi.push.service.cg
            r1.<init>(r11)
            r11.a(r1)
            boolean r1 = com.xiaomi.push.m.a(r11)
            if (r1 == 0) goto Lf6
            com.xiaomi.push.service.bf r1 = new com.xiaomi.push.service.bf
            r1.<init>()
            r11.a(r1)
        Lf6:
            com.xiaomi.push.service.XMPushService$h r1 = new com.xiaomi.push.service.XMPushService$h
            r1.<init>(r11)
            r11.a(r1)
            java.util.Collection<com.xiaomi.push.service.ar> r1 = r11.a
            com.xiaomi.push.service.bx r4 = com.xiaomi.push.service.bx.a(r11)
            r1.add(r4)
            boolean r1 = r11.h()
            if (r1 == 0) goto L120
            com.xiaomi.push.service.XMPushService$f r1 = new com.xiaomi.push.service.XMPushService$f
            r1.<init>(r11)
            r11.a = r1
            android.content.IntentFilter r1 = new android.content.IntentFilter
            java.lang.String r4 = "android.net.conn.CONNECTIVITY_CHANGE"
            r1.<init>(r4)
            com.xiaomi.push.service.XMPushService$f r4 = r11.a
            r11.registerReceiver(r4, r1)
        L120:
            android.content.Context r1 = r11.getApplicationContext()
            boolean r1 = com.xiaomi.push.m.a(r1)
            if (r1 == 0) goto L152
            com.xiaomi.push.service.XMPushService$t r1 = new com.xiaomi.push.service.XMPushService$t
            r1.<init>(r11)
            r11.a = r1
            android.content.IntentFilter r1 = new android.content.IntentFilter
            java.lang.String r4 = "miui.net.wifi.DIGEST_INFORMATION_CHANGED"
            r1.<init>(r4)
            com.xiaomi.push.service.XMPushService$t r4 = r11.a
            java.lang.String r5 = "miui.net.wifi.permission.ACCESS_WIFI_DIGEST_INFO"
            r11.registerReceiver(r4, r1, r5, r3)
            com.xiaomi.push.service.XMPushService$k r1 = new com.xiaomi.push.service.XMPushService$k
            r1.<init>(r11)
            r11.a = r1
            android.content.IntentFilter r4 = new android.content.IntentFilter
            java.lang.String r5 = "com.xiaomi.xmsf.USE_INTELLIGENT_HB"
            r4.<init>(r5)
            java.lang.String r5 = "com.xiaomi.xmsf.permission.INTELLIGENT_HB"
            r11.registerReceiver(r1, r4, r5, r3)
        L152:
            android.content.Context r1 = r11.getApplicationContext()
            com.xiaomi.push.service.o r1 = com.xiaomi.push.service.o.a(r1)
            r1.a()
            java.lang.String r1 = r11.getPackageName()
            java.lang.String r3 = "com.xiaomi.xmsf"
            boolean r1 = r3.equals(r1)
            r3 = 0
            if (r1 == 0) goto L1ee
            java.lang.String r1 = "power_supersave_mode_open"
            android.net.Uri r1 = android.provider.Settings.System.getUriFor(r1)
            if (r1 == 0) goto L1a5
            com.xiaomi.push.service.cr r4 = new com.xiaomi.push.service.cr
            android.os.Handler r5 = new android.os.Handler
            android.os.Looper r6 = android.os.Looper.getMainLooper()
            r5.<init>(r6)
            r4.<init>(r11, r5)
            r11.a = r4
            android.content.ContentResolver r4 = r11.getContentResolver()     // Catch: java.lang.Throwable -> L18c
            android.database.ContentObserver r5 = r11.a     // Catch: java.lang.Throwable -> L18c
            r4.registerContentObserver(r1, r3, r5)     // Catch: java.lang.Throwable -> L18c
            goto L1a5
        L18c:
            r1 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "register super-power-mode observer err:"
            r4.append(r5)
            java.lang.String r1 = r1.getMessage()
            r4.append(r1)
            java.lang.String r1 = r4.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r1)
        L1a5:
            int[] r1 = r11.a()
            if (r1 == 0) goto L1ee
            com.xiaomi.push.service.XMPushService$r r4 = new com.xiaomi.push.service.XMPushService$r
            r4.<init>(r11)
            r11.a = r4
            android.content.IntentFilter r4 = new android.content.IntentFilter
            r4.<init>()
            java.lang.String r5 = "android.intent.action.SCREEN_ON"
            r4.addAction(r5)
            java.lang.String r5 = "android.intent.action.SCREEN_OFF"
            r4.addAction(r5)
            com.xiaomi.push.service.XMPushService$r r5 = r11.a
            r11.registerReceiver(r5, r4)
            r4 = r1[r3]
            r11.a = r4
            r1 = r1[r2]
            r11.b = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "falldown initialized: "
            r1.append(r2)
            int r2 = r11.a
            r1.append(r2)
            java.lang.String r2 = ","
            r1.append(r2)
            int r2 = r11.b
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L1ee:
            java.lang.String r1 = ""
            if (r0 == 0) goto L20a
            java.lang.String r2 = r0.a     // Catch: java.lang.Exception -> L20a
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L20a
            if (r2 != 0) goto L20a
            java.lang.String r0 = r0.a     // Catch: java.lang.Exception -> L20a
            java.lang.String r2 = "@"
            java.lang.String[] r0 = r0.split(r2)     // Catch: java.lang.Exception -> L20a
            if (r0 == 0) goto L20a
            int r2 = r0.length     // Catch: java.lang.Exception -> L20a
            if (r2 <= 0) goto L20a
            r0 = r0[r3]     // Catch: java.lang.Exception -> L20a
            r1 = r0
        L20a:
            com.xiaomi.push.dd.a(r11)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "XMPushService created. pid="
            r0.append(r2)
            int r2 = android.os.Process.myPid()
            r0.append(r2)
            java.lang.String r2 = ", uid="
            r0.append(r2)
            int r2 = android.os.Process.myUid()
            r0.append(r2)
            java.lang.String r2 = ", vc="
            r0.append(r2)
            android.content.Context r2 = r11.getApplicationContext()
            java.lang.String r3 = r11.getPackageName()
            int r2 = com.xiaomi.push.h.a(r2, r3)
            r0.append(r2)
            java.lang.String r2 = ", uuid="
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r0)
            return
    }

    @Override
    public void onDestroy() {
            r3 = this;
            com.xiaomi.push.service.XMPushService$f r0 = r3.a
            r1 = 0
            if (r0 == 0) goto La
            r3.a(r0)
            r3.a = r1
        La:
            com.xiaomi.push.service.XMPushService$t r0 = r3.a
            if (r0 == 0) goto L13
            r3.a(r0)
            r3.a = r1
        L13:
            com.xiaomi.push.service.XMPushService$k r0 = r3.a
            if (r0 == 0) goto L1c
            r3.a(r0)
            r3.a = r1
        L1c:
            com.xiaomi.push.service.XMPushService$r r0 = r3.a
            if (r0 == 0) goto L25
            r3.a(r0)
            r3.a = r1
        L25:
            com.xiaomi.push.service.XMPushService$a r0 = r3.a
            if (r0 == 0) goto L2e
            r3.a(r0)
            r3.a = r1
        L2e:
            java.lang.String r0 = r3.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L61
            android.database.ContentObserver r0 = r3.a
            if (r0 == 0) goto L61
            android.content.ContentResolver r0 = r3.getContentResolver()     // Catch: java.lang.Throwable -> L48
            android.database.ContentObserver r1 = r3.a     // Catch: java.lang.Throwable -> L48
            r0.unregisterContentObserver(r1)     // Catch: java.lang.Throwable -> L48
            goto L61
        L48:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unregister super-power-mode err:"
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r0)
        L61:
            java.util.Collection<com.xiaomi.push.service.ar> r0 = r3.a
            r0.clear()
            com.xiaomi.push.service.p r0 = r3.a
            r0.b()
            com.xiaomi.push.service.ck r0 = new com.xiaomi.push.service.ck
            r1 = 2
            r0.<init>(r3, r1)
            r3.a(r0)
            com.xiaomi.push.service.XMPushService$l r0 = new com.xiaomi.push.service.XMPushService$l
            r0.<init>(r3)
            r3.a(r0)
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            r0.b()
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            r1 = 15
            r0.a(r3, r1)
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            r0.a()
            com.xiaomi.push.fs r0 = r3.a
            r0.b(r3)
            com.xiaomi.push.service.bv r0 = com.xiaomi.push.service.bv.a()
            r0.a()
            com.xiaomi.push.eu.a()
            r3.i()
            super.onDestroy()
            java.lang.String r0 = "Service destroyed"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            return
    }

    @Override
    public void onStart(android.content.Intent r5, int r6) {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            if (r5 != 0) goto Lc
            java.lang.String r6 = "onStart() with intent NULL"
            com.xiaomi.channel.commonutils.logger.b.d(r6)
            goto L3a
        Lc:
            r6 = 4
            java.lang.Object[] r6 = new java.lang.Object[r6]
            r2 = 0
            java.lang.String r3 = r5.getAction()
            r6[r2] = r3
            r2 = 1
            java.lang.String r3 = com.xiaomi.push.service.bk.t
            java.lang.String r3 = r5.getStringExtra(r3)
            r6[r2] = r3
            r2 = 2
            java.lang.String r3 = com.xiaomi.push.service.bk.B
            java.lang.String r3 = r5.getStringExtra(r3)
            r6[r2] = r3
            r2 = 3
            java.lang.String r3 = "mipush_app_package"
            java.lang.String r3 = r5.getStringExtra(r3)
            r6[r2] = r3
            java.lang.String r2 = "onStart() with intent.Action = %s, chid = %s, pkg = %s|%s"
            java.lang.String r6 = java.lang.String.format(r2, r6)
            com.xiaomi.channel.commonutils.logger.b.a(r6)
        L3a:
            if (r5 == 0) goto Lc1
            java.lang.String r6 = r5.getAction()
            if (r6 == 0) goto Lc1
            java.lang.String r6 = r5.getAction()
            java.lang.String r2 = "com.xiaomi.push.timer"
            boolean r6 = r2.equalsIgnoreCase(r6)
            if (r6 != 0) goto L9f
            java.lang.String r6 = r5.getAction()
            java.lang.String r2 = "com.xiaomi.push.check_alive"
            boolean r6 = r2.equalsIgnoreCase(r6)
            if (r6 == 0) goto L5b
            goto L9f
        L5b:
            java.lang.String r6 = r5.getAction()
            java.lang.String r2 = "com.xiaomi.push.network_status_changed"
            boolean r6 = r2.equalsIgnoreCase(r6)
            if (r6 == 0) goto L68
            goto Lc1
        L68:
            java.lang.String r6 = "ext_chid"
            java.lang.String r6 = r5.getStringExtra(r6)
            java.lang.String r2 = "10"
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto L99
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.String r6 = "rx_msg"
            r5.putExtra(r6, r2)
            android.content.Context r6 = r4.getApplicationContext()
            boolean r6 = com.xiaomi.push.w.a(r6)
            java.lang.String r2 = "screen_on"
            r5.putExtra(r2, r6)
            android.content.Context r6 = r4.getApplicationContext()
            boolean r6 = com.xiaomi.push.bj.e(r6)
            java.lang.String r2 = "wifi"
            r5.putExtra(r2, r6)
        L99:
            com.xiaomi.push.service.XMPushService$i r6 = new com.xiaomi.push.service.XMPushService$i
            r6.<init>(r4, r5)
            goto Lbe
        L9f:
            com.xiaomi.push.service.p r6 = r4.a
            boolean r6 = r6.a()
            if (r6 == 0) goto Lb9
            java.lang.String r5 = "ERROR, the job controller is blocked."
            com.xiaomi.channel.commonutils.logger.b.d(r5)
            com.xiaomi.push.service.bg r5 = com.xiaomi.push.service.bg.a()
            r6 = 14
            r5.a(r4, r6)
            r4.stopSelf()
            goto Lc1
        Lb9:
            com.xiaomi.push.service.XMPushService$i r6 = new com.xiaomi.push.service.XMPushService$i
            r6.<init>(r4, r5)
        Lbe:
            r4.a(r6)
        Lc1:
            long r5 = java.lang.System.currentTimeMillis()
            long r5 = r5 - r0
            r0 = 50
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 <= 0) goto Le5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[Prefs] spend "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = " ms, too more times."
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r5)
        Le5:
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r1, int r2, int r3) {
            r0 = this;
            r0.onStart(r1, r3)
            r1 = 1
            return r1
    }
}
