package com.bykv.vk.openvk.live.core;

public class TTHostPermissionInner implements com.bytedance.android.live.base.api.IHostPermission {
    private com.bykv.vk.openvk.TTCustomController rg;



    public TTHostPermissionInner(com.bykv.vk.openvk.TTCustomController r1) {
            r0 = this;
            r0.<init>()
            if (r1 != 0) goto Ld
            com.bykv.vk.openvk.live.core.TTHostPermissionInner$1 r1 = new com.bykv.vk.openvk.live.core.TTHostPermissionInner$1
            r1.<init>(r0)
            r0.rg = r1
            goto Lf
        Ld:
            r0.rg = r1
        Lf:
            return
    }

    @Override
    public boolean alist() {
            r1 = this;
            com.bykv.vk.openvk.TTCustomController r0 = r1.rg
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.alist()
            return r0
    }

    @Override
    public java.lang.String getDevImei() {
            r1 = this;
            com.bykv.vk.openvk.TTCustomController r0 = r1.rg
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.String r0 = r0.getDevImei()
            return r0
    }

    @Override
    public java.lang.String getDevOaid() {
            r1 = this;
            com.bykv.vk.openvk.TTCustomController r0 = r1.rg
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.String r0 = r0.getDevOaid()
            return r0
    }

    @Override
    public java.lang.String getMacAddress() {
            r1 = this;
            com.bykv.vk.openvk.TTCustomController r0 = r1.rg
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.String r0 = r0.getMacAddress()
            return r0
    }

    @Override
    public com.bytedance.android.live.base.api.LocationProvider getTTLocation() {
            r2 = this;
            com.bykv.vk.openvk.TTCustomController r0 = r2.rg
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.bykv.vk.openvk.LocationProvider r0 = r0.getTTLocation()
            if (r0 != 0) goto Ld
            return r1
        Ld:
            com.bykv.vk.openvk.live.core.TTHostPermissionInner$2 r1 = new com.bykv.vk.openvk.live.core.TTHostPermissionInner$2
            r1.<init>(r2, r0)
            return r1
    }

    @Override
    public boolean isCanUseLocation() {
            r1 = this;
            com.bykv.vk.openvk.TTCustomController r0 = r1.rg
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            boolean r0 = r0.isCanUseLocation()
            return r0
    }

    @Override
    public boolean isCanUsePhoneState() {
            r1 = this;
            com.bykv.vk.openvk.TTCustomController r0 = r1.rg
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.isCanUsePhoneState()
            return r0
    }

    @Override
    public boolean isCanUseWifiState() {
            r1 = this;
            com.bykv.vk.openvk.TTCustomController r0 = r1.rg
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.isCanUseWifiState()
            return r0
    }

    @Override
    public boolean isCanUseWriteExternal() {
            r1 = this;
            com.bykv.vk.openvk.TTCustomController r0 = r1.rg
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = r0.isCanUseWriteExternal()
            return r0
    }
}
