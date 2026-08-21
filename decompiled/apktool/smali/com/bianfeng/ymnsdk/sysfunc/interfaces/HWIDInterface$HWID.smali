.class public final Lcom/bianfeng/ymnsdk/sysfunc/interfaces/HWIDInterface$HWID;
.super Ljava/lang/Object;
.source "HWIDInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/sysfunc/interfaces/HWIDInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/interfaces/HWIDInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "HWID"
.end annotation


# instance fields
.field private iBinder:Landroid/os/IBinder;


# direct methods
.method public constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/HWIDInterface$HWID;->iBinder:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 1

    .line 29
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/HWIDInterface$HWID;->iBinder:Landroid/os/IBinder;

    return-object v0
.end method

.method public getBoos()Z
    .locals 8

    const-string v0, "Wooo"

    const-string v1, "HWDeviceIDHelper getBoos IN "

    .line 60
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 62
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    .line 63
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v2

    const/4 v3, 0x0

    :try_start_0
    const-string v4, "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"

    .line 65
    invoke-virtual {v1, v4}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 66
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/HWIDInterface$HWID;->iBinder:Landroid/os/IBinder;

    const/4 v5, 0x1

    invoke-interface {v4, v5, v1, v2, v3}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 67
    invoke-virtual {v2}, Landroid/os/Parcel;->readException()V

    .line 68
    invoke-virtual {v2}, Landroid/os/Parcel;->readInt()I

    move-result v4

    .line 69
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "HWDeviceIDHelper getBoos IN read -> "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v0, v6}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v4, :cond_0

    const/4 v3, 0x1

    goto :goto_0

    .line 75
    :catchall_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 76
    invoke-virtual {v2}, Landroid/os/Parcel;->recycle()V

    .line 78
    :cond_0
    :goto_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 79
    invoke-virtual {v2}, Landroid/os/Parcel;->recycle()V

    .line 80
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "HWDeviceIDHelper getBoos IN read2 -> "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return v3
.end method

.method public getIDs()Ljava/lang/String;
    .locals 7

    const-string v0, "Wooo"

    const-string v1, "HWIDInterface getIDs IN "

    .line 34
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 36
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    .line 37
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v2

    const/4 v3, 0x0

    :try_start_0
    const-string v4, "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"

    .line 40
    invoke-virtual {v1, v4}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 41
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/HWIDInterface$HWID;->iBinder:Landroid/os/IBinder;

    const/4 v5, 0x1

    const/4 v6, 0x0

    invoke-interface {v4, v5, v1, v2, v6}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 42
    invoke-virtual {v2}, Landroid/os/Parcel;->readException()V

    .line 43
    invoke-virtual {v2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v3

    .line 44
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "HWDeviceIDHelper getIDs IN res -> "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v4

    .line 47
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 48
    invoke-virtual {v2}, Landroid/os/Parcel;->recycle()V

    .line 49
    invoke-virtual {v4}, Ljava/lang/Throwable;->printStackTrace()V

    .line 52
    :goto_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 53
    invoke-virtual {v2}, Landroid/os/Parcel;->recycle()V

    .line 54
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "HWDeviceIDHelper getIDs IN res2 -> "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-object v3
.end method
