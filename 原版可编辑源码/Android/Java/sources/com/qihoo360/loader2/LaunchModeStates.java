package com.qihoo360.loader2;

import com.qihoo360.loader2.PluginContainers;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.helper.LogDebug;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class LaunchModeStates {
    public static final String TAG = "launchMode";
    private Map<String, HashMap<String, PluginContainers.ActivityState>> mStates = new HashMap();

    private static String getLaunchModeInfix(int i) {
        return i != 1 ? i != 2 ? i != 3 ? "NR" : "SI" : "ST" : "STP";
    }

    public static boolean isTranslucentTheme(int i) {
        return i == 16973839 || i == 16973835 || i == 16973840 || i == 16973841;
    }

    LaunchModeStates() {
    }

    void addStates(Map<String, PluginContainers.ActivityState> map, HashSet<String> hashSet, String str, int i, boolean z, int i2) {
        String infix = getInfix(i, z);
        HashMap<String, PluginContainers.ActivityState> map2 = this.mStates.get(infix);
        if (map2 == null) {
            map2 = new HashMap<>();
            this.mStates.put(infix, map2);
        }
        for (int i3 = 0; i3 < i2; i3++) {
            String str2 = str + infix + i3;
            if (RePlugin.getConfig().isPrintDetailLog()) {
                LogDebug.d(TAG, "LaunchModeStates.add(" + str2 + ")");
            }
            PluginContainers.ActivityState activityState = new PluginContainers.ActivityState(str2);
            map2.put(str2, activityState);
            map.put(str2, activityState);
            hashSet.add(str2);
        }
    }

    HashMap<String, PluginContainers.ActivityState> getStates(int i, int i2) {
        return this.mStates.get(getInfix(i, isTranslucentTheme(i2)));
    }

    private static String getInfix(int i, boolean z) {
        StringBuilder sb;
        String str;
        String launchModeInfix = getLaunchModeInfix(i);
        if (z) {
            sb = new StringBuilder();
            sb.append(launchModeInfix);
            str = "TS";
        } else {
            sb = new StringBuilder();
            sb.append(launchModeInfix);
            str = "NTS";
        }
        sb.append(str);
        return sb.toString();
    }
}
