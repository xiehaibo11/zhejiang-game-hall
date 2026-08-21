package com.tencent.connect.avatar;

public class QQAvatar extends com.tencent.connect.common.BaseApi {
    public static final java.lang.String FROM_SDK_AVATAR_SET_IMAGE = "FROM_SDK_AVATAR_SET_IMAGE";
    private com.tencent.tauth.IUiListener a;

    public QQAvatar(com.tencent.connect.auth.QQToken r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private android.content.Intent a(android.app.Activity r3) {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.Class<com.tencent.connect.avatar.ImageActivity> r1 = com.tencent.connect.avatar.ImageActivity.class
            r0.setClass(r3, r1)
            return r0
    }

    private void a(android.app.Activity r3, android.os.Bundle r4, android.content.Intent r5) {
            r2 = this;
            r2.a(r4)
            java.lang.String r0 = "key_action"
            java.lang.String r1 = "action_avatar"
            r5.putExtra(r0, r1)
            java.lang.String r0 = "key_params"
            r5.putExtra(r0, r4)
            com.tencent.connect.common.UIListenerManager r4 = com.tencent.connect.common.UIListenerManager.getInstance()
            com.tencent.tauth.IUiListener r0 = r2.a
            r1 = 11102(0x2b5e, float:1.5557E-41)
            r4.setListenerWithRequestcode(r1, r0)
            r2.a(r3, r5, r1)
            return
    }

    private void a(android.os.Bundle r6) {
            r5 = this;
            java.lang.String r0 = "openmobile_android"
            java.lang.String r1 = "pf"
            com.tencent.connect.auth.QQToken r2 = r5.c
            if (r2 == 0) goto L5b
            com.tencent.connect.auth.QQToken r2 = r5.c
            java.lang.String r2 = r2.getAppId()
            java.lang.String r3 = "appid"
            r6.putString(r3, r2)
            com.tencent.connect.auth.QQToken r2 = r5.c
            boolean r2 = r2.isSessionValid()
            if (r2 == 0) goto L2d
            com.tencent.connect.auth.QQToken r2 = r5.c
            java.lang.String r2 = r2.getAccessToken()
            java.lang.String r3 = "keystr"
            r6.putString(r3, r2)
            java.lang.String r2 = "keytype"
            java.lang.String r3 = "0x80"
            r6.putString(r2, r3)
        L2d:
            com.tencent.connect.auth.QQToken r2 = r5.c
            java.lang.String r2 = r2.getOpenId()
            if (r2 == 0) goto L3a
            java.lang.String r3 = "hopenid"
            r6.putString(r3, r2)
        L3a:
            java.lang.String r2 = "platform"
            java.lang.String r3 = "androidqz"
            r6.putString(r2, r3)
            android.content.Context r2 = com.tencent.open.utils.g.a()     // Catch: java.lang.Exception -> L54
            java.lang.String r3 = "pfStore"
            r4 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r3, r4)     // Catch: java.lang.Exception -> L54
            java.lang.String r2 = r2.getString(r1, r0)     // Catch: java.lang.Exception -> L54
            r6.putString(r1, r2)     // Catch: java.lang.Exception -> L54
            goto L5b
        L54:
            r2 = move-exception
            r2.printStackTrace()
            r6.putString(r1, r0)
        L5b:
            java.lang.String r0 = "sdkv"
            java.lang.String r1 = "3.5.14.lite"
            r6.putString(r0, r1)
            java.lang.String r0 = "sdkp"
            java.lang.String r1 = "a"
            r6.putString(r0, r1)
            return
    }

