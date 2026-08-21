package com.qihoo360.loader2;

import android.content.pm.ActivityInfo;
import android.os.RemoteException;
import com.qihoo360.loader2.PluginContainers;
import com.qihoo360.replugin.helper.HostConfigHelper;
import java.util.HashMap;
import java.util.HashSet;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class TaskAffinityStates {
    private static final int GROUP_COUNT = HostConfigHelper.ACTIVITY_PIT_COUNT_TASK;
    public static final String TAG = "task-affinity";
    private LaunchModeStates[] mLaunchModeStates = new LaunchModeStates[GROUP_COUNT];

    TaskAffinityStates() {
    }

    public void init(String str, String str2, HashMap<String, PluginContainers.ActivityState> map, HashSet<String> hashSet) {
        for (int i = 0; i < GROUP_COUNT; i++) {
            LaunchModeStates[] launchModeStatesArr = this.mLaunchModeStates;
            if (launchModeStatesArr[i] == null) {
                launchModeStatesArr[i] = new LaunchModeStates();
            }
            LaunchModeStates launchModeStates = this.mLaunchModeStates[i];
            launchModeStates.addStates(map, hashSet, str + str2 + "TA" + i, 0, true, HostConfigHelper.ACTIVITY_PIT_COUNT_TS_STANDARD);
            launchModeStates.addStates(map, hashSet, str + str2 + "TA" + i, 0, false, HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_STANDARD);
            launchModeStates.addStates(map, hashSet, str + str2 + "TA" + i, 1, true, HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TOP);
            launchModeStates.addStates(map, hashSet, str + str2 + "TA" + i, 1, false, HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP);
            launchModeStates.addStates(map, hashSet, str + str2 + "TA" + i, 2, true, HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TASK);
            launchModeStates.addStates(map, hashSet, str + str2 + "TA" + i, 2, false, HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK);
            launchModeStates.addStates(map, hashSet, str + str2 + "TA" + i, 3, true, HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE);
            launchModeStates.addStates(map, hashSet, str + str2 + "TA" + i, 3, false, HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE);
        }
    }

    HashMap<String, PluginContainers.ActivityState> getStates(ActivityInfo activityInfo) {
        if (activityInfo == null) {
            return null;
        }
        int taskAffinityGroupIndex = 0;
        try {
            taskAffinityGroupIndex = MP.getTaskAffinityGroupIndex(activityInfo.taskAffinity);
        } catch (RemoteException e) {
            e.printStackTrace();
        }
        LaunchModeStates launchModeStates = this.mLaunchModeStates[taskAffinityGroupIndex];
        if (launchModeStates != null) {
            return launchModeStates.getStates(activityInfo.launchMode, activityInfo.theme);
        }
        return null;
    }
}
