package com.huawei.hms.hatool;

import com.xiaomi.mipush.sdk.Constants;
import java.util.Calendar;
import java.util.UUID;

/* JADX INFO: loaded from: classes.dex */
public class f0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public long f2092a = 1800000;
    public volatile boolean b = false;
    public a c = null;

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f2093a = UUID.randomUUID().toString().replace(Constants.ACCEPT_TIME_SEPARATOR_SERVER, "");
        public boolean b;
        public long c;

        public a(long j) {
            this.f2093a += "_" + j;
            this.c = j;
            this.b = true;
            f0.this.b = false;
        }

        public void a(long j) {
            if (f0.this.b) {
                f0.this.b = false;
                b(j);
            } else if (b(this.c, j) || a(this.c, j)) {
                b(j);
            } else {
                this.c = j;
                this.b = false;
            }
        }

        public final boolean a(long j, long j2) {
            Calendar calendar = Calendar.getInstance();
            calendar.setTimeInMillis(j);
            Calendar calendar2 = Calendar.getInstance();
            calendar2.setTimeInMillis(j2);
            return (calendar.get(1) == calendar2.get(1) && calendar.get(6) == calendar2.get(6)) ? false : true;
        }

        public final void b(long j) {
            y.c("hmsSdk", "getNewSession() session is flush!");
            String string = UUID.randomUUID().toString();
            this.f2093a = string;
            this.f2093a = string.replace(Constants.ACCEPT_TIME_SEPARATOR_SERVER, "");
            this.f2093a += "_" + j;
            this.c = j;
            this.b = true;
        }

        public final boolean b(long j, long j2) {
            return j2 - j >= f0.this.f2092a;
        }
    }

    public String a() {
        a aVar = this.c;
        if (aVar != null) {
            return aVar.f2093a;
        }
        y.f("hmsSdk", "getSessionName(): session not prepared. onEvent() must be called first.");
        return "";
    }

    public void a(long j) {
        a aVar = this.c;
        if (aVar != null) {
            aVar.a(j);
        } else {
            y.c("hmsSdk", "Session is first flush");
            this.c = new a(j);
        }
    }

    public boolean b() {
        a aVar = this.c;
        if (aVar != null) {
            return aVar.b;
        }
        y.f("hmsSdk", "isFirstEvent(): session not prepared. onEvent() must be called first.");
        return false;
    }
}
