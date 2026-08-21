package com.tencent.connect.share;

public class QzoneShare extends com.tencent.connect.common.BaseApi {
    public static final java.lang.String SHARE_TO_QQ_APP_NAME = "appName";
    public static final java.lang.String SHARE_TO_QQ_AUDIO_URL = "audio_url";
    public static final java.lang.String SHARE_TO_QQ_EXT_INT = "cflag";
    public static final java.lang.String SHARE_TO_QQ_EXT_STR = "share_qq_ext_str";
    public static final java.lang.String SHARE_TO_QQ_IMAGE_LOCAL_URL = "imageLocalUrl";
    public static final java.lang.String SHARE_TO_QQ_IMAGE_URL = "imageUrl";
    public static final java.lang.String SHARE_TO_QQ_SITE = "site";
    public static final java.lang.String SHARE_TO_QQ_SUMMARY = "summary";
    public static final java.lang.String SHARE_TO_QQ_TARGET_URL = "targetUrl";
    public static final java.lang.String SHARE_TO_QQ_TITLE = "title";
    public static final java.lang.String SHARE_TO_QZONE_EXTMAP = "extMap";
    public static final java.lang.String SHARE_TO_QZONE_KEY_TYPE = "req_type";
    public static final int SHARE_TO_QZONE_TYPE_IMAGE = 5;
    public static final int SHARE_TO_QZONE_TYPE_IMAGE_TEXT = 1;
    public static final int SHARE_TO_QZONE_TYPE_MINI_PROGRAM = 7;
    public static final int SHARE_TO_QZONE_TYPE_NO_TYPE = 0;
    private boolean a;
    private boolean d;
    private boolean e;
    private boolean f;
    public java.lang.String mViaShareQzoneType;

    public QzoneShare(android.content.Context r1, com.tencent.connect.auth.QQToken r2) {
            r0 = this;
            r0.<init>(r2)
            java.lang.String r1 = ""
            r0.mViaShareQzoneType = r1
            r1 = 1
            r0.a = r1
            r1 = 0
            r0.d = r1
            r0.e = r1
            r0.f = r1
            return
    }

