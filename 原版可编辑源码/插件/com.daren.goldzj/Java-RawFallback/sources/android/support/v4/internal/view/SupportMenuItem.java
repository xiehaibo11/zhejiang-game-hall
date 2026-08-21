package android.support.v4.internal.view;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public interface SupportMenuItem extends android.view.MenuItem {
    public static final int SHOW_AS_ACTION_ALWAYS = 2;
    public static final int SHOW_AS_ACTION_COLLAPSE_ACTION_VIEW = 8;
    public static final int SHOW_AS_ACTION_IF_ROOM = 1;
    public static final int SHOW_AS_ACTION_NEVER = 0;
    public static final int SHOW_AS_ACTION_WITH_TEXT = 4;

    @Override
    boolean collapseActionView();

    @Override
    boolean expandActionView();

    @Override
    android.view.View getActionView();

    @Override
    int getAlphabeticModifiers();

    @Override
    java.lang.CharSequence getContentDescription();

    @Override
    android.content.res.ColorStateList getIconTintList();

    @Override
    android.graphics.PorterDuff.Mode getIconTintMode();

    @Override
    int getNumericModifiers();

    android.support.v4.view.ActionProvider getSupportActionProvider();

    @Override
    java.lang.CharSequence getTooltipText();

    @Override
    boolean isActionViewExpanded();

    @Override
    android.view.MenuItem setActionView(int r1);

    @Override
    android.view.MenuItem setActionView(android.view.View r1);

    @Override
    android.view.MenuItem setAlphabeticShortcut(char r1, int r2);

    @Override
    android.support.v4.internal.view.SupportMenuItem setContentDescription(java.lang.CharSequence r1);

    @Override
    android.view.MenuItem setIconTintList(android.content.res.ColorStateList r1);

    @Override
    android.view.MenuItem setIconTintMode(android.graphics.PorterDuff.Mode r1);

    @Override
    android.view.MenuItem setNumericShortcut(char r1, int r2);

    @Override
    android.view.MenuItem setShortcut(char r1, char r2, int r3, int r4);

    @Override
    void setShowAsAction(int r1);

    @Override
    android.view.MenuItem setShowAsActionFlags(int r1);

    android.support.v4.internal.view.SupportMenuItem setSupportActionProvider(android.support.v4.view.ActionProvider r1);

    @Override
    android.support.v4.internal.view.SupportMenuItem setTooltipText(java.lang.CharSequence r1);
}
