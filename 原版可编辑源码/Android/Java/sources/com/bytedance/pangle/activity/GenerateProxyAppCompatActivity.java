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
import android.arch.lifecycle.Lifecycle;
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
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.lang.reflect.Method;
import java.util.List;
import java.util.function.Consumer;

public abstract class GenerateProxyAppCompatActivity extends AppCompatActivity implements b {
    public Plugin mPlugin;
    public GeneratePluginAppCompatActivity mTargetActivity;

    @Override
    public abstract String getPluginPkgName();

    @Override
    public void addContentView(View view, ViewGroup.LayoutParams layoutParams) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.addContentView(view, layoutParams);
        } else {
            super.addContentView(view, layoutParams);
        }
    }

    public void zeusSuperAddContentView(View view, ViewGroup.LayoutParams layoutParams) {
        super.addContentView(view, layoutParams);
    }

    @Override
    public void closeContextMenu() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.closeContextMenu();
        } else {
            super.closeContextMenu();
        }
    }

    public void zeusSuperCloseContextMenu() {
        super.closeContextMenu();
    }

    @Override
    public void closeOptionsMenu() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.closeOptionsMenu();
        } else {
            super.closeOptionsMenu();
        }
    }

    public void zeusSuperCloseOptionsMenu() {
        super.closeOptionsMenu();
    }

    @Override
    public PendingIntent createPendingResult(int i, Intent intent, int i2) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.createPendingResult(i, intent, i2);
        }
        return super.createPendingResult(i, intent, i2);
    }

    public PendingIntent zeusSuperCreatePendingResult(int i, Intent intent, int i2) {
        return super.createPendingResult(i, intent, i2);
    }

    @Override
    public boolean dispatchGenericMotionEvent(MotionEvent motionEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.dispatchGenericMotionEvent(motionEvent);
        }
        return super.dispatchGenericMotionEvent(motionEvent);
    }

    public boolean zeusSuperDispatchGenericMotionEvent(MotionEvent motionEvent) {
        return super.dispatchGenericMotionEvent(motionEvent);
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.dispatchKeyEvent(keyEvent);
        }
        return super.dispatchKeyEvent(keyEvent);
    }

    public boolean zeusSuperDispatchKeyEvent(KeyEvent keyEvent) {
        return super.dispatchKeyEvent(keyEvent);
    }

    @Override
    public boolean dispatchKeyShortcutEvent(KeyEvent keyEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.dispatchKeyShortcutEvent(keyEvent);
        }
        return super.dispatchKeyShortcutEvent(keyEvent);
    }

    public boolean zeusSuperDispatchKeyShortcutEvent(KeyEvent keyEvent) {
        return super.dispatchKeyShortcutEvent(keyEvent);
    }

    @Override
    public boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.dispatchPopulateAccessibilityEvent(accessibilityEvent);
        }
        return super.dispatchPopulateAccessibilityEvent(accessibilityEvent);
    }

    public boolean zeusSuperDispatchPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        return super.dispatchPopulateAccessibilityEvent(accessibilityEvent);
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.dispatchTouchEvent(motionEvent);
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    public boolean zeusSuperDispatchTouchEvent(MotionEvent motionEvent) {
        return super.dispatchTouchEvent(motionEvent);
    }

    @Override
    public boolean dispatchTrackballEvent(MotionEvent motionEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.dispatchTrackballEvent(motionEvent);
        }
        return super.dispatchTrackballEvent(motionEvent);
    }

    public boolean zeusSuperDispatchTrackballEvent(MotionEvent motionEvent) {
        return super.dispatchTrackballEvent(motionEvent);
    }

    @Override
    public void dump(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.dump(str, fileDescriptor, printWriter, strArr);
        } else {
            super.dump(str, fileDescriptor, printWriter, strArr);
        }
    }

    public void zeusSuperDump(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        super.dump(str, fileDescriptor, printWriter, strArr);
    }

    @Override
    public void enterPictureInPictureMode() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.enterPictureInPictureMode();
        } else {
            super.enterPictureInPictureMode();
        }
    }

    public void zeusSuperEnterPictureInPictureMode() {
        super.enterPictureInPictureMode();
    }

    @Override
    public boolean enterPictureInPictureMode(PictureInPictureParams pictureInPictureParams) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.enterPictureInPictureMode(pictureInPictureParams);
        }
        return super.enterPictureInPictureMode(pictureInPictureParams);
    }

    public boolean zeusSuperEnterPictureInPictureMode(PictureInPictureParams pictureInPictureParams) {
        return super.enterPictureInPictureMode(pictureInPictureParams);
    }

    @Override
    public View findViewById(int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.findViewById(i);
        }
        return super.findViewById(i);
    }

    public View zeusSuperFindViewById(int i) {
        return super.findViewById(i);
    }

    @Override
    public void finish() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.finish();
        } else {
            super.finish();
        }
    }

    public void zeusSuperFinish() {
        super.finish();
    }

    @Override
    public void finishActivity(int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.finishActivity(i);
        } else {
            super.finishActivity(i);
        }
    }

    public void zeusSuperFinishActivity(int i) {
        super.finishActivity(i);
    }

    @Override
    public void finishActivityFromChild(Activity activity, int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.finishActivityFromChild(activity, i);
        } else {
            super.finishActivityFromChild(activity, i);
        }
    }

    public void zeusSuperFinishActivityFromChild(Activity activity, int i) {
        super.finishActivityFromChild(activity, i);
    }

    @Override
    public void finishAffinity() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.finishAffinity();
        } else {
            super.finishAffinity();
        }
    }

    public void zeusSuperFinishAffinity() {
        super.finishAffinity();
    }

    @Override
    public void finishAfterTransition() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.finishAfterTransition();
        } else {
            super.finishAfterTransition();
        }
    }

    public void zeusSuperFinishAfterTransition() {
        super.finishAfterTransition();
    }

    @Override
    public void finishAndRemoveTask() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.finishAndRemoveTask();
        } else {
            super.finishAndRemoveTask();
        }
    }

    public void zeusSuperFinishAndRemoveTask() {
        super.finishAndRemoveTask();
    }

    @Override
    public void finishFromChild(Activity activity) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.finishFromChild(activity);
        } else {
            super.finishFromChild(activity);
        }
    }

    public void zeusSuperFinishFromChild(Activity activity) {
        super.finishFromChild(activity);
    }

    @Override
    public ActionBar getActionBar() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getActionBar();
        }
        return super.getActionBar();
    }

    public ActionBar zeusSuperGetActionBar() {
        return super.getActionBar();
    }

    @Override
    public ComponentName getCallingActivity() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getCallingActivity();
        }
        return super.getCallingActivity();
    }

    public ComponentName zeusSuperGetCallingActivity() {
        return super.getCallingActivity();
    }

    @Override
    public String getCallingPackage() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getCallingPackage();
        }
        return super.getCallingPackage();
    }

    public String zeusSuperGetCallingPackage() {
        return super.getCallingPackage();
    }

    @Override
    public int getChangingConfigurations() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getChangingConfigurations();
        }
        return super.getChangingConfigurations();
    }

    public int zeusSuperGetChangingConfigurations() {
        return super.getChangingConfigurations();
    }

    @Override
    public ComponentName getComponentName() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getComponentName();
        }
        return super.getComponentName();
    }

    public ComponentName zeusSuperGetComponentName() {
        return super.getComponentName();
    }

    @Override
    public Scene getContentScene() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getContentScene();
        }
        return super.getContentScene();
    }

    public Scene zeusSuperGetContentScene() {
        return super.getContentScene();
    }

    @Override
    public TransitionManager getContentTransitionManager() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getContentTransitionManager();
        }
        return super.getContentTransitionManager();
    }

    public TransitionManager zeusSuperGetContentTransitionManager() {
        return super.getContentTransitionManager();
    }

    @Override
    public View getCurrentFocus() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getCurrentFocus();
        }
        return super.getCurrentFocus();
    }

    public View zeusSuperGetCurrentFocus() {
        return super.getCurrentFocus();
    }

    @Override
    public FragmentManager getFragmentManager() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getFragmentManager();
        }
        return super.getFragmentManager();
    }

    public FragmentManager zeusSuperGetFragmentManager() {
        return super.getFragmentManager();
    }

    @Override
    public Intent getIntent() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getIntent();
        }
        return super.getIntent();
    }

    public Intent zeusSuperGetIntent() {
        return super.getIntent();
    }

    @Override
    public Object getLastNonConfigurationInstance() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getLastNonConfigurationInstance();
        }
        return super.getLastNonConfigurationInstance();
    }

    public Object zeusSuperGetLastNonConfigurationInstance() {
        return super.getLastNonConfigurationInstance();
    }

    @Override
    public LayoutInflater getLayoutInflater() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getLayoutInflater();
        }
        return super.getLayoutInflater();
    }

    public LayoutInflater zeusSuperGetLayoutInflater() {
        return super.getLayoutInflater();
    }

    @Override
    public LoaderManager getLoaderManager() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getLoaderManager();
        }
        return super.getLoaderManager();
    }

    public LoaderManager zeusSuperGetLoaderManager() {
        return super.getLoaderManager();
    }

    @Override
    public String getLocalClassName() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getLocalClassName();
        }
        return super.getLocalClassName();
    }

    public String zeusSuperGetLocalClassName() {
        return super.getLocalClassName();
    }

    @Override
    public int getMaxNumPictureInPictureActions() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getMaxNumPictureInPictureActions();
        }
        return super.getMaxNumPictureInPictureActions();
    }

    public int zeusSuperGetMaxNumPictureInPictureActions() {
        return super.getMaxNumPictureInPictureActions();
    }

    @Override
    public MenuInflater getMenuInflater() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getMenuInflater();
        }
        return super.getMenuInflater();
    }

    public MenuInflater zeusSuperGetMenuInflater() {
        return super.getMenuInflater();
    }

    @Override
    public Intent getParentActivityIntent() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getParentActivityIntent();
        }
        return super.getParentActivityIntent();
    }

    public Intent zeusSuperGetParentActivityIntent() {
        return super.getParentActivityIntent();
    }

    @Override
    public SharedPreferences getPreferences(int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getPreferences(i);
        }
        return super.getPreferences(i);
    }

    public SharedPreferences zeusSuperGetPreferences(int i) {
        return super.getPreferences(i);
    }

    @Override
    public Uri getReferrer() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getReferrer();
        }
        return super.getReferrer();
    }

    public Uri zeusSuperGetReferrer() {
        return super.getReferrer();
    }

    @Override
    public int getRequestedOrientation() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getRequestedOrientation();
        }
        return super.getRequestedOrientation();
    }

    public int zeusSuperGetRequestedOrientation() {
        return super.getRequestedOrientation();
    }

    @Override
    public Object getSystemService(String str) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getSystemService(str);
        }
        return super.getSystemService(str);
    }

    public Object zeusSuperGetSystemService(String str) {
        return super.getSystemService(str);
    }

    @Override
    public int getTaskId() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getTaskId();
        }
        return super.getTaskId();
    }

    public int zeusSuperGetTaskId() {
        return super.getTaskId();
    }

    @Override
    public VoiceInteractor getVoiceInteractor() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getVoiceInteractor();
        }
        return super.getVoiceInteractor();
    }

    public VoiceInteractor zeusSuperGetVoiceInteractor() {
        return super.getVoiceInteractor();
    }

    @Override
    public Window getWindow() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getWindow();
        }
        return super.getWindow();
    }

    public Window zeusSuperGetWindow() {
        return super.getWindow();
    }

    @Override
    public WindowManager getWindowManager() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getWindowManager();
        }
        return super.getWindowManager();
    }

    public WindowManager zeusSuperGetWindowManager() {
        return super.getWindowManager();
    }

    @Override
    public boolean hasWindowFocus() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.hasWindowFocus();
        }
        return super.hasWindowFocus();
    }

    public boolean zeusSuperHasWindowFocus() {
        return super.hasWindowFocus();
    }

    @Override
    public void invalidateOptionsMenu() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.invalidateOptionsMenu();
        } else {
            super.invalidateOptionsMenu();
        }
    }

    public void zeusSuperInvalidateOptionsMenu() {
        super.invalidateOptionsMenu();
    }

    @Override
    public boolean isActivityTransitionRunning() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.isActivityTransitionRunning();
        }
        return super.isActivityTransitionRunning();
    }

    public boolean zeusSuperIsActivityTransitionRunning() {
        return super.isActivityTransitionRunning();
    }

    @Override
    public boolean isChangingConfigurations() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.isChangingConfigurations();
        }
        return super.isChangingConfigurations();
    }

    public boolean zeusSuperIsChangingConfigurations() {
        return super.isChangingConfigurations();
    }

    @Override
    public boolean isDestroyed() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.isDestroyed();
        }
        return super.isDestroyed();
    }

    public boolean zeusSuperIsDestroyed() {
        return super.isDestroyed();
    }

    @Override
    public boolean isFinishing() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.isFinishing();
        }
        return super.isFinishing();
    }

    public boolean zeusSuperIsFinishing() {
        return super.isFinishing();
    }

    @Override
    public boolean isImmersive() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.isImmersive();
        }
        return super.isImmersive();
    }

    public boolean zeusSuperIsImmersive() {
        return super.isImmersive();
    }

    @Override
    public boolean isInMultiWindowMode() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.isInMultiWindowMode();
        }
        return super.isInMultiWindowMode();
    }

    public boolean zeusSuperIsInMultiWindowMode() {
        return super.isInMultiWindowMode();
    }

    @Override
    public boolean isInPictureInPictureMode() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.isInPictureInPictureMode();
        }
        return super.isInPictureInPictureMode();
    }

    public boolean zeusSuperIsInPictureInPictureMode() {
        return super.isInPictureInPictureMode();
    }

    @Override
    public boolean isLocalVoiceInteractionSupported() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.isLocalVoiceInteractionSupported();
        }
        return super.isLocalVoiceInteractionSupported();
    }

    public boolean zeusSuperIsLocalVoiceInteractionSupported() {
        return super.isLocalVoiceInteractionSupported();
    }

    @Override
    public boolean isTaskRoot() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.isTaskRoot();
        }
        return super.isTaskRoot();
    }

    public boolean zeusSuperIsTaskRoot() {
        return super.isTaskRoot();
    }

    @Override
    public boolean isVoiceInteraction() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.isVoiceInteraction();
        }
        return super.isVoiceInteraction();
    }

    public boolean zeusSuperIsVoiceInteraction() {
        return super.isVoiceInteraction();
    }

    @Override
    public boolean isVoiceInteractionRoot() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.isVoiceInteractionRoot();
        }
        return super.isVoiceInteractionRoot();
    }

    public boolean zeusSuperIsVoiceInteractionRoot() {
        return super.isVoiceInteractionRoot();
    }

    @Override
    public boolean moveTaskToBack(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.moveTaskToBack(z);
        }
        return super.moveTaskToBack(z);
    }

    public boolean zeusSuperMoveTaskToBack(boolean z) {
        return super.moveTaskToBack(z);
    }

    @Override
    public boolean navigateUpTo(Intent intent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.navigateUpTo(intent);
        }
        return super.navigateUpTo(intent);
    }

    public boolean zeusSuperNavigateUpTo(Intent intent) {
        return super.navigateUpTo(intent);
    }

    @Override
    public boolean navigateUpToFromChild(Activity activity, Intent intent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.navigateUpToFromChild(activity, intent);
        }
        return super.navigateUpToFromChild(activity, intent);
    }

    public boolean zeusSuperNavigateUpToFromChild(Activity activity, Intent intent) {
        return super.navigateUpToFromChild(activity, intent);
    }

    @Override
    public void onActionModeFinished(ActionMode actionMode) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onActionModeFinished(actionMode);
        } else {
            super.onActionModeFinished(actionMode);
        }
    }

    public void zeusSuperOnActionModeFinished(ActionMode actionMode) {
        super.onActionModeFinished(actionMode);
    }

    @Override
    public void onActionModeStarted(ActionMode actionMode) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onActionModeStarted(actionMode);
        } else {
            super.onActionModeStarted(actionMode);
        }
    }

    public void zeusSuperOnActionModeStarted(ActionMode actionMode) {
        super.onActionModeStarted(actionMode);
    }

    @Override
    public void onActivityReenter(int i, Intent intent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onActivityReenter(i, intent);
        } else {
            super.onActivityReenter(i, intent);
        }
    }

    public void zeusSuperOnActivityReenter(int i, Intent intent) {
        super.onActivityReenter(i, intent);
    }

    @Override
    protected void onActivityResult(int i, int i2, Intent intent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onActivityResult(i, i2, intent);
        } else {
            super.onActivityResult(i, i2, intent);
        }
    }

    protected void zeusSuperOnActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
    }

    @Override
    protected void onApplyThemeResource(Resources.Theme theme, int i, boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onApplyThemeResource(theme, i, z);
        } else {
            super.onApplyThemeResource(theme, i, z);
        }
    }

    protected void zeusSuperOnApplyThemeResource(Resources.Theme theme, int i, boolean z) {
        super.onApplyThemeResource(theme, i, z);
    }

    @Override
    public void onAttachFragment(Fragment fragment) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onAttachFragment(fragment);
        } else {
            super.onAttachFragment(fragment);
        }
    }

    public void zeusSuperOnAttachFragment(Fragment fragment) {
        super.onAttachFragment(fragment);
    }

    @Override
    public void onAttachedToWindow() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onAttachedToWindow();
        } else {
            super.onAttachedToWindow();
        }
    }

    public void zeusSuperOnAttachedToWindow() {
        super.onAttachedToWindow();
    }

    @Override
    public void onBackPressed() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onBackPressed();
        } else {
            super.onBackPressed();
        }
    }

    public void zeusSuperOnBackPressed() {
        super.onBackPressed();
    }

    @Override
    protected void onChildTitleChanged(Activity activity, CharSequence charSequence) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onChildTitleChanged(activity, charSequence);
        } else {
            super.onChildTitleChanged(activity, charSequence);
        }
    }

    protected void zeusSuperOnChildTitleChanged(Activity activity, CharSequence charSequence) {
        super.onChildTitleChanged(activity, charSequence);
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onConfigurationChanged(configuration);
        } else {
            super.onConfigurationChanged(configuration);
        }
    }

    public void zeusSuperOnConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    @Override
    public void onContentChanged() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onContentChanged();
        } else {
            super.onContentChanged();
        }
    }

    public void zeusSuperOnContentChanged() {
        super.onContentChanged();
    }

    @Override
    public boolean onContextItemSelected(MenuItem menuItem) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onContextItemSelected(menuItem);
        }
        return super.onContextItemSelected(menuItem);
    }

    public boolean zeusSuperOnContextItemSelected(MenuItem menuItem) {
        return super.onContextItemSelected(menuItem);
    }

    @Override
    public void onContextMenuClosed(Menu menu) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onContextMenuClosed(menu);
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
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onCreate(bundle, persistableBundle);
        } else {
            super.onCreate(bundle, persistableBundle);
        }
    }

    public void zeusSuperOnCreate(Bundle bundle, PersistableBundle persistableBundle) {
        super.onCreate(bundle, persistableBundle);
    }

    @Override
    public void onCreateContextMenu(ContextMenu contextMenu, View view, ContextMenu.ContextMenuInfo contextMenuInfo) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onCreateContextMenu(contextMenu, view, contextMenuInfo);
        } else {
            super.onCreateContextMenu(contextMenu, view, contextMenuInfo);
        }
    }

    public void zeusSuperOnCreateContextMenu(ContextMenu contextMenu, View view, ContextMenu.ContextMenuInfo contextMenuInfo) {
        super.onCreateContextMenu(contextMenu, view, contextMenuInfo);
    }

    @Override
    public CharSequence onCreateDescription() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onCreateDescription();
        }
        return super.onCreateDescription();
    }

    public CharSequence zeusSuperOnCreateDescription() {
        return super.onCreateDescription();
    }

    @Override
    protected Dialog onCreateDialog(int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onCreateDialog(i);
        }
        return super.onCreateDialog(i);
    }

    protected Dialog zeusSuperOnCreateDialog(int i) {
        return super.onCreateDialog(i);
    }

    @Override
    protected Dialog onCreateDialog(int i, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onCreateDialog(i, bundle);
        }
        return super.onCreateDialog(i, bundle);
    }

    protected Dialog zeusSuperOnCreateDialog(int i, Bundle bundle) {
        return super.onCreateDialog(i, bundle);
    }

    @Override
    public void onCreateNavigateUpTaskStack(TaskStackBuilder taskStackBuilder) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onCreateNavigateUpTaskStack(taskStackBuilder);
        } else {
            super.onCreateNavigateUpTaskStack(taskStackBuilder);
        }
    }

    public void zeusSuperOnCreateNavigateUpTaskStack(TaskStackBuilder taskStackBuilder) {
        super.onCreateNavigateUpTaskStack(taskStackBuilder);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onCreateOptionsMenu(menu);
        }
        return super.onCreateOptionsMenu(menu);
    }

    public boolean zeusSuperOnCreateOptionsMenu(Menu menu) {
        return super.onCreateOptionsMenu(menu);
    }

    @Override
    public boolean onCreatePanelMenu(int i, Menu menu) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onCreatePanelMenu(i, menu);
        }
        return super.onCreatePanelMenu(i, menu);
    }

    public boolean zeusSuperOnCreatePanelMenu(int i, Menu menu) {
        return super.onCreatePanelMenu(i, menu);
    }

    @Override
    public View onCreatePanelView(int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onCreatePanelView(i);
        }
        return super.onCreatePanelView(i);
    }

    public View zeusSuperOnCreatePanelView(int i) {
        return super.onCreatePanelView(i);
    }

    @Override
    public boolean onCreateThumbnail(Bitmap bitmap, Canvas canvas) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onCreateThumbnail(bitmap, canvas);
        }
        return super.onCreateThumbnail(bitmap, canvas);
    }

    public boolean zeusSuperOnCreateThumbnail(Bitmap bitmap, Canvas canvas) {
        return super.onCreateThumbnail(bitmap, canvas);
    }

    @Override
    public View onCreateView(View view, String str, Context context, AttributeSet attributeSet) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onCreateView(view, str, context, attributeSet);
        }
        return super.onCreateView(view, str, context, attributeSet);
    }

    public View zeusSuperOnCreateView(View view, String str, Context context, AttributeSet attributeSet) {
        return super.onCreateView(view, str, context, attributeSet);
    }

    @Override
    public View onCreateView(String str, Context context, AttributeSet attributeSet) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onCreateView(str, context, attributeSet);
        }
        return super.onCreateView(str, context, attributeSet);
    }

    public View zeusSuperOnCreateView(String str, Context context, AttributeSet attributeSet) {
        return super.onCreateView(str, context, attributeSet);
    }

    @Override
    protected void onDestroy() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onDestroy();
        } else {
            super.onDestroy();
        }
    }

    protected void zeusSuperOnDestroy() {
        super.onDestroy();
    }

    @Override
    public void onDetachedFromWindow() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onDetachedFromWindow();
        } else {
            super.onDetachedFromWindow();
        }
    }

    public void zeusSuperOnDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    @Override
    public void onEnterAnimationComplete() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onEnterAnimationComplete();
        } else {
            super.onEnterAnimationComplete();
        }
    }

    public void zeusSuperOnEnterAnimationComplete() {
        super.onEnterAnimationComplete();
    }

    @Override
    public boolean onGenericMotionEvent(MotionEvent motionEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onGenericMotionEvent(motionEvent);
        }
        return super.onGenericMotionEvent(motionEvent);
    }

    public boolean zeusSuperOnGenericMotionEvent(MotionEvent motionEvent) {
        return super.onGenericMotionEvent(motionEvent);
    }

    @Override
    public void onGetDirectActions(CancellationSignal cancellationSignal, Consumer consumer) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onGetDirectActions(cancellationSignal, consumer);
        } else {
            super.onGetDirectActions(cancellationSignal, consumer);
        }
    }

    public void zeusSuperOnGetDirectActions(CancellationSignal cancellationSignal, Consumer consumer) {
        super.onGetDirectActions(cancellationSignal, consumer);
    }

    @Override
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onKeyDown(i, keyEvent);
        }
        return super.onKeyDown(i, keyEvent);
    }

    public boolean zeusSuperOnKeyDown(int i, KeyEvent keyEvent) {
        return super.onKeyDown(i, keyEvent);
    }

    @Override
    public boolean onKeyLongPress(int i, KeyEvent keyEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onKeyLongPress(i, keyEvent);
        }
        return super.onKeyLongPress(i, keyEvent);
    }

    public boolean zeusSuperOnKeyLongPress(int i, KeyEvent keyEvent) {
        return super.onKeyLongPress(i, keyEvent);
    }

    @Override
    public boolean onKeyMultiple(int i, int i2, KeyEvent keyEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onKeyMultiple(i, i2, keyEvent);
        }
        return super.onKeyMultiple(i, i2, keyEvent);
    }

    public boolean zeusSuperOnKeyMultiple(int i, int i2, KeyEvent keyEvent) {
        return super.onKeyMultiple(i, i2, keyEvent);
    }

    @Override
    public boolean onKeyShortcut(int i, KeyEvent keyEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onKeyShortcut(i, keyEvent);
        }
        return super.onKeyShortcut(i, keyEvent);
    }

    public boolean zeusSuperOnKeyShortcut(int i, KeyEvent keyEvent) {
        return super.onKeyShortcut(i, keyEvent);
    }

    @Override
    public boolean onKeyUp(int i, KeyEvent keyEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onKeyUp(i, keyEvent);
        }
        return super.onKeyUp(i, keyEvent);
    }

    public boolean zeusSuperOnKeyUp(int i, KeyEvent keyEvent) {
        return super.onKeyUp(i, keyEvent);
    }

    @Override
    public void onLocalVoiceInteractionStarted() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onLocalVoiceInteractionStarted();
        } else {
            super.onLocalVoiceInteractionStarted();
        }
    }

    public void zeusSuperOnLocalVoiceInteractionStarted() {
        super.onLocalVoiceInteractionStarted();
    }

    @Override
    public void onLocalVoiceInteractionStopped() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onLocalVoiceInteractionStopped();
        } else {
            super.onLocalVoiceInteractionStopped();
        }
    }

    public void zeusSuperOnLocalVoiceInteractionStopped() {
        super.onLocalVoiceInteractionStopped();
    }

    @Override
    public void onLowMemory() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onLowMemory();
        } else {
            super.onLowMemory();
        }
    }

    public void zeusSuperOnLowMemory() {
        super.onLowMemory();
    }

    @Override
    public boolean onMenuOpened(int i, Menu menu) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onMenuOpened(i, menu);
        }
        return super.onMenuOpened(i, menu);
    }

    public boolean zeusSuperOnMenuOpened(int i, Menu menu) {
        return super.onMenuOpened(i, menu);
    }

    @Override
    public void onMultiWindowModeChanged(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onMultiWindowModeChanged(z);
        } else {
            super.onMultiWindowModeChanged(z);
        }
    }

    public void zeusSuperOnMultiWindowModeChanged(boolean z) {
        super.onMultiWindowModeChanged(z);
    }

    @Override
    public void onMultiWindowModeChanged(boolean z, Configuration configuration) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onMultiWindowModeChanged(z, configuration);
        } else {
            super.onMultiWindowModeChanged(z, configuration);
        }
    }

    public void zeusSuperOnMultiWindowModeChanged(boolean z, Configuration configuration) {
        super.onMultiWindowModeChanged(z, configuration);
    }

    @Override
    public boolean onNavigateUp() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onNavigateUp();
        }
        return super.onNavigateUp();
    }

    public boolean zeusSuperOnNavigateUp() {
        return super.onNavigateUp();
    }

    @Override
    public boolean onNavigateUpFromChild(Activity activity) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onNavigateUpFromChild(activity);
        }
        return super.onNavigateUpFromChild(activity);
    }

    public boolean zeusSuperOnNavigateUpFromChild(Activity activity) {
        return super.onNavigateUpFromChild(activity);
    }

    @Override
    protected void onNewIntent(Intent intent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onNewIntent(intent);
        } else {
            super.onNewIntent(intent);
        }
    }

    protected void zeusSuperOnNewIntent(Intent intent) {
        super.onNewIntent(intent);
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem menuItem) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onOptionsItemSelected(menuItem);
        }
        return super.onOptionsItemSelected(menuItem);
    }

    public boolean zeusSuperOnOptionsItemSelected(MenuItem menuItem) {
        return super.onOptionsItemSelected(menuItem);
    }

    @Override
    public void onOptionsMenuClosed(Menu menu) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onOptionsMenuClosed(menu);
        } else {
            super.onOptionsMenuClosed(menu);
        }
    }

    public void zeusSuperOnOptionsMenuClosed(Menu menu) {
        super.onOptionsMenuClosed(menu);
    }

    @Override
    public void onPanelClosed(int i, Menu menu) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onPanelClosed(i, menu);
        } else {
            super.onPanelClosed(i, menu);
        }
    }

    public void zeusSuperOnPanelClosed(int i, Menu menu) {
        super.onPanelClosed(i, menu);
    }

    @Override
    protected void onPause() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onPause();
        } else {
            super.onPause();
        }
    }

    protected void zeusSuperOnPause() {
        super.onPause();
    }

    @Override
    public void onPerformDirectAction(String str, Bundle bundle, CancellationSignal cancellationSignal, Consumer consumer) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onPerformDirectAction(str, bundle, cancellationSignal, consumer);
        } else {
            super.onPerformDirectAction(str, bundle, cancellationSignal, consumer);
        }
    }

    public void zeusSuperOnPerformDirectAction(String str, Bundle bundle, CancellationSignal cancellationSignal, Consumer consumer) {
        super.onPerformDirectAction(str, bundle, cancellationSignal, consumer);
    }

    @Override
    public void onPictureInPictureModeChanged(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onPictureInPictureModeChanged(z);
        } else {
            super.onPictureInPictureModeChanged(z);
        }
    }

    public void zeusSuperOnPictureInPictureModeChanged(boolean z) {
        super.onPictureInPictureModeChanged(z);
    }

    @Override
    public void onPictureInPictureModeChanged(boolean z, Configuration configuration) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onPictureInPictureModeChanged(z, configuration);
        } else {
            super.onPictureInPictureModeChanged(z, configuration);
        }
    }

    public void zeusSuperOnPictureInPictureModeChanged(boolean z, Configuration configuration) {
        super.onPictureInPictureModeChanged(z, configuration);
    }

    @Override
    public boolean onPictureInPictureRequested() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onPictureInPictureRequested();
        }
        return super.onPictureInPictureRequested();
    }

    public boolean zeusSuperOnPictureInPictureRequested() {
        return super.onPictureInPictureRequested();
    }

    @Override
    protected void onPostCreate(Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onPostCreate(bundle);
        } else {
            super.onPostCreate(bundle);
        }
    }

    protected void zeusSuperOnPostCreate(Bundle bundle) {
        super.onPostCreate(bundle);
    }

    @Override
    public void onPostCreate(Bundle bundle, PersistableBundle persistableBundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onPostCreate(bundle, persistableBundle);
        } else {
            super.onPostCreate(bundle, persistableBundle);
        }
    }

    public void zeusSuperOnPostCreate(Bundle bundle, PersistableBundle persistableBundle) {
        super.onPostCreate(bundle, persistableBundle);
    }

    @Override
    protected void onPostResume() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onPostResume();
        } else {
            super.onPostResume();
        }
    }

    protected void zeusSuperOnPostResume() {
        super.onPostResume();
    }

    @Override
    protected void onPrepareDialog(int i, Dialog dialog) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onPrepareDialog(i, dialog);
        } else {
            super.onPrepareDialog(i, dialog);
        }
    }

    protected void zeusSuperOnPrepareDialog(int i, Dialog dialog) {
        super.onPrepareDialog(i, dialog);
    }

    @Override
    protected void onPrepareDialog(int i, Dialog dialog, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onPrepareDialog(i, dialog, bundle);
        } else {
            super.onPrepareDialog(i, dialog, bundle);
        }
    }

    protected void zeusSuperOnPrepareDialog(int i, Dialog dialog, Bundle bundle) {
        super.onPrepareDialog(i, dialog, bundle);
    }

    @Override
    public void onPrepareNavigateUpTaskStack(TaskStackBuilder taskStackBuilder) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onPrepareNavigateUpTaskStack(taskStackBuilder);
        } else {
            super.onPrepareNavigateUpTaskStack(taskStackBuilder);
        }
    }

    public void zeusSuperOnPrepareNavigateUpTaskStack(TaskStackBuilder taskStackBuilder) {
        super.onPrepareNavigateUpTaskStack(taskStackBuilder);
    }

    @Override
    public boolean onPrepareOptionsMenu(Menu menu) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onPrepareOptionsMenu(menu);
        }
        return super.onPrepareOptionsMenu(menu);
    }

    public boolean zeusSuperOnPrepareOptionsMenu(Menu menu) {
        return super.onPrepareOptionsMenu(menu);
    }

    @Override
    public boolean onPreparePanel(int i, View view, Menu menu) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onPreparePanel(i, view, menu);
        }
        return super.onPreparePanel(i, view, menu);
    }

    public boolean zeusSuperOnPreparePanel(int i, View view, Menu menu) {
        return super.onPreparePanel(i, view, menu);
    }

    @Override
    public void onProvideAssistContent(AssistContent assistContent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onProvideAssistContent(assistContent);
        } else {
            super.onProvideAssistContent(assistContent);
        }
    }

    public void zeusSuperOnProvideAssistContent(AssistContent assistContent) {
        super.onProvideAssistContent(assistContent);
    }

    @Override
    public void onProvideAssistData(Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onProvideAssistData(bundle);
        } else {
            super.onProvideAssistData(bundle);
        }
    }

    public void zeusSuperOnProvideAssistData(Bundle bundle) {
        super.onProvideAssistData(bundle);
    }

    @Override
    public void onProvideKeyboardShortcuts(List list, Menu menu, int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onProvideKeyboardShortcuts(list, menu, i);
        } else {
            super.onProvideKeyboardShortcuts(list, menu, i);
        }
    }

    public void zeusSuperOnProvideKeyboardShortcuts(List list, Menu menu, int i) {
        super.onProvideKeyboardShortcuts(list, menu, i);
    }

    @Override
    public Uri onProvideReferrer() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onProvideReferrer();
        }
        return super.onProvideReferrer();
    }

    public Uri zeusSuperOnProvideReferrer() {
        return super.onProvideReferrer();
    }

    @Override
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onRequestPermissionsResult(i, strArr, iArr);
        } else {
            super.onRequestPermissionsResult(i, strArr, iArr);
        }
    }

    public void zeusSuperOnRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        super.onRequestPermissionsResult(i, strArr, iArr);
    }

    @Override
    protected void onRestart() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onRestart();
        } else {
            super.onRestart();
        }
    }

    protected void zeusSuperOnRestart() {
        super.onRestart();
    }

    @Override
    protected void onRestoreInstanceState(Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onRestoreInstanceState(bundle);
        } else {
            super.onRestoreInstanceState(bundle);
        }
    }

    protected void zeusSuperOnRestoreInstanceState(Bundle bundle) {
        super.onRestoreInstanceState(bundle);
    }

    @Override
    public void onRestoreInstanceState(Bundle bundle, PersistableBundle persistableBundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onRestoreInstanceState(bundle, persistableBundle);
        } else {
            super.onRestoreInstanceState(bundle, persistableBundle);
        }
    }

    public void zeusSuperOnRestoreInstanceState(Bundle bundle, PersistableBundle persistableBundle) {
        super.onRestoreInstanceState(bundle, persistableBundle);
    }

    @Override
    protected void onResume() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onResume();
        } else {
            super.onResume();
        }
    }

    protected void zeusSuperOnResume() {
        super.onResume();
    }

    @Override
    protected void onSaveInstanceState(Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onSaveInstanceState(bundle);
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
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onSaveInstanceState(bundle, persistableBundle);
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
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onSearchRequested();
        }
        return super.onSearchRequested();
    }

    public boolean zeusSuperOnSearchRequested() {
        return super.onSearchRequested();
    }

    @Override
    public boolean onSearchRequested(SearchEvent searchEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onSearchRequested(searchEvent);
        }
        return super.onSearchRequested(searchEvent);
    }

    public boolean zeusSuperOnSearchRequested(SearchEvent searchEvent) {
        return super.onSearchRequested(searchEvent);
    }

    @Override
    protected void onStart() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onStart();
        } else {
            super.onStart();
        }
    }

    protected void zeusSuperOnStart() {
        super.onStart();
    }

    @Override
    public void onStateNotSaved() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onStateNotSaved();
        } else {
            super.onStateNotSaved();
        }
    }

    public void zeusSuperOnStateNotSaved() {
        super.onStateNotSaved();
    }

    @Override
    protected void onStop() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onStop();
        } else {
            super.onStop();
        }
    }

    protected void zeusSuperOnStop() {
        super.onStop();
    }

    @Override
    protected void onTitleChanged(CharSequence charSequence, int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onTitleChanged(charSequence, i);
        } else {
            super.onTitleChanged(charSequence, i);
        }
    }

    protected void zeusSuperOnTitleChanged(CharSequence charSequence, int i) {
        super.onTitleChanged(charSequence, i);
    }

    @Override
    public void onTopResumedActivityChanged(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onTopResumedActivityChanged(z);
        } else {
            super.onTopResumedActivityChanged(z);
        }
    }

    public void zeusSuperOnTopResumedActivityChanged(boolean z) {
        super.onTopResumedActivityChanged(z);
    }

    @Override
    public boolean onTouchEvent(MotionEvent motionEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onTouchEvent(motionEvent);
        }
        return super.onTouchEvent(motionEvent);
    }

    public boolean zeusSuperOnTouchEvent(MotionEvent motionEvent) {
        return super.onTouchEvent(motionEvent);
    }

    @Override
    public boolean onTrackballEvent(MotionEvent motionEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onTrackballEvent(motionEvent);
        }
        return super.onTrackballEvent(motionEvent);
    }

    public boolean zeusSuperOnTrackballEvent(MotionEvent motionEvent) {
        return super.onTrackballEvent(motionEvent);
    }

    @Override
    public void onTrimMemory(int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onTrimMemory(i);
        } else {
            super.onTrimMemory(i);
        }
    }

    public void zeusSuperOnTrimMemory(int i) {
        super.onTrimMemory(i);
    }

    @Override
    public void onUserInteraction() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onUserInteraction();
        } else {
            super.onUserInteraction();
        }
    }

    public void zeusSuperOnUserInteraction() {
        super.onUserInteraction();
    }

    @Override
    protected void onUserLeaveHint() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onUserLeaveHint();
        } else {
            super.onUserLeaveHint();
        }
    }

    protected void zeusSuperOnUserLeaveHint() {
        super.onUserLeaveHint();
    }

    @Override
    public void onVisibleBehindCanceled() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onVisibleBehindCanceled();
        } else {
            super.onVisibleBehindCanceled();
        }
    }

    public void zeusSuperOnVisibleBehindCanceled() {
        super.onVisibleBehindCanceled();
    }

    @Override
    public void onWindowAttributesChanged(WindowManager.LayoutParams layoutParams) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onWindowAttributesChanged(layoutParams);
        } else {
            super.onWindowAttributesChanged(layoutParams);
        }
    }

    public void zeusSuperOnWindowAttributesChanged(WindowManager.LayoutParams layoutParams) {
        super.onWindowAttributesChanged(layoutParams);
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.onWindowFocusChanged(z);
        } else {
            super.onWindowFocusChanged(z);
        }
    }

    public void zeusSuperOnWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
    }

    @Override
    public ActionMode onWindowStartingActionMode(ActionMode.Callback callback) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onWindowStartingActionMode(callback);
        }
        return super.onWindowStartingActionMode(callback);
    }

    public ActionMode zeusSuperOnWindowStartingActionMode(ActionMode.Callback callback) {
        return super.onWindowStartingActionMode(callback);
    }

    @Override
    public ActionMode onWindowStartingActionMode(ActionMode.Callback callback, int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.onWindowStartingActionMode(callback, i);
        }
        return super.onWindowStartingActionMode(callback, i);
    }

    public ActionMode zeusSuperOnWindowStartingActionMode(ActionMode.Callback callback, int i) {
        return super.onWindowStartingActionMode(callback, i);
    }

    @Override
    public void openContextMenu(View view) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.openContextMenu(view);
        } else {
            super.openContextMenu(view);
        }
    }

    public void zeusSuperOpenContextMenu(View view) {
        super.openContextMenu(view);
    }

    @Override
    public void openOptionsMenu() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.openOptionsMenu();
        } else {
            super.openOptionsMenu();
        }
    }

    public void zeusSuperOpenOptionsMenu() {
        super.openOptionsMenu();
    }

    @Override
    public void overridePendingTransition(int i, int i2) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.overridePendingTransition(i, i2);
        } else {
            super.overridePendingTransition(i, i2);
        }
    }

    public void zeusSuperOverridePendingTransition(int i, int i2) {
        super.overridePendingTransition(i, i2);
    }

    @Override
    public void postponeEnterTransition() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.postponeEnterTransition();
        } else {
            super.postponeEnterTransition();
        }
    }

    public void zeusSuperPostponeEnterTransition() {
        super.postponeEnterTransition();
    }

    @Override
    public void recreate() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.recreate();
        } else {
            super.recreate();
        }
    }

    public void zeusSuperRecreate() {
        super.recreate();
    }

    @Override
    public void registerActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.registerActivityLifecycleCallbacks(activityLifecycleCallbacks);
        } else {
            super.registerActivityLifecycleCallbacks(activityLifecycleCallbacks);
        }
    }

    public void zeusSuperRegisterActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        super.registerActivityLifecycleCallbacks(activityLifecycleCallbacks);
    }

    @Override
    public void registerForContextMenu(View view) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.registerForContextMenu(view);
        } else {
            super.registerForContextMenu(view);
        }
    }

    public void zeusSuperRegisterForContextMenu(View view) {
        super.registerForContextMenu(view);
    }

    @Override
    public boolean releaseInstance() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.releaseInstance();
        }
        return super.releaseInstance();
    }

    public boolean zeusSuperReleaseInstance() {
        return super.releaseInstance();
    }

    @Override
    public void reportFullyDrawn() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.reportFullyDrawn();
        } else {
            super.reportFullyDrawn();
        }
    }

    public void zeusSuperReportFullyDrawn() {
        super.reportFullyDrawn();
    }

    @Override
    public DragAndDropPermissions requestDragAndDropPermissions(DragEvent dragEvent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.requestDragAndDropPermissions(dragEvent);
        }
        return super.requestDragAndDropPermissions(dragEvent);
    }

    public DragAndDropPermissions zeusSuperRequestDragAndDropPermissions(DragEvent dragEvent) {
        return super.requestDragAndDropPermissions(dragEvent);
    }

    @Override
    public boolean requestVisibleBehind(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.requestVisibleBehind(z);
        }
        return super.requestVisibleBehind(z);
    }

    public boolean zeusSuperRequestVisibleBehind(boolean z) {
        return super.requestVisibleBehind(z);
    }

    @Override
    public void setActionBar(Toolbar toolbar) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setActionBar(toolbar);
        } else {
            super.setActionBar(toolbar);
        }
    }

    public void zeusSuperSetActionBar(Toolbar toolbar) {
        super.setActionBar(toolbar);
    }

    @Override
    public void setContentTransitionManager(TransitionManager transitionManager) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setContentTransitionManager(transitionManager);
        } else {
            super.setContentTransitionManager(transitionManager);
        }
    }

    public void zeusSuperSetContentTransitionManager(TransitionManager transitionManager) {
        super.setContentTransitionManager(transitionManager);
    }

    @Override
    public void setContentView(int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setContentView(i);
        } else {
            super.setContentView(i);
        }
    }

    public void zeusSuperSetContentView(int i) {
        super.setContentView(i);
    }

    @Override
    public void setContentView(View view) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setContentView(view);
        } else {
            super.setContentView(view);
        }
    }

    public void zeusSuperSetContentView(View view) {
        super.setContentView(view);
    }

    @Override
    public void setContentView(View view, ViewGroup.LayoutParams layoutParams) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setContentView(view, layoutParams);
        } else {
            super.setContentView(view, layoutParams);
        }
    }

    public void zeusSuperSetContentView(View view, ViewGroup.LayoutParams layoutParams) {
        super.setContentView(view, layoutParams);
    }

    @Override
    public void setEnterSharedElementCallback(SharedElementCallback sharedElementCallback) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setEnterSharedElementCallback(sharedElementCallback);
        } else {
            super.setEnterSharedElementCallback(sharedElementCallback);
        }
    }

    public void zeusSuperSetEnterSharedElementCallback(SharedElementCallback sharedElementCallback) {
        super.setEnterSharedElementCallback(sharedElementCallback);
    }

    @Override
    public void setExitSharedElementCallback(SharedElementCallback sharedElementCallback) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setExitSharedElementCallback(sharedElementCallback);
        } else {
            super.setExitSharedElementCallback(sharedElementCallback);
        }
    }

    public void zeusSuperSetExitSharedElementCallback(SharedElementCallback sharedElementCallback) {
        super.setExitSharedElementCallback(sharedElementCallback);
    }

    @Override
    public void setFinishOnTouchOutside(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setFinishOnTouchOutside(z);
        } else {
            super.setFinishOnTouchOutside(z);
        }
    }

    public void zeusSuperSetFinishOnTouchOutside(boolean z) {
        super.setFinishOnTouchOutside(z);
    }

    @Override
    public void setImmersive(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setImmersive(z);
        } else {
            super.setImmersive(z);
        }
    }

    public void zeusSuperSetImmersive(boolean z) {
        super.setImmersive(z);
    }

    @Override
    public void setInheritShowWhenLocked(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setInheritShowWhenLocked(z);
        } else {
            super.setInheritShowWhenLocked(z);
        }
    }

    public void zeusSuperSetInheritShowWhenLocked(boolean z) {
        super.setInheritShowWhenLocked(z);
    }

    @Override
    public void setIntent(Intent intent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setIntent(intent);
        } else {
            super.setIntent(intent);
        }
    }

    public void zeusSuperSetIntent(Intent intent) {
        super.setIntent(intent);
    }

    @Override
    public void setLocusContext(LocusId locusId, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setLocusContext(locusId, bundle);
        } else {
            super.setLocusContext(locusId, bundle);
        }
    }

    public void zeusSuperSetLocusContext(LocusId locusId, Bundle bundle) {
        super.setLocusContext(locusId, bundle);
    }

    @Override
    public void setPictureInPictureParams(PictureInPictureParams pictureInPictureParams) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setPictureInPictureParams(pictureInPictureParams);
        } else {
            super.setPictureInPictureParams(pictureInPictureParams);
        }
    }

    public void zeusSuperSetPictureInPictureParams(PictureInPictureParams pictureInPictureParams) {
        super.setPictureInPictureParams(pictureInPictureParams);
    }

    @Override
    public void setRequestedOrientation(int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setRequestedOrientation(i);
        } else {
            super.setRequestedOrientation(i);
        }
    }

    public void zeusSuperSetRequestedOrientation(int i) {
        super.setRequestedOrientation(i);
    }

    @Override
    public void setShowWhenLocked(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setShowWhenLocked(z);
        } else {
            super.setShowWhenLocked(z);
        }
    }

    public void zeusSuperSetShowWhenLocked(boolean z) {
        super.setShowWhenLocked(z);
    }

    @Override
    public void setTaskDescription(ActivityManager.TaskDescription taskDescription) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setTaskDescription(taskDescription);
        } else {
            super.setTaskDescription(taskDescription);
        }
    }

    public void zeusSuperSetTaskDescription(ActivityManager.TaskDescription taskDescription) {
        super.setTaskDescription(taskDescription);
    }

    @Override
    public void setTheme(int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setTheme(i);
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
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setTitle(i);
        } else {
            super.setTitle(i);
        }
    }

    public void zeusSuperSetTitle(int i) {
        super.setTitle(i);
    }

    @Override
    public void setTitle(CharSequence charSequence) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setTitle(charSequence);
        } else {
            super.setTitle(charSequence);
        }
    }

    public void zeusSuperSetTitle(CharSequence charSequence) {
        super.setTitle(charSequence);
    }

    @Override
    public void setTitleColor(int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setTitleColor(i);
        } else {
            super.setTitleColor(i);
        }
    }

    public void zeusSuperSetTitleColor(int i) {
        super.setTitleColor(i);
    }

    @Override
    public boolean setTranslucent(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.setTranslucent(z);
        }
        return super.setTranslucent(z);
    }

    public boolean zeusSuperSetTranslucent(boolean z) {
        return super.setTranslucent(z);
    }

    @Override
    public void setTurnScreenOn(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setTurnScreenOn(z);
        } else {
            super.setTurnScreenOn(z);
        }
    }

    public void zeusSuperSetTurnScreenOn(boolean z) {
        super.setTurnScreenOn(z);
    }

    @Override
    public void setVisible(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setVisible(z);
        } else {
            super.setVisible(z);
        }
    }

    public void zeusSuperSetVisible(boolean z) {
        super.setVisible(z);
    }

    @Override
    public void setVrModeEnabled(boolean z, ComponentName componentName) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.setVrModeEnabled(z, componentName);
        } else {
            super.setVrModeEnabled(z, componentName);
        }
    }

    public void zeusSuperSetVrModeEnabled(boolean z, ComponentName componentName) {
        super.setVrModeEnabled(z, componentName);
    }

    @Override
    public boolean shouldShowRequestPermissionRationale(String str) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.shouldShowRequestPermissionRationale(str);
        }
        return super.shouldShowRequestPermissionRationale(str);
    }

    public boolean zeusSuperShouldShowRequestPermissionRationale(String str) {
        return super.shouldShowRequestPermissionRationale(str);
    }

    @Override
    public boolean shouldUpRecreateTask(Intent intent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.shouldUpRecreateTask(intent);
        }
        return super.shouldUpRecreateTask(intent);
    }

    public boolean zeusSuperShouldUpRecreateTask(Intent intent) {
        return super.shouldUpRecreateTask(intent);
    }

    @Override
    public boolean showAssist(Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.showAssist(bundle);
        }
        return super.showAssist(bundle);
    }

    public boolean zeusSuperShowAssist(Bundle bundle) {
        return super.showAssist(bundle);
    }

    @Override
    public void showLockTaskEscapeMessage() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.showLockTaskEscapeMessage();
        } else {
            super.showLockTaskEscapeMessage();
        }
    }

    public void zeusSuperShowLockTaskEscapeMessage() {
        super.showLockTaskEscapeMessage();
    }

    @Override
    public ActionMode startActionMode(ActionMode.Callback callback) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.startActionMode(callback);
        }
        return super.startActionMode(callback);
    }

    public ActionMode zeusSuperStartActionMode(ActionMode.Callback callback) {
        return super.startActionMode(callback);
    }

    @Override
    public ActionMode startActionMode(ActionMode.Callback callback, int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.startActionMode(callback, i);
        }
        return super.startActionMode(callback, i);
    }

    public ActionMode zeusSuperStartActionMode(ActionMode.Callback callback, int i) {
        return super.startActionMode(callback, i);
    }

    @Override
    public void startActivities(Intent[] intentArr) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startActivities(intentArr);
        } else {
            super.startActivities(intentArr);
        }
    }

    public void zeusSuperStartActivities(Intent[] intentArr) {
        super.startActivities(intentArr);
    }

    @Override
    public void startActivities(Intent[] intentArr, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startActivities(intentArr, bundle);
        } else {
            super.startActivities(intentArr, bundle);
        }
    }

    public void zeusSuperStartActivities(Intent[] intentArr, Bundle bundle) {
        super.startActivities(intentArr, bundle);
    }

    @Override
    public void startActivity(Intent intent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startActivity(intent);
        } else {
            super.startActivity(intent);
        }
    }

    public void zeusSuperStartActivity(Intent intent) {
        super.startActivity(intent);
    }

    @Override
    public void startActivity(Intent intent, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startActivity(intent, bundle);
        } else {
            super.startActivity(intent, bundle);
        }
    }

    public void zeusSuperStartActivity(Intent intent, Bundle bundle) {
        super.startActivity(intent, bundle);
    }

    @Override
    public void startActivityForResult(Intent intent, int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startActivityForResult(intent, i);
        } else {
            super.startActivityForResult(intent, i);
        }
    }

    public void zeusSuperStartActivityForResult(Intent intent, int i) {
        super.startActivityForResult(intent, i);
    }

    @Override
    public void startActivityForResult(Intent intent, int i, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startActivityForResult(intent, i, bundle);
        } else {
            super.startActivityForResult(intent, i, bundle);
        }
    }

    public void zeusSuperStartActivityForResult(Intent intent, int i, Bundle bundle) {
        super.startActivityForResult(intent, i, bundle);
    }

    @Override
    public void startActivityFromChild(Activity activity, Intent intent, int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startActivityFromChild(activity, intent, i);
        } else {
            super.startActivityFromChild(activity, intent, i);
        }
    }

    public void zeusSuperStartActivityFromChild(Activity activity, Intent intent, int i) {
        super.startActivityFromChild(activity, intent, i);
    }

    @Override
    public void startActivityFromChild(Activity activity, Intent intent, int i, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startActivityFromChild(activity, intent, i, bundle);
        } else {
            super.startActivityFromChild(activity, intent, i, bundle);
        }
    }

    public void zeusSuperStartActivityFromChild(Activity activity, Intent intent, int i, Bundle bundle) {
        super.startActivityFromChild(activity, intent, i, bundle);
    }

    @Override
    public void startActivityFromFragment(Fragment fragment, Intent intent, int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startActivityFromFragment(fragment, intent, i);
        } else {
            super.startActivityFromFragment(fragment, intent, i);
        }
    }

    public void zeusSuperStartActivityFromFragment(Fragment fragment, Intent intent, int i) {
        super.startActivityFromFragment(fragment, intent, i);
    }

    @Override
    public void startActivityFromFragment(Fragment fragment, Intent intent, int i, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startActivityFromFragment(fragment, intent, i, bundle);
        } else {
            super.startActivityFromFragment(fragment, intent, i, bundle);
        }
    }

    public void zeusSuperStartActivityFromFragment(Fragment fragment, Intent intent, int i, Bundle bundle) {
        super.startActivityFromFragment(fragment, intent, i, bundle);
    }

    @Override
    public boolean startActivityIfNeeded(Intent intent, int i) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.startActivityIfNeeded(intent, i);
        }
        return super.startActivityIfNeeded(intent, i);
    }

    public boolean zeusSuperStartActivityIfNeeded(Intent intent, int i) {
        return super.startActivityIfNeeded(intent, i);
    }

    @Override
    public boolean startActivityIfNeeded(Intent intent, int i, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.startActivityIfNeeded(intent, i, bundle);
        }
        return super.startActivityIfNeeded(intent, i, bundle);
    }

    public boolean zeusSuperStartActivityIfNeeded(Intent intent, int i, Bundle bundle) {
        return super.startActivityIfNeeded(intent, i, bundle);
    }

    @Override
    public void startIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startIntentSender(intentSender, intent, i, i2, i3);
        } else {
            super.startIntentSender(intentSender, intent, i, i2, i3);
        }
    }

    public void zeusSuperStartIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3) {
        super.startIntentSender(intentSender, intent, i, i2, i3);
    }

    @Override
    public void startIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startIntentSender(intentSender, intent, i, i2, i3, bundle);
        } else {
            super.startIntentSender(intentSender, intent, i, i2, i3, bundle);
        }
    }

    public void zeusSuperStartIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3, Bundle bundle) {
        super.startIntentSender(intentSender, intent, i, i2, i3, bundle);
    }

    @Override
    public void startIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4);
        } else {
            super.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4);
        }
    }

    public void zeusSuperStartIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) {
        super.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4);
    }

    @Override
    public void startIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4, bundle);
        } else {
            super.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4, bundle);
        }
    }

    public void zeusSuperStartIntentSenderForResult(IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) {
        super.startIntentSenderForResult(intentSender, i, intent, i2, i3, i4, bundle);
    }

    @Override
    public void startIntentSenderFromChild(Activity activity, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4);
        } else {
            super.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4);
        }
    }

    public void zeusSuperStartIntentSenderFromChild(Activity activity, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4) {
        super.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4);
    }

    @Override
    public void startIntentSenderFromChild(Activity activity, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4, bundle);
        } else {
            super.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4, bundle);
        }
    }

    public void zeusSuperStartIntentSenderFromChild(Activity activity, IntentSender intentSender, int i, Intent intent, int i2, int i3, int i4, Bundle bundle) {
        super.startIntentSenderFromChild(activity, intentSender, i, intent, i2, i3, i4, bundle);
    }

    @Override
    public void startLocalVoiceInteraction(Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startLocalVoiceInteraction(bundle);
        } else {
            super.startLocalVoiceInteraction(bundle);
        }
    }

    public void zeusSuperStartLocalVoiceInteraction(Bundle bundle) {
        super.startLocalVoiceInteraction(bundle);
    }

    @Override
    public void startLockTask() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startLockTask();
        } else {
            super.startLockTask();
        }
    }

    public void zeusSuperStartLockTask() {
        super.startLockTask();
    }

    @Override
    public void startManagingCursor(Cursor cursor) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startManagingCursor(cursor);
        } else {
            super.startManagingCursor(cursor);
        }
    }

    public void zeusSuperStartManagingCursor(Cursor cursor) {
        super.startManagingCursor(cursor);
    }

    @Override
    public boolean startNextMatchingActivity(Intent intent) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.startNextMatchingActivity(intent);
        }
        return super.startNextMatchingActivity(intent);
    }

    public boolean zeusSuperStartNextMatchingActivity(Intent intent) {
        return super.startNextMatchingActivity(intent);
    }

    @Override
    public boolean startNextMatchingActivity(Intent intent, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.startNextMatchingActivity(intent, bundle);
        }
        return super.startNextMatchingActivity(intent, bundle);
    }

    public boolean zeusSuperStartNextMatchingActivity(Intent intent, Bundle bundle) {
        return super.startNextMatchingActivity(intent, bundle);
    }

    @Override
    public void startPostponedEnterTransition() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startPostponedEnterTransition();
        } else {
            super.startPostponedEnterTransition();
        }
    }

    public void zeusSuperStartPostponedEnterTransition() {
        super.startPostponedEnterTransition();
    }

    @Override
    public void startSearch(String str, boolean z, Bundle bundle, boolean z2) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.startSearch(str, z, bundle, z2);
        } else {
            super.startSearch(str, z, bundle, z2);
        }
    }

    public void zeusSuperStartSearch(String str, boolean z, Bundle bundle, boolean z2) {
        super.startSearch(str, z, bundle, z2);
    }

    @Override
    public void stopLocalVoiceInteraction() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.stopLocalVoiceInteraction();
        } else {
            super.stopLocalVoiceInteraction();
        }
    }

    public void zeusSuperStopLocalVoiceInteraction() {
        super.stopLocalVoiceInteraction();
    }

    @Override
    public void stopLockTask() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.stopLockTask();
        } else {
            super.stopLockTask();
        }
    }

    public void zeusSuperStopLockTask() {
        super.stopLockTask();
    }

    @Override
    public void stopManagingCursor(Cursor cursor) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.stopManagingCursor(cursor);
        } else {
            super.stopManagingCursor(cursor);
        }
    }

    public void zeusSuperStopManagingCursor(Cursor cursor) {
        super.stopManagingCursor(cursor);
    }

    @Override
    public void takeKeyEvents(boolean z) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.takeKeyEvents(z);
        } else {
            super.takeKeyEvents(z);
        }
    }

    public void zeusSuperTakeKeyEvents(boolean z) {
        super.takeKeyEvents(z);
    }

    @Override
    public void triggerSearch(String str, Bundle bundle) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.triggerSearch(str, bundle);
        } else {
            super.triggerSearch(str, bundle);
        }
    }

    public void zeusSuperTriggerSearch(String str, Bundle bundle) {
        super.triggerSearch(str, bundle);
    }

    @Override
    public void unregisterActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.unregisterActivityLifecycleCallbacks(activityLifecycleCallbacks);
        } else {
            super.unregisterActivityLifecycleCallbacks(activityLifecycleCallbacks);
        }
    }

    public void zeusSuperUnregisterActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        super.unregisterActivityLifecycleCallbacks(activityLifecycleCallbacks);
    }

    @Override
    public void unregisterForContextMenu(View view) {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            generatePluginAppCompatActivity.unregisterForContextMenu(view);
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
        this.mTargetActivity = (GeneratePluginAppCompatActivity) iPluginActivity;
    }

    @Override
    public android.support.v4.app.FragmentManager getSupportFragmentManager() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getSupportFragmentManager();
        }
        return super.getSupportFragmentManager();
    }

    public android.support.v4.app.FragmentManager zeusSuperGetSupportFragmentManager() {
        return super.getSupportFragmentManager();
    }

    @Override
    public android.support.v7.app.ActionBar getSupportActionBar() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getSupportActionBar();
        }
        return super.getSupportActionBar();
    }

    public android.support.v7.app.ActionBar zeusSuperGetSupportActionBar() {
        return super.getSupportActionBar();
    }

    @Override
    public Lifecycle getLifecycle() {
        GeneratePluginAppCompatActivity generatePluginAppCompatActivity = this.mTargetActivity;
        if (generatePluginAppCompatActivity != null) {
            return generatePluginAppCompatActivity.getLifecycle();
        }
        return super.getLifecycle();
    }

    public Lifecycle zeusSuperGetLifecycle() {
        return super.getLifecycle();
    }
}
