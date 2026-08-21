package android.support.v7.view;

public class SupportMenuInflater extends android.view.MenuInflater {
    static final java.lang.Class<?>[] ACTION_PROVIDER_CONSTRUCTOR_SIGNATURE = null;
    static final java.lang.Class<?>[] ACTION_VIEW_CONSTRUCTOR_SIGNATURE = null;
    static final java.lang.String LOG_TAG = "SupportMenuInflater";
    static final int NO_ID = 0;
    private static final java.lang.String XML_GROUP = "group";
    private static final java.lang.String XML_ITEM = "item";
    private static final java.lang.String XML_MENU = "menu";
    final java.lang.Object[] mActionProviderConstructorArguments;
    final java.lang.Object[] mActionViewConstructorArguments;
    android.content.Context mContext;
    private java.lang.Object mRealOwner;

    private static class InflatedOnMenuItemClickListener implements android.view.MenuItem.OnMenuItemClickListener {
        private static final java.lang.Class<?>[] PARAM_TYPES = null;
        private java.lang.reflect.Method mMethod;
        private java.lang.Object mRealOwner;

        static {
                r0 = 1
                java.lang.Class[] r0 = new java.lang.Class[r0]
                r1 = 0
                java.lang.Class<android.view.MenuItem> r2 = android.view.MenuItem.class
                r0[r1] = r2
                android.support.v7.view.SupportMenuInflater.InflatedOnMenuItemClickListener.PARAM_TYPES = r0
                return
        }

        public InflatedOnMenuItemClickListener(java.lang.Object r5, java.lang.String r6) {
                r4 = this;
                r4.<init>()
                r4.mRealOwner = r5
                java.lang.Class r5 = r5.getClass()
                java.lang.Class<?>[] r0 = android.support.v7.view.SupportMenuInflater.InflatedOnMenuItemClickListener.PARAM_TYPES     // Catch: java.lang.Exception -> L12
                java.lang.reflect.Method r0 = r5.getMethod(r6, r0)     // Catch: java.lang.Exception -> L12
                r4.mMethod = r0     // Catch: java.lang.Exception -> L12
                return
            L12:
                r0 = move-exception
                android.view.InflateException r1 = new android.view.InflateException
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "Couldn't resolve menu item onClick handler "
                r2.append(r3)
                r2.append(r6)
                java.lang.String r6 = " in class "
                r2.append(r6)
                java.lang.String r5 = r5.getName()
                r2.append(r5)
                java.lang.String r5 = r2.toString()
                r1.<init>(r5)
                r1.initCause(r0)
                throw r1
        }

        @Override
        public boolean onMenuItemClick(android.view.MenuItem r6) {
                r5 = this;
                java.lang.reflect.Method r0 = r5.mMethod     // Catch: java.lang.Exception -> L2b
                java.lang.Class r0 = r0.getReturnType()     // Catch: java.lang.Exception -> L2b
                java.lang.Class r1 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L2b
                r2 = 0
                r3 = 1
                if (r0 != r1) goto L1f
                java.lang.reflect.Method r0 = r5.mMethod     // Catch: java.lang.Exception -> L2b
                java.lang.Object r1 = r5.mRealOwner     // Catch: java.lang.Exception -> L2b
                java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L2b
                r3[r2] = r6     // Catch: java.lang.Exception -> L2b
                java.lang.Object r6 = r0.invoke(r1, r3)     // Catch: java.lang.Exception -> L2b
                java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Exception -> L2b
                boolean r6 = r6.booleanValue()     // Catch: java.lang.Exception -> L2b
                return r6
            L1f:
                java.lang.reflect.Method r0 = r5.mMethod     // Catch: java.lang.Exception -> L2b
                java.lang.Object r1 = r5.mRealOwner     // Catch: java.lang.Exception -> L2b
                java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L2b
                r4[r2] = r6     // Catch: java.lang.Exception -> L2b
                r0.invoke(r1, r4)     // Catch: java.lang.Exception -> L2b
                return r3
            L2b:
                r6 = move-exception
                java.lang.RuntimeException r0 = new java.lang.RuntimeException
                r0.<init>(r6)
                throw r0
        }
    }

