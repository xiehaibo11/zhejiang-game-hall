package com.ss.android.socialbase.downloader.setting;

public class DownloadSetting {
    private static final int POOL_SIZE = 16;
    private static final com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.setting.DownloadSetting> sCache = null;
    private static org.json.JSONObject sDisabledTaskKeys;
    private static final com.ss.android.socialbase.downloader.setting.DownloadSetting sGlobal = null;
    private static java.lang.Boolean sGlobalBugFixDefault;
    private static org.json.JSONObject sGlobalBugFixSetting;

    @java.lang.Deprecated
    private static org.json.JSONObject sGlobalSetting;
    private static com.ss.android.socialbase.downloader.setting.DownloadSetting sLastSetting;
    private static boolean sTaskSettingDisabled;
    private final java.lang.Boolean mBugFixDefault;
    private final org.json.JSONObject mBugFixSetting;
    private int mDownloadId;
    private final org.json.JSONObject mTaskSetting;

    static {
            com.ss.android.socialbase.downloader.utils.LruCache r0 = new com.ss.android.socialbase.downloader.utils.LruCache
            r1 = 16
            r0.<init>(r1, r1)
            com.ss.android.socialbase.downloader.setting.DownloadSetting.sCache = r0
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = new com.ss.android.socialbase.downloader.setting.DownloadSetting
            r1 = 0
            r0.<init>(r1)
            com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobal = r0
            init()
            return
    }

    private DownloadSetting(org.json.JSONObject r5) {
            r4 = this;
            r4.<init>()
            r4.mTaskSetting = r5
            r0 = 0
            if (r5 == 0) goto L35
            java.lang.String r1 = "bugfix"
            boolean r2 = isTaskKeyDisabled(r1)
            if (r2 != 0) goto L35
            org.json.JSONObject r5 = r5.optJSONObject(r1)
            if (r5 == 0) goto L31
            java.lang.String r1 = "default"
            boolean r2 = r5.has(r1)
            if (r2 == 0) goto L31
            boolean r2 = isTaskKeyDisabled(r1)
            if (r2 != 0) goto L31
            r0 = 0
            int r1 = r5.optInt(r1, r0)
            r2 = 1
            if (r1 != r2) goto L2d
            r0 = r2
        L2d:
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
        L31:
            r3 = r0
            r0 = r5
            r5 = r3
            goto L36
        L35:
            r5 = r0
        L36:
            r4.mBugFixSetting = r0
            r4.mBugFixDefault = r5
            return
    }

    public static void addTaskDownloadSetting(int r5, org.json.JSONObject r6) {
            if (r6 == 0) goto L52
            org.json.JSONObject r0 = getGlobalSettings()
            if (r6 == r0) goto L52
            boolean r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sTaskSettingDisabled
            if (r0 == 0) goto Ld
            goto L52
        Ld:
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.setting.DownloadSetting> r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sCache
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sLastSetting     // Catch: java.lang.Throwable -> L4f
            if (r1 == 0) goto L1b
            org.json.JSONObject r2 = r1.mTaskSetting     // Catch: java.lang.Throwable -> L4f
            if (r2 != r6) goto L1b
            r1.mDownloadId = r5     // Catch: java.lang.Throwable -> L4f
            goto L44
        L1b:
            r1 = 0
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.setting.DownloadSetting> r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sCache     // Catch: java.lang.Throwable -> L4f
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L4f
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L4f
        L26:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L39
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L4f
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = (com.ss.android.socialbase.downloader.setting.DownloadSetting) r3     // Catch: java.lang.Throwable -> L4f
            org.json.JSONObject r4 = r3.mTaskSetting     // Catch: java.lang.Throwable -> L4f
            if (r4 != r6) goto L26
            r3.mDownloadId = r5     // Catch: java.lang.Throwable -> L4f
            r1 = r3
        L39:
            if (r1 != 0) goto L42
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = new com.ss.android.socialbase.downloader.setting.DownloadSetting     // Catch: java.lang.Throwable -> L4f
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L4f
            r1.mDownloadId = r5     // Catch: java.lang.Throwable -> L4f
        L42:
            com.ss.android.socialbase.downloader.setting.DownloadSetting.sLastSetting = r1     // Catch: java.lang.Throwable -> L4f
        L44:
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.setting.DownloadSetting> r6 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sCache     // Catch: java.lang.Throwable -> L4f
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L4f
            r6.put(r5, r1)     // Catch: java.lang.Throwable -> L4f
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            return
        L4f:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            throw r5
        L52:
            return
    }

