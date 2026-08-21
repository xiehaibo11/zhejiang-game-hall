package com.heytap.mcssdk;

interface a {
    @java.lang.Deprecated
    void clearNotificationType();

    @java.lang.Deprecated
    void clearNotificationType(org.json.JSONObject r1);

    void clearNotifications();

    void clearNotifications(org.json.JSONObject r1);

    void disableAppNotificationSwitch(com.heytap.msp.push.callback.ISetAppNotificationCallBackService r1);

    void enableAppNotificationSwitch(com.heytap.msp.push.callback.ISetAppNotificationCallBackService r1);

    void getAppNotificationSwitch(com.heytap.msp.push.callback.IGetAppNotificationCallBackService r1);

    void getNotificationStatus();

    void getNotificationStatus(org.json.JSONObject r1);

    void getRegister();

    void getRegister(org.json.JSONObject r1);

    java.lang.String getRegisterID();

    void openNotificationSettings();

    void openNotificationSettings(org.json.JSONObject r1);

    void pausePush();

    void pausePush(org.json.JSONObject r1);

    void register(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.heytap.msp.push.callback.ICallBackResultService r4);

    void register(android.content.Context r1, java.lang.String r2, java.lang.String r3, org.json.JSONObject r4, com.heytap.msp.push.callback.ICallBackResultService r5);

    void requestNotificationPermission();

    void resumePush();

    void resumePush(org.json.JSONObject r1);

    @java.lang.Deprecated
    void setNotificationType(int r1);

    @java.lang.Deprecated
    void setNotificationType(int r1, org.json.JSONObject r2);

    void setPushTime(java.util.List<java.lang.Integer> r1, int r2, int r3, int r4, int r5);

    void setPushTime(java.util.List<java.lang.Integer> r1, int r2, int r3, int r4, int r5, org.json.JSONObject r6);

    void setRegisterID(java.lang.String r1);

    void unRegister();

    void unRegister(org.json.JSONObject r1);
}