    private class MenuState {
        private static final int defaultGroupId = 0;
        private static final int defaultItemCategory = 0;
        private static final int defaultItemCheckable = 0;
        private static final boolean defaultItemChecked = false;
        private static final boolean defaultItemEnabled = true;
        private static final int defaultItemId = 0;
        private static final int defaultItemOrder = 0;
        private static final boolean defaultItemVisible = true;
        private int groupCategory;
        private int groupCheckable;
        private boolean groupEnabled;
        private int groupId;
        private int groupOrder;
        private boolean groupVisible;
        android.support.v4.view.ActionProvider itemActionProvider;
        private java.lang.String itemActionProviderClassName;
        private java.lang.String itemActionViewClassName;
        private int itemActionViewLayout;
        private boolean itemAdded;
        private int itemAlphabeticModifiers;
        private char itemAlphabeticShortcut;
        private int itemCategoryOrder;
        private int itemCheckable;
        private boolean itemChecked;
        private java.lang.CharSequence itemContentDescription;
        private boolean itemEnabled;
        private int itemIconResId;
        private android.content.res.ColorStateList itemIconTintList;
        private android.graphics.PorterDuff.Mode itemIconTintMode;
        private int itemId;
        private java.lang.String itemListenerMethodName;
        private int itemNumericModifiers;
        private char itemNumericShortcut;
        private int itemShowAsAction;
        private java.lang.CharSequence itemTitle;
        private java.lang.CharSequence itemTitleCondensed;
        private java.lang.CharSequence itemTooltipText;
        private boolean itemVisible;
        private android.view.Menu menu;
        final android.support.v7.view.SupportMenuInflater this$0;

        public MenuState(android.support.v7.view.SupportMenuInflater r1, android.view.Menu r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 0
                r0.itemIconTintList = r1
                r0.itemIconTintMode = r1
                r0.menu = r2
                r0.resetGroup()
                return
        }

        private char getShortcut(java.lang.String r2) {
                r1 = this;
                r0 = 0
                if (r2 != 0) goto L4
                return r0
            L4:
                char r2 = r2.charAt(r0)
                return r2
        }

        private <T> T newInstance(java.lang.String r2, java.lang.Class<?>[] r3, java.lang.Object[] r4) {
                r1 = this;
                android.support.v7.view.SupportMenuInflater r0 = r1.this$0     // Catch: java.lang.Exception -> L19
                android.content.Context r0 = r0.mContext     // Catch: java.lang.Exception -> L19
                java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.Exception -> L19
                java.lang.Class r0 = r0.loadClass(r2)     // Catch: java.lang.Exception -> L19
                java.lang.reflect.Constructor r3 = r0.getConstructor(r3)     // Catch: java.lang.Exception -> L19
                r0 = 1
                r3.setAccessible(r0)     // Catch: java.lang.Exception -> L19
                java.lang.Object r2 = r3.newInstance(r4)     // Catch: java.lang.Exception -> L19
                return r2
            L19:
                r3 = move-exception
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r0 = "Cannot instantiate class: "
                r4.append(r0)
                r4.append(r2)
                java.lang.String r2 = r4.toString()
                java.lang.String r4 = "SupportMenuInflater"
                android.util.Log.w(r4, r2, r3)
                r2 = 0
                return r2
        }

