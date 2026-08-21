package com.bytedance.pangle.service.a;

public class a extends com.bytedance.pangle.d.a {
    private static volatile com.bytedance.pangle.service.a.a b;
    private final android.os.Handler a;
    private final java.util.HashMap<android.content.ComponentName, android.os.IBinder> c;
    private final java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a.a.b> d;
    private final com.bytedance.pangle.service.a.a.a<android.content.Intent> e;
    private final java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a> f;
    private final java.util.HashSet<android.content.ComponentName> g;
    private final java.util.HashSet<android.content.ComponentName> h;





    class a<T> extends java.util.HashMap<com.bytedance.pangle.f, T> {
        final com.bytedance.pangle.service.a.a a;

        a(com.bytedance.pangle.service.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final boolean containsKey(java.lang.Object r6) {
                r5 = this;
                boolean r0 = super.containsKey(r6)
                r1 = 1
                if (r0 == 0) goto L8
                return r1
            L8:
                boolean r0 = r6 instanceof com.bytedance.pangle.f
                r2 = 0
                if (r0 != 0) goto Le
                return r2
            Le:
                java.util.Set r0 = r5.keySet()
                java.util.Iterator r0 = r0.iterator()
            L16:
                boolean r3 = r0.hasNext()
                if (r3 == 0) goto L35
                java.lang.Object r3 = r0.next()
                com.bytedance.pangle.f r3 = (com.bytedance.pangle.f) r3
                int r3 = r3.a()     // Catch: android.os.RemoteException -> L30
                r4 = r6
                com.bytedance.pangle.f r4 = (com.bytedance.pangle.f) r4     // Catch: android.os.RemoteException -> L30
                int r4 = r4.a()     // Catch: android.os.RemoteException -> L30
                if (r3 != r4) goto L16
                return r1
            L30:
                r3 = move-exception
                r3.printStackTrace()
                goto L16
            L35:
                return r2
        }

        @Override
        public final T remove(java.lang.Object r5) {
                r4 = this;
                java.lang.Object r0 = super.remove(r5)
                if (r0 == 0) goto L7
                return r0
            L7:
                java.util.Set r0 = r4.keySet()
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L2e
                java.lang.Object r1 = r0.next()
                com.bytedance.pangle.f r1 = (com.bytedance.pangle.f) r1
                int r2 = r1.a()     // Catch: android.os.RemoteException -> L29
                r3 = r5
                com.bytedance.pangle.f r3 = (com.bytedance.pangle.f) r3     // Catch: android.os.RemoteException -> L29
                int r3 = r3.a()     // Catch: android.os.RemoteException -> L29
                if (r2 != r3) goto Lf
                goto L2f
            L29:
                r1 = move-exception
                r1.printStackTrace()
                goto Lf
            L2e:
                r1 = 0
            L2f:
                java.lang.Object r5 = super.remove(r1)
                return r5
        }
    }

    class b extends java.util.HashSet<com.bytedance.pangle.f> {
        final com.bytedance.pangle.service.a.a a;

