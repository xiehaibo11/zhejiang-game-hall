package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;

public class db {
    public static int a(Context context, int i) {
        int iA = hb.a(context);
        if (-1 == iA) {
            return -1;
        }
        return (i * (iA == 0 ? 13 : 11)) / 10;
    }

    public static int a(hj hjVar) {
        return en.a(hjVar.a());
    }

    public static int a(iu iuVar, hj hjVar) {
        int iA;
        switch (dc.a[hjVar.ordinal()]) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                return en.a(hjVar.a());
            case 11:
                iA = en.a(hjVar.a());
                if (iuVar != null) {
                    try {
                        if (iuVar instanceof ia) {
                            String str = ((ia) iuVar).d;
                            if (!TextUtils.isEmpty(str) && en.a(en.a(str)) != -1) {
                                iA = en.a(en.a(str));
                            }
                        } else if (iuVar instanceof ii) {
                            String str2 = ((ii) iuVar).d;
                            if (!TextUtils.isEmpty(str2)) {
                                if (en.a(en.a(str2)) != -1) {
                                    iA = en.a(en.a(str2));
                                }
                                if (ht.B.equals(en.a(str2))) {
                                    return -1;
                                }
                            }
                        }
                    } catch (Exception unused) {
                        com.xiaomi.channel.commonutils.logger.b.d("PERF_ERROR : parse Notification type error");
                        return iA;
                    }
                }
                break;
            case 12:
                iA = en.a(hjVar.a());
                if (iuVar != null) {
                    try {
                        if (iuVar instanceof ie) {
                            String strB = ((ie) iuVar).b();
                            if (!TextUtils.isEmpty(strB) && ey.a(strB) != -1) {
                                iA = ey.a(strB);
                            }
                        } else if (iuVar instanceof id) {
                            String strA = ((id) iuVar).a();
                            if (!TextUtils.isEmpty(strA) && ey.a(strA) != -1) {
                                return ey.a(strA);
                            }
                        }
                    } catch (Exception unused2) {
                        com.xiaomi.channel.commonutils.logger.b.d("PERF_ERROR : parse Command type error");
                    }
                }
                break;
            default:
                return -1;
        }
        return iA;
    }

    public static void a(String str, Context context, int i, int i2) {
        if (i <= 0 || i2 <= 0) {
            return;
        }
        int iA = a(context, i2);
        if (i != en.a(ht.B)) {
            eo.a(context.getApplicationContext()).a(str, i, 1L, iA);
        }
    }

    public static void a(String str, Context context, if ifVar, int i) {
        hj hjVarA;
        if (context == null || ifVar == null || (hjVarA = ifVar.a()) == null) {
            return;
        }
        int iA = a(hjVarA);
        if (i <= 0) {
            byte[] bArrA = it.a(ifVar);
            i = bArrA != null ? bArrA.length : 0;
        }
        a(str, context, iA, i);
    }

    public static void a(String str, Context context, iu iuVar, hj hjVar, int i) {
        a(str, context, a(iuVar, hjVar), i);
    }

    public static void a(String str, Context context, byte[] bArr) {
        if (context == null || bArr == null || bArr.length <= 0) {
            return;
        }
        if ifVar = new if();
        try {
            it.a(ifVar, bArr);
            a(str, context, ifVar, bArr.length);
        } catch (iz unused) {
            com.xiaomi.channel.commonutils.logger.b.a("fail to convert bytes to container");
        }
    }
}
