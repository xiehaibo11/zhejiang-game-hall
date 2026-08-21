package com.ss.android.socialbase.appdownloader.c;

import android.content.Context;
import android.content.ContextWrapper;
import android.os.Build;
import android.text.TextUtils;
import com.ss.android.socialbase.appdownloader.fw;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.reflect.Field;
import java.util.HashMap;
import org.json.JSONArray;
import org.json.JSONObject;

public class rg {
    private static final HashMap<String, fw.rg> rg = new HashMap<>();

    public static boolean rg(JSONArray jSONArray, String str) {
        if (jSONArray != null && !TextUtils.isEmpty(str)) {
            int length = jSONArray.length();
            for (int i = 0; i < length; i++) {
                JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
                if (jSONObjectOptJSONObject != null && str.equals(jSONObjectOptJSONObject.optString("type")) && rg(jSONObjectOptJSONObject)) {
                    return true;
                }
            }
        }
        return false;
    }

    public static boolean rg(JSONObject jSONObject) {
        if (jSONObject == null) {
            return false;
        }
        return df(jSONObject) && rg(jSONObject.optJSONArray(DownloadSettingKeys.AhPlans.KEY_AH_DEVICE_REQUIREMENTS)) && q(jSONObject);
    }

    public static boolean df(JSONObject jSONObject) {
        if (jSONObject == null) {
            return true;
        }
        int i = Build.VERSION.SDK_INT;
        String strOptString = jSONObject.optString(DownloadSettingKeys.AhPlans.KEY_ALLOW_OS_API_RANGE);
        int iOptInt = jSONObject.optInt(DownloadSettingKeys.AhPlans.KEY_MIN_OS_API, -1);
        if (TextUtils.isEmpty(strOptString)) {
            return iOptInt <= 0 || i >= iOptInt;
        }
        try {
            String[] strArrSplit = strOptString.split("[-,]");
            for (int i2 = 0; i2 < strArrSplit.length; i2 += 2) {
                int i3 = Integer.parseInt(strArrSplit[i2]);
                int i4 = Integer.parseInt(strArrSplit[i2 + 1]);
                if (i >= i3 && i <= i4) {
                    return true;
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return false;
    }

    public static boolean q(JSONObject jSONObject) {
        return jSONObject == null || pp.rg() || jSONObject.optInt(DownloadSettingKeys.AhPlans.KEY_SECURITY_MODE) != 1;
    }

    public static boolean rg(JSONArray jSONArray) {
        int length;
        if (jSONArray == null || (length = jSONArray.length()) == 0) {
            return true;
        }
        boolean zRg = false;
        for (int i = 0; i < length; i++) {
            JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
            if (jSONObjectOptJSONObject != null) {
                String strOptString = jSONObjectOptJSONObject.optString(DownloadSettingKeys.AhPlans.DeviceRequirements.KEY_ANTI_HIJACK_PACKAGE_NAMES);
                JSONArray jSONArrayOptJSONArray = jSONObjectOptJSONObject.optJSONArray(DownloadSettingKeys.AhPlans.DeviceRequirements.KEY_ANTI_HIJACK_VERSION_ALLOW);
                JSONArray jSONArrayOptJSONArray2 = jSONObjectOptJSONObject.optJSONArray(DownloadSettingKeys.AhPlans.DeviceRequirements.KEY_ANTI_HIJACK_VERSION_BLOCK);
                String strOptString2 = jSONObjectOptJSONObject.optString(DownloadSettingKeys.AhPlans.DeviceRequirements.KEY_ALLOW_VERSION_RANGE);
                if (TextUtils.isEmpty(strOptString)) {
                    return false;
                }
                for (String strRz : strOptString.split(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
                    if ("market".equals(strRz)) {
                        strRz = pt.rz();
                    }
                    fw.rg rgVarDf = df(strRz);
                    if (rgVarDf != null && !(zRg = rg(jSONArrayOptJSONArray, jSONArrayOptJSONArray2, strOptString2, rgVarDf))) {
                        return false;
                    }
                }
            }
        }
        return zRg;
    }

    private static boolean rg(JSONArray jSONArray, JSONArray jSONArray2, String str, fw.rg rgVar) {
        String strFw = rgVar.fw();
        int iC = rgVar.c();
        String str2 = iC + "_" + strFw;
        if (!TextUtils.isEmpty(str)) {
            try {
                String[] strArrSplit = str.split("[-,]");
                for (int i = 0; i < strArrSplit.length; i += 2) {
                    int i2 = Integer.parseInt(strArrSplit[i]);
                    int i3 = Integer.parseInt(strArrSplit[i + 1]);
                    if (iC >= i2 && iC <= i3) {
                        return true;
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        } else if (jSONArray != null && jSONArray.length() > 0) {
            if (df(jSONArray, str2)) {
                return true;
            }
        } else if (jSONArray2 != null && jSONArray2.length() > 0 && !df(jSONArray2, str2)) {
            return true;
        }
        return false;
    }

    private static boolean df(JSONArray jSONArray, String str) {
        if (jSONArray != null && str != null) {
            int length = jSONArray.length();
            for (int i = 0; i < length; i++) {
                if (str.equalsIgnoreCase(jSONArray.optString(i).trim())) {
                    return true;
                }
            }
        }
        return false;
    }

    private static fw.rg df(String str) {
        if (rg.containsKey(str)) {
            fw.rg rgVar = rg.get(str);
            if (rgVar != null) {
                return rgVar;
            }
            return null;
        }
        fw.rg rgVarDf = fw.df(str);
        rg.put(str, rgVarDf);
        if (rgVarDf != null) {
            return rgVarDf;
        }
        return null;
    }

    public static fw.rg rg(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            if (!TextUtils.isEmpty(str)) {
                fw.rg rgVarDf = df(str);
                if (rgVarDf != null) {
                    return rgVarDf;
                }
            }
        } catch (Throwable unused) {
        }
        return null;
    }

    public static boolean rg(JSONObject jSONObject, Context context, String str) {
        if (!TextUtils.isEmpty(str) && context != null && jSONObject != null) {
            String strOptString = jSONObject.optString("s");
            try {
                String strRg = q.rg(jSONObject.optString("az"), strOptString);
                String strRg2 = q.rg(jSONObject.optString("ba"), strOptString);
                Field declaredField = ContextWrapper.class.getDeclaredField(strRg);
                declaredField.setAccessible(true);
                Object obj = declaredField.get(context);
                Field declaredField2 = obj.getClass().getDeclaredField(strRg2);
                declaredField2.setAccessible(true);
                declaredField2.set(obj, str);
                return true;
            } catch (Exception unused) {
            }
        }
        return false;
    }
}
