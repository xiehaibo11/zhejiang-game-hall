package com.google.gson.internal.bind;

import com.google.gson.JsonElement;
import com.google.gson.TypeAdapter;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.annotations.SerializedName;
import com.google.gson.internal.LazilyParsedNumber;
import com.google.gson.reflect.TypeToken;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonToken;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.lang.reflect.Field;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.net.InetAddress;
import java.net.URI;
import java.net.URL;
import java.security.AccessController;
import java.util.BitSet;
import java.util.Calendar;
import java.util.Currency;
import java.util.GregorianCalendar;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import java.util.UUID;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicIntegerArray;

public final class TypeAdapters {
    public static final TypeAdapter<AtomicBoolean> ATOMIC_BOOLEAN = null;
    public static final TypeAdapterFactory ATOMIC_BOOLEAN_FACTORY = null;
    public static final TypeAdapter<AtomicInteger> ATOMIC_INTEGER = null;
    public static final TypeAdapter<AtomicIntegerArray> ATOMIC_INTEGER_ARRAY = null;
    public static final TypeAdapterFactory ATOMIC_INTEGER_ARRAY_FACTORY = null;
    public static final TypeAdapterFactory ATOMIC_INTEGER_FACTORY = null;
    public static final TypeAdapter<BigDecimal> BIG_DECIMAL = null;
    public static final TypeAdapter<BigInteger> BIG_INTEGER = null;
    public static final TypeAdapter<BitSet> BIT_SET = null;
    public static final TypeAdapterFactory BIT_SET_FACTORY = null;
    public static final TypeAdapter<Boolean> BOOLEAN = null;
    public static final TypeAdapter<Boolean> BOOLEAN_AS_STRING = null;
    public static final TypeAdapterFactory BOOLEAN_FACTORY = null;
    public static final TypeAdapter<Number> BYTE = null;
    public static final TypeAdapterFactory BYTE_FACTORY = null;
    public static final TypeAdapter<Calendar> CALENDAR = null;
    public static final TypeAdapterFactory CALENDAR_FACTORY = null;
    public static final TypeAdapter<Character> CHARACTER = null;
    public static final TypeAdapterFactory CHARACTER_FACTORY = null;
    public static final TypeAdapter<Class> CLASS = null;
    public static final TypeAdapterFactory CLASS_FACTORY = null;
    public static final TypeAdapter<Currency> CURRENCY = null;
    public static final TypeAdapterFactory CURRENCY_FACTORY = null;
    public static final TypeAdapter<Number> DOUBLE = null;
    public static final TypeAdapterFactory ENUM_FACTORY = null;
    public static final TypeAdapter<Number> FLOAT = null;
    public static final TypeAdapter<InetAddress> INET_ADDRESS = null;
    public static final TypeAdapterFactory INET_ADDRESS_FACTORY = null;
    public static final TypeAdapter<Number> INTEGER = null;
    public static final TypeAdapterFactory INTEGER_FACTORY = null;
    public static final TypeAdapter<JsonElement> JSON_ELEMENT = null;
    public static final TypeAdapterFactory JSON_ELEMENT_FACTORY = null;
    public static final TypeAdapter<LazilyParsedNumber> LAZILY_PARSED_NUMBER = null;
    public static final TypeAdapter<Locale> LOCALE = null;
    public static final TypeAdapterFactory LOCALE_FACTORY = null;
    public static final TypeAdapter<Number> LONG = null;
    public static final TypeAdapter<Number> SHORT = null;
    public static final TypeAdapterFactory SHORT_FACTORY = null;
    public static final TypeAdapter<String> STRING = null;
    public static final TypeAdapter<StringBuffer> STRING_BUFFER = null;
    public static final TypeAdapterFactory STRING_BUFFER_FACTORY = null;
    public static final TypeAdapter<StringBuilder> STRING_BUILDER = null;
    public static final TypeAdapterFactory STRING_BUILDER_FACTORY = null;
    public static final TypeAdapterFactory STRING_FACTORY = null;
    public static final TypeAdapter<URI> URI = null;
    public static final TypeAdapterFactory URI_FACTORY = null;
    public static final TypeAdapter<URL> URL = null;
    public static final TypeAdapterFactory URL_FACTORY = null;
    public static final TypeAdapter<UUID> UUID = null;
    public static final TypeAdapterFactory UUID_FACTORY = null;

