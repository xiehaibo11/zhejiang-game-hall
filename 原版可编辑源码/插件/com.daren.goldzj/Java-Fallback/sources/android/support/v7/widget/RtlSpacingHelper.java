package android.support.v7.widget;

class RtlSpacingHelper {
    public static final int UNDEFINED = Integer.MIN_VALUE;
    private int mEnd;
    private int mExplicitLeft;
    private int mExplicitRight;
    private boolean mIsRelative;
    private boolean mIsRtl;
    private int mLeft;
    private int mRight;
    private int mStart;

    RtlSpacingHelper() {
        this.mLeft = 0;
        this.mRight = 0;
        this.mStart = Integer.MIN_VALUE;
        this.mEnd = Integer.MIN_VALUE;
        this.mExplicitLeft = 0;
        this.mExplicitRight = 0;
        this.mIsRtl = false;
        this.mIsRelative = false;
    }

    public int getLeft() {
        return this.mLeft;
    }

    public int getRight() {
        return this.mRight;
    }

    public int getStart() {
        if (this.mIsRtl == false) goto L6;
        return this.mRight;
    L6:
        return this.mLeft;
    }

    public int getEnd() {
        if (this.mIsRtl == false) goto L6;
        return this.mLeft;
    L6:
        return this.mRight;
    }

    public void setRelative(int r3, int r4) {
        this.mStart = r3;
        this.mEnd = r4;
        this.mIsRelative = true;
        if (this.mIsRtl == false) goto L8;
        if (r4 == Integer.MIN_VALUE) goto L6;
        this.mLeft = r4;
    L6:
        if (r3 == Integer.MIN_VALUE) goto L13;
        this.mRight = r3;
        return;
    L13:
        return;
    L8:
        if (r3 == Integer.MIN_VALUE) goto L10;
        this.mLeft = r3;
    L10:
        if (r4 == Integer.MIN_VALUE) goto L15;
        this.mRight = r4;
        return;
    }

    public void setAbsolute(int r2, int r3) {
        this.mIsRelative = false;
        if (r2 == Integer.MIN_VALUE) goto L5;
        this.mExplicitLeft = r2;
        this.mLeft = r2;
    L5:
        if (r3 == Integer.MIN_VALUE) goto L8;
        this.mExplicitRight = r3;
        this.mRight = r3;
        return;
    }

    public void setDirection(boolean r2) {
        if (r2 != this.mIsRtl) goto L5;
        return;
    L5:
        this.mIsRtl = r2;
        if (this.mIsRelative == true) goto L8;
        this.mLeft = this.mExplicitLeft;
        this.mRight = this.mExplicitRight;
        return;
    L8:
        if (r2 == false) goto L18;
        int r22 = this.mEnd;
        if (r22 != Integer.MIN_VALUE) goto L13;
        r22 = this.mExplicitLeft;
    L13:
        this.mLeft = r22;
        int r23 = this.mStart;
        if (r23 != Integer.MIN_VALUE) goto L17;
        r23 = this.mExplicitRight;
    L17:
        this.mRight = r23;
        return;
    L18:
        int r24 = this.mStart;
        if (r24 != Integer.MIN_VALUE) goto L22;
        r24 = this.mExplicitLeft;
    L22:
        this.mLeft = r24;
        int r25 = this.mEnd;
        if (r25 != Integer.MIN_VALUE) goto L26;
        r25 = this.mExplicitRight;
    L26:
        this.mRight = r25;
    }
}
