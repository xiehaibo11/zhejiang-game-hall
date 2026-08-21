package com.huawei.agconnect.core;

import com.huawei.agconnect.annotation.Singleton;
import java.lang.reflect.Modifier;

public class Service {
    private final Class<?> a;
    private final Class<?> b;
    private final Object c;
    private boolean d;

    public static class Builder {
        Class<?> a;
        Class<?> b;
        Object c;
        private boolean d;

        public Service build() {
            Service service;
            if (this.a == null) {
                throw new IllegalArgumentException("the interface parameter cannot be NULL");
            }
            Class<?> cls = this.b;
            if (cls != null) {
                if (cls.isInterface() || !Modifier.isPublic(this.b.getModifiers())) {
                    throw new IllegalArgumentException("the clazz parameter cant be interface type or not public");
                }
                service = new Service((Class) this.a, (Class) this.b);
            } else {
                if (this.c == null) {
                    throw new IllegalArgumentException("the clazz or object parameter must set one");
                }
                service = new Service(this.a, this.c);
            }
            service.d = this.d;
            return service;
        }

        public Builder isSingleton(boolean z) {
            this.d = z;
            return this;
        }

        public Builder setClass(Class<?> cls) {
            this.b = cls;
            return this;
        }

        public Builder setInterface(Class<?> cls) {
            this.a = cls;
            return this;
        }

        public Builder setObject(Object obj) {
            this.c = obj;
            return this;
        }
    }

    private Service(Class<?> cls, Class<?> cls2) {
        this.a = cls;
        this.b = cls2;
        this.c = null;
    }

    private Service(Class<?> cls, Object obj) {
        this.a = cls;
        this.b = null;
        this.c = obj;
    }

    public static Builder builder(Class<?> cls) {
        return new Builder().setInterface(cls).setClass(cls).isSingleton(cls.isAnnotationPresent(Singleton.class));
    }

    public static Builder builder(Class<?> cls, Class<?> cls2) {
        return new Builder().setInterface(cls).setClass(cls2).isSingleton(cls2.isAnnotationPresent(Singleton.class));
    }

    public static Builder builder(Class<?> cls, Object obj) {
        return new Builder().setInterface(cls).setObject(obj).isSingleton(true);
    }

    public Object getInstance() {
        return this.c;
    }

    public Class<?> getInterface() {
        return this.a;
    }

    public Class<?> getType() {
        return this.b;
    }

    public boolean isSingleton() {
        return this.d;
    }
}
