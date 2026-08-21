package com.tkay.basead.c;

import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.x;
import com.tkay.core.common.f.z;

/* JADX INFO: loaded from: classes3.dex */
public final class g extends x {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f5614a;
    String b;

    public g(com.tkay.core.common.f.h hVar, String str, String str2) {
        this.f5614a = str;
        this.b = str2;
        this.c = hVar;
    }

    @Override // com.tkay.core.common.f.x
    public final void a(Activity activity) {
        try {
            String strAa = this.c instanceof z ? ((z) this.c).aa() : "";
            if (TextUtils.isEmpty(strAa)) {
                strAa = this.c.r();
            }
            final Context contextF = m.a().f();
            View viewInflate = LayoutInflater.from(activity).inflate(com.tkay.core.common.l.h.a(contextF, "myoffer_confirm_dialog", "layout"), (ViewGroup) null, false);
            TextView textView = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(contextF, "myoffer_confirm_msg", "id"));
            TextView textView2 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(contextF, "myoffer_confirm_give_up", "id"));
            TextView textView3 = (TextView) viewInflate.findViewById(com.tkay.core.common.l.h.a(contextF, "myoffer_confirm_continue", "id"));
            String string = contextF.getString(com.tkay.core.common.l.h.a(m.a().f(), "myoffer_confirm_msg", com.tkay.expressad.foundation.h.i.g));
            String string2 = contextF.getString(com.tkay.core.common.l.h.a(m.a().f(), "myoffer_give_up", com.tkay.expressad.foundation.h.i.g));
            String string3 = contextF.getString(com.tkay.core.common.l.h.a(m.a().f(), "myoffer_continue", com.tkay.expressad.foundation.h.i.g));
            textView.setText(string + "\"" + strAa + "\"?");
            textView2.setText(string2);
            textView3.setText(string3);
            final Dialog dialog = new Dialog(activity, com.tkay.core.common.l.h.a(contextF, "style_full_screen_translucent_dialog", "style"));
            dialog.setContentView(viewInflate);
            dialog.setCancelable(false);
            textView2.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.basead.c.g.1
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    com.tkay.core.common.k.c.a(g.this.b, g.this.c.p(), g.this.f5614a, 7, (String) null, 0L, 0L);
                    try {
                        dialog.dismiss();
                    } catch (Throwable unused) {
                    }
                }
            });
            textView3.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.basead.c.g.2
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    try {
                        com.tkay.core.common.k.c.a(g.this.b, g.this.c.p(), g.this.f5614a, 8, (String) null, 0L, 0L);
                        if (com.tkay.basead.a.b.a(contextF, g.this.c)) {
                            com.tkay.core.common.k.c.a(g.this.b, g.this.c.p(), g.this.f5614a, 9, (String) null, 0L, 0L);
                        }
                        dialog.dismiss();
                    } catch (Throwable unused) {
                    }
                }
            });
            dialog.show();
        } catch (Throwable unused) {
        }
    }
}
