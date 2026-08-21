package com.ss.android.downloadlib.addownload;

public class bm {
    private static com.ss.android.socialbase.appdownloader.q.ux b;
    private static com.ss.android.download.api.config.df bm;
    private static com.ss.android.download.api.config.ux c;
    private static android.content.Context df;
    private static com.ss.android.download.api.config.v f;
    private static com.ss.android.download.api.config.rz fw;
    private static com.ss.android.download.api.config.pt hq;
    private static com.ss.android.download.api.df.rg n;
    private static com.ss.android.download.api.config.pp oh;
    private static com.ss.android.download.api.config.z ou;
    private static com.ss.android.download.api.config.hq pp;
    private static com.ss.android.download.api.config.q pt;
    private static com.ss.android.download.api.config.fw q;
    private static com.ss.android.download.api.config.un qx;
    private static com.ss.android.download.api.config.oh r;
    public static final org.json.JSONObject rg = null;
    private static com.ss.android.download.api.model.rg rz;
    private static com.ss.android.download.api.config.ou un;
    private static com.ss.android.download.api.config.bm ux;
    private static com.ss.android.download.api.config.b v;
    private static com.ss.android.download.api.config.qx y;
    private static com.ss.android.download.api.config.f z;






    static {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.ss.android.downloadlib.addownload.bm.rg = r0
            return
    }

    public static com.ss.android.download.api.config.df b() {
            com.ss.android.download.api.config.df r0 = com.ss.android.downloadlib.addownload.bm.bm
            return r0
    }

    public static com.ss.android.download.api.config.oh bm() {
            com.ss.android.download.api.config.oh r0 = com.ss.android.downloadlib.addownload.bm.r
            return r0
    }

    public static com.ss.android.socialbase.appdownloader.q.ux c() {
            com.ss.android.socialbase.appdownloader.q.ux r0 = com.ss.android.downloadlib.addownload.bm.b
            if (r0 != 0) goto Lb
            com.ss.android.downloadlib.addownload.bm$2 r0 = new com.ss.android.downloadlib.addownload.bm$2
            r0.<init>()
            com.ss.android.downloadlib.addownload.bm.b = r0
        Lb:
            com.ss.android.socialbase.appdownloader.q.ux r0 = com.ss.android.downloadlib.addownload.bm.b
            return r0
    }

    public static com.ss.android.download.api.config.q df() {
            com.ss.android.download.api.config.q r0 = com.ss.android.downloadlib.addownload.bm.pt
            if (r0 != 0) goto Lb
            com.ss.android.downloadlib.addownload.bm$1 r0 = new com.ss.android.downloadlib.addownload.bm$1
            r0.<init>()
            com.ss.android.downloadlib.addownload.bm.pt = r0
        Lb:
            com.ss.android.download.api.config.q r0 = com.ss.android.downloadlib.addownload.bm.pt
            return r0
    }

    public static void df(android.content.Context r1) {
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.df
            if (r0 != 0) goto L12
            if (r1 == 0) goto L12
            android.content.Context r0 = r1.getApplicationContext()
            if (r0 == 0) goto L12
            android.content.Context r1 = r1.getApplicationContext()
            com.ss.android.downloadlib.addownload.bm.df = r1
        L12:
            return
    }

    public static com.ss.android.download.api.config.pt f() {
            com.ss.android.download.api.config.pt r0 = com.ss.android.downloadlib.addownload.bm.hq
            return r0
    }

    public static com.ss.android.download.api.config.v fw() {
            com.ss.android.download.api.config.v r0 = com.ss.android.downloadlib.addownload.bm.f
            return r0
    }

    public static android.content.Context getContext() {
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.df
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Context is null"
            r0.<init>(r1)
            throw r0
    }

    public static com.ss.android.download.api.config.f hq() {
            com.ss.android.download.api.config.f r0 = com.ss.android.downloadlib.addownload.bm.z
            return r0
    }

    public static com.ss.android.download.api.config.qx n() {
            com.ss.android.download.api.config.qx r0 = com.ss.android.downloadlib.addownload.bm.y
            if (r0 != 0) goto Lb
            com.ss.android.downloadlib.addownload.bm$5 r0 = new com.ss.android.downloadlib.addownload.bm$5
            r0.<init>()
            com.ss.android.downloadlib.addownload.bm.y = r0
        Lb:
            com.ss.android.download.api.config.qx r0 = com.ss.android.downloadlib.addownload.bm.y
            return r0
    }

