.class public final Lcom/tkay/expressad/a/a;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "Tkay SDK M"

.field public static b:Z = false

.field public static c:Ljava/util/Map; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field public static d:Ljava/util/Set; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public static final e:Ljava/lang/String; = "2"

.field private static final f:I = 0x1


# instance fields
.field private g:Ljava/lang/String;

.field private h:J

.field private i:Lcom/tkay/expressad/foundation/c/c;

.field private j:Landroid/content/Context;

.field private k:Lcom/tkay/expressad/a/c;

.field private l:Lcom/tkay/expressad/out/a;

.field private m:Lcom/tkay/expressad/out/j$c;

.field private n:Lcom/tkay/expressad/d/a;

.field private o:Z

.field private p:Z

.field private q:Z

.field private r:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 55
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/a/a;->c:Ljava/util/Map;

    .line 56
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/tkay/expressad/a/a;->d:Ljava/util/Set;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 61
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 38
    iput-object v0, p0, Lcom/tkay/expressad/a/a;->i:Lcom/tkay/expressad/foundation/c/c;

    .line 39
    iput-object v0, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    .line 45
    iput-object v0, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    const/4 v0, 0x0

    .line 49
    iput-boolean v0, p0, Lcom/tkay/expressad/a/a;->p:Z

    const/4 v0, 0x1

    .line 51
    iput-boolean v0, p0, Lcom/tkay/expressad/a/a;->q:Z

    .line 62
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/a/a;->n:Lcom/tkay/expressad/d/a;

    if-nez v0, :cond_0

    .line 64
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->c()Lcom/tkay/expressad/d/a;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/a/a;->n:Lcom/tkay/expressad/d/a;

    .line 67
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/a/a;->n:Lcom/tkay/expressad/d/a;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->t()Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/expressad/a/a;->o:Z

    .line 68
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    .line 69
    iput-object p2, p0, Lcom/tkay/expressad/a/a;->g:Ljava/lang/String;

    .line 70
    iget-object p2, p0, Lcom/tkay/expressad/a/a;->i:Lcom/tkay/expressad/foundation/c/c;

    if-nez p2, :cond_1

    .line 71
    invoke-static {p1}, Lcom/tkay/expressad/foundation/c/c;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/c/c;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/a/a;->i:Lcom/tkay/expressad/foundation/c/c;

    :cond_1
    return-void
.end method

