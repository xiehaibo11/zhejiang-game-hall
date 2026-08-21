package com.ss.android.downloadlib.exception;

public class df {


    public interface rg<T> {
        T df();
    }

    public static <T> T rg(com.ss.android.downloadlib.exception.df.rg<T> r2) {
            r0 = 1
            r1 = 0
            java.lang.Object r2 = rg(r0, r1, r2)
            return r2
    }

    public static <T> T rg(boolean r1, java.lang.String r2, com.ss.android.downloadlib.exception.df.rg<T> r3) {
            java.lang.Object r1 = r3.df()     // Catch: java.lang.Throwable -> L5
            return r1
        L5:
            r3 = move-exception
            boolean r0 = r3 instanceof com.ss.android.downloadlib.exception.rg
            if (r0 != 0) goto L1a
            com.ss.android.downloadlib.exception.q r0 = com.ss.android.downloadlib.exception.q.rg()
            r0.rg(r1, r3, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L19
            r1 = 0
            return r1
        L19:
            throw r3
        L1a:
            throw r3
    }

    public static void rg(java.lang.Runnable r1) {
            com.ss.android.downloadlib.exception.df$1 r0 = new com.ss.android.downloadlib.exception.df$1
            r0.<init>(r1)
            rg(r0)
            return
    }
}
