package android.support.v4.internal.view;

import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.support.annotation.RestrictTo;
import android.support.v4.view.ActionProvider;
import android.view.MenuItem;
import android.view.View;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public interface SupportMenuItem extends MenuItem {
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
    View getActionView();

    @Override
    int getAlphabeticModifiers();

    @Override
    CharSequence getContentDescription();

    @Override
    ColorStateList getIconTintList();

    @Override
    PorterDuff.Mode getIconTintMode();

    @Override
    int getNumericModifiers();

    ActionProvider getSupportActionProvider();

    @Override
    CharSequence getTooltipText();

    @Override
    boolean isActionViewExpanded();

    @Override
    MenuItem setActionView(int r1);

    @Override
    MenuItem setActionView(View r1);

    @Override
    MenuItem setAlphabeticShortcut(char r1, int r2);

    @Override
    SupportMenuItem setContentDescription(CharSequence r1);

    @Override
    MenuItem setIconTintList(ColorStateList r1);

    @Override
    MenuItem setIconTintMode(PorterDuff.Mode r1);

    @Override
    MenuItem setNumericShortcut(char r1, int r2);

    @Override
    MenuItem setShortcut(char r1, char r2, int r3, int r4);

    @Override
    void setShowAsAction(int r1);

    @Override
    MenuItem setShowAsActionFlags(int r1);

    SupportMenuItem setSupportActionProvider(ActionProvider r1);

    @Override
    SupportMenuItem setTooltipText(CharSequence r1);
}
