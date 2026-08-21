package com.meizu.cloud.pushsdk.handler.a;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import android.util.SparseArray;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.meizu.cloud.pushsdk.handler.MessageV3;
import com.meizu.cloud.pushsdk.handler.MzPushMessage;
import com.meizu.cloud.pushsdk.handler.a.c.e;
import com.meizu.cloud.pushsdk.util.MinSdkChecker;
import com.meizu.cloud.pushsdk.util.MzSystemUtils;
import com.tkay.basead.b.a;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public abstract class a<T> implements com.meizu.cloud.pushsdk.handler.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private com.meizu.cloud.pushsdk.handler.a f4598a;
    private Context b;
    private SparseArray<String> c;

    protected a(Context context, com.meizu.cloud.pushsdk.handler.a aVar) {
        if (context == null) {
            throw new IllegalArgumentException("Context must not be null.");
        }
        this.b = context.getApplicationContext();
        this.f4598a = aVar;
        SparseArray<String> sparseArray = new SparseArray<>();
        this.c = sparseArray;
        sparseArray.put(2, "MESSAGE_TYPE_PUSH_SERVICE_V2");
        this.c.put(4, "MESSAGE_TYPE_PUSH_SERVICE_V3");
        this.c.put(16, "MESSAGE_TYPE_REGISTER");
        this.c.put(32, "MESSAGE_TYPE_UNREGISTER");
        this.c.put(8, "MESSAGE_TYPE_THROUGH");
        this.c.put(64, "MESSAGE_TYPE_NOTIFICATION_CLICK");
        this.c.put(128, "MESSAGE_TYPE_NOTIFICATION_DELETE");
        this.c.put(256, "MESSAGE_TYPE_PUSH_SWITCH_STATUS");
        this.c.put(512, "MESSAGE_TYPE_PUSH_REGISTER_STATUS");
        this.c.put(2048, "MESSAGE_TYPE_PUSH_SUBTAGS_STATUS");
        this.c.put(1024, "MESSAGE_TYPE_PUSH_UNREGISTER_STATUS");
        this.c.put(4096, "MESSAGE_TYPE_PUSH_SUBALIAS_STATUS");
        this.c.put(8192, "MESSAGE_TYPE_SCHEDULE_NOTIFICATION");
        this.c.put(16384, "MESSAGE_TYPE_RECEIVE_NOTIFY_MESSAGE");
        this.c.put(32768, "MESSAGE_TYPE_NOTIFICATION_STATE");
        this.c.put(65536, "MESSAGE_TYPE_UPLOAD_FILE_LOG");
        this.c.put(131072, "MESSAGE_TYPE_NOTIFICATION_ARRIVED");
        this.c.put(262144, "MESSAGE_TYPE_NOTIFICATION_WITHDRAW");
        this.c.put(524288, "MESSAGE_TYPE_BRIGHT_NOTIFICATION");
        this.c.put(1048576, "MESSAGE_TYPE_NOTIFICATION_CLOSE");
    }

    private String a(int i) {
        return this.c.get(i);
    }

    private boolean a(String str, MessageV3 messageV3, String str2) {
        String str3;
        if (!TextUtils.isEmpty(str)) {
            str3 = "sa, public key not empty";
        } else if (!"private".equals(str2)) {
            str3 = "sa, message not click method";
        } else {
            if (com.meizu.cloud.pushsdk.util.b.l(d(), messageV3.getPackageName())) {
                com.meizu.cloud.pushsdk.util.b.c(d(), messageV3.getPackageName(), false);
                return true;
            }
            str3 = "sa, not first request";
        }
        DebugLogger.i("AbstractMessageHandler", str3);
        return false;
    }

    private boolean b(String str, MessageV3 messageV3, String str2) {
        if (TextUtils.isEmpty(str)) {
            DebugLogger.e("AbstractMessageHandler", "security check fail, public key is null");
            return false;
        }
        String strA = com.meizu.cloud.pushsdk.util.c.a(str, str2);
        DebugLogger.i("AbstractMessageHandler", "decrypt sign: " + strA);
        boolean zA = com.meizu.cloud.pushsdk.handler.a.c.e.a(strA, messageV3);
        DebugLogger.i("AbstractMessageHandler", "check public key result: " + zA);
        return zA;
    }

    private String e() {
        String strB = null;
        for (int i = 0; i < 2; i++) {
            strB = b();
            if (!TextUtils.isEmpty(strB)) {
                break;
            }
        }
        return strB;
    }

    protected com.meizu.cloud.pushsdk.notification.c a(T t) {
        return null;
    }

    protected void a(Context context, MessageV3 messageV3) {
        com.meizu.cloud.pushsdk.handler.a.a.a aVarB;
        com.meizu.cloud.pushsdk.notification.model.a aVarA;
        if (messageV3.getAdvertisementOption() == null || TextUtils.isEmpty(messageV3.getAdvertisementOption().getAdPackage()) || (aVarB = com.meizu.cloud.pushsdk.b.a(context).b()) == null || (aVarA = com.meizu.cloud.pushsdk.notification.model.a.a(messageV3)) == null) {
            return;
        }
        aVarB.a(aVarA.a());
    }

    protected void a(MessageV3 messageV3) {
        if (messageV3 == null || messageV3.getAdvertisementOption() == null || TextUtils.isEmpty(messageV3.getAdvertisementOption().getAdPackage())) {
            if (!MinSdkChecker.isSupportSetDrawableSmallIcon()) {
                c().b(d(), MzPushMessage.fromMessageV3(messageV3));
                return;
            }
            if (MzSystemUtils.isRunningProcess(d(), messageV3.getUploadDataPackageName())) {
                DebugLogger.i("AbstractMessageHandler", "send notification arrived message to " + messageV3.getUploadDataPackageName());
                Intent intent = new Intent();
                if (MinSdkChecker.isSupportTransmitMessageValue(this.b, messageV3.getUploadDataPackageName())) {
                    intent.putExtra(PushConstants.MZ_MESSAGE_VALUE, com.meizu.cloud.pushsdk.handler.d.a(messageV3));
                } else {
                    intent.putExtra(PushConstants.MZ_PUSH_PRIVATE_MESSAGE, messageV3);
                }
                intent.putExtra("method", "notification_arrived");
                MzSystemUtils.sendMessageFromBroadcast(d(), intent, PushConstants.MZ_PUSH_ON_MESSAGE_ACTION, messageV3.getUploadDataPackageName());
            }
        }
    }

    protected abstract void a(T t, com.meizu.cloud.pushsdk.notification.c cVar);

    protected boolean a(int i, String str) {
        boolean zH = true;
        if (i == 0) {
            zH = com.meizu.cloud.pushsdk.util.b.e(d(), str);
        } else if (i == 1) {
            zH = com.meizu.cloud.pushsdk.util.b.h(d(), str);
        }
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        sb.append(i == 0 ? " canNotificationMessage " : " canThroughMessage ");
        sb.append(zH);
        DebugLogger.i("AbstractMessageHandler", sb.toString());
        return zH;
    }

    protected final boolean a(MessageV3 messageV3, String str) {
        String strA = com.meizu.cloud.pushsdk.handler.a.c.e.a(messageV3);
        if (TextUtils.isEmpty(strA)) {
            DebugLogger.i("AbstractMessageHandler", "message does not contain signature field");
            return false;
        }
        String strK = com.meizu.cloud.pushsdk.util.b.k(d(), messageV3.getPackageName());
        DebugLogger.i("AbstractMessageHandler", "local public key is: " + strK);
        if (a(strK, messageV3, str)) {
            DebugLogger.i("AbstractMessageHandler", "message special approval no check");
            return true;
        }
        if (b(strK, messageV3, strA)) {
            DebugLogger.i("AbstractMessageHandler", "security check passed");
            return true;
        }
        String strE = e();
        DebugLogger.i("AbstractMessageHandler", "network request public key: " + strE);
        if (!b(strE, messageV3, strA)) {
            DebugLogger.e("AbstractMessageHandler", "security check fail");
            return false;
        }
        com.meizu.cloud.pushsdk.util.b.k(d(), messageV3.getPackageName(), strE);
        DebugLogger.i("AbstractMessageHandler", "security check passed");
        return true;
    }

    protected boolean a(T t, String str) {
        return true;
    }

    protected boolean a(String str) {
        try {
            return d().getPackageName().equals(new JSONObject(str).getString(com.tkay.expressad.videocommon.e.b.u));
        } catch (Exception unused) {
            DebugLogger.e("AbstractMessageHandler", "parse notification error");
            return false;
        }
    }

    protected String b() {
        return new e.a((String) com.meizu.cloud.pushsdk.c.a.a(PushConstants.GET_PUBLIC_KEY).a().a().a()).a();
    }

    public String b(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str).getJSONObject(com.tkay.expressad.d.a.b.bU);
            return (!jSONObject.has(a.C0386a.A) || TextUtils.isEmpty(jSONObject.getString(a.C0386a.A))) ? "" : jSONObject.getString(a.C0386a.A);
        } catch (Exception unused) {
            DebugLogger.e("AbstractMessageHandler", "parse desk top json error");
            return "";
        }
    }

    protected void b(MessageV3 messageV3) {
        if (!MinSdkChecker.isSupportSetDrawableSmallIcon()) {
            c(messageV3);
            return;
        }
        com.meizu.cloud.pushsdk.notification.model.a aVarA = com.meizu.cloud.pushsdk.notification.model.a.a(messageV3);
        if (aVarA != null) {
            DebugLogger.e("AbstractMessageHandler", "delete notifyId " + aVarA.a() + " notifyKey " + aVarA.b());
            if (TextUtils.isEmpty(aVarA.b())) {
                com.meizu.cloud.pushsdk.platform.a.b.a(d()).a(messageV3.getUploadDataPackageName(), aVarA.a());
            } else {
                com.meizu.cloud.pushsdk.platform.a.b.a(d()).a(messageV3.getUploadDataPackageName(), aVarA.b());
            }
        }
    }

    protected void b(T t) {
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x00a9 A[ADDED_TO_REGION] */
    @Override // com.meizu.cloud.pushsdk.handler.c
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean b(android.content.Intent r8) {
        /*
            r7 = this;
            boolean r0 = r7.a(r8)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "current message Type "
            r0.append(r2)
            int r2 = r7.a()
            java.lang.String r2 = r7.a(r2)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "AbstractMessageHandler"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r0)
            java.lang.Object r0 = r7.c(r8)
            java.lang.String r8 = r7.k(r8)
            boolean r8 = r7.a(r0, r8)
            if (r8 != 0) goto L3a
            java.lang.String r8 = "invalid push message"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r8)
            return r1
        L3a:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r3 = "current Handler message "
            r8.append(r3)
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r8)
            r7.b(r0)
            int r8 = r7.d(r0)
            r3 = 1
            if (r8 == 0) goto L89
            if (r8 == r3) goto L83
            r4 = 2
            if (r8 == r4) goto L80
            r4 = 3
            if (r8 == r4) goto L74
            r4 = 4
            if (r8 == r4) goto L6b
            r3 = 5
            if (r8 == r3) goto L68
        L66:
            r3 = r1
            goto L8f
        L68:
            java.lang.String r8 = "ad cannot show message"
            goto L85
        L6b:
            java.lang.String r8 = "bright notification"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r8)
            r7.f(r0)
            goto L7c
        L74:
            java.lang.String r8 = "schedule notification"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r8)
            r7.e(r0)
        L7c:
            r6 = r3
            r3 = r1
            r1 = r6
            goto L8f
        L80:
            java.lang.String r8 = "notification on time ,show message"
            goto L8b
        L83:
            java.lang.String r8 = "expire notification, don't show message"
        L85:
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r8)
            goto L66
        L89:
            java.lang.String r8 = "schedule send message off, send message directly"
        L8b:
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r8)
            r1 = r3
        L8f:
            boolean r8 = r7.g(r0)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "can send message "
            r4.append(r5)
            r4.append(r8)
            java.lang.String r4 = r4.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r4)
            if (r1 == 0) goto Lbc
            if (r3 == 0) goto Lbc
            if (r8 == 0) goto Lbc
            com.meizu.cloud.pushsdk.notification.c r8 = r7.a(r0)
            r7.a(r0, r8)
            r7.c(r0)
            java.lang.String r8 = "send message end "
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r8)
        Lbc:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.meizu.cloud.pushsdk.handler.a.a.b(android.content.Intent):boolean");
    }

    protected com.meizu.cloud.pushsdk.handler.a c() {
        return this.f4598a;
    }

    protected abstract T c(Intent intent);

    protected void c(MessageV3 messageV3) {
        com.meizu.cloud.pushsdk.notification.model.a aVarA = com.meizu.cloud.pushsdk.notification.model.a.a(messageV3);
        if (aVarA != null) {
            DebugLogger.i("AbstractMessageHandler", "delete notifyKey " + aVarA.b() + " notifyId " + aVarA.a());
            if (TextUtils.isEmpty(aVarA.b())) {
                com.meizu.cloud.pushsdk.notification.c.b.c(d(), messageV3.getUploadDataPackageName(), aVarA.a());
            } else {
                com.meizu.cloud.pushsdk.notification.c.b.a(d(), messageV3.getUploadDataPackageName(), aVarA.b());
            }
        }
    }

    protected void c(T t) {
    }

    protected int d(T t) {
        return 0;
    }

    protected Context d() {
        return this.b;
    }

    protected String d(Intent intent) {
        String stringExtra = intent != null ? intent.getStringExtra(PushConstants.MZ_PUSH_MESSAGE_STATISTICS_IMEI_KEY) : null;
        if (!TextUtils.isEmpty(stringExtra)) {
            return stringExtra;
        }
        String strA = com.meizu.cloud.pushsdk.b.c.a(d());
        DebugLogger.e("AbstractMessageHandler", "force get deviceId " + strA);
        return strA;
    }

    protected String e(Intent intent) {
        return intent.getStringExtra(PushConstants.EXTRA_APP_PUSH_TASK_ID);
    }

    protected void e(T t) {
    }

    protected String f(Intent intent) {
        return intent.getStringExtra(PushConstants.EXTRA_APP_PUSH_SEQ_ID);
    }

    protected void f(T t) {
    }

    protected String g(Intent intent) {
        String stringExtra = intent.getStringExtra(PushConstants.EXTRA_APP_PUSH_SERVICE_DEFAULT_PACKAGE_NAME);
        return TextUtils.isEmpty(stringExtra) ? d().getPackageName() : stringExtra;
    }

    protected boolean g(T t) {
        return true;
    }

    protected String h(Intent intent) {
        String stringExtra = intent.getStringExtra(PushConstants.EXTRA_APP_PUSH_TASK_TIMES_TAMP);
        DebugLogger.i("AbstractMessageHandler", "receive push timestamp from pushservice " + stringExtra);
        return TextUtils.isEmpty(stringExtra) ? String.valueOf(System.currentTimeMillis() / 1000) : stringExtra;
    }

    protected boolean i(Intent intent) {
        boolean booleanExtra = intent.getBooleanExtra(PushConstants.MZ_PUSH_WHITE_LIST, false);
        DebugLogger.i("AbstractMessageHandler", "receive push whiteList from pushservice " + booleanExtra);
        return booleanExtra;
    }

    protected long j(Intent intent) {
        long longExtra = intent.getLongExtra(PushConstants.MZ_PUSH_DELAYED_REPORT_MILLIS, 0L);
        DebugLogger.i("AbstractMessageHandler", "receive push delayedReportMillis from pushservice " + longExtra);
        return longExtra;
    }

    protected String k(Intent intent) {
        return intent.getStringExtra("method");
    }
}
