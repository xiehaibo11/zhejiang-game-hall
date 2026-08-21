package com.mbridge.msdk.foundation.controller;

public class a {
    public static final java.lang.String a = null;
    public static java.util.HashMap<java.lang.String, java.lang.String> b;
    public static java.util.List<java.lang.String> c;
    private static com.mbridge.msdk.foundation.controller.a d;
    private static java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r;
    private android.content.Context e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private int j;
    private java.lang.ref.WeakReference<android.content.Context> k;
    private java.lang.ref.WeakReference<android.app.Activity> l;
    private int m;
    private org.json.JSONObject n;
    private int o;
    private boolean p;
    private java.util.List<java.lang.String> q;
    private java.lang.String s;


    public class a {
        final com.mbridge.msdk.foundation.controller.a a;

        public final class a {
            final com.mbridge.msdk.foundation.controller.a.a a;
            private final java.lang.String b;
            private final boolean c;

            a(com.mbridge.msdk.foundation.controller.a.a r1, java.lang.String r2, boolean r3) {
                    r0 = this;
                    r0.a = r1
                    r0.<init>()
                    r0.b = r2
                    r0.c = r3
                    return
            }

            public final java.lang.String a() {
                    r1 = this;
                    java.lang.String r0 = r1.b
                    return r0
            }
        }

        private final class b implements android.content.ServiceConnection {
            boolean a;
            final com.mbridge.msdk.foundation.controller.a.a b;
            private final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> c;

            private b(com.mbridge.msdk.foundation.controller.a.a r2) {
                    r1 = this;
                    r1.b = r2
                    r1.<init>()
                    r2 = 0
                    r1.a = r2
                    java.util.concurrent.LinkedBlockingQueue r2 = new java.util.concurrent.LinkedBlockingQueue
                    r0 = 1
                    r2.<init>(r0)
                    r1.c = r2
                    return
            }

            b(com.mbridge.msdk.foundation.controller.a.a r1, com.mbridge.msdk.foundation.controller.a.1 r2) {
                    r0 = this;
                    r0.<init>(r1)
                    return
            }

            public final android.os.IBinder a() throws java.lang.InterruptedException {
                    r1 = this;
                    boolean r0 = r1.a
                    if (r0 != 0) goto L10
                    r0 = 1
                    r1.a = r0
                    java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r1.c
                    java.lang.Object r0 = r0.take()
                    android.os.IBinder r0 = (android.os.IBinder) r0
                    return r0
                L10:
                    java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                    r0.<init>()
                    throw r0
            }

            @Override
            public final void onServiceConnected(android.content.ComponentName r1, android.os.IBinder r2) {
                    r0 = this;
                    java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r0.c     // Catch: java.lang.InterruptedException -> L5
                    r1.put(r2)     // Catch: java.lang.InterruptedException -> L5
                L5:
                    return
            }

            @Override
            public final void onServiceDisconnected(android.content.ComponentName r1) {
                    r0 = this;
                    return
            }
        }

        private final class c implements android.os.IInterface {
            final com.mbridge.msdk.foundation.controller.a.a a;
            private android.os.IBinder b;

            public c(com.mbridge.msdk.foundation.controller.a.a r1, android.os.IBinder r2) {
                    r0 = this;
                    r0.a = r1
                    r0.<init>()
                    r0.b = r2
                    return
            }

            public final java.lang.String a() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.google.android.gms.ads.identifier.internal.IAdvertisingIdService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L22
                    android.os.IBinder r2 = r5.b     // Catch: java.lang.Throwable -> L22
                    r3 = 1
                    r4 = 0
                    r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L22
                    r1.readException()     // Catch: java.lang.Throwable -> L22
                    java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L22
                    r1.recycle()
                    r0.recycle()
                    goto L2d
                L22:
                    r2 = move-exception
                    r2.printStackTrace()     // Catch: java.lang.Throwable -> L2e
                    r1.recycle()
                    r0.recycle()
                    r2 = 0
                L2d:
                    return r2
                L2e:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            public final boolean a(boolean r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    r2 = 0
                    java.lang.String r3 = "com.google.android.gms.ads.identifier.internal.IAdvertisingIdService"
                    r0.writeInterfaceToken(r3)     // Catch: java.lang.Throwable -> L28
                    r3 = 1
                    if (r6 == 0) goto L13
                    r6 = r3
                    goto L14
                L13:
                    r6 = r2
                L14:
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L28
                    android.os.IBinder r6 = r5.b     // Catch: java.lang.Throwable -> L28
                    r4 = 2
                    r6.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L28
                    r1.readException()     // Catch: java.lang.Throwable -> L28
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L28
                    if (r6 == 0) goto L2c
                    r2 = r3
                    goto L2c
                L28:
                    r6 = move-exception
                    r6.printStackTrace()     // Catch: java.lang.Throwable -> L33
                L2c:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L33:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.b
                    return r0
            }
        }