    public static java.lang.String oh() {
            java.lang.String r0 = "1.7.0"
            return r0
    }

    public static java.lang.String ou() {
            android.content.Context r0 = getContext()     // Catch: java.lang.Throwable -> L52
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()     // Catch: java.lang.Throwable -> L52
            int r0 = r0.targetSdkVersion     // Catch: java.lang.Throwable -> L52
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L52
            r2 = 29
            if (r1 < r2) goto L29
            if (r0 != r2) goto L18
            boolean r1 = android.os.Environment.isExternalStorageLegacy()     // Catch: java.lang.Throwable -> L52
            if (r1 == 0) goto L1a
        L18:
            if (r0 <= r2) goto L29
        L1a:
            android.content.Context r0 = getContext()     // Catch: java.lang.Throwable -> L52
            java.lang.String r1 = android.os.Environment.DIRECTORY_DOWNLOADS     // Catch: java.lang.Throwable -> L52
            java.io.File r0 = r0.getExternalFilesDir(r1)     // Catch: java.lang.Throwable -> L52
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: java.lang.Throwable -> L52
            return r0
        L29:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L52
            r0.<init>()     // Catch: java.lang.Throwable -> L52
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L52
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> L52
            r0.append(r1)     // Catch: java.lang.Throwable -> L52
            java.lang.String r1 = java.io.File.separator     // Catch: java.lang.Throwable -> L52
            r0.append(r1)     // Catch: java.lang.Throwable -> L52
            org.json.JSONObject r1 = rz()     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "default_save_dir_name"
            java.lang.String r3 = "ByteDownload"
            java.lang.String r1 = r1.optString(r2, r3)     // Catch: java.lang.Throwable -> L52
            r0.append(r1)     // Catch: java.lang.Throwable -> L52
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L52
            return r0
        L52:
            r0 = 0
            return r0
    }

    public static com.ss.android.download.api.config.rz pp() {
            com.ss.android.download.api.config.rz r0 = com.ss.android.downloadlib.addownload.bm.fw
            if (r0 != 0) goto Lb
            com.ss.android.download.api.rg.df r0 = new com.ss.android.download.api.rg.df
            r0.<init>()
            com.ss.android.downloadlib.addownload.bm.fw = r0
        Lb:
            com.ss.android.download.api.config.rz r0 = com.ss.android.downloadlib.addownload.bm.fw
            return r0
    }

    public static com.ss.android.download.api.config.ux pt() {
            com.ss.android.download.api.config.ux r0 = com.ss.android.downloadlib.addownload.bm.c
            return r0
    }

    public static com.ss.android.download.api.config.hq q() {
            com.ss.android.download.api.config.hq r0 = com.ss.android.downloadlib.addownload.bm.pp
            if (r0 != 0) goto Lb
            com.ss.android.download.api.rg.rg r0 = new com.ss.android.download.api.rg.rg
            r0.<init>()
            com.ss.android.downloadlib.addownload.bm.pp = r0
        Lb:
            com.ss.android.download.api.config.hq r0 = com.ss.android.downloadlib.addownload.bm.pp
            return r0
    }

    public static com.ss.android.download.api.df.rg qx() {
            com.ss.android.download.api.df.rg r0 = com.ss.android.downloadlib.addownload.bm.n
            if (r0 != 0) goto Lb
            com.ss.android.downloadlib.addownload.bm$4 r0 = new com.ss.android.downloadlib.addownload.bm$4
            r0.<init>()
            com.ss.android.downloadlib.addownload.bm.n = r0
        Lb:
            com.ss.android.download.api.df.rg r0 = com.ss.android.downloadlib.addownload.bm.n
            return r0
    }

    public static com.ss.android.download.api.config.ou r() {
            com.ss.android.download.api.config.ou r0 = com.ss.android.downloadlib.addownload.bm.un
            return r0
    }

    public static com.ss.android.download.api.config.fw rg() {
            com.ss.android.download.api.config.fw r0 = com.ss.android.downloadlib.addownload.bm.q
            return r0
    }

