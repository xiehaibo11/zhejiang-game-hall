.class public final Lcom/mbridge/msdk/optimize/a/b/e$a;
.super Ljava/lang/Object;
.source "SamsungIDInterface.java"

# interfaces
.implements Lcom/mbridge/msdk/optimize/a/b/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/optimize/a/b/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private a:Landroid/os/IBinder;


# direct methods
.method public constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/b/e$a;->a:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 5

    .line 32
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 33
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.samsung.android.deviceidservice.IDeviceIdService"

    .line 35
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 36
    iget-object v2, p0, Lcom/mbridge/msdk/optimize/a/b/e$a;->a:Landroid/os/IBinder;

    const/4 v3, 0x1

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 37
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 38
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 40
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 41
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 42
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 v2, 0x0

    .line 44
    :goto_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 45
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2
.end method

.method public final asBinder()Landroid/os/IBinder;
    .locals 1

    .line 26
    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/b/e$a;->a:Landroid/os/IBinder;

    return-object v0
.end method
