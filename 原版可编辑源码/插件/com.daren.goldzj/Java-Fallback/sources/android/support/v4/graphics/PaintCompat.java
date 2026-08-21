package android.support.v4.graphics;

import android.graphics.Paint;
import android.graphics.Rect;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.v4.util.Pair;

public final class PaintCompat {
    private static final String EM_STRING = "m";
    private static final String TOFU_STRING = "\udfffd";
    private static final ThreadLocal<Pair<Rect, Rect>> sRectThreadLocal = null;

    static {
        sRectThreadLocal = new ThreadLocal();
    }

    public static boolean hasGlyph(@NonNull Paint r9, @NonNull String r10) {
        if (Build.VERSION.SDK_INT >= 23) goto L5;
        int r0 = r10.length();
        if (r0 == 1) goto L9;
    L11:
        float r4 = r9.measureText(TOFU_STRING);
        float r5 = r9.measureText(EM_STRING);
        float r6 = r9.measureText(r10);
        float r7 = 0.0f;
        if (r6 != 0.0f) goto L15;
        return false;
    L15:
        if (r10.codePointCount(0, r10.length()) <= 1) goto L26;
        if (r6 <= (r5 * 2.0f)) goto L19;
        return false;
    L19:
        int r52 = 0;
    L20:
        if (r52 >= r0) goto L23;
        int r8 = Character.charCount(r10.codePointAt(r52)) + r52;
        r7 = r7 + r9.measureText(r10, r52, r8);
        r52 = r8;
        goto L20
    L23:
        if (r6 < r7) goto L26;
        return false;
    L26:
        if (r6 == r4) goto L28;
        return true;
    L28:
        Pair<Rect, Rect> r42 = obtainEmptyRects();
        r9.getTextBounds(TOFU_STRING, 0, 2, r42.first);
        r9.getTextBounds(r10, 0, r0, r42.second);
        return !r42.first.equals(r42.second);
    L9:
        if (Character.isWhitespace(r10.charAt(0)) == false) goto L11;
        return true;
    L5:
        return r9.hasGlyph(r10);
    }

    private static Pair<Rect, Rect> obtainEmptyRects() {
        Pair<Rect, Rect> r0 = sRectThreadLocal.get();
        if (r0 != null) goto L5;
        Pair<Rect, Rect> r02 = new Pair(new Rect(), new Rect());
        sRectThreadLocal.set(r02);
        return r02;
    L5:
        r0.first.setEmpty();
        r0.second.setEmpty();
        return r0;
    }

    private PaintCompat() {
    }
}
