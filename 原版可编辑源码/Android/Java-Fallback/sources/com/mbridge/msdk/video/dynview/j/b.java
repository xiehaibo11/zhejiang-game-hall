package com.mbridge.msdk.video.dynview.j;

public final class b {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private java.lang.String l;
    private java.lang.String m;
    private java.lang.String n;
    private java.lang.String o;
    private java.lang.String p;
    private java.lang.String q;
    private java.lang.String r;
    private java.lang.String s;
    private java.lang.String t;
    private java.lang.String u;
    private java.lang.String v;
    private java.lang.String w;
    private boolean x;

    public b() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "mbridge_top_play_bg"
            r1.a = r0
            java.lang.String r0 = "mbridge_top_finger_bg"
            r1.b = r0
            java.lang.String r0 = "mbridge_bottom_play_bg"
            r1.c = r0
            java.lang.String r0 = "mbridge_bottom_finger_bg"
            r1.d = r0
            java.lang.String r0 = "mbridge_tv_count"
            r1.e = r0
            java.lang.String r0 = "mbridge_sound_switch"
            r1.f = r0
            java.lang.String r0 = "mbridge_top_control"
            r1.g = r0
            java.lang.String r0 = "mbridge_tv_title"
            r1.h = r0
            java.lang.String r0 = "mbridge_tv_desc"
            r1.i = r0
            java.lang.String r0 = "mbridge_tv_install"
            r1.j = r0
            java.lang.String r0 = "mbridge_sv_starlevel"
            r1.k = r0
            java.lang.String r0 = "mbridge_sv_heat_count_level"
            r1.l = r0
            java.lang.String r0 = "mbridge_tv_cta"
            r1.m = r0
            java.lang.String r0 = "mbridge_native_ec_controller"
            r1.n = r0
            java.lang.String r0 = "mbridge_reward_shape_choice_rl"
            r1.o = r0
            java.lang.String r0 = "#FFFFFF"
            r1.p = r0
            java.lang.String r0 = "#FF000000"
            r1.q = r0
            java.lang.String r0 = "#40000000"
            r1.r = r0
            java.lang.String r0 = "#CAEF79"
            r1.s = r0
            java.lang.String r0 = "#2196F3"
            r1.t = r0
            java.lang.String r0 = "#402196F3"
            r1.u = r0
            java.lang.String r0 = "#8FC31F"
            r1.v = r0
            java.lang.String r0 = "#03A9F4"
            r1.w = r0
            r0 = 0
            r1.x = r0
            return
    }

    private int a(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            java.lang.String r1 = "id"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    private int b(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lb
            int r2 = r2.hashCode()
            return r2
        Lb:
            r2 = -1
            return r2
    }

    public final void a(android.view.View r12, com.mbridge.msdk.video.dynview.c r13) {
            r11 = this;
            if (r12 == 0) goto Lde
            if (r13 == 0) goto Lde
            android.content.Context r0 = r12.getContext()
            if (r0 == 0) goto Lde
            int r1 = r13.e()
            r2 = 1
            if (r1 != r2) goto L59
            java.lang.String r1 = r11.o
            java.lang.String r3 = "drawable"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r0, r1, r3)
            android.content.res.Resources r3 = r0.getResources()
            android.graphics.drawable.Drawable r1 = r3.getDrawable(r1)
            r12.setBackground(r1)
            java.lang.String r1 = r11.h
            int r1 = r11.a(r1)
            android.view.View r1 = r12.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            if (r1 == 0) goto L3b
            java.lang.String r3 = r11.q
            int r3 = android.graphics.Color.parseColor(r3)
            r1.setTextColor(r3)
        L3b:
            java.lang.String r1 = r11.i
            int r1 = r11.a(r1)
            android.view.View r1 = r12.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            if (r1 == 0) goto L52
            java.lang.String r3 = r11.q
            int r3 = android.graphics.Color.parseColor(r3)
            r1.setTextColor(r3)
        L52:
            r1 = 1073741824(0x40000000, float:2.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            goto L68
        L59:
            r1 = 1092616192(0x41200000, float:10.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            android.graphics.drawable.Drawable r3 = r12.getBackground()
            r4 = 100
            r3.setAlpha(r4)
        L68:
            r3 = 1090519040(0x41000000, float:8.0)
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r0, r3)
            java.lang.String r4 = r11.j
            int r4 = r11.a(r4)
            android.view.View r4 = r12.findViewById(r4)
            if (r4 == 0) goto Lc4
            android.view.View r5 = r13.f()
            if (r5 == 0) goto L9a
            android.view.View r5 = r13.f()
            boolean r5 = r5 instanceof com.mbridge.msdk.video.module.MBridgeClickCTAView
            if (r5 == 0) goto L9a
            com.mbridge.msdk.video.dynview.h.b r5 = new com.mbridge.msdk.video.dynview.h.b
            r5.<init>()
            android.animation.ObjectAnimator r5 = r5.c(r4)
            android.view.View r13 = r13.f()
            com.mbridge.msdk.video.module.MBridgeClickCTAView r13 = (com.mbridge.msdk.video.module.MBridgeClickCTAView) r13
            r13.setObjectAnimator(r5)
        L9a:
            boolean r13 = r4 instanceof android.widget.TextView
            if (r13 == 0) goto Lc4
            r5 = r4
            android.widget.TextView r5 = (android.widget.TextView) r5
            java.lang.String r13 = r11.p
            int r13 = android.graphics.Color.parseColor(r13)
            r5.setTextColor(r13)
            r13 = 1097859072(0x41700000, float:15.0)
            r5.setTextSize(r13)
            r13 = 2
            java.lang.String[] r9 = new java.lang.String[r13]
            r13 = 0
            java.lang.String r4 = r11.v
            r9[r13] = r4
            java.lang.String r8 = r11.s
            r9[r2] = r8
            r6 = 1065353216(0x3f800000, float:1.0)
            r7 = 1084227584(0x40a00000, float:5.0)
            android.graphics.drawable.GradientDrawable$Orientation r10 = android.graphics.drawable.GradientDrawable.Orientation.LEFT_RIGHT
            com.mbridge.msdk.video.dynview.i.b.a.a(r5, r6, r7, r8, r9, r10)
        Lc4:
            android.view.ViewGroup$LayoutParams r13 = r12.getLayoutParams()
            if (r13 != 0) goto Lde
            android.widget.RelativeLayout$LayoutParams r13 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r13.<init>(r2, r2)
            r13.setMargins(r1, r1, r1, r3)
            r1 = 1114636288(0x42700000, float:60.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            r13.height = r0
            r12.setLayoutParams(r13)
        Lde:
            return
    }

    public final void a(android.view.View r9, com.mbridge.msdk.video.dynview.c r10, java.util.Map<java.lang.String, java.lang.Object> r11) {
            r8 = this;
            if (r9 == 0) goto L7
            android.content.Context r0 = r9.getContext()
            goto L8
        L7:
            r0 = 0
        L8:
            if (r0 == 0) goto L15f
            if (r10 != 0) goto Le
            goto L15f
        Le:
            java.lang.String r1 = "mbridge_reward_click_tv"
            if (r11 == 0) goto L56
            java.lang.String r2 = "is_dy_success"
            boolean r3 = r11.containsKey(r2)
            if (r3 == 0) goto L56
            java.lang.Object r11 = r11.get(r2)
            java.lang.Boolean r11 = (java.lang.Boolean) r11
            boolean r11 = r11.booleanValue()
            r8.x = r11
            if (r11 == 0) goto L3f
            java.lang.String r11 = r8.e
            int r11 = r8.b(r11)
            android.view.View r11 = r9.findViewById(r11)
            android.widget.TextView r11 = (android.widget.TextView) r11
            int r1 = r8.b(r1)
            android.view.View r1 = r9.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            goto L6c
        L3f:
            java.lang.String r11 = r8.e
            int r11 = r8.a(r11)
            android.view.View r11 = r9.findViewById(r11)
            android.widget.TextView r11 = (android.widget.TextView) r11
            int r1 = r8.a(r1)
            android.view.View r1 = r9.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            goto L6c
        L56:
            java.lang.String r11 = r8.e
            int r11 = r8.a(r11)
            android.view.View r11 = r9.findViewById(r11)
            android.widget.TextView r11 = (android.widget.TextView) r11
            int r1 = r8.a(r1)
            android.view.View r1 = r9.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
        L6c:
            if (r11 == 0) goto L87
            java.lang.String r2 = "mbridge_reward_shape_progress"
            java.lang.String r3 = "drawable"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r3)
            r11.setBackgroundResource(r0)
            java.lang.String r0 = r8.p
            int r0 = android.graphics.Color.parseColor(r0)
            r11.setTextColor(r0)
            r0 = 1093664768(0x41300000, float:11.0)
            r11.setTextSize(r0)
        L87:
            if (r1 == 0) goto Lb4
            r11 = 1101004800(0x41a00000, float:20.0)
            r1.setTextSize(r11)
            boolean r11 = r1 instanceof com.mbridge.msdk.dycreator.baseview.cusview.MBridgeTextView
            if (r11 == 0) goto La1
            com.mbridge.msdk.video.dynview.h.b r11 = new com.mbridge.msdk.video.dynview.h.b
            r11.<init>()
            android.animation.ObjectAnimator r11 = r11.c(r1)
            r0 = r1
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeTextView r0 = (com.mbridge.msdk.dycreator.baseview.cusview.MBridgeTextView) r0
            r0.setObjectAnimator(r11)
        La1:
            boolean r11 = r1 instanceof com.mbridge.msdk.dycreator.baseview.MBTextView
            if (r11 == 0) goto Lb4
            com.mbridge.msdk.video.dynview.h.b r11 = new com.mbridge.msdk.video.dynview.h.b
            r11.<init>()
            android.animation.ObjectAnimator r11 = r11.c(r1)
            r0 = r1
            com.mbridge.msdk.dycreator.baseview.MBTextView r0 = (com.mbridge.msdk.dycreator.baseview.MBTextView) r0
            r0.setAnimator(r11)
        Lb4:
            if (r10 == 0) goto L15f
            java.lang.String r11 = r8.q
            java.lang.String r0 = r8.s
            r2 = 1065353216(0x3f800000, float:1.0)
            r3 = 1084227584(0x40a00000, float:5.0)
            int r4 = r10.i()
            r5 = 302(0x12e, float:4.23E-43)
            if (r4 == r5) goto Ldb
            r5 = 802(0x322, float:1.124E-42)
            if (r4 == r5) goto Lcf
            java.lang.String r4 = r8.v
            java.lang.String r5 = r8.s
            goto Le5
        Lcf:
            java.lang.String r4 = r8.p
            java.lang.String r11 = r8.q
            java.lang.String r0 = r8.r
            r2 = 1056964608(0x3f000000, float:0.5)
            r3 = 1103626240(0x41c80000, float:25.0)
            r5 = r4
            goto Le5
        Ldb:
            java.lang.String r4 = r8.t
            java.lang.String r5 = r8.w
            java.lang.String r11 = r8.p
            java.lang.String r0 = r8.u
            r3 = 1092616192(0x41200000, float:10.0)
        Le5:
            r7 = 0
            if (r1 == 0) goto Lfe
            int r11 = android.graphics.Color.parseColor(r11)
            r1.setTextColor(r11)
            r11 = 2
            java.lang.String[] r11 = new java.lang.String[r11]
            r11[r7] = r4
            r4 = 1
            r11[r4] = r5
            android.graphics.drawable.GradientDrawable$Orientation r6 = android.graphics.drawable.GradientDrawable.Orientation.LEFT_RIGHT
            r4 = r0
            r5 = r11
            com.mbridge.msdk.video.dynview.i.b.a.a(r1, r2, r3, r4, r5, r6)
        Lfe:
            android.view.View r11 = r10.f()
            if (r11 == 0) goto L118
            android.view.View r11 = r10.f()
            android.view.ViewGroup$LayoutParams r11 = r11.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r11 = (android.widget.RelativeLayout.LayoutParams) r11
            r11.setMargins(r7, r7, r7, r7)
            android.view.View r10 = r10.f()
            r10.setLayoutParams(r11)
        L118:
            boolean r10 = r8.x
            if (r10 == 0) goto L129
            java.lang.String r10 = r8.g
            int r10 = r8.b(r10)
            android.view.View r9 = r9.findViewById(r10)
            android.widget.RelativeLayout r9 = (android.widget.RelativeLayout) r9
            goto L135
        L129:
            java.lang.String r10 = r8.g
            int r10 = r8.a(r10)
            android.view.View r9 = r9.findViewById(r10)
            android.widget.RelativeLayout r9 = (android.widget.RelativeLayout) r9
        L135:
            if (r9 == 0) goto L15f
            int r10 = com.mbridge.msdk.video.dynview.a.a.a
            if (r10 != 0) goto L148
            int r10 = com.mbridge.msdk.video.dynview.a.a.b
            if (r10 != 0) goto L148
            int r10 = com.mbridge.msdk.video.dynview.a.a.c
            if (r10 != 0) goto L148
            int r10 = com.mbridge.msdk.video.dynview.a.a.d
            if (r10 != 0) goto L148
            goto L15f
        L148:
            r10 = 4
            r9.setVisibility(r10)
            android.view.animation.AlphaAnimation r10 = new android.view.animation.AlphaAnimation
            r11 = 0
            r0 = 1120403456(0x42c80000, float:100.0)
            r10.<init>(r11, r0)
            r0 = 200(0xc8, double:9.9E-322)
            r10.setDuration(r0)
            r9.startAnimation(r10)
            r9.setVisibility(r7)
        L15f:
            return
    }

    public final void a(android.view.View r7, java.util.Map<java.lang.String, java.lang.Object> r8) {
            r6 = this;
            if (r7 == 0) goto Ldf
            boolean r0 = r7 instanceof com.mbridge.msdk.dycreator.baseview.cusview.MBridgeFramLayout
            if (r0 == 0) goto Ldf
            r0 = r7
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeFramLayout r0 = (com.mbridge.msdk.dycreator.baseview.cusview.MBridgeFramLayout) r0
            android.animation.AnimatorSet r1 = new android.animation.AnimatorSet
            r1.<init>()
            android.content.Context r2 = r7.getContext()
            if (r2 == 0) goto Ldf
            if (r8 == 0) goto L2a
            java.lang.String r2 = "is_dy_success"
            boolean r3 = r8.containsKey(r2)
            if (r3 == 0) goto L2a
            java.lang.Object r8 = r8.get(r2)
            java.lang.Boolean r8 = (java.lang.Boolean) r8
            boolean r8 = r8.booleanValue()
            r6.x = r8
        L2a:
            boolean r8 = r6.x
            if (r8 == 0) goto L5f
            java.lang.String r8 = r6.a
            int r8 = r6.b(r8)
            android.view.View r8 = r7.findViewById(r8)
            android.widget.ImageView r8 = (android.widget.ImageView) r8
            java.lang.String r2 = r6.b
            int r2 = r6.b(r2)
            android.view.View r2 = r7.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            java.lang.String r3 = r6.c
            int r3 = r6.b(r3)
            android.view.View r3 = r7.findViewById(r3)
            android.widget.ImageView r3 = (android.widget.ImageView) r3
            java.lang.String r4 = r6.d
            int r4 = r6.b(r4)
            android.view.View r7 = r7.findViewById(r4)
            android.widget.ImageView r7 = (android.widget.ImageView) r7
            goto L8f
        L5f:
            java.lang.String r8 = r6.a
            int r8 = r6.a(r8)
            android.view.View r8 = r7.findViewById(r8)
            android.widget.ImageView r8 = (android.widget.ImageView) r8
            java.lang.String r2 = r6.b
            int r2 = r6.a(r2)
            android.view.View r2 = r7.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            java.lang.String r3 = r6.c
            int r3 = r6.a(r3)
            android.view.View r3 = r7.findViewById(r3)
            android.widget.ImageView r3 = (android.widget.ImageView) r3
            java.lang.String r4 = r6.d
            int r4 = r6.a(r4)
            android.view.View r7 = r7.findViewById(r4)
            android.widget.ImageView r7 = (android.widget.ImageView) r7
        L8f:
            r4 = 0
            if (r8 == 0) goto L9c
            com.mbridge.msdk.video.dynview.h.b r5 = new com.mbridge.msdk.video.dynview.h.b
            r5.<init>()
            android.animation.ObjectAnimator r8 = r5.a(r8)
            goto L9d
        L9c:
            r8 = r4
        L9d:
            if (r2 == 0) goto La9
            com.mbridge.msdk.video.dynview.h.b r5 = new com.mbridge.msdk.video.dynview.h.b
            r5.<init>()
            android.animation.ObjectAnimator r2 = r5.b(r2)
            goto Laa
        La9:
            r2 = r4
        Laa:
            if (r3 == 0) goto Lb6
            com.mbridge.msdk.video.dynview.h.b r5 = new com.mbridge.msdk.video.dynview.h.b
            r5.<init>()
            android.animation.ObjectAnimator r3 = r5.a(r3)
            goto Lb7
        Lb6:
            r3 = r4
        Lb7:
            if (r7 == 0) goto Lc2
            com.mbridge.msdk.video.dynview.h.b r4 = new com.mbridge.msdk.video.dynview.h.b
            r4.<init>()
            android.animation.ObjectAnimator r4 = r4.b(r7)
        Lc2:
            if (r8 == 0) goto Ldf
            if (r3 == 0) goto Ldf
            if (r2 == 0) goto Ldf
            if (r4 == 0) goto Ldf
            r7 = 4
            android.animation.Animator[] r7 = new android.animation.Animator[r7]
            r5 = 0
            r7[r5] = r8
            r8 = 1
            r7[r8] = r3
            r8 = 2
            r7[r8] = r2
            r8 = 3
            r7[r8] = r4
            r1.playTogether(r7)
            r0.setAnimatorSet(r1)
        Ldf:
            return
    }

    public final void b(android.view.View r10, com.mbridge.msdk.video.dynview.c r11, java.util.Map<java.lang.String, java.lang.Object> r12) {
            r9 = this;
            if (r10 == 0) goto L12d
            if (r11 == 0) goto L12d
            android.content.Context r0 = r10.getContext()
            if (r0 == 0) goto L123
            if (r12 == 0) goto L20
            java.lang.String r0 = "is_dy_success"
            boolean r1 = r12.containsKey(r0)
            if (r1 == 0) goto L20
            java.lang.Object r12 = r12.get(r0)
            java.lang.Boolean r12 = (java.lang.Boolean) r12
            boolean r12 = r12.booleanValue()
            r9.x = r12
        L20:
            boolean r12 = r9.x
            if (r12 == 0) goto L3b
            java.lang.String r12 = r9.k
            int r12 = r9.b(r12)
            android.view.View r12 = r10.findViewById(r12)
            android.widget.LinearLayout r12 = (android.widget.LinearLayout) r12
            java.lang.String r0 = r9.m
            int r0 = r9.b(r0)
            android.view.View r0 = r10.findViewById(r0)
            goto L51
        L3b:
            java.lang.String r12 = r9.k
            int r12 = r9.a(r12)
            android.view.View r12 = r10.findViewById(r12)
            android.widget.LinearLayout r12 = (android.widget.LinearLayout) r12
            java.lang.String r0 = r9.m
            int r0 = r9.a(r0)
            android.view.View r0 = r10.findViewById(r0)
        L51:
            r6 = r0
            r7 = 0
            r8 = 1
            if (r12 == 0) goto L67
            boolean r0 = r12 instanceof com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView
            if (r0 == 0) goto L67
            int r0 = r11.e()
            if (r0 != r8) goto L64
            r12.setOrientation(r8)
            goto L67
        L64:
            r12.setOrientation(r7)
        L67:
            if (r12 == 0) goto L70
            boolean r0 = r12 instanceof com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView
            if (r0 == 0) goto L70
            r12.setOrientation(r7)
        L70:
            java.lang.String r12 = r9.n
            int r12 = r9.a(r12)
            android.view.View r12 = r10.findViewById(r12)
            android.widget.RelativeLayout r12 = (android.widget.RelativeLayout) r12
            if (r12 == 0) goto Lc4
            int r11 = r11.e()
            r0 = -1
            if (r11 != r8) goto La5
            android.widget.FrameLayout$LayoutParams r11 = new android.widget.FrameLayout$LayoutParams
            r11.<init>(r0, r0)
            int r0 = r11.leftMargin
            int r1 = com.mbridge.msdk.video.dynview.a.a.a
            int r0 = r0 + r1
            int r1 = r11.rightMargin
            int r2 = com.mbridge.msdk.video.dynview.a.a.b
            int r1 = r1 + r2
            int r2 = r11.topMargin
            int r3 = com.mbridge.msdk.video.dynview.a.a.c
            int r2 = r2 + r3
            int r3 = r11.bottomMargin
            int r4 = com.mbridge.msdk.video.dynview.a.a.d
            int r3 = r3 + r4
            r11.setMargins(r0, r2, r1, r3)
            r12.setLayoutParams(r11)
            goto Lc4
        La5:
            android.widget.RelativeLayout$LayoutParams r11 = new android.widget.RelativeLayout$LayoutParams
            r11.<init>(r0, r0)
            int r0 = r11.leftMargin
            int r1 = com.mbridge.msdk.video.dynview.a.a.a
            int r0 = r0 + r1
            int r1 = r11.rightMargin
            int r2 = com.mbridge.msdk.video.dynview.a.a.b
            int r1 = r1 + r2
            int r2 = r11.topMargin
            int r3 = com.mbridge.msdk.video.dynview.a.a.c
            int r2 = r2 + r3
            int r3 = r11.bottomMargin
            int r4 = com.mbridge.msdk.video.dynview.a.a.d
            int r3 = r3 + r4
            r11.setMargins(r0, r2, r1, r3)
            r12.setLayoutParams(r11)
        Lc4:
            if (r6 == 0) goto L123
            boolean r11 = r6 instanceof android.widget.TextView
            if (r11 == 0) goto Lf0
            r11 = r6
            android.widget.TextView r11 = (android.widget.TextView) r11
            java.lang.String r12 = r9.p
            int r12 = android.graphics.Color.parseColor(r12)
            r11.setTextColor(r12)
            r12 = 1103626240(0x41c80000, float:25.0)
            r11.setTextSize(r12)
            r11 = 2
            java.lang.String[] r4 = new java.lang.String[r11]
            java.lang.String r11 = r9.v
            r4[r7] = r11
            java.lang.String r3 = r9.s
            r4[r8] = r3
            r1 = 1065353216(0x3f800000, float:1.0)
            r2 = 1084227584(0x40a00000, float:5.0)
            android.graphics.drawable.GradientDrawable$Orientation r5 = android.graphics.drawable.GradientDrawable.Orientation.LEFT_RIGHT
            r0 = r6
            com.mbridge.msdk.video.dynview.i.b.a.a(r0, r1, r2, r3, r4, r5)
        Lf0:
            android.animation.AnimatorSet r11 = new android.animation.AnimatorSet
            r11.<init>()
            com.mbridge.msdk.video.dynview.h.b r12 = new com.mbridge.msdk.video.dynview.h.b
            r12.<init>()
            android.animation.ObjectAnimator r12 = r12.c(r6)
            android.animation.Animator[] r0 = new android.animation.Animator[r8]
            r0[r7] = r12
            r11.playTogether(r0)
            boolean r12 = r10 instanceof com.mbridge.msdk.dycreator.baseview.MBFrameLayout
            if (r12 == 0) goto L10f
            r12 = r10
            com.mbridge.msdk.dycreator.baseview.MBFrameLayout r12 = (com.mbridge.msdk.dycreator.baseview.MBFrameLayout) r12
            r12.setAnimator(r11)
        L10f:
            boolean r12 = r10 instanceof com.mbridge.msdk.dycreator.baseview.cusview.MBridgeFramLayout
            if (r12 == 0) goto L119
            r12 = r10
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeFramLayout r12 = (com.mbridge.msdk.dycreator.baseview.cusview.MBridgeFramLayout) r12
            r12.setAnimatorSet(r11)
        L119:
            boolean r12 = r10 instanceof com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout
            if (r12 == 0) goto L123
            r12 = r10
            com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout r12 = (com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout) r12
            r12.setAnimatorSet(r11)
        L123:
            com.mbridge.msdk.video.dynview.h.b r11 = new com.mbridge.msdk.video.dynview.h.b
            r11.<init>()
            r0 = 500(0x1f4, double:2.47E-321)
            r11.c(r10, r0)
        L12d:
            return
    }
}
