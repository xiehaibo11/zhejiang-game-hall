package com.tencent.connect.emotion;

public class QQEmotion extends com.tencent.connect.common.BaseApi {
    private com.tencent.tauth.IUiListener a;

    public QQEmotion(com.tencent.connect.auth.QQToken r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private java.lang.String a(android.app.Activity r5, java.util.ArrayList<android.net.Uri> r6) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Iterator r6 = r6.iterator()
        L9:
            boolean r1 = r6.hasNext()
            java.lang.String r2 = "QQEmotion"
            if (r1 == 0) goto L36
            java.lang.Object r1 = r6.next()
            android.net.Uri r1 = (android.net.Uri) r1
            com.tencent.connect.auth.QQToken r3 = r4.c
            java.lang.String r3 = r3.getAppId()
            java.lang.String r1 = com.tencent.open.utils.m.b(r5, r1)
            android.net.Uri r1 = com.tencent.open.utils.m.a(r5, r3, r1)
            if (r1 != 0) goto L2d
            java.lang.String r1 = "getFilePathListJson: grantedUri = null"
            com.tencent.open.log.SLog.e(r2, r1)
            goto L9
        L2d:
            r0.append(r1)
            java.lang.String r1 = ";"
            r0.append(r1)
            goto L9
        L36:
            java.lang.String r5 = r0.toString()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "-->getFilePathListJson listStr : "
            r6.append(r0)
            r6.append(r5)
            java.lang.String r6 = r6.toString()
            com.tencent.open.log.SLog.i(r2, r6)
            return r5
    }

