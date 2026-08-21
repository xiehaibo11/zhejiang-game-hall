package com.xiaomi.mipush.sdk;

public class MiTinyDataClient {
    public static final java.lang.String PENDING_REASON_APPID = "com.xiaomi.xmpushsdk.tinydataPending.appId";
    public static final java.lang.String PENDING_REASON_CHANNEL = "com.xiaomi.xmpushsdk.tinydataPending.channel";
    public static final java.lang.String PENDING_REASON_INIT = "com.xiaomi.xmpushsdk.tinydataPending.init";

    public class a {
        private static volatile com.xiaomi.mipush.sdk.MiTinyDataClient.a a;
        private android.content.Context a;
        private com.xiaomi.mipush.sdk.MiTinyDataClient.a.a a;
        private java.lang.Boolean a;
        private java.lang.String a;
        private final java.util.ArrayList<com.xiaomi.push.hn> a;

        public class a {
            final com.xiaomi.mipush.sdk.MiTinyDataClient.a a;
            private final java.lang.Runnable a;
            public final java.util.ArrayList<com.xiaomi.push.hn> a;
            private java.util.concurrent.ScheduledFuture<?> a;
            private java.util.concurrent.ScheduledThreadPoolExecutor a;

            public a(com.xiaomi.mipush.sdk.MiTinyDataClient.a r2) {
                    r1 = this;
                    r1.a = r2
                    r1.<init>()
                    java.util.concurrent.ScheduledThreadPoolExecutor r2 = new java.util.concurrent.ScheduledThreadPoolExecutor
                    r0 = 1
                    r2.<init>(r0)
                    r1.a = r2
                    java.util.ArrayList r2 = new java.util.ArrayList
                    r2.<init>()
                    r1.a = r2
                    com.xiaomi.mipush.sdk.ab r2 = new com.xiaomi.mipush.sdk.ab
                    r2.<init>(r1)
                    r1.a = r2
                    return
            }

            static java.util.concurrent.ScheduledFuture a(com.xiaomi.mipush.sdk.MiTinyDataClient.a.a r0) {
                    java.util.concurrent.ScheduledFuture<?> r0 = r0.a
                    return r0
            }

            static java.util.concurrent.ScheduledFuture a(com.xiaomi.mipush.sdk.MiTinyDataClient.a.a r0, java.util.concurrent.ScheduledFuture r1) {
                    r0.a = r1
                    return r1
            }

            private void a() {
                    r8 = this;
                    java.util.concurrent.ScheduledFuture<?> r0 = r8.a
                    if (r0 != 0) goto L14
                    java.util.concurrent.ScheduledThreadPoolExecutor r1 = r8.a
                    java.lang.Runnable r2 = r8.a
                    r3 = 1000(0x3e8, double:4.94E-321)
                    r5 = 1000(0x3e8, double:4.94E-321)
                    java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS
                    java.util.concurrent.ScheduledFuture r0 = r1.scheduleAtFixedRate(r2, r3, r5, r7)
                    r8.a = r0
                L14:
                    return
            }

            static void a(com.xiaomi.mipush.sdk.MiTinyDataClient.a.a r0) {
                    r0.a()
                    return
            }

            private void b() {
                    r7 = this;
                    java.util.ArrayList<com.xiaomi.push.hn> r0 = r7.a
                    r1 = 0
                    java.lang.Object r0 = r0.remove(r1)
                    com.xiaomi.push.hn r0 = (com.xiaomi.push.hn) r0
                    com.xiaomi.mipush.sdk.MiTinyDataClient$a r2 = r7.a
                    android.content.Context r2 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a(r2)
                    java.lang.String r2 = r2.getPackageName()
                    com.xiaomi.mipush.sdk.MiTinyDataClient$a r3 = r7.a
                    android.content.Context r3 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a(r3)
                    com.xiaomi.mipush.sdk.b r3 = com.xiaomi.mipush.sdk.b.a(r3)
                    java.lang.String r3 = r3.a()
                    r4 = 1
                    com.xiaomi.push.hn[] r5 = new com.xiaomi.push.hn[r4]
                    r5[r1] = r0
                    java.util.List r1 = java.util.Arrays.asList(r5)
                    r5 = 30720(0x7800, float:4.3048E-41)
                    java.util.ArrayList r1 = com.xiaomi.push.service.bz.a(r1, r2, r3, r5)
                    java.util.Iterator r1 = r1.iterator()
                L34:
                    boolean r2 = r1.hasNext()
                    if (r2 == 0) goto L69
                    java.lang.Object r2 = r1.next()
                    com.xiaomi.push.ii r2 = (com.xiaomi.push.ii) r2
                    java.lang.StringBuilder r3 = new java.lang.StringBuilder
                    r3.<init>()
                    java.lang.String r5 = "MiTinyDataClient Send item by PushServiceClient.sendMessage(XmActionNotification)."
                    r3.append(r5)
                    java.lang.String r5 = r0.d()
                    r3.append(r5)
                    java.lang.String r3 = r3.toString()
                    com.xiaomi.channel.commonutils.logger.b.c(r3)
                    com.xiaomi.mipush.sdk.MiTinyDataClient$a r3 = r7.a
                    android.content.Context r3 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a(r3)
                    com.xiaomi.mipush.sdk.ao r3 = com.xiaomi.mipush.sdk.ao.a(r3)
                    com.xiaomi.push.hj r5 = com.xiaomi.push.hj.i
                    r6 = 0
                    r3.a(r2, r5, r4, r6)
                    goto L34
                L69:
                    return
            }

