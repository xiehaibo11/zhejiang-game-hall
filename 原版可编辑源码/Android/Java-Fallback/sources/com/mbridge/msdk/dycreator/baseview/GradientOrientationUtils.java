package com.mbridge.msdk.dycreator.baseview;

public class GradientOrientationUtils {
    public GradientOrientationUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.graphics.drawable.GradientDrawable.Orientation getOrientation(java.lang.String r1) {
            android.graphics.drawable.GradientDrawable$Orientation r0 = android.graphics.drawable.GradientDrawable.Orientation.TOP_BOTTOM     // Catch: java.lang.Exception -> L7c
            android.graphics.drawable.GradientDrawable$Orientation r0 = android.graphics.drawable.GradientDrawable.Orientation.TOP_BOTTOM     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = r0.name()     // Catch: java.lang.Exception -> L7c
            boolean r0 = android.text.TextUtils.equals(r1, r0)     // Catch: java.lang.Exception -> L7c
            if (r0 == 0) goto L10
            goto L79
        L10:
            android.graphics.drawable.GradientDrawable$Orientation r0 = android.graphics.drawable.GradientDrawable.Orientation.BL_TR     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = r0.name()     // Catch: java.lang.Exception -> L7c
            boolean r0 = android.text.TextUtils.equals(r1, r0)     // Catch: java.lang.Exception -> L7c
            if (r0 == 0) goto L1f
            android.graphics.drawable.GradientDrawable$Orientation r1 = android.graphics.drawable.GradientDrawable.Orientation.BL_TR     // Catch: java.lang.Exception -> L7c
            goto L7b
        L1f:
            android.graphics.drawable.GradientDrawable$Orientation r0 = android.graphics.drawable.GradientDrawable.Orientation.BOTTOM_TOP     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = r0.name()     // Catch: java.lang.Exception -> L7c
            boolean r0 = android.text.TextUtils.equals(r1, r0)     // Catch: java.lang.Exception -> L7c
            if (r0 == 0) goto L2e
            android.graphics.drawable.GradientDrawable$Orientation r1 = android.graphics.drawable.GradientDrawable.Orientation.BOTTOM_TOP     // Catch: java.lang.Exception -> L7c
            goto L7b
        L2e:
            android.graphics.drawable.GradientDrawable$Orientation r0 = android.graphics.drawable.GradientDrawable.Orientation.BR_TL     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = r0.name()     // Catch: java.lang.Exception -> L7c
            boolean r0 = android.text.TextUtils.equals(r1, r0)     // Catch: java.lang.Exception -> L7c
            if (r0 == 0) goto L3d
            android.graphics.drawable.GradientDrawable$Orientation r1 = android.graphics.drawable.GradientDrawable.Orientation.BR_TL     // Catch: java.lang.Exception -> L7c
            goto L7b
        L3d:
            android.graphics.drawable.GradientDrawable$Orientation r0 = android.graphics.drawable.GradientDrawable.Orientation.LEFT_RIGHT     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = r0.name()     // Catch: java.lang.Exception -> L7c
            boolean r0 = android.text.TextUtils.equals(r1, r0)     // Catch: java.lang.Exception -> L7c
            if (r0 == 0) goto L4c
            android.graphics.drawable.GradientDrawable$Orientation r1 = android.graphics.drawable.GradientDrawable.Orientation.LEFT_RIGHT     // Catch: java.lang.Exception -> L7c
            goto L7b
        L4c:
            android.graphics.drawable.GradientDrawable$Orientation r0 = android.graphics.drawable.GradientDrawable.Orientation.RIGHT_LEFT     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = r0.name()     // Catch: java.lang.Exception -> L7c
            boolean r0 = android.text.TextUtils.equals(r1, r0)     // Catch: java.lang.Exception -> L7c
            if (r0 == 0) goto L5b
            android.graphics.drawable.GradientDrawable$Orientation r1 = android.graphics.drawable.GradientDrawable.Orientation.RIGHT_LEFT     // Catch: java.lang.Exception -> L7c
            goto L7b
        L5b:
            android.graphics.drawable.GradientDrawable$Orientation r0 = android.graphics.drawable.GradientDrawable.Orientation.TL_BR     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = r0.name()     // Catch: java.lang.Exception -> L7c
            boolean r0 = android.text.TextUtils.equals(r1, r0)     // Catch: java.lang.Exception -> L7c
            if (r0 == 0) goto L6a
            android.graphics.drawable.GradientDrawable$Orientation r1 = android.graphics.drawable.GradientDrawable.Orientation.TL_BR     // Catch: java.lang.Exception -> L7c
            goto L7b
        L6a:
            android.graphics.drawable.GradientDrawable$Orientation r0 = android.graphics.drawable.GradientDrawable.Orientation.BR_TL     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = r0.name()     // Catch: java.lang.Exception -> L7c
            boolean r1 = android.text.TextUtils.equals(r1, r0)     // Catch: java.lang.Exception -> L7c
            if (r1 == 0) goto L79
            android.graphics.drawable.GradientDrawable$Orientation r1 = android.graphics.drawable.GradientDrawable.Orientation.BR_TL     // Catch: java.lang.Exception -> L7c
            goto L7b
        L79:
            android.graphics.drawable.GradientDrawable$Orientation r1 = android.graphics.drawable.GradientDrawable.Orientation.TOP_BOTTOM     // Catch: java.lang.Exception -> L7c
        L7b:
            return r1
        L7c:
            android.graphics.drawable.GradientDrawable$Orientation r1 = android.graphics.drawable.GradientDrawable.Orientation.TOP_BOTTOM
            return r1
    }
}
