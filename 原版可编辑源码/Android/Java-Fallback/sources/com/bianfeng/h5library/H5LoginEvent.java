package com.bianfeng.h5library;

class H5LoginEvent {
    private java.util.List<com.bianfeng.h5library.H5LoginEvent.AppEventsBean> appEvents;
    private java.lang.String appKey;
    private java.lang.String clientType;
    private java.lang.String groupId;
    private java.lang.String loginType;

    public static class AppEventsBean {
        private com.bianfeng.h5library.H5LoginEvent.AppEventsBean.AppProfileBean appProfile;
        private com.bianfeng.h5library.H5LoginEvent.AppEventsBean.DeviceProfileBean deviceProfile;
        private int id;
        private java.lang.String label;
        private com.bianfeng.h5library.H5LoginParametersEvent parameters;
        private long startTime;
        private java.lang.String uniqueId;

        public static class AppProfileBean {
            private java.lang.String appPackageName;
            private int appType;
            private java.lang.String appVersionName;
            private java.lang.String sdkVersion;

            public AppProfileBean() {
                    r1 = this;
                    r1.<init>()
                    r0 = 1
                    r1.appType = r0
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libAppContext.getVerName()
                    r1.appVersionName = r0
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libAppContext.getPkgName()
                    r1.appPackageName = r0
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libAppContext.getSdkVersion()
                    r1.sdkVersion = r0
                    return
            }

            public java.lang.String toString() {
                    r1 = this;
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
                    return r0
            }
        }

        public static class DeviceProfileBean {
            private java.lang.String carrier;
            private java.lang.String deviceId;
            private java.lang.String deviceModel;
            private java.lang.String devicePixel;
            private java.lang.String osVersion;

            public DeviceProfileBean() {
                    r1 = this;
                    r1.<init>()
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libDeviceInfo.getCarrier()
                    r1.carrier = r0
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libDeviceInfo.getDeviceId()
                    r1.deviceId = r0
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libDeviceInfo.getDeviceModel()
                    r1.deviceModel = r0
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libDeviceInfo.getDevicePixel()
                    r1.devicePixel = r0
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libDeviceInfo.getOsVersion()
                    r1.osVersion = r0
                    return
            }

            public java.lang.String toString() {
                    r1 = this;
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
                    return r0
            }
        }

        public AppEventsBean(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
                r7 = this;
                r7.<init>()
                com.bianfeng.h5library.H5LoginEvent$AppEventsBean$AppProfileBean r0 = new com.bianfeng.h5library.H5LoginEvent$AppEventsBean$AppProfileBean
                r0.<init>()
                r7.appProfile = r0
                r0 = 4
                r7.id = r0
                java.lang.String r0 = "login"
                r7.label = r0
                com.bianfeng.h5library.H5LoginParametersEvent r0 = new com.bianfeng.h5library.H5LoginParametersEvent
                r1 = r0
                r2 = r8
                r3 = r9
                r4 = r10
                r5 = r11
                r6 = r12
                r1.<init>(r2, r3, r4, r5, r6)
                r7.parameters = r0
                long r8 = java.lang.System.currentTimeMillis()
                r7.startTime = r8
                com.bianfeng.h5library.H5LoginEvent$AppEventsBean$DeviceProfileBean r8 = new com.bianfeng.h5library.H5LoginEvent$AppEventsBean$DeviceProfileBean
                r8.<init>()
                r7.deviceProfile = r8
                return
        }

        public void setUniqueId(java.lang.String r1) {
                r0 = this;
                r0.uniqueId = r1
                return
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
                return r0
        }
    }

    public H5LoginEvent(java.lang.String r2, com.bianfeng.h5library.H5LoginEvent.AppEventsBean r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "14"
            r1.clientType = r0
            java.lang.String r0 = "426"
            r1.groupId = r0
            java.lang.String r0 = "loginGame"
            r1.loginType = r0
            r1.appKey = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1.appEvents = r2
            r2.add(r3)
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
            return r0
    }
}
