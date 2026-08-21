package com.kuaishou.weapon.p0.receiver;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.bp;
import com.kuaishou.weapon.p0.cw;
import com.kuaishou.weapon.p0.cx;
import com.kuaishou.weapon.p0.cy;
import com.kuaishou.weapon.p0.da;
import com.kuaishou.weapon.p0.db;
import com.kuaishou.weapon.p0.dc;
import com.kuaishou.weapon.p0.dd;
import com.kuaishou.weapon.p0.n;

/* JADX INFO: loaded from: classes2.dex */
public class WeaponRECE extends BroadcastReceiver {
    @Override // android.content.BroadcastReceiver
    public void onReceive(final Context context, final Intent intent) {
        try {
            n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.receiver.WeaponRECE.1
                @Override // java.lang.Runnable
                public void run() {
                    String action = intent.getAction();
                    if (!TextUtils.isEmpty(action) && action.equals(bp.f)) {
                        da.a(context).a(0, 0);
                        dc.a(context).a(0);
                        cx.a(context).a(0);
                        cy.a(context).a(0);
                        dd.a(context).a(0);
                        cw.a(context).a(0);
                        db.a(context).a(0);
                    }
                }
            });
        } catch (Throwable unused) {
        }
    }
}
