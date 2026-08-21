package com.bytedance.pangle.servermanager;

public final class b {
    private static final java.lang.Object a = null;
    private static final java.lang.Object b = null;
    private static final java.lang.Object c = null;
    private static final java.util.Map<java.lang.String, java.lang.Boolean> d = null;
    private static final java.util.Map<java.lang.String, com.bytedance.pangle.d> e = null;
    private static com.bytedance.pangle.c f;


    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.bytedance.pangle.servermanager.b.a = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.bytedance.pangle.servermanager.b.b = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.bytedance.pangle.servermanager.b.c = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.bytedance.pangle.servermanager.b.d = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.bytedance.pangle.servermanager.b.e = r0
            return
    }

    private static android.os.IInterface a(java.lang.String r6, java.lang.String r7) {
            boolean r0 = com.bytedance.pangle.Zeus.hasInit()
            if (r0 == 0) goto Lb3
            java.util.HashMap r0 = com.bytedance.pangle.Zeus.getServerManagerHashMap()
            java.lang.Object r0 = r0.get(r7)
            android.content.pm.ProviderInfo r0 = (android.content.pm.ProviderInfo) r0
            if (r0 == 0) goto La3
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "content://"
            r1.<init>(r2)
            java.lang.String r0 = r0.authority
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()
            android.content.ContentResolver r1 = r1.getContentResolver()
            r2 = 0
            java.lang.String r3 = "query_binder"
            android.os.Bundle r0 = r1.call(r0, r3, r6, r2)
            if (r0 == 0) goto L4d
            java.lang.Class<com.bytedance.pangle.servermanager.AbsServerManager> r1 = com.bytedance.pangle.servermanager.AbsServerManager.class
            java.lang.ClassLoader r1 = r1.getClassLoader()
            r0.setClassLoader(r1)
            java.lang.String r1 = "binder"
            android.os.Parcelable r0 = r0.getParcelable(r1)
            com.bytedance.pangle.servermanager.a r0 = (com.bytedance.pangle.servermanager.a) r0
            if (r0 == 0) goto L4d
            android.os.IBinder r0 = r0.a
            goto L4e
        L4d:
            r0 = r2
        L4e:
            if (r0 == 0) goto La2
            boolean r1 = r0.isBinderAlive()
            if (r1 == 0) goto La2
            com.bytedance.pangle.servermanager.b$1 r1 = new com.bytedance.pangle.servermanager.b$1     // Catch: android.os.RemoteException -> L9a
            r1.<init>(r7, r0)     // Catch: android.os.RemoteException -> L9a
            r3 = 0
            r0.linkToDeath(r1, r3)     // Catch: android.os.RemoteException -> L9a
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = com.bytedance.pangle.servermanager.b.d     // Catch: android.os.RemoteException -> L9a
            java.lang.Boolean r4 = java.lang.Boolean.TRUE     // Catch: android.os.RemoteException -> L9a
            r1.put(r7, r4)     // Catch: android.os.RemoteException -> L9a
            r7 = -1
            int r1 = r6.hashCode()     // Catch: android.os.RemoteException -> L9a
            r4 = -807062458(0xffffffffcfe53446, float:-7.6908165E9)
            r5 = 1
            if (r1 == r4) goto L81
            r3 = 1984153269(0x7643c6b5, float:9.927033E32)
            if (r1 == r3) goto L77
            goto L8a
        L77:
            java.lang.String r1 = "service"
            boolean r6 = r6.equals(r1)     // Catch: android.os.RemoteException -> L9a
            if (r6 == 0) goto L8a
            r3 = r5
            goto L8b
        L81:
            java.lang.String r1 = "package"
            boolean r6 = r6.equals(r1)     // Catch: android.os.RemoteException -> L9a
            if (r6 == 0) goto L8a
            goto L8b
        L8a:
            r3 = r7
        L8b:
            if (r3 == 0) goto L95
            if (r3 == r5) goto L90
            goto La2
        L90:
            com.bytedance.pangle.d r6 = com.bytedance.pangle.d.a.a(r0)     // Catch: android.os.RemoteException -> L9a
            return r6
        L95:
            com.bytedance.pangle.c r6 = com.bytedance.pangle.c.a.a(r0)     // Catch: android.os.RemoteException -> L9a
            return r6
        L9a:
            r6 = move-exception
            java.lang.String r7 = "Zeus/server_pangle"
            java.lang.String r0 = "generateServerManager failed."
            com.bytedance.pangle.log.ZeusLogger.errReport(r7, r0, r6)
        La2:
            return r2
        La3:
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r0 = "宿主中没有找对对应进程的serverManager "
            java.lang.String r7 = r0.concat(r7)
            r6.<init>(r7)
            throw r6
        Lb3:
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r0 = "generateServerManager 请先初始化Zeus, processName:"
            java.lang.String r7 = r0.concat(r7)
            r6.<init>(r7)
            throw r6
    }

    public static com.bytedance.pangle.c a() {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.bytedance.pangle.servermanager.b.d
            java.lang.String r1 = "main"
            java.lang.Object r0 = r0.get(r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            r1 = 0
            if (r0 == 0) goto L13
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto L15
        L13:
            com.bytedance.pangle.servermanager.b.f = r1
        L15:
            com.bytedance.pangle.c r0 = com.bytedance.pangle.servermanager.b.f
            if (r0 != 0) goto L38
            java.lang.Object r0 = com.bytedance.pangle.servermanager.b.c
            monitor-enter(r0)
            java.lang.String r2 = "package"
            java.lang.String r3 = "main"
            android.os.IInterface r2 = a(r2, r3)     // Catch: java.lang.Throwable -> L35
            com.bytedance.pangle.c r2 = (com.bytedance.pangle.c) r2     // Catch: java.lang.Throwable -> L35
            if (r2 != 0) goto L31
            java.lang.String r2 = "Zeus/server_pangle"
            java.lang.String r3 = "getPackageManager failed!!!"
            com.bytedance.pangle.log.ZeusLogger.errReport(r2, r3)     // Catch: java.lang.Throwable -> L35
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            return r1
        L31:
            com.bytedance.pangle.servermanager.b.f = r2     // Catch: java.lang.Throwable -> L35
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            goto L38
        L35:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            throw r1
        L38:
            com.bytedance.pangle.c r0 = com.bytedance.pangle.servermanager.b.f
            return r0
    }

    public static com.bytedance.pangle.d a(java.lang.String r3) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.bytedance.pangle.servermanager.b.d
            java.lang.Object r0 = r0.get(r3)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            if (r0 == 0) goto L10
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto L15
        L10:
            java.util.Map<java.lang.String, com.bytedance.pangle.d> r0 = com.bytedance.pangle.servermanager.b.e
            r0.remove(r3)
        L15:
            java.util.Map<java.lang.String, com.bytedance.pangle.d> r0 = com.bytedance.pangle.servermanager.b.e
            java.lang.Object r0 = r0.get(r3)
            if (r0 != 0) goto L3e
            java.lang.Object r0 = com.bytedance.pangle.servermanager.b.b
            monitor-enter(r0)
            java.lang.String r1 = "service"
            android.os.IInterface r1 = a(r1, r3)     // Catch: java.lang.Throwable -> L3b
            com.bytedance.pangle.d r1 = (com.bytedance.pangle.d) r1     // Catch: java.lang.Throwable -> L3b
            if (r1 != 0) goto L34
            java.lang.String r3 = "Zeus/server_pangle"
            java.lang.String r1 = "getServiceManager failed!!!"
            com.bytedance.pangle.log.ZeusLogger.errReport(r3, r1)     // Catch: java.lang.Throwable -> L3b
            r3 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3b
            return r3
        L34:
            java.util.Map<java.lang.String, com.bytedance.pangle.d> r2 = com.bytedance.pangle.servermanager.b.e     // Catch: java.lang.Throwable -> L3b
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L3b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3b
            goto L3e
        L3b:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3b
            throw r3
        L3e:
            java.util.Map<java.lang.String, com.bytedance.pangle.d> r0 = com.bytedance.pangle.servermanager.b.e
            java.lang.Object r3 = r0.get(r3)
            com.bytedance.pangle.d r3 = (com.bytedance.pangle.d) r3
            return r3
    }

    static java.util.Map b() {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.bytedance.pangle.servermanager.b.d
            return r0
    }
}
