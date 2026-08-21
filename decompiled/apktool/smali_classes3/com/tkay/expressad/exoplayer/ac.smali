.class public final Lcom/tkay/expressad/exoplayer/ac;
.super Ljava/lang/Object;


# static fields
.field public static final a:Lcom/tkay/expressad/exoplayer/ac;

.field public static final b:Lcom/tkay/expressad/exoplayer/ac;

.field public static final c:Lcom/tkay/expressad/exoplayer/ac;

.field public static final d:Lcom/tkay/expressad/exoplayer/ac;

.field public static final e:Lcom/tkay/expressad/exoplayer/ac;


# instance fields
.field public final f:J

.field public final g:J


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 40
    new-instance v0, Lcom/tkay/expressad/exoplayer/ac;

    const-wide/16 v1, 0x0

    invoke-direct {v0, v1, v2, v1, v2}, Lcom/tkay/expressad/exoplayer/ac;-><init>(JJ)V

    sput-object v0, Lcom/tkay/expressad/exoplayer/ac;->a:Lcom/tkay/expressad/exoplayer/ac;

    .line 42
    new-instance v0, Lcom/tkay/expressad/exoplayer/ac;

    const-wide v3, 0x7fffffffffffffffL

    invoke-direct {v0, v3, v4, v3, v4}, Lcom/tkay/expressad/exoplayer/ac;-><init>(JJ)V

    sput-object v0, Lcom/tkay/expressad/exoplayer/ac;->b:Lcom/tkay/expressad/exoplayer/ac;

    .line 45
    new-instance v0, Lcom/tkay/expressad/exoplayer/ac;

    invoke-direct {v0, v3, v4, v1, v2}, Lcom/tkay/expressad/exoplayer/ac;-><init>(JJ)V

    sput-object v0, Lcom/tkay/expressad/exoplayer/ac;->c:Lcom/tkay/expressad/exoplayer/ac;

    .line 47
    new-instance v0, Lcom/tkay/expressad/exoplayer/ac;

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/exoplayer/ac;-><init>(JJ)V

    sput-object v0, Lcom/tkay/expressad/exoplayer/ac;->d:Lcom/tkay/expressad/exoplayer/ac;

    .line 49
    sget-object v0, Lcom/tkay/expressad/exoplayer/ac;->a:Lcom/tkay/expressad/exoplayer/ac;

    sput-object v0, Lcom/tkay/expressad/exoplayer/ac;->e:Lcom/tkay/expressad/exoplayer/ac;

    return-void
.end method

.method public constructor <init>(JJ)V
    .locals 5

    .line 68
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    cmp-long v2, p1, v0

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-ltz v2, :cond_0

    move v2, v3

    goto :goto_0

    :cond_0
    move v2, v4

    .line 69
    :goto_0
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    cmp-long v0, p3, v0

    if-ltz v0, :cond_1

    goto :goto_1

    :cond_1
    move v3, v4

    .line 70
    :goto_1
    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 71
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/ac;->f:J

    .line 72
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/ac;->g:J

    return-void
.end method


# virtual methods
.method public final equals(Ljava/lang/Object;)Z
    .locals 6

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 80
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_0

    .line 83
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/ac;

    .line 84
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/ac;->f:J

    iget-wide v4, p1, Lcom/tkay/expressad/exoplayer/ac;->f:J

    cmp-long v2, v2, v4

    if-nez v2, :cond_2

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/ac;->g:J

    iget-wide v4, p1, Lcom/tkay/expressad/exoplayer/ac;->g:J

    cmp-long p1, v2, v4

    if-nez p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 3

    .line 90
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/ac;->f:J

    long-to-int v0, v0

    mul-int/lit8 v0, v0, 0x1f

    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/ac;->g:J

    long-to-int v1, v1

    add-int/2addr v0, v1

    return v0
.end method
