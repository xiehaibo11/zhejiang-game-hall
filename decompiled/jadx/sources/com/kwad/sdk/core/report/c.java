package com.kwad.sdk.core.report;

import android.R;
import android.content.Context;
import android.os.Handler;
import android.os.Message;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.g;
import com.kwad.sdk.core.report.g;
import com.kwad.sdk.core.response.model.BatchReportResult;
import com.kwad.sdk.core.threads.GlobalThreadPools;
import com.kwad.sdk.service.ServiceProvider;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public abstract class c<T extends g, R extends com.kwad.sdk.core.network.g> {
    private static ExecutorService aqF;
    private static volatile Handler mHandler;
    private T aqI;
    private Context mContext;
    private volatile long aqD = 120000;
    private o aqE = new q();
    private AtomicInteger aqG = new AtomicInteger(0);
    private AtomicInteger mRetryCount = new AtomicInteger(0);
    private int aqH = 5;

    protected c() {
        if (aqF == null) {
            aqF = GlobalThreadPools.CU();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean BQ() {
        int i = this.mRetryCount.get();
        if (i > 16) {
            i = 16;
        }
        w wVar = (w) ServiceProvider.get(w.class);
        return this.aqE.size() >= (wVar != null ? (long) (wVar.xr() << i) : 20L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void BS() {
        int andIncrement = this.mRetryCount.getAndIncrement();
        if (andIncrement <= this.aqH) {
            if (andIncrement > 0) {
                this.aqD *= 2;
            }
            ae(this.aqD);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void ae(long j) {
        if (mHandler == null) {
            return;
        }
        mHandler.removeMessages(R.attr.childDivider);
        Message messageObtain = Message.obtain(mHandler, a(this.mContext, this.aqE, this.aqG));
        messageObtain.what = R.attr.childDivider;
        mHandler.sendMessageDelayed(messageObtain, j);
    }

    private void c(final n<T> nVar) {
        new com.kwad.sdk.core.network.m<R, BatchReportResult>() { // from class: com.kwad.sdk.core.report.c.4
            private static BatchReportResult ds(String str) {
                JSONObject jSONObject = new JSONObject(str);
                BatchReportResult batchReportResult = new BatchReportResult();
                batchReportResult.parseJson(jSONObject);
                return batchReportResult;
            }

            /* JADX WARN: Multi-variable type inference failed */
            @Override // com.kwad.sdk.core.network.a
            public final R createRequest() {
                g gVarBU = nVar.BU();
                c.this.aqI = gVarBU;
                return (R) c.this.a(gVarBU);
            }

            @Override // com.kwad.sdk.core.network.m
            public final boolean enableMonitorReport() {
                return false;
            }

            @Override // com.kwad.sdk.core.network.a
            public final ExecutorService getExecutor() {
                return c.aqF;
            }

            @Override // com.kwad.sdk.core.network.m
            public final /* synthetic */ BaseResultData parseData(String str) {
                return ds(str);
            }
        }.request(new com.kwad.sdk.core.network.p<R, BatchReportResult>() { // from class: com.kwad.sdk.core.report.c.5
            private void a(BatchReportResult batchReportResult) {
                com.kwad.sdk.core.e.c.d("BaseBatchReporter", "立即上报 onSuccess action= " + c.this.aqI + " result " + batchReportResult.getResult());
            }

            /* JADX WARN: Multi-variable type inference failed */
            /* JADX WARN: Type inference fix 'apply assigned field type' failed
            java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
            	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
            	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
            	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
            	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
            	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
            	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
            	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
             */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            public final void onError(R r, int i, String str) {
                c.this.a((n) new n<T>() { // from class: com.kwad.sdk.core.report.c.5.1
                    @Override // com.kwad.sdk.core.report.n
                    public final T BU() {
                        return (T) c.this.aqI;
                    }
                });
            }

            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            public final /* synthetic */ void onSuccess(com.kwad.sdk.core.network.g gVar, BaseResultData baseResultData) {
                a((BatchReportResult) baseResultData);
            }
        });
    }

    public final void BR() {
        ae(0L);
    }

    protected R a(T t) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(t);
        return (R) s(arrayList);
    }

    protected Runnable a(Context context, o<T> oVar, AtomicInteger atomicInteger) {
        return new aa(context, oVar, this, atomicInteger);
    }

    public final void a(final n<T> nVar) {
        aqF.execute(new Runnable() { // from class: com.kwad.sdk.core.report.c.1
            @Override // java.lang.Runnable
            public final void run() {
                if (c.mHandler != null && !c.mHandler.hasMessages(R.attr.childDivider)) {
                    c cVar = c.this;
                    cVar.ae(cVar.aqD);
                }
                g gVarBU = nVar.BU();
                if (gVarBU != null) {
                    c.this.aqE.j(gVarBU);
                }
                if (c.this.BQ()) {
                    c.this.BR();
                }
            }
        });
    }

    protected final void a(o oVar) {
        this.aqE = oVar;
    }

    public final void a(final List<T> list, final AtomicBoolean atomicBoolean) {
        if (list == null || list.size() <= 0) {
            return;
        }
        this.aqG.getAndIncrement();
        new com.kwad.sdk.core.network.m<R, BatchReportResult>() { // from class: com.kwad.sdk.core.report.c.2
            private static BatchReportResult ds(String str) {
                JSONObject jSONObject = new JSONObject(str);
                BatchReportResult batchReportResult = new BatchReportResult();
                batchReportResult.parseJson(jSONObject);
                return batchReportResult;
            }

            @Override // com.kwad.sdk.core.network.a
            public final R createRequest() {
                return (R) c.this.s(list);
            }

            @Override // com.kwad.sdk.core.network.m
            public final boolean enableMonitorReport() {
                return false;
            }

            @Override // com.kwad.sdk.core.network.a
            public final ExecutorService getExecutor() {
                return c.aqF;
            }

            @Override // com.kwad.sdk.core.network.m
            public final /* synthetic */ BaseResultData parseData(String str) {
                return ds(str);
            }
        }.request(new com.kwad.sdk.core.network.p<R, BatchReportResult>() { // from class: com.kwad.sdk.core.report.c.3
            private void a(BatchReportResult batchReportResult) {
                c.this.aqE.t(list);
                if (c.this.aqG.decrementAndGet() == 0 && atomicBoolean.get()) {
                    c.this.BS();
                }
                c.this.ad(batchReportResult.getInterval());
                c cVar = c.this;
                cVar.ae(cVar.aqD);
            }

            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            public final void onError(R r, int i, String str) {
                atomicBoolean.set(true);
                if (c.this.aqG.decrementAndGet() == 0) {
                    c.this.BS();
                }
            }

            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            public final /* synthetic */ void onSuccess(com.kwad.sdk.core.network.g gVar, BaseResultData baseResultData) {
                a((BatchReportResult) baseResultData);
            }
        });
    }

    protected final void ad(long j) {
        this.aqD = j < 60 ? 60000L : j * 1000;
    }

    public final void b(n<T> nVar) {
        try {
            c(nVar);
        } catch (Throwable th) {
            ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(th);
        }
    }

    public synchronized void i(Context context, int i) {
        this.mContext = context;
        if (mHandler == null) {
            mHandler = com.kwad.sdk.core.threads.a.CO();
        }
    }

    protected abstract R s(List<T> list);
}
