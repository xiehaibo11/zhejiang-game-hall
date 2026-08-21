package com.reyun.tracking.sdk;

public class Tracking {
    private static final int HEART_BEAT_TIME = 0;
    public static final java.lang.String KEY_ACCOUNT = "account";
    public static final java.lang.String KEY_INSTALL_SEND_SUCCESS_TIME = "key_install_send_success_time";
    public static final java.lang.String KEY_INTERVAL = "interval";
    public static final java.lang.String KEY_TIME_TRACK = "time_track";
    public static boolean SEND_DATA_WITH_HEARTBEAT = false;
    private static final java.lang.String STR_UNKNOWN = "unknown";
    public static final java.lang.String TAG = "TrackingIO";
    private static final java.lang.String VALUE_FROM = "tkio";
    public static final java.lang.String XML_INSTALL = "tracking_install";
    public static final java.lang.String XML_INTERVAL = "tracking_interval";
    public static final java.lang.String XML_LOGIN = "tracking_login";
    public static final java.lang.String XML_PKG_INFO = "tracking_pkgInfo";
    private static boolean _antiCheat = false;
    private static java.util.Map _installParams = null;
    private static java.lang.String _oid = null;
    private static java.util.Map _startupParams = null;
    private static com.reyun.tracking.utils.IAttributionQueryListener attributionQueryListener = null;
    private static java.lang.Runnable dataShareRunnable = null;
    private static com.reyun.tracking.utils.IDeepLinkListener deepLinkListener = null;
    private static boolean isInstallSent = false;
    private static boolean isPreInit = false;
    private static boolean isSDKInited = false;
    private static volatile boolean isSdkExit = false;
    private static android.app.Application mApplication = null;
    private static java.lang.String m_appKey = null;
    private static java.lang.String m_channelid = "_default_";
    private static android.content.Context m_context = null;
    private static android.os.Handler myTimehandler = null;
    private static android.os.Handler mydbhandler = null;
    private static com.reyun.tracking.sdk.p onDataUploadListener = null;
    private static com.reyun.tracking.sdk.o onSDKInitCompleteListener = null;
    private static java.lang.String sCyid = null;
    private static java.util.Map sInstallParams = null;
    private static boolean uploadMac = true;

    static {
            boolean r0 = com.reyun.tracking.a.i.a
            if (r0 == 0) goto L7
            r0 = 10000(0x2710, float:1.4013E-41)
            goto L9
        L7:
            r0 = 3000(0xbb8, float:4.204E-42)
        L9:
            com.reyun.tracking.sdk.Tracking.HEART_BEAT_TIME = r0
            r0 = 0
            com.reyun.tracking.sdk.Tracking.isSDKInited = r0
            com.reyun.tracking.sdk.d r0 = new com.reyun.tracking.sdk.d
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.reyun.tracking.sdk.Tracking.myTimehandler = r0
            com.reyun.tracking.sdk.i r0 = new com.reyun.tracking.sdk.i
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.reyun.tracking.sdk.Tracking.mydbhandler = r0
            return
    }

    public Tracking() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.content.Context access$000() {
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.m_context
            return r0
    }

    static android.content.Context access$002(android.content.Context r0) {
            com.reyun.tracking.sdk.Tracking.m_context = r0
            return r0
    }

    static java.lang.String access$100() {
            java.lang.String r0 = com.reyun.tracking.sdk.Tracking.m_appKey
            return r0
    }

    static android.os.Handler access$1000() {
            android.os.Handler r0 = com.reyun.tracking.sdk.Tracking.myTimehandler
            return r0
    }

    static java.lang.String access$1100() {
            java.lang.String r0 = com.reyun.tracking.sdk.Tracking._oid
            return r0
    }

    static android.app.Application access$1302(android.app.Application r0) {
            com.reyun.tracking.sdk.Tracking.mApplication = r0
            return r0
    }

    static int access$1400(int r0) {
            int r0 = sendFailureRecord(r0)
            return r0
    }

    static int access$1500() {
            int r0 = com.reyun.tracking.sdk.Tracking.HEART_BEAT_TIME
            return r0
    }

    static java.lang.String access$200() {
            java.lang.String r0 = com.reyun.tracking.sdk.Tracking.m_channelid
            return r0
    }

    static java.util.Map access$300() {
            java.util.Map r0 = com.reyun.tracking.sdk.Tracking.sInstallParams
            return r0
    }

    static void access$400(java.lang.String r0, java.lang.String r1, org.json.JSONObject r2, java.lang.String r3, int r4, java.util.Map r5) {
            sendOrSava(r0, r1, r2, r3, r4, r5)
            return
    }

    static boolean access$502(boolean r0) {
            com.reyun.tracking.sdk.Tracking.isInstallSent = r0
            return r0
    }

    static java.util.Map access$600() {
            java.util.Map r0 = com.reyun.tracking.sdk.Tracking._startupParams
            return r0
    }

    static java.util.Map access$700() {
            java.util.Map r0 = com.reyun.tracking.sdk.Tracking._installParams
            return r0
    }

    static boolean access$800() {
            boolean r0 = com.reyun.tracking.sdk.Tracking._antiCheat
            return r0
    }

    static void access$900(java.util.Map r0, java.util.Map r1, boolean r2) {
            afterInit(r0, r1, r2)
            return
    }

    public static void activation() {
            boolean r0 = com.reyun.tracking.sdk.Tracking.isSDKInited
            if (r0 != 0) goto Lc
            java.lang.String r0 = "TrackingIO"
            java.lang.String r1 = "必须先调用初始化方法"
            android.util.Log.e(r0, r1)
            return
        Lc:
            com.reyun.tracking.sdk.e r0 = new com.reyun.tracking.sdk.e
            r0.<init>()
            com.reyun.tracking.sdk.a r1 = com.reyun.tracking.sdk.a.a()
            com.reyun.tracking.sdk.m r2 = new com.reyun.tracking.sdk.m
            r2.<init>(r0)
            r1.a(r2)
            return
    }

    public static long addRecordToDbase(java.lang.String r3, org.json.JSONObject r4, int r5) {
            java.lang.String r0 = "TrackingIO"
            byte[] r4 = jsonObjToByteArray(r4)     // Catch: java.lang.Throwable -> L29
            android.content.ContentValues r1 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L29
            r1.<init>()     // Catch: java.lang.Throwable -> L29
            java.lang.String r2 = "what"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L29
            java.lang.String r3 = "value"
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L29
            java.lang.String r3 = "priority"
            java.lang.Integer r4 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L29
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L29
            android.content.Context r3 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L29
            com.reyun.tracking.utils.i r3 = com.reyun.tracking.utils.i.a(r3, r0)     // Catch: java.lang.Throwable -> L29
            long r3 = r3.a(r1)     // Catch: java.lang.Throwable -> L29
            return r3
        L29:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Exception in addRecordToDbase:"
            r4.append(r5)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.reyun.tracking.a.a.b(r0, r3)
            r3 = -1
            return r3
    }

    private static void afterInit(java.util.Map r2, java.util.Map r3, boolean r4) {
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.m_context
            java.lang.String r1 = "TrackingIO"
            if (r0 != 0) goto Lc
            java.lang.String r2 = "context destoryed!"
            com.reyun.tracking.a.a.d(r1, r2)
            return
        Lc:
            com.reyun.tracking.sdk.o r0 = com.reyun.tracking.sdk.Tracking.onSDKInitCompleteListener
            if (r0 == 0) goto L13
            r0.a()
        L13:
            com.reyun.tracking.sdk.Tracking.sInstallParams = r3
            java.lang.String r3 = "afterInit"
            com.reyun.tracking.a.a.d(r1, r3)
            com.reyun.tracking.sdk.f r3 = new com.reyun.tracking.sdk.f
            r3.<init>(r2)
            android.content.Context r2 = com.reyun.tracking.sdk.Tracking.m_context
            java.lang.String r0 = "gettime"
            java.lang.String r1 = "receive/gettime"
            com.reyun.tracking.utils.d.a(r2, r0, r1, r3)
            if (r4 == 0) goto L34
            android.content.Context r2 = com.reyun.tracking.sdk.Tracking.m_context
            com.reyun.tracking.a.a.p(r2)
            android.content.Context r2 = com.reyun.tracking.sdk.Tracking.m_context
            com.reyun.tracking.a.a.q(r2)
        L34:
            return
    }

