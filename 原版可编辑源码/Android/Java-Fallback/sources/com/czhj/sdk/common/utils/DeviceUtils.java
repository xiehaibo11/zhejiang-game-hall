package com.czhj.sdk.common.utils;

public class DeviceUtils {
    static final java.lang.String[] a = null;
    private static final int b = 31457280;
    private static final java.lang.String c = "getSimState";
    private static final java.lang.String d = "getImei";
    private static final java.lang.String e = "getLine1Number";
    private static final int f = 31457280;
    private static final int g = 104857600;
    private static final int h = -1;
    private static java.lang.String i;
    private static int j;
    private static java.lang.String k;
    private static java.lang.String l;
    private static java.lang.String m;
    private static java.lang.String n;
    private static com.czhj.sdk.common.utils.DeviceUtils.NetworkType o;
    private static boolean p;
    private static long q;
    private static long r;
    private static long s;
    private static long t;
    private static java.util.ArrayList<android.net.Network> u;
    private static android.net.Network v;


    public static class NetBroadcastReceiver extends android.content.BroadcastReceiver {
        public NetBroadcastReceiver() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onReceive(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                java.lang.String r3 = r3.getAction()
                java.lang.String r0 = "android.net.conn.CONNECTIVITY_CHANGE"
                boolean r3 = r3.equals(r0)
                if (r3 == 0) goto Lf
                com.czhj.sdk.common.utils.DeviceUtils.updateNetworkType(r2)
            Lf:
                return
        }
    }

    public enum NetworkType extends java.lang.Enum<com.czhj.sdk.common.utils.DeviceUtils.NetworkType> {
        private static final com.czhj.sdk.common.utils.DeviceUtils.NetworkType[] $VALUES = null;
        public static final com.czhj.sdk.common.utils.DeviceUtils.NetworkType ETHERNET = null;
        public static final com.czhj.sdk.common.utils.DeviceUtils.NetworkType MOBILE = null;
        public static final com.czhj.sdk.common.utils.DeviceUtils.NetworkType MOBILE_2G = null;
        public static final com.czhj.sdk.common.utils.DeviceUtils.NetworkType MOBILE_3G = null;
        public static final com.czhj.sdk.common.utils.DeviceUtils.NetworkType MOBILE_4G = null;
        public static final com.czhj.sdk.common.utils.DeviceUtils.NetworkType MOBILE_5G = null;
        public static final com.czhj.sdk.common.utils.DeviceUtils.NetworkType UNKNOWN = null;
        public static final com.czhj.sdk.common.utils.DeviceUtils.NetworkType WIFI = null;
        private final int mId;

        static {
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = new com.czhj.sdk.common.utils.DeviceUtils$NetworkType
                r1 = 0
                java.lang.String r2 = "UNKNOWN"
                r0.<init>(r2, r1, r1)
                com.czhj.sdk.common.utils.DeviceUtils.NetworkType.UNKNOWN = r0
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = new com.czhj.sdk.common.utils.DeviceUtils$NetworkType
                r2 = 1
                java.lang.String r3 = "ETHERNET"
                r4 = 101(0x65, float:1.42E-43)
                r0.<init>(r3, r2, r4)
                com.czhj.sdk.common.utils.DeviceUtils.NetworkType.ETHERNET = r0
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = new com.czhj.sdk.common.utils.DeviceUtils$NetworkType
                r3 = 2
                java.lang.String r4 = "WIFI"
                r5 = 100
                r0.<init>(r4, r3, r5)
                com.czhj.sdk.common.utils.DeviceUtils.NetworkType.WIFI = r0
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = new com.czhj.sdk.common.utils.DeviceUtils$NetworkType
                r4 = 3
                java.lang.String r5 = "MOBILE"
                r0.<init>(r5, r4, r2)
                com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE = r0
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = new com.czhj.sdk.common.utils.DeviceUtils$NetworkType
                r5 = 4
                java.lang.String r6 = "MOBILE_2G"
                r0.<init>(r6, r5, r3)
                com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE_2G = r0
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = new com.czhj.sdk.common.utils.DeviceUtils$NetworkType
                r6 = 5
                java.lang.String r7 = "MOBILE_3G"
                r0.<init>(r7, r6, r4)
                com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE_3G = r0
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = new com.czhj.sdk.common.utils.DeviceUtils$NetworkType
                r7 = 6
                java.lang.String r8 = "MOBILE_4G"
                r0.<init>(r8, r7, r5)
                com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE_4G = r0
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = new com.czhj.sdk.common.utils.DeviceUtils$NetworkType
                r8 = 7
                java.lang.String r9 = "MOBILE_5G"
                r0.<init>(r9, r8, r6)
                com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE_5G = r0
                r9 = 8
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType[] r9 = new com.czhj.sdk.common.utils.DeviceUtils.NetworkType[r9]
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r10 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.UNKNOWN
                r9[r1] = r10
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r1 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.ETHERNET
                r9[r2] = r1
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r1 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.WIFI
                r9[r3] = r1
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r1 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE
                r9[r4] = r1
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r1 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE_2G
                r9[r5] = r1
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r1 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE_3G
                r9[r6] = r1
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r1 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE_4G
                r9[r7] = r1
                r9[r8] = r0
                com.czhj.sdk.common.utils.DeviceUtils.NetworkType.$VALUES = r9
                return
        }

        NetworkType(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.mId = r3
                return
        }

        static com.czhj.sdk.common.utils.DeviceUtils.NetworkType a(android.content.Context r0, int r1) {
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = b(r0, r1)
                return r0
        }

        private static com.czhj.sdk.common.utils.DeviceUtils.NetworkType b(android.content.Context r1, int r2) {
                if (r2 == 0) goto L1e
                r0 = 1
                if (r2 == r0) goto L1b
                r0 = 2
                if (r2 == r0) goto L1e
                r0 = 3
                if (r2 == r0) goto L1e
                r0 = 4
                if (r2 == r0) goto L1e
                r0 = 5
                if (r2 == r0) goto L1e
                r1 = 9
                if (r2 == r1) goto L18
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r1 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.UNKNOWN
                return r1
            L18:
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r1 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.ETHERNET
                return r1
            L1b:
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r1 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.WIFI
                return r1
            L1e:
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r1 = com.czhj.sdk.common.utils.DeviceUtils.getDataNetworkType(r1)
                return r1
        }

        public static com.czhj.sdk.common.utils.DeviceUtils.NetworkType valueOf(java.lang.String r1) {
                java.lang.Class<com.czhj.sdk.common.utils.DeviceUtils$NetworkType> r0 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType r1 = (com.czhj.sdk.common.utils.DeviceUtils.NetworkType) r1
                return r1
        }

        public static com.czhj.sdk.common.utils.DeviceUtils.NetworkType[] values() {
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType[] r0 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.$VALUES
                java.lang.Object r0 = r0.clone()
                com.czhj.sdk.common.utils.DeviceUtils$NetworkType[] r0 = (com.czhj.sdk.common.utils.DeviceUtils.NetworkType[]) r0
                return r0
        }

        public int getId() {
                r1 = this;
                int r0 = r1.mId
                return r0
        }

        @Override
        public java.lang.String toString() {
                r1 = this;
                int r0 = r1.mId
                java.lang.String r0 = java.lang.Integer.toString(r0)
                return r0
        }
    }

