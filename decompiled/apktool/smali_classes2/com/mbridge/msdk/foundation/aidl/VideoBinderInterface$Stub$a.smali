.class final Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub$a;
.super Ljava/lang/Object;
.source "VideoBinderInterface.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field public static a:Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;


# instance fields
.field private b:Landroid/os/IBinder;


# direct methods
.method constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 92
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 93
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub$a;->b:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public final asBinder()Landroid/os/IBinder;
    .locals 1

    .line 98
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub$a;->b:Landroid/os/IBinder;

    return-object v0
.end method

.method public final registerListener(Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 126
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 127
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.mbridge.msdk.foundation.aidl.VideoBinderInterface"

    .line 129
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    if-eqz p1, :cond_0

    .line 130
    invoke-interface {p1}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;->asBinder()Landroid/os/IBinder;

    move-result-object v2

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    .line 131
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub$a;->b:Landroid/os/IBinder;

    const/4 v3, 0x2

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_1

    .line 132
    invoke-static {}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;->getDefaultImpl()Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 133
    invoke-static {}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;->getDefaultImpl()Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;->registerListener(Lcom/mbridge/msdk/foundation/aidl/VideoBinderListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 138
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 139
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 136
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 138
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 139
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 138
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 139
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 140
    throw p1
.end method

.method public final requestVideo([Ljava/lang/String;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 107
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 108
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.mbridge.msdk.foundation.aidl.VideoBinderInterface"

    .line 110
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 111
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeStringArray([Ljava/lang/String;)V

    .line 112
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub$a;->b:Landroid/os/IBinder;

    const/4 v3, 0x1

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result v2

    if-nez v2, :cond_0

    .line 113
    invoke-static {}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;->getDefaultImpl()Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 114
    invoke-static {}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface$Stub;->getDefaultImpl()Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;

    move-result-object v2

    invoke-interface {v2, p1}, Lcom/mbridge/msdk/foundation/aidl/VideoBinderInterface;->requestVideo([Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 119
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 120
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    .line 117
    :cond_0
    :try_start_1
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 119
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 120
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-void

    :catchall_0
    move-exception p1

    .line 119
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 120
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 121
    throw p1
.end method
