package com.xiaomi.push.service;

public class bg {
    private static com.xiaomi.push.service.bg a;
    private java.util.List<com.xiaomi.push.service.bg.a> a;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg.b>> a;

    public interface a {
        void a();
    }

    public class b {
        private int a;
        public android.content.Context a;
        android.os.IBinder.DeathRecipient a;
        android.os.Messenger a;
        private com.xiaomi.push.service.XMPushService.c a;
        private com.xiaomi.push.service.XMPushService a;
        final com.xiaomi.push.service.bg.b.b a;
        com.xiaomi.push.service.bg.c a;
        public com.xiaomi.push.service.j a;
        public java.lang.String a;
        private java.util.List<com.xiaomi.push.service.bg.b.a> a;
        public boolean a;
        com.xiaomi.push.service.bg.c b;
        public java.lang.String b;
        private boolean b;
        public java.lang.String c;
        public java.lang.String d;
        public java.lang.String e;
        public java.lang.String f;
        public java.lang.String g;
        public java.lang.String h;
        public java.lang.String i;

        public interface a {
            void a(com.xiaomi.push.service.bg.c r1, com.xiaomi.push.service.bg.c r2, int r3);
        }

        class b extends com.xiaomi.push.service.XMPushService.j {
            final com.xiaomi.push.service.bg.b a;
            java.lang.String a;
            int b;
            java.lang.String b;
            int c;

            public b(com.xiaomi.push.service.bg.b r1) {
                    r0 = this;
                    r0.a = r1
                    r1 = 0
                    r0.<init>(r1)
                    return
            }

            public com.xiaomi.push.service.XMPushService.j a(int r1, int r2, java.lang.String r3, java.lang.String r4) {
                    r0 = this;
                    r0.b = r1
                    r0.c = r2
                    r0.b = r4
                    r0.a = r3
                    return r0
            }

            @Override
            public java.lang.String a() {
                    r1 = this;
                    java.lang.String r0 = "notify job"
                    return r0
            }

            @Override
            public void a() {
                    r5 = this;
                    com.xiaomi.push.service.bg$b r0 = r5.a
                    int r1 = r5.b
                    int r2 = r5.c
                    java.lang.String r3 = r5.b
                    boolean r0 = com.xiaomi.push.service.bg.b.a(r0, r1, r2, r3)
                    if (r0 == 0) goto L1c
                    com.xiaomi.push.service.bg$b r0 = r5.a
                    int r1 = r5.b
                    int r2 = r5.c
                    java.lang.String r3 = r5.a
                    java.lang.String r4 = r5.b
                    com.xiaomi.push.service.bg.b.a(r0, r1, r2, r3, r4)
                    goto L34
                L1c:
                    java.lang.StringBuilder r0 = new java.lang.StringBuilder
                    r0.<init>()
                    java.lang.String r1 = " ignore notify client :"
                    r0.append(r1)
                    com.xiaomi.push.service.bg$b r1 = r5.a
                    java.lang.String r1 = r1.g
                    r0.append(r1)
                    java.lang.String r0 = r0.toString()
                    com.xiaomi.channel.commonutils.logger.b.b(r0)
                L34:
                    return
            }
        }

        class c implements android.os.IBinder.DeathRecipient {
            final android.os.Messenger a;
            final com.xiaomi.push.service.bg.b a;
            final com.xiaomi.push.service.bg.b b;

            c(com.xiaomi.push.service.bg.b r1, com.xiaomi.push.service.bg.b r2, android.os.Messenger r3) {
                    r0 = this;
                    r0.b = r1
                    r0.<init>()
                    r0.a = r2
                    r0.a = r3
                    return
            }

