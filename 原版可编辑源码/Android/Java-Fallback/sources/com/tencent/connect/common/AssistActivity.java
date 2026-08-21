package com.tencent.connect.common;

public class AssistActivity extends android.app.Activity {
    public static final java.lang.String EXTRA_INTENT = "openSDK_LOG.AssistActivity.ExtraIntent";
    public static final java.lang.String KEY_EXTRA_PENDING_INTENT = "key_extra_pending_intent";
    public static final java.lang.String KEY_REQUEST_ORIENTATION = "key_request_orientation";
    protected boolean a;
    protected android.os.Handler b;
    private boolean c;
    private java.lang.String d;
    private com.tencent.connect.common.AssistActivity.QQStayReceiver e;
    private boolean f;



    private class QQStayReceiver extends android.content.BroadcastReceiver {
        final com.tencent.connect.common.AssistActivity a;

        private QQStayReceiver(com.tencent.connect.common.AssistActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        QQStayReceiver(com.tencent.connect.common.AssistActivity r1, com.tencent.connect.common.AssistActivity.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onReceive(android.content.Context r8, android.content.Intent r9) {
                r7 = this;
                java.lang.String r8 = "#"
                android.content.Intent r0 = new android.content.Intent
                r0.<init>()
                java.lang.String r1 = "key_action"
                java.lang.String r2 = "action_share"
                r0.putExtra(r1, r2)
                java.lang.String r1 = "uriData"
                android.os.Parcelable r9 = r9.getParcelableExtra(r1)     // Catch: java.lang.Exception -> L4e
                android.net.Uri r9 = (android.net.Uri) r9     // Catch: java.lang.Exception -> L4e
                java.lang.String r1 = r9.toString()     // Catch: java.lang.Exception -> L4e
                boolean r2 = r1.contains(r8)     // Catch: java.lang.Exception -> L4e
                if (r2 == 0) goto L21
                goto L23
            L21:
                java.lang.String r8 = "?"
            L23:
                int r8 = r1.indexOf(r8)     // Catch: java.lang.Exception -> L4e
                r2 = 1
                int r8 = r8 + r2
                java.lang.String r8 = r1.substring(r8)     // Catch: java.lang.Exception -> L4e
                java.lang.String r1 = "&"
                java.lang.String[] r8 = r8.split(r1)     // Catch: java.lang.Exception -> L4e
                int r1 = r8.length     // Catch: java.lang.Exception -> L4e
                r3 = 0
                r4 = 0
            L36:
                if (r4 >= r1) goto L4a
                r5 = r8[r4]     // Catch: java.lang.Exception -> L4e
                java.lang.String r6 = "="
                java.lang.String[] r5 = r5.split(r6)     // Catch: java.lang.Exception -> L4e
                r6 = r5[r3]     // Catch: java.lang.Exception -> L4e
                r5 = r5[r2]     // Catch: java.lang.Exception -> L4e
                r0.putExtra(r6, r5)     // Catch: java.lang.Exception -> L4e
                int r4 = r4 + 1
                goto L36
            L4a:
                r0.setData(r9)     // Catch: java.lang.Exception -> L4e
                goto L77
            L4e:
                r8 = move-exception
                java.lang.StringBuilder r9 = new java.lang.StringBuilder
                r9.<init>()
                java.lang.String r1 = "QQStayReceiver parse uri error : "
                r9.append(r1)
                java.lang.String r8 = r8.getMessage()
                r9.append(r8)
                java.lang.String r8 = r9.toString()
                java.lang.String r9 = "openSDK_LOG.AssistActivity"
                com.tencent.open.log.SLog.i(r9, r8)
                java.lang.String r8 = "result"
                java.lang.String r9 = "error"
                r0.putExtra(r8, r9)
                java.lang.String r8 = "response"
                java.lang.String r9 = "parse error."
                r0.putExtra(r8, r9)
            L77:
                com.tencent.connect.common.AssistActivity r8 = r7.a
                r9 = -1
                r8.setResult(r9, r0)
                return
        }
    }

    public AssistActivity() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            r1.a = r0
            com.tencent.connect.common.AssistActivity$1 r0 = new com.tencent.connect.common.AssistActivity$1
            r0.<init>(r1)
            r1.b = r0
            return
    }

