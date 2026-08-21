package android.support.v7.widget;

import android.R;
import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.DrawableRes;
import android.support.annotation.IntRange;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.Px;
import android.support.annotation.RestrictTo;
import android.support.v4.text.PrecomputedTextCompat;
import android.support.v4.view.TintableBackgroundView;
import android.support.v4.widget.AutoSizeableTextView;
import android.support.v4.widget.TextViewCompat;
import android.util.AttributeSet;
import android.view.ActionMode;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputConnection;
import android.widget.TextView;
import java.util.concurrent.Future;

public class AppCompatTextView extends TextView implements TintableBackgroundView, AutoSizeableTextView {
    private final AppCompatBackgroundHelper mBackgroundTintHelper;

    @Nullable
    private Future<PrecomputedTextCompat> mPrecomputedTextFuture;
    private final AppCompatTextHelper mTextHelper;

    public AppCompatTextView(Context r2) {
        this(r2, null);
    }

    public AppCompatTextView(Context r2, AttributeSet r3) {
        this(r2, r3, R.attr.textViewStyle);
    }

    public AppCompatTextView(Context r1, AttributeSet r2, int r3) {
        super(TintContextWrapper.wrap(r1), r2, r3);
        this.mBackgroundTintHelper = new AppCompatBackgroundHelper(this);
        this.mBackgroundTintHelper.loadFromAttributes(r2, r3);
        this.mTextHelper = new AppCompatTextHelper(this);
        this.mTextHelper.loadFromAttributes(r2, r3);
        this.mTextHelper.applyCompoundDrawablesTints();
    }