            @Override
            public void binderDied() {
                    r5 = this;
                    java.lang.StringBuilder r0 = new java.lang.StringBuilder
                    r0.<init>()
                    java.lang.String r1 = "peer died, chid = "
                    r0.append(r1)
                    com.xiaomi.push.service.bg$b r1 = r5.a
                    java.lang.String r1 = r1.g
                    r0.append(r1)
                    java.lang.String r0 = r0.toString()
                    com.xiaomi.channel.commonutils.logger.b.b(r0)
                    com.xiaomi.push.service.bg$b r0 = r5.b
                    com.xiaomi.push.service.XMPushService r0 = com.xiaomi.push.service.bg.b.a(r0)
                    com.xiaomi.push.service.bi r1 = new com.xiaomi.push.service.bi
                    r2 = 0
                    r1.<init>(r5, r2)
                    r3 = 0
                    r0.a(r1, r3)
                    com.xiaomi.push.service.bg$b r0 = r5.a
                    java.lang.String r0 = r0.g
                    java.lang.String r1 = "9"
                    boolean r0 = r1.equals(r0)
                    if (r0 == 0) goto L58
                    com.xiaomi.push.service.bg$b r0 = r5.b
                    com.xiaomi.push.service.XMPushService r0 = com.xiaomi.push.service.bg.b.a(r0)
                    java.lang.String r0 = r0.getPackageName()
                    java.lang.String r1 = "com.xiaomi.xmsf"
                    boolean r0 = r1.equals(r0)
                    if (r0 == 0) goto L58
                    com.xiaomi.push.service.bg$b r0 = r5.b
                    com.xiaomi.push.service.XMPushService r0 = com.xiaomi.push.service.bg.b.a(r0)
                    com.xiaomi.push.service.bj r1 = new com.xiaomi.push.service.bj
                    r1.<init>(r5, r2)
                    r2 = 60000(0xea60, double:2.9644E-319)
                    r0.a(r1, r2)
                L58:
                    return
            }
        }

        public b() {
                r2 = this;
                r2.<init>()
                com.xiaomi.push.service.bg$c r0 = com.xiaomi.push.service.bg.c.a
                r2.a = r0
                r0 = 0
                r2.a = r0
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r2.a = r1
                r1 = 0
                r2.b = r1
                r2.b = r0
                com.xiaomi.push.service.XMPushService$c r0 = new com.xiaomi.push.service.XMPushService$c
                r0.<init>(r2)
                r2.a = r0
                r2.a = r1
                com.xiaomi.push.service.bg$b$b r0 = new com.xiaomi.push.service.bg$b$b
                r0.<init>(r2)
                r2.a = r0
                return
        }

        public b(com.xiaomi.push.service.XMPushService r3) {
                r2 = this;
                r2.<init>()
                com.xiaomi.push.service.bg$c r0 = com.xiaomi.push.service.bg.c.a
                r2.a = r0
                r0 = 0
                r2.a = r0
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r2.a = r1
                r1 = 0
                r2.b = r1
                r2.b = r0
                com.xiaomi.push.service.XMPushService$c r0 = new com.xiaomi.push.service.XMPushService$c
                r0.<init>(r2)
                r2.a = r0
                r2.a = r1
                com.xiaomi.push.service.bg$b$b r0 = new com.xiaomi.push.service.bg$b$b
                r0.<init>(r2)
                r2.a = r0
                r2.a = r3
                com.xiaomi.push.service.bh r3 = new com.xiaomi.push.service.bh
                r3.<init>(r2)
                r2.a(r3)
                return
        }

        static com.xiaomi.push.service.XMPushService.c a(com.xiaomi.push.service.bg.b r0) {
                com.xiaomi.push.service.XMPushService$c r0 = r0.a
                return r0
        }

        static com.xiaomi.push.service.XMPushService a(com.xiaomi.push.service.bg.b r0) {
                com.xiaomi.push.service.XMPushService r0 = r0.a
                return r0
        }

        public static java.lang.String a(java.lang.String r3) {
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                java.lang.String r1 = ""
                if (r0 == 0) goto L9
                return r1
            L9:
                java.lang.String r0 = "/"
                int r0 = r3.lastIndexOf(r0)
                r2 = -1
                if (r0 == r2) goto L18
                int r0 = r0 + 1
                java.lang.String r1 = r3.substring(r0)
            L18:
                return r1
        }

        private void a(int r10, int r11, java.lang.String r12, java.lang.String r13) {
                r9 = this;
                com.xiaomi.push.service.bg$c r0 = r9.a
                r9.b = r0
                r1 = 2
                if (r10 != r1) goto Lf
                com.xiaomi.push.service.j r10 = r9.a
                android.content.Context r12 = r9.a
                r10.a(r12, r9, r11)
                goto L57
            Lf:
                r1 = 3
                if (r10 != r1) goto L1a
                com.xiaomi.push.service.j r10 = r9.a
                android.content.Context r11 = r9.a
                r10.a(r11, r9, r13, r12)
                goto L57
            L1a:
                r1 = 1
                if (r10 != r1) goto L57
                com.xiaomi.push.service.bg$c r10 = com.xiaomi.push.service.bg.c.c
                r2 = 0
                if (r0 != r10) goto L24
                r6 = r1
                goto L25
            L24:
                r6 = r2
            L25:
                if (r6 != 0) goto L35
                java.lang.String r10 = "wait"
                boolean r10 = r10.equals(r13)
                if (r10 == 0) goto L35
                int r10 = r9.a
                int r10 = r10 + r1
                r9.a = r10
                goto L4d
            L35:
                if (r6 == 0) goto L4d
                r9.a = r2
                android.os.Messenger r10 = r9.a
                if (r10 == 0) goto L4d
                r10 = 0
                r13 = 16
                com.xiaomi.push.service.XMPushService r0 = r9.a
                android.os.Messenger r0 = r0.a
                android.os.Message r10 = android.os.Message.obtain(r10, r13, r0)
                android.os.Messenger r13 = r9.a     // Catch: android.os.RemoteException -> L4d
                r13.send(r10)     // Catch: android.os.RemoteException -> L4d
            L4d:
                com.xiaomi.push.service.j r3 = r9.a
                com.xiaomi.push.service.XMPushService r4 = r9.a
                r5 = r9
                r7 = r11
                r8 = r12
                r3.a(r4, r5, r6, r7, r8)
            L57:
                return
        }

