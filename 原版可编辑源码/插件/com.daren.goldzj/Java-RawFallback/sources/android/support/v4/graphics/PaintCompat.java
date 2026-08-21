package android.support.v4.graphics;

public final class PaintCompat {
    private static final java.lang.String EM_STRING = "m";
    private static final java.lang.String TOFU_STRING = "\udfffd";
    private static final java.lang.ThreadLocal<android.support.v4.util.Pair<android.graphics.Rect, android.graphics.Rect>> sRectThreadLocal = null;

    static {
            java.lang.ThreadLocal r0 = new java.lang.ThreadLocal
            r0.<init>()
            android.support.v4.graphics.PaintCompat.sRectThreadLocal = r0
            return
    }

    private PaintCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean hasGlyph(@android.support.annotation.NonNull android.graphics.Paint r9, @android.support.annotation.NonNull java.lang.String r10) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            boolean r9 = r9.hasGlyph(r10)
            return r9
        Lb:
            int r0 = r10.length()
            r1 = 1
            r2 = 0
            if (r0 != r1) goto L1e
            char r3 = r10.charAt(r2)
            boolean r3 = java.lang.Character.isWhitespace(r3)
            if (r3 == 0) goto L1e
            return r1
        L1e:
            java.lang.String r3 = "\udfffd"
            float r4 = r9.measureText(r3)
            java.lang.String r5 = "m"
            float r5 = r9.measureText(r5)
            float r6 = r9.measureText(r10)
            r7 = 0
            int r8 = (r6 > r7 ? 1 : (r6 == r7 ? 0 : -1))
            if (r8 != 0) goto L34
            return r2
        L34:
            int r8 = r10.length()
            int r8 = r10.codePointCount(r2, r8)
            if (r8 <= r1) goto L5f
            r8 = 1073741824(0x40000000, float:2.0)
            float r5 = r5 * r8
            int r5 = (r6 > r5 ? 1 : (r6 == r5 ? 0 : -1))
            if (r5 <= 0) goto L47
            return r2
        L47:
            r5 = 0
        L48:
            if (r5 >= r0) goto L5a
            int r8 = r10.codePointAt(r5)
            int r8 = java.lang.Character.charCount(r8)
            int r8 = r8 + r5
            float r5 = r9.measureText(r10, r5, r8)
            float r7 = r7 + r5
            r5 = r8
            goto L48
        L5a:
            int r5 = (r6 > r7 ? 1 : (r6 == r7 ? 0 : -1))
            if (r5 < 0) goto L5f
            return r2
        L5f:
            int r4 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r4 == 0) goto L64
            return r1
        L64:
            android.support.v4.util.Pair r4 = obtainEmptyRects()
            r5 = 2
            F r6 = r4.first
            android.graphics.Rect r6 = (android.graphics.Rect) r6
            r9.getTextBounds(r3, r2, r5, r6)
            S r3 = r4.second
            android.graphics.Rect r3 = (android.graphics.Rect) r3
            r9.getTextBounds(r10, r2, r0, r3)
            F r9 = r4.first
            android.graphics.Rect r9 = (android.graphics.Rect) r9
            S r10 = r4.second
            boolean r9 = r9.equals(r10)
            r9 = r9 ^ r1
            return r9
    }

    private static android.support.v4.util.Pair<android.graphics.Rect, android.graphics.Rect> obtainEmptyRects() {
            java.lang.ThreadLocal<android.support.v4.util.Pair<android.graphics.Rect, android.graphics.Rect>> r0 = android.support.v4.graphics.PaintCompat.sRectThreadLocal
            java.lang.Object r0 = r0.get()
            android.support.v4.util.Pair r0 = (android.support.v4.util.Pair) r0
            if (r0 != 0) goto L1f
            android.support.v4.util.Pair r0 = new android.support.v4.util.Pair
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.<init>(r1, r2)
            java.lang.ThreadLocal<android.support.v4.util.Pair<android.graphics.Rect, android.graphics.Rect>> r1 = android.support.v4.graphics.PaintCompat.sRectThreadLocal
            r1.set(r0)
            goto L2d
        L1f:
            F r1 = r0.first
            android.graphics.Rect r1 = (android.graphics.Rect) r1
            r1.setEmpty()
            S r1 = r0.second
            android.graphics.Rect r1 = (android.graphics.Rect) r1
            r1.setEmpty()
        L2d:
            return r0
    }
}
