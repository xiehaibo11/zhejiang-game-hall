package com.meizu.cloud.pushsdk.d.c;

import com.meizu.cloud.pushsdk.d.a.c;
import com.meizu.cloud.pushsdk.d.f.d;
import com.meizu.cloud.pushsdk.d.f.e;
import com.meizu.cloud.pushsdk.notification.model.NotificationStyle;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final List<com.meizu.cloud.pushsdk.d.a.b> f4580a;
    private final long b;
    private final String c;

    /* JADX INFO: renamed from: com.meizu.cloud.pushsdk.d.c.a$a, reason: collision with other inner class name */
    public abstract class AbstractC0321a<T extends AbstractC0321a<T>> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private List<com.meizu.cloud.pushsdk.d.a.b> f4581a = new LinkedList();
        private long b = System.currentTimeMillis();
        private String c = e.b();

        protected abstract T a();

        public T a(long j) {
            this.b = j;
            return (T) a();
        }
    }

    protected a(AbstractC0321a<?> abstractC0321a) {
        d.a(((AbstractC0321a) abstractC0321a).f4581a);
        d.a(((AbstractC0321a) abstractC0321a).c);
        d.a(!((AbstractC0321a) abstractC0321a).c.isEmpty(), "eventId cannot be empty");
        this.f4580a = ((AbstractC0321a) abstractC0321a).f4581a;
        this.b = ((AbstractC0321a) abstractC0321a).b;
        this.c = ((AbstractC0321a) abstractC0321a).c;
    }

    protected c a(c cVar) {
        cVar.a(NotificationStyle.EXPANDABLE_IMAGE_URL, c());
        cVar.a("ts", Long.toString(b()));
        return cVar;
    }

    public List<com.meizu.cloud.pushsdk.d.a.b> a() {
        return new ArrayList(this.f4580a);
    }

    public long b() {
        return this.b;
    }

    public String c() {
        return this.c;
    }
}
