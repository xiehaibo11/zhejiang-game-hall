package com.bianfeng.h5library;

import com.bianfeng.h5library.utils.H5libAppContext;
import com.bianfeng.h5library.utils.H5libDeviceInfo;
import com.bianfeng.h5library.utils.H5libGsonUtils;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.tencent.connect.common.Constants;
import java.util.ArrayList;
import java.util.List;

class H5LoginEvent {
    private List<AppEventsBean> appEvents;
    private String appKey;
    private String clientType = Constants.VIA_REPORT_TYPE_MAKE_FRIEND;
    private String groupId = "426";
    private String loginType = "loginGame";

    public H5LoginEvent(String str, AppEventsBean appEventsBean) {
        this.appKey = str;
        ArrayList arrayList = new ArrayList();
        this.appEvents = arrayList;
        arrayList.add(appEventsBean);
    }

    public String toString() {
        return H5libGsonUtils.toJson(this);
    }

    public static class AppEventsBean {
        private H5LoginParametersEvent parameters;
        private String uniqueId;
        private AppProfileBean appProfile = new AppProfileBean();
        private int id = 4;
        private String label = HostConstant.login;
        private long startTime = System.currentTimeMillis();
        private DeviceProfileBean deviceProfile = new DeviceProfileBean();

        public AppEventsBean(String str, String str2, String str3, String str4, String str5) {
            this.parameters = new H5LoginParametersEvent(str, str2, str3, str4, str5);
        }

        public void setUniqueId(String str) {
            this.uniqueId = str;
        }

        public String toString() {
            return H5libGsonUtils.toJson(this);
        }

        public static class DeviceProfileBean {
            private String carrier = H5libDeviceInfo.getCarrier();
            private String deviceId = H5libDeviceInfo.getDeviceId();
            private String deviceModel = H5libDeviceInfo.getDeviceModel();
            private String devicePixel = H5libDeviceInfo.getDevicePixel();
            private String osVersion = H5libDeviceInfo.getOsVersion();

            public String toString() {
                return H5libGsonUtils.toJson(this);
            }
        }

        public static class AppProfileBean {
            private int appType = 1;
            private String appVersionName = H5libAppContext.getVerName();
            private String appPackageName = H5libAppContext.getPkgName();
            private String sdkVersion = H5libAppContext.getSdkVersion();

            public String toString() {
                return H5libGsonUtils.toJson(this);
            }
        }
    }
}
