package com.xiaomi.push;

import com.xiaomi.push.df;
import com.xiaomi.push.df.c;
import java.io.File;
import java.util.Date;

class dg extends df.b {
    final int a;
    final df a;
    File a;
    final String a;
    final Date a;
    final boolean a;
    final String b;
    final Date b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    dg(df dfVar, int i, Date date, Date date2, String str, String str2, boolean z) {
        super();
        this.a = dfVar;
        this.a = i;
        this.a = date;
        this.b = date2;
        this.a = str;
        this.b = str2;
        this.a = z;
    }

    @Override
    public void b() {
        if (ad.d()) {
            try {
                File file = new File(this.a.a.getExternalFilesDir(null) + "/.logcache");
                file.mkdirs();
                if (file.isDirectory()) {
                    de deVar = new de();
                    deVar.a(this.a);
                    this.a = deVar.a(this.a.a, this.a, this.b, file);
                }
            } catch (NullPointerException unused) {
            }
        }
    }

    @Override
    public void c() {
        File file = this.a;
        if (file != null && file.exists()) {
            this.a.a.add(this.a.new c(this.a, this.b, this.a, this.a));
        }
        this.a.a(0L);
    }
}
