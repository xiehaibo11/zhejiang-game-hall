package com.sigmob.windad;

public class WindAds {
    public static final java.lang.String ADN_ID = "ADN_ID";
    public static final java.lang.String AD_SCENE_DESC = "scene_desc";
    public static final java.lang.String AD_SCENE_ID = "scene_id";
    public static final java.lang.String AUCTION_PRICE = "AUCTION_PRICE";
    public static final java.lang.String CNY = "CNY";
    public static final java.lang.String CURRENCY = "CURRENCY";
    public static final java.lang.String HIGHEST_LOSS_PRICE = "HIGHEST_LOSS_PRICE";
    public static final java.lang.String LOSS_REASON = "LOSS_REASON";
    public static final java.lang.String USD = "USD";
    private static volatile com.sigmob.windad.WindAds a;
    private boolean b;
    private com.sigmob.windad.WindAdOptions c;
    private boolean d;
    private android.os.Handler e;
    private com.sigmob.windad.OnInitializationListener f;
    private boolean g;
    private int h;
    private boolean i;
    private int j;
    private int k;

    static class 1 {
        static final int[] a = null;

        static {
                com.sigmob.windad.consent.ConsentStatus[] r0 = com.sigmob.windad.consent.ConsentStatus.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.sigmob.windad.WindAds.1.a = r0
                com.sigmob.windad.consent.ConsentStatus r1 = com.sigmob.windad.consent.ConsentStatus.ACCEPT     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.sigmob.windad.WindAds.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.sigmob.windad.consent.ConsentStatus r1 = com.sigmob.windad.consent.ConsentStatus.DENIED     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.sigmob.windad.WindAds.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.sigmob.windad.consent.ConsentStatus r1 = com.sigmob.windad.consent.ConsentStatus.UNKNOWN     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    private WindAds() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            r0 = 1
            r2.g = r0
            r2.i = r0
            r0 = 0
            r2.c = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.e = r0
            return
    }

    private void a() {
            r1 = this;
            com.sigmob.windad.OnInitializationListener r0 = r1.f
            if (r0 == 0) goto L7
            r0.OnInitializationSuccess()
        L7:
            return
    }

    private void a(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "startWithOptions "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            com.sigmob.windad.OnInitializationListener r0 = r2.f
            if (r0 == 0) goto L1b
            r0.OnInitializationFail(r3)
        L1b:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r3)
            throw r0
    }

    private void b() {
            r3 = this;
            int r0 = r3.h
            if (r0 != 0) goto L2f
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()     // Catch: java.lang.Throwable -> Le
            int r0 = r0.g()     // Catch: java.lang.Throwable -> Le
            r3.h = r0     // Catch: java.lang.Throwable -> Le
        Le:
            int r0 = r3.h
            if (r0 != 0) goto L2f
            android.content.Context r0 = com.sigmob.sdk.b.b()     // Catch: java.lang.Throwable -> L2f
            com.sigmob.windad.consent.WindAdConsentInformation r0 = com.sigmob.windad.consent.WindAdConsentInformation.getInstance(r0)     // Catch: java.lang.Throwable -> L2f
            com.sigmob.windad.consent.ConsentStatus r0 = r0.getConsentStatus()     // Catch: java.lang.Throwable -> L2f
            int[] r1 = com.sigmob.windad.WindAds.1.a     // Catch: java.lang.Throwable -> L2f
            int r0 = r0.ordinal()     // Catch: java.lang.Throwable -> L2f
            r0 = r1[r0]     // Catch: java.lang.Throwable -> L2f
            r1 = 1
            if (r0 == r1) goto L2d
            r1 = 2
            if (r0 == r1) goto L2d
            goto L2f
        L2d:
            r3.h = r1     // Catch: java.lang.Throwable -> L2f
        L2f:
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()
            int r1 = r3.h
            r2 = 0
            r0.c(r1, r2)
            return
    }

    private void c() {
            r3 = this;
            int r0 = r3.j     // Catch: java.lang.Throwable -> L31
            r1 = 0
            if (r0 != 0) goto L10
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()     // Catch: java.lang.Throwable -> L31
            int r0 = r0.c()     // Catch: java.lang.Throwable -> L31
            r3.j = r0     // Catch: java.lang.Throwable -> L31
            goto L19
        L10:
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()     // Catch: java.lang.Throwable -> L31
            int r2 = r3.j     // Catch: java.lang.Throwable -> L31
            r0.b(r2, r1)     // Catch: java.lang.Throwable -> L31
        L19:
            int r0 = r3.k     // Catch: java.lang.Throwable -> L31
            if (r0 != 0) goto L28
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()     // Catch: java.lang.Throwable -> L31
            int r0 = r0.b()     // Catch: java.lang.Throwable -> L31
            r3.k = r0     // Catch: java.lang.Throwable -> L31
            goto L31
        L28:
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()     // Catch: java.lang.Throwable -> L31
            int r2 = r3.k     // Catch: java.lang.Throwable -> L31
            r0.a(r2, r1)     // Catch: java.lang.Throwable -> L31
        L31:
            return
    }