    private static com.ss.android.socialbase.downloader.setting.DownloadSetting create(int r1) {
            boolean r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sTaskSettingDisabled
            if (r0 == 0) goto L7
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobal
            return r1
        L7:
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r0 == 0) goto L1c
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r0.getDownloadInfo(r1)
            if (r1 == 0) goto L1c
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = create(r1)
            return r1
        L1c:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobal
            return r1
    }

    private static com.ss.android.socialbase.downloader.setting.DownloadSetting create(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            boolean r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sTaskSettingDisabled
            if (r0 == 0) goto L7
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobal
            return r1
        L7:
            java.lang.String r1 = r1.getDownloadSettingString()     // Catch: java.lang.Throwable -> L1c
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L1c
            if (r0 != 0) goto L20
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1c
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1c
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = new com.ss.android.socialbase.downloader.setting.DownloadSetting     // Catch: java.lang.Throwable -> L1c
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1c
            return r1
        L1c:
            r1 = move-exception
            r1.printStackTrace()
        L20:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobal
            return r1
    }

    public static org.json.JSONObject getGlobalSettings() {
            org.json.JSONObject r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadSetting()
            return r0
    }

    public static void init() {
            org.json.JSONObject r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadSetting()
            r1 = 0
            java.lang.String r2 = "disable_task_setting"
            int r2 = r0.optInt(r2, r1)
            r3 = 1
            if (r2 != r3) goto L10
            r2 = r3
            goto L11
        L10:
            r2 = r1
        L11:
            com.ss.android.socialbase.downloader.setting.DownloadSetting.sTaskSettingDisabled = r2
            java.lang.String r2 = "disabled_task_keys"
            org.json.JSONObject r2 = r0.optJSONObject(r2)
            com.ss.android.socialbase.downloader.setting.DownloadSetting.sDisabledTaskKeys = r2
            java.lang.String r2 = "bugfix"
            org.json.JSONObject r0 = r0.optJSONObject(r2)
            r2 = 0
            if (r0 == 0) goto L37
            java.lang.String r4 = "default"
            boolean r5 = r0.has(r4)
            if (r5 == 0) goto L37
            int r2 = r0.optInt(r4, r1)
            if (r2 != r3) goto L33
            r1 = r3
        L33:
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r1)
        L37:
            com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobalBugFixSetting = r0
            com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobalBugFixDefault = r2
            return
    }

    public static boolean isTaskKeyDisabled(java.lang.String r2) {
            org.json.JSONObject r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sDisabledTaskKeys
            r1 = 0
            if (r0 == 0) goto Ld
            int r2 = r0.optInt(r2, r1)
            r0 = 1
            if (r2 != r0) goto Ld
            return r0
        Ld:
            return r1
    }

    public static com.ss.android.socialbase.downloader.setting.DownloadSetting obtain(int r1) {
            r0 = 0
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = obtain(r1, r0)
            return r1
    }

    private static com.ss.android.socialbase.downloader.setting.DownloadSetting obtain(int r3, com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sLastSetting
            if (r0 == 0) goto L9
            int r1 = r0.mDownloadId
            if (r1 != r3) goto L9
            return r0
        L9:
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.setting.DownloadSetting> r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sCache
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.setting.DownloadSetting> r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sCache     // Catch: java.lang.Throwable -> L3d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L3d
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L3d
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = (com.ss.android.socialbase.downloader.setting.DownloadSetting) r1     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            if (r1 != 0) goto L38
            if (r4 != 0) goto L22
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = create(r3)
            goto L26
        L22:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = create(r4)
        L26:
            r1 = r4
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.setting.DownloadSetting> r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sCache
            monitor-enter(r4)
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.setting.DownloadSetting> r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sCache     // Catch: java.lang.Throwable -> L35
            java.lang.Integer r2 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L35
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L35
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L35
            goto L38
        L35:
            r3 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L35
            throw r3
        L38:
            r1.mDownloadId = r3
            com.ss.android.socialbase.downloader.setting.DownloadSetting.sLastSetting = r1
            return r1
        L3d:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            throw r3
    }

    public static com.ss.android.socialbase.downloader.setting.DownloadSetting obtain(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            if (r1 != 0) goto L5
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobal
            return r1
        L5:
            int r0 = r1.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = obtain(r0, r1)
            return r1
    }

    public static com.ss.android.socialbase.downloader.setting.DownloadSetting obtain(org.json.JSONObject r4) {
            if (r4 == 0) goto L43
            org.json.JSONObject r0 = getGlobalSettings()
            if (r4 == r0) goto L43
            boolean r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sTaskSettingDisabled
            if (r0 == 0) goto Ld
            goto L43
        Ld:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sLastSetting
            if (r0 == 0) goto L16
            org.json.JSONObject r1 = r0.mTaskSetting
            if (r1 != r4) goto L16
            return r0
        L16:
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.setting.DownloadSetting> r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sCache
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.setting.DownloadSetting> r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sCache     // Catch: java.lang.Throwable -> L40
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L40
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L40
        L23:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L40
            if (r2 == 0) goto L37
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L40
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = (com.ss.android.socialbase.downloader.setting.DownloadSetting) r2     // Catch: java.lang.Throwable -> L40
            org.json.JSONObject r3 = r2.mTaskSetting     // Catch: java.lang.Throwable -> L40
            if (r3 != r4) goto L23
            com.ss.android.socialbase.downloader.setting.DownloadSetting.sLastSetting = r2     // Catch: java.lang.Throwable -> L40
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L40
            return r2
        L37:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L40
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = new com.ss.android.socialbase.downloader.setting.DownloadSetting
            r0.<init>(r4)
            com.ss.android.socialbase.downloader.setting.DownloadSetting.sLastSetting = r0
            return r0
        L40:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L40
            throw r4
        L43:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobal
            return r4
    }

    public static com.ss.android.socialbase.downloader.setting.DownloadSetting obtainGlobal() {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobal
            return r0
    }

    public static void removeTaskDownloadSetting(int r2) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sLastSetting
            if (r0 == 0) goto Lb
            int r0 = r0.mDownloadId
            if (r0 != r2) goto Lb
            r0 = 0
            com.ss.android.socialbase.downloader.setting.DownloadSetting.sLastSetting = r0
        Lb:
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.setting.DownloadSetting> r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sCache
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.utils.LruCache<java.lang.Integer, com.ss.android.socialbase.downloader.setting.DownloadSetting> r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sCache     // Catch: java.lang.Throwable -> L19
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L19
            r1.remove(r2)     // Catch: java.lang.Throwable -> L19
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r2
    }

    public static void setGlobalBugFix(java.lang.String r1, boolean r2) {
            org.json.JSONObject r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobalBugFixSetting     // Catch: org.json.JSONException -> L15
            if (r0 != 0) goto Lb
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15
            r0.<init>()     // Catch: org.json.JSONException -> L15
            com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobalBugFixSetting = r0     // Catch: org.json.JSONException -> L15
        Lb:
            org.json.JSONObject r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobalBugFixSetting     // Catch: org.json.JSONException -> L15
            if (r2 == 0) goto L11
            r2 = 1
            goto L12
        L11:
            r2 = 0
        L12:
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L15
        L15:
            return
    }

    public boolean has(java.lang.String r2) {
            r1 = this;
            org.json.JSONObject r0 = r1.mTaskSetting
            if (r0 == 0) goto L11
            boolean r0 = isTaskKeyDisabled(r2)
            if (r0 != 0) goto L11
            org.json.JSONObject r0 = r1.mTaskSetting
            boolean r2 = r0.has(r2)
            return r2
        L11:
            org.json.JSONObject r0 = getGlobalSettings()
            boolean r2 = r0.has(r2)
            return r2
    }

    public java.lang.Object opt(java.lang.String r2) {
            r1 = this;
            org.json.JSONObject r0 = r1.mTaskSetting
            if (r0 == 0) goto L17
            boolean r0 = r0.has(r2)
            if (r0 == 0) goto L17
            boolean r0 = isTaskKeyDisabled(r2)
            if (r0 != 0) goto L17
            org.json.JSONObject r0 = r1.mTaskSetting
            java.lang.Object r2 = r0.opt(r2)
            return r2
        L17:
            org.json.JSONObject r0 = getGlobalSettings()
            java.lang.Object r2 = r0.opt(r2)
            return r2
    }

    public boolean optBoolean(java.lang.String r2) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.optBoolean(r2, r0)
            return r2
    }

    public boolean optBoolean(java.lang.String r2, boolean r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mTaskSetting
            if (r0 == 0) goto L17
            boolean r0 = r0.has(r2)
            if (r0 == 0) goto L17
            boolean r0 = isTaskKeyDisabled(r2)
            if (r0 != 0) goto L17
            org.json.JSONObject r0 = r1.mTaskSetting
            boolean r2 = r0.optBoolean(r2, r3)
            return r2
        L17:
            org.json.JSONObject r0 = getGlobalSettings()
            boolean r2 = r0.optBoolean(r2, r3)
            return r2
    }

    public boolean optBugFix(java.lang.String r2) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.optBugFix(r2, r0)
            return r2
    }

    public boolean optBugFix(java.lang.String r4, boolean r5) {
            r3 = this;
            org.json.JSONObject r0 = r3.mBugFixSetting
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L27
            boolean r0 = isTaskKeyDisabled(r4)
            if (r0 != 0) goto L27
            org.json.JSONObject r0 = r3.mBugFixSetting
            boolean r0 = r0.has(r4)
            if (r0 == 0) goto L1e
            org.json.JSONObject r0 = r3.mBugFixSetting
            int r4 = r0.optInt(r4, r5)
            if (r4 != r2) goto L1d
            r1 = r2
        L1d:
            return r1
        L1e:
            java.lang.Boolean r0 = r3.mBugFixDefault
            if (r0 == 0) goto L27
            boolean r4 = r0.booleanValue()
            return r4
        L27:
            org.json.JSONObject r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobalBugFixSetting
            if (r0 == 0) goto L44
            boolean r0 = r0.has(r4)
            if (r0 == 0) goto L3b
            org.json.JSONObject r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobalBugFixSetting
            int r4 = r0.optInt(r4, r5)
            if (r4 != r2) goto L3a
            r1 = r2
        L3a:
            return r1
        L3b:
            java.lang.Boolean r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.sGlobalBugFixDefault
            if (r4 == 0) goto L44
            boolean r4 = r4.booleanValue()
            return r4
        L44:
            return r5
    }

    public double optDouble(java.lang.String r3) {
            r2 = this;
            r0 = 9221120237041090560(0x7ff8000000000000, double:NaN)
            double r0 = r2.optDouble(r3, r0)
            return r0
    }

    public double optDouble(java.lang.String r2, double r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mTaskSetting
            if (r0 == 0) goto L17
            boolean r0 = r0.has(r2)
            if (r0 == 0) goto L17
            boolean r0 = isTaskKeyDisabled(r2)
            if (r0 != 0) goto L17
            org.json.JSONObject r0 = r1.mTaskSetting
            double r2 = r0.optDouble(r2, r3)
            return r2
        L17:
            org.json.JSONObject r0 = getGlobalSettings()
            double r2 = r0.optDouble(r2, r3)
            return r2
    }

    public int optInt(java.lang.String r2) {
            r1 = this;
            r0 = 0
            int r2 = r1.optInt(r2, r0)
            return r2
    }

    public int optInt(java.lang.String r2, int r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mTaskSetting
            if (r0 == 0) goto L17
            boolean r0 = r0.has(r2)
            if (r0 == 0) goto L17
            boolean r0 = isTaskKeyDisabled(r2)
            if (r0 != 0) goto L17
            org.json.JSONObject r0 = r1.mTaskSetting
            int r2 = r0.optInt(r2, r3)
            return r2
        L17:
            org.json.JSONObject r0 = getGlobalSettings()
            int r2 = r0.optInt(r2, r3)
            return r2
    }

    public org.json.JSONArray optJSONArray(java.lang.String r2) {
            r1 = this;
            org.json.JSONObject r0 = r1.mTaskSetting
            if (r0 == 0) goto L17
            boolean r0 = r0.has(r2)
            if (r0 == 0) goto L17
            boolean r0 = isTaskKeyDisabled(r2)
            if (r0 != 0) goto L17
            org.json.JSONObject r0 = r1.mTaskSetting
            org.json.JSONArray r2 = r0.optJSONArray(r2)
            return r2
        L17:
            org.json.JSONObject r0 = getGlobalSettings()
            org.json.JSONArray r2 = r0.optJSONArray(r2)
            return r2
    }

    public org.json.JSONObject optJSONObject(java.lang.String r2) {
            r1 = this;
            org.json.JSONObject r0 = r1.mTaskSetting
            if (r0 == 0) goto L17
            boolean r0 = r0.has(r2)
            if (r0 == 0) goto L17
            boolean r0 = isTaskKeyDisabled(r2)
            if (r0 != 0) goto L17
            org.json.JSONObject r0 = r1.mTaskSetting
            org.json.JSONObject r2 = r0.optJSONObject(r2)
            return r2
        L17:
            org.json.JSONObject r0 = getGlobalSettings()
            org.json.JSONObject r2 = r0.optJSONObject(r2)
            return r2
    }

    public long optLong(java.lang.String r3) {
            r2 = this;
            r0 = 0
            long r0 = r2.optLong(r3, r0)
            return r0
    }

    public long optLong(java.lang.String r2, long r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mTaskSetting
            if (r0 == 0) goto L17
            boolean r0 = r0.has(r2)
            if (r0 == 0) goto L17
            boolean r0 = isTaskKeyDisabled(r2)
            if (r0 != 0) goto L17
            org.json.JSONObject r0 = r1.mTaskSetting
            long r2 = r0.optLong(r2, r3)
            return r2
        L17:
            org.json.JSONObject r0 = getGlobalSettings()
            long r2 = r0.optLong(r2, r3)
            return r2
    }

    public java.lang.String optString(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = ""
            java.lang.String r2 = r1.optString(r2, r0)
            return r2
    }

    public java.lang.String optString(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mTaskSetting
            if (r0 == 0) goto L17
            boolean r0 = r0.has(r2)
            if (r0 == 0) goto L17
            boolean r0 = isTaskKeyDisabled(r2)
            if (r0 != 0) goto L17
            org.json.JSONObject r0 = r1.mTaskSetting
            java.lang.String r2 = r0.optString(r2, r3)
            return r2
        L17:
            org.json.JSONObject r0 = getGlobalSettings()
            java.lang.String r2 = r0.optString(r2, r3)
            return r2
    }
}
