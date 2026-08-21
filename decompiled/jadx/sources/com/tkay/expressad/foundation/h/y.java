package com.tkay.expressad.foundation.h;

import android.graphics.Rect;
import android.os.Build;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;

/* JADX INFO: loaded from: classes3.dex */
public final class y {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6962a = "ViewUtils";
    private static boolean b;

    /* JADX WARN: Removed duplicated region for block: B:43:0x00af  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static boolean a(android.view.View r7) {
        /*
            int r0 = r7.getVisibility()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            float r0 = r7.getAlpha()
            r2 = 1056964608(0x3f000000, float:0.5)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L13
            return r1
        L13:
            android.view.ViewParent r0 = r7.getParent()
            if (r0 == 0) goto L2e
            android.view.ViewParent r0 = r7.getParent()
            boolean r0 = r0 instanceof android.view.ViewGroup
            if (r0 == 0) goto L2e
            android.view.ViewParent r0 = r7.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L2e
            return r1
        L2e:
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            boolean r2 = r7.getGlobalVisibleRect(r0)
            int r3 = r0.bottom
            int r4 = r0.top
            int r3 = r3 - r4
            int r4 = r0.right
            int r0 = r0.left
            int r4 = r4 - r0
            int r3 = r3 * r4
            int r0 = r7.getMeasuredHeight()
            int r4 = r7.getMeasuredWidth()
            int r0 = r0 * r4
            int r0 = r0 / 2
            r4 = 0
            if (r3 < r0) goto L52
            r0 = r1
            goto L53
        L52:
            r0 = r4
        L53:
            if (r2 == 0) goto L59
            if (r0 == 0) goto L59
            r3 = r1
            goto L5a
        L59:
            r3 = r4
        L5a:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "View Judge : partVisible is "
            r5.<init>(r6)
            r5.append(r2)
            java.lang.String r2 = " halfPercentVisible is "
            r5.append(r2)
            r5.append(r0)
            if (r3 != 0) goto L6f
            return r1
        L6f:
            r0 = r7
        L70:
            android.view.ViewParent r2 = r0.getParent()
            boolean r2 = r2 instanceof android.view.ViewGroup
            if (r2 == 0) goto Lbb
            android.view.ViewParent r2 = r0.getParent()
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            int r0 = a(r0, r2)
            int r0 = r0 + r1
        L83:
            int r3 = r2.getChildCount()
            if (r0 >= r3) goto Lb9
            android.view.View r3 = r2.getChildAt(r0)
            int r5 = r3.getVisibility()
            if (r5 != 0) goto Lb6
            boolean r5 = a(r7, r3)
            if (r5 == 0) goto Lb6
            boolean r5 = r3 instanceof android.view.ViewGroup
            if (r5 == 0) goto Laf
            r5 = r3
            android.view.ViewGroup r5 = (android.view.ViewGroup) r5
            int r6 = r5.getChildCount()
            if (r6 <= 0) goto Laf
            boolean r3 = b(r7, r5)
            com.tkay.expressad.foundation.h.y.b = r4
            if (r3 == 0) goto Lb6
            return r1
        Laf:
            boolean r3 = b(r3)
            if (r3 == 0) goto Lb6
            return r1
        Lb6:
            int r0 = r0 + 1
            goto L83
        Lb9:
            r0 = r2
            goto L70
        Lbb:
            return r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.foundation.h.y.a(android.view.View):boolean");
    }

    private static boolean b(View view) {
        if (view.getAlpha() <= 0.5f) {
            return false;
        }
        if (Build.VERSION.SDK_INT >= 19) {
            return view.getBackground() != null && view.getBackground().getAlpha() > 127;
        }
        return true;
    }

    private static boolean a(View view, View view2) {
        Rect rect = new Rect();
        view.getGlobalVisibleRect(rect);
        Rect rect2 = new Rect();
        view2.getGlobalVisibleRect(rect2);
        return Rect.intersects(rect, rect2) && ((Math.min(rect.right, rect2.right) - Math.max(rect.left, rect2.left)) * (Math.min(rect.bottom, rect2.bottom) - Math.max(rect.top, rect2.top))) * 2 >= view.getMeasuredHeight() * view.getMeasuredWidth();
    }

    private static int a(View view, ViewGroup viewGroup) {
        int i = 0;
        while (i < viewGroup.getChildCount() && viewGroup.getChildAt(i) != view) {
            i++;
        }
        return i;
    }

    private static boolean b(View view, ViewGroup viewGroup) {
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            View childAt = viewGroup.getChildAt(i);
            if (childAt.getVisibility() == 0 && a(view, childAt)) {
                if ((childAt instanceof WebView) && childAt.getVisibility() == 0) {
                    b = true;
                }
                if (b(childAt)) {
                    b = true;
                }
                if (b) {
                    break;
                }
                if (childAt instanceof ViewGroup) {
                    b(view, (ViewGroup) childAt);
                }
            }
        }
        return b;
    }
}
