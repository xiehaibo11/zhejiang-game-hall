.class public final Lcom/tkay/expressad/splash/c/c;
.super Ljava/lang/Object;


# static fields
.field private static c:Ljava/lang/String; = "SplashLoadManager"

.field private static final l:I = 0x1

.field private static final m:I = 0x2

.field private static final n:I = 0x3


# instance fields
.field private A:Ljava/lang/String;

.field private B:I

.field private C:Landroid/os/Handler;

.field private D:Ljava/lang/Runnable;

.field a:Z

.field b:Lcom/tkay/expressad/foundation/d/c;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:J

.field private g:J

.field private h:Lcom/tkay/expressad/splash/b/c;

.field private i:Landroid/content/Context;

.field private j:Lcom/tkay/expressad/splash/view/TYSplashView;

.field private k:Lcom/tkay/expressad/d/c;

.field private o:Z

.field private p:I

.field private q:I

.field private r:I

.field private s:Ljava/lang/String;

.field private t:I

.field private u:Z

.field private volatile v:Z

.field private w:Lcom/tkay/expressad/videocommon/d/b;

.field private x:Lcom/tkay/expressad/videocommon/b/g$d;

.field private y:Ljava/lang/String;

.field private z:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;J)V
    .locals 2

    .line 106
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 65
    iput-object v0, p0, Lcom/tkay/expressad/splash/c/c;->A:Ljava/lang/String;

    .line 68
    new-instance v0, Lcom/tkay/expressad/splash/c/c$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/tkay/expressad/splash/c/c$1;-><init>(Lcom/tkay/expressad/splash/c/c;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/c/c;->C:Landroid/os/Handler;

    .line 98
    new-instance v0, Lcom/tkay/expressad/splash/c/c$2;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/splash/c/c$2;-><init>(Lcom/tkay/expressad/splash/c/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/c/c;->D:Ljava/lang/Runnable;

    const/4 v0, 0x0

    .line 117
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/c/c;->a:Z

    .line 107
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/splash/c/c;->i:Landroid/content/Context;

    .line 108
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c;->e:Ljava/lang/String;

    .line 109
    iput-object p2, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    .line 110
    iput-wide p3, p0, Lcom/tkay/expressad/splash/c/c;->g:J

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/c/c;)Ljava/lang/String;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/expressad/splash/c/c;->s:Ljava/lang/String;

    return-object p0
.end method

.method private a(J)V
    .locals 2

    .line 215
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->C:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->D:Ljava/lang/Runnable;

    invoke-virtual {v0, v1, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 5

    .line 449
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 450
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setDynamicView(Z)V

    .line 453
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 454
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->d(Lcom/tkay/expressad/foundation/d/c;I)V

    .line 457
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {v0, p1}, Lcom/tkay/expressad/splash/c/b;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 458
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/foundation/d/c;I)V

    return-void

    .line 8525
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->clearResState()V

    .line 8526
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 8626
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_3

    .line 8630
    new-instance v0, Lcom/tkay/expressad/splash/c/c$5;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/expressad/splash/c/c$5;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/c/c;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 8649
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/c;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 8529
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_7

    .line 8530
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 9566
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/splash/c/c$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/splash/c/c$4;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 8533
    :cond_4
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 9773
    new-instance v0, Lcom/tkay/expressad/splash/c/c$8;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/splash/c/c$8;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/c/c;->w:Lcom/tkay/expressad/videocommon/d/b;

    .line 9794
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 9795
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 9796
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/splash/c/c;->w:Lcom/tkay/expressad/videocommon/d/b;

    const/16 v4, 0x129

    invoke-virtual {v1, v2, v0, v4, v3}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/util/List;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;

    .line 9797
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v2

    invoke-virtual {v0, v4, v1, v2}, Lcom/tkay/expressad/videocommon/b/c;->a(ILjava/lang/String;Z)Z

    move-result v0

    if-nez v0, :cond_5

    .line 9798
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/c;->d(Ljava/lang/String;)V

    goto :goto_0

    .line 9800
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setVideoReady(Z)V

    .line 9801
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/foundation/d/c;I)V

    .line 8537
    :cond_6
    :goto_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 8538
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->d(Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_7
    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/d;I)V
    .locals 6

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p1, :cond_5

    .line 4374
    iget-object v2, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v2, :cond_5

    .line 4342
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 5374
    iget-object v3, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 4343
    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/foundation/d/c;

    .line 4344
    iget-object v4, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {v3, v4}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 4346
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/d;->c()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c;->y:Ljava/lang/String;

    .line 4347
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->O()I

    move-result p1

    const/16 v4, 0x63

    if-eq p1, v4, :cond_6

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_6

    .line 4348
    :cond_0
    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 4349
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/c;->i:Landroid/content/Context;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v4

    invoke-static {p1, v4}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    move p1, v0

    goto :goto_0

    :cond_1
    const/4 p1, 0x2

    :goto_0
    invoke-virtual {v3, p1}, Lcom/tkay/expressad/foundation/d/c;->i(I)V

    .line 4351
    :cond_2
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->ae()I

    move-result p1

    if-eq p1, v0, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/splash/c/c;->i:Landroid/content/Context;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v4

    invoke-static {p1, v4}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_1

    .line 4356
    :cond_3
    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 4357
    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 4353
    :cond_4
    :goto_1
    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_5
    const/4 v2, 0x0

    :cond_6
    :goto_2
    if-eqz v2, :cond_11

    .line 319
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_11

    .line 320
    invoke-direct {p0}, Lcom/tkay/expressad/splash/c/c;->g()V

    .line 321
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v3, "onload load suc size:"

    invoke-direct {p1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 322
    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 324
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_8

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v2

    const-string v3, "<MBTPLMARK>"

    invoke-virtual {v2, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_7

    goto :goto_3

    .line 328
    :cond_7
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->a(Z)V

    .line 329
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->b(Z)V

    goto :goto_4

    .line 325
    :cond_8
    :goto_3
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->a(Z)V

    .line 326
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->b(Z)V

    .line 5449
    :goto_4
    iget-object v2, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v2, :cond_9

    .line 5450
    invoke-virtual {v2, v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setDynamicView(Z)V

    .line 5453
    :cond_9
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v1

    if-eqz v1, :cond_a

    .line 5454
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->d(Lcom/tkay/expressad/foundation/d/c;I)V

    .line 5457
    :cond_a
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {v1, p1}, Lcom/tkay/expressad/splash/c/b;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v1

    if-eqz v1, :cond_b

    .line 5458
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/foundation/d/c;I)V

    return-void

    .line 5525
    :cond_b
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->clearResState()V

    .line 5526
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_c

    .line 5626
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v1

    if-nez v1, :cond_c

    .line 5630
    new-instance v1, Lcom/tkay/expressad/splash/c/c$5;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/splash/c/c$5;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    iput-object v1, p0, Lcom/tkay/expressad/splash/c/c;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 5649
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/splash/c/c;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 5529
    :cond_c
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v1

    if-nez v1, :cond_10

    .line 5530
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_d

    .line 6566
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/splash/c/c$4;

    invoke-direct {v2, p0, p1, p2}, Lcom/tkay/expressad/splash/c/c$4;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 5533
    :cond_d
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_f

    .line 6773
    new-instance v1, Lcom/tkay/expressad/splash/c/c$8;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/splash/c/c$8;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v1, p0, Lcom/tkay/expressad/splash/c/c;->w:Lcom/tkay/expressad/videocommon/d/b;

    .line 6794
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 6795
    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 6796
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/expressad/splash/c/c;->w:Lcom/tkay/expressad/videocommon/d/b;

    const/16 v5, 0x129

    invoke-virtual {v2, v3, v1, v5, v4}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/util/List;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;

    .line 6797
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v3

    invoke-virtual {v1, v5, v2, v3}, Lcom/tkay/expressad/videocommon/b/c;->a(ILjava/lang/String;Z)Z

    move-result v1

    if-nez v1, :cond_e

    .line 6798
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/c;->d(Ljava/lang/String;)V

    goto :goto_5

    .line 6800
    :cond_e
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->setVideoReady(Z)V

    .line 6801
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/foundation/d/c;I)V

    .line 5537
    :cond_f
    :goto_5
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_10

    .line 5538
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->d(Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_10
    return-void

    :cond_11
    const-string p1, "invalid  campaign"

    .line 334
    invoke-direct {p0, p1}, Lcom/tkay/expressad/splash/c/c;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 0

    .line 40
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/foundation/d/c;I)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/c/c;Ljava/lang/String;)V
    .locals 0

    .line 40
    invoke-direct {p0, p1}, Lcom/tkay/expressad/splash/c/c;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/splash/c/c;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 2

    .line 13726
    new-instance v0, Lcom/tkay/expressad/splash/c/e$c;

    invoke-direct {v0}, Lcom/tkay/expressad/splash/c/e$c;-><init>()V

    .line 13727
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/c/e$c;->c(Ljava/lang/String;)V

    .line 13728
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/c/e$c;->b(Ljava/lang/String;)V

    .line 13729
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/splash/c/e$c;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 13730
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/c/e$c;->a(Ljava/lang/String;)V

    .line 13731
    iget-boolean p1, p0, Lcom/tkay/expressad/splash/c/c;->o:Z

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/c/e$c;->b(Z)V

    .line 13732
    iget p1, p0, Lcom/tkay/expressad/splash/c/c;->p:I

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/c/e$c;->a(I)V

    .line 13733
    iget-boolean p1, p0, Lcom/tkay/expressad/splash/c/c;->a:Z

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/c/e$c;->a(Z)V

    .line 13735
    new-instance p1, Lcom/tkay/expressad/splash/c/c$7;

    invoke-direct {p1, p0, p2, p3}, Lcom/tkay/expressad/splash/c/c$7;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    .line 14033
    invoke-static {}, Lcom/tkay/expressad/splash/c/e$a;->a()Lcom/tkay/expressad/splash/c/e;

    move-result-object p2

    .line 13758
    iget-object p0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {p2, p0, v0, p1}, Lcom/tkay/expressad/splash/c/e;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/splash/c/e$c;Lcom/tkay/expressad/splash/c/e$b;)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 1

    .line 490
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/c/c;->u:Z

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    .line 491
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/c/c;->u:Z

    return-void

    .line 495
    :cond_0
    invoke-direct {p0, p1}, Lcom/tkay/expressad/splash/c/c;->b(Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 2

    .line 726
    new-instance v0, Lcom/tkay/expressad/splash/c/e$c;

    invoke-direct {v0}, Lcom/tkay/expressad/splash/c/e$c;-><init>()V

    .line 727
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/c/e$c;->c(Ljava/lang/String;)V

    .line 728
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/c/e$c;->b(Ljava/lang/String;)V

    .line 729
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/splash/c/e$c;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 730
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/c/e$c;->a(Ljava/lang/String;)V

    .line 731
    iget-boolean p1, p0, Lcom/tkay/expressad/splash/c/c;->o:Z

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/c/e$c;->b(Z)V

    .line 732
    iget p1, p0, Lcom/tkay/expressad/splash/c/c;->p:I

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/c/e$c;->a(I)V

    .line 733
    iget-boolean p1, p0, Lcom/tkay/expressad/splash/c/c;->a:Z

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/c/e$c;->a(Z)V

    .line 735
    new-instance p1, Lcom/tkay/expressad/splash/c/c$7;

    invoke-direct {p1, p0, p2, p3}, Lcom/tkay/expressad/splash/c/c$7;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    .line 13033
    invoke-static {}, Lcom/tkay/expressad/splash/c/e$a;->a()Lcom/tkay/expressad/splash/c/e;

    move-result-object p2

    .line 758
    iget-object p3, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {p2, p3, v0, p1}, Lcom/tkay/expressad/splash/c/e;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/splash/c/e$c;Lcom/tkay/expressad/splash/c/e$b;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/splash/c/c;)I
    .locals 0

    .line 40
    iget p0, p0, Lcom/tkay/expressad/splash/c/c;->t:I

    return p0