.method private a(ILjava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/out/j$c;)V
    .locals 1

    .line 640
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    .line 642
    iget-object p1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-static {p1, p2, p3, p4}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/out/j$c;)V

    return-void

    .line 645
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-static {p1, p2, p4}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return-void

    :catchall_0
    move-exception p1

    .line 649
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 9

    if-nez p0, :cond_0

    return-void

    .line 344
    :cond_0
    new-instance v0, Lcom/tkay/expressad/a/c;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/tkay/expressad/a/c;-><init>(Landroid/content/Context;)V

    const/4 v4, 0x0

    const/4 v6, 0x0

    .line 345
    sget v8, Lcom/tkay/expressad/a/a/a;->h:I

    const-string v1, "2"

    move-object v2, p2

    move-object v3, p1

    move-object v5, p3

    move v7, p4

    invoke-virtual/range {v0 .. v8}, Lcom/tkay/expressad/a/c;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/e;Ljava/lang/String;ZZI)V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V
    .locals 9

    if-nez p0, :cond_0

    return-void

    .line 354
    :cond_0
    new-instance v0, Lcom/tkay/expressad/a/c;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/tkay/expressad/a/c;-><init>(Landroid/content/Context;)V

    const/4 v4, 0x0

    const-string v1, "2"

    move-object v2, p2

    move-object v3, p1

    move-object v5, p3

    move v6, p4

    move v7, p5

    move v8, p6

    .line 355
    invoke-virtual/range {v0 .. v8}, Lcom/tkay/expressad/a/c;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/e;Ljava/lang/String;ZZI)V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V
    .locals 10

    if-eqz p0, :cond_1

    if-eqz p1, :cond_1

    .line 363
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-nez p3, :cond_0

    goto :goto_1

    .line 366
    :cond_0
    new-instance v0, Lcom/tkay/expressad/a/c;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/tkay/expressad/a/c;-><init>(Landroid/content/Context;)V

    const/4 p0, 0x0

    .line 368
    :goto_0
    array-length v1, p3

    if-ge p0, v1, :cond_1

    const/4 v5, 0x0

    .line 369
    aget-object v6, p3, p0

    const/4 v7, 0x0

    sget v9, Lcom/tkay/expressad/a/a/a;->h:I

    const-string v2, "2"

    move-object v1, v0

    move-object v3, p2

    move-object v4, p1

    move v8, p4

    invoke-virtual/range {v1 .. v9}, Lcom/tkay/expressad/a/c;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/e;Ljava/lang/String;ZZI)V

    add-int/lit8 p0, p0, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/a/a;)V
    .locals 2

    .line 1876
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "ExitApp"

    .line 1877
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 1878
    iget-object p0, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-static {p0}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/j;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method private a(Lcom/tkay/expressad/a/c$b;Lcom/tkay/expressad/foundation/d/c;Z)V
    .locals 7

    if-eqz p2, :cond_7

    if-nez p1, :cond_0

    goto/16 :goto_0

    .line 549
    :cond_0
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/expressad/a/a;->h:J

    sub-long/2addr v0, v2

    .line 550
    new-instance v2, Lcom/tkay/expressad/foundation/d/f;

    invoke-direct {v2}, Lcom/tkay/expressad/foundation/d/f;-><init>()V

    .line 551
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/foundation/d/f;->i(Ljava/lang/String;)V

    .line 552
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/f;->a()V

    .line 553
    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/f;->h(Ljava/lang/String;)V

    .line 554
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/f;->g(Ljava/lang/String;)V

    .line 555
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->c()I

    move-result v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/f;->d(I)V

    .line 556
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "utf-8"

    if-nez v0, :cond_1

    .line 557
    :try_start_1
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/f;->f(Ljava/lang/String;)V

    .line 560
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v3, p0, Lcom/tkay/expressad/a/a;->h:J

    const-wide/16 v5, 0x3e8

    div-long/2addr v3, v5

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/f;->b(Ljava/lang/String;)V

    .line 561
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->ac()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/f;->a(I)V

    .line 562
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    move-result p2

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->b(I)V

    .line 563
    iget-object p2, p0, Lcom/tkay/expressad/a/a;->g:Ljava/lang/String;

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->a(Ljava/lang/String;)V

    .line 565
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->c()I

    move-result p2

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->d(I)V

    .line 566
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_2

    .line 567
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->f(Ljava/lang/String;)V

    .line 569
    :cond_2
    iget-boolean p2, p0, Lcom/tkay/expressad/a/a;->o:Z

    if-eqz p2, :cond_5

    .line 570
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->a()I

    move-result p2

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->c(I)V

    .line 571
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->d()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_3

    .line 572
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->d()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->d(Ljava/lang/String;)V

    .line 574
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->f()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_4

    .line 575
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->f()Ljava/lang/String;

    move-result-object p2

    const-string v0, "UTF-8"

    invoke-static {p2, v0}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->e(Ljava/lang/String;)V

    .line 577
    :cond_4
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->e()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_5

    .line 578
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->e()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Lcom/tkay/expressad/foundation/d/f;->c(Ljava/lang/String;)V

    :cond_5
    if-nez p3, :cond_6

    .line 585
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 586
    invoke-virtual {p1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 587
    invoke-static {p1}, Lcom/tkay/expressad/foundation/d/f;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object p1

    .line 588
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_6
    return-void

    :catchall_0
    move-exception p1

    .line 595
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_7
    :goto_0
    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/c$b;ZZ)V
    .locals 6

    .line 731
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/a/a;->q:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    if-eqz p1, :cond_11

    if-nez p2, :cond_1

    goto/16 :goto_3

    .line 744
    :cond_1
    invoke-direct {p0}, Lcom/tkay/expressad/a/a;->i()I

    move-result v1

    .line 745
    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->i()I

    move-result v2

    .line 747
    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x2

    const/4 v5, 0x3

    if-eqz v3, :cond_5

    if-eqz p3, :cond_5

    .line 749
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    move-result p4

    if-ne p4, v4, :cond_2

    .line 751
    invoke-direct {p0}, Lcom/tkay/expressad/a/a;->i()I

    move-result p4

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/a/a;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/c$b;ZI)Z

    return-void

    :cond_2
    if-ne p4, v5, :cond_3

    .line 754
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/a/a;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/c$b;Z)Z

    return-void

    .line 757
    :cond_3
    iget-object p3, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object p4

    iget-object v1, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-static {p3, p4, v1}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)V

    .line 758
    invoke-direct {p0, p2, p1, v0}, Lcom/tkay/expressad/a/a;->b(Lcom/tkay/expressad/a/c$b;Lcom/tkay/expressad/foundation/d/c;Z)V

    .line 759
    iget-object p3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    if-eqz p3, :cond_4

    .line 760
    iget-object p3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p3, p1, p2}, Lcom/tkay/expressad/out/j$c;->a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    :cond_4
    return-void

    :cond_5
    if-ne v2, v0, :cond_9

    .line 768
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    .line 769
    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_6

    if-eqz p3, :cond_6

    .line 771
    iget-object v2, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-static {v2, v3, v4}, Lcom/tkay/expressad/foundation/h/s$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)Z

    move-result v2

    if-nez v2, :cond_8

    goto :goto_0

    :cond_6
    if-eqz p3, :cond_8

    .line 778
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    iget-object v2, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "market://details?id="

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 779
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    .line 778
    invoke-static {v2, v3, v4}, Lcom/tkay/expressad/foundation/h/s$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)Z

    move-result v2

    if-nez v2, :cond_8

    .line 780
    :cond_7
    :goto_0
    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-direct {p0, v1, v2, p1, v3}, Lcom/tkay/expressad/a/a;->a(ILjava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/out/j$c;)V

    .line 784
    :cond_8
    iget-object v1, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    if-eqz v1, :cond_e

    if-eqz p3, :cond_e

    .line 785
    iget-object v1, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, p1, v2}, Lcom/tkay/expressad/out/j$c;->a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    goto :goto_1

    :cond_9
    if-ne v2, v5, :cond_b

    if-eqz p3, :cond_a

    .line 791
    iget-object v1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-static {v1, v2, v3}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)V

    .line 793
    :cond_a
    iget-object v1, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    if-eqz v1, :cond_e

    if-eqz p3, :cond_e

    .line 794
    iget-object v1, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, p1, v2}, Lcom/tkay/expressad/out/j$c;->a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    goto :goto_1

    :cond_b
    if-eqz p3, :cond_e

    .line 800
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    move-result v1

    if-ne v5, v1, :cond_c

    .line 801
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/a/a;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/c$b;Z)Z

    return-void

    .line 803
    :cond_c
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    move-result v1

    if-ne v4, v1, :cond_d

    .line 804
    invoke-direct {p0}, Lcom/tkay/expressad/a/a;->i()I

    move-result p4

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/a/a;->a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/c$b;ZI)Z

    return-void

    .line 807
    :cond_d
    iget-object v1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-static {v1, v2, v3}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)V

    .line 809
    iget-object v1, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    if-eqz v1, :cond_e

    .line 810
    iget-object v1, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, p1, v2}, Lcom/tkay/expressad/out/j$c;->a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    .line 815
    :cond_e
    :goto_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    move-result v1

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/tkay/expressad/a/a;->a(ILjava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_f

    const/4 v0, 0x0

    .line 816
    invoke-direct {p0, p2, p1, v0}, Lcom/tkay/expressad/a/a;->b(Lcom/tkay/expressad/a/c$b;Lcom/tkay/expressad/foundation/d/c;Z)V

    goto :goto_2

    .line 818
    :cond_f
    invoke-direct {p0, p2, p1, v0}, Lcom/tkay/expressad/a/a;->b(Lcom/tkay/expressad/a/c$b;Lcom/tkay/expressad/foundation/d/c;Z)V

    .line 820
    :goto_2
    iget-object v0, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    if-eqz v0, :cond_10

    if-nez p3, :cond_10

    if-eqz p4, :cond_10

    .line 821
    iget-object p3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p3, p1, p2}, Lcom/tkay/expressad/out/j$c;->a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    :cond_10
    return-void

    :cond_11
    :goto_3
    if-eqz p3, :cond_12

    .line 737
    invoke-direct {p0, p2, p1, v0}, Lcom/tkay/expressad/a/a;->b(Lcom/tkay/expressad/a/c$b;Lcom/tkay/expressad/foundation/d/c;Z)V

    .line 738
    iget-object p1, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    if-eqz p1, :cond_12

    .line 739
    iget-object p1, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    const/4 p2, 0x0

    invoke-interface {p1, p2, p2}, Lcom/tkay/expressad/out/j$c;->b(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_12
    return-void

    :catch_0
    move-exception p1

    .line 825
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V
    .locals 8

    .line 154
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 157
    iget-object v1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/expressad/a/a;->g:Ljava/lang/String;

    const/4 v5, 0x1

    const/4 v6, 0x0

    sget v7, Lcom/tkay/expressad/a/a/a;->k:I

    move-object v2, p1

    move-object v4, p2

    invoke-static/range {v1 .. v7}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V

    :cond_0
    return-void
.end method

.method private a(Lcom/tkay/expressad/out/a;)V
    .locals 0

    .line 97
    iput-object p1, p0, Lcom/tkay/expressad/a/a;->l:Lcom/tkay/expressad/out/a;

    return-void
.end method

.method private a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V
    .locals 2

    .line 601
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 605
    instance-of v1, p1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_1

    .line 606
    move-object v0, p1

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    :cond_1
    const-string p1, "market://"

    .line 608
    invoke-virtual {p2, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_2

    const-string p1, "https://play.google.com/"

    .line 609
    invoke-virtual {p2, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_5

    .line 610
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/foundation/h/s$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)Z

    move-result p1

    if-nez p1, :cond_5

    if-eqz v0, :cond_5

    .line 613
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 614
    iget-object p1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    new-instance p2, Ljava/lang/StringBuilder;

    const-string v1, "market://details?id="

    invoke-direct {p2, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 615
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    .line 614
    invoke-static {p1, p2, v0}, Lcom/tkay/expressad/foundation/h/s$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)Z

    return-void

    .line 617
    :cond_3
    invoke-direct {p0}, Lcom/tkay/expressad/a/a;->i()I

    move-result p1

    const/4 p2, 0x2

    if-ne p1, p2, :cond_4

    .line 619
    iget-object p1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-static {p1, p2, v0, v1}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/out/j$c;)V

    return-void

    .line 621
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-static {p1, p2, v0}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_5
    :goto_0
    return-void

    :catch_0
    move-exception p1

    .line 630
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/tkay/expressad/a/a;->g:Ljava/lang/String;

    return-void
.end method

.method private a(ZLcom/tkay/expressad/out/d;)V
    .locals 2

    .line 530
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/tkay/expressad/a/a$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/a/a$1;-><init>(Lcom/tkay/expressad/a/a;ZLcom/tkay/expressad/out/d;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private static a(ILjava/lang/String;)Z
    .locals 3

    const/4 v0, 0x2

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-ne p0, v0, :cond_0

    .line 847
    :try_start_0
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/s$a;->a(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    goto :goto_0

    .line 851
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_1

    goto :goto_0

    :catch_0
    move-exception p0

    .line 856
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    move v1, v2

    :goto_0
    return v1
.end method

.method private static a(Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 6

    if-eqz p0, :cond_3

    const/4 v0, 0x2

    .line 129
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    move-result v1

    if-eq v0, v1, :cond_0

    const/4 v0, 0x3

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    move-result v1

    if-ne v0, v1, :cond_3

    .line 130
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v0

    .line 131
    sget-object v1, Lcom/tkay/expressad/a/a;->c:Ljava/util/Map;

    if-eqz v1, :cond_3

    .line 132
    sget-object v1, Lcom/tkay/expressad/a/a;->c:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 133
    sget-object v1, Lcom/tkay/expressad/a/a;->c:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Long;

    if-eqz v0, :cond_2

    .line 135
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    .line 136
    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    cmp-long v0, v3, v1

    if-gtz v0, :cond_1

    sget-object v0, Lcom/tkay/expressad/a/a;->d:Ljava/util/Set;

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    :cond_1
    const/4 p0, 0x0

    return p0

    .line 141
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->Y()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    .line 142
    sget-object v1, Lcom/tkay/expressad/a/a;->c:Ljava/util/Map;

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object p0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    int-to-long v4, v0

    add-long/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-interface {v1, p0, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 146
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_3

    .line 147
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/c$b;Z)Z
    .locals 4

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p3, :cond_0

    .line 708
    :try_start_0
    iget-object p3, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-static {p3, v2, v3}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)V

    move v1, v0

    .line 711
    :cond_0
    invoke-direct {p0, p2, p1, v0}, Lcom/tkay/expressad/a/a;->b(Lcom/tkay/expressad/a/c$b;Lcom/tkay/expressad/foundation/d/c;Z)V

    if-eqz v1, :cond_1

    .line 713
    iget-object p3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    if-eqz p3, :cond_2

    .line 714
    iget-object p3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p3, p1, p2}, Lcom/tkay/expressad/out/j$c;->a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    goto :goto_0

    .line 717
    :cond_1
    iget-object p3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    if-eqz p3, :cond_2

    .line 718
    iget-object p3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p3, p1, p2}, Lcom/tkay/expressad/out/j$c;->b(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 723
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_2
    :goto_0
    return v1
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/c$b;ZI)Z
    .locals 5

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eqz p3, :cond_4

    .line 659
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ac()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    if-ne v2, v1, :cond_0

    .line 661
    iget-object p4, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-static {p4, v2, v3}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)V

    :goto_0
    move v0, v1

    goto :goto_1

    :cond_0
    const/4 v3, 0x2

    if-ne v2, v3, :cond_1

    .line 664
    iget-object p4, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-static {p4, v2, p1, v3}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/out/j$c;)V

    goto :goto_0

    .line 668
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_3

    .line 670
    iget-object v2, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "market://details?id="

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 671
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    .line 670
    invoke-static {v2, v3, v4}, Lcom/tkay/expressad/foundation/h/s$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)Z

    move-result v2

    if-eqz v2, :cond_2

    goto :goto_0

    .line 675
    :cond_2
    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-direct {p0, p4, v2, p1, v3}, Lcom/tkay/expressad/a/a;->a(ILjava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/out/j$c;)V

    goto :goto_1

    .line 679
    :cond_3
    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-direct {p0, p4, v2, p1, v3}, Lcom/tkay/expressad/a/a;->a(ILjava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/out/j$c;)V

    goto :goto_1

    :catchall_0
    move-exception p1

    goto :goto_2

    :cond_4
    :goto_1
    if-eqz v0, :cond_5

    .line 686
    invoke-direct {p0, p2, p1, v1}, Lcom/tkay/expressad/a/a;->b(Lcom/tkay/expressad/a/c$b;Lcom/tkay/expressad/foundation/d/c;Z)V

    .line 687
    iget-object p3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    if-eqz p3, :cond_6

    .line 688
    iget-object p3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p3, p1, p2}, Lcom/tkay/expressad/out/j$c;->a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    goto :goto_3

    .line 691
    :cond_5
    invoke-direct {p0, p2, p1, v1}, Lcom/tkay/expressad/a/a;->b(Lcom/tkay/expressad/a/c$b;Lcom/tkay/expressad/foundation/d/c;Z)V

    .line 692
    iget-object p4, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    if-eqz p4, :cond_6

    if-eqz p3, :cond_6

    .line 693
    iget-object p3, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    invoke-virtual {p2}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p3, p1, p2}, Lcom/tkay/expressad/out/j$c;->b(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_3

    .line 698
    :goto_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_6
    :goto_3
    return v0
.end method

.method static synthetic b(Lcom/tkay/expressad/a/a;)Lcom/tkay/expressad/out/j$c;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    return-object p0
.end method

.method private b(Lcom/tkay/expressad/a/c$b;Lcom/tkay/expressad/foundation/d/c;Z)V
    .locals 7

    if-eqz p2, :cond_7

    if-nez p1, :cond_0

    goto/16 :goto_0

    .line 1549
    :cond_0
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/expressad/a/a;->h:J

    sub-long/2addr v0, v2

    .line 1550
    new-instance v2, Lcom/tkay/expressad/foundation/d/f;

    invoke-direct {v2}, Lcom/tkay/expressad/foundation/d/f;-><init>()V

    .line 1551
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/foundation/d/f;->i(Ljava/lang/String;)V

    .line 1552
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/f;->a()V

    .line 1553
    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/f;->h(Ljava/lang/String;)V

    .line 1554
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/f;->g(Ljava/lang/String;)V

    .line 1555
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->c()I

    move-result v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/f;->d(I)V

    .line 1556
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "utf-8"

    if-nez v0, :cond_1

    .line 1557
    :try_start_1
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/f;->f(Ljava/lang/String;)V

    .line 1560
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v3, p0, Lcom/tkay/expressad/a/a;->h:J

    const-wide/16 v5, 0x3e8

    div-long/2addr v3, v5

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/f;->b(Ljava/lang/String;)V

    .line 1561
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->ac()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/f;->a(I)V

    .line 1562
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    move-result p2

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->b(I)V

    .line 1563
    iget-object p2, p0, Lcom/tkay/expressad/a/a;->g:Ljava/lang/String;

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->a(Ljava/lang/String;)V

    .line 1565
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->c()I

    move-result p2

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->d(I)V

    .line 1566
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_2

    .line 1567
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->j()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->f(Ljava/lang/String;)V

    .line 1569
    :cond_2
    iget-boolean p2, p0, Lcom/tkay/expressad/a/a;->o:Z

    if-eqz p2, :cond_5

    .line 1570
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->a()I

    move-result p2

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->c(I)V

    .line 1571
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->d()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_3

    .line 1572
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->d()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->d(Ljava/lang/String;)V

    .line 1574
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->f()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_4

    .line 1575
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->f()Ljava/lang/String;

    move-result-object p2

    const-string v0, "UTF-8"

    invoke-static {p2, v0}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Lcom/tkay/expressad/foundation/d/f;->e(Ljava/lang/String;)V

    .line 1577
    :cond_4
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->e()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_5

    .line 1578
    invoke-virtual {p1}, Lcom/tkay/expressad/a/c$b;->e()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Lcom/tkay/expressad/foundation/d/f;->c(Ljava/lang/String;)V

    :cond_5
    if-nez p3, :cond_6

    .line 1585
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 1586
    invoke-virtual {p1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1587
    invoke-static {p1}, Lcom/tkay/expressad/foundation/d/f;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object p1

    .line 1588
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_6
    return-void

    :catchall_0
    move-exception p1

    .line 1595
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_7
    :goto_0
    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    .line 865
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    iget-object v1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    const-class v2, Lcom/tkay/expressad/out/LoadingActivity;

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    .line 866
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    const-string v1, "icon_url"

    .line 867
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 868
    iget-object p1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-virtual {p1, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method private c()Z
    .locals 1

    .line 85
    iget-boolean v0, p0, Lcom/tkay/expressad/a/a;->q:Z

    return v0
.end method

.method private d()Lcom/tkay/expressad/out/a;
    .locals 1

    .line 93
    iget-object v0, p0, Lcom/tkay/expressad/a/a;->l:Lcom/tkay/expressad/out/a;

    return-object v0
.end method

.method private e()Lcom/tkay/expressad/foundation/c/c;
    .locals 1

    .line 101
    iget-object v0, p0, Lcom/tkay/expressad/a/a;->i:Lcom/tkay/expressad/foundation/c/c;

    return-object v0
.end method

.method private static f()V
    .locals 0

    return-void
.end method

.method private g()V
    .locals 1

    .line 122
    iget-object v0, p0, Lcom/tkay/expressad/a/a;->k:Lcom/tkay/expressad/a/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 123
    iget-object v0, p0, Lcom/tkay/expressad/a/a;->k:Lcom/tkay/expressad/a/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c;->b()V

    :cond_0
    return-void
.end method

.method private static h()V
    .locals 0

    return-void
.end method

.method private i()I
    .locals 2

    const/4 v0, 0x1

    .line 832
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/a/a;->n:Lcom/tkay/expressad/d/a;

    if-eqz v1, :cond_0

    .line 833
    iget-object v1, p0, Lcom/tkay/expressad/a/a;->n:Lcom/tkay/expressad/d/a;

    invoke-virtual {v1}, Lcom/tkay/expressad/d/a;->k()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 836
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return v0
.end method

.method private j()V
    .locals 2

    .line 876
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "ExitApp"

    .line 877
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 878
    iget-object v1, p0, Lcom/tkay/expressad/a/a;->j:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/j;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    const/4 v0, 0x0

    .line 89
    iput-boolean v0, p0, Lcom/tkay/expressad/a/a;->q:Z

    return-void
.end method

.method public final a(Lcom/tkay/expressad/out/j$c;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;

    return-void
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x0

    .line 106
    :try_start_0
    iput-object v0, p0, Lcom/tkay/expressad/a/a;->m:Lcom/tkay/expressad/out/j$c;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 108
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method
