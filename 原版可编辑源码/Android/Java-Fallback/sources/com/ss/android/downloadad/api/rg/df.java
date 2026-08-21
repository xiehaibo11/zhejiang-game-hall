package com.ss.android.downloadad.api.rg;

public class df implements com.ss.android.downloadad.api.rg.rg {
    private java.lang.String ax;
    private java.lang.String b;
    private java.lang.String bj;
    private long bl;
    private java.lang.String bm;
    private long c;
    private java.lang.String cd;
    private long d;
    protected boolean df;
    private int dj;
    private boolean ev;
    private long ey;
    private int f;
    private transient boolean fg;
    private java.lang.String fl;
    private int fo;
    private java.lang.String fw;
    private boolean g;
    private long gk;
    private int go;
    private boolean h;
    private java.lang.String hq;
    private long i;
    private boolean j;
    private java.lang.String k;
    private boolean ka;
    private int l;
    private long lc;
    private boolean lu;
    private int m;
    private int mc;
    private boolean ms;
    private boolean n;
    private int oh;
    private boolean oi;
    private boolean om;
    private long ou;
    private boolean oy;
    private int p;
    private long pp;
    public final java.util.concurrent.atomic.AtomicBoolean pt;
    public final java.util.concurrent.atomic.AtomicBoolean q;
    private java.lang.String qx;
    private java.lang.String r;
    private boolean re;
    protected boolean rg;
    private java.lang.String rz;
    private boolean s;
    private boolean su;
    private boolean t;
    private int un;
    private int ux;
    private int v;
    private boolean vd;
    private boolean xv;
    private org.json.JSONObject y;
    private boolean yw;
    private java.lang.String z;

    private df() {
            r3 = this;
            r3.<init>()
            r0 = 1
            r3.ux = r0
            r3.n = r0
            r1 = 0
            r3.re = r1
            r3.l = r1
            r3.p = r1
            r3.lu = r1
            r3.g = r1
            r3.oy = r0
            r3.ev = r0
            r3.rg = r0
            r3.df = r0
            java.util.concurrent.atomic.AtomicBoolean r2 = new java.util.concurrent.atomic.AtomicBoolean
            r2.<init>(r1)
            r3.q = r2
            java.util.concurrent.atomic.AtomicBoolean r2 = new java.util.concurrent.atomic.AtomicBoolean
            r2.<init>(r1)
            r3.pt = r2
            r3.mc = r0
            r3.s = r0
            r0 = -1
            r3.ey = r0
            return
    }

