package com.tencent.bugly.proguard;

public final class ab {
    private static final java.util.ArrayList<com.tencent.bugly.proguard.ab.a> a = null;
    private static final java.util.Map<java.lang.Integer, java.lang.String> b = null;
    private static final java.lang.String[] c = null;



    static abstract class a {
        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract java.lang.String a();
    }

    static class b extends com.tencent.bugly.proguard.ab.a {
        private b() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        b(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.lang.String a() {
                r3 = this;
                java.lang.String r0 = "ro.gn.gnromvernumber"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                boolean r1 = com.tencent.bugly.proguard.ap.b(r0)
                if (r1 != 0) goto L31
                java.lang.String r1 = "fail"
                boolean r1 = r0.equals(r1)
                if (r1 != 0) goto L31
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "amigo/"
                r1.<init>(r2)
                r1.append(r0)
                java.lang.String r0 = "/"
                r1.append(r0)
                java.lang.String r0 = "ro.build.display.id"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                return r0
            L31:
                r0 = 0
                return r0
        }
    }

    static class c extends com.tencent.bugly.proguard.ab.a {
        private c() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        c(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.lang.String a() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "ro.build.fingerprint"
                java.lang.String r1 = com.tencent.bugly.proguard.ap.a(r1)
                r0.append(r1)
                java.lang.String r1 = "/"
                r0.append(r1)
                java.lang.String r1 = "ro.build.rom.id"
                java.lang.String r1 = com.tencent.bugly.proguard.ap.a(r1)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static class d extends com.tencent.bugly.proguard.ab.a {
        private d() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        d(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.lang.String a() {
                r2 = this;
                java.lang.String r0 = "ro.build.tyd.kbstyle_version"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                boolean r1 = com.tencent.bugly.proguard.ap.b(r0)
                if (r1 != 0) goto L1f
                java.lang.String r1 = "fail"
                boolean r1 = r0.equals(r1)
                if (r1 != 0) goto L1f
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r1 = "dido/"
                java.lang.String r0 = r1.concat(r0)
                return r0
            L1f:
                r0 = 0
                return r0
        }
    }

    static class e extends com.tencent.bugly.proguard.ab.a {
        private e() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        e(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.lang.String a() {
                r3 = this;
                java.lang.String r0 = "ro.aa.romver"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                boolean r1 = com.tencent.bugly.proguard.ap.b(r0)
                if (r1 != 0) goto L31
                java.lang.String r1 = "fail"
                boolean r1 = r0.equals(r1)
                if (r1 != 0) goto L31
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "htc/"
                r1.<init>(r2)
                r1.append(r0)
                java.lang.String r0 = "/"
                r1.append(r0)
                java.lang.String r0 = "ro.build.description"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                return r0
            L31:
                r0 = 0
                return r0
        }
    }

    static class f extends com.tencent.bugly.proguard.ab.a {
        private f() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        f(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.lang.String a() {
                r2 = this;
                java.lang.String r0 = "ro.build.version.emui"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                boolean r1 = com.tencent.bugly.proguard.ap.b(r0)
                if (r1 != 0) goto L1f
                java.lang.String r1 = "fail"
                boolean r1 = r0.equals(r1)
                if (r1 != 0) goto L1f
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r1 = "HuaWei/EMOTION/"
                java.lang.String r0 = r1.concat(r0)
                return r0
            L1f:
                r0 = 0
                return r0
        }
    }

    static class g extends com.tencent.bugly.proguard.ab.a {
        private g() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        g(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.lang.String a() {
                r2 = this;
                java.lang.String r0 = "ro.lenovo.series"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                boolean r1 = com.tencent.bugly.proguard.ap.b(r0)
                if (r1 != 0) goto L25
                java.lang.String r1 = "fail"
                boolean r0 = r0.equals(r1)
                if (r0 != 0) goto L25
                java.lang.String r0 = "ro.build.version.incremental"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r1 = "Lenovo/VIBE/"
                java.lang.String r0 = r1.concat(r0)
                return r0
            L25:
                r0 = 0
                return r0
        }
    }

    static class h extends com.tencent.bugly.proguard.ab.a {
        private h() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        h(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.lang.String a() {
                r2 = this;
                java.lang.String r0 = "ro.meizu.product.model"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                boolean r1 = com.tencent.bugly.proguard.ap.b(r0)
                if (r1 != 0) goto L29
                java.lang.String r1 = "fail"
                boolean r0 = r0.equals(r1)
                if (r0 != 0) goto L29
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Meizu/FLYME/"
                r0.<init>(r1)
                java.lang.String r1 = "ro.build.display.id"
                java.lang.String r1 = com.tencent.bugly.proguard.ap.a(r1)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
            L29:
                r0 = 0
                return r0
        }
    }

    static class i extends com.tencent.bugly.proguard.ab.a {
        private i() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        i(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.lang.String a() {
                r2 = this;
                java.lang.String r0 = "ro.build.version.opporom"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                boolean r1 = com.tencent.bugly.proguard.ap.b(r0)
                if (r1 != 0) goto L1f
                java.lang.String r1 = "fail"
                boolean r1 = r0.equals(r1)
                if (r1 != 0) goto L1f
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r1 = "Oppo/COLOROS/"
                java.lang.String r0 = r1.concat(r0)
                return r0
            L1f:
                r0 = 0
                return r0
        }
    }

    static class j extends com.tencent.bugly.proguard.ab.a {
        private j() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        j(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.lang.String a() {
                r3 = this;
                java.lang.String r0 = "ro.lewa.version"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                boolean r1 = com.tencent.bugly.proguard.ap.b(r0)
                if (r1 != 0) goto L31
                java.lang.String r1 = "fail"
                boolean r1 = r0.equals(r1)
                if (r1 != 0) goto L31
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "tcl/"
                r1.<init>(r2)
                r1.append(r0)
                java.lang.String r0 = "/"
                r1.append(r0)
                java.lang.String r0 = "ro.build.display.id"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                return r0
            L31:
                r0 = 0
                return r0
        }
    }

    static class k extends com.tencent.bugly.proguard.ab.a {
        private k() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        k(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.lang.String a() {
                r2 = this;
                java.lang.String r0 = "ro.vivo.os.build.display.id"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                boolean r1 = com.tencent.bugly.proguard.ap.b(r0)
                if (r1 != 0) goto L1f
                java.lang.String r1 = "fail"
                boolean r1 = r0.equals(r1)
                if (r1 != 0) goto L1f
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r1 = "vivo/FUNTOUCH/"
                java.lang.String r0 = r1.concat(r0)
                return r0
            L1f:
                r0 = 0
                return r0
        }
    }

    static class l extends com.tencent.bugly.proguard.ab.a {
        private l() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        l(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.lang.String a() {
                r2 = this;
                java.lang.String r0 = "ro.miui.ui.version.name"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                boolean r1 = com.tencent.bugly.proguard.ap.b(r0)
                if (r1 != 0) goto L1f
                java.lang.String r1 = "fail"
                boolean r1 = r0.equals(r1)
                if (r1 != 0) goto L1f
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r1 = "XiaoMi/MIUI/"
                java.lang.String r0 = r1.concat(r0)
                return r0
            L1f:
                r0 = 0
                return r0
        }
    }

    static class m extends com.tencent.bugly.proguard.ab.a {
        private m() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        m(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.lang.String a() {
                r3 = this;
                java.lang.String r0 = "ro.build.nubia.rom.name"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                boolean r1 = com.tencent.bugly.proguard.ap.b(r0)
                if (r1 != 0) goto L31
                java.lang.String r1 = "fail"
                boolean r1 = r0.equals(r1)
                if (r1 != 0) goto L31
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "Zte/NUBIA/"
                r1.<init>(r2)
                r1.append(r0)
                java.lang.String r0 = "_"
                r1.append(r0)
                java.lang.String r0 = "ro.build.nubia.rom.code"
                java.lang.String r0 = com.tencent.bugly.proguard.ap.a(r0)
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                return r0
            L31:
                r0 = 0
                return r0
        }
    }

    static {
            com.tencent.bugly.proguard.ab$1 r0 = new com.tencent.bugly.proguard.ab$1
            r0.<init>()
            com.tencent.bugly.proguard.ab.a = r0
            com.tencent.bugly.proguard.ab$2 r0 = new com.tencent.bugly.proguard.ab$2
            r0.<init>()
            com.tencent.bugly.proguard.ab.b = r0
            java.lang.String r1 = "/su"
            java.lang.String r2 = "/su/bin/su"
            java.lang.String r3 = "/sbin/su"
            java.lang.String r4 = "/data/local/xbin/su"
            java.lang.String r5 = "/data/local/bin/su"
            java.lang.String r6 = "/data/local/su"
            java.lang.String r7 = "/system/xbin/su"
            java.lang.String r8 = "/system/bin/su"
            java.lang.String r9 = "/system/sd/xbin/su"
            java.lang.String r10 = "/system/bin/failsafe/su"
            java.lang.String r11 = "/system/bin/cufsdosck"
            java.lang.String r12 = "/system/xbin/cufsdosck"
            java.lang.String r13 = "/system/bin/cufsmgr"
            java.lang.String r14 = "/system/xbin/cufsmgr"
            java.lang.String r15 = "/system/bin/cufaevdd"
            java.lang.String r16 = "/system/xbin/cufaevdd"
            java.lang.String r17 = "/system/bin/conbb"
            java.lang.String r18 = "/system/xbin/conbb"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18}
            com.tencent.bugly.proguard.ab.c = r0
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = android.os.Build.MODEL     // Catch: java.lang.Throwable -> L3
            return r0
        L3:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto Ld
            r0.printStackTrace()
        Ld:
            java.lang.String r0 = "fail"
            return r0
    }

    public static java.lang.String a(android.content.Context r3) {
            java.lang.String r0 = "fail"
            if (r3 == 0) goto L40
            android.content.pm.ApplicationInfo r1 = r3.getApplicationInfo()
            if (r1 != 0) goto Lb
            goto L40
        Lb:
            android.content.pm.ApplicationInfo r3 = r3.getApplicationInfo()
            java.lang.String r3 = r3.nativeLibraryDir
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto L18
            return r0
        L18:
            java.lang.String r1 = "arm"
            boolean r1 = r3.endsWith(r1)
            if (r1 == 0) goto L23
            java.lang.String r3 = "armeabi-v7a"
            return r3
        L23:
            java.lang.String r1 = "arm64"
            boolean r1 = r3.endsWith(r1)
            if (r1 == 0) goto L2e
            java.lang.String r3 = "arm64-v8a"
            return r3
        L2e:
            java.lang.String r1 = "x86"
            boolean r2 = r3.endsWith(r1)
            if (r2 == 0) goto L37
            return r1
        L37:
            java.lang.String r1 = "x86_64"
            boolean r3 = r3.endsWith(r1)
            if (r3 == 0) goto L40
            return r1
        L40:
            return r0
    }

    public static long b(android.content.Context r5) {
            r0 = 1024(0x400, double:5.06E-321)
            java.lang.String r2 = "activity"
            java.lang.Object r5 = r5.getSystemService(r2)     // Catch: java.lang.Throwable -> L27
            android.app.ActivityManager r5 = (android.app.ActivityManager) r5     // Catch: java.lang.Throwable -> L27
            if (r5 == 0) goto L24
            r2 = 1
            int[] r2 = new int[r2]     // Catch: java.lang.Throwable -> L27
            int r3 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L27
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Throwable -> L27
            android.os.Debug$MemoryInfo[] r5 = r5.getProcessMemoryInfo(r2)     // Catch: java.lang.Throwable -> L27
            r5 = r5[r4]     // Catch: java.lang.Throwable -> L27
            int r5 = r5.getTotalPss()     // Catch: java.lang.Throwable -> L27
            long r2 = (long) r5
        L21:
            long r2 = r2 * r0
            return r2
        L24:
            r0 = 0
            return r0
        L27:
            long r2 = android.os.Debug.getPss()
            goto L21
    }

    public static java.lang.String b() {
            java.lang.String r0 = android.os.Build.VERSION.RELEASE     // Catch: java.lang.Throwable -> L3
            return r0
        L3:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto Ld
            r0.printStackTrace()
        Ld:
            java.lang.String r0 = "fail"
            return r0
    }

    public static int c() {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L3
            return r0
        L3:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto Ld
            r0.printStackTrace()
        Ld:
            r0 = -1
            return r0
    }

    public static java.lang.String c(android.content.Context r4) {
            java.lang.String r0 = "unknown"
            java.lang.String r1 = "connectivity"
            java.lang.Object r1 = r4.getSystemService(r1)     // Catch: java.lang.Exception -> L57
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Exception -> L57
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L57
            if (r1 != 0) goto L12
            r4 = 0
            return r4
        L12:
            int r2 = r1.getType()     // Catch: java.lang.Exception -> L57
            r3 = 1
            if (r2 != r3) goto L1c
            java.lang.String r4 = "WIFI"
            goto L62
        L1c:
            int r1 = r1.getType()     // Catch: java.lang.Exception -> L57
            if (r1 != 0) goto L61
            java.lang.String r1 = "phone"
            java.lang.Object r4 = r4.getSystemService(r1)     // Catch: java.lang.Exception -> L57
            android.telephony.TelephonyManager r4 = (android.telephony.TelephonyManager) r4     // Catch: java.lang.Exception -> L57
            if (r4 == 0) goto L61
            int r4 = r4.getNetworkType()     // Catch: java.lang.Exception -> L57
            java.util.Map<java.lang.Integer, java.lang.String> r1 = com.tencent.bugly.proguard.ab.b     // Catch: java.lang.Exception -> L57
            java.lang.Integer r2 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L57
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Exception -> L57
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L57
            if (r1 != 0) goto L55
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L52
            java.lang.String r2 = "MOBILE("
            r0.<init>(r2)     // Catch: java.lang.Exception -> L52
            r0.append(r4)     // Catch: java.lang.Exception -> L52
            java.lang.String r4 = ")"
            r0.append(r4)     // Catch: java.lang.Exception -> L52
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L52
            goto L61
        L52:
            r4 = move-exception
            r0 = r1
            goto L58
        L55:
            r4 = r1
            goto L62
        L57:
            r4 = move-exception
        L58:
            boolean r1 = com.tencent.bugly.proguard.al.a(r4)
            if (r1 != 0) goto L61
            r4.printStackTrace()
        L61:
            r4 = r0
        L62:
            return r4
    }

    public static java.lang.String d() {
            java.lang.String r0 = "os.arch"
            java.lang.String r0 = java.lang.System.getProperty(r0)     // Catch: java.lang.Throwable -> Lb
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L15
            r0.printStackTrace()
        L15:
            java.lang.String r0 = "fail"
            return r0
    }

    public static long e() {
            java.io.File r0 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Throwable -> L1a
            android.os.StatFs r1 = new android.os.StatFs     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1a
            int r0 = r1.getBlockSize()     // Catch: java.lang.Throwable -> L1a
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L1a
            int r0 = r1.getBlockCount()     // Catch: java.lang.Throwable -> L1a
            long r0 = (long) r0
            long r0 = r0 * r2
            goto L26
        L1a:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L24
            r0.printStackTrace()
        L24:
            r0 = -1
        L26:
            return r0
    }

    public static long f() {
            java.io.File r0 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Throwable -> L1a
            android.os.StatFs r1 = new android.os.StatFs     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1a
            int r0 = r1.getBlockSize()     // Catch: java.lang.Throwable -> L1a
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L1a
            int r0 = r1.getAvailableBlocks()     // Catch: java.lang.Throwable -> L1a
            long r0 = (long) r0
            long r0 = r0 * r2
            goto L26
        L1a:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L24
            r0.printStackTrace()
        L24:
            r0 = -1
        L26:
            return r0
    }

    public static long g() {
            r0 = 0
            r2 = 0
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L3a java.lang.Throwable -> L3d
            java.io.FileReader r4 = new java.io.FileReader     // Catch: java.lang.Throwable -> L3a java.lang.Throwable -> L3d
            java.lang.String r5 = "/proc/self/status"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L3a java.lang.Throwable -> L3d
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L3a java.lang.Throwable -> L3d
            java.lang.String r2 = r3.readLine()     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L4e
        L13:
            if (r2 == 0) goto L2f
            java.lang.String r4 = "VmSize"
            boolean r4 = r2.startsWith(r4)     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L4e
            if (r4 == 0) goto L2a
            java.lang.String r4 = "[^\\d]"
            java.lang.String r5 = ""
            java.lang.String r2 = r2.replaceAll(r4, r5)     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L4e
            long r0 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L4e
            goto L2f
        L2a:
            java.lang.String r2 = r3.readLine()     // Catch: java.lang.Throwable -> L38 java.lang.Throwable -> L4e
            goto L13
        L2f:
            r3.close()     // Catch: java.lang.Throwable -> L33
            goto L49
        L33:
            r2 = move-exception
            r2.printStackTrace()
            goto L49
        L38:
            r2 = move-exception
            goto L41
        L3a:
            r0 = move-exception
            r3 = r2
            goto L4f
        L3d:
            r3 = move-exception
            r6 = r3
            r3 = r2
            r2 = r6
        L41:
            com.tencent.bugly.proguard.al.a(r2)     // Catch: java.lang.Throwable -> L4e
            if (r3 == 0) goto L49
            r3.close()     // Catch: java.lang.Throwable -> L33
        L49:
            r2 = 1024(0x400, double:5.06E-321)
            long r0 = r0 * r2
            return r0
        L4e:
            r0 = move-exception
        L4f:
            if (r3 == 0) goto L59
            r3.close()     // Catch: java.lang.Throwable -> L55
            goto L59
        L55:
            r1 = move-exception
            r1.printStackTrace()
        L59:
            throw r0
    }

    public static long h() {
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            long r0 = r0.totalMemory()
            java.lang.Runtime r2 = java.lang.Runtime.getRuntime()
            long r2 = r2.freeMemory()
            long r0 = r0 - r2
            return r0
    }

    public static long i() {
            java.lang.String r0 = "/proc/meminfo"
            r1 = 0
            java.io.FileReader r2 = new java.io.FileReader     // Catch: java.lang.Throwable -> L7f java.lang.Throwable -> L84
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L7f java.lang.Throwable -> L84
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L75 java.lang.Throwable -> L7a
            r3 = 2048(0x800, float:2.87E-42)
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> L75 java.lang.Throwable -> L7a
            java.lang.String r1 = r0.readLine()     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> Lb4
            if (r1 != 0) goto L34
            r0.close()     // Catch: java.io.IOException -> L19
            goto L23
        L19:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L23
            r0.printStackTrace()
        L23:
            r2.close()     // Catch: java.io.IOException -> L27
            goto L31
        L27:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L31
            r0.printStackTrace()
        L31:
            r0 = -1
            return r0
        L34:
            java.lang.String r3 = ":\\s+"
            r4 = 2
            java.lang.String[] r1 = r1.split(r3, r4)     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> Lb4
            r3 = 1
            r1 = r1[r3]     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> Lb4
            java.lang.String r1 = r1.toLowerCase()     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> Lb4
            java.lang.String r3 = "kb"
            java.lang.String r4 = ""
            java.lang.String r1 = r1.replace(r3, r4)     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> Lb4
            java.lang.String r1 = r1.trim()     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> Lb4
            long r3 = java.lang.Long.parseLong(r1)     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> Lb4
            r5 = 1024(0x400, double:5.06E-321)
            long r3 = r3 * r5
            r0.close()     // Catch: java.io.IOException -> L5a
            goto L64
        L5a:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L64
            r0.printStackTrace()
        L64:
            r2.close()     // Catch: java.io.IOException -> L68
            goto L72
        L68:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L72
            r0.printStackTrace()
        L72:
            return r3
        L73:
            r1 = move-exception
            goto L88
        L75:
            r0 = move-exception
            r7 = r1
            r1 = r0
            r0 = r7
            goto Lb5
        L7a:
            r0 = move-exception
            r7 = r1
            r1 = r0
            r0 = r7
            goto L88
        L7f:
            r0 = move-exception
            r2 = r1
            r1 = r0
            r0 = r2
            goto Lb5
        L84:
            r0 = move-exception
            r2 = r1
            r1 = r0
            r0 = r2
        L88:
            boolean r3 = com.tencent.bugly.proguard.al.a(r1)     // Catch: java.lang.Throwable -> Lb4
            if (r3 != 0) goto L91
            r1.printStackTrace()     // Catch: java.lang.Throwable -> Lb4
        L91:
            if (r0 == 0) goto La1
            r0.close()     // Catch: java.io.IOException -> L97
            goto La1
        L97:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto La1
            r0.printStackTrace()
        La1:
            if (r2 == 0) goto Lb1
            r2.close()     // Catch: java.io.IOException -> La7
            goto Lb1
        La7:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto Lb1
            r0.printStackTrace()
        Lb1:
            r0 = -2
            return r0
        Lb4:
            r1 = move-exception
        Lb5:
            if (r0 == 0) goto Lc5
            r0.close()     // Catch: java.io.IOException -> Lbb
            goto Lc5
        Lbb:
            r0 = move-exception
            boolean r3 = com.tencent.bugly.proguard.al.a(r0)
            if (r3 != 0) goto Lc5
            r0.printStackTrace()
        Lc5:
            if (r2 == 0) goto Ld5
            r2.close()     // Catch: java.io.IOException -> Lcb
            goto Ld5
        Lcb:
            r0 = move-exception
            boolean r2 = com.tencent.bugly.proguard.al.a(r0)
            if (r2 != 0) goto Ld5
            r0.printStackTrace()
        Ld5:
            throw r1
    }

    public static long j() {
            java.lang.String r0 = ""
            java.lang.String r1 = "kb"
            java.lang.String r2 = ":\\s+"
            java.lang.String r3 = "/proc/meminfo"
            r4 = 0
            java.io.FileReader r5 = new java.io.FileReader     // Catch: java.lang.Throwable -> Lfb java.lang.Throwable -> Lff
            r5.<init>(r3)     // Catch: java.lang.Throwable -> Lfb java.lang.Throwable -> Lff
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> Lf9 java.lang.Throwable -> L12d
            r6 = 2048(0x800, float:2.87E-42)
            r3.<init>(r5, r6)     // Catch: java.lang.Throwable -> Lf9 java.lang.Throwable -> L12d
            r3.readLine()     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            java.lang.String r4 = r3.readLine()     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            r6 = -1
            if (r4 != 0) goto L3d
            r3.close()     // Catch: java.io.IOException -> L24
            goto L2e
        L24:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L2e
            r0.printStackTrace()
        L2e:
            r5.close()     // Catch: java.io.IOException -> L32
            goto L3c
        L32:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L3c
            r0.printStackTrace()
        L3c:
            return r6
        L3d:
            r8 = 2
            java.lang.String[] r4 = r4.split(r2, r8)     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            r9 = 1
            r4 = r4[r9]     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            java.lang.String r4 = r4.replace(r1, r0)     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            java.lang.String r4 = r4.trim()     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            r10 = 0
            long r12 = java.lang.Long.parseLong(r4)     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            r14 = 1024(0x400, double:5.06E-321)
            long r12 = r12 * r14
            long r12 = r12 + r10
            java.lang.String r4 = r3.readLine()     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            if (r4 != 0) goto L7f
            r3.close()     // Catch: java.io.IOException -> L66
            goto L70
        L66:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L70
            r0.printStackTrace()
        L70:
            r5.close()     // Catch: java.io.IOException -> L74
            goto L7e
        L74:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L7e
            r0.printStackTrace()
        L7e:
            return r6
        L7f:
            java.lang.String[] r4 = r4.split(r2, r8)     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            r4 = r4[r9]     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            java.lang.String r4 = r4.replace(r1, r0)     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            java.lang.String r4 = r4.trim()     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            long r10 = java.lang.Long.parseLong(r4)     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            java.lang.Long.signum(r10)
            long r10 = r10 * r14
            long r12 = r12 + r10
            java.lang.String r4 = r3.readLine()     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            if (r4 != 0) goto Lbe
            r3.close()     // Catch: java.io.IOException -> La5
            goto Laf
        La5:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto Laf
            r0.printStackTrace()
        Laf:
            r5.close()     // Catch: java.io.IOException -> Lb3
            goto Lbd
        Lb3:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto Lbd
            r0.printStackTrace()
        Lbd:
            return r6
        Lbe:
            java.lang.String[] r2 = r4.split(r2, r8)     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            r2 = r2[r9]     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            java.lang.String r2 = r2.toLowerCase()     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            java.lang.String r0 = r2.replace(r1, r0)     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            java.lang.String r0 = r0.trim()     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            long r0 = java.lang.Long.parseLong(r0)     // Catch: java.lang.Throwable -> Lf4 java.lang.Throwable -> Lf6
            long r0 = r0 * r14
            long r12 = r12 + r0
            r3.close()     // Catch: java.io.IOException -> Ldb
            goto Le5
        Ldb:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto Le5
            r0.printStackTrace()
        Le5:
            r5.close()     // Catch: java.io.IOException -> Le9
            goto Lf3
        Le9:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto Lf3
            r0.printStackTrace()
        Lf3:
            return r12
        Lf4:
            r0 = move-exception
            goto L12f
        Lf6:
            r0 = move-exception
            r4 = r3
            goto L101
        Lf9:
            r0 = move-exception
            goto L101
        Lfb:
            r0 = move-exception
            r3 = r4
            r5 = r3
            goto L12f
        Lff:
            r0 = move-exception
            r5 = r4
        L101:
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)     // Catch: java.lang.Throwable -> L12d
            if (r1 != 0) goto L10a
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L12d
        L10a:
            if (r4 == 0) goto L11a
            r4.close()     // Catch: java.io.IOException -> L110
            goto L11a
        L110:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L11a
            r0.printStackTrace()
        L11a:
            if (r5 == 0) goto L12a
            r5.close()     // Catch: java.io.IOException -> L120
            goto L12a
        L120:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L12a
            r0.printStackTrace()
        L12a:
            r0 = -2
            return r0
        L12d:
            r0 = move-exception
            r3 = r4
        L12f:
            if (r3 == 0) goto L13f
            r3.close()     // Catch: java.io.IOException -> L135
            goto L13f
        L135:
            r1 = move-exception
            boolean r2 = com.tencent.bugly.proguard.al.a(r1)
            if (r2 != 0) goto L13f
            r1.printStackTrace()
        L13f:
            if (r5 == 0) goto L14f
            r5.close()     // Catch: java.io.IOException -> L145
            goto L14f
        L145:
            r1 = move-exception
            boolean r2 = com.tencent.bugly.proguard.al.a(r1)
            if (r2 != 0) goto L14f
            r1.printStackTrace()
        L14f:
            throw r0
    }

    public static long k() {
            boolean r0 = s()
            if (r0 != 0) goto L9
            r0 = 0
            return r0
        L9:
            android.os.StatFs r0 = new android.os.StatFs     // Catch: java.lang.Throwable -> L23
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> L23
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L23
            int r1 = r0.getBlockSize()     // Catch: java.lang.Throwable -> L23
            int r0 = r0.getBlockCount()     // Catch: java.lang.Throwable -> L23
            long r2 = (long) r0
            long r0 = (long) r1
            long r2 = r2 * r0
            return r2
        L23:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L2d
            r0.printStackTrace()
        L2d:
            r0 = -2
            return r0
    }

    public static long l() {
            boolean r0 = s()
            if (r0 != 0) goto L9
            r0 = 0
            return r0
        L9:
            android.os.StatFs r0 = new android.os.StatFs     // Catch: java.lang.Throwable -> L23
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> L23
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L23
            int r1 = r0.getBlockSize()     // Catch: java.lang.Throwable -> L23
            int r0 = r0.getAvailableBlocks()     // Catch: java.lang.Throwable -> L23
            long r2 = (long) r0
            long r0 = (long) r1
            long r2 = r2 * r0
            return r2
        L23:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L2d
            r0.printStackTrace()
        L2d:
            r0 = -2
            return r0
    }

    public static java.lang.String m() {
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String n() {
            java.util.ArrayList<com.tencent.bugly.proguard.ab$a> r0 = com.tencent.bugly.proguard.ab.a
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r0.next()
            com.tencent.bugly.proguard.ab$a r1 = (com.tencent.bugly.proguard.ab.a) r1
            java.lang.String r1 = r1.a()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L6
            return r1
        L1d:
            r0 = 0
            return r0
    }

    public static boolean o() {
            com.tencent.bugly.proguard.ab$i r0 = new com.tencent.bugly.proguard.ab$i
            r1 = 0
            r0.<init>(r1)
            java.lang.String r0 = r0.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L11
            return r1
        L11:
            r0 = 1
            return r0
    }

    public static boolean p() {
            com.tencent.bugly.proguard.ab$k r0 = new com.tencent.bugly.proguard.ab$k
            r1 = 0
            r0.<init>(r1)
            java.lang.String r0 = r0.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L11
            return r1
        L11:
            r0 = 1
            return r0
    }

    public static boolean q() {
            java.lang.String[] r0 = com.tencent.bugly.proguard.ab.c
            int r1 = r0.length
            r2 = 0
            r3 = 0
        L5:
            r4 = 1
            if (r3 >= r1) goto L1a
            r5 = r0[r3]
            java.io.File r6 = new java.io.File
            r6.<init>(r5)
            boolean r5 = r6.exists()
            if (r5 == 0) goto L17
            r0 = 1
            goto L1b
        L17:
            int r3 = r3 + 1
            goto L5
        L1a:
            r0 = 0
        L1b:
            java.lang.String r1 = android.os.Build.TAGS
            if (r1 == 0) goto L2b
            java.lang.String r1 = android.os.Build.TAGS
            java.lang.String r3 = "test-keys"
            boolean r1 = r1.contains(r3)
            if (r1 == 0) goto L2b
            r1 = 1
            goto L2c
        L2b:
            r1 = 0
        L2c:
            if (r1 != 0) goto L32
            if (r0 == 0) goto L31
            goto L32
        L31:
            return r2
        L32:
            return r4
    }

    public static boolean r() {
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            long r0 = r0.maxMemory()
            double r0 = (double) r0
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r0 = r0 * r2
            r4 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r0 = r0 / r4
            float r0 = (float) r0
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()
            long r6 = r1.totalMemory()
            double r6 = (double) r6
            double r6 = r6 * r2
            double r6 = r6 / r4
            float r1 = (float) r6
            float r2 = r0 - r1
            r3 = 1
            java.lang.Object[] r4 = new java.lang.Object[r3]
            java.lang.Float r0 = java.lang.Float.valueOf(r0)
            r5 = 0
            r4[r5] = r0
            java.lang.String r0 = "maxMemory : %f"
            com.tencent.bugly.proguard.al.c(r0, r4)
            java.lang.Object[] r0 = new java.lang.Object[r3]
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            r0[r5] = r1
            java.lang.String r1 = "totalMemory : %f"
            com.tencent.bugly.proguard.al.c(r1, r0)
            java.lang.Object[] r0 = new java.lang.Object[r3]
            java.lang.Float r1 = java.lang.Float.valueOf(r2)
            r0[r5] = r1
            java.lang.String r1 = "freeMemory : %f"
            com.tencent.bugly.proguard.al.c(r1, r0)
            r0 = 1092616192(0x41200000, float:10.0)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 >= 0) goto L50
            return r3
        L50:
            return r5
    }

    private static boolean s() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Throwable -> Le
            java.lang.String r1 = "mounted"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto L18
            r0 = 1
            return r0
        Le:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L18
            r0.printStackTrace()
        L18:
            r0 = 0
            return r0
    }
}
