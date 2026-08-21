package com.huawei.hms.api;

import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class ProtocolNegotiate {
    private static ProtocolNegotiate b = new ProtocolNegotiate();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f2010a = 1;

    public static ProtocolNegotiate getInstance() {
        return b;
    }

    public int getVersion() {
        return this.f2010a;
    }

    public int negotiate(List<Integer> list) {
        if (list == null || list.isEmpty()) {
            this.f2010a = 1;
            return 1;
        }
        if (list.contains(2)) {
            this.f2010a = 2;
        } else {
            this.f2010a = list.get(list.size() - 1).intValue();
        }
        return this.f2010a;
    }
}
