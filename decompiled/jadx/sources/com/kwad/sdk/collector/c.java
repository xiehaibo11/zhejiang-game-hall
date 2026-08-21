package com.kwad.sdk.collector;

import android.content.Context;
import com.kwad.sdk.collector.d;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.m;
import com.kwad.sdk.core.network.p;
import com.kwad.sdk.utils.be;

/* JADX INFO: loaded from: classes2.dex */
public final class c {

    public interface a {
        void b(AppStatusRules appStatusRules);

        void k(int i, String str);
    }

    public static void a(final Context context, final a aVar) {
        if (context == null) {
            return;
        }
        d.a(context, new d.a() { // from class: com.kwad.sdk.collector.c.1
            @Override // com.kwad.sdk.collector.d.a
            public final void cj(String str) {
                com.kwad.sdk.core.e.c.e("AppStatusFetchConfigManager", "onLoadError: " + str);
            }

            @Override // com.kwad.sdk.collector.d.a
            public final void onLoaded() {
                c.b(context, aVar);
            }
        });
    }

    public static void b(final Context context, final a aVar) {
        new m<com.kwad.sdk.collector.a.a, AppStatusRules>() { // from class: com.kwad.sdk.collector.c.2
            private static AppStatusRules ck(String str) {
                return AppStatusRules.createFromJson(str);
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.a
            /* JADX INFO: renamed from: yF, reason: merged with bridge method [inline-methods] */
            public com.kwad.sdk.collector.a.a createRequest() {
                return new com.kwad.sdk.collector.a.a(be.dk(context));
            }

            @Override // com.kwad.sdk.core.network.m
            public final /* synthetic */ BaseResultData parseData(String str) {
                return ck(str);
            }
        }.request(new p<com.kwad.sdk.collector.a.a, AppStatusRules>() { // from class: com.kwad.sdk.collector.c.3
            private void a(AppStatusRules appStatusRules) {
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.b(appStatusRules);
                }
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onStartRequest(com.kwad.sdk.collector.a.a aVar2) {
                super.onStartRequest(aVar2);
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onError(com.kwad.sdk.collector.a.a aVar2, int i, String str) {
                super.onError(aVar2, i, str);
                a aVar3 = aVar;
                if (aVar3 != null) {
                    aVar3.k(i, str);
                }
            }

            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            public final /* synthetic */ void onSuccess(com.kwad.sdk.core.network.g gVar, BaseResultData baseResultData) {
                a((AppStatusRules) baseResultData);
            }
        });
    }
}
