package android.support.v7.widget;

import android.R;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.database.DataSetObserver;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.DrawableRes;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.view.TintableBackgroundView;
import android.support.v4.view.ViewCompat;
import android.support.v7.content.res.AppCompatResources;
import android.support.v7.view.ContextThemeWrapper;
import android.util.AttributeSet;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.widget.Adapter;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;

public class AppCompatSpinner extends Spinner implements TintableBackgroundView {
    private static final int[] ATTRS_ANDROID_SPINNERMODE = null;
    private static final int MAX_ITEMS_MEASURED = 15;
    private static final int MODE_DIALOG = 0;
    private static final int MODE_DROPDOWN = 1;
    private static final int MODE_THEME = -1;
    private static final String TAG = "AppCompatSpinner";
    private final AppCompatBackgroundHelper mBackgroundTintHelper;
    int mDropDownWidth;
    private ForwardingListener mForwardingListener;
    DropdownPopup mPopup;
    private final Context mPopupContext;
    private final boolean mPopupSet;
    private SpinnerAdapter mTempAdapter;
    final Rect mTempRect;

    private static class DropDownAdapter implements ListAdapter, SpinnerAdapter {
        private SpinnerAdapter mAdapter;
        private ListAdapter mListAdapter;

        @Override
        public int getItemViewType(int r1) {
            return 0;
        }

        @Override
        public int getViewTypeCount() {
            return 1;
        }

        public DropDownAdapter(@Nullable SpinnerAdapter r3, @Nullable Resources.Theme r4) {
            this.mAdapter = r3;
            if ((r3 instanceof ListAdapter) == false) goto L5;
            this.mListAdapter = (ListAdapter) r3;
        L5:
            if (r4 != null) goto L7;
            return;
        L7:
            if (Build.VERSION.SDK_INT < 23) goto L14;
            if ((r3 instanceof android.widget.ThemedSpinnerAdapter) == false) goto L14;
            android.widget.ThemedSpinnerAdapter r32 = (android.widget.ThemedSpinnerAdapter) r3;
            if (r32.getDropDownViewTheme() == r4) goto L20;
            r32.setDropDownViewTheme(r4);
            return;
        L20:
            return;
        L14:
            if ((r3 instanceof ThemedSpinnerAdapter) == false) goto L22;
            ThemedSpinnerAdapter r33 = (ThemedSpinnerAdapter) r3;
            if (r33.getDropDownViewTheme() != null) goto L23;
            r33.setDropDownViewTheme(r4);
            return;
        L23:
            return;
        }

        @Override
        public int getCount() {
            SpinnerAdapter r0 = this.mAdapter;
            if (r0 != null) goto L6;
            return 0;
        L6:
            return r0.getCount();
        }

        @Override
        public Object getItem(int r2) {
            SpinnerAdapter r0 = this.mAdapter;
            if (r0 != null) goto L6;
            return null;
        L6:
            return r0.getItem(r2);
        }

        @Override
        public long getItemId(int r3) {
            SpinnerAdapter r0 = this.mAdapter;
            if (r0 != null) goto L6;
            return -1;
        L6:
            return r0.getItemId(r3);
        }

        @Override
        public View getView(int r1, View r2, ViewGroup r3) {
            return getDropDownView(r1, r2, r3);
        }

        @Override
        public View getDropDownView(int r2, View r3, ViewGroup r4) {
            SpinnerAdapter r0 = this.mAdapter;
            if (r0 != null) goto L6;
            return null;
        L6:
            return r0.getDropDownView(r2, r3, r4);
        }

        @Override
        public boolean hasStableIds() {
            SpinnerAdapter r0 = this.mAdapter;
            if (r0 != null) goto L5;
        L7:
            return false;
        L5:
            if (r0.hasStableIds() == false) goto L7;
            return true;
        }

        @Override
        public void registerDataSetObserver(DataSetObserver r2) {
            SpinnerAdapter r0 = this.mAdapter;
            if (r0 == null) goto L6;
            r0.registerDataSetObserver(r2);
            return;
        }

