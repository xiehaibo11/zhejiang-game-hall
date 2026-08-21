package android.support.v4.view;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.database.DataSetObserver;
import android.graphics.drawable.Drawable;
import android.support.annotation.ColorInt;
import android.support.annotation.FloatRange;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.view.ViewPager;
import android.support.v4.widget.TextViewCompat;
import android.text.TextUtils;
import android.text.method.SingleLineTransformationMethod;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.TextView;
import java.lang.ref.WeakReference;
import java.util.Locale;

@ViewPager.DecorView
public class PagerTitleStrip extends ViewGroup {
    private static final int[] ATTRS = null;
    private static final float SIDE_ALPHA = 0.6f;
    private static final int[] TEXT_ATTRS = null;
    private static final int TEXT_SPACING = 16;
    TextView mCurrText;
    private int mGravity;
    private int mLastKnownCurrentPage;
    float mLastKnownPositionOffset;
    TextView mNextText;
    private int mNonPrimaryAlpha;
    private final PageListener mPageListener;
    ViewPager mPager;
    TextView mPrevText;
    private int mScaledTextSpacing;
    int mTextColor;
    private boolean mUpdatingPositions;
    private boolean mUpdatingText;
    private WeakReference<PagerAdapter> mWatchingAdapter;

    private class PageListener extends DataSetObserver implements ViewPager.OnPageChangeListener, ViewPager.OnAdapterChangeListener {
        private int mScrollState;
        final PagerTitleStrip this$0;

        PageListener(PagerTitleStrip r1) {
            this.this$0 = r1;
        }

        @Override
        public void onPageScrolled(int r2, float r3, int r4) {
            if (r3 <= 0.5f) goto L5;
            r2 = r2 + 1;
        L5:
            this.this$0.updateTextPositions(r2, r3, false);
        }

        @Override
        public void onPageSelected(int r4) {
            if (this.mScrollState != 0) goto L9;
            PagerTitleStrip r42 = this.this$0;
            r42.updateText(r42.mPager.getCurrentItem(), this.this$0.mPager.getAdapter());
            float r0 = 0.0f;
            if (this.this$0.mLastKnownPositionOffset < 0.0f) goto L7;
            r0 = this.this$0.mLastKnownPositionOffset;
        L7:
            PagerTitleStrip r43 = this.this$0;
            r43.updateTextPositions(r43.mPager.getCurrentItem(), r0, true);
            return;
        }

        @Override
        public void onPageScrollStateChanged(int r1) {
            this.mScrollState = r1;
        }

        @Override
        public void onAdapterChanged(ViewPager r1, PagerAdapter r2, PagerAdapter r3) {
            this.this$0.updateAdapter(r2, r3);
        }

        @Override
        public void onChanged() {
            PagerTitleStrip r0 = this.this$0;
            r0.updateText(r0.mPager.getCurrentItem(), this.this$0.mPager.getAdapter());
            float r1 = 0.0f;
            if (this.this$0.mLastKnownPositionOffset < 0.0f) goto L5;
            r1 = this.this$0.mLastKnownPositionOffset;
        L5:
            PagerTitleStrip r02 = this.this$0;
            r02.updateTextPositions(r02.mPager.getCurrentItem(), r1, true);
        }
    }

    private static class SingleLineAllCapsTransform extends SingleLineTransformationMethod {
        private Locale mLocale;

        SingleLineAllCapsTransform(Context r1) {
            this.mLocale = r1.getResources().getConfiguration().locale;
        }

        @Override
        public CharSequence getTransformation(CharSequence r1, View r2) {
            CharSequence r12 = super.getTransformation(r1, r2);
            if (r12 != null) goto L7;
            return null;
        L7:
            return r12.toString().toUpperCase(this.mLocale);
        }
    }

    static {
        ATTRS = new int[]{R.attr.textAppearance, R.attr.textSize, R.attr.textColor, R.attr.gravity};
        TEXT_ATTRS = new int[]{R.attr.textAllCaps};
    }

    private static void setSingleLineAllCaps(TextView r2) {
        r2.setTransformationMethod(new SingleLineAllCapsTransform(r2.getContext()));
    }

