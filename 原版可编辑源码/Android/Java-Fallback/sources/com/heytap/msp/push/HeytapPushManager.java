package com.heytap.msp.push;

public class HeytapPushManager {
    public HeytapPushManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void clearNotificationType() {
            r0 = 0
            clearNotificationType(r0)
            return
    }

    public static void clearNotificationType(org.json.JSONObject r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.clearNotificationType(r1)
            return
    }

    public static void clearNotifications() {
            r0 = 0
            clearNotifications(r0)
            return
    }

    public static void clearNotifications(org.json.JSONObject r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.clearNotifications(r1)
            return
    }

    public static void disableAppNotificationSwitch(com.heytap.msp.push.callback.ISetAppNotificationCallBackService r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.disableAppNotificationSwitch(r1)
            return
    }

    public static void enableAppNotificationSwitch(com.heytap.msp.push.callback.ISetAppNotificationCallBackService r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.enableAppNotificationSwitch(r1)
            return
    }

    public static void getAppNotificationSwitch(com.heytap.msp.push.callback.IGetAppNotificationCallBackService r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.getAppNotificationSwitch(r1)
            return
    }

    public static java.lang.String getMcsPackageName(android.content.Context r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            java.lang.String r1 = r0.getMcsPackageName(r1)
            return r1
    }

    public static void getNotificationStatus() {
            r0 = 0
            getNotificationStatus(r0)
            return
    }

    public static void getNotificationStatus(org.json.JSONObject r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.getNotificationStatus(r1)
            return
    }

    public static com.heytap.msp.push.callback.ICallBackResultService getPushCallback() {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            com.heytap.msp.push.callback.ICallBackResultService r0 = r0.getPushCallback()
            return r0
    }

    public static void getPushStatus() {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.getPushStatus()
            return
    }

    public static int getPushVersionCode() {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            int r0 = r0.getPushVersionCode()
            return r0
    }

    public static java.lang.String getPushVersionName() {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            java.lang.String r0 = r0.getPushVersionName()
            return r0
    }

    public static java.lang.String getReceiveSdkAction(android.content.Context r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            java.lang.String r1 = r0.getReceiveSdkAction(r1)
            return r1
    }

    public static void getRegister() {
            r0 = 0
            getRegister(r0)
            return
    }

    public static void getRegister(org.json.JSONObject r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.getRegister(r1)
            return
    }

    public static java.lang.String getRegisterID() {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            java.lang.String r0 = r0.getRegisterID()
            return r0
    }

    public static int getSDKVersionCode() {
            int r0 = com.heytap.mcssdk.PushService.getSDKVersionCode()
            return r0
    }

    public static java.lang.String getSDKVersionName() {
            java.lang.String r0 = com.heytap.mcssdk.PushService.getSDKVersionName()
            return r0
    }

    public static void init(android.content.Context r1, boolean r2) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.init(r1, r2)
            return
    }

    public static boolean isSupportPush(android.content.Context r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            boolean r1 = r0.isSupportPushByClient(r1)
            return r1
    }

    public static void openNotificationSettings() {
            r0 = 0
            openNotificationSettings(r0)
            return
    }

    public static void openNotificationSettings(org.json.JSONObject r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.openNotificationSettings(r1)
            return
    }

    public static void pausePush() {
            r0 = 0
            pausePush(r0)
            return
    }

    public static void pausePush(org.json.JSONObject r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.pausePush(r1)
            return
    }

    public static void register(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.heytap.msp.push.callback.ICallBackResultService r4) {
            r0 = 0
            register(r1, r2, r3, r0, r4)
            return
    }

    public static void register(android.content.Context r6, java.lang.String r7, java.lang.String r8, org.json.JSONObject r9, com.heytap.msp.push.callback.ICallBackResultService r10) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r1 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.register(r1, r2, r3, r4, r5)
            return
    }

    public static void requestNotificationPermission() {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.requestNotificationPermission()
            return
    }

    public static void resumePush() {
            r0 = 0
            resumePush(r0)
            return
    }

    public static void resumePush(org.json.JSONObject r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.resumePush(r1)
            return
    }

    public static void setAppKeySecret(java.lang.String r1, java.lang.String r2) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.setAppKeySecret(r1, r2)
            return
    }

    public static void setNotificationType(int r1) {
            r0 = 0
            setNotificationType(r1, r0)
            return
    }

    public static void setNotificationType(int r1, org.json.JSONObject r2) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.setNotificationType(r1, r2)
            return
    }

    public static void setPushCallback(com.heytap.msp.push.callback.ICallBackResultService r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.setPushCallback(r1)
            return
    }

    public static void setPushTime(java.util.List<java.lang.Integer> r6, int r7, int r8, int r9, int r10) {
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            setPushTime(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void setPushTime(java.util.List<java.lang.Integer> r7, int r8, int r9, int r10, int r11, org.json.JSONObject r12) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r0.setPushTime(r1, r2, r3, r4, r5, r6)
            return
    }

    public static void setRegisterID(java.lang.String r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.setRegisterID(r1)
            return
    }

    public static void statisticEvent(android.content.Context r0, java.lang.String r1, com.heytap.msp.push.mode.DataMessage r2) {
            com.heytap.msp.push.statis.StatisticUtils.statisticEvent(r0, r1, r2)
            return
    }

    @java.lang.Deprecated
    public static void statisticMessage(android.content.Context r0, com.heytap.msp.push.mode.MessageStat r1) {
            com.heytap.mcssdk.utils.StatUtil.statisticMessage(r0, r1)
            return
    }

    @java.lang.Deprecated
    public static void statisticMessage(android.content.Context r0, java.util.List<com.heytap.msp.push.mode.MessageStat> r1) {
            com.heytap.mcssdk.utils.StatUtil.statisticMessage(r0, r1)
            return
    }

    public static void unRegister() {
            r0 = 0
            unRegister(r0)
            return
    }

    public static void unRegister(android.content.Context r6, java.lang.String r7, java.lang.String r8, org.json.JSONObject r9, com.heytap.msp.push.callback.ICallBackResultService r10) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r1 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.unRegister(r1, r2, r3, r4, r5)
            return
    }

    public static void unRegister(org.json.JSONObject r1) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            r0.unRegister(r1)
            return
    }
}
