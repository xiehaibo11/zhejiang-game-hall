package com.alipay.sdk.m.u;

public class h {
    public static final java.lang.String j = "failed";
    public static final java.lang.String k = "scheme_failed";
    public android.app.Activity a;
    public volatile com.alipay.android.app.IAlixPay b;
    public final java.lang.Object c;
    public boolean d;
    public com.alipay.sdk.m.u.h.g e;
    public final com.alipay.sdk.m.s.a f;
    public boolean g;
    public java.lang.String h;
    public java.lang.String i;

    public class a implements com.alipay.sdk.app.AlipayResultActivity.a {
        public final java.util.concurrent.CountDownLatch a;
        public final com.alipay.sdk.m.u.h b;

        public a(com.alipay.sdk.m.u.h r1, java.util.concurrent.CountDownLatch r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void a(int r2, java.lang.String r3, java.lang.String r4) {
                r1 = this;
                com.alipay.sdk.m.u.h r0 = r1.b
                java.lang.String r2 = com.alipay.sdk.m.j.b.a(r2, r3, r4)
                com.alipay.sdk.m.u.h.a(r0, r2)
                java.util.concurrent.CountDownLatch r2 = r1.a
                r2.countDown()
                return
        }
    }

    public class b implements com.alipay.sdk.app.APayEntranceActivity.a {
        public final java.lang.Object a;
        public final com.alipay.sdk.m.u.h b;

        public b(com.alipay.sdk.m.u.h r1, java.lang.Object r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void a(java.lang.String r5) {
                r4 = this;
                com.alipay.sdk.m.u.h r0 = r4.b
                com.alipay.sdk.m.u.h.b(r0, r5)
                java.lang.Object r5 = r4.a
                monitor-enter(r5)
                java.lang.Object r0 = r4.a     // Catch: java.lang.Throwable -> Le
                r0.notify()     // Catch: java.lang.Throwable -> Le
                goto L1c
            Le:
                r0 = move-exception
                com.alipay.sdk.m.u.h r1 = r4.b     // Catch: java.lang.Throwable -> L1e
                com.alipay.sdk.m.s.a r1 = com.alipay.sdk.m.u.h.a(r1)     // Catch: java.lang.Throwable -> L1e
                java.lang.String r2 = "biz"
                java.lang.String r3 = "BSAResultEx"
                com.alipay.sdk.m.k.a.a(r1, r2, r3, r0)     // Catch: java.lang.Throwable -> L1e
            L1c:
                monitor-exit(r5)     // Catch: java.lang.Throwable -> L1e
                return
            L1e:
                r0 = move-exception
                monitor-exit(r5)     // Catch: java.lang.Throwable -> L1e
                throw r0
        }
    }

    public class c implements java.lang.Runnable {
        public final com.alipay.sdk.app.APayEntranceActivity.a a;
        public final com.alipay.sdk.m.u.h b;

        public c(com.alipay.sdk.m.u.h r1, com.alipay.sdk.app.APayEntranceActivity.a r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r4 = this;
                com.alipay.sdk.m.u.h r0 = r4.b
                com.alipay.sdk.m.s.a r0 = com.alipay.sdk.m.u.h.a(r0)
                if (r0 == 0) goto L40
                com.alipay.sdk.m.u.h r0 = r4.b
                com.alipay.sdk.m.s.a r0 = com.alipay.sdk.m.u.h.a(r0)
                boolean r0 = r0.d()
                if (r0 != 0) goto L40
                com.alipay.sdk.m.u.h r0 = r4.b
                com.alipay.sdk.m.s.a r0 = com.alipay.sdk.m.u.h.a(r0)
                java.lang.String r1 = "biz"
                java.lang.String r2 = "ErrActNotCreated"
                java.lang.String r3 = ""
                com.alipay.sdk.m.k.a.b(r0, r1, r2, r3)
                com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.D()
                boolean r0 = r0.w()
                if (r0 == 0) goto L40
                com.alipay.sdk.m.u.h r0 = r4.b
                com.alipay.sdk.m.s.a r0 = com.alipay.sdk.m.u.h.a(r0)
                r1 = 1
                r0.b(r1)
                java.lang.String r0 = com.alipay.sdk.m.j.b.a()
                com.alipay.sdk.app.APayEntranceActivity$a r1 = r4.a
                r1.a(r0)
            L40:
                return
        }
    }

    public class d implements java.lang.Runnable {
        public final android.content.Intent a;
        public final java.lang.Object b;
        public final com.alipay.sdk.m.u.h c;

        public d(com.alipay.sdk.m.u.h r1, android.content.Intent r2, java.lang.Object r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r5 = this;
                com.alipay.sdk.m.u.h r0 = r5.c     // Catch: java.lang.Throwable -> L35
                android.app.Activity r0 = com.alipay.sdk.m.u.h.b(r0)     // Catch: java.lang.Throwable -> L35
                if (r0 == 0) goto L14
                com.alipay.sdk.m.u.h r0 = r5.c     // Catch: java.lang.Throwable -> L35
                android.app.Activity r0 = com.alipay.sdk.m.u.h.b(r0)     // Catch: java.lang.Throwable -> L35
                android.content.Intent r1 = r5.a     // Catch: java.lang.Throwable -> L35
                r0.startActivity(r1)     // Catch: java.lang.Throwable -> L35
                goto L75
            L14:
                com.alipay.sdk.m.u.h r0 = r5.c     // Catch: java.lang.Throwable -> L35
                com.alipay.sdk.m.s.a r0 = com.alipay.sdk.m.u.h.a(r0)     // Catch: java.lang.Throwable -> L35
                java.lang.String r1 = "biz"
                java.lang.String r2 = "ErrActNull2"
                java.lang.String r3 = ""
                com.alipay.sdk.m.k.a.b(r0, r1, r2, r3)     // Catch: java.lang.Throwable -> L35
                com.alipay.sdk.m.u.h r0 = r5.c     // Catch: java.lang.Throwable -> L35
                com.alipay.sdk.m.s.a r0 = com.alipay.sdk.m.u.h.a(r0)     // Catch: java.lang.Throwable -> L35
                android.content.Context r0 = r0.a()     // Catch: java.lang.Throwable -> L35
                if (r0 == 0) goto L75
                android.content.Intent r1 = r5.a     // Catch: java.lang.Throwable -> L35
                r0.startActivity(r1)     // Catch: java.lang.Throwable -> L35
                goto L75
            L35:
                r0 = move-exception
                com.alipay.sdk.m.u.h r1 = r5.c
                com.alipay.sdk.m.s.a r1 = com.alipay.sdk.m.u.h.a(r1)
                java.lang.String r2 = "biz"
                java.lang.String r3 = "ErrActEx2"
                com.alipay.sdk.m.k.a.a(r1, r2, r3, r0)
                com.alipay.sdk.m.u.h r0 = r5.c
                android.app.Activity r0 = com.alipay.sdk.m.u.h.b(r0)
                com.alipay.sdk.m.u.h r1 = r5.c
                com.alipay.sdk.m.s.a r1 = com.alipay.sdk.m.u.h.a(r1)
                java.lang.String r2 = "alipaySdk"
                java.lang.String r3 = "startActivityEx"
                com.alipay.sdk.m.u.n.a(r2, r3, r0, r1)
                java.lang.Object r0 = r5.b
                monitor-enter(r0)
                com.alipay.sdk.m.u.h r1 = r5.c     // Catch: java.lang.Throwable -> L66
                java.lang.String r2 = "scheme_failed"
                com.alipay.sdk.m.u.h.b(r1, r2)     // Catch: java.lang.Throwable -> L66
                java.lang.Object r1 = r5.b     // Catch: java.lang.Throwable -> L66
                r1.notify()     // Catch: java.lang.Throwable -> L66
                goto L74
            L66:
                r1 = move-exception
                com.alipay.sdk.m.u.h r2 = r5.c     // Catch: java.lang.Throwable -> L76
                com.alipay.sdk.m.s.a r2 = com.alipay.sdk.m.u.h.a(r2)     // Catch: java.lang.Throwable -> L76
                java.lang.String r3 = "biz"
                java.lang.String r4 = "BSAResultEx"
                com.alipay.sdk.m.k.a.a(r2, r3, r4, r1)     // Catch: java.lang.Throwable -> L76
            L74:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L76
            L75:
                return
            L76:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L76
                throw r1
        }
    }

    public class e extends com.alipay.android.app.IRemoteServiceCallback.Stub {
        public final com.alipay.sdk.m.u.h a;

