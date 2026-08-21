package com.huawei.hms.utils;

public class HMSPackageManager {
    public static com.huawei.hms.utils.HMSPackageManager h;
    public static final java.lang.Object i = null;
    public static final java.lang.Object j = null;
    public final android.content.Context a;
    public final com.huawei.hms.utils.PackageManagerHelper b;
    public java.lang.String c;
    public java.lang.String d;
    public int e;
    public final java.util.concurrent.atomic.AtomicInteger f;
    public long g;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.utils.HMSPackageManager.i = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.utils.HMSPackageManager.j = r0
            return
    }

    public HMSPackageManager(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 3
            r0.<init>(r1)
            r2.f = r0
            r2.a = r3
            com.huawei.hms.utils.PackageManagerHelper r0 = new com.huawei.hms.utils.PackageManagerHelper
            r0.<init>(r3)
            r2.b = r0
            return
    }

    public static com.huawei.hms.utils.HMSPackageManager getInstance(android.content.Context r2) {
            java.lang.Object r0 = com.huawei.hms.utils.HMSPackageManager.i
            monitor-enter(r0)
            com.huawei.hms.utils.HMSPackageManager r1 = com.huawei.hms.utils.HMSPackageManager.h     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L25
            android.content.Context r1 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L29
            if (r1 == 0) goto L19
            com.huawei.hms.utils.HMSPackageManager r1 = new com.huawei.hms.utils.HMSPackageManager     // Catch: java.lang.Throwable -> L29
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L29
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L29
            com.huawei.hms.utils.HMSPackageManager.h = r1     // Catch: java.lang.Throwable -> L29
            goto L20
        L19:
            com.huawei.hms.utils.HMSPackageManager r1 = new com.huawei.hms.utils.HMSPackageManager     // Catch: java.lang.Throwable -> L29
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L29
            com.huawei.hms.utils.HMSPackageManager.h = r1     // Catch: java.lang.Throwable -> L29
        L20:
            com.huawei.hms.utils.HMSPackageManager r2 = com.huawei.hms.utils.HMSPackageManager.h     // Catch: java.lang.Throwable -> L29
            r2.c()     // Catch: java.lang.Throwable -> L29
        L25:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            com.huawei.hms.utils.HMSPackageManager r2 = com.huawei.hms.utils.HMSPackageManager.h
            return r2
        L29:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r2
    }

    public final boolean a() {
            r4 = this;
            android.content.Context r0 = r4.a
            java.lang.String r0 = com.huawei.hms.utils.ReadApkFileUtil.getHmsPath(r0)
            r1 = 0
            java.lang.String r2 = "HMSPackageManager"
            if (r0 != 0) goto L11
            java.lang.String r0 = "hmsPath is null!"
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            return r1
        L11:
            boolean r3 = com.huawei.hms.utils.ReadApkFileUtil.isCertFound(r0)
            if (r3 != 0) goto L1d
            java.lang.String r0 = "NO huawer.cer in HMS!"
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            return r1
        L1d:
            boolean r3 = com.huawei.hms.utils.ReadApkFileUtil.checkSignature()
            if (r3 != 0) goto L29
            java.lang.String r0 = "checkSignature fail!"
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            return r1
        L29:
            boolean r0 = com.huawei.hms.utils.ReadApkFileUtil.verifyApkHash(r0)
            if (r0 != 0) goto L35
            java.lang.String r0 = "verifyApkHash fail!"
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            return r1
        L35:
            r0 = 1
            return r0
    }

    public final boolean a(java.lang.String r9) {
            r8 = this;
            java.lang.String r0 = "HMSPackageManager"
            java.lang.String r1 = "enter checkHmsIsSpoof"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            java.util.concurrent.atomic.AtomicInteger r1 = r8.f
            int r1 = r1.get()
            r2 = 1
            r3 = 2
            if (r1 != r3) goto L12
            return r2
        L12:
            java.util.concurrent.atomic.AtomicInteger r1 = r8.f
            int r1 = r1.get()
            r4 = 3
            if (r1 != r4) goto L35
            boolean r1 = r8.a()
            if (r1 == 0) goto L27
            java.util.concurrent.atomic.AtomicInteger r1 = r8.f
            r1.set(r3)
            goto L2c
        L27:
            java.util.concurrent.atomic.AtomicInteger r1 = r8.f
            r1.set(r2)
        L2c:
            com.huawei.hms.utils.PackageManagerHelper r1 = r8.b
            long r4 = r1.getPackageFirstInstallTime(r9)
            r8.g = r4
            goto L52
        L35:
            com.huawei.hms.utils.PackageManagerHelper r1 = r8.b
            long r4 = r1.getPackageFirstInstallTime(r9)
            long r6 = r8.g
            int r9 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r9 == 0) goto L52
            boolean r9 = r8.a()
            if (r9 != 0) goto L4d
            java.util.concurrent.atomic.AtomicInteger r9 = r8.f
            r9.set(r2)
            goto L52
        L4d:
            java.util.concurrent.atomic.AtomicInteger r9 = r8.f
            r9.set(r3)
        L52:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r1 = "check hms state: "
            r9.append(r1)
            java.util.concurrent.atomic.AtomicInteger r1 = r8.f
            r9.append(r1)
            java.lang.String r9 = r9.toString()
            com.huawei.hms.support.log.HMSLog.i(r0, r9)
            java.util.concurrent.atomic.AtomicInteger r9 = r8.f
            int r9 = r9.get()
            if (r9 != r3) goto L71
            goto L72
        L71:
            r2 = 0
        L72:
            return r2
    }

    public final boolean a(java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            java.lang.String r2 = "HMSPackageManager"
            if (r0 != 0) goto L76
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L10
            goto L76
        L10:
            java.util.List r7 = com.huawei.hms.device.a.b(r7)
            int r0 = r7.size()
            if (r0 != 0) goto L20
            java.lang.String r5 = "certChain is empty"
            com.huawei.hms.support.log.HMSLog.e(r2, r5)
            return r1
        L20:
            android.content.Context r0 = r4.a
            java.security.cert.X509Certificate r0 = com.huawei.hms.device.a.a(r0)
            boolean r0 = com.huawei.hms.device.a.a(r0, r7)
            if (r0 != 0) goto L32
            java.lang.String r5 = "failed to verify cert chain"
            com.huawei.hms.support.log.HMSLog.e(r2, r5)
            return r1
        L32:
            int r0 = r7.size()
            r3 = 1
            int r0 = r0 - r3
            java.lang.Object r7 = r7.get(r0)
            java.security.cert.X509Certificate r7 = (java.security.cert.X509Certificate) r7
            java.lang.String r0 = "Huawei CBG HMS"
            boolean r0 = com.huawei.hms.device.a.a(r7, r0)
            if (r0 != 0) goto L4c
            java.lang.String r5 = "CN is invalid"
            com.huawei.hms.support.log.HMSLog.e(r2, r5)
            return r1
        L4c:
            java.lang.String r0 = "Huawei CBG Cloud Security Signer"
            boolean r0 = com.huawei.hms.device.a.b(r7, r0)
            if (r0 != 0) goto L5a
            java.lang.String r5 = "OU is invalid"
            com.huawei.hms.support.log.HMSLog.e(r2, r5)
            return r1
        L5a:
            boolean r6 = com.huawei.hms.device.a.a(r7, r5, r6)
            if (r6 != 0) goto L75
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "signature is invalid: "
            r6.append(r7)
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.huawei.hms.support.log.HMSLog.e(r2, r5)
            return r1
        L75:
            return r3
        L76:
            java.lang.String r5 = "args is invalid"
            com.huawei.hms.support.log.HMSLog.e(r2, r5)
            return r1
    }

    public final android.util.Pair<java.lang.String, java.lang.String> b() {
            r10 = this;
            android.content.Context r0 = r10.a
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "com.huawei.hms.core.aidlservice"
            r1.<init>(r2)
            r2 = 128(0x80, float:1.8E-43)
            java.util.List r0 = r0.queryIntentServices(r1, r2)
            java.util.Iterator r1 = r0.iterator()
        L17:
            boolean r2 = r1.hasNext()
            r3 = 0
            if (r2 == 0) goto L45
            java.lang.Object r2 = r1.next()
            android.content.pm.ResolveInfo r2 = (android.content.pm.ResolveInfo) r2
            android.content.pm.ServiceInfo r2 = r2.serviceInfo
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo
            java.lang.String r2 = r2.packageName
            java.lang.String r4 = "com.huawei.hwid"
            boolean r4 = r2.equals(r4)
            if (r4 == 0) goto L17
            boolean r0 = r10.a(r2)
            if (r0 != 0) goto L39
            return r3
        L39:
            com.huawei.hms.utils.PackageManagerHelper r0 = r10.b
            java.lang.String r0 = r0.getPackageSignature(r2)
            android.util.Pair r1 = new android.util.Pair
            r1.<init>(r2, r0)
            return r1
        L45:
            r10.e()
            java.util.Iterator r0 = r0.iterator()
        L4c:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Lf5
            java.lang.Object r1 = r0.next()
            android.content.pm.ResolveInfo r1 = (android.content.pm.ResolveInfo) r1
            android.content.pm.ServiceInfo r2 = r1.serviceInfo
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo
            java.lang.String r2 = r2.packageName
            android.content.pm.ServiceInfo r1 = r1.serviceInfo
            android.os.Bundle r1 = r1.metaData
            java.lang.String r4 = "skip package "
            java.lang.String r5 = "HMSPackageManager"
            if (r1 != 0) goto L80
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r2)
            java.lang.String r2 = " for metadata is null"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.e(r5, r1)
            goto L4c
        L80:
            java.lang.String r6 = "hms_app_signer"
            boolean r7 = r1.containsKey(r6)
            if (r7 != 0) goto La0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r2)
            java.lang.String r2 = " for no signer"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.e(r5, r1)
            goto L4c
        La0:
            java.lang.String r7 = "hms_app_cert_chain"
            boolean r8 = r1.containsKey(r7)
            if (r8 != 0) goto Lc0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r2)
            java.lang.String r2 = " for no cert chain"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.e(r5, r1)
            goto L4c
        Lc0:
            com.huawei.hms.utils.PackageManagerHelper r4 = r10.b
            java.lang.String r4 = r4.getPackageSignature(r2)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r2)
            java.lang.String r9 = "&"
            r8.append(r9)
            r8.append(r4)
            java.lang.String r8 = r8.toString()
            java.lang.String r6 = r1.getString(r6)
            java.lang.String r1 = r1.getString(r7)
            boolean r1 = r10.a(r8, r6, r1)
            if (r1 != 0) goto Lef
            java.lang.String r1 = "checkSinger failed"
            com.huawei.hms.support.log.HMSLog.e(r5, r1)
            goto L4c
        Lef:
            android.util.Pair r0 = new android.util.Pair
            r0.<init>(r2, r4)
            return r0
        Lf5:
            return r3
    }

    public final void c() {
            r4 = this;
            java.lang.Object r0 = com.huawei.hms.utils.HMSPackageManager.j
            monitor-enter(r0)
            android.util.Pair r1 = r4.b()     // Catch: java.lang.Throwable -> L56
            if (r1 != 0) goto L1a
            java.lang.String r1 = "HMSPackageManager"
            java.lang.String r2 = "Failed to find HMS apk"
            com.huawei.hms.support.log.HMSLog.e(r1, r2)     // Catch: java.lang.Throwable -> L56
            r1 = 0
            r4.c = r1     // Catch: java.lang.Throwable -> L56
            r4.d = r1     // Catch: java.lang.Throwable -> L56
            r1 = 0
            r4.e = r1     // Catch: java.lang.Throwable -> L56
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            return
        L1a:
            java.lang.Object r2 = r1.first     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L56
            r4.c = r2     // Catch: java.lang.Throwable -> L56
            java.lang.Object r1 = r1.second     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L56
            r4.d = r1     // Catch: java.lang.Throwable -> L56
            com.huawei.hms.utils.PackageManagerHelper r1 = r4.b     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = r4.getHMSPackageName()     // Catch: java.lang.Throwable -> L56
            int r1 = r1.getPackageVersionCode(r2)     // Catch: java.lang.Throwable -> L56
            r4.e = r1     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = "HMSPackageManager"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L56
            r2.<init>()     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = "Succeed to find HMS apk: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = r4.c     // Catch: java.lang.Throwable -> L56
            r2.append(r3)     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = " version: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L56
            int r3 = r4.e     // Catch: java.lang.Throwable -> L56
            r2.append(r3)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L56
            com.huawei.hms.support.log.HMSLog.i(r1, r2)     // Catch: java.lang.Throwable -> L56
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            return
        L56:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            throw r1
    }

    public final boolean d() {
            r5 = this;
            android.content.Context r0 = r5.a
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            r1 = 1
            java.lang.String r2 = "HMSPackageManager"
            if (r0 != 0) goto L11
            java.lang.String r0 = "In isMinApkVersionEffective, Failed to get 'PackageManager' instance."
            com.huawei.hms.support.log.HMSLog.e(r2, r0)
            return r1
        L11:
            java.lang.String r3 = r5.getHMSPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L46
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r3, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L46
            android.content.pm.ApplicationInfo r0 = r0.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L46
            if (r0 == 0) goto L4b
            android.os.Bundle r3 = r0.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L46
            if (r3 == 0) goto L4b
            android.os.Bundle r0 = r0.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L46
            java.lang.String r3 = "com.huawei.hms.kit.api_level:hmscore"
            boolean r0 = r0.containsKey(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L46
            if (r0 == 0) goto L4b
            int r0 = r5.getHmsVersionCode()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L46
            r3 = 50000000(0x2faf080, float:3.6872239E-37)
            if (r0 >= r3) goto L3f
            int r0 = r5.getHmsVersionCode()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L46
            r3 = 19999999(0x1312cff, float:3.254205E-38)
            if (r0 > r3) goto L4b
        L3f:
            java.lang.String r0 = "MinApkVersion is disabled."
            com.huawei.hms.support.log.HMSLog.i(r2, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L46
            r0 = 0
            return r0
        L46:
            java.lang.String r0 = "In isMinApkVersionEffective, Failed to read meta data for HMSCore API level."
            com.huawei.hms.support.log.HMSLog.e(r2, r0)
        L4b:
            return r1
    }

    public final void e() {
            r2 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r2.f
            r1 = 3
            r0.set(r1)
            r0 = 0
            r2.g = r0
            return
    }

    public java.lang.String getHMSFingerprint() {
            r1 = this;
            java.lang.String r0 = r1.d
            if (r0 != 0) goto L6
            java.lang.String r0 = "B92825C2BD5D6D6D1E7F39EECD17843B7D9016F611136B75441BC6F4D3F00F05"
        L6:
            return r0
    }

    public java.lang.String getHMSPackageName() {
            r3 = this;
            r3.refresh()
            java.lang.String r0 = r3.c
            if (r0 == 0) goto L24
            com.huawei.hms.utils.PackageManagerHelper r1 = r3.b
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r0 = r1.getPackageStates(r0)
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r1 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.NOT_INSTALLED
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L1f
            java.lang.String r0 = "HMSPackageManager"
            java.lang.String r1 = "The package name is not installed and needs to be refreshed again"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r3.c()
        L1f:
            java.lang.String r0 = r3.c
            if (r0 == 0) goto L24
            return r0
        L24:
            com.huawei.hms.utils.PackageManagerHelper r0 = r3.b
            java.lang.String r1 = "com.huawei.hwid"
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r0 = r0.getPackageStates(r1)
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r2 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.NOT_INSTALLED
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L42
            com.huawei.hms.utils.PackageManagerHelper r0 = r3.b
            java.lang.String r0 = r0.getPackageSignature(r1)
            java.lang.String r2 = "B92825C2BD5D6D6D1E7F39EECD17843B7D9016F611136B75441BC6F4D3F00F05"
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L42
        L42:
            return r1
    }

    public com.huawei.hms.utils.PackageManagerHelper.PackageStates getHMSPackageStates() {
            r5 = this;
            java.lang.Object r0 = com.huawei.hms.utils.HMSPackageManager.i
            monitor-enter(r0)
            r5.refresh()     // Catch: java.lang.Throwable -> L32
            java.util.concurrent.atomic.AtomicInteger r1 = r5.f     // Catch: java.lang.Throwable -> L32
            int r1 = r1.get()     // Catch: java.lang.Throwable -> L32
            r2 = 1
            if (r1 != r2) goto L12
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r1 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.SPOOF     // Catch: java.lang.Throwable -> L32
            goto L30
        L12:
            com.huawei.hms.utils.PackageManagerHelper r1 = r5.b     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = r5.c     // Catch: java.lang.Throwable -> L32
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r1 = r1.getPackageStates(r2)     // Catch: java.lang.Throwable -> L32
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r2 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.ENABLED     // Catch: java.lang.Throwable -> L32
            if (r1 != r2) goto L30
            java.lang.String r2 = r5.d     // Catch: java.lang.Throwable -> L32
            com.huawei.hms.utils.PackageManagerHelper r3 = r5.b     // Catch: java.lang.Throwable -> L32
            java.lang.String r4 = r5.c     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = r3.getPackageSignature(r4)     // Catch: java.lang.Throwable -> L32
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L32
            if (r2 != 0) goto L30
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r1 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.NOT_INSTALLED     // Catch: java.lang.Throwable -> L32
        L30:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            return r1
        L32:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
            throw r1
    }

    public int getHmsVersionCode() {
            r2 = this;
            com.huawei.hms.utils.PackageManagerHelper r0 = r2.b
            java.lang.String r1 = r2.getHMSPackageName()
            int r0 = r0.getPackageVersionCode(r1)
            return r0
    }

    public boolean hmsVerHigherThan(int r4) {
            r3 = this;
            int r0 = r3.e
            r1 = 1
            if (r0 >= r4) goto L1b
            boolean r0 = r3.d()
            if (r0 == 0) goto L1b
            com.huawei.hms.utils.PackageManagerHelper r0 = r3.b
            java.lang.String r2 = r3.getHMSPackageName()
            int r0 = r0.getPackageVersionCode(r2)
            r3.e = r0
            if (r0 < r4) goto L1a
            goto L1b
        L1a:
            r1 = 0
        L1b:
            return r1
    }

    public boolean isApkUpdateNecessary(int r4) {
            r3 = this;
            int r0 = r3.getHmsVersionCode()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "current versionCode:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r2 = ", minimum version requirements: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "HMSPackageManager"
            com.huawei.hms.support.log.HMSLog.i(r2, r1)
            boolean r1 = r3.d()
            if (r1 == 0) goto L2c
            if (r0 >= r4) goto L2c
            r4 = 1
            goto L2d
        L2c:
            r4 = 0
        L2d:
            return r4
    }

    public void refresh() {
            r1 = this;
            java.lang.String r0 = r1.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            java.lang.String r0 = r1.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
        L10:
            r1.c()
        L13:
            return
    }
}
