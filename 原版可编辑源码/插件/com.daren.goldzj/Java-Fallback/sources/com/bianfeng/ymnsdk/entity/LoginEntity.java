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

        public ThirdDataBean(String r1, String r2, String r3) {
            this.uid = r1;
            this.uname = r2;
            this.session = r3;
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

        public void setSession(String r1) {
            this.session = r1;
        }

        public void setUid(String r1) {
            this.uid = r1;
        }

        public void setUname(String r1) {
            this.uname = r1;
        }

        public String toString() {
            return YmnGsonUtil.toJson(this);
        }
    }

    public LoginEntity(int r1, int r2, int r3, String r4) {
        this.app_id = r1;
        this.package_id = r2;
        this.platform_id = r3;
        getChannelToInt();
        this.third_data = r4;
    }

    private void getChannelToInt() {
    L8:
        e = move-exception;
        e.printStackTrace();
        this.channel = 0;
        return;
    L4:
        if (TextUtils.isEmpty(AppConfig.getChannelId()) == false) goto L6;
        this.channel = 0;     // Catch: Exception -> L8
    L11:
        return;
    L6:
        this.channel = Integer.parseInt(AppConfig.getChannelId());     // Catch: Exception -> L8
        goto L11
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

    public void setApp_id(int r1) {
        this.app_id = r1;
    }

    public void setChannel(int r1) {
        this.channel = r1;
    }

    public void setPackage_id(int r1) {
        this.package_id = r1;
    }

    public void setPlatform_id(int r1) {
        this.platform_id = r1;
    }

    public void setThird_data(String r1) {
        this.third_data = r1;
    }

    public String toString() {
        String r0 = YmnDataFunUtils.getInstance().getLoginTrace();
        StringBuilder r1 = new StringBuilder("V2&" + this.app_id + "&" + this.package_id + "&" + this.platform_id + "&" + this.channel + "&" + this.third_data);
        String r2 = SecurityUtil.getInstance().md5(r1 + YmnAppContext.getSdkAppKey());     // Catch: YmnsdkException -> L5
    L6:
        r1.append("&");
        r1.append(r2);
        r1.append("&");
        r1.append(r0);
        return r1.toString();
    L5:
        r2 = "";
        goto L6
    }
}
