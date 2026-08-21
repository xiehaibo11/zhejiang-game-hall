.class public final Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/utils/Preconditions;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "NoThrow"
.end annotation


# static fields
.field private static volatile a:Z = true


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static checkArgument(Z)Z
    .locals 4

    sget-boolean v0, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->a:Z

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    const-string v3, ""

    aput-object v3, v1, v2

    const-string v2, "Illegal argument"

    invoke-static {p0, v0, v2, v1}, Lcom/czhj/sdk/common/utils/Preconditions;->a(ZZLjava/lang/String;[Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method public static checkArgument(ZLjava/lang/String;)Z
    .locals 4

    sget-boolean v0, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->a:Z

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    const-string v3, ""

    aput-object v3, v1, v2

    invoke-static {p0, v0, p1, v1}, Lcom/czhj/sdk/common/utils/Preconditions;->a(ZZLjava/lang/String;[Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method public static checkNotNull(Ljava/lang/Object;)Z
    .locals 4

    sget-boolean v0, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->a:Z

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    const-string v3, ""

    aput-object v3, v1, v2

    const/4 v2, 0x0

    invoke-static {p0, v0, v2, v1}, Lcom/czhj/sdk/common/utils/Preconditions;->a(Ljava/lang/Object;ZLjava/lang/String;[Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method public static checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z
    .locals 4

    sget-boolean v0, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->a:Z

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    const-string v3, ""

    aput-object v3, v1, v2

    invoke-static {p0, v0, p1, v1}, Lcom/czhj/sdk/common/utils/Preconditions;->a(Ljava/lang/Object;ZLjava/lang/String;[Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method public static checkUiThread(Ljava/lang/String;)Z
    .locals 4

    sget-boolean v0, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->a:Z

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    const-string v3, ""

    aput-object v3, v1, v2

    invoke-static {v0, p0, v1}, Lcom/czhj/sdk/common/utils/Preconditions;->a(ZLjava/lang/String;[Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method public static getLineInfo()Ljava/lang/String;
    .locals 3

    :try_start_0
    new-instance v0, Ljava/lang/Throwable;

    invoke-direct {v0}, Ljava/lang/Throwable;-><init>()V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v0

    const/4 v1, 0x2

    aget-object v0, v0, v1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Ljava/lang/StackTraceElement;->getFileName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ": Line "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StackTraceElement;->getMethodName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    const-string v0, ""

    return-object v0
.end method