    private boolean a(android.content.Context r11, java.util.ArrayList<android.net.Uri> r12) {
            r10 = this;
            r0 = 0
            if (r12 == 0) goto L93
            int r1 = r12.size()
            if (r1 != 0) goto Lb
            goto L93
        Lb:
            int r1 = r12.size()
            r2 = 9
            java.lang.String r3 = "QQEMOTION"
            if (r1 <= r2) goto L2e
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r1 = "isLegality -->illegal, file count > 9, count = "
            r11.append(r1)
            int r12 = r12.size()
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            com.tencent.open.log.SLog.i(r3, r11)
            return r0
        L2e:
            r1 = 0
            r4 = 0
        L31:
            int r5 = r12.size()
            if (r4 >= r5) goto L61
            java.lang.Object r5 = r12.get(r4)
            android.net.Uri r5 = (android.net.Uri) r5
            long r5 = com.tencent.open.utils.m.a(r11, r5)
            r7 = 1048576(0x100000, double:5.180654E-318)
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 <= 0) goto L5d
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "isLegality -->illegal, fileSize: "
            r11.append(r12)
            r11.append(r5)
            java.lang.String r11 = r11.toString()
            com.tencent.open.log.SLog.i(r3, r11)
            return r0
        L5d:
            long r1 = r1 + r5
            int r4 = r4 + 1
            goto L31
        L61:
            r11 = 3145728(0x300000, double:1.554196E-317)
            int r4 = (r1 > r11 ? 1 : (r1 == r11 ? 0 : -1))
            if (r4 <= 0) goto L7d
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "isLegality -->illegal, totalSize: "
            r11.append(r12)
            r11.append(r1)
            java.lang.String r11 = r11.toString()
            com.tencent.open.log.SLog.i(r3, r11)
            return r0
        L7d:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "isLegality -->legal, totalSize: "
            r11.append(r12)
            r11.append(r1)
            java.lang.String r11 = r11.toString()
            com.tencent.open.log.SLog.i(r3, r11)
            r11 = 1
            return r11
        L93:
            return r0
    }

    public void setEmotions(android.app.Activity r9, java.util.ArrayList<android.net.Uri> r10, com.tencent.tauth.IUiListener r11) {
            r8 = this;
            java.lang.String r0 = "QQEmotion"
            boolean r0 = com.tencent.connect.a.a(r0, r11)
            if (r0 == 0) goto L9
            return
        L9:
            com.tencent.tauth.IUiListener r0 = r8.a
            if (r0 == 0) goto L10
            r0.onCancel()
        L10:
            r8.a = r11
            boolean r0 = com.tencent.open.utils.k.b(r9)
            r1 = 1
            if (r0 != 0) goto L27
            android.content.Context r9 = r9.getApplicationContext()
            java.lang.String r10 = "当前手机未安装QQ，请安装最新版QQ后再试。"
            android.widget.Toast r9 = android.widget.Toast.makeText(r9, r10, r1)
            r9.show()
            return
        L27:
            java.lang.String r0 = "8.0.0"
            int r0 = com.tencent.open.utils.k.c(r9, r0)
            if (r0 >= 0) goto L3d
            android.content.Context r9 = r9.getApplicationContext()
            java.lang.String r10 = "当前手机QQ版本过低，不支持设置表情功能。"
            android.widget.Toast r9 = android.widget.Toast.makeText(r9, r10, r1)
            r9.show()
            return
        L3d:
            android.content.Context r0 = r9.getApplicationContext()
            boolean r0 = r8.a(r0, r10)
            if (r0 != 0) goto L55
            android.content.Context r9 = r9.getApplicationContext()
            java.lang.String r10 = "图片不符合要求，不支持设置表情功能。"
            android.widget.Toast r9 = android.widget.Toast.makeText(r9, r10, r1)
            r9.show()
            return
        L55:
            java.lang.String r0 = com.tencent.open.utils.m.a(r9)
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            java.lang.String r2 = "mqqapi://profile/sdk_face_collection?"
            r1.<init>(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            r4 = 0
            r5 = 2
            if (r3 != 0) goto La9
            int r3 = r0.length()
            r6 = 20
            if (r3 <= r6) goto L8a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = r0.substring(r4, r6)
            r3.append(r0)
            java.lang.String r0 = "..."
            r3.append(r0)
            java.lang.String r0 = r3.toString()
        L8a:
            r2.append(r0)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r6 = "&app_name="
            r3.append(r6)
            byte[] r0 = com.tencent.open.utils.m.j(r0)
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r5)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r1.append(r0)
        La9:
            com.tencent.connect.auth.QQToken r0 = r8.c
            java.lang.String r0 = r0.getAppId()
            com.tencent.connect.auth.QQToken r3 = r8.c
            java.lang.String r3 = r3.getOpenId()
            boolean r6 = android.text.TextUtils.isEmpty(r0)
            if (r6 != 0) goto Ld2
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "&share_id="
            r6.append(r7)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            r1.append(r6)
            r2.append(r0)
        Ld2:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto Lf7
            r2.append(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "&open_id="
            r0.append(r6)
            byte[] r3 = com.tencent.open.utils.m.j(r3)
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r5)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
        Lf7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "&sdk_version="
            r0.append(r3)
            java.lang.String r3 = "3.5.14.lite"
            byte[] r6 = com.tencent.open.utils.m.j(r3)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r5)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            r2.append(r3)
            java.lang.String r0 = r8.a(r9, r10)
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L19e
            r2.append(r0)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r6 = "&set_uri_list="
            r3.append(r6)
            byte[] r0 = com.tencent.open.utils.m.j(r0)
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r5)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r1.append(r0)
            java.lang.String r0 = "&"
            r1.append(r0)
            java.lang.String r0 = "ppsts"
            r1.append(r0)
            java.lang.String r0 = "="
            r1.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.String r0 = com.tencent.open.utils.k.a(r9, r0)
            r1.append(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "-->set avatar, url: "
            r0.append(r2)
            java.lang.String r2 = r1.toString()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "QQEMOTION"
            com.tencent.open.log.SLog.v(r2, r0)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r2 = "android.intent.action.VIEW"
            r0.<init>(r2)
            java.lang.String r1 = r1.toString()
            android.net.Uri r1 = android.net.Uri.parse(r1)
            r0.setData(r1)
            java.lang.String r1 = "com.tencent.mobileqq"
            r0.setPackage(r1)
            java.lang.String r1 = "android.intent.extra.STREAM"
            r0.putParcelableArrayListExtra(r1, r10)
            com.tencent.connect.common.UIListenerManager r10 = com.tencent.connect.common.UIListenerManager.getInstance()
            r1 = 10109(0x277d, float:1.4166E-41)
            r10.setListenerWithRequestcode(r1, r11)
            r8.a(r9, r1, r0, r4)
            return
        L19e:
            com.tencent.tauth.UiError r9 = new com.tencent.tauth.UiError
            r10 = -6
            java.lang.String r0 = "未知错误!"
            java.lang.String r1 = "picPathList is null"
            r9.<init>(r10, r0, r1)
            r11.onError(r9)
            return
    }
}
