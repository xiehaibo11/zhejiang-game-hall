package com.mbridge.msdk.foundation.same.report;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.tools.v;
import com.tkay.expressad.foundation.d.r;

/* JADX INFO: compiled from: PlayableReportUtils.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Handler f3483a = new Handler(Looper.getMainLooper());

    public static void a(CampaignEx campaignEx, String str, String str2, String str3) {
        if (campaignEx == null || !campaignEx.isMraid()) {
            return;
        }
        p pVar = new p(r.k, TextUtils.isEmpty(campaignEx.getMraid()) ^ true ? 1 : 3, "0", "", campaignEx.getId(), str2, str, String.valueOf(campaignEx.getKeyIaRst()));
        pVar.n(campaignEx.getId());
        pVar.k(campaignEx.getRequestId());
        pVar.l(campaignEx.getRequestIdNotice());
        pVar.b(campaignEx.getAdSpaceT());
        pVar.h(str3);
        pVar.c(v.D(com.mbridge.msdk.foundation.controller.a.f().j()));
        pVar.a(campaignEx.isMraid() ? p.f3396a : p.b);
        a(pVar, str2);
    }

    public static void a(p pVar, String str) {
        if (pVar != null) {
            pVar.b(v.E());
            String strD = p.d(pVar);
            if (b.a().c()) {
                b.a().a(strD);
            } else {
                a(strD, com.mbridge.msdk.foundation.controller.a.f().j(), str);
            }
        }
    }

    public static void a(p pVar, Context context, String str) {
        if (pVar != null) {
            pVar.o(r.n);
            pVar.m(str);
            pVar.c(v.D(context));
            String strB = p.b(pVar);
            if (b.a().c()) {
                b.a().a(strB);
            } else {
                a(strB, context, str);
            }
        }
    }

    public static void b(p pVar, String str) {
        if (pVar != null) {
            pVar.o(r.o);
            pVar.m(str);
            pVar.c(v.D(com.mbridge.msdk.foundation.controller.a.f().j()));
            pVar.b(v.E());
            String strC = p.c(pVar);
            if (b.a().c()) {
                b.a().a(strC);
            } else {
                a(strC, com.mbridge.msdk.foundation.controller.a.f().j(), str);
            }
        }
    }

    public static void a(String str, Context context, String str2) {
        if (context == null || TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return;
        }
        a(new com.mbridge.msdk.foundation.same.f.a(str, str2));
    }

    public static void b(p pVar, Context context, String str) {
        String strG = p.g(pVar);
        if (b.a().c()) {
            b.a().a(strG);
        } else {
            a(strG, context, str);
        }
    }

    public static void c(p pVar, Context context, String str) {
        String strH = p.h(pVar);
        if (b.a().c()) {
            b.a().a(strH);
        } else {
            a(strH, context, str);
        }
    }

    public static void d(p pVar, Context context, String str) {
        if (pVar != null) {
            pVar.o(r.p);
            pVar.m(str);
            pVar.c(v.D(context));
            String strA = p.a(pVar);
            if (b.a().c()) {
                b.a().a(strA);
            } else {
                a(strA, context, str);
            }
        }
    }

    private static void a(Runnable runnable) {
        Handler handler = f3483a;
        if (handler != null) {
            handler.post(runnable);
        }
    }
}
