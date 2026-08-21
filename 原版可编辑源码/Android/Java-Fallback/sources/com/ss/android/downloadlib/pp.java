package com.ss.android.downloadlib;

class pp implements com.ss.android.download.api.rg {




    pp() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.download.api.config.bm r1) {
            r0 = this;
            com.ss.android.downloadlib.addownload.bm.rg(r1)
            return r0
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.download.api.config.df r3) {
            r2 = this;
            com.ss.android.downloadlib.addownload.bm.rg(r3)
            com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            com.ss.android.downloadlib.pp$1 r1 = new com.ss.android.downloadlib.pp$1
            r1.<init>(r2, r3)
            r0.setInnerAppStatusChangeCaller(r1)
            return r2
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.download.api.config.fw r1) {
            r0 = this;
            com.ss.android.downloadlib.addownload.bm.rg(r1)
            return r0
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.download.api.config.hq r1) {
            r0 = this;
            com.ss.android.downloadlib.addownload.bm.rg(r1)
            return r0
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.download.api.config.rz r1) {
            r0 = this;
            com.ss.android.downloadlib.addownload.bm.rg(r1)
            return r0
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.download.api.config.ux r1) {
            r0 = this;
            com.ss.android.downloadlib.addownload.bm.rg(r1)
            return r0
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.download.api.config.z r1) {
            r0 = this;
            com.ss.android.downloadlib.addownload.bm.rg(r1)
            return r0
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.download.api.model.rg r1) {
            r0 = this;
            com.ss.android.downloadlib.addownload.bm.rg(r1)
            return r0
    }

    @Override
    public com.ss.android.download.api.rg rg(com.ss.android.socialbase.downloader.downloader.DownloaderBuilder r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r0 = r2.getNotificationClickCallback()
            if (r0 != 0) goto Le
            com.ss.android.downloadlib.pp$2 r0 = new com.ss.android.downloadlib.pp$2
            r0.<init>(r1)
            r2.notificationClickCallback(r0)
        Le:
            com.ss.android.downloadlib.q.q r0 = new com.ss.android.downloadlib.q.q
            r0.<init>()
            r2.addDownloadCompleteHandler(r0)
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.Downloader.initOrCover(r2, r0)
            return r1
    }

    @Override
    public com.ss.android.download.api.rg rg(java.lang.String r1) {
            r0 = this;
            com.ss.android.downloadlib.addownload.bm.rg(r1)
            return r0
    }

    @Override
    public void rg() {
            r2 = this;
            boolean r0 = com.ss.android.downloadlib.addownload.bm.y()
            if (r0 != 0) goto Lf
            com.ss.android.downloadlib.exception.q r0 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r1 = "ttdownloader init error"
            r0.rg(r1)
        Lf:
            com.ss.android.downloadlib.exception.q r0 = com.ss.android.downloadlib.exception.q.rg()
            com.ss.android.downloadlib.addownload.bm.rg(r0)
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = com.ss.android.downloadlib.addownload.bm.ou()     // Catch: java.lang.Exception -> L22
            r0.df(r1)     // Catch: java.lang.Exception -> L22
            goto L26
        L22:
            r0 = move-exception
            r0.printStackTrace()
        L26:
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.downloadlib.rg r1 = com.ss.android.downloadlib.rg.rg()
            r0.rg(r1)
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.pp$3 r1 = new com.ss.android.downloadlib.pp$3
            r1.<init>(r2)
            r0.df(r1)
            return
    }
}
