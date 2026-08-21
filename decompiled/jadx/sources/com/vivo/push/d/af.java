package com.vivo.push.d;

import android.text.TextUtils;
import com.vivo.push.util.NotifyAdapterUtil;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
final class af extends z {
    af(com.vivo.push.o oVar) {
        super(oVar);
    }

    @Override // com.vivo.push.l
    protected final void a(com.vivo.push.o oVar) {
        com.vivo.push.b.u uVar = (com.vivo.push.b.u) oVar;
        if (com.vivo.push.e.a().g() && !a(com.vivo.push.util.z.c(this.f7928a), uVar.e(), uVar.i())) {
            com.vivo.push.util.p.d("OnUndoMsgTask", " vertify msg is error ");
            com.vivo.push.b.x xVar = new com.vivo.push.b.x(1021L);
            HashMap<String, String> map = new HashMap<>();
            map.put(com.heytap.mcssdk.constant.b.c, String.valueOf(uVar.f()));
            String strB = com.vivo.push.util.z.b(this.f7928a, this.f7928a.getPackageName());
            if (!TextUtils.isEmpty(strB)) {
                map.put("remoteAppId", strB);
            }
            xVar.a(map);
            com.vivo.push.e.a().a(xVar);
            return;
        }
        boolean zRepealNotifyById = NotifyAdapterUtil.repealNotifyById(this.f7928a, uVar.d());
        com.vivo.push.util.p.d("OnUndoMsgTask", "undo message " + uVar.d() + ", " + zRepealNotifyById);
        if (zRepealNotifyById) {
            com.vivo.push.util.p.b(this.f7928a, "回收client通知成功, 上报埋点 1031, messageId = " + uVar.d());
            com.vivo.push.util.e.a(this.f7928a, uVar.d(), 1031L);
            return;
        }
        com.vivo.push.util.p.d("OnUndoMsgTask", "undo message fail，messageId = " + uVar.d());
        com.vivo.push.util.p.c(this.f7928a, "回收client通知失败，messageId = " + uVar.d());
    }
}
