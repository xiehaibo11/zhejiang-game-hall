package com.qihoo360.loader2;

import android.content.Context;
import android.text.TextUtils;
import com.qihoo360.loader2.Builder;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.utils.Charsets;
import com.qihoo360.replugin.utils.CloseableUtils;
import com.qihoo360.replugin.utils.IOUtils;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class FinderBuiltin {
    static final void loadPlugins(Context context, Builder.PxAll pxAll) {
        InputStream inputStreamOpen = null;
        try {
            inputStreamOpen = context.getAssets().open("plugins-builtin.json");
            readConfig(inputStreamOpen, pxAll);
        } catch (FileNotFoundException unused) {
            if (LogDebug.LOG) {
                LogDebug.e(LogDebug.PLUGIN_TAG, "plugins-builtin.json not found");
            }
        } catch (Throwable th) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, th.getMessage(), th);
            }
        }
        CloseableUtils.closeQuietly(inputStreamOpen);
    }

    private static final void readConfig(InputStream inputStream, Builder.PxAll pxAll) throws JSONException, IOException {
        JSONArray jSONArray = new JSONArray(IOUtils.toString(inputStream, Charsets.UTF_8));
        for (int i = 0; i < jSONArray.length(); i++) {
            JSONObject jSONObject = jSONArray.getJSONObject(i);
            if (jSONObject != null) {
                if (TextUtils.isEmpty(jSONObject.getString("name"))) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "built-in plugins config: invalid item: name is empty, json=" + jSONObject);
                    }
                } else {
                    PluginInfo pluginInfoBuildFromBuiltInJson = PluginInfo.buildFromBuiltInJson(jSONObject);
                    if (!pluginInfoBuildFromBuiltInJson.match()) {
                        if (LogDebug.LOG) {
                            LogDebug.e(LogDebug.PLUGIN_TAG, "built-in plugins config: mismatch item: " + pluginInfoBuildFromBuiltInJson);
                        }
                    } else {
                        if (LogDebug.LOG) {
                            LogDebug.d(LogDebug.PLUGIN_TAG, "built-in plugins config: item: " + pluginInfoBuildFromBuiltInJson);
                        }
                        pxAll.addBuiltin(pluginInfoBuildFromBuiltInJson);
                    }
                }
            }
        }
    }
}
