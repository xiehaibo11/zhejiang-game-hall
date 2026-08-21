package com.mbridge.msdk.dycreator.baseview;

public class MBTextView extends android.widget.TextView implements com.mbridge.msdk.dycreator.baseview.inter.InterBase, com.mbridge.msdk.dycreator.baseview.inter.InterEffect {
    private boolean a;
    public android.util.AttributeSet attrs;
    private android.animation.Animator b;
    private java.util.Map<java.lang.String, java.lang.String> c;
    private java.util.Map<java.lang.String, java.lang.Boolean> d;
    private java.lang.String e;

    static class 1 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.dycreator.a.c[] r0 = com.mbridge.msdk.dycreator.a.c.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.dycreator.baseview.MBTextView.1.a = r0
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.b     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBTextView.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.c     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }

    public MBTextView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.a = r1
            java.lang.String r1 = ""
            r0.e = r1
            return
    }

    public MBTextView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2)
            r0 = 0
            r1.a = r0
            java.lang.String r0 = ""
            r1.e = r0
            r1.attrs = r3
            java.util.Map r2 = com.mbridge.msdk.dycreator.e.c.a(r2, r3)     // Catch: java.lang.Exception -> L22
            r1.c = r2     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.dycreator.e.a.a(r1, r3)     // Catch: java.lang.Exception -> L22
            android.view.ViewGroup$LayoutParams r2 = r1.generateLayoutParams(r3)     // Catch: java.lang.Exception -> L22
            r1.setLayoutParams(r2)     // Catch: java.lang.Exception -> L22
            java.util.Map<java.lang.String, java.lang.String> r2 = r1.c     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.dycreator.e.c.a(r2, r1)     // Catch: java.lang.Exception -> L22
            goto L2c
        L22:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "TextView"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L2c:
            return
    }

    public MBTextView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.a = r1
            java.lang.String r1 = ""
            r0.e = r1
            return
    }

    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r12) {
            r11 = this;
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            com.mbridge.msdk.dycreator.a.b r2 = com.mbridge.msdk.dycreator.a.b.a()
            java.util.HashMap r2 = r2.b()
            int r3 = r12.getAttributeCount()
            r4 = 0
        L13:
            if (r4 >= r3) goto L8b
            java.lang.String r5 = r12.getAttributeName(r4)
            java.lang.Object r5 = r2.get(r5)
            com.mbridge.msdk.dycreator.a.c r5 = (com.mbridge.msdk.dycreator.a.c) r5
            if (r5 != 0) goto L23
            goto L88
        L23:
            int[] r6 = com.mbridge.msdk.dycreator.baseview.MBTextView.1.a
            int r5 = r5.ordinal()
            r5 = r6[r5]
            r6 = -2
            java.lang.String r7 = "wrap"
            java.lang.String r8 = "m"
            java.lang.String r9 = "f"
            r10 = 1
            if (r5 == r10) goto L61
            r10 = 2
            if (r5 == r10) goto L39
            goto L88
        L39:
            java.lang.String r5 = r12.getAttributeValue(r4)
            boolean r9 = r5.startsWith(r9)
            if (r9 != 0) goto L5e
            boolean r8 = r5.startsWith(r8)
            if (r8 == 0) goto L4a
            goto L5e
        L4a:
            boolean r7 = r5.startsWith(r7)
            if (r7 == 0) goto L53
            r0.height = r6
            goto L88
        L53:
            com.mbridge.msdk.dycreator.a.b r6 = com.mbridge.msdk.dycreator.a.b.a()
            int r5 = r6.b(r5)
            r0.height = r5
            goto L88
        L5e:
            r0.height = r1
            goto L88
        L61:
            java.lang.String r5 = r12.getAttributeValue(r4)
            boolean r9 = r5.startsWith(r9)
            if (r9 != 0) goto L86
            boolean r8 = r5.startsWith(r8)
            if (r8 == 0) goto L72
            goto L86
        L72:
            boolean r7 = r5.startsWith(r7)
            if (r7 == 0) goto L7b
            r0.width = r6
            goto L88
        L7b:
            com.mbridge.msdk.dycreator.a.b r6 = com.mbridge.msdk.dycreator.a.b.a()
            int r5 = r6.b(r5)
            r0.width = r5
            goto L88
        L86:
            r0.width = r1
        L88:
            int r4 = r4 + 1
            goto L13
        L8b:
            return r0
    }

    @Override
    public java.lang.String getActionDes() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.c
            if (r0 == 0) goto L15
            java.lang.String r1 = "mbridgeAction"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.c
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L15:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public java.lang.String getBindDataDes() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.c
            if (r0 == 0) goto L15
            java.lang.String r1 = "mbridgeData"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.c
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L15:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public java.lang.String getEffectDes() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.c
            if (r0 == 0) goto L15
            java.lang.String r1 = "mbridgeEffect"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.c
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L15:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public java.lang.String getReportDes() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.c
            if (r0 == 0) goto L15
            java.lang.String r1 = "mbridgeReport"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.c
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L15:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public java.lang.String getStrategyDes() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.c
            if (r0 == 0) goto L15
            java.lang.String r1 = "mbridgeStrategy"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.c
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L15:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public boolean isFocused() {
            r1 = this;
            boolean r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            boolean r0 = super.isFocused()
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r2 = this;
            super.onAttachedToWindow()
            android.animation.Animator r0 = r2.b
            if (r0 == 0) goto Lf
            r0.start()     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.d
            if (r0 == 0) goto L37
            java.lang.String r1 = "mbridgeAttached"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L37
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.d
            java.lang.Object r0 = r0.get(r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L37
            com.mbridge.msdk.foundation.same.report.g$a r0 = new com.mbridge.msdk.foundation.same.report.g$a
            r0.<init>(r1)
            com.mbridge.msdk.foundation.same.report.g r0 = r0.a()
            java.lang.String r1 = r2.e
            r0.a(r1)
        L37:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            android.animation.Animator r0 = r2.b
            if (r0 == 0) goto Lf
            r0.cancel()     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.d
            if (r0 == 0) goto L37
            java.lang.String r1 = "mbridgeDetached"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L37
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.d
            java.lang.Object r0 = r0.get(r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L37
            com.mbridge.msdk.foundation.same.report.g$a r0 = new com.mbridge.msdk.foundation.same.report.g$a
            r0.<init>(r1)
            com.mbridge.msdk.foundation.same.report.g r0 = r0.a()
            java.lang.String r1 = r2.e
            r0.a(r1)
        L37:
            return
    }

    @Override
    public void setAnimator(android.animation.Animator r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public void setDynamicReport(java.lang.String r1, com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r0 = this;
            java.util.Map r1 = com.mbridge.msdk.dycreator.e.c.a(r1)
            r0.d = r1
            if (r2 == 0) goto Le
            java.lang.String r1 = r2.getCampaignUnitId()
            r0.e = r1
        Le:
            return
    }
}
