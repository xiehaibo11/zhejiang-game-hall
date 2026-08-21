package com.alipay.sdk.m.p0;

import android.database.ContentObserver;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class d extends ContentObserver {
    public static final String d = "VMS_IDLG_SDK_Observer";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f1237a;
    public int b;
    public c c;

    public d(c cVar, int i, String str) {
        super(null);
        this.c = cVar;
        this.b = i;
        this.f1237a = str;
    }

    @Override // android.database.ContentObserver
    public void onChange(boolean z) {
        c cVar = this.c;
        if (cVar != null) {
            cVar.a(this.b, this.f1237a);
        } else {
            Log.e(d, "mIdentifierIdClient is null");
        }
    }
}
