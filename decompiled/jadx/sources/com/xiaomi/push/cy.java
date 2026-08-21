package com.xiaomi.push;

import android.content.Context;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public abstract class cy {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8095a;

    public cy(int i) {
        this.f8095a = i;
    }

    public int a() {
        return this.f8095a;
    }

    public abstract String a(Context context, String str, List<bi> list);

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m216a(Context context, String str, List<bi> list) {
        return true;
    }
}