    public PagerTitleStrip(@NonNull Context r2) {
        this(r2, null);
    }

    public PagerTitleStrip(@NonNull Context r5, @Nullable AttributeSet r6) {
        super(r5, r6);
        this.mLastKnownCurrentPage = -1;
        this.mLastKnownPositionOffset = -1.0f;
        this.mPageListener = new PageListener(this);
        TextView r0 = new TextView(r5);
        this.mPrevText = r0;
        addView(r0);
        TextView r02 = new TextView(r5);
        this.mCurrText = r02;
        addView(r02);
        TextView r03 = new TextView(r5);
        this.mNextText = r03;
        addView(r03);
        TypedArray r62 = r5.obtainStyledAttributes(r6, ATTRS);
        boolean r04 = false;
        int r1 = r62.getResourceId(0, 0);
        if (r1 == 0) goto L5;
        TextViewCompat.setTextAppearance(this.mPrevText, r1);
        TextViewCompat.setTextAppearance(this.mCurrText, r1);
        TextViewCompat.setTextAppearance(this.mNextText, r1);
    L5:
        int r2 = r62.getDimensionPixelSize(1, 0);
        if (r2 == 0) goto L9;
        setTextSize(0, r2);
    L9:
        if (r62.hasValue(2) == false) goto L11;
        int r22 = r62.getColor(2, 0);
        this.mPrevText.setTextColor(r22);
        this.mCurrText.setTextColor(r22);
        this.mNextText.setTextColor(r22);
    L11:
        this.mGravity = r62.getInteger(3, 80);
        r62.recycle();
        this.mTextColor = this.mCurrText.getTextColors().getDefaultColor();
        setNonPrimaryAlpha(SIDE_ALPHA);
        this.mPrevText.setEllipsize(TextUtils.TruncateAt.END);
        this.mCurrText.setEllipsize(TextUtils.TruncateAt.END);
        this.mNextText.setEllipsize(TextUtils.TruncateAt.END);
        if (r1 == 0) goto L14;
        TypedArray r63 = r5.obtainStyledAttributes(r1, TEXT_ATTRS);
        r04 = r63.getBoolean(0, false);
        r63.recycle();
    L14:
        if (r04 == false) goto L16;
        setSingleLineAllCaps(this.mPrevText);
        setSingleLineAllCaps(this.mCurrText);
        setSingleLineAllCaps(this.mNextText);
    L17:
        this.mScaledTextSpacing = (int) (r5.getResources().getDisplayMetrics().density * 16.0f);
        return;
    L16:
        this.mPrevText.setSingleLine();
        this.mCurrText.setSingleLine();
        this.mNextText.setSingleLine();
        goto L17
    }

    public void setTextSpacing(int r1) {
        this.mScaledTextSpacing = r1;
        requestLayout();
    }

    public int getTextSpacing() {
        return this.mScaledTextSpacing;
    }

    public void setNonPrimaryAlpha(@FloatRange(from = 0.0d, to = 1.0d) float r3) {
        this.mNonPrimaryAlpha = ((int) (r3 * 255.0f)) & 255;
        int r32 = (this.mNonPrimaryAlpha << 24) | (this.mTextColor & ViewCompat.MEASURED_SIZE_MASK);
        this.mPrevText.setTextColor(r32);
        this.mNextText.setTextColor(r32);
    }

    public void setTextColor(@ColorInt int r3) {
        this.mTextColor = r3;
        this.mCurrText.setTextColor(r3);
        int r32 = (this.mNonPrimaryAlpha << 24) | (this.mTextColor & ViewCompat.MEASURED_SIZE_MASK);
        this.mPrevText.setTextColor(r32);
        this.mNextText.setTextColor(r32);
    }

    public void setTextSize(int r2, float r3) {
        this.mPrevText.setTextSize(r2, r3);
        this.mCurrText.setTextSize(r2, r3);
        this.mNextText.setTextSize(r2, r3);
    }

