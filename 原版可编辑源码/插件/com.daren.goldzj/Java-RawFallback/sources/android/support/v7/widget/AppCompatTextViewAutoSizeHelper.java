package android.support.v7.widget;

class AppCompatTextViewAutoSizeHelper {
    private static final int DEFAULT_AUTO_SIZE_GRANULARITY_IN_PX = 1;
    private static final int DEFAULT_AUTO_SIZE_MAX_TEXT_SIZE_IN_SP = 112;
    private static final int DEFAULT_AUTO_SIZE_MIN_TEXT_SIZE_IN_SP = 12;
    private static final java.lang.String TAG = "ACTVAutoSizeHelper";
    private static final android.graphics.RectF TEMP_RECTF = null;
    static final float UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE = -1.0f;
    private static final int VERY_WIDE = 1048576;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.reflect.Method> sTextViewMethodByNameCache;
    private float mAutoSizeMaxTextSizeInPx;
    private float mAutoSizeMinTextSizeInPx;
    private float mAutoSizeStepGranularityInPx;
    private int[] mAutoSizeTextSizesInPx;
    private int mAutoSizeTextType;
    private final android.content.Context mContext;
    private boolean mHasPresetAutoSizeValues;
    private boolean mNeedsAutoSizeText;
    private android.text.TextPaint mTempTextPaint;
    private final android.widget.TextView mTextView;

    static {
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper.TEMP_RECTF = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            android.support.v7.widget.AppCompatTextViewAutoSizeHelper.sTextViewMethodByNameCache = r0
            return
    }

    AppCompatTextViewAutoSizeHelper(android.widget.TextView r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mAutoSizeTextType = r0
            r2.mNeedsAutoSizeText = r0
            r1 = -1082130432(0xffffffffbf800000, float:-1.0)
            r2.mAutoSizeStepGranularityInPx = r1
            r2.mAutoSizeMinTextSizeInPx = r1
            r2.mAutoSizeMaxTextSizeInPx = r1
            int[] r1 = new int[r0]
            r2.mAutoSizeTextSizesInPx = r1
            r2.mHasPresetAutoSizeValues = r0
            r2.mTextView = r3
            android.widget.TextView r3 = r2.mTextView
            android.content.Context r3 = r3.getContext()
            r2.mContext = r3
            return
    }

    private int[] cleanupAutoSizePresetSizes(int[] r7) {
            r6 = this;
            int r0 = r7.length
            if (r0 != 0) goto L4
            return r7
        L4:
            java.util.Arrays.sort(r7)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
            r3 = 0
        Le:
            if (r3 >= r0) goto L28
            r4 = r7[r3]
            if (r4 <= 0) goto L25
            java.lang.Integer r5 = java.lang.Integer.valueOf(r4)
            int r5 = java.util.Collections.binarySearch(r1, r5)
            if (r5 >= 0) goto L25
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r1.add(r4)
        L25:
            int r3 = r3 + 1
            goto Le
        L28:
            int r3 = r1.size()
            if (r0 != r3) goto L2f
            return r7
        L2f:
            int r7 = r1.size()
            int[] r0 = new int[r7]
        L35:
            if (r2 >= r7) goto L46
            java.lang.Object r3 = r1.get(r2)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            r0[r2] = r3
            int r2 = r2 + 1
            goto L35
        L46:
            return r0
    }

    private void clearAutoSizeConfiguration() {
            r2 = this;
            r0 = 0
            r2.mAutoSizeTextType = r0
            r1 = -1082130432(0xffffffffbf800000, float:-1.0)
            r2.mAutoSizeMinTextSizeInPx = r1
            r2.mAutoSizeMaxTextSizeInPx = r1
            r2.mAutoSizeStepGranularityInPx = r1
            int[] r1 = new int[r0]
            r2.mAutoSizeTextSizesInPx = r1
            r2.mNeedsAutoSizeText = r0
            return
    }

