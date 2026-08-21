package com.ss.android.socialbase.downloader.thread;

public class WeakDownloadHandler extends android.os.Handler {
    private final java.lang.ref.WeakReference<com.ss.android.socialbase.downloader.thread.WeakDownloadHandler.IHandler> mRef;

    public interface IHandler {
        void handleMsg(android.os.Message r1);
    }

    public WeakDownloadHandler(android.os.Looper r1, com.ss.android.socialbase.downloader.thread.WeakDownloadHandler.IHandler r2) {
            r0 = this;
            r0.<init>(r1)
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r2)
            r0.mRef = r1
            return
    }

    public WeakDownloadHandler(com.ss.android.socialbase.downloader.thread.WeakDownloadHandler.IHandler r2) {
            r1 = this;
            r1.<init>()
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.mRef = r0
            return
    }

    @Override
    public void handleMessage(android.os.Message r2) {
            r1 = this;
            java.lang.ref.WeakReference<com.ss.android.socialbase.downloader.thread.WeakDownloadHandler$IHandler> r0 = r1.mRef
            java.lang.Object r0 = r0.get()
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler$IHandler r0 = (com.ss.android.socialbase.downloader.thread.WeakDownloadHandler.IHandler) r0
            if (r0 == 0) goto Lf
            if (r2 == 0) goto Lf
            r0.handleMsg(r2)
        Lf:
            return
    }
}
