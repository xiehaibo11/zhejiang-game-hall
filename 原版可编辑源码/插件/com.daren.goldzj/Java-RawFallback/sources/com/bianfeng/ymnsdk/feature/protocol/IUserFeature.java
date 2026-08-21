package com.bianfeng.ymnsdk.feature.protocol;

public interface IUserFeature {
    public static final int ACTIVITY_YMN_REALNAME_ADULT = 999900013;
    public static final int ACTIVITY_YMN_REALNAME_CHILD = 999900014;
    public static final int ACTIVITY_YMN_REALNAME_FAILED = 999900016;
    public static final int ACTIVITY_YMN_REALNAME_NONSUPPORT_QUERY = 999900017;
    public static final int ACTIVITY_YMN_REALNAME_NONSUPPORT_SHOW = 999900018;
    public static final int ACTIVITY_YMN_REALNAME_NO_VERIFIED = 999900015;
    public static final int ACTIVITY_YMN_SET_REALNAME_FAIL = 999900012;
    public static final int ACTIVITY_YMN_SET_REALNAME_SUCCESS = 999900011;
    public static final java.lang.String FUNCTION_ACCOUNT_SWITCH = "accountSwitch";
    public static final java.lang.String FUNCTION_ENTER_PLATFORM = "enterPlatform";
    public static final java.lang.String FUNCTION_EXIT = "exit";
    public static final java.lang.String FUNCTION_GET_SHOW_VERIFY_REALNAME = "get_show_verify_realname";
    public static final java.lang.String FUNCTION_GET_USER_INFO = "getUserInfo";
    public static final java.lang.String FUNCTION_GET_VERIFY_REALNAME = "get_verify_realname_info";
    public static final java.lang.String FUNCTION_HIDE_TOOLBAR = "hideToolBar";
    public static final java.lang.String FUNCTION_IS_LOGINED = "isLogined";
    public static final java.lang.String FUNCTION_LOGOUT = "logout";
    public static final java.lang.String FUNCTION_SHOW_TOOLBAR = "showToolBar";
    public static final java.lang.String FUNCTION_SHOW_VERIFY_REALNAME = "show_verify_realname";
    public static final java.lang.String FUNCTION_SUBMIT_USERINFO = "submitUserInfo";
    public static final java.lang.String LOGIN_SUC_RS_EXT = "ext";
    public static final java.lang.String LOGIN_SUC_RS_NICKNAME = "nickName";
    public static final java.lang.String LOGIN_SUC_RS_SESSION = "session";
    public static final java.lang.String LOGIN_SUC_RS_UID = "uid";
    public static final java.lang.String LOGIN_SUC_RS_UNAME = "uname";

    public static class UserInfo {
        public boolean platformLogined;
        public java.lang.String platformSession;
        public java.lang.String platformUserId;
        public java.lang.String platformUserName;
        public java.lang.Object resExt;
        private boolean ymnLogined;
        private java.lang.String ymnSession;
        private java.lang.String ymnUserId;
        private java.lang.String ymnUserIdInt;
        private java.lang.String ymnUserName;

        public UserInfo() {
                r0 = this;
                r0.<init>()
                return
        }

        public java.lang.String getPlatformUserId() {
                r1 = this;
                java.lang.String r0 = r1.platformUserId
                return r0
        }

        public <T> T getResonseExt() {
                r1 = this;
                java.lang.Object r0 = r1.resExt
                return r0
        }

        public java.lang.String getUserName() {
                r1 = this;
                java.lang.String r0 = r1.platformUserName
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto Lb
                java.lang.String r0 = r1.ymnUserName
                return r0
            Lb:
                java.lang.String r0 = r1.platformUserName
                return r0
        }

        public java.lang.String getYmnSession() {
                r1 = this;
                java.lang.String r0 = r1.ymnSession
                return r0
        }

        public java.lang.String getYmnUserIdInt() {
                r1 = this;
                java.lang.String r0 = r1.ymnUserIdInt
                return r0
        }

        public boolean isYmnLogined() {
                r1 = this;
                boolean r0 = r1.ymnLogined
                return r0
        }

        public void setPlatformLogined(boolean r1) {
                r0 = this;
                r0.platformLogined = r1
                return
        }

        public void setPlatformSession(java.lang.String r1) {
                r0 = this;
                r0.platformSession = r1
                return
        }

        public void setPlatformUserId(java.lang.String r1) {
                r0 = this;
                r0.platformUserId = r1
                return
        }

        public void setPlatformUserName(java.lang.String r1) {
                r0 = this;
                r0.platformUserName = r1
                return
        }

        public void setResponseExt(java.lang.Object r1) {
                r0 = this;
                r0.resExt = r1
                return
        }

        public void setYmnLogined(boolean r1) {
                r0 = this;
                r0.ymnLogined = r1
                return
        }

        public void setYmnSession(java.lang.String r1) {
                r0 = this;
                r0.ymnSession = r1
                return
        }

        public void setYmnUserId(java.lang.String r1) {
                r0 = this;
                r0.ymnUserId = r1
                return
        }

        public void setYmnUserIdInt(java.lang.String r1) {
                r0 = this;
                r0.ymnUserIdInt = r1
                return
        }

        public void setYmnUserName(java.lang.String r1) {
                r0 = this;
                r0.ymnUserName = r1
                return
        }
    }

    void enterPlatform();

    void exit();

    void getAndShowVerifyRealName();

    com.bianfeng.ymnsdk.feature.protocol.IUserFeature.UserInfo getUserInfo();

    void getVerifyRealNameInfo();

    void hideToolBar();

    boolean isLogined();

    void login();

    void logout();

    void showToolBar();

    void showVerifyRealName();

    void submitUserInfo(java.util.LinkedHashMap<java.lang.String, java.lang.String> r1);

    void switchAccount();
}
