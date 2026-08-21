.class public abstract Lcom/tkay/expressad/exoplayer/h/b/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/t$c;


# instance fields
.field public final b:Lcom/tkay/expressad/exoplayer/j/k;

.field public final c:I

.field public final d:Lcom/tkay/expressad/exoplayer/m;

.field public final e:I

.field public final f:Ljava/lang/Object;

.field public final g:J

.field public final h:J

.field protected final i:Lcom/tkay/expressad/exoplayer/j/h;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/j/h;Lcom/tkay/expressad/exoplayer/j/k;Lcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJ)V
    .locals 0

    .line 88
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 89
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/j/h;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/c;->i:Lcom/tkay/expressad/exoplayer/j/h;

    .line 90
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/j/k;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/c;->b:Lcom/tkay/expressad/exoplayer/j/k;

    const/4 p1, 0x1

    .line 91
    iput p1, p0, Lcom/tkay/expressad/exoplayer/h/b/c;->c:I

    .line 92
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/c;->d:Lcom/tkay/expressad/exoplayer/m;

    .line 93
    iput p4, p0, Lcom/tkay/expressad/exoplayer/h/b/c;->e:I

    .line 94
    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/h/b/c;->f:Ljava/lang/Object;

    .line 95
    iput-wide p6, p0, Lcom/tkay/expressad/exoplayer/h/b/c;->g:J

    .line 96
    iput-wide p8, p0, Lcom/tkay/expressad/exoplayer/h/b/c;->h:J

    return-void
.end method

.method private c()J
    .locals 4

    .line 103
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/b/c;->h:J

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/h/b/c;->g:J

    sub-long/2addr v0, v2

    return-wide v0
.end method


# virtual methods
.method public abstract d()J
.end method
