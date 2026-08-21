package com.xiaomi.push;

import android.content.Context;
import android.database.Cursor;
import com.xiaomi.push.cj;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class ce extends cj.b<Long> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f8076a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f175a;

    public ce(String str, List<String> list, String str2, String[] strArr, String str3, String str4, String str5, int i, String str6) {
        super(str, list, str2, strArr, str3, str4, str5, i);
        this.f8076a = 0L;
        this.f175a = str6;
    }

    public static ce a(String str) {
        ArrayList arrayList = new ArrayList();
        arrayList.add("count(*)");
        return new ce(str, arrayList, null, null, null, null, null, 0, "job to get count of all message");
    }

    /* JADX WARN: Can't rename method to resolve collision */
    @Override // com.xiaomi.push.cj.b
    public Long a(Context context, Cursor cursor) {
        return Long.valueOf(cursor.getLong(0));
    }

    @Override // com.xiaomi.push.cj.a
    /* JADX INFO: renamed from: a */
    public Object mo193a() {
        return Long.valueOf(this.f8076a);
    }

    @Override // com.xiaomi.push.cj.b
    public void a(Context context, List<Long> list) {
        if (context == null || list == null || list.size() <= 0) {
            return;
        }
        this.f8076a = list.get(0).longValue();
    }
}
