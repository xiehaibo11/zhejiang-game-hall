.class public final Lcom/tkay/expressad/foundation/d/g;
.super Ljava/lang/Object;


# instance fields
.field public a:J

.field public b:J

.field public c:I

.field public d:I


# direct methods
.method private constructor <init>(JJII)V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 10
    iput-wide p1, p0, Lcom/tkay/expressad/foundation/d/g;->a:J

    .line 11
    iput-wide p3, p0, Lcom/tkay/expressad/foundation/d/g;->b:J

    .line 12
    iput p6, p0, Lcom/tkay/expressad/foundation/d/g;->d:I

    .line 13
    iput p5, p0, Lcom/tkay/expressad/foundation/d/g;->c:I

    return-void
.end method

.method private a()J
    .locals 2

    .line 17
    iget-wide v0, p0, Lcom/tkay/expressad/foundation/d/g;->a:J

    return-wide v0
.end method

.method private a(I)V
    .locals 0

    .line 37
    iput p1, p0, Lcom/tkay/expressad/foundation/d/g;->c:I

    return-void
.end method

.method private a(J)V
    .locals 0

    .line 21
    iput-wide p1, p0, Lcom/tkay/expressad/foundation/d/g;->a:J

    return-void
.end method

.method private b()J
    .locals 2

    .line 25
    iget-wide v0, p0, Lcom/tkay/expressad/foundation/d/g;->b:J

    return-wide v0
.end method

.method private b(I)V
    .locals 0

    .line 45
    iput p1, p0, Lcom/tkay/expressad/foundation/d/g;->d:I

    return-void
.end method

.method private b(J)V
    .locals 0

    .line 29
    iput-wide p1, p0, Lcom/tkay/expressad/foundation/d/g;->b:J

    return-void
.end method

.method private c()I
    .locals 1

    .line 33
    iget v0, p0, Lcom/tkay/expressad/foundation/d/g;->c:I

    return v0
.end method

.method private d()I
    .locals 1

    .line 41
    iget v0, p0, Lcom/tkay/expressad/foundation/d/g;->d:I

    return v0
.end method
