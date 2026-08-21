package cz.msebera.android.httpclient.impl.bootstrap;

import com.xiaomi.mipush.sdk.Constants;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicLong;

class ThreadFactoryImpl implements ThreadFactory {
    private final AtomicLong count;
    private final ThreadGroup group;
    private final String namePrefix;

    ThreadFactoryImpl(String str, ThreadGroup threadGroup) {
        this.namePrefix = str;
        this.group = threadGroup;
        this.count = new AtomicLong();
    }

    ThreadFactoryImpl(String str) {
        this(str, null);
    }

    @Override
    public Thread newThread(Runnable runnable) {
        return new Thread(this.group, runnable, this.namePrefix + Constants.ACCEPT_TIME_SEPARATOR_SERVER + this.count.incrementAndGet());
    }
}
