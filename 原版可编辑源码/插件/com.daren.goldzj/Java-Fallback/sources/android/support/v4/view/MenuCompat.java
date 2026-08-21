package android.support.v4.view;

import android.annotation.SuppressLint;
import android.os.Build;
import android.support.v4.internal.view.SupportMenu;
import android.view.Menu;
import android.view.MenuItem;

public final class MenuCompat {
    @Deprecated
    public static void setShowAsAction(MenuItem r0, int r1) {
        r0.setShowAsAction(r1);
    }

    @SuppressLint({"NewApi"})
    public static void setGroupDividerEnabled(Menu r2, boolean r3) {
        if ((r2 instanceof SupportMenu) == false) goto L6;
        ((SupportMenu) r2).setGroupDividerEnabled(r3);
        return;
    L6:
        if (Build.VERSION.SDK_INT < 28) goto L10;
        r2.setGroupDividerEnabled(r3);
        return;
    }

    private MenuCompat() {
    }
}
