.class public final Lcom/czhj/sdk/common/utils/Preconditions;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = ""


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static varargs a(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
    .locals 2

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    :try_start_0
    invoke-static {p0, p1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/util/IllegalFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Sigmob preconditions had a format exception: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/util/IllegalFormatException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-object p0
.end method

.method static synthetic a(Ljava/lang/Object;ZLjava/lang/String;[Ljava/lang/Object;)Z
    .locals 0

    invoke-static {p0, p1, p2, p3}, Lcom/czhj/sdk/common/utils/Preconditions;->b(Ljava/lang/Object;ZLjava/lang/String;[Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method static synthetic a(ZLjava/lang/String;[Ljava/lang/Object;)Z
    .locals 0

    invoke-static {p0, p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions;->b(ZLjava/lang/String;[Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method static synthetic a(ZZLjava/lang/String;[Ljava/lang/Object;)Z
    .locals 0

    invoke-static {p0, p1, p2, p3}, Lcom/czhj/sdk/common/utils/Preconditions;->b(ZZLjava/lang/String;[Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method private static varargs b(Ljava/lang/Object;ZLjava/lang/String;[Ljava/lang/Object;)Z
    .locals 0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    invoke-static {p2, p3}, Lcom/czhj/sdk/common/utils/Preconditions;->a(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    if-nez p1, :cond_1

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const/4 p0, 0x0

    return p0

    :cond_1
    new-instance p1, Ljava/lang/NullPointerException;

    invoke-direct {p1, p0}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private static varargs b(ZLjava/lang/String;[Ljava/lang/Object;)Z
    .locals 2

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions;->a(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    if-nez p0, :cond_1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const/4 p0, 0x0

    return p0

    :cond_1
    new-instance p0, Ljava/lang/IllegalStateException;

    invoke-direct {p0, p1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method private static varargs b(ZZLjava/lang/String;[Ljava/lang/Object;)Z
    .locals 0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    invoke-static {p2, p3}, Lcom/czhj/sdk/common/utils/Preconditions;->a(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    if-nez p1, :cond_1

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const/4 p0, 0x0

    return p0

    :cond_1
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-direct {p1, p0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private static varargs c(ZZLjava/lang/String;[Ljava/lang/Object;)Z
    .locals 0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    invoke-static {p2, p3}, Lcom/czhj/sdk/common/utils/Preconditions;->a(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    if-nez p1, :cond_1

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const/4 p0, 0x0

    return p0

    :cond_1
    new-instance p1, Ljava/lang/IllegalStateException;

    invoke-direct {p1, p0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public static checkNotNull(Ljava/lang/Object;)V
    .locals 4

    const/4 v0, 0x1

    new-array v1, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    const-string v3, ""

    aput-object v3, v1, v2

    const-string v2, "Object can not be null."

    invoke-static {p0, v0, v2, v1}, Lcom/czhj/sdk/common/utils/Preconditions;->b(Ljava/lang/Object;ZLjava/lang/String;[Ljava/lang/Object;)Z

    return-void
.end method
