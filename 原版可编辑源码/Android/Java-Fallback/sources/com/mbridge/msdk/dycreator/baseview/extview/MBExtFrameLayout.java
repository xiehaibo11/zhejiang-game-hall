package com.mbridge.msdk.dycreator.baseview.extview;

public class MBExtFrameLayout extends com.mbridge.msdk.dycreator.baseview.cusview.MBridgeFramLayout implements com.mbridge.msdk.dycreator.baseview.inter.InterBase {
    private java.util.Map<java.lang.String, java.lang.String> a;
    private java.util.Map<java.lang.String, java.lang.Boolean> b;
    private java.lang.String c;

    static class 1 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.dycreator.a.c[] r0 = com.mbridge.msdk.dycreator.a.c.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.dycreator.baseview.extview.MBExtFrameLayout.1.a = r0
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.b     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.extview.MBExtFrameLayout.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.c     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.extview.MBExtFrameLayout.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.r     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.extview.MBExtFrameLayout.1.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.q     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.extview.MBExtFrameLayout.1.a     // Catch: java.lang.NoSuchFieldError -> L3e
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.l     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.extview.MBExtFrameLayout.1.a     // Catch: java.lang.NoSuchFieldError -> L49
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.m     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.extview.MBExtFrameLayout.1.a     // Catch: java.lang.NoSuchFieldError -> L54
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.n     // Catch: java.lang.NoSuchFieldError -> L54
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L54
                r2 = 7
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L54
            L54:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.extview.MBExtFrameLayout.1.a     // Catch: java.lang.NoSuchFieldError -> L60
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.o     // Catch: java.lang.NoSuchFieldError -> L60
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L60
                r2 = 8
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L60
            L60:
                return
        }
    }

    public MBExtFrameLayout(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = ""
            r0.c = r1
            return
    }

    public MBExtFrameLayout(android.content.Context r2, android.util.AttributeSet r3) {
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
            java.lang.String r3 = "MBExtFrameLayout"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L27:
            return
    }

    public MBExtFrameLayout(android.content.Context r1, android.util.AttributeSet r2, int r3) {
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
    public android.widget.FrameLayout.LayoutParams generateLayoutParams(android.util.AttributeSet r11) {
            r10 = this;
            android.widget.FrameLayout$LayoutParams r0 = r10.generateDefaultLayoutParams()
            com.mbridge.msdk.dycreator.a.b r1 = com.mbridge.msdk.dycreator.a.b.a()
            java.util.HashMap r1 = r1.b()
            int r2 = r11.getAttributeCount()
            r3 = 0
        L11:
            if (r3 >= r2) goto Le8
            java.lang.String r4 = r11.getAttributeName(r3)
            java.lang.Object r4 = r1.get(r4)
            com.mbridge.msdk.dycreator.a.c r4 = (com.mbridge.msdk.dycreator.a.c) r4
            if (r4 != 0) goto L21
            goto Le4
        L21:
            int[] r5 = com.mbridge.msdk.dycreator.baseview.extview.MBExtFrameLayout.1.a
            int r4 = r4.ordinal()
            r4 = r5[r4]
            r5 = -2
            java.lang.String r6 = "w"
            java.lang.String r7 = "m"
            r8 = -1
            java.lang.String r9 = "f"
            switch(r4) {
                case 1: goto Lbd;
                case 2: goto L95;
                case 3: goto L86;
                case 4: goto L76;
                case 5: goto L66;
                case 6: goto L56;
                case 7: goto L46;
                case 8: goto L36;
                default: goto L34;
            }
        L34:
            goto Le4
        L36:
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r11.getAttributeValue(r3)
            int r4 = r4.b(r5)
            r0.bottomMargin = r4
            goto Le4
        L46:
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r11.getAttributeValue(r3)
            int r4 = r4.b(r5)
            r0.topMargin = r4
            goto Le4
        L56:
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r11.getAttributeValue(r3)
            int r4 = r4.b(r5)
            r0.rightMargin = r4
            goto Le4
        L66:
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r11.getAttributeValue(r3)
            int r4 = r4.b(r5)
            r0.leftMargin = r4
            goto Le4
        L76:
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r11.getAttributeValue(r3)
            int r4 = r4.b(r5)
            r0.setMargins(r4, r4, r4, r4)
            goto Le4
        L86:
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r11.getAttributeValue(r3)
            int r4 = r4.c(r5)
            r0.gravity = r4
            goto Le4
        L95:
            java.lang.String r4 = r11.getAttributeValue(r3)
            boolean r9 = r4.startsWith(r9)
            if (r9 != 0) goto Lba
            boolean r7 = r4.startsWith(r7)
            if (r7 == 0) goto La6
            goto Lba
        La6:
            boolean r6 = r4.startsWith(r6)
            if (r6 == 0) goto Laf
            r0.width = r5
            goto Le4
        Laf:
            com.mbridge.msdk.dycreator.a.b r5 = com.mbridge.msdk.dycreator.a.b.a()
            int r4 = r5.b(r4)
            r0.height = r4
            goto Le4
        Lba:
            r0.width = r8
            goto Le4
        Lbd:
            java.lang.String r4 = r11.getAttributeValue(r3)
            boolean r9 = r4.startsWith(r9)
            if (r9 != 0) goto Le2
            boolean r7 = r4.startsWith(r7)
            if (r7 == 0) goto Lce
            goto Le2
        Lce:
            boolean r6 = r4.startsWith(r6)
            if (r6 == 0) goto Ld7
            r0.width = r5
            goto Le4
        Ld7:
            com.mbridge.msdk.dycreator.a.b r5 = com.mbridge.msdk.dycreator.a.b.a()
            int r4 = r5.b(r4)
            r0.width = r4
            goto Le4
        Le2:
            r0.width = r8
        Le4:
            int r3 = r3 + 1
            goto L11
        Le8:
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
