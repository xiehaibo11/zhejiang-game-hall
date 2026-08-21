package android.support.v7.widget;

import android.R;
import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.support.annotation.DrawableRes;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.view.TintableBackgroundView;
import android.support.v4.widget.TextViewCompat;
import android.support.v7.content.res.AppCompatResources;
import android.util.AttributeSet;
import android.view.ActionMode;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputConnection;
import android.widget.AutoCompleteTextView;

public class AppCompatAutoCompleteTextView extends AutoCompleteTextView implements TintableBackgroundView {
    private static final int[] TINT_ATTRS = null;
    private final AppCompatBackgroundHelper mBackgroundTintHelper;
    private final AppCompatTextHelper mTextHelper;

    static {
        TINT_ATTRS = new int[]{R.attr.popupBackground};
    }

    public AppCompatAutoCompleteTextView(Context r2) {
        this(r2, null);
    }

    public AppCompatAutoCompleteTextView(Context r2, AttributeSet r3) {
        this(r2, r3, android.support.v7.appcompat.R.attr.autoCompleteTextViewStyle);
    }

    public AppCompatAutoCompleteTextView(Context r3, AttributeSet r4, int r5) {
        super(TintContextWrapper.wrap(r3), r4, r5);
        TintTypedArray r32 = TintTypedArray.obtainStyledAttributes(getContext(), r4, TINT_ATTRS, r5, 0);
        if (r32.hasValue(0) == false) goto L5;
        setDropDownBackgroundDrawable(r32.getDrawable(0));
    L5:
        r32.recycle();
        this.mBackgroundTintHelper = new AppCompatBackgroundHelper(this);
        this.mBackgroundTintHelper.loadFromAttributes(r4, r5);
        this.mTextHelper = new AppCompatTextHelper(this);
        this.mTextHelper.loadFromAttributes(r4, r5);
        this.mTextHelper.applyCompoundDrawablesTints();
    }

    @Override
    public void setDropDownBackgroundResource(@DrawableRes int r2) {
        setDropDownBackgroundDrawable(AppCompatResources.getDrawable(getContext(), r2));
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
    public void setTextAppearance(Context r2, int r3) {
        super.setTextAppearance(r2, r3);
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 == null) goto L6;
        r0.onSetTextAppearance(r2, r3);
        return;
    }

    @Override
    public InputConnection onCreateInputConnection(EditorInfo r2) {
        return AppCompatHintHelper.onCreateInputConnection(super.onCreateInputConnection(r2), r2, this);
    }

    @Override
    public void setCustomSelectionActionModeCallback(ActionMode.Callback r1) {
        super.setCustomSelectionActionModeCallback(TextViewCompat.wrapCustomSelectionActionModeCallback(this, r1));
    }
}
