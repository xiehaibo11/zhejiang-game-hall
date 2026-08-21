package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class ParserCursor {
    private final int lowerBound;
    private int pos;
    private final int upperBound;

    public ParserCursor(int r1, int r2) {
            r0 = this;
            r0.<init>()
            if (r1 < 0) goto L16
            if (r1 > r2) goto Le
            r0.lowerBound = r1
            r0.upperBound = r2
            r0.pos = r1
            return
        Le:
            java.lang.IndexOutOfBoundsException r1 = new java.lang.IndexOutOfBoundsException
            java.lang.String r2 = "Lower bound cannot be greater then upper bound"
            r1.<init>(r2)
            throw r1
        L16:
            java.lang.IndexOutOfBoundsException r1 = new java.lang.IndexOutOfBoundsException
            java.lang.String r2 = "Lower bound cannot be negative"
            r1.<init>(r2)
            throw r1
    }

    public boolean atEnd() {
            r2 = this;
            int r0 = r2.pos
            int r1 = r2.upperBound
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public int getLowerBound() {
            r1 = this;
            int r0 = r1.lowerBound
            return r0
    }

    public int getPos() {
            r1 = this;
            int r0 = r1.pos
            return r0
    }

    public int getUpperBound() {
            r1 = this;
            int r0 = r1.upperBound
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 91
            r0.append(r1)
            int r1 = r3.lowerBound
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r0.append(r1)
            r1 = 62
            r0.append(r1)
            int r2 = r3.pos
            java.lang.String r2 = java.lang.Integer.toString(r2)
            r0.append(r2)
            r0.append(r1)
            int r1 = r3.upperBound
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r0.append(r1)
            r1 = 93
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void updatePos(int r4) {
            r3 = this;
            int r0 = r3.lowerBound
            java.lang.String r1 = "pos: "
            if (r4 < r0) goto L2c
            int r0 = r3.upperBound
            if (r4 > r0) goto Ld
            r3.pos = r4
            return
        Ld:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            r2.append(r4)
            java.lang.String r4 = " > upperBound: "
            r2.append(r4)
            int r4 = r3.upperBound
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r0.<init>(r4)
            throw r0
        L2c:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            r2.append(r4)
            java.lang.String r4 = " < lowerBound: "
            r2.append(r4)
            int r4 = r3.lowerBound
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r0.<init>(r4)
            throw r0
    }
}
