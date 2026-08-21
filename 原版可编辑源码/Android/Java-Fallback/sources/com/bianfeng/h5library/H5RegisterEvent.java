package com.bianfeng.h5library;

class H5RegisterEvent {
    private java.util.List<com.bianfeng.h5library.H5RegisterEvent.AppEventsBean> appEvents;
    private java.lang.String appKey;
    private java.lang.String clientType;
    private java.lang.String groupId;

    public static class AppEventsBean {
        private com.bianfeng.h5library.H5RegisterEvent.AppEventsBean.AppProfileBean appProfile;
        private com.bianfeng.h5library.H5RegisterEvent.AppEventsBean.DeviceProfileBean deviceProfile;
        private java.lang.String id;
        private java.lang.String label;
        private com.bianfeng.h5library.H5RegisterEvent.AppEventsBean.ParametersBean parameters;
        private java.lang.String startTime;

        public static class AppProfileBean {
            private java.lang.String appPackageName;
            private java.lang.String appType;
            private java.lang.String appVersionName;
            private java.lang.String sdkVersion;

            public AppProfileBean() {
                    r1 = this;
                    r1.<init>()
                    java.lang.String r0 = "1"
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
            private java.lang.String deviceId;

            public DeviceProfileBean() {
                    r1 = this;
                    r1.<init>()
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libDeviceInfo.getDeviceId()
                    r1.deviceId = r0
                    return
            }

            public java.lang.String toString() {
                    r1 = this;
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
                    return r0
            }
        }

        public static class ParametersBean {
            private java.lang.String areaName;
            private java.lang.String channelName;
            private java.lang.String clientIp;
            private java.lang.String collectVersion;
            private java.lang.String userName;
            private java.lang.String userid;

            public ParametersBean(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
                    r1 = this;
                    r1.<init>()
                    com.bianfeng.h5library.H5EventUtils r0 = com.bianfeng.h5library.H5EventUtils.getInstance()
                    java.lang.String r0 = r0.getVersion()
                    r1.collectVersion = r0
                    r1.userName = r2
                    r1.channelName = r4
                    java.lang.String r2 = com.bianfeng.h5library.utils.H5libDeviceInfo.getClientIp()
                    r1.clientIp = r2
                    r1.areaName = r3
                    r1.userid = r5
                    return
            }

            public java.lang.String toString() {
                    r1 = this;
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
                    return r0
            }
        }

        public AppEventsBean(java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
                r3 = this;
                r3.<init>()
                java.lang.String r0 = "6"
                r3.id = r0
                java.lang.String r0 = "register"
                r3.label = r0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                long r1 = java.lang.System.currentTimeMillis()
                r0.append(r1)
                java.lang.String r1 = ""
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r3.startTime = r0
                com.bianfeng.h5library.H5RegisterEvent$AppEventsBean$AppProfileBean r0 = new com.bianfeng.h5library.H5RegisterEvent$AppEventsBean$AppProfileBean
                r0.<init>()
                r3.appProfile = r0
                com.bianfeng.h5library.H5RegisterEvent$AppEventsBean$ParametersBean r0 = new com.bianfeng.h5library.H5RegisterEvent$AppEventsBean$ParametersBean
                r0.<init>(r4, r5, r6, r7)
                r3.parameters = r0
                com.bianfeng.h5library.H5RegisterEvent$AppEventsBean$DeviceProfileBean r4 = new com.bianfeng.h5library.H5RegisterEvent$AppEventsBean$DeviceProfileBean
                r4.<init>()
                r3.deviceProfile = r4
                return
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
                return r0
        }
    }

    public H5RegisterEvent(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "426"
            r1.groupId = r0
            java.lang.String r0 = "14"
            r1.clientType = r0
            r1.appKey = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1.appEvents = r2
            com.bianfeng.h5library.H5RegisterEvent$AppEventsBean r0 = new com.bianfeng.h5library.H5RegisterEvent$AppEventsBean
            r0.<init>(r3, r4, r5, r6)
            r2.add(r0)
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
            return r0
    }
}
