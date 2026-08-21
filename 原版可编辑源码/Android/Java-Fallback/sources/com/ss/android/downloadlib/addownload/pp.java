package com.ss.android.downloadlib.addownload;

public class pp implements com.ss.android.downloadlib.addownload.c, com.ss.android.downloadlib.utils.hq.rg {
    private static final java.lang.String rg = null;
    private boolean b;
    private final com.ss.android.socialbase.downloader.depend.IDownloadListener bm;
    private final java.util.Map<java.lang.Integer, java.lang.Object> c;
    private final com.ss.android.downloadlib.utils.hq df;
    private com.ss.android.download.api.download.DownloadModel f;
    private com.ss.android.download.api.model.DownloadShortInfo fw;
    private long hq;
    private java.lang.ref.SoftReference<com.ss.android.download.api.config.IDownloadButtonClickListener> n;
    private long oh;
    private java.lang.ref.WeakReference<android.content.Context> pp;
    private com.ss.android.downloadlib.addownload.pt pt;
    private com.ss.android.downloadlib.addownload.fw q;
    private final boolean qx;
    private boolean r;
    private com.ss.android.downloadlib.addownload.pp.q rz;
    private com.ss.android.download.api.download.DownloadController un;
    private com.ss.android.socialbase.downloader.model.DownloadInfo ux;
    private com.ss.android.download.api.download.DownloadEventConfig v;
    private java.lang.ref.SoftReference<com.ss.android.download.api.config.OnItemClickListener> z;






    interface df {
        void rg(long r1);
    }

    private class q extends android.os.AsyncTask<java.lang.String, java.lang.Void, com.ss.android.socialbase.downloader.model.DownloadInfo> {
        final com.ss.android.downloadlib.addownload.pp rg;

        private q(com.ss.android.downloadlib.addownload.pp r1) {
                r0 = this;
                r0.rg = r1
                r0.<init>()
                return
        }

        q(com.ss.android.downloadlib.addownload.pp r1, com.ss.android.downloadlib.addownload.pp.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        protected com.ss.android.socialbase.downloader.model.DownloadInfo doInBackground(java.lang.String[] r1) {
                r0 = this;
                java.lang.String[] r1 = (java.lang.String[]) r1
                com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r0.rg(r1)
                return r1
        }

        @Override
        protected void onPostExecute(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
                r0 = this;
                com.ss.android.socialbase.downloader.model.DownloadInfo r1 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r1
                r0.rg(r1)
                return
        }

        protected com.ss.android.socialbase.downloader.model.DownloadInfo rg(java.lang.String... r5) {
                r4 = this;
                r0 = 0
                if (r5 == 0) goto L4f
                int r1 = r5.length
                r2 = 1
                r3 = 0
                if (r1 < r2) goto L11
                r1 = r5[r3]
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 == 0) goto L11
                goto L4f
            L11:
                r5 = r5[r3]
                com.ss.android.downloadlib.addownload.pp r1 = r4.rg
                com.ss.android.download.api.download.DownloadModel r1 = com.ss.android.downloadlib.addownload.pp.c(r1)
                if (r1 == 0) goto L41
                com.ss.android.downloadlib.addownload.pp r1 = r4.rg
                com.ss.android.download.api.download.DownloadModel r1 = com.ss.android.downloadlib.addownload.pp.c(r1)
                java.lang.String r1 = r1.getFilePath()
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto L41
                android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
                com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
                com.ss.android.downloadlib.addownload.pp r1 = r4.rg
                com.ss.android.download.api.download.DownloadModel r1 = com.ss.android.downloadlib.addownload.pp.c(r1)
                java.lang.String r1 = r1.getFilePath()
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r5, r1)
            L41:
                if (r0 != 0) goto L4f
                com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
                android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.rg(r1, r5)
            L4f:
                return r0
        }

