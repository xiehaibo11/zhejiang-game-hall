package android.support.v7.widget;

import android.R;
import android.animation.ObjectAnimator;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Canvas;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.Region;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.Nullable;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.view.ViewCompat;
import android.support.v4.widget.TextViewCompat;
import android.support.v7.content.res.AppCompatResources;
import android.support.v7.text.AllCapsTransformationMethod;
import android.text.Layout;
import android.text.StaticLayout;
import android.text.TextPaint;
import android.text.TextUtils;
import android.text.method.TransformationMethod;
import android.util.AttributeSet;
import android.util.Property;
import android.view.ActionMode;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.ViewConfiguration;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.CompoundButton;

public class SwitchCompat extends CompoundButton {
    private static final String ACCESSIBILITY_EVENT_CLASS_NAME = "android.widget.Switch";
    private static final int[] CHECKED_STATE_SET = null;
    private static final int MONOSPACE = 3;
    private static final int SANS = 1;
    private static final int SERIF = 2;
    private static final int THUMB_ANIMATION_DURATION = 250;
    private static final Property<SwitchCompat, Float> THUMB_POS = null;
    private static final int TOUCH_MODE_DOWN = 1;
    private static final int TOUCH_MODE_DRAGGING = 2;
    private static final int TOUCH_MODE_IDLE = 0;
    private boolean mHasThumbTint;
    private boolean mHasThumbTintMode;
    private boolean mHasTrackTint;
    private boolean mHasTrackTintMode;
    private int mMinFlingVelocity;
    private Layout mOffLayout;
    private Layout mOnLayout;
    ObjectAnimator mPositionAnimator;
    private boolean mShowText;
    private boolean mSplitTrack;
    private int mSwitchBottom;
    private int mSwitchHeight;
    private int mSwitchLeft;
    private int mSwitchMinWidth;
    private int mSwitchPadding;
    private int mSwitchRight;
    private int mSwitchTop;
    private TransformationMethod mSwitchTransformationMethod;
    private int mSwitchWidth;
    private final Rect mTempRect;
    private ColorStateList mTextColors;
    private CharSequence mTextOff;
    private CharSequence mTextOn;
    private final TextPaint mTextPaint;
    private Drawable mThumbDrawable;
    float mThumbPosition;
    private int mThumbTextPadding;
    private ColorStateList mThumbTintList;
    private PorterDuff.Mode mThumbTintMode;
    private int mThumbWidth;
    private int mTouchMode;
    private int mTouchSlop;
    private float mTouchX;
    private float mTouchY;
    private Drawable mTrackDrawable;
    private ColorStateList mTrackTintList;
    private PorterDuff.Mode mTrackTintMode;
    private VelocityTracker mVelocityTracker;

    private static float constrain(float r1, float r2, float r3) {
        if (r1 >= r2) goto L6;
        return r2;
    L6:
        if (r1 > r3) goto L8;
        return r1;
    L8:
        return r3;
    }

    static {
        final Class<Float> r1 = Float.class;
        final String r2 = "thumbPos";
        THUMB_POS = new 1(r1, r2);
        CHECKED_STATE_SET = new int[]{R.attr.state_checked};
    }

    public SwitchCompat(Context r2) {
        this(r2, null);
    }

    public SwitchCompat(Context r2, AttributeSet r3) {
        this(r2, r3, android.support.v7.appcompat.R.attr.switchStyle);
    }

