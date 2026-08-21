.class public Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;
.super Lcom/tkay/expressad/video/bt/module/BTBaseView;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;
    }
.end annotation


# static fields
.field private static H:Z = false

.field private static final N:Ljava/lang/String; = "2"

.field private static final p:Ljava/lang/String; = "tkay_reward_videoview_item"


# instance fields
.field private A:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;

.field private B:I

.field private C:I

.field private D:Z

.field private E:I

.field private F:I

.field private G:Ljava/lang/String;

.field private I:Z

.field private J:Z

.field private K:Z

.field private L:Landroid/widget/RelativeLayout;

.field private M:Landroid/widget/ProgressBar;

.field private q:Lcom/tkay/expressad/playercommon/PlayerView;

.field private r:Lcom/tkay/expressad/video/widget/SoundImageView;

.field private s:Landroid/widget/TextView;

.field private t:Landroid/view/View;

.field private u:Lcom/tkay/expressad/widget/FeedBackButton;

.field private v:Landroid/webkit/WebView;

.field private w:Lcom/tkay/expressad/videocommon/b/a;

.field private x:I

.field private y:I

.field private z:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 94
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 60
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->x:I

    .line 61
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->y:I

    .line 62
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->z:I

    const/4 v0, 0x2

    .line 66
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->B:I

    .line 68
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->D:Z

    .line 69
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->E:I

    const/4 v0, 0x1

    .line 70
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->F:I

    .line 82
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->I:Z

    .line 84
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->J:Z

    .line 88
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->K:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 98
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 60
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->x:I

    .line 61
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->y:I

    .line 62
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->z:I

    const/4 p2, 0x2

    .line 66
    iput p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->B:I

    .line 68
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->D:Z

    .line 69
    iput p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->E:I

    const/4 p2, 0x1

    .line 70
    iput p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->F:I

    .line 82
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->I:Z

    .line 84
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->J:Z

    .line 88
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->K:Z

    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;)I
    .locals 3

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 795
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ao()I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_0

    .line 796
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ao()I

    move-result p1

    goto :goto_0

    .line 798
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object p1

    .line 799
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    invoke-virtual {p1, v1, v2, v0}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->v()I

    move-result p1

    goto :goto_0

    .line 802
    :cond_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object p1

    .line 803
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    invoke-virtual {p1, v1, v2, v0}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->v()I

    move-result p1

    :goto_0
    return p1
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Lcom/tkay/expressad/playercommon/PlayerView;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    return-object p0
.end method

.method static synthetic a(II)Ljava/lang/String;
    .locals 0

    .line 44
    invoke-static {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b(II)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Z)Z
    .locals 0

    .line 44
    sput-boolean p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->H:Z

    return p0
.end method