        static void a(com.xiaomi.push.service.bg.b r0, int r1, int r2, java.lang.String r3, java.lang.String r4) {
                r0.a(r1, r2, r3, r4)
                return
        }

        private boolean a(int r3, int r4, java.lang.String r5) {
                r2 = this;
                com.xiaomi.push.service.bg$c r3 = r2.b
                r4 = 1
                if (r3 == 0) goto L4b
                boolean r5 = r2.b
                if (r5 != 0) goto La
                goto L4b
            La:
                com.xiaomi.push.service.bg$c r0 = r2.a
                r1 = 0
                if (r3 != r0) goto L26
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = " status recovered, don't notify client:"
            L16:
                r3.append(r4)
                java.lang.String r4 = r2.g
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                com.xiaomi.channel.commonutils.logger.b.b(r3)
                return r1
            L26:
                android.os.Messenger r3 = r2.a
                if (r3 == 0) goto L43
                if (r5 == 0) goto L43
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r5 = "Peer alive notify status to client:"
                r3.append(r5)
                java.lang.String r5 = r2.g
                r3.append(r5)
                java.lang.String r3 = r3.toString()
                com.xiaomi.channel.commonutils.logger.b.b(r3)
                return r4
            L43:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = "peer died, ignore notify "
                goto L16
            L4b:
                return r4
        }

        static boolean a(com.xiaomi.push.service.bg.b r0, int r1, int r2, java.lang.String r3) {
                boolean r0 = r0.a(r1, r2, r3)
                return r0
        }

        private boolean b(int r5, int r6, java.lang.String r7) {
                r4 = this;
                java.lang.String r0 = "wait"
                r1 = 1
                r2 = 0
                if (r5 == r1) goto L1a
                r6 = 2
                if (r5 == r6) goto L13
                r6 = 3
                if (r5 == r6) goto Ld
                return r2
            Ld:
                boolean r5 = r0.equals(r7)
                r5 = r5 ^ r1
                return r5
            L13:
                com.xiaomi.push.service.XMPushService r5 = r4.a
                boolean r5 = r5.c()
                return r5
            L1a:
                com.xiaomi.push.service.bg$c r5 = r4.a
                com.xiaomi.push.service.bg$c r3 = com.xiaomi.push.service.bg.c.c
                if (r5 != r3) goto L21
                return r2
            L21:
                com.xiaomi.push.service.XMPushService r5 = r4.a
                boolean r5 = r5.c()
                if (r5 != 0) goto L2a
                return r2
            L2a:
                r5 = 21
                if (r6 == r5) goto L39
                r5 = 7
                if (r6 != r5) goto L38
                boolean r5 = r0.equals(r7)
                if (r5 == 0) goto L38
                goto L39
            L38:
                return r1
            L39:
                return r2
        }

        public long a() {
                r4 = this;
                double r0 = java.lang.Math.random()
                r2 = 4626322717216342016(0x4034000000000000, double:20.0)
                double r0 = r0 * r2
                r2 = 4621819117588971520(0x4024000000000000, double:10.0)
                double r0 = r0 - r2
                long r0 = (long) r0
                int r2 = r4.a
                int r2 = r2 + 1
                int r2 = r2 * 15
                long r2 = (long) r2
                long r0 = r0 + r2
                r2 = 1000(0x3e8, double:4.94E-321)
                long r0 = r0 * r2
                return r0
        }

