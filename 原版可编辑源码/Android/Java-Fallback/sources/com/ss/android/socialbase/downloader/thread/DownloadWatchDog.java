package com.ss.android.socialbase.downloader.thread;

public final class DownloadWatchDog implements android.os.Handler.Callback {
    private static final int MSG_SCHEDULE_WATCH = 0;
    private volatile android.os.Handler handler;

    private static class Holder {
        private static final android.os.Looper LOOPER = null;

        static {
                android.os.HandlerThread r0 = new android.os.HandlerThread
                java.lang.String r1 = "DownloadWatchDog"
                r0.<init>(r1)
                r0.start()
                android.os.Looper r0 = r0.getLooper()
                com.ss.android.socialbase.downloader.thread.DownloadWatchDog.Holder.LOOPER = r0
                return
        }

        private Holder() {
                r0 = this;
                r0.<init>()
                return
        }

        static android.os.Looper access$000() {
                android.os.Looper r0 = com.ss.android.socialbase.downloader.thread.DownloadWatchDog.Holder.LOOPER
                return r0
        }
    }

    public interface IWatcher {
        long onScheduleWatch();
    }

    public DownloadWatchDog() {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = com.ss.android.socialbase.downloader.thread.DownloadWatchDog.Holder.access$000()
            r0.<init>(r1, r2)
            r2.handler = r0
            return
    }

    public static android.os.Looper getThreadLooper() {
            android.os.Looper r0 = com.ss.android.socialbase.downloader.thread.DownloadWatchDog.Holder.access$000()
            return r0
    }

    public void addWatcher(com.ss.android.socialbase.downloader.thread.DownloadWatchDog.IWatcher r4, long r5) {
            r3 = this;
            android.os.Handler r0 = r3.handler
            if (r0 != 0) goto L5
            return
        L5:
            android.os.Message r1 = android.os.Message.obtain()
            r2 = 0
            r1.what = r2
            r1.obj = r4
            r0.sendMessageDelayed(r1, r5)
            return
    }

    @Override
    public boolean handleMessage(android.os.Message r5) {
            r4 = this;
            int r0 = r5.what
            if (r0 == 0) goto L5
            goto L1b
        L5:
            java.lang.Object r5 = r5.obj     // Catch: java.lang.Throwable -> L17
            com.ss.android.socialbase.downloader.thread.DownloadWatchDog$IWatcher r5 = (com.ss.android.socialbase.downloader.thread.DownloadWatchDog.IWatcher) r5     // Catch: java.lang.Throwable -> L17
            long r0 = r5.onScheduleWatch()     // Catch: java.lang.Throwable -> L17
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L1b
            r4.addWatcher(r5, r0)     // Catch: java.lang.Throwable -> L17
            goto L1b
        L17:
            r5 = move-exception
            r5.printStackTrace()
        L1b:
            r5 = 1
            return r5
    }

    public void release() {
            r2 = this;
            android.os.Handler r0 = r2.handler
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 0
            r2.handler = r1
            r0.removeCallbacksAndMessages(r1)
            return
    }

    public void removeWatcher(com.ss.android.socialbase.downloader.thread.DownloadWatchDog.IWatcher r3) {
            r2 = this;
            android.os.Handler r0 = r2.handler
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 0
            r0.removeMessages(r1, r3)
            return
    }
}
