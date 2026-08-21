package com.tkay.core.b;

import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYBidRequestInfo;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.ag;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.l.s;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static String f5963a = f.class.getSimpleName();
    ag b;
    Map<String, Object> c;
    a d;

    public interface a {
        void a(aj ajVar, TYBaseAdAdapter tYBaseAdAdapter);

        void a(aj ajVar, JSONObject jSONObject);

        void a(String str, aj ajVar);
    }

    public f(ag agVar) {
        this.b = agVar;
        this.c = agVar.r;
    }

    private void a(aj ajVar, a aVar) {
        this.d = aVar;
        TYBaseAdAdapter tYBaseAdAdapterA = com.tkay.core.common.l.i.a(ajVar);
        if (tYBaseAdAdapterA == null) {
            aVar.a(TYBidRequestInfo.NO_ADAPTER_ERROR_TYPE, ajVar);
        } else {
            com.tkay.core.common.l.b.a.a().a(new AnonymousClass1(tYBaseAdAdapterA, ajVar));
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.b.f$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ TYBaseAdAdapter f5964a;
        final /* synthetic */ aj b;

        AnonymousClass1(TYBaseAdAdapter tYBaseAdAdapter, aj ajVar) {
            this.f5964a = tYBaseAdAdapter;
            this.b = ajVar;
        }

        @Override // java.lang.Runnable
        public final void run() {
            f.a(f.this, this.f5964a, this.b);
        }
    }

    private void a(TYBaseAdAdapter tYBaseAdAdapter, aj ajVar) {
        try {
            Map<String, Object> mapA = this.b.o.a(this.b.e, this.b.d, ajVar);
            com.tkay.core.common.f.d dVarN = this.b.t.N();
            s.a(dVarN, ajVar, 0, false);
            com.tkay.core.common.l.g.a(mapA, dVarN);
            tYBaseAdAdapter.getBidRequestInfo(this.b.b, mapA, this.c, new AnonymousClass2(ajVar));
            if (this.d != null) {
                this.d.a(ajVar, tYBaseAdAdapter);
            }
        } catch (Throwable th) {
            th.printStackTrace();
            a aVar = this.d;
            if (aVar != null) {
                aVar.a(th.getMessage(), ajVar);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.b.f$2, reason: invalid class name */
    final class AnonymousClass2 implements TYBidRequestInfoListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ aj f5965a;

        AnonymousClass2(aj ajVar) {
            this.f5965a = ajVar;
        }

        @Override // com.tkay.core.api.TYBidRequestInfoListener
        public final void onSuccess(TYBidRequestInfo tYBidRequestInfo) {
            f.a(f.this, this.f5965a, tYBidRequestInfo);
        }

        @Override // com.tkay.core.api.TYBidRequestInfoListener
        public final void onFailed(String str) {
            if (f.this.d != null) {
                f.this.d.a(str, this.f5965a);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.b.f$3, reason: invalid class name */
    final class AnonymousClass3 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ TYBidRequestInfo f5966a;
        final /* synthetic */ aj b;

        AnonymousClass3(TYBidRequestInfo tYBidRequestInfo, aj ajVar) {
            this.f5966a = tYBidRequestInfo;
            this.b = ajVar;
        }

        @Override // java.lang.Runnable
        public final void run() {
            JSONObject requestJSONObject;
            try {
                if (this.f5966a != null && (requestJSONObject = this.f5966a.toRequestJSONObject()) != null) {
                    TYBidRequestInfo.fillBaseCommonParams(requestJSONObject, String.valueOf(f.this.b.f), f.this.b.o, this.b);
                    if (this.b.l() == 3) {
                        try {
                            requestJSONObject.put("unit_id", this.b.t());
                            requestJSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.EXCLUDE_OFFER, m.a().k());
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                        if (f.this.b.z == 1) {
                            requestJSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.GET_OFFER, 2);
                        }
                    }
                    if (f.this.d != null) {
                        f.this.d.a(this.b, requestJSONObject);
                        return;
                    }
                    return;
                }
                if (f.this.d != null) {
                    f.this.d.a(TYBidRequestInfo.RETURN_PARAMS_ERROR_TYPE, this.b);
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
                if (f.this.d != null) {
                    f.this.d.a(th2.getMessage(), this.b);
                }
            }
        }
    }

    private void a(aj ajVar, TYBidRequestInfo tYBidRequestInfo) {
        com.tkay.core.common.l.b.a.a().a(new AnonymousClass3(tYBidRequestInfo, ajVar));
    }

    static /* synthetic */ void a(f fVar, TYBaseAdAdapter tYBaseAdAdapter, aj ajVar) {
        try {
            Map<String, Object> mapA = fVar.b.o.a(fVar.b.e, fVar.b.d, ajVar);
            com.tkay.core.common.f.d dVarN = fVar.b.t.N();
            s.a(dVarN, ajVar, 0, false);
            com.tkay.core.common.l.g.a(mapA, dVarN);
            tYBaseAdAdapter.getBidRequestInfo(fVar.b.b, mapA, fVar.c, fVar.new AnonymousClass2(ajVar));
            if (fVar.d != null) {
                fVar.d.a(ajVar, tYBaseAdAdapter);
            }
        } catch (Throwable th) {
            th.printStackTrace();
            a aVar = fVar.d;
            if (aVar != null) {
                aVar.a(th.getMessage(), ajVar);
            }
        }
    }

    static /* synthetic */ void a(f fVar, aj ajVar, TYBidRequestInfo tYBidRequestInfo) {
        com.tkay.core.common.l.b.a.a().a(fVar.new AnonymousClass3(tYBidRequestInfo, ajVar));
    }
}
