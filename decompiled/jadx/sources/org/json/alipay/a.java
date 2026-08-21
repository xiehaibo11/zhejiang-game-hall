package org.json.alipay;

import com.xiaomi.mipush.sdk.Constants;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collection;

/* JADX INFO: loaded from: classes4.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public ArrayList f8427a;

    public a() {
        this.f8427a = new ArrayList();
    }

    public a(Object obj) throws JSONException {
        this();
        if (!obj.getClass().isArray()) {
            throw new JSONException("JSONArray initial value should be a string or collection or array.");
        }
        int length = Array.getLength(obj);
        for (int i = 0; i < length; i++) {
            this.f8427a.add(Array.get(obj, i));
        }
    }

    public a(String str) {
        this(new c(str));
    }

    public a(Collection collection) {
        this.f8427a = collection == null ? new ArrayList() : new ArrayList(collection);
    }

    public a(c cVar) throws JSONException {
        char c;
        ArrayList arrayList;
        Object objD;
        this();
        char c2 = cVar.c();
        if (c2 == '[') {
            c = ']';
        } else {
            if (c2 != '(') {
                throw cVar.a("A JSONArray text must start with '['");
            }
            c = ')';
        }
        if (cVar.c() == ']') {
            return;
        }
        do {
            cVar.a();
            char c3 = cVar.c();
            cVar.a();
            if (c3 == ',') {
                arrayList = this.f8427a;
                objD = null;
            } else {
                arrayList = this.f8427a;
                objD = cVar.d();
            }
            arrayList.add(objD);
            char c4 = cVar.c();
            if (c4 != ')') {
                if (c4 != ',' && c4 != ';') {
                    if (c4 != ']') {
                        throw cVar.a("Expected a ',' or ']'");
                    }
                }
            }
            if (c == c4) {
                return;
            }
            throw cVar.a("Expected a '" + new Character(c) + "'");
        } while (cVar.c() != ']');
    }

    private String a(String str) {
        int size = this.f8427a.size();
        StringBuffer stringBuffer = new StringBuffer();
        for (int i = 0; i < size; i++) {
            if (i > 0) {
                stringBuffer.append(str);
            }
            stringBuffer.append(b.a(this.f8427a.get(i)));
        }
        return stringBuffer.toString();
    }

    public final int a() {
        return this.f8427a.size();
    }

    public final Object a(int i) throws JSONException {
        Object obj = (i < 0 || i >= this.f8427a.size()) ? null : this.f8427a.get(i);
        if (obj != null) {
            return obj;
        }
        throw new JSONException("JSONArray[" + i + "] not found.");
    }

    public String toString() {
        try {
            return "[" + a(Constants.ACCEPT_TIME_SEPARATOR_SP) + ']';
        } catch (Exception unused) {
            return null;
        }
    }
}
