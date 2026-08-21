package com.bianfeng.h5library;

import com.bianfeng.h5library.utils.H5libAppContext;
import com.bianfeng.h5library.utils.H5libDeviceInfo;
import com.bianfeng.h5library.utils.H5libGsonUtils;
import com.tencent.connect.common.Constants;
import com.xiaomi.mipush.sdk.MiPushClient;
import java.util.ArrayList;
import java.util.List;

class H5RegisterEvent {
    private List<AppEventsBean> appEvents;
    private String appKey;
    private String groupId = "426";
    private String clientType = Constants.VIA_REPORT_TYPE_MAKE_FRIEND;

    public H5RegisterEvent(String str, String str2, String str3, String str4, String str5) {
        this.appKey = str;
        ArrayList arrayList = new ArrayList();
        this.appEvents = arrayList;
        arrayList.add(new AppEventsBean(str2, str3, str4, str5));
    }

    public String toString() {
        return H5libGsonUtils.toJson(this);
    }

    public static class AppEventsBean {
        private ParametersBean parameters;
        private String id = "6";
        private String label = MiPushClient.COMMAND_REGISTER;
        private String startTime = System.currentTimeMillis() + "";
        private AppProfileBean appProfile = new AppProfileBean();
        private DeviceProfileBean deviceProfile = new DeviceProfileBean();

        public AppEventsBean(String str, String str2, String str3, String str4) {
            this.parameters = new ParametersBean(str, str2, str3, str4);
        }

        public String toString() {
            return H5libGsonUtils.toJson(this);
        }

        public static class AppProfileBean {
            private String appType = "1";
            private String appVersionName = H5libAppContext.getVerName();
            private String appPackageName = H5libAppContext.getPkgName();
            private String sdkVersion = H5libAppContext.getSdkVersion();

            public String toString() {
                return H5libGsonUtils.toJson(this);
            }
        }

        public static class DeviceProfileBean {
            private String deviceId = H5libDeviceInfo.getDeviceId();

            public String toString() {
                return H5libGsonUtils.toJson(this);
            }
        }

        public static class ParametersBean {
            private String areaName;
            private String channelName;
            private String userName;
            private String userid;
            private String collectVersion = H5EventUtils.getInstance().getVersion();
            private String clientIp = H5libDeviceInfo.getClientIp();

            public ParametersBean(String str, String str2, String str3, String str4) {
                this.userName = str;
                this.channelName = str3;
                this.areaName = str2;
                this.userid = str4;
            }

            public String toString() {
                return H5libGsonUtils.toJson(this);
            }
        }
    }
}