        public java.lang.String a(int r2) {
                r1 = this;
                r0 = 1
                if (r2 == r0) goto L12
                r0 = 2
                if (r2 == r0) goto Lf
                r0 = 3
                if (r2 == r0) goto Lc
                java.lang.String r2 = "unknown"
                return r2
            Lc:
                java.lang.String r2 = "KICK"
                return r2
            Lf:
                java.lang.String r2 = "CLOSE"
                return r2
            L12:
                java.lang.String r2 = "OPEN"
                return r2
        }

        void a() {
                r3 = this;
                android.os.Messenger r0 = r3.a     // Catch: java.lang.Exception -> L12
                if (r0 == 0) goto L12
                android.os.IBinder$DeathRecipient r1 = r3.a     // Catch: java.lang.Exception -> L12
                if (r1 == 0) goto L12
                android.os.IBinder r0 = r0.getBinder()     // Catch: java.lang.Exception -> L12
                android.os.IBinder$DeathRecipient r1 = r3.a     // Catch: java.lang.Exception -> L12
                r2 = 0
                r0.unlinkToDeath(r1, r2)     // Catch: java.lang.Exception -> L12
            L12:
                r0 = 0
                r3.b = r0
                return
        }

        void a(android.os.Messenger r4) {
                r3 = this;
                r3.a()
                r0 = 0
                if (r4 == 0) goto L1c
                r3.a = r4     // Catch: java.lang.Exception -> L33
                r1 = 1
                r3.b = r1     // Catch: java.lang.Exception -> L33
                com.xiaomi.push.service.bg$b$c r1 = new com.xiaomi.push.service.bg$b$c     // Catch: java.lang.Exception -> L33
                r1.<init>(r3, r3, r4)     // Catch: java.lang.Exception -> L33
                r3.a = r1     // Catch: java.lang.Exception -> L33
                android.os.IBinder r4 = r4.getBinder()     // Catch: java.lang.Exception -> L33
                android.os.IBinder$DeathRecipient r1 = r3.a     // Catch: java.lang.Exception -> L33
                r4.linkToDeath(r1, r0)     // Catch: java.lang.Exception -> L33
                goto L51
            L1c:
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L33
                r4.<init>()     // Catch: java.lang.Exception -> L33
                java.lang.String r1 = "peer linked with old sdk chid = "
                r4.append(r1)     // Catch: java.lang.Exception -> L33
                java.lang.String r1 = r3.g     // Catch: java.lang.Exception -> L33
                r4.append(r1)     // Catch: java.lang.Exception -> L33
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L33
                com.xiaomi.channel.commonutils.logger.b.b(r4)     // Catch: java.lang.Exception -> L33
                goto L51
            L33:
                r4 = move-exception
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "peer linkToDeath err: "
                r1.append(r2)
                java.lang.String r4 = r4.getMessage()
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                com.xiaomi.channel.commonutils.logger.b.b(r4)
                r4 = 0
                r3.a = r4
                r3.b = r0
            L51:
                return
        }

        public void a(com.xiaomi.push.service.bg.b.a r3) {
                r2 = this;
                java.util.List<com.xiaomi.push.service.bg$b$a> r0 = r2.a
                monitor-enter(r0)
                java.util.List<com.xiaomi.push.service.bg$b$a> r1 = r2.a     // Catch: java.lang.Throwable -> La
                r1.add(r3)     // Catch: java.lang.Throwable -> La
                monitor-exit(r0)     // Catch: java.lang.Throwable -> La
                return
            La:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> La
                throw r3
        }

