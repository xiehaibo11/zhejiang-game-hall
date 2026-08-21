package com.xiaomi.push;

import android.util.Log;
import android.util.Pair;
import java.util.Date;

class dk implements Runnable {
    final dj a;
    final String a;
    final Throwable a;

    dk(dj djVar, String str, Throwable th) {
        this.a = djVar;
        this.a = str;
        this.a = th;
    }

    @Override
    public void run() throws Throwable {
        dj.a.add(new Pair(String.format("%1$s %2$s %3$s ", dj.a.format(new Date()), this.a.b, this.a), this.a));
        if (dj.a.size() > 20000) {
            int size = (dj.a.size() - 20000) + 50;
            for (int i = 0; i < size; i++) {
                try {
                    if (dj.a.size() > 0) {
                        dj.a.remove(0);
                    }
                } catch (IndexOutOfBoundsException unused) {
                }
            }
            dj.a.add(new Pair(String.format("%1$s %2$s %3$s ", dj.a.format(new Date()), this.a.b, "flush " + size + " lines logs."), null));
        }
        try {
            if (ad.d()) {
                this.a.a();
            } else {
                Log.w(this.a.b, "SDCard is unavailable.");
            }
        } catch (Exception e) {
            Log.e(this.a.b, "", e);
        }
    }
}
