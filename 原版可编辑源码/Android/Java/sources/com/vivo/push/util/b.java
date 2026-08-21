package com.vivo.push.util;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Base64;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class b {
    protected Context a;
    private String b;
    private volatile SharedPreferences c;
    private HashMap<String, String> d = new HashMap<>();
    private HashMap<String, Long> e = new HashMap<>();
    private HashMap<String, Integer> f = new HashMap<>();
    private HashMap<String, Boolean> g = new HashMap<>();

    public static void a(SharedPreferences.Editor editor) {
        if (editor == null) {
            return;
        }
        if (Looper.myLooper() == Looper.getMainLooper()) {
            editor.apply();
        } else {
            editor.commit();
        }
    }

    private void a(Map<String, String> map) {
        if (map.size() > 0) {
            b();
            if (this.c != null) {
                SharedPreferences.Editor editorEdit = this.c.edit();
                for (String str : map.keySet()) {
                    String str2 = map.get(str);
                    this.d.put(str, str2);
                    editorEdit.putString(str, str2);
                }
                a(editorEdit);
            }
        }
    }

    private void b() {
        if (this.c == null) {
            Context context = this.a;
            if (context == null) {
                throw new RuntimeException("SharedPreferences is not init", new Throwable());
            }
            this.c = context.getSharedPreferences(this.b, 0);
        }
    }

    private List<String> c(String str) {
        String[] strArrSplit;
        if (this.a == null) {
            p.c("BaseSharePreference", " parsLocalIv error mContext is null ");
            return null;
        }
        ArrayList arrayList = new ArrayList();
        try {
            Object objA = z.a(this.a, this.a.getPackageName(), str);
            if (objA == null) {
                return null;
            }
            String str2 = new String(Base64.decode(objA.toString(), 2));
            if (!TextUtils.isEmpty(str2) && (strArrSplit = str2.split(",#@")) != null && strArrSplit.length >= 4) {
                for (String str3 : strArrSplit) {
                    arrayList.add(str3.replace(",#@", ""));
                }
                if (arrayList.size() < 4) {
                }
            }
            return null;
        } catch (Exception e) {
            p.c("BaseSharePreference", " parsLocalIv error e =" + e.getMessage());
            e.printStackTrace();
        }
        return arrayList;
    }

    public final int a(String str) {
        Integer numValueOf = this.f.get(str);
        if (numValueOf != null) {
            return numValueOf.intValue();
        }
        b();
        if (this.c != null) {
            numValueOf = Integer.valueOf(this.c.getInt(str, 0));
            if (!numValueOf.equals(0)) {
                this.f.put(str, numValueOf);
            }
        }
        return numValueOf.intValue();
    }

    public final void a() {
        this.e.clear();
        this.f.clear();
        this.g.clear();
        this.d.clear();
        b();
        if (this.c != null) {
            SharedPreferences.Editor editorEdit = this.c.edit();
            editorEdit.clear();
            a(editorEdit);
        }
    }

    public final void a(Context context, String str) {
        if (TextUtils.isEmpty(str)) {
            throw new RuntimeException("sharedFileName can't be null");
        }
        this.b = str;
        this.c = context.getSharedPreferences(str, 0);
        this.a = context;
        List<String> listC = c("local_iv");
        if (listC == null || listC.size() < 4) {
            p.a("BaseSharePreference", " initSecureCode error list is null ");
            return;
        }
        HashMap map = new HashMap();
        map.put("com.vivo.push.secure_sub_iv", listC.get(1));
        map.put("com.vivo.push.secure_sub_key", listC.get(2));
        map.put("com.vivo.push.secure_cache_iv", listC.get(3));
        map.put("com.vivo.push.secure_cache_key", listC.get(0));
        a(map);
    }

    public final void a(String str, int i) {
        this.f.put(str, Integer.valueOf(i));
        b();
        if (this.c != null) {
            SharedPreferences.Editor editorEdit = this.c.edit();
            editorEdit.putInt(str, i);
            a(editorEdit);
        }
    }

    public final void a(String str, long j) {
        this.e.put(str, Long.valueOf(j));
        b();
        if (this.c != null) {
            SharedPreferences.Editor editorEdit = this.c.edit();
            editorEdit.putLong(str, j);
            a(editorEdit);
        }
    }

    public final void a(String str, String str2) {
        this.d.put(str, str2);
        b();
        if (this.c != null) {
            SharedPreferences.Editor editorEdit = this.c.edit();
            editorEdit.putString(str, str2);
            a(editorEdit);
        }
    }

    public final long b(String str, long j) {
        Long lValueOf = this.e.get(str);
        if (lValueOf != null) {
            return lValueOf.longValue();
        }
        b();
        if (this.c != null) {
            lValueOf = Long.valueOf(this.c.getLong(str, j));
            if (!lValueOf.equals(Long.valueOf(j))) {
                this.e.put(str, lValueOf);
            }
        }
        return lValueOf.longValue();
    }

    public final String b(String str, String str2) {
        String string = this.d.get(str);
        if (string != null) {
            return string;
        }
        b();
        if (this.c != null) {
            string = this.c.getString(str, str2);
            if (!TextUtils.isEmpty(string) && !string.equals(str2)) {
                this.d.put(str, string);
            }
        }
        return string;
    }

    public final void b(String str) {
        this.e.remove(str);
        this.f.remove(str);
        this.g.remove(str);
        this.d.remove(str);
        b();
        if (this.c != null) {
            SharedPreferences.Editor editorEdit = this.c.edit();
            if (this.c.contains(str)) {
                editorEdit.remove(str);
                a(editorEdit);
            }
        }
    }
}
