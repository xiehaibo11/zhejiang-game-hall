package com.mbridge.msdk.dycreator.baseview;

public class MBScrollView extends android.widget.ScrollView implements com.mbridge.msdk.dycreator.baseview.inter.InterBase {
    private java.util.Map<java.lang.String, java.lang.String> a;
    private java.util.Map<java.lang.String, java.lang.Boolean> b;
    private java.lang.String c;

    static class 1 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.dycreator.a.c[] r0 = com.mbridge.msdk.dycreator.a.c.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.dycreator.baseview.MBScrollView.1.a = r0
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.a     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBScrollView.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.Q     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBScrollView.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.W     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBScrollView.1.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.L     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBScrollView.1.a     // Catch: java.lang.NoSuchFieldError -> L3e
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.P     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.MBScrollView.1.a     // Catch: java.lang.NoSuchFieldError -> L49
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.o     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                return
        }
    }

    public MBScrollView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = ""
            r1.c = r0
            java.util.Map r2 = com.mbridge.msdk.dycreator.e.c.a(r2, r3)
            r1.a = r2
            r1.setAttributeSet(r3)
            android.widget.FrameLayout$LayoutParams r2 = r1.generateLayoutParams(r3)
            r1.setLayoutParams(r2)
            java.util.Map<java.lang.String, java.lang.String> r2 = r1.a
            com.mbridge.msdk.dycreator.e.c.a(r2, r1)
            return
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.widget.FrameLayout$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    public android.widget.FrameLayout.LayoutParams generateLayoutParams(android.util.AttributeSet r9) {
            r8 = this;
            android.widget.FrameLayout$LayoutParams r0 = r8.generateDefaultLayoutParams()
            com.mbridge.msdk.dycreator.a.b r1 = com.mbridge.msdk.dycreator.a.b.a()
            java.util.HashMap r1 = r1.c()
            int r2 = r9.getAttributeCount()
            r3 = 0
            r4 = r3
        L12:
            if (r4 >= r2) goto L7b
            java.lang.String r5 = r9.getAttributeName(r4)
            java.lang.Object r5 = r1.get(r5)
            com.mbridge.msdk.dycreator.a.c r5 = (com.mbridge.msdk.dycreator.a.c) r5
            if (r5 == 0) goto L29
            java.lang.String r6 = r5.toString()
            java.lang.String r7 = "MBscrollviewparam"
            android.util.Log.e(r7, r6)
        L29:
            if (r5 != 0) goto L2c
            goto L78
        L2c:
            int[] r6 = com.mbridge.msdk.dycreator.baseview.MBScrollView.1.a
            int r5 = r5.ordinal()
            r5 = r6[r5]
            r6 = 4
            if (r5 == r6) goto L71
            r7 = 5
            if (r5 == r7) goto L4d
            r6 = 6
            if (r5 == r6) goto L3e
            goto L78
        L3e:
            com.mbridge.msdk.dycreator.a.b r5 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r6 = r9.getAttributeValue(r4)
            int r5 = r5.b(r6)
            r0.bottomMargin = r5
            goto L78
        L4d:
            java.lang.String r5 = r9.getAttributeValue(r4)
            boolean r7 = android.text.TextUtils.isEmpty(r5)
            if (r7 != 0) goto L78
            java.lang.String r7 = "invisible"
            boolean r7 = r5.equals(r7)
            if (r7 == 0) goto L63
            r8.setVisibility(r6)
            goto L78
        L63:
            java.lang.String r6 = "gone"
            boolean r5 = r5.equalsIgnoreCase(r6)
            if (r5 == 0) goto L78
            r5 = 8
            r8.setVisibility(r5)
            goto L78
        L71:
            boolean r5 = r9.getAttributeBooleanValue(r4, r3)
            r8.setHorizontalFadingEdgeEnabled(r5)
        L78:
            int r4 = r4 + 1
            goto L12
        L7b:
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

    public void setAttributeSet(android.util.AttributeSet r7) {
            r6 = this;
            com.mbridge.msdk.dycreator.a.b r0 = com.mbridge.msdk.dycreator.a.b.a()
            java.util.HashMap r0 = r0.c()
            int r1 = r7.getAttributeCount()
            r2 = 0
        Ld:
            if (r2 >= r1) goto Lb0
            java.lang.String r3 = r7.getAttributeName(r2)
            java.lang.Object r3 = r0.get(r3)
            com.mbridge.msdk.dycreator.a.c r3 = (com.mbridge.msdk.dycreator.a.c) r3
            if (r3 != 0) goto L1d
            goto Lac
        L1d:
            int[] r4 = com.mbridge.msdk.dycreator.baseview.MBScrollView.1.a
            int r3 = r3.ordinal()
            r3 = r4[r3]
            r4 = 1
            if (r3 == r4) goto L94
            r4 = 2
            if (r3 == r4) goto L38
            r4 = 3
            if (r3 == r4) goto L30
            goto Lac
        L30:
            java.lang.String r3 = r7.getAttributeValue(r2)
            r6.setContentDescription(r3)
            goto Lac
        L38:
            java.lang.String r3 = r7.getAttributeValue(r2)
            java.lang.String r4 = "#"
            boolean r4 = r3.startsWith(r4)
            if (r4 == 0) goto L54
            com.mbridge.msdk.dycreator.a.b r3 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r4 = r7.getAttributeValue(r2)
            int r3 = r3.a(r4)
            r6.setBackgroundColor(r3)
            goto Lac
        L54:
            java.lang.String r4 = "@drawable/"
            boolean r4 = r3.startsWith(r4)
            if (r4 == 0) goto L62
            r4 = 10
            java.lang.String r3 = r3.substring(r4)
        L62:
            android.content.Context r4 = r6.getContext()
            java.io.File r4 = r4.getFilesDir()
            java.lang.String r4 = r4.toString()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r4)
            java.lang.String r4 = "/"
            r5.append(r4)
            r5.append(r3)
            java.lang.String r3 = ".png"
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            android.graphics.Bitmap r3 = android.graphics.BitmapFactory.decodeFile(r3)
            android.graphics.drawable.BitmapDrawable r4 = new android.graphics.drawable.BitmapDrawable
            r4.<init>(r3)
            r6.setBackgroundDrawable(r4)
            goto Lac
        L94:
            java.lang.String r3 = r7.getAttributeValue(r2)
            java.lang.String r4 = "@+id/"
            boolean r4 = r3.startsWith(r4)
            if (r4 == 0) goto Lac
            r4 = 5
            java.lang.String r3 = r3.substring(r4)
            int r3 = r3.hashCode()
            r6.setId(r3)
        Lac:
            int r2 = r2 + 1
            goto Ld
        Lb0:
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