        protected void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r6) {
                r5 = this;
                super.onPostExecute(r6)
                boolean r0 = r5.isCancelled()
                if (r0 != 0) goto L1fa
                com.ss.android.downloadlib.addownload.pp r0 = r5.rg
                com.ss.android.download.api.download.DownloadModel r0 = com.ss.android.downloadlib.addownload.pp.c(r0)
                if (r0 != 0) goto L13
                goto L1fa
            L13:
                com.ss.android.downloadlib.addownload.pp r0 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.download.api.download.DownloadModel r0 = com.ss.android.downloadlib.addownload.pp.c(r0)     // Catch: java.lang.Exception -> L1f6
                java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r1 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.download.api.download.DownloadModel r1 = com.ss.android.downloadlib.addownload.pp.c(r1)     // Catch: java.lang.Exception -> L1f6
                int r1 = r1.getVersionCode()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r2 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.download.api.download.DownloadModel r2 = com.ss.android.downloadlib.addownload.pp.c(r2)     // Catch: java.lang.Exception -> L1f6
                java.lang.String r2 = r2.getVersionName()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.model.q r0 = com.ss.android.downloadlib.utils.b.rg(r0, r1, r2)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.model.fw r1 = com.ss.android.downloadlib.addownload.model.fw.rg()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r2 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.download.api.download.DownloadModel r2 = com.ss.android.downloadlib.addownload.pp.c(r2)     // Catch: java.lang.Exception -> L1f6
                int r2 = r2.getVersionCode()     // Catch: java.lang.Exception -> L1f6
                int r3 = r0.df()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.model.c r4 = com.ss.android.downloadlib.addownload.model.c.rg()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadad.api.rg.df r4 = r4.rg(r6)     // Catch: java.lang.Exception -> L1f6
                r1.rg(r2, r3, r4)     // Catch: java.lang.Exception -> L1f6
                boolean r0 = r0.rg()     // Catch: java.lang.Exception -> L1f6
                r1 = 0
                r2 = 0
                if (r6 == 0) goto Lff
                int r3 = r6.getId()     // Catch: java.lang.Exception -> L1f6
                if (r3 == 0) goto Lff
                if (r0 != 0) goto L70
                android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.downloader.Downloader r3 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r3)     // Catch: java.lang.Exception -> L1f6
                boolean r3 = r3.isDownloadSuccessAndFileNotExist(r6)     // Catch: java.lang.Exception -> L1f6
                if (r3 != 0) goto Lff
            L70:
                android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)     // Catch: java.lang.Exception -> L1f6
                int r3 = r6.getId()     // Catch: java.lang.Exception -> L1f6
                r0.removeTaskMainListener(r3)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r0 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = com.ss.android.downloadlib.addownload.pp.pt(r0)     // Catch: java.lang.Exception -> L1f6
                if (r0 == 0) goto L9a
                com.ss.android.downloadlib.addownload.pp r0 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = com.ss.android.downloadlib.addownload.pp.pt(r0)     // Catch: java.lang.Exception -> L1f6
                int r0 = r0.getStatus()     // Catch: java.lang.Exception -> L1f6
                r3 = -4
                if (r0 != r3) goto L9a
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp.rg(r6, r2)     // Catch: java.lang.Exception -> L1f6
                goto Lde
            L9a:
                com.ss.android.downloadlib.addownload.pp r0 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp.rg(r0, r6)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                boolean r6 = com.ss.android.downloadlib.addownload.pp.fw(r6)     // Catch: java.lang.Exception -> L1f6
                if (r6 == 0) goto Lc3
                android.content.Context r6 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.downloader.Downloader r6 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r6)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r0 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = com.ss.android.downloadlib.addownload.pp.pt(r0)     // Catch: java.lang.Exception -> L1f6
                int r0 = r0.getId()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r2 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.depend.IDownloadListener r2 = com.ss.android.downloadlib.addownload.pp.ux(r2)     // Catch: java.lang.Exception -> L1f6
                r6.setMainThreadListener(r0, r2, r1)     // Catch: java.lang.Exception -> L1f6
                goto Lde
            Lc3:
                android.content.Context r6 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.downloader.Downloader r6 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r6)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r0 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = com.ss.android.downloadlib.addownload.pp.pt(r0)     // Catch: java.lang.Exception -> L1f6
                int r0 = r0.getId()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r1 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.depend.IDownloadListener r1 = com.ss.android.downloadlib.addownload.pp.ux(r1)     // Catch: java.lang.Exception -> L1f6
                r6.setMainThreadListener(r0, r1)     // Catch: java.lang.Exception -> L1f6
            Lde:
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.fw r6 = com.ss.android.downloadlib.addownload.pp.pp(r6)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r0 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = com.ss.android.downloadlib.addownload.pp.pt(r0)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r1 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.download.api.model.DownloadShortInfo r1 = com.ss.android.downloadlib.addownload.pp.df(r1)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r2 = r5.rg     // Catch: java.lang.Exception -> L1f6
                java.util.Map r2 = com.ss.android.downloadlib.addownload.pp.rg(r2)     // Catch: java.lang.Exception -> L1f6
                java.util.List r2 = com.ss.android.downloadlib.addownload.fw.rg(r2)     // Catch: java.lang.Exception -> L1f6
                r6.rg(r0, r1, r2)     // Catch: java.lang.Exception -> L1f6
                goto L1e6
            Lff:
                if (r6 == 0) goto L11f
                android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.downloader.Downloader r3 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r3)     // Catch: java.lang.Exception -> L1f6
                boolean r3 = r3.isDownloadSuccessAndFileNotExist(r6)     // Catch: java.lang.Exception -> L1f6
                if (r3 == 0) goto L11f
                com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r3 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()     // Catch: java.lang.Exception -> L1f6
                int r6 = r6.getId()     // Catch: java.lang.Exception -> L1f6
                r3.cancelNotification(r6)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp.rg(r6, r2)     // Catch: java.lang.Exception -> L1f6
            L11f:
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r6 = com.ss.android.downloadlib.addownload.pp.pt(r6)     // Catch: java.lang.Exception -> L1f6
                if (r6 == 0) goto L17f
                android.content.Context r6 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.downloader.Downloader r6 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r6)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r3 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r3 = com.ss.android.downloadlib.addownload.pp.pt(r3)     // Catch: java.lang.Exception -> L1f6
                int r3 = r3.getId()     // Catch: java.lang.Exception -> L1f6
                r6.removeTaskMainListener(r3)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                boolean r6 = com.ss.android.downloadlib.addownload.pp.fw(r6)     // Catch: java.lang.Exception -> L1f6
                if (r6 == 0) goto L162
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                android.content.Context r6 = com.ss.android.downloadlib.addownload.pp.rz(r6)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.downloader.Downloader r6 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r6)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r3 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r3 = com.ss.android.downloadlib.addownload.pp.pt(r3)     // Catch: java.lang.Exception -> L1f6
                int r3 = r3.getId()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r4 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.depend.IDownloadListener r4 = com.ss.android.downloadlib.addownload.pp.ux(r4)     // Catch: java.lang.Exception -> L1f6
                r6.setMainThreadListener(r3, r4, r1)     // Catch: java.lang.Exception -> L1f6
                goto L17f
            L162:
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                android.content.Context r6 = com.ss.android.downloadlib.addownload.pp.rz(r6)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.downloader.Downloader r6 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r6)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r1 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r1 = com.ss.android.downloadlib.addownload.pp.pt(r1)     // Catch: java.lang.Exception -> L1f6
                int r1 = r1.getId()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r3 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.depend.IDownloadListener r3 = com.ss.android.downloadlib.addownload.pp.ux(r3)     // Catch: java.lang.Exception -> L1f6
                r6.setMainThreadListener(r1, r3)     // Catch: java.lang.Exception -> L1f6
            L17f:
                if (r0 == 0) goto L1c3
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r0 = new com.ss.android.socialbase.downloader.model.DownloadInfo$Builder     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r1 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.download.api.download.DownloadModel r1 = com.ss.android.downloadlib.addownload.pp.c(r1)     // Catch: java.lang.Exception -> L1f6
                java.lang.String r1 = r1.getDownloadUrl()     // Catch: java.lang.Exception -> L1f6
                r0.<init>(r1)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.build()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp.rg(r6, r0)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r6 = com.ss.android.downloadlib.addownload.pp.pt(r6)     // Catch: java.lang.Exception -> L1f6
                r0 = -3
                r6.setStatus(r0)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.fw r6 = com.ss.android.downloadlib.addownload.pp.pp(r6)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r0 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = com.ss.android.downloadlib.addownload.pp.pt(r0)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r1 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.download.api.model.DownloadShortInfo r1 = com.ss.android.downloadlib.addownload.pp.df(r1)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r2 = r5.rg     // Catch: java.lang.Exception -> L1f6
                java.util.Map r2 = com.ss.android.downloadlib.addownload.pp.rg(r2)     // Catch: java.lang.Exception -> L1f6
                java.util.List r2 = com.ss.android.downloadlib.addownload.fw.rg(r2)     // Catch: java.lang.Exception -> L1f6
                r6.rg(r0, r1, r2)     // Catch: java.lang.Exception -> L1f6
                goto L1e6
            L1c3:
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                java.util.Map r6 = com.ss.android.downloadlib.addownload.pp.rg(r6)     // Catch: java.lang.Exception -> L1f6
                java.util.List r6 = com.ss.android.downloadlib.addownload.fw.rg(r6)     // Catch: java.lang.Exception -> L1f6
                java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Exception -> L1f6
            L1d1:
                boolean r0 = r6.hasNext()     // Catch: java.lang.Exception -> L1f6
                if (r0 == 0) goto L1e1
                java.lang.Object r0 = r6.next()     // Catch: java.lang.Exception -> L1f6
                com.ss.android.download.api.download.DownloadStatusChangeListener r0 = (com.ss.android.download.api.download.DownloadStatusChangeListener) r0     // Catch: java.lang.Exception -> L1f6
                r0.onIdle()     // Catch: java.lang.Exception -> L1f6
                goto L1d1
            L1e1:
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp.rg(r6, r2)     // Catch: java.lang.Exception -> L1f6
            L1e6:
                com.ss.android.downloadlib.addownload.pp r6 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.fw r6 = com.ss.android.downloadlib.addownload.pp.pp(r6)     // Catch: java.lang.Exception -> L1f6
                com.ss.android.downloadlib.addownload.pp r0 = r5.rg     // Catch: java.lang.Exception -> L1f6
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = com.ss.android.downloadlib.addownload.pp.pt(r0)     // Catch: java.lang.Exception -> L1f6
                r6.q(r0)     // Catch: java.lang.Exception -> L1f6
                goto L1fa
            L1f6:
                r6 = move-exception
                r6.printStackTrace()
            L1fa:
                return
        }
    }

    interface rg {
        void rg();
    }

    static {
            java.lang.Class<com.ss.android.downloadlib.addownload.pp> r0 = com.ss.android.downloadlib.addownload.pp.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.downloadlib.addownload.pp.rg = r0
            return
    }

    public pp() {
            r2 = this;
            r2.<init>()
            com.ss.android.downloadlib.utils.hq r0 = new com.ss.android.downloadlib.utils.hq
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1, r2)
            r2.df = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.c = r0
            com.ss.android.downloadlib.addownload.fw$rg r0 = new com.ss.android.downloadlib.addownload.fw$rg
            com.ss.android.downloadlib.utils.hq r1 = r2.df
            r0.<init>(r1)
            r2.bm = r0
            r0 = -1
            r2.oh = r0
            r0 = 0
            r2.f = r0
            r2.v = r0
            r2.un = r0
            com.ss.android.downloadlib.addownload.fw r0 = new com.ss.android.downloadlib.addownload.fw
            r0.<init>(r2)
            r2.q = r0
            com.ss.android.downloadlib.addownload.pt r0 = new com.ss.android.downloadlib.addownload.pt
            com.ss.android.downloadlib.utils.hq r1 = r2.df
            r0.<init>(r1)
            r2.pt = r0
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r1 = "ttdownloader_callback_twice"
            boolean r0 = r0.optBugFix(r1)
            r2.qx = r0
            return
    }

    private void b() {
            r5 = this;
            java.lang.ref.SoftReference<com.ss.android.download.api.config.OnItemClickListener> r0 = r5.z
            if (r0 == 0) goto L23
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L23
            java.lang.ref.SoftReference<com.ss.android.download.api.config.OnItemClickListener> r0 = r5.z
            java.lang.Object r0 = r0.get()
            com.ss.android.download.api.config.OnItemClickListener r0 = (com.ss.android.download.api.config.OnItemClickListener) r0
            com.ss.android.download.api.download.DownloadModel r1 = r5.f
            com.ss.android.download.api.download.DownloadEventConfig r2 = r5.hq()
            com.ss.android.download.api.download.DownloadController r3 = r5.oh()
            r0.onItemClick(r1, r2, r3)
            r0 = 0
            r5.z = r0
            goto L38
        L23:
            com.ss.android.download.api.config.q r0 = com.ss.android.downloadlib.addownload.bm.df()
            android.content.Context r1 = r5.getContext()
            com.ss.android.download.api.download.DownloadModel r2 = r5.f
            com.ss.android.download.api.download.DownloadController r3 = r5.oh()
            com.ss.android.download.api.download.DownloadEventConfig r4 = r5.hq()
            r0.rg(r1, r2, r3, r4)
        L38:
            return
    }

    static java.lang.String bm() {
            java.lang.String r0 = com.ss.android.downloadlib.addownload.pp.rg
            return r0
    }

    static com.ss.android.download.api.download.DownloadModel c(com.ss.android.downloadlib.addownload.pp r0) {
            com.ss.android.download.api.download.DownloadModel r0 = r0.f
            return r0
    }

    private void c(boolean r12) {
            r11 = this;
            java.lang.String r0 = com.ss.android.downloadlib.addownload.pp.rg
            r1 = 0
            java.lang.String r2 = "pBCD"
            com.ss.android.downloadlib.utils.bm.rg(r0, r2, r1)
            boolean r0 = r11.v()
            r2 = 0
            r3 = 1
            if (r0 == 0) goto L74
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r4 = r11.oh
            com.ss.android.downloadlib.addownload.model.pp r0 = r0.pp(r4)
            boolean r1 = r11.r
            if (r1 == 0) goto L40
            boolean r1 = r11.rz()
            if (r1 == 0) goto L3b
            boolean r1 = r11.pt(r2)
            if (r1 == 0) goto L14d
            com.ss.android.download.api.download.DownloadController r1 = r0.pt
            if (r1 == 0) goto L14d
            com.ss.android.download.api.download.DownloadController r0 = r0.pt
            boolean r0 = r0.isAutoDownloadOnCardShow()
            if (r0 == 0) goto L14d
            r11.rg(r12, r3)
            goto L14d
        L3b:
            r11.rg(r12, r3)
            goto L14d
        L40:
            com.ss.android.download.api.download.DownloadModel r1 = r11.f
            boolean r1 = r1.isAd()
            if (r1 == 0) goto L6f
            com.ss.android.download.api.download.DownloadController r1 = r0.pt
            if (r1 == 0) goto L6f
            com.ss.android.download.api.download.DownloadController r1 = r0.pt
            boolean r1 = r1.enableShowComplianceDialog()
            if (r1 == 0) goto L6f
            com.ss.android.download.api.download.DownloadModel r1 = r0.df
            if (r1 == 0) goto L6f
            com.ss.android.downloadlib.addownload.compliance.df r1 = com.ss.android.downloadlib.addownload.compliance.df.rg()
            com.ss.android.download.api.download.DownloadModel r2 = r0.df
            boolean r1 = r1.rg(r2)
            if (r1 == 0) goto L6f
            com.ss.android.downloadlib.addownload.compliance.df r1 = com.ss.android.downloadlib.addownload.compliance.df.rg()
            boolean r0 = r1.rg(r0)
            if (r0 == 0) goto L6f
            return
        L6f:
            r11.rg(r12, r3)
            goto L14d
        L74:
            java.lang.String r0 = com.ss.android.downloadlib.addownload.pp.rg
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "pBCD continue download, status:"
            r4.append(r5)
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r11.ux
            int r5 = r5.getStatus()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.ss.android.downloadlib.utils.bm.rg(r0, r4, r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r11.ux
            if (r0 == 0) goto L9f
            com.ss.android.download.api.download.DownloadModel r1 = r11.f
            if (r1 == 0) goto L9f
            boolean r1 = r1.isNeedWifi()
            r0.setOnlyWifi(r1)
        L9f:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r11.ux
            int r0 = r0.getStatus()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r11.ux
            int r1 = r1.getId()
            com.ss.android.downloadlib.addownload.model.c r4 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r11.ux
            com.ss.android.downloadad.api.rg.df r10 = r4.rg(r5)
            r4 = -2
            if (r0 == r4) goto L101
            r4 = -1
            if (r0 != r4) goto Lbc
            goto L101
        Lbc:
            boolean r2 = com.ss.android.downloadlib.addownload.hq.rg(r0)
            if (r2 == 0) goto Lf4
            com.ss.android.download.api.download.DownloadModel r2 = r11.f
            boolean r2 = r2.enablePause()
            if (r2 != 0) goto Lcb
            return
        Lcb:
            com.ss.android.downloadlib.addownload.pt r2 = r11.pt
            r2.rg(r3)
            com.ss.android.downloadlib.q.ux r2 = com.ss.android.downloadlib.q.ux.rg()
            com.ss.android.downloadlib.addownload.model.c r3 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r4 = r11.oh
            com.ss.android.downloadad.api.rg.df r3 = r3.pt(r4)
            r2.df(r3)
            com.ss.android.downloadlib.addownload.q.c r2 = com.ss.android.downloadlib.addownload.q.c.rg()
            com.ss.android.downloadlib.addownload.pp$3 r3 = new com.ss.android.downloadlib.addownload.pp$3
            r4 = r3
            r5 = r11
            r6 = r1
            r7 = r12
            r8 = r10
            r9 = r0
            r4.<init>(r5, r6, r7, r8, r9)
            r2.rg(r10, r0, r3)
            goto L14d
        Lf4:
            com.ss.android.downloadlib.addownload.fw r2 = r11.q
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r11.ux
            r2.rg(r3, r12)
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r11.ux
            r11.rg(r1, r0, r12)
            goto L14d
        L101:
            com.ss.android.downloadlib.addownload.fw r3 = r11.q
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r11.ux
            r3.rg(r4, r12)
            if (r10 == 0) goto L11a
            long r3 = java.lang.System.currentTimeMillis()
            r10.ux(r3)
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r11.ux
            long r3 = r12.getCurBytes()
            r10.rz(r3)
        L11a:
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r11.ux
            r12.setDownloadFromReserveWifi(r2)
            com.ss.android.downloadlib.addownload.pt r12 = r11.pt
            com.ss.android.downloadlib.addownload.model.pp r8 = new com.ss.android.downloadlib.addownload.model.pp
            long r3 = r11.oh
            com.ss.android.download.api.download.DownloadModel r5 = r11.f
            com.ss.android.download.api.download.DownloadEventConfig r6 = r11.hq()
            com.ss.android.download.api.download.DownloadController r7 = r11.oh()
            r2 = r8
            r2.<init>(r3, r5, r6, r7)
            r12.rg(r8)
            com.ss.android.downloadlib.addownload.pt r4 = r11.pt
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r11.ux
            long r6 = r12.getCurBytes()
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r11.ux
            long r8 = r12.getTotalBytes()
            com.ss.android.downloadlib.addownload.pp$2 r10 = new com.ss.android.downloadlib.addownload.pp$2
            r10.<init>(r11, r1, r0)
            r5 = r1
            r4.rg(r5, r6, r8, r10)
        L14d:
            return
    }

    static com.ss.android.download.api.model.DownloadShortInfo df(com.ss.android.downloadlib.addownload.pp r0) {
            com.ss.android.download.api.model.DownloadShortInfo r0 = r0.z()
            return r0
    }

    static void df(com.ss.android.downloadlib.addownload.pp r0, boolean r1) {
            r0.ux(r1)
            return
    }

    private void f() {
            r3 = this;
            java.lang.String r0 = com.ss.android.downloadlib.addownload.pp.rg
            r1 = 0
            java.lang.String r2 = "pICD"
            com.ss.android.downloadlib.utils.bm.rg(r0, r2, r1)
            com.ss.android.downloadlib.addownload.fw r0 = r3.q
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r3.ux
            boolean r0 = r0.pt(r2)
            if (r0 == 0) goto L1e
            java.lang.String r0 = com.ss.android.downloadlib.addownload.pp.rg
            java.lang.String r2 = "pICD BC"
            com.ss.android.downloadlib.utils.bm.rg(r0, r2, r1)
            r0 = 0
            r3.c(r0)
            goto L28
        L1e:
            java.lang.String r0 = com.ss.android.downloadlib.addownload.pp.rg
            java.lang.String r2 = "pICD IC"
            com.ss.android.downloadlib.utils.bm.rg(r0, r2, r1)
            r3.b()
        L28:
            return
    }

    private void fw(boolean r17) {
            r16 = this;
            r0 = r16
            com.ss.android.downloadlib.addownload.pt r1 = r0.pt
            com.ss.android.downloadlib.addownload.model.pp r8 = new com.ss.android.downloadlib.addownload.model.pp
            long r3 = r0.oh
            com.ss.android.download.api.download.DownloadModel r5 = r0.f
            com.ss.android.download.api.download.DownloadEventConfig r6 = r16.hq()
            com.ss.android.download.api.download.DownloadController r7 = r16.oh()
            r2 = r8
            r2.<init>(r3, r5, r6, r7)
            r1.rg(r8)
            com.ss.android.downloadlib.addownload.pt r9 = r0.pt
            com.ss.android.downloadlib.addownload.pp$5 r15 = new com.ss.android.downloadlib.addownload.pp$5
            r1 = r17
            r15.<init>(r0, r1)
            r10 = 0
            r11 = 0
            r13 = 0
            r9.rg(r10, r11, r13, r15)
            return
    }

    static boolean fw(com.ss.android.downloadlib.addownload.pp r0) {
            boolean r0 = r0.qx
            return r0
    }

    private android.content.Context getContext() {
            r1 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r1.pp
            if (r0 == 0) goto L13
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L13
            java.lang.ref.WeakReference<android.content.Context> r0 = r1.pp
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            return r0
        L13:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            return r0
    }

    private com.ss.android.download.api.download.DownloadEventConfig hq() {
            r1 = this;
            com.ss.android.download.api.download.DownloadEventConfig r0 = r1.v
            if (r0 != 0) goto Ld
            com.ss.android.download.api.download.q$rg r0 = new com.ss.android.download.api.download.q$rg
            r0.<init>()
            com.ss.android.download.api.download.q r0 = r0.rg()
        Ld:
            return r0
    }

    private com.ss.android.download.api.download.DownloadController oh() {
            r1 = this;
            com.ss.android.download.api.download.DownloadController r0 = r1.un
            if (r0 != 0) goto Lb
            com.ss.android.download.api.download.df r0 = new com.ss.android.download.api.download.df
            r0.<init>()
            r1.un = r0
        Lb:
            com.ss.android.download.api.download.DownloadController r0 = r1.un
            return r0
    }

    static com.ss.android.downloadlib.addownload.fw pp(com.ss.android.downloadlib.addownload.pp r0) {
            com.ss.android.downloadlib.addownload.fw r0 = r0.q
            return r0
    }

    private void pp(boolean r3) {
            r2 = this;
            com.ss.android.download.api.download.DownloadModel r0 = r2.f
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.downloadlib.utils.pt.df(r0)
            java.lang.String r1 = "notification_opt_2"
            int r0 = r0.optInt(r1)
            r1 = 1
            if (r0 != r1) goto L20
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.ux
            if (r0 == 0) goto L20
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r2.ux
            int r1 = r1.getId()
            r0.cancelNotification(r1)
        L20:
            r2.c(r3)
            return
    }

    static com.ss.android.socialbase.downloader.model.DownloadInfo pt(com.ss.android.downloadlib.addownload.pp r0) {
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.ux
            return r0
    }

    static com.ss.android.downloadlib.addownload.pt q(com.ss.android.downloadlib.addownload.pp r0) {
            com.ss.android.downloadlib.addownload.pt r0 = r0.pt
            return r0
    }

    private boolean q(int r6) {
            r5 = this;
            boolean r0 = r5.pp()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            r0 = -1
            com.ss.android.download.api.download.DownloadModel r2 = r5.f
            com.ss.android.download.api.model.q r2 = r2.getQuickAppModel()
            java.lang.String r2 = r2.rg()
            r3 = 1
            if (r6 == r3) goto L1c
            r3 = 2
            if (r6 == r3) goto L1a
            goto L1d
        L1a:
            r0 = 4
            goto L1d
        L1c:
            r0 = 5
        L1d:
            com.ss.android.download.api.download.DownloadModel r3 = r5.f
            boolean r4 = r3 instanceof com.ss.android.downloadad.api.download.AdDownloadModel
            if (r4 == 0) goto L29
            com.ss.android.downloadad.api.download.AdDownloadModel r3 = (com.ss.android.downloadad.api.download.AdDownloadModel) r3
            r4 = 3
            r3.setFunnelType(r4)
        L29:
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            boolean r2 = com.ss.android.downloadlib.utils.ux.q(r3, r2)
            if (r2 == 0) goto L58
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r3 = r5.oh
            r1.rg(r3, r6)
            android.os.Message r6 = android.os.Message.obtain()
            r6.what = r0
            com.ss.android.download.api.download.DownloadModel r1 = r5.f
            long r3 = r1.getId()
            java.lang.Long r1 = java.lang.Long.valueOf(r3)
            r6.obj = r1
            com.ss.android.downloadlib.addownload.q r6 = com.ss.android.downloadlib.addownload.q.rg()
            com.ss.android.download.api.download.DownloadModel r1 = r5.f
            r6.rg(r5, r0, r1)
            goto L61
        L58:
            com.ss.android.downloadlib.event.AdEventHandler r6 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r3 = r5.oh
            r6.rg(r3, r1, r1)
        L61:
            return r2
    }

    static com.ss.android.socialbase.downloader.model.DownloadInfo rg(com.ss.android.downloadlib.addownload.pp r0, com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            r0.ux = r1
            return r1
    }

    static java.util.Map rg(com.ss.android.downloadlib.addownload.pp r0) {
            java.util.Map<java.lang.Integer, java.lang.Object> r0 = r0.c
            return r0
    }

    private void rg(int r2, int r3, com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r1 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r0 = "fix_click_start"
            boolean r4 = r4.optBugFix(r0)
            if (r4 == 0) goto L2a
            r4 = -3
            if (r3 == r4) goto L1e
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r4 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            boolean r4 = r4.canResume(r2)
            if (r4 != 0) goto L1e
            r2 = 0
            r1.rg(r2, r2)
            goto L35
        L1e:
            com.ss.android.socialbase.appdownloader.pt r4 = com.ss.android.socialbase.appdownloader.pt.bm()
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            r4.rg(r0, r2, r3)
            goto L35
        L2a:
            com.ss.android.socialbase.appdownloader.pt r4 = com.ss.android.socialbase.appdownloader.pt.bm()
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            r4.rg(r0, r2, r3)
        L35:
            return
    }

    static void rg(com.ss.android.downloadlib.addownload.pp r0, int r1, int r2, com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r0.rg(r1, r2, r3)
            return
    }

    static void rg(com.ss.android.downloadlib.addownload.pp r0, boolean r1) {
            r0.fw(r1)
            return
    }

    private void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            android.os.Message r0 = android.os.Message.obtain()
            r1 = 3
            r0.what = r1
            r0.obj = r3
            com.ss.android.downloadlib.utils.hq r3 = r2.df
            r3.sendMessage(r0)
            return
    }

    static android.content.Context rz(com.ss.android.downloadlib.addownload.pp r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    private void un() {
            r5 = this;
            com.ss.android.downloadlib.addownload.pp$q r0 = r5.rz
            r1 = 1
            if (r0 == 0) goto L12
            android.os.AsyncTask$Status r0 = r0.getStatus()
            android.os.AsyncTask$Status r2 = android.os.AsyncTask.Status.FINISHED
            if (r0 == r2) goto L12
            com.ss.android.downloadlib.addownload.pp$q r0 = r5.rz
            r0.cancel(r1)
        L12:
            com.ss.android.downloadlib.addownload.pp$q r0 = new com.ss.android.downloadlib.addownload.pp$q
            r2 = 0
            r0.<init>(r5, r2)
            r5.rz = r0
            r2 = 2
            java.lang.String[] r2 = new java.lang.String[r2]
            r3 = 0
            com.ss.android.download.api.download.DownloadModel r4 = r5.f
            java.lang.String r4 = r4.getDownloadUrl()
            r2[r3] = r4
            com.ss.android.download.api.download.DownloadModel r3 = r5.f
            java.lang.String r3 = r3.getPackageName()
            r2[r1] = r3
            com.ss.android.downloadlib.utils.df.rg(r0, r2)
            return
    }

    static com.ss.android.socialbase.downloader.depend.IDownloadListener ux(com.ss.android.downloadlib.addownload.pp r0) {
            com.ss.android.socialbase.downloader.depend.IDownloadListener r0 = r0.bm
            return r0
    }

    private void ux(boolean r8) {
            r7 = this;
            java.util.Map<java.lang.Integer, java.lang.Object> r0 = r7.c
            java.util.List r0 = com.ss.android.downloadlib.addownload.fw.rg(r0)
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.ss.android.download.api.download.DownloadStatusChangeListener r1 = (com.ss.android.download.api.download.DownloadStatusChangeListener) r1
            com.ss.android.download.api.download.DownloadModel r2 = r7.f
            com.ss.android.download.api.download.DownloadController r3 = r7.oh()
            r1.onDownloadStart(r2, r3)
            goto La
        L20:
            com.ss.android.downloadlib.addownload.fw r0 = r7.q
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.depend.IDownloadListener r2 = r7.bm
            int r0 = r0.rg(r1, r2)
            java.lang.String r1 = com.ss.android.downloadlib.addownload.pp.rg
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "beginDown id:"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r3 = 0
            com.ss.android.downloadlib.utils.bm.rg(r1, r2, r3)
            if (r0 == 0) goto L67
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.ux
            if (r1 == 0) goto L5f
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r2 = "fix_click_start"
            boolean r1 = r1.optBugFix(r2)
            if (r1 == 0) goto L56
            goto L5f
        L56:
            com.ss.android.downloadlib.addownload.fw r8 = r7.q
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.ux
            r2 = 0
            r8.rg(r1, r2)
            goto L97
        L5f:
            if (r8 == 0) goto L97
            com.ss.android.downloadlib.addownload.fw r8 = r7.q
            r8.rg()
            goto L97
        L67:
            com.ss.android.socialbase.downloader.model.DownloadInfo$Builder r8 = new com.ss.android.socialbase.downloader.model.DownloadInfo$Builder
            com.ss.android.download.api.download.DownloadModel r1 = r7.f
            java.lang.String r1 = r1.getDownloadUrl()
            r8.<init>(r1)
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r8.build()
            r1 = -1
            r8.setStatus(r1)
            r7.rg(r8)
            com.ss.android.downloadlib.event.AdEventHandler r8 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r1 = r7.oh
            com.ss.android.socialbase.downloader.exception.BaseException r4 = new com.ss.android.socialbase.downloader.exception.BaseException
            r5 = 2
            java.lang.String r6 = "start download failed, id=0"
            r4.<init>(r5, r6)
            r8.rg(r1, r4)
            com.ss.android.downloadlib.exception.q r8 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r1 = "beginDown"
            r8.df(r1)
        L97:
            com.ss.android.downloadlib.addownload.fw r8 = r7.q
            boolean r1 = r7.q()
            boolean r8 = r8.rg(r1)
            if (r8 == 0) goto Lbc
            java.lang.String r8 = com.ss.android.downloadlib.addownload.pp.rg
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "beginDown IC id:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.ss.android.downloadlib.utils.bm.rg(r8, r0, r3)
            r7.b()
        Lbc:
            return
    }

    private boolean v() {
            r8 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r1 = "fix_click_start"
            boolean r0 = r0.optBugFix(r1)
            r1 = 0
            r2 = -3
            r3 = 1
            if (r0 == 0) goto L54
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r8.ux
            if (r0 != 0) goto L14
            return r3
        L14:
            int r0 = r0.getStatus()
            if (r0 != r2) goto L27
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r8.ux
            long r4 = r0.getCurBytes()
            r6 = 0
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 > 0) goto L27
            return r3
        L27:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r8.ux
            int r0 = r0.getStatus()
            if (r0 == 0) goto L53
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r8.ux
            int r0 = r0.getStatus()
            r2 = -4
            if (r0 != r2) goto L39
            goto L53
        L39:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r8.ux     // Catch: java.lang.Exception -> L52
            int r0 = r0.getStatus()     // Catch: java.lang.Exception -> L52
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r8.ux     // Catch: java.lang.Exception -> L52
            java.lang.String r2 = r2.getSavePath()     // Catch: java.lang.Exception -> L52
            com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r8.ux     // Catch: java.lang.Exception -> L52
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Exception -> L52
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloadSuccessAndFileNotExist(r0, r2, r4)     // Catch: java.lang.Exception -> L52
            if (r0 == 0) goto L52
            return r3
        L52:
            return r1
        L53:
            return r3
        L54:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r8.ux
            if (r0 != 0) goto L59
            return r3
        L59:
            int r0 = r0.getStatus()
            if (r0 == r2) goto L74
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r8.ux
            int r2 = r2.getId()
            boolean r0 = r0.canResume(r2)
            if (r0 != 0) goto L74
            return r3
        L74:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r8.ux
            int r0 = r0.getStatus()
            if (r0 != 0) goto L7d
            return r3
        L7d:
            return r1
    }

    private com.ss.android.download.api.model.DownloadShortInfo z() {
            r1 = this;
            com.ss.android.download.api.model.DownloadShortInfo r0 = r1.fw
            if (r0 != 0) goto Lb
            com.ss.android.download.api.model.DownloadShortInfo r0 = new com.ss.android.download.api.model.DownloadShortInfo
            r0.<init>()
            r1.fw = r0
        Lb:
            com.ss.android.download.api.model.DownloadShortInfo r0 = r1.fw
            return r0
    }

    public void c() {
            r2 = this;
            com.ss.android.downloadlib.utils.hq r0 = r2.df
            com.ss.android.downloadlib.addownload.pp$1 r1 = new com.ss.android.downloadlib.addownload.pp$1
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    @Override
    public com.ss.android.downloadlib.addownload.c df(int r1, com.ss.android.download.api.download.DownloadStatusChangeListener r2) {
            r0 = this;
            com.ss.android.downloadlib.addownload.pp r1 = r0.rg(r1, r2)
            return r1
    }

    @Override
    public com.ss.android.downloadlib.addownload.c df(android.content.Context r1) {
            r0 = this;
            com.ss.android.downloadlib.addownload.pp r1 = r0.rg(r1)
            return r1
    }

    @Override
    public com.ss.android.downloadlib.addownload.c df(com.ss.android.download.api.download.DownloadController r1) {
            r0 = this;
            com.ss.android.downloadlib.addownload.pp r1 = r0.rg(r1)
            return r1
    }

    @Override
    public com.ss.android.downloadlib.addownload.c df(com.ss.android.download.api.download.DownloadEventConfig r1) {
            r0 = this;
            com.ss.android.downloadlib.addownload.pp r1 = r0.rg(r1)
            return r1
    }

    @Override
    public com.ss.android.downloadlib.addownload.c df(com.ss.android.download.api.download.DownloadModel r1) {
            r0 = this;
            com.ss.android.downloadlib.addownload.pp r1 = r0.rg(r1)
            return r1
    }

    @Override
    public void df(int r7) {
            r6 = this;
            r0 = 2
            r1 = 1
            if (r7 == r1) goto Lf
            if (r7 != r0) goto L7
            goto Lf
        L7:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "error actionType"
            r7.<init>(r0)
            throw r7
        Lf:
            com.ss.android.downloadlib.addownload.fw r2 = r6.q
            long r3 = r6.oh
            r2.rg(r3)
            com.ss.android.downloadlib.addownload.model.c r2 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r3 = r6.oh
            com.ss.android.downloadlib.addownload.model.pp r2 = r2.pp(r3)
            boolean r2 = r2.l()
            if (r2 != 0) goto L2f
            com.ss.android.downloadlib.exception.q r2 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r3 = "handleDownload ModelBox !isStrictValid"
            r2.rg(r3)
        L2f:
            com.ss.android.downloadlib.addownload.fw r2 = r6.q
            android.content.Context r3 = r6.getContext()
            boolean r4 = r6.r
            boolean r2 = r2.rg(r3, r7, r4)
            if (r2 != 0) goto L8a
            boolean r2 = r6.q(r7)
            r3 = 0
            java.lang.String r4 = "handleDownload id:"
            if (r7 == r1) goto L6a
            if (r7 == r0) goto L49
            goto L8a
        L49:
            if (r2 != 0) goto L8a
            java.lang.String r7 = com.ss.android.downloadlib.addownload.pp.rg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            long r4 = r6.oh
            r0.append(r4)
            java.lang.String r2 = ",pBC:"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.ss.android.downloadlib.utils.bm.rg(r7, r0, r3)
            r6.df(r1)
            goto L8a
        L6a:
            if (r2 != 0) goto L8a
            java.lang.String r7 = com.ss.android.downloadlib.addownload.pp.rg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            long r4 = r6.oh
            r0.append(r4)
            java.lang.String r2 = ",pIC:"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.ss.android.downloadlib.utils.bm.rg(r7, r0, r3)
            r6.q(r1)
        L8a:
            return
    }

    public void df(boolean r1) {
            r0 = this;
            r0.pp(r1)
            return
    }

    @Override
    public boolean df() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    public void fw() {
            r2 = this;
            java.util.Map<java.lang.Integer, java.lang.Object> r0 = r2.c
            int r0 = r0.size()
            if (r0 != 0) goto L9
            return
        L9:
            java.util.Map<java.lang.Integer, java.lang.Object> r0 = r2.c
            java.util.List r0 = com.ss.android.downloadlib.addownload.fw.rg(r0)
            java.util.Iterator r0 = r0.iterator()
        L13:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            com.ss.android.download.api.download.DownloadStatusChangeListener r1 = (com.ss.android.download.api.download.DownloadStatusChangeListener) r1
            r1.onIdle()
            goto L13
        L23:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.ux
            if (r0 == 0) goto L2b
            r1 = -4
            r0.setStatus(r1)
        L2b:
            return
    }

    public boolean pp() {
            r5 = this;
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            r1 = 0
            java.lang.String r2 = "quick_app_enable_switch"
            int r0 = r0.optInt(r2, r1)
            if (r0 == 0) goto Le
            return r1
        Le:
            com.ss.android.download.api.download.DownloadModel r0 = r5.f
            com.ss.android.download.api.model.q r0 = r0.getQuickAppModel()
            if (r0 == 0) goto L4f
            com.ss.android.download.api.download.DownloadModel r0 = r5.f
            com.ss.android.download.api.model.q r0 = r0.getQuickAppModel()
            java.lang.String r0 = r0.rg()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4f
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r5.ux
            boolean r0 = com.ss.android.downloadlib.addownload.q.rg(r0)
            if (r0 == 0) goto L4f
            android.content.Context r0 = r5.getContext()
            android.content.Intent r2 = new android.content.Intent
            com.ss.android.download.api.download.DownloadModel r3 = r5.f
            com.ss.android.download.api.model.q r3 = r3.getQuickAppModel()
            java.lang.String r3 = r3.rg()
            android.net.Uri r3 = android.net.Uri.parse(r3)
            java.lang.String r4 = "android.intent.action.VIEW"
            r2.<init>(r4, r3)
            boolean r0 = com.ss.android.downloadlib.utils.b.rg(r0, r2)
            if (r0 == 0) goto L4f
            r0 = 1
            return r0
        L4f:
            return r1
    }

    @Override
    public long pt() {
            r2 = this;
            long r0 = r2.hq
            return r0
    }

    public boolean pt(boolean r4) {
            r3 = this;
            java.lang.ref.SoftReference<com.ss.android.download.api.config.IDownloadButtonClickListener> r0 = r3.n
            r1 = 0
            java.lang.String r2 = "mDownloadButtonClickListener has recycled"
            if (r0 == 0) goto L33
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L33
            r0 = 1
            if (r4 != 0) goto L1c
            java.lang.ref.SoftReference<com.ss.android.download.api.config.IDownloadButtonClickListener> r4 = r3.n     // Catch: java.lang.Exception -> L2b
            java.lang.Object r4 = r4.get()     // Catch: java.lang.Exception -> L2b
            com.ss.android.download.api.config.IDownloadButtonClickListener r4 = (com.ss.android.download.api.config.IDownloadButtonClickListener) r4     // Catch: java.lang.Exception -> L2b
            r4.handleComplianceDialog(r0)     // Catch: java.lang.Exception -> L2b
            goto L27
        L1c:
            java.lang.ref.SoftReference<com.ss.android.download.api.config.IDownloadButtonClickListener> r4 = r3.n     // Catch: java.lang.Exception -> L2b
            java.lang.Object r4 = r4.get()     // Catch: java.lang.Exception -> L2b
            com.ss.android.download.api.config.IDownloadButtonClickListener r4 = (com.ss.android.download.api.config.IDownloadButtonClickListener) r4     // Catch: java.lang.Exception -> L2b
            r4.handleMarketFailedComplianceDialog()     // Catch: java.lang.Exception -> L2b
        L27:
            r4 = 0
            r3.n = r4     // Catch: java.lang.Exception -> L2b
            return r0
        L2b:
            com.ss.android.downloadlib.exception.q r4 = com.ss.android.downloadlib.exception.q.rg()
            r4.df(r2)
            return r1
        L33:
            com.ss.android.downloadlib.exception.q r4 = com.ss.android.downloadlib.exception.q.rg()
            r4.df(r2)
            return r1
    }

    public void q(boolean r4) {
            r3 = this;
            if (r4 == 0) goto Lc
            com.ss.android.downloadlib.event.AdEventHandler r4 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r0 = r3.oh
            r2 = 1
            r4.rg(r0, r2)
        Lc:
            r3.f()
            return
    }

    public boolean q() {
            r1 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r1.ux
            if (r0 == 0) goto Lc
            int r0 = r0.getStatus()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public com.ss.android.downloadlib.addownload.c rg(long r3) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 == 0) goto L1a
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.download.api.download.DownloadModel r0 = r0.rg(r3)
            if (r0 == 0) goto L24
            r2.f = r0
            r2.oh = r3
            com.ss.android.downloadlib.addownload.fw r0 = r2.q
            r0.rg(r3)
            goto L24
        L1a:
            com.ss.android.downloadlib.exception.q r3 = com.ss.android.downloadlib.exception.q.rg()
            r4 = 0
            java.lang.String r0 = "setModelId"
            r3.rg(r4, r0)
        L24:
            return r2
    }

    @Override
    public com.ss.android.downloadlib.addownload.c rg(com.ss.android.download.api.config.IDownloadButtonClickListener r2) {
            r1 = this;
            if (r2 != 0) goto L6
            r2 = 0
            r1.n = r2
            goto Ld
        L6:
            java.lang.ref.SoftReference r0 = new java.lang.ref.SoftReference
            r0.<init>(r2)
            r1.n = r0
        Ld:
            return r1
    }

    @Override
    public com.ss.android.downloadlib.addownload.c rg(com.ss.android.download.api.config.OnItemClickListener r2) {
            r1 = this;
            if (r2 != 0) goto L6
            r2 = 0
            r1.z = r2
            goto Ld
        L6:
            java.lang.ref.SoftReference r0 = new java.lang.ref.SoftReference
            r0.<init>(r2)
            r1.z = r0
        Ld:
            return r1
    }

    public com.ss.android.downloadlib.addownload.pp rg(int r3, com.ss.android.download.api.download.DownloadStatusChangeListener r4) {
            r2 = this;
            if (r4 == 0) goto L27
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "back_use_softref_listener"
            int r0 = r0.optInt(r1)
            r1 = 1
            if (r0 != r1) goto L19
            java.util.Map<java.lang.Integer, java.lang.Object> r0 = r2.c
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0.put(r3, r4)
            goto L27
        L19:
            java.util.Map<java.lang.Integer, java.lang.Object> r0 = r2.c
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.ref.SoftReference r1 = new java.lang.ref.SoftReference
            r1.<init>(r4)
            r0.put(r3, r1)
        L27:
            return r2
    }

    public com.ss.android.downloadlib.addownload.pp rg(android.content.Context r2) {
            r1 = this;
            if (r2 == 0) goto L9
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.pp = r0
        L9:
            com.ss.android.downloadlib.addownload.bm.df(r2)
            return r1
    }

    public com.ss.android.downloadlib.addownload.pp rg(com.ss.android.download.api.download.DownloadController r4) {
            r3 = this;
            r3.un = r4
            com.ss.android.download.api.download.DownloadModel r4 = r3.f
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.downloadlib.utils.pt.df(r4)
            java.lang.String r0 = "force_auto_open"
            int r4 = r4.optInt(r0)
            r0 = 1
            if (r4 != r0) goto L18
            com.ss.android.download.api.download.DownloadController r4 = r3.oh()
            r4.setLinkMode(r0)
        L18:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r0 = "fix_show_dialog"
            boolean r4 = r4.optBugFix(r0)
            if (r4 == 0) goto L3c
            com.ss.android.download.api.download.DownloadModel r4 = r3.f
            org.json.JSONObject r4 = r4.getExtra()
            if (r4 == 0) goto L3c
            java.lang.String r0 = "subprocess"
            int r4 = r4.optInt(r0)
            if (r4 <= 0) goto L3c
            com.ss.android.download.api.download.DownloadController r4 = r3.oh()
            r0 = 0
            r4.setEnableNewActivity(r0)
        L3c:
            com.ss.android.downloadlib.addownload.model.c r4 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r0 = r3.oh
            com.ss.android.download.api.download.DownloadController r2 = r3.oh()
            r4.rg(r0, r2)
            return r3
    }

    public com.ss.android.downloadlib.addownload.pp rg(com.ss.android.download.api.download.DownloadEventConfig r4) {
            r3 = this;
            r3.v = r4
            com.ss.android.download.api.download.DownloadEventConfig r4 = r3.hq()
            int r4 = r4.getDownloadScene()
            if (r4 != 0) goto Le
            r4 = 1
            goto Lf
        Le:
            r4 = 0
        Lf:
            r3.r = r4
            com.ss.android.downloadlib.addownload.model.c r4 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r0 = r3.oh
            com.ss.android.download.api.download.DownloadEventConfig r2 = r3.hq()
            r4.rg(r0, r2)
            return r3
    }

    public com.ss.android.downloadlib.addownload.pp rg(com.ss.android.download.api.download.DownloadModel r6) {
            r5 = this;
            if (r6 == 0) goto L91
            boolean r0 = r6.isAd()
            r1 = 0
            if (r0 == 0) goto L26
            long r3 = r6.getId()
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 <= 0) goto L1c
            java.lang.String r0 = r6.getLogExtra()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L57
        L1c:
            com.ss.android.downloadlib.exception.q r0 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r1 = "setDownloadModel ad error"
            r0.rg(r1)
            goto L57
        L26:
            long r3 = r6.getId()
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L57
            boolean r0 = r6 instanceof com.ss.android.downloadad.api.download.AdDownloadModel
            if (r0 == 0) goto L57
            com.ss.android.downloadlib.exception.q r0 = com.ss.android.downloadlib.exception.q.rg()
            r1 = 0
            java.lang.String r2 = "setDownloadModel id=0"
            r0.rg(r1, r2)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r1 = "fix_model_id"
            boolean r0 = r0.optBugFix(r1)
            if (r0 == 0) goto L57
            r0 = r6
            com.ss.android.downloadad.api.download.AdDownloadModel r0 = (com.ss.android.downloadad.api.download.AdDownloadModel) r0
            java.lang.String r1 = r6.getDownloadUrl()
            int r1 = r1.hashCode()
            long r1 = (long) r1
            r0.setId(r1)
        L57:
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            r0.rg(r6)
            long r0 = r6.getId()
            r5.oh = r0
            r5.f = r6
            boolean r0 = com.ss.android.downloadlib.addownload.ux.rg(r6)
            if (r0 == 0) goto L91
            com.ss.android.downloadad.api.download.AdDownloadModel r6 = (com.ss.android.downloadad.api.download.AdDownloadModel) r6
            r0 = 3
            r6.setExtraValue(r0)
            com.ss.android.downloadlib.addownload.model.c r6 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r2 = r5.oh
            com.ss.android.downloadad.api.rg.df r6 = r6.pt(r2)
            if (r6 == 0) goto L91
            long r2 = r6.hq()
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 == 0) goto L91
            r6.pp(r0)
            com.ss.android.downloadlib.addownload.model.ux r0 = com.ss.android.downloadlib.addownload.model.ux.rg()
            r0.rg(r6)
        L91:
            return r5
    }

    @Override
    public void rg() {
            r5 = this;
            r0 = 1
            r5.b = r0
            com.ss.android.downloadlib.addownload.model.c r1 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r2 = r5.oh
            com.ss.android.download.api.download.DownloadEventConfig r4 = r5.hq()
            r1.rg(r2, r4)
            com.ss.android.downloadlib.addownload.model.c r1 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r2 = r5.oh
            com.ss.android.download.api.download.DownloadController r4 = r5.oh()
            r1.rg(r2, r4)
            com.ss.android.downloadlib.addownload.fw r1 = r5.q
            long r2 = r5.oh
            r1.rg(r2)
            r5.un()
            org.json.JSONObject r1 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r2 = "enable_empty_listener"
            int r1 = r1.optInt(r2, r0)
            if (r1 != r0) goto L49
            java.util.Map<java.lang.Integer, java.lang.Object> r0 = r5.c
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = r0.get(r2)
            if (r0 != 0) goto L49
            com.ss.android.download.api.config.rg r0 = new com.ss.android.download.api.config.rg
            r0.<init>()
            r5.rg(r1, r0)
        L49:
            return
    }

    @Override
    public void rg(android.os.Message r4) {
            r3 = this;
            if (r4 == 0) goto L1e
            boolean r0 = r3.b
            if (r0 != 0) goto L7
            goto L1e
        L7:
            int r0 = r4.what
            r1 = 3
            if (r0 == r1) goto Ld
            goto L1e
        Ld:
            java.lang.Object r0 = r4.obj
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            r3.ux = r0
            com.ss.android.downloadlib.addownload.fw r0 = r3.q
            com.ss.android.download.api.model.DownloadShortInfo r1 = r3.z()
            java.util.Map<java.lang.Integer, java.lang.Object> r2 = r3.c
            r0.rg(r4, r1, r2)
        L1e:
            return
    }

    @Override
    public void rg(boolean r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.ux
            if (r0 == 0) goto L4a
            if (r3 == 0) goto L28
            com.ss.android.socialbase.appdownloader.pt r3 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.pt r3 = r3.df()
            if (r3 == 0) goto L15
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.ux
            r3.rg(r0)
        L15:
            android.content.Context r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r3 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r3)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.ux
            int r0 = r0.getId()
            r1 = 1
            r3.cancel(r0, r1)
            goto L4a
        L28:
            android.content.Intent r3 = new android.content.Intent
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.Class<com.ss.android.socialbase.appdownloader.DownloadHandlerService> r1 = com.ss.android.socialbase.appdownloader.DownloadHandlerService.class
            r3.<init>(r0, r1)
            java.lang.String r0 = "android.ss.intent.action.DOWNLOAD_DELETE"
            r3.setAction(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.ux
            int r0 = r0.getId()
            java.lang.String r1 = "extra_click_download_ids"
            r3.putExtra(r1, r0)
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            r0.startService(r3)
        L4a:
            return
    }

    public void rg(boolean r4, boolean r5) {
            r3 = this;
            if (r4 == 0) goto Lc
            com.ss.android.downloadlib.event.AdEventHandler r4 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r0 = r3.oh
            r2 = 2
            r4.rg(r0, r2)
        Lc:
            java.lang.String r4 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r4 = com.ss.android.downloadlib.utils.rz.df(r4)
            if (r4 != 0) goto L29
            com.ss.android.download.api.download.DownloadController r4 = r3.oh()
            boolean r4 = r4.enableNewActivity()
            if (r4 != 0) goto L29
            com.ss.android.download.api.download.DownloadModel r4 = r3.f
            com.ss.android.downloadlib.addownload.fw r0 = r3.q
            java.lang.String r0 = r0.df()
            r4.setFilePath(r0)
        L29:
            com.ss.android.download.api.download.DownloadModel r4 = r3.f
            int r4 = com.ss.android.downloadlib.utils.pt.q(r4)
            if (r4 != 0) goto L44
            java.lang.String r4 = com.ss.android.downloadlib.addownload.pp.rg
            r0 = 0
            java.lang.String r1 = "pBCD not start"
            com.ss.android.downloadlib.utils.bm.rg(r4, r1, r0)
            com.ss.android.downloadlib.addownload.fw r4 = r3.q
            com.ss.android.downloadlib.addownload.pp$4 r0 = new com.ss.android.downloadlib.addownload.pp$4
            r0.<init>(r3, r5)
            r4.rg(r0)
            goto L47
        L44:
            r3.fw(r5)
        L47:
            return
    }

    @Override
    public boolean rg(int r5) {
            r4 = this;
            if (r5 != 0) goto L8
            java.util.Map<java.lang.Integer, java.lang.Object> r5 = r4.c
            r5.clear()
            goto L11
        L8:
            java.util.Map<java.lang.Integer, java.lang.Object> r0 = r4.c
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r0.remove(r5)
        L11:
            java.util.Map<java.lang.Integer, java.lang.Object> r5 = r4.c
            boolean r5 = r5.isEmpty()
            r0 = 0
            r1 = 1
            if (r5 == 0) goto L7c
            r4.b = r0
            long r2 = java.lang.System.currentTimeMillis()
            r4.hq = r2
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r4.ux
            if (r5 == 0) goto L38
            android.content.Context r5 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r5 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r5)
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.ux
            int r0 = r0.getId()
            r5.removeTaskMainListener(r0)
        L38:
            com.ss.android.downloadlib.addownload.pp$q r5 = r4.rz
            if (r5 == 0) goto L49
            android.os.AsyncTask$Status r5 = r5.getStatus()
            android.os.AsyncTask$Status r0 = android.os.AsyncTask.Status.FINISHED
            if (r5 == r0) goto L49
            com.ss.android.downloadlib.addownload.pp$q r5 = r4.rz
            r5.cancel(r1)
        L49:
            com.ss.android.downloadlib.addownload.fw r5 = r4.q
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.ux
            r5.rg(r0)
            java.lang.String r5 = com.ss.android.downloadlib.addownload.pp.rg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "onUnbind removeCallbacksAndMessages, downloadUrl:"
            r0.append(r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r4.ux
            if (r2 != 0) goto L63
            java.lang.String r2 = ""
            goto L67
        L63:
            java.lang.String r2 = r2.getUrl()
        L67:
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r2 = 0
            com.ss.android.downloadlib.utils.bm.rg(r5, r0, r2)
            com.ss.android.downloadlib.utils.hq r5 = r4.df
            r5.removeCallbacksAndMessages(r2)
            r4.fw = r2
            r4.ux = r2
            return r1
        L7c:
            java.util.Map<java.lang.Integer, java.lang.Object> r5 = r4.c
            int r5 = r5.size()
            if (r5 != r1) goto L99
            java.util.Map<java.lang.Integer, java.lang.Object> r5 = r4.c
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            boolean r5 = r5.containsKey(r1)
            if (r5 == 0) goto L99
            com.ss.android.downloadlib.addownload.fw r5 = r4.q
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r4.ux
            r5.df(r1)
        L99:
            return r0
    }

    public boolean rz() {
            r2 = this;
            java.lang.ref.SoftReference<com.ss.android.download.api.config.IDownloadButtonClickListener> r0 = r2.n
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            com.ss.android.download.api.download.DownloadModel r1 = r2.f
            java.lang.Object r0 = r0.get()
            com.ss.android.download.api.config.IDownloadButtonClickListener r0 = (com.ss.android.download.api.config.IDownloadButtonClickListener) r0
            boolean r0 = com.ss.android.downloadlib.addownload.ux.rg(r1, r0)
            return r0
    }

    @Override
    public void ux() {
            r3 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r1 = r3.oh
            r0.c(r1)
            return
    }
}
