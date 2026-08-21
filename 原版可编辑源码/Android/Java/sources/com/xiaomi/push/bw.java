package com.xiaomi.push;

import android.content.Context;
import android.content.SharedPreferences;

public class bw {
    private static volatile bw a;
    private Context a;

    private bw(Context context) {
        this.a = context;
    }

    public static bw a(Context context) {
        if (a == null) {
            synchronized (bw.class) {
                if (a == null) {
                    a = new bw(context);
                }
            }
        }
        return a;
    }

    public synchronized long a(String str, String str2, long j) {
        try {
        } catch (Throwable unused) {
            return j;
        }
        return this.a.getSharedPreferences(str, 4).getLong(str2, j);
    }

    public synchronized String a(String str, String str2, String str3) {
        try {
        } catch (Throwable unused) {
            return str3;
        }
        return this.a.getSharedPreferences(str, 4).getString(str2, str3);
    }

    public synchronized void a(String str, String str2, long j) {
        SharedPreferences.Editor editorEdit = this.a.getSharedPreferences(str, 4).edit();
        editorEdit.putLong(str2, j);
        editorEdit.commit();
    }

    public synchronized void a(String str, String str2, String str3) {
        SharedPreferences.Editor editorEdit = this.a.getSharedPreferences(str, 4).edit();
        editorEdit.putString(str2, str3);
        editorEdit.commit();
    }
}