        public void a(com.xiaomi.push.service.bg.c r5, int r6, int r7, java.lang.String r8, java.lang.String r9) {
                r4 = this;
                java.util.List<com.xiaomi.push.service.bg$b$a> r0 = r4.a
                monitor-enter(r0)
                java.util.List<com.xiaomi.push.service.bg$b$a> r1 = r4.a     // Catch: java.lang.Throwable -> L8f
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L8f
            L9:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L8f
                if (r2 == 0) goto L1b
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L8f
                com.xiaomi.push.service.bg$b$a r2 = (com.xiaomi.push.service.bg.b.a) r2     // Catch: java.lang.Throwable -> L8f
                com.xiaomi.push.service.bg$c r3 = r4.a     // Catch: java.lang.Throwable -> L8f
                r2.a(r3, r5, r7)     // Catch: java.lang.Throwable -> L8f
                goto L9
            L1b:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L8f
                com.xiaomi.push.service.bg$c r0 = r4.a
                r1 = 0
                if (r0 == r5) goto L4d
                r2 = 7
                java.lang.Object[] r2 = new java.lang.Object[r2]
                r2[r1] = r0
                r0 = 1
                r2[r0] = r5
                r0 = 2
                java.lang.String r3 = r4.a(r6)
                r2[r0] = r3
                r0 = 3
                java.lang.String r3 = com.xiaomi.push.service.bk.a(r7)
                r2[r0] = r3
                r0 = 4
                r2[r0] = r8
                r0 = 5
                r2[r0] = r9
                r0 = 6
                java.lang.String r3 = r4.g
                r2[r0] = r3
                java.lang.String r0 = "update the client %7$s status. %1$s->%2$s %3$s %4$s %5$s %6$s"
                java.lang.String r0 = java.lang.String.format(r0, r2)
                com.xiaomi.channel.commonutils.logger.b.a(r0)
                r4.a = r5
            L4d:
                com.xiaomi.push.service.j r0 = r4.a
                if (r0 != 0) goto L57
                java.lang.String r5 = "status changed while the client dispatcher is missing"
                com.xiaomi.channel.commonutils.logger.b.d(r5)
                return
            L57:
                com.xiaomi.push.service.bg$c r0 = com.xiaomi.push.service.bg.c.b
                if (r5 != r0) goto L5c
                return
            L5c:
                r5 = 10100(0x2774, float:1.4153E-41)
                com.xiaomi.push.service.bg$c r0 = r4.b
                if (r0 == 0) goto L71
                boolean r0 = r4.b
                if (r0 != 0) goto L67
                goto L71
            L67:
                android.os.Messenger r1 = r4.a
                if (r1 == 0) goto L70
                if (r0 == 0) goto L70
                r1 = 1000(0x3e8, float:1.401E-42)
                goto L71
            L70:
                r1 = r5
            L71:
                com.xiaomi.push.service.XMPushService r5 = r4.a
                com.xiaomi.push.service.bg$b$b r0 = r4.a
                r5.b(r0)
                boolean r5 = r4.b(r6, r7, r9)
                if (r5 == 0) goto L82
                r4.a(r6, r7, r8, r9)
                goto L8e
            L82:
                com.xiaomi.push.service.XMPushService r5 = r4.a
                com.xiaomi.push.service.bg$b$b r0 = r4.a
                com.xiaomi.push.service.XMPushService$j r6 = r0.a(r6, r7, r8, r9)
                long r7 = (long) r1
                r5.a(r6, r7)
            L8e:
                return
            L8f:
                r5 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L8f
                throw r5
        }

        public void b(com.xiaomi.push.service.bg.b.a r3) {
                r2 = this;
                java.util.List<com.xiaomi.push.service.bg$b$a> r0 = r2.a
                monitor-enter(r0)
                java.util.List<com.xiaomi.push.service.bg$b$a> r1 = r2.a     // Catch: java.lang.Throwable -> La
                r1.remove(r3)     // Catch: java.lang.Throwable -> La
                monitor-exit(r0)     // Catch: java.lang.Throwable -> La
                return
            La:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> La
                throw r3
        }
    }

    public enum c extends java.lang.Enum<com.xiaomi.push.service.bg.c> {
        public static final com.xiaomi.push.service.bg.c a = null;
        private static final com.xiaomi.push.service.bg.c[] a = null;
        public static final com.xiaomi.push.service.bg.c b = null;
        public static final com.xiaomi.push.service.bg.c c = null;

        static {
                com.xiaomi.push.service.bg$c r0 = new com.xiaomi.push.service.bg$c
                r1 = 0
                java.lang.String r2 = "unbind"
                r0.<init>(r2, r1)
                com.xiaomi.push.service.bg.c.a = r0
                com.xiaomi.push.service.bg$c r0 = new com.xiaomi.push.service.bg$c
                r2 = 1
                java.lang.String r3 = "binding"
                r0.<init>(r3, r2)
                com.xiaomi.push.service.bg.c.b = r0
                com.xiaomi.push.service.bg$c r0 = new com.xiaomi.push.service.bg$c
                r3 = 2
                java.lang.String r4 = "binded"
                r0.<init>(r4, r3)
                com.xiaomi.push.service.bg.c.c = r0
                r4 = 3
                com.xiaomi.push.service.bg$c[] r4 = new com.xiaomi.push.service.bg.c[r4]
                com.xiaomi.push.service.bg$c r5 = com.xiaomi.push.service.bg.c.a
                r4[r1] = r5
                com.xiaomi.push.service.bg$c r1 = com.xiaomi.push.service.bg.c.b
                r4[r2] = r1
                r4[r3] = r0
                com.xiaomi.push.service.bg.c.a = r4
                return
        }

