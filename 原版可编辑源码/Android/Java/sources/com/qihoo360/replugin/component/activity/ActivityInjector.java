package com.qihoo360.replugin.component.activity;

import android.app.Activity;
import android.app.ActivityManager;
import android.content.Context;
import android.content.pm.ActivityInfo;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.text.TextUtils;
import com.qihoo360.loader2.MP;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.component.ComponentList;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ActivityInjector {
    public static final String TAG = "activity-injector";

    public static boolean inject(Activity activity, String str, String str2) {
        ComponentList componentListFetchComponentList;
        ActivityInfo activity2;
        PluginInfo plugin = MP.getPlugin(str, false);
        return (plugin == null || (componentListFetchComponentList = RePlugin.fetchComponentList(str)) == null || (activity2 = componentListFetchComponentList.getActivity(str2)) == null || !inject(activity, activity2, plugin.getFrameworkVersion())) ? false : true;
    }

    private static boolean inject(Activity activity, ActivityInfo activityInfo, int i) {
        if (i < 4) {
            return true;
        }
        injectTaskDescription(activity, activityInfo);
        return true;
    }

    private static void injectTaskDescription(Activity activity, ActivityInfo activityInfo) {
        ActivityManager.TaskDescription taskDescription;
        if (Build.VERSION.SDK_INT < 21 || activity == null || activityInfo == null) {
            return;
        }
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "activity = " + activity);
            LogDebug.d(TAG, "ai = " + activityInfo);
        }
        String label = getLabel(activity, activityInfo);
        if (TextUtils.isEmpty(label)) {
            return;
        }
        Bitmap icon = getIcon(activity, activityInfo);
        if (icon != null) {
            taskDescription = new ActivityManager.TaskDescription(label, icon);
        } else {
            taskDescription = new ActivityManager.TaskDescription(label);
        }
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "td = " + taskDescription);
        }
        activity.setTaskDescription(taskDescription);
    }

    private static String getLabel(Activity activity, ActivityInfo activityInfo) {
        Resources resources = activity.getResources();
        String labelById = getLabelById(resources, activityInfo.labelRes);
        if (TextUtils.isEmpty(labelById)) {
            labelById = getLabelById(resources, activityInfo.applicationInfo.labelRes);
        }
        if (TextUtils.isEmpty(labelById)) {
            Context appContext = RePluginInternal.getAppContext();
            labelById = getLabelById(appContext.getResources(), appContext.getApplicationInfo().labelRes);
        }
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "label = " + labelById);
        }
        return labelById;
    }

    private static String getLabelById(Resources resources, int i) {
        if (i == 0) {
            return null;
        }
        try {
            return resources.getString(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    private static Bitmap getIcon(Activity activity, ActivityInfo activityInfo) {
        Resources resources = activity.getResources();
        Drawable iconById = getIconById(resources, activityInfo.icon);
        if (iconById == null) {
            iconById = getIconById(resources, activityInfo.applicationInfo.icon);
        }
        if (iconById == null) {
            Context appContext = RePluginInternal.getAppContext();
            iconById = getIconById(appContext.getResources(), appContext.getApplicationInfo().icon);
        }
        Bitmap bitmap = iconById instanceof BitmapDrawable ? ((BitmapDrawable) iconById).getBitmap() : null;
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "bitmap = " + bitmap);
        }
        return bitmap;
    }

    private static Drawable getIconById(Resources resources, int i) {
        if (i == 0) {
            return null;
        }
        try {
            return resources.getDrawable(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }
}
