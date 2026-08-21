.class public final Lcom/tkay/expressad/exoplayer/e/k$b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/e/k;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/e/k;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "b"
.end annotation


# instance fields
.field private final a:J

.field private final b:Lcom/tkay/expressad/exoplayer/e/k$a;


# direct methods
.method private constructor <init>(J)V
    .locals 2

    const-wide/16 v0, 0x0

    .line 39
    invoke-direct {p0, p1, p2, v0, v1}, Lcom/tkay/expressad/exoplayer/e/k$b;-><init>(JJ)V

    return-void
.end method

.method public constructor <init>(JJ)V
    .locals 2

    .line 47
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 48
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/e/k$b;->a:J

    .line 49
    new-instance p1, Lcom/tkay/expressad/exoplayer/e/k$a;

    const-wide/16 v0, 0x0

    cmp-long p2, p3, v0

    if-nez p2, :cond_0

    .line 50
    sget-object p2, Lcom/tkay/expressad/exoplayer/e/l;->a:Lcom/tkay/expressad/exoplayer/e/l;

    goto :goto_0

    :cond_0
    new-instance p2, Lcom/tkay/expressad/exoplayer/e/l;

    invoke-direct {p2, v0, v1, p3, p4}, Lcom/tkay/expressad/exoplayer/e/l;-><init>(JJ)V

    :goto_0
    invoke-direct {p1, p2}, Lcom/tkay/expressad/exoplayer/e/k$a;-><init>(Lcom/tkay/expressad/exoplayer/e/l;)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/k$b;->b:Lcom/tkay/expressad/exoplayer/e/k$a;

    return-void
.end method


# virtual methods
.method public final a(J)Lcom/tkay/expressad/exoplayer/e/k$a;
    .locals 0

    .line 65
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/e/k$b;->b:Lcom/tkay/expressad/exoplayer/e/k$a;

    return-object p1
.end method

.method public final a()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final b()J
    .locals 2

    .line 60
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/e/k$b;->a:J

    return-wide v0
.end method
