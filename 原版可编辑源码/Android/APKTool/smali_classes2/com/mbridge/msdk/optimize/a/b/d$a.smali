.class public abstract Lcom/mbridge/msdk/optimize/a/b/d$a;
.super Landroid/os/Binder;
.source "OppoIDInterface.java"

# interfaces
.implements Lcom/mbridge/msdk/optimize/a/b/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/optimize/a/b/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/optimize/a/b/d$a$a;
    }
.end annotation


# direct methods
.method public static a(Landroid/os/IBinder;)Lcom/mbridge/msdk/optimize/a/b/d;
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    const-string v1, "com.heytap.openid.IOpenID"

    .line 54
    invoke-interface {p0, v1}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 55
    instance-of v2, v1, Lcom/mbridge/msdk/optimize/a/b/d;

    if-nez v2, :cond_1

    goto :goto_0

    .line 58
    :cond_1
    check-cast v1, Lcom/mbridge/msdk/optimize/a/b/d;

    return-object v1

    .line 56
    :cond_2
    :goto_0
    new-instance v1, Lcom/mbridge/msdk/optimize/a/b/d$a$a;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/optimize/a/b/d$a$a;-><init>(Landroid/os/IBinder;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    return-object v0
.end method
