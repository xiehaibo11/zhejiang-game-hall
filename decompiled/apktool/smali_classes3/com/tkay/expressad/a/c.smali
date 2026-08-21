.class public final Lcom/tkay/expressad/a/c;
.super Lcom/tkay/expressad/a/d;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/a/c$b;,
        Lcom/tkay/expressad/a/c$a;
    }
.end annotation


# static fields
.field private static final i:Z = true


# instance fields
.field a:Lcom/tkay/expressad/a/c$b;

.field private j:I

.field private k:Ljava/lang/String;

.field private l:I

.field private m:Lcom/tkay/expressad/a/e;

.field private n:Z

.field private o:Lcom/tkay/expressad/foundation/g/g/c;

.field private p:Lcom/tkay/expressad/a/h;

.field private q:Landroid/os/Handler;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 45
    invoke-direct {p0}, Lcom/tkay/expressad/a/d;-><init>()V

    const/4 v0, 0x0

    .line 27
    iput v0, p0, Lcom/tkay/expressad/a/c;->j:I

    const/4 v0, 0x0

    .line 28
    iput-object v0, p0, Lcom/tkay/expressad/a/c;->k:Ljava/lang/String;

    .line 29
    iput-object v0, p0, Lcom/tkay/expressad/a/c;->a:Lcom/tkay/expressad/a/c$b;

    .line 31
    iput-object v0, p0, Lcom/tkay/expressad/a/c;->m:Lcom/tkay/expressad/a/e;

    const/4 v0, 0x1

    .line 32
    iput-boolean v0, p0, Lcom/tkay/expressad/a/c;->n:Z

    .line 39
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/a/c;->q:Landroid/os/Handler;

    .line 47
    new-instance v0, Lcom/tkay/expressad/foundation/g/g/c;

    const/4 v1, 0x2

    invoke-direct {v0, p1, v1}, Lcom/tkay/expressad/foundation/g/g/c;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/tkay/expressad/a/c;->o:Lcom/tkay/expressad/foundation/g/g/c;

    .line 53
    new-instance v0, Lcom/tkay/expressad/a/h;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/a/h;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/a/c;->p:Lcom/tkay/expressad/a/h;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/a/c;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 23
    iput-object p1, p0, Lcom/tkay/expressad/a/c;->k:Ljava/lang/String;

    return-object p1
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/e;)V
    .locals 15

    move-object v0, p0

    .line 1087
    new-instance v1, Ljava/lang/String;

    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>(Ljava/lang/String;)V

    iput-object v1, v0, Lcom/tkay/expressad/a/c;->k:Ljava/lang/String;

    move-object/from16 v1, p4

    .line 1088
    iput-object v1, v0, Lcom/tkay/expressad/a/c;->m:Lcom/tkay/expressad/a/e;

    const/4 v2, 0x0

    .line 1089
    iput-object v2, v0, Lcom/tkay/expressad/a/c;->a:Lcom/tkay/expressad/a/c$b;

    .line 1092
    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->ab()Ljava/lang/String;

    move-result-object v2

    const-string v3, "5"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->ab()Ljava/lang/String;

    move-result-object v2

    const-string v3, "6"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v2, 0x1

    :goto_1
    move v6, v2

    .line 1093
    iget-object v3, v0, Lcom/tkay/expressad/a/c;->p:Lcom/tkay/expressad/a/h;

    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object v4

    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v8

    const/4 v12, 0x1

    const/4 v13, 0x0

    sget v14, Lcom/tkay/expressad/a/a/a;->l:I

    const/4 v10, 0x0

    move-object/from16 v5, p4

    move-object/from16 v7, p1

    move-object/from16 v9, p2

    move-object/from16 v11, p3

    invoke-virtual/range {v3 .. v14}, Lcom/tkay/expressad/a/h;->a(Ljava/lang/String;Lcom/tkay/expressad/a/e;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/c/b;Lcom/tkay/expressad/foundation/d/c;ZZI)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/e;Lcom/tkay/expressad/c/b;)V
    .locals 15

    move-object v0, p0

    .line 87
    new-instance v1, Ljava/lang/String;

    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>(Ljava/lang/String;)V

    iput-object v1, v0, Lcom/tkay/expressad/a/c;->k:Ljava/lang/String;

    move-object/from16 v1, p4

    .line 88
    iput-object v1, v0, Lcom/tkay/expressad/a/c;->m:Lcom/tkay/expressad/a/e;

    const/4 v2, 0x0

    .line 89
    iput-object v2, v0, Lcom/tkay/expressad/a/c;->a:Lcom/tkay/expressad/a/c$b;

    .line 92
    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->ab()Ljava/lang/String;

    move-result-object v2

    const-string v3, "5"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->ab()Ljava/lang/String;

    move-result-object v2

    const-string v3, "6"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v2, 0x1

    :goto_1
    move v6, v2

    .line 93
    iget-object v3, v0, Lcom/tkay/expressad/a/c;->p:Lcom/tkay/expressad/a/h;

    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object v4

    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v8

    const/4 v12, 0x1

    const/4 v13, 0x0

    sget v14, Lcom/tkay/expressad/a/a/a;->l:I

    move-object/from16 v5, p4

    move-object/from16 v7, p1

    move-object/from16 v9, p2

    move-object/from16 v10, p5

    move-object/from16 v11, p3

    invoke-virtual/range {v3 .. v14}, Lcom/tkay/expressad/a/h;->a(Ljava/lang/String;Lcom/tkay/expressad/a/e;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/c/b;Lcom/tkay/expressad/foundation/d/c;ZZI)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/a/c;)Z
    .locals 0

    .line 23
    iget-boolean p0, p0, Lcom/tkay/expressad/a/c;->n:Z

    return p0