        @Override
        public void unregisterDataSetObserver(DataSetObserver r2) {
            SpinnerAdapter r0 = this.mAdapter;
            if (r0 == null) goto L6;
            r0.unregisterDataSetObserver(r2);
            return;
        }

        @Override
        public boolean areAllItemsEnabled() {
            ListAdapter r0 = this.mListAdapter;
            if (r0 != null) goto L5;
            return true;
        L5:
            return r0.areAllItemsEnabled();
        }

        @Override
        public boolean isEnabled(int r2) {
            ListAdapter r0 = this.mListAdapter;
            if (r0 != null) goto L5;
            return true;
        L5:
            return r0.isEnabled(r2);
        }

        @Override
        public boolean isEmpty() {
            if (getCount() != 0) goto L5;
            return true;
        L5:
            return false;
        }
    }

    private class DropdownPopup extends ListPopupWindow {
        ListAdapter mAdapter;
        private CharSequence mHintText;
        private final Rect mVisibleRect;
        final AppCompatSpinner this$0;

        static void access$001(DropdownPopup r0) {
            super.show();
        }

        public DropdownPopup(final AppCompatSpinner r1, Context r2, AttributeSet r3, int r4) {
            this.this$0 = r1;
            super(r2, r3, r4);
            this.mVisibleRect = new Rect();
            setAnchorView(r1);
            setModal(true);
            setPromptPosition(0);
            setOnItemClickListener(new 1(this, r1));
        }

        @Override
        public void setAdapter(ListAdapter r1) {
            super.setAdapter(r1);
            this.mAdapter = r1;
        }

        public CharSequence getHintText() {
            return this.mHintText;
        }

        public void setPromptText(CharSequence r1) {
            this.mHintText = r1;
        }

        void computeContentWidth() {
            Drawable r0 = getBackground();
            int r1 = 0;
            if (r0 == null) goto L9;
            r0.getPadding(this.this$0.mTempRect);
            if (ViewUtils.isLayoutRtl(this.this$0) == false) goto L7;
            int r02 = this.this$0.mTempRect.right;
        L8:
            r1 = r02;
        L10:
            int r03 = this.this$0.getPaddingLeft();
            int r2 = this.this$0.getPaddingRight();
            int r3 = this.this$0.getWidth();
            if (this.this$0.mDropDownWidth != (-2)) goto L17;
            int r4 = this.this$0.compatMeasureContentWidth((SpinnerAdapter) this.mAdapter, getBackground());
            int r5 = (this.this$0.getContext().getResources().getDisplayMetrics().widthPixels - this.this$0.mTempRect.left) - this.this$0.mTempRect.right;
            if (r4 <= r5) goto L15;
            r4 = r5;
        L15:
            setContentWidth(Math.max(r4, (r3 - r03) - r2));
        L21:
            if (ViewUtils.isLayoutRtl(this.this$0) == false) goto L23;
            int r12 = r1 + ((r3 - r2) - getWidth());
        L24:
            setHorizontalOffset(r12);
            return;
        L23:
            r12 = r1 + r03;
            goto L24
        L17:
            if (this.this$0.mDropDownWidth != (-1)) goto L19;
            setContentWidth((r3 - r03) - r2);
            goto L21
        L19:
            setContentWidth(this.this$0.mDropDownWidth);
            goto L21
        L7:
            r02 = -this.this$0.mTempRect.left;
            goto L8
        L9:
            Rect r04 = this.this$0.mTempRect;
            this.this$0.mTempRect.right = 0;
            r04.left = 0;
            goto L10
        }

        @Override
        public void show() {
            boolean r0 = isShowing();
            computeContentWidth();
            setInputMethodMode(2);
            super.show();
            getListView().setChoiceMode(1);
            setSelection(this.this$0.getSelectedItemPosition());
            if (r0 == false) goto L5;
            return;
        L5:
            ViewTreeObserver r02 = this.this$0.getViewTreeObserver();
            if (r02 == null) goto L9;
            final ViewTreeObserver.OnGlobalLayoutListener r1 = new 2(this);
            r02.addOnGlobalLayoutListener(r1);
            setOnDismissListener(new 3(this, r1));
            return;
        }