    public SwitchCompat(Context r6, AttributeSet r7, int r8) {
        super(r6, r7, r8);
        this.mThumbTintList = null;
        this.mThumbTintMode = null;
        this.mHasThumbTint = false;
        this.mHasThumbTintMode = false;
        this.mTrackTintList = null;
        this.mTrackTintMode = null;
        this.mHasTrackTint = false;
        this.mHasTrackTintMode = false;
        this.mVelocityTracker = VelocityTracker.obtain();
        this.mTempRect = new Rect();
        this.mTextPaint = new TextPaint(1);
        Resources r2 = getResources();
        TextPaint r4 = this.mTextPaint;
        r4.density = r2.getDisplayMetrics().density;
        TintTypedArray r72 = TintTypedArray.obtainStyledAttributes(r6, r7, android.support.v7.appcompat.R.styleable.SwitchCompat, r8, 0);
        this.mThumbDrawable = r72.getDrawable(android.support.v7.appcompat.R.styleable.SwitchCompat_android_thumb);
        Drawable r82 = this.mThumbDrawable;
        if (r82 == null) goto L5;
        r82.setCallback(this);
    L5:
        this.mTrackDrawable = r72.getDrawable(android.support.v7.appcompat.R.styleable.SwitchCompat_track);
        Drawable r83 = this.mTrackDrawable;
        if (r83 == null) goto L8;
        r83.setCallback(this);
    L8:
        this.mTextOn = r72.getText(android.support.v7.appcompat.R.styleable.SwitchCompat_android_textOn);
        this.mTextOff = r72.getText(android.support.v7.appcompat.R.styleable.SwitchCompat_android_textOff);
        this.mShowText = r72.getBoolean(android.support.v7.appcompat.R.styleable.SwitchCompat_showText, true);
        this.mThumbTextPadding = r72.getDimensionPixelSize(android.support.v7.appcompat.R.styleable.SwitchCompat_thumbTextPadding, 0);
        this.mSwitchMinWidth = r72.getDimensionPixelSize(android.support.v7.appcompat.R.styleable.SwitchCompat_switchMinWidth, 0);
        this.mSwitchPadding = r72.getDimensionPixelSize(android.support.v7.appcompat.R.styleable.SwitchCompat_switchPadding, 0);
        this.mSplitTrack = r72.getBoolean(android.support.v7.appcompat.R.styleable.SwitchCompat_splitTrack, false);
        ColorStateList r84 = r72.getColorStateList(android.support.v7.appcompat.R.styleable.SwitchCompat_thumbTint);
        if (r84 == null) goto L11;
        this.mThumbTintList = r84;
        this.mHasThumbTint = true;
    L11:
        PorterDuff.Mode r85 = DrawableUtils.parseTintMode(r72.getInt(android.support.v7.appcompat.R.styleable.SwitchCompat_thumbTintMode, -1), null);
        if (this.mThumbTintMode == r85) goto L15;
        this.mThumbTintMode = r85;
        this.mHasThumbTintMode = true;
    L15:
        if (this.mHasThumbTint == false) goto L17;
    L18:
        applyThumbTint();
    L19:
        ColorStateList r86 = r72.getColorStateList(android.support.v7.appcompat.R.styleable.SwitchCompat_trackTint);
        if (r86 == null) goto L22;
        this.mTrackTintList = r86;
        this.mHasTrackTint = true;
    L22:
        PorterDuff.Mode r87 = DrawableUtils.parseTintMode(r72.getInt(android.support.v7.appcompat.R.styleable.SwitchCompat_trackTintMode, -1), null);
        if (this.mTrackTintMode == r87) goto L26;
        this.mTrackTintMode = r87;
        this.mHasTrackTintMode = true;
    L26:
        if (this.mHasTrackTint == false) goto L28;
    L29:
        applyTrackTint();
    L30:
        int r88 = r72.getResourceId(android.support.v7.appcompat.R.styleable.SwitchCompat_switchTextAppearance, 0);
        if (r88 == 0) goto L33;
        setSwitchTextAppearance(r6, r88);
    L33:
        r72.recycle();
        ViewConfiguration r62 = ViewConfiguration.get(r6);
        this.mTouchSlop = r62.getScaledTouchSlop();
        this.mMinFlingVelocity = r62.getScaledMinimumFlingVelocity();
        refreshDrawableState();
        setChecked(isChecked());
        return;
    L28:
        if (this.mHasTrackTintMode == false) goto L30;
    L17:
        if (this.mHasThumbTintMode == false) goto L19;
        goto L18
    }

    public void setSwitchTextAppearance(Context r4, int r5) {
        TintTypedArray r42 = TintTypedArray.obtainStyledAttributes(r4, r5, android.support.v7.appcompat.R.styleable.TextAppearance);
        ColorStateList r52 = r42.getColorStateList(android.support.v7.appcompat.R.styleable.TextAppearance_android_textColor);
        if (r52 == null) goto L5;
        this.mTextColors = r52;
    L6:
        int r53 = r42.getDimensionPixelSize(android.support.v7.appcompat.R.styleable.TextAppearance_android_textSize, 0);
        if (r53 == 0) goto L11;
        float r54 = r53;
        if (r54 == this.mTextPaint.getTextSize()) goto L11;
        this.mTextPaint.setTextSize(r54);
        requestLayout();
    L11:
        setSwitchTypefaceByIndex(r42.getInt(android.support.v7.appcompat.R.styleable.TextAppearance_android_typeface, -1), r42.getInt(android.support.v7.appcompat.R.styleable.TextAppearance_android_textStyle, -1));
        if (r42.getBoolean(android.support.v7.appcompat.R.styleable.TextAppearance_textAllCaps, false) == false) goto L14;
        this.mSwitchTransformationMethod = new AllCapsTransformationMethod(getContext());
    L15:
        r42.recycle();
        return;
    L14:
        this.mSwitchTransformationMethod = null;
        goto L15
    L5:
        this.mTextColors = getTextColors();
        goto L6
    }

