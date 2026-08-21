.class final Lcom/tkay/core/common/b/c$c;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/IInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/b/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "c"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/b/c;

.field private b:Landroid/os/IBinder;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/b/c;Landroid/os/IBinder;)V
    .locals 0

    .line 112
    iput-object p1, p0, Lcom/tkay/core/common/b/c$c;->a:Lcom/tkay/core/common/b/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 113
    iput-object p2, p0, Lcom/tkay/core/common/b/c$c;->b:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 5

    .line 122
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 123
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.google.android.gms.ads.identifier.internal.IAdvertisingIdService"

    .line 126
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 127
    iget-object v2, p0, Lcom/tkay/core/common/b/c$c;->b:Landroid/os/IBinder;

    const/4 v3, 0x1

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 128
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 129
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 131
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 132
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    .line 131
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 132
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 133
    throw v2
.end method

.method public final asBinder()Landroid/os/IBinder;
    .locals 1

    .line 118
    iget-object v0, p0, Lcom/tkay/core/common/b/c$c;->b:Landroid/os/IBinder;

    return-object v0
.end method

.method public final b()Z
    .locals 6

    .line 138
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 139
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.google.android.gms.ads.identifier.internal.IAdvertisingIdService"

    .line 142
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    const/4 v2, 0x1

    .line 143
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInt(I)V

    .line 144
    iget-object v3, p0, Lcom/tkay/core/common/b/c$c;->b:Landroid/os/IBinder;

    const/4 v4, 0x2

    const/4 v5, 0x0

    invoke-interface {v3, v4, v0, v1, v5}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 145
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 146
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v3, :cond_0

    goto :goto_0

    :cond_0
    move v2, v5

    .line 148
    :goto_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 149
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return v2

    :catchall_0
    move-exception v2

    .line 148
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 149
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 150
    throw v2
.end method