    public void setGravity(int r1) {
        this.mGravity = r1;
        requestLayout();
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        ViewParent r0 = getParent();
        if ((r0 instanceof ViewPager) == false) goto L11;
        ViewPager r02 = (ViewPager) r0;
        PagerAdapter r1 = r02.getAdapter();
        r02.setInternalPageChangeListener(this.mPageListener);
        r02.addOnAdapterChangeListener(this.mPageListener);
        this.mPager = r02;
        WeakReference<PagerAdapter> r03 = this.mWatchingAdapter;
        if (r03 == null) goto L7;
        PagerAdapter r04 = r03.get();
    L8:
        updateAdapter(r04, r1);
        return;
    L7:
        r04 = null;
        goto L8
    L11:
        throw new IllegalStateException("PagerTitleStrip must be a direct child of a ViewPager.");
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        ViewPager r0 = this.mPager;
        if (r0 == null) goto L6;
        updateAdapter(r0.getAdapter(), null);
        this.mPager.setInternalPageChangeListener(null);
        this.mPager.removeOnAdapterChangeListener(this.mPageListener);
        this.mPager = null;
        return;
    }

    void updateText(int r6, PagerAdapter r7) {
        if (r7 == null) goto L5;
        int r1 = r7.getCount();
    L6:
        this.mUpdatingText = true;
        CharSequence r3 = null;
        if (r6 < 1) goto L10;
        if (r7 == null) goto L10;
        CharSequence r2 = r7.getPageTitle(r6 - 1);
    L11:
        this.mPrevText.setText(r2);
        TextView r22 = this.mCurrText;
        if (r7 == null) goto L15;
        if (r6 >= r1) goto L15;
        CharSequence r4 = r7.getPageTitle(r6);
    L16:
        r22.setText(r4);
        int r23 = r6 + 1;
        if (r23 >= r1) goto L20;
        if (r7 == null) goto L20;
        r3 = r7.getPageTitle(r23);
    L20:
        this.mNextText.setText(r3);
        int r72 = View.MeasureSpec.makeMeasureSpec(Math.max(0, (int) (((getWidth() - getPaddingLeft()) - getPaddingRight()) * 0.8f)), Integer.MIN_VALUE);
        int r12 = View.MeasureSpec.makeMeasureSpec(Math.max(0, (getHeight() - getPaddingTop()) - getPaddingBottom()), Integer.MIN_VALUE);
        this.mPrevText.measure(r72, r12);
        this.mCurrText.measure(r72, r12);
        this.mNextText.measure(r72, r12);
        this.mLastKnownCurrentPage = r6;
        if (this.mUpdatingPositions == true) goto L23;
        updateTextPositions(r6, this.mLastKnownPositionOffset, false);
    L23:
        this.mUpdatingText = false;
        return;
    L15:
        r4 = null;
    L10:
        r2 = null;
        goto L11
    L5:
        r1 = 0;
        goto L6
    }

    @Override
    public void requestLayout() {
        if (this.mUpdatingText == true) goto L6;
        super.requestLayout();
        return;
    }

    void updateAdapter(PagerAdapter r2, PagerAdapter r3) {
        if (r2 == null) goto L4;
        r2.unregisterDataSetObserver(this.mPageListener);
        this.mWatchingAdapter = null;
    L4:
        if (r3 == null) goto L6;
        r3.registerDataSetObserver(this.mPageListener);
        this.mWatchingAdapter = new WeakReference(r3);
    L6:
        ViewPager r22 = this.mPager;
        if (r22 == null) goto L10;
        this.mLastKnownCurrentPage = -1;
        this.mLastKnownPositionOffset = -1.0f;
        updateText(r22.getCurrentItem(), r3);
        requestLayout();
        return;
    }