    private void setSwitchTypefaceByIndex(int r2, int r3) {
        if (r2 != 1) goto L5;
        Typeface r22 = Typeface.SANS_SERIF;
    L12:
        setSwitchTypeface(r22, r3);
        return;
    L5:
        if (r2 != 2) goto L7;
        r22 = Typeface.SERIF;
        goto L12
    L7:
        if (r2 == 3) goto L9;
        r22 = null;
        goto L12
    L9:
        r22 = Typeface.MONOSPACE;
        goto L12
    }

    public void setSwitchTypeface(Typeface r4, int r5) {
        float r0 = 0.0f;
        boolean r1 = false;
        if (r5 <= 0) goto L18;
        if (r4 != null) goto L6;
        Typeface r42 = Typeface.defaultFromStyle(r5);
    L7:
        setSwitchTypeface(r42);
        if (r42 == null) goto L10;
        int r43 = r42.getStyle();
    L11:
        int r44 = (~r43) & r5;
        TextPaint r52 = this.mTextPaint;
        if ((r44 & 1) == 0) goto L14;
        r1 = true;
    L14:
        r52.setFakeBoldText(r1);
        TextPaint r53 = this.mTextPaint;
        if ((r44 & 2) == 0) goto L17;
        r0 = -0.25f;
    L17:
        r53.setTextSkewX(r0);
        return;
    L10:
        r43 = 0;
        goto L11
    L6:
        r42 = Typeface.create(r4, r5);
        goto L7
    L18:
        this.mTextPaint.setFakeBoldText(false);
        this.mTextPaint.setTextSkewX(0.0f);
        setSwitchTypeface(r4);
    }

    public void setSwitchTypeface(Typeface r2) {
        if (this.mTextPaint.getTypeface() == null) goto L7;
        if (this.mTextPaint.getTypeface().equals(r2) == true) goto L7;
    L9:
        this.mTextPaint.setTypeface(r2);
        requestLayout();
        invalidate();
        return;
    L7:
        if (this.mTextPaint.getTypeface() != null) goto L11;
        if (r2 != null) goto L9;
        return;
    }

    public void setSwitchPadding(int r1) {
        this.mSwitchPadding = r1;
        requestLayout();
    }

    public int getSwitchPadding() {
        return this.mSwitchPadding;
    }

    public void setSwitchMinWidth(int r1) {
        this.mSwitchMinWidth = r1;
        requestLayout();
    }

    public int getSwitchMinWidth() {
        return this.mSwitchMinWidth;
    }

    public void setThumbTextPadding(int r1) {
        this.mThumbTextPadding = r1;
        requestLayout();
    }

    public int getThumbTextPadding() {
        return this.mThumbTextPadding;
    }

    public void setTrackDrawable(Drawable r3) {
        Drawable r0 = this.mTrackDrawable;
        if (r0 == null) goto L5;
        r0.setCallback(null);
    L5:
        this.mTrackDrawable = r3;
        if (r3 == null) goto L8;
        r3.setCallback(this);
    L8:
        requestLayout();
    }

    public void setTrackResource(int r2) {
        setTrackDrawable(AppCompatResources.getDrawable(getContext(), r2));
    }

    public Drawable getTrackDrawable() {
        return this.mTrackDrawable;
    }

    public void setTrackTintList(@Nullable ColorStateList r1) {
        this.mTrackTintList = r1;
        this.mHasTrackTint = true;
        applyTrackTint();
    }

    @Nullable
    public ColorStateList getTrackTintList() {
        return this.mTrackTintList;
    }

    public void setTrackTintMode(@Nullable PorterDuff.Mode r1) {
        this.mTrackTintMode = r1;
        this.mHasTrackTintMode = true;
        applyTrackTint();
    }

    @Nullable
    public PorterDuff.Mode getTrackTintMode() {
        return this.mTrackTintMode;
    }

    private void applyTrackTint() {
        if (this.mTrackDrawable != null) goto L5;
        return;
    L5:
        if (this.mHasTrackTint == false) goto L7;
    L8:
        this.mTrackDrawable = this.mTrackDrawable.mutate();
        if (this.mHasTrackTint == false) goto L12;
        DrawableCompat.setTintList(this.mTrackDrawable, this.mTrackTintList);
    L12:
        if (this.mHasTrackTintMode == false) goto L15;
        DrawableCompat.setTintMode(this.mTrackDrawable, this.mTrackTintMode);
    L15:
        if (this.mTrackDrawable.isStateful() == false) goto L20;
        this.mTrackDrawable.setState(getDrawableState());
        return;
    L20:
        return;
    L7:
        if (this.mHasTrackTintMode == true) goto L8;
    }