        private void setItem(android.view.MenuItem r6) {
                r5 = this;
                boolean r0 = r5.itemChecked
                android.view.MenuItem r0 = r6.setChecked(r0)
                boolean r1 = r5.itemVisible
                android.view.MenuItem r0 = r0.setVisible(r1)
                boolean r1 = r5.itemEnabled
                android.view.MenuItem r0 = r0.setEnabled(r1)
                int r1 = r5.itemCheckable
                r2 = 0
                r3 = 1
                if (r1 < r3) goto L1a
                r1 = r3
                goto L1b
            L1a:
                r1 = r2
            L1b:
                android.view.MenuItem r0 = r0.setCheckable(r1)
                java.lang.CharSequence r1 = r5.itemTitleCondensed
                android.view.MenuItem r0 = r0.setTitleCondensed(r1)
                int r1 = r5.itemIconResId
                r0.setIcon(r1)
                int r0 = r5.itemShowAsAction
                if (r0 < 0) goto L31
                r6.setShowAsAction(r0)
            L31:
                java.lang.String r0 = r5.itemListenerMethodName
                if (r0 == 0) goto L58
                android.support.v7.view.SupportMenuInflater r0 = r5.this$0
                android.content.Context r0 = r0.mContext
                boolean r0 = r0.isRestricted()
                if (r0 != 0) goto L50
                android.support.v7.view.SupportMenuInflater$InflatedOnMenuItemClickListener r0 = new android.support.v7.view.SupportMenuInflater$InflatedOnMenuItemClickListener
                android.support.v7.view.SupportMenuInflater r1 = r5.this$0
                java.lang.Object r1 = r1.getRealOwner()
                java.lang.String r4 = r5.itemListenerMethodName
                r0.<init>(r1, r4)
                r6.setOnMenuItemClickListener(r0)
                goto L58
            L50:
                java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
                java.lang.String r0 = "The android:onClick attribute cannot be used within a restricted context"
                r6.<init>(r0)
                throw r6
            L58:
                boolean r0 = r6 instanceof android.support.v7.view.menu.MenuItemImpl
                if (r0 == 0) goto L5f
                r1 = r6
                android.support.v7.view.menu.MenuItemImpl r1 = (android.support.v7.view.menu.MenuItemImpl) r1
            L5f:
                int r1 = r5.itemCheckable
                r4 = 2
                if (r1 < r4) goto L77
                if (r0 == 0) goto L6d
                r0 = r6
                android.support.v7.view.menu.MenuItemImpl r0 = (android.support.v7.view.menu.MenuItemImpl) r0
                r0.setExclusiveCheckable(r3)
                goto L77
            L6d:
                boolean r0 = r6 instanceof android.support.v7.view.menu.MenuItemWrapperICS
                if (r0 == 0) goto L77
                r0 = r6
                android.support.v7.view.menu.MenuItemWrapperICS r0 = (android.support.v7.view.menu.MenuItemWrapperICS) r0
                r0.setExclusiveCheckable(r3)
            L77:
                java.lang.String r0 = r5.itemActionViewClassName
                if (r0 == 0) goto L8b
                java.lang.Class<?>[] r1 = android.support.v7.view.SupportMenuInflater.ACTION_VIEW_CONSTRUCTOR_SIGNATURE
                android.support.v7.view.SupportMenuInflater r2 = r5.this$0
                java.lang.Object[] r2 = r2.mActionViewConstructorArguments
                java.lang.Object r0 = r5.newInstance(r0, r1, r2)
                android.view.View r0 = (android.view.View) r0
                r6.setActionView(r0)
                r2 = r3
            L8b:
                int r0 = r5.itemActionViewLayout
                if (r0 <= 0) goto L9c
                if (r2 != 0) goto L95
                r6.setActionView(r0)
                goto L9c
            L95:
                java.lang.String r0 = "SupportMenuInflater"
                java.lang.String r1 = "Ignoring attribute 'itemActionViewLayout'. Action view already specified."
                android.util.Log.w(r0, r1)
            L9c:
                android.support.v4.view.ActionProvider r0 = r5.itemActionProvider
                if (r0 == 0) goto La3
                android.support.v4.view.MenuItemCompat.setActionProvider(r6, r0)
            La3:
                java.lang.CharSequence r0 = r5.itemContentDescription
                android.support.v4.view.MenuItemCompat.setContentDescription(r6, r0)
                java.lang.CharSequence r0 = r5.itemTooltipText
                android.support.v4.view.MenuItemCompat.setTooltipText(r6, r0)
                char r0 = r5.itemAlphabeticShortcut
                int r1 = r5.itemAlphabeticModifiers
                android.support.v4.view.MenuItemCompat.setAlphabeticShortcut(r6, r0, r1)
                char r0 = r5.itemNumericShortcut
                int r1 = r5.itemNumericModifiers
                android.support.v4.view.MenuItemCompat.setNumericShortcut(r6, r0, r1)
                android.graphics.PorterDuff$Mode r0 = r5.itemIconTintMode
                if (r0 == 0) goto Lc2
                android.support.v4.view.MenuItemCompat.setIconTintMode(r6, r0)
            Lc2:
                android.content.res.ColorStateList r0 = r5.itemIconTintList
                if (r0 == 0) goto Lc9
                android.support.v4.view.MenuItemCompat.setIconTintList(r6, r0)
            Lc9:
                return
        }

