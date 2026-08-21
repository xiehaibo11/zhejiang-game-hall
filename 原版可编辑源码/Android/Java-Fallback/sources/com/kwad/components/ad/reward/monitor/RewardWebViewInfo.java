package com.kwad.components.ad.reward.monitor;

public class RewardWebViewInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    private static final long serialVersionUID = -4316140680874648788L;
    public long durationMs;
    public java.lang.String event;
    public java.lang.String pageType;
    public java.lang.String sceneId;
    public java.lang.String source;
    public int status;
    public int timeType;
    public java.lang.String url;

    public RewardWebViewInfo() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.event = r0
            r2.url = r0
            r2.source = r0
            r2.sceneId = r0
            r2.pageType = r0
            r0 = -1
            r2.durationMs = r0
            return
    }

    @Override
    public void afterToJson(org.json.JSONObject r5) {
            r4 = this;
            super.afterToJson(r5)
            long r0 = r4.durationMs
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L10
            java.lang.String r0 = "duration_ms"
            r5.remove(r0)
        L10:
            return
    }

    public com.kwad.components.ad.reward.monitor.RewardWebViewInfo setDurationMs(long r1) {
            r0 = this;
            r0.durationMs = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardWebViewInfo setEvent(java.lang.String r1) {
            r0 = this;
            r0.event = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardWebViewInfo setPageType(java.lang.String r1) {
            r0 = this;
            r0.pageType = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardWebViewInfo setSceneId(java.lang.String r1) {
            r0 = this;
            r0.sceneId = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardWebViewInfo setSource(java.lang.String r1) {
            r0 = this;
            r0.source = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardWebViewInfo setStatus(int r1) {
            r0 = this;
            r0.status = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardWebViewInfo setTimeType(int r1) {
            r0 = this;
            r0.timeType = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardWebViewInfo setUrl(java.lang.String r1) {
            r0 = this;
            r0.url = r1
            return r0
    }
}
