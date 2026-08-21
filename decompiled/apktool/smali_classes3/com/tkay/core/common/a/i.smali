.class public final Lcom/tkay/core/common/a/i;
.super Ljava/lang/Object;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:I

.field private d:J

.field private e:J

.field private f:J


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private f()J
    .locals 2

    .line 53
    iget-wide v0, p0, Lcom/tkay/core/common/a/i;->f:J

    return-wide v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 13
    iget-object v0, p0, Lcom/tkay/core/common/a/i;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 33
    iput p1, p0, Lcom/tkay/core/common/a/i;->c:I

    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 41
    iput-wide p1, p0, Lcom/tkay/core/common/a/i;->d:J

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 17
    iput-object p1, p0, Lcom/tkay/core/common/a/i;->a:Ljava/lang/String;

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 21
    iget-object v0, p0, Lcom/tkay/core/common/a/i;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final b(J)V
    .locals 0

    .line 49
    iput-wide p1, p0, Lcom/tkay/core/common/a/i;->e:J

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 25
    iput-object p1, p0, Lcom/tkay/core/common/a/i;->b:Ljava/lang/String;

    return-void
.end method

.method public final c()I
    .locals 1

    .line 29
    iget v0, p0, Lcom/tkay/core/common/a/i;->c:I

    return v0
.end method

.method public final c(J)V
    .locals 0

    .line 57
    iput-wide p1, p0, Lcom/tkay/core/common/a/i;->f:J

    return-void
.end method

.method public final d()J
    .locals 2

    .line 37
    iget-wide v0, p0, Lcom/tkay/core/common/a/i;->d:J

    return-wide v0
.end method

.method public final e()J
    .locals 2

    .line 45
    iget-wide v0, p0, Lcom/tkay/core/common/a/i;->e:J

    return-wide v0
.end method
