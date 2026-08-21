package com.qihoo360.loader2;

import android.content.Context;
import android.os.Process;
import android.text.TextUtils;
import com.qihoo360.mobilesafe.api.Tasks;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.component.process.PluginProcessHost;
import com.qihoo360.replugin.helper.LogDebug;
import java.util.regex.MatchResult;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginManager {
    public static final int COUNTER_MAX = 10;
    public static final int PROCESS_AUTO = Integer.MIN_VALUE;
    private static final Pattern PROCESS_NAME_PATTERN = Pattern.compile(Constant.STUB_PROCESS_SUFFIX_PATTERN);

    @Deprecated
    static int sPluginProcessIndex = -1;

    @Deprecated
    static int sUid;

    static final boolean isPluginProcess(int i) {
        return i >= 0 && i < 2;
    }

    public static final boolean isPluginProcess() {
        int i = sPluginProcessIndex;
        return i >= 0 && i < 2;
    }

    public static final boolean isValidActivityProcess(int i) {
        return i == -1 || i == Integer.MIN_VALUE || isPluginProcess(i);
    }

    static final int getPluginProcessIndex() {
        return sPluginProcessIndex;
    }

    @Deprecated
    static final void init(Context context) {
        Tasks.init();
        sUid = Process.myUid();
        sPluginProcessIndex = evalPluginProcess(IPC.getCurrentProcessName());
    }

    static final int evalPluginProcess(String str) {
        int i = Integer.MIN_VALUE;
        try {
        } catch (Throwable th) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, th.getMessage(), th);
            }
        }
        if (TextUtils.equals(IPC.getPackageName(), str)) {
            if (!LogDebug.LOG) {
                return -1;
            }
            LogDebug.d(LogDebug.PLUGIN_TAG, "plugin process checker: default, index=0");
            return -1;
        }
        if (!TextUtils.isEmpty(str) && str.contains(PluginProcessHost.PROCESS_PLUGIN_SUFFIX2)) {
            return PluginProcessHost.PROCESS_INT_MAP.get(PluginProcessHost.processTail(str)).intValue();
        }
        Matcher matcher = PROCESS_NAME_PATTERN.matcher(str);
        if (matcher != null && matcher.matches()) {
            MatchResult matchResult = matcher.toMatchResult();
            if (matchResult != null && matchResult.groupCount() == 2) {
                if (!TextUtils.equals(IPC.getPackageName(), matchResult.group(1))) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "plugin process checker: package name not match in=" + str);
                    }
                    return Integer.MIN_VALUE;
                }
                i = Integer.parseInt(matchResult.group(2));
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "plugin process checker: index=" + i);
                }
                return i;
            }
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "plugin process checker: no group in=" + str);
            }
            return Integer.MIN_VALUE;
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "plugin process checker: non plugin process in=" + str);
        }
        return Integer.MIN_VALUE;
    }
}
