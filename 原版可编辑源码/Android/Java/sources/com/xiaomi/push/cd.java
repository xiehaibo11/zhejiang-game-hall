package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;

public class cd extends cf {
    public cd(String str, String str2, String[] strArr, String str3) {
        super(str, str2, strArr, str3);
    }

    public static cd a(Context context, String str, int i) {
        com.xiaomi.channel.commonutils.logger.b.b("delete  messages when db size is too bigger");
        String strA = cj.a(context).a(str);
        if (TextUtils.isEmpty(strA)) {
            return null;
        }
        StringBuilder sb = new StringBuilder();
        sb.append("rowDataId in (select ");
        sb.append("rowDataId from " + strA);
        sb.append(" order by createTimeStamp asc");
        sb.append(" limit ?)");
        return new cd(str, sb.toString(), new String[]{String.valueOf(i)}, "a job build to delete history message");
    }

    private void a(long j) {
        if (this.a == null || this.a.length <= 0) {
            return;
        }
        this.a[0] = String.valueOf(j);
    }

    @Override
    public void a(Context context, Object obj) {
        if (obj instanceof Long) {
            long jLongValue = ((Long) obj).longValue();
            long jA = cp.a(a());
            long j = cb.a;
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
