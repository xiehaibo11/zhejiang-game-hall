.class public abstract Lcom/tkay/china/a/a/h$a;
.super Landroid/os/Binder;

# interfaces
.implements Lcom/tkay/china/a/a/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/china/a/a/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/china/a/a/h$a$a;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    return-void
.end method

.method public static a(Landroid/os/IBinder;)Lcom/tkay/china/a/a/h;
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    const-string v1, "com.heytap.openid.IOpenID"

    .line 22
    invoke-interface {p0, v1}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 23
    instance-of v2, v1, Lcom/tkay/china/a/a/h;

    if-eqz v2, :cond_1

    check-cast v1, Lcom/tkay/china/a/a/h;

    return-object v1

    :cond_1
    new-instance v1, Lcom/tkay/china/a/a/h$a$a;

    invoke-direct {v1, p0}, Lcom/tkay/china/a/a/h$a$a;-><init>(Landroid/os/IBinder;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    return-object v0
.end method
