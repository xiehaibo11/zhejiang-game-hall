package com.qihoo360.replugin.model;

import android.content.Context;
import android.text.TextUtils;
import com.qihoo360.loader2.Constant;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.utils.Charsets;
import com.qihoo360.replugin.utils.FileUtils;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginInfoList implements Iterable<PluginInfo> {
    private static final String TAG = "PluginInfoList";
    private final ConcurrentHashMap<String, PluginInfo> mMap = new ConcurrentHashMap<>();

    public void add(PluginInfo pluginInfo) {
        addToMap(pluginInfo);
    }

    public void remove(String str) {
        this.mMap.remove(str);
    }

    public PluginInfo get(String str) {
        if (str != null) {
            return this.mMap.get(str);
        }
        return null;
    }

    public List<PluginInfo> cloneList() {
        return new ArrayList(getCopyValues());
    }

    public boolean load(Context context) throws Throwable {
        try {
            String fileToString = FileUtils.readFileToString(getFile(context), Charsets.UTF_8);
            if (TextUtils.isEmpty(fileToString)) {
                if (LogDebug.LOG) {
                    LogDebug.e(TAG, "load: Read Json error!");
                }
                return false;
            }
            JSONArray jSONArray = new JSONArray(fileToString);
            for (int i = 0; i < jSONArray.length(); i++) {
                JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
                PluginInfo pluginInfoCreateByJO = PluginInfo.createByJO(jSONObjectOptJSONObject);
                if (pluginInfoCreateByJO == null) {
                    if (LogDebug.LOG) {
                        LogDebug.e(TAG, "load: PluginInfo Invalid. Ignore! jo=" + jSONObjectOptJSONObject);
                    }
                } else {
                    addToMap(pluginInfoCreateByJO);
                }
            }
            return true;
        } catch (IOException e) {
            if (LogDebug.LOG) {
                LogDebug.e(TAG, "load: Load error!", e);
            }
            return false;
        } catch (JSONException e2) {
            if (LogDebug.LOG) {
                LogDebug.e(TAG, "load: Parse Json Error!", e2);
            }
            return false;
        }
    }

    public boolean save(Context context) throws Throwable {
        try {
            File file = getFile(context);
            JSONArray jSONArray = new JSONArray();
            Iterator<PluginInfo> it = getCopyValues().iterator();
            while (it.hasNext()) {
                jSONArray.put(it.next().getJSON());
            }
            FileUtils.writeStringToFile(file, jSONArray.toString(), Charsets.UTF_8);
            return true;
        } catch (IOException e) {
            if (!LogDebug.LOG) {
                return false;
            }
            e.printStackTrace();
            return false;
        }
    }

    @Override
    public Iterator<PluginInfo> iterator() {
        return getCopyValues().iterator();
    }

    private Collection<PluginInfo> getCopyValues() {
        return new HashSet(this.mMap.values());
    }

    private void addToMap(PluginInfo pluginInfo) {
        if (pluginInfo == null) {
            return;
        }
        if (!TextUtils.isEmpty(pluginInfo.getName())) {
            this.mMap.put(pluginInfo.getName(), pluginInfo);
        }
        if (TextUtils.isEmpty(pluginInfo.getAlias())) {
            return;
        }
        this.mMap.put(pluginInfo.getAlias(), pluginInfo);
    }

    private File getFile(Context context) {
        return new File(context.getDir(Constant.LOCAL_PLUGIN_APK_SUB_DIR, 0), "p.l");
    }
}
