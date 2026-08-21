package com.xiaomi.push;

import android.util.Pair;
import com.xiaomi.mipush.sdk.Constants;
import java.util.Vector;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes4.dex */
public class et {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Vector<Pair<String, Long>> f8139a = new Vector<>();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static ConcurrentHashMap<String, Long> f339a = new ConcurrentHashMap<>();

    public static String a() {
        StringBuilder sb = new StringBuilder();
        synchronized (f8139a) {
            for (int i = 0; i < f8139a.size(); i++) {
                Pair<String, Long> pairElementAt = f8139a.elementAt(i);
                sb.append((String) pairElementAt.first);
                sb.append(Constants.COLON_SEPARATOR);
                sb.append(pairElementAt.second);
                if (i < f8139a.size() - 1) {
                    sb.append(";");
                }
            }
            f8139a.clear();
        }
        return sb.toString();
    }
}
