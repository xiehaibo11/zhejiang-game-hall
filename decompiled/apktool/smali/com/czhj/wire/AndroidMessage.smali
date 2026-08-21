.class public abstract Lcom/czhj/wire/AndroidMessage;
.super Lcom/czhj/wire/Message;

# interfaces
.implements Landroid/os/Parcelable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/AndroidMessage$ProtoAdapterCreator;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<M:",
        "Lcom/czhj/wire/Message<",
        "TM;TB;>;B:",
        "Lcom/czhj/wire/Message$Builder<",
        "TM;TB;>;>",
        "Lcom/czhj/wire/Message<",
        "TM;TB;>;",
        "Landroid/os/Parcelable;"
    }
.end annotation


# direct methods
.method protected constructor <init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/ProtoAdapter<",
            "TM;>;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Lcom/czhj/wire/Message;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public static newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<E:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/czhj/wire/ProtoAdapter<",
            "TE;>;)",
            "Landroid/os/Parcelable$Creator<",
            "TE;>;"
        }
    .end annotation

    new-instance v0, Lcom/czhj/wire/AndroidMessage$ProtoAdapterCreator;

    invoke-direct {v0, p0}, Lcom/czhj/wire/AndroidMessage$ProtoAdapterCreator;-><init>(Lcom/czhj/wire/ProtoAdapter;)V

    return-object v0
.end method


# virtual methods
.method public final describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 0

    invoke-virtual {p0}, Lcom/czhj/wire/AndroidMessage;->encode()[B

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByteArray([B)V

    return-void
.end method
