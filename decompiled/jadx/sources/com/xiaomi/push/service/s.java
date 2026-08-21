package com.xiaomi.push.service;

import android.text.TextUtils;
import com.qihoo360.replugin.RePlugin;
import com.xiaomi.push.Cif;
import com.xiaomi.push.hj;
import com.xiaomi.push.hn;
import com.xiaomi.push.hw;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import com.xiaomi.push.service.XMPushService;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
class s extends XMPushService.j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ r f8390a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f1016a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ List f1017a;
    final /* synthetic */ String b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    s(r rVar, int i, String str, List list, String str2) {
        super(i);
        this.f8390a = rVar;
        this.f1016a = str;
        this.f1017a = list;
        this.b = str2;
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public String mo613a() {
        return "Send tiny data.";
    }

    @Override // com.xiaomi.push.service.XMPushService.j
    /* JADX INFO: renamed from: a */
    public void mo334a() {
        String strA = this.f8390a.a(this.f1016a);
        ArrayList<ii> arrayListA = bz.a((List<hn>) this.f1017a, this.f1016a, strA, 32768);
        if (arrayListA == null) {
            com.xiaomi.channel.commonutils.logger.b.d("TinyData LongConnUploader.upload Get a null XmPushActionNotification list when TinyDataHelper.pack() in XMPushService.");
            return;
        }
        for (ii iiVar : arrayListA) {
            iiVar.a("uploadWay", "longXMPushService");
            Cif cifA = ah.a(this.f1016a, strA, iiVar, hj.Notification);
            if (!TextUtils.isEmpty(this.b) && !TextUtils.equals(this.f1016a, this.b)) {
                if (cifA.m478a() == null) {
                    hw hwVar = new hw();
                    hwVar.a(RePlugin.PROCESS_UI);
                    cifA.a(hwVar);
                }
                cifA.m478a().b("ext_traffic_source_pkg", this.b);
            }
            this.f8390a.f8387a.a(this.f1016a, it.a(cifA), true);
        }
    }
}
