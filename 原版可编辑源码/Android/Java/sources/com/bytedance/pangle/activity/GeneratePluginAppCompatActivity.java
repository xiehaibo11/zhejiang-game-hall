package com.bytedance.pangle.activity;

import android.R;
import android.app.ActionBar;
import android.app.Activity;
import android.app.ActivityManager;
import android.app.ActivityOptions;
import android.app.Application;
import android.app.Dialog;
import android.app.Fragment;
import android.app.FragmentManager;
import android.app.LoaderManager;
import android.app.PendingIntent;
import android.app.PictureInPictureParams;
import android.app.SharedElementCallback;
import android.app.TaskStackBuilder;
import android.app.VoiceInteractor;
import android.app.assist.AssistContent;
import android.arch.lifecycle.Lifecycle;
import android.arch.lifecycle.LifecycleRegistry;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.content.LocusId;
import android.content.SharedPreferences;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.net.Uri;
import android.os.Bundle;
import android.os.CancellationSignal;
import android.os.PersistableBundle;
import android.support.v7.app.AppCompatActivity;
import android.transition.Scene;
import android.transition.TransitionManager;
import android.util.AttributeSet;
import android.view.ActionMode;
import android.view.ContextMenu;
import android.view.DragAndDropPermissions;
import android.view.DragEvent;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.MotionEvent;
import android.view.SearchEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.view.accessibility.AccessibilityEvent;
import android.widget.Toolbar;
import com.bytedance.pangle.plugin.Plugin;
import com.bytedance.pangle.transform.ZeusTransformUtils;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.lang.reflect.Field;
import java.util.List;
import java.util.function.Consumer;

public abstract class GeneratePluginAppCompatActivity extends AppCompatActivity implements IPluginActivity {
    boolean hasInit = true;
    public Plugin mPlugin;
    public GenerateProxyAppCompatActivity mProxyActivity;

    @Override
    public void addContentView(View view, ViewGroup.LayoutParams layoutParams) {
        this.mProxyActivity.zeusSuperAddContentView(view, layoutParams);
    }

    @Override
    public void closeContextMenu() {
        this.mProxyActivity.zeusSuperCloseContextMenu();
    }

    @Override
    public void closeOptionsMenu() {
        this.mProxyActivity.zeusSuperCloseOptionsMenu();
    }

    @Override
    public PendingIntent createPendingResult(int i, Intent intent, int i2) {
        return this.mProxyActivity.zeusSuperCreatePendingResult(i, intent, i2);
    }

    @Override
    public boolean dispatchGenericMotionEvent(MotionEvent motionEvent) {
        return this.mProxyActivity.zeusSuperDispatchGenericMotionEvent(motionEvent);
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        return this.mProxyActivity.zeusSuperDispatchKeyEvent(keyEvent);
    }

    @Override
    public boolean dispatchKeyShortcutEvent(KeyEvent keyEvent) {
        return this.mProxyActivity.zeusSuperDispatchKeyShortcutEvent(keyEvent);
    }