        c(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.xiaomi.push.service.bg.c valueOf(java.lang.String r1) {
                java.lang.Class<com.xiaomi.push.service.bg$c> r0 = com.xiaomi.push.service.bg.c.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.xiaomi.push.service.bg$c r1 = (com.xiaomi.push.service.bg.c) r1
                return r1
        }

        public static com.xiaomi.push.service.bg.c[] values() {
                com.xiaomi.push.service.bg$c[] r0 = com.xiaomi.push.service.bg.c.a
                java.lang.Object r0 = r0.clone()
                com.xiaomi.push.service.bg$c[] r0 = (com.xiaomi.push.service.bg.c[]) r0
                return r0
        }
    }

    private bg() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            return
    }

    public static synchronized com.xiaomi.push.service.bg a() {
            java.lang.Class<com.xiaomi.push.service.bg> r0 = com.xiaomi.push.service.bg.class
            monitor-enter(r0)
            com.xiaomi.push.service.bg r1 = com.xiaomi.push.service.bg.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.xiaomi.push.service.bg r1 = new com.xiaomi.push.service.bg     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.xiaomi.push.service.bg.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.xiaomi.push.service.bg r1 = com.xiaomi.push.service.bg.a     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private java.lang.String a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L8
            r3 = 0
            return r3
        L8:
            java.lang.String r0 = "@"
            int r0 = r3.indexOf(r0)
            if (r0 <= 0) goto L15
            r1 = 0
            java.lang.String r3 = r3.substring(r1, r0)
        L15:
            return r3
    }

