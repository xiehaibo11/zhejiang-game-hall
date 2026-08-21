package com.bianfeng.ymnsdk.feature.protocol;

import android.text.TextUtils;
import java.util.LinkedHashMap;

public interface IUserFeature {
    public static final int ACTIVITY_YMN_REALNAME_ADULT = 999900013;
    public static final int ACTIVITY_YMN_REALNAME_CHILD = 999900014;
    public static final int ACTIVITY_YMN_REALNAME_FAILED = 999900016;
    public static final int ACTIVITY_YMN_REALNAME_NONSUPPORT_QUERY = 999900017;
    public static final int ACTIVITY_YMN_REALNAME_NONSUPPORT_SHOW = 999900018;
    public static final int ACTIVITY_YMN_REALNAME_NO_VERIFIED = 999900015;
    public static final int ACTIVITY_YMN_SET_REALNAME_FAIL = 999900012;
    public static final int ACTIVITY_YMN_SET_REALNAME_SUCCESS = 999900011;
    public static final String FUNCTION_ACCOUNT_SWITCH = "accountSwitch";
    public static final String FUNCTION_ENTER_PLATFORM = "enterPlatform";
    public static final String FUNCTION_EXIT = "exit";
    public static final String FUNCTION_GET_SHOW_VERIFY_REALNAME = "get_show_verify_realname";
    public static final String FUNCTION_GET_USER_INFO = "getUserInfo";
    public static final String FUNCTION_GET_VERIFY_REALNAME = "get_verify_realname_info";
    public static final String FUNCTION_HIDE_TOOLBAR = "hideToolBar";
    public static final String FUNCTION_IS_LOGINED = "isLogined";
    public static final String FUNCTION_LOGOUT = "logout";
    public static final String FUNCTION_SHOW_TOOLBAR = "showToolBar";
    public static final String FUNCTION_SHOW_VERIFY_REALNAME = "show_verify_realname";
    public static final String FUNCTION_SUBMIT_USERINFO = "submitUserInfo";
    public static final String LOGIN_SUC_RS_EXT = "ext";
    public static final String LOGIN_SUC_RS_NICKNAME = "nickName";
    public static final String LOGIN_SUC_RS_SESSION = "session";
    public static final String LOGIN_SUC_RS_UID = "uid";
    public static final String LOGIN_SUC_RS_UNAME = "uname";

    public static class UserInfo {
        public boolean platformLogined;
        public String platformSession;
        public String platformUserId;
        public String platformUserName;
        public Object resExt;
        private boolean ymnLogined;
        private String ymnSession;
        private String ymnUserId;
        private String ymnUserIdInt;
        private String ymnUserName;

        public UserInfo() {
        }

        public String getPlatformUserId() {
            return this.platformUserId;
        }

        public <T> T getResonseExt() {
            return (T) this.resExt;
        }

        public String getUserName() {
            if (TextUtils.isEmpty(this.platformUserName) == false) goto L7;
            return this.ymnUserName;
        L7:
            return this.platformUserName;
        }

        public String getYmnSession() {
            return this.ymnSession;
        }

        public String getYmnUserIdInt() {
            return this.ymnUserIdInt;
        }

        public boolean isYmnLogined() {
            return this.ymnLogined;
        }

        public void setPlatformLogined(boolean r1) {
            this.platformLogined = r1;
        }

        public void setPlatformSession(String r1) {
            this.platformSession = r1;
        }

        public void setPlatformUserId(String r1) {
            this.platformUserId = r1;
        }

        public void setPlatformUserName(String r1) {
            this.platformUserName = r1;
        }

        public void setResponseExt(Object r1) {
            this.resExt = r1;
        }

        public void setYmnLogined(boolean r1) {
            this.ymnLogined = r1;
        }

        public void setYmnSession(String r1) {
            this.ymnSession = r1;
        }

        public void setYmnUserId(String r1) {
            this.ymnUserId = r1;
        }

        public void setYmnUserIdInt(String r1) {
            this.ymnUserIdInt = r1;
        }

        public void setYmnUserName(String r1) {
            this.ymnUserName = r1;
        }
    }

    void enterPlatform();

    void exit();

    void getAndShowVerifyRealName();

    UserInfo getUserInfo();

    void getVerifyRealNameInfo();

    void hideToolBar();

    boolean isLogined();

    void login();

    void logout();

    void showToolBar();

    void showVerifyRealName();

    void submitUserInfo(LinkedHashMap<String, String> r1);

    void switchAccount();
}
