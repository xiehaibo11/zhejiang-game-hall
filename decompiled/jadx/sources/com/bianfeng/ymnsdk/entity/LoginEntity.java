package com.bianfeng.ymnsdk.entity;

import android.text.TextUtils;
import com.bianfeng.platform.executor.AppConfig;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

/* JADX INFO: loaded from: classes.dex */
public class LoginEntity {
    private int app_id;
    private int channel;
    private int package_id;
    private int platform_id;
    private String third_data;

    public LoginEntity(int app_id, int package_id, int platform_id, String third_data) {
        this.app_id = app_id;
        this.package_id = package_id;
        this.platform_id = platform_id;
        getChannelToInt();
        this.third_data = third_data;
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

    public String toString() throws YmnsdkException {
        String signed;
        String trace = YmnDataFunUtils.getInstance().getLoginTrace();
        StringBuilder sb = new StringBuilder("V2&" + this.app_id + "&" + this.package_id + "&" + this.platform_id + "&" + this.channel + "&" + this.third_data);
        try {
            signed = SecurityUtil.getInstance().md5(((Object) sb) + YmnAppContext.getSdkAppKey());
        } catch (YmnsdkException e) {
            signed = "";
        }
        sb.append("&");
        sb.append(signed);
        sb.append("&");
        sb.append(trace);
        return sb.toString();
    }

    public int getApp_id() {
        return this.app_id;
    }

    public void setApp_id(int app_id) {
        this.app_id = app_id;
    }

    public int getPackage_id() {
        return this.package_id;
    }

    public void setPackage_id(int package_id) {
        this.package_id = package_id;
    }

    public int getPlatform_id() {
        return this.platform_id;
    }

    public void setPlatform_id(int platform_id) {
        this.platform_id = platform_id;
    }

    public int getChannel() {
        return this.channel;
    }

    public void setChannel(int channel) {
        this.channel = channel;
    }

    public String getThird_data() {
        return this.third_data;
    }

    public void setThird_data(String third_data) {
        this.third_data = third_data;
    }

    public static class ThirdDataBean {
        private String session;
        private String uid;
        private String uname;

        public ThirdDataBean(String uid, String uname, String session) {
            this.uid = uid;
            this.uname = uname;
            this.session = session;
        }

        public String getUid() {
            return this.uid;
        }

        public void setUid(String uid) {
            this.uid = uid;
        }

        public String getUname() {
            return this.uname;
        }

        public void setUname(String uname) {
            this.uname = uname;
        }

        public String getSession() {
            return this.session;
        }

        public void setSession(String session) {
            this.session = session;
        }

        public String toString() {
            return YmnGsonUtil.toJson(this);
        }
    }
}
