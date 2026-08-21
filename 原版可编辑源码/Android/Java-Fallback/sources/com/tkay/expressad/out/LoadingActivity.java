package com.tkay.expressad.out;

public class LoadingActivity extends android.app.Activity {
    android.content.BroadcastReceiver a;
    private android.widget.RelativeLayout b;
    private android.widget.ImageView c;
    private android.graphics.Bitmap d;
    private com.tkay.expressad.out.LoadingActivity.a e;
    private java.lang.String f;
    private com.tkay.expressad.foundation.g.d.c g;
    private android.graphics.drawable.Drawable h;
    private android.widget.RelativeLayout i;



    public interface a {
        void a();
    }

    public LoadingActivity() {
            r1 = this;
            r1.<init>()
            com.tkay.expressad.out.LoadingActivity$1 r0 = new com.tkay.expressad.out.LoadingActivity$1
            r0.<init>(r1)
            r1.g = r0
            com.tkay.expressad.out.LoadingActivity$2 r0 = new com.tkay.expressad.out.LoadingActivity$2
            r0.<init>(r1)
            r1.a = r0
            return
    }

    static android.graphics.Bitmap a(com.tkay.expressad.out.LoadingActivity r0, android.graphics.Bitmap r1) {
            r0.d = r1
            return r1
    }

