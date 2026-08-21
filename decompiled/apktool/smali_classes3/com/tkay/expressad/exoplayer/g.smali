.class public final Lcom/tkay/expressad/exoplayer/g;
.super Ljava/lang/Exception;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/g$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1

.field public static final c:I = 0x2


# instance fields
.field public final d:I

.field public final e:I


# direct methods
.method private constructor <init>(ILjava/lang/String;Ljava/lang/Throwable;I)V
    .locals 0

    .line 101
    invoke-direct {p0, p2, p3}, Ljava/lang/Exception;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 102
    iput p1, p0, Lcom/tkay/expressad/exoplayer/g;->d:I

    .line 103
    iput p4, p0, Lcom/tkay/expressad/exoplayer/g;->e:I

    return-void
.end method

.method public static a(Ljava/io/IOException;)Lcom/tkay/expressad/exoplayer/g;
    .locals 4

    .line 86
    new-instance v0, Lcom/tkay/expressad/exoplayer/g;

    const/4 v1, 0x0

    const/4 v2, 0x0

    const/4 v3, -0x1

    invoke-direct {v0, v1, v2, p0, v3}, Lcom/tkay/expressad/exoplayer/g;-><init>(ILjava/lang/String;Ljava/lang/Throwable;I)V

    return-object v0
.end method

.method public static a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;
    .locals 3

    .line 76
    new-instance v0, Lcom/tkay/expressad/exoplayer/g;

    const/4 v1, 0x1

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2, p0, p1}, Lcom/tkay/expressad/exoplayer/g;-><init>(ILjava/lang/String;Ljava/lang/Throwable;I)V

    return-object v0
.end method

.method static a(Ljava/lang/RuntimeException;)Lcom/tkay/expressad/exoplayer/g;
    .locals 4

    .line 96
    new-instance v0, Lcom/tkay/expressad/exoplayer/g;

    const/4 v1, 0x2

    const/4 v2, 0x0

    const/4 v3, -0x1

    invoke-direct {v0, v1, v2, p0, v3}, Lcom/tkay/expressad/exoplayer/g;-><init>(ILjava/lang/String;Ljava/lang/Throwable;I)V

    return-object v0
.end method

.method private a()Ljava/io/IOException;
    .locals 1

    .line 112
    iget v0, p0, Lcom/tkay/expressad/exoplayer/g;->d:I

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 113
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/g;->getCause()Ljava/lang/Throwable;

    move-result-object v0

    check-cast v0, Ljava/io/IOException;

    return-object v0
.end method

.method private b()Ljava/lang/Exception;
    .locals 2

    .line 122
    iget v0, p0, Lcom/tkay/expressad/exoplayer/g;->d:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 123
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/g;->getCause()Ljava/lang/Throwable;

    move-result-object v0

    check-cast v0, Ljava/lang/Exception;

    return-object v0
.end method

.method private c()Ljava/lang/RuntimeException;
    .locals 2

    .line 132
    iget v0, p0, Lcom/tkay/expressad/exoplayer/g;->d:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 133
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/g;->getCause()Ljava/lang/Throwable;

    move-result-object v0

    check-cast v0, Ljava/lang/RuntimeException;

    return-object v0
.end method
