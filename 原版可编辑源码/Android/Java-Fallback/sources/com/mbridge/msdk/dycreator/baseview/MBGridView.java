package com.mbridge.msdk.dycreator.baseview;

public class MBGridView extends android.widget.GridView implements com.mbridge.msdk.dycreator.baseview.inter.InterBase {
    private java.util.Map<java.lang.String, java.lang.String> a;
    private java.util.Map<java.lang.String, java.lang.Boolean> b;
    private java.lang.String c;

    static class 1 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.dycreator.a.c[] r0 = com.mbridge.msdk.dycreator.a.c.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.dycreator.baseview.MBGridView.1.a = r0
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.b     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBGridView.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.c     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBGridView.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.L     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBGridView.1.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.P     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                return
        }
    }

    public MBGridView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = ""
            r1.c = r0
            java.util.Map r2 = com.mbridge.msdk.dycreator.e.c.a(r2, r3)     // Catch: java.lang.Exception -> L1d
            r1.a = r2     // Catch: java.lang.Exception -> L1d
            com.mbridge.msdk.dycreator.e.a.a(r1, r3)     // Catch: java.lang.Exception -> L1d
            android.widget.AbsListView$LayoutParams r2 = r1.generateLayoutParams(r3)     // Catch: java.lang.Exception -> L1d
            r1.setLayoutParams(r2)     // Catch: java.lang.Exception -> L1d
            java.util.Map<java.lang.String, java.lang.String> r2 = r1.a     // Catch: java.lang.Exception -> L1d
            com.mbridge.msdk.dycreator.e.c.a(r2, r1)     // Catch: java.lang.Exception -> L1d
            goto L27
        L1d:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "MBGridView"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L27:
            return
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.widget.AbsListView$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    public android.widget.AbsListView.LayoutParams generateLayoutParams(android.util.AttributeSet r13) {
            r12 = this;
            android.view.ViewGroup$LayoutParams r0 = r12.generateDefaultLayoutParams()
            android.widget.AbsListView$LayoutParams r0 = (android.widget.AbsListView.LayoutParams) r0
            com.mbridge.msdk.dycreator.a.b r1 = com.mbridge.msdk.dycreator.a.b.a()
            java.util.HashMap r1 = r1.c()
            int r2 = r13.getAttributeCount()
            r3 = 0
            r4 = r3
        L14:
            if (r4 >= r2) goto Lc2
            java.lang.String r5 = r13.getAttributeName(r4)
            java.lang.Object r5 = r1.get(r5)
            com.mbridge.msdk.dycreator.a.c r5 = (com.mbridge.msdk.dycreator.a.c) r5
            if (r5 != 0) goto L24
            goto Lbe
        L24:
            int[] r6 = com.mbridge.msdk.dycreator.baseview.MBGridView.1.a
            int r5 = r5.ordinal()
            r5 = r6[r5]
            r6 = -2
            java.lang.String r7 = "wrap"
            java.lang.String r8 = "m"
            r9 = -1
            java.lang.String r10 = "f"
            r11 = 1
            if (r5 == r11) goto L97
            r11 = 2
            if (r5 == r11) goto L6f
            r6 = 3
            if (r5 == r6) goto L67
            r6 = 4
            if (r5 == r6) goto L42
            goto Lbe
        L42:
            java.lang.String r5 = r13.getAttributeValue(r4)
            boolean r7 = android.text.TextUtils.isEmpty(r5)
            if (r7 != 0) goto Lbe
            java.lang.String r7 = "invisible"
            boolean r7 = r5.equals(r7)
            if (r7 == 0) goto L59
            r12.setVisibility(r6)
            goto Lbe
        L59:
            java.lang.String r6 = "gone"
            boolean r5 = r5.equalsIgnoreCase(r6)
            if (r5 == 0) goto Lbe
            r5 = 8
            r12.setVisibility(r5)
            goto Lbe
        L67:
            boolean r5 = r13.getAttributeBooleanValue(r4, r3)
            r12.setHorizontalFadingEdgeEnabled(r5)
            goto Lbe
        L6f:
            java.lang.String r5 = r13.getAttributeValue(r4)
            boolean r10 = r5.startsWith(r10)
            if (r10 != 0) goto L94
            boolean r8 = r5.startsWith(r8)
            if (r8 == 0) goto L80
            goto L94
        L80:
            boolean r7 = r5.startsWith(r7)
            if (r7 == 0) goto L89
            r0.height = r6
            goto Lbe
        L89:
            com.mbridge.msdk.dycreator.a.b r6 = com.mbridge.msdk.dycreator.a.b.a()
            int r5 = r6.b(r5)
            r0.height = r5
            goto Lbe
        L94:
            r0.height = r9
            goto Lbe
        L97:
            java.lang.String r5 = r13.getAttributeValue(r4)
            boolean r10 = r5.startsWith(r10)
            if (r10 != 0) goto Lbc
            boolean r8 = r5.startsWith(r8)
            if (r8 == 0) goto La8
            goto Lbc
        La8:
            boolean r7 = r5.startsWith(r7)
            if (r7 == 0) goto Lb1
            r0.width = r6
            goto Lbe
        Lb1:
            com.mbridge.msdk.dycreator.a.b r6 = com.mbridge.msdk.dycreator.a.b.a()
            int r5 = r6.b(r5)
            r0.width = r5
            goto Lbe
        Lbc:
            r0.width = r9
        Lbe:
            int r4 = r4 + 1
            goto L14
        Lc2:
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
