package com.mbridge.msdk.out;

public class ApkDisplayInfo implements com.mbridge.msdk.system.NoProGuard, java.io.Serializable {
    private static java.lang.String JSON_KEY_APP_NAME = "app_name";
    private static java.lang.String JSON_KEY_APP_VER = "app_ver";
    private static java.lang.String JSON_KEY_DEV_NAME = "dev_name";
    private static java.lang.String JSON_KEY_PERM_DESC = "perm_desc";
    private static java.lang.String JSON_KEY_PERM_DESC_ALL = "ori_perm_all";
    private static java.lang.String JSON_KEY_PERM_DESC_ORI = "ori_perm_desc";
    private static java.lang.String JSON_KEY_PRI_URL = "pri_url";
    private static java.lang.String JSON_KEY_UPD_TIME = "upd_time";
    private java.lang.String appName;
    private java.lang.String appVersion;
    private java.lang.String devName;
    private java.util.ArrayList<java.lang.String> permDescAllList;
    private java.util.ArrayList<java.lang.String> permDescList;
    private java.util.ArrayList<java.lang.String> permDescOriList;
    private java.lang.String priUrl;
    private java.lang.String updateTime;

    static {
            return
    }

    public ApkDisplayInfo() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.permDescList = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.permDescOriList = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.permDescAllList = r0
            return
    }

    public static org.json.JSONArray arrayListArrayCovertToJsonArray(java.util.ArrayList<java.lang.String> r3) {
            if (r3 == 0) goto L1f
            int r0 = r3.size()
            if (r0 <= 0) goto L1f
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            r1 = 0
        Le:
            int r2 = r3.size()
            if (r1 >= r2) goto L1e
            java.lang.Object r2 = r3.get(r1)
            r0.put(r2)
            int r1 = r1 + 1
            goto Le
        L1e:
            return r0
        L1f:
            r3 = 0
            return r3
    }

    private static com.mbridge.msdk.out.ApkDisplayInfo checkApkDisplayInfoIfNullWillInit(com.mbridge.msdk.out.ApkDisplayInfo r0) {
            if (r0 != 0) goto L7
            com.mbridge.msdk.out.ApkDisplayInfo r0 = new com.mbridge.msdk.out.ApkDisplayInfo
            r0.<init>()
        L7:
            return r0
    }

    public static java.util.ArrayList<java.lang.String> jsonArrayCovertToArrayList(org.json.JSONArray r3) {
            if (r3 == 0) goto L1f
            int r0 = r3.length()
            if (r0 <= 0) goto L1f
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
            return r0
        L1f:
            r3 = 0
            return r3
    }

    public static com.mbridge.msdk.out.ApkDisplayInfo parse(org.json.JSONObject r7) {
            r0 = 0
            if (r7 == 0) goto Lea
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_APP_NAME
            boolean r1 = r7.has(r1)
            if (r1 == 0) goto L18
            com.mbridge.msdk.out.ApkDisplayInfo r0 = checkApkDisplayInfoIfNullWillInit(r0)
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_APP_NAME
            java.lang.String r1 = r7.optString(r1)
            r0.setAppName(r1)
        L18:
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_PERM_DESC
            boolean r1 = r7.has(r1)
            r2 = 0
            if (r1 == 0) goto L5a
            com.mbridge.msdk.out.ApkDisplayInfo r0 = checkApkDisplayInfoIfNullWillInit(r0)
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_PERM_DESC
            org.json.JSONArray r1 = r7.optJSONArray(r1)
            if (r1 == 0) goto L5a
            java.util.ArrayList r3 = jsonArrayCovertToArrayList(r1)
            r0.setPermDescList(r3)
            java.util.ArrayList r3 = r0.getPermDescAllList()
            r4 = r2
        L39:
            int r5 = r1.length()     // Catch: org.json.JSONException -> L53
            if (r4 >= r5) goto L57
            java.lang.Object r5 = r1.get(r4)     // Catch: org.json.JSONException -> L53
            boolean r6 = r5 instanceof java.lang.String     // Catch: org.json.JSONException -> L53
            if (r6 == 0) goto L50
            java.lang.String r5 = (java.lang.String) r5     // Catch: org.json.JSONException -> L53
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.p.a(r5)     // Catch: org.json.JSONException -> L53
            r3.add(r5)     // Catch: org.json.JSONException -> L53
        L50:
            int r4 = r4 + 1
            goto L39
        L53:
            r1 = move-exception
            r1.printStackTrace()
        L57:
            r0.setPermDescAllList(r3)
        L5a:
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_PERM_DESC_ORI
            boolean r1 = r7.has(r1)
            if (r1 == 0) goto L96
            com.mbridge.msdk.out.ApkDisplayInfo r0 = checkApkDisplayInfoIfNullWillInit(r0)
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_PERM_DESC_ORI
            org.json.JSONArray r1 = r7.optJSONArray(r1)
            if (r1 == 0) goto L96
            java.util.ArrayList r3 = jsonArrayCovertToArrayList(r1)
            r0.setPermDescOriList(r3)
            java.util.ArrayList r3 = r0.getPermDescAllList()
        L79:
            int r4 = r1.length()     // Catch: org.json.JSONException -> L8f
            if (r2 >= r4) goto L93
            java.lang.Object r4 = r1.get(r2)     // Catch: org.json.JSONException -> L8f
            boolean r5 = r4 instanceof java.lang.String     // Catch: org.json.JSONException -> L8f
            if (r5 == 0) goto L8c
            java.lang.String r4 = (java.lang.String) r4     // Catch: org.json.JSONException -> L8f
            r3.add(r4)     // Catch: org.json.JSONException -> L8f
        L8c:
            int r2 = r2 + 1
            goto L79
        L8f:
            r1 = move-exception
            r1.printStackTrace()
        L93:
            r0.setPermDescAllList(r3)
        L96:
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_PRI_URL
            boolean r1 = r7.has(r1)
            if (r1 == 0) goto Lab
            com.mbridge.msdk.out.ApkDisplayInfo r0 = checkApkDisplayInfoIfNullWillInit(r0)
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_PRI_URL
            java.lang.String r1 = r7.optString(r1)
            r0.setPriUrl(r1)
        Lab:
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_UPD_TIME
            boolean r1 = r7.has(r1)
            if (r1 == 0) goto Lc0
            com.mbridge.msdk.out.ApkDisplayInfo r0 = checkApkDisplayInfoIfNullWillInit(r0)
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_UPD_TIME
            java.lang.String r1 = r7.optString(r1)
            r0.setUpdateTime(r1)
        Lc0:
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_APP_VER
            boolean r1 = r7.has(r1)
            if (r1 == 0) goto Ld5
            com.mbridge.msdk.out.ApkDisplayInfo r0 = checkApkDisplayInfoIfNullWillInit(r0)
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_APP_VER
            java.lang.String r1 = r7.optString(r1)
            r0.setAppVersion(r1)
        Ld5:
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_DEV_NAME
            boolean r1 = r7.has(r1)
            if (r1 == 0) goto Lea
            com.mbridge.msdk.out.ApkDisplayInfo r0 = checkApkDisplayInfoIfNullWillInit(r0)
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_DEV_NAME
            java.lang.String r7 = r7.optString(r1)
            r0.setDevName(r7)
        Lea:
            return r0
    }

    public static com.mbridge.msdk.out.ApkDisplayInfo parseByString(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L10
            if (r0 != 0) goto L14
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L10
            r0.<init>(r1)     // Catch: org.json.JSONException -> L10
            com.mbridge.msdk.out.ApkDisplayInfo r1 = parse(r0)     // Catch: org.json.JSONException -> L10
            return r1
        L10:
            r1 = move-exception
            r1.printStackTrace()
        L14:
            r1 = 0
            return r1
    }

    public java.lang.String getAppName() {
            r1 = this;
            java.lang.String r0 = r1.appName
            return r0
    }

    public java.lang.String getAppVersion() {
            r1 = this;
            java.lang.String r0 = r1.appVersion
            return r0
    }

    public java.lang.String getDevName() {
            r1 = this;
            java.lang.String r0 = r1.devName
            return r0
    }

    public java.util.ArrayList<java.lang.String> getPermDescAllList() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.permDescAllList
            return r0
    }

    public java.util.ArrayList<java.lang.String> getPermDescList() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.permDescList
            return r0
    }

    public java.util.ArrayList<java.lang.String> getPermDescOriList() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.permDescOriList
            return r0
    }

    public java.lang.String getPriUrl() {
            r1 = this;
            java.lang.String r0 = r1.priUrl
            return r0
    }

    public java.lang.String getUpdateTime() {
            r1 = this;
            java.lang.String r0 = r1.updateTime
            return r0
    }

    public void setAppName(java.lang.String r1) {
            r0 = this;
            r0.appName = r1
            return
    }

    public void setAppVersion(java.lang.String r1) {
            r0 = this;
            r0.appVersion = r1
            return
    }

    public void setDevName(java.lang.String r1) {
            r0 = this;
            r0.devName = r1
            return
    }

    public void setPermDescAllList(java.util.ArrayList<java.lang.String> r1) {
            r0 = this;
            r0.permDescAllList = r1
            return
    }

    public void setPermDescList(java.util.ArrayList<java.lang.String> r1) {
            r0 = this;
            r0.permDescList = r1
            return
    }

    public void setPermDescOriList(java.util.ArrayList<java.lang.String> r1) {
            r0 = this;
            r0.permDescOriList = r1
            return
    }

    public void setPriUrl(java.lang.String r1) {
            r0 = this;
            r0.priUrl = r1
            return
    }

    public void setUpdateTime(java.lang.String r1) {
            r0 = this;
            r0.updateTime = r1
            return
    }

    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.appName     // Catch: org.json.JSONException -> L96
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L96
            if (r1 != 0) goto L14
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_APP_NAME     // Catch: org.json.JSONException -> L96
            java.lang.String r2 = r3.appName     // Catch: org.json.JSONException -> L96
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L96
        L14:
            java.util.ArrayList<java.lang.String> r1 = r3.permDescList     // Catch: org.json.JSONException -> L96
            if (r1 == 0) goto L2b
            java.util.ArrayList<java.lang.String> r1 = r3.permDescList     // Catch: org.json.JSONException -> L96
            int r1 = r1.size()     // Catch: org.json.JSONException -> L96
            if (r1 <= 0) goto L2b
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_PERM_DESC     // Catch: org.json.JSONException -> L96
            java.util.ArrayList<java.lang.String> r2 = r3.permDescList     // Catch: org.json.JSONException -> L96
            org.json.JSONArray r2 = arrayListArrayCovertToJsonArray(r2)     // Catch: org.json.JSONException -> L96
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L96
        L2b:
            java.util.ArrayList<java.lang.String> r1 = r3.permDescOriList     // Catch: org.json.JSONException -> L96
            if (r1 == 0) goto L42
            java.util.ArrayList<java.lang.String> r1 = r3.permDescOriList     // Catch: org.json.JSONException -> L96
            int r1 = r1.size()     // Catch: org.json.JSONException -> L96
            if (r1 <= 0) goto L42
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_PERM_DESC_ORI     // Catch: org.json.JSONException -> L96
            java.util.ArrayList<java.lang.String> r2 = r3.permDescOriList     // Catch: org.json.JSONException -> L96
            org.json.JSONArray r2 = arrayListArrayCovertToJsonArray(r2)     // Catch: org.json.JSONException -> L96
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L96
        L42:
            java.util.ArrayList<java.lang.String> r1 = r3.permDescAllList     // Catch: org.json.JSONException -> L96
            if (r1 == 0) goto L59
            java.util.ArrayList<java.lang.String> r1 = r3.permDescAllList     // Catch: org.json.JSONException -> L96
            int r1 = r1.size()     // Catch: org.json.JSONException -> L96
            if (r1 <= 0) goto L59
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_PERM_DESC_ALL     // Catch: org.json.JSONException -> L96
            java.util.ArrayList<java.lang.String> r2 = r3.permDescAllList     // Catch: org.json.JSONException -> L96
            org.json.JSONArray r2 = arrayListArrayCovertToJsonArray(r2)     // Catch: org.json.JSONException -> L96
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L96
        L59:
            java.lang.String r1 = r3.priUrl     // Catch: org.json.JSONException -> L96
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L96
            if (r1 != 0) goto L68
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_PRI_URL     // Catch: org.json.JSONException -> L96
            java.lang.String r2 = r3.priUrl     // Catch: org.json.JSONException -> L96
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L96
        L68:
            java.lang.String r1 = r3.updateTime     // Catch: org.json.JSONException -> L96
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L96
            if (r1 != 0) goto L77
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_UPD_TIME     // Catch: org.json.JSONException -> L96
            java.lang.String r2 = r3.updateTime     // Catch: org.json.JSONException -> L96
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L96
        L77:
            java.lang.String r1 = r3.appVersion     // Catch: org.json.JSONException -> L96
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L96
            if (r1 != 0) goto L86
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_APP_VER     // Catch: org.json.JSONException -> L96
            java.lang.String r2 = r3.appVersion     // Catch: org.json.JSONException -> L96
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L96
        L86:
            java.lang.String r1 = r3.devName     // Catch: org.json.JSONException -> L96
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L96
            if (r1 != 0) goto L9a
            java.lang.String r1 = com.mbridge.msdk.out.ApkDisplayInfo.JSON_KEY_DEV_NAME     // Catch: org.json.JSONException -> L96
            java.lang.String r2 = r3.devName     // Catch: org.json.JSONException -> L96
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L96
            goto L9a
        L96:
            r1 = move-exception
            r1.printStackTrace()
        L9a:
            int r1 = r0.length()
            if (r1 <= 0) goto La1
            return r0
        La1:
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ApkDisplayInfo{appName='"
            r0.append(r1)
            java.lang.String r1 = r3.appName
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", permDescJArray="
            r0.append(r2)
            java.util.ArrayList<java.lang.String> r2 = r3.permDescList
            r0.append(r2)
            java.lang.String r2 = ", permDescOriJArray="
            r0.append(r2)
            java.util.ArrayList<java.lang.String> r2 = r3.permDescOriList
            r0.append(r2)
            java.lang.String r2 = ", permDescAll="
            r0.append(r2)
            java.util.ArrayList<java.lang.String> r2 = r3.permDescAllList
            r0.append(r2)
            java.lang.String r2 = ", priUrl='"
            r0.append(r2)
            java.lang.String r2 = r3.priUrl
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", updateTime='"
            r0.append(r2)
            java.lang.String r2 = r3.updateTime
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", appVersion='"
            r0.append(r2)
            java.lang.String r2 = r3.appVersion
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", devName='"
            r0.append(r2)
            java.lang.String r2 = r3.devName
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
