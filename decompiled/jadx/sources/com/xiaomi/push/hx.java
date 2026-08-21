package com.xiaomi.push;

/* JADX INFO: loaded from: classes4.dex */
public enum hx {
    RegIdExpired(0),
    PackageUnregistered(1),
    Init(2);


    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final int f565a;

    hx(int i) {
        this.f565a = i;
    }

    public static hx a(int i) {
        if (i == 0) {
            return RegIdExpired;
        }
        if (i == 1) {
            return PackageUnregistered;
        }
        if (i != 2) {
            return null;
        }
        return Init;
    }

    public int a() {
        return this.f565a;
    }
}