        public void addItem() {
                r5 = this;
                r0 = 1
                r5.itemAdded = r0
                android.view.Menu r0 = r5.menu
                int r1 = r5.groupId
                int r2 = r5.itemId
                int r3 = r5.itemCategoryOrder
                java.lang.CharSequence r4 = r5.itemTitle
                android.view.MenuItem r0 = r0.add(r1, r2, r3, r4)
                r5.setItem(r0)
                return
        }

        public android.view.SubMenu addSubMenuItem() {
                r5 = this;
                r0 = 1
                r5.itemAdded = r0
                android.view.Menu r0 = r5.menu
                int r1 = r5.groupId
                int r2 = r5.itemId
                int r3 = r5.itemCategoryOrder
                java.lang.CharSequence r4 = r5.itemTitle
                android.view.SubMenu r0 = r0.addSubMenu(r1, r2, r3, r4)
                android.view.MenuItem r1 = r0.getItem()
                r5.setItem(r1)
                return r0
        }

        public boolean hasAddedItem() {
                r1 = this;
                boolean r0 = r1.itemAdded
                return r0
        }

        public void readGroup(android.util.AttributeSet r3) {
                r2 = this;
                android.support.v7.view.SupportMenuInflater r0 = r2.this$0
                android.content.Context r0 = r0.mContext
                int[] r1 = android.support.v7.appcompat.R.styleable.MenuGroup
                android.content.res.TypedArray r3 = r0.obtainStyledAttributes(r3, r1)
                int r0 = android.support.v7.appcompat.R.styleable.MenuGroup_android_id
                r1 = 0
                int r0 = r3.getResourceId(r0, r1)
                r2.groupId = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuGroup_android_menuCategory
                int r0 = r3.getInt(r0, r1)
                r2.groupCategory = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuGroup_android_orderInCategory
                int r0 = r3.getInt(r0, r1)
                r2.groupOrder = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuGroup_android_checkableBehavior
                int r0 = r3.getInt(r0, r1)
                r2.groupCheckable = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuGroup_android_visible
                r1 = 1
                boolean r0 = r3.getBoolean(r0, r1)
                r2.groupVisible = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuGroup_android_enabled
                boolean r0 = r3.getBoolean(r0, r1)
                r2.groupEnabled = r0
                r3.recycle()
                return
        }

