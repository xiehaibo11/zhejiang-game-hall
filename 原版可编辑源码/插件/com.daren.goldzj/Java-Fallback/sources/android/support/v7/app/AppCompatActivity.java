package android.support.v7.app;

import android.content.Intent;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Build;
import android.os.Bundle;
import android.support.annotation.CallSuper;
import android.support.annotation.IdRes;
import android.support.annotation.LayoutRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.StyleRes;
import android.support.v4.app.ActivityCompat;
import android.support.v4.app.FragmentActivity;
import android.support.v4.app.NavUtils;
import android.support.v4.app.TaskStackBuilder;
import android.support.v7.app.ActionBarDrawerToggle;
import android.support.v7.view.ActionMode;
import android.support.v7.widget.Toolbar;
import android.support.v7.widget.VectorEnabledTintResources;
import android.util.DisplayMetrics;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;

public class AppCompatActivity extends FragmentActivity implements AppCompatCallback, TaskStackBuilder.SupportParentable, ActionBarDrawerToggle.DelegateProvider {
    private AppCompatDelegate mDelegate;
    private Resources mResources;
    private int mThemeId;

    public void onPrepareSupportNavigateUpTaskStack(@NonNull TaskStackBuilder r1) {
    }

    @Override
    @CallSuper
    public void onSupportActionModeFinished(@NonNull ActionMode r1) {
    }

    @Override
    @CallSuper
    public void onSupportActionModeStarted(@NonNull ActionMode r1) {
    }

    @Deprecated
    public void onSupportContentChanged() {
    }

    @Override
    @Nullable
    public ActionMode onWindowStartingSupportActionMode(@NonNull ActionMode.Callback r1) {
        return null;
    }

    @Deprecated
    public void setSupportProgress(int r1) {
    }

    @Deprecated
    public void setSupportProgressBarIndeterminate(boolean r1) {
    }

    @Deprecated
    public void setSupportProgressBarIndeterminateVisibility(boolean r1) {
    }

    @Deprecated
    public void setSupportProgressBarVisibility(boolean r1) {
    }

    public AppCompatActivity() {
        this.mThemeId = 0;
    }

    @Override
    protected void onCreate(@Nullable Bundle r4) {
        AppCompatDelegate r0 = getDelegate();
        r0.installViewFactory();
        r0.onCreate(r4);
        if (r0.applyDayNight() == true) goto L5;
    L10:
        super.onCreate(r4);
        return;
    L5:
        if (this.mThemeId == 0) goto L10;
        if (Build.VERSION.SDK_INT < 23) goto L9;
        onApplyThemeResource(getTheme(), this.mThemeId, false);
        goto L10
    L9:
        setTheme(this.mThemeId);
        goto L10
    }

    @Override
    public void setTheme(@StyleRes int r1) {
        super.setTheme(r1);
        this.mThemeId = r1;
    }

    @Override
    protected void onPostCreate(@Nullable Bundle r2) {
        super.onPostCreate(r2);
        getDelegate().onPostCreate(r2);
    }

    @Nullable
    public ActionBar getSupportActionBar() {
        return getDelegate().getSupportActionBar();
    }

    public void setSupportActionBar(@Nullable Toolbar r2) {
        getDelegate().setSupportActionBar(r2);
    }

    @Override
    public MenuInflater getMenuInflater() {
        return getDelegate().getMenuInflater();
    }

    @Override
    public void setContentView(@LayoutRes int r2) {
        getDelegate().setContentView(r2);
    }

    @Override
    public void setContentView(View r2) {
        getDelegate().setContentView(r2);
    }

    @Override
    public void setContentView(View r2, ViewGroup.LayoutParams r3) {
        getDelegate().setContentView(r2, r3);
    }

    @Override
    public void addContentView(View r2, ViewGroup.LayoutParams r3) {
        getDelegate().addContentView(r2, r3);
    }

    @Override
    public void onConfigurationChanged(Configuration r3) {
        super.onConfigurationChanged(r3);
        getDelegate().onConfigurationChanged(r3);
        if (this.mResources == null) goto L6;
        DisplayMetrics r0 = super.getResources().getDisplayMetrics();
        this.mResources.updateConfiguration(r3, r0);
        return;
    }

    @Override
    protected void onPostResume() {
        super.onPostResume();
        getDelegate().onPostResume();
    }

    @Override
    protected void onStart() {
        super.onStart();
        getDelegate().onStart();
    }

    @Override
    protected void onStop() {
        super.onStop();
        getDelegate().onStop();
    }

    @Override
    public <T extends View> T findViewById(@IdRes int r2) {
        return (T) getDelegate().findViewById(r2);
    }

    @Override
    public final boolean onMenuItemSelected(int r2, MenuItem r3) {
        if (super.onMenuItemSelected(r2, r3) == false) goto L6;
        return true;
    L6:
        ActionBar r22 = getSupportActionBar();
        if (r3.getItemId() != 16908332) goto L13;
        if (r22 != null) goto L10;
        return false;
    L10:
        if ((r22.getDisplayOptions() & 4) != 0) goto L12;
        return false;
    L12:
        return onSupportNavigateUp();
    L13:
        return false;
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        getDelegate().onDestroy();
    }

    @Override
    protected void onTitleChanged(CharSequence r1, int r2) {
        super.onTitleChanged(r1, r2);
        getDelegate().setTitle(r1);
    }

