package com.bytedance.pangle.wrapper;

public abstract class GenerateFragmentActivityWrapper extends android.support.v4.app.FragmentActivity implements com.bytedance.pangle.wrapper.a {
    public android.support.v4.app.FragmentActivity mOriginActivity;
    public com.bytedance.pangle.PluginContext pluginContext;

    public GenerateFragmentActivityWrapper() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void addContentView(android.view.View r2, android.view.ViewGroup.LayoutParams r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.addContentView(r2, r3)
            return
    }

    @Override
    public void closeContextMenu() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.closeContextMenu()
            return
    }

    @Override
    public void closeOptionsMenu() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.closeOptionsMenu()
            return
    }

    @Override
    public android.app.PendingIntent createPendingResult(int r2, android.content.Intent r3, int r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.app.PendingIntent r2 = r0.createPendingResult(r2, r3, r4)
            return r2
    }

    @Override
    public boolean dispatchGenericMotionEvent(android.view.MotionEvent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.dispatchGenericMotionEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchKeyEvent(android.view.KeyEvent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.dispatchKeyEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchKeyShortcutEvent(android.view.KeyEvent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.dispatchKeyShortcutEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchPopulateAccessibilityEvent(android.view.accessibility.AccessibilityEvent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.dispatchPopulateAccessibilityEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.dispatchTouchEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchTrackballEvent(android.view.MotionEvent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.dispatchTrackballEvent(r2)
            return r2
    }

    @Override
    public void dump(java.lang.String r2, java.io.FileDescriptor r3, java.io.PrintWriter r4, java.lang.String[] r5) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.dump(r2, r3, r4, r5)
            return
    }

    @Override
    public void enterPictureInPictureMode() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.enterPictureInPictureMode()
            return
    }

    @Override
    public boolean enterPictureInPictureMode(android.app.PictureInPictureParams r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.enterPictureInPictureMode(r2)
            return r2
    }

    @Override
    public android.view.View findViewById(int r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.View r2 = r0.findViewById(r2)
            return r2
    }

    @Override
    public void finish() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.finish()
            return
    }

    @Override
    public void finishActivity(int r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.finishActivity(r2)
            return
    }

    @Override
    public void finishActivityFromChild(android.app.Activity r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.finishActivityFromChild(r2, r3)
            return
    }

    @Override
    public void finishAffinity() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.finishAffinity()
            return
    }

    @Override
    public void finishAfterTransition() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.finishAfterTransition()
            return
    }

    @Override
    public void finishAndRemoveTask() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.finishAndRemoveTask()
            return
    }

    @Override
    public void finishFromChild(android.app.Activity r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.finishFromChild(r2)
            return
    }

    @Override
    public android.app.ActionBar getActionBar() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.app.ActionBar r0 = r0.getActionBar()
            return r0
    }

    @Override
    public android.content.ComponentName getCallingActivity() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.content.ComponentName r0 = r0.getCallingActivity()
            return r0
    }

    @Override
    public java.lang.String getCallingPackage() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            java.lang.String r0 = r0.getCallingPackage()
            return r0
    }

    @Override
    public int getChangingConfigurations() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            int r0 = r0.getChangingConfigurations()
            return r0
    }

    @Override
    public android.content.ComponentName getComponentName() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.content.ComponentName r0 = r0.getComponentName()
            return r0
    }

    @Override
    public android.transition.Scene getContentScene() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.transition.Scene r0 = r0.getContentScene()
            return r0
    }

    @Override
    public android.transition.TransitionManager getContentTransitionManager() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.transition.TransitionManager r0 = r0.getContentTransitionManager()
            return r0
    }

    @Override
    public android.view.View getCurrentFocus() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.View r0 = r0.getCurrentFocus()
            return r0
    }

    @Override
    public android.support.v4.app.SupportActivity.ExtraData getExtraData(java.lang.Class r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.support.v4.app.SupportActivity$ExtraData r2 = r0.getExtraData(r2)
            return r2
    }

    @Override
    public android.app.FragmentManager getFragmentManager() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.app.FragmentManager r0 = r0.getFragmentManager()
            return r0
    }

    @Override
    public android.content.Intent getIntent() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.content.Intent r0 = r0.getIntent()
            return r0
    }

    @Override
    public java.lang.Object getLastNonConfigurationInstance() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            java.lang.Object r0 = r0.getLastNonConfigurationInstance()
            return r0
    }

    @Override
    public android.view.LayoutInflater getLayoutInflater() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.LayoutInflater r0 = r0.getLayoutInflater()
            return r0
    }

    @Override
    public android.arch.lifecycle.Lifecycle getLifecycle() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.arch.lifecycle.Lifecycle r0 = r0.getLifecycle()
            return r0
    }

    @Override
    public android.app.LoaderManager getLoaderManager() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.app.LoaderManager r0 = r0.getLoaderManager()
            return r0
    }

    @Override
    public java.lang.String getLocalClassName() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            java.lang.String r0 = r0.getLocalClassName()
            return r0
    }

    @Override
    public int getMaxNumPictureInPictureActions() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            int r0 = r0.getMaxNumPictureInPictureActions()
            return r0
    }

    @Override
    public android.view.MenuInflater getMenuInflater() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.MenuInflater r0 = r0.getMenuInflater()
            return r0
    }

    @Override
    public android.content.Intent getParentActivityIntent() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.content.Intent r0 = r0.getParentActivityIntent()
            return r0
    }

    @Override
    public android.content.SharedPreferences getPreferences(int r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.content.SharedPreferences r2 = r0.getPreferences(r2)
            return r2
    }

    @Override
    public android.net.Uri getReferrer() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.net.Uri r0 = r0.getReferrer()
            return r0
    }

    @Override
    public int getRequestedOrientation() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            int r0 = r0.getRequestedOrientation()
            return r0
    }

    @Override
    public android.support.v4.app.FragmentManager getSupportFragmentManager() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.support.v4.app.FragmentManager r0 = r0.getSupportFragmentManager()
            return r0
    }

    @Override
    public android.support.v4.app.LoaderManager getSupportLoaderManager() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.support.v4.app.LoaderManager r0 = r0.getSupportLoaderManager()
            return r0
    }

    @Override
    public java.lang.Object getSystemService(java.lang.String r2) {
            r1 = this;
            com.bytedance.pangle.PluginContext r0 = r1.pluginContext
            java.lang.Object r2 = r0.getSystemService(r2)
            return r2
    }

    @Override
    public int getTaskId() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            int r0 = r0.getTaskId()
            return r0
    }

    @Override
    public android.arch.lifecycle.ViewModelStore getViewModelStore() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.arch.lifecycle.ViewModelStore r0 = r0.getViewModelStore()
            return r0
    }

    @Override
    public android.app.VoiceInteractor getVoiceInteractor() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.app.VoiceInteractor r0 = r0.getVoiceInteractor()
            return r0
    }

    @Override
    public android.view.Window getWindow() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.Window r0 = r0.getWindow()
            return r0
    }

    @Override
    public android.view.WindowManager getWindowManager() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.WindowManager r0 = r0.getWindowManager()
            return r0
    }

    @Override
    public boolean hasWindowFocus() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.hasWindowFocus()
            return r0
    }

    public int hashCode() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            int r0 = r0.hashCode()
            return r0
    }

    @Override
    public void invalidateOptionsMenu() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.invalidateOptionsMenu()
            return
    }

    @Override
    public boolean isActivityTransitionRunning() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.isActivityTransitionRunning()
            return r0
    }

    @Override
    public boolean isChangingConfigurations() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.isChangingConfigurations()
            return r0
    }

    @Override
    public boolean isDestroyed() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.isDestroyed()
            return r0
    }

    @Override
    public boolean isFinishing() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.isFinishing()
            return r0
    }

    @Override
    public boolean isImmersive() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.isImmersive()
            return r0
    }

    @Override
    public boolean isInMultiWindowMode() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.isInMultiWindowMode()
            return r0
    }

    @Override
    public boolean isInPictureInPictureMode() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.isInPictureInPictureMode()
            return r0
    }

    @Override
    public boolean isLocalVoiceInteractionSupported() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.isLocalVoiceInteractionSupported()
            return r0
    }

    @Override
    public boolean isTaskRoot() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.isTaskRoot()
            return r0
    }

    @Override
    public boolean isVoiceInteraction() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.isVoiceInteraction()
            return r0
    }

    @Override
    public boolean isVoiceInteractionRoot() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.isVoiceInteractionRoot()
            return r0
    }

    @Override
    public boolean moveTaskToBack(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.moveTaskToBack(r2)
            return r2
    }

    @Override
    public boolean navigateUpTo(android.content.Intent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.navigateUpTo(r2)
            return r2
    }

    @Override
    public boolean navigateUpToFromChild(android.app.Activity r2, android.content.Intent r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.navigateUpToFromChild(r2, r3)
            return r2
    }

    @Override
    public void onActionModeFinished(android.view.ActionMode r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onActionModeFinished(r2)
            return
    }

    @Override
    public void onActionModeStarted(android.view.ActionMode r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onActionModeStarted(r2)
            return
    }

    @Override
    public void onActivityReenter(int r2, android.content.Intent r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onActivityReenter(r2, r3)
            return
    }

    @Override
    public void onAttachFragment(android.app.Fragment r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onAttachFragment(r2)
            return
    }

    @Override
    public void onAttachFragment(android.support.v4.app.Fragment r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onAttachFragment(r2)
            return
    }

    @Override
    public void onAttachedToWindow() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onAttachedToWindow()
            return
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onBackPressed()
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onConfigurationChanged(r2)
            return
    }

    @Override
    public void onContentChanged() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onContentChanged()
            return
    }

    @Override
    public boolean onContextItemSelected(android.view.MenuItem r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onContextItemSelected(r2)
            return r2
    }

    @Override
    public void onContextMenuClosed(android.view.Menu r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onContextMenuClosed(r2)
            return
    }

    @Override
    public void onCreate(android.os.Bundle r2, android.os.PersistableBundle r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onCreate(r2, r3)
            return
    }

    @Override
    public void onCreateContextMenu(android.view.ContextMenu r2, android.view.View r3, android.view.ContextMenu.ContextMenuInfo r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onCreateContextMenu(r2, r3, r4)
            return
    }

    @Override
    public java.lang.CharSequence onCreateDescription() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            java.lang.CharSequence r0 = r0.onCreateDescription()
            return r0
    }

    @Override
    public void onCreateNavigateUpTaskStack(android.app.TaskStackBuilder r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onCreateNavigateUpTaskStack(r2)
            return
    }

    @Override
    public boolean onCreateOptionsMenu(android.view.Menu r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onCreateOptionsMenu(r2)
            return r2
    }

    @Override
    public boolean onCreatePanelMenu(int r2, android.view.Menu r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onCreatePanelMenu(r2, r3)
            return r2
    }

    @Override
    public android.view.View onCreatePanelView(int r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.View r2 = r0.onCreatePanelView(r2)
            return r2
    }

    @Override
    public boolean onCreateThumbnail(android.graphics.Bitmap r2, android.graphics.Canvas r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onCreateThumbnail(r2, r3)
            return r2
    }

    @Override
    public android.view.View onCreateView(android.view.View r2, java.lang.String r3, android.content.Context r4, android.util.AttributeSet r5) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.View r2 = r0.onCreateView(r2, r3, r4, r5)
            return r2
    }

    @Override
    public android.view.View onCreateView(java.lang.String r2, android.content.Context r3, android.util.AttributeSet r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.View r2 = r0.onCreateView(r2, r3, r4)
            return r2
    }

    @Override
    public void onDetachedFromWindow() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onDetachedFromWindow()
            return
    }

    @Override
    public void onEnterAnimationComplete() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onEnterAnimationComplete()
            return
    }

    @Override
    public boolean onGenericMotionEvent(android.view.MotionEvent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onGenericMotionEvent(r2)
            return r2
    }

    @Override
    public void onGetDirectActions(android.os.CancellationSignal r2, java.util.function.Consumer r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onGetDirectActions(r2, r3)
            return
    }

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onKeyDown(r2, r3)
            return r2
    }

    @Override
    public boolean onKeyLongPress(int r2, android.view.KeyEvent r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onKeyLongPress(r2, r3)
            return r2
    }

    @Override
    public boolean onKeyMultiple(int r2, int r3, android.view.KeyEvent r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onKeyMultiple(r2, r3, r4)
            return r2
    }

    @Override
    public boolean onKeyShortcut(int r2, android.view.KeyEvent r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onKeyShortcut(r2, r3)
            return r2
    }

    @Override
    public boolean onKeyUp(int r2, android.view.KeyEvent r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onKeyUp(r2, r3)
            return r2
    }

    @Override
    public void onLocalVoiceInteractionStarted() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onLocalVoiceInteractionStarted()
            return
    }

    @Override
    public void onLocalVoiceInteractionStopped() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onLocalVoiceInteractionStopped()
            return
    }

    @Override
    public void onLowMemory() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onLowMemory()
            return
    }

    @Override
    public boolean onMenuItemSelected(int r2, android.view.MenuItem r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onMenuItemSelected(r2, r3)
            return r2
    }

    @Override
    public boolean onMenuOpened(int r2, android.view.Menu r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onMenuOpened(r2, r3)
            return r2
    }

    @Override
    public void onMultiWindowModeChanged(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onMultiWindowModeChanged(r2)
            return
    }

    @Override
    public void onMultiWindowModeChanged(boolean r2, android.content.res.Configuration r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onMultiWindowModeChanged(r2, r3)
            return
    }

    @Override
    public boolean onNavigateUp() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.onNavigateUp()
            return r0
    }

    @Override
    public boolean onNavigateUpFromChild(android.app.Activity r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onNavigateUpFromChild(r2)
            return r2
    }

    @Override
    public boolean onOptionsItemSelected(android.view.MenuItem r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onOptionsItemSelected(r2)
            return r2
    }

    @Override
    public void onOptionsMenuClosed(android.view.Menu r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onOptionsMenuClosed(r2)
            return
    }

    @Override
    public void onPanelClosed(int r2, android.view.Menu r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onPanelClosed(r2, r3)
            return
    }

    @Override
    public void onPerformDirectAction(java.lang.String r2, android.os.Bundle r3, android.os.CancellationSignal r4, java.util.function.Consumer r5) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onPerformDirectAction(r2, r3, r4, r5)
            return
    }

    @Override
    public void onPictureInPictureModeChanged(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onPictureInPictureModeChanged(r2)
            return
    }

    @Override
    public void onPictureInPictureModeChanged(boolean r2, android.content.res.Configuration r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onPictureInPictureModeChanged(r2, r3)
            return
    }

    @Override
    public boolean onPictureInPictureRequested() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.onPictureInPictureRequested()
            return r0
    }

    @Override
    public void onPostCreate(android.os.Bundle r2, android.os.PersistableBundle r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onPostCreate(r2, r3)
            return
    }

    @Override
    public void onPrepareNavigateUpTaskStack(android.app.TaskStackBuilder r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onPrepareNavigateUpTaskStack(r2)
            return
    }

    @Override
    public boolean onPrepareOptionsMenu(android.view.Menu r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onPrepareOptionsMenu(r2)
            return r2
    }

    @Override
    public boolean onPreparePanel(int r2, android.view.View r3, android.view.Menu r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onPreparePanel(r2, r3, r4)
            return r2
    }

    @Override
    public void onProvideAssistContent(android.app.assist.AssistContent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onProvideAssistContent(r2)
            return
    }

    @Override
    public void onProvideAssistData(android.os.Bundle r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onProvideAssistData(r2)
            return
    }

    @Override
    public void onProvideKeyboardShortcuts(java.util.List r2, android.view.Menu r3, int r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onProvideKeyboardShortcuts(r2, r3, r4)
            return
    }

    @Override
    public android.net.Uri onProvideReferrer() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.net.Uri r0 = r0.onProvideReferrer()
            return r0
    }

    @Override
    public void onRequestPermissionsResult(int r2, java.lang.String[] r3, int[] r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onRequestPermissionsResult(r2, r3, r4)
            return
    }

    @Override
    public void onRestoreInstanceState(android.os.Bundle r2, android.os.PersistableBundle r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onRestoreInstanceState(r2, r3)
            return
    }

    @Override
    public void onSaveInstanceState(android.os.Bundle r2, android.os.PersistableBundle r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onSaveInstanceState(r2, r3)
            return
    }

    @Override
    public boolean onSearchRequested() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.onSearchRequested()
            return r0
    }

    @Override
    public boolean onSearchRequested(android.view.SearchEvent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onSearchRequested(r2)
            return r2
    }

    @Override
    public void onStateNotSaved() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onStateNotSaved()
            return
    }

    @Override
    public void onTopResumedActivityChanged(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onTopResumedActivityChanged(r2)
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onTouchEvent(r2)
            return r2
    }

    @Override
    public boolean onTrackballEvent(android.view.MotionEvent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.onTrackballEvent(r2)
            return r2
    }

    @Override
    public void onTrimMemory(int r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onTrimMemory(r2)
            return
    }

    @Override
    public void onUserInteraction() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onUserInteraction()
            return
    }

    @Override
    public void onVisibleBehindCanceled() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onVisibleBehindCanceled()
            return
    }

    @Override
    public void onWindowAttributesChanged(android.view.WindowManager.LayoutParams r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onWindowAttributesChanged(r2)
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.onWindowFocusChanged(r2)
            return
    }

    @Override
    public android.view.ActionMode onWindowStartingActionMode(android.view.ActionMode.Callback r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.ActionMode r2 = r0.onWindowStartingActionMode(r2)
            return r2
    }

    @Override
    public android.view.ActionMode onWindowStartingActionMode(android.view.ActionMode.Callback r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.ActionMode r2 = r0.onWindowStartingActionMode(r2, r3)
            return r2
    }

    @Override
    public void openContextMenu(android.view.View r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.openContextMenu(r2)
            return
    }

    @Override
    public void openOptionsMenu() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.openOptionsMenu()
            return
    }

    @Override
    public void overridePendingTransition(int r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.overridePendingTransition(r2, r3)
            return
    }

    @Override
    public void postponeEnterTransition() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.postponeEnterTransition()
            return
    }

    @Override
    public void putExtraData(android.support.v4.app.SupportActivity.ExtraData r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.putExtraData(r2)
            return
    }

    @Override
    public void recreate() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.recreate()
            return
    }

    @Override
    public void registerActivityLifecycleCallbacks(android.app.Application.ActivityLifecycleCallbacks r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.registerActivityLifecycleCallbacks(r2)
            return
    }

    @Override
    public void registerForContextMenu(android.view.View r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.registerForContextMenu(r2)
            return
    }

    @Override
    public boolean releaseInstance() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r0 = r0.releaseInstance()
            return r0
    }

    @Override
    public void reportFullyDrawn() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.reportFullyDrawn()
            return
    }

    @Override
    public android.view.DragAndDropPermissions requestDragAndDropPermissions(android.view.DragEvent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.DragAndDropPermissions r2 = r0.requestDragAndDropPermissions(r2)
            return r2
    }

    @Override
    public boolean requestVisibleBehind(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.requestVisibleBehind(r2)
            return r2
    }

    @Override
    public void setActionBar(android.widget.Toolbar r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setActionBar(r2)
            return
    }

    @Override
    public void setContentTransitionManager(android.transition.TransitionManager r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setContentTransitionManager(r2)
            return
    }

    @Override
    public void setContentView(int r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setContentView(r2)
            return
    }

    @Override
    public void setContentView(android.view.View r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setContentView(r2)
            return
    }

    @Override
    public void setContentView(android.view.View r2, android.view.ViewGroup.LayoutParams r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setContentView(r2, r3)
            return
    }

    @Override
    public void setEnterSharedElementCallback(android.app.SharedElementCallback r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setEnterSharedElementCallback(r2)
            return
    }

    @Override
    public void setEnterSharedElementCallback(android.support.v4.app.SharedElementCallback r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setEnterSharedElementCallback(r2)
            return
    }

    @Override
    public void setExitSharedElementCallback(android.app.SharedElementCallback r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setExitSharedElementCallback(r2)
            return
    }

    @Override
    public void setExitSharedElementCallback(android.support.v4.app.SharedElementCallback r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setExitSharedElementCallback(r2)
            return
    }

    @Override
    public void setFinishOnTouchOutside(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setFinishOnTouchOutside(r2)
            return
    }

    @Override
    public void setImmersive(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setImmersive(r2)
            return
    }

    @Override
    public void setInheritShowWhenLocked(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setInheritShowWhenLocked(r2)
            return
    }

    @Override
    public void setIntent(android.content.Intent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setIntent(r2)
            return
    }

    @Override
    public void setLocusContext(android.content.LocusId r2, android.os.Bundle r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setLocusContext(r2, r3)
            return
    }

    @Override
    public void setPictureInPictureParams(android.app.PictureInPictureParams r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setPictureInPictureParams(r2)
            return
    }

    @Override
    public void setRequestedOrientation(int r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setRequestedOrientation(r2)
            return
    }

    @Override
    public void setShowWhenLocked(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setShowWhenLocked(r2)
            return
    }

    @Override
    public void setTaskDescription(android.app.ActivityManager.TaskDescription r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setTaskDescription(r2)
            return
    }

    @Override
    public void setTheme(int r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setTheme(r2)
            return
    }

    @Override
    public void setTitle(int r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setTitle(r2)
            return
    }

    @Override
    public void setTitle(java.lang.CharSequence r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setTitle(r2)
            return
    }

    @Override
    public void setTitleColor(int r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setTitleColor(r2)
            return
    }

    @Override
    public boolean setTranslucent(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.setTranslucent(r2)
            return r2
    }

    @Override
    public void setTurnScreenOn(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setTurnScreenOn(r2)
            return
    }

    @Override
    public void setVisible(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setVisible(r2)
            return
    }

    @Override
    public void setVrModeEnabled(boolean r2, android.content.ComponentName r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.setVrModeEnabled(r2, r3)
            return
    }

    @Override
    public void setWrapperActivityTheme(int r1) {
            r0 = this;
            super.setTheme(r1)     // Catch: java.lang.Exception -> L3
        L3:
            return
    }

    @Override
    public boolean shouldShowRequestPermissionRationale(java.lang.String r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.shouldShowRequestPermissionRationale(r2)
            return r2
    }

    @Override
    public boolean shouldUpRecreateTask(android.content.Intent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.shouldUpRecreateTask(r2)
            return r2
    }

    @Override
    public boolean showAssist(android.os.Bundle r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.showAssist(r2)
            return r2
    }

    @Override
    public void showLockTaskEscapeMessage() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.showLockTaskEscapeMessage()
            return
    }

    @Override
    public android.view.ActionMode startActionMode(android.view.ActionMode.Callback r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.ActionMode r2 = r0.startActionMode(r2)
            return r2
    }

    @Override
    public android.view.ActionMode startActionMode(android.view.ActionMode.Callback r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            android.view.ActionMode r2 = r0.startActionMode(r2, r3)
            return r2
    }

    @Override
    public void startActivities(android.content.Intent[] r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startActivities(r2)
            return
    }

    @Override
    public void startActivities(android.content.Intent[] r2, android.os.Bundle r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startActivities(r2, r3)
            return
    }

    @Override
    public void startActivity(android.content.Intent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startActivity(r2)
            return
    }

    @Override
    public void startActivity(android.content.Intent r2, android.os.Bundle r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startActivity(r2, r3)
            return
    }

    @Override
    public void startActivityForResult(android.content.Intent r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startActivityForResult(r2, r3)
            return
    }

    @Override
    public void startActivityForResult(android.content.Intent r2, int r3, android.os.Bundle r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startActivityForResult(r2, r3, r4)
            return
    }

    @Override
    public void startActivityFromChild(android.app.Activity r2, android.content.Intent r3, int r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startActivityFromChild(r2, r3, r4)
            return
    }

    @Override
    public void startActivityFromChild(android.app.Activity r2, android.content.Intent r3, int r4, android.os.Bundle r5) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startActivityFromChild(r2, r3, r4, r5)
            return
    }

    @Override
    public void startActivityFromFragment(android.app.Fragment r2, android.content.Intent r3, int r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startActivityFromFragment(r2, r3, r4)
            return
    }

    @Override
    public void startActivityFromFragment(android.app.Fragment r2, android.content.Intent r3, int r4, android.os.Bundle r5) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startActivityFromFragment(r2, r3, r4, r5)
            return
    }

    @Override
    public void startActivityFromFragment(android.support.v4.app.Fragment r2, android.content.Intent r3, int r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startActivityFromFragment(r2, r3, r4)
            return
    }

    @Override
    public void startActivityFromFragment(android.support.v4.app.Fragment r2, android.content.Intent r3, int r4, android.os.Bundle r5) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startActivityFromFragment(r2, r3, r4, r5)
            return
    }

    @Override
    public boolean startActivityIfNeeded(android.content.Intent r2, int r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.startActivityIfNeeded(r2, r3)
            return r2
    }

    @Override
    public boolean startActivityIfNeeded(android.content.Intent r2, int r3, android.os.Bundle r4) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.startActivityIfNeeded(r2, r3, r4)
            return r2
    }

    @Override
    public void startIntentSender(android.content.IntentSender r7, android.content.Intent r8, int r9, int r10, int r11) {
            r6 = this;
            android.support.v4.app.FragmentActivity r0 = r6.mOriginActivity
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.startIntentSender(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public void startIntentSender(android.content.IntentSender r8, android.content.Intent r9, int r10, int r11, int r12, android.os.Bundle r13) {
            r7 = this;
            android.support.v4.app.FragmentActivity r0 = r7.mOriginActivity
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.startIntentSender(r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    public void startIntentSenderForResult(android.content.IntentSender r8, int r9, android.content.Intent r10, int r11, int r12, int r13) {
            r7 = this;
            android.support.v4.app.FragmentActivity r0 = r7.mOriginActivity
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.startIntentSenderForResult(r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    public void startIntentSenderForResult(android.content.IntentSender r9, int r10, android.content.Intent r11, int r12, int r13, int r14, android.os.Bundle r15) {
            r8 = this;
            android.support.v4.app.FragmentActivity r0 = r8.mOriginActivity
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r0.startIntentSenderForResult(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    @Override
    public void startIntentSenderFromChild(android.app.Activity r9, android.content.IntentSender r10, int r11, android.content.Intent r12, int r13, int r14, int r15) {
            r8 = this;
            android.support.v4.app.FragmentActivity r0 = r8.mOriginActivity
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r0.startIntentSenderFromChild(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    @Override
    public void startIntentSenderFromChild(android.app.Activity r11, android.content.IntentSender r12, int r13, android.content.Intent r14, int r15, int r16, int r17, android.os.Bundle r18) {
            r10 = this;
            r0 = r10
            android.support.v4.app.FragmentActivity r1 = r0.mOriginActivity
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r8 = r17
            r9 = r18
            r1.startIntentSenderFromChild(r2, r3, r4, r5, r6, r7, r8, r9)
            return
    }

    @Override
    public void startIntentSenderFromFragment(android.support.v4.app.Fragment r11, android.content.IntentSender r12, int r13, android.content.Intent r14, int r15, int r16, int r17, android.os.Bundle r18) {
            r10 = this;
            r0 = r10
            android.support.v4.app.FragmentActivity r1 = r0.mOriginActivity
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r8 = r17
            r9 = r18
            r1.startIntentSenderFromFragment(r2, r3, r4, r5, r6, r7, r8, r9)
            return
    }

    @Override
    public void startLocalVoiceInteraction(android.os.Bundle r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startLocalVoiceInteraction(r2)
            return
    }

    @Override
    public void startLockTask() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startLockTask()
            return
    }

    @Override
    public void startManagingCursor(android.database.Cursor r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startManagingCursor(r2)
            return
    }

    @Override
    public boolean startNextMatchingActivity(android.content.Intent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.startNextMatchingActivity(r2)
            return r2
    }

    @Override
    public boolean startNextMatchingActivity(android.content.Intent r2, android.os.Bundle r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.startNextMatchingActivity(r2, r3)
            return r2
    }

    @Override
    public void startPostponedEnterTransition() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startPostponedEnterTransition()
            return
    }

    @Override
    public void startSearch(java.lang.String r2, boolean r3, android.os.Bundle r4, boolean r5) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.startSearch(r2, r3, r4, r5)
            return
    }

    @Override
    public void stopLocalVoiceInteraction() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.stopLocalVoiceInteraction()
            return
    }

    @Override
    public void stopLockTask() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.stopLockTask()
            return
    }

    @Override
    public void stopManagingCursor(android.database.Cursor r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.stopManagingCursor(r2)
            return
    }

    @Override
    public boolean superDispatchKeyEvent(android.view.KeyEvent r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            boolean r2 = r0.superDispatchKeyEvent(r2)
            return r2
    }

    @Override
    public void supportFinishAfterTransition() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.supportFinishAfterTransition()
            return
    }

    @Override
    public void supportInvalidateOptionsMenu() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.supportInvalidateOptionsMenu()
            return
    }

    @Override
    public void supportPostponeEnterTransition() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.supportPostponeEnterTransition()
            return
    }

    @Override
    public void supportStartPostponedEnterTransition() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.supportStartPostponedEnterTransition()
            return
    }

    @Override
    public void takeKeyEvents(boolean r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.takeKeyEvents(r2)
            return
    }

    @Override
    public void triggerSearch(java.lang.String r2, android.os.Bundle r3) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.triggerSearch(r2, r3)
            return
    }

    @Override
    public void unregisterActivityLifecycleCallbacks(android.app.Application.ActivityLifecycleCallbacks r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.unregisterActivityLifecycleCallbacks(r2)
            return
    }

    @Override
    public void unregisterForContextMenu(android.view.View r2) {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            r0.unregisterForContextMenu(r2)
            return
    }
}