    private void b(android.app.Activity r25, android.os.Bundle r26, com.tencent.tauth.IUiListener r27) {
            r24 = this;
            r1 = r24
            r2 = r25
            r0 = r26
            r3 = r27
            java.lang.String r4 = "openSDK_LOG.QzoneShare"
            java.lang.String r5 = "doshareToQzone() --start"
            com.tencent.open.log.SLog.i(r4, r5)
            java.lang.StringBuffer r5 = new java.lang.StringBuffer
            java.lang.String r6 = "mqqapi://share/to_qzone?src_type=app&version=1&file_type=news"
            r5.<init>(r6)
            java.lang.String r6 = "imageUrl"
            java.util.ArrayList r6 = r0.getStringArrayList(r6)
            java.lang.String r7 = "title"
            java.lang.String r7 = r0.getString(r7)
            java.lang.String r8 = "summary"
            java.lang.String r8 = r0.getString(r8)
            java.lang.String r9 = "targetUrl"
            java.lang.String r9 = r0.getString(r9)
            java.lang.String r10 = "audio_url"
            java.lang.String r10 = r0.getString(r10)
            java.lang.String r11 = "req_type"
            r12 = 1
            int r11 = r0.getInt(r11, r12)
            java.lang.String r12 = "appName"
            java.lang.String r12 = r0.getString(r12)
            java.lang.String r13 = "mini_program_appid"
            java.lang.String r13 = r0.getString(r13)
            java.lang.String r14 = "mini_program_path"
            java.lang.String r14 = r0.getString(r14)
            java.lang.String r15 = "mini_program_type"
            java.lang.String r15 = r0.getString(r15)
            r16 = r15
            r15 = 0
            r17 = r14
            java.lang.String r14 = "cflag"
            int r14 = r0.getInt(r14, r15)
            java.lang.String r15 = "share_qq_ext_str"
            java.lang.String r15 = r0.getString(r15)
            java.lang.String r18 = ""
            r19 = r14
            java.lang.String r14 = "extMap"
            android.os.Bundle r0 = r0.getBundle(r14)     // Catch: java.lang.Exception -> Lbf
            if (r0 == 0) goto Lb8
            java.util.Set r14 = r0.keySet()     // Catch: java.lang.Exception -> Lbf
            r20 = r15
            org.json.JSONObject r15 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lb2
            r15.<init>()     // Catch: java.lang.Exception -> Lb2
            java.util.Iterator r21 = r14.iterator()     // Catch: java.lang.Exception -> Lb2
        L7f:
            boolean r22 = r21.hasNext()     // Catch: java.lang.Exception -> Lb2
            if (r22 == 0) goto La1
            java.lang.Object r22 = r21.next()     // Catch: java.lang.Exception -> Lb2
            r23 = r13
            r13 = r22
            java.lang.String r13 = (java.lang.String) r13     // Catch: java.lang.Exception -> L9d
            r22 = r11
            java.lang.Object r11 = r0.get(r13)     // Catch: java.lang.Exception -> Lb0
            r15.put(r13, r11)     // Catch: java.lang.Exception -> Lb0
            r11 = r22
            r13 = r23
            goto L7f
        L9d:
            r0 = move-exception
            r22 = r11
            goto Lc6
        La1:
            r22 = r11
            r23 = r13
            int r0 = r14.size()     // Catch: java.lang.Exception -> Lb0
            if (r0 <= 0) goto Lcb
            java.lang.String r18 = r15.toString()     // Catch: java.lang.Exception -> Lb0
            goto Lcb
        Lb0:
            r0 = move-exception
            goto Lc6
        Lb2:
            r0 = move-exception
            r22 = r11
            r23 = r13
            goto Lc6
        Lb8:
            r22 = r11
            r23 = r13
            r20 = r15
            goto Lcb
        Lbf:
            r0 = move-exception
            r22 = r11
            r23 = r13
            r20 = r15
        Lc6:
            java.lang.String r11 = "ShareToQzone()  --error parse extmap"
            com.tencent.open.log.SLog.e(r4, r11, r0)
        Lcb:
            com.tencent.connect.auth.QQToken r0 = r1.c
            java.lang.String r0 = r0.getAppId()
            com.tencent.connect.auth.QQToken r11 = r1.c
            java.lang.String r11 = r11.getOpenIdWithCache()
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r14 = "openId:"
            r13.append(r14)
            r13.append(r11)
            java.lang.String r13 = r13.toString()
            com.tencent.open.log.SLog.v(r4, r13)
            r13 = 2
            if (r6 == 0) goto L14b
            int r14 = r6.size()
            if (r14 <= 0) goto L14b
            r14 = 0
            java.lang.Object r6 = r6.get(r14)
            java.lang.String r6 = (java.lang.String) r6
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r15 = "&image_url="
            r14.append(r15)
            java.lang.String r15 = java.net.URLEncoder.encode(r6)
            byte[] r15 = com.tencent.open.utils.m.j(r15)
            java.lang.String r15 = android.util.Base64.encodeToString(r15, r13)
            r14.append(r15)
            java.lang.String r14 = r14.toString()
            r5.append(r14)
            boolean r14 = com.tencent.open.utils.m.h(r6)
            if (r14 != 0) goto L14b
            java.lang.String r6 = com.tencent.open.utils.m.a(r0, r2, r6, r3)
            boolean r14 = android.text.TextUtils.isEmpty(r6)
            if (r14 != 0) goto L14b
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r15 = "&image_uri="
            r14.append(r15)
            java.lang.String r6 = java.net.URLEncoder.encode(r6)
            byte[] r6 = com.tencent.open.utils.m.j(r6)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r13)
            r14.append(r6)
            java.lang.String r6 = r14.toString()
            r5.append(r6)
        L14b:
            boolean r6 = android.text.TextUtils.isEmpty(r7)
            if (r6 != 0) goto L16d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r14 = "&title="
            r6.append(r14)
            byte[] r7 = com.tencent.open.utils.m.j(r7)
            java.lang.String r7 = android.util.Base64.encodeToString(r7, r13)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.append(r6)
        L16d:
            boolean r6 = android.text.TextUtils.isEmpty(r8)
            if (r6 != 0) goto L18f
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "&description="
            r6.append(r7)
            byte[] r7 = com.tencent.open.utils.m.j(r8)
            java.lang.String r7 = android.util.Base64.encodeToString(r7, r13)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.append(r6)
        L18f:
            boolean r6 = android.text.TextUtils.isEmpty(r0)
            if (r6 != 0) goto L1a9
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "&share_id="
            r6.append(r7)
            r6.append(r0)
            java.lang.String r0 = r6.toString()
            r5.append(r0)
        L1a9:
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 != 0) goto L1cb
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "&url="
            r0.append(r6)
            byte[] r6 = com.tencent.open.utils.m.j(r9)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r13)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L1cb:
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            if (r0 != 0) goto L1ed
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "&app_name="
            r0.append(r6)
            byte[] r6 = com.tencent.open.utils.m.j(r12)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r13)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L1ed:
            boolean r0 = com.tencent.open.utils.m.e(r11)
            if (r0 != 0) goto L20f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "&open_id="
            r0.append(r6)
            byte[] r6 = com.tencent.open.utils.m.j(r11)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r13)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L20f:
            boolean r0 = com.tencent.open.utils.m.e(r10)
            if (r0 != 0) goto L231
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "&audioUrl="
            r0.append(r6)
            byte[] r6 = com.tencent.open.utils.m.j(r10)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r13)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L231:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "&req_type="
            r0.append(r6)
            java.lang.String r6 = java.lang.String.valueOf(r22)
            byte[] r6 = com.tencent.open.utils.m.j(r6)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r13)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r23)
            if (r0 != 0) goto L277
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "&mini_program_appid="
            r0.append(r6)
            java.lang.String r6 = java.lang.String.valueOf(r23)
            byte[] r6 = com.tencent.open.utils.m.j(r6)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r13)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L277:
            boolean r0 = android.text.TextUtils.isEmpty(r17)
            if (r0 != 0) goto L29d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "&mini_program_path="
            r0.append(r6)
            java.lang.String r6 = java.lang.String.valueOf(r17)
            byte[] r6 = com.tencent.open.utils.m.j(r6)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r13)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L29d:
            boolean r0 = android.text.TextUtils.isEmpty(r16)
            if (r0 != 0) goto L2c3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "&mini_program_type="
            r0.append(r6)
            java.lang.String r6 = java.lang.String.valueOf(r16)
            byte[] r6 = com.tencent.open.utils.m.j(r6)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r13)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L2c3:
            boolean r0 = com.tencent.open.utils.m.e(r20)
            if (r0 != 0) goto L2e5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "&share_qq_ext_str="
            r0.append(r6)
            byte[] r6 = com.tencent.open.utils.m.j(r20)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r13)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L2e5:
            boolean r0 = android.text.TextUtils.isEmpty(r18)
            if (r0 != 0) goto L307
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "&share_qzone_ext_str="
            r0.append(r6)
            byte[] r6 = com.tencent.open.utils.m.j(r18)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r13)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L307:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "&cflag="
            r0.append(r6)
            java.lang.String r6 = java.lang.String.valueOf(r19)
            byte[] r6 = com.tencent.open.utils.m.j(r6)
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r13)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "doshareToQzone, url: "
            r0.append(r6)
            java.lang.String r6 = r5.toString()
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.tencent.open.log.SLog.v(r4, r0)
            android.content.Context r0 = com.tencent.open.utils.g.a()
            com.tencent.connect.auth.QQToken r6 = r1.c
            java.lang.String r7 = "shareToNativeQQ"
            java.lang.String[] r7 = new java.lang.String[]{r7}
            java.lang.String r8 = "requireApi"
            com.tencent.connect.a.a.a(r0, r6, r8, r7)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r6 = "android.intent.action.VIEW"
            r0.<init>(r6)
            java.lang.String r5 = r5.toString()
            android.net.Uri r5 = android.net.Uri.parse(r5)
            r0.setData(r5)
            java.lang.String r5 = r25.getPackageName()
            java.lang.String r6 = "pkg_name"
            r0.putExtra(r6, r5)
            com.tencent.connect.auth.QQToken r5 = r1.c
            java.lang.String r6 = r5.getOpenId()
            com.tencent.connect.auth.QQToken r5 = r1.c
            java.lang.String r10 = r5.getAppId()
            java.lang.String r11 = r1.mViaShareQzoneType
            java.lang.String r7 = "11"
            java.lang.String r8 = "3"
            java.lang.String r9 = "ANDROIDQQ.SHARETOQZ.XX"
            java.lang.String r12 = ""
            java.lang.String r13 = ""
            java.lang.String r14 = "0"
            java.lang.String r15 = "1"
            java.lang.String r16 = "0"
            android.os.Bundle r5 = com.tencent.open.utils.m.a(r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
            java.lang.String r6 = com.tencent.connect.common.Constants.KEY_PASS_REPORT_VIA_PARAM
            r0.putExtra(r6, r5)
            java.lang.String r5 = "4.6.0"
            boolean r5 = com.tencent.open.utils.m.g(r2, r5)
            if (r5 == 0) goto L3ac
            com.tencent.connect.common.UIListenerManager r5 = com.tencent.connect.common.UIListenerManager.getInstance()
            r6 = 11104(0x2b60, float:1.556E-41)
            r5.setListenerWithRequestcode(r6, r3)
            r1.a(r2, r0, r6)
            java.lang.String r0 = "doShareToQzone() -- QQ Version is < 4.6.0"
            com.tencent.open.log.SLog.i(r4, r0)
            goto L3c8
        L3ac:
            java.lang.String r5 = "doShareToQzone() -- QQ Version is > 4.6.0"
            com.tencent.open.log.SLog.i(r4, r5)
            com.tencent.connect.common.UIListenerManager r5 = com.tencent.connect.common.UIListenerManager.getInstance()
            java.lang.String r6 = "shareToQzone"
            java.lang.Object r3 = r5.setListnerWithAction(r6, r3)
            if (r3 == 0) goto L3c2
            java.lang.String r3 = "doShareToQzone() -- do listener onCancel()"
            com.tencent.open.log.SLog.i(r4, r3)
        L3c2:
            r3 = 10104(0x2778, float:1.4159E-41)
            r4 = 0
            r1.a(r2, r3, r0, r4)
        L3c8:
            java.lang.String r0 = "openSDK_LOG"
            java.lang.String r2 = "doShareToQzone() --end"
            com.tencent.open.log.SLog.i(r0, r2)
            return
    }

    @Override
    public void releaseResource() {
            r0 = this;
            return
    }

    public void shareToQzone(android.app.Activity r29, android.os.Bundle r30, com.tencent.tauth.IUiListener r31) {
            r28 = this;
            r0 = r28
            r2 = r29
            r1 = r30
            r3 = r31
            java.lang.String r7 = "openSDK_LOG.QzoneShare"
            java.lang.String r4 = "shareToQzone() -- start"
            com.tencent.open.log.SLog.i(r7, r4)
            boolean r4 = com.tencent.connect.a.a(r7, r3)
            if (r4 == 0) goto L16
            return
        L16:
            r4 = -6
            r5 = 4
            r6 = 0
            if (r1 != 0) goto L4e
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            java.lang.String r2 = "传入参数不可以为空"
            r1.<init>(r4, r2, r6)
            r3.onError(r1)
            java.lang.String r1 = "shareToQzone() params is null"
            com.tencent.open.log.SLog.e(r7, r1)
            com.tencent.open.b.e r8 = com.tencent.open.b.e.a()
            r9 = 1
            com.tencent.connect.auth.QQToken r1 = r0.c
            java.lang.String r12 = r1.getAppId()
            java.lang.String r13 = java.lang.String.valueOf(r5)
            long r1 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r14 = java.lang.Long.valueOf(r1)
            r15 = 0
            r16 = 1
            java.lang.String r10 = "SHARE_CHECK_SDK"
            java.lang.String r11 = "1000"
            java.lang.String r17 = "传入参数不可以为空"
            r8.a(r9, r10, r11, r12, r13, r14, r15, r16, r17)
            return
        L4e:
            java.lang.String r8 = "title"
            java.lang.String r9 = r1.getString(r8)
            java.lang.String r10 = "summary"
            java.lang.String r11 = r1.getString(r10)
            java.lang.String r12 = "targetUrl"
            java.lang.String r12 = r1.getString(r12)
            java.lang.String r13 = "mini_program_appid"
            java.lang.String r13 = r1.getString(r13)
            java.lang.String r14 = "mini_program_path"
            java.lang.String r14 = r1.getString(r14)
            java.lang.String r15 = "imageUrl"
            java.util.ArrayList r4 = r1.getStringArrayList(r15)
            java.lang.String r5 = com.tencent.open.utils.m.a(r29)
            java.lang.String r6 = "appName"
            r19 = r15
            if (r5 != 0) goto L83
            java.lang.String r5 = r1.getString(r6)
            r21 = r6
            goto La6
        L83:
            int r15 = r5.length()
            r21 = r6
            r6 = 20
            if (r15 <= r6) goto La6
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            r22 = r10
            r10 = 0
            java.lang.String r5 = r5.substring(r10, r6)
            r15.append(r5)
            java.lang.String r5 = "..."
            r15.append(r5)
            java.lang.String r5 = r15.toString()
            goto La8
        La6:
            r22 = r10
        La8:
            java.lang.String r6 = "req_type"
            int r6 = r1.getInt(r6)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r15 = "shareToQzone() get SHARE_TO_QZONE_KEY_TYPE: "
            r10.append(r15)
            r10.append(r6)
            java.lang.String r10 = r10.toString()
            com.tencent.open.log.SLog.e(r7, r10)
            java.lang.String r10 = "1"
            r15 = 5
            r1 = 1
            if (r6 == r1) goto Ld2
            if (r6 == r15) goto Lcd
            r0.mViaShareQzoneType = r10
            goto Ld4
        Lcd:
            java.lang.String r10 = "2"
            r0.mViaShareQzoneType = r10
            goto Ld4
        Ld2:
            r0.mViaShareQzoneType = r10
        Ld4:
            r10 = -5
            if (r6 == r1) goto L182
            if (r6 == r15) goto L14b
            r15 = 7
            if (r6 == r15) goto L12b
            boolean r13 = com.tencent.open.utils.m.e(r9)
            if (r13 == 0) goto L10d
            boolean r13 = com.tencent.open.utils.m.e(r11)
            if (r13 == 0) goto L10d
            if (r4 == 0) goto Lf4
            int r13 = r4.size()
            if (r13 == 0) goto Lf4
            r13 = 0
            r0.a = r13
            goto L10f
        Lf4:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r13 = "来自"
            r9.append(r13)
            r9.append(r5)
            java.lang.String r13 = "的分享"
            r9.append(r13)
            java.lang.String r9 = r9.toString()
            r0.a = r1
            goto L10f
        L10d:
            r0.a = r1
        L10f:
            r13 = 0
            r0.d = r13
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r15 = "-->shareToQzone, default needTitle = true, shareType = "
            r14.append(r15)
            r14.append(r6)
            java.lang.String r14 = r14.toString()
            com.tencent.open.log.SLog.e(r7, r14)
            r0.e = r1
            r0.f = r13
            goto L190
        L12b:
            boolean r13 = android.text.TextUtils.isEmpty(r13)
            if (r13 != 0) goto L137
            boolean r13 = android.text.TextUtils.isEmpty(r14)
            if (r13 == 0) goto L143
        L137:
            com.tencent.tauth.UiError r13 = new com.tencent.tauth.UiError
            java.lang.String r14 = "传入参数有误!"
            java.lang.String r15 = "appid or path empty."
            r13.<init>(r10, r14, r15)
            r3.onError(r13)
        L143:
            r13 = 0
            r0.e = r13
            r0.f = r13
            r0.a = r13
            goto L190
        L14b:
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            java.lang.String r2 = "请选择支持的分享类型"
            r4 = 0
            r1.<init>(r10, r2, r4)
            r3.onError(r1)
            java.lang.String r1 = "shareToQzone() error--end请选择支持的分享类型"
            com.tencent.open.log.SLog.e(r7, r1)
            com.tencent.open.b.e r18 = com.tencent.open.b.e.a()
            r19 = 1
            com.tencent.connect.auth.QQToken r1 = r0.c
            java.lang.String r22 = r1.getAppId()
            r1 = 4
            java.lang.String r23 = java.lang.String.valueOf(r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r24 = java.lang.Long.valueOf(r1)
            r25 = 0
            r26 = 1
            java.lang.String r20 = "SHARE_CHECK_SDK"
            java.lang.String r21 = "1000"
            java.lang.String r27 = "shareToQzone() 请选择支持的分享类型"
            r18.a(r19, r20, r21, r22, r23, r24, r25, r26, r27)
            return
        L182:
            java.lang.String r13 = "-->shareToQzone, SHARE_TO_QZONE_TYPE_IMAGE_TEXT needTitle = true"
            com.tencent.open.log.SLog.e(r7, r13)
            r0.a = r1
            r13 = 0
            r0.d = r13
            r0.e = r1
            r0.f = r13
        L190:
            boolean r13 = com.tencent.open.utils.m.a()
            java.lang.String r14 = "4.5.0"
            if (r13 != 0) goto L1d6
            boolean r13 = com.tencent.open.utils.m.g(r2, r14)
            if (r13 == 0) goto L1d6
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            java.lang.String r2 = "分享图片失败，检测不到SD卡!"
            r4 = -6
            r5 = 0
            r1.<init>(r4, r2, r5)
            r3.onError(r1)
            java.lang.String r1 = "shareToQzone() sdcard is null--end"
            com.tencent.open.log.SLog.e(r7, r1)
            com.tencent.open.b.e r18 = com.tencent.open.b.e.a()
            r19 = 1
            com.tencent.connect.auth.QQToken r1 = r0.c
            java.lang.String r22 = r1.getAppId()
            r1 = 4
            java.lang.String r23 = java.lang.String.valueOf(r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r24 = java.lang.Long.valueOf(r1)
            r25 = 0
            r26 = 1
            java.lang.String r20 = "SHARE_CHECK_SDK"
            java.lang.String r21 = "1000"
            java.lang.String r27 = "分享图片失败，检测不到SD卡!"
            r18.a(r19, r20, r21, r22, r23, r24, r25, r26, r27)
            return
        L1d6:
            boolean r13 = r0.a
            if (r13 == 0) goto L254
            boolean r13 = android.text.TextUtils.isEmpty(r12)
            if (r13 == 0) goto L217
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            java.lang.String r2 = "targetUrl为必填项，请补充后分享"
            r4 = 0
            r1.<init>(r10, r2, r4)
            r3.onError(r1)
            java.lang.String r1 = "shareToQzone() targetUrl null error--end"
            com.tencent.open.log.SLog.e(r7, r1)
            com.tencent.open.b.e r18 = com.tencent.open.b.e.a()
            r19 = 1
            com.tencent.connect.auth.QQToken r1 = r0.c
            java.lang.String r22 = r1.getAppId()
            r1 = 4
            java.lang.String r23 = java.lang.String.valueOf(r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r24 = java.lang.Long.valueOf(r1)
            r25 = 0
            r26 = 1
            java.lang.String r20 = "SHARE_CHECK_SDK"
            java.lang.String r21 = "1000"
            java.lang.String r27 = "targetUrl为必填项，请补充后分享"
            r18.a(r19, r20, r21, r22, r23, r24, r25, r26, r27)
            return
        L217:
            boolean r12 = com.tencent.open.utils.m.h(r12)
            if (r12 != 0) goto L254
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            java.lang.String r2 = "targetUrl有误"
            r4 = 0
            r1.<init>(r10, r2, r4)
            r3.onError(r1)
            java.lang.String r1 = "shareToQzone() targetUrl error--end"
            com.tencent.open.log.SLog.e(r7, r1)
            com.tencent.open.b.e r18 = com.tencent.open.b.e.a()
            r19 = 1
            com.tencent.connect.auth.QQToken r1 = r0.c
            java.lang.String r22 = r1.getAppId()
            r1 = 4
            java.lang.String r23 = java.lang.String.valueOf(r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r24 = java.lang.Long.valueOf(r1)
            r25 = 0
            r26 = 1
            java.lang.String r20 = "SHARE_CHECK_SDK"
            java.lang.String r21 = "1000"
            java.lang.String r27 = "targetUrl有误"
            r18.a(r19, r20, r21, r22, r23, r24, r25, r26, r27)
            return
        L254:
            boolean r10 = r0.d
            java.lang.String r12 = ""
            if (r10 == 0) goto L267
            r1 = r30
            r10 = 1
            r1.putString(r8, r12)
            r13 = r22
            r1.putString(r13, r12)
            goto L2db
        L267:
            r1 = r30
            r13 = r22
            r10 = 1
            boolean r15 = r0.e
            if (r15 == 0) goto L2ae
            boolean r15 = com.tencent.open.utils.m.e(r9)
            if (r15 == 0) goto L2ae
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            java.lang.String r2 = "title不能为空!"
            r4 = -6
            r5 = 0
            r1.<init>(r4, r2, r5)
            r3.onError(r1)
            java.lang.String r1 = "shareToQzone() title is null--end"
            com.tencent.open.log.SLog.e(r7, r1)
            com.tencent.open.b.e r18 = com.tencent.open.b.e.a()
            r19 = 1
            com.tencent.connect.auth.QQToken r1 = r0.c
            java.lang.String r22 = r1.getAppId()
            r1 = 4
            java.lang.String r23 = java.lang.String.valueOf(r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r24 = java.lang.Long.valueOf(r1)
            r25 = 0
            r26 = 1
            java.lang.String r20 = "SHARE_CHECK_SDK"
            java.lang.String r21 = "1000"
            java.lang.String r27 = "shareToQzone() title is null"
            r18.a(r19, r20, r21, r22, r23, r24, r25, r26, r27)
            return
        L2ae:
            boolean r15 = com.tencent.open.utils.m.e(r9)
            if (r15 != 0) goto L2c5
            int r15 = r9.length()
            r10 = 200(0xc8, float:2.8E-43)
            if (r15 <= r10) goto L2c5
            r15 = 0
            java.lang.String r9 = com.tencent.open.utils.m.a(r9, r10, r15, r15)
            r1.putString(r8, r9)
            goto L2c6
        L2c5:
            r15 = 0
        L2c6:
            boolean r8 = com.tencent.open.utils.m.e(r11)
            if (r8 != 0) goto L2db
            int r8 = r11.length()
            r9 = 600(0x258, float:8.41E-43)
            if (r8 <= r9) goto L2db
            java.lang.String r8 = com.tencent.open.utils.m.a(r11, r9, r15, r15)
            r1.putString(r13, r8)
        L2db:
            boolean r8 = android.text.TextUtils.isEmpty(r5)
            if (r8 != 0) goto L2e6
            r8 = r21
            r1.putString(r8, r5)
        L2e6:
            if (r4 == 0) goto L356
            if (r4 == 0) goto L2f1
            int r5 = r4.size()
            if (r5 != 0) goto L2f1
            goto L356
        L2f1:
            r10 = 0
        L2f2:
            int r5 = r4.size()
            if (r10 >= r5) goto L312
            java.lang.Object r5 = r4.get(r10)
            java.lang.String r5 = (java.lang.String) r5
            boolean r8 = com.tencent.open.utils.m.h(r5)
            if (r8 != 0) goto L30f
            boolean r5 = com.tencent.open.utils.m.i(r5)
            if (r5 != 0) goto L30f
            r4.remove(r10)
            int r10 = r10 + (-1)
        L30f:
            r5 = 1
            int r10 = r10 + r5
            goto L2f2
        L312:
            int r5 = r4.size()
            if (r5 != 0) goto L350
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            java.lang.String r2 = "非法的图片地址!"
            r4 = -6
            r5 = 0
            r1.<init>(r4, r2, r5)
            r3.onError(r1)
            java.lang.String r1 = "shareToQzone() MSG_PARAM_IMAGE_URL_FORMAT_ERROR--end"
            com.tencent.open.log.SLog.e(r7, r1)
            com.tencent.open.b.e r18 = com.tencent.open.b.e.a()
            r19 = 1
            com.tencent.connect.auth.QQToken r1 = r0.c
            java.lang.String r22 = r1.getAppId()
            r1 = 4
            java.lang.String r23 = java.lang.String.valueOf(r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r24 = java.lang.Long.valueOf(r1)
            r25 = 0
            r26 = 1
            java.lang.String r20 = "SHARE_CHECK_SDK"
            java.lang.String r21 = "1000"
            java.lang.String r27 = "shareToQzone() 非法的图片地址!"
            r18.a(r19, r20, r21, r22, r23, r24, r25, r26, r27)
            return
        L350:
            r5 = r19
            r1.putStringArrayList(r5, r4)
            goto L392
        L356:
            boolean r5 = r0.f
            if (r5 == 0) goto L392
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            java.lang.String r2 = "纯图分享，imageUrl 不能为空"
            r4 = -6
            r5 = 0
            r1.<init>(r4, r2, r5)
            r3.onError(r1)
            java.lang.String r1 = "shareToQzone() imageUrl is null -- end"
            com.tencent.open.log.SLog.e(r7, r1)
            com.tencent.open.b.e r18 = com.tencent.open.b.e.a()
            r19 = 1
            com.tencent.connect.auth.QQToken r1 = r0.c
            java.lang.String r22 = r1.getAppId()
            r1 = 4
            java.lang.String r23 = java.lang.String.valueOf(r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r24 = java.lang.Long.valueOf(r1)
            r25 = 0
            r26 = 1
            java.lang.String r20 = "SHARE_CHECK_SDK"
            java.lang.String r21 = "1000"
            java.lang.String r27 = "shareToQzone() imageUrl is null"
            r18.a(r19, r20, r21, r22, r23, r24, r25, r26, r27)
            return
        L392:
            java.lang.String r5 = "4.6.0"
            boolean r8 = com.tencent.open.utils.m.g(r2, r5)
            if (r8 != 0) goto L3a4
            java.lang.String r4 = "shareToQzone() qqver greater than 4.6.0"
            com.tencent.open.log.SLog.i(r7, r4)
            r28.b(r29, r30, r31)
            goto L43c
        L3a4:
            java.lang.String r8 = "4.2.0"
            int r8 = com.tencent.open.utils.k.c(r2, r8)
            if (r8 < 0) goto L423
            int r5 = com.tencent.open.utils.k.c(r2, r5)
            if (r5 >= 0) goto L423
            java.lang.String r5 = "shareToQzone() qqver between 4.2.0 and 4.6.0, will use qqshare"
            com.tencent.open.log.SLog.w(r7, r5)
            com.tencent.connect.share.QQShare r5 = new com.tencent.connect.share.QQShare
            com.tencent.connect.auth.QQToken r8 = r0.c
            r5.<init>(r2, r8)
            if (r4 == 0) goto L413
            int r8 = r4.size()
            if (r8 <= 0) goto L413
            r8 = 0
            java.lang.Object r4 = r4.get(r8)
            java.lang.String r4 = (java.lang.String) r4
            r8 = 5
            if (r6 != r8) goto L40e
            boolean r6 = com.tencent.open.utils.m.i(r4)
            if (r6 != 0) goto L40e
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            java.lang.String r2 = "手Q版本过低，纯图分享不支持网路图片"
            r4 = -6
            r5 = 0
            r1.<init>(r4, r2, r5)
            r3.onError(r1)
            java.lang.String r1 = "shareToQzone()手Q版本过低，纯图分享不支持网路图片"
            com.tencent.open.log.SLog.e(r7, r1)
            com.tencent.open.b.e r18 = com.tencent.open.b.e.a()
            r19 = 1
            com.tencent.connect.auth.QQToken r1 = r0.c
            java.lang.String r22 = r1.getAppId()
            r1 = 4
            java.lang.String r23 = java.lang.String.valueOf(r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r24 = java.lang.Long.valueOf(r1)
            r25 = 0
            r26 = 1
            java.lang.String r20 = "SHARE_CHECK_SDK"
            java.lang.String r21 = "1000"
            java.lang.String r27 = "shareToQzone()手Q版本过低，纯图分享不支持网路图片"
            r18.a(r19, r20, r21, r22, r23, r24, r25, r26, r27)
            return
        L40e:
            java.lang.String r6 = "imageLocalUrl"
            r1.putString(r6, r4)
        L413:
            boolean r4 = com.tencent.open.utils.m.g(r2, r14)
            if (r4 != 0) goto L41f
            java.lang.String r4 = "cflag"
            r6 = 1
            r1.putInt(r4, r6)
        L41f:
            r5.shareToQQ(r2, r1, r3)
            goto L43c
        L423:
            java.lang.String r1 = "shareToQzone() qqver below 4.2.0, will show download dialog"
            com.tencent.open.log.SLog.w(r7, r1)
            com.tencent.open.TDialog r8 = new com.tencent.open.TDialog
            java.lang.String r4 = r0.a(r12)
            r5 = 0
            com.tencent.connect.auth.QQToken r6 = r0.c
            java.lang.String r3 = ""
            r1 = r8
            r2 = r29
            r1.<init>(r2, r3, r4, r5, r6)
            r8.show()
        L43c:
            java.lang.String r1 = "shareToQzone() --end"
            com.tencent.open.log.SLog.i(r7, r1)
            return
    }
}
