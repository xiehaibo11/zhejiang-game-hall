package com.mbridge.msdk.foundation.entity;

import java.io.Serializable;

/* JADX INFO: compiled from: LoopEntity.java */
/* JADX INFO: loaded from: classes2.dex */
public final class k implements Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f3391a;
    private String b;
    private int c;

    public k(String str, String str2, int i) {
        this.b = str;
        this.f3391a = str2;
        this.c = i;
    }

    public final String a() {
        return this.f3391a;
    }

    public final String b() {
        return this.b;
    }
}
