.class public final Lcom/tkay/expressad/exoplayer/h/q;
.super Lcom/tkay/expressad/exoplayer/h/f;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/q$a;,
        Lcom/tkay/expressad/exoplayer/h/q$b;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/expressad/exoplayer/h/f<",
        "Ljava/lang/Void;",
        ">;"
    }
.end annotation


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/h/s;

.field private final b:I

.field private c:I


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/h/s;)V
    .locals 1

    const/4 v0, 0x0

    .line 48
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/h/q;-><init>(Lcom/tkay/expressad/exoplayer/h/s;B)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/h/s;B)V
    .locals 0

    .line 57
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/f;-><init>()V

    const/4 p2, 0x1

    .line 58
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 59
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/q;->a:Lcom/tkay/expressad/exoplayer/h/s;

    const p1, 0x7fffffff

    .line 60
    iput p1, p0, Lcom/tkay/expressad/exoplayer/h/q;->b:I

    return-void
.end method

.method private b(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V
    .locals 2

    .line 91
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/h/q;->c:I

    .line 93
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/q;->b:I

    const v1, 0x7fffffff

    if-eq v0, v1, :cond_0

    .line 94
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/q$b;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/q;->b:I

    invoke-direct {v0, p1, v1}, Lcom/tkay/expressad/exoplayer/h/q$b;-><init>(Lcom/tkay/expressad/exoplayer/ae;I)V

    goto :goto_0

    .line 95
    :cond_0
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/q$a;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/exoplayer/h/q$a;-><init>(Lcom/tkay/expressad/exoplayer/ae;)V

    .line 96
    :goto_0
    invoke-virtual {p0, v0, p2}, Lcom/tkay/expressad/exoplayer/h/q;->a(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)Lcom/tkay/expressad/exoplayer/h/r;
    .locals 3

    .line 71
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/q;->b:I

    const v1, 0x7fffffff

    if-eq v0, v1, :cond_0

    .line 72
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/q;->a:Lcom/tkay/expressad/exoplayer/h/s;

    iget v1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    iget v2, p0, Lcom/tkay/expressad/exoplayer/h/q;->c:I

    rem-int/2addr v1, v2

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/exoplayer/h/s$a;->a(I)Lcom/tkay/expressad/exoplayer/h/s$a;

    move-result-object p1

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)Lcom/tkay/expressad/exoplayer/h/r;

    move-result-object p1

    return-object p1

    .line 74
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/q;->a:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)Lcom/tkay/expressad/exoplayer/h/r;

    move-result-object p1

    return-object p1
.end method

.method public final a()V
    .locals 1

    .line 84
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/h/f;->a()V

    const/4 v0, 0x0

    .line 85
    iput v0, p0, Lcom/tkay/expressad/exoplayer/h/q;->c:I

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/r;)V
    .locals 1

    .line 79
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/q;->a:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h/r;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h;Z)V
    .locals 0

    .line 65
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f;->a(Lcom/tkay/expressad/exoplayer/h;Z)V

    .line 66
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/q;->a:Lcom/tkay/expressad/exoplayer/h/s;

    const/4 p2, 0x0

    invoke-virtual {p0, p2, p1}, Lcom/tkay/expressad/exoplayer/h/q;->a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s;)V

    return-void
.end method

.method protected final synthetic a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V
    .locals 0

    .line 1091
    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/h/q;->c:I

    .line 1093
    iget p1, p0, Lcom/tkay/expressad/exoplayer/h/q;->b:I

    const p2, 0x7fffffff

    if-eq p1, p2, :cond_0

    .line 1094
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/q$b;

    iget p2, p0, Lcom/tkay/expressad/exoplayer/h/q;->b:I

    invoke-direct {p1, p3, p2}, Lcom/tkay/expressad/exoplayer/h/q$b;-><init>(Lcom/tkay/expressad/exoplayer/ae;I)V

    goto :goto_0

    .line 1095
    :cond_0
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/q$a;

    invoke-direct {p1, p3}, Lcom/tkay/expressad/exoplayer/h/q$a;-><init>(Lcom/tkay/expressad/exoplayer/ae;)V

    .line 1096
    :goto_0
    invoke-virtual {p0, p1, p4}, Lcom/tkay/expressad/exoplayer/h/q;->a(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V

    return-void
.end method
