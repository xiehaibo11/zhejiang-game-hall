package com.kwad.components.offline.api.tk.model.report;

public class TKDownloadMsg extends com.kwad.components.offline.api.core.model.BaseOfflineCompoJsonParse<com.kwad.components.offline.api.tk.model.report.TKDownloadMsg> implements java.io.Serializable {
    public static final int ENV_SUCCESS = 3;
    public static final int FAIL = 2;
    private static final int INVALID_DOWNLOAD_STATE = -1;
    public static final int START = 0;
    public static final int SUCCESS = 1;
    private static final long serialVersionUID = -8872909341685100922L;
    public int downloadState;
    public long downloadTime;
    public java.lang.String errorDetail;
    public java.lang.String errorReason;
    public int loadingTimes;
    public long offlineLoadTime;
    public int offlineSource;
    public int preload;
    public int retryCount;
    public long soLoadTime;
    public int soSource;
    public java.lang.String templateId;
    public java.lang.String versionCode;

    public TKDownloadMsg() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.downloadState = r0
            return
    }

    @Override
    public void parseJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r1 = (com.kwad.components.offline.api.tk.model.report.TKDownloadMsg) r1
            r0.parseJson(r1, r2)
            return
    }

    public void parseJson(com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r4, org.json.JSONObject r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "download_state"
            int r0 = r5.optInt(r0)
            r4.downloadState = r0
            java.lang.String r0 = "download_time"
            long r0 = r5.optLong(r0)
            r4.downloadTime = r0
            java.lang.String r0 = "preload"
            int r0 = r5.optInt(r0)
            r4.preload = r0
            java.lang.String r0 = "error_reason"
            java.lang.String r1 = r5.optString(r0)
            r4.errorReason = r1
            java.lang.Object r0 = r5.opt(r0)
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L2f
            r4.errorReason = r2
        L2f:
            java.lang.String r0 = "template_id"
            java.lang.String r1 = r5.optString(r0)
            r4.templateId = r1
            java.lang.Object r0 = r5.opt(r0)
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L41
            r4.templateId = r2
        L41:
            java.lang.String r0 = "version_code"
            java.lang.String r1 = r5.optString(r0)
            r4.versionCode = r1
            java.lang.Object r0 = r5.opt(r0)
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L53
            r4.versionCode = r2
        L53:
            java.lang.String r0 = "retry_count"
            int r0 = r5.optInt(r0)
            r4.retryCount = r0
            java.lang.String r0 = "loading_times"
            int r0 = r5.optInt(r0)
            r4.loadingTimes = r0
            java.lang.String r0 = "offline_source"
            int r0 = r5.optInt(r0)
            r4.offlineSource = r0
            java.lang.String r0 = "so_source"
            int r0 = r5.optInt(r0)
            r4.soSource = r0
            java.lang.String r0 = "offline_load_time"
            long r0 = r5.optLong(r0)
            r4.offlineLoadTime = r0
            java.lang.String r0 = "so_load_time"
            long r0 = r5.optLong(r0)
            r4.soLoadTime = r0
            java.lang.String r0 = "error_detail"
            java.lang.String r1 = r5.optString(r0)
            r4.errorDetail = r1
            java.lang.Object r5 = r5.opt(r0)
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r5 != r0) goto L95
            r4.errorDetail = r2
        L95:
            return
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setDownloadState(int r1) {
            r0 = this;
            r0.downloadState = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setDownloadTime(long r1) {
            r0 = this;
            r0.downloadTime = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setErrorDetail(java.lang.String r1) {
            r0 = this;
            r0.errorDetail = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setErrorReason(java.lang.String r1) {
            r0 = this;
            r0.errorReason = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setLoadingTimes(int r1) {
            r0 = this;
            r0.loadingTimes = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setOfflineLoadTime(long r1) {
            r0 = this;
            r0.offlineLoadTime = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setOfflineSource(int r1) {
            r0 = this;
            r0.offlineSource = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setPreload(int r1) {
            r0 = this;
            r0.preload = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setRetryCount(int r1) {
            r0 = this;
            r0.retryCount = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setSoLoadTime(long r1) {
            r0 = this;
            r0.soLoadTime = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setSoSource(int r1) {
            r0 = this;
            r0.soSource = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setTemplateId(java.lang.String r1) {
            r0 = this;
            r0.templateId = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKDownloadMsg setVersionCode(java.lang.String r1) {
            r0 = this;
            r0.versionCode = r1
            return r0
    }

    @Override
    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1) {
            r0 = this;
            com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r1 = (com.kwad.components.offline.api.tk.model.report.TKDownloadMsg) r1
            org.json.JSONObject r1 = r0.toJson(r1)
            return r1
    }

    @Override
    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r1 = (com.kwad.components.offline.api.tk.model.report.TKDownloadMsg) r1
            org.json.JSONObject r1 = r0.toJson(r1, r2)
            return r1
    }

    public org.json.JSONObject toJson(com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r2) {
            r1 = this;
            r0 = 0
            org.json.JSONObject r2 = r1.toJson(r2, r0)
            return r2
    }

    public org.json.JSONObject toJson(com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r7, org.json.JSONObject r8) {
            r6 = this;
            if (r8 != 0) goto L7
            org.json.JSONObject r8 = new org.json.JSONObject
            r8.<init>()
        L7:
            int r0 = r7.downloadState
            java.lang.String r1 = "download_state"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r1, r0)
            long r0 = r7.downloadTime
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L1b
            java.lang.String r4 = "download_time"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r4, r0)
        L1b:
            int r0 = r7.preload
            if (r0 == 0) goto L24
            java.lang.String r1 = "preload"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r1, r0)
        L24:
            java.lang.String r0 = r7.errorReason
            java.lang.String r1 = ""
            if (r0 == 0) goto L37
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L37
            java.lang.String r0 = r7.errorReason
            java.lang.String r4 = "error_reason"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r4, r0)
        L37:
            java.lang.String r0 = r7.templateId
            if (r0 == 0) goto L48
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L48
            java.lang.String r0 = r7.templateId
            java.lang.String r4 = "template_id"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r4, r0)
        L48:
            java.lang.String r0 = r7.versionCode
            if (r0 == 0) goto L59
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L59
            java.lang.String r0 = r7.versionCode
            java.lang.String r4 = "version_code"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r4, r0)
        L59:
            int r0 = r7.retryCount
            if (r0 == 0) goto L62
            java.lang.String r4 = "retry_count"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r4, r0)
        L62:
            int r0 = r7.loadingTimes
            if (r0 == 0) goto L6b
            java.lang.String r4 = "loading_times"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r4, r0)
        L6b:
            int r0 = r7.offlineSource
            if (r0 == 0) goto L74
            java.lang.String r4 = "offline_source"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r4, r0)
        L74:
            int r0 = r7.soSource
            if (r0 == 0) goto L7d
            java.lang.String r4 = "so_source"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r4, r0)
        L7d:
            long r4 = r7.offlineLoadTime
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L88
            java.lang.String r0 = "offline_load_time"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r0, r4)
        L88:
            long r4 = r7.soLoadTime
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L93
            java.lang.String r0 = "so_load_time"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r0, r4)
        L93:
            java.lang.String r0 = r7.errorDetail
            if (r0 == 0) goto La4
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto La4
            java.lang.String r7 = r7.errorDetail
            java.lang.String r0 = "error_detail"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r0, r7)
        La4:
            return r8
    }
}
