package com.tencent.connect.common;

public abstract class BaseApi {
    public static java.lang.String businessId;
    public static java.lang.String installChannel;
    public static boolean isOEM;
    public static java.lang.String registerChannel;
    protected com.tencent.connect.auth.c b;
    protected com.tencent.connect.auth.QQToken c;

    public class TempRequestListener implements com.tencent.tauth.IRequestListener {
        final com.tencent.connect.common.BaseApi a;
        private final com.tencent.tauth.IUiListener b;
        private final android.os.Handler c;


        public TempRequestListener(com.tencent.connect.common.BaseApi r2, com.tencent.tauth.IUiListener r3) {
                r1 = this;
                r1.a = r2
                r1.<init>()
                r1.b = r3
                com.tencent.connect.common.BaseApi$TempRequestListener$1 r3 = new com.tencent.connect.common.BaseApi$TempRequestListener$1
                android.content.Context r0 = com.tencent.open.utils.g.a()
                android.os.Looper r0 = r0.getMainLooper()
                r3.<init>(r1, r0, r2)
                r1.c = r3
                return
        }

        static com.tencent.tauth.IUiListener a(com.tencent.connect.common.BaseApi.TempRequestListener r0) {
                com.tencent.tauth.IUiListener r0 = r0.b
                return r0
        }

        @Override
        public void onComplete(org.json.JSONObject r2) {
                r1 = this;
                android.os.Handler r0 = r1.c
                android.os.Message r0 = r0.obtainMessage()
                r0.obj = r2
                r2 = 0
                r0.what = r2
                android.os.Handler r2 = r1.c
                r2.sendMessage(r0)
                return
        }

        @Override
        public void onHttpStatusException(com.tencent.open.utils.HttpUtils.HttpStatusException r2) {
                r1 = this;
                android.os.Handler r0 = r1.c
                android.os.Message r0 = r0.obtainMessage()
                java.lang.String r2 = r2.getMessage()
                r0.obj = r2
                r2 = -9
                r0.what = r2
                android.os.Handler r2 = r1.c
                r2.sendMessage(r0)
                return
        }

        @Override
        public void onIOException(java.io.IOException r2) {
                r1 = this;
                android.os.Handler r0 = r1.c
                android.os.Message r0 = r0.obtainMessage()
                java.lang.String r2 = r2.getMessage()
                r0.obj = r2
                r2 = -2
                r0.what = r2
                android.os.Handler r2 = r1.c
                r2.sendMessage(r0)
                return
        }

        @Override
        public void onJSONException(org.json.JSONException r2) {
                r1 = this;
                android.os.Handler r0 = r1.c
                android.os.Message r0 = r0.obtainMessage()
                java.lang.String r2 = r2.getMessage()
                r0.obj = r2
                r2 = -4
                r0.what = r2
                android.os.Handler r2 = r1.c
                r2.sendMessage(r0)
                return
        }

        @Override
        public void onMalformedURLException(java.net.MalformedURLException r2) {
                r1 = this;
                android.os.Handler r0 = r1.c
                android.os.Message r0 = r0.obtainMessage()
                java.lang.String r2 = r2.getMessage()
                r0.obj = r2
                r2 = -3
                r0.what = r2
                android.os.Handler r2 = r1.c
                r2.sendMessage(r0)
                return
        }

        @Override
        public void onNetworkUnavailableException(com.tencent.open.utils.HttpUtils.NetworkUnavailableException r2) {
                r1 = this;
                android.os.Handler r0 = r1.c
                android.os.Message r0 = r0.obtainMessage()
                java.lang.String r2 = r2.getMessage()
                r0.obj = r2
                r2 = -10
                r0.what = r2
                android.os.Handler r2 = r1.c
                r2.sendMessage(r0)
                return
        }

        @Override
        public void onSocketTimeoutException(java.net.SocketTimeoutException r2) {
                r1 = this;
                android.os.Handler r0 = r1.c
                android.os.Message r0 = r0.obtainMessage()
                java.lang.String r2 = r2.getMessage()
                r0.obj = r2
                r2 = -8
                r0.what = r2
                android.os.Handler r2 = r1.c
                r2.sendMessage(r0)
                return
        }

