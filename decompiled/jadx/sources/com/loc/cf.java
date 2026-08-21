package com.loc;

import com.xiaomi.mipush.sdk.Constants;

/* JADX INFO: compiled from: LogJsonDataStrategy.java */
/* JADX INFO: loaded from: classes2.dex */
public final class cf extends ci {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private StringBuilder f2903a;
    private boolean b;

    public cf() {
        this.f2903a = new StringBuilder();
        this.b = true;
    }

    public cf(ci ciVar) {
        super(ciVar);
        this.f2903a = new StringBuilder();
        this.b = true;
    }

    @Override // com.loc.ci
    protected final byte[] a(byte[] bArr) {
        byte[] bArrA = x.a(this.f2903a.toString());
        this.d = bArrA;
        this.b = true;
        StringBuilder sb = this.f2903a;
        sb.delete(0, sb.length());
        return bArrA;
    }

    @Override // com.loc.ci
    public final void b(byte[] bArr) {
        String strA = x.a(bArr);
        if (this.b) {
            this.b = false;
        } else {
            this.f2903a.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
        }
        StringBuilder sb = this.f2903a;
        sb.append("{\"log\":\"");
        sb.append(strA);
        sb.append("\"}");
    }
}
