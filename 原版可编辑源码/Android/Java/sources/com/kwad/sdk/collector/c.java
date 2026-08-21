package com.kwad.sdk.collector;

import android.content.Context;
import com.kwad.sdk.collector.d;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.m;
import com.kwad.sdk.core.network.p;
import com.kwad.sdk.utils.be;

public final class c {

    public interface a {
        void b(AppStatusRules appStatusRules);

        void k(int i, String str);
    }

    public static void a(final Context context, final a aVar) {
        if (context == null) {
            return;
        }
        d.a(context, new d.a() {
            @Override
            public final void cj(String str) {
                com.kwad.sdk.core.e.c.e("AppStatusFetchConfigManager", "onLoadError: " + str);
            }

            @Override
            public final void onLoaded() {
                c.b(context, aVar);
            }
        });
    }

    public static void b(final Context context, final a aVar) {
        new m<com.kwad.sdk.collector.a.a, AppStatusRules>() {
            private static AppStatusRules ck(String str) {
                return AppStatusRules.createFromJson(str);
            }

            @Override
            private com.kwad.sdk.collector.a.a createRequest() {
                return new com.kwad.sdk.collector.a.a(be.dk(context));
            }

            @Override
            public final BaseResultData parseData(String str) {
                return ck(str);
            }
        }.request(new p<com.kwad.sdk.collector.a.a, AppStatusRules>() {
            private void a(AppStatusRules appStatusRules) {
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.b(appStatusRules);
                }
            }

            @Override
            private void onStartRequest(com.kwad.sdk.collector.a.a aVar2) {
                super.onStartRequest(aVar2);
            }

            @Override
            private void onError(com.kwad.sdk.collector.a.a aVar2, int i, String str) {
                super.onError(aVar2, i, str);
                a aVar3 = aVar;
                if (aVar3 != null) {
                    aVar3.k(i, str);
                }
            }

            @Override
            public final void onSuccess(com.kwad.sdk.core.network.g gVar, BaseResultData baseResultData) {
                a((AppStatusRules) baseResultData);
            }
        });
    }
}
