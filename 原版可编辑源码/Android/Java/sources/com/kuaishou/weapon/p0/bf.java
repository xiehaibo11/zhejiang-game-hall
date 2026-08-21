package com.kuaishou.weapon.p0;

import android.app.KeyguardManager;
import android.content.Context;
import android.database.Cursor;
import android.hardware.Sensor;
import android.hardware.SensorManager;
import android.media.AudioManager;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.provider.Settings;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import cz.msebera.android.httpclient.cookie.ClientCookie;
import java.util.List;
import org.json.JSONObject;

public class bf {
    private int a = -1;

    /* JADX WARN: Removed duplicated region for block: B:29:0x0062 A[EXC_TOP_SPLITTER, PHI: r7
      0x0062: PHI (r7v3 android.database.Cursor) = (r7v2 android.database.Cursor), (r7v4 android.database.Cursor) binds: [B:20:0x0067, B:16:0x0060] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static JSONObject a(Context context, String str) {
        Cursor cursorQuery;
        JSONObject jSONObject = new JSONObject();
        try {
            cursorQuery = context.getContentResolver().query(Uri.parse("content://settings/" + str), null, null, null, null);
            while (cursorQuery.moveToNext()) {
                try {
                    String string = cursorQuery.getString(cursorQuery.getColumnIndex("name"));
                    String string2 = cursorQuery.getString(cursorQuery.getColumnIndex("value"));
                    if (!TextUtils.isEmpty(string) && !string.equals("android_id") && !TextUtils.isEmpty(string2) && string2.length() < 20) {
                        jSONObject.put(string, string2);
                    }
                } catch (Throwable unused) {
                    if (cursorQuery != null) {
                    }
                }
            }
            cursorQuery.close();
        } catch (Throwable unused2) {
            cursorQuery = null;
        }
        if (cursorQuery != null) {
            try {
                cursorQuery.close();
            } catch (Throwable unused3) {
            }
        }
        return jSONObject;
    }

    public static int d(Context context) {
        try {
            return Settings.System.getInt(context.getContentResolver(), "screen_brightness", 255);
        } catch (Exception unused) {
            return 0;
        }
    }

    public static JSONObject g(Context context) {
        String[] strArr = {"system", "global", ClientCookie.SECURE_ATTR};
        JSONObject jSONObject = new JSONObject();
        for (int i = 0; i < 3; i++) {
            try {
                String str = strArr[i];
                JSONObject jSONObjectA = a(context, str);
                if (jSONObjectA != null && jSONObjectA.length() > 0) {
                    jSONObject.put(str, jSONObjectA);
                }
            } catch (Exception unused) {
            }
        }
        return jSONObject;
    }

    private boolean h(Context context) {
        try {
            Class<?> cls = Class.forName("com.android.internal.widget.LockPatternUtils");
            return ((Boolean) cls.getMethod("isSecure", new Class[0]).invoke(cls.getConstructor(Context.class).newInstance(context), new Object[0])).booleanValue();
        } catch (Exception unused) {
            return false;
        }
    }

    public String a(Context context) {
        try {
            AudioManager audioManager = (AudioManager) context.getSystemService("audio");
            if (audioManager == null) {
                return bh.b;
            }
            int streamMaxVolume = audioManager.getStreamMaxVolume(0);
            int streamVolume = audioManager.getStreamVolume(0);
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("0", streamMaxVolume + Constants.COLON_SEPARATOR + streamVolume);
            jSONObject.put("1", audioManager.getStreamMaxVolume(1) + Constants.COLON_SEPARATOR + audioManager.getStreamVolume(1));
            jSONObject.put("2", audioManager.getStreamMaxVolume(2) + Constants.COLON_SEPARATOR + audioManager.getStreamVolume(2));
            jSONObject.put("3", audioManager.getStreamMaxVolume(3) + Constants.COLON_SEPARATOR + audioManager.getStreamVolume(3));
            jSONObject.put("4", audioManager.getStreamMaxVolume(4) + Constants.COLON_SEPARATOR + audioManager.getStreamVolume(4));
            String string = jSONObject.toString();
            return TextUtils.isEmpty(string) ? bh.c : string;
        } catch (Throwable unused) {
            return bh.d;
        }
    }

    public boolean a() {
        return Environment.getExternalStorageState().equals("mounted");
    }

    public int b() {
        return this.a;
    }

    public boolean b(Context context) {
        return ((KeyguardManager) context.getSystemService("keyguard")).inKeyguardRestrictedInputMode();
    }

    public boolean c(Context context) {
        try {
            KeyguardManager keyguardManager = (KeyguardManager) context.getSystemService("keyguard");
            return Build.VERSION.SDK_INT >= 28 ? keyguardManager.isKeyguardLocked() : keyguardManager.inKeyguardRestrictedInputMode();
        } catch (Exception unused) {
            return false;
        }
    }

    public boolean e(Context context) {
        return Build.VERSION.SDK_INT >= 16 ? ((KeyguardManager) context.getSystemService("keyguard")).isKeyguardSecure() : h(context);
    }

    public JSONObject f(Context context) {
        List<Sensor> sensorList;
        try {
            SensorManager sensorManager = (SensorManager) context.getSystemService("sensor");
            if (sensorManager == null || (sensorList = sensorManager.getSensorList(-1)) == null || sensorList.size() <= 0) {
                return null;
            }
            JSONObject jSONObject = new JSONObject();
            for (Sensor sensor : sensorList) {
                jSONObject.put(sensor.getName(), sensor.getVendor());
            }
            return jSONObject;
        } catch (Exception unused) {
            return null;
        }
    }
}