        boolean isVisibleToUser(View r2) {
            if (ViewCompat.isAttachedToWindow(r2) == true) goto L5;
        L7:
            return false;
        L5:
            if (r2.getGlobalVisibleRect(this.mVisibleRect) == false) goto L7;
            return true;
        }
    }

    @Override
    public void setAdapter(Adapter r1) {
        setAdapter((SpinnerAdapter) r1);
    }

    static {
        ATTRS_ANDROID_SPINNERMODE = new int[]{R.attr.spinnerMode};
    }

    public AppCompatSpinner(Context r2) {
        this(r2, null);
    }

    public AppCompatSpinner(Context r3, int r4) {
        this(r3, null, android.support.v7.appcompat.R.attr.spinnerStyle, r4);
    }

    public AppCompatSpinner(Context r2, AttributeSet r3) {
        this(r2, r3, android.support.v7.appcompat.R.attr.spinnerStyle);
    }

    public AppCompatSpinner(Context r2, AttributeSet r3, int r4) {
        this(r2, r3, r4, -1);
    }

    public AppCompatSpinner(Context r7, AttributeSet r8, int r9, int r10) {
        this(r7, r8, r9, r10, null);
    }

    public AppCompatSpinner(Context r8, AttributeSet r9, int r10, int r11, Resources.Theme r12) {
        super(r8, r9, r10);
        this.mTempRect = new Rect();
        TintTypedArray r0 = TintTypedArray.obtainStyledAttributes(r8, r9, android.support.v7.appcompat.R.styleable.Spinner, r10, 0);
        this.mBackgroundTintHelper = new AppCompatBackgroundHelper(this);
        if (r12 == null) goto L5;
        this.mPopupContext = new ContextThemeWrapper(r8, r12);
    L14:
        if (this.mPopupContext != null) goto L16;
    L38:
        CharSequence[] r112 = r0.getTextArray(android.support.v7.appcompat.R.styleable.Spinner_android_entries);
        if (r112 == null) goto L41;
        ArrayAdapter r122 = new ArrayAdapter(r8, R.layout.simple_spinner_item, r112);
        r122.setDropDownViewResource(android.support.v7.appcompat.R.layout.support_simple_spinner_dropdown_item);
        setAdapter(r122);
    L41:
        r0.recycle();
        this.mPopupSet = true;
        SpinnerAdapter r82 = this.mTempAdapter;
        if (r82 == null) goto L44;
        setAdapter(r82);
        this.mTempAdapter = null;
    L44:
        this.mBackgroundTintHelper.loadFromAttributes(r9, r10);
        return;
    L16:
        if (r11 == (-1)) goto L49;
    L36:
        if (r11 != 1) goto L38;
        final DropdownPopup r113 = new DropdownPopup(this, this.mPopupContext, r9, r10);
        TintTypedArray r123 = TintTypedArray.obtainStyledAttributes(this.mPopupContext, r9, android.support.v7.appcompat.R.styleable.Spinner, r10, 0);
        this.mDropDownWidth = r123.getLayoutDimension(android.support.v7.appcompat.R.styleable.Spinner_android_dropDownWidth, -2);
        r113.setBackgroundDrawable(r123.getDrawable(android.support.v7.appcompat.R.styleable.Spinner_android_popupBackground));
        r113.setPromptText(r0.getString(android.support.v7.appcompat.R.styleable.Spinner_android_prompt));
        r123.recycle();
        this.mPopup = r113;
        this.mForwardingListener = new 1(this, this, r113);
        goto L38
    L49:
        TypedArray r124 = r8.obtainStyledAttributes(r9, ATTRS_ANDROID_SPINNERMODE, r10, 0);     // Catch: Throwable -> L25 Exception -> L27
    L23:
        e = e;
    L29:
        Log.i(TAG, "Could not read android:spinnerMode", e);     // Catch: Throwable -> L32
        if (r124 == null) goto L36;
    L22:
        r124.recycle();
    L32:
        th = th;
    L33:
        if (r124 == null) goto L35;
        r124.recycle();
    L35:
        throw th;
    L19:
        if (r124.hasValue(0) == false) goto L21;
        r11 = r124.getInt(0, 0);     // Catch: Exception -> L23 Throwable -> L32
    L21:
        if (r124 == null) goto L36;
    L27:
        e = e;
        r124 = null;
    L25:
        th = th;
        r124 = null;
        goto L33
    L5:
        int r125 = r0.getResourceId(android.support.v7.appcompat.R.styleable.Spinner_popupTheme, 0);
        if (r125 == 0) goto L9;
        this.mPopupContext = new ContextThemeWrapper(r8, r125);
        goto L14
    L9:
        if (Build.VERSION.SDK_INT >= 23) goto L11;
        Context r126 = r8;
    L12:
        this.mPopupContext = r126;
        goto L14
    L11:
        r126 = null;
        goto L12
    }