    @android.support.annotation.RequiresApi(23)
    private android.text.StaticLayout createStaticLayoutForMeasuring(java.lang.CharSequence r5, android.text.Layout.Alignment r6, int r7, int r8) {
            r4 = this;
            android.widget.TextView r0 = r4.mTextView
            android.text.TextDirectionHeuristic r1 = android.text.TextDirectionHeuristics.FIRSTSTRONG_LTR
            java.lang.String r2 = "getTextDirectionHeuristic"
            java.lang.Object r0 = r4.invokeAndReturnWithDefault(r0, r2, r1)
            android.text.TextDirectionHeuristic r0 = (android.text.TextDirectionHeuristic) r0
            int r1 = r5.length()
            android.text.TextPaint r2 = r4.mTempTextPaint
            r3 = 0
            android.text.StaticLayout$Builder r5 = android.text.StaticLayout.Builder.obtain(r5, r3, r1, r2, r7)
            android.text.StaticLayout$Builder r5 = r5.setAlignment(r6)
            android.widget.TextView r6 = r4.mTextView
            float r6 = r6.getLineSpacingExtra()
            android.widget.TextView r7 = r4.mTextView
            float r7 = r7.getLineSpacingMultiplier()
            android.text.StaticLayout$Builder r5 = r5.setLineSpacing(r6, r7)
            android.widget.TextView r6 = r4.mTextView
            boolean r6 = r6.getIncludeFontPadding()
            android.text.StaticLayout$Builder r5 = r5.setIncludePad(r6)
            android.widget.TextView r6 = r4.mTextView
            int r6 = r6.getBreakStrategy()
            android.text.StaticLayout$Builder r5 = r5.setBreakStrategy(r6)
            android.widget.TextView r6 = r4.mTextView
            int r6 = r6.getHyphenationFrequency()
            android.text.StaticLayout$Builder r5 = r5.setHyphenationFrequency(r6)
            r6 = -1
            if (r8 != r6) goto L4f
            r8 = 2147483647(0x7fffffff, float:NaN)
        L4f:
            android.text.StaticLayout$Builder r5 = r5.setMaxLines(r8)
            android.text.StaticLayout$Builder r5 = r5.setTextDirection(r0)
            android.text.StaticLayout r5 = r5.build()
            return r5
    }

