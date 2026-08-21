package com.tencent.connect.share;

public class QQShare extends com.tencent.connect.common.BaseApi {
    public static final int QQ_SHARE_SUMMARY_MAX_LENGTH = 512;
    public static final int QQ_SHARE_TITLE_MAX_LENGTH = 128;
    public static final java.lang.String SHARE_TO_QQ_APP_NAME = "appName";
    public static final java.lang.String SHARE_TO_QQ_ARK_INFO = "share_to_qq_ark_info";
    public static final java.lang.String SHARE_TO_QQ_AUDIO_URL = "audio_url";
    public static final java.lang.String SHARE_TO_QQ_EXT_INT = "cflag";
    public static final java.lang.String SHARE_TO_QQ_EXT_STR = "share_qq_ext_str";
    public static final int SHARE_TO_QQ_FLAG_QZONE_AUTO_OPEN = 1;
    public static final int SHARE_TO_QQ_FLAG_QZONE_ITEM_HIDE = 2;
    public static final java.lang.String SHARE_TO_QQ_GAME_MESSAGE_EXT = "game_message_ext";
    public static final java.lang.String SHARE_TO_QQ_GAME_TAG_NAME = "game_tag_name";
    public static final java.lang.String SHARE_TO_QQ_IMAGE_LOCAL_URL = "imageLocalUrl";
    public static final java.lang.String SHARE_TO_QQ_IMAGE_URL = "imageUrl";
    public static final java.lang.String SHARE_TO_QQ_KEY_TYPE = "req_type";
    public static final int SHARE_TO_QQ_MINI_PROGRAM = 7;
    public static final java.lang.String SHARE_TO_QQ_MINI_PROGRAM_APPID = "mini_program_appid";
    public static final java.lang.String SHARE_TO_QQ_MINI_PROGRAM_PATH = "mini_program_path";
    public static final java.lang.String SHARE_TO_QQ_MINI_PROGRAM_TYPE = "mini_program_type";
    public static final java.lang.String SHARE_TO_QQ_SITE = "site";
    public static final java.lang.String SHARE_TO_QQ_SUMMARY = "summary";
    public static final java.lang.String SHARE_TO_QQ_TARGET_URL = "targetUrl";
    public static final java.lang.String SHARE_TO_QQ_TITLE = "title";
    public static final int SHARE_TO_QQ_TYPE_AUDIO = 2;
    public static final int SHARE_TO_QQ_TYPE_DEFAULT = 1;
    public static final int SHARE_TO_QQ_TYPE_IMAGE = 5;
    public java.lang.String mViaShareQQType;



    public QQShare(android.content.Context r1, com.tencent.connect.auth.QQToken r2) {
            r0 = this;
            r0.<init>(r2)
            java.lang.String r1 = ""
            r0.mViaShareQQType = r1
            return
    }

    static com.tencent.connect.auth.QQToken a(com.tencent.connect.share.QQShare r0) {
            com.tencent.connect.auth.QQToken r0 = r0.c
            return r0
    }

    static void a(com.tencent.connect.share.QQShare r0, android.app.Activity r1, android.os.Bundle r2, com.tencent.tauth.IUiListener r3) {
            r0.d(r1, r2, r3)
            return
    }

    static com.tencent.connect.auth.QQToken b(com.tencent.connect.share.QQShare r0) {
            com.tencent.connect.auth.QQToken r0 = r0.c
            return r0
    }