    public static void rg(android.content.Context r1) {
            if (r1 == 0) goto Lf
            android.content.Context r0 = r1.getApplicationContext()
            if (r0 == 0) goto Lf
            android.content.Context r1 = r1.getApplicationContext()
            com.ss.android.downloadlib.addownload.bm.df = r1
            return
        Lf:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Context is null"
            r1.<init>(r0)
            throw r1
    }

    public static void rg(com.ss.android.download.api.config.bm r0) {
            com.ss.android.downloadlib.addownload.bm.ux = r0
            return
    }

    public static void rg(com.ss.android.download.api.config.df r0) {
            com.ss.android.downloadlib.addownload.bm.bm = r0
            return
    }

    public static void rg(com.ss.android.download.api.config.fw r0) {
            com.ss.android.downloadlib.addownload.bm.q = r0
            return
    }

    public static void rg(com.ss.android.download.api.config.hq r0) {
            com.ss.android.downloadlib.addownload.bm.pp = r0
            return
    }

    public static void rg(com.ss.android.download.api.config.rz r0) {
            com.ss.android.downloadlib.addownload.bm.fw = r0
            return
    }

    public static void rg(com.ss.android.download.api.config.ux r0) {
            com.ss.android.downloadlib.addownload.bm.c = r0
            return
    }

    public static void rg(com.ss.android.download.api.config.z r0) {
            com.ss.android.downloadlib.addownload.bm.ou = r0
            return
    }

    public static void rg(com.ss.android.download.api.df.rg r0) {
            com.ss.android.downloadlib.addownload.bm.n = r0
            return
    }

    public static void rg(com.ss.android.download.api.model.rg r0) {
            com.ss.android.downloadlib.addownload.bm.rz = r0
            return
    }

    public static void rg(java.lang.String r1) {
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
            r0.rg(r1)
            return
    }

    public static org.json.JSONObject rz() {
            com.ss.android.download.api.config.bm r0 = com.ss.android.downloadlib.addownload.bm.ux
            if (r0 == 0) goto L12
            org.json.JSONObject r0 = r0.rg()
            if (r0 != 0) goto Lb
            goto L12
        Lb:
            com.ss.android.download.api.config.bm r0 = com.ss.android.downloadlib.addownload.bm.ux
            org.json.JSONObject r0 = r0.rg()
            return r0
        L12:
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rg
            return r0
    }

    public static com.ss.android.download.api.config.b un() {
            com.ss.android.download.api.config.b r0 = com.ss.android.downloadlib.addownload.bm.v
            return r0
    }

    public static com.ss.android.download.api.config.un ux() {
            com.ss.android.download.api.config.un r0 = com.ss.android.downloadlib.addownload.bm.qx
            if (r0 != 0) goto Lb
            com.ss.android.downloadlib.addownload.bm$3 r0 = new com.ss.android.downloadlib.addownload.bm$3
            r0.<init>()
            com.ss.android.downloadlib.addownload.bm.qx = r0
        Lb:
            com.ss.android.download.api.config.un r0 = com.ss.android.downloadlib.addownload.bm.qx
            return r0
    }

    public static com.ss.android.download.api.config.pp v() {
            com.ss.android.download.api.config.pp r0 = com.ss.android.downloadlib.addownload.bm.oh
            return r0
    }

    public static boolean y() {
            com.ss.android.download.api.config.fw r0 = com.ss.android.downloadlib.addownload.bm.q
            if (r0 == 0) goto L17
            com.ss.android.download.api.config.ux r0 = com.ss.android.downloadlib.addownload.bm.c
            if (r0 == 0) goto L17
            com.ss.android.download.api.config.bm r0 = com.ss.android.downloadlib.addownload.bm.ux
            if (r0 == 0) goto L17
            com.ss.android.download.api.config.df r0 = com.ss.android.downloadlib.addownload.bm.bm
            if (r0 == 0) goto L17
            com.ss.android.download.api.config.z r0 = com.ss.android.downloadlib.addownload.bm.ou
            if (r0 != 0) goto L15
            goto L17
        L15:
            r0 = 1
            return r0
        L17:
            r0 = 0
            return r0
    }

    public static com.ss.android.download.api.config.z z() {
            com.ss.android.download.api.config.z r0 = com.ss.android.downloadlib.addownload.bm.ou
            return r0
    }
}