    private void a(android.content.Intent r3, boolean r4) {
            r2 = this;
            if (r3 != 0) goto La
            java.lang.String r3 = "openSDK_LOG.AssistActivity"
            java.lang.String r4 = "reportStartActivitySuccess, but intent is null."
            com.tencent.open.log.SLog.d(r3, r4)
            return
        La:
            java.lang.String r0 = com.tencent.connect.common.Constants.KEY_PASS_REPORT_VIA_PARAM
            android.os.Bundle r0 = r3.getBundleExtra(r0)
            if (r0 == 0) goto L2c
            if (r4 == 0) goto L17
            java.lang.String r4 = "0"
            goto L19
        L17:
            java.lang.String r4 = "1"
        L19:
            com.tencent.open.utils.m.a(r0, r4)
            java.lang.String r4 = com.tencent.connect.common.Constants.KEY_PASS_REPORT_VIA_TIMELY
            r1 = 0
            boolean r3 = r3.getBooleanExtra(r4, r1)
            com.tencent.open.b.h r4 = com.tencent.open.b.h.a()
            java.lang.String r1 = r2.d
            r4.a(r0, r1, r3)
        L2c:
            return
    }

    private void a(android.os.Bundle r13) {
            r12 = this;
            java.lang.String r0 = "viaShareType"
            java.lang.String r8 = r13.getString(r0)
            java.lang.String r0 = "callbackAction"
            java.lang.String r0 = r13.getString(r0)
            java.lang.String r1 = "url"
            java.lang.String r1 = r13.getString(r1)
            java.lang.String r2 = "openId"
            java.lang.String r2 = r13.getString(r2)
            java.lang.String r3 = "appId"
            java.lang.String r3 = r13.getString(r3)
            java.lang.String r13 = "shareToQQ"
            boolean r13 = r13.equals(r0)
            java.lang.String r4 = ""
            if (r13 == 0) goto L2f
            java.lang.String r13 = "ANDROIDQQ.SHARETOQQ.XX"
            java.lang.String r4 = "10"
        L2c:
            r5 = r4
            r4 = r13
            goto L3d
        L2f:
            java.lang.String r13 = "shareToQzone"
            boolean r13 = r13.equals(r0)
            if (r13 == 0) goto L3c
            java.lang.String r13 = "ANDROIDQQ.SHARETOQZ.XX"
            java.lang.String r4 = "11"
            goto L2c
        L3c:
            r5 = r4
        L3d:
            boolean r13 = com.tencent.open.utils.m.a(r12, r1)
            if (r13 != 0) goto L6e
            com.tencent.connect.common.UIListenerManager r13 = com.tencent.connect.common.UIListenerManager.getInstance()
            com.tencent.tauth.IUiListener r13 = r13.getListnerWithAction(r0)
            if (r13 == 0) goto L59
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            r1 = -6
            r6 = 0
            java.lang.String r7 = "打开浏览器失败!"
            r0.<init>(r1, r7, r6)
            r13.onError(r0)
        L59:
            com.tencent.open.b.e r1 = com.tencent.open.b.e.a()
            java.lang.String r6 = "3"
            java.lang.String r7 = "1"
            java.lang.String r9 = "0"
            java.lang.String r10 = "2"
            java.lang.String r11 = "0"
            r1.a(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r12.finish()
            goto L7f
        L6e:
            com.tencent.open.b.e r1 = com.tencent.open.b.e.a()
            java.lang.String r6 = "3"
            java.lang.String r7 = "0"
            java.lang.String r9 = "0"
            java.lang.String r10 = "2"
            java.lang.String r11 = "0"
            r1.a(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
        L7f:
            android.content.Intent r13 = r12.getIntent()
            java.lang.String r0 = "shareH5"
            r13.removeExtra(r0)
            return
    }

    public static android.content.Intent getAssistActivityIntent(android.content.Context r2) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.tencent.connect.common.AssistActivity> r1 = com.tencent.connect.common.AssistActivity.class
            r0.<init>(r2, r1)
            return r0
    }

    @Override
    protected void onActivityResult(int r3, int r4, android.content.Intent r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "--onActivityResult--requestCode: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = " | resultCode: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = "data = null ? "
            r0.append(r1)
            if (r5 != 0) goto L1e
            r1 = 1
            goto L1f
        L1e:
            r1 = 0
        L1f:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.AssistActivity"
            com.tencent.open.log.SLog.i(r1, r0)
            super.onActivityResult(r3, r4, r5)
            if (r3 != 0) goto L31
            return
        L31:
            if (r5 == 0) goto L3a
            java.lang.String r4 = "key_action"
            java.lang.String r0 = "action_login"
            r5.putExtra(r4, r0)
        L3a:
            r2.setResultData(r3, r5)
            boolean r3 = r2.f
            if (r3 != 0) goto L4a
            java.lang.String r3 = "onActivityResult finish immediate"
            com.tencent.open.log.SLog.i(r1, r3)
            r2.finish()
            goto L5d
        L4a:
            android.os.Handler r3 = new android.os.Handler
            android.os.Looper r4 = android.os.Looper.getMainLooper()
            r3.<init>(r4)
            com.tencent.connect.common.AssistActivity$2 r4 = new com.tencent.connect.common.AssistActivity$2
            r4.<init>(r2)
            r0 = 200(0xc8, double:9.9E-322)
            r3.postDelayed(r4, r0)
        L5d:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r15) {
            r14 = this;
            java.lang.String r0 = "--onCreate--startActException"
            android.view.Window r1 = r14.getWindow()
            r2 = 67108864(0x4000000, float:1.5046328E-36)
            r1.addFlags(r2)
            r1 = 1
            r14.requestWindowFeature(r1)
            super.onCreate(r15)
            android.content.Intent r2 = r14.getIntent()
            java.lang.String r3 = com.tencent.connect.common.Constants.KEY_RESTORE_LANDSCAPE
            r4 = 0
            boolean r2 = r2.getBooleanExtra(r3, r4)
            r14.f = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "--onCreate-- mRestoreLandscape="
            r2.append(r3)
            boolean r3 = r14.f
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "openSDK_LOG.AssistActivity"
            com.tencent.open.log.SLog.i(r3, r2)
            android.content.Intent r2 = r14.getIntent()
            if (r2 != 0) goto L45
            java.lang.String r2 = "-->onCreate--getIntent() returns null"
            com.tencent.open.log.SLog.e(r3, r2)
            r14.finish()
        L45:
            android.content.Intent r2 = r14.getIntent()
            java.lang.String r5 = "openSDK_LOG.AssistActivity.ExtraIntent"
            android.os.Parcelable r2 = r2.getParcelableExtra(r5)
            android.content.Intent r2 = (android.content.Intent) r2
            if (r2 != 0) goto L55
            r5 = 0
            goto L5b
        L55:
            java.lang.String r5 = "key_request_code"
            int r5 = r2.getIntExtra(r5, r4)
        L5b:
            java.lang.String r13 = ""
            if (r2 != 0) goto L61
            r6 = r13
            goto L67
        L61:
            java.lang.String r6 = "appid"
            java.lang.String r6 = r2.getStringExtra(r6)
        L67:
            r14.d = r6
            android.content.Intent r6 = r14.getIntent()
            java.lang.String r7 = "h5_share_data"
            android.os.Bundle r6 = r6.getBundleExtra(r7)
            if (r15 == 0) goto L85
            java.lang.String r7 = "RESTART_FLAG"
            boolean r7 = r15.getBoolean(r7)
            r14.c = r7
            java.lang.String r7 = "RESUME_FLAG"
            boolean r15 = r15.getBoolean(r7, r4)
            r14.a = r15
        L85:
            boolean r15 = r14.c
            if (r15 != 0) goto L1ae
            if (r6 != 0) goto L1a5
            android.content.Intent r15 = r14.getIntent()
            java.lang.String r6 = "key_extra_pending_intent"
            android.os.Parcelable r15 = r15.getParcelableExtra(r6)
            android.app.PendingIntent r15 = (android.app.PendingIntent) r15
            if (r2 == 0) goto L17c
            if (r15 == 0) goto L17c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "--onCreate--activityIntent not null, will start activity, reqcode = "
            r6.append(r7)
            r6.append(r5)
            java.lang.String r6 = r6.toString()
            com.tencent.open.log.SLog.i(r3, r6)
            android.net.Uri r6 = r2.getData()     // Catch: java.lang.Exception -> Le1
            java.lang.String r7 = "share_id"
            java.lang.String r6 = r6.getQueryParameter(r7)     // Catch: java.lang.Exception -> Le1
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le1
            r7.<init>()     // Catch: java.lang.Exception -> Le1
            java.lang.String r8 = "com.tencent.tauth.opensdk.SHARE_SUCCESS_AND_STAY_QQ_"
            r7.append(r8)     // Catch: java.lang.Exception -> Le1
            r7.append(r6)     // Catch: java.lang.Exception -> Le1
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Exception -> Le1
            android.content.IntentFilter r7 = new android.content.IntentFilter     // Catch: java.lang.Exception -> Le1
            r7.<init>(r6)     // Catch: java.lang.Exception -> Le1
            com.tencent.connect.common.AssistActivity$QQStayReceiver r6 = r14.e     // Catch: java.lang.Exception -> Le1
            if (r6 != 0) goto Ldb
            com.tencent.connect.common.AssistActivity$QQStayReceiver r6 = new com.tencent.connect.common.AssistActivity$QQStayReceiver     // Catch: java.lang.Exception -> Le1
            r8 = 0
            r6.<init>(r14, r8)     // Catch: java.lang.Exception -> Le1
            r14.e = r6     // Catch: java.lang.Exception -> Le1
        Ldb:
            com.tencent.connect.common.AssistActivity$QQStayReceiver r6 = r14.e     // Catch: java.lang.Exception -> Le1
            r14.registerReceiver(r6, r7)     // Catch: java.lang.Exception -> Le1
            goto Lfa
        Le1:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "registerReceiver exception : "
            r7.append(r8)
            java.lang.String r6 = r6.getMessage()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            com.tencent.open.log.SLog.i(r3, r6)
        Lfa:
            android.content.IntentSender r8 = r15.getIntentSender()     // Catch: java.lang.Throwable -> L11e java.lang.Exception -> L121 android.content.ActivityNotFoundException -> L144
            java.lang.String r15 = "for_result"
            boolean r15 = r2.getBooleanExtra(r15, r1)     // Catch: java.lang.Throwable -> L11e java.lang.Exception -> L121 android.content.ActivityNotFoundException -> L144
            if (r15 == 0) goto L111
            r9 = 0
            r10 = 0
            r11 = 0
            r12 = 0
            r6 = r14
            r7 = r8
            r8 = r5
            r6.startIntentSenderForResult(r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L11e java.lang.Exception -> L121 android.content.ActivityNotFoundException -> L144
            goto L119
        L111:
            r9 = 0
            r10 = 0
            r11 = 0
            r12 = 0
            r7 = r14
            r7.startIntentSender(r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L11e java.lang.Exception -> L121 android.content.ActivityNotFoundException -> L144
        L119:
            r14.a(r2, r1)     // Catch: java.lang.Throwable -> L11e java.lang.Exception -> L121 android.content.ActivityNotFoundException -> L144
            goto L1b3
        L11e:
            r15 = move-exception
            r1 = 0
            goto L173
        L121:
            r15 = move-exception
            java.lang.String r15 = r15.getMessage()     // Catch: java.lang.Throwable -> L142
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L142
            r2.<init>()     // Catch: java.lang.Throwable -> L142
            java.lang.String r4 = "--onCreate--startActivity exception: "
            r2.append(r4)     // Catch: java.lang.Throwable -> L142
            r2.append(r15)     // Catch: java.lang.Throwable -> L142
            java.lang.String r15 = r2.toString()     // Catch: java.lang.Throwable -> L142
            com.tencent.open.log.SLog.e(r3, r15)     // Catch: java.lang.Throwable -> L142
            com.tencent.open.log.SLog.e(r3, r0)
            r14.finish()
            goto L1b3
        L142:
            r15 = move-exception
            goto L173
        L144:
            r15 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11e
            r1.<init>()     // Catch: java.lang.Throwable -> L11e
            java.lang.String r6 = "--onCreate--startActivity exception, ActivityNotFoundException : "
            r1.append(r6)     // Catch: java.lang.Throwable -> L11e
            r1.append(r15)     // Catch: java.lang.Throwable -> L11e
            java.lang.String r15 = r1.toString()     // Catch: java.lang.Throwable -> L11e
            com.tencent.open.log.SLog.e(r3, r15)     // Catch: java.lang.Throwable -> L11e
            com.tencent.connect.common.UIListenerManager r15 = com.tencent.connect.common.UIListenerManager.getInstance()     // Catch: java.lang.Throwable -> L11e
            com.tencent.tauth.IUiListener r15 = r15.getListnerWithRequestCode(r5)     // Catch: java.lang.Throwable -> L11e
            if (r15 == 0) goto L16f
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError     // Catch: java.lang.Throwable -> L11e
            r5 = -20
            java.lang.String r6 = "手Q版本过低，请下载安装最新版手Q"
            r1.<init>(r5, r6, r13)     // Catch: java.lang.Throwable -> L11e
            r15.onError(r1)     // Catch: java.lang.Throwable -> L11e
        L16f:
            r14.a(r2, r4)     // Catch: java.lang.Throwable -> L11e
            goto L1b3
        L173:
            if (r1 == 0) goto L17b
            com.tencent.open.log.SLog.e(r3, r0)
            r14.finish()
        L17b:
            throw r15
        L17c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r5 = "--onCreate--activityIntent or pendingIntent is null. activityIntent is null? "
            r0.append(r5)
            if (r2 != 0) goto L18a
            r2 = 1
            goto L18b
        L18a:
            r2 = 0
        L18b:
            r0.append(r2)
            java.lang.String r2 = ", pendingIntent is null? "
            r0.append(r2)
            if (r15 != 0) goto L196
            goto L197
        L196:
            r1 = 0
        L197:
            r0.append(r1)
            java.lang.String r15 = r0.toString()
            com.tencent.open.log.SLog.e(r3, r15)
            r14.finish()
            goto L1b3
        L1a5:
            java.lang.String r15 = "--onCreate--h5 bundle not null, will open browser"
            com.tencent.open.log.SLog.w(r3, r15)
            r14.a(r6)
            goto L1b3
        L1ae:
            java.lang.String r15 = "is restart"
            com.tencent.open.log.SLog.d(r3, r15)
        L1b3:
            return
    }

    @Override
    protected void onDestroy() {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.AssistActivity"
            java.lang.String r1 = "-->onDestroy"
            com.tencent.open.log.SLog.i(r0, r1)
            super.onDestroy()
            com.tencent.connect.common.AssistActivity$QQStayReceiver r0 = r2.e
            if (r0 == 0) goto L11
            r2.unregisterReceiver(r0)
        L11:
            return
    }

    @Override
    protected void onNewIntent(android.content.Intent r9) {
            r8 = this;
            java.lang.String r0 = "openSDK_LOG.AssistActivity"
            java.lang.String r1 = "--onNewIntent"
            com.tencent.open.log.SLog.i(r0, r1)
            super.onNewIntent(r9)
            r1 = -1
            java.lang.String r2 = "key_request_code"
            int r2 = r9.getIntExtra(r2, r1)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "--onNewIntent callbackRequestCode= "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.tencent.open.log.SLog.i(r0, r3)
            r3 = 1
            r4 = 0
            java.lang.String r5 = "stay_back_stack"
            java.lang.String r6 = "key_action"
            r7 = 10108(0x277c, float:1.4164E-41)
            if (r2 != r7) goto L4b
            java.lang.String r0 = "action_request_avatar"
            r9.putExtra(r6, r0)
            boolean r0 = r9.getBooleanExtra(r5, r4)
            if (r0 == 0) goto L3d
            r8.moveTaskToBack(r3)
        L3d:
            r8.setResult(r1, r9)
            boolean r9 = r8.isFinishing()
            if (r9 != 0) goto L117
            r8.finish()
            goto L117
        L4b:
            r7 = 10109(0x277d, float:1.4166E-41)
            if (r2 != r7) goto L6b
            java.lang.String r0 = "action_request_set_emotion"
            r9.putExtra(r6, r0)
            boolean r0 = r9.getBooleanExtra(r5, r4)
            if (r0 == 0) goto L5d
            r8.moveTaskToBack(r3)
        L5d:
            r8.setResult(r1, r9)
            boolean r9 = r8.isFinishing()
            if (r9 != 0) goto L117
            r8.finish()
            goto L117
        L6b:
            r7 = 10110(0x277e, float:1.4167E-41)
            if (r2 != r7) goto L8b
            java.lang.String r0 = "action_request_dynamic_avatar"
            r9.putExtra(r6, r0)
            boolean r0 = r9.getBooleanExtra(r5, r4)
            if (r0 == 0) goto L7d
            r8.moveTaskToBack(r3)
        L7d:
            r8.setResult(r1, r9)
            boolean r9 = r8.isFinishing()
            if (r9 != 0) goto L117
            r8.finish()
            goto L117
        L8b:
            r7 = 10111(0x277f, float:1.4169E-41)
            if (r2 != r7) goto Laa
            java.lang.String r0 = "joinGroup"
            r9.putExtra(r6, r0)
            boolean r0 = r9.getBooleanExtra(r5, r4)
            if (r0 == 0) goto L9d
            r8.moveTaskToBack(r3)
        L9d:
            r8.setResult(r1, r9)
            boolean r9 = r8.isFinishing()
            if (r9 != 0) goto L117
            r8.finish()
            goto L117
        Laa:
            r7 = 10112(0x2780, float:1.417E-41)
            if (r2 != r7) goto Lc9
            java.lang.String r0 = "bindGroup"
            r9.putExtra(r6, r0)
            boolean r0 = r9.getBooleanExtra(r5, r4)
            if (r0 == 0) goto Lbc
            r8.moveTaskToBack(r3)
        Lbc:
            r8.setResult(r1, r9)
            boolean r9 = r8.isFinishing()
            if (r9 != 0) goto L117
            r8.finish()
            goto L117
        Lc9:
            r3 = 10113(0x2781, float:1.4171E-41)
            java.lang.String r4 = "action"
            java.lang.String r5 = "--onNewIntent--activity not finished, finish now"
            if (r2 != r3) goto Le8
            java.lang.String r2 = r9.getStringExtra(r4)
            r9.putExtra(r6, r2)
            r8.setResult(r1, r9)
            boolean r9 = r8.isFinishing()
            if (r9 != 0) goto L117
            com.tencent.open.log.SLog.i(r0, r5)
            r8.finish()
            goto L117
        Le8:
            r3 = 10114(0x2782, float:1.4173E-41)
            if (r2 == r3) goto L101
            java.lang.String r2 = "action_share"
            r9.putExtra(r6, r2)
            r8.setResult(r1, r9)
            boolean r9 = r8.isFinishing()
            if (r9 != 0) goto L117
            com.tencent.open.log.SLog.i(r0, r5)
            r8.finish()
            goto L117
        L101:
            java.lang.String r2 = r9.getStringExtra(r4)
            r9.putExtra(r6, r2)
            r8.setResult(r1, r9)
            boolean r9 = r8.isFinishing()
            if (r9 != 0) goto L117
            com.tencent.open.log.SLog.i(r0, r5)
            r8.finish()
        L117:
            return
    }

    @Override
    protected void onPause() {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.AssistActivity"
            java.lang.String r1 = "-->onPause"
            com.tencent.open.log.SLog.i(r0, r1)
            android.os.Handler r0 = r2.b
            r1 = 0
            r0.removeMessages(r1)
            super.onPause()
            return
    }

    @Override
    protected void onResume() {
            r3 = this;
            java.lang.String r0 = "openSDK_LOG.AssistActivity"
            java.lang.String r1 = "-->onResume"
            com.tencent.open.log.SLog.i(r0, r1)
            super.onResume()
            android.content.Intent r0 = r3.getIntent()
            r1 = 0
            java.lang.String r2 = "is_login"
            boolean r2 = r0.getBooleanExtra(r2, r1)
            if (r2 == 0) goto L18
            return
        L18:
            java.lang.String r2 = "is_qq_mobile_share"
            boolean r0 = r0.getBooleanExtra(r2, r1)
            if (r0 != 0) goto L2d
            boolean r0 = r3.c
            if (r0 == 0) goto L2d
            boolean r0 = r3.isFinishing()
            if (r0 != 0) goto L2d
            r3.finish()
        L2d:
            boolean r0 = r3.a
            if (r0 == 0) goto L3d
            android.os.Handler r0 = r3.b
            android.os.Message r0 = r0.obtainMessage(r1)
            android.os.Handler r1 = r3.b
            r1.sendMessage(r0)
            return
        L3d:
            r0 = 1
            r3.a = r0
            return
    }

    @Override
    protected void onSaveInstanceState(android.os.Bundle r3) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.AssistActivity"
            java.lang.String r1 = "--onSaveInstanceState--"
            com.tencent.open.log.SLog.i(r0, r1)
            java.lang.String r0 = "RESTART_FLAG"
            r1 = 1
            r3.putBoolean(r0, r1)
            boolean r0 = r2.a
            java.lang.String r1 = "RESUME_FLAG"
            r3.putBoolean(r1, r0)
            super.onSaveInstanceState(r3)
            return
    }

    @Override
    protected void onStart() {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.AssistActivity"
            java.lang.String r1 = "-->onStart"
            com.tencent.open.log.SLog.i(r0, r1)
            super.onStart()
            return
    }

    @Override
    protected void onStop() {
            r5 = this;
            java.lang.String r0 = "openSDK_LOG.AssistActivity"
            java.lang.String r1 = "-->onStop"
            com.tencent.open.log.SLog.i(r0, r1)
            super.onStop()
            boolean r1 = com.tencent.tauth.Tencent.disableResetOrientation
            if (r1 != 0) goto L39
            android.content.Intent r1 = r5.getIntent()     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = "key_request_orientation"
            r3 = -1
            int r1 = r1.getIntExtra(r2, r3)     // Catch: java.lang.Throwable -> L33
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L33
            r2.<init>()     // Catch: java.lang.Throwable -> L33
            java.lang.String r4 = "getRequestedOrientation= "
            r2.append(r4)     // Catch: java.lang.Throwable -> L33
            r2.append(r1)     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L33
            com.tencent.open.log.SLog.i(r0, r2)     // Catch: java.lang.Throwable -> L33
            if (r1 == r3) goto L39
            r5.setRequestedOrientation(r1)     // Catch: java.lang.Throwable -> L33
            goto L39
        L33:
            r1 = move-exception
            java.lang.String r2 = "reset requestedOrientation catch exception"
            com.tencent.open.log.SLog.e(r0, r2, r1)
        L39:
            return
    }

    public void setResultData(int r12, android.content.Intent r13) {
            r11 = this;
            r0 = 0
            java.lang.String r1 = "openSDK_LOG.AssistActivity"
            if (r13 != 0) goto L25
            java.lang.String r13 = "--setResultData--intent is null, setResult ACTIVITY_CANCEL"
            com.tencent.open.log.SLog.w(r1, r13)
            r11.setResult(r0)
            r13 = 11101(0x2b5d, float:1.5556E-41)
            if (r12 != r13) goto L24
            com.tencent.open.b.e r0 = com.tencent.open.b.e.a()
            java.lang.String r2 = r11.d
            java.lang.String r1 = ""
            java.lang.String r3 = "2"
            java.lang.String r4 = "1"
            java.lang.String r5 = "7"
            java.lang.String r6 = "2"
            r0.a(r1, r2, r3, r4, r5, r6)
        L24:
            return
        L25:
            java.lang.String r12 = "key_response"
            java.lang.String r12 = r13.getStringExtra(r12)     // Catch: java.lang.Exception -> Lb4
            java.lang.String r2 = "--setResultDataForLogin-- "
            com.tencent.open.log.SLog.d(r1, r2)     // Catch: java.lang.Exception -> Lb4
            boolean r2 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Exception -> Lb4
            r3 = -1
            if (r2 != 0) goto Lab
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lb4
            r2.<init>(r12)     // Catch: java.lang.Exception -> Lb4
            java.lang.String r12 = "openid"
            java.lang.String r5 = r2.optString(r12)     // Catch: java.lang.Exception -> Lb4
            java.lang.String r12 = "access_token"
            java.lang.String r12 = r2.optString(r12)     // Catch: java.lang.Exception -> Lb4
            java.lang.String r4 = "proxy_code"
            java.lang.String r4 = r2.optString(r4)     // Catch: java.lang.Exception -> Lb4
            java.lang.String r6 = "proxy_expires_in"
            long r6 = r2.optLong(r6)     // Catch: java.lang.Exception -> Lb4
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> Lb4
            if (r2 != 0) goto L7a
            boolean r12 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Exception -> Lb4
            if (r12 != 0) goto L7a
            java.lang.String r12 = "--setResultData--openid and token not empty, setResult ACTIVITY_OK"
            com.tencent.open.log.SLog.i(r1, r12)     // Catch: java.lang.Exception -> Lb4
            r11.setResult(r3, r13)     // Catch: java.lang.Exception -> Lb4
            com.tencent.open.b.e r4 = com.tencent.open.b.e.a()     // Catch: java.lang.Exception -> Lb4
            java.lang.String r6 = r11.d     // Catch: java.lang.Exception -> Lb4
            java.lang.String r7 = "2"
            java.lang.String r8 = "1"
            java.lang.String r9 = "7"
            java.lang.String r10 = "0"
            r4.a(r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> Lb4
            goto Lbd
        L7a:
            boolean r12 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lb4
            if (r12 != 0) goto L8f
            r4 = 0
            int r12 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r12 == 0) goto L8f
            java.lang.String r12 = "--setResultData--proxy_code and proxy_expires_in are valid"
            com.tencent.open.log.SLog.i(r1, r12)     // Catch: java.lang.Exception -> Lb4
            r11.setResult(r3, r13)     // Catch: java.lang.Exception -> Lb4
            goto Lbd
        L8f:
            java.lang.String r12 = "--setResultData--openid or token is empty, setResult ACTIVITY_CANCEL"
            com.tencent.open.log.SLog.w(r1, r12)     // Catch: java.lang.Exception -> Lb4
            r11.setResult(r0, r13)     // Catch: java.lang.Exception -> Lb4
            com.tencent.open.b.e r2 = com.tencent.open.b.e.a()     // Catch: java.lang.Exception -> Lb4
            java.lang.String r3 = ""
            java.lang.String r4 = r11.d     // Catch: java.lang.Exception -> Lb4
            java.lang.String r5 = "2"
            java.lang.String r6 = "1"
            java.lang.String r7 = "7"
            java.lang.String r8 = "1"
            r2.a(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> Lb4
            goto Lbd
        Lab:
            java.lang.String r12 = "--setResultData--response is empty, setResult ACTIVITY_OK"
            com.tencent.open.log.SLog.w(r1, r12)     // Catch: java.lang.Exception -> Lb4
            r11.setResult(r3, r13)     // Catch: java.lang.Exception -> Lb4
            goto Lbd
        Lb4:
            r12 = move-exception
            java.lang.String r13 = "--setResultData--parse response failed"
            com.tencent.open.log.SLog.e(r1, r13)
            r12.printStackTrace()
        Lbd:
            return
    }
}
