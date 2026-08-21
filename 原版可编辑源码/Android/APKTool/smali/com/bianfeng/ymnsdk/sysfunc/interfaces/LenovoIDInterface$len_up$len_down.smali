.class public Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface$len_up$len_down;
.super Ljava/lang/Object;
.source "LenovoIDInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface$len_up;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "len_down"
.end annotation


# instance fields
.field private iBinder:Landroid/os/IBinder;


# direct methods
.method public constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 36
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface$len_up$len_down;->iBinder:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 5

    .line 47
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 48
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.zui.deviceidservice.IDeviceidInterface"

    .line 50
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 51
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface$len_up$len_down;->iBinder:Landroid/os/IBinder;

    const/4 v3, 0x1

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 52
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 53
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 60
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 61
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    goto :goto_0

    :catch_0
    move-exception v2

    .line 57
    :try_start_1
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 60
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 61
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    const/4 v0, 0x0

    return-object v0

    .line 60
    :goto_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 61
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 62
    throw v2
.end method

.method public a(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    .line 69
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object p1

    .line 70
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    :try_start_0
    const-string v1, "com.zui.deviceidservice.IDeviceidInterface"

    .line 72
    invoke-virtual {p1, v1}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 73
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface$len_up$len_down;->iBinder:Landroid/os/IBinder;

    const/4 v2, 0x4

    const/4 v3, 0x0

    invoke-interface {v1, v2, p1, v0, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 74
    invoke-virtual {v0}, Landroid/os/Parcel;->readException()V

    .line 75
    invoke-virtual {v0}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 82
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 83
    invoke-virtual {p1}, Landroid/os/Parcel;->recycle()V

    return-object v1

    :catchall_0
    move-exception v1

    goto :goto_0

    :catch_0
    move-exception v1

    .line 79
    :try_start_1
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 82
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 83
    invoke-virtual {p1}, Landroid/os/Parcel;->recycle()V

    const/4 p1, 0x0

    return-object p1

    .line 82
    :goto_0
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 83
    invoke-virtual {p1}, Landroid/os/Parcel;->recycle()V

    .line 84
    throw v1
.end method

.method public asBinder()Landroid/os/IBinder;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public b()Ljava/lang/String;
    .locals 5

    .line 91
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 92
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    :try_start_0
    const-string v2, "com.zui.deviceidservice.IDeviceidInterface"

    .line 94
    invoke-virtual {v0, v2}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 95
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface$len_up$len_down;->iBinder:Landroid/os/IBinder;

    const/4 v3, 0x2

    const/4 v4, 0x0

    invoke-interface {v2, v3, v0, v1, v4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 96
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 97
    invoke-virtual {v1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 104
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 105
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    return-object v2

    :catchall_0
    move-exception v2

    goto :goto_0

    :catch_0
    move-exception v2

    .line 101
    :try_start_1
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 104
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 105
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    const/4 v0, 0x0

    return-object v0

    .line 104
    :goto_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 105
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 106
    throw v2
.end method

.method public b(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    .line 113
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object p1

    .line 114
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    :try_start_0
    const-string v1, "com.zui.deviceidservice.IDeviceidInterface"

    .line 116
    invoke-virtual {p1, v1}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 117
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface$len_up$len_down;->iBinder:Landroid/os/IBinder;

    const/4 v2, 0x5

    const/4 v3, 0x0

    invoke-interface {v1, v2, p1, v0, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 118
    invoke-virtual {v0}, Landroid/os/Parcel;->readException()V

    .line 119
    invoke-virtual {v0}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 126
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 127
    invoke-virtual {p1}, Landroid/os/Parcel;->recycle()V

    return-object v1

    :catchall_0
    move-exception v1

    goto :goto_0

    :catch_0
    move-exception v1

    .line 123
    :try_start_1
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 126
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 127
    invoke-virtual {p1}, Landroid/os/Parcel;->recycle()V

    const/4 p1, 0x0

    return-object p1

    .line 126
    :goto_0
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 127
    invoke-virtual {p1}, Landroid/os/Parcel;->recycle()V

    .line 128
    throw v1
.end method

.method public c()Z
    .locals 5

    .line 135
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    .line 136
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    const/4 v2, 0x0

    :try_start_0
    const-string v3, "com.zui.deviceidservice.IDeviceidInterface"

    .line 138
    invoke-virtual {v0, v3}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 139
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/LenovoIDInterface$len_up$len_down;->iBinder:Landroid/os/IBinder;

    const/4 v4, 0x3

    invoke-interface {v3, v4, v0, v1, v2}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 140
    invoke-virtual {v1}, Landroid/os/Parcel;->readException()V

    .line 141
    invoke-virtual {v1}, Landroid/os/Parcel;->readInt()I

    move-result v3

    if-eqz v3, :cond_0

    const/4 v2, 0x1

    .line 144
    :cond_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 145
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 148
    :catchall_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 149
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    :goto_0
    return v2
.end method
