package com.bykv.vk.openvk.downloadnew;

public class pt {
    private static java.util.Map<java.lang.Integer, com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter.OnEventLogHandler> c;
    public static boolean df;
    private static final com.ss.android.download.api.download.rg.rg fw = null;
    private static android.content.Context pp;
    private static final java.util.concurrent.atomic.AtomicBoolean pt = null;
    public static com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor q;
    public static volatile java.lang.String rg;








    private static class df implements com.ss.android.download.api.config.ux {



        private df() {
                r0 = this;
                r0.<init>()
                return
        }

        df(com.bykv.vk.openvk.downloadnew.pt.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void rg(java.lang.String r5, java.lang.String r6, java.util.Map<java.lang.String, java.lang.Object> r7, com.ss.android.download.api.config.r r8) {
                r4 = this;
                int r0 = r5.hashCode()
                r1 = 70454(0x11336, float:9.8727E-41)
                r2 = 1
                r3 = 0
                if (r0 == r1) goto L1b
                r1 = 2461856(0x2590a0, float:3.449795E-39)
                if (r0 == r1) goto L11
                goto L25
            L11:
                java.lang.String r0 = "POST"
                boolean r5 = r5.equals(r0)
                if (r5 == 0) goto L25
                r5 = r2
                goto L26
            L1b:
                java.lang.String r0 = "GET"
                boolean r5 = r5.equals(r0)
                if (r5 == 0) goto L25
                r5 = r3
                goto L26
            L25:
                r5 = -1
            L26:
                if (r5 == 0) goto L2a
                if (r5 == r2) goto L2b
            L2a:
                r2 = r3
            L2b:
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r5 = com.bykv.vk.openvk.downloadnew.pt.pt()
                if (r5 == 0) goto L3d
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r5 = com.bykv.vk.openvk.downloadnew.pt.pt()
                com.bykv.vk.openvk.downloadnew.pt$df$1 r0 = new com.bykv.vk.openvk.downloadnew.pt$df$1
                r0.<init>(r4, r8)
                r5.execute(r2, r6, r7, r0)
            L3d:
                return
        }

        @Override
        public void rg(java.lang.String r2, byte[] r3, java.lang.String r4, int r5, com.ss.android.download.api.config.r r6) {
                r1 = this;
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r5 = com.bykv.vk.openvk.downloadnew.pt.pt()
                if (r5 == 0) goto L12
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r5 = com.bykv.vk.openvk.downloadnew.pt.pt()
                com.bykv.vk.openvk.downloadnew.pt$df$2 r0 = new com.bykv.vk.openvk.downloadnew.pt$df$2
                r0.<init>(r1, r6)
                r5.postBody(r2, r3, r4, r0)
            L12:
                return
        }
    }

    public static class pp implements com.ss.android.socialbase.downloader.network.IDownloadHttpService {


        public pp() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.ss.android.socialbase.downloader.network.IDownloadHttpConnection downloadWithConnection(int r1, java.lang.String r2, java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r3) throws java.io.IOException {
                r0 = this;
                com.bykv.vk.openvk.downloadnew.q$rg r1 = com.bykv.vk.openvk.downloadnew.q.rg(r2, r3)
                if (r1 == 0) goto Lc
                com.bykv.vk.openvk.downloadnew.pt$pp$1 r2 = new com.bykv.vk.openvk.downloadnew.pt$pp$1
                r2.<init>(r0, r1)
                return r2
            Lc:
                r1 = 0
                return r1
        }
    }

    public static class pt implements com.ss.android.download.api.config.hq {
        private final java.lang.ref.WeakReference<android.content.Context> rg;


        public pt(android.content.Context r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.rg = r0
                return
        }