    private android.view.View a() {
            r5 = this;
            android.widget.RelativeLayout r0 = r5.b
            if (r0 != 0) goto Lcc
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r5)
            r5.b = r0
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r5)
            r5.i = r0
            r0 = 1097859072(0x41700000, float:15.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r5, r0)
            android.widget.RelativeLayout r1 = r5.i
            r1.setPadding(r0, r0, r0, r0)
            android.content.res.Resources r0 = r5.getResources()
            java.lang.String r1 = r5.getPackageName()
            java.lang.String r2 = "tkay_native_bg_loading_camera"
            java.lang.String r3 = "drawable"
            int r0 = r0.getIdentifier(r2, r3, r1)
            android.widget.RelativeLayout r1 = r5.i
            r1.setBackgroundResource(r0)
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r5)
            r1 = 1124859904(0x430c0000, float:140.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r5, r1)
            r2 = 1107034112(0x41fc0000, float:31.5)
            int r2 = com.tkay.expressad.foundation.h.t.b(r5, r2)
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r1, r2)
            android.widget.RelativeLayout r1 = r5.i
            r1.addView(r0, r3)
            com.tkay.expressad.widget.TYImageView r0 = new com.tkay.expressad.widget.TYImageView
            r0.<init>(r5)
            r5.c = r0
            int r1 = com.tkay.expressad.foundation.h.t.a()
            r0.setId(r1)
            android.widget.ImageView r0 = r5.c
            java.lang.String r1 = r5.f
            r0.setTag(r1)
            java.lang.String r0 = r5.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L79
            android.content.Context r0 = r5.getApplicationContext()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r5.f
            com.tkay.expressad.foundation.g.d.c r2 = r5.g
            r0.a(r1, r2)
        L79:
            r0 = 1115684864(0x42800000, float:64.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r5, r0)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r1.<init>(r0, r0)
            r0 = 13
            r2 = -1
            r1.addRule(r0, r2)
            android.widget.RelativeLayout r0 = r5.i
            android.widget.ImageView r3 = r5.c
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
            android.widget.ImageView r4 = r5.c
            int r4 = r4.getId()
            r1.addRule(r3, r4)
            r3 = 14
            r1.addRule(r3, r2)
            android.widget.RelativeLayout r3 = r5.i
            r3.addView(r0, r1)
            android.widget.RelativeLayout r0 = r5.b
            android.widget.RelativeLayout r1 = r5.i
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r2, r2)
            r0.addView(r1, r3)
        Lcc:
            android.widget.RelativeLayout r0 = r5.b
            return r0
    }

    static android.widget.ImageView a(com.tkay.expressad.out.LoadingActivity r0) {
            android.widget.ImageView r0 = r0.c
            return r0
    }

    @Override
    protected void onCreate(android.os.Bundle r5) {
            r4 = this;
            super.onCreate(r5)
            android.content.Intent r5 = r4.getIntent()
            java.lang.String r0 = "icon_url"
            boolean r5 = r5.hasExtra(r0)
            if (r5 == 0) goto L19
            android.content.Intent r5 = r4.getIntent()
            java.lang.String r5 = r5.getStringExtra(r0)
            r4.f = r5
        L19:
            android.widget.RelativeLayout r5 = r4.b
            if (r5 != 0) goto Le5
            android.widget.RelativeLayout r5 = new android.widget.RelativeLayout
            r5.<init>(r4)
            r4.b = r5
            android.widget.RelativeLayout r5 = new android.widget.RelativeLayout
            r5.<init>(r4)
            r4.i = r5
            r5 = 1097859072(0x41700000, float:15.0)
            int r5 = com.tkay.expressad.foundation.h.t.b(r4, r5)
            android.widget.RelativeLayout r0 = r4.i
            r0.setPadding(r5, r5, r5, r5)
            android.content.res.Resources r5 = r4.getResources()
            java.lang.String r0 = r4.getPackageName()
            java.lang.String r1 = "tkay_native_bg_loading_camera"
            java.lang.String r2 = "drawable"
            int r5 = r5.getIdentifier(r1, r2, r0)
            android.widget.RelativeLayout r0 = r4.i
            r0.setBackgroundResource(r5)
            android.widget.TextView r5 = new android.widget.TextView
            r5.<init>(r4)
            r0 = 1124859904(0x430c0000, float:140.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r4, r0)
            r1 = 1107034112(0x41fc0000, float:31.5)
            int r1 = com.tkay.expressad.foundation.h.t.b(r4, r1)
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r2.<init>(r0, r1)
            android.widget.RelativeLayout r0 = r4.i
            r0.addView(r5, r2)
            com.tkay.expressad.widget.TYImageView r5 = new com.tkay.expressad.widget.TYImageView
            r5.<init>(r4)
            r4.c = r5
            int r0 = com.tkay.expressad.foundation.h.t.a()
            r5.setId(r0)
            android.widget.ImageView r5 = r4.c
            java.lang.String r0 = r4.f
            r5.setTag(r0)
            java.lang.String r5 = r4.f
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L92
            android.content.Context r5 = r4.getApplicationContext()
            com.tkay.expressad.foundation.g.d.b r5 = com.tkay.expressad.foundation.g.d.b.a(r5)
            java.lang.String r0 = r4.f
            com.tkay.expressad.foundation.g.d.c r1 = r4.g
            r5.a(r0, r1)
        L92:
            r5 = 1115684864(0x42800000, float:64.0)
            int r5 = com.tkay.expressad.foundation.h.t.b(r4, r5)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r5, r5)
            r5 = 13
            r1 = -1
            r0.addRule(r5, r1)
            android.widget.RelativeLayout r5 = r4.i
            android.widget.ImageView r2 = r4.c
            r5.addView(r2, r0)
            android.widget.TextView r5 = new android.widget.TextView
            r5.<init>(r4)
            r5.setSingleLine()
            r5.setTextColor(r1)
            r0 = 1098907648(0x41800000, float:16.0)
            r5.setTextSize(r0)
            java.lang.String r0 = "Relax while loading...."
            r5.setText(r0)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r0.<init>(r2, r2)
            r2 = 3
            android.widget.ImageView r3 = r4.c
            int r3 = r3.getId()
            r0.addRule(r2, r3)
            r2 = 14
            r0.addRule(r2, r1)
            android.widget.RelativeLayout r2 = r4.i
            r2.addView(r5, r0)
            android.widget.RelativeLayout r5 = r4.b
            android.widget.RelativeLayout r0 = r4.i
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r2.<init>(r1, r1)
            r5.addView(r0, r2)
        Le5:
            android.widget.RelativeLayout r5 = r4.b
            r4.setContentView(r5)
            return
    }

    @Override
    protected void onDestroy() {
            r2 = this;
            android.content.BroadcastReceiver r0 = r2.a
            if (r0 == 0) goto Ld
            com.tkay.core.common.b.j r0 = com.tkay.core.common.b.j.a(r2)
            android.content.BroadcastReceiver r1 = r2.a
            r0.a(r1)
        Ld:
            android.widget.ImageView r0 = r2.c
            r1 = 0
            if (r0 == 0) goto L15
            r0.setImageBitmap(r1)
        L15:
            r2.c = r1
            r2.b = r1
            r2.g = r1
            r2.h = r1
            android.widget.RelativeLayout r0 = r2.i
            if (r0 == 0) goto L24
            r0.setBackgroundDrawable(r1)
        L24:
            r2.i = r1
            android.graphics.Bitmap r0 = r2.d
            if (r0 == 0) goto L32
            boolean r0 = r0.isRecycled()
            if (r0 != 0) goto L32
            r2.d = r1
        L32:
            super.onDestroy()
            return
    }

    @Override
    protected void onResume() {
            r3 = this;
            super.onResume()
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "ExitApp"
            r0.addAction(r1)
            android.content.BroadcastReceiver r1 = r3.a
            if (r1 == 0) goto L1a
            com.tkay.core.common.b.j r1 = com.tkay.core.common.b.j.a(r3)
            android.content.BroadcastReceiver r2 = r3.a
            r1.a(r2, r0)
        L1a:
            return
    }
}
