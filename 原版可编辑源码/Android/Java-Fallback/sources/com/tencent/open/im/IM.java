package com.tencent.open.im;

public class IM extends com.tencent.connect.common.BaseApi {
    public static final java.lang.String CHAT_TYPE_AIO = "thirdparty2c";
    public static final java.lang.String CHAT_TYPE_AUDIO_CHAT = "audio_chat";
    public static final java.lang.String CHAT_TYPE_VIDEO_CHAT = "video_chat";
    public static final int IM_LENGTH_SHORT = -3;
    public static final int IM_SHOULD_DOWNLOAD = -2;
    public static final int IM_SUCCESS = 0;
    public static final int IM_UIN_EMPTY = -1;
    public static final int IM_UIN_NOT_DIGIT = -4;
    public static final int IM_UNKNOWN_TYPE = -5;

    public IM(android.content.Context r1, com.tencent.connect.auth.QQToken r2) {
            r0 = this;
            r0.<init>(r2)
            return
    }

    public IM(android.content.Context r1, com.tencent.connect.auth.c r2, com.tencent.connect.auth.QQToken r3) {
            r0 = this;
            r0.<init>(r2, r3)
            return
    }

    public IM(com.tencent.connect.auth.QQToken r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public int startIMConversation(android.app.Activity r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r9 = this;
            java.lang.String r0 = "ImApi"
            r1 = 0
            boolean r0 = com.tencent.connect.a.a(r0, r1)
            r1 = -5
            if (r0 == 0) goto Lb
            return r1
        Lb:
            if (r11 == 0) goto Lc6
            java.lang.String r0 = "thirdparty2c"
            boolean r0 = r11.equals(r0)
            java.lang.String r2 = "video_chat"
            java.lang.String r3 = "audio_chat"
            if (r0 != 0) goto L27
            boolean r0 = r11.equals(r3)
            if (r0 != 0) goto L27
            boolean r0 = r11.equals(r2)
            if (r0 != 0) goto L27
            goto Lc6
        L27:
            boolean r0 = r11.equals(r3)
            if (r0 == 0) goto L2e
            goto L32
        L2e:
            boolean r0 = r11.equals(r2)
        L32:
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            if (r0 == 0) goto L3a
            r10 = -1
            return r10
        L3a:
            int r0 = r12.length()
            r1 = 5
            if (r0 >= r1) goto L43
            r10 = -3
            return r10
        L43:
            r0 = 0
            r2 = 0
        L45:
            int r3 = r12.length()
            if (r2 >= r3) goto L5a
            char r3 = r12.charAt(r2)
            boolean r3 = java.lang.Character.isDigit(r3)
            if (r3 != 0) goto L57
            r10 = -4
            return r10
        L57:
            int r2 = r2 + 1
            goto L45
        L5a:
            boolean r2 = com.tencent.open.utils.m.d(r10)
            if (r2 == 0) goto Laa
            android.content.Intent r2 = new android.content.Intent
            java.lang.String r3 = "android.intent.action.VIEW"
            r2.<init>(r3)
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r0] = r11
            r11 = 1
            r1[r11] = r12
            r11 = 2
            com.tencent.connect.auth.QQToken r12 = r9.c
            java.lang.String r12 = r12.getOpenId()
            java.lang.String r12 = com.tencent.open.utils.m.k(r12)
            r1[r11] = r12
            r11 = 3
            com.tencent.connect.auth.QQToken r12 = r9.c
            java.lang.String r12 = r12.getAppId()
            java.lang.String r12 = com.tencent.open.utils.m.k(r12)
            r1[r11] = r12
            r11 = 4
            java.lang.String r12 = com.tencent.open.utils.m.k(r13)
            r1[r11] = r12
            java.lang.String r11 = "mqqapi://im/chat?chat_type=%1$s&uin=%2$s&version=1&src_type=app&open_id=%3$s&app_id=%4$s&app_pkg_name=%5$s"
            java.lang.String r11 = java.lang.String.format(r11, r1)
            android.net.Uri r11 = android.net.Uri.parse(r11)
            r2.setData(r11)
            java.lang.String r11 = "com.tencent.mobileqq"
            r2.setPackage(r11)
            java.lang.String r11 = "pkg_name"
            r2.putExtra(r11, r13)
            r10.startActivity(r2)
            return r0
        Laa:
            com.tencent.open.TDialog r11 = new com.tencent.open.TDialog     // Catch: java.lang.RuntimeException -> Lc0
            java.lang.String r5 = ""
            java.lang.String r12 = ""
            java.lang.String r6 = r9.a(r12)     // Catch: java.lang.RuntimeException -> Lc0
            r7 = 0
            com.tencent.connect.auth.QQToken r8 = r9.c     // Catch: java.lang.RuntimeException -> Lc0
            r3 = r11
            r4 = r10
            r3.<init>(r4, r5, r6, r7, r8)     // Catch: java.lang.RuntimeException -> Lc0
            r11.show()     // Catch: java.lang.RuntimeException -> Lc0
            goto Lc4
        Lc0:
            r10 = move-exception
            r10.printStackTrace()
        Lc4:
            r10 = -2
            return r10
        Lc6:
            return r1
    }
}