        public void readItem(android.util.AttributeSet r7) {
                r6 = this;
                android.support.v7.view.SupportMenuInflater r0 = r6.this$0
                android.content.Context r0 = r0.mContext
                int[] r1 = android.support.v7.appcompat.R.styleable.MenuItem
                android.content.res.TypedArray r7 = r0.obtainStyledAttributes(r7, r1)
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_id
                r1 = 0
                int r0 = r7.getResourceId(r0, r1)
                r6.itemId = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_menuCategory
                int r2 = r6.groupCategory
                int r0 = r7.getInt(r0, r2)
                int r2 = android.support.v7.appcompat.R.styleable.MenuItem_android_orderInCategory
                int r3 = r6.groupOrder
                int r2 = r7.getInt(r2, r3)
                r3 = -65536(0xffffffffffff0000, float:NaN)
                r0 = r0 & r3
                r3 = 65535(0xffff, float:9.1834E-41)
                r2 = r2 & r3
                r0 = r0 | r2
                r6.itemCategoryOrder = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_title
                java.lang.CharSequence r0 = r7.getText(r0)
                r6.itemTitle = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_titleCondensed
                java.lang.CharSequence r0 = r7.getText(r0)
                r6.itemTitleCondensed = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_icon
                int r0 = r7.getResourceId(r0, r1)
                r6.itemIconResId = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_alphabeticShortcut
                java.lang.String r0 = r7.getString(r0)
                char r0 = r6.getShortcut(r0)
                r6.itemAlphabeticShortcut = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_alphabeticModifiers
                r2 = 4096(0x1000, float:5.74E-42)
                int r0 = r7.getInt(r0, r2)
                r6.itemAlphabeticModifiers = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_numericShortcut
                java.lang.String r0 = r7.getString(r0)
                char r0 = r6.getShortcut(r0)
                r6.itemNumericShortcut = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_numericModifiers
                int r0 = r7.getInt(r0, r2)
                r6.itemNumericModifiers = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_checkable
                boolean r0 = r7.hasValue(r0)
                if (r0 == 0) goto L80
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_checkable
                boolean r0 = r7.getBoolean(r0, r1)
                r6.itemCheckable = r0
                goto L84
            L80:
                int r0 = r6.groupCheckable
                r6.itemCheckable = r0
            L84:
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_checked
                boolean r0 = r7.getBoolean(r0, r1)
                r6.itemChecked = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_visible
                boolean r2 = r6.groupVisible
                boolean r0 = r7.getBoolean(r0, r2)
                r6.itemVisible = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_enabled
                boolean r2 = r6.groupEnabled
                boolean r0 = r7.getBoolean(r0, r2)
                r6.itemEnabled = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_showAsAction
                r2 = -1
                int r0 = r7.getInt(r0, r2)
                r6.itemShowAsAction = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_android_onClick
                java.lang.String r0 = r7.getString(r0)
                r6.itemListenerMethodName = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_actionLayout
                int r0 = r7.getResourceId(r0, r1)
                r6.itemActionViewLayout = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_actionViewClass
                java.lang.String r0 = r7.getString(r0)
                r6.itemActionViewClassName = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_actionProviderClass
                java.lang.String r0 = r7.getString(r0)
                r6.itemActionProviderClassName = r0
                if (r0 == 0) goto Lcd
                r0 = 1
                goto Lce
            Lcd:
                r0 = r1
            Lce:
                r3 = 0
                if (r0 == 0) goto Lea
                int r4 = r6.itemActionViewLayout
                if (r4 != 0) goto Lea
                java.lang.String r4 = r6.itemActionViewClassName
                if (r4 != 0) goto Lea
                java.lang.String r0 = r6.itemActionProviderClassName
                java.lang.Class<?>[] r4 = android.support.v7.view.SupportMenuInflater.ACTION_PROVIDER_CONSTRUCTOR_SIGNATURE
                android.support.v7.view.SupportMenuInflater r5 = r6.this$0
                java.lang.Object[] r5 = r5.mActionProviderConstructorArguments
                java.lang.Object r0 = r6.newInstance(r0, r4, r5)
                android.support.v4.view.ActionProvider r0 = (android.support.v4.view.ActionProvider) r0
                r6.itemActionProvider = r0
                goto Lf5
            Lea:
                if (r0 == 0) goto Lf3
                java.lang.String r0 = "SupportMenuInflater"
                java.lang.String r4 = "Ignoring attribute 'actionProviderClass'. Action view already specified."
                android.util.Log.w(r0, r4)
            Lf3:
                r6.itemActionProvider = r3
            Lf5:
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_contentDescription
                java.lang.CharSequence r0 = r7.getText(r0)
                r6.itemContentDescription = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_tooltipText
                java.lang.CharSequence r0 = r7.getText(r0)
                r6.itemTooltipText = r0
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_iconTintMode
                boolean r0 = r7.hasValue(r0)
                if (r0 == 0) goto L11c
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_iconTintMode
                int r0 = r7.getInt(r0, r2)
                android.graphics.PorterDuff$Mode r2 = r6.itemIconTintMode
                android.graphics.PorterDuff$Mode r0 = android.support.v7.widget.DrawableUtils.parseTintMode(r0, r2)
                r6.itemIconTintMode = r0
                goto L11e
            L11c:
                r6.itemIconTintMode = r3
            L11e:
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_iconTint
                boolean r0 = r7.hasValue(r0)
                if (r0 == 0) goto L12f
                int r0 = android.support.v7.appcompat.R.styleable.MenuItem_iconTint
                android.content.res.ColorStateList r0 = r7.getColorStateList(r0)
                r6.itemIconTintList = r0
                goto L131
            L12f:
                r6.itemIconTintList = r3
            L131:
                r7.recycle()
                r6.itemAdded = r1
                return
        }

