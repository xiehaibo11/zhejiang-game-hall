package kotlin;

import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.kwad.sdk.api.model.AdnName;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.tkay.core.api.TYAdConst;
import java.util.Arrays;
import java.util.Collection;
import java.util.NoSuchElementException;
import kotlin.collections.ArraysKt;
import kotlin.collections.ULongIterator;
import kotlin.jvm.JvmInline;
import kotlin.jvm.internal.CollectionToArray;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;

@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0010\u001e\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0016\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\t\n\u0002\u0010\u0000\n\u0002\b\f\n\u0002\u0010(\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0004\b\u0087@\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001:\u00012B\u0014\b\u0016\u0012\u0006\u0010\u0003\u001a\u00020\u0004ø\u0001\u0000¢\u0006\u0004\b\u0005\u0010\u0006B\u0014\b\u0001\u0012\u0006\u0010\u0007\u001a\u00020\bø\u0001\u0000¢\u0006\u0004\b\u0005\u0010\tJ\u001b\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0002H\u0096\u0002ø\u0001\u0000¢\u0006\u0004\b\u0011\u0010\u0012J \u0010\u0013\u001a\u00020\u000f2\f\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001H\u0016ø\u0001\u0000¢\u0006\u0004\b\u0015\u0010\u0016J\u001a\u0010\u0017\u001a\u00020\u000f2\b\u0010\u0018\u001a\u0004\u0018\u00010\u0019HÖ\u0003¢\u0006\u0004\b\u001a\u0010\u001bJ\u001e\u0010\u001c\u001a\u00020\u00022\u0006\u0010\u001d\u001a\u00020\u0004H\u0086\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u001e\u0010\u001fJ\u0010\u0010 \u001a\u00020\u0004HÖ\u0001¢\u0006\u0004\b!\u0010\u000bJ\u000f\u0010\"\u001a\u00020\u000fH\u0016¢\u0006\u0004\b#\u0010$J\u0019\u0010%\u001a\b\u0012\u0004\u0012\u00020\u00020&H\u0096\u0002ø\u0001\u0000¢\u0006\u0004\b'\u0010(J#\u0010)\u001a\u00020*2\u0006\u0010\u001d\u001a\u00020\u00042\u0006\u0010+\u001a\u00020\u0002H\u0086\u0002ø\u0001\u0000¢\u0006\u0004\b,\u0010-J\u0010\u0010.\u001a\u00020/HÖ\u0001¢\u0006\u0004\b0\u00101R\u0014\u0010\u0003\u001a\u00020\u00048VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\n\u0010\u000bR\u0016\u0010\u0007\u001a\u00020\b8\u0000X\u0081\u0004¢\u0006\b\n\u0000\u0012\u0004\b\f\u0010\r\u0088\u0001\u0007\u0092\u0001\u00020\bø\u0001\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u00063"}, d2 = {"Lkotlin/ULongArray;", "", "Lkotlin/ULong;", TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE, "", "constructor-impl", "(I)[J", "storage", "", "([J)[J", "getSize-impl", "([J)I", "getStorage$annotations", "()V", "contains", "", "element", "contains-VKZWuLQ", "([JJ)Z", "containsAll", "elements", "containsAll-impl", "([JLjava/util/Collection;)Z", "equals", AdnName.OTHER, "", "equals-impl", "([JLjava/lang/Object;)Z", MonitorConstants.CONNECT_TYPE_GET, "index", "get-s-VKNKU", "([JI)J", TTDownloadField.TT_HASHCODE, "hashCode-impl", "isEmpty", "isEmpty-impl", "([J)Z", "iterator", "", "iterator-impl", "([J)Ljava/util/Iterator;", "set", "", "value", "set-k8EXiF4", "([JIJ)V", "toString", "", "toString-impl", "([J)Ljava/lang/String;", "Iterator", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
@JvmInline
public final class ULongArray implements Collection<ULong>, KMappedMarker {
    private final long[] storage;

    public static final ULongArray box-impl(long[] jArr) {
        return new ULongArray(jArr);
    }

    public static long[] constructor-impl(long[] storage) {
        Intrinsics.checkNotNullParameter(storage, "storage");
        return storage;
    }

    public static boolean equals-impl(long[] jArr, Object obj) {
        return (obj instanceof ULongArray) && Intrinsics.areEqual(jArr, ((ULongArray) obj).getStorage());
    }

    public static final boolean equals-impl0(long[] jArr, long[] jArr2) {
        return Intrinsics.areEqual(jArr, jArr2);
    }

    public static void getStorage$annotations() {
    }

    public static int hashCode-impl(long[] jArr) {
        return Arrays.hashCode(jArr);
    }

    public static String toString-impl(long[] jArr) {
        return "ULongArray(storage=" + Arrays.toString(jArr) + ')';
    }

    @Override
    public boolean add(ULong uLong) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    public boolean add-VKZWuLQ(long j) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override
    public boolean addAll(Collection<? extends ULong> collection) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override
    public void clear() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override
    public boolean equals(Object obj) {
        return equals-impl(this.storage, obj);
    }

    @Override
    public int hashCode() {
        return hashCode-impl(this.storage);
    }

    @Override
    public boolean remove(Object obj) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override
    public boolean removeAll(Collection<? extends Object> collection) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override
    public boolean retainAll(Collection<? extends Object> collection) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override
    public Object[] toArray() {
        return CollectionToArray.toArray(this);
    }

    @Override
    public <T> T[] toArray(T[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        return (T[]) CollectionToArray.toArray(this, array);
    }

    public String toString() {
        return toString-impl(this.storage);
    }

    public final long[] getStorage() {
        return this.storage;
    }

    @Override
    public final boolean contains(Object obj) {
        if (obj instanceof ULong) {
            return contains-VKZWuLQ(((ULong) obj).getData());
        }
        return false;
    }

    private ULongArray(long[] jArr) {
        this.storage = jArr;
    }

    public static long[] constructor-impl(int i) {
        return constructor-impl(new long[i]);
    }

    public static final long get-s-VKNKU(long[] jArr, int i) {
        return ULong.constructor-impl(jArr[i]);
    }

    public static final void set-k8EXiF4(long[] jArr, int i, long j) {
        jArr[i] = j;
    }

    public static int getSize-impl(long[] jArr) {
        return jArr.length;
    }

    @Override
    public int size() {
        return getSize-impl(this.storage);
    }

    public static java.util.Iterator<ULong> iterator-impl(long[] jArr) {
        return new Iterator(jArr);
    }

    @Override
    public java.util.Iterator<ULong> iterator() {
        return iterator-impl(this.storage);
    }

    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0016\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0002\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\t\u0010\u0007\u001a\u00020\bH\u0096\u0002J\u0015\u0010\t\u001a\u00020\nH\u0016ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u000b\u0010\fR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\r"}, d2 = {"Lkotlin/ULongArray$Iterator;", "Lkotlin/collections/ULongIterator;", "array", "", "([J)V", "index", "", "hasNext", "", "nextULong", "Lkotlin/ULong;", "nextULong-s-VKNKU", "()J", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    private static final class Iterator extends ULongIterator {
        private final long[] array;
        private int index;

        public Iterator(long[] array) {
            Intrinsics.checkNotNullParameter(array, "array");
            this.array = array;
        }

        @Override
        public boolean hasNext() {
            return this.index < this.array.length;
        }

        @Override
        public long nextULong-s-VKNKU() {
            int i = this.index;
            long[] jArr = this.array;
            if (i >= jArr.length) {
                throw new NoSuchElementException(String.valueOf(this.index));
            }
            this.index = i + 1;
            return ULong.constructor-impl(jArr[i]);
        }
    }

    public boolean contains-VKZWuLQ(long j) {
        return contains-VKZWuLQ(this.storage, j);
    }

    public static boolean contains-VKZWuLQ(long[] jArr, long j) {
        return ArraysKt.contains(jArr, j);
    }

    @Override
    public boolean containsAll(Collection<? extends Object> elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        return containsAll-impl(this.storage, elements);
    }

    public static boolean containsAll-impl(long[] jArr, Collection<ULong> elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        Collection<ULong> collection = elements;
        if (!collection.isEmpty()) {
            for (Object obj : collection) {
                if (!((obj instanceof ULong) && ArraysKt.contains(jArr, ((ULong) obj).getData()))) {
                    return false;
                }
            }
        }
        return true;
    }

    public static boolean isEmpty-impl(long[] jArr) {
        return jArr.length == 0;
    }

    @Override
    public boolean isEmpty() {
        return isEmpty-impl(this.storage);
    }
}
