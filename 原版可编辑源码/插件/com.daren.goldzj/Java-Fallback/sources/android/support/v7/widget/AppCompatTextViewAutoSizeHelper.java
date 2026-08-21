package android.support.v7.widget;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.RectF;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.v7.appcompat.R;
import android.support.v7.widget.ActivityChooserView;
import android.text.Layout;
import android.text.StaticLayout;
import android.text.TextDirectionHeuristic;
import android.text.TextDirectionHeuristics;
import android.text.TextPaint;
import android.text.method.TransformationMethod;
import android.util.AttributeSet;
import android.util.DisplayMetrics;
import android.util.Log;
import android.util.TypedValue;
import android.widget.TextView;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.concurrent.ConcurrentHashMap;

class AppCompatTextViewAutoSizeHelper {
    private static final int DEFAULT_AUTO_SIZE_GRANULARITY_IN_PX = 1;
    private static final int DEFAULT_AUTO_SIZE_MAX_TEXT_SIZE_IN_SP = 112;
    private static final int DEFAULT_AUTO_SIZE_MIN_TEXT_SIZE_IN_SP = 12;
    private static final String TAG = "ACTVAutoSizeHelper";
    private static final RectF TEMP_RECTF = null;
    static final float UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE = -1.0f;
    private static final int VERY_WIDE = 1048576;
    private static ConcurrentHashMap<String, Method> sTextViewMethodByNameCache;
    private float mAutoSizeMaxTextSizeInPx;
    private float mAutoSizeMinTextSizeInPx;
    private float mAutoSizeStepGranularityInPx;
    private int[] mAutoSizeTextSizesInPx;
    private int mAutoSizeTextType;
    private final Context mContext;
    private boolean mHasPresetAutoSizeValues;
    private boolean mNeedsAutoSizeText;
    private TextPaint mTempTextPaint;
    private final TextView mTextView;

    static {
        TEMP_RECTF = new RectF();
        sTextViewMethodByNameCache = new ConcurrentHashMap();
    }

    AppCompatTextViewAutoSizeHelper(TextView r3) {
        this.mAutoSizeTextType = 0;
        this.mNeedsAutoSizeText = false;
        this.mAutoSizeStepGranularityInPx = UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE;
        this.mAutoSizeMinTextSizeInPx = UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE;
        this.mAutoSizeMaxTextSizeInPx = UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE;
        this.mAutoSizeTextSizesInPx = new int[0];
        this.mHasPresetAutoSizeValues = false;
        this.mTextView = r3;
        this.mContext = this.mTextView.getContext();
    }

