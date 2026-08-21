package android.support.v7.view;

import android.app.Activity;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.PorterDuff;
import android.support.annotation.LayoutRes;
import android.support.annotation.RestrictTo;
import android.support.v4.internal.view.SupportMenu;
import android.support.v4.view.ActionProvider;
import android.support.v4.view.MenuItemCompat;
import android.support.v7.appcompat.R;
import android.support.v7.view.menu.MenuItemImpl;
import android.support.v7.view.menu.MenuItemWrapperICS;
import android.support.v7.widget.DrawableUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.util.Xml;
import android.view.InflateException;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.SubMenu;
import android.view.View;
import java.io.IOException;
import java.lang.reflect.Constructor;
import java.lang.reflect.Method;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class SupportMenuInflater extends MenuInflater {
    static final Class<?>[] ACTION_PROVIDER_CONSTRUCTOR_SIGNATURE = null;
    static final Class<?>[] ACTION_VIEW_CONSTRUCTOR_SIGNATURE = null;
    static final String LOG_TAG = "SupportMenuInflater";
    static final int NO_ID = 0;
    private static final String XML_GROUP = "group";
    private static final String XML_ITEM = "item";
    private static final String XML_MENU = "menu";
    final Object[] mActionProviderConstructorArguments;
    final Object[] mActionViewConstructorArguments;
    Context mContext;
    private Object mRealOwner;

    private static class InflatedOnMenuItemClickListener implements MenuItem.OnMenuItemClickListener {
        private static final Class<?>[] PARAM_TYPES = null;
        private Method mMethod;
        private Object mRealOwner;

        static {
            PARAM_TYPES = new Class[]{MenuItem.class};
        }

        public InflatedOnMenuItemClickListener(Object r5, String r6) {
            this.mRealOwner = r5;
            Class<?> r52 = r5.getClass();
            this.mMethod = r52.getMethod(r6, PARAM_TYPES);     // Catch: Exception -> L5
            return;
        L5:
            e = move-exception;
            InflateException r1 = new InflateException("Couldn't resolve menu item onClick handler " + r6 + " in class " + r52.getName());
            r1.initCause(e);
            throw r1;
        }

        @Override
        public boolean onMenuItemClick(MenuItem r6) {
        L8:
            e = move-exception;
            throw new RuntimeException(e);
        L3:
            if (this.mMethod.getReturnType() == Boolean.TYPE) goto L5;
            this.mMethod.invoke(this.mRealOwner, new Object[]{r6});     // Catch: Exception -> L8
            return true;
        L5:
            return ((Boolean) this.mMethod.invoke(this.mRealOwner, new Object[]{r6})).booleanValue();
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
        ActionProvider itemActionProvider;
        private String itemActionProviderClassName;
        private String itemActionViewClassName;
        private int itemActionViewLayout;
        private boolean itemAdded;
        private int itemAlphabeticModifiers;
        private char itemAlphabeticShortcut;
        private int itemCategoryOrder;
        private int itemCheckable;
        private boolean itemChecked;
        private CharSequence itemContentDescription;
        private boolean itemEnabled;
        private int itemIconResId;
        private ColorStateList itemIconTintList;
        private PorterDuff.Mode itemIconTintMode;
        private int itemId;
        private String itemListenerMethodName;
        private int itemNumericModifiers;
        private char itemNumericShortcut;
        private int itemShowAsAction;
        private CharSequence itemTitle;
        private CharSequence itemTitleCondensed;
        private CharSequence itemTooltipText;
        private boolean itemVisible;
        private Menu menu;
        final SupportMenuInflater this$0;

        public MenuState(SupportMenuInflater r1, Menu r2) {
            this.this$0 = r1;
            this.itemIconTintList = null;
            this.itemIconTintMode = null;
            this.menu = r2;
            resetGroup();
        }

        public void resetGroup() {
            this.groupId = 0;
            this.groupCategory = 0;
            this.groupOrder = 0;
            this.groupCheckable = 0;
            this.groupVisible = true;
            this.groupEnabled = true;
        }

        public void readGroup(AttributeSet r3) {
            TypedArray r32 = this.this$0.mContext.obtainStyledAttributes(r3, R.styleable.MenuGroup);
            this.groupId = r32.getResourceId(R.styleable.MenuGroup_android_id, 0);
            this.groupCategory = r32.getInt(R.styleable.MenuGroup_android_menuCategory, 0);
            this.groupOrder = r32.getInt(R.styleable.MenuGroup_android_orderInCategory, 0);
            this.groupCheckable = r32.getInt(R.styleable.MenuGroup_android_checkableBehavior, 0);
            this.groupVisible = r32.getBoolean(R.styleable.MenuGroup_android_visible, true);
            this.groupEnabled = r32.getBoolean(R.styleable.MenuGroup_android_enabled, true);
            r32.recycle();
        }

        public void readItem(AttributeSet r7) {
            TypedArray r72 = this.this$0.mContext.obtainStyledAttributes(r7, R.styleable.MenuItem);
            this.itemId = r72.getResourceId(R.styleable.MenuItem_android_id, 0);
            int r0 = r72.getInt(R.styleable.MenuItem_android_menuCategory, this.groupCategory);
            int r2 = r72.getInt(R.styleable.MenuItem_android_orderInCategory, this.groupOrder);
            this.itemCategoryOrder = (r0 & SupportMenu.CATEGORY_MASK) | (r2 & SupportMenu.USER_MASK);
            this.itemTitle = r72.getText(R.styleable.MenuItem_android_title);
            this.itemTitleCondensed = r72.getText(R.styleable.MenuItem_android_titleCondensed);
            this.itemIconResId = r72.getResourceId(R.styleable.MenuItem_android_icon, 0);
            this.itemAlphabeticShortcut = getShortcut(r72.getString(R.styleable.MenuItem_android_alphabeticShortcut));
            this.itemAlphabeticModifiers = r72.getInt(R.styleable.MenuItem_alphabeticModifiers, 4096);
            this.itemNumericShortcut = getShortcut(r72.getString(R.styleable.MenuItem_android_numericShortcut));
            this.itemNumericModifiers = r72.getInt(R.styleable.MenuItem_numericModifiers, 4096);
            if (r72.hasValue(R.styleable.MenuItem_android_checkable) == false) goto L5;
            this.itemCheckable = r72.getBoolean(R.styleable.MenuItem_android_checkable, false) ? 1 : 0;
        L6:
            this.itemChecked = r72.getBoolean(R.styleable.MenuItem_android_checked, false);
            this.itemVisible = r72.getBoolean(R.styleable.MenuItem_android_visible, this.groupVisible);
            this.itemEnabled = r72.getBoolean(R.styleable.MenuItem_android_enabled, this.groupEnabled);
            this.itemShowAsAction = r72.getInt(R.styleable.MenuItem_showAsAction, -1);
            this.itemListenerMethodName = r72.getString(R.styleable.MenuItem_android_onClick);
            this.itemActionViewLayout = r72.getResourceId(R.styleable.MenuItem_actionLayout, 0);
            this.itemActionViewClassName = r72.getString(R.styleable.MenuItem_actionViewClass);
            this.itemActionProviderClassName = r72.getString(R.styleable.MenuItem_actionProviderClass);
            if (this.itemActionProviderClassName == null) goto L9;
            boolean r02 = true;
        L11:
            if (r02 == true) goto L13;
        L17:
            if (r02 == false) goto L19;
            Log.w(SupportMenuInflater.LOG_TAG, "Ignoring attribute 'actionProviderClass'. Action view already specified.");
        L19:
            this.itemActionProvider = null;
        L20:
            this.itemContentDescription = r72.getText(R.styleable.MenuItem_contentDescription);
            this.itemTooltipText = r72.getText(R.styleable.MenuItem_tooltipText);
            if (r72.hasValue(R.styleable.MenuItem_iconTintMode) == false) goto L23;
            this.itemIconTintMode = DrawableUtils.parseTintMode(r72.getInt(R.styleable.MenuItem_iconTintMode, -1), this.itemIconTintMode);
        L25:
            if (r72.hasValue(R.styleable.MenuItem_iconTint) == false) goto L27;
            this.itemIconTintList = r72.getColorStateList(R.styleable.MenuItem_iconTint);
        L28:
            r72.recycle();
            this.itemAdded = false;
            return;
        L27:
            this.itemIconTintList = null;
            goto L28
        L23:
            this.itemIconTintMode = null;
            goto L25
        L13:
            if (this.itemActionViewLayout != 0) goto L17;
            if (this.itemActionViewClassName != null) goto L17;
            this.itemActionProvider = (ActionProvider) newInstance(this.itemActionProviderClassName, SupportMenuInflater.ACTION_PROVIDER_CONSTRUCTOR_SIGNATURE, this.this$0.mActionProviderConstructorArguments);
            goto L20
        L9:
            r02 = false;
            goto L11
        L5:
            this.itemCheckable = this.groupCheckable;
            goto L6
        }

        private char getShortcut(String r2) {
            if (r2 != null) goto L6;
            return 0;
        L6:
            return r2.charAt(0);
        }

        private void setItem(MenuItem r6) {
            MenuItem r0 = r6.setChecked(this.itemChecked).setVisible(this.itemVisible).setEnabled(this.itemEnabled);
            boolean r2 = false;
            if (this.itemCheckable < 1) goto L5;
            boolean r1 = true;
        L6:
            r0.setCheckable(r1).setTitleCondensed(this.itemTitleCondensed).setIcon(this.itemIconResId);
            int r02 = this.itemShowAsAction;
            if (r02 < 0) goto L10;
            r6.setShowAsAction(r02);
        L10:
            if (this.itemListenerMethodName != null) goto L12;
        L16:
            boolean r03 = r6 instanceof MenuItemImpl;
            if (r03 == false) goto L20;
            MenuItemImpl r12 = (MenuItemImpl) r6;
        L20:
            if (this.itemCheckable < 2) goto L26;
            if (r03 == false) goto L24;
            ((MenuItemImpl) r6).setExclusiveCheckable(true);
            goto L26
        L24:
            if ((r6 instanceof MenuItemWrapperICS) == false) goto L26;
            ((MenuItemWrapperICS) r6).setExclusiveCheckable(true);
        L26:
            String r04 = this.itemActionViewClassName;
            if (r04 == null) goto L29;
            r6.setActionView((View) newInstance(r04, SupportMenuInflater.ACTION_VIEW_CONSTRUCTOR_SIGNATURE, this.this$0.mActionViewConstructorArguments));
            r2 = true;
        L29:
            int r05 = this.itemActionViewLayout;
            if (r05 <= 0) goto L34;
            if (r2 == true) goto L33;
            r6.setActionView(r05);
            goto L34
        L33:
            Log.w(SupportMenuInflater.LOG_TAG, "Ignoring attribute 'itemActionViewLayout'. Action view already specified.");
        L34:
            ActionProvider r06 = this.itemActionProvider;
            if (r06 == null) goto L37;
            MenuItemCompat.setActionProvider(r6, r06);
        L37:
            MenuItemCompat.setContentDescription(r6, this.itemContentDescription);
            MenuItemCompat.setTooltipText(r6, this.itemTooltipText);
            MenuItemCompat.setAlphabeticShortcut(r6, this.itemAlphabeticShortcut, this.itemAlphabeticModifiers);
            MenuItemCompat.setNumericShortcut(r6, this.itemNumericShortcut, this.itemNumericModifiers);
            PorterDuff.Mode r07 = this.itemIconTintMode;
            if (r07 == null) goto L40;
            MenuItemCompat.setIconTintMode(r6, r07);
        L40:
            ColorStateList r08 = this.itemIconTintList;
            if (r08 == null) goto L44;
            MenuItemCompat.setIconTintList(r6, r08);
            return;
        L44:
            return;
        L12:
            if (this.this$0.mContext.isRestricted() == true) goto L15;
            r6.setOnMenuItemClickListener(new InflatedOnMenuItemClickListener(this.this$0.getRealOwner(), this.itemListenerMethodName));
            goto L16
        L15:
            throw new IllegalStateException("The android:onClick attribute cannot be used within a restricted context");
        L5:
            r1 = false;
            goto L6
        }

        public void addItem() {
            this.itemAdded = true;
            setItem(this.menu.add(this.groupId, this.itemId, this.itemCategoryOrder, this.itemTitle));
        }

        public SubMenu addSubMenuItem() {
            this.itemAdded = true;
            SubMenu r0 = this.menu.addSubMenu(this.groupId, this.itemId, this.itemCategoryOrder, this.itemTitle);
            setItem(r0.getItem());
            return r0;
        }

        public boolean hasAddedItem() {
            return this.itemAdded;
        }

        private <T> T newInstance(String r2, Class<?>[] r3, Object[] r4) {
            Constructor<?> r32 = this.this$0.mContext.getClassLoader().loadClass(r2).getConstructor(r3);     // Catch: Exception -> L4
            r32.setAccessible(true);     // Catch: Exception -> L4
            return (T) r32.newInstance(r4);
        L4:
            e = move-exception;
            Log.w(SupportMenuInflater.LOG_TAG, "Cannot instantiate class: " + r2, e);
            return null;
        }
    }

    static {
        ACTION_VIEW_CONSTRUCTOR_SIGNATURE = new Class[]{Context.class};
        ACTION_PROVIDER_CONSTRUCTOR_SIGNATURE = ACTION_VIEW_CONSTRUCTOR_SIGNATURE;
    }

    public SupportMenuInflater(Context r3) {
        super(r3);
        this.mContext = r3;
        this.mActionViewConstructorArguments = new Object[]{r3};
        this.mActionProviderConstructorArguments = this.mActionViewConstructorArguments;
    }

    @Override
    public void inflate(@LayoutRes int r4, Menu r5) {
        if ((r5 instanceof SupportMenu) == true) goto L6;
        super.inflate(r4, r5);
        return;
    L6:
        XmlResourceParser r1 = null;
        r1 = this.mContext.getResources().getLayout(r4);     // Catch: Throwable -> L11 IOException -> L13 XmlPullParserException -> L16
        parseMenu(r1, Xml.asAttributeSet(r1), r5);     // Catch: Throwable -> L11 IOException -> L13 XmlPullParserException -> L16
        if (r1 == null) goto L24;
        r1.close();
        return;
    L24:
        return;
    L11:
        th = move-exception;
        if (r1 == null) goto L21;
        r1.close();
    L21:
        throw th;
    L16:
        e = move-exception;
        throw new InflateException("Error inflating menu XML", e);     // Catch: Throwable -> L11
    L13:
        e = move-exception;
        throw new InflateException("Error inflating menu XML", e);     // Catch: Throwable -> L11
    }

    private void parseMenu(XmlPullParser r13, AttributeSet r14, Menu r15) throws XmlPullParserException, IOException {
        MenuState r0 = new MenuState(this, r15);
        int r152 = r13.getEventType();
    L4:
        if (r152 == 2) goto L5;
        r152 = r13.next();
        if (r152 != 1) goto L4;
    L12:
        int r6 = r152;
        String r8 = null;
        boolean r153 = false;
        boolean r7 = false;
    L13:
        if (r153 == true) goto L56;
        if (r6 == 1) goto L55;
        if (r6 != 2) goto L18;
        if (r7 == true) goto L53;
        String r62 = r13.getName();
        if (r62.equals(XML_GROUP) == false) goto L47;
        r0.readGroup(r14);
        goto L53
    L47:
        if (r62.equals(XML_ITEM) == false) goto L50;
        r0.readItem(r14);
        goto L53
    L50:
        if (r62.equals(XML_MENU) == false) goto L52;
        parseMenu(r13, r14, r0.addSubMenuItem());
        goto L53
    L52:
        r8 = r62;
        r7 = true;
    L53:
        r6 = r13.next();
        goto L13
    L18:
        if (r6 != 3) goto L53;
        String r63 = r13.getName();
        if (r7 == false) goto L26;
        if (r63.equals(r8) == false) goto L26;
        r8 = null;
        r7 = false;
    L26:
        if (r63.equals(XML_GROUP) == false) goto L29;
        r0.resetGroup();
        goto L53
    L29:
        if (r63.equals(XML_ITEM) == false) goto L39;
        if (r0.hasAddedItem() == true) goto L53;
        if (r0.itemActionProvider != null) goto L35;
    L37:
        r0.addItem();
        goto L53
    L35:
        if (r0.itemActionProvider.hasSubMenu() == false) goto L37;
        r0.addSubMenuItem();
        goto L53
    L39:
        if (r63.equals(XML_MENU) == false) goto L53;
        r153 = true;
        goto L53
    L55:
        throw new RuntimeException("Unexpected end of document");
    L56:
        return;
    L5:
        String r154 = r13.getName();
        if (r154.equals(XML_MENU) == false) goto L9;
        r152 = r13.next();
        goto L12
    L9:
        throw new RuntimeException("Expecting menu, got " + r154);
    }

    Object getRealOwner() {
        if (this.mRealOwner != null) goto L6;
        this.mRealOwner = findRealOwner(this.mContext);
    L6:
        return this.mRealOwner;
    }

    private Object findRealOwner(Object r2) {
        if ((r2 instanceof Activity) == false) goto L6;
        return r2;
    L6:
        if ((r2 instanceof ContextWrapper) == true) goto L8;
        return r2;
    L8:
        return findRealOwner(((ContextWrapper) r2).getBaseContext());
    }
}
