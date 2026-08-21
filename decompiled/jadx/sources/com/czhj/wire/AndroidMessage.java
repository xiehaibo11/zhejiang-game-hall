package com.czhj.wire;

import android.os.Parcel;
import android.os.Parcelable;
import com.czhj.wire.Message;
import com.czhj.wire.Message.Builder;
import com.czhj.wire.okio.ByteString;
import java.io.IOException;
import java.lang.reflect.Array;

/* JADX INFO: loaded from: classes.dex */
public abstract class AndroidMessage<M extends Message<M, B>, B extends Message.Builder<M, B>> extends Message<M, B> implements Parcelable {

    private static final class ProtoAdapterCreator<M> implements Parcelable.Creator<M> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final ProtoAdapter<M> f1863a;

        ProtoAdapterCreator(ProtoAdapter<M> protoAdapter) {
            this.f1863a = protoAdapter;
        }

        @Override // android.os.Parcelable.Creator
        public M createFromParcel(Parcel parcel) {
            try {
                return this.f1863a.decode(parcel.createByteArray());
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }

        @Override // android.os.Parcelable.Creator
        public M[] newArray(int i) {
            return (M[]) ((Object[]) Array.newInstance(this.f1863a.javaType, i));
        }
    }

    protected AndroidMessage(ProtoAdapter<M> protoAdapter, ByteString byteString) {
        super(protoAdapter, byteString);
    }

    public static <E> Parcelable.Creator<E> newCreator(ProtoAdapter<E> protoAdapter) {
        return new ProtoAdapterCreator(protoAdapter);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeByteArray(encode());
    }
}
