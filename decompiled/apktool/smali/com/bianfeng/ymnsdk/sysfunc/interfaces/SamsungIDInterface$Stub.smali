.class public abstract Lcom/bianfeng/ymnsdk/sysfunc/interfaces/SamsungIDInterface$Stub;
.super Landroid/os/Binder;
.source "SamsungIDInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/sysfunc/interfaces/SamsungIDInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/interfaces/SamsungIDInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 58
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.samsung.android.deviceidservice.IDeviceIdService"

    .line 59
    invoke-virtual {p0, p0, v0}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/SamsungIDInterface$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public a(Landroid/os/IBinder;)Lcom/bianfeng/ymnsdk/sysfunc/interfaces/SamsungIDInterface;
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    const-string v1, "com.samsung.android.deviceidservice.IDeviceIdService"

    .line 66
    invoke-interface {p1, v1}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v1

    if-nez v1, :cond_1

    return-object v0

    .line 70
    :cond_1
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/SamsungIDInterface$Proxy;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/SamsungIDInterface$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method
