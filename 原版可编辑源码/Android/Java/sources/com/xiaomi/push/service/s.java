package com.xiaomi.push.service;

import android.text.TextUtils;
import com.qihoo360.replugin.RePlugin;
import com.xiaomi.push.hj;
import com.xiaomi.push.hn;
import com.xiaomi.push.hw;
import com.xiaomi.push.if;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import com.xiaomi.push.service.XMPushService;
import java.util.ArrayList;
import java.util.List;

class s extends XMPushService.j {
    final r a;
    final String a;
    final List a;
    final String b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    s(r rVar, int i, String str, List list, String str2) {
        super(i);
        this.a = rVar;
        this.a = str;
        this.a = list;
        this.b = str2;
    }

    @Override
    public String a() {
        return "Send tiny data.";
    }

    @Override
    public void a() {
        String strA = this.a.a(this.a);
        ArrayList<ii> arrayListA = bz.a((List<hn>) this.a, this.a, strA, 32768);
        if (arrayListA == null) {
            com.xiaomi.channel.commonutils.logger.b.d("TinyData LongConnUploader.upload Get a null XmPushActionNotification list when TinyDataHelper.pack() in XMPushService.");
            return;
        }
        for (ii iiVar : arrayListA) {
            iiVar.a("uploadWay", "longXMPushService");
            if ifVarA = ah.a(this.a, strA, iiVar, hj.i);
            if (!TextUtils.isEmpty(this.b) && !TextUtils.equals(this.a, this.b)) {
                if (ifVarA.a() == null) {
                    hw hwVar = new hw();
                    hwVar.a(RePlugin.PROCESS_UI);
                    ifVarA.a(hwVar);
                }
                ifVarA.a().b("ext_traffic_source_pkg", this.b);
            }
            this.a.a.a(this.a, it.a(ifVarA), true);
        }
    }
}