    @Override
    public void setBackgroundResource(@DrawableRes int r2) {
        super.setBackgroundResource(r2);
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 == null) goto L6;
        r0.onSetBackgroundResource(r2);
        return;
    }

    @Override
    public void setBackgroundDrawable(Drawable r2) {
        super.setBackgroundDrawable(r2);
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 == null) goto L6;
        r0.onSetBackgroundDrawable(r2);
        return;
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setSupportBackgroundTintList(@Nullable ColorStateList r2) {
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 == null) goto L6;
        r0.setSupportBackgroundTintList(r2);
        return;
    }

    @Override
    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public ColorStateList getSupportBackgroundTintList() {
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getSupportBackgroundTintList();
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setSupportBackgroundTintMode(@Nullable PorterDuff.Mode r2) {
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 == null) goto L6;
        r0.setSupportBackgroundTintMode(r2);
        return;
    }

    @Override
    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public PorterDuff.Mode getSupportBackgroundTintMode() {
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getSupportBackgroundTintMode();
    }

    @Override
    public void setTextAppearance(Context r2, int r3) {
        super.setTextAppearance(r2, r3);
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 == null) goto L6;
        r0.onSetTextAppearance(r2, r3);
        return;
    }

    @Override
    protected void drawableStateChanged() {
        super.drawableStateChanged();
        AppCompatBackgroundHelper r0 = this.mBackgroundTintHelper;
        if (r0 == null) goto L5;
        r0.applySupportBackgroundTint();
    L5:
        AppCompatTextHelper r02 = this.mTextHelper;
        if (r02 == null) goto L9;
        r02.applyCompoundDrawablesTints();
        return;
    }

    @Override
    protected void onLayout(boolean r7, int r8, int r9, int r10, int r11) {
        super.onLayout(r7, r8, r9, r10, r11);
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 == null) goto L6;
        r0.onLayout(r7, r8, r9, r10, r11);
        return;
    }

    @Override
    public void setTextSize(int r2, float r3) {
        if (PLATFORM_SUPPORTS_AUTOSIZE == false) goto L5;
        super.setTextSize(r2, r3);
        return;
    L5:
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 == null) goto L10;
        r0.setTextSize(r2, r3);
        return;
    }

    @Override
    protected void onTextChanged(CharSequence r1, int r2, int r3, int r4) {
        super.onTextChanged(r1, r2, r3, r4);
        if (this.mTextHelper != null) goto L5;
        return;
    L5:
        if (PLATFORM_SUPPORTS_AUTOSIZE == false) goto L7;
        return;
    L7:
        if (this.mTextHelper.isAutoSizeEnabled() == false) goto L12;
        this.mTextHelper.autoSizeText();
        return;
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setAutoSizeTextTypeWithDefaults(int r2) {
        if (PLATFORM_SUPPORTS_AUTOSIZE == false) goto L5;
        super.setAutoSizeTextTypeWithDefaults(r2);
        return;
    L5:
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 == null) goto L10;
        r0.setAutoSizeTextTypeWithDefaults(r2);
        return;
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setAutoSizeTextTypeUniformWithConfiguration(int r2, int r3, int r4, int r5) throws IllegalArgumentException {
        if (PLATFORM_SUPPORTS_AUTOSIZE == false) goto L5;
        super.setAutoSizeTextTypeUniformWithConfiguration(r2, r3, r4, r5);
        return;
    L5:
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 == null) goto L10;
        r0.setAutoSizeTextTypeUniformWithConfiguration(r2, r3, r4, r5);
        return;
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setAutoSizeTextTypeUniformWithPresetSizes(@NonNull int[] r2, int r3) throws IllegalArgumentException {
        if (PLATFORM_SUPPORTS_AUTOSIZE == false) goto L5;
        super.setAutoSizeTextTypeUniformWithPresetSizes(r2, r3);
        return;
    L5:
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 == null) goto L10;
        r0.setAutoSizeTextTypeUniformWithPresetSizes(r2, r3);
        return;
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int getAutoSizeTextType() {
        if (PLATFORM_SUPPORTS_AUTOSIZE == true) goto L5;
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 != null) goto L11;
        return 0;
    L11:
        return r0.getAutoSizeTextType();
    L5:
        if (super.getAutoSizeTextType() != 1) goto L13;
        return 1;
    L13:
        return 0;
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int getAutoSizeStepGranularity() {
        if (PLATFORM_SUPPORTS_AUTOSIZE == true) goto L5;
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 != null) goto L9;
        return -1;
    L9:
        return r0.getAutoSizeStepGranularity();
    L5:
        return super.getAutoSizeStepGranularity();
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int getAutoSizeMinTextSize() {
        if (PLATFORM_SUPPORTS_AUTOSIZE == true) goto L5;
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 != null) goto L9;
        return -1;
    L9:
        return r0.getAutoSizeMinTextSize();
    L5:
        return super.getAutoSizeMinTextSize();
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int getAutoSizeMaxTextSize() {
        if (PLATFORM_SUPPORTS_AUTOSIZE == true) goto L5;
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 != null) goto L9;
        return -1;
    L9:
        return r0.getAutoSizeMaxTextSize();
    L5:
        return super.getAutoSizeMaxTextSize();
    }

    @Override
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public int[] getAutoSizeTextAvailableSizes() {
        if (PLATFORM_SUPPORTS_AUTOSIZE == true) goto L5;
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 == null) goto L11;
        return r0.getAutoSizeTextAvailableSizes();
    L11:
        return new int[0];
    L5:
        return super.getAutoSizeTextAvailableSizes();
    }

    @Override
    public InputConnection onCreateInputConnection(EditorInfo r2) {
        return AppCompatHintHelper.onCreateInputConnection(super.onCreateInputConnection(r2), r2, this);
    }

    @Override
    public void setFirstBaselineToTopHeight(@IntRange(from = 0) @Px int r3) {
        if (Build.VERSION.SDK_INT < 28) goto L5;
        super.setFirstBaselineToTopHeight(r3);
        return;
    L5:
        TextViewCompat.setFirstBaselineToTopHeight(this, r3);
    }

    @Override
    public void setLastBaselineToBottomHeight(@IntRange(from = 0) @Px int r3) {
        if (Build.VERSION.SDK_INT < 28) goto L5;
        super.setLastBaselineToBottomHeight(r3);
        return;
    L5:
        TextViewCompat.setLastBaselineToBottomHeight(this, r3);
    }

    @Override
    public int getFirstBaselineToTopHeight() {
        return TextViewCompat.getFirstBaselineToTopHeight(this);
    }

    @Override
    public int getLastBaselineToBottomHeight() {
        return TextViewCompat.getLastBaselineToBottomHeight(this);
    }

    @Override
    public void setLineHeight(@IntRange(from = 0) @Px int r1) {
        TextViewCompat.setLineHeight(this, r1);
    }

    @Override
    public void setCustomSelectionActionModeCallback(ActionMode.Callback r1) {
        super.setCustomSelectionActionModeCallback(TextViewCompat.wrapCustomSelectionActionModeCallback(this, r1));
    }

    @NonNull
    public PrecomputedTextCompat.Params getTextMetricsParamsCompat() {
        return TextViewCompat.getTextMetricsParams(this);
    }

    public void setTextMetricsParamsCompat(@NonNull PrecomputedTextCompat.Params r1) {
        TextViewCompat.setTextMetricsParams(this, r1);
    }

    public void setPrecomputedText(@NonNull PrecomputedTextCompat r1) {
        TextViewCompat.setPrecomputedText(this, r1);
    }

    private void consumeTextFutureAndSetBlocking() {
        Future<PrecomputedTextCompat> r0 = this.mPrecomputedTextFuture;
        if (r0 != null) goto L8;
        return;
    L8:
        this.mPrecomputedTextFuture = null;     // Catch: Throwable -> L7
        TextViewCompat.setPrecomputedText(this, r0.get());     // Catch: Throwable -> L7
        return;
    }

    @Override
    public CharSequence getText() {
        consumeTextFutureAndSetBlocking();
        return super.getText();
    }

    public void setTextFuture(@NonNull Future<PrecomputedTextCompat> r1) {
        this.mPrecomputedTextFuture = r1;
        requestLayout();
    }

    @Override
    protected void onMeasure(int r1, int r2) {
        consumeTextFutureAndSetBlocking();
        super.onMeasure(r1, r2);
    }
}
