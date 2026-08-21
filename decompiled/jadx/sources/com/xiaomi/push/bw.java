package com.xiaomi.push;

import android.content.Context;
import android.content.SharedPreferences;

/* JADX INFO: loaded from: classes4.dex */
public class bw {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile bw f8068a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f162a;

    private bw(Context context) {
        this.f162a = context;
    }

    public static bw a(Context context) {
        if (f8068a == null) {
            synchronized (bw.class) {
                if (f8068a == null) {
                    f8068a = new bw(context);
                }
            }
        }
        return f8068a;
    }

    public synchronized long a(String str, String str2, long j) {
        try {
        } catch (Throwable unused) {
            return j;
        }
        return this.f162a.getSharedPreferences(str, 4).getLong(str2, j);
    }

    public synchronized String a(String str, String str2, String str3) {
        try {
        } catch (Throwable unused) {
            return str3;
        }
        return this.f162a.getSharedPreferences(str, 4).getString(str2, str3);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized void m166a(String str, String str2, long j) {
        SharedPreferences.Editor editorEdit = this.f162a.getSharedPreferences(str, 4).edit();
        editorEdit.putLong(str2, j);
        editorEdit.commit();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized void m167a(String str, String str2, String str3) {
        SharedPreferences.Editor editorEdit = this.f162a.getSharedPreferences(str, 4).edit();
        editorEdit.putString(str2, str3);
        editorEdit.commit();
    }
}
