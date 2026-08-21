package com.kwad.sdk.core.download;

public class DownloadParams extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    private static final long serialVersionUID = -4966891183505507851L;
    public boolean downloadEnablePause;
    public int downloadPlace;
    public java.lang.String filePath;
    public java.lang.String mAppIcon;
    public java.lang.String mAppName;
    public long mAppSize;
    public java.lang.String mDownloadid;
    public java.lang.String mFileMd5;
    public java.lang.String mFileUrl;
    public java.lang.String mPkgname;
    public java.lang.String mShortDesc;
    public int mTaskId;
    public java.lang.String mVersion;
    public java.lang.String mVersionCode;
    public boolean requestInstallPermission;

    public DownloadParams() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.downloadEnablePause = r0
            r0 = 1
            r1.downloadPlace = r0
            return
    }

    public static com.kwad.sdk.core.download.DownloadParams transform(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.download.DownloadParams r0 = new com.kwad.sdk.core.download.DownloadParams
            r0.<init>()
            java.lang.String r1 = r2.downloadId
            r0.mDownloadid = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r2.adBaseInfo
            java.lang.String r1 = r1.appName
            r0.mAppName = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r2.adBaseInfo
            java.lang.String r1 = r1.appPackageName
            r0.mPkgname = r1
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r2.adConversionInfo
            java.lang.String r1 = r1.appDownloadUrl
            r0.mFileUrl = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r2.adBaseInfo
            java.lang.String r1 = r1.appIconUrl
            r0.mAppIcon = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r2.adBaseInfo
            java.lang.String r1 = r1.adDescription
            r0.mShortDesc = r1
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r2.downloadSafeInfo
            if (r1 == 0) goto L33
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r2 = r2.downloadSafeInfo
            boolean r2 = r2.downloadPauseEnable
            if (r2 == 0) goto L33
            r2 = 1
            goto L34
        L33:
            r2 = 0
        L34:
            r0.downloadEnablePause = r2
            return r0
    }
}