        b(com.bytedance.pangle.service.a.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final boolean contains(java.lang.Object r6) {
                r5 = this;
                boolean r0 = super.contains(r6)
                r1 = 1
                if (r0 == 0) goto L8
                return r1
            L8:
                boolean r0 = r6 instanceof com.bytedance.pangle.f
                r2 = 0
                if (r0 != 0) goto Le
                return r2
            Le:
                java.util.Iterator r0 = r5.iterator()
            L12:
                boolean r3 = r0.hasNext()
                if (r3 == 0) goto L31
                java.lang.Object r3 = r0.next()
                com.bytedance.pangle.f r3 = (com.bytedance.pangle.f) r3
                int r3 = r3.a()     // Catch: android.os.RemoteException -> L2c
                r4 = r6
                com.bytedance.pangle.f r4 = (com.bytedance.pangle.f) r4     // Catch: android.os.RemoteException -> L2c
                int r4 = r4.a()     // Catch: android.os.RemoteException -> L2c
                if (r3 != r4) goto L12
                return r1
            L2c:
                r3 = move-exception
                r3.printStackTrace()
                goto L12
            L31:
                return r2
        }

        @Override
        public final boolean remove(java.lang.Object r6) {
                r5 = this;
                boolean r0 = super.remove(r6)
                if (r0 == 0) goto L8
                r6 = 1
                return r6
            L8:
                r0 = 0
                java.util.Iterator r1 = r5.iterator()
            Ld:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L2d
                java.lang.Object r2 = r1.next()
                com.bytedance.pangle.f r2 = (com.bytedance.pangle.f) r2
                int r3 = r2.a()     // Catch: android.os.RemoteException -> L28
                r4 = r6
                com.bytedance.pangle.f r4 = (com.bytedance.pangle.f) r4     // Catch: android.os.RemoteException -> L28
                int r4 = r4.a()     // Catch: android.os.RemoteException -> L28
                if (r3 != r4) goto Ld
                r0 = r2
                goto L2d
            L28:
                r2 = move-exception
                r2.printStackTrace()
                goto Ld
            L2d:
                boolean r6 = super.remove(r0)
                return r6
        }
    }

    private a() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.c = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.d = r0
            com.bytedance.pangle.service.a.a$a r0 = new com.bytedance.pangle.service.a.a$a
            r0.<init>(r2)
            r2.e = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.f = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.g = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.h = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.a = r0
            return
    }

    static android.content.ComponentName a(com.bytedance.pangle.service.a.a r0, android.content.Intent r1, java.lang.String r2) {
            android.content.ComponentName r0 = r0.c(r1, r2)
            return r0
    }

    static void a(com.bytedance.pangle.service.a.a r0, com.bytedance.pangle.f r1) {
            r0.b(r1)
            return
    }

