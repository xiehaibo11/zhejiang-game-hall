package com.huawei.agconnect;

public interface AGConnectOptions {
    boolean getBoolean(java.lang.String r1);

    boolean getBoolean(java.lang.String r1, boolean r2);

    android.content.Context getContext();

    java.lang.String getIdentifier();

    int getInt(java.lang.String r1);

    int getInt(java.lang.String r1, int r2);

    java.lang.String getPackageName();

    com.huawei.agconnect.AGCRoutePolicy getRoutePolicy();

    java.lang.String getString(java.lang.String r1);

    java.lang.String getString(java.lang.String r1, java.lang.String r2);
}
