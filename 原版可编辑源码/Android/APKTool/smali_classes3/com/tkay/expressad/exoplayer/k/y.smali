.class public final Lcom/tkay/expressad/exoplayer/k/y;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/k/y$a;
    }
.end annotation


# static fields
.field private static final a:Ljava/util/Comparator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Comparator<",
            "Lcom/tkay/expressad/exoplayer/k/y$a;",
            ">;"
        }
    .end annotation
.end field

.field private static final b:Ljava/util/Comparator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Comparator<",
            "Lcom/tkay/expressad/exoplayer/k/y$a;",
            ">;"
        }
    .end annotation
.end field

.field private static final c:I = -0x1

.field private static final d:I = 0x0

.field private static final e:I = 0x1

.field private static final f:I = 0x5


# instance fields
.field private final g:I

.field private final h:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/exoplayer/k/y$a;",
            ">;"
        }
    .end annotation
.end field

.field private final i:[Lcom/tkay/expressad/exoplayer/k/y$a;

.field private j:I

.field private k:I

.field private l:I

.field private m:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 38
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/y$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/k/y$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/k/y;->a:Ljava/util/Comparator;

    .line 45
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/y$2;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/k/y$2;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/k/y;->b:Ljava/util/Comparator;

    return-void
.end method

.method public constructor <init>(I)V
    .locals 0

    .line 71
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 72
    iput p1, p0, Lcom/tkay/expressad/exoplayer/k/y;->g:I

    const/4 p1, 0x5

    new-array p1, p1, [Lcom/tkay/expressad/exoplayer/k/y$a;

    .line 73
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k/y;->i:[Lcom/tkay/expressad/exoplayer/k/y$a;

    .line 74
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k/y;->h:Ljava/util/ArrayList;

    const/4 p1, -0x1

    .line 75
    iput p1, p0, Lcom/tkay/expressad/exoplayer/k/y;->j:I

    return-void
.end method

.method private b()V
    .locals 3

    .line 136
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->j:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    .line 137
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->h:Ljava/util/ArrayList;

    sget-object v2, Lcom/tkay/expressad/exoplayer/k/y;->a:Ljava/util/Comparator;

    invoke-static {v0, v2}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    .line 138
    iput v1, p0, Lcom/tkay/expressad/exoplayer/k/y;->j:I

    :cond_0
    return-void
.end method

.method private c()V
    .locals 2

    .line 146
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->j:I

    if-eqz v0, :cond_0

    .line 147
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->h:Ljava/util/ArrayList;

    sget-object v1, Lcom/tkay/expressad/exoplayer/k/y;->b:Ljava/util/Comparator;

    invoke-static {v0, v1}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    const/4 v0, 0x0

    .line 148
    iput v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->j:I

    :cond_0
    return-void
.end method


# virtual methods
.method public final a()F
    .locals 5

    .line 1146
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->j:I

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 1147
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->h:Ljava/util/ArrayList;

    sget-object v2, Lcom/tkay/expressad/exoplayer/k/y;->b:Ljava/util/Comparator;

    invoke-static {v0, v2}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    .line 1148
    iput v1, p0, Lcom/tkay/expressad/exoplayer/k/y;->j:I

    :cond_0
    const/high16 v0, 0x3f000000    # 0.5f

    .line 119
    iget v2, p0, Lcom/tkay/expressad/exoplayer/k/y;->l:I

    int-to-float v2, v2

    mul-float/2addr v2, v0

    move v0, v1

    .line 121
    :goto_0
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/y;->h:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v1, v3, :cond_2

    .line 122
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/y;->h:Ljava/util/ArrayList;

    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/exoplayer/k/y$a;

    .line 123
    iget v4, v3, Lcom/tkay/expressad/exoplayer/k/y$a;->b:I

    add-int/2addr v0, v4

    int-to-float v4, v0

    cmpl-float v4, v4, v2

    if-ltz v4, :cond_1

    .line 125
    iget v0, v3, Lcom/tkay/expressad/exoplayer/k/y$a;->c:F

    return v0

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 129
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->h:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_3

    const/high16 v0, 0x7fc00000    # Float.NaN

    return v0

    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->h:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/k/y$a;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/k/y$a;->c:F

    return v0
.end method

.method public final a(IF)V
    .locals 4

    .line 1136
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->j:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    .line 1137
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->h:Ljava/util/ArrayList;

    sget-object v2, Lcom/tkay/expressad/exoplayer/k/y;->a:Ljava/util/Comparator;

    invoke-static {v0, v2}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    .line 1138
    iput v1, p0, Lcom/tkay/expressad/exoplayer/k/y;->j:I

    .line 87
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->m:I

    const/4 v2, 0x0

    if-lez v0, :cond_1

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/y;->i:[Lcom/tkay/expressad/exoplayer/k/y$a;

    sub-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->m:I

    aget-object v0, v3, v0

    goto :goto_0

    .line 88
    :cond_1
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/y$a;

    invoke-direct {v0, v2}, Lcom/tkay/expressad/exoplayer/k/y$a;-><init>(B)V

    .line 89
    :goto_0
    iget v1, p0, Lcom/tkay/expressad/exoplayer/k/y;->k:I

    add-int/lit8 v3, v1, 0x1

    iput v3, p0, Lcom/tkay/expressad/exoplayer/k/y;->k:I

    iput v1, v0, Lcom/tkay/expressad/exoplayer/k/y$a;->a:I

    .line 90
    iput p1, v0, Lcom/tkay/expressad/exoplayer/k/y$a;->b:I

    .line 91
    iput p2, v0, Lcom/tkay/expressad/exoplayer/k/y$a;->c:F

    .line 92
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/k/y;->h:Ljava/util/ArrayList;

    invoke-virtual {p2, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 93
    iget p2, p0, Lcom/tkay/expressad/exoplayer/k/y;->l:I

    add-int/2addr p2, p1

    iput p2, p0, Lcom/tkay/expressad/exoplayer/k/y;->l:I

    .line 95
    :cond_2
    :goto_1
    iget p1, p0, Lcom/tkay/expressad/exoplayer/k/y;->l:I

    iget p2, p0, Lcom/tkay/expressad/exoplayer/k/y;->g:I

    if-le p1, p2, :cond_4

    sub-int/2addr p1, p2

    .line 97
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/k/y;->h:Ljava/util/ArrayList;

    invoke-virtual {p2, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/expressad/exoplayer/k/y$a;

    .line 98
    iget v0, p2, Lcom/tkay/expressad/exoplayer/k/y$a;->b:I

    if-gt v0, p1, :cond_3

    .line 99
    iget p1, p0, Lcom/tkay/expressad/exoplayer/k/y;->l:I

    iget v0, p2, Lcom/tkay/expressad/exoplayer/k/y$a;->b:I

    sub-int/2addr p1, v0

    iput p1, p0, Lcom/tkay/expressad/exoplayer/k/y;->l:I

    .line 100
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k/y;->h:Ljava/util/ArrayList;

    invoke-virtual {p1, v2}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    .line 101
    iget p1, p0, Lcom/tkay/expressad/exoplayer/k/y;->m:I

    const/4 v0, 0x5

    if-ge p1, v0, :cond_2

    .line 102
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/y;->i:[Lcom/tkay/expressad/exoplayer/k/y$a;

    add-int/lit8 v1, p1, 0x1

    iput v1, p0, Lcom/tkay/expressad/exoplayer/k/y;->m:I

    aput-object p2, v0, p1

    goto :goto_1

    .line 105
    :cond_3
    iget v0, p2, Lcom/tkay/expressad/exoplayer/k/y$a;->b:I

    sub-int/2addr v0, p1

    iput v0, p2, Lcom/tkay/expressad/exoplayer/k/y$a;->b:I

    .line 106
    iget p2, p0, Lcom/tkay/expressad/exoplayer/k/y;->l:I

    sub-int/2addr p2, p1

    iput p2, p0, Lcom/tkay/expressad/exoplayer/k/y;->l:I

    goto :goto_1

    :cond_4
    return-void
.end method
