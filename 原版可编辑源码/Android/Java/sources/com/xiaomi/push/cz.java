package com.xiaomi.push;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.constants.DownloadErrorCode;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.ArrayList;
import java.util.List;

public abstract class cz {

    public class a extends cy {
        public a() {
            super(1);
        }

        @Override
        public String a(Context context, String str, List<bi> list) {
            URL url;
            if (list == null) {
                url = new URL(str);
            } else {
                Uri.Builder builderBuildUpon = Uri.parse(str).buildUpon();
                for (bi biVar : list) {
                    builderBuildUpon.appendQueryParameter(biVar.a(), biVar.b());
                }
                url = new URL(builderBuildUpon.toString());
            }
            return bj.a(context, url);
        }
    }

    static int a(int i, int i2) {
        return (((i2 + 243) / 1448) * 132) + DownloadErrorCode.ERROR_TTNET_NOT_MODIFIED + i + i2;
    }

    static int a(int i, int i2, int i3) {
        return (((i2 + 200) / 1448) * 132) + 1011 + i2 + i + i3;
    }

    private static int a(cy cyVar, String str, List<bi> list, String str2) {
        if (cyVar.a() == 1) {
            return a(str.length(), a(str2));
        }
        if (cyVar.a() != 2) {
            return -1;
        }
        return a(str.length(), a(list), a(str2));
    }

    static int a(String str) {
        if (TextUtils.isEmpty(str)) {
            return 0;
        }
        try {
            return str.getBytes("UTF-8").length;
        } catch (UnsupportedEncodingException unused) {
            return 0;
        }
    }

    static int a(List<bi> list) {
        int length = 0;
        for (bi biVar : list) {
            if (!TextUtils.isEmpty(biVar.a())) {
                length += biVar.a().length();
            }
            if (!TextUtils.isEmpty(biVar.b())) {
                length += biVar.b().length();
            }
        }
        return length * 2;
    }

    public static String a(Context context, String str, List<bi> list) {
        return a(context, str, list, new a(), true);
    }

    /* JADX WARN: Removed duplicated region for block: B:49:0x00aa A[Catch: MalformedURLException -> 0x00c3, TRY_ENTER, TryCatch #4 {MalformedURLException -> 0x00c3, blocks: (B:4:0x000f, B:6:0x0016, B:8:0x0020, B:11:0x0027, B:13:0x002d, B:14:0x0030, B:15:0x0035, B:17:0x003b, B:19:0x0044, B:21:0x004c, B:22:0x0050, B:25:0x0058, B:26:0x005c, B:29:0x0064, B:49:0x00aa, B:50:0x00bc, B:35:0x007e, B:37:0x008f), top: B:64:0x000f }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String a(Context context, String str, List<bi> list, cy cyVar, boolean z) {
        cr crVar;
        IOException iOException;
        String str2;
        String str3;
        if (bj.b(context)) {
            try {
                ArrayList<String> arrayList = new ArrayList<>();
                if (z) {
                    cr crVarA = cv.a().a(str);
                    if (crVarA != null) {
                        arrayList = crVarA.a(str);
                    }
                    crVar = crVarA;
                } else {
                    crVar = null;
                }
                if (!arrayList.contains(str)) {
                    arrayList.add(str);
                }
                String str4 = null;
                for (String str5 : arrayList) {
                    ArrayList arrayList2 = list != null ? new ArrayList(list) : null;
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    try {
                    } catch (IOException e) {
                        iOException = e;
                        str2 = str4;
                    }
                    if (!cyVar.a(context, str5, (List<bi>) arrayList2)) {
                        return str4;
                    }
                    String strA = cyVar.a(context, str5, (List<bi>) arrayList2);
                    try {
                    } catch (IOException e2) {
                        e = e2;
                        str3 = strA;
                    }
                    if (!TextUtils.isEmpty(strA)) {
                        if (crVar != null) {
                            try {
                                crVar.a(str5, System.currentTimeMillis() - jCurrentTimeMillis, a(cyVar, str5, arrayList2, strA));
                            } catch (IOException e3) {
                                iOException = e3;
                                str2 = strA;
                                if (crVar != null) {
                                    crVar.a(str5, System.currentTimeMillis() - jCurrentTimeMillis, a(cyVar, str5, arrayList2, str2), iOException);
                                }
                                iOException.printStackTrace();
                                str4 = str2;
                            }
                        }
                        return strA;
                    }
                    if (crVar != null) {
                        str3 = strA;
                        try {
                            crVar.a(str5, System.currentTimeMillis() - jCurrentTimeMillis, a(cyVar, str5, arrayList2, strA), null);
                        } catch (IOException e4) {
                            e = e4;
                            String str6 = str3;
                            iOException = e;
                            str2 = str6;
                            if (crVar != null) {
                            }
                            iOException.printStackTrace();
                            str4 = str2;
                        }
                    } else {
                        str3 = strA;
                    }
                    str4 = str3;
                }
                return str4;
            } catch (MalformedURLException e5) {
                e5.printStackTrace();
            }
        }
        return null;
    }
}
