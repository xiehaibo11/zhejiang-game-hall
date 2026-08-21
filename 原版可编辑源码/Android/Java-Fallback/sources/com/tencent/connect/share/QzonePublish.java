package com.tencent.connect.share;

public class QzonePublish extends com.tencent.connect.common.BaseApi {
    public static final java.lang.String HULIAN_CALL_BACK = "hulian_call_back";
    public static final java.lang.String HULIAN_EXTRA_SCENE = "hulian_extra_scene";
    public static final java.lang.String PUBLISH_TO_QZONE_APP_NAME = "appName";
    public static final java.lang.String PUBLISH_TO_QZONE_EXTMAP = "extMap";
    public static final java.lang.String PUBLISH_TO_QZONE_IMAGE_URL = "imageUrl";
    public static final java.lang.String PUBLISH_TO_QZONE_KEY_TYPE = "req_type";
    public static final java.lang.String PUBLISH_TO_QZONE_SUMMARY = "summary";
    public static final int PUBLISH_TO_QZONE_TYPE_PUBLISHMOOD = 3;
    public static final int PUBLISH_TO_QZONE_TYPE_PUBLISHVIDEO = 4;
    public static final java.lang.String PUBLISH_TO_QZONE_VIDEO_DURATION = "videoDuration";
    public static final java.lang.String PUBLISH_TO_QZONE_VIDEO_PATH = "videoPath";
    public static final java.lang.String PUBLISH_TO_QZONE_VIDEO_SIZE = "videoSize";



    public QzonePublish(android.content.Context r1, com.tencent.connect.auth.QQToken r2) {
            r0 = this;
            r0.<init>(r2)
            return
    }

    static void a(com.tencent.connect.share.QzonePublish r0, android.app.Activity r1, android.os.Bundle r2, com.tencent.tauth.IUiListener r3) {
            r0.b(r1, r2, r3)
            return
    }