    @Override
    public Context getPopupContext() {
        if (this.mPopup == null) goto L7;
        return this.mPopupContext;
    L7:
        if (Build.VERSION.SDK_INT >= 23) goto L9;
        return null;
    L9:
        return super.getPopupContext();
    }

    @Override
    public void setPopupBackgroundDrawable(Drawable r3) {
        DropdownPopup r0 = this.mPopup;
        if (r0 == null) goto L6;
        r0.setBackgroundDrawable(r3);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 16) goto L10;
        super.setPopupBackgroundDrawable(r3);
        return;
    }

    @Override
    public void setPopupBackgroundResource(@DrawableRes int r2) {
        setPopupBackgroundDrawable(AppCompatResources.getDrawable(getPopupContext(), r2));
    }

    @Override
    public Drawable getPopupBackground() {
        DropdownPopup r0 = this.mPopup;
        if (r0 == null) goto L7;
        return r0.getBackground();
    L7:
        if (Build.VERSION.SDK_INT >= 16) goto L9;
        return null;
    L9:
        return super.getPopupBackground();
    }

    @Override
    public void setDropDownVerticalOffset(int r3) {
        DropdownPopup r0 = this.mPopup;
        if (r0 == null) goto L6;
        r0.setVerticalOffset(r3);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 16) goto L10;
        super.setDropDownVerticalOffset(r3);
        return;
    }

    @Override
    public int getDropDownVerticalOffset() {
        DropdownPopup r0 = this.mPopup;
        if (r0 == null) goto L7;
        return r0.getVerticalOffset();
    L7:
        if (Build.VERSION.SDK_INT >= 16) goto L9;
        return 0;
    L9:
        return super.getDropDownVerticalOffset();
    }

    @Override
    public void setDropDownHorizontalOffset(int r3) {
        DropdownPopup r0 = this.mPopup;
        if (r0 == null) goto L6;
        r0.setHorizontalOffset(r3);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 16) goto L10;
        super.setDropDownHorizontalOffset(r3);
        return;
    }

    @Override
    public int getDropDownHorizontalOffset() {
        DropdownPopup r0 = this.mPopup;
        if (r0 == null) goto L7;
        return r0.getHorizontalOffset();
    L7:
        if (Build.VERSION.SDK_INT >= 16) goto L9;
        return 0;
    L9:
        return super.getDropDownHorizontalOffset();
    }

    @Override
    public void setDropDownWidth(int r3) {
        if (this.mPopup == null) goto L6;
        this.mDropDownWidth = r3;
        return;
    L6:
        if (Build.VERSION.SDK_INT < 16) goto L10;
        super.setDropDownWidth(r3);
        return;
    }

    @Override
    public int getDropDownWidth() {
        if (this.mPopup == null) goto L7;
        return this.mDropDownWidth;
    L7:
        if (Build.VERSION.SDK_INT >= 16) goto L9;
        return 0;
    L9:
        return super.getDropDownWidth();
    }

    @Override
    public void setAdapter(SpinnerAdapter r4) {
        if (this.mPopupSet == true) goto L6;
        this.mTempAdapter = r4;
        return;
    L6:
        super.setAdapter(r4);
        if (this.mPopup == null) goto L13;
        Context r0 = this.mPopupContext;
        if (r0 != null) goto L11;
        r0 = getContext();
    L11:
        this.mPopup.setAdapter(new DropDownAdapter(r4, r0.getTheme()));
        return;
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        DropdownPopup r0 = this.mPopup;
        if (r0 != null) goto L5;
        return;
    L5:
        if (r0.isShowing() == false) goto L9;
        this.mPopup.dismiss();
        return;
    }

    @Override
    public boolean onTouchEvent(MotionEvent r2) {
        ForwardingListener r0 = this.mForwardingListener;
        if (r0 == null) goto L9;
        if (r0.onTouch(this, r2) == false) goto L9;
        return true;
    L9:
        return super.onTouchEvent(r2);
    }

    @Override
    protected void onMeasure(int r3, int r4) {
        super.onMeasure(r3, r4);
        if (this.mPopup != null) goto L5;
        return;
    L5:
        if (View.MeasureSpec.getMode(r3) != Integer.MIN_VALUE) goto L9;
        setMeasuredDimension(Math.min(Math.max(getMeasuredWidth(), compatMeasureContentWidth(getAdapter(), getBackground())), View.MeasureSpec.getSize(r3)), getMeasuredHeight());
        return;
    }

    @Override
    public boolean performClick() {
        DropdownPopup r0 = this.mPopup;
        if (r0 == null) goto L10;
        if (r0.isShowing() == true) goto L11;
        this.mPopup.show();
        return true;
    L11:
        return true;
    L10:
        return super.performClick();
    }

    @Override
    public void setPrompt(CharSequence r2) {
        DropdownPopup r0 = this.mPopup;
        if (r0 == null) goto L5;
        r0.setPromptText(r2);
        return;
    L5:
        super.setPrompt(r2);
    }

    @Override
    public CharSequence getPrompt() {
        DropdownPopup r0 = this.mPopup;
        if (r0 == null) goto L6;
        return r0.getHintText();
    L6:
        return super.getPrompt();
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
        if (r0 == null) goto L6;
        r0.applySupportBackgroundTint();
        return;
    }

    int compatMeasureContentWidth(SpinnerAdapter r11, Drawable r12) {
        int r0 = 0;
        if (r11 != null) goto L5;
        return 0;
    L5:
        int r1 = View.MeasureSpec.makeMeasureSpec(getMeasuredWidth(), 0);
        int r2 = View.MeasureSpec.makeMeasureSpec(getMeasuredHeight(), 0);
        int r3 = Math.max(0, getSelectedItemPosition());
        int r4 = Math.min(r11.getCount(), r3 + 15);
        int r32 = Math.max(0, r3 - (15 - (r4 - r3)));
        View r7 = null;
        int r6 = 0;
    L6:
        if (r32 >= r4) goto L14;
        int r8 = r11.getItemViewType(r32);
        if (r8 == r0) goto L10;
        r7 = null;
        r0 = r8;
    L10:
        r7 = r11.getView(r32, r7, this);
        if (r7.getLayoutParams() != null) goto L13;
        r7.setLayoutParams(new ViewGroup.LayoutParams(-2, -2));
    L13:
        r7.measure(r1, r2);
        r6 = Math.max(r6, r7.getMeasuredWidth());
        r32 = r32 + 1;
        goto L6
    L14:
        if (r12 == null) goto L20;
        r12.getPadding(this.mTempRect);
        return r6 + (this.mTempRect.left + this.mTempRect.right);
    L20:
        return r6;
    }
}
