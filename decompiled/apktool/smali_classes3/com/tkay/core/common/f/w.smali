.class public final Lcom/tkay/core/common/f/w;
.super Ljava/lang/Object;


# instance fields
.field private a:I

.field private b:Ljava/lang/String;

.field private c:J

.field private d:I

.field private e:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(ILjava/lang/String;)V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 19
    iput p1, p0, Lcom/tkay/core/common/f/w;->a:I

    .line 20
    iput-object p2, p0, Lcom/tkay/core/common/f/w;->b:Ljava/lang/String;

    const/4 p1, 0x0

    .line 21
    iput p1, p0, Lcom/tkay/core/common/f/w;->d:I

    .line 22
    iput p1, p0, Lcom/tkay/core/common/f/w;->e:I

    const-wide/16 p1, -0x1

    .line 23
    iput-wide p1, p0, Lcom/tkay/core/common/f/w;->c:J

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 0

    .line 31
    iput-object p1, p0, Lcom/tkay/core/common/f/w;->b:Ljava/lang/String;

    return-void
.end method

.method private c(I)V
    .locals 0

    .line 63
    iput p1, p0, Lcom/tkay/core/common/f/w;->a:I

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 27
    iget-object v0, p0, Lcom/tkay/core/common/f/w;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 47
    iput p1, p0, Lcom/tkay/core/common/f/w;->d:I

    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 39
    iput-wide p1, p0, Lcom/tkay/core/common/f/w;->c:J

    return-void
.end method

.method public final b()J
    .locals 2

    .line 35
    iget-wide v0, p0, Lcom/tkay/core/common/f/w;->c:J

    return-wide v0
.end method

.method public final b(I)V
    .locals 0

    .line 55
    iput p1, p0, Lcom/tkay/core/common/f/w;->e:I

    return-void
.end method

.method public final c()I
    .locals 1

    .line 43
    iget v0, p0, Lcom/tkay/core/common/f/w;->d:I

    return v0
.end method

.method public final d()I
    .locals 1

    .line 51
    iget v0, p0, Lcom/tkay/core/common/f/w;->e:I

    return v0
.end method

.method public final e()I
    .locals 1

    .line 59
    iget v0, p0, Lcom/tkay/core/common/f/w;->a:I

    return v0
.end method