        public e(com.alipay.sdk.m.u.h r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        public e(com.alipay.sdk.m.u.h r1, com.alipay.sdk.m.u.h.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public int getVersion() throws android.os.RemoteException {
                r1 = this;
                r0 = 4
                return r0
        }

        @Override
        public boolean isHideLoadingScreen() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public void payEnd(boolean r1, java.lang.String r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void r03(java.lang.String r2, java.lang.String r3, java.util.Map r4) throws android.os.RemoteException {
                r1 = this;
                com.alipay.sdk.m.u.h r4 = r1.a
                com.alipay.sdk.m.s.a r4 = com.alipay.sdk.m.u.h.a(r4)
                java.lang.String r0 = "wlt"
                com.alipay.sdk.m.k.a.a(r4, r0, r2, r3)
                java.lang.String r2 = "ActivityStartSuccess"
                boolean r2 = android.text.TextUtils.equals(r3, r2)
                if (r2 == 0) goto L36
                com.alipay.sdk.m.u.h r2 = r1.a
                com.alipay.sdk.m.u.h$g r2 = com.alipay.sdk.m.u.h.d(r2)
                if (r2 == 0) goto L24
                com.alipay.sdk.m.u.h r2 = r1.a
                com.alipay.sdk.m.u.h$g r2 = com.alipay.sdk.m.u.h.d(r2)
                r2.a()
            L24:
                com.alipay.sdk.m.u.h r2 = r1.a
                com.alipay.sdk.m.s.a r2 = com.alipay.sdk.m.u.h.a(r2)
                if (r2 == 0) goto L36
                com.alipay.sdk.m.u.h r2 = r1.a
                com.alipay.sdk.m.s.a r2 = com.alipay.sdk.m.u.h.a(r2)
                r3 = 1
                r2.c(r3)
            L36:
                return
        }

        @Override
        public void startActivity(java.lang.String r6, java.lang.String r7, int r8, android.os.Bundle r9) throws android.os.RemoteException {
                r5 = this;
                java.lang.String r0 = "|"
                java.lang.String r1 = "biz"
                android.content.Intent r2 = new android.content.Intent
                java.lang.String r3 = "android.intent.action.MAIN"
                r4 = 0
                r2.<init>(r3, r4)
                if (r9 != 0) goto L13
                android.os.Bundle r9 = new android.os.Bundle
                r9.<init>()
            L13:
                java.lang.String r3 = "CallingPid"
                r9.putInt(r3, r8)     // Catch: java.lang.Exception -> L1c
                r2.putExtras(r9)     // Catch: java.lang.Exception -> L1c
                goto L28
            L1c:
                r8 = move-exception
                com.alipay.sdk.m.u.h r9 = r5.a
                com.alipay.sdk.m.s.a r9 = com.alipay.sdk.m.u.h.a(r9)
                java.lang.String r3 = "ErrIntentEx"
                com.alipay.sdk.m.k.a.a(r9, r1, r3, r8)
            L28:
                r2.setClassName(r6, r7)
                int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L5d
                r7 = 16
                if (r6 < r7) goto L5d
                android.app.ActivityManager$RunningAppProcessInfo r6 = new android.app.ActivityManager$RunningAppProcessInfo     // Catch: java.lang.Throwable -> L5d
                r6.<init>()     // Catch: java.lang.Throwable -> L5d
                android.app.ActivityManager.getMyMemoryState(r6)     // Catch: java.lang.Throwable -> L5d
                com.alipay.sdk.m.u.h r7 = r5.a     // Catch: java.lang.Throwable -> L5d
                com.alipay.sdk.m.s.a r7 = com.alipay.sdk.m.u.h.a(r7)     // Catch: java.lang.Throwable -> L5d
                java.lang.String r8 = "isFg"
                java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5d
                r9.<init>()     // Catch: java.lang.Throwable -> L5d
                java.lang.String r3 = r6.processName     // Catch: java.lang.Throwable -> L5d
                r9.append(r3)     // Catch: java.lang.Throwable -> L5d
                r9.append(r0)     // Catch: java.lang.Throwable -> L5d
                int r6 = r6.importance     // Catch: java.lang.Throwable -> L5d
                r9.append(r6)     // Catch: java.lang.Throwable -> L5d
                r9.append(r0)     // Catch: java.lang.Throwable -> L5d
                java.lang.String r6 = r9.toString()     // Catch: java.lang.Throwable -> L5d
                com.alipay.sdk.m.k.a.a(r7, r1, r8, r6)     // Catch: java.lang.Throwable -> L5d
            L5d:
                com.alipay.sdk.m.u.h r6 = r5.a     // Catch: java.lang.Throwable -> Laf
                android.app.Activity r6 = com.alipay.sdk.m.u.h.b(r6)     // Catch: java.lang.Throwable -> Laf
                java.lang.String r7 = ""
                if (r6 == 0) goto L94
                long r8 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Laf
                com.alipay.sdk.m.u.h r6 = r5.a     // Catch: java.lang.Throwable -> Laf
                android.app.Activity r6 = com.alipay.sdk.m.u.h.b(r6)     // Catch: java.lang.Throwable -> Laf
                r6.startActivity(r2)     // Catch: java.lang.Throwable -> Laf
                com.alipay.sdk.m.u.h r6 = r5.a     // Catch: java.lang.Throwable -> Laf
                com.alipay.sdk.m.s.a r6 = com.alipay.sdk.m.u.h.a(r6)     // Catch: java.lang.Throwable -> Laf
                java.lang.String r0 = "stAct2"
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laf
                r2.<init>()     // Catch: java.lang.Throwable -> Laf
                r2.append(r7)     // Catch: java.lang.Throwable -> Laf
                long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Laf
                long r3 = r3 - r8
                r2.append(r3)     // Catch: java.lang.Throwable -> Laf
                java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> Laf
                com.alipay.sdk.m.k.a.a(r6, r1, r0, r7)     // Catch: java.lang.Throwable -> Laf
                goto Lae
            L94:
                com.alipay.sdk.m.u.h r6 = r5.a     // Catch: java.lang.Throwable -> Laf
                com.alipay.sdk.m.s.a r6 = com.alipay.sdk.m.u.h.a(r6)     // Catch: java.lang.Throwable -> Laf
                java.lang.String r8 = "ErrActNull"
                com.alipay.sdk.m.k.a.b(r6, r1, r8, r7)     // Catch: java.lang.Throwable -> Laf
                com.alipay.sdk.m.u.h r6 = r5.a     // Catch: java.lang.Throwable -> Laf
                com.alipay.sdk.m.s.a r6 = com.alipay.sdk.m.u.h.a(r6)     // Catch: java.lang.Throwable -> Laf
                android.content.Context r6 = r6.a()     // Catch: java.lang.Throwable -> Laf
                if (r6 == 0) goto Lae
                r6.startActivity(r2)     // Catch: java.lang.Throwable -> Laf
            Lae:
                return
            Laf:
                r6 = move-exception
                com.alipay.sdk.m.u.h r7 = r5.a
                com.alipay.sdk.m.s.a r7 = com.alipay.sdk.m.u.h.a(r7)
                java.lang.String r8 = "ErrActEx"
                com.alipay.sdk.m.k.a.a(r7, r1, r8, r6)
                throw r6
        }
    }

    public class f implements android.content.ServiceConnection {
        public final com.alipay.sdk.m.u.h a;

        public f(com.alipay.sdk.m.u.h r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        public f(com.alipay.sdk.m.u.h r1, com.alipay.sdk.m.u.h.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onServiceConnected(android.content.ComponentName r3, android.os.IBinder r4) {
                r2 = this;
                com.alipay.sdk.m.u.h r3 = r2.a
                com.alipay.sdk.m.s.a r3 = com.alipay.sdk.m.u.h.a(r3)
                java.lang.String r0 = "biz"
                java.lang.String r1 = "srvCon"
                com.alipay.sdk.m.k.a.a(r3, r0, r1)
                com.alipay.sdk.m.u.h r3 = r2.a
                java.lang.Object r3 = com.alipay.sdk.m.u.h.c(r3)
                monitor-enter(r3)
                com.alipay.sdk.m.u.h r0 = r2.a     // Catch: java.lang.Throwable -> L28
                com.alipay.android.app.IAlixPay r4 = com.alipay.android.app.IAlixPay.Stub.asInterface(r4)     // Catch: java.lang.Throwable -> L28
                com.alipay.sdk.m.u.h.a(r0, r4)     // Catch: java.lang.Throwable -> L28
                com.alipay.sdk.m.u.h r4 = r2.a     // Catch: java.lang.Throwable -> L28
                java.lang.Object r4 = com.alipay.sdk.m.u.h.c(r4)     // Catch: java.lang.Throwable -> L28
                r4.notify()     // Catch: java.lang.Throwable -> L28
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L28
                return
            L28:
                r4 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L28
                throw r4
        }

        @Override
        public void onServiceDisconnected(android.content.ComponentName r3) {
                r2 = this;
                com.alipay.sdk.m.u.h r3 = r2.a
                com.alipay.sdk.m.s.a r3 = com.alipay.sdk.m.u.h.a(r3)
                java.lang.String r0 = "biz"
                java.lang.String r1 = "srvDis"
                com.alipay.sdk.m.k.a.a(r3, r0, r1)
                com.alipay.sdk.m.u.h r3 = r2.a
                r0 = 0
                com.alipay.sdk.m.u.h.a(r3, r0)
                return
        }
    }

    public interface g {
        void a();

        void b();
    }

    public h(android.app.Activity r2, com.alipay.sdk.m.s.a r3, com.alipay.sdk.m.u.h.g r4) {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.alipay.android.app.IAlixPay> r0 = com.alipay.android.app.IAlixPay.class
            r1.c = r0
            r0 = 0
            r1.g = r0
            r0 = 0
            r1.h = r0
            r1.i = r0
            r1.a = r2
            r1.f = r3
            r1.e = r4
            java.lang.String r2 = "mspl"
            java.lang.String r3 = "alipaySdk"
            com.alipay.sdk.m.u.e.d(r2, r3)
            return
    }

    private android.util.Pair<java.lang.String, java.lang.Boolean> a(java.lang.String r19, java.lang.String r20, com.alipay.sdk.m.s.a r21) {
            r18 = this;
            r1 = r18
            r2 = r19
            r3 = r21
            android.content.Intent r4 = new android.content.Intent
            r4.<init>()
            r0 = r20
            r4.setPackage(r0)
            java.lang.String r0 = com.alipay.sdk.m.u.n.c(r20)
            r4.setAction(r0)
            long r5 = android.os.SystemClock.elapsedRealtime()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r7 = ""
            r0.append(r7)
            r0.append(r5)
            java.lang.String r7 = "|"
            r0.append(r7)
            r7 = 0
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r7)
            if (r2 == 0) goto L39
            int r9 = r19.length()
            goto L3a
        L39:
            r9 = 0
        L3a:
            r0.append(r9)
            java.lang.String r0 = r0.toString()
            java.lang.String r9 = "biz"
            java.lang.String r10 = "PgBindStarting"
            com.alipay.sdk.m.k.a.a(r3, r9, r10, r0)
            android.app.Activity r0 = r1.a
            java.lang.String r9 = r3.d
            com.alipay.sdk.m.k.a.a(r0, r3, r2, r9)
            r9 = 1
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L7f
            boolean r0 = r0.f()     // Catch: java.lang.Throwable -> L7f
            if (r0 != 0) goto L75
            android.app.Activity r0 = r1.a     // Catch: java.lang.Throwable -> L7f
            android.app.Application r0 = r0.getApplication()     // Catch: java.lang.Throwable -> L7f
            android.content.ComponentName r0 = r0.startService(r4)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r10 = "biz"
            java.lang.String r11 = "stSrv"
            if (r0 == 0) goto L6f
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Throwable -> L7f
            goto L71
        L6f:
            java.lang.String r0 = "null"
        L71:
            com.alipay.sdk.m.k.a.a(r3, r10, r11, r0)     // Catch: java.lang.Throwable -> L7f
            goto L87
        L75:
            java.lang.String r0 = "biz"
            java.lang.String r10 = "stSrv"
            java.lang.String r11 = "skipped"
            com.alipay.sdk.m.k.a.a(r3, r0, r10, r11)     // Catch: java.lang.Throwable -> L7f
            goto L87
        L7f:
            r0 = move-exception
            java.lang.String r10 = "biz"
            java.lang.String r11 = "TryStartServiceEx"
            com.alipay.sdk.m.k.a.a(r3, r10, r11, r0)     // Catch: java.lang.Throwable -> L38a
        L87:
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L38a
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L38a
            if (r0 == 0) goto L9d
            r0 = 65
            java.lang.String r10 = "biz"
            java.lang.String r11 = "bindFlg"
            java.lang.String r12 = "imp"
            com.alipay.sdk.m.k.a.a(r3, r10, r11, r12)     // Catch: java.lang.Throwable -> L38a
            goto L9e
        L9d:
            r0 = 1
        L9e:
            com.alipay.sdk.m.u.h$f r10 = new com.alipay.sdk.m.u.h$f     // Catch: java.lang.Throwable -> L38a
            r11 = 0
            r10.<init>(r1, r11)     // Catch: java.lang.Throwable -> L38a
            android.app.Activity r12 = r1.a     // Catch: java.lang.Throwable -> L38a
            android.content.Context r12 = r12.getApplicationContext()     // Catch: java.lang.Throwable -> L38a
            boolean r0 = r12.bindService(r4, r10, r0)     // Catch: java.lang.Throwable -> L38a
            if (r0 == 0) goto L382
            java.lang.Object r4 = r1.c
            monitor-enter(r4)
            com.alipay.android.app.IAlixPay r0 = r1.b     // Catch: java.lang.Throwable -> L37f
            if (r0 != 0) goto Lce
            java.lang.Object r0 = r1.c     // Catch: java.lang.InterruptedException -> Lc6 java.lang.Throwable -> L37f
            com.alipay.sdk.m.m.a r12 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.InterruptedException -> Lc6 java.lang.Throwable -> L37f
            int r12 = r12.k()     // Catch: java.lang.InterruptedException -> Lc6 java.lang.Throwable -> L37f
            long r12 = (long) r12     // Catch: java.lang.InterruptedException -> Lc6 java.lang.Throwable -> L37f
            r0.wait(r12)     // Catch: java.lang.InterruptedException -> Lc6 java.lang.Throwable -> L37f
            goto Lce
        Lc6:
            r0 = move-exception
            java.lang.String r12 = "biz"
            java.lang.String r13 = "BindWaitTimeoutEx"
            com.alipay.sdk.m.k.a.a(r3, r12, r13, r0)     // Catch: java.lang.Throwable -> L37f
        Lce:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L37f
            com.alipay.android.app.IAlixPay r4 = r1.b
            if (r4 != 0) goto L133
            java.lang.String r0 = "biz"
            java.lang.String r5 = "ClientBindFailed"
            java.lang.String r6 = ""
            com.alipay.sdk.m.k.a.b(r3, r0, r5, r6)     // Catch: java.lang.Throwable -> L2c9
            java.lang.String r0 = "alipaySdk"
            java.lang.String r5 = "bindServiceTimeout"
            android.app.Activity r6 = r1.a     // Catch: java.lang.Throwable -> L2c9
            com.alipay.sdk.m.s.a r8 = r1.f     // Catch: java.lang.Throwable -> L2c9
            com.alipay.sdk.m.u.n.a(r0, r5, r6, r8)     // Catch: java.lang.Throwable -> L2c9
            android.util.Pair r5 = new android.util.Pair     // Catch: java.lang.Throwable -> L2c9
            java.lang.String r0 = "failed"
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r9)     // Catch: java.lang.Throwable -> L2c9
            r5.<init>(r0, r6)     // Catch: java.lang.Throwable -> L2c9
            android.app.Activity r0 = r1.a     // Catch: java.lang.Throwable -> Lfc
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> Lfc
            r0.unbindService(r10)     // Catch: java.lang.Throwable -> Lfc
            goto L100
        Lfc:
            r0 = move-exception
            com.alipay.sdk.m.u.e.a(r0)
        L100:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = ""
            r0.append(r4)
            long r8 = android.os.SystemClock.elapsedRealtime()
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            java.lang.String r4 = "biz"
            java.lang.String r6 = "PgBindEnd"
            com.alipay.sdk.m.k.a.a(r3, r4, r6, r0)
            android.app.Activity r0 = r1.a
            java.lang.String r4 = r3.d
            com.alipay.sdk.m.k.a.a(r0, r3, r2, r4)
            r1.b = r11
            boolean r0 = r1.d
            if (r0 == 0) goto L132
            android.app.Activity r0 = r1.a
            if (r0 == 0) goto L132
            r0.setRequestedOrientation(r7)
            r1.d = r7
        L132:
            return r5
        L133:
            long r12 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L2c9
            java.lang.String r0 = "biz"
            java.lang.String r14 = "PgBinded"
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c9
            r15.<init>()     // Catch: java.lang.Throwable -> L2c9
            java.lang.String r7 = ""
            r15.append(r7)     // Catch: java.lang.Throwable -> L2c9
            r15.append(r12)     // Catch: java.lang.Throwable -> L2c9
            java.lang.String r7 = r15.toString()     // Catch: java.lang.Throwable -> L2c9
            com.alipay.sdk.m.k.a.a(r3, r0, r14, r7)     // Catch: java.lang.Throwable -> L2c9
            com.alipay.sdk.m.u.h$g r0 = r1.e     // Catch: java.lang.Throwable -> L2c9
            if (r0 == 0) goto L158
            com.alipay.sdk.m.u.h$g r0 = r1.e     // Catch: java.lang.Throwable -> L2c9
            r0.b()     // Catch: java.lang.Throwable -> L2c9
        L158:
            android.app.Activity r0 = r1.a     // Catch: java.lang.Throwable -> L2c9
            int r0 = r0.getRequestedOrientation()     // Catch: java.lang.Throwable -> L2c9
            if (r0 != 0) goto L167
            android.app.Activity r0 = r1.a     // Catch: java.lang.Throwable -> L2c9
            r0.setRequestedOrientation(r9)     // Catch: java.lang.Throwable -> L2c9
            r1.d = r9     // Catch: java.lang.Throwable -> L2c9
        L167:
            int r0 = r4.getVersion()     // Catch: java.lang.Throwable -> L16c
            goto L172
        L16c:
            r0 = move-exception
            r7 = r0
            com.alipay.sdk.m.u.e.a(r7)     // Catch: java.lang.Throwable -> L2c9
            r0 = 0
        L172:
            com.alipay.sdk.m.u.h$e r7 = new com.alipay.sdk.m.u.h$e     // Catch: java.lang.Throwable -> L2c9
            r7.<init>(r1, r11)     // Catch: java.lang.Throwable -> L2c9
            r14 = 3
            if (r0 < r14) goto L17e
            r4.registerCallback03(r7, r2, r11)     // Catch: java.lang.Throwable -> L2c5
            goto L181
        L17e:
            r4.registerCallback(r7)     // Catch: java.lang.Throwable -> L2c5
        L181:
            r16 = r10
            long r9 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L2c0
            java.lang.String r15 = "biz"
            java.lang.String r11 = "PgBindPay"
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c0
            r14.<init>()     // Catch: java.lang.Throwable -> L2c0
            r17 = r7
            java.lang.String r7 = ""
            r14.append(r7)     // Catch: java.lang.Throwable -> L2ba
            r14.append(r9)     // Catch: java.lang.Throwable -> L2ba
            java.lang.String r7 = r14.toString()     // Catch: java.lang.Throwable -> L2ba
            com.alipay.sdk.m.k.a.a(r3, r15, r11, r7)     // Catch: java.lang.Throwable -> L2ba
            r7 = 3
            if (r0 < r7) goto L1ac
            java.lang.String r7 = "biz"
            java.lang.String r11 = "bind_pay"
            r14 = 0
            r4.r03(r7, r11, r14)     // Catch: java.lang.Throwable -> L2ba
        L1ac:
            r7 = 2
            if (r0 < r7) goto L1d3
            java.util.HashMap r0 = com.alipay.sdk.m.s.a.a(r21)     // Catch: java.lang.Throwable -> L1de
            java.lang.String r7 = "ts_bind"
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L1de
            r0.put(r7, r5)     // Catch: java.lang.Throwable -> L1de
            java.lang.String r5 = "ts_bend"
            java.lang.String r6 = java.lang.String.valueOf(r12)     // Catch: java.lang.Throwable -> L1de
            r0.put(r5, r6)     // Catch: java.lang.Throwable -> L1de
            java.lang.String r5 = "ts_pay"
            java.lang.String r6 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> L1de
            r0.put(r5, r6)     // Catch: java.lang.Throwable -> L1de
            java.lang.String r0 = r4.pay02(r2, r0)     // Catch: java.lang.Throwable -> L1de
            goto L1d7
        L1d3:
            java.lang.String r0 = r4.Pay(r2)     // Catch: java.lang.Throwable -> L1de
        L1d7:
            r5 = r0
            r7 = r16
            r6 = r17
            goto L267
        L1de:
            r0 = move-exception
            com.alipay.sdk.m.s.a r5 = r1.f     // Catch: java.lang.Throwable -> L2ba
            if (r5 == 0) goto L25e
            com.alipay.sdk.m.s.a r5 = r1.f     // Catch: java.lang.Throwable -> L2ba
            boolean r5 = r5.f()     // Catch: java.lang.Throwable -> L2ba
            if (r5 != 0) goto L25e
            java.lang.String r5 = "biz"
            java.lang.String r6 = "ClientBindException"
            com.alipay.sdk.m.k.a.a(r3, r5, r6, r0)     // Catch: java.lang.Throwable -> L2ba
            java.lang.String r0 = "alipaySdk"
            java.lang.String r5 = "bindServiceEx"
            android.app.Activity r6 = r1.a     // Catch: java.lang.Throwable -> L2ba
            com.alipay.sdk.m.s.a r7 = r1.f     // Catch: java.lang.Throwable -> L2ba
            com.alipay.sdk.m.u.n.a(r0, r5, r6, r7)     // Catch: java.lang.Throwable -> L2ba
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L2ba
            boolean r0 = r0.u()     // Catch: java.lang.Throwable -> L2ba
            if (r0 == 0) goto L25e
            android.util.Pair r5 = new android.util.Pair     // Catch: java.lang.Throwable -> L2ba
            java.lang.String r0 = "failed"
            r5.<init>(r0, r8)     // Catch: java.lang.Throwable -> L2ba
            r6 = r17
            r4.unregisterCallback(r6)     // Catch: java.lang.Throwable -> L214
            goto L219
        L214:
            r0 = move-exception
            r4 = r0
            com.alipay.sdk.m.u.e.a(r4)
        L219:
            android.app.Activity r0 = r1.a     // Catch: java.lang.Throwable -> L225
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L225
            r7 = r16
            r0.unbindService(r7)     // Catch: java.lang.Throwable -> L225
            goto L229
        L225:
            r0 = move-exception
            com.alipay.sdk.m.u.e.a(r0)
        L229:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = ""
            r0.append(r4)
            long r6 = android.os.SystemClock.elapsedRealtime()
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r4 = "biz"
            java.lang.String r6 = "PgBindEnd"
            com.alipay.sdk.m.k.a.a(r3, r4, r6, r0)
            android.app.Activity r0 = r1.a
            java.lang.String r4 = r3.d
            com.alipay.sdk.m.k.a.a(r0, r3, r2, r4)
            r2 = 0
            r1.b = r2
            boolean r0 = r1.d
            if (r0 == 0) goto L25d
            android.app.Activity r0 = r1.a
            if (r0 == 0) goto L25d
            r2 = 0
            r0.setRequestedOrientation(r2)
            r1.d = r2
        L25d:
            return r5
        L25e:
            r7 = r16
            r6 = r17
            java.lang.String r0 = com.alipay.sdk.m.j.b.a()     // Catch: java.lang.Throwable -> L2b8
            r5 = r0
        L267:
            r4.unregisterCallback(r6)     // Catch: java.lang.Throwable -> L26b
            goto L270
        L26b:
            r0 = move-exception
            r4 = r0
            com.alipay.sdk.m.u.e.a(r4)
        L270:
            android.app.Activity r0 = r1.a     // Catch: java.lang.Throwable -> L27a
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L27a
            r0.unbindService(r7)     // Catch: java.lang.Throwable -> L27a
            goto L27e
        L27a:
            r0 = move-exception
            com.alipay.sdk.m.u.e.a(r0)
        L27e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = ""
            r0.append(r4)
            long r6 = android.os.SystemClock.elapsedRealtime()
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r4 = "biz"
            java.lang.String r6 = "PgBindEnd"
            com.alipay.sdk.m.k.a.a(r3, r4, r6, r0)
            android.app.Activity r0 = r1.a
            java.lang.String r4 = r3.d
            com.alipay.sdk.m.k.a.a(r0, r3, r2, r4)
            r2 = 0
            r1.b = r2
            boolean r0 = r1.d
            if (r0 == 0) goto L2b2
            android.app.Activity r0 = r1.a
            if (r0 == 0) goto L2b2
            r2 = 0
            r0.setRequestedOrientation(r2)
            r1.d = r2
        L2b2:
            android.util.Pair r0 = new android.util.Pair
            r0.<init>(r5, r8)
            return r0
        L2b8:
            r0 = move-exception
            goto L2cc
        L2ba:
            r0 = move-exception
            r7 = r16
            r6 = r17
            goto L2cc
        L2c0:
            r0 = move-exception
            r6 = r7
            r7 = r16
            goto L2cc
        L2c5:
            r0 = move-exception
            r6 = r7
            r7 = r10
            goto L2cc
        L2c9:
            r0 = move-exception
            r7 = r10
            r6 = 0
        L2cc:
            java.lang.String r5 = "biz"
            java.lang.String r8 = "ClientBindFailed"
            java.lang.String r9 = "in_bind"
            com.alipay.sdk.m.k.a.a(r3, r5, r8, r0, r9)     // Catch: java.lang.Throwable -> L32f
            android.util.Pair r5 = new android.util.Pair     // Catch: java.lang.Throwable -> L32f
            java.lang.String r0 = "failed"
            r8 = 1
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)     // Catch: java.lang.Throwable -> L32f
            r5.<init>(r0, r8)     // Catch: java.lang.Throwable -> L32f
            if (r6 == 0) goto L2ec
            r4.unregisterCallback(r6)     // Catch: java.lang.Throwable -> L2e7
            goto L2ec
        L2e7:
            r0 = move-exception
            r4 = r0
            com.alipay.sdk.m.u.e.a(r4)
        L2ec:
            android.app.Activity r0 = r1.a     // Catch: java.lang.Throwable -> L2f6
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L2f6
            r0.unbindService(r7)     // Catch: java.lang.Throwable -> L2f6
            goto L2fa
        L2f6:
            r0 = move-exception
            com.alipay.sdk.m.u.e.a(r0)
        L2fa:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = ""
            r0.append(r4)
            long r6 = android.os.SystemClock.elapsedRealtime()
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r4 = "biz"
            java.lang.String r6 = "PgBindEnd"
            com.alipay.sdk.m.k.a.a(r3, r4, r6, r0)
            android.app.Activity r0 = r1.a
            java.lang.String r4 = r3.d
            com.alipay.sdk.m.k.a.a(r0, r3, r2, r4)
            r2 = 0
            r1.b = r2
            boolean r0 = r1.d
            if (r0 == 0) goto L32e
            android.app.Activity r0 = r1.a
            if (r0 == 0) goto L32e
            r2 = 0
            r0.setRequestedOrientation(r2)
            r1.d = r2
        L32e:
            return r5
        L32f:
            r0 = move-exception
            r5 = r0
            if (r6 == 0) goto L33c
            r4.unregisterCallback(r6)     // Catch: java.lang.Throwable -> L337
            goto L33c
        L337:
            r0 = move-exception
            r4 = r0
            com.alipay.sdk.m.u.e.a(r4)
        L33c:
            android.app.Activity r0 = r1.a     // Catch: java.lang.Throwable -> L346
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L346
            r0.unbindService(r7)     // Catch: java.lang.Throwable -> L346
            goto L34a
        L346:
            r0 = move-exception
            com.alipay.sdk.m.u.e.a(r0)
        L34a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = ""
            r0.append(r4)
            long r6 = android.os.SystemClock.elapsedRealtime()
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r4 = "biz"
            java.lang.String r6 = "PgBindEnd"
            com.alipay.sdk.m.k.a.a(r3, r4, r6, r0)
            android.app.Activity r0 = r1.a
            java.lang.String r4 = r3.d
            com.alipay.sdk.m.k.a.a(r0, r3, r2, r4)
            r2 = 0
            r1.b = r2
            boolean r0 = r1.d
            if (r0 == 0) goto L37e
            android.app.Activity r0 = r1.a
            if (r0 == 0) goto L37e
            r2 = 0
            r0.setRequestedOrientation(r2)
            r1.d = r2
        L37e:
            throw r5
        L37f:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L37f
            throw r0
        L382:
            java.lang.Throwable r0 = new java.lang.Throwable     // Catch: java.lang.Throwable -> L38a
            java.lang.String r2 = "bindService fail"
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L38a
            throw r0     // Catch: java.lang.Throwable -> L38a
        L38a:
            r0 = move-exception
            java.lang.String r2 = "biz"
            java.lang.String r4 = "ClientBindServiceFailed"
            com.alipay.sdk.m.k.a.a(r3, r2, r4, r0)
            android.app.Activity r0 = r1.a
            com.alipay.sdk.m.s.a r2 = r1.f
            java.lang.String r3 = "alipaySdk"
            java.lang.String r4 = "bindServiceFail"
            com.alipay.sdk.m.u.n.a(r3, r4, r0, r2)
            android.util.Pair r0 = new android.util.Pair
            r2 = 1
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            java.lang.String r3 = "failed"
            r0.<init>(r3, r2)
            return r0
    }

    public static com.alipay.android.app.IAlixPay a(com.alipay.sdk.m.u.h r0, com.alipay.android.app.IAlixPay r1) {
            r0.b = r1
            return r1
    }

    public static com.alipay.sdk.m.s.a a(com.alipay.sdk.m.u.h r0) {
            com.alipay.sdk.m.s.a r0 = r0.f
            return r0
    }

    public static java.lang.String a(com.alipay.sdk.m.u.h r0, java.lang.String r1) {
            r0.h = r1
            return r1
    }

    private java.lang.String a(java.lang.String r10, java.lang.String r11) {
            r9 = this;
            java.lang.String r0 = "scheme_failed"
            java.util.concurrent.CountDownLatch r1 = new java.util.concurrent.CountDownLatch
            r2 = 1
            r1.<init>(r2)
            r2 = 32
            java.lang.String r2 = com.alipay.sdk.m.u.n.a(r2)
            long r3 = android.os.SystemClock.elapsedRealtime()
            com.alipay.sdk.m.s.a r5 = r9.f
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r2)
            java.lang.String r7 = "|"
            r6.append(r7)
            r6.append(r3)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "biz"
            java.lang.String r8 = "BSPStart"
            com.alipay.sdk.m.k.a.a(r5, r7, r8, r6)
            com.alipay.sdk.m.s.a r5 = r9.f
            com.alipay.sdk.m.s.a.a.a(r5, r2)
            com.alipay.sdk.m.u.h$a r5 = new com.alipay.sdk.m.u.h$a
            r5.<init>(r9, r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.alipay.sdk.app.AlipayResultActivity$a> r6 = com.alipay.sdk.app.AlipayResultActivity.a
            r6.put(r2, r5)
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r5.<init>()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r6 = "sourcePid"
            int r8 = android.os.Binder.getCallingPid()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r5.put(r6, r8)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r6 = "external_info"
            r5.put(r6, r10)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r6 = "pkgName"
            android.app.Activity r8 = r9.a     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r8 = r8.getPackageName()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r5.put(r6, r8)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r6 = "session"
            r5.put(r6, r2)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r5 = "UTF-8"
            byte[] r2 = r2.getBytes(r5)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r5 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r5)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            android.net.Uri$Builder r5 = new android.net.Uri$Builder     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r5.<init>()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r6 = "alipays"
            android.net.Uri$Builder r5 = r5.scheme(r6)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r6 = "platformapi"
            android.net.Uri$Builder r5 = r5.authority(r6)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r6 = "startapp"
            android.net.Uri$Builder r5 = r5.path(r6)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r6 = "appId"
            java.lang.String r8 = "20000125"
            android.net.Uri$Builder r5 = r5.appendQueryParameter(r6, r8)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r6 = "mqpSchemePay"
            r5.appendQueryParameter(r6, r2)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            com.alipay.sdk.m.s.a r2 = r9.f     // Catch: java.lang.Throwable -> Lb2
            java.util.HashMap r2 = com.alipay.sdk.m.s.a.a(r2)     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r6 = "ts_scheme"
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> Lb2
            r2.put(r6, r3)     // Catch: java.lang.Throwable -> Lb2
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lb2
            r3.<init>(r2)     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r2 = "mqpLoc"
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Lb2
            r5.appendQueryParameter(r2, r3)     // Catch: java.lang.Throwable -> Lb2
            goto Lba
        Lb2:
            r2 = move-exception
            com.alipay.sdk.m.s.a r3 = r9.f     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r4 = "BSPLocEx"
            com.alipay.sdk.m.k.a.a(r3, r7, r4, r2)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
        Lba:
            android.net.Uri r2 = r5.build()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            android.content.Intent r3 = new android.content.Intent     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r3.<init>()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r3.setPackage(r11)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r11 = 268435456(0x10000000, float:2.524355E-29)
            r3.addFlags(r11)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            android.net.Uri r11 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r3.setData(r11)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            android.app.Activity r11 = r9.a     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            com.alipay.sdk.m.s.a r4 = r9.f     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            com.alipay.sdk.m.s.a r5 = r9.f     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r5 = r5.d     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            com.alipay.sdk.m.k.a.a(r11, r4, r10, r5)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            android.app.Activity r10 = r9.a     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r10.startActivity(r3)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r10 = "mspl"
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r11.<init>()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r3 = "pay scheme waiting "
            r11.append(r3)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r11.append(r2)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            com.alipay.sdk.m.u.e.d(r10, r11)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r1.await()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r10 = r9.h     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            com.alipay.sdk.m.s.a r11 = r9.f     // Catch: java.lang.Throwable -> L114
            java.util.Map r11 = com.alipay.sdk.m.u.l.a(r11, r10)     // Catch: java.lang.Throwable -> L114
            java.lang.String r1 = "resultStatus"
            java.lang.Object r11 = r11.get(r1)     // Catch: java.lang.Throwable -> L114
            java.lang.String r11 = (java.lang.String) r11     // Catch: java.lang.Throwable -> L114
            if (r11 != 0) goto L11e
            java.lang.String r11 = "null"
            goto L11e
        L114:
            r11 = move-exception
            com.alipay.sdk.m.s.a r1 = r9.f     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r2 = "BSPStatEx"
            com.alipay.sdk.m.k.a.a(r1, r7, r2, r11)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r11 = "unknown"
        L11e:
            com.alipay.sdk.m.s.a r1 = r9.f     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r2.<init>()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r3 = "BSPDone-"
            r2.append(r3)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            r2.append(r11)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r11 = r2.toString()     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            com.alipay.sdk.m.k.a.a(r1, r7, r11)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            if (r11 == 0) goto L142
            com.alipay.sdk.m.s.a r10 = r9.f     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            java.lang.String r11 = "BSPEmpty"
            com.alipay.sdk.m.k.a.a(r10, r7, r11)     // Catch: java.lang.Throwable -> L144 java.lang.InterruptedException -> L14d
            goto L167
        L142:
            r0 = r10
            goto L167
        L144:
            r10 = move-exception
            com.alipay.sdk.m.s.a r11 = r9.f
            java.lang.String r1 = "BSPEx"
            com.alipay.sdk.m.k.a.a(r11, r7, r1, r10)
            goto L167
        L14d:
            r10 = move-exception
            com.alipay.sdk.m.s.a r11 = r9.f
            java.lang.String r0 = "BSPWaiting"
            com.alipay.sdk.m.k.a.a(r11, r7, r0, r10)
            com.alipay.sdk.m.j.c r10 = com.alipay.sdk.m.j.c.j
            int r10 = r10.b()
            com.alipay.sdk.m.j.c r11 = com.alipay.sdk.m.j.c.j
            java.lang.String r11 = r11.a()
            java.lang.String r0 = ""
            java.lang.String r0 = com.alipay.sdk.m.j.b.a(r10, r11, r0)
        L167:
            return r0
    }

