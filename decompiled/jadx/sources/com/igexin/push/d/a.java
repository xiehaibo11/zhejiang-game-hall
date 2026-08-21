package com.igexin.push.d;

import android.content.Context;
import com.igexin.b.a.b.a.a.m;

/* JADX INFO: loaded from: classes2.dex */
public class a implements com.igexin.b.a.d.a.a<String, Integer, com.igexin.b.a.b.b, com.igexin.b.a.b.e> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Context f2593a;

    public a(Context context) {
        this.f2593a = context;
    }

    @Override // com.igexin.b.a.d.a.a
    public com.igexin.b.a.b.e a(String str, Integer num, com.igexin.b.a.b.b bVar) {
        if (str.startsWith("socket") && com.igexin.push.core.d.i) {
            return new m(str, bVar);
        }
        return null;
    }
}
