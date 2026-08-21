package android.support.v7.view.menu;

import android.content.Context;
import android.content.Intent;
import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.content.ContextCompat;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.internal.view.SupportMenuItem;
import android.support.v4.view.ActionProvider;
import android.view.ContextMenu;
import android.view.KeyEvent;
import android.view.MenuItem;
import android.view.SubMenu;
import android.view.View;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ActionMenuItem implements SupportMenuItem {
    private static final int CHECKABLE = 1;
    private static final int CHECKED = 2;
    private static final int ENABLED = 16;
    private static final int EXCLUSIVE = 4;
    private static final int HIDDEN = 8;
    private static final int NO_ICON = 0;
    private final int mCategoryOrder;
    private MenuItem.OnMenuItemClickListener mClickListener;
    private CharSequence mContentDescription;
    private Context mContext;
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
    private final int mOrdering;
    private char mShortcutAlphabeticChar;
    private int mShortcutAlphabeticModifiers;
    private char mShortcutNumericChar;
    private int mShortcutNumericModifiers;
    private CharSequence mTitle;
    private CharSequence mTitleCondensed;
    private CharSequence mTooltipText;

    @Override
    public boolean collapseActionView() {
        return false;
    }

    @Override
    public boolean expandActionView() {
        return false;
    }

    @Override
    public View getActionView() {
        return null;
    }

    @Override
    public ContextMenu.ContextMenuInfo getMenuInfo() {
        return null;
    }

    @Override
    public SubMenu getSubMenu() {
        return null;
    }

    @Override
    public ActionProvider getSupportActionProvider() {
        return null;
    }

    @Override
    public boolean hasSubMenu() {
        return false;
    }

    @Override
    public boolean isActionViewExpanded() {
        return false;
    }

    @Override
    public void setShowAsAction(int r1) {
    }

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

    public ActionMenuItem(Context r3, int r4, int r5, int r6, int r7, CharSequence r8) {
        this.mShortcutNumericModifiers = 4096;
        this.mShortcutAlphabeticModifiers = 4096;
        this.mIconResId = 0;
        this.mIconTintList = null;
        this.mIconTintMode = null;
        this.mHasIconTint = false;
        this.mHasIconTintMode = false;
        this.mFlags = 16;
        this.mContext = r3;
        this.mId = r5;
        this.mGroup = r4;
        this.mCategoryOrder = r6;
        this.mOrdering = r7;
        this.mTitle = r8;
    }

    @Override
    public char getAlphabeticShortcut() {
        return this.mShortcutAlphabeticChar;
    }

    @Override
    public int getAlphabeticModifiers() {
        return this.mShortcutAlphabeticModifiers;
    }

    @Override
    public int getGroupId() {
        return this.mGroup;
    }

    @Override
    public Drawable getIcon() {
        return this.mIconDrawable;
    }

    @Override
    public Intent getIntent() {
        return this.mIntent;
    }

    @Override
    public int getItemId() {
        return this.mId;
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
    public int getOrder() {
        return this.mOrdering;
    }

    @Override
    public CharSequence getTitle() {
        return this.mTitle;
    }

    @Override
    public CharSequence getTitleCondensed() {
        CharSequence r0 = this.mTitleCondensed;
        if (r0 == null) goto L6;
        return r0;
    L6:
        return this.mTitle;
    }

    @Override
    public boolean isCheckable() {
        if ((this.mFlags & 1) != 0) goto L7;
        return false;
    L7:
        return true;
    }

    @Override
    public boolean isChecked() {
        if ((this.mFlags & 2) == 0) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public boolean isEnabled() {
        if ((this.mFlags & 16) == 0) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public boolean isVisible() {
        if ((this.mFlags & 8) != 0) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public MenuItem setAlphabeticShortcut(char r1) {
        this.mShortcutAlphabeticChar = Character.toLowerCase(r1);
        return this;
    }

    @Override
    public MenuItem setAlphabeticShortcut(char r1, int r2) {
        this.mShortcutAlphabeticChar = Character.toLowerCase(r1);
        this.mShortcutAlphabeticModifiers = KeyEvent.normalizeMetaState(r2);
        return this;
    }

    @Override
    public MenuItem setCheckable(boolean r2) {
        int r0 = this.mFlags & (-2);
        this.mFlags = (r2 ? 1 : 0) | r0;
        return this;
    }

    public ActionMenuItem setExclusiveCheckable(boolean r2) {
        int r0 = this.mFlags & (-5);
        if (r2 == false) goto L5;
        int r22 = 4;
    L6:
        this.mFlags = r22 | r0;
        return this;
    L5:
        r22 = 0;
        goto L6
    }

    @Override
    public MenuItem setChecked(boolean r2) {
        int r0 = this.mFlags & (-3);
        if (r2 == false) goto L5;
        int r22 = 2;
    L6:
        this.mFlags = r22 | r0;
        return this;
    L5:
        r22 = 0;
        goto L6
    }

    @Override
    public MenuItem setEnabled(boolean r2) {
        int r0 = this.mFlags & (-17);
        if (r2 == false) goto L5;
        int r22 = 16;
    L6:
        this.mFlags = r22 | r0;
        return this;
    L5:
        r22 = 0;
        goto L6
    }

    @Override
    public MenuItem setIcon(Drawable r1) {
        this.mIconDrawable = r1;
        this.mIconResId = 0;
        applyIconTint();
        return this;
    }

    @Override
    public MenuItem setIcon(int r2) {
        this.mIconResId = r2;
        this.mIconDrawable = ContextCompat.getDrawable(this.mContext, r2);
        applyIconTint();
        return this;
    }

    @Override
    public MenuItem setIntent(Intent r1) {
        this.mIntent = r1;
        return this;
    }

    @Override
    public MenuItem setNumericShortcut(char r1) {
        this.mShortcutNumericChar = r1;
        return this;
    }

    @Override
    public MenuItem setNumericShortcut(char r1, int r2) {
        this.mShortcutNumericChar = r1;
        this.mShortcutNumericModifiers = KeyEvent.normalizeMetaState(r2);
        return this;
    }

    @Override
    public MenuItem setOnMenuItemClickListener(MenuItem.OnMenuItemClickListener r1) {
        this.mClickListener = r1;
        return this;
    }

    @Override
    public MenuItem setShortcut(char r1, char r2) {
        this.mShortcutNumericChar = r1;
        this.mShortcutAlphabeticChar = Character.toLowerCase(r2);
        return this;
    }

    @Override
    public MenuItem setShortcut(char r1, char r2, int r3, int r4) {
        this.mShortcutNumericChar = r1;
        this.mShortcutNumericModifiers = KeyEvent.normalizeMetaState(r3);
        this.mShortcutAlphabeticChar = Character.toLowerCase(r2);
        this.mShortcutAlphabeticModifiers = KeyEvent.normalizeMetaState(r4);
        return this;
    }

    @Override
    public MenuItem setTitle(CharSequence r1) {
        this.mTitle = r1;
        return this;
    }

    @Override
    public MenuItem setTitle(int r2) {
        this.mTitle = this.mContext.getResources().getString(r2);
        return this;
    }

    @Override
    public MenuItem setTitleCondensed(CharSequence r1) {
        this.mTitleCondensed = r1;
        return this;
    }

    @Override
    public MenuItem setVisible(boolean r3) {
        int r1 = 8;
        int r0 = this.mFlags & 8;
        if (r3 == false) goto L5;
        r1 = 0;
    L5:
        this.mFlags = r0 | r1;
        return this;
    }

    public boolean invoke() {
        MenuItem.OnMenuItemClickListener r0 = this.mClickListener;
        if (r0 != null) goto L5;
    L7:
        Intent r02 = this.mIntent;
        if (r02 == null) goto L11;
        this.mContext.startActivity(r02);
        return true;
    L11:
        return false;
    L5:
        if (r0.onMenuItemClick(this) == false) goto L7;
        return true;
    }

    @Override
    public SupportMenuItem setActionView(View r1) {
        throw new UnsupportedOperationException();
    }

    @Override
    public MenuItem setActionProvider(android.view.ActionProvider r1) {
        throw new UnsupportedOperationException();
    }

    @Override
    public android.view.ActionProvider getActionProvider() {
        throw new UnsupportedOperationException();
    }

    @Override
    public SupportMenuItem setActionView(int r1) {
        throw new UnsupportedOperationException();
    }

    @Override
    public SupportMenuItem setSupportActionProvider(ActionProvider r1) {
        throw new UnsupportedOperationException();
    }

    @Override
    public SupportMenuItem setShowAsActionFlags(int r1) {
        setShowAsAction(r1);
        return this;
    }

    @Override
    public MenuItem setOnActionExpandListener(MenuItem.OnActionExpandListener r1) {
        throw new UnsupportedOperationException();
    }

    @Override
    public SupportMenuItem setContentDescription(CharSequence r1) {
        this.mContentDescription = r1;
        return this;
    }

    @Override
    public CharSequence getContentDescription() {
        return this.mContentDescription;
    }

    @Override
    public SupportMenuItem setTooltipText(CharSequence r1) {
        this.mTooltipText = r1;
        return this;
    }

    @Override
    public CharSequence getTooltipText() {
        return this.mTooltipText;
    }

    @Override
    public MenuItem setIconTintList(@Nullable ColorStateList r1) {
        this.mIconTintList = r1;
        this.mHasIconTint = true;
        applyIconTint();
        return this;
    }

    @Override
    public ColorStateList getIconTintList() {
        return this.mIconTintList;
    }

    @Override
    public MenuItem setIconTintMode(PorterDuff.Mode r1) {
        this.mIconTintMode = r1;
        this.mHasIconTintMode = true;
        applyIconTint();
        return this;
    }

    @Override
    public PorterDuff.Mode getIconTintMode() {
        return this.mIconTintMode;
    }

    private void applyIconTint() {
        if (this.mIconDrawable != null) goto L5;
        return;
    L5:
        if (this.mHasIconTint == false) goto L7;
    L8:
        this.mIconDrawable = DrawableCompat.wrap(this.mIconDrawable);
        this.mIconDrawable = this.mIconDrawable.mutate();
        if (this.mHasIconTint == false) goto L12;
        DrawableCompat.setTintList(this.mIconDrawable, this.mIconTintList);
    L12:
        if (this.mHasIconTintMode == false) goto L17;
        DrawableCompat.setTintMode(this.mIconDrawable, this.mIconTintMode);
        return;
    L17:
        return;
    L7:
        if (this.mHasIconTintMode == true) goto L8;
    }
}
