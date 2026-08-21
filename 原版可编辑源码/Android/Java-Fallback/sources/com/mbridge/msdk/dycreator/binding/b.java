package com.mbridge.msdk.dycreator.binding;

public final class b {
    private static volatile com.mbridge.msdk.dycreator.binding.b a;
    private com.mbridge.msdk.dycreator.g.d b;
    private com.mbridge.msdk.dycreator.g.c c;
    private com.mbridge.msdk.dycreator.g.f d;
    private com.mbridge.msdk.dycreator.g.h e;
    private com.mbridge.msdk.dycreator.viewmodel.BaseViewModel f;
    private com.mbridge.msdk.shake.b g;








    private b() {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.dycreator.d.a r0 = com.mbridge.msdk.dycreator.d.a.a()
            com.mbridge.msdk.dycreator.d.a$a r1 = com.mbridge.msdk.dycreator.d.a.a.a
            com.mbridge.msdk.dycreator.g.a r0 = r0.a(r1)
            com.mbridge.msdk.dycreator.g.d r0 = (com.mbridge.msdk.dycreator.g.d) r0
            r2.b = r0
            com.mbridge.msdk.dycreator.d.a r0 = com.mbridge.msdk.dycreator.d.a.a()
            com.mbridge.msdk.dycreator.d.a$a r1 = com.mbridge.msdk.dycreator.d.a.a.b
            com.mbridge.msdk.dycreator.g.a r0 = r0.a(r1)
            com.mbridge.msdk.dycreator.g.c r0 = (com.mbridge.msdk.dycreator.g.c) r0
            r2.c = r0
            com.mbridge.msdk.dycreator.d.a r0 = com.mbridge.msdk.dycreator.d.a.a()
            com.mbridge.msdk.dycreator.d.a$a r1 = com.mbridge.msdk.dycreator.d.a.a.c
            com.mbridge.msdk.dycreator.g.a r0 = r0.a(r1)
            com.mbridge.msdk.dycreator.g.f r0 = (com.mbridge.msdk.dycreator.g.f) r0
            r2.d = r0
            com.mbridge.msdk.dycreator.d.a r0 = com.mbridge.msdk.dycreator.d.a.a()
            com.mbridge.msdk.dycreator.d.a$a r1 = com.mbridge.msdk.dycreator.d.a.a.d
            com.mbridge.msdk.dycreator.g.a r0 = r0.a(r1)
            com.mbridge.msdk.dycreator.g.h r0 = (com.mbridge.msdk.dycreator.g.h) r0
            r2.e = r0
            return
    }

    public static com.mbridge.msdk.dycreator.binding.b a() {
            com.mbridge.msdk.dycreator.binding.b r0 = com.mbridge.msdk.dycreator.binding.b.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.dycreator.binding.b> r0 = com.mbridge.msdk.dycreator.binding.b.class
            monitor-enter(r0)
            com.mbridge.msdk.dycreator.binding.b r1 = com.mbridge.msdk.dycreator.binding.b.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.dycreator.binding.b r1 = new com.mbridge.msdk.dycreator.binding.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.dycreator.binding.b.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.dycreator.binding.b r0 = com.mbridge.msdk.dycreator.binding.b.a
            return r0
    }

    private com.mbridge.msdk.shake.b a(android.view.View r9, com.mbridge.msdk.dycreator.bridge.MBSplashData r10) {
            r8 = this;
            if (r10 == 0) goto L32
            com.mbridge.msdk.dycreator.wrapper.DyOption r0 = r10.getDyOption()     // Catch: java.lang.Exception -> L28
            if (r0 == 0) goto L32
            boolean r1 = r0.isShakeVisible()     // Catch: java.lang.Exception -> L28
            if (r1 == 0) goto L32
            com.mbridge.msdk.shake.b r1 = r8.g     // Catch: java.lang.Exception -> L28
            if (r1 != 0) goto L32
            com.mbridge.msdk.dycreator.binding.b$7 r1 = new com.mbridge.msdk.dycreator.binding.b$7     // Catch: java.lang.Exception -> L28
            int r4 = r0.getShakeStrenght()     // Catch: java.lang.Exception -> L28
            int r0 = r0.getShakeTime()     // Catch: java.lang.Exception -> L28
            int r5 = r0 * 1000
            r2 = r1
            r3 = r8
            r6 = r9
            r7 = r10
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L28
            r8.g = r1     // Catch: java.lang.Exception -> L28
            goto L32
        L28:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            java.lang.String r10 = "MBDataBinding"
            com.mbridge.msdk.foundation.tools.z.d(r10, r9)
        L32:
            com.mbridge.msdk.shake.b r9 = r8.g
            return r9
    }

