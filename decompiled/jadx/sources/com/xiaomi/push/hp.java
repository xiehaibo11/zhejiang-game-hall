package com.xiaomi.push;

/* JADX INFO: loaded from: classes4.dex */
public enum hp {
    MISC_CONFIG(1),
    PLUGIN_CONFIG(2);


    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final int f505a;

    hp(int i) {
        this.f505a = i;
    }

    public static hp a(int i) {
        if (i == 1) {
            return MISC_CONFIG;
        }
        if (i != 2) {
            return null;
        }
        return PLUGIN_CONFIG;
    }

    public int a() {
        return this.f505a;
    }
}
