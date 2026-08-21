package com.xiaomi.push;

import android.util.Log;
import android.util.Pair;
import java.util.Date;

/* JADX INFO: loaded from: classes4.dex */
class dk implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ dj f8108a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f239a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ Throwable f240a;

    dk(dj djVar, String str, Throwable th) {
        this.f8108a = djVar;
        this.f239a = str;
        this.f240a = th;
    }

    @Override // java.lang.Runnable
    public void run() throws Throwable {
        dj.f236a.add(new Pair(String.format("%1$s %2$s %3$s ", dj.f235a.format(new Date()), this.f8108a.b, this.f239a), this.f240a));
        if (dj.f236a.size() > 20000) {
            int size = (dj.f236a.size() - 20000) + 50;
            for (int i = 0; i < size; i++) {
                try {
                    if (dj.f236a.size() > 0) {
                        dj.f236a.remove(0);
                    }
                } catch (IndexOutOfBoundsException unused) {
                }
            }
            dj.f236a.add(new Pair(String.format("%1$s %2$s %3$s ", dj.f235a.format(new Date()), this.f8108a.b, "flush " + size + " lines logs."), null));
        }
        try {
            if (ad.d()) {
                this.f8108a.m223a();
            } else {
                Log.w(this.f8108a.b, "SDCard is unavailable.");
            }
        } catch (Exception e) {
            Log.e(this.f8108a.b, "", e);
        }
    }
}