    public void setAvatar(android.app.Activity r5, android.net.Uri r6, com.tencent.tauth.IUiListener r7, int r8) {
            r4 = this;
            java.lang.String r0 = "QQAvatar"
            boolean r0 = com.tencent.connect.a.a(r0, r7)
            if (r0 == 0) goto L9
            return
        L9:
            com.tencent.tauth.IUiListener r0 = r4.a
            if (r0 == 0) goto L10
            r0.onCancel()
        L10:
            r4.a = r7
            android.os.Bundle r7 = new android.os.Bundle
            r7.<init>()
            java.lang.String r6 = r6.toString()
            java.lang.String r0 = "picture"
            r7.putString(r0, r6)
            java.lang.String r6 = "exitAnim"
            r7.putInt(r6, r8)
            com.tencent.connect.auth.QQToken r6 = r4.c
            java.lang.String r6 = r6.getAppId()
            java.lang.String r8 = "appid"
            r7.putString(r8, r6)
            com.tencent.connect.auth.QQToken r6 = r4.c
            java.lang.String r6 = r6.getAccessToken()
            java.lang.String r8 = "access_token"
            r7.putString(r8, r6)
            com.tencent.connect.auth.QQToken r6 = r4.c
            long r0 = r6.getExpireTimeInSecond()
            java.lang.String r6 = "expires_in"
            r7.putLong(r6, r0)
            com.tencent.connect.auth.QQToken r6 = r4.c
            java.lang.String r6 = r6.getOpenId()
            java.lang.String r8 = "openid"
            r7.putString(r8, r6)
            android.content.Intent r6 = r4.a(r5)
            com.tencent.connect.auth.QQToken r8 = r4.c
            java.lang.String r8 = r8.getOpenId()
            com.tencent.connect.auth.QQToken r0 = r4.c
            java.lang.String r0 = r0.getAppId()
            java.lang.String r1 = "ANDROIDSDK.SETAVATAR.XX"
            java.lang.String r2 = "12"
            java.lang.String r3 = "18"
            android.os.Bundle r8 = com.tencent.open.utils.m.a(r8, r1, r2, r3, r0)
            java.lang.String r0 = com.tencent.connect.common.Constants.KEY_PASS_REPORT_VIA_TIMELY
            r1 = 1
            r6.putExtra(r0, r1)
            java.lang.String r0 = com.tencent.connect.common.Constants.KEY_PASS_REPORT_VIA_PARAM
            r6.putExtra(r0, r8)
            r4.a(r5, r7, r6)
            return
    }

