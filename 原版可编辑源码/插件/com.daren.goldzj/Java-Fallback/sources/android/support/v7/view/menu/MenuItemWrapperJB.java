package android.support.v7.view.menu;

import android.content.Context;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.v4.internal.view.SupportMenuItem;
import android.support.v4.view.ActionProvider;
import android.support.v7.view.menu.MenuItemWrapperICS;
import android.view.ActionProvider;
import android.view.MenuItem;
import android.view.View;

@RequiresApi(16)
@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
class MenuItemWrapperJB extends MenuItemWrapperICS {

    class ActionProviderWrapperJB extends MenuItemWrapperICS.ActionProviderWrapper implements ActionProvider.VisibilityListener {
        ActionProvider.VisibilityListener mListener;
        final MenuItemWrapperJB this$0;

        public ActionProviderWrapperJB(MenuItemWrapperJB r1, Context r2, android.view.ActionProvider r3) {
            this.this$0 = r1;
            super(r1, r2, r3);
        }

        @Override
        public View onCreateActionView(MenuItem r2) {
            return this.mInner.onCreateActionView(r2);
        }

        @Override
        public boolean overridesItemVisibility() {
            return this.mInner.overridesItemVisibility();
        }

        @Override
        public boolean isVisible() {
            return this.mInner.isVisible();
        }

        @Override
        public void refreshVisibility() {
            this.mInner.refreshVisibility();
        }

        @Override
        public void setVisibilityListener(ActionProvider.VisibilityListener r2) {
            this.mListener = r2;
            android.view.ActionProvider r0 = this.mInner;
            if (r2 == null) goto L5;
            ActionProviderWrapperJB r22 = this;
        L6:
            r0.setVisibilityListener(r22);
            return;
        L5:
            r22 = null;
            goto L6
        }

        @Override
        public void onActionProviderVisibilityChanged(boolean r2) {
            ActionProvider.VisibilityListener r0 = this.mListener;
            if (r0 == null) goto L6;
            r0.onActionProviderVisibilityChanged(r2);
            return;
        }
    }

    MenuItemWrapperJB(Context r1, SupportMenuItem r2) {
        super(r1, r2);
    }

    @Override
    MenuItemWrapperICS.ActionProviderWrapper createActionProviderWrapper(android.view.ActionProvider r3) {
        return new ActionProviderWrapperJB(this, this.mContext, r3);
    }
}
