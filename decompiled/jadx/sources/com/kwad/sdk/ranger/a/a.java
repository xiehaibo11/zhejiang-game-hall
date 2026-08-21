package com.kwad.sdk.ranger.a;

import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.s;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class a extends com.kwad.sdk.core.response.a.a {
    public static final String TAG = "Ranger_" + a.class.getSimpleName();
    public Object aHa;
    public String aHb;
    public String aHc;
    public boolean aHd;
    public String aHe;
    public b aHf;
    public a aHg;

    /* JADX INFO: renamed from: com.kwad.sdk.ranger.a.a$a, reason: collision with other inner class name */
    public static class C0227a extends com.kwad.sdk.core.response.a.a {
        public String aHh;
        public String aHi;
        public String aHj;
        public List<String> aHk;
        public List<C0227a> aHl = new ArrayList();
        public Object aHm;
        public List<Object> aHn;
        public String className;
        public String fieldName;

        private Object Hv() {
            Object objFv = null;
            try {
                if (TextUtils.isEmpty(this.className)) {
                    c.w(a.TAG, "SpecialParam className is null");
                    return null;
                }
                objFv = s.fv(this.className);
                c.d(a.TAG, "Class.forName(className):" + this.className + " value:" + objFv);
                if (this.aHl != null && !this.aHl.isEmpty()) {
                    for (C0227a c0227a : this.aHl) {
                        c0227a.aHm = objFv;
                        c.d(a.TAG, "param.ob:" + c0227a.aHm);
                        try {
                            s.a(c0227a.aHm, c0227a.fieldName, c0227a.getValue());
                        } catch (Exception e) {
                            c.d(a.TAG, Log.getStackTraceString(e));
                        }
                    }
                }
            } catch (Exception e2) {
                c.d(a.TAG, Log.getStackTraceString(e2));
            }
            c.d(a.TAG, "return value in special:" + objFv);
            return objFv;
        }

        private Object Hw() {
            if (TextUtils.isEmpty(this.aHj)) {
                return al(this.aHh, this.aHi);
            }
            this.aHn = new ArrayList();
            Iterator<String> it = this.aHk.iterator();
            while (it.hasNext()) {
                Object objAl = al(this.aHj, it.next());
                if (objAl != null) {
                    this.aHn.add(objAl);
                }
            }
            return this.aHn;
        }

        private static Object al(String str, String str2) {
            Object objValueOf = null;
            try {
                Class<?> cls = Class.forName(str);
                if (cls == Integer.class) {
                    objValueOf = Integer.valueOf(Integer.parseInt(str2));
                } else if (cls == Long.class) {
                    objValueOf = Long.valueOf(Long.parseLong(str2));
                } else if (cls == Float.class) {
                    objValueOf = Float.valueOf(Float.parseFloat(str2));
                } else if (cls == Boolean.class) {
                    objValueOf = Boolean.valueOf(Boolean.parseBoolean(str2));
                } else if (cls == Double.class) {
                    objValueOf = Double.valueOf(Double.parseDouble(str2));
                } else {
                    if (cls != String.class) {
                        str2 = null;
                    }
                    objValueOf = str2;
                }
            } catch (Exception e) {
                c.w(a.TAG, Log.getStackTraceString(e));
            }
            return objValueOf;
        }

        public final Object getValue() {
            return (TextUtils.isEmpty(this.aHh) && TextUtils.isEmpty(this.aHj)) ? Hv() : Hw();
        }
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public boolean aHo;
        public List<C0227a> aHp;
        public Object[] aHq;
        public String name;

        public final boolean Hu() {
            return TextUtils.isEmpty(this.name) && this.aHp == null && this.aHq == null;
        }

        public final Object[] Hx() {
            List<C0227a> list = this.aHp;
            if (list == null || list.isEmpty()) {
                return null;
            }
            Object[] objArr = new Object[this.aHp.size()];
            for (int i = 0; i < this.aHp.size(); i++) {
                objArr[i] = this.aHp.get(i).getValue();
            }
            return objArr;
        }
    }

    public final boolean Hu() {
        if (this.aHa != null || !TextUtils.isEmpty(this.aHb) || !TextUtils.isEmpty(this.aHc) || !TextUtils.isEmpty(this.aHe)) {
            return false;
        }
        b bVar = this.aHf;
        if (bVar != null && !bVar.Hu()) {
            return false;
        }
        a aVar = this.aHg;
        return aVar == null || aVar.Hu();
    }
}
