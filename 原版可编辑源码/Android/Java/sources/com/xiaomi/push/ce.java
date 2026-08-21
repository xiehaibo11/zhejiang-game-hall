package com.xiaomi.push;

import android.content.Context;
import android.database.Cursor;
import com.xiaomi.push.cj;
import java.util.ArrayList;
import java.util.List;

public class ce extends cj.b<Long> {
    private long a;
    private String a;

    public ce(String str, List<String> list, String str2, String[] strArr, String str3, String str4, String str5, int i, String str6) {
        super(str, list, str2, strArr, str3, str4, str5, i);
        this.a = 0L;
        this.a = str6;
    }

    public static ce a(String str) {
        ArrayList arrayList = new ArrayList();
        arrayList.add("count(*)");
        return new ce(str, arrayList, null, null, null, null, null, 0, "job to get count of all message");
    }

    @Override
    public Long a(Context context, Cursor cursor) {
        return Long.valueOf(cursor.getLong(0));
    }

    @Override
    public Object a() {
        return Long.valueOf(this.a);
    }

    @Override
    public void a(Context context, List<Long> list) {
        if (context == null || list == null || list.size() <= 0) {
            return;
        }
        this.a = list.get(0).longValue();
    }
}
