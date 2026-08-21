package com.ss.android.socialbase.downloader.depend;

public abstract class AbsDownloadExtListener extends com.ss.android.socialbase.downloader.depend.AbsDownloadListener implements com.ss.android.socialbase.downloader.depend.IDownloadExtListener {
    private static final java.lang.String TAG = null;

    static {
            java.lang.Class<com.ss.android.socialbase.downloader.depend.AbsDownloadExtListener> r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadExtListener.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.depend.AbsDownloadExtListener.TAG = r0
            return
    }

    public AbsDownloadExtListener() {
            r0 = this;
            r0.<init>()
            return
    }

    public void onWaitingDownloadCompleteHandler(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L22
            if (r4 == 0) goto L22
            java.lang.String r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadExtListener.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " onWaitingDownloadCompleteHandler -- "
            r1.append(r2)
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
        L22:
            return
    }
}