.end method

.method private b(Lcom/tkay/expressad/foundation/d/d;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/d/d;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation

    if-eqz p1, :cond_5

    .line 7374
    iget-object v0, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v0, :cond_5

    .line 342
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 8374
    iget-object v1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    const/4 v2, 0x0

    .line 343
    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    .line 344
    iget-object v2, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 346
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/d;->c()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c;->y:Ljava/lang/String;

    .line 347
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->O()I

    move-result p1

    const/16 v2, 0x63

    if-eq p1, v2, :cond_6

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_6

    .line 348
    :cond_0
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    const/4 v2, 0x1

    if-eqz p1, :cond_2

    .line 349
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/c;->i:Landroid/content/Context;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v3

    invoke-static {p1, v3}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    move p1, v2

    goto :goto_0

    :cond_1
    const/4 p1, 0x2

    :goto_0
    invoke-virtual {v1, p1}, Lcom/tkay/expressad/foundation/d/c;->i(I)V

    .line 351
    :cond_2
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ae()I

    move-result p1

    if-eq p1, v2, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/splash/c/c;->i:Landroid/content/Context;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v2}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_1

    .line 356
    :cond_3
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 357
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 353
    :cond_4
    :goto_1
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_5
    const/4 v0, 0x0

    :cond_6
    :goto_2
    return-object v0
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 1

    .line 471
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {v0, p1}, Lcom/tkay/expressad/splash/c/b;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/splash/c/c;->v:Z

    if-nez v0, :cond_0

    .line 472
    invoke-direct {p0}, Lcom/tkay/expressad/splash/c/c;->l()V

    .line 474
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c;->b:Lcom/tkay/expressad/foundation/d/c;

    const/4 v0, 0x1

    .line 480
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/c/c;->v:Z

    .line 481
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->h:Lcom/tkay/expressad/splash/b/c;

    if-eqz v0, :cond_0

    .line 482
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/splash/b/c;->a(Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 9

    .line 14654
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 14655
    new-instance v0, Lcom/tkay/expressad/splash/a/b$a;

    invoke-direct {v0}, Lcom/tkay/expressad/splash/a/b$a;-><init>()V

    .line 14656
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/a/b$a;->b(Ljava/lang/String;)Lcom/tkay/expressad/splash/a/b$a;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/c;->e:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/splash/a/b$a;->a(Ljava/lang/String;)Lcom/tkay/expressad/splash/a/b$a;

    move-result-object v1

    iget-boolean v2, p0, Lcom/tkay/expressad/splash/c/c;->o:Z

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/splash/a/b$a;->a(Z)Lcom/tkay/expressad/splash/a/b$a;

    move-result-object v1

    .line 14657
    invoke-virtual {v1, p1}, Lcom/tkay/expressad/splash/a/b$a;->a(Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/splash/a/b$a;

    move-result-object v1

    iget v2, p0, Lcom/tkay/expressad/splash/c/c;->p:I

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/splash/a/b$a;->a(I)Lcom/tkay/expressad/splash/a/b$a;

    move-result-object v1

    iget v2, p0, Lcom/tkay/expressad/splash/c/c;->B:I

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/splash/a/b$a;->h(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 14659
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 14660
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    const-string v2, "hdbtn"

    .line 14661
    invoke-virtual {v1, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "alecfc"

    .line 14662
    invoke-virtual {v1, v3}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "hdinfo"

    .line 14663
    invoke-virtual {v1, v4}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "shake_show"

    .line 14665
    invoke-virtual {v1, v5}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "shake_strength"

    .line 14666
    invoke-virtual {v1, v6}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v7, "shake_time"

    .line 14667
    invoke-virtual {v1, v7}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v8, "n_logo"

    .line 14668
    invoke-virtual {v1, v8}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 14670
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_0

    .line 14671
    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/a/b$a;->b(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 14674
    :cond_0
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 14675
    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/a/b$a;->c(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 14678
    :cond_1
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 14679
    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/a/b$a;->d(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 14682
    :cond_2
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 14683
    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/a/b$a;->e(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 14686
    :cond_3
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    .line 14687
    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/a/b$a;->f(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 14690
    :cond_4
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    .line 14691
    invoke-static {v7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/a/b$a;->g(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 14694
    :cond_5
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    .line 14695
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    if-nez v1, :cond_6

    const/4 v1, 0x0

    goto :goto_0

    :cond_6
    const/4 v1, 0x1

    .line 14696
    :goto_0
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/a/b$a;->i(I)Lcom/tkay/expressad/splash/a/b$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    .line 14701
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 15023
    :cond_7
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/splash/c/a$a;->a()Lcom/tkay/expressad/splash/c/a;

    .line 14704
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    .line 15193
    new-instance v2, Lcom/tkay/expressad/splash/a/b;

    invoke-direct {v2, v0}, Lcom/tkay/expressad/splash/a/b;-><init>(Lcom/tkay/expressad/splash/a/b$a;)V

    .line 14704
    new-instance v0, Lcom/tkay/expressad/splash/c/c$6;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/expressad/splash/c/c$6;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/splash/c/a;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/splash/a/b;Lcom/tkay/expressad/splash/b/a;)V

    :cond_8
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/splash/c/c;Ljava/lang/String;)V
    .locals 0

    .line 16762
    invoke-direct {p0, p1}, Lcom/tkay/expressad/splash/c/c;->a(Ljava/lang/String;)V

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 1

    .line 510
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/c/c;->v:Z

    if-nez v0, :cond_0

    .line 511
    invoke-direct {p0}, Lcom/tkay/expressad/splash/c/c;->l()V

    const/4 v0, 0x1

    .line 513
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/c/c;->v:Z

    .line 514
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->h:Lcom/tkay/expressad/splash/b/c;

    if-eqz v0, :cond_0

    .line 515
    invoke-interface {v0, p1}, Lcom/tkay/expressad/splash/b/c;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/splash/c/c;)Lcom/tkay/expressad/splash/view/TYSplashView;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    return-object p0
.end method

.method private c(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 5

    .line 525
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->clearResState()V

    .line 526
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 10626
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_0

    .line 10630
    new-instance v0, Lcom/tkay/expressad/splash/c/c$5;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/expressad/splash/c/c$5;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/c/c;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 10649
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/c;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 529
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_4

    .line 530
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 11566
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/splash/c/c$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/splash/c/c$4;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 533
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 11773
    new-instance v0, Lcom/tkay/expressad/splash/c/c$8;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/splash/c/c$8;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/c/c;->w:Lcom/tkay/expressad/videocommon/d/b;

    .line 11794
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 11795
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 11796
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/splash/c/c;->w:Lcom/tkay/expressad/videocommon/d/b;

    const/16 v4, 0x129

    invoke-virtual {v1, v2, v0, v4, v3}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/util/List;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;

    .line 11797
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v2

    invoke-virtual {v0, v4, v1, v2}, Lcom/tkay/expressad/videocommon/b/c;->a(ILjava/lang/String;Z)Z

    move-result v0

    if-nez v0, :cond_2

    .line 11798
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/c;->d(Ljava/lang/String;)V

    goto :goto_0

    .line 11800
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setVideoReady(Z)V

    .line 11801
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/foundation/d/c;I)V

    .line 537
    :cond_3
    :goto_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 538
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->d(Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_4
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 2

    .line 15766
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->isH5Ready()Z

    move-result v0

    if-nez v0, :cond_0

    .line 15767
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setH5Ready(Z)V

    .line 15768
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_0
    return-void
.end method

.method private c(Ljava/lang/String;)V
    .locals 0

    .line 762
    invoke-direct {p0, p1}, Lcom/tkay/expressad/splash/c/c;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/splash/c/c;)Landroid/os/Handler;
    .locals 0

    .line 40
    iget-object p0, p0, Lcom/tkay/expressad/splash/c/c;->C:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic d()Ljava/lang/String;
    .locals 1

    .line 40
    sget-object v0, Lcom/tkay/expressad/splash/c/c;->c:Ljava/lang/String;

    return-object v0
.end method

.method private d(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 2

    .line 544
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    new-instance v1, Lcom/tkay/expressad/splash/c/c$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/splash/c/c$3;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/splash/c/b;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/splash/view/a;)V

    return-void
.end method

.method private e(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 2

    .line 566
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/splash/c/c$4;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/splash/c/c$4;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private e()Z
    .locals 1

    .line 132
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/c/c;->o:Z

    return v0
.end method

.method private f()I
    .locals 1

    .line 140
    iget v0, p0, Lcom/tkay/expressad/splash/c/c;->p:I

    return v0
.end method

.method private f(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 1

    .line 626
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_0

    .line 630
    new-instance v0, Lcom/tkay/expressad/splash/c/c$5;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/expressad/splash/c/c$5;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/c/c;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 649
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object p2

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    :cond_0
    return-void
.end method

.method private g()V
    .locals 2

    .line 224
    :try_start_0
    iget v0, p0, Lcom/tkay/expressad/splash/c/c;->z:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/tkay/expressad/splash/c/c;->z:I

    .line 225
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->k:Lcom/tkay/expressad/d/c;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->k:Lcom/tkay/expressad/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/d/c;->t()I

    move-result v1

    if-le v0, v1, :cond_1

    :cond_0
    const/4 v0, 0x0

    .line 227
    iput v0, p0, Lcom/tkay/expressad/splash/c/c;->z:I

    .line 229
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onload,next offset is:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/tkay/expressad/splash/c/c;->z:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 232
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private g(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 9

    .line 654
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 655
    new-instance v0, Lcom/tkay/expressad/splash/a/b$a;

    invoke-direct {v0}, Lcom/tkay/expressad/splash/a/b$a;-><init>()V

    .line 656
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/a/b$a;->b(Ljava/lang/String;)Lcom/tkay/expressad/splash/a/b$a;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/c;->e:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/splash/a/b$a;->a(Ljava/lang/String;)Lcom/tkay/expressad/splash/a/b$a;

    move-result-object v1

    iget-boolean v2, p0, Lcom/tkay/expressad/splash/c/c;->o:Z

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/splash/a/b$a;->a(Z)Lcom/tkay/expressad/splash/a/b$a;

    move-result-object v1

    .line 657
    invoke-virtual {v1, p1}, Lcom/tkay/expressad/splash/a/b$a;->a(Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/splash/a/b$a;

    move-result-object v1

    iget v2, p0, Lcom/tkay/expressad/splash/c/c;->p:I

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/splash/a/b$a;->a(I)Lcom/tkay/expressad/splash/a/b$a;

    move-result-object v1

    iget v2, p0, Lcom/tkay/expressad/splash/c/c;->B:I

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/splash/a/b$a;->h(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 659
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 660
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    const-string v2, "hdbtn"

    .line 661
    invoke-virtual {v1, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "alecfc"

    .line 662
    invoke-virtual {v1, v3}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "hdinfo"

    .line 663
    invoke-virtual {v1, v4}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "shake_show"

    .line 665
    invoke-virtual {v1, v5}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "shake_strength"

    .line 666
    invoke-virtual {v1, v6}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v7, "shake_time"

    .line 667
    invoke-virtual {v1, v7}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v8, "n_logo"

    .line 668
    invoke-virtual {v1, v8}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 670
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_0

    .line 671
    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/a/b$a;->b(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 674
    :cond_0
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 675
    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/a/b$a;->c(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 678
    :cond_1
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 679
    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/a/b$a;->d(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 682
    :cond_2
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 683
    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/a/b$a;->e(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 686
    :cond_3
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    .line 687
    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/a/b$a;->f(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 690
    :cond_4
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    .line 691
    invoke-static {v7}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/a/b$a;->g(I)Lcom/tkay/expressad/splash/a/b$a;

    .line 694
    :cond_5
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    .line 695
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    if-nez v1, :cond_6

    const/4 v1, 0x0

    goto :goto_0

    :cond_6
    const/4 v1, 0x1

    .line 696
    :goto_0
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/a/b$a;->i(I)Lcom/tkay/expressad/splash/a/b$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    .line 701
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 12023
    :cond_7
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/splash/c/a$a;->a()Lcom/tkay/expressad/splash/c/a;

    .line 704
    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    .line 12193
    new-instance v2, Lcom/tkay/expressad/splash/a/b;

    invoke-direct {v2, v0}, Lcom/tkay/expressad/splash/a/b;-><init>(Lcom/tkay/expressad/splash/a/b$a;)V

    .line 704
    new-instance v0, Lcom/tkay/expressad/splash/c/c$6;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/expressad/splash/c/c$6;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/splash/c/a;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/splash/a/b;Lcom/tkay/expressad/splash/b/a;)V

    :cond_8
    return-void
.end method

.method private static h()V
    .locals 0

    return-void
.end method

.method private h(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 2

    .line 766
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->isH5Ready()Z

    move-result v0

    if-nez v0, :cond_0

    .line 767
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setH5Ready(Z)V

    .line 768
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_0
    return-void
.end method

.method private static i()V
    .locals 0

    return-void
.end method

.method private i(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 5

    .line 773
    new-instance v0, Lcom/tkay/expressad/splash/c/c$8;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/splash/c/c$8;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/c/c;->w:Lcom/tkay/expressad/videocommon/d/b;

    .line 794
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 795
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 796
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/splash/c/c;->w:Lcom/tkay/expressad/videocommon/d/b;

    const/16 v4, 0x129

    invoke-virtual {v1, v2, v0, v4, v3}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/util/List;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;

    .line 797
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v2

    invoke-virtual {v0, v4, v1, v2}, Lcom/tkay/expressad/videocommon/b/c;->a(ILjava/lang/String;Z)Z

    move-result v0

    if-nez v0, :cond_0

    .line 798
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/videocommon/b/c;->d(Ljava/lang/String;)V

    return-void

    .line 800
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/splash/view/TYSplashView;->setVideoReady(Z)V

    .line 801
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/foundation/d/c;I)V

    return-void
.end method

.method private j()V
    .locals 1

    const/4 v0, 0x0

    .line 385
    iput v0, p0, Lcom/tkay/expressad/splash/c/c;->z:I

    return-void
.end method

.method private static k()V
    .locals 0

    return-void
.end method

.method private l()V
    .locals 2

    .line 521
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->C:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c;->D:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 153
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->A:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 114
    iput p1, p0, Lcom/tkay/expressad/splash/c/c;->B:I

    return-void
.end method

.method public final a(II)V
    .locals 0

    .line 148
    iput p1, p0, Lcom/tkay/expressad/splash/c/c;->r:I

    .line 149
    iput p2, p0, Lcom/tkay/expressad/splash/c/c;->q:I

    return-void
.end method

.method public final a(Lcom/tkay/expressad/d/c;)V
    .locals 0

    .line 124
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c;->k:Lcom/tkay/expressad/d/c;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 7

    const/4 v0, 0x0

    .line 160
    iput-boolean v0, p0, Lcom/tkay/expressad/splash/c/c;->v:Z

    const-string v1, ""

    .line 161
    iput-object v1, p0, Lcom/tkay/expressad/splash/c/c;->s:Ljava/lang/String;

    const/4 v1, 0x2

    .line 162
    iput v1, p0, Lcom/tkay/expressad/splash/c/c;->t:I

    const/4 v2, 0x1

    if-eqz p1, :cond_5

    .line 1374
    iget-object v3, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v3, :cond_5

    .line 1342
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 2374
    iget-object v4, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 1343
    invoke-virtual {v4, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/foundation/d/c;

    .line 1344
    iget-object v5, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {v4, v5}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 1346
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/d;->c()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c;->y:Ljava/lang/String;

    .line 1347
    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->O()I

    move-result p1

    const/16 v5, 0x63

    if-eq p1, v5, :cond_6

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_6

    .line 1348
    :cond_0
    invoke-static {v4}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 1349
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/c;->i:Landroid/content/Context;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v5

    invoke-static {p1, v5}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    move p1, v2

    goto :goto_0

    :cond_1
    move p1, v1

    :goto_0
    invoke-virtual {v4, p1}, Lcom/tkay/expressad/foundation/d/c;->i(I)V

    .line 1351
    :cond_2
    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->ae()I

    move-result p1

    if-eq p1, v2, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/splash/c/c;->i:Landroid/content/Context;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v5

    invoke-static {p1, v5}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_1

    .line 1356
    :cond_3
    invoke-static {v4}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 1357
    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 1353
    :cond_4
    :goto_1
    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_5
    const/4 v3, 0x0

    :cond_6
    :goto_2
    if-eqz v3, :cond_11

    .line 1319
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_11

    .line 1320
    invoke-direct {p0}, Lcom/tkay/expressad/splash/c/c;->g()V

    .line 1321
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v4, "onload load suc size:"

    invoke-direct {p1, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v4

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1322
    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 1324
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_8

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_7

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v3

    const-string v4, "<MBTPLMARK>"

    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_7

    goto :goto_3

    .line 1328
    :cond_7
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->a(Z)V

    .line 1329
    invoke-virtual {p1, v2}, Lcom/tkay/expressad/foundation/d/c;->b(Z)V

    goto :goto_4

    .line 1325
    :cond_8
    :goto_3
    invoke-virtual {p1, v2}, Lcom/tkay/expressad/foundation/d/c;->a(Z)V

    .line 1326
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->b(Z)V

    .line 2449
    :goto_4
    iget-object v3, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz v3, :cond_9

    .line 2450
    invoke-virtual {v3, v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->setDynamicView(Z)V

    .line 2453
    :cond_9
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_a

    .line 2454
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/splash/c/c;->d(Lcom/tkay/expressad/foundation/d/c;I)V

    .line 2457
    :cond_a
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-static {v0, p1}, Lcom/tkay/expressad/splash/c/b;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v0

    if-eqz v0, :cond_b

    .line 2458
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/foundation/d/c;I)V

    return-void

    .line 2525
    :cond_b
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0}, Lcom/tkay/expressad/splash/view/TYSplashView;->clearResState()V

    .line 2526
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_c

    .line 2626
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_c

    .line 2630
    new-instance v0, Lcom/tkay/expressad/splash/c/c$5;

    invoke-direct {v0, p0, p1, v1}, Lcom/tkay/expressad/splash/c/c$5;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/c/c;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 2649
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/splash/c/c;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {v0, v3, v4}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 2529
    :cond_c
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_10

    .line 2530
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_d

    .line 3566
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v3, Lcom/tkay/expressad/splash/c/c$4;

    invoke-direct {v3, p0, p1, v1}, Lcom/tkay/expressad/splash/c/c$4;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    invoke-virtual {v0, v3}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 2533
    :cond_d
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_f

    .line 3773
    new-instance v0, Lcom/tkay/expressad/splash/c/c$8;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/splash/c/c$8;-><init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/c/c;->w:Lcom/tkay/expressad/videocommon/d/b;

    .line 3794
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 3795
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 3796
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/splash/c/c;->w:Lcom/tkay/expressad/videocommon/d/b;

    const/16 v6, 0x129

    invoke-virtual {v3, v4, v0, v6, v5}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/util/List;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;

    .line 3797
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v4

    invoke-virtual {v0, v6, v3, v4}, Lcom/tkay/expressad/videocommon/b/c;->a(ILjava/lang/String;Z)Z

    move-result v0

    if-nez v0, :cond_e

    .line 3798
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/splash/c/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/videocommon/b/c;->d(Ljava/lang/String;)V

    goto :goto_5

    .line 3800
    :cond_e
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/splash/view/TYSplashView;->setVideoReady(Z)V

    .line 3801
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/foundation/d/c;I)V

    .line 2537
    :cond_f
    :goto_5
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_10

    .line 2538
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/splash/c/c;->d(Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_10
    return-void

    :cond_11
    const-string p1, "invalid  campaign"

    .line 1334
    invoke-direct {p0, p1}, Lcom/tkay/expressad/splash/c/c;->a(Ljava/lang/String;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/splash/b/c;)V
    .locals 0

    .line 430
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c;->h:Lcom/tkay/expressad/splash/b/c;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/splash/view/TYSplashView;)V
    .locals 0

    .line 128
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c;->j:Lcom/tkay/expressad/splash/view/TYSplashView;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 120
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/c/c;->a:Z

    return-void
.end method

.method public final b()V
    .locals 2

    .line 435
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->h:Lcom/tkay/expressad/splash/b/c;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 436
    iput-object v1, p0, Lcom/tkay/expressad/splash/c/c;->h:Lcom/tkay/expressad/splash/b/c;

    .line 438
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->w:Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v0, :cond_1

    .line 439
    iput-object v1, p0, Lcom/tkay/expressad/splash/c/c;->w:Lcom/tkay/expressad/videocommon/d/b;

    .line 441
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    if-eqz v0, :cond_2

    .line 442
    iput-object v1, p0, Lcom/tkay/expressad/splash/c/c;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    :cond_2
    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 144
    iput p1, p0, Lcom/tkay/expressad/splash/c/c;->p:I

    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 136
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/c/c;->o:Z

    return-void
.end method

.method public final c()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 467
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c;->b:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method
