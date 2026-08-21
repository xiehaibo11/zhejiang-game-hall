package com.mbridge.msdk.dycreator.baseview;

public class MBImageView extends android.widget.ImageView implements com.mbridge.msdk.dycreator.baseview.inter.InterBase {
    private java.util.Map<java.lang.String, java.lang.Boolean> a;
    private java.lang.String b;
    private java.util.Map<java.lang.String, java.lang.String> c;

    static class 1 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.dycreator.a.c[] r0 = com.mbridge.msdk.dycreator.a.c.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.dycreator.baseview.MBImageView.1.a = r0
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.b     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.c     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.P     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    public MBImageView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = ""
            r1.b = r0
            if (r2 == 0) goto L11
            if (r3 == 0) goto L11
            java.util.Map r0 = com.mbridge.msdk.dycreator.e.c.a(r2, r3)     // Catch: java.lang.Exception -> L21
            r1.c = r0     // Catch: java.lang.Exception -> L21
        L11:
            com.mbridge.msdk.dycreator.e.a.a(r1, r3)     // Catch: java.lang.Exception -> L21
            android.view.ViewGroup$LayoutParams r2 = r1.generateLayoutParams(r2, r3)     // Catch: java.lang.Exception -> L21
            r1.setLayoutParams(r2)     // Catch: java.lang.Exception -> L21
            java.util.Map<java.lang.String, java.lang.String> r2 = r1.c     // Catch: java.lang.Exception -> L21
            com.mbridge.msdk.dycreator.e.c.a(r2, r1)     // Catch: java.lang.Exception -> L21
            goto L2b
        L21:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "MBImageView"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L2b:
            return
    }

    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.content.Context r11, android.util.AttributeSet r12) {
            r10 = this;
            android.view.ViewGroup$LayoutParams r11 = new android.view.ViewGroup$LayoutParams
            r0 = -1
            r11.<init>(r0, r0)
            com.mbridge.msdk.dycreator.a.b r1 = com.mbridge.msdk.dycreator.a.b.a()
            java.util.HashMap r1 = r1.c()
            int r2 = r12.getAttributeCount()
            r3 = 0
        L13:
            if (r3 >= r2) goto Lb5
            java.lang.String r4 = r12.getAttributeName(r3)
            java.lang.Object r4 = r1.get(r4)
            com.mbridge.msdk.dycreator.a.c r4 = (com.mbridge.msdk.dycreator.a.c) r4
            if (r4 != 0) goto L23
            goto Lb1
        L23:
            int[] r5 = com.mbridge.msdk.dycreator.baseview.MBImageView.1.a
            int r4 = r4.ordinal()
            r4 = r5[r4]
            r5 = -2
            java.lang.String r6 = "wrap"
            java.lang.String r7 = "m"
            java.lang.String r8 = "f"
            r9 = 1
            if (r4 == r9) goto L8a
            r9 = 2
            if (r4 == r9) goto L62
            r5 = 3
            if (r4 == r5) goto L3d
            goto Lb1
        L3d:
            java.lang.String r4 = r12.getAttributeValue(r3)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto Lb1
            java.lang.String r5 = "invisible"
            boolean r5 = r4.equals(r5)
            if (r5 == 0) goto L54
            r4 = 4
            r10.setVisibility(r4)
            goto Lb1
        L54:
            java.lang.String r5 = "gone"
            boolean r4 = r4.equalsIgnoreCase(r5)
            if (r4 == 0) goto Lb1
            r4 = 8
            r10.setVisibility(r4)
            goto Lb1
        L62:
            java.lang.String r4 = r12.getAttributeValue(r3)
            boolean r8 = r4.startsWith(r8)
            if (r8 != 0) goto L87
            boolean r7 = r4.startsWith(r7)
            if (r7 == 0) goto L73
            goto L87
        L73:
            boolean r6 = r4.startsWith(r6)
            if (r6 == 0) goto L7c
            r11.height = r5
            goto Lb1
        L7c:
            com.mbridge.msdk.dycreator.a.b r5 = com.mbridge.msdk.dycreator.a.b.a()
            int r4 = r5.b(r4)
            r11.height = r4
            goto Lb1
        L87:
            r11.height = r0
            goto Lb1
        L8a:
            java.lang.String r4 = r12.getAttributeValue(r3)
            boolean r8 = r4.startsWith(r8)
            if (r8 != 0) goto Laf
            boolean r7 = r4.startsWith(r7)
            if (r7 == 0) goto L9b
            goto Laf
        L9b:
            boolean r6 = r4.startsWith(r6)
            if (r6 == 0) goto La4
            r11.width = r5
            goto Lb1
        La4:
            com.mbridge.msdk.dycreator.a.b r5 = com.mbridge.msdk.dycreator.a.b.a()
            int r4 = r5.b(r4)
            r11.width = r4
            goto Lb1
        Laf:
            r11.width = r0
        Lb1:
            int r3 = r3 + 1
            goto L13
        Lb5:
            return r11
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
    protected void onAttachedToWindow() {
            r2 = this;
            super.onAttachedToWindow()
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.a
            if (r0 == 0) goto L2b
            java.lang.String r1 = "mbridgeAttached"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L2b
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.a
            java.lang.Object r0 = r0.get(r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L2b
            com.mbridge.msdk.foundation.same.report.g$a r0 = new com.mbridge.msdk.foundation.same.report.g$a
            r0.<init>(r1)
            com.mbridge.msdk.foundation.same.report.g r0 = r0.a()
            java.lang.String r1 = r2.b
            r0.a(r1)
        L2b:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.a
            if (r0 == 0) goto L2b
            java.lang.String r1 = "mbridgeDetached"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L2b
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.a
            java.lang.Object r0 = r0.get(r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L2b
            com.mbridge.msdk.foundation.same.report.g$a r0 = new com.mbridge.msdk.foundation.same.report.g$a
            r0.<init>(r1)
            com.mbridge.msdk.foundation.same.report.g r0 = r0.a()
            java.lang.String r1 = r2.b
            r0.a(r1)
        L2b:
            return
    }

    @Override
    public void setDynamicReport(java.lang.String r1, com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r0 = this;
            java.util.Map r1 = com.mbridge.msdk.dycreator.e.c.a(r1)
            r0.a = r1
            if (r2 == 0) goto Le
            java.lang.String r1 = r2.getCampaignUnitId()
            r0.b = r1
        Le:
            return
    }
}
