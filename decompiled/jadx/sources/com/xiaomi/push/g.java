package com.xiaomi.push;

import java.util.Random;

/* JADX INFO: loaded from: classes4.dex */
public class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Random f8174a = new Random();

    public static final int a(int i) {
        return f8174a.nextInt(Math.abs(i));
    }
}
