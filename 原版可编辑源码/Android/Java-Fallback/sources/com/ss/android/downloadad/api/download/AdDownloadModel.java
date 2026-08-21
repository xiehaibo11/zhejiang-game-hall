package com.ss.android.downloadad.api.download;

public class AdDownloadModel implements com.ss.android.download.api.download.DownloadModel {
    protected java.lang.String mAppIcon;
    protected java.lang.String mAppName;
    protected boolean mAutoInstall;
    protected boolean mAutoInstallWithoutNotification;
    protected java.util.List<java.lang.String> mBackupUrls;
    protected java.util.List<java.lang.String> mClickTrackUrl;
    protected com.ss.android.download.api.model.DeepLink mDeepLink;
    protected boolean mDistinctDir;
    protected org.json.JSONObject mDownloadSettings;
    protected java.lang.String mDownloadUrl;
    protected boolean mEnablePause;
    protected int mExecutorGroup;
    protected long mExpectFileLength;
    protected org.json.JSONObject mExtra;
    protected long mExtraValue;
    protected java.lang.String mFileName;
    protected java.lang.String mFilePath;
    protected com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider mFileUriProvider;
    protected int mFunnelType;
    protected java.util.Map<java.lang.String, java.lang.String> mHeaders;
    protected long mId;
    protected boolean mIndependentProcess;
    protected boolean mIsAd;

    @java.lang.Deprecated
    protected boolean mIsInExternalPublicDir;
    protected boolean mIsShowNotification;
    protected boolean mIsShowToast;
    protected java.lang.String mLogExtra;
    protected java.lang.String mMd5;
    protected java.lang.String mMimeType;
    protected int mModelType;
    protected boolean mNeedWifi;
    protected java.lang.String mNotificationJumpUrl;
    protected java.lang.String mPackageName;
    protected com.ss.android.download.api.model.q mQuickAppModel;
    protected java.lang.String mSdkMonitorScene;
    protected java.lang.String mStartToast;
    protected int mVersionCode;
    protected java.lang.String mVersionName;

    public static final class Builder {
        com.ss.android.downloadad.api.download.AdDownloadModel model;

