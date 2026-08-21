package com.ss.android.socialbase.appdownloader;

public class c {
    private boolean ax;
    private boolean b;
    private boolean bj;
    private com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler bl;
    private boolean bm;
    private java.lang.String c;
    private int cd;
    private int d;
    private android.content.Context df;
    private boolean dj;
    private int ev;
    private long ey;
    private com.ss.android.socialbase.downloader.depend.IDownloadListener f;
    private int fg;
    private org.json.JSONObject fl;
    private boolean fo;
    private java.lang.String fw;
    private boolean g;
    private boolean gk;
    private java.lang.String go;
    private java.lang.String h;
    private boolean hq;
    private boolean i;
    private java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> j;
    private boolean k;
    private int ka;
    private java.lang.String l;
    private int lc;
    private boolean lu;
    private com.ss.android.socialbase.appdownloader.q.pp m;
    private com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider mc;
    private com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend ms;
    private com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator n;
    private com.ss.android.socialbase.downloader.depend.IDownloadListener oh;
    private int[] oi;
    private com.ss.android.socialbase.downloader.depend.IDownloadDepend om;
    private com.ss.android.socialbase.downloader.notification.AbsNotificationItem ou;
    private com.ss.android.socialbase.downloader.constants.EnqueueType oy;
    private long p;
    private java.lang.String pp;
    private java.util.List<java.lang.String> pt;
    private java.lang.String q;
    private com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator qx;
    private com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r;
    private java.lang.String re;
    private android.app.Activity rg;
    private boolean rz;
    private com.ss.android.socialbase.downloader.depend.INotificationClickCallback s;
    private boolean su;
    private boolean t;
    private java.lang.String un;
    private java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> ux;
    private java.lang.String v;
    private boolean vd;
    private boolean xv;
    private boolean y;
    private java.lang.String yw;
    private boolean z;

