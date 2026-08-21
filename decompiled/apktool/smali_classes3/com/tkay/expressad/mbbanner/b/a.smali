.class public final Lcom/tkay/expressad/mbbanner/b/a;
.super Ljava/lang/Object;


# static fields
.field private static b:Ljava/lang/String; = "BannerController"


# instance fields
.field a:Lcom/tkay/expressad/out/c;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Z

.field private f:I

.field private g:Lcom/tkay/expressad/out/TemplateBannerView;

.field private h:I

.field private i:I

.field private j:I

.field private k:I

.field private l:Lcom/tkay/expressad/out/b;

.field private m:Lcom/tkay/expressad/foundation/d/d;

.field private n:Lcom/tkay/expressad/mbbanner/a/d/c;

.field private o:Lcom/tkay/expressad/d/c;

.field private p:Z

.field private q:Z

.field private r:Z

.field private s:Z

.field private t:Z

.field private u:Lcom/tkay/expressad/mbbanner/a/c/c;

.field private v:Lcom/tkay/expressad/mbbanner/a/c/b;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Lcom/tkay/expressad/out/TemplateBannerView;Lcom/tkay/expressad/out/c;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 199
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    .line 38
    iput v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->k:I

    .line 51
    new-instance v1, Lcom/tkay/expressad/mbbanner/b/a$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/mbbanner/b/a$1;-><init>(Lcom/tkay/expressad/mbbanner/b/a;)V

    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->u:Lcom/tkay/expressad/mbbanner/a/c/c;

    .line 146
    new-instance v1, Lcom/tkay/expressad/mbbanner/b/a$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/mbbanner/b/a$2;-><init>(Lcom/tkay/expressad/mbbanner/b/a;)V

    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->v:Lcom/tkay/expressad/mbbanner/a/c/b;

    .line 200
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz p2, :cond_0

    .line 202
    invoke-virtual {p2}, Lcom/tkay/expressad/out/c;->a()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->h:I

    .line 203
    invoke-virtual {p2}, Lcom/tkay/expressad/out/c;->b()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->i:I

    .line 205
    :cond_0
    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/b/a;->a:Lcom/tkay/expressad/out/c;

    .line 206
    iput-object p4, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    .line 207
    iput-object p3, p0, Lcom/tkay/expressad/mbbanner/b/a;->d:Ljava/lang/String;

    .line 1247
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    invoke-static {p1, p2}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    if-nez p1, :cond_1

    .line 1249
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    invoke-static {p1}, Lcom/tkay/expressad/d/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    .line 1251
    :cond_1
    iget p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->k:I

    if-ne p1, v0, :cond_4

    .line 1252
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/d/c;->b()I

    move-result p1

    const/16 p2, 0xb4

    const/16 p3, 0xa

    if-lez p1, :cond_3

    if-ge p1, p3, :cond_2

    move p1, p3

    goto :goto_0

    :cond_2
    if-le p1, p2, :cond_3

    move p1, p2

    :cond_3
    :goto_0
    iput p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->j:I

    .line 1254
    :cond_4
    iget p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->f:I

    if-nez p1, :cond_6

    .line 1255
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/d/c;->d()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_5

    goto :goto_1

    :cond_5
    const/4 p2, 0x0

    :goto_1
    iput-boolean p2, p0, Lcom/tkay/expressad/mbbanner/b/a;->e:Z

    .line 1256
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    if-eqz p1, :cond_6

    .line 1257
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Z)V

    :cond_6
    return-void
.end method

.method private static a(I)I
    .locals 2

    const/16 v0, 0xb4

    const/16 v1, 0xa

    if-lez p0, :cond_1

    if-ge p0, v1, :cond_0

    move p0, v1

    goto :goto_0

    :cond_0
    if-le p0, v0, :cond_1

    move p0, v0

    :cond_1
    :goto_0
    return p0
.end method

.method static synthetic a(Lcom/tkay/expressad/mbbanner/b/a;Lcom/tkay/expressad/foundation/d/d;)Lcom/tkay/expressad/foundation/d/d;
    .locals 0

    .line 25
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->m:Lcom/tkay/expressad/foundation/d/d;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/expressad/mbbanner/b/a;)Lcom/tkay/expressad/out/b;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/b/a;->l:Lcom/tkay/expressad/out/b;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/expressad/mbbanner/b/a;Ljava/lang/String;)V
    .locals 0

    .line 25
    invoke-direct {p0, p1}, Lcom/tkay/expressad/mbbanner/b/a;->a(Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 1

    .line 390
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->l:Lcom/tkay/expressad/out/b;

    if-eqz v0, :cond_0

    .line 391
    invoke-interface {v0, p1}, Lcom/tkay/expressad/out/b;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/mbbanner/b/a;Z)Z
    .locals 0

    .line 25
    iput-boolean p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->t:Z

    return p1
