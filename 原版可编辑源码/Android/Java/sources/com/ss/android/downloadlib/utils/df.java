package com.ss.android.downloadlib.utils;

import android.os.AsyncTask;

public class df {
    static final rg rg = new df();

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

    private static class df extends rg {
        private df() {
            super();
        }

        @Override
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
