package android.support.v4.content.res;

public final class ResourcesCompat {
    private static final java.lang.String TAG = "ResourcesCompat";

    public static abstract class FontCallback {



        public FontCallback() {
                r0 = this;
                r0.<init>()
                return
        }

        public final void callbackFailAsync(int r2, android.os.Handler r3) {
                r1 = this;
                if (r3 != 0) goto Lb
                android.os.Handler r3 = new android.os.Handler
                android.os.Looper r0 = android.os.Looper.getMainLooper()
                r3.<init>(r0)
            Lb:
                android.support.v4.content.res.ResourcesCompat$FontCallback$2 r0 = new android.support.v4.content.res.ResourcesCompat$FontCallback$2
                r0.<init>(r1, r2)
                r3.post(r0)
                return
        }

        public final void callbackSuccessAsync(android.graphics.Typeface r2, android.os.Handler r3) {
                r1 = this;
                if (r3 != 0) goto Lb
                android.os.Handler r3 = new android.os.Handler
                android.os.Looper r0 = android.os.Looper.getMainLooper()
                r3.<init>(r0)
            Lb:
                android.support.v4.content.res.ResourcesCompat$FontCallback$1 r0 = new android.support.v4.content.res.ResourcesCompat$FontCallback$1
                r0.<init>(r1, r2)
                r3.post(r0)
                return
        }

        public abstract void onFontRetrievalFailed(int r1);

        public abstract void onFontRetrieved(android.graphics.Typeface r1);
    }

    private ResourcesCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getColor(android.content.res.Resources r2, int r3, android.content.res.Resources.Theme r4) throws android.content.res.Resources.NotFoundException {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            int r2 = r2.getColor(r3, r4)
            return r2
        Lb:
            int r2 = r2.getColor(r3)
            return r2
    }

    public static android.content.res.ColorStateList getColorStateList(android.content.res.Resources r2, int r3, android.content.res.Resources.Theme r4) throws android.content.res.Resources.NotFoundException {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            android.content.res.ColorStateList r2 = r2.getColorStateList(r3, r4)
            return r2
        Lb:
            android.content.res.ColorStateList r2 = r2.getColorStateList(r3)
            return r2
    }

    public static android.graphics.drawable.Drawable getDrawable(android.content.res.Resources r2, int r3, android.content.res.Resources.Theme r4) throws android.content.res.Resources.NotFoundException {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.graphics.drawable.Drawable r2 = r2.getDrawable(r3, r4)
            return r2
        Lb:
            android.graphics.drawable.Drawable r2 = r2.getDrawable(r3)
            return r2
    }

    public static android.graphics.drawable.Drawable getDrawableForDensity(android.content.res.Resources r2, int r3, int r4, android.content.res.Resources.Theme r5) throws android.content.res.Resources.NotFoundException {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.graphics.drawable.Drawable r2 = r2.getDrawableForDensity(r3, r4, r5)
            return r2
        Lb:
            int r5 = android.os.Build.VERSION.SDK_INT
            r0 = 15
            if (r5 < r0) goto L16
            android.graphics.drawable.Drawable r2 = r2.getDrawableForDensity(r3, r4)
            return r2
        L16:
            android.graphics.drawable.Drawable r2 = r2.getDrawable(r3)
            return r2
    }