    private void d() {
            r3 = this;
            r3.c()     // Catch: java.lang.Throwable -> L1a
            r3.b()     // Catch: java.lang.Throwable -> L1a
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()     // Catch: java.lang.Throwable -> L1a
            boolean r1 = r3.i     // Catch: java.lang.Throwable -> L1a
            r2 = 0
            r0.b(r1, r2)     // Catch: java.lang.Throwable -> L1a
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()     // Catch: java.lang.Throwable -> L1a
            boolean r1 = r3.g     // Catch: java.lang.Throwable -> L1a
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L1a
            goto L20
        L1a:
            r0 = move-exception
            java.lang.String r1 = "loadPrivacyInfo"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        L20:
            return
    }

    public static java.lang.String getUserId() {
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.getUserId()
            return r0
    }

    public static java.lang.String getVersion() {
            java.lang.String r0 = "4.9.0"
            return r0
    }

    public static void requestPermission(android.app.Activity r6) {
            if (r6 == 0) goto L28
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L28
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            boolean r1 = com.czhj.sdk.common.ClientMetadata.isPermissionGranted(r6, r0)
            java.lang.String r2 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r3 = com.czhj.sdk.common.ClientMetadata.isPermissionGranted(r6, r2)
            java.lang.String r4 = "android.permission.ACCESS_FINE_LOCATION"
            boolean r5 = com.czhj.sdk.common.ClientMetadata.isPermissionGranted(r6, r4)
            if (r1 == 0) goto L20
            if (r3 == 0) goto L20
            if (r5 != 0) goto L28
        L20:
            java.lang.String[] r0 = new java.lang.String[]{r0, r2, r4}
            r1 = 0
            r6.requestPermissions(r0, r1)
        L28:
            return
    }

    public static void setOAIDCertPem(java.lang.String r0) {
            com.czhj.sdk.common.ClientMetadata.setOAIDCertPem(r0)     // Catch: java.lang.Throwable -> L4
            goto L9
        L4:
            java.lang.String r0 = "not support OAID Module"
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L9:
            return
    }

    public static void setUserId(java.lang.String r0) {
            com.czhj.sdk.common.ClientMetadata.setUserId(r0)
            return
    }

    public static com.sigmob.windad.WindAds sharedAds() {
            com.sigmob.windad.WindAds r0 = com.sigmob.windad.WindAds.a
            if (r0 != 0) goto L1d
            java.lang.Class<com.sigmob.windad.WindAds> r0 = com.sigmob.windad.WindAds.class
            monitor-enter(r0)
            com.sigmob.windad.WindAds r1 = com.sigmob.windad.WindAds.a     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto L18
            com.sigmob.windad.WindAds r1 = new com.sigmob.windad.WindAds     // Catch: java.lang.Throwable -> L1a
            r1.<init>()     // Catch: java.lang.Throwable -> L1a
            com.sigmob.windad.WindAds.a = r1     // Catch: java.lang.Throwable -> L1a
            com.sigmob.windad.WindAds r1 = com.sigmob.windad.WindAds.a     // Catch: java.lang.Throwable -> L1a
            r2 = 1
            r1.setDebugEnable(r2)     // Catch: java.lang.Throwable -> L1a
        L18:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            goto L1d
        L1a:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            throw r1
        L1d:
            com.sigmob.windad.WindAds r0 = com.sigmob.windad.WindAds.a
            return r0
    }