    private java.lang.String a(java.lang.String r4, java.lang.String r5, android.content.pm.PackageInfo r6) {
            r3 = this;
            if (r6 == 0) goto L5
            java.lang.String r6 = r6.versionName
            goto L7
        L5:
            java.lang.String r6 = ""
        L7:
            java.lang.String r0 = "mspl"
            java.lang.String r1 = "pay payInvokeAct"
            com.alipay.sdk.m.u.e.d(r0, r1)
            com.alipay.sdk.m.s.a r0 = r3.f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r2 = "|"
            r1.append(r2)
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            java.lang.String r1 = "biz"
            java.lang.String r2 = "PgWltVer"
            com.alipay.sdk.m.k.a.a(r0, r1, r2, r6)
            android.app.Activity r6 = r3.a
            com.alipay.sdk.m.s.a r0 = r3.f
            java.lang.String r1 = r0.d
            com.alipay.sdk.m.k.a.a(r6, r0, r4, r1)
            java.lang.String r4 = r3.b(r4, r5)
            return r4
    }

    private java.lang.String a(java.lang.String r9, java.lang.String r10, android.content.pm.PackageInfo r11, com.alipay.sdk.m.u.n.c r12) {
            r8 = this;
            r0 = 0
            if (r11 == 0) goto L6
            int r1 = r11.versionCode
            goto L7
        L6:
            r1 = 0
        L7:
            if (r11 == 0) goto Lb
            java.lang.String r2 = r11.versionName
        Lb:
            java.lang.String r2 = "mspl"
            java.lang.String r3 = "pay bind or scheme"
            com.alipay.sdk.m.u.e.d(r2, r3)
            com.alipay.sdk.m.s.a r3 = r8.f
            if (r3 == 0) goto L2c
            java.lang.String r3 = r3.g
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L2c
            com.alipay.sdk.m.s.a r0 = r8.f
            java.lang.String r0 = r0.g
            java.lang.String r0 = r0.toLowerCase()
            java.lang.String r3 = "auth"
            boolean r0 = r0.contains(r3)
        L2c:
            java.lang.String r3 = "failed"
            java.lang.String r4 = "biz"
            if (r0 != 0) goto L51
            boolean r5 = com.alipay.sdk.m.u.n.i()
            if (r5 == 0) goto L51
            if (r12 == 0) goto L47
            com.alipay.sdk.m.m.a r5 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L47
            boolean r5 = r5.B()     // Catch: java.lang.Throwable -> L47
            if (r5 == 0) goto L47
            r8.a(r12)     // Catch: java.lang.Throwable -> L47
        L47:
            com.alipay.sdk.m.s.a r12 = r8.f
            java.lang.String r5 = "BindSkipByModel"
            com.alipay.sdk.m.k.a.a(r12, r4, r5)
        L4e:
            r5 = r3
            goto Lc0
        L51:
            if (r0 != 0) goto L72
            com.alipay.sdk.m.s.a r5 = r8.f
            boolean r5 = com.alipay.sdk.m.u.n.d(r5, r10)
            if (r5 == 0) goto L72
            if (r12 == 0) goto L6a
            com.alipay.sdk.m.m.a r5 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L6a
            boolean r5 = r5.B()     // Catch: java.lang.Throwable -> L6a
            if (r5 == 0) goto L6a
            r8.a(r12)     // Catch: java.lang.Throwable -> L6a
        L6a:
            com.alipay.sdk.m.s.a r12 = r8.f
            java.lang.String r5 = "BindSkipByL"
            com.alipay.sdk.m.k.a.a(r12, r4, r5)
            goto L4e
        L72:
            if (r12 == 0) goto L81
            com.alipay.sdk.m.m.a r5 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L81
            boolean r5 = r5.p()     // Catch: java.lang.Throwable -> L81
            if (r5 != 0) goto L81
            r8.a(r12)     // Catch: java.lang.Throwable -> L81
        L81:
            com.alipay.sdk.m.s.a r12 = r8.f
            android.util.Pair r12 = r8.a(r9, r10, r12)
            java.lang.Object r5 = r12.first
            java.lang.String r5 = (java.lang.String) r5
            boolean r6 = r3.equals(r5)     // Catch: java.lang.Throwable -> Lb8
            if (r6 == 0) goto Lc0
            java.lang.Object r12 = r12.second     // Catch: java.lang.Throwable -> Lb8
            java.lang.Boolean r12 = (java.lang.Boolean) r12     // Catch: java.lang.Throwable -> Lb8
            boolean r12 = r12.booleanValue()     // Catch: java.lang.Throwable -> Lb8
            if (r12 == 0) goto Lc0
            com.alipay.sdk.m.m.a r12 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> Lb8
            boolean r12 = r12.n()     // Catch: java.lang.Throwable -> Lb8
            if (r12 == 0) goto Lc0
            com.alipay.sdk.m.s.a r12 = r8.f     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r6 = "BindRetry"
            com.alipay.sdk.m.k.a.a(r12, r4, r6)     // Catch: java.lang.Throwable -> Lb8
            com.alipay.sdk.m.s.a r12 = r8.f     // Catch: java.lang.Throwable -> Lb8
            android.util.Pair r12 = r8.a(r9, r10, r12)     // Catch: java.lang.Throwable -> Lb8
            java.lang.Object r12 = r12.first     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r12 = (java.lang.String) r12     // Catch: java.lang.Throwable -> Lb8
            r5 = r12
            goto Lc0
        Lb8:
            r12 = move-exception
            com.alipay.sdk.m.s.a r6 = r8.f
            java.lang.String r7 = "BindRetryEx"
            com.alipay.sdk.m.k.a.a(r6, r4, r7, r12)
        Lc0:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r6 = "pay bind result: "
            r12.append(r6)
            r12.append(r5)
            java.lang.String r12 = r12.toString()
            com.alipay.sdk.m.u.e.d(r2, r12)
            android.app.Activity r12 = r8.a
            com.alipay.sdk.m.s.a r2 = r8.f
            java.lang.String r6 = r2.d
            com.alipay.sdk.m.k.a.a(r12, r2, r9, r6)
            boolean r12 = r3.equals(r5)
            if (r12 == 0) goto L18d
            java.lang.String r12 = "com.eg.android.AlipayGphone"
            boolean r12 = r12.equals(r10)
            java.lang.String r2 = "|"
            if (r12 != 0) goto L107
            com.alipay.sdk.m.s.a r9 = r8.f
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r10)
            r11.append(r2)
            r11.append(r1)
            java.lang.String r10 = r11.toString()
            java.lang.String r11 = "BSPNotStartByAlipay"
            com.alipay.sdk.m.k.a.a(r9, r4, r11, r10)
            return r5
        L107:
            com.alipay.sdk.m.m.a r12 = com.alipay.sdk.m.m.a.D()
            boolean r12 = r12.q()
            r3 = 460(0x1cc, float:6.45E-43)
            if (r1 < r3) goto L128
            if (r12 == 0) goto L128
            if (r0 != 0) goto L128
            android.app.Activity r12 = r8.a
            if (r12 == 0) goto L128
            com.alipay.sdk.m.s.a r0 = r8.f
            boolean r12 = b(r10, r12, r0)
            if (r12 == 0) goto L128
            java.lang.String r9 = r8.a(r9, r10, r11)
            return r9
        L128:
            com.alipay.sdk.m.m.a r11 = com.alipay.sdk.m.m.a.D()
            boolean r11 = r11.i()
            if (r11 != 0) goto L13c
            com.alipay.sdk.m.s.a r9 = r8.f
            java.lang.String r10 = "BSPNotStartByConfig"
            java.lang.String r11 = ""
            com.alipay.sdk.m.k.a.a(r9, r4, r10, r11)
            return r5
        L13c:
            r11 = 125(0x7d, float:1.75E-43)
            if (r1 > r11) goto L15a
            com.alipay.sdk.m.s.a r9 = r8.f
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r10)
            r11.append(r2)
            r11.append(r1)
            java.lang.String r10 = r11.toString()
            java.lang.String r11 = "BSPNotStartByPkg"
            com.alipay.sdk.m.k.a.a(r9, r4, r11, r10)
            return r5
        L15a:
            com.alipay.sdk.m.m.a r11 = com.alipay.sdk.m.m.a.D()
            boolean r11 = r11.m()
            if (r11 == 0) goto L178
            com.alipay.sdk.m.s.a r11 = r8.f
            if (r11 == 0) goto L178
            int r11 = r11.f
            int r11 = com.alipay.sdk.m.u.n.b(r11)
            if (r11 == 0) goto L178
            com.alipay.sdk.m.s.a r9 = r8.f
            java.lang.String r10 = "BSPNotStartByUsr"
            com.alipay.sdk.m.k.a.a(r9, r4, r10)
            return r5
        L178:
            android.app.Activity r11 = r8.a
            if (r11 == 0) goto L18a
            com.alipay.sdk.m.s.a r12 = r8.f
            boolean r11 = a(r10, r11, r12)
            if (r11 != 0) goto L185
            goto L18a
        L185:
            java.lang.String r9 = r8.a(r9, r10)
            return r9
        L18a:
            java.lang.String r9 = "scheme_failed"
            return r9
        L18d:
            return r5
    }

