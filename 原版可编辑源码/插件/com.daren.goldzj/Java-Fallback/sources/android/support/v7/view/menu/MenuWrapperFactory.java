package android.support.v7.view.menu;

import android.content.Context;
import android.os.Build;
import android.support.annotation.RestrictTo;
import android.support.v4.internal.view.SupportMenu;
import android.support.v4.internal.view.SupportMenuItem;
import android.support.v4.internal.view.SupportSubMenu;
import android.view.Menu;
import android.view.MenuItem;
import android.view.SubMenu;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public final class MenuWrapperFactory {
    private MenuWrapperFactory() {
    }

    public static Menu wrapSupportMenu(Context r1, SupportMenu r2) {
        return new MenuWrapperICS(r1, r2);
    }

    public static MenuItem wrapSupportMenuItem(Context r2, SupportMenuItem r3) {
        if (Build.VERSION.SDK_INT < 16) goto L7;
        return new MenuItemWrapperJB(r2, r3);
    L7:
        return new MenuItemWrapperICS(r2, r3);
    }

    public static SubMenu wrapSupportSubMenu(Context r1, SupportSubMenu r2) {
        return new SubMenuWrapperICS(r1, r2);
    }
}
