.class public Lcom/tkay/basead/f/e;
.super Lcom/tkay/basead/f/c;


# instance fields
.field a:Lcom/tkay/basead/e/a;

.field k:Lcom/tkay/core/common/l/a/c;

.field l:Lcom/tkay/basead/a/c;

.field m:Landroid/view/View;

.field volatile n:Z

.field o:Landroid/view/View$OnClickListener;

.field p:Lcom/tkay/basead/a/a;

.field q:Z

.field private final r:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V
    .locals 0

    .line 150
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/f/c;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V

    .line 32
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/f/e;->r:Ljava/lang/String;

    .line 45
    new-instance p1, Lcom/tkay/basead/f/e$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/f/e$1;-><init>(Lcom/tkay/basead/f/e;)V

    iput-object p1, p0, Lcom/tkay/basead/f/e;->o:Landroid/view/View$OnClickListener;

    const/4 p1, 0x0

    .line 94
    iput-boolean p1, p0, Lcom/tkay/basead/f/e;->q:Z

    return-void
.end method

.method private a(I)V
    .locals 4

    .line 53
    invoke-direct {p0}, Lcom/tkay/basead/f/e;->o()V

    .line 54
    invoke-direct {p0}, Lcom/tkay/basead/f/e;->p()V

    .line 55
    iget-object v0, p0, Lcom/tkay/basead/f/e;->l:Lcom/tkay/basead/a/c;

    if-nez v0, :cond_0

    .line 56
    new-instance v0, Lcom/tkay/basead/a/c;

    iget-object v1, p0, Lcom/tkay/basead/f/e;->c:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/basead/f/e;->d:Lcom/tkay/core/common/f/i;

    iget-object v3, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/basead/a/c;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V

    iput-object v0, p0, Lcom/tkay/basead/f/e;->l:Lcom/tkay/basead/a/c;

    .line 58
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/f/e;->l:Lcom/tkay/basead/a/c;

    invoke-virtual {v0}, Lcom/tkay/basead/a/c;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 65
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/f/e;->l:Lcom/tkay/basead/a/c;

    new-instance v1, Lcom/tkay/basead/f/e$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/f/e$2;-><init>(Lcom/tkay/basead/f/e;I)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/a/c$b;)V

    .line 90
    iget-object p1, p0, Lcom/tkay/basead/f/e;->l:Lcom/tkay/basead/a/c;

    new-instance v0, Lcom/tkay/basead/c/i;

    iget-object v1, p0, Lcom/tkay/basead/f/e;->d:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v2, ""

    invoke-direct {v0, v1, v2}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/i;)V

    return-void
.end method

.method private a(Landroid/view/View;Landroid/view/View$OnClickListener;)V
    .locals 2

    .line 231
    instance-of v0, p1, Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    .line 232
    check-cast p1, Landroid/view/ViewGroup;

    const/4 v0, 0x0

    .line 233
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 234
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    .line 235
    invoke-direct {p0, v1, p2}, Lcom/tkay/basead/f/e;->a(Landroid/view/View;Landroid/view/View$OnClickListener;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void

    .line 238
    :cond_1
    invoke-virtual {p1, p2}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/f/e;)V
    .locals 0

    .line 30
    invoke-direct {p0}, Lcom/tkay/basead/f/e;->p()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/f/e;I)V
    .locals 4

    .line 2053
    invoke-direct {p0}, Lcom/tkay/basead/f/e;->o()V

    .line 2054
    invoke-direct {p0}, Lcom/tkay/basead/f/e;->p()V

    .line 2055
    iget-object v0, p0, Lcom/tkay/basead/f/e;->l:Lcom/tkay/basead/a/c;

    if-nez v0, :cond_0

    .line 2056
    new-instance v0, Lcom/tkay/basead/a/c;

    iget-object v1, p0, Lcom/tkay/basead/f/e;->c:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/basead/f/e;->d:Lcom/tkay/core/common/f/i;

    iget-object v3, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/basead/a/c;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V

    iput-object v0, p0, Lcom/tkay/basead/f/e;->l:Lcom/tkay/basead/a/c;

    .line 2058
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/f/e;->l:Lcom/tkay/basead/a/c;

    invoke-virtual {v0}, Lcom/tkay/basead/a/c;->a()Z

    move-result v0

    if-nez v0, :cond_1

    .line 2065
    iget-object v0, p0, Lcom/tkay/basead/f/e;->l:Lcom/tkay/basead/a/c;

    new-instance v1, Lcom/tkay/basead/f/e$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/f/e$2;-><init>(Lcom/tkay/basead/f/e;I)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/a/c$b;)V

    .line 2090
    iget-object p1, p0, Lcom/tkay/basead/f/e;->l:Lcom/tkay/basead/a/c;

    new-instance v0, Lcom/tkay/basead/c/i;

    iget-object p0, p0, Lcom/tkay/basead/f/e;->d:Lcom/tkay/core/common/f/i;

    iget-object p0, p0, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v1, ""

    invoke-direct {v0, p0, v1}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/i;)V

    :cond_1
    return-void
