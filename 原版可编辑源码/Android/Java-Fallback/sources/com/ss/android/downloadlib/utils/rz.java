package com.ss.android.downloadlib.utils;

public class rz {
    private static java.util.Map<java.lang.String, com.ss.android.downloadlib.utils.rz.rg> rg;

    public interface rg {
        void rg();

        void rg(java.lang.String r1);
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            com.ss.android.downloadlib.utils.rz.rg = r0
            return
    }

    public static boolean df(java.lang.String r2) {
            com.ss.android.download.api.config.rz r0 = com.ss.android.downloadlib.addownload.bm.pp()
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            boolean r2 = r0.rg(r1, r2)
            return r2
    }

    private static com.ss.android.downloadlib.utils.rz.rg q(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.util.Map<java.lang.String, com.ss.android.downloadlib.utils.rz$rg> r0 = com.ss.android.downloadlib.utils.rz.rg
            java.lang.Object r1 = r0.remove(r1)
            com.ss.android.downloadlib.utils.rz$rg r1 = (com.ss.android.downloadlib.utils.rz.rg) r1
            return r1
    }

    public static void rg(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            com.ss.android.downloadlib.utils.rz$rg r1 = q(r1)
            if (r1 != 0) goto Le
            return
        Le:
            r1.rg()
            return
    }

    private static void rg(java.lang.String r1, com.ss.android.downloadlib.utils.rz.rg r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Le
            if (r2 != 0) goto L9
            goto Le
        L9:
            java.util.Map<java.lang.String, com.ss.android.downloadlib.utils.rz$rg> r0 = com.ss.android.downloadlib.utils.rz.rg
            r0.put(r1, r2)
        Le:
            return
    }

    public static void rg(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            com.ss.android.downloadlib.utils.rz$rg r1 = q(r1)
            if (r1 != 0) goto Le
            return
        Le:
            r1.rg(r2)
            return
    }

    public static void rg(java.lang.String[] r2, com.ss.android.downloadlib.utils.rz.rg r3) {
            if (r2 == 0) goto L14
            int r0 = r2.length
            if (r0 > 0) goto L6
            goto L14
        L6:
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            rg(r0, r3)
            com.ss.android.downloadlib.activity.TTDelegateActivity.rg(r0, r2)
        L14:
            return
    }
}