        @Override
        public void onUnknowException(java.lang.Exception r2) {
                r1 = this;
                android.os.Handler r0 = r1.c
                android.os.Message r0 = r0.obtainMessage()
                java.lang.String r2 = r2.getMessage()
                r0.obj = r2
                r2 = -6
                r0.what = r2
                android.os.Handler r2 = r1.c
                r2.sendMessage(r0)
                return
        }
    }

    static {
            return
    }

    public BaseApi(com.tencent.connect.auth.QQToken r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    public BaseApi(com.tencent.connect.auth.c r1, com.tencent.connect.auth.QQToken r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            return
    }

    private android.content.Intent a(android.app.Activity r4, android.content.Intent r5, java.util.Map<java.lang.String, java.lang.Object> r6, int r7) {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            android.content.Context r1 = r4.getApplicationContext()
            java.lang.Class<com.tencent.connect.common.AssistActivity> r2 = com.tencent.connect.common.AssistActivity.class
            r0.<init>(r1, r2)
            java.lang.String r1 = "is_login"
            r2 = 1
            r0.putExtra(r1, r2)
            r3.a(r4, r0, r5, r7)
            if (r6 != 0) goto L17
            return r0
        L17:
            java.lang.String r4 = com.tencent.connect.common.Constants.KEY_RESTORE_LANDSCAPE     // Catch: java.lang.Exception -> L31
            boolean r4 = r6.containsKey(r4)     // Catch: java.lang.Exception -> L31
            if (r4 == 0) goto L39
            java.lang.String r4 = com.tencent.connect.common.Constants.KEY_RESTORE_LANDSCAPE     // Catch: java.lang.Exception -> L31
            java.lang.Object r4 = r6.get(r4)     // Catch: java.lang.Exception -> L31
            java.lang.Boolean r4 = (java.lang.Boolean) r4     // Catch: java.lang.Exception -> L31
            java.lang.String r5 = com.tencent.connect.common.Constants.KEY_RESTORE_LANDSCAPE     // Catch: java.lang.Exception -> L31
            boolean r4 = r4.booleanValue()     // Catch: java.lang.Exception -> L31
            r0.putExtra(r5, r4)     // Catch: java.lang.Exception -> L31
            goto L39
        L31:
            r4 = move-exception
            java.lang.String r5 = "openSDK_LOG.BaseApi"
            java.lang.String r6 = "Exception"
            com.tencent.open.log.SLog.e(r5, r6, r4)
        L39:
            return r0
    }

    private void a(android.app.Activity r5, android.content.Intent r6, android.content.Intent r7, int r8) {
            r4 = this;
            java.lang.String r0 = "openSDK_LOG.BaseApi"
            if (r6 == 0) goto L85
            if (r7 != 0) goto L8
            goto L85
        L8:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L3e
            r2 = 16
            if (r1 < r2) goto L1c
            android.content.ClipData r1 = r7.getClipData()     // Catch: java.lang.Throwable -> L3e
            if (r1 != 0) goto L1c
            r1 = 0
            android.content.ClipData r1 = android.content.ClipData.newPlainText(r1, r1)     // Catch: java.lang.Throwable -> L3e
            r7.setClipData(r1)     // Catch: java.lang.Throwable -> L3e
        L1c:
            int r1 = r7.getFlags()     // Catch: java.lang.Throwable -> L3e
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L3e
            r3 = 21
            if (r2 < r3) goto L2c
            r1 = r1 & (-196(0xffffffffffffff3c, float:NaN))
            r7.setFlags(r1)     // Catch: java.lang.Throwable -> L3e
            goto L44
        L2c:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L3e
            r3 = 19
            if (r2 < r3) goto L38
            r1 = r1 & (-68)
            r7.setFlags(r1)     // Catch: java.lang.Throwable -> L3e
            goto L44
        L38:
            r1 = r1 & (-4)
            r7.setFlags(r1)     // Catch: java.lang.Throwable -> L3e
            goto L44
        L3e:
            r1 = move-exception
            java.lang.String r2 = "setActivityIntent security catch exception"
            com.tencent.open.log.SLog.e(r0, r2, r1)
        L44:
            int r1 = r5.getRequestedOrientation()
            java.lang.String r2 = "key_request_orientation"
            r6.putExtra(r2, r1)
            java.lang.String r1 = "openSDK_LOG.AssistActivity.ExtraIntent"
            r6.putExtra(r1, r7)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7f
            r1.<init>()     // Catch: java.lang.Throwable -> L7f
            java.lang.String r2 = "setActivityIntent requestCode: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L7f
            r1.append(r8)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L7f
            com.tencent.open.log.SLog.i(r0, r1)     // Catch: java.lang.Throwable -> L7f
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L7f
            r2 = 23
            if (r1 < r2) goto L73
            r1 = 1140850688(0x44000000, float:512.0)
            android.app.PendingIntent r5 = android.app.PendingIntent.getActivity(r5, r8, r7, r1)     // Catch: java.lang.Throwable -> L7f
            goto L79
        L73:
            r1 = 1073741824(0x40000000, float:2.0)
            android.app.PendingIntent r5 = android.app.PendingIntent.getActivity(r5, r8, r7, r1)     // Catch: java.lang.Throwable -> L7f
        L79:
            java.lang.String r7 = "key_extra_pending_intent"
            r6.putExtra(r7, r5)     // Catch: java.lang.Throwable -> L7f
            goto L85
        L7f:
            r5 = move-exception
            java.lang.String r6 = "setActivityIntent create pendingIntent exception"
            com.tencent.open.log.SLog.e(r0, r6, r5)
        L85:
            return
    }

    protected android.os.Bundle a() {
            r5 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "format"
            java.lang.String r2 = "json"
            r0.putString(r1, r2)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            java.lang.String r2 = "status_os"
            r0.putString(r2, r1)
            com.tencent.open.utils.f r1 = com.tencent.open.utils.f.a()
            android.content.Context r2 = com.tencent.open.utils.g.a()
            java.lang.String r1 = r1.c(r2)
            java.lang.String r2 = "status_machine"
            r0.putString(r2, r1)
            java.lang.String r1 = android.os.Build.VERSION.SDK
            java.lang.String r2 = "status_version"
            r0.putString(r2, r1)
            java.lang.String r1 = "sdkv"
            java.lang.String r2 = "3.5.14.lite"
            r0.putString(r1, r2)
            java.lang.String r1 = "sdkp"
            java.lang.String r2 = "a"
            r0.putString(r1, r2)
            com.tencent.connect.auth.QQToken r1 = r5.c
            if (r1 == 0) goto L64
            boolean r1 = r1.isSessionValid()
            if (r1 == 0) goto L64
            com.tencent.connect.auth.QQToken r1 = r5.c
            java.lang.String r1 = r1.getAccessToken()
            java.lang.String r2 = "access_token"
            r0.putString(r2, r1)
            com.tencent.connect.auth.QQToken r1 = r5.c
            java.lang.String r1 = r1.getAppId()
            java.lang.String r2 = "oauth_consumer_key"
            r0.putString(r2, r1)
            com.tencent.connect.auth.QQToken r1 = r5.c
            java.lang.String r1 = r1.getOpenId()
            java.lang.String r2 = "openid"
            r0.putString(r2, r1)
        L64:
            android.content.Context r1 = com.tencent.open.utils.g.a()
            r2 = 0
            java.lang.String r3 = "pfStore"
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r3, r2)
            boolean r2 = com.tencent.connect.common.BaseApi.isOEM
            java.lang.String r3 = "pf"
            if (r2 == 0) goto La6
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "desktop_m_qq-"
            r1.append(r2)
            java.lang.String r2 = com.tencent.connect.common.BaseApi.installChannel
            r1.append(r2)
            java.lang.String r2 = "-"
            r1.append(r2)
            java.lang.String r4 = "android"
            r1.append(r4)
            r1.append(r2)
            java.lang.String r4 = com.tencent.connect.common.BaseApi.registerChannel
            r1.append(r4)
            r1.append(r2)
            java.lang.String r2 = com.tencent.connect.common.BaseApi.businessId
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.putString(r3, r1)
            goto Laf
        La6:
            java.lang.String r2 = "openmobile_android"
            java.lang.String r1 = r1.getString(r3, r2)
            r0.putString(r3, r1)
        Laf:
            return r0
    }

