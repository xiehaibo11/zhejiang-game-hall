package com.kwad.components.ad.interstitial.monitor;

public class InterstitialMonitorInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    public static final int DOWNLOAD_STATUS_ERROR = 2;
    public static final int DOWNLOAD_STATUS_START = 1;
    public static final int DOWNLOAD_TYPE_ALL = 2;
    public static final int DOWNLOAD_TYPE_ONLINE = 1;
    public static final int DOWNLOAD_TYPE_PART = 3;
    public static final int LOAD_STATUS_AD_SHOWN = 4;
    public static final int LOAD_STATUS_DATA_FINISH = 2;
    public static final int LOAD_STATUS_FAILED = 5;
    public static final int LOAD_STATUS_LOAD_FINISH = 3;
    public static final int LOAD_STATUS_SHOW_AD_CALL = 6;
    public static final int LOAD_STATUS_START = 1;
    public static final int LOAD_TYPE_CACHE = 2;
    public static final int LOAD_TYPE_ONLINE = 1;
    public static final int TYPE_H5 = 2;
    public static final int TYPE_NATIVE = 1;
    public static final int TYPE_TK = 3;
    public static final int VIDEO_PLAY_ERROR = 2;
    public static final int VIDEO_PLAY_START = 1;
    private static final long serialVersionUID = 6882024284587637114L;
    public long creativeId;
    public long downloadDuration;
    public long downloadSize;
    public int downloadType;
    public int errorCode;
    public java.lang.String errorMsg;
    public int expectedRenderType;
    public long loadDataTime;
    public int materialType;
    public long posId;
    public long renderDuration;
    public int renderType;
    public int status;
    public int type;
    public long videoDuration;
    public java.lang.String videoUrl;

    public InterstitialMonitorInfo(long r1) {
            r0 = this;
            r0.<init>()
            r0.posId = r1
            return
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setCreativeId(long r1) {
            r0 = this;
            r0.creativeId = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setDownloadDuration(long r1) {
            r0 = this;
            r0.downloadDuration = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setDownloadSize(long r1) {
            r0 = this;
            r0.downloadSize = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setDownloadType(int r1) {
            r0 = this;
            r0.downloadType = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setErrorCode(int r1) {
            r0 = this;
            r0.errorCode = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setErrorMsg(java.lang.String r1) {
            r0 = this;
            r0.errorMsg = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setExpectedRenderType(int r2) {
            r1 = this;
            if (r2 != 0) goto L6
            r2 = 2
        L3:
            r1.expectedRenderType = r2
            goto Lb
        L6:
            r0 = 1
            if (r2 != r0) goto Lb
            r2 = 3
            goto L3
        Lb:
            return r1
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setLoadDataTime(long r1) {
            r0 = this;
            r0.loadDataTime = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setMaterialType(int r1) {
            r0 = this;
            r0.materialType = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setRenderDuration(long r1) {
            r0 = this;
            r0.renderDuration = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setRenderType(int r1) {
            r0 = this;
            r0.renderType = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setStatus(int r1) {
            r0 = this;
            r0.status = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setType(int r1) {
            r0 = this;
            r0.type = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setVideoDuration(long r1) {
            r0 = this;
            r0.videoDuration = r1
            return r0
    }

    public com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo setVideoUrl(java.lang.String r1) {
            r0 = this;
            r0.videoUrl = r1
            return r0
    }
}
