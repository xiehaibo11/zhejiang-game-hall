package com.loc;

import com.xiaomi.mipush.sdk.Constants;

public final class cf extends ci {
    private StringBuilder a;
    private boolean b;

    public cf() {
        this.a = new StringBuilder();
        this.b = true;
    }

    public cf(ci ciVar) {
        super(ciVar);
        this.a = new StringBuilder();
        this.b = true;
    }

    @Override
    protected final byte[] a(byte[] bArr) {
        byte[] bArrA = x.a(this.a.toString());
        this.d = bArrA;
        this.b = true;
        StringBuilder sb = this.a;
        sb.delete(0, sb.length());
        return bArrA;
    }

    @Override
    public final void b(byte[] bArr) {
        String strA = x.a(bArr);
        if (this.b) {
            this.b = false;
        } else {
            this.a.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
        }
        StringBuilder sb = this.a;
        sb.append("{\"log\":\"");
        sb.append(strA);
        sb.append("\"}");
    }
}
