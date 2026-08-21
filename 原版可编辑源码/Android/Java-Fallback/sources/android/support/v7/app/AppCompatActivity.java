package android.support.v7.app;

public class AppCompatActivity extends android.support.v4.app.FragmentActivity implements android.support.v7.app.AppCompatCallback, android.support.v4.app.TaskStackBuilder.SupportParentable, android.support.v7.app.ActionBarDrawerToggle.DelegateProvider {
    private android.support.v7.app.AppCompatDelegate mDelegate;
    private android.content.res.Resources mResources;
    private int mThemeId;

    public AppCompatActivity() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mThemeId = r0
            return
    }

    private boolean performMenuItemShortcut(int r2, android.view.KeyEvent r3) {
            r1 = this;
            int r2 = android.os.Build.VERSION.SDK_INT
            r0 = 26
            if (r2 >= r0) goto L3e
            boolean r2 = r3.isCtrlPressed()
            if (r2 != 0) goto L3e
            int r2 = r3.getMetaState()
            boolean r2 = android.view.KeyEvent.metaStateHasNoModifiers(r2)
            if (r2 != 0) goto L3e
            int r2 = r3.getRepeatCount()
            if (r2 != 0) goto L3e
            int r2 = r3.getKeyCode()
            boolean r2 = android.view.KeyEvent.isModifierKey(r2)
            if (r2 != 0) goto L3e
            android.view.Window r2 = r1.getWindow()
            if (r2 == 0) goto L3e
            android.view.View r0 = r2.getDecorView()
            if (r0 == 0) goto L3e
            android.view.View r2 = r2.getDecorView()
            boolean r2 = r2.dispatchKeyShortcutEvent(r3)
            if (r2 == 0) goto L3e
            r2 = 1
            return r2
        L3e:
            r2 = 0
            return r2
    }

    @Override
    public void addContentView(android.view.View r2, android.view.ViewGroup.LayoutParams r3) {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.addContentView(r2, r3)
            return
    }

    @Override
    public void closeOptionsMenu() {
            r3 = this;
            android.support.v7.app.ActionBar r0 = r3.getSupportActionBar()
            android.view.Window r1 = r3.getWindow()
            r2 = 0
            boolean r1 = r1.hasFeature(r2)
            if (r1 == 0) goto L1a
            if (r0 == 0) goto L17
            boolean r0 = r0.closeOptionsMenu()
            if (r0 != 0) goto L1a
        L17:
            super.closeOptionsMenu()
        L1a:
            return
    }

    @Override
    public boolean dispatchKeyEvent(android.view.KeyEvent r4) {
            r3 = this;
            int r0 = r4.getKeyCode()
            android.support.v7.app.ActionBar r1 = r3.getSupportActionBar()
            r2 = 82
            if (r0 != r2) goto L16
            if (r1 == 0) goto L16
            boolean r0 = r1.onMenuKeyEvent(r4)
            if (r0 == 0) goto L16
            r4 = 1
            return r4
        L16:
            boolean r4 = super.dispatchKeyEvent(r4)
            return r4
    }

    @Override
    public <T extends android.view.View> T findViewById(int r2) {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            android.view.View r2 = r0.findViewById(r2)
            return r2
    }

    public android.support.v7.app.AppCompatDelegate getDelegate() {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.mDelegate
            if (r0 != 0) goto La
            android.support.v7.app.AppCompatDelegate r0 = android.support.v7.app.AppCompatDelegate.create(r1, r1)
            r1.mDelegate = r0
        La:
            android.support.v7.app.AppCompatDelegate r0 = r1.mDelegate
            return r0
    }

    @Override
    public android.support.v7.app.ActionBarDrawerToggle.Delegate getDrawerToggleDelegate() {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            android.support.v7.app.ActionBarDrawerToggle$Delegate r0 = r0.getDrawerToggleDelegate()
            return r0
    }

    @Override
    public android.view.MenuInflater getMenuInflater() {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            android.view.MenuInflater r0 = r0.getMenuInflater()
            return r0
    }

    @Override
    public android.content.res.Resources getResources() {
            r2 = this;
            android.content.res.Resources r0 = r2.mResources
            if (r0 != 0) goto L15
            boolean r0 = android.support.v7.widget.VectorEnabledTintResources.shouldBeUsed()
            if (r0 == 0) goto L15
            android.support.v7.widget.VectorEnabledTintResources r0 = new android.support.v7.widget.VectorEnabledTintResources
            android.content.res.Resources r1 = super.getResources()
            r0.<init>(r2, r1)
            r2.mResources = r0
        L15:
            android.content.res.Resources r0 = r2.mResources
            if (r0 != 0) goto L1d
            android.content.res.Resources r0 = super.getResources()
        L1d:
            return r0
    }

    public android.support.v7.app.ActionBar getSupportActionBar() {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            android.support.v7.app.ActionBar r0 = r0.getSupportActionBar()
            return r0
    }

    @Override
    public android.content.Intent getSupportParentActivityIntent() {
            r1 = this;
            android.content.Intent r0 = android.support.v4.app.NavUtils.getParentActivityIntent(r1)
            return r0
    }

    @Override
    public void invalidateOptionsMenu() {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.invalidateOptionsMenu()
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r3) {
            r2 = this;
            super.onConfigurationChanged(r3)
            android.support.v7.app.AppCompatDelegate r0 = r2.getDelegate()
            r0.onConfigurationChanged(r3)
            android.content.res.Resources r0 = r2.mResources
            if (r0 == 0) goto L1b
            android.content.res.Resources r0 = super.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            android.content.res.Resources r1 = r2.mResources
            r1.updateConfiguration(r3, r0)
        L1b:
            return
    }

    @Override
    public void onContentChanged() {
            r0 = this;
            r0.onSupportContentChanged()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r4) {
            r3 = this;
            android.support.v7.app.AppCompatDelegate r0 = r3.getDelegate()
            r0.installViewFactory()
            r0.onCreate(r4)
            boolean r0 = r0.applyDayNight()
            if (r0 == 0) goto L2a
            int r0 = r3.mThemeId
            if (r0 == 0) goto L2a
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L25
            android.content.res.Resources$Theme r0 = r3.getTheme()
            int r1 = r3.mThemeId
            r2 = 0
            r3.onApplyThemeResource(r0, r1, r2)
            goto L2a
        L25:
            int r0 = r3.mThemeId
            r3.setTheme(r0)
        L2a:
            super.onCreate(r4)
            return
    }

    public void onCreateSupportNavigateUpTaskStack(android.support.v4.app.TaskStackBuilder r1) {
            r0 = this;
            r1.addParentStack(r0)
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            super.onDestroy()
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.onDestroy()
            return
    }

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            boolean r0 = r1.performMenuItemShortcut(r2, r3)
            if (r0 == 0) goto L8
            r2 = 1
            return r2
        L8:
            boolean r2 = super.onKeyDown(r2, r3)
            return r2
    }

    @Override
    public final boolean onMenuItemSelected(int r2, android.view.MenuItem r3) {
            r1 = this;
            boolean r2 = super.onMenuItemSelected(r2, r3)
            if (r2 == 0) goto L8
            r2 = 1
            return r2
        L8:
            android.support.v7.app.ActionBar r2 = r1.getSupportActionBar()
            int r3 = r3.getItemId()
            r0 = 16908332(0x102002c, float:2.3877352E-38)
            if (r3 != r0) goto L24
            if (r2 == 0) goto L24
            int r2 = r2.getDisplayOptions()
            r2 = r2 & 4
            if (r2 == 0) goto L24
            boolean r2 = r1.onSupportNavigateUp()
            return r2
        L24:
            r2 = 0
            return r2
    }

    @Override
    public boolean onMenuOpened(int r1, android.view.Menu r2) {
            r0 = this;
            boolean r1 = super.onMenuOpened(r1, r2)
            return r1
    }

    @Override
    public void onPanelClosed(int r1, android.view.Menu r2) {
            r0 = this;
            super.onPanelClosed(r1, r2)
            return
    }

    @Override
    protected void onPostCreate(android.os.Bundle r2) {
            r1 = this;
            super.onPostCreate(r2)
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.onPostCreate(r2)
            return
    }

    @Override
    protected void onPostResume() {
            r1 = this;
            super.onPostResume()
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.onPostResume()
            return
    }

    public void onPrepareSupportNavigateUpTaskStack(android.support.v4.app.TaskStackBuilder r1) {
            r0 = this;
            return
    }

    @Override
    protected void onSaveInstanceState(android.os.Bundle r2) {
            r1 = this;
            super.onSaveInstanceState(r2)
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.onSaveInstanceState(r2)
            return
    }

    @Override
    protected void onStart() {
            r1 = this;
            super.onStart()
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.onStart()
            return
    }

    @Override
    protected void onStop() {
            r1 = this;
            super.onStop()
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.onStop()
            return
    }

    @Override
    public void onSupportActionModeFinished(android.support.v7.view.ActionMode r1) {
            r0 = this;
            return
    }

    @Override
    public void onSupportActionModeStarted(android.support.v7.view.ActionMode r1) {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void onSupportContentChanged() {
            r0 = this;
            return
    }

    public boolean onSupportNavigateUp() {
            r2 = this;
            android.content.Intent r0 = r2.getSupportParentActivityIntent()
            if (r0 == 0) goto L26
            boolean r1 = r2.supportShouldUpRecreateTask(r0)
            if (r1 == 0) goto L21
            android.support.v4.app.TaskStackBuilder r0 = android.support.v4.app.TaskStackBuilder.create(r2)
            r2.onCreateSupportNavigateUpTaskStack(r0)
            r2.onPrepareSupportNavigateUpTaskStack(r0)
            r0.startActivities()
            android.support.v4.app.ActivityCompat.finishAffinity(r2)     // Catch: java.lang.IllegalStateException -> L1d
            goto L24
        L1d:
            r2.finish()
            goto L24
        L21:
            r2.supportNavigateUpTo(r0)
        L24:
            r0 = 1
            return r0
        L26:
            r0 = 0
            return r0
    }

    @Override
    protected void onTitleChanged(java.lang.CharSequence r1, int r2) {
            r0 = this;
            super.onTitleChanged(r1, r2)
            android.support.v7.app.AppCompatDelegate r2 = r0.getDelegate()
            r2.setTitle(r1)
            return
    }

    @Override
    public android.support.v7.view.ActionMode onWindowStartingSupportActionMode(android.support.v7.view.ActionMode.Callback r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void openOptionsMenu() {
            r3 = this;
            android.support.v7.app.ActionBar r0 = r3.getSupportActionBar()
            android.view.Window r1 = r3.getWindow()
            r2 = 0
            boolean r1 = r1.hasFeature(r2)
            if (r1 == 0) goto L1a
            if (r0 == 0) goto L17
            boolean r0 = r0.openOptionsMenu()
            if (r0 != 0) goto L1a
        L17:
            super.openOptionsMenu()
        L1a:
            return
    }

    @Override
    public void setContentView(int r2) {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.setContentView(r2)
            return
    }

    @Override
    public void setContentView(android.view.View r2) {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.setContentView(r2)
            return
    }

    @Override
    public void setContentView(android.view.View r2, android.view.ViewGroup.LayoutParams r3) {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.setContentView(r2, r3)
            return
    }

    public void setSupportActionBar(android.support.v7.widget.Toolbar r2) {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.setSupportActionBar(r2)
            return
    }

    @java.lang.Deprecated
    public void setSupportProgress(int r1) {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void setSupportProgressBarIndeterminate(boolean r1) {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void setSupportProgressBarIndeterminateVisibility(boolean r1) {
            r0 = this;
            return
    }

    @java.lang.Deprecated
    public void setSupportProgressBarVisibility(boolean r1) {
            r0 = this;
            return
    }

    @Override
    public void setTheme(int r1) {
            r0 = this;
            super.setTheme(r1)
            r0.mThemeId = r1
            return
    }

    public android.support.v7.view.ActionMode startSupportActionMode(android.support.v7.view.ActionMode.Callback r2) {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            android.support.v7.view.ActionMode r2 = r0.startSupportActionMode(r2)
            return r2
    }

    @Override
    public void supportInvalidateOptionsMenu() {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            r0.invalidateOptionsMenu()
            return
    }

    public void supportNavigateUpTo(android.content.Intent r1) {
            r0 = this;
            android.support.v4.app.NavUtils.navigateUpTo(r0, r1)
            return
    }

    public boolean supportRequestWindowFeature(int r2) {
            r1 = this;
            android.support.v7.app.AppCompatDelegate r0 = r1.getDelegate()
            boolean r2 = r0.requestWindowFeature(r2)
            return r2
    }

    public boolean supportShouldUpRecreateTask(android.content.Intent r1) {
            r0 = this;
            boolean r1 = android.support.v4.app.NavUtils.shouldUpRecreateTask(r0, r1)
            return r1
    }
}