.end method

.method private b(Landroid/view/View;)V
    .locals 3

    .line 97
    iget-object v0, p0, Lcom/tkay/basead/f/e;->d:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->F()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_2

    if-nez p1, :cond_0

    return-void

    .line 101
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/basead/f/e;->q:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    const/4 v0, 0x1

    .line 104
    iput-boolean v0, p0, Lcom/tkay/basead/f/e;->q:Z

    .line 105
    new-instance v0, Lcom/tkay/basead/a/a;

    iget-object v1, p0, Lcom/tkay/basead/f/e;->d:Lcom/tkay/core/common/f/i;

    new-instance v2, Lcom/tkay/basead/f/e$3;

    invoke-direct {v2, p0}, Lcom/tkay/basead/f/e$3;-><init>(Lcom/tkay/basead/f/e;)V

    invoke-direct {v0, p1, v1, v2}, Lcom/tkay/basead/a/a;-><init>(Landroid/view/View;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/a/a$a;)V

    iput-object v0, p0, Lcom/tkay/basead/f/e;->p:Lcom/tkay/basead/a/a;

    :cond_2
    return-void
.end method

.method private c(Landroid/view/View;)V
    .locals 2

    .line 250
    iput-object p1, p0, Lcom/tkay/basead/f/e;->m:Landroid/view/View;

    .line 251
    new-instance v0, Lcom/tkay/basead/f/e$4;

    invoke-direct {v0, p0}, Lcom/tkay/basead/f/e$4;-><init>(Lcom/tkay/basead/f/e;)V

    .line 258
    iget-object v1, p0, Lcom/tkay/basead/f/e;->k:Lcom/tkay/core/common/l/a/c;

    if-nez v1, :cond_0

    .line 259
    new-instance v1, Lcom/tkay/core/common/l/a/c;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    invoke-direct {v1}, Lcom/tkay/core/common/l/a/c;-><init>()V

    iput-object v1, p0, Lcom/tkay/basead/f/e;->k:Lcom/tkay/core/common/l/a/c;

    .line 262
    :cond_0
    iget-object v1, p0, Lcom/tkay/basead/f/e;->k:Lcom/tkay/core/common/l/a/c;

    invoke-virtual {v1, p1, v0}, Lcom/tkay/core/common/l/a/c;->a(Landroid/view/View;Lcom/tkay/core/common/l/a/b;)V

    return-void
.end method

.method public static k()Landroid/view/View;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method private n()V
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/tkay/basead/f/e;->p:Lcom/tkay/basead/a/a;

    if-eqz v0, :cond_0

    .line 116
    invoke-virtual {v0}, Lcom/tkay/basead/a/a;->a()V

    :cond_0
    return-void
.end method

.method private o()V
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/tkay/basead/f/e;->p:Lcom/tkay/basead/a/a;

    if-eqz v0, :cond_0

    .line 129
    invoke-virtual {v0}, Lcom/tkay/basead/a/a;->b()V

    const/4 v0, 0x0

    .line 130
    iput-object v0, p0, Lcom/tkay/basead/f/e;->p:Lcom/tkay/basead/a/a;

    :cond_0
    return-void
.end method

.method private p()V
    .locals 5

    .line 267
    iget-boolean v0, p0, Lcom/tkay/basead/f/e;->n:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 271
    iput-boolean v0, p0, Lcom/tkay/basead/f/e;->n:Z

    .line 272
    iget-object v0, p0, Lcom/tkay/basead/f/e;->c:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/basead/f/a/b;->a(Landroid/content/Context;)Lcom/tkay/basead/f/a/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/f/a/b;->a(Lcom/tkay/core/common/f/r;)V

    const/16 v0, 0x8

    .line 273
    iget-object v1, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    new-instance v2, Lcom/tkay/basead/c/i;

    iget-object v3, p0, Lcom/tkay/basead/f/e;->d:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v4, ""

    invoke-direct {v2, v3, v4}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v0, v1, v2}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 275
    iget-object v0, p0, Lcom/tkay/basead/f/e;->a:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_1

    .line 276
    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdShow()V

    .line 279
    :cond_1
    invoke-direct {p0}, Lcom/tkay/basead/f/e;->n()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/app/Activity;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    return-void
.end method

