package com.google.gson.internal.bind;

import com.google.gson.FieldNamingStrategy;
import com.google.gson.Gson;
import com.google.gson.JsonIOException;
import com.google.gson.JsonParseException;
import com.google.gson.JsonSyntaxException;
import com.google.gson.ReflectionAccessFilter;
import com.google.gson.TypeAdapter;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.internal.$Gson$Types;
import com.google.gson.internal.ConstructorConstructor;
import com.google.gson.internal.Excluder;
import com.google.gson.internal.ObjectConstructor;
import com.google.gson.internal.Primitives;
import com.google.gson.internal.ReflectionAccessFilterHelper;
import com.google.gson.internal.reflect.ReflectionHelper;
import com.google.gson.reflect.TypeToken;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonToken;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.lang.reflect.AccessibleObject;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Member;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public final class ReflectiveTypeAdapterFactory implements TypeAdapterFactory {
    private final ConstructorConstructor constructorConstructor;
    private final Excluder excluder;
    private final FieldNamingStrategy fieldNamingPolicy;
    private final JsonAdapterAnnotationTypeAdapterFactory jsonAdapterFactory;
    private final List<ReflectionAccessFilter> reflectionFilters;

    public static abstract class Adapter<T, A> extends TypeAdapter<T> {
        final Map<String, BoundField> boundFields;

        abstract A createAccumulator();

        abstract T finalize(A r1);

        abstract void readField(A r1, JsonReader r2, BoundField r3) throws IllegalAccessException, IOException;

        Adapter(Map<String, BoundField> r1) {
            this.boundFields = r1;
        }

        @Override
        public void write(JsonWriter r3, T r4) throws IOException {
            if (r4 != null) goto L5;
            r3.nullValue();
            return;
        L5:
            r3.beginObject();
            Iterator<BoundField> r0 = this.boundFields.values().iterator();     // Catch: IllegalAccessException -> L13
        L7:
            if (r0.hasNext() == false) goto L11;
            r0.next().write(r3, r4);     // Catch: IllegalAccessException -> L13
            goto L7
        L11:
            r3.endObject();
            return;
        L13:
            e = move-exception;
            throw ReflectionHelper.createExceptionForUnexpectedIllegalAccess(e);
        }

        @Override
        public T read(JsonReader r4) throws IOException {
            if (r4.peek() != JsonToken.NULL) goto L6;
            r4.nextNull();
            return null;
        L6:
            A r0 = createAccumulator();
            r4.beginObject();     // Catch: IllegalAccessException -> L20 IllegalStateException -> L23
        L8:
            if (r4.hasNext() == false) goto L18;
            String r1 = r4.nextName();     // Catch: IllegalAccessException -> L20 IllegalStateException -> L23
            BoundField r12 = this.boundFields.get(r1);     // Catch: IllegalAccessException -> L20 IllegalStateException -> L23
            if (r12 == null) goto L16;
            if (r12.deserialized == false) goto L16;
            readField(r0, r4, r12);     // Catch: IllegalAccessException -> L20 IllegalStateException -> L23
        L16:
            r4.skipValue();     // Catch: IllegalAccessException -> L20 IllegalStateException -> L23
            goto L8
        L18:
            r4.endObject();
            return finalize(r0);
        L20:
            e = move-exception;
            throw ReflectionHelper.createExceptionForUnexpectedIllegalAccess(e);
        L23:
            e = move-exception;
            throw new JsonSyntaxException(e);
        }
    }

    static abstract class BoundField {
        final boolean deserialized;
        final Field field;
        final String fieldName;
        final String name;
        final boolean serialized;

        abstract void readIntoArray(JsonReader r1, int r2, Object[] r3) throws IOException, JsonParseException;

        abstract void readIntoField(JsonReader r1, Object r2) throws IOException, IllegalAccessException;

        abstract void write(JsonWriter r1, Object r2) throws IOException, IllegalAccessException;

        protected BoundField(String r1, Field r2, boolean r3, boolean r4) {
            this.name = r1;
            this.field = r2;
            this.fieldName = r2.getName();
            this.serialized = r3;
            this.deserialized = r4;
        }
    }

    private static final class FieldReflectionAdapter<T> extends Adapter<T, T> {
        private final ObjectConstructor<T> constructor;

        @Override
        T finalize(T r1) {
            return r1;
        }

        FieldReflectionAdapter(ObjectConstructor<T> r1, Map<String, BoundField> r2) {
            super(r2);
            this.constructor = r1;
        }

        @Override
        T createAccumulator() {
            return this.constructor.construct();
        }

        @Override
        void readField(T r1, JsonReader r2, BoundField r3) throws IllegalAccessException, IOException {
            r3.readIntoField(r2, r1);
        }
    }

    private static final class RecordAdapter<T> extends Adapter<T, Object[]> {
        static final Map<Class<?>, Object> PRIMITIVE_DEFAULTS = null;
        private final Map<String, Integer> componentIndices;
        private final Constructor<T> constructor;
        private final Object[] constructorArgsDefaults;

        @Override
        Object[] createAccumulator() {
            return createAccumulator();
        }

        @Override
        Object finalize(Object[] r1) {
            return finalize(r1);
        }

        @Override
        void readField(Object[] r1, JsonReader r2, BoundField r3) throws IllegalAccessException, IOException {
            readField(r1, r2, r3);
        }

        static {
            PRIMITIVE_DEFAULTS = primitiveDefaults();
        }

        RecordAdapter(Class<T> r4, Map<String, BoundField> r5, boolean r6) {
            super(r5);
            this.componentIndices = new HashMap();
            this.constructor = ReflectionHelper.getCanonicalRecordConstructor(r4);
            if (r6 == false) goto L5;
            ReflectiveTypeAdapterFactory.access$000(null, this.constructor);
        L6:
            String[] r42 = ReflectionHelper.getRecordComponentNames(r4);
            int r52 = 0;
            int r62 = 0;
        L8:
            if (r62 >= r42.length) goto L10;
            this.componentIndices.put(r42[r62], Integer.valueOf(r62));
            r62 = r62 + 1;
            goto L8
        L10:
            Class<?>[] r43 = this.constructor.getParameterTypes();
            this.constructorArgsDefaults = new Object[r43.length];
        L12:
            if (r52 >= r43.length) goto L14;
            this.constructorArgsDefaults[r52] = PRIMITIVE_DEFAULTS.get(r43[r52]);
            r52 = r52 + 1;
            goto L12
        L14:
            return;
        L5:
            ReflectionHelper.makeAccessible(this.constructor);
            goto L6
        }

        private static Map<Class<?>, Object> primitiveDefaults() {
            HashMap r0 = new HashMap();
            r0.put(Byte.TYPE, (byte) 0);
            r0.put(Short.TYPE, (short) 0);
            r0.put(Integer.TYPE, 0);
            r0.put(Long.TYPE, 0L);
            r0.put(Float.TYPE, Float.valueOf(0.0f));
            r0.put(Double.TYPE, Double.valueOf(0.0d));
            r0.put(Character.TYPE, (char) 0);
            r0.put(Boolean.TYPE, false);
            return r0;
        }

        @Override
        Object[] createAccumulator() {
            return (Object[]) this.constructorArgsDefaults.clone();
        }

        void readField(Object[] r3, JsonReader r4, BoundField r5) throws IOException {
            Integer r0 = this.componentIndices.get(r5.fieldName);
            if (r0 == null) goto L7;
            r5.readIntoArray(r4, r0.intValue(), r3);
            return;
        L7:
            throw new IllegalStateException("Could not find the index in the constructor '" + ReflectionHelper.constructorToString(this.constructor) + "' for field with name '" + r5.fieldName + "', unable to determine which argument in the constructor the field corresponds to. This is unexpected behavior, as we expect the RecordComponents to have the same names as the fields in the Java class, and that the order of the RecordComponents is the same as the order of the canonical constructor parameters.");
        }

        T finalize(Object[] r6) {
            return this.constructor.newInstance(r6);
        L13:
            e = move-exception;
            throw ReflectionHelper.createExceptionForUnexpectedIllegalAccess(e);
        L8:
            e = e;
        L12:
            throw new RuntimeException("Failed to invoke constructor '" + ReflectionHelper.constructorToString(this.constructor) + "' with args " + Arrays.toString(r6), e);
        L10:
            e = e;
        L5:
            e = move-exception;
            throw new RuntimeException("Failed to invoke constructor '" + ReflectionHelper.constructorToString(this.constructor) + "' with args " + Arrays.toString(r6), e.getCause());
        }
    }

    static void access$000(Object r0, AccessibleObject r1) {
        checkAccessible(r0, r1);
    }

    public ReflectiveTypeAdapterFactory(ConstructorConstructor r1, FieldNamingStrategy r2, Excluder r3, JsonAdapterAnnotationTypeAdapterFactory r4, List<ReflectionAccessFilter> r5) {
        this.constructorConstructor = r1;
        this.fieldNamingPolicy = r2;
        this.excluder = r3;
        this.jsonAdapterFactory = r4;
        this.reflectionFilters = r5;
    }

    private boolean includeField(Field r3, boolean r4) {
        if (this.excluder.excludeClass(r3.getType(), r4) == false) goto L5;
    L7:
        return false;
    L5:
        if (this.excluder.excludeField(r3, r4) == true) goto L7;
        return true;
    }

    private List<String> getFieldNames(Field r4) {
        SerializedName r0 = (SerializedName) r4.getAnnotation(SerializedName.class);
        if (r0 == null) goto L5;
        String r42 = r0.value();
        String[] r02 = r0.alternate();
        if (r02.length == 0) goto L9;
        ArrayList r1 = new ArrayList(r02.length + 1);
        r1.add(r42);
        Collections.addAll(r1, r02);
        return r1;
    L9:
        return Collections.singletonList(r42);
    L5:
        return Collections.singletonList(this.fieldNamingPolicy.translateName(r4));
    }

    @Override
    public <T> TypeAdapter<T> create(Gson r11, TypeToken<T> r12) {
        Class<? super T> r6 = r12.getRawType();
        if (Object.class.isAssignableFrom(r6) == true) goto L6;
        return null;
    L6:
        ReflectionAccessFilter.FilterResult r0 = ReflectionAccessFilterHelper.getFilterResult(this.reflectionFilters, r6);
        if (r0 == ReflectionAccessFilter.FilterResult.BLOCK_ALL) goto L19;
        if (r0 != ReflectionAccessFilter.FilterResult.BLOCK_INACCESSIBLE) goto L11;
        boolean r7 = true;
    L13:
        if (ReflectionHelper.isRecord(r6) == false) goto L17;
        return new RecordAdapter(r6, getBoundFields(r11, r12, r6, r7, true), r7);
    L17:
        return new FieldReflectionAdapter(this.constructorConstructor.get(r12), getBoundFields(r11, r12, r6, r7, false));
    L11:
        r7 = false;
        goto L13
    L19:
        throw new JsonIOException("ReflectionAccessFilter does not permit using reflection for " + r6 + ". Register a TypeAdapter for this type or adjust the access filter.");
    }

    private static <M extends AccessibleObject & Member> void checkAccessible(Object r1, M r2) {
        if (Modifier.isStatic(r2.getModifiers()) == false) goto L6;
        r1 = null;
    L6:
        if (ReflectionAccessFilterHelper.canAccess(r2, r1) == false) goto L9;
        return;
    L9:
        throw new JsonIOException(ReflectionHelper.getAccessibleObjectDescription(r2, true) + " is not accessible and ReflectionAccessFilter does not permit making it accessible. Register a TypeAdapter for the declaring type, adjust the access filter or increase the visibility of the element and its declaring type.");
    }

    private BoundField createBoundField(final Gson r17, final Field r18, final Method r19, final String r20, final TypeToken<?> r21, final boolean r22, final boolean r23, final boolean r24) {
        final boolean r12 = Primitives.isPrimitive(r21.getRawType());
        int r0 = r18.getModifiers();
        if (Modifier.isStatic(r0) == true) goto L5;
    L7:
        final boolean r13 = false;
    L8:
        JsonAdapter r02 = (JsonAdapter) r18.getAnnotation(JsonAdapter.class);
        TypeAdapter<?> r1 = null;
        if (r02 == null) goto L11;
        r1 = this.jsonAdapterFactory.getTypeAdapter(this.constructorConstructor, r17, r21, r02);
    L11:
        if (r1 == null) goto L13;
        final boolean r8 = true;
    L14:
        if (r1 != null) goto L16;
        final TypeAdapter<?> r9 = r17.getAdapter(r21);
    L18:
        return new 1(this, r20, r18, r22, r23, r24, r19, r8, r9, r17, r21, r12, r13);
    L16:
        r9 = r1;
        goto L18
    L13:
        r8 = false;
        goto L14
    L5:
        if (Modifier.isFinal(r0) == false) goto L7;
        r13 = true;
        goto L8
    }

    private Map<String, BoundField> getBoundFields(Gson r29, TypeToken<?> r30, Class<?> r31, boolean r32, boolean r33) {
        ReflectiveTypeAdapterFactory r9 = this;
        LinkedHashMap r11 = new LinkedHashMap();
        if (r31.isInterface() == false) goto L5;
        return r11;
    L5:
        TypeToken<?> r13 = r30;
        boolean r0 = r32;
        Class<?> r12 = r31;
    L7:
        if (r12 == Object.class) goto L63;
        Field[] r14 = r12.getDeclaredFields();
        boolean r15 = true;
        boolean r8 = false;
        if (r12 != r31) goto L11;
    L20:
        boolean r16 = r0;
        int r7 = r14.length;
        int r6 = 0;
    L21:
        if (r6 >= r7) goto L62;
        Field r5 = r14[r6];
        boolean r02 = r9.includeField(r5, r15);
        boolean r1 = r9.includeField(r5, r8);
        if (r02 == true) goto L27;
        if (r1 == true) goto L27;
        int r21 = r6;
        int r26 = r7;
    L59:
        r6 = r21 + 1;
        r8 = false;
        r15 = true;
        r9 = this;
        r7 = r26;
    L27:
        if (r33 == true) goto L29;
        boolean r18 = r1;
        Method r17 = null;
    L43:
        if (r16 == true) goto L46;
        if (r17 != null) goto L46;
        ReflectionHelper.makeAccessible(r5);
    L46:
        Type r19 = $Gson$Types.resolve(r13.getType(), r12, r5.getGenericType());
        List<String> r4 = r9.getFieldNames(r5);
        int r3 = r4.size();
        BoundField r110 = null;
        int r2 = 0;
    L47:
        if (r2 >= r3) goto L57;
        String r152 = r4.get(r2);
        if (r2 == 0) goto L51;
        boolean r20 = false;
    L52:
        BoundField r92 = r110;
        int r22 = r2;
        int r23 = r3;
        List<String> r24 = r4;
        Field r25 = r5;
        int r212 = r6;
        int r262 = r7;
        BoundField r03 = (BoundField) r11.put(r152, createBoundField(r29, r5, r17, r152, TypeToken.get(r19), r20, r18, r16));
        if (r92 != null) goto L55;
        r110 = r03;
    L56:
        r2 = r22 + 1;
        r02 = r20;
        r6 = r212;
        r3 = r23;
        r4 = r24;
        r5 = r25;
        r7 = r262;
        goto L47
    L55:
        r110 = r92;
        goto L56
    L51:
        r20 = r02;
        goto L52
    L57:
        BoundField r93 = r110;
        Field r252 = r5;
        r21 = r6;
        r26 = r7;
        if (r93 == null) goto L59;
        throw new IllegalArgumentException("Class " + r31.getName() + " declares multiple JSON fields named '" + r93.name + "'; conflict is caused by fields " + ReflectionHelper.fieldToString(r93.field) + " and " + ReflectionHelper.fieldToString(r252));
    L29:
        if (Modifier.isStatic(r5.getModifiers()) == false) goto L31;
        r17 = null;
        r18 = false;
        goto L43
    L31:
        Method r34 = ReflectionHelper.getAccessor(r12, r5);
        if (r16 == true) goto L35;
        ReflectionHelper.makeAccessible(r34);
    L35:
        if (r34.getAnnotation(SerializedName.class) != null) goto L37;
    L41:
        r18 = r1;
        r17 = r34;
        goto L43
    L37:
        if (r5.getAnnotation(SerializedName.class) != null) goto L41;
        throw new JsonIOException("@SerializedName on " + ReflectionHelper.getAccessibleObjectDescription(r34, r8) + " is not supported");
    L62:
        r13 = TypeToken.get($Gson$Types.resolve(r13.getType(), r12, r12.getGenericSuperclass()));
        r12 = r13.getRawType();
        r9 = this;
        r0 = r16;
        goto L7
    L11:
        if (r14.length <= 0) goto L20;
        ReflectionAccessFilter.FilterResult r04 = ReflectionAccessFilterHelper.getFilterResult(r9.reflectionFilters, r12);
        if (r04 == ReflectionAccessFilter.FilterResult.BLOCK_ALL) goto L19;
        if (r04 != ReflectionAccessFilter.FilterResult.BLOCK_INACCESSIBLE) goto L17;
        r0 = true;
        goto L20
    L17:
        r0 = false;
        goto L20
    L19:
        throw new JsonIOException("ReflectionAccessFilter does not permit using reflection for " + r12 + " (supertype of " + r31 + "). Register a TypeAdapter for this type or adjust the access filter.");
    L63:
        return r11;
    }
}
