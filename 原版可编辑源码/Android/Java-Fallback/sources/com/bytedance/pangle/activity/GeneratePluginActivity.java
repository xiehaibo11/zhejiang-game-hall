package com.bytedance.pangle.activity;

public abstract class GeneratePluginActivity extends android.app.Activity implements com.bytedance.pangle.activity.IPluginActivity {
    public com.bytedance.pangle.plugin.Plugin mPlugin;
    public com.bytedance.pangle.activity.GenerateProxyActivity mProxyActivity;

    public GeneratePluginActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void _requestPermissions(java.lang.String[] r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.requestPermissions(r2, r3)
            return
    }

    @Override
    public void addContentView(android.view.View r2, android.view.ViewGroup.LayoutParams r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperAddContentView(r2, r3)
            return
    }

    @Override
    public void attachBaseContext(android.content.Context r1) {
            r0 = this;
            super.attachBaseContext(r1)
            com.bytedance.pangle.activity.GenerateProxyActivity r1 = r0.mProxyActivity
            com.bytedance.pangle.util.a.a(r0, r1)
            return
    }

    @Override
    public void closeContextMenu() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperCloseContextMenu()
            return
    }

    @Override
    public void closeOptionsMenu() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperCloseOptionsMenu()
            return
    }

    public boolean convertToTranslucent(android.app.Activity.TranslucentConversionListener r2, android.app.ActivityOptions r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperConvertToTranslucent(r2, r3)
            return r2
    }

    @Override
    public android.app.PendingIntent createPendingResult(int r2, android.content.Intent r3, int r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.app.PendingIntent r2 = r0.zeusSuperCreatePendingResult(r2, r3, r4)
            return r2
    }

    @Override
    public boolean dispatchGenericMotionEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperDispatchGenericMotionEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchKeyEvent(android.view.KeyEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperDispatchKeyEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchKeyShortcutEvent(android.view.KeyEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperDispatchKeyShortcutEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchPopulateAccessibilityEvent(android.view.accessibility.AccessibilityEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperDispatchPopulateAccessibilityEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperDispatchTouchEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchTrackballEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperDispatchTrackballEvent(r2)
            return r2
    }

    @Override
    public void dump(java.lang.String r2, java.io.FileDescriptor r3, java.io.PrintWriter r4, java.lang.String[] r5) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperDump(r2, r3, r4, r5)
            return
    }

    @Override
    public void enterPictureInPictureMode() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperEnterPictureInPictureMode()
            return
    }

    @Override
    public boolean enterPictureInPictureMode(android.app.PictureInPictureParams r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperEnterPictureInPictureMode(r2)
            return r2
    }

    @Override
    public android.view.View findViewById(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.View r2 = r0.zeusSuperFindViewById(r2)
            return r2
    }

    @Override
    public void finish() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperFinish()
            return
    }

    @Override
    public void finishActivity(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperFinishActivity(r2)
            return
    }

    @Override
    public void finishActivityFromChild(android.app.Activity r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperFinishActivityFromChild(r2, r3)
            return
    }

    @Override
    public void finishAffinity() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperFinishAffinity()
            return
    }

    @Override
    public void finishAfterTransition() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperFinishAfterTransition()
            return
    }

    @Override
    public void finishAndRemoveTask() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperFinishAndRemoveTask()
            return
    }

    @Override
    public void finishFromChild(android.app.Activity r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperFinishFromChild(r2)
            return
    }

    @Override
    public android.app.ActionBar getActionBar() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.app.ActionBar r0 = r0.zeusSuperGetActionBar()
            return r0
    }

    @Override
    public android.content.ComponentName getCallingActivity() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.content.ComponentName r0 = r0.zeusSuperGetCallingActivity()
            return r0
    }

    @Override
    public java.lang.String getCallingPackage() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            java.lang.String r0 = r0.zeusSuperGetCallingPackage()
            return r0
    }

    @Override
    public int getChangingConfigurations() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            int r0 = r0.zeusSuperGetChangingConfigurations()
            return r0
    }

    @Override
    public android.content.ComponentName getComponentName() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.content.ComponentName r0 = r0.zeusSuperGetComponentName()
            return r0
    }

    @Override
    public android.transition.Scene getContentScene() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.transition.Scene r0 = r0.zeusSuperGetContentScene()
            return r0
    }

    @Override
    public android.transition.TransitionManager getContentTransitionManager() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.transition.TransitionManager r0 = r0.zeusSuperGetContentTransitionManager()
            return r0
    }

    @Override
    public android.view.View getCurrentFocus() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.View r0 = r0.zeusSuperGetCurrentFocus()
            return r0
    }

    @Override
    public android.app.FragmentManager getFragmentManager() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.app.FragmentManager r0 = r0.zeusSuperGetFragmentManager()
            return r0
    }

    @Override
    public android.content.Intent getIntent() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.content.Intent r0 = r0.zeusSuperGetIntent()
            return r0
    }

    @Override
    public java.lang.Object getLastNonConfigurationInstance() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            java.lang.Object r0 = r0.zeusSuperGetLastNonConfigurationInstance()
            return r0
    }

    @Override
    public android.view.LayoutInflater getLayoutInflater() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.LayoutInflater r0 = r0.zeusSuperGetLayoutInflater()
            return r0
    }

    @Override
    public android.app.LoaderManager getLoaderManager() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.app.LoaderManager r0 = r0.zeusSuperGetLoaderManager()
            return r0
    }

    @Override
    public java.lang.String getLocalClassName() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            java.lang.String r0 = r0.zeusSuperGetLocalClassName()
            return r0
    }

    @Override
    public int getMaxNumPictureInPictureActions() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            int r0 = r0.zeusSuperGetMaxNumPictureInPictureActions()
            return r0
    }

    @Override
    public android.view.MenuInflater getMenuInflater() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.MenuInflater r0 = r0.zeusSuperGetMenuInflater()
            return r0
    }

    @Override
    public android.content.Intent getParentActivityIntent() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.content.Intent r0 = r0.zeusSuperGetParentActivityIntent()
            return r0
    }

    @Override
    public android.content.SharedPreferences getPreferences(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.content.SharedPreferences r2 = r0.zeusSuperGetPreferences(r2)
            return r2
    }

    @Override
    public android.net.Uri getReferrer() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.net.Uri r0 = r0.zeusSuperGetReferrer()
            return r0
    }

    @Override
    public int getRequestedOrientation() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            int r0 = r0.zeusSuperGetRequestedOrientation()
            return r0
    }

    @Override
    public java.lang.Object getSystemService(java.lang.String r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            java.lang.Object r2 = r0.zeusSuperGetSystemService(r2)
            return r2
    }

    @Override
    public int getTaskId() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            int r0 = r0.zeusSuperGetTaskId()
            return r0
    }

    @Override
    public android.app.VoiceInteractor getVoiceInteractor() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.app.VoiceInteractor r0 = r0.zeusSuperGetVoiceInteractor()
            return r0
    }

    @Override
    public android.view.Window getWindow() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.Window r0 = r0.zeusSuperGetWindow()
            return r0
    }

    @Override
    public android.view.WindowManager getWindowManager() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.WindowManager r0 = r0.zeusSuperGetWindowManager()
            return r0
    }

    @Override
    public boolean hasWindowFocus() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperHasWindowFocus()
            return r0
    }

    @Override
    public void invalidateOptionsMenu() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperInvalidateOptionsMenu()
            return
    }

    @Override
    public boolean isActivityTransitionRunning() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperIsActivityTransitionRunning()
            return r0
    }

    @Override
    public boolean isChangingConfigurations() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperIsChangingConfigurations()
            return r0
    }

    @Override
    public boolean isDestroyed() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperIsDestroyed()
            return r0
    }

    @Override
    public boolean isFinishing() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperIsFinishing()
            return r0
    }

    @Override
    public boolean isImmersive() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperIsImmersive()
            return r0
    }

    @Override
    public boolean isInMultiWindowMode() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperIsInMultiWindowMode()
            return r0
    }

    @Override
    public boolean isInPictureInPictureMode() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperIsInPictureInPictureMode()
            return r0
    }

    @Override
    public boolean isLocalVoiceInteractionSupported() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperIsLocalVoiceInteractionSupported()
            return r0
    }

    @Override
    public boolean isTaskRoot() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperIsTaskRoot()
            return r0
    }

    @Override
    public boolean isVoiceInteraction() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperIsVoiceInteraction()
            return r0
    }

    @Override
    public boolean isVoiceInteractionRoot() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperIsVoiceInteractionRoot()
            return r0
    }

    @Override
    public boolean moveTaskToBack(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperMoveTaskToBack(r2)
            return r2
    }

    @Override
    public boolean navigateUpTo(android.content.Intent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperNavigateUpTo(r2)
            return r2
    }

    @Override
    public boolean navigateUpToFromChild(android.app.Activity r2, android.content.Intent r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperNavigateUpToFromChild(r2, r3)
            return r2
    }

    @Override
    public void onActionModeFinished(android.view.ActionMode r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnActionModeFinished(r2)
            return
    }

    @Override
    public void onActionModeStarted(android.view.ActionMode r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnActionModeStarted(r2)
            return
    }

    @Override
    public void onActivityReenter(int r2, android.content.Intent r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnActivityReenter(r2, r3)
            return
    }

    @Override
    protected void onActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnActivityResult(r2, r3, r4)
            return
    }

    @Override
    protected void onApplyThemeResource(android.content.res.Resources.Theme r2, int r3, boolean r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnApplyThemeResource(r2, r3, r4)
            return
    }

    @Override
    public void onAttachFragment(android.app.Fragment r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnAttachFragment(r2)
            return
    }

    @Override
    public void onAttachedToWindow() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnAttachedToWindow()
            return
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnBackPressed()
            return
    }

    @Override
    protected void onChildTitleChanged(android.app.Activity r2, java.lang.CharSequence r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnChildTitleChanged(r2, r3)
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnConfigurationChanged(r2)
            return
    }

    @Override
    public void onContentChanged() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnContentChanged()
            return
    }

    @Override
    public boolean onContextItemSelected(android.view.MenuItem r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnContextItemSelected(r2)
            return r2
    }

    @Override
    public void onContextMenuClosed(android.view.Menu r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnContextMenuClosed(r2)
            return
    }

    @Override
    public void onCreate(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnCreate(r2)
            android.view.LayoutInflater r2 = r1.getLayoutInflater()
            com.bytedance.pangle.res.b.a(r2)
            return
    }

    @Override
    public void onCreate(android.os.Bundle r2, android.os.PersistableBundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnCreate(r2, r3)
            return
    }

    @Override
    public void onCreateContextMenu(android.view.ContextMenu r2, android.view.View r3, android.view.ContextMenu.ContextMenuInfo r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnCreateContextMenu(r2, r3, r4)
            return
    }

    @Override
    public java.lang.CharSequence onCreateDescription() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            java.lang.CharSequence r0 = r0.zeusSuperOnCreateDescription()
            return r0
    }

    @Override
    protected android.app.Dialog onCreateDialog(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.app.Dialog r2 = r0.zeusSuperOnCreateDialog(r2)
            return r2
    }

    @Override
    protected android.app.Dialog onCreateDialog(int r2, android.os.Bundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.app.Dialog r2 = r0.zeusSuperOnCreateDialog(r2, r3)
            return r2
    }

    @Override
    public void onCreateNavigateUpTaskStack(android.app.TaskStackBuilder r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnCreateNavigateUpTaskStack(r2)
            return
    }

    @Override
    public boolean onCreateOptionsMenu(android.view.Menu r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnCreateOptionsMenu(r2)
            return r2
    }

    @Override
    public boolean onCreatePanelMenu(int r2, android.view.Menu r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnCreatePanelMenu(r2, r3)
            return r2
    }

    @Override
    public android.view.View onCreatePanelView(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.View r2 = r0.zeusSuperOnCreatePanelView(r2)
            return r2
    }

    @Override
    public boolean onCreateThumbnail(android.graphics.Bitmap r2, android.graphics.Canvas r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnCreateThumbnail(r2, r3)
            return r2
    }

    @Override
    public android.view.View onCreateView(android.view.View r2, java.lang.String r3, android.content.Context r4, android.util.AttributeSet r5) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.View r2 = r0.zeusSuperOnCreateView(r2, r3, r4, r5)
            return r2
    }

    @Override
    public android.view.View onCreateView(java.lang.String r2, android.content.Context r3, android.util.AttributeSet r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.View r2 = r0.zeusSuperOnCreateView(r2, r3, r4)
            return r2
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnDestroy()
            return
    }

    @Override
    public void onDetachedFromWindow() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnDetachedFromWindow()
            return
    }

    @Override
    public void onEnterAnimationComplete() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnEnterAnimationComplete()
            return
    }

    @Override
    public boolean onGenericMotionEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnGenericMotionEvent(r2)
            return r2
    }

    @Override
    public void onGetDirectActions(android.os.CancellationSignal r2, java.util.function.Consumer r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnGetDirectActions(r2, r3)
            return
    }

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnKeyDown(r2, r3)
            return r2
    }

    @Override
    public boolean onKeyLongPress(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnKeyLongPress(r2, r3)
            return r2
    }

    @Override
    public boolean onKeyMultiple(int r2, int r3, android.view.KeyEvent r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnKeyMultiple(r2, r3, r4)
            return r2
    }

    @Override
    public boolean onKeyShortcut(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnKeyShortcut(r2, r3)
            return r2
    }

    @Override
    public boolean onKeyUp(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnKeyUp(r2, r3)
            return r2
    }

    @Override
    public void onLocalVoiceInteractionStarted() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnLocalVoiceInteractionStarted()
            return
    }

    @Override
    public void onLocalVoiceInteractionStopped() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnLocalVoiceInteractionStopped()
            return
    }

    @Override
    public void onLowMemory() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnLowMemory()
            return
    }

    @Override
    public boolean onMenuOpened(int r2, android.view.Menu r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnMenuOpened(r2, r3)
            return r2
    }

    @Override
    public void onMultiWindowModeChanged(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnMultiWindowModeChanged(r2)
            return
    }

    @Override
    public void onMultiWindowModeChanged(boolean r2, android.content.res.Configuration r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnMultiWindowModeChanged(r2, r3)
            return
    }

    @Override
    public boolean onNavigateUp() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperOnNavigateUp()
            return r0
    }

    @Override
    public boolean onNavigateUpFromChild(android.app.Activity r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnNavigateUpFromChild(r2)
            return r2
    }

    @Override
    protected void onNewIntent(android.content.Intent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnNewIntent(r2)
            return
    }

    @Override
    public boolean onOptionsItemSelected(android.view.MenuItem r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnOptionsItemSelected(r2)
            return r2
    }

    @Override
    public void onOptionsMenuClosed(android.view.Menu r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnOptionsMenuClosed(r2)
            return
    }

    @Override
    public void onPanelClosed(int r2, android.view.Menu r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnPanelClosed(r2, r3)
            return
    }

    @Override
    protected void onPause() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnPause()
            return
    }

    @Override
    public void onPerformDirectAction(java.lang.String r2, android.os.Bundle r3, android.os.CancellationSignal r4, java.util.function.Consumer r5) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnPerformDirectAction(r2, r3, r4, r5)
            return
    }

    @Override
    public void onPictureInPictureModeChanged(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnPictureInPictureModeChanged(r2)
            return
    }

    @Override
    public void onPictureInPictureModeChanged(boolean r2, android.content.res.Configuration r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnPictureInPictureModeChanged(r2, r3)
            return
    }

    @Override
    public boolean onPictureInPictureRequested() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperOnPictureInPictureRequested()
            return r0
    }

    @Override
    protected void onPostCreate(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnPostCreate(r2)
            return
    }

    @Override
    public void onPostCreate(android.os.Bundle r2, android.os.PersistableBundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnPostCreate(r2, r3)
            return
    }

    @Override
    protected void onPostResume() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnPostResume()
            return
    }

    @Override
    protected void onPrepareDialog(int r2, android.app.Dialog r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnPrepareDialog(r2, r3)
            return
    }

    @Override
    protected void onPrepareDialog(int r2, android.app.Dialog r3, android.os.Bundle r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnPrepareDialog(r2, r3, r4)
            return
    }

    @Override
    public void onPrepareNavigateUpTaskStack(android.app.TaskStackBuilder r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnPrepareNavigateUpTaskStack(r2)
            return
    }

    @Override
    public boolean onPrepareOptionsMenu(android.view.Menu r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnPrepareOptionsMenu(r2)
            return r2
    }

    @Override
    public boolean onPreparePanel(int r2, android.view.View r3, android.view.Menu r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnPreparePanel(r2, r3, r4)
            return r2
    }

    @Override
    public void onProvideAssistContent(android.app.assist.AssistContent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnProvideAssistContent(r2)
            return
    }

    @Override
    public void onProvideAssistData(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnProvideAssistData(r2)
            return
    }

    @Override
    public void onProvideKeyboardShortcuts(java.util.List r2, android.view.Menu r3, int r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnProvideKeyboardShortcuts(r2, r3, r4)
            return
    }

    @Override
    public android.net.Uri onProvideReferrer() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.net.Uri r0 = r0.zeusSuperOnProvideReferrer()
            return r0
    }

    @Override
    public void onRequestPermissionsResult(int r2, java.lang.String[] r3, int[] r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnRequestPermissionsResult(r2, r3, r4)
            return
    }

    @Override
    protected void onRestart() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnRestart()
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity     // Catch: java.lang.Throwable -> L5
            r0.zeusSuperOnRestoreInstanceState(r2)     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    @Override
    public void onRestoreInstanceState(android.os.Bundle r2, android.os.PersistableBundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity     // Catch: java.lang.Throwable -> L5
            r0.zeusSuperOnRestoreInstanceState(r2, r3)     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    @Override
    protected void onResume() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnResume()
            return
    }

    @Override
    protected void onSaveInstanceState(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnSaveInstanceState(r2)
            return
    }

    @Override
    public void onSaveInstanceState(android.os.Bundle r2, android.os.PersistableBundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnSaveInstanceState(r2, r3)
            return
    }

    @Override
    public boolean onSearchRequested() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperOnSearchRequested()
            return r0
    }

    @Override
    public boolean onSearchRequested(android.view.SearchEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnSearchRequested(r2)
            return r2
    }

    @Override
    protected void onStart() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnStart()
            return
    }

    @Override
    public void onStateNotSaved() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnStateNotSaved()
            return
    }

    @Override
    protected void onStop() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnStop()
            return
    }

    @Override
    protected void onTitleChanged(java.lang.CharSequence r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnTitleChanged(r2, r3)
            return
    }

    @Override
    public void onTopResumedActivityChanged(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnTopResumedActivityChanged(r2)
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnTouchEvent(r2)
            return r2
    }

    @Override
    public boolean onTrackballEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperOnTrackballEvent(r2)
            return r2
    }

    @Override
    public void onTrimMemory(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnTrimMemory(r2)
            return
    }

    @Override
    public void onUserInteraction() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnUserInteraction()
            return
    }

    @Override
    protected void onUserLeaveHint() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnUserLeaveHint()
            return
    }

    @Override
    public void onVisibleBehindCanceled() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnVisibleBehindCanceled()
            return
    }

    @Override
    public void onWindowAttributesChanged(android.view.WindowManager.LayoutParams r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnWindowAttributesChanged(r2)
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOnWindowFocusChanged(r2)
            return
    }

    @Override
    public android.view.ActionMode onWindowStartingActionMode(android.view.ActionMode.Callback r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.ActionMode r2 = r0.zeusSuperOnWindowStartingActionMode(r2)
            return r2
    }

    @Override
    public android.view.ActionMode onWindowStartingActionMode(android.view.ActionMode.Callback r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.ActionMode r2 = r0.zeusSuperOnWindowStartingActionMode(r2, r3)
            return r2
    }

    @Override
    public void openContextMenu(android.view.View r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOpenContextMenu(r2)
            return
    }

    @Override
    public void openOptionsMenu() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOpenOptionsMenu()
            return
    }

    @Override
    public void overridePendingTransition(int r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperOverridePendingTransition(r2, r3)
            return
    }

    @Override
    public void postponeEnterTransition() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperPostponeEnterTransition()
            return
    }

    @Override
    public void recreate() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperRecreate()
            return
    }

    @Override
    public void registerActivityLifecycleCallbacks(android.app.Application.ActivityLifecycleCallbacks r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperRegisterActivityLifecycleCallbacks(r2)
            return
    }

    @Override
    public void registerForContextMenu(android.view.View r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperRegisterForContextMenu(r2)
            return
    }

    @Override
    public boolean releaseInstance() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r0 = r0.zeusSuperReleaseInstance()
            return r0
    }

    @Override
    public void reportFullyDrawn() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperReportFullyDrawn()
            return
    }

    @Override
    public android.view.DragAndDropPermissions requestDragAndDropPermissions(android.view.DragEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.DragAndDropPermissions r2 = r0.zeusSuperRequestDragAndDropPermissions(r2)
            return r2
    }

    @Override
    public boolean requestVisibleBehind(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperRequestVisibleBehind(r2)
            return r2
    }

    @Override
    public void setActionBar(android.widget.Toolbar r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetActionBar(r2)
            return
    }

    @Override
    public void setContentTransitionManager(android.transition.TransitionManager r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetContentTransitionManager(r2)
            return
    }

    @Override
    public void setContentView(int r2) {
            r1 = this;
            com.bytedance.pangle.transform.ZeusTransformUtils.clearConstructorCache()
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetContentView(r2)
            com.bytedance.pangle.transform.ZeusTransformUtils.clearConstructorCache()
            r2 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r2 = r1.findViewById(r2)
            com.bytedance.pangle.activity.c.a(r1, r2)
            return
    }

    @Override
    public void setContentView(android.view.View r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetContentView(r2)
            return
    }

    @Override
    public void setContentView(android.view.View r2, android.view.ViewGroup.LayoutParams r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetContentView(r2, r3)
            return
    }

    @Override
    public void setEnterSharedElementCallback(android.app.SharedElementCallback r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetEnterSharedElementCallback(r2)
            return
    }

    @Override
    public void setExitSharedElementCallback(android.app.SharedElementCallback r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetExitSharedElementCallback(r2)
            return
    }

    @Override
    public void setFinishOnTouchOutside(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetFinishOnTouchOutside(r2)
            return
    }

    @Override
    public void setImmersive(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetImmersive(r2)
            return
    }

    @Override
    public void setInheritShowWhenLocked(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetInheritShowWhenLocked(r2)
            return
    }

    @Override
    public void setIntent(android.content.Intent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetIntent(r2)
            return
    }

    @Override
    public void setLocusContext(android.content.LocusId r2, android.os.Bundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetLocusContext(r2, r3)
            return
    }

    @Override
    public void setPictureInPictureParams(android.app.PictureInPictureParams r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetPictureInPictureParams(r2)
            return
    }

    @Override
    public void setPluginProxyActivity(com.bytedance.pangle.activity.b r1, com.bytedance.pangle.plugin.Plugin r2) {
            r0 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r1 = (com.bytedance.pangle.activity.GenerateProxyActivity) r1
            r0.mProxyActivity = r1
            r0.mPlugin = r2
            return
    }

    @Override
    public void setProxyTheme2Plugin(int r1) {
            r0 = this;
            super.setTheme(r1)     // Catch: java.lang.Exception -> L3
        L3:
            return
    }

    @Override
    public void setRequestedOrientation(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetRequestedOrientation(r2)
            return
    }

    @Override
    public void setShowWhenLocked(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetShowWhenLocked(r2)
            return
    }

    @Override
    public void setTaskDescription(android.app.ActivityManager.TaskDescription r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetTaskDescription(r2)
            return
    }

    @Override
    public void setTheme(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetTheme(r2)
            return
    }

    @Override
    public void setTitle(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetTitle(r2)
            return
    }

    @Override
    public void setTitle(java.lang.CharSequence r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetTitle(r2)
            return
    }

    @Override
    public void setTitleColor(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetTitleColor(r2)
            return
    }

    @Override
    public boolean setTranslucent(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperSetTranslucent(r2)
            return r2
    }

    @Override
    public void setTurnScreenOn(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetTurnScreenOn(r2)
            return
    }

    @Override
    public void setVisible(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetVisible(r2)
            return
    }

    @Override
    public void setVrModeEnabled(boolean r2, android.content.ComponentName r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperSetVrModeEnabled(r2, r3)
            return
    }

    @Override
    public boolean shouldShowRequestPermissionRationale(java.lang.String r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperShouldShowRequestPermissionRationale(r2)
            return r2
    }

    @Override
    public boolean shouldUpRecreateTask(android.content.Intent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperShouldUpRecreateTask(r2)
            return r2
    }

    @Override
    public boolean showAssist(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperShowAssist(r2)
            return r2
    }

    @Override
    public void showLockTaskEscapeMessage() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperShowLockTaskEscapeMessage()
            return
    }

    @Override
    public android.view.ActionMode startActionMode(android.view.ActionMode.Callback r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.ActionMode r2 = r0.zeusSuperStartActionMode(r2)
            return r2
    }

    @Override
    public android.view.ActionMode startActionMode(android.view.ActionMode.Callback r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            android.view.ActionMode r2 = r0.zeusSuperStartActionMode(r2, r3)
            return r2
    }

    @Override
    public void startActivities(android.content.Intent[] r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartActivities(r2)
            return
    }

    @Override
    public void startActivities(android.content.Intent[] r2, android.os.Bundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartActivities(r2, r3)
            return
    }

    @Override
    public void startActivity(android.content.Intent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartActivity(r2)
            return
    }

    @Override
    public void startActivity(android.content.Intent r2, android.os.Bundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartActivity(r2, r3)
            return
    }

    @Override
    public void startActivityForResult(android.content.Intent r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartActivityForResult(r2, r3)
            return
    }

    @Override
    public void startActivityForResult(android.content.Intent r2, int r3, android.os.Bundle r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartActivityForResult(r2, r3, r4)
            return
    }

    @Override
    public void startActivityFromChild(android.app.Activity r2, android.content.Intent r3, int r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartActivityFromChild(r2, r3, r4)
            return
    }

    @Override
    public void startActivityFromChild(android.app.Activity r2, android.content.Intent r3, int r4, android.os.Bundle r5) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartActivityFromChild(r2, r3, r4, r5)
            return
    }

    @Override
    public void startActivityFromFragment(android.app.Fragment r2, android.content.Intent r3, int r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartActivityFromFragment(r2, r3, r4)
            return
    }

    @Override
    public void startActivityFromFragment(android.app.Fragment r2, android.content.Intent r3, int r4, android.os.Bundle r5) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartActivityFromFragment(r2, r3, r4, r5)
            return
    }

    @Override
    public boolean startActivityIfNeeded(android.content.Intent r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperStartActivityIfNeeded(r2, r3)
            return r2
    }

    @Override
    public boolean startActivityIfNeeded(android.content.Intent r2, int r3, android.os.Bundle r4) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperStartActivityIfNeeded(r2, r3, r4)
            return r2
    }

    @Override
    public void startIntentSender(android.content.IntentSender r7, android.content.Intent r8, int r9, int r10, int r11) {
            r6 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r6.mProxyActivity
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.zeusSuperStartIntentSender(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public void startIntentSender(android.content.IntentSender r8, android.content.Intent r9, int r10, int r11, int r12, android.os.Bundle r13) {
            r7 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r7.mProxyActivity
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.zeusSuperStartIntentSender(r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    public void startIntentSenderForResult(android.content.IntentSender r8, int r9, android.content.Intent r10, int r11, int r12, int r13) {
            r7 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r7.mProxyActivity
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.zeusSuperStartIntentSenderForResult(r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    public void startIntentSenderForResult(android.content.IntentSender r9, int r10, android.content.Intent r11, int r12, int r13, int r14, android.os.Bundle r15) {
            r8 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r8.mProxyActivity
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r0.zeusSuperStartIntentSenderForResult(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    @Override
    public void startIntentSenderFromChild(android.app.Activity r9, android.content.IntentSender r10, int r11, android.content.Intent r12, int r13, int r14, int r15) {
            r8 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r8.mProxyActivity
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r0.zeusSuperStartIntentSenderFromChild(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    @Override
    public void startIntentSenderFromChild(android.app.Activity r11, android.content.IntentSender r12, int r13, android.content.Intent r14, int r15, int r16, int r17, android.os.Bundle r18) {
            r10 = this;
            r0 = r10
            com.bytedance.pangle.activity.GenerateProxyActivity r1 = r0.mProxyActivity
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r8 = r17
            r9 = r18
            r1.zeusSuperStartIntentSenderFromChild(r2, r3, r4, r5, r6, r7, r8, r9)
            return
    }

    @Override
    public void startLocalVoiceInteraction(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartLocalVoiceInteraction(r2)
            return
    }

    @Override
    public void startLockTask() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartLockTask()
            return
    }

    @Override
    public void startManagingCursor(android.database.Cursor r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartManagingCursor(r2)
            return
    }

    @Override
    public boolean startNextMatchingActivity(android.content.Intent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperStartNextMatchingActivity(r2)
            return r2
    }

    @Override
    public boolean startNextMatchingActivity(android.content.Intent r2, android.os.Bundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            boolean r2 = r0.zeusSuperStartNextMatchingActivity(r2, r3)
            return r2
    }

    @Override
    public void startPostponedEnterTransition() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartPostponedEnterTransition()
            return
    }

    @Override
    public void startSearch(java.lang.String r2, boolean r3, android.os.Bundle r4, boolean r5) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStartSearch(r2, r3, r4, r5)
            return
    }

    @Override
    public void stopLocalVoiceInteraction() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStopLocalVoiceInteraction()
            return
    }

    @Override
    public void stopLockTask() {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStopLockTask()
            return
    }

    @Override
    public void stopManagingCursor(android.database.Cursor r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperStopManagingCursor(r2)
            return
    }

    @Override
    public void takeKeyEvents(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperTakeKeyEvents(r2)
            return
    }

    @Override
    public void triggerSearch(java.lang.String r2, android.os.Bundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperTriggerSearch(r2, r3)
            return
    }

    @Override
    public void unregisterActivityLifecycleCallbacks(android.app.Application.ActivityLifecycleCallbacks r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperUnregisterActivityLifecycleCallbacks(r2)
            return
    }

    @Override
    public void unregisterForContextMenu(android.view.View r2) {
            r1 = this;
            com.bytedance.pangle.activity.GenerateProxyActivity r0 = r1.mProxyActivity
            r0.zeusSuperUnregisterForContextMenu(r2)
            return
    }
}
