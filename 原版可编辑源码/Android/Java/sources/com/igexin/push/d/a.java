package com.igexin.push.d;

import android.content.Context;
import com.igexin.b.a.b.a.a.m;

public class a implements com.igexin.b.a.d.a.a<String, Integer, com.igexin.b.a.b.b, com.igexin.b.a.b.e> {
    public Context a;

    public a(Context context) {
        this.a = context;
    }

    @Override
    public com.igexin.b.a.b.e a(String str, Integer num, com.igexin.b.a.b.b bVar) {
        if (str.startsWith("socket") && com.igexin.push.core.d.i) {
            return new m(str, bVar);
        }
        return null;
    }
}
