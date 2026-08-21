package com.bianfeng.h5library;

class H5LoginParametersEvent {
    private java.lang.String areaName;
    private java.lang.String channelName;
    private java.lang.String clientIp;
    private java.lang.String collectVersion;
    private java.lang.String isUserNew;
    private int type;
    private java.lang.String userId;
    private java.lang.String userName;

    public H5LoginParametersEvent(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.type = r0
            com.bianfeng.h5library.H5EventUtils r0 = com.bianfeng.h5library.H5EventUtils.getInstance()
            java.lang.String r0 = r0.getVersion()
            r1.collectVersion = r0
            r1.areaName = r2
            r1.isUserNew = r3
            r1.userName = r4
            r1.channelName = r5
            r1.userId = r6
            java.lang.String r2 = com.bianfeng.h5library.utils.H5libDeviceInfo.getClientIp()
            r1.clientIp = r2
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
            return r0
    }
}