    public void setThumbDrawable(Drawable r3) {
        Drawable r0 = this.mThumbDrawable;
        if (r0 == null) goto L5;
        r0.setCallback(null);
    L5:
        this.mThumbDrawable = r3;
        if (r3 == null) goto L8;
        r3.setCallback(this);
    L8:
        requestLayout();
    }

    public void setThumbResource(int r2) {
        setThumbDrawable(AppCompatResources.getDrawable(getContext(), r2));
    }

    public Drawable getThumbDrawable() {
        return this.mThumbDrawable;
    }

    public void setThumbTintList(@Nullable ColorStateList r1) {
        this.mThumbTintList = r1;
        this.mHasThumbTint = true;
        applyThumbTint();
    }

    @Nullable
    public ColorStateList getThumbTintList() {
        return this.mThumbTintList;
    }

    public void setThumbTintMode(@Nullable PorterDuff.Mode r1) {
        this.mThumbTintMode = r1;
        this.mHasThumbTintMode = true;
        applyThumbTint();
    }

    @Nullable
    public PorterDuff.Mode getThumbTintMode() {
        return this.mThumbTintMode;
    }

    private void applyThumbTint() {
        if (this.mThumbDrawable != null) goto L5;
        return;
    L5:
        if (this.mHasThumbTint == false) goto L7;
    L8:
        this.mThumbDrawable = this.mThumbDrawable.mutate();
        if (this.mHasThumbTint == false) goto L12;
        DrawableCompat.setTintList(this.mThumbDrawable, this.mThumbTintList);
    L12:
        if (this.mHasThumbTintMode == false) goto L15;
        DrawableCompat.setTintMode(this.mThumbDrawable, this.mThumbTintMode);
    L15:
        if (this.mThumbDrawable.isStateful() == false) goto L20;
        this.mThumbDrawable.setState(getDrawableState());
        return;
    L20:
        return;
    L7:
        if (this.mHasThumbTintMode == true) goto L8;
    }

    public void setSplitTrack(boolean r1) {
        this.mSplitTrack = r1;
        invalidate();
    }

    public boolean getSplitTrack() {
        return this.mSplitTrack;
    }

    public CharSequence getTextOn() {
        return this.mTextOn;
    }

    public void setTextOn(CharSequence r1) {
        this.mTextOn = r1;
        requestLayout();
    }

    public CharSequence getTextOff() {
        return this.mTextOff;
    }

    public void setTextOff(CharSequence r1) {
        this.mTextOff = r1;
        requestLayout();
    }

    public void setShowText(boolean r2) {
        if (this.mShowText == r2) goto L6;
        this.mShowText = r2;
        requestLayout();
        return;
    }

    public boolean getShowText() {
        return this.mShowText;
    }

    @Override
    public void onMeasure(int r7, int r8) {
        if (this.mShowText == true) goto L5;
    L10:
        Rect r0 = this.mTempRect;
        Drawable r1 = this.mThumbDrawable;
        int r2 = 0;
        if (r1 == null) goto L13;
        r1.getPadding(r0);
        int r12 = (this.mThumbDrawable.getIntrinsicWidth() - r0.left) - r0.right;
        int r3 = this.mThumbDrawable.getIntrinsicHeight();
    L15:
        if (this.mShowText == false) goto L17;
        int r4 = Math.max(this.mOnLayout.getWidth(), this.mOffLayout.getWidth()) + (this.mThumbTextPadding * 2);
    L18:
        this.mThumbWidth = Math.max(r4, r12);
        Drawable r13 = this.mTrackDrawable;
        if (r13 == null) goto L21;
        r13.getPadding(r0);
        r2 = this.mTrackDrawable.getIntrinsicHeight();
    L22:
        int r14 = r0.left;
        int r02 = r0.right;
        Drawable r42 = this.mThumbDrawable;
        if (r42 == null) goto L25;
        Rect r43 = DrawableUtils.getOpticalBounds(r42);
        r14 = Math.max(r14, r43.left);
        r02 = Math.max(r02, r43.right);
    L25:
        int r03 = Math.max(this.mSwitchMinWidth, ((this.mThumbWidth * 2) + r14) + r02);
        int r15 = Math.max(r2, r3);
        this.mSwitchWidth = r03;
        this.mSwitchHeight = r15;
        super.onMeasure(r7, r8);
        if (getMeasuredHeight() >= r15) goto L29;
        setMeasuredDimension(getMeasuredWidthAndState(), r15);
        return;
    L29:
        return;
    L21:
        r0.setEmpty();
        goto L22
    L17:
        r4 = 0;
        goto L18
    L13:
        r12 = 0;
        r3 = 0;
        goto L15
    L5:
        if (this.mOnLayout != null) goto L8;
        this.mOnLayout = makeLayout(this.mTextOn);
    L8:
        if (this.mOffLayout != null) goto L10;
        this.mOffLayout = makeLayout(this.mTextOff);
        goto L10
    }

