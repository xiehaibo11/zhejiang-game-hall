.class final Lcom/tkay/expressad/exoplayer/h/i$a;
.super Lcom/tkay/expressad/exoplayer/h/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/h/i;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field private final b:I

.field private final c:I

.field private final d:[I

.field private final e:[I

.field private final f:[Lcom/tkay/expressad/exoplayer/ae;

.field private final g:[Ljava/lang/Object;

.field private final h:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Object;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/util/Collection;IILcom/tkay/expressad/exoplayer/h/aa;Z)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Collection<",
            "Lcom/tkay/expressad/exoplayer/h/i$e;",
            ">;II",
            "Lcom/tkay/expressad/exoplayer/h/aa;",
            "Z)V"
        }
    .end annotation

    .line 743
    invoke-direct {p0, p5, p4}, Lcom/tkay/expressad/exoplayer/h/a;-><init>(ZLcom/tkay/expressad/exoplayer/h/aa;)V

    .line 744
    iput p2, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->b:I

    .line 745
    iput p3, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->c:I

    .line 746
    invoke-interface {p1}, Ljava/util/Collection;->size()I

    move-result p2

    .line 747
    new-array p3, p2, [I

    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->d:[I

    .line 748
    new-array p3, p2, [I

    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->e:[I

    .line 749
    new-array p3, p2, [Lcom/tkay/expressad/exoplayer/ae;

    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->f:[Lcom/tkay/expressad/exoplayer/ae;

    .line 750
    new-array p2, p2, [Ljava/lang/Object;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->g:[Ljava/lang/Object;

    .line 751
    new-instance p2, Ljava/util/HashMap;

    invoke-direct {p2}, Ljava/util/HashMap;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->h:Ljava/util/HashMap;

    .line 753
    invoke-interface {p1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p1

    const/4 p2, 0x0

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p3

    if-eqz p3, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/expressad/exoplayer/h/i$e;

    .line 754
    iget-object p4, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->f:[Lcom/tkay/expressad/exoplayer/ae;

    iget-object p5, p3, Lcom/tkay/expressad/exoplayer/h/i$e;->c:Lcom/tkay/expressad/exoplayer/h/i$b;

    aput-object p5, p4, p2

    .line 755
    iget-object p4, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->d:[I

    iget p5, p3, Lcom/tkay/expressad/exoplayer/h/i$e;->f:I

    aput p5, p4, p2

    .line 756
    iget-object p4, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->e:[I

    iget p5, p3, Lcom/tkay/expressad/exoplayer/h/i$e;->e:I

    aput p5, p4, p2

    .line 757
    iget-object p4, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->g:[Ljava/lang/Object;

    iget-object p3, p3, Lcom/tkay/expressad/exoplayer/h/i$e;->b:Ljava/lang/Object;

    aput-object p3, p4, p2

    .line 758
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->h:Ljava/util/HashMap;

    iget-object p4, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->g:[Ljava/lang/Object;

    aget-object p4, p4, p2

    add-int/lit8 p5, p2, 0x1

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {p3, p4, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move p2, p5

    goto :goto_0

    :cond_0
    return-void
.end method


# virtual methods
.method protected final a(I)I
    .locals 1

    .line 764
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->d:[I

    add-int/lit8 p1, p1, 0x1

    invoke-static {v0, p1}, Lcom/tkay/expressad/exoplayer/k/af;->a([II)I

    move-result p1

    return p1
.end method

.method public final b()I
    .locals 1

    .line 800
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->b:I

    return v0
.end method

.method protected final b(I)I
    .locals 1

    .line 769
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->e:[I

    add-int/lit8 p1, p1, 0x1

    invoke-static {v0, p1}, Lcom/tkay/expressad/exoplayer/k/af;->a([II)I

    move-result p1

    return p1
.end method

.method protected final b(Ljava/lang/Object;)I
    .locals 1

    .line 774
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->h:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    if-nez p1, :cond_0

    const/4 p1, -0x1

    return p1

    .line 775
    :cond_0
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    return p1
.end method

.method public final c()I
    .locals 1

    .line 805
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->c:I

    return v0
.end method

.method protected final c(I)Lcom/tkay/expressad/exoplayer/ae;
    .locals 1

    .line 780
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->f:[Lcom/tkay/expressad/exoplayer/ae;

    aget-object p1, v0, p1

    return-object p1
.end method

.method protected final d(I)I
    .locals 1

    .line 785
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->d:[I

    aget p1, v0, p1

    return p1
.end method

.method protected final e(I)I
    .locals 1

    .line 790
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->e:[I

    aget p1, v0, p1

    return p1
.end method

.method protected final f(I)Ljava/lang/Object;
    .locals 1

    .line 795
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/i$a;->g:[Ljava/lang/Object;

    aget-object p1, v0, p1

    return-object p1
.end method