    private void b(android.app.Activity r33, android.os.Bundle r34, com.tencent.tauth.IUiListener r35) {
            r32 = this;
            r1 = r32
            r2 = r33
            r0 = r34
            r3 = r35
            java.lang.String r4 = ""
            java.lang.String r5 = "openSDK_LOG.QzonePublish"
            java.lang.String r6 = "doPublishToQzone() --start"
            com.tencent.open.log.SLog.i(r5, r6)
            java.lang.StringBuffer r6 = new java.lang.StringBuffer
            java.lang.String r7 = "mqqapi://qzone/publish?src_type=app&version=1&file_type=news"
            r6.<init>(r7)
            java.lang.String r7 = "imageUrl"
            java.util.ArrayList r7 = r0.getStringArrayList(r7)
            java.lang.String r8 = "summary"
            java.lang.String r8 = r0.getString(r8)
            r9 = 3
            java.lang.String r10 = "req_type"
            int r10 = r0.getInt(r10, r9)
            java.lang.String r11 = "appName"
            java.lang.String r11 = r0.getString(r11)
            java.lang.String r12 = "videoPath"
            java.lang.String r12 = r0.getString(r12)
            java.lang.String r13 = "videoDuration"
            int r13 = r0.getInt(r13)
            java.lang.String r14 = "videoSize"
            long r14 = r0.getLong(r14)
            java.lang.String r9 = "extMap"
            android.os.Bundle r0 = r0.getBundle(r9)     // Catch: java.lang.Exception -> L9b
            if (r0 == 0) goto L96
            java.util.Set r9 = r0.keySet()     // Catch: java.lang.Exception -> L9b
            r16 = r4
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L94
            r4.<init>()     // Catch: java.lang.Exception -> L94
            java.util.Iterator r9 = r9.iterator()     // Catch: java.lang.Exception -> L94
        L5a:
            boolean r17 = r9.hasNext()     // Catch: java.lang.Exception -> L94
            if (r17 == 0) goto L85
            java.lang.Object r17 = r9.next()     // Catch: java.lang.Exception -> L94
            r34 = r9
            r9 = r17
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Exception -> L94
            java.lang.String r17 = r0.getString(r9)     // Catch: java.lang.Exception -> L94
            boolean r17 = android.text.TextUtils.isEmpty(r17)     // Catch: java.lang.Exception -> L94
            if (r17 != 0) goto L7e
            r17 = r11
            java.lang.String r11 = r0.getString(r9)     // Catch: java.lang.Exception -> L92
            r4.put(r9, r11)     // Catch: java.lang.Exception -> L92
            goto L80
        L7e:
            r17 = r11
        L80:
            r9 = r34
            r11 = r17
            goto L5a
        L85:
            r17 = r11
            int r0 = r4.length()     // Catch: java.lang.Exception -> L92
            if (r0 <= 0) goto La5
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> L92
            goto La7
        L92:
            r0 = move-exception
            goto La0
        L94:
            r0 = move-exception
            goto L9e
        L96:
            r16 = r4
            r17 = r11
            goto La5
        L9b:
            r0 = move-exception
            r16 = r4
        L9e:
            r17 = r11
        La0:
            java.lang.String r4 = "publishToQzone()  --error parse extmap"
            com.tencent.open.log.SLog.e(r5, r4, r0)
        La5:
            r0 = r16
        La7:
            com.tencent.connect.auth.QQToken r4 = r1.c
            java.lang.String r4 = r4.getAppId()
            com.tencent.connect.auth.QQToken r9 = r1.c
            java.lang.String r9 = r9.getOpenId()
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r1 = "openId:"
            r11.append(r1)
            r11.append(r9)
            java.lang.String r1 = r11.toString()
            com.tencent.open.log.SLog.v(r5, r1)
            r1 = 3
            if (r1 != r10) goto L169
            if (r7 == 0) goto L169
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.StringBuffer r11 = new java.lang.StringBuffer
            r11.<init>()
            r18 = r5
            int r5 = r7.size()
            r19 = r0
            r0 = 0
        Ldf:
            if (r0 >= r5) goto L118
            java.lang.Object r16 = r7.get(r0)
            java.lang.String r16 = (java.lang.String) r16
            r20 = r9
            java.lang.String r9 = java.net.URLEncoder.encode(r16)
            r1.append(r9)
            java.lang.Object r9 = r7.get(r0)
            java.lang.String r9 = (java.lang.String) r9
            java.lang.String r9 = com.tencent.open.utils.m.a(r4, r2, r9, r3)
            boolean r16 = android.text.TextUtils.isEmpty(r9)
            if (r16 != 0) goto L107
            java.lang.String r9 = java.net.URLEncoder.encode(r9)
            r11.append(r9)
        L107:
            int r9 = r5 + (-1)
            if (r0 == r9) goto L113
            java.lang.String r9 = ";"
            r1.append(r9)
            r11.append(r9)
        L113:
            int r0 = r0 + 1
            r9 = r20
            goto Ldf
        L118:
            r20 = r9
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r5 = "&image_url="
            r0.append(r5)
            java.lang.String r1 = r1.toString()
            byte[] r1 = com.tencent.open.utils.m.j(r1)
            r5 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r5)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.append(r0)
            java.lang.String r0 = r11.toString()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L166
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "&image_uri="
            r0.append(r1)
            java.lang.String r1 = r11.toString()
            byte[] r1 = com.tencent.open.utils.m.j(r1)
            r5 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r5)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.append(r0)
        L166:
            java.lang.String r0 = "7"
            goto L171
        L169:
            r19 = r0
            r18 = r5
            r20 = r9
            r0 = r16
        L171:
            r1 = 4
            if (r1 != r10) goto L1fb
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "&videoPath="
            r0.append(r1)
            byte[] r1 = com.tencent.open.utils.m.j(r12)
            r5 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r5)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.append(r0)
            java.lang.String r0 = com.tencent.open.utils.m.a(r4, r2, r12, r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L1b8
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "&videoUri="
            r1.append(r3)
            byte[] r0 = com.tencent.open.utils.m.j(r0)
            r3 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r3)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r6.append(r0)
        L1b8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "&videoDuration="
            r0.append(r1)
            java.lang.String r1 = java.lang.String.valueOf(r13)
            byte[] r1 = com.tencent.open.utils.m.j(r1)
            r3 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.append(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "&videoSize="
            r0.append(r1)
            java.lang.String r1 = java.lang.String.valueOf(r14)
            byte[] r1 = com.tencent.open.utils.m.j(r1)
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.append(r0)
            java.lang.String r0 = "8"
        L1fb:
            r26 = r0
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L220
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "&description="
            r0.append(r1)
            byte[] r1 = com.tencent.open.utils.m.j(r8)
            r3 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.append(r0)
        L220:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L23a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "&share_id="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r6.append(r0)
        L23a:
            boolean r0 = android.text.TextUtils.isEmpty(r17)
            if (r0 != 0) goto L25d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "&app_name="
            r0.append(r1)
            byte[] r1 = com.tencent.open.utils.m.j(r17)
            r3 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.append(r0)
        L25d:
            boolean r0 = com.tencent.open.utils.m.e(r20)
            if (r0 != 0) goto L280
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "&open_id="
            r0.append(r1)
            byte[] r1 = com.tencent.open.utils.m.j(r20)
            r3 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.append(r0)
        L280:
            boolean r0 = android.text.TextUtils.isEmpty(r19)
            if (r0 != 0) goto L2a3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "&share_qzone_ext_str="
            r0.append(r1)
            byte[] r1 = com.tencent.open.utils.m.j(r19)
            r3 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.append(r0)
        L2a3:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "&req_type="
            r0.append(r1)
            java.lang.String r1 = java.lang.String.valueOf(r10)
            byte[] r1 = com.tencent.open.utils.m.j(r1)
            r3 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.append(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "doPublishToQzone, url: "
            r0.append(r1)
            java.lang.String r1 = r6.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = r18
            com.tencent.open.log.SLog.v(r1, r0)
            android.content.Context r0 = com.tencent.open.utils.g.a()
            r1 = r32
            com.tencent.connect.auth.QQToken r3 = r1.c
            java.lang.String r4 = "shareToNativeQQ"
            java.lang.String[] r4 = new java.lang.String[]{r4}
            java.lang.String r5 = "requireApi"
            com.tencent.connect.a.a.a(r0, r3, r5, r4)
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r3 = "android.intent.action.VIEW"
            r0.<init>(r3)
            java.lang.String r3 = "com.tencent.mobileqq"
            r0.setPackage(r3)
            java.lang.String r3 = r6.toString()
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r0.setData(r3)
            java.lang.String r3 = r33.getPackageName()
            java.lang.String r4 = "pkg_name"
            r0.putExtra(r4, r3)
            com.tencent.connect.auth.QQToken r3 = r1.c
            java.lang.String r21 = r3.getOpenId()
            com.tencent.connect.auth.QQToken r3 = r1.c
            java.lang.String r25 = r3.getAppId()
            java.lang.String r22 = "11"
            java.lang.String r23 = "3"
            java.lang.String r24 = "ANDROIDQQ.SHARETOQZ.XX"
            java.lang.String r27 = ""
            java.lang.String r28 = ""
            java.lang.String r29 = "0"
            java.lang.String r30 = "1"
            java.lang.String r31 = "0"
            android.os.Bundle r3 = com.tencent.open.utils.m.a(r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31)
            java.lang.String r4 = com.tencent.connect.common.Constants.KEY_PASS_REPORT_VIA_PARAM
            r0.putExtra(r4, r3)
            r3 = 10104(0x2778, float:1.4159E-41)
            r4 = 0
            r1.a(r2, r3, r0, r4)
            java.lang.String r0 = "openSDK_LOG"
            java.lang.String r2 = "doPublishToQzone() --end"
            com.tencent.open.log.SLog.i(r0, r2)
            return
    }

    public void publishToQzone(android.app.Activity r20, android.os.Bundle r21, com.tencent.tauth.IUiListener r22) {
            r19 = this;
            r6 = r19
            r3 = r21
            r7 = r22
            java.lang.String r8 = "openSDK_LOG.QzonePublish"
            java.lang.String r0 = "publishToQzone() -- start"
            com.tencent.open.log.SLog.i(r8, r0)
            boolean r0 = com.tencent.connect.a.a(r8, r7)
            if (r0 == 0) goto L14
            return
        L14:
            r0 = 4
            r9 = 0
            if (r3 != 0) goto L4d
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            r2 = -6
            java.lang.String r3 = "传入参数不可以为空"
            r1.<init>(r2, r3, r9)
            r7.onError(r1)
            java.lang.String r1 = "-->publishToQzone, params is null"
            com.tencent.open.log.SLog.e(r8, r1)
            com.tencent.open.b.e r9 = com.tencent.open.b.e.a()
            r10 = 1
            com.tencent.connect.auth.QQToken r1 = r6.c
            java.lang.String r13 = r1.getAppId()
            java.lang.String r14 = java.lang.String.valueOf(r0)
            long r0 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r15 = java.lang.Long.valueOf(r0)
            r16 = 0
            r17 = 1
            java.lang.String r11 = "SHARE_CHECK_SDK"
            java.lang.String r12 = "1000"
            java.lang.String r18 = "传入参数不可以为空"
            r9.a(r10, r11, r12, r13, r14, r15, r16, r17, r18)
            return
        L4d:
            boolean r1 = com.tencent.open.utils.m.f(r20)
            if (r1 != 0) goto L9f
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            r2 = -15
            java.lang.String r3 = "手Q版本过低，请下载安装最新版手Q"
            r1.<init>(r2, r3, r9)
            r7.onError(r1)
            java.lang.String r1 = "-->publishToQzone, this is not support below qq 5.9.5"
            com.tencent.open.log.SLog.e(r8, r1)
            com.tencent.open.b.e r9 = com.tencent.open.b.e.a()
            r10 = 1
            com.tencent.connect.auth.QQToken r1 = r6.c
            java.lang.String r13 = r1.getAppId()
            java.lang.String r14 = java.lang.String.valueOf(r0)
            long r0 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r15 = java.lang.Long.valueOf(r0)
            r16 = 0
            r17 = 1
            java.lang.String r11 = "SHARE_CHECK_SDK"
            java.lang.String r12 = "1000"
            java.lang.String r18 = "publicToQzone, this is not support below qq 5.9.5"
            r9.a(r10, r11, r12, r13, r14, r15, r16, r17, r18)
            com.tencent.open.TDialog r7 = new com.tencent.open.TDialog
            java.lang.String r0 = ""
            java.lang.String r3 = r6.a(r0)
            r4 = 0
            com.tencent.connect.auth.QQToken r5 = r6.c
            java.lang.String r2 = ""
            r0 = r7
            r1 = r20
            r0.<init>(r1, r2, r3, r4, r5)
            r7.show()
            return
        L9f:
            java.lang.String r1 = com.tencent.open.utils.m.a(r20)
            r2 = 0
            java.lang.String r4 = "appName"
            if (r1 != 0) goto Lad
            java.lang.String r1 = r3.getString(r4)
            goto Lca
        Lad:
            int r5 = r1.length()
            r10 = 20
            if (r5 <= r10) goto Lca
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = r1.substring(r2, r10)
            r5.append(r1)
            java.lang.String r1 = "..."
            r5.append(r1)
            java.lang.String r1 = r5.toString()
        Lca:
            boolean r5 = android.text.TextUtils.isEmpty(r1)
            if (r5 != 0) goto Ld3
            r3.putString(r4, r1)
        Ld3:
            java.lang.String r1 = "req_type"
            int r1 = r3.getInt(r1)
            r4 = 3
            if (r1 != r4) goto L110
            java.lang.String r0 = "imageUrl"
            java.util.ArrayList r1 = r3.getStringArrayList(r0)
            if (r1 == 0) goto L107
            int r4 = r1.size()
            if (r4 <= 0) goto L107
        Lea:
            int r4 = r1.size()
            if (r2 >= r4) goto L104
            java.lang.Object r4 = r1.get(r2)
            java.lang.String r4 = (java.lang.String) r4
            boolean r4 = com.tencent.open.utils.m.i(r4)
            if (r4 != 0) goto L101
            r1.remove(r2)
            int r2 = r2 + (-1)
        L101:
            int r2 = r2 + 1
            goto Lea
        L104:
            r3.putStringArrayList(r0, r1)
        L107:
            r19.b(r20, r21, r22)
            java.lang.String r0 = "publishToQzone() --end"
            com.tencent.open.log.SLog.i(r8, r0)
            goto L162
        L110:
            r10 = -5
            if (r1 != r0) goto L163
            java.lang.String r0 = "videoPath"
            java.lang.String r11 = r3.getString(r0)
            boolean r0 = com.tencent.open.utils.m.i(r11)
            java.lang.String r12 = "请选择有效的视频文件"
            if (r0 != 0) goto L12f
            java.lang.String r0 = "publishToQzone() video url invalid"
            com.tencent.open.log.SLog.e(r8, r0)
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            r0.<init>(r10, r12, r9)
            r7.onError(r0)
            return
        L12f:
            android.media.MediaPlayer r13 = new android.media.MediaPlayer
            r13.<init>()
            com.tencent.connect.share.QzonePublish$1 r14 = new com.tencent.connect.share.QzonePublish$1
            r0 = r14
            r1 = r19
            r2 = r11
            r3 = r21
            r4 = r20
            r5 = r22
            r0.<init>(r1, r2, r3, r4, r5)
            r13.setOnPreparedListener(r14)
            com.tencent.connect.share.QzonePublish$2 r0 = new com.tencent.connect.share.QzonePublish$2
            r0.<init>(r6, r7)
            r13.setOnErrorListener(r0)
            r13.setDataSource(r11)     // Catch: java.lang.Exception -> L155
            r13.prepareAsync()     // Catch: java.lang.Exception -> L155
            goto L162
        L155:
            java.lang.String r0 = "publishToQzone() exception(s) occurred when preparing mediaplayer"
            com.tencent.open.log.SLog.e(r8, r0)
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            r0.<init>(r10, r12, r9)
            r7.onError(r0)
        L162:
            return
        L163:
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            java.lang.String r2 = "请选择支持的分享类型"
            r1.<init>(r10, r2, r9)
            r7.onError(r1)
            java.lang.String r1 = "publishToQzone() error--end请选择支持的分享类型"
            com.tencent.open.log.SLog.e(r8, r1)
            com.tencent.open.b.e r9 = com.tencent.open.b.e.a()
            r10 = 1
            com.tencent.connect.auth.QQToken r1 = r6.c
            java.lang.String r13 = r1.getAppId()
            java.lang.String r14 = java.lang.String.valueOf(r0)
            long r0 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r15 = java.lang.Long.valueOf(r0)
            r16 = 0
            r17 = 1
            java.lang.String r11 = "SHARE_CHECK_SDK"
            java.lang.String r12 = "1000"
            java.lang.String r18 = "publishToQzone() 请选择支持的分享类型"
            r9.a(r10, r11, r12, r13, r14, r15, r16, r17, r18)
            return
    }
}
