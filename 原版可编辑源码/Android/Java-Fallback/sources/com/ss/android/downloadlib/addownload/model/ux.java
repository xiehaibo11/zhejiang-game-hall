package com.ss.android.downloadlib.addownload.model;

public class ux {



    private static class rg {
        private static com.ss.android.downloadlib.addownload.model.ux rg;

        static {
                com.ss.android.downloadlib.addownload.model.ux r0 = new com.ss.android.downloadlib.addownload.model.ux
                r1 = 0
                r0.<init>(r1)
                com.ss.android.downloadlib.addownload.model.ux.rg.rg = r0
                return
        }

        static com.ss.android.downloadlib.addownload.model.ux rg() {
                com.ss.android.downloadlib.addownload.model.ux r0 = com.ss.android.downloadlib.addownload.model.ux.rg.rg
                return r0
        }
    }

    private ux() {
            r0 = this;
            r0.<init>()
            return
    }

    ux(com.ss.android.downloadlib.addownload.model.ux.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private android.content.SharedPreferences q() {
            r3 = this;
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.String r1 = "sp_ad_download_event"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            return r0
    }

    static android.content.SharedPreferences rg(com.ss.android.downloadlib.addownload.model.ux r0) {
            android.content.SharedPreferences r0 = r0.q()
            return r0
    }

    public static com.ss.android.downloadlib.addownload.model.ux rg() {
            com.ss.android.downloadlib.addownload.model.ux r0 = com.ss.android.downloadlib.addownload.model.ux.rg.rg()
            return r0
    }

    java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> df() {
            r7 = this;
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            android.content.SharedPreferences r1 = r7.q()
            java.util.Map r1 = r1.getAll()
            if (r1 != 0) goto L10
            return r0
        L10:
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L18:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L5f
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getValue()
            if (r3 != 0) goto L2b
            goto L18
        L2b:
            java.lang.Object r3 = r2.getKey()     // Catch: java.lang.Exception -> L5a
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L5a
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Exception -> L5a
            long r3 = r3.longValue()     // Catch: java.lang.Exception -> L5a
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L5a
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Exception -> L5a
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L5a
            r5.<init>(r2)     // Catch: java.lang.Exception -> L5a
            com.ss.android.downloadad.api.rg.df r2 = com.ss.android.downloadad.api.rg.df.df(r5)     // Catch: java.lang.Exception -> L5a
            r5 = 0
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 <= 0) goto L18
            if (r2 == 0) goto L18
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Exception -> L5a
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L5a
            goto L18
        L5a:
            r2 = move-exception
            r2.printStackTrace()
            goto L18
        L5f:
            return r0
    }

    public void rg(com.ss.android.downloadad.api.rg.df r2) {
            r1 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r2)
            r1.rg(r0)
            return
    }

    public synchronized void rg(java.util.Collection<com.ss.android.downloadad.api.rg.df> r3) {
            r2 = this;
            monitor-enter(r2)
            if (r3 == 0) goto L1c
            boolean r0 = r3.isEmpty()     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto La
            goto L1c
        La:
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()     // Catch: java.lang.Throwable -> L19
            com.ss.android.downloadlib.addownload.model.ux$1 r1 = new com.ss.android.downloadlib.addownload.model.ux$1     // Catch: java.lang.Throwable -> L19
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L19
            r3 = 1
            r0.rg(r1, r3)     // Catch: java.lang.Throwable -> L19
            monitor-exit(r2)
            return
        L19:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
        L1c:
            monitor-exit(r2)
            return
    }

    public void rg(java.util.List<java.lang.String> r3) {
            r2 = this;
            if (r3 == 0) goto L16
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto L9
            goto L16
        L9:
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.addownload.model.ux$2 r1 = new com.ss.android.downloadlib.addownload.model.ux$2
            r1.<init>(r2, r3)
            r3 = 1
            r0.rg(r1, r3)
        L16:
            return
    }
}
