package com.igexin.push.core.e;

import android.content.Intent;
import com.igexin.push.core.d;
import com.igexin.sdk.PushActivity;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class b {
    private static b b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Map<Long, a> f2571a = new HashMap();

    private b() {
    }

    public static b a() {
        if (b == null) {
            b = new b();
        }
        return b;
    }

    private void d(a aVar) {
        if (aVar != null) {
            this.f2571a.put(aVar.a(), aVar);
        }
    }

    public a a(Long l) {
        return this.f2571a.get(l);
    }

    public void a(a aVar) {
        if (aVar != null) {
            d(aVar);
            Intent intent = new Intent(d.g, (Class<?>) PushActivity.class);
            intent.putExtra("activityid", aVar.a());
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            d.g.startActivity(intent);
        }
    }

    public void b(a aVar) {
        if (aVar != null) {
            aVar.i();
            c(aVar);
        }
    }

    public void c(a aVar) {
        if (aVar != null) {
            this.f2571a.remove(aVar.a());
        }
    }
}
