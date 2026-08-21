package com.xiaomi.push.service;

import android.text.TextUtils;
import android.util.Base64;
import com.xiaomi.push.ao;
import com.xiaomi.push.cz;
import com.xiaomi.push.dw;
import com.xiaomi.push.service.bv;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
class bw extends ao.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ bv f8348a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    boolean f968a = false;

    bw(bv bvVar) {
        this.f8348a = bvVar;
    }

    @Override // com.xiaomi.push.ao.b
    public void b() {
        try {
            String strA = a.a(com.xiaomi.push.v.m701a()).a();
            dw.a aVarA = dw.a.a(Base64.decode(cz.a(com.xiaomi.push.v.m701a(), (TextUtils.isEmpty(strA) || com.xiaomi.push.q.China.name().equals(strA)) ? "https://resolver.msg.xiaomi.net/psc/?t=a" : "https://resolver.msg.global.xiaomi.net/psc/?t=a", (List<com.xiaomi.push.bi>) null), 10));
            if (aVarA != null) {
                this.f8348a.f966a = aVarA;
                this.f968a = true;
                this.f8348a.e();
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("fetch config failure: " + e.getMessage());
        }
    }

    @Override // com.xiaomi.push.ao.b
    /* JADX INFO: renamed from: c */
    public void mo221c() {
        bv.a[] aVarArr;
        this.f8348a.f965a = null;
        if (this.f968a) {
            synchronized (this.f8348a) {
                aVarArr = (bv.a[]) this.f8348a.f967a.toArray(new bv.a[this.f8348a.f967a.size()]);
            }
            for (bv.a aVar : aVarArr) {
                aVar.a(this.f8348a.f966a);
            }
        }
    }
}