    static com.mbridge.msdk.shake.b a(com.mbridge.msdk.dycreator.binding.b r0) {
            com.mbridge.msdk.shake.b r0 = r0.g
            return r0
    }

    static void a(com.mbridge.msdk.dycreator.binding.b r0, android.view.View r1, java.lang.Object r2) {
            if (r1 == 0) goto L12
            if (r2 == 0) goto L12
            boolean r0 = r2 instanceof com.mbridge.msdk.dycreator.f.a.a
            if (r0 == 0) goto L12
            com.mbridge.msdk.dycreator.binding.a r0 = new com.mbridge.msdk.dycreator.binding.a
            com.mbridge.msdk.dycreator.f.a.a r2 = (com.mbridge.msdk.dycreator.f.a.a) r2
            r0.<init>(r2)
            r1.setOnClickListener(r0)
        L12:
            return
    }

    static void a(com.mbridge.msdk.dycreator.binding.b r1, com.mbridge.msdk.dycreator.baseview.inter.InterBase r2, java.lang.Object r3) {
            if (r2 == 0) goto L2a
            if (r3 != 0) goto L5
            goto L2a
        L5:
            java.lang.String r1 = r2.getReportDes()
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L2a
            boolean r0 = r3 instanceof com.mbridge.msdk.dycreator.f.a.a     // Catch: java.lang.Exception -> L26
            if (r0 == 0) goto L2a
            r0 = r3
            com.mbridge.msdk.dycreator.f.a.a r0 = (com.mbridge.msdk.dycreator.f.a.a) r0     // Catch: java.lang.Exception -> L26
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.getBindData()     // Catch: java.lang.Exception -> L26
            if (r0 == 0) goto L2a
            com.mbridge.msdk.dycreator.f.a.a r3 = (com.mbridge.msdk.dycreator.f.a.a) r3     // Catch: java.lang.Exception -> L26
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r3.getBindData()     // Catch: java.lang.Exception -> L26
            r2.setDynamicReport(r1, r3)     // Catch: java.lang.Exception -> L26
            goto L2a
        L26:
            r1 = move-exception
            r1.printStackTrace()
        L2a:
            return
    }