        public a(com.mbridge.msdk.foundation.controller.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        public final com.mbridge.msdk.foundation.controller.a.a.a a(android.content.Context r6) throws java.lang.Exception {
                r5 = this;
                android.os.Looper r0 = android.os.Looper.myLooper()
                android.os.Looper r1 = android.os.Looper.getMainLooper()
                if (r0 == r1) goto L59
                android.content.pm.PackageManager r0 = r6.getPackageManager()     // Catch: java.lang.Exception -> L57
                java.lang.String r1 = "com.android.vending"
                r2 = 0
                r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L57
                com.mbridge.msdk.foundation.controller.a$a$b r0 = new com.mbridge.msdk.foundation.controller.a$a$b
                r1 = 0
                r0.<init>(r5, r1)
                android.content.Intent r1 = new android.content.Intent
                java.lang.String r2 = "com.google.android.gms.ads.identifier.service.START"
                r1.<init>(r2)
                java.lang.String r2 = "com.google.android.gms"
                r1.setPackage(r2)
                r2 = 1
                boolean r1 = r6.bindService(r1, r0, r2)
                if (r1 == 0) goto L4f
                com.mbridge.msdk.foundation.controller.a$a$c r1 = new com.mbridge.msdk.foundation.controller.a$a$c     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
                android.os.IBinder r3 = r0.a()     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
                r1.<init>(r5, r3)     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
                com.mbridge.msdk.foundation.controller.a$a$a r3 = new com.mbridge.msdk.foundation.controller.a$a$a     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
                java.lang.String r4 = r1.a()     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
                boolean r1 = r1.a(r2)     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
                r3.<init>(r5, r4, r1)     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L49
                r6.unbindService(r0)
                return r3
            L47:
                r1 = move-exception
                goto L4b
            L49:
                r1 = move-exception
                throw r1     // Catch: java.lang.Throwable -> L47
            L4b:
                r6.unbindService(r0)
                throw r1
            L4f:
                java.io.IOException r6 = new java.io.IOException
                java.lang.String r0 = "Google Play connection failed"
                r6.<init>(r0)
                throw r6
            L57:
                r6 = move-exception
                throw r6
            L59:
                java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
                java.lang.String r0 = "Cannot be called from the main thread"
                r6.<init>(r0)
                throw r6
        }
    }

    public interface b {
        void a();
    }

    static {
            java.lang.Class<com.mbridge.msdk.foundation.controller.a> r0 = com.mbridge.msdk.foundation.controller.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.controller.a.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a.b = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a.c = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a.r = r0
            return
    }

    private a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.m = r0
            r1.p = r0
            r0 = 0
            r1.q = r0
            return
    }

    static android.content.Context a(com.mbridge.msdk.foundation.controller.a r0) {
            android.content.Context r0 = r0.e
            return r0
    }

    static void a(com.mbridge.msdk.foundation.controller.a r3, java.lang.String r4) {
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.b(r4)     // Catch: java.lang.Exception -> L24
            if (r0 == 0) goto L28
            java.lang.String r0 = com.mbridge.msdk.foundation.controller.a.a     // Catch: java.lang.Exception -> L24
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L24
            r1.<init>()     // Catch: java.lang.Exception -> L24
            java.lang.String r2 = "saveGAID gaid:"
            r1.append(r2)     // Catch: java.lang.Exception -> L24
            r1.append(r4)     // Catch: java.lang.Exception -> L24
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L24
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L24
            android.content.Context r3 = r3.e     // Catch: java.lang.Exception -> L24
            java.lang.String r0 = "ga_id"
            com.mbridge.msdk.foundation.tools.ag.a(r3, r0, r4)     // Catch: java.lang.Exception -> L24
            goto L28
        L24:
            r3 = move-exception
            r3.printStackTrace()
        L28:
            return
    }

