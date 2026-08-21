.class public final Lcom/tkay/expressad/exoplayer/h/a/c$a;
.super Ljava/io/IOException;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/a/c$a$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1

.field public static final c:I = 0x2

.field public static final d:I = 0x3


# instance fields
.field public final e:I


# direct methods
.method private constructor <init>(ILjava/lang/Exception;)V
    .locals 0

    .line 121
    invoke-direct {p0, p2}, Ljava/io/IOException;-><init>(Ljava/lang/Throwable;)V

    .line 122
    iput p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c$a;->e:I

    return-void
.end method

.method public static a(Ljava/lang/Exception;)Lcom/tkay/expressad/exoplayer/h/a/c$a;
    .locals 2

    .line 98
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/a/c$a;

    const/4 v1, 0x0

    invoke-direct {v0, v1, p0}, Lcom/tkay/expressad/exoplayer/h/a/c$a;-><init>(ILjava/lang/Exception;)V

    return-object v0
.end method

.method private static a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/h/a/c$a;
    .locals 3

    .line 103
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/a/c$a;

    new-instance v1, Ljava/io/IOException;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v2, "Failed to load ad group "

    invoke-virtual {v2, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1, p0}, Ljava/io/IOException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    const/4 p0, 0x1

    invoke-direct {v0, p0, v1}, Lcom/tkay/expressad/exoplayer/h/a/c$a;-><init>(ILjava/lang/Exception;)V

    return-object v0
.end method

.method private static a(Ljava/lang/RuntimeException;)Lcom/tkay/expressad/exoplayer/h/a/c$a;
    .locals 2

    .line 114
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/a/c$a;

    const/4 v1, 0x3

    invoke-direct {v0, v1, p0}, Lcom/tkay/expressad/exoplayer/h/a/c$a;-><init>(ILjava/lang/Exception;)V

    return-object v0
.end method

.method private a()Ljava/lang/RuntimeException;
    .locals 2

    .line 130
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$a;->e:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 131
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/h/a/c$a;->getCause()Ljava/lang/Throwable;

    move-result-object v0

    check-cast v0, Ljava/lang/RuntimeException;

    return-object v0
.end method

.method private static b(Ljava/lang/Exception;)Lcom/tkay/expressad/exoplayer/h/a/c$a;
    .locals 2

    .line 109
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/a/c$a;

    const/4 v1, 0x2

    invoke-direct {v0, v1, p0}, Lcom/tkay/expressad/exoplayer/h/a/c$a;-><init>(ILjava/lang/Exception;)V

    return-object v0
.end method