    @Override
    public boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        return this.mProxyActivity.zeusSuperDispatchPopulateAccessibilityEvent(accessibilityEvent);
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        return this.mProxyActivity.zeusSuperDispatchTouchEvent(motionEvent);
    }

    @Override
    public boolean dispatchTrackballEvent(MotionEvent motionEvent) {
        return this.mProxyActivity.zeusSuperDispatchTrackballEvent(motionEvent);
    }

    @Override
    public void dump(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        this.mProxyActivity.zeusSuperDump(str, fileDescriptor, printWriter, strArr);
    }

    @Override
    public void enterPictureInPictureMode() {
        this.mProxyActivity.zeusSuperEnterPictureInPictureMode();
    }

    @Override
    public boolean enterPictureInPictureMode(PictureInPictureParams pictureInPictureParams) {
        return this.mProxyActivity.zeusSuperEnterPictureInPictureMode(pictureInPictureParams);
    }

    @Override
    public View findViewById(int i) {
        return this.mProxyActivity.zeusSuperFindViewById(i);
    }

    @Override
    public void finish() {
        this.mProxyActivity.zeusSuperFinish();
    }

    @Override
    public void finishActivity(int i) {
        this.mProxyActivity.zeusSuperFinishActivity(i);
    }

    @Override
    public void finishActivityFromChild(Activity activity, int i) {
        this.mProxyActivity.zeusSuperFinishActivityFromChild(activity, i);
    }

    @Override
    public void finishAffinity() {
        this.mProxyActivity.zeusSuperFinishAffinity();
    }

    @Override
    public void finishAfterTransition() {
        this.mProxyActivity.zeusSuperFinishAfterTransition();
    }

    @Override
    public void finishAndRemoveTask() {
        this.mProxyActivity.zeusSuperFinishAndRemoveTask();
    }

    @Override
    public void finishFromChild(Activity activity) {
        this.mProxyActivity.zeusSuperFinishFromChild(activity);
    }

    @Override
    public ActionBar getActionBar() {
        return this.mProxyActivity.zeusSuperGetActionBar();
    }

    @Override
    public ComponentName getCallingActivity() {
        return this.mProxyActivity.zeusSuperGetCallingActivity();
    }

    @Override
    public String getCallingPackage() {
        return this.mProxyActivity.zeusSuperGetCallingPackage();
    }

    @Override
    public int getChangingConfigurations() {
        return this.mProxyActivity.zeusSuperGetChangingConfigurations();
    }

    @Override
    public ComponentName getComponentName() {
        return this.mProxyActivity.zeusSuperGetComponentName();
    }

    @Override
    public Scene getContentScene() {
        return this.mProxyActivity.zeusSuperGetContentScene();
    }

    @Override
    public TransitionManager getContentTransitionManager() {
        return this.mProxyActivity.zeusSuperGetContentTransitionManager();
    }

    @Override
    public View getCurrentFocus() {
        return this.mProxyActivity.zeusSuperGetCurrentFocus();
    }

    @Override
    public FragmentManager getFragmentManager() {
        return this.mProxyActivity.zeusSuperGetFragmentManager();
    }

    @Override
    public Intent getIntent() {
        return this.mProxyActivity.zeusSuperGetIntent();
    }

    @Override
    public Object getLastNonConfigurationInstance() {
        return this.mProxyActivity.zeusSuperGetLastNonConfigurationInstance();
    }

    @Override
    public LayoutInflater getLayoutInflater() {
        return this.mProxyActivity.zeusSuperGetLayoutInflater();
    }

    @Override
    public LoaderManager getLoaderManager() {
        return this.mProxyActivity.zeusSuperGetLoaderManager();
    }

    @Override
    public String getLocalClassName() {
        return this.mProxyActivity.zeusSuperGetLocalClassName();
    }

    @Override
    public int getMaxNumPictureInPictureActions() {
        return this.mProxyActivity.zeusSuperGetMaxNumPictureInPictureActions();
    }

    @Override
    public MenuInflater getMenuInflater() {
        return this.mProxyActivity.zeusSuperGetMenuInflater();
    }

    @Override
    public Intent getParentActivityIntent() {
        return this.mProxyActivity.zeusSuperGetParentActivityIntent();
    }

    @Override
    public SharedPreferences getPreferences(int i) {
        return this.mProxyActivity.zeusSuperGetPreferences(i);
    }

    @Override
    public Uri getReferrer() {
        return this.mProxyActivity.zeusSuperGetReferrer();
    }

    @Override
    public int getRequestedOrientation() {
        return this.mProxyActivity.zeusSuperGetRequestedOrientation();
    }

    @Override
    public Object getSystemService(String str) {
        return this.mProxyActivity.zeusSuperGetSystemService(str);
    }

    @Override
    public int getTaskId() {
        return this.mProxyActivity.zeusSuperGetTaskId();
    }

    @Override
    public VoiceInteractor getVoiceInteractor() {
        return this.mProxyActivity.zeusSuperGetVoiceInteractor();
    }

    @Override
    public Window getWindow() {
        return this.mProxyActivity.zeusSuperGetWindow();
    }

    @Override
    public WindowManager getWindowManager() {
        return this.mProxyActivity.zeusSuperGetWindowManager();
    }

    @Override
    public boolean hasWindowFocus() {
        return this.mProxyActivity.zeusSuperHasWindowFocus();
    }

    @Override
    public void invalidateOptionsMenu() {
        this.mProxyActivity.zeusSuperInvalidateOptionsMenu();
    }

    @Override
    public boolean isActivityTransitionRunning() {
        return this.mProxyActivity.zeusSuperIsActivityTransitionRunning();
    }

    @Override
    public boolean isChangingConfigurations() {
        return this.mProxyActivity.zeusSuperIsChangingConfigurations();
    }

    @Override
    public boolean isDestroyed() {
        return this.mProxyActivity.zeusSuperIsDestroyed();
    }

    @Override
    public boolean isFinishing() {
        return this.mProxyActivity.zeusSuperIsFinishing();
    }

    @Override
    public boolean isImmersive() {
        return this.mProxyActivity.zeusSuperIsImmersive();
    }

    @Override
    public boolean isInMultiWindowMode() {
        return this.mProxyActivity.zeusSuperIsInMultiWindowMode();
    }

    @Override
    public boolean isInPictureInPictureMode() {
        return this.mProxyActivity.zeusSuperIsInPictureInPictureMode();
    }

    @Override
    public boolean isLocalVoiceInteractionSupported() {
        return this.mProxyActivity.zeusSuperIsLocalVoiceInteractionSupported();
    }

    @Override
    public boolean isTaskRoot() {
        return this.mProxyActivity.zeusSuperIsTaskRoot();
    }

    @Override
    public boolean isVoiceInteraction() {
        return this.mProxyActivity.zeusSuperIsVoiceInteraction();
    }

    @Override
    public boolean isVoiceInteractionRoot() {
        return this.mProxyActivity.zeusSuperIsVoiceInteractionRoot();
    }

    @Override
    public boolean moveTaskToBack(boolean z) {
        return this.mProxyActivity.zeusSuperMoveTaskToBack(z);
    }

    @Override
    public boolean navigateUpTo(Intent intent) {
        return this.mProxyActivity.zeusSuperNavigateUpTo(intent);
    }

    @Override
    public boolean navigateUpToFromChild(Activity activity, Intent intent) {
        return this.mProxyActivity.zeusSuperNavigateUpToFromChild(activity, intent);
    }

    @Override
    public void onActionModeFinished(ActionMode actionMode) {
        this.mProxyActivity.zeusSuperOnActionModeFinished(actionMode);
    }

    @Override
    public void onActionModeStarted(ActionMode actionMode) {
        this.mProxyActivity.zeusSuperOnActionModeStarted(actionMode);
    }

    @Override
    public void onActivityReenter(int i, Intent intent) {
        this.mProxyActivity.zeusSuperOnActivityReenter(i, intent);
    }

    @Override
    protected void onActivityResult(int i, int i2, Intent intent) {
        this.mProxyActivity.zeusSuperOnActivityResult(i, i2, intent);
    }

    @Override
    protected void onApplyThemeResource(Resources.Theme theme, int i, boolean z) {
        this.mProxyActivity.zeusSuperOnApplyThemeResource(theme, i, z);
    }

    @Override
    public void onAttachFragment(Fragment fragment) {
        this.mProxyActivity.zeusSuperOnAttachFragment(fragment);
    }

    @Override
    public void onAttachedToWindow() {
        this.mProxyActivity.zeusSuperOnAttachedToWindow();
    }

    @Override
    public void onBackPressed() {
        this.mProxyActivity.zeusSuperOnBackPressed();
    }

    @Override
    protected void onChildTitleChanged(Activity activity, CharSequence charSequence) {
        this.mProxyActivity.zeusSuperOnChildTitleChanged(activity, charSequence);
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        this.mProxyActivity.zeusSuperOnConfigurationChanged(configuration);
    }

    @Override
    public void onContentChanged() {
        this.mProxyActivity.zeusSuperOnContentChanged();
    }

    @Override
    public boolean onContextItemSelected(MenuItem menuItem) {
        return this.mProxyActivity.zeusSuperOnContextItemSelected(menuItem);
    }

    @Override
    public void onContextMenuClosed(Menu menu) {
        this.mProxyActivity.zeusSuperOnContextMenuClosed(menu);
    }

    @Override
    public void attachBaseContext(Context context) {
        super.attachBaseContext(context);
        com.bytedance.pangle.util.a.a(this, this.mProxyActivity);
    }

    @Override
    public void onCreate(Bundle bundle) {
        this.mProxyActivity.zeusSuperOnCreate(bundle);
        com.bytedance.pangle.res.b.a(getLayoutInflater());
    }

    @Override
    public void onCreate(Bundle bundle, PersistableBundle persistableBundle) {
        this.mProxyActivity.zeusSuperOnCreate(bundle, persistableBundle);
    }

    @Override
    public void onCreateContextMenu(ContextMenu contextMenu, View view, ContextMenu.ContextMenuInfo contextMenuInfo) {
        this.mProxyActivity.zeusSuperOnCreateContextMenu(contextMenu, view, contextMenuInfo);
    }

    @Override
    public CharSequence onCreateDescription() {
        return this.mProxyActivity.zeusSuperOnCreateDescription();
    }

    @Override
    protected Dialog onCreateDialog(int i) {
        return this.mProxyActivity.zeusSuperOnCreateDialog(i);
    }

    @Override
    protected Dialog onCreateDialog(int i, Bundle bundle) {
        return this.mProxyActivity.zeusSuperOnCreateDialog(i, bundle);
    }

    @Override
    public void onCreateNavigateUpTaskStack(TaskStackBuilder taskStackBuilder) {
        this.mProxyActivity.zeusSuperOnCreateNavigateUpTaskStack(taskStackBuilder);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        return this.mProxyActivity.zeusSuperOnCreateOptionsMenu(menu);
    }

    @Override
    public boolean onCreatePanelMenu(int i, Menu menu) {
        return this.mProxyActivity.zeusSuperOnCreatePanelMenu(i, menu);
    }

    @Override
    public View onCreatePanelView(int i) {
        return this.mProxyActivity.zeusSuperOnCreatePanelView(i);
    }

    @Override
    public boolean onCreateThumbnail(Bitmap bitmap, Canvas canvas) {
        return this.mProxyActivity.zeusSuperOnCreateThumbnail(bitmap, canvas);
    }

    @Override
    public View onCreateView(View view, String str, Context context, AttributeSet attributeSet) {
        return this.mProxyActivity.zeusSuperOnCreateView(view, str, context, attributeSet);
    }

    @Override
    public View onCreateView(String str, Context context, AttributeSet attributeSet) {
        return this.mProxyActivity.zeusSuperOnCreateView(str, context, attributeSet);
    }

    @Override
    protected void onDestroy() {
        this.mProxyActivity.zeusSuperOnDestroy();
    }

    @Override
    public void onDetachedFromWindow() {
        this.mProxyActivity.zeusSuperOnDetachedFromWindow();
    }

    @Override
    public void onEnterAnimationComplete() {
        this.mProxyActivity.zeusSuperOnEnterAnimationComplete();
    }

    @Override
    public boolean onGenericMotionEvent(MotionEvent motionEvent) {
        return this.mProxyActivity.zeusSuperOnGenericMotionEvent(motionEvent);
    }

    @Override
    public void onGetDirectActions(CancellationSignal cancellationSignal, Consumer consumer) {
        this.mProxyActivity.zeusSuperOnGetDirectActions(cancellationSignal, consumer);
    }

    @Override
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        return this.mProxyActivity.zeusSuperOnKeyDown(i, keyEvent);
    }

    @Override
    public boolean onKeyLongPress(int i, KeyEvent keyEvent) {
        return this.mProxyActivity.zeusSuperOnKeyLongPress(i, keyEvent);
    }

    @Override
    public boolean onKeyMultiple(int i, int i2, KeyEvent keyEvent) {
        return this.mProxyActivity.zeusSuperOnKeyMultiple(i, i2, keyEvent);
    }

    @Override
    public boolean onKeyShortcut(int i, KeyEvent keyEvent) {
        return this.mProxyActivity.zeusSuperOnKeyShortcut(i, keyEvent);
    }

    @Override
    public boolean onKeyUp(int i, KeyEvent keyEvent) {
        return this.mProxyActivity.zeusSuperOnKeyUp(i, keyEvent);
    }

    @Override
    public void onLocalVoiceInteractionStarted() {
        this.mProxyActivity.zeusSuperOnLocalVoiceInteractionStarted();
    }

    @Override
    public void onLocalVoiceInteractionStopped() {
        this.mProxyActivity.zeusSuperOnLocalVoiceInteractionStopped();
    }

    @Override
    public void onLowMemory() {
        this.mProxyActivity.zeusSuperOnLowMemory();
    }

    @Override
    public boolean onMenuOpened(int i, Menu menu) {
        return this.mProxyActivity.zeusSuperOnMenuOpened(i, menu);
    }

    @Override
    public void onMultiWindowModeChanged(boolean z) {
        this.mProxyActivity.zeusSuperOnMultiWindowModeChanged(z);
    }

    @Override
    public void onMultiWindowModeChanged(boolean z, Configuration configuration) {
        this.mProxyActivity.zeusSuperOnMultiWindowModeChanged(z, configuration);
    }

    @Override
    public boolean onNavigateUp() {
        return this.mProxyActivity.zeusSuperOnNavigateUp();
    }

    @Override
    public boolean onNavigateUpFromChild(Activity activity) {
        return this.mProxyActivity.zeusSuperOnNavigateUpFromChild(activity);
    }

    @Override
    protected void onNewIntent(Intent intent) {
        this.mProxyActivity.zeusSuperOnNewIntent(intent);
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem menuItem) {
        return this.mProxyActivity.zeusSuperOnOptionsItemSelected(menuItem);
    }

    @Override
    public void onOptionsMenuClosed(Menu menu) {
        this.mProxyActivity.zeusSuperOnOptionsMenuClosed(menu);
    }

    @Override
    public void onPanelClosed(int i, Menu menu) {
        this.mProxyActivity.zeusSuperOnPanelClosed(i, menu);
    }

    @Override
    protected void onPause() {
        this.mProxyActivity.zeusSuperOnPause();
    }

    @Override
    public void onPerformDirectAction(String str, Bundle bundle, CancellationSignal cancellationSignal, Consumer consumer) {
        this.mProxyActivity.zeusSuperOnPerformDirectAction(str, bundle, cancellationSignal, consumer);
    }

    @Override
    public void onPictureInPictureModeChanged(boolean z) {
        this.mProxyActivity.zeusSuperOnPictureInPictureModeChanged(z);
    }

    @Override
    public void onPictureInPictureModeChanged(boolean z, Configuration configuration) {
        this.mProxyActivity.zeusSuperOnPictureInPictureModeChanged(z, configuration);
    }

    @Override
    public boolean onPictureInPictureRequested() {
        return this.mProxyActivity.zeusSuperOnPictureInPictureRequested();
    }

    @Override
    protected void onPostCreate(Bundle bundle) {
        this.mProxyActivity.zeusSuperOnPostCreate(bundle);
    }

    @Override
    public void onPostCreate(Bundle bundle, PersistableBundle persistableBundle) {
        this.mProxyActivity.zeusSuperOnPostCreate(bundle, persistableBundle);
    }

    @Override
    protected void onPostResume() {
        this.mProxyActivity.zeusSuperOnPostResume();
    }

    @Override
    protected void onPrepareDialog(int i, Dialog dialog) {
        this.mProxyActivity.zeusSuperOnPrepareDialog(i, dialog);
    }

    @Override
    protected void onPrepareDialog(int i, Dialog dialog, Bundle bundle) {
        this.mProxyActivity.zeusSuperOnPrepareDialog(i, dialog, bundle);
    }

    @Override
    public void onPrepareNavigateUpTaskStack(TaskStackBuilder taskStackBuilder) {
        this.mProxyActivity.zeusSuperOnPrepareNavigateUpTaskStack(taskStackBuilder);
    }

    @Override
    public boolean onPrepareOptionsMenu(Menu menu) {
        return this.mProxyActivity.zeusSuperOnPrepareOptionsMenu(menu);
    }

    @Override
    public boolean onPreparePanel(int i, View view, Menu menu) {
        return this.mProxyActivity.zeusSuperOnPreparePanel(i, view, menu);
    }

    @Override
    public void onProvideAssistContent(AssistContent assistContent) {
        this.mProxyActivity.zeusSuperOnProvideAssistContent(assistContent);
    }

    @Override
    public void onProvideAssistData(Bundle bundle) {
        this.mProxyActivity.zeusSuperOnProvideAssistData(bundle);
    }

    @Override
    public void onProvideKeyboardShortcuts(List list, Menu menu, int i) {
        this.mProxyActivity.zeusSuperOnProvideKeyboardShortcuts(list, menu, i);
    }

    @Override
    public Uri onProvideReferrer() {
        return this.mProxyActivity.zeusSuperOnProvideReferrer();
    }

    @Override
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        this.mProxyActivity.zeusSuperOnRequestPermissionsResult(i, strArr, iArr);
    }

    @Override
    protected void onRestart() {
        this.mProxyActivity.zeusSuperOnRestart();
    }

    @Override
    protected void onRestoreInstanceState(Bundle bundle) {
        try {
            this.mProxyActivity.zeusSuperOnRestoreInstanceState(bundle);
        } catch (Throwable unused) {
        }
    }

    @Override
    public void onRestoreInstanceState(Bundle bundle, PersistableBundle persistableBundle) {
        try {
            this.mProxyActivity.zeusSuperOnRestoreInstanceState(bundle, persistableBundle);
        } catch (Throwable unused) {
        }
    }

    @Override
    protected void onResume() {
        this.mProxyActivity.zeusSuperOnResume();
    }

    @Override
    protected void onSaveInstanceState(Bundle bundle) {
        this.mProxyActivity.zeusSuperOnSaveInstanceState(bundle);
    }

    @Override
    public void onSaveInstanceState(Bundle bundle, PersistableBundle persistableBundle) {
        this.mProxyActivity.zeusSuperOnSaveInstanceState(bundle, persistableBundle);
    }

    @Override
    public boolean onSearchRequested() {
        return this.mProxyActivity.zeusSuperOnSearchRequested();
    }

    @Override
    public boolean onSearchRequested(SearchEvent searchEvent) {
        return this.mProxyActivity.zeusSuperOnSearchRequested(searchEvent);
    }

    @Override
    protected void onStart() {
        this.mProxyActivity.zeusSuperOnStart();
    }

    @Override
    public void onStateNotSaved() {
        this.mProxyActivity.zeusSuperOnStateNotSaved();
    }

    @Override
    protected void onStop() {
        this.mProxyActivity.zeusSuperOnStop();
    }

    @Override
    protected void onTitleChanged(CharSequence charSequence, int i) {
        this.mProxyActivity.zeusSuperOnTitleChanged(charSequence, i);
    }

    @Override
    public void onTopResumedActivityChanged(boolean z) {
        this.mProxyActivity.zeusSuperOnTopResumedActivityChanged(z);
    }

    @Override
    public boolean onTouchEvent(MotionEvent motionEvent) {
        return this.mProxyActivity.zeusSuperOnTouchEvent(motionEvent);
    }

    @Override
    public boolean onTrackballEvent(MotionEvent motionEvent) {
        return this.mProxyActivity.zeusSuperOnTrackballEvent(motionEvent);
    }

    @Override
    public void onTrimMemory(int i) {
        this.mProxyActivity.zeusSuperOnTrimMemory(i);
    }

    @Override
    public void onUserInteraction() {
        this.mProxyActivity.zeusSuperOnUserInteraction();
    }

    @Override
    protected void onUserLeaveHint() {
        this.mProxyActivity.zeusSuperOnUserLeaveHint();
    }

    @Override
    public void onVisibleBehindCanceled() {
        this.mProxyActivity.zeusSuperOnVisibleBehindCanceled();
    }

    @Override
    public void onWindowAttributesChanged(WindowManager.LayoutParams layoutParams) {
        this.mProxyActivity.zeusSuperOnWindowAttributesChanged(layoutParams);
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        this.mProxyActivity.zeusSuperOnWindowFocusChanged(z);
    }

    @Override
    public ActionMode onWindowStartingActionMode(ActionMode.Callback callback) {
        return this.mProxyActivity.zeusSuperOnWindowStartingActionMode(callback);
    }

    @Override
    public ActionMode onWindowStartingActionMode(ActionMode.Callback callback, int i) {
        return this.mProxyActivity.zeusSuperOnWindowStartingActionMode(callback, i);
    }

    @Override
    public void openContextMenu(View view) {
        this.mProxyActivity.zeusSuperOpenContextMenu(view);
    }

    @Override
    public void openOptionsMenu() {
        this.mProxyActivity.zeusSuperOpenOptionsMenu();
    }

    @Override
    public void overridePendingTransition(int i, int i2) {
        this.mProxyActivity.zeusSuperOverridePendingTransition(i, i2);
    }

    @Override
    public void postponeEnterTransition() {
        this.mProxyActivity.zeusSuperPostponeEnterTransition();
    }

    @Override
    public void recreate() {
        this.mProxyActivity.zeusSuperRecreate();
    }

    @Override
    public void registerActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        this.mProxyActivity.zeusSuperRegisterActivityLifecycleCallbacks(activityLifecycleCallbacks);
    }

    @Override
    public void registerForContextMenu(View view) {
        this.mProxyActivity.zeusSuperRegisterForContextMenu(view);
    }

    @Override
    public boolean releaseInstance() {
        return this.mProxyActivity.zeusSuperReleaseInstance();
    }

    @Override
    public void reportFullyDrawn() {
        this.mProxyActivity.zeusSuperReportFullyDrawn();
    }

    @Override
    public DragAndDropPermissions requestDragAndDropPermissions(DragEvent dragEvent) {
        return this.mProxyActivity.zeusSuperRequestDragAndDropPermissions(dragEvent);
    }

    @Override
    public boolean requestVisibleBehind(boolean z) {
        return this.mProxyActivity.zeusSuperRequestVisibleBehind(z);
    }

    @Override
    public void setActionBar(Toolbar toolbar) {
        this.mProxyActivity.zeusSuperSetActionBar(toolbar);
    }

    @Override
    public void setContentTransitionManager(TransitionManager transitionManager) {
        this.mProxyActivity.zeusSuperSetContentTransitionManager(transitionManager);
    }

    @Override
    public void setContentView(int i) {
        ZeusTransformUtils.clearConstructorCache();
        this.mProxyActivity.zeusSuperSetContentView(i);
        ZeusTransformUtils.clearConstructorCache();
        c.a(this, findViewById(R.id.content));
    }

    @Override
    public void setContentView(View view) {
        this.mProxyActivity.zeusSuperSetContentView(view);
    }

    @Override
    public void setContentView(View view, ViewGroup.LayoutParams layoutParams) {
        this.mProxyActivity.zeusSuperSetContentView(view, layoutParams);
    }

    @Override
    public void setEnterSharedElementCallback(SharedElementCallback sharedElementCallback) {
        this.mProxyActivity.zeusSuperSetEnterSharedElementCallback(sharedElementCallback);
    }

    @Override
    public void setExitSharedElementCallback(SharedElementCallback sharedElementCallback) {
        this.mProxyActivity.zeusSuperSetExitSharedElementCallback(sharedElementCallback);
    }

    @Override
    public void setFinishOnTouchOutside(boolean z) {
        this.mProxyActivity.zeusSuperSetFinishOnTouchOutside(z);
    }

    @Override
    public void setImmersive(boolean z) {
        this.mProxyActivity.zeusSuperSetImmersive(z);
    }

    @Override
    public void setInheritShowWhenLocked(boolean z) {
        this.mProxyActivity.zeusSuperSetInheritShowWhenLocked(z);
    }

    @Override
    public void setIntent(Intent intent) {
        this.mProxyActivity.zeusSuperSetIntent(intent);
    }

    @Override
    public void setLocusContext(LocusId locusId, Bundle bundle) {
        this.mProxyActivity.zeusSuperSetLocusContext(locusId, bundle);
    }

    @Override
    public void setPictureInPictureParams(PictureInPictureParams pictureInPictureParams) {
        this.mProxyActivity.zeusSuperSetPictureInPictureParams(pictureInPictureParams);
    }

    @Override
    public void setRequestedOrientation(int i) {
        this.mProxyActivity.zeusSuperSetRequestedOrientation(i);
    }

    @Override
    public void setShowWhenLocked(boolean z) {
        this.mProxyActivity.zeusSuperSetShowWhenLocked(z);
    }

    @Override
    public void setTaskDescription(ActivityManager.TaskDescription taskDescription) {
        this.mProxyActivity.zeusSuperSetTaskDescription(taskDescription);
    }

    @Override
    public void setTheme(int i) {
        this.mProxyActivity.zeusSuperSetTheme(i);
    }

    @Override
    public void setTitle(int i) {
        this.mProxyActivity.zeusSuperSetTitle(i);
    }

    @Override
    public void setTitle(CharSequence charSequence) {
        this.mProxyActivity.zeusSuperSetTitle(charSequence);
    }

    @Override
    public void setTitleColor(int i) {
        this.mProxyActivity.zeusSuperSetTitleColor(i);
    }

    @Override
    public boolean setTranslucent(boolean z) {
        return this.mProxyActivity.zeusSuperSetTranslucent(z);
    }

    @Override
    public void setTurnScreenOn(boolean z) {
        this.mProxyActivity.zeusSuperSetTurnScreenOn(z);
    }

    @Override
    public void setVisible(boolean z) {
        this.mProxyActivity.zeusSuperSetVisible(z);
    }

    @Override
    public void setVrModeEnabled(boolean z, ComponentName componentName) {
        this.mProxyActivity.zeusSuperSetVrModeEnabled(z, componentName);
    }

    @Override
    public boolean shouldShowRequestPermissionRationale(String str) {
        return this.mProxyActivity.zeusSuperShouldShowRequestPermissionRationale(str);
    }

    @Override
    public boolean shouldUpRecreateTask(Intent intent) {
        return this.mProxyActivity.zeusSuperShouldUpRecreateTask(intent);
    }

    @Override
    public boolean showAssist(Bundle bundle) {
        return this.mProxyActivity.zeusSuperShowAssist(bundle);
    }

    @Override
    public void showLockTaskEscapeMessage() {
        this.mProxyActivity.zeusSuperShowLockTaskEscapeMessage();
    }

    @Override
    public ActionMode startActionMode(ActionMode.Callback callback) {
        return this.mProxyActivity.zeusSuperStartActionMode(callback);
    }

    @Override
    public ActionMode startActionMode(ActionMode.Callback callback, int i) {
        return this.mProxyActivity.zeusSuperStartActionMode(callback, i);
    }

    @Override
    public void startActivities(Intent[] intentArr) {
        this.mProxyActivity.zeusSuperStartActivities(intentArr);
    }

    @Override
    public void startActivities(Intent[] intentArr, Bundle bundle) {
        this.mProxyActivity.zeusSuperStartActivities(intentArr, bundle);
    }

    @Override
    public void startActivity(Intent intent) {
        this.mProxyActivity.zeusSuperStartActivity(intent);
    }

    @Override
    public void startActivity(Intent intent, Bundle bundle) {
        this.mProxyActivity.zeusSuperStartActivity(intent, bundle);
    }

    @Override
    public void startActivityForResult(Intent intent, int i) {
        this.mProxyActivity.zeusSuperStartActivityForResult(intent, i);
    }

    @Override
    public void startActivityForResult(Intent intent, int i, Bundle bundle) {
        this.mProxyActivity.zeusSuperStartActivityForResult(intent, i, bundle);
    }

    @Override
    public void startActivityFromChild(Activity activity, Intent intent, int i) {
        this.mProxyActivity.zeusSuperStartActivityFromChild(activity, intent, i);
    }

    @Override
    public void startActivityFromChild(Activity activity, Intent intent, int i, Bundle bundle) {
        this.mProxyActivity.zeusSuperStartActivityFromChild(activity, intent, i, bundle);
    }

    @Override
    public void startActivityFromFragment(Fragment fragment, Intent intent, int i) {
        this.mProxyActivity.zeusSuperStartActivityFromFragment(fragment, intent, i);
    }

    @Override
    public void startActivityFromFragment(Fragment fragment, Intent intent, int i, Bundle bundle) {
        this.mProxyActivity.zeusSuperStartActivityFromFragment(fragment, intent, i, bundle);
    }

    @Override
    public boolean startActivityIfNeeded(Intent intent, int i) {
        return this.mProxyActivity.zeusSuperStartActivityIfNeeded(intent, i);
    }

    @Override
    public boolean startActivityIfNeeded(Intent intent, int i, Bundle bundle) {
        return this.mProxyActivity.zeusSuperStartActivityIfNeeded(intent, i, bundle);
    }

    @Override
    public void startIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3) {
        this.mProxyActivity.zeusSuperStartIntentSender(intentSender, intent, i, i2, i3);
    }

    @Override
    public void startIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3, Bundle bundle) {
        this.mProxyActivity.zeusSuperStartIntentSender(intentSender, intent, i, i2, i3, bundle);
    }

    @Override
    public void startIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) {
        this.mProxyActivity.zeusSuperStartIntentSenderForResult(intentSender, i, intent, i2, i3, i4);
    }

    @Override
    public void startIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) {
        this.mProxyActivity.zeusSuperStartIntentSenderForResult(intentSender, i, intent, i2, i3, i4, bundle);
    }

    @Override
    public void startIntentSenderFromChild(Activity activity, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) {
        this.mProxyActivity.zeusSuperStartIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4);
    }

    @Override
    public void startIntentSenderFromChild(Activity activity, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) {
        this.mProxyActivity.zeusSuperStartIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4, bundle);
    }

    @Override
    public void startLocalVoiceInteraction(Bundle bundle) {
        this.mProxyActivity.zeusSuperStartLocalVoiceInteraction(bundle);
    }

    @Override
    public void startLockTask() {
        this.mProxyActivity.zeusSuperStartLockTask();
    }

    @Override
    public void startManagingCursor(Cursor cursor) {
        this.mProxyActivity.zeusSuperStartManagingCursor(cursor);
    }

    @Override
    public boolean startNextMatchingActivity(Intent intent) {
        return this.mProxyActivity.zeusSuperStartNextMatchingActivity(intent);
    }

    @Override
    public boolean startNextMatchingActivity(Intent intent, Bundle bundle) {
        return this.mProxyActivity.zeusSuperStartNextMatchingActivity(intent, bundle);
    }

    @Override
    public void startPostponedEnterTransition() {
        this.mProxyActivity.zeusSuperStartPostponedEnterTransition();
    }

    @Override
    public void startSearch(String str, boolean z, Bundle bundle, boolean z2) {
        this.mProxyActivity.zeusSuperStartSearch(str, z, bundle, z2);
    }

    @Override
    public void stopLocalVoiceInteraction() {
        this.mProxyActivity.zeusSuperStopLocalVoiceInteraction();
    }

    @Override
    public void stopLockTask() {
        this.mProxyActivity.zeusSuperStopLockTask();
    }

    @Override
    public void stopManagingCursor(Cursor cursor) {
        this.mProxyActivity.zeusSuperStopManagingCursor(cursor);
    }

    @Override
    public void takeKeyEvents(boolean z) {
        this.mProxyActivity.zeusSuperTakeKeyEvents(z);
    }

    @Override
    public void triggerSearch(String str, Bundle bundle) {
        this.mProxyActivity.zeusSuperTriggerSearch(str, bundle);
    }

    @Override
    public void unregisterActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        this.mProxyActivity.zeusSuperUnregisterActivityLifecycleCallbacks(activityLifecycleCallbacks);
    }

    @Override
    public void unregisterForContextMenu(View view) {
        this.mProxyActivity.zeusSuperUnregisterForContextMenu(view);
    }

    public boolean convertToTranslucent(Activity.TranslucentConversionListener translucentConversionListener, ActivityOptions activityOptions) {
        return this.mProxyActivity.zeusSuperConvertToTranslucent(translucentConversionListener, activityOptions);
    }

    @Override
    public void setPluginProxyActivity(b bVar, Plugin plugin) {
        this.mProxyActivity = (GenerateProxyAppCompatActivity) bVar;
        this.mPlugin = plugin;
    }

    @Override
    public void _requestPermissions(String[] strArr, int i) {
        this.mProxyActivity.requestPermissions(strArr, i);
    }

    @Override
    public void setProxyTheme2Plugin(int i) {
        try {
            super.setTheme(i);
        } catch (Exception unused) {
        }
    }

    @Override
    public android.support.v4.app.FragmentManager getSupportFragmentManager() {
        return this.mProxyActivity.zeusSuperGetSupportFragmentManager();
    }

    @Override
    public android.support.v7.app.ActionBar getSupportActionBar() {
        return this.mProxyActivity.zeusSuperGetSupportActionBar();
    }

    @Override
    public Lifecycle getLifecycle() {
        if (!this.hasInit) {
            try {
                LifecycleRegistry lifecycleRegistry = new LifecycleRegistry(this);
                try {
                    Field declaredField = lifecycleRegistry.getClass().getDeclaredField("mEnforceMainThread");
                    declaredField.setAccessible(true);
                    declaredField.set(lifecycleRegistry, Boolean.FALSE);
                } catch (Throwable unused) {
                }
                return lifecycleRegistry;
            } catch (Throwable unused2) {
            }
        }
        return super.getLifecycle();
    }
}