    static void b(com.mbridge.msdk.dycreator.binding.b r13, com.mbridge.msdk.dycreator.baseview.inter.InterBase r14, java.lang.Object r15) {
            if (r14 == 0) goto L137
            if (r15 != 0) goto L6
            goto L137
        L6:
            java.lang.String r0 = r14.getEffectDes()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L137
            boolean r1 = r14 instanceof android.view.ViewGroup     // Catch: java.lang.Exception -> L133
            r2 = 8
            java.lang.String r3 = "anim"
            java.lang.String r4 = "visible"
            r5 = 0
            if (r1 == 0) goto L99
            android.view.ViewGroup r14 = (android.view.ViewGroup) r14     // Catch: java.lang.Exception -> L133
            com.mbridge.msdk.dycreator.f.a.a r15 = (com.mbridge.msdk.dycreator.f.a.a) r15     // Catch: java.lang.Exception -> L133
            if (r0 == 0) goto L137
            boolean r1 = r0 instanceof java.lang.String     // Catch: java.lang.Exception -> L133
            if (r1 == 0) goto L137
            java.lang.String r1 = "wobble"
            boolean r1 = r0.equals(r1)     // Catch: java.lang.Exception -> L133
            if (r1 == 0) goto L64
            boolean r1 = r14 instanceof com.mbridge.msdk.dycreator.baseview.MBSplashShakeView     // Catch: java.lang.Exception -> L133
            if (r1 == 0) goto L64
            com.mbridge.msdk.dycreator.wrapper.DyOption r1 = r15.getEffectData()     // Catch: java.lang.Exception -> L133
            boolean r1 = r1.isShakeVisible()     // Catch: java.lang.Exception -> L133
            if (r1 == 0) goto L57
            com.mbridge.msdk.shake.b r1 = r13.g     // Catch: java.lang.Exception -> L133
            if (r1 == 0) goto L48
            com.mbridge.msdk.shake.a r1 = com.mbridge.msdk.shake.a.a()     // Catch: java.lang.Exception -> L133
            com.mbridge.msdk.shake.b r6 = r13.g     // Catch: java.lang.Exception -> L133
            r1.b(r6)     // Catch: java.lang.Exception -> L133
        L48:
            com.mbridge.msdk.shake.a r1 = com.mbridge.msdk.shake.a.a()     // Catch: java.lang.Exception -> L133
            r6 = r15
            com.mbridge.msdk.dycreator.bridge.MBSplashData r6 = (com.mbridge.msdk.dycreator.bridge.MBSplashData) r6     // Catch: java.lang.Exception -> L133
            com.mbridge.msdk.shake.b r13 = r13.a(r14, r6)     // Catch: java.lang.Exception -> L133
            r1.a(r13)     // Catch: java.lang.Exception -> L133
            goto L64
        L57:
            com.mbridge.msdk.shake.b r1 = r13.g     // Catch: java.lang.Exception -> L133
            if (r1 == 0) goto L64
            com.mbridge.msdk.shake.a r1 = com.mbridge.msdk.shake.a.a()     // Catch: java.lang.Exception -> L133
            com.mbridge.msdk.shake.b r13 = r13.g     // Catch: java.lang.Exception -> L133
            r1.b(r13)     // Catch: java.lang.Exception -> L133
        L64:
            boolean r13 = r0.equals(r4)     // Catch: java.lang.Exception -> L133
            if (r13 == 0) goto L94
            boolean r13 = r14 instanceof com.mbridge.msdk.dycreator.baseview.MBApkInfoView     // Catch: java.lang.Exception -> L133
            if (r13 == 0) goto L94
            com.mbridge.msdk.dycreator.wrapper.DyOption r13 = r15.getEffectData()     // Catch: java.lang.Exception -> L133
            boolean r13 = r13.isApkInfoVisible()     // Catch: java.lang.Exception -> L133
            if (r13 == 0) goto L91
            boolean r13 = r15 instanceof com.mbridge.msdk.dycreator.bridge.MBSplashData     // Catch: java.lang.Exception -> L133
            if (r13 == 0) goto L8c
            com.mbridge.msdk.dycreator.bridge.MBSplashData r15 = (com.mbridge.msdk.dycreator.bridge.MBSplashData) r15     // Catch: java.lang.Exception -> L133
            java.lang.String r13 = r15.getAppInfo()     // Catch: java.lang.Exception -> L133
            boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Exception -> L133
            if (r13 != 0) goto L8c
            r14.setVisibility(r5)     // Catch: java.lang.Exception -> L133
            goto L94
        L8c:
            r13 = 4
            r14.setVisibility(r13)     // Catch: java.lang.Exception -> L133
            goto L94
        L91:
            r14.setVisibility(r2)     // Catch: java.lang.Exception -> L133
        L94:
            r0.equals(r3)     // Catch: java.lang.Exception -> L133
            goto L137
        L99:
            boolean r1 = r14 instanceof android.view.View     // Catch: java.lang.Exception -> L133
            if (r1 == 0) goto L137
            android.view.View r14 = (android.view.View) r14     // Catch: java.lang.Exception -> L133
            if (r0 == 0) goto L137
            boolean r1 = r0 instanceof java.lang.String     // Catch: java.lang.Exception -> L133
            if (r1 == 0) goto L137
            r1 = r15
            com.mbridge.msdk.dycreator.f.a.a r1 = (com.mbridge.msdk.dycreator.f.a.a) r1     // Catch: java.lang.Exception -> L133
            java.lang.String r6 = "countdown"
            boolean r6 = r0.equals(r6)     // Catch: java.lang.Exception -> L133
            if (r6 == 0) goto Lf8
            if (r14 == 0) goto Lf8
            boolean r6 = r14 instanceof android.widget.TextView     // Catch: java.lang.Exception -> L133
            if (r6 == 0) goto Lf8
            if (r1 == 0) goto Lf8
            r6 = r14
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Exception -> L133
            java.lang.CharSequence r6 = r6.getText()     // Catch: java.lang.Exception -> L133
            r9 = r6
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Exception -> L133
            android.content.Context r6 = r14.getContext()     // Catch: java.lang.Exception -> L133
            java.lang.String r10 = com.mbridge.msdk.foundation.tools.v.s(r6)     // Catch: java.lang.Exception -> L133
            com.mbridge.msdk.dycreator.wrapper.DyOption r6 = r1.getEffectData()     // Catch: java.lang.Exception -> L133
            r7 = 5
            if (r6 == 0) goto Ldc
            boolean r7 = r6.isCanSkip()     // Catch: java.lang.Exception -> L133
            int r6 = r6.getCountDownTime()     // Catch: java.lang.Exception -> L133
            r8 = r7
            r7 = r6
            goto Ldd
        Ldc:
            r8 = r5
        Ldd:
            r6 = r14
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Exception -> L133
            java.lang.String r7 = com.mbridge.msdk.dycreator.e.d.a(r8, r7, r9, r10)     // Catch: java.lang.Exception -> L133
            r6.setText(r7)     // Catch: java.lang.Exception -> L133
            com.mbridge.msdk.dycreator.f.a.a r15 = (com.mbridge.msdk.dycreator.f.a.a) r15     // Catch: java.lang.Exception -> L133
            com.mbridge.msdk.dycreator.wrapper.DyOption r15 = r15.getEffectData()     // Catch: java.lang.Exception -> L133
            com.mbridge.msdk.dycreator.binding.b$5 r12 = new com.mbridge.msdk.dycreator.binding.b$5     // Catch: java.lang.Exception -> L133
            r6 = r12
            r7 = r13
            r11 = r14
            r6.<init>(r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L133
            r15.setDyCountDownListenerWrapper(r12)     // Catch: java.lang.Exception -> L133
        Lf8:
            r0.equals(r3)     // Catch: java.lang.Exception -> L133
            boolean r13 = r0.equals(r4)     // Catch: java.lang.Exception -> L133
            if (r13 == 0) goto L137
            boolean r13 = r14 instanceof com.mbridge.msdk.dycreator.baseview.MBFeedBack     // Catch: java.lang.Exception -> L133
            if (r13 == 0) goto L116
            com.mbridge.msdk.foundation.b.b r13 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> L133
            boolean r13 = r13.b()     // Catch: java.lang.Exception -> L133
            if (r13 == 0) goto L113
            r14.setVisibility(r5)     // Catch: java.lang.Exception -> L133
            goto L116
        L113:
            r14.setVisibility(r2)     // Catch: java.lang.Exception -> L133
        L116:
            boolean r13 = r14 instanceof com.mbridge.msdk.dycreator.baseview.MBLogoTextView     // Catch: java.lang.Exception -> L133
            if (r13 == 0) goto L137
            if (r1 == 0) goto L137
            com.mbridge.msdk.dycreator.wrapper.DyOption r13 = r1.getEffectData()     // Catch: java.lang.Exception -> L133
            if (r13 == 0) goto L137
            com.mbridge.msdk.dycreator.wrapper.DyOption r13 = r1.getEffectData()     // Catch: java.lang.Exception -> L133
            boolean r13 = r13.isLogoVisible()     // Catch: java.lang.Exception -> L133
            if (r13 != 0) goto L137
            com.mbridge.msdk.dycreator.baseview.MBLogoTextView r14 = (com.mbridge.msdk.dycreator.baseview.MBLogoTextView) r14     // Catch: java.lang.Exception -> L133
            r13 = 0
            r14.setCompoundDrawables(r13, r13, r13, r13)     // Catch: java.lang.Exception -> L133
            goto L137
        L133:
            r13 = move-exception
            r13.printStackTrace()
        L137:
            return
    }

    static void c(com.mbridge.msdk.dycreator.binding.b r4, com.mbridge.msdk.dycreator.baseview.inter.InterBase r5, java.lang.Object r6) {
            if (r5 == 0) goto Lfa
            if (r6 != 0) goto L6
            goto Lfa
        L6:
            java.lang.String r0 = r5.getBindDataDes()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lfa
            java.lang.Object r0 = com.mbridge.msdk.dycreator.e.d.a(r6, r0)     // Catch: java.lang.Exception -> Lf6
            if (r0 != 0) goto L18
            goto Lfa
        L18:
            boolean r1 = r5 instanceof android.view.ViewGroup     // Catch: java.lang.Exception -> Lf6
            if (r1 == 0) goto L96
            android.view.ViewGroup r5 = (android.view.ViewGroup) r5     // Catch: java.lang.Exception -> Lf6
            com.mbridge.msdk.dycreator.f.a.a r6 = (com.mbridge.msdk.dycreator.f.a.a) r6     // Catch: java.lang.Exception -> Lf6
            if (r5 == 0) goto Lfa
            boolean r4 = r5 instanceof com.mbridge.msdk.dycreator.baseview.MBSplashClickView     // Catch: java.lang.Exception -> Lf6
            r1 = 0
            r2 = 8
            if (r4 == 0) goto L63
            if (r6 == 0) goto L60
            com.mbridge.msdk.dycreator.wrapper.DyOption r4 = r6.getEffectData()     // Catch: java.lang.Exception -> Lf6
            if (r4 == 0) goto L60
            com.mbridge.msdk.dycreator.wrapper.DyOption r4 = r6.getEffectData()     // Catch: java.lang.Exception -> Lf6
            boolean r4 = r4.isClickButtonVisible()     // Catch: java.lang.Exception -> Lf6
            if (r4 == 0) goto L60
            com.mbridge.msdk.dycreator.wrapper.DyOption r4 = r6.getEffectData()     // Catch: java.lang.Exception -> Lf6
            boolean r4 = r4.isShakeVisible()     // Catch: java.lang.Exception -> Lf6
            if (r4 == 0) goto L46
            goto L60
        L46:
            if (r0 == 0) goto L63
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> Lf6
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lf6
            if (r4 != 0) goto L63
            r5.setVisibility(r1)     // Catch: java.lang.Exception -> Lf6
            r4 = r5
            com.mbridge.msdk.dycreator.baseview.MBSplashClickView r4 = (com.mbridge.msdk.dycreator.baseview.MBSplashClickView) r4     // Catch: java.lang.Exception -> Lf6
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> Lf6
            r4.initView(r3)     // Catch: java.lang.Exception -> Lf6
            goto L63
        L60:
            r5.setVisibility(r2)     // Catch: java.lang.Exception -> Lf6
        L63:
            boolean r4 = r5 instanceof com.mbridge.msdk.dycreator.baseview.MBSplashShakeView     // Catch: java.lang.Exception -> Lf6
            if (r4 == 0) goto Lfa
            if (r6 == 0) goto L92
            com.mbridge.msdk.dycreator.wrapper.DyOption r4 = r6.getEffectData()     // Catch: java.lang.Exception -> Lf6
            if (r4 == 0) goto L92
            com.mbridge.msdk.dycreator.wrapper.DyOption r4 = r6.getEffectData()     // Catch: java.lang.Exception -> Lf6
            boolean r4 = r4.isShakeVisible()     // Catch: java.lang.Exception -> Lf6
            if (r4 == 0) goto L92
            if (r0 == 0) goto Lfa
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> Lf6
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lf6
            if (r4 != 0) goto Lfa
            r5.setVisibility(r1)     // Catch: java.lang.Exception -> Lf6
            com.mbridge.msdk.dycreator.baseview.MBSplashShakeView r5 = (com.mbridge.msdk.dycreator.baseview.MBSplashShakeView) r5     // Catch: java.lang.Exception -> Lf6
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> Lf6
            r5.initView(r4)     // Catch: java.lang.Exception -> Lf6
            goto Lfa
        L92:
            r5.setVisibility(r2)     // Catch: java.lang.Exception -> Lf6
            goto Lfa
        L96:
            boolean r1 = r5 instanceof android.view.View     // Catch: java.lang.Exception -> Lf6
            if (r1 == 0) goto Lfa
            android.view.View r5 = (android.view.View) r5     // Catch: java.lang.Exception -> Lf6
            com.mbridge.msdk.dycreator.f.a.a r6 = (com.mbridge.msdk.dycreator.f.a.a) r6     // Catch: java.lang.Exception -> Lf6
            if (r5 == 0) goto Lfa
            if (r0 == 0) goto Lfa
            boolean r1 = r5 instanceof android.widget.TextView     // Catch: java.lang.Exception -> Lf1
            if (r1 == 0) goto Lbd
            android.widget.TextView r5 = (android.widget.TextView) r5     // Catch: java.lang.Exception -> Lb8
            java.lang.String r4 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> Lb8
            java.lang.String r6 = "\\n"
            java.lang.String r0 = "\n"
            java.lang.String r4 = r4.replace(r6, r0)     // Catch: java.lang.Exception -> Lb8
            r5.setText(r4)     // Catch: java.lang.Exception -> Lb8
            goto Lfa
        Lb8:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Exception -> Lf1
            goto Lfa
        Lbd:
            boolean r1 = r5 instanceof android.widget.ImageView     // Catch: java.lang.Exception -> Lf1
            if (r1 == 0) goto Lfa
            if (r0 == 0) goto Lfa
            boolean r1 = r0 instanceof java.lang.Integer     // Catch: java.lang.Exception -> Lf1
            if (r1 == 0) goto Ld4
            r1 = r5
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Exception -> Lf1
            r2 = r0
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Exception -> Lf1
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> Lf1
            r1.setImageResource(r2)     // Catch: java.lang.Exception -> Lf1
        Ld4:
            boolean r1 = r0 instanceof java.lang.String     // Catch: java.lang.Exception -> Lf1
            if (r1 == 0) goto Lfa
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lf1
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> Lf1
            com.mbridge.msdk.foundation.same.c.b r1 = com.mbridge.msdk.foundation.same.c.b.a(r1)     // Catch: java.lang.Exception -> Lf1
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lf1
            com.mbridge.msdk.dycreator.binding.b$6 r2 = new com.mbridge.msdk.dycreator.binding.b$6     // Catch: java.lang.Exception -> Lf1
            r2.<init>(r4, r6, r5)     // Catch: java.lang.Exception -> Lf1
            r1.a(r0, r2)     // Catch: java.lang.Exception -> Lf1
            goto Lfa
        Lf1:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Exception -> Lf6
            goto Lfa
        Lf6:
            r4 = move-exception
            r4.printStackTrace()
        Lfa:
            return
    }

    public final void a(android.view.View r3) {
            r2 = this;
            com.mbridge.msdk.dycreator.binding.b$1 r0 = new com.mbridge.msdk.dycreator.binding.b$1
            r0.<init>(r2, r3)
            int r3 = r3.getId()
            com.mbridge.msdk.dycreator.g.h r1 = r2.e
            if (r1 == 0) goto L10
            r1.a(r0, r3)
        L10:
            return
    }

    public final void a(com.mbridge.msdk.dycreator.viewmodel.BaseViewModel r2) {
            r1 = this;
            r1.f = r2
            if (r2 == 0) goto L1e
            com.mbridge.msdk.dycreator.g.c r0 = r1.c
            r2.setClickSubject(r0)
            com.mbridge.msdk.dycreator.viewmodel.BaseViewModel r2 = r1.f
            com.mbridge.msdk.dycreator.g.d r0 = r1.b
            r2.setConcreteSubject(r0)
            com.mbridge.msdk.dycreator.viewmodel.BaseViewModel r2 = r1.f
            com.mbridge.msdk.dycreator.g.f r0 = r1.d
            r2.setEffectSubject(r0)
            com.mbridge.msdk.dycreator.viewmodel.BaseViewModel r2 = r1.f
            com.mbridge.msdk.dycreator.g.h r0 = r1.e
            r2.setReportSubject(r0)
        L1e:
            return
    }

    public final synchronized void b() {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.dycreator.g.c r0 = r2.c     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto La
            com.mbridge.msdk.dycreator.g.c r0 = r2.c     // Catch: java.lang.Throwable -> L31
            r0.a()     // Catch: java.lang.Throwable -> L31
        La:
            com.mbridge.msdk.dycreator.g.d r0 = r2.b     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L13
            com.mbridge.msdk.dycreator.g.d r0 = r2.b     // Catch: java.lang.Throwable -> L31
            r0.a()     // Catch: java.lang.Throwable -> L31
        L13:
            com.mbridge.msdk.dycreator.g.f r0 = r2.d     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L1c
            com.mbridge.msdk.dycreator.g.f r0 = r2.d     // Catch: java.lang.Throwable -> L31
            r0.a()     // Catch: java.lang.Throwable -> L31
        L1c:
            com.mbridge.msdk.dycreator.viewmodel.BaseViewModel r0 = r2.f     // Catch: java.lang.Throwable -> L31
            r1 = 0
            if (r0 == 0) goto L23
            r2.f = r1     // Catch: java.lang.Throwable -> L31
        L23:
            com.mbridge.msdk.shake.b r0 = r2.g     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L29
            r2.g = r1     // Catch: java.lang.Throwable -> L31
        L29:
            com.mbridge.msdk.dycreator.binding.b r0 = com.mbridge.msdk.dycreator.binding.b.a     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L2f
            com.mbridge.msdk.dycreator.binding.b.a = r1     // Catch: java.lang.Throwable -> L31
        L2f:
            monitor-exit(r2)
            return
        L31:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final void b(android.view.View r3) {
            r2 = this;
            com.mbridge.msdk.dycreator.binding.b$2 r0 = new com.mbridge.msdk.dycreator.binding.b$2
            r0.<init>(r2, r3)
            int r3 = r3.getId()
            com.mbridge.msdk.dycreator.g.f r1 = r2.d
            if (r1 == 0) goto L10
            r1.a(r0, r3)
        L10:
            return
    }

    public final void c(android.view.View r3) {
            r2 = this;
            com.mbridge.msdk.dycreator.binding.b$3 r0 = new com.mbridge.msdk.dycreator.binding.b$3
            r0.<init>(r2, r3)
            int r3 = r3.getId()
            com.mbridge.msdk.dycreator.g.d r1 = r2.b
            if (r1 == 0) goto L10
            r1.a(r0, r3)
        L10:
            return
    }

    public final void d(android.view.View r3) {
            r2 = this;
            if (r3 == 0) goto L50
            boolean r0 = r3 instanceof com.mbridge.msdk.dycreator.baseview.inter.InterBase     // Catch: java.lang.Exception -> L46
            if (r0 == 0) goto L50
            r0 = r3
            com.mbridge.msdk.dycreator.baseview.inter.InterBase r0 = (com.mbridge.msdk.dycreator.baseview.inter.InterBase) r0     // Catch: java.lang.Exception -> L46
            java.lang.String r0 = r0.getActionDes()     // Catch: java.lang.Exception -> L46
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L46
            if (r1 != 0) goto L50
            java.lang.String r1 = "click"
            boolean r1 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L46
            if (r1 == 0) goto L2e
            com.mbridge.msdk.dycreator.binding.b$4 r0 = new com.mbridge.msdk.dycreator.binding.b$4     // Catch: java.lang.Exception -> L46
            r0.<init>(r2, r3)     // Catch: java.lang.Exception -> L46
            int r3 = r3.getId()     // Catch: java.lang.Exception -> L46
            com.mbridge.msdk.dycreator.g.c r1 = r2.c     // Catch: java.lang.Exception -> L46
            if (r1 == 0) goto L50
            com.mbridge.msdk.dycreator.g.c r1 = r2.c     // Catch: java.lang.Exception -> L46
            r1.a(r0, r3)     // Catch: java.lang.Exception -> L46
            goto L50
        L2e:
            java.lang.String r3 = "move"
            boolean r3 = r0.equals(r3)     // Catch: java.lang.Exception -> L46
            if (r3 == 0) goto L37
            goto L50
        L37:
            java.lang.String r3 = "long_click"
            boolean r3 = r0.equals(r3)     // Catch: java.lang.Exception -> L46
            if (r3 == 0) goto L40
            goto L50
        L40:
            java.lang.String r3 = "wobble"
            r0.equals(r3)     // Catch: java.lang.Exception -> L46
            goto L50
        L46:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "MBDataBinding"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L50:
            return
    }
}
