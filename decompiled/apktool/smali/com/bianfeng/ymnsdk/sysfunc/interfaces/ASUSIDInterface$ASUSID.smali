.class public final Lcom/bianfeng/ymnsdk/sysfunc/interfaces/ASUSIDInterface$ASUSID;
.super Ljava/lang/Object;
.source "ASUSIDInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/sysfunc/interfaces/ASUSIDInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/interfaces/ASUSIDInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "ASUSID"
.end annotation


# instance fields
.field private iBinder:Landroid/os/IBinder;


# direct methods
.method public constructor <init>(Landroid/os/IBinder;)V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 23
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/ASUSIDInterface$ASUSID;->iBinder:Landroid/os/IBinder;

    return-void
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 1

    .line 28
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/ASUSIDInterface$ASUSID;->iBinder:Landroid/os/IBinder;

    return-object v0
.end method

.method public getID()Ljava/lang/String;
    .locals 7

    const-string v0, "Wooo"

    const-string v1, " ASUSDeviceIDHelper getID IN "

    .line 33
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 35
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v1

    .line 36
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v2

    const/4 v3, 0x0

    :try_start_0
    const-string v4, "com.asus.msa.SupplementaryDID.IDidAidlInterface"

    .line 39
    invoke-virtual {v1, v4}, Landroid/os/Parcel;->writeInterfaceToken(Ljava/lang/String;)V

    .line 40
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/ASUSIDInterface$ASUSID;->iBinder:Landroid/os/IBinder;

    const/4 v5, 0x3

    const/4 v6, 0x0

    invoke-interface {v4, v5, v1, v2, v6}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    .line 41
    invoke-virtual {v2}, Landroid/os/Parcel;->readException()V

    .line 42
    invoke-virtual {v2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v3

    .line 43
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "ASUSIDInterface getID IN res -> "

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

    .line 46
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 47
    invoke-virtual {v2}, Landroid/os/Parcel;->recycle()V

    .line 48
    invoke-virtual {v4}, Ljava/lang/Throwable;->printStackTrace()V

    .line 51
    :goto_0
    invoke-virtual {v1}, Landroid/os/Parcel;->recycle()V

    .line 52
    invoke-virtual {v2}, Landroid/os/Parcel;->recycle()V

    .line 53
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ASUSIDInterface getID IN res2 -> "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-object v3
.end method
