package com.ss.android.downloadlib.rg.df;

public class rg {
    private static java.lang.String c = "";
    private static volatile com.ss.android.downloadlib.rg.df.rg fw = null;
    private static java.lang.String pp = "";
    private static java.lang.String pt = "";
    private android.content.Context b;
    private volatile boolean bm;
    public final java.util.List<com.ss.android.downloadlib.rg.df.rg.rg> df;
    private java.lang.String f;
    private final java.util.List<android.util.Pair<com.ss.android.downloadlib.rg.df.df, com.ss.android.downloadlib.rg.df.pt>> hq;
    private final android.content.ServiceConnection oh;
    public final java.lang.Object q;
    public com.ss.android.downloadlib.rg.df.q rg;
    private boolean rz;
    private boolean ux;


    public interface rg {
        void df();

        void rg();
    }

    static {
            return
    }

    private rg() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.ux = r0
            r0 = 0
            r1.rz = r0
            r1.bm = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.hq = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.df = r0
            com.ss.android.downloadlib.rg.df.rg$1 r0 = new com.ss.android.downloadlib.rg.df.rg$1
            r0.<init>(r1)
            r1.oh = r0
            java.lang.String r0 = ""
            r1.f = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.q = r0
            return
    }

    public static com.ss.android.downloadlib.rg.df.rg rg() {
            com.ss.android.downloadlib.rg.df.rg r0 = com.ss.android.downloadlib.rg.df.rg.fw
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.rg.df.rg> r0 = com.ss.android.downloadlib.rg.df.rg.class
            monitor-enter(r0)
            com.ss.android.downloadlib.rg.df.rg r1 = com.ss.android.downloadlib.rg.df.rg.fw     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.rg.df.rg r1 = new com.ss.android.downloadlib.rg.df.rg     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.rg.df.rg.fw = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.rg.df.rg r0 = com.ss.android.downloadlib.rg.df.rg.fw
            return r0
    }

    public void df() {
            r2 = this;
            com.ss.android.downloadlib.rg.df.q r0 = r2.rg
            if (r0 == 0) goto Le
            android.content.Context r0 = r2.b
            android.content.ServiceConnection r1 = r2.oh
            r0.unbindService(r1)
            r0 = 0
            r2.rg = r0
        Le:
            java.util.List<com.ss.android.downloadlib.rg.df.rg$rg> r0 = r2.df
            r0.clear()
            java.util.List<android.util.Pair<com.ss.android.downloadlib.rg.df.df, com.ss.android.downloadlib.rg.df.pt>> r0 = r2.hq
            r0.clear()
            return
    }

    public boolean pt() {
            r1 = this;
            boolean r0 = r1.bm
            return r0
    }

    public void q() {
            r4 = this;
            java.util.List<android.util.Pair<com.ss.android.downloadlib.rg.df.df, com.ss.android.downloadlib.rg.df.pt>> r0 = r4.hq
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L25
            java.lang.Object r1 = r0.next()
            android.util.Pair r1 = (android.util.Pair) r1
            com.ss.android.downloadlib.rg.df.q r2 = r4.rg     // Catch: android.os.RemoteException -> L20
            java.lang.Object r3 = r1.first     // Catch: android.os.RemoteException -> L20
            com.ss.android.downloadlib.rg.df.df r3 = (com.ss.android.downloadlib.rg.df.df) r3     // Catch: android.os.RemoteException -> L20
            java.lang.Object r1 = r1.second     // Catch: android.os.RemoteException -> L20
            com.ss.android.downloadlib.rg.df.pt r1 = (com.ss.android.downloadlib.rg.df.pt) r1     // Catch: android.os.RemoteException -> L20
            r2.rg(r3, r1)     // Catch: android.os.RemoteException -> L20
            goto L6
        L20:
            r1 = move-exception
            r1.printStackTrace()
            goto L6
        L25:
            java.util.List<android.util.Pair<com.ss.android.downloadlib.rg.df.df, com.ss.android.downloadlib.rg.df.pt>> r0 = r4.hq
            r0.clear()
            return
    }

    public android.content.Intent rg(android.content.Context r6) {
            r5 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = com.ss.android.downloadlib.rg.df.rg.pt
            r0.setAction(r1)
            android.content.pm.PackageManager r6 = r6.getPackageManager()
            r1 = 0
            java.util.List r6 = r6.queryIntentServices(r0, r1)
            r1 = 0
            if (r6 == 0) goto L4b
            int r2 = r6.size()
            r3 = 1
            if (r2 == r3) goto L1e
            goto L4b
        L1e:
            java.util.Iterator r6 = r6.iterator()
        L22:
            boolean r2 = r6.hasNext()
            if (r2 == 0) goto L4b
            java.lang.Object r2 = r6.next()
            android.content.pm.ResolveInfo r2 = (android.content.pm.ResolveInfo) r2
            android.content.pm.ServiceInfo r3 = r2.serviceInfo
            java.lang.String r3 = r3.packageName
            android.content.pm.ServiceInfo r2 = r2.serviceInfo
            java.lang.String r2 = r2.name
            java.lang.String r4 = com.ss.android.downloadlib.rg.df.rg.pp
            boolean r4 = r4.equals(r3)
            if (r4 == 0) goto L22
            android.content.ComponentName r6 = new android.content.ComponentName
            r6.<init>(r3, r2)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>(r0)
            r1.setComponent(r6)
        L4b:
            return r1
    }

    public void rg(com.ss.android.downloadlib.rg.df.df r4, com.ss.android.downloadlib.rg.df.pt r5) {
            r3 = this;
            java.lang.Object r0 = r3.q
            monitor-enter(r0)
            java.lang.String r1 = com.ss.android.downloadlib.rg.df.rg.c     // Catch: java.lang.Throwable -> L3d
            r4.pp = r1     // Catch: java.lang.Throwable -> L3d
            java.lang.String r1 = r4.c     // Catch: java.lang.Throwable -> L3d
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L13
            java.lang.String r1 = r3.f     // Catch: java.lang.Throwable -> L3d
            r4.c = r1     // Catch: java.lang.Throwable -> L3d
        L13:
            com.ss.android.downloadlib.rg.df.q r1 = r3.rg     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L22
            com.ss.android.downloadlib.rg.df.q r1 = r3.rg     // Catch: android.os.RemoteException -> L1d java.lang.Throwable -> L3d
            r1.rg(r4, r5)     // Catch: android.os.RemoteException -> L1d java.lang.Throwable -> L3d
            goto L3b
        L1d:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L3d
            goto L3b
        L22:
            boolean r1 = r3.pt()     // Catch: java.lang.Throwable -> L3d
            if (r1 != 0) goto L32
            android.content.Context r1 = r3.b     // Catch: java.lang.Throwable -> L3d
            boolean r2 = r3.rz     // Catch: java.lang.Throwable -> L3d
            boolean r1 = r3.rg(r1, r2)     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L3b
        L32:
            java.util.List<android.util.Pair<com.ss.android.downloadlib.rg.df.df, com.ss.android.downloadlib.rg.df.pt>> r1 = r3.hq     // Catch: java.lang.Throwable -> L3d
            android.util.Pair r4 = android.util.Pair.create(r4, r5)     // Catch: java.lang.Throwable -> L3d
            r1.add(r4)     // Catch: java.lang.Throwable -> L3d
        L3b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            return
        L3d:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            throw r4
    }

    public void rg(boolean r1) {
            r0 = this;
            r0.bm = r1
            return
    }

    public boolean rg(android.content.Context r4, boolean r5) {
            r3 = this;
            java.lang.String r0 = com.ss.android.downloadlib.rg.df.rg.pt
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L36
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "s"
            java.lang.String r1 = r0.optString(r1)
            java.lang.String r2 = "q"
            java.lang.String r2 = r0.optString(r2)
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.c.q.rg(r2, r1)
            com.ss.android.downloadlib.rg.df.rg.pt = r2
            java.lang.String r2 = "u"
            java.lang.String r2 = r0.optString(r2)
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.c.q.rg(r2, r1)
            com.ss.android.downloadlib.rg.df.rg.pp = r2
            java.lang.String r2 = "w"
            java.lang.String r0 = r0.optString(r2)
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.q.rg(r0, r1)
            com.ss.android.downloadlib.rg.df.rg.c = r0
        L36:
            r3.rz = r5
            if (r4 == 0) goto L6a
            android.content.Context r5 = r4.getApplicationContext()
            r3.b = r5
            java.lang.String r5 = com.ss.android.downloadlib.rg.df.rg.c
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L50
            android.content.Context r5 = r3.b
            java.lang.String r5 = r5.getPackageName()
            com.ss.android.downloadlib.rg.df.rg.c = r5
        L50:
            com.ss.android.downloadlib.rg.df.q r5 = r3.rg
            if (r5 != 0) goto L6a
            boolean r5 = r3.pt()
            if (r5 == 0) goto L5b
            goto L6a
        L5b:
            android.content.Intent r4 = r3.rg(r4)
            android.content.Context r5 = r3.b
            android.content.ServiceConnection r0 = r3.oh
            r1 = 33
            boolean r4 = r5.bindService(r4, r0, r1)
            return r4
        L6a:
            r4 = 1
            return r4
    }
}
