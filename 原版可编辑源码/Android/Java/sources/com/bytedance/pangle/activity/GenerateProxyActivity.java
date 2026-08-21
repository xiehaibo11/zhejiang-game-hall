package com.bytedance.pangle.activity;

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
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.content.LocusId;
import android.content.SharedPreferences;
import android.content.pm.PackageManager;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.net.Uri;
import android.os.Bundle;
import android.os.CancellationSignal;
import android.os.PersistableBundle;
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
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.lang.reflect.Method;
import java.util.List;
import java.util.function.Consumer;

public abstract class GenerateProxyActivity extends Activity implements b {
    public Plugin mPlugin;
    public GeneratePluginActivity mTargetActivity;

    public abstract String getPluginPkgName();

    @Override
    public void addContentView(View view, ViewGroup.LayoutParams layoutParams) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.addContentView(view, layoutParams);
        } else {
            super.addContentView(view, layoutParams);
        }
    }

    public void zeusSuperAddContentView(View view, ViewGroup.LayoutParams layoutParams) {
        super.addContentView(view, layoutParams);
    }

    @Override
    public void closeContextMenu() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.closeContextMenu();
        } else {
            super.closeContextMenu();
        }
    }

    public void zeusSuperCloseContextMenu() {
        super.closeContextMenu();
    }

    @Override
    public void closeOptionsMenu() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.closeOptionsMenu();
        } else {
            super.closeOptionsMenu();
        }
    }

    public void zeusSuperCloseOptionsMenu() {
        super.closeOptionsMenu();
    }

    @Override
    public PendingIntent createPendingResult(int i, Intent intent, int i2) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.createPendingResult(i, intent, i2);
        }
        return super.createPendingResult(i, intent, i2);
    }

    public PendingIntent zeusSuperCreatePendingResult(int i, Intent intent, int i2) {
        return super.createPendingResult(i, intent, i2);
    }

    @Override
    public boolean dispatchGenericMotionEvent(MotionEvent motionEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.dispatchGenericMotionEvent(motionEvent);
        }
        return super.dispatchGenericMotionEvent(motionEvent);
    }

    public boolean zeusSuperDispatchGenericMotionEvent(MotionEvent motionEvent) {
        return super.dispatchGenericMotionEvent(motionEvent);
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.dispatchKeyEvent(keyEvent);
        }
        return super.dispatchKeyEvent(keyEvent);
    }

    public boolean zeusSuperDispatchKeyEvent(KeyEvent keyEvent) {
        return super.dispatchKeyEvent(keyEvent);
    }

    @Override
    public boolean dispatchKeyShortcutEvent(KeyEvent keyEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.dispatchKeyShortcutEvent(keyEvent);
        }
        return super.dispatchKeyShortcutEvent(keyEvent);
    }

    public boolean zeusSuperDispatchKeyShortcutEvent(KeyEvent keyEvent) {
        return super.dispatchKeyShortcutEvent(keyEvent);
    }

    @Override
    public boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.dispatchPopulateAccessibilityEvent(accessibilityEvent);
        }
        return super.dispatchPopulateAccessibilityEvent(accessibilityEvent);
    }

    public boolean zeusSuperDispatchPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        return super.dispatchPopulateAccessibilityEvent(accessibilityEvent);
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.dispatchTouchEvent(motionEvent);
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    public boolean zeusSuperDispatchTouchEvent(MotionEvent motionEvent) {
        return super.dispatchTouchEvent(motionEvent);
    }

    @Override
    public boolean dispatchTrackballEvent(MotionEvent motionEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.dispatchTrackballEvent(motionEvent);
        }
        return super.dispatchTrackballEvent(motionEvent);
    }

    public boolean zeusSuperDispatchTrackballEvent(MotionEvent motionEvent) {
        return super.dispatchTrackballEvent(motionEvent);
    }

    @Override
    public void dump(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.dump(str, fileDescriptor, printWriter, strArr);
        } else {
            super.dump(str, fileDescriptor, printWriter, strArr);
        }
    }

    public void zeusSuperDump(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        super.dump(str, fileDescriptor, printWriter, strArr);
    }

    @Override
    public void enterPictureInPictureMode() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.enterPictureInPictureMode();
        } else {
            super.enterPictureInPictureMode();
        }
    }

    public void zeusSuperEnterPictureInPictureMode() {
        super.enterPictureInPictureMode();
    }

    @Override
    public boolean enterPictureInPictureMode(PictureInPictureParams pictureInPictureParams) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.enterPictureInPictureMode(pictureInPictureParams);
        }
        return super.enterPictureInPictureMode(pictureInPictureParams);
    }

    public boolean zeusSuperEnterPictureInPictureMode(PictureInPictureParams pictureInPictureParams) {
        return super.enterPictureInPictureMode(pictureInPictureParams);
    }

    @Override
    public View findViewById(int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.findViewById(i);
        }
        return super.findViewById(i);
    }

    public View zeusSuperFindViewById(int i) {
        return super.findViewById(i);
    }

    @Override
    public void finish() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.finish();
        } else {
            super.finish();
        }
    }

    public void zeusSuperFinish() {
        super.finish();
    }

    @Override
    public void finishActivity(int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.finishActivity(i);
        } else {
            super.finishActivity(i);
        }
    }

    public void zeusSuperFinishActivity(int i) {
        super.finishActivity(i);
    }

    @Override
    public void finishActivityFromChild(Activity activity, int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.finishActivityFromChild(activity, i);
        } else {
            super.finishActivityFromChild(activity, i);
        }
    }

    public void zeusSuperFinishActivityFromChild(Activity activity, int i) {
        super.finishActivityFromChild(activity, i);
    }

    @Override
    public void finishAffinity() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.finishAffinity();
        } else {
            super.finishAffinity();
        }
    }

    public void zeusSuperFinishAffinity() {
        super.finishAffinity();
    }

    @Override
    public void finishAfterTransition() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.finishAfterTransition();
        } else {
            super.finishAfterTransition();
        }
    }

    public void zeusSuperFinishAfterTransition() {
        super.finishAfterTransition();
    }

    @Override
    public void finishAndRemoveTask() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.finishAndRemoveTask();
        } else {
            super.finishAndRemoveTask();
        }
    }

    public void zeusSuperFinishAndRemoveTask() {
        super.finishAndRemoveTask();
    }

    @Override
    public void finishFromChild(Activity activity) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.finishFromChild(activity);
        } else {
            super.finishFromChild(activity);
        }
    }

    public void zeusSuperFinishFromChild(Activity activity) {
        super.finishFromChild(activity);
    }

    @Override
    public ActionBar getActionBar() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getActionBar();
        }
        return super.getActionBar();
    }

    public ActionBar zeusSuperGetActionBar() {
        return super.getActionBar();
    }

    @Override
    public ComponentName getCallingActivity() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getCallingActivity();
        }
        return super.getCallingActivity();
    }

    public ComponentName zeusSuperGetCallingActivity() {
        return super.getCallingActivity();
    }

    @Override
    public String getCallingPackage() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getCallingPackage();
        }
        return super.getCallingPackage();
    }

    public String zeusSuperGetCallingPackage() {
        return super.getCallingPackage();
    }

    @Override
    public int getChangingConfigurations() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getChangingConfigurations();
        }
        return super.getChangingConfigurations();
    }

    public int zeusSuperGetChangingConfigurations() {
        return super.getChangingConfigurations();
    }

    @Override
    public ComponentName getComponentName() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getComponentName();
        }
        return super.getComponentName();
    }

    public ComponentName zeusSuperGetComponentName() {
        return super.getComponentName();
    }

    @Override
    public Scene getContentScene() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getContentScene();
        }
        return super.getContentScene();
    }

    public Scene zeusSuperGetContentScene() {
        return super.getContentScene();
    }

    @Override
    public TransitionManager getContentTransitionManager() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getContentTransitionManager();
        }
        return super.getContentTransitionManager();
    }

    public TransitionManager zeusSuperGetContentTransitionManager() {
        return super.getContentTransitionManager();
    }

    @Override
    public View getCurrentFocus() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getCurrentFocus();
        }
        return super.getCurrentFocus();
    }

    public View zeusSuperGetCurrentFocus() {
        return super.getCurrentFocus();
    }

    @Override
    public FragmentManager getFragmentManager() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getFragmentManager();
        }
        return super.getFragmentManager();
    }

    public FragmentManager zeusSuperGetFragmentManager() {
        return super.getFragmentManager();
    }

    @Override
    public Intent getIntent() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getIntent();
        }
        return super.getIntent();
    }

    public Intent zeusSuperGetIntent() {
        return super.getIntent();
    }

    @Override
    public Object getLastNonConfigurationInstance() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getLastNonConfigurationInstance();
        }
        return super.getLastNonConfigurationInstance();
    }

    public Object zeusSuperGetLastNonConfigurationInstance() {
        return super.getLastNonConfigurationInstance();
    }

    @Override
    public LayoutInflater getLayoutInflater() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getLayoutInflater();
        }
        return super.getLayoutInflater();
    }

    public LayoutInflater zeusSuperGetLayoutInflater() {
        return super.getLayoutInflater();
    }

    @Override
    public LoaderManager getLoaderManager() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getLoaderManager();
        }
        return super.getLoaderManager();
    }

    public LoaderManager zeusSuperGetLoaderManager() {
        return super.getLoaderManager();
    }

    @Override
    public String getLocalClassName() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getLocalClassName();
        }
        return super.getLocalClassName();
    }

    public String zeusSuperGetLocalClassName() {
        return super.getLocalClassName();
    }

    @Override
    public int getMaxNumPictureInPictureActions() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getMaxNumPictureInPictureActions();
        }
        return super.getMaxNumPictureInPictureActions();
    }

    public int zeusSuperGetMaxNumPictureInPictureActions() {
        return super.getMaxNumPictureInPictureActions();
    }

    @Override
    public MenuInflater getMenuInflater() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getMenuInflater();
        }
        return super.getMenuInflater();
    }

    public MenuInflater zeusSuperGetMenuInflater() {
        return super.getMenuInflater();
    }

    @Override
    public Intent getParentActivityIntent() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getParentActivityIntent();
        }
        return super.getParentActivityIntent();
    }

    public Intent zeusSuperGetParentActivityIntent() {
        return super.getParentActivityIntent();
    }

    @Override
    public SharedPreferences getPreferences(int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getPreferences(i);
        }
        return super.getPreferences(i);
    }

    public SharedPreferences zeusSuperGetPreferences(int i) {
        return super.getPreferences(i);
    }

    @Override
    public Uri getReferrer() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getReferrer();
        }
        return super.getReferrer();
    }

    public Uri zeusSuperGetReferrer() {
        return super.getReferrer();
    }

    @Override
    public int getRequestedOrientation() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getRequestedOrientation();
        }
        return super.getRequestedOrientation();
    }

    public int zeusSuperGetRequestedOrientation() {
        return super.getRequestedOrientation();
    }

    @Override
    public Object getSystemService(String str) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getSystemService(str);
        }
        return super.getSystemService(str);
    }

    public Object zeusSuperGetSystemService(String str) {
        return super.getSystemService(str);
    }

    @Override
    public int getTaskId() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getTaskId();
        }
        return super.getTaskId();
    }

    public int zeusSuperGetTaskId() {
        return super.getTaskId();
    }

    @Override
    public VoiceInteractor getVoiceInteractor() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getVoiceInteractor();
        }
        return super.getVoiceInteractor();
    }

    public VoiceInteractor zeusSuperGetVoiceInteractor() {
        return super.getVoiceInteractor();
    }

    @Override
    public Window getWindow() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getWindow();
        }
        return super.getWindow();
    }

    public Window zeusSuperGetWindow() {
        return super.getWindow();
    }

    @Override
    public WindowManager getWindowManager() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.getWindowManager();
        }
        return super.getWindowManager();
    }

    public WindowManager zeusSuperGetWindowManager() {
        return super.getWindowManager();
    }

    @Override
    public boolean hasWindowFocus() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.hasWindowFocus();
        }
        return super.hasWindowFocus();
    }

    public boolean zeusSuperHasWindowFocus() {
        return super.hasWindowFocus();
    }

    @Override
    public void invalidateOptionsMenu() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.invalidateOptionsMenu();
        } else {
            super.invalidateOptionsMenu();
        }
    }

    public void zeusSuperInvalidateOptionsMenu() {
        super.invalidateOptionsMenu();
    }

    @Override
    public boolean isActivityTransitionRunning() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.isActivityTransitionRunning();
        }
        return super.isActivityTransitionRunning();
    }

    public boolean zeusSuperIsActivityTransitionRunning() {
        return super.isActivityTransitionRunning();
    }

    @Override
    public boolean isChangingConfigurations() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.isChangingConfigurations();
        }
        return super.isChangingConfigurations();
    }

    public boolean zeusSuperIsChangingConfigurations() {
        return super.isChangingConfigurations();
    }

    @Override
    public boolean isDestroyed() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.isDestroyed();
        }
        return super.isDestroyed();
    }

    public boolean zeusSuperIsDestroyed() {
        return super.isDestroyed();
    }

    @Override
    public boolean isFinishing() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.isFinishing();
        }
        return super.isFinishing();
    }

    public boolean zeusSuperIsFinishing() {
        return super.isFinishing();
    }

    @Override
    public boolean isImmersive() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.isImmersive();
        }
        return super.isImmersive();
    }

    public boolean zeusSuperIsImmersive() {
        return super.isImmersive();
    }

    @Override
    public boolean isInMultiWindowMode() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.isInMultiWindowMode();
        }
        return super.isInMultiWindowMode();
    }

    public boolean zeusSuperIsInMultiWindowMode() {
        return super.isInMultiWindowMode();
    }

    @Override
    public boolean isInPictureInPictureMode() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.isInPictureInPictureMode();
        }
        return super.isInPictureInPictureMode();
    }

    public boolean zeusSuperIsInPictureInPictureMode() {
        return super.isInPictureInPictureMode();
    }

    @Override
    public boolean isLocalVoiceInteractionSupported() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.isLocalVoiceInteractionSupported();
        }
        return super.isLocalVoiceInteractionSupported();
    }

    public boolean zeusSuperIsLocalVoiceInteractionSupported() {
        return super.isLocalVoiceInteractionSupported();
    }

    @Override
    public boolean isTaskRoot() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.isTaskRoot();
        }
        return super.isTaskRoot();
    }

    public boolean zeusSuperIsTaskRoot() {
        return super.isTaskRoot();
    }

    @Override
    public boolean isVoiceInteraction() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.isVoiceInteraction();
        }
        return super.isVoiceInteraction();
    }

    public boolean zeusSuperIsVoiceInteraction() {
        return super.isVoiceInteraction();
    }

    @Override
    public boolean isVoiceInteractionRoot() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.isVoiceInteractionRoot();
        }
        return super.isVoiceInteractionRoot();
    }

    public boolean zeusSuperIsVoiceInteractionRoot() {
        return super.isVoiceInteractionRoot();
    }

    @Override
    public boolean moveTaskToBack(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.moveTaskToBack(z);
        }
        return super.moveTaskToBack(z);
    }

    public boolean zeusSuperMoveTaskToBack(boolean z) {
        return super.moveTaskToBack(z);
    }

    @Override
    public boolean navigateUpTo(Intent intent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.navigateUpTo(intent);
        }
        return super.navigateUpTo(intent);
    }

    public boolean zeusSuperNavigateUpTo(Intent intent) {
        return super.navigateUpTo(intent);
    }

    @Override
    public boolean navigateUpToFromChild(Activity activity, Intent intent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.navigateUpToFromChild(activity, intent);
        }
        return super.navigateUpToFromChild(activity, intent);
    }

    public boolean zeusSuperNavigateUpToFromChild(Activity activity, Intent intent) {
        return super.navigateUpToFromChild(activity, intent);
    }

    @Override
    public void onActionModeFinished(ActionMode actionMode) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onActionModeFinished(actionMode);
        } else {
            super.onActionModeFinished(actionMode);
        }
    }

    public void zeusSuperOnActionModeFinished(ActionMode actionMode) {
        super.onActionModeFinished(actionMode);
    }

    @Override
    public void onActionModeStarted(ActionMode actionMode) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onActionModeStarted(actionMode);
        } else {
            super.onActionModeStarted(actionMode);
        }
    }

    public void zeusSuperOnActionModeStarted(ActionMode actionMode) {
        super.onActionModeStarted(actionMode);
    }

    @Override
    public void onActivityReenter(int i, Intent intent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onActivityReenter(i, intent);
        } else {
            super.onActivityReenter(i, intent);
        }
    }

    public void zeusSuperOnActivityReenter(int i, Intent intent) {
        super.onActivityReenter(i, intent);
    }

    @Override
    protected void onActivityResult(int i, int i2, Intent intent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onActivityResult(i, i2, intent);
        } else {
            super.onActivityResult(i, i2, intent);
        }
    }

    protected void zeusSuperOnActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
    }

    @Override
    protected void onApplyThemeResource(Resources.Theme theme, int i, boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onApplyThemeResource(theme, i, z);
        } else {
            super.onApplyThemeResource(theme, i, z);
        }
    }

    protected void zeusSuperOnApplyThemeResource(Resources.Theme theme, int i, boolean z) {
        super.onApplyThemeResource(theme, i, z);
    }

    @Override
    public void onAttachFragment(Fragment fragment) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onAttachFragment(fragment);
        } else {
            super.onAttachFragment(fragment);
        }
    }

    public void zeusSuperOnAttachFragment(Fragment fragment) {
        super.onAttachFragment(fragment);
    }

    @Override
    public void onAttachedToWindow() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onAttachedToWindow();
        } else {
            super.onAttachedToWindow();
        }
    }

    public void zeusSuperOnAttachedToWindow() {
        super.onAttachedToWindow();
    }

    @Override
    public void onBackPressed() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onBackPressed();
        } else {
            super.onBackPressed();
        }
    }

    public void zeusSuperOnBackPressed() {
        super.onBackPressed();
    }

    @Override
    protected void onChildTitleChanged(Activity activity, CharSequence charSequence) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onChildTitleChanged(activity, charSequence);
        } else {
            super.onChildTitleChanged(activity, charSequence);
        }
    }

    protected void zeusSuperOnChildTitleChanged(Activity activity, CharSequence charSequence) {
        super.onChildTitleChanged(activity, charSequence);
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onConfigurationChanged(configuration);
        } else {
            super.onConfigurationChanged(configuration);
        }
    }

    public void zeusSuperOnConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    @Override
    public void onContentChanged() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onContentChanged();
        } else {
            super.onContentChanged();
        }
    }

    public void zeusSuperOnContentChanged() {
        super.onContentChanged();
    }

    @Override
    public boolean onContextItemSelected(MenuItem menuItem) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onContextItemSelected(menuItem);
        }
        return super.onContextItemSelected(menuItem);
    }

    public boolean zeusSuperOnContextItemSelected(MenuItem menuItem) {
        return super.onContextItemSelected(menuItem);
    }

    @Override
    public void onContextMenuClosed(Menu menu) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onContextMenuClosed(menu);
        } else {
            super.onContextMenuClosed(menu);
        }
    }

    public void zeusSuperOnContextMenuClosed(Menu menu) {
        super.onContextMenuClosed(menu);
    }

    @Override
    public void attachBaseContext(Context context) {
        c.a(this, context);
    }

    @Override
    public void zeusSuperAttachBaseContext(Context context) {
        super.attachBaseContext(context);
    }

    @Override
    public void onCreate(Bundle bundle) {
        c.a(this, bundle);
    }

    @Override
    public void zeusSuperOnCreate(Bundle bundle) {
        super.onCreate(bundle);
    }

    @Override
    public void onCreate(Bundle bundle, PersistableBundle persistableBundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onCreate(bundle, persistableBundle);
        } else {
            super.onCreate(bundle, persistableBundle);
        }
    }

    public void zeusSuperOnCreate(Bundle bundle, PersistableBundle persistableBundle) {
        super.onCreate(bundle, persistableBundle);
    }

    @Override
    public void onCreateContextMenu(ContextMenu contextMenu, View view, ContextMenu.ContextMenuInfo contextMenuInfo) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onCreateContextMenu(contextMenu, view, contextMenuInfo);
        } else {
            super.onCreateContextMenu(contextMenu, view, contextMenuInfo);
        }
    }

    public void zeusSuperOnCreateContextMenu(ContextMenu contextMenu, View view, ContextMenu.ContextMenuInfo contextMenuInfo) {
        super.onCreateContextMenu(contextMenu, view, contextMenuInfo);
    }

    @Override
    public CharSequence onCreateDescription() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onCreateDescription();
        }
        return super.onCreateDescription();
    }

    public CharSequence zeusSuperOnCreateDescription() {
        return super.onCreateDescription();
    }

    @Override
    protected Dialog onCreateDialog(int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onCreateDialog(i);
        }
        return super.onCreateDialog(i);
    }

    protected Dialog zeusSuperOnCreateDialog(int i) {
        return super.onCreateDialog(i);
    }

    @Override
    protected Dialog onCreateDialog(int i, Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onCreateDialog(i, bundle);
        }
        return super.onCreateDialog(i, bundle);
    }

    protected Dialog zeusSuperOnCreateDialog(int i, Bundle bundle) {
        return super.onCreateDialog(i, bundle);
    }

    @Override
    public void onCreateNavigateUpTaskStack(TaskStackBuilder taskStackBuilder) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onCreateNavigateUpTaskStack(taskStackBuilder);
        } else {
            super.onCreateNavigateUpTaskStack(taskStackBuilder);
        }
    }

    public void zeusSuperOnCreateNavigateUpTaskStack(TaskStackBuilder taskStackBuilder) {
        super.onCreateNavigateUpTaskStack(taskStackBuilder);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onCreateOptionsMenu(menu);
        }
        return super.onCreateOptionsMenu(menu);
    }

    public boolean zeusSuperOnCreateOptionsMenu(Menu menu) {
        return super.onCreateOptionsMenu(menu);
    }

    @Override
    public boolean onCreatePanelMenu(int i, Menu menu) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onCreatePanelMenu(i, menu);
        }
        return super.onCreatePanelMenu(i, menu);
    }

    public boolean zeusSuperOnCreatePanelMenu(int i, Menu menu) {
        return super.onCreatePanelMenu(i, menu);
    }

    @Override
    public View onCreatePanelView(int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onCreatePanelView(i);
        }
        return super.onCreatePanelView(i);
    }

    public View zeusSuperOnCreatePanelView(int i) {
        return super.onCreatePanelView(i);
    }

    @Override
    public boolean onCreateThumbnail(Bitmap bitmap, Canvas canvas) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onCreateThumbnail(bitmap, canvas);
        }
        return super.onCreateThumbnail(bitmap, canvas);
    }

    public boolean zeusSuperOnCreateThumbnail(Bitmap bitmap, Canvas canvas) {
        return super.onCreateThumbnail(bitmap, canvas);
    }

    @Override
    public View onCreateView(View view, String str, Context context, AttributeSet attributeSet) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onCreateView(view, str, context, attributeSet);
        }
        return super.onCreateView(view, str, context, attributeSet);
    }

    public View zeusSuperOnCreateView(View view, String str, Context context, AttributeSet attributeSet) {
        return super.onCreateView(view, str, context, attributeSet);
    }

    @Override
    public View onCreateView(String str, Context context, AttributeSet attributeSet) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onCreateView(str, context, attributeSet);
        }
        return super.onCreateView(str, context, attributeSet);
    }

    public View zeusSuperOnCreateView(String str, Context context, AttributeSet attributeSet) {
        return super.onCreateView(str, context, attributeSet);
    }

    @Override
    protected void onDestroy() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onDestroy();
        } else {
            super.onDestroy();
        }
    }

    protected void zeusSuperOnDestroy() {
        super.onDestroy();
    }

    @Override
    public void onDetachedFromWindow() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onDetachedFromWindow();
        } else {
            super.onDetachedFromWindow();
        }
    }

    public void zeusSuperOnDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    @Override
    public void onEnterAnimationComplete() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onEnterAnimationComplete();
        } else {
            super.onEnterAnimationComplete();
        }
    }

    public void zeusSuperOnEnterAnimationComplete() {
        super.onEnterAnimationComplete();
    }

    @Override
    public boolean onGenericMotionEvent(MotionEvent motionEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onGenericMotionEvent(motionEvent);
        }
        return super.onGenericMotionEvent(motionEvent);
    }

    public boolean zeusSuperOnGenericMotionEvent(MotionEvent motionEvent) {
        return super.onGenericMotionEvent(motionEvent);
    }

    @Override
    public void onGetDirectActions(CancellationSignal cancellationSignal, Consumer consumer) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onGetDirectActions(cancellationSignal, consumer);
        } else {
            super.onGetDirectActions(cancellationSignal, consumer);
        }
    }

    public void zeusSuperOnGetDirectActions(CancellationSignal cancellationSignal, Consumer consumer) {
        super.onGetDirectActions(cancellationSignal, consumer);
    }

    @Override
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onKeyDown(i, keyEvent);
        }
        return super.onKeyDown(i, keyEvent);
    }

    public boolean zeusSuperOnKeyDown(int i, KeyEvent keyEvent) {
        return super.onKeyDown(i, keyEvent);
    }

    @Override
    public boolean onKeyLongPress(int i, KeyEvent keyEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onKeyLongPress(i, keyEvent);
        }
        return super.onKeyLongPress(i, keyEvent);
    }

    public boolean zeusSuperOnKeyLongPress(int i, KeyEvent keyEvent) {
        return super.onKeyLongPress(i, keyEvent);
    }

    @Override
    public boolean onKeyMultiple(int i, int i2, KeyEvent keyEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onKeyMultiple(i, i2, keyEvent);
        }
        return super.onKeyMultiple(i, i2, keyEvent);
    }

    public boolean zeusSuperOnKeyMultiple(int i, int i2, KeyEvent keyEvent) {
        return super.onKeyMultiple(i, i2, keyEvent);
    }

    @Override
    public boolean onKeyShortcut(int i, KeyEvent keyEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onKeyShortcut(i, keyEvent);
        }
        return super.onKeyShortcut(i, keyEvent);
    }

    public boolean zeusSuperOnKeyShortcut(int i, KeyEvent keyEvent) {
        return super.onKeyShortcut(i, keyEvent);
    }

    @Override
    public boolean onKeyUp(int i, KeyEvent keyEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onKeyUp(i, keyEvent);
        }
        return super.onKeyUp(i, keyEvent);
    }

    public boolean zeusSuperOnKeyUp(int i, KeyEvent keyEvent) {
        return super.onKeyUp(i, keyEvent);
    }

    @Override
    public void onLocalVoiceInteractionStarted() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onLocalVoiceInteractionStarted();
        } else {
            super.onLocalVoiceInteractionStarted();
        }
    }

    public void zeusSuperOnLocalVoiceInteractionStarted() {
        super.onLocalVoiceInteractionStarted();
    }

    @Override
    public void onLocalVoiceInteractionStopped() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onLocalVoiceInteractionStopped();
        } else {
            super.onLocalVoiceInteractionStopped();
        }
    }

    public void zeusSuperOnLocalVoiceInteractionStopped() {
        super.onLocalVoiceInteractionStopped();
    }

    @Override
    public void onLowMemory() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onLowMemory();
        } else {
            super.onLowMemory();
        }
    }

    public void zeusSuperOnLowMemory() {
        super.onLowMemory();
    }

    @Override
    public boolean onMenuOpened(int i, Menu menu) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onMenuOpened(i, menu);
        }
        return super.onMenuOpened(i, menu);
    }

    public boolean zeusSuperOnMenuOpened(int i, Menu menu) {
        return super.onMenuOpened(i, menu);
    }

    @Override
    public void onMultiWindowModeChanged(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onMultiWindowModeChanged(z);
        } else {
            super.onMultiWindowModeChanged(z);
        }
    }

    public void zeusSuperOnMultiWindowModeChanged(boolean z) {
        super.onMultiWindowModeChanged(z);
    }

    @Override
    public void onMultiWindowModeChanged(boolean z, Configuration configuration) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onMultiWindowModeChanged(z, configuration);
        } else {
            super.onMultiWindowModeChanged(z, configuration);
        }
    }

    public void zeusSuperOnMultiWindowModeChanged(boolean z, Configuration configuration) {
        super.onMultiWindowModeChanged(z, configuration);
    }

    @Override
    public boolean onNavigateUp() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onNavigateUp();
        }
        return super.onNavigateUp();
    }

    public boolean zeusSuperOnNavigateUp() {
        return super.onNavigateUp();
    }

    @Override
    public boolean onNavigateUpFromChild(Activity activity) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onNavigateUpFromChild(activity);
        }
        return super.onNavigateUpFromChild(activity);
    }

    public boolean zeusSuperOnNavigateUpFromChild(Activity activity) {
        return super.onNavigateUpFromChild(activity);
    }

    @Override
    protected void onNewIntent(Intent intent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onNewIntent(intent);
        } else {
            super.onNewIntent(intent);
        }
    }

    protected void zeusSuperOnNewIntent(Intent intent) {
        super.onNewIntent(intent);
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem menuItem) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onOptionsItemSelected(menuItem);
        }
        return super.onOptionsItemSelected(menuItem);
    }

    public boolean zeusSuperOnOptionsItemSelected(MenuItem menuItem) {
        return super.onOptionsItemSelected(menuItem);
    }

    @Override
    public void onOptionsMenuClosed(Menu menu) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onOptionsMenuClosed(menu);
        } else {
            super.onOptionsMenuClosed(menu);
        }
    }

    public void zeusSuperOnOptionsMenuClosed(Menu menu) {
        super.onOptionsMenuClosed(menu);
    }

    @Override
    public void onPanelClosed(int i, Menu menu) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onPanelClosed(i, menu);
        } else {
            super.onPanelClosed(i, menu);
        }
    }

    public void zeusSuperOnPanelClosed(int i, Menu menu) {
        super.onPanelClosed(i, menu);
    }

    @Override
    protected void onPause() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onPause();
        } else {
            super.onPause();
        }
    }

    protected void zeusSuperOnPause() {
        super.onPause();
    }

    @Override
    public void onPerformDirectAction(String str, Bundle bundle, CancellationSignal cancellationSignal, Consumer consumer) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onPerformDirectAction(str, bundle, cancellationSignal, consumer);
        } else {
            super.onPerformDirectAction(str, bundle, cancellationSignal, consumer);
        }
    }

    public void zeusSuperOnPerformDirectAction(String str, Bundle bundle, CancellationSignal cancellationSignal, Consumer consumer) {
        super.onPerformDirectAction(str, bundle, cancellationSignal, consumer);
    }

    @Override
    public void onPictureInPictureModeChanged(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onPictureInPictureModeChanged(z);
        } else {
            super.onPictureInPictureModeChanged(z);
        }
    }

    public void zeusSuperOnPictureInPictureModeChanged(boolean z) {
        super.onPictureInPictureModeChanged(z);
    }

    @Override
    public void onPictureInPictureModeChanged(boolean z, Configuration configuration) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onPictureInPictureModeChanged(z, configuration);
        } else {
            super.onPictureInPictureModeChanged(z, configuration);
        }
    }

    public void zeusSuperOnPictureInPictureModeChanged(boolean z, Configuration configuration) {
        super.onPictureInPictureModeChanged(z, configuration);
    }

    @Override
    public boolean onPictureInPictureRequested() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onPictureInPictureRequested();
        }
        return super.onPictureInPictureRequested();
    }

    public boolean zeusSuperOnPictureInPictureRequested() {
        return super.onPictureInPictureRequested();
    }

    @Override
    protected void onPostCreate(Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onPostCreate(bundle);
        } else {
            super.onPostCreate(bundle);
        }
    }

    protected void zeusSuperOnPostCreate(Bundle bundle) {
        super.onPostCreate(bundle);
    }

    @Override
    public void onPostCreate(Bundle bundle, PersistableBundle persistableBundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onPostCreate(bundle, persistableBundle);
        } else {
            super.onPostCreate(bundle, persistableBundle);
        }
    }

    public void zeusSuperOnPostCreate(Bundle bundle, PersistableBundle persistableBundle) {
        super.onPostCreate(bundle, persistableBundle);
    }

    @Override
    protected void onPostResume() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onPostResume();
        } else {
            super.onPostResume();
        }
    }

    protected void zeusSuperOnPostResume() {
        super.onPostResume();
    }

    @Override
    protected void onPrepareDialog(int i, Dialog dialog) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onPrepareDialog(i, dialog);
        } else {
            super.onPrepareDialog(i, dialog);
        }
    }

    protected void zeusSuperOnPrepareDialog(int i, Dialog dialog) {
        super.onPrepareDialog(i, dialog);
    }

    @Override
    protected void onPrepareDialog(int i, Dialog dialog, Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onPrepareDialog(i, dialog, bundle);
        } else {
            super.onPrepareDialog(i, dialog, bundle);
        }
    }

    protected void zeusSuperOnPrepareDialog(int i, Dialog dialog, Bundle bundle) {
        super.onPrepareDialog(i, dialog, bundle);
    }

    @Override
    public void onPrepareNavigateUpTaskStack(TaskStackBuilder taskStackBuilder) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onPrepareNavigateUpTaskStack(taskStackBuilder);
        } else {
            super.onPrepareNavigateUpTaskStack(taskStackBuilder);
        }
    }

    public void zeusSuperOnPrepareNavigateUpTaskStack(TaskStackBuilder taskStackBuilder) {
        super.onPrepareNavigateUpTaskStack(taskStackBuilder);
    }

    @Override
    public boolean onPrepareOptionsMenu(Menu menu) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onPrepareOptionsMenu(menu);
        }
        return super.onPrepareOptionsMenu(menu);
    }

    public boolean zeusSuperOnPrepareOptionsMenu(Menu menu) {
        return super.onPrepareOptionsMenu(menu);
    }

    @Override
    public boolean onPreparePanel(int i, View view, Menu menu) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onPreparePanel(i, view, menu);
        }
        return super.onPreparePanel(i, view, menu);
    }

    public boolean zeusSuperOnPreparePanel(int i, View view, Menu menu) {
        return super.onPreparePanel(i, view, menu);
    }

    @Override
    public void onProvideAssistContent(AssistContent assistContent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onProvideAssistContent(assistContent);
        } else {
            super.onProvideAssistContent(assistContent);
        }
    }

    public void zeusSuperOnProvideAssistContent(AssistContent assistContent) {
        super.onProvideAssistContent(assistContent);
    }

    @Override
    public void onProvideAssistData(Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onProvideAssistData(bundle);
        } else {
            super.onProvideAssistData(bundle);
        }
    }

    public void zeusSuperOnProvideAssistData(Bundle bundle) {
        super.onProvideAssistData(bundle);
    }

    @Override
    public void onProvideKeyboardShortcuts(List list, Menu menu, int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onProvideKeyboardShortcuts(list, menu, i);
        } else {
            super.onProvideKeyboardShortcuts(list, menu, i);
        }
    }

    public void zeusSuperOnProvideKeyboardShortcuts(List list, Menu menu, int i) {
        super.onProvideKeyboardShortcuts(list, menu, i);
    }

    @Override
    public Uri onProvideReferrer() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onProvideReferrer();
        }
        return super.onProvideReferrer();
    }

    public Uri zeusSuperOnProvideReferrer() {
        return super.onProvideReferrer();
    }

    @Override
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onRequestPermissionsResult(i, strArr, iArr);
        } else {
            super.onRequestPermissionsResult(i, strArr, iArr);
        }
    }

    public void zeusSuperOnRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        super.onRequestPermissionsResult(i, strArr, iArr);
    }

    @Override
    protected void onRestart() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onRestart();
        } else {
            super.onRestart();
        }
    }

    protected void zeusSuperOnRestart() {
        super.onRestart();
    }

    @Override
    protected void onRestoreInstanceState(Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onRestoreInstanceState(bundle);
        } else {
            super.onRestoreInstanceState(bundle);
        }
    }

    protected void zeusSuperOnRestoreInstanceState(Bundle bundle) {
        super.onRestoreInstanceState(bundle);
    }

    @Override
    public void onRestoreInstanceState(Bundle bundle, PersistableBundle persistableBundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onRestoreInstanceState(bundle, persistableBundle);
        } else {
            super.onRestoreInstanceState(bundle, persistableBundle);
        }
    }

    public void zeusSuperOnRestoreInstanceState(Bundle bundle, PersistableBundle persistableBundle) {
        super.onRestoreInstanceState(bundle, persistableBundle);
    }

    @Override
    protected void onResume() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onResume();
        } else {
            super.onResume();
        }
    }

    protected void zeusSuperOnResume() {
        super.onResume();
    }

    @Override
    protected void onSaveInstanceState(Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onSaveInstanceState(bundle);
        } else {
            super.onSaveInstanceState(bundle);
        }
        bundle.clear();
    }

    protected void zeusSuperOnSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
    }

    @Override
    public void onSaveInstanceState(Bundle bundle, PersistableBundle persistableBundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onSaveInstanceState(bundle, persistableBundle);
        } else {
            super.onSaveInstanceState(bundle, persistableBundle);
        }
        bundle.clear();
    }

    public void zeusSuperOnSaveInstanceState(Bundle bundle, PersistableBundle persistableBundle) {
        super.onSaveInstanceState(bundle, persistableBundle);
    }

    @Override
    public boolean onSearchRequested() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onSearchRequested();
        }
        return super.onSearchRequested();
    }

    public boolean zeusSuperOnSearchRequested() {
        return super.onSearchRequested();
    }

    @Override
    public boolean onSearchRequested(SearchEvent searchEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onSearchRequested(searchEvent);
        }
        return super.onSearchRequested(searchEvent);
    }

    public boolean zeusSuperOnSearchRequested(SearchEvent searchEvent) {
        return super.onSearchRequested(searchEvent);
    }

    @Override
    protected void onStart() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onStart();
        } else {
            super.onStart();
        }
    }

    protected void zeusSuperOnStart() {
        super.onStart();
    }

    @Override
    public void onStateNotSaved() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onStateNotSaved();
        } else {
            super.onStateNotSaved();
        }
    }

    public void zeusSuperOnStateNotSaved() {
        super.onStateNotSaved();
    }

    @Override
    protected void onStop() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onStop();
        } else {
            super.onStop();
        }
    }

    protected void zeusSuperOnStop() {
        super.onStop();
    }

    @Override
    protected void onTitleChanged(CharSequence charSequence, int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onTitleChanged(charSequence, i);
        } else {
            super.onTitleChanged(charSequence, i);
        }
    }

    protected void zeusSuperOnTitleChanged(CharSequence charSequence, int i) {
        super.onTitleChanged(charSequence, i);
    }

    @Override
    public void onTopResumedActivityChanged(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onTopResumedActivityChanged(z);
        } else {
            super.onTopResumedActivityChanged(z);
        }
    }

    public void zeusSuperOnTopResumedActivityChanged(boolean z) {
        super.onTopResumedActivityChanged(z);
    }

    @Override
    public boolean onTouchEvent(MotionEvent motionEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onTouchEvent(motionEvent);
        }
        return super.onTouchEvent(motionEvent);
    }

    public boolean zeusSuperOnTouchEvent(MotionEvent motionEvent) {
        return super.onTouchEvent(motionEvent);
    }

    @Override
    public boolean onTrackballEvent(MotionEvent motionEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onTrackballEvent(motionEvent);
        }
        return super.onTrackballEvent(motionEvent);
    }

    public boolean zeusSuperOnTrackballEvent(MotionEvent motionEvent) {
        return super.onTrackballEvent(motionEvent);
    }

    @Override
    public void onTrimMemory(int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onTrimMemory(i);
        } else {
            super.onTrimMemory(i);
        }
    }

    public void zeusSuperOnTrimMemory(int i) {
        super.onTrimMemory(i);
    }

    @Override
    public void onUserInteraction() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onUserInteraction();
        } else {
            super.onUserInteraction();
        }
    }

    public void zeusSuperOnUserInteraction() {
        super.onUserInteraction();
    }

    @Override
    protected void onUserLeaveHint() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onUserLeaveHint();
        } else {
            super.onUserLeaveHint();
        }
    }

    protected void zeusSuperOnUserLeaveHint() {
        super.onUserLeaveHint();
    }

    @Override
    public void onVisibleBehindCanceled() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onVisibleBehindCanceled();
        } else {
            super.onVisibleBehindCanceled();
        }
    }

    public void zeusSuperOnVisibleBehindCanceled() {
        super.onVisibleBehindCanceled();
    }

    @Override
    public void onWindowAttributesChanged(WindowManager.LayoutParams layoutParams) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onWindowAttributesChanged(layoutParams);
        } else {
            super.onWindowAttributesChanged(layoutParams);
        }
    }

    public void zeusSuperOnWindowAttributesChanged(WindowManager.LayoutParams layoutParams) {
        super.onWindowAttributesChanged(layoutParams);
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.onWindowFocusChanged(z);
        } else {
            super.onWindowFocusChanged(z);
        }
    }

    public void zeusSuperOnWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
    }

    @Override
    public ActionMode onWindowStartingActionMode(ActionMode.Callback callback) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onWindowStartingActionMode(callback);
        }
        return super.onWindowStartingActionMode(callback);
    }

    public ActionMode zeusSuperOnWindowStartingActionMode(ActionMode.Callback callback) {
        return super.onWindowStartingActionMode(callback);
    }

    @Override
    public ActionMode onWindowStartingActionMode(ActionMode.Callback callback, int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.onWindowStartingActionMode(callback, i);
        }
        return super.onWindowStartingActionMode(callback, i);
    }

    public ActionMode zeusSuperOnWindowStartingActionMode(ActionMode.Callback callback, int i) {
        return super.onWindowStartingActionMode(callback, i);
    }

    @Override
    public void openContextMenu(View view) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.openContextMenu(view);
        } else {
            super.openContextMenu(view);
        }
    }

    public void zeusSuperOpenContextMenu(View view) {
        super.openContextMenu(view);
    }

    @Override
    public void openOptionsMenu() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.openOptionsMenu();
        } else {
            super.openOptionsMenu();
        }
    }

    public void zeusSuperOpenOptionsMenu() {
        super.openOptionsMenu();
    }

    @Override
    public void overridePendingTransition(int i, int i2) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.overridePendingTransition(i, i2);
        } else {
            super.overridePendingTransition(i, i2);
        }
    }

    public void zeusSuperOverridePendingTransition(int i, int i2) {
        super.overridePendingTransition(i, i2);
    }

    @Override
    public void postponeEnterTransition() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.postponeEnterTransition();
        } else {
            super.postponeEnterTransition();
        }
    }

    public void zeusSuperPostponeEnterTransition() {
        super.postponeEnterTransition();
    }

    @Override
    public void recreate() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.recreate();
        } else {
            super.recreate();
        }
    }

    public void zeusSuperRecreate() {
        super.recreate();
    }

    @Override
    public void registerActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.registerActivityLifecycleCallbacks(activityLifecycleCallbacks);
        } else {
            super.registerActivityLifecycleCallbacks(activityLifecycleCallbacks);
        }
    }

    public void zeusSuperRegisterActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        super.registerActivityLifecycleCallbacks(activityLifecycleCallbacks);
    }

    @Override
    public void registerForContextMenu(View view) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.registerForContextMenu(view);
        } else {
            super.registerForContextMenu(view);
        }
    }

    public void zeusSuperRegisterForContextMenu(View view) {
        super.registerForContextMenu(view);
    }

    @Override
    public boolean releaseInstance() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.releaseInstance();
        }
        return super.releaseInstance();
    }

    public boolean zeusSuperReleaseInstance() {
        return super.releaseInstance();
    }

    @Override
    public void reportFullyDrawn() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.reportFullyDrawn();
        } else {
            super.reportFullyDrawn();
        }
    }

    public void zeusSuperReportFullyDrawn() {
        super.reportFullyDrawn();
    }

    @Override
    public DragAndDropPermissions requestDragAndDropPermissions(DragEvent dragEvent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.requestDragAndDropPermissions(dragEvent);
        }
        return super.requestDragAndDropPermissions(dragEvent);
    }

    public DragAndDropPermissions zeusSuperRequestDragAndDropPermissions(DragEvent dragEvent) {
        return super.requestDragAndDropPermissions(dragEvent);
    }

    @Override
    public boolean requestVisibleBehind(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.requestVisibleBehind(z);
        }
        return super.requestVisibleBehind(z);
    }

    public boolean zeusSuperRequestVisibleBehind(boolean z) {
        return super.requestVisibleBehind(z);
    }

    @Override
    public void setActionBar(Toolbar toolbar) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setActionBar(toolbar);
        } else {
            super.setActionBar(toolbar);
        }
    }

    public void zeusSuperSetActionBar(Toolbar toolbar) {
        super.setActionBar(toolbar);
    }

    @Override
    public void setContentTransitionManager(TransitionManager transitionManager) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setContentTransitionManager(transitionManager);
        } else {
            super.setContentTransitionManager(transitionManager);
        }
    }

    public void zeusSuperSetContentTransitionManager(TransitionManager transitionManager) {
        super.setContentTransitionManager(transitionManager);
    }

    @Override
    public void setContentView(int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setContentView(i);
        } else {
            super.setContentView(i);
        }
    }

    public void zeusSuperSetContentView(int i) {
        super.setContentView(i);
    }

    @Override
    public void setContentView(View view) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setContentView(view);
        } else {
            super.setContentView(view);
        }
    }

    public void zeusSuperSetContentView(View view) {
        super.setContentView(view);
    }

    @Override
    public void setContentView(View view, ViewGroup.LayoutParams layoutParams) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setContentView(view, layoutParams);
        } else {
            super.setContentView(view, layoutParams);
        }
    }

    public void zeusSuperSetContentView(View view, ViewGroup.LayoutParams layoutParams) {
        super.setContentView(view, layoutParams);
    }

    @Override
    public void setEnterSharedElementCallback(SharedElementCallback sharedElementCallback) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setEnterSharedElementCallback(sharedElementCallback);
        } else {
            super.setEnterSharedElementCallback(sharedElementCallback);
        }
    }

    public void zeusSuperSetEnterSharedElementCallback(SharedElementCallback sharedElementCallback) {
        super.setEnterSharedElementCallback(sharedElementCallback);
    }

    @Override
    public void setExitSharedElementCallback(SharedElementCallback sharedElementCallback) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setExitSharedElementCallback(sharedElementCallback);
        } else {
            super.setExitSharedElementCallback(sharedElementCallback);
        }
    }

    public void zeusSuperSetExitSharedElementCallback(SharedElementCallback sharedElementCallback) {
        super.setExitSharedElementCallback(sharedElementCallback);
    }

    @Override
    public void setFinishOnTouchOutside(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setFinishOnTouchOutside(z);
        } else {
            super.setFinishOnTouchOutside(z);
        }
    }

    public void zeusSuperSetFinishOnTouchOutside(boolean z) {
        super.setFinishOnTouchOutside(z);
    }

    @Override
    public void setImmersive(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setImmersive(z);
        } else {
            super.setImmersive(z);
        }
    }

    public void zeusSuperSetImmersive(boolean z) {
        super.setImmersive(z);
    }

    @Override
    public void setInheritShowWhenLocked(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setInheritShowWhenLocked(z);
        } else {
            super.setInheritShowWhenLocked(z);
        }
    }

    public void zeusSuperSetInheritShowWhenLocked(boolean z) {
        super.setInheritShowWhenLocked(z);
    }

    @Override
    public void setIntent(Intent intent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setIntent(intent);
        } else {
            super.setIntent(intent);
        }
    }

    public void zeusSuperSetIntent(Intent intent) {
        super.setIntent(intent);
    }

    @Override
    public void setLocusContext(LocusId locusId, Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setLocusContext(locusId, bundle);
        } else {
            super.setLocusContext(locusId, bundle);
        }
    }

    public void zeusSuperSetLocusContext(LocusId locusId, Bundle bundle) {
        super.setLocusContext(locusId, bundle);
    }

    @Override
    public void setPictureInPictureParams(PictureInPictureParams pictureInPictureParams) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setPictureInPictureParams(pictureInPictureParams);
        } else {
            super.setPictureInPictureParams(pictureInPictureParams);
        }
    }

    public void zeusSuperSetPictureInPictureParams(PictureInPictureParams pictureInPictureParams) {
        super.setPictureInPictureParams(pictureInPictureParams);
    }

    @Override
    public void setRequestedOrientation(int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setRequestedOrientation(i);
        } else {
            super.setRequestedOrientation(i);
        }
    }

    public void zeusSuperSetRequestedOrientation(int i) {
        super.setRequestedOrientation(i);
    }

    @Override
    public void setShowWhenLocked(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setShowWhenLocked(z);
        } else {
            super.setShowWhenLocked(z);
        }
    }

    public void zeusSuperSetShowWhenLocked(boolean z) {
        super.setShowWhenLocked(z);
    }

    @Override
    public void setTaskDescription(ActivityManager.TaskDescription taskDescription) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setTaskDescription(taskDescription);
        } else {
            super.setTaskDescription(taskDescription);
        }
    }

    public void zeusSuperSetTaskDescription(ActivityManager.TaskDescription taskDescription) {
        super.setTaskDescription(taskDescription);
    }

    @Override
    public void setTheme(int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setTheme(i);
        } else {
            super.setTheme(i);
        }
    }

    @Override
    public void zeusSuperSetTheme(int i) {
        super.setTheme(i);
    }

    @Override
    public void setTitle(int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setTitle(i);
        } else {
            super.setTitle(i);
        }
    }

    public void zeusSuperSetTitle(int i) {
        super.setTitle(i);
    }

    @Override
    public void setTitle(CharSequence charSequence) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setTitle(charSequence);
        } else {
            super.setTitle(charSequence);
        }
    }

    public void zeusSuperSetTitle(CharSequence charSequence) {
        super.setTitle(charSequence);
    }

    @Override
    public void setTitleColor(int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setTitleColor(i);
        } else {
            super.setTitleColor(i);
        }
    }

    public void zeusSuperSetTitleColor(int i) {
        super.setTitleColor(i);
    }

    @Override
    public boolean setTranslucent(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.setTranslucent(z);
        }
        return super.setTranslucent(z);
    }

    public boolean zeusSuperSetTranslucent(boolean z) {
        return super.setTranslucent(z);
    }

    @Override
    public void setTurnScreenOn(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setTurnScreenOn(z);
        } else {
            super.setTurnScreenOn(z);
        }
    }

    public void zeusSuperSetTurnScreenOn(boolean z) {
        super.setTurnScreenOn(z);
    }

    @Override
    public void setVisible(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setVisible(z);
        } else {
            super.setVisible(z);
        }
    }

    public void zeusSuperSetVisible(boolean z) {
        super.setVisible(z);
    }

    @Override
    public void setVrModeEnabled(boolean z, ComponentName componentName) throws PackageManager.NameNotFoundException {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.setVrModeEnabled(z, componentName);
        } else {
            super.setVrModeEnabled(z, componentName);
        }
    }

    public void zeusSuperSetVrModeEnabled(boolean z, ComponentName componentName) throws PackageManager.NameNotFoundException {
        super.setVrModeEnabled(z, componentName);
    }

    @Override
    public boolean shouldShowRequestPermissionRationale(String str) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.shouldShowRequestPermissionRationale(str);
        }
        return super.shouldShowRequestPermissionRationale(str);
    }

    public boolean zeusSuperShouldShowRequestPermissionRationale(String str) {
        return super.shouldShowRequestPermissionRationale(str);
    }

    @Override
    public boolean shouldUpRecreateTask(Intent intent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.shouldUpRecreateTask(intent);
        }
        return super.shouldUpRecreateTask(intent);
    }

    public boolean zeusSuperShouldUpRecreateTask(Intent intent) {
        return super.shouldUpRecreateTask(intent);
    }

    @Override
    public boolean showAssist(Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.showAssist(bundle);
        }
        return super.showAssist(bundle);
    }

    public boolean zeusSuperShowAssist(Bundle bundle) {
        return super.showAssist(bundle);
    }

    @Override
    public void showLockTaskEscapeMessage() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.showLockTaskEscapeMessage();
        } else {
            super.showLockTaskEscapeMessage();
        }
    }

    public void zeusSuperShowLockTaskEscapeMessage() {
        super.showLockTaskEscapeMessage();
    }

    @Override
    public ActionMode startActionMode(ActionMode.Callback callback) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.startActionMode(callback);
        }
        return super.startActionMode(callback);
    }

    public ActionMode zeusSuperStartActionMode(ActionMode.Callback callback) {
        return super.startActionMode(callback);
    }

    @Override
    public ActionMode startActionMode(ActionMode.Callback callback, int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.startActionMode(callback, i);
        }
        return super.startActionMode(callback, i);
    }

    public ActionMode zeusSuperStartActionMode(ActionMode.Callback callback, int i) {
        return super.startActionMode(callback, i);
    }

    @Override
    public void startActivities(Intent[] intentArr) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startActivities(intentArr);
        } else {
            super.startActivities(intentArr);
        }
    }

    public void zeusSuperStartActivities(Intent[] intentArr) {
        super.startActivities(intentArr);
    }

    @Override
    public void startActivities(Intent[] intentArr, Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startActivities(intentArr, bundle);
        } else {
            super.startActivities(intentArr, bundle);
        }
    }

    public void zeusSuperStartActivities(Intent[] intentArr, Bundle bundle) {
        super.startActivities(intentArr, bundle);
    }

    @Override
    public void startActivity(Intent intent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startActivity(intent);
        } else {
            super.startActivity(intent);
        }
    }

    public void zeusSuperStartActivity(Intent intent) {
        super.startActivity(intent);
    }

    @Override
    public void startActivity(Intent intent, Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startActivity(intent, bundle);
        } else {
            super.startActivity(intent, bundle);
        }
    }

    public void zeusSuperStartActivity(Intent intent, Bundle bundle) {
        super.startActivity(intent, bundle);
    }

    @Override
    public void startActivityForResult(Intent intent, int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startActivityForResult(intent, i);
        } else {
            super.startActivityForResult(intent, i);
        }
    }

    public void zeusSuperStartActivityForResult(Intent intent, int i) {
        super.startActivityForResult(intent, i);
    }

    @Override
    public void startActivityForResult(Intent intent, int i, Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startActivityForResult(intent, i, bundle);
        } else {
            super.startActivityForResult(intent, i, bundle);
        }
    }

    public void zeusSuperStartActivityForResult(Intent intent, int i, Bundle bundle) {
        super.startActivityForResult(intent, i, bundle);
    }

    @Override
    public void startActivityFromChild(Activity activity, Intent intent, int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startActivityFromChild(activity, intent, i);
        } else {
            super.startActivityFromChild(activity, intent, i);
        }
    }

    public void zeusSuperStartActivityFromChild(Activity activity, Intent intent, int i) {
        super.startActivityFromChild(activity, intent, i);
    }

    @Override
    public void startActivityFromChild(Activity activity, Intent intent, int i, Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startActivityFromChild(activity, intent, i, bundle);
        } else {
            super.startActivityFromChild(activity, intent, i, bundle);
        }
    }

    public void zeusSuperStartActivityFromChild(Activity activity, Intent intent, int i, Bundle bundle) {
        super.startActivityFromChild(activity, intent, i, bundle);
    }

    @Override
    public void startActivityFromFragment(Fragment fragment, Intent intent, int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startActivityFromFragment(fragment, intent, i);
        } else {
            super.startActivityFromFragment(fragment, intent, i);
        }
    }

    public void zeusSuperStartActivityFromFragment(Fragment fragment, Intent intent, int i) {
        super.startActivityFromFragment(fragment, intent, i);
    }

    @Override
    public void startActivityFromFragment(Fragment fragment, Intent intent, int i, Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startActivityFromFragment(fragment, intent, i, bundle);
        } else {
            super.startActivityFromFragment(fragment, intent, i, bundle);
        }
    }

    public void zeusSuperStartActivityFromFragment(Fragment fragment, Intent intent, int i, Bundle bundle) {
        super.startActivityFromFragment(fragment, intent, i, bundle);
    }

    @Override
    public boolean startActivityIfNeeded(Intent intent, int i) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.startActivityIfNeeded(intent, i);
        }
        return super.startActivityIfNeeded(intent, i);
    }

    public boolean zeusSuperStartActivityIfNeeded(Intent intent, int i) {
        return super.startActivityIfNeeded(intent, i);
    }

    @Override
    public boolean startActivityIfNeeded(Intent intent, int i, Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.startActivityIfNeeded(intent, i, bundle);
        }
        return super.startActivityIfNeeded(intent, i, bundle);
    }

    public boolean zeusSuperStartActivityIfNeeded(Intent intent, int i, Bundle bundle) {
        return super.startActivityIfNeeded(intent, i, bundle);
    }

    @Override
    public void startIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3) throws IntentSender.SendIntentException {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startIntentSender(intentSender, intent, i, i2, i3);
        } else {
            super.startIntentSender(intentSender, intent, i, i2, i3);
        }
    }

    public void zeusSuperStartIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3) throws IntentSender.SendIntentException {
        super.startIntentSender(intentSender, intent, i, i2, i3);
    }

    @Override
    public void startIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3, Bundle bundle) throws IntentSender.SendIntentException {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startIntentSender(intentSender, intent, i, i2, i3, bundle);
        } else {
            super.startIntentSender(intentSender, intent, i, i2, i3, bundle);
        }
    }

    public void zeusSuperStartIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3, Bundle bundle) throws IntentSender.SendIntentException {
        super.startIntentSender(intentSender, intent, i, i2, i3, bundle);
    }

    @Override
    public void startIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) throws IntentSender.SendIntentException {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4);
        } else {
            super.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4);
        }
    }

    public void zeusSuperStartIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) throws IntentSender.SendIntentException {
        super.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4);
    }

    @Override
    public void startIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) throws IntentSender.SendIntentException {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4, bundle);
        } else {
            super.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4, bundle);
        }
    }

    public void zeusSuperStartIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) throws IntentSender.SendIntentException {
        super.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4, bundle);
    }

    @Override
    public void startIntentSenderFromChild(Activity activity, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) throws IntentSender.SendIntentException {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4);
        } else {
            super.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4);
        }
    }

    public void zeusSuperStartIntentSenderFromChild(Activity activity, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) throws IntentSender.SendIntentException {
        super.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4);
    }

    @Override
    public void startIntentSenderFromChild(Activity activity, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) throws IntentSender.SendIntentException {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4, bundle);
        } else {
            super.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4, bundle);
        }
    }

    public void zeusSuperStartIntentSenderFromChild(Activity activity, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) throws IntentSender.SendIntentException {
        super.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4, bundle);
    }

    @Override
    public void startLocalVoiceInteraction(Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startLocalVoiceInteraction(bundle);
        } else {
            super.startLocalVoiceInteraction(bundle);
        }
    }

    public void zeusSuperStartLocalVoiceInteraction(Bundle bundle) {
        super.startLocalVoiceInteraction(bundle);
    }

    @Override
    public void startLockTask() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startLockTask();
        } else {
            super.startLockTask();
        }
    }

    public void zeusSuperStartLockTask() {
        super.startLockTask();
    }

    @Override
    public void startManagingCursor(Cursor cursor) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startManagingCursor(cursor);
        } else {
            super.startManagingCursor(cursor);
        }
    }

    public void zeusSuperStartManagingCursor(Cursor cursor) {
        super.startManagingCursor(cursor);
    }

    @Override
    public boolean startNextMatchingActivity(Intent intent) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.startNextMatchingActivity(intent);
        }
        return super.startNextMatchingActivity(intent);
    }

    public boolean zeusSuperStartNextMatchingActivity(Intent intent) {
        return super.startNextMatchingActivity(intent);
    }

    @Override
    public boolean startNextMatchingActivity(Intent intent, Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            return generatePluginActivity.startNextMatchingActivity(intent, bundle);
        }
        return super.startNextMatchingActivity(intent, bundle);
    }

    public boolean zeusSuperStartNextMatchingActivity(Intent intent, Bundle bundle) {
        return super.startNextMatchingActivity(intent, bundle);
    }

    @Override
    public void startPostponedEnterTransition() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startPostponedEnterTransition();
        } else {
            super.startPostponedEnterTransition();
        }
    }

    public void zeusSuperStartPostponedEnterTransition() {
        super.startPostponedEnterTransition();
    }

    @Override
    public void startSearch(String str, boolean z, Bundle bundle, boolean z2) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.startSearch(str, z, bundle, z2);
        } else {
            super.startSearch(str, z, bundle, z2);
        }
    }

    public void zeusSuperStartSearch(String str, boolean z, Bundle bundle, boolean z2) {
        super.startSearch(str, z, bundle, z2);
    }

    @Override
    public void stopLocalVoiceInteraction() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.stopLocalVoiceInteraction();
        } else {
            super.stopLocalVoiceInteraction();
        }
    }

    public void zeusSuperStopLocalVoiceInteraction() {
        super.stopLocalVoiceInteraction();
    }

    @Override
    public void stopLockTask() {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.stopLockTask();
        } else {
            super.stopLockTask();
        }
    }

    public void zeusSuperStopLockTask() {
        super.stopLockTask();
    }

    @Override
    public void stopManagingCursor(Cursor cursor) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.stopManagingCursor(cursor);
        } else {
            super.stopManagingCursor(cursor);
        }
    }

    public void zeusSuperStopManagingCursor(Cursor cursor) {
        super.stopManagingCursor(cursor);
    }

    @Override
    public void takeKeyEvents(boolean z) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.takeKeyEvents(z);
        } else {
            super.takeKeyEvents(z);
        }
    }

    public void zeusSuperTakeKeyEvents(boolean z) {
        super.takeKeyEvents(z);
    }

    @Override
    public void triggerSearch(String str, Bundle bundle) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.triggerSearch(str, bundle);
        } else {
            super.triggerSearch(str, bundle);
        }
    }

    public void zeusSuperTriggerSearch(String str, Bundle bundle) {
        super.triggerSearch(str, bundle);
    }

    @Override
    public void unregisterActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.unregisterActivityLifecycleCallbacks(activityLifecycleCallbacks);
        } else {
            super.unregisterActivityLifecycleCallbacks(activityLifecycleCallbacks);
        }
    }

    public void zeusSuperUnregisterActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        super.unregisterActivityLifecycleCallbacks(activityLifecycleCallbacks);
    }

    @Override
    public void unregisterForContextMenu(View view) {
        GeneratePluginActivity generatePluginActivity = this.mTargetActivity;
        if (generatePluginActivity != null) {
            generatePluginActivity.unregisterForContextMenu(view);
        } else {
            super.unregisterForContextMenu(view);
        }
    }

    public void zeusSuperUnregisterForContextMenu(View view) {
        super.unregisterForContextMenu(view);
    }

    public boolean zeusSuperConvertToTranslucent(Activity.TranslucentConversionListener translucentConversionListener, ActivityOptions activityOptions) {
        try {
            Method declaredMethod = Activity.class.getDeclaredMethod("convertToTranslucent", Class.forName("android.app.Activity$TranslucentConversionListener"), ActivityOptions.class);
            declaredMethod.setAccessible(true);
            return ((Boolean) declaredMethod.invoke(this, translucentConversionListener, activityOptions)).booleanValue();
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    @Override
    public Plugin getPlugin() {
        return this.mPlugin;
    }

    @Override
    public void setPlugin(Plugin plugin) {
        this.mPlugin = plugin;
    }

    @Override
    public void setTargetActivity(IPluginActivity iPluginActivity) {
        this.mTargetActivity = (GeneratePluginActivity) iPluginActivity;
    }
}
