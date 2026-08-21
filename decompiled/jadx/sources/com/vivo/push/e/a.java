package com.vivo.push.e;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes4.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String[] f7920a = {"com.vivo.pushservice", "com.vivo.pushdemo.test", "com.vivo.sdk.test", "com.vivo.hybrid"};
    private ArrayList<String> b;

    /* JADX INFO: renamed from: com.vivo.push.e.a$a, reason: collision with other inner class name */
    final class C0518a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static a f7921a = new a(0);
    }

    private a() {
        this.b = null;
        this.b = new ArrayList<>();
    }

    /* synthetic */ a(byte b) {
        this();
    }

    public static a a() {
        return C0518a.f7921a;
    }

    public final ArrayList<String> b() {
        return new ArrayList<>(this.b);
    }

    public final boolean c() {
        ArrayList<String> arrayList = this.b;
        return (arrayList == null || arrayList.size() == 0) ? false : true;
    }
}