    public static android.graphics.Typeface getFont(android.content.Context r7, int r8) throws android.content.res.Resources.NotFoundException {
            boolean r0 = r7.isRestricted()
            if (r0 == 0) goto L8
            r7 = 0
            return r7
        L8:
            android.util.TypedValue r2 = new android.util.TypedValue
            r2.<init>()
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            android.graphics.Typeface r7 = loadFont(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static android.graphics.Typeface getFont(android.content.Context r7, int r8, android.util.TypedValue r9, int r10, android.support.v4.content.res.ResourcesCompat.FontCallback r11) throws android.content.res.Resources.NotFoundException {
            boolean r0 = r7.isRestricted()
            if (r0 == 0) goto L8
            r7 = 0
            return r7
        L8:
            r5 = 0
            r6 = 1
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            android.graphics.Typeface r7 = loadFont(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static void getFont(android.content.Context r7, int r8, android.support.v4.content.res.ResourcesCompat.FontCallback r9, android.os.Handler r10) throws android.content.res.Resources.NotFoundException {
            android.support.v4.util.Preconditions.checkNotNull(r9)
            boolean r0 = r7.isRestricted()
            if (r0 == 0) goto Le
            r7 = -4
            r9.callbackFailAsync(r7, r10)
            return
        Le:
            android.util.TypedValue r2 = new android.util.TypedValue
            r2.<init>()
            r3 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r4 = r9
            r5 = r10
            loadFont(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    private static android.graphics.Typeface loadFont(android.content.Context r8, int r9, android.util.TypedValue r10, int r11, android.support.v4.content.res.ResourcesCompat.FontCallback r12, android.os.Handler r13, boolean r14) {
            android.content.res.Resources r1 = r8.getResources()
            r0 = 1
            r1.getValue(r9, r10, r0)
            r0 = r8
            r2 = r10
            r3 = r9
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            android.graphics.Typeface r8 = loadFont(r0, r1, r2, r3, r4, r5, r6, r7)
            if (r8 != 0) goto L38
            if (r12 == 0) goto L18
            goto L38
        L18:
            android.content.res.Resources$NotFoundException r8 = new android.content.res.Resources$NotFoundException
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "Font resource ID #0x"
            r10.append(r11)
            java.lang.String r9 = java.lang.Integer.toHexString(r9)
            r10.append(r9)
            java.lang.String r9 = " could not be retrieved."
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            r8.<init>(r9)
            throw r8
        L38:
            return r8
    }

    private static android.graphics.Typeface loadFont(android.content.Context r15, android.content.res.Resources r16, android.util.TypedValue r17, int r18, int r19, android.support.v4.content.res.ResourcesCompat.FontCallback r20, android.os.Handler r21, boolean r22) {
            r0 = r16
            r1 = r17
            r4 = r18
            r5 = r19
            r9 = r20
            r10 = r21
            java.lang.String r11 = "ResourcesCompat"
            java.lang.CharSequence r2 = r1.string
            if (r2 == 0) goto La9
            java.lang.CharSequence r1 = r1.string
            java.lang.String r12 = r1.toString()
            java.lang.String r1 = "res/"
            boolean r1 = r12.startsWith(r1)
            r13 = 0
            r14 = -3
            if (r1 != 0) goto L28
            if (r9 == 0) goto L27
            r9.callbackFailAsync(r14, r10)
        L27:
            return r13
        L28:
            android.graphics.Typeface r1 = android.support.v4.graphics.TypefaceCompat.findFromCache(r0, r4, r5)
            if (r1 == 0) goto L34
            if (r9 == 0) goto L33
            r9.callbackSuccessAsync(r1, r10)
        L33:
            return r1
        L34:
            java.lang.String r1 = r12.toLowerCase()     // Catch: java.io.IOException -> L78 org.xmlpull.v1.XmlPullParserException -> L8e
            java.lang.String r2 = ".xml"
            boolean r1 = r1.endsWith(r2)     // Catch: java.io.IOException -> L78 org.xmlpull.v1.XmlPullParserException -> L8e
            if (r1 == 0) goto L67
            android.content.res.XmlResourceParser r1 = r0.getXml(r4)     // Catch: java.io.IOException -> L78 org.xmlpull.v1.XmlPullParserException -> L8e
            android.support.v4.content.res.FontResourcesParserCompat$FamilyResourceEntry r2 = android.support.v4.content.res.FontResourcesParserCompat.parse(r1, r0)     // Catch: java.io.IOException -> L78 org.xmlpull.v1.XmlPullParserException -> L8e
            if (r2 != 0) goto L55
            java.lang.String r0 = "Failed to find font-family tag"
            android.util.Log.e(r11, r0)     // Catch: java.io.IOException -> L78 org.xmlpull.v1.XmlPullParserException -> L8e
            if (r9 == 0) goto L54
            r9.callbackFailAsync(r14, r10)     // Catch: java.io.IOException -> L78 org.xmlpull.v1.XmlPullParserException -> L8e
        L54:
            return r13
        L55:
            r1 = r15
            r3 = r16
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r8 = r22
            android.graphics.Typeface r0 = android.support.v4.graphics.TypefaceCompat.createFromResourcesFamilyXml(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: java.io.IOException -> L78 org.xmlpull.v1.XmlPullParserException -> L8e
            return r0
        L67:
            r1 = r15
            android.graphics.Typeface r0 = android.support.v4.graphics.TypefaceCompat.createFromResourcesFontFile(r15, r0, r4, r12, r5)     // Catch: java.io.IOException -> L78 org.xmlpull.v1.XmlPullParserException -> L8e
            if (r9 == 0) goto L77
            if (r0 == 0) goto L74
            r9.callbackSuccessAsync(r0, r10)     // Catch: java.io.IOException -> L78 org.xmlpull.v1.XmlPullParserException -> L8e
            goto L77
        L74:
            r9.callbackFailAsync(r14, r10)     // Catch: java.io.IOException -> L78 org.xmlpull.v1.XmlPullParserException -> L8e
        L77:
            return r0
        L78:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Failed to read xml resource "
            r1.append(r2)
            r1.append(r12)
            java.lang.String r1 = r1.toString()
            android.util.Log.e(r11, r1, r0)
            goto La3
        L8e:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Failed to parse xml resource "
            r1.append(r2)
            r1.append(r12)
            java.lang.String r1 = r1.toString()
            android.util.Log.e(r11, r1, r0)
        La3:
            if (r9 == 0) goto La8
            r9.callbackFailAsync(r14, r10)
        La8:
            return r13
        La9:
            android.content.res.Resources$NotFoundException r2 = new android.content.res.Resources$NotFoundException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "Resource \""
            r3.append(r5)
            java.lang.String r0 = r0.getResourceName(r4)
            r3.append(r0)
            java.lang.String r0 = "\" ("
            r3.append(r0)
            java.lang.String r0 = java.lang.Integer.toHexString(r18)
            r3.append(r0)
            java.lang.String r0 = ") is not a Font: "
            r3.append(r0)
            r3.append(r1)
            java.lang.String r0 = r3.toString()
            r2.<init>(r0)
            throw r2
    }
}