        private com.bykv.vk.openvk.downloadnew.core.DialogBuilder q(com.ss.android.download.api.model.DownloadAlertDialogInfo r3) {
                r2 = this;
                com.bykv.vk.openvk.downloadnew.core.DialogBuilder r0 = com.bykv.vk.openvk.downloadnew.core.DialogBuilder.builder()
                java.lang.String r1 = r3.df
                com.bykv.vk.openvk.downloadnew.core.DialogBuilder r0 = r0.setTitle(r1)
                java.lang.String r1 = r3.q
                com.bykv.vk.openvk.downloadnew.core.DialogBuilder r0 = r0.setMessage(r1)
                java.lang.String r1 = r3.pp
                com.bykv.vk.openvk.downloadnew.core.DialogBuilder r0 = r0.setNegativeBtnText(r1)
                java.lang.String r1 = r3.pt
                com.bykv.vk.openvk.downloadnew.core.DialogBuilder r0 = r0.setPositiveBtnText(r1)
                android.graphics.drawable.Drawable r1 = r3.fw
                com.bykv.vk.openvk.downloadnew.core.DialogBuilder r0 = r0.setIcon(r1)
                com.bykv.vk.openvk.downloadnew.pt$pt$1 r1 = new com.bykv.vk.openvk.downloadnew.pt$pt$1
                r1.<init>(r2, r3)
                com.bykv.vk.openvk.downloadnew.core.DialogBuilder r3 = r0.setDialogStatusChangedListener(r1)
                return r3
        }

        @Override
        public android.app.Dialog df(com.ss.android.download.api.model.DownloadAlertDialogInfo r1) {
                r0 = this;
                android.app.AlertDialog r1 = r0.rg(r1)
                return r1
        }

        public android.app.AlertDialog rg(com.ss.android.download.api.model.DownloadAlertDialogInfo r7) {
                r6 = this;
                r0 = 0
                if (r7 != 0) goto L4
                return r0
            L4:
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r1 = com.bykv.vk.openvk.downloadnew.pt.pt()
                if (r1 == 0) goto L3e
                android.content.Context r1 = r7.rg
                r2 = 0
                r3 = 1
                if (r1 == 0) goto L2c
                android.content.Context r1 = r7.rg
                boolean r1 = r1 instanceof android.app.Activity
                if (r1 == 0) goto L2c
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r0 = com.bykv.vk.openvk.downloadnew.pt.pt()
                android.content.Context r1 = r7.rg
                android.app.Activity r1 = (android.app.Activity) r1
                int r4 = r7.bm
                if (r4 != r3) goto L23
                r2 = r3
            L23:
                com.bykv.vk.openvk.downloadnew.core.DialogBuilder r7 = r6.q(r7)
                android.app.AlertDialog r7 = r0.showDialogBySelf(r1, r2, r7)
                return r7
            L2c:
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r1 = com.bykv.vk.openvk.downloadnew.pt.pt()
                java.lang.ref.WeakReference<android.content.Context> r4 = r6.rg
                int r5 = r7.bm
                if (r5 != r3) goto L37
                r2 = r3
            L37:
                com.bykv.vk.openvk.downloadnew.core.DialogBuilder r7 = r6.q(r7)
                r1.showDialogByDelegate(r4, r2, r7)
            L3e:
                return r0
        }

        @Override
        public void rg(int r1, android.content.Context r2, com.ss.android.download.api.download.DownloadModel r3, java.lang.String r4, android.graphics.drawable.Drawable r5, int r6) {
                r0 = this;
                boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lf
                if (r1 != 0) goto L2a
                r1 = 0
                android.widget.Toast r1 = android.widget.Toast.makeText(r2, r4, r1)     // Catch: java.lang.Exception -> Lf
                r1.show()     // Catch: java.lang.Exception -> Lf
                goto L2a
            Lf:
                r1 = move-exception
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "showToastWithDuration e "
                r2.append(r3)
                java.lang.String r1 = r1.getMessage()
                r2.append(r1)
                java.lang.String r1 = r2.toString()
                java.lang.String r2 = "LibUIFactory"
                com.ss.android.socialbase.downloader.logger.Logger.e(r2, r1)
            L2a:
                return
        }
    }

    private static class q implements com.ss.android.download.api.config.rz {


        public q() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void rg(android.app.Activity r1, int r2, java.lang.String[] r3, int[] r4) {
                r0 = this;
                return
        }

        @Override
        public void rg(android.app.Activity r3, java.lang.String[] r4, com.ss.android.download.api.config.n r5) {
                r2 = this;
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r0 = com.bykv.vk.openvk.downloadnew.pt.pt()
                if (r0 == 0) goto L12
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r0 = com.bykv.vk.openvk.downloadnew.pt.pt()
                com.bykv.vk.openvk.downloadnew.pt$q$1 r1 = new com.bykv.vk.openvk.downloadnew.pt$q$1
                r1.<init>(r2, r5)
                r0.requestPermission(r3, r4, r1)
            L12:
                return
        }

