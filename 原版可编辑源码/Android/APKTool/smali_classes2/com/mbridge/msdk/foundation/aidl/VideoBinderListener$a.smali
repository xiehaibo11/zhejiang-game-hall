.class public abstract Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a;
.super Landroid/os/Binder;
.source "VideoBinderListener.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a$a;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 26
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.mbridge.msdk.foundation.aidl.VideoBinderListener"

    .line 27
    invoke-virtual {p0, p0, v0}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;
    .locals 1

    .line 150
    sget-object v0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a$a;->a:Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    return-object v0
.end method

.method public static a(Landroid/os/IBinder;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.mbridge.msdk.foundation.aidl.VideoBinderListener"

    .line 38
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 39
    instance-of v1, v0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    if-eqz v1, :cond_1

    .line 40
    check-cast v0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    return-object v0

    .line 42
    :cond_1
    new-instance v0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a$a;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a$a;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 0

    return-object p0
.end method

.method public onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z
    .locals 9
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x1

    const-string v1, "com.mbridge.msdk.foundation.aidl.VideoBinderListener"

    if-eq p1, v0, :cond_1

    const v2, 0x5f4e5446

    if-eq p1, v2, :cond_0

    .line 84
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 55
    :cond_0
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0

    .line 60
    :cond_1
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 62
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2

    .line 64
    invoke-virtual {p2}, Landroid/os/Parcel;->readLong()J

    move-result-wide v3

    .line 66
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v5

    .line 68
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v6

    .line 70
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v7

    .line 72
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_2

    .line 73
    sget-object p1, Landroid/os/ParcelFileDescriptor;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/os/ParcelFileDescriptor;

    goto :goto_0

    :cond_2
    const/4 p1, 0x0

    :goto_0
    move-object v8, p1

    move-object v1, p0

    .line 78
    invoke-virtual/range {v1 .. v8}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a;->onVideo(Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/ParcelFileDescriptor;)V

    .line 79
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v0
.end method