    public static void exitSdk() {
            r0 = 0
            com.reyun.tracking.sdk.Tracking.isSDKInited = r0
            com.reyun.tracking.a.a.e()
            com.reyun.tracking.a.a.d()
            com.reyun.tracking.utils.p.b()
            android.os.Handler r0 = com.reyun.tracking.sdk.Tracking.myTimehandler
            if (r0 == 0) goto L14
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
        L14:
            com.reyun.tracking.sdk.a r0 = com.reyun.tracking.sdk.a.a()
            com.reyun.tracking.sdk.h r1 = new com.reyun.tracking.sdk.h
            r1.<init>()
            r2 = 500(0x1f4, double:2.47E-321)
            r0.a(r1, r2)
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.m_context
            java.lang.String r1 = "TrackingIO"
            com.reyun.tracking.utils.i r0 = com.reyun.tracking.utils.i.a(r0, r1)
            r0.a()
            return
    }

    public static java.lang.String getAppId() {
            java.lang.String r0 = com.reyun.tracking.sdk.Tracking.m_appKey
            if (r0 == 0) goto L10
            java.lang.String r1 = ""
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Ld
            goto L10
        Ld:
            java.lang.String r0 = com.reyun.tracking.sdk.Tracking.m_appKey
            return r0
        L10:
            java.lang.String r0 = "unknown"
            return r0
    }

    public static com.reyun.tracking.utils.IAttributionQueryListener getAttributionQueryListener() {
            com.reyun.tracking.utils.IAttributionQueryListener r0 = com.reyun.tracking.sdk.Tracking.attributionQueryListener
            return r0
    }

    public static java.lang.String getChannelId() {
            java.lang.String r0 = com.reyun.tracking.sdk.Tracking.m_channelid
            if (r0 == 0) goto L10
            java.lang.String r1 = ""
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Ld
            goto L10
        Ld:
            java.lang.String r0 = com.reyun.tracking.sdk.Tracking.m_channelid
            return r0
        L10:
            java.lang.String r0 = "unknown"
            return r0
    }

    static android.content.Context getContext() {
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.m_context
            return r0
    }

    public static java.lang.Runnable getDataShareRunnable() {
            java.lang.Runnable r0 = com.reyun.tracking.sdk.Tracking.dataShareRunnable
            return r0
    }

    public static com.reyun.tracking.utils.IDeepLinkListener getDeepLinkListener() {
            com.reyun.tracking.utils.IDeepLinkListener r0 = com.reyun.tracking.sdk.Tracking.deepLinkListener
            return r0
    }

    public static java.lang.String getDeviceId() {
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.m_context
            if (r0 != 0) goto L7
            java.lang.String r0 = "unknown"
            return r0
        L7:
            java.lang.String r0 = com.reyun.tracking.a.a.b(r0)
            return r0
    }

    public static java.lang.String getImei2() {
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.m_context
            if (r0 != 0) goto L7
            java.lang.String r0 = "unknown"
            return r0
        L7:
            java.lang.String r0 = com.reyun.tracking.a.a.d(r0)
            return r0
    }

    public static java.lang.String getMeid() {
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.m_context
            if (r0 != 0) goto L7
            java.lang.String r0 = "unknown"
            return r0
        L7:
            java.lang.String r0 = com.reyun.tracking.a.a.e(r0)
            return r0
    }

    public static com.reyun.tracking.sdk.p getOnDataUploadListener() {
            com.reyun.tracking.sdk.p r0 = com.reyun.tracking.sdk.Tracking.onDataUploadListener
            return r0
    }

    public static boolean getUploadMac() {
            boolean r0 = com.reyun.tracking.sdk.Tracking.uploadMac
            return r0
    }

    public static java.lang.String getsCyid() {
            java.lang.String r0 = com.reyun.tracking.sdk.Tracking.sCyid
            return r0
    }

