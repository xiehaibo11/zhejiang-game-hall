package com.ss.android.downloadlib.addownload;

public class pt {
    private com.ss.android.downloadlib.addownload.model.pp df;
    private java.util.concurrent.atomic.AtomicBoolean pt;
    private java.util.concurrent.atomic.AtomicBoolean q;
    private android.os.Handler rg;







    pt(android.os.Handler r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.q = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r1)
            r2.pt = r0
            r2.rg = r3
            return
    }

    public static long df() {
            com.ss.android.download.api.config.f r0 = com.ss.android.downloadlib.addownload.bm.hq()
            if (r0 == 0) goto Lf
            com.ss.android.download.api.config.f r0 = com.ss.android.downloadlib.addownload.bm.hq()
            long r0 = r0.rg()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    private void df(com.ss.android.downloadad.api.rg.df r2, org.json.JSONObject r3, long r4, long r6) {
            r1 = this;
            java.lang.String r0 = "1"
            r2.hq(r0)
            com.ss.android.downloadlib.addownload.model.ux r0 = com.ss.android.downloadlib.addownload.model.ux.rg()
            r0.rg(r2)
            java.lang.String r0 = "quite_clean_size"
            long r6 = r6 - r4
            java.lang.Long r4 = java.lang.Long.valueOf(r6)     // Catch: org.json.JSONException -> L17
            r3.putOpt(r0, r4)     // Catch: org.json.JSONException -> L17
            goto L1b
        L17:
            r4 = move-exception
            r4.printStackTrace()
        L1b:
            com.ss.android.downloadlib.event.AdEventHandler r4 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r5 = "cleanspace_download_after_quite_clean"
            r4.rg(r5, r3, r2)
            return
    }

    private static long pt() {
            r0 = 0
            long r0 = com.ss.android.downloadlib.utils.b.rg(r0)
            return r0
    }

    static long q() {
            long r0 = pt()
            return r0
    }

    static long rg(com.ss.android.downloadlib.addownload.pt r0, java.util.Map r1) {
            long r0 = r0.rg(r1)
            return r0
    }

    private long rg(java.util.Map<java.lang.String, java.lang.String> r6) {
            r5 = this;
            r0 = 0
            if (r6 == 0) goto L3c
            int r2 = r6.size()
            if (r2 != 0) goto Lb
            goto L3c
        Lb:
            java.util.Set r6 = r6.entrySet()     // Catch: java.lang.Exception -> L38
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Exception -> L38
        L13:
            boolean r2 = r6.hasNext()     // Catch: java.lang.Exception -> L38
            if (r2 == 0) goto L3c
            java.lang.Object r2 = r6.next()     // Catch: java.lang.Exception -> L38
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Exception -> L38
            java.lang.Object r3 = r2.getKey()     // Catch: java.lang.Exception -> L38
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L38
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Exception -> L38
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L38
            java.lang.String r4 = "content-length"
            boolean r3 = r4.equalsIgnoreCase(r3)     // Catch: java.lang.Exception -> L38
            if (r3 == 0) goto L13
            long r0 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Exception -> L38
            return r0
        L38:
            r6 = move-exception
            r6.printStackTrace()
        L3c:
            return r0
    }

    static java.util.concurrent.atomic.AtomicBoolean rg(com.ss.android.downloadlib.addownload.pt r0) {
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.q
            return r0
    }

    public static org.json.JSONObject rg(java.lang.String r2) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "clean_space_install_params"
            r0.putOpt(r1, r2)     // Catch: org.json.JSONException -> Lb
            goto Lf
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            return r0
    }

    public static void rg(int r0) {
            boolean r0 = com.ss.android.downloadlib.utils.pt.c(r0)
            if (r0 != 0) goto L7
            return
        L7:
            com.ss.android.download.api.config.f r0 = com.ss.android.downloadlib.addownload.bm.hq()
            if (r0 == 0) goto L1e
            com.ss.android.download.api.config.f r0 = com.ss.android.downloadlib.addownload.bm.hq()
            boolean r0 = r0.df()
            if (r0 == 0) goto L1e
            com.ss.android.download.api.config.f r0 = com.ss.android.downloadlib.addownload.bm.hq()
            r0.q()
        L1e:
            return
    }

    private void rg(int r19, java.lang.String r20, long r21, com.ss.android.downloadad.api.rg.df r23, long r24, com.ss.android.downloadlib.addownload.pp.rg r26) {
            r18 = this;
            r8 = r18
            r1 = r21
            r9 = r23
            r10 = r26
            java.util.concurrent.atomic.AtomicBoolean r0 = r8.q
            r11 = 1
            r0.set(r11)
            r3 = 0
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            r12 = 0
            if (r0 <= 0) goto L93
            org.json.JSONObject r13 = new org.json.JSONObject
            r13.<init>()
            java.lang.String r0 = "apk_size"
            java.lang.Long r3 = java.lang.Long.valueOf(r21)     // Catch: org.json.JSONException -> L24
            r13.putOpt(r0, r3)     // Catch: org.json.JSONException -> L24
            goto L28
        L24:
            r0 = move-exception
            r0.printStackTrace()
        L28:
            double r3 = com.ss.android.downloadlib.utils.pt.rg(r19)
            r5 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r3 = r3 + r5
            double r0 = (double) r1
            double r3 = r3 * r0
            java.lang.Double r0 = java.lang.Double.valueOf(r3)
            long r0 = r0.longValue()
            long r2 = com.ss.android.downloadlib.utils.pt.df(r19)
            long r0 = r0 + r2
            long r14 = r0 - r24
            long r16 = pt()
            int r0 = (r16 > r14 ? 1 : (r16 == r14 ? 0 : -1))
            if (r0 >= 0) goto L93
            r1 = r18
            r2 = r23
            r3 = r13
            r4 = r14
            r6 = r16
            r1.rg(r2, r3, r4, r6)
            rg(r23)
            long r6 = pt()
            int r0 = (r6 > r14 ? 1 : (r6 == r14 ? 0 : -1))
            if (r0 >= 0) goto L60
            r0 = r11
            goto L61
        L60:
            r0 = r12
        L61:
            if (r0 == 0) goto L89
            r9.pt(r11)
            java.lang.String r0 = r23.rg()
            com.ss.android.downloadlib.addownload.df.pt r1 = com.ss.android.downloadlib.addownload.df.pt.rg()
            com.ss.android.downloadlib.addownload.pt$4 r2 = new com.ss.android.downloadlib.addownload.pt$4
            r2.<init>(r8, r9, r10, r0)
            r1.rg(r0, r2)
            r1 = r18
            r2 = r19
            r3 = r23
            r4 = r20
            r5 = r14
            boolean r12 = r1.rg(r2, r3, r4, r5)
            if (r12 == 0) goto L93
            r9.pp(r11)
            goto L93
        L89:
            r1 = r18
            r2 = r23
            r3 = r13
            r4 = r16
            r1.df(r2, r3, r4, r6)
        L93:
            if (r12 != 0) goto L9f
            android.os.Handler r0 = r8.rg
            com.ss.android.downloadlib.addownload.pt$5 r1 = new com.ss.android.downloadlib.addownload.pt$5
            r1.<init>(r8, r10)
            r0.post(r1)
        L9f:
            return
    }

    private static void rg(com.ss.android.downloadad.api.rg.df r6) {
            long r0 = pt()
            com.ss.android.download.api.config.f r2 = com.ss.android.downloadlib.addownload.bm.hq()
            if (r2 == 0) goto L11
            com.ss.android.download.api.config.f r2 = com.ss.android.downloadlib.addownload.bm.hq()
            r2.pp()
        L11:
            com.ss.android.downloadlib.addownload.df.q.rg()
            com.ss.android.downloadlib.addownload.df.q.df()
            int r2 = r6.qx()
            boolean r2 = com.ss.android.downloadlib.utils.pt.fw(r2)
            if (r2 == 0) goto L28
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.downloadlib.addownload.df.q.rg(r2)
        L28:
            long r2 = pt()
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            java.lang.String r5 = "quite_clean_size"
            long r2 = r2 - r0
            java.lang.Long r0 = java.lang.Long.valueOf(r2)     // Catch: org.json.JSONException -> L3c
            r4.putOpt(r5, r0)     // Catch: org.json.JSONException -> L3c
            goto L40
        L3c:
            r0 = move-exception
            r0.printStackTrace()
        L40:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r1 = "clean_quite_finish"
            r0.rg(r1, r4, r6)
            return
    }

    private void rg(com.ss.android.downloadad.api.rg.df r2, org.json.JSONObject r3, long r4, long r6) {
            r1 = this;
            java.lang.String r0 = "available_space"
            java.lang.Long r6 = java.lang.Long.valueOf(r6)     // Catch: org.json.JSONException -> L13
            r3.putOpt(r0, r6)     // Catch: org.json.JSONException -> L13
            java.lang.String r6 = "apk_download_need_size"
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: org.json.JSONException -> L13
            r3.putOpt(r6, r4)     // Catch: org.json.JSONException -> L13
            goto L17
        L13:
            r4 = move-exception
            r4.printStackTrace()
        L17:
            com.ss.android.downloadlib.event.AdEventHandler r4 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r5 = "clean_space_no_enough_for_download"
            r4.rg(r5, r3, r2)
            return
    }

    static void rg(com.ss.android.downloadlib.addownload.pt r0, int r1, java.lang.String r2, long r3, com.ss.android.downloadad.api.rg.df r5, long r6, com.ss.android.downloadlib.addownload.pp.rg r8) {
            r0.rg(r1, r2, r3, r5, r6, r8)
            return
    }

    private void rg(java.lang.String r1, com.ss.android.downloadad.api.rg.df r2, com.ss.android.downloadlib.addownload.pp.df r3) {
            r0 = this;
            if (r3 != 0) goto L3
            return
        L3:
            com.ss.android.downloadlib.addownload.pt$3 r2 = new com.ss.android.downloadlib.addownload.pt$3
            r2.<init>(r0, r3)
            com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter.asyncFetchHttpHeadInfo(r1, r2)
            return
    }

    private boolean rg(int r9, com.ss.android.downloadad.api.rg.df r10, java.lang.String r11, long r12) {
            r8 = this;
            boolean r0 = com.ss.android.downloadlib.utils.pt.c(r9)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            com.ss.android.download.api.config.f r0 = com.ss.android.downloadlib.addownload.bm.hq()
            if (r0 == 0) goto L1b
            com.ss.android.download.api.config.f r2 = com.ss.android.downloadlib.addownload.bm.hq()
            r5 = 1
            r3 = r9
            r4 = r11
            r6 = r12
            boolean r9 = r2.rg(r3, r4, r5, r6)
            return r9
        L1b:
            org.json.JSONObject r9 = new org.json.JSONObject
            r9.<init>()
            java.lang.String r11 = "show_dialog_result"
            r12 = 3
            java.lang.Integer r12 = java.lang.Integer.valueOf(r12)     // Catch: org.json.JSONException -> L2b
            r9.putOpt(r11, r12)     // Catch: org.json.JSONException -> L2b
            goto L2f
        L2b:
            r11 = move-exception
            r11.printStackTrace()
        L2f:
            com.ss.android.downloadlib.event.AdEventHandler r11 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r12 = "cleanspace_window_show"
            r11.rg(r12, r9, r10)
            return r1
    }

    public static boolean rg(com.ss.android.socialbase.downloader.model.DownloadInfo r6, long r7) {
            int r1 = r6.getId()
            boolean r0 = com.ss.android.downloadlib.utils.pt.c(r1)
            r2 = 0
            if (r0 != 0) goto Lc
            return r2
        Lc:
            com.ss.android.download.api.config.f r0 = com.ss.android.downloadlib.addownload.bm.hq()
            if (r0 == 0) goto L32
            com.ss.android.download.api.config.f r0 = com.ss.android.downloadlib.addownload.bm.hq()
            java.lang.String r2 = r6.getUrl()
            r3 = 0
            r4 = r7
            boolean r2 = r0.rg(r1, r2, r3, r4)
            if (r2 == 0) goto L32
            com.ss.android.downloadlib.addownload.df.pt r7 = com.ss.android.downloadlib.addownload.df.pt.rg()
            java.lang.String r8 = r6.getUrl()
            com.ss.android.downloadlib.addownload.pt$6 r0 = new com.ss.android.downloadlib.addownload.pt$6
            r0.<init>(r6)
            r7.rg(r8, r0)
        L32:
            return r2
    }

    void rg(int r16, long r17, long r19, com.ss.android.downloadlib.addownload.pp.rg r21) {
            r15 = this;
            r9 = r15
            r10 = r21
            java.util.concurrent.atomic.AtomicBoolean r0 = r9.pt
            r1 = 0
            r0.set(r1)
            if (r10 != 0) goto Lc
            return
        Lc:
            boolean r0 = com.ss.android.downloadlib.utils.pt.c(r16)
            if (r0 == 0) goto La7
            boolean r0 = com.ss.android.downloadlib.utils.pt.pp(r16)
            if (r0 != 0) goto L1a
            goto La7
        L1a:
            long r11 = com.ss.android.downloadlib.utils.pt.q(r16)
            java.util.concurrent.atomic.AtomicBoolean r0 = r9.q
            r0.set(r1)
            com.ss.android.downloadlib.addownload.model.pp r0 = r9.df
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            java.lang.String r8 = r0.getDownloadUrl()
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.df(r8)
            if (r0 != 0) goto L4d
            com.ss.android.downloadad.api.rg.df r0 = new com.ss.android.downloadad.api.rg.df
            com.ss.android.downloadlib.addownload.model.pp r2 = r9.df
            com.ss.android.download.api.download.DownloadModel r2 = r2.df
            com.ss.android.downloadlib.addownload.model.pp r3 = r9.df
            com.ss.android.download.api.download.DownloadEventConfig r3 = r3.q
            com.ss.android.downloadlib.addownload.model.pp r4 = r9.df
            com.ss.android.download.api.download.DownloadController r4 = r4.pt
            r0.<init>(r2, r3, r4, r1)
            com.ss.android.downloadlib.addownload.model.c r2 = com.ss.android.downloadlib.addownload.model.c.rg()
            r2.rg(r0)
        L4d:
            r13 = r0
            r13.pp(r1)
            com.ss.android.download.api.config.f r0 = com.ss.android.downloadlib.addownload.bm.hq()
            if (r0 == 0) goto L62
            com.ss.android.download.api.config.f r0 = com.ss.android.downloadlib.addownload.bm.hq()
            long r1 = r13.df()
            r0.rg(r1)
        L62:
            com.ss.android.downloadlib.addownload.df.pt r0 = com.ss.android.downloadlib.addownload.df.pt.rg()
            java.lang.String r1 = r13.rg()
            r0.rg(r1)
            boolean r0 = com.ss.android.downloadlib.utils.pt.pt(r16)
            r1 = 0
            int r3 = (r19 > r1 ? 1 : (r19 == r1 ? 0 : -1))
            if (r3 <= 0) goto L86
            r0 = r15
            r1 = r16
            r2 = r8
            r3 = r19
            r5 = r13
            r6 = r17
            r8 = r21
            r0.rg(r1, r2, r3, r5, r6, r8)
            goto L9c
        L86:
            if (r0 == 0) goto L9b
            com.ss.android.downloadlib.addownload.pt$1 r14 = new com.ss.android.downloadlib.addownload.pt$1
            r0 = r14
            r1 = r15
            r2 = r16
            r3 = r8
            r4 = r13
            r5 = r17
            r7 = r21
            r0.<init>(r1, r2, r3, r4, r5, r7)
            r15.rg(r8, r13, r14)
            goto L9c
        L9b:
            r11 = r1
        L9c:
            android.os.Handler r0 = r9.rg
            com.ss.android.downloadlib.addownload.pt$2 r1 = new com.ss.android.downloadlib.addownload.pt$2
            r1.<init>(r15, r10)
            r0.postDelayed(r1, r11)
            return
        La7:
            r21.rg()
            return
    }

    public void rg(com.ss.android.downloadlib.addownload.model.pp r1) {
            r0 = this;
            r0.df = r1
            return
    }

    public void rg(boolean r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.pt
            r0.set(r2)
            return
    }

    public boolean rg() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.pt
            boolean r0 = r0.get()
            return r0
    }
}
