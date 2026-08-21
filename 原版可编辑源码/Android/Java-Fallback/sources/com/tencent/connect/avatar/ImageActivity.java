package com.tencent.connect.avatar;

public class ImageActivity extends android.app.Activity {
    android.widget.RelativeLayout a;
    private com.tencent.connect.auth.QQToken b;
    private java.lang.String c;
    private android.os.Handler d;
    private com.tencent.connect.avatar.c e;
    private android.widget.Button f;
    private android.widget.Button g;
    private com.tencent.connect.avatar.b h;
    private android.widget.TextView i;
    private android.widget.ProgressBar j;
    private int k;
    private boolean l;
    private long m;
    private int n;
    private final int o;
    private final int p;
    private android.graphics.Rect q;
    private java.lang.String r;
    private android.graphics.Bitmap s;
    private final android.view.View.OnClickListener t;
    private final android.view.View.OnClickListener u;
    private final com.tencent.tauth.IUiListener v;
    private final com.tencent.tauth.IUiListener w;







    private class QQAvatarImp extends com.tencent.connect.common.BaseApi {
        final com.tencent.connect.avatar.ImageActivity a;

        public QQAvatarImp(com.tencent.connect.avatar.ImageActivity r1, com.tencent.connect.auth.QQToken r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        public void setAvator(android.graphics.Bitmap r14, com.tencent.tauth.IUiListener r15) {
                r13 = this;
                android.os.Bundle r3 = r13.a()
                java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
                r0.<init>()
                android.graphics.Bitmap$CompressFormat r1 = android.graphics.Bitmap.CompressFormat.JPEG
                r2 = 40
                r14.compress(r1, r2, r0)
                byte[] r0 = r0.toByteArray()
                r14.recycle()
                com.tencent.connect.common.BaseApi$TempRequestListener r5 = new com.tencent.connect.common.BaseApi$TempRequestListener
                r5.<init>(r13, r15)
                java.lang.String r14 = "picture"
                r3.putByteArray(r14, r0)
                com.tencent.connect.auth.QQToken r0 = r13.c
                android.content.Context r1 = com.tencent.open.utils.g.a()
                java.lang.String r2 = "user/set_user_face"
                java.lang.String r4 = "POST"
                com.tencent.open.utils.HttpUtils.requestAsync(r0, r1, r2, r3, r4, r5)
                com.tencent.open.b.e r6 = com.tencent.open.b.e.a()
                com.tencent.connect.auth.QQToken r14 = r13.c
                java.lang.String r7 = r14.getOpenId()
                com.tencent.connect.auth.QQToken r14 = r13.c
                java.lang.String r8 = r14.getAppId()
                java.lang.String r9 = "ANDROIDSDK.SETAVATAR.SUCCEED"
                java.lang.String r10 = "12"
                java.lang.String r11 = "19"
                java.lang.String r12 = "0"
                r6.a(r7, r8, r9, r10, r11, r12)
                return
        }
    }

    class a extends android.view.View {
        final com.tencent.connect.avatar.ImageActivity a;