        public Builder() {
                r1 = this;
                r1.<init>()
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = new com.ss.android.downloadad.api.download.AdDownloadModel
                r0.<init>()
                r1.model = r0
                return
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel build() {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                return r0
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setAdId(long r1) {
                r0 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r0.setId(r1)
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setAppIcon(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mAppIcon = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setAppName(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mAppName = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setAutoInstall(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mAutoInstall = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setAutoInstallWithoutNotification(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mAutoInstallWithoutNotification = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setBackupUrls(java.util.List<java.lang.String> r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mBackupUrls = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setClickTrackUrl(java.util.List<java.lang.String> r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mClickTrackUrl = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setDeepLink(com.ss.android.download.api.model.DeepLink r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mDeepLink = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setDistinctDir(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mDistinctDir = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setDownloadSettings(org.json.JSONObject r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mDownloadSettings = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setDownloadUrl(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mDownloadUrl = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setEnablePause(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mEnablePause = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setExecutorGroup(int r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mExecutorGroup = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setExpectFileLength(long r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mExpectFileLength = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setExtra(org.json.JSONObject r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mExtra = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setExtraValue(long r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mExtraValue = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setFileName(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mFileName = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setFilePath(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mFilePath = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setFileUriProvider(com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mFileUriProvider = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setHeaders(java.util.Map<java.lang.String, java.lang.String> r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mHeaders = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setId(long r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mId = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setIsAd(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mIsAd = r2
                return r1
        }

        @java.lang.Deprecated
        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setIsInExternalPublicDir(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mIsInExternalPublicDir = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setIsShowNotification(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mIsShowNotification = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setIsShowToast(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mIsShowToast = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setLogExtra(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mLogExtra = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setMd5(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mMd5 = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setMimeType(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mMimeType = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setModelType(int r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mModelType = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setNeedIndependentProcess(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mIndependentProcess = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setNeedWifi(boolean r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mNeedWifi = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setNotificationJumpUrl(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mNotificationJumpUrl = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setPackageName(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mPackageName = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setQuickAppModel(com.ss.android.download.api.model.q r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mQuickAppModel = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setSdkMonitorScene(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mSdkMonitorScene = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setStartToast(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mStartToast = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setVersionCode(int r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mVersionCode = r2
                return r1
        }

        public com.ss.android.downloadad.api.download.AdDownloadModel.Builder setVersionName(java.lang.String r2) {
                r1 = this;
                com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.model
                r0.mVersionName = r2
                return r1
        }
    }

    protected AdDownloadModel() {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.mIsAd = r0
            r2.mIsShowToast = r0
            r2.mIsShowNotification = r0
            r2.mAutoInstall = r0
            r1 = 0
            r2.mNeedWifi = r1
            r1 = 2
            r2.mExecutorGroup = r1
            r2.mEnablePause = r0
            r2.mFunnelType = r0
            return
    }

    private static void appendBackupUrlsFromJson(org.json.JSONObject r3, com.ss.android.downloadad.api.download.AdDownloadModel.Builder r4) {
            java.lang.String r0 = "backup_urls"
            org.json.JSONArray r3 = r3.optJSONArray(r0)
            if (r3 == 0) goto L27
            int r0 = r3.length()
            if (r0 <= 0) goto L27
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L14:
            int r2 = r3.length()
            if (r1 >= r2) goto L24
            java.lang.String r2 = r3.optString(r1)
            r0.add(r2)
            int r1 = r1 + 1
            goto L14
        L24:
            r4.setBackupUrls(r0)
        L27:
            return
    }

    private static void appendDeepLinkFromJson(org.json.JSONObject r3, com.ss.android.downloadad.api.download.AdDownloadModel.Builder r4) {
            java.lang.String r0 = "open_url"
            java.lang.String r0 = r3.optString(r0)
            java.lang.String r1 = "web_url"
            java.lang.String r3 = r3.optString(r1)
            com.ss.android.download.api.model.DeepLink r1 = new com.ss.android.download.api.model.DeepLink
            r2 = 0
            r1.<init>(r0, r3, r2)
            r4.setDeepLink(r1)
            return
    }

    private static void appendHeaderMapFromJson(org.json.JSONObject r5, com.ss.android.downloadad.api.download.AdDownloadModel.Builder r6) {
            java.lang.String r0 = "header_keys"
            org.json.JSONArray r0 = r5.optJSONArray(r0)
            java.lang.String r1 = "header_values"
            org.json.JSONArray r5 = r5.optJSONArray(r1)
            if (r0 == 0) goto L2d
            if (r5 == 0) goto L2d
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r2 = 0
        L16:
            int r3 = r0.length()
            if (r2 >= r3) goto L2a
            java.lang.String r3 = r0.optString(r2)
            java.lang.String r4 = r5.optString(r2)
            r1.put(r3, r4)
            int r2 = r2 + 1
            goto L16
        L2a:
            r6.setHeaders(r1)
        L2d:
            return
    }

    private static void appendQuickAppUrlFromJson(org.json.JSONObject r1, com.ss.android.downloadad.api.download.AdDownloadModel.Builder r2) {
            java.lang.String r0 = "quick_app_url"
            java.lang.String r1 = r1.optString(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L1c
            com.ss.android.download.api.model.q$rg r0 = new com.ss.android.download.api.model.q$rg
            r0.<init>()
            com.ss.android.download.api.model.q$rg r1 = r0.rg(r1)
            com.ss.android.download.api.model.q r1 = r1.rg()
            r2.setQuickAppModel(r1)
        L1c:
            return
    }

    private static void appendTrackUrlFromJson(org.json.JSONObject r3, com.ss.android.downloadad.api.download.AdDownloadModel.Builder r4) {
            java.lang.String r0 = "click_track_urls"
            org.json.JSONArray r3 = r3.optJSONArray(r0)
            if (r3 == 0) goto L21
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        Le:
            int r2 = r3.length()
            if (r1 >= r2) goto L1e
            java.lang.String r2 = r3.optString(r1)
            r0.add(r2)
            int r1 = r1 + 1
            goto Le
        L1e:
            r4.setClickTrackUrl(r0)
        L21:
            return
    }

    public static com.ss.android.downloadad.api.download.AdDownloadModel fromJson(org.json.JSONObject r7) {
            if (r7 != 0) goto L4
            r7 = 0
            return r7
        L4:
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r0 = new com.ss.android.downloadad.api.download.AdDownloadModel$Builder
            r0.<init>()
            java.lang.String r1 = "id"
            long r1 = com.ss.android.download.api.q.df.rg(r7, r1)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r0.setAdId(r1)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "is_ad"
            r3 = 1
            int r2 = r7.optInt(r2, r3)     // Catch: java.lang.Exception -> L172
            r4 = 0
            if (r2 != r3) goto L1f
            r2 = r3
            goto L20
        L1f:
            r2 = r4
        L20:
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setIsAd(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "model_type"
            int r2 = r7.optInt(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setModelType(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "mime_type"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setMimeType(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "ext_value"
            long r5 = com.ss.android.download.api.q.df.rg(r7, r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setExtraValue(r5)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "log_extra"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setLogExtra(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "package_name"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setPackageName(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "download_url"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setDownloadUrl(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "app_name"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setAppName(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "app_icon"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setAppIcon(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "is_show_toast"
            int r2 = r7.optInt(r2, r3)     // Catch: java.lang.Exception -> L172
            if (r2 != r3) goto L7e
            r2 = r3
            goto L7f
        L7e:
            r2 = r4
        L7f:
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setIsShowToast(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "show_notification"
            int r2 = r7.optInt(r2, r3)     // Catch: java.lang.Exception -> L172
            if (r2 != r3) goto L8d
            r2 = r3
            goto L8e
        L8d:
            r2 = r4
        L8e:
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setIsShowNotification(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "need_wifi"
            int r2 = r7.optInt(r2)     // Catch: java.lang.Exception -> L172
            if (r2 != r3) goto L9c
            r2 = r3
            goto L9d
        L9c:
            r2 = r4
        L9d:
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setNeedWifi(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "md5"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setMd5(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "expect_file_length"
            long r5 = r7.optLong(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setExpectFileLength(r5)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "independent_process"
            int r2 = r7.optInt(r2)     // Catch: java.lang.Exception -> L172
            if (r2 != r3) goto Lbf
            r2 = r3
            goto Lc0
        Lbf:
            r2 = r4
        Lc0:
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setNeedIndependentProcess(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "version_code"
            int r2 = r7.optInt(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setVersionCode(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "version_name"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setVersionName(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "file_path"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setFilePath(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "file_name"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setFileName(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "notification_jump_url"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setNotificationJumpUrl(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "auto_install_without_notify"
            int r2 = r7.optInt(r2)     // Catch: java.lang.Exception -> L172
            if (r2 != r3) goto L100
            r2 = r3
            goto L101
        L100:
            r2 = r4
        L101:
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setAutoInstallWithoutNotification(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "executor_group"
            int r2 = r7.optInt(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setExecutorGroup(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "download_settings"
            org.json.JSONObject r2 = r7.optJSONObject(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setDownloadSettings(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "extra"
            org.json.JSONObject r2 = r7.optJSONObject(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setExtra(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "start_toast"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setStartToast(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "sdk_monitor_scene"
            java.lang.String r2 = r7.optString(r2)     // Catch: java.lang.Exception -> L172
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setSdkMonitorScene(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "auto_install"
            int r2 = r7.optInt(r2, r3)     // Catch: java.lang.Exception -> L172
            if (r2 != r3) goto L141
            r2 = r3
            goto L142
        L141:
            r2 = r4
        L142:
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setAutoInstall(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "distinct_dir"
            int r2 = r7.optInt(r2)     // Catch: java.lang.Exception -> L172
            if (r2 != r3) goto L150
            r2 = r3
            goto L151
        L150:
            r2 = r4
        L151:
            com.ss.android.downloadad.api.download.AdDownloadModel$Builder r1 = r1.setDistinctDir(r2)     // Catch: java.lang.Exception -> L172
            java.lang.String r2 = "enable_pause"
            int r2 = r7.optInt(r2, r3)     // Catch: java.lang.Exception -> L172
            if (r2 != r3) goto L15e
            goto L15f
        L15e:
            r3 = r4
        L15f:
            r1.setEnablePause(r3)     // Catch: java.lang.Exception -> L172
            appendDeepLinkFromJson(r7, r0)     // Catch: java.lang.Exception -> L172
            appendQuickAppUrlFromJson(r7, r0)     // Catch: java.lang.Exception -> L172
            appendTrackUrlFromJson(r7, r0)     // Catch: java.lang.Exception -> L172
            appendHeaderMapFromJson(r7, r0)     // Catch: java.lang.Exception -> L172
            appendBackupUrlsFromJson(r7, r0)     // Catch: java.lang.Exception -> L172
            goto L17c
        L172:
            r7 = move-exception
            com.ss.android.download.api.df.rg r1 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r2 = "AdDownloadModel fromJson"
            r1.rg(r7, r2)
        L17c:
            com.ss.android.downloadad.api.download.AdDownloadModel r7 = r0.build()
            return r7
    }

    @Override
    public boolean autoInstallWithoutNotification() {
            r1 = this;
            boolean r0 = r1.mAutoInstallWithoutNotification
            return r0
    }

    @Override
    public boolean distinctDir() {
            r1 = this;
            boolean r0 = r1.mDistinctDir
            return r0
    }

    @Override
    public boolean enablePause() {
            r1 = this;
            boolean r0 = r1.mEnablePause
            return r0
    }

    @Override
    public void forceHideNotification() {
            r1 = this;
            r0 = 0
            r1.mIsShowNotification = r0
            return
    }

    @Override
    public void forceHideToast() {
            r1 = this;
            r0 = 0
            r1.mIsShowToast = r0
            return
    }

    @Override
    public void forceWifi() {
            r1 = this;
            r0 = 1
            r1.mNeedWifi = r0
            return
    }

    @Override
    public java.lang.String getAppIcon() {
            r1 = this;
            java.lang.String r0 = r1.mAppIcon
            return r0
    }

    @Override
    public java.util.List<java.lang.String> getBackupUrls() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.mBackupUrls
            return r0
    }

    @Override
    public java.util.List<java.lang.String> getClickTrackUrl() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.mClickTrackUrl
            return r0
    }

    @Override
    public com.ss.android.download.api.model.DeepLink getDeepLink() {
            r1 = this;
            com.ss.android.download.api.model.DeepLink r0 = r1.mDeepLink
            return r0
    }

    @Override
    public com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider getDownloadFileUriProvider() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r0 = r1.mFileUriProvider
            return r0
    }

    @Override
    public org.json.JSONObject getDownloadSettings() {
            r1 = this;
            org.json.JSONObject r0 = r1.mDownloadSettings
            return r0
    }

    @Override
    public java.lang.String getDownloadUrl() {
            r1 = this;
            java.lang.String r0 = r1.mDownloadUrl
            return r0
    }

    @Override
    public int getExecutorGroup() {
            r1 = this;
            int r0 = r1.mExecutorGroup
            return r0
    }

    @Override
    public long getExpectFileLength() {
            r2 = this;
            long r0 = r2.mExpectFileLength
            return r0
    }

    @Override
    public org.json.JSONObject getExtra() {
            r1 = this;
            org.json.JSONObject r0 = r1.mExtra
            return r0
    }

    @Override
    public long getExtraValue() {
            r2 = this;
            long r0 = r2.mExtraValue
            return r0
    }

    @Override
    public java.lang.String getFileName() {
            r1 = this;
            java.lang.String r0 = r1.mFileName
            return r0
    }

    @Override
    public java.lang.String getFilePath() {
            r1 = this;
            java.lang.String r0 = r1.mFilePath
            return r0
    }

    @Override
    public int getFunnelType() {
            r1 = this;
            int r0 = r1.mFunnelType
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getHeaders() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.mHeaders
            return r0
    }

    @Override
    public long getId() {
            r2 = this;
            long r0 = r2.mId
            return r0
    }

    @Override
    public java.lang.String getLogExtra() {
            r1 = this;
            java.lang.String r0 = r1.mLogExtra
            return r0
    }

    @Override
    public java.lang.String getMd5() {
            r1 = this;
            java.lang.String r0 = r1.mMd5
            return r0
    }

    @Override
    public java.lang.String getMimeType() {
            r1 = this;
            java.lang.String r0 = r1.mMimeType
            return r0
    }

    @Override
    public int getModelType() {
            r1 = this;
            int r0 = r1.mModelType
            return r0
    }

    @Override
    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.mAppName
            return r0
    }

    @Override
    public java.lang.String getNotificationJumpUrl() {
            r1 = this;
            java.lang.String r0 = r1.mNotificationJumpUrl
            return r0
    }

    @Override
    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.mPackageName
            return r0
    }

    @Override
    public com.ss.android.download.api.model.q getQuickAppModel() {
            r1 = this;
            com.ss.android.download.api.model.q r0 = r1.mQuickAppModel
            return r0
    }

    @Override
    public java.lang.String getSdkMonitorScene() {
            r1 = this;
            java.lang.String r0 = r1.mSdkMonitorScene
            return r0
    }

    @Override
    public java.lang.String getStartToast() {
            r1 = this;
            java.lang.String r0 = r1.mStartToast
            return r0
    }

    @Override
    public int getVersionCode() {
            r1 = this;
            int r0 = r1.mVersionCode
            return r0
    }

    @Override
    public java.lang.String getVersionName() {
            r1 = this;
            java.lang.String r0 = r1.mVersionName
            return r0
    }

    @Override
    public boolean isAd() {
            r1 = this;
            boolean r0 = r1.mIsAd
            return r0
    }

    @Override
    public boolean isAutoInstall() {
            r1 = this;
            boolean r0 = r1.mAutoInstall
            return r0
    }

    @Override
    public boolean isInExternalPublicDir() {
            r1 = this;
            boolean r0 = r1.mIsInExternalPublicDir
            return r0
    }

    @Override
    public boolean isNeedWifi() {
            r1 = this;
            boolean r0 = r1.mNeedWifi
            return r0
    }

    @Override
    public boolean isShowNotification() {
            r1 = this;
            boolean r0 = r1.mIsShowNotification
            return r0
    }

    @Override
    public boolean isShowToast() {
            r1 = this;
            boolean r0 = r1.mIsShowToast
            return r0
    }

    @Override
    public boolean isVisibleInDownloadsUi() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public boolean needIndependentProcess() {
            r1 = this;
            boolean r0 = r1.mIndependentProcess
            return r0
    }

    @java.lang.Deprecated
    public com.ss.android.downloadad.api.download.AdDownloadModel setAdId(long r1) {
            r0 = this;
            com.ss.android.downloadad.api.download.AdDownloadModel r1 = r0.setId(r1)
            return r1
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setAppIcon(java.lang.String r1) {
            r0 = this;
            r0.mAppIcon = r1
            return r0
    }

    public void setAppName(java.lang.String r1) {
            r0 = this;
            r0.mAppName = r1
            return
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setAutoInstallWithoutNotification(boolean r1) {
            r0 = this;
            r0.mAutoInstallWithoutNotification = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setBackupUrls(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.mBackupUrls = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setClickTrackUrl(java.util.List<java.lang.String> r1) {
            r0 = this;
            r0.mClickTrackUrl = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setDeepLink(com.ss.android.download.api.model.DeepLink r1) {
            r0 = this;
            r0.mDeepLink = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setDownloadUrl(java.lang.String r1) {
            r0 = this;
            r0.mDownloadUrl = r1
            return r0
    }

    public void setExpectFileLength(long r1) {
            r0 = this;
            r0.mExpectFileLength = r1
            return
    }

    public void setExtra(org.json.JSONObject r1) {
            r0 = this;
            r0.mExtra = r1
            return
    }

    public void setExtraValue(long r1) {
            r0 = this;
            r0.mExtraValue = r1
            return
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setFileName(java.lang.String r1) {
            r0 = this;
            r0.mFileName = r1
            return r0
    }

    @Override
    public com.ss.android.download.api.download.DownloadModel setFilePath(java.lang.String r1) {
            r0 = this;
            com.ss.android.downloadad.api.download.AdDownloadModel r1 = r0.setFilePath(r1)
            return r1
    }

    @Override
    public com.ss.android.downloadad.api.download.AdDownloadModel setFilePath(java.lang.String r1) {
            r0 = this;
            r0.mFilePath = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setFileUriProvider(com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r1) {
            r0 = this;
            r0.mFileUriProvider = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setFunnelType(int r1) {
            r0 = this;
            r0.mFunnelType = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setHeaders(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.mHeaders = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setId(long r1) {
            r0 = this;
            r0.mId = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setIsAd(boolean r1) {
            r0 = this;
            r0.mIsAd = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setIsShowNotification(boolean r1) {
            r0 = this;
            r0.mIsShowNotification = r1
            return r0
    }

    public void setIsShowToast(boolean r1) {
            r0 = this;
            r0.mIsShowToast = r1
            return
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setLogExtra(java.lang.String r1) {
            r0 = this;
            r0.mLogExtra = r1
            return r0
    }

    public void setMd5(java.lang.String r1) {
            r0 = this;
            r0.mMd5 = r1
            return
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setMimeType(java.lang.String r1) {
            r0 = this;
            r0.mMimeType = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setModelType(int r1) {
            r0 = this;
            r0.mModelType = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setNeedIndependentProcess(boolean r1) {
            r0 = this;
            r0.mIndependentProcess = r1
            return r0
    }

    public void setNeedWifi(boolean r1) {
            r0 = this;
            r0.mNeedWifi = r1
            return
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setNotificationJumpUrl(java.lang.String r1) {
            r0 = this;
            r0.mNotificationJumpUrl = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setPackageName(java.lang.String r1) {
            r0 = this;
            r0.mPackageName = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setQuickAppModel(com.ss.android.download.api.model.q r1) {
            r0 = this;
            r0.mQuickAppModel = r1
            return r0
    }

    public void setSdkMonitorScene(java.lang.String r1) {
            r0 = this;
            r0.mSdkMonitorScene = r1
            return
    }

    public void setStartToast(java.lang.String r1) {
            r0 = this;
            r0.mStartToast = r1
            return
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setVersionCode(int r1) {
            r0 = this;
            r0.mVersionCode = r1
            return r0
    }

    public com.ss.android.downloadad.api.download.AdDownloadModel setVersionName(java.lang.String r1) {
            r0 = this;
            r0.mVersionName = r1
            return r0
    }

    @Override
    public boolean shouldDownloadWithPatchApply() {
            r2 = this;
            org.json.JSONObject r0 = r2.getDownloadSettings()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r1 = r2.getMimeType()
            boolean r0 = com.ss.android.download.api.q.df.rg(r0, r1)
            return r0
    }

    public org.json.JSONObject toJson() {
            r7 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "id"
            long r2 = r7.mId     // Catch: java.lang.Exception -> L216
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "is_ad"
            boolean r2 = r7.mIsAd     // Catch: java.lang.Exception -> L216
            r3 = 1
            r4 = 0
            if (r2 == 0) goto L16
            r2 = r3
            goto L17
        L16:
            r2 = r4
        L17:
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "model_type"
            int r2 = r7.mModelType     // Catch: java.lang.Exception -> L216
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "mime_type"
            java.lang.String r2 = r7.mMimeType     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "ext_value"
            long r5 = r7.mExtraValue     // Catch: java.lang.Exception -> L216
            java.lang.Long r2 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "log_extra"
            java.lang.String r2 = r7.mLogExtra     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "package_name"
            java.lang.String r2 = r7.mPackageName     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "download_url"
            java.lang.String r2 = r7.mDownloadUrl     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "app_name"
            java.lang.String r2 = r7.mAppName     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "app_icon"
            java.lang.String r2 = r7.mAppIcon     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "is_show_toast"
            boolean r2 = r7.mIsShowToast     // Catch: java.lang.Exception -> L216
            if (r2 == 0) goto L62
            r2 = r3
            goto L63
        L62:
            r2 = r4
        L63:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "show_notification"
            boolean r2 = r7.mIsShowNotification     // Catch: java.lang.Exception -> L216
            if (r2 == 0) goto L72
            r2 = r3
            goto L73
        L72:
            r2 = r4
        L73:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "need_wifi"
            boolean r2 = r7.mNeedWifi     // Catch: java.lang.Exception -> L216
            if (r2 == 0) goto L82
            r2 = r3
            goto L83
        L82:
            r2 = r4
        L83:
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "md5"
            java.lang.String r2 = r7.mMd5     // Catch: java.lang.Exception -> L216
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "expect_file_length"
            long r5 = r7.mExpectFileLength     // Catch: java.lang.Exception -> L216
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "independent_process"
            boolean r2 = r7.mIndependentProcess     // Catch: java.lang.Exception -> L216
            if (r2 == 0) goto L9c
            r2 = r3
            goto L9d
        L9c:
            r2 = r4
        L9d:
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "version_code"
            int r2 = r7.mVersionCode     // Catch: java.lang.Exception -> L216
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "version_name"
            java.lang.String r2 = r7.mVersionName     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "file_path"
            java.lang.String r2 = r7.mFilePath     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "file_name"
            java.lang.String r2 = r7.mFileName     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "notification_jump_url"
            java.lang.String r2 = r7.mNotificationJumpUrl     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "auto_install_without_notify"
            boolean r2 = r7.mAutoInstallWithoutNotification     // Catch: java.lang.Exception -> L216
            if (r2 == 0) goto Lcb
            r2 = r3
            goto Lcc
        Lcb:
            r2 = r4
        Lcc:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "executor_group"
            int r2 = r7.mExecutorGroup     // Catch: java.lang.Exception -> L216
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "start_toast"
            java.lang.String r2 = r7.mStartToast     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "sdk_monitor_scene"
            java.lang.String r2 = r7.mSdkMonitorScene     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "auto_install"
            boolean r2 = r7.mAutoInstall     // Catch: java.lang.Exception -> L216
            if (r2 == 0) goto Lf4
            r2 = r3
            goto Lf5
        Lf4:
            r2 = r4
        Lf5:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "distinct_dir"
            boolean r2 = r7.mDistinctDir     // Catch: java.lang.Exception -> L216
            if (r2 == 0) goto L104
            r2 = r3
            goto L105
        L104:
            r2 = r4
        L105:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "enable_pause"
            boolean r2 = r7.mEnablePause     // Catch: java.lang.Exception -> L216
            if (r2 == 0) goto L113
            goto L114
        L113:
            r3 = r4
        L114:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
            org.json.JSONObject r1 = r7.mDownloadSettings     // Catch: java.lang.Exception -> L216
            if (r1 == 0) goto L126
            java.lang.String r1 = "download_settings"
            org.json.JSONObject r2 = r7.mDownloadSettings     // Catch: java.lang.Exception -> L216
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L216
        L126:
            java.util.List<java.lang.String> r1 = r7.mBackupUrls     // Catch: java.lang.Exception -> L216
            if (r1 == 0) goto L158
            java.util.List<java.lang.String> r1 = r7.mBackupUrls     // Catch: java.lang.Exception -> L216
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Exception -> L216
            if (r1 != 0) goto L158
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L216
            r1.<init>()     // Catch: java.lang.Exception -> L216
            java.util.List<java.lang.String> r2 = r7.mBackupUrls     // Catch: java.lang.Exception -> L216
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L216
        L13d:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L216
            if (r3 == 0) goto L153
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L216
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L216
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L216
            if (r4 != 0) goto L13d
            r1.put(r3)     // Catch: java.lang.Exception -> L216
            goto L13d
        L153:
            java.lang.String r2 = "backup_urls"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L216
        L158:
            com.ss.android.download.api.model.DeepLink r1 = r7.mDeepLink     // Catch: java.lang.Exception -> L216
            if (r1 == 0) goto L18a
            com.ss.android.download.api.model.DeepLink r1 = r7.mDeepLink     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = r1.getOpenUrl()     // Catch: java.lang.Exception -> L216
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L216
            if (r1 != 0) goto L173
            java.lang.String r1 = "open_url"
            com.ss.android.download.api.model.DeepLink r2 = r7.mDeepLink     // Catch: java.lang.Exception -> L216
            java.lang.String r2 = r2.getOpenUrl()     // Catch: java.lang.Exception -> L216
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L216
        L173:
            com.ss.android.download.api.model.DeepLink r1 = r7.mDeepLink     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = r1.getWebUrl()     // Catch: java.lang.Exception -> L216
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L216
            if (r1 != 0) goto L18a
            java.lang.String r1 = "web_url"
            com.ss.android.download.api.model.DeepLink r2 = r7.mDeepLink     // Catch: java.lang.Exception -> L216
            java.lang.String r2 = r2.getWebUrl()     // Catch: java.lang.Exception -> L216
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L216
        L18a:
            com.ss.android.download.api.model.q r1 = r7.mQuickAppModel     // Catch: java.lang.Exception -> L216
            if (r1 == 0) goto L199
            java.lang.String r1 = "quick_app_url"
            com.ss.android.download.api.model.q r2 = r7.mQuickAppModel     // Catch: java.lang.Exception -> L216
            java.lang.String r2 = r2.rg()     // Catch: java.lang.Exception -> L216
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L216
        L199:
            java.util.List<java.lang.String> r1 = r7.mClickTrackUrl     // Catch: java.lang.Exception -> L216
            if (r1 == 0) goto L1c5
            java.util.List<java.lang.String> r1 = r7.mClickTrackUrl     // Catch: java.lang.Exception -> L216
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Exception -> L216
            if (r1 != 0) goto L1c5
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L216
            r1.<init>()     // Catch: java.lang.Exception -> L216
            java.util.List<java.lang.String> r2 = r7.mClickTrackUrl     // Catch: java.lang.Exception -> L216
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L216
        L1b0:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L216
            if (r3 == 0) goto L1c0
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L216
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L216
            r1.put(r3)     // Catch: java.lang.Exception -> L216
            goto L1b0
        L1c0:
            java.lang.String r2 = "click_track_urls"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L216
        L1c5:
            org.json.JSONObject r1 = r7.mExtra     // Catch: java.lang.Exception -> L216
            if (r1 == 0) goto L1d0
            java.lang.String r1 = "extra"
            org.json.JSONObject r2 = r7.mExtra     // Catch: java.lang.Exception -> L216
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L216
        L1d0:
            java.util.Map<java.lang.String, java.lang.String> r1 = r7.mHeaders     // Catch: java.lang.Exception -> L216
            if (r1 == 0) goto L220
            java.util.Map<java.lang.String, java.lang.String> r1 = r7.mHeaders     // Catch: java.lang.Exception -> L216
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Exception -> L216
            if (r1 != 0) goto L220
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L216
            r1.<init>()     // Catch: java.lang.Exception -> L216
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Exception -> L216
            r2.<init>()     // Catch: java.lang.Exception -> L216
            java.util.Map<java.lang.String, java.lang.String> r3 = r7.mHeaders     // Catch: java.lang.Exception -> L216
            java.util.Set r3 = r3.entrySet()     // Catch: java.lang.Exception -> L216
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L216
        L1f0:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Exception -> L216
            if (r4 == 0) goto L20b
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Exception -> L216
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Exception -> L216
            java.lang.Object r5 = r4.getKey()     // Catch: java.lang.Exception -> L216
            r1.put(r5)     // Catch: java.lang.Exception -> L216
            java.lang.Object r4 = r4.getKey()     // Catch: java.lang.Exception -> L216
            r2.put(r4)     // Catch: java.lang.Exception -> L216
            goto L1f0
        L20b:
            java.lang.String r3 = "header_keys"
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L216
            java.lang.String r1 = "header_values"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L216
            goto L220
        L216:
            r1 = move-exception
            com.ss.android.download.api.df.rg r2 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r3 = "AdDownloadModel toJson"
            r2.rg(r1, r3)
        L220:
            return r0
    }
}
