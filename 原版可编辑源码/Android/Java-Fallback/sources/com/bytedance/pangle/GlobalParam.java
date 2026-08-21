package com.bytedance.pangle;

public class GlobalParam {
    private static com.bytedance.pangle.GlobalParam mInstance;
    private boolean hasInit;
    private boolean mAutoFetch;
    private boolean mCheckMatchHostAbi;
    private boolean mCheckPermission;
    private boolean mCloseFlipped;
    private java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>> mCustomTag;
    private boolean mDebug;
    private long mDexOptDelayTime;
    private java.lang.String mDid;
    private java.io.File mDownloadDir;
    private com.bytedance.pangle.download.IDownloaderProvider mDownloaderProvider;
    private boolean mFastDex2oat;
    private java.lang.String mHostUrl;
    private int mInstallThreads;
    private com.bytedance.pangle.log.IZeusLogger mLogger;
    private boolean mPostBgDexOptByInit;
    private com.bytedance.pangle.log.IZeusReporter mReporter;
    private java.util.Map<java.lang.String, java.lang.String> mRequestHeader;
    private java.util.Map<java.lang.String, java.lang.String> mSignature;
    private java.util.Map<java.lang.String, java.lang.Boolean> unInstallPluginWhenHostChange;

    public GlobalParam() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.hasInit = r0
            r0 = 1
            r3.mDebug = r0
            r1 = 4
            r3.mInstallThreads = r1
            r3.mCheckMatchHostAbi = r0
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r3.mRequestHeader = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r3.unInstallPluginWhenHostChange = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r3.mCustomTag = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r3.mSignature = r1
            r1 = 15000(0x3a98, double:7.411E-320)
            r3.mDexOptDelayTime = r1
            r3.mPostBgDexOptByInit = r0
            r3.mAutoFetch = r0
            return
    }

    private void ensureInit() {
            r1 = this;
            boolean r0 = r1.hasInit
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>()
            throw r0
    }

    public static com.bytedance.pangle.GlobalParam getInstance() {
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.mInstance
            if (r0 != 0) goto L17
            java.lang.Class<com.bytedance.pangle.GlobalParam> r0 = com.bytedance.pangle.GlobalParam.class
            monitor-enter(r0)
            com.bytedance.pangle.GlobalParam r1 = com.bytedance.pangle.GlobalParam.mInstance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bytedance.pangle.GlobalParam r1 = new com.bytedance.pangle.GlobalParam     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bytedance.pangle.GlobalParam.mInstance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.mInstance
            return r0
    }

    public void addRequestHeader(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.ensureInit()
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mRequestHeader
            r0.put(r2, r3)
            return
    }

    public boolean autoFetch() {
            r1 = this;
            boolean r0 = r1.mAutoFetch
            return r0
    }

    public boolean checkMatchHostAbi() {
            r1 = this;
            boolean r0 = r1.mCheckMatchHostAbi
            return r0
    }

    public boolean checkPermission() {
            r1 = this;
            boolean r0 = r1.mCheckPermission
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getCustomTag(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>> r0 = r1.mCustomTag
            java.lang.Object r2 = r0.get(r2)
            java.util.Map r2 = (java.util.Map) r2
            return r2
    }

    public long getDexOptDelayTime() {
            r2 = this;
            long r0 = r2.mDexOptDelayTime
            return r0
    }

    public java.lang.String getDid() {
            r1 = this;
            java.lang.String r0 = r1.mDid
            return r0
    }

    public java.io.File getDownloadDir() {
            r1 = this;
            java.io.File r0 = r1.mDownloadDir
            return r0
    }

    public com.bytedance.pangle.download.IDownloaderProvider getDownloaderProvider() {
            r1 = this;
            com.bytedance.pangle.download.IDownloaderProvider r0 = r1.mDownloaderProvider
            return r0
    }

    public java.lang.String getHostUrl() {
            r1 = this;
            java.lang.String r0 = r1.mHostUrl
            return r0
    }

    public int getInstallThreads() {
            r1 = this;
            int r0 = r1.mInstallThreads
            return r0
    }

    public com.bytedance.pangle.log.IZeusLogger getLogger() {
            r1 = this;
            com.bytedance.pangle.log.IZeusLogger r0 = r1.mLogger
            return r0
    }

    public com.bytedance.pangle.log.IZeusReporter getReporter() {
            r1 = this;
            com.bytedance.pangle.log.IZeusReporter r0 = r1.mReporter
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getRequestHeader() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mRequestHeader
            return r0
    }

    public java.lang.String getSignature(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mSignature
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public void init() {
            r1 = this;
            r0 = 1
            r1.hasInit = r0
            return
    }

    public boolean isCloseFlipped() {
            r1 = this;
            boolean r0 = r1.mCloseFlipped
            return r0
    }

    public boolean isDebug() {
            r1 = this;
            boolean r0 = r1.mDebug
            return r0
    }

    public boolean isFastDex2oat() {
            r1 = this;
            boolean r0 = r1.mFastDex2oat
            return r0
    }

    public boolean isPostBgDexOptByInit() {
            r1 = this;
            boolean r0 = r1.mPostBgDexOptByInit
            return r0
    }

    public void postBgDexOptByInit(boolean r1) {
            r0 = this;
            r0.ensureInit()
            boolean r1 = r0.mPostBgDexOptByInit
            r0.mPostBgDexOptByInit = r1
            return
    }

    public void setAutoFetch(boolean r1) {
            r0 = this;
            r0.ensureInit()
            r0.mAutoFetch = r1
            return
    }

    public void setCheckMatchHostAbi(boolean r1) {
            r0 = this;
            r0.mCheckMatchHostAbi = r1
            return
    }

    public void setCheckPermission(boolean r1) {
            r0 = this;
            r0.mCheckPermission = r1
            return
    }

    public void setCloseFlipped(boolean r1) {
            r0 = this;
            r0.ensureInit()
            r0.mCloseFlipped = r1
            return
    }

    public void setCustomTag(java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>> r0 = r1.mCustomTag
            r0.put(r2, r3)
            return
    }

    public void setDebug(boolean r1) {
            r0 = this;
            r0.ensureInit()
            r0.mDebug = r1
            return
    }

    public void setDexOptDelayTime(long r1) {
            r0 = this;
            r0.ensureInit()
            r0.mDexOptDelayTime = r1
            return
    }

    public void setDid(java.lang.String r1) {
            r0 = this;
            r0.mDid = r1
            return
    }

    public void setDownloadDir(java.io.File r1) {
            r0 = this;
            r0.ensureInit()
            r0.mDownloadDir = r1
            return
    }

    public void setDownloaderProvider(com.bytedance.pangle.download.IDownloaderProvider r1) {
            r0 = this;
            r0.ensureInit()
            r0.mDownloaderProvider = r1
            return
    }

    public void setFastDex2oat(boolean r1) {
            r0 = this;
            r0.mFastDex2oat = r1
            return
    }

    public void setHostUrl(java.lang.String r1) {
            r0 = this;
            r0.ensureInit()
            r0.mHostUrl = r1
            return
    }

    public void setInstallThreads(int r1) {
            r0 = this;
            r0.ensureInit()
            r0.mInstallThreads = r1
            return
    }

    public void setLogger(com.bytedance.pangle.log.IZeusLogger r1) {
            r0 = this;
            r0.ensureInit()
            r0.mLogger = r1
            return
    }

    public void setReporter(com.bytedance.pangle.log.IZeusReporter r1) {
            r0 = this;
            r0.ensureInit()
            r0.mReporter = r1
            return
    }

    public void setSignature(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.ensureInit()
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mSignature
            r0.put(r2, r3)
            return
    }

    public void setUnInstallPluginWhenHostChange(java.lang.String r2, boolean r3) {
            r1 = this;
            r1.ensureInit()
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.unInstallPluginWhenHostChange
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0.put(r2, r3)
            return
    }

    public boolean unInstallPluginWhenHostChange(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.unInstallPluginWhenHostChange
            java.lang.Object r2 = r0.get(r2)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            if (r2 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            boolean r2 = r2.booleanValue()
            return r2
    }
}
