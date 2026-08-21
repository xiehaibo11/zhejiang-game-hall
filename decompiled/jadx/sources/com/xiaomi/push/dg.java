package com.xiaomi.push;

import com.xiaomi.push.df;
import com.xiaomi.push.df.c;
import java.io.File;
import java.util.Date;

/* JADX INFO: loaded from: classes4.dex */
class dg extends df.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ int f8104a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ df f227a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    File f228a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f229a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ Date f230a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ boolean f231a;
    final /* synthetic */ String b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    final /* synthetic */ Date f232b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    dg(df dfVar, int i, Date date, Date date2, String str, String str2, boolean z) {
        super();
        this.f227a = dfVar;
        this.f8104a = i;
        this.f230a = date;
        this.f232b = date2;
        this.f229a = str;
        this.b = str2;
        this.f231a = z;
    }

    @Override // com.xiaomi.push.df.b, com.xiaomi.push.ao.b
    public void b() {
        if (ad.d()) {
            try {
                File file = new File(this.f227a.f220a.getExternalFilesDir(null) + "/.logcache");
                file.mkdirs();
                if (file.isDirectory()) {
                    de deVar = new de();
                    deVar.a(this.f8104a);
                    this.f228a = deVar.a(this.f227a.f220a, this.f230a, this.f232b, file);
                }
            } catch (NullPointerException unused) {
            }
        }
    }

    @Override // com.xiaomi.push.ao.b
    /* JADX INFO: renamed from: c */
    public void mo221c() {
        File file = this.f228a;
        if (file != null && file.exists()) {
            this.f227a.f221a.add(this.f227a.new c(this.f229a, this.b, this.f228a, this.f231a));
        }
        this.f227a.a(0L);
    }
}
