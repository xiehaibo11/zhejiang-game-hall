package com.meizu.cloud.pushsdk.handler.a.c;

import android.text.TextUtils;
import com.meizu.cloud.pushsdk.constants.PushConstants;

/* JADX INFO: loaded from: classes3.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4605a;
    private String b;
    private String c;
    private String d;

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f4606a;
        private String b;
        private String c;
        private String d;

        public a a(String str) {
            this.f4606a = str;
            return this;
        }

        public d a() {
            return new d(this);
        }

        public a b(String str) {
            this.b = str;
            return this;
        }

        public a c(String str) {
            this.c = str;
            return this;
        }

        public a d(String str) {
            this.d = str;
            return this;
        }
    }

    public d() {
    }

    public d(a aVar) {
        this.f4605a = !TextUtils.isEmpty(aVar.f4606a) ? aVar.f4606a : "";
        this.b = !TextUtils.isEmpty(aVar.b) ? aVar.b : "";
        this.c = !TextUtils.isEmpty(aVar.c) ? aVar.c : "";
        this.d = TextUtils.isEmpty(aVar.d) ? "" : aVar.d;
    }

    public static a a() {
        return new a();
    }

    public String b() {
        com.meizu.cloud.pushsdk.d.a.c cVar = new com.meizu.cloud.pushsdk.d.a.c();
        cVar.a("task_id", this.f4605a);
        cVar.a(PushConstants.SEQ_ID, this.b);
        cVar.a(PushConstants.PUSH_TIMESTAMP, this.c);
        cVar.a("device_id", this.d);
        return cVar.toString();
    }

    public String c() {
        return this.f4605a;
    }

    public String d() {
        return this.b;
    }

    public String e() {
        return this.c;
    }

    public String f() {
        return this.d;
    }
}
