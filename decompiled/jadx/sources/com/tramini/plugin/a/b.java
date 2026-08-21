package com.tramini.plugin.a;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.tramini.plugin.a.g.a;
import com.tramini.plugin.a.g.h;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class b extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f7828a = b.class.getSimpleName();
    public static final String b = "tramini";

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        List<String> listD;
        intent.getAction();
        com.tramini.plugin.b.a aVarB = com.tramini.plugin.b.b.a(context).b();
        if (aVarB == null) {
            return;
        }
        com.tramini.plugin.a.g.b.a().a(aVarB);
        if (!(h.a(context) && aVarB.m() == 0) && (listD = aVarB.d()) != null && listD.size() > 0 && listD.contains(intent.getAction())) {
            try {
                String stringExtra = intent.getStringExtra(aVarB.f());
                String stringExtra2 = intent.getStringExtra(aVarB.g());
                intent.getStringExtra(aVarB.h());
                String stringExtra3 = intent.getStringExtra(aVarB.i());
                com.tramini.plugin.a.g.a.a(aVarB, stringExtra3, intent.getStringExtra(aVarB.k()), intent.getStringExtra(aVarB.j()), new AnonymousClass1(intent.getIntExtra(aVarB.l(), 0), stringExtra2, aVarB, stringExtra3, stringExtra));
            } catch (Throwable unused) {
            }
        }
    }

    private void a(Intent intent, com.tramini.plugin.b.a aVar) {
        String stringExtra = intent.getStringExtra(aVar.f());
        String stringExtra2 = intent.getStringExtra(aVar.g());
        intent.getStringExtra(aVar.h());
        String stringExtra3 = intent.getStringExtra(aVar.i());
        com.tramini.plugin.a.g.a.a(aVar, stringExtra3, intent.getStringExtra(aVar.k()), intent.getStringExtra(aVar.j()), new AnonymousClass1(intent.getIntExtra(aVar.l(), 0), stringExtra2, aVar, stringExtra3, stringExtra));
    }

    /* JADX INFO: renamed from: com.tramini.plugin.a.b$1, reason: invalid class name */
    final class AnonymousClass1 implements a.InterfaceC0516a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ int f7829a;
        final /* synthetic */ String b;
        final /* synthetic */ com.tramini.plugin.b.a c;
        final /* synthetic */ String d;
        final /* synthetic */ String e;

        AnonymousClass1(int i, String str, com.tramini.plugin.b.a aVar, String str2, String str3) {
            this.f7829a = i;
            this.b = str;
            this.c = aVar;
            this.d = str2;
            this.e = str3;
        }

        @Override // com.tramini.plugin.a.g.a.InterfaceC0516a
        public final void a(final com.tramini.plugin.a.c.a aVar) {
            int i;
            if (aVar != null || (i = this.f7829a) == 18 || i == 19 || i == 20) {
                com.tramini.plugin.a.a.c.a();
                com.tramini.plugin.a.a.c.a(new Runnable() { // from class: com.tramini.plugin.a.b.1.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        try {
                            JSONObject jSONObject = new JSONObject(AnonymousClass1.this.b);
                            if (aVar != null && aVar.f7836a != null) {
                                JSONObject jSONObject2 = aVar.f7836a;
                                Iterator<String> itKeys = jSONObject2.keys();
                                while (itKeys.hasNext()) {
                                    String next = itKeys.next();
                                    jSONObject.put(next, jSONObject2.optString(next));
                                }
                                jSONObject.put("setting_id", AnonymousClass1.this.c.b());
                            } else if (aVar != null && aVar.b != null) {
                                jSONObject.put("type", 10001);
                                jSONObject.put("i_t", aVar.b.f7837a);
                                if (!TextUtils.isEmpty(aVar.b.b)) {
                                    jSONObject.put("i_al", com.tramini.plugin.a.g.c.a(aVar.b.b.getBytes()));
                                }
                            } else if (AnonymousClass1.this.f7829a != 18 && AnonymousClass1.this.f7829a != 19 && AnonymousClass1.this.f7829a != 20) {
                                return;
                            }
                            com.tramini.plugin.a.f.a.a().a(AnonymousClass1.this.d, new JSONObject(AnonymousClass1.this.e), jSONObject);
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    }
                });
            }
        }
    }
}
