package com.bytedance.android.live.base.api;

public class DefaultHostPermission implements IHostPermission {
    @Override
    public boolean alist() {
        return true;
    }

    @Override
    public String getDevImei() {
        return null;
    }

    @Override
    public String getDevOaid() {
        return null;
    }

    @Override
    public String getMacAddress() {
        return null;
    }

    @Override
    public LocationProvider getTTLocation() {
        return null;
    }

    @Override
    public boolean isCanUseLocation() {
        return true;
    }

    @Override
    public boolean isCanUsePhoneState() {
        return true;
    }

    @Override
    public boolean isCanUseWifiState() {
        return true;
    }

    @Override
    public boolean isCanUseWriteExternal() {
        return true;
    }
}
