package com.alipay.sdk.m.e;

import java.lang.reflect.Type;
import java.util.Date;

public final class c implements i, j {
    @Override
    public final Object a(Object obj) {
        return Long.valueOf(((Date) obj).getTime());
    }

    @Override
    public final Object a(Object obj, Type type) {
        return new Date(((Long) obj).longValue());
    }

    @Override
    public final boolean a(Class<?> cls) {
        return Date.class.isAssignableFrom(cls);
    }
}
