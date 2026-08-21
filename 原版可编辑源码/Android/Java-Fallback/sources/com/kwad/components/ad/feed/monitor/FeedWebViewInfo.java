package com.kwad.components.ad.feed.monitor;

public class FeedWebViewInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    private static final long serialVersionUID = -4316140680874648788L;
    public long durationMs;
    public java.lang.String event;
    public java.lang.String sceneId;
    public int timeType;
    public java.lang.String url;

    public FeedWebViewInfo() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.event = r0
            r2.url = r0
            r2.sceneId = r0
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

    public com.kwad.components.ad.feed.monitor.FeedWebViewInfo setDurationMs(long r1) {
            r0 = this;
            r0.durationMs = r1
            return r0
    }

    public com.kwad.components.ad.feed.monitor.FeedWebViewInfo setEvent(java.lang.String r1) {
            r0 = this;
            r0.event = r1
            return r0
    }

    public com.kwad.components.ad.feed.monitor.FeedWebViewInfo setSceneId(java.lang.String r1) {
            r0 = this;
            r0.sceneId = r1
            return r0
    }

    public com.kwad.components.ad.feed.monitor.FeedWebViewInfo setTimeType(int r1) {
            r0 = this;
            r0.timeType = r1
            return r0
    }

    public com.kwad.components.ad.feed.monitor.FeedWebViewInfo setUrl(java.lang.String r1) {
            r0 = this;
            r0.url = r1
            return r0
    }
}
