package com.mbridge.msdk.foundation.tools;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.database.Cursor;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

public final class o {
    private static volatile String d;
    private CopyOnWriteArrayList<CampaignEx> a;
    private volatile b b;
    private final AtomicBoolean c;
    private volatile Boolean e;
    private CampaignEx f;
    private int g;
    private Context h;

    private o() {
        this.g = 0;
        this.a = new CopyOnWriteArrayList<>();
        this.c = new AtomicBoolean(false);
    }

    public static o a() {
        return a.a;
    }

    public final void a(CampaignEx campaignEx) {
        try {
            if (this.e == null || campaignEx == null || !this.e.booleanValue()) {
                return;
            }
            this.f = campaignEx;
            this.a.add(campaignEx);
        } catch (Exception e) {
            z.d("MIMManager", e.getMessage());
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0076  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean a(String str) {
        boolean z = true;
        this.e = true;
        try {
            if (TextUtils.isEmpty(str) || this.e == null) {
                return false;
            }
            if (!this.e.booleanValue()) {
                return false;
            }
            try {
                String strTrim = str.trim();
                if (strTrim.startsWith(t.b("YkQwD+z8H+N1WBK3H+xtLkeAyM=="))) {
                    String strB = t.b("H75TDkQsVbxPY7V=");
                    if (!strTrim.contains(strB + "=1")) {
                        if (!strTrim.contains(strB + "=2")) {
                            if (!strTrim.contains(strB + "=3")) {
                                z = false;
                            }
                        }
                    }
                }
                return z;
            } catch (Exception unused) {
                return false;
            }
        } catch (Exception e) {
            z.d("MIMManager", e.getMessage());
            return false;
        }
    }

    public final void b(CampaignEx campaignEx) {
        try {
            if (this.e == null || campaignEx == null || !this.e.booleanValue()) {
                return;
            }
            this.f = null;
            try {
                this.a.remove(campaignEx);
            } catch (Exception e) {
                z.a("MIMManager", e.getMessage());
            }
        } catch (Exception e2) {
            z.d("MIMManager", e2.getMessage());
        }
    }

    final CampaignEx b() {
        return this.f;
    }

    public final void c() {
        this.g++;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void d() {
        int i = this.g - 1;
        this.g = i;
        if (i <= 0) {
            Context context = this.h;
            if (this.b == null || context == null) {
                return;
            }
            try {
                try {
                    context.unregisterReceiver(this.b);
                } catch (Exception e) {
                    z.a("MIMManager", e.getMessage());
                }
            } finally {
                this.f = null;
                this.a.clear();
                this.a = null;
                this.b = null;
                this.h = null;
            }
        }
    }

    public final void a(final Context context) {
        this.h = context;
        com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
            @Override
            public final void run() {
                if (o.this.c.compareAndSet(false, true)) {
                    try {
                        o.this.e = o.this.g();
                    } catch (Exception e) {
                        z.a("MIMManager", e.getMessage());
                    }
                    if (o.this.e == null || !o.this.e.booleanValue() || context == null) {
                        return;
                    }
                    try {
                        o.this.b = new b();
                        IntentFilter intentFilter = new IntentFilter();
                        intentFilter.addAction(t.b("DFKwWgtuDkKwLZPwD+z8H+N/xj26Vjcdx5KyVj5GxVN="));
                        intentFilter.addAction(t.b("DFKwWgtuDkKwLZPwD+z8H+N/xj26Vjcdx5KanjKnxVN="));
                        intentFilter.addAction(t.b("DFKwWgtuDkKwLZPwD+z8H+N/xjQZxVfV+T2SZVe6V2xS5c5n"));
                        context.registerReceiver(o.this.b, intentFilter);
                    } catch (Exception e2) {
                        z.a("MIMManager", e2.getMessage());
                    }
                }
            }
        });
    }

    public final Boolean e() {
        return this.e;
    }

    private Boolean g() {
        Cursor cursorQuery;
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        Boolean boolValueOf = null;
        if (contextJ != null) {
            try {
                if (contextJ.getContentResolver() != null) {
                    try {
                        cursorQuery = contextJ.getContentResolver().query(Uri.parse(t.b("DFK/J75/JaEXWFfXYZP9LkcXYk3/YkcBLF5TWgSBYbHuH75BW3xuhr5UJj2tLkeNhrKFLkxQhl==")), null, null, null, null);
                    } catch (Exception unused) {
                        cursorQuery = null;
                    }
                    if (cursorQuery != null) {
                        while (cursorQuery.moveToNext()) {
                            try {
                                String string = cursorQuery.getString(cursorQuery.getColumnIndex("support"));
                                if (!TextUtils.isEmpty(string) && !string.equalsIgnoreCase("null") && (string.equalsIgnoreCase("false") || string.equalsIgnoreCase("true"))) {
                                    boolValueOf = Boolean.valueOf(Boolean.parseBoolean(string));
                                }
                            } catch (Exception e) {
                                z.a("MIMManager", e.getMessage());
                            }
                            try {
                                d = cursorQuery.getString(cursorQuery.getColumnIndex("detailStyle"));
                            } catch (Exception e2) {
                                z.a("MIMManager", e2.getMessage());
                            }
                        }
                        try {
                            cursorQuery.close();
                        } catch (Exception e3) {
                            z.a("MIMManager", e3.getMessage());
                        }
                    }
                }
            } catch (Exception e4) {
                z.d("MIMManager", e4.getMessage());
            }
        }
        return boolValueOf;
    }

    public final String f() {
        try {
            return d == null ? "" : String.format("[%s]", d);
        } catch (Exception unused) {
            return "";
        }
    }

    private static final class a {
        private static final o a = new o();
    }

    private static class b extends BroadcastReceiver {
        private b() {
        }

        /* JADX WARN: Removed duplicated region for block: B:36:0x0083 A[Catch: Exception -> 0x00a8, TryCatch #0 {Exception -> 0x00a8, blocks: (B:13:0x0033, B:16:0x003a, B:18:0x004b, B:21:0x0052, B:24:0x005d, B:36:0x0083, B:37:0x008a, B:31:0x006f, B:32:0x0075, B:33:0x007b), top: B:43:0x0033 }] */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final void onReceive(final Context context, Intent intent) {
            final CampaignEx campaignExB;
            Runnable runnable;
            Runnable runnable2;
            String action = intent.getAction();
            if (TextUtils.isEmpty(action) || action.equals(t.b("DFKwWgtuDkKwLZPwD+z8H+N/xj26Vjcdx5KyVj5GxVN=")) || action.equals(t.b("DFKwWgtuDkKwLZPwD+z8H+N/xj26Vjcdx5KanjKnxVN=")) || !action.equals(t.b("DFKwWgtuDkKwLZPwD+z8H+N/xjQZxVfV+T2SZVe6V2xS5c5n"))) {
                return;
            }
            try {
                Bundle extras = intent.getExtras();
                if (extras == null) {
                    return;
                }
                final int i = extras.getInt(HiAnalyticsConstant.HaKey.BI_KEY_RESULT, -1);
                String string = extras.getString(DBDefinition.PACKAGE_NAME, "");
                if (i == -1 || TextUtils.isEmpty(string) || (campaignExB = a.a.b(string)) == null) {
                    return;
                }
                final o oVar = a.a;
                if (i == 3001) {
                    runnable = new Runnable() {
                        @Override
                        public final void run() {
                            Context context2;
                            CampaignEx campaignEx;
                            String[] strArrP;
                            try {
                                context2 = context;
                                campaignEx = campaignExB;
                            } catch (Exception e) {
                                z.d("MIMManager", e.getMessage());
                            }
                            if (campaignEx != null) {
                                try {
                                    com.mbridge.msdk.foundation.entity.l nativeVideoTracking = campaignEx.getNativeVideoTracking();
                                    if (nativeVideoTracking == null || (strArrP = nativeVideoTracking.p()) == null) {
                                        return;
                                    }
                                    for (String str : strArrP) {
                                        com.mbridge.msdk.click.b.a(context2, campaignEx, campaignEx.getCampaignUnitId(), str, false, false);
                                    }
                                    return;
                                } catch (Exception e2) {
                                    z.d("MIMManager", e2.getMessage());
                                    return;
                                }
                                z.d("MIMManager", e.getMessage());
                            }
                        }
                    };
                } else if (i == 3002) {
                    runnable = new Runnable() {
                        @Override
                        public final void run() {
                            Context context2;
                            CampaignEx campaignEx;
                            String[] strArrQ;
                            try {
                                context2 = context;
                                campaignEx = campaignExB;
                            } catch (Exception e) {
                                z.d("MIMManager", e.getMessage());
                            }
                            if (campaignEx != null) {
                                try {
                                    com.mbridge.msdk.foundation.entity.l nativeVideoTracking = campaignEx.getNativeVideoTracking();
                                    if (nativeVideoTracking == null || (strArrQ = nativeVideoTracking.q()) == null) {
                                        return;
                                    }
                                    for (String str : strArrQ) {
                                        com.mbridge.msdk.click.b.a(context2, campaignEx, campaignEx.getCampaignUnitId(), str, false, false);
                                    }
                                    return;
                                } catch (Exception e2) {
                                    z.d("MIMManager", e2.getMessage());
                                    return;
                                }
                                z.d("MIMManager", e.getMessage());
                            }
                        }
                    };
                } else {
                    if (i != 3008) {
                        runnable2 = null;
                        if (runnable2 != null) {
                            com.mbridge.msdk.foundation.same.f.b.a().execute(runnable2);
                        }
                        final o oVar2 = a.a;
                        final String str = "dm_page_status";
                        final CampaignEx campaignExB2 = a.a.b();
                        com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
                            @Override
                            public final void run() {
                                try {
                                    if (context == null || TextUtils.isEmpty(str) || campaignExB2 == null) {
                                        return;
                                    }
                                    StringBuffer stringBuffer = new StringBuffer();
                                    stringBuffer.append("key=2000100&");
                                    stringBuffer.append("network_type=");
                                    stringBuffer.append(v.D(context));
                                    stringBuffer.append("&");
                                    if (!TextUtils.isEmpty(campaignExB2.getRequestIdNotice())) {
                                        stringBuffer.append("rid_n=");
                                        stringBuffer.append(campaignExB2.getRequestIdNotice());
                                        stringBuffer.append("&");
                                    }
                                    if (!TextUtils.isEmpty(campaignExB2.getRequestId())) {
                                        stringBuffer.append("rid=");
                                        stringBuffer.append(campaignExB2.getRequestId());
                                        stringBuffer.append("&");
                                    }
                                    if (!TextUtils.isEmpty(campaignExB2.getCampaignUnitId())) {
                                        stringBuffer.append("unit_id=");
                                        stringBuffer.append(campaignExB2.getCampaignUnitId());
                                        stringBuffer.append("&");
                                        String str2 = com.mbridge.msdk.foundation.controller.a.b.get(campaignExB2.getCampaignUnitId());
                                        StringBuilder sb = new StringBuilder();
                                        sb.append("u_stid=");
                                        if (str2 == null) {
                                            str2 = "";
                                        }
                                        sb.append(str2);
                                        sb.append("&");
                                        stringBuffer.append(sb.toString());
                                    }
                                    if (!TextUtils.isEmpty(campaignExB2.getId())) {
                                        stringBuffer.append("cid=");
                                        stringBuffer.append(campaignExB2.getId());
                                        stringBuffer.append("&");
                                    }
                                    stringBuffer.append("status=");
                                    stringBuffer.append(str);
                                    stringBuffer.append("&");
                                    stringBuffer.append("code=");
                                    stringBuffer.append(i);
                                    if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                                        com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                                        return;
                                    }
                                    try {
                                        new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().a, com.mbridge.msdk.foundation.same.report.e.a(stringBuffer.toString(), context), null);
                                    } catch (Exception e) {
                                        e.printStackTrace();
                                        z.d("MIMManager", e.getMessage());
                                    }
                                } catch (Throwable th) {
                                    z.d("MIMManager", th.getMessage());
                                }
                            }
                        });
                    }
                    runnable = new Runnable() {
                        @Override
                        public final void run() {
                            String[] strArrR;
                            try {
                                try {
                                    Context context2 = context;
                                    CampaignEx campaignEx = campaignExB;
                                    if (campaignEx != null) {
                                        try {
                                            com.mbridge.msdk.foundation.entity.l nativeVideoTracking = campaignEx.getNativeVideoTracking();
                                            if (nativeVideoTracking != null && (strArrR = nativeVideoTracking.r()) != null) {
                                                for (String str2 : strArrR) {
                                                    com.mbridge.msdk.click.b.a(context2, campaignEx, campaignEx.getCampaignUnitId(), str2, false, false);
                                                }
                                            }
                                        } catch (Exception e) {
                                            z.d("MIMManager", e.getMessage());
                                        }
                                    }
                                    if (o.this.a == null || !o.this.a.contains(campaignExB)) {
                                        return;
                                    }
                                } catch (Exception e2) {
                                    z.d("MIMManager", e2.getMessage());
                                    if (o.this.a == null || !o.this.a.contains(campaignExB)) {
                                        return;
                                    }
                                }
                                o.this.a.remove(campaignExB);
                            } catch (Throwable th) {
                                if (o.this.a != null && o.this.a.contains(campaignExB)) {
                                    o.this.a.remove(campaignExB);
                                }
                                throw th;
                            }
                        }
                    };
                }
                runnable2 = runnable;
                if (runnable2 != null) {
                }
                final o oVar22 = a.a;
                final String str2 = "dm_page_status";
                final CampaignEx campaignExB22 = a.a.b();
                com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
                    @Override
                    public final void run() {
                        try {
                            if (context == null || TextUtils.isEmpty(str2) || campaignExB22 == null) {
                                return;
                            }
                            StringBuffer stringBuffer = new StringBuffer();
                            stringBuffer.append("key=2000100&");
                            stringBuffer.append("network_type=");
                            stringBuffer.append(v.D(context));
                            stringBuffer.append("&");
                            if (!TextUtils.isEmpty(campaignExB22.getRequestIdNotice())) {
                                stringBuffer.append("rid_n=");
                                stringBuffer.append(campaignExB22.getRequestIdNotice());
                                stringBuffer.append("&");
                            }
                            if (!TextUtils.isEmpty(campaignExB22.getRequestId())) {
                                stringBuffer.append("rid=");
                                stringBuffer.append(campaignExB22.getRequestId());
                                stringBuffer.append("&");
                            }
                            if (!TextUtils.isEmpty(campaignExB22.getCampaignUnitId())) {
                                stringBuffer.append("unit_id=");
                                stringBuffer.append(campaignExB22.getCampaignUnitId());
                                stringBuffer.append("&");
                                String str22 = com.mbridge.msdk.foundation.controller.a.b.get(campaignExB22.getCampaignUnitId());
                                StringBuilder sb = new StringBuilder();
                                sb.append("u_stid=");
                                if (str22 == null) {
                                    str22 = "";
                                }
                                sb.append(str22);
                                sb.append("&");
                                stringBuffer.append(sb.toString());
                            }
                            if (!TextUtils.isEmpty(campaignExB22.getId())) {
                                stringBuffer.append("cid=");
                                stringBuffer.append(campaignExB22.getId());
                                stringBuffer.append("&");
                            }
                            stringBuffer.append("status=");
                            stringBuffer.append(str2);
                            stringBuffer.append("&");
                            stringBuffer.append("code=");
                            stringBuffer.append(i);
                            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                                com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                                return;
                            }
                            try {
                                new com.mbridge.msdk.foundation.same.report.d.a(context).post(0, com.mbridge.msdk.foundation.same.net.f.d.a().a, com.mbridge.msdk.foundation.same.report.e.a(stringBuffer.toString(), context), null);
                            } catch (Exception e) {
                                e.printStackTrace();
                                z.d("MIMManager", e.getMessage());
                            }
                        } catch (Throwable th) {
                            z.d("MIMManager", th.getMessage());
                        }
                    }
                });
            } catch (Exception e) {
                z.d("MIMManager", e.getMessage());
            }
        }
    }

    private CampaignEx b(String str) {
        try {
            if (this.f != null && TextUtils.equals(this.f.getPackageName(), str)) {
                return this.f;
            }
            if (this.a == null || this.a.size() <= 0) {
                return null;
            }
            for (CampaignEx campaignEx : this.a) {
                if (campaignEx != null && TextUtils.equals(campaignEx.getPackageName(), str)) {
                    return campaignEx;
                }
            }
            return null;
        } catch (Exception e) {
            z.d("MIMManager", e.getMessage());
            return null;
        }
    }
}
