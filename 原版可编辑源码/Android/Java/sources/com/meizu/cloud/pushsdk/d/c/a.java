package com.meizu.cloud.pushsdk.d.c;

import com.meizu.cloud.pushsdk.d.a.c;
import com.meizu.cloud.pushsdk.d.f.d;
import com.meizu.cloud.pushsdk.d.f.e;
import com.meizu.cloud.pushsdk.notification.model.NotificationStyle;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class a {
    private final List<com.meizu.cloud.pushsdk.d.a.b> a;
    private final long b;
    private final String c;

    public abstract class a<T extends a<T>> {
        private List<com.meizu.cloud.pushsdk.d.a.b> a = new LinkedList();
        private long b = System.currentTimeMillis();
        private String c = e.b();

        protected abstract T a();

        public T a(long j) {
            this.b = j;
            return (T) a();
        }
    }

    protected a(a<?> aVar) {
        d.a(((a) aVar).a);
        d.a(((a) aVar).c);
        d.a(!((a) aVar).c.isEmpty(), "eventId cannot be empty");
        this.a = ((a) aVar).a;
        this.b = ((a) aVar).b;
        this.c = ((a) aVar).c;
    }

    protected c a(c cVar) {
        cVar.a(NotificationStyle.EXPANDABLE_IMAGE_URL, c());
        cVar.a("ts", Long.toString(b()));
        return cVar;
    }

    public List<com.meizu.cloud.pushsdk.d.a.b> a() {
        return new ArrayList(this.a);
    }

    public long b() {
        return this.b;
    }

    public String c() {
        return this.c;
    }
}
