package com.xiaomi.push.service;

public abstract class bk {
    public static java.lang.String A = "ext_cloud_attr";
    public static java.lang.String B = "ext_pkg_name";
    public static java.lang.String C = "ext_notify_id";
    public static java.lang.String D = "ext_clicked_button";
    public static java.lang.String E = "ext_notify_type";
    public static java.lang.String F = "ext_session";
    public static java.lang.String G = "sig";
    public static java.lang.String H = "ext_notify_title";
    public static java.lang.String I = "ext_notify_description";
    public static java.lang.String J = "ext_messenger";
    public static java.lang.String K = "title";
    public static java.lang.String L = "description";
    public static java.lang.String M = "notifyId";
    public static java.lang.String N = "dump";
    public static java.lang.String a = "1";
    public static java.lang.String b = "2";
    public static java.lang.String c = "3";
    public static java.lang.String d = "com.xiaomi.push.OPEN_CHANNEL";
    public static java.lang.String e = "com.xiaomi.push.SEND_MESSAGE";
    public static java.lang.String f = "com.xiaomi.push.SEND_IQ";
    public static java.lang.String g = "com.xiaomi.push.BATCH_SEND_MESSAGE";
    public static java.lang.String h = "com.xiaomi.push.SEND_PRES";
    public static java.lang.String i = "com.xiaomi.push.CLOSE_CHANNEL";
    public static java.lang.String j = "com.xiaomi.push.FORCE_RECONN";
    public static java.lang.String k = "com.xiaomi.push.RESET_CONN";
    public static java.lang.String l = "com.xiaomi.push.UPDATE_CHANNEL_INFO";
    public static java.lang.String m = "com.xiaomi.push.SEND_STATS";
    public static java.lang.String n = "com.xiaomi.push.HANDLE_FCM_MSG";
    public static java.lang.String o = "com.xiaomi.push.CHANGE_HOST";
    public static java.lang.String p = "com.xiaomi.push.PING_TIMER";
    public static java.lang.String q = "ext_user_id";
    public static java.lang.String r = "ext_user_server";
    public static java.lang.String s = "ext_user_res";
    public static java.lang.String t = "ext_chid";
    public static java.lang.String u = "ext_sid";
    public static java.lang.String v = "ext_token";
    public static java.lang.String w = "ext_auth_method";
    public static java.lang.String x = "ext_security";
    public static java.lang.String y = "ext_kick";
    public static java.lang.String z = "ext_client_attr";

    static {
            return
    }

    public static java.lang.String a(int r0) {
            switch(r0) {
                case 0: goto L4a;
                case 1: goto L47;
                case 2: goto L44;
                case 3: goto L41;
                case 4: goto L3e;
                case 5: goto L3b;
                case 6: goto L38;
                case 7: goto L35;
                case 8: goto L32;
                case 9: goto L2f;
                case 10: goto L2c;
                case 11: goto L29;
                case 12: goto L26;
                case 13: goto L23;
                case 14: goto L20;
                case 15: goto L1d;
                case 16: goto L1a;
                case 17: goto L17;
                case 18: goto L14;
                case 19: goto L11;
                case 20: goto Le;
                case 21: goto Lb;
                case 22: goto L8;
                default: goto L3;
            }
        L3:
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
        L8:
            java.lang.String r0 = "ERROR_PING_TIMEOUT"
            return r0
        Lb:
            java.lang.String r0 = "ERROR_BIND_TIMEOUT"
            return r0
        Le:
            java.lang.String r0 = "ERROR_REDIRECT"
            return r0
        L11:
            java.lang.String r0 = "ERROR_USER_BLOCKED"
            return r0
        L14:
            java.lang.String r0 = "ERROR_CONNECTIING_TIMEOUT"
            return r0
        L17:
            java.lang.String r0 = "ERROR_READ_TIMEOUT"
            return r0
        L1a:
            java.lang.String r0 = "ERROR_SESSION_CHANGED"
            return r0
        L1d:
            java.lang.String r0 = "ERROR_SERVICE_DESTROY"
            return r0
        L20:
            java.lang.String r0 = "ERROR_THREAD_BLOCK"
            return r0
        L23:
            java.lang.String r0 = "ERROR_SERVER_STREAM"
            return r0
        L26:
            java.lang.String r0 = "ERROR_NO_CLIENT"
            return r0
        L29:
            java.lang.String r0 = "ERROR_RESET"
            return r0
        L2c:
            java.lang.String r0 = "ERROR_SEND_ERROR"
            return r0
        L2f:
            java.lang.String r0 = "ERROR_READ_ERROR"
            return r0
        L32:
            java.lang.String r0 = "ERROR_RECEIVE_TIMEOUT"
            return r0
        L35:
            java.lang.String r0 = "ERROR_SERVER_ERROR"
            return r0
        L38:
            java.lang.String r0 = "ERROR_MULTI_LOGIN"
            return r0
        L3b:
            java.lang.String r0 = "ERROR_AUTH_FAILED"
            return r0
        L3e:
            java.lang.String r0 = "ERROR_ACCESS_DENIED"
            return r0
        L41:
            java.lang.String r0 = "ERROR_NETWORK_FAILED"
            return r0
        L44:
            java.lang.String r0 = "ERROR_NETWORK_NOT_AVAILABLE"
            return r0
        L47:
            java.lang.String r0 = "ERROR_SERVICE_NOT_INSTALLED"
            return r0
        L4a:
            java.lang.String r0 = "ERROR_OK"
            return r0
    }
}
