package com.qihoo360.replugin.utils;

import android.content.Context;
import com.huawei.hms.framework.common.ContainerUtils;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.lang.reflect.AccessibleObject;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.ArrayList;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public final class ReflectUtils {
    public static Class<?> getClass(String str) throws ClassNotFoundException {
        return Class.forName(str);
    }

    public static <T> T invokeConstructor(Class<T> cls, Class[] clsArr, Object... objArr) throws IllegalAccessException, NoSuchMethodException, InstantiationException, InvocationTargetException {
        Constructor<T> constructor = cls.getConstructor(clsArr);
        if (constructor == null) {
            return null;
        }
        constructor.setAccessible(true);
        return constructor.newInstance(objArr);
    }

    public static Field getField(Class<?> cls, String str) {
        for (Class<?> superclass = cls; superclass != null; superclass = superclass.getSuperclass()) {
            try {
                Field declaredField = superclass.getDeclaredField(str);
                setAccessible(declaredField, true);
                return declaredField;
            } catch (NoSuchFieldException unused) {
            }
        }
        Field field = null;
        for (Class<?> cls2 : cls.getInterfaces()) {
            try {
                Field field2 = cls2.getField(str);
                Validate.isTrue(field == null, "Reference to field %s is ambiguous relative to %s; a matching field exists on two or more implemented interfaces.", str, cls);
                field = field2;
            } catch (NoSuchFieldException unused2) {
            }
        }
        return field;
    }

    public static Object readStaticField(Class<?> cls, String str) throws IllegalAccessException, NoSuchFieldException {
        return readField(cls, null, str);
    }

    public static Object readField(Object obj, String str) throws IllegalAccessException, NoSuchFieldException {
        return readField(obj.getClass(), obj, str);
    }

    public static Object readField(Class<?> cls, Object obj, String str) throws IllegalAccessException, NoSuchFieldException {
        return readField(getField(cls, str), obj);
    }

    public static Object readField(Field field, Object obj) throws IllegalAccessException {
        return field.get(obj);
    }

    public static void writeField(Object obj, String str, Object obj2) throws IllegalAccessException, NoSuchFieldException {
        writeField(obj.getClass(), obj, str, obj2);
    }

    public static void writeField(Class<?> cls, Object obj, String str, Object obj2) throws IllegalAccessException, NoSuchFieldException {
        writeField(getField(cls, str), obj, obj2);
    }

    public static void writeField(Field field, Object obj, Object obj2) throws IllegalAccessException {
        field.set(obj, obj2);
    }

    public static List<Field> getAllFieldsList(Class<?> cls) {
        Validate.isTrue(cls != null, "The class must not be null", new Object[0]);
        ArrayList arrayList = new ArrayList();
        while (cls != null) {
            for (Field field : cls.getDeclaredFields()) {
                arrayList.add(field);
            }
            cls = cls.getSuperclass();
        }
        return arrayList;
    }

    /* JADX WARN: Finally extract failed */
    public static void removeFieldFinalModifier(Field field) {
        Validate.isTrue(field != null, "The field must not be null", new Object[0]);
        try {
            if (Modifier.isFinal(field.getModifiers())) {
                Field declaredField = Field.class.getDeclaredField("modifiers");
                boolean z = !declaredField.isAccessible();
                if (z) {
                    declaredField.setAccessible(true);
                }
                try {
                    declaredField.setInt(field, field.getModifiers() & (-17));
                    if (z) {
                        declaredField.setAccessible(false);
                    }
                } catch (Throwable th) {
                    if (z) {
                        declaredField.setAccessible(false);
                    }
                    throw th;
                }
            }
        } catch (IllegalAccessException | NoSuchFieldException unused) {
        }
    }

    public static Method getMethod(Class<?> cls, String str, Class<?>... clsArr) {
        for (Class<?> superclass = cls; superclass != null; superclass = superclass.getSuperclass()) {
            try {
                Method declaredMethod = superclass.getDeclaredMethod(str, clsArr);
                setAccessible(declaredMethod, true);
                return declaredMethod;
            } catch (NoSuchMethodException unused) {
            }
        }
        Method method = null;
        for (Class<?> cls2 : cls.getInterfaces()) {
            try {
                Method method2 = cls2.getMethod(str, clsArr);
                Validate.isTrue(method == null, "Reference to field %s is ambiguous relative to %s; a matching field exists on two or more implemented interfaces.", str, cls);
                method = method2;
            } catch (NoSuchMethodException unused2) {
            }
        }
        return method;
    }

    public static Object invokeMethod(Object obj, String str, Class<?>[] clsArr, Object... objArr) throws IllegalAccessException, NoSuchMethodException, InvocationTargetException {
        return getMethod(obj.getClass(), str, clsArr).invoke(objArr, new Object[0]);
    }

    public static Object invokeMethod(ClassLoader classLoader, String str, String str2, Object obj, Class<?>[] clsArr, Object... objArr) throws IllegalAccessException, NoSuchMethodException, ClassNotFoundException, InvocationTargetException {
        Class<?> cls;
        Method method;
        if (obj == null || (cls = Class.forName(str, false, classLoader)) == null || (method = cls.getMethod(str2, clsArr)) == null) {
            return null;
        }
        method.setAccessible(true);
        return method.invoke(obj, objArr);
    }

    public static void setAccessible(AccessibleObject accessibleObject, boolean z) {
        if (accessibleObject.isAccessible() != z) {
            accessibleObject.setAccessible(z);
        }
    }

    public static final void dumpObject(Object obj, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        try {
            Class<?> superclass = obj.getClass();
            do {
                printWriter.println("c=" + superclass.getName());
                for (Field field : superclass.getDeclaredFields()) {
                    boolean zIsAccessible = field.isAccessible();
                    if (!zIsAccessible) {
                        field.setAccessible(true);
                    }
                    Object obj2 = field.get(obj);
                    printWriter.print(field.getName());
                    printWriter.print(ContainerUtils.KEY_VALUE_DELIMITER);
                    if (obj2 != null) {
                        printWriter.println(obj2.toString());
                    } else {
                        printWriter.println("null");
                    }
                    if (!zIsAccessible) {
                        field.setAccessible(zIsAccessible);
                    }
                }
                superclass = superclass.getSuperclass();
                if (superclass == null || superclass.equals(Object.class)) {
                    return;
                }
            } while (!superclass.equals(Context.class));
        } catch (Throwable th) {
            LogRelease.e(LogDebug.MISC_TAG, th.getMessage(), th);
        }
    }
}