    public df(com.ss.android.download.api.download.DownloadModel r2, com.ss.android.download.api.download.DownloadEventConfig r3, com.ss.android.download.api.download.DownloadController r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public df(com.ss.android.download.api.download.DownloadModel r4, com.ss.android.download.api.download.DownloadEventConfig r5, com.ss.android.download.api.download.DownloadController r6, int r7) {
            r3 = this;
            r3.<init>()
            r0 = 1
            r3.ux = r0
            r3.n = r0
            r1 = 0
            r3.re = r1
            r3.l = r1
            r3.p = r1
            r3.lu = r1
            r3.g = r1
            r3.oy = r0
            r3.ev = r0
            r3.rg = r0
            r3.df = r0
            java.util.concurrent.atomic.AtomicBoolean r2 = new java.util.concurrent.atomic.AtomicBoolean
            r2.<init>(r1)
            r3.q = r2
            java.util.concurrent.atomic.AtomicBoolean r2 = new java.util.concurrent.atomic.AtomicBoolean
            r2.<init>(r1)
            r3.pt = r2
            r3.mc = r0
            r3.s = r0
            r0 = -1
            r3.ey = r0
            long r0 = r4.getId()
            r3.pp = r0
            long r0 = r4.getExtraValue()
            r3.c = r0
            java.lang.String r0 = r4.getLogExtra()
            r3.fw = r0
            java.lang.String r0 = r4.getPackageName()
            r3.rz = r0
            org.json.JSONObject r0 = r4.getExtra()
            r3.y = r0
            boolean r0 = r4.isAd()
            r3.n = r0
            int r0 = r4.getVersionCode()
            r3.un = r0
            java.lang.String r0 = r4.getVersionName()
            r3.z = r0
            java.lang.String r0 = r4.getDownloadUrl()
            r3.bm = r0
            com.ss.android.download.api.model.DeepLink r0 = r4.getDeepLink()
            if (r0 == 0) goto L81
            com.ss.android.download.api.model.DeepLink r0 = r4.getDeepLink()
            java.lang.String r0 = r0.getOpenUrl()
            r3.b = r0
            com.ss.android.download.api.model.DeepLink r0 = r4.getDeepLink()
            java.lang.String r0 = r0.getWebUrl()
            r3.hq = r0
        L81:
            int r0 = r4.getModelType()
            r3.oh = r0
            java.lang.String r0 = r4.getName()
            r3.r = r0
            java.lang.String r0 = r4.getAppIcon()
            r3.qx = r0
            java.lang.String r0 = r4.getMimeType()
            r3.bj = r0
            java.lang.String r0 = r5.getClickButtonTag()
            r3.cd = r0
            java.lang.String r0 = r5.getRefer()
            r3.ax = r0
            boolean r5 = r5.isEnableV3Event()
            r3.ms = r5
            boolean r5 = r6.isEnableBackDialog()
            r3.re = r5
            int r5 = r6.getLinkMode()
            r3.f = r5
            int r5 = r6.getDownloadMode()
            r3.v = r5
            boolean r5 = r6.enableShowComplianceDialog()
            r3.s = r5
            boolean r5 = r6.isAutoDownloadOnCardShow()
            r3.su = r5
            boolean r5 = r6.enableNewActivity()
            r3.oy = r5
            boolean r5 = r6.enableAH()
            r3.rg = r5
            boolean r5 = r6.enableAM()
            r3.df = r5
            r3.fo = r7
            long r5 = java.lang.System.currentTimeMillis()
            r3.ou = r5
            r3.i = r5
            boolean r4 = r4.shouldDownloadWithPatchApply()
            r3.g = r4
            return
    }

    public static com.ss.android.downloadad.api.rg.df df(org.json.JSONObject r6) {
            if (r6 != 0) goto L4
            r6 = 0
            return r6
        L4:
            com.ss.android.downloadad.api.rg.df r0 = new com.ss.android.downloadad.api.rg.df
            r0.<init>()
            java.lang.String r1 = "mId"
            long r1 = com.ss.android.download.api.q.df.rg(r6, r1)     // Catch: java.lang.Exception -> L1d3
            r0.pt(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mExtValue"
            long r1 = com.ss.android.download.api.q.df.rg(r6, r1)     // Catch: java.lang.Exception -> L1d3
            r0.pp(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mLogExtra"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.q(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mDownloadStatus"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L1d3
            r0.pp(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mPackageName"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.df(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mIsAd"
            r2 = 1
            boolean r1 = r6.optBoolean(r1, r2)     // Catch: java.lang.Exception -> L1d3
            r0.rg(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mTimeStamp"
            long r3 = com.ss.android.download.api.q.df.rg(r6, r1)     // Catch: java.lang.Exception -> L1d3
            r0.c(r3)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mVersionCode"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L1d3
            r0.c(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mVersionName"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.pt(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mDownloadId"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L1d3
            r0.fw(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mIsV3Event"
            boolean r1 = r6.optBoolean(r1)     // Catch: java.lang.Exception -> L1d3
            r0.df(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mScene"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L1d3
            r0.ux(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mEventTag"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.c(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mEventRefer"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.fw(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mDownloadUrl"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.ux(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mEnableBackDialog"
            boolean r1 = r6.optBoolean(r1)     // Catch: java.lang.Exception -> L1d3
            r0.q(r1)     // Catch: java.lang.Exception -> L1d3
            java.util.concurrent.atomic.AtomicBoolean r1 = r0.q     // Catch: java.lang.Exception -> L1d3
            java.lang.String r3 = "hasSendInstallFinish"
            boolean r3 = r6.optBoolean(r3)     // Catch: java.lang.Exception -> L1d3
            r1.set(r3)     // Catch: java.lang.Exception -> L1d3
            java.util.concurrent.atomic.AtomicBoolean r1 = r0.pt     // Catch: java.lang.Exception -> L1d3
            java.lang.String r3 = "hasSendDownloadFailedFinally"
            boolean r3 = r6.optBoolean(r3)     // Catch: java.lang.Exception -> L1d3
            r1.set(r3)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mLastFailedErrCode"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L1d3
            r0.pt(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mLastFailedErrMsg"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.rg(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mOpenUrl"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.rz(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mLinkMode"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L1d3
            r0.bm(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mDownloadMode"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L1d3
            r0.b(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mModelType"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L1d3
            r0.hq(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mAppName"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.bm(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mAppIcon"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.b(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mDownloadFailedTimes"
            r3 = 0
            int r1 = r6.optInt(r1, r3)     // Catch: java.lang.Exception -> L1d3
            r0.rg(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mRecentDownloadResumeTime"
            long r4 = com.ss.android.download.api.q.df.rg(r6, r1)     // Catch: java.lang.Exception -> L1d3
            r0.rg(r4)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mClickPauseTimes"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L1d3
            r0.df(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mJumpInstallTime"
            long r4 = com.ss.android.download.api.q.df.rg(r6, r1)     // Catch: java.lang.Exception -> L1d3
            r0.df(r4)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mCancelInstallTime"
            long r4 = com.ss.android.download.api.q.df.rg(r6, r1)     // Catch: java.lang.Exception -> L1d3
            r0.q(r4)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mLastFailedResumeCount"
            int r1 = r6.optInt(r1)     // Catch: java.lang.Exception -> L1d3
            r0.q(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "downloadFinishReason"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.hq(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "clickDownloadSize"
            long r4 = r6.optLong(r1)     // Catch: java.lang.Exception -> L1d3
            r0.rz(r4)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "clickDownloadTime"
            long r4 = r6.optLong(r1)     // Catch: java.lang.Exception -> L1d3
            r0.ux(r4)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mIsUpdateDownload"
            boolean r1 = r6.optBoolean(r1)     // Catch: java.lang.Exception -> L1d3
            r0.ux(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mOriginMimeType"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.oh(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mIsPatchApplyHandled"
            boolean r1 = r6.optBoolean(r1)     // Catch: java.lang.Exception -> L1d3
            r0.rz(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "installAfterCleanSpace"
            boolean r1 = r6.optBoolean(r1)     // Catch: java.lang.Exception -> L1d3
            r0.c(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "funnelType"
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L1d3
            r0.rz(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "webUrl"
            java.lang.String r1 = r6.optString(r1)     // Catch: java.lang.Exception -> L1d3
            r0.pp(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "enableShowComplianceDialog"
            boolean r1 = r6.optBoolean(r1, r2)     // Catch: java.lang.Exception -> L1d3
            r0.un(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "isAutoDownloadOnCardShow"
            boolean r1 = r6.optBoolean(r1)     // Catch: java.lang.Exception -> L1d3
            r0.z(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "enable_new_activity"
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L1d3
            if (r1 != r2) goto L19c
            r1 = r2
            goto L19d
        L19c:
            r1 = r3
        L19d:
            r0.r(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "enable_pause"
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L1d3
            if (r1 != r2) goto L1aa
            r1 = r2
            goto L1ab
        L1aa:
            r1 = r3
        L1ab:
            r0.qx(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "enable_ah"
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L1d3
            if (r1 != r2) goto L1b8
            r1 = r2
            goto L1b9
        L1b8:
            r1 = r3
        L1b9:
            r0.n(r1)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "enable_am"
            int r1 = r6.optInt(r1, r2)     // Catch: java.lang.Exception -> L1d3
            if (r1 != r2) goto L1c5
            goto L1c6
        L1c5:
            r2 = r3
        L1c6:
            r0.ou(r2)     // Catch: java.lang.Exception -> L1d3
            java.lang.String r1 = "mExtras"
            org.json.JSONObject r6 = r6.optJSONObject(r1)     // Catch: java.lang.Exception -> L1d3
            r0.rg(r6)     // Catch: java.lang.Exception -> L1d3
            goto L1dd
        L1d3:
            r6 = move-exception
            com.ss.android.download.api.df.rg r1 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r2 = "NativeDownloadModel fromJson"
            r1.rg(r6, r2)
        L1dd:
            return r0
    }

    public long ax() {
            r2 = this;
            long r0 = r2.ey
            return r0
    }

    @Override
    public org.json.JSONObject b() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void b(int r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.qx = r1
            return
    }

    public void b(boolean r1) {
            r0 = this;
            r0.xv = r1
            return
    }

    public long bj() {
            r2 = this;
            long r0 = r2.ou
            return r0
    }

    public boolean bl() {
            r1 = this;
            boolean r0 = r1.om
            return r0
    }

    @Override
    public java.lang.String bm() {
            r1 = this;
            java.lang.String r0 = r1.cd
            return r0
    }

    public void bm(int r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void bm(java.lang.String r1) {
            r0 = this;
            r0.r = r1
            return
    }

    public void bm(boolean r1) {
            r0 = this;
            r0.fg = r1
            return
    }

    @Override
    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void c(int r1) {
            r0 = this;
            r0.un = r1
            return
    }

    public void c(long r3) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L8
            r2.ou = r3
        L8:
            return
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.cd = r1
            return
    }

    public void c(boolean r1) {
            r0 = this;
            r0.om = r1
            return
    }

    public boolean cd() {
            r1 = this;
            boolean r0 = r1.re
            return r0
    }

    public long d() {
            r2 = this;
            long r0 = r2.lc
            return r0
    }

    @Override
    public long df() {
            r2 = this;
            long r0 = r2.pp
            return r0
    }

    public void df(int r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public void df(long r1) {
            r0 = this;
            r0.lc = r1
            return
    }

    public void df(java.lang.String r1) {
            r0 = this;
            r0.rz = r1
            return
    }

    public void df(boolean r1) {
            r0 = this;
            r0.ms = r1
            return
    }

    public int dj() {
            r1 = this;
            int r0 = r1.dj
            return r0
    }

    public int ev() {
            r1 = this;
            int r0 = r1.m
            return r0
    }

    public boolean ey() {
            r1 = this;
            boolean r0 = r1.xv
            return r0
    }

    @Override
    public java.util.List<java.lang.String> f() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void f(boolean r1) {
            r0 = this;
            r0.yw = r1
            return
    }

    public boolean fg() {
            r1 = this;
            boolean r0 = r1.vd
            return r0
    }

    public boolean fl() {
            r1 = this;
            boolean r0 = r1.lu
            return r0
    }

    @Override
    public com.ss.android.download.api.download.DownloadController fo() {
            r1 = this;
            com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.ls()
            return r0
    }

    @Override
    public org.json.JSONObject fw() {
            r1 = this;
            org.json.JSONObject r0 = r1.y
            return r0
    }

    public void fw(int r1) {
            r0 = this;
            r0.fo = r1
            return
    }

    public void fw(long r1) {
            r0 = this;
            r0.ey = r1
            return
    }

    public void fw(java.lang.String r1) {
            r0 = this;
            r0.ax = r1
            return
    }

    public void fw(boolean r1) {
            r0 = this;
            r0.ka = r1
            return
    }

    public int g() {
            r1 = this;
            int r0 = r1.un
            return r0
    }

    public boolean gk() {
            r1 = this;
            boolean r0 = r1.ka
            return r0
    }

    public int go() {
            r1 = this;
            int r0 = r1.go
            return r0
    }

    public java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.bj
            return r0
    }

    @Override
    public long hq() {
            r2 = this;
            long r0 = r2.c
            return r0
    }

    public void hq(int r1) {
            r0 = this;
            r0.oh = r1
            return
    }

    public void hq(java.lang.String r1) {
            r0 = this;
            r0.fl = r1
            return
    }

    public void hq(boolean r1) {
            r0 = this;
            r0.vd = r1
            return
    }

    public synchronized void i() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.p     // Catch: java.lang.Throwable -> L9
            int r0 = r0 + 1
            r1.p = r0     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public boolean j() {
            r1 = this;
            boolean r0 = r1.g
            return r0
    }

    public java.lang.String k() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public boolean ka() {
            r1 = this;
            boolean r0 = r1.fg
            return r0
    }

    public synchronized void l() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.l     // Catch: java.lang.Throwable -> L9
            int r0 = r0 + 1
            r1.l = r0     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public long lc() {
            r4 = this;
            long r0 = r4.i
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto La
            long r0 = r4.ou
        La:
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadController ls() {
            r2 = this;
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = new com.ss.android.downloadad.api.download.AdDownloadController$Builder
            r0.<init>()
            boolean r1 = r2.re
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = r0.setIsEnableBackDialog(r1)
            int r1 = r2.f
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = r0.setLinkMode(r1)
            int r1 = r2.v
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = r0.setDownloadMode(r1)
            boolean r1 = r2.s
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = r0.setEnableShowComplianceDialog(r1)
            boolean r1 = r2.rg
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = r0.setEnableAH(r1)
            boolean r1 = r2.df
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = r0.setEnableAM(r1)
            com.ss.android.downloadad.api.download.AdDownloadController r0 = r0.build()
            return r0
    }

    public int lu() {
            r1 = this;
            int r0 = r1.ux
            return r0
    }

    public java.lang.String m() {
            r1 = this;
            java.lang.String r0 = r1.fl
            return r0
    }

    public boolean mc() {
            r1 = this;
            boolean r0 = r1.j
            return r0
    }

    public java.lang.String ms() {
            r1 = this;
            java.lang.String r0 = r1.r
            return r0
    }

    @Override
    public int n() {
            r1 = this;
            r0 = -1
            return r0
    }

    public void n(boolean r1) {
            r0 = this;
            r0.rg = r1
            return
    }

    public void oh(java.lang.String r1) {
            r0 = this;
            r0.bj = r1
            return
    }

    public void oh(boolean r1) {
            r0 = this;
            r0.t = r1
            return
    }

    @Override
    public boolean oh() {
            r1 = this;
            boolean r0 = r1.ms
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel oi() {
            r5 = this;
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = new com.ss.android.downloadad.api.download.AdDownloadModel$Builder
            r0.<init>()
            long r1 = r5.pp
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setAdId(r1)
            long r1 = r5.c
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setExtraValue(r1)
            java.lang.String r1 = r5.fw
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setLogExtra(r1)
            java.lang.String r1 = r5.rz
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setPackageName(r1)
            org.json.JSONObject r1 = r5.y
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setExtra(r1)
            boolean r1 = r5.n
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setIsAd(r1)
            int r1 = r5.un
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setVersionCode(r1)
            java.lang.String r1 = r5.z
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setVersionName(r1)
            java.lang.String r1 = r5.bm
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setDownloadUrl(r1)
            int r1 = r5.oh
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setModelType(r1)
            java.lang.String r1 = r5.bj
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setMimeType(r1)
            java.lang.String r1 = r5.r
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setAppName(r1)
            java.lang.String r1 = r5.qx
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setAppIcon(r1)
            com.ss.android.download.api.model.DeepLink r1 = new com.ss.android.download.api.model.DeepLink
            java.lang.String r2 = r5.b
            java.lang.String r3 = r5.hq
            r4 = 0
            r1.<init>(r2, r3, r4)
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = r0.setDeepLink(r1)
            com.ss.android.downloadad.api.download.AdDownloadModel r0 = r0.build()
            return r0
    }

    public int om() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    @Override
    public com.ss.android.download.api.download.DownloadModel ou() {
            r1 = this;
            com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.oi()
            return r0
    }

    public void ou(boolean r1) {
            r0 = this;
            r0.df = r1
            return
    }

    public com.ss.android.downloadad.api.download.AdDownloadEventConfig ox() {
            r2 = this;
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = new com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder
            r0.<init>()
            java.lang.String r1 = r2.cd
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setClickButtonTag(r1)
            java.lang.String r1 = r2.ax
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setRefer(r1)
            boolean r1 = r2.ms
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setIsEnableV3Event(r1)
            com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r0.build()
            return r0
    }

    public java.lang.String oy() {
            r1 = this;
            java.lang.String r0 = r1.z
            return r0
    }

    public int p() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    @Override
    public java.lang.String pp() {
            r1 = this;
            java.lang.String r0 = r1.rz
            return r0
    }

    public void pp(int r1) {
            r0 = this;
            r0.ux = r1
            return
    }

    public void pp(long r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void pp(java.lang.String r1) {
            r0 = this;
            r0.hq = r1
            return
    }

    public void pp(boolean r1) {
            r0 = this;
            r0.j = r1
            return
    }

    @Override
    public java.lang.String pt() {
            r1 = this;
            java.lang.String r0 = r1.fw
            return r0
    }

    public void pt(int r1) {
            r0 = this;
            r0.go = r1
            return
    }

    public void pt(long r1) {
            r0 = this;
            r0.pp = r1
            return
    }

    public void pt(java.lang.String r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public void pt(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void q(int r1) {
            r0 = this;
            r0.dj = r1
            return
    }

    public void q(long r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void q(java.lang.String r1) {
            r0 = this;
            r0.fw = r1
            return
    }

    public void q(boolean r1) {
            r0 = this;
            r0.re = r1
            return
    }

    @Override
    public boolean q() {
            r1 = this;
            boolean r0 = r1.n
            return r0
    }

    @Override
    public int qx() {
            r1 = this;
            int r0 = r1.fo
            return r0
    }

    public void qx(boolean r1) {
            r0 = this;
            r0.ev = r1
            return
    }

    @Override
    public org.json.JSONObject r() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void r(boolean r1) {
            r0 = this;
            r0.oy = r1
            return
    }

    public int re() {
            r1 = this;
            int r0 = r1.l
            return r0
    }

    @Override
    public java.lang.String rg() {
            r1 = this;
            java.lang.String r0 = r1.bm
            return r0
    }

    public void rg(int r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public void rg(long r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void rg(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void rg(org.json.JSONObject r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public void rg(boolean r1) {
            r0 = this;
            r0.n = r1
            return
    }

    @Override
    public java.lang.String rz() {
            r1 = this;
            java.lang.String r0 = r1.ax
            return r0
    }

    public void rz(int r1) {
            r0 = this;
            r0.mc = r1
            return
    }

    public void rz(long r1) {
            r0 = this;
            r0.gk = r1
            return
    }

    public void rz(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void rz(boolean r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public long s() {
            r2 = this;
            long r0 = r2.bl
            return r0
    }

    public long su() {
            r2 = this;
            long r0 = r2.gk
            return r0
    }

    public boolean t() {
            r1 = this;
            boolean r0 = r1.yw
            return r0
    }

    @Override
    public org.json.JSONObject un() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void un(boolean r1) {
            r0 = this;
            r0.s = r1
            return
    }

    @Override
    public int ux() {
            r1 = this;
            int r0 = r1.mc
            return r0
    }

    public void ux(int r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public void ux(long r1) {
            r0 = this;
            r0.bl = r1
            return
    }

    public void ux(java.lang.String r1) {
            r0 = this;
            r0.bm = r1
            return
    }

    public void ux(boolean r1) {
            r0 = this;
            r0.lu = r1
            return
    }

    @Override
    public java.lang.Object v() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void v(boolean r1) {
            r0 = this;
            r0.oi = r1
            return
    }

    public boolean vd() {
            r1 = this;
            boolean r0 = r1.oi
            return r0
    }

    public boolean xv() {
            r1 = this;
            boolean r0 = r1.t
            return r0
    }

    @Override
    public com.ss.android.download.api.download.DownloadEventConfig y() {
            r1 = this;
            com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.ox()
            return r0
    }

    public org.json.JSONObject yw() {
            r6 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "mId"
            long r2 = r6.pp     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mExtValue"
            long r2 = r6.c     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mLogExtra"
            java.lang.String r2 = r6.fw     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mDownloadStatus"
            int r2 = r6.ux     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mPackageName"
            java.lang.String r2 = r6.rz     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mIsAd"
            boolean r2 = r6.n     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mTimeStamp"
            long r2 = r6.ou     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mExtras"
            org.json.JSONObject r2 = r6.y     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mVersionCode"
            int r2 = r6.un     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mVersionName"
            java.lang.String r2 = r6.z     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mDownloadId"
            int r2 = r6.fo     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mIsV3Event"
            boolean r2 = r6.ms     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mScene"
            int r2 = r6.m     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mEventTag"
            java.lang.String r2 = r6.cd     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mEventRefer"
            java.lang.String r2 = r6.ax     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mDownloadUrl"
            java.lang.String r2 = r6.bm     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mEnableBackDialog"
            boolean r2 = r6.re     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "hasSendInstallFinish"
            java.util.concurrent.atomic.AtomicBoolean r2 = r6.q     // Catch: java.lang.Exception -> L17e
            boolean r2 = r2.get()     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "hasSendDownloadFailedFinally"
            java.util.concurrent.atomic.AtomicBoolean r2 = r6.pt     // Catch: java.lang.Exception -> L17e
            boolean r2 = r2.get()     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mLastFailedErrCode"
            int r2 = r6.go     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mLastFailedErrMsg"
            java.lang.String r2 = r6.k     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mOpenUrl"
            java.lang.String r2 = r6.b     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mLinkMode"
            int r2 = r6.f     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mDownloadMode"
            int r2 = r6.v     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mModelType"
            int r2 = r6.oh     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mAppName"
            java.lang.String r2 = r6.r     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mAppIcon"
            java.lang.String r2 = r6.qx     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mDownloadFailedTimes"
            int r2 = r6.l     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mRecentDownloadResumeTime"
            long r2 = r6.i     // Catch: java.lang.Exception -> L17e
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto Lde
            long r2 = r6.ou     // Catch: java.lang.Exception -> L17e
            goto Le0
        Lde:
            long r2 = r6.i     // Catch: java.lang.Exception -> L17e
        Le0:
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mClickPauseTimes"
            int r2 = r6.p     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mJumpInstallTime"
            long r2 = r6.lc     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mCancelInstallTime"
            long r2 = r6.d     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mLastFailedResumeCount"
            int r2 = r6.dj     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mIsUpdateDownload"
            boolean r2 = r6.lu     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mOriginMimeType"
            java.lang.String r2 = r6.bj     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "mIsPatchApplyHandled"
            boolean r2 = r6.g     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "downloadFinishReason"
            java.lang.String r2 = r6.fl     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "clickDownloadTime"
            long r2 = r6.bl     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "clickDownloadSize"
            long r2 = r6.gk     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "installAfterCleanSpace"
            boolean r2 = r6.om     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "funnelType"
            int r2 = r6.mc     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "webUrl"
            java.lang.String r2 = r6.hq     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "enableShowComplianceDialog"
            boolean r2 = r6.s     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "isAutoDownloadOnCardShow"
            boolean r2 = r6.su     // Catch: java.lang.Exception -> L17e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "enable_new_activity"
            boolean r2 = r6.oy     // Catch: java.lang.Exception -> L17e
            r3 = 1
            r4 = 0
            if (r2 == 0) goto L156
            r2 = r3
            goto L157
        L156:
            r2 = r4
        L157:
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "enable_pause"
            boolean r2 = r6.ev     // Catch: java.lang.Exception -> L17e
            if (r2 == 0) goto L162
            r2 = r3
            goto L163
        L162:
            r2 = r4
        L163:
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "enable_ah"
            boolean r2 = r6.rg     // Catch: java.lang.Exception -> L17e
            if (r2 == 0) goto L16e
            r2 = r3
            goto L16f
        L16e:
            r2 = r4
        L16f:
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L17e
            java.lang.String r1 = "enable_am"
            boolean r2 = r6.df     // Catch: java.lang.Exception -> L17e
            if (r2 == 0) goto L179
            goto L17a
        L179:
            r3 = r4
        L17a:
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L17e
            goto L188
        L17e:
            r1 = move-exception
            com.ss.android.download.api.df.rg r2 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r3 = "NativeDownloadModel toJson"
            r2.rg(r1, r3)
        L188:
            return r0
    }

    public void z(boolean r1) {
            r0 = this;
            r0.su = r1
            return
    }

    @Override
    public boolean z() {
            r1 = this;
            boolean r0 = r1.oy
            return r0
    }
}
