package com.loc;

import android.content.Context;
import android.text.TextUtils;

/* JADX INFO: compiled from: MobileUpdateStrategy.java */
/* JADX INFO: loaded from: classes2.dex */
public final class cl extends co {
    private Context b;
    private boolean d;
    private int e;
    private int f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2906a = "iKey";
    private int g = 0;

    public cl(Context context, boolean z, int i, int i2, String str) {
        a(context, z, i, i2, str, 0);
    }

    public cl(Context context, boolean z, int i, int i2, String str, int i3) {
        a(context, z, i, i2, str, i3);
    }

    private void a(Context context, boolean z, int i, int i2, String str, int i3) {
        this.b = context;
        this.d = z;
        this.e = i;
        this.f = i2;
        this.f2906a = str;
        this.g = i3;
    }

    @Override // com.loc.co
    public final void a(int i) {
        if (o.j(this.b) == 1) {
            return;
        }
        String strA = x.a(System.currentTimeMillis(), "yyyyMMdd");
        String strA2 = at.a(this.b, this.f2906a);
        if (!TextUtils.isEmpty(strA2)) {
            String[] strArrSplit = strA2.split("\\|");
            if (strArrSplit == null || strArrSplit.length < 2) {
                at.b(this.b, this.f2906a);
            } else if (strA.equals(strArrSplit[0])) {
                i += Integer.parseInt(strArrSplit[1]);
            }
        }
        at.a(this.b, this.f2906a, strA + "|" + i);
    }

    @Override // com.loc.co
    protected final boolean a() {
        if (o.j(this.b) == 1) {
            return true;
        }
        if (!this.d) {
            return false;
        }
        String strA = at.a(this.b, this.f2906a);
        if (TextUtils.isEmpty(strA)) {
            return true;
        }
        String[] strArrSplit = strA.split("\\|");
        if (strArrSplit != null && strArrSplit.length >= 2) {
            return !x.a(System.currentTimeMillis(), "yyyyMMdd").equals(strArrSplit[0]) || Integer.parseInt(strArrSplit[1]) < this.f;
        }
        at.b(this.b, this.f2906a);
        return true;
    }

    @Override // com.loc.co
    public final int b() {
        int i;
        int i2 = Integer.MAX_VALUE;
        if ((o.j(this.b) != 1 && (i = this.e) > 0) || ((i = this.g) > 0 && i < Integer.MAX_VALUE)) {
            i2 = i;
        }
        return this.c != null ? Math.max(i2, this.c.b()) : i2;
    }
}
