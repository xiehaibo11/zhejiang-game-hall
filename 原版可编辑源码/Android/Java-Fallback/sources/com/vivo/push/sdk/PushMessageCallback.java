package com.vivo.push.sdk;

public interface PushMessageCallback {
    boolean isAllowNet(android.content.Context r1);

    void onBind(android.content.Context r1, int r2, java.lang.String r3);

    void onDelAlias(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.util.List<java.lang.String> r4, java.lang.String r5);

    void onDelTags(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.util.List<java.lang.String> r4, java.lang.String r5);

    void onListTags(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.lang.String r4);

    void onLog(android.content.Context r1, java.lang.String r2, int r3, boolean r4);

    boolean onNotificationMessageArrived(android.content.Context r1, com.vivo.push.model.UPSNotificationMessage r2);

    void onNotificationMessageClicked(android.content.Context r1, com.vivo.push.model.UPSNotificationMessage r2);

    void onPublish(android.content.Context r1, int r2, java.lang.String r3);

    void onReceiveRegId(android.content.Context r1, java.lang.String r2);

    void onSetAlias(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.util.List<java.lang.String> r4, java.lang.String r5);

    void onSetTags(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.util.List<java.lang.String> r4, java.lang.String r5);

    void onTransmissionMessage(android.content.Context r1, com.vivo.push.model.UnvarnishedMessage r2);

    void onUnBind(android.content.Context r1, int r2, java.lang.String r3);
}
