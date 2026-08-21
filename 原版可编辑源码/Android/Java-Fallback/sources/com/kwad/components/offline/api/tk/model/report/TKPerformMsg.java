package com.kwad.components.offline.api.tk.model.report;

public class TKPerformMsg extends com.kwad.components.offline.api.core.model.BaseOfflineCompoJsonParse<com.kwad.components.offline.api.tk.model.report.TKPerformMsg> implements java.io.Serializable {
    public static final int ENTER_SCENE = -1;
    public static final int OTHER_FAIL = 3;
    public static final int PAGE_STATUS_FAIL = 2;
    public static final int START = 0;
    public static final int SUCCESS = 1;
    public static final int TK_NOT_READY = 4;
    private static final long serialVersionUID = -5293371882532982729L;
    public java.lang.String errorReason;
    public long initTime;
    public long loadTime;
    public int renderState;
    public long renderTime;
    public int source;
    public java.lang.String templateId;
    public java.lang.String versionCode;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface ERROR_REASON {
        public static final java.lang.String KSAD_TK_JS_EMPTY = "js_empty";
        public static final java.lang.String KSAD_TK_NO_FILE = "no_file";
        public static final java.lang.String KSAD_TK_NO_TEMPLATE = "no_template";
        public static final java.lang.String KSAD_TK_OFFLINE_FAILED = "offline_failed";
        public static final java.lang.String KSAD_TK_SO_FAIL = "so_fail";
    }

    public TKPerformMsg(int r1) {
            r0 = this;
            r0.<init>()
            r0.setSource(r1)
            return
    }

    @Override
    public void parseJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r1 = (com.kwad.components.offline.api.tk.model.report.TKPerformMsg) r1
            r0.parseJson(r1, r2)
            return
    }

    public void parseJson(com.kwad.components.offline.api.tk.model.report.TKPerformMsg r4, org.json.JSONObject r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "source"
            int r0 = r5.optInt(r0)
            r4.source = r0
            java.lang.String r0 = "render_state"
            int r0 = r5.optInt(r0)
            r4.renderState = r0
            java.lang.String r0 = "error_reason"
            java.lang.String r1 = r5.optString(r0)
            r4.errorReason = r1
            java.lang.Object r0 = r5.opt(r0)
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L27
            r4.errorReason = r2
        L27:
            java.lang.String r0 = "render_time"
            long r0 = r5.optLong(r0)
            r4.renderTime = r0
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
            java.lang.String r0 = "load_time"
            long r0 = r5.optLong(r0)
            r4.loadTime = r0
            java.lang.String r0 = "init_time"
            long r0 = r5.optLong(r0)
            r4.initTime = r0
            return
    }

    public com.kwad.components.offline.api.tk.model.report.TKPerformMsg setErrorReason(java.lang.String r1) {
            r0 = this;
            r0.errorReason = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKPerformMsg setInitTime(long r1) {
            r0 = this;
            r0.initTime = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKPerformMsg setLoadTime(long r1) {
            r0 = this;
            r0.loadTime = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKPerformMsg setRenderState(int r1) {
            r0 = this;
            r0.renderState = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKPerformMsg setRenderTime(long r1) {
            r0 = this;
            r0.renderTime = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKPerformMsg setSource(int r1) {
            r0 = this;
            r0.source = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKPerformMsg setTemplateId(java.lang.String r1) {
            r0 = this;
            r0.templateId = r1
            return r0
    }

    public com.kwad.components.offline.api.tk.model.report.TKPerformMsg setVersionCode(java.lang.String r1) {
            r0 = this;
            r0.versionCode = r1
            return r0
    }

    @Override
    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1) {
            r0 = this;
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r1 = (com.kwad.components.offline.api.tk.model.report.TKPerformMsg) r1
            org.json.JSONObject r1 = r0.toJson(r1)
            return r1
    }

    @Override
    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r1 = (com.kwad.components.offline.api.tk.model.report.TKPerformMsg) r1
            org.json.JSONObject r1 = r0.toJson(r1, r2)
            return r1
    }

    public org.json.JSONObject toJson(com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2) {
            r1 = this;
            r0 = 0
            org.json.JSONObject r2 = r1.toJson(r2, r0)
            return r2
    }

    public org.json.JSONObject toJson(com.kwad.components.offline.api.tk.model.report.TKPerformMsg r7, org.json.JSONObject r8) {
            r6 = this;
            if (r8 != 0) goto L7
            org.json.JSONObject r8 = new org.json.JSONObject
            r8.<init>()
        L7:
            int r0 = r7.renderState
            java.lang.String r1 = "render_state"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r1, r0)
            int r0 = r7.source
            if (r0 == 0) goto L17
            java.lang.String r1 = "source"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r1, r0)
        L17:
            java.lang.String r0 = r7.errorReason
            java.lang.String r1 = ""
            if (r0 == 0) goto L2a
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2a
            java.lang.String r0 = r7.errorReason
            java.lang.String r2 = "error_reason"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r2, r0)
        L2a:
            long r2 = r7.renderTime
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L37
            java.lang.String r0 = "render_time"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r0, r2)
        L37:
            java.lang.String r0 = r7.templateId
            if (r0 == 0) goto L48
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L48
            java.lang.String r0 = r7.templateId
            java.lang.String r2 = "template_id"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r2, r0)
        L48:
            java.lang.String r0 = r7.versionCode
            if (r0 == 0) goto L59
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L59
            java.lang.String r0 = r7.versionCode
            java.lang.String r1 = "version_code"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r1, r0)
        L59:
            long r0 = r7.loadTime
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 == 0) goto L64
            java.lang.String r2 = "load_time"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r2, r0)
        L64:
            long r0 = r7.initTime
            int r7 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r7 == 0) goto L6f
            java.lang.String r7 = "init_time"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r8, r7, r0)
        L6f:
            return r8
    }
}