        @Override
        public boolean rg(android.content.Context r2, java.lang.String r3) {
                r1 = this;
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r0 = com.bykv.vk.openvk.downloadnew.pt.pt()
                if (r0 == 0) goto Lf
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r0 = com.bykv.vk.openvk.downloadnew.pt.pt()
                boolean r2 = r0.hasPermission(r2, r3)
                return r2
            Lf:
                r2 = 0
                return r2
        }
    }

    public static class rg implements com.ss.android.download.api.config.fw {
        public rg() {
                r0 = this;
                r0.<init>()
                return
        }

        private void q(com.ss.android.download.api.model.df r4) {
                r3 = this;
                if (r4 != 0) goto L3
                return
            L3:
                java.lang.Object r0 = r4.hq()
                r1 = 0
                boolean r2 = r0 instanceof org.json.JSONObject
                if (r2 == 0) goto Lf
                r1 = r0
                org.json.JSONObject r1 = (org.json.JSONObject) r1
            Lf:
                com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel r0 = com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel.builder()
                java.lang.String r2 = r4.df()
                com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel r0 = r0.setTag(r2)
                org.json.JSONObject r2 = r4.ux()
                com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel r0 = r0.setExtJson(r2)
                com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel r0 = r0.setMaterialMeta(r1)
                java.lang.String r1 = r4.q()
                com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel r0 = r0.setLabel(r1)
                java.lang.String r1 = r4.df()
                java.lang.String r2 = "download_notification"
                boolean r1 = r2.equals(r1)
                if (r1 != 0) goto L4a
                java.lang.String r4 = r4.df()
                java.lang.String r1 = "landing_h5_download_ad_button"
                boolean r4 = r1.equals(r4)
                if (r4 == 0) goto L48
                goto L4a
            L48:
                r4 = 0
                goto L4b
            L4a:
                r4 = 1
            L4b:
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r1 = com.bykv.vk.openvk.downloadnew.pt.pt()
                if (r1 == 0) goto L58
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r1 = com.bykv.vk.openvk.downloadnew.pt.pt()
                r1.executeLogUpload(r0, r4)
            L58:
                return
        }

        private void rg(com.ss.android.download.api.model.df r4, boolean r5) {
                r3 = this;
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r0 = com.bykv.vk.openvk.downloadnew.pt.pt()
                if (r0 != 0) goto L7
                return
            L7:
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r0 = com.bykv.vk.openvk.downloadnew.pt.pt()
                com.bykv.vk.openvk.TTDownloadEventLogger r0 = r0.getTTDownloadEventLogger()
                if (r0 == 0) goto L3a
                if (r4 != 0) goto L14
                goto L3a
            L14:
                boolean r1 = r0.shouldFilterOpenSdkLog()
                if (r1 == 0) goto L29
                com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r1 = com.bykv.vk.openvk.downloadnew.pt.pt()
                java.lang.String r2 = r4.toString()
                boolean r1 = r1.isOpenSdkEvent(r2)
                if (r1 == 0) goto L29
                return
            L29:
                if (r5 == 0) goto L33
                org.json.JSONObject r4 = com.bykv.vk.openvk.downloadnew.pt.rg(r4)
                r0.onV3Event(r4)
                goto L3a
            L33:
                org.json.JSONObject r4 = com.bykv.vk.openvk.downloadnew.pt.rg(r4)
                r0.onEvent(r4)
            L3a:
                return
        }

        @Override
        public void df(com.ss.android.download.api.model.df r3) {
                r2 = this;
                java.lang.String r0 = "LibEventLogger"
                java.lang.String r1 = "onEvent called"
                com.bykv.vk.openvk.api.rg.df(r0, r1)
                r0 = 0
                r2.rg(r3, r0)
                r2.q(r3)
                return
        }

