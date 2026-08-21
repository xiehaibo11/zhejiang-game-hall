package com.bytedance.pangle.activity;

public abstract class GenerateProxyActivity extends android.app.Activity implements com.bytedance.pangle.activity.b {
    public com.bytedance.pangle.plugin.Plugin mPlugin;
    public com.bytedance.pangle.activity.GeneratePluginActivity mTargetActivity;

    public GenerateProxyActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void addContentView(android.view.View r2, android.view.ViewGroup.LayoutParams r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.addContentView(r2, r3)
            return
        L8:
            super.addContentView(r2, r3)
            return
    }

    @Override
    public void attachBaseContext(android.content.Context r1) {
            r0 = this;
            com.bytedance.pangle.activity.c.a(r0, r1)
            return
    }

    @Override
    public void closeContextMenu() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.closeContextMenu()
            return
        L8:
            super.closeContextMenu()
            return
    }

    @Override
    public void closeOptionsMenu() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.closeOptionsMenu()
            return
        L8:
            super.closeOptionsMenu()
            return
    }

    @Override
    public android.app.PendingIntent createPendingResult(int r2, android.content.Intent r3, int r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.app.PendingIntent r2 = r0.createPendingResult(r2, r3, r4)
            return r2
        L9:
            android.app.PendingIntent r2 = super.createPendingResult(r2, r3, r4)
            return r2
    }

    @Override
    public boolean dispatchGenericMotionEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.dispatchGenericMotionEvent(r2)
            return r2
        L9:
            boolean r2 = super.dispatchGenericMotionEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchKeyEvent(android.view.KeyEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.dispatchKeyEvent(r2)
            return r2
        L9:
            boolean r2 = super.dispatchKeyEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchKeyShortcutEvent(android.view.KeyEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.dispatchKeyShortcutEvent(r2)
            return r2
        L9:
            boolean r2 = super.dispatchKeyShortcutEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchPopulateAccessibilityEvent(android.view.accessibility.AccessibilityEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.dispatchPopulateAccessibilityEvent(r2)
            return r2
        L9:
            boolean r2 = super.dispatchPopulateAccessibilityEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.dispatchTouchEvent(r2)
            return r2
        L9:
            boolean r2 = super.dispatchTouchEvent(r2)
            return r2
    }

    @Override
    public boolean dispatchTrackballEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.dispatchTrackballEvent(r2)
            return r2
        L9:
            boolean r2 = super.dispatchTrackballEvent(r2)
            return r2
    }

    @Override
    public void dump(java.lang.String r2, java.io.FileDescriptor r3, java.io.PrintWriter r4, java.lang.String[] r5) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.dump(r2, r3, r4, r5)
            return
        L8:
            super.dump(r2, r3, r4, r5)
            return
    }

    @Override
    public void enterPictureInPictureMode() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.enterPictureInPictureMode()
            return
        L8:
            super.enterPictureInPictureMode()
            return
    }

    @Override
    public boolean enterPictureInPictureMode(android.app.PictureInPictureParams r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.enterPictureInPictureMode(r2)
            return r2
        L9:
            boolean r2 = super.enterPictureInPictureMode(r2)
            return r2
    }

    @Override
    public android.view.View findViewById(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.View r2 = r0.findViewById(r2)
            return r2
        L9:
            android.view.View r2 = super.findViewById(r2)
            return r2
    }

    @Override
    public void finish() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.finish()
            return
        L8:
            super.finish()
            return
    }

    @Override
    public void finishActivity(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.finishActivity(r2)
            return
        L8:
            super.finishActivity(r2)
            return
    }

    @Override
    public void finishActivityFromChild(android.app.Activity r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.finishActivityFromChild(r2, r3)
            return
        L8:
            super.finishActivityFromChild(r2, r3)
            return
    }

    @Override
    public void finishAffinity() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.finishAffinity()
            return
        L8:
            super.finishAffinity()
            return
    }

    @Override
    public void finishAfterTransition() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.finishAfterTransition()
            return
        L8:
            super.finishAfterTransition()
            return
    }

    @Override
    public void finishAndRemoveTask() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.finishAndRemoveTask()
            return
        L8:
            super.finishAndRemoveTask()
            return
    }

    @Override
    public void finishFromChild(android.app.Activity r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.finishFromChild(r2)
            return
        L8:
            super.finishFromChild(r2)
            return
    }

    @Override
    public android.app.ActionBar getActionBar() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.app.ActionBar r0 = r0.getActionBar()
            return r0
        L9:
            android.app.ActionBar r0 = super.getActionBar()
            return r0
    }

    @Override
    public android.content.ComponentName getCallingActivity() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.content.ComponentName r0 = r0.getCallingActivity()
            return r0
        L9:
            android.content.ComponentName r0 = super.getCallingActivity()
            return r0
    }

    @Override
    public java.lang.String getCallingPackage() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getCallingPackage()
            return r0
        L9:
            java.lang.String r0 = super.getCallingPackage()
            return r0
    }

    @Override
    public int getChangingConfigurations() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            int r0 = r0.getChangingConfigurations()
            return r0
        L9:
            int r0 = super.getChangingConfigurations()
            return r0
    }

    @Override
    public android.content.ComponentName getComponentName() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.content.ComponentName r0 = r0.getComponentName()
            return r0
        L9:
            android.content.ComponentName r0 = super.getComponentName()
            return r0
    }

    @Override
    public android.transition.Scene getContentScene() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.transition.Scene r0 = r0.getContentScene()
            return r0
        L9:
            android.transition.Scene r0 = super.getContentScene()
            return r0
    }

    @Override
    public android.transition.TransitionManager getContentTransitionManager() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.transition.TransitionManager r0 = r0.getContentTransitionManager()
            return r0
        L9:
            android.transition.TransitionManager r0 = super.getContentTransitionManager()
            return r0
    }

    @Override
    public android.view.View getCurrentFocus() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.View r0 = r0.getCurrentFocus()
            return r0
        L9:
            android.view.View r0 = super.getCurrentFocus()
            return r0
    }

    @Override
    public android.app.FragmentManager getFragmentManager() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.app.FragmentManager r0 = r0.getFragmentManager()
            return r0
        L9:
            android.app.FragmentManager r0 = super.getFragmentManager()
            return r0
    }

    @Override
    public android.content.Intent getIntent() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.content.Intent r0 = r0.getIntent()
            return r0
        L9:
            android.content.Intent r0 = super.getIntent()
            return r0
    }

    @Override
    public java.lang.Object getLastNonConfigurationInstance() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            java.lang.Object r0 = r0.getLastNonConfigurationInstance()
            return r0
        L9:
            java.lang.Object r0 = super.getLastNonConfigurationInstance()
            return r0
    }

    @Override
    public android.view.LayoutInflater getLayoutInflater() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.LayoutInflater r0 = r0.getLayoutInflater()
            return r0
        L9:
            android.view.LayoutInflater r0 = super.getLayoutInflater()
            return r0
    }

    @Override
    public android.app.LoaderManager getLoaderManager() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.app.LoaderManager r0 = r0.getLoaderManager()
            return r0
        L9:
            android.app.LoaderManager r0 = super.getLoaderManager()
            return r0
    }

    @Override
    public java.lang.String getLocalClassName() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getLocalClassName()
            return r0
        L9:
            java.lang.String r0 = super.getLocalClassName()
            return r0
    }

    @Override
    public int getMaxNumPictureInPictureActions() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            int r0 = r0.getMaxNumPictureInPictureActions()
            return r0
        L9:
            int r0 = super.getMaxNumPictureInPictureActions()
            return r0
    }

    @Override
    public android.view.MenuInflater getMenuInflater() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.MenuInflater r0 = r0.getMenuInflater()
            return r0
        L9:
            android.view.MenuInflater r0 = super.getMenuInflater()
            return r0
    }

    @Override
    public android.content.Intent getParentActivityIntent() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.content.Intent r0 = r0.getParentActivityIntent()
            return r0
        L9:
            android.content.Intent r0 = super.getParentActivityIntent()
            return r0
    }

    @Override
    public com.bytedance.pangle.plugin.Plugin getPlugin() {
            r1 = this;
            com.bytedance.pangle.plugin.Plugin r0 = r1.mPlugin
            return r0
    }

    public abstract java.lang.String getPluginPkgName();

    @Override
    public android.content.SharedPreferences getPreferences(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.content.SharedPreferences r2 = r0.getPreferences(r2)
            return r2
        L9:
            android.content.SharedPreferences r2 = super.getPreferences(r2)
            return r2
    }

    @Override
    public android.net.Uri getReferrer() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.net.Uri r0 = r0.getReferrer()
            return r0
        L9:
            android.net.Uri r0 = super.getReferrer()
            return r0
    }

    @Override
    public int getRequestedOrientation() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            int r0 = r0.getRequestedOrientation()
            return r0
        L9:
            int r0 = super.getRequestedOrientation()
            return r0
    }

    @Override
    public java.lang.Object getSystemService(java.lang.String r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            java.lang.Object r2 = r0.getSystemService(r2)
            return r2
        L9:
            java.lang.Object r2 = super.getSystemService(r2)
            return r2
    }

    @Override
    public int getTaskId() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            int r0 = r0.getTaskId()
            return r0
        L9:
            int r0 = super.getTaskId()
            return r0
    }

    @Override
    public android.app.VoiceInteractor getVoiceInteractor() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.app.VoiceInteractor r0 = r0.getVoiceInteractor()
            return r0
        L9:
            android.app.VoiceInteractor r0 = super.getVoiceInteractor()
            return r0
    }

    @Override
    public android.view.Window getWindow() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.Window r0 = r0.getWindow()
            return r0
        L9:
            android.view.Window r0 = super.getWindow()
            return r0
    }

    @Override
    public android.view.WindowManager getWindowManager() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.WindowManager r0 = r0.getWindowManager()
            return r0
        L9:
            android.view.WindowManager r0 = super.getWindowManager()
            return r0
    }

    @Override
    public boolean hasWindowFocus() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.hasWindowFocus()
            return r0
        L9:
            boolean r0 = super.hasWindowFocus()
            return r0
    }

    @Override
    public void invalidateOptionsMenu() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.invalidateOptionsMenu()
            return
        L8:
            super.invalidateOptionsMenu()
            return
    }

    @Override
    public boolean isActivityTransitionRunning() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.isActivityTransitionRunning()
            return r0
        L9:
            boolean r0 = super.isActivityTransitionRunning()
            return r0
    }

    @Override
    public boolean isChangingConfigurations() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.isChangingConfigurations()
            return r0
        L9:
            boolean r0 = super.isChangingConfigurations()
            return r0
    }

    @Override
    public boolean isDestroyed() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.isDestroyed()
            return r0
        L9:
            boolean r0 = super.isDestroyed()
            return r0
    }

    @Override
    public boolean isFinishing() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.isFinishing()
            return r0
        L9:
            boolean r0 = super.isFinishing()
            return r0
    }

    @Override
    public boolean isImmersive() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.isImmersive()
            return r0
        L9:
            boolean r0 = super.isImmersive()
            return r0
    }

    @Override
    public boolean isInMultiWindowMode() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.isInMultiWindowMode()
            return r0
        L9:
            boolean r0 = super.isInMultiWindowMode()
            return r0
    }

    @Override
    public boolean isInPictureInPictureMode() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.isInPictureInPictureMode()
            return r0
        L9:
            boolean r0 = super.isInPictureInPictureMode()
            return r0
    }

    @Override
    public boolean isLocalVoiceInteractionSupported() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.isLocalVoiceInteractionSupported()
            return r0
        L9:
            boolean r0 = super.isLocalVoiceInteractionSupported()
            return r0
    }

    @Override
    public boolean isTaskRoot() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.isTaskRoot()
            return r0
        L9:
            boolean r0 = super.isTaskRoot()
            return r0
    }

    @Override
    public boolean isVoiceInteraction() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.isVoiceInteraction()
            return r0
        L9:
            boolean r0 = super.isVoiceInteraction()
            return r0
    }

    @Override
    public boolean isVoiceInteractionRoot() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.isVoiceInteractionRoot()
            return r0
        L9:
            boolean r0 = super.isVoiceInteractionRoot()
            return r0
    }

    @Override
    public boolean moveTaskToBack(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.moveTaskToBack(r2)
            return r2
        L9:
            boolean r2 = super.moveTaskToBack(r2)
            return r2
    }

    @Override
    public boolean navigateUpTo(android.content.Intent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.navigateUpTo(r2)
            return r2
        L9:
            boolean r2 = super.navigateUpTo(r2)
            return r2
    }

    @Override
    public boolean navigateUpToFromChild(android.app.Activity r2, android.content.Intent r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.navigateUpToFromChild(r2, r3)
            return r2
        L9:
            boolean r2 = super.navigateUpToFromChild(r2, r3)
            return r2
    }

    @Override
    public void onActionModeFinished(android.view.ActionMode r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onActionModeFinished(r2)
            return
        L8:
            super.onActionModeFinished(r2)
            return
    }

    @Override
    public void onActionModeStarted(android.view.ActionMode r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onActionModeStarted(r2)
            return
        L8:
            super.onActionModeStarted(r2)
            return
    }

    @Override
    public void onActivityReenter(int r2, android.content.Intent r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onActivityReenter(r2, r3)
            return
        L8:
            super.onActivityReenter(r2, r3)
            return
    }

    @Override
    protected void onActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onActivityResult(r2, r3, r4)
            return
        L8:
            super.onActivityResult(r2, r3, r4)
            return
    }

    @Override
    protected void onApplyThemeResource(android.content.res.Resources.Theme r2, int r3, boolean r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onApplyThemeResource(r2, r3, r4)
            return
        L8:
            super.onApplyThemeResource(r2, r3, r4)
            return
    }

    @Override
    public void onAttachFragment(android.app.Fragment r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onAttachFragment(r2)
            return
        L8:
            super.onAttachFragment(r2)
            return
    }

    @Override
    public void onAttachedToWindow() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onAttachedToWindow()
            return
        L8:
            super.onAttachedToWindow()
            return
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onBackPressed()
            return
        L8:
            super.onBackPressed()
            return
    }

    @Override
    protected void onChildTitleChanged(android.app.Activity r2, java.lang.CharSequence r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onChildTitleChanged(r2, r3)
            return
        L8:
            super.onChildTitleChanged(r2, r3)
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onConfigurationChanged(r2)
            return
        L8:
            super.onConfigurationChanged(r2)
            return
    }

    @Override
    public void onContentChanged() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onContentChanged()
            return
        L8:
            super.onContentChanged()
            return
    }

    @Override
    public boolean onContextItemSelected(android.view.MenuItem r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onContextItemSelected(r2)
            return r2
        L9:
            boolean r2 = super.onContextItemSelected(r2)
            return r2
    }

    @Override
    public void onContextMenuClosed(android.view.Menu r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onContextMenuClosed(r2)
            return
        L8:
            super.onContextMenuClosed(r2)
            return
    }

    @Override
    public void onCreate(android.os.Bundle r1) {
            r0 = this;
            com.bytedance.pangle.activity.c.a(r0, r1)
            return
    }

    @Override
    public void onCreate(android.os.Bundle r2, android.os.PersistableBundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onCreate(r2, r3)
            return
        L8:
            super.onCreate(r2, r3)
            return
    }

    @Override
    public void onCreateContextMenu(android.view.ContextMenu r2, android.view.View r3, android.view.ContextMenu.ContextMenuInfo r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onCreateContextMenu(r2, r3, r4)
            return
        L8:
            super.onCreateContextMenu(r2, r3, r4)
            return
    }

    @Override
    public java.lang.CharSequence onCreateDescription() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            java.lang.CharSequence r0 = r0.onCreateDescription()
            return r0
        L9:
            java.lang.CharSequence r0 = super.onCreateDescription()
            return r0
    }

    @Override
    protected android.app.Dialog onCreateDialog(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.app.Dialog r2 = r0.onCreateDialog(r2)
            return r2
        L9:
            android.app.Dialog r2 = super.onCreateDialog(r2)
            return r2
    }

    @Override
    protected android.app.Dialog onCreateDialog(int r2, android.os.Bundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.app.Dialog r2 = r0.onCreateDialog(r2, r3)
            return r2
        L9:
            android.app.Dialog r2 = super.onCreateDialog(r2, r3)
            return r2
    }

    @Override
    public void onCreateNavigateUpTaskStack(android.app.TaskStackBuilder r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onCreateNavigateUpTaskStack(r2)
            return
        L8:
            super.onCreateNavigateUpTaskStack(r2)
            return
    }

    @Override
    public boolean onCreateOptionsMenu(android.view.Menu r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onCreateOptionsMenu(r2)
            return r2
        L9:
            boolean r2 = super.onCreateOptionsMenu(r2)
            return r2
    }

    @Override
    public boolean onCreatePanelMenu(int r2, android.view.Menu r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onCreatePanelMenu(r2, r3)
            return r2
        L9:
            boolean r2 = super.onCreatePanelMenu(r2, r3)
            return r2
    }

    @Override
    public android.view.View onCreatePanelView(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.View r2 = r0.onCreatePanelView(r2)
            return r2
        L9:
            android.view.View r2 = super.onCreatePanelView(r2)
            return r2
    }

    @Override
    public boolean onCreateThumbnail(android.graphics.Bitmap r2, android.graphics.Canvas r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onCreateThumbnail(r2, r3)
            return r2
        L9:
            boolean r2 = super.onCreateThumbnail(r2, r3)
            return r2
    }

    @Override
    public android.view.View onCreateView(android.view.View r2, java.lang.String r3, android.content.Context r4, android.util.AttributeSet r5) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.View r2 = r0.onCreateView(r2, r3, r4, r5)
            return r2
        L9:
            android.view.View r2 = super.onCreateView(r2, r3, r4, r5)
            return r2
    }

    @Override
    public android.view.View onCreateView(java.lang.String r2, android.content.Context r3, android.util.AttributeSet r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.View r2 = r0.onCreateView(r2, r3, r4)
            return r2
        L9:
            android.view.View r2 = super.onCreateView(r2, r3, r4)
            return r2
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onDestroy()
            return
        L8:
            super.onDestroy()
            return
    }

    @Override
    public void onDetachedFromWindow() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onDetachedFromWindow()
            return
        L8:
            super.onDetachedFromWindow()
            return
    }

    @Override
    public void onEnterAnimationComplete() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onEnterAnimationComplete()
            return
        L8:
            super.onEnterAnimationComplete()
            return
    }

    @Override
    public boolean onGenericMotionEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onGenericMotionEvent(r2)
            return r2
        L9:
            boolean r2 = super.onGenericMotionEvent(r2)
            return r2
    }

    @Override
    public void onGetDirectActions(android.os.CancellationSignal r2, java.util.function.Consumer r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onGetDirectActions(r2, r3)
            return
        L8:
            super.onGetDirectActions(r2, r3)
            return
    }

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onKeyDown(r2, r3)
            return r2
        L9:
            boolean r2 = super.onKeyDown(r2, r3)
            return r2
    }

    @Override
    public boolean onKeyLongPress(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onKeyLongPress(r2, r3)
            return r2
        L9:
            boolean r2 = super.onKeyLongPress(r2, r3)
            return r2
    }

    @Override
    public boolean onKeyMultiple(int r2, int r3, android.view.KeyEvent r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onKeyMultiple(r2, r3, r4)
            return r2
        L9:
            boolean r2 = super.onKeyMultiple(r2, r3, r4)
            return r2
    }

    @Override
    public boolean onKeyShortcut(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onKeyShortcut(r2, r3)
            return r2
        L9:
            boolean r2 = super.onKeyShortcut(r2, r3)
            return r2
    }

    @Override
    public boolean onKeyUp(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onKeyUp(r2, r3)
            return r2
        L9:
            boolean r2 = super.onKeyUp(r2, r3)
            return r2
    }

    @Override
    public void onLocalVoiceInteractionStarted() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onLocalVoiceInteractionStarted()
            return
        L8:
            super.onLocalVoiceInteractionStarted()
            return
    }

    @Override
    public void onLocalVoiceInteractionStopped() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onLocalVoiceInteractionStopped()
            return
        L8:
            super.onLocalVoiceInteractionStopped()
            return
    }

    @Override
    public void onLowMemory() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onLowMemory()
            return
        L8:
            super.onLowMemory()
            return
    }

    @Override
    public boolean onMenuOpened(int r2, android.view.Menu r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onMenuOpened(r2, r3)
            return r2
        L9:
            boolean r2 = super.onMenuOpened(r2, r3)
            return r2
    }

    @Override
    public void onMultiWindowModeChanged(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onMultiWindowModeChanged(r2)
            return
        L8:
            super.onMultiWindowModeChanged(r2)
            return
    }

    @Override
    public void onMultiWindowModeChanged(boolean r2, android.content.res.Configuration r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onMultiWindowModeChanged(r2, r3)
            return
        L8:
            super.onMultiWindowModeChanged(r2, r3)
            return
    }

    @Override
    public boolean onNavigateUp() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.onNavigateUp()
            return r0
        L9:
            boolean r0 = super.onNavigateUp()
            return r0
    }

    @Override
    public boolean onNavigateUpFromChild(android.app.Activity r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onNavigateUpFromChild(r2)
            return r2
        L9:
            boolean r2 = super.onNavigateUpFromChild(r2)
            return r2
    }

    @Override
    protected void onNewIntent(android.content.Intent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onNewIntent(r2)
            return
        L8:
            super.onNewIntent(r2)
            return
    }

    @Override
    public boolean onOptionsItemSelected(android.view.MenuItem r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onOptionsItemSelected(r2)
            return r2
        L9:
            boolean r2 = super.onOptionsItemSelected(r2)
            return r2
    }

    @Override
    public void onOptionsMenuClosed(android.view.Menu r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onOptionsMenuClosed(r2)
            return
        L8:
            super.onOptionsMenuClosed(r2)
            return
    }

    @Override
    public void onPanelClosed(int r2, android.view.Menu r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onPanelClosed(r2, r3)
            return
        L8:
            super.onPanelClosed(r2, r3)
            return
    }

    @Override
    protected void onPause() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onPause()
            return
        L8:
            super.onPause()
            return
    }

    @Override
    public void onPerformDirectAction(java.lang.String r2, android.os.Bundle r3, android.os.CancellationSignal r4, java.util.function.Consumer r5) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onPerformDirectAction(r2, r3, r4, r5)
            return
        L8:
            super.onPerformDirectAction(r2, r3, r4, r5)
            return
    }

    @Override
    public void onPictureInPictureModeChanged(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onPictureInPictureModeChanged(r2)
            return
        L8:
            super.onPictureInPictureModeChanged(r2)
            return
    }

    @Override
    public void onPictureInPictureModeChanged(boolean r2, android.content.res.Configuration r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onPictureInPictureModeChanged(r2, r3)
            return
        L8:
            super.onPictureInPictureModeChanged(r2, r3)
            return
    }

    @Override
    public boolean onPictureInPictureRequested() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.onPictureInPictureRequested()
            return r0
        L9:
            boolean r0 = super.onPictureInPictureRequested()
            return r0
    }

    @Override
    protected void onPostCreate(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onPostCreate(r2)
            return
        L8:
            super.onPostCreate(r2)
            return
    }

    @Override
    public void onPostCreate(android.os.Bundle r2, android.os.PersistableBundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onPostCreate(r2, r3)
            return
        L8:
            super.onPostCreate(r2, r3)
            return
    }

    @Override
    protected void onPostResume() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onPostResume()
            return
        L8:
            super.onPostResume()
            return
    }

    @Override
    protected void onPrepareDialog(int r2, android.app.Dialog r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onPrepareDialog(r2, r3)
            return
        L8:
            super.onPrepareDialog(r2, r3)
            return
    }

    @Override
    protected void onPrepareDialog(int r2, android.app.Dialog r3, android.os.Bundle r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onPrepareDialog(r2, r3, r4)
            return
        L8:
            super.onPrepareDialog(r2, r3, r4)
            return
    }

    @Override
    public void onPrepareNavigateUpTaskStack(android.app.TaskStackBuilder r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onPrepareNavigateUpTaskStack(r2)
            return
        L8:
            super.onPrepareNavigateUpTaskStack(r2)
            return
    }

    @Override
    public boolean onPrepareOptionsMenu(android.view.Menu r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onPrepareOptionsMenu(r2)
            return r2
        L9:
            boolean r2 = super.onPrepareOptionsMenu(r2)
            return r2
    }

    @Override
    public boolean onPreparePanel(int r2, android.view.View r3, android.view.Menu r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onPreparePanel(r2, r3, r4)
            return r2
        L9:
            boolean r2 = super.onPreparePanel(r2, r3, r4)
            return r2
    }

    @Override
    public void onProvideAssistContent(android.app.assist.AssistContent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onProvideAssistContent(r2)
            return
        L8:
            super.onProvideAssistContent(r2)
            return
    }

    @Override
    public void onProvideAssistData(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onProvideAssistData(r2)
            return
        L8:
            super.onProvideAssistData(r2)
            return
    }

    @Override
    public void onProvideKeyboardShortcuts(java.util.List r2, android.view.Menu r3, int r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onProvideKeyboardShortcuts(r2, r3, r4)
            return
        L8:
            super.onProvideKeyboardShortcuts(r2, r3, r4)
            return
    }

    @Override
    public android.net.Uri onProvideReferrer() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.net.Uri r0 = r0.onProvideReferrer()
            return r0
        L9:
            android.net.Uri r0 = super.onProvideReferrer()
            return r0
    }

    @Override
    public void onRequestPermissionsResult(int r2, java.lang.String[] r3, int[] r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onRequestPermissionsResult(r2, r3, r4)
            return
        L8:
            super.onRequestPermissionsResult(r2, r3, r4)
            return
    }

    @Override
    protected void onRestart() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onRestart()
            return
        L8:
            super.onRestart()
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onRestoreInstanceState(r2)
            return
        L8:
            super.onRestoreInstanceState(r2)
            return
    }

    @Override
    public void onRestoreInstanceState(android.os.Bundle r2, android.os.PersistableBundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onRestoreInstanceState(r2, r3)
            return
        L8:
            super.onRestoreInstanceState(r2, r3)
            return
    }

    @Override
    protected void onResume() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onResume()
            return
        L8:
            super.onResume()
            return
    }

    @Override
    protected void onSaveInstanceState(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onSaveInstanceState(r2)
            goto Lb
        L8:
            super.onSaveInstanceState(r2)
        Lb:
            r2.clear()
            return
    }

    @Override
    public void onSaveInstanceState(android.os.Bundle r2, android.os.PersistableBundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onSaveInstanceState(r2, r3)
            goto Lb
        L8:
            super.onSaveInstanceState(r2, r3)
        Lb:
            r2.clear()
            return
    }

    @Override
    public boolean onSearchRequested() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.onSearchRequested()
            return r0
        L9:
            boolean r0 = super.onSearchRequested()
            return r0
    }

    @Override
    public boolean onSearchRequested(android.view.SearchEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onSearchRequested(r2)
            return r2
        L9:
            boolean r2 = super.onSearchRequested(r2)
            return r2
    }

    @Override
    protected void onStart() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onStart()
            return
        L8:
            super.onStart()
            return
    }

    @Override
    public void onStateNotSaved() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onStateNotSaved()
            return
        L8:
            super.onStateNotSaved()
            return
    }

    @Override
    protected void onStop() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onStop()
            return
        L8:
            super.onStop()
            return
    }

    @Override
    protected void onTitleChanged(java.lang.CharSequence r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onTitleChanged(r2, r3)
            return
        L8:
            super.onTitleChanged(r2, r3)
            return
    }

    @Override
    public void onTopResumedActivityChanged(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onTopResumedActivityChanged(r2)
            return
        L8:
            super.onTopResumedActivityChanged(r2)
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onTouchEvent(r2)
            return r2
        L9:
            boolean r2 = super.onTouchEvent(r2)
            return r2
    }

    @Override
    public boolean onTrackballEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.onTrackballEvent(r2)
            return r2
        L9:
            boolean r2 = super.onTrackballEvent(r2)
            return r2
    }

    @Override
    public void onTrimMemory(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onTrimMemory(r2)
            return
        L8:
            super.onTrimMemory(r2)
            return
    }

    @Override
    public void onUserInteraction() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onUserInteraction()
            return
        L8:
            super.onUserInteraction()
            return
    }

    @Override
    protected void onUserLeaveHint() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onUserLeaveHint()
            return
        L8:
            super.onUserLeaveHint()
            return
    }

    @Override
    public void onVisibleBehindCanceled() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onVisibleBehindCanceled()
            return
        L8:
            super.onVisibleBehindCanceled()
            return
    }

    @Override
    public void onWindowAttributesChanged(android.view.WindowManager.LayoutParams r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onWindowAttributesChanged(r2)
            return
        L8:
            super.onWindowAttributesChanged(r2)
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.onWindowFocusChanged(r2)
            return
        L8:
            super.onWindowFocusChanged(r2)
            return
    }

    @Override
    public android.view.ActionMode onWindowStartingActionMode(android.view.ActionMode.Callback r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.ActionMode r2 = r0.onWindowStartingActionMode(r2)
            return r2
        L9:
            android.view.ActionMode r2 = super.onWindowStartingActionMode(r2)
            return r2
    }

    @Override
    public android.view.ActionMode onWindowStartingActionMode(android.view.ActionMode.Callback r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.ActionMode r2 = r0.onWindowStartingActionMode(r2, r3)
            return r2
        L9:
            android.view.ActionMode r2 = super.onWindowStartingActionMode(r2, r3)
            return r2
    }

    @Override
    public void openContextMenu(android.view.View r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.openContextMenu(r2)
            return
        L8:
            super.openContextMenu(r2)
            return
    }

    @Override
    public void openOptionsMenu() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.openOptionsMenu()
            return
        L8:
            super.openOptionsMenu()
            return
    }

    @Override
    public void overridePendingTransition(int r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.overridePendingTransition(r2, r3)
            return
        L8:
            super.overridePendingTransition(r2, r3)
            return
    }

    @Override
    public void postponeEnterTransition() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.postponeEnterTransition()
            return
        L8:
            super.postponeEnterTransition()
            return
    }

    @Override
    public void recreate() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.recreate()
            return
        L8:
            super.recreate()
            return
    }

    @Override
    public void registerActivityLifecycleCallbacks(android.app.Application.ActivityLifecycleCallbacks r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.registerActivityLifecycleCallbacks(r2)
            return
        L8:
            super.registerActivityLifecycleCallbacks(r2)
            return
    }

    @Override
    public void registerForContextMenu(android.view.View r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.registerForContextMenu(r2)
            return
        L8:
            super.registerForContextMenu(r2)
            return
    }

    @Override
    public boolean releaseInstance() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r0 = r0.releaseInstance()
            return r0
        L9:
            boolean r0 = super.releaseInstance()
            return r0
    }

    @Override
    public void reportFullyDrawn() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.reportFullyDrawn()
            return
        L8:
            super.reportFullyDrawn()
            return
    }

    @Override
    public android.view.DragAndDropPermissions requestDragAndDropPermissions(android.view.DragEvent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.DragAndDropPermissions r2 = r0.requestDragAndDropPermissions(r2)
            return r2
        L9:
            android.view.DragAndDropPermissions r2 = super.requestDragAndDropPermissions(r2)
            return r2
    }

    @Override
    public boolean requestVisibleBehind(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.requestVisibleBehind(r2)
            return r2
        L9:
            boolean r2 = super.requestVisibleBehind(r2)
            return r2
    }

    @Override
    public void setActionBar(android.widget.Toolbar r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setActionBar(r2)
            return
        L8:
            super.setActionBar(r2)
            return
    }

    @Override
    public void setContentTransitionManager(android.transition.TransitionManager r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setContentTransitionManager(r2)
            return
        L8:
            super.setContentTransitionManager(r2)
            return
    }

    @Override
    public void setContentView(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setContentView(r2)
            return
        L8:
            super.setContentView(r2)
            return
    }

    @Override
    public void setContentView(android.view.View r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setContentView(r2)
            return
        L8:
            super.setContentView(r2)
            return
    }

    @Override
    public void setContentView(android.view.View r2, android.view.ViewGroup.LayoutParams r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setContentView(r2, r3)
            return
        L8:
            super.setContentView(r2, r3)
            return
    }

    @Override
    public void setEnterSharedElementCallback(android.app.SharedElementCallback r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setEnterSharedElementCallback(r2)
            return
        L8:
            super.setEnterSharedElementCallback(r2)
            return
    }

    @Override
    public void setExitSharedElementCallback(android.app.SharedElementCallback r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setExitSharedElementCallback(r2)
            return
        L8:
            super.setExitSharedElementCallback(r2)
            return
    }

    @Override
    public void setFinishOnTouchOutside(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setFinishOnTouchOutside(r2)
            return
        L8:
            super.setFinishOnTouchOutside(r2)
            return
    }

    @Override
    public void setImmersive(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setImmersive(r2)
            return
        L8:
            super.setImmersive(r2)
            return
    }

    @Override
    public void setInheritShowWhenLocked(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setInheritShowWhenLocked(r2)
            return
        L8:
            super.setInheritShowWhenLocked(r2)
            return
    }

    @Override
    public void setIntent(android.content.Intent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setIntent(r2)
            return
        L8:
            super.setIntent(r2)
            return
    }

    @Override
    public void setLocusContext(android.content.LocusId r2, android.os.Bundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setLocusContext(r2, r3)
            return
        L8:
            super.setLocusContext(r2, r3)
            return
    }

    @Override
    public void setPictureInPictureParams(android.app.PictureInPictureParams r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setPictureInPictureParams(r2)
            return
        L8:
            super.setPictureInPictureParams(r2)
            return
    }

    @Override
    public void setPlugin(com.bytedance.pangle.plugin.Plugin r1) {
            r0 = this;
            r0.mPlugin = r1
            return
    }

    @Override
    public void setRequestedOrientation(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setRequestedOrientation(r2)
            return
        L8:
            super.setRequestedOrientation(r2)
            return
    }

    @Override
    public void setShowWhenLocked(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setShowWhenLocked(r2)
            return
        L8:
            super.setShowWhenLocked(r2)
            return
    }

    @Override
    public void setTargetActivity(com.bytedance.pangle.activity.IPluginActivity r1) {
            r0 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r1 = (com.bytedance.pangle.activity.GeneratePluginActivity) r1
            r0.mTargetActivity = r1
            return
    }

    @Override
    public void setTaskDescription(android.app.ActivityManager.TaskDescription r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setTaskDescription(r2)
            return
        L8:
            super.setTaskDescription(r2)
            return
    }

    @Override
    public void setTheme(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setTheme(r2)
            return
        L8:
            super.setTheme(r2)
            return
    }

    @Override
    public void setTitle(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setTitle(r2)
            return
        L8:
            super.setTitle(r2)
            return
    }

    @Override
    public void setTitle(java.lang.CharSequence r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setTitle(r2)
            return
        L8:
            super.setTitle(r2)
            return
    }

    @Override
    public void setTitleColor(int r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setTitleColor(r2)
            return
        L8:
            super.setTitleColor(r2)
            return
    }

    @Override
    public boolean setTranslucent(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.setTranslucent(r2)
            return r2
        L9:
            boolean r2 = super.setTranslucent(r2)
            return r2
    }

    @Override
    public void setTurnScreenOn(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setTurnScreenOn(r2)
            return
        L8:
            super.setTurnScreenOn(r2)
            return
    }

    @Override
    public void setVisible(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setVisible(r2)
            return
        L8:
            super.setVisible(r2)
            return
    }

    @Override
    public void setVrModeEnabled(boolean r2, android.content.ComponentName r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.setVrModeEnabled(r2, r3)
            return
        L8:
            super.setVrModeEnabled(r2, r3)
            return
    }

    @Override
    public boolean shouldShowRequestPermissionRationale(java.lang.String r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.shouldShowRequestPermissionRationale(r2)
            return r2
        L9:
            boolean r2 = super.shouldShowRequestPermissionRationale(r2)
            return r2
    }

    @Override
    public boolean shouldUpRecreateTask(android.content.Intent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.shouldUpRecreateTask(r2)
            return r2
        L9:
            boolean r2 = super.shouldUpRecreateTask(r2)
            return r2
    }

    @Override
    public boolean showAssist(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.showAssist(r2)
            return r2
        L9:
            boolean r2 = super.showAssist(r2)
            return r2
    }

    @Override
    public void showLockTaskEscapeMessage() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.showLockTaskEscapeMessage()
            return
        L8:
            super.showLockTaskEscapeMessage()
            return
    }

    @Override
    public android.view.ActionMode startActionMode(android.view.ActionMode.Callback r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.ActionMode r2 = r0.startActionMode(r2)
            return r2
        L9:
            android.view.ActionMode r2 = super.startActionMode(r2)
            return r2
    }

    @Override
    public android.view.ActionMode startActionMode(android.view.ActionMode.Callback r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            android.view.ActionMode r2 = r0.startActionMode(r2, r3)
            return r2
        L9:
            android.view.ActionMode r2 = super.startActionMode(r2, r3)
            return r2
    }

    @Override
    public void startActivities(android.content.Intent[] r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startActivities(r2)
            return
        L8:
            super.startActivities(r2)
            return
    }

    @Override
    public void startActivities(android.content.Intent[] r2, android.os.Bundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startActivities(r2, r3)
            return
        L8:
            super.startActivities(r2, r3)
            return
    }

    @Override
    public void startActivity(android.content.Intent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startActivity(r2)
            return
        L8:
            super.startActivity(r2)
            return
    }

    @Override
    public void startActivity(android.content.Intent r2, android.os.Bundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startActivity(r2, r3)
            return
        L8:
            super.startActivity(r2, r3)
            return
    }

    @Override
    public void startActivityForResult(android.content.Intent r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startActivityForResult(r2, r3)
            return
        L8:
            super.startActivityForResult(r2, r3)
            return
    }

    @Override
    public void startActivityForResult(android.content.Intent r2, int r3, android.os.Bundle r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startActivityForResult(r2, r3, r4)
            return
        L8:
            super.startActivityForResult(r2, r3, r4)
            return
    }

    @Override
    public void startActivityFromChild(android.app.Activity r2, android.content.Intent r3, int r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startActivityFromChild(r2, r3, r4)
            return
        L8:
            super.startActivityFromChild(r2, r3, r4)
            return
    }

    @Override
    public void startActivityFromChild(android.app.Activity r2, android.content.Intent r3, int r4, android.os.Bundle r5) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startActivityFromChild(r2, r3, r4, r5)
            return
        L8:
            super.startActivityFromChild(r2, r3, r4, r5)
            return
    }

    @Override
    public void startActivityFromFragment(android.app.Fragment r2, android.content.Intent r3, int r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startActivityFromFragment(r2, r3, r4)
            return
        L8:
            super.startActivityFromFragment(r2, r3, r4)
            return
    }

    @Override
    public void startActivityFromFragment(android.app.Fragment r2, android.content.Intent r3, int r4, android.os.Bundle r5) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startActivityFromFragment(r2, r3, r4, r5)
            return
        L8:
            super.startActivityFromFragment(r2, r3, r4, r5)
            return
    }

    @Override
    public boolean startActivityIfNeeded(android.content.Intent r2, int r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.startActivityIfNeeded(r2, r3)
            return r2
        L9:
            boolean r2 = super.startActivityIfNeeded(r2, r3)
            return r2
    }

    @Override
    public boolean startActivityIfNeeded(android.content.Intent r2, int r3, android.os.Bundle r4) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.startActivityIfNeeded(r2, r3, r4)
            return r2
        L9:
            boolean r2 = super.startActivityIfNeeded(r2, r3, r4)
            return r2
    }

    @Override
    public void startIntentSender(android.content.IntentSender r7, android.content.Intent r8, int r9, int r10, int r11) {
            r6 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r6.mTargetActivity
            if (r0 == 0) goto Ld
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.startIntentSender(r1, r2, r3, r4, r5)
            return
        Ld:
            super.startIntentSender(r7, r8, r9, r10, r11)
            return
    }

    @Override
    public void startIntentSender(android.content.IntentSender r8, android.content.Intent r9, int r10, int r11, int r12, android.os.Bundle r13) {
            r7 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r7.mTargetActivity
            if (r0 == 0) goto Le
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.startIntentSender(r1, r2, r3, r4, r5, r6)
            return
        Le:
            super.startIntentSender(r8, r9, r10, r11, r12, r13)
            return
    }

    @Override
    public void startIntentSenderForResult(android.content.IntentSender r8, int r9, android.content.Intent r10, int r11, int r12, int r13) {
            r7 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r7.mTargetActivity
            if (r0 == 0) goto Le
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.startIntentSenderForResult(r1, r2, r3, r4, r5, r6)
            return
        Le:
            super.startIntentSenderForResult(r8, r9, r10, r11, r12, r13)
            return
    }

    @Override
    public void startIntentSenderForResult(android.content.IntentSender r9, int r10, android.content.Intent r11, int r12, int r13, int r14, android.os.Bundle r15) {
            r8 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r8.mTargetActivity
            if (r0 == 0) goto Lf
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r0.startIntentSenderForResult(r1, r2, r3, r4, r5, r6, r7)
            return
        Lf:
            super.startIntentSenderForResult(r9, r10, r11, r12, r13, r14, r15)
            return
    }

    @Override
    public void startIntentSenderFromChild(android.app.Activity r9, android.content.IntentSender r10, int r11, android.content.Intent r12, int r13, int r14, int r15) {
            r8 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r8.mTargetActivity
            if (r0 == 0) goto Lf
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r0.startIntentSenderFromChild(r1, r2, r3, r4, r5, r6, r7)
            return
        Lf:
            super.startIntentSenderFromChild(r9, r10, r11, r12, r13, r14, r15)
            return
    }

    @Override
    public void startIntentSenderFromChild(android.app.Activity r11, android.content.IntentSender r12, int r13, android.content.Intent r14, int r15, int r16, int r17, android.os.Bundle r18) {
            r10 = this;
            r0 = r10
            com.bytedance.pangle.activity.GeneratePluginActivity r1 = r0.mTargetActivity
            if (r1 == 0) goto L14
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
        L14:
            super.startIntentSenderFromChild(r11, r12, r13, r14, r15, r16, r17, r18)
            return
    }

    @Override
    public void startLocalVoiceInteraction(android.os.Bundle r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startLocalVoiceInteraction(r2)
            return
        L8:
            super.startLocalVoiceInteraction(r2)
            return
    }

    @Override
    public void startLockTask() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startLockTask()
            return
        L8:
            super.startLockTask()
            return
    }

    @Override
    public void startManagingCursor(android.database.Cursor r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startManagingCursor(r2)
            return
        L8:
            super.startManagingCursor(r2)
            return
    }

    @Override
    public boolean startNextMatchingActivity(android.content.Intent r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.startNextMatchingActivity(r2)
            return r2
        L9:
            boolean r2 = super.startNextMatchingActivity(r2)
            return r2
    }

    @Override
    public boolean startNextMatchingActivity(android.content.Intent r2, android.os.Bundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L9
            boolean r2 = r0.startNextMatchingActivity(r2, r3)
            return r2
        L9:
            boolean r2 = super.startNextMatchingActivity(r2, r3)
            return r2
    }

    @Override
    public void startPostponedEnterTransition() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startPostponedEnterTransition()
            return
        L8:
            super.startPostponedEnterTransition()
            return
    }

    @Override
    public void startSearch(java.lang.String r2, boolean r3, android.os.Bundle r4, boolean r5) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.startSearch(r2, r3, r4, r5)
            return
        L8:
            super.startSearch(r2, r3, r4, r5)
            return
    }

    @Override
    public void stopLocalVoiceInteraction() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.stopLocalVoiceInteraction()
            return
        L8:
            super.stopLocalVoiceInteraction()
            return
    }

    @Override
    public void stopLockTask() {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.stopLockTask()
            return
        L8:
            super.stopLockTask()
            return
    }

    @Override
    public void stopManagingCursor(android.database.Cursor r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.stopManagingCursor(r2)
            return
        L8:
            super.stopManagingCursor(r2)
            return
    }

    @Override
    public void takeKeyEvents(boolean r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.takeKeyEvents(r2)
            return
        L8:
            super.takeKeyEvents(r2)
            return
    }

    @Override
    public void triggerSearch(java.lang.String r2, android.os.Bundle r3) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.triggerSearch(r2, r3)
            return
        L8:
            super.triggerSearch(r2, r3)
            return
    }

    @Override
    public void unregisterActivityLifecycleCallbacks(android.app.Application.ActivityLifecycleCallbacks r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.unregisterActivityLifecycleCallbacks(r2)
            return
        L8:
            super.unregisterActivityLifecycleCallbacks(r2)
            return
    }

    @Override
    public void unregisterForContextMenu(android.view.View r2) {
            r1 = this;
            com.bytedance.pangle.activity.GeneratePluginActivity r0 = r1.mTargetActivity
            if (r0 == 0) goto L8
            r0.unregisterForContextMenu(r2)
            return
        L8:
            super.unregisterForContextMenu(r2)
            return
    }

    public void zeusSuperAddContentView(android.view.View r1, android.view.ViewGroup.LayoutParams r2) {
            r0 = this;
            super.addContentView(r1, r2)
            return
    }

    @Override
    public void zeusSuperAttachBaseContext(android.content.Context r1) {
            r0 = this;
            super.attachBaseContext(r1)
            return
    }

    public void zeusSuperCloseContextMenu() {
            r0 = this;
            super.closeContextMenu()
            return
    }

    public void zeusSuperCloseOptionsMenu() {
            r0 = this;
            super.closeOptionsMenu()
            return
    }

    public boolean zeusSuperConvertToTranslucent(android.app.Activity.TranslucentConversionListener r8, android.app.ActivityOptions r9) {
            r7 = this;
            r0 = 0
            java.lang.String r1 = "android.app.Activity$TranslucentConversionListener"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L2d
            java.lang.Class<android.app.Activity> r2 = android.app.Activity.class
            java.lang.String r3 = "convertToTranslucent"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L2d
            r5[r0] = r1     // Catch: java.lang.Exception -> L2d
            java.lang.Class<android.app.ActivityOptions> r1 = android.app.ActivityOptions.class
            r6 = 1
            r5[r6] = r1     // Catch: java.lang.Exception -> L2d
            java.lang.reflect.Method r1 = r2.getDeclaredMethod(r3, r5)     // Catch: java.lang.Exception -> L2d
            r1.setAccessible(r6)     // Catch: java.lang.Exception -> L2d
            java.lang.Object[] r2 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L2d
            r2[r0] = r8     // Catch: java.lang.Exception -> L2d
            r2[r6] = r9     // Catch: java.lang.Exception -> L2d
            java.lang.Object r8 = r1.invoke(r7, r2)     // Catch: java.lang.Exception -> L2d
            java.lang.Boolean r8 = (java.lang.Boolean) r8     // Catch: java.lang.Exception -> L2d
            boolean r8 = r8.booleanValue()     // Catch: java.lang.Exception -> L2d
            return r8
        L2d:
            r8 = move-exception
            r8.printStackTrace()
            return r0
    }

    public android.app.PendingIntent zeusSuperCreatePendingResult(int r1, android.content.Intent r2, int r3) {
            r0 = this;
            android.app.PendingIntent r1 = super.createPendingResult(r1, r2, r3)
            return r1
    }

    public boolean zeusSuperDispatchGenericMotionEvent(android.view.MotionEvent r1) {
            r0 = this;
            boolean r1 = super.dispatchGenericMotionEvent(r1)
            return r1
    }

    public boolean zeusSuperDispatchKeyEvent(android.view.KeyEvent r1) {
            r0 = this;
            boolean r1 = super.dispatchKeyEvent(r1)
            return r1
    }

    public boolean zeusSuperDispatchKeyShortcutEvent(android.view.KeyEvent r1) {
            r0 = this;
            boolean r1 = super.dispatchKeyShortcutEvent(r1)
            return r1
    }

    public boolean zeusSuperDispatchPopulateAccessibilityEvent(android.view.accessibility.AccessibilityEvent r1) {
            r0 = this;
            boolean r1 = super.dispatchPopulateAccessibilityEvent(r1)
            return r1
    }

    public boolean zeusSuperDispatchTouchEvent(android.view.MotionEvent r1) {
            r0 = this;
            boolean r1 = super.dispatchTouchEvent(r1)
            return r1
    }

    public boolean zeusSuperDispatchTrackballEvent(android.view.MotionEvent r1) {
            r0 = this;
            boolean r1 = super.dispatchTrackballEvent(r1)
            return r1
    }

    public void zeusSuperDump(java.lang.String r1, java.io.FileDescriptor r2, java.io.PrintWriter r3, java.lang.String[] r4) {
            r0 = this;
            super.dump(r1, r2, r3, r4)
            return
    }

    public void zeusSuperEnterPictureInPictureMode() {
            r0 = this;
            super.enterPictureInPictureMode()
            return
    }

    public boolean zeusSuperEnterPictureInPictureMode(android.app.PictureInPictureParams r1) {
            r0 = this;
            boolean r1 = super.enterPictureInPictureMode(r1)
            return r1
    }

    public android.view.View zeusSuperFindViewById(int r1) {
            r0 = this;
            android.view.View r1 = super.findViewById(r1)
            return r1
    }

    public void zeusSuperFinish() {
            r0 = this;
            super.finish()
            return
    }

    public void zeusSuperFinishActivity(int r1) {
            r0 = this;
            super.finishActivity(r1)
            return
    }

    public void zeusSuperFinishActivityFromChild(android.app.Activity r1, int r2) {
            r0 = this;
            super.finishActivityFromChild(r1, r2)
            return
    }

    public void zeusSuperFinishAffinity() {
            r0 = this;
            super.finishAffinity()
            return
    }

    public void zeusSuperFinishAfterTransition() {
            r0 = this;
            super.finishAfterTransition()
            return
    }

    public void zeusSuperFinishAndRemoveTask() {
            r0 = this;
            super.finishAndRemoveTask()
            return
    }

    public void zeusSuperFinishFromChild(android.app.Activity r1) {
            r0 = this;
            super.finishFromChild(r1)
            return
    }

    public android.app.ActionBar zeusSuperGetActionBar() {
            r1 = this;
            android.app.ActionBar r0 = super.getActionBar()
            return r0
    }

    public android.content.ComponentName zeusSuperGetCallingActivity() {
            r1 = this;
            android.content.ComponentName r0 = super.getCallingActivity()
            return r0
    }

    public java.lang.String zeusSuperGetCallingPackage() {
            r1 = this;
            java.lang.String r0 = super.getCallingPackage()
            return r0
    }

    public int zeusSuperGetChangingConfigurations() {
            r1 = this;
            int r0 = super.getChangingConfigurations()
            return r0
    }

    public android.content.ComponentName zeusSuperGetComponentName() {
            r1 = this;
            android.content.ComponentName r0 = super.getComponentName()
            return r0
    }

    public android.transition.Scene zeusSuperGetContentScene() {
            r1 = this;
            android.transition.Scene r0 = super.getContentScene()
            return r0
    }

    public android.transition.TransitionManager zeusSuperGetContentTransitionManager() {
            r1 = this;
            android.transition.TransitionManager r0 = super.getContentTransitionManager()
            return r0
    }

    public android.view.View zeusSuperGetCurrentFocus() {
            r1 = this;
            android.view.View r0 = super.getCurrentFocus()
            return r0
    }

    public android.app.FragmentManager zeusSuperGetFragmentManager() {
            r1 = this;
            android.app.FragmentManager r0 = super.getFragmentManager()
            return r0
    }

    public android.content.Intent zeusSuperGetIntent() {
            r1 = this;
            android.content.Intent r0 = super.getIntent()
            return r0
    }

    public java.lang.Object zeusSuperGetLastNonConfigurationInstance() {
            r1 = this;
            java.lang.Object r0 = super.getLastNonConfigurationInstance()
            return r0
    }

    public android.view.LayoutInflater zeusSuperGetLayoutInflater() {
            r1 = this;
            android.view.LayoutInflater r0 = super.getLayoutInflater()
            return r0
    }

    public android.app.LoaderManager zeusSuperGetLoaderManager() {
            r1 = this;
            android.app.LoaderManager r0 = super.getLoaderManager()
            return r0
    }

    public java.lang.String zeusSuperGetLocalClassName() {
            r1 = this;
            java.lang.String r0 = super.getLocalClassName()
            return r0
    }

    public int zeusSuperGetMaxNumPictureInPictureActions() {
            r1 = this;
            int r0 = super.getMaxNumPictureInPictureActions()
            return r0
    }

    public android.view.MenuInflater zeusSuperGetMenuInflater() {
            r1 = this;
            android.view.MenuInflater r0 = super.getMenuInflater()
            return r0
    }

    public android.content.Intent zeusSuperGetParentActivityIntent() {
            r1 = this;
            android.content.Intent r0 = super.getParentActivityIntent()
            return r0
    }

    public android.content.SharedPreferences zeusSuperGetPreferences(int r1) {
            r0 = this;
            android.content.SharedPreferences r1 = super.getPreferences(r1)
            return r1
    }

    public android.net.Uri zeusSuperGetReferrer() {
            r1 = this;
            android.net.Uri r0 = super.getReferrer()
            return r0
    }

    public int zeusSuperGetRequestedOrientation() {
            r1 = this;
            int r0 = super.getRequestedOrientation()
            return r0
    }

    public java.lang.Object zeusSuperGetSystemService(java.lang.String r1) {
            r0 = this;
            java.lang.Object r1 = super.getSystemService(r1)
            return r1
    }

    public int zeusSuperGetTaskId() {
            r1 = this;
            int r0 = super.getTaskId()
            return r0
    }

    public android.app.VoiceInteractor zeusSuperGetVoiceInteractor() {
            r1 = this;
            android.app.VoiceInteractor r0 = super.getVoiceInteractor()
            return r0
    }

    public android.view.Window zeusSuperGetWindow() {
            r1 = this;
            android.view.Window r0 = super.getWindow()
            return r0
    }

    public android.view.WindowManager zeusSuperGetWindowManager() {
            r1 = this;
            android.view.WindowManager r0 = super.getWindowManager()
            return r0
    }

    public boolean zeusSuperHasWindowFocus() {
            r1 = this;
            boolean r0 = super.hasWindowFocus()
            return r0
    }

    public void zeusSuperInvalidateOptionsMenu() {
            r0 = this;
            super.invalidateOptionsMenu()
            return
    }

    public boolean zeusSuperIsActivityTransitionRunning() {
            r1 = this;
            boolean r0 = super.isActivityTransitionRunning()
            return r0
    }

    public boolean zeusSuperIsChangingConfigurations() {
            r1 = this;
            boolean r0 = super.isChangingConfigurations()
            return r0
    }

    public boolean zeusSuperIsDestroyed() {
            r1 = this;
            boolean r0 = super.isDestroyed()
            return r0
    }

    public boolean zeusSuperIsFinishing() {
            r1 = this;
            boolean r0 = super.isFinishing()
            return r0
    }

    public boolean zeusSuperIsImmersive() {
            r1 = this;
            boolean r0 = super.isImmersive()
            return r0
    }

    public boolean zeusSuperIsInMultiWindowMode() {
            r1 = this;
            boolean r0 = super.isInMultiWindowMode()
            return r0
    }

    public boolean zeusSuperIsInPictureInPictureMode() {
            r1 = this;
            boolean r0 = super.isInPictureInPictureMode()
            return r0
    }

    public boolean zeusSuperIsLocalVoiceInteractionSupported() {
            r1 = this;
            boolean r0 = super.isLocalVoiceInteractionSupported()
            return r0
    }

    public boolean zeusSuperIsTaskRoot() {
            r1 = this;
            boolean r0 = super.isTaskRoot()
            return r0
    }

    public boolean zeusSuperIsVoiceInteraction() {
            r1 = this;
            boolean r0 = super.isVoiceInteraction()
            return r0
    }

    public boolean zeusSuperIsVoiceInteractionRoot() {
            r1 = this;
            boolean r0 = super.isVoiceInteractionRoot()
            return r0
    }

    public boolean zeusSuperMoveTaskToBack(boolean r1) {
            r0 = this;
            boolean r1 = super.moveTaskToBack(r1)
            return r1
    }

    public boolean zeusSuperNavigateUpTo(android.content.Intent r1) {
            r0 = this;
            boolean r1 = super.navigateUpTo(r1)
            return r1
    }

    public boolean zeusSuperNavigateUpToFromChild(android.app.Activity r1, android.content.Intent r2) {
            r0 = this;
            boolean r1 = super.navigateUpToFromChild(r1, r2)
            return r1
    }

    public void zeusSuperOnActionModeFinished(android.view.ActionMode r1) {
            r0 = this;
            super.onActionModeFinished(r1)
            return
    }

    public void zeusSuperOnActionModeStarted(android.view.ActionMode r1) {
            r0 = this;
            super.onActionModeStarted(r1)
            return
    }

    public void zeusSuperOnActivityReenter(int r1, android.content.Intent r2) {
            r0 = this;
            super.onActivityReenter(r1, r2)
            return
    }

    protected void zeusSuperOnActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            super.onActivityResult(r1, r2, r3)
            return
    }

    protected void zeusSuperOnApplyThemeResource(android.content.res.Resources.Theme r1, int r2, boolean r3) {
            r0 = this;
            super.onApplyThemeResource(r1, r2, r3)
            return
    }

    public void zeusSuperOnAttachFragment(android.app.Fragment r1) {
            r0 = this;
            super.onAttachFragment(r1)
            return
    }

    public void zeusSuperOnAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            return
    }

    public void zeusSuperOnBackPressed() {
            r0 = this;
            super.onBackPressed()
            return
    }

    protected void zeusSuperOnChildTitleChanged(android.app.Activity r1, java.lang.CharSequence r2) {
            r0 = this;
            super.onChildTitleChanged(r1, r2)
            return
    }

    public void zeusSuperOnConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            return
    }

    public void zeusSuperOnContentChanged() {
            r0 = this;
            super.onContentChanged()
            return
    }

    public boolean zeusSuperOnContextItemSelected(android.view.MenuItem r1) {
            r0 = this;
            boolean r1 = super.onContextItemSelected(r1)
            return r1
    }

    public void zeusSuperOnContextMenuClosed(android.view.Menu r1) {
            r0 = this;
            super.onContextMenuClosed(r1)
            return
    }

    @Override
    public void zeusSuperOnCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            return
    }

    public void zeusSuperOnCreate(android.os.Bundle r1, android.os.PersistableBundle r2) {
            r0 = this;
            super.onCreate(r1, r2)
            return
    }

    public void zeusSuperOnCreateContextMenu(android.view.ContextMenu r1, android.view.View r2, android.view.ContextMenu.ContextMenuInfo r3) {
            r0 = this;
            super.onCreateContextMenu(r1, r2, r3)
            return
    }

    public java.lang.CharSequence zeusSuperOnCreateDescription() {
            r1 = this;
            java.lang.CharSequence r0 = super.onCreateDescription()
            return r0
    }

    protected android.app.Dialog zeusSuperOnCreateDialog(int r1) {
            r0 = this;
            android.app.Dialog r1 = super.onCreateDialog(r1)
            return r1
    }

    protected android.app.Dialog zeusSuperOnCreateDialog(int r1, android.os.Bundle r2) {
            r0 = this;
            android.app.Dialog r1 = super.onCreateDialog(r1, r2)
            return r1
    }

    public void zeusSuperOnCreateNavigateUpTaskStack(android.app.TaskStackBuilder r1) {
            r0 = this;
            super.onCreateNavigateUpTaskStack(r1)
            return
    }

    public boolean zeusSuperOnCreateOptionsMenu(android.view.Menu r1) {
            r0 = this;
            boolean r1 = super.onCreateOptionsMenu(r1)
            return r1
    }

    public boolean zeusSuperOnCreatePanelMenu(int r1, android.view.Menu r2) {
            r0 = this;
            boolean r1 = super.onCreatePanelMenu(r1, r2)
            return r1
    }

    public android.view.View zeusSuperOnCreatePanelView(int r1) {
            r0 = this;
            android.view.View r1 = super.onCreatePanelView(r1)
            return r1
    }

    public boolean zeusSuperOnCreateThumbnail(android.graphics.Bitmap r1, android.graphics.Canvas r2) {
            r0 = this;
            boolean r1 = super.onCreateThumbnail(r1, r2)
            return r1
    }

    public android.view.View zeusSuperOnCreateView(android.view.View r1, java.lang.String r2, android.content.Context r3, android.util.AttributeSet r4) {
            r0 = this;
            android.view.View r1 = super.onCreateView(r1, r2, r3, r4)
            return r1
    }

    public android.view.View zeusSuperOnCreateView(java.lang.String r1, android.content.Context r2, android.util.AttributeSet r3) {
            r0 = this;
            android.view.View r1 = super.onCreateView(r1, r2, r3)
            return r1
    }

    protected void zeusSuperOnDestroy() {
            r0 = this;
            super.onDestroy()
            return
    }

    public void zeusSuperOnDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            return
    }

    public void zeusSuperOnEnterAnimationComplete() {
            r0 = this;
            super.onEnterAnimationComplete()
            return
    }

    public boolean zeusSuperOnGenericMotionEvent(android.view.MotionEvent r1) {
            r0 = this;
            boolean r1 = super.onGenericMotionEvent(r1)
            return r1
    }

    public void zeusSuperOnGetDirectActions(android.os.CancellationSignal r1, java.util.function.Consumer r2) {
            r0 = this;
            super.onGetDirectActions(r1, r2)
            return
    }

    public boolean zeusSuperOnKeyDown(int r1, android.view.KeyEvent r2) {
            r0 = this;
            boolean r1 = super.onKeyDown(r1, r2)
            return r1
    }

    public boolean zeusSuperOnKeyLongPress(int r1, android.view.KeyEvent r2) {
            r0 = this;
            boolean r1 = super.onKeyLongPress(r1, r2)
            return r1
    }

    public boolean zeusSuperOnKeyMultiple(int r1, int r2, android.view.KeyEvent r3) {
            r0 = this;
            boolean r1 = super.onKeyMultiple(r1, r2, r3)
            return r1
    }

    public boolean zeusSuperOnKeyShortcut(int r1, android.view.KeyEvent r2) {
            r0 = this;
            boolean r1 = super.onKeyShortcut(r1, r2)
            return r1
    }

    public boolean zeusSuperOnKeyUp(int r1, android.view.KeyEvent r2) {
            r0 = this;
            boolean r1 = super.onKeyUp(r1, r2)
            return r1
    }

    public void zeusSuperOnLocalVoiceInteractionStarted() {
            r0 = this;
            super.onLocalVoiceInteractionStarted()
            return
    }

    public void zeusSuperOnLocalVoiceInteractionStopped() {
            r0 = this;
            super.onLocalVoiceInteractionStopped()
            return
    }

    public void zeusSuperOnLowMemory() {
            r0 = this;
            super.onLowMemory()
            return
    }

    public boolean zeusSuperOnMenuOpened(int r1, android.view.Menu r2) {
            r0 = this;
            boolean r1 = super.onMenuOpened(r1, r2)
            return r1
    }

    public void zeusSuperOnMultiWindowModeChanged(boolean r1) {
            r0 = this;
            super.onMultiWindowModeChanged(r1)
            return
    }

    public void zeusSuperOnMultiWindowModeChanged(boolean r1, android.content.res.Configuration r2) {
            r0 = this;
            super.onMultiWindowModeChanged(r1, r2)
            return
    }

    public boolean zeusSuperOnNavigateUp() {
            r1 = this;
            boolean r0 = super.onNavigateUp()
            return r0
    }

    public boolean zeusSuperOnNavigateUpFromChild(android.app.Activity r1) {
            r0 = this;
            boolean r1 = super.onNavigateUpFromChild(r1)
            return r1
    }

    protected void zeusSuperOnNewIntent(android.content.Intent r1) {
            r0 = this;
            super.onNewIntent(r1)
            return
    }

    public boolean zeusSuperOnOptionsItemSelected(android.view.MenuItem r1) {
            r0 = this;
            boolean r1 = super.onOptionsItemSelected(r1)
            return r1
    }

    public void zeusSuperOnOptionsMenuClosed(android.view.Menu r1) {
            r0 = this;
            super.onOptionsMenuClosed(r1)
            return
    }

    public void zeusSuperOnPanelClosed(int r1, android.view.Menu r2) {
            r0 = this;
            super.onPanelClosed(r1, r2)
            return
    }

    protected void zeusSuperOnPause() {
            r0 = this;
            super.onPause()
            return
    }

    public void zeusSuperOnPerformDirectAction(java.lang.String r1, android.os.Bundle r2, android.os.CancellationSignal r3, java.util.function.Consumer r4) {
            r0 = this;
            super.onPerformDirectAction(r1, r2, r3, r4)
            return
    }

    public void zeusSuperOnPictureInPictureModeChanged(boolean r1) {
            r0 = this;
            super.onPictureInPictureModeChanged(r1)
            return
    }

    public void zeusSuperOnPictureInPictureModeChanged(boolean r1, android.content.res.Configuration r2) {
            r0 = this;
            super.onPictureInPictureModeChanged(r1, r2)
            return
    }

    public boolean zeusSuperOnPictureInPictureRequested() {
            r1 = this;
            boolean r0 = super.onPictureInPictureRequested()
            return r0
    }

    protected void zeusSuperOnPostCreate(android.os.Bundle r1) {
            r0 = this;
            super.onPostCreate(r1)
            return
    }

    public void zeusSuperOnPostCreate(android.os.Bundle r1, android.os.PersistableBundle r2) {
            r0 = this;
            super.onPostCreate(r1, r2)
            return
    }

    protected void zeusSuperOnPostResume() {
            r0 = this;
            super.onPostResume()
            return
    }

    protected void zeusSuperOnPrepareDialog(int r1, android.app.Dialog r2) {
            r0 = this;
            super.onPrepareDialog(r1, r2)
            return
    }

    protected void zeusSuperOnPrepareDialog(int r1, android.app.Dialog r2, android.os.Bundle r3) {
            r0 = this;
            super.onPrepareDialog(r1, r2, r3)
            return
    }

    public void zeusSuperOnPrepareNavigateUpTaskStack(android.app.TaskStackBuilder r1) {
            r0 = this;
            super.onPrepareNavigateUpTaskStack(r1)
            return
    }

    public boolean zeusSuperOnPrepareOptionsMenu(android.view.Menu r1) {
            r0 = this;
            boolean r1 = super.onPrepareOptionsMenu(r1)
            return r1
    }

    public boolean zeusSuperOnPreparePanel(int r1, android.view.View r2, android.view.Menu r3) {
            r0 = this;
            boolean r1 = super.onPreparePanel(r1, r2, r3)
            return r1
    }

    public void zeusSuperOnProvideAssistContent(android.app.assist.AssistContent r1) {
            r0 = this;
            super.onProvideAssistContent(r1)
            return
    }

    public void zeusSuperOnProvideAssistData(android.os.Bundle r1) {
            r0 = this;
            super.onProvideAssistData(r1)
            return
    }

    public void zeusSuperOnProvideKeyboardShortcuts(java.util.List r1, android.view.Menu r2, int r3) {
            r0 = this;
            super.onProvideKeyboardShortcuts(r1, r2, r3)
            return
    }

    public android.net.Uri zeusSuperOnProvideReferrer() {
            r1 = this;
            android.net.Uri r0 = super.onProvideReferrer()
            return r0
    }

    public void zeusSuperOnRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3) {
            r0 = this;
            super.onRequestPermissionsResult(r1, r2, r3)
            return
    }

    protected void zeusSuperOnRestart() {
            r0 = this;
            super.onRestart()
            return
    }

    protected void zeusSuperOnRestoreInstanceState(android.os.Bundle r1) {
            r0 = this;
            super.onRestoreInstanceState(r1)
            return
    }

    public void zeusSuperOnRestoreInstanceState(android.os.Bundle r1, android.os.PersistableBundle r2) {
            r0 = this;
            super.onRestoreInstanceState(r1, r2)
            return
    }

    protected void zeusSuperOnResume() {
            r0 = this;
            super.onResume()
            return
    }

    protected void zeusSuperOnSaveInstanceState(android.os.Bundle r1) {
            r0 = this;
            super.onSaveInstanceState(r1)
            return
    }

    public void zeusSuperOnSaveInstanceState(android.os.Bundle r1, android.os.PersistableBundle r2) {
            r0 = this;
            super.onSaveInstanceState(r1, r2)
            return
    }

    public boolean zeusSuperOnSearchRequested() {
            r1 = this;
            boolean r0 = super.onSearchRequested()
            return r0
    }

    public boolean zeusSuperOnSearchRequested(android.view.SearchEvent r1) {
            r0 = this;
            boolean r1 = super.onSearchRequested(r1)
            return r1
    }

    protected void zeusSuperOnStart() {
            r0 = this;
            super.onStart()
            return
    }

    public void zeusSuperOnStateNotSaved() {
            r0 = this;
            super.onStateNotSaved()
            return
    }

    protected void zeusSuperOnStop() {
            r0 = this;
            super.onStop()
            return
    }

    protected void zeusSuperOnTitleChanged(java.lang.CharSequence r1, int r2) {
            r0 = this;
            super.onTitleChanged(r1, r2)
            return
    }

    public void zeusSuperOnTopResumedActivityChanged(boolean r1) {
            r0 = this;
            super.onTopResumedActivityChanged(r1)
            return
    }

    public boolean zeusSuperOnTouchEvent(android.view.MotionEvent r1) {
            r0 = this;
            boolean r1 = super.onTouchEvent(r1)
            return r1
    }

    public boolean zeusSuperOnTrackballEvent(android.view.MotionEvent r1) {
            r0 = this;
            boolean r1 = super.onTrackballEvent(r1)
            return r1
    }

    public void zeusSuperOnTrimMemory(int r1) {
            r0 = this;
            super.onTrimMemory(r1)
            return
    }

    public void zeusSuperOnUserInteraction() {
            r0 = this;
            super.onUserInteraction()
            return
    }

    protected void zeusSuperOnUserLeaveHint() {
            r0 = this;
            super.onUserLeaveHint()
            return
    }

    public void zeusSuperOnVisibleBehindCanceled() {
            r0 = this;
            super.onVisibleBehindCanceled()
            return
    }

    public void zeusSuperOnWindowAttributesChanged(android.view.WindowManager.LayoutParams r1) {
            r0 = this;
            super.onWindowAttributesChanged(r1)
            return
    }

    public void zeusSuperOnWindowFocusChanged(boolean r1) {
            r0 = this;
            super.onWindowFocusChanged(r1)
            return
    }

    public android.view.ActionMode zeusSuperOnWindowStartingActionMode(android.view.ActionMode.Callback r1) {
            r0 = this;
            android.view.ActionMode r1 = super.onWindowStartingActionMode(r1)
            return r1
    }

    public android.view.ActionMode zeusSuperOnWindowStartingActionMode(android.view.ActionMode.Callback r1, int r2) {
            r0 = this;
            android.view.ActionMode r1 = super.onWindowStartingActionMode(r1, r2)
            return r1
    }

    public void zeusSuperOpenContextMenu(android.view.View r1) {
            r0 = this;
            super.openContextMenu(r1)
            return
    }

    public void zeusSuperOpenOptionsMenu() {
            r0 = this;
            super.openOptionsMenu()
            return
    }

    public void zeusSuperOverridePendingTransition(int r1, int r2) {
            r0 = this;
            super.overridePendingTransition(r1, r2)
            return
    }

    public void zeusSuperPostponeEnterTransition() {
            r0 = this;
            super.postponeEnterTransition()
            return
    }

    public void zeusSuperRecreate() {
            r0 = this;
            super.recreate()
            return
    }

    public void zeusSuperRegisterActivityLifecycleCallbacks(android.app.Application.ActivityLifecycleCallbacks r1) {
            r0 = this;
            super.registerActivityLifecycleCallbacks(r1)
            return
    }

    public void zeusSuperRegisterForContextMenu(android.view.View r1) {
            r0 = this;
            super.registerForContextMenu(r1)
            return
    }

    public boolean zeusSuperReleaseInstance() {
            r1 = this;
            boolean r0 = super.releaseInstance()
            return r0
    }

    public void zeusSuperReportFullyDrawn() {
            r0 = this;
            super.reportFullyDrawn()
            return
    }

    public android.view.DragAndDropPermissions zeusSuperRequestDragAndDropPermissions(android.view.DragEvent r1) {
            r0 = this;
            android.view.DragAndDropPermissions r1 = super.requestDragAndDropPermissions(r1)
            return r1
    }

    public boolean zeusSuperRequestVisibleBehind(boolean r1) {
            r0 = this;
            boolean r1 = super.requestVisibleBehind(r1)
            return r1
    }

    public void zeusSuperSetActionBar(android.widget.Toolbar r1) {
            r0 = this;
            super.setActionBar(r1)
            return
    }

    public void zeusSuperSetContentTransitionManager(android.transition.TransitionManager r1) {
            r0 = this;
            super.setContentTransitionManager(r1)
            return
    }

    public void zeusSuperSetContentView(int r1) {
            r0 = this;
            super.setContentView(r1)
            return
    }

    public void zeusSuperSetContentView(android.view.View r1) {
            r0 = this;
            super.setContentView(r1)
            return
    }

    public void zeusSuperSetContentView(android.view.View r1, android.view.ViewGroup.LayoutParams r2) {
            r0 = this;
            super.setContentView(r1, r2)
            return
    }

    public void zeusSuperSetEnterSharedElementCallback(android.app.SharedElementCallback r1) {
            r0 = this;
            super.setEnterSharedElementCallback(r1)
            return
    }

    public void zeusSuperSetExitSharedElementCallback(android.app.SharedElementCallback r1) {
            r0 = this;
            super.setExitSharedElementCallback(r1)
            return
    }

    public void zeusSuperSetFinishOnTouchOutside(boolean r1) {
            r0 = this;
            super.setFinishOnTouchOutside(r1)
            return
    }

    public void zeusSuperSetImmersive(boolean r1) {
            r0 = this;
            super.setImmersive(r1)
            return
    }

    public void zeusSuperSetInheritShowWhenLocked(boolean r1) {
            r0 = this;
            super.setInheritShowWhenLocked(r1)
            return
    }

    public void zeusSuperSetIntent(android.content.Intent r1) {
            r0 = this;
            super.setIntent(r1)
            return
    }

    public void zeusSuperSetLocusContext(android.content.LocusId r1, android.os.Bundle r2) {
            r0 = this;
            super.setLocusContext(r1, r2)
            return
    }

    public void zeusSuperSetPictureInPictureParams(android.app.PictureInPictureParams r1) {
            r0 = this;
            super.setPictureInPictureParams(r1)
            return
    }

    public void zeusSuperSetRequestedOrientation(int r1) {
            r0 = this;
            super.setRequestedOrientation(r1)
            return
    }

    public void zeusSuperSetShowWhenLocked(boolean r1) {
            r0 = this;
            super.setShowWhenLocked(r1)
            return
    }

    public void zeusSuperSetTaskDescription(android.app.ActivityManager.TaskDescription r1) {
            r0 = this;
            super.setTaskDescription(r1)
            return
    }

    @Override
    public void zeusSuperSetTheme(int r1) {
            r0 = this;
            super.setTheme(r1)
            return
    }

    public void zeusSuperSetTitle(int r1) {
            r0 = this;
            super.setTitle(r1)
            return
    }

    public void zeusSuperSetTitle(java.lang.CharSequence r1) {
            r0 = this;
            super.setTitle(r1)
            return
    }

    public void zeusSuperSetTitleColor(int r1) {
            r0 = this;
            super.setTitleColor(r1)
            return
    }

    public boolean zeusSuperSetTranslucent(boolean r1) {
            r0 = this;
            boolean r1 = super.setTranslucent(r1)
            return r1
    }

    public void zeusSuperSetTurnScreenOn(boolean r1) {
            r0 = this;
            super.setTurnScreenOn(r1)
            return
    }

    public void zeusSuperSetVisible(boolean r1) {
            r0 = this;
            super.setVisible(r1)
            return
    }

    public void zeusSuperSetVrModeEnabled(boolean r1, android.content.ComponentName r2) {
            r0 = this;
            super.setVrModeEnabled(r1, r2)
            return
    }

    public boolean zeusSuperShouldShowRequestPermissionRationale(java.lang.String r1) {
            r0 = this;
            boolean r1 = super.shouldShowRequestPermissionRationale(r1)
            return r1
    }

    public boolean zeusSuperShouldUpRecreateTask(android.content.Intent r1) {
            r0 = this;
            boolean r1 = super.shouldUpRecreateTask(r1)
            return r1
    }

    public boolean zeusSuperShowAssist(android.os.Bundle r1) {
            r0 = this;
            boolean r1 = super.showAssist(r1)
            return r1
    }

    public void zeusSuperShowLockTaskEscapeMessage() {
            r0 = this;
            super.showLockTaskEscapeMessage()
            return
    }

    public android.view.ActionMode zeusSuperStartActionMode(android.view.ActionMode.Callback r1) {
            r0 = this;
            android.view.ActionMode r1 = super.startActionMode(r1)
            return r1
    }

    public android.view.ActionMode zeusSuperStartActionMode(android.view.ActionMode.Callback r1, int r2) {
            r0 = this;
            android.view.ActionMode r1 = super.startActionMode(r1, r2)
            return r1
    }

    public void zeusSuperStartActivities(android.content.Intent[] r1) {
            r0 = this;
            super.startActivities(r1)
            return
    }

    public void zeusSuperStartActivities(android.content.Intent[] r1, android.os.Bundle r2) {
            r0 = this;
            super.startActivities(r1, r2)
            return
    }

    public void zeusSuperStartActivity(android.content.Intent r1) {
            r0 = this;
            super.startActivity(r1)
            return
    }

    public void zeusSuperStartActivity(android.content.Intent r1, android.os.Bundle r2) {
            r0 = this;
            super.startActivity(r1, r2)
            return
    }

    public void zeusSuperStartActivityForResult(android.content.Intent r1, int r2) {
            r0 = this;
            super.startActivityForResult(r1, r2)
            return
    }

    public void zeusSuperStartActivityForResult(android.content.Intent r1, int r2, android.os.Bundle r3) {
            r0 = this;
            super.startActivityForResult(r1, r2, r3)
            return
    }

    public void zeusSuperStartActivityFromChild(android.app.Activity r1, android.content.Intent r2, int r3) {
            r0 = this;
            super.startActivityFromChild(r1, r2, r3)
            return
    }

    public void zeusSuperStartActivityFromChild(android.app.Activity r1, android.content.Intent r2, int r3, android.os.Bundle r4) {
            r0 = this;
            super.startActivityFromChild(r1, r2, r3, r4)
            return
    }

    public void zeusSuperStartActivityFromFragment(android.app.Fragment r1, android.content.Intent r2, int r3) {
            r0 = this;
            super.startActivityFromFragment(r1, r2, r3)
            return
    }

    public void zeusSuperStartActivityFromFragment(android.app.Fragment r1, android.content.Intent r2, int r3, android.os.Bundle r4) {
            r0 = this;
            super.startActivityFromFragment(r1, r2, r3, r4)
            return
    }

    public boolean zeusSuperStartActivityIfNeeded(android.content.Intent r1, int r2) {
            r0 = this;
            boolean r1 = super.startActivityIfNeeded(r1, r2)
            return r1
    }

    public boolean zeusSuperStartActivityIfNeeded(android.content.Intent r1, int r2, android.os.Bundle r3) {
            r0 = this;
            boolean r1 = super.startActivityIfNeeded(r1, r2, r3)
            return r1
    }

    public void zeusSuperStartIntentSender(android.content.IntentSender r1, android.content.Intent r2, int r3, int r4, int r5) {
            r0 = this;
            super.startIntentSender(r1, r2, r3, r4, r5)
            return
    }

    public void zeusSuperStartIntentSender(android.content.IntentSender r1, android.content.Intent r2, int r3, int r4, int r5, android.os.Bundle r6) {
            r0 = this;
            super.startIntentSender(r1, r2, r3, r4, r5, r6)
            return
    }

    public void zeusSuperStartIntentSenderForResult(android.content.IntentSender r1, int r2, android.content.Intent r3, int r4, int r5, int r6) {
            r0 = this;
            super.startIntentSenderForResult(r1, r2, r3, r4, r5, r6)
            return
    }

    public void zeusSuperStartIntentSenderForResult(android.content.IntentSender r1, int r2, android.content.Intent r3, int r4, int r5, int r6, android.os.Bundle r7) {
            r0 = this;
            super.startIntentSenderForResult(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public void zeusSuperStartIntentSenderFromChild(android.app.Activity r1, android.content.IntentSender r2, int r3, android.content.Intent r4, int r5, int r6, int r7) {
            r0 = this;
            super.startIntentSenderFromChild(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public void zeusSuperStartIntentSenderFromChild(android.app.Activity r1, android.content.IntentSender r2, int r3, android.content.Intent r4, int r5, int r6, int r7, android.os.Bundle r8) {
            r0 = this;
            super.startIntentSenderFromChild(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public void zeusSuperStartLocalVoiceInteraction(android.os.Bundle r1) {
            r0 = this;
            super.startLocalVoiceInteraction(r1)
            return
    }

    public void zeusSuperStartLockTask() {
            r0 = this;
            super.startLockTask()
            return
    }

    public void zeusSuperStartManagingCursor(android.database.Cursor r1) {
            r0 = this;
            super.startManagingCursor(r1)
            return
    }

    public boolean zeusSuperStartNextMatchingActivity(android.content.Intent r1) {
            r0 = this;
            boolean r1 = super.startNextMatchingActivity(r1)
            return r1
    }

    public boolean zeusSuperStartNextMatchingActivity(android.content.Intent r1, android.os.Bundle r2) {
            r0 = this;
            boolean r1 = super.startNextMatchingActivity(r1, r2)
            return r1
    }

    public void zeusSuperStartPostponedEnterTransition() {
            r0 = this;
            super.startPostponedEnterTransition()
            return
    }

    public void zeusSuperStartSearch(java.lang.String r1, boolean r2, android.os.Bundle r3, boolean r4) {
            r0 = this;
            super.startSearch(r1, r2, r3, r4)
            return
    }

    public void zeusSuperStopLocalVoiceInteraction() {
            r0 = this;
            super.stopLocalVoiceInteraction()
            return
    }

    public void zeusSuperStopLockTask() {
            r0 = this;
            super.stopLockTask()
            return
    }

    public void zeusSuperStopManagingCursor(android.database.Cursor r1) {
            r0 = this;
            super.stopManagingCursor(r1)
            return
    }

    public void zeusSuperTakeKeyEvents(boolean r1) {
            r0 = this;
            super.takeKeyEvents(r1)
            return
    }

    public void zeusSuperTriggerSearch(java.lang.String r1, android.os.Bundle r2) {
            r0 = this;
            super.triggerSearch(r1, r2)
            return
    }

    public void zeusSuperUnregisterActivityLifecycleCallbacks(android.app.Application.ActivityLifecycleCallbacks r1) {
            r0 = this;
            super.unregisterActivityLifecycleCallbacks(r1)
            return
    }

    public void zeusSuperUnregisterForContextMenu(android.view.View r1) {
            r0 = this;
            super.unregisterForContextMenu(r1)
            return
    }
}
