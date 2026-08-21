package com.bianfeng.ymnsdk.entity;

import android.text.TextUtils;
import com.bianfeng.platform.executor.AppConfig;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class LoginEntity {
    private int app_id;
    private int channel;
    private int package_id;
    private int platform_id;
    private String third_data;

    public static class ThirdDataBean {
        private String session;
        private String uid;
        private String uname;

        public ThirdDataBean(String str, String str2, String str3) {
            this.uid = str;
            this.uname = str2;
            this.session = str3;
        }

        public String getSession() {
            return this.session;
        }

        public String getUid() {
            return this.uid;
        }

        public String getUname() {
            return this.uname;
        }

        public void setSession(String str) {
            this.session = str;
        }

        public void setUid(String str) {
            this.uid = str;
        }

        public void setUname(String str) {
            this.uname = str;
        }

        public String toString() {
            return YmnGsonUtil.toJson(this);
        }
    }

    public LoginEntity(int i, int i2, int i3, String str) {
        this.app_id = i;
        this.package_id = i2;
        this.platform_id = i3;
        getChannelToInt();
        this.third_data = str;
    }

    private void getChannelToInt() {
        try {
            if (TextUtils.isEmpty(AppConfig.getChannelId())) {
                this.channel = 0;
            } else {
                this.channel = Integer.parseInt(AppConfig.getChannelId());
            }
        } catch (Exception e) {
            e.printStackTrace();
            this.channel = 0;
        }
    }

    public int getApp_id() {
        return this.app_id;
    }

    public int getChannel() {
        return this.channel;
    }

    public int getPackage_id() {
        return this.package_id;
    }

    public int getPlatform_id() {
        return this.platform_id;
    }

    public String getThird_data() {
        return this.third_data;
    }

    public void setApp_id(int i) {
        this.app_id = i;
    }

    public void setChannel(int i) {
        this.channel = i;
    }

    public void setPackage_id(int i) {
        this.package_id = i;
    }

    public void setPlatform_id(int i) {
        this.platform_id = i;
    }

    public void setThird_data(String str) {
        this.third_data = str;
    }

    public String toString() {
        String strMd5;
        String loginTrace = YmnDataFunUtils.getInstance().getLoginTrace();
        StringBuilder sb = new StringBuilder("V2&" + this.app_id + "&" + this.package_id + "&" + this.platform_id + "&" + this.channel + "&" + this.third_data);
        try {
            strMd5 = SecurityUtil.getInstance().md5(((Object) sb) + YmnAppContext.getSdkAppKey());
        } catch (YmnsdkException unused) {
            strMd5 = "";
        }
        sb.append("&");
        sb.append(strMd5);
        sb.append("&");
        sb.append(loginTrace);
        return sb.toString();
    }
}