    void updateTextPositions(int r18, float r19, boolean r20) {
        if (r18 == this.mLastKnownCurrentPage) goto L5;
        updateText(r18, this.mPager.getAdapter());
    L9:
        this.mUpdatingPositions = true;
        int r1 = this.mPrevText.getMeasuredWidth();
        int r3 = this.mCurrText.getMeasuredWidth();
        int r4 = this.mNextText.getMeasuredWidth();
        int r5 = r3 / 2;
        int r6 = getWidth();
        int r7 = getHeight();
        int r8 = getPaddingLeft();
        int r9 = getPaddingRight();
        int r10 = getPaddingTop();
        int r11 = getPaddingBottom();
        int r13 = r9 + r5;
        int r12 = (r6 - (r8 + r5)) - r13;
        float r14 = 0.5f + r19;
        if (r14 <= 1.0f) goto L12;
        r14 = r14 - 1.0f;
    L12:
        int r132 = ((r6 - r13) - ((int) (r12 * r14))) - r5;
        int r32 = r3 + r132;
        int r52 = this.mPrevText.getBaseline();
        int r122 = this.mCurrText.getBaseline();
        int r142 = this.mNextText.getBaseline();
        int r15 = Math.max(Math.max(r52, r122), r142);
        int r53 = r15 - r52;
        int r123 = r15 - r122;
        int r152 = r15 - r142;
        int r143 = this.mPrevText.getMeasuredHeight() + r53;
        int r2 = this.mCurrText.getMeasuredHeight() + r123;
        int r22 = Math.max(Math.max(r143, r2), this.mNextText.getMeasuredHeight() + r152);
        int r42 = this.mGravity & 112;
        if (r42 != 16) goto L15;
        int r72 = (((r7 - r10) - r11) - r22) / 2;
    L19:
        int r54 = r53 + r72;
        int r124 = r123 + r72;
        int r102 = r72 + r152;
    L20:
        TextView r23 = this.mCurrText;
        r23.layout(r132, r124, r32, r23.getMeasuredHeight() + r124);
        int r24 = Math.min(r8, (r132 - this.mScaledTextSpacing) - r1);
        TextView r43 = this.mPrevText;
        r43.layout(r24, r54, r1 + r24, r43.getMeasuredHeight() + r54);
        int r16 = Math.max((r6 - r9) - r4, r32 + this.mScaledTextSpacing);
        TextView r25 = this.mNextText;
        r25.layout(r16, r102, r16 + r4, r25.getMeasuredHeight() + r102);
        this.mLastKnownPositionOffset = r19;
        this.mUpdatingPositions = false;
        return;
    L15:
        if (r42 == 80) goto L17;
        r54 = r53 + r10;
        r124 = r123 + r10;
        r102 = r10 + r152;
        goto L20
    L17:
        r72 = (r7 - r11) - r22;
        goto L19
    L5:
        if (r20 == true) goto L9;
        if (r19 != this.mLastKnownPositionOffset) goto L9;
    }

    @Override
    protected void onMeasure(int r8, int r9) {
        if (View.MeasureSpec.getMode(r8) != 1073741824) goto L11;
        int r0 = getPaddingTop() + getPaddingBottom();
        int r3 = getChildMeasureSpec(r9, r0, -2);
        int r4 = View.MeasureSpec.getSize(r8);
        int r82 = getChildMeasureSpec(r8, (int) (r4 * 0.2f), -2);
        this.mPrevText.measure(r82, r3);
        this.mCurrText.measure(r82, r3);
        this.mNextText.measure(r82, r3);
        if (View.MeasureSpec.getMode(r9) != 1073741824) goto L7;
        int r83 = View.MeasureSpec.getSize(r9);
    L8:
        setMeasuredDimension(r4, View.resolveSizeAndState(r83, r9, this.mCurrText.getMeasuredState() << 16));
        return;
    L7:
        r83 = Math.max(getMinHeight(), this.mCurrText.getMeasuredHeight() + r0);
        goto L8
    L11:
        throw new IllegalStateException("Must measure with an exact width");
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
        if (this.mPager == null) goto L10;
        float r12 = this.mLastKnownPositionOffset;
        if (r12 >= 0.0f) goto L8;
        r12 = 0.0f;
    L8:
        updateTextPositions(this.mLastKnownCurrentPage, r12, true);
        return;
    }

    int getMinHeight() {
        Drawable r0 = getBackground();
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.getIntrinsicHeight();
    }
}