            static void b(com.xiaomi.mipush.sdk.MiTinyDataClient.a.a r0) {
                    r0.b()
                    return
            }

            public void a(com.xiaomi.push.hn r3) {
                    r2 = this;
                    java.util.concurrent.ScheduledThreadPoolExecutor r0 = r2.a
                    com.xiaomi.mipush.sdk.aa r1 = new com.xiaomi.mipush.sdk.aa
                    r1.<init>(r2, r3)
                    r0.execute(r1)
                    return
            }
        }

        public a() {
                r1 = this;
                r1.<init>()
                com.xiaomi.mipush.sdk.MiTinyDataClient$a$a r0 = new com.xiaomi.mipush.sdk.MiTinyDataClient$a$a
                r0.<init>(r1)
                r1.a = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.a = r0
                return
        }

        static android.content.Context a(com.xiaomi.mipush.sdk.MiTinyDataClient.a r0) {
                android.content.Context r0 = r0.a
                return r0
        }

        public static com.xiaomi.mipush.sdk.MiTinyDataClient.a a() {
                com.xiaomi.mipush.sdk.MiTinyDataClient$a r0 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a
                if (r0 != 0) goto L17
                java.lang.Class<com.xiaomi.mipush.sdk.MiTinyDataClient$a> r0 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.class
                monitor-enter(r0)
                com.xiaomi.mipush.sdk.MiTinyDataClient$a r1 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a     // Catch: java.lang.Throwable -> L14
                if (r1 != 0) goto L12
                com.xiaomi.mipush.sdk.MiTinyDataClient$a r1 = new com.xiaomi.mipush.sdk.MiTinyDataClient$a     // Catch: java.lang.Throwable -> L14
                r1.<init>()     // Catch: java.lang.Throwable -> L14
                com.xiaomi.mipush.sdk.MiTinyDataClient.a.a = r1     // Catch: java.lang.Throwable -> L14
            L12:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
                goto L17
            L14:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
                throw r1
            L17:
                com.xiaomi.mipush.sdk.MiTinyDataClient$a r0 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a
                return r0
        }

        private void a(com.xiaomi.push.hn r3) {
                r2 = this;
                java.util.ArrayList<com.xiaomi.push.hn> r0 = r2.a
                monitor-enter(r0)
                java.util.ArrayList<com.xiaomi.push.hn> r1 = r2.a     // Catch: java.lang.Throwable -> L22
                boolean r1 = r1.contains(r3)     // Catch: java.lang.Throwable -> L22
                if (r1 != 0) goto L20
                java.util.ArrayList<com.xiaomi.push.hn> r1 = r2.a     // Catch: java.lang.Throwable -> L22
                r1.add(r3)     // Catch: java.lang.Throwable -> L22
                java.util.ArrayList<com.xiaomi.push.hn> r3 = r2.a     // Catch: java.lang.Throwable -> L22
                int r3 = r3.size()     // Catch: java.lang.Throwable -> L22
                r1 = 100
                if (r3 <= r1) goto L20
                java.util.ArrayList<com.xiaomi.push.hn> r3 = r2.a     // Catch: java.lang.Throwable -> L22
                r1 = 0
                r3.remove(r1)     // Catch: java.lang.Throwable -> L22
            L20:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
                return
            L22:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
                throw r3
        }

