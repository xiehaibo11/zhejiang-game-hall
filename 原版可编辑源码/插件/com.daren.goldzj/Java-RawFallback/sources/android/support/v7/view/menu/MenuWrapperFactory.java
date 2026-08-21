package android.support.v7.view.menu;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public final class MenuWrapperFactory {
    private MenuWrapperFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.view.Menu wrapSupportMenu(android.content.Context r1, android.support.v4.internal.view.SupportMenu r2) {
            android.support.v7.view.menu.MenuWrapperICS r0 = new android.support.v7.view.menu.MenuWrapperICS
            r0.<init>(r1, r2)
            return r0
    }

    public static android.view.MenuItem wrapSupportMenuItem(android.content.Context r2, android.support.v4.internal.view.SupportMenuItem r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Lc
            android.support.v7.view.menu.MenuItemWrapperJB r0 = new android.support.v7.view.menu.MenuItemWrapperJB
            r0.<init>(r2, r3)
            return r0
        Lc:
            android.support.v7.view.menu.MenuItemWrapperICS r0 = new android.support.v7.view.menu.MenuItemWrapperICS
            r0.<init>(r2, r3)
            return r0
    }

    public static android.view.SubMenu wrapSupportSubMenu(android.content.Context r1, android.support.v4.internal.view.SupportSubMenu r2) {
            android.support.v7.view.menu.SubMenuWrapperICS r0 = new android.support.v7.view.menu.SubMenuWrapperICS
            r0.<init>(r1, r2)
            return r0
    }
}
