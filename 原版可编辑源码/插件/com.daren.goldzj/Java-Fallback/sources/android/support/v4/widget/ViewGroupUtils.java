package android.support.v4.widget;

import android.graphics.Matrix;
import android.graphics.Rect;
import android.graphics.RectF;
import android.support.annotation.RestrictTo;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;

@RestrictTo({RestrictTo.Scope.LIBRARY})
public class ViewGroupUtils {
    private static final ThreadLocal<Matrix> sMatrix = null;
    private static final ThreadLocal<RectF> sRectF = null;

    static {
        sMatrix = new ThreadLocal();
        sRectF = new ThreadLocal();
    }

    static void offsetDescendantRect(ViewGroup r3, View r4, Rect r5) {
        Matrix r0 = sMatrix.get();
        if (r0 != null) goto L5;
        r0 = new Matrix();
        sMatrix.set(r0);
    L6:
        offsetDescendantMatrix(r3, r4, r0);
        RectF r32 = sRectF.get();
        if (r32 != null) goto L9;
        r32 = new RectF();
        sRectF.set(r32);
    L9:
        r32.set(r5);
        r0.mapRect(r32);
        r5.set((int) (r32.left + 0.5f), (int) (r32.top + 0.5f), (int) (r32.right + 0.5f), (int) (r32.bottom + 0.5f));
        return;
    L5:
        r0.reset();
        goto L6
    }

    public static void getDescendantRect(ViewGroup r3, View r4, Rect r5) {
        r5.set(0, 0, r4.getWidth(), r4.getHeight());
        offsetDescendantRect(r3, r4, r5);
    }

    private static void offsetDescendantMatrix(ViewParent r2, View r3, Matrix r4) {
        Object r0 = r3.getParent();
        if ((r0 instanceof View) == false) goto L6;
        if (r0 == r2) goto L6;
        offsetDescendantMatrix(r2, (View) r0, r4);
        r4.preTranslate(-r0.getScrollX(), -r0.getScrollY());
    L6:
        r4.preTranslate(r3.getLeft(), r3.getTop());
        if (r3.getMatrix().isIdentity() == true) goto L10;
        r4.preConcat(r3.getMatrix());
        return;
    }

    private ViewGroupUtils() {
    }
}
