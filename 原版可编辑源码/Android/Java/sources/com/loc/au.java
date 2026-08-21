package com.loc;

import com.igexin.sdk.PushBuildConfig;
import com.loc.bt;
import java.util.HashMap;
import java.util.Map;

public final class au extends r {
    private byte[] a;
    private String b;

    public au(byte[] bArr, String str) {
        this.b = "1";
        this.a = (byte[]) bArr.clone();
        this.b = str;
        a(bt.a.e);
        a(bt.c.a);
    }

    @Override
    public final Map<String, String> a() {
        HashMap map = new HashMap();
        map.put("Content-Type", "application/zip");
        map.put("Content-Length", String.valueOf(this.a.length));
        return map;
    }

    @Override
    public final String b() {
        String strC = x.c(ag.b);
        byte[] bArrA = x.a(ag.a);
        byte[] bArr = new byte[bArrA.length + 50];
        System.arraycopy(this.a, 0, bArr, 0, 50);
        System.arraycopy(bArrA, 0, bArr, 50, bArrA.length);
        return String.format(strC, "1", this.b, "1", PushBuildConfig.sdk_conf_channelid, s.a(bArr));
    }

    @Override
    public final byte[] d() {
        return this.a;
    }

    @Override
    public final Map<String, String> e() {
        return null;
    }

    @Override
    public final boolean h() {
        return false;
    }
}