        private boolean a(android.content.Context r5) {
                r4 = this;
                com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r5)
                boolean r0 = r0.a()
                r1 = 1
                if (r0 != 0) goto Lc
                return r1
            Lc:
                android.content.pm.PackageManager r5 = r5.getPackageManager()
                r0 = 0
                java.lang.String r2 = "com.xiaomi.xmsf"
                r3 = 4
                android.content.pm.PackageInfo r5 = r5.getPackageInfo(r2, r3)     // Catch: java.lang.Exception -> L23
                if (r5 != 0) goto L1b
                return r0
            L1b:
                int r5 = r5.versionCode     // Catch: java.lang.Exception -> L23
                r2 = 108(0x6c, float:1.51E-43)
                if (r5 >= r2) goto L22
                return r0
            L22:
                return r1
            L23:
                return r0
        }

        private boolean b(android.content.Context r1) {
                r0 = this;
                com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r1)
                java.lang.String r1 = r1.a()
                if (r1 != 0) goto L14
                android.content.Context r1 = r0.a
                boolean r1 = r0.a(r1)
                if (r1 != 0) goto L14
                r1 = 1
                goto L15
            L14:
                r1 = 0
            L15:
                return r1
        }

        private boolean b(com.xiaomi.push.hn r3) {
                r2 = this;
                r0 = 0
                boolean r1 = com.xiaomi.push.service.bz.a(r3, r0)
                if (r1 == 0) goto L8
                return r0
            L8:
                java.lang.Boolean r0 = r2.a
                boolean r0 = r0.booleanValue()
                if (r0 == 0) goto L32
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "MiTinyDataClient Send item by PushServiceClient.sendTinyData(ClientUploadDataItem)."
                r0.append(r1)
                java.lang.String r1 = r3.d()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.xiaomi.channel.commonutils.logger.b.c(r0)
                android.content.Context r0 = r2.a
                com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r0)
                r0.a(r3)
                goto L37
            L32:
                com.xiaomi.mipush.sdk.MiTinyDataClient$a$a r0 = r2.a
                r0.a(r3)
            L37:
                r3 = 1
                return r3
        }

        public void a(android.content.Context r1) {
                r0 = this;
                if (r1 != 0) goto L8
                java.lang.String r1 = "context is null, MiTinyDataClientImp.init() failed."
                com.xiaomi.channel.commonutils.logger.b.a(r1)
                return
            L8:
                r0.a = r1
                boolean r1 = r0.a(r1)
                java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
                r0.a = r1
                java.lang.String r1 = "com.xiaomi.xmpushsdk.tinydataPending.init"
                r0.b(r1)
                return
        }

        public synchronized void a(java.lang.String r2) {
                r1 = this;
                monitor-enter(r1)
                boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L17
                if (r0 == 0) goto Le
                java.lang.String r2 = "channel is null, MiTinyDataClientImp.setChannel(String) failed."
                com.xiaomi.channel.commonutils.logger.b.a(r2)     // Catch: java.lang.Throwable -> L17
                monitor-exit(r1)
                return
            Le:
                r1.a = r2     // Catch: java.lang.Throwable -> L17
                java.lang.String r2 = "com.xiaomi.xmpushsdk.tinydataPending.channel"
                r1.b(r2)     // Catch: java.lang.Throwable -> L17
                monitor-exit(r1)
                return
            L17:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }

        public boolean a() {
                r1 = this;
                android.content.Context r0 = r1.a
                if (r0 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                return r0
        }

        public synchronized boolean a(com.xiaomi.push.hn r6) {
                r5 = this;
                monitor-enter(r5)
                r0 = 0
                if (r6 != 0) goto L6
                monitor-exit(r5)
                return r0
            L6:
                r1 = 1
                boolean r2 = com.xiaomi.push.service.bz.a(r6, r1)     // Catch: java.lang.Throwable -> L111
                if (r2 == 0) goto Lf
                monitor-exit(r5)
                return r0
            Lf:
                java.lang.String r2 = r6.a()     // Catch: java.lang.Throwable -> L111
                boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L111
                if (r2 == 0) goto L23
                java.lang.String r2 = r5.a     // Catch: java.lang.Throwable -> L111
                boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L111
                if (r2 == 0) goto L23
                r2 = r1
                goto L24
            L23:
                r2 = r0
            L24:
                boolean r3 = r5.a()     // Catch: java.lang.Throwable -> L111
                if (r3 != 0) goto L2c
                r3 = r1
                goto L2d
            L2c:
                r3 = r0
            L2d:
                android.content.Context r4 = r5.a     // Catch: java.lang.Throwable -> L111
                if (r4 == 0) goto L39
                android.content.Context r4 = r5.a     // Catch: java.lang.Throwable -> L111
                boolean r4 = r5.b(r4)     // Catch: java.lang.Throwable -> L111
                if (r4 == 0) goto L3a
            L39:
                r0 = r1
            L3a:
                if (r3 != 0) goto La3
                if (r2 != 0) goto La3
                if (r0 == 0) goto L41
                goto La3
            L41:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L111
                r0.<init>()     // Catch: java.lang.Throwable -> L111
                java.lang.String r1 = "MiTinyDataClient Send item immediately."
                r0.append(r1)     // Catch: java.lang.Throwable -> L111
                java.lang.String r1 = r6.d()     // Catch: java.lang.Throwable -> L111
                r0.append(r1)     // Catch: java.lang.Throwable -> L111
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L111
                com.xiaomi.channel.commonutils.logger.b.c(r0)     // Catch: java.lang.Throwable -> L111
                java.lang.String r0 = r6.d()     // Catch: java.lang.Throwable -> L111
                boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L111
                if (r0 == 0) goto L6a
                java.lang.String r0 = com.xiaomi.push.service.bd.a()     // Catch: java.lang.Throwable -> L111
                r6.f(r0)     // Catch: java.lang.Throwable -> L111
            L6a:
                java.lang.String r0 = r6.a()     // Catch: java.lang.Throwable -> L111
                boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L111
                if (r0 == 0) goto L79
                java.lang.String r0 = r5.a     // Catch: java.lang.Throwable -> L111
                r6.a(r0)     // Catch: java.lang.Throwable -> L111
            L79:
                java.lang.String r0 = r6.c()     // Catch: java.lang.Throwable -> L111
                boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L111
                if (r0 == 0) goto L8c
                android.content.Context r0 = r5.a     // Catch: java.lang.Throwable -> L111
                java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Throwable -> L111
                r6.e(r0)     // Catch: java.lang.Throwable -> L111
            L8c:
                long r0 = r6.a()     // Catch: java.lang.Throwable -> L111
                r2 = 0
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 > 0) goto L9d
                long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L111
                r6.b(r0)     // Catch: java.lang.Throwable -> L111
            L9d:
                boolean r6 = r5.b(r6)     // Catch: java.lang.Throwable -> L111
                monitor-exit(r5)
                return r6
            La3:
                if (r2 == 0) goto Lc8
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L111
                r0.<init>()     // Catch: java.lang.Throwable -> L111
                java.lang.String r2 = "MiTinyDataClient Pending "
                r0.append(r2)     // Catch: java.lang.Throwable -> L111
                java.lang.String r2 = r6.b()     // Catch: java.lang.Throwable -> L111
                r0.append(r2)     // Catch: java.lang.Throwable -> L111
                java.lang.String r2 = " reason is "
                r0.append(r2)     // Catch: java.lang.Throwable -> L111
                java.lang.String r2 = "com.xiaomi.xmpushsdk.tinydataPending.channel"
                r0.append(r2)     // Catch: java.lang.Throwable -> L111
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L111
            Lc4:
                com.xiaomi.channel.commonutils.logger.b.c(r0)     // Catch: java.lang.Throwable -> L111
                goto L10c
            Lc8:
                if (r3 == 0) goto Lea
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L111
                r0.<init>()     // Catch: java.lang.Throwable -> L111
                java.lang.String r2 = "MiTinyDataClient Pending "
                r0.append(r2)     // Catch: java.lang.Throwable -> L111
                java.lang.String r2 = r6.b()     // Catch: java.lang.Throwable -> L111
                r0.append(r2)     // Catch: java.lang.Throwable -> L111
                java.lang.String r2 = " reason is "
                r0.append(r2)     // Catch: java.lang.Throwable -> L111
                java.lang.String r2 = "com.xiaomi.xmpushsdk.tinydataPending.init"
                r0.append(r2)     // Catch: java.lang.Throwable -> L111
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L111
                goto Lc4
            Lea:
                if (r0 == 0) goto L10c
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L111
                r0.<init>()     // Catch: java.lang.Throwable -> L111
                java.lang.String r2 = "MiTinyDataClient Pending "
                r0.append(r2)     // Catch: java.lang.Throwable -> L111
                java.lang.String r2 = r6.b()     // Catch: java.lang.Throwable -> L111
                r0.append(r2)     // Catch: java.lang.Throwable -> L111
                java.lang.String r2 = " reason is "
                r0.append(r2)     // Catch: java.lang.Throwable -> L111
                java.lang.String r2 = "com.xiaomi.xmpushsdk.tinydataPending.appId"
                r0.append(r2)     // Catch: java.lang.Throwable -> L111
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L111
                goto Lc4
            L10c:
                r5.a(r6)     // Catch: java.lang.Throwable -> L111
                monitor-exit(r5)
                return r1
            L111:
                r6 = move-exception
                monitor-exit(r5)
                throw r6
        }

        public void b(java.lang.String r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "MiTinyDataClient.processPendingList("
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = ")"
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                com.xiaomi.channel.commonutils.logger.b.c(r3)
                java.util.ArrayList r3 = new java.util.ArrayList
                r3.<init>()
                java.util.ArrayList<com.xiaomi.push.hn> r0 = r2.a
                monitor-enter(r0)
                java.util.ArrayList<com.xiaomi.push.hn> r1 = r2.a     // Catch: java.lang.Throwable -> L41
                r3.addAll(r1)     // Catch: java.lang.Throwable -> L41
                java.util.ArrayList<com.xiaomi.push.hn> r1 = r2.a     // Catch: java.lang.Throwable -> L41
                r1.clear()     // Catch: java.lang.Throwable -> L41
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L41
                java.util.Iterator r3 = r3.iterator()
            L30:
                boolean r0 = r3.hasNext()
                if (r0 == 0) goto L40
                java.lang.Object r0 = r3.next()
                com.xiaomi.push.hn r0 = (com.xiaomi.push.hn) r0
                r2.a(r0)
                goto L30
            L40:
                return
            L41:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L41
                throw r3
        }
    }

    public MiTinyDataClient() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void init(android.content.Context r1, java.lang.String r2) {
            if (r1 != 0) goto L8
            java.lang.String r1 = "context is null, MiTinyDataClient.init(Context, String) failed."
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            return
        L8:
            com.xiaomi.mipush.sdk.MiTinyDataClient$a r0 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a()
            r0.a(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 == 0) goto L1b
            java.lang.String r1 = "channel is null or empty, MiTinyDataClient.init(Context, String) failed."
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            return
        L1b:
            com.xiaomi.mipush.sdk.MiTinyDataClient$a r1 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a()
            r1.a(r2)
            return
    }

    public static boolean upload(android.content.Context r2, com.xiaomi.push.hn r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "MiTinyDataClient.upload "
            r0.append(r1)
            java.lang.String r1 = r3.d()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            com.xiaomi.mipush.sdk.MiTinyDataClient$a r0 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a()
            boolean r0 = r0.a()
            if (r0 != 0) goto L29
            com.xiaomi.mipush.sdk.MiTinyDataClient$a r0 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a()
            r0.a(r2)
        L29:
            com.xiaomi.mipush.sdk.MiTinyDataClient$a r2 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a()
            boolean r2 = r2.a(r3)
            return r2
    }

    public static boolean upload(android.content.Context r1, java.lang.String r2, java.lang.String r3, long r4, java.lang.String r6) {
            com.xiaomi.push.hn r0 = new com.xiaomi.push.hn
            r0.<init>()
            r0.d(r2)
            r0.c(r3)
            r0.a(r4)
            r0.b(r6)
            r2 = 1
            r0.a(r2)
            java.lang.String r2 = "push_sdk_channel"
            r0.a(r2)
            boolean r1 = upload(r1, r0)
            return r1
    }

    public static boolean upload(java.lang.String r1, java.lang.String r2, long r3, java.lang.String r5) {
            com.xiaomi.push.hn r0 = new com.xiaomi.push.hn
            r0.<init>()
            r0.d(r1)
            r0.c(r2)
            r0.a(r3)
            r0.b(r5)
            com.xiaomi.mipush.sdk.MiTinyDataClient$a r1 = com.xiaomi.mipush.sdk.MiTinyDataClient.a.a()
            boolean r1 = r1.a(r0)
            return r1
    }
}
