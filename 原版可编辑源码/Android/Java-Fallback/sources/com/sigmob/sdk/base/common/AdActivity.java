package com.sigmob.sdk.base.common;

public class AdActivity extends com.sigmob.sdk.videoAd.BaseAdActivity implements com.sigmob.sdk.base.common.j {
    private com.sigmob.sdk.base.common.i j;
    private java.lang.String k;

    public AdActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.sigmob.sdk.base.common.i a(com.sigmob.sdk.base.models.BaseAdUnit r9, android.os.Bundle r10) throws java.lang.IllegalStateException {
            r8 = this;
            android.content.Intent r0 = r8.getIntent()
            java.lang.String r1 = "ad_view_class_name"
            java.lang.String r0 = r0.getStringExtra(r1)
            int r1 = r0.hashCode()
            r2 = 5
            r3 = 4
            r4 = 3
            r5 = 2
            r6 = 1
            switch(r1) {
                case -1961669118: goto L49;
                case -1552818374: goto L3f;
                case -959624923: goto L35;
                case -934326481: goto L2b;
                case 104156535: goto L21;
                case 662743940: goto L17;
                default: goto L16;
            }
        L16:
            goto L53
        L17:
            java.lang.String r1 = "mraid_two"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L53
            r0 = r4
            goto L54
        L21:
            java.lang.String r1 = "mraid"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L53
            r0 = r5
            goto L54
        L2b:
            java.lang.String r1 = "reward"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L53
            r0 = 0
            goto L54
        L35:
            java.lang.String r1 = "DisLike"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L53
            r0 = r2
            goto L54
        L3f:
            java.lang.String r1 = "LandPage"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L53
            r0 = r6
            goto L54
        L49:
            java.lang.String r1 = "LandNative"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L53
            r0 = r3
            goto L54
        L53:
            r0 = -1
        L54:
            if (r0 == 0) goto Lcb
            if (r0 == r6) goto Lb6
            if (r0 == r5) goto La1
            if (r0 == r4) goto L8c
            if (r0 == r3) goto L77
            if (r0 == r2) goto L62
            r0 = 0
            return r0
        L62:
            com.sigmob.sdk.nativead.s r7 = new com.sigmob.sdk.nativead.s
            android.content.Intent r0 = r8.getIntent()
            android.os.Bundle r3 = r0.getExtras()
            java.lang.String r5 = r8.k
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r10
            r6 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
        L77:
            com.sigmob.sdk.nativead.u r7 = new com.sigmob.sdk.nativead.u
            android.content.Intent r0 = r8.getIntent()
            android.os.Bundle r3 = r0.getExtras()
            java.lang.String r5 = r8.k
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r10
            r6 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
        L8c:
            com.sigmob.sdk.mraid2.m r7 = new com.sigmob.sdk.mraid2.m
            android.content.Intent r0 = r8.getIntent()
            android.os.Bundle r3 = r0.getExtras()
            java.lang.String r5 = r8.k
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r10
            r6 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
        La1:
            com.sigmob.sdk.mraid.m r7 = new com.sigmob.sdk.mraid.m
            android.content.Intent r0 = r8.getIntent()
            android.os.Bundle r3 = r0.getExtras()
            java.lang.String r5 = r8.k
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r10
            r6 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
        Lb6:
            com.sigmob.sdk.base.common.u r7 = new com.sigmob.sdk.base.common.u
            android.content.Intent r0 = r8.getIntent()
            android.os.Bundle r3 = r0.getExtras()
            java.lang.String r5 = r8.k
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r10
            r6 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
        Lcb:
            com.sigmob.sdk.videoAd.l r7 = new com.sigmob.sdk.videoAd.l
            android.content.Intent r0 = r8.getIntent()
            android.os.Bundle r3 = r0.getExtras()
            java.lang.String r5 = r8.k
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r10
            r6 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
    }

    private static java.lang.String a(android.content.Intent r1) {
            java.lang.String r0 = "broadcastIdentifier"
            java.lang.String r1 = r1.getStringExtra(r0)
            return r1
    }

