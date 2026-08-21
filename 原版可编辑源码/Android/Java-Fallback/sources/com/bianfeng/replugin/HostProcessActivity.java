package com.bianfeng.replugin;

public class HostProcessActivity extends android.app.Activity implements android.os.Handler.Callback {
    private volatile java.util.Set<com.bianfeng.ymnsdk.feature.YmnCallback> callbacks;
    private android.os.Handler handler;
    private android.app.Activity hostActivity;
    private volatile boolean isNeedActivityReplace;
    private boolean isPaying;


    public HostProcessActivity() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.hostActivity = r0
            r1 = 0
            r2.isNeedActivityReplace = r1
            r2.callbacks = r0
            return
    }

    private void __fixNoCallbackBugBegin() {
            r4 = this;
            android.os.Handler r0 = r4.handler
            if (r0 == 0) goto La
            r1 = 0
            r2 = 3000(0xbb8, double:1.482E-320)
            r0.sendEmptyMessageDelayed(r1, r2)
        La:
            return
    }

    private void __fixNoCallbackBugEnd() {
            r2 = this;
            android.os.Handler r0 = r2.handler
            if (r0 == 0) goto L8
            r1 = 0
            r0.removeMessages(r1)
        L8:
            return
    }

    static void access$000(com.bianfeng.replugin.HostProcessActivity r0) {
            r0.__fixNoCallbackBugEnd()
            return
    }

    static boolean access$102(com.bianfeng.replugin.HostProcessActivity r0, boolean r1) {
            r0.isPaying = r1
            return r1
    }

    static void access$200(com.bianfeng.replugin.HostProcessActivity r0, int r1, java.lang.String r2) {
            r0.finishTemp(r1, r2)
            return
    }

    private void finishTemp(int r3, java.lang.String r4) {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "code"
            r0.putExtra(r1, r3)
            java.lang.String r1 = "msg"
            r0.putExtra(r1, r4)
            r1 = 332211(0x511b3, float:4.65527E-40)
            r2.setResult(r1, r0)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "zzx--code "
            android.util.Log.e(r0, r3)
            java.lang.String r3 = "zzx--msg "
            android.util.Log.e(r3, r4)
            r2.finish()
            r3 = 0
            r2.overridePendingTransition(r3, r3)
            return
    }

    @Override
    public boolean handleMessage(android.os.Message r2) {
            r1 = this;
            java.lang.String r2 = "回调异常"
            java.lang.String r0 = "zzx"
            android.util.Log.e(r0, r2)
            r0 = 201(0xc9, float:2.82E-43)
            r1.finishTemp(r0, r2)
            r2 = 0
            return r2
    }

    @Override
    protected void onActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            super.onActivityResult(r1, r2, r3)
            com.bianfeng.ymnsdk.YmnSdk.onActivityResult(r1, r2, r3)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r19) {
            r18 = this;
            r1 = r18
            java.lang.String r0 = "ext"
            java.lang.String r2 = "notify_url"
            java.lang.String r3 = "server_name"
            java.lang.String r4 = "server_id"
            java.lang.String r5 = "role_balance"
            java.lang.String r6 = "role_grade"
            java.lang.String r7 = "role_name"
            java.lang.String r8 = "role_id"
            java.lang.String r9 = "product_count"
            java.lang.String r10 = "product_price"
            java.lang.String r11 = "product_name"
            java.lang.String r12 = "product_id"
            java.lang.String r13 = "order_id"
            super.onCreate(r19)
            java.lang.String r14 = "zzx"
            java.lang.String r15 = "onCreate"
            android.util.Log.e(r14, r15)
            r14 = 0
            r1.isNeedActivityReplace = r14
            java.util.HashSet r15 = new java.util.HashSet
            r15.<init>()
            r1.callbacks = r15
            java.util.Set r15 = com.bianfeng.ymnsdk.YmnSdk.getCallbacks()
            java.util.Iterator r15 = r15.iterator()
        L38:
            boolean r16 = r15.hasNext()
            if (r16 == 0) goto L51
            java.lang.Object r16 = r15.next()
            r14 = r16
            com.bianfeng.ymnsdk.feature.YmnCallback r14 = (com.bianfeng.ymnsdk.feature.YmnCallback) r14
            r16 = r15
            java.util.Set<com.bianfeng.ymnsdk.feature.YmnCallback> r15 = r1.callbacks
            r15.add(r14)
            r15 = r16
            r14 = 0
            goto L38
        L51:
            com.bianfeng.ymnsdk.YmnSdk.clearCallbacks()
            java.lang.String r14 = "R.layout.activity_hostprocess"
            int r14 = com.bianfeng.ymnsdk.util.ResourceManger.getId(r1, r14)
            r1.setContentView(r14)
            android.os.Handler r14 = new android.os.Handler
            r14.<init>(r1)
            r1.handler = r14
            android.app.Activity r14 = com.bianfeng.ymnsdk.YmnSdkWrapper.activity
            r1.hostActivity = r14
            com.bianfeng.replugin.HostProcessActivity$1 r14 = new com.bianfeng.replugin.HostProcessActivity$1
            r14.<init>(r1)
            com.bianfeng.ymnsdk.YmnSdk.registCallback(r14)
            android.content.Intent r14 = r18.getIntent()
            java.lang.String r15 = "funName"
            java.lang.String r15 = r14.getStringExtra(r15)
            java.lang.String r1 = "funParams"
            java.lang.String r1 = r14.getStringExtra(r1)
            java.util.HashMap r14 = new java.util.HashMap
            r14.<init>()
            r16 = r15
            org.json.JSONObject r15 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lec
            r15.<init>(r1)     // Catch: org.json.JSONException -> Lec
            r17 = r1
            java.lang.String r1 = r15.optString(r13)     // Catch: org.json.JSONException -> Lea
            r14.put(r13, r1)     // Catch: org.json.JSONException -> Lea
            java.lang.String r1 = r15.optString(r12)     // Catch: org.json.JSONException -> Lea
            r14.put(r12, r1)     // Catch: org.json.JSONException -> Lea
            java.lang.String r1 = r15.optString(r11)     // Catch: org.json.JSONException -> Lea
            r14.put(r11, r1)     // Catch: org.json.JSONException -> Lea
            java.lang.String r1 = r15.optString(r10)     // Catch: org.json.JSONException -> Lea
            r14.put(r10, r1)     // Catch: org.json.JSONException -> Lea
            java.lang.String r1 = r15.optString(r9)     // Catch: org.json.JSONException -> Lea
            r14.put(r9, r1)     // Catch: org.json.JSONException -> Lea
            java.lang.String r1 = r15.optString(r8)     // Catch: org.json.JSONException -> Lea
            r14.put(r8, r1)     // Catch: org.json.JSONException -> Lea
            java.lang.String r1 = r15.optString(r7)     // Catch: org.json.JSONException -> Lea
            r14.put(r7, r1)     // Catch: org.json.JSONException -> Lea
            java.lang.String r1 = r15.optString(r6)     // Catch: org.json.JSONException -> Lea
            r14.put(r6, r1)     // Catch: org.json.JSONException -> Lea
            java.lang.String r1 = r15.optString(r5)     // Catch: org.json.JSONException -> Lea
            r14.put(r5, r1)     // Catch: org.json.JSONException -> Lea
            java.lang.String r1 = r15.optString(r4)     // Catch: org.json.JSONException -> Lea
            r14.put(r4, r1)     // Catch: org.json.JSONException -> Lea
            java.lang.String r1 = r15.optString(r3)     // Catch: org.json.JSONException -> Lea
            r14.put(r3, r1)     // Catch: org.json.JSONException -> Lea
            java.lang.String r1 = r15.optString(r2)     // Catch: org.json.JSONException -> Lea
            r14.put(r2, r1)     // Catch: org.json.JSONException -> Lea
            java.lang.String r1 = r15.optString(r0)     // Catch: org.json.JSONException -> Lea
            r14.put(r0, r1)     // Catch: org.json.JSONException -> Lea
            goto Lf2
        Lea:
            r0 = move-exception
            goto Lef
        Lec:
            r0 = move-exception
            r17 = r1
        Lef:
            r0.printStackTrace()
        Lf2:
            java.lang.String r0 = "zzx-- "
            r1 = r16
            android.util.Log.e(r0, r1)
            r2 = r17
            android.util.Log.e(r0, r2)
            r0 = 1
            r3 = r18
            r3.isPaying = r0
            java.lang.String r4 = "pay"
            boolean r4 = r1.equals(r4)
            if (r4 == 0) goto L114
            r3.isNeedActivityReplace = r0
            com.bianfeng.ymnsdk.YmnSdk.onCreate(r18)
            com.bianfeng.ymnsdk.YmnSdk.pay(r14)
            goto L157
        L114:
            java.lang.String r4 = "login"
            boolean r4 = r1.equals(r4)
            if (r4 == 0) goto L120
            com.bianfeng.ymnsdk.YmnSdk.login()
            goto L157
        L120:
            boolean r4 = com.bianfeng.ymnsdk.YmnSdk.isSupportFunction(r1)
            if (r4 == 0) goto L13c
            if (r2 == 0) goto L138
            boolean r4 = r1.isEmpty()
            if (r4 == 0) goto L12f
            goto L138
        L12f:
            java.lang.String[] r0 = new java.lang.String[r0]
            r4 = 0
            r0[r4] = r2
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r1, r0)
            goto L157
        L138:
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r1)
            goto L157
        L13c:
            r0 = 201(0xc9, float:2.82E-43)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "不支持"
            r2.append(r4)
            r2.append(r1)
            java.lang.String r1 = "方法"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r3.finishTemp(r0, r1)
        L157:
            return
    }

    @Override
    protected void onDestroy() {
            r2 = this;
            super.onDestroy()
            boolean r0 = r2.isNeedActivityReplace
            if (r0 == 0) goto Lf
            r0 = 0
            r2.isNeedActivityReplace = r0
            android.app.Activity r0 = r2.hostActivity
            com.bianfeng.ymnsdk.YmnSdk.onCreate(r0)
        Lf:
            java.util.Set<com.bianfeng.ymnsdk.feature.YmnCallback> r0 = r2.callbacks
            java.util.Iterator r0 = r0.iterator()
        L15:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L25
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnCallback r1 = (com.bianfeng.ymnsdk.feature.YmnCallback) r1
            com.bianfeng.ymnsdk.YmnSdk.registCallback(r1)
            goto L15
        L25:
            java.lang.String r0 = "zzx"
            java.lang.String r1 = "onDestroy"
            android.util.Log.e(r0, r1)
            return
    }

    @Override
    protected void onPause() {
            r2 = this;
            super.onPause()
            java.lang.String r0 = "zzx"
            java.lang.String r1 = "onPause"
            android.util.Log.e(r0, r1)
            return
    }

    @Override
    protected void onRestart() {
            r2 = this;
            super.onRestart()
            java.lang.String r0 = "zzx"
            java.lang.String r1 = "onRestart"
            android.util.Log.e(r0, r1)
            return
    }

    @Override
    protected void onResume() {
            r2 = this;
            super.onResume()
            java.lang.String r0 = "zzx"
            java.lang.String r1 = "onResume"
            android.util.Log.e(r0, r1)
            boolean r0 = r2.isPaying
            if (r0 == 0) goto Lf
            return
        Lf:
            r2.__fixNoCallbackBugBegin()
            return
    }

    @Override
    protected void onStart() {
            r2 = this;
            super.onStart()
            java.lang.String r0 = "zzx"
            java.lang.String r1 = "onStart"
            android.util.Log.e(r0, r1)
            return
    }
}