.end method

.method static synthetic b(Lcom/tkay/expressad/mbbanner/b/a;)Ljava/lang/String;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/b/a;->d:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/expressad/mbbanner/b/a;)Ljava/lang/String;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/expressad/mbbanner/b/a;)I
    .locals 0

    .line 25
    iget p0, p0, Lcom/tkay/expressad/mbbanner/b/a;->i:I

    return p0
.end method

.method static synthetic e(Lcom/tkay/expressad/mbbanner/b/a;)I
    .locals 0

    .line 25
    iget p0, p0, Lcom/tkay/expressad/mbbanner/b/a;->h:I

    return p0
.end method

.method static synthetic e()Ljava/lang/String;
    .locals 1

    .line 25
    sget-object v0, Lcom/tkay/expressad/mbbanner/b/a;->b:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic f(Lcom/tkay/expressad/mbbanner/b/a;)I
    .locals 0

    .line 25
    iget p0, p0, Lcom/tkay/expressad/mbbanner/b/a;->j:I

    return p0
.end method

.method private f()V
    .locals 3

    .line 2247
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    if-nez v0, :cond_0

    .line 2249
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/d/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    .line 2251
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->k:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_3

    .line 2252
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->b()I

    move-result v0

    const/16 v1, 0xb4

    const/16 v2, 0xa

    if-lez v0, :cond_2

    if-ge v0, v2, :cond_1

    move v0, v2

    goto :goto_0

    :cond_1
    if-le v0, v1, :cond_2

    move v0, v1

    :cond_2
    :goto_0
    iput v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->j:I

    .line 2254
    :cond_3
    iget v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->f:I

    if-nez v0, :cond_5

    .line 2255
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->d()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_4

    goto :goto_1

    :cond_4
    const/4 v1, 0x0

    :goto_1
    iput-boolean v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->e:Z

    .line 2256
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    if-eqz v0, :cond_5

    .line 2257
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Z)V

    :cond_5
    return-void
.end method

.method static synthetic g(Lcom/tkay/expressad/mbbanner/b/a;)Lcom/tkay/expressad/mbbanner/a/c/b;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/b/a;->v:Lcom/tkay/expressad/mbbanner/a/c/b;

    return-object p0
.end method

.method private g()V
    .locals 3

    .line 247
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    if-nez v0, :cond_0

    .line 249
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/d/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    .line 251
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->k:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_3

    .line 252
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->b()I

    move-result v0

    const/16 v1, 0xb4

    const/16 v2, 0xa

    if-lez v0, :cond_2

    if-ge v0, v2, :cond_1

    move v0, v2

    goto :goto_0

    :cond_1
    if-le v0, v1, :cond_2

    move v0, v1

    :cond_2
    :goto_0
    iput v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->j:I

    .line 254
    :cond_3
    iget v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->f:I

    if-nez v0, :cond_5

    .line 255
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->d()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_4

    goto :goto_1

    :cond_4
    const/4 v1, 0x0

    :goto_1
    iput-boolean v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->e:Z

    .line 256
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    if-eqz v0, :cond_5

    .line 257
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Z)V

    :cond_5
    return-void
.end method

.method static synthetic h(Lcom/tkay/expressad/mbbanner/b/a;)Lcom/tkay/expressad/foundation/d/d;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/b/a;->m:Lcom/tkay/expressad/foundation/d/d;

    return-object p0
.end method

