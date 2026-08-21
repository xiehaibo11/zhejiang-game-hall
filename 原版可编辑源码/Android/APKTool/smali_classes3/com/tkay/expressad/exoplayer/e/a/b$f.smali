.class final Lcom/tkay/expressad/exoplayer/e/a/b$f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/e/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "f"
.end annotation


# instance fields
.field private final a:I

.field private final b:J

.field private final c:I


# direct methods
.method public constructor <init>(IJI)V
    .locals 0

    .line 1268
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1269
    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/a/b$f;->a:I

    .line 1270
    iput-wide p2, p0, Lcom/tkay/expressad/exoplayer/e/a/b$f;->b:J

    .line 1271
    iput p4, p0, Lcom/tkay/expressad/exoplayer/e/a/b$f;->c:I

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/e/a/b$f;)J
    .locals 2

    .line 1262
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$f;->b:J

    return-wide v0
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/e/a/b$f;)I
    .locals 0

    .line 1262
    iget p0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$f;->a:I

    return p0
.end method

.method static synthetic c(Lcom/tkay/expressad/exoplayer/e/a/b$f;)I
    .locals 0

    .line 1262
    iget p0, p0, Lcom/tkay/expressad/exoplayer/e/a/b$f;->c:I

    return p0
.end method
