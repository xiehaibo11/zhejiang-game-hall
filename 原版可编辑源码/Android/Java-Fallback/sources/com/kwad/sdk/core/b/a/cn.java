package com.kwad.sdk.core.b.a;

public final class cn implements com.kwad.sdk.core.d<com.kwad.sdk.core.download.DownloadParams> {
    public cn() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.download.DownloadParams r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "mDownloadid"
            java.lang.String r0 = r4.optString(r0)
            r3.mDownloadid = r0
            java.lang.String r0 = r3.mDownloadid
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.mDownloadid = r2
        L15:
            java.lang.String r0 = "mAppName"
            java.lang.String r0 = r4.optString(r0)
            r3.mAppName = r0
            java.lang.String r0 = r3.mAppName
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.mAppName = r2
        L25:
            java.lang.String r0 = "mPkgname"
            java.lang.String r0 = r4.optString(r0)
            r3.mPkgname = r0
            java.lang.String r0 = r3.mPkgname
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r3.mPkgname = r2
        L35:
            java.lang.String r0 = "mVersion"
            java.lang.String r0 = r4.optString(r0)
            r3.mVersion = r0
            java.lang.String r0 = r3.mVersion
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r3.mVersion = r2
        L45:
            java.lang.String r0 = "mVersionCode"
            java.lang.String r0 = r4.optString(r0)
            r3.mVersionCode = r0
            java.lang.String r0 = r3.mVersionCode
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L55
            r3.mVersionCode = r2
        L55:
            java.lang.String r0 = "mAppSize"
            long r0 = r4.optLong(r0)
            r3.mAppSize = r0
            java.lang.String r0 = "mFileMd5"
            java.lang.String r0 = r4.optString(r0)
            r3.mFileMd5 = r0
            java.lang.String r0 = r3.mFileMd5
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L6d
            r3.mFileMd5 = r2
        L6d:
            java.lang.String r0 = "mFileUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.mFileUrl = r0
            java.lang.String r0 = r3.mFileUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L7d
            r3.mFileUrl = r2
        L7d:
            java.lang.String r0 = "mAppIcon"
            java.lang.String r0 = r4.optString(r0)
            r3.mAppIcon = r0
            java.lang.String r0 = r3.mAppIcon
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L8d
            r3.mAppIcon = r2
        L8d:
            java.lang.String r0 = "mShortDesc"
            java.lang.String r0 = r4.optString(r0)
            r3.mShortDesc = r0
            java.lang.String r0 = r3.mShortDesc
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L9d
            r3.mShortDesc = r2
        L9d:
            java.lang.String r0 = "mTaskId"
            int r0 = r4.optInt(r0)
            r3.mTaskId = r0
            java.lang.String r0 = "filePath"
            java.lang.String r0 = r4.optString(r0)
            r3.filePath = r0
            java.lang.String r0 = r3.filePath
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lb5
            r3.filePath = r2
        Lb5:
            java.lang.String r0 = "requestInstallPermission"
            boolean r0 = r4.optBoolean(r0)
            r3.requestInstallPermission = r0
            java.lang.String r0 = "downloadEnablePause"
            boolean r0 = r4.optBoolean(r0)
            r3.downloadEnablePause = r0
            java.lang.String r0 = "downloadPlace"
            int r4 = r4.optInt(r0)
            r3.downloadPlace = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.download.DownloadParams r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            java.lang.String r0 = r6.mDownloadid
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r6.mDownloadid
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r6.mDownloadid
            java.lang.String r2 = "mDownloadid"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1c:
            java.lang.String r0 = r6.mAppName
            if (r0 == 0) goto L2f
            java.lang.String r0 = r6.mAppName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r6.mAppName
            java.lang.String r2 = "mAppName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L2f:
            java.lang.String r0 = r6.mPkgname
            if (r0 == 0) goto L42
            java.lang.String r0 = r6.mPkgname
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r6.mPkgname
            java.lang.String r2 = "mPkgname"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L42:
            java.lang.String r0 = r6.mVersion
            if (r0 == 0) goto L55
            java.lang.String r0 = r6.mVersion
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L55
            java.lang.String r0 = r6.mVersion
            java.lang.String r2 = "mVersion"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L55:
            java.lang.String r0 = r6.mVersionCode
            if (r0 == 0) goto L68
            java.lang.String r0 = r6.mVersionCode
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L68
            java.lang.String r0 = r6.mVersionCode
            java.lang.String r2 = "mVersionCode"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L68:
            long r2 = r6.mAppSize
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L77
            long r2 = r6.mAppSize
            java.lang.String r0 = "mAppSize"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L77:
            java.lang.String r0 = r6.mFileMd5
            if (r0 == 0) goto L8a
            java.lang.String r0 = r6.mFileMd5
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L8a
            java.lang.String r0 = r6.mFileMd5
            java.lang.String r2 = "mFileMd5"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L8a:
            java.lang.String r0 = r6.mFileUrl
            if (r0 == 0) goto L9d
            java.lang.String r0 = r6.mFileUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9d
            java.lang.String r0 = r6.mFileUrl
            java.lang.String r2 = "mFileUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L9d:
            java.lang.String r0 = r6.mAppIcon
            if (r0 == 0) goto Lb0
            java.lang.String r0 = r6.mAppIcon
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lb0
            java.lang.String r0 = r6.mAppIcon
            java.lang.String r2 = "mAppIcon"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lb0:
            java.lang.String r0 = r6.mShortDesc
            if (r0 == 0) goto Lc3
            java.lang.String r0 = r6.mShortDesc
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lc3
            java.lang.String r0 = r6.mShortDesc
            java.lang.String r2 = "mShortDesc"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lc3:
            int r0 = r6.mTaskId
            if (r0 == 0) goto Lce
            int r0 = r6.mTaskId
            java.lang.String r2 = "mTaskId"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lce:
            java.lang.String r0 = r6.filePath
            if (r0 == 0) goto Le1
            java.lang.String r0 = r6.filePath
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Le1
            java.lang.String r0 = r6.filePath
            java.lang.String r1 = "filePath"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Le1:
            boolean r0 = r6.requestInstallPermission
            if (r0 == 0) goto Lec
            boolean r0 = r6.requestInstallPermission
            java.lang.String r1 = "requestInstallPermission"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Lec:
            boolean r0 = r6.downloadEnablePause
            if (r0 == 0) goto Lf7
            boolean r0 = r6.downloadEnablePause
            java.lang.String r1 = "downloadEnablePause"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Lf7:
            int r0 = r6.downloadPlace
            if (r0 == 0) goto L102
            int r6 = r6.downloadPlace
            java.lang.String r0 = "downloadPlace"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        L102:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.download.DownloadParams r1 = (com.kwad.sdk.core.download.DownloadParams) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.download.DownloadParams r1 = (com.kwad.sdk.core.download.DownloadParams) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
