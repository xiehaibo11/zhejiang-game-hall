.class public final Lcom/tkay/expressad/video/dynview/i/c/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/dynview/i/c/b$a;
    }
.end annotation


# static fields
.field private static final a:J = 0x3e8L


# instance fields
.field private b:J

.field private c:J

.field private d:Lcom/tkay/expressad/video/dynview/i/c/a;

.field private e:Lcom/tkay/expressad/video/dynview/i/c/b$a;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    .line 11
    iput-wide v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->b:J

    return-void
.end method

.method private d()V
    .locals 5

    .line 59
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->e:Lcom/tkay/expressad/video/dynview/i/c/b$a;

    if-eqz v0, :cond_0

    .line 60
    invoke-virtual {v0}, Lcom/tkay/expressad/video/dynview/i/c/b$a;->cancel()V

    const/4 v0, 0x0

    .line 61
    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->e:Lcom/tkay/expressad/video/dynview/i/c/b$a;

    .line 63
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->c:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_1

    .line 64
    iget-wide v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->b:J

    const-wide/16 v2, 0x3e8

    add-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->c:J

    .line 66
    :cond_1
    new-instance v0, Lcom/tkay/expressad/video/dynview/i/c/b$a;

    iget-wide v1, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->b:J

    iget-wide v3, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->c:J

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/expressad/video/dynview/i/c/b$a;-><init>(JJ)V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->e:Lcom/tkay/expressad/video/dynview/i/c/b$a;

    .line 67
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->d:Lcom/tkay/expressad/video/dynview/i/c/a;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/i/c/b$a;->a(Lcom/tkay/expressad/video/dynview/i/c/a;)V

    return-void
.end method


# virtual methods
.method public final a()Lcom/tkay/expressad/video/dynview/i/c/b;
    .locals 2

    const-wide/16 v0, 0x3e8

    .line 33
    iput-wide v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->c:J

    return-object p0
.end method

.method public final a(J)Lcom/tkay/expressad/video/dynview/i/c/b;
    .locals 0

    .line 54
    iput-wide p1, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->b:J

    return-object p0
.end method

.method public final a(Lcom/tkay/expressad/video/dynview/i/c/a;)Lcom/tkay/expressad/video/dynview/i/c/b;
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->d:Lcom/tkay/expressad/video/dynview/i/c/a;

    return-object p0
.end method

.method public final a(JLcom/tkay/expressad/video/dynview/i/c/a;)V
    .locals 0

    .line 84
    iput-wide p1, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->b:J

    .line 85
    iput-object p3, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->d:Lcom/tkay/expressad/video/dynview/i/c/a;

    .line 86
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/i/c/b;->d()V

    .line 87
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->e:Lcom/tkay/expressad/video/dynview/i/c/b$a;

    if-eqz p1, :cond_0

    .line 88
    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/i/c/b$a;->start()Landroid/os/CountDownTimer;

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->e:Lcom/tkay/expressad/video/dynview/i/c/b$a;

    if-nez v0, :cond_0

    .line 75
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/i/c/b;->d()V

    .line 77
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->e:Lcom/tkay/expressad/video/dynview/i/c/b$a;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/dynview/i/c/b$a;->start()Landroid/os/CountDownTimer;

    return-void
.end method

.method public final c()V
    .locals 1

    .line 97
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->e:Lcom/tkay/expressad/video/dynview/i/c/b$a;

    if-eqz v0, :cond_0

    .line 98
    invoke-virtual {v0}, Lcom/tkay/expressad/video/dynview/i/c/b$a;->cancel()V

    const/4 v0, 0x0

    .line 99
    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/i/c/b;->e:Lcom/tkay/expressad/video/dynview/i/c/b$a;

    :cond_0
    return-void
.end method