.method public final a(Landroid/view/View;)V
    .locals 1

    .line 225
    invoke-direct {p0, p1}, Lcom/tkay/basead/f/e;->c(Landroid/view/View;)V

    .line 227
    iget-object v0, p0, Lcom/tkay/basead/f/e;->o:Landroid/view/View$OnClickListener;

    invoke-direct {p0, p1, v0}, Lcom/tkay/basead/f/e;->a(Landroid/view/View;Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public final a(Landroid/view/View;Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;)V"
        }
    .end annotation

    .line 1097
    iget-object v0, p0, Lcom/tkay/basead/f/e;->d:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->F()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    if-eqz p1, :cond_0

    .line 1101
    iget-boolean v0, p0, Lcom/tkay/basead/f/e;->q:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 1104
    iput-boolean v0, p0, Lcom/tkay/basead/f/e;->q:Z

    .line 1105
    new-instance v0, Lcom/tkay/basead/a/a;

    iget-object v1, p0, Lcom/tkay/basead/f/e;->d:Lcom/tkay/core/common/f/i;

    new-instance v2, Lcom/tkay/basead/f/e$3;

    invoke-direct {v2, p0}, Lcom/tkay/basead/f/e$3;-><init>(Lcom/tkay/basead/f/e;)V

    invoke-direct {v0, p1, v1, v2}, Lcom/tkay/basead/a/a;-><init>(Landroid/view/View;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/a/a$a;)V

    iput-object v0, p0, Lcom/tkay/basead/f/e;->p:Lcom/tkay/basead/a/a;

    .line 212
    :cond_0
    invoke-direct {p0, p1}, Lcom/tkay/basead/f/e;->c(Landroid/view/View;)V

    if-eqz p2, :cond_3

    .line 214
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    if-eqz p2, :cond_1

    .line 216
    iget-object v0, p0, Lcom/tkay/basead/f/e;->o:Landroid/view/View$OnClickListener;

    invoke-virtual {p2, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_0

    :cond_2
    return-void

    .line 220
    :cond_3
    iget-object p2, p0, Lcom/tkay/basead/f/e;->o:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, p2}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public final a(Lcom/tkay/basead/e/a;)V
    .locals 0

    .line 202
    iput-object p1, p0, Lcom/tkay/basead/f/e;->a:Lcom/tkay/basead/e/a;

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 155
    iget-object v0, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    if-eqz v0, :cond_0

    .line 156
    iget-object v0, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/r;->r()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final f()Ljava/lang/String;
    .locals 1

    .line 162
    iget-object v0, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    if-eqz v0, :cond_0

    .line 163
    iget-object v0, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/r;->s()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final g()Ljava/lang/String;
    .locals 1

    .line 169
    iget-object v0, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    if-eqz v0, :cond_0

    .line 170
    iget-object v0, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/r;->w()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final h()Ljava/lang/String;
    .locals 1

    .line 176
    iget-object v0, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    if-eqz v0, :cond_0

    .line 177
    iget-object v0, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/r;->t()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final i()Ljava/lang/String;
    .locals 1

    .line 183
    iget-object v0, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    if-eqz v0, :cond_0

    .line 184
    iget-object v0, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/r;->u()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final j()Ljava/lang/String;
    .locals 1

    .line 190
    iget-object v0, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    if-eqz v0, :cond_0

    .line 191
    iget-object v0, p0, Lcom/tkay/basead/f/e;->g:Lcom/tkay/core/common/f/r;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/r;->v()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final l()V
    .locals 1

    .line 243
    iget-object v0, p0, Lcom/tkay/basead/f/e;->k:Lcom/tkay/core/common/l/a/c;

    if-eqz v0, :cond_0

    .line 244
    invoke-virtual {v0}, Lcom/tkay/core/common/l/a/c;->a()V

    :cond_0
    return-void
.end method

.method public final m()V
    .locals 2

    .line 283
    invoke-virtual {p0}, Lcom/tkay/basead/f/e;->l()V

    .line 284
    invoke-direct {p0}, Lcom/tkay/basead/f/e;->o()V

    const/4 v0, 0x0

    .line 285
    iput-object v0, p0, Lcom/tkay/basead/f/e;->a:Lcom/tkay/basead/e/a;

    .line 286
    iget-object v1, p0, Lcom/tkay/basead/f/e;->l:Lcom/tkay/basead/a/c;

    if-eqz v1, :cond_0

    .line 287
    invoke-virtual {v1}, Lcom/tkay/basead/a/c;->d()V

    .line 288
    iput-object v0, p0, Lcom/tkay/basead/f/e;->l:Lcom/tkay/basead/a/c;

    .line 290
    :cond_0
    iget-object v1, p0, Lcom/tkay/basead/f/e;->k:Lcom/tkay/core/common/l/a/c;

    if-eqz v1, :cond_1

    .line 291
    invoke-virtual {v1}, Lcom/tkay/core/common/l/a/c;->b()V

    .line 292
    iput-object v0, p0, Lcom/tkay/basead/f/e;->k:Lcom/tkay/core/common/l/a/c;

    :cond_1
    return-void
.end method