    protected java.lang.String a(java.lang.String r4) {
            r3 = this;
            android.os.Bundle r0 = r3.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 != 0) goto L14
            java.lang.String r2 = "need_version"
            r0.putString(r2, r4)
        L14:
            java.lang.String r4 = "https://openmobile.qq.com/oauth2.0/m_jump_by_version?"
            r1.append(r4)
            java.lang.String r4 = com.tencent.open.utils.HttpUtils.encodeUrl(r0)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            return r4
    }

    protected void a(android.app.Activity r4, int r5, android.content.Intent r6, boolean r7) {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            android.content.Context r1 = r4.getApplicationContext()
            java.lang.Class<com.tencent.connect.common.AssistActivity> r2 = com.tencent.connect.common.AssistActivity.class
            r0.<init>(r1, r2)
            if (r7 == 0) goto L13
            r7 = 1
            java.lang.String r1 = "is_qq_mobile_share"
            r0.putExtra(r1, r7)
        L13:
            r3.a(r4, r0, r6, r5)
            r4.startActivityForResult(r0, r5)     // Catch: java.lang.Exception -> L1a
            goto L22
        L1a:
            r4 = move-exception
            java.lang.String r5 = "openSDK_LOG.BaseApi"
            java.lang.String r6 = "startAssistActivity exception"
            com.tencent.open.log.SLog.e(r5, r6, r4)
        L22:
            return
    }

    protected void a(android.app.Activity r2, android.content.Intent r3, int r4) {
            r1 = this;
            r0 = 0
            r1.a(r2, r3, r4, r0)
            return
    }

    protected void a(android.app.Activity r2, android.content.Intent r3, int r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r1 = this;
            java.lang.String r0 = "key_request_code"
            r3.putExtra(r0, r4)
            android.content.Intent r3 = r1.a(r2, r3, r5, r4)     // Catch: java.lang.Exception -> Ld
            r2.startActivityForResult(r3, r4)     // Catch: java.lang.Exception -> Ld
            goto L15
        Ld:
            r2 = move-exception
            java.lang.String r3 = "openSDK_LOG.BaseApi"
            java.lang.String r4 = "startAssitActivity exception"
            com.tencent.open.log.SLog.e(r3, r4, r2)
        L15:
            return
    }

    protected void a(android.app.Activity r7, android.os.Bundle r8, com.tencent.tauth.IUiListener r9) {
            r6 = this;
            java.lang.String r9 = "openSDK_LOG.BaseApi"
            java.lang.String r0 = "--handleDownloadLastestQQ"
            com.tencent.open.log.SLog.i(r9, r0)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "https://imgcache.qq.com/ptlogin/static/qzsjump.html?"
            r9.append(r0)
            java.lang.String r8 = com.tencent.open.utils.HttpUtils.encodeUrl(r8)
            r9.append(r8)
            java.lang.String r3 = r9.toString()
            com.tencent.open.TDialog r8 = new com.tencent.open.TDialog
            com.tencent.connect.auth.QQToken r5 = r6.c
            java.lang.String r2 = ""
            r4 = 0
            r0 = r8
            r1 = r7
            r0.<init>(r1, r2, r3, r4, r5)
            r8.show()
            return
    }

    protected void a(android.support.v4.app.Fragment r2, android.content.Intent r3, int r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r1 = this;
            java.lang.String r0 = "key_request_code"
            r3.putExtra(r0, r4)
            android.support.v4.app.FragmentActivity r0 = r2.getActivity()     // Catch: java.lang.Exception -> L11
            android.content.Intent r3 = r1.a(r0, r3, r5, r4)     // Catch: java.lang.Exception -> L11
            r2.startActivityForResult(r3, r4)     // Catch: java.lang.Exception -> L11
            goto L19
        L11:
            r2 = move-exception
            java.lang.String r3 = "openSDK_LOG.BaseApi"
            java.lang.String r4 = "startAssitActivity exception"
            com.tencent.open.log.SLog.e(r3, r4, r2)
        L19:
            return
    }

    protected void a(java.lang.StringBuilder r4, android.app.Activity r5) {
            r3 = this;
            java.lang.String r0 = "?"
            int r1 = r4.indexOf(r0)
            if (r1 >= 0) goto Lc
            r4.append(r0)
            goto L11
        Lc:
            java.lang.String r0 = "&"
            r4.append(r0)
        L11:
            java.lang.String r0 = "src_type"
            r4.append(r0)
            java.lang.String r0 = "="
            r4.append(r0)
            java.lang.String r0 = "app"
            r4.append(r0)
            com.tencent.connect.auth.QQToken r0 = r3.c
            java.lang.String r0 = r0.getAppId()
            com.tencent.connect.auth.QQToken r1 = r3.c
            java.lang.String r1 = r1.getOpenId()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L37
            java.lang.String r2 = "app_id"
            r3.a(r4, r2, r0)
        L37:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L46
            java.lang.String r0 = com.tencent.open.utils.m.k(r1)
            java.lang.String r1 = "open_id"
            r3.a(r4, r1, r0)
        L46:
            java.lang.String r5 = com.tencent.open.utils.m.a(r5)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L77
            int r0 = r5.length()
            r1 = 20
            if (r0 <= r1) goto L6e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r2 = 0
            java.lang.String r5 = r5.substring(r2, r1)
            r0.append(r5)
            java.lang.String r5 = "..."
            r0.append(r5)
            java.lang.String r5 = r0.toString()
        L6e:
            java.lang.String r5 = com.tencent.open.utils.m.k(r5)
            java.lang.String r0 = "app_name"
            r3.a(r4, r0, r5)
        L77:
            java.lang.String r5 = "3.5.14.lite"
            java.lang.String r5 = com.tencent.open.utils.m.k(r5)
            java.lang.String r0 = "sdk_version"
            r3.a(r4, r0, r5)
            return
    }

    protected void a(java.lang.StringBuilder r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = "&"
            r2.append(r0)
            r2.append(r3)
            java.lang.String r3 = "="
            r2.append(r3)
            java.lang.String r3 = com.tencent.open.utils.m.f(r4)
            r2.append(r3)
            return
    }

    protected android.content.Intent b(java.lang.String r3) {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.Context r1 = com.tencent.open.utils.g.a()
            boolean r1 = com.tencent.open.utils.m.c(r1)
            if (r1 == 0) goto L1f
            java.lang.String r1 = "com.tencent.minihd.qq"
            r0.setClassName(r1, r3)
            android.content.Context r1 = com.tencent.open.utils.g.a()
            boolean r1 = com.tencent.open.utils.k.a(r1, r0)
            if (r1 == 0) goto L1f
            return r0
        L1f:
            java.lang.String r1 = "com.tencent.mobileqq"
            r0.setClassName(r1, r3)
            android.content.Context r1 = com.tencent.open.utils.g.a()
            boolean r1 = com.tencent.open.utils.k.a(r1, r0)
            if (r1 == 0) goto L2f
            return r0
        L2f:
            java.lang.String r1 = "com.tencent.tim"
            r0.setClassName(r1, r3)
            android.content.Context r3 = com.tencent.open.utils.g.a()
            boolean r3 = com.tencent.open.utils.k.a(r3, r0)
            if (r3 == 0) goto L3f
            return r0
        L3f:
            r3 = 0
            return r3
    }

    protected android.os.Bundle b() {
            r5 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            com.tencent.connect.auth.QQToken r1 = r5.c
            java.lang.String r1 = r1.getAppId()
            java.lang.String r2 = "appid"
            r0.putString(r2, r1)
            com.tencent.connect.auth.QQToken r1 = r5.c
            boolean r1 = r1.isSessionValid()
            if (r1 == 0) goto L2a
            com.tencent.connect.auth.QQToken r1 = r5.c
            java.lang.String r1 = r1.getAccessToken()
            java.lang.String r2 = "keystr"
            r0.putString(r2, r1)
            java.lang.String r1 = "keytype"
            java.lang.String r2 = "0x80"
            r0.putString(r1, r2)
        L2a:
            com.tencent.connect.auth.QQToken r1 = r5.c
            java.lang.String r1 = r1.getOpenId()
            if (r1 == 0) goto L37
            java.lang.String r2 = "hopenid"
            r0.putString(r2, r1)
        L37:
            java.lang.String r1 = "platform"
            java.lang.String r2 = "androidqz"
            r0.putString(r1, r2)
            android.content.Context r1 = com.tencent.open.utils.g.a()
            r2 = 0
            java.lang.String r3 = "pfStore"
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r3, r2)
            boolean r2 = com.tencent.connect.common.BaseApi.isOEM
            java.lang.String r3 = "pf"
            if (r2 == 0) goto L80
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "desktop_m_qq-"
            r1.append(r2)
            java.lang.String r2 = com.tencent.connect.common.BaseApi.installChannel
            r1.append(r2)
            java.lang.String r2 = "-"
            r1.append(r2)
            java.lang.String r4 = "android"
            r1.append(r4)
            r1.append(r2)
            java.lang.String r4 = com.tencent.connect.common.BaseApi.registerChannel
            r1.append(r4)
            r1.append(r2)
            java.lang.String r2 = com.tencent.connect.common.BaseApi.businessId
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.putString(r3, r1)
            goto L8c
        L80:
            java.lang.String r2 = "openmobile_android"
            java.lang.String r1 = r1.getString(r3, r2)
            r0.putString(r3, r1)
            r0.putString(r3, r2)
        L8c:
            java.lang.String r1 = "sdkv"
            java.lang.String r2 = "3.5.14.lite"
            r0.putString(r1, r2)
            java.lang.String r1 = "sdkp"
            java.lang.String r2 = "a"
            r0.putString(r1, r2)
            return r0
    }

    protected android.content.Intent c() {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.Context r1 = com.tencent.open.utils.g.a()
            boolean r1 = com.tencent.open.utils.m.c(r1)
            java.lang.String r2 = "com.tencent.open.agent.AgentActivity"
            if (r1 == 0) goto L21
            java.lang.String r1 = "com.tencent.minihd.qq"
            r0.setClassName(r1, r2)
            android.content.Context r1 = com.tencent.open.utils.g.a()
            boolean r1 = com.tencent.open.utils.k.b(r1, r0)
            if (r1 == 0) goto L21
            return r0
        L21:
            java.lang.String r1 = "com.tencent.mobileqq"
            r0.setClassName(r1, r2)
            android.content.Context r1 = com.tencent.open.utils.g.a()
            boolean r1 = com.tencent.open.utils.k.b(r1, r0)
            if (r1 == 0) goto L31
            return r0
        L31:
            java.lang.String r1 = "com.tencent.tim"
            r0.setClassName(r1, r2)
            android.content.Context r1 = com.tencent.open.utils.g.a()
            boolean r1 = com.tencent.open.utils.k.b(r1, r0)
            if (r1 == 0) goto L41
            return r0
        L41:
            r0 = 0
            return r0
    }

    protected android.content.Intent c(java.lang.String r4) {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.Intent r4 = r3.b(r4)
            r1 = 0
            if (r4 != 0) goto Le
        Lc:
            r0 = r1
            goto L21
        Le:
            android.content.ComponentName r2 = r4.getComponent()
            if (r2 == 0) goto Lc
            android.content.ComponentName r4 = r4.getComponent()
            java.lang.String r4 = r4.getPackageName()
            java.lang.String r1 = "com.tencent.open.agent.AgentActivity"
            r0.setClassName(r4, r1)
        L21:
            return r0
    }

    public void releaseResource() {
            r0 = this;
            return
    }
}
