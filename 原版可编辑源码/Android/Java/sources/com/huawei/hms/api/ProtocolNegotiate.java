package com.huawei.hms.api;

import java.util.List;

public class ProtocolNegotiate {
    private static ProtocolNegotiate b = new ProtocolNegotiate();
    private int a = 1;

    public static ProtocolNegotiate getInstance() {
        return b;
    }

    public int getVersion() {
        return this.a;
    }

    public int negotiate(List<Integer> list) {
        if (list == null || list.isEmpty()) {
            this.a = 1;
            return 1;
        }
        if (list.contains(2)) {
            this.a = 2;
        } else {
            this.a = list.get(list.size() - 1).intValue();
        }
        return this.a;
    }
}