    @Override
    public void onPopulateAccessibilityEvent(AccessibilityEvent r2) {
        super.onPopulateAccessibilityEvent(r2);
        if (isChecked() == false) goto L5;
        CharSequence r0 = this.mTextOn;
    L6:
        if (r0 == null) goto L9;
        r2.getText().add(r0);
        return;
    L9:
        return;
    L5:
        r0 = this.mTextOff;
        goto L6
    }

    private Layout makeLayout(CharSequence r9) {
        TransformationMethod r0 = this.mSwitchTransformationMethod;
        if (r0 == null) goto L5;
        r9 = r0.getTransformation(r9, this);
    L5:
        CharSequence r1 = r9;
        TextPaint r2 = this.mTextPaint;
        if (r1 == null) goto L8;
        int r3 = (int) Math.ceil(Layout.getDesiredWidth(r1, r2));
    L10:
        return new StaticLayout(r1, r2, r3, Layout.Alignment.ALIGN_NORMAL, 1.0f, 0.0f, true);
    L8:
        r3 = 0;
        goto L10
    }

    private boolean hitThumb(float r7, float r8) {
        if (this.mThumbDrawable != null) goto L5;
        return false;
    L5:
        int r0 = getThumbOffset();
        this.mThumbDrawable.getPadding(this.mTempRect);
        int r2 = this.mSwitchTop;
        int r3 = this.mTouchSlop;
        int r22 = r2 - r3;
        int r4 = (this.mSwitchLeft + r0) - r3;
        int r02 = ((this.mThumbWidth + r4) + this.mTempRect.left) + this.mTempRect.right;
        int r32 = this.mTouchSlop;
        int r03 = r02 + r32;
        int r5 = this.mSwitchBottom + r32;
        if (r7 > r4) goto L8;
        return false;
    L8:
        if (r7 < r03) goto L10;
        return false;
    L10:
        if (r8 > r22) goto L12;
        return false;
    L12:
        if (r8 >= r5) goto L18;
        return true;
    L18:
        return false;
    }

    @Override
    public boolean onTouchEvent(MotionEvent r7) {
        this.mVelocityTracker.addMovement(r7);
        int r0 = r7.getActionMasked();
        if (r0 != 0) goto L5;
        float r02 = r7.getX();
        float r2 = r7.getY();
        if (isEnabled() == true) goto L43;
    L46:
        return super.onTouchEvent(r7);
    L43:
        if (hitThumb(r02, r2) == false) goto L46;
        this.mTouchMode = 1;
        this.mTouchX = r02;
        this.mTouchY = r2;
        goto L46
    L5:
        if (r0 == 1) goto L36;
        if (r0 != 2) goto L8;
        int r03 = this.mTouchMode;
        if (r03 == 0) goto L46;
        if (r03 == 1) goto L29;
        if (r03 != 2) goto L46;
        float r72 = r7.getX();
        int r04 = getThumbScrollRange();
        float r22 = r72 - this.mTouchX;
        if (r04 == 0) goto L19;
        float r23 = r22 / r04;
    L23:
        if (ViewUtils.isLayoutRtl(this) == false) goto L25;
        r23 = -r23;
    L25:
        float r05 = constrain(this.mThumbPosition + r23, 0.0f, 1.0f);
        if (r05 == this.mThumbPosition) goto L28;
        this.mTouchX = r72;
        setThumbPosition(r05);
    L28:
        return true;
    L19:
        if (r22 <= 0.0f) goto L21;
        r23 = 1.0f;
        goto L23
    L21:
        r23 = -1.0f;
        goto L23
    L29:
        float r06 = r7.getX();
        float r3 = r7.getY();
        if (Math.abs(r06 - this.mTouchX) <= this.mTouchSlop) goto L32;
    L33:
        this.mTouchMode = 2;
        getParent().requestDisallowInterceptTouchEvent(true);
        this.mTouchX = r06;
        this.mTouchY = r3;
        return true;
    L32:
        if (Math.abs(r3 - this.mTouchY) <= this.mTouchSlop) goto L46;
    L8:
        if (r0 != 3) goto L46;
    L36:
        if (this.mTouchMode != 2) goto L39;
        stopDrag(r7);
        super.onTouchEvent(r7);
        return true;
    L39:
        this.mTouchMode = 0;
        this.mVelocityTracker.clear();
        goto L46
    }

    private void cancelSuperTouch(MotionEvent r2) {
        MotionEvent r22 = MotionEvent.obtain(r2);
        r22.setAction(3);
        super.onTouchEvent(r22);
        r22.recycle();
    }

