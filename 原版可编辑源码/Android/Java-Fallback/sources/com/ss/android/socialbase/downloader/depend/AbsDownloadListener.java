package com.ss.android.socialbase.downloader.depend;

public abstract class AbsDownloadListener implements com.ss.android.socialbase.downloader.depend.IDownloadListener {
    private static final java.lang.String TAG = null;

    static {
            java.lang.Class<com.ss.android.socialbase.downloader.depend.AbsDownloadListener> r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG = r0
            return
    }

    public AbsDownloadListener() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onCanceled(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L22
            if (r4 == 0) goto L22
            java.lang.String r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " onCanceled -- "
            r1.append(r2)
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
        L22:
            return
    }

    @Override
    public void onFailed(com.ss.android.socialbase.downloader.model.DownloadInfo r4, com.ss.android.socialbase.downloader.exception.BaseException r5) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L29
            if (r4 == 0) goto L29
            java.lang.String r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r4 = r4.getName()
            r1[r2] = r4
            r4 = 1
            if (r5 == 0) goto L1c
            java.lang.String r5 = r5.getErrorMessage()
            goto L1e
        L1c:
            java.lang.String r5 = "unkown"
        L1e:
            r1[r4] = r5
            java.lang.String r4 = "onFailed on %s because of : %s"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
        L29:
            return
    }

    @Override
    public void onFirstStart(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L22
            if (r4 == 0) goto L22
            java.lang.String r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " onFirstStart -- "
            r1.append(r2)
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
        L22:
            return
    }

    @Override
    public void onFirstSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L22
            if (r4 == 0) goto L22
            java.lang.String r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " onFirstSuccess -- "
            r1.append(r2)
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
        L22:
            return
    }

    public void onIntercept(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L22
            if (r4 == 0) goto L22
            java.lang.String r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " onIntercept -- "
            r1.append(r2)
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
        L22:
            return
    }

    @Override
    public void onPause(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L22
            if (r4 == 0) goto L22
            java.lang.String r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " onPause -- "
            r1.append(r2)
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
        L22:
            return
    }

    @Override
    public void onPrepare(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L22
            if (r4 == 0) goto L22
            java.lang.String r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " onPrepare -- "
            r1.append(r2)
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
        L22:
            return
    }

    @Override
    public void onProgress(com.ss.android.socialbase.downloader.model.DownloadInfo r5) {
            r4 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L3c
            if (r5 == 0) goto L3c
            long r0 = r5.getTotalBytes()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L3c
            long r0 = r5.getCurBytes()
            float r0 = (float) r0
            long r1 = r5.getTotalBytes()
            float r1 = (float) r1
            float r0 = r0 / r1
            r1 = 1120403456(0x42c80000, float:100.0)
            float r0 = r0 * r1
            java.lang.String r1 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.String r5 = r5.getName()
            r2[r3] = r5
            r5 = 1
            java.lang.Float r0 = java.lang.Float.valueOf(r0)
            r2[r5] = r0
            java.lang.String r5 = "onProgress %s %.2f%%"
            java.lang.String r5 = java.lang.String.format(r5, r2)
            com.ss.android.socialbase.downloader.logger.Logger.d(r1, r5)
        L3c:
            return
    }

    @Override
    public void onRetry(com.ss.android.socialbase.downloader.model.DownloadInfo r4, com.ss.android.socialbase.downloader.exception.BaseException r5) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L29
            if (r4 == 0) goto L29
            java.lang.String r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r4 = r4.getName()
            r1[r2] = r4
            r4 = 1
            if (r5 == 0) goto L1c
            java.lang.String r5 = r5.getErrorMessage()
            goto L1e
        L1c:
            java.lang.String r5 = "unkown"
        L1e:
            r1[r4] = r5
            java.lang.String r4 = "onRetry on %s because of : %s"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
        L29:
            return
    }

    @Override
    public void onRetryDelay(com.ss.android.socialbase.downloader.model.DownloadInfo r4, com.ss.android.socialbase.downloader.exception.BaseException r5) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L29
            if (r4 == 0) goto L29
            java.lang.String r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r4 = r4.getName()
            r1[r2] = r4
            r4 = 1
            if (r5 == 0) goto L1c
            java.lang.String r5 = r5.getErrorMessage()
            goto L1e
        L1c:
            java.lang.String r5 = "unkown"
        L1e:
            r1[r4] = r5
            java.lang.String r4 = "onRetryDelay on %s because of : %s"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
        L29:
            return
    }

    @Override
    public void onStart(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L22
            if (r4 == 0) goto L22
            java.lang.String r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " onStart -- "
            r1.append(r2)
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
        L22:
            return
    }

    @Override
    public void onSuccessed(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r0 == 0) goto L2e
            if (r4 == 0) goto L2e
            java.lang.String r0 = com.ss.android.socialbase.downloader.depend.AbsDownloadListener.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " onSuccessed -- "
            r1.append(r2)
            java.lang.String r2 = r4.getName()
            r1.append(r2)
            java.lang.String r2 = " "
            r1.append(r2)
            boolean r4 = r4.isSuccessByCache()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r4)
        L2e:
            return
    }
}
