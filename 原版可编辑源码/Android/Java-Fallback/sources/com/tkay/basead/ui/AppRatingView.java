package com.tkay.basead.ui;

public class AppRatingView extends android.widget.LinearLayout {
    private android.content.Context a;
    private java.util.List<com.tkay.basead.ui.StarLevelView> b;
    private int c;
    private int d;

    public AppRatingView(android.content.Context r3) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public AppRatingView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public AppRatingView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a = r1
            r1 = 17
            r0.setStarSizeInDp(r1)
            r1 = 8
            r0.setStarMargin(r1)
            return
    }

    public static int dip2px(android.content.Context r0, float r1) {
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r1 = r1 * r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            return r0
    }

    public void setRating(int r5) {
            r4 = this;
            r0 = 0
            r1 = r0
        L2:
            java.util.List<com.tkay.basead.ui.StarLevelView> r2 = r4.b
            int r2 = r2.size()
            if (r1 >= r2) goto L1f
            java.util.List<com.tkay.basead.ui.StarLevelView> r2 = r4.b
            java.lang.Object r2 = r2.get(r1)
            com.tkay.basead.ui.StarLevelView r2 = (com.tkay.basead.ui.StarLevelView) r2
            if (r1 >= r5) goto L19
            r3 = 1
            r2.setState(r3)
            goto L1c
        L19:
            r2.setState(r0)
        L1c:
            int r1 = r1 + 1
            goto L2
        L1f:
            return
    }

    public void setStarMargin(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setStarNum(int r7) {
            r6 = this;
            java.util.List<com.tkay.basead.ui.StarLevelView> r0 = r6.b
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r6.b = r0
        Lb:
            java.util.List<com.tkay.basead.ui.StarLevelView> r0 = r6.b
            r0.clear()
            r6.removeAllViews()
            r0 = 0
            r6.setOrientation(r0)
            r1 = r0
        L18:
            if (r1 >= r7) goto L4a
            com.tkay.basead.ui.StarLevelView r2 = new com.tkay.basead.ui.StarLevelView
            android.content.Context r3 = r6.getContext()
            r2.<init>(r3)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            int r4 = r6.c
            r3.<init>(r4, r4)
            int r4 = r7 + (-1)
            if (r1 == r4) goto L3c
            android.content.Context r4 = r6.getContext()
            int r5 = r6.d
            float r5 = (float) r5
            int r4 = dip2px(r4, r5)
            r3.setMargins(r0, r0, r4, r0)
        L3c:
            r2.setLayoutParams(r3)
            r6.addView(r2)
            java.util.List<com.tkay.basead.ui.StarLevelView> r3 = r6.b
            r3.add(r2)
            int r1 = r1 + 1
            goto L18
        L4a:
            return
    }

    public void setStarSizeInDp(int r2) {
            r1 = this;
            android.content.Context r0 = r1.a
            float r2 = (float) r2
            int r2 = dip2px(r0, r2)
            r1.c = r2
            return
    }
}