    private void stopDrag(MotionEvent r7) {
        this.mTouchMode = 0;
        boolean r2 = true;
        if (r7.getAction() == 1) goto L5;
    L7:
        boolean r1 = false;
    L8:
        boolean r3 = isChecked();
        if (r1 == false) goto L23;
        this.mVelocityTracker.computeCurrentVelocity(1000);
        float r12 = this.mVelocityTracker.getXVelocity();
        if (Math.abs(r12) > this.mMinFlingVelocity) goto L13;
        boolean r13 = getTargetCheckedState();
    L24:
        if (r13 == r3) goto L26;
        playSoundEffect(0);
    L26:
        setChecked(r13);
        cancelSuperTouch(r7);
        return;
    L13:
        if (ViewUtils.isLayoutRtl(this) == false) goto L18;
        if (r12 < 0.0f) goto L21;
    L20:
        r2 = false;
    L21:
        r13 = r2;
        goto L24
    L18:
        if (r12 <= 0.0f) goto L20;
    L23:
        r13 = r3;
        goto L24
    L5:
        if (isEnabled() == false) goto L7;
        r1 = true;
        goto L8
    }

    private void animateThumbToCheckedState(boolean r5) {
        if (r5 == false) goto L4;
        float r52 = 1.0f;
    L5:
        this.mPositionAnimator = ObjectAnimator.ofFloat(this, THUMB_POS, new float[]{r52});
        this.mPositionAnimator.setDuration(250);
        if (Build.VERSION.SDK_INT < 18) goto L8;
        this.mPositionAnimator.setAutoCancel(true);
    L8:
        this.mPositionAnimator.start();
        return;
    L4:
        r52 = 0.0f;
        goto L5
    }

    private void cancelPositionAnimator() {
        ObjectAnimator r0 = this.mPositionAnimator;
        if (r0 == null) goto L6;
        r0.cancel();
        return;
    }

    private boolean getTargetCheckedState() {
        if (this.mThumbPosition <= 0.5f) goto L5;
        return true;
    L5:
        return false;
    }

    void setThumbPosition(float r1) {
        this.mThumbPosition = r1;
        invalidate();
    }

    @Override
    public void toggle() {
        setChecked(!isChecked());
    }

    @Override
    public void setChecked(boolean r2) {
        super.setChecked(r2);
        boolean r22 = isChecked();
        if (getWindowToken() != null) goto L5;
    L7:
        cancelPositionAnimator();
        if (r22 == false) goto L10;
        float r23 = 1.0f;
    L11:
        setThumbPosition(r23);
        return;
    L10:
        r23 = 0.0f;
        goto L11
    L5:
        if (ViewCompat.isLaidOut(this) == false) goto L7;
        animateThumbToCheckedState(r22);
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
        super.onLayout(r1, r2, r3, r4, r5);
        int r22 = 0;
        if (this.mThumbDrawable == null) goto L9;
        Rect r12 = this.mTempRect;
        Drawable r32 = this.mTrackDrawable;
        if (r32 == null) goto L7;
        r32.getPadding(r12);
    L8:
        Rect r33 = DrawableUtils.getOpticalBounds(this.mThumbDrawable);
        int r42 = Math.max(0, r33.left - r12.left);
        r22 = Math.max(0, r33.right - r12.right);
    L11:
        if (ViewUtils.isLayoutRtl(this) == false) goto L13;
        int r13 = getPaddingLeft() + r42;
        int r34 = ((this.mSwitchWidth + r13) - r42) - r22;
    L14:
        int r23 = getGravity() & 112;
        if (r23 != 16) goto L17;
        int r24 = ((getPaddingTop() + getHeight()) - getPaddingBottom()) / 2;
        int r43 = this.mSwitchHeight;
        int r25 = r24 - (r43 / 2);
    L19:
        int r44 = r43 + r25;
    L22:
        this.mSwitchLeft = r13;
        this.mSwitchTop = r25;
        this.mSwitchBottom = r44;
        this.mSwitchRight = r34;
        return;
    L17:
        if (r23 == 80) goto L20;
        r25 = getPaddingTop();
        r43 = this.mSwitchHeight;
        goto L19
    L20:
        r44 = getHeight() - getPaddingBottom();
        r25 = r44 - this.mSwitchHeight;
        goto L22
    L13:
        r34 = (getWidth() - getPaddingRight()) - r22;
        r13 = ((r34 - this.mSwitchWidth) + r42) + r22;
        goto L14
    L7:
        r12.setEmpty();
        goto L8
    L9:
        r42 = 0;
        goto L11
    }

