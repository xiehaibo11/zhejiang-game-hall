package android.support.v7.widget;

import android.R;
import android.content.Context;
import android.support.annotation.DrawableRes;
import android.support.v4.widget.TextViewCompat;
import android.support.v7.content.res.AppCompatResources;
import android.util.AttributeSet;
import android.view.ActionMode;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputConnection;
import android.widget.CheckedTextView;

public class AppCompatCheckedTextView extends CheckedTextView {
    private static final int[] TINT_ATTRS = null;
    private final AppCompatTextHelper mTextHelper;

    static {
        TINT_ATTRS = new int[]{R.attr.checkMark};
    }

    public AppCompatCheckedTextView(Context r2) {
        this(r2, null);
    }

    public AppCompatCheckedTextView(Context r2, AttributeSet r3) {
        this(r2, r3, R.attr.checkedTextViewStyle);
    }

    public AppCompatCheckedTextView(Context r3, AttributeSet r4, int r5) {
        super(TintContextWrapper.wrap(r3), r4, r5);
        this.mTextHelper = new AppCompatTextHelper(this);
        this.mTextHelper.loadFromAttributes(r4, r5);
        this.mTextHelper.applyCompoundDrawablesTints();
        TintTypedArray r32 = TintTypedArray.obtainStyledAttributes(getContext(), r4, TINT_ATTRS, r5, 0);
        setCheckMarkDrawable(r32.getDrawable(0));
        r32.recycle();
    }

    @Override
    public void setCheckMarkDrawable(@DrawableRes int r2) {
        setCheckMarkDrawable(AppCompatResources.getDrawable(getContext(), r2));
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
        AppCompatTextHelper r0 = this.mTextHelper;
        if (r0 == null) goto L6;
        r0.applyCompoundDrawablesTints();
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
