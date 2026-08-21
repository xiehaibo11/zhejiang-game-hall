package com.kwad.components.ad.reward.monitor;

public class RewardMonitorInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    public static final int DOWNLOAD_TYPE_ALL = 2;
    public static final int DOWNLOAD_TYPE_ONLINE = 1;
    public static final int DOWNLOAD_TYPE_PART = 3;
    public static final int LOAD_STATUS_DATA_FINISH = 2;
    public static final int LOAD_STATUS_FAIL = 4;
    public static final int LOAD_STATUS_LOAD_FINISH = 3;
    public static final int LOAD_STATUS_START = 1;
    public static final int LOAD_TYPE_LOCAL = 2;
    public static final int LOAD_TYPE_NET = 1;
    public static final int PAGE_STATUS_ENTRY = 1;
    public static final int PAGE_STATUS_SHOW = 2;
    public static final int PAGE_STATUS_SHOW_AD_CALL = 3;
    public static final int REWARD_TYPE_DEEP = 1;
    public static final int REWARD_TYPE_NORMAL = 0;
    public static final long serialVersionUID = 1080394611500009098L;
    public int adCount;
    public long creativeId;
    public long currentDuration;
    public long dataDownloadInterval;
    public long dataLoadInterval;
    public long downloadDuration;
    public long downloadSize;
    public int downloadType;
    public int errorCode;
    public java.lang.String errorMsg;
    public long loadDataDuration;
    public int loadStatus;
    public int loadType;
    public int pageStatus;
    public long posId;
    public long renderDuration;
    public int rewardType;
    public int taskStep;
    public int taskType;
    public long totalDuration;
    public long videoDuration;
    public java.lang.String videoUrl;

    public RewardMonitorInfo(long r2) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.rewardType = r0
            r1.taskType = r0
            r1.taskStep = r0
            r1.posId = r2
            return
    }

    @Override
    public void afterToJson(org.json.JSONObject r4) {
            r3 = this;
            super.afterToJson(r4)
            int r0 = r3.rewardType
            java.lang.String r1 = "reward_type"
            r2 = -1
            if (r0 == r2) goto Le
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            goto L11
        Le:
            r4.remove(r1)
        L11:
            int r0 = r3.taskType
            java.lang.String r1 = "task_type"
            if (r0 == r2) goto L1b
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            goto L1e
        L1b:
            r4.remove(r1)
        L1e:
            int r0 = r3.taskStep
            java.lang.String r1 = "task_step"
            if (r0 == r2) goto L28
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            return
        L28:
            r4.remove(r1)
            return
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setAdCount(int r1) {
            r0 = this;
            r0.adCount = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setCreativeId(long r1) {
            r0 = this;
            r0.creativeId = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setCurrentDuration(long r1) {
            r0 = this;
            r0.currentDuration = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setDataDownloadInterval(long r1) {
            r0 = this;
            r0.dataDownloadInterval = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setDataLoadInterval(long r1) {
            r0 = this;
            r0.dataLoadInterval = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setDownloadDuration(long r1) {
            r0 = this;
            r0.downloadDuration = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setDownloadSize(long r1) {
            r0 = this;
            r0.downloadSize = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setDownloadType(int r1) {
            r0 = this;
            r0.downloadType = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setErrorCode(int r1) {
            r0 = this;
            r0.errorCode = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setErrorMsg(java.lang.String r1) {
            r0 = this;
            r0.errorMsg = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setLoadDataDuration(long r1) {
            r0 = this;
            r0.loadDataDuration = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setLoadStatus(int r1) {
            r0 = this;
            r0.loadStatus = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setLoadType(int r1) {
            r0 = this;
            r0.loadType = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setPageStatus(int r1) {
            r0 = this;
            r0.pageStatus = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setRenderDuration(long r1) {
            r0 = this;
            r0.renderDuration = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setRewardType(int r1) {
            r0 = this;
            r0.rewardType = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setTaskStep(int r1) {
            r0 = this;
            r0.taskStep = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setTaskType(int r1) {
            r0 = this;
            r0.taskType = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setTotalDuration(long r1) {
            r0 = this;
            r0.totalDuration = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setVideoDuration(long r1) {
            r0 = this;
            r0.videoDuration = r1
            return r0
    }

    public com.kwad.components.ad.reward.monitor.RewardMonitorInfo setVideoUrl(java.lang.String r1) {
            r0 = this;
            r0.videoUrl = r1
            return r0
    }
}
