package com.kwad.sdk.core.b.a;

public final class hb implements com.kwad.sdk.core.d<com.kwad.components.ad.reward.monitor.RewardMonitorInfo> {
    public hb() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.ad.reward.monitor.RewardMonitorInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "load_type"
            int r0 = r4.optInt(r0)
            r3.loadType = r0
            java.lang.String r0 = "load_status"
            int r0 = r4.optInt(r0)
            r3.loadStatus = r0
            java.lang.String r0 = "ad_count"
            int r0 = r4.optInt(r0)
            r3.adCount = r0
            java.lang.String r0 = "load_data_duration_ms"
            long r0 = r4.optLong(r0)
            r3.loadDataDuration = r0
            java.lang.String r0 = "download_duration_ms"
            long r0 = r4.optLong(r0)
            r3.downloadDuration = r0
            java.lang.String r0 = "total_duration_ms"
            long r0 = r4.optLong(r0)
            r3.totalDuration = r0
            java.lang.String r0 = "download_type"
            int r0 = r4.optInt(r0)
            r3.downloadType = r0
            java.lang.String r0 = "download_size"
            long r0 = r4.optLong(r0)
            r3.downloadSize = r0
            java.lang.String r0 = "error_code"
            int r0 = r4.optInt(r0)
            r3.errorCode = r0
            java.lang.String r0 = "error_msg"
            java.lang.String r0 = r4.optString(r0)
            r3.errorMsg = r0
            java.lang.String r0 = r3.errorMsg
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L5d
            r3.errorMsg = r2
        L5d:
            java.lang.String r0 = "creative_id"
            long r0 = r4.optLong(r0)
            r3.creativeId = r0
            java.lang.String r0 = "video_url"
            java.lang.String r0 = r4.optString(r0)
            r3.videoUrl = r0
            java.lang.String r0 = r3.videoUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L75
            r3.videoUrl = r2
        L75:
            java.lang.String r0 = "video_duration_ms"
            long r1 = r4.optLong(r0)
            r3.videoDuration = r1
            java.lang.String r1 = "data_load_interval_duration_ms"
            long r1 = r4.optLong(r1)
            r3.dataLoadInterval = r1
            java.lang.String r1 = "data_download_interval_duration_ms"
            long r1 = r4.optLong(r1)
            r3.dataDownloadInterval = r1
            java.lang.String r1 = "render_duration_ms"
            long r1 = r4.optLong(r1)
            r3.renderDuration = r1
            long r0 = r4.optLong(r0)
            r3.currentDuration = r0
            java.lang.String r0 = "page_status"
            int r0 = r4.optInt(r0)
            r3.pageStatus = r0
            java.lang.String r0 = "reward_type"
            int r0 = r4.optInt(r0)
            r3.rewardType = r0
            java.lang.String r0 = "task_type"
            int r0 = r4.optInt(r0)
            r3.taskType = r0
            java.lang.String r0 = "task_step"
            int r0 = r4.optInt(r0)
            r3.taskStep = r0
            java.lang.String r0 = "pos_Id"
            long r0 = r4.optLong(r0)
            r3.posId = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.components.ad.reward.monitor.RewardMonitorInfo r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            int r0 = r6.loadType
            if (r0 == 0) goto L12
            int r0 = r6.loadType
            java.lang.String r1 = "load_type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L12:
            int r0 = r6.loadStatus
            if (r0 == 0) goto L1d
            int r0 = r6.loadStatus
            java.lang.String r1 = "load_status"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L1d:
            int r0 = r6.adCount
            if (r0 == 0) goto L28
            int r0 = r6.adCount
            java.lang.String r1 = "ad_count"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L28:
            long r0 = r6.loadDataDuration
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L37
            long r0 = r6.loadDataDuration
            java.lang.String r4 = "load_data_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L37:
            long r0 = r6.downloadDuration
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L44
            long r0 = r6.downloadDuration
            java.lang.String r4 = "download_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L44:
            long r0 = r6.totalDuration
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L51
            long r0 = r6.totalDuration
            java.lang.String r4 = "total_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L51:
            int r0 = r6.downloadType
            if (r0 == 0) goto L5c
            int r0 = r6.downloadType
            java.lang.String r1 = "download_type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L5c:
            long r0 = r6.downloadSize
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L69
            long r0 = r6.downloadSize
            java.lang.String r4 = "download_size"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L69:
            int r0 = r6.errorCode
            if (r0 == 0) goto L74
            int r0 = r6.errorCode
            java.lang.String r1 = "error_code"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L74:
            java.lang.String r0 = r6.errorMsg
            java.lang.String r1 = ""
            if (r0 == 0) goto L89
            java.lang.String r0 = r6.errorMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L89
            java.lang.String r0 = r6.errorMsg
            java.lang.String r4 = "error_msg"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L89:
            long r4 = r6.creativeId
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L96
            long r4 = r6.creativeId
            java.lang.String r0 = "creative_id"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        L96:
            java.lang.String r0 = r6.videoUrl
            if (r0 == 0) goto La9
            java.lang.String r0 = r6.videoUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto La9
            java.lang.String r0 = r6.videoUrl
            java.lang.String r1 = "video_url"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        La9:
            long r0 = r6.videoDuration
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            java.lang.String r1 = "video_duration_ms"
            if (r0 == 0) goto Lb6
            long r4 = r6.videoDuration
            com.kwad.sdk.utils.t.putValue(r7, r1, r4)
        Lb6:
            long r4 = r6.dataLoadInterval
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Lc3
            long r4 = r6.dataLoadInterval
            java.lang.String r0 = "data_load_interval_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        Lc3:
            long r4 = r6.dataDownloadInterval
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Ld0
            long r4 = r6.dataDownloadInterval
            java.lang.String r0 = "data_download_interval_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        Ld0:
            long r4 = r6.renderDuration
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Ldd
            long r4 = r6.renderDuration
            java.lang.String r0 = "render_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r0, r4)
        Ldd:
            long r4 = r6.currentDuration
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Le8
            long r4 = r6.currentDuration
            com.kwad.sdk.utils.t.putValue(r7, r1, r4)
        Le8:
            int r0 = r6.pageStatus
            if (r0 == 0) goto Lf3
            int r0 = r6.pageStatus
            java.lang.String r1 = "page_status"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Lf3:
            int r0 = r6.rewardType
            if (r0 == 0) goto Lfe
            int r0 = r6.rewardType
            java.lang.String r1 = "reward_type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Lfe:
            int r0 = r6.taskType
            if (r0 == 0) goto L109
            int r0 = r6.taskType
            java.lang.String r1 = "task_type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L109:
            int r0 = r6.taskStep
            if (r0 == 0) goto L114
            int r0 = r6.taskStep
            java.lang.String r1 = "task_step"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L114:
            long r0 = r6.posId
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L121
            long r0 = r6.posId
            java.lang.String r6 = "pos_Id"
            com.kwad.sdk.utils.t.putValue(r7, r6, r0)
        L121:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r1 = (com.kwad.components.ad.reward.monitor.RewardMonitorInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.reward.monitor.RewardMonitorInfo r1 = (com.kwad.components.ad.reward.monitor.RewardMonitorInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
