package com.sigmob.sdk.videoAd;

public class BaseAdActivity extends android.app.Activity {
    public static final java.lang.String a = "LandPage";
    public static final java.lang.String b = "reward";
    public static final java.lang.String c = "mraid";
    public static final java.lang.String d = "mraid_two";
    public static final java.lang.String e = "LandNative";
    public static final java.lang.String f = "DisLike";
    protected static final java.lang.String g = "ad_view_class_name";
    protected static final java.lang.String h = "adUnit_requestId_key";
    public static final java.lang.String i = "land_page_url";


    public BaseAdActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.content.Intent a(android.content.Context r2, java.lang.Class<? extends com.sigmob.sdk.videoAd.BaseAdActivity> r3, java.lang.String r4, java.lang.String r5) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r2, r3)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r3)
            java.lang.String r3 = "ad_view_class_name"
            r0.putExtra(r3, r5)
            java.lang.String r3 = "adUnit_requestId_key"
            r0.putExtra(r3, r4)
            boolean r3 = r2 instanceof android.app.Activity
            if (r3 == 0) goto L20
            r3 = r2
            android.app.Activity r3 = (android.app.Activity) r3
            int r3 = r3.getRequestedOrientation()
            goto L21
        L20:
            r3 = 3
        L21:
            r5 = 6
            r1 = 7
            if (r3 == r1) goto L40
            if (r3 == r5) goto L40
            android.content.res.Resources r3 = r2.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            int r3 = r3.widthPixels
            android.content.res.Resources r2 = r2.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r2 = r2.heightPixels
            if (r3 <= r2) goto L3f
            r3 = r5
            goto L40
        L3f:
            r3 = r1
        L40:
            java.lang.String r2 = "REQUESTED_ORIENTATION"
            r0.putExtra(r2, r3)
            java.lang.String r2 = "broadcastIdentifier"
            r0.putExtra(r2, r4)
            return r0
    }

    public static void a(android.content.Context r2, java.lang.Class<? extends com.sigmob.sdk.videoAd.BaseAdActivity> r3, com.sigmob.sdk.base.models.BaseAdUnit r4) {
            java.lang.String r0 = r4.getUuid()
            java.lang.String r1 = "LandPage"
            android.content.Intent r3 = a(r2, r3, r0, r1)
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L1b
            r0.<init>()     // Catch: java.lang.Throwable -> L1b
            java.lang.String r1 = "land_page_url"
            r0.putSerializable(r1, r4)     // Catch: java.lang.Throwable -> L1b
            r3.putExtras(r0)     // Catch: java.lang.Throwable -> L1b
            r2.startActivity(r3)     // Catch: java.lang.Throwable -> L1b
            goto L2a
        L1b:
            r2 = move-exception
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            java.lang.String r2 = r2.getMessage()
            java.lang.String r4 = "error"
            r3.put(r4, r2)
        L2a:
            return
    }

    public static void a(android.content.Context r2, java.lang.Class<? extends com.sigmob.sdk.videoAd.BaseAdActivity> r3, java.lang.String r4) {
            r0 = 0
            java.lang.String r1 = "LandPage"
            a(r2, r3, r4, r0, r1)
            return
    }

    public static void a(android.content.Context r0, java.lang.Class<? extends com.sigmob.sdk.videoAd.BaseAdActivity> r1, java.lang.String r2, android.os.Bundle r3, java.lang.String r4) {
            android.content.Intent r1 = a(r0, r1, r2, r4)
            if (r3 == 0) goto L9
            r1.putExtras(r3)     // Catch: java.lang.Throwable -> Ld
        L9:
            r0.startActivity(r1)     // Catch: java.lang.Throwable -> Ld
            goto L21
        Ld:
            r1 = move-exception
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            java.lang.String r1 = r1.getMessage()
            java.lang.String r4 = "error"
            r3.put(r4, r1)
            java.lang.String r1 = "com.sigmob.action.rewardedvideo.playFail"
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r0, r2, r3, r1)
        L21:
            return
    }

    public static void b(android.content.Context r3, java.lang.Class<? extends com.sigmob.sdk.videoAd.BaseAdActivity> r4, java.lang.String r5) {
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L51
            r0.<init>(r3, r4)     // Catch: java.lang.Throwable -> L51
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r4)     // Catch: java.lang.Throwable -> L51
            java.lang.String r4 = "ad_view_class_name"
            java.lang.String r1 = "DisLike"
            r0.putExtra(r4, r1)     // Catch: java.lang.Throwable -> L51
            java.lang.String r4 = "adUnit_requestId_key"
            r0.putExtra(r4, r5)     // Catch: java.lang.Throwable -> L51
            r4 = 3
            boolean r5 = r3 instanceof android.app.Activity     // Catch: java.lang.Throwable -> L51
            if (r5 == 0) goto L22
            r4 = r3
            android.app.Activity r4 = (android.app.Activity) r4     // Catch: java.lang.Throwable -> L51
            int r4 = r4.getRequestedOrientation()     // Catch: java.lang.Throwable -> L51
        L22:
            r5 = 6
            r1 = 7
            if (r4 == r1) goto L41
            if (r4 == r5) goto L41
            android.content.res.Resources r4 = r3.getResources()     // Catch: java.lang.Throwable -> L51
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()     // Catch: java.lang.Throwable -> L51
            int r4 = r4.widthPixels     // Catch: java.lang.Throwable -> L51
            android.content.res.Resources r2 = r3.getResources()     // Catch: java.lang.Throwable -> L51
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()     // Catch: java.lang.Throwable -> L51
            int r2 = r2.heightPixels     // Catch: java.lang.Throwable -> L51
            if (r4 <= r2) goto L40
            r4 = r5
            goto L41
        L40:
            r4 = r1
        L41:
            java.lang.String r5 = "REQUESTED_ORIENTATION"
            r0.putExtra(r5, r4)     // Catch: java.lang.Throwable -> L51
            java.lang.String r4 = "broadcastIdentifier"
            java.lang.String r5 = "dislike_broadcastIdentifier"
            r0.putExtra(r4, r5)     // Catch: java.lang.Throwable -> L51
            r3.startActivity(r0)     // Catch: java.lang.Throwable -> L51
            goto L55
        L51:
            r3 = move-exception
            r3.printStackTrace()
        L55:
            return
    }

    @Override
    protected void attachBaseContext(android.content.Context r2) {
            r1 = this;
            com.sigmob.sdk.videoAd.BaseAdActivity$1 r0 = new com.sigmob.sdk.videoAd.BaseAdActivity$1
            r0.<init>(r1, r2)
            super.attachBaseContext(r0)
            return
    }

    @Override
    protected void onDestroy() {
            r2 = this;
            super.onDestroy()
            java.lang.String r0 = "audio"
            java.lang.Object r0 = r2.getSystemService(r0)
            android.media.AudioManager r0 = (android.media.AudioManager) r0
            if (r0 == 0) goto L11
            r1 = 0
            r0.abandonAudioFocus(r1)
        L11:
            java.lang.String r0 = "BaseAdActivity onDestroy() called"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            return
    }
}