.method private h()V
    .locals 8

    .line 353
    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->r:Z

    if-nez v0, :cond_3

    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->s:Z

    if-nez v0, :cond_0

    goto :goto_1

    .line 358
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->m:Lcom/tkay/expressad/foundation/d/d;

    if-eqz v0, :cond_2

    .line 359
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    if-nez v0, :cond_1

    .line 360
    new-instance v0, Lcom/tkay/expressad/mbbanner/a/d/c;

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/b/a;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    iget-object v3, p0, Lcom/tkay/expressad/mbbanner/b/a;->u:Lcom/tkay/expressad/mbbanner/a/c/c;

    iget-object v4, p0, Lcom/tkay/expressad/mbbanner/b/a;->d:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    iget-boolean v6, p0, Lcom/tkay/expressad/mbbanner/b/a;->e:Z

    iget-object v7, p0, Lcom/tkay/expressad/mbbanner/b/a;->o:Lcom/tkay/expressad/d/c;

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/mbbanner/a/d/c;-><init>(Lcom/tkay/expressad/out/TemplateBannerView;Lcom/tkay/expressad/mbbanner/a/c/c;Ljava/lang/String;Ljava/lang/String;ZLcom/tkay/expressad/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    .line 362
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->a:Lcom/tkay/expressad/out/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/out/c;)V

    .line 363
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    iget-boolean v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->p:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c;->b(Z)V

    .line 364
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    iget-boolean v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->q:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c;->c(Z)V

    .line 365
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    iget-boolean v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->e:Z

    iget v2, p0, Lcom/tkay/expressad/mbbanner/b/a;->f:I

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(ZI)V

    .line 366
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->m:Lcom/tkay/expressad/foundation/d/d;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/foundation/d/d;)V

    goto :goto_0

    :cond_2
    const-string v0, "banner show failed because campain is exception"

    .line 368
    invoke-direct {p0, v0}, Lcom/tkay/expressad/mbbanner/b/a;->a(Ljava/lang/String;)V

    :goto_0
    const/4 v0, 0x0

    .line 373
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->s:Z

    :cond_3
    :goto_1
    return-void
.end method

.method static synthetic i(Lcom/tkay/expressad/mbbanner/b/a;)Lcom/tkay/expressad/out/TemplateBannerView;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/b/a;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    return-object p0
.end method

.method private static i()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method private static j()V
    .locals 0

    return-void
.end method

.method static synthetic j(Lcom/tkay/expressad/mbbanner/b/a;)Z
    .locals 1

    const/4 v0, 0x1

    .line 25
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->s:Z

    return v0
.end method

.method private k()V
    .locals 6

    .line 424
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_1

    .line 427
    iget-boolean v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->p:Z

    if-eqz v1, :cond_0

    iget-boolean v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->q:Z

    if-eqz v1, :cond_0

    iget-boolean v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->t:Z

    if-nez v1, :cond_0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/y;->a(Landroid/view/View;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 428
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/a;->a()Lcom/tkay/expressad/mbbanner/a/d/a;

    move-result-object v0

    const/4 v1, 0x3

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    new-instance v3, Lcom/tkay/expressad/mbbanner/a/b/d;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget v5, p0, Lcom/tkay/expressad/mbbanner/b/a;->i:I

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, "x"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/tkay/expressad/mbbanner/b/a;->h:I

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iget v5, p0, Lcom/tkay/expressad/mbbanner/b/a;->j:I

    mul-int/lit16 v5, v5, 0x3e8

    invoke-direct {v3, v4, v5}, Lcom/tkay/expressad/mbbanner/a/b/d;-><init>(Ljava/lang/String;I)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/mbbanner/a/d/a;->a(ILjava/lang/String;)V

    goto :goto_0

    .line 430
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/a;->a()Lcom/tkay/expressad/mbbanner/a/d/a;

    move-result-object v0

    const/4 v1, 0x2

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/mbbanner/a/d/a;->a(ILjava/lang/String;)V

    .line 433
    :goto_0
    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->p:Z

    if-nez v0, :cond_1

    .line 434
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/a;->a()Lcom/tkay/expressad/mbbanner/a/d/a;

    move-result-object v0

    const/4 v1, 0x4

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/mbbanner/a/d/a;->a(ILjava/lang/String;)V

    .line 435
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/a;->a()Lcom/tkay/expressad/mbbanner/a/d/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/a;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method static synthetic k(Lcom/tkay/expressad/mbbanner/b/a;)V
    .locals 0

    .line 25
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/b/a;->h()V

    return-void
.end method

.method private l()V
    .locals 2

    .line 441
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/b/a;->k()V

    .line 442
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    if-eqz v0, :cond_0

    .line 443
    iget-boolean v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->p:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c;->b(Z)V

    .line 444
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    iget-boolean v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->q:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c;->c(Z)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 140
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->m:Lcom/tkay/expressad/foundation/d/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/d;->f()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 141
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->m:Lcom/tkay/expressad/foundation/d/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/d;->f()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final a(IIII)V
    .locals 1

    .line 449
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    if-eqz v0, :cond_0

    .line 450
    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(IIII)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 3

    .line 302
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->m:Lcom/tkay/expressad/foundation/d/d;

    .line 320
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/a;->a()Lcom/tkay/expressad/mbbanner/a/d/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/b/a;->v:Lcom/tkay/expressad/mbbanner/a/c/b;

    invoke-virtual {v0, v1, p1, v2}, Lcom/tkay/expressad/mbbanner/a/d/a;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/expressad/mbbanner/a/c/b;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/out/b;)V
    .locals 0

    .line 324
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->l:Lcom/tkay/expressad/out/b;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/out/c;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 213
    invoke-virtual {p1}, Lcom/tkay/expressad/out/c;->a()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->h:I

    .line 214
    invoke-virtual {p1}, Lcom/tkay/expressad/out/c;->b()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->i:I

    :cond_0
    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 231
    iput-boolean p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->e:Z

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x2

    .line 232
    :goto_0
    iput p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->f:I

    return-void
