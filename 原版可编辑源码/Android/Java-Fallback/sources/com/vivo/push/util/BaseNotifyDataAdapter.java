package com.vivo.push.util;

public interface BaseNotifyDataAdapter {
    int getDefaultNotifyIcon();

    int getDefaultSmallIconId();

    int getNotifyMode(com.vivo.push.model.InsideNotificationItem r1);

    void init(android.content.Context r1);
}
