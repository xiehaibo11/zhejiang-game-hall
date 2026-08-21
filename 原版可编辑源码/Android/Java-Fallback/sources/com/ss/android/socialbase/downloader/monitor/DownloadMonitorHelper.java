package com.ss.android.socialbase.downloader.monitor;

public class DownloadMonitorHelper {
    private static final java.lang.String DEFAULT_MONITOR_SCENE = "default";

    public DownloadMonitorHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    private static org.json.JSONObject getMonitorJson(java.lang.String r10, com.ss.android.socialbase.downloader.model.DownloadInfo r11, com.ss.android.socialbase.downloader.exception.BaseException r12, int r13) {
            java.lang.String r0 = "setting_tag"
            r1 = 0
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L26c
            r2.<init>()     // Catch: org.json.JSONException -> L26c
            com.ss.android.socialbase.downloader.downloader.IMonitorConfig r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getMonitorConfig()     // Catch: org.json.JSONException -> L269
            java.lang.String r3 = ""
            r4 = 0
            if (r1 == 0) goto L22
            java.lang.String r5 = r1.getDeviceId()     // Catch: org.json.JSONException -> L269
            java.lang.String r6 = parseDevicePostfix(r5)     // Catch: org.json.JSONException -> L269
            java.lang.String r7 = r1.getAppId()     // Catch: org.json.JSONException -> L269
            int r1 = r1.getUpdateVersion()     // Catch: org.json.JSONException -> L269
            goto L26
        L22:
            r5 = r3
            r6 = r5
            r7 = r6
            r1 = r4
        L26:
            if (r12 == 0) goto L34
            boolean r8 = r12 instanceof com.ss.android.socialbase.downloader.exception.DownloadTTNetException     // Catch: org.json.JSONException -> L269
            if (r8 == 0) goto L34
            r8 = r12
            com.ss.android.socialbase.downloader.exception.DownloadTTNetException r8 = (com.ss.android.socialbase.downloader.exception.DownloadTTNetException) r8     // Catch: org.json.JSONException -> L269
            java.lang.String r8 = r8.getRequestLog()     // Catch: org.json.JSONException -> L269
            goto L35
        L34:
            r8 = r3
        L35:
            java.lang.String r9 = "event_page"
            r2.put(r9, r10)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "app_id"
            r2.put(r10, r7)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "device_id"
            r2.put(r10, r5)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "device_id_postfix"
            r2.put(r10, r6)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "update_version"
            r2.put(r10, r1)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "download_status"
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            if (r11 == 0) goto L24d
            int r10 = r11.getId()     // Catch: org.json.JSONException -> L269
            com.ss.android.socialbase.downloader.setting.DownloadSetting r10 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r10)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = r10.optString(r0)     // Catch: org.json.JSONException -> L269
            r2.put(r0, r10)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "download_id"
            int r13 = r11.getId()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "name"
            java.lang.String r13 = r11.getName()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "url"
            java.lang.String r13 = r11.getUrl()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "save_path"
            java.lang.String r13 = r11.getSavePath()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "download_time"
            long r0 = r11.getDownloadTime()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r0)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "cur_bytes"
            long r0 = r11.getCurBytes()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r0)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "total_bytes"
            long r0 = r11.getTotalBytes()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r0)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "network_quality"
            java.lang.String r13 = r11.getNetworkQuality()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "only_wifi"
            boolean r13 = r11.isOnlyWifi()     // Catch: org.json.JSONException -> L269
            r0 = 1
            if (r13 == 0) goto Lb7
            r13 = r0
            goto Lb8
        Lb7:
            r13 = r4
        Lb8:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "need_https_degrade"
            boolean r13 = r11.isNeedHttpsToHttpRetry()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto Lc5
            r13 = r0
            goto Lc6
        Lc5:
            r13 = r4
        Lc6:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "https_degrade_retry_used"
            boolean r13 = r11.isHttpsToHttpRetryUsed()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto Ld3
            r13 = r0
            goto Ld4
        Ld3:
            r13 = r4
        Ld4:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "md5"
            java.lang.String r13 = r11.getMd5()     // Catch: org.json.JSONException -> L269
            if (r13 != 0) goto Le1
            r13 = r3
            goto Le5
        Le1:
            java.lang.String r13 = r11.getMd5()     // Catch: org.json.JSONException -> L269
        Le5:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "chunk_count"
            int r13 = r11.getChunkCount()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "is_force"
            boolean r13 = r11.isForce()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto Lfb
            r13 = r0
            goto Lfc
        Lfb:
            r13 = r4
        Lfc:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "retry_count"
            int r13 = r11.getRetryCount()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "cur_retry_time"
            int r13 = r11.getCurRetryTime()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "need_retry_delay"
            boolean r13 = r11.isNeedRetryDelay()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto L11b
            r13 = r0
            goto L11c
        L11b:
            r13 = r4
        L11c:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "need_reuse_first_connection"
            boolean r13 = r11.isNeedReuseFirstConnection()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto L129
            r13 = r0
            goto L12a
        L129:
            r13 = r4
        L12a:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "default_http_service_backup"
            boolean r13 = r11.isNeedDefaultHttpServiceBackUp()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto L137
            r13 = r0
            goto L138
        L137:
            r13 = r4
        L138:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "retry_delay_status"
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r13 = r11.getRetryDelayStatus()     // Catch: org.json.JSONException -> L269
            int r13 = r13.ordinal()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "backup_url_used"
            boolean r13 = r11.isBackUpUrlUsed()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto L152
            r13 = r0
            goto L153
        L152:
            r13 = r4
        L153:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "download_byte_error_retry_status"
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r13 = r11.getByteInvalidRetryStatus()     // Catch: org.json.JSONException -> L269
            int r13 = r13.ordinal()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "forbidden_handler_status"
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r13 = r11.getAsyncHandleStatus()     // Catch: org.json.JSONException -> L269
            int r13 = r13.ordinal()     // Catch: org.json.JSONException -> L269
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "need_independent_process"
            boolean r13 = r11.isNeedIndependentProcess()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto L17a
            r13 = r0
            goto L17b
        L17a:
            r13 = r4
        L17b:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "head_connection_error_msg"
            java.lang.String r13 = r11.getHeadConnectionException()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto L18b
            java.lang.String r13 = r11.getHeadConnectionException()     // Catch: org.json.JSONException -> L269
            goto L18c
        L18b:
            r13 = r3
        L18c:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "extra"
            java.lang.String r13 = r11.getExtra()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto L19c
            java.lang.String r13 = r11.getExtra()     // Catch: org.json.JSONException -> L269
            goto L19d
        L19c:
            r13 = r3
        L19d:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "add_listener_to_same_task"
            boolean r13 = r11.isAddListenerToSameTask()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto L1a9
            goto L1aa
        L1a9:
            r0 = r4
        L1aa:
            r2.put(r10, r0)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "backup_url_count"
            java.util.List r13 = r11.getBackUpUrls()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto L1be
            java.util.List r13 = r11.getBackUpUrls()     // Catch: org.json.JSONException -> L269
            int r13 = r13.size()     // Catch: org.json.JSONException -> L269
            goto L1bf
        L1be:
            r13 = r4
        L1bf:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "cur_backup_url_index"
            java.util.List r13 = r11.getBackUpUrls()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto L1cf
            int r13 = r11.getCurBackUpUrlIndex()     // Catch: org.json.JSONException -> L269
            goto L1d0
        L1cf:
            r13 = -1
        L1d0:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "forbidden_urls"
            java.util.List r13 = r11.getForbiddenBackupUrls()     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto L1e4
            java.util.List r13 = r11.getForbiddenBackupUrls()     // Catch: org.json.JSONException -> L269
            java.lang.String r13 = r13.toString()     // Catch: org.json.JSONException -> L269
            goto L1e5
        L1e4:
            r13 = r3
        L1e5:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "task_id"
            java.lang.String r13 = r11.getTaskId()     // Catch: org.json.JSONException -> L269
            boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: org.json.JSONException -> L269
            if (r13 == 0) goto L1f6
            r13 = r3
            goto L1fa
        L1f6:
            java.lang.String r13 = r11.getTaskId()     // Catch: org.json.JSONException -> L269
        L1fa:
            r2.put(r10, r13)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = r11.getUrl()     // Catch: java.lang.Throwable -> L249
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L249
            if (r11 != 0) goto L236
            android.net.Uri r10 = android.net.Uri.parse(r10)     // Catch: java.lang.Throwable -> L249
            java.lang.String r11 = r10.getHost()     // Catch: java.lang.Throwable -> L249
            java.lang.String r13 = r10.getPath()     // Catch: java.lang.Throwable -> L249
            java.lang.String r10 = r10.getLastPathSegment()     // Catch: java.lang.Throwable -> L249
            boolean r0 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L249
            if (r0 != 0) goto L239
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L249
            if (r0 != 0) goto L239
            int r0 = r13.length()     // Catch: java.lang.Throwable -> L231
            int r1 = r10.length()     // Catch: java.lang.Throwable -> L231
            int r0 = r0 - r1
            java.lang.String r13 = r13.substring(r4, r0)     // Catch: java.lang.Throwable -> L231
            goto L239
        L231:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L249
            goto L239
        L236:
            r10 = r3
            r11 = r10
            r13 = r11
        L239:
            java.lang.String r0 = "url_host"
            r2.put(r0, r11)     // Catch: java.lang.Throwable -> L249
            java.lang.String r11 = "url_path"
            r2.put(r11, r13)     // Catch: java.lang.Throwable -> L249
            java.lang.String r11 = "url_last_path_segment"
            r2.put(r11, r10)     // Catch: java.lang.Throwable -> L249
            goto L24d
        L249:
            r10 = move-exception
            r10.printStackTrace()     // Catch: org.json.JSONException -> L269
        L24d:
            java.lang.String r10 = "error_code"
            if (r12 == 0) goto L255
            int r4 = r12.getErrorCode()     // Catch: org.json.JSONException -> L269
        L255:
            r2.put(r10, r4)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "error_msg"
            if (r12 == 0) goto L260
            java.lang.String r3 = r12.getErrorMessage()     // Catch: org.json.JSONException -> L269
        L260:
            r2.put(r10, r3)     // Catch: org.json.JSONException -> L269
            java.lang.String r10 = "request_log"
            r2.put(r10, r8)     // Catch: org.json.JSONException -> L269
            goto L271
        L269:
            r10 = move-exception
            r1 = r2
            goto L26d
        L26c:
            r10 = move-exception
        L26d:
            r10.printStackTrace()
            r2 = r1
        L271:
            return r2
    }

    private static boolean isMonitorStatus(int[] r3, int r4) {
            r0 = 0
            if (r3 == 0) goto L13
            int r1 = r3.length
            if (r1 <= 0) goto L13
            r1 = r0
        L7:
            int r2 = r3.length
            if (r1 >= r2) goto L13
            r2 = r3[r1]
            if (r4 != r2) goto L10
            r3 = 1
            return r3
        L10:
            int r1 = r1 + 1
            goto L7
        L13:
            return r0
    }

    public static void monitorDownloadConnect(com.ss.android.socialbase.downloader.network.IDownloadHeadHttpConnection r14, java.lang.String r15, java.lang.String r16, long r17, java.lang.String r19, int r20, java.io.IOException r21, com.ss.android.socialbase.downloader.model.DownloadInfo r22) {
            r1 = r14
            r2 = r21
            java.lang.String r3 = "setting_tag"
            if (r22 != 0) goto L8
            return
        L8:
            int r0 = r22.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r5 = 0
            java.lang.String r0 = "monitor_download_connect"
            int r6 = r4.optInt(r0, r5)
            if (r6 > 0) goto L1a
            return
        L1a:
            boolean r0 = android.text.TextUtils.isEmpty(r15)
            if (r0 == 0) goto L21
            return
        L21:
            r7 = -1
            r8 = 0
            if (r1 == 0) goto L3c
            int r7 = r14.getResponseCode()     // Catch: java.lang.Throwable -> L2a
            goto L2f
        L2a:
            r0 = move-exception
            r9 = r0
            r9.printStackTrace()     // Catch: java.lang.Throwable -> L13a
        L2f:
            boolean r0 = r1 instanceof com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection     // Catch: java.lang.Throwable -> L13a
            if (r0 == 0) goto L3c
            r0 = r1
            com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection r0 = (com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection) r0     // Catch: java.lang.Throwable -> L13a
            java.lang.String r0 = r0.getHostIp()     // Catch: java.lang.Throwable -> L13a
            r1 = r0
            goto L3d
        L3c:
            r1 = r8
        L3d:
            r0 = 400(0x190, float:5.6E-43)
            r9 = 200(0xc8, float:2.8E-43)
            java.lang.String r10 = ""
            if (r7 < r9) goto L47
            if (r7 < r0) goto L7e
        L47:
            int r11 = r22.getCurRetryTime()     // Catch: java.lang.Throwable -> L13a
            if (r11 == 0) goto L56
            int r11 = r22.getHttpStatusCode()     // Catch: java.lang.Throwable -> L13a
            if (r11 < r9) goto L55
            if (r11 < r0) goto L56
        L55:
            return
        L56:
            if (r2 == 0) goto L7e
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L13a
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkConnected(r0)     // Catch: java.lang.Throwable -> L13a
            if (r0 != 0) goto L65
            r7 = 1049(0x419, float:1.47E-42)
            goto L7e
        L65:
            com.ss.android.socialbase.downloader.utils.DownloadUtils.parseException(r2, r10)     // Catch: com.ss.android.socialbase.downloader.exception.BaseException -> L69 java.lang.Throwable -> L13a
            goto L7e
        L69:
            r0 = move-exception
            r2 = r0
            int r7 = r2.getErrorCode()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r0 = r2.getErrorMessage()     // Catch: java.lang.Throwable -> L13a
            boolean r9 = r2 instanceof com.ss.android.socialbase.downloader.exception.DownloadTTNetException     // Catch: java.lang.Throwable -> L13a
            if (r9 == 0) goto L7f
            com.ss.android.socialbase.downloader.exception.DownloadTTNetException r2 = (com.ss.android.socialbase.downloader.exception.DownloadTTNetException) r2     // Catch: java.lang.Throwable -> L13a
            java.lang.String r10 = r2.getRequestLog()     // Catch: java.lang.Throwable -> L13a
            goto L7f
        L7e:
            r0 = r8
        L7f:
            android.net.Uri r2 = android.net.Uri.parse(r15)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r9 = r2.getHost()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r11 = r2.getPath()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r2 = r2.getLastPathSegment()     // Catch: java.lang.Throwable -> L13a
            boolean r12 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L13a
            if (r12 != 0) goto La8
            boolean r12 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L13a
            if (r12 != 0) goto La8
            int r12 = r11.length()     // Catch: java.lang.Throwable -> La8
            int r13 = r2.length()     // Catch: java.lang.Throwable -> La8
            int r12 = r12 - r13
            java.lang.String r11 = r11.substring(r5, r12)     // Catch: java.lang.Throwable -> La8
        La8:
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L13a
            r5.<init>()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r12 = r4.optString(r3)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            r5.put(r3, r12)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            java.lang.String r3 = "url_host"
            r5.put(r3, r9)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            java.lang.String r3 = "host_ip"
            r9 = r16
            r5.putOpt(r3, r9)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            java.lang.String r3 = "host_real_ip"
            r5.putOpt(r3, r1)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            java.lang.String r1 = "url_path"
            r5.put(r1, r11)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            java.lang.String r1 = "url_last_path_segment"
            r5.put(r1, r2)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            java.lang.String r1 = "net_lib"
            r2 = r20
            r5.put(r1, r2)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            java.lang.String r1 = "connect_type"
            r2 = r19
            r5.put(r1, r2)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            java.lang.String r1 = "status_code"
            r5.put(r1, r7)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            java.lang.String r1 = "request_log"
            r5.put(r1, r10)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            if (r0 == 0) goto Lfa
            java.lang.String r1 = "exception_msg_length"
            r2 = 500(0x1f4, float:7.0E-43)
            int r1 = r4.optInt(r1, r2)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            java.lang.String r2 = "error_msg"
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getFixLengthString(r0, r1)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            r5.put(r2, r0)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
        Lfa:
            java.lang.String r0 = "connect_time"
            r1 = r17
            r5.put(r0, r1)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            java.lang.String r0 = "pkg_name"
            java.lang.String r1 = r22.getPackageName()     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            r5.put(r0, r1)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            java.lang.String r0 = "name"
            java.lang.String r1 = r22.getTitle()     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            r5.put(r0, r1)     // Catch: org.json.JSONException -> L114 java.lang.Throwable -> L13a
            goto L118
        L114:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L13a
        L118:
            r0 = 1
            java.lang.String r1 = "download_connect"
            r2 = 3
            if (r6 == r0) goto L120
            if (r6 != r2) goto L129
        L120:
            com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadMonitorListener()     // Catch: java.lang.Throwable -> L13a
            if (r0 == 0) goto L129
            r0.monitorEvent(r1, r5, r8, r8)     // Catch: java.lang.Throwable -> L13a
        L129:
            r0 = 2
            if (r6 == r0) goto L12e
            if (r6 != r2) goto L13e
        L12e:
            com.ss.android.socialbase.downloader.monitor.InnerEventListener r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getEventListener()     // Catch: java.lang.Throwable -> L13a
            int r2 = r22.getId()     // Catch: java.lang.Throwable -> L13a
            r0.onEvent(r2, r1, r5)     // Catch: java.lang.Throwable -> L13a
            goto L13e
        L13a:
            r0 = move-exception
            r0.printStackTrace()
        L13e:
            return
    }

    public static void monitorDownloadIO(com.ss.android.socialbase.downloader.setting.DownloadSetting r23, com.ss.android.socialbase.downloader.model.DownloadInfo r24, java.lang.String r25, com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r26, boolean r27, boolean r28, com.ss.android.socialbase.downloader.exception.BaseException r29, long r30, long r32, boolean r34, long r35, long r37, long r39, org.json.JSONObject r41) {
            r2 = r23
            r3 = r24
            r4 = r25
            r7 = r26
            r8 = r27
            r9 = r28
            r10 = r29
            r11 = r30
            r13 = r32
            r15 = r34
            r16 = r35
            r18 = r37
            r20 = r39
            java.lang.String r0 = "monitor_download_io"
            r1 = r23
            int r1 = r1.optInt(r0)
            java.lang.String r0 = "download_io"
            r5 = 0
            r6 = 0
            r22 = 0
            monitorIO(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r13, r15, r16, r18, r20, r22)
            return
    }

    private static void monitorIO(java.lang.String r19, int r20, com.ss.android.socialbase.downloader.setting.DownloadSetting r21, com.ss.android.socialbase.downloader.model.DownloadInfo r22, java.lang.String r23, java.lang.String r24, java.lang.String r25, com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r26, boolean r27, boolean r28, com.ss.android.socialbase.downloader.exception.BaseException r29, long r30, long r32, boolean r34, long r35, long r37, long r39, org.json.JSONObject r41) {
            r0 = r19
            r1 = r20
            r2 = r21
            r3 = r26
            r4 = r32
            java.lang.String r6 = "setting_tag"
            if (r1 <= 0) goto L191
            r7 = 0
            int r7 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r7 > 0) goto L16
            goto L191
        L16:
            android.net.Uri r7 = android.net.Uri.parse(r23)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r8 = r7.getHost()     // Catch: java.lang.Throwable -> L18d
            java.lang.String r9 = r7.getPath()     // Catch: java.lang.Throwable -> L18d
            java.lang.String r7 = r7.getLastPathSegment()     // Catch: java.lang.Throwable -> L18d
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L18d
            r11 = 0
            if (r10 != 0) goto L40
            boolean r10 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L18d
            if (r10 != 0) goto L40
            int r10 = r9.length()     // Catch: java.lang.Throwable -> L40
            int r12 = r7.length()     // Catch: java.lang.Throwable -> L40
            int r10 = r10 - r12
            java.lang.String r9 = r9.substring(r11, r10)     // Catch: java.lang.Throwable -> L40
        L40:
            if (r27 == 0) goto L45
            r14 = 1
        L43:
            r15 = 0
            goto L63
        L45:
            if (r28 == 0) goto L49
            r14 = 2
            goto L43
        L49:
            if (r29 == 0) goto L61
            android.content.Context r14 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L18d
            boolean r14 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkConnected(r14)     // Catch: java.lang.Throwable -> L18d
            if (r14 != 0) goto L58
            r14 = 1049(0x419, float:1.47E-42)
            goto L5c
        L58:
            int r14 = r29.getErrorCode()     // Catch: java.lang.Throwable -> L18d
        L5c:
            java.lang.String r15 = r29.getErrorMessage()     // Catch: java.lang.Throwable -> L18d
            goto L63
        L61:
            r14 = r11
            goto L43
        L63:
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L18d
            r11.<init>()     // Catch: java.lang.Throwable -> L18d
            java.lang.String r16 = ""
            r17 = -1
            if (r3 == 0) goto Lb3
            boolean r10 = r3 instanceof com.ss.android.socialbase.downloader.network.IDefaultDownloadHttpConnection     // Catch: java.lang.Throwable -> L18d
            if (r10 == 0) goto L74
            r10 = 0
            goto L75
        L74:
            r10 = 1
        L75:
            java.lang.String r12 = "X-Cache"
            java.lang.String r12 = r3.getResponseHeaderField(r12)     // Catch: java.lang.Throwable -> L18d
            boolean r18 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L18d
            if (r18 != 0) goto L8b
            java.lang.String r12 = r12.toLowerCase()     // Catch: java.lang.Throwable -> L18d
            java.lang.String r13 = "hit"
            boolean r17 = r12.contains(r13)     // Catch: java.lang.Throwable -> L18d
        L8b:
            java.lang.String r12 = "monitor_sla"
            r13 = 1
            int r12 = r2.optInt(r12, r13)     // Catch: java.lang.Throwable -> L18d
            if (r12 != r13) goto La2
            if (r27 != 0) goto La2
            if (r28 != 0) goto La2
            boolean r12 = r3 instanceof com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection     // Catch: java.lang.Throwable -> L18d
            if (r12 == 0) goto La2
            r12 = r3
            com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection r12 = (com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection) r12     // Catch: java.lang.Throwable -> L18d
            r12.monitorNetworkInfo(r11, r13)     // Catch: java.lang.Throwable -> L18d
        La2:
            boolean r12 = r3 instanceof com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection     // Catch: java.lang.Throwable -> L18d
            if (r12 == 0) goto Lac
            com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection r3 = (com.ss.android.socialbase.downloader.network.AbsDownloadHttpConnection) r3     // Catch: java.lang.Throwable -> L18d
            java.lang.String r16 = r3.getRequestLog()     // Catch: java.lang.Throwable -> L18d
        Lac:
            r0 = r30
            r3 = r16
            r12 = r17
            goto Lba
        Lb3:
            r0 = r30
            r3 = r16
            r10 = r17
            r12 = r10
        Lba:
            double r0 = (double) r0     // Catch: java.lang.Throwable -> L18d
            r16 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r0 = r0 / r16
            double r4 = (double) r4     // Catch: java.lang.Throwable -> L18d
            java.util.concurrent.TimeUnit r13 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L18d
            r26 = r0
            r0 = 1
            long r0 = r13.toNanos(r0)     // Catch: java.lang.Throwable -> L18d
            double r0 = (double) r0     // Catch: java.lang.Throwable -> L18d
            double r0 = r4 / r0
            java.lang.String r13 = r2.optString(r6)     // Catch: java.lang.Throwable -> L18d
            r11.put(r6, r13)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r6 = "url_host"
            r11.put(r6, r8)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r6 = "host_ip"
            r8 = r24
            r11.putOpt(r6, r8)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r6 = "host_real_ip"
            r8 = r25
            r11.putOpt(r6, r8)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r6 = "url_path"
            r11.put(r6, r9)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r6 = "url_last_path_segment"
            r11.put(r6, r7)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r6 = "net_lib"
            r11.put(r6, r10)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r6 = "hit_cdn_cache"
            r11.put(r6, r12)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r6 = "status_code"
            r11.put(r6, r14)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r6 = "request_log"
            r11.put(r6, r3)     // Catch: java.lang.Throwable -> L18d
            if (r15 == 0) goto L118
            java.lang.String r3 = "exception_msg_length"
            r6 = 500(0x1f4, float:7.0E-43)
            int r2 = r2.optInt(r3, r6)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r3 = "error_msg"
            java.lang.String r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getFixLengthString(r15, r2)     // Catch: java.lang.Throwable -> L18d
            r11.put(r3, r2)     // Catch: java.lang.Throwable -> L18d
        L118:
            java.lang.String r2 = "download_sec"
            r11.put(r2, r0)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r2 = "download_mb"
            r6 = r26
            r11.put(r2, r6)     // Catch: java.lang.Throwable -> L18d
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L131
            java.lang.String r2 = "download_speed"
            double r0 = r6 / r0
            r11.put(r2, r0)     // Catch: java.lang.Throwable -> L18d
        L131:
            if (r34 == 0) goto L14e
            java.lang.String r0 = "rw_read_time"
            r1 = r35
            double r1 = (double) r1     // Catch: java.lang.Throwable -> L18d
            double r1 = r1 / r4
            r11.put(r0, r1)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r0 = "rw_write_time"
            r1 = r37
            double r1 = (double) r1     // Catch: java.lang.Throwable -> L18d
            double r1 = r1 / r4
            r11.put(r0, r1)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r0 = "rw_sync_time"
            r1 = r39
            double r1 = (double) r1     // Catch: java.lang.Throwable -> L18d
            double r1 = r1 / r4
            r11.put(r0, r1)     // Catch: java.lang.Throwable -> L18d
        L14e:
            java.lang.String r0 = "pkg_name"
            java.lang.String r1 = r22.getPackageName()     // Catch: java.lang.Throwable -> L18d
            r11.put(r0, r1)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r0 = "name"
            java.lang.String r1 = r22.getTitle()     // Catch: java.lang.Throwable -> L18d
            r11.put(r0, r1)     // Catch: java.lang.Throwable -> L18d
            r0 = 3
            r1 = r20
            r2 = 1
            if (r1 == r2) goto L16d
            if (r1 != r0) goto L169
            goto L16d
        L169:
            r2 = 2
            r3 = r19
            goto L17d
        L16d:
            com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadMonitorListener()     // Catch: java.lang.Throwable -> L18d
            if (r2 == 0) goto L17a
            r4 = 0
            r3 = r19
            r2.monitorEvent(r3, r11, r4, r4)     // Catch: java.lang.Throwable -> L18d
            goto L17c
        L17a:
            r3 = r19
        L17c:
            r2 = 2
        L17d:
            if (r1 == r2) goto L181
            if (r1 != r0) goto L191
        L181:
            com.ss.android.socialbase.downloader.monitor.InnerEventListener r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getEventListener()     // Catch: java.lang.Throwable -> L18d
            int r1 = r22.getId()     // Catch: java.lang.Throwable -> L18d
            r0.onEvent(r1, r3, r11)     // Catch: java.lang.Throwable -> L18d
            goto L191
        L18d:
            r0 = move-exception
            r0.printStackTrace()
        L191:
            return
    }

    public static void monitorSegmentIO(com.ss.android.socialbase.downloader.setting.DownloadSetting r23, com.ss.android.socialbase.downloader.model.DownloadInfo r24, java.lang.String r25, java.lang.String r26, java.lang.String r27, boolean r28, com.ss.android.socialbase.downloader.network.IDownloadHttpConnection r29, com.ss.android.socialbase.downloader.exception.BaseException r30, long r31, long r33) {
            r2 = r23
            r3 = r24
            r4 = r25
            r5 = r26
            r6 = r27
            r8 = r28
            r7 = r29
            r10 = r30
            r11 = r31
            r13 = r33
            java.lang.String r0 = "monitor_segment_io"
            r1 = r23
            int r1 = r1.optInt(r0)
            java.lang.String r0 = "segment_io"
            r9 = 0
            r15 = 0
            r16 = -1
            r18 = -1
            r20 = -1
            r22 = 0
            monitorIO(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r13, r15, r16, r18, r20, r22)
            return
    }

    public static void monitorSegmentsError(com.ss.android.socialbase.downloader.model.DownloadInfo r4, java.util.List<com.ss.android.socialbase.downloader.segment.Segment> r5) {
            java.lang.String r0 = "segments_error"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L30
            r1.<init>()     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "segments"
            java.lang.String r5 = com.ss.android.socialbase.downloader.segment.Segment.toString(r5)     // Catch: java.lang.Throwable -> L30
            r1.put(r2, r5)     // Catch: java.lang.Throwable -> L30
            java.lang.String r5 = "cur_bytes"
            long r2 = r4.getCurBytes()     // Catch: java.lang.Throwable -> L30
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L30
            java.lang.String r5 = "total_bytes"
            long r2 = r4.getTotalBytes()     // Catch: java.lang.Throwable -> L30
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L30
            com.ss.android.socialbase.downloader.monitor.InnerEventListener r5 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getEventListener()     // Catch: java.lang.Throwable -> L30
            if (r5 == 0) goto L34
            int r4 = r4.getId()     // Catch: java.lang.Throwable -> L30
            r5.onEvent(r4, r0, r1)     // Catch: java.lang.Throwable -> L30
            goto L34
        L30:
            r4 = move-exception
            r4.printStackTrace()
        L34:
            return
    }

    public static void monitorSend(com.ss.android.socialbase.downloader.model.DownloadTask r4, com.ss.android.socialbase.downloader.exception.BaseException r5, int r6) {
            if (r4 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.getDownloadInfo()     // Catch: java.lang.Throwable -> L4a
            if (r0 != 0) goto La
            return
        La:
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r1 = r4.getMonitorDepend()     // Catch: java.lang.Throwable -> L4a
            boolean r2 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isMonitorStatus(r6)     // Catch: java.lang.Throwable -> L4a
            if (r2 != 0) goto L2f
            int[] r2 = r0.getExtraMonitorStatus()     // Catch: java.lang.Throwable -> L4a
            boolean r2 = isMonitorStatus(r2, r6)     // Catch: java.lang.Throwable -> L4a
            if (r2 != 0) goto L2f
            if (r1 == 0) goto L2f
            boolean r3 = r1 instanceof com.ss.android.socialbase.downloader.depend.AbsDownloadMonitorDepend     // Catch: java.lang.Throwable -> L4a
            if (r3 == 0) goto L2f
            r2 = r1
            com.ss.android.socialbase.downloader.depend.AbsDownloadMonitorDepend r2 = (com.ss.android.socialbase.downloader.depend.AbsDownloadMonitorDepend) r2     // Catch: java.lang.Throwable -> L4a
            int[] r2 = r2.getAdditionalMonitorStatus()     // Catch: java.lang.Throwable -> L4a
            boolean r2 = isMonitorStatus(r2, r6)     // Catch: java.lang.Throwable -> L4a
        L2f:
            if (r2 == 0) goto L4e
            com.ss.android.socialbase.downloader.depend.IDownloadDepend r4 = r4.getDepend()     // Catch: java.lang.Throwable -> L3b
            if (r4 == 0) goto L3f
            r4.monitorLogSend(r0, r5, r6)     // Catch: java.lang.Throwable -> L3b
            goto L3f
        L3b:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L4a
        L3f:
            monitorSendWithTaskMonitor(r1, r0, r5, r6)     // Catch: java.lang.Throwable -> L4a
            com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadMonitorListener()     // Catch: java.lang.Throwable -> L4a
            monitorSendWithGlobalSdkMonitor(r4, r0, r5, r6)     // Catch: java.lang.Throwable -> L4a
            goto L4e
        L4a:
            r4 = move-exception
            r4.printStackTrace()
        L4e:
            return
    }

    public static void monitorSendWithGlobalSdkMonitor(com.ss.android.socialbase.downloader.monitor.IDownloadMonitorListener r3, com.ss.android.socialbase.downloader.model.DownloadInfo r4, com.ss.android.socialbase.downloader.exception.BaseException r5, int r6) {
            if (r3 == 0) goto L42
            boolean r0 = r4.isNeedSDKMonitor()
            if (r0 == 0) goto L42
            java.lang.String r0 = r4.getMonitorScene()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            goto L42
        L13:
            java.lang.String r0 = r4.getMonitorScene()     // Catch: java.lang.Throwable -> L3e
            org.json.JSONObject r0 = getMonitorJson(r0, r4, r5, r6)     // Catch: java.lang.Throwable -> L3e
            if (r0 != 0) goto L22
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3e
            r0.<init>()     // Catch: java.lang.Throwable -> L3e
        L22:
            r1 = -1
            r2 = 0
            if (r6 != r1) goto L35
            java.lang.String r4 = "status"
            int r5 = r5.getErrorCode()     // Catch: java.lang.Throwable -> L3e
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r4 = "download_failed"
            r3.monitorEvent(r4, r0, r2, r2)     // Catch: java.lang.Throwable -> L3e
            goto L42
        L35:
            putMonitorJsonStatus(r6, r0, r4)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r4 = "download_common"
            r3.monitorEvent(r4, r0, r2, r2)     // Catch: java.lang.Throwable -> L3e
            goto L42
        L3e:
            r3 = move-exception
            r3.printStackTrace()
        L42:
            return
    }

    public static void monitorSendWithTaskMonitor(com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r2, com.ss.android.socialbase.downloader.model.DownloadInfo r3, com.ss.android.socialbase.downloader.exception.BaseException r4, int r5) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r2.getEventPage()     // Catch: java.lang.Throwable -> L1d
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1d
            if (r1 == 0) goto Lf
            java.lang.String r0 = "default"
        Lf:
            org.json.JSONObject r3 = getMonitorJson(r0, r3, r4, r5)     // Catch: java.lang.Throwable -> L1d
            if (r3 != 0) goto L1a
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1d
            r3.<init>()     // Catch: java.lang.Throwable -> L1d
        L1a:
            r2.monitorLogSend(r3)     // Catch: java.lang.Throwable -> L1d
        L1d:
            return
    }

    public static java.lang.String parseDevicePostfix(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isDigitsOnly(r4)     // Catch: java.lang.Exception -> L16
            if (r0 == 0) goto L1a
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> L16
            long r0 = r4.longValue()     // Catch: java.lang.Exception -> L16
            r2 = 100
            long r0 = r0 % r2
            java.lang.String r4 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> L16
            return r4
        L16:
            r4 = move-exception
            r4.printStackTrace()
        L1a:
            java.lang.String r4 = ""
            return r4
    }

    private static void putMonitorJsonStatus(int r4, org.json.JSONObject r5, com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws org.json.JSONException {
            r0 = -5
            if (r4 == r0) goto L38
            r0 = -4
            if (r4 == r0) goto L35
            r0 = -3
            if (r4 == r0) goto L23
            r6 = -2
            if (r4 == r6) goto L20
            if (r4 == 0) goto L1d
            r6 = 2
            if (r4 == r6) goto L1a
            r6 = 6
            if (r4 == r6) goto L17
            java.lang.String r4 = ""
            goto L3a
        L17:
            java.lang.String r4 = "download_first_start"
            goto L3a
        L1a:
            java.lang.String r4 = "download_start"
            goto L3a
        L1d:
            java.lang.String r4 = "download_create"
            goto L3a
        L20:
            java.lang.String r4 = "download_pause"
            goto L3a
        L23:
            double r0 = r6.getDownloadSpeed()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L32
            java.lang.String r4 = "download_speed"
            r5.put(r4, r0)
        L32:
            java.lang.String r4 = "download_success"
            goto L3a
        L35:
            java.lang.String r4 = "download_cancel"
            goto L3a
        L38:
            java.lang.String r4 = "download_uncomplete"
        L3a:
            java.lang.String r6 = "status"
            r5.put(r6, r4)
            return
    }
}
