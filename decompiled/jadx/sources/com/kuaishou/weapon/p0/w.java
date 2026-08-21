package com.kuaishou.weapon.p0;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import com.kuaishou.weapon.p0.jni.A;
import org.json.JSONArray;

/* JADX INFO: loaded from: classes2.dex */
public class w {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2796a;
    private int b;
    private h c;

    public w(Context context) {
        this.b = 0;
        this.f2796a = context;
        h hVarA = h.a(context, "re_po_rt");
        this.c = hVarA;
        if (hVarA != null) {
            this.b = hVarA.b(df.r, 0);
        }
    }

    public JSONArray a(int i) {
        try {
            new A(this.f2796a, i);
            JSONArray jsonObject = A.getJsonObject();
            JSONArray jSONArray = new JSONArray();
            if (jsonObject != null) {
                for (int i2 = 0; i2 < jsonObject.length(); i2++) {
                    jSONArray.put(jsonObject.get(i2));
                }
                A.setJsonObject(null);
                return jSONArray;
            }
        } catch (Throwable unused) {
        }
        return null;
    }

    public JSONArray b(int i) {
        try {
            return c(i);
        } catch (Throwable unused) {
            return null;
        }
    }

    public JSONArray c(int i) {
        return d(i);
    }

    public JSONArray d(int i) {
        JSONArray jSONArray = new JSONArray();
        try {
            PackageManager packageManager = this.f2796a.getPackageManager();
            for (int i2 = 1000; i2 <= 19999; i2++) {
                String[] packagesForUid = null;
                try {
                    packagesForUid = packageManager.getPackagesForUid(i2);
                } catch (Exception unused) {
                }
                if (packagesForUid != null) {
                    for (String str : packagesForUid) {
                        try {
                            PackageInfo packageInfo = packageManager.getPackageInfo(str, 0);
                            if (i != 1 || (packageInfo.applicationInfo.flags & 1) != 1) {
                                v vVar = new v(packageInfo, this.f2796a);
                                vVar.h();
                                jSONArray.put(vVar.k());
                            }
                        } catch (Exception unused2) {
                        }
                    }
                }
            }
        } catch (Exception unused3) {
        }
        return jSONArray;
    }
}