        public a(com.tencent.connect.avatar.ImageActivity r1, android.content.Context r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        public void a(android.widget.Button r6) {
                r5 = this;
                android.graphics.drawable.StateListDrawable r0 = new android.graphics.drawable.StateListDrawable
                r0.<init>()
                com.tencent.connect.avatar.ImageActivity r1 = r5.a
                java.lang.String r2 = "com.tencent.plus.blue_normal.png"
                android.graphics.drawable.Drawable r1 = com.tencent.connect.avatar.ImageActivity.a(r1, r2)
                com.tencent.connect.avatar.ImageActivity r2 = r5.a
                java.lang.String r3 = "com.tencent.plus.blue_down.png"
                android.graphics.drawable.Drawable r2 = com.tencent.connect.avatar.ImageActivity.a(r2, r3)
                com.tencent.connect.avatar.ImageActivity r3 = r5.a
                java.lang.String r4 = "com.tencent.plus.blue_disable.png"
                android.graphics.drawable.Drawable r3 = com.tencent.connect.avatar.ImageActivity.a(r3, r4)
                int[] r4 = android.view.View.PRESSED_ENABLED_STATE_SET
                r0.addState(r4, r2)
                int[] r2 = android.view.View.ENABLED_FOCUSED_STATE_SET
                r0.addState(r2, r1)
                int[] r2 = android.view.View.ENABLED_STATE_SET
                r0.addState(r2, r1)
                int[] r2 = android.view.View.FOCUSED_STATE_SET
                r0.addState(r2, r1)
                int[] r1 = android.view.View.EMPTY_STATE_SET
                r0.addState(r1, r3)
                r6.setBackgroundDrawable(r0)
                return
        }

        public void b(android.widget.Button r6) {
                r5 = this;
                android.graphics.drawable.StateListDrawable r0 = new android.graphics.drawable.StateListDrawable
                r0.<init>()
                com.tencent.connect.avatar.ImageActivity r1 = r5.a
                java.lang.String r2 = "com.tencent.plus.gray_normal.png"
                android.graphics.drawable.Drawable r1 = com.tencent.connect.avatar.ImageActivity.a(r1, r2)
                com.tencent.connect.avatar.ImageActivity r2 = r5.a
                java.lang.String r3 = "com.tencent.plus.gray_down.png"
                android.graphics.drawable.Drawable r2 = com.tencent.connect.avatar.ImageActivity.a(r2, r3)
                com.tencent.connect.avatar.ImageActivity r3 = r5.a
                java.lang.String r4 = "com.tencent.plus.gray_disable.png"
                android.graphics.drawable.Drawable r3 = com.tencent.connect.avatar.ImageActivity.a(r3, r4)
                int[] r4 = android.view.View.PRESSED_ENABLED_STATE_SET
                r0.addState(r4, r2)
                int[] r2 = android.view.View.ENABLED_FOCUSED_STATE_SET
                r0.addState(r2, r1)
                int[] r2 = android.view.View.ENABLED_STATE_SET
                r0.addState(r2, r1)
                int[] r2 = android.view.View.FOCUSED_STATE_SET
                r0.addState(r2, r1)
                int[] r1 = android.view.View.EMPTY_STATE_SET
                r0.addState(r1, r3)
                r6.setBackgroundDrawable(r0)
                return
        }
    }

    public ImageActivity() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.k = r0
            r3.l = r0
            r1 = 0
            r3.m = r1
            r3.n = r0
            r0 = 640(0x280, float:8.97E-43)
            r3.o = r0
            r3.p = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r3.q = r0
            com.tencent.connect.avatar.ImageActivity$2 r0 = new com.tencent.connect.avatar.ImageActivity$2
            r0.<init>(r3)
            r3.t = r0
            com.tencent.connect.avatar.ImageActivity$3 r0 = new com.tencent.connect.avatar.ImageActivity$3
            r0.<init>(r3)
            r3.u = r0
            com.tencent.connect.avatar.ImageActivity$5 r0 = new com.tencent.connect.avatar.ImageActivity$5
            r0.<init>(r3)
            r3.v = r0
            com.tencent.connect.avatar.ImageActivity$6 r0 = new com.tencent.connect.avatar.ImageActivity$6
            r0.<init>(r3)
            r3.w = r0
            return
    }

    private android.graphics.Bitmap a(java.lang.String r8) throws java.io.IOException {
            r7 = this;
            android.graphics.BitmapFactory$Options r0 = new android.graphics.BitmapFactory$Options
            r0.<init>()
            r1 = 1
            r0.inJustDecodeBounds = r1
            android.net.Uri r8 = android.net.Uri.parse(r8)
            android.content.ContentResolver r2 = r7.getContentResolver()
            java.io.InputStream r2 = r2.openInputStream(r8)
            r3 = 0
            if (r2 != 0) goto L18
            return r3
        L18:
            android.graphics.BitmapFactory.decodeStream(r2, r3, r0)     // Catch: java.lang.OutOfMemoryError -> L1c
            goto L20
        L1c:
            r4 = move-exception
            r4.printStackTrace()
        L20:
            r2.close()
            r2 = 4194304(0x400000, float:5.877472E-39)
            int r4 = r0.outWidth
            int r5 = r0.outHeight
        L29:
            int r6 = r4 * r5
            if (r6 > r2) goto L44
            r2 = 0
            r0.inJustDecodeBounds = r2
            r0.inSampleSize = r1
            android.content.ContentResolver r1 = r7.getContentResolver()
            java.io.InputStream r8 = r1.openInputStream(r8)
            android.graphics.Bitmap r3 = android.graphics.BitmapFactory.decodeStream(r8, r3, r0)     // Catch: java.lang.OutOfMemoryError -> L3f
            goto L43
        L3f:
            r8 = move-exception
            r8.printStackTrace()
        L43:
            return r3
        L44:
            int r4 = r4 / 2
            int r5 = r5 / 2
            int r1 = r1 * 2
            goto L29
    }

