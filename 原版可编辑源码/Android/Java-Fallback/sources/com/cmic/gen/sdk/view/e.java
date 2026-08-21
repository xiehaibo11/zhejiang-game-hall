package com.cmic.gen.sdk.view;

public class e {
    private static java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> a;






    static {
            return
    }

    public static int a(android.content.Context r1) {
            java.lang.String r0 = "window"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.view.WindowManager r1 = (android.view.WindowManager) r1
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            if (r1 == 0) goto L16
            android.view.Display r1 = r1.getDefaultDisplay()
            r1.getMetrics(r0)
        L16:
            int r1 = r0.widthPixels
            return r1
    }

    public static int a(android.content.Context r1, float r2) {
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 >= 0) goto L7
            int r1 = (int) r2
            return r1
        L7:
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Exception -> L18
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()     // Catch: java.lang.Exception -> L18
            float r1 = r1.density     // Catch: java.lang.Exception -> L18
            float r2 = r2 * r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r1
            int r1 = (int) r2
            return r1
        L18:
            int r1 = (int) r2
            return r1
    }

    public static android.text.SpannableString a(android.content.Context r10, java.lang.String r11, java.lang.String r12, com.cmic.gen.sdk.view.d r13, java.util.ArrayList<com.cmic.gen.sdk.view.d> r14, java.util.ArrayList<java.lang.String> r15) {
            java.lang.String r0 = "getClauseSpannableString"
            com.cmic.gen.sdk.e.c.b(r0, r11)
            android.text.SpannableString r0 = new android.text.SpannableString
            r0.<init>(r11)
            com.cmic.gen.sdk.view.e$1 r1 = new com.cmic.gen.sdk.view.e$1     // Catch: java.lang.Exception -> Le0
            r1.<init>(r10, r13)     // Catch: java.lang.Exception -> Le0
            int r13 = r14.size()     // Catch: java.lang.Exception -> Le0
            r2 = 1
            r3 = 0
            if (r13 < r2) goto L1d
            com.cmic.gen.sdk.view.e$2 r13 = new com.cmic.gen.sdk.view.e$2     // Catch: java.lang.Exception -> Le0
            r13.<init>(r10, r14)     // Catch: java.lang.Exception -> Le0
            goto L1e
        L1d:
            r13 = r3
        L1e:
            int r4 = r14.size()     // Catch: java.lang.Exception -> Le0
            r5 = 2
            if (r4 < r5) goto L2b
            com.cmic.gen.sdk.view.e$3 r4 = new com.cmic.gen.sdk.view.e$3     // Catch: java.lang.Exception -> Le0
            r4.<init>(r10, r14)     // Catch: java.lang.Exception -> Le0
            goto L2c
        L2b:
            r4 = r3
        L2c:
            int r6 = r14.size()     // Catch: java.lang.Exception -> Le0
            r7 = 3
            if (r6 < r7) goto L39
            com.cmic.gen.sdk.view.e$4 r6 = new com.cmic.gen.sdk.view.e$4     // Catch: java.lang.Exception -> Le0
            r6.<init>(r10, r14)     // Catch: java.lang.Exception -> Le0
            goto L3a
        L39:
            r6 = r3
        L3a:
            int r8 = r14.size()     // Catch: java.lang.Exception -> Le0
            r9 = 4
            if (r8 != r9) goto L46
            com.cmic.gen.sdk.view.e$5 r3 = new com.cmic.gen.sdk.view.e$5     // Catch: java.lang.Exception -> Le0
            r3.<init>(r10, r14)     // Catch: java.lang.Exception -> Le0
        L46:
            com.cmic.gen.sdk.auth.GenAuthnHelper r10 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r10)     // Catch: java.lang.Exception -> Le0
            r10.getAuthThemeConfig()     // Catch: java.lang.Exception -> Le0
            int r10 = r11.indexOf(r12)     // Catch: java.lang.Exception -> Le0
            int r12 = r12.length()     // Catch: java.lang.Exception -> Le0
            int r12 = r12 + r10
            r8 = 34
            r0.setSpan(r1, r10, r12, r8)     // Catch: java.lang.Exception -> Le0
            int r10 = r14.size()     // Catch: java.lang.Exception -> Le0
            r12 = 0
            if (r10 < r2) goto L75
            java.lang.Object r10 = r15.get(r12)     // Catch: java.lang.Exception -> Le0
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> Le0
            int r1 = r11.indexOf(r10)     // Catch: java.lang.Exception -> Le0
            int r10 = r10.length()     // Catch: java.lang.Exception -> Le0
            int r10 = r10 + r1
            r0.setSpan(r13, r1, r10, r8)     // Catch: java.lang.Exception -> Le0
            goto L76
        L75:
            r1 = 0
        L76:
            int r10 = r14.size()     // Catch: java.lang.Exception -> Le0
            if (r10 < r5) goto L99
            java.lang.Object r10 = r15.get(r12)     // Catch: java.lang.Exception -> Le0
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> Le0
            int r10 = r10.length()     // Catch: java.lang.Exception -> Le0
            int r1 = r1 + r10
            java.lang.Object r10 = r15.get(r2)     // Catch: java.lang.Exception -> Le0
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> Le0
            int r1 = r11.indexOf(r10, r1)     // Catch: java.lang.Exception -> Le0
            int r10 = r10.length()     // Catch: java.lang.Exception -> Le0
            int r10 = r10 + r1
            r0.setSpan(r4, r1, r10, r8)     // Catch: java.lang.Exception -> Le0
        L99:
            int r10 = r14.size()     // Catch: java.lang.Exception -> Le0
            if (r10 < r7) goto Lbc
            java.lang.Object r10 = r15.get(r2)     // Catch: java.lang.Exception -> Le0
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> Le0
            int r10 = r10.length()     // Catch: java.lang.Exception -> Le0
            int r10 = r10 + r1
            java.lang.Object r12 = r15.get(r5)     // Catch: java.lang.Exception -> Le0
            java.lang.String r12 = (java.lang.String) r12     // Catch: java.lang.Exception -> Le0
            int r10 = r11.indexOf(r12, r10)     // Catch: java.lang.Exception -> Le0
            int r12 = r12.length()     // Catch: java.lang.Exception -> Le0
            int r12 = r12 + r10
            r0.setSpan(r6, r10, r12, r8)     // Catch: java.lang.Exception -> Le0
        Lbc:
            int r10 = r14.size()     // Catch: java.lang.Exception -> Le0
            if (r10 != r9) goto Ldf
            java.lang.Object r10 = r15.get(r5)     // Catch: java.lang.Exception -> Le0
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> Le0
            int r10 = r10.length()     // Catch: java.lang.Exception -> Le0
            int r1 = r1 + r10
            java.lang.Object r10 = r15.get(r7)     // Catch: java.lang.Exception -> Le0
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> Le0
            int r11 = r11.indexOf(r10, r1)     // Catch: java.lang.Exception -> Le0
            int r10 = r10.length()     // Catch: java.lang.Exception -> Le0
            int r10 = r10 + r11
            r0.setSpan(r3, r11, r10, r8)     // Catch: java.lang.Exception -> Le0
        Ldf:
            return r0
        Le0:
            r10 = move-exception
            r10.printStackTrace()
            return r0
    }

    public static android.widget.RelativeLayout a(android.content.Context r6, android.view.View r7, int r8, int r9, java.lang.String r10, android.view.View.OnClickListener r11) {
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r6)
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r0.getAuthThemeConfig()
            android.widget.RelativeLayout r1 = new android.widget.RelativeLayout
            r1.<init>(r6)
            r2 = -2
            if (r7 == 0) goto L12
            r3 = -2
            goto L18
        L12:
            r3 = 1111752704(0x42440000, float:49.0)
            int r3 = a(r6, r3)
        L18:
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            r5 = -1
            r4.<init>(r5, r3)
            r3 = 10
            r4.addRule(r3, r5)
            r1.setLayoutParams(r4)
            r1.setId(r8)
            android.widget.TextView r8 = new android.widget.TextView
            r8.<init>(r6)
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r3.<init>(r2, r2)
            r2 = 13
            r3.addRule(r2, r5)
            r8.setLayoutParams(r3)
            int r2 = r0.getNavTextColor()
            r8.setTextColor(r2)
            r2 = 2
            int r3 = r0.getNavTextSize()
            float r3 = (float) r3
            r8.setTextSize(r2, r3)
            r8.setText(r10)
            if (r7 == 0) goto L57
            r1.addView(r7)
            r1.addView(r8)
            return r1
        L57:
            r1.addView(r8)
            android.widget.ImageButton r7 = new android.widget.ImageButton
            r7.<init>(r6)
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            int r10 = r0.getNavReturnImgWidth()
            float r10 = (float) r10
            int r10 = a(r6, r10)
            int r0 = r0.getNavReturnImgHeight()
            float r0 = (float) r0
            int r0 = a(r6, r0)
            r8.<init>(r10, r0)
            r10 = 9
            r8.addRule(r10, r5)
            r10 = 15
            r8.addRule(r10, r5)
            r10 = 1094713344(0x41400000, float:12.0)
            int r10 = a(r6, r10)
            r0 = 0
            r8.setMargins(r10, r0, r0, r0)
            r7.setLayoutParams(r8)
            r7.setId(r9)
            r7.setOnClickListener(r11)
            r7.setBackgroundColor(r0)
            r1.addView(r7)
            com.cmic.gen.sdk.auth.GenAuthnHelper r8 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r6)     // Catch: java.lang.Exception -> La9
            com.cmic.gen.sdk.view.GenAuthThemeConfig r8 = r8.getAuthThemeConfig()     // Catch: java.lang.Exception -> La9
            int r8 = r8.getNavColor()     // Catch: java.lang.Exception -> La9
            r1.setBackgroundColor(r8)     // Catch: java.lang.Exception -> La9
            goto Laf
        La9:
            r8 = -16742704(0xffffffffff0086d0, float:-1.7084117E38)
            r1.setBackgroundColor(r8)
        Laf:
            java.lang.String r8 = "umcsdk_return_bg"
            int r6 = com.cmic.gen.sdk.view.c.b(r6, r8)
            r7.setImageResource(r6)
            return r1
    }

    public static int b(android.content.Context r1) {
            java.lang.String r0 = "window"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.view.WindowManager r1 = (android.view.WindowManager) r1
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            if (r1 == 0) goto L16
            android.view.Display r1 = r1.getDefaultDisplay()
            r1.getMetrics(r0)
        L16:
            int r1 = r0.heightPixels
            return r1
    }
}
