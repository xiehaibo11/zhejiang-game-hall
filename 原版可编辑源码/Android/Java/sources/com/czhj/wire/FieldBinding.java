package com.czhj.wire;

import com.czhj.wire.Message;
import com.czhj.wire.Message.Builder;
import com.czhj.wire.WireField;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.List;
import java.util.Map;

final class FieldBinding<M extends Message<M, B>, B extends Message.Builder<M, B>> {
    private final String a;
    private final String b;
    private final Field c;
    private final Field d;
    private final Method e;
    private ProtoAdapter<?> f;
    private ProtoAdapter<?> g;
    private ProtoAdapter<Object> h;
    public final WireField.Label label;
    public final String name;
    public final boolean redacted;
    public final int tag;

    FieldBinding(WireField wireField, Field field, Class<B> cls) {
        this.label = wireField.label();
        this.name = field.getName();
        this.tag = wireField.tag();
        this.a = wireField.keyAdapter();
        this.b = wireField.adapter();
        this.redacted = wireField.redacted();
        this.c = field;
        this.d = a((Class<?>) cls, this.name);
        this.e = a(cls, this.name, field.getType());
    }

    private static Field a(Class<?> cls, String str) {
        try {
            return cls.getField(str);
        } catch (NoSuchFieldException unused) {
            throw new AssertionError("No builder field " + cls.getName() + "." + str);
        }
    }

    private static Method a(Class<?> cls, String str, Class<?> cls2) {
        try {
            return cls.getMethod(str, cls2);
        } catch (NoSuchMethodException unused) {
            throw new AssertionError("No builder method " + cls.getName() + "." + str + "(" + cls2.getName() + ")");
        }
    }

    Object a(B b) {
        try {
            return this.d.get(b);
        } catch (IllegalAccessException e) {
            throw new AssertionError(e);
        }
    }

    Object a(M m) {
        try {
            return this.c.get(m);
        } catch (IllegalAccessException e) {
            throw new AssertionError(e);
        }
    }

    void a(B b, Object obj) {
        if (this.label.a()) {
            ((List) a(b)).add(obj);
        } else if (this.a.isEmpty()) {
            b(b, obj);
        } else {
            ((Map) a(b)).putAll((Map) obj);
        }
    }

    boolean a() {
        return !this.a.isEmpty();
    }

    ProtoAdapter<?> b() {
        ProtoAdapter<?> protoAdapter = this.f;
        if (protoAdapter != null) {
            return protoAdapter;
        }
        ProtoAdapter<?> protoAdapter2 = ProtoAdapter.get(this.b);
        this.f = protoAdapter2;
        return protoAdapter2;
    }

    void b(B b, Object obj) {
        try {
            if (this.label.c()) {
                this.e.invoke(b, obj);
            } else {
                this.d.set(b, obj);
            }
        } catch (Throwable th) {
            throw new AssertionError(th);
        }
    }

    ProtoAdapter<?> c() {
        ProtoAdapter<?> protoAdapter = this.g;
        if (protoAdapter != null) {
            return protoAdapter;
        }
        ProtoAdapter<?> protoAdapter2 = ProtoAdapter.get(this.a);
        this.g = protoAdapter2;
        return protoAdapter2;
    }

    ProtoAdapter<Object> d() {
        ProtoAdapter<Object> protoAdapter = this.h;
        if (protoAdapter != null) {
            return protoAdapter;
        }
        ProtoAdapter<?> protoAdapterNewMapAdapter = a() ? ProtoAdapter.newMapAdapter(c(), b()) : b().withLabel(this.label);
        this.h = protoAdapterNewMapAdapter;
        return protoAdapterNewMapAdapter;
    }
}
