package com.vivo.push;

public final class p {
    public static final android.net.Uri a = null;
    public static final android.net.Uri b = null;
    public static final android.net.Uri c = null;
    public static final android.net.Uri d = null;

    static {
            java.lang.String r0 = "content://com.vivo.push.sdk.service.SystemPushConfig/config"
            android.net.Uri r0 = android.net.Uri.parse(r0)
            com.vivo.push.p.a = r0
            java.lang.String r0 = "content://com.vivo.push.sdk.service.SystemPushConfig/permission"
            android.net.Uri r0 = android.net.Uri.parse(r0)
            com.vivo.push.p.b = r0
            java.lang.String r0 = "content://com.vivo.push.sdk.service.SystemPushConfig/clientState"
            android.net.Uri r0 = android.net.Uri.parse(r0)
            com.vivo.push.p.c = r0
            java.lang.String r0 = "content://com.vivo.push.sdk.service.SystemPushConfig/debugInfo"
            android.net.Uri r0 = android.net.Uri.parse(r0)
            com.vivo.push.p.d = r0
            return
    }

    public static java.lang.String a(int r0) {
            switch(r0) {
                case 2002: goto L17;
                case 2003: goto L14;
                case 2004: goto L11;
                case 2005: goto Le;
                case 2006: goto Lb;
                case 2007: goto L8;
                case 2008: goto L5;
                default: goto L3;
            }
        L3:
            r0 = 0
            return r0
        L5:
            java.lang.String r0 = "method_stop"
            return r0
        L8:
            java.lang.String r0 = "method_sdk_unbind"
            return r0
        Lb:
            java.lang.String r0 = "method_sdk_bind"
            return r0
        Le:
            java.lang.String r0 = "method_tag_unbind"
            return r0
        L11:
            java.lang.String r0 = "method_tag_bind"
            return r0
        L14:
            java.lang.String r0 = "method_alias_unbind"
            return r0
        L17:
            java.lang.String r0 = "method_alias_bind"
            return r0
    }
}
