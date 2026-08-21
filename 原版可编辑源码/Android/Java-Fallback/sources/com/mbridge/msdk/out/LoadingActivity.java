package com.mbridge.msdk.out;

public class LoadingActivity extends android.app.Activity {
    private android.graphics.Bitmap abitmap;
    android.content.BroadcastReceiver broadcastReceiver;
    private com.mbridge.msdk.foundation.same.c.c cipl;
    private android.graphics.drawable.Drawable drawable;
    private java.lang.String icon_url;
    private android.widget.ImageView img_icon;
    private com.mbridge.msdk.out.LoadingActivity.OnLoadingDialogCallback mCallback;
    private android.widget.RelativeLayout rlayout;
    private android.widget.RelativeLayout rlayout_main;



    public interface OnLoadingDialogCallback {
        void onCancel(com.mbridge.msdk.foundation.entity.CampaignEx r1);
    }

    public LoadingActivity() {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.out.LoadingActivity$1 r0 = new com.mbridge.msdk.out.LoadingActivity$1
            r0.<init>(r1)
            r1.cipl = r0
            com.mbridge.msdk.out.LoadingActivity$2 r0 = new com.mbridge.msdk.out.LoadingActivity$2
            r0.<init>(r1)
            r1.broadcastReceiver = r0
            return
    }

    static android.widget.ImageView access$000(com.mbridge.msdk.out.LoadingActivity r0) {
            android.widget.ImageView r0 = r0.img_icon
            return r0
    }

    static android.graphics.Bitmap access$102(com.mbridge.msdk.out.LoadingActivity r0, android.graphics.Bitmap r1) {
            r0.abitmap = r1
            return r1
    }

    private android.view.View initView() {
            r5 = this;
            android.widget.RelativeLayout r0 = r5.rlayout_main
            if (r0 != 0) goto Lcc
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r5)
            r5.rlayout_main = r0
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r5)
            r5.rlayout = r0
            r0 = 1097859072(0x41700000, float:15.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r5, r0)
            android.widget.RelativeLayout r1 = r5.rlayout
            r1.setPadding(r0, r0, r0, r0)
            android.content.res.Resources r0 = r5.getResources()
            java.lang.String r1 = r5.getPackageName()
            java.lang.String r2 = "mbridge_native_bg_loading_camera"
            java.lang.String r3 = "drawable"
            int r0 = r0.getIdentifier(r2, r3, r1)
            android.widget.RelativeLayout r1 = r5.rlayout
            r1.setBackgroundResource(r0)
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r5)
            r1 = 1124859904(0x430c0000, float:140.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r5, r1)
            r2 = 1107034112(0x41fc0000, float:31.5)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r5, r2)
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r1, r2)
            android.widget.RelativeLayout r1 = r5.rlayout
            r1.addView(r0, r3)
            com.mbridge.msdk.widget.MBImageView r0 = new com.mbridge.msdk.widget.MBImageView
            r0.<init>(r5)
            r5.img_icon = r0
            int r1 = com.mbridge.msdk.foundation.tools.ae.a()
            r0.setId(r1)
            android.widget.ImageView r0 = r5.img_icon
            java.lang.String r1 = r5.icon_url
            r0.setTag(r1)
            java.lang.String r0 = r5.icon_url
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L79
            android.content.Context r0 = r5.getApplicationContext()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            java.lang.String r1 = r5.icon_url
            com.mbridge.msdk.foundation.same.c.c r2 = r5.cipl
            r0.a(r1, r2)
        L79:
            r0 = 1115684864(0x42800000, float:64.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r5, r0)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r1.<init>(r0, r0)
            r0 = 13
            r2 = -1
            r1.addRule(r0, r2)
            android.widget.RelativeLayout r0 = r5.rlayout
            android.widget.ImageView r3 = r5.img_icon
            r0.addView(r3, r1)
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r5)
            r0.setSingleLine()
            r0.setTextColor(r2)
            r1 = 1098907648(0x41800000, float:16.0)
            r0.setTextSize(r1)
            java.lang.String r1 = "Relax while loading...."
            r0.setText(r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r3 = -2
            r1.<init>(r3, r3)
            r3 = 3
            android.widget.ImageView r4 = r5.img_icon
            int r4 = r4.getId()
            r1.addRule(r3, r4)
            r3 = 14
            r1.addRule(r3, r2)
            android.widget.RelativeLayout r3 = r5.rlayout
            r3.addView(r0, r1)
            android.widget.RelativeLayout r0 = r5.rlayout_main
            android.widget.RelativeLayout r1 = r5.rlayout
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r2, r2)
            r0.addView(r1, r3)
        Lcc:
            android.widget.RelativeLayout r0 = r5.rlayout_main
            return r0
    }

    @Override
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            android.content.Intent r2 = r1.getIntent()
            java.lang.String r0 = "icon_url"
            boolean r2 = r2.hasExtra(r0)
            if (r2 == 0) goto L19
            android.content.Intent r2 = r1.getIntent()
            java.lang.String r2 = r2.getStringExtra(r0)
            r1.icon_url = r2
        L19:
            android.view.View r2 = r1.initView()
            r1.setContentView(r2)
            return
    }

    @Override
    protected void onDestroy() {
            r2 = this;
            android.content.BroadcastReceiver r0 = r2.broadcastReceiver
            if (r0 == 0) goto L7
            r2.unregisterReceiver(r0)
        L7:
            android.widget.ImageView r0 = r2.img_icon
            r1 = 0
            if (r0 == 0) goto Lf
            r0.setImageBitmap(r1)
        Lf:
            r2.img_icon = r1
            r2.rlayout_main = r1
            r2.cipl = r1
            r2.drawable = r1
            android.widget.RelativeLayout r0 = r2.rlayout
            if (r0 == 0) goto L1e
            r0.setBackgroundDrawable(r1)
        L1e:
            r2.rlayout = r1
            android.graphics.Bitmap r0 = r2.abitmap
            if (r0 == 0) goto L2c
            boolean r0 = r0.isRecycled()
            if (r0 != 0) goto L2c
            r2.abitmap = r1
        L2c:
            super.onDestroy()
            return
    }

    @Override
    protected void onResume() {
            r2 = this;
            super.onResume()
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "ExitApp"
            r0.addAction(r1)
            android.content.BroadcastReceiver r1 = r2.broadcastReceiver
            if (r1 == 0) goto L14
            r2.registerReceiver(r1, r0)
        L14:
            return
    }
}
