package com.bykv.vk.openvk.downloadnew.core;

public interface ITTDownloadVisitor {
    public static final int TYPE_TT_DOWNLOAD_VISITOR = 1;

    void checkAutoControl(org.json.JSONObject r1, java.lang.String r2);

    void clearAllData(java.lang.String r1);

    void execute(int r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.Object> r3, com.bykv.vk.openvk.downloadnew.core.ITTHttpCallback r4);

    void executeLogUpload(com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel r1, boolean r2);

    boolean getAppIsBackground();

    org.json.JSONObject getDownloadSettings();

    com.bykv.vk.openvk.TTDownloadEventLogger getTTDownloadEventLogger();

    boolean hasPermission(android.content.Context r1, java.lang.String r2);

    java.lang.String initPath(boolean r1);

    boolean isOpenSdkEvent(java.lang.String r1);

    void postBody(java.lang.String r1, byte[] r2, java.lang.String r3, com.bykv.vk.openvk.downloadnew.core.ITTHttpCallback r4);

    void requestPermission(android.app.Activity r1, java.lang.String[] r2, com.bykv.vk.openvk.downloadnew.core.ITTPermissionCallback r3);

    void showDialogByDelegate(java.lang.ref.WeakReference<android.content.Context> r1, boolean r2, com.bykv.vk.openvk.downloadnew.core.DialogBuilder r3);

    android.app.AlertDialog showDialogBySelf(android.app.Activity r1, boolean r2, com.bykv.vk.openvk.downloadnew.core.DialogBuilder r3);
}