    @Override
    public void draw(Canvas r11) {
        Rect r0 = this.mTempRect;
        int r1 = this.mSwitchLeft;
        int r2 = this.mSwitchTop;
        int r3 = this.mSwitchRight;
        int r4 = this.mSwitchBottom;
        int r5 = getThumbOffset() + r1;
        Drawable r6 = this.mThumbDrawable;
        if (r6 == null) goto L5;
        Rect r62 = DrawableUtils.getOpticalBounds(r6);
    L6:
        Drawable r7 = this.mTrackDrawable;
        if (r7 == null) goto L26;
        r7.getPadding(r0);
        r5 = r5 + r0.left;
        if (r62 != null) goto L11;
        int r72 = r2;
    L24:
        int r63 = r4;
    L25:
        this.mTrackDrawable.setBounds(r1, r72, r3, r63);
        goto L26
    L11:
        if (r62.left <= r0.left) goto L14;
        r1 = r1 + (r62.left - r0.left);
    L14:
        if (r62.top <= r0.top) goto L16;
        r72 = (r62.top - r0.top) + r2;
    L18:
        if (r62.right <= r0.right) goto L21;
        r3 = r3 - (r62.right - r0.right);
    L21:
        if (r62.bottom <= r0.bottom) goto L24;
        r63 = r4 - (r62.bottom - r0.bottom);
        goto L25
    L16:
        r72 = r2;
    L26:
        Drawable r12 = this.mThumbDrawable;
        if (r12 == null) goto L31;
        r12.getPadding(r0);
        int r13 = r5 - r0.left;
        int r52 = (r5 + this.mThumbWidth) + r0.right;
        this.mThumbDrawable.setBounds(r13, r2, r52, r4);
        Drawable r02 = getBackground();
        if (r02 == null) goto L31;
        DrawableCompat.setHotspotBounds(r02, r13, r2, r52, r4);
    L31:
        super.draw(r11);
        return;
    L5:
        r62 = DrawableUtils.INSETS_NONE;
        goto L6
    }

    @Override
    protected void onDraw(Canvas r10) {
        super.onDraw(r10);
        Rect r0 = this.mTempRect;
        Drawable r1 = this.mTrackDrawable;
        if (r1 == null) goto L5;
        r1.getPadding(r0);
    L6:
        int r2 = this.mSwitchTop;
        int r3 = this.mSwitchBottom;
        int r22 = r2 + r0.top;
        int r32 = r3 - r0.bottom;
        Drawable r4 = this.mThumbDrawable;
        if (r1 != null) goto L9;
    L13:
        int r02 = r10.save();
        if (r4 == null) goto L17;
        r4.draw(r10);
    L17:
        if (getTargetCheckedState() == false) goto L19;
        Layout r12 = this.mOnLayout;
    L20:
        if (r12 == null) goto L29;
        int[] r5 = getDrawableState();
        ColorStateList r6 = this.mTextColors;
        if (r6 == null) goto L24;
        this.mTextPaint.setColor(r6.getColorForState(r5, 0));
    L24:
        this.mTextPaint.drawableState = r5;
        if (r4 == null) goto L27;
        Rect r42 = r4.getBounds();
        int r52 = r42.left + r42.right;
    L28:
        r10.translate((r52 / 2) - (r12.getWidth() / 2), ((r22 + r32) / 2) - (r12.getHeight() / 2));
        r12.draw(r10);
        goto L29
    L27:
        r52 = getWidth();
    L29:
        r10.restoreToCount(r02);
        return;
    L19:
        r12 = this.mOffLayout;
        goto L20
    L9:
        if (this.mSplitTrack == false) goto L12;
        if (r4 == null) goto L12;
        Rect r53 = DrawableUtils.getOpticalBounds(r4);
        r4.copyBounds(r0);
        r0.left += r53.left;
        r0.right -= r53.right;
        int r54 = r10.save();
        r10.clipRect(r0, Region.Op.DIFFERENCE);
        r1.draw(r10);
        r10.restoreToCount(r54);
    L12:
        r1.draw(r10);
        goto L13
    L5:
        r0.setEmpty();
        goto L6
    }

    @Override
    public int getCompoundPaddingLeft() {
        if (ViewUtils.isLayoutRtl(this) == false) goto L5;
        int r0 = super.getCompoundPaddingLeft() + this.mSwitchWidth;
        if (TextUtils.isEmpty(getText()) == false) goto L9;
        return r0;
    L9:
        return r0 + this.mSwitchPadding;
    L5:
        return super.getCompoundPaddingLeft();
    }

    @Override
    public int getCompoundPaddingRight() {
        if (ViewUtils.isLayoutRtl(this) == true) goto L5;
        int r0 = super.getCompoundPaddingRight() + this.mSwitchWidth;
        if (TextUtils.isEmpty(getText()) == false) goto L9;
        return r0;
    L9:
        return r0 + this.mSwitchPadding;
    L5:
        return super.getCompoundPaddingRight();
    }

