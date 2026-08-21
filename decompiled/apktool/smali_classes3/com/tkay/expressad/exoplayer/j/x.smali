.class public final Lcom/tkay/expressad/exoplayer/j/x;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/h$a;


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/j/h$a;

.field private final b:Lcom/tkay/expressad/exoplayer/k/v;

.field private final c:I


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/k/v;I)V
    .locals 0

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 38
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/x;->a:Lcom/tkay/expressad/exoplayer/j/h$a;

    .line 39
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/j/x;->b:Lcom/tkay/expressad/exoplayer/k/v;

    .line 40
    iput p3, p0, Lcom/tkay/expressad/exoplayer/j/x;->c:I

    return-void
.end method

.method private b()Lcom/tkay/expressad/exoplayer/j/w;
    .locals 4

    .line 45
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/w;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/x;->a:Lcom/tkay/expressad/exoplayer/j/h$a;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/j/h$a;->a()Lcom/tkay/expressad/exoplayer/j/h;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/x;->b:Lcom/tkay/expressad/exoplayer/k/v;

    iget v3, p0, Lcom/tkay/expressad/exoplayer/j/x;->c:I

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/j/w;-><init>(Lcom/tkay/expressad/exoplayer/j/h;Lcom/tkay/expressad/exoplayer/k/v;I)V

    return-object v0
.end method


# virtual methods
.method public final synthetic a()Lcom/tkay/expressad/exoplayer/j/h;
    .locals 4

    .line 1045
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/w;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/x;->a:Lcom/tkay/expressad/exoplayer/j/h$a;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/j/h$a;->a()Lcom/tkay/expressad/exoplayer/j/h;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/x;->b:Lcom/tkay/expressad/exoplayer/k/v;

    iget v3, p0, Lcom/tkay/expressad/exoplayer/j/x;->c:I

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/j/w;-><init>(Lcom/tkay/expressad/exoplayer/j/h;Lcom/tkay/expressad/exoplayer/k/v;I)V

    return-object v0
.end method
