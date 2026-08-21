.class public final Lcom/tkay/expressad/exoplayer/ae$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/ae;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "b"
.end annotation


# instance fields
.field public a:Ljava/lang/Object;

.field public b:J

.field public c:J

.field public d:Z

.field public e:Z

.field public f:I

.field public g:I

.field public h:J

.field public i:J

.field public j:J


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 121
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a()J
    .locals 2

    .line 209
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/ae$b;->h:J

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v0

    return-wide v0
.end method

.method private b()J
    .locals 2

    .line 219
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/ae$b;->h:J

    return-wide v0
.end method

.method private c()J
    .locals 2

    .line 226
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/ae$b;->i:J

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v0

    return-wide v0
.end method

.method private d()J
    .locals 2

    .line 233
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/ae$b;->i:J

    return-wide v0
.end method

.method private e()J
    .locals 2

    .line 241
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/ae$b;->j:J

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/b;->a(J)J

    move-result-wide v0

    return-wide v0
.end method

.method private f()J
    .locals 2

    .line 249
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/ae$b;->j:J

    return-wide v0
.end method


# virtual methods
.method public final a(Ljava/lang/Object;JJZZJJJ)Lcom/tkay/expressad/exoplayer/ae$b;
    .locals 0

    .line 189
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/ae$b;->a:Ljava/lang/Object;

    .line 190
    iput-wide p2, p0, Lcom/tkay/expressad/exoplayer/ae$b;->b:J

    .line 191
    iput-wide p4, p0, Lcom/tkay/expressad/exoplayer/ae$b;->c:J

    .line 192
    iput-boolean p6, p0, Lcom/tkay/expressad/exoplayer/ae$b;->d:Z

    .line 193
    iput-boolean p7, p0, Lcom/tkay/expressad/exoplayer/ae$b;->e:Z

    .line 194
    iput-wide p8, p0, Lcom/tkay/expressad/exoplayer/ae$b;->h:J

    .line 195
    iput-wide p10, p0, Lcom/tkay/expressad/exoplayer/ae$b;->i:J

    const/4 p1, 0x0

    .line 196
    iput p1, p0, Lcom/tkay/expressad/exoplayer/ae$b;->f:I

    .line 197
    iput p1, p0, Lcom/tkay/expressad/exoplayer/ae$b;->g:I

    .line 198
    iput-wide p12, p0, Lcom/tkay/expressad/exoplayer/ae$b;->j:J

    return-object p0
.end method