    static {
            java.lang.String r0 = "/system/lib/libdroid4x.so"
            java.lang.String r1 = "/system/bin/mount.vboxsf"
            java.lang.String r2 = "/system/lib/vboxguest.ko"
            java.lang.String r3 = "/etc/mumu-configs"
            java.lang.String r4 = "/system/lib/vboxsf.ko"
            java.lang.String r5 = "/system/lib/vboxvideo.ko"
            java.lang.String r6 = "/data/.bluestacks.prop"
            java.lang.String r7 = "/system/bin/microvirt-vbox-sf"
            java.lang.String r8 = "/system/lib/tboxsf.ko"
            java.lang.String r9 = "/system/bin/androVM-vbox-sf"
            java.lang.String r10 = "/system/bin/microvirtd"
            java.lang.String r11 = "/system/bin/windroyed"
            java.lang.String r12 = "/system/lib/libdroid4x.so"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12}
            com.czhj.sdk.common.utils.DeviceUtils.a = r0
            r0 = 0
            com.czhj.sdk.common.utils.DeviceUtils.j = r0
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.UNKNOWN
            com.czhj.sdk.common.utils.DeviceUtils.o = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.czhj.sdk.common.utils.DeviceUtils.u = r0
            return
    }

    public DeviceUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.net.Network a(android.net.Network r0) {
            com.czhj.sdk.common.utils.DeviceUtils.v = r0
            return r0
    }

    static com.czhj.sdk.common.utils.DeviceUtils.NetworkType a(com.czhj.sdk.common.utils.DeviceUtils.NetworkType r0) {
            com.czhj.sdk.common.utils.DeviceUtils.o = r0
            return r0
    }

    static java.util.ArrayList a() {
            java.util.ArrayList<android.net.Network> r0 = com.czhj.sdk.common.utils.DeviceUtils.u
            return r0
    }

    private static boolean a(int r0, int r1) {
            r0 = r0 & r1
            if (r0 == 0) goto L5
            r0 = 1
            goto L6
        L5:
            r0 = 0
        L6:
            return r0
    }

    private static boolean a(android.content.Context r1) {
            java.lang.String r0 = "android.permission.INTERNET"
            int r1 = r1.checkCallingOrSelfPermission(r0)
            if (r1 != 0) goto La
            r1 = 1
            goto Lb
        La:
            r1 = 0
        Lb:
            return r1
    }

    private static boolean a(java.lang.String r4) {
            r0 = 0
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L4c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4c
            r2.<init>()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r3 = "ls -l "
            r2.append(r3)     // Catch: java.lang.Throwable -> L4c
            r2.append(r4)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L4c
            java.lang.Process r0 = r1.exec(r4)     // Catch: java.lang.Throwable -> L4c
            java.io.BufferedReader r4 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L4c
            java.io.InputStreamReader r1 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L4c
            java.io.InputStream r2 = r0.getInputStream()     // Catch: java.lang.Throwable -> L4c
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L4c
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r4 = r4.readLine()     // Catch: java.lang.Throwable -> L4c
            if (r4 == 0) goto L49
            int r1 = r4.length()     // Catch: java.lang.Throwable -> L4c
            r2 = 4
            if (r1 < r2) goto L49
            r1 = 3
            char r4 = r4.charAt(r1)     // Catch: java.lang.Throwable -> L4c
            r1 = 115(0x73, float:1.61E-43)
            if (r4 == r1) goto L42
            r1 = 120(0x78, float:1.68E-43)
            if (r4 != r1) goto L49
        L42:
            r4 = 1
            if (r0 == 0) goto L48
            r0.destroy()
        L48:
            return r4
        L49:
            if (r0 == 0) goto L51
            goto L4e
        L4c:
            if (r0 == 0) goto L51
        L4e:
            r0.destroy()
        L51:
            r4 = 0
            return r4
    }

    static boolean a(boolean r0) {
            com.czhj.sdk.common.utils.DeviceUtils.p = r0
            return r0
    }

    public static long diskCacheSizeBytes(java.io.File r5, long r6) {
            android.os.StatFs r0 = new android.os.StatFs     // Catch: java.lang.IllegalArgumentException -> L19
            java.lang.String r5 = r5.getAbsolutePath()     // Catch: java.lang.IllegalArgumentException -> L19
            r0.<init>(r5)     // Catch: java.lang.IllegalArgumentException -> L19
            int r5 = r0.getBlockCount()     // Catch: java.lang.IllegalArgumentException -> L19
            long r1 = (long) r5     // Catch: java.lang.IllegalArgumentException -> L19
            int r5 = r0.getBlockSize()     // Catch: java.lang.IllegalArgumentException -> L19
            long r3 = (long) r5     // Catch: java.lang.IllegalArgumentException -> L19
            long r1 = r1 * r3
            r3 = 50
            long r6 = r1 / r3
            goto L1e
        L19:
            java.lang.String r5 = "Unable to calculate 2% of available disk space, defaulting to minimum"
            com.czhj.sdk.logger.SigmobLog.d(r5)
        L1e:
            r0 = 104857600(0x6400000, double:5.1806538E-316)
            long r5 = java.lang.Math.min(r6, r0)
            r0 = 31457280(0x1e00000, double:1.55419614E-316)
            long r5 = java.lang.Math.max(r5, r0)
            return r5
    }

    public static com.czhj.sdk.common.utils.DeviceUtils.NetworkType getActiveNetworkType() {
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = com.czhj.sdk.common.utils.DeviceUtils.o
            return r0
    }

    public static java.lang.String getAndroidId(android.content.Context r1) {
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.m
            if (r0 != 0) goto L24
            if (r1 == 0) goto L24
            java.lang.String r0 = ""
            com.czhj.sdk.common.utils.DeviceUtils.m = r0
            java.lang.String r0 = "private : AndroidId"
            com.czhj.sdk.logger.SigmobLog.d(r0)     // Catch: java.lang.Throwable -> L1c
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Throwable -> L1c
            java.lang.String r0 = "android_id"
            java.lang.String r1 = android.provider.Settings.Secure.getString(r1, r0)     // Catch: java.lang.Throwable -> L1c
            com.czhj.sdk.common.utils.DeviceUtils.m = r1     // Catch: java.lang.Throwable -> L1c
            goto L24
        L1c:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
        L24:
            java.lang.String r1 = com.czhj.sdk.common.utils.DeviceUtils.m
            return r1
    }

    public static java.lang.String getApkSha1OrMd5(android.content.Context r7, java.lang.String r8) {
            r0 = 0
            android.content.pm.PackageManager r1 = r7.getPackageManager()     // Catch: java.lang.Exception -> L61
            java.lang.String r7 = r7.getPackageName()     // Catch: java.lang.Exception -> L61
            r2 = 64
            android.content.pm.PackageInfo r7 = r1.getPackageInfo(r7, r2)     // Catch: java.lang.Exception -> L61
            if (r7 == 0) goto L69
            android.content.pm.Signature[] r1 = r7.signatures     // Catch: java.lang.Exception -> L61
            if (r1 == 0) goto L69
            android.content.pm.Signature[] r1 = r7.signatures     // Catch: java.lang.Exception -> L61
            int r1 = r1.length     // Catch: java.lang.Exception -> L61
            if (r1 <= 0) goto L69
            android.content.pm.Signature[] r7 = r7.signatures     // Catch: java.lang.Exception -> L61
            r1 = 0
            r7 = r7[r1]     // Catch: java.lang.Exception -> L61
            if (r7 == 0) goto L69
            byte[] r7 = r7.toByteArray()     // Catch: java.lang.Exception -> L61
            java.security.MessageDigest r8 = java.security.MessageDigest.getInstance(r8)     // Catch: java.lang.Exception -> L61
            if (r8 == 0) goto L69
            byte[] r7 = r8.digest(r7)     // Catch: java.lang.Exception -> L61
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L61
            r8.<init>()     // Catch: java.lang.Exception -> L61
            int r2 = r7.length     // Catch: java.lang.Exception -> L61
            r3 = r1
        L36:
            r4 = 1
            if (r3 >= r2) goto L57
            r5 = r7[r3]     // Catch: java.lang.Exception -> L61
            r5 = r5 & 255(0xff, float:3.57E-43)
            r5 = r5 | 256(0x100, float:3.59E-43)
            java.lang.String r5 = java.lang.Integer.toHexString(r5)     // Catch: java.lang.Exception -> L61
            r6 = 3
            java.lang.String r4 = r5.substring(r4, r6)     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = r4.toUpperCase()     // Catch: java.lang.Exception -> L61
            r8.append(r4)     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = ":"
            r8.append(r4)     // Catch: java.lang.Exception -> L61
            int r3 = r3 + 1
            goto L36
        L57:
            int r7 = r8.length()     // Catch: java.lang.Exception -> L61
            int r7 = r7 - r4
            java.lang.String r0 = r8.substring(r1, r7)     // Catch: java.lang.Exception -> L61
            goto L69
        L61:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r7)
        L69:
            return r0
    }

    public static int getAppLaunchCount(android.content.Context r9, java.lang.String r10) {
            java.lang.String r0 = "getAppLaunchCount=="
            android.content.pm.PackageManager r9 = r9.getPackageManager()
            r1 = 0
            android.content.Intent r9 = r9.getLaunchIntentForPackage(r10)     // Catch: java.lang.Exception -> Lbe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbe
            r2.<init>()     // Catch: java.lang.Exception -> Lbe
            r2.append(r0)     // Catch: java.lang.Exception -> Lbe
            r2.append(r10)     // Catch: java.lang.Exception -> Lbe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lbe
            com.czhj.sdk.logger.SigmobLog.d(r2)     // Catch: java.lang.Exception -> Lbe
            if (r9 != 0) goto L20
            return r1
        L20:
            android.content.ComponentName r9 = r9.getComponent()     // Catch: java.lang.Exception -> Lbe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbe
            r2.<init>()     // Catch: java.lang.Exception -> Lbe
            r2.append(r0)     // Catch: java.lang.Exception -> Lbe
            r2.append(r10)     // Catch: java.lang.Exception -> Lbe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lbe
            com.czhj.sdk.logger.SigmobLog.d(r2)     // Catch: java.lang.Exception -> Lbe
            java.lang.String r2 = "android.os.ServiceManager"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> Lbe
            java.lang.String r3 = "getService"
            r4 = 1
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> Lbe
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r1] = r6     // Catch: java.lang.Exception -> Lbe
            java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.Exception -> Lbe
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lbe
            java.lang.String r5 = "usagestats"
            r3[r1] = r5     // Catch: java.lang.Exception -> Lbe
            r5 = 0
            java.lang.Object r2 = r2.invoke(r5, r3)     // Catch: java.lang.Exception -> Lbe
            java.lang.String r3 = "com.android.internal.app.IUsageStats$Stub"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Exception -> Lbe
            java.lang.String r6 = "asInterface"
            java.lang.Class[] r7 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> Lbe
            java.lang.Class<android.os.IBinder> r8 = android.os.IBinder.class
            r7[r1] = r8     // Catch: java.lang.Exception -> Lbe
            java.lang.reflect.Method r3 = r3.getMethod(r6, r7)     // Catch: java.lang.Exception -> Lbe
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lbe
            r6[r1] = r2     // Catch: java.lang.Exception -> Lbe
            java.lang.Object r2 = r3.invoke(r5, r6)     // Catch: java.lang.Exception -> Lbe
            java.lang.Class r3 = r2.getClass()     // Catch: java.lang.Exception -> Lbe
            java.lang.String r5 = "getPkgUsageStats"
            java.lang.Class[] r6 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> Lbe
            java.lang.Class<android.content.ComponentName> r7 = android.content.ComponentName.class
            r6[r1] = r7     // Catch: java.lang.Exception -> Lbe
            java.lang.reflect.Method r3 = r3.getMethod(r5, r6)     // Catch: java.lang.Exception -> Lbe
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lbe
            r4[r1] = r9     // Catch: java.lang.Exception -> Lbe
            java.lang.Object r9 = r3.invoke(r2, r4)     // Catch: java.lang.Exception -> Lbe
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbe
            r2.<init>()     // Catch: java.lang.Exception -> Lbe
            r2.append(r0)     // Catch: java.lang.Exception -> Lbe
            r2.append(r10)     // Catch: java.lang.Exception -> Lbe
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lbe
            com.czhj.sdk.logger.SigmobLog.d(r2)     // Catch: java.lang.Exception -> Lbe
            if (r9 != 0) goto L9b
            return r1
        L9b:
            java.lang.String r2 = "com.android.internal.os.PkgUsageStats"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> Lbe
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbe
            r3.<init>()     // Catch: java.lang.Exception -> Lbe
            r3.append(r0)     // Catch: java.lang.Exception -> Lbe
            r3.append(r10)     // Catch: java.lang.Exception -> Lbe
            java.lang.String r10 = r3.toString()     // Catch: java.lang.Exception -> Lbe
            com.czhj.sdk.logger.SigmobLog.d(r10)     // Catch: java.lang.Exception -> Lbe
            java.lang.String r10 = "launchCount"
            java.lang.reflect.Field r10 = r2.getDeclaredField(r10)     // Catch: java.lang.Exception -> Lbe
            int r1 = r10.getInt(r9)     // Catch: java.lang.Exception -> Lbe
            goto Lc2
        Lbe:
            r9 = move-exception
            r9.printStackTrace()
        Lc2:
            return r1
    }

    public static float getBatteryLevel(android.content.Context r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 21
            if (r0 < r2) goto L1c
            java.lang.String r0 = "batterymanager"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.os.BatteryManager r3 = (android.os.BatteryManager) r3
            if (r3 != 0) goto L12
            return r1
        L12:
            r0 = 4
            int r3 = r3.getIntProperty(r0)
            float r3 = (float) r3
            r0 = 1120403456(0x42c80000, float:100.0)
            float r3 = r3 / r0
            return r3
        L1c:
            return r1
    }

    public static boolean getBatterySaveEnable(android.content.Context r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 21
            if (r0 < r2) goto L1c
            java.lang.String r0 = "batterymanager"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.os.BatteryManager r3 = (android.os.BatteryManager) r3
            if (r3 != 0) goto L12
            return r1
        L12:
            r0 = 4
            int r3 = r3.getIntProperty(r0)
            r0 = 16
            if (r3 >= r0) goto L1c
            r1 = 1
        L1c:
            return r1
    }

    public static int getBatteryState(android.content.Context r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 21
            if (r0 < r2) goto L30
            java.lang.String r0 = "batterymanager"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.os.BatteryManager r3 = (android.os.BatteryManager) r3
            if (r3 != 0) goto L12
            return r1
        L12:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r0 < r2) goto L1e
            r0 = 6
            int r3 = r3.getIntProperty(r0)
            goto L1f
        L1e:
            r3 = r1
        L1f:
            r0 = 2
            if (r3 == r0) goto L2f
            r0 = 3
            if (r3 == r0) goto L2d
            r2 = 4
            if (r3 == r2) goto L2d
            r2 = 5
            if (r3 == r2) goto L2c
            return r1
        L2c:
            return r0
        L2d:
            r3 = 1
            return r3
        L2f:
            return r0
        L30:
            return r1
    }

    public static java.lang.String getBlueToothName(android.content.Context r1) {
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.n
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1d
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = "bluetooth_name"
            java.lang.String r1 = android.provider.Settings.Secure.getString(r1, r0)     // Catch: java.lang.Throwable -> L15
            com.czhj.sdk.common.utils.DeviceUtils.n = r1     // Catch: java.lang.Throwable -> L15
            goto L1d
        L15:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
        L1d:
            java.lang.String r1 = com.czhj.sdk.common.utils.DeviceUtils.n
            return r1
    }

    public static long getBootSystemTime() {
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r0 = r0 - r2
            return r0
    }

    public static java.lang.String getCPUInfo() {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lf
            r1 = 21
            if (r0 < r1) goto Lc
            java.lang.String[] r0 = android.os.Build.SUPPORTED_ABIS     // Catch: java.lang.Throwable -> Lf
            r1 = 0
            r0 = r0[r1]     // Catch: java.lang.Throwable -> Lf
            return r0
        Lc:
            java.lang.String r0 = android.os.Build.CPU_ABI     // Catch: java.lang.Throwable -> Lf
            return r0
        Lf:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            r0 = 0
            return r0
    }

    public static java.lang.String getCell_ip() {
            java.util.Enumeration r0 = java.net.NetworkInterface.getNetworkInterfaces()     // Catch: java.lang.Exception -> L2f java.net.SocketException -> L34
        L4:
            boolean r1 = r0.hasMoreElements()     // Catch: java.lang.Exception -> L2f java.net.SocketException -> L34
            if (r1 == 0) goto L38
            java.lang.Object r1 = r0.nextElement()     // Catch: java.lang.Exception -> L2f java.net.SocketException -> L34
            java.net.NetworkInterface r1 = (java.net.NetworkInterface) r1     // Catch: java.lang.Exception -> L2f java.net.SocketException -> L34
            java.util.Enumeration r1 = r1.getInetAddresses()     // Catch: java.lang.Exception -> L2f java.net.SocketException -> L34
        L14:
            boolean r2 = r1.hasMoreElements()     // Catch: java.lang.Exception -> L2f java.net.SocketException -> L34
            if (r2 == 0) goto L4
            java.lang.Object r2 = r1.nextElement()     // Catch: java.lang.Exception -> L2f java.net.SocketException -> L34
            java.net.InetAddress r2 = (java.net.InetAddress) r2     // Catch: java.lang.Exception -> L2f java.net.SocketException -> L34
            boolean r3 = r2.isLoopbackAddress()     // Catch: java.lang.Exception -> L2f java.net.SocketException -> L34
            if (r3 != 0) goto L14
            boolean r3 = r2 instanceof java.net.Inet4Address     // Catch: java.lang.Exception -> L2f java.net.SocketException -> L34
            if (r3 == 0) goto L14
            java.lang.String r0 = r2.getHostAddress()     // Catch: java.lang.Exception -> L2f java.net.SocketException -> L34
            return r0
        L2f:
            r0 = move-exception
            r0.printStackTrace()
            goto L38
        L34:
            r0 = move-exception
            r0.printStackTrace()
        L38:
            java.lang.String r0 = "0.0.0.0"
            return r0
    }

    public static android.net.ConnectivityManager getConnectivityManager(android.content.Context r1) {
            if (r1 == 0) goto Lb
            java.lang.String r0 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static com.czhj.sdk.common.utils.DeviceUtils.NetworkType getDataNetworkType(android.content.Context r4) {
            java.lang.String r0 = "getDataNetworkType "
            com.czhj.sdk.logger.SigmobLog.d(r0)
            android.telephony.TelephonyManager r1 = getTelephonyManager(r4)
            if (r1 == 0) goto L1b
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 24
            if (r2 < r3) goto L16
            int r1 = r1.getDataNetworkType()
            goto L1c
        L16:
            int r1 = r1.getNetworkType()     // Catch: java.lang.Exception -> L1b
            goto L1c
        L1b:
            r1 = 0
        L1c:
            android.net.ConnectivityManager r4 = getConnectivityManager(r4)
            if (r1 != 0) goto L2e
            if (r4 == 0) goto L2e
            android.net.NetworkInfo r4 = r4.getActiveNetworkInfo()
            if (r4 == 0) goto L2e
            int r1 = r4.getSubtype()
        L2e:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            com.czhj.sdk.logger.SigmobLog.d(r4)
            r4 = 20
            if (r1 == r4) goto L53
            switch(r1) {
                case 1: goto L50;
                case 2: goto L50;
                case 3: goto L4d;
                case 4: goto L50;
                case 5: goto L4d;
                case 6: goto L4d;
                case 7: goto L50;
                case 8: goto L4d;
                case 9: goto L4d;
                case 10: goto L4d;
                case 11: goto L50;
                case 12: goto L4d;
                case 13: goto L4a;
                case 14: goto L4d;
                case 15: goto L4d;
                default: goto L47;
            }
        L47:
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r4 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE
            return r4
        L4a:
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r4 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE_4G
            return r4
        L4d:
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r4 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE_3G
            return r4
        L50:
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r4 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE_2G
            return r4
        L53:
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r4 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.MOBILE_5G
            return r4
    }

    public static float getDensityDpi(android.content.Context r0) {
            android.content.res.Resources r0 = r0.getResources()     // Catch: java.lang.Throwable -> Lc
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()     // Catch: java.lang.Throwable -> Lc
            int r0 = r0.densityDpi     // Catch: java.lang.Throwable -> Lc
            float r0 = (float) r0
            return r0
        Lc:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            r0 = 0
            return r0
    }

    public static java.lang.String getDeviceBrand() {
            java.lang.String r0 = android.os.Build.BRAND
            return r0
    }

    public static java.lang.String getDeviceDispaly() {
            java.lang.String r0 = android.os.Build.DISPLAY
            return r0
    }

    public static java.util.Locale getDeviceLocale(android.content.Context r0) {
            android.content.res.Resources r0 = r0.getResources()     // Catch: java.lang.Throwable -> Lb
            android.content.res.Configuration r0 = r0.getConfiguration()     // Catch: java.lang.Throwable -> Lb
            java.util.Locale r0 = r0.locale     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            r0 = 0
            return r0
    }

    public static java.lang.String getDeviceManufacturer() {
            java.lang.String r0 = android.os.Build.MANUFACTURER
            return r0
    }

    public static java.lang.String getDeviceModel() {
            java.lang.String r0 = android.os.Build.MODEL
            return r0
    }

    public static java.lang.String getDeviceName(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L1b
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L11
            java.lang.String r0 = "device_name"
            java.lang.String r2 = android.provider.Settings.Global.getString(r2, r0)     // Catch: java.lang.Throwable -> L11
            return r2
        L11:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r2)
            r2 = 0
            return r2
        L1b:
            java.lang.String r2 = getBlueToothName(r2)
            return r2
    }

    public static int getDeviceOSLevel() {
            int r0 = android.os.Build.VERSION.SDK_INT
            return r0
    }

    public static java.lang.String getDeviceOsVersion() {
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            return r0
    }

    public static int getDeviceScreenHeightDip(android.content.Context r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            int r0 = com.czhj.sdk.common.utils.Dips.screenHeightAsIntDips(r0)
            return r0
    }

    public static int getDeviceScreenRealHeightDip(android.content.Context r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            android.util.DisplayMetrics r0 = getRealMetrics(r1)
            int r0 = r0.heightPixels
            float r0 = (float) r0
            int r1 = com.czhj.sdk.common.utils.Dips.pixelsToIntDips(r0, r1)
            return r1
    }

    public static int getDeviceScreenRealWidthDip(android.content.Context r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            android.util.DisplayMetrics r0 = getRealMetrics(r1)
            int r0 = r0.widthPixels
            float r0 = (float) r0
            int r1 = com.czhj.sdk.common.utils.Dips.pixelsToIntDips(r0, r1)
            return r1
    }

    public static int getDeviceScreenWidthDip(android.content.Context r0) {
            int r0 = com.czhj.sdk.common.utils.Dips.screenWidthAsIntDips(r0)
            return r0
    }

    public static java.lang.String getDeviceSerial() {
            java.lang.String r0 = android.os.Build.SERIAL
            return r0
    }

    public static java.lang.String getDeviceType(android.content.Context r0) {
            boolean r0 = isTablet(r0)
            if (r0 == 0) goto L9
            java.lang.String r0 = "pad"
            goto Lb
        L9:
            java.lang.String r0 = "phone"
        Lb:
            return r0
    }

    public static android.util.DisplayMetrics getDisplayMetrics(android.content.Context r0) {
            android.content.res.Resources r0 = r0.getResources()     // Catch: java.lang.Throwable -> L9
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            r0 = 0
            return r0
    }

    public static java.lang.String getNetworkOperator(android.content.Context r2) {
            android.telephony.TelephonyManager r2 = getTelephonyManager(r2)
            if (r2 == 0) goto L1e
            int r0 = r2.getPhoneType()
            r1 = 2
            if (r0 != r1) goto L19
            int r0 = r2.getSimState()
            r1 = 5
            if (r0 != r1) goto L19
            java.lang.String r2 = r2.getSimOperator()
            return r2
        L19:
            java.lang.String r2 = r2.getNetworkOperator()
            return r2
        L1e:
            r2 = 0
            return r2
    }

    public static java.lang.String getNetworkOperatorForUrl(android.content.Context r0) {
            java.lang.String r0 = getNetworkOperator(r0)
            return r0
    }

    public static java.lang.String getNetworkOperatorName(android.content.Context r2) {
            android.telephony.TelephonyManager r2 = getTelephonyManager(r2)
            if (r2 == 0) goto L1e
            int r0 = r2.getPhoneType()
            r1 = 2
            if (r0 != r1) goto L19
            int r0 = r2.getSimState()
            r1 = 5
            if (r0 != r1) goto L19
            java.lang.String r2 = r2.getSimOperatorName()
            return r2
        L19:
            java.lang.String r2 = r2.getNetworkOperatorName()
            return r2
        L1e:
            r2 = 0
            return r2
    }

    public static int getOrientationInt(android.content.Context r0) {
            android.content.res.Resources r0 = r0.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            int r0 = r0.orientation
            return r0
    }

    public static java.lang.String getProperty(java.lang.String r7) {
            r0 = 0
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "get"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L22
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L22
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L22
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L22
            r2[r6] = r7     // Catch: java.lang.Throwable -> L22
            java.lang.Object r7 = r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> L22
            if (r7 == 0) goto L22
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L22
            r0 = r7
        L22:
            return r0
    }

    public static android.util.DisplayMetrics getRealMetrics(android.content.Context r7) {
            android.view.WindowManager r7 = getWindowManger(r7)
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            android.view.Display r7 = r7.getDefaultDisplay()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 17
            if (r1 < r2) goto L17
            r7.getRealMetrics(r0)
            goto L3b
        L17:
            java.lang.String r1 = "android.view.Display"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L33
            java.lang.String r2 = "getRealMetrics"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L33
            java.lang.Class<android.util.DisplayMetrics> r5 = android.util.DisplayMetrics.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L33
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L33
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L33
            r2[r6] = r0     // Catch: java.lang.Exception -> L33
            r1.invoke(r7, r2)     // Catch: java.lang.Exception -> L33
            goto L3b
        L33:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r7)
        L3b:
            return r0
    }

    public static java.lang.String getRotation(android.content.Context r2) {
            android.view.WindowManager r2 = getWindowManger(r2)
            java.lang.String r0 = "0"
            if (r2 != 0) goto L9
            return r0
        L9:
            android.view.Display r2 = r2.getDefaultDisplay()
            int r2 = r2.getRotation()
            r1 = 1
            if (r2 == r1) goto L21
            r1 = 2
            if (r2 == r1) goto L1e
            r1 = 3
            if (r2 == r1) goto L1b
            return r0
        L1b:
            java.lang.String r2 = "270"
            return r2
        L1e:
            java.lang.String r2 = "180"
            return r2
        L21:
            java.lang.String r2 = "90"
            return r2
    }

    public static java.lang.String getSDCardPath(android.content.Context r8) {
            java.lang.String r0 = "storage"
            java.lang.Object r8 = r8.getSystemService(r0)
            android.os.storage.StorageManager r8 = (android.os.storage.StorageManager) r8
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r1 = "getPath"
            r2 = 0
            r3 = 24
            if (r0 < r3) goto L47
            java.util.List r8 = r8.getStorageVolumes()
            java.util.Iterator r8 = r8.iterator()
        L19:
            boolean r0 = r8.hasNext()
            if (r0 == 0) goto L9a
            java.lang.Object r0 = r8.next()
            android.os.storage.StorageVolume r0 = (android.os.storage.StorageVolume) r0
            boolean r3 = r0.isRemovable()
            if (r3 == 0) goto L19
            java.lang.Class r3 = r0.getClass()     // Catch: java.lang.Exception -> L3e
            java.lang.Class[] r4 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L3e
            java.lang.reflect.Method r3 = r3.getMethod(r1, r4)     // Catch: java.lang.Exception -> L3e
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L3e
            java.lang.Object r0 = r3.invoke(r0, r4)     // Catch: java.lang.Exception -> L3e
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L3e
            return r0
        L3e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            goto L19
        L47:
            java.lang.Class r0 = r8.getClass()     // Catch: java.lang.Throwable -> L9a
            java.lang.String r3 = "getVolumeList"
            java.lang.Class[] r4 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L9a
            java.lang.reflect.Method r0 = r0.getMethod(r3, r4)     // Catch: java.lang.Throwable -> L9a
            java.lang.String r3 = "android.os.storage.StorageVolume"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L9a
            java.lang.Class[] r4 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L9a
            java.lang.reflect.Method r1 = r3.getMethod(r1, r4)     // Catch: java.lang.Throwable -> L9a
            java.lang.String r4 = "isRemovable"
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L9a
            java.lang.reflect.Method r3 = r3.getMethod(r4, r5)     // Catch: java.lang.Throwable -> L9a
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L9a
            java.lang.Object r8 = r0.invoke(r8, r4)     // Catch: java.lang.Throwable -> L9a
            int r0 = java.lang.reflect.Array.getLength(r8)     // Catch: java.lang.Throwable -> L9a
            r4 = r2
        L72:
            if (r4 >= r0) goto L9a
            java.lang.Object r5 = java.lang.reflect.Array.get(r8, r4)     // Catch: java.lang.Throwable -> L97
            java.lang.Object[] r6 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L97
            java.lang.Object r6 = r3.invoke(r5, r6)     // Catch: java.lang.Throwable -> L97
            boolean r7 = r6 instanceof java.lang.Boolean     // Catch: java.lang.Throwable -> L97
            if (r7 == 0) goto L97
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L97
            boolean r6 = r6.booleanValue()     // Catch: java.lang.Throwable -> L97
            if (r6 == 0) goto L97
            java.lang.Object[] r6 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L97
            java.lang.Object r5 = r1.invoke(r5, r6)     // Catch: java.lang.Throwable -> L97
            boolean r6 = r5 instanceof java.lang.String     // Catch: java.lang.Throwable -> L97
            if (r6 == 0) goto L97
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L97
            return r5
        L97:
            int r4 = r4 + 1
            goto L72
        L9a:
            r8 = 0
            return r8
    }

    public static long getSysteTotalMemorySize(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L1b
            r1 = 16
            if (r0 < r1) goto L23
            java.lang.String r0 = "activity"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Throwable -> L1b
            android.app.ActivityManager r2 = (android.app.ActivityManager) r2     // Catch: java.lang.Throwable -> L1b
            android.app.ActivityManager$MemoryInfo r0 = new android.app.ActivityManager$MemoryInfo     // Catch: java.lang.Throwable -> L1b
            r0.<init>()     // Catch: java.lang.Throwable -> L1b
            if (r2 == 0) goto L23
            r2.getMemoryInfo(r0)     // Catch: java.lang.Throwable -> L1b
            long r0 = r0.totalMem     // Catch: java.lang.Throwable -> L1b
            return r0
        L1b:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r2)
        L23:
            r0 = 0
            return r0
    }

    public static android.telephony.TelephonyManager getTelephonyManager(android.content.Context r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            boolean r1 = isCanUsePhoneState(r2)     // Catch: java.lang.Throwable -> Lb
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r0 = "phone"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2
            return r2
    }

    public static android.net.wifi.WifiManager getWifiManager(android.content.Context r1) {
            if (r1 == 0) goto L11
            boolean r0 = isCanUseWifiState(r1)
            if (r0 == 0) goto L11
            java.lang.String r0 = "wifi"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.net.wifi.WifiManager r1 = (android.net.wifi.WifiManager) r1
            return r1
        L11:
            r1 = 0
            return r1
    }

    public static android.view.WindowManager getWindowManger(android.content.Context r1) {
            java.lang.String r0 = "window"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.view.WindowManager r1 = (android.view.WindowManager) r1
            return r1
    }

    public static boolean isCanRetryIMEI() {
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.czhj.sdk.common.utils.DeviceUtils.q
            long r0 = r0 - r2
            r2 = 30000(0x7530, double:1.4822E-319)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            if (r0 == 0) goto L18
            long r1 = java.lang.System.currentTimeMillis()
            com.czhj.sdk.common.utils.DeviceUtils.q = r1
        L18:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "isCanRetryIMEI status "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.d(r1)
            return r0
    }

    public static boolean isCanRetryLocation() {
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.czhj.sdk.common.utils.DeviceUtils.s
            long r0 = r0 - r2
            r2 = 36000(0x8ca0, double:1.77864E-319)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            if (r0 == 0) goto L19
            long r1 = java.lang.System.currentTimeMillis()
            com.czhj.sdk.common.utils.DeviceUtils.s = r1
        L19:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "isCanRetryLocation status "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.d(r1)
            return r0
    }

    public static boolean isCanRetryWIFI() {
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.czhj.sdk.common.utils.DeviceUtils.t
            long r0 = r0 - r2
            r2 = 30000(0x7530, double:1.4822E-319)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            if (r0 == 0) goto L18
            long r1 = java.lang.System.currentTimeMillis()
            com.czhj.sdk.common.utils.DeviceUtils.t = r1
        L18:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "isCanRetryWIFI status "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.d(r1)
            return r0
    }

    public static boolean isCanUseLocation(android.content.Context r2) {
            java.lang.String r0 = "android.permission.ACCESS_COARSE_LOCATION"
            int r0 = r2.checkCallingOrSelfPermission(r0)
            if (r0 == 0) goto L13
            java.lang.String r0 = "android.permission.ACCESS_FINE_LOCATION"
            int r2 = r2.checkCallingOrSelfPermission(r0)
            if (r2 != 0) goto L11
            goto L13
        L11:
            r2 = 0
            goto L14
        L13:
            r2 = 1
        L14:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isCanUseLocation status "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            return r2
    }

    public static boolean isCanUsePhoneState(android.content.Context r2) {
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            int r2 = r2.checkCallingOrSelfPermission(r0)
            if (r2 != 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isCanUsePhoneState status "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            return r2
    }

    public static boolean isCanUseWifiState(android.content.Context r2) {
            java.lang.String r0 = "android.permission.ACCESS_WIFI_STATE"
            int r2 = r2.checkCallingOrSelfPermission(r0)
            if (r2 != 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isCanUseWifiState status "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            return r2
    }

    public static boolean isCanUseWriteExternal(android.content.Context r2) {
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            int r2 = r2.checkCallingOrSelfPermission(r0)
            if (r2 != 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isCanUseWriteExternal status "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            return r2
    }

    public static boolean isEmulator() {
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.j
            r1 = 3
            r2 = 0
            r3 = 1
            if (r0 <= 0) goto Lb
            if (r0 <= r1) goto La
            r2 = r3
        La:
            return r2
        Lb:
            java.lang.String r0 = "gsm.version.baseband"
            java.lang.String r0 = getProperty(r0)     // Catch: java.lang.Throwable -> Le9
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le9
            if (r4 != 0) goto L1f
            java.lang.String r4 = "1.0.0.0"
            boolean r0 = r0.contains(r4)     // Catch: java.lang.Throwable -> Le9
            if (r0 == 0) goto L24
        L1f:
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.j     // Catch: java.lang.Throwable -> Le9
            int r0 = r0 + r3
            com.czhj.sdk.common.utils.DeviceUtils.j = r0     // Catch: java.lang.Throwable -> Le9
        L24:
            java.lang.String r0 = "ro.build.flavor"
            java.lang.String r0 = getProperty(r0)     // Catch: java.lang.Throwable -> Le9
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le9
            if (r4 == 0) goto L36
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.j     // Catch: java.lang.Throwable -> Le9
            int r0 = r0 + r3
            com.czhj.sdk.common.utils.DeviceUtils.j = r0     // Catch: java.lang.Throwable -> Le9
            goto L4c
        L36:
            java.lang.String r4 = "vbox"
            boolean r4 = r0.contains(r4)     // Catch: java.lang.Throwable -> Le9
            if (r4 != 0) goto L46
            java.lang.String r4 = "sdk_gphone"
            boolean r0 = r0.contains(r4)     // Catch: java.lang.Throwable -> Le9
            if (r0 == 0) goto L4c
        L46:
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.j     // Catch: java.lang.Throwable -> Le9
            int r0 = r0 + 10
            com.czhj.sdk.common.utils.DeviceUtils.j = r0     // Catch: java.lang.Throwable -> Le9
        L4c:
            java.lang.String r0 = "ro.product.board"
            java.lang.String r0 = getProperty(r0)     // Catch: java.lang.Throwable -> Le9
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r5 = "android"
            if (r4 == 0) goto L60
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.j     // Catch: java.lang.Throwable -> Le9
            int r0 = r0 + r3
            com.czhj.sdk.common.utils.DeviceUtils.j = r0     // Catch: java.lang.Throwable -> Le9
            goto L74
        L60:
            boolean r4 = r0.contains(r5)     // Catch: java.lang.Throwable -> Le9
            if (r4 != 0) goto L6e
            java.lang.String r4 = "goldfish"
            boolean r0 = r0.contains(r4)     // Catch: java.lang.Throwable -> Le9
            if (r0 == 0) goto L74
        L6e:
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.j     // Catch: java.lang.Throwable -> Le9
            int r0 = r0 + 10
            com.czhj.sdk.common.utils.DeviceUtils.j = r0     // Catch: java.lang.Throwable -> Le9
        L74:
            java.lang.String r0 = "ro.board.platform"
            java.lang.String r0 = getProperty(r0)     // Catch: java.lang.Throwable -> Le9
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le9
            if (r4 != 0) goto L86
            boolean r0 = r0.contains(r5)     // Catch: java.lang.Throwable -> Le9
            if (r0 == 0) goto L8b
        L86:
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.j     // Catch: java.lang.Throwable -> Le9
            int r0 = r0 + r3
            com.czhj.sdk.common.utils.DeviceUtils.j = r0     // Catch: java.lang.Throwable -> Le9
        L8b:
            java.lang.String r0 = "ro.hardware"
            java.lang.String r0 = getProperty(r0)     // Catch: java.lang.Throwable -> Le9
            if (r0 != 0) goto L99
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.j     // Catch: java.lang.Throwable -> Le9
            int r0 = r0 + r3
            com.czhj.sdk.common.utils.DeviceUtils.j = r0     // Catch: java.lang.Throwable -> Le9
            goto Lb9
        L99:
            java.lang.String r4 = r0.toLowerCase()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r5 = "ttvm"
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Throwable -> Le9
            if (r4 == 0) goto Lac
        La5:
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.j     // Catch: java.lang.Throwable -> Le9
            int r0 = r0 + 10
            com.czhj.sdk.common.utils.DeviceUtils.j = r0     // Catch: java.lang.Throwable -> Le9
            goto Lb9
        Lac:
            java.lang.String r0 = r0.toLowerCase()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r4 = "nox"
            boolean r0 = r0.contains(r4)     // Catch: java.lang.Throwable -> Le9
            if (r0 == 0) goto Lb9
            goto La5
        Lb9:
            java.lang.String[] r0 = com.czhj.sdk.common.utils.DeviceUtils.a     // Catch: java.lang.Throwable -> Le9
            int r4 = r0.length     // Catch: java.lang.Throwable -> Le9
            r5 = r2
        Lbd:
            if (r5 >= r4) goto Le9
            r6 = r0[r5]     // Catch: java.lang.Throwable -> Le9
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> Le9
            r7.<init>(r6)     // Catch: java.lang.Throwable -> Le9
            boolean r7 = r7.exists()     // Catch: java.lang.Throwable -> Le9
            if (r7 == 0) goto Le6
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le9
            r7.<init>()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r8 = "find emulator "
            r7.append(r8)     // Catch: java.lang.Throwable -> Le9
            r7.append(r6)     // Catch: java.lang.Throwable -> Le9
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> Le9
            com.czhj.sdk.logger.SigmobLog.e(r6)     // Catch: java.lang.Throwable -> Le9
            int r6 = com.czhj.sdk.common.utils.DeviceUtils.j     // Catch: java.lang.Throwable -> Le9
            int r6 = r6 + 10
            com.czhj.sdk.common.utils.DeviceUtils.j = r6     // Catch: java.lang.Throwable -> Le9
        Le6:
            int r5 = r5 + 1
            goto Lbd
        Le9:
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.j
            if (r0 <= r1) goto Lee
            r2 = r3
        Lee:
            return r2
    }

    public static boolean isNetworkConnected() {
            boolean r0 = com.czhj.sdk.common.utils.DeviceUtils.p
            return r0
    }

    public static boolean isNetworkValid(android.net.NetworkCapabilities r4) {
            r0 = 0
            if (r4 == 0) goto L35
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L35
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            if (r1 < r2) goto L16
            r1 = 16
            boolean r1 = r4.hasCapability(r1)
            goto L17
        L16:
            r1 = r0
        L17:
            r2 = 1
            boolean r3 = r4.hasTransport(r2)
            if (r3 != 0) goto L34
            boolean r3 = r4.hasTransport(r0)
            if (r3 != 0) goto L34
            r3 = 3
            boolean r3 = r4.hasTransport(r3)
            if (r3 != 0) goto L34
            r3 = 4
            boolean r4 = r4.hasTransport(r3)
            if (r4 != 0) goto L34
            if (r1 == 0) goto L35
        L34:
            r0 = r2
        L35:
            return r0
    }

    public static boolean isRoot() {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "/system/bin/su"
            r0.<init>(r1)
            boolean r0 = r0.exists()
            if (r0 == 0) goto L13
            boolean r0 = a(r1)
            if (r0 != 0) goto L26
        L13:
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "/system/xbin/su"
            r0.<init>(r1)
            boolean r0 = r0.exists()
            if (r0 == 0) goto L28
            boolean r0 = a(r1)
            if (r0 == 0) goto L28
        L26:
            r0 = 1
            goto L29
        L28:
            r0 = 0
        L29:
            return r0
    }

    public static boolean isTablet(android.content.Context r1) {
            android.content.res.Resources r1 = r1.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            int r1 = r1.screenLayout
            r1 = r1 & 15
            r0 = 3
            if (r1 < r0) goto L11
            r1 = 1
            goto L12
        L11:
            r1 = 0
        L12:
            return r1
    }

    public static int memoryCacheSizeBytes(android.content.Context r7) {
            java.lang.String r0 = "activity"
            java.lang.Object r0 = r7.getSystemService(r0)
            android.app.ActivityManager r0 = (android.app.ActivityManager) r0
            if (r0 != 0) goto Lc
            r7 = 0
            return r7
        Lc:
            int r1 = r0.getMemoryClass()
            long r1 = (long) r1
            java.lang.Class<android.content.pm.ApplicationInfo> r3 = android.content.pm.ApplicationInfo.class
            java.lang.String r4 = "FLAG_LARGE_HEAP"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.Throwable -> L3e
            r4 = 0
            int r3 = r3.getInt(r4)     // Catch: java.lang.Throwable -> L3e
            android.content.pm.ApplicationInfo r7 = r7.getApplicationInfo()     // Catch: java.lang.Throwable -> L3e
            int r7 = r7.flags     // Catch: java.lang.Throwable -> L3e
            boolean r7 = a(r7, r3)     // Catch: java.lang.Throwable -> L3e
            if (r7 == 0) goto L43
            com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder r7 = new com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder     // Catch: java.lang.Throwable -> L3e
            java.lang.String r3 = "getLargeMemoryClass"
            r7.<init>(r0, r3)     // Catch: java.lang.Throwable -> L3e
            java.lang.Object r7 = r7.execute()     // Catch: java.lang.Throwable -> L3e
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L3e
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> L3e
            long r0 = (long) r7
            r1 = r0
            goto L43
        L3e:
            java.lang.String r7 = "Unable to reflectively determine large heap size."
            com.czhj.sdk.logger.SigmobLog.d(r7)
        L43:
            r3 = 31457280(0x1e00000, double:1.55419614E-316)
            r5 = 8
            long r1 = r1 / r5
            r5 = 1024(0x400, double:5.06E-321)
            long r1 = r1 * r5
            long r1 = r1 * r5
            long r0 = java.lang.Math.min(r3, r1)
            int r7 = (int) r0
            return r7
    }

    public static void registerNetworkChange(android.content.Context r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L16
            com.czhj.sdk.common.utils.DeviceUtils$NetBroadcastReceiver r0 = new com.czhj.sdk.common.utils.DeviceUtils$NetBroadcastReceiver
            r0.<init>()
            android.content.IntentFilter r1 = new android.content.IntentFilter
            java.lang.String r2 = "android.net.conn.CONNECTIVITY_CHANGE"
            r1.<init>(r2)
            r3.registerReceiver(r0, r1)
            goto L3e
        L16:
            android.net.NetworkRequest$Builder r0 = new android.net.NetworkRequest$Builder
            r0.<init>()
            r1 = 12
            android.net.NetworkRequest$Builder r0 = r0.addCapability(r1)
            r1 = 0
            android.net.NetworkRequest$Builder r0 = r0.addTransportType(r1)
            r1 = 1
            android.net.NetworkRequest$Builder r0 = r0.addTransportType(r1)
            android.net.NetworkRequest r0 = r0.build()
            android.net.ConnectivityManager r1 = getConnectivityManager(r3)
            if (r1 != 0) goto L36
            return
        L36:
            com.czhj.sdk.common.utils.DeviceUtils$1 r2 = new com.czhj.sdk.common.utils.DeviceUtils$1
            r2.<init>(r3)
            r1.registerNetworkCallback(r0, r2)
        L3e:
            return
    }

    public static void resetRetryIMEI() {
            r0 = 0
            com.czhj.sdk.common.utils.DeviceUtils.q = r0
            return
    }

    public static void updateNetworkType(android.content.Context r4) {
            boolean r0 = a(r4)     // Catch: java.lang.Exception -> Ld6
            if (r0 != 0) goto L7
            return
        L7:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> Ld6
            r1 = 23
            if (r0 < r1) goto Lb9
            android.net.ConnectivityManager r0 = getConnectivityManager(r4)     // Catch: java.lang.Exception -> Ld6
            android.net.Network r0 = r0.getActiveNetwork()     // Catch: java.lang.Exception -> Ld6
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L3a
            android.net.Network r3 = com.czhj.sdk.common.utils.DeviceUtils.v     // Catch: java.lang.Exception -> Ld6
            if (r0 == r3) goto L3a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld6
            r1.<init>()     // Catch: java.lang.Exception -> Ld6
            java.lang.String r3 = " updateNetworkType activeNetwork "
            r1.append(r3)     // Catch: java.lang.Exception -> Ld6
            r1.append(r0)     // Catch: java.lang.Exception -> Ld6
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Ld6
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Exception -> Ld6
            android.net.ConnectivityManager r1 = getConnectivityManager(r4)     // Catch: java.lang.Exception -> Ld6
            android.net.NetworkCapabilities r0 = r1.getNetworkCapabilities(r0)     // Catch: java.lang.Exception -> Ld6
            goto L5f
        L3a:
            java.lang.String r0 = " updateNetworkType activeNetwork is null"
            com.czhj.sdk.logger.SigmobLog.d(r0)     // Catch: java.lang.Exception -> Ld6
            java.util.ArrayList<android.net.Network> r0 = com.czhj.sdk.common.utils.DeviceUtils.u     // Catch: java.lang.Exception -> Ld6
            int r0 = r0.size()     // Catch: java.lang.Exception -> Ld6
            int r0 = r0 - r2
        L46:
            if (r0 < 0) goto L5e
            java.util.ArrayList<android.net.Network> r1 = com.czhj.sdk.common.utils.DeviceUtils.u     // Catch: java.lang.Exception -> Ld6
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Exception -> Ld6
            android.net.Network r1 = (android.net.Network) r1     // Catch: java.lang.Exception -> Ld6
            android.net.ConnectivityManager r3 = getConnectivityManager(r4)     // Catch: java.lang.Exception -> Ld6
            android.net.NetworkCapabilities r1 = r3.getNetworkCapabilities(r1)     // Catch: java.lang.Exception -> Ld6
            if (r1 == 0) goto L5b
            goto L5e
        L5b:
            int r0 = r0 + (-1)
            goto L46
        L5e:
            r0 = r1
        L5f:
            if (r0 == 0) goto Ld6
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld6
            r1.<init>()     // Catch: java.lang.Exception -> Ld6
            java.lang.String r3 = "updateNetworkType "
            r1.append(r3)     // Catch: java.lang.Exception -> Ld6
            r1.append(r0)     // Catch: java.lang.Exception -> Ld6
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Ld6
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Exception -> Ld6
            boolean r1 = isNetworkValid(r0)     // Catch: java.lang.Exception -> Ld6
            com.czhj.sdk.common.utils.DeviceUtils.p = r1     // Catch: java.lang.Exception -> Ld6
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld6
            r1.<init>()     // Catch: java.lang.Exception -> Ld6
            java.lang.String r3 = "updateNetworkType misNetworkConnected "
            r1.append(r3)     // Catch: java.lang.Exception -> Ld6
            boolean r3 = com.czhj.sdk.common.utils.DeviceUtils.p     // Catch: java.lang.Exception -> Ld6
            r1.append(r3)     // Catch: java.lang.Exception -> Ld6
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Ld6
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Exception -> Ld6
            r1 = 12
            boolean r3 = r0.hasCapability(r1)     // Catch: java.lang.Exception -> Ld6
            if (r3 == 0) goto La4
            boolean r2 = r0.hasTransport(r2)     // Catch: java.lang.Exception -> Ld6
            if (r2 == 0) goto La4
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r4 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.WIFI     // Catch: java.lang.Exception -> Ld6
        La1:
            com.czhj.sdk.common.utils.DeviceUtils.o = r4     // Catch: java.lang.Exception -> Ld6
            goto Ld6
        La4:
            boolean r1 = r0.hasCapability(r1)     // Catch: java.lang.Exception -> Ld6
            if (r1 == 0) goto Lb6
            r1 = 0
            boolean r0 = r0.hasTransport(r1)     // Catch: java.lang.Exception -> Ld6
            if (r0 == 0) goto Lb6
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r4 = getDataNetworkType(r4)     // Catch: java.lang.Exception -> Ld6
            goto La1
        Lb6:
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r4 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.UNKNOWN     // Catch: java.lang.Exception -> Ld6
            goto La1
        Lb9:
            android.net.ConnectivityManager r0 = getConnectivityManager(r4)     // Catch: java.lang.Exception -> Ld6
            android.net.NetworkInfo r0 = r0.getActiveNetworkInfo()     // Catch: java.lang.Exception -> Ld6
            if (r0 == 0) goto Lc9
            boolean r1 = r0.isAvailable()     // Catch: java.lang.Exception -> Ld6
            com.czhj.sdk.common.utils.DeviceUtils.p = r1     // Catch: java.lang.Exception -> Ld6
        Lc9:
            if (r0 == 0) goto Ld0
            int r0 = r0.getType()     // Catch: java.lang.Exception -> Ld6
            goto Ld1
        Ld0:
            r0 = -1
        Ld1:
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r4 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.a(r4, r0)     // Catch: java.lang.Exception -> Ld6
            goto La1
        Ld6:
            return
    }
}
