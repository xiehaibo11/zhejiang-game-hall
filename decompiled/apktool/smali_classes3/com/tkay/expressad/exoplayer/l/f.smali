.class public final Lcom/tkay/expressad/exoplayer/l/f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/l/f$b;,
        Lcom/tkay/expressad/exoplayer/l/f$a;
    }
.end annotation


# static fields
.field private static final a:J = 0x1f4L

.field private static final b:J = 0x1312d00L

.field private static final c:J = 0x50L

.field private static final d:I = 0x6


# instance fields
.field private final e:Landroid/view/WindowManager;

.field private final f:Lcom/tkay/expressad/exoplayer/l/f$b;

.field private final g:Lcom/tkay/expressad/exoplayer/l/f$a;

.field private h:J

.field private i:J

.field private j:J

.field private k:J

.field private l:J

.field private m:Z

.field private n:J

.field private o:J

.field private p:J


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    .line 67
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/l/f;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 3

    .line 76
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 78
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    const-string v1, "window"

    .line 79
    invoke-virtual {p1, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/WindowManager;

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/l/f;->e:Landroid/view/WindowManager;

    goto :goto_0

    .line 81
    :cond_0
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->e:Landroid/view/WindowManager;

    .line 83
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/f;->e:Landroid/view/WindowManager;

    if-eqz v1, :cond_2

    .line 84
    sget v1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v2, 0x11

    if-lt v1, v2, :cond_1

    const-string v1, "display"

    .line 1195
    invoke-virtual {p1, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/hardware/display/DisplayManager;

    if-eqz p1, :cond_1

    .line 1196
    new-instance v0, Lcom/tkay/expressad/exoplayer/l/f$a;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/exoplayer/l/f$a;-><init>(Lcom/tkay/expressad/exoplayer/l/f;Landroid/hardware/display/DisplayManager;)V

    .line 84
    :cond_1
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->g:Lcom/tkay/expressad/exoplayer/l/f$a;

    .line 85
    invoke-static {}, Lcom/tkay/expressad/exoplayer/l/f$b;->a()Lcom/tkay/expressad/exoplayer/l/f$b;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/l/f;->f:Lcom/tkay/expressad/exoplayer/l/f$b;

    goto :goto_1

    .line 87
    :cond_2
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->g:Lcom/tkay/expressad/exoplayer/l/f$a;

    .line 88
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->f:Lcom/tkay/expressad/exoplayer/l/f$b;

    :goto_1
    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    .line 90
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->h:J

    .line 91
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->i:J

    return-void
.end method

.method private static a(JJJ)J
    .locals 4

    sub-long v0, p0, p2

    .line 219
    div-long/2addr v0, p4

    mul-long/2addr v0, p4

    add-long/2addr p2, v0

    cmp-long v0, p0, p2

    if-gtz v0, :cond_0

    sub-long p4, p2, p4

    goto :goto_0

    :cond_0
    add-long/2addr p4, p2

    move-wide v2, p2

    move-wide p2, p4

    move-wide p4, v2

    :goto_0
    sub-long v0, p2, p0

    sub-long/2addr p0, p4

    cmp-long p0, v0, p0

    if-gez p0, :cond_1

    return-wide p2

    :cond_1
    return-wide p4
.end method

.method private a(Landroid/content/Context;)Lcom/tkay/expressad/exoplayer/l/f$a;
    .locals 1

    const-string v0, "display"

    .line 195
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/hardware/display/DisplayManager;

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 196
    :cond_0
    new-instance v0, Lcom/tkay/expressad/exoplayer/l/f$a;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/exoplayer/l/f$a;-><init>(Lcom/tkay/expressad/exoplayer/l/f;Landroid/hardware/display/DisplayManager;)V

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/l/f;)V
    .locals 0

    .line 38
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/f;->c()V

    return-void
.end method

.method private b(JJ)Z
    .locals 2

    .line 213
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->o:J

    sub-long/2addr p1, v0

    .line 214
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->n:J

    sub-long/2addr p3, v0

    sub-long/2addr p3, p1

    .line 215
    invoke-static {p3, p4}, Ljava/lang/Math;->abs(J)J

    move-result-wide p1

    const-wide/32 p3, 0x1312d00

    cmp-long p1, p1, p3

    if-lez p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method private c()V
    .locals 4

    .line 202
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->e:Landroid/view/WindowManager;

    invoke-interface {v0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 204
    invoke-virtual {v0}, Landroid/view/Display;->getRefreshRate()F

    move-result v0

    float-to-double v0, v0

    const-wide v2, 0x41cdcd6500000000L    # 1.0E9

    div-double/2addr v2, v0

    double-to-long v0, v2

    .line 205
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->h:J

    const-wide/16 v2, 0x50

    mul-long/2addr v0, v2

    const-wide/16 v2, 0x64

    .line 206
    div-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->i:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method


# virtual methods
.method public final a(JJ)J
    .locals 10

    const-wide/16 v0, 0x3e8

    mul-long/2addr v0, p1

    .line 136
    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/l/f;->m:Z

    if-eqz v2, :cond_3

    .line 138
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/f;->j:J

    cmp-long v2, p1, v2

    if-eqz v2, :cond_0

    .line 139
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/f;->p:J

    const-wide/16 v4, 0x1

    add-long/2addr v2, v4

    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/f;->p:J

    .line 140
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/f;->l:J

    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/f;->k:J

    .line 142
    :cond_0
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/f;->p:J

    const-wide/16 v4, 0x6

    cmp-long v4, v2, v4

    const/4 v5, 0x0

    if-ltz v4, :cond_2

    .line 147
    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/l/f;->o:J

    sub-long v6, v0, v6

    div-long/2addr v6, v2

    .line 150
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/f;->k:J

    add-long/2addr v2, v6

    .line 152
    invoke-direct {p0, v2, v3, p3, p4}, Lcom/tkay/expressad/exoplayer/l/f;->b(JJ)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 153
    iput-boolean v5, p0, Lcom/tkay/expressad/exoplayer/l/f;->m:Z

    goto :goto_0

    .line 156
    :cond_1
    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/l/f;->n:J

    add-long/2addr v4, v2

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/l/f;->o:J

    sub-long/2addr v4, v6

    goto :goto_1

    .line 162
    :cond_2
    invoke-direct {p0, v0, v1, p3, p4}, Lcom/tkay/expressad/exoplayer/l/f;->b(JJ)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 163
    iput-boolean v5, p0, Lcom/tkay/expressad/exoplayer/l/f;->m:Z

    :cond_3
    :goto_0
    move-wide v4, p3

    move-wide v2, v0

    .line 169
    :goto_1
    iget-boolean v6, p0, Lcom/tkay/expressad/exoplayer/l/f;->m:Z

    if-nez v6, :cond_4

    .line 170
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->o:J

    .line 171
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/l/f;->n:J

    const-wide/16 p3, 0x0

    .line 172
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/l/f;->p:J

    const/4 p3, 0x1

    .line 173
    iput-boolean p3, p0, Lcom/tkay/expressad/exoplayer/l/f;->m:Z

    .line 176
    :cond_4
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/l/f;->j:J

    .line 177
    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/l/f;->l:J

    .line 179
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/f;->f:Lcom/tkay/expressad/exoplayer/l/f$b;

    if-eqz p1, :cond_9

    iget-wide p2, p0, Lcom/tkay/expressad/exoplayer/l/f;->h:J

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long p2, p2, v0

    if-nez p2, :cond_5

    goto :goto_4

    .line 182
    :cond_5
    iget-wide p1, p1, Lcom/tkay/expressad/exoplayer/l/f$b;->a:J

    cmp-long p3, p1, v0

    if-nez p3, :cond_6

    return-wide v4

    .line 188
    :cond_6
    iget-wide p3, p0, Lcom/tkay/expressad/exoplayer/l/f;->h:J

    sub-long v0, v4, p1

    .line 1219
    div-long/2addr v0, p3

    mul-long/2addr v0, p3

    add-long/2addr p1, v0

    cmp-long v0, v4, p1

    if-gtz v0, :cond_7

    sub-long p3, p1, p3

    goto :goto_2

    :cond_7
    add-long/2addr p3, p1

    move-wide v8, p1

    move-wide p1, p3

    move-wide p3, v8

    :goto_2
    sub-long v0, p1, v4

    sub-long/2addr v4, p3

    cmp-long v0, v0, v4

    if-gez v0, :cond_8

    goto :goto_3

    :cond_8
    move-wide p1, p3

    .line 190
    :goto_3
    iget-wide p3, p0, Lcom/tkay/expressad/exoplayer/l/f;->i:J

    sub-long/2addr p1, p3

    return-wide p1

    :cond_9
    :goto_4
    return-wide v4
.end method

.method public final a()V
    .locals 1

    const/4 v0, 0x0

    .line 98
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->m:Z

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->e:Landroid/view/WindowManager;

    if-eqz v0, :cond_1

    .line 100
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->f:Lcom/tkay/expressad/exoplayer/l/f$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/l/f$b;->b()V

    .line 101
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->g:Lcom/tkay/expressad/exoplayer/l/f$a;

    if-eqz v0, :cond_0

    .line 102
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/l/f$a;->a()V

    .line 104
    :cond_0
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/f;->c()V

    :cond_1
    return-void
.end method

.method public final b()V
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->e:Landroid/view/WindowManager;

    if-eqz v0, :cond_1

    .line 113
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->g:Lcom/tkay/expressad/exoplayer/l/f$a;

    if-eqz v0, :cond_0

    .line 114
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/l/f$a;->b()V

    .line 116
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f;->f:Lcom/tkay/expressad/exoplayer/l/f$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/l/f$b;->c()V

    :cond_1
    return-void
.end method
