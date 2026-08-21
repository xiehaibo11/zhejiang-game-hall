package com.qihoo360.loader2;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;
import com.qihoo360.i.IPluginManager;
import com.qihoo360.mobilesafe.api.Pref;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.component.process.PluginProcessHost;
import com.qihoo360.replugin.helper.HostConfigHelper;
import com.qihoo360.replugin.helper.JSONHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.vivo.push.PushClientConstants;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginContainers {
    private static final String CONTAINER_ACTIVITY_PART = ".loader.a.Activity";
    private static final int STATE_NONE = 0;
    private static final int STATE_OCCUPIED = 1;
    private static final int STATE_RESTORED = 2;
    private final Object mLock = new Object();
    private HashMap<String, ActivityState> mStates = new HashMap<>();
    private TaskAffinityStates mTaskAffinityStates = new TaskAffinityStates();
    private LaunchModeStates mLaunchModeStates = new LaunchModeStates();
    private final Map<String, ProcessStates> mProcessStatesMap = new HashMap();

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static final class ActivityState {
        String activity;
        final String container;
        String plugin;
        final ArrayList<WeakReference<Activity>> refs;
        int state;
        long timestamp;

        static final String toName(int i) {
            return i != 0 ? i != 1 ? i != 2 ? EnvironmentCompat.MEDIA_UNKNOWN : "restored" : "occupied" : Device.NETWORN_NONE;
        }

        ActivityState(String str) {
            this.container = str;
            this.refs = new ArrayList<>();
        }

        public ActivityState(ActivityState activityState) {
            this.container = activityState.container;
            this.state = activityState.state;
            this.plugin = activityState.plugin;
            this.activity = activityState.activity;
            this.timestamp = activityState.timestamp;
            this.refs = new ArrayList<>(activityState.refs);
        }

        public String toString() {
            if (LogDebug.LOG) {
                return "ActivityState {container=" + this.container + (" state=" + toName(this.state)) + (" plugin=" + this.plugin) + (" activity=" + this.activity) + (" size=" + this.refs.size()) + "}";
            }
            return super.toString();
        }

        private final boolean isTarget(String str, String str2) {
            return TextUtils.equals(this.plugin, str) && TextUtils.equals(this.activity, str2);
        }

        private final void occupy(String str, String str2) {
            if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
                if (LogDebug.LOG) {
                    LogDebug.w(LogDebug.PLUGIN_TAG, "PACM: occupy: invalid s=" + toName(this.state) + " plugin=" + str + " activity=" + str2);
                    return;
                }
                return;
            }
            this.state = 1;
            this.plugin = str;
            this.activity = str2;
            cleanRefs();
            this.timestamp = System.currentTimeMillis();
            PluginContainers.save2Pref(this.plugin, this.activity, this.container);
        }

        private final void restore(String str, String str2, long j) {
            if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
                if (LogDebug.LOG) {
                    LogDebug.w(LogDebug.PLUGIN_TAG, "PACM: restore: invalid s=" + toName(this.state) + " plugin=" + str + " activity=" + str2);
                    return;
                }
                return;
            }
            this.state = 2;
            this.plugin = str;
            this.activity = str2;
            cleanRefs();
            this.timestamp = j;
        }

        private final void recycle() {
            this.state = 0;
            this.plugin = null;
            this.activity = null;
            cleanRefs();
            this.timestamp = System.currentTimeMillis();
        }

        private final void create(String str, Activity activity) {
            int i = this.state;
            if (i != 1 && i != 2) {
                if (i == 0) {
                    if (LogDebug.LOG) {
                        LogDebug.i(LogDebug.PLUGIN_TAG, "PACM: create: relaunch activity: blank");
                        return;
                    }
                    return;
                } else {
                    if (LogDebug.LOG) {
                        LogDebug.w(LogDebug.PLUGIN_TAG, "PACM: create: invalid s=" + toName(this.state) + " e=registered c=" + this.container);
                        return;
                    }
                    return;
                }
            }
            if (!TextUtils.equals(this.plugin, str)) {
                if (LogDebug.LOG) {
                    LogDebug.w(LogDebug.PLUGIN_TAG, "PACM: create: invalid plugin=" + str + " this.plugin=" + this.plugin);
                    return;
                }
                return;
            }
            if (!TextUtils.equals(this.activity, activity.getClass().getName())) {
                if (LogDebug.LOG) {
                    LogDebug.w(LogDebug.PLUGIN_TAG, "PACM: create: invalid a=" + activity.getClass().getName() + " this.a=" + this.activity);
                    return;
                }
                return;
            }
            if (this.state == 2 && LogDebug.LOG) {
                LogDebug.i(LogDebug.PLUGIN_TAG, "PACM: create: relaunch activity: history: container=" + this.container + " plugin=" + str + " activity=" + activity);
            }
            addRef(activity);
            this.timestamp = System.currentTimeMillis();
        }

        private final boolean hasRef() {
            for (int size = this.refs.size() - 1; size >= 0; size--) {
                if (this.refs.get(size).get() == null) {
                    this.refs.remove(size);
                }
            }
            return this.refs.size() > 0;
        }

        private final void cleanRefs() {
            if (LogDebug.LOG) {
                for (WeakReference<Activity> weakReference : this.refs) {
                    if (weakReference.get() != null) {
                        LogDebug.w(LogDebug.PLUGIN_TAG, "PACM: clean refs: exist a=" + weakReference.get());
                    }
                }
            }
            this.refs.clear();
        }

        private final void addRef(Activity activity) {
            Iterator<WeakReference<Activity>> it = this.refs.iterator();
            while (it.hasNext()) {
                if (it.next().get() == activity) {
                    return;
                }
            }
            this.refs.add(new WeakReference<>(activity));
        }

        private final void removeRef(Activity activity) {
            for (int size = this.refs.size() - 1; size >= 0; size--) {
                if (this.refs.get(size).get() == activity) {
                    this.refs.remove(size);
                    return;
                }
            }
        }

        private final void finishRefs() {
            Iterator<WeakReference<Activity>> it = this.refs.iterator();
            while (it.hasNext()) {
                Activity activity = it.next().get();
                if (activity != null) {
                    activity.finish();
                }
            }
        }

        final void forwardSelf(Activity activity, Intent intent) {
            try {
                PluginIntent pluginIntent = new PluginIntent(intent);
                pluginIntent.setPlugin(this.plugin);
                pluginIntent.setActivity(this.activity);
                pluginIntent.setProcess(Integer.MIN_VALUE);
                pluginIntent.setContainer(this.container);
                intent.putExtra(IPluginManager.KEY_COMPATIBLE, true);
                intent.setComponent(new ComponentName(IPC.getPackageName(), this.container));
                activity.startActivity(intent);
            } catch (Throwable th) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "f.a fs: " + th.getMessage(), th);
            }
        }
    }

    final void init(int i, HashSet<String> hashSet) {
        if (i == -1 || PluginProcessHost.isCustomPluginProcess(i) || PluginManager.isPluginProcess()) {
            String str = IPC.getPackageName() + CONTAINER_ACTIVITY_PART;
            if (i == -1 || PluginProcessHost.isCustomPluginProcess(i)) {
                this.mLaunchModeStates.addStates(this.mStates, hashSet, str + "N1", 0, true, HostConfigHelper.ACTIVITY_PIT_COUNT_TS_STANDARD);
                this.mLaunchModeStates.addStates(this.mStates, hashSet, str + "N1", 0, false, HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_STANDARD);
                this.mLaunchModeStates.addStates(this.mStates, hashSet, str + "N1", 1, true, HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TOP);
                this.mLaunchModeStates.addStates(this.mStates, hashSet, str + "N1", 1, false, HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP);
                this.mLaunchModeStates.addStates(this.mStates, hashSet, str + "N1", 2, true, HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TASK);
                this.mLaunchModeStates.addStates(this.mStates, hashSet, str + "N1", 2, false, HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK);
                this.mLaunchModeStates.addStates(this.mStates, hashSet, str + "N1", 3, true, HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE);
                this.mLaunchModeStates.addStates(this.mStates, hashSet, str + "N1", 3, false, HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE);
                this.mTaskAffinityStates.init(str, "N1", this.mStates, hashSet);
                for (int i2 = 0; i2 < 3; i2++) {
                    ProcessStates processStates = new ProcessStates();
                    this.mProcessStatesMap.put(PluginProcessHost.PROCESS_PLUGIN_SUFFIX2 + i2, processStates);
                    init2(str, hashSet, processStates, "p" + i2);
                }
                loadFromPref();
            }
        }
    }

    private void init2(String str, HashSet<String> hashSet, ProcessStates processStates, String str2) {
        String upperCase = str2.toUpperCase();
        processStates.mLaunchModeStates.addStates(this.mStates, hashSet, str + upperCase, 0, true, HostConfigHelper.ACTIVITY_PIT_COUNT_TS_STANDARD);
        processStates.mLaunchModeStates.addStates(this.mStates, hashSet, str + upperCase, 0, false, HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_STANDARD);
        processStates.mLaunchModeStates.addStates(this.mStates, hashSet, str + upperCase, 1, true, HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TOP);
        processStates.mLaunchModeStates.addStates(this.mStates, hashSet, str + upperCase, 1, false, HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP);
        processStates.mLaunchModeStates.addStates(this.mStates, hashSet, str + upperCase, 2, true, HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TASK);
        processStates.mLaunchModeStates.addStates(this.mStates, hashSet, str + upperCase, 2, false, HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK);
        processStates.mLaunchModeStates.addStates(this.mStates, hashSet, str + upperCase, 3, true, HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE);
        processStates.mLaunchModeStates.addStates(this.mStates, hashSet, str + upperCase, 3, false, HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE);
        processStates.mTaskAffinityStates.init(str, upperCase, this.mStates, hashSet);
    }

    private final void loadFromPref() {
        try {
            Map<String, ?> mapIpcGetAll = Pref.ipcGetAll();
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: restore table: size=" + mapIpcGetAll.size());
            }
            for (Map.Entry<String, ?> entry : mapIpcGetAll.entrySet()) {
                String key = entry.getKey();
                Object value = entry.getValue();
                ActivityState activityState = this.mStates.get(key);
                String[] strArrSplit = value.toString().split(Constants.COLON_SEPARATOR);
                if (activityState != null && strArrSplit != null && strArrSplit.length == 3) {
                    String str = strArrSplit[0];
                    String str2 = strArrSplit[1];
                    long j = Long.parseLong(strArrSplit[2]);
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: restore table:  container=" + key + " plugin=" + str + " activity=" + str2);
                    }
                    if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
                        activityState.restore(str, str2, j);
                    }
                } else if (LogDebug.LOG) {
                    LogDebug.w(LogDebug.PLUGIN_TAG, "PACM: invalid table: k=" + key + " v=" + value);
                }
            }
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "PACM: init e=" + th.getMessage(), th);
        }
    }

    private static final void save2Pref(String str, String str2, String str3) {
        String str4 = str + Constants.COLON_SEPARATOR + str2 + Constants.COLON_SEPARATOR + System.currentTimeMillis();
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: save 2 pref: k=" + str3 + " v=" + str4);
        }
        Pref.ipcSet(str3, str4);
    }

    static final String[] resolvePluginActivity(String str) {
        String strIpcGet = Pref.ipcGet(str, "");
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: load special pref: k=" + str + " v=" + strIpcGet);
        }
        if (TextUtils.isEmpty(strIpcGet)) {
            return null;
        }
        return strIpcGet.split(Constants.COLON_SEPARATOR);
    }

    final void forwardIntent(Activity activity, Intent intent, String str, String str2, String str3, String str4, int i) {
        ActivityState activityState;
        ActivityState activityState2;
        synchronized (this.mLock) {
            HashMap<String, ActivityState> map = this.mStates;
            activityState = map.get(str);
            activityState2 = map.get(str2);
        }
        if (activityState == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "f.a fi: cc: inv c.c=" + str);
            return;
        }
        if (activityState2 == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "f.a fi: cc: inv t.c=" + str2);
            return;
        }
        if (activityState2.state != 0) {
            if (!activityState2.isTarget(str3, str4)) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "f.a fi: cc: fly, force, t.c=" + str2);
                if (activityState2.hasRef()) {
                    LogRelease.e(LogDebug.PLUGIN_TAG, "f.a fi: cc: exists instances");
                }
                activityState2.occupy(str3, str4);
            } else {
                LogRelease.e(LogDebug.PLUGIN_TAG, "f.a fi: cc: same, t.c=" + str2);
            }
        } else {
            LogRelease.e(LogDebug.PLUGIN_TAG, "f.a fi: cc: ok, t.c empty, t.c=" + str2);
            activityState2.occupy(str3, str4);
        }
        if (activityState != activityState2) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "f.a fi: t t.c=" + str2);
            if (LogDebug.LOG) {
                LogDebug.i(LogDebug.PLUGIN_TAG, "forward fly: container=" + str2 + " plugin=" + str3 + " activity=" + str4);
            }
            activityState.recycle();
        } else {
            LogRelease.i(LogDebug.PLUGIN_TAG, "f.a fi: same t.c=" + str2);
            if (LogDebug.LOG) {
                LogDebug.i(LogDebug.PLUGIN_TAG, "forward registered: container=" + str2 + " plugin=" + str3 + " activity=" + str4);
            }
        }
        activityState2.forwardSelf(activity, intent);
    }

    final String alloc(ActivityInfo activityInfo, String str, String str2, int i, Intent intent) {
        ActivityState activityStateAllocLocked;
        String str3 = activityInfo.applicationInfo.packageName;
        if (LogDebug.LOG) {
            LogDebug.d(TaskAffinityStates.TAG, "originTaskAffinity is " + activityInfo.taskAffinity);
        }
        if (activityInfo.launchMode == 3) {
            synchronized (this.mLock) {
                activityStateAllocLocked = allocLocked(activityInfo, this.mLaunchModeStates.getStates(activityInfo.launchMode, activityInfo.theme), str, str2, intent);
            }
        } else if (!str3.equals(activityInfo.taskAffinity)) {
            synchronized (this.mLock) {
                activityStateAllocLocked = allocLocked(activityInfo, this.mTaskAffinityStates.getStates(activityInfo), str, str2, intent);
            }
        } else {
            synchronized (this.mLock) {
                activityStateAllocLocked = allocLocked(activityInfo, this.mLaunchModeStates.getStates(activityInfo.launchMode, activityInfo.theme), str, str2, intent);
            }
        }
        if (activityStateAllocLocked != null) {
            return activityStateAllocLocked.container;
        }
        return null;
    }

    private final ActivityState allocLocked(ActivityInfo activityInfo, HashMap<String, ActivityState> map, String str, String str2, Intent intent) {
        if (map == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: alloc fail, map is null");
            }
            return null;
        }
        for (ActivityState activityState : map.values()) {
            if (activityState.isTarget(str, str2)) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: alloc registered container=" + activityState.container);
                }
                return activityState;
            }
        }
        for (ActivityState activityState2 : map.values()) {
            if (activityState2.state == 0) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: alloc empty container=" + activityState2.container);
                }
                activityState2.occupy(str, str2);
                return activityState2;
            }
        }
        ActivityState activityState3 = null;
        for (ActivityState activityState4 : map.values()) {
            if (!activityState4.hasRef() && (activityState3 == null || activityState4.timestamp < activityState3.timestamp)) {
                activityState3 = activityState4;
            }
        }
        if (activityState3 != null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: alloc recycled container=" + activityState3.container);
            }
            activityState3.occupy(str, str2);
            return activityState3;
        }
        ActivityState activityState5 = null;
        for (ActivityState activityState6 : map.values()) {
            if (activityState5 == null || activityState6.timestamp < activityState5.timestamp) {
                activityState5 = activityState6;
            }
        }
        if (activityState5 != null) {
            if (LogDebug.LOG) {
                LogDebug.w(LogDebug.PLUGIN_TAG, "PACM: force alloc container=" + activityState5.container);
            }
            activityState5.finishRefs();
            activityState5.occupy(str, str2);
            return activityState5;
        }
        if (LogDebug.LOG) {
            LogDebug.w(LogDebug.PLUGIN_TAG, "PACM: alloc failed: plugin=" + str + " activity=" + str2);
        }
        return null;
    }

    String alloc2(ActivityInfo activityInfo, String str, String str2, int i, Intent intent, String str3) {
        ActivityState activityStateAllocLocked;
        ProcessStates processStates = this.mProcessStatesMap.get(str3);
        String str4 = activityInfo.applicationInfo.packageName;
        if (LogDebug.LOG) {
            LogDebug.d(TaskAffinityStates.TAG, String.format("插件 %s 默认 TaskAffinity 为 %s", str, str4));
            LogDebug.d(TaskAffinityStates.TAG, String.format("%s 的 TaskAffinity 为 %s", str2, activityInfo.taskAffinity));
        }
        if (activityInfo.launchMode == 3) {
            synchronized (this.mLock) {
                activityStateAllocLocked = allocLocked(activityInfo, processStates.mLaunchModeStates.getStates(activityInfo.launchMode, activityInfo.theme), str, str2, intent);
            }
        } else if (!str4.equals(activityInfo.taskAffinity)) {
            synchronized (this.mLock) {
                activityStateAllocLocked = allocLocked(activityInfo, processStates.mTaskAffinityStates.getStates(activityInfo), str, str2, intent);
            }
        } else {
            synchronized (this.mLock) {
                activityStateAllocLocked = allocLocked(activityInfo, processStates.mLaunchModeStates.getStates(activityInfo.launchMode, activityInfo.theme), str, str2, intent);
            }
        }
        if (activityStateAllocLocked != null) {
            return activityStateAllocLocked.container;
        }
        return null;
    }

    final void handleCreate(String str, Activity activity, String str2) {
        ComponentName componentName = activity.getComponentName();
        if (componentName != null) {
            str2 = componentName.getClassName();
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: activity created h=" + activity.hashCode() + " class=" + activity.getClass().getName() + " container=" + str2);
        }
        synchronized (this.mLock) {
            ActivityState activityState = this.mStates.get(str2);
            if (activityState != null) {
                activityState.create(str, activity);
            }
        }
    }

    final void handleDestroy(Activity activity) {
        ComponentName componentName = activity.getComponentName();
        String className = componentName != null ? componentName.getClassName() : null;
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: activity destroy h=" + activity.hashCode() + " class=" + activity.getClass().getName() + " container=" + className);
        }
        if (className == null) {
            return;
        }
        synchronized (this.mLock) {
            ActivityState activityState = this.mStates.get(className);
            if (activityState != null) {
                activityState.removeRef(activity);
            }
        }
    }

    final ActivityState lookupByContainer(String str) {
        if (str == null) {
            return null;
        }
        synchronized (this.mLock) {
            ActivityState activityState = this.mStates.get(str);
            if (activityState != null && activityState.state != 0) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "found: " + activityState);
                }
                return new ActivityState(activityState);
            }
            LogRelease.e(LogDebug.PLUGIN_TAG, "not found: c=" + str + " pool=" + this.mStates.size());
            return null;
        }
    }

    final String dump() {
        JSONArray jSONArray = new JSONArray();
        for (Map.Entry<String, ActivityState> entry : this.mStates.entrySet()) {
            String key = entry.getKey();
            ActivityState value = entry.getValue();
            if (!TextUtils.isEmpty(value.plugin) && !TextUtils.isEmpty(value.activity)) {
                JSONObject jSONObject = new JSONObject();
                JSONHelper.putNoThrows(jSONObject, IPluginManager.KEY_PROCESS, IPC.getCurrentProcessName());
                JSONHelper.putNoThrows(jSONObject, PushClientConstants.TAG_CLASS_NAME, key);
                JSONHelper.putNoThrows(jSONObject, IPluginManager.KEY_PLUGIN, value.plugin);
                JSONHelper.putNoThrows(jSONObject, "realClassName", value.activity);
                JSONHelper.putNoThrows(jSONObject, CallMraidJS.b, ActivityState.toName(value.state));
                JSONHelper.putNoThrows(jSONObject, "refs", Integer.valueOf(value.refs != null ? value.refs.size() : 0));
                jSONArray.put(jSONObject);
            }
        }
        return jSONArray.toString();
    }
}
