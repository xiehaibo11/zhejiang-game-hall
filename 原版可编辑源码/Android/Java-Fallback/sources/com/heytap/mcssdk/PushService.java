package com.heytap.mcssdk;

public class PushService implements com.heytap.mcssdk.a {
    private static final java.lang.String APP_PACKAGE = "appPackage";
    private static final java.lang.String APP_VERSION_CODE = "versionCode";
    private static final java.lang.String APP_VERSION_NAME = "versionName";
    private static final int DEFAULT_API_MAX_COUNT = 2;
    private static final java.lang.String EVENT_ID = "eventID";
    private static final java.lang.String EXTRA = "extra";
    private static final java.lang.String GLOBAL_ID = "globalID";
    private static final int MAX_HOUR_IN_DAY = 23;
    private static final int MAX_MIN_IN_HOUR = 59;
    private static final int MCS_SUPPORT_VERSION = 1019;
    private static final java.lang.String MESSAGE_ID = "messageID";
    private static final java.lang.String MESSAGE_TYPE = "messageType";
    private static java.lang.String NEW_MCS_RECEIVE_SDK_ACTION = null;
    private static final java.lang.String NEW_MCS_RECEIVE_SDK_ACTION_Base64 = "Y29tLm1jcy5hY3Rpb24uUkVDRUlWRV9TREtfTUVTU0FHRQ==";
    private static final int[] OLD_MCS_PACKAGE = null;
    private static final int[] OLD_MCS_RECEIVE_SDK_ACTION = null;
    private static final java.lang.String PUSH_SDK_VERSION = "pushSdkVersion";
    private static final int SDK_INT_24 = 24;
    private static final java.lang.String SUPPORT_OPEN_PUSH = "supportOpenPush";
    private static final int SYSTEM_UID = 1000;
    private static final java.lang.String TASK_ID = "taskID";
    private static final java.lang.String TYPE = "type";
    private static int sCount;
    private static boolean sIsNewMcsPkg;
    private static java.lang.String sMcsPkgName;
    private java.util.concurrent.ConcurrentHashMap<java.lang.Integer, com.heytap.mcssdk.c.a> mAppLimitMap;
    private java.lang.String mAuthCode;
    private android.content.Context mContext;
    private com.heytap.msp.push.callback.ICallBackResultService mICallBackResultService;
    private com.heytap.msp.push.callback.IGetAppNotificationCallBackService mIGetAppNotificationCallBackService;
    private com.heytap.msp.push.callback.ISetAppNotificationCallBackService mISetAppNotificationCallBackService;
    private java.util.List<com.heytap.mcssdk.d.d> mParsers;
    private java.util.List<com.heytap.mcssdk.e.c> mProcessors;
    private java.lang.String mRegisterID;
    private java.lang.String mVerifyCode;


    private static class a {
        private static final com.heytap.mcssdk.PushService a = null;

        static {
                com.heytap.mcssdk.PushService r0 = new com.heytap.mcssdk.PushService
                r1 = 0
                r0.<init>(r1)
                com.heytap.mcssdk.PushService.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.heytap.mcssdk.PushService a() {
                com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.a.a
                return r0
        }
    }