    public boolean supportRequestWindowFeature(int r2) {
        return getDelegate().requestWindowFeature(r2);
    }

    @Override
    public void supportInvalidateOptionsMenu() {
        getDelegate().invalidateOptionsMenu();
    }

    @Override
    public void invalidateOptionsMenu() {
        getDelegate().invalidateOptionsMenu();
    }

    @Nullable
    public ActionMode startSupportActionMode(@NonNull ActionMode.Callback r2) {
        return getDelegate().startSupportActionMode(r2);
    }

    public void onCreateSupportNavigateUpTaskStack(@NonNull TaskStackBuilder r1) {
        r1.addParentStack(this);
    }

    public boolean onSupportNavigateUp() {
        Intent r0 = getSupportParentActivityIntent();
        if (r0 != null) goto L5;
        return false;
    L5:
        if (supportShouldUpRecreateTask(r0) == false) goto L10;
        TaskStackBuilder r02 = TaskStackBuilder.create(this);
        onCreateSupportNavigateUpTaskStack(r02);
        onPrepareSupportNavigateUpTaskStack(r02);
        r02.startActivities();
        ActivityCompat.finishAffinity(this);     // Catch: IllegalStateException -> L9
        return true;
    L9:
        finish();
        return true;
    L10:
        supportNavigateUpTo(r0);
        return true;
    }

    @Override
    @Nullable
    public Intent getSupportParentActivityIntent() {
        return NavUtils.getParentActivityIntent(this);
    }

    public boolean supportShouldUpRecreateTask(@NonNull Intent r1) {
        return NavUtils.shouldUpRecreateTask(this, r1);
    }

    public void supportNavigateUpTo(@NonNull Intent r1) {
        NavUtils.navigateUpTo(this, r1);
    }

    @Override
    public void onContentChanged() {
        onSupportContentChanged();
    }

    @Override
    @Nullable
    public ActionBarDrawerToggle.Delegate getDrawerToggleDelegate() {
        return getDelegate().getDrawerToggleDelegate();
    }

    @Override
    public boolean onMenuOpened(int r1, Menu r2) {
        return super.onMenuOpened(r1, r2);
    }

    @Override
    public void onPanelClosed(int r1, Menu r2) {
        super.onPanelClosed(r1, r2);
    }

    @Override
    protected void onSaveInstanceState(Bundle r2) {
        super.onSaveInstanceState(r2);
        getDelegate().onSaveInstanceState(r2);
    }

    @NonNull
    public AppCompatDelegate getDelegate() {
        if (this.mDelegate != null) goto L6;
        this.mDelegate = AppCompatDelegate.create(this, this);
    L6:
        return this.mDelegate;
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent r4) {
        int r0 = r4.getKeyCode();
        ActionBar r1 = getSupportActionBar();
        if (r0 != 82) goto L10;
        if (r1 == null) goto L10;
        if (r1.onMenuKeyEvent(r4) == false) goto L10;
        return true;
    L10:
        return super.dispatchKeyEvent(r4);
    }

    @Override
    public Resources getResources() {
        if (this.mResources == null) goto L5;
    L7:
        Resources r0 = this.mResources;
        if (r0 == null) goto L10;
        return r0;
    L10:
        return super.getResources();
    L5:
        if (VectorEnabledTintResources.shouldBeUsed() == false) goto L7;
        this.mResources = new VectorEnabledTintResources(this, super.getResources());
        goto L7
    }

    private boolean performMenuItemShortcut(int r2, KeyEvent r3) {
        if (Build.VERSION.SDK_INT < 26) goto L5;
        return false;
    L5:
        if (r3.isCtrlPressed() == false) goto L7;
        return false;
    L7:
        if (KeyEvent.metaStateHasNoModifiers(r3.getMetaState()) == false) goto L9;
        return false;
    L9:
        if (r3.getRepeatCount() == 0) goto L11;
        return false;
    L11:
        if (KeyEvent.isModifierKey(r3.getKeyCode()) == true) goto L25;
        Window r22 = getWindow();
        if (r22 != null) goto L15;
        return false;
    L15:
        if (r22.getDecorView() != null) goto L17;
        return false;
    L17:
        if (r22.getDecorView().dispatchKeyShortcutEvent(r3) == false) goto L28;
        return true;
    L28:
        return false;
    L25:
        return false;
    }

    @Override
    public boolean onKeyDown(int r2, KeyEvent r3) {
        if (performMenuItemShortcut(r2, r3) == false) goto L7;
        return true;
    L7:
        return super.onKeyDown(r2, r3);
    }

    @Override
    public void openOptionsMenu() {
        ActionBar r0 = getSupportActionBar();
        if (getWindow().hasFeature(0) == false) goto L9;
        if (r0 != null) goto L6;
    L7:
        super.openOptionsMenu();
        return;
    L6:
        if (r0.openOptionsMenu() == false) goto L7;
        return;
    }

    @Override
    public void closeOptionsMenu() {
        ActionBar r0 = getSupportActionBar();
        if (getWindow().hasFeature(0) == false) goto L9;
        if (r0 != null) goto L6;
    L7:
        super.closeOptionsMenu();
        return;
    L6:
        if (r0.closeOptionsMenu() == false) goto L7;
        return;
    }
}