    private int getThumbOffset() {
        if (ViewUtils.isLayoutRtl(this) == false) goto L5;
        float r0 = 1.0f - this.mThumbPosition;
    L7:
        return (int) ((r0 * getThumbScrollRange()) + 0.5f);
    L5:
        r0 = this.mThumbPosition;
        goto L7
    }

    private int getThumbScrollRange() {
        Drawable r0 = this.mTrackDrawable;
        if (r0 == null) goto L10;
        Rect r1 = this.mTempRect;
        r0.getPadding(r1);
        Drawable r02 = this.mThumbDrawable;
        if (r02 == null) goto L7;
        Rect r03 = DrawableUtils.getOpticalBounds(r02);
    L9:
        return ((((this.mSwitchWidth - this.mThumbWidth) - r1.left) - r1.right) - r03.left) - r03.right;
    L7:
        r03 = DrawableUtils.INSETS_NONE;
        goto L9
    L10:
        return 0;
    }

    @Override
    protected int[] onCreateDrawableState(int r2) {
        int[] r22 = super.onCreateDrawableState(r2 + 1);
        if (isChecked() == false) goto L5;
        mergeDrawableStates(r22, CHECKED_STATE_SET);
    L5:
        return r22;
    }

    @Override
    protected void drawableStateChanged() {
        super.drawableStateChanged();
        int[] r0 = getDrawableState();
        Drawable r1 = this.mThumbDrawable;
        boolean r2 = false;
        if (r1 != null) goto L5;
    L7:
        Drawable r12 = this.mTrackDrawable;
        if (r12 != null) goto L10;
    L12:
        if (r2 == false) goto L15;
        invalidate();
        return;
    L15:
        return;
    L10:
        if (r12.isStateful() == false) goto L12;
        r2 = r2 | r12.setState(r0);
        goto L12
    L5:
        if (r1.isStateful() == false) goto L7;
        r2 = false | r1.setState(r0);
        goto L7
    }

    @Override
    public void drawableHotspotChanged(float r3, float r4) {
        if (Build.VERSION.SDK_INT < 21) goto L5;
        super.drawableHotspotChanged(r3, r4);
    L5:
        Drawable r0 = this.mThumbDrawable;
        if (r0 == null) goto L8;
        DrawableCompat.setHotspot(r0, r3, r4);
    L8:
        Drawable r02 = this.mTrackDrawable;
        if (r02 == null) goto L12;
        DrawableCompat.setHotspot(r02, r3, r4);
        return;
    }

    @Override
    protected boolean verifyDrawable(Drawable r2) {
        if (super.verifyDrawable(r2) == false) goto L5;
    L10:
        return true;
    L5:
        if (r2 == this.mThumbDrawable) goto L10;
        if (r2 == this.mTrackDrawable) goto L10;
        return false;
    }

    @Override
    public void jumpDrawablesToCurrentState() {
        super.jumpDrawablesToCurrentState();
        Drawable r0 = this.mThumbDrawable;
        if (r0 == null) goto L5;
        r0.jumpToCurrentState();
    L5:
        Drawable r02 = this.mTrackDrawable;
        if (r02 == null) goto L8;
        r02.jumpToCurrentState();
    L8:
        ObjectAnimator r03 = this.mPositionAnimator;
        if (r03 != null) goto L11;
        return;
    L11:
        if (r03.isStarted() == false) goto L15;
        this.mPositionAnimator.end();
        this.mPositionAnimator = null;
        return;
    }

    @Override
    public void onInitializeAccessibilityEvent(AccessibilityEvent r2) {
        super.onInitializeAccessibilityEvent(r2);
        r2.setClassName(ACCESSIBILITY_EVENT_CLASS_NAME);
    }

    @Override
    public void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo r4) {
        super.onInitializeAccessibilityNodeInfo(r4);
        r4.setClassName(ACCESSIBILITY_EVENT_CLASS_NAME);
        if (isChecked() == false) goto L5;
        CharSequence r0 = this.mTextOn;
    L7:
        if (TextUtils.isEmpty(r0) == true) goto L13;
        CharSequence r1 = r4.getText();
        if (TextUtils.isEmpty(r1) == false) goto L11;
        r4.setText(r0);
        return;
    L11:
        StringBuilder r2 = new StringBuilder();
        r2.append(r1);
        r2.append(' ');
        r2.append(r0);
        r4.setText(r2);
        return;
    L13:
        return;
    L5:
        r0 = this.mTextOff;
        goto L7
    }

    @Override
    public void setCustomSelectionActionModeCallback(ActionMode.Callback r1) {
        super.setCustomSelectionActionModeCallback(TextViewCompat.wrapCustomSelectionActionModeCallback(this, r1));
    }
}
