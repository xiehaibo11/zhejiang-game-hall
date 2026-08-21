package com.ss.android.downloadad.api.download;

public class AdDownloadController implements com.ss.android.download.api.download.DownloadController {
    protected int mDownloadMode;
    protected boolean mEnableAH;
    protected boolean mEnableAM;
    protected boolean mEnableNewActivity;
    protected boolean mEnableShowComplianceDialog;
    protected java.lang.Object mExtraClickOperation;
    protected org.json.JSONObject mExtraJson;
    protected java.lang.Object mExtraObject;
    protected int mInterceptFlag;
    protected boolean mIsAddToDownloadManage;
    protected boolean mIsAutoDownloadOnCardShow;
    protected boolean mIsEnableBackDialog;
    protected int mLinkMode;
    protected boolean mShouldUseNewWebView;

    public static final class Builder {
        com.ss.android.downloadad.api.download.AdDownloadController controller;

        public Builder() {
                r1 = this;
                r1.<init>()
                com.ss.android.downloadad.api.download.AdDownloadController r0 = new com.ss.android.downloadad.api.download.AdDownloadController
                r0.<init>()
                r1.controller = r0
                return
        }

        public com.ss.android.downloadad.api.download.AdDownloadController build() {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                return r0
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setDowloadChunkCount(int r1) {
                r0 = this;
                return r0
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setDownloadMode(int r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mDownloadMode = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setEnableAH(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mEnableAH = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setEnableAM(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mEnableAM = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setEnableNewActivity(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mEnableNewActivity = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setEnableShowComplianceDialog(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mEnableShowComplianceDialog = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setExtraJson(org.json.JSONObject r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mExtraJson = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setExtraObject(java.lang.Object r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mExtraObject = r2
                return r1
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setExtraOperation(java.lang.Object r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mExtraClickOperation = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setInterceptFlag(int r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mInterceptFlag = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setIsAddToDownloadManage(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mIsAddToDownloadManage = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setIsAutoDownloadOnCardShow(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mIsAutoDownloadOnCardShow = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setIsEnableBackDialog(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mIsEnableBackDialog = r2
                return r1
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setIsEnableMultipleDownload(boolean r1) {
                r0 = this;
                return r0
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setLinkMode(int r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mLinkMode = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadController.Builder setShouldUseNewWebView(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadController r0 = r1.controller
                r0.mShouldUseNewWebView = r2
                return r1
        }
    }

    public AdDownloadController() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.mEnableShowComplianceDialog = r0
            r1.mEnableNewActivity = r0
            r1.mEnableAH = r0
            r1.mEnableAM = r0
            return
    }

    public static com.ss.android.downloadad.api.download.AdDownloadController fromJson(org.json.JSONObject r4) {
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = new com.ss.android.downloadad.api.download.AdDownloadController$Builder
            r0.<init>()
            java.lang.String r1 = "link_mode"
            int r1 = r4.optInt(r1)     // Catch: java.lang.Exception -> L9e
            r0.setLinkMode(r1)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "download_mode"
            int r1 = r4.optInt(r1)     // Catch: java.lang.Exception -> L9e
            r0.setDownloadMode(r1)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "enable_back_dialog"
            int r1 = r4.optInt(r1)     // Catch: java.lang.Exception -> L9e
            r2 = 0
            r3 = 1
            if (r1 != r3) goto L27
            r1 = r3
            goto L28
        L27:
            r1 = r2
        L28:
            r0.setIsEnableBackDialog(r1)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "add_to_manage"
            int r1 = r4.optInt(r1)     // Catch: java.lang.Exception -> L9e
            if (r1 != r3) goto L35
            r1 = r3
            goto L36
        L35:
            r1 = r2
        L36:
            r0.setIsAddToDownloadManage(r1)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "use_new_webview"
            int r1 = r4.optInt(r1)     // Catch: java.lang.Exception -> L9e
            if (r1 != r3) goto L43
            r1 = r3
            goto L44
        L43:
            r1 = r2
        L44:
            r0.setShouldUseNewWebView(r1)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "intercept_flag"
            int r1 = r4.optInt(r1)     // Catch: java.lang.Exception -> L9e
            r0.setInterceptFlag(r1)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "enable_show_compliance_dialog"
            int r1 = r4.optInt(r1, r3)     // Catch: java.lang.Exception -> L9e
            if (r1 != r3) goto L5a
            r1 = r3
            goto L5b
        L5a:
            r1 = r2
        L5b:
            r0.setEnableShowComplianceDialog(r1)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "is_auto_download_on_card_show"
            int r1 = r4.optInt(r1)     // Catch: java.lang.Exception -> L9e
            if (r1 != r3) goto L68
            r1 = r3
            goto L69
        L68:
            r1 = r2
        L69:
            r0.setIsAutoDownloadOnCardShow(r1)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "enable_new_activity"
            int r1 = r4.optInt(r1, r3)     // Catch: java.lang.Exception -> L9e
            if (r1 != r3) goto L76
            r1 = r3
            goto L77
        L76:
            r1 = r2
        L77:
            r0.setEnableNewActivity(r1)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "enable_ah"
            int r1 = r4.optInt(r1, r3)     // Catch: java.lang.Exception -> L9e
            if (r1 != r3) goto L84
            r1 = r3
            goto L85
        L84:
            r1 = r2
        L85:
            r0.setEnableAH(r1)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "enable_am"
            int r1 = r4.optInt(r1, r3)     // Catch: java.lang.Exception -> L9e
            if (r1 != r3) goto L91
            r2 = r3
        L91:
            r0.setEnableAM(r2)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "extra"
            org.json.JSONObject r4 = r4.optJSONObject(r1)     // Catch: java.lang.Exception -> L9e
            r0.setExtraJson(r4)     // Catch: java.lang.Exception -> L9e
            goto La8
        L9e:
            r4 = move-exception
            com.ss.android.download.api.df.rg r1 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r2 = "AdDownloadController fromJson"
            r1.rg(r4, r2)
        La8:
            com.ss.android.downloadad.api.download.AdDownloadController r4 = r0.build()
            return r4
    }

    @Override
    public boolean enableAH() {
            r1 = this;
            boolean r0 = r1.mEnableAH
            return r0
    }

    @Override
    public boolean enableAM() {
            r1 = this;
            boolean r0 = r1.mEnableAM
            return r0
    }

    @Override
    public boolean enableNewActivity() {
            r1 = this;
            boolean r0 = r1.mEnableNewActivity
            return r0
    }

    @Override
    public boolean enableShowComplianceDialog() {
            r1 = this;
            boolean r0 = r1.mEnableShowComplianceDialog
            return r0
    }

    @Override
    public int getDowloadChunkCount() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public int getDownloadMode() {
            r1 = this;
            int r0 = r1.mDownloadMode
            return r0
    }

    @Override
    public java.lang.Object getExtraClickOperation() {
            r1 = this;
            java.lang.Object r0 = r1.mExtraClickOperation
            return r0
    }

    @Override
    public org.json.JSONObject getExtraJson() {
            r1 = this;
            org.json.JSONObject r0 = r1.mExtraJson
            return r0
    }

    @Override
    public java.lang.Object getExtraObject() {
            r1 = this;
            java.lang.Object r0 = r1.mExtraObject
            return r0
    }

    @Override
    public int getInterceptFlag() {
            r1 = this;
            int r0 = r1.mInterceptFlag
            return r0
    }

    @Override
    public int getLinkMode() {
            r1 = this;
            int r0 = r1.mLinkMode
            return r0
    }

    @Override
    public boolean isAddToDownloadManage() {
            r1 = this;
            boolean r0 = r1.mIsAddToDownloadManage
            return r0
    }

    @Override
    public boolean isAutoDownloadOnCardShow() {
            r1 = this;
            boolean r0 = r1.mIsAutoDownloadOnCardShow
            return r0
    }

    @Override
    public boolean isEnableBackDialog() {
            r1 = this;
            boolean r0 = r1.mIsEnableBackDialog
            return r0
    }

    @Override
    public boolean isEnableMultipleDownload() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void setDownloadMode(int r1) {
            r0 = this;
            r0.mDownloadMode = r1
            return
    }

    @Override
    public void setEnableNewActivity(boolean r1) {
            r0 = this;
            r0.mEnableNewActivity = r1
            return
    }

    @Override
    public void setEnableShowComplianceDialog(boolean r1) {
            r0 = this;
            r0.mEnableShowComplianceDialog = r1
            return
    }

    public void setExtraJson(org.json.JSONObject r1) {
            r0 = this;
            r0.mExtraJson = r1
            return
    }

    public void setExtraObject(java.lang.Object r1) {
            r0 = this;
            r0.mExtraObject = r1
            return
    }

    public void setIsAutoDownloadOnCardShow(boolean r1) {
            r0 = this;
            r0.mIsAutoDownloadOnCardShow = r1
            return
    }

    @Override
    public void setLinkMode(int r1) {
            r0 = this;
            r0.mLinkMode = r1
            return
    }

    @Override
    public boolean shouldUseNewWebView() {
            r1 = this;
            boolean r0 = r1.mShouldUseNewWebView
            return r0
    }

    public org.json.JSONObject toJson() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "link_mode"
            int r2 = r5.mLinkMode     // Catch: java.lang.Exception -> Laf
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Laf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = "download_mode"
            int r2 = r5.mDownloadMode     // Catch: java.lang.Exception -> Laf
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Laf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = "enable_back_dialog"
            boolean r2 = r5.mIsEnableBackDialog     // Catch: java.lang.Exception -> Laf
            r3 = 1
            r4 = 0
            if (r2 == 0) goto L25
            r2 = r3
            goto L26
        L25:
            r2 = r4
        L26:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Laf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = "add_to_manage"
            boolean r2 = r5.mIsAddToDownloadManage     // Catch: java.lang.Exception -> Laf
            if (r2 == 0) goto L35
            r2 = r3
            goto L36
        L35:
            r2 = r4
        L36:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Laf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = "use_new_webview"
            boolean r2 = r5.mShouldUseNewWebView     // Catch: java.lang.Exception -> Laf
            if (r2 == 0) goto L45
            r2 = r3
            goto L46
        L45:
            r2 = r4
        L46:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Laf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = "intercept_flag"
            int r2 = r5.mInterceptFlag     // Catch: java.lang.Exception -> Laf
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Laf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = "enable_show_compliance_dialog"
            boolean r2 = r5.mEnableShowComplianceDialog     // Catch: java.lang.Exception -> Laf
            if (r2 == 0) goto L60
            r2 = r3
            goto L61
        L60:
            r2 = r4
        L61:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Laf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = "is_auto_download_on_card_show"
            boolean r2 = r5.mIsAutoDownloadOnCardShow     // Catch: java.lang.Exception -> Laf
            if (r2 == 0) goto L70
            r2 = r3
            goto L71
        L70:
            r2 = r4
        L71:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Laf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = "extra"
            org.json.JSONObject r2 = r5.mExtraJson     // Catch: java.lang.Exception -> Laf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = "enable_new_activity"
            boolean r2 = r5.mEnableNewActivity     // Catch: java.lang.Exception -> Laf
            if (r2 == 0) goto L87
            r2 = r3
            goto L88
        L87:
            r2 = r4
        L88:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Laf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = "enable_ah"
            boolean r2 = r5.mEnableAH     // Catch: java.lang.Exception -> Laf
            if (r2 == 0) goto L97
            r2 = r3
            goto L98
        L97:
            r2 = r4
        L98:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> Laf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = "enable_am"
            boolean r2 = r5.mEnableAM     // Catch: java.lang.Exception -> Laf
            if (r2 == 0) goto La6
            goto La7
        La6:
            r3 = r4
        La7:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> Laf
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> Laf
            goto Lb9
        Laf:
            r1 = move-exception
            com.ss.android.download.api.df.rg r2 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r3 = "AdDownloadController toJson"
            r2.rg(r1, r3)
        Lb9:
            return r0
    }
}
