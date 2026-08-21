.class final Lcom/tkay/expressad/exoplayer/j/a/j;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String; = "exo_"

.field private static final b:Ljava/lang/String; = "exo_redir"

.field private static final c:Ljava/lang/String; = "exo_len"


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 65
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/tkay/expressad/exoplayer/j/a/i;)J
    .locals 2

    const-string v0, "exo_len"

    .line 33
    invoke-interface {p0, v0}, Lcom/tkay/expressad/exoplayer/j/a/i;->a(Ljava/lang/String;)J

    move-result-wide v0

    return-wide v0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/j/a/k;)V
    .locals 1

    const-string v0, "exo_len"

    .line 43
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/j/a/k;->a(Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/j/a/k;

    return-void
.end method

.method public static a(Lcom/tkay/expressad/exoplayer/j/a/k;J)V
    .locals 1

    const-string v0, "exo_len"

    .line 38
    invoke-virtual {p0, v0, p1, p2}, Lcom/tkay/expressad/exoplayer/j/a/k;->a(Ljava/lang/String;J)Lcom/tkay/expressad/exoplayer/j/a/k;

    return-void
.end method

.method public static a(Lcom/tkay/expressad/exoplayer/j/a/k;Landroid/net/Uri;)V
    .locals 1

    .line 57
    invoke-virtual {p1}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "exo_redir"

    invoke-virtual {p0, v0, p1}, Lcom/tkay/expressad/exoplayer/j/a/k;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/j/a/k;

    return-void
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/j/a/i;)Landroid/net/Uri;
    .locals 3

    const/4 v0, 0x0

    .line 48
    move-object v1, v0

    check-cast v1, Ljava/lang/String;

    const-string v2, "exo_redir"

    invoke-interface {p0, v2, v1}, Lcom/tkay/expressad/exoplayer/j/a/i;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    if-nez p0, :cond_0

    return-object v0

    .line 49
    :cond_0
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    return-object p0
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/j/a/k;)V
    .locals 1

    const-string v0, "exo_redir"

    .line 62
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/j/a/k;->a(Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/j/a/k;

    return-void
.end method