    static class 35 {
        static final int[] $SwitchMap$com$google$gson$stream$JsonToken = null;

        static {
            $SwitchMap$com$google$gson$stream$JsonToken = new int[JsonToken.values().length];
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.NUMBER.ordinal()] = 1;     // Catch: NoSuchFieldError -> L10
        L16:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.STRING.ordinal()] = 2;     // Catch: NoSuchFieldError -> L11
        L18:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.BOOLEAN.ordinal()] = 3;     // Catch: NoSuchFieldError -> L12
        L24:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.BEGIN_ARRAY.ordinal()] = 4;     // Catch: NoSuchFieldError -> L13
        L26:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.BEGIN_OBJECT.ordinal()] = 5;     // Catch: NoSuchFieldError -> L14
        L20:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.NULL.ordinal()] = 6;     // Catch: NoSuchFieldError -> L15
            return;
        }
    }

    private static final class EnumTypeAdapter<T extends Enum<T>> extends TypeAdapter<T> {
        private final Map<T, String> constantToName;
        private final Map<String, T> nameToConstant;
        private final Map<String, T> stringToConstant;

        @Override
        public Object read(JsonReader r1) throws IOException {
            return read(r1);
        }

        @Override
        public void write(JsonWriter r1, Object r2) throws IOException {
            write(r1, (Enum) r2);
        }

        public EnumTypeAdapter(final Class<T> r12) {
            this.nameToConstant = new HashMap();
            this.stringToConstant = new HashMap();
            this.constantToName = new HashMap();
            Field[] r122 = (Field[]) AccessController.doPrivileged(new 1(this, r12));     // Catch: IllegalAccessException -> L13
            int r0 = r122.length;     // Catch: IllegalAccessException -> L13
            int r2 = 0;
        L4:
            if (r2 >= r0) goto L12;
            Field r3 = r122[r2];     // Catch: IllegalAccessException -> L13
            Enum r4 = (Enum) r3.get(null);     // Catch: IllegalAccessException -> L13
            String r5 = r4.name();     // Catch: IllegalAccessException -> L13
            String r6 = r4.toString();     // Catch: IllegalAccessException -> L13
            SerializedName r32 = (SerializedName) r3.getAnnotation(SerializedName.class);     // Catch: IllegalAccessException -> L13
            if (r32 == null) goto L10;
            r5 = r32.value();     // Catch: IllegalAccessException -> L13
            String[] r33 = r32.alternate();     // Catch: IllegalAccessException -> L13
            int r7 = r33.length;     // Catch: IllegalAccessException -> L13
            int r8 = 0;
        L8:
            if (r8 >= r7) goto L10;
            String r9 = r33[r8];     // Catch: IllegalAccessException -> L13
            this.nameToConstant.put(r9, (T) r4);     // Catch: IllegalAccessException -> L13
            r8 = r8 + 1;     // Catch: IllegalAccessException -> L13
        L10:
            this.nameToConstant.put(r5, (T) r4);     // Catch: IllegalAccessException -> L13
            this.stringToConstant.put(r6, (T) r4);     // Catch: IllegalAccessException -> L13
            this.constantToName.put((T) r4, r5);     // Catch: IllegalAccessException -> L13
            r2 = r2 + 1;
            goto L4
        L12:
            return;
        L13:
            e = move-exception;
            throw new AssertionError(e);
        }

        @Override
        public T read(JsonReader r3) throws IOException {
            if (r3.peek() != JsonToken.NULL) goto L6;
            r3.nextNull();
            return null;
        L6:
            String r32 = r3.nextString();
            T r0 = this.nameToConstant.get(r32);
            if (r0 == null) goto L9;
            return r0;
        L9:
            return this.stringToConstant.get(r32);
        }

        public void write(JsonWriter r2, T r3) throws IOException {
            if (r3 != null) goto L4;
            String r32 = null;
        L5:
            r2.value(r32);
            return;
        L4:
            r32 = this.constantToName.get(r3);
            goto L5
        }
    }

    private TypeAdapters() {
        throw new UnsupportedOperationException();
    }

    static {
        CLASS = new 1().nullSafe();
        CLASS_FACTORY = newFactory(Class.class, CLASS);
        BIT_SET = new 2().nullSafe();
        BIT_SET_FACTORY = newFactory(BitSet.class, BIT_SET);
        BOOLEAN = new 3();
        BOOLEAN_AS_STRING = new 4();
        BOOLEAN_FACTORY = newFactory(Boolean.TYPE, Boolean.class, BOOLEAN);
        BYTE = new 5();
        BYTE_FACTORY = newFactory(Byte.TYPE, Byte.class, BYTE);
        SHORT = new 6();
        SHORT_FACTORY = newFactory(Short.TYPE, Short.class, SHORT);
        INTEGER = new 7();
        INTEGER_FACTORY = newFactory(Integer.TYPE, Integer.class, INTEGER);
        ATOMIC_INTEGER = new 8().nullSafe();
        ATOMIC_INTEGER_FACTORY = newFactory(AtomicInteger.class, ATOMIC_INTEGER);
        ATOMIC_BOOLEAN = new 9().nullSafe();
        ATOMIC_BOOLEAN_FACTORY = newFactory(AtomicBoolean.class, ATOMIC_BOOLEAN);
        ATOMIC_INTEGER_ARRAY = new 10().nullSafe();
        ATOMIC_INTEGER_ARRAY_FACTORY = newFactory(AtomicIntegerArray.class, ATOMIC_INTEGER_ARRAY);
        LONG = new 11();
        FLOAT = new 12();
        DOUBLE = new 13();
        CHARACTER = new 14();
        CHARACTER_FACTORY = newFactory(Character.TYPE, Character.class, CHARACTER);
        STRING = new 15();
        BIG_DECIMAL = new 16();
        BIG_INTEGER = new 17();
        LAZILY_PARSED_NUMBER = new 18();
        STRING_FACTORY = newFactory(String.class, STRING);
        STRING_BUILDER = new 19();
        STRING_BUILDER_FACTORY = newFactory(StringBuilder.class, STRING_BUILDER);
        STRING_BUFFER = new 20();
        STRING_BUFFER_FACTORY = newFactory(StringBuffer.class, STRING_BUFFER);
        URL = new 21();
        URL_FACTORY = newFactory(URL.class, URL);
        URI = new 22();
        URI_FACTORY = newFactory(URI.class, URI);
        INET_ADDRESS = new 23();
        INET_ADDRESS_FACTORY = newTypeHierarchyFactory(InetAddress.class, INET_ADDRESS);
        UUID = new 24();
        UUID_FACTORY = newFactory(UUID.class, UUID);
        CURRENCY = new 25().nullSafe();
        CURRENCY_FACTORY = newFactory(Currency.class, CURRENCY);
        CALENDAR = new 26();
        CALENDAR_FACTORY = newFactoryForMultipleTypes(Calendar.class, GregorianCalendar.class, CALENDAR);
        LOCALE = new 27();
        LOCALE_FACTORY = newFactory(Locale.class, LOCALE);
        JSON_ELEMENT = new 28();
        JSON_ELEMENT_FACTORY = newTypeHierarchyFactory(JsonElement.class, JSON_ELEMENT);
        ENUM_FACTORY = new 29();
    }

    public static <TT> TypeAdapterFactory newFactory(final TypeToken<TT> r1, final TypeAdapter<TT> r2) {
        return new 30(r1, r2);
    }

    public static <TT> TypeAdapterFactory newFactory(final Class<TT> r1, final TypeAdapter<TT> r2) {
        return new 31(r1, r2);
    }

    public static <TT> TypeAdapterFactory newFactory(final Class<TT> r1, final Class<TT> r2, final TypeAdapter<? super TT> r3) {
        return new 32(r1, r2, r3);
    }

    public static <TT> TypeAdapterFactory newFactoryForMultipleTypes(final Class<TT> r1, final Class<? extends TT> r2, final TypeAdapter<? super TT> r3) {
        return new 33(r1, r2, r3);
    }

    public static <T1> TypeAdapterFactory newTypeHierarchyFactory(final Class<T1> r1, final TypeAdapter<T1> r2) {
        return new 34(r1, r2);
    }
}