    public void setAvatarByQQ(android.app.Activity r9, android.net.Uri r10, com.tencent.tauth.IUiListener r11) {
            r8 = this;
            java.lang.String r0 = "QQAvatar"
            boolean r1 = com.tencent.connect.a.a(r0, r11)
            if (r1 == 0) goto L9
            return
        L9:
            com.tencent.tauth.IUiListener r1 = r8.a
            if (r1 == 0) goto L10
            r1.onCancel()
        L10:
            r8.a = r11
            boolean r1 = com.tencent.open.utils.k.b(r9)
            r2 = 1
            if (r1 != 0) goto L27
            android.content.Context r9 = r9.getApplicationContext()
            java.lang.String r10 = "当前手机未安装QQ，请安装最新版QQ后再试。"
            android.widget.Toast r9 = android.widget.Toast.makeText(r9, r10, r2)
            r9.show()
            return
        L27:
            java.lang.String r1 = "8.0.0"
            int r1 = com.tencent.open.utils.k.c(r9, r1)
            if (r1 >= 0) goto L3d
            android.content.Context r9 = r9.getApplicationContext()
            java.lang.String r10 = "当前手机QQ版本过低，不支持设置头像功能。"
            android.widget.Toast r9 = android.widget.Toast.makeText(r9, r10, r2)
            r9.show()
            return
        L3d:
            java.lang.String r1 = com.tencent.open.utils.m.a(r9)
            java.lang.StringBuffer r2 = new java.lang.StringBuffer
            java.lang.String r3 = "mqqapi://profile/sdk_avatar_edit?"
            r2.<init>(r3)
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            r4 = 0
            r5 = 2
            if (r3 != 0) goto L89
            int r3 = r1.length()
            r6 = 20
            if (r3 <= r6) goto L6d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = r1.substring(r4, r6)
            r3.append(r1)
            java.lang.String r1 = "..."
            r3.append(r1)
            java.lang.String r1 = r3.toString()
        L6d:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r6 = "&app_name="
            r3.append(r6)
            byte[] r1 = com.tencent.open.utils.m.j(r1)
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r5)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.append(r1)
        L89:
            com.tencent.connect.auth.QQToken r1 = r8.c
            java.lang.String r1 = r1.getAppId()
            com.tencent.connect.auth.QQToken r3 = r8.c
            java.lang.String r3 = r3.getOpenId()
            boolean r6 = android.text.TextUtils.isEmpty(r1)
            if (r6 != 0) goto Laf
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "&share_id="
            r6.append(r7)
            r6.append(r1)
            java.lang.String r1 = r6.toString()
            r2.append(r1)
        Laf:
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto Ld1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r6 = "&open_id="
            r1.append(r6)
            byte[] r3 = com.tencent.open.utils.m.j(r3)
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r5)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
        Ld1:
            java.lang.String r1 = com.tencent.open.utils.m.b(r9, r10)
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r6 = "com.tencent.mobileqq"
            if (r3 != 0) goto L108
            r3 = 3
            r9.grantUriPermission(r6, r10, r3)     // Catch: java.lang.Exception -> L102
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L102
            r3.<init>()     // Catch: java.lang.Exception -> L102
            java.lang.String r7 = "&set_uri="
            r3.append(r7)     // Catch: java.lang.Exception -> L102
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> L102
            byte[] r10 = com.tencent.open.utils.m.j(r10)     // Catch: java.lang.Exception -> L102
            java.lang.String r10 = android.util.Base64.encodeToString(r10, r5)     // Catch: java.lang.Exception -> L102
            r3.append(r10)     // Catch: java.lang.Exception -> L102
            java.lang.String r10 = r3.toString()     // Catch: java.lang.Exception -> L102
            r2.append(r10)     // Catch: java.lang.Exception -> L102
            goto L108
        L102:
            r10 = move-exception
            java.lang.String r3 = "Exception"
            com.tencent.open.log.SLog.e(r0, r3, r10)
        L108:
            boolean r10 = android.text.TextUtils.isEmpty(r1)
            if (r10 != 0) goto L12a
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "&set_path="
            r10.append(r0)
            byte[] r0 = com.tencent.open.utils.m.j(r1)
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r5)
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            r2.append(r10)
        L12a:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "&sdk_version="
            r10.append(r0)
            java.lang.String r0 = "3.5.14.lite"
            byte[] r0 = com.tencent.open.utils.m.j(r0)
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r5)
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            r2.append(r10)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "-->set avatar, url: "
            r10.append(r0)
            java.lang.String r0 = r2.toString()
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            java.lang.String r0 = "QQAVATAR"
            com.tencent.open.log.SLog.v(r0, r10)
            android.content.Intent r10 = new android.content.Intent
            java.lang.String r0 = "android.intent.action.VIEW"
            r10.<init>(r0)
            r10.setPackage(r6)
            java.lang.String r0 = "FROM_WHERE"
            java.lang.String r1 = "FROM_SDK_AVATAR_SET_IMAGE"
            r10.putExtra(r0, r1)
            java.lang.String r0 = r9.getPackageName()
            java.lang.String r1 = "pkg_name"
            r10.putExtra(r1, r0)
            java.lang.String r0 = r2.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            r10.setData(r0)
            com.tencent.connect.common.UIListenerManager r0 = com.tencent.connect.common.UIListenerManager.getInstance()
            r1 = 10108(0x277c, float:1.4164E-41)
            r0.setListenerWithRequestcode(r1, r11)
            r8.a(r9, r1, r10, r4)
            return
    }

    public void setDynamicAvatar(android.app.Activity r9, android.net.Uri r10, com.tencent.tauth.IUiListener r11) {
            r8 = this;
            java.lang.String r0 = "QQAvatar"
            boolean r1 = com.tencent.connect.a.a(r0, r11)
            if (r1 == 0) goto L9
            return
        L9:
            com.tencent.tauth.IUiListener r1 = r8.a
            if (r1 == 0) goto L10
            r1.onCancel()
        L10:
            r8.a = r11
            boolean r1 = com.tencent.open.utils.k.b(r9)
            r2 = 1
            if (r1 != 0) goto L27
            android.content.Context r9 = r9.getApplicationContext()
            java.lang.String r10 = "当前手机未安装QQ，请安装最新版QQ后再试。"
            android.widget.Toast r9 = android.widget.Toast.makeText(r9, r10, r2)
            r9.show()
            return
        L27:
            java.lang.String r1 = "8.0.5"
            int r1 = com.tencent.open.utils.k.c(r9, r1)
            if (r1 >= 0) goto L3d
            android.content.Context r9 = r9.getApplicationContext()
            java.lang.String r10 = "当前手机QQ版本过低，不支持设置头像功能。"
            android.widget.Toast r9 = android.widget.Toast.makeText(r9, r10, r2)
            r9.show()
            return
        L3d:
            java.lang.String r1 = com.tencent.open.utils.m.a(r9)
            java.lang.StringBuffer r2 = new java.lang.StringBuffer
            java.lang.String r3 = "mqqapi://profile/sdk_dynamic_avatar_edit?"
            r2.<init>(r3)
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            r4 = 0
            r5 = 2
            if (r3 != 0) goto L89
            int r3 = r1.length()
            r6 = 20
            if (r3 <= r6) goto L6d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = r1.substring(r4, r6)
            r3.append(r1)
            java.lang.String r1 = "..."
            r3.append(r1)
            java.lang.String r1 = r3.toString()
        L6d:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r6 = "&app_name="
            r3.append(r6)
            byte[] r1 = com.tencent.open.utils.m.j(r1)
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r5)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.append(r1)
        L89:
            com.tencent.connect.auth.QQToken r1 = r8.c
            java.lang.String r1 = r1.getAppId()
            com.tencent.connect.auth.QQToken r3 = r8.c
            java.lang.String r3 = r3.getOpenId()
            boolean r6 = android.text.TextUtils.isEmpty(r1)
            if (r6 != 0) goto Laf
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "&share_id="
            r6.append(r7)
            r6.append(r1)
            java.lang.String r1 = r6.toString()
            r2.append(r1)
        Laf:
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto Ld1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r6 = "&open_id="
            r1.append(r6)
            byte[] r3 = com.tencent.open.utils.m.j(r3)
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r5)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
        Ld1:
            java.lang.String r1 = com.tencent.open.utils.m.b(r9, r10)
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r6 = "com.tencent.mobileqq"
            if (r3 != 0) goto Lfc
            r3 = 3
            r9.grantUriPermission(r6, r10, r3)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r3 = "&video_uri="
            r2.append(r3)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> Lf6
            byte[] r10 = com.tencent.open.utils.m.j(r10)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r10 = android.util.Base64.encodeToString(r10, r5)     // Catch: java.lang.Exception -> Lf6
            r2.append(r10)     // Catch: java.lang.Exception -> Lf6
            goto Lfc
        Lf6:
            r10 = move-exception
            java.lang.String r3 = "Exception"
            com.tencent.open.log.SLog.e(r0, r3, r10)
        Lfc:
            boolean r10 = android.text.TextUtils.isEmpty(r1)
            if (r10 != 0) goto L11e
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "&video_path="
            r10.append(r0)
            byte[] r0 = com.tencent.open.utils.m.j(r1)
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r5)
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            r2.append(r10)
        L11e:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "&sdk_version="
            r10.append(r0)
            java.lang.String r0 = "3.5.14.lite"
            byte[] r0 = com.tencent.open.utils.m.j(r0)
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r5)
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            r2.append(r10)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "-->set dynamic avatar, url: "
            r10.append(r0)
            java.lang.String r0 = r2.toString()
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            java.lang.String r0 = "QQAVATAR"
            com.tencent.open.log.SLog.v(r0, r10)
            android.content.Intent r10 = new android.content.Intent
            java.lang.String r0 = "android.intent.action.VIEW"
            r10.<init>(r0)
            r10.setPackage(r6)
            java.lang.String r0 = "FROM_WHERE"
            java.lang.String r1 = "FROM_SDK_AVATAR_SET_IMAGE"
            r10.putExtra(r0, r1)
            java.lang.String r0 = r9.getPackageName()
            java.lang.String r1 = "pkg_name"
            r10.putExtra(r1, r0)
            java.lang.String r0 = r2.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            r10.setData(r0)
            com.tencent.connect.common.UIListenerManager r0 = com.tencent.connect.common.UIListenerManager.getInstance()
            r1 = 10110(0x277e, float:1.4167E-41)
            r0.setListenerWithRequestcode(r1, r11)
            r8.a(r9, r1, r10, r4)
            return
    }
}
