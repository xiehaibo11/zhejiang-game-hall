package android.support.v4.view;

import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.os.Build;
import android.support.v4.internal.view.SupportMenuItem;
import android.util.Log;
import android.view.MenuItem;
import android.view.View;

public final class MenuItemCompat {

    @Deprecated
    public static final int SHOW_AS_ACTION_ALWAYS = 2;

    @Deprecated
    public static final int SHOW_AS_ACTION_COLLAPSE_ACTION_VIEW = 8;

    @Deprecated
    public static final int SHOW_AS_ACTION_IF_ROOM = 1;

    @Deprecated
    public static final int SHOW_AS_ACTION_NEVER = 0;

    @Deprecated
    public static final int SHOW_AS_ACTION_WITH_TEXT = 4;
    private static final String TAG = "MenuItemCompat";

    @Deprecated
    public interface OnActionExpandListener {
        boolean onMenuItemActionCollapse(MenuItem r1);

        boolean onMenuItemActionExpand(MenuItem r1);
    }

    @Deprecated
    public static void setShowAsAction(MenuItem r0, int r1) {
        r0.setShowAsAction(r1);
    }

    @Deprecated
    public static MenuItem setActionView(MenuItem r0, View r1) {
        return r0.setActionView(r1);
    }

    @Deprecated
    public static MenuItem setActionView(MenuItem r0, int r1) {
        return r0.setActionView(r1);
    }

    @Deprecated
    public static View getActionView(MenuItem r0) {
        return r0.getActionView();
    }

    public static MenuItem setActionProvider(MenuItem r1, ActionProvider r2) {
        if ((r1 instanceof SupportMenuItem) == true) goto L5;
        Log.w(TAG, "setActionProvider: item does not implement SupportMenuItem; ignoring");
        return r1;
    L5:
        return ((SupportMenuItem) r1).setSupportActionProvider(r2);
    }

    public static ActionProvider getActionProvider(MenuItem r1) {
        if ((r1 instanceof SupportMenuItem) == true) goto L5;
        Log.w(TAG, "getActionProvider: item does not implement SupportMenuItem; returning null");
        return null;
    L5:
        return ((SupportMenuItem) r1).getSupportActionProvider();
    }

    @Deprecated
    public static boolean expandActionView(MenuItem r0) {
        return r0.expandActionView();
    }

    @Deprecated
    public static boolean collapseActionView(MenuItem r0) {
        return r0.collapseActionView();
    }

    @Deprecated
    public static boolean isActionViewExpanded(MenuItem r0) {
        return r0.isActionViewExpanded();
    }

    @Deprecated
    public static MenuItem setOnActionExpandListener(MenuItem r1, final OnActionExpandListener r2) {
        return r1.setOnActionExpandListener(new 1(r2));
    }

    public static void setContentDescription(MenuItem r2, CharSequence r3) {
        if ((r2 instanceof SupportMenuItem) == false) goto L6;
        ((SupportMenuItem) r2).setContentDescription(r3);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 26) goto L10;
        r2.setContentDescription(r3);
        return;
    }

    public static CharSequence getContentDescription(MenuItem r2) {
        if ((r2 instanceof SupportMenuItem) == false) goto L7;
        return ((SupportMenuItem) r2).getContentDescription();
    L7:
        if (Build.VERSION.SDK_INT >= 26) goto L9;
        return null;
    L9:
        return r2.getContentDescription();
    }

    public static void setTooltipText(MenuItem r2, CharSequence r3) {
        if ((r2 instanceof SupportMenuItem) == false) goto L6;
        ((SupportMenuItem) r2).setTooltipText(r3);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 26) goto L10;
        r2.setTooltipText(r3);
        return;
    }

    public static CharSequence getTooltipText(MenuItem r2) {
        if ((r2 instanceof SupportMenuItem) == false) goto L7;
        return ((SupportMenuItem) r2).getTooltipText();
    L7:
        if (Build.VERSION.SDK_INT >= 26) goto L9;
        return null;
    L9:
        return r2.getTooltipText();
    }

    public static void setShortcut(MenuItem r2, char r3, char r4, int r5, int r6) {
        if ((r2 instanceof SupportMenuItem) == false) goto L6;
        ((SupportMenuItem) r2).setShortcut(r3, r4, r5, r6);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 26) goto L10;
        r2.setShortcut(r3, r4, r5, r6);
        return;
    }

    public static void setNumericShortcut(MenuItem r2, char r3, int r4) {
        if ((r2 instanceof SupportMenuItem) == false) goto L6;
        ((SupportMenuItem) r2).setNumericShortcut(r3, r4);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 26) goto L10;
        r2.setNumericShortcut(r3, r4);
        return;
    }

    public static int getNumericModifiers(MenuItem r2) {
        if ((r2 instanceof SupportMenuItem) == false) goto L7;
        return ((SupportMenuItem) r2).getNumericModifiers();
    L7:
        if (Build.VERSION.SDK_INT >= 26) goto L9;
        return 0;
    L9:
        return r2.getNumericModifiers();
    }

    public static void setAlphabeticShortcut(MenuItem r2, char r3, int r4) {
        if ((r2 instanceof SupportMenuItem) == false) goto L6;
        ((SupportMenuItem) r2).setAlphabeticShortcut(r3, r4);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 26) goto L10;
        r2.setAlphabeticShortcut(r3, r4);
        return;
    }

    public static int getAlphabeticModifiers(MenuItem r2) {
        if ((r2 instanceof SupportMenuItem) == false) goto L7;
        return ((SupportMenuItem) r2).getAlphabeticModifiers();
    L7:
        if (Build.VERSION.SDK_INT >= 26) goto L9;
        return 0;
    L9:
        return r2.getAlphabeticModifiers();
    }

    public static void setIconTintList(MenuItem r2, ColorStateList r3) {
        if ((r2 instanceof SupportMenuItem) == false) goto L6;
        ((SupportMenuItem) r2).setIconTintList(r3);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 26) goto L10;
        r2.setIconTintList(r3);
        return;
    }

    public static ColorStateList getIconTintList(MenuItem r2) {
        if ((r2 instanceof SupportMenuItem) == false) goto L7;
        return ((SupportMenuItem) r2).getIconTintList();
    L7:
        if (Build.VERSION.SDK_INT >= 26) goto L9;
        return null;
    L9:
        return r2.getIconTintList();
    }

    public static void setIconTintMode(MenuItem r2, PorterDuff.Mode r3) {
        if ((r2 instanceof SupportMenuItem) == false) goto L6;
        ((SupportMenuItem) r2).setIconTintMode(r3);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 26) goto L10;
        r2.setIconTintMode(r3);
        return;
    }

    public static PorterDuff.Mode getIconTintMode(MenuItem r2) {
        if ((r2 instanceof SupportMenuItem) == false) goto L7;
        return ((SupportMenuItem) r2).getIconTintMode();
    L7:
        if (Build.VERSION.SDK_INT >= 26) goto L9;
        return null;
    L9:
        return r2.getIconTintMode();
    }

    private MenuItemCompat() {
    }
}
