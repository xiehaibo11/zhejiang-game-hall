package android.support.v7.view;

public class SupportActionModeWrapper extends android.view.ActionMode {
    final android.content.Context mContext;
    final android.support.v7.view.ActionMode mWrappedObject;

    public static class CallbackWrapper implements android.support.v7.view.ActionMode.Callback {
        final java.util.ArrayList<android.support.v7.view.SupportActionModeWrapper> mActionModes;
        final android.content.Context mContext;
        final android.support.v4.util.SimpleArrayMap<android.view.Menu, android.view.Menu> mMenus;
        final android.view.ActionMode.Callback mWrappedCallback;

        public CallbackWrapper(android.content.Context r1, android.view.ActionMode.Callback r2) {
                r0 = this;
                r0.<init>()
                r0.mContext = r1
                r0.mWrappedCallback = r2
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.mActionModes = r1
                android.support.v4.util.SimpleArrayMap r1 = new android.support.v4.util.SimpleArrayMap
                r1.<init>()
                r0.mMenus = r1
                return
        }

        private android.view.Menu getMenuWrapper(android.view.Menu r3) {
                r2 = this;
                android.support.v4.util.SimpleArrayMap<android.view.Menu, android.view.Menu> r0 = r2.mMenus
                java.lang.Object r0 = r0.get(r3)
                android.view.Menu r0 = (android.view.Menu) r0
                if (r0 != 0) goto L18
                android.content.Context r0 = r2.mContext
                r1 = r3
                android.support.v4.internal.view.SupportMenu r1 = (android.support.v4.internal.view.SupportMenu) r1
                android.view.Menu r0 = android.support.v7.view.menu.MenuWrapperFactory.wrapSupportMenu(r0, r1)
                android.support.v4.util.SimpleArrayMap<android.view.Menu, android.view.Menu> r1 = r2.mMenus
                r1.put(r3, r0)
            L18:
                return r0
        }

        public android.view.ActionMode getActionModeWrapper(android.support.v7.view.ActionMode r5) {
                r4 = this;
                java.util.ArrayList<android.support.v7.view.SupportActionModeWrapper> r0 = r4.mActionModes
                int r0 = r0.size()
                r1 = 0
            L7:
                if (r1 >= r0) goto L1b
                java.util.ArrayList<android.support.v7.view.SupportActionModeWrapper> r2 = r4.mActionModes
                java.lang.Object r2 = r2.get(r1)
                android.support.v7.view.SupportActionModeWrapper r2 = (android.support.v7.view.SupportActionModeWrapper) r2
                if (r2 == 0) goto L18
                android.support.v7.view.ActionMode r3 = r2.mWrappedObject
                if (r3 != r5) goto L18
                return r2
            L18:
                int r1 = r1 + 1
                goto L7
            L1b:
                android.support.v7.view.SupportActionModeWrapper r0 = new android.support.v7.view.SupportActionModeWrapper
                android.content.Context r1 = r4.mContext
                r0.<init>(r1, r5)
                java.util.ArrayList<android.support.v7.view.SupportActionModeWrapper> r5 = r4.mActionModes
                r5.add(r0)
                return r0
        }

        @Override
        public boolean onActionItemClicked(android.support.v7.view.ActionMode r3, android.view.MenuItem r4) {
                r2 = this;
                android.view.ActionMode$Callback r0 = r2.mWrappedCallback
                android.view.ActionMode r3 = r2.getActionModeWrapper(r3)
                android.content.Context r1 = r2.mContext
                android.support.v4.internal.view.SupportMenuItem r4 = (android.support.v4.internal.view.SupportMenuItem) r4
                android.view.MenuItem r4 = android.support.v7.view.menu.MenuWrapperFactory.wrapSupportMenuItem(r1, r4)
                boolean r3 = r0.onActionItemClicked(r3, r4)
                return r3
        }

        @Override
        public boolean onCreateActionMode(android.support.v7.view.ActionMode r2, android.view.Menu r3) {
                r1 = this;
                android.view.ActionMode$Callback r0 = r1.mWrappedCallback
                android.view.ActionMode r2 = r1.getActionModeWrapper(r2)
                android.view.Menu r3 = r1.getMenuWrapper(r3)
                boolean r2 = r0.onCreateActionMode(r2, r3)
                return r2
        }

        @Override
        public void onDestroyActionMode(android.support.v7.view.ActionMode r2) {
                r1 = this;
                android.view.ActionMode$Callback r0 = r1.mWrappedCallback
                android.view.ActionMode r2 = r1.getActionModeWrapper(r2)
                r0.onDestroyActionMode(r2)
                return
        }

        @Override
        public boolean onPrepareActionMode(android.support.v7.view.ActionMode r2, android.view.Menu r3) {
                r1 = this;
                android.view.ActionMode$Callback r0 = r1.mWrappedCallback
                android.view.ActionMode r2 = r1.getActionModeWrapper(r2)
                android.view.Menu r3 = r1.getMenuWrapper(r3)
                boolean r2 = r0.onPrepareActionMode(r2, r3)
                return r2
        }
    }

    public SupportActionModeWrapper(android.content.Context r1, android.support.v7.view.ActionMode r2) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            r0.mWrappedObject = r2
            return
    }

    @Override
    public void finish() {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            r0.finish()
            return
    }

    @Override
    public android.view.View getCustomView() {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            android.view.View r0 = r0.getCustomView()
            return r0
    }

    @Override
    public android.view.Menu getMenu() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.support.v7.view.ActionMode r1 = r2.mWrappedObject
            android.view.Menu r1 = r1.getMenu()
            android.support.v4.internal.view.SupportMenu r1 = (android.support.v4.internal.view.SupportMenu) r1
            android.view.Menu r0 = android.support.v7.view.menu.MenuWrapperFactory.wrapSupportMenu(r0, r1)
            return r0
    }

    @Override
    public android.view.MenuInflater getMenuInflater() {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            android.view.MenuInflater r0 = r0.getMenuInflater()
            return r0
    }

    @Override
    public java.lang.CharSequence getSubtitle() {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            java.lang.CharSequence r0 = r0.getSubtitle()
            return r0
    }

    @Override
    public java.lang.Object getTag() {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            java.lang.Object r0 = r0.getTag()
            return r0
    }

    @Override
    public java.lang.CharSequence getTitle() {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            java.lang.CharSequence r0 = r0.getTitle()
            return r0
    }

    @Override
    public boolean getTitleOptionalHint() {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            boolean r0 = r0.getTitleOptionalHint()
            return r0
    }

    @Override
    public void invalidate() {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            r0.invalidate()
            return
    }

    @Override
    public boolean isTitleOptional() {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            boolean r0 = r0.isTitleOptional()
            return r0
    }

    @Override
    public void setCustomView(android.view.View r2) {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            r0.setCustomView(r2)
            return
    }

    @Override
    public void setSubtitle(int r2) {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            r0.setSubtitle(r2)
            return
    }

    @Override
    public void setSubtitle(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            r0.setSubtitle(r2)
            return
    }

    @Override
    public void setTag(java.lang.Object r2) {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            r0.setTag(r2)
            return
    }

    @Override
    public void setTitle(int r2) {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            r0.setTitle(r2)
            return
    }

    @Override
    public void setTitle(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            r0.setTitle(r2)
            return
    }

    @Override
    public void setTitleOptionalHint(boolean r2) {
            r1 = this;
            android.support.v7.view.ActionMode r0 = r1.mWrappedObject
            r0.setTitleOptionalHint(r2)
            return
    }
}