    private static void a(android.content.Context r6) {
            if (r6 != 0) goto L3
            return
        L3:
            r0 = 0
            java.lang.String r1 = "input_method"
            java.lang.Object r6 = r6.getSystemService(r1)     // Catch: java.lang.Throwable -> Ld
            android.view.inputmethod.InputMethodManager r6 = (android.view.inputmethod.InputMethodManager) r6     // Catch: java.lang.Throwable -> Ld
            goto L16
        Ld:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r6)
            r6 = r0
        L16:
            if (r6 != 0) goto L19
            return
        L19:
            java.lang.Class r1 = r6.getClass()
            java.lang.reflect.Field[] r1 = r1.getDeclaredFields()
            int r2 = r1.length
            r3 = 0
        L23:
            if (r3 >= r2) goto L4b
            r4 = r1[r3]
            boolean r5 = r4.isAccessible()     // Catch: java.lang.Throwable -> L40
            if (r5 != 0) goto L31
            r5 = 1
            r4.setAccessible(r5)     // Catch: java.lang.Throwable -> L40
        L31:
            java.lang.Object r5 = r4.get(r6)     // Catch: java.lang.Throwable -> L40
            if (r5 == 0) goto L48
            boolean r5 = r5 instanceof android.view.View     // Catch: java.lang.Throwable -> L40
            if (r5 != 0) goto L3c
            goto L48
        L3c:
            r4.set(r6, r0)     // Catch: java.lang.Throwable -> L40
            goto L48
        L40:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L48:
            int r3 = r3 + 1
            goto L23
        L4b:
            return
    }

    @Override
    public void a() {
            r1 = this;
            r1.finish()
            r0 = 0
            r1.overridePendingTransition(r0, r0)
            return
    }

    @Override
    public void a(int r1) {
            r0 = this;
            r0.setRequestedOrientation(r1)
            return
    }

    @Override
    public void a(java.lang.Class<? extends android.app.Activity> r1, int r2, android.os.Bundle r3) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            android.content.Intent r3 = com.sigmob.sdk.base.common.s.a(r0, r1, r3)
            r0.startActivityForResult(r3, r2)     // Catch: java.lang.Throwable -> Lb
            goto L28
        Lb:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Activity "
            r2.append(r3)
            java.lang.String r1 = r1.getName()
            r2.append(r1)
            java.lang.String r1 = " not found. Did you declare it in your AndroidManifest.xml?"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.czhj.sdk.logger.SigmobLog.d(r1)
        L28:
            return
    }

    @Override
    protected void onActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            com.sigmob.sdk.base.common.i r0 = r1.j
            if (r0 == 0) goto L7
            r0.a(r2, r3, r4)
        L7:
            return
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            com.sigmob.sdk.base.common.i r0 = r1.j
            if (r0 == 0) goto L12
            boolean r0 = r0.g()
            if (r0 == 0) goto L12
            super.onBackPressed()
            com.sigmob.sdk.base.common.i r0 = r1.j
            r0.f()
        L12:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onConfigurationChanged(r2)
            com.sigmob.sdk.base.common.i r0 = r1.j
            if (r0 == 0) goto La
            r0.a(r2)
        La:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r6) {
            r5 = this;
            java.lang.String r0 = "error"
            java.lang.String r1 = "com.sigmob.action.rewardedvideo.playFail"
            super.onCreate(r6)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "TaskId :"
            r2.append(r3)
            int r3 = r5.getTaskId()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.czhj.sdk.logger.SigmobLog.i(r2)
            android.content.Intent r2 = r5.getIntent()
            java.lang.String r2 = a(r2)
            r5.k = r2
            android.content.Intent r2 = r5.getIntent()
            java.lang.String r3 = "adUnit_requestId_key"
            java.lang.String r2 = r2.getStringExtra(r3)
            com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L84
            if (r3 == 0) goto L71
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L84
            if (r3 == 0) goto L40
            goto L71
        L40:
            com.sigmob.sdk.base.models.BaseAdUnit r2 = com.sigmob.sdk.base.common.f.a(r2)     // Catch: java.lang.Throwable -> L84
            java.lang.String r3 = r5.k     // Catch: java.lang.Throwable -> L84
            java.lang.String r4 = "dislike_broadcastIdentifier"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L84
            if (r3 != 0) goto L65
            if (r2 != 0) goto L65
            java.util.HashMap r6 = new java.util.HashMap     // Catch: java.lang.Throwable -> L84
            r6.<init>()     // Catch: java.lang.Throwable -> L84
            java.lang.String r2 = "playAdUnit"
            java.lang.String r3 = "playAdUnit is null"
            r6.put(r2, r3)     // Catch: java.lang.Throwable -> L84
            java.lang.String r2 = r5.k     // Catch: java.lang.Throwable -> L84
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r5, r2, r6, r1)     // Catch: java.lang.Throwable -> L84
            r5.finish()     // Catch: java.lang.Throwable -> L84
            return
        L65:
            com.sigmob.sdk.base.common.i r6 = r5.a(r2, r6)     // Catch: java.lang.Throwable -> L84
            r5.j = r6     // Catch: java.lang.Throwable -> L84
            if (r6 == 0) goto Lb1
            r6.b()     // Catch: java.lang.Throwable -> L84
            goto Lb1
        L71:
            java.util.HashMap r6 = new java.util.HashMap     // Catch: java.lang.Throwable -> L84
            r6.<init>()     // Catch: java.lang.Throwable -> L84
            java.lang.String r2 = "uuid is empty"
            r6.put(r0, r2)     // Catch: java.lang.Throwable -> L84
            java.lang.String r2 = r5.k     // Catch: java.lang.Throwable -> L84
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r5, r2, r6, r1)     // Catch: java.lang.Throwable -> L84
            r5.finish()     // Catch: java.lang.Throwable -> L84
            return
        L84:
            r6 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "AdActivity onCreate Throwable:"
            r2.append(r3)
            java.lang.String r3 = r6.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.czhj.sdk.logger.SigmobLog.e(r2)
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            java.lang.String r6 = r6.getMessage()
            r2.put(r0, r6)
            java.lang.String r6 = r5.k
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r5, r6, r2, r1)
            r5.finish()
        Lb1:
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            java.lang.String r0 = "RewardVideoAdPlayerActivity onDestroy() called"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.sigmob.sdk.base.common.i r0 = r1.j
            if (r0 == 0) goto Lc
            r0.e()
        Lc:
            r0 = 0
            r1.j = r0
            super.onDestroy()
            return
    }

    @Override
    protected void onPause() {
            r3 = this;
            super.onPause()     // Catch: java.lang.Throwable -> Ld
            com.sigmob.sdk.base.common.i r0 = r3.j     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L2d
            com.sigmob.sdk.base.common.i r0 = r3.j     // Catch: java.lang.Throwable -> Ld
            r0.c()     // Catch: java.lang.Throwable -> Ld
            goto L2d
        Ld:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.String r0 = r0.getMessage()
            java.lang.String r2 = "error"
            r1.put(r2, r0)
            java.lang.String r0 = r3.k
            java.lang.String r2 = "com.sigmob.action.rewardedvideo.playFail"
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r3, r0, r1, r2)
            r3.finish()
        L2d:
            return
    }

    @Override
    protected void onResume() {
            r3 = this;
            super.onResume()     // Catch: java.lang.Throwable -> Ld
            com.sigmob.sdk.base.common.i r0 = r3.j     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L26
            com.sigmob.sdk.base.common.i r0 = r3.j     // Catch: java.lang.Throwable -> Ld
            r0.d()     // Catch: java.lang.Throwable -> Ld
            goto L26
        Ld:
            r0 = move-exception
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.String r0 = r0.getMessage()
            java.lang.String r2 = "error"
            r1.put(r2, r0)
            java.lang.String r0 = r3.k
            java.lang.String r2 = "com.sigmob.action.rewardedvideo.playFail"
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r3, r0, r1, r2)
            r3.finish()
        L26:
            return
    }

    @Override
    protected void onSaveInstanceState(android.os.Bundle r2) {
            r1 = this;
            super.onSaveInstanceState(r2)
            com.sigmob.sdk.base.common.i r0 = r1.j
            if (r0 == 0) goto La
            r0.a(r2)
        La:
            return
    }

    @Override
    public void onSetContentView(android.view.View r1) {
            r0 = this;
            r0.setContentView(r1)
            return
    }

    @Override
    public void setRequestedOrientation(int r3) {
            r2 = this;
            super.setRequestedOrientation(r3)     // Catch: java.lang.Exception -> L4
            goto L1d
        L4:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setRequestedOrientation: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r3)
        L1d:
            return
    }
}
