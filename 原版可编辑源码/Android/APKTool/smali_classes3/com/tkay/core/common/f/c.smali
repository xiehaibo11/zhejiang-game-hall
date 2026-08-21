.class public final Lcom/tkay/core/common/f/c;
.super Ljava/lang/Object;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:I


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 11
    iput-object p1, p0, Lcom/tkay/core/common/f/c;->a:Ljava/lang/String;

    .line 12
    iput-object p2, p0, Lcom/tkay/core/common/f/c;->b:Ljava/lang/String;

    .line 13
    iput p3, p0, Lcom/tkay/core/common/f/c;->c:I

    return-void
.end method

.method private b()Ljava/lang/String;
    .locals 1

    .line 18
    iget-object v0, p0, Lcom/tkay/core/common/f/c;->a:Ljava/lang/String;

    return-object v0
.end method

.method private c()I
    .locals 1

    .line 26
    iget v0, p0, Lcom/tkay/core/common/f/c;->c:I

    return v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 22
    iget-object v0, p0, Lcom/tkay/core/common/f/c;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final a(Lcom/tkay/core/common/f/aj;)Z
    .locals 3

    const/4 v0, 0x0

    if-eqz p1, :cond_3

    .line 1693
    iget v1, p1, Lcom/tkay/core/common/f/aj;->a:I

    const/4 v2, 0x2

    if-eq v1, v2, :cond_2

    const/4 v2, 0x3

    if-eq v1, v2, :cond_0

    goto :goto_0

    .line 35
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result p1

    iget v1, p0, Lcom/tkay/core/common/f/c;->c:I

    if-ne p1, v1, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_1
    return v0

    .line 33
    :cond_2
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/core/common/f/c;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    return p1

    :cond_3
    :goto_0
    return v0
.end method
