package com.reyun.tracking.utils;

import android.content.Context;
import android.content.SharedPreferences;

/* JADX INFO: loaded from: classes3.dex */
final class g implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f4746a;
    final /* synthetic */ String b;
    final /* synthetic */ String c;
    final /* synthetic */ long d;

    g(Context context, String str, String str2, long j) {
        this.f4746a = context;
        this.b = str;
        this.c = str2;
        this.d = j;
    }

    @Override // java.lang.Runnable
    public void run() {
        Context context = this.f4746a;
        if (context == null) {
            return;
        }
        try {
            SharedPreferences.Editor editorEdit = context.getSharedPreferences(this.b, 0).edit();
            editorEdit.putLong(this.c, this.d);
            editorEdit.commit();
        } catch (Exception unused) {
        }
    }
}
