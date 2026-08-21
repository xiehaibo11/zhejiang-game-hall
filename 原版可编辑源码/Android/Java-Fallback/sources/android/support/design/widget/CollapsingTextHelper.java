package android.support.design.widget;

public final class CollapsingTextHelper {
    private static final boolean DEBUG_DRAW = false;
    private static final android.graphics.Paint DEBUG_DRAW_PAINT = null;
    private static final boolean USE_SCALING_TEXTURE = false;
    private boolean boundsChanged;
    private final android.graphics.Rect collapsedBounds;
    private float collapsedDrawX;
    private float collapsedDrawY;
    private int collapsedShadowColor;
    private float collapsedShadowDx;
    private float collapsedShadowDy;
    private float collapsedShadowRadius;
    private android.content.res.ColorStateList collapsedTextColor;
    private int collapsedTextGravity;
    private float collapsedTextSize;
    private android.graphics.Typeface collapsedTypeface;
    private final android.graphics.RectF currentBounds;
    private float currentDrawX;
    private float currentDrawY;
    private float currentTextSize;
    private android.graphics.Typeface currentTypeface;
    private boolean drawTitle;
    private final android.graphics.Rect expandedBounds;
    private float expandedDrawX;
    private float expandedDrawY;
    private float expandedFraction;
    private int expandedShadowColor;
    private float expandedShadowDx;
    private float expandedShadowDy;
    private float expandedShadowRadius;
    private android.content.res.ColorStateList expandedTextColor;
    private int expandedTextGravity;
    private float expandedTextSize;
    private android.graphics.Bitmap expandedTitleTexture;
    private android.graphics.Typeface expandedTypeface;
    private boolean isRtl;
    private android.animation.TimeInterpolator positionInterpolator;
    private float scale;
    private int[] state;
    private java.lang.CharSequence text;
    private final android.text.TextPaint textPaint;
    private android.animation.TimeInterpolator textSizeInterpolator;
    private java.lang.CharSequence textToDraw;
    private float textureAscent;
    private float textureDescent;
    private android.graphics.Paint texturePaint;
    private final android.text.TextPaint tmpPaint;
    private boolean useTexture;
    private final android.view.View view;

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 18
            if (r0 >= r2) goto L9
            r0 = r1
            goto La
        L9:
            r0 = 0
        La:
            android.support.design.widget.CollapsingTextHelper.USE_SCALING_TEXTURE = r0
            r0 = 0
            android.support.design.widget.CollapsingTextHelper.DEBUG_DRAW_PAINT = r0
            if (r0 == 0) goto L1c
            r0.setAntiAlias(r1)
            android.graphics.Paint r0 = android.support.design.widget.CollapsingTextHelper.DEBUG_DRAW_PAINT
            r1 = -65281(0xffffffffffff00ff, float:NaN)
            r0.setColor(r1)
        L1c:
            return
    }

    public CollapsingTextHelper(android.view.View r2) {
            r1 = this;
            r1.<init>()
            r0 = 16
            r1.expandedTextGravity = r0
            r1.collapsedTextGravity = r0
            r0 = 1097859072(0x41700000, float:15.0)
            r1.expandedTextSize = r0
            r1.collapsedTextSize = r0
            r1.view = r2
            android.text.TextPaint r2 = new android.text.TextPaint
            r0 = 129(0x81, float:1.81E-43)
            r2.<init>(r0)
            r1.textPaint = r2
            android.text.TextPaint r2 = new android.text.TextPaint
            android.text.TextPaint r0 = r1.textPaint
            r2.<init>(r0)
            r1.tmpPaint = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r1.collapsedBounds = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r1.expandedBounds = r2
            android.graphics.RectF r2 = new android.graphics.RectF
            r2.<init>()
            r1.currentBounds = r2
            return
    }

    private static int blendColors(int r5, int r6, float r7) {
            r0 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 - r7
            int r1 = android.graphics.Color.alpha(r5)
            float r1 = (float) r1
            float r1 = r1 * r0
            int r2 = android.graphics.Color.alpha(r6)
            float r2 = (float) r2
            float r2 = r2 * r7
            float r1 = r1 + r2
            int r2 = android.graphics.Color.red(r5)
            float r2 = (float) r2
            float r2 = r2 * r0
            int r3 = android.graphics.Color.red(r6)
            float r3 = (float) r3
            float r3 = r3 * r7
            float r2 = r2 + r3
            int r3 = android.graphics.Color.green(r5)
            float r3 = (float) r3
            float r3 = r3 * r0
            int r4 = android.graphics.Color.green(r6)
            float r4 = (float) r4
            float r4 = r4 * r7
            float r3 = r3 + r4
            int r5 = android.graphics.Color.blue(r5)
            float r5 = (float) r5
            float r5 = r5 * r0
            int r6 = android.graphics.Color.blue(r6)
            float r6 = (float) r6
            float r6 = r6 * r7
            float r5 = r5 + r6
            int r6 = (int) r1
            int r7 = (int) r2
            int r0 = (int) r3
            int r5 = (int) r5
            int r5 = android.graphics.Color.argb(r6, r7, r0, r5)
            return r5
    }

    private void calculateBaseOffsets() {
            r11 = this;
            float r0 = r11.currentTextSize
            float r1 = r11.collapsedTextSize
            r11.calculateUsingTextSize(r1)
            java.lang.CharSequence r1 = r11.textToDraw
            r2 = 0
            r3 = 0
            if (r1 == 0) goto L18
            android.text.TextPaint r4 = r11.textPaint
            int r5 = r1.length()
            float r1 = r4.measureText(r1, r2, r5)
            goto L19
        L18:
            r1 = r3
        L19:
            int r4 = r11.collapsedTextGravity
            boolean r5 = r11.isRtl
            int r4 = android.support.v4.view.GravityCompat.getAbsoluteGravity(r4, r5)
            r5 = r4 & 112(0x70, float:1.57E-43)
            r6 = 80
            r7 = 48
            r8 = 1073741824(0x40000000, float:2.0)
            if (r5 == r7) goto L55
            if (r5 == r6) goto L4d
            android.text.TextPaint r5 = r11.textPaint
            float r5 = r5.descent()
            android.text.TextPaint r9 = r11.textPaint
            float r9 = r9.ascent()
            float r5 = r5 - r9
            float r5 = r5 / r8
            android.text.TextPaint r9 = r11.textPaint
            float r9 = r9.descent()
            float r5 = r5 - r9
            android.graphics.Rect r9 = r11.collapsedBounds
            int r9 = r9.centerY()
            float r9 = (float) r9
            float r9 = r9 + r5
            r11.collapsedDrawY = r9
            goto L63
        L4d:
            android.graphics.Rect r5 = r11.collapsedBounds
            int r5 = r5.bottom
            float r5 = (float) r5
            r11.collapsedDrawY = r5
            goto L63
        L55:
            android.graphics.Rect r5 = r11.collapsedBounds
            int r5 = r5.top
            float r5 = (float) r5
            android.text.TextPaint r9 = r11.textPaint
            float r9 = r9.ascent()
            float r5 = r5 - r9
            r11.collapsedDrawY = r5
        L63:
            r5 = 8388615(0x800007, float:1.1754953E-38)
            r4 = r4 & r5
            r9 = 5
            r10 = 1
            if (r4 == r10) goto L7e
            if (r4 == r9) goto L75
            android.graphics.Rect r1 = r11.collapsedBounds
            int r1 = r1.left
            float r1 = (float) r1
            r11.collapsedDrawX = r1
            goto L89
        L75:
            android.graphics.Rect r4 = r11.collapsedBounds
            int r4 = r4.right
            float r4 = (float) r4
            float r4 = r4 - r1
            r11.collapsedDrawX = r4
            goto L89
        L7e:
            android.graphics.Rect r4 = r11.collapsedBounds
            int r4 = r4.centerX()
            float r4 = (float) r4
            float r1 = r1 / r8
            float r4 = r4 - r1
            r11.collapsedDrawX = r4
        L89:
            float r1 = r11.expandedTextSize
            r11.calculateUsingTextSize(r1)
            java.lang.CharSequence r1 = r11.textToDraw
            if (r1 == 0) goto L9c
            android.text.TextPaint r3 = r11.textPaint
            int r4 = r1.length()
            float r3 = r3.measureText(r1, r2, r4)
        L9c:
            int r1 = r11.expandedTextGravity
            boolean r2 = r11.isRtl
            int r1 = android.support.v4.view.GravityCompat.getAbsoluteGravity(r1, r2)
            r2 = r1 & 112(0x70, float:1.57E-43)
            if (r2 == r7) goto Ld2
            if (r2 == r6) goto Lca
            android.text.TextPaint r2 = r11.textPaint
            float r2 = r2.descent()
            android.text.TextPaint r4 = r11.textPaint
            float r4 = r4.ascent()
            float r2 = r2 - r4
            float r2 = r2 / r8
            android.text.TextPaint r4 = r11.textPaint
            float r4 = r4.descent()
            float r2 = r2 - r4
            android.graphics.Rect r4 = r11.expandedBounds
            int r4 = r4.centerY()
            float r4 = (float) r4
            float r4 = r4 + r2
            r11.expandedDrawY = r4
            goto Le0
        Lca:
            android.graphics.Rect r2 = r11.expandedBounds
            int r2 = r2.bottom
            float r2 = (float) r2
            r11.expandedDrawY = r2
            goto Le0
        Ld2:
            android.graphics.Rect r2 = r11.expandedBounds
            int r2 = r2.top
            float r2 = (float) r2
            android.text.TextPaint r4 = r11.textPaint
            float r4 = r4.ascent()
            float r2 = r2 - r4
            r11.expandedDrawY = r2
        Le0:
            r1 = r1 & r5
            if (r1 == r10) goto Lf6
            if (r1 == r9) goto Led
            android.graphics.Rect r1 = r11.expandedBounds
            int r1 = r1.left
            float r1 = (float) r1
            r11.expandedDrawX = r1
            goto L101
        Led:
            android.graphics.Rect r1 = r11.expandedBounds
            int r1 = r1.right
            float r1 = (float) r1
            float r1 = r1 - r3
            r11.expandedDrawX = r1
            goto L101
        Lf6:
            android.graphics.Rect r1 = r11.expandedBounds
            int r1 = r1.centerX()
            float r1 = (float) r1
            float r3 = r3 / r8
            float r1 = r1 - r3
            r11.expandedDrawX = r1
        L101:
            r11.clearTexture()
            r11.setInterpolatedTextSize(r0)
            return
    }

    private void calculateCurrentOffsets() {
            r1 = this;
            float r0 = r1.expandedFraction
            r1.calculateOffsets(r0)
            return
    }

    private boolean calculateIsRtl(java.lang.CharSequence r4) {
            r3 = this;
            android.view.View r0 = r3.view
            int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r0)
            r1 = 0
            r2 = 1
            if (r0 != r2) goto Lb
            goto Lc
        Lb:
            r2 = r1
        Lc:
            if (r2 == 0) goto L11
            android.support.v4.text.TextDirectionHeuristicCompat r0 = android.support.v4.text.TextDirectionHeuristicsCompat.FIRSTSTRONG_RTL
            goto L13
        L11:
            android.support.v4.text.TextDirectionHeuristicCompat r0 = android.support.v4.text.TextDirectionHeuristicsCompat.FIRSTSTRONG_LTR
        L13:
            int r2 = r4.length()
            boolean r4 = r0.isRtl(r4, r1, r2)
            return r4
    }

    private void calculateOffsets(float r7) {
            r6 = this;
            r6.interpolateBounds(r7)
            float r0 = r6.expandedDrawX
            float r1 = r6.collapsedDrawX
            android.animation.TimeInterpolator r2 = r6.positionInterpolator
            float r0 = lerp(r0, r1, r7, r2)
            r6.currentDrawX = r0
            float r0 = r6.expandedDrawY
            float r1 = r6.collapsedDrawY
            android.animation.TimeInterpolator r2 = r6.positionInterpolator
            float r0 = lerp(r0, r1, r7, r2)
            r6.currentDrawY = r0
            float r0 = r6.expandedTextSize
            float r1 = r6.collapsedTextSize
            android.animation.TimeInterpolator r2 = r6.textSizeInterpolator
            float r0 = lerp(r0, r1, r7, r2)
            r6.setInterpolatedTextSize(r0)
            android.content.res.ColorStateList r0 = r6.collapsedTextColor
            android.content.res.ColorStateList r1 = r6.expandedTextColor
            if (r0 == r1) goto L40
            android.text.TextPaint r0 = r6.textPaint
            int r1 = r6.getCurrentExpandedTextColor()
            int r2 = r6.getCurrentCollapsedTextColor()
            int r1 = blendColors(r1, r2, r7)
            r0.setColor(r1)
            goto L49
        L40:
            android.text.TextPaint r0 = r6.textPaint
            int r1 = r6.getCurrentCollapsedTextColor()
            r0.setColor(r1)
        L49:
            android.text.TextPaint r0 = r6.textPaint
            float r1 = r6.expandedShadowRadius
            float r2 = r6.collapsedShadowRadius
            r3 = 0
            float r1 = lerp(r1, r2, r7, r3)
            float r2 = r6.expandedShadowDx
            float r4 = r6.collapsedShadowDx
            float r2 = lerp(r2, r4, r7, r3)
            float r4 = r6.expandedShadowDy
            float r5 = r6.collapsedShadowDy
            float r3 = lerp(r4, r5, r7, r3)
            int r4 = r6.expandedShadowColor
            int r5 = r6.collapsedShadowColor
            int r7 = blendColors(r4, r5, r7)
            r0.setShadowLayer(r1, r2, r3, r7)
            android.view.View r7 = r6.view
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r7)
            return
    }

    private void calculateUsingTextSize(float r9) {
            r8 = this;
            java.lang.CharSequence r0 = r8.text
            if (r0 != 0) goto L5
            return
        L5:
            android.graphics.Rect r0 = r8.collapsedBounds
            int r0 = r0.width()
            float r0 = (float) r0
            android.graphics.Rect r1 = r8.expandedBounds
            int r1 = r1.width()
            float r1 = (float) r1
            float r2 = r8.collapsedTextSize
            boolean r2 = isClose(r9, r2)
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = 1
            r5 = 0
            if (r2 == 0) goto L2f
            float r9 = r8.collapsedTextSize
            r8.scale = r3
            android.graphics.Typeface r1 = r8.currentTypeface
            android.graphics.Typeface r2 = r8.collapsedTypeface
            if (r1 == r2) goto L2d
            r8.currentTypeface = r2
            r1 = r4
            goto L60
        L2d:
            r1 = r5
            goto L60
        L2f:
            float r2 = r8.expandedTextSize
            android.graphics.Typeface r6 = r8.currentTypeface
            android.graphics.Typeface r7 = r8.expandedTypeface
            if (r6 == r7) goto L3b
            r8.currentTypeface = r7
            r6 = r4
            goto L3c
        L3b:
            r6 = r5
        L3c:
            float r7 = r8.expandedTextSize
            boolean r7 = isClose(r9, r7)
            if (r7 == 0) goto L47
            r8.scale = r3
            goto L4c
        L47:
            float r7 = r8.expandedTextSize
            float r9 = r9 / r7
            r8.scale = r9
        L4c:
            float r9 = r8.collapsedTextSize
            float r7 = r8.expandedTextSize
            float r9 = r9 / r7
            float r7 = r1 * r9
            int r7 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r7 <= 0) goto L5d
            float r0 = r0 / r9
            float r0 = java.lang.Math.min(r0, r1)
            goto L5e
        L5d:
            r0 = r1
        L5e:
            r9 = r2
            r1 = r6
        L60:
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L79
            float r2 = r8.currentTextSize
            int r2 = (r2 > r9 ? 1 : (r2 == r9 ? 0 : -1))
            if (r2 != 0) goto L74
            boolean r2 = r8.boundsChanged
            if (r2 != 0) goto L74
            if (r1 == 0) goto L72
            goto L74
        L72:
            r1 = r5
            goto L75
        L74:
            r1 = r4
        L75:
            r8.currentTextSize = r9
            r8.boundsChanged = r5
        L79:
            java.lang.CharSequence r9 = r8.textToDraw
            if (r9 == 0) goto L7f
            if (r1 == 0) goto Lb4
        L7f:
            android.text.TextPaint r9 = r8.textPaint
            float r1 = r8.currentTextSize
            r9.setTextSize(r1)
            android.text.TextPaint r9 = r8.textPaint
            android.graphics.Typeface r1 = r8.currentTypeface
            r9.setTypeface(r1)
            android.text.TextPaint r9 = r8.textPaint
            float r1 = r8.scale
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L96
            goto L97
        L96:
            r4 = r5
        L97:
            r9.setLinearText(r4)
            java.lang.CharSequence r9 = r8.text
            android.text.TextPaint r1 = r8.textPaint
            android.text.TextUtils$TruncateAt r2 = android.text.TextUtils.TruncateAt.END
            java.lang.CharSequence r9 = android.text.TextUtils.ellipsize(r9, r1, r0, r2)
            java.lang.CharSequence r0 = r8.textToDraw
            boolean r0 = android.text.TextUtils.equals(r9, r0)
            if (r0 != 0) goto Lb4
            r8.textToDraw = r9
            boolean r9 = r8.calculateIsRtl(r9)
            r8.isRtl = r9
        Lb4:
            return
    }

    private void clearTexture() {
            r1 = this;
            android.graphics.Bitmap r0 = r1.expandedTitleTexture
            if (r0 == 0) goto La
            r0.recycle()
            r0 = 0
            r1.expandedTitleTexture = r0
        La:
            return
    }

    private void ensureExpandedTexture() {
            r9 = this;
            android.graphics.Bitmap r0 = r9.expandedTitleTexture
            if (r0 != 0) goto L79
            android.graphics.Rect r0 = r9.expandedBounds
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L79
            java.lang.CharSequence r0 = r9.textToDraw
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L15
            goto L79
        L15:
            r0 = 0
            r9.calculateOffsets(r0)
            android.text.TextPaint r0 = r9.textPaint
            float r0 = r0.ascent()
            r9.textureAscent = r0
            android.text.TextPaint r0 = r9.textPaint
            float r0 = r0.descent()
            r9.textureDescent = r0
            android.text.TextPaint r0 = r9.textPaint
            java.lang.CharSequence r1 = r9.textToDraw
            r2 = 0
            int r3 = r1.length()
            float r0 = r0.measureText(r1, r2, r3)
            int r0 = java.lang.Math.round(r0)
            float r1 = r9.textureDescent
            float r2 = r9.textureAscent
            float r1 = r1 - r2
            int r1 = java.lang.Math.round(r1)
            if (r0 <= 0) goto L79
            if (r1 > 0) goto L48
            goto L79
        L48:
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r2)
            r9.expandedTitleTexture = r0
            android.graphics.Canvas r2 = new android.graphics.Canvas
            android.graphics.Bitmap r0 = r9.expandedTitleTexture
            r2.<init>(r0)
            java.lang.CharSequence r3 = r9.textToDraw
            r4 = 0
            int r5 = r3.length()
            r6 = 0
            float r0 = (float) r1
            android.text.TextPaint r1 = r9.textPaint
            float r1 = r1.descent()
            float r7 = r0 - r1
            android.text.TextPaint r8 = r9.textPaint
            r2.drawText(r3, r4, r5, r6, r7, r8)
            android.graphics.Paint r0 = r9.texturePaint
            if (r0 != 0) goto L79
            android.graphics.Paint r0 = new android.graphics.Paint
            r1 = 3
            r0.<init>(r1)
            r9.texturePaint = r0
        L79:
            return
    }

    private int getCurrentExpandedTextColor() {
            r3 = this;
            int[] r0 = r3.state
            if (r0 == 0) goto Lc
            android.content.res.ColorStateList r1 = r3.expandedTextColor
            r2 = 0
            int r0 = r1.getColorForState(r0, r2)
            return r0
        Lc:
            android.content.res.ColorStateList r0 = r3.expandedTextColor
            int r0 = r0.getDefaultColor()
            return r0
    }

    private void getTextPaintCollapsed(android.text.TextPaint r2) {
            r1 = this;
            float r0 = r1.collapsedTextSize
            r2.setTextSize(r0)
            android.graphics.Typeface r0 = r1.collapsedTypeface
            r2.setTypeface(r0)
            return
    }

    private void interpolateBounds(float r5) {
            r4 = this;
            android.graphics.RectF r0 = r4.currentBounds
            android.graphics.Rect r1 = r4.expandedBounds
            int r1 = r1.left
            float r1 = (float) r1
            android.graphics.Rect r2 = r4.collapsedBounds
            int r2 = r2.left
            float r2 = (float) r2
            android.animation.TimeInterpolator r3 = r4.positionInterpolator
            float r1 = lerp(r1, r2, r5, r3)
            r0.left = r1
            android.graphics.RectF r0 = r4.currentBounds
            float r1 = r4.expandedDrawY
            float r2 = r4.collapsedDrawY
            android.animation.TimeInterpolator r3 = r4.positionInterpolator
            float r1 = lerp(r1, r2, r5, r3)
            r0.top = r1
            android.graphics.RectF r0 = r4.currentBounds
            android.graphics.Rect r1 = r4.expandedBounds
            int r1 = r1.right
            float r1 = (float) r1
            android.graphics.Rect r2 = r4.collapsedBounds
            int r2 = r2.right
            float r2 = (float) r2
            android.animation.TimeInterpolator r3 = r4.positionInterpolator
            float r1 = lerp(r1, r2, r5, r3)
            r0.right = r1
            android.graphics.RectF r0 = r4.currentBounds
            android.graphics.Rect r1 = r4.expandedBounds
            int r1 = r1.bottom
            float r1 = (float) r1
            android.graphics.Rect r2 = r4.collapsedBounds
            int r2 = r2.bottom
            float r2 = (float) r2
            android.animation.TimeInterpolator r3 = r4.positionInterpolator
            float r5 = lerp(r1, r2, r5, r3)
            r0.bottom = r5
            return
    }

    private static boolean isClose(float r0, float r1) {
            float r0 = r0 - r1
            float r0 = java.lang.Math.abs(r0)
            r1 = 981668463(0x3a83126f, float:0.001)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 >= 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    private static float lerp(float r0, float r1, float r2, android.animation.TimeInterpolator r3) {
            if (r3 == 0) goto L6
            float r2 = r3.getInterpolation(r2)
        L6:
            float r0 = android.support.design.animation.AnimationUtils.lerp(r0, r1, r2)
            return r0
    }

    private android.graphics.Typeface readFontFamilyTypeface(int r5) {
            r4 = this;
            android.view.View r0 = r4.view
            android.content.Context r0 = r0.getContext()
            r1 = 1
            int[] r1 = new int[r1]
            r2 = 16843692(0x10103ac, float:2.3696192E-38)
            r3 = 0
            r1[r3] = r2
            android.content.res.TypedArray r5 = r0.obtainStyledAttributes(r5, r1)
            java.lang.String r0 = r5.getString(r3)     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L21
            android.graphics.Typeface r0 = android.graphics.Typeface.create(r0, r3)     // Catch: java.lang.Throwable -> L26
            r5.recycle()
            return r0
        L21:
            r5.recycle()
            r5 = 0
            return r5
        L26:
            r0 = move-exception
            r5.recycle()
            throw r0
    }

    private static boolean rectEquals(android.graphics.Rect r1, int r2, int r3, int r4, int r5) {
            int r0 = r1.left
            if (r0 != r2) goto L12
            int r2 = r1.top
            if (r2 != r3) goto L12
            int r2 = r1.right
            if (r2 != r4) goto L12
            int r1 = r1.bottom
            if (r1 != r5) goto L12
            r1 = 1
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    private void setInterpolatedTextSize(float r2) {
            r1 = this;
            r1.calculateUsingTextSize(r2)
            boolean r2 = android.support.design.widget.CollapsingTextHelper.USE_SCALING_TEXTURE
            if (r2 == 0) goto L11
            float r2 = r1.scale
            r0 = 1065353216(0x3f800000, float:1.0)
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 == 0) goto L11
            r2 = 1
            goto L12
        L11:
            r2 = 0
        L12:
            r1.useTexture = r2
            if (r2 == 0) goto L19
            r1.ensureExpandedTexture()
        L19:
            android.view.View r2 = r1.view
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r2)
            return
    }

    public float calculateCollapsedTextWidth() {
            r4 = this;
            java.lang.CharSequence r0 = r4.text
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            android.text.TextPaint r0 = r4.tmpPaint
            r4.getTextPaintCollapsed(r0)
            android.text.TextPaint r0 = r4.tmpPaint
            java.lang.CharSequence r1 = r4.text
            r2 = 0
            int r3 = r1.length()
            float r0 = r0.measureText(r1, r2, r3)
            return r0
    }

    public void draw(android.graphics.Canvas r10) {
            r9 = this;
            int r0 = r10.save()
            java.lang.CharSequence r1 = r9.textToDraw
            if (r1 == 0) goto L57
            boolean r1 = r9.drawTitle
            if (r1 == 0) goto L57
            float r6 = r9.currentDrawX
            float r1 = r9.currentDrawY
            boolean r2 = r9.useTexture
            if (r2 == 0) goto L1a
            android.graphics.Bitmap r2 = r9.expandedTitleTexture
            if (r2 == 0) goto L1a
            r2 = 1
            goto L1b
        L1a:
            r2 = 0
        L1b:
            if (r2 == 0) goto L23
            float r3 = r9.textureAscent
            float r4 = r9.scale
            float r3 = r3 * r4
            goto L31
        L23:
            android.text.TextPaint r3 = r9.textPaint
            float r3 = r3.ascent()
            float r4 = r9.scale
            float r3 = r3 * r4
            android.text.TextPaint r4 = r9.textPaint
            r4.descent()
        L31:
            if (r2 == 0) goto L34
            float r1 = r1 + r3
        L34:
            r7 = r1
            float r1 = r9.scale
            r3 = 1065353216(0x3f800000, float:1.0)
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 == 0) goto L40
            r10.scale(r1, r1, r6, r7)
        L40:
            if (r2 == 0) goto L4a
            android.graphics.Bitmap r1 = r9.expandedTitleTexture
            android.graphics.Paint r2 = r9.texturePaint
            r10.drawBitmap(r1, r6, r7, r2)
            goto L57
        L4a:
            java.lang.CharSequence r3 = r9.textToDraw
            r4 = 0
            int r5 = r3.length()
            android.text.TextPaint r8 = r9.textPaint
            r2 = r10
            r2.drawText(r3, r4, r5, r6, r7, r8)
        L57:
            r10.restoreToCount(r0)
            return
    }

    public void getCollapsedTextActualBounds(android.graphics.RectF r4) {
            r3 = this;
            java.lang.CharSequence r0 = r3.text
            boolean r0 = r3.calculateIsRtl(r0)
            android.graphics.Rect r1 = r3.collapsedBounds
            if (r0 != 0) goto Le
            int r1 = r1.left
            float r1 = (float) r1
            goto L16
        Le:
            int r1 = r1.right
            float r1 = (float) r1
            float r2 = r3.calculateCollapsedTextWidth()
            float r1 = r1 - r2
        L16:
            r4.left = r1
            android.graphics.Rect r1 = r3.collapsedBounds
            int r1 = r1.top
            float r1 = (float) r1
            r4.top = r1
            if (r0 != 0) goto L29
            float r0 = r4.left
            float r1 = r3.calculateCollapsedTextWidth()
            float r0 = r0 + r1
            goto L2e
        L29:
            android.graphics.Rect r0 = r3.collapsedBounds
            int r0 = r0.right
            float r0 = (float) r0
        L2e:
            r4.right = r0
            android.graphics.Rect r0 = r3.collapsedBounds
            int r0 = r0.top
            float r0 = (float) r0
            float r1 = r3.getCollapsedTextHeight()
            float r0 = r0 + r1
            r4.bottom = r0
            return
    }

    public android.content.res.ColorStateList getCollapsedTextColor() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.collapsedTextColor
            return r0
    }

    public int getCollapsedTextGravity() {
            r1 = this;
            int r0 = r1.collapsedTextGravity
            return r0
    }

    public float getCollapsedTextHeight() {
            r1 = this;
            android.text.TextPaint r0 = r1.tmpPaint
            r1.getTextPaintCollapsed(r0)
            android.text.TextPaint r0 = r1.tmpPaint
            float r0 = r0.ascent()
            float r0 = -r0
            return r0
    }

    public float getCollapsedTextSize() {
            r1 = this;
            float r0 = r1.collapsedTextSize
            return r0
    }

    public android.graphics.Typeface getCollapsedTypeface() {
            r1 = this;
            android.graphics.Typeface r0 = r1.collapsedTypeface
            if (r0 == 0) goto L5
            goto L7
        L5:
            android.graphics.Typeface r0 = android.graphics.Typeface.DEFAULT
        L7:
            return r0
    }

    public int getCurrentCollapsedTextColor() {
            r3 = this;
            int[] r0 = r3.state
            if (r0 == 0) goto Lc
            android.content.res.ColorStateList r1 = r3.collapsedTextColor
            r2 = 0
            int r0 = r1.getColorForState(r0, r2)
            return r0
        Lc:
            android.content.res.ColorStateList r0 = r3.collapsedTextColor
            int r0 = r0.getDefaultColor()
            return r0
    }

    public android.content.res.ColorStateList getExpandedTextColor() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.expandedTextColor
            return r0
    }

    public int getExpandedTextGravity() {
            r1 = this;
            int r0 = r1.expandedTextGravity
            return r0
    }

    public float getExpandedTextSize() {
            r1 = this;
            float r0 = r1.expandedTextSize
            return r0
    }

    public android.graphics.Typeface getExpandedTypeface() {
            r1 = this;
            android.graphics.Typeface r0 = r1.expandedTypeface
            if (r0 == 0) goto L5
            goto L7
        L5:
            android.graphics.Typeface r0 = android.graphics.Typeface.DEFAULT
        L7:
            return r0
    }

    public float getExpansionFraction() {
            r1 = this;
            float r0 = r1.expandedFraction
            return r0
    }

    public java.lang.CharSequence getText() {
            r1 = this;
            java.lang.CharSequence r0 = r1.text
            return r0
    }

    public final boolean isStateful() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.collapsedTextColor
            if (r0 == 0) goto La
            boolean r0 = r0.isStateful()
            if (r0 != 0) goto L14
        La:
            android.content.res.ColorStateList r0 = r1.expandedTextColor
            if (r0 == 0) goto L16
            boolean r0 = r0.isStateful()
            if (r0 == 0) goto L16
        L14:
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    void onBoundsChanged() {
            r1 = this;
            android.graphics.Rect r0 = r1.collapsedBounds
            int r0 = r0.width()
            if (r0 <= 0) goto L22
            android.graphics.Rect r0 = r1.collapsedBounds
            int r0 = r0.height()
            if (r0 <= 0) goto L22
            android.graphics.Rect r0 = r1.expandedBounds
            int r0 = r0.width()
            if (r0 <= 0) goto L22
            android.graphics.Rect r0 = r1.expandedBounds
            int r0 = r0.height()
            if (r0 <= 0) goto L22
            r0 = 1
            goto L23
        L22:
            r0 = 0
        L23:
            r1.drawTitle = r0
            return
    }

    public void recalculate() {
            r1 = this;
            android.view.View r0 = r1.view
            int r0 = r0.getHeight()
            if (r0 <= 0) goto L16
            android.view.View r0 = r1.view
            int r0 = r0.getWidth()
            if (r0 <= 0) goto L16
            r1.calculateBaseOffsets()
            r1.calculateCurrentOffsets()
        L16:
            return
    }

    public void setCollapsedBounds(int r2, int r3, int r4, int r5) {
            r1 = this;
            android.graphics.Rect r0 = r1.collapsedBounds
            boolean r0 = rectEquals(r0, r2, r3, r4, r5)
            if (r0 != 0) goto L13
            android.graphics.Rect r0 = r1.collapsedBounds
            r0.set(r2, r3, r4, r5)
            r2 = 1
            r1.boundsChanged = r2
            r1.onBoundsChanged()
        L13:
            return
    }

    public void setCollapsedTextAppearance(int r4) {
            r3 = this;
            android.view.View r0 = r3.view
            android.content.Context r0 = r0.getContext()
            int[] r1 = android.support.v7.appcompat.R.styleable.TextAppearance
            android.support.v7.widget.TintTypedArray r0 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r0, r4, r1)
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColor
            boolean r1 = r0.hasValue(r1)
            if (r1 == 0) goto L1c
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColor
            android.content.res.ColorStateList r1 = r0.getColorStateList(r1)
            r3.collapsedTextColor = r1
        L1c:
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textSize
            boolean r1 = r0.hasValue(r1)
            if (r1 == 0) goto L30
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textSize
            float r2 = r3.collapsedTextSize
            int r2 = (int) r2
            int r1 = r0.getDimensionPixelSize(r1, r2)
            float r1 = (float) r1
            r3.collapsedTextSize = r1
        L30:
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_shadowColor
            r2 = 0
            int r1 = r0.getInt(r1, r2)
            r3.collapsedShadowColor = r1
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_shadowDx
            r2 = 0
            float r1 = r0.getFloat(r1, r2)
            r3.collapsedShadowDx = r1
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_shadowDy
            float r1 = r0.getFloat(r1, r2)
            r3.collapsedShadowDy = r1
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_shadowRadius
            float r1 = r0.getFloat(r1, r2)
            r3.collapsedShadowRadius = r1
            r0.recycle()
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L61
            android.graphics.Typeface r4 = r3.readFontFamilyTypeface(r4)
            r3.collapsedTypeface = r4
        L61:
            r3.recalculate()
            return
    }

    public void setCollapsedTextColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.collapsedTextColor
            if (r0 == r2) goto L9
            r1.collapsedTextColor = r2
            r1.recalculate()
        L9:
            return
    }

    public void setCollapsedTextGravity(int r2) {
            r1 = this;
            int r0 = r1.collapsedTextGravity
            if (r0 == r2) goto L9
            r1.collapsedTextGravity = r2
            r1.recalculate()
        L9:
            return
    }

    public void setCollapsedTextSize(float r2) {
            r1 = this;
            float r0 = r1.collapsedTextSize
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lb
            r1.collapsedTextSize = r2
            r1.recalculate()
        Lb:
            return
    }

    public void setCollapsedTypeface(android.graphics.Typeface r2) {
            r1 = this;
            android.graphics.Typeface r0 = r1.collapsedTypeface
            if (r0 == r2) goto L9
            r1.collapsedTypeface = r2
            r1.recalculate()
        L9:
            return
    }

    public void setExpandedBounds(int r2, int r3, int r4, int r5) {
            r1 = this;
            android.graphics.Rect r0 = r1.expandedBounds
            boolean r0 = rectEquals(r0, r2, r3, r4, r5)
            if (r0 != 0) goto L13
            android.graphics.Rect r0 = r1.expandedBounds
            r0.set(r2, r3, r4, r5)
            r2 = 1
            r1.boundsChanged = r2
            r1.onBoundsChanged()
        L13:
            return
    }

    public void setExpandedTextAppearance(int r4) {
            r3 = this;
            android.view.View r0 = r3.view
            android.content.Context r0 = r0.getContext()
            int[] r1 = android.support.v7.appcompat.R.styleable.TextAppearance
            android.support.v7.widget.TintTypedArray r0 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r0, r4, r1)
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColor
            boolean r1 = r0.hasValue(r1)
            if (r1 == 0) goto L1c
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColor
            android.content.res.ColorStateList r1 = r0.getColorStateList(r1)
            r3.expandedTextColor = r1
        L1c:
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textSize
            boolean r1 = r0.hasValue(r1)
            if (r1 == 0) goto L30
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textSize
            float r2 = r3.expandedTextSize
            int r2 = (int) r2
            int r1 = r0.getDimensionPixelSize(r1, r2)
            float r1 = (float) r1
            r3.expandedTextSize = r1
        L30:
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_shadowColor
            r2 = 0
            int r1 = r0.getInt(r1, r2)
            r3.expandedShadowColor = r1
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_shadowDx
            r2 = 0
            float r1 = r0.getFloat(r1, r2)
            r3.expandedShadowDx = r1
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_shadowDy
            float r1 = r0.getFloat(r1, r2)
            r3.expandedShadowDy = r1
            int r1 = android.support.v7.appcompat.R.styleable.TextAppearance_android_shadowRadius
            float r1 = r0.getFloat(r1, r2)
            r3.expandedShadowRadius = r1
            r0.recycle()
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L61
            android.graphics.Typeface r4 = r3.readFontFamilyTypeface(r4)
            r3.expandedTypeface = r4
        L61:
            r3.recalculate()
            return
    }

    public void setExpandedTextColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.expandedTextColor
            if (r0 == r2) goto L9
            r1.expandedTextColor = r2
            r1.recalculate()
        L9:
            return
    }

    public void setExpandedTextGravity(int r2) {
            r1 = this;
            int r0 = r1.expandedTextGravity
            if (r0 == r2) goto L9
            r1.expandedTextGravity = r2
            r1.recalculate()
        L9:
            return
    }

    public void setExpandedTextSize(float r2) {
            r1 = this;
            float r0 = r1.expandedTextSize
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lb
            r1.expandedTextSize = r2
            r1.recalculate()
        Lb:
            return
    }

    public void setExpandedTypeface(android.graphics.Typeface r2) {
            r1 = this;
            android.graphics.Typeface r0 = r1.expandedTypeface
            if (r0 == r2) goto L9
            r1.expandedTypeface = r2
            r1.recalculate()
        L9:
            return
    }

    public void setExpansionFraction(float r3) {
            r2 = this;
            r0 = 0
            r1 = 1065353216(0x3f800000, float:1.0)
            float r3 = android.support.v4.math.MathUtils.clamp(r3, r0, r1)
            float r0 = r2.expandedFraction
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 == 0) goto L12
            r2.expandedFraction = r3
            r2.calculateCurrentOffsets()
        L12:
            return
    }

    public void setPositionInterpolator(android.animation.TimeInterpolator r1) {
            r0 = this;
            r0.positionInterpolator = r1
            r0.recalculate()
            return
    }

    public final boolean setState(int[] r1) {
            r0 = this;
            r0.state = r1
            boolean r1 = r0.isStateful()
            if (r1 == 0) goto Ld
            r0.recalculate()
            r1 = 1
            return r1
        Ld:
            r1 = 0
            return r1
    }

    public void setText(java.lang.CharSequence r2) {
            r1 = this;
            if (r2 == 0) goto La
            java.lang.CharSequence r0 = r1.text
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L15
        La:
            r1.text = r2
            r2 = 0
            r1.textToDraw = r2
            r1.clearTexture()
            r1.recalculate()
        L15:
            return
    }

    public void setTextSizeInterpolator(android.animation.TimeInterpolator r1) {
            r0 = this;
            r0.textSizeInterpolator = r1
            r0.recalculate()
            return
    }

    public void setTypefaces(android.graphics.Typeface r1) {
            r0 = this;
            r0.expandedTypeface = r1
            r0.collapsedTypeface = r1
            r0.recalculate()
            return
    }
}
