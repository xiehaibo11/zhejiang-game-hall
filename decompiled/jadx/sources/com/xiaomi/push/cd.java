package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes4.dex */
public class cd extends cf {
    public cd(String str, String str2, String[] strArr, String str3) {
        super(str, str2, strArr, str3);
    }

    public static cd a(Context context, String str, int i) {
        com.xiaomi.channel.commonutils.logger.b.b("delete  messages when db size is too bigger");
        String strM192a = cj.a(context).m192a(str);
        if (TextUtils.isEmpty(strM192a)) {
            return null;
        }
        StringBuilder sb = new StringBuilder();
        sb.append("rowDataId in (select ");
        sb.append("rowDataId from " + strM192a);
        sb.append(" order by createTimeStamp asc");
        sb.append(" limit ?)");
        return new cd(str, sb.toString(), new String[]{String.valueOf(i)}, "a job build to delete history message");
    }

    private void a(long j) {
        if (this.f189a == null || this.f189a.length <= 0) {
            return;
        }
        this.f189a[0] = String.valueOf(j);
    }

    @Override // com.xiaomi.push.cj.a
    public void a(Context context, Object obj) {
        if (obj instanceof Long) {
            long jLongValue = ((Long) obj).longValue();
            long jA = cp.a(a());
            long j = cb.f172a;
            if (jA <= j) {
                com.xiaomi.channel.commonutils.logger.b.b("db size is suitable");
                return;
            }
            long j2 = (long) ((((jA - j) * 1.2d) / j) * jLongValue);
            a(j2);
            bx.a(context).a("begin delete " + j2 + "noUpload messages , because db size is " + jA + "B");
            super.a(context, obj);
        }
    }
}
