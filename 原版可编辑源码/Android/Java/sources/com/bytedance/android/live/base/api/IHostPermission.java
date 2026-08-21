package com.bytedance.android.live.base.api;

import com.bytedance.android.live.base.IService;

public interface IHostPermission extends IService {
    boolean alist();

    String getDevImei();

    String getDevOaid();

    String getMacAddress();

    LocationProvider getTTLocation();

    boolean isCanUseLocation();

    boolean isCanUsePhoneState();

    boolean isCanUseWifiState();

    boolean isCanUseWriteExternal();
}