    public synchronized int a() {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r0 = r1.a     // Catch: java.lang.Throwable -> L9
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized com.xiaomi.push.service.bg.b a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r0 = r1.a     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L1a
            java.util.HashMap r2 = (java.util.HashMap) r2     // Catch: java.lang.Throwable -> L1a
            if (r2 != 0) goto Le
            r2 = 0
            monitor-exit(r1)
            return r2
        Le:
            java.lang.String r3 = r1.a(r3)     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L1a
            com.xiaomi.push.service.bg$b r2 = (com.xiaomi.push.service.bg.b) r2     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r1)
            return r2
        L1a:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized java.util.ArrayList<com.xiaomi.push.service.bg.b> a() {
            r3 = this;
            monitor-enter(r3)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L26
            r0.<init>()     // Catch: java.lang.Throwable -> L26
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r1 = r3.a     // Catch: java.lang.Throwable -> L26
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L26
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L26
        L10:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L26
            if (r2 == 0) goto L24
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L26
            java.util.HashMap r2 = (java.util.HashMap) r2     // Catch: java.lang.Throwable -> L26
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L26
            r0.addAll(r2)     // Catch: java.lang.Throwable -> L26
            goto L10
        L24:
            monitor-exit(r3)
            return r0
        L26:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public synchronized java.util.Collection<com.xiaomi.push.service.bg.b> a(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r0 = r1.a     // Catch: java.lang.Throwable -> L24
            boolean r0 = r0.containsKey(r2)     // Catch: java.lang.Throwable -> L24
            if (r0 != 0) goto L10
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L24
            r2.<init>()     // Catch: java.lang.Throwable -> L24
            monitor-exit(r1)
            return r2
        L10:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r0 = r1.a     // Catch: java.lang.Throwable -> L24
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L24
            java.util.HashMap r2 = (java.util.HashMap) r2     // Catch: java.lang.Throwable -> L24
            java.lang.Object r2 = r2.clone()     // Catch: java.lang.Throwable -> L24
            java.util.HashMap r2 = (java.util.HashMap) r2     // Catch: java.lang.Throwable -> L24
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L24
            monitor-exit(r1)
            return r2
        L24:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized java.util.List<java.lang.String> a(java.lang.String r6) {
            r5 = this;
            monitor-enter(r5)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L40
            r0.<init>()     // Catch: java.lang.Throwable -> L40
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r1 = r5.a     // Catch: java.lang.Throwable -> L40
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L40
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L40
        L10:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L40
            if (r2 == 0) goto L3e
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L40
            java.util.HashMap r2 = (java.util.HashMap) r2     // Catch: java.lang.Throwable -> L40
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L40
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L40
        L24:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L40
            if (r3 == 0) goto L10
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L40
            com.xiaomi.push.service.bg$b r3 = (com.xiaomi.push.service.bg.b) r3     // Catch: java.lang.Throwable -> L40
            java.lang.String r4 = r3.a     // Catch: java.lang.Throwable -> L40
            boolean r4 = r6.equals(r4)     // Catch: java.lang.Throwable -> L40
            if (r4 == 0) goto L24
            java.lang.String r3 = r3.g     // Catch: java.lang.Throwable -> L40
            r0.add(r3)     // Catch: java.lang.Throwable -> L40
            goto L24
        L3e:
            monitor-exit(r5)
            return r0
        L40:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public synchronized void a() {
            r2 = this;
            monitor-enter(r2)
            java.util.ArrayList r0 = r2.a()     // Catch: java.lang.Throwable -> L20
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L20
        L9:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L20
            if (r1 == 0) goto L19
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L20
            com.xiaomi.push.service.bg$b r1 = (com.xiaomi.push.service.bg.b) r1     // Catch: java.lang.Throwable -> L20
            r1.a()     // Catch: java.lang.Throwable -> L20
            goto L9
        L19:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r0 = r2.a     // Catch: java.lang.Throwable -> L20
            r0.clear()     // Catch: java.lang.Throwable -> L20
            monitor-exit(r2)
            return
        L20:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized void a(android.content.Context r9) {
            r8 = this;
            monitor-enter(r8)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r9 = r8.a     // Catch: java.lang.Throwable -> L38
            java.util.Collection r9 = r9.values()     // Catch: java.lang.Throwable -> L38
            java.util.Iterator r9 = r9.iterator()     // Catch: java.lang.Throwable -> L38
        Lb:
            boolean r0 = r9.hasNext()     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L36
            java.lang.Object r0 = r9.next()     // Catch: java.lang.Throwable -> L38
            java.util.HashMap r0 = (java.util.HashMap) r0     // Catch: java.lang.Throwable -> L38
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L38
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L38
        L1f:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto Lb
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L38
            r2 = r1
            com.xiaomi.push.service.bg$b r2 = (com.xiaomi.push.service.bg.b) r2     // Catch: java.lang.Throwable -> L38
            com.xiaomi.push.service.bg$c r3 = com.xiaomi.push.service.bg.c.a     // Catch: java.lang.Throwable -> L38
            r4 = 1
            r5 = 3
            r6 = 0
            r7 = 0
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L38
            goto L1f
        L36:
            monitor-exit(r8)
            return
        L38:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public synchronized void a(android.content.Context r9, int r10) {
            r8 = this;
            monitor-enter(r8)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r9 = r8.a     // Catch: java.lang.Throwable -> L38
            java.util.Collection r9 = r9.values()     // Catch: java.lang.Throwable -> L38
            java.util.Iterator r9 = r9.iterator()     // Catch: java.lang.Throwable -> L38
        Lb:
            boolean r0 = r9.hasNext()     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L36
            java.lang.Object r0 = r9.next()     // Catch: java.lang.Throwable -> L38
            java.util.HashMap r0 = (java.util.HashMap) r0     // Catch: java.lang.Throwable -> L38
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L38
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L38
        L1f:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto Lb
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L38
            r2 = r1
            com.xiaomi.push.service.bg$b r2 = (com.xiaomi.push.service.bg.b) r2     // Catch: java.lang.Throwable -> L38
            com.xiaomi.push.service.bg$c r3 = com.xiaomi.push.service.bg.c.a     // Catch: java.lang.Throwable -> L38
            r4 = 2
            r6 = 0
            r7 = 0
            r5 = r10
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L38
            goto L1f
        L36:
            monitor-exit(r8)
            return
        L38:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public synchronized void a(com.xiaomi.push.service.bg.a r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.xiaomi.push.service.bg$a> r0 = r1.a     // Catch: java.lang.Throwable -> L8
            r0.add(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void a(com.xiaomi.push.service.bg.b r4) {
            r3 = this;
            monitor-enter(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r0 = r3.a     // Catch: java.lang.Throwable -> L50
            java.lang.String r1 = r4.g     // Catch: java.lang.Throwable -> L50
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L50
            java.util.HashMap r0 = (java.util.HashMap) r0     // Catch: java.lang.Throwable -> L50
            if (r0 != 0) goto L19
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L50
            r0.<init>()     // Catch: java.lang.Throwable -> L50
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r1 = r3.a     // Catch: java.lang.Throwable -> L50
            java.lang.String r2 = r4.g     // Catch: java.lang.Throwable -> L50
            r1.put(r2, r0)     // Catch: java.lang.Throwable -> L50
        L19:
            java.lang.String r1 = r4.b     // Catch: java.lang.Throwable -> L50
            java.lang.String r1 = r3.a(r1)     // Catch: java.lang.Throwable -> L50
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L50
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            r0.<init>()     // Catch: java.lang.Throwable -> L50
            java.lang.String r1 = "add active client. "
            r0.append(r1)     // Catch: java.lang.Throwable -> L50
            java.lang.String r4 = r4.a     // Catch: java.lang.Throwable -> L50
            r0.append(r4)     // Catch: java.lang.Throwable -> L50
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L50
            com.xiaomi.channel.commonutils.logger.b.a(r4)     // Catch: java.lang.Throwable -> L50
            java.util.List<com.xiaomi.push.service.bg$a> r4 = r3.a     // Catch: java.lang.Throwable -> L50
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L50
        L3e:
            boolean r0 = r4.hasNext()     // Catch: java.lang.Throwable -> L50
            if (r0 == 0) goto L4e
            java.lang.Object r0 = r4.next()     // Catch: java.lang.Throwable -> L50
            com.xiaomi.push.service.bg$a r0 = (com.xiaomi.push.service.bg.a) r0     // Catch: java.lang.Throwable -> L50
            r0.a()     // Catch: java.lang.Throwable -> L50
            goto L3e
        L4e:
            monitor-exit(r3)
            return
        L50:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized void a(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r0 = r3.a     // Catch: java.lang.Throwable -> L43
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L43
            java.util.HashMap r0 = (java.util.HashMap) r0     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L2b
            java.util.Collection r1 = r0.values()     // Catch: java.lang.Throwable -> L43
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L43
        L13:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L43
            if (r2 == 0) goto L23
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L43
            com.xiaomi.push.service.bg$b r2 = (com.xiaomi.push.service.bg.b) r2     // Catch: java.lang.Throwable -> L43
            r2.a()     // Catch: java.lang.Throwable -> L43
            goto L13
        L23:
            r0.clear()     // Catch: java.lang.Throwable -> L43
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r0 = r3.a     // Catch: java.lang.Throwable -> L43
            r0.remove(r4)     // Catch: java.lang.Throwable -> L43
        L2b:
            java.util.List<com.xiaomi.push.service.bg$a> r4 = r3.a     // Catch: java.lang.Throwable -> L43
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L43
        L31:
            boolean r0 = r4.hasNext()     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L41
            java.lang.Object r0 = r4.next()     // Catch: java.lang.Throwable -> L43
            com.xiaomi.push.service.bg$a r0 = (com.xiaomi.push.service.bg.a) r0     // Catch: java.lang.Throwable -> L43
            r0.a()     // Catch: java.lang.Throwable -> L43
            goto L31
        L41:
            monitor-exit(r3)
            return
        L43:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            monitor-enter(r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r0 = r2.a     // Catch: java.lang.Throwable -> L44
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L44
            java.util.HashMap r0 = (java.util.HashMap) r0     // Catch: java.lang.Throwable -> L44
            if (r0 == 0) goto L2c
            java.lang.String r1 = r2.a(r4)     // Catch: java.lang.Throwable -> L44
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Throwable -> L44
            com.xiaomi.push.service.bg$b r1 = (com.xiaomi.push.service.bg.b) r1     // Catch: java.lang.Throwable -> L44
            if (r1 == 0) goto L1a
            r1.a()     // Catch: java.lang.Throwable -> L44
        L1a:
            java.lang.String r4 = r2.a(r4)     // Catch: java.lang.Throwable -> L44
            r0.remove(r4)     // Catch: java.lang.Throwable -> L44
            boolean r4 = r0.isEmpty()     // Catch: java.lang.Throwable -> L44
            if (r4 == 0) goto L2c
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.HashMap<java.lang.String, com.xiaomi.push.service.bg$b>> r4 = r2.a     // Catch: java.lang.Throwable -> L44
            r4.remove(r3)     // Catch: java.lang.Throwable -> L44
        L2c:
            java.util.List<com.xiaomi.push.service.bg$a> r3 = r2.a     // Catch: java.lang.Throwable -> L44
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L44
        L32:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L44
            if (r4 == 0) goto L42
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L44
            com.xiaomi.push.service.bg$a r4 = (com.xiaomi.push.service.bg.a) r4     // Catch: java.lang.Throwable -> L44
            r4.a()     // Catch: java.lang.Throwable -> L44
            goto L32
        L42:
            monitor-exit(r2)
            return
        L44:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized void b() {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.xiaomi.push.service.bg$a> r0 = r1.a     // Catch: java.lang.Throwable -> L8
            r0.clear()     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
