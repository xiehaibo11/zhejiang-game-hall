package com.ss.android.downloadlib.utils;

public class df {
    static final com.ss.android.downloadlib.utils.df.rg rg = null;

    static class 1 {
    }

    private static class df extends com.ss.android.downloadlib.utils.df.rg {
        private df() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        df(com.ss.android.downloadlib.utils.df.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public <T> void rg(android.os.AsyncTask<T, ?, ?> r2, T... r3) {
                r1 = this;
                java.util.concurrent.Executor r0 = android.os.AsyncTask.THREAD_POOL_EXECUTOR     // Catch: java.lang.Throwable -> L5
                r2.executeOnExecutor(r0, r3)     // Catch: java.lang.Throwable -> L5
            L5:
                return
        }
    }

    private static class rg {
        private rg() {
                r0 = this;
                r0.<init>()
                return
        }

        rg(com.ss.android.downloadlib.utils.df.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public <T> void rg(android.os.AsyncTask<T, ?, ?> r1, T... r2) {
                r0 = this;
                r1.execute(r2)     // Catch: java.lang.Throwable -> L3
            L3:
                return
        }
    }

    static {
            com.ss.android.downloadlib.utils.df$df r0 = new com.ss.android.downloadlib.utils.df$df
            r1 = 0
            r0.<init>(r1)
            com.ss.android.downloadlib.utils.df.rg = r0
            return
    }

    public static <T> void rg(android.os.AsyncTask<T, ?, ?> r1, T... r2) {
            com.ss.android.downloadlib.utils.df$rg r0 = com.ss.android.downloadlib.utils.df.rg
            r0.rg(r1, r2)
            return
    }
}