    public void debugDeviceID() {
            r6 = this;
            r0 = 0
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L58
            java.lang.String r1 = r1.getDeviceId()     // Catch: java.lang.Throwable -> L58
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L58
            r3 = 1
            if (r2 != 0) goto L1f
            java.lang.String r2 = "debug device Type: IMEI,  ID => %s"
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L58
            r4[r0] = r1     // Catch: java.lang.Throwable -> L58
            java.lang.String r1 = java.lang.String.format(r2, r4)     // Catch: java.lang.Throwable -> L58
            com.czhj.sdk.logger.SigmobLog.i(r1)     // Catch: java.lang.Throwable -> L58
            r1 = r3
            goto L20
        L1f:
            r1 = r0
        L20:
            com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L59
            java.lang.String r2 = r2.getAdvertisingId()     // Catch: java.lang.Throwable -> L59
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L59
            if (r4 != 0) goto L3c
            java.lang.String r4 = "debug device Type: gaid, ID => %s"
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L59
            r5[r0] = r2     // Catch: java.lang.Throwable -> L59
            java.lang.String r4 = java.lang.String.format(r4, r5)     // Catch: java.lang.Throwable -> L59
            com.czhj.sdk.logger.SigmobLog.i(r4)     // Catch: java.lang.Throwable -> L59
            r1 = r3
        L3c:
            com.czhj.sdk.common.ClientMetadata r4 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L59
            java.lang.String r4 = r4.getOAID()     // Catch: java.lang.Throwable -> L59
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L59
            if (r4 != 0) goto L59
            java.lang.String r4 = "debug device Type oaid, ID => %s"
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L59
            r5[r0] = r2     // Catch: java.lang.Throwable -> L59
            java.lang.String r2 = java.lang.String.format(r4, r5)     // Catch: java.lang.Throwable -> L59
            com.czhj.sdk.logger.SigmobLog.i(r2)     // Catch: java.lang.Throwable -> L59
            goto L5a
        L58:
            r1 = r0
        L59:
            r3 = r1
        L5a:
            if (r3 != 0) goto L67
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "can't find any can be used debug valid Device Type"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L67:
            return
    }

