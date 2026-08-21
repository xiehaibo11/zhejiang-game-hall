.class public abstract Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;
.super Landroid/os/Binder;
.source "VideoBinderInterface.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub$a;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.mbridge.msdk.foundation.aidl.VideoBinderInterface"

.field static final TRANSACTION_registerListener:I = 0x2

.field static final TRANSACTION_requestVideo:I = 0x1


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 35
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.mbridge.msdk.foundation.aidl.VideoBinderInterface"

    .line 36
    invoke-virtual {p0, p0, v0}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.mbridge.msdk.foundation.aidl.VideoBinderInterface"

    .line 47
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 48
    instance-of v1, v0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    if-eqz v1, :cond_1

    .line 49
    check-cast v0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    return-object v0

    .line 51
    :cond_1
    new-instance v0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub$a;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub$a;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;
    .locals 1

    .line 164
    sget-object v0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub$a;->a:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;)Z
    .locals 1

    .line 153
    sget-object v0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub$a;->a:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    if-nez v0, :cond_1

    if-eqz p0, :cond_0

    .line 157
    sput-object p0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub$a;->a:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0

    .line 154
    :cond_1
    new-instance p0, Ljava/lang/IllegalStateException;

    const-string v0, "setDefaultImpl() called twice"

    invoke-direct {p0, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p0
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 0

    return-object p0
.end method

.method public onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x1

    const-string v1, "com.mbridge.msdk.foundation.aidl.VideoBinderInterface"

    if-eq p1, v0, :cond_2

    const/4 v2, 0x2

    if-eq p1, v2, :cond_1

    const v2, 0x5f4e5446

    if-eq p1, v2, :cond_0

    .line 84
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 64
    :cond_0
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0

    .line 76
    :cond_1
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 78
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener$a;->a(Landroid/os/IBinder;)Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;

    move-result-object p1

    .line 79
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;->registerListener(Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;)V

    .line 80
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v0

    .line 68
    :cond_2
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 70
    invoke-virtual {p2}, Landroid/os/Parcel;->createStringArray()[Ljava/lang/String;

    move-result-object p1

    .line 71
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;->requestVideo([Ljava/lang/String;)V

    .line 72
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v0
.end method
