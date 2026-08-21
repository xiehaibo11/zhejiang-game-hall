package com.bytedance.pangle.wrapper;

import android.app.ActionBar;
import android.app.Activity;
import android.app.ActivityManager;
import android.app.Application;
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
import android.arch.lifecycle.ViewModelStore;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.content.LocusId;
import android.content.SharedPreferences;
import android.content.res.Configuration;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.net.Uri;
import android.os.Bundle;
import android.os.CancellationSignal;
import android.os.PersistableBundle;
import android.support.v4.app.FragmentActivity;
import android.support.v4.app.SupportActivity;
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
import com.bytedance.pangle.PluginContext;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.List;
import java.util.function.Consumer;

public abstract class GenerateFragmentActivityWrapper extends FragmentActivity implements a {
    public FragmentActivity mOriginActivity;
    public PluginContext pluginContext;

    @Override
    public Intent getIntent() {
        return this.mOriginActivity.getIntent();
    }

    @Override
    public void setIntent(Intent intent) {
        this.mOriginActivity.setIntent(intent);
    }

    @Override
    public void setLocusContext(LocusId locusId, Bundle bundle) {
        this.mOriginActivity.setLocusContext(locusId, bundle);
    }

    @Override
    public WindowManager getWindowManager() {
        return this.mOriginActivity.getWindowManager();
    }

    @Override
    public Window getWindow() {
        return this.mOriginActivity.getWindow();
    }

    @Override
    public LoaderManager getLoaderManager() {
        return this.mOriginActivity.getLoaderManager();
    }

    @Override
    public View getCurrentFocus() {
        return this.mOriginActivity.getCurrentFocus();
    }