    static java.lang.String b(com.mbridge.msdk.foundation.controller.a r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    public static java.util.Set<com.mbridge.msdk.foundation.entity.i> e() {
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r0 = com.mbridge.msdk.foundation.controller.a.r
            return r0
    }

    public static com.mbridge.msdk.foundation.controller.a f() {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.d
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.controller.a> r0 = com.mbridge.msdk.foundation.controller.a.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.controller.a r1 = new com.mbridge.msdk.foundation.controller.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.controller.a.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.d
            return r0
    }

    public static synchronized void g() {
            java.lang.Class<com.mbridge.msdk.foundation.controller.a> r0 = com.mbridge.msdk.foundation.controller.a.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.controller.a r1 = f()     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            java.lang.String r1 = r1.k()     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            if (r1 != 0) goto L62
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            com.mbridge.msdk.foundation.controller.a r2 = f()     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            com.mbridge.msdk.c.a r1 = r1.b(r2)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            if (r1 == 0) goto L62
            java.lang.String r1 = r1.ak()     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            if (r2 != 0) goto L62
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            if (r2 != 0) goto L62
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            int r1 = r2.length()     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            if (r1 <= 0) goto L62
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            r1.<init>()     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            r3 = 0
        L48:
            int r4 = r2.length()     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            if (r3 >= r4) goto L58
            java.lang.String r4 = r2.optString(r3)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            r1.add(r4)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            int r3 = r3 + 1
            goto L48
        L58:
            com.mbridge.msdk.foundation.controller.a r2 = f()     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            r2.q = r1     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L62
            goto L62
        L5f:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L62:
            monitor-exit(r0)
            return
    }

    public final java.lang.ref.WeakReference<android.app.Activity> a() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.l
            return r0
    }

    public final java.util.List<java.lang.String> a(boolean r2) {
            r1 = this;
            com.mbridge.msdk.foundation.controller.a r0 = f()     // Catch: java.lang.Exception -> L1d
            java.util.List<java.lang.String> r0 = r0.q     // Catch: java.lang.Exception -> L1d
            if (r2 == 0) goto Lb
            java.util.List<java.lang.String> r2 = com.mbridge.msdk.foundation.controller.a.c     // Catch: java.lang.Exception -> L1d
            return r2
        Lb:
            java.util.List<java.lang.String> r2 = com.mbridge.msdk.foundation.controller.a.c     // Catch: java.lang.Exception -> L1d
            if (r2 == 0) goto L1a
            java.util.List<java.lang.String> r2 = com.mbridge.msdk.foundation.controller.a.c     // Catch: java.lang.Exception -> L1d
            int r2 = r2.size()     // Catch: java.lang.Exception -> L1d
            if (r2 <= 0) goto L1a
            java.util.List<java.lang.String> r2 = com.mbridge.msdk.foundation.controller.a.c     // Catch: java.lang.Exception -> L1d
            return r2
        L1a:
            java.util.List<java.lang.String> r2 = com.mbridge.msdk.foundation.controller.a.c     // Catch: java.lang.Exception -> L1d
            return r2
        L1d:
            java.lang.String r2 = com.mbridge.msdk.foundation.controller.a.a
            java.lang.String r0 = "get package info list error"
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
            r2 = 0
            return r2
    }

