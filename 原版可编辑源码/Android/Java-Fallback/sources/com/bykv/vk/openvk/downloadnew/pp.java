package com.bykv.vk.openvk.downloadnew;

public final class pp extends com.bykv.vk.openvk.downloadnew.rg implements com.bykv.vk.openvk.api.proto.Bridge {
    private static volatile com.bykv.vk.openvk.downloadnew.pp rg;
    private final android.content.Context df;

    private pp(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.df = r1
            return
    }

    private com.ss.android.download.api.config.OnItemClickListener c(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.ss.android.download.api.config.OnItemClickListener
            if (r0 == 0) goto L7
            com.ss.android.download.api.config.OnItemClickListener r2 = (com.ss.android.download.api.config.OnItemClickListener) r2
            return r2
        L7:
            r2 = 0
            return r2
    }

    private com.ss.android.download.api.download.DownloadModel df(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.ss.android.download.api.download.DownloadModel
            if (r0 == 0) goto L7
            com.ss.android.download.api.download.DownloadModel r2 = (com.ss.android.download.api.download.DownloadModel) r2
            return r2
        L7:
            r2 = 0
            return r2
    }

    private com.ss.android.download.api.config.IDownloadButtonClickListener fw(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.ss.android.download.api.config.IDownloadButtonClickListener
            if (r0 == 0) goto L7
            com.ss.android.download.api.config.IDownloadButtonClickListener r2 = (com.ss.android.download.api.config.IDownloadButtonClickListener) r2
            return r2
        L7:
            r2 = 0
            return r2
    }

    private android.app.Activity getActivity(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.app.Activity
            if (r0 == 0) goto L7
            android.app.Activity r2 = (android.app.Activity) r2
            return r2
        L7:
            r2 = 0
            return r2
    }

    private com.bykv.vk.openvk.downloadnew.core.ExitInstallListener pp(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.bykv.vk.openvk.downloadnew.core.ExitInstallListener
            if (r0 == 0) goto L7
            com.bykv.vk.openvk.downloadnew.core.ExitInstallListener r2 = (com.bykv.vk.openvk.downloadnew.core.ExitInstallListener) r2
            return r2
        L7:
            r2 = 0
            return r2
    }

    private com.ss.android.download.api.download.DownloadController pt(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.ss.android.download.api.download.DownloadController
            if (r0 == 0) goto L7
            com.ss.android.download.api.download.DownloadController r2 = (com.ss.android.download.api.download.DownloadController) r2
            return r2
        L7:
            r2 = 0
            return r2
    }

    private com.ss.android.download.api.download.DownloadEventConfig q(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.ss.android.download.api.download.DownloadEventConfig
            if (r0 == 0) goto L7
            com.ss.android.download.api.download.DownloadEventConfig r2 = (com.ss.android.download.api.download.DownloadEventConfig) r2
            return r2
        L7:
            r2 = 0
            return r2
    }

    public static com.bykv.vk.openvk.downloadnew.pp rg(android.content.Context r2) {
            com.bykv.vk.openvk.downloadnew.pp r0 = com.bykv.vk.openvk.downloadnew.pp.rg
            if (r0 != 0) goto L17
            java.lang.Class<com.bykv.vk.openvk.downloadnew.pp> r0 = com.bykv.vk.openvk.downloadnew.pp.class
            monitor-enter(r0)
            com.bykv.vk.openvk.downloadnew.pp r1 = com.bykv.vk.openvk.downloadnew.pp.rg     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bykv.vk.openvk.downloadnew.pp r1 = new com.bykv.vk.openvk.downloadnew.pp     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.bykv.vk.openvk.downloadnew.pp.rg = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.bykv.vk.openvk.downloadnew.pp r2 = com.bykv.vk.openvk.downloadnew.pp.rg
            return r2
    }

    private com.ss.android.download.api.download.DownloadStatusChangeListener rg(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.ss.android.download.api.download.DownloadStatusChangeListener
            if (r0 == 0) goto L7
            com.ss.android.download.api.download.DownloadStatusChangeListener r2 = (com.ss.android.download.api.download.DownloadStatusChangeListener) r2
            return r2
        L7:
            r2 = 0
            return r2
    }

    private static boolean rg(com.ss.android.download.api.config.IDownloadButtonClickListener r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            r0 = 1
            return r0
    }

    @Override
    public <T> T call(int r3, com.bykv.vk.openvk.api.proto.ValueSet r4, java.lang.Class<T> r5) {
            r2 = this;
            r0 = 0
            r1 = 20
            if (r3 != r1) goto L12
            java.lang.Class<android.os.Bundle> r3 = android.os.Bundle.class
            java.lang.Object r3 = r4.objectValue(r0, r3)
            android.os.Bundle r3 = (android.os.Bundle) r3
            r2.init(r3)
            r3 = 0
            return r3
        L12:
            java.lang.Class<java.util.Map> r1 = java.util.Map.class
            java.lang.Object r4 = r4.objectValue(r0, r1)
            java.util.Map r4 = (java.util.Map) r4
            java.lang.Object r3 = r2.callMethod(r5, r3, r4)
            return r3
    }