    static {
            r0 = 15
            int[] r0 = new int[r0]
            r0 = {x001a: FILL_ARRAY_DATA , data: [99, 111, 109, 46, 99, 111, 108, 111, 114, 111, 115, 46, 109, 99, 115} // fill-array
            com.heytap.mcssdk.PushService.OLD_MCS_PACKAGE = r0
            r0 = 45
            int[] r0 = new int[r0]
            r0 = {x003c: FILL_ARRAY_DATA , data: [99, 111, 109, 46, 99, 111, 108, 111, 114, 111, 115, 46, 109, 99, 115, 115, 100, 107, 46, 97, 99, 116, 105, 111, 110, 46, 82, 69, 67, 69, 73, 86, 69, 95, 83, 68, 75, 95, 77, 69, 83, 83, 65, 71, 69} // fill-array
            com.heytap.mcssdk.PushService.OLD_MCS_RECEIVE_SDK_ACTION = r0
            java.lang.String r0 = ""
            com.heytap.mcssdk.PushService.NEW_MCS_RECEIVE_SDK_ACTION = r0
            r0 = 0
            com.heytap.mcssdk.PushService.sCount = r0
            return
    }

    private PushService() {
            r3 = this;
            r3.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.mProcessors = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.mParsers = r0
            r0 = 0
            r3.mRegisterID = r0
            java.lang.Class<com.heytap.mcssdk.PushService> r0 = com.heytap.mcssdk.PushService.class
            monitor-enter(r0)
            int r1 = com.heytap.mcssdk.PushService.sCount     // Catch: java.lang.Throwable -> L52
            if (r1 > 0) goto L4a
            int r1 = com.heytap.mcssdk.PushService.sCount     // Catch: java.lang.Throwable -> L52
            int r1 = r1 + 1
            com.heytap.mcssdk.PushService.sCount = r1     // Catch: java.lang.Throwable -> L52
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
            com.heytap.mcssdk.d.b r0 = new com.heytap.mcssdk.d.b
            r0.<init>()
            r3.addParser(r0)
            com.heytap.mcssdk.d.a r0 = new com.heytap.mcssdk.d.a
            r0.<init>()
            r3.addParser(r0)
            com.heytap.mcssdk.e.b r0 = new com.heytap.mcssdk.e.b
            r0.<init>()
            r3.addProcessor(r0)
            com.heytap.mcssdk.e.a r0 = new com.heytap.mcssdk.e.a
            r0.<init>()
            r3.addProcessor(r0)
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r3.mAppLimitMap = r0
            return
        L4a:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "PushService can't create again!"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L52
            throw r1     // Catch: java.lang.Throwable -> L52
        L52:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
            throw r1
    }

    PushService(com.heytap.mcssdk.PushService.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static android.content.Context access$100(com.heytap.mcssdk.PushService r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    private com.heytap.mcssdk.c.a addCommandToMap(int r5) {
            r4 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, com.heytap.mcssdk.c.a> r0 = r4.mAppLimitMap
            java.lang.Integer r1 = java.lang.Integer.valueOf(r5)
            boolean r0 = r0.containsKey(r1)
            r1 = 1
            if (r0 == 0) goto L3a
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, com.heytap.mcssdk.c.a> r0 = r4.mAppLimitMap
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            java.lang.Object r5 = r0.get(r5)
            com.heytap.mcssdk.c.a r5 = (com.heytap.mcssdk.c.a) r5
            boolean r0 = r4.checkTimeNeedUpdate(r5)
            if (r0 == 0) goto L2c
            r5.a(r1)
            long r0 = java.lang.System.currentTimeMillis()
            r5.a(r0)
            java.lang.String r0 = "addCommandToMap : appLimitBean.setCount(1)"
            goto L36
        L2c:
            int r0 = r5.b()
            int r0 = r0 + r1
            r5.a(r0)
            java.lang.String r0 = "addCommandToMap :appLimitBean.getCount() + 1"
        L36:
            com.heytap.mcssdk.utils.d.b(r0)
            goto L52
        L3a:
            com.heytap.mcssdk.c.a r0 = new com.heytap.mcssdk.c.a
            long r2 = java.lang.System.currentTimeMillis()
            r0.<init>(r2, r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, com.heytap.mcssdk.c.a> r1 = r4.mAppLimitMap
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r1.put(r5, r0)
            java.lang.String r5 = "addCommandToMap :appBean is null"
            com.heytap.mcssdk.utils.d.b(r5)
            r5 = r0
        L52:
            return r5
    }

    private synchronized void addParser(com.heytap.mcssdk.d.d r2) {
            r1 = this;
            monitor-enter(r1)
            if (r2 == 0) goto Lc
            java.util.List<com.heytap.mcssdk.d.d> r0 = r1.mParsers     // Catch: java.lang.Throwable -> L9
            r0.add(r2)     // Catch: java.lang.Throwable -> L9
            goto Lc
        L9:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        Lc:
            monitor-exit(r1)
            return
    }

    private synchronized void addProcessor(com.heytap.mcssdk.e.c r2) {
            r1 = this;
            monitor-enter(r1)
            if (r2 == 0) goto Lc
            java.util.List<com.heytap.mcssdk.e.c> r0 = r1.mProcessors     // Catch: java.lang.Throwable -> L9
            r0.add(r2)     // Catch: java.lang.Throwable -> L9
            goto Lc
        L9:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        Lc:
            monitor-exit(r1)
            return
    }

    private boolean checkAll() {
            r1 = this;
            boolean r0 = r1.checkContext()
            if (r0 == 0) goto Le
            boolean r0 = r1.checkRegisterID()
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    private boolean checkContext() {
            r1 = this;
            android.content.Context r0 = r1.mContext
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    private boolean checkRegisterID() {
            r1 = this;
            java.lang.String r0 = r1.mRegisterID
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    private boolean checkTimeNeedUpdate(com.heytap.mcssdk.c.a r6) {
            r5 = this;
            long r0 = r6.a()
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r4 = "checkTimeNeedUpdate : lastedTime "
            r6.append(r4)
            r6.append(r0)
            java.lang.String r4 = " currentTime:"
            r6.append(r4)
            r6.append(r2)
            java.lang.String r6 = r6.toString()
            com.heytap.mcssdk.utils.d.b(r6)
            long r2 = r2 - r0
            r0 = 1000(0x3e8, double:4.94E-321)
            int r6 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r6 <= 0) goto L2d
            r6 = 1
            goto L2e
        L2d:
            r6 = 0
        L2e:
            return r6
    }

    public static com.heytap.mcssdk.PushService getInstance() {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.a.a()
            return r0
    }

    private android.content.Intent getIntent(int r6, java.lang.String r7, org.json.JSONObject r8) {
            r5 = this;
            java.lang.String r0 = "extra"
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            android.content.Context r2 = r5.mContext
            java.lang.String r2 = r5.getReceiveSdkAction(r2)
            r1.setAction(r2)
            android.content.Context r2 = r5.mContext
            java.lang.String r2 = r5.getMcsPackageName(r2)
            r1.setPackage(r2)
            java.lang.String r2 = "type"
            r1.putExtra(r2, r6)
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
            java.lang.String r2 = "versionName"
            android.content.Context r3 = r5.mContext     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            android.content.Context r4 = r5.mContext     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            java.lang.String r3 = com.heytap.mcssdk.utils.Utils.getVersionName(r3, r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            r6.putOpt(r2, r3)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            java.lang.String r2 = "versionCode"
            android.content.Context r3 = r5.mContext     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            android.content.Context r4 = r5.mContext     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            int r3 = com.heytap.mcssdk.utils.Utils.getVersionCode(r3, r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            r6.putOpt(r2, r3)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            if (r8 == 0) goto L6c
            java.util.Iterator r2 = r8.keys()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
        L4f:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            if (r3 == 0) goto L6c
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            java.lang.Object r4 = r8.get(r3)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            r6.putOpt(r3, r4)     // Catch: java.lang.Throwable -> L63 java.lang.Exception -> L6c
            goto L4f
        L63:
            r7 = move-exception
            java.lang.String r6 = r6.toString()
            r1.putExtra(r0, r6)
            throw r7
        L6c:
            java.lang.String r6 = r6.toString()
            r1.putExtra(r0, r6)
            java.lang.String r6 = "params"
            r1.putExtra(r6, r7)
            android.content.Context r6 = r5.mContext
            java.lang.String r6 = r6.getPackageName()
            java.lang.String r7 = "appPackage"
            r1.putExtra(r7, r6)
            java.lang.String r6 = r5.mAuthCode
            java.lang.String r7 = "appKey"
            r1.putExtra(r7, r6)
            java.lang.String r6 = r5.mVerifyCode
            java.lang.String r7 = "appSecret"
            r1.putExtra(r7, r6)
            java.lang.String r6 = r5.mRegisterID
            java.lang.String r7 = "registerID"
            r1.putExtra(r7, r6)
            java.lang.String r6 = getSDKVersionName()
            java.lang.String r7 = "sdkVersion"
            r1.putExtra(r7, r6)
            return r1
    }

    private java.lang.String getNewMcsPackageName(android.content.Context r9) {
            r8 = this;
            java.lang.String r0 = com.heytap.mcssdk.PushService.NEW_MCS_RECEIVE_SDK_ACTION
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L15
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "Y29tLm1jcy5hY3Rpb24uUkVDRUlWRV9TREtfTUVTU0FHRQ=="
            byte[] r1 = com.heytap.mcssdk.a.a.b(r1)
            r0.<init>(r1)
            com.heytap.mcssdk.PushService.NEW_MCS_RECEIVE_SDK_ACTION = r0
        L15:
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = com.heytap.mcssdk.PushService.NEW_MCS_RECEIVE_SDK_ACTION
            r0.<init>(r1)
            android.content.pm.PackageManager r1 = r9.getPackageManager()
            r2 = 8192(0x2000, float:1.148E-41)
            java.util.List r0 = r1.queryIntentServices(r0, r2)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 24
            if (r1 < r2) goto L6c
            java.util.Iterator r0 = r0.iterator()
        L30:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L6c
            java.lang.Object r1 = r0.next()
            android.content.pm.ResolveInfo r1 = (android.content.pm.ResolveInfo) r1
            android.content.pm.ServiceInfo r1 = r1.serviceInfo
            java.lang.String r1 = r1.packageName
            android.content.pm.PackageManager r2 = r9.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L30
            r3 = 0
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo(r1, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L30
            int r2 = r2.flags     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L30
            r4 = 1
            r2 = r2 & r4
            if (r2 != r4) goto L51
            r2 = r4
            goto L52
        L51:
            r2 = r3
        L52:
            android.content.pm.PackageManager r5 = r9.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L30
            int r5 = r5.getPackageUid(r1, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L30
            android.content.pm.PackageManager r6 = r9.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L30
            java.lang.String r7 = "android"
            int r6 = r6.getPackageUid(r7, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L30
            if (r5 != r6) goto L67
            r3 = r4
        L67:
            if (r2 != 0) goto L6b
            if (r3 == 0) goto L30
        L6b:
            return r1
        L6c:
            r9 = 0
            return r9
    }

    public static int getSDKVersionCode() {
            r0 = 3000(0xbb8, float:4.204E-42)
            return r0
    }

    public static java.lang.String getSDKVersionName() {
            java.lang.String r0 = "3.0.0"
            return r0
    }

    private boolean isSupportPushInner(android.content.Context r3) {
            r2 = this;
            android.content.Context r0 = r2.mContext
            if (r0 != 0) goto La
            android.content.Context r3 = r3.getApplicationContext()
            r2.mContext = r3
        La:
            android.content.Context r3 = r2.mContext
            java.lang.String r3 = r2.getMcsPackageName(r3)
            android.content.Context r0 = r2.mContext
            boolean r0 = com.heytap.mcssdk.utils.Utils.isExistPackage(r0, r3)
            if (r0 == 0) goto L2e
            android.content.Context r0 = r2.mContext
            int r0 = com.heytap.mcssdk.utils.Utils.getVersionCode(r0, r3)
            r1 = 1019(0x3fb, float:1.428E-42)
            if (r0 < r1) goto L2e
            android.content.Context r0 = r2.mContext
            java.lang.String r1 = "supportOpenPush"
            boolean r3 = com.heytap.mcssdk.utils.Utils.isSupportPush(r0, r3, r1)
            if (r3 == 0) goto L2e
            r3 = 1
            goto L2f
        L2e:
            r3 = 0
        L2f:
            return r3
    }

    @java.lang.Deprecated
    private static void onAppStart(android.content.Context r4) {
            com.heytap.msp.push.mode.MessageStat r0 = new com.heytap.msp.push.mode.MessageStat
            java.lang.String r1 = r4.getPackageName()
            java.lang.String r2 = "app_start"
            r3 = 0
            r0.<init>(r1, r2, r3)
            com.heytap.mcssdk.utils.StatUtil.statisticMessage(r4, r0)
            return
    }

    private void startMcsService(int r2, java.lang.String r3, org.json.JSONObject r4) {
            r1 = this;
            boolean r0 = r1.checkCommandLimit(r2)
            if (r0 == 0) goto L14
            com.heytap.msp.push.callback.ICallBackResultService r3 = r1.mICallBackResultService
            if (r3 == 0) goto L13
            int r2 = r1.getErrorCode(r2)
            java.lang.String r4 = "api_call_too_frequently"
            r3.onError(r2, r4)
        L13:
            return
        L14:
            android.content.Intent r2 = r1.getIntent(r2, r3, r4)     // Catch: java.lang.Exception -> L1e
            android.content.Context r3 = r1.mContext     // Catch: java.lang.Exception -> L1e
            r3.startService(r2)     // Catch: java.lang.Exception -> L1e
            goto L37
        L1e:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "startMcsService--Exception"
            r3.append(r4)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.heytap.mcssdk.utils.d.e(r2)
        L37:
            return
    }

    private void startMcsService(int r2, org.json.JSONObject r3) {
            r1 = this;
            java.lang.String r0 = ""
            r1.startMcsService(r2, r0, r3)
            return
    }

    public void bindMcsService(int r4) {
            r3 = this;
            boolean r0 = r3.checkCommandLimit(r4)
            if (r0 == 0) goto L14
            com.heytap.msp.push.callback.ICallBackResultService r0 = r3.mICallBackResultService
            if (r0 == 0) goto L13
            int r4 = r3.getErrorCode(r4)
            java.lang.String r1 = "api_call_too_frequently"
            r0.onError(r4, r1)
        L13:
            return
        L14:
            r0 = 0
            java.lang.String r1 = ""
            android.content.Intent r4 = r3.getIntent(r4, r1, r0)
            android.content.Context r0 = r3.mContext
            com.heytap.mcssdk.PushService$1 r1 = new com.heytap.mcssdk.PushService$1
            r1.<init>(r3, r4)
            r2 = 1
            r0.bindService(r4, r1, r2)
            return
    }

    public boolean checkCommandLimit(int r4) {
            r3 = this;
            com.heytap.mcssdk.c.a r0 = r3.addCommandToMap(r4)
            r1 = 0
            r2 = 12291(0x3003, float:1.7223E-41)
            if (r4 == r2) goto L15
            r2 = 12312(0x3018, float:1.7253E-41)
            if (r4 == r2) goto L15
            int r4 = r0.b()
            r0 = 2
            if (r4 <= r0) goto L15
            r1 = 1
        L15:
            return r1
    }

    @Override
    public void clearNotificationType() {
            r1 = this;
            r0 = 0
            r1.clearNotificationType(r0)
            return
    }

    @Override
    public void clearNotificationType(org.json.JSONObject r2) {
            r1 = this;
            boolean r0 = r1.checkAll()
            if (r0 == 0) goto Lc
            r0 = 12308(0x3014, float:1.7247E-41)
            r1.startMcsService(r0, r2)
            goto L13
        Lc:
            java.lang.String r2 = "mcssdk---"
            java.lang.String r0 = "please call the register first!"
            com.heytap.mcssdk.utils.d.e(r2, r0)
        L13:
            return
    }

    @Override
    public void clearNotifications() {
            r1 = this;
            r0 = 0
            r1.clearNotifications(r0)
            return
    }

    @Override
    public void clearNotifications(org.json.JSONObject r2) {
            r1 = this;
            boolean r0 = r1.checkContext()
            if (r0 == 0) goto Lc
            r0 = 12311(0x3017, float:1.7251E-41)
            r1.startMcsService(r0, r2)
            goto L13
        Lc:
            java.lang.String r2 = "mcssdk---"
            java.lang.String r0 = "please call the register first!"
            com.heytap.mcssdk.utils.d.e(r2, r0)
        L13:
            return
    }

    @Override
    public void disableAppNotificationSwitch(com.heytap.msp.push.callback.ISetAppNotificationCallBackService r2) {
            r1 = this;
            boolean r0 = r1.checkContext()
            if (r0 == 0) goto Lf
            r1.mISetAppNotificationCallBackService = r2
            r2 = 12317(0x301d, float:1.726E-41)
            r0 = 0
            r1.startMcsService(r2, r0)
            goto L1b
        Lf:
            com.heytap.msp.push.callback.ICallBackResultService r2 = r1.getPushCallback()
            if (r2 == 0) goto L1b
            com.heytap.msp.push.callback.ISetAppNotificationCallBackService r2 = r1.mISetAppNotificationCallBackService
            r0 = -2
            r2.onSetAppNotificationSwitch(r0)
        L1b:
            return
    }

    @Override
    public void enableAppNotificationSwitch(com.heytap.msp.push.callback.ISetAppNotificationCallBackService r2) {
            r1 = this;
            boolean r0 = r1.checkContext()
            if (r0 == 0) goto Lf
            r1.mISetAppNotificationCallBackService = r2
            r2 = 12316(0x301c, float:1.7258E-41)
            r0 = 0
            r1.startMcsService(r2, r0)
            goto L17
        Lf:
            com.heytap.msp.push.callback.ISetAppNotificationCallBackService r2 = r1.mISetAppNotificationCallBackService
            if (r2 == 0) goto L17
            r0 = -2
            r2.onSetAppNotificationSwitch(r0)
        L17:
            return
    }

    public java.util.Map<java.lang.Integer, com.heytap.mcssdk.c.a> getAppLimitMap() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, com.heytap.mcssdk.c.a> r0 = r1.mAppLimitMap
            return r0
    }

    @Override
    public void getAppNotificationSwitch(com.heytap.msp.push.callback.IGetAppNotificationCallBackService r3) {
            r2 = this;
            boolean r0 = r2.checkContext()
            if (r0 == 0) goto Lf
            r2.mIGetAppNotificationCallBackService = r3
            r3 = 12318(0x301e, float:1.7261E-41)
            r0 = 0
            r2.startMcsService(r3, r0)
            goto L18
        Lf:
            com.heytap.msp.push.callback.IGetAppNotificationCallBackService r3 = r2.mIGetAppNotificationCallBackService
            if (r3 == 0) goto L18
            r0 = -2
            r1 = 0
            r3.onGetAppNotificationSwitch(r0, r1)
        L18:
            return
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.mContext
            return r0
    }

    public int getErrorCode(int r1) {
            r0 = this;
            switch(r1) {
                case 12289: goto L37;
                case 12290: goto L35;
                case 12291: goto L32;
                default: goto L3;
            }
        L3:
            switch(r1) {
                case 12298: goto L2f;
                case 12299: goto L2d;
                case 12300: goto L2b;
                default: goto L6;
            }
        L6:
            switch(r1) {
                case 12306: goto L28;
                case 12307: goto L26;
                case 12308: goto L24;
                case 12309: goto L22;
                case 12310: goto L20;
                case 12311: goto L1d;
                case 12312: goto L1a;
                case 12313: goto L17;
                default: goto L9;
            }
        L9:
            switch(r1) {
                case 12316: goto L14;
                case 12317: goto L11;
                case 12318: goto Le;
                default: goto Lc;
            }
        Lc:
            r1 = 0
            return r1
        Le:
            r1 = -17
            return r1
        L11:
            r1 = -16
            return r1
        L14:
            r1 = -15
            return r1
        L17:
            r1 = -12
            return r1
        L1a:
            r1 = -13
            return r1
        L1d:
            r1 = -9
            return r1
        L20:
            r1 = -8
            return r1
        L22:
            r1 = -5
            return r1
        L24:
            r1 = -7
            return r1
        L26:
            r1 = -6
            return r1
        L28:
            r1 = -10
            return r1
        L2b:
            r1 = -4
            return r1
        L2d:
            r1 = -3
            return r1
        L2f:
            r1 = -11
            return r1
        L32:
            r1 = -14
            return r1
        L35:
            r1 = -2
            return r1
        L37:
            r1 = -1
            return r1
    }

    public java.lang.String getMcsPackageName(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = com.heytap.mcssdk.PushService.sMcsPkgName
            if (r0 != 0) goto L19
            java.lang.String r2 = r1.getNewMcsPackageName(r2)
            if (r2 != 0) goto L14
            int[] r2 = com.heytap.mcssdk.PushService.OLD_MCS_PACKAGE
            java.lang.String r2 = com.heytap.mcssdk.utils.Utils.getString(r2)
            com.heytap.mcssdk.PushService.sMcsPkgName = r2
            r2 = 0
            goto L17
        L14:
            com.heytap.mcssdk.PushService.sMcsPkgName = r2
            r2 = 1
        L17:
            com.heytap.mcssdk.PushService.sIsNewMcsPkg = r2
        L19:
            java.lang.String r2 = com.heytap.mcssdk.PushService.sMcsPkgName
            return r2
    }

    @Override
    public void getNotificationStatus() {
            r1 = this;
            r0 = 0
            r1.getNotificationStatus(r0)
            return
    }

    @Override
    public void getNotificationStatus(org.json.JSONObject r3) {
            r2 = this;
            boolean r0 = r2.checkAll()
            if (r0 == 0) goto Lc
            r0 = 12309(0x3015, float:1.7249E-41)
            r2.startMcsService(r0, r3)
            goto L1b
        Lc:
            com.heytap.msp.push.callback.ICallBackResultService r3 = r2.getPushCallback()
            if (r3 == 0) goto L1b
            com.heytap.msp.push.callback.ICallBackResultService r3 = r2.getPushCallback()
            r0 = -2
            r1 = 0
            r3.onGetNotificationStatus(r0, r1)
        L1b:
            return
    }

    public java.util.List<com.heytap.mcssdk.d.d> getParsers() {
            r1 = this;
            java.util.List<com.heytap.mcssdk.d.d> r0 = r1.mParsers
            return r0
    }

    public java.util.List<com.heytap.mcssdk.e.c> getProcessors() {
            r1 = this;
            java.util.List<com.heytap.mcssdk.e.c> r0 = r1.mProcessors
            return r0
    }

    public com.heytap.msp.push.callback.ICallBackResultService getPushCallback() {
            r1 = this;
            com.heytap.msp.push.callback.ICallBackResultService r0 = r1.mICallBackResultService
            return r0
    }

    public com.heytap.msp.push.callback.IGetAppNotificationCallBackService getPushGetAppNotificationCallBack() {
            r1 = this;
            com.heytap.msp.push.callback.IGetAppNotificationCallBackService r0 = r1.mIGetAppNotificationCallBackService
            return r0
    }

    public com.heytap.msp.push.callback.ISetAppNotificationCallBackService getPushSetAppNotificationCallBack() {
            r1 = this;
            com.heytap.msp.push.callback.ISetAppNotificationCallBackService r0 = r1.mISetAppNotificationCallBackService
            return r0
    }

    public void getPushStatus() {
            r3 = this;
            boolean r0 = r3.checkAll()
            if (r0 == 0) goto Ld
            r0 = 12306(0x3012, float:1.7244E-41)
            r1 = 0
            r3.startMcsService(r0, r1)
            goto L1c
        Ld:
            com.heytap.msp.push.callback.ICallBackResultService r0 = r3.getPushCallback()
            if (r0 == 0) goto L1c
            com.heytap.msp.push.callback.ICallBackResultService r0 = r3.getPushCallback()
            r1 = -2
            r2 = 0
            r0.onGetPushStatus(r1, r2)
        L1c:
            return
    }

    public int getPushVersionCode() {
            r2 = this;
            boolean r0 = r2.checkContext()
            if (r0 == 0) goto L11
            android.content.Context r0 = r2.mContext
            java.lang.String r1 = r2.getMcsPackageName(r0)
            int r0 = com.heytap.mcssdk.utils.Utils.getVersionCode(r0, r1)
            return r0
        L11:
            r0 = 0
            return r0
    }

    public java.lang.String getPushVersionName() {
            r2 = this;
            boolean r0 = r2.checkContext()
            if (r0 == 0) goto L11
            android.content.Context r0 = r2.mContext
            java.lang.String r1 = r2.getMcsPackageName(r0)
            java.lang.String r0 = com.heytap.mcssdk.utils.Utils.getVersionName(r0, r1)
            return r0
        L11:
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String getReceiveSdkAction(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = com.heytap.mcssdk.PushService.sMcsPkgName
            if (r0 != 0) goto L7
            r1.getNewMcsPackageName(r2)
        L7:
            boolean r2 = com.heytap.mcssdk.PushService.sIsNewMcsPkg
            if (r2 == 0) goto L23
            java.lang.String r2 = com.heytap.mcssdk.PushService.NEW_MCS_RECEIVE_SDK_ACTION
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L20
            java.lang.String r2 = new java.lang.String
            java.lang.String r0 = "Y29tLm1jcy5hY3Rpb24uUkVDRUlWRV9TREtfTUVTU0FHRQ=="
            byte[] r0 = com.heytap.mcssdk.a.a.b(r0)
            r2.<init>(r0)
            com.heytap.mcssdk.PushService.NEW_MCS_RECEIVE_SDK_ACTION = r2
        L20:
            java.lang.String r2 = com.heytap.mcssdk.PushService.NEW_MCS_RECEIVE_SDK_ACTION
            return r2
        L23:
            int[] r2 = com.heytap.mcssdk.PushService.OLD_MCS_RECEIVE_SDK_ACTION
            java.lang.String r2 = com.heytap.mcssdk.utils.Utils.getString(r2)
            return r2
    }

    @Override
    public void getRegister() {
            r1 = this;
            r0 = 0
            r1.getRegister(r0)
            return
    }

    @Override
    public void getRegister(org.json.JSONObject r3) {
            r2 = this;
            boolean r0 = r2.checkContext()
            if (r0 == 0) goto Lc
            r0 = 12289(0x3001, float:1.722E-41)
            r2.startMcsService(r0, r3)
            goto L1b
        Lc:
            com.heytap.msp.push.callback.ICallBackResultService r3 = r2.getPushCallback()
            if (r3 == 0) goto L1b
            com.heytap.msp.push.callback.ICallBackResultService r3 = r2.getPushCallback()
            r0 = -2
            r1 = 0
            r3.onRegister(r0, r1)
        L1b:
            return
    }

    @Override
    public java.lang.String getRegisterID() {
            r1 = this;
            java.lang.String r0 = r1.mRegisterID
            return r0
    }

    public com.heytap.mcssdk.PushService init(android.content.Context r2, boolean r3) {
            r1 = this;
            if (r2 == 0) goto L13
            r1.innerInit(r2)
            com.heytap.mcssdk.b.a r2 = new com.heytap.mcssdk.b.a
            r2.<init>()
            android.content.Context r0 = r1.mContext
            r2.a(r0)
            com.heytap.mcssdk.utils.d.f(r3)
            return r1
        L13:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "context can't be null"
            r2.<init>(r3)
            throw r2
    }

    public void innerInit(android.content.Context r2) {
            r1 = this;
            android.content.Context r2 = r2.getApplicationContext()
            r1.mContext = r2
            java.lang.String r0 = com.heytap.mcssdk.PushService.sMcsPkgName
            if (r0 != 0) goto L1f
            java.lang.String r2 = r1.getNewMcsPackageName(r2)
            if (r2 != 0) goto L1a
            int[] r2 = com.heytap.mcssdk.PushService.OLD_MCS_PACKAGE
            java.lang.String r2 = com.heytap.mcssdk.utils.Utils.getString(r2)
            com.heytap.mcssdk.PushService.sMcsPkgName = r2
            r2 = 0
            goto L1d
        L1a:
            com.heytap.mcssdk.PushService.sMcsPkgName = r2
            r2 = 1
        L1d:
            com.heytap.mcssdk.PushService.sIsNewMcsPkg = r2
        L1f:
            return
    }

    public boolean isSupportPushByClient(android.content.Context r1) {
            r0 = this;
            boolean r1 = r0.isSupportPushInner(r1)
            return r1
    }

    @Override
    public void openNotificationSettings() {
            r1 = this;
            r0 = 0
            r1.openNotificationSettings(r0)
            return
    }

    @Override
    public void openNotificationSettings(org.json.JSONObject r2) {
            r1 = this;
            boolean r0 = r1.checkAll()
            if (r0 == 0) goto Lc
            r0 = 12310(0x3016, float:1.725E-41)
            r1.startMcsService(r0, r2)
            goto L13
        Lc:
            java.lang.String r2 = "mcssdk---"
            java.lang.String r0 = "please call the register first!"
            com.heytap.mcssdk.utils.d.e(r2, r0)
        L13:
            return
    }

    @Override
    public void pausePush() {
            r1 = this;
            r0 = 0
            r1.pausePush(r0)
            return
    }

    @Override
    public void pausePush(org.json.JSONObject r2) {
            r1 = this;
            boolean r0 = r1.checkAll()
            if (r0 == 0) goto Lc
            r0 = 12299(0x300b, float:1.7235E-41)
            r1.startMcsService(r0, r2)
            goto L13
        Lc:
            java.lang.String r2 = "mcssdk---"
            java.lang.String r0 = "please call the register first!"
            com.heytap.mcssdk.utils.d.e(r2, r0)
        L13:
            return
    }

    @Override
    public void register(android.content.Context r7, java.lang.String r8, java.lang.String r9, com.heytap.msp.push.callback.ICallBackResultService r10) {
            r6 = this;
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r10
            r0.register(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public void register(android.content.Context r4, java.lang.String r5, java.lang.String r6, org.json.JSONObject r7, com.heytap.msp.push.callback.ICallBackResultService r8) {
            r3 = this;
            r0 = 0
            r1 = -2
            if (r4 != 0) goto La
            if (r8 == 0) goto L9
            r8.onRegister(r1, r0)
        L9:
            return
        La:
            android.content.Context r2 = r3.mContext
            if (r2 != 0) goto L14
            android.content.Context r2 = r4.getApplicationContext()
            r3.mContext = r2
        L14:
            android.content.Context r2 = r3.mContext
            boolean r2 = com.heytap.mcssdk.utils.Utils.isSupportPushByClient(r2)
            if (r2 != 0) goto L22
            if (r8 == 0) goto L21
            r8.onRegister(r1, r0)
        L21:
            return
        L22:
            r3.mAuthCode = r5
            r3.mVerifyCode = r6
            r3.mICallBackResultService = r8
            if (r7 != 0) goto L2f
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L2f:
            java.lang.String r5 = "appVersionCode"
            int r6 = com.heytap.mcssdk.utils.Utils.getVersionCode(r4)     // Catch: org.json.JSONException -> L46
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: org.json.JSONException -> L46
            r7.putOpt(r5, r6)     // Catch: org.json.JSONException -> L46
            java.lang.String r5 = "appVersionName"
            java.lang.String r4 = com.heytap.mcssdk.utils.Utils.getVersionName(r4)     // Catch: org.json.JSONException -> L46
            r7.putOpt(r5, r4)     // Catch: org.json.JSONException -> L46
            goto L5f
        L46:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "register-Exception:"
            r5.append(r6)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.heytap.mcssdk.utils.d.e(r4)
        L5f:
            r4 = 12289(0x3001, float:1.722E-41)
            r3.startMcsService(r4, r7)
            return
    }

    @Override
    public void requestNotificationPermission() {
            r2 = this;
            boolean r0 = r2.checkContext()
            if (r0 == 0) goto Lc
            r0 = 12313(0x3019, float:1.7254E-41)
            r2.bindMcsService(r0)
            goto L13
        Lc:
            java.lang.String r0 = "mcssdk---"
            java.lang.String r1 = "please call the register first!"
            com.heytap.mcssdk.utils.d.e(r0, r1)
        L13:
            return
    }

    @Override
    public void resumePush() {
            r1 = this;
            r0 = 0
            r1.resumePush(r0)
            return
    }

    @Override
    public void resumePush(org.json.JSONObject r2) {
            r1 = this;
            boolean r0 = r1.checkAll()
            if (r0 == 0) goto Lc
            r0 = 12300(0x300c, float:1.7236E-41)
            r1.startMcsService(r0, r2)
            goto L13
        Lc:
            java.lang.String r2 = "mcssdk---"
            java.lang.String r0 = "please call the register first!"
            com.heytap.mcssdk.utils.d.e(r2, r0)
        L13:
            return
    }

    public void setAppKeySecret(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.mAuthCode = r1
            r0.mVerifyCode = r2
            return
    }

    @Override
    public void setNotificationType(int r2) {
            r1 = this;
            r0 = 0
            r1.setNotificationType(r2, r0)
            return
    }

    @Override
    public void setNotificationType(int r3, org.json.JSONObject r4) {
            r2 = this;
            boolean r0 = r2.checkAll()
            if (r0 == 0) goto L1d
            r0 = 12307(0x3013, float:1.7246E-41)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = ""
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r2.startMcsService(r0, r3, r4)
            goto L24
        L1d:
            java.lang.String r3 = "mcssdk---"
            java.lang.String r4 = "please call the register first!"
            com.heytap.mcssdk.utils.d.e(r3, r4)
        L24:
            return
    }

    public void setPushCallback(com.heytap.msp.push.callback.ICallBackResultService r1) {
            r0 = this;
            r0.mICallBackResultService = r1
            return
    }

    @Override
    public void setPushTime(java.util.List<java.lang.Integer> r8, int r9, int r10, int r11, int r12) {
            r7 = this;
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.setPushTime(r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    public void setPushTime(java.util.List<java.lang.Integer> r3, int r4, int r5, int r6, int r7, org.json.JSONObject r8) {
            r2 = this;
            boolean r0 = r2.checkAll()
            if (r0 == 0) goto L5d
            if (r3 == 0) goto L55
            int r0 = r3.size()
            if (r0 <= 0) goto L55
            if (r4 < 0) goto L55
            if (r5 < 0) goto L55
            if (r6 < r4) goto L55
            r0 = 23
            if (r6 > r0) goto L55
            if (r7 < r5) goto L55
            r0 = 59
            if (r7 > r0) goto L55
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L4a
            r0.<init>()     // Catch: org.json.JSONException -> L4a
            java.lang.String r1 = "weekDays"
            java.lang.String r3 = com.heytap.mcssdk.c.b.a(r3)     // Catch: org.json.JSONException -> L4a
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L4a
            java.lang.String r3 = "startHour"
            r0.put(r3, r4)     // Catch: org.json.JSONException -> L4a
            java.lang.String r3 = "startMin"
            r0.put(r3, r5)     // Catch: org.json.JSONException -> L4a
            java.lang.String r3 = "endHour"
            r0.put(r3, r6)     // Catch: org.json.JSONException -> L4a
            java.lang.String r3 = "endMin"
            r0.put(r3, r7)     // Catch: org.json.JSONException -> L4a
            r3 = 12298(0x300a, float:1.7233E-41)
            java.lang.String r4 = r0.toString()     // Catch: org.json.JSONException -> L4a
            r2.startMcsService(r3, r4, r8)     // Catch: org.json.JSONException -> L4a
            goto L6d
        L4a:
            r3 = move-exception
            java.lang.String r3 = r3.getLocalizedMessage()
            java.lang.String r4 = "mcssdk---"
            com.heytap.mcssdk.utils.d.e(r4, r3)
            goto L6d
        L55:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "params are not all right,please check params"
            r3.<init>(r4)
            throw r3
        L5d:
            com.heytap.msp.push.callback.ICallBackResultService r3 = r2.getPushCallback()
            if (r3 == 0) goto L6d
            com.heytap.msp.push.callback.ICallBackResultService r3 = r2.getPushCallback()
            r4 = -2
            java.lang.String r5 = "please call the register first!"
            r3.onSetPushTime(r4, r5)
        L6d:
            return
    }

    @Override
    public void setRegisterID(java.lang.String r1) {
            r0 = this;
            r0.mRegisterID = r1
            return
    }

    @Override
    public void unRegister() {
            r1 = this;
            r0 = 0
            r1.unRegister(r0)
            return
    }

    public void unRegister(android.content.Context r1, java.lang.String r2, java.lang.String r3, org.json.JSONObject r4, com.heytap.msp.push.callback.ICallBackResultService r5) {
            r0 = this;
            r0.mAuthCode = r2
            r0.mVerifyCode = r3
            android.content.Context r1 = r1.getApplicationContext()
            r0.mContext = r1
            r0.mICallBackResultService = r5
            r0.unRegister(r4)
            return
    }

    @Override
    public void unRegister(org.json.JSONObject r2) {
            r1 = this;
            boolean r0 = r1.checkContext()
            if (r0 == 0) goto Lc
            r0 = 12290(0x3002, float:1.7222E-41)
            r1.startMcsService(r0, r2)
            goto L1a
        Lc:
            com.heytap.msp.push.callback.ICallBackResultService r2 = r1.getPushCallback()
            if (r2 == 0) goto L1a
            com.heytap.msp.push.callback.ICallBackResultService r2 = r1.getPushCallback()
            r0 = -2
            r2.onUnRegister(r0)
        L1a:
            return
    }
}
