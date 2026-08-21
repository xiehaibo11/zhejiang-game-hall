package com.bianfeng.h5library;

import com.bianfeng.h5library.utils.H5libAppContext;
import com.bianfeng.h5library.utils.H5libDeviceInfo;
import com.bianfeng.h5library.utils.H5libGsonUtils;
import com.tencent.connect.common.Constants;
import java.util.ArrayList;
import java.util.List;

class H5ClickEvent {
    private List<AppEventsBean> appEvents;
    private String appKey;
    private String groupId = "426";
    private String clientType = Constants.VIA_REPORT_TYPE_MAKE_FRIEND;
    private AppProfileBean appProfile = new AppProfileBean();
    private DeviceProfileBean deviceProfile = new DeviceProfileBean();

    public H5ClickEvent(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8) {
        this.appKey = str;
        ArrayList arrayList = new ArrayList();
        this.appEvents = arrayList;
        arrayList.add(new AppEventsBean(str4, str3, str6, str5, str7, str8, str2));
    }

    public String toString() {
        return H5libGsonUtils.toJson(this);
    }

    public static class AppProfileBean {
        private String appVersionName = H5libAppContext.getVerName();
        private String appType = "1";
        private String appPackageName = H5libAppContext.getPkgName();
        private String sdkVersion = H5libAppContext.getSdkVersion();

        public String toString() {
            return H5libGsonUtils.toJson(this);
        }
    }

    public static class DeviceProfileBean {
        private String deviceModel = H5libDeviceInfo.getDeviceModel();
        private String carrier = H5libDeviceInfo.getCarrier();
        private String deviceId = H5libDeviceInfo.getDeviceId();
        private String device_os = "Android";

        public String toString() {
            return H5libGsonUtils.toJson(this);
        }
    }

    public static class AppEventsBean {
        private String id;
        private String label;
        private ParametersBean parameters;
        private String startTime = System.currentTimeMillis() + "";

        public AppEventsBean(String str, String str2, String str3, String str4, String str5, String str6, String str7) {
            this.id = str;
            this.label = str2;
            this.parameters = new ParametersBean(str3, str4, str5, str6, str7);
        }

        public String toString() {
            return H5libGsonUtils.toJson(this);
        }

        public static class ParametersBean {
            private String areaName;
            private String channelName;
            private String isNewUesr;
            private String userId;
            private String userName;
            private String amount = "1";
            private String os_version = H5libDeviceInfo.getOsVersion();
            private String collectVersion = H5EventUtils.getInstance().getVersion();

            public ParametersBean(String str, String str2, String str3, String str4, String str5) {
                this.userName = str;
                this.userId = str2;
                this.areaName = str3;
                this.isNewUesr = str4;
                this.channelName = str5;
            }

            public String toString() {
                return H5libGsonUtils.toJson(this);
            }
        }
    }
}
