package com.xiaomi.push;

import com.xiaomi.push.cj;

/* JADX INFO: loaded from: classes4.dex */
public class cf extends cj.d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected String f8077a;

    public cf(String str, String str2, String[] strArr, String str3) {
        super(str, str2, strArr);
        this.f8077a = "MessageDeleteJob";
        this.f8077a = str3;
    }

    public static cf a(String str) {
        return new cf(str, "status = ?", new String[]{String.valueOf(2)}, "a job build to delete uploaded job");
    }
}
