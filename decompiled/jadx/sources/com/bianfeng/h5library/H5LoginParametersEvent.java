package com.bianfeng.h5library;

import com.bianfeng.h5library.utils.H5libDeviceInfo;
import com.bianfeng.h5library.utils.H5libGsonUtils;

/* JADX INFO: loaded from: classes.dex */
class H5LoginParametersEvent {
    private String areaName;
    private String channelName;
    private String isUserNew;
    private String userId;
    private String userName;
    private int type = 0;
    private String collectVersion = H5EventUtils.getInstance().getVersion();
    private String clientIp = H5libDeviceInfo.getClientIp();

    public H5LoginParametersEvent(String str, String str2, String str3, String str4, String str5) {
        this.areaName = str;
        this.isUserNew = str2;
        this.userName = str3;
        this.channelName = str4;
        this.userId = str5;
    }

    public String toString() {
        return H5libGsonUtils.toJson(this);
    }
}
