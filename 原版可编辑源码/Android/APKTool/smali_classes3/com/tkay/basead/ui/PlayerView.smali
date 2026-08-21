.class public Lcom/tkay/basead/ui/PlayerView;
.super Landroid/widget/RelativeLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/ui/PlayerView$a;,
        Lcom/tkay/basead/ui/PlayerView$b;
    }
.end annotation


# static fields
.field public static final TAG:Ljava/lang/String;


# instance fields
.field private A:Lcom/tkay/basead/ui/PlayerView$a;

.field private B:Landroid/os/Handler;

.field private C:Z

.field private D:Ljava/lang/Thread;

.field private E:I

.field private F:I

.field private G:Z

.field private H:Z

.field private I:Landroid/view/View;

.field private J:Lcom/tkay/expressad/exoplayer/w$c;

.field private K:Lcom/tkay/expressad/exoplayer/l/g;

.field private final L:J

.field private M:J

.field a:I

.field b:I

.field c:I

.field d:Z

.field e:Ljava/lang/String;

.field f:Ljava/lang/String;

.field private g:Lcom/tkay/expressad/exoplayer/ad;

.field private h:Lcom/tkay/expressad/exoplayer/h/s;

.field private i:Landroid/view/TextureView;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:I

.field private m:I

.field private n:I

.field private o:I

.field private p:I

.field private q:I

.field private r:I

.field private s:Z

.field private t:Z

.field private u:Z

.field private v:Z

.field private w:Z

.field private x:Z

.field private y:Z

