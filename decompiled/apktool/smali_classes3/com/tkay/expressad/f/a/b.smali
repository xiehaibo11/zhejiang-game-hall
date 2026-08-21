.class public final Lcom/tkay/expressad/f/a/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/f/a/b$a;
    }
.end annotation


# static fields
.field private static final a:J = 0x3e8L


# instance fields
.field private b:J

.field private c:J

.field private d:Lcom/tkay/expressad/f/a/a;

.field private e:Lcom/tkay/expressad/f/a/b$a;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    .line 11
    iput-wide v0, p0, Lcom/tkay/expressad/f/a/b;->b:J

    return-void
.end method

.method private a(J)Lcom/tkay/expressad/f/a/b;
    .locals 2

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-gez v0, :cond_0

    const-wide/16 p1, 0x3e8

    .line 33
    :cond_0
    iput-wide p1, p0, Lcom/tkay/expressad/f/a/b;->c:J

    return-object p0
.end method

.method private a(Lcom/tkay/expressad/f/a/a;)Lcom/tkay/expressad/f/a/b;
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/tkay/expressad/f/a/b;->d:Lcom/tkay/expressad/f/a/a;

    return-object p0
.end method

.method private a()V
    .locals 5

    .line 59
    iget-object v0, p0, Lcom/tkay/expressad/f/a/b;->e:Lcom/tkay/expressad/f/a/b$a;

    if-eqz v0, :cond_0

    .line 60
    invoke-virtual {v0}, Lcom/tkay/expressad/f/a/b$a;->cancel()V

    const/4 v0, 0x0

    .line 61
    iput-object v0, p0, Lcom/tkay/expressad/f/a/b;->e:Lcom/tkay/expressad/f/a/b$a;

    .line 63
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/f/a/b;->c:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_1

    .line 64
    iget-wide v0, p0, Lcom/tkay/expressad/f/a/b;->b:J

    const-wide/16 v2, 0x3e8

    add-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/expressad/f/a/b;->c:J

    .line 66
    :cond_1
    new-instance v0, Lcom/tkay/expressad/f/a/b$a;

    iget-wide v1, p0, Lcom/tkay/expressad/f/a/b;->b:J

    iget-wide v3, p0, Lcom/tkay/expressad/f/a/b;->c:J

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/f/a/b$a;-><init>(JJ)V

    iput-object v0, p0, Lcom/tkay/expressad/f/a/b;->e:Lcom/tkay/expressad/f/a/b$a;

    .line 67
    iget-object v1, p0, Lcom/tkay/expressad/f/a/b;->d:Lcom/tkay/expressad/f/a/a;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/f/a/b$a;->a(Lcom/tkay/expressad/f/a/a;)V

    return-void
.end method

.method private b(J)Lcom/tkay/expressad/f/a/b;
    .locals 0

    .line 54
    iput-wide p1, p0, Lcom/tkay/expressad/f/a/b;->b:J

    return-object p0
.end method

.method private b()V
    .locals 5

    .line 74
    iget-object v0, p0, Lcom/tkay/expressad/f/a/b;->e:Lcom/tkay/expressad/f/a/b$a;

    if-nez v0, :cond_2

    if-eqz v0, :cond_0

    .line 1060
    invoke-virtual {v0}, Lcom/tkay/expressad/f/a/b$a;->cancel()V

    const/4 v0, 0x0

    .line 1061
    iput-object v0, p0, Lcom/tkay/expressad/f/a/b;->e:Lcom/tkay/expressad/f/a/b$a;

    .line 1063
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/f/a/b;->c:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_1

    .line 1064
    iget-wide v0, p0, Lcom/tkay/expressad/f/a/b;->b:J

    const-wide/16 v2, 0x3e8

    add-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/expressad/f/a/b;->c:J

    .line 1066
    :cond_1
    new-instance v0, Lcom/tkay/expressad/f/a/b$a;

    iget-wide v1, p0, Lcom/tkay/expressad/f/a/b;->b:J

    iget-wide v3, p0, Lcom/tkay/expressad/f/a/b;->c:J

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/f/a/b$a;-><init>(JJ)V

    iput-object v0, p0, Lcom/tkay/expressad/f/a/b;->e:Lcom/tkay/expressad/f/a/b$a;

    .line 1067
    iget-object v1, p0, Lcom/tkay/expressad/f/a/b;->d:Lcom/tkay/expressad/f/a/a;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/f/a/b$a;->a(Lcom/tkay/expressad/f/a/a;)V

    .line 77
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/f/a/b;->e:Lcom/tkay/expressad/f/a/b$a;

    invoke-virtual {v0}, Lcom/tkay/expressad/f/a/b$a;->start()Landroid/os/CountDownTimer;

    return-void
.end method

.method private c()V
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/tkay/expressad/f/a/b;->e:Lcom/tkay/expressad/f/a/b$a;

    if-eqz v0, :cond_0

    .line 85
    invoke-virtual {v0}, Lcom/tkay/expressad/f/a/b$a;->cancel()V

    const/4 v0, 0x0

    .line 86
    iput-object v0, p0, Lcom/tkay/expressad/f/a/b;->e:Lcom/tkay/expressad/f/a/b$a;

    :cond_0
    return-void
.end method
