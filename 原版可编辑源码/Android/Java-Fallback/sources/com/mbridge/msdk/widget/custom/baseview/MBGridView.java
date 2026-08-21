package com.mbridge.msdk.widget.custom.baseview;

public class MBGridView extends android.widget.GridView {

    static class 1 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.widget.custom.a.c[] r0 = com.mbridge.msdk.widget.custom.a.c.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.widget.custom.baseview.MBGridView.1.a = r0
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.b     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBGridView.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.c     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBGridView.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.D     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBGridView.1.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.I     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBGridView.1.a     // Catch: java.lang.NoSuchFieldError -> L3e
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.a     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBGridView.1.a     // Catch: java.lang.NoSuchFieldError -> L49
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.z     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBGridView.1.a     // Catch: java.lang.NoSuchFieldError -> L54
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.O     // Catch: java.lang.NoSuchFieldError -> L54
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L54
                r2 = 7
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L54
            L54:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBGridView.1.a     // Catch: java.lang.NoSuchFieldError -> L60
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.x     // Catch: java.lang.NoSuchFieldError -> L60
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L60
                r2 = 8
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L60
            L60:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBGridView.1.a     // Catch: java.lang.NoSuchFieldError -> L6c
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.y     // Catch: java.lang.NoSuchFieldError -> L6c
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L6c
                r2 = 9
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L6c
            L6c:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBGridView.1.a     // Catch: java.lang.NoSuchFieldError -> L78
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.A     // Catch: java.lang.NoSuchFieldError -> L78
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L78
                r2 = 10
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L78
            L78:
                return
        }
    }

    public MBGridView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1)
            r0.setAttributeSet(r2)
            android.widget.AbsListView$LayoutParams r1 = r0.generateLayoutParams(r2)
            r0.setLayoutParams(r1)
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
            com.mbridge.msdk.widget.custom.a.b r1 = com.mbridge.msdk.widget.custom.a.b.a()
            java.util.HashMap r1 = r1.c()
            int r2 = r13.getAttributeCount()
            r3 = 0
            r4 = r3
        L14:
            if (r4 >= r2) goto Lc2
            java.lang.String r5 = r13.getAttributeName(r4)
            java.lang.Object r5 = r1.get(r5)
            com.mbridge.msdk.widget.custom.a.c r5 = (com.mbridge.msdk.widget.custom.a.c) r5
            if (r5 != 0) goto L24
            goto Lbe
        L24:
            int[] r6 = com.mbridge.msdk.widget.custom.baseview.MBGridView.1.a
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
            com.mbridge.msdk.widget.custom.a.b r6 = com.mbridge.msdk.widget.custom.a.b.a()
            int r5 = r6.c(r5)
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
            com.mbridge.msdk.widget.custom.a.b r6 = com.mbridge.msdk.widget.custom.a.b.a()
            int r5 = r6.c(r5)
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

    public void setAttributeSet(android.util.AttributeSet r7) {
            r6 = this;
            com.mbridge.msdk.widget.custom.a.b r0 = com.mbridge.msdk.widget.custom.a.b.a()
            java.util.HashMap r0 = r0.c()
            int r1 = r7.getAttributeCount()
            r2 = 0
        Ld:
            if (r2 >= r1) goto La1
            java.lang.String r3 = r7.getAttributeName(r2)
            java.lang.Object r3 = r0.get(r3)
            com.mbridge.msdk.widget.custom.a.c r3 = (com.mbridge.msdk.widget.custom.a.c) r3
            if (r3 != 0) goto L1d
            goto L9d
        L1d:
            int[] r4 = com.mbridge.msdk.widget.custom.baseview.MBGridView.1.a
            int r3 = r3.ordinal()
            r3 = r4[r3]
            switch(r3) {
                case 5: goto L85;
                case 6: goto L6c;
                case 7: goto L63;
                case 8: goto L53;
                case 9: goto L43;
                case 10: goto L2a;
                default: goto L28;
            }
        L28:
            goto L9d
        L2a:
            android.content.Context r3 = r6.getContext()
            com.mbridge.msdk.widget.custom.a.b r4 = com.mbridge.msdk.widget.custom.a.b.a()
            java.lang.String r5 = r7.getAttributeValue(r2)
            int r4 = r4.c(r5)
            float r4 = (float) r4
            int r3 = com.mbridge.msdk.widget.custom.b.a.b(r3, r4)
            r6.setHorizontalSpacing(r3)
            goto L9d
        L43:
            com.mbridge.msdk.widget.custom.a.b r3 = com.mbridge.msdk.widget.custom.a.b.a()
            java.lang.String r4 = r7.getAttributeValue(r2)
            int r3 = r3.b(r4)
            r6.setCacheColorHint(r3)
            goto L9d
        L53:
            java.lang.String r3 = r7.getAttributeValue(r2)
            java.lang.String r4 = "false"
            boolean r3 = r3.equals(r4)
            r3 = r3 ^ 1
            r6.setMotionEventSplittingEnabled(r3)
            goto L9d
        L63:
            r3 = 2
            int r3 = r7.getAttributeIntValue(r2, r3)
            r6.setNumColumns(r3)
            goto L9d
        L6c:
            android.content.Context r3 = r6.getContext()
            com.mbridge.msdk.widget.custom.a.b r4 = com.mbridge.msdk.widget.custom.a.b.a()
            java.lang.String r5 = r7.getAttributeValue(r2)
            int r4 = r4.c(r5)
            float r4 = (float) r4
            int r3 = com.mbridge.msdk.widget.custom.b.a.b(r3, r4)
            r6.setVerticalSpacing(r3)
            goto L9d
        L85:
            java.lang.String r3 = r7.getAttributeValue(r2)
            java.lang.String r4 = "@+id/"
            boolean r4 = r3.startsWith(r4)
            if (r4 == 0) goto L9d
            r4 = 5
            java.lang.String r3 = r3.substring(r4)
            int r3 = r3.hashCode()
            r6.setId(r3)
        L9d:
            int r2 = r2 + 1
            goto Ld
        La1:
            return
    }
}