.field private z:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 61
    const-class v0, Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/ui/PlayerView;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 119
    invoke-direct {p0, p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-string p1, ""

    .line 70
    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->j:Ljava/lang/String;

    .line 71
    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->k:Ljava/lang/String;

    const/4 p2, -0x1

    .line 76
    iput p2, p0, Lcom/tkay/basead/ui/PlayerView;->n:I

    const/4 p2, 0x0

    .line 85
    iput-boolean p2, p0, Lcom/tkay/basead/ui/PlayerView;->v:Z

    .line 86
    iput-boolean p2, p0, Lcom/tkay/basead/ui/PlayerView;->w:Z

    .line 87
    iput-boolean p2, p0, Lcom/tkay/basead/ui/PlayerView;->x:Z

    .line 88
    iput-boolean p2, p0, Lcom/tkay/basead/ui/PlayerView;->y:Z

    .line 89
    iput-boolean p2, p0, Lcom/tkay/basead/ui/PlayerView;->z:Z

    .line 104
    iput p2, p0, Lcom/tkay/basead/ui/PlayerView;->b:I

    .line 105
    iput p2, p0, Lcom/tkay/basead/ui/PlayerView;->c:I

    .line 111
    iput-boolean p2, p0, Lcom/tkay/basead/ui/PlayerView;->d:Z

    .line 112
    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->e:Ljava/lang/String;

    .line 113
    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->f:Ljava/lang/String;

    const-wide/16 p1, 0x1388

    .line 115
    iput-wide p1, p0, Lcom/tkay/basead/ui/PlayerView;->L:J

    const-wide/16 p1, 0x0

    .line 116
    iput-wide p1, p0, Lcom/tkay/basead/ui/PlayerView;->M:J

    const/4 p1, 0x1

    .line 122
    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/PlayerView;->setSaveEnabled(Z)V

    .line 124
    new-instance p1, Lcom/tkay/basead/ui/PlayerView$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-direct {p1, p0, p2}, Lcom/tkay/basead/ui/PlayerView$1;-><init>(Lcom/tkay/basead/ui/PlayerView;Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->B:Landroid/os/Handler;

    const/high16 p1, -0x1000000

    .line 169
    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/PlayerView;->setBackgroundColor(I)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/PlayerView;I)I
    .locals 0

    .line 59
    iput p1, p0, Lcom/tkay/basead/ui/PlayerView;->n:I

    return p1
.end method

.method private a()V
    .locals 8

    const-string v0, ", "

    .line 321
    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    if-eqz v1, :cond_0

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    if-eqz v1, :cond_0

    return-void

    .line 327
    :cond_0
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/basead/ui/PlayerView;->g()Ljava/lang/String;

    move-result-object v1

    iget v2, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    iget v3, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    .line 5089
    invoke-static {v1}, Lcom/tkay/basead/a/b/g;->a(Ljava/lang/String;)Lcom/tkay/basead/a/b/g$a;

    move-result-object v1

    const/high16 v4, 0x3f800000    # 1.0f

    if-nez v1, :cond_1

    const/4 v1, 0x0

    goto :goto_0

    .line 5094
    :cond_1
    iget v5, v1, Lcom/tkay/basead/a/b/g$a;->a:I

    .line 5095
    iget v6, v1, Lcom/tkay/basead/a/b/g$a;->b:I

    int-to-float v5, v5

    mul-float/2addr v5, v4

    int-to-float v6, v6

    div-float/2addr v5, v6

    int-to-float v6, v2

    mul-float/2addr v6, v4

    int-to-float v7, v3

    div-float/2addr v6, v7

    cmpg-float v6, v5, v6

    if-gez v6, :cond_2

    .line 5102
    iput v3, v1, Lcom/tkay/basead/a/b/g$a;->b:I

    .line 5103
    iget v2, v1, Lcom/tkay/basead/a/b/g$a;->b:I

    int-to-float v2, v2

    mul-float/2addr v2, v5

    float-to-int v2, v2

    iput v2, v1, Lcom/tkay/basead/a/b/g$a;->a:I

    goto :goto_0

    .line 5106
    :cond_2
    iput v2, v1, Lcom/tkay/basead/a/b/g$a;->a:I

    .line 5107
    iget v2, v1, Lcom/tkay/basead/a/b/g$a;->a:I

    int-to-float v2, v2

    div-float/2addr v2, v5

    float-to-int v2, v2

    iput v2, v1, Lcom/tkay/basead/a/b/g$a;->b:I

    :goto_0
    if-eqz v1, :cond_3

    .line 330
    iget v2, v1, Lcom/tkay/basead/a/b/g$a;->a:I

    iput v2, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    .line 331
    iget v1, v1, Lcom/tkay/basead/a/b/g$a;->b:I

    iput v1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    .line 334
    :cond_3
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "computeVideoSize: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v2, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 336
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    if-ne v0, v1, :cond_4

    .line 337
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    sub-int/2addr v0, v1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    if-gt v0, v1, :cond_5

    .line 338
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    iput v0, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    .line 339
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "computeVideoSize: update height -> "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    return-void

    .line 341
    :cond_4
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    if-ne v0, v1, :cond_5

    .line 342
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    sub-int/2addr v0, v1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    if-gt v0, v1, :cond_5

    .line 343
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    iput v0, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    .line 344
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "computeVideoSize: update width -> "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_5
    return-void

    :catch_0
    move-exception v0

    .line 349
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private synthetic a(Landroid/view/View;)V
    .locals 0

    .line 314
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    if-eqz p1, :cond_0

    .line 315
    invoke-interface {p1}, Lcom/tkay/basead/ui/PlayerView$a;->d()V

    :cond_0
    return-void
.end method

.method private a(Ljava/lang/String;Z)V
    .locals 7

    const-string v0, "40002"

    .line 625
    :goto_0
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 626
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    if-nez v1, :cond_1

    .line 627
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    if-eqz v1, :cond_0

    .line 628
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    const-string v2, "Player show fail with some internal error"

    invoke-static {v0, v2}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v2

    invoke-interface {v1, v2}, Lcom/tkay/basead/ui/PlayerView$a;->a(Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void

    .line 634
    :cond_1
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->j:Ljava/lang/String;

    invoke-static {p1, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/tkay/basead/ui/PlayerView;->d:Z

    .line 636
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->k:Ljava/lang/String;

    invoke-static {p1, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->c:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-lez v1, :cond_3

    const-string v1, ",lastRecycleCheckDownloadedFileSize:"

    const-string v2, ",maxVideoCacheSize:"

    const-string v3, ",readyRate:"

    const-string v4, "AdxPlayer videoUrl:"

    const-string v5, "Video Play Fail:Play Network Url"

    if-eqz p2, :cond_2

    .line 638
    :try_start_1
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/tkay/basead/ui/PlayerView;->c:I

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 640
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/a/j;->c()J

    move-result-wide v2

    invoke-virtual {v6, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 641
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/a/j;->d()J

    move-result-wide v1

    invoke-virtual {v6, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ",isChaoDi:true,ChaoDiThrowableMsg:"

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->e:Ljava/lang/String;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 644
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object v2

    .line 638
    invoke-static {v5, v1, v2}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 646
    :cond_2
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/tkay/basead/ui/PlayerView;->c:I

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 648
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/a/j;->c()J

    move-result-wide v2

    invoke-virtual {v6, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 649
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/a/j;->d()J

    move-result-wide v1

    invoke-virtual {v6, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 650
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object v2

    .line 646
    invoke-static {v5, v1, v2}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 654
    :cond_3
    :goto_1
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    .line 656
    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v2

    const-string v3, "http"

    invoke-virtual {v2, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const-string v3, "Tkay_ExoPlayer"

    if-eqz v2, :cond_4

    .line 657
    :try_start_2
    new-instance v2, Lcom/tkay/expressad/exoplayer/h/o$c;

    new-instance v4, Lcom/tkay/expressad/exoplayer/j/q;

    invoke-direct {v4, v3}, Lcom/tkay/expressad/exoplayer/j/q;-><init>(Ljava/lang/String;)V

    invoke-direct {v2, v4}, Lcom/tkay/expressad/exoplayer/h/o$c;-><init>(Lcom/tkay/expressad/exoplayer/j/h$a;)V

    .line 659
    invoke-virtual {v2, v1}, Lcom/tkay/expressad/exoplayer/h/o$c;->a(Landroid/net/Uri;)Lcom/tkay/expressad/exoplayer/h/o;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->h:Lcom/tkay/expressad/exoplayer/h/s;

    goto :goto_2

    .line 661
    :cond_4
    new-instance v2, Lcom/tkay/expressad/exoplayer/h/o$c;

    new-instance v4, Lcom/tkay/expressad/exoplayer/j/o;

    .line 662
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v4, v5, v3}, Lcom/tkay/expressad/exoplayer/j/o;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    invoke-direct {v2, v4}, Lcom/tkay/expressad/exoplayer/h/o$c;-><init>(Lcom/tkay/expressad/exoplayer/j/h$a;)V

    .line 663
    invoke-virtual {v2, v1}, Lcom/tkay/expressad/exoplayer/h/o$c;->a(Landroid/net/Uri;)Lcom/tkay/expressad/exoplayer/h/o;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->h:Lcom/tkay/expressad/exoplayer/h/s;

    .line 665
    :goto_2
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    iget-object v2, p0, Lcom/tkay/basead/ui/PlayerView;->i:Landroid/view/TextureView;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/ad;->a(Landroid/view/TextureView;)V

    .line 666
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    iget-object v2, p0, Lcom/tkay/basead/ui/PlayerView;->h:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/h/s;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_5
    return-void

    :catchall_0
    move-exception v1

    .line 669
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 671
    iget-object v2, p0, Lcom/tkay/basead/ui/PlayerView;->k:Ljava/lang/String;

    invoke-static {p1, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_7

    if-eqz p2, :cond_6

    goto :goto_3

    .line 676
    :cond_6
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->e:Ljava/lang/String;

    .line 677
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->k:Ljava/lang/String;

    const/4 p2, 0x1

    goto/16 :goto_0

    .line 672
    :cond_7
    :goto_3
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    if-eqz p1, :cond_8

    .line 673
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/tkay/basead/ui/PlayerView$a;->a(Lcom/tkay/basead/c/e;)V

    :cond_8
    return-void
.end method

.method private a(Z)V
    .locals 10

    const-string v0, ", "

    .line 1431
    new-instance v1, Ljava/io/File;

    iget-object v2, p0, Lcom/tkay/basead/ui/PlayerView;->j:Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1432
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->k:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    move v1, v3

    goto :goto_0

    .line 1435
    :cond_0
    iput-boolean v3, p0, Lcom/tkay/basead/ui/PlayerView;->G:Z

    move v1, v2

    :goto_0
    if-eqz v1, :cond_2

    .line 302
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    if-eqz p1, :cond_1

    const-string v0, "40002"

    const-string v1, "Video file and net url is empty!"

    .line 303
    invoke-static {v0, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/tkay/basead/ui/PlayerView$a;->a(Lcom/tkay/basead/c/e;)V

    :cond_1
    return-void

    .line 2321
    :cond_2
    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    const/high16 v4, 0x3f800000    # 1.0f

    if-eqz v1, :cond_3

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    if-nez v1, :cond_8

    .line 2327
    :cond_3
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/basead/ui/PlayerView;->g()Ljava/lang/String;

    move-result-object v1

    iget v5, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    iget v6, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    .line 3089
    invoke-static {v1}, Lcom/tkay/basead/a/b/g;->a(Ljava/lang/String;)Lcom/tkay/basead/a/b/g$a;

    move-result-object v1

    if-nez v1, :cond_4

    const/4 v1, 0x0

    goto :goto_1

    .line 3094
    :cond_4
    iget v7, v1, Lcom/tkay/basead/a/b/g$a;->a:I

    .line 3095
    iget v8, v1, Lcom/tkay/basead/a/b/g$a;->b:I

    int-to-float v7, v7

    mul-float/2addr v7, v4

    int-to-float v8, v8

    div-float/2addr v7, v8

    int-to-float v8, v5

    mul-float/2addr v8, v4

    int-to-float v9, v6

    div-float/2addr v8, v9

    cmpg-float v8, v7, v8

    if-gez v8, :cond_5

    .line 3102
    iput v6, v1, Lcom/tkay/basead/a/b/g$a;->b:I

    .line 3103
    iget v5, v1, Lcom/tkay/basead/a/b/g$a;->b:I

    int-to-float v5, v5

    mul-float/2addr v5, v7

    float-to-int v5, v5

    iput v5, v1, Lcom/tkay/basead/a/b/g$a;->a:I

    goto :goto_1

    .line 3106
    :cond_5
    iput v5, v1, Lcom/tkay/basead/a/b/g$a;->a:I

    .line 3107
    iget v5, v1, Lcom/tkay/basead/a/b/g$a;->a:I

    int-to-float v5, v5

    div-float/2addr v5, v7

    float-to-int v5, v5

    iput v5, v1, Lcom/tkay/basead/a/b/g$a;->b:I

    :goto_1
    if-eqz v1, :cond_6

    .line 2330
    iget v5, v1, Lcom/tkay/basead/a/b/g$a;->a:I

    iput v5, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    .line 2331
    iget v1, v1, Lcom/tkay/basead/a/b/g$a;->b:I

    iput v1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    .line 2334
    :cond_6
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v5, "computeVideoSize: "

    invoke-direct {v1, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v5, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v5, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 2336
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    if-ne v0, v1, :cond_7

    .line 2337
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    sub-int/2addr v0, v1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    if-gt v0, v1, :cond_8

    .line 2338
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    iput v0, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    .line 2339
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "computeVideoSize: update height -> "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 2341
    :cond_7
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    if-ne v0, v1, :cond_8

    .line 2342
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    sub-int/2addr v0, v1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    if-gt v0, v1, :cond_8

    .line 2343
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    iput v0, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    .line 2344
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "computeVideoSize: update width -> "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 2349
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 3608
    :cond_8
    :goto_2
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->i:Landroid/view/TextureView;

    if-nez v0, :cond_a

    .line 3609
    new-instance v0, Landroid/view/TextureView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/view/TextureView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->i:Landroid/view/TextureView;

    .line 3610
    invoke-virtual {v0, v3}, Landroid/view/TextureView;->setKeepScreenOn(Z)V

    .line 3612
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 3613
    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    if-eqz v1, :cond_9

    iget v3, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    if-eqz v3, :cond_9

    .line 3614
    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 3615
    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    :cond_9
    const/16 v1, 0xd

    .line 3617
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 3618
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->removeAllViews()V

    .line 3619
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->i:Landroid/view/TextureView;

    invoke-virtual {p0, v1, v0}, Lcom/tkay/basead/ui/PlayerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 4452
    :cond_a
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    if-nez v0, :cond_c

    .line 4453
    new-instance v0, Lcom/tkay/expressad/exoplayer/f;

    .line 4454
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/f;-><init>(Landroid/content/Context;)V

    new-instance v1, Lcom/tkay/expressad/exoplayer/i/c;

    invoke-direct {v1}, Lcom/tkay/expressad/exoplayer/i/c;-><init>()V

    new-instance v3, Lcom/tkay/expressad/exoplayer/d;

    invoke-direct {v3}, Lcom/tkay/expressad/exoplayer/d;-><init>()V

    .line 4453
    invoke-static {v0, v1, v3}, Lcom/tkay/expressad/exoplayer/i;->a(Lcom/tkay/expressad/exoplayer/ab;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/p;)Lcom/tkay/expressad/exoplayer/ad;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    .line 4456
    new-instance v0, Lcom/tkay/basead/ui/PlayerView$3;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/PlayerView$3;-><init>(Lcom/tkay/basead/ui/PlayerView;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->J:Lcom/tkay/expressad/exoplayer/w$c;

    .line 4585
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/w$c;)V

    .line 4586
    new-instance v0, Lcom/tkay/basead/ui/PlayerView$4;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/PlayerView$4;-><init>(Lcom/tkay/basead/ui/PlayerView;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->K:Lcom/tkay/expressad/exoplayer/l/g;

    .line 4597
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/l/g;)V

    .line 4600
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/PlayerView;->C:Z

    if-eqz v1, :cond_b

    const/4 v4, 0x0

    :cond_b
    invoke-virtual {v0, v4}, Lcom/tkay/expressad/exoplayer/ad;->a(F)V

    .line 4601
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/ad;->a(Z)V

    .line 4603
    invoke-direct {p0}, Lcom/tkay/basead/ui/PlayerView;->g()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1, v2}, Lcom/tkay/basead/ui/PlayerView;->a(Ljava/lang/String;Z)V

    .line 313
    :cond_c
    new-instance p1, Lcom/tkay/basead/ui/-$$Lambda$PlayerView$4-s3xspIf8SMNa8DRmWjbBihJyo;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/-$$Lambda$PlayerView$4-s3xspIf8SMNa8DRmWjbBihJyo;-><init>(Lcom/tkay/basead/ui/PlayerView;)V

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/PlayerView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 0

    .line 59
    iget-boolean p0, p0, Lcom/tkay/basead/ui/PlayerView;->w:Z

    return p0
.end method

.method static synthetic a(Lcom/tkay/basead/ui/PlayerView;Z)Z
    .locals 0

    .line 59
    iput-boolean p1, p0, Lcom/tkay/basead/ui/PlayerView;->H:Z

    return p1
.end method

.method static synthetic b(Lcom/tkay/basead/ui/PlayerView;I)I
    .locals 0

    .line 59
    iput p1, p0, Lcom/tkay/basead/ui/PlayerView;->o:I

    return p1
.end method

.method private b()V
    .locals 2

    .line 358
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->I:Landroid/view/View;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 359
    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method private b(Z)V
    .locals 3

    .line 452
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    if-nez v0, :cond_1

    .line 453
    new-instance v0, Lcom/tkay/expressad/exoplayer/f;

    .line 454
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/f;-><init>(Landroid/content/Context;)V

    new-instance v1, Lcom/tkay/expressad/exoplayer/i/c;

    invoke-direct {v1}, Lcom/tkay/expressad/exoplayer/i/c;-><init>()V

    new-instance v2, Lcom/tkay/expressad/exoplayer/d;

    invoke-direct {v2}, Lcom/tkay/expressad/exoplayer/d;-><init>()V

    .line 453
    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/i;->a(Lcom/tkay/expressad/exoplayer/ab;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/p;)Lcom/tkay/expressad/exoplayer/ad;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    .line 456
    new-instance v0, Lcom/tkay/basead/ui/PlayerView$3;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/PlayerView$3;-><init>(Lcom/tkay/basead/ui/PlayerView;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->J:Lcom/tkay/expressad/exoplayer/w$c;

    .line 585
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/w$c;)V

    .line 586
    new-instance v0, Lcom/tkay/basead/ui/PlayerView$4;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/PlayerView$4;-><init>(Lcom/tkay/basead/ui/PlayerView;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->K:Lcom/tkay/expressad/exoplayer/l/g;

    .line 597
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/l/g;)V

    .line 600
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/PlayerView;->C:Z

    if-eqz v1, :cond_0

    const/4 v1, 0x0

    goto :goto_0

    :cond_0
    const/high16 v1, 0x3f800000    # 1.0f

    :goto_0
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(F)V

    .line 601
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/ad;->a(Z)V

    .line 603
    invoke-direct {p0}, Lcom/tkay/basead/ui/PlayerView;->g()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/tkay/basead/ui/PlayerView;->a(Ljava/lang/String;Z)V

    :cond_1
    return-void
.end method

.method static synthetic b(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 0

    .line 59
    iget-boolean p0, p0, Lcom/tkay/basead/ui/PlayerView;->x:Z

    return p0
.end method

.method static synthetic b(Lcom/tkay/basead/ui/PlayerView;Z)Z
    .locals 0

    .line 59
    iput-boolean p1, p0, Lcom/tkay/basead/ui/PlayerView;->z:Z

    return p1
.end method

.method static synthetic c(Lcom/tkay/basead/ui/PlayerView;I)I
    .locals 0

    .line 59
    iput p1, p0, Lcom/tkay/basead/ui/PlayerView;->p:I

    return p1
.end method

.method private c()V
    .locals 2

    .line 364
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->I:Landroid/view/View;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    .line 365
    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 59
    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->w:Z

    return v0
.end method

.method static synthetic d(Lcom/tkay/basead/ui/PlayerView;I)I
    .locals 0

    .line 59
    iput p1, p0, Lcom/tkay/basead/ui/PlayerView;->q:I

    return p1
.end method

.method static synthetic d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    return-object p0
.end method

.method private d()V
    .locals 2

    .line 370
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->D:Ljava/lang/Thread;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 373
    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->v:Z

    const-wide/16 v0, 0x0

    .line 374
    iput-wide v0, p0, Lcom/tkay/basead/ui/PlayerView;->M:J

    .line 375
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/tkay/basead/ui/-$$Lambda$PlayerView$gv6bnwmnbsoWKbwvRSk5hN5g4h4;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/-$$Lambda$PlayerView$gv6bnwmnbsoWKbwvRSk5hN5g4h4;-><init>(Lcom/tkay/basead/ui/PlayerView;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->D:Ljava/lang/Thread;

    .line 414
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method static synthetic e(Lcom/tkay/basead/ui/PlayerView;)I
    .locals 0

    .line 59
    iget p0, p0, Lcom/tkay/basead/ui/PlayerView;->n:I

    return p0
.end method

.method static synthetic e(Lcom/tkay/basead/ui/PlayerView;I)I
    .locals 0

    .line 59
    iput p1, p0, Lcom/tkay/basead/ui/PlayerView;->r:I

    return p1
.end method

.method private e()V
    .locals 1

    const/4 v0, 0x0

    .line 418
    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->v:Z

    const/4 v0, 0x0

    .line 419
    iput-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->D:Ljava/lang/Thread;

    return-void
.end method

.method private f()Z
    .locals 2

    .line 431
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->j:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 432
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 435
    :cond_0
    iput-boolean v1, p0, Lcom/tkay/basead/ui/PlayerView;->G:Z

    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method static synthetic f(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 0

    .line 59
    iget-boolean p0, p0, Lcom/tkay/basead/ui/PlayerView;->s:Z

    return p0
.end method

.method static synthetic g(Lcom/tkay/basead/ui/PlayerView;)I
    .locals 0

    .line 59
    iget p0, p0, Lcom/tkay/basead/ui/PlayerView;->p:I

    return p0
.end method

.method private g()Ljava/lang/String;
    .locals 2

    .line 442
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->j:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 443
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 444
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->j:Ljava/lang/String;

    return-object v0

    .line 446
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->k:Ljava/lang/String;

    return-object v0
.end method

.method private h()V
    .locals 3

    .line 608
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->i:Landroid/view/TextureView;

    if-nez v0, :cond_1

    .line 609
    new-instance v0, Landroid/view/TextureView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/view/TextureView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->i:Landroid/view/TextureView;

    const/4 v1, 0x1

    .line 610
    invoke-virtual {v0, v1}, Landroid/view/TextureView;->setKeepScreenOn(Z)V

    .line 612
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 613
    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    if-eqz v1, :cond_0

    iget v2, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    if-eqz v2, :cond_0

    .line 614
    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 615
    iget v1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    :cond_0
    const/16 v1, 0xd

    .line 617
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 618
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->removeAllViews()V

    .line 619
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->i:Landroid/view/TextureView;

    invoke-virtual {p0, v1, v0}, Lcom/tkay/basead/ui/PlayerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    return-void
.end method

.method static synthetic h(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 59
    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->s:Z

    return v0
.end method

.method private i()V
    .locals 2

    .line 687
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    if-eqz v0, :cond_0

    .line 688
    invoke-interface {v0}, Lcom/tkay/basead/ui/PlayerView$a;->g()V

    .line 691
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->h:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/h/s;)V

    return-void
.end method

.method static synthetic i(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 0

    .line 59
    iget-boolean p0, p0, Lcom/tkay/basead/ui/PlayerView;->t:Z

    return p0
.end method

.method static synthetic j(Lcom/tkay/basead/ui/PlayerView;)I
    .locals 0

    .line 59
    iget p0, p0, Lcom/tkay/basead/ui/PlayerView;->q:I

    return p0
.end method

.method private synthetic j()V
    .locals 5

    .line 376
    :cond_0
    :goto_0
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->v:Z

    if-eqz v0, :cond_4

    .line 380
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->x:Z

    const-wide/16 v1, 0x0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->isPlaying()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->B:Landroid/os/Handler;

    if-eqz v0, :cond_1

    .line 381
    iput-wide v1, p0, Lcom/tkay/basead/ui/PlayerView;->M:J

    .line 383
    :try_start_0
    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/ad;->t()J

    move-result-wide v1

    long-to-int v1, v1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    const-wide/16 v0, 0xc8

    .line 387
    :try_start_1
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_0

    :catchall_1
    move-exception v0

    .line 389
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    .line 392
    :cond_1
    iget-wide v3, p0, Lcom/tkay/basead/ui/PlayerView;->M:J

    cmp-long v0, v3, v1

    if-nez v0, :cond_2

    .line 393
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/basead/ui/PlayerView;->M:J

    :cond_2
    const-wide/16 v0, 0xa

    .line 396
    :try_start_2
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_1

    :catchall_2
    move-exception v0

    .line 398
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 400
    :goto_1
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/basead/ui/PlayerView;->M:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x1388

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    .line 401
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    if-eqz v0, :cond_3

    .line 402
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/ui/PlayerView$2;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/PlayerView$2;-><init>(Lcom/tkay/basead/ui/PlayerView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    .line 409
    :cond_3
    invoke-direct {p0}, Lcom/tkay/basead/ui/PlayerView;->e()V

    goto :goto_0

    :cond_4
    return-void
.end method

.method static synthetic k(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 59
    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->t:Z

    return v0
.end method

.method static synthetic l(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 0

    .line 59
    iget-boolean p0, p0, Lcom/tkay/basead/ui/PlayerView;->u:Z

    return p0
.end method

.method public static synthetic lambda$4-s3xspIf8SMNa8DRmWjbBihJyo(Lcom/tkay/basead/ui/PlayerView;Landroid/view/View;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/PlayerView;->a(Landroid/view/View;)V

    return-void
.end method

.method public static synthetic lambda$gv6bnwmnbsoWKbwvRSk5hN5g4h4(Lcom/tkay/basead/ui/PlayerView;)V
    .locals 0

    invoke-direct {p0}, Lcom/tkay/basead/ui/PlayerView;->j()V

    return-void
.end method

.method static synthetic m(Lcom/tkay/basead/ui/PlayerView;)I
    .locals 0

    .line 59
    iget p0, p0, Lcom/tkay/basead/ui/PlayerView;->r:I

    return p0
.end method

.method static synthetic n(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 59
    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->u:Z

    return v0
.end method

.method static synthetic o(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 0

    .line 59
    iget-boolean p0, p0, Lcom/tkay/basead/ui/PlayerView;->H:Z

    return p0
.end method

.method static synthetic p(Lcom/tkay/basead/ui/PlayerView;)V
    .locals 1

    .line 9687
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    if-eqz v0, :cond_0

    .line 9688
    invoke-interface {v0}, Lcom/tkay/basead/ui/PlayerView$a;->g()V

    .line 9691
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    iget-object p0, p0, Lcom/tkay/basead/ui/PlayerView;->h:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/h/s;)V

    return-void
.end method

.method static synthetic q(Lcom/tkay/basead/ui/PlayerView;)V
    .locals 0

    .line 59
    invoke-direct {p0}, Lcom/tkay/basead/ui/PlayerView;->e()V

    return-void
.end method

.method static synthetic r(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/expressad/exoplayer/ad;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/basead/ui/PlayerView;)Ljava/lang/String;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/tkay/basead/ui/PlayerView;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 0

    .line 59
    iget-boolean p0, p0, Lcom/tkay/basead/ui/PlayerView;->y:Z

    return p0
.end method

.method static synthetic u(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 0

    .line 59
    iget-boolean p0, p0, Lcom/tkay/basead/ui/PlayerView;->z:Z

    return p0
.end method

.method static synthetic v(Lcom/tkay/basead/ui/PlayerView;)V
    .locals 1

    .line 10358
    iget-object p0, p0, Lcom/tkay/basead/ui/PlayerView;->I:Landroid/view/View;

    if-eqz p0, :cond_0

    const/4 v0, 0x0

    .line 10359
    invoke-virtual {p0, v0}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic w(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 59
    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->y:Z

    return v0
.end method

.method static synthetic x(Lcom/tkay/basead/ui/PlayerView;)I
    .locals 0

    .line 59
    iget p0, p0, Lcom/tkay/basead/ui/PlayerView;->o:I

    return p0
.end method

.method static synthetic y(Lcom/tkay/basead/ui/PlayerView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 59
    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->x:Z

    return v0
.end method

.method static synthetic z(Lcom/tkay/basead/ui/PlayerView;)Landroid/view/TextureView;
    .locals 0

    .line 59
    iget-object p0, p0, Lcom/tkay/basead/ui/PlayerView;->i:Landroid/view/TextureView;

    return-object p0
.end method


# virtual methods
.method public autoFitVideoSize(IILandroid/view/View;)V
    .locals 3

    .line 807
    invoke-virtual {p3}, Landroid/view/View;->getMeasuredWidth()I

    move-result v0

    .line 808
    invoke-virtual {p3}, Landroid/view/View;->getMeasuredHeight()I

    move-result v1

    int-to-float p1, p1

    int-to-float v0, v0

    div-float v0, p1, v0

    int-to-float p2, p2

    int-to-float v1, v1

    div-float v1, p2, v1

    .line 810
    invoke-static {v0, v1}, Ljava/lang/Math;->max(FF)F

    move-result v0

    div-float/2addr p1, v0

    float-to-double v1, p1

    .line 812
    invoke-static {v1, v2}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v1

    double-to-int p1, v1

    div-float/2addr p2, v0

    float-to-double v0, p2

    .line 813
    invoke-static {v0, v1}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v0

    double-to-int p2, v0

    .line 815
    invoke-virtual {p3}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    .line 816
    iput p1, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 817
    iput p2, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 821
    invoke-virtual {p3, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public getCurrentPosition()I
    .locals 2

    .line 765
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->n:I

    const/4 v1, 0x0

    invoke-static {v0, v1}, Ljava/lang/Math;->max(II)I

    move-result v0

    return v0
.end method

.method public getVideoLength()I
    .locals 1

    .line 769
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->o:I

    return v0
.end method

.method public hasVideo()Z
    .locals 1

    .line 773
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->G:Z

    return v0
.end method

.method public initMuteStatus(Z)V
    .locals 0

    .line 777
    iput-boolean p1, p0, Lcom/tkay/basead/ui/PlayerView;->C:Z

    return-void
.end method

.method public isComplete()Z
    .locals 1

    .line 781
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->x:Z

    return v0
.end method

.method public isMute()Z
    .locals 1

    .line 761
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->C:Z

    return v0
.end method

.method public isPlaying()Z
    .locals 1

    .line 757
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ad;->J()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public load(Ljava/lang/String;Z)V
    .locals 9

    const-string v0, ", "

    .line 423
    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->k:Ljava/lang/String;

    .line 424
    invoke-static {}, Lcom/tkay/basead/a/f;->a()Lcom/tkay/basead/a/f;

    const/4 v1, 0x4

    invoke-static {v1, p1}, Lcom/tkay/basead/a/f;->a(ILjava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->j:Ljava/lang/String;

    .line 5431
    new-instance p1, Ljava/io/File;

    iget-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->j:Ljava/lang/String;

    invoke-direct {p1, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 5432
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result p1

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->k:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    move p1, v2

    goto :goto_0

    .line 5435
    :cond_0
    iput-boolean v2, p0, Lcom/tkay/basead/ui/PlayerView;->G:Z

    move p1, v1

    :goto_0
    if-eqz p1, :cond_2

    .line 5302
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    if-eqz p1, :cond_1

    const-string p2, "40002"

    const-string v0, "Video file and net url is empty!"

    .line 5303
    invoke-static {p2, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/tkay/basead/ui/PlayerView$a;->a(Lcom/tkay/basead/c/e;)V

    :cond_1
    return-void

    .line 6321
    :cond_2
    iget p1, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    const/high16 v3, 0x3f800000    # 1.0f

    if-eqz p1, :cond_3

    iget p1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    if-nez p1, :cond_8

    .line 6327
    :cond_3
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/basead/ui/PlayerView;->g()Ljava/lang/String;

    move-result-object p1

    iget v4, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    iget v5, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    .line 7089
    invoke-static {p1}, Lcom/tkay/basead/a/b/g;->a(Ljava/lang/String;)Lcom/tkay/basead/a/b/g$a;

    move-result-object p1

    if-nez p1, :cond_4

    const/4 p1, 0x0

    goto :goto_1

    .line 7094
    :cond_4
    iget v6, p1, Lcom/tkay/basead/a/b/g$a;->a:I

    .line 7095
    iget v7, p1, Lcom/tkay/basead/a/b/g$a;->b:I

    int-to-float v6, v6

    mul-float/2addr v6, v3

    int-to-float v7, v7

    div-float/2addr v6, v7

    int-to-float v7, v4

    mul-float/2addr v7, v3

    int-to-float v8, v5

    div-float/2addr v7, v8

    cmpg-float v7, v6, v7

    if-gez v7, :cond_5

    .line 7102
    iput v5, p1, Lcom/tkay/basead/a/b/g$a;->b:I

    .line 7103
    iget v4, p1, Lcom/tkay/basead/a/b/g$a;->b:I

    int-to-float v4, v4

    mul-float/2addr v4, v6

    float-to-int v4, v4

    iput v4, p1, Lcom/tkay/basead/a/b/g$a;->a:I

    goto :goto_1

    .line 7106
    :cond_5
    iput v4, p1, Lcom/tkay/basead/a/b/g$a;->a:I

    .line 7107
    iget v4, p1, Lcom/tkay/basead/a/b/g$a;->a:I

    int-to-float v4, v4

    div-float/2addr v4, v6

    float-to-int v4, v4

    iput v4, p1, Lcom/tkay/basead/a/b/g$a;->b:I

    :goto_1
    if-eqz p1, :cond_6

    .line 6330
    iget v4, p1, Lcom/tkay/basead/a/b/g$a;->a:I

    iput v4, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    .line 6331
    iget p1, p1, Lcom/tkay/basead/a/b/g$a;->b:I

    iput p1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    .line 6334
    :cond_6
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v4, "computeVideoSize: "

    invoke-direct {p1, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v4, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 6336
    iget p1, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    if-ne p1, v0, :cond_7

    .line 6337
    iget p1, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    sub-int/2addr p1, v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    if-gt p1, v0, :cond_8

    .line 6338
    iget p1, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    iput p1, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    .line 6339
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "computeVideoSize: update height -> "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 6341
    :cond_7
    iget p1, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    if-ne p1, v0, :cond_8

    .line 6342
    iget p1, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    sub-int/2addr p1, v0

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v0

    if-gt p1, v0, :cond_8

    .line 6343
    iget p1, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    iput p1, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    .line 6344
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "computeVideoSize: update width -> "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 6349
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 7608
    :cond_8
    :goto_2
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->i:Landroid/view/TextureView;

    if-nez p1, :cond_a

    .line 7609
    new-instance p1, Landroid/view/TextureView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/view/TextureView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->i:Landroid/view/TextureView;

    .line 7610
    invoke-virtual {p1, v2}, Landroid/view/TextureView;->setKeepScreenOn(Z)V

    .line 7612
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v0, -0x1

    invoke-direct {p1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 7613
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->l:I

    if-eqz v0, :cond_9

    iget v2, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    if-eqz v2, :cond_9

    .line 7614
    iput v0, p1, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 7615
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->m:I

    iput v0, p1, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    :cond_9
    const/16 v0, 0xd

    .line 7617
    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 7618
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->removeAllViews()V

    .line 7619
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->i:Landroid/view/TextureView;

    invoke-virtual {p0, v0, p1}, Lcom/tkay/basead/ui/PlayerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 8452
    :cond_a
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    if-nez p1, :cond_c

    .line 8453
    new-instance p1, Lcom/tkay/expressad/exoplayer/f;

    .line 8454
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/tkay/expressad/exoplayer/f;-><init>(Landroid/content/Context;)V

    new-instance v0, Lcom/tkay/expressad/exoplayer/i/c;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/i/c;-><init>()V

    new-instance v2, Lcom/tkay/expressad/exoplayer/d;

    invoke-direct {v2}, Lcom/tkay/expressad/exoplayer/d;-><init>()V

    .line 8453
    invoke-static {p1, v0, v2}, Lcom/tkay/expressad/exoplayer/i;->a(Lcom/tkay/expressad/exoplayer/ab;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/p;)Lcom/tkay/expressad/exoplayer/ad;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    .line 8456
    new-instance p1, Lcom/tkay/basead/ui/PlayerView$3;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/PlayerView$3;-><init>(Lcom/tkay/basead/ui/PlayerView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->J:Lcom/tkay/expressad/exoplayer/w$c;

    .line 8585
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/w$c;)V

    .line 8586
    new-instance p1, Lcom/tkay/basead/ui/PlayerView$4;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/PlayerView$4;-><init>(Lcom/tkay/basead/ui/PlayerView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->K:Lcom/tkay/expressad/exoplayer/l/g;

    .line 8597
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/ad;->a(Lcom/tkay/expressad/exoplayer/l/g;)V

    .line 8600
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->C:Z

    if-eqz v0, :cond_b

    const/4 v3, 0x0

    :cond_b
    invoke-virtual {p1, v3}, Lcom/tkay/expressad/exoplayer/ad;->a(F)V

    .line 8601
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/exoplayer/ad;->a(Z)V

    .line 8603
    invoke-direct {p0}, Lcom/tkay/basead/ui/PlayerView;->g()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1, v1}, Lcom/tkay/basead/ui/PlayerView;->a(Ljava/lang/String;Z)V

    .line 5313
    :cond_c
    new-instance p1, Lcom/tkay/basead/ui/-$$Lambda$PlayerView$4-s3xspIf8SMNa8DRmWjbBihJyo;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/-$$Lambda$PlayerView$4-s3xspIf8SMNa8DRmWjbBihJyo;-><init>(Lcom/tkay/basead/ui/PlayerView;)V

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/PlayerView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 826
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onDetachedFromWindow()V

    .line 828
    invoke-virtual {p0}, Lcom/tkay/basead/ui/PlayerView;->release()V

    return-void
.end method

.method protected onRestoreInstanceState(Landroid/os/Parcelable;)V
    .locals 2

    .line 195
    check-cast p1, Lcom/tkay/basead/ui/PlayerView$b;

    .line 196
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onRestoreInstanceState..."

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/basead/ui/PlayerView$b;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 197
    invoke-virtual {p1}, Lcom/tkay/basead/ui/PlayerView$b;->getSuperState()Landroid/os/Parcelable;

    move-result-object v0

    invoke-super {p0, v0}, Landroid/widget/RelativeLayout;->onRestoreInstanceState(Landroid/os/Parcelable;)V

    .line 198
    iget v0, p1, Lcom/tkay/basead/ui/PlayerView$b;->a:I

    iput v0, p0, Lcom/tkay/basead/ui/PlayerView;->n:I

    .line 199
    iget-boolean v0, p1, Lcom/tkay/basead/ui/PlayerView$b;->b:Z

    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->s:Z

    .line 200
    iget-boolean v0, p1, Lcom/tkay/basead/ui/PlayerView$b;->c:Z

    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->t:Z

    .line 201
    iget-boolean v0, p1, Lcom/tkay/basead/ui/PlayerView$b;->d:Z

    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->u:Z

    .line 202
    iget-boolean v0, p1, Lcom/tkay/basead/ui/PlayerView$b;->e:Z

    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->w:Z

    .line 203
    iget-boolean v0, p1, Lcom/tkay/basead/ui/PlayerView$b;->f:Z

    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->x:Z

    .line 204
    iget-boolean v0, p1, Lcom/tkay/basead/ui/PlayerView$b;->g:Z

    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->C:Z

    .line 205
    iget-boolean p1, p1, Lcom/tkay/basead/ui/PlayerView$b;->h:Z

    iput-boolean p1, p0, Lcom/tkay/basead/ui/PlayerView;->H:Z

    .line 206
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz p1, :cond_1

    .line 207
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->C:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    const/high16 v0, 0x3f800000    # 1.0f

    :goto_0
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(F)V

    :cond_1
    return-void
.end method

.method protected onSaveInstanceState()Landroid/os/Parcelable;
    .locals 3

    .line 175
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onSaveInstanceState()Landroid/os/Parcelable;

    move-result-object v0

    .line 176
    new-instance v1, Lcom/tkay/basead/ui/PlayerView$b;

    invoke-direct {v1, v0}, Lcom/tkay/basead/ui/PlayerView$b;-><init>(Landroid/os/Parcelable;)V

    .line 178
    iget v0, p0, Lcom/tkay/basead/ui/PlayerView;->n:I

    iput v0, v1, Lcom/tkay/basead/ui/PlayerView$b;->a:I

    .line 179
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->s:Z

    iput-boolean v0, v1, Lcom/tkay/basead/ui/PlayerView$b;->b:Z

    .line 180
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->t:Z

    iput-boolean v0, v1, Lcom/tkay/basead/ui/PlayerView$b;->c:Z

    .line 181
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->u:Z

    iput-boolean v0, v1, Lcom/tkay/basead/ui/PlayerView$b;->d:Z

    .line 182
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->w:Z

    iput-boolean v0, v1, Lcom/tkay/basead/ui/PlayerView$b;->e:Z

    .line 183
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->x:Z

    iput-boolean v0, v1, Lcom/tkay/basead/ui/PlayerView$b;->f:Z

    .line 184
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->C:Z

    iput-boolean v0, v1, Lcom/tkay/basead/ui/PlayerView$b;->g:Z

    .line 185
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->H:Z

    iput-boolean v0, v1, Lcom/tkay/basead/ui/PlayerView$b;->h:Z

    .line 188
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "onSaveInstanceState..."

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PlayerView$b;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-object v1
.end method

.method public pause()V
    .locals 2

    .line 709
    invoke-direct {p0}, Lcom/tkay/basead/ui/PlayerView;->e()V

    .line 711
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 712
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(Z)V

    :cond_0
    return-void
.end method

.method public release()V
    .locals 3

    .line 730
    invoke-direct {p0}, Lcom/tkay/basead/ui/PlayerView;->e()V

    .line 732
    iget-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->y:Z

    if-nez v0, :cond_0

    return-void

    .line 736
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    const/4 v1, 0x0

    if-eqz v0, :cond_4

    .line 737
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ad;->J()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 738
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ad;->m()V

    .line 740
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->J:Lcom/tkay/expressad/exoplayer/w$c;

    if-eqz v0, :cond_2

    .line 741
    iget-object v2, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/exoplayer/ad;->b(Lcom/tkay/expressad/exoplayer/w$c;)V

    .line 743
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->K:Lcom/tkay/expressad/exoplayer/l/g;

    if-eqz v0, :cond_3

    .line 744
    iget-object v2, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/exoplayer/ad;->b(Lcom/tkay/expressad/exoplayer/l/g;)V

    .line 746
    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ad;->n()V

    .line 747
    iput-object v1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    .line 750
    :cond_4
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->B:Landroid/os/Handler;

    if-eqz v0, :cond_5

    .line 751
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    :cond_5
    const/4 v0, 0x0

    .line 753
    iput-boolean v0, p0, Lcom/tkay/basead/ui/PlayerView;->y:Z

    return-void
.end method

.method public setListener(Lcom/tkay/basead/ui/PlayerView$a;)V
    .locals 0

    .line 214
    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    return-void
.end method

.method public setLoadingView(Landroid/view/View;)V
    .locals 0

    .line 354
    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->I:Landroid/view/View;

    return-void
.end method

.method public setMute(Z)V
    .locals 1

    .line 785
    iput-boolean p1, p0, Lcom/tkay/basead/ui/PlayerView;->C:Z

    if-eqz p1, :cond_1

    .line 788
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    .line 789
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(F)V

    .line 792
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    if-eqz p1, :cond_3

    .line 793
    invoke-interface {p1}, Lcom/tkay/basead/ui/PlayerView$a;->e()V

    return-void

    .line 796
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz p1, :cond_2

    const/high16 v0, 0x3f800000    # 1.0f

    .line 797
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/ad;->a(F)V

    .line 800
    :cond_2
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    if-eqz p1, :cond_3

    .line 801
    invoke-interface {p1}, Lcom/tkay/basead/ui/PlayerView$a;->f()V

    :cond_3
    return-void
.end method

.method public setVideoRateConfig(II)V
    .locals 0

    .line 223
    iput p1, p0, Lcom/tkay/basead/ui/PlayerView;->c:I

    .line 224
    iput p2, p0, Lcom/tkay/basead/ui/PlayerView;->b:I

    return-void
.end method

.method public setVideoSize(II)V
    .locals 0

    .line 218
    iput p1, p0, Lcom/tkay/basead/ui/PlayerView;->E:I

    .line 219
    iput p2, p0, Lcom/tkay/basead/ui/PlayerView;->F:I

    return-void
.end method

.method public start()V
    .locals 2

    .line 9364
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->I:Landroid/view/View;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    .line 9365
    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 699
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 700
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/ad;->a(Z)V

    .line 9370
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->D:Ljava/lang/Thread;

    if-nez v0, :cond_2

    .line 9373
    iput-boolean v1, p0, Lcom/tkay/basead/ui/PlayerView;->v:Z

    const-wide/16 v0, 0x0

    .line 9374
    iput-wide v0, p0, Lcom/tkay/basead/ui/PlayerView;->M:J

    .line 9375
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/tkay/basead/ui/-$$Lambda$PlayerView$gv6bnwmnbsoWKbwvRSk5hN5g4h4;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/-$$Lambda$PlayerView$gv6bnwmnbsoWKbwvRSk5hN5g4h4;-><init>(Lcom/tkay/basead/ui/PlayerView;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->D:Ljava/lang/Thread;

    .line 9414
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    :cond_2
    return-void
.end method

.method public stop()V
    .locals 1

    .line 719
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->g:Lcom/tkay/expressad/exoplayer/ad;

    if-eqz v0, :cond_0

    .line 720
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ad;->m()V

    .line 723
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView;->A:Lcom/tkay/basead/ui/PlayerView$a;

    if-eqz v0, :cond_1

    .line 724
    invoke-interface {v0}, Lcom/tkay/basead/ui/PlayerView$a;->b()V

    :cond_1
    return-void
.end method