    public int getAgeRestrictedStatus() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    public java.lang.String getAppId() {
            r1 = this;
            com.sigmob.windad.WindAdOptions r0 = r1.c
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getAppId()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.lang.String getAppKey() {
            r1 = this;
            com.sigmob.windad.WindAdOptions r0 = r1.c
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getAppKey()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public android.os.Handler getHandler() {
            r2 = this;
            android.os.Handler r0 = r2.e
            if (r0 != 0) goto Lf
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.e = r0
        Lf:
            android.os.Handler r0 = r2.e
            return r0
    }

    public com.sigmob.windad.WindAdOptions getOptions() {
            r1 = this;
            com.sigmob.windad.WindAdOptions r0 = r1.c
            return r0
    }

    public java.lang.String getSDKToken() {
            r1 = this;
            boolean r0 = r1.b
            if (r0 == 0) goto Ld
            com.sigmob.sdk.Sigmob r0 = com.sigmob.sdk.Sigmob.getInstance()
            java.lang.String r0 = r0.getSDKToken()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public int getUserAge() {
            r1 = this;
            int r0 = r1.k
            return r0
    }

    public int getUserGDPRConsentStatus() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    public java.lang.String getWindUid() {
            r1 = this;
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.getUid()     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = "Please initialize the SDK properly first"
            return r0
    }

    public boolean isAdult() {
            r1 = this;
            boolean r0 = r1.g
            return r0
    }

    public boolean isDebugEnable() {
            r1 = this;
            boolean r0 = r1.d
            return r0
    }

    public boolean isInit() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    public boolean isPersonalizedAdvertisingOn() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    public void setAdult(boolean r3) {
            r2 = this;
            r2.g = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Windads -> setAdult "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
            boolean r0 = r2.b
            if (r0 == 0) goto L22
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()
            r1 = 1
            r0.a(r3, r1)
        L22:
            return
    }

    public void setDebugEnable(boolean r2) {
            r1 = this;
            r1.d = r2
            java.lang.Boolean r0 = com.sigmob.sdk.base.h.e
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto Lf
            if (r2 == 0) goto L14
            java.util.logging.Level r2 = java.util.logging.Level.FINE
            goto L16
        Lf:
            if (r2 == 0) goto L14
            java.util.logging.Level r2 = java.util.logging.Level.INFO
            goto L16
        L14:
            java.util.logging.Level r2 = java.util.logging.Level.SEVERE
        L16:
            com.czhj.sdk.logger.SigmobLog.setSdkHandlerLevel(r2)
            return
    }

    public void setIsAgeRestrictedUser(int r3) {
            r2 = this;
            r2.j = r3
            boolean r0 = r2.b
            if (r0 == 0) goto Le
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()
            r1 = 1
            r0.b(r3, r1)
        Le:
            return
    }

    public void setOAIDCertFileName(java.lang.String r1) {
            r0 = this;
            com.czhj.sdk.common.ClientMetadata.setOaidCertFileName(r1)
            return
    }

    public void setPersonalizedAdvertisingOn(boolean r3) {
            r2 = this;
            r2.i = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Windads -> setPersonalized "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
            boolean r0 = r2.b
            if (r0 == 0) goto L22
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()
            r1 = 1
            r0.b(r3, r1)
        L22:
            return
    }

    public void setUserAge(int r3) {
            r2 = this;
            r2.k = r3
            boolean r0 = r2.b
            if (r0 == 0) goto Le
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()
            r1 = 1
            r0.a(r3, r1)
        Le:
            return
    }

    public void setUserGDPRConsentStatus(int r3) {
            r2 = this;
            r2.h = r3
            boolean r0 = r2.b
            if (r0 == 0) goto Le
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()
            r1 = 1
            r0.c(r3, r1)
        Le:
            return
    }

    public boolean startWithOptions(android.content.Context r2, com.sigmob.windad.WindAdOptions r3) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.startWithOptions(r2, r3, r0)
            return r2
    }

    public boolean startWithOptions(android.content.Context r4, com.sigmob.windad.WindAdOptions r5, com.sigmob.windad.OnInitializationListener r6) {
            r3 = this;
            r3.f = r6
            boolean r6 = r3.b
            r0 = 1
            if (r6 != 0) goto L82
            int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L65
            r1 = 18
            r2 = 0
            if (r6 >= r1) goto L14
            java.lang.String r4 = "Wind SDK Only Support Android API 18+"
            r3.a(r4)     // Catch: java.lang.Throwable -> L65
            return r2
        L14:
            if (r4 != 0) goto L1c
            java.lang.String r4 = "context is null "
            r3.a(r4)     // Catch: java.lang.Throwable -> L65
            return r2
        L1c:
            if (r5 != 0) goto L24
            java.lang.String r4 = "WindAdOptions is null "
            r3.a(r4)     // Catch: java.lang.Throwable -> L65
            return r2
        L24:
            java.lang.String r6 = r5.getAppId()     // Catch: java.lang.Throwable -> L65
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L65
            if (r6 == 0) goto L34
            java.lang.String r4 = "appId is empty "
            r3.a(r4)     // Catch: java.lang.Throwable -> L65
            return r2
        L34:
            r3.c = r5     // Catch: java.lang.Throwable -> L65
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L65
            com.sigmob.sdk.b.a(r4)     // Catch: java.lang.Throwable -> L65
            r3.d()     // Catch: java.lang.Throwable -> L65
            com.sigmob.sdk.Sigmob r4 = com.sigmob.sdk.Sigmob.getInstance()     // Catch: java.lang.Throwable -> L65
            r4.init()     // Catch: java.lang.Throwable -> L65
            com.sigmob.sdk.b.a()     // Catch: java.lang.Throwable -> L65
            r3.b = r0     // Catch: java.lang.Throwable -> L65
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L65
            r4.<init>()     // Catch: java.lang.Throwable -> L65
            java.lang.String r6 = "init appId: "
            r4.append(r6)     // Catch: java.lang.Throwable -> L65
            java.lang.String r5 = r5.getAppId()     // Catch: java.lang.Throwable -> L65
            r4.append(r5)     // Catch: java.lang.Throwable -> L65
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L65
            com.czhj.sdk.logger.SigmobLog.i(r4)     // Catch: java.lang.Throwable -> L65
            goto L9a
        L65:
            r4 = move-exception
            java.lang.String r5 = "startWithOptions fail"
            com.czhj.sdk.logger.SigmobLog.e(r5, r4)
            java.lang.String r5 = "init"
            com.sigmob.windad.WindAdError r6 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INIT_FAIL     // Catch: java.lang.Throwable -> L7b
            int r6 = r6.getErrorCode()     // Catch: java.lang.Throwable -> L7b
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L7b
            com.sigmob.sdk.base.mta.PointEntitySigmobError.SigmobError(r5, r6, r4)     // Catch: java.lang.Throwable -> L7b
            goto L9a
        L7b:
            r4 = move-exception
            java.lang.String r5 = "startWithOptions"
            com.czhj.sdk.logger.SigmobLog.e(r5, r4)
            goto L9a
        L82:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "already init appId: "
            r4.append(r6)
            java.lang.String r5 = r5.getAppId()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.czhj.sdk.logger.SigmobLog.i(r4)
        L9a:
            r3.a()
            return r0
    }
}
