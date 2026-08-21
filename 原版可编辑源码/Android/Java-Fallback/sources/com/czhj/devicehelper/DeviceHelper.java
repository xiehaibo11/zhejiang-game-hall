package com.czhj.devicehelper;

public final class DeviceHelper {
    private static final java.lang.String a = "getSimState";
    private static final java.lang.String b = "getImei";
    private static final java.lang.String c = "getLine1Number";
    private static java.lang.String d = null;
    private static java.lang.String e = null;
    private static java.lang.String f = null;
    private static java.lang.String g = "";
    private static long h;
    private static long i;
    private static android.os.Handler j;
    private static android.os.Handler k;
    private static int l;
    private static boolean m;
    private static java.lang.String n;
    private static java.lang.String o;
    private static java.lang.String p;
    private static java.lang.Thread q;
    private static java.lang.Thread r;
    private static boolean s;
    private static int t;



    static {
            return
    }

    public DeviceHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.os.Handler a(android.os.Handler r0) {
            com.czhj.devicehelper.DeviceHelper.j = r0
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.czhj.devicehelper.DeviceHelper.g
            return r0
    }

    static java.lang.String a(java.lang.String r0) {
            com.czhj.devicehelper.DeviceHelper.g = r0
            return r0
    }

    static java.lang.Thread a(java.lang.Thread r0) {
            com.czhj.devicehelper.DeviceHelper.q = r0
            return r0
    }

    static boolean a(boolean r0) {
            com.czhj.devicehelper.DeviceHelper.m = r0
            return r0
    }

    static android.os.Handler b() {
            android.os.Handler r0 = com.czhj.devicehelper.DeviceHelper.j
            return r0
    }

    static java.lang.String b(java.lang.String r0) {
            com.czhj.devicehelper.DeviceHelper.d = r0
            return r0
    }

    static boolean b(boolean r0) {
            com.czhj.devicehelper.DeviceHelper.s = r0
            return r0
    }

    public static java.lang.String getIMEI(android.content.Context r3) {
            r0 = 0
            java.lang.String r1 = "private :getIMEI"
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Exception -> L32
            java.lang.String r1 = "phone"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Exception -> L32
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Exception -> L32
            if (r3 != 0) goto L11
            return r0
        L11:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L32
            r2 = 26
            if (r1 < r2) goto L2b
            java.lang.String r1 = r3.getImei()     // Catch: java.lang.Exception -> L32
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L32
            if (r2 == 0) goto L2f
            java.lang.String r3 = r3.getDeviceId()     // Catch: java.lang.Throwable -> L26
            return r3
        L26:
            java.lang.String r3 = r3.getMeid()     // Catch: java.lang.Exception -> L32
            return r3
        L2b:
            java.lang.String r1 = r3.getDeviceId()     // Catch: java.lang.Exception -> L32
        L2f:
            if (r1 == 0) goto L32
            return r1
        L32:
            return r0
    }

    public static java.lang.String getIMEI(android.content.Context r3, int r4) {
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L41
            r1.<init>()     // Catch: java.lang.Exception -> L41
            java.lang.String r2 = "private :getIMEI "
            r1.append(r2)     // Catch: java.lang.Exception -> L41
            r1.append(r4)     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L41
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = "phone"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Exception -> L41
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Exception -> L41
            if (r3 != 0) goto L20
            return r0
        L20:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L41
            r2 = 26
            if (r1 < r2) goto L3a
            java.lang.String r1 = r3.getImei(r4)     // Catch: java.lang.Exception -> L41
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L41
            if (r2 == 0) goto L3e
            java.lang.String r3 = r3.getDeviceId(r4)     // Catch: java.lang.Throwable -> L35
            return r3
        L35:
            java.lang.String r3 = r3.getMeid(r4)     // Catch: java.lang.Exception -> L41
            return r3
        L3a:
            java.lang.String r1 = r3.getDeviceId()     // Catch: java.lang.Exception -> L41
        L3e:
            if (r1 == 0) goto L41
            return r1
        L41:
            return r0
    }

    public static java.lang.String getIMSI(android.content.Context r0) {
            r0 = 0
            return r0
    }