    @Override
    public <T> T callMethod(java.lang.Class<T> r24, int r25, java.util.Map<java.lang.String, java.lang.Object> r26) {
            r23 = this;
            r0 = r23
            r1 = r26
            java.lang.String r2 = "action_type_button"
            java.lang.String r3 = "uri"
            java.lang.String r4 = "downloadStatusChangeListener"
            java.lang.String r5 = "downloadButtonClickListener"
            java.lang.String r6 = "downloadModel"
            java.lang.String r7 = "downloadController"
            java.lang.String r8 = "downloadEventConfig"
            java.lang.String r9 = "hashCode"
            java.lang.String r10 = "downloadUrl"
            java.lang.String r11 = "id"
            r12 = 0
            switch(r25) {
                case 0: goto L299;
                case 1: goto L290;
                case 2: goto L262;
                case 3: goto L252;
                case 4: goto L23a;
                case 5: goto L216;
                case 6: goto L205;
                case 7: goto L201;
                case 8: goto L1e7;
                case 9: goto L1d1;
                case 10: goto L1c5;
                case 11: goto L1c;
                case 12: goto L182;
                case 13: goto L119;
                case 14: goto Le8;
                case 15: goto Ld9;
                case 16: goto La6;
                case 17: goto L61;
                case 18: goto L3c;
                case 19: goto L21;
                default: goto L1c;
            }
        L1c:
            java.lang.Object r1 = super.callMethod(r24, r25, r26)
            return r1
        L21:
            java.lang.Object r1 = r1.get(r11)
            java.lang.Long r1 = (java.lang.Long) r1
            long r1 = r1.longValue()
            com.ss.android.downloadlib.ux r3 = com.bykv.vk.openvk.downloadnew.pt.rg()
            com.ss.android.downloadad.api.df r3 = r3.pp()
            boolean r1 = r3.rg(r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L3c:
            java.lang.Object r2 = r1.get(r11)
            java.lang.Long r2 = (java.lang.Long) r2
            long r2 = r2.longValue()
            java.lang.Object r1 = r1.get(r9)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            com.ss.android.downloadlib.ux r4 = com.bykv.vk.openvk.downloadnew.pt.rg()
            com.ss.android.downloadad.api.df r4 = r4.pp()
            boolean r1 = r4.rg(r2, r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L61:
            java.lang.Object r3 = r1.get(r10)
            r14 = r3
            java.lang.String r14 = (java.lang.String) r14
            java.lang.Object r3 = r1.get(r11)
            java.lang.Long r3 = (java.lang.Long) r3
            long r15 = r3.longValue()
            java.lang.Object r2 = r1.get(r2)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r17 = r2.intValue()
            java.lang.Object r2 = r1.get(r8)
            com.ss.android.download.api.download.DownloadEventConfig r18 = r0.q(r2)
            java.lang.Object r2 = r1.get(r7)
            com.ss.android.download.api.download.DownloadController r19 = r0.pt(r2)
            java.lang.String r2 = "itemClickListener"
            java.lang.Object r2 = r1.get(r2)
            com.ss.android.download.api.config.OnItemClickListener r20 = r0.c(r2)
            java.lang.Object r1 = r1.get(r5)
            com.ss.android.download.api.config.IDownloadButtonClickListener r21 = r0.fw(r1)
            com.ss.android.downloadlib.ux r13 = com.bykv.vk.openvk.downloadnew.pt.rg()
            r13.rg(r14, r15, r17, r18, r19, r20, r21)
            return r12
        La6:
            java.lang.Object r3 = r1.get(r10)
            r14 = r3
            java.lang.String r14 = (java.lang.String) r14
            java.lang.Object r3 = r1.get(r11)
            java.lang.Long r3 = (java.lang.Long) r3
            long r15 = r3.longValue()
            java.lang.Object r2 = r1.get(r2)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r17 = r2.intValue()
            java.lang.Object r2 = r1.get(r8)
            com.ss.android.download.api.download.DownloadEventConfig r18 = r0.q(r2)
            java.lang.Object r1 = r1.get(r7)
            com.ss.android.download.api.download.DownloadController r19 = r0.pt(r1)
            com.ss.android.downloadlib.ux r13 = com.bykv.vk.openvk.downloadnew.pt.rg()
            r13.rg(r14, r15, r17, r18, r19)
            return r12
        Ld9:
            java.lang.Object r1 = r1.get(r3)
            android.net.Uri r1 = (android.net.Uri) r1
            boolean r1 = com.bykv.vk.openvk.downloadnew.pt.rg(r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        Le8:
            java.lang.Object r2 = r1.get(r11)
            java.lang.Long r2 = (java.lang.Long) r2
            long r12 = r2.longValue()
            java.lang.String r2 = "logExtra"
            java.lang.Object r2 = r1.get(r2)
            r14 = r2
            java.lang.String r14 = (java.lang.String) r14
            java.lang.Object r1 = r1.get(r9)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r16 = r1.intValue()
            com.ss.android.downloadlib.ux r1 = com.bykv.vk.openvk.downloadnew.pt.rg()
            com.ss.android.downloadad.api.df r10 = r1.pp()
            android.content.Context r11 = r0.df
            r15 = 0
            boolean r1 = r10.rg(r11, r12, r14, r15, r16)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L119:
            java.lang.Object r2 = r1.get(r9)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r21 = r2.intValue()
            java.lang.String r2 = "isDisableDialog"
            java.lang.Object r2 = r1.get(r2)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r16 = r2.booleanValue()
            java.lang.String r2 = "userAgent"
            java.lang.Object r2 = r1.get(r2)
            r15 = r2
            java.lang.String r15 = (java.lang.String) r15
            java.lang.Object r2 = r1.get(r6)
            com.ss.android.download.api.download.DownloadModel r17 = r0.df(r2)
            java.lang.Object r2 = r1.get(r8)
            com.ss.android.download.api.download.DownloadEventConfig r18 = r0.q(r2)
            java.lang.Object r2 = r1.get(r7)
            com.ss.android.download.api.download.DownloadController r19 = r0.pt(r2)
            java.lang.Object r2 = r1.get(r4)
            com.ss.android.download.api.download.DownloadStatusChangeListener r20 = r0.rg(r2)
            java.lang.Object r1 = r1.get(r5)
            com.ss.android.download.api.config.IDownloadButtonClickListener r22 = r0.fw(r1)
            boolean r1 = rg(r22)
            if (r1 == 0) goto L174
            com.ss.android.downloadlib.ux r1 = com.bykv.vk.openvk.downloadnew.pt.rg()
            com.ss.android.downloadad.api.df r13 = r1.pp()
            android.content.Context r14 = r0.df
            r13.rg(r14, r15, r16, r17, r18, r19, r20, r21, r22)
            return r12
        L174:
            com.ss.android.downloadlib.ux r1 = com.bykv.vk.openvk.downloadnew.pt.rg()
            com.ss.android.downloadad.api.df r13 = r1.pp()
            android.content.Context r14 = r0.df
            r13.rg(r14, r15, r16, r17, r18, r19, r20, r21)
            return r12
        L182:
            java.lang.Object r2 = r1.get(r3)
            r10 = r2
            android.net.Uri r10 = (android.net.Uri) r10
            java.lang.Object r2 = r1.get(r6)
            com.ss.android.download.api.download.DownloadModel r11 = r0.df(r2)
            java.lang.Object r2 = r1.get(r8)
            com.ss.android.download.api.download.DownloadEventConfig r12 = r0.q(r2)
            java.lang.Object r2 = r1.get(r7)
            com.ss.android.download.api.download.DownloadController r13 = r0.pt(r2)
            java.lang.Object r1 = r1.get(r5)
            com.ss.android.download.api.config.IDownloadButtonClickListener r14 = r0.fw(r1)
            boolean r1 = rg(r14)
            if (r1 == 0) goto L1ba
            android.content.Context r9 = r0.df
            boolean r1 = com.bykv.vk.openvk.downloadnew.pt.rg(r9, r10, r11, r12, r13, r14)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L1ba:
            android.content.Context r1 = r0.df
            boolean r1 = com.bykv.vk.openvk.downloadnew.pt.rg(r1, r10, r11, r12, r13)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L1c5:
            java.lang.String r2 = "downloadPath"
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            com.bykv.vk.openvk.downloadnew.pt.rg(r1)
            return r12
        L1d1:
            java.lang.Object r2 = r1.get(r11)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            java.lang.String r3 = "onEventLogHandler"
            java.lang.Object r1 = r1.get(r3)
            com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter$OnEventLogHandler r1 = (com.bykv.vk.openvk.downloadnew.core.ITTDownloadAdapter.OnEventLogHandler) r1
            com.bykv.vk.openvk.downloadnew.pt.rg(r2, r1)
            return r12
        L1e7:
            java.lang.Object r2 = r1.get(r10)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "force"
            java.lang.Object r1 = r1.get(r3)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            com.ss.android.downloadlib.ux r3 = com.bykv.vk.openvk.downloadnew.pt.rg()
            r3.rg(r2, r1)
            return r12
        L201:
            com.bykv.vk.openvk.downloadnew.pt.df()
            return r12
        L205:
            java.lang.Object r1 = r1.get(r10)
            java.lang.String r1 = (java.lang.String) r1
            android.content.Context r2 = r0.df
            boolean r1 = com.bykv.vk.openvk.downloadnew.pt.rg(r2, r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L216:
            java.lang.Object r2 = r1.get(r9)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            java.lang.Object r3 = r1.get(r6)
            com.ss.android.download.api.download.DownloadModel r3 = r0.df(r3)
            java.lang.Object r1 = r1.get(r4)
            com.ss.android.download.api.download.DownloadStatusChangeListener r1 = r0.rg(r1)
            com.ss.android.downloadlib.ux r4 = com.bykv.vk.openvk.downloadnew.pt.rg()
            android.content.Context r5 = r0.df
            r4.rg(r5, r2, r1, r3)
            return r12
        L23a:
            java.lang.Object r2 = r1.get(r10)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.get(r9)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            com.ss.android.downloadlib.ux r3 = com.bykv.vk.openvk.downloadnew.pt.rg()
            r3.rg(r2, r1)
            return r12
        L252:
            java.lang.String r2 = "hid"
            java.lang.Object r1 = r1.get(r2)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            com.bykv.vk.openvk.downloadnew.pt.rg(r1)
            return r12
        L262:
            java.lang.String r2 = "tagIntercept"
            java.lang.Object r2 = r1.get(r2)     // Catch: org.json.JSONException -> L28d
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L28d
            java.lang.String r3 = "label"
            java.lang.Object r3 = r1.get(r3)     // Catch: org.json.JSONException -> L28d
            java.lang.String r3 = (java.lang.String) r3     // Catch: org.json.JSONException -> L28d
            java.lang.String r4 = "meta"
            java.lang.Object r1 = r1.get(r4)     // Catch: org.json.JSONException -> L28d
            java.lang.String r1 = (java.lang.String) r1     // Catch: org.json.JSONException -> L28d
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L28d
            r4.<init>(r1)     // Catch: org.json.JSONException -> L28d
            java.util.HashMap r1 = new java.util.HashMap     // Catch: org.json.JSONException -> L28d
            r1.<init>()     // Catch: org.json.JSONException -> L28d
            boolean r1 = com.bykv.vk.openvk.downloadnew.pt.rg(r2, r3, r4, r1)     // Catch: org.json.JSONException -> L28d
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)     // Catch: org.json.JSONException -> L28d
            return r1
        L28d:
            java.lang.Boolean r1 = java.lang.Boolean.FALSE
            return r1
        L290:
            com.ss.android.downloadlib.ux r1 = com.bykv.vk.openvk.downloadnew.pt.rg()
            java.lang.String r1 = r1.c()
            return r1
        L299:
            java.lang.String r2 = "activity"
            java.lang.Object r2 = r1.get(r2)
            android.app.Activity r2 = r0.getActivity(r2)
            java.lang.String r3 = "exitInstallListener"
            java.lang.Object r1 = r1.get(r3)
            com.bykv.vk.openvk.downloadnew.core.ExitInstallListener r1 = r0.pp(r1)
            boolean r1 = com.bykv.vk.openvk.downloadnew.pt.rg(r2, r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
    }

    @Override
    public <T> T getObj(java.lang.Class<T> r1, int r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            if (r2 == 0) goto L11
            r3 = 1
            if (r2 == r3) goto La
            java.lang.Object r1 = super.getObj(r1)
            return r1
        La:
            boolean r1 = com.bykv.vk.openvk.downloadnew.pt.df
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L11:
            java.lang.String r1 = com.bykv.vk.openvk.downloadnew.pt.rg
            return r1
    }

    @Override
    public void init(android.os.Bundle r1) {
            r0 = this;
            super.init(r1)
            android.content.Context r1 = r0.df
            com.bykv.vk.openvk.downloadnew.pt.rg(r1)
            return
    }

    @Override
    public com.bykv.vk.openvk.api.proto.ValueSet values() {
            r3 = this;
            com.bykv.vk.openvk.api.q r0 = com.bykv.vk.openvk.api.q.rg()
            java.lang.String r1 = com.bykv.vk.openvk.downloadnew.pt.rg
            r2 = 0
            com.bykv.vk.openvk.api.q r0 = r0.rg(r2, r1)
            boolean r1 = com.bykv.vk.openvk.downloadnew.pt.df
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r2 = 1
            com.bykv.vk.openvk.api.q r0 = r0.rg(r2, r1)
            com.bykv.vk.openvk.api.proto.ValueSet r0 = r0.df()
            return r0
    }
}