        public void resetGroup() {
                r1 = this;
                r0 = 0
                r1.groupId = r0
                r1.groupCategory = r0
                r1.groupOrder = r0
                r1.groupCheckable = r0
                r0 = 1
                r1.groupVisible = r0
                r1.groupEnabled = r0
                return
        }
    }

    static {
            r0 = 1
            java.lang.Class[] r0 = new java.lang.Class[r0]
            r1 = 0
            java.lang.Class<android.content.Context> r2 = android.content.Context.class
            r0[r1] = r2
            android.support.v7.view.SupportMenuInflater.ACTION_VIEW_CONSTRUCTOR_SIGNATURE = r0
            android.support.v7.view.SupportMenuInflater.ACTION_PROVIDER_CONSTRUCTOR_SIGNATURE = r0
            return
    }

    public SupportMenuInflater(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r2.mContext = r3
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            r2.mActionViewConstructorArguments = r0
            r2.mActionProviderConstructorArguments = r0
            return
    }

    private java.lang.Object findRealOwner(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.app.Activity
            if (r0 == 0) goto L5
            return r2
        L5:
            boolean r0 = r2 instanceof android.content.ContextWrapper
            if (r0 == 0) goto L13
            android.content.ContextWrapper r2 = (android.content.ContextWrapper) r2
            android.content.Context r2 = r2.getBaseContext()
            java.lang.Object r2 = r1.findRealOwner(r2)
        L13:
            return r2
    }

