package android.support.v7.view.menu;

import android.content.ActivityNotFoundException;
import android.content.Context;
import android.content.Intent;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.internal.view.SupportMenuItem;
import android.support.v4.view.ActionProvider;
import android.support.v7.appcompat.R;
import android.support.v7.content.res.AppCompatResources;
import android.support.v7.view.menu.MenuView;
import android.util.Log;
import android.view.ContextMenu;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.MenuItem;
import android.view.SubMenu;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewDebug;
import android.widget.LinearLayout;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public final class MenuItemImpl implements SupportMenuItem {
    private static final int CHECKABLE = 1;
    private static final int CHECKED = 2;
    private static final int ENABLED = 16;
    private static final int EXCLUSIVE = 4;
    private static final int HIDDEN = 8;
    private static final int IS_ACTION = 32;
    static final int NO_ICON = 0;
    private static final int SHOW_AS_ACTION_MASK = 3;
    private static final String TAG = "MenuItemImpl";
    private ActionProvider mActionProvider;
    private View mActionView;
    private final int mCategoryOrder;
    private MenuItem.OnMenuItemClickListener mClickListener;
    private CharSequence mContentDescription;
    private int mFlags;
    private final int mGroup;
    private boolean mHasIconTint;
    private boolean mHasIconTintMode;
    private Drawable mIconDrawable;
    private int mIconResId;
    private ColorStateList mIconTintList;
    private PorterDuff.Mode mIconTintMode;
    private final int mId;
    private Intent mIntent;
    private boolean mIsActionViewExpanded;
    private Runnable mItemCallback;
    MenuBuilder mMenu;
    private ContextMenu.ContextMenuInfo mMenuInfo;
    private boolean mNeedToApplyIconTint;
    private MenuItem.OnActionExpandListener mOnActionExpandListener;
    private final int mOrdering;
    private char mShortcutAlphabeticChar;
    private int mShortcutAlphabeticModifiers;
    private char mShortcutNumericChar;
    private int mShortcutNumericModifiers;
    private int mShowAsAction;
    private SubMenuBuilder mSubMenu;
    private CharSequence mTitle;
    private CharSequence mTitleCondensed;
    private CharSequence mTooltipText;

    @Override
    public MenuItem setActionView(int r1) {
        return setActionView(r1);
    }

    @Override
    public MenuItem setActionView(View r1) {
        return setActionView(r1);
    }

    @Override
    public MenuItem setContentDescription(CharSequence r1) {
        return setContentDescription(r1);
    }

    @Override
    public MenuItem setShowAsActionFlags(int r1) {
        return setShowAsActionFlags(r1);
    }

    @Override
    public MenuItem setTooltipText(CharSequence r1) {
        return setTooltipText(r1);
    }

    MenuItemImpl(MenuBuilder r3, int r4, int r5, int r6, int r7, CharSequence r8, int r9) {
        this.mShortcutNumericModifiers = 4096;
        this.mShortcutAlphabeticModifiers = 4096;
        this.mIconResId = 0;
        this.mIconTintList = null;
        this.mIconTintMode = null;
        this.mHasIconTint = false;
        this.mHasIconTintMode = false;
        this.mNeedToApplyIconTint = false;
        this.mFlags = 16;
        this.mShowAsAction = 0;
        this.mIsActionViewExpanded = false;
        this.mMenu = r3;
        this.mId = r5;
        this.mGroup = r4;
        this.mCategoryOrder = r6;
        this.mOrdering = r7;
        this.mTitle = r8;
        this.mShowAsAction = r9;
    }

    public boolean invoke() {
        MenuItem.OnMenuItemClickListener r0 = this.mClickListener;
        if (r0 != null) goto L5;
    L7:
        MenuBuilder r02 = this.mMenu;
        if (r02.dispatchMenuItemSelected(r02, this) == false) goto L10;
        return true;
    L10:
        Runnable r03 = this.mItemCallback;
        if (r03 == null) goto L15;
        r03.run();
        return true;
    L15:
        if (this.mIntent != null) goto L27;
    L20:
        ActionProvider r04 = this.mActionProvider;
        if (r04 != null) goto L23;
        return false;
    L23:
        if (r04.onPerformDefaultAction() == false) goto L29;
        return true;
    L29:
        return false;
    L27:
        this.mMenu.getContext().startActivity(this.mIntent);     // Catch: ActivityNotFoundException -> L18
        return true;
    L18:
        e = move-exception;
        Log.e(TAG, "Can't find activity to handle intent; ignoring", e);
        goto L20
    L5:
        if (r0.onMenuItemClick(this) == false) goto L7;
        return true;
    }

    @Override
    public boolean isEnabled() {
        if ((this.mFlags & 16) == 0) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public MenuItem setEnabled(boolean r2) {
        if (r2 == false) goto L4;
        this.mFlags |= 16;
    L5:
        this.mMenu.onItemsChanged(false);
        return this;
    L4:
        this.mFlags &= -17;
        goto L5
    }

    @Override
    public int getGroupId() {
        return this.mGroup;
    }

    @Override
    @ViewDebug.CapturedViewProperty
    public int getItemId() {
        return this.mId;
    }

    @Override
    public int getOrder() {
        return this.mCategoryOrder;
    }

    public int getOrdering() {
        return this.mOrdering;
    }

    @Override
    public Intent getIntent() {
        return this.mIntent;
    }

    @Override
    public MenuItem setIntent(Intent r1) {
        this.mIntent = r1;
        return this;
    }

    Runnable getCallback() {
        return this.mItemCallback;
    }

    public MenuItem setCallback(Runnable r1) {
        this.mItemCallback = r1;
        return this;
    }

    @Override
    public char getAlphabeticShortcut() {
        return this.mShortcutAlphabeticChar;
    }

    @Override
    public MenuItem setAlphabeticShortcut(char r2) {
        if (this.mShortcutAlphabeticChar != r2) goto L5;
        return this;
    L5:
        this.mShortcutAlphabeticChar = Character.toLowerCase(r2);
        this.mMenu.onItemsChanged(false);
        return this;
    }

    @Override
    public MenuItem setAlphabeticShortcut(char r2, int r3) {
        if (this.mShortcutAlphabeticChar == r2) goto L5;
    L7:
        this.mShortcutAlphabeticChar = Character.toLowerCase(r2);
        this.mShortcutAlphabeticModifiers = KeyEvent.normalizeMetaState(r3);
        this.mMenu.onItemsChanged(false);
        return this;
    L5:
        if (this.mShortcutAlphabeticModifiers != r3) goto L7;
        return this;
    }

    @Override
    public int getAlphabeticModifiers() {
        return this.mShortcutAlphabeticModifiers;
    }

    @Override
    public char getNumericShortcut() {
        return this.mShortcutNumericChar;
    }

    @Override
    public int getNumericModifiers() {
        return this.mShortcutNumericModifiers;
    }

    @Override
    public MenuItem setNumericShortcut(char r2) {
        if (this.mShortcutNumericChar != r2) goto L5;
        return this;
    L5:
        this.mShortcutNumericChar = r2;
        this.mMenu.onItemsChanged(false);
        return this;
    }

    @Override
    public MenuItem setNumericShortcut(char r2, int r3) {
        if (this.mShortcutNumericChar == r2) goto L5;
    L7:
        this.mShortcutNumericChar = r2;
        this.mShortcutNumericModifiers = KeyEvent.normalizeMetaState(r3);
        this.mMenu.onItemsChanged(false);
        return this;
    L5:
        if (this.mShortcutNumericModifiers != r3) goto L7;
        return this;
    }

    @Override
    public MenuItem setShortcut(char r1, char r2) {
        this.mShortcutNumericChar = r1;
        this.mShortcutAlphabeticChar = Character.toLowerCase(r2);
        this.mMenu.onItemsChanged(false);
        return this;
    }

    @Override
    public MenuItem setShortcut(char r1, char r2, int r3, int r4) {
        this.mShortcutNumericChar = r1;
        this.mShortcutNumericModifiers = KeyEvent.normalizeMetaState(r3);
        this.mShortcutAlphabeticChar = Character.toLowerCase(r2);
        this.mShortcutAlphabeticModifiers = KeyEvent.normalizeMetaState(r4);
        this.mMenu.onItemsChanged(false);
        return this;
    }

    char getShortcut() {
        if (this.mMenu.isQwertyMode() == false) goto L6;
        return this.mShortcutAlphabeticChar;
    L6:
        return this.mShortcutNumericChar;
    }

    String getShortcutLabel() {
        char r0 = getShortcut();
        if (r0 != 0) goto L6;
        return "";
    L6:
        Resources r1 = this.mMenu.getContext().getResources();
        StringBuilder r2 = new StringBuilder();
        if (ViewConfiguration.get(this.mMenu.getContext()).hasPermanentMenuKey() == false) goto L10;
        r2.append(r1.getString(R.string.abc_prepend_shortcut_label));
    L10:
        if (this.mMenu.isQwertyMode() == false) goto L12;
        int r3 = this.mShortcutAlphabeticModifiers;
    L13:
        appendModifier(r2, r3, 65536, r1.getString(R.string.abc_menu_meta_shortcut_label));
        appendModifier(r2, r3, 4096, r1.getString(R.string.abc_menu_ctrl_shortcut_label));
        appendModifier(r2, r3, 2, r1.getString(R.string.abc_menu_alt_shortcut_label));
        appendModifier(r2, r3, 1, r1.getString(R.string.abc_menu_shift_shortcut_label));
        appendModifier(r2, r3, 4, r1.getString(R.string.abc_menu_sym_shortcut_label));
        appendModifier(r2, r3, 8, r1.getString(R.string.abc_menu_function_shortcut_label));
        if (r0 != '\b') goto L16;
        r2.append(r1.getString(R.string.abc_menu_delete_shortcut_label));
    L24:
        return r2.toString();
    L16:
        if (r0 != '\n') goto L18;
        r2.append(r1.getString(R.string.abc_menu_enter_shortcut_label));
        goto L24
    L18:
        if (r0 == ' ') goto L20;
        r2.append(r0);
        goto L24
    L20:
        r2.append(r1.getString(R.string.abc_menu_space_shortcut_label));
        goto L24
    L12:
        r3 = this.mShortcutNumericModifiers;
        goto L13
    }

    private static void appendModifier(StringBuilder r0, int r1, int r2, String r3) {
        if ((r1 & r2) != r2) goto L6;
        r0.append(r3);
        return;
    }

    boolean shouldShowShortcut() {
        if (this.mMenu.isShortcutsVisible() == true) goto L5;
    L7:
        return false;
    L5:
        if (getShortcut() == 0) goto L7;
        return true;
    }

    @Override
    public SubMenu getSubMenu() {
        return this.mSubMenu;
    }

    @Override
    public boolean hasSubMenu() {
        if (this.mSubMenu == null) goto L5;
        return true;
    L5:
        return false;
    }

    public void setSubMenu(SubMenuBuilder r2) {
        this.mSubMenu = r2;
        r2.setHeaderTitle(getTitle());
    }

    @Override
    @ViewDebug.CapturedViewProperty
    public CharSequence getTitle() {
        return this.mTitle;
    }

    CharSequence getTitleForItemView(MenuView.ItemView r1) {
        if (r1 == null) goto L7;
        if (r1.prefersCondensedTitle() == false) goto L7;
        return getTitleCondensed();
    L7:
        return getTitle();
    }

    @Override
    public MenuItem setTitle(CharSequence r3) {
        this.mTitle = r3;
        this.mMenu.onItemsChanged(false);
        SubMenuBuilder r0 = this.mSubMenu;
        if (r0 == null) goto L5;
        r0.setHeaderTitle(r3);
    L5:
        return this;
    }

    @Override
    public MenuItem setTitle(int r2) {
        return setTitle(this.mMenu.getContext().getString(r2));
    }

    @Override
    public CharSequence getTitleCondensed() {
        CharSequence r0 = this.mTitleCondensed;
        if (r0 != null) goto L7;
        r0 = this.mTitle;
    L7:
        if (Build.VERSION.SDK_INT >= 18) goto L13;
        if (r0 != null) goto L10;
        return r0;
    L10:
        if ((r0 instanceof String) == false) goto L12;
        return r0;
    L12:
        return r0.toString();
    L13:
        return r0;
    }

    @Override
    public MenuItem setTitleCondensed(CharSequence r2) {
        this.mTitleCondensed = r2;
        if (r2 != null) goto L5;
        CharSequence r22 = this.mTitle;
    L5:
        this.mMenu.onItemsChanged(false);
        return this;
    }

    @Override
    public Drawable getIcon() {
        Drawable r0 = this.mIconDrawable;
        if (r0 == null) goto L7;
        return applyIconTintIfNecessary(r0);
    L7:
        if (this.mIconResId == 0) goto L10;
        Drawable r02 = AppCompatResources.getDrawable(this.mMenu.getContext(), this.mIconResId);
        this.mIconResId = 0;
        this.mIconDrawable = r02;
        return applyIconTintIfNecessary(r02);
    L10:
        return null;
    }

    @Override
    public MenuItem setIcon(Drawable r2) {
        this.mIconResId = 0;
        this.mIconDrawable = r2;
        this.mNeedToApplyIconTint = true;
        this.mMenu.onItemsChanged(false);
        return this;
    }

    @Override
    public MenuItem setIcon(int r2) {
        this.mIconDrawable = null;
        this.mIconResId = r2;
        this.mNeedToApplyIconTint = true;
        this.mMenu.onItemsChanged(false);
        return this;
    }

    @Override
    public MenuItem setIconTintList(@Nullable ColorStateList r2) {
        this.mIconTintList = r2;
        this.mHasIconTint = true;
        this.mNeedToApplyIconTint = true;
        this.mMenu.onItemsChanged(false);
        return this;
    }

    @Override
    public ColorStateList getIconTintList() {
        return this.mIconTintList;
    }

    @Override
    public MenuItem setIconTintMode(PorterDuff.Mode r2) {
        this.mIconTintMode = r2;
        this.mHasIconTintMode = true;
        this.mNeedToApplyIconTint = true;
        this.mMenu.onItemsChanged(false);
        return this;
    }

    @Override
    public PorterDuff.Mode getIconTintMode() {
        return this.mIconTintMode;
    }

    private Drawable applyIconTintIfNecessary(Drawable r2) {
        if (r2 != null) goto L4;
    L16:
        return r2;
    L4:
        if (this.mNeedToApplyIconTint == false) goto L16;
        if (this.mHasIconTint == false) goto L8;
    L9:
        r2 = DrawableCompat.wrap(r2).mutate();
        if (this.mHasIconTint == false) goto L13;
        DrawableCompat.setTintList(r2, this.mIconTintList);
    L13:
        if (this.mHasIconTintMode == false) goto L15;
        DrawableCompat.setTintMode(r2, this.mIconTintMode);
    L15:
        this.mNeedToApplyIconTint = false;
        goto L16
    L8:
        if (this.mHasIconTintMode == false) goto L16;
        goto L9
    }

    @Override
    public boolean isCheckable() {
        if ((this.mFlags & 1) == 1) goto L7;
        return false;
    L7:
        return true;
    }

    @Override
    public MenuItem setCheckable(boolean r3) {
        int r0 = this.mFlags;
        int r32 = r3 ? 1 : 0;
        this.mFlags = r32 | (r0 & (-2));
        if (r0 == this.mFlags) goto L5;
        this.mMenu.onItemsChanged(false);
    L5:
        return this;
    }

    public void setExclusiveCheckable(boolean r2) {
        int r0 = this.mFlags & (-5);
        if (r2 == false) goto L5;
        int r22 = 4;
    L6:
        this.mFlags = r22 | r0;
        return;
    L5:
        r22 = 0;
        goto L6
    }

    public boolean isExclusiveCheckable() {
        if ((this.mFlags & 4) == 0) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public boolean isChecked() {
        if ((this.mFlags & 2) != 2) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public MenuItem setChecked(boolean r2) {
        if ((this.mFlags & 4) == 0) goto L5;
        this.mMenu.setExclusiveItemChecked(this);
    L6:
        return this;
    L5:
        setCheckedInt(r2);
        goto L6
    }

    void setCheckedInt(boolean r4) {
        int r0 = this.mFlags;
        int r1 = r0 & (-3);
        if (r4 == false) goto L5;
        int r42 = 2;
    L6:
        this.mFlags = r42 | r1;
        if (r0 == this.mFlags) goto L10;
        this.mMenu.onItemsChanged(false);
        return;
    L10:
        return;
    L5:
        r42 = 0;
        goto L6
    }

    @Override
    public boolean isVisible() {
        ActionProvider r0 = this.mActionProvider;
        if (r0 == null) goto L14;
        if (r0.overridesItemVisibility() == false) goto L14;
        if ((this.mFlags & 8) == 0) goto L9;
    L11:
        return false;
    L9:
        if (this.mActionProvider.isVisible() == false) goto L11;
        return true;
    L14:
        if ((this.mFlags & 8) == 0) goto L19;
        return false;
    L19:
        return true;
    }

    boolean setVisibleInt(boolean r4) {
        int r0 = this.mFlags;
        int r1 = r0 & (-9);
        if (r4 == false) goto L5;
        int r42 = 0;
    L6:
        this.mFlags = r42 | r1;
        if (r0 == this.mFlags) goto L10;
        return true;
    L10:
        return false;
    L5:
        r42 = 8;
        goto L6
    }

    @Override
    public MenuItem setVisible(boolean r1) {
        if (setVisibleInt(r1) == false) goto L5;
        this.mMenu.onItemVisibleChanged(this);
    L5:
        return this;
    }

    @Override
    public MenuItem setOnMenuItemClickListener(MenuItem.OnMenuItemClickListener r1) {
        this.mClickListener = r1;
        return this;
    }

    public String toString() {
        CharSequence r0 = this.mTitle;
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.toString();
    }

    void setMenuInfo(ContextMenu.ContextMenuInfo r1) {
        this.mMenuInfo = r1;
    }

    @Override
    public ContextMenu.ContextMenuInfo getMenuInfo() {
        return this.mMenuInfo;
    }

    public void actionFormatChanged() {
        this.mMenu.onItemActionRequestChanged(this);
    }

    public boolean shouldShowIcon() {
        return this.mMenu.getOptionalIconsVisible();
    }

    public boolean isActionButton() {
        if ((this.mFlags & 32) != 32) goto L5;
        return true;
    L5:
        return false;
    }

    public boolean requestsActionButton() {
        if ((this.mShowAsAction & 1) == 1) goto L7;
        return false;
    L7:
        return true;
    }

    public boolean requiresActionButton() {
        if ((this.mShowAsAction & 2) != 2) goto L5;
        return true;
    L5:
        return false;
    }

    public void setIsActionButton(boolean r1) {
        if (r1 == false) goto L4;
        this.mFlags |= 32;
        return;
    L4:
        this.mFlags &= -33;
    }

    public boolean showsTextAsAction() {
        if ((this.mShowAsAction & 4) != 4) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public void setShowAsAction(int r3) {
        int r0 = r3 & 3;
        if (r0 != 0) goto L5;
    L11:
        this.mShowAsAction = r3;
        this.mMenu.onItemActionRequestChanged(this);
        return;
    L5:
        if (r0 == 1) goto L11;
        if (r0 == 2) goto L11;
        throw new IllegalArgumentException("SHOW_AS_ACTION_ALWAYS, SHOW_AS_ACTION_IF_ROOM, and SHOW_AS_ACTION_NEVER are mutually exclusive.");
    }

    @Override
    public SupportMenuItem setActionView(View r3) {
        this.mActionView = r3;
        this.mActionProvider = null;
        if (r3 != null) goto L5;
    L9:
        this.mMenu.onItemActionRequestChanged(this);
        return this;
    L5:
        if (r3.getId() != (-1)) goto L9;
        int r0 = this.mId;
        if (r0 <= 0) goto L9;
        r3.setId(r0);
        goto L9
    }

    @Override
    public SupportMenuItem setActionView(int r4) {
        Context r0 = this.mMenu.getContext();
        setActionView(LayoutInflater.from(r0).inflate(r4, new LinearLayout(r0), false));
        return this;
    }

    @Override
    public View getActionView() {
        View r0 = this.mActionView;
        if (r0 == null) goto L5;
        return r0;
    L5:
        ActionProvider r02 = this.mActionProvider;
        if (r02 == null) goto L9;
        this.mActionView = r02.onCreateActionView(this);
        return this.mActionView;
    L9:
        return null;
    }

    @Override
    public MenuItem setActionProvider(android.view.ActionProvider r2) {
        throw new UnsupportedOperationException("This is not supported, use MenuItemCompat.setActionProvider()");
    }

    @Override
    public android.view.ActionProvider getActionProvider() {
        throw new UnsupportedOperationException("This is not supported, use MenuItemCompat.getActionProvider()");
    }

    @Override
    public ActionProvider getSupportActionProvider() {
        return this.mActionProvider;
    }

    @Override
    public SupportMenuItem setSupportActionProvider(ActionProvider r2) {
        ActionProvider r0 = this.mActionProvider;
        if (r0 == null) goto L5;
        r0.reset();
    L5:
        this.mActionView = null;
        this.mActionProvider = r2;
        this.mMenu.onItemsChanged(true);
        ActionProvider r22 = this.mActionProvider;
        if (r22 == null) goto L8;
        r22.setVisibilityListener(new 1(this));
    L8:
        return this;
    }

    @Override
    public SupportMenuItem setShowAsActionFlags(int r1) {
        setShowAsAction(r1);
        return this;
    }

    @Override
    public boolean expandActionView() {
        if (hasCollapsibleActionView() == true) goto L5;
        return false;
    L5:
        MenuItem.OnActionExpandListener r0 = this.mOnActionExpandListener;
        if (r0 == null) goto L12;
        if (r0.onMenuItemActionExpand(this) == true) goto L12;
        return false;
    L12:
        return this.mMenu.expandItemActionView(this);
    }

    @Override
    public boolean collapseActionView() {
        if ((this.mShowAsAction & 8) != 0) goto L6;
        return false;
    L6:
        if (this.mActionView != null) goto L9;
        return true;
    L9:
        MenuItem.OnActionExpandListener r0 = this.mOnActionExpandListener;
        if (r0 == null) goto L16;
        if (r0.onMenuItemActionCollapse(this) == true) goto L16;
        return false;
    L16:
        return this.mMenu.collapseItemActionView(this);
    }

    public boolean hasCollapsibleActionView() {
        if ((this.mShowAsAction & 8) != 0) goto L5;
        return false;
    L5:
        if (this.mActionView != null) goto L10;
        ActionProvider r0 = this.mActionProvider;
        if (r0 == null) goto L10;
        this.mActionView = r0.onCreateActionView(this);
    L10:
        if (this.mActionView == null) goto L14;
        return true;
    L14:
        return false;
    }

    public void setActionViewExpanded(boolean r2) {
        this.mIsActionViewExpanded = r2;
        this.mMenu.onItemsChanged(false);
    }

    @Override
    public boolean isActionViewExpanded() {
        return this.mIsActionViewExpanded;
    }

    @Override
    public MenuItem setOnActionExpandListener(MenuItem.OnActionExpandListener r1) {
        this.mOnActionExpandListener = r1;
        return this;
    }

    @Override
    public SupportMenuItem setContentDescription(CharSequence r2) {
        this.mContentDescription = r2;
        this.mMenu.onItemsChanged(false);
        return this;
    }

    @Override
    public CharSequence getContentDescription() {
        return this.mContentDescription;
    }

    @Override
    public SupportMenuItem setTooltipText(CharSequence r2) {
        this.mTooltipText = r2;
        this.mMenu.onItemsChanged(false);
        return this;
    }

    @Override
    public CharSequence getTooltipText() {
        return this.mTooltipText;
    }
}
