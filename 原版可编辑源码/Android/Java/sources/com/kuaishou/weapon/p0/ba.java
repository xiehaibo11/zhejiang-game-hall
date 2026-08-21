package com.kuaishou.weapon.p0;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.jni.Engine;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.LineNumberReader;
import org.json.JSONObject;

public class ba {
    private JSONObject a;
    private int b;

    public ba(Context context, int i, String str, boolean z) {
        if (Engine.loadSuccess && z) {
            try {
                String strPqr = Engine.getInstance(context).pqr(Integer.valueOf(cj.f).intValue(), 0, i, str);
                if (TextUtils.isEmpty(strPqr)) {
                    return;
                }
                this.a = new JSONObject(strPqr);
            } catch (Throwable unused) {
            }
        }
    }

    public static boolean a(Context context) {
        try {
            if (Build.VERSION.SDK_INT >= 23) {
                return g.a(context, g.i) != -1;
            }
            return true;
        } catch (Exception unused) {
            return false;
        }
    }

    public int a() {
        return this.b;
    }

    public String a(String str) {
        JSONObject jSONObject = this.a;
        if (jSONObject == null) {
            return null;
        }
        try {
            return jSONObject.getString(str);
        } catch (Exception unused) {
            return null;
        }
    }

    public JSONObject b() {
        return this.a;
    }

    /* JADX WARN: Removed duplicated region for block: B:41:0x00c5 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00c6 A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public JSONObject c() {
        LineNumberReader lineNumberReader;
        InputStreamReader inputStreamReader;
        JSONObject jSONObject = new JSONObject();
        StringBuilder sb = new StringBuilder();
        this.b = 0;
        try {
            inputStreamReader = new InputStreamReader(Runtime.getRuntime().exec(i.a("2afcabd3eda8ae", "077f")).getInputStream());
            try {
                lineNumberReader = new LineNumberReader(inputStreamReader);
            } catch (Throwable unused) {
                lineNumberReader = null;
            }
        } catch (Throwable unused2) {
            lineNumberReader = null;
            inputStreamReader = null;
        }
        try {
            int i = 0;
            for (String line = lineNumberReader.readLine(); !TextUtils.isEmpty(line); line = lineNumberReader.readLine()) {
                if (line.contains("]:")) {
                    String[] strArrSplit = line.split("]:");
                    if (strArrSplit.length == 2) {
                        String strTrim = strArrSplit[0].trim();
                        String strTrim2 = strArrSplit[1].trim();
                        if (strTrim.length() > 2 && strTrim2.length() > 2) {
                            String strSubstring = strTrim.substring(1);
                            String strSubstring2 = strTrim2.substring(1, strTrim2.length() - 1);
                            if (strSubstring.startsWith("init.svc.") && (strSubstring2.equals("stopped") || strSubstring2.equals("running"))) {
                                sb.append(strSubstring.replace("init.svc.", ""));
                            }
                            jSONObject.put(strSubstring, strSubstring2);
                        }
                    }
                }
                i++;
                if (i > 1300) {
                    break;
                }
            }
            if (jSONObject.length() > 10) {
                jSONObject.put(t.h, jSONObject.length());
            }
            try {
                inputStreamReader.close();
            } catch (Throwable unused3) {
            }
        } catch (Throwable unused4) {
            if (inputStreamReader != null) {
                try {
                    inputStreamReader.close();
                } catch (Throwable unused5) {
                }
            }
            if (lineNumberReader != null) {
            }
            if (jSONObject.length() <= 10) {
            }
        }
        try {
            lineNumberReader.close();
        } catch (IOException unused6) {
        }
        if (jSONObject.length() <= 10) {
            return jSONObject;
        }
        return null;
    }
}
