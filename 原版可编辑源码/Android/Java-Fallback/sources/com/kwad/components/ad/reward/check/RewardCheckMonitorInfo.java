package com.kwad.components.ad.reward.check;

public class RewardCheckMonitorInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    public static final int CHECK_TYPE_EXPOSURE = 1;
    public static final int CHECK_TYPE_REWARD = 2;
    public static final int ENVI_TYPE_NATIVE = 0;
    public static final int ENVI_TYPE_TK = 1;
    public static final int REQUEST_STATE_END = 2;
    public static final int REQUEST_STATE_START = 1;
    public static final long serialVersionUID = 1080394611500009098L;
    public int checkType;
    public int code;
    public long creativeId;
    public long dataLoadInterval;
    public int enviType;
    public java.lang.String errorMsg;
    public long posId;
    public int requestStatus;

    public RewardCheckMonitorInfo(long r1) {
            r0 = this;
            r0.<init>()
            r0.posId = r1
            return
    }

    public com.kwad.components.ad.reward.check.RewardCheckMonitorInfo setCheckType(int r1) {
            r0 = this;
            r0.checkType = r1
            return r0
    }

    public com.kwad.components.ad.reward.check.RewardCheckMonitorInfo setCode(int r1) {
            r0 = this;
            r0.code = r1
            return r0
    }

    public com.kwad.components.ad.reward.check.RewardCheckMonitorInfo setCreativeId(long r1) {
            r0 = this;
            r0.creativeId = r1
            return r0
    }

    public com.kwad.components.ad.reward.check.RewardCheckMonitorInfo setDataLoadInterval(long r1) {
            r0 = this;
            r0.dataLoadInterval = r1
            return r0
    }

    public com.kwad.components.ad.reward.check.RewardCheckMonitorInfo setEnviType(int r1) {
            r0 = this;
            r0.enviType = r1
            return r0
    }

    public com.kwad.components.ad.reward.check.RewardCheckMonitorInfo setErrorMsg(java.lang.String r1) {
            r0 = this;
            r0.errorMsg = r1
            return r0
    }

    public com.kwad.components.ad.reward.check.RewardCheckMonitorInfo setRequestStatus(int r1) {
            r0 = this;
            r0.requestStatus = r1
            return r0
    }
}
