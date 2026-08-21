.class public abstract Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface$up;
.super Landroid/os/Binder;
.source "OppoIDInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "up"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface$up$down;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    return-void
.end method

.method public static genInterface(Landroid/os/IBinder;)Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.heytap.openid.IOpenID"

    .line 58
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 59
    instance-of v1, v0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface;

    if-nez v1, :cond_1

    goto :goto_0

    .line 63
    :cond_1
    check-cast v0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface;

    return-object v0

    .line 60
    :cond_2
    :goto_0
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface$up$down;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/OppoIDInterface$up$down;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method
