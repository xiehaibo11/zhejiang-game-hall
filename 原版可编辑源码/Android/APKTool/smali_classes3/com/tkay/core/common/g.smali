.class public final Lcom/tkay/core/common/g;
.super Landroid/os/CountDownTimer;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/g$a;
    }
.end annotation


# instance fields
.field protected a:Lcom/tkay/core/common/f/aj;

.field protected b:Lcom/tkay/core/common/f/d;

.field protected c:Lcom/tkay/core/c/d;

.field d:Z

.field private final e:Ljava/lang/String;


# direct methods
.method public constructor <init>(JJLcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;)V
    .locals 0

    .line 46
    invoke-direct {p0, p1, p2, p3, p4}, Landroid/os/CountDownTimer;-><init>(JJ)V

    .line 38
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/g;->e:Ljava/lang/String;

    const/4 p1, 0x0

    .line 51
    iput-boolean p1, p0, Lcom/tkay/core/common/g;->d:Z

    .line 47
    iput-object p5, p0, Lcom/tkay/core/common/g;->a:Lcom/tkay/core/common/f/aj;

    .line 48
    iput-object p6, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    return-void
.end method

.method protected static a(JLcom/tkay/core/common/b/n;)V
    .locals 2

    .line 114
    invoke-virtual {p2}, Lcom/tkay/core/common/b/n;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object p2

    .line 115
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    sub-long/2addr v0, p0

    invoke-virtual {p2, v0, v1}, Lcom/tkay/core/common/f/d;->c(J)V

    return-void
.end method

.method private a(JLcom/tkay/core/common/b/n;Lcom/tkay/core/api/AdError;)V
    .locals 3

    .line 145
    invoke-virtual {p3}, Lcom/tkay/core/common/b/n;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object p3

    .line 147
    iget-boolean v0, p0, Lcom/tkay/core/common/g;->d:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 148
    iput-boolean v0, p0, Lcom/tkay/core/common/g;->d:Z

    const/4 v0, 0x0

    .line 150
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, p1

    invoke-static {p3, v0, p4, v1, v2}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;J)V

    .line 151
    sget-object p1, Lcom/tkay/core/common/b/f$i;->b:Ljava/lang/String;

    sget-object p2, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    invoke-virtual {p4}, Lcom/tkay/core/api/AdError;->printStackTrace()Ljava/lang/String;

    move-result-object p4

    invoke-static {p3, p1, p2, p4}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 10

    .line 77
    iget-object v0, p0, Lcom/tkay/core/common/g;->a:Lcom/tkay/core/common/f/aj;

    invoke-static {v0}, Lcom/tkay/core/common/l/i;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 82
    :cond_0
    iget-object v1, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    const/4 v2, 0x1

    .line 2594
    iput v2, v1, Lcom/tkay/core/common/f/d;->q:I

    .line 83
    iget-object v1, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    const/4 v3, 0x0

    .line 2603
    iput v3, v1, Lcom/tkay/core/common/f/d;->r:I

    .line 84
    iget-object v1, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    .line 2612
    iput v3, v1, Lcom/tkay/core/common/f/d;->s:I

    .line 86
    iget-object v1, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v0, v1}, Lcom/tkay/core/api/TYBaseAdAdapter;->setTrackingInfo(Lcom/tkay/core/common/f/d;)V

    .line 87
    iget-object v1, p0, Lcom/tkay/core/common/g;->a:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v0, v1}, Lcom/tkay/core/api/TYBaseAdAdapter;->setUnitGroupInfo(Lcom/tkay/core/common/f/aj;)V

    .line 89
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    .line 92
    invoke-static {p1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    iget-object v6, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1, v2, v6}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 96
    iget-object v1, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->a:Ljava/lang/String;

    sget-object v6, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v7, ""

    invoke-static {v1, v2, v6, v7}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/core/common/g;->c:Lcom/tkay/core/c/d;

    .line 102
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v2

    iget-object v6, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v6}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v2, v6}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 104
    iput-boolean v3, p0, Lcom/tkay/core/common/g;->d:Z

    .line 106
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v7

    .line 108
    iget-object v1, p0, Lcom/tkay/core/common/g;->c:Lcom/tkay/core/c/d;

    iget-object v2, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    .line 109
    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v6

    invoke-virtual {v1, v2, v3, v6}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Ljava/util/Map;

    move-result-object v8

    new-instance v9, Lcom/tkay/core/common/g$a;

    const/4 v6, 0x0

    move-object v1, v9

    move-object v2, p0

    move-wide v3, v4

    move-object v5, v0

    invoke-direct/range {v1 .. v6}, Lcom/tkay/core/common/g$a;-><init>(Lcom/tkay/core/common/g;JLcom/tkay/core/api/TYBaseAdAdapter;B)V

    .line 108
    invoke-virtual {v0, p1, v8, v7, v9}, Lcom/tkay/core/api/TYBaseAdAdapter;->internalLoad(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYCustomLoadListener;)V

    return-void