    static android.graphics.Rect a(com.tencent.connect.avatar.ImageActivity r0, android.graphics.Rect r1) {
            r0.q = r1
            return r1
    }

    static android.graphics.drawable.Drawable a(com.tencent.connect.avatar.ImageActivity r0, java.lang.String r1) {
            android.graphics.drawable.Drawable r0 = r0.b(r1)
            return r0
    }

    private android.view.View a() {
            r15 = this;
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            android.view.ViewGroup$LayoutParams r2 = new android.view.ViewGroup$LayoutParams
            r2.<init>(r1, r1)
            android.view.ViewGroup$LayoutParams r3 = new android.view.ViewGroup$LayoutParams
            r4 = -2
            r3.<init>(r4, r4)
            android.widget.RelativeLayout r5 = new android.widget.RelativeLayout
            r5.<init>(r15)
            r15.a = r5
            r5.setLayoutParams(r0)
            android.widget.RelativeLayout r0 = r15.a
            r5 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0.setBackgroundColor(r5)
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r15)
            r0.setLayoutParams(r3)
            android.widget.RelativeLayout r5 = r15.a
            r5.addView(r0)
            com.tencent.connect.avatar.c r5 = new com.tencent.connect.avatar.c
            r5.<init>(r15)
            r15.e = r5
            r5.setLayoutParams(r2)
            com.tencent.connect.avatar.c r5 = r15.e
            android.widget.ImageView$ScaleType r6 = android.widget.ImageView.ScaleType.MATRIX
            r5.setScaleType(r6)
            com.tencent.connect.avatar.c r5 = r15.e
            r0.addView(r5)
            com.tencent.connect.avatar.b r5 = new com.tencent.connect.avatar.b
            r5.<init>(r15)
            r15.h = r5
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r5.<init>(r2)
            r2 = 14
            r5.addRule(r2, r1)
            r6 = 15
            r5.addRule(r6, r1)
            com.tencent.connect.avatar.b r7 = r15.h
            r7.setLayoutParams(r5)
            com.tencent.connect.avatar.b r5 = r15.h
            r0.addView(r5)
            android.widget.LinearLayout r0 = new android.widget.LinearLayout
            r0.<init>(r15)
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r7 = 1117782016(0x42a00000, float:80.0)
            int r7 = com.tencent.connect.avatar.a.a(r15, r7)
            r5.<init>(r4, r7)
            r5.addRule(r2, r1)
            r0.setLayoutParams(r5)
            r4 = 0
            r0.setOrientation(r4)
            r5 = 17
            r0.setGravity(r5)
            android.widget.RelativeLayout r5 = r15.a
            r5.addView(r0)
            android.widget.ImageView r5 = new android.widget.ImageView
            r5.<init>(r15)
            android.widget.LinearLayout$LayoutParams r7 = new android.widget.LinearLayout$LayoutParams
            r8 = 1103101952(0x41c00000, float:24.0)
            int r9 = com.tencent.connect.avatar.a.a(r15, r8)
            int r10 = com.tencent.connect.avatar.a.a(r15, r8)
            r7.<init>(r9, r10)
            r5.setLayoutParams(r7)
            java.lang.String r7 = "com.tencent.plus.logo.png"
            android.graphics.drawable.Drawable r7 = r15.b(r7)
            r5.setImageDrawable(r7)
            r0.addView(r5)
            android.widget.TextView r5 = new android.widget.TextView
            r5.<init>(r15)
            r15.i = r5
            android.widget.LinearLayout$LayoutParams r5 = new android.widget.LinearLayout$LayoutParams
            r5.<init>(r3)
            r7 = 1088421888(0x40e00000, float:7.0)
            int r9 = com.tencent.connect.avatar.a.a(r15, r7)
            r5.leftMargin = r9
            android.widget.TextView r9 = r15.i
            r9.setLayoutParams(r5)
            android.widget.TextView r5 = r15.i
            android.text.TextUtils$TruncateAt r9 = android.text.TextUtils.TruncateAt.END
            r5.setEllipsize(r9)
            android.widget.TextView r5 = r15.i
            r5.setSingleLine()
            android.widget.TextView r5 = r15.i
            r5.setTextColor(r1)
            android.widget.TextView r5 = r15.i
            r5.setTextSize(r8)
            android.widget.TextView r5 = r15.i
            r8 = 8
            r5.setVisibility(r8)
            android.widget.TextView r5 = r15.i
            r0.addView(r5)
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout
            r0.<init>(r15)
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r9 = 1114636288(0x42700000, float:60.0)
            int r9 = com.tencent.connect.avatar.a.a(r15, r9)
            r5.<init>(r1, r9)
            r9 = 12
            r5.addRule(r9, r1)
            r9 = 9
            r5.addRule(r9, r1)
            r0.setLayoutParams(r5)
            java.lang.String r5 = "com.tencent.plus.bar.png"
            android.graphics.drawable.Drawable r5 = r15.b(r5)
            r0.setBackgroundDrawable(r5)
            r5 = 1092616192(0x41200000, float:10.0)
            int r5 = com.tencent.connect.avatar.a.a(r15, r5)
            r0.setPadding(r5, r5, r5, r4)
            android.widget.RelativeLayout r5 = r15.a
            r5.addView(r0)
            com.tencent.connect.avatar.ImageActivity$a r5 = new com.tencent.connect.avatar.ImageActivity$a
            r5.<init>(r15, r15)
            r9 = 1096810496(0x41600000, float:14.0)
            int r9 = com.tencent.connect.avatar.a.a(r15, r9)
            int r7 = com.tencent.connect.avatar.a.a(r15, r7)
            android.widget.Button r10 = new android.widget.Button
            r10.<init>(r15)
            r15.g = r10
            android.widget.RelativeLayout$LayoutParams r10 = new android.widget.RelativeLayout$LayoutParams
            r11 = 1117519872(0x429c0000, float:78.0)
            int r12 = com.tencent.connect.avatar.a.a(r15, r11)
            r13 = 1110704128(0x42340000, float:45.0)
            int r14 = com.tencent.connect.avatar.a.a(r15, r13)
            r10.<init>(r12, r14)
            android.widget.Button r12 = r15.g
            r12.setLayoutParams(r10)
            android.widget.Button r10 = r15.g
            java.lang.String r12 = "取消"
            r10.setText(r12)
            android.widget.Button r10 = r15.g
            r10.setTextColor(r1)
            android.widget.Button r10 = r15.g
            r12 = 1099956224(0x41900000, float:18.0)
            r10.setTextSize(r12)
            android.widget.Button r10 = r15.g
            r10.setPadding(r9, r7, r9, r7)
            android.widget.Button r10 = r15.g
            r5.b(r10)
            android.widget.Button r10 = r15.g
            r0.addView(r10)
            android.widget.Button r10 = new android.widget.Button
            r10.<init>(r15)
            r15.f = r10
            android.widget.RelativeLayout$LayoutParams r10 = new android.widget.RelativeLayout$LayoutParams
            int r11 = com.tencent.connect.avatar.a.a(r15, r11)
            int r13 = com.tencent.connect.avatar.a.a(r15, r13)
            r10.<init>(r11, r13)
            r11 = 11
            r10.addRule(r11, r1)
            android.widget.Button r11 = r15.f
            r11.setLayoutParams(r10)
            android.widget.Button r10 = r15.f
            r10.setTextColor(r1)
            android.widget.Button r10 = r15.f
            r10.setTextSize(r12)
            android.widget.Button r10 = r15.f
            r10.setPadding(r9, r7, r9, r7)
            android.widget.Button r7 = r15.f
            java.lang.String r9 = "选取"
            r7.setText(r9)
            android.widget.Button r7 = r15.f
            r5.a(r7)
            android.widget.Button r5 = r15.f
            r0.addView(r5)
            android.widget.TextView r5 = new android.widget.TextView
            r5.<init>(r15)
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams
            r7.<init>(r3)
            r9 = 13
            r7.addRule(r9, r1)
            r5.setLayoutParams(r7)
            java.lang.String r7 = "移动和缩放"
            r5.setText(r7)
            r7 = 1077936128(0x40400000, float:3.0)
            int r7 = com.tencent.connect.avatar.a.a(r15, r7)
            r5.setPadding(r4, r7, r4, r4)
            r5.setTextSize(r12)
            r5.setTextColor(r1)
            r0.addView(r5)
            android.widget.ProgressBar r0 = new android.widget.ProgressBar
            r0.<init>(r15)
            r15.j = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r3)
            r0.addRule(r2, r1)
            r0.addRule(r6, r1)
            android.widget.ProgressBar r1 = r15.j
            r1.setLayoutParams(r0)
            android.widget.ProgressBar r0 = r15.j
            r0.setVisibility(r8)
            android.widget.RelativeLayout r0 = r15.a
            android.widget.ProgressBar r1 = r15.j
            r0.addView(r1)
            android.widget.RelativeLayout r0 = r15.a
            return r0
    }

    static com.tencent.connect.avatar.b a(com.tencent.connect.avatar.ImageActivity r0) {
            com.tencent.connect.avatar.b r0 = r0.h
            return r0
    }

    private void a(int r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "key_error_code"
            r0.putExtra(r1, r3)
            java.lang.String r3 = "key_error_msg"
            r0.putExtra(r3, r5)
            java.lang.String r3 = "key_error_detail"
            r0.putExtra(r3, r6)
            java.lang.String r3 = "key_response"
            r0.putExtra(r3, r4)
            r3 = -1
            r2.setResult(r3, r0)
            return
    }

    private void a(android.graphics.Bitmap r3) {
            r2 = this;
            com.tencent.connect.avatar.ImageActivity$QQAvatarImp r0 = new com.tencent.connect.avatar.ImageActivity$QQAvatarImp
            com.tencent.connect.auth.QQToken r1 = r2.b
            r0.<init>(r2, r1)
            com.tencent.tauth.IUiListener r1 = r2.v
            r0.setAvator(r3, r1)
            return
    }

    static void a(com.tencent.connect.avatar.ImageActivity r0, int r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    static void a(com.tencent.connect.avatar.ImageActivity r0, java.lang.String r1, int r2) {
            r0.b(r1, r2)
            return
    }

    private void a(java.lang.String r3, int r4) {
            r2 = this;
            android.os.Handler r0 = r2.d
            com.tencent.connect.avatar.ImageActivity$4 r1 = new com.tencent.connect.avatar.ImageActivity$4
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }

    public static void a(java.lang.String r3, long r4, java.lang.String r6) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "strValue"
            r0.put(r1, r6)
            java.lang.String r6 = "nValue"
            r0.put(r6, r3)
            java.lang.String r3 = "qver"
            java.lang.String r6 = "3.5.14.lite"
            r0.put(r3, r6)
            r1 = 0
            int r3 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r3 == 0) goto L25
            java.lang.String r3 = java.lang.String.valueOf(r4)
            java.lang.String r4 = "elt"
            r0.put(r4, r3)
        L25:
            com.tencent.open.b.h r3 = com.tencent.open.b.h.a()
            java.lang.String r4 = "https://cgi.qplus.com/report/report"
            r3.a(r4, r0)
            return
    }

    static boolean a(com.tencent.connect.avatar.ImageActivity r0, boolean r1) {
            r0.l = r1
            return r1
    }

    static android.graphics.Rect b(com.tencent.connect.avatar.ImageActivity r0) {
            android.graphics.Rect r0 = r0.q
            return r0
    }

    private android.graphics.drawable.Drawable b(java.lang.String r1) {
            r0 = this;
            android.graphics.drawable.Drawable r1 = com.tencent.open.utils.m.a(r1, r0)
            return r1
    }

    private void b() {
            r4 = this;
            java.lang.String r0 = r4.r     // Catch: java.io.IOException -> L2e
            android.graphics.Bitmap r0 = r4.a(r0)     // Catch: java.io.IOException -> L2e
            r4.s = r0     // Catch: java.io.IOException -> L2e
            if (r0 == 0) goto L10
            com.tencent.connect.avatar.c r1 = r4.e     // Catch: java.io.IOException -> L2e
            r1.setImageBitmap(r0)     // Catch: java.io.IOException -> L2e
            goto L44
        L10:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.IOException -> L2e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L2e
            r1.<init>()     // Catch: java.io.IOException -> L2e
            java.lang.String r2 = "cannot read picture: '"
            r1.append(r2)     // Catch: java.io.IOException -> L2e
            java.lang.String r2 = r4.r     // Catch: java.io.IOException -> L2e
            r1.append(r2)     // Catch: java.io.IOException -> L2e
            java.lang.String r2 = "'!"
            r1.append(r2)     // Catch: java.io.IOException -> L2e
            java.lang.String r1 = r1.toString()     // Catch: java.io.IOException -> L2e
            r0.<init>(r1)     // Catch: java.io.IOException -> L2e
            throw r0     // Catch: java.io.IOException -> L2e
        L2e:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r1 = "图片读取失败，请检查该图片是否有效"
            r2 = 1
            r4.a(r1, r2)
            r2 = -5
            r3 = 0
            java.lang.String r0 = r0.getMessage()
            r4.a(r2, r3, r1, r0)
            r4.d()
        L44:
            android.widget.Button r0 = r4.f
            android.view.View$OnClickListener r1 = r4.t
            r0.setOnClickListener(r1)
            android.widget.Button r0 = r4.g
            android.view.View$OnClickListener r1 = r4.u
            r0.setOnClickListener(r1)
            android.widget.RelativeLayout r0 = r4.a
            android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
            com.tencent.connect.avatar.ImageActivity$1 r1 = new com.tencent.connect.avatar.ImageActivity$1
            r1.<init>(r4)
            r0.addOnGlobalLayoutListener(r1)
            return
    }

    static void b(com.tencent.connect.avatar.ImageActivity r0, java.lang.String r1) {
            r0.c(r1)
            return
    }

    static void b(com.tencent.connect.avatar.ImageActivity r0, java.lang.String r1, int r2) {
            r0.a(r1, r2)
            return
    }

    private void b(java.lang.String r7, int r8) {
            r6 = this;
            r0 = 1
            android.widget.Toast r7 = android.widget.Toast.makeText(r6, r7, r0)
            android.view.View r0 = r7.getView()
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r1 = 0
            android.view.View r2 = r0.getChildAt(r1)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r3 = 8
            r2.setPadding(r3, r1, r1, r1)
            android.widget.ImageView r2 = new android.widget.ImageView
            r2.<init>(r6)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r4 = 1098907648(0x41800000, float:16.0)
            int r5 = com.tencent.connect.avatar.a.a(r6, r4)
            int r4 = com.tencent.connect.avatar.a.a(r6, r4)
            r3.<init>(r5, r4)
            r2.setLayoutParams(r3)
            if (r8 != 0) goto L3a
            java.lang.String r8 = "com.tencent.plus.ic_success.png"
            android.graphics.drawable.Drawable r8 = r6.b(r8)
            r2.setImageDrawable(r8)
            goto L43
        L3a:
            java.lang.String r8 = "com.tencent.plus.ic_error.png"
            android.graphics.drawable.Drawable r8 = r6.b(r8)
            r2.setImageDrawable(r8)
        L43:
            r0.addView(r2, r1)
            r0.setOrientation(r1)
            r8 = 17
            r0.setGravity(r8)
            r7.setView(r0)
            r7.setGravity(r8, r1, r1)
            r7.show()
            return
    }

    static com.tencent.connect.avatar.c c(com.tencent.connect.avatar.ImageActivity r0) {
            com.tencent.connect.avatar.c r0 = r0.e
            return r0
    }

    private void c() {
            r14 = this;
            android.graphics.Rect r0 = r14.q
            int r0 = r0.width()
            float r0 = (float) r0
            com.tencent.connect.avatar.c r1 = r14.e
            android.graphics.Matrix r1 = r1.getImageMatrix()
            r2 = 9
            float[] r2 = new float[r2]
            r1.getValues(r2)
            r3 = 2
            r3 = r2[r3]
            r4 = 5
            r4 = r2[r4]
            r5 = 0
            r2 = r2[r5]
            r6 = 1142947840(0x44200000, float:640.0)
            float r6 = r6 / r0
            android.graphics.Rect r0 = r14.q
            int r0 = r0.left
            float r0 = (float) r0
            float r0 = r0 - r3
            float r0 = r0 / r2
            int r0 = (int) r0
            if (r0 >= 0) goto L2c
            r8 = 0
            goto L2d
        L2c:
            r8 = r0
        L2d:
            android.graphics.Rect r0 = r14.q
            int r0 = r0.top
            float r0 = (float) r0
            float r0 = r0 - r4
            float r0 = r0 / r2
            int r0 = (int) r0
            if (r0 >= 0) goto L39
            r9 = 0
            goto L3a
        L39:
            r9 = r0
        L3a:
            android.graphics.Matrix r12 = new android.graphics.Matrix
            r12.<init>()
            r12.set(r1)
            r12.postScale(r6, r6)
            r0 = 1143111680(0x44228000, float:650.0)
            float r0 = r0 / r2
            int r0 = (int) r0
            android.graphics.Bitmap r1 = r14.s
            int r1 = r1.getWidth()
            int r1 = r1 - r8
            int r10 = java.lang.Math.min(r1, r0)
            android.graphics.Bitmap r1 = r14.s
            int r1 = r1.getHeight()
            int r1 = r1 - r9
            int r11 = java.lang.Math.min(r1, r0)
            android.graphics.Bitmap r7 = r14.s     // Catch: java.lang.IllegalArgumentException -> L74
            r13 = 1
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r7, r8, r9, r10, r11, r12, r13)     // Catch: java.lang.IllegalArgumentException -> L74
            r1 = 640(0x280, float:8.97E-43)
            android.graphics.Bitmap r1 = android.graphics.Bitmap.createBitmap(r0, r5, r5, r1, r1)     // Catch: java.lang.IllegalArgumentException -> L74
            r0.recycle()     // Catch: java.lang.IllegalArgumentException -> L74
            r14.a(r1)     // Catch: java.lang.IllegalArgumentException -> L74
            goto L8a
        L74:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r1 = "图片读取失败，请检查该图片是否有效"
            r2 = 1
            r14.a(r1, r2)
            r2 = -5
            r3 = 0
            java.lang.String r0 = r0.getMessage()
            r14.a(r2, r3, r1, r0)
            r14.d()
        L8a:
            return
    }

    private void c(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = r1.d(r2)
            java.lang.String r0 = ""
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L17
            android.widget.TextView r0 = r1.i
            r0.setText(r2)
            android.widget.TextView r2 = r1.i
            r0 = 0
            r2.setVisibility(r0)
        L17:
            return
    }

    static android.widget.ProgressBar d(com.tencent.connect.avatar.ImageActivity r0) {
            android.widget.ProgressBar r0 = r0.j
            return r0
    }

    private java.lang.String d(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "&gt;"
            java.lang.String r1 = ">"
            java.lang.String r3 = r3.replaceAll(r0, r1)
            java.lang.String r0 = "&lt;"
            java.lang.String r1 = "<"
            java.lang.String r3 = r3.replaceAll(r0, r1)
            java.lang.String r0 = "&quot;"
            java.lang.String r1 = "\""
            java.lang.String r3 = r3.replaceAll(r0, r1)
            java.lang.String r0 = "&#39;"
            java.lang.String r1 = "'"
            java.lang.String r3 = r3.replaceAll(r0, r1)
            java.lang.String r0 = "&amp;"
            java.lang.String r1 = "&"
            java.lang.String r3 = r3.replaceAll(r0, r1)
            return r3
    }

    private void d() {
            r2 = this;
            r2.finish()
            int r0 = r2.n
            if (r0 == 0) goto Lb
            r1 = 0
            r2.overridePendingTransition(r1, r0)
        Lb:
            return
    }

    static android.widget.Button e(com.tencent.connect.avatar.ImageActivity r0) {
            android.widget.Button r0 = r0.g
            return r0
    }

    private void e() {
            r2 = this;
            int r0 = r2.k
            int r0 = r0 + 1
            r2.k = r0
            com.tencent.connect.UserInfo r0 = new com.tencent.connect.UserInfo
            com.tencent.connect.auth.QQToken r1 = r2.b
            r0.<init>(r2, r1)
            com.tencent.tauth.IUiListener r1 = r2.w
            r0.getUserInfo(r1)
            return
    }

    static android.widget.Button f(com.tencent.connect.avatar.ImageActivity r0) {
            android.widget.Button r0 = r0.f
            return r0
    }

    static void g(com.tencent.connect.avatar.ImageActivity r0) {
            r0.c()
            return
    }

    static boolean h(com.tencent.connect.avatar.ImageActivity r0) {
            boolean r0 = r0.l
            return r0
    }

    static long i(com.tencent.connect.avatar.ImageActivity r2) {
            long r0 = r2.m
            return r0
    }

    static void j(com.tencent.connect.avatar.ImageActivity r0) {
            r0.d()
            return
    }

    static com.tencent.connect.auth.QQToken k(com.tencent.connect.avatar.ImageActivity r0) {
            com.tencent.connect.auth.QQToken r0 = r0.b
            return r0
    }

    static java.lang.String l(com.tencent.connect.avatar.ImageActivity r0) {
            java.lang.String r0 = r0.c
            return r0
    }

    static android.os.Handler m(com.tencent.connect.avatar.ImageActivity r0) {
            android.os.Handler r0 = r0.d
            return r0
    }

    static int n(com.tencent.connect.avatar.ImageActivity r0) {
            int r0 = r0.k
            return r0
    }

    static void o(com.tencent.connect.avatar.ImageActivity r0) {
            r0.e()
            return
    }

    public void a(java.lang.String r2, long r3) {
            r1 = this;
            com.tencent.connect.auth.QQToken r0 = r1.b
            java.lang.String r0 = r0.getAppId()
            a(r2, r3, r0)
            return
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            r0 = 0
            r1.setResult(r0)
            r1.d()
            return
    }

    @Override
    public void onCreate(android.os.Bundle r8) {
            r7 = this;
            r0 = 1
            r7.requestWindowFeature(r0)
            super.onCreate(r8)
            r7.setRequestedOrientation(r0)
            android.view.View r8 = r7.a()
            r7.setContentView(r8)
            android.os.Handler r8 = new android.os.Handler
            r8.<init>()
            r7.d = r8
            android.content.Intent r8 = r7.getIntent()
            java.lang.String r0 = "key_params"
            android.os.Bundle r8 = r8.getBundleExtra(r0)
            java.lang.String r0 = "picture"
            java.lang.String r0 = r8.getString(r0)
            r7.r = r0
            java.lang.String r0 = "return_activity"
            java.lang.String r0 = r8.getString(r0)
            r7.c = r0
            java.lang.String r0 = "appid"
            java.lang.String r0 = r8.getString(r0)
            java.lang.String r1 = "access_token"
            java.lang.String r1 = r8.getString(r1)
            java.lang.String r2 = "expires_in"
            long r2 = r8.getLong(r2)
            java.lang.String r4 = "openid"
            java.lang.String r4 = r8.getString(r4)
            java.lang.String r5 = "exitAnim"
            int r8 = r8.getInt(r5)
            r7.n = r8
            com.tencent.connect.auth.QQToken r8 = new com.tencent.connect.auth.QQToken
            r8.<init>(r0)
            r7.b = r8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r5 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r5
            r5 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r5
            r0.append(r2)
            java.lang.String r2 = ""
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r8.setAccessToken(r1, r0)
            com.tencent.connect.auth.QQToken r8 = r7.b
            r8.setOpenId(r4)
            r7.b()
            r7.e()
            long r0 = java.lang.System.currentTimeMillis()
            r7.m = r0
            java.lang.String r8 = "10653"
            r0 = 0
            r7.a(r8, r0)
            return
    }

    @Override
    protected void onDestroy() {
            r2 = this;
            super.onDestroy()
            com.tencent.connect.avatar.c r0 = r2.e
            r1 = 0
            r0.setImageBitmap(r1)
            android.graphics.Bitmap r0 = r2.s
            if (r0 == 0) goto L18
            boolean r0 = r0.isRecycled()
            if (r0 != 0) goto L18
            android.graphics.Bitmap r0 = r2.s
            r0.recycle()
        L18:
            return
    }
}
