package android.support.v4.graphics;

import android.graphics.PointF;
import android.support.annotation.NonNull;
import android.support.v4.util.Preconditions;

public final class PathSegment {
    private final PointF mEnd;
    private final float mEndFraction;
    private final PointF mStart;
    private final float mStartFraction;

    public PathSegment(@NonNull PointF r2, float r3, @NonNull PointF r4, float r5) {
        this.mStart = (PointF) Preconditions.checkNotNull(r2, "start == null");
        this.mStartFraction = r3;
        this.mEnd = (PointF) Preconditions.checkNotNull(r4, "end == null");
        this.mEndFraction = r5;
    }

    @NonNull
    public PointF getStart() {
        return this.mStart;
    }

    public float getStartFraction() {
        return this.mStartFraction;
    }

    @NonNull
    public PointF getEnd() {
        return this.mEnd;
    }

    public float getEndFraction() {
        return this.mEndFraction;
    }

    public boolean equals(Object r5) {
        if (this != r5) goto L6;
        return true;
    L6:
        if ((r5 instanceof PathSegment) == true) goto L8;
        return false;
    L8:
        PathSegment r52 = (PathSegment) r5;
        if (Float.compare(this.mStartFraction, r52.mStartFraction) == 0) goto L11;
    L17:
        return false;
    L11:
        if (Float.compare(this.mEndFraction, r52.mEndFraction) != 0) goto L17;
        if (this.mStart.equals(r52.mStart) == false) goto L17;
        if (this.mEnd.equals(r52.mEnd) == false) goto L17;
        return true;
    }

    public int hashCode() {
        int r0 = this.mStart.hashCode() * 31;
        float r1 = this.mStartFraction;
        int r2 = 0;
        if (r1 == 0.0f) goto L5;
        int r12 = Float.floatToIntBits(r1);
    L6:
        int r02 = (((r0 + r12) * 31) + this.mEnd.hashCode()) * 31;
        float r13 = this.mEndFraction;
        if (r13 == 0.0f) goto L10;
        r2 = Float.floatToIntBits(r13);
    L10:
        return r02 + r2;
    L5:
        r12 = 0;
        goto L6
    }

    public String toString() {
        return "PathSegment{start=" + this.mStart + ", startFraction=" + this.mStartFraction + ", end=" + this.mEnd + ", endFraction=" + this.mEndFraction + '}';
    }
}