    private void a(com.alipay.sdk.m.u.n.c r4) throws java.lang.InterruptedException {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            android.content.pm.PackageInfo r4 = r4.a
            if (r4 != 0) goto L8
            return
        L8:
            java.lang.String r4 = r4.packageName
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "com.alipay.android.app.TransProcessPayActivity"
            r0.setClassName(r4, r1)
            android.app.Activity r4 = r3.a     // Catch: java.lang.Throwable -> L1a
            r4.startActivity(r0)     // Catch: java.lang.Throwable -> L1a
            goto L24
        L1a:
            r4 = move-exception
            com.alipay.sdk.m.s.a r0 = r3.f
            java.lang.String r1 = "biz"
            java.lang.String r2 = "StartLaunchAppTransEx"
            com.alipay.sdk.m.k.a.a(r0, r1, r2, r4)
        L24:
            r0 = 200(0xc8, double:9.9E-322)
            java.lang.Thread.sleep(r0)
            return
    }

    public static boolean a(java.lang.String r6, android.content.Context r7, com.alipay.sdk.m.s.a r8) {
            java.lang.String r0 = "BSPDetectFail"
            java.lang.String r1 = "biz"
            r2 = 0
            android.content.Intent r3 = new android.content.Intent     // Catch: java.lang.Throwable -> L22
            java.lang.String r4 = "android.intent.action.MAIN"
            r5 = 0
            r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> L22
            java.lang.String r4 = "com.alipay.android.msp.ui.views.MspContainerActivity"
            r3.setClassName(r6, r4)     // Catch: java.lang.Throwable -> L22
            android.content.pm.PackageManager r6 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L22
            android.content.pm.ActivityInfo r6 = r3.resolveActivityInfo(r6, r2)     // Catch: java.lang.Throwable -> L22
            if (r6 != 0) goto L20
            com.alipay.sdk.m.k.a.a(r8, r1, r0)     // Catch: java.lang.Throwable -> L22
            return r2
        L20:
            r6 = 1
            return r6
        L22:
            r6 = move-exception
            com.alipay.sdk.m.k.a.a(r8, r1, r0, r6)
            return r2
    }

