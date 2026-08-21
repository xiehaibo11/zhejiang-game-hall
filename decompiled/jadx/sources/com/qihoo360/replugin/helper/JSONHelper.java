package com.qihoo360.replugin.helper;

import android.os.Build;
import com.qihoo360.replugin.RePluginInternal;
import java.lang.reflect.Field;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class JSONHelper {
    private static final boolean LOG = RePluginInternal.FOR_DEV;

    public static <T> void putNoThrows(JSONObject jSONObject, String str, T t) {
        try {
            jSONObject.put(str, t);
        } catch (JSONException e) {
            if (LOG) {
                e.printStackTrace();
            }
        }
    }

    public static JSONObject cloneNoThrows(JSONObject jSONObject) {
        try {
            return new JSONObject(jSONObject.toString());
        } catch (JSONException e) {
            if (!LOG) {
                return null;
            }
            e.printStackTrace();
            return null;
        }
    }

    public static void remove(JSONArray jSONArray, int i) {
        if (Build.VERSION.SDK_INT >= 19) {
            jSONArray.remove(i);
        } else {
            removeBelowAPI19(jSONArray, i);
        }
    }

    private static void removeBelowAPI19(JSONArray jSONArray, int i) {
        if (i < 0) {
            return;
        }
        try {
            Field declaredField = JSONArray.class.getDeclaredField("values");
            declaredField.setAccessible(true);
            List list = (List) declaredField.get(jSONArray);
            if (i >= list.size()) {
                return;
            }
            list.remove(i);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
