.class public final Lcom/tkay/expressad/exoplayer/h/b/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/e/g;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/b/d$a;,
        Lcom/tkay/expressad/exoplayer/h/b/d$b;
    }
.end annotation


# instance fields
.field public final a:Lcom/tkay/expressad/exoplayer/e/e;

.field private final b:I

.field private final c:Lcom/tkay/expressad/exoplayer/m;

.field private final d:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Lcom/tkay/expressad/exoplayer/h/b/d$a;",
            ">;"
        }
    .end annotation
.end field

.field private e:Z

.field private f:Lcom/tkay/expressad/exoplayer/h/b/d$b;

.field private g:Lcom/tkay/expressad/exoplayer/e/k;

.field private h:[Lcom/tkay/expressad/exoplayer/m;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/e/e;ILcom/tkay/expressad/exoplayer/m;)V
    .locals 0

    .line 79
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 80
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->a:Lcom/tkay/expressad/exoplayer/e/e;

    .line 81
    iput p2, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->b:I

    .line 82
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->c:Lcom/tkay/expressad/exoplayer/m;

    .line 83
    new-instance p1, Landroid/util/SparseArray;

    invoke-direct {p1}, Landroid/util/SparseArray;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->d:Landroid/util/SparseArray;

    return-void
.end method

.method private b()Lcom/tkay/expressad/exoplayer/e/k;
    .locals 1

    .line 90
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->g:Lcom/tkay/expressad/exoplayer/e/k;

    return-object v0
.end method

.method private c()[Lcom/tkay/expressad/exoplayer/m;
    .locals 1

    .line 97
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->h:[Lcom/tkay/expressad/exoplayer/m;

    return-object v0
.end method


# virtual methods
.method public final a(II)Lcom/tkay/expressad/exoplayer/e/m;
    .locals 2

    .line 128
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->d:Landroid/util/SparseArray;

    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/b/d$a;

    if-nez v0, :cond_2

    .line 131
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->h:[Lcom/tkay/expressad/exoplayer/m;

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 133
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/b/d$a;

    .line 134
    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->b:I

    if-ne p2, v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->c:Lcom/tkay/expressad/exoplayer/m;

    goto :goto_1

    :cond_1
    const/4 v1, 0x0

    :goto_1
    invoke-direct {v0, p1, p2, v1}, Lcom/tkay/expressad/exoplayer/h/b/d$a;-><init>(IILcom/tkay/expressad/exoplayer/m;)V

    .line 135
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->f:Lcom/tkay/expressad/exoplayer/h/b/d$b;

    invoke-virtual {v0, p2}, Lcom/tkay/expressad/exoplayer/h/b/d$a;->a(Lcom/tkay/expressad/exoplayer/h/b/d$b;)V

    .line 136
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->d:Landroid/util/SparseArray;

    invoke-virtual {p2, p1, v0}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    :cond_2
    return-object v0
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/e/k;)V
    .locals 0

    .line 152
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->g:Lcom/tkay/expressad/exoplayer/e/k;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/b/d$b;J)V
    .locals 5

    .line 109
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->f:Lcom/tkay/expressad/exoplayer/h/b/d$b;

    .line 110
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->e:Z

    const-wide v1, -0x7fffffffffffffffL    # -4.9E-324

    const-wide/16 v3, 0x0

    if-nez v0, :cond_1

    .line 111
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->a:Lcom/tkay/expressad/exoplayer/e/e;

    invoke-interface {p1, p0}, Lcom/tkay/expressad/exoplayer/e/e;->a(Lcom/tkay/expressad/exoplayer/e/g;)V

    cmp-long p1, p2, v1

    if-eqz p1, :cond_0

    .line 113
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->a:Lcom/tkay/expressad/exoplayer/e/e;

    invoke-interface {p1, v3, v4, p2, p3}, Lcom/tkay/expressad/exoplayer/e/e;->a(JJ)V

    :cond_0
    const/4 p1, 0x1

    .line 115
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->e:Z

    return-void

    .line 117
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->a:Lcom/tkay/expressad/exoplayer/e/e;

    cmp-long v1, p2, v1

    if-nez v1, :cond_2

    move-wide p2, v3

    :cond_2
    invoke-interface {v0, v3, v4, p2, p3}, Lcom/tkay/expressad/exoplayer/e/e;->a(JJ)V

    const/4 p2, 0x0

    .line 118
    :goto_0
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->d:Landroid/util/SparseArray;

    invoke-virtual {p3}, Landroid/util/SparseArray;->size()I

    move-result p3

    if-ge p2, p3, :cond_3

    .line 119
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->d:Landroid/util/SparseArray;

    invoke-virtual {p3, p2}, Landroid/util/SparseArray;->valueAt(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/expressad/exoplayer/h/b/d$a;

    invoke-virtual {p3, p1}, Lcom/tkay/expressad/exoplayer/h/b/d$a;->a(Lcom/tkay/expressad/exoplayer/h/b/d$b;)V

    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_3
    return-void
.end method

.method public final c_()V
    .locals 3

    .line 143
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->d:Landroid/util/SparseArray;

    invoke-virtual {v0}, Landroid/util/SparseArray;->size()I

    move-result v0

    new-array v0, v0, [Lcom/tkay/expressad/exoplayer/m;

    const/4 v1, 0x0

    .line 144
    :goto_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->d:Landroid/util/SparseArray;

    invoke-virtual {v2}, Landroid/util/SparseArray;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 145
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->d:Landroid/util/SparseArray;

    invoke-virtual {v2, v1}, Landroid/util/SparseArray;->valueAt(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/h/b/d$a;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/h/b/d$a;->a:Lcom/tkay/expressad/exoplayer/m;

    aput-object v2, v0, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 147
    :cond_0
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/d;->h:[Lcom/tkay/expressad/exoplayer/m;

    return-void
.end method
