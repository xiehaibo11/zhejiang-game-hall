package android.support.v7.view.menu;

class MenuItemWrapperJB extends android.support.v7.view.menu.MenuItemWrapperICS {

    class ActionProviderWrapperJB extends android.support.v7.view.menu.MenuItemWrapperICS.ActionProviderWrapper implements android.view.ActionProvider.VisibilityListener {
        android.support.v4.view.ActionProvider.VisibilityListener mListener;
        final android.support.v7.view.menu.MenuItemWrapperJB this$0;

        public ActionProviderWrapperJB(android.support.v7.view.menu.MenuItemWrapperJB r1, android.content.Context r2, android.view.ActionProvider r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r1, r2, r3)
                return
        }

        @Override
        public boolean isVisible() {
                r1 = this;
                android.view.ActionProvider r0 = r1.mInner
                boolean r0 = r0.isVisible()
                return r0
        }

        @Override
        public void onActionProviderVisibilityChanged(boolean r2) {
                r1 = this;
                android.support.v4.view.ActionProvider$VisibilityListener r0 = r1.mListener
                if (r0 == 0) goto L7
                r0.onActionProviderVisibilityChanged(r2)
            L7:
                return
        }

        @Override
        public android.view.View onCreateActionView(android.view.MenuItem r2) {
                r1 = this;
                android.view.ActionProvider r0 = r1.mInner
                android.view.View r2 = r0.onCreateActionView(r2)
                return r2
        }

        @Override
        public boolean overridesItemVisibility() {
                r1 = this;
                android.view.ActionProvider r0 = r1.mInner
                boolean r0 = r0.overridesItemVisibility()
                return r0
        }

        @Override
        public void refreshVisibility() {
                r1 = this;
                android.view.ActionProvider r0 = r1.mInner
                r0.refreshVisibility()
                return
        }

        @Override
        public void setVisibilityListener(android.support.v4.view.ActionProvider.VisibilityListener r2) {
                r1 = this;
                r1.mListener = r2
                android.view.ActionProvider r0 = r1.mInner
                if (r2 == 0) goto L8
                r2 = r1
                goto L9
            L8:
                r2 = 0
            L9:
                r0.setVisibilityListener(r2)
                return
        }
    }

    MenuItemWrapperJB(android.content.Context r1, android.support.v4.internal.view.SupportMenuItem r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    android.support.v7.view.menu.MenuItemWrapperICS.ActionProviderWrapper createActionProviderWrapper(android.view.ActionProvider r3) {
            r2 = this;
            android.support.v7.view.menu.MenuItemWrapperJB$ActionProviderWrapperJB r0 = new android.support.v7.view.menu.MenuItemWrapperJB$ActionProviderWrapperJB
            android.content.Context r1 = r2.mContext
            r0.<init>(r2, r1, r3)
            return r0
    }
}
