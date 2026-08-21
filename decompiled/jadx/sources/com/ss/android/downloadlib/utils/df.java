package com.ss.android.downloadlib.utils;

import android.os.AsyncTask;

/* JADX INFO: loaded from: classes3.dex */
public class df {
    static final rg rg = new C0355df();

    private static class rg {
        private rg() {
        }

        public <T> void rg(AsyncTask<T, ?, ?> asyncTask, T... tArr) {
            try {
                asyncTask.execute(tArr);
            } catch (Throwable unused) {
            }
        }
    }

    /* JADX INFO: renamed from: com.ss.android.downloadlib.utils.df$df, reason: collision with other inner class name */
    private static class C0355df extends rg {
        private C0355df() {
            super();
        }

        @Override // com.ss.android.downloadlib.utils.df.rg
        public <T> void rg(AsyncTask<T, ?, ?> asyncTask, T... tArr) {
            try {
                asyncTask.executeOnExecutor(AsyncTask.THREAD_POOL_EXECUTOR, tArr);
            } catch (Throwable unused) {
            }
        }
    }

    public static <T> void rg(AsyncTask<T, ?, ?> asyncTask, T... tArr) {
        rg.rg(asyncTask, tArr);
    }
}
