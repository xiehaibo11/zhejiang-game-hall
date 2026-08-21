.class final Lcom/tkay/expressad/exoplayer/b/l$d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/b/l;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "d"
.end annotation


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/v;

.field private final b:J

.field private final c:J


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/v;JJ)V
    .locals 0

    .line 1258
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1259
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/l$d;->a:Lcom/tkay/expressad/exoplayer/v;

    .line 1260
    iput-wide p2, p0, Lcom/tkay/expressad/exoplayer/b/l$d;->b:J

    .line 1261
    iput-wide p4, p0, Lcom/tkay/expressad/exoplayer/b/l$d;->c:J

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/exoplayer/v;JJB)V
    .locals 0

    .line 1251
    invoke-direct/range {p0 .. p5}, Lcom/tkay/expressad/exoplayer/b/l$d;-><init>(Lcom/tkay/expressad/exoplayer/v;JJ)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/b/l$d;)Lcom/tkay/expressad/exoplayer/v;
    .locals 0

    .line 1251
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/b/l$d;->a:Lcom/tkay/expressad/exoplayer/v;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/b/l$d;)J
    .locals 2

    .line 1251
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l$d;->c:J

    return-wide v0
.end method

.method static synthetic c(Lcom/tkay/expressad/exoplayer/b/l$d;)J
    .locals 2

    .line 1251
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/l$d;->b:J

    return-wide v0
.end method
