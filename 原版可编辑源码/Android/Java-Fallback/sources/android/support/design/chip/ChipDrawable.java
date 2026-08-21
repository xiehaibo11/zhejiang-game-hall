package android.support.design.chip;

public class ChipDrawable extends android.graphics.drawable.Drawable implements android.support.v4.graphics.drawable.TintAwareDrawable, android.graphics.drawable.Drawable.Callback {
    private static final boolean DEBUG = false;
    private static final int[] DEFAULT_STATE = null;
    private static final java.lang.String NAMESPACE_APP = "http://schemas.android.com/apk/res-auto";
    private int alpha;
    private boolean checkable;
    private android.graphics.drawable.Drawable checkedIcon;
    private boolean checkedIconVisible;
    private android.content.res.ColorStateList chipBackgroundColor;
    private float chipCornerRadius;
    private float chipEndPadding;
    private android.graphics.drawable.Drawable chipIcon;
    private float chipIconSize;
    private android.content.res.ColorStateList chipIconTint;
    private boolean chipIconVisible;
    private float chipMinHeight;
    private final android.graphics.Paint chipPaint;
    private float chipStartPadding;
    private android.content.res.ColorStateList chipStrokeColor;
    private float chipStrokeWidth;
    private android.graphics.drawable.Drawable closeIcon;
    private java.lang.CharSequence closeIconContentDescription;
    private float closeIconEndPadding;
    private float closeIconSize;
    private float closeIconStartPadding;
    private int[] closeIconStateSet;
    private android.content.res.ColorStateList closeIconTint;
    private boolean closeIconVisible;
    private android.graphics.ColorFilter colorFilter;
    private android.content.res.ColorStateList compatRippleColor;
    private final android.content.Context context;
    private boolean currentChecked;
    private int currentChipBackgroundColor;
    private int currentChipStrokeColor;
    private int currentCompatRippleColor;
    private int currentTextColor;
    private int currentTint;
    private final android.graphics.Paint debugPaint;
    private java.lang.ref.WeakReference<android.support.design.chip.ChipDrawable.Delegate> delegate;
    private final android.support.v4.content.res.ResourcesCompat.FontCallback fontCallback;
    private final android.graphics.Paint.FontMetrics fontMetrics;
    private android.support.design.animation.MotionSpec hideMotionSpec;
    private float iconEndPadding;
    private float iconStartPadding;
    private int maxWidth;
    private final android.graphics.PointF pointF;
    private java.lang.CharSequence rawText;
    private final android.graphics.RectF rectF;
    private android.content.res.ColorStateList rippleColor;
    private boolean shouldDrawText;
    private android.support.design.animation.MotionSpec showMotionSpec;
    private android.support.design.resources.TextAppearance textAppearance;
    private float textEndPadding;
    private final android.text.TextPaint textPaint;
    private float textStartPadding;
    private float textWidth;
    private boolean textWidthDirty;
    private android.content.res.ColorStateList tint;
    private android.graphics.PorterDuffColorFilter tintFilter;
    private android.graphics.PorterDuff.Mode tintMode;
    private android.text.TextUtils.TruncateAt truncateAt;
    private java.lang.CharSequence unicodeWrappedText;
    private boolean useCompatRipple;


    public interface Delegate {
        void onChipDrawableSizeChange();
    }

    static {
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 16842910(0x101009e, float:2.3694E-38)
            r0[r1] = r2
            android.support.design.chip.ChipDrawable.DEFAULT_STATE = r0
            return
    }

    private ChipDrawable(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            android.support.design.chip.ChipDrawable$1 r0 = new android.support.design.chip.ChipDrawable$1
            r0.<init>(r3)
            r3.fontCallback = r0
            android.text.TextPaint r0 = new android.text.TextPaint
            r1 = 1
            r0.<init>(r1)
            r3.textPaint = r0
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>(r1)
            r3.chipPaint = r0
            android.graphics.Paint$FontMetrics r0 = new android.graphics.Paint$FontMetrics
            r0.<init>()
            r3.fontMetrics = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r3.rectF = r0
            android.graphics.PointF r0 = new android.graphics.PointF
            r0.<init>()
            r3.pointF = r0
            r0 = 255(0xff, float:3.57E-43)
            r3.alpha = r0
            android.graphics.PorterDuff$Mode r0 = android.graphics.PorterDuff.Mode.SRC_IN
            r3.tintMode = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r2 = 0
            r0.<init>(r2)
            r3.delegate = r0
            r3.textWidthDirty = r1
            r3.context = r4
            java.lang.String r0 = ""
            r3.rawText = r0
            android.text.TextPaint r0 = r3.textPaint
            android.content.res.Resources r4 = r4.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            float r4 = r4.density
            r0.density = r4
            r3.debugPaint = r2
            if (r2 == 0) goto L5d
            android.graphics.Paint$Style r4 = android.graphics.Paint.Style.STROKE
            r2.setStyle(r4)
        L5d:
            int[] r4 = android.support.design.chip.ChipDrawable.DEFAULT_STATE
            r3.setState(r4)
            int[] r4 = android.support.design.chip.ChipDrawable.DEFAULT_STATE
            r3.setCloseIconState(r4)
            r3.shouldDrawText = r1
            return
    }

    static boolean access$002(android.support.design.chip.ChipDrawable r0, boolean r1) {
            r0.textWidthDirty = r1
            return r1
    }

