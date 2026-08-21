package android.support.design.resources;

public class TextAppearance {
    private static final java.lang.String TAG = "TextAppearance";
    private static final int TYPEFACE_MONOSPACE = 3;
    private static final int TYPEFACE_SANS = 1;
    private static final int TYPEFACE_SERIF = 2;
    private android.graphics.Typeface font;
    public final java.lang.String fontFamily;
    private final int fontFamilyResourceId;
    private boolean fontResolved;
    public final android.content.res.ColorStateList shadowColor;
    public final float shadowDx;
    public final float shadowDy;
    public final float shadowRadius;
    public final boolean textAllCaps;
    public final android.content.res.ColorStateList textColor;
    public final android.content.res.ColorStateList textColorHint;
    public final android.content.res.ColorStateList textColorLink;
    public final float textSize;
    public final int textStyle;
    public final int typeface;


    public TextAppearance(android.content.Context r5, int r6) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.fontResolved = r0
            int[] r1 = android.support.design.R.styleable.TextAppearance
            android.content.res.TypedArray r6 = r5.obtainStyledAttributes(r6, r1)
            int r1 = android.support.design.R.styleable.TextAppearance_android_textSize
            r2 = 0
            float r1 = r6.getDimension(r1, r2)
            r4.textSize = r1
            int r1 = android.support.design.R.styleable.TextAppearance_android_textColor
            android.content.res.ColorStateList r1 = android.support.design.resources.MaterialResources.getColorStateList(r5, r6, r1)
            r4.textColor = r1
            int r1 = android.support.design.R.styleable.TextAppearance_android_textColorHint
            android.content.res.ColorStateList r1 = android.support.design.resources.MaterialResources.getColorStateList(r5, r6, r1)
            r4.textColorHint = r1
            int r1 = android.support.design.R.styleable.TextAppearance_android_textColorLink
            android.content.res.ColorStateList r1 = android.support.design.resources.MaterialResources.getColorStateList(r5, r6, r1)
            r4.textColorLink = r1
            int r1 = android.support.design.R.styleable.TextAppearance_android_textStyle
            int r1 = r6.getInt(r1, r0)
            r4.textStyle = r1
            int r1 = android.support.design.R.styleable.TextAppearance_android_typeface
            r3 = 1
            int r1 = r6.getInt(r1, r3)
            r4.typeface = r1
            int r1 = android.support.design.R.styleable.TextAppearance_fontFamily
            int r3 = android.support.design.R.styleable.TextAppearance_android_fontFamily
            int r1 = android.support.design.resources.MaterialResources.getIndexWithValue(r6, r1, r3)
            int r3 = r6.getResourceId(r1, r0)
            r4.fontFamilyResourceId = r3
            java.lang.String r1 = r6.getString(r1)
            r4.fontFamily = r1
            int r1 = android.support.design.R.styleable.TextAppearance_textAllCaps
            boolean r0 = r6.getBoolean(r1, r0)
            r4.textAllCaps = r0
            int r0 = android.support.design.R.styleable.TextAppearance_android_shadowColor
            android.content.res.ColorStateList r5 = android.support.design.resources.MaterialResources.getColorStateList(r5, r6, r0)
            r4.shadowColor = r5
            int r5 = android.support.design.R.styleable.TextAppearance_android_shadowDx
            float r5 = r6.getFloat(r5, r2)
            r4.shadowDx = r5
            int r5 = android.support.design.R.styleable.TextAppearance_android_shadowDy
            float r5 = r6.getFloat(r5, r2)
            r4.shadowDy = r5
            int r5 = android.support.design.R.styleable.TextAppearance_android_shadowRadius
            float r5 = r6.getFloat(r5, r2)
            r4.shadowRadius = r5
            r6.recycle()
            return
    }

    static android.graphics.Typeface access$002(android.support.design.resources.TextAppearance r0, android.graphics.Typeface r1) {
            r0.font = r1
            return r1
    }

    static boolean access$102(android.support.design.resources.TextAppearance r0, boolean r1) {
            r0.fontResolved = r1
            return r1
    }

    static void access$200(android.support.design.resources.TextAppearance r0) {
            r0.createFallbackTypeface()
            return
    }

    private void createFallbackTypeface() {
            r2 = this;
            android.graphics.Typeface r0 = r2.font
            if (r0 != 0) goto Le
            java.lang.String r0 = r2.fontFamily
            int r1 = r2.textStyle
            android.graphics.Typeface r0 = android.graphics.Typeface.create(r0, r1)
            r2.font = r0
        Le:
            android.graphics.Typeface r0 = r2.font
            if (r0 != 0) goto L3c
            int r0 = r2.typeface
            r1 = 1
            if (r0 == r1) goto L2c
            r1 = 2
            if (r0 == r1) goto L27
            r1 = 3
            if (r0 == r1) goto L22
            android.graphics.Typeface r0 = android.graphics.Typeface.DEFAULT
            r2.font = r0
            goto L30
        L22:
            android.graphics.Typeface r0 = android.graphics.Typeface.MONOSPACE
            r2.font = r0
            goto L30
        L27:
            android.graphics.Typeface r0 = android.graphics.Typeface.SERIF
            r2.font = r0
            goto L30
        L2c:
            android.graphics.Typeface r0 = android.graphics.Typeface.SANS_SERIF
            r2.font = r0
        L30:
            android.graphics.Typeface r0 = r2.font
            if (r0 == 0) goto L3c
            int r1 = r2.textStyle
            android.graphics.Typeface r0 = android.graphics.Typeface.create(r0, r1)
            r2.font = r0
        L3c:
            return
    }

    public android.graphics.Typeface getFont(android.content.Context r3) {
            r2 = this;
            boolean r0 = r2.fontResolved
            if (r0 == 0) goto L7
            android.graphics.Typeface r3 = r2.font
            return r3
        L7:
            boolean r0 = r3.isRestricted()
            if (r0 != 0) goto L39
            int r0 = r2.fontFamilyResourceId     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L39
            android.graphics.Typeface r3 = android.support.v4.content.res.ResourcesCompat.getFont(r3, r0)     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L39
            r2.font = r3     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L39
            if (r3 == 0) goto L39
            int r0 = r2.textStyle     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L39
            android.graphics.Typeface r3 = android.graphics.Typeface.create(r3, r0)     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L39
            r2.font = r3     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L39
            goto L39
        L20:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Error loading font "
            r0.append(r1)
            java.lang.String r1 = r2.fontFamily
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "TextAppearance"
            android.util.Log.d(r1, r0, r3)
        L39:
            r2.createFallbackTypeface()
            r3 = 1
            r2.fontResolved = r3
            android.graphics.Typeface r3 = r2.font
            return r3
    }

    public void getFontAsync(android.content.Context r3, android.text.TextPaint r4, android.support.v4.content.res.ResourcesCompat.FontCallback r5) {
            r2 = this;
            boolean r0 = r2.fontResolved
            if (r0 == 0) goto La
            android.graphics.Typeface r3 = r2.font
            r2.updateTextPaintMeasureState(r4, r3)
            return
        La:
            r2.createFallbackTypeface()
            boolean r0 = r3.isRestricted()
            if (r0 == 0) goto L1c
            r3 = 1
            r2.fontResolved = r3
            android.graphics.Typeface r3 = r2.font
            r2.updateTextPaintMeasureState(r4, r3)
            return
        L1c:
            int r0 = r2.fontFamilyResourceId     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L41
            android.support.design.resources.TextAppearance$1 r1 = new android.support.design.resources.TextAppearance$1     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L41
            r1.<init>(r2, r4, r5)     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L41
            r4 = 0
            android.support.v4.content.res.ResourcesCompat.getFont(r3, r0, r1, r4)     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L41
            goto L41
        L28:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Error loading font "
            r4.append(r5)
            java.lang.String r5 = r2.fontFamily
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "TextAppearance"
            android.util.Log.d(r5, r4, r3)
        L41:
            return
    }

    public void updateDrawState(android.content.Context r5, android.text.TextPaint r6, android.support.v4.content.res.ResourcesCompat.FontCallback r7) {
            r4 = this;
            r4.updateMeasureState(r5, r6, r7)
            android.content.res.ColorStateList r5 = r4.textColor
            if (r5 == 0) goto L14
            int[] r7 = r6.drawableState
            android.content.res.ColorStateList r0 = r4.textColor
            int r0 = r0.getDefaultColor()
            int r5 = r5.getColorForState(r7, r0)
            goto L16
        L14:
            r5 = -16777216(0xffffffffff000000, float:-1.7014118E38)
        L16:
            r6.setColor(r5)
            float r5 = r4.shadowRadius
            float r7 = r4.shadowDx
            float r0 = r4.shadowDy
            android.content.res.ColorStateList r1 = r4.shadowColor
            if (r1 == 0) goto L30
            int[] r2 = r6.drawableState
            android.content.res.ColorStateList r3 = r4.shadowColor
            int r3 = r3.getDefaultColor()
            int r1 = r1.getColorForState(r2, r3)
            goto L31
        L30:
            r1 = 0
        L31:
            r6.setShadowLayer(r5, r7, r0, r1)
            return
    }

    public void updateMeasureState(android.content.Context r2, android.text.TextPaint r3, android.support.v4.content.res.ResourcesCompat.FontCallback r4) {
            r1 = this;
            boolean r0 = android.support.design.resources.TextAppearanceConfig.shouldLoadFontSynchronously()
            if (r0 == 0) goto Le
            android.graphics.Typeface r2 = r1.getFont(r2)
            r1.updateTextPaintMeasureState(r3, r2)
            goto L1a
        Le:
            r1.getFontAsync(r2, r3, r4)
            boolean r2 = r1.fontResolved
            if (r2 != 0) goto L1a
            android.graphics.Typeface r2 = r1.font
            r1.updateTextPaintMeasureState(r3, r2)
        L1a:
            return
    }

    public void updateTextPaintMeasureState(android.text.TextPaint r2, android.graphics.Typeface r3) {
            r1 = this;
            r2.setTypeface(r3)
            int r0 = r1.textStyle
            int r3 = r3.getStyle()
            int r3 = ~r3
            r3 = r3 & r0
            r0 = r3 & 1
            if (r0 == 0) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            r2.setFakeBoldText(r0)
            r3 = r3 & 2
            if (r3 == 0) goto L1c
            r3 = -1098907648(0xffffffffbe800000, float:-0.25)
            goto L1d
        L1c:
            r3 = 0
        L1d:
            r2.setTextSkewX(r3)
            float r3 = r1.textSize
            r2.setTextSize(r3)
            return
    }
}
