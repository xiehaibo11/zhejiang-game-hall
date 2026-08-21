package com.igexin.push.util;

import android.app.Notification;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.content.pm.ServiceInfo;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Pair;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.net.URISyntaxException;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile Boolean f2653a;

    /* JADX WARN: Code restructure failed: missing block: B:119:0x0212, code lost:
    
        r9.putExtras(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:120:0x0215, code lost:
    
        if (r10 == false) goto L126;
     */
    /* JADX WARN: Code restructure failed: missing block: B:122:0x021b, code lost:
    
        if (r3.getPackage() != null) goto L127;
     */
    /* JADX WARN: Code restructure failed: missing block: B:124:0x0221, code lost:
    
        if (android.os.Build.VERSION.SDK_INT < 15) goto L127;
     */
    /* JADX WARN: Code restructure failed: missing block: B:125:0x0223, code lost:
    
        r3.setSelector(r9);
     */
    /* JADX WARN: Code restructure failed: missing block: B:126:0x0227, code lost:
    
        r3 = r9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:127:0x0228, code lost:
    
        if (r6 == null) goto L172;
     */
    /* JADX WARN: Code restructure failed: missing block: B:129:0x022e, code lost:
    
        if (r6.startsWith("intent:") == false) goto L133;
     */
    /* JADX WARN: Code restructure failed: missing block: B:130:0x0230, code lost:
    
        r6 = r6.substring(7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:131:0x0235, code lost:
    
        if (r11 == null) goto L165;
     */
    /* JADX WARN: Code restructure failed: missing block: B:132:0x0237, code lost:
    
        r6 = r11 + ':' + r6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:134:0x0251, code lost:
    
        if (r6.startsWith("android-app:") == false) goto L165;
     */
    /* JADX WARN: Code restructure failed: missing block: B:136:0x025b, code lost:
    
        if (r6.charAt(12) != '/') goto L164;
     */
    /* JADX WARN: Code restructure failed: missing block: B:138:0x0263, code lost:
    
        if (r6.charAt(13) != '/') goto L164;
     */
    /* JADX WARN: Code restructure failed: missing block: B:139:0x0265, code lost:
    
        r5 = r6.indexOf(47, 14);
     */
    /* JADX WARN: Code restructure failed: missing block: B:141:0x026d, code lost:
    
        if (r5 >= 0) goto L145;
     */
    /* JADX WARN: Code restructure failed: missing block: B:142:0x026f, code lost:
    
        r3.setPackage(r6.substring(14));
     */
    /* JADX WARN: Code restructure failed: missing block: B:143:0x0276, code lost:
    
        if (r12 != false) goto L164;
     */
    /* JADX WARN: Code restructure failed: missing block: B:144:0x0278, code lost:
    
        r3.setAction("android.intent.action.MAIN");
     */
    /* JADX WARN: Code restructure failed: missing block: B:145:0x027c, code lost:
    
        r3.setPackage(r6.substring(14, r5));
        r0 = r5 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:146:0x0289, code lost:
    
        if (r0 >= r6.length()) goto L156;
     */
    /* JADX WARN: Code restructure failed: missing block: B:147:0x028b, code lost:
    
        r8 = r6.indexOf(47, r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:148:0x028f, code lost:
    
        if (r8 < 0) goto L155;
     */
    /* JADX WARN: Code restructure failed: missing block: B:149:0x0291, code lost:
    
        r11 = r6.substring(r0, r8);
     */
    /* JADX WARN: Code restructure failed: missing block: B:150:0x0299, code lost:
    
        if (r8 >= r6.length()) goto L154;
     */
    /* JADX WARN: Code restructure failed: missing block: B:151:0x029b, code lost:
    
        r0 = r8 + 1;
        r5 = r6.indexOf(47, r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:152:0x02a1, code lost:
    
        if (r5 < 0) goto L154;
     */
    /* JADX WARN: Code restructure failed: missing block: B:153:0x02a3, code lost:
    
        r8 = r6.substring(r0, r5);
     */
    /* JADX WARN: Code restructure failed: missing block: B:154:0x02a8, code lost:
    
        r5 = r8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:155:0x02aa, code lost:
    
        r11 = r6.substring(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:156:0x02ae, code lost:
    
        r8 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:157:0x02af, code lost:
    
        if (r11 != null) goto L160;
     */
    /* JADX WARN: Code restructure failed: missing block: B:158:0x02b1, code lost:
    
        if (r12 != false) goto L164;
     */
    /* JADX WARN: Code restructure failed: missing block: B:160:0x02b4, code lost:
    
        if (r8 != null) goto L163;
     */
    /* JADX WARN: Code restructure failed: missing block: B:161:0x02b6, code lost:
    
        r0 = new java.lang.StringBuilder();
        r0.append(r11);
        r0.append(com.xiaomi.mipush.sdk.Constants.COLON_SEPARATOR);
     */
    /* JADX WARN: Code restructure failed: missing block: B:162:0x02c1, code lost:
    
        r6 = r0.toString();
     */
    /* JADX WARN: Code restructure failed: missing block: B:163:0x02c7, code lost:
    
        r0 = new java.lang.StringBuilder();
        r0.append(r11);
        r0.append("://");
        r0.append(r8);
        r0.append(r6.substring(r5));
     */
    /* JADX WARN: Code restructure failed: missing block: B:164:0x02df, code lost:
    
        r6 = "";
     */
    /* JADX WARN: Code restructure failed: missing block: B:166:0x02e4, code lost:
    
        if (r6.length() <= 0) goto L172;
     */
    /* JADX WARN: Code restructure failed: missing block: B:167:0x02e6, code lost:
    
        r3.setData(android.net.Uri.parse(r6));
     */
    /* JADX WARN: Code restructure failed: missing block: B:169:0x02ee, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:171:0x02f8, code lost:
    
        throw new java.net.URISyntaxException(r17, r0.getMessage());
     */
    /* JADX WARN: Code restructure failed: missing block: B:172:0x02f9, code lost:
    
        return r3;
     */
    /* JADX WARN: Removed duplicated region for block: B:18:0x003a  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0046 A[Catch: IndexOutOfBoundsException -> 0x02fa, TryCatch #1 {IndexOutOfBoundsException -> 0x02fa, blocks: (B:19:0x003c, B:27:0x0056, B:29:0x005d, B:31:0x0065, B:33:0x006b, B:34:0x0073, B:38:0x0081, B:40:0x0089, B:42:0x0091, B:43:0x0093, B:45:0x009b, B:46:0x00a5, B:48:0x00af, B:116:0x0205, B:52:0x00b9, B:54:0x00c1, B:55:0x00c5, B:57:0x00cd, B:58:0x00d1, B:60:0x00d9, B:62:0x00e8, B:66:0x00f2, B:68:0x00f8, B:69:0x00fa, B:70:0x0104, B:72:0x010c, B:73:0x0110, B:75:0x0118, B:76:0x0120, B:79:0x012a, B:81:0x0145, B:83:0x014d, B:84:0x0156, B:86:0x015a, B:88:0x0162, B:89:0x016b, B:91:0x017d, B:92:0x0182, B:94:0x018a, B:95:0x0193, B:97:0x019b, B:98:0x01a4, B:100:0x01ac, B:101:0x01b5, B:103:0x01be, B:104:0x01c6, B:106:0x01ce, B:107:0x01d6, B:109:0x01de, B:110:0x01e6, B:112:0x01ee, B:113:0x01f6, B:115:0x01fe, B:117:0x020a, B:118:0x0211, B:119:0x0212, B:121:0x0217, B:123:0x021d, B:125:0x0223, B:128:0x022a, B:130:0x0230, B:132:0x0237, B:165:0x02e0, B:167:0x02e6, B:170:0x02ef, B:171:0x02f8, B:133:0x024d, B:135:0x0253, B:137:0x025d, B:139:0x0265, B:142:0x026f, B:144:0x0278, B:145:0x027c, B:147:0x028b, B:149:0x0291, B:151:0x029b, B:153:0x02a3, B:161:0x02b6, B:162:0x02c1, B:163:0x02c7, B:155:0x02aa, B:21:0x0046, B:24:0x0050), top: B:180:0x0038, inners: #2 }] */
    /* JADX WARN: Removed duplicated region for block: B:29:0x005d A[Catch: IndexOutOfBoundsException -> 0x02fa, TryCatch #1 {IndexOutOfBoundsException -> 0x02fa, blocks: (B:19:0x003c, B:27:0x0056, B:29:0x005d, B:31:0x0065, B:33:0x006b, B:34:0x0073, B:38:0x0081, B:40:0x0089, B:42:0x0091, B:43:0x0093, B:45:0x009b, B:46:0x00a5, B:48:0x00af, B:116:0x0205, B:52:0x00b9, B:54:0x00c1, B:55:0x00c5, B:57:0x00cd, B:58:0x00d1, B:60:0x00d9, B:62:0x00e8, B:66:0x00f2, B:68:0x00f8, B:69:0x00fa, B:70:0x0104, B:72:0x010c, B:73:0x0110, B:75:0x0118, B:76:0x0120, B:79:0x012a, B:81:0x0145, B:83:0x014d, B:84:0x0156, B:86:0x015a, B:88:0x0162, B:89:0x016b, B:91:0x017d, B:92:0x0182, B:94:0x018a, B:95:0x0193, B:97:0x019b, B:98:0x01a4, B:100:0x01ac, B:101:0x01b5, B:103:0x01be, B:104:0x01c6, B:106:0x01ce, B:107:0x01d6, B:109:0x01de, B:110:0x01e6, B:112:0x01ee, B:113:0x01f6, B:115:0x01fe, B:117:0x020a, B:118:0x0211, B:119:0x0212, B:121:0x0217, B:123:0x021d, B:125:0x0223, B:128:0x022a, B:130:0x0230, B:132:0x0237, B:165:0x02e0, B:167:0x02e6, B:170:0x02ef, B:171:0x02f8, B:133:0x024d, B:135:0x0253, B:137:0x025d, B:139:0x0265, B:142:0x026f, B:144:0x0278, B:145:0x027c, B:147:0x028b, B:149:0x0291, B:151:0x029b, B:153:0x02a3, B:161:0x02b6, B:162:0x02c1, B:163:0x02c7, B:155:0x02aa, B:21:0x0046, B:24:0x0050), top: B:180:0x0038, inners: #2 }] */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0064  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x006b A[Catch: IndexOutOfBoundsException -> 0x02fa, TryCatch #1 {IndexOutOfBoundsException -> 0x02fa, blocks: (B:19:0x003c, B:27:0x0056, B:29:0x005d, B:31:0x0065, B:33:0x006b, B:34:0x0073, B:38:0x0081, B:40:0x0089, B:42:0x0091, B:43:0x0093, B:45:0x009b, B:46:0x00a5, B:48:0x00af, B:116:0x0205, B:52:0x00b9, B:54:0x00c1, B:55:0x00c5, B:57:0x00cd, B:58:0x00d1, B:60:0x00d9, B:62:0x00e8, B:66:0x00f2, B:68:0x00f8, B:69:0x00fa, B:70:0x0104, B:72:0x010c, B:73:0x0110, B:75:0x0118, B:76:0x0120, B:79:0x012a, B:81:0x0145, B:83:0x014d, B:84:0x0156, B:86:0x015a, B:88:0x0162, B:89:0x016b, B:91:0x017d, B:92:0x0182, B:94:0x018a, B:95:0x0193, B:97:0x019b, B:98:0x01a4, B:100:0x01ac, B:101:0x01b5, B:103:0x01be, B:104:0x01c6, B:106:0x01ce, B:107:0x01d6, B:109:0x01de, B:110:0x01e6, B:112:0x01ee, B:113:0x01f6, B:115:0x01fe, B:117:0x020a, B:118:0x0211, B:119:0x0212, B:121:0x0217, B:123:0x021d, B:125:0x0223, B:128:0x022a, B:130:0x0230, B:132:0x0237, B:165:0x02e0, B:167:0x02e6, B:170:0x02ef, B:171:0x02f8, B:133:0x024d, B:135:0x0253, B:137:0x025d, B:139:0x0265, B:142:0x026f, B:144:0x0278, B:145:0x027c, B:147:0x028b, B:149:0x0291, B:151:0x029b, B:153:0x02a3, B:161:0x02b6, B:162:0x02c1, B:163:0x02c7, B:155:0x02aa, B:21:0x0046, B:24:0x0050), top: B:180:0x0038, inners: #2 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static android.content.Intent a(java.lang.String r17, int r18) throws java.net.URISyntaxException {
        /*
            Method dump skipped, instruction units count: 773
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.util.b.a(java.lang.String, int):android.content.Intent");
    }

    public static Pair<ServiceInfo, Class> a(Context context, Class cls) {
        try {
            ServiceInfo[] serviceInfoArr = context.getPackageManager().getPackageInfo(context.getPackageName(), 4).services;
            if (serviceInfoArr != null && serviceInfoArr.length > 0) {
                int length = serviceInfoArr.length;
                for (int i = 0; i < length; i++) {
                    ServiceInfo serviceInfo = serviceInfoArr[i];
                    try {
                        Class<?> cls2 = Class.forName(serviceInfo.name);
                        if (cls2 != cls && i.a(cls2, cls, 5)) {
                            return Pair.create(serviceInfo, cls2);
                        }
                    } catch (Throwable unused) {
                    }
                }
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.a.c.a().a(" findGtImplClassInManifest error = " + th.toString());
        }
        return Pair.create(null, null);
    }

    private static String a(Context context) {
        try {
            List<ResolveInfo> listQueryIntentActivities = context.getPackageManager().queryIntentActivities(context.getPackageManager().getLaunchIntentForPackage(context.getPackageName()), 0);
            return (listQueryIntentActivities == null || listQueryIntentActivities.size() <= 0) ? "" : listQueryIntentActivities.get(0).activityInfo.name;
        } catch (Throwable unused) {
            return "";
        }
    }

    private static String a(String str) {
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            return (String) cls.getDeclaredMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(cls, str);
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public static boolean a() {
        try {
            if (f2653a != null) {
                return f2653a.booleanValue();
            }
            f2653a = Boolean.valueOf((!"Xiaomi".equalsIgnoreCase(j.a()) && TextUtils.isEmpty(a("ro.miui.ui.version.name")) && TextUtils.isEmpty(a("ro.miui.ui.version.code"))) ? false : true);
            return f2653a.booleanValue();
        } catch (Throwable unused) {
            return false;
        }
    }

    public static synchronized boolean a(int i, Notification notification) {
        try {
            if (a()) {
                Object obj = notification.getClass().getDeclaredField("extraNotification").get(notification);
                obj.getClass().getDeclaredMethod("setMessageCount", Integer.TYPE).invoke(obj, Integer.valueOf(i));
                return true;
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static synchronized boolean a(int i, boolean z) {
        try {
            if (com.igexin.push.core.d.g == null) {
                return false;
            }
            String strA = j.a();
            if ("huawei".equalsIgnoreCase(strA) || "honor".equalsIgnoreCase(strA)) {
                int iIntValue = ((Integer) k.c(com.igexin.push.core.d.g, "hwBadgeNum", 0, new String[0])).intValue();
                if (!z) {
                    i += iIntValue;
                }
                k.b(com.igexin.push.core.d.g, "hwBadgeNum", Integer.valueOf(i), new String[0]);
                Bundle bundle = new Bundle();
                bundle.putString("package", com.igexin.push.core.d.e);
                bundle.putString("class", a(com.igexin.push.core.d.g));
                bundle.putInt("badgenumber", i);
                com.igexin.push.core.d.g.getContentResolver().call(Uri.parse("content://com.huawei.android.launcher.settings/badge/"), "change_badge", (String) null, bundle);
                return true;
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    private static Intent b(String str, int i) throws URISyntaxException {
        boolean z;
        int iLastIndexOf = str.lastIndexOf(35);
        if (iLastIndexOf < 0) {
            return new Intent("android.intent.action.VIEW", Uri.parse(str));
        }
        String str2 = null;
        int i2 = iLastIndexOf + 1;
        boolean z2 = true;
        if (str.regionMatches(i2, "action(", 0, 7)) {
            int i3 = i2 + 7;
            int iIndexOf = str.indexOf(41, i3);
            String strSubstring = str.substring(i3, iIndexOf);
            z = true;
            i2 = iIndexOf + 1;
            str2 = strSubstring;
        } else {
            z = false;
        }
        Intent intent = new Intent(str2);
        if (str.regionMatches(i2, "categories(", 0, 11)) {
            int i4 = i2 + 11;
            int iIndexOf2 = str.indexOf(41, i4);
            while (i4 < iIndexOf2) {
                int iIndexOf3 = str.indexOf(33, i4);
                if (iIndexOf3 < 0 || iIndexOf3 > iIndexOf2) {
                    iIndexOf3 = iIndexOf2;
                }
                if (i4 < iIndexOf3) {
                    intent.addCategory(str.substring(i4, iIndexOf3));
                }
                i4 = iIndexOf3 + 1;
            }
            i2 = iIndexOf2 + 1;
            z = true;
        }
        if (str.regionMatches(i2, "type(", 0, 5)) {
            int i5 = i2 + 5;
            int iIndexOf4 = str.indexOf(41, i5);
            intent.setType(str.substring(i5, iIndexOf4));
            i2 = iIndexOf4 + 1;
            z = true;
        }
        if (str.regionMatches(i2, "launchFlags(", 0, 12)) {
            int i6 = i2 + 12;
            int iIndexOf5 = str.indexOf(41, i6);
            intent.setFlags(Integer.decode(str.substring(i6, iIndexOf5)).intValue());
            if ((i & 4) == 0) {
                int i7 = Build.VERSION.SDK_INT >= 19 ? 67 : 3;
                if (Build.VERSION.SDK_INT >= 21) {
                    i7 |= 128;
                }
                intent.setFlags((~i7) & intent.getFlags());
            }
            i2 = iIndexOf5 + 1;
            z = true;
        }
        if (str.regionMatches(i2, "component(", 0, 10)) {
            int i8 = i2 + 10;
            int iIndexOf6 = str.indexOf(41, i8);
            int iIndexOf7 = str.indexOf(33, i8);
            if (iIndexOf7 >= 0 && iIndexOf7 < iIndexOf6) {
                intent.setComponent(new ComponentName(str.substring(i8, iIndexOf7), str.substring(iIndexOf7 + 1, iIndexOf6)));
            }
            i2 = iIndexOf6 + 1;
            z = true;
        }
        if (str.regionMatches(i2, "extras(", 0, 7)) {
            int i9 = i2 + 7;
            int iIndexOf8 = str.indexOf(41, i9);
            int i10 = -1;
            if (iIndexOf8 == -1) {
                throw new URISyntaxException(str, "EXTRA missing trailing ')'", i9);
            }
            if (intent.getExtras() == null) {
                intent.putExtras(new Bundle());
            }
            Bundle extras = intent.getExtras();
            while (i9 < iIndexOf8) {
                int iIndexOf9 = str.indexOf(61, i9);
                int i11 = i9 + 1;
                if (iIndexOf9 <= i11 || i9 >= iIndexOf8) {
                    throw new URISyntaxException(str, "EXTRA missing '='", i9);
                }
                char cCharAt = str.charAt(i9);
                String strSubstring2 = str.substring(i11, iIndexOf9);
                int i12 = iIndexOf9 + 1;
                int iIndexOf10 = str.indexOf(33, i12);
                if (iIndexOf10 == i10 || iIndexOf10 >= iIndexOf8) {
                    iIndexOf10 = iIndexOf8;
                }
                if (i12 >= iIndexOf10) {
                    throw new URISyntaxException(str, "EXTRA missing '!'", i12);
                }
                String strSubstring3 = str.substring(i12, iIndexOf10);
                if (cCharAt == 'B') {
                    extras.putBoolean(strSubstring2, Boolean.parseBoolean(strSubstring3));
                } else if (cCharAt == 'S') {
                    extras.putString(strSubstring2, Uri.decode(strSubstring3));
                } else if (cCharAt == 'f') {
                    extras.putFloat(strSubstring2, Float.parseFloat(strSubstring3));
                } else if (cCharAt == 'i') {
                    extras.putInt(strSubstring2, Integer.parseInt(strSubstring3));
                } else if (cCharAt == 'l') {
                    extras.putLong(strSubstring2, Long.parseLong(strSubstring3));
                } else {
                    if (cCharAt != 's') {
                        switch (cCharAt) {
                            case 'b':
                                extras.putByte(strSubstring2, Byte.parseByte(strSubstring3));
                                break;
                            case 'c':
                                extras.putChar(strSubstring2, Uri.decode(strSubstring3).charAt(0));
                                break;
                            case 'd':
                                try {
                                    extras.putDouble(strSubstring2, Double.parseDouble(strSubstring3));
                                } catch (NumberFormatException unused) {
                                    throw new URISyntaxException(str, "EXTRA value can't be parsed", iIndexOf10);
                                }
                                break;
                            default:
                                throw new URISyntaxException(str, "EXTRA has unknown type", iIndexOf10);
                        }
                        throw new URISyntaxException(str, "EXTRA value can't be parsed", iIndexOf10);
                    }
                    extras.putShort(strSubstring2, Short.parseShort(strSubstring3));
                }
                char cCharAt2 = str.charAt(iIndexOf10);
                if (cCharAt2 == ')') {
                    intent.putExtras(extras);
                } else {
                    if (cCharAt2 != '!') {
                        throw new URISyntaxException(str, "EXTRA missing '!'", iIndexOf10);
                    }
                    i9 = iIndexOf10 + 1;
                    i10 = -1;
                }
            }
            intent.putExtras(extras);
        } else {
            z2 = z;
        }
        intent.setData(z2 ? Uri.parse(str.substring(0, iLastIndexOf)) : Uri.parse(str));
        if (intent.getAction() != null) {
            return intent;
        }
        intent.setAction("android.intent.action.VIEW");
        return intent;
    }
}
