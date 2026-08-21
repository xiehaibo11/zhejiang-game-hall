package com.ss.android.downloadlib.addownload.compliance;

public class q extends com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Long, com.ss.android.downloadlib.addownload.model.df> {

    static class 1 {
    }

    private static class rg {
        private static com.ss.android.downloadlib.addownload.compliance.q rg;

        static {
                com.ss.android.downloadlib.addownload.compliance.q r0 = new com.ss.android.downloadlib.addownload.compliance.q
                r1 = 0
                r0.<init>(r1)
                com.ss.android.downloadlib.addownload.compliance.q.rg.rg = r0
                return
        }

        static com.ss.android.downloadlib.addownload.compliance.q rg() {
                com.ss.android.downloadlib.addownload.compliance.q r0 = com.ss.android.downloadlib.addownload.compliance.q.rg.rg
                return r0
        }
    }

    private q() {
            r1 = this;
            r0 = 16
            r1.<init>(r0, r0)
            return
    }

    q(com.ss.android.downloadlib.addownload.compliance.q.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ss.android.downloadlib.addownload.compliance.q rg() {
            com.ss.android.downloadlib.addownload.compliance.q r0 = com.ss.android.downloadlib.addownload.compliance.q.rg.rg()
            return r0
    }

    public com.ss.android.downloadlib.addownload.model.df rg(long r1) {
            r0 = this;
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.Object r1 = r0.get(r1)
            com.ss.android.downloadlib.addownload.model.df r1 = (com.ss.android.downloadlib.addownload.model.df) r1
            return r1
    }

    public com.ss.android.downloadlib.addownload.model.df rg(long r2, long r4) {
            r1 = this;
            java.lang.Long r0 = java.lang.Long.valueOf(r2)
            java.lang.Object r0 = r1.get(r0)
            if (r0 == 0) goto Lf
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            goto L13
        Lf:
            java.lang.Long r2 = java.lang.Long.valueOf(r4)
        L13:
            java.lang.Object r2 = r1.get(r2)
            com.ss.android.downloadlib.addownload.model.df r2 = (com.ss.android.downloadlib.addownload.model.df) r2
            return r2
    }

    public void rg(com.ss.android.downloadlib.addownload.model.df r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            long r0 = r3.rg()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r2.put(r0, r3)
            return
    }
}
