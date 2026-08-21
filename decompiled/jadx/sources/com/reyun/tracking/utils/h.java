package com.reyun.tracking.utils;

import android.content.Context;
import android.content.SharedPreferences;

/* JADX INFO: loaded from: classes3.dex */
final class h implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f4747a;
    final /* synthetic */ String b;
    final /* synthetic */ String c;
    final /* synthetic */ String d;

    h(Context context, String str, String str2, String str3) {
        this.f4747a = context;
        this.b = str;
        this.c = str2;
        this.d = str3;
    }

    @Override // java.lang.Runnable
    public void run() {
        Context context = this.f4747a;
        if (context == null) {
            return;
        }
        try {
            SharedPreferences.Editor editorEdit = context.getSharedPreferences(this.b, 0).edit();
            editorEdit.putString(this.c, this.d);
            editorEdit.commit();
        } catch (Exception unused) {
        }
    }
}
