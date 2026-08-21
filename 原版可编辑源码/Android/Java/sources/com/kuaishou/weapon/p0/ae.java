package com.kuaishou.weapon.p0;

import android.content.Context;
import java.io.File;
import java.io.FileOutputStream;
import org.json.JSONObject;

public class ae {
    public static String a(Context context) {
        try {
            return f.b(context.getPackageManager().getPackageInfo(context.getPackageName(), 64).signatures[0].toByteArray());
        } catch (Exception unused) {
            return null;
        }
    }

    public JSONObject a() {
        try {
            JSONObject jSONObject = new JSONObject();
            int i = 1;
            jSONObject.put("0", a("/data", true) ? 1 : 0);
            jSONObject.put("1", a("/system/bin", true) ? 1 : 0);
            if (!a("/system/lib", true)) {
                i = 0;
            }
            jSONObject.put("2", i);
            return jSONObject;
        } catch (Exception unused) {
            return null;
        }
    }

    public boolean a(String str) {
        return new File(File.separator + "proc" + File.separator + str).canWrite();
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x0053 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:29:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean a(String str, boolean z) {
        FileOutputStream fileOutputStream;
        String string = "";
        if (z) {
            try {
                str = str + "/-" + System.currentTimeMillis();
                StringBuilder sb = new StringBuilder();
                sb.append(System.currentTimeMillis());
                string = sb.toString();
            } catch (Throwable unused) {
                fileOutputStream = null;
                if (fileOutputStream != null) {
                    return false;
                }
                try {
                    fileOutputStream.close();
                    return false;
                } catch (Exception unused2) {
                    return false;
                }
            }
        }
        File file = new File(str);
        file.exists();
        fileOutputStream = new FileOutputStream(file);
        try {
            fileOutputStream.write(string.getBytes());
            fileOutputStream.flush();
            fileOutputStream.close();
            if (z) {
                file.delete();
            }
            try {
                fileOutputStream.close();
                return true;
            } catch (Exception unused3) {
                return true;
            }
        } catch (Throwable unused4) {
            if (fileOutputStream != null) {
            }
        }
    }

    public JSONObject b() {
        try {
            JSONObject jSONObject = new JSONObject();
            int i = 1;
            jSONObject.put("0", a("/sys", true) ? 1 : 0);
            jSONObject.put("1", a("/sbin", true) ? 1 : 0);
            jSONObject.put("2", a("/etc", true) ? 1 : 0);
            if (!a("/dev", true)) {
                i = 0;
            }
            jSONObject.put("3", i);
            return jSONObject;
        } catch (Exception unused) {
            return null;
        }
    }

    public boolean b(String str) {
        return a(str, false);
    }
}
