package com.ss.android.downloadlib.exception;

public class q implements com.ss.android.download.api.df.rg {

    private static class rg {
        private static com.ss.android.downloadlib.exception.q rg;

        static {
                com.ss.android.downloadlib.exception.q r0 = new com.ss.android.downloadlib.exception.q
                r0.<init>()
                com.ss.android.downloadlib.exception.q.rg.rg = r0
                return
        }

        static com.ss.android.downloadlib.exception.q rg() {
                com.ss.android.downloadlib.exception.q r0 = com.ss.android.downloadlib.exception.q.rg.rg
                return r0
        }
    }

    public q() {
            r0 = this;
            r0.<init>()
            return
    }

    private void df(java.lang.Throwable r2) {
            r1 = this;
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            boolean r0 = com.ss.android.socialbase.appdownloader.c.pp.df(r0)
            if (r0 != 0) goto Lb
            return
        Lb:
            com.ss.android.downloadlib.exception.rg r0 = new com.ss.android.downloadlib.exception.rg
            r0.<init>(r2)
            throw r0
    }

    private boolean df() {
            r3 = this;
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            r1 = 1
            java.lang.String r2 = "enable_monitor"
            int r0 = r0.optInt(r2, r1)
            if (r0 == r1) goto Le
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    public static com.ss.android.downloadlib.exception.q rg() {
            com.ss.android.downloadlib.exception.q r0 = com.ss.android.downloadlib.exception.q.rg.rg()
            return r0
    }

    public static java.lang.String rg(java.lang.Throwable r0) {
            java.lang.String r0 = android.util.Log.getStackTraceString(r0)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    public void df(java.lang.String r2) {
            r1 = this;
            r0 = 1
            r1.df(r0, r2)
            return
    }

    public void df(boolean r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r2.df()
            if (r0 == 0) goto L7
            return
        L7:
            if (r3 == 0) goto L11
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            r3.<init>(r4)
            r2.df(r3)
        L11:
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.lang.String r0 = "msg"
            com.ss.android.downloadlib.utils.b.rg(r3, r0, r4)
            java.lang.Throwable r4 = new java.lang.Throwable
            r4.<init>()
            java.lang.String r4 = rg(r4)
            java.lang.String r0 = "stack"
            com.ss.android.downloadlib.utils.b.rg(r3, r0, r4)
            com.ss.android.download.api.config.un r4 = com.ss.android.downloadlib.addownload.bm.ux()
            r0 = 3
            java.lang.String r1 = "service_ttdownloader"
            r4.rg(r1, r0, r3)
            return
    }

    public void rg(java.lang.String r2) {
            r1 = this;
            r0 = 1
            r1.rg(r0, r2)
            return
    }

    @Override
    public void rg(java.lang.Throwable r2, java.lang.String r3) {
            r1 = this;
            r0 = 1
            r1.rg(r0, r2, r3)
            return
    }

    public void rg(boolean r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r2.df()
            if (r0 == 0) goto L7
            return
        L7:
            if (r3 == 0) goto L11
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            r3.<init>(r4)
            r2.df(r3)
        L11:
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.lang.String r0 = "msg"
            com.ss.android.downloadlib.utils.b.rg(r3, r0, r4)
            java.lang.Throwable r4 = new java.lang.Throwable
            r4.<init>()
            java.lang.String r4 = rg(r4)
            java.lang.String r0 = "stack"
            com.ss.android.downloadlib.utils.b.rg(r3, r0, r4)
            com.ss.android.download.api.config.un r4 = com.ss.android.downloadlib.addownload.bm.ux()
            r0 = 2
            java.lang.String r1 = "service_ttdownloader"
            r4.rg(r1, r0, r3)
            return
    }

    public void rg(boolean r2, java.lang.Throwable r3, java.lang.String r4) {
            r1 = this;
            boolean r0 = r1.df()
            if (r0 == 0) goto L7
            return
        L7:
            if (r3 != 0) goto Le
            java.lang.Throwable r3 = new java.lang.Throwable
            r3.<init>()
        Le:
            if (r2 == 0) goto L13
            r1.df(r3)
        L13:
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L1f
            goto L23
        L1f:
            java.lang.String r4 = r3.getMessage()
        L23:
            java.lang.String r0 = "msg"
            com.ss.android.downloadlib.utils.b.rg(r2, r0, r4)
            java.lang.String r3 = android.util.Log.getStackTraceString(r3)
            java.lang.String r4 = "stack"
            com.ss.android.downloadlib.utils.b.rg(r2, r4, r3)
            com.ss.android.download.api.config.un r3 = com.ss.android.downloadlib.addownload.bm.ux()
            r4 = 1
            java.lang.String r0 = "service_ttdownloader"
            r3.rg(r0, r4, r2)
            return
    }
}
