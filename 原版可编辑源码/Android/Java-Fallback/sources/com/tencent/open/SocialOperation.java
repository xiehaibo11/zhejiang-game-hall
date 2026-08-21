package com.tencent.open;

public class SocialOperation extends com.tencent.connect.common.BaseApi {
    public static final java.lang.String GAME_FRIEND_ADD_MESSAGE = "add_msg";
    public static final java.lang.String GAME_FRIEND_LABEL = "friend_label";
    public static final java.lang.String GAME_FRIEND_OPENID = "fopen_id";
    public static final java.lang.String GAME_SIGNATURE = "signature";
    public static final java.lang.String GAME_UNION_ID = "unionid";
    public static final java.lang.String GAME_UNION_NAME = "union_name";
    public static final java.lang.String GAME_ZONE_ID = "zoneid";




    public SocialOperation(com.tencent.connect.auth.QQToken r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private void a(android.app.Activity r2) {
            r1 = this;
            java.lang.String r0 = ""
            r1.a(r2, r0)
            return
    }

    private void a(android.app.Activity r8, java.lang.String r9) {
            r7 = this;
            com.tencent.open.TDialog r6 = new com.tencent.open.TDialog
            java.lang.String r3 = r7.a(r9)
            com.tencent.connect.auth.QQToken r5 = r7.c
            java.lang.String r2 = ""
            r4 = 0
            r0 = r6
            r1 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            r6.show()
            return
    }

    static void a(com.tencent.open.SocialOperation r0, android.app.Activity r1) {
            r0.a(r1)
            return
    }

    static void a(com.tencent.open.SocialOperation r0, android.app.Activity r1, int r2, android.content.Intent r3, boolean r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    static void b(com.tencent.open.SocialOperation r0, android.app.Activity r1, int r2, android.content.Intent r3, boolean r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    public void bindQQGroup(android.app.Activity r10, java.lang.String r11, java.lang.String r12, com.tencent.tauth.IUiListener r13) {
            r9 = this;
            java.lang.String r0 = "openSDK_LOG.GameAppOperation"
            java.lang.String r1 = "-->bindQQGroup()  -- start"
            com.tencent.open.log.SLog.i(r0, r1)
            boolean r1 = com.tencent.connect.a.a(r0, r13)
            if (r1 == 0) goto Le
            return
        Le:
            if (r10 != 0) goto L26
            java.lang.String r10 = "-->bindQQGroup, activity is empty."
            com.tencent.open.log.SLog.e(r0, r10)
            if (r13 == 0) goto L25
            com.tencent.tauth.UiError r10 = new com.tencent.tauth.UiError
            r11 = 1001(0x3e9, float:1.403E-42)
            java.lang.String r12 = "param acitivty is null"
            java.lang.String r0 = "activity param of api can not be null."
            r10.<init>(r11, r12, r0)
            r13.onError(r10)
        L25:
            return
        L26:
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            java.lang.String r2 = "mqqapi://opensdk/bind_group?src_type=app&version=1"
            r1.<init>(r2)
            com.tencent.connect.auth.QQToken r2 = r9.c
            java.lang.String r2 = r2.getAppId()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r4 = "please login."
            if (r3 == 0) goto L4f
            java.lang.String r10 = "-->bindQQGroup, appId is empty."
            com.tencent.open.log.SLog.e(r0, r10)
            if (r13 == 0) goto L4e
            com.tencent.tauth.UiError r10 = new com.tencent.tauth.UiError
            r11 = 1003(0x3eb, float:1.406E-42)
            java.lang.String r12 = "appid is null"
            r10.<init>(r11, r12, r4)
            r13.onError(r10)
        L4e:
            return
        L4f:
            com.tencent.connect.auth.QQToken r3 = r9.c
            java.lang.String r3 = r3.getOpenId()
            boolean r5 = android.text.TextUtils.isEmpty(r3)
            if (r5 == 0) goto L6f
            java.lang.String r10 = "-->bindQQGroup, openid is empty."
            com.tencent.open.log.SLog.e(r0, r10)
            if (r13 == 0) goto L6e
            com.tencent.tauth.UiError r10 = new com.tencent.tauth.UiError
            r11 = 1004(0x3ec, float:1.407E-42)
            java.lang.String r12 = "openid params is null"
            r10.<init>(r11, r12, r4)
            r13.onError(r10)
        L6e:
            return
        L6f:
            java.lang.String r4 = com.tencent.open.utils.m.a(r10)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r6 = ""
            if (r5 == 0) goto L8f
            java.lang.String r10 = "-->bindQQGroup, appname is empty."
            com.tencent.open.log.SLog.e(r0, r10)
            if (r13 == 0) goto L8e
            com.tencent.tauth.UiError r10 = new com.tencent.tauth.UiError
            r11 = 1005(0x3ed, float:1.408E-42)
            java.lang.String r12 = "appName params is null"
            r10.<init>(r11, r12, r6)
            r13.onError(r10)
        L8e:
            return
        L8f:
            boolean r5 = android.text.TextUtils.isEmpty(r11)
            if (r5 == 0) goto La9
            java.lang.String r10 = "-->bindQQGroup, organization id is empty."
            com.tencent.open.log.SLog.e(r0, r10)
            if (r13 == 0) goto La8
            com.tencent.tauth.UiError r10 = new com.tencent.tauth.UiError
            r11 = 1006(0x3ee, float:1.41E-42)
            java.lang.String r12 = "organizationId params is null"
            r10.<init>(r11, r12, r6)
            r13.onError(r10)
        La8:
            return
        La9:
            boolean r5 = android.text.TextUtils.isEmpty(r12)
            if (r5 == 0) goto Lc3
            java.lang.String r10 = "-->bindQQGroup, organization name is empty."
            com.tencent.open.log.SLog.e(r0, r10)
            if (r13 == 0) goto Lc2
            com.tencent.tauth.UiError r10 = new com.tencent.tauth.UiError
            r11 = 1007(0x3ef, float:1.411E-42)
            java.lang.String r12 = "organizationName params is null"
            r10.<init>(r11, r12, r6)
            r13.onError(r10)
        Lc2:
            return
        Lc3:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "&app_name="
            r5.append(r6)
            byte[] r6 = com.tencent.open.utils.m.j(r4)
            r7 = 2
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r7)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "&organization_id="
            r5.append(r6)
            byte[] r6 = com.tencent.open.utils.m.j(r11)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r7)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "&organization_name="
            r5.append(r6)
            byte[] r6 = com.tencent.open.utils.m.j(r12)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r7)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "&openid="
            r5.append(r6)
            byte[] r3 = com.tencent.open.utils.m.j(r3)
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r7)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r1.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "&appid="
            r3.append(r5)
            byte[] r5 = com.tencent.open.utils.m.j(r2)
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r7)
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "&sdk_version="
            r3.append(r5)
            java.lang.String r5 = "3.5.14.lite"
            byte[] r5 = com.tencent.open.utils.m.j(r5)
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r7)
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "&app_name_url_encode="
            r3.append(r5)
            byte[] r4 = com.tencent.open.utils.m.j(r4)
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r7)
            java.lang.String r4 = com.tencent.open.utils.m.f(r4)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "&organization_name_url_encode="
            r3.append(r4)
            byte[] r12 = com.tencent.open.utils.m.j(r12)
            java.lang.String r12 = android.util.Base64.encodeToString(r12, r7)
            java.lang.String r12 = com.tencent.open.utils.m.f(r12)
            r3.append(r12)
            java.lang.String r12 = r3.toString()
            r1.append(r12)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r3 = "-->bindQQGroup, url: "
            r12.append(r3)
            java.lang.String r3 = r1.toString()
            r12.append(r3)
            java.lang.String r12 = r12.toString()
            com.tencent.open.log.SLog.v(r0, r12)
            java.lang.String r12 = r1.toString()
            android.net.Uri r12 = android.net.Uri.parse(r12)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r3 = "android.intent.action.VIEW"
            r1.<init>(r3)
            r1.setData(r12)
            java.lang.String r12 = "com.tencent.mobileqq"
            r1.setPackage(r12)
            java.lang.String r12 = "8.1.0"
            int r12 = com.tencent.open.utils.k.c(r10, r12)
            if (r12 >= 0) goto L1ee
            java.lang.String r11 = "-->bind group, there is no activity, show download page."
            com.tencent.open.log.SLog.w(r0, r11)
            r9.a(r10)
            return
        L1ee:
            com.tencent.open.SocialOperation$3 r12 = new com.tencent.open.SocialOperation$3
            r12.<init>(r9, r13, r10, r1)
            android.os.Bundle r6 = r9.a()
            java.lang.String r13 = "appid"
            r6.putString(r13, r2)
            java.lang.String r13 = "orgid"
            r6.putString(r13, r11)
            com.tencent.connect.auth.QQToken r3 = r9.c
            com.tencent.connect.common.BaseApi$TempRequestListener r8 = new com.tencent.connect.common.BaseApi$TempRequestListener
            r8.<init>(r9, r12)
            java.lang.String r5 = "https://openmobile.qq.com/cgi-bin/qunopensdk/check_group"
            java.lang.String r7 = "GET"
            r4 = r10
            com.tencent.open.utils.HttpUtils.requestAsync(r3, r4, r5, r6, r7, r8)
            java.lang.String r10 = "-->bindQQGroup() do."
            com.tencent.open.log.SLog.i(r0, r10)
            return
    }

    public void joinGroup(android.app.Activity r11, java.lang.String r12, com.tencent.tauth.IUiListener r13) {
            r10 = this;
            java.lang.String r0 = "openSDK_LOG.GameAppOperation"
            java.lang.String r1 = "joinQQGroup()"
            com.tencent.open.log.SLog.i(r0, r1)
            boolean r1 = com.tencent.connect.a.a(r0, r13)
            if (r1 == 0) goto Le
            return
        Le:
            if (r11 != 0) goto L26
            java.lang.String r11 = "-->joinGroup, activity is empty."
            com.tencent.open.log.SLog.e(r0, r11)
            if (r13 == 0) goto L25
            com.tencent.tauth.UiError r11 = new com.tencent.tauth.UiError
            r12 = 1001(0x3e9, float:1.403E-42)
            java.lang.String r0 = "param acitivty is null"
            java.lang.String r1 = "activity param of api can not be null."
            r11.<init>(r12, r0, r1)
            r13.onError(r11)
        L25:
            return
        L26:
            boolean r1 = android.text.TextUtils.isEmpty(r12)
            if (r1 == 0) goto L42
            java.lang.String r11 = "-->joinGroup, params is empty."
            com.tencent.open.log.SLog.e(r0, r11)
            if (r13 == 0) goto L41
            com.tencent.tauth.UiError r11 = new com.tencent.tauth.UiError
            r12 = 1006(0x3ee, float:1.41E-42)
            java.lang.String r0 = "param organizationId is null"
            java.lang.String r1 = "organizationId param of api can not be null."
            r11.<init>(r12, r0, r1)
            r13.onError(r11)
        L41:
            return
        L42:
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            com.tencent.connect.auth.QQToken r2 = r10.c
            java.lang.String r2 = r2.getAppId()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L69
            java.lang.String r11 = "-->joinGroup, appid is empty."
            com.tencent.open.log.SLog.e(r0, r11)
            if (r13 == 0) goto L68
            com.tencent.tauth.UiError r11 = new com.tencent.tauth.UiError
            r12 = 1003(0x3eb, float:1.406E-42)
            java.lang.String r0 = "appid is null"
            java.lang.String r1 = "appid is null, please login."
            r11.<init>(r12, r0, r1)
            r13.onError(r11)
        L68:
            return
        L69:
            com.tencent.connect.auth.QQToken r3 = r10.c
            java.lang.String r3 = r3.getOpenId()
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L8b
            java.lang.String r11 = "-->joinGroup, openid is empty."
            com.tencent.open.log.SLog.e(r0, r11)
            if (r13 == 0) goto L8a
            com.tencent.tauth.UiError r11 = new com.tencent.tauth.UiError
            r12 = 1004(0x3ec, float:1.407E-42)
            java.lang.String r0 = "openid is null"
            java.lang.String r1 = "openid is null, please login."
            r11.<init>(r12, r0, r1)
            r13.onError(r11)
        L8a:
            return
        L8b:
            java.lang.StringBuffer r4 = new java.lang.StringBuffer
            java.lang.String r5 = "mqqapi://opensdk/join_group?src_type=app&version=1"
            r4.<init>(r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "&openid="
            r5.append(r6)
            byte[] r3 = com.tencent.open.utils.m.j(r3)
            r6 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r6)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "&appid="
            r3.append(r5)
            byte[] r5 = com.tencent.open.utils.m.j(r2)
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r6)
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            r4.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "&organization_id="
            r3.append(r5)
            byte[] r5 = com.tencent.open.utils.m.j(r12)
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r6)
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            r4.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "&sdk_version="
            r3.append(r5)
            java.lang.String r5 = "3.5.14.lite"
            byte[] r5 = com.tencent.open.utils.m.j(r5)
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r6)
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r1.setData(r3)
            java.lang.String r3 = "com.tencent.mobileqq"
            r1.setPackage(r3)
            java.lang.String r3 = "8.1.0"
            int r3 = com.tencent.open.utils.k.c(r11, r3)
            if (r3 >= 0) goto L126
            java.lang.String r12 = "-->bind group, there is no activity, show download page."
            com.tencent.open.log.SLog.w(r0, r12)
            r10.a(r11)
            return
        L126:
            com.tencent.open.SocialOperation$2 r3 = new com.tencent.open.SocialOperation$2
            r3.<init>(r10, r13, r11, r1)
            android.os.Bundle r7 = r10.a()
            java.lang.String r13 = "appid"
            r7.putString(r13, r2)
            java.lang.String r13 = "orgid"
            r7.putString(r13, r12)
            com.tencent.connect.auth.QQToken r4 = r10.c
            com.tencent.connect.common.BaseApi$TempRequestListener r9 = new com.tencent.connect.common.BaseApi$TempRequestListener
            r9.<init>(r10, r3)
            java.lang.String r6 = "https://openmobile.qq.com/cgi-bin/qunopensdk/check_group"
            java.lang.String r8 = "GET"
            r5 = r11
            com.tencent.open.utils.HttpUtils.requestAsync(r4, r5, r6, r7, r8, r9)
            java.lang.String r11 = "-->joinQQGroup() do."
            com.tencent.open.log.SLog.i(r0, r11)
            return
    }

    public void makeFriend(android.app.Activity r10, android.os.Bundle r11) {
            r9 = this;
            java.lang.String r0 = "openSDK_LOG.GameAppOperation"
            java.lang.String r1 = "-->makeFriend()  -- start"
            com.tencent.open.log.SLog.i(r0, r1)
            r1 = 0
            boolean r1 = com.tencent.connect.a.a(r0, r1)
            if (r1 == 0) goto Lf
            return
        Lf:
            if (r11 != 0) goto L32
            java.lang.String r10 = "-->makeFriend params is null"
            com.tencent.open.log.SLog.e(r0, r10)
            com.tencent.open.b.e r1 = com.tencent.open.b.e.a()
            com.tencent.connect.auth.QQToken r10 = r9.c
            java.lang.String r2 = r10.getOpenId()
            com.tencent.connect.auth.QQToken r10 = r9.c
            java.lang.String r3 = r10.getAppId()
            java.lang.String r4 = "ANDROIDQQ.MAKEAFRIEND.XX"
            java.lang.String r5 = "14"
            java.lang.String r6 = "18"
            java.lang.String r7 = "1"
            r1.a(r2, r3, r4, r5, r6, r7)
            return
        L32:
            java.lang.String r1 = "fopen_id"
            java.lang.String r1 = r11.getString(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L5f
            java.lang.String r10 = "-->make friend, fOpenid is empty."
            com.tencent.open.log.SLog.e(r0, r10)
            com.tencent.open.b.e r1 = com.tencent.open.b.e.a()
            com.tencent.connect.auth.QQToken r10 = r9.c
            java.lang.String r2 = r10.getOpenId()
            com.tencent.connect.auth.QQToken r10 = r9.c
            java.lang.String r3 = r10.getAppId()
            java.lang.String r4 = "ANDROIDQQ.MAKEAFRIEND.XX"
            java.lang.String r5 = "14"
            java.lang.String r6 = "18"
            java.lang.String r7 = "1"
            r1.a(r2, r3, r4, r5, r6, r7)
            return
        L5f:
            java.lang.String r2 = "friend_label"
            java.lang.String r2 = r11.getString(r2)
            java.lang.String r3 = "add_msg"
            java.lang.String r11 = r11.getString(r3)
            java.lang.String r3 = com.tencent.open.utils.m.a(r10)
            com.tencent.connect.auth.QQToken r4 = r9.c
            java.lang.String r4 = r4.getOpenId()
            com.tencent.connect.auth.QQToken r5 = r9.c
            java.lang.String r5 = r5.getAppId()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "-->make friend, fOpenid: "
            r6.append(r7)
            r6.append(r1)
            java.lang.String r7 = " | label: "
            r6.append(r7)
            r6.append(r2)
            java.lang.String r7 = " | message: "
            r6.append(r7)
            r6.append(r11)
            java.lang.String r7 = " | openid: "
            r6.append(r7)
            r6.append(r4)
            java.lang.String r7 = " | appid:"
            r6.append(r7)
            r6.append(r5)
            java.lang.String r6 = r6.toString()
            com.tencent.open.log.SLog.v(r0, r6)
            java.lang.StringBuffer r6 = new java.lang.StringBuffer
            java.lang.String r7 = "mqqapi://gamesdk/add_friend?src_type=app&version=1"
            r6.<init>(r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "&fopen_id="
            r7.append(r8)
            byte[] r1 = com.tencent.open.utils.m.j(r1)
            r8 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r8)
            r7.append(r1)
            java.lang.String r1 = r7.toString()
            r6.append(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto Lf5
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r7 = "&open_id="
            r1.append(r7)
            byte[] r4 = com.tencent.open.utils.m.j(r4)
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r8)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r6.append(r1)
        Lf5:
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L10f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = "&app_id="
            r1.append(r4)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            r6.append(r1)
        L10f:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L131
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = "&friend_label="
            r1.append(r4)
            byte[] r2 = com.tencent.open.utils.m.j(r2)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r8)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r6.append(r1)
        L131:
            boolean r1 = android.text.TextUtils.isEmpty(r11)
            if (r1 != 0) goto L153
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "&add_msg="
            r1.append(r2)
            byte[] r11 = com.tencent.open.utils.m.j(r11)
            java.lang.String r11 = android.util.Base64.encodeToString(r11, r8)
            r1.append(r11)
            java.lang.String r11 = r1.toString()
            r6.append(r11)
        L153:
            boolean r11 = android.text.TextUtils.isEmpty(r3)
            if (r11 != 0) goto L175
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r1 = "&app_name="
            r11.append(r1)
            byte[] r1 = com.tencent.open.utils.m.j(r3)
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r8)
            r11.append(r1)
            java.lang.String r11 = r11.toString()
            r6.append(r11)
        L175:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r1 = "-->make friend, url: "
            r11.append(r1)
            java.lang.String r1 = r6.toString()
            r11.append(r1)
            java.lang.String r11 = r11.toString()
            com.tencent.open.log.SLog.v(r0, r11)
            android.content.Intent r11 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.VIEW"
            r11.<init>(r1)
            java.lang.String r1 = r6.toString()
            android.net.Uri r1 = android.net.Uri.parse(r1)
            r11.setData(r1)
            java.lang.String r1 = "5.1.0"
            boolean r1 = com.tencent.open.utils.m.f(r10, r1)
            if (r1 != 0) goto L1f0
            java.lang.String r1 = "-->makeFriend target activity found, qqver greater than 5.1.0"
            com.tencent.open.log.SLog.i(r0, r1)
            r10.startActivity(r11)     // Catch: java.lang.Exception -> L1cb
            com.tencent.open.b.e r2 = com.tencent.open.b.e.a()     // Catch: java.lang.Exception -> L1cb
            com.tencent.connect.auth.QQToken r11 = r9.c     // Catch: java.lang.Exception -> L1cb
            java.lang.String r3 = r11.getOpenId()     // Catch: java.lang.Exception -> L1cb
            com.tencent.connect.auth.QQToken r11 = r9.c     // Catch: java.lang.Exception -> L1cb
            java.lang.String r4 = r11.getAppId()     // Catch: java.lang.Exception -> L1cb
            java.lang.String r5 = "ANDROIDQQ.MAKEAFRIEND.XX"
            java.lang.String r6 = "14"
            java.lang.String r7 = "18"
            java.lang.String r8 = "0"
            r2.a(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L1cb
            goto L213
        L1cb:
            r11 = move-exception
            java.lang.String r1 = "-->make friend, start activity exception."
            com.tencent.open.log.SLog.e(r0, r1, r11)
            r9.a(r10)
            com.tencent.open.b.e r2 = com.tencent.open.b.e.a()
            com.tencent.connect.auth.QQToken r10 = r9.c
            java.lang.String r3 = r10.getOpenId()
            com.tencent.connect.auth.QQToken r10 = r9.c
            java.lang.String r4 = r10.getAppId()
            java.lang.String r5 = "ANDROIDQQ.MAKEAFRIEND.XX"
            java.lang.String r6 = "14"
            java.lang.String r7 = "18"
            java.lang.String r8 = "1"
            r2.a(r3, r4, r5, r6, r7, r8)
            goto L213
        L1f0:
            java.lang.String r11 = "-->make friend, there is no activity."
            com.tencent.open.log.SLog.w(r0, r11)
            r9.a(r10)
            com.tencent.open.b.e r1 = com.tencent.open.b.e.a()
            com.tencent.connect.auth.QQToken r10 = r9.c
            java.lang.String r2 = r10.getOpenId()
            com.tencent.connect.auth.QQToken r10 = r9.c
            java.lang.String r3 = r10.getAppId()
            java.lang.String r4 = "ANDROIDQQ.MAKEAFRIEND.XX"
            java.lang.String r5 = "14"
            java.lang.String r6 = "18"
            java.lang.String r7 = "1"
            r1.a(r2, r3, r4, r5, r6, r7)
        L213:
            java.lang.String r10 = "-->makeFriend()  -- end"
            com.tencent.open.log.SLog.i(r0, r10)
            return
    }

    public void unBindGroup(android.content.Context r10, java.lang.String r11, com.tencent.tauth.IUiListener r12) {
            r9 = this;
            java.lang.String r0 = "openSDK_LOG.GameAppOperation"
            java.lang.String r1 = "unBindQQGroup()"
            com.tencent.open.log.SLog.i(r0, r1)
            boolean r1 = com.tencent.connect.a.a(r0, r12)
            if (r1 == 0) goto Le
            return
        Le:
            if (r10 != 0) goto L26
            java.lang.String r10 = "-->uinBindGroup, activity is empty."
            com.tencent.open.log.SLog.e(r0, r10)
            if (r12 == 0) goto L25
            com.tencent.tauth.UiError r10 = new com.tencent.tauth.UiError
            r11 = 1001(0x3e9, float:1.403E-42)
            java.lang.String r0 = "param acitivty is null"
            java.lang.String r1 = "activity param of api can not be null."
            r10.<init>(r11, r0, r1)
            r12.onError(r10)
        L25:
            return
        L26:
            boolean r1 = android.text.TextUtils.isEmpty(r11)
            if (r1 == 0) goto L42
            java.lang.String r10 = "-->unBindGroup, params is empty."
            com.tencent.open.log.SLog.e(r0, r10)
            if (r12 == 0) goto L41
            com.tencent.tauth.UiError r10 = new com.tencent.tauth.UiError
            r11 = 1006(0x3ee, float:1.41E-42)
            java.lang.String r0 = "param organizationId is null"
            java.lang.String r1 = "organizationId param of api can not be null."
            r10.<init>(r11, r0, r1)
            r12.onError(r10)
        L41:
            return
        L42:
            com.tencent.connect.auth.QQToken r1 = r9.c
            java.lang.String r1 = r1.getAppId()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L64
            java.lang.String r10 = "-->unBindGroup, appid is empty."
            com.tencent.open.log.SLog.e(r0, r10)
            if (r12 == 0) goto L63
            com.tencent.tauth.UiError r10 = new com.tencent.tauth.UiError
            r11 = 1003(0x3eb, float:1.406E-42)
            java.lang.String r0 = "param appId is null"
            java.lang.String r1 = "appid is null please login."
            r10.<init>(r11, r0, r1)
            r12.onError(r10)
        L63:
            return
        L64:
            com.tencent.open.SocialOperation$1 r2 = new com.tencent.open.SocialOperation$1
            r2.<init>(r9, r12)
            android.os.Bundle r6 = r9.a()
            java.lang.String r12 = "appid"
            r6.putString(r12, r1)
            java.lang.String r12 = "orgid"
            r6.putString(r12, r11)
            com.tencent.connect.auth.QQToken r3 = r9.c
            com.tencent.connect.common.BaseApi$TempRequestListener r8 = new com.tencent.connect.common.BaseApi$TempRequestListener
            r8.<init>(r9, r2)
            java.lang.String r5 = "https://openmobile.qq.com/cgi-bin/qunopensdk/unbind"
            java.lang.String r7 = "GET"
            r4 = r10
            com.tencent.open.utils.HttpUtils.requestAsync(r3, r4, r5, r6, r7, r8)
            java.lang.String r10 = "-->unBindQQGroup() do."
            com.tencent.open.log.SLog.i(r0, r10)
            return
    }
}
