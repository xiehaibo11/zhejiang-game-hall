package com.bianfeng.h5library;

class H5ClickEvent {
    private java.util.List<com.bianfeng.h5library.H5ClickEvent.AppEventsBean> appEvents;
    private java.lang.String appKey;
    private com.bianfeng.h5library.H5ClickEvent.AppProfileBean appProfile;
    private java.lang.String clientType;
    private com.bianfeng.h5library.H5ClickEvent.DeviceProfileBean deviceProfile;
    private java.lang.String groupId;

    public static class AppEventsBean {
        private java.lang.String id;
        private java.lang.String label;
        private com.bianfeng.h5library.H5ClickEvent.AppEventsBean.ParametersBean parameters;
        private java.lang.String startTime;

        public static class ParametersBean {
            private java.lang.String amount;
            private java.lang.String areaName;
            private java.lang.String channelName;
            private java.lang.String collectVersion;
            private java.lang.String isNewUesr;
            private java.lang.String os_version;
            private java.lang.String userId;
            private java.lang.String userName;

            public ParametersBean(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
                    r1 = this;
                    r1.<init>()
                    java.lang.String r0 = "1"
                    r1.amount = r0
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libDeviceInfo.getOsVersion()
                    r1.os_version = r0
                    com.bianfeng.h5library.H5EventUtils r0 = com.bianfeng.h5library.H5EventUtils.getInstance()
                    java.lang.String r0 = r0.getVersion()
                    r1.collectVersion = r0
                    r1.userName = r2
                    r1.userId = r3
                    r1.areaName = r4
                    r1.isNewUesr = r5
                    r1.channelName = r6
                    return
            }

            public java.lang.String toString() {
                    r1 = this;
                    java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
                    return r0
            }
        }

        public AppEventsBean(java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
                r6 = this;
                r6.<init>()
                r6.id = r7
                r6.label = r8
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                long r0 = java.lang.System.currentTimeMillis()
                r7.append(r0)
                java.lang.String r8 = ""
                r7.append(r8)
                java.lang.String r7 = r7.toString()
                r6.startTime = r7
                com.bianfeng.h5library.H5ClickEvent$AppEventsBean$ParametersBean r7 = new com.bianfeng.h5library.H5ClickEvent$AppEventsBean$ParametersBean
                r0 = r7
                r1 = r9
                r2 = r10
                r3 = r11
                r4 = r12
                r5 = r13
                r0.<init>(r1, r2, r3, r4, r5)
                r6.parameters = r7
                return
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
                return r0
        }
    }

    public static class AppProfileBean {
        private java.lang.String appPackageName;
        private java.lang.String appType;
        private java.lang.String appVersionName;
        private java.lang.String sdkVersion;

        public AppProfileBean() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = com.bianfeng.h5library.utils.H5libAppContext.getVerName()
                r1.appVersionName = r0
                java.lang.String r0 = "1"
                r1.appType = r0
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
        private java.lang.String device_os;

        public DeviceProfileBean() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = com.bianfeng.h5library.utils.H5libDeviceInfo.getDeviceModel()
                r1.deviceModel = r0
                java.lang.String r0 = com.bianfeng.h5library.utils.H5libDeviceInfo.getCarrier()
                r1.carrier = r0
                java.lang.String r0 = com.bianfeng.h5library.utils.H5libDeviceInfo.getDeviceId()
                r1.deviceId = r0
                java.lang.String r0 = "Android"
                r1.device_os = r0
                return
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
                return r0
        }
    }

    public H5ClickEvent(java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, java.lang.String r19) {
            r11 = this;
            r0 = r11
            r11.<init>()
            java.lang.String r1 = "426"
            r0.groupId = r1
            java.lang.String r1 = "14"
            r0.clientType = r1
            r1 = r12
            r0.appKey = r1
            com.bianfeng.h5library.H5ClickEvent$AppProfileBean r1 = new com.bianfeng.h5library.H5ClickEvent$AppProfileBean
            r1.<init>()
            r0.appProfile = r1
            com.bianfeng.h5library.H5ClickEvent$DeviceProfileBean r1 = new com.bianfeng.h5library.H5ClickEvent$DeviceProfileBean
            r1.<init>()
            r0.deviceProfile = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.appEvents = r1
            com.bianfeng.h5library.H5ClickEvent$AppEventsBean r10 = new com.bianfeng.h5library.H5ClickEvent$AppEventsBean
            r2 = r10
            r3 = r15
            r4 = r14
            r5 = r17
            r6 = r16
            r7 = r18
            r8 = r19
            r9 = r13
            r2.<init>(r3, r4, r5, r6, r7, r8, r9)
            r1.add(r10)
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.h5library.utils.H5libGsonUtils.toJson(r1)
            return r0
    }
}