        @Override
        public void rg(com.ss.android.download.api.model.df r3) {
                r2 = this;
                java.lang.String r0 = "LibEventLogger"
                java.lang.String r1 = "onV3Event"
                com.bykv.vk.openvk.api.rg.df(r0, r1)
                r0 = 1
                r2.rg(r3, r0)
                return
        }
    }

    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.bykv.vk.openvk.downloadnew.pt.pt = r0
            r0 = 1
            com.bykv.vk.openvk.downloadnew.pt.df = r0
            java.lang.String r0 = android.os.Environment.DIRECTORY_DOWNLOADS     // Catch: java.lang.Throwable -> L17
            java.io.File r0 = android.os.Environment.getExternalStoragePublicDirectory(r0)     // Catch: java.lang.Throwable -> L17
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Throwable -> L17
            com.bykv.vk.openvk.downloadnew.pt.rg = r0     // Catch: java.lang.Throwable -> L17
        L17:
            com.bykv.vk.openvk.downloadnew.pt$6 r0 = new com.bykv.vk.openvk.downloadnew.pt$6
            r0.<init>()
            com.bykv.vk.openvk.downloadnew.pt.fw = r0
            return
    }

    public pt() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean c() {
            r0 = 0
            return r0
    }

    private static org.json.JSONObject df(com.ss.android.download.api.model.df r4) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "category"
            java.lang.String r2 = r4.rg()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "tag"
            java.lang.String r2 = r4.df()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "label"
            java.lang.String r2 = r4.q()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "isAd"
            boolean r2 = r4.pt()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "adId"
            long r2 = r4.pp()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "logExtra"
            java.lang.String r2 = r4.c()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "extValue"
            long r2 = r4.fw()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "extJson"
            org.json.JSONObject r2 = r4.ux()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "paramsJson"
            org.json.JSONObject r2 = r4.rz()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "eventSource"
            int r2 = r4.b()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "extraObject"
            java.lang.Object r2 = r4.hq()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "clickTrackUrl"
            java.util.List r2 = r4.bm()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "isV3"
            boolean r2 = r4.oh()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "V3EventName"
            java.lang.String r2 = r4.f()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L8d
            java.lang.String r1 = "V3EventParams"
            org.json.JSONObject r4 = r4.v()     // Catch: org.json.JSONException -> L8d
            r0.put(r1, r4)     // Catch: org.json.JSONException -> L8d
            goto L91
        L8d:
            r4 = move-exception
            r4.printStackTrace()
        L91:
            return r0
    }

    public static void df() {
            com.ss.android.downloadlib.ux r0 = rg()
            r0.fw()
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r0 = pp()
            if (r0 == 0) goto L16
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r0 = pp()
            java.lang.String r1 = com.bykv.vk.openvk.downloadnew.pt.rg
            r0.clearAllData(r1)
        L16:
            return
    }

    static void df(java.lang.String r0) {
            q(r0)
            return
    }

    private static boolean df(android.content.Context r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            android.content.Context r5 = r5.getApplicationContext()
            java.lang.String r1 = r5.getPackageName()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L14
            java.lang.String r1 = ""
        L14:
            boolean r2 = c()
            if (r2 == 0) goto L2e
            com.ss.android.downloadlib.ux r2 = com.ss.android.downloadlib.ux.rg(r5)     // Catch: java.lang.Throwable -> L25
            java.lang.String r3 = "pangolin"
            com.ss.android.download.api.rg r2 = r2.rg(r3)     // Catch: java.lang.Throwable -> L25
            goto L36
        L25:
            com.ss.android.downloadlib.ux r2 = com.ss.android.downloadlib.ux.rg(r5)
            com.ss.android.download.api.rg r2 = r2.rg()
            goto L36
        L2e:
            com.ss.android.downloadlib.ux r2 = com.ss.android.downloadlib.ux.rg(r5)
            com.ss.android.download.api.rg r2 = r2.rg()
        L36:
            if (r2 != 0) goto L39
            return r0
        L39:
            com.ss.android.download.api.model.rg$rg r0 = new com.ss.android.download.api.model.rg$rg
            r0.<init>()
            java.lang.String r3 = "143"
            com.ss.android.download.api.model.rg$rg r0 = r0.df(r3)
            java.lang.String r3 = "open_news"
            com.ss.android.download.api.model.rg$rg r0 = r0.rg(r3)
            java.lang.String r3 = "5.1.1.4"
            com.ss.android.download.api.model.rg$rg r0 = r0.q(r3)
            r3 = 5114(0x13fa, float:7.166E-42)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            com.ss.android.download.api.model.rg$rg r0 = r0.pt(r3)
            com.ss.android.download.api.model.rg r0 = r0.rg()
            com.bykv.vk.openvk.downloadnew.pt$q r3 = new com.bykv.vk.openvk.downloadnew.pt$q
            r3.<init>()
            com.ss.android.download.api.rg r2 = r2.rg(r3)
            com.bykv.vk.openvk.downloadnew.pt$rg r3 = new com.bykv.vk.openvk.downloadnew.pt$rg
            r3.<init>()
            com.ss.android.download.api.rg r2 = r2.rg(r3)
            com.bykv.vk.openvk.downloadnew.pt$pt r3 = new com.bykv.vk.openvk.downloadnew.pt$pt
            r3.<init>(r5)
            com.ss.android.download.api.rg r2 = r2.rg(r3)
            com.bykv.vk.openvk.downloadnew.pt$df r3 = new com.bykv.vk.openvk.downloadnew.pt$df
            r4 = 0
            r3.<init>(r4)
            com.ss.android.download.api.rg r2 = r2.rg(r3)
            com.bykv.vk.openvk.downloadnew.pt$3 r3 = new com.bykv.vk.openvk.downloadnew.pt$3
            r3.<init>()
            com.ss.android.download.api.rg r2 = r2.rg(r3)
            com.bykv.vk.openvk.downloadnew.pt$2 r3 = new com.bykv.vk.openvk.downloadnew.pt$2
            r3.<init>()
            com.ss.android.download.api.rg r2 = r2.rg(r3)
            com.ss.android.download.api.rg r0 = r2.rg(r0)
            com.bykv.vk.openvk.downloadnew.pt$1 r2 = new com.bykv.vk.openvk.downloadnew.pt$1
            r2.<init>()
            com.ss.android.download.api.rg r0 = r0.rg(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = ".TTFileProvider"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.ss.android.download.api.rg r0 = r0.rg(r1)
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r1 = pp()
            if (r1 == 0) goto Lc6
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r1 = pp()
            org.json.JSONObject r1 = r1.getDownloadSettings()
            goto Lcb
        Lc6:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
        Lcb:
            com.ss.android.socialbase.downloader.downloader.DownloaderBuilder r1 = rg(r5, r1)
            com.ss.android.download.api.rg r0 = r0.rg(r1)
            r0.rg()
            com.ss.android.downloadlib.utils.rg.rg()
            com.ss.android.downloadlib.ux r0 = com.ss.android.downloadlib.ux.rg(r5)
            com.ss.android.downloadad.api.rg r0 = r0.pt()
            r1 = 1
            r0.rg(r1)
            com.ss.android.downloadlib.ux r5 = com.ss.android.downloadlib.ux.rg(r5)
            com.ss.android.download.api.download.rg.rg r0 = com.bykv.vk.openvk.downloadnew.pt.fw
            r5.rg(r0)
            com.ss.android.socialbase.appdownloader.pt r5 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.bykv.vk.openvk.downloadnew.pt$4 r0 = new com.bykv.vk.openvk.downloadnew.pt$4
            r0.<init>()
            r5.rg(r0)
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r5 = pp()
            com.bykv.vk.openvk.TTDownloadEventLogger r5 = r5.getTTDownloadEventLogger()
            if (r5 == 0) goto L107
            r5.onDownloadConfigReady()
        L107:
            return r1
    }

    private static android.content.Context getContext() {
            android.content.Context r0 = com.bykv.vk.openvk.downloadnew.pt.pp
            if (r0 != 0) goto L8
            android.content.Context r0 = com.bykv.vk.openvk.TTAppContextHolder.getContext()
        L8:
            return r0
    }

    private static com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor pp() {
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r0 = com.bykv.vk.openvk.downloadnew.pt.q
            if (r0 != 0) goto L19
            com.bykv.vk.openvk.TTVfManager r0 = com.bykv.vk.openvk.TTVfSdk.getVfManager()
            if (r0 != 0) goto Lc
            r0 = 0
            return r0
        Lc:
            java.lang.Class<com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor> r1 = com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor.class
            r2 = 1
            android.os.Bundle r2 = com.bykv.vk.openvk.downloadnew.df.rg(r2)
            java.lang.Object r0 = r0.getExtra(r1, r2)
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r0 = (com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor) r0
        L19:
            return r0
    }

    static com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor pt() {
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r0 = pp()
            return r0
    }

    public static java.util.Map<java.lang.Integer, com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter.OnEventLogHandler> q() {
            java.util.Map<java.lang.Integer, com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter$OnEventLogHandler> r0 = com.bykv.vk.openvk.downloadnew.pt.c
            return r0
    }

    private static void q(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.rg(r2)
            if (r0 != 0) goto L12
            return
        L12:
            org.json.JSONObject r0 = r0.fw()
            if (r0 != 0) goto L19
            return
        L19:
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r1 = pp()
            if (r1 == 0) goto L26
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r1 = pp()
            r1.checkAutoControl(r0, r2)
        L26:
            return
    }

    public static com.ss.android.downloadlib.ux rg() {
            android.content.Context r0 = getContext()
            rg(r0)
            android.content.Context r0 = getContext()
            com.ss.android.downloadlib.ux r0 = com.ss.android.downloadlib.ux.rg(r0)
            return r0
    }

    private static com.ss.android.socialbase.downloader.downloader.DownloaderBuilder rg(android.content.Context r2, org.json.JSONObject r3) {
            r0 = 1040187391(0x3dffffff, float:0.12499999)
            java.lang.String r1 = "download_exp_switch_temp"
            int r3 = r3.optInt(r1, r0)
            com.ss.android.socialbase.downloader.downloader.DownloaderBuilder r0 = new com.ss.android.socialbase.downloader.downloader.DownloaderBuilder
            r0.<init>(r2)
            com.bykv.vk.openvk.downloadnew.pt$5 r2 = new com.bykv.vk.openvk.downloadnew.pt$5
            r2.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloaderBuilder r2 = r0.downloadSetting(r2)
            com.ss.android.socialbase.downloader.downloader.DownloaderBuilder r2 = r2.downloadExpSwitch(r3)
            com.bykv.vk.openvk.downloadnew.pt$pp r3 = new com.bykv.vk.openvk.downloadnew.pt$pp
            r3.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloaderBuilder r2 = r2.httpService(r3)
            return r2
    }

    static org.json.JSONObject rg(com.ss.android.download.api.model.df r0) {
            org.json.JSONObject r0 = df(r0)
            return r0
    }

    public static void rg(int r1) {
            java.util.Map<java.lang.Integer, com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter$OnEventLogHandler> r0 = com.bykv.vk.openvk.downloadnew.pt.c
            if (r0 == 0) goto Lb
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.remove(r1)
        Lb:
            return
    }

    public static void rg(int r1, com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter.OnEventLogHandler r2) {
            if (r2 == 0) goto L1a
            java.util.Map<java.lang.Integer, com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter$OnEventLogHandler> r0 = com.bykv.vk.openvk.downloadnew.pt.c
            if (r0 != 0) goto L11
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            com.bykv.vk.openvk.downloadnew.pt.c = r0
        L11:
            java.util.Map<java.lang.Integer, com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter$OnEventLogHandler> r0 = com.bykv.vk.openvk.downloadnew.pt.c
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.put(r1, r2)
        L1a:
            return
    }

    public static void rg(android.content.Context r2) {
            if (r2 != 0) goto L6
            android.content.Context r2 = com.bykv.vk.openvk.TTAppContextHolder.getContext()
        L6:
            if (r2 != 0) goto L9
            return
        L9:
            java.util.concurrent.atomic.AtomicBoolean r0 = com.bykv.vk.openvk.downloadnew.pt.pt
            boolean r0 = r0.get()
            if (r0 != 0) goto L4a
            java.lang.Class<com.bykv.vk.openvk.downloadnew.pt> r0 = com.bykv.vk.openvk.downloadnew.pt.class
            monitor-enter(r0)
            java.util.concurrent.atomic.AtomicBoolean r1 = com.bykv.vk.openvk.downloadnew.pt.pt     // Catch: java.lang.Throwable -> L47
            boolean r1 = r1.get()     // Catch: java.lang.Throwable -> L47
            if (r1 != 0) goto L45
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L47
            com.bykv.vk.openvk.downloadnew.pt.pp = r2     // Catch: java.lang.Throwable -> L47
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r2 = pp()     // Catch: java.lang.Throwable -> L47
            if (r2 == 0) goto L3a
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadVisitor r2 = pp()     // Catch: java.lang.Throwable -> L47
            boolean r1 = com.bykv.vk.openvk.downloadnew.pt.df     // Catch: java.lang.Throwable -> L47
            java.lang.String r2 = r2.initPath(r1)     // Catch: java.lang.Throwable -> L47
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L47
            if (r1 != 0) goto L3a
            com.bykv.vk.openvk.downloadnew.pt.rg = r2     // Catch: java.lang.Throwable -> L47
        L3a:
            android.content.Context r2 = com.bykv.vk.openvk.downloadnew.pt.pp     // Catch: java.lang.Throwable -> L47
            boolean r2 = df(r2)     // Catch: java.lang.Throwable -> L47
            java.util.concurrent.atomic.AtomicBoolean r1 = com.bykv.vk.openvk.downloadnew.pt.pt     // Catch: java.lang.Throwable -> L47
            r1.set(r2)     // Catch: java.lang.Throwable -> L47
        L45:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L47
            goto L4a
        L47:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L47
            throw r2
        L4a:
            return
    }

    public static void rg(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L8
            com.bykv.vk.openvk.downloadnew.pt.rg = r1
        L8:
            return
    }

    public static boolean rg(android.app.Activity r2, com.bykv.vk.openvk.downloadnew.core.ExitInstallListener r3) {
            com.ss.android.downloadlib.addownload.rg.rg r0 = com.ss.android.downloadlib.addownload.rg.rg.rg()
            com.bykv.vk.openvk.downloadnew.pt$7 r1 = new com.bykv.vk.openvk.downloadnew.pt$7
            r1.<init>(r3)
            r3 = 0
            boolean r2 = r0.rg(r2, r3, r1)
            return r2
    }

    public static boolean rg(android.content.Context r7, android.net.Uri r8, com.ss.android.download.api.download.DownloadModel r9, com.ss.android.download.api.download.DownloadEventConfig r10, com.ss.android.download.api.download.DownloadController r11) {
            com.ss.android.downloadlib.ux r0 = rg()
            com.ss.android.downloadad.api.df r1 = r0.pp()
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            boolean r7 = r1.rg(r2, r3, r4, r5, r6)
            return r7
    }

    public static boolean rg(android.content.Context r8, android.net.Uri r9, com.ss.android.download.api.download.DownloadModel r10, com.ss.android.download.api.download.DownloadEventConfig r11, com.ss.android.download.api.download.DownloadController r12, com.ss.android.download.api.config.IDownloadButtonClickListener r13) {
            com.ss.android.downloadlib.ux r0 = rg()
            com.ss.android.downloadad.api.df r1 = r0.pp()
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            boolean r8 = r1.rg(r2, r3, r4, r5, r6, r7)
            return r8
    }

    public static boolean rg(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L36
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto La
            goto L36
        La:
            com.ss.android.socialbase.appdownloader.pt r1 = com.ss.android.socialbase.appdownloader.pt.bm()
            java.util.List r2 = r1.df(r2)
            boolean r1 = r2.isEmpty()
            if (r1 != 0) goto L36
            java.util.Iterator r2 = r2.iterator()
        L1c:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L36
            java.lang.Object r1 = r2.next()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r1
            if (r1 == 0) goto L1c
            java.lang.String r1 = r1.getUrl()
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L1c
            r2 = 1
            return r2
        L36:
            return r0
    }

    public static boolean rg(android.net.Uri r0) {
            boolean r0 = com.ss.android.downloadlib.df.bm.rg(r0)
            return r0
    }

    public static boolean rg(java.lang.String r10, java.lang.String r11, org.json.JSONObject r12, java.lang.Object r13) {
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            r1 = 0
            if (r0 != 0) goto L4e
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 != 0) goto L4e
            if (r12 != 0) goto L10
            goto L4e
        L10:
            java.util.Map r0 = q()
            if (r0 == 0) goto L4e
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L1e:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L4e
            java.lang.Object r2 = r0.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r5 = r3.intValue()
            java.lang.Object r2 = r2.getValue()
            r4 = r2
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter$OnEventLogHandler r4 = (com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter.OnEventLogHandler) r4
            if (r4 == 0) goto L1e
            java.lang.String r6 = r12.toString()
            r7 = r10
            r8 = r11
            r9 = r13
            boolean r2 = r4.onEventLog(r5, r6, r7, r8, r9)
            if (r1 != 0) goto L1e
            if (r2 != 0) goto L1e
            r1 = 1
            goto L1e
        L4e:
            return r1
    }
}