.end method


# virtual methods
.method protected final a(JLcom/tkay/core/api/TYBaseAdAdapter;Ljava/util/List;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(J",
            "Lcom/tkay/core/api/TYBaseAdAdapter;",
            "Ljava/util/List<",
            "+",
            "Lcom/tkay/core/api/BaseAd;",
            ">;)V"
        }
    .end annotation

    .line 126
    invoke-virtual {p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 128
    iget-boolean v1, p0, Lcom/tkay/core/common/g;->d:Z

    if-nez v1, :cond_0

    const/4 v1, 0x1

    .line 129
    iput-boolean v1, p0, Lcom/tkay/core/common/g;->d:Z

    .line 131
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sub-long/2addr v1, p1

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/f/d;->d(J)V

    .line 132
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object p1

    const/4 p2, 0x2

    invoke-virtual {p1, p2, v0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 134
    sget-object p1, Lcom/tkay/core/common/b/f$i;->b:Ljava/lang/String;

    sget-object p2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v1, ""

    invoke-static {v0, p1, p2, v1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 138
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->z()I

    move-result v4

    iget-object p1, p0, Lcom/tkay/core/common/g;->a:Lcom/tkay/core/common/f/aj;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->p()J

    move-result-wide v7

    move-object v5, p3

    move-object v6, p4

    invoke-virtual/range {v2 .. v8}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;ILcom/tkay/core/api/TYBaseAdAdapter;Ljava/util/List;J)Lcom/tkay/core/common/f/ak;

    return-void
.end method

.method public final onFinish()V
    .locals 11

    .line 62
    iget-object v0, p0, Lcom/tkay/core/common/g;->a:Lcom/tkay/core/common/f/aj;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    if-nez v0, :cond_0

    goto/16 :goto_0

    .line 67
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    .line 1077
    :cond_1
    iget-object v1, p0, Lcom/tkay/core/common/g;->a:Lcom/tkay/core/common/f/aj;

    invoke-static {v1}, Lcom/tkay/core/common/l/i;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 1082
    iget-object v2, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    const/4 v3, 0x1

    .line 1594
    iput v3, v2, Lcom/tkay/core/common/f/d;->q:I

    .line 1083
    iget-object v2, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    const/4 v4, 0x0

    .line 1603
    iput v4, v2, Lcom/tkay/core/common/f/d;->r:I

    .line 1084
    iget-object v2, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    .line 1612
    iput v4, v2, Lcom/tkay/core/common/f/d;->s:I

    .line 1086
    iget-object v2, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1, v2}, Lcom/tkay/core/api/TYBaseAdAdapter;->setTrackingInfo(Lcom/tkay/core/common/f/d;)V

    .line 1087
    iget-object v2, p0, Lcom/tkay/core/common/g;->a:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v1, v2}, Lcom/tkay/core/api/TYBaseAdAdapter;->setUnitGroupInfo(Lcom/tkay/core/common/f/aj;)V

    .line 1089
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    .line 1092
    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v2

    iget-object v7, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v2, v3, v7}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 1096
    iget-object v2, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->a:Ljava/lang/String;

    sget-object v7, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v8, ""

    invoke-static {v2, v3, v7, v8}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 1099
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/g;->c:Lcom/tkay/core/c/d;

    .line 1102
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v3

    iget-object v7, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v7}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v2, v3, v7}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1104
    iput-boolean v4, p0, Lcom/tkay/core/common/g;->d:Z

    .line 1106
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v8

    .line 1108
    iget-object v2, p0, Lcom/tkay/core/common/g;->c:Lcom/tkay/core/c/d;

    iget-object v3, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    .line 1109
    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/core/common/g;->b:Lcom/tkay/core/common/f/d;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v7

    invoke-virtual {v2, v3, v4, v7}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Ljava/util/Map;

    move-result-object v9

    new-instance v10, Lcom/tkay/core/common/g$a;

    const/4 v7, 0x0

    move-object v2, v10

    move-object v3, p0

    move-wide v4, v5

    move-object v6, v1

    invoke-direct/range {v2 .. v7}, Lcom/tkay/core/common/g$a;-><init>(Lcom/tkay/core/common/g;JLcom/tkay/core/api/TYBaseAdAdapter;B)V

    .line 1108
    invoke-virtual {v1, v0, v9, v8, v10}, Lcom/tkay/core/api/TYBaseAdAdapter;->internalLoad(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYCustomLoadListener;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public final onTick(J)V
    .locals 0

    return-void
.end method
