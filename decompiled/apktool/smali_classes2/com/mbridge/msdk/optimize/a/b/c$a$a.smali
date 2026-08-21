.class public final Lcom/mbridge/msdk/optimize/a/b/c$a$a;
.super Ljava/lang/Object;
.source "OnePlusIDInterface.java"

# interfaces
.implements Lcom/mbridge/msdk/optimize/a/b/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/optimize/a/b/c$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field public a:Landroid/os/IBinder;


# direct methods
.method public constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 19
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/b/c$a$a;->a:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 24
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 25
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.heytap.openid.IOpenID"

    .line 27
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 28
    invoke-virtual {v0, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 29
    invoke-virtual {v0, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 30
    invoke-virtual {v0, p3}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    .line 31
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/b/c$a$a;->a:Landroid/os/IBinder;

    const/4 p2, 0x1

    const/4 p3, 0x0

    invoke-interface {p1, p2, v0, v1, p3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 32
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 33
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 37
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 38
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    .line 35
    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 37
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 38
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    const/4 p1, 0x0

    :goto_0
    return-object p1

    .line 37
    :goto_1
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 38
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 39
    throw p1
.end method

.method public final asBinder()Landroid/os/IBinder;
    .locals 1

    .line 45
    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/b/c$a$a;->a:Landroid/os/IBinder;

    return-object v0
.end method
