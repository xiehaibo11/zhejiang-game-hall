package com.qihoo360.loader2;

import android.content.ComponentName;
import android.content.Intent;
import android.text.TextUtils;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import java.util.Iterator;
import java.util.Set;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PluginIntent {
    public static final String EXTRA_ACTIVITY = "activity:";
    public static final String EXTRA_CONTAINER = "container:";
    public static final String EXTRA_COUNTER = "counter:";
    public static final String EXTRA_PLUGIN = "plugin:";
    public static final String EXTRA_PROCESS = "process:";
    private final Intent mIntent;

    PluginIntent(Intent intent) {
        this.mIntent = intent;
    }

    private final void remove(String str) {
        Set<String> categories = this.mIntent.getCategories();
        if (categories != null) {
            for (String str2 : categories) {
                if (str2.startsWith(str)) {
                    this.mIntent.removeCategory(str2);
                    return;
                }
            }
        }
    }

    private final String getS(String str) {
        Set<String> categories = this.mIntent.getCategories();
        if (categories == null) {
            return null;
        }
        for (String str2 : categories) {
            if (str2.startsWith(str)) {
                return str2.substring(str.length());
            }
        }
        return null;
    }

    private final void setS(String str, String str2) {
        remove(str);
        this.mIntent.addCategory(str + str2);
    }

    private final int getI(String str, int i) {
        String strSubstring;
        Set<String> categories = this.mIntent.getCategories();
        if (categories != null) {
            Iterator<String> it = categories.iterator();
            while (true) {
                if (!it.hasNext()) {
                    strSubstring = "";
                    break;
                }
                String next = it.next();
                if (next.startsWith(str)) {
                    strSubstring = next.substring(str.length());
                    break;
                }
            }
            if (!TextUtils.isEmpty(strSubstring)) {
                try {
                    return Integer.parseInt(strSubstring);
                } catch (Throwable th) {
                    LogRelease.e(LogDebug.PLUGIN_TAG, th.getMessage(), th);
                }
            }
        }
        return i;
    }

    private final void setI(String str, int i) {
        remove(str);
        this.mIntent.addCategory(str + i);
    }

    final String getOriginal() {
        ComponentName component = this.mIntent.getComponent();
        if (component != null) {
            return component.getClassName();
        }
        return null;
    }

    final String getPlugin() {
        return getS(EXTRA_PLUGIN);
    }

    final void setPlugin(String str) {
        setS(EXTRA_PLUGIN, str);
    }

    final String getActivity() {
        return getS(EXTRA_ACTIVITY);
    }

    final void setActivity(String str) {
        setS(EXTRA_ACTIVITY, str);
    }

    final int getProcess() {
        return getI(EXTRA_PROCESS, Integer.MIN_VALUE);
    }

    final void setProcess(int i) {
        setI(EXTRA_PROCESS, i);
    }

    final String getContainer() {
        return getS(EXTRA_CONTAINER);
    }

    final void setContainer(String str) {
        setS(EXTRA_CONTAINER, str);
    }

    final int getCounter() {
        return getI(EXTRA_COUNTER, 0);
    }

    final void setCounter(int i) {
        setI(EXTRA_COUNTER, i);
    }
}
