package com.czhj.sdk.common;

public class ClientMetadata implements com.czhj.sdk.common.utils.IdentifierManager.AdvertisingIdChangeListener {
    private static final java.util.concurrent.atomic.AtomicInteger a = null;
    private static java.lang.String b;
    private static java.lang.String c;
    private static volatile com.czhj.sdk.common.ClientMetadata d;
    private static java.lang.String g;
    private android.location.Location e;
    private com.czhj.sdk.common.utils.IdentifierManager f;
    private int h;
    private boolean i;
    private java.lang.String j;
    private java.lang.String k;
    private java.lang.String l;
    private java.lang.String m;
    private android.content.Context n;
    private boolean o;
    private java.lang.String p;
    private java.lang.String q;
    private java.lang.String r;
    private com.czhj.sdk.common.CustomController s;



    public enum a extends java.lang.Enum<com.czhj.sdk.common.ClientMetadata.a> {
        private static final com.czhj.sdk.common.ClientMetadata.a[] $VALUES = null;
        public static final com.czhj.sdk.common.ClientMetadata.a DEVICE_ORIENTATION = null;
        public static final com.czhj.sdk.common.ClientMetadata.a FORCE_LANDSCAPE = null;
        public static final com.czhj.sdk.common.ClientMetadata.a FORCE_PORTRAIT = null;
        public static final com.czhj.sdk.common.ClientMetadata.a UNDEFINED = null;
        private final java.lang.String mKey;

        static {
                com.czhj.sdk.common.ClientMetadata$a r0 = new com.czhj.sdk.common.ClientMetadata$a
                r1 = 0
                java.lang.String r2 = "FORCE_PORTRAIT"
                java.lang.String r3 = "portrait"
                r0.<init>(r2, r1, r3)
                com.czhj.sdk.common.ClientMetadata.a.FORCE_PORTRAIT = r0
                com.czhj.sdk.common.ClientMetadata$a r0 = new com.czhj.sdk.common.ClientMetadata$a
                r2 = 1
                java.lang.String r3 = "FORCE_LANDSCAPE"
                java.lang.String r4 = "landscape"
                r0.<init>(r3, r2, r4)
                com.czhj.sdk.common.ClientMetadata.a.FORCE_LANDSCAPE = r0
                com.czhj.sdk.common.ClientMetadata$a r0 = new com.czhj.sdk.common.ClientMetadata$a
                r3 = 2
                java.lang.String r4 = "DEVICE_ORIENTATION"
                java.lang.String r5 = "device"
                r0.<init>(r4, r3, r5)
                com.czhj.sdk.common.ClientMetadata.a.DEVICE_ORIENTATION = r0
                com.czhj.sdk.common.ClientMetadata$a r0 = new com.czhj.sdk.common.ClientMetadata$a
                r4 = 3
                java.lang.String r5 = "UNDEFINED"
                java.lang.String r6 = ""
                r0.<init>(r5, r4, r6)
                com.czhj.sdk.common.ClientMetadata.a.UNDEFINED = r0
                r5 = 4
                com.czhj.sdk.common.ClientMetadata$a[] r5 = new com.czhj.sdk.common.ClientMetadata.a[r5]
                com.czhj.sdk.common.ClientMetadata$a r6 = com.czhj.sdk.common.ClientMetadata.a.FORCE_PORTRAIT
                r5[r1] = r6
                com.czhj.sdk.common.ClientMetadata$a r1 = com.czhj.sdk.common.ClientMetadata.a.FORCE_LANDSCAPE
                r5[r2] = r1
                com.czhj.sdk.common.ClientMetadata$a r1 = com.czhj.sdk.common.ClientMetadata.a.DEVICE_ORIENTATION
                r5[r3] = r1
                r5[r4] = r0
                com.czhj.sdk.common.ClientMetadata.a.$VALUES = r5
                return
        }

        a(java.lang.String r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.mKey = r3
                return
        }

        public static com.czhj.sdk.common.ClientMetadata.a valueOf(java.lang.String r1) {
                java.lang.Class<com.czhj.sdk.common.ClientMetadata$a> r0 = com.czhj.sdk.common.ClientMetadata.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.czhj.sdk.common.ClientMetadata$a r1 = (com.czhj.sdk.common.ClientMetadata.a) r1
                return r1
        }

        public static com.czhj.sdk.common.ClientMetadata.a[] values() {
                com.czhj.sdk.common.ClientMetadata$a[] r0 = com.czhj.sdk.common.ClientMetadata.a.$VALUES
                java.lang.Object r0 = r0.clone()
                com.czhj.sdk.common.ClientMetadata$a[] r0 = (com.czhj.sdk.common.ClientMetadata.a[]) r0
                return r0
        }
    }

    static {
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 1
            r0.<init>(r1)
            com.czhj.sdk.common.ClientMetadata.a = r0
            java.lang.String r0 = "-1"
            com.czhj.sdk.common.ClientMetadata.b = r0
            return
    }