    private synchronized boolean a(android.content.Intent r4, com.bytedance.pangle.f r5, java.lang.String r6) {
            r3 = this;
            monitor-enter(r3)
            android.content.ComponentName r0 = r4.getComponent()     // Catch: java.lang.Throwable -> L80
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a> r1 = r3.f     // Catch: java.lang.Throwable -> L80
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L80
            if (r1 != 0) goto L1b
            com.bytedance.pangle.service.a r6 = d(r4, r6)     // Catch: java.lang.Throwable -> L80
            if (r6 != 0) goto L16
            r4 = 0
            monitor-exit(r3)
            return r4
        L16:
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a> r1 = r3.f     // Catch: java.lang.Throwable -> L80
            r1.put(r0, r6)     // Catch: java.lang.Throwable -> L80
        L1b:
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a> r6 = r3.f     // Catch: java.lang.Throwable -> L80
            java.lang.Object r6 = r6.get(r0)     // Catch: java.lang.Throwable -> L80
            com.bytedance.pangle.service.a r6 = (com.bytedance.pangle.service.a) r6     // Catch: java.lang.Throwable -> L80
            java.util.HashMap<android.content.ComponentName, android.os.IBinder> r1 = r3.c     // Catch: java.lang.Throwable -> L80
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L80
            if (r1 != 0) goto L34
            java.util.HashMap<android.content.ComponentName, android.os.IBinder> r1 = r3.c     // Catch: java.lang.Throwable -> L80
            android.os.IBinder r6 = r6.onBind(r4)     // Catch: java.lang.Throwable -> L80
            r1.put(r0, r6)     // Catch: java.lang.Throwable -> L80
        L34:
            java.util.HashMap<android.content.ComponentName, android.os.IBinder> r6 = r3.c     // Catch: java.lang.Throwable -> L80
            java.lang.Object r6 = r6.get(r0)     // Catch: java.lang.Throwable -> L80
            android.os.IBinder r6 = (android.os.IBinder) r6     // Catch: java.lang.Throwable -> L80
            if (r6 == 0) goto L7d
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a.a$b> r1 = r3.d     // Catch: java.lang.Throwable -> L80
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L80
            if (r1 == 0) goto L68
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a.a$b> r1 = r3.d     // Catch: java.lang.Throwable -> L80
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L80
            com.bytedance.pangle.service.a.a$b r1 = (com.bytedance.pangle.service.a.a.b) r1     // Catch: java.lang.Throwable -> L80
            boolean r1 = r1.contains(r5)     // Catch: java.lang.Throwable -> L80
            if (r1 != 0) goto L7d
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a.a$b> r1 = r3.d     // Catch: java.lang.Throwable -> L80
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L80
            com.bytedance.pangle.service.a.a$b r1 = (com.bytedance.pangle.service.a.a.b) r1     // Catch: java.lang.Throwable -> L80
            r1.add(r5)     // Catch: java.lang.Throwable -> L80
            com.bytedance.pangle.service.a.a$a<android.content.Intent> r1 = r3.e     // Catch: java.lang.Throwable -> L80
            r1.put(r5, r4)     // Catch: java.lang.Throwable -> L80
            r5.a(r0, r6)     // Catch: java.lang.Throwable -> L80
            goto L7d
        L68:
            com.bytedance.pangle.service.a.a$b r1 = new com.bytedance.pangle.service.a.a$b     // Catch: java.lang.Throwable -> L80
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L80
            r1.add(r5)     // Catch: java.lang.Throwable -> L80
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a.a$b> r2 = r3.d     // Catch: java.lang.Throwable -> L80
            r2.put(r0, r1)     // Catch: java.lang.Throwable -> L80
            com.bytedance.pangle.service.a.a$a<android.content.Intent> r1 = r3.e     // Catch: java.lang.Throwable -> L80
            r1.put(r5, r4)     // Catch: java.lang.Throwable -> L80
            r5.a(r0, r6)     // Catch: java.lang.Throwable -> L80
        L7d:
            r4 = 1
            monitor-exit(r3)
            return r4
        L80:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    static boolean a(com.bytedance.pangle.service.a.a r0, android.content.Intent r1, com.bytedance.pangle.f r2, java.lang.String r3) {
            boolean r0 = r0.a(r1, r2, r3)
            return r0
    }

    public static com.bytedance.pangle.service.a.a b() {
            com.bytedance.pangle.service.a.a r0 = com.bytedance.pangle.service.a.a.b
            if (r0 != 0) goto L17
            java.lang.Class<com.bytedance.pangle.service.a.a> r0 = com.bytedance.pangle.service.a.a.class
            monitor-enter(r0)
            com.bytedance.pangle.service.a.a r1 = com.bytedance.pangle.service.a.a.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bytedance.pangle.service.a.a r1 = new com.bytedance.pangle.service.a.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bytedance.pangle.service.a.a.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bytedance.pangle.service.a.a r0 = com.bytedance.pangle.service.a.a.b
            return r0
    }

    private synchronized void b(com.bytedance.pangle.f r5) {
            r4 = this;
            monitor-enter(r4)
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a.a$b> r0 = r4.d     // Catch: java.lang.Throwable -> L4f
            java.util.Set r0 = r0.keySet()     // Catch: java.lang.Throwable -> L4f
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L4f
        Lb:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L4f
            if (r1 == 0) goto L4d
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L4f
            android.content.ComponentName r1 = (android.content.ComponentName) r1     // Catch: java.lang.Throwable -> L4f
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a.a$b> r2 = r4.d     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L4f
            com.bytedance.pangle.service.a.a$b r2 = (com.bytedance.pangle.service.a.a.b) r2     // Catch: java.lang.Throwable -> L4f
            boolean r3 = r2.contains(r5)     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto Lb
            r2.remove(r5)     // Catch: java.lang.Throwable -> L4f
            com.bytedance.pangle.service.a.a$a<android.content.Intent> r0 = r4.e     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r5 = r0.remove(r5)     // Catch: java.lang.Throwable -> L4f
            android.content.Intent r5 = (android.content.Intent) r5     // Catch: java.lang.Throwable -> L4f
            int r0 = r2.size()     // Catch: java.lang.Throwable -> L4f
            if (r0 != 0) goto L48
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a.a$b> r0 = r4.d     // Catch: java.lang.Throwable -> L4f
            r0.remove(r1)     // Catch: java.lang.Throwable -> L4f
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a> r0 = r4.f     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L4f
            com.bytedance.pangle.service.a r0 = (com.bytedance.pangle.service.a) r0     // Catch: java.lang.Throwable -> L4f
            if (r0 == 0) goto L48
            r0.onUnbind(r5)     // Catch: java.lang.Throwable -> L4f
        L48:
            r4.b(r1)     // Catch: java.lang.Throwable -> L4f
            monitor-exit(r4)
            return
        L4d:
            monitor-exit(r4)
            return
        L4f:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    private boolean b(android.content.ComponentName r3) {
            r2 = this;
            java.util.HashSet<android.content.ComponentName> r0 = r2.g
            boolean r0 = r0.contains(r3)
            r1 = 1
            if (r0 != 0) goto L15
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a.a$b> r0 = r2.d
            java.lang.Object r0 = r0.get(r3)
            if (r0 != 0) goto L29
            r2.c(r3)
            return r1
        L15:
            java.util.HashSet<android.content.ComponentName> r0 = r2.h
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto L29
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a.a$b> r0 = r2.d
            boolean r0 = r0.containsKey(r3)
            if (r0 != 0) goto L29
            r2.c(r3)
            return r1
        L29:
            r3 = 0
            return r3
    }

    private synchronized android.content.ComponentName c(android.content.Intent r3, java.lang.String r4) {
            r2 = this;
            monitor-enter(r2)
            android.content.ComponentName r0 = r3.getComponent()     // Catch: java.lang.Throwable -> L2f
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a> r1 = r2.f     // Catch: java.lang.Throwable -> L2f
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> L2f
            if (r1 != 0) goto L1f
            com.bytedance.pangle.service.a r4 = d(r3, r4)     // Catch: java.lang.Throwable -> L2f
            if (r4 != 0) goto L15
            monitor-exit(r2)
            return r0
        L15:
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a> r1 = r2.f     // Catch: java.lang.Throwable -> L2f
            r1.put(r0, r4)     // Catch: java.lang.Throwable -> L2f
            java.util.HashSet<android.content.ComponentName> r4 = r2.g     // Catch: java.lang.Throwable -> L2f
            r4.add(r0)     // Catch: java.lang.Throwable -> L2f
        L1f:
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a> r4 = r2.f     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L2f
            com.bytedance.pangle.service.a r4 = (com.bytedance.pangle.service.a) r4     // Catch: java.lang.Throwable -> L2f
            if (r4 == 0) goto L2d
            r1 = 0
            r4.onStartCommand(r3, r1, r1)     // Catch: java.lang.Throwable -> L2f
        L2d:
            monitor-exit(r2)
            return r0
        L2f:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    private void c(android.content.ComponentName r3) {
            r2 = this;
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a> r0 = r2.f
            java.lang.Object r0 = r0.remove(r3)
            com.bytedance.pangle.service.a r0 = (com.bytedance.pangle.service.a) r0
            java.util.HashSet<android.content.ComponentName> r1 = r2.h
            r1.remove(r3)
            java.util.HashMap<android.content.ComponentName, android.os.IBinder> r1 = r2.c
            r1.remove(r3)
            java.util.HashSet<android.content.ComponentName> r1 = r2.g
            r1.remove(r3)
            if (r0 == 0) goto L1c
            r0.onDestroy()
        L1c:
            return
    }

    private static com.bytedance.pangle.service.a d(android.content.Intent r0, java.lang.String r1) {
            com.bytedance.pangle.service.a r0 = e(r0, r1)
            if (r0 == 0) goto L9
            r0.onCreate()
        L9:
            return r0
    }

    private static com.bytedance.pangle.service.a e(android.content.Intent r2, java.lang.String r3) {
            android.content.ComponentName r2 = r2.getComponent()
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            com.bytedance.pangle.plugin.Plugin r0 = r0.getPlugin(r3)
            boolean r3 = com.bytedance.pangle.Zeus.loadPlugin(r3)     // Catch: java.lang.Exception -> L26
            com.bytedance.pangle.PluginClassLoader r1 = r0.mClassLoader     // Catch: java.lang.Exception -> L24
            java.lang.String r2 = r2.getClassName()     // Catch: java.lang.Exception -> L24
            java.lang.Class r2 = r1.loadClass(r2)     // Catch: java.lang.Exception -> L24
            java.lang.Object r2 = r2.newInstance()     // Catch: java.lang.Exception -> L24
            com.bytedance.pangle.service.a r2 = (com.bytedance.pangle.service.a) r2     // Catch: java.lang.Exception -> L24
            r2.attach(r0)     // Catch: java.lang.Exception -> L24
            return r2
        L24:
            r2 = move-exception
            goto L28
        L26:
            r2 = move-exception
            r3 = 0
        L28:
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "newServiceInstance failed! loadPlugin = "
            java.lang.String r3 = r0.concat(r3)
            java.lang.String r0 = "Zeus/service_pangle"
            com.bytedance.pangle.log.ZeusLogger.errReport(r0, r3, r2)
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            r3.<init>(r2)
            throw r3
    }

    @Override
    public final android.content.ComponentName a(android.content.Intent r3, java.lang.String r4) {
            r2 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto Lf
            android.content.ComponentName r3 = r2.c(r3, r4)
            return r3
        Lf:
            android.os.Handler r0 = r2.a
            com.bytedance.pangle.service.a.a$1 r1 = new com.bytedance.pangle.service.a.a$1
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            android.content.ComponentName r3 = r3.getComponent()
            return r3
    }

    @Override
    public final void a(com.bytedance.pangle.f r3) {
            r2 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto Le
            r2.b(r3)
            return
        Le:
            android.os.Handler r0 = r2.a
            com.bytedance.pangle.service.a.a$4 r1 = new com.bytedance.pangle.service.a.a$4
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    public final synchronized boolean a(android.content.ComponentName r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.HashMap<android.content.ComponentName, com.bytedance.pangle.service.a> r0 = r1.f     // Catch: java.lang.Throwable -> L17
            boolean r0 = r0.containsKey(r2)     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L14
            java.util.HashSet<android.content.ComponentName> r0 = r1.h     // Catch: java.lang.Throwable -> L17
            r0.add(r2)     // Catch: java.lang.Throwable -> L17
            boolean r2 = r1.b(r2)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r1)
            return r2
        L14:
            r2 = 0
            monitor-exit(r1)
            return r2
        L17:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final boolean a(android.content.Intent r9, com.bytedance.pangle.f r10, int r11, java.lang.String r12) {
            r8 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto Lf
            boolean r9 = r8.a(r9, r10, r12)
            return r9
        Lf:
            android.os.Handler r0 = r8.a
            com.bytedance.pangle.service.a.a$3 r7 = new com.bytedance.pangle.service.a.a$3
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r0.post(r7)
            r9 = 1
            return r9
    }

    @Override
    public android.os.IBinder asBinder() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final boolean b(android.content.Intent r2, java.lang.String r3) {
            r1 = this;
            android.os.Looper r3 = android.os.Looper.myLooper()
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            if (r3 != r0) goto L16
            com.bytedance.pangle.service.a.a r3 = b()
            android.content.ComponentName r2 = r2.getComponent()
            r3.a(r2)
            goto L20
        L16:
            android.os.Handler r3 = r1.a
            com.bytedance.pangle.service.a.a$2 r0 = new com.bytedance.pangle.service.a.a$2
            r0.<init>(r1, r2)
            r3.post(r0)
        L20:
            r2 = 1
            return r2
    }
}