    void loadFromAttributes(AttributeSet r7, int r8) {
        TypedArray r72 = this.mContext.obtainStyledAttributes(r7, R.styleable.AppCompatTextView, r8, 0);
        if (r72.hasValue(R.styleable.AppCompatTextView_autoSizeTextType) == false) goto L6;
        this.mAutoSizeTextType = r72.getInt(R.styleable.AppCompatTextView_autoSizeTextType, 0);
    L6:
        if (r72.hasValue(R.styleable.AppCompatTextView_autoSizeStepGranularity) == false) goto L8;
        float r82 = r72.getDimension(R.styleable.AppCompatTextView_autoSizeStepGranularity, UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE);
    L10:
        if (r72.hasValue(R.styleable.AppCompatTextView_autoSizeMinTextSize) == false) goto L12;
        float r1 = r72.getDimension(R.styleable.AppCompatTextView_autoSizeMinTextSize, UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE);
    L14:
        if (r72.hasValue(R.styleable.AppCompatTextView_autoSizeMaxTextSize) == false) goto L16;
        float r3 = r72.getDimension(R.styleable.AppCompatTextView_autoSizeMaxTextSize, UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE);
    L18:
        if (r72.hasValue(R.styleable.AppCompatTextView_autoSizePresetSizes) == false) goto L22;
        int r4 = r72.getResourceId(R.styleable.AppCompatTextView_autoSizePresetSizes, 0);
        if (r4 <= 0) goto L22;
        TypedArray r42 = r72.getResources().obtainTypedArray(r4);
        setupAutoSizeUniformPresetSizes(r42);
        r42.recycle();
    L22:
        r72.recycle();
        if (supportsAutoSizeText() == true) goto L25;
        this.mAutoSizeTextType = 0;
        return;
    L25:
        if (this.mAutoSizeTextType == 1) goto L27;
        return;
    L27:
        if (this.mHasPresetAutoSizeValues == true) goto L38;
        DisplayMetrics r73 = this.mContext.getResources().getDisplayMetrics();
        if (r1 != UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE) goto L32;
        r1 = TypedValue.applyDimension(2, 12.0f, r73);
    L32:
        if (r3 != UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE) goto L35;
        r3 = TypedValue.applyDimension(2, 112.0f, r73);
    L35:
        if (r82 != UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE) goto L37;
        r82 = 1.0f;
    L37:
        validateAndSetAutoSizeTextTypeUniformConfiguration(r1, r3, r82);
    L38:
        setupAutoSizeText();
        return;
    L16:
        r3 = UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE;
        goto L18
    L12:
        r1 = UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE;
        goto L14
    L8:
        r82 = UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE;
        goto L10
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    void setAutoSizeTextTypeWithDefaults(int r4) {
        if (supportsAutoSizeText() == false) goto L14;
        if (r4 != 0) goto L6;
        clearAutoSizeConfiguration();
        return;
    L6:
        if (r4 != 1) goto L11;
        DisplayMetrics r42 = this.mContext.getResources().getDisplayMetrics();
        validateAndSetAutoSizeTextTypeUniformConfiguration(TypedValue.applyDimension(2, 12.0f, r42), TypedValue.applyDimension(2, 112.0f, r42), 1.0f);
        if (setupAutoSizeText() == false) goto L15;
        autoSizeText();
        return;
    L15:
        return;
    L11:
        throw new IllegalArgumentException("Unknown auto-size text type: " + r4);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    void setAutoSizeTextTypeUniformWithConfiguration(int r2, int r3, int r4, int r5) throws IllegalArgumentException {
        if (supportsAutoSizeText() == false) goto L8;
        DisplayMetrics r0 = this.mContext.getResources().getDisplayMetrics();
        validateAndSetAutoSizeTextTypeUniformConfiguration(TypedValue.applyDimension(r5, r2, r0), TypedValue.applyDimension(r5, r3, r0), TypedValue.applyDimension(r5, r4, r0));
        if (setupAutoSizeText() == false) goto L9;
        autoSizeText();
        return;
    L9:
        return;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    void setAutoSizeTextTypeUniformWithPresetSizes(@NonNull int[] r6, int r7) throws IllegalArgumentException {
        if (supportsAutoSizeText() == false) goto L23;
        int r0 = r6.length;
        int r1 = 0;
        if (r0 <= 0) goto L17;
        int[] r2 = new int[r0];
        if (r7 != 0) goto L9;
        r2 = Arrays.copyOf(r6, r0);
    L12:
        this.mAutoSizeTextSizesInPx = cleanupAutoSizePresetSizes(r2);
        if (setupAutoSizeUniformPresetSizesConfiguration() == true) goto L19;
        throw new IllegalArgumentException("None of the preset sizes is valid: " + Arrays.toString(r6));
    L19:
        if (setupAutoSizeText() == false) goto L24;
        autoSizeText();
        return;
    L24:
        return;
    L9:
        DisplayMetrics r3 = this.mContext.getResources().getDisplayMetrics();
    L10:
        if (r1 >= r0) goto L12;
        r2[r1] = Math.round(TypedValue.applyDimension(r7, r6[r1], r3));
        r1 = r1 + 1;
        goto L10
    L17:
        this.mHasPresetAutoSizeValues = false;
        goto L19
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    int getAutoSizeTextType() {
        return this.mAutoSizeTextType;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    int getAutoSizeStepGranularity() {
        return Math.round(this.mAutoSizeStepGranularityInPx);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    int getAutoSizeMinTextSize() {
        return Math.round(this.mAutoSizeMinTextSizeInPx);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    int getAutoSizeMaxTextSize() {
        return Math.round(this.mAutoSizeMaxTextSizeInPx);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    int[] getAutoSizeTextAvailableSizes() {
        return this.mAutoSizeTextSizesInPx;
    }

    private void setupAutoSizeUniformPresetSizes(TypedArray r5) {
        int r0 = r5.length();
        int[] r1 = new int[r0];
        if (r0 <= 0) goto L10;
        int r2 = 0;
    L5:
        if (r2 >= r0) goto L7;
        r1[r2] = r5.getDimensionPixelSize(r2, -1);
        r2 = r2 + 1;
        goto L5
    L7:
        this.mAutoSizeTextSizesInPx = cleanupAutoSizePresetSizes(r1);
        setupAutoSizeUniformPresetSizesConfiguration();
        return;
    }

    private boolean setupAutoSizeUniformPresetSizesConfiguration() {
        if (this.mAutoSizeTextSizesInPx.length <= 0) goto L5;
        boolean r3 = true;
    L6:
        this.mHasPresetAutoSizeValues = r3;
        if (this.mHasPresetAutoSizeValues == false) goto L10;
        this.mAutoSizeTextType = 1;
        int[] r32 = this.mAutoSizeTextSizesInPx;
        this.mAutoSizeMinTextSizeInPx = r32[0];
        this.mAutoSizeMaxTextSizeInPx = r32[r0 - 1];
        this.mAutoSizeStepGranularityInPx = UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE;
    L10:
        return this.mHasPresetAutoSizeValues;
    L5:
        r3 = false;
        goto L6
    }

    private int[] cleanupAutoSizePresetSizes(int[] r7) {
        int r0 = r7.length;
        if (r0 != 0) goto L5;
        return r7;
    L5:
        Arrays.sort(r7);
        ArrayList r1 = new ArrayList();
        int r2 = 0;
        int r3 = 0;
    L6:
        if (r3 >= r0) goto L14;
        int r4 = r7[r3];
        if (r4 <= 0) goto L12;
        if (Collections.binarySearch(r1, Integer.valueOf(r4)) >= 0) goto L12;
        r1.add(Integer.valueOf(r4));
    L12:
        r3 = r3 + 1;
        goto L6
    L14:
        if (r0 != r1.size()) goto L16;
        return r7;
    L16:
        int r72 = r1.size();
        int[] r02 = new int[r72];
    L17:
        if (r2 >= r72) goto L19;
        r02[r2] = ((Integer) r1.get(r2)).intValue();
        r2 = r2 + 1;
        goto L17
    L19:
        return r02;
    }

    private void validateAndSetAutoSizeTextTypeUniformConfiguration(float r4, float r5, float r6) throws IllegalArgumentException {
        if (r4 <= 0.0f) goto L15;
        if (r5 <= r4) goto L13;
        if (r6 <= 0.0f) goto L11;
        this.mAutoSizeTextType = 1;
        this.mAutoSizeMinTextSizeInPx = r4;
        this.mAutoSizeMaxTextSizeInPx = r5;
        this.mAutoSizeStepGranularityInPx = r6;
        this.mHasPresetAutoSizeValues = false;
        return;
    L11:
        throw new IllegalArgumentException("The auto-size step granularity (" + r6 + "px) is less or equal to (0px)");
    L13:
        throw new IllegalArgumentException("Maximum auto-size text size (" + r5 + "px) is less or equal to minimum auto-size text size (" + r4 + "px)");
    L15:
        throw new IllegalArgumentException("Minimum auto-size text size (" + r4 + "px) is less or equal to (0px)");
    }

    private boolean setupAutoSizeText() {
        int r1 = 0;
        if (supportsAutoSizeText() == true) goto L5;
    L19:
        this.mNeedsAutoSizeText = false;
    L21:
        return this.mNeedsAutoSizeText;
    L5:
        if (this.mAutoSizeTextType != 1) goto L19;
        if (this.mHasPresetAutoSizeValues == true) goto L9;
    L10:
        float r0 = Math.round(this.mAutoSizeMinTextSizeInPx);
        int r3 = 1;
    L12:
        if (Math.round(this.mAutoSizeStepGranularityInPx + r0) > Math.round(this.mAutoSizeMaxTextSizeInPx)) goto L14;
        r3 = r3 + 1;
        r0 = r0 + this.mAutoSizeStepGranularityInPx;
        goto L12
    L14:
        int[] r02 = new int[r3];
        float r4 = this.mAutoSizeMinTextSizeInPx;
    L15:
        if (r1 >= r3) goto L17;
        r02[r1] = Math.round(r4);
        r4 = r4 + this.mAutoSizeStepGranularityInPx;
        r1 = r1 + 1;
        goto L15
    L17:
        this.mAutoSizeTextSizesInPx = cleanupAutoSizePresetSizes(r02);
    L18:
        this.mNeedsAutoSizeText = true;
        goto L21
    L9:
        if (this.mAutoSizeTextSizesInPx.length != 0) goto L18;
        goto L10
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    void autoSizeText() {
        if (isAutoSizeEnabled() == true) goto L6;
        return;
    L6:
        if (this.mNeedsAutoSizeText == true) goto L8;
    L31:
        this.mNeedsAutoSizeText = true;
        return;
    L8:
        if (this.mTextView.getMeasuredHeight() > 0) goto L10;
        return;
    L10:
        if (this.mTextView.getMeasuredWidth() > 0) goto L13;
        return;
    L13:
        if (((Boolean) invokeAndReturnWithDefault(this.mTextView, "getHorizontallyScrolling", false)).booleanValue() == false) goto L15;
        int r0 = 1048576;
    L16:
        int r2 = (this.mTextView.getHeight() - this.mTextView.getCompoundPaddingBottom()) - this.mTextView.getCompoundPaddingTop();
        if (r0 <= 0) goto L35;
        if (r2 <= 0) goto L37;
        RectF r3 = TEMP_RECTF;
        monitor-enter(r3);
        TEMP_RECTF.setEmpty();     // Catch: Throwable -> L27
        TEMP_RECTF.right = r0;     // Catch: Throwable -> L27
        TEMP_RECTF.bottom = r2;     // Catch: Throwable -> L27
        float r02 = findLargestTextSizeWhichFits(TEMP_RECTF);     // Catch: Throwable -> L27
        if (r02 == this.mTextView.getTextSize()) goto L25;
        setTextSizeInternal(0, r02);     // Catch: Throwable -> L27
    L25:
        monitor-exit(r3);     // Catch: Throwable -> L27
    L27:
        th = move-exception;
        throw th;
    L37:
        return;
    L35:
        return;
    L15:
        r0 = (this.mTextView.getMeasuredWidth() - this.mTextView.getTotalPaddingLeft()) - this.mTextView.getTotalPaddingRight();
        goto L16
    }

    private void clearAutoSizeConfiguration() {
        this.mAutoSizeTextType = 0;
        this.mAutoSizeMinTextSizeInPx = UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE;
        this.mAutoSizeMaxTextSizeInPx = UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE;
        this.mAutoSizeStepGranularityInPx = UNSET_AUTO_SIZE_UNIFORM_CONFIGURATION_VALUE;
        this.mAutoSizeTextSizesInPx = new int[0];
        this.mNeedsAutoSizeText = false;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    void setTextSizeInternal(int r2, float r3) {
        Context r0 = this.mContext;
        if (r0 != null) goto L5;
        Resources r02 = Resources.getSystem();
    L6:
        setRawTextSize(TypedValue.applyDimension(r2, r3, r02.getDisplayMetrics()));
        return;
    L5:
        r02 = r0.getResources();
        goto L6
    }

    private void setRawTextSize(float r4) {
        if (r4 == this.mTextView.getPaint().getTextSize()) goto L24;
        this.mTextView.getPaint().setTextSize(r4);
        if (Build.VERSION.SDK_INT < 18) goto L7;
        boolean r42 = this.mTextView.isInLayout();
    L9:
        if (this.mTextView.getLayout() == null) goto L25;
        this.mNeedsAutoSizeText = false;
        Method r0 = getTextViewMethod("nullLayouts");     // Catch: Exception -> L15
        if (r0 == null) goto L17;
        r0.invoke(this.mTextView, new Object[0]);     // Catch: Exception -> L15
    L17:
        if (r42 == true) goto L19;
        this.mTextView.requestLayout();
    L20:
        this.mTextView.invalidate();
        return;
    L19:
        this.mTextView.forceLayout();
    L15:
        e = move-exception;
        Log.w(TAG, "Failed to invoke TextView#nullLayouts() method", e);
        goto L17
    L25:
        return;
    L7:
        r42 = false;
        goto L9
    }

    private int findLargestTextSizeWhichFits(RectF r6) {
        int r0 = this.mAutoSizeTextSizesInPx.length;
        if (r0 == 0) goto L13;
        int r02 = r0 - 1;
        int r1 = 1;
        int r2 = 0;
    L5:
        if (r1 > r02) goto L11;
        int r22 = (r1 + r02) / 2;
        if (suggestedSizeFitsInSpace(this.mAutoSizeTextSizesInPx[r22], r6) == true) goto L8;
        r2 = r22 - 1;
        r02 = r2;
        goto L5
    L8:
        int r23 = r22 + 1;
        r2 = r1;
        r1 = r23;
        goto L5
    L11:
        return this.mAutoSizeTextSizesInPx[r2];
    L13:
        throw new IllegalStateException("No available text sizes to choose from.");
    }

    private boolean suggestedSizeFitsInSpace(int r6, RectF r7) {
        CharSequence r0 = this.mTextView.getText();
        TransformationMethod r1 = this.mTextView.getTransformationMethod();
        if (r1 == null) goto L8;
        CharSequence r12 = r1.getTransformation(r0, this.mTextView);
        if (r12 == null) goto L8;
        r0 = r12;
    L8:
        if (Build.VERSION.SDK_INT < 16) goto L10;
        int r13 = this.mTextView.getMaxLines();
    L11:
        TextPaint r2 = this.mTempTextPaint;
        if (r2 != null) goto L14;
        this.mTempTextPaint = new TextPaint();
    L15:
        this.mTempTextPaint.set(this.mTextView.getPaint());
        this.mTempTextPaint.setTextSize(r6);
        Layout.Alignment r62 = (Layout.Alignment) invokeAndReturnWithDefault(this.mTextView, "getLayoutAlignment", Layout.Alignment.ALIGN_NORMAL);
        if (Build.VERSION.SDK_INT < 23) goto L18;
        StaticLayout r63 = createStaticLayoutForMeasuring(r0, r62, Math.round(r7.right), r13);
    L20:
        if (r13 == (-1)) goto L27;
        if (r63.getLineCount() <= r13) goto L24;
    L25:
        return false;
    L24:
        if (r63.getLineEnd(r63.getLineCount() - 1) != r0.length()) goto L25;
    L27:
        if (r63.getHeight() <= r7.bottom) goto L29;
        return false;
    L29:
        return true;
    L18:
        r63 = createStaticLayoutForMeasuringPre23(r0, r62, Math.round(r7.right));
        goto L20
    L14:
        r2.reset();
        goto L15
    L10:
        r13 = -1;
        goto L11
    }

    @RequiresApi(23)
    private StaticLayout createStaticLayoutForMeasuring(CharSequence r5, Layout.Alignment r6, int r7, int r8) {
        TextDirectionHeuristic r0 = (TextDirectionHeuristic) invokeAndReturnWithDefault(this.mTextView, "getTextDirectionHeuristic", TextDirectionHeuristics.FIRSTSTRONG_LTR);
        StaticLayout.Builder r52 = StaticLayout.Builder.obtain(r5, 0, r5.length(), this.mTempTextPaint, r7).setAlignment(r6).setLineSpacing(this.mTextView.getLineSpacingExtra(), this.mTextView.getLineSpacingMultiplier()).setIncludePad(this.mTextView.getIncludeFontPadding()).setBreakStrategy(this.mTextView.getBreakStrategy()).setHyphenationFrequency(this.mTextView.getHyphenationFrequency());
        if (r8 != (-1)) goto L6;
        r8 = ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED;
    L6:
        return r52.setMaxLines(r8).setTextDirection(r0).build();
    }

    private StaticLayout createStaticLayoutForMeasuringPre23(CharSequence r12, Layout.Alignment r13, int r14) {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        float r0 = this.mTextView.getLineSpacingMultiplier();
        float r1 = this.mTextView.getLineSpacingExtra();
        boolean r2 = this.mTextView.getIncludeFontPadding();
    L6:
        TextPaint r5 = this.mTempTextPaint;
        return new StaticLayout(r12, r5, r14, r13, r0, r1, r2);
    L5:
        r0 = ((Float) invokeAndReturnWithDefault(this.mTextView, "getLineSpacingMultiplier", Float.valueOf(1.0f))).floatValue();
        r1 = ((Float) invokeAndReturnWithDefault(this.mTextView, "getLineSpacingExtra", Float.valueOf(0.0f))).floatValue();
        r2 = ((Boolean) invokeAndReturnWithDefault(this.mTextView, "getIncludeFontPadding", true)).booleanValue();
        goto L6
    }

    private <T> T invokeAndReturnWithDefault(@NonNull Object r5, @NonNull String r6, @NonNull T r7) {
    L15:
        return (T) getTextViewMethod(r6).invoke(r5, new Object[0]);
    L7:
        e = move-exception;
        Log.w(TAG, "Failed to invoke TextView#" + r6 + "() method", e);     // Catch: Throwable -> L5
        return r7;
    L5:
        th = move-exception;
        throw th;
    }

    @Nullable
    private Method getTextViewMethod(@NonNull String r4) {
        Method r0 = sTextViewMethodByNameCache.get(r4);     // Catch: Exception -> L8
        if (r0 != null) goto L7;
        r0 = TextView.class.getDeclaredMethod(r4, new Class[0]);     // Catch: Exception -> L8
        if (r0 == null) goto L7;
        r0.setAccessible(true);     // Catch: Exception -> L8
        sTextViewMethodByNameCache.put(r4, r0);     // Catch: Exception -> L8
    L7:
        return r0;
    L8:
        e = move-exception;
        Log.w(TAG, "Failed to retrieve TextView#" + r4 + "() method", e);
        return null;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    boolean isAutoSizeEnabled() {
        if (supportsAutoSizeText() == true) goto L5;
    L7:
        return false;
    L5:
        if (this.mAutoSizeTextType == 0) goto L7;
        return true;
    }

    private boolean supportsAutoSizeText() {
        if ((this.mTextView instanceof AppCompatEditText) == true) goto L5;
        return true;
    L5:
        return false;
    }
}
