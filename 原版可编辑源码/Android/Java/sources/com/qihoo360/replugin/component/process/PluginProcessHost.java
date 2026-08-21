package com.qihoo360.replugin.component.process;

import android.util.SparseArray;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.component.provider.PluginPitProviderBase;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginProcessHost {
    public static final int PROCESS_COUNT = 3;
    public static final int PROCESS_INIT = -100;
    public static final String PROCESS_PLUGIN_SUFFIX = "p";
    public static final String PROCESS_PLUGIN_SUFFIX2 = ":p";
    public static final Map<String, Integer> PROCESS_INT_MAP = new HashMap();
    public static final Map<String, String> PROCESS_ADJUST_MAP = new HashMap();
    public static final SparseArray<String> PROCESS_AUTHORITY_MAP = new SparseArray<>();

    public static boolean isCustomPluginProcess(int i) {
        return i >= -100 && i < -97;
    }

    static {
        for (int i = 0; i < 3; i++) {
            int i2 = i - 100;
            PROCESS_INT_MAP.put(PROCESS_PLUGIN_SUFFIX2 + i, Integer.valueOf(i2));
            PROCESS_ADJUST_MAP.put("$p" + i, IPC.getPackageName() + Constants.COLON_SEPARATOR + "p" + i);
            SparseArray<String> sparseArray = PROCESS_AUTHORITY_MAP;
            StringBuilder sb = new StringBuilder();
            sb.append(PluginPitProviderBase.AUTHORITY_PREFIX);
            sb.append(i);
            sparseArray.put(i2, sb.toString());
        }
    }

    public static String processTail(String str) {
        int iIndexOf = str.indexOf(58);
        return iIndexOf >= 0 ? str.toLowerCase().substring(iIndexOf) : str;
    }
}
