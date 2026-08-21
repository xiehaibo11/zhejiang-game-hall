package com.loc;

import com.loc.bt;
import java.util.Map;

public final class bn extends bt {
    private byte[] a;
    private Map<String, String> b;

    public bn(byte[] bArr, Map<String, String> map) {
        this.a = bArr;
        this.b = map;
        a(bt.a.e);
        a(bt.c.b);
    }

    @Override
    public final Map<String, String> a() {
        return null;
    }

    @Override
    public final String b() {
        return "https://adiu.amap.com/ws/device/adius";
    }

    @Override
    public final byte[] d() {
        return this.a;
    }

    @Override
    public final Map<String, String> e() {
        return this.b;
    }
}