    public final void a(int r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final void a(android.content.Context r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.k = r0
            return
    }

    public final synchronized void a(com.mbridge.msdk.foundation.controller.a.b r8) {
            r7 = this;
            monitor-enter(r7)
            android.content.Context r0 = r7.e     // Catch: java.lang.Throwable -> La5
            com.mbridge.msdk.foundation.tools.l r0 = com.mbridge.msdk.foundation.tools.l.a(r0)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = r7.g     // Catch: java.lang.Throwable -> La5
            java.util.concurrent.CopyOnWriteArraySet r0 = r0.a(r1)     // Catch: java.lang.Throwable -> La5
            com.mbridge.msdk.foundation.controller.a.r = r0     // Catch: java.lang.Throwable -> La5
            if (r0 == 0) goto L9e
            int r0 = r0.size()     // Catch: java.lang.Throwable -> La5
            if (r0 != 0) goto L19
            goto L9e
        L19:
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet     // Catch: java.lang.Throwable -> La5
            r0.<init>()     // Catch: java.lang.Throwable -> La5
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r1 = com.mbridge.msdk.foundation.controller.a.r     // Catch: java.lang.Throwable -> La5
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> La5
            if (r1 == 0) goto L79
        L26:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> La5
            if (r2 == 0) goto L79
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            com.mbridge.msdk.foundation.entity.i r2 = (com.mbridge.msdk.foundation.entity.i) r2     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            java.util.List<java.lang.String> r3 = com.mbridge.msdk.foundation.controller.a.c     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            if (r3 == 0) goto L26
            java.util.List<java.lang.String> r3 = com.mbridge.msdk.foundation.controller.a.c     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            int r3 = r3.size()     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            if (r3 <= 0) goto L26
            if (r2 == 0) goto L26
            r3 = 0
        L41:
            java.util.List<java.lang.String> r4 = com.mbridge.msdk.foundation.controller.a.c     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            int r4 = r4.size()     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            if (r3 >= r4) goto L26
            java.util.List<java.lang.String> r4 = com.mbridge.msdk.foundation.controller.a.c     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            java.lang.String r5 = r2.b()     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            boolean r6 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            if (r6 != 0) goto L6a
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            if (r6 != 0) goto L6a
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
            if (r4 == 0) goto L6a
            r0.add(r2)     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> La5
        L6a:
            int r3 = r3 + 1
            goto L41
        L6d:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> La5
            java.lang.String r2 = com.mbridge.msdk.foundation.controller.a.a     // Catch: java.lang.Throwable -> La5
            java.lang.String r3 = "remove list error"
            com.mbridge.msdk.foundation.tools.z.d(r2, r3)     // Catch: java.lang.Throwable -> La5
            goto L26
        L79:
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r1 = com.mbridge.msdk.foundation.controller.a.r     // Catch: java.lang.Throwable -> La5
            if (r1 == 0) goto L82
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r1 = com.mbridge.msdk.foundation.controller.a.r     // Catch: java.lang.Throwable -> La5
            r1.clear()     // Catch: java.lang.Throwable -> La5
        L82:
            int r1 = r0.size()     // Catch: java.lang.Throwable -> La5
            if (r1 <= 0) goto L8d
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r1 = com.mbridge.msdk.foundation.controller.a.r     // Catch: java.lang.Throwable -> La5
            r1.addAll(r0)     // Catch: java.lang.Throwable -> La5
        L8d:
            android.content.Context r0 = r7.e     // Catch: java.lang.Throwable -> La5
            com.mbridge.msdk.foundation.tools.l r0 = com.mbridge.msdk.foundation.tools.l.a(r0)     // Catch: java.lang.Throwable -> La5
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r1 = com.mbridge.msdk.foundation.controller.a.r     // Catch: java.lang.Throwable -> La5
            r0.a(r1)     // Catch: java.lang.Throwable -> La5
            if (r8 == 0) goto La5
            r8.a()     // Catch: java.lang.Throwable -> La5
            goto La5
        L9e:
            if (r8 == 0) goto La3
            r8.a()     // Catch: java.lang.Throwable -> La5
        La3:
            monitor-exit(r7)
            return
        La5:
            monitor-exit(r7)
            return
    }

    public final void a(com.mbridge.msdk.foundation.controller.a.b r5, android.os.Handler r6) {
            r4 = this;
            boolean r0 = r4.p
            r1 = 1
            if (r0 != r1) goto L6
            return
        L6:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L14
            r0.<init>()     // Catch: org.json.JSONException -> L14
            r4.n = r0     // Catch: org.json.JSONException -> L14
            java.lang.String r1 = "webgl"
            r2 = 0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L14
            goto L18
        L14:
            r0 = move-exception
            r0.printStackTrace()
        L18:
            java.lang.String r0 = "-1"
            android.content.Context r1 = r4.e     // Catch: java.lang.Exception -> L62
            java.lang.String r2 = "ga_id"
            java.lang.Object r1 = com.mbridge.msdk.foundation.tools.ag.b(r1, r2, r0)     // Catch: java.lang.Exception -> L62
            if (r1 == 0) goto L66
            boolean r2 = r1 instanceof java.lang.String     // Catch: java.lang.Exception -> L62
            if (r2 == 0) goto L66
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L62
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.b(r1)     // Catch: java.lang.Exception -> L62
            if (r2 == 0) goto L66
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> L62
            if (r0 != 0) goto L66
            java.lang.String r0 = com.mbridge.msdk.foundation.controller.a.a     // Catch: java.lang.Exception -> L62
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L62
            r2.<init>()     // Catch: java.lang.Exception -> L62
            java.lang.String r3 = "sp init gaid:"
            r2.append(r3)     // Catch: java.lang.Exception -> L62
            r2.append(r1)     // Catch: java.lang.Exception -> L62
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L62
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Exception -> L62
            boolean r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()     // Catch: java.lang.Exception -> L62
            if (r0 == 0) goto L66
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L62
            java.lang.String r2 = "authority_device_id"
            boolean r0 = r0.a(r2)     // Catch: java.lang.Exception -> L62
            if (r0 == 0) goto L66
            com.mbridge.msdk.foundation.tools.v.h(r1)     // Catch: java.lang.Exception -> L62
            goto L66
        L62:
            r0 = move-exception
            r0.printStackTrace()
        L66:
            java.lang.Thread r0 = new java.lang.Thread
            com.mbridge.msdk.foundation.controller.a$1 r1 = new com.mbridge.msdk.foundation.controller.a$1
            r1.<init>(r4, r6, r5)
            r0.<init>(r1)
            r0.start()
            return
    }

    public final void a(java.lang.String r3) {
            r2 = this;
            r2.s = r3     // Catch: java.lang.Exception -> L14
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L14
            if (r0 != 0) goto L18
            android.content.Context r0 = r2.e     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L18
            android.content.Context r0 = r2.e     // Catch: java.lang.Exception -> L14
            java.lang.String r1 = "applicationIds"
            com.mbridge.msdk.foundation.tools.ag.a(r0, r1, r3)     // Catch: java.lang.Exception -> L14
            goto L18
        L14:
            r3 = move-exception
            r3.printStackTrace()
        L18:
            return
    }

    public final void a(java.lang.ref.WeakReference<android.app.Activity> r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public final void a(org.json.JSONObject r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public final int b() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    public final void b(int r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public final void b(android.content.Context r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final android.content.Context c() {
            r1 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r1.k
            if (r0 != 0) goto L6
            r0 = 0
            goto Lc
        L6:
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
        Lc:
            return r0
    }

    public final void c(int r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public final void c(java.lang.String r3) {
            r2 = this;
            r2.g = r3     // Catch: java.lang.Exception -> L14
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L14
            if (r0 != 0) goto L18
            android.content.Context r0 = r2.e     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L18
            android.content.Context r0 = r2.e     // Catch: java.lang.Exception -> L14
            java.lang.String r1 = "sp_appId"
            com.mbridge.msdk.foundation.tools.ag.a(r0, r1, r3)     // Catch: java.lang.Exception -> L14
            goto L18
        L14:
            r3 = move-exception
            r3.printStackTrace()
        L18:
            return
    }

    public final java.lang.String d() {
            r1 = this;
            android.content.Context r0 = r1.e     // Catch: java.lang.Exception -> Lb
            if (r0 == 0) goto Lf
            android.content.Context r0 = r1.e     // Catch: java.lang.Exception -> Lb
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Exception -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            r0 = 0
            return r0
    }

    public final void d(java.lang.String r3) {
            r2 = this;
            r2.h = r3     // Catch: java.lang.Exception -> L14
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L14
            if (r0 != 0) goto L18
            android.content.Context r0 = r2.e     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L18
            android.content.Context r0 = r2.e     // Catch: java.lang.Exception -> L14
            java.lang.String r1 = "sp_appKey"
            com.mbridge.msdk.foundation.tools.ag.a(r0, r1, r3)     // Catch: java.lang.Exception -> L14
            goto L18
        L14:
            r3 = move-exception
            r3.printStackTrace()
        L18:
            return
    }

    public final void e(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L14
            if (r0 != 0) goto L18
            r2.i = r3     // Catch: java.lang.Exception -> L14
            android.content.Context r0 = r2.e     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L18
            android.content.Context r0 = r2.e     // Catch: java.lang.Exception -> L14
            java.lang.String r1 = "sp_wx_appKey"
            com.mbridge.msdk.foundation.tools.ag.a(r0, r1, r3)     // Catch: java.lang.Exception -> L14
            goto L18
        L14:
            r3 = move-exception
            r3.printStackTrace()
        L18:
            return
    }

    public final void h() {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r0 = com.mbridge.msdk.foundation.controller.a.r     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L17
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r0 = com.mbridge.msdk.foundation.controller.a.r     // Catch: java.lang.Throwable -> L17
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L17
            if (r0 <= 0) goto L17
            android.content.Context r0 = r2.e     // Catch: java.lang.Throwable -> L17
            com.mbridge.msdk.foundation.tools.l r0 = com.mbridge.msdk.foundation.tools.l.a(r0)     // Catch: java.lang.Throwable -> L17
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r1 = com.mbridge.msdk.foundation.controller.a.r     // Catch: java.lang.Throwable -> L17
            r0.a(r1)     // Catch: java.lang.Throwable -> L17
        L17:
            return
    }

    public final java.util.List<java.lang.Long> i() {
            r4 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r0 = com.mbridge.msdk.foundation.controller.a.r     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L43
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r0 = com.mbridge.msdk.foundation.controller.a.r     // Catch: java.lang.Throwable -> L43
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L43
            if (r0 <= 0) goto L43
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.foundation.entity.i> r0 = com.mbridge.msdk.foundation.controller.a.r     // Catch: java.lang.Throwable -> L43
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L43
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L43
            r1.<init>()     // Catch: java.lang.Throwable -> L43
        L17:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L43
            if (r2 == 0) goto L42
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L43
            com.mbridge.msdk.foundation.entity.i r2 = (com.mbridge.msdk.foundation.entity.i) r2     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = r2.a()     // Catch: java.lang.Throwable -> L43
            boolean r3 = r1.contains(r3)     // Catch: java.lang.Throwable -> L43
            if (r3 != 0) goto L17
            java.lang.String r2 = r2.a()     // Catch: java.lang.NumberFormatException -> L3d java.lang.Throwable -> L43
            long r2 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L3d java.lang.Throwable -> L43
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.NumberFormatException -> L3d java.lang.Throwable -> L43
            r1.add(r2)     // Catch: java.lang.NumberFormatException -> L3d java.lang.Throwable -> L43
            goto L17
        L3d:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L43
            goto L17
        L42:
            return r1
        L43:
            r0 = 0
            return r0
    }

    public final android.content.Context j() {
            r1 = this;
            android.content.Context r0 = r1.e
            return r0
    }

    public final java.lang.String k() {
            r3 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = r3.g     // Catch: java.lang.Exception -> L1c
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L1c
            if (r1 != 0) goto Ld
            java.lang.String r0 = r3.g     // Catch: java.lang.Exception -> L1c
            return r0
        Ld:
            android.content.Context r1 = r3.e     // Catch: java.lang.Exception -> L1c
            if (r1 == 0) goto L20
            android.content.Context r1 = r3.e     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = "sp_appId"
            java.lang.Object r1 = com.mbridge.msdk.foundation.tools.ag.b(r1, r2, r0)     // Catch: java.lang.Exception -> L1c
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L1c
            return r1
        L1c:
            r1 = move-exception
            r1.printStackTrace()
        L20:
            return r0
    }

    public final java.lang.String l() {
            r3 = this;
            java.lang.String r0 = r3.h
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r3.h
            return r0
        Lb:
            android.content.Context r0 = r3.e
            if (r0 == 0) goto L1a
            java.lang.String r1 = "sp_appKey"
            java.lang.String r2 = ""
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r0, r1, r2)
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L1a:
            r0 = 0
            return r0
    }

    public final java.lang.String m() {
            r3 = this;
            java.lang.String r0 = r3.i
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r3.i
            return r0
        Lb:
            android.content.Context r0 = r3.e
            if (r0 == 0) goto L1a
            java.lang.String r1 = "sp_wx_appKey"
            java.lang.String r2 = ""
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r0, r1, r2)
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L1a:
            r0 = 0
            return r0
    }

    public final int n() {
            r1 = this;
            int r0 = r1.m
            return r0
    }

    public final org.json.JSONObject o() {
            r1 = this;
            org.json.JSONObject r0 = r1.n
            return r0
    }
}
