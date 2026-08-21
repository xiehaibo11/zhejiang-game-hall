package com.mbridge.msdk.mbjscommon.windvane;

public abstract class AbsMbridgeDownload extends com.mbridge.msdk.mbjscommon.windvane.AbsFeedBackForH5 {
    private static final int HANDLER_WHAT_KEY = 1;
    private long DEFAULT_PROGRESS_NOTIFY_INTERVAL;
    private java.lang.String JSON_KEY_AKDLUI;
    private java.lang.String JSON_KEY_CAMPAIGN;
    private java.lang.String JSON_KEY_DOWNLOAD_PROGRESS_NOTIFY_INTERVAL;
    private java.lang.String JSON_KEY_PACKAGE_NAME;
    private java.lang.String JSON_KEY_PROGRESS;
    private java.lang.String JSON_KEY_STATUS;
    private java.lang.String JSON_KEY_UNIQUE;
    private java.lang.String JSON_KEY_URL;
    private java.lang.String TAG;
    private boolean canNotifyProgress;
    private java.lang.Object currentObject;
    private java.lang.String downloadUrl;
    private android.os.Handler handler;
    private java.util.HashMap<java.lang.String, com.mbridge.msdk.out.IDownloadListener> keyListenerMap;
    private int mProgress;
    private int mStatus;
    private java.lang.String packageName;
    private long progressNotifyInterval;
    private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView webView;





