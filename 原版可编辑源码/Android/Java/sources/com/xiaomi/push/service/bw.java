package com.xiaomi.push.service;

import android.text.TextUtils;
import android.util.Base64;
import com.xiaomi.push.ao;
import com.xiaomi.push.cz;
import com.xiaomi.push.dw;
import com.xiaomi.push.service.bv;
import java.util.List;

class bw extends ao.b {
    final bv a;
    boolean a = false;

    bw(bv bvVar) {
        this.a = bvVar;
    }

    @Override
    public void b() {
        try {
            String strA = a.a(com.xiaomi.push.v.a()).a();
            dw.a aVarA = dw.a.a(Base64.decode(cz.a(com.xiaomi.push.v.a(), (TextUtils.isEmpty(strA) || com.xiaomi.push.q.a.name().equals(strA)) ? "https://resolver.msg.xiaomi.net/psc/?t=a" : "https://resolver.msg.global.xiaomi.net/psc/?t=a", (List<com.xiaomi.push.bi>) null), 10));
            if (aVarA != null) {
                this.a.a = aVarA;
                this.a = true;
                this.a.e();
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("fetch config failure: " + e.getMessage());
        }
    }

    @Override
    public void c() {
        bv.a[] aVarArr;
        this.a.a = null;
        if (this.a) {
            synchronized (this.a) {
                aVarArr = (bv.a[]) this.a.a.toArray(new bv.a[this.a.a.size()]);
            }
            for (bv.a aVar : aVarArr) {
                aVar.a(this.a.a);
            }
        }
    }
}
