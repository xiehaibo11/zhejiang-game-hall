package com.xiaomi.push.service;

import android.os.SystemClock;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Map<String, Long> f8379a = new HashMap();

    private static void a() {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        ArrayList arrayList = new ArrayList(f8379a.size());
        for (Map.Entry<String, Long> entry : f8379a.entrySet()) {
            if (jElapsedRealtime - entry.getValue().longValue() > 60000) {
                arrayList.add(entry.getKey());
            }
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            f8379a.remove((String) it.next());
        }
    }

    public static boolean a(byte[] bArr, String str) {
        boolean z = false;
        if (bArr != null && bArr.length > 0 && !TextUtils.isEmpty(str)) {
            String strA = com.xiaomi.push.bp.a(bArr);
            if (!TextUtils.isEmpty(strA)) {
                synchronized (f8379a) {
                    if (f8379a.get(strA + str) != null) {
                        z = true;
                    } else {
                        f8379a.put(strA + str, Long.valueOf(SystemClock.elapsedRealtime()));
                    }
                    a();
                }
            }
        }
        return z;
    }
}