    public static void initWithKeyAndChannelId(android.app.Application r7, com.reyun.tracking.sdk.InitParameters r8) {
            java.lang.String r1 = r8.appKey
            java.lang.String r2 = r8.channelId
            java.util.Map r3 = r8.startupParams
            java.util.Map r4 = r8.installParams
            java.lang.String r5 = r8.cyid
            boolean r6 = r8.antiCheat
            r0 = r7
            initWithKeyAndChannelId(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    public static void initWithKeyAndChannelId(android.app.Application r8, java.lang.String r9, java.lang.String r10) {
            r0 = 0
            r5 = r0
            java.util.Map r5 = (java.util.Map) r5
            r6 = 0
            r7 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r5
            initWithKeyAndChannelId(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void initWithKeyAndChannelId(android.app.Application r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, boolean r14) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1b
            r0.<init>(r11)     // Catch: org.json.JSONException -> L1b
            java.util.Map r4 = jsonToMap(r0)     // Catch: org.json.JSONException -> L1b
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1b
            r11.<init>(r12)     // Catch: org.json.JSONException -> L1b
            java.util.Map r5 = jsonToMap(r11)     // Catch: org.json.JSONException -> L1b
            r1 = r8
            r2 = r9
            r3 = r10
            r6 = r13
            r7 = r14
            initWithKeyAndChannelId(r1, r2, r3, r4, r5, r6, r7)     // Catch: org.json.JSONException -> L1b
            goto L1f
        L1b:
            r8 = move-exception
            r8.printStackTrace()
        L1f:
            return
    }

    public static void initWithKeyAndChannelId(android.app.Application r2, java.lang.String r3, java.lang.String r4, java.util.Map r5, java.util.Map r6, java.lang.String r7, boolean r8) {
            boolean r0 = com.reyun.tracking.sdk.Tracking.isPreInit
            java.lang.String r1 = "TrackingIO"
            if (r0 != 0) goto Lc
            java.lang.String r2 = "initWithKeyAndChannelId Error:preInit init failed! Did you call the method 'preInit'?"
            android.util.Log.e(r1, r2)
            return
        Lc:
            com.reyun.tracking.sdk.Tracking.m_appKey = r3
            boolean r3 = com.reyun.tracking.a.a.a(r3)
            if (r3 != 0) goto L1a
            java.lang.String r2 = "Your appKey is incorrect! init failed!"
            android.util.Log.w(r1, r2)
            return
        L1a:
            java.lang.String r3 = "unknown"
            java.lang.String r0 = "initWithKeyAndChannelId : channelid is NULL"
            java.lang.String r4 = com.reyun.tracking.a.a.a(r4, r3, r0)
            com.reyun.tracking.sdk.Tracking.m_channelid = r4
            java.lang.String r4 = "appContext can not be null!"
            if (r2 == 0) goto L84
            android.content.Context r0 = r2.getApplicationContext()
            if (r0 != 0) goto L2f
            goto L84
        L2f:
            com.reyun.tracking.sdk.Tracking.mApplication = r2
            android.content.Context r2 = r2.getApplicationContext()
            com.reyun.tracking.sdk.Tracking.m_context = r2
            if (r2 != 0) goto L3d
            android.util.Log.e(r1, r4)
            return
        L3d:
            com.reyun.tracking.sdk.Tracking.sCyid = r7
            java.lang.String r2 = com.reyun.tracking.a.a.a(r2)
            android.content.Context r4 = com.reyun.tracking.sdk.Tracking.m_context
            int r7 = android.os.Process.myPid()
            java.lang.String r4 = com.reyun.tracking.a.a.a(r4, r7)
            if (r4 != 0) goto L55
            java.lang.String r2 = "processName is null! init FAILED!"
            android.util.Log.e(r1, r2)
            return
        L55:
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L61
            java.lang.String r2 = "pkgName is unknown! init FAILED!"
            android.util.Log.e(r1, r2)
            return
        L61:
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L7e
            java.lang.String r2 = "Initial sdk successful!"
            android.util.Log.i(r1, r2)
            boolean r2 = com.reyun.tracking.sdk.Tracking.isSDKInited
            if (r2 == 0) goto L71
            return
        L71:
            r2 = 1
            com.reyun.tracking.sdk.Tracking.isSDKInited = r2
            com.reyun.tracking.sdk.Tracking._startupParams = r5
            com.reyun.tracking.sdk.Tracking._installParams = r6
            com.reyun.tracking.sdk.Tracking._antiCheat = r8
            activation()
            return
        L7e:
            java.lang.String r2 = "Only main process can init sdk"
            android.util.Log.e(r1, r2)
            return
        L84:
            android.util.Log.w(r1, r4)
            return
    }

    private static byte[] jsonObjToByteArray(org.json.JSONObject r1) {
            if (r1 == 0) goto Ld
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Ld
            java.lang.String r0 = "utf-8"
            byte[] r1 = r1.getBytes(r0)     // Catch: java.lang.Throwable -> Ld
            goto Le
        Ld:
            r1 = 0
        Le:
            return r1
    }

    private static java.util.Map jsonToMap(org.json.JSONObject r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Iterator r1 = r4.keys()
        L9:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L1d
            if (r2 == 0) goto L21
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L1d
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L1d
            java.lang.Object r3 = r4.get(r2)     // Catch: org.json.JSONException -> L1d
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L1d
            goto L9
        L1d:
            r4 = move-exception
            r4.printStackTrace()
        L21:
            return r0
    }

    public static byte mapApi2Byte(java.lang.String r1) {
            java.lang.String r0 = "receive/batch"
            if (r1 != r0) goto L6
            r1 = 1
            return r1
        L6:
            java.lang.String r0 = "receive/tkio/startup"
            if (r1 != r0) goto Lc
            r1 = 3
            return r1
        Lc:
            java.lang.String r0 = "receive/tkio/register"
            if (r1 != r0) goto L12
            r1 = 4
            return r1
        L12:
            java.lang.String r0 = "receive/tkio/install"
            if (r1 != r0) goto L18
            r1 = 2
            return r1
        L18:
            java.lang.String r0 = "receive/tkio/loggedin"
            if (r1 != r0) goto L1e
            r1 = 5
            return r1
        L1e:
            java.lang.String r0 = "receive/tkio/payment"
            if (r1 != r0) goto L24
            r1 = 6
            return r1
        L24:
            java.lang.String r0 = "receive/tkio/event"
            if (r1 != r0) goto L2a
            r1 = 7
            return r1
        L2a:
            java.lang.String r0 = "receive/gettime"
            if (r1 != r0) goto L30
            r1 = 0
            return r1
        L30:
            java.lang.String r0 = "receive/pkginfo"
            if (r1 != r0) goto L37
            r1 = 17
            return r1
        L37:
            java.lang.String r0 = "dpquery"
            if (r1 != r0) goto L3e
            r1 = 13
            return r1
        L3e:
            java.lang.String r0 = "receive/tkio/appduration"
            if (r1 != r0) goto L45
            r1 = 16
            return r1
        L45:
            java.lang.String r0 = "receive/tkio/pageduration"
            if (r1 != r0) goto L4c
            r1 = 14
            return r1
        L4c:
            java.lang.String r0 = "receive/tkio/adshow"
            if (r1 != r0) goto L53
            r1 = 10
            return r1
        L53:
            java.lang.String r0 = "receive/tkio/adclick"
            if (r1 != r0) goto L5a
            r1 = 11
            return r1
        L5a:
            java.lang.String r0 = "receive/tkio/sdklog"
            if (r1 != r0) goto L61
            r1 = 21
            return r1
        L61:
            r1 = -1
            return r1
    }

    public static void preInit(android.content.Context r0, java.lang.String r1) {
            boolean r0 = com.reyun.tracking.a.a.a(r1)
            java.lang.String r1 = "TrackingIO"
            if (r0 != 0) goto Le
            java.lang.String r0 = "Your appKey is incorrect! preInit failed!"
            android.util.Log.e(r1, r0)
            return
        Le:
            r0 = 1
            com.reyun.tracking.sdk.Tracking.isPreInit = r0
            java.lang.String r0 = "preInit init success"
            com.reyun.tracking.a.a.d(r1, r0)
            return
    }

    private static com.reyun.tracking.utils.k queryRecordFromDatabase(int r2) {
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> Ld
            java.lang.String r1 = "TrackingIO"
            com.reyun.tracking.utils.i r0 = com.reyun.tracking.utils.i.a(r0, r1)     // Catch: java.lang.Throwable -> Ld
            com.reyun.tracking.utils.k r2 = r0.a(r2)     // Catch: java.lang.Throwable -> Ld
            return r2
        Ld:
            r2 = 0
            return r2
    }

    public static void removeDataShareRunnable() {
            r0 = 0
            com.reyun.tracking.sdk.Tracking.dataShareRunnable = r0
            return
    }

    public static void sendFailedRecord() {
            com.reyun.tracking.sdk.k r0 = new com.reyun.tracking.sdk.k
            r0.<init>()
            com.reyun.tracking.sdk.a r1 = com.reyun.tracking.sdk.a.a()
            r1.b(r0)
            return
    }

    private static int sendFailureRecord(int r6) {
            java.lang.String r0 = "TrackingIO"
            r1 = 0
            java.lang.String r2 = "sendFailureRecord"
            com.reyun.tracking.a.a.a(r0, r2)     // Catch: java.lang.Throwable -> L4e
            com.reyun.tracking.utils.k r2 = queryRecordFromDatabase(r6)     // Catch: java.lang.Throwable -> L4e
            if (r2 == 0) goto L48
            java.util.ArrayList r3 = r2.a     // Catch: java.lang.Throwable -> L4e
            if (r3 == 0) goto L48
            java.util.ArrayList r3 = r2.a     // Catch: java.lang.Throwable -> L4e
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L4e
            if (r3 != 0) goto L1b
            goto L48
        L1b:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4e
            r3.<init>()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r4 = "sendFailureRecord :"
            r3.append(r4)     // Catch: java.lang.Throwable -> L4e
            java.util.ArrayList r4 = r2.a     // Catch: java.lang.Throwable -> L4e
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L4e
            r3.append(r4)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L4e
            com.reyun.tracking.a.a.a(r0, r3)     // Catch: java.lang.Throwable -> L4e
            android.os.Handler r3 = com.reyun.tracking.sdk.Tracking.mydbhandler     // Catch: java.lang.Throwable -> L4e
            android.os.Handler r4 = com.reyun.tracking.sdk.Tracking.mydbhandler     // Catch: java.lang.Throwable -> L4e
            r5 = 1
            android.os.Message r6 = r4.obtainMessage(r5, r6, r1, r2)     // Catch: java.lang.Throwable -> L4e
            r3.sendMessage(r6)     // Catch: java.lang.Throwable -> L4e
            java.util.ArrayList r6 = r2.a     // Catch: java.lang.Throwable -> L4e
            int r6 = r6.size()     // Catch: java.lang.Throwable -> L4e
            return r6
        L48:
            java.lang.String r6 = "sendFailureRecord-nocache"
            com.reyun.tracking.a.a.a(r0, r6)     // Catch: java.lang.Throwable -> L4e
            return r1
        L4e:
            r6 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "sendFailureRecord!"
            r2.append(r3)
            java.lang.String r6 = r6.getMessage()
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            com.reyun.tracking.a.a.a(r0, r6)
            return r1
    }

    private static void sendOrSava(java.lang.String r1, java.lang.String r2, org.json.JSONObject r3, java.lang.String r4) {
            r0 = 1
            sendOrSava(r1, r2, r3, r4, r0)
            return
    }

    private static void sendOrSava(java.lang.String r6, java.lang.String r7, org.json.JSONObject r8, java.lang.String r9, int r10) {
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            sendOrSava(r0, r1, r2, r3, r4, r5)
            return
    }

    private static void sendOrSava(java.lang.String r10, java.lang.String r11, org.json.JSONObject r12, java.lang.String r13, int r14, java.util.Map r15) {
            java.lang.String r0 = "install"
            boolean r0 = r0.equals(r10)
            r2 = 0
            r3 = 1
            if (r0 != 0) goto L11
            boolean r0 = com.reyun.tracking.sdk.Tracking.isInstallSent
            if (r0 == 0) goto Lf
            goto L11
        Lf:
            r0 = 0
            goto L12
        L11:
            r0 = 1
        L12:
            android.content.Context r4 = com.reyun.tracking.sdk.Tracking.m_context
            boolean r4 = com.reyun.tracking.utils.b.a(r4)
            if (r4 == 0) goto L22
            boolean r4 = com.reyun.tracking.sdk.Tracking.SEND_DATA_WITH_HEARTBEAT
            if (r4 != 0) goto L22
            if (r0 == 0) goto L22
            r4 = 1
            goto L23
        L22:
            r4 = 0
        L23:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "sendOrSave:"
            r2.append(r3)
            r2.append(r4)
            java.lang.String r3 = ","
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = " what:"
            r2.append(r0)
            r2.append(r10)
            java.lang.String r0 = " what2:"
            r2.append(r0)
            r2.append(r11)
            java.lang.String r0 = " isInstallSent:"
            r2.append(r0)
            boolean r0 = com.reyun.tracking.sdk.Tracking.isInstallSent
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.String r2 = "TrackingIO"
            com.reyun.tracking.a.a.d(r2, r0)
            com.reyun.tracking.sdk.a r8 = com.reyun.tracking.sdk.a.a()
            com.reyun.tracking.sdk.l r9 = new com.reyun.tracking.sdk.l
            r0 = r9
            r1 = r10
            r2 = r12
            r3 = r11
            r5 = r13
            r6 = r14
            r7 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r8.a(r9)
            return
    }

    public static void setAdClick(java.lang.String r1, java.lang.String r2) {
            r0 = 0
            java.util.Map r0 = (java.util.Map) r0
            setAdClick(r1, r2, r0)
            return
    }

    public static void setAdClick(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r0.<init>(r3)     // Catch: org.json.JSONException -> Ld
            java.util.Map r3 = jsonToMap(r0)     // Catch: org.json.JSONException -> Ld
            setAdClick(r1, r2, r3)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public static void setAdClick(java.lang.String r9, java.lang.String r10, java.util.Map r11) {
            java.lang.String r0 = "adclick"
            boolean r1 = com.reyun.tracking.sdk.Tracking.isPreInit
            java.lang.String r2 = "TrackingIO"
            if (r1 != 0) goto Le
            java.lang.String r9 = "setAdClick Error:preInit init failed! Did you call the method 'preInit'?"
            android.util.Log.e(r2, r9)
            return
        Le:
            android.content.Context r1 = com.reyun.tracking.sdk.Tracking.m_context
            if (r1 != 0) goto L18
            java.lang.String r9 = "setAdClick Error: Null context! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r2, r9)
            return
        L18:
            java.lang.String r1 = com.reyun.tracking.sdk.Tracking.m_appKey
            boolean r1 = com.reyun.tracking.a.a.a(r1)
            if (r1 != 0) goto L26
            java.lang.String r9 = "setAdClick Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r2, r9)
            return
        L26:
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            if (r1 == 0) goto L32
            java.lang.String r9 = "setAdClick Error: adPlatform cannot be NULL"
            android.util.Log.w(r2, r9)
            return
        L32:
            boolean r1 = android.text.TextUtils.isEmpty(r10)
            if (r1 == 0) goto L3e
            java.lang.String r9 = "setAdClick Error: adId cannot be NULL"
            android.util.Log.w(r2, r9)
            return
        L3e:
            com.reyun.tracking.a.a.b(r11)     // Catch: java.lang.Throwable -> L74
            android.content.Context r3 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L74
            java.lang.String r4 = com.reyun.tracking.sdk.Tracking.m_appKey     // Catch: java.lang.Throwable -> L74
            java.lang.String r5 = "adclick"
            android.content.Context r1 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "tracking_login"
            java.lang.String r6 = "account"
            java.lang.String r7 = "unknown"
            java.lang.String r6 = com.reyun.tracking.utils.f.a(r1, r2, r6, r7)     // Catch: java.lang.Throwable -> L74
            java.lang.String r7 = com.reyun.tracking.sdk.Tracking.m_channelid     // Catch: java.lang.Throwable -> L74
            r8 = 0
            org.json.JSONObject r1 = com.reyun.tracking.a.h.a(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "context"
            org.json.JSONObject r2 = r1.getJSONObject(r2)     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = "_adPlatform"
            r2.put(r3, r9)     // Catch: java.lang.Throwable -> L74
            java.lang.String r9 = "_adId"
            r2.put(r9, r10)     // Catch: java.lang.Throwable -> L74
            if (r11 == 0) goto L6f
            com.reyun.tracking.a.a.a(r11, r1)     // Catch: java.lang.Throwable -> L74
        L6f:
            java.lang.String r9 = "receive/tkio/adclick"
            sendOrSava(r0, r0, r1, r9)     // Catch: java.lang.Throwable -> L74
        L74:
            return
    }

    public static void setAdShow(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = 0
            java.util.Map r0 = (java.util.Map) r0
            setAdShow(r1, r2, r3, r0)
            return
    }

    public static void setAdShow(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r0.<init>(r4)     // Catch: org.json.JSONException -> Ld
            java.util.Map r4 = jsonToMap(r0)     // Catch: org.json.JSONException -> Ld
            setAdShow(r1, r2, r3, r4)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public static void setAdShow(java.lang.String r9, java.lang.String r10, java.lang.String r11, java.util.Map r12) {
            java.lang.String r0 = "adshow"
            boolean r1 = com.reyun.tracking.sdk.Tracking.isPreInit
            java.lang.String r2 = "TrackingIO"
            if (r1 != 0) goto Le
            java.lang.String r9 = "setAdShow Error preInit init failed :Did you call the method 'preInit'?"
            android.util.Log.e(r2, r9)
            return
        Le:
            android.content.Context r1 = com.reyun.tracking.sdk.Tracking.m_context
            if (r1 != 0) goto L18
            java.lang.String r9 = "setAdShow Error: Null context! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r2, r9)
            return
        L18:
            java.lang.String r1 = com.reyun.tracking.sdk.Tracking.m_appKey
            boolean r1 = com.reyun.tracking.a.a.a(r1)
            if (r1 != 0) goto L26
            java.lang.String r9 = "setAdShow Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r2, r9)
            return
        L26:
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            if (r1 == 0) goto L32
            java.lang.String r9 = "setAdShow Error: adPlatform cannot be NULL"
            android.util.Log.w(r2, r9)
            return
        L32:
            boolean r1 = android.text.TextUtils.isEmpty(r10)
            if (r1 == 0) goto L3e
            java.lang.String r9 = "setAdShow Error: adId cannot be NULL"
            android.util.Log.w(r2, r9)
            return
        L3e:
            com.reyun.tracking.a.a.b(r12)     // Catch: java.lang.Throwable -> L79
            android.content.Context r3 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L79
            java.lang.String r4 = com.reyun.tracking.sdk.Tracking.m_appKey     // Catch: java.lang.Throwable -> L79
            java.lang.String r5 = "adshow"
            android.content.Context r1 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L79
            java.lang.String r2 = "tracking_login"
            java.lang.String r6 = "account"
            java.lang.String r7 = "unknown"
            java.lang.String r6 = com.reyun.tracking.utils.f.a(r1, r2, r6, r7)     // Catch: java.lang.Throwable -> L79
            java.lang.String r7 = com.reyun.tracking.sdk.Tracking.m_channelid     // Catch: java.lang.Throwable -> L79
            r8 = 0
            org.json.JSONObject r1 = com.reyun.tracking.a.h.a(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L79
            java.lang.String r2 = "context"
            org.json.JSONObject r2 = r1.getJSONObject(r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r3 = "_adPlatform"
            r2.put(r3, r9)     // Catch: java.lang.Throwable -> L79
            java.lang.String r9 = "_adId"
            r2.put(r9, r10)     // Catch: java.lang.Throwable -> L79
            java.lang.String r9 = "_fill"
            r2.put(r9, r11)     // Catch: java.lang.Throwable -> L79
            if (r12 == 0) goto L74
            com.reyun.tracking.a.a.a(r12, r1)     // Catch: java.lang.Throwable -> L79
        L74:
            java.lang.String r9 = "receive/tkio/adshow"
            sendOrSava(r0, r0, r1, r9)     // Catch: java.lang.Throwable -> L79
        L79:
            return
    }

    public static void setAppDuration(long r1) {
            r0 = 0
            java.util.Map r0 = (java.util.Map) r0
            setAppDuration(r1, r0)
            return
    }

    public static void setAppDuration(long r1, java.lang.String r3) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r0.<init>(r3)     // Catch: org.json.JSONException -> Ld
            java.util.Map r3 = jsonToMap(r0)     // Catch: org.json.JSONException -> Ld
            setAppDuration(r1, r3)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public static void setAppDuration(long r8, java.util.Map r10) {
            java.lang.String r0 = "appduration"
            java.lang.String r1 = "unknown"
            boolean r2 = com.reyun.tracking.sdk.Tracking.isPreInit     // Catch: java.lang.Throwable -> L6a
            if (r2 != 0) goto L10
            java.lang.String r8 = "TrackingIO"
            java.lang.String r9 = "setAppDuration Error:preInit init failed! Did you call the method 'preInit'?"
            android.util.Log.e(r8, r9)     // Catch: java.lang.Throwable -> L6a
            return
        L10:
            com.reyun.tracking.a.a.b(r10)     // Catch: java.lang.Throwable -> L6a
            android.content.Context r2 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L6a
            java.lang.String r3 = com.reyun.tracking.sdk.Tracking.m_appKey     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = "appduration"
            android.content.Context r5 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L6a
            java.lang.String r6 = "tracking_login"
            java.lang.String r7 = "account"
            java.lang.String r5 = com.reyun.tracking.utils.f.a(r5, r6, r7, r1)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r6 = com.reyun.tracking.sdk.Tracking.m_channelid     // Catch: java.lang.Throwable -> L6a
            r7 = 0
            org.json.JSONObject r2 = com.reyun.tracking.a.h.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r3 = "context"
            org.json.JSONObject r3 = r2.getJSONObject(r3)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = "_deviceid"
            java.lang.String r1 = r3.optString(r4, r1)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = "_create_timestamp"
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6a
            long r4 = r3.optLong(r4, r5)     // Catch: java.lang.Throwable -> L6a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6a
            r6.<init>()     // Catch: java.lang.Throwable -> L6a
            r6.append(r1)     // Catch: java.lang.Throwable -> L6a
            r6.append(r4)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r1 = com.reyun.tracking.a.a.c(r1)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = "_appduration"
            r5 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 / r5
            r3.put(r4, r8)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r8 = "_sessionid"
            r3.put(r8, r1)     // Catch: java.lang.Throwable -> L6a
            if (r10 == 0) goto L65
            com.reyun.tracking.a.a.a(r10, r2)     // Catch: java.lang.Throwable -> L6a
        L65:
            java.lang.String r8 = "receive/tkio/appduration"
            sendOrSava(r0, r0, r2, r8)     // Catch: java.lang.Throwable -> L6a
        L6a:
            return
    }

    public static void setAttributionQueryListener(com.reyun.tracking.utils.IAttributionQueryListener r0) {
            com.reyun.tracking.sdk.Tracking.attributionQueryListener = r0
            return
    }

    public static void setDataShare(boolean r1) {
            com.reyun.tracking.sdk.g r0 = new com.reyun.tracking.sdk.g
            r0.<init>(r1)
            com.reyun.tracking.sdk.Tracking.dataShareRunnable = r0
            return
    }

    public static void setDebugMode(boolean r0) {
            com.reyun.tracking.a.i.a = r0
            return
    }

    public static void setDeepLinkListener(com.reyun.tracking.utils.IDeepLinkListener r0) {
            com.reyun.tracking.sdk.Tracking.deepLinkListener = r0
            return
    }

    public static void setEncrypt(boolean r0) {
            com.reyun.tracking.a.i.d = r0
            return
    }

    public static void setEvent(java.lang.String r1) {
            r0 = 0
            java.util.Map r0 = (java.util.Map) r0
            setEvent(r1, r0)
            return
    }

    public static void setEvent(java.lang.String r1, java.lang.String r2) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r0.<init>(r2)     // Catch: org.json.JSONException -> Ld
            java.util.Map r2 = jsonToMap(r0)     // Catch: org.json.JSONException -> Ld
            setEvent(r1, r2)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public static void setEvent(java.lang.String r10, java.util.Map r11) {
            java.lang.String r0 = "userEvent"
            boolean r1 = com.reyun.tracking.sdk.Tracking.isPreInit
            java.lang.String r2 = "TrackingIO"
            if (r1 != 0) goto Le
            java.lang.String r10 = "setEvent Error:preInit init failed! Did you call the method 'preInit'?"
            android.util.Log.e(r2, r10)
            return
        Le:
            android.content.Context r1 = com.reyun.tracking.sdk.Tracking.m_context
            if (r1 != 0) goto L13
            return
        L13:
            java.lang.String r1 = com.reyun.tracking.sdk.Tracking.m_appKey
            boolean r1 = com.reyun.tracking.a.a.a(r1)
            if (r1 != 0) goto L21
            java.lang.String r10 = "setEvent Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r2, r10)
            return
        L21:
            java.lang.String r1 = com.reyun.tracking.a.a.a(r11)
            if (r1 == 0) goto L3c
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "setEvent Error: Invalid key of map "
            r10.append(r11)
            r10.append(r1)
            java.lang.String r10 = r10.toString()
            android.util.Log.w(r2, r10)
            return
        L3c:
            java.lang.String r1 = "unknown"
            java.lang.String r3 = "调用setEvent时 eventName 为空"
            java.lang.String r6 = com.reyun.tracking.a.a.a(r10, r1, r3)
            boolean r10 = r1.equals(r6)
            if (r10 == 0) goto L50
            java.lang.String r10 = "setEvent Error: param eventName cannot be NULL"
            android.util.Log.w(r2, r10)
            return
        L50:
            com.reyun.tracking.a.a.b(r11)
            java.lang.String r10 = "electricityDataEvent"
            boolean r10 = r10.equals(r6)
            if (r10 != 0) goto La0
            java.lang.String r10 = "gyroDataEvent"
            boolean r10 = r10.equals(r6)
            if (r10 != 0) goto La0
            java.lang.String r10 = "paymentStart"
            boolean r10 = r10.equals(r6)
            if (r10 != 0) goto La0
            java.lang.String r10 = "exception"
            boolean r10 = r10.equals(r6)
            if (r10 != 0) goto La0
            java.lang.String r10 = "order"
            boolean r10 = r10.equals(r6)
            if (r10 != 0) goto La0
            java.lang.String r10 = "invoke"
            boolean r10 = r10.equals(r6)
            if (r10 == 0) goto L84
            goto La0
        L84:
            java.lang.String r10 = "^event_([1-9]|1[0-9]|2[0-9]|30)$"
            boolean r10 = r6.matches(r10)
            if (r10 != 0) goto L92
            java.lang.String r10 = "setEvent Error: only supported eventName: event_1 - event_12 or invoke"
            android.util.Log.w(r2, r10)
            return
        L92:
            if (r11 != 0) goto L99
            java.util.HashMap r11 = new java.util.HashMap
            r11.<init>()
        L99:
            java.lang.String r10 = "_isReyunDefaultEvent"
            java.lang.String r2 = "1"
            r11.put(r10, r2)
        La0:
            android.content.Context r4 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r5 = com.reyun.tracking.sdk.Tracking.m_appKey     // Catch: java.lang.Throwable -> Lbd
            android.content.Context r10 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r2 = "tracking_login"
            java.lang.String r3 = "account"
            java.lang.String r7 = com.reyun.tracking.utils.f.a(r10, r2, r3, r1)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r8 = com.reyun.tracking.sdk.Tracking.m_channelid     // Catch: java.lang.Throwable -> Lbd
            r9 = 0
            org.json.JSONObject r10 = com.reyun.tracking.a.h.a(r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> Lbd
            com.reyun.tracking.a.a.a(r11, r10)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r11 = "receive/tkio/event"
            sendOrSava(r0, r0, r10, r11)     // Catch: java.lang.Throwable -> Lbd
        Lbd:
            return
    }

    public static void setEventJsonString(java.lang.String r1, java.lang.String r2) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r0.<init>(r2)     // Catch: org.json.JSONException -> Ld
            java.util.Map r2 = jsonToMap(r0)     // Catch: org.json.JSONException -> Ld
            setEvent(r1, r2)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public static void setIsInstallSent(boolean r0) {
            com.reyun.tracking.sdk.Tracking.isInstallSent = r0
            return
    }

    public static void setLoginSuccessBusiness(java.lang.String r2) {
            r0 = 0
            r1 = r0
            java.util.Map r1 = (java.util.Map) r1
            setLoginSuccessBusiness(r2, r0, r1)
            return
    }

    public static void setLoginSuccessBusiness(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r0.<init>(r3)     // Catch: org.json.JSONException -> Ld
            java.util.Map r3 = jsonToMap(r0)     // Catch: org.json.JSONException -> Ld
            setLoginSuccessBusiness(r1, r2, r3)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public static void setLoginSuccessBusiness(java.lang.String r8, java.lang.String r9, java.util.Map r10) {
            boolean r0 = com.reyun.tracking.sdk.Tracking.isPreInit
            java.lang.String r1 = "TrackingIO"
            if (r0 != 0) goto Lc
            java.lang.String r8 = "setLoginSuccessBusiness Error:preInit init failed! Did you call the method 'preInit'?"
            android.util.Log.e(r1, r8)
            return
        Lc:
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.m_context
            if (r0 != 0) goto L16
            java.lang.String r8 = "setLoginSuccessBusiness Error: Null context! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r1, r8)
            return
        L16:
            java.lang.String r0 = com.reyun.tracking.sdk.Tracking.m_appKey
            boolean r0 = com.reyun.tracking.a.a.a(r0)
            if (r0 != 0) goto L24
            java.lang.String r8 = "setLoginSuccessBusiness Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r1, r8)
            return
        L24:
            com.reyun.tracking.a.a.b(r10)
            java.lang.String r0 = "unknown"
            java.lang.String r1 = "setRegisterWithAccountID Warning: param account is NULL"
            java.lang.String r5 = com.reyun.tracking.a.a.a(r8, r0, r1)
            android.content.Context r8 = com.reyun.tracking.sdk.Tracking.m_context
            java.lang.String r0 = "tracking_login"
            java.lang.String r1 = "account"
            com.reyun.tracking.utils.f.b(r8, r0, r1, r5)
            r8 = 0
            android.content.Context r2 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L59
            java.lang.String r3 = com.reyun.tracking.sdk.Tracking.m_appKey     // Catch: java.lang.Throwable -> L59
            java.lang.String r4 = "loggedin"
            java.lang.String r6 = com.reyun.tracking.sdk.Tracking.m_channelid     // Catch: java.lang.Throwable -> L59
            r7 = 0
            org.json.JSONObject r8 = com.reyun.tracking.a.h.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L59
            if (r9 == 0) goto L53
            java.lang.String r0 = "context"
            org.json.JSONObject r0 = r8.getJSONObject(r0)     // Catch: java.lang.Throwable -> L59
            java.lang.String r1 = "serverid"
            r0.put(r1, r9)     // Catch: java.lang.Throwable -> L59
        L53:
            if (r10 == 0) goto L5d
            com.reyun.tracking.a.a.a(r10, r8)     // Catch: java.lang.Throwable -> L59
            goto L5d
        L59:
            r9 = move-exception
            r9.printStackTrace()
        L5d:
            if (r8 == 0) goto L68
            java.lang.String r9 = "loggedin"
            java.lang.String r10 = "login"
            java.lang.String r0 = "receive/tkio/loggedin"
            sendOrSava(r9, r10, r8, r0)
        L68:
            return
    }

    public static void setLoginSuccessBusiness(java.lang.String r1, java.util.Map r2) {
            r0 = 0
            setLoginSuccessBusiness(r1, r0, r2)
            return
    }

    public static void setOnDataUploadListener(com.reyun.tracking.sdk.p r0) {
            com.reyun.tracking.sdk.Tracking.onDataUploadListener = r0
            return
    }

    public static void setOnSDKInitCompleteListener(com.reyun.tracking.sdk.o r0) {
            com.reyun.tracking.sdk.Tracking.onSDKInitCompleteListener = r0
            return
    }

    public static void setOrder(java.lang.String r1, java.lang.String r2, float r3) {
            r0 = 0
            java.util.Map r0 = (java.util.Map) r0
            setOrder(r1, r2, r3, r0)
            return
    }

    public static void setOrder(java.lang.String r1, java.lang.String r2, float r3, java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r0.<init>(r4)     // Catch: org.json.JSONException -> Ld
            java.util.Map r4 = jsonToMap(r0)     // Catch: org.json.JSONException -> Ld
            setOrder(r1, r2, r3, r4)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public static void setOrder(java.lang.String r3, java.lang.String r4, float r5, java.util.Map r6) {
            boolean r0 = com.reyun.tracking.sdk.Tracking.isPreInit
            java.lang.String r1 = "TrackingIO"
            if (r0 != 0) goto Lc
            java.lang.String r3 = "setOrder Error:preInit init failed! Did you call the method 'preInit'?"
            android.util.Log.e(r1, r3)
            return
        Lc:
            java.lang.String r0 = "unknown"
            java.lang.String r2 = "调用 setOrder时 transactionId 为空"
            java.lang.String r2 = com.reyun.tracking.a.a.a(r3, r0, r2)
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L20
            java.lang.String r3 = "setOrder Error: param transactionId cannot be NULL"
            android.util.Log.w(r1, r3)
            return
        L20:
            java.lang.String r2 = "调用 setPayment时 paymentType 为空"
            java.lang.String r4 = com.reyun.tracking.a.a.a(r4, r0, r2)
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L32
            java.lang.String r3 = "setOrder Error: param currencyType cannot be NULL"
            android.util.Log.w(r1, r3)
            return
        L32:
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 > 0) goto L3d
            java.lang.String r3 = "setOrder Error: param currencyAmount cannot <= 0"
            android.util.Log.w(r1, r3)
            return
        L3d:
            if (r6 != 0) goto L44
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
        L44:
            java.lang.String r0 = "_transactionId"
            r6.put(r0, r3)
            java.lang.String r3 = "_currencytype"
            r6.put(r3, r4)
            java.lang.Float r3 = java.lang.Float.valueOf(r5)
            java.lang.String r4 = "_currencyAmount"
            r6.put(r4, r3)
            java.lang.String r3 = "order"
            setEvent(r3, r6)
            return
    }

    public static void setPageDuration(java.lang.String r1, long r2) {
            r0 = 0
            java.util.Map r0 = (java.util.Map) r0
            setPageDuration(r1, r2, r0)
            return
    }

    public static void setPageDuration(java.lang.String r1, long r2, java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r0.<init>(r4)     // Catch: org.json.JSONException -> Ld
            java.util.Map r4 = jsonToMap(r0)     // Catch: org.json.JSONException -> Ld
            setPageDuration(r1, r2, r4)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public static void setPageDuration(java.lang.String r8, long r9, java.util.Map r11) {
            java.lang.String r0 = "pageduration"
            java.lang.String r1 = "unknown"
            boolean r2 = com.reyun.tracking.sdk.Tracking.isPreInit     // Catch: java.lang.Throwable -> L80
            if (r2 != 0) goto L10
            java.lang.String r8 = "TrackingIO"
            java.lang.String r9 = "setPageDuration Error:preInit init failed! Did you call the method 'preInit'?"
            android.util.Log.e(r8, r9)     // Catch: java.lang.Throwable -> L80
            return
        L10:
            int r2 = r8.length()     // Catch: java.lang.Throwable -> L80
            r3 = 64
            if (r2 <= r3) goto L21
            int r2 = r8.length()     // Catch: java.lang.Throwable -> L80
            int r2 = r2 - r3
            java.lang.String r8 = r8.substring(r2)     // Catch: java.lang.Throwable -> L80
        L21:
            com.reyun.tracking.a.a.b(r11)     // Catch: java.lang.Throwable -> L80
            android.content.Context r2 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L80
            java.lang.String r3 = com.reyun.tracking.sdk.Tracking.m_appKey     // Catch: java.lang.Throwable -> L80
            java.lang.String r4 = "pageduration"
            android.content.Context r5 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L80
            java.lang.String r6 = "tracking_login"
            java.lang.String r7 = "account"
            java.lang.String r5 = com.reyun.tracking.utils.f.a(r5, r6, r7, r1)     // Catch: java.lang.Throwable -> L80
            java.lang.String r6 = com.reyun.tracking.sdk.Tracking.m_channelid     // Catch: java.lang.Throwable -> L80
            r7 = 0
            org.json.JSONObject r2 = com.reyun.tracking.a.h.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L80
            java.lang.String r3 = "context"
            org.json.JSONObject r3 = r2.getJSONObject(r3)     // Catch: java.lang.Throwable -> L80
            java.lang.String r4 = "_deviceid"
            java.lang.String r1 = r3.optString(r4, r1)     // Catch: java.lang.Throwable -> L80
            java.lang.String r4 = "_create_timestamp"
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L80
            long r4 = r3.optLong(r4, r5)     // Catch: java.lang.Throwable -> L80
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L80
            r6.<init>()     // Catch: java.lang.Throwable -> L80
            r6.append(r1)     // Catch: java.lang.Throwable -> L80
            r6.append(r4)     // Catch: java.lang.Throwable -> L80
            java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> L80
            java.lang.String r1 = com.reyun.tracking.a.a.c(r1)     // Catch: java.lang.Throwable -> L80
            java.lang.String r4 = "_sessionid"
            r3.put(r4, r1)     // Catch: java.lang.Throwable -> L80
            java.lang.String r1 = "_pageid"
            r3.put(r1, r8)     // Catch: java.lang.Throwable -> L80
            java.lang.String r8 = "_pageduration"
            r4 = 1000(0x3e8, double:4.94E-321)
            long r9 = r9 / r4
            r3.put(r8, r9)     // Catch: java.lang.Throwable -> L80
            if (r11 == 0) goto L7b
            com.reyun.tracking.a.a.a(r11, r2)     // Catch: java.lang.Throwable -> L80
        L7b:
            java.lang.String r8 = "receive/tkio/pageduration"
            sendOrSava(r0, r0, r2, r8)     // Catch: java.lang.Throwable -> L80
        L80:
            return
    }

    public static void setPayment(java.lang.String r1, java.lang.String r2, java.lang.String r3, float r4) {
            r0 = 0
            java.util.Map r0 = (java.util.Map) r0
            setPayment(r1, r2, r3, r4, r0)
            return
    }

    public static void setPayment(java.lang.String r1, java.lang.String r2, java.lang.String r3, float r4, java.lang.String r5) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r0.<init>(r5)     // Catch: org.json.JSONException -> Ld
            java.util.Map r5 = jsonToMap(r0)     // Catch: org.json.JSONException -> Ld
            setPayment(r1, r2, r3, r4, r5)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public static void setPayment(java.lang.String r8, java.lang.String r9, java.lang.String r10, float r11, java.util.Map r12) {
            boolean r0 = com.reyun.tracking.sdk.Tracking.isPreInit
            java.lang.String r1 = "TrackingIO"
            if (r0 != 0) goto Lc
            java.lang.String r8 = "setPayment Error:preInit init failed! Did you call the method 'preInit'?"
            android.util.Log.e(r1, r8)
            return
        Lc:
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.m_context
            if (r0 != 0) goto L16
            java.lang.String r8 = "setPayment Error: Null context! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r1, r8)
            return
        L16:
            java.lang.String r0 = com.reyun.tracking.sdk.Tracking.m_appKey
            boolean r0 = com.reyun.tracking.a.a.a(r0)
            if (r0 != 0) goto L24
            java.lang.String r8 = "setPayment Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r1, r8)
            return
        L24:
            java.lang.String r0 = "unknown"
            java.lang.String r2 = "调用 setPayment时 transactionId 为空"
            java.lang.String r8 = com.reyun.tracking.a.a.a(r8, r0, r2)
            boolean r2 = r0.equals(r8)
            if (r2 == 0) goto L38
            java.lang.String r8 = "setPayment Error: param transactionId cannot be NULL"
            android.util.Log.w(r1, r8)
            return
        L38:
            java.lang.String r2 = "调用 setPayment时 paymentType 为空"
            java.lang.String r9 = com.reyun.tracking.a.a.a(r9, r0, r2)
            boolean r2 = r0.equals(r9)
            if (r2 == 0) goto L4a
            java.lang.String r8 = "setPayment Error: param paymentType cannot be NULL"
            android.util.Log.w(r1, r8)
            return
        L4a:
            if (r10 == 0) goto L59
            int r2 = r10.length()
            r3 = 3
            if (r2 <= r3) goto L59
            java.lang.String r8 = "setPayment Error:param  currencyType's length cannot bigger than 3"
            android.util.Log.w(r1, r8)
            return
        L59:
            com.reyun.tracking.a.a.b(r12)
            java.lang.String r2 = "调用 setPayment时 currencyType 为空"
            java.lang.String r10 = com.reyun.tracking.a.a.a(r10, r0, r2)
            boolean r2 = r0.equals(r10)
            if (r2 == 0) goto L6e
            java.lang.String r8 = "setPayment Error:param  currencyType cannot be NULL"
            android.util.Log.w(r1, r8)
            return
        L6e:
            r2 = 0
            int r2 = (r11 > r2 ? 1 : (r11 == r2 ? 0 : -1))
            if (r2 > 0) goto L79
            java.lang.String r8 = "setPayment Error: param currencyAmount cannot <= 0"
            android.util.Log.w(r1, r8)
            return
        L79:
            r1 = 0
            android.content.Context r2 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L92
            java.lang.String r3 = com.reyun.tracking.sdk.Tracking.m_appKey     // Catch: java.lang.Throwable -> L92
            java.lang.String r4 = "payment"
            android.content.Context r5 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L92
            java.lang.String r6 = "tracking_login"
            java.lang.String r7 = "account"
            java.lang.String r5 = com.reyun.tracking.utils.f.a(r5, r6, r7, r0)     // Catch: java.lang.Throwable -> L92
            java.lang.String r6 = com.reyun.tracking.sdk.Tracking.m_channelid     // Catch: java.lang.Throwable -> L92
            r7 = 0
            org.json.JSONObject r1 = com.reyun.tracking.a.h.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L92
            goto L96
        L92:
            r0 = move-exception
            r0.printStackTrace()
        L96:
            java.lang.String r0 = "context"
            org.json.JSONObject r0 = r1.getJSONObject(r0)     // Catch: org.json.JSONException -> Lc9
            if (r0 == 0) goto Lca
            java.lang.String r2 = "_transactionId"
            r0.put(r2, r8)     // Catch: org.json.JSONException -> Lc9
            java.lang.String r8 = "_paymentType"
            r0.put(r8, r9)     // Catch: org.json.JSONException -> Lc9
            java.lang.String r8 = "_currencytype"
            r0.put(r8, r10)     // Catch: org.json.JSONException -> Lc9
            java.lang.String r8 = "_currencyAmount"
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> Lc9
            r9.<init>()     // Catch: org.json.JSONException -> Lc9
            r9.append(r11)     // Catch: org.json.JSONException -> Lc9
            java.lang.String r10 = ""
            r9.append(r10)     // Catch: org.json.JSONException -> Lc9
            java.lang.String r9 = r9.toString()     // Catch: org.json.JSONException -> Lc9
            r0.put(r8, r9)     // Catch: org.json.JSONException -> Lc9
            if (r12 == 0) goto Lca
            com.reyun.tracking.a.a.a(r12, r1)     // Catch: org.json.JSONException -> Lc9
            goto Lca
        Lc9:
        Lca:
            if (r1 == 0) goto Ld3
            java.lang.String r8 = "payment"
            java.lang.String r9 = "receive/tkio/payment"
            sendOrSava(r8, r8, r1, r9)
        Ld3:
            return
    }

    public static void setPaymentStart(java.lang.String r1, java.lang.String r2, java.lang.String r3, float r4) {
            r0 = 0
            java.util.Map r0 = (java.util.Map) r0
            setPaymentStart(r1, r2, r3, r4, r0)
            return
    }

    public static void setPaymentStart(java.lang.String r1, java.lang.String r2, java.lang.String r3, float r4, java.lang.String r5) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r0.<init>(r5)     // Catch: org.json.JSONException -> Ld
            java.util.Map r5 = jsonToMap(r0)     // Catch: org.json.JSONException -> Ld
            setPaymentStart(r1, r2, r3, r4, r5)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public static void setPaymentStart(java.lang.String r4, java.lang.String r5, java.lang.String r6, float r7, java.util.Map r8) {
            boolean r0 = com.reyun.tracking.sdk.Tracking.isPreInit
            java.lang.String r1 = "TrackingIO"
            if (r0 != 0) goto Lc
            java.lang.String r4 = "setPaymentStart Error:preInit init failed! Did you call the method 'preInit'?"
            android.util.Log.e(r1, r4)
            return
        Lc:
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.m_context
            if (r0 != 0) goto L16
            java.lang.String r4 = "setPaymentStart Error: Null context! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r1, r4)
            return
        L16:
            java.lang.String r0 = com.reyun.tracking.sdk.Tracking.m_appKey
            boolean r0 = com.reyun.tracking.a.a.a(r0)
            if (r0 != 0) goto L24
            java.lang.String r4 = "setPaymentStart Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r1, r4)
            return
        L24:
            java.lang.String r0 = "unknown"
            java.lang.String r2 = "调用 setPaymentStart时 transactionId 为空"
            java.lang.String r4 = com.reyun.tracking.a.a.a(r4, r0, r2)
            boolean r2 = r0.equals(r4)
            if (r2 == 0) goto L38
            java.lang.String r4 = "setPaymentStart Error: param transactionId cannot be NULL"
            android.util.Log.w(r1, r4)
            return
        L38:
            java.lang.String r2 = "调用 setPaymentStart时 paymentType 为空"
            java.lang.String r5 = com.reyun.tracking.a.a.a(r5, r0, r2)
            boolean r2 = r0.equals(r5)
            if (r2 == 0) goto L4a
            java.lang.String r4 = "setPaymentStart Error: param paymentType cannot be NULL"
            android.util.Log.w(r1, r4)
            return
        L4a:
            com.reyun.tracking.a.a.b(r8)
            if (r6 == 0) goto L5c
            int r2 = r6.length()
            r3 = 3
            if (r2 <= r3) goto L5c
            java.lang.String r4 = "setPayment Error:param  currencyType's length cannot bigger than 3"
            android.util.Log.w(r1, r4)
            return
        L5c:
            java.lang.String r2 = "调用 setPaymentStart时 currencyType 为空"
            java.lang.String r6 = com.reyun.tracking.a.a.a(r6, r0, r2)
            boolean r0 = r0.equals(r6)
            if (r0 == 0) goto L6e
            java.lang.String r4 = "setPaymentStart Error: param currencyType cannot be NULL"
            android.util.Log.w(r1, r4)
            return
        L6e:
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 > 0) goto L79
            java.lang.String r4 = "setPaymentStart Error: param currencyamount cannot <= 0"
            android.util.Log.w(r1, r4)
            return
        L79:
            if (r8 != 0) goto L80
            java.util.HashMap r8 = new java.util.HashMap
            r8.<init>()
        L80:
            java.lang.String r0 = "_transactionId"
            r8.put(r0, r4)
            java.lang.String r4 = "_paymentType"
            r8.put(r4, r5)
            java.lang.String r4 = "_currencytype"
            r8.put(r4, r6)
            java.lang.Float r4 = java.lang.Float.valueOf(r7)
            java.lang.String r5 = "_currencyAmount"
            r8.put(r5, r4)
            java.lang.String r4 = "paymentStart"
            setEvent(r4, r8)
            return
    }

    public static void setRegisterWithAccountID(java.lang.String r1) {
            r0 = 0
            java.util.Map r0 = (java.util.Map) r0
            setRegisterWithAccountID(r1, r0)
            return
    }

    public static void setRegisterWithAccountID(java.lang.String r1, java.lang.String r2) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r0.<init>(r2)     // Catch: org.json.JSONException -> Ld
            java.util.Map r2 = jsonToMap(r0)     // Catch: org.json.JSONException -> Ld
            setRegisterWithAccountID(r1, r2)     // Catch: org.json.JSONException -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            return
    }

    public static void setRegisterWithAccountID(java.lang.String r9, java.util.Map r10) {
            boolean r0 = com.reyun.tracking.sdk.Tracking.isPreInit
            java.lang.String r1 = "TrackingIO"
            if (r0 != 0) goto Lc
            java.lang.String r9 = "setRegisterWithAccountID Error:preInit init failed! Did you call the method 'preInit'?"
            android.util.Log.e(r1, r9)
            return
        Lc:
            android.content.Context r0 = com.reyun.tracking.sdk.Tracking.m_context
            if (r0 != 0) goto L16
            java.lang.String r9 = "setRegisterWithAccountID Error: Null context! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r1, r9)
            return
        L16:
            java.lang.String r0 = com.reyun.tracking.sdk.Tracking.m_appKey
            boolean r0 = com.reyun.tracking.a.a.a(r0)
            if (r0 != 0) goto L24
            java.lang.String r9 = "setRegisterWithAccountID Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?"
            android.util.Log.w(r1, r9)
            return
        L24:
            java.lang.String r0 = "unknown"
            java.lang.String r2 = "setRegisterWithAccountID Warning: param account is NULL"
            java.lang.String r6 = com.reyun.tracking.a.a.a(r9, r0, r2)
            boolean r9 = r0.equals(r6)
            if (r9 == 0) goto L38
            java.lang.String r9 = "setRegisterWithAccountID Error: param account cannot be NULL! Upload register data failed"
            android.util.Log.w(r1, r9)
            return
        L38:
            com.reyun.tracking.a.a.b(r10)
            android.content.Context r9 = com.reyun.tracking.sdk.Tracking.m_context
            java.lang.String r0 = "tracking_login"
            java.lang.String r1 = "account"
            com.reyun.tracking.utils.f.b(r9, r0, r1, r6)
            r9 = 0
            android.content.Context r3 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L58
            java.lang.String r4 = com.reyun.tracking.sdk.Tracking.m_appKey     // Catch: java.lang.Throwable -> L58
            java.lang.String r5 = "register"
            java.lang.String r7 = com.reyun.tracking.sdk.Tracking.m_channelid     // Catch: java.lang.Throwable -> L58
            r8 = 0
            org.json.JSONObject r9 = com.reyun.tracking.a.h.a(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L58
            if (r10 == 0) goto L5c
            com.reyun.tracking.a.a.a(r10, r9)     // Catch: java.lang.Throwable -> L58
            goto L5c
        L58:
            r10 = move-exception
            r10.printStackTrace()
        L5c:
            if (r9 == 0) goto L65
            java.lang.String r10 = "register"
            java.lang.String r0 = "receive/tkio/register"
            sendOrSava(r10, r10, r9, r0)
        L65:
            return
    }

    public static void setStartupInternal(java.util.Map r7) {
            java.lang.String r0 = "TrackingIO"
            java.lang.String r1 = "setStartupInternal"
            com.reyun.tracking.a.a.d(r0, r1)
            r0 = 0
            android.content.Context r1 = com.reyun.tracking.sdk.Tracking.m_context     // Catch: java.lang.Throwable -> L1d
            java.lang.String r2 = com.reyun.tracking.sdk.Tracking.m_appKey     // Catch: java.lang.Throwable -> L1d
            java.lang.String r3 = "startup"
            java.lang.String r4 = "unknown"
            java.lang.String r5 = com.reyun.tracking.sdk.Tracking.m_channelid     // Catch: java.lang.Throwable -> L1d
            r6 = 0
            org.json.JSONObject r0 = com.reyun.tracking.a.h.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L1d
            if (r7 == 0) goto L21
            com.reyun.tracking.a.a.a(r7, r0)     // Catch: java.lang.Throwable -> L1d
            goto L21
        L1d:
            r7 = move-exception
            r7.printStackTrace()
        L21:
            if (r0 == 0) goto L2a
            java.lang.String r7 = "startup"
            java.lang.String r1 = "receive/tkio/startup"
            sendOrSava(r7, r7, r0, r1)
        L2a:
            sendFailedRecord()
            return
    }

    public static void setUploadMac(boolean r0) {
            com.reyun.tracking.sdk.Tracking.uploadMac = r0
            return
    }

    public static void setUseTcp(boolean r0) {
            com.reyun.tracking.a.i.c = r0
            return
    }
}
