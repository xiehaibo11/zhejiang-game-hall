package com.loc;

import com.igexin.sdk.PushBuildConfig;
import com.loc.bt;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: compiled from: LogUpdateRequest.java */
/* JADX INFO: loaded from: classes2.dex */
public final class au extends r {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private byte[] f2850a;
    private String b;

    public au(byte[] bArr, String str) {
        this.b = "1";
        this.f2850a = (byte[]) bArr.clone();
        this.b = str;
        a(bt.a.SINGLE);
        a(bt.c.HTTP);
    }

    @Override // com.loc.bt
    public final Map<String, String> a() {
        HashMap map = new HashMap();
        map.put("Content-Type", "application/zip");
        map.put("Content-Length", String.valueOf(this.f2850a.length));
        return map;
    }

    @Override // com.loc.bt
    public final String b() {
        String strC = x.c(ag.b);
        byte[] bArrA = x.a(ag.f2833a);
        byte[] bArr = new byte[bArrA.length + 50];
        System.arraycopy(this.f2850a, 0, bArr, 0, 50);
        System.arraycopy(bArrA, 0, bArr, 50, bArrA.length);
        return String.format(strC, "1", this.b, "1", PushBuildConfig.sdk_conf_channelid, s.a(bArr));
    }

    @Override // com.loc.bt
    public final byte[] d() {
        return this.f2850a;
    }

    @Override // com.loc.bt
    public final Map<String, String> e() {
        return null;
    }

    @Override // com.loc.bt
    public final boolean h() {
        return false;
    }
}
