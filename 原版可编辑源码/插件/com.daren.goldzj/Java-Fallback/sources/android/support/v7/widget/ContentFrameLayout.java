package android.support.v7.widget;

import android.content.Context;
import android.graphics.Rect;
import android.support.annotation.RestrictTo;
import android.support.v4.view.ViewCompat;
import android.util.AttributeSet;
import android.util.DisplayMetrics;
import android.util.TypedValue;
import android.view.View;
import android.widget.FrameLayout;

@RestrictTo({RestrictTo.Scope.LIBRARY})
public class ContentFrameLayout extends FrameLayout {
    private OnAttachListener mAttachListener;
    private final Rect mDecorPadding;
    private TypedValue mFixedHeightMajor;
    private TypedValue mFixedHeightMinor;
    private TypedValue mFixedWidthMajor;
    private TypedValue mFixedWidthMinor;
    private TypedValue mMinWidthMajor;
    private TypedValue mMinWidthMinor;

    public interface OnAttachListener {
        void onAttachedFromWindow();

        void onDetachedFromWindow();
    }

    public ContentFrameLayout(Context r2) {
        this(r2, null);
    }

    public ContentFrameLayout(Context r2, AttributeSet r3) {
        this(r2, r3, 0);
    }

    public ContentFrameLayout(Context r1, AttributeSet r2, int r3) {
        super(r1, r2, r3);
        this.mDecorPadding = new Rect();
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void dispatchFitSystemWindows(Rect r1) {
        fitSystemWindows(r1);
    }

    public void setAttachListener(OnAttachListener r1) {
        this.mAttachListener = r1;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setDecorPadding(int r2, int r3, int r4, int r5) {
        this.mDecorPadding.set(r2, r3, r4, r5);
        if (ViewCompat.isLaidOut(this) == false) goto L6;
        requestLayout();
        return;
    }

    @Override
    protected void onMeasure(int r14, int r15) {
        DisplayMetrics r0 = getContext().getResources().getDisplayMetrics();
        boolean r3 = true;
        if (r0.widthPixels >= r0.heightPixels) goto L5;
        boolean r1 = true;
    L6:
        int r2 = View.MeasureSpec.getMode(r14);
        int r5 = View.MeasureSpec.getMode(r15);
        if (r2 != Integer.MIN_VALUE) goto L24;
        if (r1 == false) goto L10;
        TypedValue r10 = this.mFixedWidthMinor;
    L11:
        if (r10 == null) goto L24;
        if (r10.type == 0) goto L24;
        if (r10.type != 5) goto L19;
        float r102 = r10.getDimension(r0);
    L17:
        int r103 = (int) r102;
    L22:
        if (r103 <= 0) goto L24;
        int r104 = View.MeasureSpec.makeMeasureSpec(Math.min(r103 - (this.mDecorPadding.left + this.mDecorPadding.right), View.MeasureSpec.getSize(r14)), 1073741824);
        boolean r142 = true;
    L25:
        if (r5 != Integer.MIN_VALUE) goto L42;
        if (r1 == false) goto L28;
        TypedValue r52 = this.mFixedHeightMajor;
    L29:
        if (r52 == null) goto L42;
        if (r52.type == 0) goto L42;
        if (r52.type != 5) goto L37;
        float r53 = r52.getDimension(r0);
    L35:
        int r54 = (int) r53;
    L40:
        if (r54 <= 0) goto L42;
        r15 = View.MeasureSpec.makeMeasureSpec(Math.min(r54 - (this.mDecorPadding.top + this.mDecorPadding.bottom), View.MeasureSpec.getSize(r15)), 1073741824);
        goto L42
    L37:
        if (r52.type != 6) goto L39;
        r53 = r52.getFraction(r0.heightPixels, r0.heightPixels);
        goto L35
    L39:
        r54 = 0;
        goto L40
    L28:
        r52 = this.mFixedHeightMinor;
    L42:
        super.onMeasure(r104, r15);
        int r55 = getMeasuredWidth();
        int r105 = View.MeasureSpec.makeMeasureSpec(r55, 1073741824);
        if (r142 == true) goto L63;
        if (r2 != Integer.MIN_VALUE) goto L63;
        if (r1 == false) goto L47;
        TypedValue r143 = this.mMinWidthMinor;
    L48:
        if (r143 == null) goto L63;
        if (r143.type == 0) goto L63;
        if (r143.type != 5) goto L56;
        float r144 = r143.getDimension(r0);
    L54:
        int r145 = (int) r144;
    L59:
        if (r145 <= 0) goto L61;
        r145 = r145 - (this.mDecorPadding.left + this.mDecorPadding.right);
    L61:
        if (r55 >= r145) goto L63;
        r105 = View.MeasureSpec.makeMeasureSpec(r145, 1073741824);
    L64:
        if (r3 == false) goto L67;
        super.onMeasure(r105, r15);
        return;
    L67:
        return;
    L56:
        if (r143.type != 6) goto L58;
        r144 = r143.getFraction(r0.widthPixels, r0.widthPixels);
        goto L54
    L58:
        r145 = 0;
        goto L59
    L47:
        r143 = this.mMinWidthMajor;
    L63:
        r3 = false;
        goto L64
    L19:
        if (r10.type != 6) goto L21;
        r102 = r10.getFraction(r0.widthPixels, r0.widthPixels);
        goto L17
    L21:
        r103 = 0;
        goto L22
    L10:
        r10 = this.mFixedWidthMajor;
    L24:
        r104 = r14;
        r142 = false;
        goto L25
    L5:
        r1 = false;
        goto L6
    }

    public TypedValue getMinWidthMajor() {
        if (this.mMinWidthMajor != null) goto L6;
        this.mMinWidthMajor = new TypedValue();
    L6:
        return this.mMinWidthMajor;
    }

    public TypedValue getMinWidthMinor() {
        if (this.mMinWidthMinor != null) goto L6;
        this.mMinWidthMinor = new TypedValue();
    L6:
        return this.mMinWidthMinor;
    }

    public TypedValue getFixedWidthMajor() {
        if (this.mFixedWidthMajor != null) goto L6;
        this.mFixedWidthMajor = new TypedValue();
    L6:
        return this.mFixedWidthMajor;
    }

    public TypedValue getFixedWidthMinor() {
        if (this.mFixedWidthMinor != null) goto L6;
        this.mFixedWidthMinor = new TypedValue();
    L6:
        return this.mFixedWidthMinor;
    }

    public TypedValue getFixedHeightMajor() {
        if (this.mFixedHeightMajor != null) goto L6;
        this.mFixedHeightMajor = new TypedValue();
    L6:
        return this.mFixedHeightMajor;
    }

    public TypedValue getFixedHeightMinor() {
        if (this.mFixedHeightMinor != null) goto L6;
        this.mFixedHeightMinor = new TypedValue();
    L6:
        return this.mFixedHeightMinor;
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        OnAttachListener r0 = this.mAttachListener;
        if (r0 == null) goto L6;
        r0.onAttachedFromWindow();
        return;
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        OnAttachListener r0 = this.mAttachListener;
        if (r0 == null) goto L6;
        r0.onDetachedFromWindow();
        return;
    }
}