    private void applyChildDrawable(android.graphics.drawable.Drawable r3) {
            r2 = this;
            if (r3 == 0) goto L3f
            r3.setCallback(r2)
            int r0 = android.support.v4.graphics.drawable.DrawableCompat.getLayoutDirection(r2)
            android.support.v4.graphics.drawable.DrawableCompat.setLayoutDirection(r3, r0)
            int r0 = r2.getLevel()
            r3.setLevel(r0)
            boolean r0 = r2.isVisible()
            r1 = 0
            r3.setVisible(r0, r1)
            android.graphics.drawable.Drawable r0 = r2.closeIcon
            if (r3 != r0) goto L32
            boolean r0 = r3.isStateful()
            if (r0 == 0) goto L2c
            int[] r0 = r2.getCloseIconState()
            r3.setState(r0)
        L2c:
            android.content.res.ColorStateList r0 = r2.closeIconTint
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r3, r0)
            goto L3f
        L32:
            boolean r0 = r3.isStateful()
            if (r0 == 0) goto L3f
            int[] r0 = r2.getState()
            r3.setState(r0)
        L3f:
            return
    }

    private void calculateChipIconBounds(android.graphics.Rect r3, android.graphics.RectF r4) {
            r2 = this;
            r4.setEmpty()
            boolean r0 = r2.showsChipIcon()
            if (r0 != 0) goto Lf
            boolean r0 = r2.showsCheckedIcon()
            if (r0 == 0) goto L48
        Lf:
            float r0 = r2.chipStartPadding
            float r1 = r2.iconStartPadding
            float r0 = r0 + r1
            int r1 = android.support.v4.graphics.drawable.DrawableCompat.getLayoutDirection(r2)
            if (r1 != 0) goto L28
            int r1 = r3.left
            float r1 = (float) r1
            float r1 = r1 + r0
            r4.left = r1
            float r0 = r4.left
            float r1 = r2.chipIconSize
            float r0 = r0 + r1
            r4.right = r0
            goto L35
        L28:
            int r1 = r3.right
            float r1 = (float) r1
            float r1 = r1 - r0
            r4.right = r1
            float r0 = r4.right
            float r1 = r2.chipIconSize
            float r0 = r0 - r1
            r4.left = r0
        L35:
            float r3 = r3.exactCenterY()
            float r0 = r2.chipIconSize
            r1 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r1
            float r3 = r3 - r0
            r4.top = r3
            float r3 = r4.top
            float r0 = r2.chipIconSize
            float r3 = r3 + r0
            r4.bottom = r3
        L48:
            return
    }

    private void calculateChipTouchBounds(android.graphics.Rect r3, android.graphics.RectF r4) {
            r2 = this;
            r4.set(r3)
            boolean r0 = r2.showsCloseIcon()
            if (r0 == 0) goto L2a
            float r0 = r2.chipEndPadding
            float r1 = r2.closeIconEndPadding
            float r0 = r0 + r1
            float r1 = r2.closeIconSize
            float r0 = r0 + r1
            float r1 = r2.closeIconStartPadding
            float r0 = r0 + r1
            float r1 = r2.textEndPadding
            float r0 = r0 + r1
            int r1 = android.support.v4.graphics.drawable.DrawableCompat.getLayoutDirection(r2)
            if (r1 != 0) goto L24
            int r3 = r3.right
            float r3 = (float) r3
            float r3 = r3 - r0
            r4.right = r3
            goto L2a
        L24:
            int r3 = r3.left
            float r3 = (float) r3
            float r3 = r3 + r0
            r4.left = r3
        L2a:
            return
    }

    private void calculateCloseIconBounds(android.graphics.Rect r3, android.graphics.RectF r4) {
            r2 = this;
            r4.setEmpty()
            boolean r0 = r2.showsCloseIcon()
            if (r0 == 0) goto L42
            float r0 = r2.chipEndPadding
            float r1 = r2.closeIconEndPadding
            float r0 = r0 + r1
            int r1 = android.support.v4.graphics.drawable.DrawableCompat.getLayoutDirection(r2)
            if (r1 != 0) goto L22
            int r1 = r3.right
            float r1 = (float) r1
            float r1 = r1 - r0
            r4.right = r1
            float r0 = r4.right
            float r1 = r2.closeIconSize
            float r0 = r0 - r1
            r4.left = r0
            goto L2f
        L22:
            int r1 = r3.left
            float r1 = (float) r1
            float r1 = r1 + r0
            r4.left = r1
            float r0 = r4.left
            float r1 = r2.closeIconSize
            float r0 = r0 + r1
            r4.right = r0
        L2f:
            float r3 = r3.exactCenterY()
            float r0 = r2.closeIconSize
            r1 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r1
            float r3 = r3 - r0
            r4.top = r3
            float r3 = r4.top
            float r0 = r2.closeIconSize
            float r3 = r3 + r0
            r4.bottom = r3
        L42:
            return
    }

    private void calculateCloseIconTouchBounds(android.graphics.Rect r3, android.graphics.RectF r4) {
            r2 = this;
            r4.setEmpty()
            boolean r0 = r2.showsCloseIcon()
            if (r0 == 0) goto L3d
            float r0 = r2.chipEndPadding
            float r1 = r2.closeIconEndPadding
            float r0 = r0 + r1
            float r1 = r2.closeIconSize
            float r0 = r0 + r1
            float r1 = r2.closeIconStartPadding
            float r0 = r0 + r1
            float r1 = r2.textEndPadding
            float r0 = r0 + r1
            int r1 = android.support.v4.graphics.drawable.DrawableCompat.getLayoutDirection(r2)
            if (r1 != 0) goto L28
            int r1 = r3.right
            float r1 = (float) r1
            r4.right = r1
            float r1 = r4.right
            float r1 = r1 - r0
            r4.left = r1
            goto L33
        L28:
            int r1 = r3.left
            float r1 = (float) r1
            r4.left = r1
            int r1 = r3.left
            float r1 = (float) r1
            float r1 = r1 + r0
            r4.right = r1
        L33:
            int r0 = r3.top
            float r0 = (float) r0
            r4.top = r0
            int r3 = r3.bottom
            float r3 = (float) r3
            r4.bottom = r3
        L3d:
            return
    }

    private float calculateCloseIconWidth() {
            r2 = this;
            boolean r0 = r2.showsCloseIcon()
            if (r0 == 0) goto Lf
            float r0 = r2.closeIconStartPadding
            float r1 = r2.closeIconSize
            float r0 = r0 + r1
            float r1 = r2.closeIconEndPadding
            float r0 = r0 + r1
            return r0
        Lf:
            r0 = 0
            return r0
    }

    private void calculateTextBounds(android.graphics.Rect r4, android.graphics.RectF r5) {
            r3 = this;
            r5.setEmpty()
            java.lang.CharSequence r0 = r3.unicodeWrappedText
            if (r0 == 0) goto L44
            float r0 = r3.chipStartPadding
            float r1 = r3.calculateChipIconWidth()
            float r0 = r0 + r1
            float r1 = r3.textStartPadding
            float r0 = r0 + r1
            float r1 = r3.chipEndPadding
            float r2 = r3.calculateCloseIconWidth()
            float r1 = r1 + r2
            float r2 = r3.textEndPadding
            float r1 = r1 + r2
            int r2 = android.support.v4.graphics.drawable.DrawableCompat.getLayoutDirection(r3)
            if (r2 != 0) goto L2e
            int r2 = r4.left
            float r2 = (float) r2
            float r2 = r2 + r0
            r5.left = r2
            int r0 = r4.right
            float r0 = (float) r0
            float r0 = r0 - r1
            r5.right = r0
            goto L3a
        L2e:
            int r2 = r4.left
            float r2 = (float) r2
            float r2 = r2 + r1
            r5.left = r2
            int r1 = r4.right
            float r1 = (float) r1
            float r1 = r1 - r0
            r5.right = r1
        L3a:
            int r0 = r4.top
            float r0 = (float) r0
            r5.top = r0
            int r4 = r4.bottom
            float r4 = (float) r4
            r5.bottom = r4
        L44:
            return
    }

    private float calculateTextCenterFromBaseline() {
            r2 = this;
            android.text.TextPaint r0 = r2.textPaint
            android.graphics.Paint$FontMetrics r1 = r2.fontMetrics
            r0.getFontMetrics(r1)
            android.graphics.Paint$FontMetrics r0 = r2.fontMetrics
            float r0 = r0.descent
            android.graphics.Paint$FontMetrics r1 = r2.fontMetrics
            float r1 = r1.ascent
            float r0 = r0 + r1
            r1 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r1
            return r0
    }

    private float calculateTextWidth(java.lang.CharSequence r4) {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            android.text.TextPaint r0 = r3.textPaint
            r1 = 0
            int r2 = r4.length()
            float r4 = r0.measureText(r4, r1, r2)
            return r4
    }

    private boolean canShowCheckedIcon() {
            r1 = this;
            boolean r0 = r1.checkedIconVisible
            if (r0 == 0) goto Le
            android.graphics.drawable.Drawable r0 = r1.checkedIcon
            if (r0 == 0) goto Le
            boolean r0 = r1.checkable
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    public static android.support.design.chip.ChipDrawable createFromAttributes(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            android.support.design.chip.ChipDrawable r0 = new android.support.design.chip.ChipDrawable
            r0.<init>(r1)
            r0.loadFromAttributes(r2, r3, r4)
            return r0
    }

    public static android.support.design.chip.ChipDrawable createFromResource(android.content.Context r4, int r5) {
            android.content.res.Resources r0 = r4.getResources()     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
            android.content.res.XmlResourceParser r0 = r0.getXml(r5)     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
        L8:
            int r1 = r0.next()     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
            r2 = 2
            if (r1 == r2) goto L12
            r3 = 1
            if (r1 != r3) goto L8
        L12:
            if (r1 != r2) goto L3b
            java.lang.String r1 = r0.getName()     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
            java.lang.String r2 = "chip"
            boolean r1 = android.text.TextUtils.equals(r1, r2)     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
            if (r1 == 0) goto L33
            android.util.AttributeSet r0 = android.util.Xml.asAttributeSet(r0)     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
            int r1 = r0.getStyleAttribute()     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
            if (r1 != 0) goto L2c
            int r1 = android.support.design.R.style.Widget_MaterialComponents_Chip_Entry     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
        L2c:
            int r2 = android.support.design.R.attr.chipStandaloneStyle     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
            android.support.design.chip.ChipDrawable r4 = createFromAttributes(r4, r0, r2, r1)     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
            return r4
        L33:
            org.xmlpull.v1.XmlPullParserException r4 = new org.xmlpull.v1.XmlPullParserException     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
            java.lang.String r0 = "Must have a <chip> start tag"
            r4.<init>(r0)     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
            throw r4     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
        L3b:
            org.xmlpull.v1.XmlPullParserException r4 = new org.xmlpull.v1.XmlPullParserException     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
            java.lang.String r0 = "No start tag found"
            r4.<init>(r0)     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
            throw r4     // Catch: java.io.IOException -> L43 org.xmlpull.v1.XmlPullParserException -> L45
        L43:
            r4 = move-exception
            goto L46
        L45:
            r4 = move-exception
        L46:
            android.content.res.Resources$NotFoundException r0 = new android.content.res.Resources$NotFoundException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Can't load chip resource ID #0x"
            r1.append(r2)
            java.lang.String r5 = java.lang.Integer.toHexString(r5)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            r0.initCause(r4)
            throw r0
    }

    private void drawCheckedIcon(android.graphics.Canvas r6, android.graphics.Rect r7) {
            r5 = this;
            boolean r0 = r5.showsCheckedIcon()
            if (r0 == 0) goto L34
            android.graphics.RectF r0 = r5.rectF
            r5.calculateChipIconBounds(r7, r0)
            android.graphics.RectF r7 = r5.rectF
            float r7 = r7.left
            android.graphics.RectF r0 = r5.rectF
            float r0 = r0.top
            r6.translate(r7, r0)
            android.graphics.drawable.Drawable r1 = r5.checkedIcon
            android.graphics.RectF r2 = r5.rectF
            float r2 = r2.width()
            int r2 = (int) r2
            android.graphics.RectF r3 = r5.rectF
            float r3 = r3.height()
            int r3 = (int) r3
            r4 = 0
            r1.setBounds(r4, r4, r2, r3)
            android.graphics.drawable.Drawable r1 = r5.checkedIcon
            r1.draw(r6)
            float r7 = -r7
            float r0 = -r0
            r6.translate(r7, r0)
        L34:
            return
    }

    private void drawChipBackground(android.graphics.Canvas r3, android.graphics.Rect r4) {
            r2 = this;
            android.graphics.Paint r0 = r2.chipPaint
            int r1 = r2.currentChipBackgroundColor
            r0.setColor(r1)
            android.graphics.Paint r0 = r2.chipPaint
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.FILL
            r0.setStyle(r1)
            android.graphics.Paint r0 = r2.chipPaint
            android.graphics.ColorFilter r1 = r2.getTintColorFilter()
            r0.setColorFilter(r1)
            android.graphics.RectF r0 = r2.rectF
            r0.set(r4)
            android.graphics.RectF r4 = r2.rectF
            float r0 = r2.chipCornerRadius
            android.graphics.Paint r1 = r2.chipPaint
            r3.drawRoundRect(r4, r0, r0, r1)
            return
    }

    private void drawChipIcon(android.graphics.Canvas r6, android.graphics.Rect r7) {
            r5 = this;
            boolean r0 = r5.showsChipIcon()
            if (r0 == 0) goto L34
            android.graphics.RectF r0 = r5.rectF
            r5.calculateChipIconBounds(r7, r0)
            android.graphics.RectF r7 = r5.rectF
            float r7 = r7.left
            android.graphics.RectF r0 = r5.rectF
            float r0 = r0.top
            r6.translate(r7, r0)
            android.graphics.drawable.Drawable r1 = r5.chipIcon
            android.graphics.RectF r2 = r5.rectF
            float r2 = r2.width()
            int r2 = (int) r2
            android.graphics.RectF r3 = r5.rectF
            float r3 = r3.height()
            int r3 = (int) r3
            r4 = 0
            r1.setBounds(r4, r4, r2, r3)
            android.graphics.drawable.Drawable r1 = r5.chipIcon
            r1.draw(r6)
            float r7 = -r7
            float r0 = -r0
            r6.translate(r7, r0)
        L34:
            return
    }

    private void drawChipStroke(android.graphics.Canvas r7, android.graphics.Rect r8) {
            r6 = this;
            float r0 = r6.chipStrokeWidth
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto L4e
            android.graphics.Paint r0 = r6.chipPaint
            int r1 = r6.currentChipStrokeColor
            r0.setColor(r1)
            android.graphics.Paint r0 = r6.chipPaint
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.STROKE
            r0.setStyle(r1)
            android.graphics.Paint r0 = r6.chipPaint
            android.graphics.ColorFilter r1 = r6.getTintColorFilter()
            r0.setColorFilter(r1)
            android.graphics.RectF r0 = r6.rectF
            int r1 = r8.left
            float r1 = (float) r1
            float r2 = r6.chipStrokeWidth
            r3 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 / r3
            float r1 = r1 + r2
            int r2 = r8.top
            float r2 = (float) r2
            float r4 = r6.chipStrokeWidth
            float r4 = r4 / r3
            float r2 = r2 + r4
            int r4 = r8.right
            float r4 = (float) r4
            float r5 = r6.chipStrokeWidth
            float r5 = r5 / r3
            float r4 = r4 - r5
            int r8 = r8.bottom
            float r8 = (float) r8
            float r5 = r6.chipStrokeWidth
            float r5 = r5 / r3
            float r8 = r8 - r5
            r0.set(r1, r2, r4, r8)
            float r8 = r6.chipCornerRadius
            float r0 = r6.chipStrokeWidth
            float r0 = r0 / r3
            float r8 = r8 - r0
            android.graphics.RectF r0 = r6.rectF
            android.graphics.Paint r1 = r6.chipPaint
            r7.drawRoundRect(r0, r8, r8, r1)
        L4e:
            return
    }

    private void drawCloseIcon(android.graphics.Canvas r6, android.graphics.Rect r7) {
            r5 = this;
            boolean r0 = r5.showsCloseIcon()
            if (r0 == 0) goto L34
            android.graphics.RectF r0 = r5.rectF
            r5.calculateCloseIconBounds(r7, r0)
            android.graphics.RectF r7 = r5.rectF
            float r7 = r7.left
            android.graphics.RectF r0 = r5.rectF
            float r0 = r0.top
            r6.translate(r7, r0)
            android.graphics.drawable.Drawable r1 = r5.closeIcon
            android.graphics.RectF r2 = r5.rectF
            float r2 = r2.width()
            int r2 = (int) r2
            android.graphics.RectF r3 = r5.rectF
            float r3 = r3.height()
            int r3 = (int) r3
            r4 = 0
            r1.setBounds(r4, r4, r2, r3)
            android.graphics.drawable.Drawable r1 = r5.closeIcon
            r1.draw(r6)
            float r7 = -r7
            float r0 = -r0
            r6.translate(r7, r0)
        L34:
            return
    }

    private void drawCompatRipple(android.graphics.Canvas r3, android.graphics.Rect r4) {
            r2 = this;
            android.graphics.Paint r0 = r2.chipPaint
            int r1 = r2.currentCompatRippleColor
            r0.setColor(r1)
            android.graphics.Paint r0 = r2.chipPaint
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.FILL
            r0.setStyle(r1)
            android.graphics.RectF r0 = r2.rectF
            r0.set(r4)
            android.graphics.RectF r4 = r2.rectF
            float r0 = r2.chipCornerRadius
            android.graphics.Paint r1 = r2.chipPaint
            r3.drawRoundRect(r4, r0, r0, r1)
            return
    }

    private void drawDebug(android.graphics.Canvas r10, android.graphics.Rect r11) {
            r9 = this;
            android.graphics.Paint r0 = r9.debugPaint
            if (r0 == 0) goto L85
            r1 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r2 = 127(0x7f, float:1.78E-43)
            int r1 = android.support.v4.graphics.ColorUtils.setAlphaComponent(r1, r2)
            r0.setColor(r1)
            android.graphics.Paint r0 = r9.debugPaint
            r10.drawRect(r11, r0)
            boolean r0 = r9.showsChipIcon()
            if (r0 != 0) goto L20
            boolean r0 = r9.showsCheckedIcon()
            if (r0 == 0) goto L2c
        L20:
            android.graphics.RectF r0 = r9.rectF
            r9.calculateChipIconBounds(r11, r0)
            android.graphics.RectF r0 = r9.rectF
            android.graphics.Paint r1 = r9.debugPaint
            r10.drawRect(r0, r1)
        L2c:
            java.lang.CharSequence r0 = r9.unicodeWrappedText
            if (r0 == 0) goto L44
            int r0 = r11.left
            float r4 = (float) r0
            float r5 = r11.exactCenterY()
            int r0 = r11.right
            float r6 = (float) r0
            float r7 = r11.exactCenterY()
            android.graphics.Paint r8 = r9.debugPaint
            r3 = r10
            r3.drawLine(r4, r5, r6, r7, r8)
        L44:
            boolean r0 = r9.showsCloseIcon()
            if (r0 == 0) goto L56
            android.graphics.RectF r0 = r9.rectF
            r9.calculateCloseIconBounds(r11, r0)
            android.graphics.RectF r0 = r9.rectF
            android.graphics.Paint r1 = r9.debugPaint
            r10.drawRect(r0, r1)
        L56:
            android.graphics.Paint r0 = r9.debugPaint
            r1 = -65536(0xffffffffffff0000, float:NaN)
            int r1 = android.support.v4.graphics.ColorUtils.setAlphaComponent(r1, r2)
            r0.setColor(r1)
            android.graphics.RectF r0 = r9.rectF
            r9.calculateChipTouchBounds(r11, r0)
            android.graphics.RectF r0 = r9.rectF
            android.graphics.Paint r1 = r9.debugPaint
            r10.drawRect(r0, r1)
            android.graphics.Paint r0 = r9.debugPaint
            r1 = -16711936(0xffffffffff00ff00, float:-1.7146522E38)
            int r1 = android.support.v4.graphics.ColorUtils.setAlphaComponent(r1, r2)
            r0.setColor(r1)
            android.graphics.RectF r0 = r9.rectF
            r9.calculateCloseIconTouchBounds(r11, r0)
            android.graphics.RectF r11 = r9.rectF
            android.graphics.Paint r0 = r9.debugPaint
            r10.drawRect(r11, r0)
        L85:
            return
    }

    private void drawText(android.graphics.Canvas r10, android.graphics.Rect r11) {
            r9 = this;
            java.lang.CharSequence r0 = r9.unicodeWrappedText
            if (r0 == 0) goto L7d
            android.graphics.PointF r0 = r9.pointF
            android.graphics.Paint$Align r0 = r9.calculateTextOriginAndAlignment(r11, r0)
            android.graphics.RectF r1 = r9.rectF
            r9.calculateTextBounds(r11, r1)
            android.support.design.resources.TextAppearance r11 = r9.textAppearance
            if (r11 == 0) goto L26
            android.text.TextPaint r11 = r9.textPaint
            int[] r1 = r9.getState()
            r11.drawableState = r1
            android.support.design.resources.TextAppearance r11 = r9.textAppearance
            android.content.Context r1 = r9.context
            android.text.TextPaint r2 = r9.textPaint
            android.support.v4.content.res.ResourcesCompat$FontCallback r3 = r9.fontCallback
            r11.updateDrawState(r1, r2, r3)
        L26:
            android.text.TextPaint r11 = r9.textPaint
            r11.setTextAlign(r0)
            float r11 = r9.getTextWidth()
            int r11 = java.lang.Math.round(r11)
            android.graphics.RectF r0 = r9.rectF
            float r0 = r0.width()
            int r0 = java.lang.Math.round(r0)
            r1 = 0
            if (r11 <= r0) goto L42
            r11 = 1
            goto L43
        L42:
            r11 = r1
        L43:
            if (r11 == 0) goto L4e
            int r1 = r10.save()
            android.graphics.RectF r0 = r9.rectF
            r10.clipRect(r0)
        L4e:
            java.lang.CharSequence r0 = r9.unicodeWrappedText
            if (r11 == 0) goto L64
            android.text.TextUtils$TruncateAt r2 = r9.truncateAt
            if (r2 == 0) goto L64
            android.text.TextPaint r2 = r9.textPaint
            android.graphics.RectF r3 = r9.rectF
            float r3 = r3.width()
            android.text.TextUtils$TruncateAt r4 = r9.truncateAt
            java.lang.CharSequence r0 = android.text.TextUtils.ellipsize(r0, r2, r3, r4)
        L64:
            r3 = r0
            r4 = 0
            int r5 = r3.length()
            android.graphics.PointF r0 = r9.pointF
            float r6 = r0.x
            android.graphics.PointF r0 = r9.pointF
            float r7 = r0.y
            android.text.TextPaint r8 = r9.textPaint
            r2 = r10
            r2.drawText(r3, r4, r5, r6, r7, r8)
            if (r11 == 0) goto L7d
            r10.restoreToCount(r1)
        L7d:
            return
    }

    private float getTextWidth() {
            r2 = this;
            boolean r0 = r2.textWidthDirty
            if (r0 != 0) goto L7
            float r0 = r2.textWidth
            return r0
        L7:
            java.lang.CharSequence r0 = r2.unicodeWrappedText
            float r0 = r2.calculateTextWidth(r0)
            r2.textWidth = r0
            r1 = 0
            r2.textWidthDirty = r1
            return r0
    }

    private android.graphics.ColorFilter getTintColorFilter() {
            r1 = this;
            android.graphics.ColorFilter r0 = r1.colorFilter
            if (r0 == 0) goto L5
            goto L7
        L5:
            android.graphics.PorterDuffColorFilter r0 = r1.tintFilter
        L7:
            return r0
    }

    private static boolean hasState(int[] r4, int r5) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            int r1 = r4.length
            r2 = r0
        L6:
            if (r2 >= r1) goto L11
            r3 = r4[r2]
            if (r3 != r5) goto Le
            r4 = 1
            return r4
        Le:
            int r2 = r2 + 1
            goto L6
        L11:
            return r0
    }

    private static boolean isStateful(android.content.res.ColorStateList r0) {
            if (r0 == 0) goto La
            boolean r0 = r0.isStateful()
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    private static boolean isStateful(android.graphics.drawable.Drawable r0) {
            if (r0 == 0) goto La
            boolean r0 = r0.isStateful()
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    private static boolean isStateful(android.support.design.resources.TextAppearance r1) {
            if (r1 == 0) goto L10
            android.content.res.ColorStateList r0 = r1.textColor
            if (r0 == 0) goto L10
            android.content.res.ColorStateList r1 = r1.textColor
            boolean r1 = r1.isStateful()
            if (r1 == 0) goto L10
            r1 = 1
            goto L11
        L10:
            r1 = 0
        L11:
            return r1
    }

    private void loadFromAttributes(android.util.AttributeSet r8, int r9, int r10) {
            r7 = this;
            android.content.Context r0 = r7.context
            int[] r2 = android.support.design.R.styleable.Chip
            r6 = 0
            int[] r5 = new int[r6]
            r1 = r8
            r3 = r9
            r4 = r10
            android.content.res.TypedArray r9 = android.support.design.internal.ThemeEnforcement.obtainStyledAttributes(r0, r1, r2, r3, r4, r5)
            android.content.Context r10 = r7.context
            int r0 = android.support.design.R.styleable.Chip_chipBackgroundColor
            android.content.res.ColorStateList r10 = android.support.design.resources.MaterialResources.getColorStateList(r10, r9, r0)
            r7.setChipBackgroundColor(r10)
            int r10 = android.support.design.R.styleable.Chip_chipMinHeight
            r0 = 0
            float r10 = r9.getDimension(r10, r0)
            r7.setChipMinHeight(r10)
            int r10 = android.support.design.R.styleable.Chip_chipCornerRadius
            float r10 = r9.getDimension(r10, r0)
            r7.setChipCornerRadius(r10)
            android.content.Context r10 = r7.context
            int r1 = android.support.design.R.styleable.Chip_chipStrokeColor
            android.content.res.ColorStateList r10 = android.support.design.resources.MaterialResources.getColorStateList(r10, r9, r1)
            r7.setChipStrokeColor(r10)
            int r10 = android.support.design.R.styleable.Chip_chipStrokeWidth
            float r10 = r9.getDimension(r10, r0)
            r7.setChipStrokeWidth(r10)
            android.content.Context r10 = r7.context
            int r1 = android.support.design.R.styleable.Chip_rippleColor
            android.content.res.ColorStateList r10 = android.support.design.resources.MaterialResources.getColorStateList(r10, r9, r1)
            r7.setRippleColor(r10)
            int r10 = android.support.design.R.styleable.Chip_android_text
            java.lang.CharSequence r10 = r9.getText(r10)
            r7.setText(r10)
            android.content.Context r10 = r7.context
            int r1 = android.support.design.R.styleable.Chip_android_textAppearance
            android.support.design.resources.TextAppearance r10 = android.support.design.resources.MaterialResources.getTextAppearance(r10, r9, r1)
            r7.setTextAppearance(r10)
            int r10 = android.support.design.R.styleable.Chip_android_ellipsize
            int r10 = r9.getInt(r10, r6)
            r1 = 1
            if (r10 == r1) goto L7b
            r1 = 2
            if (r10 == r1) goto L75
            r1 = 3
            if (r10 == r1) goto L6f
            goto L80
        L6f:
            android.text.TextUtils$TruncateAt r10 = android.text.TextUtils.TruncateAt.END
            r7.setEllipsize(r10)
            goto L80
        L75:
            android.text.TextUtils$TruncateAt r10 = android.text.TextUtils.TruncateAt.MIDDLE
            r7.setEllipsize(r10)
            goto L80
        L7b:
            android.text.TextUtils$TruncateAt r10 = android.text.TextUtils.TruncateAt.START
            r7.setEllipsize(r10)
        L80:
            int r10 = android.support.design.R.styleable.Chip_chipIconVisible
            boolean r10 = r9.getBoolean(r10, r6)
            r7.setChipIconVisible(r10)
            java.lang.String r10 = "http://schemas.android.com/apk/res-auto"
            if (r8 == 0) goto La6
            java.lang.String r1 = "chipIconEnabled"
            java.lang.String r1 = r8.getAttributeValue(r10, r1)
            if (r1 == 0) goto La6
            java.lang.String r1 = "chipIconVisible"
            java.lang.String r1 = r8.getAttributeValue(r10, r1)
            if (r1 != 0) goto La6
            int r1 = android.support.design.R.styleable.Chip_chipIconEnabled
            boolean r1 = r9.getBoolean(r1, r6)
            r7.setChipIconVisible(r1)
        La6:
            android.content.Context r1 = r7.context
            int r2 = android.support.design.R.styleable.Chip_chipIcon
            android.graphics.drawable.Drawable r1 = android.support.design.resources.MaterialResources.getDrawable(r1, r9, r2)
            r7.setChipIcon(r1)
            android.content.Context r1 = r7.context
            int r2 = android.support.design.R.styleable.Chip_chipIconTint
            android.content.res.ColorStateList r1 = android.support.design.resources.MaterialResources.getColorStateList(r1, r9, r2)
            r7.setChipIconTint(r1)
            int r1 = android.support.design.R.styleable.Chip_chipIconSize
            float r1 = r9.getDimension(r1, r0)
            r7.setChipIconSize(r1)
            int r1 = android.support.design.R.styleable.Chip_closeIconVisible
            boolean r1 = r9.getBoolean(r1, r6)
            r7.setCloseIconVisible(r1)
            if (r8 == 0) goto Le9
            java.lang.String r1 = "closeIconEnabled"
            java.lang.String r1 = r8.getAttributeValue(r10, r1)
            if (r1 == 0) goto Le9
            java.lang.String r1 = "closeIconVisible"
            java.lang.String r1 = r8.getAttributeValue(r10, r1)
            if (r1 != 0) goto Le9
            int r1 = android.support.design.R.styleable.Chip_closeIconEnabled
            boolean r1 = r9.getBoolean(r1, r6)
            r7.setCloseIconVisible(r1)
        Le9:
            android.content.Context r1 = r7.context
            int r2 = android.support.design.R.styleable.Chip_closeIcon
            android.graphics.drawable.Drawable r1 = android.support.design.resources.MaterialResources.getDrawable(r1, r9, r2)
            r7.setCloseIcon(r1)
            android.content.Context r1 = r7.context
            int r2 = android.support.design.R.styleable.Chip_closeIconTint
            android.content.res.ColorStateList r1 = android.support.design.resources.MaterialResources.getColorStateList(r1, r9, r2)
            r7.setCloseIconTint(r1)
            int r1 = android.support.design.R.styleable.Chip_closeIconSize
            float r1 = r9.getDimension(r1, r0)
            r7.setCloseIconSize(r1)
            int r1 = android.support.design.R.styleable.Chip_android_checkable
            boolean r1 = r9.getBoolean(r1, r6)
            r7.setCheckable(r1)
            int r1 = android.support.design.R.styleable.Chip_checkedIconVisible
            boolean r1 = r9.getBoolean(r1, r6)
            r7.setCheckedIconVisible(r1)
            if (r8 == 0) goto L135
            java.lang.String r1 = "checkedIconEnabled"
            java.lang.String r1 = r8.getAttributeValue(r10, r1)
            if (r1 == 0) goto L135
            java.lang.String r1 = "checkedIconVisible"
            java.lang.String r8 = r8.getAttributeValue(r10, r1)
            if (r8 != 0) goto L135
            int r8 = android.support.design.R.styleable.Chip_checkedIconEnabled
            boolean r8 = r9.getBoolean(r8, r6)
            r7.setCheckedIconVisible(r8)
        L135:
            android.content.Context r8 = r7.context
            int r10 = android.support.design.R.styleable.Chip_checkedIcon
            android.graphics.drawable.Drawable r8 = android.support.design.resources.MaterialResources.getDrawable(r8, r9, r10)
            r7.setCheckedIcon(r8)
            android.content.Context r8 = r7.context
            int r10 = android.support.design.R.styleable.Chip_showMotionSpec
            android.support.design.animation.MotionSpec r8 = android.support.design.animation.MotionSpec.createFromAttribute(r8, r9, r10)
            r7.setShowMotionSpec(r8)
            android.content.Context r8 = r7.context
            int r10 = android.support.design.R.styleable.Chip_hideMotionSpec
            android.support.design.animation.MotionSpec r8 = android.support.design.animation.MotionSpec.createFromAttribute(r8, r9, r10)
            r7.setHideMotionSpec(r8)
            int r8 = android.support.design.R.styleable.Chip_chipStartPadding
            float r8 = r9.getDimension(r8, r0)
            r7.setChipStartPadding(r8)
            int r8 = android.support.design.R.styleable.Chip_iconStartPadding
            float r8 = r9.getDimension(r8, r0)
            r7.setIconStartPadding(r8)
            int r8 = android.support.design.R.styleable.Chip_iconEndPadding
            float r8 = r9.getDimension(r8, r0)
            r7.setIconEndPadding(r8)
            int r8 = android.support.design.R.styleable.Chip_textStartPadding
            float r8 = r9.getDimension(r8, r0)
            r7.setTextStartPadding(r8)
            int r8 = android.support.design.R.styleable.Chip_textEndPadding
            float r8 = r9.getDimension(r8, r0)
            r7.setTextEndPadding(r8)
            int r8 = android.support.design.R.styleable.Chip_closeIconStartPadding
            float r8 = r9.getDimension(r8, r0)
            r7.setCloseIconStartPadding(r8)
            int r8 = android.support.design.R.styleable.Chip_closeIconEndPadding
            float r8 = r9.getDimension(r8, r0)
            r7.setCloseIconEndPadding(r8)
            int r8 = android.support.design.R.styleable.Chip_chipEndPadding
            float r8 = r9.getDimension(r8, r0)
            r7.setChipEndPadding(r8)
            int r8 = android.support.design.R.styleable.Chip_android_maxWidth
            r10 = 2147483647(0x7fffffff, float:NaN)
            int r8 = r9.getDimensionPixelSize(r8, r10)
            r7.setMaxWidth(r8)
            r9.recycle()
            return
    }

    private boolean onStateChange(int[] r6, int[] r7) {
            r5 = this;
            boolean r0 = super.onStateChange(r6)
            android.content.res.ColorStateList r1 = r5.chipBackgroundColor
            r2 = 0
            if (r1 == 0) goto L10
            int r3 = r5.currentChipBackgroundColor
            int r1 = r1.getColorForState(r6, r3)
            goto L11
        L10:
            r1 = r2
        L11:
            int r3 = r5.currentChipBackgroundColor
            r4 = 1
            if (r3 == r1) goto L19
            r5.currentChipBackgroundColor = r1
            r0 = r4
        L19:
            android.content.res.ColorStateList r1 = r5.chipStrokeColor
            if (r1 == 0) goto L24
            int r3 = r5.currentChipStrokeColor
            int r1 = r1.getColorForState(r6, r3)
            goto L25
        L24:
            r1 = r2
        L25:
            int r3 = r5.currentChipStrokeColor
            if (r3 == r1) goto L2c
            r5.currentChipStrokeColor = r1
            r0 = r4
        L2c:
            android.content.res.ColorStateList r1 = r5.compatRippleColor
            if (r1 == 0) goto L37
            int r3 = r5.currentCompatRippleColor
            int r1 = r1.getColorForState(r6, r3)
            goto L38
        L37:
            r1 = r2
        L38:
            int r3 = r5.currentCompatRippleColor
            if (r3 == r1) goto L43
            r5.currentCompatRippleColor = r1
            boolean r1 = r5.useCompatRipple
            if (r1 == 0) goto L43
            r0 = r4
        L43:
            android.support.design.resources.TextAppearance r1 = r5.textAppearance
            if (r1 == 0) goto L56
            android.content.res.ColorStateList r1 = r1.textColor
            if (r1 == 0) goto L56
            android.support.design.resources.TextAppearance r1 = r5.textAppearance
            android.content.res.ColorStateList r1 = r1.textColor
            int r3 = r5.currentTextColor
            int r1 = r1.getColorForState(r6, r3)
            goto L57
        L56:
            r1 = r2
        L57:
            int r3 = r5.currentTextColor
            if (r3 == r1) goto L5e
            r5.currentTextColor = r1
            r0 = r4
        L5e:
            int[] r1 = r5.getState()
            r3 = 16842912(0x10100a0, float:2.3694006E-38)
            boolean r1 = hasState(r1, r3)
            if (r1 == 0) goto L71
            boolean r1 = r5.checkable
            if (r1 == 0) goto L71
            r1 = r4
            goto L72
        L71:
            r1 = r2
        L72:
            boolean r3 = r5.currentChecked
            if (r3 == r1) goto L8e
            android.graphics.drawable.Drawable r3 = r5.checkedIcon
            if (r3 == 0) goto L8e
            float r0 = r5.calculateChipIconWidth()
            r5.currentChecked = r1
            float r1 = r5.calculateChipIconWidth()
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 == 0) goto L8b
            r0 = r4
            r1 = r0
            goto L8f
        L8b:
            r1 = r2
            r0 = r4
            goto L8f
        L8e:
            r1 = r2
        L8f:
            android.content.res.ColorStateList r3 = r5.tint
            if (r3 == 0) goto L99
            int r2 = r5.currentTint
            int r2 = r3.getColorForState(r6, r2)
        L99:
            int r3 = r5.currentTint
            if (r3 == r2) goto Laa
            r5.currentTint = r2
            android.content.res.ColorStateList r0 = r5.tint
            android.graphics.PorterDuff$Mode r2 = r5.tintMode
            android.graphics.PorterDuffColorFilter r0 = android.support.design.drawable.DrawableUtils.updateTintFilter(r5, r0, r2)
            r5.tintFilter = r0
            goto Lab
        Laa:
            r4 = r0
        Lab:
            android.graphics.drawable.Drawable r0 = r5.chipIcon
            boolean r0 = isStateful(r0)
            if (r0 == 0) goto Lba
            android.graphics.drawable.Drawable r0 = r5.chipIcon
            boolean r0 = r0.setState(r6)
            r4 = r4 | r0
        Lba:
            android.graphics.drawable.Drawable r0 = r5.checkedIcon
            boolean r0 = isStateful(r0)
            if (r0 == 0) goto Lc9
            android.graphics.drawable.Drawable r0 = r5.checkedIcon
            boolean r6 = r0.setState(r6)
            r4 = r4 | r6
        Lc9:
            android.graphics.drawable.Drawable r6 = r5.closeIcon
            boolean r6 = isStateful(r6)
            if (r6 == 0) goto Ld8
            android.graphics.drawable.Drawable r6 = r5.closeIcon
            boolean r6 = r6.setState(r7)
            r4 = r4 | r6
        Ld8:
            if (r4 == 0) goto Ldd
            r5.invalidateSelf()
        Ldd:
            if (r1 == 0) goto Le2
            r5.onSizeChange()
        Le2:
            return r4
    }

    private boolean showsCheckedIcon() {
            r1 = this;
            boolean r0 = r1.checkedIconVisible
            if (r0 == 0) goto Le
            android.graphics.drawable.Drawable r0 = r1.checkedIcon
            if (r0 == 0) goto Le
            boolean r0 = r1.currentChecked
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    private boolean showsChipIcon() {
            r1 = this;
            boolean r0 = r1.chipIconVisible
            if (r0 == 0) goto La
            android.graphics.drawable.Drawable r0 = r1.chipIcon
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    private boolean showsCloseIcon() {
            r1 = this;
            boolean r0 = r1.closeIconVisible
            if (r0 == 0) goto La
            android.graphics.drawable.Drawable r0 = r1.closeIcon
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    private void unapplyChildDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            if (r2 == 0) goto L6
            r0 = 0
            r2.setCallback(r0)
        L6:
            return
    }

    private void updateCompatRippleColor() {
            r1 = this;
            boolean r0 = r1.useCompatRipple
            if (r0 == 0) goto Lb
            android.content.res.ColorStateList r0 = r1.rippleColor
            android.content.res.ColorStateList r0 = android.support.design.ripple.RippleUtils.convertToRippleDrawableColor(r0)
            goto Lc
        Lb:
            r0 = 0
        Lc:
            r1.compatRippleColor = r0
            return
    }

    float calculateChipIconWidth() {
            r2 = this;
            boolean r0 = r2.showsChipIcon()
            if (r0 != 0) goto Lf
            boolean r0 = r2.showsCheckedIcon()
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            return r0
        Lf:
            float r0 = r2.iconStartPadding
            float r1 = r2.chipIconSize
            float r0 = r0 + r1
            float r1 = r2.iconEndPadding
            float r0 = r0 + r1
            return r0
    }

    android.graphics.Paint.Align calculateTextOriginAndAlignment(android.graphics.Rect r3, android.graphics.PointF r4) {
            r2 = this;
            r0 = 0
            r4.set(r0, r0)
            android.graphics.Paint$Align r0 = android.graphics.Paint.Align.LEFT
            java.lang.CharSequence r1 = r2.unicodeWrappedText
            if (r1 == 0) goto L37
            float r0 = r2.chipStartPadding
            float r1 = r2.calculateChipIconWidth()
            float r0 = r0 + r1
            float r1 = r2.textStartPadding
            float r0 = r0 + r1
            int r1 = android.support.v4.graphics.drawable.DrawableCompat.getLayoutDirection(r2)
            if (r1 != 0) goto L23
            int r1 = r3.left
            float r1 = (float) r1
            float r1 = r1 + r0
            r4.x = r1
            android.graphics.Paint$Align r0 = android.graphics.Paint.Align.LEFT
            goto L2b
        L23:
            int r1 = r3.right
            float r1 = (float) r1
            float r1 = r1 - r0
            r4.x = r1
            android.graphics.Paint$Align r0 = android.graphics.Paint.Align.RIGHT
        L2b:
            int r3 = r3.centerY()
            float r3 = (float) r3
            float r1 = r2.calculateTextCenterFromBaseline()
            float r3 = r3 - r1
            r4.y = r3
        L37:
            return r0
    }

    @Override
    public void draw(android.graphics.Canvas r11) {
            r10 = this;
            android.graphics.Rect r0 = r10.getBounds()
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L4e
            int r1 = r10.getAlpha()
            if (r1 != 0) goto L11
            goto L4e
        L11:
            r1 = 0
            int r2 = r10.alpha
            r3 = 255(0xff, float:3.57E-43)
            if (r2 >= r3) goto L2b
            int r1 = r0.left
            float r5 = (float) r1
            int r1 = r0.top
            float r6 = (float) r1
            int r1 = r0.right
            float r7 = (float) r1
            int r1 = r0.bottom
            float r8 = (float) r1
            int r9 = r10.alpha
            r4 = r11
            int r1 = android.support.design.canvas.CanvasCompat.saveLayerAlpha(r4, r5, r6, r7, r8, r9)
        L2b:
            r10.drawChipBackground(r11, r0)
            r10.drawChipStroke(r11, r0)
            r10.drawCompatRipple(r11, r0)
            r10.drawChipIcon(r11, r0)
            r10.drawCheckedIcon(r11, r0)
            boolean r2 = r10.shouldDrawText
            if (r2 == 0) goto L41
            r10.drawText(r11, r0)
        L41:
            r10.drawCloseIcon(r11, r0)
            r10.drawDebug(r11, r0)
            int r0 = r10.alpha
            if (r0 >= r3) goto L4e
            r11.restoreToCount(r1)
        L4e:
            return
    }

    @Override
    public int getAlpha() {
            r1 = this;
            int r0 = r1.alpha
            return r0
    }

    public android.graphics.drawable.Drawable getCheckedIcon() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.checkedIcon
            return r0
    }

    public android.content.res.ColorStateList getChipBackgroundColor() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.chipBackgroundColor
            return r0
    }

    public float getChipCornerRadius() {
            r1 = this;
            float r0 = r1.chipCornerRadius
            return r0
    }

    public float getChipEndPadding() {
            r1 = this;
            float r0 = r1.chipEndPadding
            return r0
    }

    public android.graphics.drawable.Drawable getChipIcon() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.chipIcon
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r0 = android.support.v4.graphics.drawable.DrawableCompat.unwrap(r0)
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public float getChipIconSize() {
            r1 = this;
            float r0 = r1.chipIconSize
            return r0
    }

    public android.content.res.ColorStateList getChipIconTint() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.chipIconTint
            return r0
    }

    public float getChipMinHeight() {
            r1 = this;
            float r0 = r1.chipMinHeight
            return r0
    }

    public float getChipStartPadding() {
            r1 = this;
            float r0 = r1.chipStartPadding
            return r0
    }

    public android.content.res.ColorStateList getChipStrokeColor() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.chipStrokeColor
            return r0
    }

    public float getChipStrokeWidth() {
            r1 = this;
            float r0 = r1.chipStrokeWidth
            return r0
    }

    public void getChipTouchBounds(android.graphics.RectF r2) {
            r1 = this;
            android.graphics.Rect r0 = r1.getBounds()
            r1.calculateChipTouchBounds(r0, r2)
            return
    }

    public android.graphics.drawable.Drawable getCloseIcon() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.closeIcon
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r0 = android.support.v4.graphics.drawable.DrawableCompat.unwrap(r0)
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public java.lang.CharSequence getCloseIconContentDescription() {
            r1 = this;
            java.lang.CharSequence r0 = r1.closeIconContentDescription
            return r0
    }

    public float getCloseIconEndPadding() {
            r1 = this;
            float r0 = r1.closeIconEndPadding
            return r0
    }

    public float getCloseIconSize() {
            r1 = this;
            float r0 = r1.closeIconSize
            return r0
    }

    public float getCloseIconStartPadding() {
            r1 = this;
            float r0 = r1.closeIconStartPadding
            return r0
    }

    public int[] getCloseIconState() {
            r1 = this;
            int[] r0 = r1.closeIconStateSet
            return r0
    }

    public android.content.res.ColorStateList getCloseIconTint() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.closeIconTint
            return r0
    }

    public void getCloseIconTouchBounds(android.graphics.RectF r2) {
            r1 = this;
            android.graphics.Rect r0 = r1.getBounds()
            r1.calculateCloseIconTouchBounds(r0, r2)
            return
    }

    @Override
    public android.graphics.ColorFilter getColorFilter() {
            r1 = this;
            android.graphics.ColorFilter r0 = r1.colorFilter
            return r0
    }

    public android.text.TextUtils.TruncateAt getEllipsize() {
            r1 = this;
            android.text.TextUtils$TruncateAt r0 = r1.truncateAt
            return r0
    }

    public android.support.design.animation.MotionSpec getHideMotionSpec() {
            r1 = this;
            android.support.design.animation.MotionSpec r0 = r1.hideMotionSpec
            return r0
    }

    public float getIconEndPadding() {
            r1 = this;
            float r0 = r1.iconEndPadding
            return r0
    }

    public float getIconStartPadding() {
            r1 = this;
            float r0 = r1.iconStartPadding
            return r0
    }

    @Override
    public int getIntrinsicHeight() {
            r1 = this;
            float r0 = r1.chipMinHeight
            int r0 = (int) r0
            return r0
    }

    @Override
    public int getIntrinsicWidth() {
            r2 = this;
            float r0 = r2.chipStartPadding
            float r1 = r2.calculateChipIconWidth()
            float r0 = r0 + r1
            float r1 = r2.textStartPadding
            float r0 = r0 + r1
            float r1 = r2.getTextWidth()
            float r0 = r0 + r1
            float r1 = r2.textEndPadding
            float r0 = r0 + r1
            float r1 = r2.calculateCloseIconWidth()
            float r0 = r0 + r1
            float r1 = r2.chipEndPadding
            float r0 = r0 + r1
            int r0 = java.lang.Math.round(r0)
            int r1 = r2.maxWidth
            int r0 = java.lang.Math.min(r0, r1)
            return r0
    }

    public int getMaxWidth() {
            r1 = this;
            int r0 = r1.maxWidth
            return r0
    }

    @Override
    public int getOpacity() {
            r1 = this;
            r0 = -3
            return r0
    }

    @Override
    public void getOutline(android.graphics.Outline r9) {
            r8 = this;
            android.graphics.Rect r0 = r8.getBounds()
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L10
            float r1 = r8.chipCornerRadius
            r9.setRoundRect(r0, r1)
            goto L20
        L10:
            r3 = 0
            r4 = 0
            int r5 = r8.getIntrinsicWidth()
            int r6 = r8.getIntrinsicHeight()
            float r7 = r8.chipCornerRadius
            r2 = r9
            r2.setRoundRect(r3, r4, r5, r6, r7)
        L20:
            int r0 = r8.getAlpha()
            float r0 = (float) r0
            r1 = 1132396544(0x437f0000, float:255.0)
            float r0 = r0 / r1
            r9.setAlpha(r0)
            return
    }

    public android.content.res.ColorStateList getRippleColor() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.rippleColor
            return r0
    }

    public android.support.design.animation.MotionSpec getShowMotionSpec() {
            r1 = this;
            android.support.design.animation.MotionSpec r0 = r1.showMotionSpec
            return r0
    }

    public java.lang.CharSequence getText() {
            r1 = this;
            java.lang.CharSequence r0 = r1.rawText
            return r0
    }

    public android.support.design.resources.TextAppearance getTextAppearance() {
            r1 = this;
            android.support.design.resources.TextAppearance r0 = r1.textAppearance
            return r0
    }

    public float getTextEndPadding() {
            r1 = this;
            float r0 = r1.textEndPadding
            return r0
    }

    public float getTextStartPadding() {
            r1 = this;
            float r0 = r1.textStartPadding
            return r0
    }

    public boolean getUseCompatRipple() {
            r1 = this;
            boolean r0 = r1.useCompatRipple
            return r0
    }

    @Override
    public void invalidateDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            android.graphics.drawable.Drawable$Callback r1 = r0.getCallback()
            if (r1 == 0) goto L9
            r1.invalidateDrawable(r0)
        L9:
            return
    }

    public boolean isCheckable() {
            r1 = this;
            boolean r0 = r1.checkable
            return r0
    }

    @java.lang.Deprecated
    public boolean isCheckedIconEnabled() {
            r1 = this;
            boolean r0 = r1.isCheckedIconVisible()
            return r0
    }

    public boolean isCheckedIconVisible() {
            r1 = this;
            boolean r0 = r1.checkedIconVisible
            return r0
    }

    @java.lang.Deprecated
    public boolean isChipIconEnabled() {
            r1 = this;
            boolean r0 = r1.isChipIconVisible()
            return r0
    }

    public boolean isChipIconVisible() {
            r1 = this;
            boolean r0 = r1.chipIconVisible
            return r0
    }

    @java.lang.Deprecated
    public boolean isCloseIconEnabled() {
            r1 = this;
            boolean r0 = r1.isCloseIconVisible()
            return r0
    }

    public boolean isCloseIconStateful() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.closeIcon
            boolean r0 = isStateful(r0)
            return r0
    }

    public boolean isCloseIconVisible() {
            r1 = this;
            boolean r0 = r1.closeIconVisible
            return r0
    }

    @Override
    public boolean isStateful() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.chipBackgroundColor
            boolean r0 = isStateful(r0)
            if (r0 != 0) goto L45
            android.content.res.ColorStateList r0 = r1.chipStrokeColor
            boolean r0 = isStateful(r0)
            if (r0 != 0) goto L45
            boolean r0 = r1.useCompatRipple
            if (r0 == 0) goto L1c
            android.content.res.ColorStateList r0 = r1.compatRippleColor
            boolean r0 = isStateful(r0)
            if (r0 != 0) goto L45
        L1c:
            android.support.design.resources.TextAppearance r0 = r1.textAppearance
            boolean r0 = isStateful(r0)
            if (r0 != 0) goto L45
            boolean r0 = r1.canShowCheckedIcon()
            if (r0 != 0) goto L45
            android.graphics.drawable.Drawable r0 = r1.chipIcon
            boolean r0 = isStateful(r0)
            if (r0 != 0) goto L45
            android.graphics.drawable.Drawable r0 = r1.checkedIcon
            boolean r0 = isStateful(r0)
            if (r0 != 0) goto L45
            android.content.res.ColorStateList r0 = r1.tint
            boolean r0 = isStateful(r0)
            if (r0 == 0) goto L43
            goto L45
        L43:
            r0 = 0
            goto L46
        L45:
            r0 = 1
        L46:
            return r0
    }

    @Override
    public boolean onLayoutDirectionChanged(int r3) {
            r2 = this;
            boolean r0 = super.onLayoutDirectionChanged(r3)
            boolean r1 = r2.showsChipIcon()
            if (r1 == 0) goto L11
            android.graphics.drawable.Drawable r1 = r2.chipIcon
            boolean r1 = r1.setLayoutDirection(r3)
            r0 = r0 | r1
        L11:
            boolean r1 = r2.showsCheckedIcon()
            if (r1 == 0) goto L1e
            android.graphics.drawable.Drawable r1 = r2.checkedIcon
            boolean r1 = r1.setLayoutDirection(r3)
            r0 = r0 | r1
        L1e:
            boolean r1 = r2.showsCloseIcon()
            if (r1 == 0) goto L2b
            android.graphics.drawable.Drawable r1 = r2.closeIcon
            boolean r3 = r1.setLayoutDirection(r3)
            r0 = r0 | r3
        L2b:
            if (r0 == 0) goto L30
            r2.invalidateSelf()
        L30:
            r3 = 1
            return r3
    }

    @Override
    protected boolean onLevelChange(int r3) {
            r2 = this;
            boolean r0 = super.onLevelChange(r3)
            boolean r1 = r2.showsChipIcon()
            if (r1 == 0) goto L11
            android.graphics.drawable.Drawable r1 = r2.chipIcon
            boolean r1 = r1.setLevel(r3)
            r0 = r0 | r1
        L11:
            boolean r1 = r2.showsCheckedIcon()
            if (r1 == 0) goto L1e
            android.graphics.drawable.Drawable r1 = r2.checkedIcon
            boolean r1 = r1.setLevel(r3)
            r0 = r0 | r1
        L1e:
            boolean r1 = r2.showsCloseIcon()
            if (r1 == 0) goto L2b
            android.graphics.drawable.Drawable r1 = r2.closeIcon
            boolean r3 = r1.setLevel(r3)
            r0 = r0 | r3
        L2b:
            if (r0 == 0) goto L30
            r2.invalidateSelf()
        L30:
            return r0
    }

    protected void onSizeChange() {
            r1 = this;
            java.lang.ref.WeakReference<android.support.design.chip.ChipDrawable$Delegate> r0 = r1.delegate
            java.lang.Object r0 = r0.get()
            android.support.design.chip.ChipDrawable$Delegate r0 = (android.support.design.chip.ChipDrawable.Delegate) r0
            if (r0 == 0) goto Ld
            r0.onChipDrawableSizeChange()
        Ld:
            return
    }

    @Override
    protected boolean onStateChange(int[] r2) {
            r1 = this;
            int[] r0 = r1.getCloseIconState()
            boolean r2 = r1.onStateChange(r2, r0)
            return r2
    }

    @Override
    public void scheduleDrawable(android.graphics.drawable.Drawable r1, java.lang.Runnable r2, long r3) {
            r0 = this;
            android.graphics.drawable.Drawable$Callback r1 = r0.getCallback()
            if (r1 == 0) goto L9
            r1.scheduleDrawable(r0, r2, r3)
        L9:
            return
    }

    @Override
    public void setAlpha(int r2) {
            r1 = this;
            int r0 = r1.alpha
            if (r0 == r2) goto L9
            r1.alpha = r2
            r1.invalidateSelf()
        L9:
            return
    }

    public void setCheckable(boolean r2) {
            r1 = this;
            boolean r0 = r1.checkable
            if (r0 == r2) goto L21
            r1.checkable = r2
            float r0 = r1.calculateChipIconWidth()
            if (r2 != 0) goto L13
            boolean r2 = r1.currentChecked
            if (r2 == 0) goto L13
            r2 = 0
            r1.currentChecked = r2
        L13:
            float r2 = r1.calculateChipIconWidth()
            r1.invalidateSelf()
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L21
            r1.onSizeChange()
        L21:
            return
    }

    public void setCheckableResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            boolean r2 = r0.getBoolean(r2)
            r1.setCheckable(r2)
            return
    }

    public void setCheckedIcon(android.graphics.drawable.Drawable r3) {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.checkedIcon
            if (r0 == r3) goto L22
            float r0 = r2.calculateChipIconWidth()
            r2.checkedIcon = r3
            float r3 = r2.calculateChipIconWidth()
            android.graphics.drawable.Drawable r1 = r2.checkedIcon
            r2.unapplyChildDrawable(r1)
            android.graphics.drawable.Drawable r1 = r2.checkedIcon
            r2.applyChildDrawable(r1)
            r2.invalidateSelf()
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 == 0) goto L22
            r2.onSizeChange()
        L22:
            return
    }

    @java.lang.Deprecated
    public void setCheckedIconEnabled(boolean r1) {
            r0 = this;
            r0.setCheckedIconVisible(r1)
            return
    }

    @java.lang.Deprecated
    public void setCheckedIconEnabledResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            boolean r2 = r0.getBoolean(r2)
            r1.setCheckedIconVisible(r2)
            return
    }

    public void setCheckedIconResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            r1.setCheckedIcon(r2)
            return
    }

    public void setCheckedIconVisible(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            boolean r2 = r0.getBoolean(r2)
            r1.setCheckedIconVisible(r2)
            return
    }

    public void setCheckedIconVisible(boolean r2) {
            r1 = this;
            boolean r0 = r1.checkedIconVisible
            if (r0 == r2) goto L28
            boolean r0 = r1.showsCheckedIcon()
            r1.checkedIconVisible = r2
            boolean r2 = r1.showsCheckedIcon()
            if (r0 == r2) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            if (r0 == 0) goto L28
            if (r2 == 0) goto L1d
            android.graphics.drawable.Drawable r2 = r1.checkedIcon
            r1.applyChildDrawable(r2)
            goto L22
        L1d:
            android.graphics.drawable.Drawable r2 = r1.checkedIcon
            r1.unapplyChildDrawable(r2)
        L22:
            r1.invalidateSelf()
            r1.onSizeChange()
        L28:
            return
    }

    public void setChipBackgroundColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.chipBackgroundColor
            if (r0 == r2) goto Ld
            r1.chipBackgroundColor = r2
            int[] r2 = r1.getState()
            r1.onStateChange(r2)
        Ld:
            return
    }

    public void setChipBackgroundColorResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.ColorStateList r2 = android.support.v7.content.res.AppCompatResources.getColorStateList(r0, r2)
            r1.setChipBackgroundColor(r2)
            return
    }

    public void setChipCornerRadius(float r2) {
            r1 = this;
            float r0 = r1.chipCornerRadius
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lb
            r1.chipCornerRadius = r2
            r1.invalidateSelf()
        Lb:
            return
    }

    public void setChipCornerRadiusResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setChipCornerRadius(r2)
            return
    }

    public void setChipEndPadding(float r2) {
            r1 = this;
            float r0 = r1.chipEndPadding
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Le
            r1.chipEndPadding = r2
            r1.invalidateSelf()
            r1.onSizeChange()
        Le:
            return
    }

    public void setChipEndPaddingResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setChipEndPadding(r2)
            return
    }

    public void setChipIcon(android.graphics.drawable.Drawable r3) {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.getChipIcon()
            if (r0 == r3) goto L34
            float r1 = r2.calculateChipIconWidth()
            if (r3 == 0) goto L15
            android.graphics.drawable.Drawable r3 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r3)
            android.graphics.drawable.Drawable r3 = r3.mutate()
            goto L16
        L15:
            r3 = 0
        L16:
            r2.chipIcon = r3
            float r3 = r2.calculateChipIconWidth()
            r2.unapplyChildDrawable(r0)
            boolean r0 = r2.showsChipIcon()
            if (r0 == 0) goto L2a
            android.graphics.drawable.Drawable r0 = r2.chipIcon
            r2.applyChildDrawable(r0)
        L2a:
            r2.invalidateSelf()
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 == 0) goto L34
            r2.onSizeChange()
        L34:
            return
    }

    @java.lang.Deprecated
    public void setChipIconEnabled(boolean r1) {
            r0 = this;
            r0.setChipIconVisible(r1)
            return
    }

    @java.lang.Deprecated
    public void setChipIconEnabledResource(int r1) {
            r0 = this;
            r0.setChipIconVisible(r1)
            return
    }

    public void setChipIconResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            r1.setChipIcon(r2)
            return
    }

    public void setChipIconSize(float r2) {
            r1 = this;
            float r0 = r1.chipIconSize
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L1a
            float r0 = r1.calculateChipIconWidth()
            r1.chipIconSize = r2
            float r2 = r1.calculateChipIconWidth()
            r1.invalidateSelf()
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L1a
            r1.onSizeChange()
        L1a:
            return
    }

    public void setChipIconSizeResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setChipIconSize(r2)
            return
    }

    public void setChipIconTint(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.chipIconTint
            if (r0 == r2) goto L18
            r1.chipIconTint = r2
            boolean r0 = r1.showsChipIcon()
            if (r0 == 0) goto L11
            android.graphics.drawable.Drawable r0 = r1.chipIcon
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r2)
        L11:
            int[] r2 = r1.getState()
            r1.onStateChange(r2)
        L18:
            return
    }

    public void setChipIconTintResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.ColorStateList r2 = android.support.v7.content.res.AppCompatResources.getColorStateList(r0, r2)
            r1.setChipIconTint(r2)
            return
    }

    public void setChipIconVisible(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            boolean r2 = r0.getBoolean(r2)
            r1.setChipIconVisible(r2)
            return
    }

    public void setChipIconVisible(boolean r2) {
            r1 = this;
            boolean r0 = r1.chipIconVisible
            if (r0 == r2) goto L28
            boolean r0 = r1.showsChipIcon()
            r1.chipIconVisible = r2
            boolean r2 = r1.showsChipIcon()
            if (r0 == r2) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            if (r0 == 0) goto L28
            if (r2 == 0) goto L1d
            android.graphics.drawable.Drawable r2 = r1.chipIcon
            r1.applyChildDrawable(r2)
            goto L22
        L1d:
            android.graphics.drawable.Drawable r2 = r1.chipIcon
            r1.unapplyChildDrawable(r2)
        L22:
            r1.invalidateSelf()
            r1.onSizeChange()
        L28:
            return
    }

    public void setChipMinHeight(float r2) {
            r1 = this;
            float r0 = r1.chipMinHeight
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Le
            r1.chipMinHeight = r2
            r1.invalidateSelf()
            r1.onSizeChange()
        Le:
            return
    }

    public void setChipMinHeightResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setChipMinHeight(r2)
            return
    }

    public void setChipStartPadding(float r2) {
            r1 = this;
            float r0 = r1.chipStartPadding
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Le
            r1.chipStartPadding = r2
            r1.invalidateSelf()
            r1.onSizeChange()
        Le:
            return
    }

    public void setChipStartPaddingResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setChipStartPadding(r2)
            return
    }

    public void setChipStrokeColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.chipStrokeColor
            if (r0 == r2) goto Ld
            r1.chipStrokeColor = r2
            int[] r2 = r1.getState()
            r1.onStateChange(r2)
        Ld:
            return
    }

    public void setChipStrokeColorResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.ColorStateList r2 = android.support.v7.content.res.AppCompatResources.getColorStateList(r0, r2)
            r1.setChipStrokeColor(r2)
            return
    }

    public void setChipStrokeWidth(float r2) {
            r1 = this;
            float r0 = r1.chipStrokeWidth
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L10
            r1.chipStrokeWidth = r2
            android.graphics.Paint r0 = r1.chipPaint
            r0.setStrokeWidth(r2)
            r1.invalidateSelf()
        L10:
            return
    }

    public void setChipStrokeWidthResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setChipStrokeWidth(r2)
            return
    }

    public void setCloseIcon(android.graphics.drawable.Drawable r3) {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.getCloseIcon()
            if (r0 == r3) goto L34
            float r1 = r2.calculateCloseIconWidth()
            if (r3 == 0) goto L15
            android.graphics.drawable.Drawable r3 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r3)
            android.graphics.drawable.Drawable r3 = r3.mutate()
            goto L16
        L15:
            r3 = 0
        L16:
            r2.closeIcon = r3
            float r3 = r2.calculateCloseIconWidth()
            r2.unapplyChildDrawable(r0)
            boolean r0 = r2.showsCloseIcon()
            if (r0 == 0) goto L2a
            android.graphics.drawable.Drawable r0 = r2.closeIcon
            r2.applyChildDrawable(r0)
        L2a:
            r2.invalidateSelf()
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 == 0) goto L34
            r2.onSizeChange()
        L34:
            return
    }

    public void setCloseIconContentDescription(java.lang.CharSequence r2) {
            r1 = this;
            java.lang.CharSequence r0 = r1.closeIconContentDescription
            if (r0 == r2) goto L11
            android.support.v4.text.BidiFormatter r0 = android.support.v4.text.BidiFormatter.getInstance()
            java.lang.CharSequence r2 = r0.unicodeWrap(r2)
            r1.closeIconContentDescription = r2
            r1.invalidateSelf()
        L11:
            return
    }

    @java.lang.Deprecated
    public void setCloseIconEnabled(boolean r1) {
            r0 = this;
            r0.setCloseIconVisible(r1)
            return
    }

    @java.lang.Deprecated
    public void setCloseIconEnabledResource(int r1) {
            r0 = this;
            r0.setCloseIconVisible(r1)
            return
    }

    public void setCloseIconEndPadding(float r2) {
            r1 = this;
            float r0 = r1.closeIconEndPadding
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L14
            r1.closeIconEndPadding = r2
            r1.invalidateSelf()
            boolean r2 = r1.showsCloseIcon()
            if (r2 == 0) goto L14
            r1.onSizeChange()
        L14:
            return
    }

    public void setCloseIconEndPaddingResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setCloseIconEndPadding(r2)
            return
    }

    public void setCloseIconResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            r1.setCloseIcon(r2)
            return
    }

    public void setCloseIconSize(float r2) {
            r1 = this;
            float r0 = r1.closeIconSize
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L14
            r1.closeIconSize = r2
            r1.invalidateSelf()
            boolean r2 = r1.showsCloseIcon()
            if (r2 == 0) goto L14
            r1.onSizeChange()
        L14:
            return
    }

    public void setCloseIconSizeResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setCloseIconSize(r2)
            return
    }

    public void setCloseIconStartPadding(float r2) {
            r1 = this;
            float r0 = r1.closeIconStartPadding
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L14
            r1.closeIconStartPadding = r2
            r1.invalidateSelf()
            boolean r2 = r1.showsCloseIcon()
            if (r2 == 0) goto L14
            r1.onSizeChange()
        L14:
            return
    }

    public void setCloseIconStartPaddingResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setCloseIconStartPadding(r2)
            return
    }

    public boolean setCloseIconState(int[] r2) {
            r1 = this;
            int[] r0 = r1.closeIconStateSet
            boolean r0 = java.util.Arrays.equals(r0, r2)
            if (r0 != 0) goto L19
            r1.closeIconStateSet = r2
            boolean r0 = r1.showsCloseIcon()
            if (r0 == 0) goto L19
            int[] r0 = r1.getState()
            boolean r2 = r1.onStateChange(r0, r2)
            return r2
        L19:
            r2 = 0
            return r2
    }

    public void setCloseIconTint(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.closeIconTint
            if (r0 == r2) goto L18
            r1.closeIconTint = r2
            boolean r0 = r1.showsCloseIcon()
            if (r0 == 0) goto L11
            android.graphics.drawable.Drawable r0 = r1.closeIcon
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r2)
        L11:
            int[] r2 = r1.getState()
            r1.onStateChange(r2)
        L18:
            return
    }

    public void setCloseIconTintResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.ColorStateList r2 = android.support.v7.content.res.AppCompatResources.getColorStateList(r0, r2)
            r1.setCloseIconTint(r2)
            return
    }

    public void setCloseIconVisible(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            boolean r2 = r0.getBoolean(r2)
            r1.setCloseIconVisible(r2)
            return
    }

    public void setCloseIconVisible(boolean r2) {
            r1 = this;
            boolean r0 = r1.closeIconVisible
            if (r0 == r2) goto L28
            boolean r0 = r1.showsCloseIcon()
            r1.closeIconVisible = r2
            boolean r2 = r1.showsCloseIcon()
            if (r0 == r2) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            if (r0 == 0) goto L28
            if (r2 == 0) goto L1d
            android.graphics.drawable.Drawable r2 = r1.closeIcon
            r1.applyChildDrawable(r2)
            goto L22
        L1d:
            android.graphics.drawable.Drawable r2 = r1.closeIcon
            r1.unapplyChildDrawable(r2)
        L22:
            r1.invalidateSelf()
            r1.onSizeChange()
        L28:
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r2) {
            r1 = this;
            android.graphics.ColorFilter r0 = r1.colorFilter
            if (r0 == r2) goto L9
            r1.colorFilter = r2
            r1.invalidateSelf()
        L9:
            return
    }

    public void setDelegate(android.support.design.chip.ChipDrawable.Delegate r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.delegate = r0
            return
    }

    public void setEllipsize(android.text.TextUtils.TruncateAt r1) {
            r0 = this;
            r0.truncateAt = r1
            return
    }

    public void setHideMotionSpec(android.support.design.animation.MotionSpec r1) {
            r0 = this;
            r0.hideMotionSpec = r1
            return
    }

    public void setHideMotionSpecResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.support.design.animation.MotionSpec r2 = android.support.design.animation.MotionSpec.createFromResource(r0, r2)
            r1.setHideMotionSpec(r2)
            return
    }

    public void setIconEndPadding(float r2) {
            r1 = this;
            float r0 = r1.iconEndPadding
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L1a
            float r0 = r1.calculateChipIconWidth()
            r1.iconEndPadding = r2
            float r2 = r1.calculateChipIconWidth()
            r1.invalidateSelf()
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L1a
            r1.onSizeChange()
        L1a:
            return
    }

    public void setIconEndPaddingResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setIconEndPadding(r2)
            return
    }

    public void setIconStartPadding(float r2) {
            r1 = this;
            float r0 = r1.iconStartPadding
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L1a
            float r0 = r1.calculateChipIconWidth()
            r1.iconStartPadding = r2
            float r2 = r1.calculateChipIconWidth()
            r1.invalidateSelf()
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L1a
            r1.onSizeChange()
        L1a:
            return
    }

    public void setIconStartPaddingResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setIconStartPadding(r2)
            return
    }

    public void setMaxWidth(int r1) {
            r0 = this;
            r0.maxWidth = r1
            return
    }

    public void setRippleColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.rippleColor
            if (r0 == r2) goto L10
            r1.rippleColor = r2
            r1.updateCompatRippleColor()
            int[] r2 = r1.getState()
            r1.onStateChange(r2)
        L10:
            return
    }

    public void setRippleColorResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.ColorStateList r2 = android.support.v7.content.res.AppCompatResources.getColorStateList(r0, r2)
            r1.setRippleColor(r2)
            return
    }

    void setShouldDrawText(boolean r1) {
            r0 = this;
            r0.shouldDrawText = r1
            return
    }

    public void setShowMotionSpec(android.support.design.animation.MotionSpec r1) {
            r0 = this;
            r0.showMotionSpec = r1
            return
    }

    public void setShowMotionSpecResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.support.design.animation.MotionSpec r2 = android.support.design.animation.MotionSpec.createFromResource(r0, r2)
            r1.setShowMotionSpec(r2)
            return
    }

    public void setText(java.lang.CharSequence r2) {
            r1 = this;
            if (r2 != 0) goto L4
            java.lang.String r2 = ""
        L4:
            java.lang.CharSequence r0 = r1.rawText
            if (r0 == r2) goto L1d
            r1.rawText = r2
            android.support.v4.text.BidiFormatter r0 = android.support.v4.text.BidiFormatter.getInstance()
            java.lang.CharSequence r2 = r0.unicodeWrap(r2)
            r1.unicodeWrappedText = r2
            r2 = 1
            r1.textWidthDirty = r2
            r1.invalidateSelf()
            r1.onSizeChange()
        L1d:
            return
    }

    public void setTextAppearance(android.support.design.resources.TextAppearance r4) {
            r3 = this;
            android.support.design.resources.TextAppearance r0 = r3.textAppearance
            if (r0 == r4) goto L1e
            r3.textAppearance = r4
            if (r4 == 0) goto L14
            android.content.Context r0 = r3.context
            android.text.TextPaint r1 = r3.textPaint
            android.support.v4.content.res.ResourcesCompat$FontCallback r2 = r3.fontCallback
            r4.updateMeasureState(r0, r1, r2)
            r4 = 1
            r3.textWidthDirty = r4
        L14:
            int[] r4 = r3.getState()
            r3.onStateChange(r4)
            r3.onSizeChange()
        L1e:
            return
    }

    public void setTextAppearanceResource(int r3) {
            r2 = this;
            android.support.design.resources.TextAppearance r0 = new android.support.design.resources.TextAppearance
            android.content.Context r1 = r2.context
            r0.<init>(r1, r3)
            r2.setTextAppearance(r0)
            return
    }

    public void setTextEndPadding(float r2) {
            r1 = this;
            float r0 = r1.textEndPadding
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Le
            r1.textEndPadding = r2
            r1.invalidateSelf()
            r1.onSizeChange()
        Le:
            return
    }

    public void setTextEndPaddingResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setTextEndPadding(r2)
            return
    }

    public void setTextResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            java.lang.String r2 = r0.getString(r2)
            r1.setText(r2)
            return
    }

    public void setTextStartPadding(float r2) {
            r1 = this;
            float r0 = r1.textStartPadding
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Le
            r1.textStartPadding = r2
            r1.invalidateSelf()
            r1.onSizeChange()
        Le:
            return
    }

    public void setTextStartPaddingResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.context
            android.content.res.Resources r0 = r0.getResources()
            float r2 = r0.getDimension(r2)
            r1.setTextStartPadding(r2)
            return
    }

    @Override
    public void setTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.tint
            if (r0 == r2) goto Ld
            r1.tint = r2
            int[] r2 = r1.getState()
            r1.onStateChange(r2)
        Ld:
            return
    }

    @Override
    public void setTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.tintMode
            if (r0 == r2) goto L11
            r1.tintMode = r2
            android.content.res.ColorStateList r0 = r1.tint
            android.graphics.PorterDuffColorFilter r2 = android.support.design.drawable.DrawableUtils.updateTintFilter(r1, r0, r2)
            r1.tintFilter = r2
            r1.invalidateSelf()
        L11:
            return
    }

    public void setUseCompatRipple(boolean r2) {
            r1 = this;
            boolean r0 = r1.useCompatRipple
            if (r0 == r2) goto L10
            r1.useCompatRipple = r2
            r1.updateCompatRippleColor()
            int[] r2 = r1.getState()
            r1.onStateChange(r2)
        L10:
            return
    }

    @Override
    public boolean setVisible(boolean r3, boolean r4) {
            r2 = this;
            boolean r0 = super.setVisible(r3, r4)
            boolean r1 = r2.showsChipIcon()
            if (r1 == 0) goto L11
            android.graphics.drawable.Drawable r1 = r2.chipIcon
            boolean r1 = r1.setVisible(r3, r4)
            r0 = r0 | r1
        L11:
            boolean r1 = r2.showsCheckedIcon()
            if (r1 == 0) goto L1e
            android.graphics.drawable.Drawable r1 = r2.checkedIcon
            boolean r1 = r1.setVisible(r3, r4)
            r0 = r0 | r1
        L1e:
            boolean r1 = r2.showsCloseIcon()
            if (r1 == 0) goto L2b
            android.graphics.drawable.Drawable r1 = r2.closeIcon
            boolean r3 = r1.setVisible(r3, r4)
            r0 = r0 | r3
        L2b:
            if (r0 == 0) goto L30
            r2.invalidateSelf()
        L30:
            return r0
    }

    boolean shouldDrawText() {
            r1 = this;
            boolean r0 = r1.shouldDrawText
            return r0
    }

    @Override
    public void unscheduleDrawable(android.graphics.drawable.Drawable r1, java.lang.Runnable r2) {
            r0 = this;
            android.graphics.drawable.Drawable$Callback r1 = r0.getCallback()
            if (r1 == 0) goto L9
            r1.unscheduleDrawable(r0, r2)
        L9:
            return
    }
}