    public static android.app.Activity b(com.alipay.sdk.m.u.h r0) {
            android.app.Activity r0 = r0.a
            return r0
    }

    public static java.lang.String b(com.alipay.sdk.m.u.h r0, java.lang.String r1) {
            r0.i = r1
            return r1
    }

    private java.lang.String b(java.lang.String r9, java.lang.String r10) {
            r8 = this;
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1 = 32
            java.lang.String r1 = com.alipay.sdk.m.u.n.a(r1)
            long r2 = android.os.SystemClock.elapsedRealtime()
            com.alipay.sdk.m.s.a r4 = r8.f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            java.lang.String r6 = "|"
            r5.append(r6)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "biz"
            java.lang.String r7 = "BSAStart"
            com.alipay.sdk.m.k.a.a(r4, r6, r7, r5)
            com.alipay.sdk.m.s.a r4 = r8.f
            com.alipay.sdk.m.s.a.a.a(r4, r1)
            com.alipay.sdk.m.u.h$b r4 = new com.alipay.sdk.m.u.h$b
            r4.<init>(r8, r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.alipay.sdk.app.APayEntranceActivity$a> r5 = com.alipay.sdk.app.APayEntranceActivity.h
            r5.put(r1, r4)
            com.alipay.sdk.m.s.a r5 = r8.f     // Catch: java.lang.Throwable -> L50
            java.util.HashMap r5 = com.alipay.sdk.m.s.a.a(r5)     // Catch: java.lang.Throwable -> L50
            java.lang.String r6 = "ts_intent"
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L50
            r5.put(r6, r2)     // Catch: java.lang.Throwable -> L50
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L50
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L50
            goto L5b
        L50:
            r2 = move-exception
            com.alipay.sdk.m.s.a r3 = r8.f     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r5 = "biz"
            java.lang.String r6 = "BSALocEx"
            com.alipay.sdk.m.k.a.a(r3, r5, r6, r2)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            r2 = 0
        L5b:
            android.content.Intent r3 = new android.content.Intent     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            android.app.Activity r5 = r8.a     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.Class<com.alipay.sdk.app.APayEntranceActivity> r6 = com.alipay.sdk.app.APayEntranceActivity.class
            r3.<init>(r5, r6)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r5 = "ap_order_info"
            r3.putExtra(r5, r9)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r5 = "ap_target_packagename"
            r3.putExtra(r5, r10)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r10 = "ap_session"
            r3.putExtra(r10, r1)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            if (r2 == 0) goto L7e
            java.lang.String r10 = "ap_local_info"
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            r3.putExtra(r10, r1)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
        L7e:
            android.os.Handler r10 = new android.os.Handler     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            r10.<init>(r1)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            com.alipay.sdk.m.u.h$c r1 = new com.alipay.sdk.m.u.h$c     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            r1.<init>(r8, r4)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            com.alipay.sdk.m.m.a r2 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            int r2 = r2.k()     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            long r4 = (long) r2     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            r10.postDelayed(r1, r4)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            android.app.Activity r10 = r8.a     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            com.alipay.sdk.m.s.a r1 = r8.f     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            com.alipay.sdk.m.s.a r2 = r8.f     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r2 = r2.d     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            com.alipay.sdk.m.k.a.a(r10, r1, r9, r2)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            com.alipay.sdk.m.m.a r9 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            boolean r9 = r9.z()     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            if (r9 == 0) goto Lbf
            android.os.Handler r9 = new android.os.Handler     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            android.os.Looper r10 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            com.alipay.sdk.m.u.h$d r10 = new com.alipay.sdk.m.u.h$d     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            r10.<init>(r8, r3, r0)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            r9.post(r10)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            goto Ldf
        Lbf:
            android.app.Activity r9 = r8.a     // Catch: java.lang.Throwable -> L132
            if (r9 == 0) goto Lc9
            android.app.Activity r9 = r8.a     // Catch: java.lang.Throwable -> L132
            r9.startActivity(r3)     // Catch: java.lang.Throwable -> L132
            goto Ldf
        Lc9:
            com.alipay.sdk.m.s.a r9 = r8.f     // Catch: java.lang.Throwable -> L132
            java.lang.String r10 = "biz"
            java.lang.String r1 = "ErrActNull"
            java.lang.String r2 = ""
            com.alipay.sdk.m.k.a.b(r9, r10, r1, r2)     // Catch: java.lang.Throwable -> L132
            com.alipay.sdk.m.s.a r9 = r8.f     // Catch: java.lang.Throwable -> L132
            android.content.Context r9 = r9.a()     // Catch: java.lang.Throwable -> L132
            if (r9 == 0) goto Ldf
            r9.startActivity(r3)     // Catch: java.lang.Throwable -> L132
        Ldf:
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            r0.wait()     // Catch: java.lang.Throwable -> L12f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12f
            java.lang.String r9 = r8.i     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            com.alipay.sdk.m.s.a r10 = r8.f     // Catch: java.lang.Throwable -> Lf9
            java.util.Map r10 = com.alipay.sdk.m.u.l.a(r10, r9)     // Catch: java.lang.Throwable -> Lf9
            java.lang.String r0 = "resultStatus"
            java.lang.Object r10 = r10.get(r0)     // Catch: java.lang.Throwable -> Lf9
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Throwable -> Lf9
            if (r10 != 0) goto L105
            java.lang.String r10 = "null"
            goto L105
        Lf9:
            r10 = move-exception
            com.alipay.sdk.m.s.a r0 = r8.f     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r1 = "biz"
            java.lang.String r2 = "BSAStatEx"
            com.alipay.sdk.m.k.a.a(r0, r1, r2, r10)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r10 = "unknown"
        L105:
            com.alipay.sdk.m.s.a r0 = r8.f     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r1 = "biz"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            r2.<init>()     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r3 = "BSADone-"
            r2.append(r3)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            r2.append(r10)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r10 = r2.toString()     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            com.alipay.sdk.m.k.a.a(r0, r1, r10)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            if (r10 == 0) goto L171
            com.alipay.sdk.m.s.a r9 = r8.f     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r10 = "biz"
            java.lang.String r0 = "BSAEmpty"
            com.alipay.sdk.m.k.a.a(r9, r10, r0)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r9 = "scheme_failed"
            goto L171
        L12f:
            r9 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12f
            throw r9     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
        L132:
            r9 = move-exception
            com.alipay.sdk.m.s.a r10 = r8.f     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            java.lang.String r0 = "biz"
            java.lang.String r1 = "ErrActEx"
            com.alipay.sdk.m.k.a.a(r10, r0, r1, r9)     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
            throw r9     // Catch: java.lang.Throwable -> L13d java.lang.InterruptedException -> L155
        L13d:
            r9 = move-exception
            com.alipay.sdk.m.s.a r10 = r8.f
            java.lang.String r0 = "biz"
            java.lang.String r1 = "BSAEx"
            com.alipay.sdk.m.k.a.a(r10, r0, r1, r9)
            android.app.Activity r9 = r8.a
            com.alipay.sdk.m.s.a r10 = r8.f
            java.lang.String r0 = "alipaySdk"
            java.lang.String r1 = "startActivityEx"
            com.alipay.sdk.m.u.n.a(r0, r1, r9, r10)
            java.lang.String r9 = "scheme_failed"
            goto L171
        L155:
            r9 = move-exception
            com.alipay.sdk.m.s.a r10 = r8.f
            java.lang.String r0 = "biz"
            java.lang.String r1 = "BSAWaiting"
            com.alipay.sdk.m.k.a.a(r10, r0, r1, r9)
            com.alipay.sdk.m.j.c r9 = com.alipay.sdk.m.j.c.j
            int r9 = r9.b()
            com.alipay.sdk.m.j.c r10 = com.alipay.sdk.m.j.c.j
            java.lang.String r10 = r10.a()
            java.lang.String r0 = ""
            java.lang.String r9 = com.alipay.sdk.m.j.b.a(r9, r10, r0)
        L171:
            return r9
    }

    public static boolean b(java.lang.String r5, android.content.Context r6, com.alipay.sdk.m.s.a r7) {
            java.lang.String r0 = "BSADetectFail"
            java.lang.String r1 = "biz"
            r2 = 0
            android.content.Intent r3 = new android.content.Intent     // Catch: java.lang.Throwable -> L1f
            r3.<init>()     // Catch: java.lang.Throwable -> L1f
            java.lang.String r4 = "com.alipay.android.app.flybird.ui.window.FlyBirdWindowActivity"
            r3.setClassName(r5, r4)     // Catch: java.lang.Throwable -> L1f
            android.content.pm.PackageManager r5 = r6.getPackageManager()     // Catch: java.lang.Throwable -> L1f
            android.content.pm.ActivityInfo r5 = r3.resolveActivityInfo(r5, r2)     // Catch: java.lang.Throwable -> L1f
            if (r5 != 0) goto L1d
            com.alipay.sdk.m.k.a.a(r7, r1, r0)     // Catch: java.lang.Throwable -> L1f
            return r2
        L1d:
            r5 = 1
            return r5
        L1f:
            r5 = move-exception
            com.alipay.sdk.m.k.a.a(r7, r1, r0, r5)
            return r2
    }

    public static java.lang.Object c(com.alipay.sdk.m.u.h r0) {
            java.lang.Object r0 = r0.c
            return r0
    }

    public static com.alipay.sdk.m.u.h.g d(com.alipay.sdk.m.u.h r0) {
            com.alipay.sdk.m.u.h$g r0 = r0.e
            return r0
    }

    public java.lang.String a(java.lang.String r9, boolean r10) {
            r8 = this;
            java.lang.String r0 = ""
            r1 = 0
            com.alipay.sdk.m.m.a r2 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> Lb3
            java.util.List r2 = r2.l()     // Catch: java.lang.Throwable -> Lb3
            com.alipay.sdk.m.m.a r3 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> Lb3
            boolean r3 = r3.h     // Catch: java.lang.Throwable -> Lb3
            if (r3 == 0) goto L15
            if (r2 != 0) goto L17
        L15:
            java.util.List<com.alipay.sdk.m.m.a$b> r2 = com.alipay.sdk.m.j.a.d     // Catch: java.lang.Throwable -> Lb3
        L17:
            com.alipay.sdk.m.s.a r3 = r8.f     // Catch: java.lang.Throwable -> Lb3
            android.app.Activity r4 = r8.a     // Catch: java.lang.Throwable -> Lb3
            com.alipay.sdk.m.u.n$c r2 = com.alipay.sdk.m.u.n.a(r3, r4, r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r3 = "failed"
            if (r2 == 0) goto Lb2
            com.alipay.sdk.m.s.a r4 = r8.f     // Catch: java.lang.Throwable -> Lb0
            boolean r4 = r2.a(r4)     // Catch: java.lang.Throwable -> Lb0
            if (r4 != 0) goto Lb2
            boolean r4 = r2.a()     // Catch: java.lang.Throwable -> Lb0
            if (r4 == 0) goto L33
            goto Lb2
        L33:
            android.content.pm.PackageInfo r4 = r2.a     // Catch: java.lang.Throwable -> Lb0
            boolean r4 = com.alipay.sdk.m.u.n.a(r4)     // Catch: java.lang.Throwable -> Lb0
            if (r4 == 0) goto L3c
            return r3
        L3c:
            android.content.pm.PackageInfo r3 = r2.a     // Catch: java.lang.Throwable -> Lb0
            if (r3 == 0) goto L52
            java.lang.String r3 = "com.eg.android.AlipayGphone"
            android.content.pm.PackageInfo r4 = r2.a     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r4 = r4.packageName     // Catch: java.lang.Throwable -> Lb0
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> Lb0
            if (r3 == 0) goto L4d
            goto L52
        L4d:
            android.content.pm.PackageInfo r3 = r2.a     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r0 = r3.packageName     // Catch: java.lang.Throwable -> Lb0
            goto L56
        L52:
            java.lang.String r0 = com.alipay.sdk.m.u.n.b()     // Catch: java.lang.Throwable -> Lb0
        L56:
            android.content.pm.PackageInfo r3 = r2.a     // Catch: java.lang.Throwable -> Lb0
            if (r3 == 0) goto L5c
            android.content.pm.PackageInfo r1 = r2.a     // Catch: java.lang.Throwable -> Lb0
        L5c:
            com.alipay.sdk.m.m.a r3 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r3 = r3.c()     // Catch: java.lang.Throwable -> Lb0
            if (r3 == 0) goto Lbe
            int r4 = r3.length()     // Catch: java.lang.Throwable -> Lb0
            if (r4 <= 0) goto Lbe
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lae
            r4.<init>(r3)     // Catch: java.lang.Throwable -> Lae
            org.json.JSONObject r3 = r4.optJSONObject(r0)     // Catch: java.lang.Throwable -> Lae
            if (r3 == 0) goto Lbe
            int r4 = r3.length()     // Catch: java.lang.Throwable -> Lae
            if (r4 <= 0) goto Lbe
            java.util.Iterator r4 = r3.keys()     // Catch: java.lang.Throwable -> Lae
        L81:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> Lae
            if (r5 == 0) goto Lbe
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> Lae
            int r6 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Throwable -> Lae
            if (r1 == 0) goto L81
            int r7 = r1.versionCode     // Catch: java.lang.Throwable -> Lae
            if (r7 < r6) goto L81
            java.lang.String r5 = r3.getString(r5)     // Catch: java.lang.Exception -> L81 java.lang.Throwable -> Lae
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Exception -> L81 java.lang.Throwable -> Lae
            com.alipay.sdk.m.m.a r6 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Exception -> L81 java.lang.Throwable -> Lae
            android.app.Activity r7 = r8.a     // Catch: java.lang.Exception -> L81 java.lang.Throwable -> Lae
            boolean r5 = r6.a(r7, r5)     // Catch: java.lang.Exception -> L81 java.lang.Throwable -> Lae
            r8.g = r5     // Catch: java.lang.Exception -> L81 java.lang.Throwable -> Lae
            if (r5 == 0) goto L81
            goto Lbe
        Lae:
            goto Lbe
        Lb0:
            r3 = move-exception
            goto Lb5
        Lb2:
            return r3
        Lb3:
            r3 = move-exception
            r2 = r1
        Lb5:
            com.alipay.sdk.m.s.a r4 = r8.f
            java.lang.String r5 = "biz"
            java.lang.String r6 = "CheckClientSignEx"
            com.alipay.sdk.m.k.a.a(r4, r5, r6, r3)
        Lbe:
            com.alipay.sdk.m.s.a r3 = r8.f
            boolean r3 = com.alipay.sdk.m.u.n.b(r3)
            if (r10 != 0) goto Lca
            boolean r10 = r8.g
            if (r10 == 0) goto Ldb
        Lca:
            if (r3 != 0) goto Ldb
            android.app.Activity r10 = r8.a
            com.alipay.sdk.m.s.a r3 = r8.f
            boolean r10 = b(r0, r10, r3)
            if (r10 == 0) goto Ldb
            java.lang.String r9 = r8.a(r9, r0, r1)
            return r9
        Ldb:
            java.lang.String r9 = r8.a(r9, r0, r1, r2)
            return r9
    }

    public void a() {
            r1 = this;
            r0 = 0
            r1.a = r0
            r1.e = r0
            return
    }
}
