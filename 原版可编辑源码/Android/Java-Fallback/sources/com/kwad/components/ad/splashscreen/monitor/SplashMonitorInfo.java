package com.kwad.components.ad.splashscreen.monitor;

public class SplashMonitorInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    public static final int CHECK_BACKUP_FAILED = 4;
    public static final int CHECK_BACKUP_SUCCESS = 3;
    public static final int CHECK_CACHE = 2;
    public static final int CHECK_INVALID_VIDEO = 5;
    public static final int CHECK_TIME_OUT = 7;
    public static final int ERROR_DOWNLOAD = 4;
    public static final int ERROR_NET = 1;
    public static final java.lang.String ERROR_NET_MSG = "networkError";
    public static final int ERROR_PRELOAD_ID_INVALID = 3;
    public static final java.lang.String ERROR_PRELOAD_ID_INVALID_MSG = "preloadIdError";
    public static final int ERROR_URL_INVALID = 2;
    public static final java.lang.String ERROR_URL_INVALID_MSG = "urlError";
    public static final int LOAD_STATUS_CHECK_FAILED = 5;
    public static final int LOAD_STATUS_CHECK_SUCCESS = 3;
    public static final int LOAD_STATUS_DATA_FINISH = 2;
    public static final int LOAD_STATUS_FAILED = 4;
    public static final int LOAD_STATUS_LOAD_DATA_PRE = 11;
    public static final int LOAD_STATUS_START = 1;
    public static final int LOAD_TYPE_CACHE = 2;
    public static final int LOAD_TYPE_ONLINE = 1;
    public static final int MATERIAL_IMAGE = 2;
    public static final int MATERIAL_VIDEO = 1;
    public static final int PRE_LOAD_FAIL = 3;
    public static final int PRE_LOAD_START = 1;
    public static final int PRE_LOAD_SUCCESS = 2;
    public static final int SHOW_AD_CALL = 4;
    public static final int SHOW_CALL = 6;
    public static final int SHOW_CALL_ERROR = 7;
    public static final int SHOW_END_RECORD = 8;
    public static final int SHOW_FAIL = 3;
    public static final int SHOW_START = 1;
    public static final int SHOW_SUCCESS = 2;
    public static final int SHOW_TK_OFFLINE_READY = 5;
    public static final int SINGLE_CACHE_FAIL = 2;
    public static final int SINGLE_CACHE_SUCCESS = 1;
    public static final int SPLASH_FROM_FRAGMENT = 2;
    public static final int SPLASH_FROM_VIEW = 1;
    public static final int TYPE_DOWNLOAD = 1;
    public static final int TYPE_UPDATE = 2;
    private static final long serialVersionUID = 3528420046810658543L;
    public long beforeLoadDataTime;
    public long cacheValidTime;
    public long checkDataTime;
    public int checkStatus;
    public long costTime;
    public int count;
    public long creativeId;
    public java.util.List<java.lang.String> creativeIds;
    public java.util.List<java.lang.Integer> elementTypes;
    public int errorCode;
    public java.lang.String errorMsg;
    public java.util.List<java.lang.String> ids;
    public java.lang.String interactiveStyle;
    public java.lang.String interactivityDefaultStyle;
    public boolean isRotateComposeTimeout;
    public boolean isWebTimeout;
    public long loadAndCheckDataTime;
    public long loadDataTime;
    public int materialType;
    public long nativeLoadTime;
    public long offlineLoadTime;
    public int offlineSource;
    public long posId;
    public java.lang.String preloadId;
    public java.util.List<java.lang.String> preloadIds;
    public long showEndTime;
    public long size;
    public long soLoadTime;
    public int soSource;
    public int status;
    public long tkDefaultTimeout;
    public long tkFileLoadTime;
    public long tkInitTime;
    public long tkRenderTime;
    public int totalCount;
    public int type;
    public java.lang.String url;
    public int viewSource;
    public long webLoadTime;

    public SplashMonitorInfo(long r1) {
            r0 = this;
            r0.<init>()
            r0.posId = r1
            return
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setBeforeLoadDataTime(long r1) {
            r0 = this;
            r0.beforeLoadDataTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setCacheValidTime(long r1) {
            r0 = this;
            r0.cacheValidTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setCheckDataTime(long r1) {
            r0 = this;
            r0.checkDataTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setCheckStatus(int r1) {
            r0 = this;
            r0.checkStatus = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setCostTime(long r1) {
            r0 = this;
            r0.costTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setCount(int r1) {
            r0 = this;
            r0.count = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setCreativeId(long r1) {
            r0 = this;
            r0.creativeId = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setCreativeIds(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.creativeIds = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setElementTypes(java.util.List<java.lang.Integer> r1) {
            r0 = this;
            r0.elementTypes = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setErrorCode(int r1) {
            r0 = this;
            r0.errorCode = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setErrorMsg(java.lang.String r1) {
            r0 = this;
            r0.errorMsg = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setIds(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.ids = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setInteractiveStyle(int r1) {
            r0 = this;
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.interactiveStyle = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setInteractivityDefaultStyle(int r1) {
            r0 = this;
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.interactivityDefaultStyle = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setLoadAndCheckDataTime(long r1) {
            r0 = this;
            r0.loadAndCheckDataTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setLoadDataTime(long r1) {
            r0 = this;
            r0.loadDataTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setMaterialType(int r1) {
            r0 = this;
            r0.materialType = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setNativeLoadTime(long r1) {
            r0 = this;
            r0.nativeLoadTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setOfflineLoadTime(long r1) {
            r0 = this;
            r0.offlineLoadTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setOfflineSource(int r1) {
            r0 = this;
            r0.offlineSource = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setPreloadId(java.lang.String r1) {
            r0 = this;
            r0.preloadId = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setPreloadIds(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.preloadIds = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setRotateComposeTimeout(boolean r1) {
            r0 = this;
            r0.isRotateComposeTimeout = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setShowEndTime(long r1) {
            r0 = this;
            r0.showEndTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setSize(long r1) {
            r0 = this;
            r0.size = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setSoLoadTime(long r1) {
            r0 = this;
            r0.soLoadTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setSoSource(int r1) {
            r0 = this;
            r0.soSource = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setStatus(int r1) {
            r0 = this;
            r0.status = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setTkDefaultTimeout(long r1) {
            r0 = this;
            r0.tkDefaultTimeout = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setTkFileLoadTime(long r1) {
            r0 = this;
            r0.tkFileLoadTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setTkInitTime(long r1) {
            r0 = this;
            r0.tkInitTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setTkRenderTime(long r1) {
            r0 = this;
            r0.tkRenderTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setTotalCount(int r1) {
            r0 = this;
            r0.totalCount = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setType(int r1) {
            r0 = this;
            r0.type = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setUrl(java.lang.String r1) {
            r0 = this;
            r0.url = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setViewSource(int r1) {
            r0 = this;
            r0.viewSource = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setWebLoadTime(long r1) {
            r0 = this;
            r0.webLoadTime = r1
            return r0
    }

    public com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo setWebTimeout(boolean r1) {
            r0 = this;
            r0.isWebTimeout = r1
            return r0
    }
}
