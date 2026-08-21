package android.support.v7.view.menu;

class SubMenuWrapperICS extends android.support.v7.view.menu.MenuWrapperICS implements android.view.SubMenu {
    SubMenuWrapperICS(android.content.Context r1, android.support.v4.internal.view.SupportSubMenu r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public void clearHeader() {
            r1 = this;
            android.support.v4.internal.view.SupportSubMenu r0 = r1.getWrappedObject()
            r0.clearHeader()
            return
    }

    @Override
    public android.view.MenuItem getItem() {
            r1 = this;
            android.support.v4.internal.view.SupportSubMenu r0 = r1.getWrappedObject()
            android.view.MenuItem r0 = r0.getItem()
            android.view.MenuItem r0 = r1.getMenuItemWrapper(r0)
            return r0
    }

    @Override
    public android.support.v4.internal.view.SupportSubMenu getWrappedObject() {
            r1 = this;
            T r0 = r1.mWrappedObject
            android.support.v4.internal.view.SupportSubMenu r0 = (android.support.v4.internal.view.SupportSubMenu) r0
            return r0
    }

    @Override
    public java.lang.Object getWrappedObject() {
            r1 = this;
            android.support.v4.internal.view.SupportSubMenu r0 = r1.getWrappedObject()
            return r0
    }

    @Override
    public android.view.SubMenu setHeaderIcon(int r2) {
            r1 = this;
            android.support.v4.internal.view.SupportSubMenu r0 = r1.getWrappedObject()
            r0.setHeaderIcon(r2)
            return r1
    }

    @Override
    public android.view.SubMenu setHeaderIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.v4.internal.view.SupportSubMenu r0 = r1.getWrappedObject()
            r0.setHeaderIcon(r2)
            return r1
    }

    @Override
    public android.view.SubMenu setHeaderTitle(int r2) {
            r1 = this;
            android.support.v4.internal.view.SupportSubMenu r0 = r1.getWrappedObject()
            r0.setHeaderTitle(r2)
            return r1
    }

    @Override
    public android.view.SubMenu setHeaderTitle(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v4.internal.view.SupportSubMenu r0 = r1.getWrappedObject()
            r0.setHeaderTitle(r2)
            return r1
    }

    @Override
    public android.view.SubMenu setHeaderView(android.view.View r2) {
            r1 = this;
            android.support.v4.internal.view.SupportSubMenu r0 = r1.getWrappedObject()
            r0.setHeaderView(r2)
            return r1
    }

    @Override
    public android.view.SubMenu setIcon(int r2) {
            r1 = this;
            android.support.v4.internal.view.SupportSubMenu r0 = r1.getWrappedObject()
            r0.setIcon(r2)
            return r1
    }

    @Override
    public android.view.SubMenu setIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.v4.internal.view.SupportSubMenu r0 = r1.getWrappedObject()
            r0.setIcon(r2)
            return r1
    }
}