.method static synthetic b(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Landroid/webkit/WebView;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    return-object p0
.end method

.method private static b(II)Ljava/lang/String;
    .locals 2

    if-eqz p1, :cond_0

    int-to-float p0, p0

    int-to-float v0, p1

    div-float/2addr p0, v0

    float-to-double v0, p0

    .line 750
    :try_start_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->a(Ljava/lang/Double;)D

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 752
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 755
    :cond_0
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private b()Z
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "tkay_vfpv"

    .line 351
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/playercommon/PlayerView;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    const-string v1, "tkay_sound_switch"

    .line 352
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/video/widget/SoundImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    const-string v1, "tkay_tv_count"

    .line 353
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->s:Landroid/widget/TextView;

    const-string v1, "tkay_rl_playing_close"

    .line 354
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->t:Landroid/view/View;

    const-string v1, "tkay_top_control"

    .line 355
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->L:Landroid/widget/RelativeLayout;

    const-string v1, "tkay_video_progress_bar"

    .line 356
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ProgressBar;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->M:Landroid/widget/ProgressBar;

    .line 357
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/playercommon/PlayerView;->setIsBTVideo(Z)V

    const-string v1, "tkay_native_endcard_feed_btn"

    .line 358
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/widget/FeedBackButton;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->u:Lcom/tkay/expressad/widget/FeedBackButton;

    const/4 v1, 0x4

    new-array v1, v1, [Landroid/view/View;

    .line 359
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    aput-object v3, v1, v0

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    aput-object v3, v1, v2

    const/4 v2, 0x2

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->s:Landroid/widget/TextView;

    aput-object v3, v1, v2

    const/4 v2, 0x3

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->t:Landroid/view/View;

    aput-object v3, v1, v2

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->isNotNULL([Landroid/view/View;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v1

    .line 361
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return v0
.end method

.method static synthetic c(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)I
    .locals 0

    .line 44
    iget p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->B:I

    return p0
.end method

.method private c()V
    .locals 3

    .line 368
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v0

    const/16 v1, 0x5e

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v0

    const/16 v1, 0x11f

    if-ne v0, v1, :cond_0

    goto :goto_0

    .line 371
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->B()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 369
    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 374
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 376
    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->w:Lcom/tkay/expressad/videocommon/b/a;

    :cond_2
    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Landroid/widget/ProgressBar;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->M:Landroid/widget/ProgressBar;

    return-object p0
.end method

.method private d()Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 384
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    .line 385
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->w:Lcom/tkay/expressad/videocommon/b/a;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->w:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v1

    const/4 v2, 0x5

    if-ne v1, v2, :cond_0

    .line 386
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->w:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/b/a;->e()Ljava/lang/String;

    move-result-object v1

    .line 387
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_0

    move-object v0, v1

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 392
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    return-object v0
.end method

.method private static e()I
    .locals 2

    const/4 v0, 0x5

    .line 400
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/c;->b()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object v1

    if-nez v1, :cond_0

    .line 402
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->c()Lcom/tkay/expressad/videocommon/e/a;

    :cond_0
    if-eqz v1, :cond_1

    .line 405
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/a;->g()J

    move-result-wide v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    long-to-int v0, v0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 409
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return v0
.end method

.method static synthetic e(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)Landroid/widget/TextView;
    .locals 0

    .line 44
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->s:Landroid/widget/TextView;

    return-object p0
.end method

.method private f()I
    .locals 4

    .line 809
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    .line 810
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->x()I

    move-result v0

    return v0
.end method


# virtual methods
.method protected final a()V
    .locals 2

    .line 433
    invoke-super {p0}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->a()V

    .line 434
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->h:Z

    if-eqz v0, :cond_0

    .line 435
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$1;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/widget/SoundImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 458
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->t:Landroid/view/View;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$2;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 466
    new-instance v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$3;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$3;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)V

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method public getMute()I
    .locals 1

    .line 222
    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->B:I

    return v0
.end method

.method public init(Landroid/content/Context;)V
    .locals 1

    const-string p1, "tkay_reward_videoview_item"

    .line 145
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->findLayout(Ljava/lang/String;)I

    move-result p1

    if-lez p1, :cond_0

    .line 147
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->f:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 148
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b()Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->h:Z

    .line 152
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a()V

    :cond_0
    const/4 p1, 0x0

    .line 154
    sput-boolean p1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->H:Z

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 4

    .line 183
    invoke-super {p0}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->onAttachedToWindow()V

    .line 184
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->K:Z

    if-nez v0, :cond_0

    .line 185
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/a/c;->e(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->E:I

    .line 187
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->t:Landroid/view/View;

    const/16 v1, 0x8

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    .line 188
    iget v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->y:I

    if-nez v3, :cond_1

    move v3, v1

    goto :goto_0

    :cond_1
    move v3, v2

    :goto_0
    invoke-virtual {v0, v3}, Landroid/view/View;->setVisibility(I)V

    .line 190
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    if-eqz v0, :cond_4

    .line 191
    iget v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->z:I

    if-nez v3, :cond_3

    move v3, v1

    goto :goto_1

    :cond_3
    move v3, v2

    :goto_1
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/video/widget/SoundImageView;->setVisibility(I)V

    .line 193
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->s:Landroid/widget/TextView;

    if-eqz v0, :cond_6

    .line 194
    iget v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->x:I

    if-nez v3, :cond_5

    goto :goto_2

    :cond_5
    move v1, v2

    :goto_2
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 195
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->s:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_6

    .line 196
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 197
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 198
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_1"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    .line 199
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->u:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/widget/FeedBackButton;)V

    :cond_6
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 103
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public onDestory()V
    .locals 2

    .line 329
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 330
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 331
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->release()V

    .line 332
    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    .line 334
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    if-eqz v0, :cond_1

    .line 335
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/widget/SoundImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 337
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->t:Landroid/view/View;

    if-eqz v0, :cond_2

    .line 338
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->t:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 340
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    if-eqz v0, :cond_3

    .line 341
    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    .line 343
    :cond_3
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 345
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onPause()V
    .locals 2

    .line 168
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_0

    .line 169
    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->isPlayIng()Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->J:Z

    .line 170
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/playercommon/PlayerView;->setIsBTVideoPlaying(Z)V

    .line 171
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->onPause()V

    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 2

    .line 158
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 159
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->setDesk(Z)V

    .line 160
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->setIsCovered(Z)V

    .line 161
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->J:Z

    if-eqz v0, :cond_0

    .line 162
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->onResume()V

    :cond_0
    return-void
.end method

.method public onStop()V
    .locals 2

    .line 176
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 177
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->setIsCovered(Z)V

    :cond_0
    return-void
.end method

.method public pause()V
    .locals 3

    .line 295
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_0

    .line 296
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->pause()V

    .line 297
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 298
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    const-string v1, "onPlayerPause"

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 302
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public play()V
    .locals 4

    .line 242
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->K:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, "onPlayerPlay"

    if-nez v0, :cond_3

    .line 243
    :try_start_1
    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->E:I

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    .line 244
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->playMute()Z

    goto :goto_0

    .line 246
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->playUnMute()Z

    .line 248
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->playVideo()Z

    move-result v0

    if-nez v0, :cond_1

    .line 251
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->A:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;

    if-eqz v0, :cond_1

    .line 252
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->A:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;

    const-string v3, "play video failed"

    invoke-virtual {v0, v3}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->onPlayError(Ljava/lang/String;)V

    .line 255
    :cond_1
    iput-boolean v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->K:Z

    .line 256
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    if-eqz v0, :cond_2

    .line 257
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void

    .line 260
    :cond_3
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->D:Z

    const/4 v2, 0x0

    if-eqz v0, :cond_4

    .line 261
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/playercommon/PlayerView;->playVideo(I)Z

    .line 262
    iput-boolean v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->D:Z

    goto :goto_1

    .line 264
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/playercommon/PlayerView;->start(Z)V

    .line 266
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    if-eqz v0, :cond_5

    .line 267
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :cond_5
    return-void

    :catch_0
    move-exception v0

    .line 271
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public playMute()Z
    .locals 5

    const/4 v0, 0x0

    .line 208
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    if-eqz v1, :cond_0

    .line 209
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v1}, Lcom/tkay/expressad/playercommon/PlayerView;->closeSound()V

    .line 210
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/widget/SoundImageView;->setSoundStatus(Z)V

    const/4 v1, 0x1

    .line 211
    iput v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->B:I

    .line 212
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    const-string v3, "onPlayerMute"

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d:Ljava/lang/String;

    invoke-static {v2, v3, v4}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    :catch_0
    move-exception v1

    .line 216
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    return v0
.end method

.method public playUnMute()Z
    .locals 4

    .line 227
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 228
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->openSound()V

    .line 229
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/widget/SoundImageView;->setSoundStatus(Z)V

    const/4 v0, 0x2

    .line 230
    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->B:I

    .line 231
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    const-string v2, "onUnmute"

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d:Ljava/lang/String;

    invoke-static {v0, v2, v3}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    :catch_0
    move-exception v0

    .line 235
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public preLoadData()V
    .locals 7

    .line 1368
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v0

    const/16 v1, 0x5e

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v0

    const/16 v1, 0x11f

    if-ne v0, v1, :cond_0

    goto :goto_0

    .line 1371
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->B()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 1369
    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1374
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 1376
    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->w:Lcom/tkay/expressad/videocommon/b/a;

    .line 416
    :cond_2
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->e()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->C:I

    .line 417
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->G:Ljava/lang/String;

    .line 418
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->h:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->G:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_5

    .line 419
    new-instance v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    invoke-direct {v0, p0, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;Landroid/webkit/WebView;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->A:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;

    .line 420
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    const/4 v3, -0x1

    if-eqz v2, :cond_4

    .line 1795
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->ao()I

    move-result v4

    if-eq v4, v3, :cond_3

    .line 1796
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->ao()I

    move-result v2

    goto :goto_2

    .line 1798
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v2

    .line 1799
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    invoke-virtual {v2, v4, v5, v1}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/e/d;->v()I

    move-result v2

    goto :goto_2

    .line 1802
    :cond_4
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v2

    .line 1803
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    invoke-virtual {v2, v4, v5, v1}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/e/d;->v()I

    move-result v2

    .line 1809
    :goto_2
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v4

    .line 1810
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->c:Ljava/lang/String;

    invoke-virtual {v4, v5, v6, v1}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/e/d;->x()I

    move-result v4

    .line 420
    invoke-virtual {v0, v2, v4}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;->a(II)V

    .line 421
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->setDesk(Z)V

    .line 424
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    iget v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->C:I

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/playercommon/PlayerView;->initBufferIngParam(I)V

    .line 425
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->G:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->ao()I

    move-result v5

    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->A:Lcom/tkay/expressad/video/bt/module/TkayBTVideoView$a;

    invoke-virtual {v0, v2, v4, v5, v6}, Lcom/tkay/expressad/playercommon/PlayerView;->initVFPData(Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/playercommon/VideoPlayerStatusListener;)Z

    .line 426
    iget v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->B:I

    const/4 v2, 0x0

    invoke-virtual {p0, v0, v3, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->soundOperate(IILjava/lang/String;)V

    .line 428
    :cond_5
    sput-boolean v1, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->H:Z

    return-void
.end method

.method public resume()V
    .locals 3

    .line 277
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_1

    .line 278
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->D:Z

    if-eqz v0, :cond_0

    .line 279
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->playVideo(I)Z

    .line 280
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->D:Z

    goto :goto_0

    .line 282
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->onResume()V

    .line 284
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    if-eqz v0, :cond_1

    .line 285
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    const-string v1, "onPlayerResume"

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception v0

    .line 289
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setCampaign(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 4

    .line 110
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    const/high16 v0, 0x41f00000    # 30.0f

    const-string v1, "drawable"

    if-eqz p1, :cond_0

    .line 111
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result p1

    if-lez p1, :cond_0

    .line 112
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->s:Landroid/widget/TextView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_reward_video_time_count_num_bg"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 113
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x2

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    invoke-direct {p1, v1, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 114
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x40a00000    # 5.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    const/4 v1, 0x0

    .line 115
    invoke-virtual {p1, v0, v1, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 116
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->s:Landroid/widget/TextView;

    invoke-virtual {v2, v0, v1, v0, v1}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 117
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->s:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    .line 119
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->s:Landroid/widget/TextView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_reward_shape_progress"

    invoke-static {v2, v3, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 120
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->s:Landroid/widget/TextView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setWidth(I)V

    return-void
.end method

.method public setCloseViewVisable(I)V
    .locals 1

    .line 720
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->t:Landroid/view/View;

    if-nez p1, :cond_0

    const/4 p1, 0x4

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-virtual {v0, p1}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method

.method public setCountDownTextViewVisable(I)V
    .locals 1

    .line 716
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->s:Landroid/widget/TextView;

    if-nez p1, :cond_0

    const/4 p1, 0x4

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setVisibility(I)V

    return-void
.end method

.method public setCreateWebView(Landroid/webkit/WebView;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    return-void
.end method

.method public setNotchPadding(IIII)V
    .locals 4

    if-gtz p1, :cond_0

    .line 772
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->L:Landroid/widget/RelativeLayout;

    invoke-virtual {p1}, Landroid/widget/RelativeLayout;->getPaddingLeft()I

    move-result p1

    :cond_0
    if-gtz p2, :cond_1

    .line 776
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->L:Landroid/widget/RelativeLayout;

    invoke-virtual {p2}, Landroid/widget/RelativeLayout;->getPaddingRight()I

    move-result p2

    :cond_1
    if-gtz p3, :cond_2

    .line 780
    iget-object p3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->L:Landroid/widget/RelativeLayout;

    invoke-virtual {p3}, Landroid/widget/RelativeLayout;->getPaddingTop()I

    move-result p3

    :cond_2
    if-gtz p4, :cond_3

    .line 784
    iget-object p4, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->L:Landroid/widget/RelativeLayout;

    invoke-virtual {p4}, Landroid/widget/RelativeLayout;->getPaddingBottom()I

    move-result p4

    .line 787
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "NOTCH BTVideoView "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v1, 0x4

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x1

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x2

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x3

    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const-string v2, "%1s-%2s-%3s-%4s"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 789
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->L:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, p1, p3, p2, p4}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    return-void
.end method

.method public setOrientation(I)V
    .locals 0

    .line 73
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->F:I

    return-void
.end method

.method public setPlaybackParams(F)V
    .locals 1

    .line 765
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_0

    .line 766
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/PlayerView;->setPlaybackParams(F)V

    :cond_0
    return-void
.end method

.method public setProgressBarState(I)V
    .locals 1

    .line 733
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->M:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_1

    if-nez p1, :cond_0

    const/16 p1, 0x8

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 734
    :goto_0
    invoke-virtual {v0, p1}, Landroid/widget/ProgressBar;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method public setShowClose(I)V
    .locals 0

    .line 724
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->y:I

    return-void
.end method

.method public setShowMute(I)V
    .locals 0

    .line 739
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->z:I

    return-void
.end method

.method public setShowTime(I)V
    .locals 0

    .line 743
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->x:I

    return-void
.end method

.method public setSoundImageViewVisble(I)V
    .locals 1

    .line 712
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    if-nez p1, :cond_0

    const/4 p1, 0x4

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/widget/SoundImageView;->setVisibility(I)V

    return-void
.end method

.method public setVolume(FF)V
    .locals 1

    .line 759
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_0

    .line 760
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/playercommon/PlayerView;->setVolume(FF)V

    :cond_0
    return-void
.end method

.method public soundOperate(IILjava/lang/String;)V
    .locals 2

    .line 125
    iget-boolean p3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->h:Z

    if-eqz p3, :cond_3

    .line 126
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->B:I

    const/4 p3, 0x0

    const/4 v0, 0x2

    const/4 v1, 0x1

    if-ne p1, v1, :cond_0

    .line 128
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    invoke-virtual {p1, p3}, Lcom/tkay/expressad/video/widget/SoundImageView;->setSoundStatus(Z)V

    .line 129
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->closeSound()V

    goto :goto_0

    :cond_0
    if-ne p1, v0, :cond_1

    .line 131
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/video/widget/SoundImageView;->setSoundStatus(Z)V

    .line 132
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->openSound()V

    :cond_1
    :goto_0
    if-ne p2, v1, :cond_2

    .line 136
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/video/widget/SoundImageView;->setVisibility(I)V

    return-void

    :cond_2
    if-ne p2, v0, :cond_3

    .line 138
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->r:Lcom/tkay/expressad/video/widget/SoundImageView;

    invoke-virtual {p1, p3}, Lcom/tkay/expressad/video/widget/SoundImageView;->setVisibility(I)V

    :cond_3
    return-void
.end method

.method public stop()V
    .locals 3

    .line 308
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_0

    .line 309
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->pause()V

    .line 310
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->stop()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 312
    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->prepare()V

    .line 313
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->q:Lcom/tkay/expressad/playercommon/PlayerView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->justSeekTo(I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 315
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 317
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 318
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->v:Landroid/webkit/WebView;

    const-string v1, "onPlayerStop"

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->d:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :cond_0
    return-void

    :catch_1
    move-exception v0

    .line 322
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method
