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

public class b extends BroadcastReceiver {
    public static final String a = b.class.getSimpleName();
    public static final String b = "tramini";

    @Override
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
                com.tramini.plugin.a.g.a.a(aVarB, stringExtra3, intent.getStringExtra(aVarB.k()), intent.getStringExtra(aVarB.j()), new 1(intent.getIntExtra(aVarB.l(), 0), stringExtra2, aVarB, stringExtra3, stringExtra));
            } catch (Throwable unused) {
            }
        }
    }

    private void a(Intent intent, com.tramini.plugin.b.a aVar) {
        String stringExtra = intent.getStringExtra(aVar.f());
        String stringExtra2 = intent.getStringExtra(aVar.g());
        intent.getStringExtra(aVar.h());
        String stringExtra3 = intent.getStringExtra(aVar.i());
        com.tramini.plugin.a.g.a.a(aVar, stringExtra3, intent.getStringExtra(aVar.k()), intent.getStringExtra(aVar.j()), new 1(intent.getIntExtra(aVar.l(), 0), stringExtra2, aVar, stringExtra3, stringExtra));
    }

    final class 1 implements a.a {
        final int a;
        final String b;
        final com.tramini.plugin.b.a c;
        final String d;
        final String e;

        1(int i, String str, com.tramini.plugin.b.a aVar, String str2, String str3) {
            this.a = i;
            this.b = str;
            this.c = aVar;
            this.d = str2;
            this.e = str3;
        }

        @Override
        public final void a(final com.tramini.plugin.a.c.a aVar) {
            int i;
            if (aVar != null || (i = this.a) == 18 || i == 19 || i == 20) {
                com.tramini.plugin.a.a.c.a();
                com.tramini.plugin.a.a.c.a(new Runnable() {
                    @Override
                    public final void run() {
                        try {
                            JSONObject jSONObject = new JSONObject(1.this.b);
                            if (aVar != null && aVar.a != null) {
                                JSONObject jSONObject2 = aVar.a;
                                Iterator<String> itKeys = jSONObject2.keys();
                                while (itKeys.hasNext()) {
                                    String next = itKeys.next();
                                    jSONObject.put(next, jSONObject2.optString(next));
                                }
                                jSONObject.put("setting_id", 1.this.c.b());
                            } else if (aVar != null && aVar.b != null) {
                                jSONObject.put("type", 10001);
                                jSONObject.put("i_t", aVar.b.a);
                                if (!TextUtils.isEmpty(aVar.b.b)) {
                                    jSONObject.put("i_al", com.tramini.plugin.a.g.c.a(aVar.b.b.getBytes()));
                                }
                            } else if (1.this.a != 18 && 1.this.a != 19 && 1.this.a != 20) {
                                return;
                            }
                            com.tramini.plugin.a.f.a.a().a(1.this.d, new JSONObject(1.this.e), jSONObject);
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    }
                });
            }
        }
    }
}
