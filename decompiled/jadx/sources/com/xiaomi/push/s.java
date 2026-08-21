package com.xiaomi.push;

import android.content.SharedPreferences;

/* JADX INFO: loaded from: classes4.dex */
class s implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ r f8270a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f843a;
    final /* synthetic */ String b;
    final /* synthetic */ String c;

    s(r rVar, String str, String str2, String str3) {
        this.f8270a = rVar;
        this.f843a = str;
        this.b = str2;
        this.c = str3;
    }

    @Override // java.lang.Runnable
    public void run() {
        SharedPreferences.Editor editorEdit = this.f8270a.f840a.getSharedPreferences(this.f843a, 4).edit();
        editorEdit.putString(this.b, this.c);
        editorEdit.commit();
    }
}