    public c(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.rz = r0
            r1 = 0
            r2.bm = r1
            r2.b = r0
            r2.hq = r1
            java.lang.String r1 = "application/vnd.android.package-archive"
            r2.un = r1
            r1 = 5
            r2.lc = r1
            r2.k = r0
            com.ss.android.socialbase.downloader.constants.EnqueueType r1 = com.ss.android.socialbase.downloader.constants.EnqueueType.ENQUEUE_NONE
            r2.oy = r1
            r1 = 150(0x96, float:2.1E-43)
            r2.ev = r1
            r2.ax = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2.j = r1
            r2.t = r0
            r2.vd = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.df = r3
            r2.q = r4
            return
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend ax() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r0 = r1.ms
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c b(boolean r1) {
            r0 = this;
            r0.bj = r1
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.v
            return r0
    }

    public boolean bj() {
            r1 = this;
            boolean r0 = r1.ax
            return r0
    }

    public java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> bl() {
            r1 = this;
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = r1.j
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c bm(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c bm(boolean r1) {
            r0 = this;
            r0.lu = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadListener bm() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadListener r0 = r1.f
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c c(int r1) {
            r0 = this;
            r0.ka = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c c(java.lang.String r1) {
            r0 = this;
            r0.re = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c c(boolean r1) {
            r0 = this;
            r0.fo = r1
            return r0
    }

    public boolean c() {
            r1 = this;
            boolean r0 = r1.bm
            return r0
    }

    public java.lang.String cd() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator d() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r0 = r1.n
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c df(int r1) {
            r0 = this;
            r0.lc = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c df(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c df(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.pt = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c df(boolean r1) {
            r0 = this;
            r0.bm = r1
            return r0
    }

    public java.lang.String df() {
            r1 = this;
            java.lang.String r0 = r1.pp
            return r0
    }

    public int dj() {
            r1 = this;
            int r0 = r1.ev
            return r0
    }

    public boolean ev() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    public boolean ey() {
            r1 = this;
            boolean r0 = r1.t
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c f(boolean r1) {
            r0 = this;
            r0.i = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.notification.AbsNotificationItem f() {
            r1 = this;
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r0 = r1.ou
            return r0
    }

    public java.lang.String fg() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public boolean fl() {
            r1 = this;
            boolean r0 = r1.vd
            return r0
    }

    public int fo() {
            r1 = this;
            int r0 = r1.lc
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c fw(java.lang.String r1) {
            r0 = this;
            r0.l = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c fw(boolean r1) {
            r0 = this;
            r0.dj = r1
            return r0
    }

    public boolean fw() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    public boolean g() {
            r1 = this;
            boolean r0 = r1.gk
            return r0
    }

    public android.app.Activity getActivity() {
            r1 = this;
            android.app.Activity r0 = r1.rg
            return r0
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.df
            return r0
    }

    public boolean gk() {
            r1 = this;
            boolean r0 = r1.su
            return r0
    }

    public int go() {
            r1 = this;
            int r0 = r1.cd
            return r0
    }

    public java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.yw
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c hq(boolean r1) {
            r0 = this;
            r0.g = r1
            return r0
    }

    public java.lang.String hq() {
            r1 = this;
            java.lang.String r0 = r1.un
            return r0
    }

    public boolean i() {
            r1 = this;
            boolean r0 = r1.k
            return r0
    }

    public int[] j() {
            r1 = this;
            int[] r0 = r1.oi
            return r0
    }

    public boolean k() {
            r1 = this;
            boolean r0 = r1.bj
            return r0
    }

    public boolean ka() {
            r1 = this;
            boolean r0 = r1.xv
            return r0
    }

    public boolean l() {
            r1 = this;
            boolean r0 = r1.dj
            return r0
    }

    public boolean lc() {
            r1 = this;
            boolean r0 = r1.lu
            return r0
    }

    public boolean lu() {
            r1 = this;
            boolean r0 = r1.g
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider m() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r0 = r1.mc
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.INotificationClickCallback mc() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r0 = r1.s
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadDepend ms() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadDepend r0 = r1.om
            return r0
    }

    public java.lang.String n() {
            r1 = this;
            java.lang.String r0 = r1.re
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c oh(boolean r1) {
            r0 = this;
            r0.ax = r1
            return r0
    }

    public boolean oh() {
            r1 = this;
            boolean r0 = r1.z
            return r0
    }

    public com.ss.android.socialbase.appdownloader.q.pp om() {
            r1 = this;
            com.ss.android.socialbase.appdownloader.q.pp r0 = r1.m
            return r0
    }

    public java.lang.String ou() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public com.ss.android.socialbase.downloader.constants.EnqueueType oy() {
            r1 = this;
            com.ss.android.socialbase.downloader.constants.EnqueueType r0 = r1.oy
            return r0
    }

    public java.lang.String p() {
            r1 = this;
            java.lang.String r0 = r1.go
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c pp(int r1) {
            r0 = this;
            r0.cd = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c pp(java.lang.String r1) {
            r0 = this;
            r0.un = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c pp(boolean r1) {
            r0 = this;
            r0.y = r1
            return r0
    }

    public boolean pp() {
            r1 = this;
            boolean r0 = r1.rz
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c pt(int r1) {
            r0 = this;
            r0.ev = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c pt(java.lang.String r1) {
            r0 = this;
            r0.v = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c pt(boolean r1) {
            r0 = this;
            r0.z = r1
            return r0
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> pt() {
            r1 = this;
            java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r0 = r1.ux
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c q(int r1) {
            r0 = this;
            r0.d = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c q(java.lang.String r1) {
            r0 = this;
            r0.fw = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c q(boolean r1) {
            r0 = this;
            r0.hq = r1
            return r0
    }

    public java.lang.String q() {
            r1 = this;
            java.lang.String r0 = r1.fw
            return r0
    }

    public int qx() {
            r1 = this;
            int r0 = r1.fg
            return r0
    }

    public boolean r() {
            r1 = this;
            boolean r0 = r1.fo
            return r0
    }

    public int re() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c rg(long r1) {
            r0 = this;
            r0.p = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c rg(com.ss.android.socialbase.downloader.constants.EnqueueType r1) {
            r0 = this;
            r0.oy = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c rg(com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler r3) {
            r2 = this;
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r0 = r2.j
            monitor-enter(r0)
            if (r3 == 0) goto L15
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r1 = r2.j     // Catch: java.lang.Throwable -> L17
            boolean r1 = r1.contains(r3)     // Catch: java.lang.Throwable -> L17
            if (r1 == 0) goto Le
            goto L15
        Le:
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler> r1 = r2.j     // Catch: java.lang.Throwable -> L17
            r1.add(r3)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return r2
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return r2
        L17:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r3
    }

    public com.ss.android.socialbase.appdownloader.c rg(com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler r1) {
            r0 = this;
            r0.bl = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c rg(com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r1) {
            r0 = this;
            r0.mc = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c rg(com.ss.android.socialbase.downloader.depend.IDownloadListener r1) {
            r0 = this;
            r0.oh = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c rg(java.lang.String r1) {
            r0 = this;
            r0.pp = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c rg(java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r1) {
            r0 = this;
            r0.ux = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c rg(org.json.JSONObject r1) {
            r0 = this;
            r0.fl = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c rg(boolean r1) {
            r0 = this;
            r0.rz = r1
            return r0
    }

    public java.lang.String rg() {
            r1 = this;
            java.lang.String r0 = r1.q
            return r0
    }

    public void rg(int r1) {
            r0 = this;
            r0.fg = r1
            return
    }

    public com.ss.android.socialbase.appdownloader.c rz(java.lang.String r1) {
            r0 = this;
            r0.yw = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c rz(boolean r1) {
            r0 = this;
            r0.k = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadListener rz() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadListener r0 = r1.oh
            return r0
    }

    public int s() {
            r1 = this;
            int r0 = r1.ka
            return r0
    }

    public long su() {
            r2 = this;
            long r0 = r2.ey
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler t() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler r0 = r1.bl
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c un(boolean r1) {
            r0 = this;
            r0.t = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator un() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r0 = r1.r
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c ux(java.lang.String r1) {
            r0 = this;
            r0.go = r1
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c ux(boolean r1) {
            r0 = this;
            r0.gk = r1
            return r0
    }

    public boolean ux() {
            r1 = this;
            boolean r0 = r1.hq
            return r0
    }

    public com.ss.android.socialbase.appdownloader.c v(boolean r1) {
            r0 = this;
            r0.xv = r1
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator v() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r0 = r1.qx
            return r0
    }

    public org.json.JSONObject vd() {
            r1 = this;
            org.json.JSONObject r0 = r1.fl
            return r0
    }

    public java.util.List<java.lang.String> xv() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.pt
            return r0
    }

    public long y() {
            r2 = this;
            long r0 = r2.p
            return r0
    }

    public boolean z() {
            r1 = this;
            boolean r0 = r1.y
            return r0
    }
}