.end method

.method static synthetic b(Lcom/tkay/expressad/a/c;)Lcom/tkay/expressad/a/e;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/tkay/expressad/a/c;->m:Lcom/tkay/expressad/a/e;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/expressad/a/c;)Landroid/os/Handler;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/tkay/expressad/a/c;->q:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/expressad/a/c;)I
    .locals 2

    .line 23
    iget v0, p0, Lcom/tkay/expressad/a/c;->j:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/tkay/expressad/a/c;->j:I

    return v0
.end method

.method static synthetic e(Lcom/tkay/expressad/a/c;)Ljava/lang/String;
    .locals 0

    .line 23
    iget-object p0, p0, Lcom/tkay/expressad/a/c;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/expressad/a/c;)I
    .locals 0

    .line 23
    iget p0, p0, Lcom/tkay/expressad/a/c;->j:I

    return p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/e;Ljava/lang/String;ZZI)V
    .locals 13

    move-object v0, p0

    move-object/from16 v2, p5

    .line 70
    iput-object v2, v0, Lcom/tkay/expressad/a/c;->k:Ljava/lang/String;

    move-object/from16 v3, p4

    .line 71
    iput-object v3, v0, Lcom/tkay/expressad/a/c;->m:Lcom/tkay/expressad/a/e;

    const/4 v1, 0x0

    .line 72
    iput-object v1, v0, Lcom/tkay/expressad/a/c;->a:Lcom/tkay/expressad/a/c$b;

    move/from16 v12, p8

    .line 73
    iput v12, v0, Lcom/tkay/expressad/a/c;->l:I

    const/4 v1, 0x0

    if-eqz p3, :cond_2

    .line 79
    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->ab()Ljava/lang/String;

    move-result-object v4

    const-string v5, "5"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_0

    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->ab()Ljava/lang/String;

    move-result-object v4

    const-string v5, "6"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    :cond_0
    const/4 v1, 0x1

    .line 80
    :cond_1
    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    goto :goto_0

    :cond_2
    const-string v4, ""

    :goto_0
    move-object v6, v4

    move v4, v1

    .line 82
    iget-object v1, v0, Lcom/tkay/expressad/a/c;->p:Lcom/tkay/expressad/a/h;

    const/4 v8, 0x0

    move-object/from16 v2, p5

    move-object/from16 v3, p4

    move-object v5, p1

    move-object v7, p2

    move-object/from16 v9, p3

    move/from16 v10, p6

    move/from16 v11, p7

    move/from16 v12, p8

    invoke-virtual/range {v1 .. v12}, Lcom/tkay/expressad/a/h;->a(Ljava/lang/String;Lcom/tkay/expressad/a/e;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/c/b;Lcom/tkay/expressad/foundation/d/c;ZZI)V

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 42
    iget-boolean v0, p0, Lcom/tkay/expressad/a/c;->n:Z

    return v0
.end method

.method public final b()V
    .locals 1

    const/4 v0, 0x0

    .line 131
    iput-boolean v0, p0, Lcom/tkay/expressad/a/c;->n:Z

    return-void
.end method
