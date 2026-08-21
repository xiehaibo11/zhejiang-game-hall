package com.tencent.tauth;

public class AuthActivity extends android.app.Activity {
    public static final java.lang.String ACTION_SHARE_PRIZE = "sharePrize";
    private static int a;
    private java.util.Map<java.lang.String, com.tencent.tauth.AuthActivity.ActionHandler> b;


    interface ActionHandler {
        void handleAction(android.app.Activity r1, android.os.Bundle r2);
    }

    static {
            return
    }

    public AuthActivity() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            return
    }

    private void a() {
            r3 = this;
            java.util.Map<java.lang.String, com.tencent.tauth.AuthActivity$ActionHandler> r0 = r3.b
            com.tencent.tauth.AuthActivity$1 r1 = new com.tencent.tauth.AuthActivity$1
            r1.<init>(r3)
            java.lang.String r2 = "action_common_channel"
            r0.put(r2, r1)
            return
    }

    private void a(android.net.Uri r10) {
            r9 = this;
            java.lang.String r0 = "activityid"
            java.lang.String r1 = "openSDK_LOG.AuthActivity"
            java.lang.String r2 = "-->handleActionUri--start"
            com.tencent.open.log.SLog.i(r1, r2)
            if (r10 == 0) goto L255
            java.lang.String r2 = r10.toString()
            if (r2 == 0) goto L255
            java.lang.String r2 = r10.toString()
            java.lang.String r3 = ""
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L1f
            goto L255
        L1f:
            java.lang.String r10 = r10.toString()
            java.lang.String r2 = "#"
            int r2 = r10.indexOf(r2)
            r4 = 1
            int r2 = r2 + r4
            java.lang.String r10 = r10.substring(r2)
            android.os.Bundle r10 = com.tencent.open.utils.m.a(r10)
            if (r10 != 0) goto L3e
            java.lang.String r10 = "-->handleActionUri, bundle is null"
            com.tencent.open.log.SLog.w(r1, r10)
            r9.finish()
            return
        L3e:
            java.lang.String r2 = "action"
            java.lang.String r2 = r10.getString(r2)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "-->handleActionUri, action: "
            r5.append(r6)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            com.tencent.open.log.SLog.i(r1, r5)
            if (r2 != 0) goto L5f
            r9.finish()
            goto L254
        L5f:
            java.lang.String r5 = "shareToQQ"
            boolean r5 = r2.equals(r5)
            java.lang.String r6 = "shareToQzone"
            r7 = 0
            r8 = 603979776(0x24000000, float:2.7755576E-17)
            if (r5 != 0) goto L218
            boolean r5 = r2.equals(r6)
            if (r5 != 0) goto L218
            java.lang.String r5 = "sendToMyComputer"
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L218
            java.lang.String r5 = "shareToTroopBar"
            boolean r5 = r2.equals(r5)
            if (r5 == 0) goto L84
            goto L218
        L84:
            java.lang.String r5 = "addToQQFavorites"
            boolean r5 = r2.equals(r5)
            if (r5 == 0) goto Lb2
            android.content.Intent r0 = r9.getIntent()
            r0.putExtras(r10)
            java.lang.String r10 = "key_action"
            java.lang.String r1 = "action_share"
            r0.putExtra(r10, r1)
            com.tencent.connect.common.UIListenerManager r10 = com.tencent.connect.common.UIListenerManager.getInstance()
            com.tencent.tauth.IUiListener r10 = r10.getListnerWithAction(r2)
            if (r10 == 0) goto Lad
            com.tencent.connect.common.UIListenerManager r1 = com.tencent.connect.common.UIListenerManager.getInstance()
            com.tencent.tauth.IUiListener r10 = (com.tencent.tauth.IUiListener) r10
            r1.handleDataToListener(r0, r10)
        Lad:
            r9.finish()
            goto L254
        Lb2:
            java.lang.String r5 = "sharePrize"
            boolean r6 = r2.equals(r5)
            if (r6 == 0) goto Lf7
            android.content.pm.PackageManager r2 = r9.getPackageManager()
            java.lang.String r6 = r9.getPackageName()
            android.content.Intent r2 = r2.getLaunchIntentForPackage(r6)
            java.lang.String r6 = "response"
            java.lang.String r10 = r10.getString(r6)
            org.json.JSONObject r10 = com.tencent.open.utils.m.d(r10)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r3 = r10.getString(r0)     // Catch: java.lang.Exception -> Ld5
            goto Ldb
        Ld5:
            r10 = move-exception
            java.lang.String r6 = "sharePrize parseJson has exception."
            com.tencent.open.log.SLog.e(r1, r6, r10)
        Ldb:
            boolean r10 = android.text.TextUtils.isEmpty(r3)
            if (r10 != 0) goto Lef
            r2.putExtra(r5, r4)
            android.os.Bundle r10 = new android.os.Bundle
            r10.<init>()
            r10.putString(r0, r3)
            r2.putExtras(r10)
        Lef:
            r9.startActivity(r2)
            r9.finish()
            goto L254
        Lf7:
            java.lang.String r0 = "sdkSetAvatar"
            boolean r0 = r2.equals(r0)
            java.lang.String r3 = "key_request_code"
            java.lang.String r4 = "stay_back_stack"
            if (r0 == 0) goto L128
            android.content.Intent r0 = r9.getIntent()
            boolean r0 = r0.getBooleanExtra(r4, r7)
            android.content.Intent r1 = new android.content.Intent
            java.lang.Class<com.tencent.connect.common.AssistActivity> r2 = com.tencent.connect.common.AssistActivity.class
            r1.<init>(r9, r2)
            r2 = 10108(0x277c, float:1.4164E-41)
            r1.putExtra(r3, r2)
            r1.putExtra(r4, r0)
            r1.putExtras(r10)
            r1.setFlags(r8)
            r9.startActivity(r1)
            r9.finish()
            goto L254
        L128:
            java.lang.String r0 = "sdkSetDynamicAvatar"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L155
            android.content.Intent r0 = r9.getIntent()
            boolean r0 = r0.getBooleanExtra(r4, r7)
            android.content.Intent r1 = new android.content.Intent
            java.lang.Class<com.tencent.connect.common.AssistActivity> r2 = com.tencent.connect.common.AssistActivity.class
            r1.<init>(r9, r2)
            r2 = 10110(0x277e, float:1.4167E-41)
            r1.putExtra(r3, r2)
            r1.putExtra(r4, r0)
            r1.putExtras(r10)
            r1.setFlags(r8)
            r9.startActivity(r1)
            r9.finish()
            goto L254
        L155:
            java.lang.String r0 = "sdkSetEmotion"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L182
            android.content.Intent r0 = r9.getIntent()
            boolean r0 = r0.getBooleanExtra(r4, r7)
            android.content.Intent r1 = new android.content.Intent
            java.lang.Class<com.tencent.connect.common.AssistActivity> r2 = com.tencent.connect.common.AssistActivity.class
            r1.<init>(r9, r2)
            r2 = 10109(0x277d, float:1.4166E-41)
            r1.putExtra(r3, r2)
            r1.putExtra(r4, r0)
            r1.putExtras(r10)
            r1.setFlags(r8)
            r9.startActivity(r1)
            r9.finish()
            goto L254
        L182:
            java.lang.String r0 = "bindGroup"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L1b4
            java.lang.String r0 = "-->handleActionUri--bind group callback."
            com.tencent.open.log.SLog.i(r1, r0)
            android.content.Intent r0 = r9.getIntent()
            boolean r0 = r0.getBooleanExtra(r4, r7)
            android.content.Intent r1 = new android.content.Intent
            java.lang.Class<com.tencent.connect.common.AssistActivity> r2 = com.tencent.connect.common.AssistActivity.class
            r1.<init>(r9, r2)
            r2 = 10112(0x2780, float:1.417E-41)
            r1.putExtra(r3, r2)
            r1.putExtra(r4, r0)
            r1.putExtras(r10)
            r1.setFlags(r8)
            r9.startActivity(r1)
            r9.finish()
            goto L254
        L1b4:
            java.lang.String r0 = "joinGroup"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L1e5
            java.lang.String r0 = "-->handleActionUri--join group callback. "
            com.tencent.open.log.SLog.i(r1, r0)
            android.content.Intent r0 = r9.getIntent()
            boolean r0 = r0.getBooleanExtra(r4, r7)
            android.content.Intent r1 = new android.content.Intent
            java.lang.Class<com.tencent.connect.common.AssistActivity> r2 = com.tencent.connect.common.AssistActivity.class
            r1.<init>(r9, r2)
            r2 = 10111(0x277f, float:1.4169E-41)
            r1.putExtra(r3, r2)
            r1.putExtra(r4, r0)
            r1.putExtras(r10)
            r1.setFlags(r8)
            r9.startActivity(r1)
            r9.finish()
            goto L254
        L1e5:
            java.lang.String r0 = "guildOpen"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L206
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.tencent.connect.common.AssistActivity> r1 = com.tencent.connect.common.AssistActivity.class
            r0.<init>(r9, r1)
            r0.putExtras(r10)
            r10 = 10113(0x2781, float:1.4171E-41)
            r0.putExtra(r3, r10)
            r0.setFlags(r8)
            r9.startActivity(r0)
            r9.finish()
            goto L254
        L206:
            java.util.Map<java.lang.String, com.tencent.tauth.AuthActivity$ActionHandler> r0 = r9.b
            java.lang.Object r0 = r0.get(r2)
            com.tencent.tauth.AuthActivity$ActionHandler r0 = (com.tencent.tauth.AuthActivity.ActionHandler) r0
            if (r0 == 0) goto L214
            r0.handleAction(r9, r10)
            return
        L214:
            r9.finish()
            goto L254
        L218:
            boolean r0 = r2.equals(r6)
            if (r0 == 0) goto L23c
            java.lang.String r0 = "com.tencent.mobileqq"
            java.lang.String r0 = com.tencent.open.utils.k.a(r9, r0)
            if (r0 == 0) goto L23c
            java.lang.String r0 = "5.2.0"
            int r0 = com.tencent.open.utils.k.c(r9, r0)
            if (r0 >= 0) goto L23c
            int r0 = com.tencent.tauth.AuthActivity.a
            int r0 = r0 + r4
            com.tencent.tauth.AuthActivity.a = r0
            r2 = 2
            if (r0 != r2) goto L23c
            com.tencent.tauth.AuthActivity.a = r7
            r9.finish()
            return
        L23c:
            java.lang.String r0 = "-->handleActionUri, most share action, start assistactivity"
            com.tencent.open.log.SLog.i(r1, r0)
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.tencent.connect.common.AssistActivity> r1 = com.tencent.connect.common.AssistActivity.class
            r0.<init>(r9, r1)
            r0.putExtras(r10)
            r0.setFlags(r8)
            r9.startActivity(r0)
            r9.finish()
        L254:
            return
        L255:
            java.lang.String r10 = "-->handleActionUri, uri invalid"
            com.tencent.open.log.SLog.w(r1, r10)
            r9.finish()
            return
    }

    @Override
    public void finish() {
            r3 = this;
            super.finish()     // Catch: java.lang.Exception -> L4
            goto Lc
        L4:
            r0 = move-exception
            java.lang.String r1 = "openSDK_LOG.AuthActivity"
            java.lang.String r2 = "activity finish exception: "
            com.tencent.open.log.SLog.e(r1, r2, r0)
        Lc:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r5) {
            r4 = this;
            java.lang.String r0 = "onCreate exception: "
            super.onCreate(r5)
            android.content.Intent r5 = r4.getIntent()
            java.lang.String r1 = "openSDK_LOG.AuthActivity"
            if (r5 != 0) goto L16
            java.lang.String r5 = "-->onCreate, getIntent() return null"
            com.tencent.open.log.SLog.w(r1, r5)
            r4.finish()
            return
        L16:
            r5 = 0
            android.content.Intent r2 = r4.getIntent()     // Catch: java.lang.Exception -> L20
            android.net.Uri r5 = r2.getData()     // Catch: java.lang.Exception -> L20
            goto L24
        L20:
            r2 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r2)
        L24:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "-->onCreate, uri: "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            com.tencent.open.log.SLog.v(r1, r2)
            r4.a()
            r4.a(r5)     // Catch: java.lang.Exception -> L3f
            goto L46
        L3f:
            r5 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r5)
            r4.finish()
        L46:
            return
    }
}
