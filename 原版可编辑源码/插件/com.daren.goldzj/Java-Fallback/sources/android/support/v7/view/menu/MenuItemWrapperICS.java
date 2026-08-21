package android.support.v7.view.menu;

import android.content.Context;
import android.content.Intent;
import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.support.annotation.RestrictTo;
import android.support.v4.internal.view.SupportMenuItem;
import android.support.v4.view.ActionProvider;
import android.support.v7.view.CollapsibleActionView;
import android.util.Log;
import android.view.ContextMenu;
import android.view.MenuItem;
import android.view.SubMenu;
import android.view.View;
import android.widget.FrameLayout;
import java.lang.reflect.Method;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class MenuItemWrapperICS extends BaseMenuWrapper<SupportMenuItem> implements MenuItem {
    static final String LOG_TAG = "MenuItemWrapper";
    private Method mSetExclusiveCheckableMethod;

    class ActionProviderWrapper extends ActionProvider {
        final android.view.ActionProvider mInner;
        final MenuItemWrapperICS this$0;

        public ActionProviderWrapper(MenuItemWrapperICS r1, Context r2, android.view.ActionProvider r3) {
            this.this$0 = r1;
            super(r2);
            this.mInner = r3;
        }

        @Override
        public View onCreateActionView() {
            return this.mInner.onCreateActionView();
        }

        @Override
        public boolean onPerformDefaultAction() {
            return this.mInner.onPerformDefaultAction();
        }

        @Override
        public boolean hasSubMenu() {
            return this.mInner.hasSubMenu();
        }

        @Override
        public void onPrepareSubMenu(SubMenu r3) {
            this.mInner.onPrepareSubMenu(this.this$0.getSubMenuWrapper(r3));
        }
    }

    static class CollapsibleActionViewWrapper extends FrameLayout implements CollapsibleActionView {
        final android.view.CollapsibleActionView mWrappedView;

        /* JADX WARN: Multi-variable type inference failed */
        CollapsibleActionViewWrapper(View r2) {
            super(r2.getContext());
            this.mWrappedView = (android.view.CollapsibleActionView) r2;
            addView(r2);
        }

        @Override
        public void onActionViewExpanded() {
            this.mWrappedView.onActionViewExpanded();
        }

        @Override
        public void onActionViewCollapsed() {
            this.mWrappedView.onActionViewCollapsed();
        }

        View getWrappedView() {
            return (View) this.mWrappedView;
        }
    }

    private class OnActionExpandListenerWrapper extends BaseWrapper<MenuItem.OnActionExpandListener> implements MenuItem.OnActionExpandListener {
        final MenuItemWrapperICS this$0;

        OnActionExpandListenerWrapper(MenuItemWrapperICS r1, MenuItem.OnActionExpandListener r2) {
            this.this$0 = r1;
            super(r2);
        }

        @Override
        public boolean onMenuItemActionExpand(MenuItem r3) {
            return ((MenuItem.OnActionExpandListener) this.mWrappedObject).onMenuItemActionExpand(this.this$0.getMenuItemWrapper(r3));
        }

        @Override
        public boolean onMenuItemActionCollapse(MenuItem r3) {
            return ((MenuItem.OnActionExpandListener) this.mWrappedObject).onMenuItemActionCollapse(this.this$0.getMenuItemWrapper(r3));
        }
    }

    private class OnMenuItemClickListenerWrapper extends BaseWrapper<MenuItem.OnMenuItemClickListener> implements MenuItem.OnMenuItemClickListener {
        final MenuItemWrapperICS this$0;

        OnMenuItemClickListenerWrapper(MenuItemWrapperICS r1, MenuItem.OnMenuItemClickListener r2) {
            this.this$0 = r1;
            super(r2);
        }

        @Override
        public boolean onMenuItemClick(MenuItem r3) {
            return ((MenuItem.OnMenuItemClickListener) this.mWrappedObject).onMenuItemClick(this.this$0.getMenuItemWrapper(r3));
        }
    }

    MenuItemWrapperICS(Context r1, SupportMenuItem r2) {
        super(r1, r2);
    }

    @Override
    public int getItemId() {
        return ((SupportMenuItem) this.mWrappedObject).getItemId();
    }

    @Override
    public int getGroupId() {
        return ((SupportMenuItem) this.mWrappedObject).getGroupId();
    }

    @Override
    public int getOrder() {
        return ((SupportMenuItem) this.mWrappedObject).getOrder();
    }

    @Override
    public MenuItem setTitle(CharSequence r2) {
        ((SupportMenuItem) this.mWrappedObject).setTitle(r2);
        return this;
    }

    @Override
    public MenuItem setTitle(int r2) {
        ((SupportMenuItem) this.mWrappedObject).setTitle(r2);
        return this;
    }

    @Override
    public CharSequence getTitle() {
        return ((SupportMenuItem) this.mWrappedObject).getTitle();
    }

    @Override
    public MenuItem setTitleCondensed(CharSequence r2) {
        ((SupportMenuItem) this.mWrappedObject).setTitleCondensed(r2);
        return this;
    }

    @Override
    public CharSequence getTitleCondensed() {
        return ((SupportMenuItem) this.mWrappedObject).getTitleCondensed();
    }

    @Override
    public MenuItem setIcon(Drawable r2) {
        ((SupportMenuItem) this.mWrappedObject).setIcon(r2);
        return this;
    }

    @Override
    public MenuItem setIcon(int r2) {
        ((SupportMenuItem) this.mWrappedObject).setIcon(r2);
        return this;
    }

    @Override
    public Drawable getIcon() {
        return ((SupportMenuItem) this.mWrappedObject).getIcon();
    }

    @Override
    public MenuItem setIntent(Intent r2) {
        ((SupportMenuItem) this.mWrappedObject).setIntent(r2);
        return this;
    }

    @Override
    public Intent getIntent() {
        return ((SupportMenuItem) this.mWrappedObject).getIntent();
    }

    @Override
    public MenuItem setShortcut(char r2, char r3) {
        ((SupportMenuItem) this.mWrappedObject).setShortcut(r2, r3);
        return this;
    }

    @Override
    public MenuItem setShortcut(char r2, char r3, int r4, int r5) {
        ((SupportMenuItem) this.mWrappedObject).setShortcut(r2, r3, r4, r5);
        return this;
    }

    @Override
    public MenuItem setNumericShortcut(char r2) {
        ((SupportMenuItem) this.mWrappedObject).setNumericShortcut(r2);
        return this;
    }

    @Override
    public MenuItem setNumericShortcut(char r2, int r3) {
        ((SupportMenuItem) this.mWrappedObject).setNumericShortcut(r2, r3);
        return this;
    }

    @Override
    public char getNumericShortcut() {
        return ((SupportMenuItem) this.mWrappedObject).getNumericShortcut();
    }

    @Override
    public int getNumericModifiers() {
        return ((SupportMenuItem) this.mWrappedObject).getNumericModifiers();
    }

    @Override
    public MenuItem setAlphabeticShortcut(char r2) {
        ((SupportMenuItem) this.mWrappedObject).setAlphabeticShortcut(r2);
        return this;
    }

    @Override
    public MenuItem setAlphabeticShortcut(char r2, int r3) {
        ((SupportMenuItem) this.mWrappedObject).setAlphabeticShortcut(r2, r3);
        return this;
    }

    @Override
    public char getAlphabeticShortcut() {
        return ((SupportMenuItem) this.mWrappedObject).getAlphabeticShortcut();
    }

    @Override
    public int getAlphabeticModifiers() {
        return ((SupportMenuItem) this.mWrappedObject).getAlphabeticModifiers();
    }

    @Override
    public MenuItem setCheckable(boolean r2) {
        ((SupportMenuItem) this.mWrappedObject).setCheckable(r2);
        return this;
    }

    @Override
    public boolean isCheckable() {
        return ((SupportMenuItem) this.mWrappedObject).isCheckable();
    }

    @Override
    public MenuItem setChecked(boolean r2) {
        ((SupportMenuItem) this.mWrappedObject).setChecked(r2);
        return this;
    }

    @Override
    public boolean isChecked() {
        return ((SupportMenuItem) this.mWrappedObject).isChecked();
    }

    @Override
    public MenuItem setVisible(boolean r2) {
        return ((SupportMenuItem) this.mWrappedObject).setVisible(r2);
    }

    @Override
    public boolean isVisible() {
        return ((SupportMenuItem) this.mWrappedObject).isVisible();
    }

    @Override
    public MenuItem setEnabled(boolean r2) {
        ((SupportMenuItem) this.mWrappedObject).setEnabled(r2);
        return this;
    }

    @Override
    public boolean isEnabled() {
        return ((SupportMenuItem) this.mWrappedObject).isEnabled();
    }

    @Override
    public boolean hasSubMenu() {
        return ((SupportMenuItem) this.mWrappedObject).hasSubMenu();
    }

    @Override
    public SubMenu getSubMenu() {
        return getSubMenuWrapper(((SupportMenuItem) this.mWrappedObject).getSubMenu());
    }

    @Override
    public MenuItem setOnMenuItemClickListener(MenuItem.OnMenuItemClickListener r3) {
        SupportMenuItem r0 = (SupportMenuItem) this.mWrappedObject;
        if (r3 == null) goto L5;
        OnMenuItemClickListenerWrapper r1 = new OnMenuItemClickListenerWrapper(this, r3);
    L6:
        r0.setOnMenuItemClickListener(r1);
        return this;
    L5:
        r1 = null;
        goto L6
    }

    @Override
    public ContextMenu.ContextMenuInfo getMenuInfo() {
        return ((SupportMenuItem) this.mWrappedObject).getMenuInfo();
    }

    @Override
    public void setShowAsAction(int r2) {
        ((SupportMenuItem) this.mWrappedObject).setShowAsAction(r2);
    }

    @Override
    public MenuItem setShowAsActionFlags(int r2) {
        ((SupportMenuItem) this.mWrappedObject).setShowAsActionFlags(r2);
        return this;
    }

    @Override
    public MenuItem setActionView(View r2) {
        if ((r2 instanceof android.view.CollapsibleActionView) == false) goto L5;
        r2 = new CollapsibleActionViewWrapper(r2);
    L5:
        ((SupportMenuItem) this.mWrappedObject).setActionView(r2);
        return this;
    }

    @Override
    public MenuItem setActionView(int r3) {
        ((SupportMenuItem) this.mWrappedObject).setActionView(r3);
        View r32 = ((SupportMenuItem) this.mWrappedObject).getActionView();
        if ((r32 instanceof android.view.CollapsibleActionView) == false) goto L5;
        ((SupportMenuItem) this.mWrappedObject).setActionView(new CollapsibleActionViewWrapper(r32));
    L5:
        return this;
    }

    @Override
    public View getActionView() {
        View r0 = ((SupportMenuItem) this.mWrappedObject).getActionView();
        if ((r0 instanceof CollapsibleActionViewWrapper) == true) goto L5;
        return r0;
    L5:
        return ((CollapsibleActionViewWrapper) r0).getWrappedView();
    }

    @Override
    public MenuItem setActionProvider(android.view.ActionProvider r2) {
        SupportMenuItem r0 = (SupportMenuItem) this.mWrappedObject;
        if (r2 == null) goto L5;
        ActionProviderWrapper r22 = createActionProviderWrapper(r2);
    L6:
        r0.setSupportActionProvider(r22);
        return this;
    L5:
        r22 = null;
        goto L6
    }

    @Override
    public android.view.ActionProvider getActionProvider() {
        ActionProvider r0 = ((SupportMenuItem) this.mWrappedObject).getSupportActionProvider();
        if ((r0 instanceof ActionProviderWrapper) == true) goto L5;
        return null;
    L5:
        return ((ActionProviderWrapper) r0).mInner;
    }

    @Override
    public boolean expandActionView() {
        return ((SupportMenuItem) this.mWrappedObject).expandActionView();
    }

    @Override
    public boolean collapseActionView() {
        return ((SupportMenuItem) this.mWrappedObject).collapseActionView();
    }

    @Override
    public boolean isActionViewExpanded() {
        return ((SupportMenuItem) this.mWrappedObject).isActionViewExpanded();
    }

    @Override
    public MenuItem setOnActionExpandListener(MenuItem.OnActionExpandListener r3) {
        SupportMenuItem r0 = (SupportMenuItem) this.mWrappedObject;
        if (r3 == null) goto L5;
        OnActionExpandListenerWrapper r1 = new OnActionExpandListenerWrapper(this, r3);
    L6:
        r0.setOnActionExpandListener(r1);
        return this;
    L5:
        r1 = null;
        goto L6
    }

    @Override
    public MenuItem setContentDescription(CharSequence r2) {
        ((SupportMenuItem) this.mWrappedObject).setContentDescription(r2);
        return this;
    }

    @Override
    public CharSequence getContentDescription() {
        return ((SupportMenuItem) this.mWrappedObject).getContentDescription();
    }

    @Override
    public MenuItem setTooltipText(CharSequence r2) {
        ((SupportMenuItem) this.mWrappedObject).setTooltipText(r2);
        return this;
    }

    @Override
    public CharSequence getTooltipText() {
        return ((SupportMenuItem) this.mWrappedObject).getTooltipText();
    }

    @Override
    public MenuItem setIconTintList(ColorStateList r2) {
        ((SupportMenuItem) this.mWrappedObject).setIconTintList(r2);
        return this;
    }

    @Override
    public ColorStateList getIconTintList() {
        return ((SupportMenuItem) this.mWrappedObject).getIconTintList();
    }

    @Override
    public MenuItem setIconTintMode(PorterDuff.Mode r2) {
        ((SupportMenuItem) this.mWrappedObject).setIconTintMode(r2);
        return this;
    }

    @Override
    public PorterDuff.Mode getIconTintMode() {
        return ((SupportMenuItem) this.mWrappedObject).getIconTintMode();
    }

    public void setExclusiveCheckable(boolean r7) {
    L7:
        e = move-exception;
        Log.w(LOG_TAG, "Error while calling setExclusiveCheckable", e);
        return;
    L3:
        if (this.mSetExclusiveCheckableMethod != null) goto L5;
        this.mSetExclusiveCheckableMethod = ((SupportMenuItem) this.mWrappedObject).getClass().getDeclaredMethod("setExclusiveCheckable", new Class[]{Boolean.TYPE});     // Catch: Exception -> L7
    L5:
        this.mSetExclusiveCheckableMethod.invoke(this.mWrappedObject, new Object[]{Boolean.valueOf(r7)});     // Catch: Exception -> L7
    }

    ActionProviderWrapper createActionProviderWrapper(android.view.ActionProvider r3) {
        return new ActionProviderWrapper(this, this.mContext, r3);
    }
}