    private void b(android.app.Activity r12, android.os.Bundle r13, com.tencent.tauth.IUiListener r14) {
            r11 = this;
            java.lang.String r0 = "openSDK_LOG.QQShare"
            java.lang.String r1 = "shareToMobileQQ() -- start."
            com.tencent.open.log.SLog.i(r0, r1)
            java.lang.String r1 = "imageUrl"
            java.lang.String r2 = r13.getString(r1)
            java.lang.String r3 = "title"
            java.lang.String r7 = r13.getString(r3)
            java.lang.String r3 = "summary"
            java.lang.String r8 = r13.getString(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "shareToMobileQQ -- imageUrl: "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.tencent.open.log.SLog.v(r0, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L9e
            boolean r3 = com.tencent.open.utils.m.h(r2)
            java.lang.String r4 = "4.3.0"
            if (r3 == 0) goto L59
            boolean r1 = com.tencent.open.utils.m.f(r12, r4)
            if (r1 != 0) goto L46
            r11.d(r12, r13, r14)
            goto Laf
        L46:
            com.tencent.open.utils.c r1 = new com.tencent.open.utils.c
            r1.<init>(r12)
            com.tencent.connect.share.QQShare$1 r3 = new com.tencent.connect.share.QQShare$1
            r4 = r3
            r5 = r11
            r6 = r13
            r9 = r14
            r10 = r12
            r4.<init>(r5, r6, r7, r8, r9, r10)
            r1.a(r2, r3)
            goto Laf
        L59:
            r3 = 0
            r13.putString(r1, r3)
            boolean r1 = com.tencent.open.utils.m.f(r12, r4)
            if (r1 == 0) goto L6c
            java.lang.String r1 = "shareToMobileQQ -- QQ Version is < 4.3.0 "
            com.tencent.open.log.SLog.d(r0, r1)
            r11.d(r12, r13, r14)
            goto Laf
        L6c:
            boolean r1 = com.tencent.open.utils.m.m(r2)
            boolean r3 = com.tencent.open.utils.m.c()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "shareToMobileQQ -- QQ Version is > 4.3.0:isAppSpecificDir="
            r4.append(r5)
            r4.append(r1)
            java.lang.String r1 = ",hasSDPermission:"
            r4.append(r1)
            r4.append(r3)
            java.lang.String r1 = r4.toString()
            com.tencent.open.log.SLog.d(r0, r1)
            com.tencent.connect.share.QQShare$2 r1 = new com.tencent.connect.share.QQShare$2
            r4 = r1
            r5 = r11
            r6 = r13
            r9 = r14
            r10 = r12
            r4.<init>(r5, r6, r7, r8, r9, r10)
            com.tencent.connect.share.a.a(r12, r2, r1)
            goto Laf
        L9e:
            r1 = 1
            java.lang.String r2 = "req_type"
            int r1 = r13.getInt(r2, r1)
            r2 = 5
            if (r1 != r2) goto Lac
            r11.c(r12, r13, r14)
            goto Laf
        Lac:
            r11.d(r12, r13, r14)
        Laf:
            java.lang.String r12 = "shareToMobileQQ() -- end"
            com.tencent.open.log.SLog.i(r0, r12)
            return
    }

    static com.tencent.connect.auth.QQToken c(com.tencent.connect.share.QQShare r0) {
            com.tencent.connect.auth.QQToken r0 = r0.c
            return r0
    }

    private void c(android.app.Activity r9, android.os.Bundle r10, com.tencent.tauth.IUiListener r11) {
            r8 = this;
            java.lang.String r0 = "imageLocalUrl"
            java.lang.String r0 = r10.getString(r0)
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            long r1 = r1.length()
            r3 = 0
            java.lang.String r4 = "openSDK_LOG.QQShare"
            r5 = 5242880(0x500000, double:2.590327E-317)
            int r7 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r7 < 0) goto L2d
            if (r11 == 0) goto L27
            com.tencent.tauth.UiError r9 = new com.tencent.tauth.UiError
            r10 = -16
            java.lang.String r0 = "图片太大，请压缩到5M内再分享!"
            r9.<init>(r10, r0, r3)
            r11.onError(r9)
        L27:
            java.lang.String r9 = "doShareImageToQQ -- error: 图片太大，请压缩到5M内再分享!"
            com.tencent.open.log.SLog.e(r4, r9)
            return
        L2d:
            java.lang.String r1 = "Images"
            java.io.File r1 = com.tencent.open.utils.g.a(r1)
            if (r1 == 0) goto L50
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r1 = r1.getAbsolutePath()
            r2.append(r1)
            java.lang.String r1 = java.io.File.separator
            r2.append(r1)
            java.lang.String r1 = com.tencent.connect.common.Constants.QQ_SHARE_TEMP_DIR
            r2.append(r1)
            java.lang.String r3 = r2.toString()
            goto L55
        L50:
            java.lang.String r1 = "doShareImageToQQ() getExternalFilesDir return null"
            com.tencent.open.log.SLog.i(r4, r1)
        L55:
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            java.lang.String r0 = r1.getAbsolutePath()
            java.lang.String r1 = r1.getName()
            boolean r2 = com.tencent.open.utils.m.m(r0)
            boolean r5 = com.tencent.open.utils.m.c()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "doShareImageToQQ() check file: isAppSpecificDir="
            r6.append(r7)
            r6.append(r2)
            java.lang.String r7 = ",hasSDPermission="
            r6.append(r7)
            r6.append(r5)
            java.lang.String r5 = ",fileDir="
            r6.append(r5)
            r6.append(r0)
            java.lang.String r5 = r6.toString()
            com.tencent.open.log.SLog.i(r4, r5)
            java.util.ArrayList r5 = new java.util.ArrayList
            r6 = 2
            r5.<init>(r6)
            if (r2 == 0) goto L97
            goto Ld4
        L97:
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto Ld4
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            java.lang.String r3 = java.io.File.separator
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            boolean r2 = com.tencent.open.utils.m.a(r9, r0, r1)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r6 = "doShareImageToQQ() sd permission not denied. copy to app specific:"
            r3.append(r6)
            r3.append(r1)
            java.lang.String r6 = ",isSuccess="
            r3.append(r6)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.tencent.open.log.SLog.i(r4, r3)
            if (r2 == 0) goto Ld4
            goto Ld5
        Ld4:
            r1 = r0
        Ld5:
            r5.add(r0)
            r5.add(r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "doShareImageToQQ() destFilePaths=["
            r0.<init>(r1)
            r1 = 0
            java.lang.Object r1 = r5.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            java.lang.String r1 = ","
            r0.append(r1)
            r1 = 1
            java.lang.Object r1 = r5.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.tencent.open.log.SLog.i(r4, r0)
            java.lang.String r0 = "imageLocalUrlArray"
            r10.putStringArrayList(r0, r5)
            r8.d(r9, r10, r11)
            return
    }

    private void d(android.app.Activity r24, android.os.Bundle r25, com.tencent.tauth.IUiListener r26) {
            r23 = this;
            r0 = r23
            r1 = r24
            r2 = r25
            r3 = r26
            java.lang.String r4 = "openSDK_LOG.QQShare"
            java.lang.String r5 = "doShareToQQ() -- start"
            com.tencent.open.log.SLog.i(r4, r5)
            java.lang.StringBuffer r5 = new java.lang.StringBuffer
            java.lang.String r6 = "mqqapi://share/to_fri?src_type=app&version=1&file_type=news"
            r5.<init>(r6)
            java.lang.String r6 = "imageUrl"
            java.lang.String r6 = r2.getString(r6)
            java.lang.String r7 = "title"
            java.lang.String r7 = r2.getString(r7)
            java.lang.String r8 = "summary"
            java.lang.String r8 = r2.getString(r8)
            java.lang.String r9 = "targetUrl"
            java.lang.String r9 = r2.getString(r9)
            java.lang.String r10 = "audio_url"
            java.lang.String r10 = r2.getString(r10)
            r11 = 1
            java.lang.String r12 = "req_type"
            int r12 = r2.getInt(r12, r11)
            java.lang.String r13 = "share_to_qq_ark_info"
            java.lang.String r13 = r2.getString(r13)
            java.lang.String r14 = "mini_program_appid"
            java.lang.String r14 = r2.getString(r14)
            java.lang.String r15 = "mini_program_path"
            java.lang.String r15 = r2.getString(r15)
            java.lang.String r11 = "mini_program_type"
            java.lang.String r11 = r2.getString(r11)
            r3 = 0
            r16 = r13
            java.lang.String r13 = "cflag"
            int r13 = r2.getInt(r13, r3)
            java.lang.String r3 = "share_qq_ext_str"
            java.lang.String r3 = r2.getString(r3)
            java.lang.String r17 = com.tencent.open.utils.m.a(r24)
            r18 = r13
            if (r17 != 0) goto L70
            java.lang.String r13 = "appName"
            java.lang.String r17 = r2.getString(r13)
        L70:
            r13 = r17
            r17 = r3
            java.lang.String r3 = "imageLocalUrl"
            java.lang.String r3 = r2.getString(r3)
            r19 = r11
            java.lang.String r11 = "imageLocalUrlArray"
            java.util.ArrayList r2 = r2.getStringArrayList(r11)
            com.tencent.connect.auth.QQToken r11 = r0.c
            java.lang.String r11 = r11.getAppId()
            r20 = r15
            com.tencent.connect.auth.QQToken r15 = r0.c
            java.lang.String r15 = r15.getOpenIdWithCache()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r21 = r14
            java.lang.String r14 = "doShareToQQ -- openid: "
            r0.append(r14)
            r0.append(r15)
            java.lang.String r14 = ",appName="
            r0.append(r14)
            r0.append(r13)
            java.lang.String r0 = r0.toString()
            com.tencent.open.log.SLog.i(r4, r0)
            java.lang.String r0 = "&file_data="
            r14 = 2
            r22 = r10
            if (r2 == 0) goto L11a
            int r10 = r2.size()
            if (r10 < r14) goto L11a
            r10 = 0
            java.lang.Object r3 = r2.get(r10)
            java.lang.String r3 = (java.lang.String) r3
            if (r3 == 0) goto Lc5
            goto Lc7
        Lc5:
            java.lang.String r3 = ""
        Lc7:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r0)
            byte[] r0 = com.tencent.open.utils.m.j(r3)
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r14)
            r10.append(r0)
            java.lang.String r0 = r10.toString()
            r5.append(r0)
            r0 = 1
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            r0 = 7
            if (r12 != r0) goto Lff
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lff
            java.lang.String r0 = "8.3.3"
            int r0 = com.tencent.open.utils.k.c(r1, r0)
            if (r0 >= 0) goto Lff
            r2 = 0
            java.lang.String r0 = "doShareToQQ() share to mini program set file uri empty"
            com.tencent.open.log.SLog.e(r4, r0)
        Lff:
            android.net.Uri r0 = com.tencent.open.utils.m.a(r1, r11, r2)
            if (r0 == 0) goto L13a
            java.lang.String r2 = "&file_uri="
            r5.append(r2)
            java.lang.String r0 = r0.toString()
            byte[] r0 = com.tencent.open.utils.m.j(r0)
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r14)
            r5.append(r0)
            goto L13a
        L11a:
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L13a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            byte[] r0 = com.tencent.open.utils.m.j(r3)
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r14)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r5.append(r0)
        L13a:
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L15c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&image_url="
            r0.append(r2)
            byte[] r2 = com.tencent.open.utils.m.j(r6)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L15c:
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L17e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&title="
            r0.append(r2)
            byte[] r2 = com.tencent.open.utils.m.j(r7)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L17e:
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L1a0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&description="
            r0.append(r2)
            byte[] r2 = com.tencent.open.utils.m.j(r8)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L1a0:
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 != 0) goto L1ba
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&share_id="
            r0.append(r2)
            r0.append(r11)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L1ba:
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 != 0) goto L1dc
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&url="
            r0.append(r2)
            byte[] r2 = com.tencent.open.utils.m.j(r9)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L1dc:
            boolean r0 = android.text.TextUtils.isEmpty(r13)
            if (r0 != 0) goto L21c
            int r0 = r13.length()
            r2 = 20
            if (r0 <= r2) goto L200
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r3 = 0
            java.lang.String r2 = r13.substring(r3, r2)
            r0.append(r2)
            java.lang.String r2 = "..."
            r0.append(r2)
            java.lang.String r13 = r0.toString()
        L200:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&app_name="
            r0.append(r2)
            byte[] r2 = com.tencent.open.utils.m.j(r13)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L21c:
            boolean r0 = android.text.TextUtils.isEmpty(r15)
            if (r0 != 0) goto L23e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&open_id="
            r0.append(r2)
            byte[] r2 = com.tencent.open.utils.m.j(r15)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L23e:
            boolean r0 = android.text.TextUtils.isEmpty(r22)
            if (r0 != 0) goto L260
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&audioUrl="
            r0.append(r2)
            byte[] r2 = com.tencent.open.utils.m.j(r22)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L260:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&req_type="
            r0.append(r2)
            java.lang.String r2 = java.lang.String.valueOf(r12)
            byte[] r2 = com.tencent.open.utils.m.j(r2)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r21)
            if (r0 != 0) goto L2a6
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&mini_program_appid="
            r0.append(r2)
            java.lang.String r2 = java.lang.String.valueOf(r21)
            byte[] r2 = com.tencent.open.utils.m.j(r2)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L2a6:
            boolean r0 = android.text.TextUtils.isEmpty(r20)
            if (r0 != 0) goto L2cc
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&mini_program_path="
            r0.append(r2)
            java.lang.String r2 = java.lang.String.valueOf(r20)
            byte[] r2 = com.tencent.open.utils.m.j(r2)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L2cc:
            boolean r0 = android.text.TextUtils.isEmpty(r19)
            if (r0 != 0) goto L2f2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&mini_program_type="
            r0.append(r2)
            java.lang.String r2 = java.lang.String.valueOf(r19)
            byte[] r2 = com.tencent.open.utils.m.j(r2)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L2f2:
            boolean r0 = android.text.TextUtils.isEmpty(r16)
            if (r0 != 0) goto L314
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&share_to_qq_ark_info="
            r0.append(r2)
            byte[] r2 = com.tencent.open.utils.m.j(r16)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L314:
            boolean r0 = android.text.TextUtils.isEmpty(r17)
            if (r0 != 0) goto L336
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&share_qq_ext_str="
            r0.append(r2)
            byte[] r2 = com.tencent.open.utils.m.j(r17)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
        L336:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "&cflag="
            r0.append(r2)
            java.lang.String r2 = java.lang.String.valueOf(r18)
            byte[] r2 = com.tencent.open.utils.m.j(r2)
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r14)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r5.append(r0)
            boolean r0 = com.tencent.open.utils.m.c()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "&third_sd="
            r2.append(r3)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            byte[] r0 = com.tencent.open.utils.m.j(r0)
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r14)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r5.append(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "doShareToQQ -- url: "
            r0.append(r2)
            java.lang.String r2 = r5.toString()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.tencent.open.log.SLog.v(r4, r0)
            android.content.Context r0 = com.tencent.open.utils.g.a()
            r2 = r23
            com.tencent.connect.auth.QQToken r3 = r2.c
            java.lang.String r6 = "shareToNativeQQ"
            java.lang.String[] r6 = new java.lang.String[]{r6}
            java.lang.String r7 = "requireApi"
            com.tencent.connect.a.a.a(r0, r3, r7, r6)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r3 = "android.intent.action.VIEW"
            r0.<init>(r3)
            java.lang.String r3 = r5.toString()
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r0.setData(r3)
            r3 = r18
            r5 = 1
            if (r3 != r5) goto L3bf
            java.lang.String r3 = "11"
            goto L3c1
        L3bf:
            java.lang.String r3 = "10"
        L3c1:
            r6 = r3
            com.tencent.connect.auth.QQToken r3 = r2.c
            java.lang.String r5 = r3.getOpenId()
            com.tencent.connect.auth.QQToken r3 = r2.c
            java.lang.String r9 = r3.getAppId()
            java.lang.String r10 = r2.mViaShareQQType
            java.lang.String r7 = "3"
            java.lang.String r8 = "ANDROIDQQ.SHARETOQQ.XX"
            java.lang.String r11 = ""
            java.lang.String r12 = ""
            java.lang.String r13 = "0"
            java.lang.String r14 = "1"
            java.lang.String r15 = "0"
            android.os.Bundle r3 = com.tencent.open.utils.m.a(r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15)
            java.lang.String r5 = com.tencent.connect.common.Constants.KEY_PASS_REPORT_VIA_PARAM
            r0.putExtra(r5, r3)
            java.lang.String r3 = r24.getPackageName()
            java.lang.String r5 = "pkg_name"
            r0.putExtra(r5, r3)
            java.lang.String r3 = "4.6.0"
            boolean r3 = com.tencent.open.utils.m.f(r1, r3)
            if (r3 == 0) goto L40c
            java.lang.String r3 = "doShareToQQ, qqver below 4.6."
            com.tencent.open.log.SLog.i(r4, r3)
            com.tencent.connect.common.UIListenerManager r3 = com.tencent.connect.common.UIListenerManager.getInstance()
            r5 = 11103(0x2b5f, float:1.5559E-41)
            r6 = r26
            r3.setListenerWithRequestcode(r5, r6)
            r2.a(r1, r0, r5)
            goto L42a
        L40c:
            r6 = r26
            java.lang.String r3 = "doShareToQQ, qqver greater than 4.6."
            com.tencent.open.log.SLog.i(r4, r3)
            com.tencent.connect.common.UIListenerManager r3 = com.tencent.connect.common.UIListenerManager.getInstance()
            java.lang.String r5 = "shareToQQ"
            java.lang.Object r3 = r3.setListnerWithAction(r5, r6)
            if (r3 == 0) goto L424
            java.lang.String r3 = "doShareToQQ, last listener is not null, cancel it."
            com.tencent.open.log.SLog.i(r4, r3)
        L424:
            r3 = 10103(0x2777, float:1.4157E-41)
            r5 = 1
            r2.a(r1, r3, r0, r5)
        L42a:
            java.lang.String r0 = "doShareToQQ() --end"
            com.tencent.open.log.SLog.i(r4, r0)
            return
    }

    @Override
    public void releaseResource() {
            r0 = this;
            return
    }

    public void shareToQQ(android.app.Activity r23, android.os.Bundle r24, com.tencent.tauth.IUiListener r25) {
            r22 = this;
            r1 = r22
            r0 = r23
            r2 = r24
            r8 = r25
            java.lang.String r9 = "openSDK_LOG.QQShare"
            java.lang.String r3 = "shareToQQ() -- start."
            com.tencent.open.log.SLog.i(r9, r3)
            boolean r3 = com.tencent.connect.a.a(r9, r8)
            if (r3 == 0) goto L16
            return
        L16:
            java.lang.String r3 = "imageUrl"
            java.lang.String r3 = r2.getString(r3)
            java.lang.String r4 = "title"
            java.lang.String r5 = r2.getString(r4)
            java.lang.String r6 = "summary"
            java.lang.String r7 = r2.getString(r6)
            java.lang.String r10 = "targetUrl"
            java.lang.String r10 = r2.getString(r10)
            java.lang.String r11 = "imageLocalUrl"
            java.lang.String r11 = r2.getString(r11)
            java.lang.String r12 = "mini_program_appid"
            java.lang.String r12 = r2.getString(r12)
            java.lang.String r13 = "mini_program_path"
            java.lang.String r13 = r2.getString(r13)
            r14 = 1
            java.lang.String r15 = "req_type"
            int r15 = r2.getInt(r15, r14)
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            r17 = r6
            java.lang.String r6 = "shareToQQ -- type: "
            r14.append(r6)
            r14.append(r15)
            java.lang.String r6 = r14.toString()
            com.tencent.open.log.SLog.i(r9, r6)
            r14 = 5
            r6 = 1
            if (r15 == r6) goto L79
            r6 = 2
            if (r15 == r6) goto L74
            if (r15 == r14) goto L6f
            r6 = 7
            if (r15 == r6) goto L6a
            goto L7d
        L6a:
            java.lang.String r6 = "9"
            r1.mViaShareQQType = r6
            goto L7d
        L6f:
            java.lang.String r6 = "2"
            r1.mViaShareQQType = r6
            goto L7d
        L74:
            java.lang.String r6 = "3"
            r1.mViaShareQQType = r6
            goto L7d
        L79:
            java.lang.String r6 = "1"
            r1.mViaShareQQType = r6
        L7d:
            boolean r6 = com.tencent.open.utils.m.a()
            r14 = 0
            if (r6 != 0) goto Lc2
            java.lang.String r6 = "4.5.0"
            boolean r6 = com.tencent.open.utils.m.f(r0, r6)
            if (r6 == 0) goto Lc2
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            java.lang.String r2 = "分享图片失败，检测不到SD卡!"
            r3 = -6
            r0.<init>(r3, r2, r14)
            r8.onError(r0)
            java.lang.String r0 = "shareToQQ sdcard is null--end"
            com.tencent.open.log.SLog.e(r9, r0)
            com.tencent.open.b.e r10 = com.tencent.open.b.e.a()
            r11 = 1
            com.tencent.connect.auth.QQToken r0 = r1.c
            java.lang.String r14 = r0.getAppId()
            r0 = 0
            java.lang.String r15 = java.lang.String.valueOf(r0)
            long r2 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r16 = java.lang.Long.valueOf(r2)
            r17 = 0
            r18 = 1
            java.lang.String r12 = "SHARE_CHECK_SDK"
            java.lang.String r13 = "1000"
            java.lang.String r19 = "shareToQQ sdcard is null"
            r10.a(r11, r12, r13, r14, r15, r16, r17, r18, r19)
            return
        Lc2:
            java.lang.String r6 = "非法的图片地址!"
            java.lang.String r14 = "低版本手Q不支持该项功能!"
            r2 = 5
            if (r15 != r2) goto L141
            java.lang.String r2 = "4.3.0"
            boolean r2 = com.tencent.open.utils.m.f(r0, r2)
            if (r2 == 0) goto L106
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            r2 = -6
            r3 = 0
            r0.<init>(r2, r14, r3)
            r8.onError(r0)
            java.lang.String r0 = "shareToQQ, version below 4.3 is not support."
            com.tencent.open.log.SLog.e(r9, r0)
            com.tencent.open.b.e r10 = com.tencent.open.b.e.a()
            r11 = 1
            com.tencent.connect.auth.QQToken r0 = r1.c
            java.lang.String r14 = r0.getAppId()
            r0 = 0
            java.lang.String r15 = java.lang.String.valueOf(r0)
            long r2 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r16 = java.lang.Long.valueOf(r2)
            r17 = 0
            r18 = 1
            java.lang.String r12 = "SHARE_CHECK_SDK"
            java.lang.String r13 = "1000"
            java.lang.String r19 = "shareToQQ, version below 4.3 is not support."
            r10.a(r11, r12, r13, r14, r15, r16, r17, r18, r19)
            return
        L106:
            boolean r2 = com.tencent.open.utils.m.i(r11)
            if (r2 != 0) goto L141
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            r2 = -6
            r3 = 0
            r0.<init>(r2, r6, r3)
            r8.onError(r0)
            java.lang.String r0 = "shareToQQ -- error: 非法的图片地址!"
            com.tencent.open.log.SLog.e(r9, r0)
            com.tencent.open.b.e r10 = com.tencent.open.b.e.a()
            r11 = 1
            com.tencent.connect.auth.QQToken r0 = r1.c
            java.lang.String r14 = r0.getAppId()
            r0 = 0
            java.lang.String r15 = java.lang.String.valueOf(r0)
            long r2 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r16 = java.lang.Long.valueOf(r2)
            r17 = 0
            r18 = 1
            java.lang.String r12 = "SHARE_CHECK_SDK"
            java.lang.String r13 = "1000"
            java.lang.String r19 = "非法的图片地址!"
            r10.a(r11, r12, r13, r14, r15, r16, r17, r18, r19)
            return
        L141:
            java.lang.String r2 = "https://"
            java.lang.String r11 = "http://"
            r20 = r4
            java.lang.String r4 = "传入参数有误!"
            r21 = r6
            r6 = 5
            if (r15 == r6) goto L1d6
            r6 = 7
            if (r15 == r6) goto L1d7
            boolean r6 = android.text.TextUtils.isEmpty(r10)
            if (r6 != 0) goto L1a1
            boolean r6 = r10.startsWith(r11)
            if (r6 != 0) goto L164
            boolean r6 = r10.startsWith(r2)
            if (r6 != 0) goto L164
            goto L1a1
        L164:
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 == 0) goto L1d6
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            java.lang.String r2 = "title不能为空!"
            r3 = -6
            r4 = 0
            r0.<init>(r3, r2, r4)
            r8.onError(r0)
            java.lang.String r0 = "shareToQQ, title is empty."
            com.tencent.open.log.SLog.e(r9, r0)
            com.tencent.open.b.e r10 = com.tencent.open.b.e.a()
            r11 = 1
            com.tencent.connect.auth.QQToken r0 = r1.c
            java.lang.String r14 = r0.getAppId()
            r0 = 0
            java.lang.String r15 = java.lang.String.valueOf(r0)
            long r2 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r16 = java.lang.Long.valueOf(r2)
            r17 = 0
            r18 = 1
            java.lang.String r12 = "SHARE_CHECK_SDK"
            java.lang.String r13 = "1000"
            java.lang.String r19 = "shareToQQ, title is empty."
            r10.a(r11, r12, r13, r14, r15, r16, r17, r18, r19)
            return
        L1a1:
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            r2 = -6
            r3 = 0
            r0.<init>(r2, r4, r3)
            r8.onError(r0)
            java.lang.String r0 = "shareToQQ, targetUrl is empty or illegal.."
            com.tencent.open.log.SLog.e(r9, r0)
            com.tencent.open.b.e r10 = com.tencent.open.b.e.a()
            r11 = 1
            com.tencent.connect.auth.QQToken r0 = r1.c
            java.lang.String r14 = r0.getAppId()
            r0 = 0
            java.lang.String r15 = java.lang.String.valueOf(r0)
            long r2 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r16 = java.lang.Long.valueOf(r2)
            r17 = 0
            r18 = 1
            java.lang.String r12 = "SHARE_CHECK_SDK"
            java.lang.String r13 = "1000"
            java.lang.String r19 = "shareToQQ, targetUrl is empty or illegal.."
            r10.a(r11, r12, r13, r14, r15, r16, r17, r18, r19)
            return
        L1d6:
            r6 = 7
        L1d7:
            if (r15 != r6) goto L23b
            boolean r6 = android.text.TextUtils.isEmpty(r12)
            r12 = -5
            if (r6 != 0) goto L230
            boolean r6 = android.text.TextUtils.isEmpty(r13)
            if (r6 != 0) goto L230
            boolean r6 = android.text.TextUtils.isEmpty(r10)
            if (r6 != 0) goto L230
            com.tencent.connect.auth.QQToken r6 = r1.c
            java.lang.String r6 = r6.getAppId()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L1f9
            goto L230
        L1f9:
            java.lang.String r6 = "8.0.8"
            int r6 = com.tencent.open.utils.k.c(r0, r6)
            if (r6 >= 0) goto L20b
            java.lang.String r6 = "3.1"
            int r6 = com.tencent.open.utils.k.d(r0, r6)
            if (r6 >= 0) goto L20b
            r6 = 0
            goto L20c
        L20b:
            r6 = 1
        L20c:
            if (r6 != 0) goto L219
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            java.lang.String r2 = "版本过低，不支持分享小程序"
            r0.<init>(r12, r14, r2)
            r8.onError(r0)
            return
        L219:
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto L225
            boolean r6 = android.text.TextUtils.isEmpty(r7)
            if (r6 == 0) goto L23b
        L225:
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            java.lang.String r2 = "title || summary empty."
            r0.<init>(r12, r4, r2)
            r8.onError(r0)
            return
        L230:
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            java.lang.String r2 = "appid || path || url empty."
            r0.<init>(r12, r4, r2)
            r8.onError(r0)
            return
        L23b:
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L28f
            boolean r4 = r3.startsWith(r11)
            if (r4 != 0) goto L28f
            boolean r2 = r3.startsWith(r2)
            if (r2 != 0) goto L28f
            java.io.File r2 = new java.io.File
            r2.<init>(r3)
            boolean r2 = r2.exists()
            if (r2 != 0) goto L28f
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            r2 = r21
            r3 = -6
            r4 = 0
            r0.<init>(r3, r2, r4)
            r8.onError(r0)
            java.lang.String r0 = "shareToQQ, image url is emprty or illegal."
            com.tencent.open.log.SLog.e(r9, r0)
            com.tencent.open.b.e r10 = com.tencent.open.b.e.a()
            r11 = 1
            com.tencent.connect.auth.QQToken r0 = r1.c
            java.lang.String r14 = r0.getAppId()
            r0 = 0
            java.lang.String r15 = java.lang.String.valueOf(r0)
            long r2 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r16 = java.lang.Long.valueOf(r2)
            r17 = 0
            r18 = 1
            java.lang.String r12 = "SHARE_CHECK_SDK"
            java.lang.String r13 = "1000"
            java.lang.String r19 = "shareToQQ, image url is emprty or illegal."
            r10.a(r11, r12, r13, r14, r15, r16, r17, r18, r19)
            return
        L28f:
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 != 0) goto L2aa
            int r2 = r5.length()
            r3 = 128(0x80, float:1.8E-43)
            if (r2 <= r3) goto L2aa
            r2 = 0
            java.lang.String r3 = com.tencent.open.utils.m.a(r5, r3, r2, r2)
            r4 = r24
            r5 = r20
            r4.putString(r5, r3)
            goto L2ad
        L2aa:
            r4 = r24
            r2 = 0
        L2ad:
            boolean r3 = android.text.TextUtils.isEmpty(r7)
            if (r3 != 0) goto L2c4
            int r3 = r7.length()
            r5 = 512(0x200, float:7.17E-43)
            if (r3 <= r5) goto L2c4
            java.lang.String r3 = com.tencent.open.utils.m.a(r7, r5, r2, r2)
            r2 = r17
            r4.putString(r2, r3)
        L2c4:
            java.lang.String r2 = "cflag"
            r3 = 0
            int r2 = r4.getInt(r2, r3)
            r5 = 1
            if (r2 != r5) goto L2d0
            r14 = 1
            goto L2d1
        L2d0:
            r14 = 0
        L2d1:
            boolean r2 = com.tencent.open.utils.m.a(r0, r14)
            if (r2 == 0) goto L2e0
            java.lang.String r2 = "shareToQQ, support share"
            com.tencent.open.log.SLog.i(r9, r2)
            r22.b(r23, r24, r25)
            goto L30e
        L2e0:
            java.lang.String r2 = "shareToQQ, don't support share, will show download dialog"
            com.tencent.open.log.SLog.w(r9, r2)     // Catch: java.lang.RuntimeException -> L2fc
            com.tencent.open.TDialog r10 = new com.tencent.open.TDialog     // Catch: java.lang.RuntimeException -> L2fc
            java.lang.String r4 = ""
            java.lang.String r2 = ""
            java.lang.String r5 = r1.a(r2)     // Catch: java.lang.RuntimeException -> L2fc
            r6 = 0
            com.tencent.connect.auth.QQToken r7 = r1.c     // Catch: java.lang.RuntimeException -> L2fc
            r2 = r10
            r3 = r23
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.RuntimeException -> L2fc
            r10.show()     // Catch: java.lang.RuntimeException -> L2fc
            goto L30e
        L2fc:
            r0 = move-exception
            java.lang.String r2 = " shareToQQ, TDialog.show not in main thread"
            com.tencent.open.log.SLog.e(r9, r2, r0)
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            java.lang.String r2 = "没有在主线程调用！"
            r3 = -6
            r4 = 0
            r0.<init>(r3, r2, r4)
            r8.onError(r0)
        L30e:
            java.lang.String r0 = "shareToQQ() -- end."
            com.tencent.open.log.SLog.i(r9, r0)
            return
    }
}
