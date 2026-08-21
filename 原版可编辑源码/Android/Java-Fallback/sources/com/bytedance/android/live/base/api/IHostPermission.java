package com.bytedance.android.live.base.api;

public interface IHostPermission extends com.bytedance.android.live.base.IService {
    boolean alist();

    java.lang.String getDevImei();

    java.lang.String getDevOaid();

    java.lang.String getMacAddress();

    com.bytedance.android.live.base.api.LocationProvider getTTLocation();

    boolean isCanUseLocation();

    boolean isCanUsePhoneState();

    boolean isCanUseWifiState();

    boolean isCanUseWriteExternal();
}