    private android.text.StaticLayout createStaticLayoutForMeasuringPre23(java.lang.CharSequence r12, android.text.Layout.Alignment r13, int r14) {
            r11 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L19
            android.widget.TextView r0 = r11.mTextView
            float r0 = r0.getLineSpacingMultiplier()
            android.widget.TextView r1 = r11.mTextView
            float r1 = r1.getLineSpacingExtra()
            android.widget.TextView r2 = r11.mTextView
            boolean r2 = r2.getIncludeFontPadding()
            goto L53
        L19:
            android.widget.TextView r0 = r11.mTextView
            r1 = 1065353216(0x3f800000, float:1.0)
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            java.lang.String r2 = "getLineSpacingMultiplier"
            java.lang.Object r0 = r11.invokeAndReturnWithDefault(r0, r2, r1)
            java.lang.Float r0 = (java.lang.Float) r0
            float r0 = r0.floatValue()
            android.widget.TextView r1 = r11.mTextView
            r2 = 0
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            java.lang.String r3 = "getLineSpacingExtra"
            java.lang.Object r1 = r11.invokeAndReturnWithDefault(r1, r3, r2)
            java.lang.Float r1 = (java.lang.Float) r1
            float r1 = r1.floatValue()
            android.widget.TextView r2 = r11.mTextView
            r3 = 1
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            java.lang.String r4 = "getIncludeFontPadding"
            java.lang.Object r2 = r11.invokeAndReturnWithDefault(r2, r4, r3)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
        L53:
            r8 = r0
            r9 = r1
            r10 = r2
            android.text.StaticLayout r0 = new android.text.StaticLayout
            android.text.TextPaint r5 = r11.mTempTextPaint
            r3 = r0
            r4 = r12
            r6 = r14
            r7 = r13
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)
            return r0
    }

    private int findLargestTextSizeWhichFits(android.graphics.RectF r6) {
            r5 = this;
            int[] r0 = r5.mAutoSizeTextSizesInPx
            int r0 = r0.length
            if (r0 == 0) goto L29
            r1 = 0
            r2 = 1
            int r0 = r0 - r2
            r1 = 1
            r2 = 0
        La:
            if (r1 > r0) goto L24
            int r2 = r1 + r0
            int r2 = r2 / 2
            int[] r3 = r5.mAutoSizeTextSizesInPx
            r3 = r3[r2]
            boolean r3 = r5.suggestedSizeFitsInSpace(r3, r6)
            if (r3 == 0) goto L20
            int r2 = r2 + 1
            r4 = r2
            r2 = r1
            r1 = r4
            goto La
        L20:
            int r2 = r2 + (-1)
            r0 = r2
            goto La
        L24:
            int[] r6 = r5.mAutoSizeTextSizesInPx
            r6 = r6[r2]
            return r6
        L29:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r0 = "No available text sizes to choose from."
            r6.<init>(r0)
            throw r6
    }

    @android.support.annotation.Nullable
    private java.lang.reflect.Method getTextViewMethod(@android.support.annotation.NonNull java.lang.String r4) {
            r3 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.reflect.Method> r0 = android.support.v7.widget.AppCompatTextViewAutoSizeHelper.sTextViewMethodByNameCache     // Catch: java.lang.Exception -> L1f
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Exception -> L1f
            java.lang.reflect.Method r0 = (java.lang.reflect.Method) r0     // Catch: java.lang.Exception -> L1f
            if (r0 != 0) goto L1e
            java.lang.Class<android.widget.TextView> r0 = android.widget.TextView.class
            r1 = 0
            java.lang.Class[] r1 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L1f
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r4, r1)     // Catch: java.lang.Exception -> L1f
            if (r0 == 0) goto L1e
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.Exception -> L1f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.reflect.Method> r1 = android.support.v7.widget.AppCompatTextViewAutoSizeHelper.sTextViewMethodByNameCache     // Catch: java.lang.Exception -> L1f
            r1.put(r4, r0)     // Catch: java.lang.Exception -> L1f
        L1e:
            return r0
        L1f:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Failed to retrieve TextView#"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "() method"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "ACTVAutoSizeHelper"
            android.util.Log.w(r1, r4, r0)
            r4 = 0
            return r4
    }

    private <T> T invokeAndReturnWithDefault(@android.support.annotation.NonNull java.lang.Object r5, @android.support.annotation.NonNull java.lang.String r6, @android.support.annotation.NonNull T r7) {
            r4 = this;
            r0 = 0
            java.lang.reflect.Method r1 = r4.getTextViewMethod(r6)     // Catch: java.lang.Throwable -> Lc java.lang.Exception -> Le
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lc java.lang.Exception -> Le
            java.lang.Object r7 = r1.invoke(r5, r2)     // Catch: java.lang.Throwable -> Lc java.lang.Exception -> Le
            goto L2b
        Lc:
            r5 = move-exception
            goto L2c
        Le:
            r5 = move-exception
            r0 = 1
            java.lang.String r1 = "ACTVAutoSizeHelper"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc
            r2.<init>()     // Catch: java.lang.Throwable -> Lc
            java.lang.String r3 = "Failed to invoke TextView#"
            r2.append(r3)     // Catch: java.lang.Throwable -> Lc
            r2.append(r6)     // Catch: java.lang.Throwable -> Lc
            java.lang.String r6 = "() method"
            r2.append(r6)     // Catch: java.lang.Throwable -> Lc
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> Lc
            android.util.Log.w(r1, r6, r5)     // Catch: java.lang.Throwable -> Lc
        L2b:
            return r7
        L2c:
            throw r5
    }

    private void setRawTextSize(float r4) {
            r3 = this;
            android.widget.TextView r0 = r3.mTextView
            android.text.TextPaint r0 = r0.getPaint()
            float r0 = r0.getTextSize()
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 == 0) goto L5a
            android.widget.TextView r0 = r3.mTextView
            android.text.TextPaint r0 = r0.getPaint()
            r0.setTextSize(r4)
            int r4 = android.os.Build.VERSION.SDK_INT
            r0 = 18
            r1 = 0
            if (r4 < r0) goto L25
            android.widget.TextView r4 = r3.mTextView
            boolean r4 = r4.isInLayout()
            goto L26
        L25:
            r4 = 0
        L26:
            android.widget.TextView r0 = r3.mTextView
            android.text.Layout r0 = r0.getLayout()
            if (r0 == 0) goto L5a
            r3.mNeedsAutoSizeText = r1
            java.lang.String r0 = "nullLayouts"
            java.lang.reflect.Method r0 = r3.getTextViewMethod(r0)     // Catch: java.lang.Exception -> L40
            if (r0 == 0) goto L48
            android.widget.TextView r2 = r3.mTextView     // Catch: java.lang.Exception -> L40
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L40
            r0.invoke(r2, r1)     // Catch: java.lang.Exception -> L40
            goto L48
        L40:
            r0 = move-exception
            java.lang.String r1 = "ACTVAutoSizeHelper"
            java.lang.String r2 = "Failed to invoke TextView#nullLayouts() method"
            android.util.Log.w(r1, r2, r0)
        L48:
            if (r4 != 0) goto L50
            android.widget.TextView r4 = r3.mTextView
            r4.requestLayout()
            goto L55
        L50:
            android.widget.TextView r4 = r3.mTextView
            r4.forceLayout()
        L55:
            android.widget.TextView r4 = r3.mTextView
            r4.invalidate()
        L5a:
            return
    }

    private boolean setupAutoSizeText() {
            r6 = this;
            boolean r0 = r6.supportsAutoSizeText()
            r1 = 0
            if (r0 == 0) goto L4d
            int r0 = r6.mAutoSizeTextType
            r2 = 1
            if (r0 != r2) goto L4d
            boolean r0 = r6.mHasPresetAutoSizeValues
            if (r0 == 0) goto L15
            int[] r0 = r6.mAutoSizeTextSizesInPx
            int r0 = r0.length
            if (r0 != 0) goto L4a
        L15:
            float r0 = r6.mAutoSizeMinTextSizeInPx
            int r0 = java.lang.Math.round(r0)
            float r0 = (float) r0
            r3 = 1
        L1d:
            float r4 = r6.mAutoSizeStepGranularityInPx
            float r4 = r4 + r0
            int r4 = java.lang.Math.round(r4)
            float r5 = r6.mAutoSizeMaxTextSizeInPx
            int r5 = java.lang.Math.round(r5)
            if (r4 > r5) goto L32
            int r3 = r3 + 1
            float r4 = r6.mAutoSizeStepGranularityInPx
            float r0 = r0 + r4
            goto L1d
        L32:
            int[] r0 = new int[r3]
            float r4 = r6.mAutoSizeMinTextSizeInPx
        L36:
            if (r1 >= r3) goto L44
            int r5 = java.lang.Math.round(r4)
            r0[r1] = r5
            float r5 = r6.mAutoSizeStepGranularityInPx
            float r4 = r4 + r5
            int r1 = r1 + 1
            goto L36
        L44:
            int[] r0 = r6.cleanupAutoSizePresetSizes(r0)
            r6.mAutoSizeTextSizesInPx = r0
        L4a:
            r6.mNeedsAutoSizeText = r2
            goto L4f
        L4d:
            r6.mNeedsAutoSizeText = r1
        L4f:
            boolean r0 = r6.mNeedsAutoSizeText
            return r0
    }

    private void setupAutoSizeUniformPresetSizes(android.content.res.TypedArray r5) {
            r4 = this;
            int r0 = r5.length()
            int[] r1 = new int[r0]
            if (r0 <= 0) goto L1e
            r2 = 0
        L9:
            if (r2 >= r0) goto L15
            r3 = -1
            int r3 = r5.getDimensionPixelSize(r2, r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L9
        L15:
            int[] r5 = r4.cleanupAutoSizePresetSizes(r1)
            r4.mAutoSizeTextSizesInPx = r5
            r4.setupAutoSizeUniformPresetSizesConfiguration()
        L1e:
            return
    }

    private boolean setupAutoSizeUniformPresetSizesConfiguration() {
            r4 = this;
            int[] r0 = r4.mAutoSizeTextSizesInPx
            int r0 = r0.length
            r1 = 0
            r2 = 1
            if (r0 <= 0) goto L9
            r3 = 1
            goto La
        L9:
            r3 = 0
        La:
            r4.mHasPresetAutoSizeValues = r3
            boolean r3 = r4.mHasPresetAutoSizeValues
            if (r3 == 0) goto L23
            r4.mAutoSizeTextType = r2
            int[] r3 = r4.mAutoSizeTextSizesInPx
            r1 = r3[r1]
            float r1 = (float) r1
            r4.mAutoSizeMinTextSizeInPx = r1
            int r0 = r0 - r2
            r0 = r3[r0]
            float r0 = (float) r0
            r4.mAutoSizeMaxTextSizeInPx = r0
            r0 = -1082130432(0xffffffffbf800000, float:-1.0)
            r4.mAutoSizeStepGranularityInPx = r0
        L23:
            boolean r0 = r4.mHasPresetAutoSizeValues
            return r0
    }

    private boolean suggestedSizeFitsInSpace(int r6, android.graphics.RectF r7) {
            r5 = this;
            android.widget.TextView r0 = r5.mTextView
            java.lang.CharSequence r0 = r0.getText()
            android.widget.TextView r1 = r5.mTextView
            android.text.method.TransformationMethod r1 = r1.getTransformationMethod()
            if (r1 == 0) goto L17
            android.widget.TextView r2 = r5.mTextView
            java.lang.CharSequence r1 = r1.getTransformation(r0, r2)
            if (r1 == 0) goto L17
            r0 = r1
        L17:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            r3 = -1
            if (r1 < r2) goto L25
            android.widget.TextView r1 = r5.mTextView
            int r1 = r1.getMaxLines()
            goto L26
        L25:
            r1 = -1
        L26:
            android.text.TextPaint r2 = r5.mTempTextPaint
            if (r2 != 0) goto L32
            android.text.TextPaint r2 = new android.text.TextPaint
            r2.<init>()
            r5.mTempTextPaint = r2
            goto L35
        L32:
            r2.reset()
        L35:
            android.text.TextPaint r2 = r5.mTempTextPaint
            android.widget.TextView r4 = r5.mTextView
            android.text.TextPaint r4 = r4.getPaint()
            r2.set(r4)
            android.text.TextPaint r2 = r5.mTempTextPaint
            float r6 = (float) r6
            r2.setTextSize(r6)
            android.widget.TextView r6 = r5.mTextView
            android.text.Layout$Alignment r2 = android.text.Layout.Alignment.ALIGN_NORMAL
            java.lang.String r4 = "getLayoutAlignment"
            java.lang.Object r6 = r5.invokeAndReturnWithDefault(r6, r4, r2)
            android.text.Layout$Alignment r6 = (android.text.Layout.Alignment) r6
            int r2 = android.os.Build.VERSION.SDK_INT
            r4 = 23
            if (r2 < r4) goto L63
            float r2 = r7.right
            int r2 = java.lang.Math.round(r2)
            android.text.StaticLayout r6 = r5.createStaticLayoutForMeasuring(r0, r6, r2, r1)
            goto L6d
        L63:
            float r2 = r7.right
            int r2 = java.lang.Math.round(r2)
            android.text.StaticLayout r6 = r5.createStaticLayoutForMeasuringPre23(r0, r6, r2)
        L6d:
            r2 = 0
            r4 = 1
            if (r1 == r3) goto L87
            int r3 = r6.getLineCount()
            if (r3 > r1) goto L86
            int r1 = r6.getLineCount()
            int r1 = r1 - r4
            int r1 = r6.getLineEnd(r1)
            int r0 = r0.length()
            if (r1 == r0) goto L87
        L86:
            return r2
        L87:
            int r6 = r6.getHeight()
            float r6 = (float) r6
            float r7 = r7.bottom
            int r6 = (r6 > r7 ? 1 : (r6 == r7 ? 0 : -1))
            if (r6 <= 0) goto L93
            return r2
        L93:
            return r4
    }

    private boolean supportsAutoSizeText() {
            r1 = this;
            android.widget.TextView r0 = r1.mTextView
            boolean r0 = r0 instanceof android.support.v7.widget.AppCompatEditText
            if (r0 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    private void validateAndSetAutoSizeTextTypeUniformConfiguration(float r4, float r5, float r6) throws java.lang.IllegalArgumentException {
            r3 = this;
            java.lang.String r0 = "px) is less or equal to (0px)"
            r1 = 0
            int r2 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r2 <= 0) goto L5f
            int r2 = (r5 > r4 ? 1 : (r5 == r4 ? 0 : -1))
            if (r2 <= 0) goto L36
            int r1 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
            if (r1 <= 0) goto L1c
            r0 = 1
            r3.mAutoSizeTextType = r0
            r3.mAutoSizeMinTextSizeInPx = r4
            r3.mAutoSizeMaxTextSizeInPx = r5
            r3.mAutoSizeStepGranularityInPx = r6
            r4 = 0
            r3.mHasPresetAutoSizeValues = r4
            return
        L1c:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "The auto-size step granularity ("
            r5.append(r1)
            r5.append(r6)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L36:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Maximum auto-size text size ("
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = "px) is less or equal to minimum auto-size "
            r0.append(r5)
            java.lang.String r5 = "text size ("
            r0.append(r5)
            r0.append(r4)
            java.lang.String r4 = "px)"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r6.<init>(r4)
            throw r6
        L5f:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "Minimum auto-size text size ("
            r6.append(r1)
            r6.append(r4)
            r6.append(r0)
            java.lang.String r4 = r6.toString()
            r5.<init>(r4)
            throw r5
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    void autoSizeText() {
            r5 = this;
            boolean r0 = r5.isAutoSizeEnabled()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r5.mNeedsAutoSizeText
            if (r0 == 0) goto L8d
            android.widget.TextView r0 = r5.mTextView
            int r0 = r0.getMeasuredHeight()
            if (r0 <= 0) goto L8c
            android.widget.TextView r0 = r5.mTextView
            int r0 = r0.getMeasuredWidth()
            if (r0 > 0) goto L1c
            goto L8c
        L1c:
            android.widget.TextView r0 = r5.mTextView
            r1 = 0
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r1)
            java.lang.String r3 = "getHorizontallyScrolling"
            java.lang.Object r0 = r5.invokeAndReturnWithDefault(r0, r3, r2)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L34
            r0 = 1048576(0x100000, float:1.469368E-39)
            goto L48
        L34:
            android.widget.TextView r0 = r5.mTextView
            int r0 = r0.getMeasuredWidth()
            android.widget.TextView r2 = r5.mTextView
            int r2 = r2.getTotalPaddingLeft()
            int r0 = r0 - r2
            android.widget.TextView r2 = r5.mTextView
            int r2 = r2.getTotalPaddingRight()
            int r0 = r0 - r2
        L48:
            android.widget.TextView r2 = r5.mTextView
            int r2 = r2.getHeight()
            android.widget.TextView r3 = r5.mTextView
            int r3 = r3.getCompoundPaddingBottom()
            int r2 = r2 - r3
            android.widget.TextView r3 = r5.mTextView
            int r3 = r3.getCompoundPaddingTop()
            int r2 = r2 - r3
            if (r0 <= 0) goto L8c
            if (r2 > 0) goto L61
            goto L8c
        L61:
            android.graphics.RectF r3 = android.support.v7.widget.AppCompatTextViewAutoSizeHelper.TEMP_RECTF
            monitor-enter(r3)
            android.graphics.RectF r4 = android.support.v7.widget.AppCompatTextViewAutoSizeHelper.TEMP_RECTF     // Catch: java.lang.Throwable -> L89
            r4.setEmpty()     // Catch: java.lang.Throwable -> L89
            android.graphics.RectF r4 = android.support.v7.widget.AppCompatTextViewAutoSizeHelper.TEMP_RECTF     // Catch: java.lang.Throwable -> L89
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L89
            r4.right = r0     // Catch: java.lang.Throwable -> L89
            android.graphics.RectF r0 = android.support.v7.widget.AppCompatTextViewAutoSizeHelper.TEMP_RECTF     // Catch: java.lang.Throwable -> L89
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L89
            r0.bottom = r2     // Catch: java.lang.Throwable -> L89
            android.graphics.RectF r0 = android.support.v7.widget.AppCompatTextViewAutoSizeHelper.TEMP_RECTF     // Catch: java.lang.Throwable -> L89
            int r0 = r5.findLargestTextSizeWhichFits(r0)     // Catch: java.lang.Throwable -> L89
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L89
            android.widget.TextView r2 = r5.mTextView     // Catch: java.lang.Throwable -> L89
            float r2 = r2.getTextSize()     // Catch: java.lang.Throwable -> L89
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L87
            r5.setTextSizeInternal(r1, r0)     // Catch: java.lang.Throwable -> L89
        L87:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L89
            goto L8d
        L89:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L89
            throw r0
        L8c:
            return
        L8d:
            r0 = 1
            r5.mNeedsAutoSizeText = r0
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    int getAutoSizeMaxTextSize() {
            r1 = this;
            float r0 = r1.mAutoSizeMaxTextSizeInPx
            int r0 = java.lang.Math.round(r0)
            return r0
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    int getAutoSizeMinTextSize() {
            r1 = this;
            float r0 = r1.mAutoSizeMinTextSizeInPx
            int r0 = java.lang.Math.round(r0)
            return r0
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    int getAutoSizeStepGranularity() {
            r1 = this;
            float r0 = r1.mAutoSizeStepGranularityInPx
            int r0 = java.lang.Math.round(r0)
            return r0
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    int[] getAutoSizeTextAvailableSizes() {
            r1 = this;
            int[] r0 = r1.mAutoSizeTextSizesInPx
            return r0
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    int getAutoSizeTextType() {
            r1 = this;
            int r0 = r1.mAutoSizeTextType
            return r0
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    boolean isAutoSizeEnabled() {
            r1 = this;
            boolean r0 = r1.supportsAutoSizeText()
            if (r0 == 0) goto Lc
            int r0 = r1.mAutoSizeTextType
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    void loadFromAttributes(android.util.AttributeSet r7, int r8) {
            r6 = this;
            android.content.Context r0 = r6.mContext
            int[] r1 = android.support.v7.appcompat.R.styleable.AppCompatTextView
            r2 = 0
            android.content.res.TypedArray r7 = r0.obtainStyledAttributes(r7, r1, r8, r2)
            int r8 = android.support.v7.appcompat.R.styleable.AppCompatTextView_autoSizeTextType
            boolean r8 = r7.hasValue(r8)
            if (r8 == 0) goto L19
            int r8 = android.support.v7.appcompat.R.styleable.AppCompatTextView_autoSizeTextType
            int r8 = r7.getInt(r8, r2)
            r6.mAutoSizeTextType = r8
        L19:
            int r8 = android.support.v7.appcompat.R.styleable.AppCompatTextView_autoSizeStepGranularity
            boolean r8 = r7.hasValue(r8)
            r0 = -1082130432(0xffffffffbf800000, float:-1.0)
            if (r8 == 0) goto L2a
            int r8 = android.support.v7.appcompat.R.styleable.AppCompatTextView_autoSizeStepGranularity
            float r8 = r7.getDimension(r8, r0)
            goto L2c
        L2a:
            r8 = -1082130432(0xffffffffbf800000, float:-1.0)
        L2c:
            int r1 = android.support.v7.appcompat.R.styleable.AppCompatTextView_autoSizeMinTextSize
            boolean r1 = r7.hasValue(r1)
            if (r1 == 0) goto L3b
            int r1 = android.support.v7.appcompat.R.styleable.AppCompatTextView_autoSizeMinTextSize
            float r1 = r7.getDimension(r1, r0)
            goto L3d
        L3b:
            r1 = -1082130432(0xffffffffbf800000, float:-1.0)
        L3d:
            int r3 = android.support.v7.appcompat.R.styleable.AppCompatTextView_autoSizeMaxTextSize
            boolean r3 = r7.hasValue(r3)
            if (r3 == 0) goto L4c
            int r3 = android.support.v7.appcompat.R.styleable.AppCompatTextView_autoSizeMaxTextSize
            float r3 = r7.getDimension(r3, r0)
            goto L4e
        L4c:
            r3 = -1082130432(0xffffffffbf800000, float:-1.0)
        L4e:
            int r4 = android.support.v7.appcompat.R.styleable.AppCompatTextView_autoSizePresetSizes
            boolean r4 = r7.hasValue(r4)
            if (r4 == 0) goto L6c
            int r4 = android.support.v7.appcompat.R.styleable.AppCompatTextView_autoSizePresetSizes
            int r4 = r7.getResourceId(r4, r2)
            if (r4 <= 0) goto L6c
            android.content.res.Resources r5 = r7.getResources()
            android.content.res.TypedArray r4 = r5.obtainTypedArray(r4)
            r6.setupAutoSizeUniformPresetSizes(r4)
            r4.recycle()
        L6c:
            r7.recycle()
            boolean r7 = r6.supportsAutoSizeText()
            if (r7 == 0) goto Laa
            int r7 = r6.mAutoSizeTextType
            r2 = 1
            if (r7 != r2) goto Lac
            boolean r7 = r6.mHasPresetAutoSizeValues
            if (r7 != 0) goto La6
            android.content.Context r7 = r6.mContext
            android.content.res.Resources r7 = r7.getResources()
            android.util.DisplayMetrics r7 = r7.getDisplayMetrics()
            r2 = 2
            int r4 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r4 != 0) goto L93
            r1 = 1094713344(0x41400000, float:12.0)
            float r1 = android.util.TypedValue.applyDimension(r2, r1, r7)
        L93:
            int r4 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r4 != 0) goto L9d
            r3 = 1121976320(0x42e00000, float:112.0)
            float r3 = android.util.TypedValue.applyDimension(r2, r3, r7)
        L9d:
            int r7 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r7 != 0) goto La3
            r8 = 1065353216(0x3f800000, float:1.0)
        La3:
            r6.validateAndSetAutoSizeTextTypeUniformConfiguration(r1, r3, r8)
        La6:
            r6.setupAutoSizeText()
            goto Lac
        Laa:
            r6.mAutoSizeTextType = r2
        Lac:
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    void setAutoSizeTextTypeUniformWithConfiguration(int r2, int r3, int r4, int r5) throws java.lang.IllegalArgumentException {
            r1 = this;
            boolean r0 = r1.supportsAutoSizeText()
            if (r0 == 0) goto L2b
            android.content.Context r0 = r1.mContext
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r2 = (float) r2
            float r2 = android.util.TypedValue.applyDimension(r5, r2, r0)
            float r3 = (float) r3
            float r3 = android.util.TypedValue.applyDimension(r5, r3, r0)
            float r4 = (float) r4
            float r4 = android.util.TypedValue.applyDimension(r5, r4, r0)
            r1.validateAndSetAutoSizeTextTypeUniformConfiguration(r2, r3, r4)
            boolean r2 = r1.setupAutoSizeText()
            if (r2 == 0) goto L2b
            r1.autoSizeText()
        L2b:
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    void setAutoSizeTextTypeUniformWithPresetSizes(@android.support.annotation.NonNull int[] r6, int r7) throws java.lang.IllegalArgumentException {
            r5 = this;
            boolean r0 = r5.supportsAutoSizeText()
            if (r0 == 0) goto L62
            int r0 = r6.length
            r1 = 0
            if (r0 <= 0) goto L57
            int[] r2 = new int[r0]
            if (r7 != 0) goto L13
            int[] r2 = java.util.Arrays.copyOf(r6, r0)
            goto L2f
        L13:
            android.content.Context r3 = r5.mContext
            android.content.res.Resources r3 = r3.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
        L1d:
            if (r1 >= r0) goto L2f
            r4 = r6[r1]
            float r4 = (float) r4
            float r4 = android.util.TypedValue.applyDimension(r7, r4, r3)
            int r4 = java.lang.Math.round(r4)
            r2[r1] = r4
            int r1 = r1 + 1
            goto L1d
        L2f:
            int[] r7 = r5.cleanupAutoSizePresetSizes(r2)
            r5.mAutoSizeTextSizesInPx = r7
            boolean r7 = r5.setupAutoSizeUniformPresetSizesConfiguration()
            if (r7 == 0) goto L3c
            goto L59
        L3c:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "None of the preset sizes is valid: "
            r0.append(r1)
            java.lang.String r6 = java.util.Arrays.toString(r6)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r7.<init>(r6)
            throw r7
        L57:
            r5.mHasPresetAutoSizeValues = r1
        L59:
            boolean r6 = r5.setupAutoSizeText()
            if (r6 == 0) goto L62
            r5.autoSizeText()
        L62:
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    void setAutoSizeTextTypeWithDefaults(int r4) {
            r3 = this;
            boolean r0 = r3.supportsAutoSizeText()
            if (r0 == 0) goto L4b
            if (r4 == 0) goto L48
            r0 = 1
            if (r4 != r0) goto L31
            android.content.Context r4 = r3.mContext
            android.content.res.Resources r4 = r4.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            r0 = 1094713344(0x41400000, float:12.0)
            r1 = 2
            float r0 = android.util.TypedValue.applyDimension(r1, r0, r4)
            r2 = 1121976320(0x42e00000, float:112.0)
            float r4 = android.util.TypedValue.applyDimension(r1, r2, r4)
            r1 = 1065353216(0x3f800000, float:1.0)
            r3.validateAndSetAutoSizeTextTypeUniformConfiguration(r0, r4, r1)
            boolean r4 = r3.setupAutoSizeText()
            if (r4 == 0) goto L4b
            r3.autoSizeText()
            goto L4b
        L31:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown auto-size text type: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L48:
            r3.clearAutoSizeConfiguration()
        L4b:
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    void setTextSizeInternal(int r2, float r3) {
            r1 = this;
            android.content.Context r0 = r1.mContext
            if (r0 != 0) goto L9
            android.content.res.Resources r0 = android.content.res.Resources.getSystem()
            goto Ld
        L9:
            android.content.res.Resources r0 = r0.getResources()
        Ld:
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r2 = android.util.TypedValue.applyDimension(r2, r3, r0)
            r1.setRawTextSize(r2)
            return
    }
}
