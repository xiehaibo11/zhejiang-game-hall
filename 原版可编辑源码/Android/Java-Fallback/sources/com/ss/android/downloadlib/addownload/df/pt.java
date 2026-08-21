package com.ss.android.downloadlib.addownload.df;

public class pt {
    private static volatile com.ss.android.downloadlib.addownload.df.pt rg;
    private long df;
    private java.util.List<java.lang.String> pp;
    private java.util.HashMap<java.lang.String, java.lang.Integer> pt;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.ss.android.downloadlib.addownload.df.pp> q;

    public pt() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.df = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.q = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.pt = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.pp = r0
            return
    }

    public static com.ss.android.downloadlib.addownload.df.pt rg() {
            com.ss.android.downloadlib.addownload.df.pt r0 = com.ss.android.downloadlib.addownload.df.pt.rg
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.addownload.df.pt> r0 = com.ss.android.downloadlib.addownload.df.pt.class
            monitor-enter(r0)
            com.ss.android.downloadlib.addownload.df.pt r1 = com.ss.android.downloadlib.addownload.df.pt.rg     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.addownload.df.pt r1 = new com.ss.android.downloadlib.addownload.df.pt     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.addownload.df.pt.rg = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.addownload.df.pt r0 = com.ss.android.downloadlib.addownload.df.pt.rg
            return r0
    }

    public static void rg(com.ss.android.downloadad.api.rg.df r4) {
            if (r4 == 0) goto L23
            long r0 = r4.df()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto Ld
            goto L23
        Ld:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            int r4 = r4.qx()
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r0.getDownloadInfo(r4)
            if (r4 != 0) goto L20
            return
        L20:
            rg(r4)
        L23:
            return
    }

    public static void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = r3.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 0
            java.lang.String r2 = "delete_file_after_install"
            int r0 = r0.optInt(r2, r1)
            if (r0 != 0) goto L15
            return
        L15:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4d
            r0.<init>()     // Catch: java.lang.Exception -> L4d
            java.lang.String r1 = r3.getSavePath()     // Catch: java.lang.Exception -> L4d
            r0.append(r1)     // Catch: java.lang.Exception -> L4d
            java.lang.String r1 = java.io.File.separator     // Catch: java.lang.Exception -> L4d
            r0.append(r1)     // Catch: java.lang.Exception -> L4d
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Exception -> L4d
            r0.append(r3)     // Catch: java.lang.Exception -> L4d
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L4d
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L4d
            if (r0 == 0) goto L38
            return
        L38:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L4d
            r0.<init>(r3)     // Catch: java.lang.Exception -> L4d
            boolean r3 = r0.isFile()     // Catch: java.lang.Exception -> L4d
            if (r3 == 0) goto L51
            boolean r3 = r0.exists()     // Catch: java.lang.Exception -> L4d
            if (r3 == 0) goto L51
            r0.delete()     // Catch: java.lang.Exception -> L4d
            goto L51
        L4d:
            r3 = move-exception
            r3.printStackTrace()
        L51:
            return
    }

    public int df(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r2.pt
            if (r0 != 0) goto L13
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.pt = r0
        L13:
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r2.pt
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L27
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r2.pt
            java.lang.Object r3 = r0.get(r3)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r1 = r3.intValue()
        L27:
            return r1
    }

    long df() {
            r2 = this;
            long r0 = r2.df
            return r0
    }

    void q() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2.df = r0
            return
    }

    public void rg(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.ss.android.downloadlib.addownload.df.pp> r0 = r1.q
            r0.remove(r2)
        Lb:
            return
    }

    public void rg(java.lang.String r2, com.ss.android.downloadlib.addownload.df.pp r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.ss.android.downloadlib.addownload.df.pp> r0 = r1.q
            r0.put(r2, r3)
        Lb:
            return
    }
}
