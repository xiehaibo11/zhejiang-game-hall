package com.ss.android.downloadlib.addownload;

public class fw implements com.ss.android.downloadlib.utils.hq.rg {
    private com.ss.android.downloadlib.addownload.model.pp df;
    private com.ss.android.downloadlib.addownload.fw.df pp;
    private com.ss.android.downloadlib.addownload.pp pt;
    private boolean q;
    private long rg;




    public interface df {
        void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r1);
    }

    static class rg extends com.ss.android.socialbase.downloader.depend.AbsDownloadExtListener {
        private com.ss.android.downloadlib.utils.hq rg;

        rg(com.ss.android.downloadlib.utils.hq r1) {
                r0 = this;
                r0.<init>()
                r0.rg = r1
                return
        }

        private void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r3, int r4) {
                r2 = this;
                android.os.Message r0 = android.os.Message.obtain()
                r1 = 3
                r0.what = r1
                r0.obj = r3
                r0.arg1 = r4
                com.ss.android.downloadlib.utils.hq r3 = r2.rg
                r3.sendMessage(r0)
                return
        }

        @Override
        public void onCanceled(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
                r1 = this;
                r0 = -4
                r1.rg(r2, r0)
                return
        }

        @Override
        public void onFailed(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.exception.BaseException r2) {
                r0 = this;
                r2 = -1
                r0.rg(r1, r2)
                return
        }

        @Override
        public void onPause(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
                r1 = this;
                r0 = -2
                r1.rg(r2, r0)
                return
        }

        @Override
        public void onPrepare(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
                r1 = this;
                r0 = 1
                r1.rg(r2, r0)
                return
        }

        @Override
        public void onProgress(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
                r1 = this;
                r0 = 4
                r1.rg(r2, r0)
                return
        }

        @Override
        public void onStart(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
                r1 = this;
                r0 = 2
                r1.rg(r2, r0)
                return
        }

        @Override
        public void onSuccessed(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
                r1 = this;
                r0 = -3
                r1.rg(r2, r0)
                return
        }

        @Override
        public void onWaitingDownloadCompleteHandler(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
                r1 = this;
                r0 = 11
                r1.rg(r2, r0)
                return
        }
    }

    public fw(com.ss.android.downloadlib.addownload.pp r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.q = r0
            r1.pt = r2
            return
    }

    private boolean c() {
            r1 = this;
            com.ss.android.downloadlib.addownload.model.pp r0 = r1.df
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            boolean r0 = com.ss.android.downloadlib.utils.b.rg(r0)
            if (r0 == 0) goto L1a
            com.ss.android.downloadlib.addownload.model.pp r0 = r1.df
            com.ss.android.download.api.download.DownloadController r0 = r0.pt
            int r0 = r0.getLinkMode()
            boolean r0 = com.ss.android.downloadlib.addownload.ux.rg(r0)
            if (r0 == 0) goto L1a
            r0 = 1
            goto L1b
        L1a:
            r0 = 0
        L1b:
            return r0
    }

    private boolean c(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            if (r3 == 0) goto L19
            int r0 = r3.getStatus()
            r1 = -3
            if (r0 != r1) goto L19
            java.lang.String r0 = r3.getSavePath()
            java.lang.String r3 = r3.getName()
            boolean r3 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isFileExist(r0, r3)
            if (r3 == 0) goto L19
            r3 = 1
            goto L1a
        L19:
            r3 = 0
        L1a:
            return r3
    }

    static long df(com.ss.android.downloadlib.addownload.fw r2) {
            long r0 = r2.rg
            return r0
    }

    public static java.util.List<com.ss.android.download.api.download.rg> df(java.util.Map<java.lang.Integer, java.lang.Object> r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r3 == 0) goto L42
            boolean r1 = r3.isEmpty()
            if (r1 == 0) goto Le
            goto L42
        Le:
            java.util.Collection r3 = r3.values()
            java.util.Iterator r3 = r3.iterator()
        L16:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L42
            java.lang.Object r1 = r3.next()
            boolean r2 = r1 instanceof com.ss.android.download.api.download.rg
            if (r2 == 0) goto L2a
            com.ss.android.download.api.download.rg r1 = (com.ss.android.download.api.download.rg) r1
            r0.add(r1)
            goto L16
        L2a:
            boolean r2 = r1 instanceof java.lang.ref.SoftReference
            if (r2 == 0) goto L16
            java.lang.ref.SoftReference r1 = (java.lang.ref.SoftReference) r1
            java.lang.Object r2 = r1.get()
            boolean r2 = r2 instanceof com.ss.android.download.api.download.rg
            if (r2 == 0) goto L16
            java.lang.Object r1 = r1.get()
            com.ss.android.download.api.download.rg r1 = (com.ss.android.download.api.download.rg) r1
            r0.add(r1)
            goto L16
        L42:
            return r0
    }

    private void df(com.ss.android.download.api.config.n r3) {
            r2 = this;
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r1 = com.ss.android.downloadlib.utils.rz.df(r0)
            if (r1 == 0) goto Le
            if (r3 == 0) goto Ld
            r3.rg()
        Ld:
            return
        Le:
            java.lang.String[] r0 = new java.lang.String[]{r0}
            com.ss.android.downloadlib.addownload.fw$2 r1 = new com.ss.android.downloadlib.addownload.fw$2
            r1.<init>(r2, r3)
            com.ss.android.downloadlib.utils.rz.rg(r0, r1)
            return
    }

    private boolean pp() {
            r1 = this;
            com.ss.android.downloadlib.addownload.model.pp r0 = r1.df
            com.ss.android.download.api.download.DownloadController r0 = r0.pt
            boolean r0 = r0.isAddToDownloadManage()
            return r0
    }

    private boolean pp(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            com.ss.android.downloadlib.addownload.model.pp r0 = r1.df
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            boolean r0 = com.ss.android.downloadlib.utils.b.rg(r0)
            if (r0 != 0) goto L12
            boolean r2 = r1.c(r2)
            if (r2 == 0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    private boolean pt() {
            r1 = this;
            com.ss.android.downloadlib.addownload.model.pp r0 = r1.df
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            if (r0 == 0) goto L24
            com.ss.android.downloadlib.addownload.model.pp r0 = r1.df
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            java.lang.String r0 = r0.getPackageName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L24
            com.ss.android.downloadlib.addownload.model.pp r0 = r1.df
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            java.lang.String r0 = r0.getDownloadUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L24
            r0 = 1
            goto L25
        L24:
            r0 = 0
        L25:
            return r0
    }

    private boolean q() {
            r1 = this;
            boolean r0 = r1.pt()
            if (r0 == 0) goto Le
            boolean r0 = r1.pp()
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    static com.ss.android.downloadlib.addownload.model.pp rg(com.ss.android.downloadlib.addownload.fw r0) {
            com.ss.android.downloadlib.addownload.model.pp r0 = r0.df
            return r0
    }

    private com.ss.android.socialbase.downloader.model.HttpHeader rg(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "clickid"
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L17
            if (r1 != 0) goto L21
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L17
            r1.<init>(r3)     // Catch: org.json.JSONException -> L17
            java.lang.String r3 = r1.optString(r0)     // Catch: org.json.JSONException -> L17
            com.ss.android.socialbase.downloader.model.HttpHeader r1 = new com.ss.android.socialbase.downloader.model.HttpHeader     // Catch: org.json.JSONException -> L17
            r1.<init>(r0, r3)     // Catch: org.json.JSONException -> L17
            return r1
        L17:
            r3 = move-exception
            com.ss.android.download.api.df.rg r0 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r1 = "parseLogExtra Error"
            r0.rg(r3, r1)
        L21:
            r3 = 0
            return r3
    }

    private java.lang.String rg(com.ss.android.socialbase.downloader.setting.DownloadSetting r9) {
            r8 = this;
            com.ss.android.downloadlib.addownload.model.pp r0 = r8.df
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            java.lang.String r0 = r0.getFilePath()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L17
            com.ss.android.downloadlib.addownload.model.pp r9 = r8.df
            com.ss.android.download.api.download.DownloadModel r9 = r9.df
            java.lang.String r9 = r9.getFilePath()
            return r9
        L17:
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.downloadlib.addownload.model.pp r2 = r8.df
            com.ss.android.download.api.download.DownloadModel r2 = r2.df
            java.lang.String r2 = r2.getDownloadUrl()
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.rg(r1, r2)
            java.lang.String r1 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r1 = com.ss.android.downloadlib.utils.rz.df(r1)
            java.lang.String r2 = r8.df()
            if (r0 == 0) goto L77
            java.lang.String r3 = r0.getSavePath()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L77
            java.lang.String r3 = r0.getSavePath()
            if (r1 == 0) goto L48
            return r3
        L48:
            java.io.File r4 = android.os.Environment.getDataDirectory()
            java.lang.String r4 = r4.getAbsolutePath()
            boolean r4 = r3.startsWith(r4)
            if (r4 == 0) goto L57
            return r3
        L57:
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L64
            if (r4 != 0) goto L68
            boolean r4 = r3.startsWith(r2)     // Catch: java.lang.Exception -> L64
            if (r4 == 0) goto L68
            return r3
        L64:
            r3 = move-exception
            r3.printStackTrace()
        L68:
            android.content.Context r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r3 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r3)
            int r0 = r0.getId()
            r3.cancel(r0)
        L77:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r3 = 1
            r4 = 2
            java.lang.String r5 = "ttdownloader_code"
            if (r1 == 0) goto L84
            r6 = r3
            goto L85
        L84:
            r6 = r4
        L85:
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: org.json.JSONException -> L8d
            r0.putOpt(r5, r6)     // Catch: org.json.JSONException -> L8d
            goto L91
        L8d:
            r5 = move-exception
            r5.printStackTrace()
        L91:
            com.ss.android.downloadlib.event.AdEventHandler r5 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            com.ss.android.downloadlib.addownload.model.pp r6 = r8.df
            java.lang.String r7 = "label_external_permission"
            r5.rg(r7, r0, r6)
            r0 = 0
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.q.df()     // Catch: java.lang.Exception -> La1
        La1:
            int r9 = com.ss.android.downloadlib.utils.pt.rg(r9)
            if (r9 == 0) goto Lda
            r5 = 4
            if (r9 == r5) goto Lbd
            if (r1 != 0) goto Laf
            if (r9 != r4) goto Laf
            goto Lbd
        Laf:
            r4 = 3
            if (r9 == r4) goto Lb6
            if (r1 != 0) goto Lda
            if (r9 != r3) goto Lda
        Lb6:
            boolean r9 = android.text.TextUtils.isEmpty(r2)
            if (r9 != 0) goto Lda
            goto Ldb
        Lbd:
            android.content.Context r9 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.io.File r9 = r9.getFilesDir()
            boolean r1 = r9.exists()
            if (r1 != 0) goto Lce
            r9.mkdirs()
        Lce:
            boolean r1 = r9.exists()
            if (r1 == 0) goto Lda
            java.lang.String r9 = r9.getAbsolutePath()
            r2 = r9
            goto Ldb
        Lda:
            r2 = r0
        Ldb:
            return r2
    }

    public static java.util.List<com.ss.android.download.api.download.DownloadStatusChangeListener> rg(java.util.Map<java.lang.Integer, java.lang.Object> r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r3 == 0) goto L42
            boolean r1 = r3.isEmpty()
            if (r1 == 0) goto Le
            goto L42
        Le:
            java.util.Collection r3 = r3.values()
            java.util.Iterator r3 = r3.iterator()
        L16:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L42
            java.lang.Object r1 = r3.next()
            boolean r2 = r1 instanceof com.ss.android.download.api.download.DownloadStatusChangeListener
            if (r2 == 0) goto L2a
            com.ss.android.download.api.download.DownloadStatusChangeListener r1 = (com.ss.android.download.api.download.DownloadStatusChangeListener) r1
            r0.add(r1)
            goto L16
        L2a:
            boolean r2 = r1 instanceof java.lang.ref.SoftReference
            if (r2 == 0) goto L16
            java.lang.ref.SoftReference r1 = (java.lang.ref.SoftReference) r1
            java.lang.Object r2 = r1.get()
            boolean r2 = r2 instanceof com.ss.android.download.api.download.DownloadStatusChangeListener
            if (r2 == 0) goto L16
            java.lang.Object r1 = r1.get()
            com.ss.android.download.api.download.DownloadStatusChangeListener r1 = (com.ss.android.download.api.download.DownloadStatusChangeListener) r1
            r0.add(r1)
            goto L16
        L42:
            return r0
    }

    private boolean rg(int r5) {
            r4 = this;
            com.ss.android.downloadlib.addownload.model.pp r0 = r4.df
            com.ss.android.download.api.download.DownloadController r0 = r0.pt
            int r0 = r0.getDownloadMode()
            r1 = 2
            r2 = 1
            if (r0 != r1) goto Lf
            if (r5 != r1) goto Lf
            return r2
        Lf:
            com.ss.android.downloadlib.addownload.model.pp r0 = r4.df
            com.ss.android.download.api.download.DownloadController r0 = r0.pt
            int r0 = r0.getDownloadMode()
            r3 = 0
            if (r0 != r1) goto L29
            if (r5 != r2) goto L29
            org.json.JSONObject r5 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r0 = "disable_lp_if_market"
            int r5 = r5.optInt(r0, r3)
            if (r5 != r2) goto L29
            return r2
        L29:
            return r3
    }

    public java.lang.String df() {
            r2 = this;
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.String r1 = android.os.Environment.DIRECTORY_DOWNLOADS
            java.io.File r0 = r0.getExternalFilesDir(r1)
            if (r0 == 0) goto L20
            boolean r1 = r0.exists()
            if (r1 != 0) goto L15
            r0.mkdirs()
        L15:
            boolean r1 = r0.exists()
            if (r1 == 0) goto L20
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
        L20:
            r0 = 0
            return r0
    }

    public void df(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            com.ss.android.downloadlib.addownload.fw$df r0 = r1.pp
            if (r0 == 0) goto La
            r0.rg(r2)
            r2 = 0
            r1.pp = r2
        La:
            return
    }

    boolean pt(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            boolean r0 = r1.c()
            if (r0 != 0) goto Lf
            boolean r2 = r1.pp(r2)
            if (r2 == 0) goto Ld
            goto Lf
        Ld:
            r2 = 0
            goto L10
        Lf:
            r2 = 1
        L10:
            return r2
    }

    void q(com.ss.android.socialbase.downloader.model.DownloadInfo r5) {
            r4 = this;
            com.ss.android.downloadlib.addownload.model.pp r0 = r4.df
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            boolean r0 = com.ss.android.downloadlib.addownload.ux.rg(r0)
            if (r0 == 0) goto L2b
            boolean r0 = r4.q
            if (r0 != 0) goto L2b
            r0 = 1
            if (r5 == 0) goto L1d
            java.lang.String r5 = r5.getTargetFilePath()
            boolean r5 = com.ss.android.downloadlib.utils.b.df(r5)
            if (r5 == 0) goto L1d
            r5 = r0
            goto L1e
        L1d:
            r5 = 2
        L1e:
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            com.ss.android.downloadlib.addownload.model.pp r2 = r4.df
            java.lang.String r3 = "file_status"
            r1.rg(r3, r5, r2)
            r4.q = r0
        L2b:
            return
    }

    int rg(android.content.Context r12, com.ss.android.socialbase.downloader.depend.IDownloadListener r13) {
            r11 = this;
            r0 = 0
            if (r12 != 0) goto L4
            return r0
        L4:
            com.ss.android.downloadlib.addownload.model.pp r1 = r11.df
            com.ss.android.download.api.download.DownloadModel r1 = r1.df
            java.util.Map r1 = r1.getHeaders()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            org.json.JSONObject r3 = com.ss.android.downloadlib.addownload.bm.rz()
            r4 = 1
            java.lang.String r5 = "enable_send_click_id_in_apk"
            int r3 = r3.optInt(r5, r4)
            if (r3 != r4) goto L3d
            com.ss.android.downloadlib.addownload.model.pp r3 = r11.df
            com.ss.android.download.api.download.DownloadModel r3 = r3.df
            java.lang.String r3 = r3.getLogExtra()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L3d
            com.ss.android.downloadlib.addownload.model.pp r3 = r11.df
            com.ss.android.download.api.download.DownloadModel r3 = r3.df
            java.lang.String r3 = r3.getLogExtra()
            com.ss.android.socialbase.downloader.model.HttpHeader r3 = r11.rg(r3)
            if (r3 == 0) goto L3d
            r2.add(r3)
        L3d:
            if (r1 == 0) goto L6a
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L47:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L6a
            java.lang.Object r3 = r1.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            if (r3 == 0) goto L47
            com.ss.android.socialbase.downloader.model.HttpHeader r5 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.Object r6 = r3.getKey()
            java.lang.String r6 = (java.lang.String) r6
            java.lang.Object r3 = r3.getValue()
            java.lang.String r3 = (java.lang.String) r3
            r5.<init>(r6, r3)
            r2.add(r5)
            goto L47
        L6a:
            com.ss.android.downloadlib.addownload.model.pp r1 = r11.df
            com.ss.android.download.api.download.DownloadModel r1 = r1.df
            long r5 = r1.getId()
            java.lang.String r1 = java.lang.String.valueOf(r5)
            com.ss.android.downloadlib.addownload.model.pp r3 = r11.df
            com.ss.android.download.api.download.DownloadModel r3 = r3.df
            java.lang.String r3 = r3.getNotificationJumpUrl()
            com.ss.android.downloadlib.addownload.model.pp r5 = r11.df
            com.ss.android.download.api.download.DownloadModel r5 = r5.df
            boolean r5 = r5.isShowToast()
            com.ss.android.downloadlib.addownload.model.pp r6 = r11.df
            com.ss.android.download.api.download.DownloadModel r6 = r6.df
            int r6 = r6.getModelType()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r1 = com.ss.android.downloadlib.utils.q.rg(r1, r3, r5, r6)
            com.ss.android.downloadlib.addownload.model.pp r3 = r11.df
            com.ss.android.download.api.download.DownloadModel r3 = r3.df
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.downloadlib.utils.pt.df(r3)
            com.ss.android.downloadlib.addownload.model.pp r5 = r11.df
            com.ss.android.download.api.download.DownloadModel r5 = r5.df
            org.json.JSONObject r5 = com.ss.android.downloadlib.utils.pt.rg(r5)
            com.ss.android.downloadlib.addownload.model.pp r6 = r11.df
            com.ss.android.download.api.download.DownloadController r6 = r6.pt
            boolean r6 = r6.enableAH()
            if (r6 != 0) goto Lbe
            org.json.JSONObject r5 = com.ss.android.downloadlib.utils.b.rg(r5)
            org.json.JSONArray r6 = new org.json.JSONArray
            r6.<init>()
            java.lang.String r7 = "ah_plans"
            com.ss.android.downloadlib.utils.b.rg(r5, r7, r6)
        Lbe:
            com.ss.android.downloadlib.addownload.model.pp r6 = r11.df
            com.ss.android.download.api.download.DownloadModel r6 = r6.df
            int r6 = r6.getExecutorGroup()
            com.ss.android.downloadlib.addownload.model.pp r7 = r11.df
            com.ss.android.download.api.download.DownloadModel r7 = r7.df
            boolean r7 = r7.isAd()
            if (r7 != 0) goto Lda
            com.ss.android.downloadlib.addownload.model.pp r7 = r11.df
            com.ss.android.download.api.download.DownloadModel r7 = r7.df
            boolean r7 = com.ss.android.downloadlib.addownload.ux.df(r7)
            if (r7 == 0) goto Ldb
        Lda:
            r6 = 4
        Ldb:
            java.lang.String r7 = r11.rg(r3)
            com.ss.android.downloadlib.addownload.model.pp r8 = r11.df
            com.ss.android.download.api.download.DownloadModel r8 = r8.df
            java.lang.String r8 = r8.getDownloadUrl()
            int r8 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadId(r8, r7)
            android.content.Context r9 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r9 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r9)
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r9.getDownloadInfo(r8)
            if (r8 == 0) goto L107
            r9 = 3
            com.ss.android.downloadlib.addownload.model.pp r10 = r11.df
            com.ss.android.download.api.download.DownloadModel r10 = r10.df
            int r10 = r10.getModelType()
            if (r9 != r10) goto L107
            r8.setFirstDownload(r4)
        L107:
            com.ss.android.socialbase.appdownloader.c r8 = new com.ss.android.socialbase.appdownloader.c
            com.ss.android.downloadlib.addownload.model.pp r9 = r11.df
            com.ss.android.download.api.download.DownloadModel r9 = r9.df
            java.lang.String r9 = r9.getDownloadUrl()
            r8.<init>(r12, r9)
            com.ss.android.downloadlib.addownload.model.pp r12 = r11.df
            com.ss.android.download.api.download.DownloadModel r12 = r12.df
            java.util.List r12 = r12.getBackupUrls()
            com.ss.android.socialbase.appdownloader.c r12 = r8.df(r12)
            com.ss.android.downloadlib.addownload.model.pp r8 = r11.df
            com.ss.android.download.api.download.DownloadModel r8 = r8.df
            java.lang.String r8 = r8.getName()
            com.ss.android.socialbase.appdownloader.c r12 = r12.rg(r8)
            com.ss.android.socialbase.appdownloader.c r12 = r12.pt(r1)
            com.ss.android.socialbase.appdownloader.c r12 = r12.rg(r2)
            com.ss.android.downloadlib.addownload.model.pp r1 = r11.df
            com.ss.android.download.api.download.DownloadModel r1 = r1.df
            boolean r1 = r1.isShowNotification()
            com.ss.android.socialbase.appdownloader.c r12 = r12.rg(r1)
            com.ss.android.downloadlib.addownload.model.pp r1 = r11.df
            com.ss.android.download.api.download.DownloadModel r1 = r1.df
            boolean r1 = r1.isNeedWifi()
            com.ss.android.socialbase.appdownloader.c r12 = r12.q(r1)
            com.ss.android.downloadlib.addownload.model.pp r1 = r11.df
            com.ss.android.download.api.download.DownloadModel r1 = r1.df
            java.lang.String r1 = r1.getFileName()
            com.ss.android.socialbase.appdownloader.c r12 = r12.df(r1)
            com.ss.android.socialbase.appdownloader.c r12 = r12.q(r7)
            com.ss.android.downloadlib.addownload.model.pp r1 = r11.df
            com.ss.android.download.api.download.DownloadModel r1 = r1.df
            java.lang.String r1 = r1.getAppIcon()
            com.ss.android.socialbase.appdownloader.c r12 = r12.bm(r1)
            com.ss.android.downloadlib.addownload.model.pp r1 = r11.df
            com.ss.android.download.api.download.DownloadModel r1 = r1.df
            java.lang.String r1 = r1.getMd5()
            com.ss.android.socialbase.appdownloader.c r12 = r12.fw(r1)
            com.ss.android.downloadlib.addownload.model.pp r1 = r11.df
            com.ss.android.download.api.download.DownloadModel r1 = r1.df
            java.lang.String r1 = r1.getSdkMonitorScene()
            com.ss.android.socialbase.appdownloader.c r12 = r12.rz(r1)
            com.ss.android.downloadlib.addownload.model.pp r1 = r11.df
            com.ss.android.download.api.download.DownloadModel r1 = r1.df
            long r1 = r1.getExpectFileLength()
            com.ss.android.socialbase.appdownloader.c r12 = r12.rg(r1)
            com.ss.android.socialbase.appdownloader.c r12 = r12.rg(r13)
            com.ss.android.downloadlib.addownload.model.pp r13 = r11.df
            com.ss.android.download.api.download.DownloadModel r13 = r13.df
            boolean r13 = r13.needIndependentProcess()
            if (r13 != 0) goto L1a5
            java.lang.String r13 = "need_independent_process"
            int r13 = r3.optInt(r13, r0)
            if (r13 != r4) goto L1a3
            goto L1a5
        L1a3:
            r13 = r0
            goto L1a6
        L1a5:
            r13 = r4
        L1a6:
            com.ss.android.socialbase.appdownloader.c r12 = r12.hq(r13)
            com.ss.android.downloadlib.addownload.model.pp r13 = r11.df
            com.ss.android.download.api.download.DownloadModel r13 = r13.df
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r13 = r13.getDownloadFileUriProvider()
            com.ss.android.socialbase.appdownloader.c r12 = r12.rg(r13)
            com.ss.android.downloadlib.addownload.model.pp r13 = r11.df
            com.ss.android.download.api.download.DownloadModel r13 = r13.df
            boolean r13 = r13.autoInstallWithoutNotification()
            com.ss.android.socialbase.appdownloader.c r12 = r12.df(r13)
            com.ss.android.downloadlib.addownload.model.pp r13 = r11.df
            com.ss.android.download.api.download.DownloadModel r13 = r13.df
            java.lang.String r13 = r13.getPackageName()
            com.ss.android.socialbase.appdownloader.c r12 = r12.c(r13)
            r13 = 1000(0x3e8, float:1.401E-42)
            com.ss.android.socialbase.appdownloader.c r12 = r12.pt(r13)
            r13 = 100
            com.ss.android.socialbase.appdownloader.c r12 = r12.pp(r13)
            com.ss.android.socialbase.appdownloader.c r12 = r12.rg(r5)
            com.ss.android.socialbase.appdownloader.c r12 = r12.rz(r4)
            com.ss.android.socialbase.appdownloader.c r12 = r12.bm(r4)
            r13 = 5
            java.lang.String r1 = "retry_count"
            int r13 = r3.optInt(r1, r13)
            com.ss.android.socialbase.appdownloader.c r12 = r12.df(r13)
            java.lang.String r13 = "backup_url_retry_count"
            int r13 = r3.optInt(r13, r0)
            com.ss.android.socialbase.appdownloader.c r12 = r12.q(r13)
            com.ss.android.socialbase.appdownloader.c r12 = r12.bm(r4)
            java.lang.String r13 = "need_head_connection"
            int r13 = r3.optInt(r13, r0)
            if (r13 != r4) goto L209
            r13 = r4
            goto L20a
        L209:
            r13 = r0
        L20a:
            com.ss.android.socialbase.appdownloader.c r12 = r12.oh(r13)
            java.lang.String r13 = "need_https_to_http_retry"
            int r13 = r3.optInt(r13, r0)
            if (r13 != r4) goto L218
            r13 = r4
            goto L219
        L218:
            r13 = r0
        L219:
            com.ss.android.socialbase.appdownloader.c r12 = r12.pt(r13)
            java.lang.String r13 = "need_chunk_downgrade_retry"
            int r13 = r3.optInt(r13, r4)
            if (r13 != r4) goto L227
            r13 = r4
            goto L228
        L227:
            r13 = r0
        L228:
            com.ss.android.socialbase.appdownloader.c r12 = r12.ux(r13)
            java.lang.String r13 = "need_retry_delay"
            int r13 = r3.optInt(r13, r0)
            if (r13 != r4) goto L236
            r13 = r4
            goto L237
        L236:
            r13 = r0
        L237:
            com.ss.android.socialbase.appdownloader.c r12 = r12.fw(r13)
            java.lang.String r13 = "retry_delay_time_array"
            java.lang.String r13 = r3.optString(r13)
            com.ss.android.socialbase.appdownloader.c r12 = r12.ux(r13)
            java.lang.String r13 = "need_reuse_runnable"
            int r13 = r3.optInt(r13, r0)
            if (r13 != r4) goto L24f
            r13 = r4
            goto L250
        L24f:
            r13 = r0
        L250:
            com.ss.android.socialbase.appdownloader.c r12 = r12.b(r13)
            com.ss.android.socialbase.appdownloader.c r12 = r12.c(r6)
            com.ss.android.downloadlib.addownload.model.pp r13 = r11.df
            com.ss.android.download.api.download.DownloadModel r13 = r13.df
            boolean r13 = r13.isAutoInstall()
            com.ss.android.socialbase.appdownloader.c r12 = r12.un(r13)
            com.ss.android.downloadlib.addownload.model.pp r13 = r11.df
            com.ss.android.download.api.download.DownloadModel r13 = r13.df
            boolean r13 = r13.distinctDir()
            com.ss.android.socialbase.appdownloader.c r12 = r12.v(r13)
            com.ss.android.downloadlib.addownload.model.pp r13 = r11.df
            com.ss.android.download.api.download.DownloadModel r13 = r13.df
            java.lang.String r13 = r13.getMimeType()
            boolean r13 = android.text.TextUtils.isEmpty(r13)
            if (r13 != 0) goto L28a
            com.ss.android.downloadlib.addownload.model.pp r13 = r11.df
            com.ss.android.download.api.download.DownloadModel r13 = r13.df
            java.lang.String r13 = r13.getMimeType()
            r12.pp(r13)
            goto L28f
        L28a:
            java.lang.String r13 = "application/vnd.android.package-archive"
            r12.pp(r13)
        L28f:
            java.lang.String r13 = "notification_opt_2"
            int r13 = r3.optInt(r13, r0)
            if (r13 != r4) goto L29d
            r12.rg(r0)
            r12.df(r4)
        L29d:
            r13 = 0
            java.lang.String r1 = "clear_space_use_disk_handler"
            int r0 = r3.optInt(r1, r0)
            if (r0 != r4) goto L2ae
            com.ss.android.downloadlib.addownload.df.rg r13 = new com.ss.android.downloadlib.addownload.df.rg
            r13.<init>()
            r12.rg(r13)
        L2ae:
            com.ss.android.downloadlib.addownload.model.pp r0 = r11.df
            boolean r1 = r11.q()
            int r12 = com.ss.android.downloadlib.addownload.ux.rg(r0, r1, r12)
            if (r13 == 0) goto L2bd
            r13.rg(r12)
        L2bd:
            return r12
    }

    void rg() {
            r1 = this;
            com.ss.android.downloadlib.addownload.fw$df r0 = r1.pp
            if (r0 != 0) goto Lb
            com.ss.android.downloadlib.addownload.fw$3 r0 = new com.ss.android.downloadlib.addownload.fw$3
            r0.<init>(r1)
            r1.pp = r0
        Lb:
            return
    }

    public void rg(long r2) {
            r1 = this;
            r1.rg = r2
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r2 = r0.pp(r2)
            r1.df = r2
            boolean r2 = r2.re()
            if (r2 == 0) goto L1b
            com.ss.android.downloadlib.exception.q r2 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r3 = "setAdId ModelBox notValid"
            r2.rg(r3)
        L1b:
            return
    }

    @Override
    public void rg(android.os.Message r1) {
            r0 = this;
            return
    }

    void rg(android.os.Message r13, com.ss.android.download.api.model.DownloadShortInfo r14, java.util.Map<java.lang.Integer, java.lang.Object> r15) {
            r12 = this;
            if (r13 == 0) goto Lfd
            int r0 = r13.what
            r1 = 3
            if (r0 == r1) goto L9
            goto Lfd
        L9:
            java.lang.Object r0 = r13.obj
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            int r2 = r13.arg1
            r3 = 0
            r4 = 2
            r5 = 1
            if (r2 != r5) goto L15
            goto L42
        L15:
            int r2 = r13.arg1
            r6 = 6
            if (r2 != r6) goto L1b
            goto L42
        L1b:
            int r13 = r13.arg1
            if (r13 != r4) goto L42
            boolean r13 = r0.getIsFirstDownload()
            if (r13 == 0) goto L3b
            com.ss.android.downloadlib.fw r13 = com.ss.android.downloadlib.fw.rg()
            com.ss.android.downloadlib.addownload.model.pp r2 = r12.df
            com.ss.android.download.api.download.DownloadModel r2 = r2.df
            com.ss.android.downloadlib.addownload.model.pp r6 = r12.df
            com.ss.android.download.api.download.DownloadController r6 = r6.pt
            com.ss.android.downloadlib.addownload.model.pp r7 = r12.df
            com.ss.android.download.api.download.DownloadEventConfig r7 = r7.q
            r13.rg(r2, r6, r7)
            r0.setFirstDownload(r3)
        L3b:
            com.ss.android.downloadlib.event.AdEventHandler r13 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            r13.rg(r0)
        L42:
            r14.updateFromNewDownloadInfo(r0)
            com.ss.android.downloadlib.addownload.rz.rg(r14)
            int r13 = r0.getStatus()
            int r13 = com.ss.android.socialbase.appdownloader.q.rg(r13)
            long r6 = r0.getTotalBytes()
            r8 = 0
            int r2 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r2 <= 0) goto L63
            long r8 = r0.getCurBytes()
            r10 = 100
            long r8 = r8 * r10
            long r8 = r8 / r6
            int r3 = (int) r8
        L63:
            if (r2 > 0) goto L71
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r6 = "fix_click_start"
            boolean r2 = r2.optBugFix(r6)
            if (r2 == 0) goto L7b
        L71:
            com.ss.android.downloadlib.addownload.fw$df r2 = r12.pp
            if (r2 == 0) goto L7b
            r2.rg(r0)
            r2 = 0
            r12.pp = r2
        L7b:
            java.util.List r2 = rg(r15)
            java.util.Iterator r2 = r2.iterator()
        L83:
            boolean r6 = r2.hasNext()
            if (r6 == 0) goto Lfd
            java.lang.Object r6 = r2.next()
            com.ss.android.download.api.download.DownloadStatusChangeListener r6 = (com.ss.android.download.api.download.DownloadStatusChangeListener) r6
            if (r13 == r5) goto Ld1
            if (r13 == r4) goto Lc5
            if (r13 == r1) goto L96
            goto L83
        L96:
            int r7 = r0.getStatus()
            r8 = -4
            if (r7 != r8) goto La1
            r6.onIdle()
            goto L83
        La1:
            int r7 = r0.getStatus()
            r8 = -1
            if (r7 != r8) goto Lac
            r6.onDownloadFailed(r14)
            goto L83
        Lac:
            int r7 = r0.getStatus()
            r8 = -3
            if (r7 != r8) goto L83
            com.ss.android.downloadlib.addownload.model.pp r7 = r12.df
            com.ss.android.download.api.download.DownloadModel r7 = r7.df
            boolean r7 = com.ss.android.downloadlib.utils.b.rg(r7)
            if (r7 == 0) goto Lc1
            r6.onInstalled(r14)
            goto L83
        Lc1:
            r6.onDownloadFinished(r14)
            goto L83
        Lc5:
            int r7 = r0.getId()
            int r7 = com.ss.android.downloadlib.addownload.rz.rg(r7, r3)
            r6.onDownloadPaused(r14, r7)
            goto L83
        Ld1:
            int r7 = r0.getStatus()
            r8 = 11
            if (r7 == r8) goto Le5
            int r7 = r0.getId()
            int r7 = com.ss.android.downloadlib.addownload.rz.rg(r7, r3)
            r6.onDownloadActive(r14, r7)
            goto L83
        Le5:
            java.util.List r6 = df(r15)
            java.util.Iterator r6 = r6.iterator()
        Led:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto L83
            java.lang.Object r7 = r6.next()
            com.ss.android.download.api.download.rg r7 = (com.ss.android.download.api.download.rg) r7
            r7.rg(r0)
            goto Led
        Lfd:
            return
    }

    void rg(com.ss.android.download.api.config.n r3) {
            r2 = this;
            com.ss.android.downloadlib.addownload.model.pp r0 = r2.df
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            java.lang.String r0 = r0.getFilePath()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3e
            com.ss.android.downloadlib.addownload.model.pp r0 = r2.df
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            java.lang.String r0 = r0.getFilePath()
            java.io.File r1 = android.os.Environment.getDataDirectory()
            java.lang.String r1 = r1.getAbsolutePath()
            boolean r1 = r0.startsWith(r1)
            if (r1 == 0) goto L28
            r3.rg()
            return
        L28:
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L3e
            java.io.File r1 = r1.getExternalCacheDir()     // Catch: java.lang.Exception -> L3e
            java.lang.String r1 = r1.getParent()     // Catch: java.lang.Exception -> L3e
            boolean r0 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L3e
            if (r0 == 0) goto L3e
            r3.rg()     // Catch: java.lang.Exception -> L3e
            return
        L3e:
            com.ss.android.downloadlib.addownload.fw$1 r0 = new com.ss.android.downloadlib.addownload.fw$1
            r0.<init>(r2, r3)
            r2.df(r0)
            return
    }

    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            r0 = 0
            r1.q = r0
            r1.df(r2)
            return
    }

    void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r6, com.ss.android.download.api.model.DownloadShortInfo r7, java.util.List<com.ss.android.download.api.download.DownloadStatusChangeListener> r8) {
            r5 = this;
            boolean r0 = r8.isEmpty()
            if (r0 == 0) goto L7
            return
        L7:
            if (r6 == 0) goto La7
            if (r7 != 0) goto Ld
            goto La7
        Ld:
            r0 = 0
            long r1 = r6.getTotalBytes()     // Catch: java.lang.Exception -> L26
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L2a
            long r1 = r6.getCurBytes()     // Catch: java.lang.Exception -> L26
            r3 = 100
            long r1 = r1 * r3
            long r3 = r6.getTotalBytes()     // Catch: java.lang.Exception -> L26
            long r1 = r1 / r3
            int r1 = (int) r1
            goto L2b
        L26:
            r1 = move-exception
            r1.printStackTrace()
        L2a:
            r1 = r0
        L2b:
            if (r1 >= 0) goto L2e
            goto L2f
        L2e:
            r0 = r1
        L2f:
            r7.updateFromNewDownloadInfo(r6)
            com.ss.android.downloadlib.addownload.rz.rg(r7)
            java.util.Iterator r8 = r8.iterator()
        L39:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto La6
            java.lang.Object r1 = r8.next()
            com.ss.android.download.api.download.DownloadStatusChangeListener r1 = (com.ss.android.download.api.download.DownloadStatusChangeListener) r1
            int r2 = r6.getStatus()
            switch(r2) {
                case -4: goto L91;
                case -3: goto L7f;
                case -2: goto L73;
                case -1: goto L6f;
                case 0: goto L91;
                case 1: goto L63;
                case 2: goto L63;
                case 3: goto L63;
                case 4: goto L63;
                case 5: goto L63;
                case 6: goto L4c;
                case 7: goto L63;
                case 8: goto L63;
                case 9: goto L4c;
                case 10: goto L4c;
                case 11: goto L4d;
                default: goto L4c;
            }
        L4c:
            goto L39
        L4d:
            boolean r2 = r1 instanceof com.ss.android.download.api.download.rg
            if (r2 == 0) goto L57
            com.ss.android.download.api.download.rg r1 = (com.ss.android.download.api.download.rg) r1
            r1.rg(r6)
            goto L39
        L57:
            int r2 = r6.getId()
            int r2 = com.ss.android.downloadlib.addownload.rz.rg(r2, r0)
            r1.onDownloadActive(r7, r2)
            goto L39
        L63:
            int r2 = r6.getId()
            int r2 = com.ss.android.downloadlib.addownload.rz.rg(r2, r0)
            r1.onDownloadActive(r7, r2)
            goto L39
        L6f:
            r1.onDownloadFailed(r7)
            goto L39
        L73:
            int r2 = r6.getId()
            int r2 = com.ss.android.downloadlib.addownload.rz.rg(r2, r0)
            r1.onDownloadPaused(r7, r2)
            goto L39
        L7f:
            com.ss.android.downloadlib.addownload.model.pp r2 = r5.df
            com.ss.android.download.api.download.DownloadModel r2 = r2.df
            boolean r2 = com.ss.android.downloadlib.utils.b.rg(r2)
            if (r2 == 0) goto L8d
            r1.onInstalled(r7)
            goto L39
        L8d:
            r1.onDownloadFinished(r7)
            goto L39
        L91:
            com.ss.android.downloadlib.addownload.model.pp r2 = r5.df
            com.ss.android.download.api.download.DownloadModel r2 = r2.df
            boolean r2 = com.ss.android.downloadlib.utils.b.rg(r2)
            if (r2 == 0) goto La2
            r2 = -3
            r7.status = r2
            r1.onInstalled(r7)
            goto L39
        La2:
            r1.onIdle()
            goto L39
        La6:
            return
        La7:
            java.util.Iterator r6 = r8.iterator()
        Lab:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto Lbb
            java.lang.Object r7 = r6.next()
            com.ss.android.download.api.download.DownloadStatusChangeListener r7 = (com.ss.android.download.api.download.DownloadStatusChangeListener) r7
            r7.onIdle()
            goto Lab
        Lbb:
            return
    }

    void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r6, boolean r7) {
            r5 = this;
            com.ss.android.downloadlib.addownload.model.pp r0 = r5.df
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            if (r0 == 0) goto L101
            if (r6 == 0) goto L101
            int r0 = r6.getId()
            if (r0 != 0) goto L10
            goto L101
        L10:
            int r0 = r6.getStatus()
            r1 = -1
            r2 = 2
            if (r0 == r1) goto L4c
            r1 = -4
            if (r0 != r1) goto L1c
            goto L4c
        L1c:
            com.ss.android.downloadlib.addownload.model.pp r1 = r5.df
            com.ss.android.download.api.download.DownloadModel r1 = r1.df
            boolean r1 = com.ss.android.downloadlib.addownload.ux.rg(r1)
            if (r1 == 0) goto L30
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r3 = r5.rg
            r1.rg(r3, r2)
            goto L55
        L30:
            if (r7 == 0) goto L55
            com.ss.android.downloadlib.event.df r1 = com.ss.android.downloadlib.event.df.rg()
            boolean r1 = r1.q()
            if (r1 == 0) goto L55
            r1 = -2
            if (r0 == r1) goto L42
            r1 = -3
            if (r0 != r1) goto L55
        L42:
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r3 = r5.rg
            r1.rg(r3, r2)
            goto L55
        L4c:
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r3 = r5.rg
            r1.rg(r3, r2)
        L55:
            switch(r0) {
                case -4: goto Le2;
                case -3: goto L9a;
                case -2: goto L66;
                case -1: goto Le2;
                case 0: goto L58;
                case 1: goto L5a;
                case 2: goto L5a;
                case 3: goto L5a;
                case 4: goto L5a;
                case 5: goto L5a;
                case 6: goto L58;
                case 7: goto L5a;
                case 8: goto L5a;
                default: goto L58;
            }
        L58:
            goto L101
        L5a:
            com.ss.android.downloadlib.event.AdEventHandler r7 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r0 = r5.rg
            r2 = 3
            r7.rg(r0, r2, r6)
            goto L101
        L66:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r3 = r5.rg
            r1 = 4
            r0.rg(r3, r1, r6)
            if (r7 == 0) goto L101
            com.ss.android.downloadlib.event.df r6 = com.ss.android.downloadlib.event.df.rg()
            boolean r6 = r6.df()
            if (r6 == 0) goto L101
            com.ss.android.downloadlib.event.df r6 = com.ss.android.downloadlib.event.df.rg()
            long r0 = r5.rg
            com.ss.android.downloadlib.addownload.model.pp r7 = r5.df
            com.ss.android.download.api.download.DownloadModel r7 = r7.df
            java.lang.String r7 = r7.getLogExtra()
            boolean r6 = r6.df(r0, r7)
            if (r6 != 0) goto L101
            com.ss.android.downloadlib.event.AdEventHandler r6 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r0 = r5.rg
            r6.rg(r0, r2)
            goto L101
        L9a:
            com.ss.android.downloadlib.addownload.model.pp r0 = r5.df
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            boolean r0 = com.ss.android.downloadlib.utils.b.rg(r0)
            if (r0 == 0) goto Lae
            com.ss.android.downloadlib.exception.q r6 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r7 = "SUCCESSED isInstalledApp"
            r6.df(r7)
            goto L101
        Lae:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r3 = r5.rg
            r1 = 5
            r0.rg(r3, r1, r6)
            if (r7 == 0) goto L101
            com.ss.android.downloadlib.event.df r6 = com.ss.android.downloadlib.event.df.rg()
            boolean r6 = r6.df()
            if (r6 == 0) goto L101
            com.ss.android.downloadlib.event.df r6 = com.ss.android.downloadlib.event.df.rg()
            long r0 = r5.rg
            com.ss.android.downloadlib.addownload.model.pp r7 = r5.df
            com.ss.android.download.api.download.DownloadModel r7 = r7.df
            java.lang.String r7 = r7.getLogExtra()
            boolean r6 = r6.df(r0, r7)
            if (r6 != 0) goto L101
            com.ss.android.downloadlib.event.AdEventHandler r6 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r0 = r5.rg
            r6.rg(r0, r2)
            goto L101
        Le2:
            r5.rg()
            com.ss.android.downloadlib.addownload.model.c r7 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = new com.ss.android.downloadad.api.rg.df
            com.ss.android.downloadlib.addownload.model.pp r1 = r5.df
            com.ss.android.download.api.download.DownloadModel r1 = r1.df
            com.ss.android.downloadlib.addownload.model.pp r2 = r5.df
            com.ss.android.download.api.download.DownloadEventConfig r2 = r2.q
            com.ss.android.downloadlib.addownload.model.pp r3 = r5.df
            com.ss.android.download.api.download.DownloadController r3 = r3.pt
            int r6 = r6.getId()
            r0.<init>(r1, r2, r3, r6)
            r7.rg(r0)
        L101:
            return
    }

    boolean rg(android.content.Context r4, int r5, boolean r6) {
            r3 = this;
            com.ss.android.downloadlib.addownload.model.pp r4 = r3.df
            com.ss.android.download.api.download.DownloadModel r4 = r4.df
            boolean r4 = com.ss.android.downloadlib.utils.b.rg(r4)
            if (r4 == 0) goto L2a
            com.ss.android.downloadlib.addownload.model.c r4 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r5 = r3.df
            long r5 = r5.rg
            com.ss.android.downloadad.api.rg.df r4 = r4.pt(r5)
            if (r4 == 0) goto L23
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r5 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            int r4 = r4.qx()
            r5.cancelNotification(r4)
        L23:
            com.ss.android.downloadlib.addownload.model.pp r4 = r3.df
            boolean r4 = com.ss.android.downloadlib.df.rg.rg(r4)
            return r4
        L2a:
            boolean r4 = r3.rg(r5)
            r0 = 0
            r1 = 1
            if (r4 == 0) goto L67
            com.ss.android.downloadlib.addownload.model.pp r4 = r3.df
            com.ss.android.download.api.download.DownloadModel r4 = r4.df
            java.lang.String r4 = r4.getPackageName()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L67
            org.json.JSONObject r4 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r2 = "disable_market"
            int r4 = r4.optInt(r2)
            if (r4 == r1) goto L67
            com.ss.android.downloadlib.addownload.model.pp r4 = r3.df
            boolean r4 = com.ss.android.downloadlib.df.rg.rg(r4, r5)
            if (r4 == 0) goto L55
            return r1
        L55:
            com.ss.android.downloadlib.addownload.pp r4 = r3.pt
            boolean r4 = r4.rz()
            if (r4 == 0) goto L66
            com.ss.android.downloadlib.addownload.pp r4 = r3.pt
            boolean r4 = r4.pt(r1)
            if (r4 == 0) goto L66
            r0 = r1
        L66:
            return r0
        L67:
            if (r6 == 0) goto L82
            com.ss.android.downloadlib.addownload.model.pp r4 = r3.df
            com.ss.android.download.api.download.DownloadController r4 = r4.pt
            int r4 = r4.getDownloadMode()
            r5 = 4
            if (r4 != r5) goto L82
            com.ss.android.downloadlib.addownload.pp r4 = r3.pt
            boolean r4 = r4.pp()
            if (r4 != 0) goto L82
            com.ss.android.downloadlib.addownload.pp r4 = r3.pt
            r4.q(r1)
            return r1
        L82:
            return r0
    }

    boolean rg(boolean r2) {
            r1 = this;
            r0 = 1
            if (r2 != 0) goto Le
            com.ss.android.downloadlib.addownload.model.pp r2 = r1.df
            com.ss.android.download.api.download.DownloadController r2 = r2.pt
            int r2 = r2.getDownloadMode()
            if (r2 != r0) goto Le
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }
}
