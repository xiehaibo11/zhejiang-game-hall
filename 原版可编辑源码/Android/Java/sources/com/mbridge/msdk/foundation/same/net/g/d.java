package com.mbridge.msdk.foundation.same.net.g;

import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.kuaishou.weapon.p0.t;
import com.loc.at;
import com.mbridge.msdk.foundation.tools.z;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.text.Typography;

public final class d {
    private Map<String, String> j = new LinkedHashMap();
    private Map<String, com.mbridge.msdk.foundation.same.net.c.a> k = new LinkedHashMap();
    private static final String i = d.class.getSimpleName();
    public static String a = "a";
    public static String b = "d";
    public static String c = "e";
    public static String d = "f";
    public static String e = at.f;
    public static String f = at.g;
    public static String g = t.e;
    public static String h = "coppa";

    public final void a(String str, String str2) {
        if (str2 == null) {
            z.d(i, "add() value is null!");
        }
        if (TextUtils.isEmpty(str) || str2 == null) {
            return;
        }
        this.j.put(str, str2);
    }

    public final String a() {
        StringBuilder sb = new StringBuilder();
        try {
            for (Map.Entry<String, String> entry : this.j.entrySet()) {
                if (sb.length() > 0) {
                    sb.append(Typography.amp);
                }
                sb.append(URLEncoder.encode(entry.getKey(), "UTF-8"));
                sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                sb.append(URLEncoder.encode(entry.getValue(), "UTF-8"));
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        return sb.toString();
    }

    public final void a(String str) {
        this.j.remove(str);
        this.k.remove(str);
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder(28);
        try {
            for (Map.Entry<String, String> entry : this.j.entrySet()) {
                if (sb.length() > 0) {
                    sb.append(Typography.amp);
                }
                sb.append(URLEncoder.encode(entry.getKey(), "UTF-8"));
                sb.append(com.alipay.sdk.m.n.a.h);
                sb.append(URLEncoder.encode(entry.getValue(), "UTF-8"));
            }
            for (Map.Entry<String, com.mbridge.msdk.foundation.same.net.c.a> entry2 : this.k.entrySet()) {
                if (sb.length() > 0) {
                    sb.append(Typography.amp);
                }
                sb.append(URLEncoder.encode(entry2.getKey(), "UTF-8"));
                sb.append(com.alipay.sdk.m.n.a.h);
                sb.append(URLEncoder.encode("FILE_NAME_" + entry2.getValue().a().getName(), "UTF-8"));
            }
        } catch (UnsupportedEncodingException e2) {
            z.d(i, e2.getMessage());
        }
        return sb.toString();
    }

    public final Map<String, String> b() {
        return this.j;
    }
}
