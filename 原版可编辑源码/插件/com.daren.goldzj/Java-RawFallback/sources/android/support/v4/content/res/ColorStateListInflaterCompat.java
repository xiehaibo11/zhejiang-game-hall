package android.support.v4.content.res;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public final class ColorStateListInflaterCompat {
    private static final int DEFAULT_COLOR = -65536;

    private ColorStateListInflaterCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @android.support.annotation.NonNull
    public static android.content.res.ColorStateList createFromXml(@android.support.annotation.NonNull android.content.res.Resources r4, @android.support.annotation.NonNull org.xmlpull.v1.XmlPullParser r5, @android.support.annotation.Nullable android.content.res.Resources.Theme r6) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            android.util.AttributeSet r0 = android.util.Xml.asAttributeSet(r5)
        L4:
            int r1 = r5.next()
            r2 = 2
            if (r1 == r2) goto Lf
            r3 = 1
            if (r1 == r3) goto Lf
            goto L4
        Lf:
            if (r1 != r2) goto L16
            android.content.res.ColorStateList r4 = createFromXmlInner(r4, r5, r0, r6)
            return r4
        L16:
            org.xmlpull.v1.XmlPullParserException r4 = new org.xmlpull.v1.XmlPullParserException
            java.lang.String r5 = "No start tag found"
            r4.<init>(r5)
            throw r4
    }

    @android.support.annotation.NonNull
    public static android.content.res.ColorStateList createFromXmlInner(@android.support.annotation.NonNull android.content.res.Resources r2, @android.support.annotation.NonNull org.xmlpull.v1.XmlPullParser r3, @android.support.annotation.NonNull android.util.AttributeSet r4, @android.support.annotation.Nullable android.content.res.Resources.Theme r5) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            java.lang.String r0 = r3.getName()
            java.lang.String r1 = "selector"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L11
            android.content.res.ColorStateList r2 = inflate(r2, r3, r4, r5)
            return r2
        L11:
            org.xmlpull.v1.XmlPullParserException r2 = new org.xmlpull.v1.XmlPullParserException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r3 = r3.getPositionDescription()
            r4.append(r3)
            java.lang.String r3 = ": invalid color state list tag "
            r4.append(r3)
            r4.append(r0)
            java.lang.String r3 = r4.toString()
            r2.<init>(r3)
            throw r2
    }

    private static android.content.res.ColorStateList inflate(@android.support.annotation.NonNull android.content.res.Resources r17, @android.support.annotation.NonNull org.xmlpull.v1.XmlPullParser r18, @android.support.annotation.NonNull android.util.AttributeSet r19, @android.support.annotation.Nullable android.content.res.Resources.Theme r20) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r0 = r19
            int r1 = r18.getDepth()
            r2 = 1
            int r1 = r1 + r2
            r3 = 20
            int[][] r3 = new int[r3][]
            int r4 = r3.length
            int[] r4 = new int[r4]
            r5 = 0
            r6 = 0
        L11:
            int r7 = r18.next()
            if (r7 == r2) goto Lb5
            int r8 = r18.getDepth()
            if (r8 >= r1) goto L20
            r9 = 3
            if (r7 == r9) goto Lb5
        L20:
            r9 = 2
            if (r7 != r9) goto Lae
            if (r8 > r1) goto Lae
            java.lang.String r7 = r18.getName()
            java.lang.String r8 = "item"
            boolean r7 = r7.equals(r8)
            if (r7 != 0) goto L33
            goto Lae
        L33:
            int[] r7 = android.support.compat.R.styleable.ColorStateListItem
            r8 = r17
            r9 = r20
            android.content.res.TypedArray r7 = obtainAttributes(r8, r9, r0, r7)
            int r10 = android.support.compat.R.styleable.ColorStateListItem_android_color
            r11 = -65281(0xffffffffffff00ff, float:NaN)
            int r10 = r7.getColor(r10, r11)
            r11 = 1065353216(0x3f800000, float:1.0)
            int r12 = android.support.compat.R.styleable.ColorStateListItem_android_alpha
            boolean r12 = r7.hasValue(r12)
            if (r12 == 0) goto L57
            int r12 = android.support.compat.R.styleable.ColorStateListItem_android_alpha
            float r11 = r7.getFloat(r12, r11)
            goto L65
        L57:
            int r12 = android.support.compat.R.styleable.ColorStateListItem_alpha
            boolean r12 = r7.hasValue(r12)
            if (r12 == 0) goto L65
            int r12 = android.support.compat.R.styleable.ColorStateListItem_alpha
            float r11 = r7.getFloat(r12, r11)
        L65:
            r7.recycle()
            int r7 = r19.getAttributeCount()
            int[] r12 = new int[r7]
            r13 = 0
            r14 = 0
        L70:
            if (r13 >= r7) goto L95
            int r15 = r0.getAttributeNameResource(r13)
            r2 = 16843173(0x10101a5, float:2.3694738E-38)
            if (r15 == r2) goto L91
            r2 = 16843551(0x101031f, float:2.3695797E-38)
            if (r15 == r2) goto L91
            int r2 = android.support.compat.R.attr.alpha
            if (r15 == r2) goto L91
            int r2 = r14 + 1
            boolean r16 = r0.getAttributeBooleanValue(r13, r5)
            if (r16 == 0) goto L8d
            goto L8e
        L8d:
            int r15 = -r15
        L8e:
            r12[r14] = r15
            r14 = r2
        L91:
            int r13 = r13 + 1
            r2 = 1
            goto L70
        L95:
            int[] r2 = android.util.StateSet.trimStateSet(r12, r14)
            int r7 = modulateColorAlpha(r10, r11)
            if (r6 == 0) goto La0
            int r10 = r2.length
        La0:
            int[] r4 = android.support.v4.content.res.GrowingArrayUtils.append(r4, r6, r7)
            java.lang.Object[] r2 = android.support.v4.content.res.GrowingArrayUtils.append(r3, r6, r2)
            r3 = r2
            int[][] r3 = (int[][]) r3
            int r6 = r6 + 1
            goto Lb2
        Lae:
            r8 = r17
            r9 = r20
        Lb2:
            r2 = 1
            goto L11
        Lb5:
            int[] r0 = new int[r6]
            int[][] r1 = new int[r6][]
            java.lang.System.arraycopy(r4, r5, r0, r5, r6)
            java.lang.System.arraycopy(r3, r5, r1, r5, r6)
            android.content.res.ColorStateList r2 = new android.content.res.ColorStateList
            r2.<init>(r1, r0)
            return r2
    }

    @android.support.annotation.ColorInt
    private static int modulateColorAlpha(@android.support.annotation.ColorInt int r1, @android.support.annotation.FloatRange(from = 0.0d, to = 1.0d) float r2) {
            int r0 = android.graphics.Color.alpha(r1)
            float r0 = (float) r0
            float r0 = r0 * r2
            int r2 = java.lang.Math.round(r0)
            r0 = 16777215(0xffffff, float:2.3509886E-38)
            r1 = r1 & r0
            int r2 = r2 << 24
            r1 = r1 | r2
            return r1
    }

    private static android.content.res.TypedArray obtainAttributes(android.content.res.Resources r0, android.content.res.Resources.Theme r1, android.util.AttributeSet r2, int[] r3) {
            if (r1 != 0) goto L7
            android.content.res.TypedArray r0 = r0.obtainAttributes(r2, r3)
            goto Lc
        L7:
            r0 = 0
            android.content.res.TypedArray r0 = r1.obtainStyledAttributes(r2, r3, r0, r0)
        Lc:
            return r0
    }
}
