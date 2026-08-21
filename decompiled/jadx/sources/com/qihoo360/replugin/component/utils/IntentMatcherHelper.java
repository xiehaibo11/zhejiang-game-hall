package com.qihoo360.replugin.component.utils;

import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.ActivityInfo;
import android.net.Uri;
import com.qihoo360.i.Factory;
import com.qihoo360.mobilesafe.parser.manifest.ManifestParser;
import com.qihoo360.replugin.helper.LogDebug;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class IntentMatcherHelper {
    public static ActivityInfo getActivityInfo(Context context, String str, Intent intent) {
        if (str == null) {
            return null;
        }
        return Factory.queryActivityInfo(str, doMatchIntent(context, intent, ManifestParser.INS.getActivityFilterMap(str)));
    }

    public static String doMatchIntent(Context context, Intent intent, Map<String, List<IntentFilter>> map) {
        if (map == null) {
            return null;
        }
        String action = intent.getAction();
        String strResolveTypeIfNeeded = intent.resolveTypeIfNeeded(context.getContentResolver());
        Uri data = intent.getData();
        String scheme = intent.getScheme();
        Set<String> categories = intent.getCategories();
        for (Map.Entry<String, List<IntentFilter>> entry : map.entrySet()) {
            String key = entry.getKey();
            List<IntentFilter> value = entry.getValue();
            if (value != null) {
                Iterator<IntentFilter> it = value.iterator();
                while (it.hasNext()) {
                    int iMatch = it.next().match(action, strResolveTypeIfNeeded, scheme, data, categories, "ComponentList");
                    if (iMatch >= 0) {
                        if (LogDebug.LOG) {
                            LogDebug.d(ManifestParser.TAG, "IntentFilter 匹配成功: " + entry.getKey());
                        }
                        return key;
                    }
                    if (LogDebug.LOG) {
                        LogDebug.d(ManifestParser.TAG, "  Filter did not match: " + (iMatch != -4 ? iMatch != -3 ? iMatch != -2 ? iMatch != -1 ? "unknown reason" : "type" : "data" : "action" : "category"));
                    }
                }
            }
        }
        return "";
    }
}