    public static java.lang.String getMacAddress() {
            java.lang.String r0 = ""
            return r0
    }

    public static void getOAID(android.content.Context r4, com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater r5) {
            java.lang.String r0 = com.czhj.devicehelper.DeviceHelper.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L4a
            int r0 = com.czhj.devicehelper.DeviceHelper.t
            r1 = 10
            if (r0 > r1) goto L42
            boolean r0 = com.czhj.devicehelper.DeviceHelper.s
            if (r0 != 0) goto L42
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.czhj.devicehelper.DeviceHelper.h
            long r0 = r0 - r2
            r2 = 1000(0x3e8, double:4.94E-321)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L20
            goto L42
        L20:
            long r0 = java.lang.System.currentTimeMillis()
            com.czhj.devicehelper.DeviceHelper.h = r0
            java.lang.Thread r0 = com.czhj.devicehelper.DeviceHelper.r
            if (r0 != 0) goto L51
            java.lang.Thread r0 = new java.lang.Thread
            com.czhj.devicehelper.DeviceHelper$2 r1 = new com.czhj.devicehelper.DeviceHelper$2
            r1.<init>(r4, r5)
            r0.<init>(r1)
            com.czhj.devicehelper.DeviceHelper.r = r0
            r0.start()
            int r4 = com.czhj.devicehelper.DeviceHelper.t
            r5 = 1
            int r4 = r4 + r5
            com.czhj.devicehelper.DeviceHelper.t = r4
            com.czhj.devicehelper.DeviceHelper.s = r5
            goto L51
        L42:
            if (r5 == 0) goto L49
            java.lang.String r4 = ""
            r5.OnIdsAvalid(r4)
        L49:
            return
        L4a:
            if (r5 == 0) goto L51
            java.lang.String r4 = com.czhj.devicehelper.DeviceHelper.e
            r5.OnIdsAvalid(r4)
        L51:
            return
    }

    public static void getOAID_API(android.content.Context r4, com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater r5) {
            java.lang.String r0 = com.czhj.devicehelper.DeviceHelper.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L4a
            int r0 = com.czhj.devicehelper.DeviceHelper.l
            r1 = 10
            if (r0 > r1) goto L42
            boolean r0 = com.czhj.devicehelper.DeviceHelper.m
            if (r0 != 0) goto L42
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.czhj.devicehelper.DeviceHelper.i
            long r0 = r0 - r2
            r2 = 1000(0x3e8, double:4.94E-321)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L20
            goto L42
        L20:
            long r0 = java.lang.System.currentTimeMillis()
            com.czhj.devicehelper.DeviceHelper.i = r0
            java.lang.Thread r0 = com.czhj.devicehelper.DeviceHelper.q
            if (r0 != 0) goto L39
            java.lang.Thread r0 = new java.lang.Thread
            com.czhj.devicehelper.DeviceHelper$1 r1 = new com.czhj.devicehelper.DeviceHelper$1
            r1.<init>(r4, r5)
            r0.<init>(r1)
            com.czhj.devicehelper.DeviceHelper.q = r0
            r0.start()
        L39:
            int r4 = com.czhj.devicehelper.DeviceHelper.l
            r5 = 1
            int r4 = r4 + r5
            com.czhj.devicehelper.DeviceHelper.l = r4
            com.czhj.devicehelper.DeviceHelper.m = r5
            goto L51
        L42:
            if (r5 == 0) goto L49
            java.lang.String r4 = ""
            r5.OnIdsAvalid(r4)
        L49:
            return
        L4a:
            if (r5 == 0) goto L51
            java.lang.String r4 = com.czhj.devicehelper.DeviceHelper.g
            r5.OnIdsAvalid(r4)
        L51:
            return
    }

    public static java.lang.String getVAID() {
            java.lang.String r0 = com.czhj.devicehelper.DeviceHelper.f
            return r0
    }

    public static java.lang.String getWifiName(android.content.Context r0) {
            java.lang.String r0 = com.czhj.devicehelper.DeviceHelper.n
            return r0
    }

    public static java.lang.String getWifimac(android.content.Context r0) {
            java.lang.String r0 = ""
            return r0
    }
}