    @Override
    public void registerActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        this.mOriginActivity.registerActivityLifecycleCallbacks(activityLifecycleCallbacks);
    }

    @Override
    public void unregisterActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        this.mOriginActivity.unregisterActivityLifecycleCallbacks(activityLifecycleCallbacks);
    }

    @Override
    public void onCreate(Bundle bundle, PersistableBundle persistableBundle) {
        this.mOriginActivity.onCreate(bundle, persistableBundle);
    }

    @Override
    public void onRestoreInstanceState(Bundle bundle, PersistableBundle persistableBundle) {
        this.mOriginActivity.onRestoreInstanceState(bundle, persistableBundle);
    }

    @Override
    public void onPostCreate(Bundle bundle, PersistableBundle persistableBundle) {
        this.mOriginActivity.onPostCreate(bundle, persistableBundle);
    }

    @Override
    public void onStateNotSaved() {
        this.mOriginActivity.onStateNotSaved();
    }

    @Override
    public void onTopResumedActivityChanged(boolean z) {
        this.mOriginActivity.onTopResumedActivityChanged(z);
    }

    @Override
    public boolean isVoiceInteraction() {
        return this.mOriginActivity.isVoiceInteraction();
    }

    @Override
    public boolean isVoiceInteractionRoot() {
        return this.mOriginActivity.isVoiceInteractionRoot();
    }

    @Override
    public VoiceInteractor getVoiceInteractor() {
        return this.mOriginActivity.getVoiceInteractor();
    }

    @Override
    public boolean isLocalVoiceInteractionSupported() {
        return this.mOriginActivity.isLocalVoiceInteractionSupported();
    }

    @Override
    public void startLocalVoiceInteraction(Bundle bundle) {
        this.mOriginActivity.startLocalVoiceInteraction(bundle);
    }

    @Override
    public void onLocalVoiceInteractionStarted() {
        this.mOriginActivity.onLocalVoiceInteractionStarted();
    }

    @Override
    public void onLocalVoiceInteractionStopped() {
        this.mOriginActivity.onLocalVoiceInteractionStopped();
    }

    @Override
    public void stopLocalVoiceInteraction() {
        this.mOriginActivity.stopLocalVoiceInteraction();
    }

    @Override
    public void onSaveInstanceState(Bundle bundle, PersistableBundle persistableBundle) {
        this.mOriginActivity.onSaveInstanceState(bundle, persistableBundle);
    }

    @Override
    public boolean onCreateThumbnail(Bitmap bitmap, Canvas canvas) {
        return this.mOriginActivity.onCreateThumbnail(bitmap, canvas);
    }

    @Override
    public CharSequence onCreateDescription() {
        return this.mOriginActivity.onCreateDescription();
    }

    @Override
    public void onProvideAssistData(Bundle bundle) {
        this.mOriginActivity.onProvideAssistData(bundle);
    }

    @Override
    public void onProvideAssistContent(AssistContent assistContent) {
        this.mOriginActivity.onProvideAssistContent(assistContent);
    }

    @Override
    public void onGetDirectActions(CancellationSignal cancellationSignal, Consumer consumer) {
        this.mOriginActivity.onGetDirectActions(cancellationSignal, consumer);
    }

    @Override
    public void onPerformDirectAction(String str, Bundle bundle, CancellationSignal cancellationSignal, Consumer consumer) {
        this.mOriginActivity.onPerformDirectAction(str, bundle, cancellationSignal, consumer);
    }

    @Override
    public void onProvideKeyboardShortcuts(List list, Menu menu, int i) {
        this.mOriginActivity.onProvideKeyboardShortcuts(list, menu, i);
    }

    @Override
    public boolean showAssist(Bundle bundle) {
        return this.mOriginActivity.showAssist(bundle);
    }

    @Override
    public void reportFullyDrawn() {
        this.mOriginActivity.reportFullyDrawn();
    }

    @Override
    public void onMultiWindowModeChanged(boolean z, Configuration configuration) {
        this.mOriginActivity.onMultiWindowModeChanged(z, configuration);
    }

    @Override
    public void onMultiWindowModeChanged(boolean z) {
        this.mOriginActivity.onMultiWindowModeChanged(z);
    }

    @Override
    public boolean isInMultiWindowMode() {
        return this.mOriginActivity.isInMultiWindowMode();
    }

    @Override
    public void onPictureInPictureModeChanged(boolean z, Configuration configuration) {
        this.mOriginActivity.onPictureInPictureModeChanged(z, configuration);
    }

    @Override
    public void onPictureInPictureModeChanged(boolean z) {
        this.mOriginActivity.onPictureInPictureModeChanged(z);
    }

    @Override
    public boolean isInPictureInPictureMode() {
        return this.mOriginActivity.isInPictureInPictureMode();
    }

    @Override
    public void enterPictureInPictureMode() {
        this.mOriginActivity.enterPictureInPictureMode();
    }

    @Override
    public boolean enterPictureInPictureMode(PictureInPictureParams pictureInPictureParams) {
        return this.mOriginActivity.enterPictureInPictureMode(pictureInPictureParams);
    }

    @Override
    public void setPictureInPictureParams(PictureInPictureParams pictureInPictureParams) {
        this.mOriginActivity.setPictureInPictureParams(pictureInPictureParams);
    }

    @Override
    public int getMaxNumPictureInPictureActions() {
        return this.mOriginActivity.getMaxNumPictureInPictureActions();
    }

    @Override
    public boolean onPictureInPictureRequested() {
        return this.mOriginActivity.onPictureInPictureRequested();
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        this.mOriginActivity.onConfigurationChanged(configuration);
    }

    @Override
    public int getChangingConfigurations() {
        return this.mOriginActivity.getChangingConfigurations();
    }

    @Override
    public Object getLastNonConfigurationInstance() {
        return this.mOriginActivity.getLastNonConfigurationInstance();
    }

    @Override
    public void onLowMemory() {
        this.mOriginActivity.onLowMemory();
    }

    @Override
    public void onTrimMemory(int i) {
        this.mOriginActivity.onTrimMemory(i);
    }

    @Override
    public FragmentManager getFragmentManager() {
        return this.mOriginActivity.getFragmentManager();
    }

    @Override
    public void onAttachFragment(Fragment fragment) {
        this.mOriginActivity.onAttachFragment(fragment);
    }

    @Override
    public void startManagingCursor(Cursor cursor) {
        this.mOriginActivity.startManagingCursor(cursor);
    }

    @Override
    public void stopManagingCursor(Cursor cursor) {
        this.mOriginActivity.stopManagingCursor(cursor);
    }

    @Override
    public View findViewById(int i) {
        return this.mOriginActivity.findViewById(i);
    }

    @Override
    public ActionBar getActionBar() {
        return this.mOriginActivity.getActionBar();
    }

    @Override
    public void setActionBar(Toolbar toolbar) {
        this.mOriginActivity.setActionBar(toolbar);
    }

    @Override
    public void setContentView(int i) {
        this.mOriginActivity.setContentView(i);
    }

    @Override
    public void setContentView(View view) {
        this.mOriginActivity.setContentView(view);
    }

    @Override
    public void setContentView(View view, ViewGroup.LayoutParams layoutParams) {
        this.mOriginActivity.setContentView(view, layoutParams);
    }

    @Override
    public void addContentView(View view, ViewGroup.LayoutParams layoutParams) {
        this.mOriginActivity.addContentView(view, layoutParams);
    }

    @Override
    public TransitionManager getContentTransitionManager() {
        return this.mOriginActivity.getContentTransitionManager();
    }

    @Override
    public void setContentTransitionManager(TransitionManager transitionManager) {
        this.mOriginActivity.setContentTransitionManager(transitionManager);
    }

    @Override
    public Scene getContentScene() {
        return this.mOriginActivity.getContentScene();
    }

    @Override
    public void setFinishOnTouchOutside(boolean z) {
        this.mOriginActivity.setFinishOnTouchOutside(z);
    }

    @Override
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        return this.mOriginActivity.onKeyDown(i, keyEvent);
    }

    @Override
    public boolean onKeyLongPress(int i, KeyEvent keyEvent) {
        return this.mOriginActivity.onKeyLongPress(i, keyEvent);
    }

    @Override
    public boolean onKeyUp(int i, KeyEvent keyEvent) {
        return this.mOriginActivity.onKeyUp(i, keyEvent);
    }

    @Override
    public boolean onKeyMultiple(int i, int i2, KeyEvent keyEvent) {
        return this.mOriginActivity.onKeyMultiple(i, i2, keyEvent);
    }

    @Override
    public void onBackPressed() {
        this.mOriginActivity.onBackPressed();
    }

    @Override
    public boolean onKeyShortcut(int i, KeyEvent keyEvent) {
        return this.mOriginActivity.onKeyShortcut(i, keyEvent);
    }

    @Override
    public boolean onTouchEvent(MotionEvent motionEvent) {
        return this.mOriginActivity.onTouchEvent(motionEvent);
    }

    @Override
    public boolean onTrackballEvent(MotionEvent motionEvent) {
        return this.mOriginActivity.onTrackballEvent(motionEvent);
    }

    @Override
    public boolean onGenericMotionEvent(MotionEvent motionEvent) {
        return this.mOriginActivity.onGenericMotionEvent(motionEvent);
    }

    @Override
    public void onUserInteraction() {
        this.mOriginActivity.onUserInteraction();
    }

    @Override
    public void onWindowAttributesChanged(WindowManager.LayoutParams layoutParams) {
        this.mOriginActivity.onWindowAttributesChanged(layoutParams);
    }

    @Override
    public void onContentChanged() {
        this.mOriginActivity.onContentChanged();
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        this.mOriginActivity.onWindowFocusChanged(z);
    }

    @Override
    public void onAttachedToWindow() {
        this.mOriginActivity.onAttachedToWindow();
    }

    @Override
    public void onDetachedFromWindow() {
        this.mOriginActivity.onDetachedFromWindow();
    }

    @Override
    public boolean hasWindowFocus() {
        return this.mOriginActivity.hasWindowFocus();
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        return this.mOriginActivity.dispatchKeyEvent(keyEvent);
    }

    @Override
    public boolean dispatchKeyShortcutEvent(KeyEvent keyEvent) {
        return this.mOriginActivity.dispatchKeyShortcutEvent(keyEvent);
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        return this.mOriginActivity.dispatchTouchEvent(motionEvent);
    }

    @Override
    public boolean dispatchTrackballEvent(MotionEvent motionEvent) {
        return this.mOriginActivity.dispatchTrackballEvent(motionEvent);
    }

    @Override
    public boolean dispatchGenericMotionEvent(MotionEvent motionEvent) {
        return this.mOriginActivity.dispatchGenericMotionEvent(motionEvent);
    }

    @Override
    public boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        return this.mOriginActivity.dispatchPopulateAccessibilityEvent(accessibilityEvent);
    }

    @Override
    public View onCreatePanelView(int i) {
        return this.mOriginActivity.onCreatePanelView(i);
    }

    @Override
    public boolean onCreatePanelMenu(int i, Menu menu) {
        return this.mOriginActivity.onCreatePanelMenu(i, menu);
    }

    @Override
    public boolean onPreparePanel(int i, View view, Menu menu) {
        return this.mOriginActivity.onPreparePanel(i, view, menu);
    }

    @Override
    public boolean onMenuOpened(int i, Menu menu) {
        return this.mOriginActivity.onMenuOpened(i, menu);
    }

    @Override
    public boolean onMenuItemSelected(int i, MenuItem menuItem) {
        return this.mOriginActivity.onMenuItemSelected(i, menuItem);
    }

    @Override
    public void onPanelClosed(int i, Menu menu) {
        this.mOriginActivity.onPanelClosed(i, menu);
    }

    @Override
    public void invalidateOptionsMenu() {
        this.mOriginActivity.invalidateOptionsMenu();
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        return this.mOriginActivity.onCreateOptionsMenu(menu);
    }

    @Override
    public boolean onPrepareOptionsMenu(Menu menu) {
        return this.mOriginActivity.onPrepareOptionsMenu(menu);
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem menuItem) {
        return this.mOriginActivity.onOptionsItemSelected(menuItem);
    }

    @Override
    public boolean onNavigateUp() {
        return this.mOriginActivity.onNavigateUp();
    }

    @Override
    public boolean onNavigateUpFromChild(Activity activity) {
        return this.mOriginActivity.onNavigateUpFromChild(activity);
    }

    @Override
    public void onCreateNavigateUpTaskStack(TaskStackBuilder taskStackBuilder) {
        this.mOriginActivity.onCreateNavigateUpTaskStack(taskStackBuilder);
    }

    @Override
    public void onPrepareNavigateUpTaskStack(TaskStackBuilder taskStackBuilder) {
        this.mOriginActivity.onPrepareNavigateUpTaskStack(taskStackBuilder);
    }

    @Override
    public void onOptionsMenuClosed(Menu menu) {
        this.mOriginActivity.onOptionsMenuClosed(menu);
    }

    @Override
    public void openOptionsMenu() {
        this.mOriginActivity.openOptionsMenu();
    }

    @Override
    public void closeOptionsMenu() {
        this.mOriginActivity.closeOptionsMenu();
    }

    @Override
    public void onCreateContextMenu(ContextMenu contextMenu, View view, ContextMenu.ContextMenuInfo contextMenuInfo) {
        this.mOriginActivity.onCreateContextMenu(contextMenu, view, contextMenuInfo);
    }

    @Override
    public void registerForContextMenu(View view) {
        this.mOriginActivity.registerForContextMenu(view);
    }

    @Override
    public void unregisterForContextMenu(View view) {
        this.mOriginActivity.unregisterForContextMenu(view);
    }

    @Override
    public void openContextMenu(View view) {
        this.mOriginActivity.openContextMenu(view);
    }

    @Override
    public void closeContextMenu() {
        this.mOriginActivity.closeContextMenu();
    }

    @Override
    public boolean onContextItemSelected(MenuItem menuItem) {
        return this.mOriginActivity.onContextItemSelected(menuItem);
    }

    @Override
    public void onContextMenuClosed(Menu menu) {
        this.mOriginActivity.onContextMenuClosed(menu);
    }

    @Override
    public boolean onSearchRequested(SearchEvent searchEvent) {
        return this.mOriginActivity.onSearchRequested(searchEvent);
    }

    @Override
    public boolean onSearchRequested() {
        return this.mOriginActivity.onSearchRequested();
    }

    @Override
    public void startSearch(String str, boolean z, Bundle bundle, boolean z2) {
        this.mOriginActivity.startSearch(str, z, bundle, z2);
    }

    @Override
    public void triggerSearch(String str, Bundle bundle) {
        this.mOriginActivity.triggerSearch(str, bundle);
    }

    @Override
    public void takeKeyEvents(boolean z) {
        this.mOriginActivity.takeKeyEvents(z);
    }

    @Override
    public LayoutInflater getLayoutInflater() {
        return this.mOriginActivity.getLayoutInflater();
    }

    @Override
    public MenuInflater getMenuInflater() {
        return this.mOriginActivity.getMenuInflater();
    }

    @Override
    public void setTheme(int i) {
        this.mOriginActivity.setTheme(i);
    }

    @Override
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        this.mOriginActivity.onRequestPermissionsResult(i, strArr, iArr);
    }

    @Override
    public boolean shouldShowRequestPermissionRationale(String str) {
        return this.mOriginActivity.shouldShowRequestPermissionRationale(str);
    }

    @Override
    public void startActivityForResult(Intent intent, int i) {
        this.mOriginActivity.startActivityForResult(intent, i);
    }

    @Override
    public void startActivityForResult(Intent intent, int i, Bundle bundle) {
        this.mOriginActivity.startActivityForResult(intent, i, bundle);
    }

    @Override
    public boolean isActivityTransitionRunning() {
        return this.mOriginActivity.isActivityTransitionRunning();
    }

    @Override
    public void startIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) throws IntentSender.SendIntentException {
        this.mOriginActivity.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4);
    }

    @Override
    public void startIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) throws IntentSender.SendIntentException {
        this.mOriginActivity.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4, bundle);
    }

    @Override
    public void startActivity(Intent intent) {
        this.mOriginActivity.startActivity(intent);
    }

    @Override
    public void startActivity(Intent intent, Bundle bundle) {
        this.mOriginActivity.startActivity(intent, bundle);
    }

    @Override
    public void startActivities(Intent[] intentArr) {
        this.mOriginActivity.startActivities(intentArr);
    }

    @Override
    public void startActivities(Intent[] intentArr, Bundle bundle) {
        this.mOriginActivity.startActivities(intentArr, bundle);
    }

    @Override
    public void startIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3) {
        this.mOriginActivity.startIntentSender(intentSender, intent, i, i2, i3);
    }

    @Override
    public void startIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3, Bundle bundle) {
        this.mOriginActivity.startIntentSender(intentSender, intent, i, i2, i3, bundle);
    }

    @Override
    public boolean startActivityIfNeeded(Intent intent, int i) {
        return this.mOriginActivity.startActivityIfNeeded(intent, i);
    }

    @Override
    public boolean startActivityIfNeeded(Intent intent, int i, Bundle bundle) {
        return this.mOriginActivity.startActivityIfNeeded(intent, i, bundle);
    }

    @Override
    public boolean startNextMatchingActivity(Intent intent) {
        return this.mOriginActivity.startNextMatchingActivity(intent);
    }

    @Override
    public boolean startNextMatchingActivity(Intent intent, Bundle bundle) {
        return this.mOriginActivity.startNextMatchingActivity(intent, bundle);
    }

    @Override
    public void startActivityFromChild(Activity activity, Intent intent, int i) {
        this.mOriginActivity.startActivityFromChild(activity, intent, i);
    }

    @Override
    public void startActivityFromChild(Activity activity, Intent intent, int i, Bundle bundle) {
        this.mOriginActivity.startActivityFromChild(activity, intent, i, bundle);
    }

    @Override
    public void startActivityFromFragment(Fragment fragment, Intent intent, int i) {
        this.mOriginActivity.startActivityFromFragment(fragment, intent, i);
    }

    @Override
    public void startActivityFromFragment(Fragment fragment, Intent intent, int i, Bundle bundle) {
        this.mOriginActivity.startActivityFromFragment(fragment, intent, i, bundle);
    }

    @Override
    public void startIntentSenderFromChild(Activity activity, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) {
        this.mOriginActivity.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4);
    }

    @Override
    public void startIntentSenderFromChild(Activity activity, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) {
        this.mOriginActivity.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4, bundle);
    }

    @Override
    public void overridePendingTransition(int i, int i2) {
        this.mOriginActivity.overridePendingTransition(i, i2);
    }

    @Override
    public Uri getReferrer() {
        return this.mOriginActivity.getReferrer();
    }

    @Override
    public Uri onProvideReferrer() {
        return this.mOriginActivity.onProvideReferrer();
    }

    @Override
    public String getCallingPackage() {
        return this.mOriginActivity.getCallingPackage();
    }

    @Override
    public ComponentName getCallingActivity() {
        return this.mOriginActivity.getCallingActivity();
    }

    @Override
    public void setVisible(boolean z) {
        this.mOriginActivity.setVisible(z);
    }

    @Override
    public boolean isFinishing() {
        return this.mOriginActivity.isFinishing();
    }

    @Override
    public boolean isDestroyed() {
        return this.mOriginActivity.isDestroyed();
    }

    @Override
    public boolean isChangingConfigurations() {
        return this.mOriginActivity.isChangingConfigurations();
    }

    @Override
    public void recreate() {
        this.mOriginActivity.recreate();
    }

    @Override
    public void finish() {
        this.mOriginActivity.finish();
    }

    @Override
    public void finishAffinity() {
        this.mOriginActivity.finishAffinity();
    }

    @Override
    public void finishFromChild(Activity activity) {
        this.mOriginActivity.finishFromChild(activity);
    }

    @Override
    public void finishAfterTransition() {
        this.mOriginActivity.finishAfterTransition();
    }

    @Override
    public void finishActivity(int i) {
        this.mOriginActivity.finishActivity(i);
    }

    @Override
    public void finishActivityFromChild(Activity activity, int i) {
        this.mOriginActivity.finishActivityFromChild(activity, i);
    }

    @Override
    public void finishAndRemoveTask() {
        this.mOriginActivity.finishAndRemoveTask();
    }

    @Override
    public boolean releaseInstance() {
        return this.mOriginActivity.releaseInstance();
    }

    @Override
    public void onActivityReenter(int i, Intent intent) {
        this.mOriginActivity.onActivityReenter(i, intent);
    }

    @Override
    public PendingIntent createPendingResult(int i, Intent intent, int i2) {
        return this.mOriginActivity.createPendingResult(i, intent, i2);
    }

    @Override
    public void setRequestedOrientation(int i) {
        this.mOriginActivity.setRequestedOrientation(i);
    }

    @Override
    public int getRequestedOrientation() {
        return this.mOriginActivity.getRequestedOrientation();
    }

    @Override
    public int getTaskId() {
        return this.mOriginActivity.getTaskId();
    }

    @Override
    public boolean isTaskRoot() {
        return this.mOriginActivity.isTaskRoot();
    }

    @Override
    public boolean moveTaskToBack(boolean z) {
        return this.mOriginActivity.moveTaskToBack(z);
    }

    @Override
    public String getLocalClassName() {
        return this.mOriginActivity.getLocalClassName();
    }

    @Override
    public ComponentName getComponentName() {
        return this.mOriginActivity.getComponentName();
    }

    @Override
    public SharedPreferences getPreferences(int i) {
        return this.mOriginActivity.getPreferences(i);
    }

    @Override
    public Object getSystemService(String str) {
        return this.pluginContext.getSystemService(str);
    }

    @Override
    public void setTitle(CharSequence charSequence) {
        this.mOriginActivity.setTitle(charSequence);
    }

    @Override
    public void setTitle(int i) {
        this.mOriginActivity.setTitle(i);
    }

    @Override
    public void setTitleColor(int i) {
        this.mOriginActivity.setTitleColor(i);
    }

    @Override
    public void setTaskDescription(ActivityManager.TaskDescription taskDescription) {
        this.mOriginActivity.setTaskDescription(taskDescription);
    }

    @Override
    public View onCreateView(String str, Context context, AttributeSet attributeSet) {
        return this.mOriginActivity.onCreateView(str, context, attributeSet);
    }

    @Override
    public View onCreateView(View view, String str, Context context, AttributeSet attributeSet) {
        return this.mOriginActivity.onCreateView(view, str, context, attributeSet);
    }

    @Override
    public void dump(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        this.mOriginActivity.dump(str, fileDescriptor, printWriter, strArr);
    }

    @Override
    public boolean isImmersive() {
        return this.mOriginActivity.isImmersive();
    }

    @Override
    public boolean setTranslucent(boolean z) {
        return this.mOriginActivity.setTranslucent(z);
    }

    @Override
    public boolean requestVisibleBehind(boolean z) {
        return this.mOriginActivity.requestVisibleBehind(z);
    }

    @Override
    public void onEnterAnimationComplete() {
        this.mOriginActivity.onEnterAnimationComplete();
    }

    @Override
    public void setImmersive(boolean z) {
        this.mOriginActivity.setImmersive(z);
    }

    @Override
    public void setVrModeEnabled(boolean z, ComponentName componentName) {
        this.mOriginActivity.setVrModeEnabled(z, componentName);
    }

    @Override
    public ActionMode startActionMode(ActionMode.Callback callback) {
        return this.mOriginActivity.startActionMode(callback);
    }

    @Override
    public ActionMode startActionMode(ActionMode.Callback callback, int i) {
        return this.mOriginActivity.startActionMode(callback, i);
    }

    @Override
    public ActionMode onWindowStartingActionMode(ActionMode.Callback callback) {
        return this.mOriginActivity.onWindowStartingActionMode(callback);
    }

    @Override
    public ActionMode onWindowStartingActionMode(ActionMode.Callback callback, int i) {
        return this.mOriginActivity.onWindowStartingActionMode(callback, i);
    }

    @Override
    public boolean shouldUpRecreateTask(Intent intent) {
        return this.mOriginActivity.shouldUpRecreateTask(intent);
    }

    @Override
    public boolean navigateUpTo(Intent intent) {
        return this.mOriginActivity.navigateUpTo(intent);
    }

    @Override
    public boolean navigateUpToFromChild(Activity activity, Intent intent) {
        return this.mOriginActivity.navigateUpToFromChild(activity, intent);
    }

    @Override
    public Intent getParentActivityIntent() {
        return this.mOriginActivity.getParentActivityIntent();
    }

    @Override
    public void setEnterSharedElementCallback(SharedElementCallback sharedElementCallback) {
        this.mOriginActivity.setEnterSharedElementCallback(sharedElementCallback);
    }

    @Override
    public void setExitSharedElementCallback(SharedElementCallback sharedElementCallback) {
        this.mOriginActivity.setExitSharedElementCallback(sharedElementCallback);
    }

    @Override
    public void postponeEnterTransition() {
        this.mOriginActivity.postponeEnterTransition();
    }

    @Override
    public void startPostponedEnterTransition() {
        this.mOriginActivity.startPostponedEnterTransition();
    }

    @Override
    public DragAndDropPermissions requestDragAndDropPermissions(DragEvent dragEvent) {
        return this.mOriginActivity.requestDragAndDropPermissions(dragEvent);
    }

    @Override
    public void startLockTask() {
        this.mOriginActivity.startLockTask();
    }

    @Override
    public void stopLockTask() {
        this.mOriginActivity.stopLockTask();
    }

    @Override
    public void showLockTaskEscapeMessage() {
        this.mOriginActivity.showLockTaskEscapeMessage();
    }

    @Override
    public void setShowWhenLocked(boolean z) {
        this.mOriginActivity.setShowWhenLocked(z);
    }

    @Override
    public void setInheritShowWhenLocked(boolean z) {
        this.mOriginActivity.setInheritShowWhenLocked(z);
    }

    @Override
    public void setTurnScreenOn(boolean z) {
        this.mOriginActivity.setTurnScreenOn(z);
    }

    public int hashCode() {
        return this.mOriginActivity.hashCode();
    }

    @Override
    public void onActionModeStarted(ActionMode actionMode) {
        this.mOriginActivity.onActionModeStarted(actionMode);
    }

    @Override
    public void onActionModeFinished(ActionMode actionMode) {
        this.mOriginActivity.onActionModeFinished(actionMode);
    }

    @Override
    public void setWrapperActivityTheme(int i) {
        try {
            super.setTheme(i);
        } catch (Exception unused) {
        }
    }

    @Override
    public android.support.v4.app.FragmentManager getSupportFragmentManager() {
        return this.mOriginActivity.getSupportFragmentManager();
    }

    @Override
    public void supportFinishAfterTransition() {
        this.mOriginActivity.supportFinishAfterTransition();
    }

    @Override
    public void supportPostponeEnterTransition() {
        this.mOriginActivity.supportPostponeEnterTransition();
    }

    @Override
    public void supportStartPostponedEnterTransition() {
        this.mOriginActivity.supportStartPostponedEnterTransition();
    }

    @Override
    public void onVisibleBehindCanceled() {
        this.mOriginActivity.onVisibleBehindCanceled();
    }

    @Override
    public void supportInvalidateOptionsMenu() {
        this.mOriginActivity.supportInvalidateOptionsMenu();
    }

    @Override
    public void setEnterSharedElementCallback(android.support.v4.app.SharedElementCallback sharedElementCallback) {
        this.mOriginActivity.setEnterSharedElementCallback(sharedElementCallback);
    }

    @Override
    public void setExitSharedElementCallback(android.support.v4.app.SharedElementCallback sharedElementCallback) {
        this.mOriginActivity.setExitSharedElementCallback(sharedElementCallback);
    }

    @Override
    public boolean superDispatchKeyEvent(KeyEvent keyEvent) {
        return this.mOriginActivity.superDispatchKeyEvent(keyEvent);
    }

    @Override
    public ViewModelStore getViewModelStore() {
        return this.mOriginActivity.getViewModelStore();
    }

    @Override
    public Lifecycle getLifecycle() {
        return this.mOriginActivity.getLifecycle();
    }

    @Override
    public void onAttachFragment(android.support.v4.app.Fragment fragment) {
        this.mOriginActivity.onAttachFragment(fragment);
    }

    @Override
    public void startActivityFromFragment(android.support.v4.app.Fragment fragment, Intent intent, int i) {
        this.mOriginActivity.startActivityFromFragment(fragment, intent, i);
    }

    @Override
    public void startActivityFromFragment(android.support.v4.app.Fragment fragment, Intent intent, int i, Bundle bundle) {
        this.mOriginActivity.startActivityFromFragment(fragment, intent, i, bundle);
    }

    @Override
    public void startIntentSenderFromFragment(android.support.v4.app.Fragment fragment, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) throws IntentSender.SendIntentException {
        this.mOriginActivity.startIntentSenderFromFragment(fragment, intentSender, i, intent, i2, i3, i4, bundle);
    }

    @Override
    public void putExtraData(SupportActivity.ExtraData extraData) {
        this.mOriginActivity.putExtraData(extraData);
    }

    @Override
    public SupportActivity.ExtraData getExtraData(Class cls) {
        return this.mOriginActivity.getExtraData(cls);
    }

    @Override
    public android.support.v4.app.LoaderManager getSupportLoaderManager() {
        return this.mOriginActivity.getSupportLoaderManager();
    }
}
