package com.bytedance.pangle;

public class h {
    private static volatile com.bytedance.pangle.h d;
    boolean a;
    final java.util.List<com.bytedance.pangle.ZeusPluginStateListener> b;
    final java.util.List<com.bytedance.pangle.ZeusPluginEventCallback> c;
    private final android.os.Handler e;





    public h() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.b = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.c = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.e = r0
            return
    }

    public static com.bytedance.pangle.h a() {
            com.bytedance.pangle.h r0 = com.bytedance.pangle.h.d
            if (r0 != 0) goto L17
            java.lang.Class<com.bytedance.pangle.h> r0 = com.bytedance.pangle.h.class
            monitor-enter(r0)
            com.bytedance.pangle.h r1 = com.bytedance.pangle.h.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bytedance.pangle.h r1 = new com.bytedance.pangle.h     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bytedance.pangle.h.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bytedance.pangle.h r0 = com.bytedance.pangle.h.d
            return r0
    }

    private static void b() {
            java.lang.String r0 = ":"
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> Laa
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Laa
            android.app.Application r2 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> Laa
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> Laa
            r3 = 8
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r3)     // Catch: java.lang.Exception -> Laa
            if (r1 == 0) goto L9a
            android.content.pm.ProviderInfo[] r2 = r1.providers     // Catch: java.lang.Exception -> Laa
            if (r2 != 0) goto L20
            goto L9a
        L20:
            android.content.pm.ProviderInfo[] r1 = r1.providers     // Catch: java.lang.Exception -> Laa
            int r2 = r1.length     // Catch: java.lang.Exception -> Laa
            r3 = 0
        L24:
            if (r3 >= r2) goto L99
            r4 = r1[r3]     // Catch: java.lang.Exception -> Laa
            java.lang.String r5 = r4.authority     // Catch: java.lang.Exception -> Laa
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> Laa
            if (r5 != 0) goto L96
            java.lang.String r5 = r4.authority     // Catch: java.lang.Exception -> Laa
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Laa
            r6.<init>()     // Catch: java.lang.Exception -> Laa
            android.app.Application r7 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Exception -> Laa
            java.lang.String r7 = r7.getPackageName()     // Catch: java.lang.Exception -> Laa
            r6.append(r7)     // Catch: java.lang.Exception -> Laa
            java.lang.String r7 = ".pangle.servermanager."
            r6.append(r7)     // Catch: java.lang.Exception -> Laa
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Laa
            boolean r5 = r5.contains(r6)     // Catch: java.lang.Exception -> Laa
            if (r5 == 0) goto L96
            java.lang.String r5 = r4.processName     // Catch: java.lang.Exception -> Laa
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> Laa
            java.lang.String r6 = "main"
            if (r5 != 0) goto L6e
            java.lang.String r5 = r4.processName     // Catch: java.lang.Exception -> Laa
            boolean r5 = r5.contains(r0)     // Catch: java.lang.Exception -> Laa
            if (r5 != 0) goto L64
            goto L6e
        L64:
            java.lang.String r5 = r4.processName     // Catch: java.lang.Exception -> Laa
            java.lang.String[] r5 = r5.split(r0)     // Catch: java.lang.Exception -> Laa
            r7 = 1
            r5 = r5[r7]     // Catch: java.lang.Exception -> Laa
            goto L6f
        L6e:
            r5 = r6
        L6f:
            java.util.HashMap r7 = com.bytedance.pangle.Zeus.getServerManagerHashMap()     // Catch: java.lang.Exception -> Laa
            java.lang.Object r7 = r7.get(r5)     // Catch: java.lang.Exception -> Laa
            android.content.pm.ProviderInfo r7 = (android.content.pm.ProviderInfo) r7     // Catch: java.lang.Exception -> Laa
            if (r7 == 0) goto L8f
            boolean r6 = android.text.TextUtils.equals(r5, r6)     // Catch: java.lang.Exception -> Laa
            if (r6 == 0) goto L8f
            java.lang.String r6 = r4.name     // Catch: java.lang.Exception -> Laa
            java.lang.Class<com.bytedance.pangle.servermanager.MainServerManager> r7 = com.bytedance.pangle.servermanager.MainServerManager.class
            java.lang.String r7 = r7.getName()     // Catch: java.lang.Exception -> Laa
            boolean r6 = android.text.TextUtils.equals(r6, r7)     // Catch: java.lang.Exception -> Laa
            if (r6 != 0) goto L96
        L8f:
            java.util.HashMap r6 = com.bytedance.pangle.Zeus.getServerManagerHashMap()     // Catch: java.lang.Exception -> Laa
            r6.put(r5, r4)     // Catch: java.lang.Exception -> Laa
        L96:
            int r3 = r3 + 1
            goto L24
        L99:
            return
        L9a:
            java.lang.String r0 = "Zeus/init_pangle"
            java.lang.String r2 = "initServerManager failed. packageInfo:"
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> Laa
            java.lang.String r1 = r2.concat(r1)     // Catch: java.lang.Exception -> Laa
            com.bytedance.pangle.log.ZeusLogger.errReport(r0, r1)     // Catch: java.lang.Exception -> Laa
            return
        Laa:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            r1.<init>(r0)
            throw r1
    }

    private java.lang.Object[] c() {
            r2 = this;
            java.util.List<com.bytedance.pangle.ZeusPluginEventCallback> r0 = r2.c
            monitor-enter(r0)
            java.util.List<com.bytedance.pangle.ZeusPluginEventCallback> r1 = r2.c     // Catch: java.lang.Throwable -> L1b
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L12
            java.util.List<com.bytedance.pangle.ZeusPluginEventCallback> r1 = r2.c     // Catch: java.lang.Throwable -> L1b
            java.lang.Object[] r1 = r1.toArray()     // Catch: java.lang.Throwable -> L1b
            goto L13
        L12:
            r1 = 0
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L1a
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            return r0
        L1a:
            return r1
        L1b:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r1
    }

    public final void a(int r15, int r16, java.lang.String r17, int r18, java.lang.Throwable r19) {
            r14 = this;
            java.lang.Object[] r0 = r14.c()
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L23
            r5 = r0[r2]
            r11 = r14
            android.os.Handler r12 = r11.e
            com.bytedance.pangle.h$4 r13 = new com.bytedance.pangle.h$4
            r3 = r13
            r4 = r14
            r6 = r15
            r7 = r16
            r8 = r17
            r9 = r18
            r10 = r19
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)
            r12.post(r13)
            int r2 = r2 + 1
            goto L6
        L23:
            r11 = r14
            return
    }

    final synchronized void a(android.app.Application r9, boolean r10) {
            r8 = this;
            monitor-enter(r8)
            boolean r0 = r8.a     // Catch: java.lang.Throwable -> Ld6
            if (r0 == 0) goto Le
            java.lang.String r9 = "Zeus/init_pangle"
            java.lang.String r10 = "ZeusManager zeus has been inited!"
            com.bytedance.pangle.log.ZeusLogger.w(r9, r10)     // Catch: java.lang.Throwable -> Ld6
            monitor-exit(r8)
            return
        Le:
            r1 = 3000(0xbb8, float:4.204E-42)
            r2 = 0
            r3 = 0
            r4 = -1
            r5 = 0
            r0 = r8
            r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Ld6
            com.bytedance.pangle.Zeus.setAppContext(r9)     // Catch: java.lang.Throwable -> Ld6
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()     // Catch: java.lang.Throwable -> Ld6
            r0.init()     // Catch: java.lang.Throwable -> Ld6
            if (r9 == 0) goto Lce
            boolean r1 = r0.isDebug()     // Catch: java.lang.Throwable -> Ld6
            com.bytedance.pangle.log.ZeusLogger.setDebug(r1)     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r1 = "Zeus/init_pangle"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r3 = "ZeusManager init, context = "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Ld6
            r2.append(r9)     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r3 = ", hParam = "
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld6
            r2.append(r0)     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Ld6
            com.bytedance.pangle.log.ZeusLogger.i(r1, r2)     // Catch: java.lang.Throwable -> Ld6
            com.bytedance.pangle.h$1 r1 = new com.bytedance.pangle.h$1     // Catch: java.lang.Throwable -> Ld6
            r1.<init>(r8)     // Catch: java.lang.Throwable -> Ld6
            com.bytedance.pangle.d.e.a(r1)     // Catch: java.lang.Throwable -> Ld6
            com.bytedance.pangle.GlobalParam r1 = com.bytedance.pangle.GlobalParam.getInstance()     // Catch: java.lang.Throwable -> Ld6
            boolean r1 = r1.isPostBgDexOptByInit()     // Catch: java.lang.Throwable -> Ld6
            if (r1 == 0) goto L5b
            com.bytedance.pangle.e.f.a()     // Catch: java.lang.Throwable -> Ld6
        L5b:
            if (r10 == 0) goto L60
            com.bytedance.pangle.Zeus.onPrivacyAgreed()     // Catch: java.lang.Throwable -> Ld6
        L60:
            com.bytedance.pangle.c.b r10 = com.bytedance.pangle.c.b.a()     // Catch: java.lang.Throwable -> Ld6
            com.bytedance.pangle.h$2 r1 = new com.bytedance.pangle.h$2     // Catch: java.lang.Throwable -> Ld6
            r1.<init>(r8)     // Catch: java.lang.Throwable -> Ld6
            java.util.List<com.bytedance.pangle.c.a> r2 = r10.a     // Catch: java.lang.Throwable -> Ld6
            monitor-enter(r2)     // Catch: java.lang.Throwable -> Ld6
            java.util.List<com.bytedance.pangle.c.a> r10 = r10.a     // Catch: java.lang.Throwable -> Lcb
            r10.add(r1)     // Catch: java.lang.Throwable -> Lcb
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lcb
            boolean r10 = r0.isCloseFlipped()     // Catch: java.lang.Throwable -> Ld6
            if (r10 != 0) goto L7b
            com.bytedance.pangle.b.a()     // Catch: java.lang.Throwable -> Ld6
        L7b:
            int r10 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Ld6
            r0 = 29
            r1 = 1
            if (r10 != r0) goto L84
            r10 = r1
            goto L85
        L84:
            r10 = 0
        L85:
            if (r10 == 0) goto L8f
            com.bytedance.pangle.h$3 r10 = new com.bytedance.pangle.h$3     // Catch: java.lang.Throwable -> Ld6
            r10.<init>(r8)     // Catch: java.lang.Throwable -> Ld6
            com.bytedance.pangle.d.e.a(r10)     // Catch: java.lang.Throwable -> Ld6
        L8f:
            boolean r10 = com.bytedance.pangle.util.i.i()     // Catch: java.lang.Throwable -> Ld6
            if (r10 == 0) goto Lb0
            java.lang.Object r10 = com.bytedance.pangle.d.a.a()     // Catch: java.lang.Exception -> La8 java.lang.Throwable -> Ld6
            java.lang.String r0 = "mHiddenApiWarningShown"
            java.lang.Boolean r2 = java.lang.Boolean.TRUE     // Catch: java.lang.Exception -> La8 java.lang.Throwable -> Ld6
            com.bytedance.pangle.util.FieldUtils.writeField(r10, r0, r2)     // Catch: java.lang.Exception -> La8 java.lang.Throwable -> Ld6
            java.lang.String r10 = "Zeus/init_pangle"
            java.lang.String r0 = "ZeusManager disableApiWarningShownForAndroidP, true"
            com.bytedance.pangle.log.ZeusLogger.w(r10, r0)     // Catch: java.lang.Exception -> La8 java.lang.Throwable -> Ld6
            goto Lb0
        La8:
            r10 = move-exception
            java.lang.String r0 = "Zeus/init_pangle"
            java.lang.String r2 = "disableApiWarningShownForAndroidP failed"
            com.bytedance.pangle.log.ZeusLogger.errReport(r0, r2, r10)     // Catch: java.lang.Throwable -> Ld6
        Lb0:
            b()     // Catch: java.lang.Throwable -> Ld6
            com.bytedance.pangle.provider.ContentProviderManager r10 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()     // Catch: java.lang.Throwable -> Ld6
            r10.initSystemContentProviderInfo()     // Catch: java.lang.Throwable -> Ld6
            com.bytedance.pangle.receiver.b.a(r9)     // Catch: java.lang.Throwable -> Ld6
            r8.a = r1     // Catch: java.lang.Throwable -> Ld6
            r3 = 3100(0xc1c, float:4.344E-42)
            r4 = 0
            r5 = 0
            r6 = -1
            r7 = 0
            r2 = r8
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> Ld6
            monitor-exit(r8)
            return
        Lcb:
            r9 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lcb
            throw r9     // Catch: java.lang.Throwable -> Ld6
        Lce:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> Ld6
            java.lang.String r10 = "context must be not null !!!"
            r9.<init>(r10)     // Catch: java.lang.Throwable -> Ld6
            throw r9     // Catch: java.lang.Throwable -> Ld6
        Ld6:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }
}
