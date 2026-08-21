package com.bianfeng.addpermission.common;

public class SharedPreferencesUtils {
    private static final java.lang.String ANDPERMISSION_AGREE_POLICY = "permission_agree_policy";
    private static final java.lang.String ISFIRST = "permission_isFirst";
    private static final java.lang.String ISREFUSE = "permission_isRefuse";
    private static final java.lang.String PERMISSION_LIST = "permission_list";
    private static final java.lang.String POLICY_DIALOG_SHOW = "policy_dialog_show";
    private static volatile com.bianfeng.addpermission.common.SharedPreferencesUtils preferencesUtils;


    public SharedPreferencesUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.addpermission.common.SharedPreferencesUtils getInstance(android.content.Context r1) {
            com.bianfeng.addpermission.common.SharedPreferencesUtils r1 = com.bianfeng.addpermission.common.SharedPreferencesUtils.preferencesUtils
            if (r1 != 0) goto L17
            java.lang.Class<com.bianfeng.addpermission.common.SharedPreferencesUtils> r1 = com.bianfeng.addpermission.common.SharedPreferencesUtils.class
            monitor-enter(r1)
            com.bianfeng.addpermission.common.SharedPreferencesUtils r0 = com.bianfeng.addpermission.common.SharedPreferencesUtils.preferencesUtils     // Catch: java.lang.Throwable -> L14
            if (r0 != 0) goto L12
            com.bianfeng.addpermission.common.SharedPreferencesUtils r0 = new com.bianfeng.addpermission.common.SharedPreferencesUtils     // Catch: java.lang.Throwable -> L14
            r0.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.addpermission.common.SharedPreferencesUtils.preferencesUtils = r0     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            throw r0
        L17:
            com.bianfeng.addpermission.common.SharedPreferencesUtils r1 = com.bianfeng.addpermission.common.SharedPreferencesUtils.preferencesUtils
            return r1
    }

    public boolean getAgreePolicy() {
            r1 = this;
            java.lang.String r0 = "permission_agree_policy"
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)
            return r0
    }

    public boolean getIsFirst() {
            r1 = this;
            java.lang.String r0 = "permission_isFirst"
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)
            r0 = r0 ^ 1
            return r0
    }

    public java.util.List<com.bianfeng.addpermission.ui.PermissionBean> getPermissions() {
            r3 = this;
            java.lang.String r0 = r3.getPermissionsStr()     // Catch: java.lang.Exception -> L25
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L25
            if (r1 == 0) goto L10
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Exception -> L25
            r0.<init>()     // Catch: java.lang.Exception -> L25
            return r0
        L10:
            com.google.gson.Gson r1 = new com.google.gson.Gson     // Catch: java.lang.Exception -> L25
            r1.<init>()     // Catch: java.lang.Exception -> L25
            com.bianfeng.addpermission.common.SharedPreferencesUtils$1 r2 = new com.bianfeng.addpermission.common.SharedPreferencesUtils$1     // Catch: java.lang.Exception -> L25
            r2.<init>(r3)     // Catch: java.lang.Exception -> L25
            java.lang.reflect.Type r2 = r2.getType()     // Catch: java.lang.Exception -> L25
            java.lang.Object r0 = r1.fromJson(r0, r2)     // Catch: java.lang.Exception -> L25
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Exception -> L25
            return r0
        L25:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getPermissions: "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            return r0
    }

    public java.lang.String getPermissionsStr() {
            r1 = this;
            java.lang.String r0 = "permission_list"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            return r0
    }

    public boolean getPolicyDialogShow() {
            r1 = this;
            java.lang.String r0 = "policy_dialog_show"
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)
            return r0
    }

    public boolean getRefuxe() {
            r1 = this;
            java.lang.String r0 = "permission_isRefuse"
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)
            return r0
    }

    public void putString(java.util.List<com.bianfeng.addpermission.ui.PermissionBean> r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "putString"
            r0.append(r1)
            com.google.gson.Gson r1 = new com.google.gson.Gson
            r1.<init>()
            java.lang.String r1 = r1.toJson(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.addpermission.common.ReadAssetsFileUtils r0 = com.bianfeng.addpermission.common.ReadAssetsFileUtils.getInstance()
            java.lang.String r3 = r0.put(r3)
            java.lang.String r0 = "permission_list"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r3)     // Catch: java.lang.Exception -> L2b
            goto L2f
        L2b:
            r3 = move-exception
            r3.printStackTrace()
        L2f:
            return
    }

    public void setAgreePolicy(boolean r2) {
            r1 = this;
            java.lang.String r0 = "permission_agree_policy"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r2)     // Catch: java.lang.Exception -> L5
        L5:
            return
    }

    public void setIsFirst(boolean r2) {
            r1 = this;
            java.lang.String r0 = "permission_isFirst"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r2)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r2 = move-exception
            r2.printStackTrace()
        La:
            return
    }

    public void setPolicyDialogShow(boolean r2) {
            r1 = this;
            java.lang.String r0 = "policy_dialog_show"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r2)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r2 = move-exception
            r2.printStackTrace()
        La:
            return
    }

    public void setRefuse(boolean r2) {
            r1 = this;
            java.lang.String r0 = "permission_isRefuse"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r2)     // Catch: java.lang.Exception -> L5
        L5:
            return
    }
}
