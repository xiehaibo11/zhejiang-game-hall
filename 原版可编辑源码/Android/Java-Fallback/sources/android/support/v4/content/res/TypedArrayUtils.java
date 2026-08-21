package android.support.v4.content.res;

public class TypedArrayUtils {
    private static final java.lang.String NAMESPACE = "http://schemas.android.com/apk/res/android";

    private TypedArrayUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getAttr(android.content.Context r2, int r3, int r4) {
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            android.content.res.Resources$Theme r2 = r2.getTheme()
            r1 = 1
            r2.resolveAttribute(r3, r0, r1)
            int r2 = r0.resourceId
            if (r2 == 0) goto L12
            return r3
        L12:
            return r4
    }

    public static boolean getBoolean(android.content.res.TypedArray r0, int r1, int r2, boolean r3) {
            boolean r2 = r0.getBoolean(r2, r3)
            boolean r0 = r0.getBoolean(r1, r2)
            return r0
    }

    public static android.graphics.drawable.Drawable getDrawable(android.content.res.TypedArray r0, int r1, int r2) {
            android.graphics.drawable.Drawable r1 = r0.getDrawable(r1)
            if (r1 != 0) goto La
            android.graphics.drawable.Drawable r1 = r0.getDrawable(r2)
        La:
            return r1
    }

    public static int getInt(android.content.res.TypedArray r0, int r1, int r2, int r3) {
            int r2 = r0.getInt(r2, r3)
            int r0 = r0.getInt(r1, r2)
            return r0
    }

    public static boolean getNamedBoolean(android.content.res.TypedArray r0, org.xmlpull.v1.XmlPullParser r1, java.lang.String r2, int r3, boolean r4) {
            boolean r1 = hasAttribute(r1, r2)
            if (r1 != 0) goto L7
            return r4
        L7:
            boolean r0 = r0.getBoolean(r3, r4)
            return r0
    }

    public static int getNamedColor(android.content.res.TypedArray r0, org.xmlpull.v1.XmlPullParser r1, java.lang.String r2, int r3, int r4) {
            boolean r1 = hasAttribute(r1, r2)
            if (r1 != 0) goto L7
            return r4
        L7:
            int r0 = r0.getColor(r3, r4)
            return r0
    }

    public static android.support.v4.content.res.ComplexColorCompat getNamedComplexColor(android.content.res.TypedArray r1, org.xmlpull.v1.XmlPullParser r2, android.content.res.Resources.Theme r3, java.lang.String r4, int r5, int r6) {
            boolean r2 = hasAttribute(r2, r4)
            if (r2 == 0) goto L31
            android.util.TypedValue r2 = new android.util.TypedValue
            r2.<init>()
            r1.getValue(r5, r2)
            int r4 = r2.type
            r0 = 28
            if (r4 < r0) goto L21
            int r4 = r2.type
            r0 = 31
            if (r4 > r0) goto L21
            int r1 = r2.data
            android.support.v4.content.res.ComplexColorCompat r1 = android.support.v4.content.res.ComplexColorCompat.from(r1)
            return r1
        L21:
            android.content.res.Resources r2 = r1.getResources()
            r4 = 0
            int r1 = r1.getResourceId(r5, r4)
            android.support.v4.content.res.ComplexColorCompat r1 = android.support.v4.content.res.ComplexColorCompat.inflate(r2, r1, r3)
            if (r1 == 0) goto L31
            return r1
        L31:
            android.support.v4.content.res.ComplexColorCompat r1 = android.support.v4.content.res.ComplexColorCompat.from(r6)
            return r1
    }

    public static float getNamedFloat(android.content.res.TypedArray r0, org.xmlpull.v1.XmlPullParser r1, java.lang.String r2, int r3, float r4) {
            boolean r1 = hasAttribute(r1, r2)
            if (r1 != 0) goto L7
            return r4
        L7:
            float r0 = r0.getFloat(r3, r4)
            return r0
    }

    public static int getNamedInt(android.content.res.TypedArray r0, org.xmlpull.v1.XmlPullParser r1, java.lang.String r2, int r3, int r4) {
            boolean r1 = hasAttribute(r1, r2)
            if (r1 != 0) goto L7
            return r4
        L7:
            int r0 = r0.getInt(r3, r4)
            return r0
    }

    public static int getNamedResourceId(android.content.res.TypedArray r0, org.xmlpull.v1.XmlPullParser r1, java.lang.String r2, int r3, int r4) {
            boolean r1 = hasAttribute(r1, r2)
            if (r1 != 0) goto L7
            return r4
        L7:
            int r0 = r0.getResourceId(r3, r4)
            return r0
    }

    public static java.lang.String getNamedString(android.content.res.TypedArray r0, org.xmlpull.v1.XmlPullParser r1, java.lang.String r2, int r3) {
            boolean r1 = hasAttribute(r1, r2)
            if (r1 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.String r0 = r0.getString(r3)
            return r0
    }

    public static int getResourceId(android.content.res.TypedArray r0, int r1, int r2, int r3) {
            int r2 = r0.getResourceId(r2, r3)
            int r0 = r0.getResourceId(r1, r2)
            return r0
    }

    public static java.lang.String getString(android.content.res.TypedArray r0, int r1, int r2) {
            java.lang.String r1 = r0.getString(r1)
            if (r1 != 0) goto La
            java.lang.String r1 = r0.getString(r2)
        La:
            return r1
    }

    public static java.lang.CharSequence getText(android.content.res.TypedArray r0, int r1, int r2) {
            java.lang.CharSequence r1 = r0.getText(r1)
            if (r1 != 0) goto La
            java.lang.CharSequence r1 = r0.getText(r2)
        La:
            return r1
    }

    public static java.lang.CharSequence[] getTextArray(android.content.res.TypedArray r0, int r1, int r2) {
            java.lang.CharSequence[] r1 = r0.getTextArray(r1)
            if (r1 != 0) goto La
            java.lang.CharSequence[] r1 = r0.getTextArray(r2)
        La:
            return r1
    }

    public static boolean hasAttribute(org.xmlpull.v1.XmlPullParser r1, java.lang.String r2) {
            java.lang.String r0 = "http://schemas.android.com/apk/res/android"
            java.lang.String r1 = r1.getAttributeValue(r0, r2)
            if (r1 == 0) goto La
            r1 = 1
            goto Lb
        La:
            r1 = 0
        Lb:
            return r1
    }

    public static android.content.res.TypedArray obtainAttributes(android.content.res.Resources r0, android.content.res.Resources.Theme r1, android.util.AttributeSet r2, int[] r3) {
            if (r1 != 0) goto L7
            android.content.res.TypedArray r0 = r0.obtainAttributes(r2, r3)
            return r0
        L7:
            r0 = 0
            android.content.res.TypedArray r0 = r1.obtainStyledAttributes(r2, r3, r0, r0)
            return r0
    }

    public static android.util.TypedValue peekNamedValue(android.content.res.TypedArray r0, org.xmlpull.v1.XmlPullParser r1, java.lang.String r2, int r3) {
            boolean r1 = hasAttribute(r1, r2)
            if (r1 != 0) goto L8
            r0 = 0
            return r0
        L8:
            android.util.TypedValue r0 = r0.peekValue(r3)
            return r0
    }
}
