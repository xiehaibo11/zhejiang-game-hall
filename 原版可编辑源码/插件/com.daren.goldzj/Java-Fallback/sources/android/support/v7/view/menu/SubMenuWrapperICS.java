package android.support.v7.view.menu;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.support.annotation.RestrictTo;
import android.support.v4.internal.view.SupportSubMenu;
import android.view.MenuItem;
import android.view.SubMenu;
import android.view.View;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
class SubMenuWrapperICS extends MenuWrapperICS implements SubMenu {
    @Override
    public Object getWrappedObject() {
        return getWrappedObject();
    }

    SubMenuWrapperICS(Context r1, SupportSubMenu r2) {
        super(r1, r2);
    }

    @Override
    public SupportSubMenu getWrappedObject() {
        return (SupportSubMenu) this.mWrappedObject;
    }

    @Override
    public SubMenu setHeaderTitle(int r2) {
        getWrappedObject().setHeaderTitle(r2);
        return this;
    }

    @Override
    public SubMenu setHeaderTitle(CharSequence r2) {
        getWrappedObject().setHeaderTitle(r2);
        return this;
    }

    @Override
    public SubMenu setHeaderIcon(int r2) {
        getWrappedObject().setHeaderIcon(r2);
        return this;
    }

    @Override
    public SubMenu setHeaderIcon(Drawable r2) {
        getWrappedObject().setHeaderIcon(r2);
        return this;
    }

    @Override
    public SubMenu setHeaderView(View r2) {
        getWrappedObject().setHeaderView(r2);
        return this;
    }

    @Override
    public void clearHeader() {
        getWrappedObject().clearHeader();
    }

    @Override
    public SubMenu setIcon(int r2) {
        getWrappedObject().setIcon(r2);
        return this;
    }

    @Override
    public SubMenu setIcon(Drawable r2) {
        getWrappedObject().setIcon(r2);
        return this;
    }

    @Override
    public MenuItem getItem() {
        return getMenuItemWrapper(getWrappedObject().getItem());
    }
}