    public ClientMetadata() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.i = r0
            return
    }

    static java.lang.String a(com.czhj.sdk.common.ClientMetadata r0) {
            java.lang.String r0 = r0.p
            return r0
    }

    static java.lang.String a(com.czhj.sdk.common.ClientMetadata r0, java.lang.String r1) {
            r0.q = r1
            return r1
    }

    static android.content.Context b(com.czhj.sdk.common.ClientMetadata r0) {
            android.content.Context r0 = r0.n
            return r0
    }

    private java.lang.String b() {
            r2 = this;
            java.lang.String r0 = r2.q
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r2.q
            return r0
        Lb:
            android.content.Context r0 = r2.n     // Catch: java.lang.Throwable -> L15
            com.czhj.sdk.common.ClientMetadata$1 r1 = new com.czhj.sdk.common.ClientMetadata$1     // Catch: java.lang.Throwable -> L15
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L15
            com.czhj.devicehelper.DeviceHelper.getOAID(r0, r1)     // Catch: java.lang.Throwable -> L15
        L15:
            java.lang.String r0 = r2.q
            return r0
    }

    static java.lang.String b(com.czhj.sdk.common.ClientMetadata r0, java.lang.String r1) {
            r0.r = r1
            return r1
    }

    private boolean c() {
            r4 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 21
            if (r0 >= r2) goto L8
            return r1
        L8:
            android.content.Context r0 = r4.n
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            android.content.Intent r2 = new android.content.Intent
            java.lang.String r3 = "android.settings.USAGE_ACCESS_SETTINGS"
            r2.<init>(r3)
            r3 = 65536(0x10000, float:9.1835E-41)
            java.util.List r0 = r0.queryIntentActivities(r2, r3)
            int r0 = r0.size()
            if (r0 <= 0) goto L22
            goto L23
        L22:
            r1 = 0
        L23:
            return r1
    }

    public static int generateViewId() {
        L0:
            java.util.concurrent.atomic.AtomicInteger r0 = com.czhj.sdk.common.ClientMetadata.a
            int r0 = r0.get()
            int r1 = r0 + 1
            r2 = 16777215(0xffffff, float:2.3509886E-38)
            if (r1 <= r2) goto Le
            r1 = 1
        Le:
            java.util.concurrent.atomic.AtomicInteger r2 = com.czhj.sdk.common.ClientMetadata.a
            boolean r1 = r2.compareAndSet(r0, r1)
            if (r1 == 0) goto L0
            return r0
    }

    public static java.lang.Long getBootSystemTime() {
            long r0 = com.czhj.sdk.common.utils.DeviceUtils.getBootSystemTime()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            return r0
    }

    public static java.lang.String getCPUInfo() {
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getCPUInfo()     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    public static java.lang.String getCPUModel() {
            java.lang.String r0 = android.os.Build.BOARD
            return r0
    }

    public static java.lang.String getCell_ip() {
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getCell_ip()
            return r0
    }

    public static java.lang.String getDeviceBrand() {
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getDeviceBrand()
            return r0
    }

    public static java.lang.String getDeviceManufacturer() {
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getDeviceManufacturer()
            return r0
    }

    public static java.lang.String getDeviceModel() {
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getDeviceModel()
            return r0
    }

    public static java.lang.Integer getDeviceOSLevel() {
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.getDeviceOSLevel()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            return r0
    }

    public static java.lang.String getDeviceOsVersion() {
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getDeviceOsVersion()
            return r0
    }

    public static com.czhj.sdk.common.ClientMetadata getInstance() {
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.d
            if (r0 != 0) goto L17
            java.lang.Class<com.czhj.sdk.common.ClientMetadata> r0 = com.czhj.sdk.common.ClientMetadata.class
            monitor-enter(r0)
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.czhj.sdk.common.ClientMetadata r1 = new com.czhj.sdk.common.ClientMetadata     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.czhj.sdk.common.ClientMetadata.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.d
            return r0
    }

    public static java.lang.String getMacAddress() {
            java.lang.String r0 = com.czhj.devicehelper.DeviceHelper.getMacAddress()     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            java.lang.String r0 = ""
            return r0
    }

    public static android.content.pm.PackageInfo getPackageInfoWithUri(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Throwable -> La
            r0 = 0
            android.content.pm.PackageInfo r1 = r1.getPackageArchiveInfo(r2, r0)     // Catch: java.lang.Throwable -> La
            return r1
        La:
            r1 = 0
            return r1
    }

    public static java.util.Map<java.lang.String, java.lang.String> getQueryParamMap(android.net.Uri r5) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Set r1 = r5.getQueryParameterNames()
            java.util.Iterator r1 = r1.iterator()
        Ld:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.util.List r3 = r5.getQueryParameters(r2)
            java.lang.String r4 = ","
            java.lang.String r3 = android.text.TextUtils.join(r4, r3)
            r0.put(r2, r3)
            goto Ld
        L27:
            return r0
    }

    public static java.lang.String getUid() {
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.g
            return r0
    }

    public static java.lang.String getUserId() {
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = "-1"
            goto Ld
        Lb:
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.b
        Ld:
            return r0
    }

    public static java.lang.String getVAID() {
            java.lang.String r0 = com.czhj.devicehelper.DeviceHelper.getVAID()     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    public static boolean isEmulator() {
            boolean r0 = com.czhj.sdk.common.utils.DeviceUtils.isEmulator()     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    public static boolean isPermissionGranted(android.content.Context r3, java.lang.String r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 23
            if (r0 < r2) goto L14
            r0 = 0
            if (r3 == 0) goto L13
            int r3 = r3.checkSelfPermission(r4)
            if (r3 != 0) goto L11
            goto L12
        L11:
            r1 = r0
        L12:
            return r1
        L13:
            return r0
        L14:
            return r1
    }

    public static boolean isRoot() {
            boolean r0 = com.czhj.sdk.common.utils.DeviceUtils.isRoot()     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    public static void setOAIDCertPem(java.lang.String r0) {
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.a(r0)     // Catch: java.lang.Throwable -> L4
            goto L9
        L4:
            java.lang.String r0 = "not support OAID Module"
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L9:
            return
    }

    public static void setOaidCertFileName(java.lang.String r0) {
            com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.b(r0)     // Catch: java.lang.Throwable -> L4
            goto L9
        L4:
            java.lang.String r0 = "not support OAID Module"
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L9:
            return
    }

    public static void setUserId(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L8
            com.czhj.sdk.common.ClientMetadata.b = r1
        L8:
            return
    }

    android.app.DownloadManager a() {
            r2 = this;
            android.content.Context r0 = r2.n
            java.lang.String r1 = "download"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.DownloadManager r0 = (android.app.DownloadManager) r0
            return r0
    }

    public int getActiveNetworkType() {
            r1 = this;
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = com.czhj.sdk.common.utils.DeviceUtils.getActiveNetworkType()     // Catch: java.lang.Throwable -> L9
            int r0 = r0.getId()     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            com.czhj.sdk.common.utils.DeviceUtils$NetworkType r0 = com.czhj.sdk.common.utils.DeviceUtils.NetworkType.UNKNOWN
            int r0 = r0.getId()
            return r0
    }

    public java.lang.String getAdvertisingId() {
            r1 = this;
            com.czhj.sdk.common.utils.IdentifierManager r0 = r1.f     // Catch: java.lang.Throwable -> L9
            com.czhj.sdk.common.utils.AdvertisingId r0 = r0.getAdvertisingInfo()     // Catch: java.lang.Throwable -> L9
            java.lang.String r0 = r0.mAdvertisingId     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.lang.String getAndroidId() {
            r1 = this;
            com.czhj.sdk.common.CustomController r0 = r1.s     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L13
            com.czhj.sdk.common.CustomController r0 = r1.s     // Catch: java.lang.Throwable -> L1a
            boolean r0 = r0.isCanUseAndroidId()     // Catch: java.lang.Throwable -> L1a
            if (r0 != 0) goto L13
            com.czhj.sdk.common.CustomController r0 = r1.s     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = r0.getAndroidId()     // Catch: java.lang.Throwable -> L1a
            return r0
        L13:
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getAndroidId(r0)     // Catch: java.lang.Throwable -> L1a
            return r0
        L1a:
            r0 = 0
            return r0
    }

    public java.lang.String getApkMd5() {
            r2 = this;
            android.content.Context r0 = r2.n     // Catch: java.lang.Throwable -> L9
            java.lang.String r1 = "MD5"
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getApkSha1OrMd5(r0, r1)     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.lang.String getApkSha1() {
            r2 = this;
            android.content.Context r0 = r2.n     // Catch: java.lang.Throwable -> L9
            java.lang.String r1 = "SHA1"
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getApkSha1OrMd5(r0, r1)     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.lang.String getAppName() {
            r2 = this;
            android.content.Context r0 = r2.n     // Catch: java.lang.Exception -> L13
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L13
            android.content.Context r1 = r2.n     // Catch: java.lang.Exception -> L13
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()     // Catch: java.lang.Exception -> L13
            java.lang.CharSequence r0 = r0.getApplicationLabel(r1)     // Catch: java.lang.Exception -> L13
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L13
            return r0
        L13:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public java.lang.String getAppPackageName() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = com.czhj.sdk.common.utils.AppPackageUtil.getAppPackageName(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.String getAppVersion() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = com.czhj.sdk.common.utils.AppPackageUtil.getAppVersionFromContext(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.Float getBatteryLevel() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> Lb
            float r0 = com.czhj.sdk.common.utils.DeviceUtils.getBatteryLevel(r0)     // Catch: java.lang.Throwable -> Lb
            java.lang.Float r0 = java.lang.Float.valueOf(r0)     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = 0
            java.lang.Float r0 = java.lang.Float.valueOf(r0)
            return r0
    }

    public java.lang.Boolean getBatterySaveEnable() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> Lb
            boolean r0 = com.czhj.sdk.common.utils.DeviceUtils.getBatterySaveEnable(r0)     // Catch: java.lang.Throwable -> Lb
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            return r0
    }

    public java.lang.Integer getBatteryState() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> Lb
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.getBatteryState(r0)     // Catch: java.lang.Throwable -> Lb
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            return r0
    }

    public java.lang.String getBlueToothName() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getBlueToothName(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.String getBootId() {
            r3 = this;
            com.czhj.sdk.common.models.Config r0 = com.czhj.sdk.common.models.Config.sharedInstance()     // Catch: java.lang.Throwable -> L75
            boolean r0 = r0.isDisableBootMark()     // Catch: java.lang.Throwable -> L75
            java.lang.String r1 = ""
            if (r0 == 0) goto Ld
            return r1
        Ld:
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.c     // Catch: java.lang.Throwable -> L75
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L75
            if (r0 == 0) goto L8e
            byte[] r0 = com.tan.mark.SigNativeId.getBootFromJNI()     // Catch: java.lang.Throwable -> L75
            if (r0 == 0) goto L25
            int r2 = r0.length     // Catch: java.lang.Throwable -> L75
            if (r2 <= 0) goto L25
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L75
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L75
            com.czhj.sdk.common.ClientMetadata.c = r2     // Catch: java.lang.Throwable -> L75
        L25:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75
            r0.<init>()     // Catch: java.lang.Throwable -> L75
            java.lang.String r2 = "origin bootId:"
            r0.append(r2)     // Catch: java.lang.Throwable -> L75
            java.lang.String r2 = com.czhj.sdk.common.ClientMetadata.c     // Catch: java.lang.Throwable -> L75
            r0.append(r2)     // Catch: java.lang.Throwable -> L75
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L75
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> L75
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.c     // Catch: java.lang.Throwable -> L75
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L75
            if (r0 != 0) goto L5e
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.c     // Catch: java.lang.Throwable -> L75
            java.lang.String r2 = "\\s*|\t|\r|\n"
            java.lang.String r0 = r0.replaceAll(r2, r1)     // Catch: java.lang.Throwable -> L75
            com.czhj.sdk.common.ClientMetadata.c = r0     // Catch: java.lang.Throwable -> L75
            int r0 = r0.length()     // Catch: java.lang.Throwable -> L75
            r1 = 36
            if (r0 <= r1) goto L5e
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.c     // Catch: java.lang.Throwable -> L75
            r2 = 0
            java.lang.String r0 = r0.substring(r2, r1)     // Catch: java.lang.Throwable -> L75
            com.czhj.sdk.common.ClientMetadata.c = r0     // Catch: java.lang.Throwable -> L75
        L5e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75
            r0.<init>()     // Catch: java.lang.Throwable -> L75
            java.lang.String r1 = "bootId:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L75
            java.lang.String r1 = com.czhj.sdk.common.ClientMetadata.c     // Catch: java.lang.Throwable -> L75
            r0.append(r1)     // Catch: java.lang.Throwable -> L75
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L75
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> L75
            goto L8e
        L75:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getBootId:"
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
        L8e:
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.c
            return r0
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.n
            return r0
    }

    public com.czhj.sdk.common.CustomController getCustomController() {
            r1 = this;
            com.czhj.sdk.common.CustomController r0 = r1.s
            return r0
    }

    public int getDensityDpi() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L8
            float r0 = com.czhj.sdk.common.utils.DeviceUtils.getDensityDpi(r0)     // Catch: java.lang.Throwable -> L8
            int r0 = (int) r0
            return r0
        L8:
            r0 = 0
            return r0
    }

    public java.lang.String getDeviceId() {
            r1 = this;
            com.czhj.sdk.common.CustomController r0 = r1.s     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L13
            com.czhj.sdk.common.CustomController r0 = r1.s     // Catch: java.lang.Throwable -> L19
            boolean r0 = r0.isCanUsePhoneState()     // Catch: java.lang.Throwable -> L19
            if (r0 != 0) goto L13
            com.czhj.sdk.common.CustomController r0 = r1.s     // Catch: java.lang.Throwable -> L19
            java.lang.String r0 = r0.getDevImei()     // Catch: java.lang.Throwable -> L19
            return r0
        L13:
            r0 = -1
            java.lang.String r0 = r1.getDeviceId(r0)     // Catch: java.lang.Throwable -> L19
            return r0
        L19:
            r0 = 0
            return r0
    }

    public java.lang.String getDeviceId(int r4) {
            r3 = this;
            r0 = 0
            com.czhj.sdk.common.CustomController r1 = r3.s     // Catch: java.lang.Throwable -> L55
            if (r1 == 0) goto L14
            com.czhj.sdk.common.CustomController r1 = r3.s     // Catch: java.lang.Throwable -> L55
            boolean r1 = r1.isCanUsePhoneState()     // Catch: java.lang.Throwable -> L55
            if (r1 != 0) goto L14
            com.czhj.sdk.common.CustomController r4 = r3.s     // Catch: java.lang.Throwable -> L55
            java.lang.String r4 = r4.getDevImei()     // Catch: java.lang.Throwable -> L55
            return r4
        L14:
            java.lang.String r1 = r3.j     // Catch: java.lang.Throwable -> L55
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L55
            if (r1 == 0) goto L47
            android.content.Context r1 = r3.n     // Catch: java.lang.Throwable -> L55
            boolean r1 = com.czhj.sdk.common.utils.DeviceUtils.isCanUsePhoneState(r1)     // Catch: java.lang.Throwable -> L55
            if (r1 == 0) goto L46
            boolean r1 = com.czhj.sdk.common.utils.DeviceUtils.isCanRetryIMEI()     // Catch: java.lang.Throwable -> L55
            if (r1 != 0) goto L2b
            goto L46
        L2b:
            android.content.Context r1 = r3.n     // Catch: java.lang.Throwable -> L55
            java.lang.String r1 = com.czhj.devicehelper.DeviceHelper.getIMEI(r1)     // Catch: java.lang.Throwable -> L55
            r3.j = r1     // Catch: java.lang.Throwable -> L55
            android.content.Context r1 = r3.n     // Catch: java.lang.Throwable -> L55
            r2 = 0
            java.lang.String r1 = com.czhj.devicehelper.DeviceHelper.getIMEI(r1, r2)     // Catch: java.lang.Throwable -> L55
            r3.k = r1     // Catch: java.lang.Throwable -> L55
            android.content.Context r1 = r3.n     // Catch: java.lang.Throwable -> L55
            r2 = 1
            java.lang.String r1 = com.czhj.devicehelper.DeviceHelper.getIMEI(r1, r2)     // Catch: java.lang.Throwable -> L55
            r3.l = r1     // Catch: java.lang.Throwable -> L55
            goto L47
        L46:
            return r0
        L47:
            r1 = -1
            if (r4 != r1) goto L4d
            java.lang.String r4 = r3.j     // Catch: java.lang.Throwable -> L55
            return r4
        L4d:
            if (r4 != 0) goto L52
            java.lang.String r4 = r3.k     // Catch: java.lang.Throwable -> L55
            return r4
        L52:
            java.lang.String r4 = r3.l     // Catch: java.lang.Throwable -> L55
            return r4
        L55:
            return r0
    }

    public java.util.Locale getDeviceLocale() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            java.util.Locale r0 = com.czhj.sdk.common.utils.DeviceUtils.getDeviceLocale(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.String getDeviceName() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getDeviceName(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.Integer getDeviceScreenHeightDip() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> Lb
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.getDeviceScreenHeightDip(r0)     // Catch: java.lang.Throwable -> Lb
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            return r0
    }

    public java.lang.Integer getDeviceScreenRealHeightDip() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> Lb
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.getDeviceScreenRealHeightDip(r0)     // Catch: java.lang.Throwable -> Lb
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public java.lang.Integer getDeviceScreenRealWidthDip() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> Lb
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.getDeviceScreenRealWidthDip(r0)     // Catch: java.lang.Throwable -> Lb
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public java.lang.Integer getDeviceScreenWidthDip() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> Lb
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.getDeviceScreenWidthDip(r0)     // Catch: java.lang.Throwable -> Lb
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            return r0
    }

    public java.lang.String getDeviceSerial() {
            r1 = this;
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getDeviceSerial()     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    public android.util.DisplayMetrics getDisplayMetrics() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            android.util.DisplayMetrics r0 = com.czhj.sdk.common.utils.DeviceUtils.getDisplayMetrics(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.String getIMSI() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = com.czhj.devicehelper.DeviceHelper.getIMSI(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public int getInsetBottom() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    public boolean getLimitAdTrackingEnabled() {
            r1 = this;
            com.czhj.sdk.common.utils.IdentifierManager r0 = r1.f     // Catch: java.lang.Throwable -> L9
            com.czhj.sdk.common.utils.AdvertisingId r0 = r0.getAdvertisingInfo()     // Catch: java.lang.Throwable -> L9
            boolean r0 = r0.mDoNotTrack     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            r0 = 0
            return r0
    }

    public android.location.Location getLocation() {
            r2 = this;
            com.czhj.sdk.common.CustomController r0 = r2.s     // Catch: java.lang.Exception -> L3b
            if (r0 == 0) goto L13
            com.czhj.sdk.common.CustomController r0 = r2.s     // Catch: java.lang.Exception -> L3b
            boolean r0 = r0.isCanUseLocation()     // Catch: java.lang.Exception -> L3b
            if (r0 != 0) goto L13
            com.czhj.sdk.common.CustomController r0 = r2.s     // Catch: java.lang.Exception -> L3b
            android.location.Location r0 = r0.getLocation()     // Catch: java.lang.Exception -> L3b
            return r0
        L13:
            boolean r0 = r2.o     // Catch: java.lang.Exception -> L3b
            if (r0 != 0) goto L19
            r0 = 0
            return r0
        L19:
            android.location.Location r0 = r2.e     // Catch: java.lang.Exception -> L3b
            if (r0 == 0) goto L20
            android.location.Location r0 = r2.e     // Catch: java.lang.Exception -> L3b
            return r0
        L20:
            android.location.LocationManager r0 = r2.getLocationManager()     // Catch: java.lang.Exception -> L3b
            if (r0 == 0) goto L3b
            boolean r1 = com.czhj.sdk.common.utils.DeviceUtils.isCanRetryLocation()     // Catch: java.lang.Exception -> L3b
            if (r1 == 0) goto L3b
            java.lang.String r1 = "private :use_location "
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Exception -> L3b
            java.lang.String r1 = "passive"
            android.location.Location r0 = r0.getLastKnownLocation(r1)     // Catch: java.lang.Exception -> L3b
            if (r0 == 0) goto L3b
            r2.e = r0     // Catch: java.lang.Exception -> L3b
        L3b:
            android.location.Location r0 = r2.e
            return r0
    }

    public android.location.LocationManager getLocationManager() {
            r3 = this;
            r0 = 0
            com.czhj.sdk.common.CustomController r1 = r3.s     // Catch: java.lang.Throwable -> L22
            if (r1 == 0) goto Le
            com.czhj.sdk.common.CustomController r1 = r3.s     // Catch: java.lang.Throwable -> L22
            boolean r1 = r1.isCanUseLocation()     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto Le
            return r0
        Le:
            android.content.Context r1 = r3.n     // Catch: java.lang.Throwable -> L22
            boolean r1 = com.czhj.sdk.common.utils.DeviceUtils.isCanUseLocation(r1)     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L17
            return r0
        L17:
            android.content.Context r1 = r3.n     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "location"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Throwable -> L22
            android.location.LocationManager r1 = (android.location.LocationManager) r1     // Catch: java.lang.Throwable -> L22
            return r1
        L22:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
            return r0
    }

    public java.lang.String getNetworkOperatorForUrl() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getNetworkOperatorForUrl(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.String getNetworkOperatorName() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getNetworkOperatorName(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.String getOAID() {
            r3 = this;
            com.czhj.sdk.common.CustomController r0 = r3.s
            if (r0 == 0) goto L17
            java.lang.String r0 = r0.getDevOaid()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L17
            com.czhj.sdk.common.CustomController r0 = r3.s
            java.lang.String r0 = r0.getDevOaid()
            r3.p = r0
            return r0
        L17:
            com.czhj.sdk.common.models.Config r0 = com.czhj.sdk.common.models.Config.sharedInstance()
            int r0 = r0.getDisable_up_OAid()
            com.czhj.sdk.common.models.Config r1 = com.czhj.sdk.common.models.Config.sharedInstance()
            boolean r1 = r1.getOaidApiDisable()
            if (r0 < 0) goto L2c
            r2 = 1
            if (r0 <= r2) goto L30
        L2c:
            if (r1 == 0) goto L30
            r0 = 0
            return r0
        L30:
            java.lang.String r0 = r3.getOAID_SDK()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L3e
            java.lang.String r0 = r3.getOAID_API()
        L3e:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L4f
            java.lang.String r1 = r3.p
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 != 0) goto L4f
            r3.p = r0
            return r0
        L4f:
            java.lang.String r0 = r3.p
            return r0
    }

    public java.lang.String getOAID_API() {
            r2 = this;
            com.czhj.sdk.common.CustomController r0 = r2.s     // Catch: java.lang.Throwable -> L3c
            if (r0 == 0) goto L17
            com.czhj.sdk.common.CustomController r0 = r2.s     // Catch: java.lang.Throwable -> L3c
            java.lang.String r0 = r0.getDevOaid()     // Catch: java.lang.Throwable -> L3c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3c
            if (r0 != 0) goto L17
            com.czhj.sdk.common.CustomController r0 = r2.s     // Catch: java.lang.Throwable -> L3c
            java.lang.String r0 = r0.getDevOaid()     // Catch: java.lang.Throwable -> L3c
            return r0
        L17:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L3c
            r1 = 28
            if (r0 <= r1) goto L3c
            com.czhj.sdk.common.models.Config r0 = com.czhj.sdk.common.models.Config.sharedInstance()     // Catch: java.lang.Throwable -> L3c
            boolean r0 = r0.getOaidApiDisable()     // Catch: java.lang.Throwable -> L3c
            if (r0 != 0) goto L3c
            java.lang.String r0 = r2.r     // Catch: java.lang.Throwable -> L3c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3c
            if (r0 != 0) goto L32
            java.lang.String r0 = r2.r     // Catch: java.lang.Throwable -> L3c
            return r0
        L32:
            android.content.Context r0 = r2.n     // Catch: java.lang.Throwable -> L3c
            com.czhj.sdk.common.ClientMetadata$2 r1 = new com.czhj.sdk.common.ClientMetadata$2     // Catch: java.lang.Throwable -> L3c
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3c
            com.czhj.devicehelper.DeviceHelper.getOAID_API(r0, r1)     // Catch: java.lang.Throwable -> L3c
        L3c:
            r0 = 0
            return r0
    }

    public java.lang.String getOAID_SDK() {
            r2 = this;
            com.czhj.sdk.common.CustomController r0 = r2.s     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L17
            com.czhj.sdk.common.CustomController r0 = r2.s     // Catch: java.lang.Throwable -> L3b
            java.lang.String r0 = r0.getDevOaid()     // Catch: java.lang.Throwable -> L3b
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3b
            if (r0 != 0) goto L17
            com.czhj.sdk.common.CustomController r0 = r2.s     // Catch: java.lang.Throwable -> L3b
            java.lang.String r0 = r0.getDevOaid()     // Catch: java.lang.Throwable -> L3b
            return r0
        L17:
            com.czhj.sdk.common.models.Config r0 = com.czhj.sdk.common.models.Config.sharedInstance()     // Catch: java.lang.Throwable -> L3b
            int r0 = r0.getDisable_up_OAid()     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L30
            r1 = 1
            if (r0 == r1) goto L25
            goto L3b
        L25:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L3b
            r1 = 23
            if (r0 < r1) goto L3b
            java.lang.String r0 = r2.b()     // Catch: java.lang.Throwable -> L3b
            return r0
        L30:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L3b
            r1 = 28
            if (r0 <= r1) goto L3b
            java.lang.String r0 = r2.b()     // Catch: java.lang.Throwable -> L3b
            return r0
        L3b:
            r0 = 0
            return r0
    }

    public java.lang.Integer getOrientationInt() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> Lb
            int r0 = com.czhj.sdk.common.utils.DeviceUtils.getOrientationInt(r0)     // Catch: java.lang.Throwable -> Lb
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            return r0
    }

    public java.lang.String getPermission(android.content.Context r8) {
            r7 = this;
            java.lang.String r0 = ""
            android.content.pm.PackageManager r1 = r8.getPackageManager()     // Catch: java.lang.Throwable -> L75
            java.lang.String r8 = r8.getPackageName()     // Catch: java.lang.Throwable -> L75
            r2 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r2 = r1.getPackageInfo(r8, r2)     // Catch: java.lang.Throwable -> L75
            java.lang.String[] r2 = r2.requestedPermissions     // Catch: java.lang.Throwable -> L75
            r3 = 0
            r4 = r3
        L14:
            int r5 = r2.length     // Catch: java.lang.Throwable -> L75
            if (r4 >= r5) goto L51
            r5 = r2[r4]     // Catch: java.lang.Throwable -> L75
            int r5 = r1.checkPermission(r5, r8)     // Catch: java.lang.Throwable -> L75
            r6 = 1
            if (r5 != 0) goto L22
            r5 = r6
            goto L23
        L22:
            r5 = r3
        L23:
            if (r5 == 0) goto L4e
            int r5 = r2.length     // Catch: java.lang.Throwable -> L75
            int r5 = r5 - r6
            if (r4 != r5) goto L3b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75
            r5.<init>()     // Catch: java.lang.Throwable -> L75
            r5.append(r0)     // Catch: java.lang.Throwable -> L75
            r6 = r2[r4]     // Catch: java.lang.Throwable -> L75
            r5.append(r6)     // Catch: java.lang.Throwable -> L75
        L36:
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Throwable -> L75
            goto L4e
        L3b:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75
            r5.<init>()     // Catch: java.lang.Throwable -> L75
            r5.append(r0)     // Catch: java.lang.Throwable -> L75
            r6 = r2[r4]     // Catch: java.lang.Throwable -> L75
            r5.append(r6)     // Catch: java.lang.Throwable -> L75
            java.lang.String r6 = ","
            r5.append(r6)     // Catch: java.lang.Throwable -> L75
            goto L36
        L4e:
            int r4 = r4 + 1
            goto L14
        L51:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75
            r8.<init>()     // Catch: java.lang.Throwable -> L75
            java.lang.String r1 = "permissionReq:"
            r8.append(r1)     // Catch: java.lang.Throwable -> L75
            r8.append(r0)     // Catch: java.lang.Throwable -> L75
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L75
            com.czhj.sdk.logger.SigmobLog.d(r8)     // Catch: java.lang.Throwable -> L75
            boolean r8 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L75
            if (r8 != 0) goto L79
            byte[] r8 = r0.getBytes()     // Catch: java.lang.Throwable -> L75
            r1 = 2
            java.lang.String r8 = android.util.Base64.encodeToString(r8, r1)     // Catch: java.lang.Throwable -> L75
            return r8
        L75:
            r8 = move-exception
            r8.printStackTrace()
        L79:
            return r0
    }

    public android.util.DisplayMetrics getRealMetrics() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            android.util.DisplayMetrics r0 = com.czhj.sdk.common.utils.DeviceUtils.getRealMetrics(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.String getRotation() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getRotation(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.String getSDCardPath() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = com.czhj.sdk.common.utils.DeviceUtils.getSDCardPath(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public int getScreenOrientation(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "window"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.view.WindowManager r2 = (android.view.WindowManager) r2
            if (r2 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            android.view.Display r2 = r2.getDefaultDisplay()
            int r2 = r2.getRotation()
            return r2
    }

    public java.lang.String getStringResources(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            android.content.Context r0 = r3.n
            if (r0 == 0) goto L1d
            android.content.res.Resources r0 = r0.getResources()
            if (r0 == 0) goto L1d
            android.content.Context r1 = r3.n
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = "string"
            int r4 = r0.getIdentifier(r4, r2, r1)
            if (r4 == 0) goto L1d
            java.lang.String r4 = r0.getString(r4)
            return r4
        L1d:
            return r5
    }

    public java.lang.String getStringResources(java.lang.String r4, java.lang.String r5, java.lang.Object... r6) {
            r3 = this;
            android.content.Context r0 = r3.n
            if (r0 == 0) goto L36
            android.content.res.Resources r0 = r0.getResources()
            if (r0 == 0) goto L36
            android.content.Context r1 = r3.n
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = "string"
            int r4 = r0.getIdentifier(r4, r2, r1)
            if (r4 == 0) goto L31
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "getStringResources resid"
            r5.append(r1)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            com.czhj.sdk.logger.SigmobLog.d(r5)
            java.lang.String r4 = r0.getString(r4, r6)
            return r4
        L31:
            java.lang.String r4 = java.lang.String.format(r5, r6)
            return r4
        L36:
            return r5
    }

    public int getStyleResources(java.lang.String r4) {
            r3 = this;
            android.content.Context r0 = r3.n
            if (r0 == 0) goto L17
            android.content.res.Resources r0 = r0.getResources()
            if (r0 == 0) goto L17
            android.content.Context r1 = r3.n
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = "style"
            int r4 = r0.getIdentifier(r4, r2, r1)
            goto L18
        L17:
            r4 = 0
        L18:
            return r4
    }

    public java.lang.Long getSystemTotalMemorySize() {
            r2 = this;
            android.content.Context r0 = r2.n     // Catch: java.lang.Throwable -> Lb
            long r0 = com.czhj.sdk.common.utils.DeviceUtils.getSysteTotalMemorySize(r0)     // Catch: java.lang.Throwable -> Lb
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public java.lang.String getTargetSdkVersion() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> Ld
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()     // Catch: java.lang.Throwable -> Ld
            int r0 = r0.targetSdkVersion     // Catch: java.lang.Throwable -> Ld
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> Ld
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public java.lang.String getUpdateId() {
            r3 = this;
            com.czhj.sdk.common.models.Config r0 = com.czhj.sdk.common.models.Config.sharedInstance()     // Catch: java.lang.Throwable -> L32
            boolean r0 = r0.isDisableBootMark()     // Catch: java.lang.Throwable -> L32
            if (r0 == 0) goto Ld
            java.lang.String r0 = ""
            return r0
        Ld:
            java.lang.String r0 = r3.m     // Catch: java.lang.Throwable -> L32
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L32
            if (r0 == 0) goto L4b
            java.lang.String r0 = com.tan.mark.SigNativeId.getUpdateFromJNI()     // Catch: java.lang.Throwable -> L32
            r3.m = r0     // Catch: java.lang.Throwable -> L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L32
            r0.<init>()     // Catch: java.lang.Throwable -> L32
            java.lang.String r1 = "updateId:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L32
            java.lang.String r1 = r3.m     // Catch: java.lang.Throwable -> L32
            r0.append(r1)     // Catch: java.lang.Throwable -> L32
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L32
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> L32
            goto L4b
        L32:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getUpdateId:"
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
        L4b:
            java.lang.String r0 = r3.m
            return r0
    }

    public java.lang.String getWifiName() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = com.czhj.devicehelper.DeviceHelper.getWifiName(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public java.lang.String getWifimac() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = com.czhj.devicehelper.DeviceHelper.getWifimac(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public void initialize(android.content.Context r5) {
            r4 = this;
            android.content.Context r0 = r4.n
            if (r0 != 0) goto Lb9
            android.content.Context r5 = r5.getApplicationContext()
            r4.n = r5
            android.content.SharedPreferences r5 = com.czhj.sdk.common.utils.SharedPreferencesUtil.getSharedPreferences(r5)
            java.lang.String r0 = "uid_aes"
            r1 = 0
            java.lang.String r5 = r5.getString(r0, r1)
            java.lang.String r2 = "sigandroid_mtadb"
            if (r5 == 0) goto L20
            java.lang.String r5 = com.czhj.sdk.common.utils.AESUtil.DecryptString(r5, r2)
            com.czhj.sdk.common.ClientMetadata.g = r5
            goto L49
        L20:
            android.content.Context r5 = r4.n
            android.content.SharedPreferences r5 = com.czhj.sdk.common.utils.SharedPreferencesUtil.getSharedPreferences(r5)
            java.lang.String r3 = "uid"
            java.lang.String r5 = r5.getString(r3, r1)
            com.czhj.sdk.common.ClientMetadata.g = r5
            if (r5 == 0) goto L49
            android.content.Context r5 = r4.n
            android.content.SharedPreferences r5 = com.czhj.sdk.common.utils.SharedPreferencesUtil.getSharedPreferences(r5)
            android.content.SharedPreferences$Editor r5 = r5.edit()
            r5.remove(r3)
            java.lang.String r3 = com.czhj.sdk.common.ClientMetadata.g
            java.lang.String r3 = com.czhj.sdk.common.utils.AESUtil.EncryptString(r3, r2)
            r5.putString(r0, r3)
            r5.apply()
        L49:
            com.czhj.sdk.common.CustomController r5 = r4.s
            if (r5 == 0) goto L5e
            java.lang.String r5 = r5.getDevOaid()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L5e
            com.czhj.sdk.common.CustomController r5 = r4.s
            java.lang.String r5 = r5.getDevOaid()
            goto L70
        L5e:
            android.content.Context r5 = r4.n
            android.content.SharedPreferences r5 = com.czhj.sdk.common.utils.SharedPreferencesUtil.getSharedPreferences(r5)
            java.lang.String r0 = "oaid_aes"
            java.lang.String r5 = r5.getString(r0, r1)
            if (r5 == 0) goto L73
            java.lang.String r5 = com.czhj.sdk.common.utils.AESUtil.DecryptString(r5, r2)
        L70:
            r4.p = r5
            goto L9c
        L73:
            android.content.Context r5 = r4.n
            android.content.SharedPreferences r5 = com.czhj.sdk.common.utils.SharedPreferencesUtil.getSharedPreferences(r5)
            java.lang.String r3 = "oaid"
            java.lang.String r5 = r5.getString(r3, r1)
            r4.p = r5
            if (r5 == 0) goto L9c
            android.content.Context r5 = r4.n
            android.content.SharedPreferences r5 = com.czhj.sdk.common.utils.SharedPreferencesUtil.getSharedPreferences(r5)
            android.content.SharedPreferences$Editor r5 = r5.edit()
            r5.remove(r3)
            java.lang.String r1 = r4.p
            java.lang.String r1 = com.czhj.sdk.common.utils.AESUtil.EncryptString(r1, r2)
            r5.putString(r0, r1)
            r5.apply()
        L9c:
            r4.getOAID()     // Catch: java.lang.Throwable -> L9f
        L9f:
            com.czhj.sdk.common.utils.IdentifierManager r5 = new com.czhj.sdk.common.utils.IdentifierManager
            android.content.Context r0 = r4.n
            r5.<init>(r0, r4)
            r4.f = r5
            android.content.Context r5 = r4.n
            com.czhj.sdk.common.Database.SQLiteMTAHelper.initialize(r5)
            com.czhj.sdk.common.mta.BuriedPointManager r5 = com.czhj.sdk.common.mta.BuriedPointManager.getInstance()
            r5.start()
            android.content.Context r5 = r4.n
            com.czhj.sdk.common.utils.DeviceUtils.registerNetworkChange(r5)
        Lb9:
            return
    }

    public void initializeWithController(android.content.Context r1, com.czhj.sdk.common.CustomController r2) {
            r0 = this;
            r0.s = r2
            r0.initialize(r1)
            return
    }

    public boolean isNetworkConnected(java.lang.String r2) {
            r1 = this;
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Throwable -> Le
            r0.<init>(r2)     // Catch: java.lang.Throwable -> Le
            java.lang.String r2 = r0.getHost()     // Catch: java.lang.Throwable -> Le
            boolean r2 = com.czhj.sdk.common.network.SigmobRequestUtil.isConnection(r2)     // Catch: java.lang.Throwable -> Le
            return r2
        Le:
            r2 = 0
            return r2
    }

    public boolean isRetryAble() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    public boolean isSDCardAvailable() {
            r2 = this;
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r0.equals(r1)
            return r0
    }

    public boolean isTablet() {
            r1 = this;
            android.content.Context r0 = r1.n     // Catch: java.lang.Throwable -> L7
            boolean r0 = com.czhj.sdk.common.utils.DeviceUtils.isTablet(r0)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    @Override
    public void onIdChanged(com.czhj.sdk.common.utils.AdvertisingId r1, com.czhj.sdk.common.utils.AdvertisingId r2) {
            r0 = this;
            return
    }

    public void setEnableLocation(boolean r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public void setLocation(android.location.Location r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setRetryAble(boolean r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void setUid(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L31
            if (r0 != 0) goto L39
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.g     // Catch: java.lang.Throwable -> L31
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L31
            if (r0 != 0) goto L16
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.g     // Catch: java.lang.Throwable -> L31
            boolean r0 = r4.equalsIgnoreCase(r0)     // Catch: java.lang.Throwable -> L31
            if (r0 != 0) goto L39
        L16:
            com.czhj.sdk.common.ClientMetadata.g = r4     // Catch: java.lang.Throwable -> L31
            android.content.Context r0 = r3.n     // Catch: java.lang.Throwable -> L31
            android.content.SharedPreferences r0 = com.czhj.sdk.common.utils.SharedPreferencesUtil.getSharedPreferences(r0)     // Catch: java.lang.Throwable -> L31
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = "uid_aes"
            java.lang.String r2 = "sigandroid_mtadb"
            java.lang.String r4 = com.czhj.sdk.common.utils.AESUtil.EncryptString(r4, r2)     // Catch: java.lang.Throwable -> L31
            r0.putString(r1, r4)     // Catch: java.lang.Throwable -> L31
            r0.apply()     // Catch: java.lang.Throwable -> L31
            goto L39
        L31:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L39:
            return
    }

    public void setWindInsets(android.view.WindowInsets r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto L14
            if (r3 == 0) goto L14
            boolean r0 = r3.isRound()
            if (r0 == 0) goto L14
            int r3 = r3.getSystemWindowInsetBottom()
            r2.h = r3
        L14:
            return
    }
}
