package com.mbridge.msdk.widget.custom.baseview;

public class MBFrameLayout extends android.widget.FrameLayout {

    static class 1 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.widget.custom.a.c[] r0 = com.mbridge.msdk.widget.custom.a.c.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.widget.custom.baseview.MBFrameLayout.1.a = r0
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.b     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBFrameLayout.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.c     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBFrameLayout.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.q     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBFrameLayout.1.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.k     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.mbridge.msdk.widget.custom.baseview.MBFrameLayout.1.a     // Catch: java.lang.NoSuchFieldError -> L3e
                com.mbridge.msdk.widget.custom.a.c r1 = com.mbridge.msdk.widget.custom.a.c.p     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                return
        }
    }

    public MBFrameLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1)
            android.widget.FrameLayout$LayoutParams r1 = r0.generateLayoutParams(r2)
            r0.setLayoutParams(r1)
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
            android.widget.FrameLayout$LayoutParams r0 = r11.generateDefaultLayoutParams()
            com.mbridge.msdk.widget.custom.a.b r1 = com.mbridge.msdk.widget.custom.a.b.a()
            java.util.HashMap r1 = r1.b()
            r2 = -2
            r0.width = r2
            r0.height = r2
            int r3 = r12.getAttributeCount()
            r4 = 0
        L16:
            if (r4 >= r3) goto Lc8
            java.lang.String r5 = r12.getAttributeName(r4)
            java.lang.Object r5 = r1.get(r5)
            com.mbridge.msdk.widget.custom.a.c r5 = (com.mbridge.msdk.widget.custom.a.c) r5
            if (r5 != 0) goto L26
            goto Lc4
        L26:
            int[] r6 = com.mbridge.msdk.widget.custom.baseview.MBFrameLayout.1.a
            int r5 = r5.ordinal()
            r5 = r6[r5]
            java.lang.String r6 = "w"
            java.lang.String r7 = "m"
            r8 = -1
            java.lang.String r9 = "f"
            r10 = 1
            if (r5 == r10) goto L9d
            r10 = 2
            if (r5 == r10) goto L75
            r6 = 3
            if (r5 == r6) goto L66
            r6 = 4
            if (r5 == r6) goto L57
            r6 = 5
            if (r5 == r6) goto L46
            goto Lc4
        L46:
            com.mbridge.msdk.widget.custom.a.b r5 = com.mbridge.msdk.widget.custom.a.b.a()
            java.lang.String r6 = r12.getAttributeValue(r4)
            int r5 = r5.c(r6)
            r0.setMargins(r5, r5, r5, r5)
            goto Lc4
        L57:
            com.mbridge.msdk.widget.custom.a.b r5 = com.mbridge.msdk.widget.custom.a.b.a()
            java.lang.String r6 = r12.getAttributeValue(r4)
            int r5 = r5.c(r6)
            r0.leftMargin = r5
            goto Lc4
        L66:
            com.mbridge.msdk.widget.custom.a.b r5 = com.mbridge.msdk.widget.custom.a.b.a()
            java.lang.String r6 = r12.getAttributeValue(r4)
            int r5 = r5.d(r6)
            r0.gravity = r5
            goto Lc4
        L75:
            java.lang.String r5 = r12.getAttributeValue(r4)
            boolean r9 = r5.startsWith(r9)
            if (r9 != 0) goto L9a
            boolean r7 = r5.startsWith(r7)
            if (r7 == 0) goto L86
            goto L9a
        L86:
            boolean r6 = r5.startsWith(r6)
            if (r6 == 0) goto L8f
            r0.width = r2
            goto Lc4
        L8f:
            com.mbridge.msdk.widget.custom.a.b r6 = com.mbridge.msdk.widget.custom.a.b.a()
            int r5 = r6.c(r5)
            r0.height = r5
            goto Lc4
        L9a:
            r0.width = r8
            goto Lc4
        L9d:
            java.lang.String r5 = r12.getAttributeValue(r4)
            boolean r9 = r5.startsWith(r9)
            if (r9 != 0) goto Lc2
            boolean r7 = r5.startsWith(r7)
            if (r7 == 0) goto Lae
            goto Lc2
        Lae:
            boolean r6 = r5.startsWith(r6)
            if (r6 == 0) goto Lb7
            r0.width = r2
            goto Lc4
        Lb7:
            com.mbridge.msdk.widget.custom.a.b r6 = com.mbridge.msdk.widget.custom.a.b.a()
            int r5 = r6.c(r5)
            r0.width = r5
            goto Lc4
        Lc2:
            r0.width = r8
        Lc4:
            int r4 = r4 + 1
            goto L16
        Lc8:
            return r0
    }
}
