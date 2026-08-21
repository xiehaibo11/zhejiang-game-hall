package android.support.v7.view;

import android.content.Context;
import android.support.annotation.RestrictTo;
import android.support.v4.internal.view.SupportMenu;
import android.support.v4.internal.view.SupportMenuItem;
import android.support.v4.util.SimpleArrayMap;
import android.support.v7.view.ActionMode;
import android.support.v7.view.menu.MenuWrapperFactory;
import android.view.ActionMode;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import java.util.ArrayList;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class SupportActionModeWrapper extends android.view.ActionMode {
    final Context mContext;
    final ActionMode mWrappedObject;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static class CallbackWrapper implements ActionMode.Callback {
        final ArrayList<SupportActionModeWrapper> mActionModes;
        final Context mContext;
        final SimpleArrayMap<Menu, Menu> mMenus;
        final ActionMode.Callback mWrappedCallback;

        public CallbackWrapper(Context r1, ActionMode.Callback r2) {
            this.mContext = r1;
            this.mWrappedCallback = r2;
            this.mActionModes = new ArrayList();
            this.mMenus = new SimpleArrayMap();
        }

        @Override
        public boolean onCreateActionMode(ActionMode r2, Menu r3) {
            return this.mWrappedCallback.onCreateActionMode(getActionModeWrapper(r2), getMenuWrapper(r3));
        }

        @Override
        public boolean onPrepareActionMode(ActionMode r2, Menu r3) {
            return this.mWrappedCallback.onPrepareActionMode(getActionModeWrapper(r2), getMenuWrapper(r3));
        }

        @Override
        public boolean onActionItemClicked(ActionMode r3, MenuItem r4) {
            return this.mWrappedCallback.onActionItemClicked(getActionModeWrapper(r3), MenuWrapperFactory.wrapSupportMenuItem(this.mContext, (SupportMenuItem) r4));
        }

        @Override
        public void onDestroyActionMode(ActionMode r2) {
            this.mWrappedCallback.onDestroyActionMode(getActionModeWrapper(r2));
        }

        private Menu getMenuWrapper(Menu r3) {
            Menu r0 = this.mMenus.get(r3);
            if (r0 != null) goto L6;
            Menu r02 = MenuWrapperFactory.wrapSupportMenu(this.mContext, (SupportMenu) r3);
            this.mMenus.put(r3, r02);
            return r02;
        L6:
            return r0;
        }

        public android.view.ActionMode getActionModeWrapper(ActionMode r5) {
            int r0 = this.mActionModes.size();
            int r1 = 0;
        L3:
            if (r1 >= r0) goto L10;
            SupportActionModeWrapper r2 = this.mActionModes.get(r1);
            if (r2 == null) goto L9;
            if (r2.mWrappedObject != r5) goto L9;
            return r2;
        L9:
            r1 = r1 + 1;
            goto L3
        L10:
            SupportActionModeWrapper r02 = new SupportActionModeWrapper(this.mContext, r5);
            this.mActionModes.add(r02);
            return r02;
        }
    }

    public SupportActionModeWrapper(Context r1, ActionMode r2) {
        this.mContext = r1;
        this.mWrappedObject = r2;
    }

    @Override
    public Object getTag() {
        return this.mWrappedObject.getTag();
    }

    @Override
    public void setTag(Object r2) {
        this.mWrappedObject.setTag(r2);
    }

    @Override
    public void setTitle(CharSequence r2) {
        this.mWrappedObject.setTitle(r2);
    }

    @Override
    public void setSubtitle(CharSequence r2) {
        this.mWrappedObject.setSubtitle(r2);
    }

    @Override
    public void invalidate() {
        this.mWrappedObject.invalidate();
    }

    @Override
    public void finish() {
        this.mWrappedObject.finish();
    }

    @Override
    public Menu getMenu() {
        return MenuWrapperFactory.wrapSupportMenu(this.mContext, (SupportMenu) this.mWrappedObject.getMenu());
    }

    @Override
    public CharSequence getTitle() {
        return this.mWrappedObject.getTitle();
    }

    @Override
    public void setTitle(int r2) {
        this.mWrappedObject.setTitle(r2);
    }

    @Override
    public CharSequence getSubtitle() {
        return this.mWrappedObject.getSubtitle();
    }

    @Override
    public void setSubtitle(int r2) {
        this.mWrappedObject.setSubtitle(r2);
    }

    @Override
    public View getCustomView() {
        return this.mWrappedObject.getCustomView();
    }

    @Override
    public void setCustomView(View r2) {
        this.mWrappedObject.setCustomView(r2);
    }

    @Override
    public MenuInflater getMenuInflater() {
        return this.mWrappedObject.getMenuInflater();
    }

    @Override
    public boolean getTitleOptionalHint() {
        return this.mWrappedObject.getTitleOptionalHint();
    }

    @Override
    public void setTitleOptionalHint(boolean r2) {
        this.mWrappedObject.setTitleOptionalHint(r2);
    }

    @Override
    public boolean isTitleOptional() {
        return this.mWrappedObject.isTitleOptional();
    }
}
