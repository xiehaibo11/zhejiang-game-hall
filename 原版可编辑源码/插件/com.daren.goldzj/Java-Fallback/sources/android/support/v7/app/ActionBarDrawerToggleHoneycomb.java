package android.support.v7.app;

import android.R;
import android.app.Activity;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import java.lang.reflect.Method;

class ActionBarDrawerToggleHoneycomb {
    private static final String TAG = "ActionBarDrawerToggleHC";
    private static final int[] THEME_ATTRS = null;

    static class SetIndicatorInfo {
        public Method setHomeActionContentDescription;
        public Method setHomeAsUpIndicator;
        public ImageView upIndicatorView;

        SetIndicatorInfo(Activity r7) {
            this.setHomeAsUpIndicator = android.app.ActionBar.class.getDeclaredMethod("setHomeAsUpIndicator", new Class[]{Drawable.class});     // Catch: NoSuchMethodException -> L5
            this.setHomeActionContentDescription = android.app.ActionBar.class.getDeclaredMethod("setHomeActionContentDescription", new Class[]{Integer.TYPE});     // Catch: NoSuchMethodException -> L5
            return;
        L5:
            View r72 = r7.findViewById(R.id.home);
            if (r72 != null) goto L8;
            return;
        L8:
            ViewGroup r73 = (ViewGroup) r72.getParent();
            if (r73.getChildCount() == 2) goto L11;
            return;
        L11:
            View r0 = r73.getChildAt(0);
            View r74 = r73.getChildAt(1);
            if (r0.getId() == 16908332) goto L16;
            r74 = r0;
        L16:
            if ((r74 instanceof ImageView) == false) goto L21;
            this.upIndicatorView = (ImageView) r74;
            return;
        }
    }

    static {
        THEME_ATTRS = new int[]{R.attr.homeAsUpIndicator};
    }

    public static SetIndicatorInfo setActionBarUpIndicator(SetIndicatorInfo r5, Activity r6, Drawable r7, int r8) {
        SetIndicatorInfo r52 = new SetIndicatorInfo(r6);
        if (r52.setHomeAsUpIndicator == null) goto L9;
        android.app.ActionBar r62 = r6.getActionBar();     // Catch: Exception -> L6
        r52.setHomeAsUpIndicator.invoke(r62, new Object[]{r7});     // Catch: Exception -> L6
        r52.setHomeActionContentDescription.invoke(r62, new Object[]{Integer.valueOf(r8)});     // Catch: Exception -> L6
    L12:
        return r52;
    L6:
        e = move-exception;
        Log.w(TAG, "Couldn't set home-as-up indicator via JB-MR2 API", e);
        goto L12
    L9:
        if (r52.upIndicatorView == null) goto L11;
        r52.upIndicatorView.setImageDrawable(r7);
        goto L12
    L11:
        Log.w(TAG, "Couldn't set home-as-up indicator");
        goto L12
    }

    public static SetIndicatorInfo setActionBarDescription(SetIndicatorInfo r3, Activity r4, int r5) {
        if (r3 != null) goto L5;
        r3 = new SetIndicatorInfo(r4);
    L5:
        if (r3.setHomeAsUpIndicator != null) goto L13;
    L12:
        return r3;
    L13:
        android.app.ActionBar r42 = r4.getActionBar();     // Catch: Exception -> L10
        r3.setHomeActionContentDescription.invoke(r42, new Object[]{Integer.valueOf(r5)});     // Catch: Exception -> L10
        if (Build.VERSION.SDK_INT > 19) goto L12;
        r42.setSubtitle(r42.getSubtitle());     // Catch: Exception -> L10
    L10:
        e = move-exception;
        Log.w(TAG, "Couldn't set content description via JB-MR2 API", e);
        goto L12
    }

    public static Drawable getThemeUpIndicator(Activity r1) {
        TypedArray r12 = r1.obtainStyledAttributes(THEME_ATTRS);
        Drawable r0 = r12.getDrawable(0);
        r12.recycle();
        return r0;
    }

    private ActionBarDrawerToggleHoneycomb() {
    }
}
