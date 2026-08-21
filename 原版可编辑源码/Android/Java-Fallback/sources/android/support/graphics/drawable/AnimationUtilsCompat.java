package android.support.graphics.drawable;

public class AnimationUtilsCompat {
    private AnimationUtilsCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.view.animation.Interpolator createInterpolatorFromXml(android.content.Context r2, android.content.res.Resources r3, android.content.res.Resources.Theme r4, org.xmlpull.v1.XmlPullParser r5) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            int r3 = r5.getDepth()
            r4 = 0
        L5:
            int r0 = r5.next()
            r1 = 3
            if (r0 != r1) goto L12
            int r1 = r5.getDepth()
            if (r1 <= r3) goto Lca
        L12:
            r1 = 1
            if (r0 == r1) goto Lca
            r1 = 2
            if (r0 == r1) goto L19
            goto L5
        L19:
            android.util.AttributeSet r4 = android.util.Xml.asAttributeSet(r5)
            java.lang.String r0 = r5.getName()
            java.lang.String r1 = "linearInterpolator"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L2f
            android.view.animation.LinearInterpolator r4 = new android.view.animation.LinearInterpolator
            r4.<init>()
            goto L5
        L2f:
            java.lang.String r1 = "accelerateInterpolator"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L3e
            android.view.animation.AccelerateInterpolator r0 = new android.view.animation.AccelerateInterpolator
            r0.<init>(r2, r4)
        L3c:
            r4 = r0
            goto L5
        L3e:
            java.lang.String r1 = "decelerateInterpolator"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L4c
            android.view.animation.DecelerateInterpolator r0 = new android.view.animation.DecelerateInterpolator
            r0.<init>(r2, r4)
            goto L3c
        L4c:
            java.lang.String r1 = "accelerateDecelerateInterpolator"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L5a
            android.view.animation.AccelerateDecelerateInterpolator r4 = new android.view.animation.AccelerateDecelerateInterpolator
            r4.<init>()
            goto L5
        L5a:
            java.lang.String r1 = "cycleInterpolator"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L68
            android.view.animation.CycleInterpolator r0 = new android.view.animation.CycleInterpolator
            r0.<init>(r2, r4)
            goto L3c
        L68:
            java.lang.String r1 = "anticipateInterpolator"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L76
            android.view.animation.AnticipateInterpolator r0 = new android.view.animation.AnticipateInterpolator
            r0.<init>(r2, r4)
            goto L3c
        L76:
            java.lang.String r1 = "overshootInterpolator"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L84
            android.view.animation.OvershootInterpolator r0 = new android.view.animation.OvershootInterpolator
            r0.<init>(r2, r4)
            goto L3c
        L84:
            java.lang.String r1 = "anticipateOvershootInterpolator"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L92
            android.view.animation.AnticipateOvershootInterpolator r0 = new android.view.animation.AnticipateOvershootInterpolator
            r0.<init>(r2, r4)
            goto L3c
        L92:
            java.lang.String r1 = "bounceInterpolator"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto La1
            android.view.animation.BounceInterpolator r4 = new android.view.animation.BounceInterpolator
            r4.<init>()
            goto L5
        La1:
            java.lang.String r1 = "pathInterpolator"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Laf
            android.support.graphics.drawable.PathInterpolatorCompat r0 = new android.support.graphics.drawable.PathInterpolatorCompat
            r0.<init>(r2, r4, r5)
            goto L3c
        Laf:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Unknown interpolator name: "
            r3.append(r4)
            java.lang.String r4 = r5.getName()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
        Lca:
            return r4
    }

    public static android.view.animation.Interpolator loadInterpolator(android.content.Context r4, int r5) throws android.content.res.Resources.NotFoundException {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.view.animation.Interpolator r4 = android.view.animation.AnimationUtils.loadInterpolator(r4, r5)
            return r4
        Lb:
            r0 = 0
            r1 = 17563663(0x10c000f, float:2.571398E-38)
            java.lang.String r2 = "Can't load animation resource ID #0x"
            if (r5 != r1) goto L1f
            android.support.v4.view.animation.FastOutLinearInInterpolator r4 = new android.support.v4.view.animation.FastOutLinearInInterpolator     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1b org.xmlpull.v1.XmlPullParserException -> L1d
            r4.<init>()     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1b org.xmlpull.v1.XmlPullParserException -> L1d
            return r4
        L19:
            r4 = move-exception
            goto L87
        L1b:
            r4 = move-exception
            goto L4f
        L1d:
            r4 = move-exception
            goto L6b
        L1f:
            r1 = 17563661(0x10c000d, float:2.5713975E-38)
            if (r5 != r1) goto L2a
            android.support.v4.view.animation.FastOutSlowInInterpolator r4 = new android.support.v4.view.animation.FastOutSlowInInterpolator     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1b org.xmlpull.v1.XmlPullParserException -> L1d
            r4.<init>()     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1b org.xmlpull.v1.XmlPullParserException -> L1d
            return r4
        L2a:
            r1 = 17563662(0x10c000e, float:2.5713978E-38)
            if (r5 != r1) goto L35
            android.support.v4.view.animation.LinearOutSlowInInterpolator r4 = new android.support.v4.view.animation.LinearOutSlowInInterpolator     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1b org.xmlpull.v1.XmlPullParserException -> L1d
            r4.<init>()     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1b org.xmlpull.v1.XmlPullParserException -> L1d
            return r4
        L35:
            android.content.res.Resources r1 = r4.getResources()     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1b org.xmlpull.v1.XmlPullParserException -> L1d
            android.content.res.XmlResourceParser r0 = r1.getAnimation(r5)     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1b org.xmlpull.v1.XmlPullParserException -> L1d
            android.content.res.Resources r1 = r4.getResources()     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1b org.xmlpull.v1.XmlPullParserException -> L1d
            android.content.res.Resources$Theme r3 = r4.getTheme()     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1b org.xmlpull.v1.XmlPullParserException -> L1d
            android.view.animation.Interpolator r4 = createInterpolatorFromXml(r4, r1, r3, r0)     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1b org.xmlpull.v1.XmlPullParserException -> L1d
            if (r0 == 0) goto L4e
            r0.close()
        L4e:
            return r4
        L4f:
            android.content.res.Resources$NotFoundException r1 = new android.content.res.Resources$NotFoundException     // Catch: java.lang.Throwable -> L19
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19
            r3.<init>()     // Catch: java.lang.Throwable -> L19
            r3.append(r2)     // Catch: java.lang.Throwable -> L19
            java.lang.String r5 = java.lang.Integer.toHexString(r5)     // Catch: java.lang.Throwable -> L19
            r3.append(r5)     // Catch: java.lang.Throwable -> L19
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L19
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L19
            r1.initCause(r4)     // Catch: java.lang.Throwable -> L19
            throw r1     // Catch: java.lang.Throwable -> L19
        L6b:
            android.content.res.Resources$NotFoundException r1 = new android.content.res.Resources$NotFoundException     // Catch: java.lang.Throwable -> L19
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19
            r3.<init>()     // Catch: java.lang.Throwable -> L19
            r3.append(r2)     // Catch: java.lang.Throwable -> L19
            java.lang.String r5 = java.lang.Integer.toHexString(r5)     // Catch: java.lang.Throwable -> L19
            r3.append(r5)     // Catch: java.lang.Throwable -> L19
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L19
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L19
            r1.initCause(r4)     // Catch: java.lang.Throwable -> L19
            throw r1     // Catch: java.lang.Throwable -> L19
        L87:
            if (r0 == 0) goto L8c
            r0.close()
        L8c:
            throw r4
    }
}
