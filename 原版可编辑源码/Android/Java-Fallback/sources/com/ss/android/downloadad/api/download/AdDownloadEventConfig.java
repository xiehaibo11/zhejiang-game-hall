package com.ss.android.downloadad.api.download;

public class AdDownloadEventConfig implements com.ss.android.download.api.download.DownloadEventConfig {
    protected java.lang.String mClickButtonTag;
    protected java.lang.String mClickContinueLabel;
    protected java.lang.String mClickInstallLabel;
    protected java.lang.String mClickItemTag;
    protected java.lang.String mClickLabel;
    protected java.lang.String mClickPauseLabel;
    protected java.lang.String mClickStartLabel;
    protected int mDownloadScene;
    protected transient java.lang.Object mExtraEventObject;
    protected org.json.JSONObject mExtraJson;
    protected boolean mIsEnableClickEvent;
    protected boolean mIsEnableV3Event;
    protected org.json.JSONObject mParamsJson;
    protected java.lang.String mRefer;
    protected java.lang.String mStorageDenyLabel;

    public static final class Builder {
        com.ss.android.downloadad.api.download.AdDownloadEventConfig eventConfig;

        public Builder() {
                r1 = this;
                r1.<init>()
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = new com.ss.android.downloadad.api.download.AdDownloadEventConfig
                r0.<init>()
                r1.eventConfig = r0
                return
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig build() {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                return r0
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickButtonTag(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mClickButtonTag = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickContinueLabel(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mClickContinueLabel = r2
                return r1
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickContinueTag(java.lang.String r1) {
                r0 = this;
                return r0
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickInstallLabel(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mClickInstallLabel = r2
                return r1
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickInstallTag(java.lang.String r1) {
                r0 = this;
                return r0
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickItemTag(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mClickItemTag = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickLabel(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mClickLabel = r2
                return r1
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickOpenLabel(java.lang.String r1) {
                r0 = this;
                return r0
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickOpenTag(java.lang.String r1) {
                r0 = this;
                return r0
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickPauseLabel(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mClickPauseLabel = r2
                return r1
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickPauseTag(java.lang.String r1) {
                r0 = this;
                return r0
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickStartLabel(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mClickStartLabel = r2
                return r1
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickStartTag(java.lang.String r1) {
                r0 = this;
                return r0
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setClickTag(java.lang.String r1) {
                r0 = this;
                return r0
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setCompletedEventTag(java.lang.String r1) {
                r0 = this;
                return r0
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setDownloadFailedLabel(java.lang.String r1) {
                r0 = this;
                return r0
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setDownloadScene(int r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mDownloadScene = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setExtraEventObject(java.lang.Object r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mExtraEventObject = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setExtraJson(org.json.JSONObject r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mExtraJson = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setIsEnableClickEvent(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mIsEnableClickEvent = r2
                return r1
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setIsEnableCompletedEvent(boolean r1) {
                r0 = this;
                return r0
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setIsEnableNoChargeClickEvent(boolean r1) {
                r0 = this;
                return r0
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setIsEnableV3Event(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mIsEnableV3Event = r2
                return r1
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setOpenLabel(java.lang.String r1) {
                r0 = this;
                return r0
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setOpenTag(java.lang.String r1) {
                r0 = this;
                return r0
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setParamsJson(org.json.JSONObject r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mParamsJson = r2
                return r1
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setQuickAppEventTag(java.lang.String r1) {
                r0 = this;
                return r0
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setRefer(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mRefer = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setStorageDenyLabel(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r1.eventConfig
                r0.mStorageDenyLabel = r2
                return r1
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadEventConfig.Builder setStorageDenyTag(java.lang.String r1) {
                r0 = this;
                return r0
        }
    }

    public AdDownloadEventConfig() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.mIsEnableClickEvent = r0
            r0 = 0
            r1.mIsEnableV3Event = r0
            return
    }

    public AdDownloadEventConfig(com.ss.android.downloadad.api.download.AdDownloadEventConfig r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.mIsEnableClickEvent = r0
            r0 = 0
            r1.mIsEnableV3Event = r0
            if (r2 != 0) goto Lc
            return
        Lc:
            java.lang.String r0 = r2.mClickButtonTag
            r1.mClickButtonTag = r0
            java.lang.String r0 = r2.mClickItemTag
            r1.mClickItemTag = r0
            java.lang.String r0 = r2.mClickLabel
            r1.mClickLabel = r0
            java.lang.String r0 = r2.mClickStartLabel
            r1.mClickStartLabel = r0
            java.lang.String r0 = r2.mClickPauseLabel
            r1.mClickPauseLabel = r0
            java.lang.String r0 = r2.mClickContinueLabel
            r1.mClickContinueLabel = r0
            java.lang.String r0 = r2.mClickInstallLabel
            r1.mClickInstallLabel = r0
            java.lang.String r0 = r2.mStorageDenyLabel
            r1.mStorageDenyLabel = r0
            int r0 = r2.mDownloadScene
            r1.mDownloadScene = r0
            boolean r0 = r2.mIsEnableClickEvent
            r1.mIsEnableClickEvent = r0
            boolean r0 = r2.mIsEnableV3Event
            r1.mIsEnableV3Event = r0
            java.lang.String r0 = r2.mRefer
            r1.mRefer = r0
            org.json.JSONObject r0 = r2.mExtraJson
            r1.mExtraJson = r0
            org.json.JSONObject r2 = r2.mParamsJson
            r1.mParamsJson = r2
            return
    }

    public static com.ss.android.downloadad.api.download.AdDownloadEventConfig fromJson(org.json.JSONObject r4) {
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = new com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder
            r0.<init>()
            java.lang.String r1 = "click_button_tag"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> L92
            r0.setClickButtonTag(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "click_item_tag"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> L92
            r0.setClickItemTag(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "click_label"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> L92
            r0.setClickLabel(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "click_start_label"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> L92
            r0.setClickStartLabel(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "click_continue_label"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> L92
            r0.setClickContinueLabel(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "click_pause_label"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> L92
            r0.setClickPauseLabel(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "click_install_label"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> L92
            r0.setClickInstallLabel(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "storage_deny_label"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> L92
            r0.setStorageDenyLabel(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "refer"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> L92
            r0.setRefer(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "download_scene"
            int r1 = r4.optInt(r1)     // Catch: java.lang.Exception -> L92
            r0.setDownloadScene(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "enable_click_event"
            int r1 = r4.optInt(r1)     // Catch: java.lang.Exception -> L92
            r2 = 0
            r3 = 1
            if (r1 != r3) goto L6f
            r1 = r3
            goto L70
        L6f:
            r1 = r2
        L70:
            r0.setIsEnableClickEvent(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "enable_v3_event"
            int r1 = r4.optInt(r1)     // Catch: java.lang.Exception -> L92
            if (r1 != r3) goto L7c
            r2 = r3
        L7c:
            r0.setIsEnableV3Event(r2)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "extra"
            org.json.JSONObject r1 = r4.optJSONObject(r1)     // Catch: java.lang.Exception -> L92
            r0.setExtraJson(r1)     // Catch: java.lang.Exception -> L92
            java.lang.String r1 = "params_json"
            org.json.JSONObject r4 = r4.optJSONObject(r1)     // Catch: java.lang.Exception -> L92
            r0.setParamsJson(r4)     // Catch: java.lang.Exception -> L92
            goto L9c
        L92:
            r4 = move-exception
            com.ss.android.download.api.df.rg r1 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r2 = "AdDownloadEventConfig fromJson"
            r1.rg(r4, r2)
        L9c:
            com.ss.android.downloadad.api.download.AdDownloadEventConfig r4 = r0.build()
            return r4
    }

    @Override
    public java.lang.String getClickButtonTag() {
            r1 = this;
            java.lang.String r0 = r1.mClickButtonTag
            return r0
    }

    @Override
    public java.lang.String getClickContinueLabel() {
            r1 = this;
            java.lang.String r0 = r1.mClickContinueLabel
            return r0
    }

    @Override
    public java.lang.String getClickInstallLabel() {
            r1 = this;
            java.lang.String r0 = r1.mClickInstallLabel
            return r0
    }

    @Override
    public java.lang.String getClickItemTag() {
            r1 = this;
            java.lang.String r0 = r1.mClickItemTag
            return r0
    }

    @Override
    public java.lang.String getClickLabel() {
            r1 = this;
            java.lang.String r0 = r1.mClickLabel
            return r0
    }

    @Override
    public java.lang.String getClickPauseLabel() {
            r1 = this;
            java.lang.String r0 = r1.mClickPauseLabel
            return r0
    }

    @Override
    public java.lang.String getClickStartLabel() {
            r1 = this;
            java.lang.String r0 = r1.mClickStartLabel
            return r0
    }

    @Override
    public int getDownloadScene() {
            r1 = this;
            int r0 = r1.mDownloadScene
            return r0
    }

    @Override
    public java.lang.Object getExtraEventObject() {
            r1 = this;
            java.lang.Object r0 = r1.mExtraEventObject
            return r0
    }

    @Override
    public org.json.JSONObject getExtraJson() {
            r1 = this;
            org.json.JSONObject r0 = r1.mExtraJson
            return r0
    }

    @Override
    public org.json.JSONObject getParamsJson() {
            r1 = this;
            org.json.JSONObject r0 = r1.mParamsJson
            return r0
    }

    @Override
    public java.lang.String getRefer() {
            r1 = this;
            java.lang.String r0 = r1.mRefer
            return r0
    }

    @Override
    public java.lang.String getStorageDenyLabel() {
            r1 = this;
            java.lang.String r0 = r1.mStorageDenyLabel
            return r0
    }

    @Override
    public boolean isEnableClickEvent() {
            r1 = this;
            boolean r0 = r1.mIsEnableClickEvent
            return r0
    }

    @Override
    public boolean isEnableV3Event() {
            r1 = this;
            boolean r0 = r1.mIsEnableV3Event
            return r0
    }

    public void setClickButtonTag(java.lang.String r1) {
            r0 = this;
            r0.mClickButtonTag = r1
            return
    }

    public void setClickItemTag(java.lang.String r1) {
            r0 = this;
            r0.mClickItemTag = r1
            return
    }

    @Override
    public void setDownloadScene(int r1) {
            r0 = this;
            r0.mDownloadScene = r1
            return
    }

    public void setExtraEventObject(java.lang.Object r1) {
            r0 = this;
            r0.mExtraEventObject = r1
            return
    }

    public void setExtraJson(org.json.JSONObject r1) {
            r0 = this;
            r0.mExtraJson = r1
            return
    }

    public void setParamsJson(org.json.JSONObject r1) {
            r0 = this;
            r0.mParamsJson = r1
            return
    }

    @java.lang.Deprecated
    public void setQuickAppEventTag(java.lang.String r1) {
            r0 = this;
            return
    }

    @Override
    public void setRefer(java.lang.String r1) {
            r0 = this;
            r0.mRefer = r1
            return
    }

    public org.json.JSONObject toJson() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "click_button_tag"
            java.lang.String r2 = r5.mClickButtonTag     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "click_item_tag"
            java.lang.String r2 = r5.mClickItemTag     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "click_label"
            java.lang.String r2 = r5.mClickLabel     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "click_start_label"
            java.lang.String r2 = r5.mClickStartLabel     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "click_continue_label"
            java.lang.String r2 = r5.mClickContinueLabel     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "click_pause_label"
            java.lang.String r2 = r5.mClickPauseLabel     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "click_install_label"
            java.lang.String r2 = r5.mClickInstallLabel     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "storage_deny_label"
            java.lang.String r2 = r5.mStorageDenyLabel     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "refer"
            java.lang.String r2 = r5.mRefer     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "download_scene"
            int r2 = r5.mDownloadScene     // Catch: java.lang.Exception -> L7f
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "enable_click_event"
            boolean r2 = r5.mIsEnableClickEvent     // Catch: java.lang.Exception -> L7f
            r3 = 1
            r4 = 0
            if (r2 == 0) goto L59
            r2 = r3
            goto L5a
        L59:
            r2 = r4
        L5a:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "enable_v3_event"
            boolean r2 = r5.mIsEnableV3Event     // Catch: java.lang.Exception -> L7f
            if (r2 == 0) goto L68
            goto L69
        L68:
            r3 = r4
        L69:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "extra"
            org.json.JSONObject r2 = r5.mExtraJson     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = "params_json"
            org.json.JSONObject r2 = r5.mParamsJson     // Catch: java.lang.Exception -> L7f
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L7f
            goto L89
        L7f:
            r1 = move-exception
            com.ss.android.download.api.df.rg r2 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r3 = "AdDownloadEventConfig toJson"
            r2.rg(r1, r3)
        L89:
            return r0
    }
}