.end method

.method public final b()V
    .locals 3

    const/4 v0, 0x1

    .line 328
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->r:Z

    .line 329
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->l:Lcom/tkay/expressad/out/b;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 330
    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->l:Lcom/tkay/expressad/out/b;

    .line 333
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->v:Lcom/tkay/expressad/mbbanner/a/c/b;

    if-eqz v0, :cond_1

    .line 334
    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->v:Lcom/tkay/expressad/mbbanner/a/c/b;

    .line 336
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->u:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_2

    .line 337
    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->u:Lcom/tkay/expressad/mbbanner/a/c/c;

    .line 339
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_3

    .line 340
    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->g:Lcom/tkay/expressad/out/TemplateBannerView;

    .line 342
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/a;->a()Lcom/tkay/expressad/mbbanner/a/d/a;

    move-result-object v0

    const/4 v1, 0x4

    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/mbbanner/a/d/a;->a(ILjava/lang/String;)V

    .line 343
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/a;->a()Lcom/tkay/expressad/mbbanner/a/d/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/a;->a(Ljava/lang/String;)V

    .line 344
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/a;->a()Lcom/tkay/expressad/mbbanner/a/d/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/mbbanner/a/d/a;->b()V

    .line 345
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/b/a;->n:Lcom/tkay/expressad/mbbanner/a/d/c;

    if-eqz v0, :cond_4

    .line 346
    invoke-virtual {v0}, Lcom/tkay/expressad/mbbanner/a/d/c;->a()V

    :cond_4
    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 413
    iput-boolean p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->p:Z

    .line 414
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/b/a;->l()V

    .line 415
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/b/a;->h()V

    return-void
.end method

.method public final c()V
    .locals 5

    .line 455
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/a;->a()Lcom/tkay/expressad/mbbanner/a/d/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    new-instance v2, Lcom/tkay/expressad/mbbanner/a/b/d;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget v4, p0, Lcom/tkay/expressad/mbbanner/b/a;->i:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "x"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/tkay/expressad/mbbanner/b/a;->h:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iget v4, p0, Lcom/tkay/expressad/mbbanner/b/a;->j:I

    mul-int/lit16 v4, v4, 0x3e8

    invoke-direct {v2, v3, v4}, Lcom/tkay/expressad/mbbanner/a/b/d;-><init>(Ljava/lang/String;I)V

    const/4 v2, 0x4

    invoke-virtual {v0, v2, v1}, Lcom/tkay/expressad/mbbanner/a/d/a;->a(ILjava/lang/String;)V

    return-void
.end method

.method public final c(Z)V
    .locals 0

    .line 419
    iput-boolean p1, p0, Lcom/tkay/expressad/mbbanner/b/a;->q:Z

    .line 420
    invoke-direct {p0}, Lcom/tkay/expressad/mbbanner/b/a;->l()V

    return-void
.end method

.method public final d()V
    .locals 5

    .line 460
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/a;->a()Lcom/tkay/expressad/mbbanner/a/d/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/b/a;->c:Ljava/lang/String;

    new-instance v2, Lcom/tkay/expressad/mbbanner/a/b/d;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget v4, p0, Lcom/tkay/expressad/mbbanner/b/a;->i:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "x"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/tkay/expressad/mbbanner/b/a;->h:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iget v4, p0, Lcom/tkay/expressad/mbbanner/b/a;->j:I

    mul-int/lit16 v4, v4, 0x3e8

    invoke-direct {v2, v3, v4}, Lcom/tkay/expressad/mbbanner/a/b/d;-><init>(Ljava/lang/String;I)V

    const/4 v2, 0x3

    invoke-virtual {v0, v2, v1}, Lcom/tkay/expressad/mbbanner/a/d/a;->a(ILjava/lang/String;)V

    return-void
.end method