    private void parseMenu(org.xmlpull.v1.XmlPullParser r13, android.util.AttributeSet r14, android.view.Menu r15) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
            r12 = this;
            android.support.v7.view.SupportMenuInflater$MenuState r0 = new android.support.v7.view.SupportMenuInflater$MenuState
            r0.<init>(r12, r15)
            int r15 = r13.getEventType()
        L9:
            r1 = 2
            java.lang.String r2 = "menu"
            r3 = 1
            if (r15 != r1) goto L35
            java.lang.String r15 = r13.getName()
            boolean r4 = r15.equals(r2)
            if (r4 == 0) goto L1e
            int r15 = r13.next()
            goto L3b
        L1e:
            java.lang.RuntimeException r13 = new java.lang.RuntimeException
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r0 = "Expecting menu, got "
            r14.append(r0)
            r14.append(r15)
            java.lang.String r14 = r14.toString()
            r13.<init>(r14)
            throw r13
        L35:
            int r15 = r13.next()
            if (r15 != r3) goto L9
        L3b:
            r4 = 0
            r5 = 0
            r8 = r4
            r6 = r5
            r7 = r6
        L40:
            if (r6 != 0) goto Lca
            if (r15 == r3) goto Lc2
            java.lang.String r9 = "item"
            java.lang.String r10 = "group"
            if (r15 == r1) goto L91
            r11 = 3
            if (r15 == r11) goto L4f
            goto Lbc
        L4f:
            java.lang.String r15 = r13.getName()
            if (r7 == 0) goto L5f
            boolean r11 = r15.equals(r8)
            if (r11 == 0) goto L5f
            r8 = r4
            r7 = r5
            goto Lbc
        L5f:
            boolean r10 = r15.equals(r10)
            if (r10 == 0) goto L69
            r0.resetGroup()
            goto Lbc
        L69:
            boolean r9 = r15.equals(r9)
            if (r9 == 0) goto L89
            boolean r15 = r0.hasAddedItem()
            if (r15 != 0) goto Lbc
            android.support.v4.view.ActionProvider r15 = r0.itemActionProvider
            if (r15 == 0) goto L85
            android.support.v4.view.ActionProvider r15 = r0.itemActionProvider
            boolean r15 = r15.hasSubMenu()
            if (r15 == 0) goto L85
            r0.addSubMenuItem()
            goto Lbc
        L85:
            r0.addItem()
            goto Lbc
        L89:
            boolean r15 = r15.equals(r2)
            if (r15 == 0) goto Lbc
            r6 = r3
            goto Lbc
        L91:
            if (r7 == 0) goto L94
            goto Lbc
        L94:
            java.lang.String r15 = r13.getName()
            boolean r10 = r15.equals(r10)
            if (r10 == 0) goto La2
            r0.readGroup(r14)
            goto Lbc
        La2:
            boolean r9 = r15.equals(r9)
            if (r9 == 0) goto Lac
            r0.readItem(r14)
            goto Lbc
        Lac:
            boolean r9 = r15.equals(r2)
            if (r9 == 0) goto Lba
            android.view.SubMenu r15 = r0.addSubMenuItem()
            r12.parseMenu(r13, r14, r15)
            goto Lbc
        Lba:
            r8 = r15
            r7 = r3
        Lbc:
            int r15 = r13.next()
            goto L40
        Lc2:
            java.lang.RuntimeException r13 = new java.lang.RuntimeException
            java.lang.String r14 = "Unexpected end of document"
            r13.<init>(r14)
            throw r13
        Lca:
            return
    }

    java.lang.Object getRealOwner() {
            r1 = this;
            java.lang.Object r0 = r1.mRealOwner
            if (r0 != 0) goto Lc
            android.content.Context r0 = r1.mContext
            java.lang.Object r0 = r1.findRealOwner(r0)
            r1.mRealOwner = r0
        Lc:
            java.lang.Object r0 = r1.mRealOwner
            return r0
    }

    @Override
    public void inflate(int r4, android.view.Menu r5) {
            r3 = this;
            java.lang.String r0 = "Error inflating menu XML"
            boolean r1 = r5 instanceof android.support.v4.internal.view.SupportMenu
            if (r1 != 0) goto La
            super.inflate(r4, r5)
            return
        La:
            r1 = 0
            android.content.Context r2 = r3.mContext     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L24 org.xmlpull.v1.XmlPullParserException -> L2b
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L24 org.xmlpull.v1.XmlPullParserException -> L2b
            android.content.res.XmlResourceParser r1 = r2.getLayout(r4)     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L24 org.xmlpull.v1.XmlPullParserException -> L2b
            android.util.AttributeSet r4 = android.util.Xml.asAttributeSet(r1)     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L24 org.xmlpull.v1.XmlPullParserException -> L2b
            r3.parseMenu(r1, r4, r5)     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L24 org.xmlpull.v1.XmlPullParserException -> L2b
            if (r1 == 0) goto L21
            r1.close()
        L21:
            return
        L22:
            r4 = move-exception
            goto L32
        L24:
            r4 = move-exception
            android.view.InflateException r5 = new android.view.InflateException     // Catch: java.lang.Throwable -> L22
            r5.<init>(r0, r4)     // Catch: java.lang.Throwable -> L22
            throw r5     // Catch: java.lang.Throwable -> L22
        L2b:
            r4 = move-exception
            android.view.InflateException r5 = new android.view.InflateException     // Catch: java.lang.Throwable -> L22
            r5.<init>(r0, r4)     // Catch: java.lang.Throwable -> L22
            throw r5     // Catch: java.lang.Throwable -> L22
        L32:
            if (r1 == 0) goto L37
            r1.close()
        L37:
            throw r4
    }
}
