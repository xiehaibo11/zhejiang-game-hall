package com.bykv.vk.openvk.live.core;

import com.bykv.vk.openvk.TTCustomController;
import com.bytedance.android.live.base.api.IHostPermission;
import com.bytedance.android.live.base.api.LocationProvider;

public class TTHostPermissionInner implements IHostPermission {
    private TTCustomController rg;

    public TTHostPermissionInner(TTCustomController tTCustomController) {
        if (tTCustomController == null) {
            this.rg = new TTCustomController() {
            };
        } else {
            this.rg = tTCustomController;
        }
    }

    @Override
    public boolean isCanUseLocation() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return true;
        }
        return tTCustomController.isCanUseLocation();
    }

    @Override
    public LocationProvider getTTLocation() {
        final com.bykv.vk.openvk.LocationProvider tTLocation;
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null || (tTLocation = tTCustomController.getTTLocation()) == null) {
            return null;
        }
        return new LocationProvider() {
            @Override
            public double getLatitude() {
                return tTLocation.getLatitude();
            }

            @Override
            public double getLongitude() {
                return tTLocation.getLongitude();
            }
        };
    }

    @Override
    public boolean alist() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return false;
        }
        return tTCustomController.alist();
    }

    @Override
    public boolean isCanUsePhoneState() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return false;
        }
        return tTCustomController.isCanUsePhoneState();
    }

    @Override
    public String getDevImei() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return null;
        }
        return tTCustomController.getDevImei();
    }

    @Override
    public boolean isCanUseWifiState() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return false;
        }
        return tTCustomController.isCanUseWifiState();
    }

    @Override
    public String getMacAddress() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return null;
        }
        return tTCustomController.getMacAddress();
    }

    @Override
    public boolean isCanUseWriteExternal() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return false;
        }
        return tTCustomController.isCanUseWriteExternal();
    }

    @Override
    public String getDevOaid() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return null;
        }
        return tTCustomController.getDevOaid();
    }
}
