package com.bykv.vk.openvk.live.core;

import com.bykv.vk.openvk.TTCustomController;
import com.bytedance.android.live.base.api.IHostPermission;
import com.bytedance.android.live.base.api.LocationProvider;

/* JADX INFO: loaded from: classes.dex */
public class TTHostPermissionInner implements IHostPermission {
    private TTCustomController rg;

    public TTHostPermissionInner(TTCustomController tTCustomController) {
        if (tTCustomController == null) {
            this.rg = new TTCustomController() { // from class: com.bykv.vk.openvk.live.core.TTHostPermissionInner.1
            };
        } else {
            this.rg = tTCustomController;
        }
    }

    @Override // com.bytedance.android.live.base.api.IHostPermission
    public boolean isCanUseLocation() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return true;
        }
        return tTCustomController.isCanUseLocation();
    }

    @Override // com.bytedance.android.live.base.api.IHostPermission
    public LocationProvider getTTLocation() {
        final com.bykv.vk.openvk.LocationProvider tTLocation;
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null || (tTLocation = tTCustomController.getTTLocation()) == null) {
            return null;
        }
        return new LocationProvider() { // from class: com.bykv.vk.openvk.live.core.TTHostPermissionInner.2
            @Override // com.bytedance.android.live.base.api.LocationProvider
            public double getLatitude() {
                return tTLocation.getLatitude();
            }

            @Override // com.bytedance.android.live.base.api.LocationProvider
            public double getLongitude() {
                return tTLocation.getLongitude();
            }
        };
    }

    @Override // com.bytedance.android.live.base.api.IHostPermission
    public boolean alist() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return false;
        }
        return tTCustomController.alist();
    }

    @Override // com.bytedance.android.live.base.api.IHostPermission
    public boolean isCanUsePhoneState() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return false;
        }
        return tTCustomController.isCanUsePhoneState();
    }

    @Override // com.bytedance.android.live.base.api.IHostPermission
    public String getDevImei() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return null;
        }
        return tTCustomController.getDevImei();
    }

    @Override // com.bytedance.android.live.base.api.IHostPermission
    public boolean isCanUseWifiState() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return false;
        }
        return tTCustomController.isCanUseWifiState();
    }

    @Override // com.bytedance.android.live.base.api.IHostPermission
    public String getMacAddress() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return null;
        }
        return tTCustomController.getMacAddress();
    }

    @Override // com.bytedance.android.live.base.api.IHostPermission
    public boolean isCanUseWriteExternal() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return false;
        }
        return tTCustomController.isCanUseWriteExternal();
    }

    @Override // com.bytedance.android.live.base.api.IHostPermission
    public String getDevOaid() {
        TTCustomController tTCustomController = this.rg;
        if (tTCustomController == null) {
            return null;
        }
        return tTCustomController.getDevOaid();
    }
}