    public AbsMbridgeDownload() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "MbridgeDownload"
            r2.TAG = r0
            java.lang.String r0 = "akdlui"
            r2.JSON_KEY_AKDLUI = r0
            java.lang.String r0 = "progressNotifyInterval"
            r2.JSON_KEY_DOWNLOAD_PROGRESS_NOTIFY_INTERVAL = r0
            java.lang.String r0 = "uniqueKey"
            r2.JSON_KEY_UNIQUE = r0
            java.lang.String r0 = "apkURL"
            r2.JSON_KEY_URL = r0
            java.lang.String r0 = "packageName"
            r2.JSON_KEY_PACKAGE_NAME = r0
            java.lang.String r0 = "status"
            r2.JSON_KEY_STATUS = r0
            java.lang.String r0 = "progress"
            r2.JSON_KEY_PROGRESS = r0
            java.lang.String r0 = "campaign"
            r2.JSON_KEY_CAMPAIGN = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.keyListenerMap = r0
            r0 = 2000(0x7d0, double:9.88E-321)
            r2.DEFAULT_PROGRESS_NOTIFY_INTERVAL = r0
            r2.progressNotifyInterval = r0
            r0 = 1
            r2.canNotifyProgress = r0
            com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload$1 r0 = new com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.handler = r0
            return
    }

    static boolean access$000(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r0) {
            boolean r0 = r0.canNotifyProgress
            return r0
    }

    static boolean access$002(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r0, boolean r1) {
            r0.canNotifyProgress = r1
            return r1
    }

    static int access$100(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r0) {
            int r0 = r0.mStatus
            return r0
    }

    static int access$102(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r0, int r1) {
            r0.mStatus = r1
            return r1
    }

    static void access$200(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r0, int r1, java.lang.String r2) {
            r0.onDownloadAPKStatusChange(r1, r2)
            return
    }

    static int access$300(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r0) {
            int r0 = r0.mProgress
            return r0
    }

    static int access$302(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r0, int r1) {
            r0.mProgress = r1
            return r1
    }

    static long access$400(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r2) {
            long r0 = r2.progressNotifyInterval
            return r0
    }

    static android.os.Handler access$500(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r0) {
            android.os.Handler r0 = r0.handler
            return r0
    }

    static void access$600(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r0, int r1, java.lang.String r2) {
            r0.onDownloadAPKProgressChange(r1, r2)
            return
    }

    static java.lang.String access$700(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r0) {
            java.lang.String r0 = r0.TAG
            return r0
    }

    static java.lang.String access$800(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r0) {
            java.lang.String r0 = r0.downloadUrl
            return r0
    }

    static java.lang.Object access$900(com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload r0) {
            java.lang.Object r0 = r0.currentObject
            return r0
    }

    private void addDownloadListening(java.lang.Object r10, java.lang.String r11) {
            r9 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 != 0) goto L51
            com.mbridge.msdk.out.IDownloadListener r0 = r9.getiDownloadListenerByUniqueKey(r11)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r2 = "getInstance"
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L3f
            java.lang.reflect.Method r2 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L3f
            r4 = 0
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L3f
            java.lang.Object r2 = r2.invoke(r4, r5)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r4 = "addDownloadListener"
            r5 = 2
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> L3f
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r6[r3] = r7     // Catch: java.lang.Throwable -> L3f
            java.lang.Class<com.mbridge.msdk.out.IDownloadListener> r7 = com.mbridge.msdk.out.IDownloadListener.class
            r8 = 1
            r6[r8] = r7     // Catch: java.lang.Throwable -> L3f
            java.lang.reflect.Method r1 = r1.getMethod(r4, r6)     // Catch: java.lang.Throwable -> L3f
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L3f
            r4[r3] = r11     // Catch: java.lang.Throwable -> L3f
            r4[r8] = r0     // Catch: java.lang.Throwable -> L3f
            r1.invoke(r2, r4)     // Catch: java.lang.Throwable -> L3f
            r9.callbackSuccess(r10)     // Catch: java.lang.Throwable -> L3f
            goto L56
        L3f:
            r11 = move-exception
            java.lang.String r0 = r9.TAG
            java.lang.String r1 = r11.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            java.lang.String r11 = r11.getMessage()
            r9.callbackExcep(r10, r11)
            goto L56
        L51:
            java.lang.String r11 = "uniqueKey is null"
            r9.callbackExcep(r10, r11)
        L56:
            return
    }

    private void addMultipleDownloaderListener(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.currentObject = r3
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L43
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L38
            r0.<init>(r4)     // Catch: org.json.JSONException -> L38
            java.lang.String r4 = "akdluiList"
            org.json.JSONArray r4 = r0.optJSONArray(r4)     // Catch: org.json.JSONException -> L38
            if (r4 == 0) goto L32
            int r0 = r4.length()     // Catch: org.json.JSONException -> L38
            if (r0 <= 0) goto L2c
            r0 = 0
        L1c:
            int r1 = r4.length()     // Catch: org.json.JSONException -> L38
            if (r0 >= r1) goto L43
            java.lang.String r1 = r4.optString(r0)     // Catch: org.json.JSONException -> L38
            r2.addDownloadListening(r3, r1)     // Catch: org.json.JSONException -> L38
            int r0 = r0 + 1
            goto L1c
        L2c:
            java.lang.String r4 = "akdluiList is 0"
            r2.callbackExcep(r3, r4)     // Catch: org.json.JSONException -> L38
            goto L43
        L32:
            java.lang.String r4 = "akdluiList is null"
            r2.callbackExcep(r3, r4)     // Catch: org.json.JSONException -> L38
            goto L43
        L38:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.String r4 = r4.getMessage()
            r2.callbackExcep(r3, r4)
        L43:
            return
    }

    private void checkMustParamsAndFillDefaultIfNull(org.json.JSONObject r2, java.lang.String r3, java.lang.Object r4) {
            r1 = this;
            java.lang.Object r0 = r2.opt(r3)     // Catch: org.json.JSONException -> La
            if (r0 != 0) goto Le
            r2.put(r3, r4)     // Catch: org.json.JSONException -> La
            goto Le
        La:
            r2 = move-exception
            r2.printStackTrace()
        Le:
            return
    }

    private org.json.JSONObject getDownloadStatus(java.lang.Object r10, java.lang.String r11) {
            r9 = this;
            r0 = 0
            r9.currentObject = r10     // Catch: java.lang.Throwable -> L6d
            boolean r1 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L6d
            if (r1 != 0) goto L67
            java.lang.String r1 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r2 = "getInstance"
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L6d
            java.lang.reflect.Method r2 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L6d
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L6d
            java.lang.Object r2 = r2.invoke(r0, r4)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r4 = "getTaskStatusByUniqueKey"
            r5 = 1
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> L6d
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r6[r3] = r7     // Catch: java.lang.Throwable -> L6d
            java.lang.reflect.Method r4 = r1.getMethod(r4, r6)     // Catch: java.lang.Throwable -> L6d
            java.lang.Object[] r6 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L6d
            r6[r3] = r11     // Catch: java.lang.Throwable -> L6d
            java.lang.Object r4 = r4.invoke(r2, r6)     // Catch: java.lang.Throwable -> L6d
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> L6d
            int r4 = r4.intValue()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r6 = "getTaskProgressByUniqueKey"
            java.lang.Class[] r7 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> L6d
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r7[r3] = r8     // Catch: java.lang.Throwable -> L6d
            java.lang.reflect.Method r1 = r1.getMethod(r6, r7)     // Catch: java.lang.Throwable -> L6d
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L6d
            r5[r3] = r11     // Catch: java.lang.Throwable -> L6d
            java.lang.Object r11 = r1.invoke(r2, r5)     // Catch: java.lang.Throwable -> L6d
            java.lang.Integer r11 = (java.lang.Integer) r11     // Catch: java.lang.Throwable -> L6d
            int r11 = r11.intValue()     // Catch: java.lang.Throwable -> L6d
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L6d
            r1.<init>()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r2 = "status"
            java.lang.String r3 = r9.statusIntToString(r4)     // Catch: java.lang.Throwable -> L6d
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r2 = "progress"
            r1.put(r2, r11)     // Catch: java.lang.Throwable -> L6d
            return r1
        L67:
            java.lang.String r11 = "uniqueKey is null"
            r9.callbackExcep(r10, r11)     // Catch: java.lang.Throwable -> L6d
            goto L7e
        L6d:
            r11 = move-exception
            java.lang.String r1 = r9.TAG
            java.lang.String r2 = r11.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r2)
            java.lang.String r11 = r11.getMessage()
            r9.callbackExcep(r10, r11)
        L7e:
            return r0
    }

    private java.lang.String getUniqueKeyAndIntervalTimeFromCampaign(org.json.JSONObject r5) {
            r4 = this;
            java.lang.String r0 = ""
            if (r5 == 0) goto L29
            java.lang.String r1 = r4.JSON_KEY_AKDLUI     // Catch: org.json.JSONException -> L25
            java.lang.Object r1 = r5.opt(r1)     // Catch: org.json.JSONException -> L25
            if (r1 == 0) goto L12
            java.lang.String r1 = r4.JSON_KEY_AKDLUI     // Catch: org.json.JSONException -> L25
            java.lang.String r0 = r5.getString(r1)     // Catch: org.json.JSONException -> L25
        L12:
            java.lang.String r1 = r4.JSON_KEY_DOWNLOAD_PROGRESS_NOTIFY_INTERVAL     // Catch: org.json.JSONException -> L25
            java.lang.Object r1 = r5.opt(r1)     // Catch: org.json.JSONException -> L25
            if (r1 == 0) goto L29
            java.lang.String r1 = r4.JSON_KEY_DOWNLOAD_PROGRESS_NOTIFY_INTERVAL     // Catch: org.json.JSONException -> L25
            long r2 = r4.DEFAULT_PROGRESS_NOTIFY_INTERVAL     // Catch: org.json.JSONException -> L25
            long r1 = r5.optLong(r1, r2)     // Catch: org.json.JSONException -> L25
            r4.progressNotifyInterval = r1     // Catch: org.json.JSONException -> L25
            goto L29
        L25:
            r5 = move-exception
            r5.printStackTrace()
        L29:
            return r0
    }

    private java.lang.String getUniqueKeyAndUrl(java.lang.String r3) throws org.json.JSONException {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L22
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r3)
            java.lang.String r3 = r2.JSON_KEY_UNIQUE
            java.lang.String r3 = r0.getString(r3)
            java.lang.String r1 = r2.JSON_KEY_URL
            java.lang.String r1 = r0.getString(r1)
            r2.downloadUrl = r1
            java.lang.String r1 = r2.JSON_KEY_PACKAGE_NAME
            java.lang.String r0 = r0.optString(r1)
            r2.packageName = r0
            goto L24
        L22:
            java.lang.String r3 = ""
        L24:
            return r3
    }

    private com.mbridge.msdk.out.IDownloadListener getiDownloadListenerByUniqueKey(java.lang.String r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, com.mbridge.msdk.out.IDownloadListener> r0 = r2.keyListenerMap
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L11
            java.util.HashMap<java.lang.String, com.mbridge.msdk.out.IDownloadListener> r0 = r2.keyListenerMap
            java.lang.Object r3 = r0.get(r3)
            com.mbridge.msdk.out.IDownloadListener r3 = (com.mbridge.msdk.out.IDownloadListener) r3
            return r3
        L11:
            com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload$2 r0 = new com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload$2
            r0.<init>(r2, r3)
            java.util.HashMap<java.lang.String, com.mbridge.msdk.out.IDownloadListener> r1 = r2.keyListenerMap
            r1.put(r3, r0)
            return r0
    }

    private void onDownloadAPKProgressChange(int r3, java.lang.String r4) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L44
            r0.<init>()     // Catch: org.json.JSONException -> L44
            java.lang.String r1 = r2.JSON_KEY_UNIQUE     // Catch: org.json.JSONException -> L44
            r0.put(r1, r4)     // Catch: org.json.JSONException -> L44
            java.lang.String r4 = r2.JSON_KEY_URL     // Catch: org.json.JSONException -> L44
            java.lang.String r1 = r2.downloadUrl     // Catch: org.json.JSONException -> L44
            r0.put(r4, r1)     // Catch: org.json.JSONException -> L44
            java.lang.String r4 = r2.JSON_KEY_PROGRESS     // Catch: org.json.JSONException -> L44
            r0.put(r4, r3)     // Catch: org.json.JSONException -> L44
            java.lang.String r3 = r0.toString()     // Catch: org.json.JSONException -> L44
            byte[] r3 = r3.getBytes()     // Catch: org.json.JSONException -> L44
            r4 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r4)     // Catch: org.json.JSONException -> L44
            java.lang.Object r4 = r2.currentObject     // Catch: org.json.JSONException -> L44
            boolean r4 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.a     // Catch: org.json.JSONException -> L44
            if (r4 == 0) goto L48
            java.lang.Object r4 = r2.currentObject     // Catch: org.json.JSONException -> L44
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: org.json.JSONException -> L44
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r4.a     // Catch: org.json.JSONException -> L44
            if (r0 == 0) goto L48
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r4.a     // Catch: org.json.JSONException -> L44
            boolean r0 = r0.isDestoryed()     // Catch: org.json.JSONException -> L44
            if (r0 != 0) goto L48
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a     // Catch: org.json.JSONException -> L44
            com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload$4 r0 = new com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload$4     // Catch: org.json.JSONException -> L44
            r0.<init>(r2, r3)     // Catch: org.json.JSONException -> L44
            r4.post(r0)     // Catch: org.json.JSONException -> L44
            goto L48
        L44:
            r3 = move-exception
            r3.printStackTrace()
        L48:
            return
    }

    private void onDownloadAPKStatusChange(int r3, java.lang.String r4) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L48
            r0.<init>()     // Catch: org.json.JSONException -> L48
            java.lang.String r1 = r2.JSON_KEY_UNIQUE     // Catch: org.json.JSONException -> L48
            r0.put(r1, r4)     // Catch: org.json.JSONException -> L48
            java.lang.String r4 = r2.JSON_KEY_URL     // Catch: org.json.JSONException -> L48
            java.lang.String r1 = r2.downloadUrl     // Catch: org.json.JSONException -> L48
            r0.put(r4, r1)     // Catch: org.json.JSONException -> L48
            java.lang.String r4 = r2.JSON_KEY_STATUS     // Catch: org.json.JSONException -> L48
            java.lang.String r3 = r2.statusIntToString(r3)     // Catch: org.json.JSONException -> L48
            r0.put(r4, r3)     // Catch: org.json.JSONException -> L48
            java.lang.String r3 = r0.toString()     // Catch: org.json.JSONException -> L48
            byte[] r3 = r3.getBytes()     // Catch: org.json.JSONException -> L48
            r4 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r4)     // Catch: org.json.JSONException -> L48
            java.lang.Object r4 = r2.currentObject     // Catch: org.json.JSONException -> L48
            boolean r4 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.a     // Catch: org.json.JSONException -> L48
            if (r4 == 0) goto L4c
            java.lang.Object r4 = r2.currentObject     // Catch: org.json.JSONException -> L48
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: org.json.JSONException -> L48
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r4.a     // Catch: org.json.JSONException -> L48
            if (r0 == 0) goto L4c
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r4.a     // Catch: org.json.JSONException -> L48
            boolean r0 = r0.isDestoryed()     // Catch: org.json.JSONException -> L48
            if (r0 != 0) goto L4c
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a     // Catch: org.json.JSONException -> L48
            com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload$3 r0 = new com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload$3     // Catch: org.json.JSONException -> L48
            r0.<init>(r2, r3)     // Catch: org.json.JSONException -> L48
            r4.post(r0)     // Catch: org.json.JSONException -> L48
            goto L4c
        L48:
            r3 = move-exception
            r3.printStackTrace()
        L4c:
            return
    }

    private void parseActionEvent(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L1d
            if (r0 != 0) goto L21
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1d
            r0.<init>(r3)     // Catch: org.json.JSONException -> L1d
            java.lang.String r3 = r1.JSON_KEY_CAMPAIGN     // Catch: org.json.JSONException -> L1d
            java.lang.Object r3 = r0.opt(r3)     // Catch: org.json.JSONException -> L1d
            if (r3 == 0) goto L21
            java.lang.String r3 = r1.JSON_KEY_CAMPAIGN     // Catch: org.json.JSONException -> L1d
            java.lang.String r3 = r0.getString(r3)     // Catch: org.json.JSONException -> L1d
            r1.sendNoticeAndCallBackClick(r2, r3)     // Catch: org.json.JSONException -> L1d
            goto L21
        L1d:
            r2 = move-exception
            r2.printStackTrace()
        L21:
            return
    }

    private java.lang.String statusIntToString(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == r0) goto L23
            r0 = 2
            if (r2 == r0) goto L20
            r0 = 5
            if (r2 == r0) goto L1d
            r0 = 6
            if (r2 == r0) goto L1d
            r0 = 8
            if (r2 == r0) goto L1a
            r0 = 9
            if (r2 == r0) goto L17
            java.lang.String r2 = "undownload"
            goto L25
        L17:
            java.lang.String r2 = "installed"
            goto L25
        L1a:
            java.lang.String r2 = "fail"
            goto L25
        L1d:
            java.lang.String r2 = "pause"
            goto L25
        L20:
            java.lang.String r2 = "downloading"
            goto L25
        L23:
            java.lang.String r2 = "success"
        L25:
            return r2
    }

    public void activateAPK(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            r0.getUniqueKeyAndUrl(r2)     // Catch: java.lang.Exception -> La
            r0.parseActionEvent(r1, r2)     // Catch: java.lang.Exception -> La
            r0.callbackSuccess(r1)     // Catch: java.lang.Exception -> La
            goto L12
        La:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            r0.callbackExcep(r1, r2)
        L12:
            return
    }

    public java.lang.String addDownloaderListener(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "====before---params:"
            r0.append(r1)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "=====AbsMbridgeDownload"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            r6.currentObject = r7
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L5d
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L52
            r0.<init>(r8)     // Catch: org.json.JSONException -> L52
            java.lang.String r2 = r6.getUniqueKeyAndIntervalTimeFromCampaign(r0)     // Catch: org.json.JSONException -> L52
            java.lang.String r3 = r6.JSON_KEY_AKDLUI     // Catch: org.json.JSONException -> L52
            java.lang.String r4 = ""
            r6.checkMustParamsAndFillDefaultIfNull(r0, r3, r4)     // Catch: org.json.JSONException -> L52
            java.lang.String r3 = "atat_type"
            r4 = 0
            java.lang.Integer r5 = java.lang.Integer.valueOf(r4)     // Catch: org.json.JSONException -> L52
            r6.checkMustParamsAndFillDefaultIfNull(r0, r3, r5)     // Catch: org.json.JSONException -> L52
            java.lang.String r3 = "ntbarpasbl"
            java.lang.Integer r5 = java.lang.Integer.valueOf(r4)     // Catch: org.json.JSONException -> L52
            r6.checkMustParamsAndFillDefaultIfNull(r0, r3, r5)     // Catch: org.json.JSONException -> L52
            java.lang.String r3 = "ntbarpt"
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: org.json.JSONException -> L52
            r6.checkMustParamsAndFillDefaultIfNull(r0, r3, r4)     // Catch: org.json.JSONException -> L52
            r6.addDownloadListening(r7, r2)     // Catch: org.json.JSONException -> L52
            java.lang.String r8 = r0.toString()     // Catch: org.json.JSONException -> L52
            goto L5d
        L52:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = r0.getMessage()
            r6.callbackExcep(r7, r0)
        L5d:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "====end--params:"
            r7.append(r0)
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.d(r1, r7)
            return r8
    }

    public void getDownloadAPKStatus(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            r0.currentObject = r1
            java.lang.String r2 = r0.getUniqueKeyAndUrl(r2)     // Catch: java.lang.Throwable -> L10
            org.json.JSONObject r2 = r0.getDownloadStatus(r1, r2)     // Catch: java.lang.Throwable -> L10
            if (r2 == 0) goto L1b
            r0.callbackSuccessWithData(r1, r2)     // Catch: java.lang.Throwable -> L10
            goto L1b
        L10:
            r2 = move-exception
            r2.printStackTrace()
            java.lang.String r2 = r2.getMessage()
            r0.callbackExcep(r1, r2)
        L1b:
            return
    }

    public void getMultipleDownloadAPKStatus(java.lang.Object r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = "uniqueKey"
            java.lang.String r1 = "downloaderList"
            r6.currentObject = r7
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 != 0) goto L6b
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L5f
            r2.<init>(r8)     // Catch: java.lang.Throwable -> L5f
            org.json.JSONArray r8 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L5f
            r8.<init>()     // Catch: java.lang.Throwable -> L5f
            org.json.JSONArray r2 = r2.optJSONArray(r1)     // Catch: java.lang.Throwable -> L5f
            if (r2 == 0) goto L48
            int r3 = r2.length()     // Catch: java.lang.Throwable -> L5f
            if (r3 <= 0) goto L42
            r3 = 0
        L23:
            int r4 = r2.length()     // Catch: java.lang.Throwable -> L5f
            if (r3 >= r4) goto L4d
            org.json.JSONObject r4 = r2.optJSONObject(r3)     // Catch: java.lang.Throwable -> L5f
            if (r4 == 0) goto L3f
            java.lang.String r4 = r4.optString(r0)     // Catch: java.lang.Throwable -> L5f
            org.json.JSONObject r5 = r6.getDownloadStatus(r7, r4)     // Catch: java.lang.Throwable -> L5f
            if (r5 == 0) goto L3f
            r5.put(r0, r4)     // Catch: java.lang.Throwable -> L5f
            r8.put(r5)     // Catch: java.lang.Throwable -> L5f
        L3f:
            int r3 = r3 + 1
            goto L23
        L42:
            java.lang.String r0 = "downloaderList is 0"
            r6.callbackExcep(r7, r0)     // Catch: java.lang.Throwable -> L5f
            goto L4d
        L48:
            java.lang.String r0 = "downloaderList is null"
            r6.callbackExcep(r7, r0)     // Catch: java.lang.Throwable -> L5f
        L4d:
            int r0 = r8.length()     // Catch: java.lang.Throwable -> L5f
            if (r0 <= 0) goto L70
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L5f
            r0.<init>()     // Catch: java.lang.Throwable -> L5f
            r0.put(r1, r8)     // Catch: java.lang.Throwable -> L5f
            r6.callbackSuccessWithData(r7, r0)     // Catch: java.lang.Throwable -> L5f
            goto L70
        L5f:
            r8 = move-exception
            r8.printStackTrace()
            java.lang.String r8 = r8.getMessage()
            r6.callbackExcep(r7, r8)
            goto L70
        L6b:
            java.lang.String r8 = "params is null"
            r6.callbackExcep(r7, r8)
        L70:
            return
    }

    public void installAPK(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r2.getUniqueKeyAndUrl(r4)     // Catch: java.lang.Throwable -> La
            r2.parseActionEvent(r3, r4)     // Catch: java.lang.Throwable -> La
            r2.callbackSuccess(r3)     // Catch: java.lang.Throwable -> La
            goto L1b
        La:
            r4 = move-exception
            java.lang.String r0 = r2.TAG
            java.lang.String r1 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            java.lang.String r4 = r4.getMessage()
            r2.callbackExcep(r3, r4)
        L1b:
            return
    }

    public void pauseDownloadAPK(java.lang.Object r9, java.lang.String r10) {
            r8 = this;
            java.lang.String r0 = r8.getUniqueKeyAndUrl(r10)     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "getInstance"
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L35
            java.lang.reflect.Method r2 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L35
            r4 = 0
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L35
            java.lang.Object r2 = r2.invoke(r4, r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "pause"
            r5 = 1
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> L35
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r6[r3] = r7     // Catch: java.lang.Throwable -> L35
            java.lang.reflect.Method r1 = r1.getMethod(r4, r6)     // Catch: java.lang.Throwable -> L35
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L35
            r4[r3] = r0     // Catch: java.lang.Throwable -> L35
            r1.invoke(r2, r4)     // Catch: java.lang.Throwable -> L35
            r8.parseActionEvent(r9, r10)     // Catch: java.lang.Throwable -> L35
            r8.callbackSuccess(r9)     // Catch: java.lang.Throwable -> L35
            goto L46
        L35:
            r10 = move-exception
            java.lang.String r0 = r8.TAG
            java.lang.String r1 = r10.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            java.lang.String r10 = r10.getMessage()
            r8.callbackExcep(r9, r10)
        L46:
            return
    }

    public void restartDownloadAPK(java.lang.Object r11, java.lang.String r12) {
            r10 = this;
            r10.currentObject = r11
            java.lang.String r0 = r10.getUniqueKeyAndUrl(r12)     // Catch: java.lang.Throwable -> L5d
            com.mbridge.msdk.out.IDownloadListener r1 = r10.getiDownloadListenerByUniqueKey(r0)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r2 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r3 = "getInstance"
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L5d
            java.lang.reflect.Method r3 = r2.getMethod(r3, r5)     // Catch: java.lang.Throwable -> L5d
            r5 = 0
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L5d
            java.lang.Object r3 = r3.invoke(r5, r6)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r5 = "addDownloadListener"
            r6 = 2
            java.lang.Class[] r7 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L5d
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r7[r4] = r8     // Catch: java.lang.Throwable -> L5d
            java.lang.Class<com.mbridge.msdk.out.IDownloadListener> r8 = com.mbridge.msdk.out.IDownloadListener.class
            r9 = 1
            r7[r9] = r8     // Catch: java.lang.Throwable -> L5d
            java.lang.reflect.Method r5 = r2.getMethod(r5, r7)     // Catch: java.lang.Throwable -> L5d
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L5d
            r7[r4] = r0     // Catch: java.lang.Throwable -> L5d
            r7[r9] = r1     // Catch: java.lang.Throwable -> L5d
            r5.invoke(r3, r7)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r1 = "start"
            java.lang.Class[] r5 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L5d
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r5[r4] = r7     // Catch: java.lang.Throwable -> L5d
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r5[r9] = r7     // Catch: java.lang.Throwable -> L5d
            java.lang.reflect.Method r1 = r2.getMethod(r1, r5)     // Catch: java.lang.Throwable -> L5d
            java.lang.Object[] r2 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L5d
            r2[r4] = r0     // Catch: java.lang.Throwable -> L5d
            java.lang.String r0 = r10.downloadUrl     // Catch: java.lang.Throwable -> L5d
            r2[r9] = r0     // Catch: java.lang.Throwable -> L5d
            r1.invoke(r3, r2)     // Catch: java.lang.Throwable -> L5d
            r10.parseActionEvent(r11, r12)     // Catch: java.lang.Throwable -> L5d
            r10.callbackSuccess(r11)     // Catch: java.lang.Throwable -> L5d
            goto L6e
        L5d:
            r12 = move-exception
            java.lang.String r0 = r10.TAG
            java.lang.String r1 = r12.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            java.lang.String r12 = r12.getMessage()
            r10.callbackExcep(r11, r12)
        L6e:
            return
    }

    public abstract void sendNoticeAndCallBackClick(java.lang.Object r1, java.lang.String r2);
}
