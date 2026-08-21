package com.mbridge.msdk.dycreator.baseview;

public class MBHorizontalScrollView extends android.widget.HorizontalScrollView implements com.mbridge.msdk.dycreator.baseview.inter.InterBase {
    private java.util.Map<java.lang.String, java.lang.String> a;
    private java.util.Map<java.lang.String, java.lang.Boolean> b;
    private java.lang.String c;

    static class 1 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.dycreator.a.c[] r0 = com.mbridge.msdk.dycreator.a.c.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.dycreator.baseview.MBHorizontalScrollView.1.a = r0
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.b     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBHorizontalScrollView.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.c     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBHorizontalScrollView.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.r     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBHorizontalScrollView.1.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.l     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBHorizontalScrollView.1.a     // Catch: java.lang.NoSuchFieldError -> L3e
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.q     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                return
        }
    }

    public MBHorizontalScrollView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = ""
            r0.c = r1
            return
    }

    public MBHorizontalScrollView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = ""
            r1.c = r0
            java.util.Map r2 = com.mbridge.msdk.dycreator.e.c.a(r2, r3)     // Catch: java.lang.Exception -> L1d
            r1.a = r2     // Catch: java.lang.Exception -> L1d
            com.mbridge.msdk.dycreator.e.a.a(r1, r3)     // Catch: java.lang.Exception -> L1d
            android.widget.FrameLayout$LayoutParams r2 = r1.generateLayoutParams(r3)     // Catch: java.lang.Exception -> L1d
            r1.setLayoutParams(r2)     // Catch: java.lang.Exception -> L1d
            java.util.Map<java.lang.String, java.lang.String> r2 = r1.a     // Catch: java.lang.Exception -> L1d
            com.mbridge.msdk.dycreator.e.c.a(r2, r1)     // Catch: java.lang.Exception -> L1d
            goto L27
        L1d:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "MBHorizontalScrollView"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L27:
            return
    }

    public MBHorizontalScrollView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = ""
            r0.c = r1
            return
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.widget.FrameLayout$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    public android.widget.FrameLayout.LayoutParams generateLayoutParams(android.util.AttributeSet r12) {
            r11 = this;
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = 0
            r0.<init>(r1, r1)
            com.mbridge.msdk.dycreator.a.b r2 = com.mbridge.msdk.dycreator.a.b.a()
            java.util.HashMap r2 = r2.b()
            r3 = -2
            r0.width = r3
            r0.height = r3
            int r4 = r12.getAttributeCount()
        L17:
            if (r1 >= r4) goto Lc9
            java.lang.String r5 = r12.getAttributeName(r1)
            java.lang.Object r5 = r2.get(r5)
            com.mbridge.msdk.dycreator.a.c r5 = (com.mbridge.msdk.dycreator.a.c) r5
            if (r5 != 0) goto L27
            goto Lc5
        L27:
            int[] r6 = com.mbridge.msdk.dycreator.baseview.MBHorizontalScrollView.1.a
            int r5 = r5.ordinal()
            r5 = r6[r5]
            java.lang.String r6 = "w"
            java.lang.String r7 = "m"
            r8 = -1
            java.lang.String r9 = "f"
            r10 = 1
            if (r5 == r10) goto L9e
            r10 = 2
            if (r5 == r10) goto L76
            r6 = 3
            if (r5 == r6) goto L67
            r6 = 4
            if (r5 == r6) goto L58
            r6 = 5
            if (r5 == r6) goto L47
            goto Lc5
        L47:
            com.mbridge.msdk.dycreator.a.b r5 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r6 = r12.getAttributeValue(r1)
            int r5 = r5.b(r6)
            r0.setMargins(r5, r5, r5, r5)
            goto Lc5
        L58:
            com.mbridge.msdk.dycreator.a.b r5 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r6 = r12.getAttributeValue(r1)
            int r5 = r5.b(r6)
            r0.leftMargin = r5
            goto Lc5
        L67:
            com.mbridge.msdk.dycreator.a.b r5 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r6 = r12.getAttributeValue(r1)
            int r5 = r5.c(r6)
            r0.gravity = r5
            goto Lc5
        L76:
            java.lang.String r5 = r12.getAttributeValue(r1)
            boolean r9 = r5.startsWith(r9)
            if (r9 != 0) goto L9b
            boolean r7 = r5.startsWith(r7)
            if (r7 == 0) goto L87
            goto L9b
        L87:
            boolean r6 = r5.startsWith(r6)
            if (r6 == 0) goto L90
            r0.width = r3
            goto Lc5
        L90:
            com.mbridge.msdk.dycreator.a.b r6 = com.mbridge.msdk.dycreator.a.b.a()
            int r5 = r6.b(r5)
            r0.height = r5
            goto Lc5
        L9b:
            r0.width = r8
            goto Lc5
        L9e:
            java.lang.String r5 = r12.getAttributeValue(r1)
            boolean r9 = r5.startsWith(r9)
            if (r9 != 0) goto Lc3
            boolean r7 = r5.startsWith(r7)
            if (r7 == 0) goto Laf
            goto Lc3
        Laf:
            boolean r6 = r5.startsWith(r6)
            if (r6 == 0) goto Lb8
            r0.width = r3
            goto Lc5
        Lb8:
            com.mbridge.msdk.dycreator.a.b r6 = com.mbridge.msdk.dycreator.a.b.a()
            int r5 = r6.b(r5)
            r0.width = r5
            goto Lc5
        Lc3:
            r0.width = r8
        Lc5:
            int r1 = r1 + 1
            goto L17
        Lc9:
            return r0
    }

    @Override
    public java.lang.String getActionDes() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.a
            if (r0 == 0) goto L15
            java.lang.String r1 = "mbridgeAction"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.a
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
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.a
            if (r0 == 0) goto L15
            java.lang.String r1 = "mbridgeData"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.a
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
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.a
            if (r0 == 0) goto L15
            java.lang.String r1 = "mbridgeEffect"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.a
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
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.a
            if (r0 == 0) goto L15
            java.lang.String r1 = "mbridgeReport"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.a
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
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.a
            if (r0 == 0) goto L15
            java.lang.String r1 = "mbridgeStrategy"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.a
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L15:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r2 = this;
            super.onAttachedToWindow()
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.b
            if (r0 == 0) goto L2b
            java.lang.String r1 = "mbridgeAttached"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L2b
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.b
            java.lang.Object r0 = r0.get(r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L2b
            com.mbridge.msdk.foundation.same.report.g$a r0 = new com.mbridge.msdk.foundation.same.report.g$a
            r0.<init>(r1)
            com.mbridge.msdk.foundation.same.report.g r0 = r0.a()
            java.lang.String r1 = r2.c
            r0.a(r1)
        L2b:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.b
            if (r0 == 0) goto L2b
            java.lang.String r1 = "mbridgeDetached"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L2b
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.b
            java.lang.Object r0 = r0.get(r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L2b
            com.mbridge.msdk.foundation.same.report.g$a r0 = new com.mbridge.msdk.foundation.same.report.g$a
            r0.<init>(r1)
            com.mbridge.msdk.foundation.same.report.g r0 = r0.a()
            java.lang.String r1 = r2.c
            r0.a(r1)
        L2b:
            return
    }

    @Override
    public void setDynamicReport(java.lang.String r1, com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r0 = this;
            java.util.Map r1 = com.mbridge.msdk.dycreator.e.c.a(r1)
            r0.b = r1
            if (r2 == 0) goto Le
            java.lang.String r1 = r2.getCampaignUnitId()
            r0.c = r1
        Le:
            return
    }
}
