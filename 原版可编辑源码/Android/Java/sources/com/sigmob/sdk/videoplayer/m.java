package com.sigmob.sdk.videoplayer;

import android.content.Context;
import android.util.AttributeSet;
import android.util.Log;
import android.view.TextureView;
import android.view.View;

public class m extends TextureView {
    protected static final String a = "ResizeTextureView";
    public int b;
    public int c;

    public m(Context context) {
        super(context);
        this.b = 0;
        this.c = 0;
        this.b = 0;
        this.c = 0;
    }

    public m(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = 0;
        this.c = 0;
        this.b = 0;
        this.c = 0;
    }

    public void a(int i, int i2) {
        if (this.b == i && this.c == i2) {
            return;
        }
        this.b = i;
        this.c = i2;
        requestLayout();
    }

    /* JADX WARN: Code restructure failed: missing block: B:40:0x00eb, code lost:
    
        if (r2 > r12) goto L41;
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x00ed, code lost:
    
        r2 = (r12 * r4) / r3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:49:0x0100, code lost:
    
        if (r2 > r12) goto L41;
     */
    /* JADX WARN: Removed duplicated region for block: B:70:0x013e  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected void onMeasure(int i, int i2) {
        int i3;
        int i4;
        int i5;
        int i6;
        int i7;
        Log.i(a, "onMeasure  [" + hashCode() + "] ");
        int rotation = (int) getRotation();
        int i8 = this.b;
        int i9 = this.c;
        int measuredHeight = ((View) getParent()).getMeasuredHeight();
        int measuredWidth = ((View) getParent()).getMeasuredWidth();
        if (measuredWidth != 0 && measuredHeight != 0 && i8 != 0 && i9 != 0 && g.u == 1) {
            if (rotation == 90 || rotation == 270) {
                measuredWidth = measuredHeight;
                measuredHeight = measuredWidth;
            }
            i9 = (i8 * measuredHeight) / measuredWidth;
        }
        if (rotation == 90 || rotation == 270) {
            i3 = i;
            i4 = i2;
        } else {
            i4 = i;
            i3 = i2;
        }
        int defaultSize = getDefaultSize(i8, i4);
        int defaultSize2 = getDefaultSize(i9, i3);
        if (i8 > 0 && i9 > 0) {
            int mode = View.MeasureSpec.getMode(i4);
            int size = View.MeasureSpec.getSize(i4);
            int mode2 = View.MeasureSpec.getMode(i3);
            int size2 = View.MeasureSpec.getSize(i3);
            Log.i(a, "widthMeasureSpec  [" + View.MeasureSpec.toString(i4) + "]");
            Log.i(a, "heightMeasureSpec [" + View.MeasureSpec.toString(i3) + "]");
            if (mode == 1073741824 && mode2 == 1073741824) {
                i7 = i8 * size2;
                int i10 = size * i9;
                if (i7 < i10) {
                    defaultSize = i7 / i9;
                } else if (i7 > i10) {
                    i6 = i10 / i8;
                    defaultSize = size;
                    defaultSize2 = i6;
                } else {
                    defaultSize = size;
                }
                defaultSize2 = size2;
            } else {
                if (mode == 1073741824) {
                    i6 = (size * i9) / i8;
                    if (mode2 == Integer.MIN_VALUE && i6 > size2) {
                        i7 = size2 * i8;
                        defaultSize = i7 / i9;
                        defaultSize2 = size2;
                    }
                } else if (mode2 == 1073741824) {
                    i5 = (size2 * i8) / i9;
                    if (mode == Integer.MIN_VALUE) {
                    }
                    defaultSize = i5;
                    defaultSize2 = size2;
                } else {
                    if (mode2 != Integer.MIN_VALUE || i9 <= size2) {
                        i5 = i8;
                        size2 = i9;
                    } else {
                        i5 = (size2 * i8) / i9;
                    }
                    if (mode == Integer.MIN_VALUE) {
                    }
                    defaultSize = i5;
                    defaultSize2 = size2;
                }
                defaultSize = size;
                defaultSize2 = i6;
            }
        }
        if (measuredWidth == 0 || measuredHeight == 0 || i8 == 0 || i9 == 0) {
            i8 = defaultSize;
            i9 = defaultSize2;
        } else if (g.u != 3) {
            if (g.u == 2) {
                if (rotation == 90 || rotation == 270) {
                    int i11 = measuredWidth;
                    measuredWidth = measuredHeight;
                    measuredHeight = i11;
                }
                double d = ((double) i9) / ((double) i8);
                double d2 = measuredHeight;
                double d3 = measuredWidth;
                double d4 = d2 / d3;
                if (d > d4) {
                    i9 = (int) ((d3 / ((double) defaultSize)) * ((double) defaultSize2));
                    i8 = measuredWidth;
                } else if (d < d4) {
                    i8 = (int) ((d2 / ((double) defaultSize2)) * ((double) defaultSize));
                    i9 = measuredHeight;
                }
            }
        }
        setMeasuredDimension(i8, i9);
    }

    @Override
    public void setRotation(float f) {
        if (f != getRotation()) {
            super.setRotation(f);
            requestLayout();
        }
    }
}
